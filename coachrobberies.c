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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<2426> Local_51 = { 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2477 = 0;
	float fLocal_2478 = 0f;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	struct<17> Local_2488[1];
	int iLocal_2506 = 0;
	var uLocal_2507 = -1;
	var uLocal_2508 = 0;
	var uLocal_2509 = -1;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = -1;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 1073741824;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 1;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	bool bLocal_2527 = false;
	int iLocal_2528 = 0;
	bool bLocal_2529 = false;
	bool bLocal_2530 = false;
	bool bLocal_2531 = false;
	bool bLocal_2532 = false;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	int iLocal_2542 = 0;
	bool bLocal_2543 = false;
	int iLocal_2544 = 0;
	int iLocal_2545 = 0;
	int iLocal_2546 = 0;
	bool bLocal_2547 = false;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	int iLocal_2554 = 0;
	bool bLocal_2555 = false;
	var uLocal_2556 = 0;
	int iLocal_2557 = 0;
	vector3 vLocal_2558 = { 0f, 0f, 0f };
	vector3 vLocal_2561 = { 0f, 0f, 0f };
	vector3 vLocal_2564 = { 0f, 0f, 0f };
	vector3 vLocal_2567 = { 0f, 0f, 0f };
	vector3 vLocal_2570 = { 0f, 0f, 0f };
	vector3 vLocal_2573 = { 0f, 0f, 0f };
	vector3 vLocal_2576 = { 0f, 0f, 0f };
	vector3 vLocal_2579 = { 0f, 0f, 0f };
	struct<6> ScriptParam_0 = { 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_2529 = true;
	iLocal_2546 = 1;
	bLocal_2547 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (Local_51.f_2387 != 0)
		{
			Local_51.f_2387 = 1;
		}
		func_1();
		func_2(&Local_51, iLocal_24, ScriptParam_0.f_3, 1);
	}
	if (ScriptParam_0.f_3 == __LIB_18__::func_922())
	{
		func_4(&Local_51, 8388608);
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_5(ScriptParam_0);
	func_6(ScriptParam_0);
	func_7(0);
	while (true)
	{
		if (iLocal_27 == 3)
		{
		}
		else if (func_8(ScriptParam_0, &Local_51, iLocal_33, iLocal_27, iLocal_25))
		{
			__LIB_8__::func_331(3);
		}
		else if (__LIB_6__::func_702(8192))
		{
			__LIB_8__::func_331(3);
		}
		if (iLocal_27 != 2 && iLocal_27 != 3)
		{
			if (func_11(ScriptParam_0, &Local_51))
			{
				__LIB_8__::func_331(2);
			}
		}
		func_12();
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		func_13();
		func_14();
		if (func_15(&Local_51, 16))
		{
			if (iLocal_26 == 3)
			{
				func_16(&Local_51);
				func_17(&Local_51);
			}
		}
		if (__LIB_6__::func_702(134217728))
		{
			__LIB_8__::func_331(1);
			__LIB_9__::func_739(1);
			__LIB_9__::func_742(1);
			__LIB_9__::func_743(3);
			__LIB_6__::func_704(134217728);
		}
		func_22();
		if (iLocal_27 < 2 && !func_15(&Local_51, 33554432))
		{
			__LIB_6__::func_720(ScriptParam_0.f_3);
		}
		if (__LIB_6__::func_708(iLocal_25))
		{
			if (!__LIB_0__::func_75(&(Local_51.f_2167)) || __LIB_0__::func_265(&(Local_51.f_2167)) < 20f)
			{
				if (!func_15(&Local_51, 33554432))
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				}
			}
		}
		func_27();
		if (!Local_51.f_2394)
		{
			if (Local_51.f_2393)
			{
				if (func_28(Global_36, 30f))
				{
					if (func_29())
					{
						LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_STAGECOACH_ROBBERY"), 50, 0, true);
						Local_51.f_2394 = 1;
					}
				}
			}
		}
		func_30();
		switch (iLocal_27)
		{
			case 0:
				func_31(ScriptParam_0, &Local_51, iLocal_24);
				break;
			case 1:
				func_32();
				switch (iLocal_29)
				{
					case 0:
						func_33(ScriptParam_0);
						break;
					case 1:
						func_34(ScriptParam_0);
						PLAYER::_0x16752DAA7E6D3F72(PLAYER::PLAYER_ID());
						EVENT::_0x4B2B1A891D437CA7(0f);
						switch (iLocal_30)
						{
							case 0:
								func_35(ScriptParam_0);
								break;
							case 1:
								func_36(ScriptParam_0);
								break;
						}
						break;
					case 2:
						func_37(ScriptParam_0);
						break;
				}
				break;
			case 2:
				func_32();
				func_38(ScriptParam_0);
				break;
			case 3:
				func_32();
				if (func_39(&Local_51, ScriptParam_0.f_3))
				{
					func_2(&Local_51, iLocal_24, ScriptParam_0.f_3, 0);
				}
				break;
		}
		if (func_40())
		{
			Global_1392388.f_7 = 1;
		}
		else
		{
			Global_1392388.f_7 = 0;
		}
		iLocal_2477 = (1 + iLocal_2477);
		if (iLocal_2477 == 30)
		{
			iLocal_2477 = 0;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		func_41(&(Local_51.f_25[iVar0 /*679*/]));
		iVar0++;
	}
}

void func_2(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1392388.f_7 = 0;
	if (__LIB_0__::func_75(&(uParam0->f_2167)))
	{
		__LIB_0__::func_37(&(uParam0->f_2167));
	}
	func_43(uParam0, "PRCCH_PASS");
	if (uParam0->f_2387 == 1)
	{
		if (bParam3 && PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 1)
		{
			if (Global_1935630.f_22)
			{
				uParam0->f_2388 = "CR_F_P_ARREST";
			}
			else
			{
				uParam0->f_2388 = "CR_F_P_DEAD";
			}
		}
		func_44(uParam0, iParam2);
		func_45(iParam2, 1);
	}
	__LIB_0__::func_325(&(uParam0->f_2208));
	func_47(uParam0);
	__LIB_0__::func_11();
	func_49(uParam0);
	func_50();
	func_51(iParam1);
	if (!bLocal_14)
	{
		func_52();
	}
	__LIB_6__::func_704(4096);
	__LIB_6__::func_704(536870912);
	if (__LIB_0__::func_272(Global_35, 1))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 364, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 364, false);
	}
	if (uParam0->f_2397)
	{
		PED::_0xEAE3B5B019C8D23F(Global_35, 1);
	}
	if (__LIB_0__::func_272(uParam0->f_2385, 0))
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_2385, false);
	}
	if (PLAYER::_0x03B4B759A8990505(PLAYER::PLAYER_ID()) < 1f)
	{
		PLAYER::_0x83C989D5B5B5B466(PLAYER::PLAYER_ID(), 1f);
	}
	if (PLAYER::_0x9422743A5BA50E10(PLAYER::PLAYER_ID()) != 1f)
	{
		PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1f);
	}
	MISC::_0x1096603B519C905F("");
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	Global_1393237.f_199 = 0;
	if (__LIB_6__::func_708(iParam2) && !bLocal_14)
	{
		if ((uParam0->f_2387 == 5 || (Global_40.f_9146.f_4[iParam2] == 0 && uParam0->f_2387 != 0)) || (bParam3 && PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 32))
		{
			__LIB_0__::func_297();
			__LIB_1__::func_140();
		}
	}
	__LIB_2__::func_353(&(uParam0->f_2422), 1);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("Robberies_Coach_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("Robberies_Coach_Scene");
	}
	if (__LIB_6__::func_708(iParam2) && uParam0->f_2425)
	{
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		__LIB_5__::func_102();
		uParam0->f_2425 = 0;
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4(var uParam0, int iParam1)
{
	uParam0->f_2207 = (uParam0->f_2207 || iParam1);
}

void func_5(struct<6> Param0)
{
	Local_51.f_2387 = -1;
	func_60();
	iLocal_24 = func_61(Param0);
	Local_51 = { __LIB_6__::func_711(Param0.f_3) };
	iLocal_25 = Param0.f_3;
	iLocal_26 = Param0;
	if (!__LIB_6__::func_702(131072))
	{
		MISC::_0x1096603B519C905F(__LIB_6__::func_714(Param0.f_3));
	}
	else
	{
		__LIB_6__::func_704(131072);
	}
	__LIB_6__::func_704(1);
	__LIB_6__::func_704(2);
	__LIB_6__::func_704(32);
	__LIB_6__::func_704(64);
	__LIB_6__::func_704(128);
	__LIB_6__::func_704(256);
	__LIB_6__::func_704(512);
	__LIB_6__::func_704(1024);
	__LIB_6__::func_704(2048);
	__LIB_6__::func_704(8192);
	__LIB_6__::func_704(16384);
	__LIB_6__::func_704(32768);
	__LIB_6__::func_704(262144);
	__LIB_6__::func_704(4194304);
	__LIB_6__::func_704(8388608);
	__LIB_6__::func_704(16777216);
	__LIB_6__::func_704(33554432);
	__LIB_6__::func_704(67108864);
	__LIB_6__::func_704(134217728);
	__LIB_6__::func_704(268435456);
	__LIB_6__::func_704(524288);
	__LIB_6__::func_704(-2147483648);
	__LIB_6__::func_704(1073741824 /* Float: 2f */);
	__LIB_6__::func_704(1048576);
	Local_51.f_3 = Param0.f_2;
}

int func_6(struct<4> Param0, var uParam4, var uParam5)
{
	if (Param0.f_3 == 11)
	{
		func_4(&Local_51, 65536);
		Global_40.f_9146.f_111[Param0.f_3] = 0;
		return 1;
	}
	return 0;
}

void func_7(bool bParam0)
{
	int iVar0;
	iVar0 = 932;
	while (iVar0 <= 952)
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(__LIB_1__::func_334(iVar0)) || bParam0)
		{
			__LIB_3__::func_229(iVar0);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(__LIB_1__::func_334(883)) || bParam0)
	{
		__LIB_3__::func_229(883);
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(__LIB_1__::func_334(884)) || bParam0)
	{
		__LIB_3__::func_229(884);
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(__LIB_1__::func_334(552)) || bParam0)
	{
		__LIB_3__::func_229(552);
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(__LIB_1__::func_334(553)) || bParam0)
	{
		__LIB_3__::func_229(553);
	}
}

bool func_8(struct<6> Param0, var uParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bVar0 = false;
	bVar1 = true;
	if (__LIB_6__::func_702(4))
	{
		bVar1 = false;
	}
	if (func_15(uParam6, 1))
	{
		if (func_15(uParam6, 65536))
		{
			if (iParam7 < 3)
			{
				if (func_66(uParam6, &(uParam6->f_25[0 /*679*/]), 0, Param0.f_3) && func_67(uParam6))
				{
					func_68(Param0.f_3, 1, 1);
					return true;
				}
			}
		}
		else
		{
			if (func_69(uParam6, bVar1))
			{
				bVar0 = true;
			}
			if (iParam8 != 2)
			{
				if (func_70(Param0))
				{
					if (func_71(uParam6) || (Param0 == 2 && func_15(uParam6, 32)))
					{
						if (func_15(uParam6, 262144) && !func_15(uParam6, 32))
						{
							if (bVar1)
							{
								if (uParam6->f_2266 > 1)
								{
									uParam6->f_2388 = "CR_FM_ABANCOACHS";
								}
								else
								{
									uParam6->f_2388 = "CR_FM_ABANCOACH";
								}
							}
							__LIB_6__::func_705(8388608);
						}
						else if (func_15(uParam6, 32))
						{
							if (bVar1)
							{
								if (uParam6->f_2266 > 1)
								{
									uParam6->f_2388 = "CR_FM_RCRHOS";
								}
								else
								{
									uParam6->f_2388 = func_73(Param0.f_3);
								}
							}
							__LIB_6__::func_705(16777216);
						}
						else
						{
							if (bVar1)
							{
								if (uParam6->f_2266 > 1)
								{
									uParam6->f_2388 = "CR_FM_LEFTCOACHS";
								}
								else
								{
									uParam6->f_2388 = "CR_FM_LEFTCOACH";
								}
							}
							__LIB_6__::func_705(16777216);
						}
						bVar0 = true;
					}
					else if (func_74(uParam6, iParam9))
					{
						if (bVar1)
						{
							uParam6->f_2388 = "CR_F_LDEST";
						}
						__LIB_6__::func_705(67108864);
						bVar0 = true;
					}
				}
				else if (func_75(Param0))
				{
					if (func_71(uParam6) || (func_15(uParam6, 32) && Param0.f_3 != 13))
					{
						if (func_15(uParam6, 32))
						{
							if (bVar1)
							{
								uParam6->f_2388 = func_73(Param0.f_3);
							}
							__LIB_6__::func_705(16777216);
						}
						else if (func_15(uParam6, 262144))
						{
							if (bVar1)
							{
								uParam6->f_2388 = "CR_FM_ABANCOACH";
							}
							__LIB_6__::func_705(8388608);
						}
						else
						{
							if (bVar1)
							{
								uParam6->f_2388 = "CR_FM_LEFTCOACH";
							}
							__LIB_6__::func_705(16777216);
						}
						bVar0 = true;
					}
					else if (func_76(Param0, uParam6))
					{
						if (bVar1)
						{
							uParam6->f_2388 = "CR_FM_ABANDROP";
						}
						bVar0 = true;
					}
					else if (func_15(uParam6, 2))
					{
						if (!func_77(uParam6->f_25[0 /*679*/].f_1))
						{
							if (bVar1)
							{
								uParam6->f_2388 = "CR_FM_WRECKED";
							}
							__LIB_6__::func_705(33554432);
							bVar0 = true;
						}
						if (Param0.f_3 == 4)
						{
							if (!bLocal_15)
							{
								if (__LIB_2__::func_767(598, 0))
								{
									bLocal_15 = true;
								}
							}
							if (__LIB_7__::func_851(2))
							{
								if (bVar1)
								{
									uParam6->f_2388 = "CR_F_F_DEAD";
								}
								__LIB_6__::func_705(33554432);
								bVar0 = true;
							}
							if (bLocal_15 && !__LIB_2__::func_767(598, 0))
							{
								if (bVar1)
								{
									uParam6->f_2388 = "CR_F_F_DEAD";
								}
								__LIB_6__::func_705(33554432);
								bVar0 = true;
							}
							if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1) && BUILTIN::VDIST(uParam6->f_2210, Global_36) < 30f)
							{
								if (bVar1)
								{
									uParam6->f_2388 = "CR_F_F_DEAD";
								}
								__LIB_6__::func_705(33554432);
								bVar0 = true;
							}
						}
					}
					else if (Param0.f_3 == 4)
					{
						if (!bLocal_15)
						{
							if (__LIB_2__::func_767(598, 0))
							{
								bLocal_15 = true;
							}
						}
						if (__LIB_7__::func_851(2))
						{
							if (bVar1)
							{
								uParam6->f_2388 = "CR_F_F_DEAD";
							}
							__LIB_6__::func_705(33554432);
							bVar0 = true;
						}
						if (bLocal_15 && !__LIB_2__::func_767(598, 0))
						{
							if (bVar1)
							{
								uParam6->f_2388 = "CR_F_F_DEAD";
							}
							__LIB_6__::func_705(33554432);
							bVar0 = true;
						}
					}
				}
				else if (func_81(Param0))
				{
					if (Param0.f_3 == 5)
					{
						bVar2 = func_82(uParam6->f_25[0 /*679*/].f_1);
						bVar3 = (uParam6->f_2271 == 1 && !bVar2);
						if (func_83(uParam6, Param0.f_3) || uParam6->f_2271 == 1)
						{
							bVar3 = false;
							if (!ENTITY::IS_ENTITY_AT_ENTITY(Global_35, uParam6->f_25[0 /*679*/].f_1, 275f, 275f, 275f, false, true, 0))
							{
								if (bVar1)
								{
									uParam6->f_2388 = "CR_FM_ABANCOACH";
								}
								__LIB_6__::func_705(8388608);
								bVar0 = true;
							}
						}
						else if (func_15(uParam6, 2))
						{
							if (!ENTITY::IS_ENTITY_AT_ENTITY(Global_35, uParam6->f_25[0 /*679*/].f_252[0 /*78*/], 150f, 150f, 150f, false, true, 0))
							{
								if (bVar1)
								{
									uParam6->f_2388 = "CR_F_LEFTVIP";
								}
								__LIB_6__::func_705(8388608);
								bVar0 = true;
							}
							if (!ENTITY::IS_ENTITY_AT_ENTITY(Global_35, uParam6->f_25[0 /*679*/].f_1, 250f, 250f, 250f, false, true, 0))
							{
								if (bVar1)
								{
									uParam6->f_2388 = "CR_FM_ABANCOACH";
								}
								__LIB_6__::func_705(8388608);
								bVar0 = true;
							}
						}
						if (__LIB_6__::func_702(16384) || bVar3)
						{
							if (bVar3)
							{
								if (bVar1)
								{
									uParam6->f_2388 = "CR_FM_CWRECK";
								}
							}
							else if (bVar1)
							{
								uParam6->f_2388 = func_73(Param0.f_3);
							}
							__LIB_6__::func_705(16777216);
							bVar0 = true;
						}
					}
				}
			}
		}
	}
	else if (!__LIB_6__::func_702(65536))
	{
		if (func_67(uParam6))
		{
			uParam6->f_2387 = 5;
			func_68(Param0.f_3, 1, 1);
			return true;
		}
	}
	if (bVar0)
	{
		if (!__LIB_6__::func_702(4))
		{
			uParam6->f_2387 = 1;
			return true;
		}
	}
	return false;
}

bool func_11(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	bVar0 = false;
	if (func_15(uParam6, 1))
	{
		if (func_81(Param0))
		{
			if (Param0.f_3 != 5 && func_84(uParam6))
			{
				uParam6->f_2388 = "CR_F_LEFTVIP";
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		uParam6->f_2387 = 1;
		return true;
	}
	return false;
}

void func_12()
{
	vector3 vVar0;
	char* sVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	int iVar11;
	char* sVar12;
	char* sVar13;
	bool bVar14;
	bool bVar15;
	if (iLocal_25 != 1)
	{
		return;
	}
	vVar0 = { -1521.967f, 167.1579f, 98.266f };
	sVar3 = "script@proc@robberies@coach@strawberry@push_wagon";
	iVar4 = Local_51.f_25[0 /*679*/].f_410[1 /*22*/];
	if (!__LIB_6__::func_843(16384))
	{
		__LIB_6__::func_841(16384);
	}
	if (iLocal_28 > 2)
	{
		if (!__LIB_6__::func_843(16384))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_2278) && __LIB_0__::func_94(Local_51.f_2278, Global_36, 1) < 50f)
			{
				if (!__LIB_0__::func_104() && !__LIB_0__::func_270())
				{
					__LIB_0__::func_45("CR_HELP_IOBJ", 10000, 0, 0, 0, 1);
					__LIB_6__::func_841(16384);
				}
			}
		}
	}
	if (((iLocal_45 > 11 && iLocal_45 < 21) && iLocal_36 <= 0) && !Local_51.f_25[0 /*679*/].f_9.f_159)
	{
		func_91(Local_51.f_25[0 /*679*/].f_9);
	}
	vVar6 = { -1520.89f, 153.19f, 100.87f };
	fVar9 = 173.02f;
	iVar11 = joaat("LOGWAGON2");
	sVar12 = "CR_LOGWAGON03";
	sVar13 = "CR_LOGWAGON02";
	bVar14 = false;
	bVar15 = false;
	if (iLocal_45 > 2 && ENTITY::IS_ENTITY_DEAD(Local_51.f_2278))
	{
		__LIB_1__::func_281(&(Local_51.f_2276), 1, 1);
		__LIB_1__::func_281(&(Local_51.f_2277), 1, 1);
		return;
	}
	if (!__LIB_6__::func_702(32768))
	{
		if (iLocal_45 > 3 && func_15(&Local_51, 1))
		{
			if (!__LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_410[1 /*22*/], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51.f_25[0 /*679*/].f_410[1 /*22*/], Global_35, 1, 1))
			{
				bVar15 = true;
			}
			if (!__LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_410[0 /*22*/], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51.f_25[0 /*679*/].f_410[0 /*22*/], Global_35, 1, 1))
			{
				bVar15 = true;
			}
			if (bVar15)
			{
				__LIB_6__::func_705(32768);
			}
		}
	}
	if (__LIB_6__::func_702(1))
	{
		__LIB_1__::func_281(&(Local_51.f_2276), 1, 1);
		__LIB_1__::func_281(&(Local_51.f_2277), 1, 1);
		__LIB_3__::func_319(Local_51.f_2409);
		if (iLocal_45 >= 14)
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_51.f_2278))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_51.f_2278);
			}
		}
		if (!__LIB_6__::func_702(524288))
		{
			if ((BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_51.f_2278, true, false), ENTITY::GET_ENTITY_COORDS(Global_1392388.f_5, true, false)) < 30f && __LIB_2__::func_123(Local_51.f_25[0 /*679*/].f_9, Local_51.f_2278, 0.5f)) && func_95(Local_51.f_2278))
			{
				__LIB_6__::func_705(524288);
			}
		}
		return;
	}
	if (!func_15(&Local_51, 16777216))
	{
		if (iLocal_45 > 10 && iLocal_45 < 21)
		{
			if (iLocal_36 > 0)
			{
				bVar14 = true;
			}
			else if ((func_96(Local_51.f_25[0 /*679*/].f_1, 1101004800 /* Float: 20f */) && !PED::IS_PED_FACING_PED(Local_51.f_25[0 /*679*/].f_9, Global_35, 90f)) && (TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35)))
			{
				func_97(&(Local_51.f_2286), iLocal_25, 28);
				bVar14 = true;
			}
			if (bVar14)
			{
				func_4(&Local_51, 16777216);
			}
		}
	}
	else if (iLocal_45 < 21)
	{
		func_98();
	}
	switch (iLocal_45)
	{
		case 0:
			Local_51.f_2409 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar3, 0, 0, false, true);
			STREAMING::REQUEST_MODEL(iVar11, false);
			VEHICLE::REQUEST_VEHICLE_RECORDING(0, sVar12);
			VEHICLE::REQUEST_VEHICLE_RECORDING(0, sVar13);
			iLocal_45 = 1;
			break;
		case 1:
			if ((STREAMING::HAS_MODEL_LOADED(iVar11) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(0, sVar12)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(0, sVar13))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_51.f_2409);
				Local_51.f_2278 = VEHICLE::CREATE_VEHICLE(iVar11, vVar6, fVar9, true, true, true, false);
				PROPSET::_0xD80FAF919A2E56EA(Local_51.f_2278, joaat("PG_VEH_LOGWAGON2_1"));
				ENTITY::FREEZE_ENTITY_POSITION(Local_51.f_2278, true);
				VEHICLE::_0xFC4F15A7DDDC47B1(Local_51.f_2278, 1);
				iLocal_45 = 2;
			}
			break;
		case 2:
			VEHICLE::SET_PLAYBACK_SPEED(Local_51.f_2278, 0f);
			if (iLocal_28 > 2)
			{
				if (func_99())
				{
					iLocal_45 = 3;
				}
			}
			break;
		case 3:
			OBJECT::DELETE_OBJECT(&(Local_51.f_2280[0]));
			OBJECT::DELETE_OBJECT(&(Local_51.f_2280[1]));
			__LIB_1__::func_148(&(Local_51.f_2185));
			fLocal_2478 = 1f;
			iLocal_45 = 7;
			break;
		case 7:
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_51.f_2410) && !bLocal_2543)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) > 0.5f)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_51.f_2410, "player", Global_35);
				}
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_51.f_2278))
			{
				fVar10 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_51.f_2278);
				if (fVar10 < 7500f)
				{
					fLocal_2478 = (fLocal_2478 + 0.02f);
					if (fLocal_2478 > 1.7f)
					{
						fLocal_2478 = 1.7f;
					}
				}
				else
				{
					fLocal_2478 = (fLocal_2478 - 0.05f);
					if (fLocal_2478 < 1f)
					{
						fLocal_2478 = 1f;
					}
				}
				VEHICLE::SET_PLAYBACK_SPEED(Local_51.f_2278, fLocal_2478);
				if (fVar10 > 3788f && func_95(Global_1392388.f_5))
				{
					if (!__LIB_6__::func_702(32768))
					{
						__LIB_6__::func_705(32768);
					}
					return;
				}
			}
			if ((BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_51.f_2278, true, false), ENTITY::GET_ENTITY_COORDS(Global_1392388.f_5, true, false)) < 30f && __LIB_2__::func_123(Local_51.f_25[0 /*679*/].f_9, Local_51.f_2278, 0.5f)) && func_95(Local_51.f_2278))
			{
				__LIB_1__::func_148(&(Local_51.f_2185));
				func_101(&Local_51);
				__LIB_6__::func_705(524288);
				__LIB_6__::func_830(iLocal_25, "CR_O_ROBCOACH", 1);
				__LIB_2__::func_813(&(Local_51.f_2286), __LIB_1__::func_344("CRST2_BLOCKED"), 0, -1, 0, 0);
				iLocal_45 = 10;
			}
			break;
		case 10:
			if (ENTITY::GET_ENTITY_SPEED(Local_51.f_25[0 /*679*/].f_1) < 0.3f)
			{
				if (!TASK::_0x508F5053E3F6F0C4(Local_51.f_25[0 /*679*/].f_410[0 /*22*/], ENTITY::GET_ENTITY_COORDS(Local_51.f_25[0 /*679*/].f_9, true, false), 1f))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[0 /*679*/].f_410[0 /*22*/], Local_51.f_25[0 /*679*/].f_9, -1, 3120, 51, 1);
				}
				if (!TASK::_0x508F5053E3F6F0C4(Local_51.f_25[0 /*679*/].f_410[1 /*22*/], ENTITY::GET_ENTITY_COORDS(Local_51.f_25[0 /*679*/].f_9, true, false), 1f))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[0 /*679*/].f_410[1 /*22*/], Local_51.f_25[0 /*679*/].f_9, -1, 3120, 51, 1);
				}
				TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[0 /*679*/].f_174, Local_51.f_25[0 /*679*/].f_410[1 /*22*/], -1, 0, 51, 0);
				iLocal_45 = 8;
			}
			break;
		case 8:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_2__::func_813(&(Local_51.f_2286), __LIB_1__::func_344("CRST2_GIVEPUSH"), 0, -1, 0, 0);
				iLocal_45 = 9;
			}
			break;
		case 9:
			if (!__LIB_0__::func_481(1))
			{
				iLocal_45 = 11;
			}
			break;
		case 11:
			if (__LIB_0__::func_265(&(Local_51.f_2185)) > 6.5f)
			{
				if (!func_15(&Local_51, 1024))
				{
					__LIB_6__::func_830(iLocal_25, "CR_O_ROBCOACH", 0);
					func_4(&Local_51, 1024);
				}
				__LIB_1__::func_148(&(Local_51.f_2185));
				TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[0 /*679*/].f_410[0 /*22*/], Local_51.f_25[0 /*679*/].f_410[1 /*22*/], -1, 0, 51, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_51.f_25[0 /*679*/].f_410[1 /*22*/], joaat("WEAPON_UNARMED"), false, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_51.f_25[0 /*679*/].f_410[1 /*22*/], joaat("WEAPON_UNARMED"), false, 1, false, false);
				TASK::TASK_SWAP_WEAPON(Local_51.f_25[0 /*679*/].f_410[1 /*22*/], 1, 1, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar5);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_2570, 1f, -1, 0.5f, 0, vLocal_2573.z);
				TASK::TASK_ACHIEVE_HEADING(0, ENTITY::GET_ENTITY_HEADING(Local_51.f_2278), 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar5);
				TASK::TASK_PERFORM_SEQUENCE(Local_51.f_25[0 /*679*/].f_410[1 /*22*/], iVar5);
				TASK::CLEAR_SEQUENCE_TASK(&iVar5);
				iLocal_45 = 14;
			}
			break;
		case 14:
			if (__LIB_2__::func_215(iVar4, Global_35, 1, 10f, 0) && !PED::IS_PED_ON_MOUNT(iVar4))
			{
				TASK::CLEAR_PED_TASKS(iVar4, true, false);
				TASK::TASK_LOOK_AT_ENTITY(iVar4, Global_35, -1, 3120, 41, 0);
				if (func_107())
				{
					if (!AUDIO::_0xFE5C6177064BD390(1))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar4, WEAPON::GET_BEST_PED_WEAPON(iVar4, false, false), false, 0, false, false);
						TASK::TASK_AIM_GUN_AT_ENTITY(iVar4, Global_35, -1, false, 1);
						func_97(&(Local_51.f_2286), iLocal_25, 53);
					}
				}
				else if (!AUDIO::_0xFE5C6177064BD390(1))
				{
					func_97(&(Local_51.f_2286), iLocal_25, 52);
				}
				iLocal_45 = 12;
			}
			else if (!__LIB_0__::func_163(iVar4, 242628503))
			{
				if (__LIB_6__::func_805(Local_51.f_2409, "PB_PUSH_ONE"))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_51.f_2410))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_51.f_2410, "wagon", Local_51.f_2278);
					}
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2409, "PUSH_PED_A", Local_51.f_25[0 /*679*/].f_410[1 /*22*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2409, "LOGWAGON", Local_51.f_2278, 0);
					__LIB_6__::func_763(Local_51.f_2409, "PB_PUSH_ONE");
					__LIB_1__::func_148(&(Local_51.f_2185));
					iLocal_45 = 15;
				}
			}
			break;
		case 12:
			if (!func_111(iLocal_25, 52) && !func_111(iLocal_25, 53))
			{
				if (func_107())
				{
					iLocal_2544 = 1;
					__LIB_6__::func_705(32768);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_2570, 1f, -1, 0.5f, 0, vLocal_2573.z);
					TASK::TASK_ACHIEVE_HEADING(0, ENTITY::GET_ENTITY_HEADING(Local_51.f_2278), 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar5);
					TASK::TASK_PERFORM_SEQUENCE(iVar4, iVar5);
					TASK::CLEAR_SEQUENCE_TASK(&iVar5);
					iLocal_45 = 13;
				}
			}
			break;
		case 13:
			if (!__LIB_0__::func_163(iVar4, 242628503))
			{
				if (__LIB_6__::func_805(Local_51.f_2409, "PB_PUSH_ONE"))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_51.f_2410))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_51.f_2410, "wagon", Local_51.f_2278);
					}
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2409, "PUSH_PED_A", Local_51.f_25[0 /*679*/].f_410[1 /*22*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2409, "LOGWAGON", Local_51.f_2278, 0);
					__LIB_6__::func_763(Local_51.f_2409, "PB_PUSH_ONE");
					__LIB_1__::func_148(&(Local_51.f_2185));
					iLocal_45 = 15;
				}
			}
			break;
		case 15:
			vLocal_2576 = { -1518.49f, 169.69f, 97.86f };
			WEAPON::SET_CURRENT_PED_WEAPON(Local_51.f_25[0 /*679*/].f_410[0 /*22*/], joaat("WEAPON_UNARMED"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_51.f_25[0 /*679*/].f_410[0 /*22*/], joaat("WEAPON_UNARMED"), false, 1, false, false);
			if (__LIB_0__::func_265(&(Local_51.f_2185)) > 10f)
			{
				TASK::TASK_SWAP_WEAPON(Local_51.f_25[0 /*679*/].f_410[0 /*22*/], 1, 1, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar5);
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_2576, 1f, -1, 0.1f, 2624, vLocal_2579.z);
				TASK::TASK_ACHIEVE_HEADING(0, ENTITY::GET_ENTITY_HEADING(Local_51.f_2278), 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar5);
				TASK::TASK_PERFORM_SEQUENCE(Local_51.f_25[0 /*679*/].f_410[0 /*22*/], iVar5);
				TASK::CLEAR_SEQUENCE_TASK(&iVar5);
				__LIB_1__::func_148(&(Local_51.f_2185));
				iLocal_45 = 16;
			}
			break;
		case 16:
			if (!__LIB_0__::func_163(Local_51.f_25[0 /*679*/].f_410[0 /*22*/], 242628503))
			{
				if (__LIB_6__::func_805(Local_51.f_2409, "PB_PUSH_SUCCESS_ENTER"))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_51.f_2410))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_51.f_2410, "wagon", Local_51.f_2278);
					}
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2409, "PUSH_PED_A", Local_51.f_25[0 /*679*/].f_410[1 /*22*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2409, "PUSH_PED_B", Local_51.f_25[0 /*679*/].f_410[0 /*22*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2409, "LOGWAGON", Local_51.f_2278, 0);
					__LIB_6__::func_763(Local_51.f_2409, "PB_PUSH_SUCCESS_ENTER");
					__LIB_1__::func_148(&(Local_51.f_2185));
					iLocal_45 = 17;
				}
			}
			break;
		case 17:
			if (__LIB_0__::func_265(&(Local_51.f_2185)) > 10f)
			{
				if (__LIB_6__::func_805(Local_51.f_2409, "PB_SUCCESS"))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_51.f_2410))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_51.f_2410, "wagon", Local_51.f_2278);
					}
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2409, "PUSH_PED_A", Local_51.f_25[0 /*679*/].f_410[1 /*22*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2409, "PUSH_PED_B", Local_51.f_25[0 /*679*/].f_410[0 /*22*/], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2409, "LOGWAGON", Local_51.f_2278, 0);
					__LIB_6__::func_763(Local_51.f_2409, "PB_SUCCESS");
					__LIB_1__::func_148(&(Local_51.f_2185));
					iLocal_45 = 18;
				}
			}
			break;
		case 18:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_51.f_2409, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2409) >= 0.75f)
			{
				__LIB_1__::func_148(&(Local_51.f_2185));
				iLocal_45 = 20;
			}
			break;
		case 20:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_51.f_2409, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2409) >= 0.999f)
			{
				__LIB_1__::func_148(&(Local_51.f_2185));
				TASK::OPEN_SEQUENCE_TASK(&iVar5);
				TASK::TASK_MOUNT_ANIMAL(0, Local_51.f_25[0 /*679*/].f_410[1 /*22*/].f_7, -1, Local_51.f_25[0 /*679*/].f_676, 1f, 1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar5);
				TASK::TASK_PERFORM_SEQUENCE(Local_51.f_25[0 /*679*/].f_410[1 /*22*/], iVar5);
				TASK::CLEAR_SEQUENCE_TASK(&iVar5);
				TASK::OPEN_SEQUENCE_TASK(&iVar5);
				TASK::TASK_MOUNT_ANIMAL(0, Local_51.f_25[0 /*679*/].f_410[0 /*22*/].f_7, -1, Local_51.f_25[0 /*679*/].f_676, 1f, 1, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1.25f, -1, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iVar5);
				TASK::TASK_PERFORM_SEQUENCE(Local_51.f_25[0 /*679*/].f_410[0 /*22*/], iVar5);
				TASK::CLEAR_SEQUENCE_TASK(&iVar5);
				iLocal_45 = 21;
			}
			break;
		case 21:
			if (__LIB_0__::func_265(&(Local_51.f_2185)) > 5f)
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_51.f_25[0 /*679*/].f_174, Local_51.f_25[0 /*679*/].f_1, true))
				{
					if (!__LIB_0__::func_163(Local_51.f_25[0 /*679*/].f_174, -1794415470))
					{
						TASK::TASK_ENTER_VEHICLE(Local_51.f_25[0 /*679*/].f_174, Local_51.f_25[0 /*679*/].f_1, -1, Local_51.f_25[0 /*679*/].f_677, 2f, 1, 0);
					}
				}
			}
			if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Local_51.f_25[0 /*679*/].f_410[1 /*22*/], true) && (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Local_51.f_25[0 /*679*/].f_410[0 /*22*/], true) && __LIB_0__::func_94(Local_51.f_25[0 /*679*/].f_410[0 /*22*/], vVar0, 1) < 2f)) && PED::IS_PED_IN_VEHICLE(Local_51.f_25[0 /*679*/].f_174, Local_51.f_25[0 /*679*/].f_1, false))
			{
				__LIB_6__::func_704(524288);
				func_112(&Local_51, iLocal_24, 1);
				if (func_15(&Local_51, 262144))
				{
					func_113(&Local_51, 262144);
				}
				iLocal_45 = 22;
			}
			break;
	}
}

void func_13()
{
	int iVar0;
	if (!func_15(&Local_51, 2))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_51.f_2209))
		{
			if (__LIB_6__::func_690(Global_35, 6))
			{
				iVar0 = __LIB_5__::func_60(Global_35, 6);
				if (__LIB_0__::func_272(iVar0, 1) && PED::_IS_PED_HOGTIED(iVar0))
				{
					Local_51.f_2209 = iVar0;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_51.f_2209, true, true);
				}
			}
		}
	}
}

void func_14()
{
	if (__LIB_0__::func_272(Local_51.f_2385, 0))
	{
		return;
	}
	if (__LIB_0__::func_71(Global_35))
	{
		Local_51.f_2385 = PED::GET_MOUNT(Global_35);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_51.f_2385, true);
	}
}

bool func_15(var uParam0, int iParam1)
{
	return (uParam0->f_2207 && iParam1) != 0;
}

void func_16(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_117(&(uParam0->f_25[iVar0 /*679*/]), Global_35, 1072064102 /* Float: 1.8f */);
		iVar0++;
	}
}

void func_17(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_118(&(uParam0->f_25[iVar0 /*679*/]), Global_35, 1069547520 /* Float: 1.5f */, 1);
		iVar0++;
	}
}

void func_22()
{
	bool bVar0;
	int iVar1;
	if (func_15(&Local_51, 33554432))
	{
		return;
	}
	if (iLocal_26 == 1)
	{
		return;
	}
	if (__LIB_6__::func_702(4))
	{
		return;
	}
	if (!__LIB_6__::func_702(1))
	{
		return;
	}
	if (!func_119(&Local_51))
	{
		return;
	}
	bVar0 = false;
	if (iLocal_26 == 3)
	{
		if (!__LIB_6__::func_702(2))
		{
			return;
		}
		iVar1 = 0;
		while (iVar1 < Local_51.f_2266)
		{
			if (!__LIB_0__::func_86(Local_51.f_25[iVar1 /*679*/].f_631))
			{
				if (BUILTIN::VDIST(Global_36, Local_51.f_25[iVar1 /*679*/].f_631) < 100f)
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			return;
		}
		__LIB_0__::func_267(1);
		__LIB_2__::func_161(Global_1392388.f_10[iLocal_25 /*13*/].f_5, 125f, 5);
		func_4(&Local_51, 33554432);
	}
	else
	{
		if (!__LIB_0__::func_75(&(Local_51.f_2182)))
		{
			__LIB_1__::func_148(&(Local_51.f_2182));
		}
		if (__LIB_0__::func_265(&(Local_51.f_2182)) < 120f)
		{
			return;
		}
		__LIB_0__::func_267(1);
		iVar1 = 0;
		while (iVar1 < Local_51.f_2266)
		{
			if (!__LIB_0__::func_86(Local_51.f_25[iVar1 /*679*/].f_631))
			{
				if (BUILTIN::VDIST(Global_36, Local_51.f_25[iVar1 /*679*/].f_631) < 50f)
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_STAGECOACH_ROBBERY"), 50, 0, false);
			Local_51.f_2393 = 1;
		}
		__LIB_2__::func_161(Global_1392388.f_10[iLocal_25 /*13*/].f_5, 125f, 5);
		func_4(&Local_51, 33554432);
	}
}

void func_27()
{
	if ((((!__LIB_6__::func_702(16384) && !__LIB_6__::func_702(2)) && iLocal_27 < 2) && iLocal_29 != 2) && !func_15(&Local_51, 33554432))
	{
		if (PLAYER::_0xA82964B9D8D6A983() != 0f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		}
	}
	else if (PLAYER::_0xA82964B9D8D6A983() != 1f)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
}

bool func_28(vector3 vParam0, float fParam3)
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	LAW::_0x0C392DB374655176(vParam0, fParam3, iVar1);
	bVar0 = ITEMSET::GET_ITEMSET_SIZE(iVar1) > 0;
	ITEMSET::_CLEAR_ITEMSET(iVar1);
	ITEMSET::CLEAN_ITEMSET(iVar1);
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return bVar0;
}

bool func_29()
{
	int iVar0;
	if (iLocal_26 == 0 || iLocal_26 == 2)
	{
		iVar0 = 0;
		while (iVar0 < Local_51.f_2266)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_25[iVar0 /*679*/].f_1))
			{
				if (BUILTIN::VDIST(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51.f_25[iVar0 /*679*/].f_1, Local_51.f_25[iVar0 /*679*/].f_601)) < 2f)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	if (__LIB_3__::func_996(Global_35))
	{
		return true;
	}
	return false;
}

void func_30()
{
	if (!__LIB_6__::func_702(1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 187, true);
	}
}

void func_31(struct<6> Param0, var uParam6, int iParam7)
{
	switch (iLocal_28)
	{
		case 0:
			func_128(Param0);
			__LIB_9__::func_758(1);
			break;
		case 1:
			func_130(uParam6, iParam7, Param0, iLocal_25);
			__LIB_9__::func_758(2);
			break;
		case 2:
			if (func_131(uParam6, iParam7, Param0, iLocal_25))
			{
				__LIB_9__::func_758(3);
			}
			break;
		case 3:
			__LIB_9__::func_758(4);
			break;
		case 4:
			if (func_132(uParam6, iLocal_25))
			{
				__LIB_9__::func_758(5);
			}
			break;
		case 5:
			func_133(uParam6);
			__LIB_8__::func_331(1);
			break;
	}
}

int func_32()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_51.f_2266)
	{
		if (__LIB_0__::func_272(Local_51.f_25[iVar1 /*679*/].f_9, 3))
		{
			iVar0++;
		}
		if (__LIB_0__::func_272(Local_51.f_25[iVar1 /*679*/].f_174, 3))
		{
			iVar0++;
		}
		iVar2 = 0;
		while (iVar2 < Local_51.f_25[iVar1 /*679*/].f_499)
		{
			if (__LIB_0__::func_272(Local_51.f_25[iVar1 /*679*/].f_410[iVar2 /*22*/], 3))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < Local_51.f_25[iVar1 /*679*/].f_523)
		{
			if (__LIB_0__::func_272(Local_51.f_25[iVar1 /*679*/].f_500[iVar3 /*11*/], 3))
			{
				iVar0++;
			}
			iVar3++;
		}
		iVar4 = 0;
		while (iVar4 < Local_51.f_25[iVar1 /*679*/].f_540)
		{
			if (__LIB_0__::func_272(Local_51.f_25[iVar1 /*679*/].f_524[iVar4 /*15*/], 3))
			{
				iVar0++;
			}
			iVar4++;
		}
		iVar5 = 0;
		while (iVar5 < Local_51.f_25[iVar1 /*679*/].f_595)
		{
			if (__LIB_0__::func_272(Local_51.f_25[iVar1 /*679*/].f_541[iVar5 /*13*/], 3))
			{
				iVar0++;
			}
			iVar5++;
		}
		iVar1++;
	}
	if (func_15(&Local_51, 65536))
	{
		iVar6 = 0;
		while (iVar6 < 2)
		{
			if (__LIB_0__::func_272(Local_51.f_5[iVar6 /*9*/], 3))
			{
				iVar0++;
			}
			iVar6++;
		}
	}
	if (Global_1392388.f_9 != iVar0)
	{
		Global_1392388.f_9 = iVar0;
	}
	return iVar0;
}

void func_33(struct<6> Param0)
{
	struct<4> Var0;
	switch (iLocal_31)
	{
		case 0:
			if (__LIB_6__::func_708(Param0.f_3))
			{
				if (func_15(&Local_51, 8388608))
				{
					if (func_134(Param0.f_3))
					{
						if (!Local_51.f_2425)
						{
							UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
							if (UILOG::_UILOG_IS_ENTRY_REGISTERED(4, __LIB_6__::func_773(Param0.f_3)))
							{
								UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(4, __LIB_6__::func_773(Param0.f_3), 0, "");
							}
							Local_51.f_2425 = 1;
						}
						MISC::CLEAR_AREA(__LIB_6__::func_711(Param0.f_3), 200f, 1048576);
						PED::_0x9851DE7AEC10B4E1(__LIB_6__::func_711(Param0.f_3), 200f, 1, 0);
						__LIB_6__::func_723();
						func_113(&Local_51, 8388608);
					}
					return;
				}
			}
			if (__LIB_0__::func_75(&(Local_51.f_2125)))
			{
				__LIB_0__::func_37(&(Local_51.f_2125));
			}
			__LIB_9__::func_740(1);
			break;
		case 1:
			if (__LIB_0__::func_94(Global_35, Local_51, 1) < __LIB_6__::func_707(Param0.f_3))
			{
				__LIB_6__::func_781(Param0.f_3);
				if (__LIB_6__::func_708(Param0.f_3))
				{
					if (!Local_51.f_2425)
					{
						UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
						if (UILOG::_UILOG_IS_ENTRY_REGISTERED(4, __LIB_6__::func_773(Param0.f_3)))
						{
							UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(4, __LIB_6__::func_773(Param0.f_3), 0, "");
						}
						Local_51.f_2425 = 1;
					}
					if (Param0.f_3 != __LIB_18__::func_922())
					{
						Var0 = { func_140(0) };
						func_141(Var0, Var0.f_3);
					}
					if (iLocal_26 == 3)
					{
						__LIB_10__::func_251(Global_1392388.f_10[iLocal_25 /*13*/].f_8, func_140(0), func_140(1), 0, 1);
					}
					else
					{
						__LIB_10__::func_251(Global_1392388.f_10[iLocal_25 /*13*/].f_8, func_140(0), func_140(2), 0, 2);
					}
				}
				__LIB_9__::func_740(2);
				__LIB_0__::func_325(&(Global_1392388.f_10[Param0.f_3 /*13*/].f_10));
				func_143(Param0);
			}
			break;
		case 2:
			if (!MAP::DOES_BLIP_EXIST(Global_1392388.f_10[Param0.f_3 /*13*/].f_10))
			{
				if (!__LIB_0__::func_75(&(Local_51.f_2125)))
				{
					func_144(Param0.f_3);
					__LIB_1__::func_148(&(Local_51.f_2125));
				}
				else
				{
					func_43(&Local_51, "PRCCH_START");
					if (__LIB_0__::func_265(&(Local_51.f_2125)) > 2f)
					{
						__LIB_0__::func_37(&(Local_51.f_2125));
						__LIB_9__::func_739(1);
						__LIB_9__::func_742(0);
					}
				}
			}
			break;
	}
}

void func_34(struct<6> Param0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		func_145(&(Local_51.f_25[iVar0 /*679*/]), iVar0, Param0);
		iVar0++;
	}
}

void func_35(struct<6> Param0)
{
	int iVar0;
	if (iLocal_32 > 0)
	{
		if (!__LIB_6__::func_702(2))
		{
			if (__LIB_6__::func_702(1))
			{
				if (func_146())
				{
					if (!func_15(&Local_51, 65536))
					{
						__LIB_6__::func_705(2);
					}
				}
			}
		}
	}
	if (!Local_51.f_2415)
	{
		if (func_147(&Local_51, iLocal_25))
		{
			if (func_97(&(Local_51.f_2286), iLocal_25, 2))
			{
				Local_51.f_2415 = 1;
			}
		}
	}
	if (func_148(Param0))
	{
		if ((__LIB_6__::func_702(2) || func_149(&Local_51)) || !__LIB_6__::func_708(iLocal_25))
		{
			func_150();
			__LIB_9__::func_742(1);
			return;
		}
		if (__LIB_6__::func_708(iLocal_25) && iLocal_26 == 0)
		{
			if (__LIB_6__::func_702(1))
			{
				if (!func_15(&Local_51, 32768))
				{
					__LIB_6__::func_830(Param0.f_3, "CR_O_LEAVECOMBAT", 0);
					func_4(&Local_51, 32768);
				}
			}
			else if (!func_15(&Local_51, 16384))
			{
				__LIB_6__::func_830(Param0.f_3, "CR_O_LEAVE", 0);
				func_4(&Local_51, 16384);
			}
		}
	}
	if (iLocal_25 == 5)
	{
		if (__LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 9) && ENTITY::DOES_ENTITY_EXIST(Local_51.f_25[0 /*679*/].f_1))
		{
			iVar0 = Local_51.f_25[0 /*679*/].f_252[0 /*78*/];
			PED::_0x6569F31A01B4C097(iVar0, 15, 1);
		}
	}
	switch (iLocal_32)
	{
		case 0:
			if (__LIB_6__::func_708(Param0.f_3))
			{
				if (!__LIB_0__::func_75(&(Local_51.f_2125)))
				{
					__LIB_1__::func_148(&(Local_51.f_2125));
				}
				if (__LIB_0__::func_265(&(Local_51.f_2125)) < func_151(Param0.f_3))
				{
					return;
				}
			}
			if (!__LIB_6__::func_702(65536))
			{
				if (!func_15(&Local_51, 1))
				{
					func_152(&Local_51, iLocal_24, iLocal_46);
					return;
				}
				if (__LIB_0__::func_75(&(Local_51.f_2125)))
				{
					__LIB_0__::func_37(&(Local_51.f_2125));
				}
				__LIB_9__::func_741(1);
			}
			break;
		case 1:
			if (func_154(&Local_51))
			{
				func_155();
				__LIB_9__::func_741(2);
			}
			if (func_156())
			{
				if (func_157())
				{
					if (func_15(&Local_51, 16))
					{
						__LIB_9__::func_741(4);
					}
					else
					{
						__LIB_9__::func_741(3);
					}
				}
			}
			break;
		case 2:
			if (func_156())
			{
				if (func_157())
				{
					if (func_15(&Local_51, 16))
					{
						__LIB_9__::func_741(4);
					}
					else
					{
						__LIB_9__::func_741(3);
					}
				}
			}
			break;
		case 3:
			func_43(&Local_51, "PRCCH_FIGHT");
			if (func_158())
			{
				__LIB_9__::func_741(4);
			}
			if (func_15(&Local_51, 2) && func_15(&Local_51, 32))
			{
				func_159(&Local_51, iLocal_25, 0);
				func_160(&Local_51, 1);
				func_4(&Local_51, 8);
				__LIB_9__::func_741(4);
			}
			break;
		case 4:
			if (func_161(&(Local_51.f_25[0 /*679*/]), &Local_51, iLocal_26, iLocal_25) || ((ENTITY::DOES_ENTITY_EXIST(Local_51.f_25[1 /*679*/].f_1) && func_161(&(Local_51.f_25[1 /*679*/]), &Local_51, iLocal_26, iLocal_25)) && Local_51.f_25[0 /*679*/].f_612))
			{
				__LIB_1__::func_148(&(Local_51.f_25[0 /*679*/].f_646));
				if (func_81(Param0))
				{
					__LIB_0__::func_325(&(Local_51.f_25[0 /*679*/].f_1.f_2));
					TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], Global_35, -1, 0, 51, 0);
					if (ENTITY::IS_ENTITY_DEAD(Local_51.f_25[0 /*679*/].f_9))
					{
						func_97(&(Local_51.f_2286), iLocal_25, 14);
					}
					else
					{
						func_97(&(Local_51.f_2286), iLocal_25, 16);
					}
					func_162(&(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]));
					PED::SET_PED_CAN_BE_TARGETTED(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], true);
					func_163(&(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]), &(Local_51.f_25[0 /*679*/].f_252[0 /*78*/].f_5), 0, 1, 0);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_51.f_25[0 /*679*/].f_252[0 /*78*/].f_5, "CR_O_STRANGER");
				}
				else if (func_70(Param0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_51.f_25[0 /*679*/].f_500[0 /*11*/]))
					{
						func_164(&(Local_51.f_25[0 /*679*/].f_500[0 /*11*/]), 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_51.f_25[0 /*679*/].f_500[1 /*11*/]))
					{
						func_164(&(Local_51.f_25[0 /*679*/].f_500[1 /*11*/]), 0);
					}
				}
				else if (func_75(Param0))
				{
				}
				__LIB_9__::func_741(5);
			}
			break;
		case 5:
			if (func_15(&Local_51, 16))
			{
				func_165(1097859072 /* Float: 15f */);
				func_166();
			}
			if (func_81(Param0))
			{
				if (__LIB_6__::func_702(2))
				{
					func_43(&Local_51, "PRCCH_LOOT");
				}
				if (iLocal_25 == 5)
				{
					func_167();
				}
			}
			else if (func_70(Param0))
			{
				if (__LIB_6__::func_702(2))
				{
					func_43(&Local_51, "PRCCH_LOOT");
				}
				if (!__LIB_6__::func_702(4))
				{
					if (__LIB_6__::func_702(2))
					{
						if (!func_15(&Local_51, 1024))
						{
							if (!Local_51.f_25[0 /*679*/].f_627)
							{
								if (!__LIB_0__::func_75(&(Local_51.f_2134)))
								{
									__LIB_1__::func_148(&(Local_51.f_2134));
								}
								else if (__LIB_0__::func_265(&(Local_51.f_2134)) > 2f)
								{
									if (__LIB_2__::func_227(-2f, 1, 0, 0))
									{
										if (!func_169(Local_51.f_25[0 /*679*/].f_1))
										{
											if (func_170(&Local_51) > 1)
											{
												__LIB_6__::func_830(Param0.f_3, "CR_O_ROBCOACHS", 0);
											}
											else
											{
												__LIB_6__::func_830(Param0.f_3, "CR_O_ROBCOACH", 0);
											}
										}
										else
										{
											__LIB_6__::func_830(Param0.f_3, "CR_O_ROBCOACHA", 0);
										}
										func_4(&Local_51, 1024);
										__LIB_1__::func_148(&(Local_51.f_2134));
									}
								}
							}
						}
						else if (!func_169(Local_51.f_25[0 /*679*/].f_1))
						{
							if (__LIB_0__::func_265(&(Local_51.f_2134)) > 3f)
							{
								if (!__LIB_6__::func_843(32))
								{
									__LIB_0__::func_45("CR_HELP_LOCK", 10000, 0, 0, 0, 1);
									__LIB_6__::func_841(32);
								}
								__LIB_0__::func_37(&(Local_51.f_2134));
							}
						}
					}
				}
			}
			break;
	}
	if (!func_15(&Local_51, 64))
	{
		if (func_171(&Local_51))
		{
			if (!__LIB_6__::func_702(536870912))
			{
				func_172(Param0.f_3);
				func_173();
				func_4(&Local_51, 64);
			}
		}
	}
	else if (__LIB_6__::func_702(536870912))
	{
		func_174();
	}
}

void func_36(struct<4> Param0, var uParam4, var uParam5)
{
	var uVar0;
	switch (iLocal_34)
	{
		case 0:
			switch (iLocal_26)
			{
				case 0:
				case 2:
				case 3:
					__LIB_9__::func_743(1);
					break;
				case 1:
					__LIB_9__::func_743(2);
					break;
			}
			break;
		case 1:
			__LIB_9__::func_743(3);
			break;
		case 2:
			__LIB_0__::func_325(&(Local_51.f_25[0 /*679*/].f_252[0 /*78*/].f_5));
			__LIB_9__::func_743(3);
			break;
		case 3:
			if (!__LIB_3__::func_425(&uVar0))
			{
				func_176();
			}
			func_43(&Local_51, "PRCCH_PASS");
			Local_51.f_2387 = 0;
			if (__LIB_6__::func_708(Param0.f_3))
			{
				func_177(Param0.f_3);
				if (Local_51.f_2425)
				{
					UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
					__LIB_5__::func_102();
					Local_51.f_2425 = 0;
				}
				__LIB_0__::func_384("MISSION_COMPLETE", "CR_COACH_TO", MISC::GET_HASH_KEY("hud_toasts"), MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
			}
			if (iLocal_25 != 12 && iLocal_25 != 13)
			{
				__LIB_1__::func_994(Global_36, 200f, "Coach robbery", 1, 0, 8, 0, 100f);
			}
			func_180(Param0.f_3, 1);
			if (__LIB_6__::func_708(Param0.f_3))
			{
				__LIB_0__::func_297();
				__LIB_1__::func_140();
			}
			__LIB_8__::func_331(2);
			break;
	}
}

void func_37(struct<6> Param0)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	vVar0 = { 1517.28f, -2114.92f, 43.69f };
	func_34(Param0);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PLAYER::_0x16752DAA7E6D3F72(PLAYER::PLAYER_ID());
	if (func_181(1120403456 /* Float: 100f */) && iLocal_33 > 0)
	{
		if (((((((__LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_9, 0) || __LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_174, 0)) || __LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_410[0 /*22*/], 0)) || __LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_410[1 /*22*/], 0)) || __LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_410[2 /*22*/], 0)) || __LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_410[3 /*22*/], 0)) || __LIB_0__::func_272(Local_51.f_5[0 /*9*/], 0)) || __LIB_0__::func_272(Local_51.f_5[1 /*9*/], 0))
		{
			PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
		}
	}
	iVar4 = 0;
	while (iVar4 < Local_51.f_25[0 /*679*/].f_499)
	{
		func_182(Local_51.f_25[0 /*679*/].f_410[iVar4 /*22*/], 2.5f);
		if (!Local_51.f_25[0 /*679*/].f_410[iVar4 /*22*/].f_15)
		{
			if (__LIB_0__::func_665(Global_35, Local_51.f_25[0 /*679*/].f_410[iVar4 /*22*/], 1, 1) < 50f || __LIB_0__::func_665(Local_51.f_25[0 /*679*/].f_1, Local_51.f_25[0 /*679*/].f_410[iVar4 /*22*/], 1, 1) < 50f)
			{
				func_184(Local_51.f_25[0 /*679*/].f_410[iVar4 /*22*/]);
				Local_51.f_25[0 /*679*/].f_410[iVar4 /*22*/].f_15 = 1;
			}
		}
		iVar4++;
	}
	switch (iLocal_33)
	{
		case 0:
			if (__LIB_0__::func_94(Local_51.f_25[0 /*679*/].f_1, vVar0, 1) > 10f)
			{
				if (ENTITY::GET_ENTITY_SPEED(Local_51.f_25[0 /*679*/].f_1) > 0.1f)
				{
					TASK::_TASK_VEHICLE_DRIVE_TO_POINT_2(Local_51.f_25[0 /*679*/].f_1, vVar0, 15f, 5f, 0);
				}
				else
				{
					func_185(1);
				}
			}
			else
			{
				if (ENTITY::GET_ENTITY_SPEED(Local_51.f_25[0 /*679*/].f_1) > 0.1f)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_51.f_25[0 /*679*/].f_1, 10f, -1, false);
				}
				func_185(1);
			}
			break;
		case 1:
			if (ENTITY::GET_ENTITY_SPEED(Local_51.f_25[0 /*679*/].f_1) < 0.1f)
			{
				__LIB_0__::func_267(1);
				__LIB_0__::func_395(1);
				LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_STAGECOACH_ROBBERY"), 0, 0, 0, 0, 0, 0, 0);
				LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_STAGECOACH_ROBBERY"), 0, 0, true);
				func_187(&Local_51);
				func_188(&Local_51);
				func_184(Local_51.f_5[0 /*9*/]);
				Local_51.f_25[0 /*679*/].f_631 = { ENTITY::GET_ENTITY_COORDS(Local_51.f_25[0 /*679*/].f_1, true, false) };
				func_189(1);
				func_163(&(Local_51.f_5[0 /*9*/]), &(Local_51.f_5[0 /*9*/].f_5), 1, 0, 1);
				func_163(&(Local_51.f_5[1 /*9*/]), &(Local_51.f_5[1 /*9*/].f_5), 1, 0, 1);
				if (!__LIB_6__::func_702(1))
				{
					__LIB_6__::func_705(1);
				}
				BUILTIN::SETTIMERB(0);
				func_185(2);
			}
			break;
		case 2:
			if (BUILTIN::TIMERB() > 400)
			{
				func_184(Local_51.f_5[1 /*9*/]);
				func_185(3);
			}
			break;
		case 3:
			if (!Local_51.f_24)
			{
				if (__LIB_2__::func_227(-2f, 1, 0, 0))
				{
					if (!__LIB_0__::func_272(Global_1392388.f_3, 0))
					{
						__LIB_6__::func_830(Param0.f_3, "CR_O_ESC", 0);
					}
					Local_51.f_24 = 1;
				}
			}
			if (func_146() && Global_1392388.f_9 == 0)
			{
				bVar3 = true;
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				LAW::_0x55F37F5F3F2475E1();
				LAW::_0x292AD61A33A7A485();
				LAW::_0x062B4A4A3396351D(PLAYER::PLAYER_ID());
			}
			if (!__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1) && bVar3)
			{
				__LIB_6__::func_705(2);
				func_185(4);
			}
			break;
		case 4:
			__LIB_0__::func_395(0);
			func_180(Param0.f_3, 1);
			__LIB_8__::func_331(2);
			break;
	}
}

void func_38(struct<6> Param0)
{
	int iVar0;
	if (!__LIB_0__::func_75(&(Local_51.f_2167)))
	{
		__LIB_1__::func_148(&(Local_51.f_2167));
	}
	if (iLocal_25 == 5)
	{
		iVar0 = Local_51.f_25[0 /*679*/].f_252[0 /*78*/];
		if (iLocal_2545 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_PED_HOGTIED(iVar0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					iLocal_2545 = 0;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::_IS_PED_HOGTIED(iVar0))
			{
				iLocal_2545 = 1;
			}
		}
	}
	if (func_15(&Local_51, 16))
	{
		func_165(1097859072 /* Float: 15f */);
		func_166();
	}
	if (!__LIB_6__::func_702(2))
	{
		if (__LIB_6__::func_702(1))
		{
			if (func_146())
			{
				if (!func_15(&Local_51, 65536))
				{
					__LIB_6__::func_705(2);
				}
			}
		}
	}
	if (!func_15(&Local_51, 2))
	{
		if (func_156())
		{
			if (func_157())
			{
				if (func_15(&Local_51, 131072))
				{
					func_113(&Local_51, 131072);
				}
			}
		}
	}
	func_34(Param0);
	if (!func_181(1120403456 /* Float: 100f */) && !func_190())
	{
		__LIB_6__::func_705(2048);
		__LIB_8__::func_331(3);
	}
}

bool func_39(var uParam0, int iParam1)
{
	if (__LIB_6__::func_708(iParam1))
	{
		if (uParam0->f_2387 == 1)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (!func_15(uParam0, -2147483648))
				{
					if (!CAM::_0x139EFB0A71DD9011())
					{
						__LIB_1__::func_193(1, 1);
					}
					BUILTIN::SETTIMERB(0);
					func_4(uParam0, -2147483648);
					uParam0->f_2398 = 0;
					return false;
				}
				uParam0->f_2398++;
				if (((func_15(uParam0, -2147483648) && uParam0->f_2398 >= 10) && !CAM::IS_SCREEN_FADING_OUT()) && (!CAM::_0x139EFB0A71DD9011() || CAM::_0x7CE9DC58E3E4755F()))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					CAM::_0x16E9ABDD34DDD931();
				}
				else if (BUILTIN::TIMERB() > 3000 && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1500);
					CAM::_0x16E9ABDD34DDD931();
				}
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	return true;
}

bool func_40()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_25[iVar0 /*679*/].f_1))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_51.f_25[iVar0 /*679*/].f_1, true, false), Global_36) < 5f)
			{
				if (__LIB_3__::func_982())
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_41(var uParam0)
{
	char* sVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	if (((((uParam0->f_613 || func_15(&Local_51, 131072)) || func_15(&Local_51, 32)) || __LIB_6__::func_702(1024)) || func_193(uParam0, iLocal_24)) || ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		return;
	}
	sVar0 = func_194(iLocal_24);
	if (__LIB_6__::func_702(1))
	{
		fVar11 = func_195(iLocal_24);
		fVar12 = 1.75f;
	}
	else
	{
		fVar11 = 3f;
		fVar12 = 1.25f;
	}
	if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sVar0, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), &iVar4))
	{
		iVar5 = iVar4 + 100;
		if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sVar0, &iVar9))
		{
			if (iVar5 > iVar9)
			{
				iVar5 = iVar9;
			}
			if (TASK::WAYPOINT_RECORDING_GET_COORD(sVar0, iVar5, &vVar6))
			{
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vVar6, 1, &vVar1, 1, 1077936128 /* Float: 3f */, 0))
				{
					if (__LIB_0__::func_272(uParam0->f_9, 0) && PED::IS_PED_IN_VEHICLE(uParam0->f_9, uParam0->f_1, false))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(uParam0->f_9, uParam0->f_1, fVar11, 0);
						PED::SET_PED_KEEP_TASK(uParam0->f_9, true);
					}
					iVar10 = 0;
					while (iVar10 < uParam0->f_499)
					{
						if (__LIB_0__::func_272(uParam0->f_410[iVar10 /*22*/], 0))
						{
							if (PED::IS_PED_ON_MOUNT(uParam0->f_410[iVar10 /*22*/]))
							{
								if (__LIB_0__::func_163(uParam0->f_410[iVar10 /*22*/], -583604717))
								{
									TASK::_TASK_MOVE_IN_TRAFFIC_2(uParam0->f_410[iVar10 /*22*/], vVar1, 1073741824 /* Float: 2f */, fVar12, 1024, 0);
									PED::SET_PED_KEEP_TASK(uParam0->f_410[iVar10 /*22*/], true);
								}
							}
						}
						iVar10++;
					}
				}
			}
		}
	}
}

void func_43(var uParam0, char* sParam1)
{
	if (__LIB_6__::func_702(4))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2284) && MISC::ARE_STRINGS_EQUAL(uParam0->f_2284, sParam1))
	{
		return;
	}
	if (AUDIO::TRIGGER_MUSIC_EVENT(sParam1))
	{
		uParam0->f_2284 = sParam1;
	}
}

void func_44(var uParam0, int iParam1)
{
	if (!__LIB_6__::func_708(iParam1))
	{
		return;
	}
	if (uParam0->f_2387 != 1)
	{
		return;
	}
	if (__LIB_0__::func_75(&(uParam0->f_2167)))
	{
		return;
	}
	func_196(Global_1392388.f_10[iParam1 /*13*/].f_8, uParam0->f_2387, uParam0->f_2388, 0, 0, 0);
	bLocal_14 = true;
}

void func_45(int iParam0, bool bParam1)
{
	__LIB_0__::func_769();
	func_198();
	if (!__LIB_6__::func_706(iParam0))
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_9))
	{
		__LIB_1__::func_544(Global_1392388.f_10[iParam0 /*13*/].f_9);
		VOLUME::_DELETE_VOLUME(Global_1392388.f_10[iParam0 /*13*/].f_9);
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_11))
	{
		MAP::REMOVE_BLIP(&(Global_1392388.f_10[iParam0 /*13*/].f_11));
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_10))
	{
		MAP::REMOVE_BLIP(&(Global_1392388.f_10[iParam0 /*13*/].f_10));
	}
	if (bParam1)
	{
		__LIB_2__::func_161(Global_1392388.f_10[iParam0 /*13*/].f_5, 125f, 5);
	}
	Global_40.f_9146.f_4[iParam0] = 0;
	Global_40.f_9146.f_79[iParam0] = -15;
	if (__LIB_6__::func_708(iParam0))
	{
		Global_40.f_9146.f_3 = -1;
		if (Global_1392388.f_10[iParam0 /*13*/].f_8 == __LIB_0__::func_298(0))
		{
			__LIB_1__::func_645(Global_1392388.f_10[iParam0 /*13*/].f_8);
		}
		else
		{
			__LIB_1__::func_559(Global_1392388.f_10[iParam0 /*13*/].f_8, 1, 2);
		}
	}
	__LIB_13__::func_376(-1);
}

void func_47(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	Global_1392388.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (__LIB_2__::func_1(uParam0->f_25[iVar0 /*679*/].f_9, 0, 1))
		{
			if (!PED::IS_PED_IN_COMBAT(uParam0->f_25[iVar0 /*679*/].f_9, 0))
			{
				__LIB_0__::func_325(&(uParam0->f_25[iVar0 /*679*/].f_9.f_5));
			}
			PED::SET_PED_KEEP_TASK(uParam0->f_25[iVar0 /*679*/].f_9, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_25[iVar0 /*679*/].f_9));
		}
		if (__LIB_2__::func_1(uParam0->f_25[iVar0 /*679*/].f_174, 0, 1))
		{
			if (!PED::IS_PED_IN_COMBAT(uParam0->f_25[iVar0 /*679*/].f_174, 0))
			{
				__LIB_0__::func_325(&(uParam0->f_25[iVar0 /*679*/].f_174.f_5));
			}
			PED::SET_PED_KEEP_TASK(uParam0->f_25[iVar0 /*679*/].f_174, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_25[iVar0 /*679*/].f_174));
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_25[iVar0 /*679*/].f_409)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_25[iVar0 /*679*/].f_252[iVar1 /*78*/]))
			{
				if (!__LIB_2__::func_65(uParam0->f_25[iVar0 /*679*/].f_252[iVar1 /*78*/], 0))
				{
					__LIB_0__::func_325(&(uParam0->f_25[iVar0 /*679*/].f_252[iVar1 /*78*/].f_5));
				}
				if (__LIB_2__::func_1(uParam0->f_25[iVar0 /*679*/].f_252[iVar1 /*78*/], 0, 1))
				{
					PED::SET_PED_KEEP_TASK(uParam0->f_25[iVar0 /*679*/].f_252[iVar1 /*78*/], true);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_25[iVar0 /*679*/].f_252[iVar1 /*78*/]));
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 < uParam0->f_25[iVar0 /*679*/].f_523)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_25[iVar0 /*679*/].f_500[iVar2 /*11*/]))
			{
				if (!__LIB_2__::func_65(uParam0->f_25[iVar0 /*679*/].f_500[iVar2 /*11*/], 0))
				{
					__LIB_0__::func_325(&(uParam0->f_25[iVar0 /*679*/].f_500[iVar2 /*11*/].f_5));
				}
				if (__LIB_2__::func_1(uParam0->f_25[iVar0 /*679*/].f_500[iVar2 /*11*/], 0, 1))
				{
					PED::SET_PED_KEEP_TASK(uParam0->f_25[iVar0 /*679*/].f_500[iVar2 /*11*/], true);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_25[iVar0 /*679*/].f_500[iVar2 /*11*/]));
			}
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < uParam0->f_25[iVar0 /*679*/].f_499)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_25[iVar0 /*679*/].f_410[iVar3 /*22*/]))
			{
				if (!__LIB_2__::func_65(uParam0->f_25[iVar0 /*679*/].f_410[iVar3 /*22*/], 0))
				{
					__LIB_0__::func_325(&(uParam0->f_25[iVar0 /*679*/].f_410[iVar3 /*22*/].f_5));
				}
				if (__LIB_2__::func_1(uParam0->f_25[iVar0 /*679*/].f_410[iVar3 /*22*/], 0, 1))
				{
					PED::SET_PED_KEEP_TASK(uParam0->f_25[iVar0 /*679*/].f_410[iVar3 /*22*/], true);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_25[iVar0 /*679*/].f_410[iVar3 /*22*/]));
			}
			iVar3++;
		}
		iVar4 = 0;
		while (iVar4 < uParam0->f_25[iVar0 /*679*/].f_595)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_25[iVar0 /*679*/].f_541[iVar4 /*13*/]))
			{
				if (!__LIB_2__::func_65(uParam0->f_25[iVar0 /*679*/].f_541[iVar4 /*13*/], 0))
				{
					__LIB_0__::func_325(&(uParam0->f_25[iVar0 /*679*/].f_541[iVar4 /*13*/].f_5));
				}
				if (__LIB_2__::func_1(uParam0->f_25[iVar0 /*679*/].f_541[iVar4 /*13*/], 0, 1))
				{
					PED::SET_PED_KEEP_TASK(uParam0->f_25[iVar0 /*679*/].f_541[iVar4 /*13*/], true);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_25[iVar0 /*679*/].f_541[iVar4 /*13*/]));
			}
			iVar4++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_25[iVar0 /*679*/].f_1))
		{
			__LIB_0__::func_325(&(uParam0->f_25[iVar0 /*679*/].f_1.f_2));
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_25[iVar0 /*679*/].f_656))
			{
				PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), uParam0->f_25[iVar0 /*679*/].f_656);
				OBJECT::DELETE_OBJECT(&(uParam0->f_25[iVar0 /*679*/].f_656));
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					AITRANSPORT::_0x8886D83A430537FD(Global_35, 0);
				}
			}
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_25[iVar0 /*679*/].f_1, 0f);
			if (VEHICLE::GET_LAST_DRIVEN_VEHICLE() == uParam0->f_25[iVar0 /*679*/].f_1 || VEHICLE::GET_LAST_DRIVEN_VEHICLE() == uParam0->f_2386)
			{
				VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_25[iVar0 /*679*/].f_1));
		}
		iVar0++;
	}
}

void func_49(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		__LIB_1__::func_281(&(uParam0->f_25[iVar0 /*679*/].f_600), 1, 1);
		iVar0++;
	}
}

void func_50()
{
	HUD::_TEXT_DATABASE_DELETE("SCRB");
}

void func_51(int iParam0)
{
	TASK::REMOVE_WAYPOINT_RECORDING(func_194(iParam0));
}

void func_52()
{
	int iVar0;
	iVar0 = 932;
	while (iVar0 <= 952)
	{
		__LIB_4__::func_193(iVar0);
		iVar0++;
	}
	__LIB_4__::func_193(883);
	__LIB_4__::func_193(884);
	__LIB_4__::func_193(552);
	__LIB_4__::func_193(553);
}

void func_60()
{
	__LIB_8__::func_331(0);
	__LIB_9__::func_758(0);
	__LIB_9__::func_739(0);
	__LIB_9__::func_740(0);
	__LIB_9__::func_741(0);
}

int func_61(struct<4> Param0, var uParam4, var uParam5)
{
	switch (Param0.f_3)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 6;
		case 9:
			return 7;
		case 10:
			return 8;
		case 11:
			return 9;
		case 12:
			return 10;
		case 13:
			return 11;
		default:
			break;
	}
	return -1;
}

bool func_66(var uParam0, var uParam1, int iParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	fVar0 = __LIB_0__::func_665(Global_35, uParam1->f_1, 1, 1);
	fVar1 = 250f;
	if (fVar0 > fVar1)
	{
		if ((iParam2 == 0 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_25[1 /*679*/].f_1)) && __LIB_0__::func_665(uParam1->f_1, uParam0->f_25[1 /*679*/].f_1, 1, 1) < (20f + 5f))
		{
			uParam0->f_25[1 /*679*/].f_612 = 1;
		}
		return true;
	}
	if (uParam1->f_611 && (__LIB_6__::func_708(iParam3) || iParam3 == 8))
	{
		if ((iParam2 == 0 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_25[1 /*679*/].f_1)) && __LIB_0__::func_665(uParam1->f_1, uParam0->f_25[1 /*679*/].f_1, 1, 1) < (20f + 5f))
		{
			uParam0->f_25[1 /*679*/].f_612 = 1;
		}
		return true;
	}
	return false;
}

bool func_67(var uParam0)
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(Global_35, *uParam0, 1);
	if (fVar0 > 250f)
	{
		return true;
	}
	else if (fVar0 > 150f)
	{
	}
	return false;
}

void func_68(int iParam0, bool bParam1, bool bParam2)
{
	__LIB_0__::func_769();
	func_198();
	if (!__LIB_6__::func_706(iParam0))
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_9))
	{
		__LIB_1__::func_544(Global_1392388.f_10[iParam0 /*13*/].f_9);
		VOLUME::_DELETE_VOLUME(Global_1392388.f_10[iParam0 /*13*/].f_9);
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_11))
	{
		MAP::REMOVE_BLIP(&(Global_1392388.f_10[iParam0 /*13*/].f_11));
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_10))
	{
		MAP::REMOVE_BLIP(&(Global_1392388.f_10[iParam0 /*13*/].f_10));
	}
	if (bParam2)
	{
		__LIB_2__::func_161(Global_1392388.f_10[iParam0 /*13*/].f_5, 125f, 5);
	}
	Global_40.f_9146.f_4[iParam0] = 0;
	Global_40.f_9146.f_79[iParam0] = -15;
	if (__LIB_6__::func_708(iParam0))
	{
		Global_40.f_9146.f_3 = -1;
		if (__LIB_0__::func_702(Global_1392388.f_10[iParam0 /*13*/].f_8) || __LIB_1__::func_44(Global_1392388.f_10[iParam0 /*13*/].f_8))
		{
			__LIB_1__::func_559(Global_1392388.f_10[iParam0 /*13*/].f_8, 0, 2);
		}
	}
	if (bParam1)
	{
		__LIB_13__::func_376(-1);
	}
}

bool func_69(var uParam0, bool bParam1)
{
	if (!func_15(uParam0, 2))
	{
		if (func_67(uParam0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_25[0 /*679*/].f_1))
			{
				if (!__LIB_0__::func_48(Global_35, uParam0->f_25[0 /*679*/].f_1, 200f, 1))
				{
					if (!bLocal_16)
					{
						if (bParam1)
						{
							if (uParam0->f_2266 > 1)
							{
								uParam0->f_2388 = "CR_FM_ABANCOACHS";
							}
							else
							{
								uParam0->f_2388 = "CR_FM_ABANCOACH";
							}
						}
						__LIB_6__::func_705(8388608);
						return true;
					}
				}
				else if (__LIB_0__::func_48(Global_35, uParam0->f_25[0 /*679*/].f_1, 50f, 1))
				{
					bLocal_16 = true;
				}
			}
			else
			{
				if (bParam1)
				{
					if (uParam0->f_2266 > 1)
					{
						uParam0->f_2388 = "CR_FM_ABANCOACHS";
					}
					else
					{
						uParam0->f_2388 = "CR_FM_ABANCOACH";
					}
				}
				__LIB_6__::func_705(8388608);
				return true;
			}
		}
	}
	return false;
}

bool func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
			return true;
		case 1:
		case 3:
			return false;
		default:
			break;
	}
	return false;
}

bool func_71(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (!uParam0->f_25[iVar0 /*679*/].f_612)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

char* func_73(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "CR_FM_RWRHO";
		case 5:
			return "CR_FM_RCRHO";
		case 6:
			return "CR_FM_RCRHO";
		case 0:
			return "CR_FM_RCRIG";
		case 1:
			return "CR_FM_RCAPP";
		case 2:
			return "CR_FM_RCSTR";
		default:
			break;
	}
	return "";
}

bool func_74(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		iVar2 = 0;
		if (!func_169(uParam0->f_25[iVar0 /*679*/].f_1))
		{
			if (!uParam0->f_25[iVar0 /*679*/].f_612)
			{
				if (uParam0->f_25[iVar0 /*679*/] >= 2)
				{
					if (!ENTITY::_0x8DE41E9902E85756(uParam0->f_25[iVar0 /*679*/].f_1))
					{
						if (VEHICLE::_0x877EA24EB1614495(&iVar2, uParam0->f_25[iVar0 /*679*/].f_1, Global_35) == 0 || func_230(uParam0->f_25[iVar0 /*679*/].f_1))
						{
							if (!__LIB_0__::func_75(&(uParam0->f_25[iVar0 /*679*/].f_658)))
							{
								__LIB_1__::func_148(&(uParam0->f_25[iVar0 /*679*/].f_658));
							}
							else if (__LIB_0__::func_265(&(uParam0->f_25[iVar0 /*679*/].f_658)) > 5f)
							{
								uParam0->f_25[iVar0 /*679*/].f_610 = 1;
								__LIB_0__::func_325(&(uParam0->f_25[iVar0 /*679*/].f_1.f_2));
								__LIB_0__::func_325(&(uParam0->f_25[iVar0 /*679*/].f_1.f_3));
								iVar1++;
							}
						}
						else if (__LIB_0__::func_75(&(uParam0->f_25[iVar0 /*679*/].f_658)))
						{
							__LIB_0__::func_37(&(uParam0->f_25[iVar0 /*679*/].f_658));
						}
					}
				}
			}
		}
		else if (func_231(uParam0->f_25[iVar0 /*679*/].f_1))
		{
			if (func_232(iParam1))
			{
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_25[iVar0 /*679*/].f_1, true, false), 3f);
			}
			if (!__LIB_0__::func_75(&(uParam0->f_25[iVar0 /*679*/].f_658)))
			{
				__LIB_1__::func_148(&(uParam0->f_25[iVar0 /*679*/].f_658));
			}
			else if (!func_232(iParam1))
			{
				if (__LIB_0__::func_265(&(uParam0->f_25[iVar0 /*679*/].f_658)) > 5f)
				{
					uParam0->f_25[iVar0 /*679*/].f_610 = 1;
					__LIB_0__::func_325(&(uParam0->f_25[iVar0 /*679*/].f_1.f_2));
					__LIB_0__::func_325(&(uParam0->f_25[iVar0 /*679*/].f_1.f_3));
					iVar1++;
				}
			}
		}
		else if (func_233(uParam0->f_25[iVar0 /*679*/].f_1) != 0)
		{
			if (!__LIB_0__::func_75(&(uParam0->f_25[iVar0 /*679*/].f_658)))
			{
				__LIB_1__::func_148(&(uParam0->f_25[iVar0 /*679*/].f_658));
			}
			else if (__LIB_0__::func_265(&(uParam0->f_25[iVar0 /*679*/].f_658)) > 10f)
			{
				uParam0->f_25[iVar0 /*679*/].f_610 = 1;
				__LIB_0__::func_325(&(uParam0->f_25[iVar0 /*679*/].f_1.f_2));
				__LIB_0__::func_325(&(uParam0->f_25[iVar0 /*679*/].f_1.f_3));
				iVar1++;
			}
		}
		else if (__LIB_0__::func_75(&(uParam0->f_25[iVar0 /*679*/].f_658)))
		{
			__LIB_0__::func_37(&(uParam0->f_25[iVar0 /*679*/].f_658));
		}
		iVar0++;
	}
	if (iVar1 >= uParam0->f_2266)
	{
		return true;
	}
	return false;
}

bool func_75(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return true;
		case 0:
		case 1:
		case 2:
			return false;
		default:
			break;
	}
	return false;
}

bool func_76(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	if (Param0.f_3 != 4)
	{
		return false;
	}
	if (!__LIB_2__::func_343(Global_35, uParam6->f_25[0 /*679*/].f_1, 0))
	{
		return false;
	}
	if (__LIB_1__::func_652() || __LIB_3__::func_107())
	{
		return true;
	}
	if ((uParam6->f_2424 != 0f && MAP::DOES_BLIP_EXIST(uParam6->f_2213)) && BUILTIN::VDIST(Global_36, uParam6->f_2210) > (uParam6->f_2424 + 100f))
	{
		return true;
	}
	return false;
}

bool func_77(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
	{
		return false;
	}
	return true;
}

bool func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
			return false;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

int func_82(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (VEHICLE::_0xDDBEA5506C848227(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_83(var uParam0, int iParam1)
{
	return (iParam1 == 5 && uParam0->f_2405);
}

bool func_84(var uParam0)
{
	float fVar0;
	if (__LIB_6__::func_702(1) && !uParam0->f_2271)
	{
		fVar0 = __LIB_0__::func_665(Global_35, uParam0->f_25[0 /*679*/].f_252[0 /*78*/], 1, 1);
		if (fVar0 > 250f)
		{
			return true;
		}
	}
	return false;
}

void func_91(var uParam0)
{
	vector3 vVar0[4];
	vector3 vVar13;
	struct<5> Var16;
	vVar0[0 /*3*/] = { -1507.78f, 159.14f, 100.83f };
	vVar0[1 /*3*/] = { -1518.04f, 167.34f, 99.4f };
	vVar0[2 /*3*/] = { -1509.53f, 183.32f, 104.13f };
	vVar0[3 /*3*/] = { -1504.16f, 151.13f, 99.59f };
	if (!__LIB_0__::func_75(&uLocal_2482))
	{
		__LIB_1__::func_148(&uLocal_2482);
	}
	if (__LIB_0__::func_265(&uLocal_2482) > 30f)
	{
		vVar13 = { vVar0[1 /*3*/] };
		__LIB_1__::func_148(&uLocal_2482);
	}
	else if (__LIB_0__::func_265(&uLocal_2482) > 25f)
	{
		vVar13 = { vVar0[0 /*3*/] };
	}
	else if (__LIB_0__::func_265(&uLocal_2482) > 21f)
	{
		vVar13 = { vVar0[3 /*3*/] };
	}
	else if (__LIB_0__::func_265(&uLocal_2482) > 16f)
	{
		vVar13 = { vVar0[1 /*3*/] };
	}
	else if (__LIB_0__::func_265(&uLocal_2482) > 10f)
	{
		vVar13 = { vVar0[2 /*3*/] };
	}
	else if (__LIB_0__::func_265(&uLocal_2482) > 6f)
	{
		vVar13 = { vVar0[3 /*3*/] };
	}
	else if (__LIB_0__::func_265(&uLocal_2482) > 2f)
	{
		vVar13 = { vVar0[0 /*3*/] };
	}
	else
	{
		vVar13 = { vVar0[1 /*3*/] };
	}
	Var16.f_4 = -1;
	Var16.f_8 = 2;
	Var16.f_9 = 1;
	Var16.f_10 = 1;
	Var16.f_11 = 1;
	Var16.f_13 = 1;
	Var16.f_14 = 2;
	Var16.f_15 = 2;
	Var16.f_16 = 3;
	Var16.f_19 = 3;
	Var16.f_20 = 1;
	Var16.f_21 = 3;
	Var16.f_22 = 3;
	Var16.f_7 = 500;
	Var16 = { vVar13 };
	Var16.f_3 = 0;
	Var16.f_4 = 14283;
	_NAMESPACE29::_0x66F9EB44342BB4C5(uParam0, &Var16);
}

bool func_95(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1531.6f, 161.7772f, 96.99397f, -1504.138f, 173.7086f, 105.2925f, 12f, false, true, 0);
}

bool func_96(int iParam0, float fParam1)
{
	float fVar0;
	PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.5f);
	fVar0 = PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID());
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36) < fParam1)
	{
		if (fVar0 > 8f)
		{
			return true;
		}
	}
	return false;
}

bool func_97(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vVar0 = { func_244(iParam1, iParam2) };
	return __LIB_2__::func_813(uParam0, vVar0, 0, -1, 0, 0);
}

void func_98()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	struct<23> Var5;
	if ((__LIB_6__::func_702(1) || Local_51.f_25[0 /*679*/].f_9.f_164 == 9) || Local_51.f_25[0 /*679*/].f_9.f_164 == 11)
	{
		return;
	}
	if (__LIB_3__::func_419(Local_51.f_25[0 /*679*/].f_1, Global_35))
	{
		vVar0 = { -1.9f, -2.3f, 0f };
		fVar3 = 90f;
	}
	else
	{
		vVar0 = { 1.9f, -2.3f, 0f };
		fVar3 = -90f;
	}
	Var5.f_4 = -1;
	Var5.f_8 = 2;
	Var5.f_9 = 1;
	Var5.f_10 = 1;
	Var5.f_11 = 1;
	Var5.f_13 = 1;
	Var5.f_14 = 2;
	Var5.f_15 = 2;
	Var5.f_16 = 3;
	Var5.f_19 = 3;
	Var5.f_20 = 1;
	Var5.f_21 = 3;
	Var5.f_22 = 3;
	Var5.f_7 = 500;
	Var5.f_3 = Global_35;
	Var5.f_4 = 14283;
	_NAMESPACE29::_0x66F9EB44342BB4C5(Local_51.f_25[0 /*679*/].f_174, &Var5);
	if (iLocal_47 < 8)
	{
		if (Local_51.f_25[0 /*679*/].f_610 || BUILTIN::VDIST(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51.f_25[0 /*679*/].f_1, Local_51.f_25[0 /*679*/].f_601)) < 1.4f)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_51.f_25[0 /*679*/].f_174, false))
			{
				if (ENTITY::_0x0C9DBF48C6BA6E4C(Local_51.f_25[0 /*679*/].f_174, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51.f_25[0 /*679*/].f_1, Local_51.f_25[0 /*679*/].f_601), 17))
				{
					AUDIO::_0x36559148B78853B3(1, 0, 0);
					if (func_97(&(Local_51.f_2286), iLocal_25, 32))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_51.f_25[0 /*679*/].f_174, Global_35, -1, false, 1);
						iLocal_47 = 8;
					}
				}
			}
		}
	}
	if (!__LIB_6__::func_702(1))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_51.f_25[0 /*679*/].f_174))
		{
			if (!__LIB_6__::func_702(32768))
			{
				__LIB_6__::func_705(32768);
			}
		}
	}
	switch (iLocal_47)
	{
		case 0:
			TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_51.f_25[0 /*679*/].f_174, true);
			TASK::_0x9DE63896B176EA94(Local_51.f_25[0 /*679*/].f_174, 1);
			TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_51.f_25[0 /*679*/].f_174, false, 1f);
			TASK::_0x8BB283A7888AD1AD(Local_51.f_25[0 /*679*/].f_174, 0, 1065353216 /* Float: 1f */);
			TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[0 /*679*/].f_174, Global_35, -1, 0, 51, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_51.f_25[0 /*679*/].f_174, WEAPON::_0x9F67929D98E7C6E8(Local_51.f_25[0 /*679*/].f_174, joaat("GROUP_SHOTGUN"), 0, 0), true, 0, false, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_51.f_25[0 /*679*/].f_174, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			}
			TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51.f_25[0 /*679*/].f_1, vVar0), 1f, -1, 1f, 0, (ENTITY::GET_ENTITY_HEADING(Local_51.f_25[0 /*679*/].f_1) + fVar3));
			TASK::TASK_ACHIEVE_HEADING(0, (ENTITY::GET_ENTITY_HEADING(Local_51.f_25[0 /*679*/].f_1) + fVar3), 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar4);
			TASK::TASK_PERFORM_SEQUENCE(Local_51.f_25[0 /*679*/].f_174, iVar4);
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			if (__LIB_3__::func_419(Local_51.f_25[0 /*679*/].f_1, Global_35))
			{
				iLocal_47 = 3;
			}
			else
			{
				iLocal_47 = 2;
			}
			break;
		case 2:
			if (__LIB_3__::func_419(Local_51.f_25[0 /*679*/].f_1, Global_35))
			{
				iLocal_47 = 0;
				return;
			}
			if (__LIB_2__::func_215(Local_51.f_25[0 /*679*/].f_174, Global_35, 1, 9f, 0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_51.f_25[0 /*679*/].f_174, false))
			{
				if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, func_246()))
					{
						Local_51.f_2414++;
						__LIB_1__::func_148(&(Local_51.f_2173));
						TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[0 /*679*/].f_174, Global_35, -1, 0, 51, 0);
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_51.f_25[0 /*679*/].f_174, Global_35, -1, false, 1);
						if (Local_51.f_2414 < 3)
						{
							iLocal_47 = 4;
						}
						else
						{
							iLocal_47 = 8;
						}
					}
				}
			}
			break;
		case 3:
			if (!__LIB_3__::func_419(Local_51.f_25[0 /*679*/].f_1, Global_35))
			{
				iLocal_47 = 0;
				return;
			}
			if (__LIB_2__::func_215(Local_51.f_25[0 /*679*/].f_174, Global_35, 1, 9f, 0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_51.f_25[0 /*679*/].f_174, false))
			{
				if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, func_246()))
					{
						Local_51.f_2414++;
						__LIB_1__::func_148(&(Local_51.f_2173));
						TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[0 /*679*/].f_174, Global_35, -1, 0, 51, 0);
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_51.f_25[0 /*679*/].f_174, Global_35, -1, false, 1);
						if (Local_51.f_2414 < 3)
						{
							iLocal_47 = 5;
						}
						else
						{
							iLocal_47 = 8;
						}
					}
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&(Local_51.f_2173)) > 10f)
			{
				if (__LIB_2__::func_215(Local_51.f_25[0 /*679*/].f_174, Global_35, 1, 9f, 0))
				{
					__LIB_1__::func_148(&(Local_51.f_2173));
					if (!__LIB_0__::func_163(Local_51.f_25[0 /*679*/].f_174, 1630799643))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_51.f_25[0 /*679*/].f_174, Global_35, -1, false, 1);
					}
					iLocal_47 = 2;
				}
				else
				{
					iLocal_47 = 0;
				}
			}
			break;
		case 5:
			if (__LIB_0__::func_265(&(Local_51.f_2173)) > 10f)
			{
				if (__LIB_2__::func_215(Local_51.f_25[0 /*679*/].f_174, Global_35, 1, 9f, 0))
				{
					__LIB_1__::func_148(&(Local_51.f_2173));
					if (!__LIB_0__::func_163(Local_51.f_25[0 /*679*/].f_174, 1630799643))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_51.f_25[0 /*679*/].f_174, Global_35, -1, false, 1);
					}
					iLocal_47 = 3;
				}
				else
				{
					iLocal_47 = 0;
				}
			}
			break;
		case 8:
			if (!__LIB_5__::func_236(1) || __LIB_0__::func_265(&(Local_51.f_2173)) > 3f)
			{
				if (!__LIB_6__::func_702(32768))
				{
					__LIB_6__::func_705(32768);
				}
				if (__LIB_0__::func_75(&(Local_51.f_2173)))
				{
					__LIB_0__::func_37(&(Local_51.f_2173));
				}
				iLocal_47 = 9;
			}
			break;
	}
}

bool func_99()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	vector3 vVar3[2];
	vector3 vVar10;
	vector3 vVar13;
	char* sVar16;
	char* sVar17;
	int iVar18;
	sVar0 = "CR_LOGWAGON";
	sVar1 = "script@proc@robberies@coach@playerremoveblock";
	iVar2 = joaat("P_CHIMNEYBRICK01X");
	vVar3[0 /*3*/] = { -1521.8f, 151.86f, 100.47f };
	vVar3[1 /*3*/] = { -1520.33f, 151.68f, 100.45f };
	vVar10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51.f_2278, 2.4f, 2f, 0f) };
	vVar13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51.f_2278, -2.4f, 2f, 0f) };
	if (iLocal_2557 == 0)
	{
		sVar16 = "PB_L_FIRST";
		sVar17 = "PB_R_FIRST";
	}
	else
	{
		sVar16 = "PB_L_SUCCESS";
		sVar17 = "PB_R_SUCCESS";
	}
	switch (Local_51.f_2411)
	{
		case 0:
			STREAMING::REQUEST_MODEL(iVar2, false);
			Local_51.f_2411 = 1;
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(iVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_51.f_2280[0]))
				{
					Local_51.f_2280[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar2, vVar3[0 /*3*/], true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_51.f_2280[1]))
				{
					Local_51.f_2280[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar2, vVar3[1 /*3*/], true, true, false, true);
				}
				if (!__LIB_0__::func_139(Local_51.f_2276))
				{
					Local_51.f_2276 = __LIB_1__::func_282(sVar0, joaat("INPUT_CONTEXT_Y"), vVar10, 1.8f, 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
				if (!__LIB_0__::func_139(Local_51.f_2277))
				{
					Local_51.f_2277 = __LIB_1__::func_282(sVar0, joaat("INPUT_CONTEXT_Y"), vVar13, 1.8f, 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
				Local_51.f_2411 = 33;
			}
			break;
		case 33:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_51.f_2410))
			{
				Local_51.f_2410 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar1, 0, 0, false, true);
			}
			if ((((__LIB_6__::func_805(Local_51.f_2410, "PB_ENTER_L_NEW") && __LIB_6__::func_805(Local_51.f_2410, "PB_ENTER_R_NEW")) && __LIB_6__::func_805(Local_51.f_2409, "PB_PUSH_ONE")) && __LIB_6__::func_805(Local_51.f_2409, "PB_PUSH_SUCCESS_ENTER")) && __LIB_6__::func_805(Local_51.f_2409, "pbwagons"))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_51.f_2278, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2409, "LOGWAGON", Local_51.f_2278, 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_51.f_2409, "pbwagons", true);
				ANIMSCENE::START_ANIM_SCENE(Local_51.f_2409);
				if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_2280[0]))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_51.f_2280[0], Local_51.f_2278, false);
					func_249(Local_51.f_2410, "Block_L", Local_51.f_2280[0], "PB_ENTER_L_NEW");
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_2280[1]))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_51.f_2280[1], Local_51.f_2278, false);
					func_249(Local_51.f_2410, "Block_R", Local_51.f_2280[1], "PB_ENTER_R_NEW");
				}
				func_250(Local_51.f_2410, "player", "PB_ENTER_L_NEW", &vLocal_2558, &vLocal_2564);
				func_250(Local_51.f_2410, "player", "PB_ENTER_R_NEW", &vLocal_2561, &vLocal_2567);
				func_250(Local_51.f_2409, "PUSH_PED_A", "PB_PUSH_ONE", &vLocal_2570, &vLocal_2573);
				func_250(Local_51.f_2409, "PUSH_PED_B", "PB_PUSH_SUCCESS_ENTER", &vLocal_2576, &vLocal_2579);
				Local_51.f_2411 = 2;
			}
			break;
		case 2:
			Local_51.f_2410 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar1, 2, 0, false, true);
			Local_51.f_2411 = 3;
			break;
		case 3:
			if ((__LIB_0__::func_71(Global_35) || PED::_IS_PED_CARRYING(Global_35)) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				if (__LIB_0__::func_139(Local_51.f_2276))
				{
					__LIB_1__::func_221(Local_51.f_2276, 0, 1);
					__LIB_1__::func_382(Local_51.f_2276, 0, 1);
				}
				if (__LIB_0__::func_139(Local_51.f_2277))
				{
					__LIB_1__::func_221(Local_51.f_2277, 0, 1);
					__LIB_1__::func_382(Local_51.f_2277, 0, 1);
				}
			}
			else
			{
				if (__LIB_0__::func_139(Local_51.f_2276))
				{
					__LIB_1__::func_221(Local_51.f_2276, 1, 1);
					__LIB_1__::func_382(Local_51.f_2276, 1, 1);
				}
				if (__LIB_0__::func_139(Local_51.f_2277))
				{
					__LIB_1__::func_221(Local_51.f_2277, 1, 1);
					__LIB_1__::func_382(Local_51.f_2277, 1, 1);
				}
			}
			if (__LIB_0__::func_139(Local_51.f_2276))
			{
				if (__LIB_1__::func_732(Local_51.f_2276, 1))
				{
					__LIB_1__::func_281(&(Local_51.f_2276), 1, 1);
					WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
					if (__LIB_0__::func_139(Local_51.f_2277))
					{
						Local_51.f_2411 = 16;
					}
					else
					{
						iLocal_2557 = 1;
						Local_51.f_2411 = 16;
					}
				}
			}
			if (__LIB_0__::func_139(Local_51.f_2277))
			{
				if (__LIB_1__::func_732(Local_51.f_2277, 1))
				{
					__LIB_1__::func_281(&(Local_51.f_2277), 1, 1);
					WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
					if (__LIB_0__::func_139(Local_51.f_2276))
					{
						Local_51.f_2411 = 24;
					}
					else
					{
						iLocal_2557 = 1;
						Local_51.f_2411 = 24;
					}
				}
			}
			break;
		case 34:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vLocal_2558, 1f, 20000, 0.25f, 0, vLocal_2564.z);
			Local_51.f_2411 = 35;
			break;
		case 35:
			if (!__LIB_0__::func_163(Global_35, 713668775) || __LIB_3__::func_501(Global_35, vLocal_2558, vLocal_2564.z, 0.5f, 45f, 1))
			{
				Local_51.f_2411 = 16;
			}
			break;
		case 38:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vLocal_2558, 1f, 20000, 0.25f, 0, vLocal_2564.z);
			Local_51.f_2411 = 39;
			break;
		case 39:
			if (!__LIB_0__::func_163(Global_35, 713668775))
			{
				Local_51.f_2411 = 16;
			}
			break;
		case 16:
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar18, true, 0, false) && iVar18 == joaat("WEAPON_UNARMED"))
			{
				if (__LIB_6__::func_805(Local_51.f_2410, "PB_ENTER_L_NEW"))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "player", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "Block_L", Local_51.f_2280[0], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "wagon", Local_51.f_2278, 0);
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_51.f_2410, "player", "PB_ENTER_L_NEW", 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
					Local_51.f_2411 = 17;
				}
			}
			break;
		case 17:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_51.f_2410, false))
			{
				Local_51.f_2411 = 18;
			}
			break;
		case 18:
			if (__LIB_6__::func_805(Local_51.f_2410, "PB_PULL_L"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_51.f_2410, "WAIT_BOOL_L", false, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_51.f_2410, "PULL_BOOL_L", false, false);
				Local_51.f_2411 = 19;
			}
			break;
		case 19:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) > 0.95f)
			{
				__LIB_6__::func_763(Local_51.f_2410, "PB_PULL_L");
				iLocal_2542 = __LIB_1__::func_746("CR_LOGWAGON2", joaat("INPUT_CONTEXT_A"), 9, 570, 4000, 6, 2f, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				Local_51.f_2411 = 20;
			}
			break;
		case 20:
			if (__LIB_0__::func_567(iLocal_2542, 1))
			{
				__LIB_1__::func_281(&iLocal_2542, 1, 1);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_51.f_2410, "WAIT_BOOL_L", true, false);
				uLocal_2556 = uLocal_2556;
				Local_51.f_2411 = 21;
			}
			if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_51.f_2410, "WAIT_BOOL_L"))
			{
				if (__LIB_0__::func_486(iLocal_2542, 1) > 0f)
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_51.f_2410, "WAIT_BOOL_L", true, false);
				}
			}
			break;
		case 21:
			if (__LIB_6__::func_805(Local_51.f_2410, sVar16))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) > 0.95f)
				{
					__LIB_6__::func_763(Local_51.f_2410, sVar16);
					Local_51.f_2411 = 22;
				}
			}
			break;
		case 22:
			if (iLocal_2557 == 1)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) > 0.97f)
				{
					Local_51.f_2411 = 32;
					ENTITY::FREEZE_ENTITY_POSITION(Local_51.f_2278, false);
				}
				func_258();
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) > 0.95f)
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_51.f_2410);
				Local_51.f_2411 = 2;
			}
			break;
		case 36:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vLocal_2561, 1f, 20000, 0.25f, 0, vLocal_2567.z);
			Local_51.f_2411 = 37;
			break;
		case 37:
			if (!__LIB_0__::func_163(Global_35, 713668775) || __LIB_3__::func_501(Global_35, vLocal_2561, vLocal_2567.z, 0.5f, 45f, 1))
			{
				Local_51.f_2411 = 24;
			}
			break;
		case 40:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vLocal_2561, 1f, 20000, 0.25f, 0, vLocal_2567.z);
			Local_51.f_2411 = 41;
			break;
		case 41:
			if (!__LIB_0__::func_163(Global_35, 713668775))
			{
				Local_51.f_2411 = 24;
			}
			break;
		case 24:
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar18, true, 0, false) && iVar18 == joaat("WEAPON_UNARMED"))
			{
				if (__LIB_6__::func_805(Local_51.f_2410, "PB_ENTER_R_NEW"))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "player", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "Block_R", Local_51.f_2280[1], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "wagon", Local_51.f_2278, 0);
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_51.f_2410, "player", "PB_ENTER_R_NEW", 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
					Local_51.f_2411 = 25;
				}
			}
			break;
		case 25:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_51.f_2410, false))
			{
				Local_51.f_2411 = 26;
			}
			break;
		case 26:
			if (__LIB_6__::func_805(Local_51.f_2410, "PB_PULL_R"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_51.f_2410, "WAIT_BOOL_R", false, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_51.f_2410, "PULL_BOOL_R", false, false);
				Local_51.f_2411 = 27;
			}
			break;
		case 27:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) > 0.95f)
			{
				__LIB_6__::func_763(Local_51.f_2410, "PB_PULL_R");
				iLocal_2542 = __LIB_1__::func_746("CR_LOGWAGON2", joaat("INPUT_CONTEXT_A"), 9, 570, 4000, 6, 2f, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				Local_51.f_2411 = 28;
			}
			break;
		case 28:
			if (__LIB_0__::func_567(iLocal_2542, 1))
			{
				__LIB_1__::func_281(&iLocal_2542, 1, 1);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_51.f_2410, "WAIT_BOOL_R", true, false);
				uLocal_2556 = uLocal_2556;
				Local_51.f_2411 = 29;
			}
			if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_51.f_2410, "WAIT_BOOL_R"))
			{
				if (__LIB_0__::func_486(iLocal_2542, 1) > 0f)
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_51.f_2410, "WAIT_BOOL_R", true, false);
				}
			}
			break;
		case 29:
			if (__LIB_6__::func_805(Local_51.f_2410, sVar17))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) > 0.95f)
				{
					__LIB_6__::func_763(Local_51.f_2410, sVar17);
					Local_51.f_2411 = 30;
				}
			}
			break;
		case 30:
			if (iLocal_2557 == 1)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) > 0.3f)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_51.f_2410, "player", Global_35);
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) > 0.97f)
				{
					Local_51.f_2411 = 32;
					ENTITY::FREEZE_ENTITY_POSITION(Local_51.f_2278, false);
				}
				func_258();
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) > 0.95f)
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_51.f_2410);
				Local_51.f_2411 = 2;
			}
			break;
		case 32:
			ENTITY::FREEZE_ENTITY_POSITION(Local_51.f_2278, true);
			return true;
		case 4:
			if (__LIB_0__::func_139(Local_51.f_2277))
			{
				__LIB_1__::func_221(Local_51.f_2277, 0, 1);
				__LIB_1__::func_382(Local_51.f_2277, 0, 1);
			}
			if (__LIB_6__::func_805(Local_51.f_2410, "PB_L_FIRST"))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "Block_L", Local_51.f_2280[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "wagon", Local_51.f_2278, 0);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_51.f_2410, "player", "PB_L_FIRST", 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
				Local_51.f_2411 = 5;
			}
			break;
		case 5:
			if (__LIB_0__::func_139(Local_51.f_2277))
			{
				__LIB_1__::func_221(Local_51.f_2277, 0, 1);
				__LIB_1__::func_382(Local_51.f_2277, 0, 1);
			}
			if (!ANIMSCENE::_0x3B393716C3FD8237(Global_35))
			{
				__LIB_6__::func_763(Local_51.f_2410, "PB_L_FIRST");
				Local_51.f_2411 = 6;
			}
			break;
		case 6:
			if (__LIB_0__::func_139(Local_51.f_2277))
			{
				__LIB_1__::func_221(Local_51.f_2277, 0, 1);
				__LIB_1__::func_382(Local_51.f_2277, 0, 1);
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) > 0.99f)
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_51.f_2410);
				Local_51.f_2410 = -1;
				Local_51.f_2411 = 2;
			}
			break;
		case 7:
			if (__LIB_0__::func_139(Local_51.f_2276))
			{
				__LIB_1__::func_221(Local_51.f_2276, 0, 1);
				__LIB_1__::func_382(Local_51.f_2276, 0, 1);
			}
			if (__LIB_6__::func_805(Local_51.f_2410, "PB_R_FIRST"))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "Block_R", Local_51.f_2280[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "wagon", Local_51.f_2278, 0);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_51.f_2410, "player", "PB_R_FIRST", 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
				Local_51.f_2411 = 8;
			}
			break;
		case 8:
			if (__LIB_0__::func_139(Local_51.f_2276))
			{
				__LIB_1__::func_221(Local_51.f_2276, 0, 1);
				__LIB_1__::func_382(Local_51.f_2276, 0, 1);
			}
			if (!ANIMSCENE::_0x3B393716C3FD8237(Global_35))
			{
				__LIB_6__::func_763(Local_51.f_2410, "PB_R_FIRST");
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_51.f_2410, "PB_R_FIRST");
				Local_51.f_2411 = 9;
			}
			break;
		case 9:
			if (__LIB_0__::func_139(Local_51.f_2276))
			{
				__LIB_1__::func_221(Local_51.f_2276, 0, 1);
				__LIB_1__::func_382(Local_51.f_2276, 0, 1);
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) > 0.99f)
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_51.f_2410);
				Local_51.f_2410 = -1;
				Local_51.f_2411 = 2;
			}
			break;
		case 10:
			if (__LIB_6__::func_805(Local_51.f_2410, "PB_L_SUCCESS"))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "Block_L", Local_51.f_2280[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "wagon", Local_51.f_2278, 0);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_51.f_2410, "player", "PB_L_SUCCESS", 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
				Local_51.f_2411 = 11;
			}
			break;
		case 11:
			if (!ANIMSCENE::_0x3B393716C3FD8237(Global_35))
			{
				__LIB_6__::func_763(Local_51.f_2410, "PB_L_SUCCESS");
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_51.f_2410, "PB_L_SUCCESS");
				Local_51.f_2411 = 12;
			}
			break;
		case 12:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) > 0.640305f)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_51.f_2410, "wagon", Local_51.f_2278);
				bLocal_2543 = true;
				return true;
			}
			break;
		case 13:
			if (__LIB_6__::func_805(Local_51.f_2410, "PB_R_SUCCESS"))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "Block_R", Local_51.f_2280[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2410, "wagon", Local_51.f_2278, 0);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_51.f_2410, "player", "PB_R_SUCCESS", 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
				Local_51.f_2411 = 14;
			}
			break;
		case 14:
			if (!ANIMSCENE::_0x3B393716C3FD8237(Global_35))
			{
				__LIB_6__::func_763(Local_51.f_2410, "PB_R_SUCCESS");
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_51.f_2410, "PB_R_SUCCESS");
				Local_51.f_2411 = 15;
			}
			break;
		case 15:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) > 0.258042f)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_51.f_2410, "wagon", Local_51.f_2278);
				bLocal_2543 = false;
				return true;
			}
			break;
	}
	return false;
}

void func_101(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_260(&(uParam0->f_25[iVar0 /*679*/]));
		iVar0++;
	}
}

bool func_107()
{
	var uVar0;
	if (__LIB_3__::func_425(&uVar0) || __LIB_6__::func_803())
	{
		return true;
	}
	return false;
}

bool func_111(int iParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_244(iParam0, iParam1) };
	if (__LIB_10__::func_456(&vVar0))
	{
		return true;
	}
	return false;
}

void func_112(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (func_15(uParam0, 131072))
	{
		func_113(uParam0, 131072);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_267(&(uParam0->f_25[iVar0 /*679*/]), iParam1, bParam2);
		iVar0++;
	}
}

void func_113(var uParam0, int iParam1)
{
	uParam0->f_2207 = (uParam0->f_2207 - (uParam0->f_2207 && iParam1));
}

void func_117(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) > 0.5f)
	{
		return;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_9.f_9)))
	{
		return;
	}
	if (!__LIB_2__::func_1(uParam0->f_9, 0, 1))
	{
		return;
	}
	if (__LIB_1__::func_313(&(uParam0->f_9.f_9), fParam2))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_9, 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_9, 17, true);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_9, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 200, 0);
		}
		TASK::TASK_HANDS_UP(0, -1, iParam1, -1, true);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(uParam0->f_9, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

void func_118(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) > 0.5f)
	{
		return;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_174.f_75)))
	{
		return;
	}
	if (!__LIB_2__::func_1(uParam0->f_174, 0, 1))
	{
		return;
	}
	if (__LIB_1__::func_313(&(uParam0->f_174.f_75), fParam2))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_174, 205, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_174, 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_174, 17, true);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_174, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
		}
		if (bParam3)
		{
			TASK::TASK_SMART_FLEE_PED(0, iParam1, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
		}
		else
		{
			TASK::TASK_HANDS_UP(0, -1, iParam1, -1, true);
		}
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(uParam0->f_174, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

bool func_119(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (!func_270(uParam0, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_128(struct<6> Param0)
{
	func_275(Param0, iLocal_24, &Local_51);
	if (iLocal_26 == 3 && !__LIB_6__::func_702(4096))
	{
		func_276();
		func_277();
	}
	Global_1393237.f_199 = 1;
	PED::ADD_RELATIONSHIP_GROUP("COACH ROBBERY CONVOY", &iLocal_46);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, joaat("PLAYER"), iLocal_46);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_46, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, joaat("REL_COMPANION_GROUP"), iLocal_46);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_46, joaat("REL_COMPANION_GROUP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, joaat("REL_GANG_DUTCHS"), iLocal_46);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_46, joaat("REL_GANG_DUTCHS"));
	PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
}

void func_130(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_278(uParam0, iParam2);
	func_279(iParam3);
	func_280(iParam1);
}

bool func_131(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_281(uParam0, iParam2))
	{
		return false;
	}
	if (!func_282(iParam3))
	{
		return false;
	}
	if (!func_283(iParam1))
	{
		return false;
	}
	return true;
}

bool func_132(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_284(uParam0, iParam1);
	PED::_0xED9582B3DA8F02B4(iVar0);
	if (PED::_0x313778EDCA9158E2() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_133(var uParam0)
{
	uParam0->f_4 = VOLUME::_CREATE_VOLUME_SPHERE(*uParam0, 0f, 0f, 0f, 130f, 130f, 60f);
	__LIB_2__::func_261(uParam0->f_4, "CoachRobRestrictVolume", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
}

bool func_134(int iParam0)
{
	switch (__LIB_4__::func_513())
	{
		case 1:
			if (!__LIB_0__::func_75(&(Local_51.f_2125)))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), func_287(), func_288(), true, false, true);
				}
				func_291(&(Local_51.f_25[0 /*679*/]), func_289(iParam0), func_290(iParam0));
				__LIB_1__::func_148(&(Local_51.f_2125));
			}
			if (__LIB_0__::func_265(&(Local_51.f_2125)) > 1f)
			{
				if (!__LIB_6__::func_702(4096))
				{
					func_292(iLocal_38, &(Local_51.f_25[0 /*679*/]), &Local_51, 0);
				}
				__LIB_6__::func_781(iParam0);
				__LIB_9__::func_740(2);
				__LIB_0__::func_325(&(Global_1392388.f_10[iParam0 /*13*/].f_10));
				__LIB_9__::func_739(1);
				__LIB_9__::func_742(0);
				__LIB_0__::func_19(&(Local_51.f_25[0 /*679*/]), 11);
				__LIB_9__::func_741(5);
				func_4(&Local_51, 1);
				func_4(&Local_51, 64);
				func_4(&Local_51, 2);
				__LIB_6__::func_705(1);
				__LIB_6__::func_705(2);
				func_294(&Local_51, iLocal_25);
				PED::SET_PED_INTO_VEHICLE(Global_35, Local_51.f_25[0 /*679*/].f_1, -1);
				Local_51.f_25[0 /*679*/].f_631 = { ENTITY::GET_ENTITY_COORDS(Local_51.f_25[0 /*679*/].f_1, true, false) };
				__LIB_9__::func_322(&(Local_51.f_25[0 /*679*/].f_1), 4);
				func_7(1);
				__LIB_3__::func_618(func_289(iParam0), 500f, 1, 0, 0, 0, 0);
				Local_51.f_2424 = BUILTIN::VDIST(Global_36, Local_51.f_2210);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				return true;
			}
			break;
		case 2:
			if (!bLocal_2555)
			{
				if (func_297(&(Local_51.f_2385), func_289(iParam0), func_290(iParam0)))
				{
					bLocal_2555 = true;
				}
				else
				{
					return false;
				}
			}
			if (__LIB_0__::func_272(Local_51.f_2385, 0))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_51.f_2385, func_289(iParam0), func_290(iParam0), true, false, true);
					PED::_SET_PED_ON_MOUNT(Global_35, Local_51.f_2385, -1, true);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-8f, 1f);
					func_7(1);
					__LIB_3__::func_618(func_289(iParam0), 500f, 1, 0, 0, 0, 0);
				}
			}
			else
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_289(iParam0), func_290(iParam0), true, false, true);
				PED::_0x2208438012482A1A(Global_35, false, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-8f, 1f);
				func_7(1);
				__LIB_3__::func_618(func_289(iParam0), 500f, 1, 0, 0, 0, 0);
			}
			func_298(&Local_51, iLocal_25);
			__LIB_8__::func_331(1);
			__LIB_9__::func_739(1);
			__LIB_9__::func_742(1);
			__LIB_9__::func_743(3);
			return true;
		default:
			if (!__LIB_0__::func_75(&(Local_51.f_2125)))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), func_287(), func_288(), true, false, true);
				}
				__LIB_1__::func_148(&(Local_51.f_2125));
			}
			if (!bLocal_2555)
			{
				if (func_297(&(Local_51.f_2385), func_289(iParam0), func_290(iParam0)))
				{
					bLocal_2555 = true;
				}
				else
				{
					return false;
				}
			}
			if (__LIB_0__::func_272(Local_51.f_2385, 0))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_51.f_2385, func_289(iParam0), func_290(iParam0), true, false, true);
					PED::_SET_PED_ON_MOUNT(Global_35, Local_51.f_2385, -1, true);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-8f, 1f);
					func_7(1);
					__LIB_3__::func_618(func_289(iParam0), 500f, 1, 0, 0, 0, 0);
					return true;
				}
			}
			else
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_289(iParam0), func_290(iParam0), true, false, true);
				PED::_0x2208438012482A1A(Global_35, false, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-8f, 1f);
				func_7(1);
				__LIB_3__::func_618(func_289(iParam0), 500f, 1, 0, 0, 0, 0);
				return true;
			}
			if (__LIB_0__::func_265(&(Local_51.f_2125)) > 5f)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-8f, 1f);
				func_7(1);
				__LIB_3__::func_618(func_289(iParam0), 500f, 1, 0, 0, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

struct<4> func_140(int iParam0)
{
	struct<4> Var0;
	Var0 = { func_289(iLocal_25) };
	Var0.f_3 = func_290(iLocal_25);
	return Var0;
}

int func_141(vector3 vParam0, var uParam3)
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
		iVar0 = func_306(0, 0);
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

void func_143(struct<4> Param0, var uParam4, var uParam5)
{
	if (__LIB_6__::func_702(4) && !__LIB_1__::func_200(129))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_51.f_2208))
	{
		Local_51.f_2208 = MAP::_BLIP_ADD_FOR_RADIUS(-1559907306, __LIB_6__::func_758(Param0.f_3), __LIB_6__::func_707(Param0.f_3));
		__LIB_14__::func_109(Local_51.f_2208, 0);
	}
}

void func_144(int iParam0)
{
	if (__LIB_6__::func_702(4))
	{
		return;
	}
	switch (iLocal_26)
	{
		case 0:
			__LIB_6__::func_830(iParam0, "CR_O_PREPAREP", 0);
			break;
		case 1:
			__LIB_6__::func_830(iParam0, "CR_O_PREPAREP", 0);
			break;
		case 2:
			__LIB_6__::func_830(iParam0, "CR_O_PREPARESP", 0);
			break;
		case 3:
			__LIB_6__::func_830(iParam0, "CR_O_PREPAREWP", 0);
			break;
	}
}

void func_145(var uParam0, int iParam1, struct<6> Param2)
{
	var uVar0;
	struct<23> Var1;
	int iVar26;
	bool bVar27;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return;
	}
	if (uParam0->f_612)
	{
		func_317(uParam0, 0);
		return;
	}
	if (iParam1 == 0)
	{
		if (!__LIB_6__::func_702(1))
		{
			if (__LIB_6__::func_708(iLocal_25))
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_1.f_2))
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
					Var1.f_7 = 500;
					Var1.f_3 = uParam0->f_1;
					_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Var1);
				}
			}
		}
	}
	if (Param2.f_3 == 10)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 10f) > 0)
		{
			FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 10f);
		}
	}
	if (iParam1 == 0 && func_318())
	{
		func_319(iParam1);
	}
	if (!uParam0->f_628)
	{
		if (func_320(uParam0))
		{
			uParam0->f_628 = 1;
		}
	}
	func_321(uParam0, iParam1);
	func_322(uParam0, iParam1);
	func_323(uParam0);
	func_324(&(uParam0->f_9), iParam1, uParam0->f_1.f_3);
	func_325(uParam0);
	if (((iLocal_25 == 8 || iLocal_25 == 9) || iLocal_25 == 10) || iLocal_25 == 11)
	{
		if (!__LIB_6__::func_702(1))
		{
			func_326(uParam0->f_1);
		}
	}
	if (!func_15(&Local_51, 65536))
	{
		if (!func_15(&Local_51, 16))
		{
			if (func_15(&Local_51, 2))
			{
				if (__LIB_0__::func_272(uParam0->f_9, 1))
				{
					if (__LIB_0__::func_665(Global_35, uParam0->f_9, 1, 1) < 100f)
					{
						func_163(&(uParam0->f_9), &(uParam0->f_9.f_5), 1, 0, 0);
					}
					else
					{
						__LIB_0__::func_325(&(uParam0->f_9.f_5));
					}
				}
				if (__LIB_0__::func_272(uParam0->f_174, 1))
				{
					if (__LIB_0__::func_665(Global_35, uParam0->f_174, 1, 1) < 100f)
					{
						func_163(&(uParam0->f_174), &(uParam0->f_174.f_5), 1, 0, 0);
					}
					else
					{
						__LIB_0__::func_325(&(uParam0->f_174.f_5));
					}
				}
				iVar26 = 0;
				while (iVar26 < uParam0->f_523)
				{
					if (__LIB_0__::func_272(uParam0->f_500[iVar26 /*11*/], 1))
					{
						if (__LIB_0__::func_665(Global_35, uParam0->f_500[iVar26 /*11*/], 1, 1) < 100f)
						{
							func_163(&(uParam0->f_500[iVar26 /*11*/]), &(uParam0->f_500[iVar26 /*11*/].f_5), 1, 0, 0);
						}
						else
						{
							__LIB_0__::func_325(&(uParam0->f_500[iVar26 /*11*/].f_5));
						}
					}
					iVar26++;
				}
			}
		}
	}
	if (!uParam0->f_611)
	{
		if (func_193(uParam0, iLocal_24) || __LIB_6__::func_702(1024))
		{
			__LIB_6__::func_705(16384);
			if (!func_15(&Local_51, 2))
			{
				func_327(uParam0, iParam1);
				func_4(&Local_51, 32);
				uParam0->f_611 = 1;
			}
			else if (!func_15(&Local_51, 65536))
			{
				func_328(uParam0);
				func_4(&Local_51, 32);
				func_329(uParam0, 0);
				uParam0->f_611 = 1;
			}
		}
	}
	if (*uParam0 > 0 && !uParam0->f_611)
	{
		func_330(uParam0, iParam1, Param2);
		if (func_15(&Local_51, 2) && iLocal_44 == 4)
		{
			if (iParam1 > 0)
			{
				func_331(uParam0);
			}
			else
			{
				func_332(uParam0);
			}
		}
		else if (iParam1 > 0)
		{
			func_331(uParam0);
		}
		else if ((((((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_1, 0) && !uParam0->f_626) && !uParam0->f_613) && !uParam0->f_615) && !func_15(&Local_51, 131072)) && !__LIB_6__::func_702(8)) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1))
		{
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam0->f_1, func_333(uParam0, iLocal_24));
		}
	}
	if (!uParam0->f_610)
	{
		if ((func_15(&Local_51, 4) || func_15(&Local_51, 2)) || (__LIB_6__::func_702(4) && __LIB_1__::func_200(37)))
		{
			if (func_66(&Local_51, uParam0, iParam1, iLocal_25))
			{
				uParam0->f_612 = 1;
			}
		}
	}
	if (iLocal_25 == 4)
	{
		if (__LIB_7__::func_851(4))
		{
			func_292(iLocal_38, uParam0, &Local_51, 1);
			if (*uParam0 != 13)
			{
				__LIB_1__::func_616(func_334(), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
			__LIB_0__::func_19(uParam0, 13);
		}
	}
	if (iLocal_25 == 8)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 3f) > 0)
		{
			FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 3f);
		}
	}
	func_336(uParam0);
	if (iLocal_25 == 10)
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) > 0.5f && !uParam0->f_613)
		{
			if (__LIB_0__::func_272(uParam0->f_9, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(uParam0->f_9, uParam0->f_1, true) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) < 0.5f)
				{
					__LIB_1__::func_864(uParam0->f_9, 1, 0);
				}
			}
			if (__LIB_0__::func_272(uParam0->f_174, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(uParam0->f_174, uParam0->f_1, true) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_174) < 0.5f)
				{
					__LIB_1__::func_864(uParam0->f_174, 1, 0);
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (func_15(&Local_51, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
				{
					if (uParam0->f_676 == 0)
					{
						TASK::_0xE01F55B2896F6B37(uParam0->f_1, 1);
					}
					if (iLocal_26 == 2)
					{
						__LIB_2__::func_279(uParam0->f_9, 1);
					}
					if (__LIB_6__::func_702(2097152))
					{
						__LIB_2__::func_279(uParam0->f_9, 1);
						__LIB_2__::func_279(uParam0->f_174, 1);
					}
					func_267(uParam0, iLocal_24, 0);
					func_339(uParam0->f_1, 300);
					if (iLocal_26 == 3 && !__LIB_6__::func_702(4096))
					{
						func_292(iLocal_38, uParam0, &Local_51, 0);
					}
					func_294(&Local_51, iLocal_25);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("Robberies_Coach_Scene"))
					{
						AUDIO::START_AUDIO_SCENE("Robberies_Coach_Scene");
					}
					__LIB_0__::func_19(uParam0, 1);
				}
			}
			break;
		case 1:
			if ((__LIB_0__::func_272(uParam0->f_9, 0) && PED::IS_PED_IN_VEHICLE(uParam0->f_9, uParam0->f_1, false)) && !__LIB_0__::func_75(&(uParam0->f_620)))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_9, -235832601, true) == 1 || VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_1))
				{
					uParam0->f_597 = func_333(uParam0, iLocal_24);
					__LIB_0__::func_19(uParam0, 2);
					__LIB_6__::func_717(uParam0->f_1, 1);
				}
				else
				{
					func_267(uParam0, iLocal_24, 0);
				}
			}
			else
			{
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 2:
			if (uParam0->f_1.f_1 == joaat("COACH2") && ENTITY::_0x8DE41E9902E85756(uParam0->f_1))
			{
				__LIB_0__::func_19(uParam0, 9);
				return;
			}
			if ((__LIB_0__::func_272(uParam0->f_9, 0) && PED::IS_PED_IN_VEHICLE(uParam0->f_9, uParam0->f_1, false)) && !__LIB_0__::func_75(&(uParam0->f_620)))
			{
				if (((((!uParam0->f_615 && !uParam0->f_626) && !uParam0->f_613) && !__LIB_6__::func_702(8)) && !__LIB_6__::func_702(16384)) && !func_15(&Local_51, 65536))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_9, -235832601, true) != 1 && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_1))
					{
						__LIB_0__::func_19(uParam0, 1);
						return;
					}
				}
			}
			if (!__LIB_0__::func_75(&(Local_51.f_2149)))
			{
				__LIB_1__::func_148(&(Local_51.f_2149));
			}
			else if (__LIB_0__::func_265(&(Local_51.f_2149)) > 5f)
			{
				if (func_161(uParam0, &Local_51, iLocal_26, iLocal_25) || (iLocal_26 == 3 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_676) == Global_35))
				{
					__LIB_1__::func_148(&(uParam0->f_646));
					__LIB_6__::func_717(uParam0->f_1, 0);
					func_4(&Local_51, 262144);
					if (iLocal_26 == 3)
					{
						__LIB_0__::func_19(uParam0, 10);
						return;
					}
					if (iLocal_25 == 11)
					{
						__LIB_0__::func_325(&(uParam0->f_1.f_2));
						__LIB_0__::func_19(uParam0, 15);
						return;
					}
					if (iLocal_26 != 1)
					{
						__LIB_0__::func_325(&(uParam0->f_1.f_2));
					}
					if (iLocal_26 != 1)
					{
						if (!func_15(&Local_51, 65536))
						{
							__LIB_0__::func_325(&(uParam0->f_1.f_2));
							if (iLocal_25 != 12)
							{
								if (func_169(uParam0->f_1))
								{
									func_341(&(uParam0->f_1), &(uParam0->f_1.f_3), 0f, 0f, 0f);
								}
								else
								{
									func_341(&(uParam0->f_1), &(uParam0->f_1.f_3), uParam0->f_601);
								}
							}
						}
					}
					if (func_169(uParam0->f_1))
					{
						if (uParam0->f_627)
						{
							VEHICLE::_0x226C6A4E3346D288(uParam0->f_1, 1);
							func_342(uParam0->f_1);
							__LIB_0__::func_19(uParam0, 7);
						}
						else
						{
							func_343(uParam0);
							__LIB_0__::func_19(uParam0, 6);
						}
					}
					else
					{
						__LIB_0__::func_19(uParam0, 5);
					}
				}
				else if (uParam0->f_610)
				{
					__LIB_0__::func_19(uParam0, 15);
				}
			}
			break;
		case 7:
			__LIB_0__::func_325(&(uParam0->f_1.f_2));
			if (!func_15(&Local_51, 8192))
			{
				if (__LIB_6__::func_702(2) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1) < 1f)
				{
					if (!__LIB_0__::func_75(&(Local_51.f_2134)))
					{
						__LIB_1__::func_148(&(Local_51.f_2134));
					}
					else if (__LIB_0__::func_265(&(Local_51.f_2134)) > 2f)
					{
						if (__LIB_6__::func_708(iLocal_25))
						{
							if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_THROWN_DYNAMITE"), 0, false))
							{
								__LIB_1__::func_766(Global_35, joaat("WEAPON_THROWN_DYNAMITE"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 1, 0, 0, 0, 0);
							}
						}
						if (__LIB_6__::func_708(iLocal_25))
						{
							__LIB_6__::func_830(Param2.f_3, "CR_O_BLOW_DOOR", 0);
						}
						func_4(&Local_51, 8192);
						__LIB_1__::func_148(&(Local_51.f_2134));
					}
				}
			}
			else if (!func_15(&Local_51, 128))
			{
				if (__LIB_0__::func_265(&(Local_51.f_2134)) > 2f)
				{
					if (__LIB_6__::func_708(iLocal_25))
					{
						__LIB_0__::func_45("CR_HELP_BLOW_DOOR", 10000, 0, 0, 0, 1);
					}
					func_4(&Local_51, 128);
					__LIB_0__::func_37(&(Local_51.f_2134));
				}
			}
			func_345(&(uParam0->f_1), &(uParam0->f_1.f_3), 0f, 0f, 0f);
			if (func_346(uParam0))
			{
				uParam0->f_627 = 0;
				__LIB_6__::func_705(256);
				func_343(uParam0);
				__LIB_0__::func_37(&(Local_51.f_2134));
				__LIB_0__::func_19(uParam0, 6);
			}
			break;
		case 5:
			__LIB_0__::func_325(&(uParam0->f_1.f_2));
			if (iLocal_26 != 1)
			{
				func_345(&(uParam0->f_1), &(uParam0->f_1.f_3), uParam0->f_601);
			}
			if (((VEHICLE::_0xE015CF1F2C0959D8(uParam0->f_1) != 2 && VEHICLE::_0xE015CF1F2C0959D8(uParam0->f_1) != 1) || ENTITY::_0x8DE41E9902E85756(uParam0->f_1)) || ((iLocal_25 == 12 && uParam0->f_628) && BUILTIN::VDIST(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_601)) > 3f))
			{
				__LIB_0__::func_19(uParam0, 6);
			}
			if (!func_161(uParam0, &Local_51, iLocal_26, iLocal_25) && __LIB_0__::func_265(&(uParam0->f_646)) > 3f)
			{
				__LIB_0__::func_325(&(uParam0->f_1.f_3));
				func_347(uParam0);
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 6:
			__LIB_0__::func_325(&(uParam0->f_1.f_2));
			if (uParam0->f_610)
			{
				__LIB_0__::func_19(uParam0, 15);
			}
			else
			{
				if (!__LIB_0__::func_75(&uLocal_2536))
				{
					__LIB_1__::func_283(&uLocal_2536, 0);
				}
				else if (__LIB_0__::func_265(&uLocal_2536) > 5f)
				{
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 10f);
				}
				if (iLocal_26 != 1)
				{
					if (func_169(uParam0->f_1))
					{
						func_345(&(uParam0->f_1), &(uParam0->f_1.f_3), 0f, 0f, 0f);
						func_349(uParam0);
					}
					else
					{
						func_345(&(uParam0->f_1), &(uParam0->f_1.f_3), uParam0->f_601);
					}
				}
				if (func_169(uParam0->f_1))
				{
					if (__LIB_0__::func_139(uParam0->f_600))
					{
						bVar27 = false;
						if (PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, uParam0->f_1))
						{
							if (!__LIB_0__::func_75(&uLocal_2485))
							{
								__LIB_1__::func_283(&uLocal_2485, 0);
								bVar27 = true;
							}
							else
							{
								__LIB_1__::func_148(&uLocal_2485);
								bVar27 = true;
							}
						}
						else if (__LIB_0__::func_75(&uLocal_2485))
						{
							if (__LIB_0__::func_265(&uLocal_2485) > 2f)
							{
								__LIB_0__::func_37(&uLocal_2485);
							}
							else
							{
								bVar27 = true;
							}
						}
						if ((((((__LIB_0__::func_71(Global_35) || PED::_IS_PED_CARRYING(Global_35)) || !__LIB_6__::func_702(2)) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true)) || FIRE::IS_ENTITY_ON_FIRE(uParam0->f_1)) || func_233(uParam0->f_1) != 0) || bVar27)
						{
							__LIB_1__::func_221(uParam0->f_600, 0, 1);
							__LIB_1__::func_382(uParam0->f_600, 0, 1);
						}
						else
						{
							__LIB_1__::func_221(uParam0->f_600, 1, 1);
							__LIB_1__::func_382(uParam0->f_600, 1, 1);
						}
						if (__LIB_1__::func_264(uParam0->f_600, 1) || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_601)) < 1.7f)
						{
							PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
							PED::SET_PED_RESET_FLAG(Global_35, 2, true);
							PED::SET_PED_RESET_FLAG(Global_35, 168, true);
						}
						if (__LIB_1__::func_732(uParam0->f_600, 1))
						{
							func_351(uParam0);
							__LIB_0__::func_325(&(uParam0->f_1.f_3));
							__LIB_0__::func_19(uParam0, 9);
						}
					}
				}
				else if (ENTITY::_0x8DE41E9902E85756(uParam0->f_1) || ((iLocal_25 == 12 && uParam0->f_628) && BUILTIN::VDIST(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_601)) > 3f))
				{
					__LIB_0__::func_325(&(uParam0->f_1.f_3));
					__LIB_0__::func_19(uParam0, 9);
				}
				if (!func_161(uParam0, &Local_51, iLocal_26, iLocal_25) && __LIB_0__::func_265(&(uParam0->f_646)) > 3f)
				{
					func_351(uParam0);
					__LIB_0__::func_325(&(uParam0->f_1.f_3));
					func_347(uParam0);
					__LIB_0__::func_19(uParam0, 2);
				}
			}
			break;
		case 9:
			__LIB_0__::func_325(&(uParam0->f_1.f_2));
			PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
			if ((func_352(uParam0) || uVar0) || !func_169(uParam0->f_1))
			{
				if (uParam0->f_598 == 0)
				{
					func_97(&(Local_51.f_2286), iLocal_25, 69);
				}
				uParam0->f_610 = 1;
				__LIB_9__::func_219(1);
				if (func_354(iLocal_25) == 0 && !func_355(iLocal_25))
				{
					func_298(&Local_51, iLocal_25);
				}
				if (PED::IS_PED_IN_VEHICLE(Global_35, uParam0->f_1, false))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
				}
				__LIB_0__::func_19(uParam0, 15);
				if (func_15(&Local_51, 131072))
				{
					if (!__LIB_1__::func_200(37))
					{
						func_112(&Local_51, iLocal_24, 0);
					}
				}
				uParam0->f_631 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
			}
			break;
		case 10:
			if (iLocal_25 == 4)
			{
				if (!__LIB_7__::func_851(1))
				{
					__LIB_9__::func_319(1);
				}
			}
			if (__LIB_2__::func_343(Global_35, uParam0->f_1, 0))
			{
				__LIB_0__::func_325(&(uParam0->f_1.f_2));
				func_4(&Local_51, 1024);
				__LIB_0__::func_37(&(Local_51.f_2134));
				if (iLocal_25 == 4)
				{
					__LIB_9__::func_322(&(uParam0->f_1), 4);
				}
				__LIB_0__::func_19(uParam0, 11);
			}
			else
			{
				if (__LIB_6__::func_702(2))
				{
					func_43(&Local_51, "PRCCH_LOOT");
				}
				if (!MAP::DOES_BLIP_EXIST(uParam0->f_1.f_2))
				{
					func_357(&(uParam0->f_1), &(uParam0->f_1.f_2), 0);
				}
				if (__LIB_6__::func_702(2))
				{
					if (!func_15(&Local_51, 1024))
					{
						if (!__LIB_0__::func_75(&(Local_51.f_2134)))
						{
							if (!__LIB_6__::func_702(4))
							{
								__LIB_6__::func_830(Param2.f_3, "CR_O_STEALC", 1);
							}
							__LIB_1__::func_148(&(Local_51.f_2134));
						}
						else if (PED::IS_PED_IN_VEHICLE(Global_35, uParam0->f_1, true) || __LIB_5__::func_352("CR_O_STEALC"))
						{
							func_4(&Local_51, 1024);
							__LIB_0__::func_37(&(Local_51.f_2134));
						}
						else if (__LIB_0__::func_265(&(Local_51.f_2134)) > 2f)
						{
							if (!__LIB_6__::func_702(4))
							{
								__LIB_3__::func_662("CR_O_STEALC", 7500, 0, 0, -1, -1, 0);
							}
							func_4(&Local_51, 1024);
							__LIB_0__::func_37(&(Local_51.f_2134));
						}
					}
				}
				if (!func_161(uParam0, &Local_51, iLocal_26, iLocal_25) && __LIB_0__::func_265(&(uParam0->f_646)) > 3f)
				{
					__LIB_0__::func_325(&(uParam0->f_1.f_2));
					func_347(uParam0);
					__LIB_0__::func_19(uParam0, 2);
				}
			}
			break;
		case 11:
			if (!__LIB_0__::func_75(&(Local_51.f_2197)))
			{
				__LIB_1__::func_148(&(Local_51.f_2197));
			}
			if (__LIB_6__::func_708(iLocal_25))
			{
				if (__LIB_6__::func_702(2))
				{
					if (!func_15(&Local_51, 67108864))
					{
						__LIB_10__::func_251(Global_1392388.f_10[iLocal_25 /*13*/].f_8, func_140(1), func_140(2), 1, 2);
						func_4(&Local_51, 67108864);
					}
				}
			}
			if (iLocal_25 == 4)
			{
				if (!__LIB_7__::func_851(1))
				{
					__LIB_9__::func_319(1);
				}
			}
			func_43(&Local_51, "PRCCH_PASS");
			if (!__LIB_2__::func_343(Global_35, uParam0->f_1, 0))
			{
				__LIB_0__::func_325(&(Local_51.f_2213));
				__LIB_0__::func_19(uParam0, 10);
			}
			else if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1) || (Global_1935630.f_16 && iLocal_25 != 13))
			{
				__LIB_0__::func_325(&(Local_51.f_2213));
				if (!func_15(&Local_51, 4096))
				{
					if (!__LIB_6__::func_702(4))
					{
						__LIB_6__::func_830(Param2.f_3, "CR_O_ESC", 0);
					}
					func_4(&Local_51, 4096);
				}
			}
			else
			{
				if (!MAP::DOES_BLIP_EXIST(Local_51.f_2213))
				{
					Local_51.f_2213 = MAP::_BLIP_ADD_FOR_COORD(408396114, Local_51.f_2210);
					MAP::_BLIP_SET_MODIFIER(Local_51.f_2213, -1878373110);
					if (!__LIB_6__::func_702(4))
					{
						__LIB_6__::func_830(Param2.f_3, "CR_O_DELIVERC", 0);
					}
					Local_51.f_2424 = BUILTIN::VDIST(Global_36, Local_51.f_2210);
					func_113(&Local_51, 4096);
				}
				if (!__LIB_6__::func_843(64))
				{
					if (__LIB_6__::func_708(iLocal_25))
					{
						if (func_360(iLocal_38))
						{
							__LIB_0__::func_45("CR_HELP_CARGO", 10000, 0, 0, 0, 1);
							__LIB_6__::func_841(64);
						}
					}
				}
				if (!func_15(&Local_51, 2048))
				{
					if (!__LIB_0__::func_75(&(Local_51.f_2134)))
					{
						if (bLocal_2529)
						{
							if (iLocal_38 == 8)
							{
								if (ENTITY::IS_ENTITY_ATTACHED(Local_51.f_2214[1 /*3*/]))
								{
									ENTITY::DETACH_ENTITY(Local_51.f_2214[1 /*3*/], true, false);
									ENTITY::SET_ENTITY_DYNAMIC(Local_51.f_2214[1 /*3*/], true);
									PHYSICS::ACTIVATE_PHYSICS(Local_51.f_2214[1 /*3*/]);
								}
								if (ENTITY::IS_ENTITY_ATTACHED(Local_51.f_2214[2 /*3*/]))
								{
									ENTITY::DETACH_ENTITY(Local_51.f_2214[2 /*3*/], true, false);
									ENTITY::SET_ENTITY_DYNAMIC(Local_51.f_2214[2 /*3*/], true);
									PHYSICS::ACTIVATE_PHYSICS(Local_51.f_2214[2 /*3*/]);
								}
							}
						}
						Local_51.f_2267 = { Global_36 };
						__LIB_1__::func_148(&(Local_51.f_2134));
					}
					else if (BUILTIN::VDIST(Local_51.f_2267, Global_36) > 20f || __LIB_5__::func_352("CR_O_DELIVERC"))
					{
						func_4(&Local_51, 2048);
						__LIB_0__::func_37(&(Local_51.f_2134));
					}
					else if (__LIB_0__::func_265(&(Local_51.f_2134)) > 20f)
					{
						if (!__LIB_6__::func_702(4))
						{
							__LIB_3__::func_662("CR_O_DELIVERC", 7500, 0, 0, -1, -1, 0);
						}
						func_4(&Local_51, 2048);
						__LIB_0__::func_37(&(Local_51.f_2134));
					}
				}
				else
				{
					func_361(uParam0);
				}
				if (BUILTIN::VDIST(Local_51.f_2210, Global_36) < 50f)
				{
					func_362(uParam0);
					func_317(uParam0, 1);
				}
				if (BUILTIN::VDIST(Local_51.f_2210, Global_36) < 40f)
				{
					func_363(uParam0, 1067450368 /* Float: 1.25f */);
				}
			}
			break;
		case 13:
			break;
		case 15:
			break;
	}
}

bool func_146()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		if (func_364(&(Local_51.f_25[iVar0 /*679*/])))
		{
			return false;
		}
		if (func_365(&(Local_51.f_25[iVar0 /*679*/])))
		{
			return false;
		}
		if (func_366(&(Local_51.f_25[iVar0 /*679*/])))
		{
			return false;
		}
		if (func_367(&(Local_51.f_25[iVar0 /*679*/])))
		{
			return false;
		}
		if (func_15(&Local_51, 65536))
		{
			if (func_368(&Local_51, &(Local_51.f_25[iVar0 /*679*/])))
			{
				return false;
			}
		}
		vVar7 = { ENTITY::GET_ENTITY_COORDS(Local_51.f_25[iVar0 /*679*/].f_1, true, false) };
		if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_174, 3) && !func_15(&Local_51, 16))
		{
			vVar4 = { ENTITY::GET_ENTITY_COORDS(Local_51.f_25[iVar0 /*679*/].f_174, true, false) };
			if (BUILTIN::VDIST(Global_36, vVar4) < 100f || (BUILTIN::VDIST(vVar7, vVar4) < 100f && !Local_51.f_25[iVar0 /*679*/].f_610))
			{
				if (!__LIB_0__::func_163(Local_51.f_25[iVar0 /*679*/].f_174, 518218985))
				{
					return false;
				}
			}
		}
		if ((__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_9, 3) && !func_369(&(Local_51.f_25[iVar0 /*679*/]))) && !func_15(&Local_51, 16))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_51.f_25[iVar0 /*679*/].f_9, true, false) };
			if (BUILTIN::VDIST(Global_36, vVar1) < 100f || (BUILTIN::VDIST(vVar7, vVar1) < 100f && !Local_51.f_25[iVar0 /*679*/].f_610))
			{
				if (!__LIB_0__::func_163(Local_51.f_25[iVar0 /*679*/].f_9, 518218985))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_147(var uParam0, int iParam1)
{
	if (!__LIB_6__::func_702(1))
	{
		return false;
	}
	if (__LIB_6__::func_702(2))
	{
		return false;
	}
	if (func_15(uParam0, 16))
	{
		return false;
	}
	if ((((((iParam1 == 5 || iParam1 == 6) || iParam1 == 12) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 11)
	{
		return false;
	}
	if (__LIB_5__::func_236(0))
	{
		return false;
	}
	return true;
}

bool func_148(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!func_15(&Local_51, 1))
	{
		return false;
	}
	switch (iLocal_26)
	{
		case 0:
			if (func_370(&(Local_51.f_25[0 /*679*/])))
			{
				return true;
			}
			break;
		case 1:
			if (!Local_51.f_2271 && func_371())
			{
				return true;
			}
			else if (iLocal_39 == 18)
			{
				return true;
			}
			break;
		case 2:
			if (func_372(&Local_51))
			{
				return true;
			}
			break;
		case 3:
			if (Local_51.f_25[0 /*679*/] == 13)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_149(var uParam0)
{
	if (!PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (!func_373(uParam0, 80f))
		{
			return true;
		}
	}
	return false;
}

void func_150()
{
	__LIB_1__::func_390("CR_O_STOPCOACH", 1);
	__LIB_1__::func_390("CR_O_STOPCOACHS", 1);
}

float func_151(int iParam0)
{
	if (iParam0 == 1)
	{
		return 20f;
	}
	else if (iParam0 == 0)
	{
		return 0f;
	}
	else if (iParam0 == 6)
	{
		return 0f;
	}
	return 5f;
}

void func_152(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_25[0 /*679*/].f_675)
	{
		func_375(&(uParam0->f_25[0 /*679*/]), uParam0, iParam1, iParam2, 1);
		return;
	}
	if (uParam0->f_2266 > 1)
	{
		if (!uParam0->f_25[1 /*679*/].f_675)
		{
			func_375(&(uParam0->f_25[1 /*679*/]), uParam0, iParam1, iParam2, 0);
			return;
		}
	}
	func_4(uParam0, 1);
}

bool func_154(var uParam0)
{
	int iVar0;
	iVar0 = func_376(uParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_377(&(uParam0->f_25[iVar0 /*679*/]), uParam0) < 35f || __LIB_0__::func_665(Global_35, uParam0->f_25[iVar0 /*679*/].f_1, 1, 1) < 20f)
	{
		return true;
	}
	return false;
}

void func_155()
{
	__LIB_0__::func_325(&(Local_51.f_2066));
	func_4(&Local_51, 4);
}

bool func_156()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		if (func_378(&(Local_51.f_25[iVar0 /*679*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_157()
{
	int iVar0;
	if (!func_15(&Local_51, 536870912))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			func_4(&Local_51, 536870912);
		}
	}
	switch (iLocal_44)
	{
		case 0:
			__LIB_1__::func_148(&(Local_51.f_2155));
			iLocal_44 = 1;
			break;
		case 1:
			if (__LIB_0__::func_265(&(Local_51.f_2155)) > 0.1f)
			{
				func_379();
				iLocal_44 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&(Local_51.f_2155)) > 0.4f)
			{
				if (!func_15(&Local_51, 65536))
				{
					iVar0 = func_380(&Local_51);
					if (__LIB_0__::func_272(iVar0, 0))
					{
						if (iLocal_26 != 1 || iLocal_36 < 11)
						{
							func_381(iLocal_25, 7, 0);
							func_381(iLocal_25, 8, 0);
							func_381(iLocal_25, 9, 0);
							func_381(iLocal_25, 35, 0);
							func_381(iLocal_25, 36, 0);
							func_381(iLocal_25, 37, 0);
							func_381(iLocal_25, 48, 0);
							if (func_15(&Local_51, 16))
							{
								if (!func_111(iLocal_25, 34))
								{
									AUDIO::_0x36559148B78853B3(1, 0, 0);
									func_97(&(Local_51.f_2286), iLocal_25, 10);
								}
							}
							else if (func_382())
							{
								if (!func_111(iLocal_25, 34))
								{
									func_97(&(Local_51.f_2286), iLocal_25, 1);
								}
							}
						}
					}
				}
				iLocal_44 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&(Local_51.f_2155)) > 1.2f || func_15(&Local_51, 536870912))
			{
				__LIB_0__::func_37(&(Local_51.f_2155));
				func_383();
				iLocal_44 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_158()
{
	switch (iLocal_26)
	{
		case 0:
			if (func_270(&Local_51, 0))
			{
				return true;
			}
			break;
		case 1:
			if (func_270(&Local_51, 0))
			{
				return true;
			}
			break;
		case 2:
			if (func_384(&Local_51))
			{
				return true;
			}
			break;
		case 3:
			if (func_270(&Local_51, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_159(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_25[iVar0 /*679*/].f_523)
		{
			if (iParam1 != 9 || iVar1 != 0)
			{
				func_164(&(uParam0->f_25[iVar0 /*679*/].f_500[iVar1 /*11*/]), bParam2);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_160(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if ((!__LIB_0__::func_163(uParam0->f_25[iVar0 /*679*/].f_174, -235832601) && !__LIB_0__::func_163(uParam0->f_25[iVar0 /*679*/].f_174, 355471868)) && !__LIB_0__::func_75(&(uParam0->f_25[iVar0 /*679*/].f_623)))
		{
			func_385(&(uParam0->f_25[iVar0 /*679*/].f_174), uParam0->f_25[iVar0 /*679*/].f_1, bParam1);
		}
		iVar0++;
	}
}

bool func_161(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_612)
	{
		return false;
	}
	if ((((iParam3 == 8 || iParam3 == 9) || iParam3 == 10) || iParam3 == 11) && !__LIB_6__::func_702(2))
	{
		return false;
	}
	if (iParam3 == 8 && Global_1392388.f_9 > 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		return true;
	}
	if (!func_386(uParam0) && !__LIB_6__::func_702(2097152))
	{
		return true;
	}
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_1) < 1.5f && __LIB_6__::func_702(1)) && iParam2 == 1)
	{
		return true;
	}
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) < 0.5f)
	{
		if (func_15(uParam1, 32))
		{
			return true;
		}
		else if (func_15(uParam1, 131072))
		{
			return true;
		}
		else if (__LIB_6__::func_702(524288))
		{
			return true;
		}
		else if (uParam1->f_2423 == 1)
		{
			return true;
		}
	}
	return false;
}

void func_162(var uParam0)
{
	int iVar0;
	if (!__LIB_2__::func_1(*uParam0, 0, 0))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 97);
	TASK::TASK_SMART_FLEE_PED(0, Global_35, 6000f, -1, 0, 1077936128 /* Float: 3f */, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_163(int* iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(*uParam1))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(*iParam0);
	if (MAP::DOES_BLIP_EXIST(iVar0))
	{
		return;
	}
	if (bParam4)
	{
		iVar1 = joaat("BLIP_STYLE_COP");
	}
	else if (bParam2)
	{
		iVar1 = joaat("BLIP_STYLE_ENEMY");
	}
	else if (bParam3)
	{
		iVar1 = -89429847;
	}
	else
	{
		iVar1 = -1749618580;
	}
	*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(iVar1, *iParam0);
	if (bParam2)
	{
		if (func_387())
		{
			MAP::_BLIP_SET_MODIFIER(*uParam1, -1034486097);
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(*uParam1, -1034486097);
		}
	}
	else if (bParam3)
	{
		MAP::_BLIP_SET_MODIFIER(*uParam1, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
	}
}

void func_164(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		return;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*uParam0, -1))
	{
		return;
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(*uParam0))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(*uParam0, false, 0, false);
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		PED::_0x802092B07E3B1EEA(*uParam0, Global_36, 3);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 2, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, !bParam1);
	func_163(uParam0, &(uParam0->f_5), 1, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
	if (!bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(*uParam0, 246, true);
		PED::SET_PED_SHOOT_RATE(*uParam0, 100);
		TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
		uParam0->f_9 = 1;
	}
	else
	{
		PED::SET_PED_SHOOT_RATE(*uParam0, 90);
	}
}

void func_165(float fParam0)
{
	int iVar0;
	iVar0 = func_380(&Local_51);
	if (!__LIB_2__::func_1(iVar0, 0, 1))
	{
		return;
	}
	if (PED::IS_PED_FLEEING(iVar0))
	{
		return;
	}
	if (!func_15(&Local_51, 2097152))
	{
		if (iLocal_27 == 2)
		{
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				if (!__LIB_0__::func_266(iVar0, Global_36, 8f, 1, 1))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, 68))
					{
						func_4(&Local_51, 2097152);
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_266(iVar0, Global_36, fParam0, 1, 1))
	{
		return;
	}
	switch (iLocal_37)
	{
		case 0:
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				if (__LIB_2__::func_401(iVar0, 1, 1, 1, 0, 0))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, 67))
					{
						iLocal_37 = 1;
					}
				}
			}
			break;
		case 1:
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 11))
				{
					iLocal_37 = 2;
				}
			}
			break;
		case 2:
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				if (__LIB_2__::func_401(iVar0, 1, 1, 1, 0, 0))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, 12))
					{
						iLocal_37 = 3;
					}
				}
			}
			break;
	}
}

void func_166()
{
	int iVar0;
	int iVar1;
	iVar0 = func_380(&Local_51);
	if (!__LIB_2__::func_1(iVar0, 0, 1))
	{
		return;
	}
	if (PED::IS_PED_FLEEING(iVar0))
	{
		return;
	}
	if (__LIB_0__::func_163(iVar0, 242628503))
	{
		return;
	}
	if ((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, Global_35, 1, 1) || PED::IS_PED_SHOOTING(Global_35)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 10f, false)) || BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) > 50f) || PED::GET_PED_CONFIG_FLAG(iVar0, 206, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 205, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 206, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 1500, 0);
		}
		TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(iVar0, iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
}

void func_167()
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bVar3 = false;
	bVar5 = __LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 9);
	bVar6 = false;
	if ((!bVar5 && !Local_51.f_2271) && iLocal_39 != 17)
	{
		__LIB_1__::func_148(&(Local_51.f_2164));
		iLocal_39 = 17;
	}
	if (!bVar5 && Local_51.f_2271)
	{
		if (iLocal_2554 == 0)
		{
			__LIB_1__::func_715(3, 0, 1, 0, Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 0, 1065353216 /* Float: 1f */, 0);
			iLocal_2554 = 1;
		}
	}
	switch (iLocal_39)
	{
		case 0:
			iLocal_39 = 1;
			break;
		case 1:
			if (__LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], false))
				{
					PED::_0xAAB050DA48B57978(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], "Flee_Panic", Global_35, -1, 4);
					TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], true);
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_SMART_FLEE_PED(0, Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					TASK::_0x12990818C1D35886(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 1, 1065353216 /* Float: 1f */);
					TASK::_0x3AD8EFF9703BE657(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 1f);
					AUDIO::STOP_PED_SPEAKING(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], true);
					__LIB_6__::func_830(iLocal_25, "CR_O_TACKLEPASS", 0);
					__LIB_1__::func_148(&(Local_51.f_2164));
					__LIB_1__::func_148(&(Local_51.f_2179));
					iLocal_39 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_75(&(Local_51.f_2179)))
			{
				if (__LIB_0__::func_265(&(Local_51.f_2179)) > 2f)
				{
					__LIB_0__::func_45("CR_HELP_TACKLE", 10000, 0, 0, 0, 1);
					__LIB_0__::func_37(&(Local_51.f_2179));
				}
			}
			if (__LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 0))
			{
				if (__LIB_0__::func_265(&(Local_51.f_2164)) > 30f)
				{
					fVar0 = 1.5f;
				}
				else
				{
					__LIB_0__::func_265(&(Local_51.f_2164));
					fVar0 = 2f;
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], fVar0, 0, -1082130432 /* Float: -1f */, 0);
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], fVar0);
				}
				if (PED::_0x753B15AD0FD6F3E3(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]) == joaat("GS_MOUNTED"))
				{
					PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 0.5f);
					if (iLocal_40 < 3)
					{
						iLocal_40 = 3;
					}
					TASK::CLEAR_PED_TASKS(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], true, false);
					PED::_0x789DABD18E9024DB(Global_35, 1, 1);
					PED::_0x789DABD18E9024DB(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 1, 1);
					PED::SET_PED_CONFIG_FLAG(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 213, true);
					Local_51.f_2397 = 1;
					__LIB_1__::func_148(&(Local_51.f_2164));
					iLocal_39 = 3;
				}
				else if (PED::_IS_PED_HOGTIED(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]) || func_391(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]))
				{
					if (!PED::_IS_PED_LASSOED(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]) || bLocal_2531)
					{
						if (!AUDIO::_0xFE5C6177064BD390(1))
						{
							if (iLocal_40 < 3)
							{
								iLocal_40 = 3;
							}
							func_97(&(Local_51.f_2286), iLocal_25, 60);
							iLocal_39 = 4;
						}
					}
					else if (!bLocal_2531)
					{
						if (!__LIB_0__::func_75(&uLocal_2539))
						{
							__LIB_1__::func_283(&uLocal_2539, 0);
						}
						else if (__LIB_0__::func_265(&uLocal_2539) > 5f)
						{
							__LIB_0__::func_37(&uLocal_2539);
							bLocal_2531 = true;
							PED::_0xAE6004120C18DF97(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 0, 0);
						}
					}
				}
			}
			if (PED::_0x3BDFCF25B58B0415(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]))
			{
				func_392();
			}
			else
			{
				func_393(0);
			}
			break;
		case 3:
			if (__LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 0))
			{
				if (__LIB_0__::func_265(&(Local_51.f_2164)) > 2f)
				{
					__LIB_0__::func_37(&(Local_51.f_2164));
					func_97(&(Local_51.f_2286), iLocal_25, 60);
					iLocal_39 = 4;
				}
			}
			func_392();
			break;
		case 4:
			if (__LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 0))
			{
				if (PED::_0x753B15AD0FD6F3E3(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]) == joaat("GS_MOUNTED"))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_BREAKOUT"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_STAND_SWITCH"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_MOUNT_SWITCH"), false);
				}
				if (!AUDIO::_0xFE5C6177064BD390(1))
				{
					__LIB_1__::func_148(&(Local_51.f_2179));
					if ((!PED::_IS_PED_HOGTIED(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]) && !bLocal_2530) || bLocal_2531)
					{
						__LIB_6__::func_830(iLocal_25, "CR_O_SUBDUEPASS", 0);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]);
						bLocal_2530 = false;
					}
					__LIB_1__::func_148(&uLocal_2551);
					iLocal_39 = 5;
				}
			}
			func_392();
			break;
		case 5:
			if (__LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 0))
			{
				if (__LIB_0__::func_75(&(Local_51.f_2179)))
				{
					if (__LIB_0__::func_265(&(Local_51.f_2179)) > 2f)
					{
						__LIB_0__::func_37(&(Local_51.f_2179));
					}
				}
				if (PED::_0x753B15AD0FD6F3E3(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]) == joaat("GS_MOUNTED"))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_BREAKOUT"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_STAND_SWITCH"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_MOUNT_SWITCH"), false);
				}
				bVar6 = true;
				if (__LIB_0__::func_75(&uLocal_2551))
				{
					bVar6 = false;
					if (__LIB_0__::func_265(&uLocal_2551) > 3f)
					{
						bVar6 = true;
					}
				}
				if (bVar6 || PED::_0x753B15AD0FD6F3E3(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]) == joaat("GS_MOUNTED"))
				{
					if (PED::_IS_PED_HOGTIED(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]) || bLocal_2530)
					{
						func_97(&(Local_51.f_2286), iLocal_25, 58);
						iLocal_39 = 14;
					}
					else if (func_394(65, &iVar4))
					{
						__LIB_1__::func_148(&uLocal_2548);
						if (iVar4 == 1)
						{
							iLocal_39 = 7;
						}
						else
						{
							iLocal_39 = 6;
						}
					}
				}
				if (PED::_0x753B15AD0FD6F3E3(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]) == joaat("GS_MOUNTED"))
				{
					func_393(1);
				}
			}
			break;
		case 6:
			if (__LIB_1__::func_871(&uLocal_2548) > 200)
			{
				iLocal_39 = 7;
			}
			func_393(1);
			bVar3 = true;
			break;
		case 7:
			if (!func_111(iLocal_25, 65))
			{
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], true);
				AUDIO::STOP_PED_SPEAKING(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], true);
				func_97(&(Local_51.f_2286), iLocal_25, 61);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]);
				iLocal_39 = 8;
			}
			func_392();
			break;
		case 8:
			if (!func_111(iLocal_25, 61))
			{
				iLocal_39 = 9;
			}
			func_392();
			break;
		case 9:
			if (__LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 0))
			{
				if (PED::_0x753B15AD0FD6F3E3(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]) == joaat("GS_MOUNTED"))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_BREAKOUT"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_STAND_SWITCH"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_MOUNT_SWITCH"), false);
				}
				if (!AUDIO::_0xFE5C6177064BD390(1))
				{
					AUDIO::DISABLE_PED_PAIN_AUDIO(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], false);
					iLocal_39 = 10;
				}
				else if (PED::_0x753B15AD0FD6F3E3(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]) == joaat("GS_MOUNTED"))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_CHOKE"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
				}
			}
			func_392();
			break;
		case 10:
			if (__LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 0))
			{
				if (PED::_0x753B15AD0FD6F3E3(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]) == joaat("GS_MOUNTED"))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_BREAKOUT"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_STAND_SWITCH"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_MOUNT_SWITCH"), false);
				}
				if (func_394(66, &iVar4))
				{
					__LIB_1__::func_148(&uLocal_2548);
					if (iVar4 == 1)
					{
						iLocal_39 = 12;
					}
					else
					{
						iLocal_39 = 11;
					}
				}
			}
			func_393(1);
			break;
		case 11:
			if (__LIB_1__::func_871(&uLocal_2548) > 200)
			{
				iLocal_39 = 12;
			}
			func_393(1);
			bVar3 = true;
			break;
		case 12:
			if (!func_111(iLocal_25, 66))
			{
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], true);
				AUDIO::STOP_PED_SPEAKING(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], true);
				func_97(&(Local_51.f_2286), iLocal_25, 58);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]);
				iLocal_39 = 13;
			}
			func_392();
			break;
		case 13:
			if (!func_111(iLocal_25, 58))
			{
				iLocal_39 = 14;
			}
			func_392();
			break;
		case 14:
			if (__LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 0))
			{
				if (PED::_0x753B15AD0FD6F3E3(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]) == joaat("GS_MOUNTED"))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_STAND_SWITCH"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_MOUNT_SWITCH"), false);
				}
				if (!AUDIO::_0xFE5C6177064BD390(1) || func_396(iLocal_25, 58) > 1)
				{
					iVar1 = Local_51.f_25[0 /*679*/].f_252[0 /*78*/];
					if (PLAYER::_0x9422743A5BA50E10(PLAYER::PLAYER_ID()) != 1f)
					{
						PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1f);
					}
					AUDIO::DISABLE_PED_PAIN_AUDIO(iVar1, false);
					TASK::CLEAR_PED_TASKS(iVar1, true, false);
					if (bLocal_2530 == 1)
					{
						PED::_0xAAB050DA48B57978(iVar1, "TaskIntimidated_OnFoot", Global_35, -1, 4);
					}
					Local_51.f_2271 = 1;
					__LIB_6__::func_830(iLocal_25, "CR_O_ROBCOACHV", 0);
					__LIB_0__::func_325(&(Local_51.f_25[0 /*679*/].f_1.f_2));
					__LIB_0__::func_325(&(Local_51.f_25[0 /*679*/].f_252[0 /*78*/].f_5));
					func_341(&(Local_51.f_25[0 /*679*/].f_1), &(Local_51.f_25[0 /*679*/].f_1.f_3), 0f, 0f, 0f);
					iLocal_39 = 15;
				}
			}
			func_393(0);
			break;
		case 15:
			if (!__LIB_0__::func_139(Local_51.f_25[0 /*679*/].f_600))
			{
				if (!PED::IS_PED_IN_VEHICLE(Global_35, Local_51.f_25[0 /*679*/].f_1, true))
				{
					Local_51.f_25[0 /*679*/].f_600 = __LIB_1__::func_745("CR_C_ROBH", joaat("INPUT_CONTEXT_Y"), Local_51.f_25[0 /*679*/].f_1, 3, 1, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_51.f_25[0 /*679*/].f_1, false);
					__LIB_2__::func_450(Local_51.f_25[0 /*679*/].f_600, 3f, 1);
					__LIB_6__::func_697(Local_51.f_25[0 /*679*/].f_600, 0, 1);
				}
			}
			else
			{
				if ((__LIB_0__::func_71(Global_35) || PED::_IS_PED_CARRYING(Global_35)) || !__LIB_6__::func_702(2))
				{
					__LIB_1__::func_221(Local_51.f_25[0 /*679*/].f_600, 0, 1);
					__LIB_1__::func_382(Local_51.f_25[0 /*679*/].f_600, 0, 1);
				}
				else
				{
					__LIB_1__::func_221(Local_51.f_25[0 /*679*/].f_600, 1, 1);
					__LIB_1__::func_382(Local_51.f_25[0 /*679*/].f_600, 1, 1);
				}
				if (__LIB_0__::func_567(Local_51.f_25[0 /*679*/].f_600, 1))
				{
					func_351(&(Local_51.f_25[0 /*679*/]));
					iLocal_39 = 16;
				}
			}
			func_393(0);
			break;
		case 16:
			if (func_400(&(Local_51.f_25[0 /*679*/])))
			{
				__LIB_0__::func_325(&(Local_51.f_25[0 /*679*/].f_1.f_2));
				__LIB_0__::func_325(&(Local_51.f_25[0 /*679*/].f_1.f_3));
				iLocal_39 = 18;
			}
			func_393(0);
			break;
		case 17:
			if (PLAYER::_0x9422743A5BA50E10(PLAYER::PLAYER_ID()) != 1f)
			{
				PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1f);
			}
			if (__LIB_0__::func_75(&(Local_51.f_2164)))
			{
				if (__LIB_0__::func_265(&(Local_51.f_2164)) > 2f)
				{
					__LIB_6__::func_830(iLocal_25, "CR_O_LOOTPASS", 0);
					__LIB_0__::func_37(&(Local_51.f_2164));
				}
			}
			func_393(0);
			break;
	}
	func_401(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]);
	if (func_402() && bLocal_2547)
	{
		if (!__LIB_0__::func_139(Local_51.f_2273))
		{
			Local_51.f_2273 = __LIB_1__::func_746("CR_HELP_TACKLE4", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(Local_51.f_2273) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]), 0);
		}
		__LIB_1__::func_221(Local_51.f_2273, !bVar3, 1);
	}
	else if (__LIB_0__::func_139(Local_51.f_2273))
	{
		__LIB_1__::func_281(&(Local_51.f_2273), 1, 1);
	}
	if (PED::_0x3BDFCF25B58B0415(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]))
	{
		if (func_402())
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_CHOKE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_BREAKOUT"), false);
		}
	}
}

bool func_169(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("STAGECOACH004X"))
	{
		return true;
	}
	return false;
}

int func_170(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_25[iVar0 /*679*/].f_1.f_3))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_171(var uParam0)
{
	vector3 vVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_25[0 /*679*/].f_1))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_25[0 /*679*/].f_1, true, false) };
	if (BUILTIN::VDIST(vVar0, Global_36) < (150f / 2f) || (BUILTIN::VDIST(vVar0, Global_36) < 150f && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_25[0 /*679*/].f_1)))
	{
		return true;
	}
	return false;
}

void func_172(int iParam0)
{
	bool bVar0;
	if (__LIB_6__::func_702(4))
	{
		return;
	}
	bVar0 = false;
	if (iLocal_45 > 5)
	{
		bVar0 = true;
	}
	switch (iLocal_26)
	{
		case 0:
			__LIB_6__::func_830(iParam0, "CR_O_WAITCOACH", bVar0);
			break;
		case 3:
			__LIB_6__::func_830(iParam0, "CR_O_WAITCOACHW", bVar0);
			break;
		case 1:
			__LIB_6__::func_830(iParam0, "CR_O_WAITCOACH", bVar0);
			break;
		case 2:
			__LIB_6__::func_830(iParam0, "CR_O_WAITCOACHS", bVar0);
			break;
	}
}

void func_173()
{
	__LIB_0__::func_325(&(Local_51.f_2208));
	if (!MAP::DOES_BLIP_EXIST(Local_51.f_25[0 /*679*/].f_1.f_2))
	{
		if (!Local_51.f_25[0 /*679*/].f_613)
		{
			if (iLocal_25 != 12)
			{
				func_357(&(Local_51.f_25[0 /*679*/].f_1), &(Local_51.f_25[0 /*679*/].f_1.f_2), 0);
			}
		}
	}
	if (iLocal_26 == 2)
	{
		if (!MAP::DOES_BLIP_EXIST(Local_51.f_25[1 /*679*/].f_1.f_2))
		{
			if (!Local_51.f_25[1 /*679*/].f_613)
			{
				func_357(&(Local_51.f_25[1 /*679*/].f_1), &(Local_51.f_25[1 /*679*/].f_1.f_2), 0);
			}
		}
	}
}

void func_174()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		__LIB_0__::func_325(&(Local_51.f_25[iVar0 /*679*/].f_1.f_2));
		__LIB_0__::func_325(&(Local_51.f_25[iVar0 /*679*/].f_1.f_3));
		iVar0++;
	}
}

void func_176()
{
	__LIB_3__::func_707(150, 1);
}

void func_177(int iParam0)
{
	vector3 vVar0[24];
	char[] cVar3[8];
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(4, __LIB_6__::func_773(iParam0)))
	{
		StringCopy(&cVar0, "", 24);
		cVar3 = __LIB_0__::func_958(0, &cVar0, 0, 0, -1, -1);
		__LIB_6__::func_807(iParam0, &cVar0, cVar3, -1082130432 /* Float: -1f */);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(4, __LIB_6__::func_773(iParam0), MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE"), MISC::GET_HASH_KEY("hud_toasts"));
	}
}

void func_180(int iParam0, bool bParam1)
{
	if (iParam0 != 12)
	{
		__LIB_0__::func_769();
	}
	func_198();
	if (iParam0 == 13)
	{
		if (__LIB_1__::func_707(joaat("DOCUMENT_COACH_ROBBERY_NOTE_06"), 1, 0))
		{
			func_413(joaat("DOCUMENT_COACH_ROBBERY_NOTE_06"), 1, 0, -142743235, 0);
		}
	}
	if (!__LIB_6__::func_706(iParam0))
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_9))
	{
		__LIB_1__::func_544(Global_1392388.f_10[iParam0 /*13*/].f_9);
		VOLUME::_DELETE_VOLUME(Global_1392388.f_10[iParam0 /*13*/].f_9);
	}
	if (bParam1)
	{
		__LIB_2__::func_161(Global_1392388.f_10[iParam0 /*13*/].f_5, 125f, 5);
	}
	Global_40.f_9146.f_4[iParam0] = 3;
	Global_40.f_9146.f_79[iParam0] = -15;
	Global_40.f_9146++;
	Global_40.f_9146.f_111[iParam0]++;
	Global_40.f_9146.f_109 = __LIB_0__::func_23();
	__LIB_0__::func_15(__LIB_0__::func_38(joaat("ROB_COMPLETED"), joaat("COACH")), 1);
	if (__LIB_6__::func_708(iParam0))
	{
		Global_40.f_9146.f_3 = -1;
		if (iParam0 == 6)
		{
			MISC::_0xCC3EDC5614B03F61(35);
		}
		else if (iParam0 == 2)
		{
			MISC::_0xCC3EDC5614B03F61(36);
		}
		func_417(Global_1392388.f_10[iParam0 /*13*/].f_8, 1, 1, 0, 1);
	}
	__LIB_13__::func_376(iParam0);
}

bool func_181(float fParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		if (!__LIB_0__::func_86(Local_51.f_25[iVar0 /*679*/].f_631))
		{
			if (BUILTIN::VDIST(Global_36, Local_51.f_25[iVar0 /*679*/].f_631) < fParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_182(int iParam0, float fParam1)
{
	if (func_418(iParam0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, 0, -1082130432 /* Float: -1f */, 0);
	}
}

void func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	if (!__LIB_0__::func_272(iParam0, 1))
	{
		return;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	if (__LIB_0__::func_272(Global_1392388.f_3, 0))
	{
		PED::REGISTER_TARGET(iParam0, Global_1392388.f_3, 1);
		bVar4 = true;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_COP"));
	LAW::_0x819ADD5EF1742F47(iParam0, 7);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
	{
		iVar1 = __LIB_3__::func_640(iParam0, PED::GET_VEHICLE_PED_IS_IN(iParam0, false));
		if (iVar1 == -1)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
		}
		else if (iVar1 == 0)
		{
			if (__LIB_0__::func_272(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(iParam0, false), -1), 1))
			{
				iVar2 = 1200;
				bVar3 = true;
			}
			else
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
			}
		}
		else if (iVar1 == 1)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
		}
		else if (iVar1 == 2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
		}
		if (bVar3)
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar2, 1048897);
		}
	}
	if (!bVar4)
	{
		TASK::TASK_ARREST_PED(0, Global_35);
	}
	else
	{
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(Global_1392388.f_3, true, false), 100f, 0, 0);
	}
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_185(int iParam0)
{
	iLocal_33 = iParam0;
}

void func_187(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_184(uParam0->f_25[iVar0 /*679*/].f_9);
		iVar0++;
	}
}

void func_188(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_184(uParam0->f_25[iVar0 /*679*/].f_174);
		iVar0++;
	}
}

void func_189(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_9, 3))
		{
			func_163(&(Local_51.f_25[iVar0 /*679*/].f_9), &(Local_51.f_25[iVar0 /*679*/].f_9.f_5), 1, 0, bParam0);
		}
		if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_174, 3))
		{
			func_163(&(Local_51.f_25[iVar0 /*679*/].f_174), &(Local_51.f_25[iVar0 /*679*/].f_174.f_5), 1, 0, bParam0);
		}
		iVar1 = 0;
		while (iVar1 < Local_51.f_25[iVar0 /*679*/].f_499)
		{
			if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_410[iVar1 /*22*/], 3))
			{
				func_163(&(Local_51.f_25[iVar0 /*679*/].f_410[iVar1 /*22*/]), &(Local_51.f_25[iVar0 /*679*/].f_410[iVar1 /*22*/].f_5), 1, 0, bParam0);
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 < Local_51.f_25[iVar0 /*679*/].f_523)
		{
			if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_500[iVar2 /*11*/], 3))
			{
				func_163(&(Local_51.f_25[iVar0 /*679*/].f_500[iVar2 /*11*/]), &(Local_51.f_25[iVar0 /*679*/].f_500[iVar2 /*11*/].f_5), 1, 0, bParam0);
			}
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < Local_51.f_25[iVar0 /*679*/].f_540)
		{
			if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_524[iVar3 /*15*/], 3))
			{
				func_163(&(Local_51.f_25[iVar0 /*679*/].f_524[iVar3 /*15*/]), &(Local_51.f_25[iVar0 /*679*/].f_524[iVar3 /*15*/].f_5), 1, 0, bParam0);
			}
			iVar3++;
		}
		iVar0++;
	}
}

bool func_190()
{
	if ((iLocal_25 == 12 && !__LIB_6__::func_702(1)) && !__LIB_6__::func_702(8192))
	{
		return true;
	}
	return false;
}

bool func_193(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(uParam0->f_1);
	if ((ENTITY::IS_ENTITY_DEAD(uParam0->f_1) || iVar0 == 0) || iVar0 == Global_35)
	{
		return false;
	}
	if (__LIB_0__::func_94(uParam0->f_1, func_421(iParam1), 1) < 12f)
	{
		return true;
	}
	return false;
}

char* func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "prc_chrob_straw1_coach";
		case 1:
			return "prc_chrob_straw2_coach";
		case 2:
			return "prc_chrob_straw3_coach";
		case 3:
			return "prc_chrob_rhod1_coach";
		case 4:
			return "prc_chrob_rhod2_coach";
		case 5:
			return "prc_chrob_rhod3_coach";
		case 6:
			return "prc_chrob_comp1_coach";
		case 7:
			return "prc_chrob_comp2_coach";
		case 8:
			return "prc_chrob_comp3_coach";
		case 9:
			return "prc_chrob_comp4_coach";
		case 10:
			return "prc_chrob_rscintro_coach";
		case 11:
			return "prc_chrob_rtl_coach";
		default:
			break;
	}
	return "ERROR: RECORDING STRING NOT FOUND!";
}

float func_195(int iParam0)
{
	if (iParam0 == 11)
	{
		return 11f;
	}
	if (iParam0 == 8)
	{
		return 13f;
	}
	return 13f;
}

void func_196(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (__LIB_0__::func_1(Global_1347343.f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		__LIB_0__::func_7(&(Global_1347343.f_11), 64);
	}
	if (bParam4)
	{
		__LIB_0__::func_7(&(Global_1347343.f_11), 16384);
	}
	if (__LIB_0__::func_302() >= 2)
	{
		if (!__LIB_0__::func_1(Global_1347343.f_11, 16384))
		{
			__LIB_0__::func_7(&(Global_1347343.f_11), 8);
		}
		__LIB_0__::func_303(0.88f);
	}
	StringCopy(&(Global_1347343.f_3), sParam2, 64);
	Global_1347343.f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343.f_1 = uParam1;
	__LIB_0__::func_7(&Global_1935630, 2048);
	__LIB_1__::func_420(bParam5);
}

void func_198()
{
	int iVar0[7];
	int iVar8;
	iVar0[0] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_01");
	iVar0[1] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_02");
	iVar0[2] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_03");
	iVar0[3] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_04");
	iVar0[4] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_07");
	iVar0[5] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_08");
	iVar0[6] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_09");
	iVar8 = 0;
	while (iVar8 < 7)
	{
		if (__LIB_1__::func_707(iVar0[iVar8], 1, 0))
		{
			func_413(iVar0[iVar8], 1, 1, -142743235, 0);
		}
		iVar8++;
	}
}

bool func_230(int iParam0)
{
	return ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) > 0.7f;
}

bool func_231(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	if (!VEHICLE::IS_VEHICLE_STOPPED(iParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "seat_pside_r1")) };
	vVar3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "seat_dside_r1")) };
	vVar6 = { __LIB_1__::func_367(vVar0, vVar3, 0.5f) };
	vVar6.f_2 = (vVar6.z - 0.6f);
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar6, 1f) > 0)
	{
		return true;
	}
	return false;
}

bool func_232(int iParam0)
{
	if (__LIB_6__::func_702(1073741824 /* Float: 2f */))
	{
		return true;
	}
	if (iParam0 == 2)
	{
		return true;
	}
	if (iParam0 == 8)
	{
		return true;
	}
	return false;
}

int func_233(int iParam0)
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
	if (vVar0.y >= 140f || vVar0.y <= -140f)
	{
		return 3;
	}
	else if (vVar0.y > 50f && vVar0.y < 140f)
	{
		return 1;
	}
	else if (vVar0.y < -50f && vVar0.y > -140f)
	{
		return 2;
	}
	return 0;
}

Vector3 func_244(int iParam0, int iParam1)
{
	vector3 vVar0[24];
	switch (iParam1)
	{
		case 0:
			StringCopy(&cVar0, "G_WARN", 24);
			break;
		case 1:
			StringCopy(&cVar0, "D_SHOCKED", 24);
			break;
		case 2:
			StringCopy(&cVar0, "D_THREAT", 24);
			break;
		case 3:
			StringCopy(&cVar0, "D_CHASE1", 24);
			break;
		case 4:
			StringCopy(&cVar0, "D_CHASE2", 24);
			break;
		case 5:
			StringCopy(&cVar0, "D_CHASE3", 24);
			break;
		case 6:
			StringCopy(&cVar0, "D_BLOCKED", 24);
			break;
		case 7:
			StringCopy(&cVar0, "D_NERV_01", 24);
			break;
		case 8:
			StringCopy(&cVar0, "D_NERV_02", 24);
			break;
		case 9:
			StringCopy(&cVar0, "D_NERV_03", 24);
			break;
		case 10:
			StringCopy(&cVar0, "D_SURR_01", 24);
			break;
		case 11:
			StringCopy(&cVar0, "D_SURR_02", 24);
			break;
		case 12:
			StringCopy(&cVar0, "D_SURR_03", 24);
			break;
		case 13:
			StringCopy(&cVar0, "V_NERV_01", 24);
			break;
		case 14:
			StringCopy(&cVar0, "V_DKILL", 24);
			break;
		case 15:
			StringCopy(&cVar0, "V_DKILL2", 24);
			break;
		case 16:
			StringCopy(&cVar0, "V_DHUP", 24);
			break;
		case 17:
			StringCopy(&cVar0, "V_FLEE_01", 24);
			break;
		case 18:
			StringCopy(&cVar0, "V_FLEE_02", 24);
			break;
		case 19:
			StringCopy(&cVar0, "V_INT_01", 24);
			break;
		case 20:
			StringCopy(&cVar0, "V_INT_02", 24);
			break;
		case 21:
			StringCopy(&cVar0, "V_INT_03", 24);
			break;
		case 22:
			StringCopy(&cVar0, "V_INT_05", 24);
			break;
		case 75:
			StringCopy(&cVar0, "V_EXP_01", 24);
			break;
		case 57:
			StringCopy(&cVar0, "P_CHASE", 24);
			break;
		case 59:
			StringCopy(&cVar0, "P_HALT", 24);
			break;
		case 60:
			StringCopy(&cVar0, "P_INT_01", 24);
			break;
		case 61:
			StringCopy(&cVar0, "P_INT_02", 24);
			break;
		case 62:
			StringCopy(&cVar0, "P_INT_03", 24);
			break;
		case 63:
			StringCopy(&cVar0, "P_INT_04", 24);
			break;
		case 64:
			StringCopy(&cVar0, "P_INT_05", 24);
			break;
		case 65:
			StringCopy(&cVar0, "P_ENT_01", 24);
			break;
		case 66:
			StringCopy(&cVar0, "P_ENT_02", 24);
			break;
		case 67:
			StringCopy(&cVar0, "P_HUP_01", 24);
			break;
		case 68:
			StringCopy(&cVar0, "P_HUP_02", 24);
			break;
		case 69:
			StringCopy(&cVar0, "P_EMPTY", 24);
			break;
		case 70:
			StringCopy(&cVar0, "P_HOLDH", 24);
			break;
		case 23:
			StringCopy(&cVar0, "D_RBL1", 24);
			break;
		case 24:
			StringCopy(&cVar0, "D_RBL2", 24);
			break;
		case 25:
			StringCopy(&cVar0, "D_RBL3", 24);
			break;
		case 26:
			StringCopy(&cVar0, "D_RBLH", 24);
			break;
		case 27:
			StringCopy(&cVar0, "D_RBLV", 24);
			break;
		case 28:
			StringCopy(&cVar0, "D_NOISE", 24);
			break;
		case 29:
			StringCopy(&cVar0, "S_GRD_01", 24);
			break;
		case 30:
			StringCopy(&cVar0, "S_GRD_02", 24);
			break;
		case 31:
			StringCopy(&cVar0, "S_GRD_03", 24);
			break;
		case 32:
			StringCopy(&cVar0, "S_GRD_04", 24);
			break;
		case 33:
			StringCopy(&cVar0, "C_GRT", 24);
			break;
		case 71:
			StringCopy(&cVar0, "P_ILOR", 24);
			break;
		case 72:
			StringCopy(&cVar0, "P_ILOT", 24);
			break;
		case 34:
			StringCopy(&cVar0, "D_ILOR", 24);
			break;
		case 35:
			StringCopy(&cVar0, "D_ILOT", 24);
			break;
		case 36:
			StringCopy(&cVar0, "D_ILOT_02", 24);
			break;
		case 37:
			StringCopy(&cVar0, "D_ILOT_03", 24);
			break;
		case 38:
			StringCopy(&cVar0, "G_ILOT", 24);
			break;
		case 40:
			StringCopy(&cVar0, "S_ILOT", 24);
			break;
		case 73:
			StringCopy(&cVar0, "P_ILOG", 24);
			break;
		case 74:
			StringCopy(&cVar0, "P_ILOS", 24);
			break;
		case 41:
			StringCopy(&cVar0, "D_ILOG", 24);
			break;
		case 42:
			StringCopy(&cVar0, "D_ILOS", 24);
			break;
		case 76:
			StringCopy(&cVar0, "P_ILOTV1", 24);
			break;
		case 77:
			StringCopy(&cVar0, "P_ILOTV2", 24);
			break;
		case 78:
			StringCopy(&cVar0, "P_ILOPV1", 24);
			break;
		case 79:
			StringCopy(&cVar0, "P_ILOPV2", 24);
			break;
		case 43:
			StringCopy(&cVar0, "V_ILOTV1", 24);
			break;
		case 44:
			StringCopy(&cVar0, "V_ILOTV2", 24);
			break;
		case 45:
			StringCopy(&cVar0, "V_ILOPV1", 24);
			break;
		case 46:
			StringCopy(&cVar0, "V_ILOPV2", 24);
			break;
		case 47:
			StringCopy(&cVar0, "B_SPOT", 24);
			break;
		case 48:
			StringCopy(&cVar0, "D_INIT", 24);
			break;
		case 49:
			StringCopy(&cVar0, "D_DODGY", 24);
			break;
		case 50:
			StringCopy(&cVar0, "E_CHAT_01", 24);
			break;
		case 52:
			StringCopy(&cVar0, "E_WARN_01", 24);
			break;
		case 53:
			StringCopy(&cVar0, "E_WARN_02", 24);
			break;
		case 80:
			StringCopy(&cVar0, "P_ARST1", 24);
			break;
		case 81:
			StringCopy(&cVar0, "P_ARST2", 24);
			break;
		case 82:
			StringCopy(&cVar0, "E_TRICK", 24);
			break;
		case 83:
			StringCopy(&cVar0, "D_WORRY", 24);
			break;
		case 51:
			StringCopy(&cVar0, "E_ATT", 24);
			break;
		case 54:
			StringCopy(&cVar0, "D_WRN_01", 24);
			break;
		case 55:
			StringCopy(&cVar0, "D_WRN_02", 24);
			break;
		case 56:
			StringCopy(&cVar0, "D_WRN_03", 24);
			break;
		case 58:
			StringCopy(&cVar0, "V_INT_04", 24);
			break;
	}
	if (__LIB_0__::func_181() && iParam1 >= 57)
	{
		StringConCat(&cVar0, "J", 24);
	}
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "_CRST1", 24);
			break;
		case 1:
			StringConCat(&cVar0, "_CRST2", 24);
			break;
		case 2:
			StringConCat(&cVar0, "_CRST3", 24);
			break;
		case 4:
			StringConCat(&cVar0, "_CRRH1", 24);
			break;
		case 5:
			StringConCat(&cVar0, "_CRRH2", 24);
			break;
		case 6:
			StringConCat(&cVar0, "_CRRH3", 24);
			break;
		case 8:
			StringConCat(&cVar0, "_CRCA1", 24);
			break;
		case 9:
			StringConCat(&cVar0, "_CRCA2", 24);
			break;
		case 10:
			StringConCat(&cVar0, "_CRCA3", 24);
			break;
		case 11:
			StringConCat(&cVar0, "_CRCA4", 24);
			break;
		case 13:
			StringConCat(&cVar0, "_CRRL3", 24);
			break;
		case 12:
			StringConCat(&cVar0, "_CRRSC", 24);
			break;
	}
	return cVar0;
}

int func_246()
{
	switch (Local_51.f_2414)
	{
		case 1:
			return 30;
		case 2:
			return 31;
		default:
			break;
	}
	return 29;
}

int func_249(int iParam0, char* sParam1, int iParam2, char* sParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	if (func_250(iParam0, sParam1, sParam3, &vVar0, &vVar3))
	{
		ENTITY::SET_ENTITY_COORDS(iParam2, vVar0, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iParam2, vVar3, 2, true);
		return 1;
	}
	return 0;
}

bool func_250(int iParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	struct<4> Var0;
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0, sParam1, &Var0, true, sParam2, 2))
	{
		*uParam3 = { Var0 };
		*uParam4 = { Var0.f_3 };
		return true;
	}
	return false;
}

void func_258()
{
	if ((ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) > 0.398282f && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2410) < 0.76533f) && func_95(Global_1392388.f_5))
	{
		if (!__LIB_6__::func_702(32768))
		{
			__LIB_6__::func_705(32768);
		}
	}
}

void func_260(var uParam0)
{
	if (__LIB_0__::func_272(uParam0->f_9, 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		uParam0->f_626 = 1;
	}
}

void func_267(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	int iVar1;
	if (__LIB_0__::func_272(uParam0->f_9, 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		uParam0->f_613 = 0;
		uParam0->f_626 = 0;
		if (bParam2)
		{
			uParam0->f_614 = 1;
			iVar1 = 524308;
		}
		else
		{
			iVar1 = 0;
		}
		if (__LIB_6__::func_702(1))
		{
			fVar0 = func_195(iParam1);
		}
		else
		{
			fVar0 = func_333(uParam0, iParam1);
		}
		__LIB_1__::func_148(&(uParam0->f_643));
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_6__::func_691(iParam1)) && !__LIB_6__::func_702(1))
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(0, __LIB_6__::func_691(iParam1));
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(0, __LIB_6__::func_691(iParam1)))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam0->f_1, 0, __LIB_6__::func_691(iParam1), true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uParam0->f_1, func_471(iParam1));
				func_472(uParam0, iParam1, __LIB_6__::func_702(1));
			}
		}
		else
		{
			func_473(uParam0->f_9, uParam0->f_1, func_194(iParam1), fVar0, iVar1);
			func_472(uParam0, iParam1, __LIB_6__::func_702(1));
		}
	}
}

bool func_270(var uParam0, int iParam1)
{
	if (uParam0->f_25[iParam1 /*679*/].f_613)
	{
		return true;
	}
	return false;
}

void func_275(struct<6> Param0, int iParam6, var uParam7)
{
	func_475(Param0, iParam6, uParam7);
	func_476(uParam7);
}

void func_276()
{
	iLocal_38 = 8;
}

void func_277()
{
	if (iLocal_38 == 8)
	{
		Local_51.f_25[0 /*679*/].f_1.f_1 = joaat("WAGON05X");
		Local_51.f_2214[0 /*3*/].f_1 = joaat("P_CRATE02X");
		Local_51.f_2214[1 /*3*/].f_1 = joaat("P_GEN_STATUE02B");
		Local_51.f_2214[2 /*3*/].f_1 = joaat("P_GEN_STATUE01X");
		Local_51.f_2214[3 /*3*/].f_1 = joaat("P_PAINTING_NEWGALA_LRG01X");
		Local_51.f_2214[4 /*3*/].f_1 = joaat("P_VASE01X");
		Local_51.f_2214[5 /*3*/].f_1 = joaat("P_VASE01X");
	}
}

void func_278(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_25[iVar0 /*679*/].f_1.f_1, false);
		STREAMING::REQUEST_MODEL(uParam0->f_25[iVar0 /*679*/].f_9.f_1, false);
		if (uParam0->f_25[iVar0 /*679*/].f_174.f_74)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_25[iVar0 /*679*/].f_174.f_1, false);
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_25[iVar0 /*679*/].f_499)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_25[iVar0 /*679*/].f_410[iVar1 /*22*/].f_1, false);
			STREAMING::REQUEST_MODEL(uParam0->f_25[iVar0 /*679*/].f_410[iVar1 /*22*/].f_8, false);
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 < uParam0->f_25[iVar0 /*679*/].f_409)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_25[iVar0 /*679*/].f_252[iVar2 /*78*/].f_1, false);
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < uParam0->f_25[iVar0 /*679*/].f_523)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_25[iVar0 /*679*/].f_500[iVar3 /*11*/].f_1, false);
			iVar3++;
		}
		iVar4 = 0;
		while (iVar4 < uParam0->f_25[iVar0 /*679*/].f_540)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_25[iVar0 /*679*/].f_524[iVar4 /*15*/].f_1, false);
			iVar4++;
		}
		iVar5 = 0;
		while (iVar5 < uParam0->f_25[iVar0 /*679*/].f_595)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_25[iVar0 /*679*/].f_541[iVar5 /*13*/].f_1, false);
			STREAMING::REQUEST_MODEL(uParam0->f_25[iVar0 /*679*/].f_541[iVar5 /*13*/].f_8, false);
			iVar5++;
		}
		iVar0++;
	}
	if (func_15(uParam0, 65536))
	{
		iVar6 = 0;
		while (iVar6 < 2)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_5[iVar6 /*9*/].f_1, false);
			iVar6++;
		}
	}
	if (iParam1 == 3)
	{
		iVar7 = 0;
		while (iVar7 < 15)
		{
			if (STREAMING::IS_MODEL_VALID(uParam0->f_2214[iVar7 /*3*/].f_1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_2214[iVar7 /*3*/].f_1, false);
			}
			iVar7++;
		}
		if (uParam0->f_2265)
		{
			PROPSET::_REQUEST_PROPSET(uParam0->f_2261);
		}
	}
}

void func_279(int iParam0)
{
	HUD::_TEXT_DATABASE_REQUEST("SCRB");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_477(iParam0)))
	{
		HUD::_TEXT_DATABASE_REQUEST(func_477(iParam0));
	}
}

void func_280(int iParam0)
{
	TASK::REQUEST_WAYPOINT_RECORDING(func_194(iParam0));
}

bool func_281(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_25[iVar0 /*679*/].f_1.f_1))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_25[iVar0 /*679*/].f_9.f_1))
		{
			return false;
		}
		if (uParam0->f_25[iVar0 /*679*/].f_174.f_74)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_25[iVar0 /*679*/].f_174.f_1))
			{
				return false;
			}
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_25[iVar0 /*679*/].f_499)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_25[iVar0 /*679*/].f_410[iVar1 /*22*/].f_1))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_25[iVar0 /*679*/].f_410[iVar1 /*22*/].f_8))
			{
				return false;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 < uParam0->f_25[iVar0 /*679*/].f_409)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_25[iVar0 /*679*/].f_252[iVar2 /*78*/].f_1))
			{
				return false;
			}
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < uParam0->f_25[iVar0 /*679*/].f_523)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_25[iVar0 /*679*/].f_500[iVar3 /*11*/].f_1))
			{
				return false;
			}
			iVar3++;
		}
		iVar4 = 0;
		while (iVar4 < uParam0->f_25[iVar0 /*679*/].f_540)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_25[iVar0 /*679*/].f_524[iVar4 /*15*/].f_1))
			{
				return false;
			}
			iVar4++;
		}
		iVar5 = 0;
		while (iVar5 < uParam0->f_25[iVar0 /*679*/].f_595)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_25[iVar0 /*679*/].f_541[iVar5 /*13*/].f_1))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_25[iVar0 /*679*/].f_541[iVar5 /*13*/].f_8))
			{
				return false;
			}
			iVar5++;
		}
		iVar0++;
	}
	if (func_15(uParam0, 65536))
	{
		iVar6 = 0;
		while (iVar6 < 2)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_5[iVar6 /*9*/].f_1))
			{
				return false;
			}
			iVar6++;
		}
	}
	if (iParam1 == 3)
	{
		iVar7 = 0;
		while (iVar7 < 15)
		{
			if (STREAMING::IS_MODEL_VALID(uParam0->f_2214[iVar7 /*3*/].f_1))
			{
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_2214[iVar7 /*3*/].f_1))
				{
					return false;
				}
			}
			iVar7++;
		}
		if (uParam0->f_2265)
		{
			if (!PROPSET::_HAS_PROPSET_LOADED(uParam0->f_2261))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_282(int iParam0)
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SCRB"))
	{
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_477(iParam0)))
	{
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_477(iParam0)))
		{
			return false;
		}
	}
	return true;
}

bool func_283(int iParam0)
{
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_194(iParam0)))
	{
		return false;
	}
	return true;
}

int func_284(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_2266)
	{
		iVar0 = (iVar0 + ((((uParam0->f_25[iVar1 /*679*/].f_409 + uParam0->f_25[iVar1 /*679*/].f_523) + uParam0->f_25[iVar1 /*679*/].f_499 * 2) + uParam0->f_25[iVar1 /*679*/].f_595 * 2) + uParam0->f_25[iVar1 /*679*/].f_8) + 1);
		if (uParam0->f_25[iVar1 /*679*/].f_174.f_74)
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_15(uParam0, 65536))
	{
		iVar0 += 2;
	}
	iVar0++;
	return iVar0;
}

Vector3 func_287()
{
	if (__LIB_6__::func_842(iLocal_25))
	{
		return -1748.116f, -395.6581f, 155.3117f;
	}
	return 1272.605f, -1308.233f, 75.3937f;
}

float func_288()
{
	if (__LIB_6__::func_842(iLocal_25))
	{
		return 2.683f;
	}
	return 322.5122f;
}

Vector3 func_289(int iParam0)
{
	vector3 vVar0;
	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1459.863f, -939.7065f, 69.4923f };
			break;
		case 1:
			vVar0 = { -1564.817f, 152.6783f, 105.3872f };
			break;
		case 2:
			vVar0 = { -2698.419f, -298.523f, 147.909f };
			break;
		case 4:
			vVar0 = { 1068.479f, -435.4691f, 90.3698f };
			break;
		case 5:
			vVar0 = { 1401.751f, -1794.102f, 63.2199f };
			break;
		case 6:
			vVar0 = { 1475.728f, -775.874f, 49.8547f };
			break;
	}
	return vVar0;
}

float func_290(int iParam0)
{
	float fVar0;
	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 244.8479f;
			break;
		case 1:
			fVar0 = 285.9957f;
			break;
		case 2:
			fVar0 = 46.5826f;
			break;
		case 4:
			fVar0 = 328.8338f;
			break;
		case 5:
			fVar0 = 220.5335f;
			break;
		case 6:
			fVar0 = 343.714f;
			break;
	}
	return fVar0;
}

void func_291(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_1 = VEHICLE::CREATE_VEHICLE(uParam0->f_1.f_1, vParam1, fParam4, true, true, false, false);
	if (uParam0->f_678 != -1)
	{
		VEHICLE::_0x8C6D9A399126C194(uParam0->f_1, uParam0->f_678);
	}
	uParam0->f_596 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_1);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_1, "Robberies_Coach_Target_Group", 0f);
	__LIB_14__::func_110(uParam0->f_1);
	func_479(uParam0->f_1);
	VEHICLE::_0x850CE59DEC2028F3(uParam0->f_1, 0);
	Global_1392388.f_5 = uParam0->f_1;
}

void func_292(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (iParam0 == 8)
	{
		func_480(uParam2, uParam1, bParam3);
	}
	if (uParam1->f_1.f_1 == joaat("WAGON05X"))
	{
		VEHICLE::SET_VEHICLE_EXTRA(uParam1->f_1, 5, true);
	}
}

void func_294(var uParam0, int iParam1)
{
	if (__LIB_0__::func_181())
	{
		__LIB_0__::func_928(&(uParam0->f_2286), Global_35, "JOHN", 0);
	}
	else
	{
		__LIB_0__::func_928(&(uParam0->f_2286), Global_35, "ARTHUR", 0);
	}
	switch (iParam1)
	{
		case 0:
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_9, "CHRB_DRIVER_STR1", 0);
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_410[0 /*22*/], "CHRB_GUARD_STR1", 0);
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_174, "CHRB_GUARD2_STR1", 0);
			break;
		case 1:
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_9, "CHRB_DRIVER_STR2", 0);
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_410[1 /*22*/], "CHRB_GUARD_STR2", 0);
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_410[0 /*22*/], "CHRB_GUARD2_STR2", 0);
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_174, "CHRB_SHOTGUN_STR2", 0);
			break;
		case 2:
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_9, "CHRB_DRIVER_STR3", 0);
			break;
		case 4:
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_9, "CHRB_DRIVER_RHD1", 0);
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_500[0 /*11*/], "CHRB_GUARD_RHD1", 0);
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_174, "CHRB_SHOTGUN_RHD1", 0);
			break;
		case 5:
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_9, "CHRB_DRIVER_RHD2", 0);
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_252[0 /*78*/], "CHRB_BUSINESSMAN_RHD2", 0);
			break;
		case 6:
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_9, "CHRB_DRIVER_RHD3", 0);
			break;
		case 13:
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_9, "CHRB_DRIVER_RTL3", 0);
			break;
		case 12:
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_9, "RCHRB1_DRIVER", 0);
			break;
		case 8:
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_9, "CHRC1_DRIVER", 0);
			break;
		case 9:
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_9, "CHRC2_DRIVER", 0);
			break;
		case 10:
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_9, "CHRC3_DRIVER", 0);
			break;
		case 11:
			__LIB_0__::func_928(&(uParam0->f_2286), uParam0->f_25[0 /*679*/].f_9, "Comp4_Driver", 0);
			break;
	}
}

bool func_297(var uParam0, vector3 vParam1, float fParam4)
{
	struct<11> Var0;
	int iVar11;
	Var0.f_10 = 7;
	Var0 = 0;
	Var0.f_1 = 0;
	Var0.f_4 = 0;
	Var0.f_3 = 0;
	Var0.f_6 = { vParam1 };
	if (fParam4 == -1f)
	{
		Var0.f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		Var0.f_9 = fParam4;
	}
	Var0.f_2 = 0;
	iVar11 = 0;
	*uParam0 = __LIB_4__::func_720(&iVar11, &Var0);
	if (iVar11 == 0)
	{
		return false;
	}
	else if (iVar11 == 1)
	{
		return true;
	}
	else if (iVar11 == 2)
	{
		return true;
	}
	return true;
}

void func_298(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_1__::func_794(iParam1);
	bVar1 = !__LIB_6__::func_708(iParam1);
	__LIB_1__::func_616(__LIB_1__::func_794(iParam1), bVar1, 0.5f, 1, 0, 0, 1, 752097756);
	uParam0->f_2067 = (uParam0->f_2067 + iVar0);
}

int func_306(int iParam0, int iParam1)
{
	var uVar0;
	return func_500(&uVar0, iParam0, iParam1);
}

void func_317(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_272(uParam0->f_9, 3))
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_9))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_9));
		}
		else
		{
			PED::DELETE_PED(&(uParam0->f_9));
		}
	}
	if (__LIB_0__::func_272(uParam0->f_174, 3))
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_174))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_174));
		}
		else
		{
			PED::DELETE_PED(&(uParam0->f_174));
		}
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (__LIB_0__::func_272(uParam0->f_410[iVar0 /*22*/], 3))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_410[iVar0 /*22*/]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_410[iVar0 /*22*/]));
			}
			else
			{
				PED::DELETE_PED(&(uParam0->f_410[iVar0 /*22*/]));
			}
		}
		if (__LIB_0__::func_272(uParam0->f_410[iVar0 /*22*/].f_7, 3))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_410[iVar0 /*22*/].f_7))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_410[iVar0 /*22*/].f_7));
			}
			else
			{
				PED::DELETE_PED(&(uParam0->f_410[iVar0 /*22*/].f_7));
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_523)
	{
		if (__LIB_0__::func_272(uParam0->f_500[iVar1 /*11*/], 3))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_500[iVar1 /*11*/]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_500[iVar1 /*11*/]));
			}
			else
			{
				PED::DELETE_PED(&(uParam0->f_500[iVar1 /*11*/]));
			}
		}
		iVar1++;
	}
	if (!bParam1)
	{
		__LIB_0__::func_325(&(uParam0->f_1.f_2));
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_1))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&(uParam0->f_1));
			}
		}
	}
}

bool func_318()
{
	if (iLocal_25 != 5)
	{
		return false;
	}
	if (!__LIB_6__::func_702(1))
	{
		return false;
	}
	if (func_15(&Local_51, 16))
	{
		return false;
	}
	return true;
}

void func_319(int iParam0)
{
	int iVar0;
	iVar0 = Local_51.f_25[iParam0 /*679*/].f_9;
	if (!__LIB_0__::func_272(iVar0, 0))
	{
		return;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
	{
		return;
	}
	if (Local_51.f_25[iParam0 /*679*/].f_611 || Local_51.f_25[iParam0 /*679*/].f_613)
	{
		return;
	}
	if (__LIB_0__::func_94(Local_51.f_25[iParam0 /*679*/].f_1, Global_36, 1) > 50f)
	{
		return;
	}
	switch (iLocal_35)
	{
		case 0:
			if (__LIB_0__::func_265(&(Local_51.f_2158)) > 5f)
			{
				if (!AUDIO::_0xFE5C6177064BD390(1))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, 3))
					{
						iLocal_35 = 1;
					}
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&(Local_51.f_2158)) > 15f)
			{
				if (!AUDIO::_0xFE5C6177064BD390(1))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, 4))
					{
						iLocal_35 = 2;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&(Local_51.f_2158)) > 25f)
			{
				if (!AUDIO::_0xFE5C6177064BD390(1))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, 5))
					{
						iLocal_35 = 6;
					}
				}
			}
			break;
	}
}

bool func_320(var uParam0)
{
	int iVar0;
	if (uParam0->f_1.f_1 == joaat("COACH2"))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_601)) < 2f)
		{
			iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
			if (iVar0 == joaat("RANSACK_REACH_IN_PICKUP_1M5_0M5_2M0") || iVar0 == joaat("RANSACK_REACH_OVER_PICKUP_1M5_0M5_2M0"))
			{
				return true;
			}
		}
	}
	return false;
}

void func_321(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		func_504(&(uParam0->f_410[iVar0 /*22*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_322(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (uParam0->f_595 == 0)
	{
		return;
	}
	iVar0 = func_505();
	switch (uParam0->f_594)
	{
		case 0:
			if (func_506(uParam0))
			{
				func_507(uParam0, &Local_51, iLocal_24, iLocal_46);
				if (uParam0->f_673 && uParam0->f_674)
				{
					iVar1 = 0;
					while (iVar1 < uParam0->f_595)
					{
						if (__LIB_0__::func_272(uParam0->f_541[iVar1 /*13*/], 0))
						{
							if (func_508() && iVar1 == 0)
							{
								func_509(uParam0->f_541[iVar1 /*13*/]);
							}
							func_163(&(uParam0->f_541[iVar1 /*13*/]), &(uParam0->f_541[iVar1 /*13*/].f_5), 1, 0, 0);
						}
						iVar1++;
					}
					uParam0->f_594 = 1;
				}
			}
			break;
		case 1:
			iVar1 = 0;
			while (iVar1 < uParam0->f_595)
			{
				if (__LIB_0__::func_272(uParam0->f_541[iVar1 /*13*/], 0))
				{
					func_510(&(uParam0->f_541[iVar1 /*13*/]), iParam1, iVar1, iVar0);
				}
				iVar1++;
			}
			break;
	}
}

void func_323(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_523)
	{
		if (uParam0->f_500[iVar0 /*11*/].f_10)
		{
			if (__LIB_0__::func_272(uParam0->f_500[iVar0 /*11*/], 1))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_500[iVar0 /*11*/], true))
				{
					ENTITY::SET_ENTITY_PROOFS(uParam0->f_500[iVar0 /*11*/], 0, false);
					uParam0->f_500[iVar0 /*11*/].f_10 = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_324(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	var uVar6;
	iVar0 = 472;
	iVar1 = 1;
	if ((iLocal_25 == 12 || iLocal_25 == 9) || iLocal_25 == 8)
	{
		return;
	}
	if (uParam0->f_160)
	{
		func_511(iParam1, 40f, iVar0);
	}
	if (MAP::DOES_BLIP_EXIST(iParam2))
	{
		vVar2 = { MAP::GET_BLIP_COORDS(iParam2) };
	}
	if ((__LIB_6__::func_702(1) || uParam0->f_164 == 14) || (!__LIB_0__::func_86(vVar2) && __LIB_0__::func_266(Global_35, vVar2, 3f, 1, 1)))
	{
		if (!uParam0->f_158)
		{
			__LIB_2__::func_624(&(uParam0->f_54), 1, 1, 1, 0);
			__LIB_2__::func_624(&(uParam0->f_106), 1, 1, 1, 0);
			MISC::_0xE98D55C5983F2509(*uParam0);
			uParam0->f_158 = 1;
		}
		return;
	}
	if (__LIB_9__::func_756(iLocal_25))
	{
		if (ENTITY::_0x0B7CB1300CBFE19C(Global_35, 1))
		{
			if ((__LIB_6__::func_803() || !__LIB_0__::func_71(Global_35)) || __LIB_4__::func_365())
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
		}
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 364, true) && !ENTITY::_0x0B7CB1300CBFE19C(Global_35, 1))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 364, false);
	}
	if (!__LIB_6__::func_843(8192))
	{
		if (__LIB_6__::func_708(iLocal_25))
		{
			if (__LIB_0__::func_272(*uParam0, 0) && __LIB_0__::func_94(*uParam0, Global_36, 1) < 150f)
			{
				if (!__LIB_0__::func_104() && !__LIB_0__::func_270())
				{
					__LIB_0__::func_45("CR_HELP_ILO", 10000, 0, 0, 0, 1);
					__LIB_6__::func_841(8192);
				}
			}
		}
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, Local_51.f_25[iParam1 /*679*/].f_1, false) || (__LIB_6__::func_803() && !__LIB_2__::func_364(*uParam0, 0, 0, 0)))
	{
		if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 301, true))
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, true);
		}
		if (uParam0->f_164 != 9 && uParam0->f_164 != 11)
		{
			return;
		}
	}
	else if (PED::GET_PED_CONFIG_FLAG(*uParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
	}
	iVar5 = -1;
	switch (uParam0->f_164)
	{
		case 0:
			if (__LIB_0__::func_272(*uParam0, 0))
			{
				if (__LIB_9__::func_756(iLocal_25))
				{
					func_516();
				}
				PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
				__LIB_3__::func_157(&(uParam0->f_54[0 /*17*/]), "CR_ILO_STOP", 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
				if (!func_518(iLocal_25))
				{
					__LIB_3__::func_515(&(uParam0->f_54[0 /*17*/]), 0, 0);
				}
				if (__LIB_0__::func_0(iLocal_25))
				{
					__LIB_3__::func_157(&(uParam0->f_54[1 /*17*/]), "CR_ILO_GREET", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					if (!func_518(iLocal_25))
					{
						__LIB_3__::func_515(&(uParam0->f_54[1 /*17*/]), 0, 0);
					}
				}
				__LIB_3__::func_157(&(uParam0->f_54[2 /*17*/]), "CR_ILO_ANTAG", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_3__::func_515(&(uParam0->f_54[2 /*17*/]), 0, 0);
				__LIB_13__::func_140(&(uParam0->f_12), 1, 0);
				uParam0->f_164 = 1;
			}
			break;
		case 1:
			iVar5 = func_523(uParam0, &(uParam0->f_12), 40f, &(uParam0->f_54), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (ENTITY::GET_ENTITY_SPEED(Local_51.f_25[iParam1 /*679*/].f_1) < 0.5f && __LIB_0__::func_266(Local_51.f_25[iParam1 /*679*/].f_1, Global_36, 40f, 1, 1))
			{
				uParam0->f_164 = 7;
			}
			else if (iVar5 == 0)
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 74))
				{
					func_381(iLocal_25, 48, 0);
					if (__LIB_3__::func_425(&uVar6))
					{
						if (__LIB_9__::func_756(iLocal_25))
						{
							func_524(iParam1);
						}
						__LIB_3__::func_515(&(uParam0->f_54[0 /*17*/]), 0, 0);
						__LIB_1__::func_148(&(uParam0->f_161));
						uParam0->f_159 = 1;
						uParam0->f_164 = 9;
						return;
					}
					if (__LIB_9__::func_756(iLocal_25))
					{
						func_524(iParam1);
					}
					__LIB_3__::func_515(&(uParam0->f_54[0 /*17*/]), 0, 0);
					if (__LIB_0__::func_0(iLocal_25))
					{
						__LIB_3__::func_515(&(uParam0->f_54[1 /*17*/]), 0, 0);
					}
					__LIB_1__::func_148(&(uParam0->f_161));
					uParam0->f_159 = 1;
					Local_51.f_25[iParam1 /*679*/].f_630 = 1;
					if (func_525(iLocal_25))
					{
						func_526(&Local_51, iLocal_24, 524419);
					}
					uParam0->f_164 = 2;
				}
			}
			else if (iVar5 == 1)
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 73))
				{
					func_381(iLocal_25, 48, 1);
					__LIB_3__::func_515(&(uParam0->f_54[0 /*17*/]), 0, 0);
					if (__LIB_0__::func_0(iLocal_25))
					{
						__LIB_3__::func_515(&(uParam0->f_54[1 /*17*/]), 0, 0);
					}
					__LIB_1__::func_148(&(uParam0->f_161));
					uParam0->f_159 = 1;
					uParam0->f_164 = 3;
				}
			}
			break;
		case 2:
			iVar5 = func_523(uParam0, &(uParam0->f_12), 40f, &(uParam0->f_54), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (__LIB_0__::func_265(&(uParam0->f_161)) > 2f && !AUDIO::_0xFE5C6177064BD390(1))
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 42))
				{
					if (__LIB_0__::func_58(iLocal_25))
					{
						if (__LIB_0__::func_272(Local_51.f_25[iParam1 /*679*/].f_174, 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[iParam1 /*679*/].f_174, Global_35, -1, 0, 51, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_51.f_25[iParam1 /*679*/].f_174, Global_35, -1, false, 1);
						}
					}
					func_379();
					__LIB_1__::func_148(&(uParam0->f_161));
					uParam0->f_164 = 4;
				}
			}
			break;
		case 3:
			iVar5 = func_523(uParam0, &(uParam0->f_12), 40f, &(uParam0->f_54), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (__LIB_0__::func_265(&(uParam0->f_161)) > 2f && !AUDIO::_0xFE5C6177064BD390(1))
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 41))
				{
					__LIB_1__::func_148(&(uParam0->f_161));
					uParam0->f_164 = 5;
				}
			}
			break;
		case 4:
			iVar5 = func_523(uParam0, &(uParam0->f_12), 40f, &(uParam0->f_54), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (func_525(iLocal_25))
			{
				iParam1 = 0;
				while (iParam1 < Local_51.f_2266)
				{
					Local_51.f_25[iParam1 /*679*/].f_597 = 0f;
					iParam1++;
				}
				func_101(&Local_51);
				VEHICLE::BRING_VEHICLE_TO_HALT(Local_51.f_25[iParam1 /*679*/].f_1, 3f, 2, false);
				func_4(&Local_51, 131072);
				Local_51.f_25[iParam1 /*679*/].f_630 = 1;
				uParam0->f_164 = 6;
			}
			else if (iLocal_25 == 5)
			{
				func_112(&Local_51, iLocal_24, 1);
				Local_51.f_25[iParam1 /*679*/].f_630 = 0;
				uParam0->f_159 = 0;
				uParam0->f_164 = 14;
			}
			else
			{
				uParam0->f_159 = 0;
				uParam0->f_164 = 1;
			}
			break;
		case 5:
			iVar5 = func_523(uParam0, &(uParam0->f_12), 40f, &(uParam0->f_54), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (__LIB_0__::func_265(&(uParam0->f_161)) > 2f && !AUDIO::_0xFE5C6177064BD390(1))
			{
				if (func_528(iLocal_25))
				{
					uParam0->f_164 = 7;
				}
				else
				{
					__LIB_3__::func_515(&(uParam0->f_54[0 /*17*/]), 1, 0);
					uParam0->f_164 = 1;
				}
			}
			break;
		case 6:
			if (Local_51.f_25[iParam1 /*679*/].f_630)
			{
				if (!Local_51.f_25[iParam1 /*679*/].f_626)
				{
					func_101(&Local_51);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_51.f_25[iParam1 /*679*/].f_1, 3f, 2, false);
				}
			}
			iVar5 = func_523(uParam0, &(uParam0->f_12), 40f, &(uParam0->f_54), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (ENTITY::GET_ENTITY_SPEED(Local_51.f_25[iParam1 /*679*/].f_1) < 1f)
			{
				uParam0->f_164 = 7;
			}
			break;
		case 7:
			iVar5 = func_523(uParam0, &(uParam0->f_33), 40f, &(uParam0->f_106), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (Local_51.f_25[iParam1 /*679*/].f_630)
			{
				if (!Local_51.f_25[iParam1 /*679*/].f_626)
				{
					func_101(&Local_51);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_51.f_25[iParam1 /*679*/].f_1, 3f, 2, false);
				}
			}
			if (__LIB_0__::func_272(*uParam0, 0))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
				if (__LIB_0__::func_0(iLocal_25))
				{
					if (func_530(iLocal_25))
					{
						__LIB_3__::func_157(&(uParam0->f_106[0 /*17*/]), "CR_ILO_THREATEN", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					}
					else
					{
						__LIB_3__::func_157(&(uParam0->f_106[0 /*17*/]), "CR_ILO_ROB", 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
					}
					if (!func_518(iLocal_25))
					{
						__LIB_3__::func_515(&(uParam0->f_106[0 /*17*/]), 0, 0);
					}
				}
				if (func_528(iLocal_25))
				{
					__LIB_3__::func_157(&(uParam0->f_106[1 /*17*/]), "CR_ILO_TRICK", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					if (__LIB_3__::func_425(&uVar6))
					{
						__LIB_3__::func_515(&(uParam0->f_106[1 /*17*/]), 0, 0);
					}
				}
				if (!func_530(iLocal_25))
				{
					__LIB_3__::func_157(&(uParam0->f_106[2 /*17*/]), "CR_ILO_ANTAG", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					__LIB_3__::func_515(&(uParam0->f_106[2 /*17*/]), 0, 0);
				}
				__LIB_2__::func_624(&(uParam0->f_54), 0, 0, 1, 0);
				__LIB_1__::func_148(&(uParam0->f_161));
				uParam0->f_164 = 8;
			}
			break;
		case 8:
			iVar5 = func_523(uParam0, &(uParam0->f_33), 40f, &(uParam0->f_106), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (Local_51.f_25[iParam1 /*679*/].f_630 && !uParam0->f_160)
			{
				if (__LIB_0__::func_265(&(uParam0->f_161)) > 15f)
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, 9))
					{
						func_112(&Local_51, iLocal_24, 1);
						Local_51.f_25[iParam1 /*679*/].f_630 = 0;
					}
				}
				else if (!Local_51.f_25[iParam1 /*679*/].f_626)
				{
					func_101(&Local_51);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_51.f_25[iParam1 /*679*/].f_1, 3f, 2, false);
				}
			}
			if (iVar5 == 0)
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 71))
				{
					__LIB_3__::func_515(&(uParam0->f_106[0 /*17*/]), 0, 0);
					if (func_528(iLocal_25))
					{
						__LIB_3__::func_515(&(uParam0->f_106[1 /*17*/]), 0, 0);
					}
					func_379();
					__LIB_1__::func_148(&(uParam0->f_161));
					uParam0->f_159 = 1;
					uParam0->f_164 = 9;
				}
			}
			else if (iVar5 == 1)
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 72))
				{
					if (__LIB_9__::func_756(iLocal_25))
					{
						func_532(iParam1);
					}
					__LIB_3__::func_515(&(uParam0->f_106[0 /*17*/]), 0, 0);
					if (func_528(iLocal_25))
					{
						if (iLocal_36 < 11)
						{
							__LIB_9__::func_744(11);
						}
						if (!Local_51.f_25[iParam1 /*679*/].f_630)
						{
							Local_51.f_25[iParam1 /*679*/].f_630 = 1;
						}
						__LIB_3__::func_515(&(uParam0->f_106[1 /*17*/]), 0, 0);
					}
					func_379();
					__LIB_1__::func_148(&(uParam0->f_161));
					uParam0->f_159 = 1;
					uParam0->f_164 = 10;
				}
			}
			break;
		case 9:
			iVar5 = func_523(uParam0, &(uParam0->f_33), 40f, &(uParam0->f_106), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (__LIB_0__::func_265(&(uParam0->f_161)) > 2f && !AUDIO::_0xFE5C6177064BD390(1))
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 34))
				{
					__LIB_1__::func_148(&(uParam0->f_161));
					uParam0->f_164 = 11;
				}
			}
			break;
		case 10:
			iVar5 = func_523(uParam0, &(uParam0->f_33), 40f, &(uParam0->f_106), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (func_534(iLocal_25))
			{
				if (__LIB_0__::func_265(&(uParam0->f_161)) > 5f)
				{
					if (!Local_51.f_25[iParam1 /*679*/].f_626)
					{
						func_101(&Local_51);
					}
				}
			}
			if (__LIB_0__::func_265(&(uParam0->f_161)) > 2f && !AUDIO::_0xFE5C6177064BD390(1))
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 35))
				{
					if (iLocal_25 == 4)
					{
						TASK::TASK_LOOK_AT_COORD(*uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_51.f_25[iParam1 /*679*/].f_1, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_51.f_25[iParam1 /*679*/].f_1, "wheel_lr")), 4000, 0, 51, 1);
					}
					__LIB_1__::func_148(&(uParam0->f_161));
					uParam0->f_164 = 12;
				}
			}
			break;
		case 11:
			iVar5 = func_523(uParam0, &(uParam0->f_33), 40f, &(uParam0->f_106), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (func_530(iLocal_25))
			{
				func_101(&Local_51);
				VEHICLE::BRING_VEHICLE_TO_HALT(Local_51.f_25[iParam1 /*679*/].f_1, 5f, 2, false);
				func_536(&(Local_51.f_25[iParam1 /*679*/]), Global_35);
				func_4(&Local_51, 16);
			}
			else if (!__LIB_6__::func_702(524288))
			{
				func_112(&Local_51, iLocal_24, 1);
				Local_51.f_25[iParam1 /*679*/].f_630 = 0;
			}
			__LIB_6__::func_705(32768);
			uParam0->f_164 = 14;
			break;
		case 12:
			iVar5 = func_523(uParam0, &(uParam0->f_33), 40f, &(uParam0->f_106), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (__LIB_0__::func_265(&(uParam0->f_161)) > 2f)
			{
				if (func_534(iLocal_25))
				{
					uParam0->f_160 = 1;
				}
				else
				{
					func_112(&Local_51, iLocal_24, 1);
					Local_51.f_25[iParam1 /*679*/].f_630 = 0;
				}
				if (__LIB_0__::func_0(iLocal_25))
				{
					__LIB_3__::func_515(&(uParam0->f_106[0 /*17*/]), 1, 0);
					uParam0->f_164 = 8;
				}
				else
				{
					uParam0->f_164 = 13;
				}
			}
			break;
	}
}

void func_325(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	if (iLocal_26 != 3)
	{
		return;
	}
	if (iLocal_38 != 8)
	{
		return;
	}
	if (!func_15(&Local_51, 67108864))
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (func_537(uParam0->f_1))
	{
		return;
	}
	vVar0 = { 0f, -2f, -1f };
	vVar3 = { 0f, 2f, 4f };
	fVar6 = 2.5f;
	bVar7 = false;
	iVar8 = 0;
	while (iVar8 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_2214[iVar8 /*3*/]))
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_51.f_2214[iVar8 /*3*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, vVar0), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, vVar3), fVar6, false, true, 0) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_51.f_2214[iVar8 /*3*/]))
			{
				OBJECT::_0x8462BE2341A55B6F(Local_51.f_2214[iVar8 /*3*/]);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_51.f_2214[iVar8 /*3*/]));
				__LIB_1__::func_265(Global_35, "GENERIC_CURSE_HIGH", 1506116031, 0, 1, 0, 0, 1);
				bVar7 = true;
			}
		}
		iVar8++;
	}
	fVar9 = func_539();
	if (fVar9 < 70f)
	{
		if (iLocal_50 != 7)
		{
			__LIB_9__::func_322(&(uParam0->f_1), 7);
			iLocal_50 = 7;
		}
	}
	else if (fVar9 < 85f)
	{
		if (iLocal_50 != 6)
		{
			__LIB_9__::func_322(&(uParam0->f_1), 6);
			iLocal_50 = 6;
		}
	}
	else if (fVar9 < 100f)
	{
		if (iLocal_50 != 5)
		{
			__LIB_9__::func_322(&(uParam0->f_1), 5);
			iLocal_50 = 5;
		}
	}
	if (!func_15(&Local_51, 1073741824 /* Float: 2f */))
	{
		if (bVar7)
		{
			func_4(&Local_51, 1073741824 /* Float: 2f */);
		}
	}
	if (bLocal_2529)
	{
		return;
	}
	if (uParam0->f_629)
	{
		fVar10 = 3f;
	}
	else
	{
		fVar10 = 20f;
	}
	if (ENTITY::_0x6D58167F62238284(uParam0->f_1) > fVar10 && ENTITY::GET_ENTITY_SPEED(uParam0->f_1) > 2f)
	{
		func_540();
	}
}

void func_326(int iParam0)
{
	int iVar0;
	int iVar1[20];
	int iVar22;
	iVar0 = func_541(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	PED::GET_PED_NEARBY_PEDS(iVar0, &iVar1, -1, -1);
	iVar22 = 0;
	while (iVar22 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1[iVar22]))
		{
			if (!PED::IS_PED_INJURED(iVar1[iVar22]))
			{
				if (((((__LIB_0__::func_125(iVar1[iVar22]) && PED::_0xE4770DA1B8FF4FD1(iVar1[iVar22]) == 0) && PED::_GET_RIDER_OF_MOUNT(iVar1[iVar22], false) == 0) && BUILTIN::VDIST(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 30f, 0f), ENTITY::GET_ENTITY_COORDS(iVar1[iVar22], true, false)) < 30f) && !PED::IS_PED_FLEEING(iVar1[iVar22])) && !__LIB_0__::func_163(iVar1[iVar22], 518218985))
				{
					if (iLocal_2477 == 5 && PATHFIND::IS_POINT_ON_ROAD(ENTITY::GET_ENTITY_COORDS(iVar1[iVar22], true, false), 0))
					{
						TASK::TASK_SMART_FLEE_COORD(iVar1[iVar22], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 15f, 0f), 50f, -1, false, 1077936128);
					}
				}
			}
		}
		iVar22++;
	}
}

void func_327(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_2__::func_1(uParam0->f_9, 0, 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(uParam0->f_9, true, false);
	PED::_0xF1C03A5352243A30(uParam0->f_9);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_9, false);
	VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1, 6f, 1, false);
	if (!__LIB_2__::func_1(uParam0->f_174, 0, 1))
	{
		return;
	}
	PED::_0xF1C03A5352243A30(uParam0->f_174);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_174, false);
	TASK::TASK_LOOK_AT_ENTITY(uParam0->f_174, Global_35, -1, 0, 51, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_LEAVE_ANY_VEHICLE(0, 2000, 64);
	TASK::TASK_GOTO_ENTITY_OFFSET_XY(0, uParam0->f_1, -1, 0.5f, 1.4f, -3.4f, 1f, true);
	__LIB_1__::func_473(0, joaat("WORLD_HUMAN_SMOKE"), 0, 0, 0, -1082130432 /* Float: -1f */);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(uParam0->f_174, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_328(var uParam0)
{
	if (!__LIB_2__::func_1(uParam0->f_9, 0, 1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_9))
	{
		PED::_0x802092B07E3B1EEA(uParam0->f_9, Global_36, 3);
	}
	func_163(&(uParam0->f_9), &(uParam0->f_9.f_5), 1, 0, 0);
	func_544(uParam0->f_9, uParam0->f_1, 1);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(uParam0->f_9, true);
	uParam0->f_9.f_8 = 1;
}

void func_329(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (__LIB_0__::func_272(uParam0->f_410[iVar0 /*22*/], 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_410[iVar0 /*22*/], bParam1);
		}
		iVar0++;
	}
}

void func_330(var uParam0, int iParam1, struct<6> Param2)
{
	int iVar0;
	if (func_270(&Local_51, iParam1))
	{
		func_545(uParam0, Param2);
		if (iLocal_42 == 1 || iLocal_42 == 2)
		{
			func_546(uParam0, 1);
		}
		if (__LIB_6__::func_702(2097152))
		{
			__LIB_6__::func_704(2097152);
		}
		return;
	}
	if (uParam0->f_612)
	{
		return;
	}
	if (!func_15(&Local_51, 1))
	{
		return;
	}
	if ((ENTITY::IS_ENTITY_DEAD(uParam0->f_1) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1, false, false)) || VEHICLE::_0x18714953CCED17D3(uParam0->f_1))
	{
		uParam0->f_613 = 1;
		uParam0->f_631 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
		__LIB_6__::func_704(2097152);
		return;
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_676);
	if (__LIB_6__::func_702(1))
	{
		if (__LIB_6__::func_702(524288) || func_547(&Local_51))
		{
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, 0f);
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_1))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1, 10f, 1, false);
			}
			uParam0->f_613 = 1;
			uParam0->f_631 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
			return;
		}
	}
	if (iVar0 == Global_35 && !__LIB_6__::func_702(2097152))
	{
		uParam0->f_613 = 1;
		uParam0->f_631 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
		__LIB_6__::func_704(2097152);
		return;
	}
	if (*uParam0 >= 2 && (__LIB_0__::func_75(&(Local_51.f_2149)) && __LIB_0__::func_265(&(Local_51.f_2149)) > 5f))
	{
		if (func_548(uParam0))
		{
			uParam0->f_613 = 1;
			uParam0->f_631 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
			__LIB_6__::func_704(2097152);
			return;
		}
	}
	if (!func_386(uParam0))
	{
		if (!__LIB_6__::func_702(2097152))
		{
			if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) < 1f)
			{
				uParam0->f_613 = 1;
				uParam0->f_631 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
				__LIB_6__::func_770(uParam0->f_1);
				return;
			}
		}
		else
		{
			func_550(uParam0, Param2);
		}
	}
	if (iParam1 != 0 && (Local_51.f_25[0 /*679*/].f_613 || !__LIB_0__::func_272(VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(Local_51.f_25[0 /*679*/].f_1), 0)))
	{
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
		TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, 0f);
		VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1, 1f, 1, false);
		uParam0->f_613 = 1;
		uParam0->f_631 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
		__LIB_6__::func_770(uParam0->f_1);
		return;
	}
	if (uParam0->f_626 || func_15(&Local_51, 16))
	{
		if (!func_551(uParam0))
		{
			if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) < 0.2f)
			{
				TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, 0f);
				func_182(iVar0, 0f);
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_1))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1, 1f, 1, false);
				}
				uParam0->f_613 = 1;
				uParam0->f_631 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
				__LIB_6__::func_770(uParam0->f_1);
				return;
			}
			else
			{
				uParam0->f_597 = (uParam0->f_597 - (0.1f * (MISC::GET_FRAME_TIME() * 30f)));
				if (uParam0->f_597 < 0f)
				{
					uParam0->f_597 = 0f;
				}
				TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, uParam0->f_597);
				func_182(iVar0, uParam0->f_597);
			}
		}
	}
}

void func_331(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (uParam0->f_613)
	{
		return;
	}
	if (uParam0->f_626)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		return;
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_676);
	if (!__LIB_0__::func_272(iVar0, 0))
	{
		return;
	}
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_1, 0))
	{
		return;
	}
	if (func_15(&Local_51, 2))
	{
		fVar1 = Local_51.f_25[0 /*679*/].f_597;
	}
	else
	{
		fVar1 = func_333(uParam0, iLocal_24);
	}
	fVar3 = 20f;
	fVar2 = (fVar3 - BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_51.f_25[0 /*679*/].f_1, true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false)));
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	fVar2 = (fVar2 / fVar3);
	fVar4 = __LIB_0__::func_667(fVar1, 0f, fVar2);
	TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fVar4);
	TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam0->f_1, fVar4);
	uParam0->f_597 = fVar4;
}

void func_332(var uParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	if (uParam0->f_613)
	{
		return;
	}
	if (!func_553(uParam0))
	{
		return;
	}
	if (!func_554())
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		return;
	}
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_1, 0))
	{
		return;
	}
	if (__LIB_0__::func_75(&(uParam0->f_620)))
	{
		return;
	}
	fVar1 = 150f;
	if (!__LIB_9__::func_954(uParam0->f_1, Global_35, func_194(iLocal_24), fVar1))
	{
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_676);
		if (__LIB_0__::func_272(iVar2, 0))
		{
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar2, func_195(iLocal_24));
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam0->f_1, func_195(iLocal_24));
		}
		uParam0->f_597 = func_195(iLocal_24);
		return;
	}
	fVar0 = (fVar1 - BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false)));
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	fVar0 = (fVar0 / fVar1);
	fVar3 = __LIB_0__::func_667((func_195(iLocal_24) / 2f), func_195(iLocal_24), fVar0);
	iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_676);
	if (__LIB_0__::func_272(iVar4, 0))
	{
		TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar4, (fVar3 - func_556(uParam0)));
		TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam0->f_1, (fVar3 - func_556(uParam0)));
	}
	uParam0->f_597 = fVar3;
}

float func_333(var uParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		return 5f;
	}
	if (iParam1 == 8)
	{
		return 4.8f;
	}
	if (iParam1 == 9)
	{
		return 2.7f;
	}
	if (iParam1 == 10)
	{
		if (!uParam0->f_610)
		{
			return 3.4f;
		}
		else
		{
			return 5f;
		}
	}
	return 4.4f;
}

int func_334()
{
	switch (iLocal_50)
	{
		case 7:
			return 1000;
		case 6:
			return 5000;
		case 5:
			return 7500;
		default:
			break;
	}
	return 1000;
}

void func_336(var uParam0)
{
	if (uParam0->f_613)
	{
		return;
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_1, 0))
	{
		return;
	}
	if (!__LIB_0__::func_272(uParam0->f_9, 0) && __LIB_0__::func_272(uParam0->f_174, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_676) == uParam0->f_174)
		{
			__LIB_0__::func_37(&(uParam0->f_623));
			func_473(uParam0->f_174, uParam0->f_1, func_194(iLocal_24), func_195(iLocal_24), 0);
		}
		else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_677) == uParam0->f_174)
		{
			if (!__LIB_0__::func_163(uParam0->f_174, 355471868))
			{
				if (!__LIB_0__::func_75(&(uParam0->f_623)))
				{
					if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) > 0.5f)
					{
						__LIB_1__::func_148(&(uParam0->f_623));
					}
				}
				else if (__LIB_0__::func_265(&(uParam0->f_623)) > 1f)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_174, true);
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uParam0->f_174, uParam0->f_1);
				}
			}
		}
	}
}

void func_339(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			ENTITY::SET_ENTITY_LOD_DIST(iVar1, iParam1);
		}
		iVar0++;
	}
}

void func_341(var uParam0, var uParam1, vector3 vParam2)
{
	*uParam1 = MAP::_BLIP_ADD_FOR_COORD(408396114, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, vParam2));
	MAP::_BLIP_REMOVE_MODIFIER(*uParam1, 942020339);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "CHRB_LOOT");
}

void func_342(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (__LIB_0__::func_272(iVar1, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iVar1, 10, 0, 0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iVar1, 10, 1, 0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iVar1, 10, 2, 0);
		}
		iVar0++;
	}
}

void func_343(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_600))
	{
		return;
	}
	uParam0->f_600 = __LIB_1__::func_745("CR_C_ROB", joaat("INPUT_CONTEXT_Y"), uParam0->f_1, 3, 1, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	if (BUILTIN::VDIST(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_601), Global_36) < BUILTIN::VDIST(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_604), Global_36))
	{
		func_559(uParam0->f_600, uParam0->f_601, 1);
		uParam0->f_607 = 1;
	}
	else
	{
		func_559(uParam0->f_600, uParam0->f_604, 1);
		uParam0->f_607 = 0;
	}
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_1, 1);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_1, false);
	__LIB_2__::func_450(uParam0->f_600, 1.7f, 1);
	__LIB_6__::func_697(uParam0->f_600, 0, 1);
}

void func_345(var uParam0, var uParam1, vector3 vParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(*uParam1))
	{
		MAP::SET_BLIP_COORDS(*uParam1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, vParam2));
	}
}

bool func_346(var uParam0)
{
	if (!__LIB_6__::func_702(2))
	{
		return false;
	}
	if ((FIRE::IS_EXPLOSION_IN_SPHERE(25, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 3f) || VEHICLE::_IS_VEHICLE_DOOR_BROKEN(uParam0->f_1, 0)) || VEHICLE::_IS_VEHICLE_DOOR_BROKEN(uParam0->f_1, 2))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_1, 1);
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(uParam0->f_1, 0, false);
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(uParam0->f_1, 2, false);
		uParam0->f_627 = 0;
		__LIB_6__::func_705(256);
		if (FIRE::IS_EXPLOSION_IN_SPHERE(25, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 3f))
		{
			FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 25, 1f, true, false, 1f);
			__LIB_6__::func_716(uParam0->f_1);
		}
		return true;
	}
	return false;
}

void func_347(var uParam0)
{
	__LIB_0__::func_325(&(Local_51.f_2208));
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_1.f_2))
	{
		if (!uParam0->f_613)
		{
			if (iLocal_25 != 12)
			{
				func_357(&(uParam0->f_1), &(uParam0->f_1.f_2), 0);
			}
		}
	}
}

void func_349(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_600))
	{
		switch (func_233(uParam0->f_1))
		{
			case 0:
				if (func_565(uParam0->f_1))
				{
					func_559(uParam0->f_600, 0f, 0f, 1f, 1);
					__LIB_2__::func_450(uParam0->f_600, 4f, 1);
				}
				else if (BUILTIN::VDIST(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_601), Global_36) < BUILTIN::VDIST(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_604), Global_36))
				{
					if (!uParam0->f_607)
					{
						func_559(uParam0->f_600, uParam0->f_601, 1);
						uParam0->f_607 = 1;
					}
				}
				else if (uParam0->f_607)
				{
					func_559(uParam0->f_600, uParam0->f_604, 1);
					uParam0->f_607 = 0;
				}
				break;
			case 3:
				func_559(uParam0->f_600, 0f, 0f, 0f, 1);
				__LIB_2__::func_450(uParam0->f_600, 4f, 1);
				break;
			case 1:
			case 2:
				func_559(uParam0->f_600, 0f, 0f, -2f, 1);
				break;
		}
	}
}

void func_351(var uParam0)
{
	__LIB_1__::func_281(&(uParam0->f_600), 1, 1);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_1, true);
}

int func_352(var uParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	iVar0 = uParam0->f_1;
	if (Local_51.f_2412)
	{
		if (VEHICLE::_IS_VEHICLE_DOOR_BROKEN(iVar0, 0))
		{
			sVar1 = "script@proc@robberies@coach@playerloot_parts@playerloot_left_no_door_enter";
			sVar2 = "script@proc@robberies@coach@playerloot_parts@playerloot_left_no_door_main";
			sVar3 = "script@proc@robberies@coach@playerloot_parts@playerloot_left_no_door_exit";
		}
		else
		{
			sVar1 = "script@proc@robberies@coach@playerloot_parts@playerloot_left_with_door_enter";
			if (iLocal_25 == 8)
			{
				sVar2 = "script@proc@robberies@coach@playerloot_parts@playerloot_left_with_door_open_and_close_main";
			}
			else
			{
				sVar2 = "script@proc@robberies@coach@playerloot_parts@playerloot_left_with_door_main";
			}
			sVar3 = "script@proc@robberies@coach@playerloot_parts@playerloot_left_with_door_exit";
		}
	}
	else if (VEHICLE::_IS_VEHICLE_DOOR_BROKEN(iVar0, 2))
	{
		sVar1 = "script@proc@robberies@coach@playerloot_parts@playerloot_right_no_door_enter";
		sVar2 = "script@proc@robberies@coach@playerloot_parts@playerloot_right_no_door_main";
		sVar3 = "script@proc@robberies@coach@playerloot_parts@playerloot_right_no_door_exit";
	}
	else
	{
		sVar1 = "script@proc@robberies@coach@playerloot_parts@playerloot_right_with_door_enter";
		if (iLocal_25 == 8)
		{
			sVar2 = "script@proc@robberies@coach@playerloot_parts@playerloot_right_with_door_open_and_close_main";
		}
		else
		{
			sVar2 = "script@proc@robberies@coach@playerloot_parts@playerloot_right_with_door_main";
		}
		sVar3 = "script@proc@robberies@coach@playerloot_parts@playerloot_right_with_door_exit";
	}
	switch (Local_51.f_2403)
	{
		case 0:
			if (func_169(uParam0->f_1))
			{
				if (__LIB_3__::func_419(iVar0, Global_35))
				{
					Local_51.f_2412 = 1;
				}
				Local_51.f_2403 = 1;
			}
			break;
		case 1:
			if (func_169(uParam0->f_1))
			{
				Local_51.f_2406 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar1, 0, 0, false, true);
				Local_51.f_2407 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar2, 0, 0, false, true);
				Local_51.f_2408 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar3, 0, 0, false, true);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 0);
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 1);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
				__LIB_6__::func_717(iVar0, 1);
				__LIB_6__::func_826(iVar0, 1);
				__LIB_6__::func_705(1073741824 /* Float: 2f */);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				Local_51.f_2403 = 2;
			}
			break;
		case 2:
			if ((__LIB_6__::func_805(Local_51.f_2406, "") && __LIB_6__::func_805(Local_51.f_2407, "")) && __LIB_6__::func_805(Local_51.f_2408, ""))
			{
				iLocal_20 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
				if (iLocal_25 == 10)
				{
					if (Local_51.f_2412)
					{
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_20, iVar0, -2.8327f, 3.0126f, 1.1476f, true);
						CAM::POINT_CAM_AT_ENTITY(iLocal_20, iVar0, -2.4398f, 0.0456f, 0.9413f, true);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_20, iVar0, 2.8327f, 3.0126f, 1.1476f, true);
						CAM::POINT_CAM_AT_ENTITY(iLocal_20, iVar0, 2.4398f, 0.0456f, 0.9413f, true);
					}
					CAM::SET_CAM_FOV(iLocal_20, 51.236f);
					CAM::SET_CAM_ACTIVE(iLocal_20, true);
					CAM::SHAKE_CAM(iLocal_20, "HAND_SHAKE", 0.4f);
					CAM::RENDER_SCRIPT_CAMS(true, true, 12000, true, false, 0);
				}
				else if (iLocal_25 == 8)
				{
					iLocal_21 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
					if (Local_51.f_2412)
					{
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_20, iVar0, -3.2358f, -1.4339f, 1.1788f, true);
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_21, iVar0, -4.2358f, -1.4339f, 1.1788f, true);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_20, iVar0, 3.2358f, -1.4339f, 1.1788f, true);
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_21, iVar0, 4.2358f, -1.4339f, 1.1788f, true);
					}
					CAM::POINT_CAM_AT_ENTITY(iLocal_20, iVar0, -0.4438f, -0.3888f, 1.0442f, true);
					CAM::POINT_CAM_AT_ENTITY(iLocal_21, iVar0, -0.4438f, -0.3888f, 1.0442f, true);
					CAM::SET_CAM_FOV(iLocal_20, 51.236f);
					CAM::SET_CAM_FOV(iLocal_21, 51.236f);
					CAM::SHAKE_CAM(iLocal_20, "HAND_SHAKE", 0.4f);
					CAM::SHAKE_CAM(iLocal_21, "HAND_SHAKE", 0.4f);
					CAM::SET_CAM_ACTIVE(iLocal_20, true);
					CAM::SET_CAM_ACTIVE(iLocal_21, true);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_20, iLocal_21, 18000, 1, 1);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				else
				{
					if (Local_51.f_2412)
					{
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_20, iVar0, -3.2358f, -1.4339f, 1.1788f, true);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_20, iVar0, 3.2358f, -1.4339f, 1.1788f, true);
					}
					CAM::POINT_CAM_AT_ENTITY(iLocal_20, iVar0, -0.4438f, -0.3888f, 1.0442f, true);
					CAM::SET_CAM_FOV(iLocal_20, 51.236f);
					CAM::SET_CAM_ACTIVE(iLocal_20, true);
					CAM::SHAKE_CAM(iLocal_20, "HAND_SHAKE", 0.4f);
					CAM::RENDER_SCRIPT_CAMS(true, true, 20000, true, false, 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_51.f_2406, 0f, 0f, 0f, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_51.f_2407, 0f, 0f, 0f, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_51.f_2408, 0f, 0f, 0f, 0f, 0f, 0f, 2);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_51.f_2406, iVar0, -1);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_51.f_2407, iVar0, -1);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_51.f_2408, iVar0, -1);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2406, "coach", iVar0, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2406, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2407, "coach", iVar0, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2407, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2408, "coach", iVar0, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2408, "player", Global_35, 0);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_51.f_2406, "player", "", 1f, 1, 0, 20000, -1082130432 /* Float: -1f */);
				__LIB_1__::func_148(&uLocal_17);
				Local_51.f_2403 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_51.f_2406, false))
			{
				__LIB_1__::func_148(&uLocal_17);
				Local_51.f_2403 = 4;
			}
			else if (__LIB_0__::func_265(&uLocal_17) > 7f)
			{
				ANIMSCENE::START_ANIM_SCENE(Local_51.f_2406);
				__LIB_1__::func_148(&uLocal_17);
				Local_51.f_2403 = 4;
			}
			break;
		case 4:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_51.f_2406, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2406) >= func_567(iVar0))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_51.f_2407);
				Local_51.f_2403 = 5;
			}
			break;
		case 5:
			if (iLocal_25 == 8 && !__LIB_6__::func_702(268435456))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_51.f_2407, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2407) > 0.6f)
				{
					__LIB_1__::func_148(&uLocal_17);
					__LIB_6__::func_704(1073741824 /* Float: 2f */);
					__LIB_6__::func_705(-2147483648);
					Local_51.f_2403 = 7;
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_51.f_2407, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2407) >= func_568(iVar0))
			{
				if (Local_51.f_2412)
				{
					if (!VEHICLE::_IS_VEHICLE_DOOR_BROKEN(iVar0, 0))
					{
						VEHICLE::SET_VEHICLE_DOOR_OPEN(iVar0, 0, false, true);
					}
				}
				else if (!VEHICLE::_IS_VEHICLE_DOOR_BROKEN(iVar0, 2))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iVar0, 2, false, true);
				}
				ANIMSCENE::START_ANIM_SCENE(Local_51.f_2408);
				Local_51.f_2403 = 6;
			}
			break;
		case 6:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_51.f_2408, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2408) > 0.99f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
				__LIB_6__::func_704(1073741824 /* Float: 2f */);
				__LIB_6__::func_705(-2147483648);
				Local_51.f_2403 = 7;
			}
			break;
		case 7:
			if (iLocal_25 == 8 && !__LIB_6__::func_702(268435456))
			{
				if (__LIB_0__::func_91() && __LIB_0__::func_265(&uLocal_17) > 1f)
				{
					func_570(iVar0);
					Local_51.f_2403 = 8;
					return 1;
				}
			}
			else if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_51.f_2408, false) || ANIMSCENE::_0xF94692EB9DC15D74(Local_51.f_2408, 0)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_51.f_2408))
			{
				func_570(iVar0);
				Local_51.f_2403 = 8;
				return 1;
			}
			break;
		case 8:
			return 1;
	}
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	return 0;
}

int func_354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 0;
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 2;
		case 12:
			return 1;
		case 8:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_355(int iParam0)
{
	if (iParam0 >= 8 && iParam0 <= 11)
	{
		return true;
	}
	return false;
}

void func_357(var uParam0, var uParam1, bool bParam2)
{
	if (MAP::DOES_BLIP_EXIST(*uParam1))
	{
		return;
	}
	*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(408396114, *uParam0);
	MAP::SET_BLIP_SPRITE(*uParam1, joaat("BLIP_AMBIENT_COACH"), false);
	if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("WAGON05X"))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "CR_BLIP_WAGON");
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "CR_BLIP_COACH");
	}
	if (bParam2)
	{
		MAP::_BLIP_SET_MODIFIER(*uParam1, 942020339);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(*uParam1, 942020339);
	}
}

bool func_360(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
			return true;
	}
	return false;
}

void func_361(var uParam0)
{
	if (iLocal_38 != 8)
	{
		return;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_640)))
	{
		__LIB_1__::func_148(&(uParam0->f_640));
	}
	if (__LIB_0__::func_265(&(uParam0->f_640)) < 2f)
	{
		return;
	}
	if (!PATHFIND::IS_POINT_ON_ROAD(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), uParam0->f_1))
	{
		if (!uParam0->f_629)
		{
			uParam0->f_629 = 1;
		}
	}
	else if (uParam0->f_629)
	{
		uParam0->f_629 = 0;
	}
	__LIB_1__::func_148(&(uParam0->f_640));
}

void func_362(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_272(uParam0->f_9, 3))
	{
		if (!PED::IS_PED_FLEEING(uParam0->f_9))
		{
			TASK::TASK_SMART_FLEE_PED(uParam0->f_9, Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
			PED::SET_PED_KEEP_TASK(uParam0->f_9, true);
		}
	}
	if (__LIB_0__::func_272(uParam0->f_174, 3))
	{
		if (!PED::IS_PED_FLEEING(uParam0->f_174))
		{
			TASK::TASK_SMART_FLEE_PED(uParam0->f_174, Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
			PED::SET_PED_KEEP_TASK(uParam0->f_174, true);
		}
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (__LIB_0__::func_272(uParam0->f_410[iVar0 /*22*/], 3))
		{
			if (!PED::IS_PED_FLEEING(uParam0->f_410[iVar0 /*22*/]))
			{
				TASK::TASK_SMART_FLEE_PED(uParam0->f_410[iVar0 /*22*/], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
				PED::SET_PED_KEEP_TASK(uParam0->f_410[iVar0 /*22*/], true);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_523)
	{
		if (__LIB_0__::func_272(uParam0->f_500[iVar1 /*11*/], 3))
		{
			if (!PED::IS_PED_FLEEING(uParam0->f_500[iVar1 /*11*/]))
			{
				TASK::TASK_SMART_FLEE_PED(uParam0->f_500[iVar1 /*11*/], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
				PED::SET_PED_KEEP_TASK(uParam0->f_500[iVar1 /*11*/], true);
			}
		}
		iVar1++;
	}
}

void func_363(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar0 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_1, iVar1);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, fParam1);
		}
		iVar1++;
	}
}

bool func_364(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (__LIB_0__::func_272(uParam0->f_410[iVar0 /*22*/], 3))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_410[iVar0 /*22*/], true, false) };
			if (BUILTIN::VDIST(Global_36, vVar1) < 100f || (BUILTIN::VDIST(vVar4, vVar1) < 100f && !uParam0->f_610))
			{
				if (!__LIB_0__::func_163(uParam0->f_410[iVar0 /*22*/], 518218985))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_365(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_523)
	{
		if (__LIB_0__::func_272(uParam0->f_500[iVar0 /*11*/], 3))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_500[iVar0 /*11*/], true, false) };
			if (BUILTIN::VDIST(Global_36, vVar1) < 100f || (BUILTIN::VDIST(vVar4, vVar1) < 100f && !uParam0->f_610))
			{
				if (!__LIB_0__::func_163(uParam0->f_500[iVar0 /*11*/], 518218985))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_366(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_540)
	{
		if (__LIB_0__::func_272(uParam0->f_524[iVar0 /*15*/], 3))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_524[iVar0 /*15*/], true, false) };
			if (BUILTIN::VDIST(Global_36, vVar1) < 100f || (BUILTIN::VDIST(vVar4, vVar1) < 100f && !uParam0->f_610))
			{
				if (!__LIB_0__::func_163(uParam0->f_524[iVar0 /*15*/], 518218985))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_367(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_595)
	{
		if (__LIB_0__::func_272(uParam0->f_541[iVar0 /*13*/], 3))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_541[iVar0 /*13*/], true, false) };
			if (BUILTIN::VDIST(Global_36, vVar1) < (100f * 1.5f) || (BUILTIN::VDIST(vVar4, vVar1) < (100f * 1.5f) && !uParam0->f_610))
			{
				if (!__LIB_0__::func_163(uParam0->f_541[iVar0 /*13*/], 518218985))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_368(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_1, true, false) };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_272(uParam0->f_5[iVar0 /*9*/], 3))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iVar0 /*9*/], true, false) };
			if (BUILTIN::VDIST(Global_36, vVar1) < 100f || (BUILTIN::VDIST(vVar4, vVar1) < 100f && !uParam1->f_610))
			{
				if (!__LIB_0__::func_163(uParam0->f_5[iVar0 /*9*/], 518218985))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_369(var uParam0)
{
	if (!func_15(&Local_51, 524288))
	{
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_9, Global_35, -1, 3072, 41, 0);
		func_4(&Local_51, 524288);
	}
	if (func_15(&Local_51, 16))
	{
		return false;
	}
	if (__LIB_6__::func_702(2097152))
	{
		return false;
	}
	if (iLocal_26 == 2)
	{
		return false;
	}
	if (iLocal_26 == 1)
	{
		return false;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_9, false))
	{
		return false;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0->f_9, true, false), func_421(iLocal_24)) < 100f)
	{
		return false;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_661)))
	{
		if ((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uParam0->f_9, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uParam0->f_9)) && __LIB_2__::func_215(uParam0->f_9, Global_35, 1, 20f, 0))
		{
			__LIB_1__::func_148(&(uParam0->f_661));
		}
	}
	else if (__LIB_0__::func_265(&(uParam0->f_661)) > 1f)
	{
		func_536(uParam0, Global_35);
		__LIB_0__::func_325(&(uParam0->f_9.f_5));
		func_97(&(Local_51.f_2286), iLocal_25, 10);
		func_4(&Local_51, 16);
		Local_51.f_2423 = 1;
		func_101(&Local_51);
		VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1, 10f, 1, false);
		__LIB_0__::func_37(&(uParam0->f_661));
		return true;
	}
	return false;
}

bool func_370(var uParam0)
{
	if (uParam0->f_610)
	{
		return true;
	}
	return false;
}

bool func_371()
{
	if (!__LIB_0__::func_272(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], 0) && __LIB_3__::func_578(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]))
	{
		return true;
	}
	return false;
}

bool func_372(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (!uParam0->f_25[iVar0 /*679*/].f_612)
		{
			if (!func_370(&(uParam0->f_25[iVar0 /*679*/])))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (func_574(uParam0) || func_575(uParam0))
	{
		return true;
	}
	return false;
}

bool func_373(var uParam0, float fParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0->f_25[iVar0 /*679*/].f_1, true, false), Global_36) < fParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_375(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	char* sVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	var uVar10;
	float fVar11;
	if (uParam0->f_675)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		sVar0 = func_194(iParam2);
		iVar4 = -1;
		iVar6 = 0;
		if (func_576(iParam2))
		{
			vVar1 = { func_577(iParam2) };
		}
		else if (bParam4)
		{
			iVar4 = 14;
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sVar0, Global_36, &iVar5);
			iVar6 = (iVar5 - func_578(iParam2));
			if (iVar6 < 0)
			{
				iVar6 = 0;
			}
			TASK::WAYPOINT_RECORDING_GET_COORD(sVar0, iVar6, &vVar1);
		}
		else
		{
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_25[0 /*679*/].f_1, 0f, -20f, 0f) };
		}
		vVar7 = { func_579(sVar0, vVar1, iVar4) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar7.x, vVar7.y, (vVar7.z + 2f), &uVar10, false))
		{
			vVar7.f_2 = uVar10;
		}
		fVar11 = func_580(sVar0, vVar7);
		__LIB_1__::func_572(vVar7, 200f, 0, 1, 0, 0, 0);
		__LIB_1__::func_572(vVar7, 30f, 0, 0, 0, 0, 0);
		uParam0->f_1 = VEHICLE::CREATE_VEHICLE(uParam0->f_1.f_1, vVar7, fVar11, true, true, false, false);
		if (uParam0->f_678 != -1)
		{
			VEHICLE::_0x8C6D9A399126C194(uParam0->f_1, uParam0->f_678);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_1, 1);
			uParam0->f_596 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_1);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_1, "Robberies_Coach_Target_Group", 0f);
			__LIB_14__::func_110(uParam0->f_1);
			func_479(uParam0->f_1);
			if (uParam0->f_1.f_1 == joaat("COACH2"))
			{
				if (iParam2 == 10)
				{
					VEHICLE::_0xF489F94BFEE12BB0(uParam0->f_1, joaat("COACH2_BOOT_LOOT_ITEMS_COACHROB_RSC"));
				}
				else
				{
					VEHICLE::_0xF489F94BFEE12BB0(uParam0->f_1, joaat("COACH2_BOOT_LOOT_ITEMS_COACHROB"));
				}
			}
			if (uParam0->f_627)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_1, 2);
			}
			VEHICLE::_0xD826690B5CF3BEFF(uParam0->f_1, 0.1f);
			if (uParam0->f_1.f_1 == joaat("STAGECOACH004X"))
			{
				VEHICLE::_0x850CE59DEC2028F3(uParam0->f_1, 0);
				AITRANSPORT::_0xBA8818212633500A(uParam0->f_1, 9, 1);
			}
			VEHICLE::_0x4C60C333F9CCA2B6(uParam0->f_1, 1);
			VEHICLE::_0x0794199B25E499E1(uParam0->f_1, 1);
			if (bParam4)
			{
				Global_1392388.f_5 = uParam0->f_1;
			}
		}
		return;
	}
	if (!uParam0->f_665)
	{
		func_582(uParam0, &(uParam0->f_9), iParam3, iParam2);
		if (iParam2 == 7)
		{
			PED::_0xFFA1594703ED27CA(uParam0->f_9, 5);
		}
		if (iParam2 == 8)
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_9, 23, false);
		}
		return;
	}
	if (!uParam0->f_666 && uParam0->f_174.f_74)
	{
		func_583(uParam0, &(uParam0->f_174), iParam3, iParam2);
		if (iParam2 == 7)
		{
			PED::_0xFFA1594703ED27CA(uParam0->f_174, 2);
		}
		if (iParam2 == 8)
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_174, 23, false);
		}
		return;
	}
	if (func_15(uParam1, 65536))
	{
		if (!uParam0->f_672)
		{
			func_584(uParam0, &(uParam1->f_5[uParam0->f_664 /*9*/]));
			if (__LIB_0__::func_272(uParam1->f_5[uParam0->f_664 /*9*/], 0))
			{
				uParam0->f_664++;
				if (uParam0->f_664 == 2)
				{
					uParam0->f_664 = 0;
					uParam0->f_672 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
	if (uParam0->f_409 != 0)
	{
		if (!uParam0->f_667)
		{
			func_585(uParam0, &(uParam0->f_252[uParam0->f_664 /*78*/]), iParam3);
			if (__LIB_0__::func_272(uParam0->f_252[uParam0->f_664 /*78*/], 0))
			{
				uParam0->f_664++;
				if (uParam0->f_664 == uParam0->f_409)
				{
					uParam0->f_664 = 0;
					uParam0->f_667 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
	if (uParam0->f_499 != 0)
	{
		if (!uParam0->f_671)
		{
			func_586(uParam0, &(uParam0->f_410[uParam0->f_664 /*22*/]), uParam0->f_664);
			if (__LIB_0__::func_272(uParam0->f_410[uParam0->f_664 /*22*/].f_7, 0))
			{
				uParam0->f_664++;
				if (uParam0->f_664 == uParam0->f_499)
				{
					uParam0->f_664 = 0;
					uParam0->f_671 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
		if (!uParam0->f_670)
		{
			func_587(uParam0, &(uParam0->f_410[uParam0->f_664 /*22*/]), uParam1, iParam3, uParam0->f_664, iParam2);
			if (__LIB_0__::func_272(uParam0->f_410[uParam0->f_664 /*22*/], 0))
			{
				if (uParam0->f_664 == 0)
				{
					if (__LIB_2__::func_117(128))
					{
						WEAPON::_GIVE_WEAPON_TO_PED_2(uParam0->f_410[uParam0->f_664 /*22*/], joaat("WEAPON_MELEE_LANTERN"), 1, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
				uParam0->f_664++;
				if (uParam0->f_664 == uParam0->f_499)
				{
					uParam0->f_664 = 0;
					uParam0->f_670 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
	if (uParam0->f_523 != 0)
	{
		if (!uParam0->f_668)
		{
			func_589(uParam0, &(uParam0->f_500[uParam0->f_664 /*11*/]), iParam3);
			if (__LIB_0__::func_272(uParam0->f_500[uParam0->f_664 /*11*/], 0))
			{
				uParam0->f_664++;
				if (uParam0->f_664 == uParam0->f_523)
				{
					uParam0->f_664 = 0;
					uParam0->f_668 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
	if (uParam0->f_540 != 0)
	{
		if (!uParam0->f_669)
		{
			func_590(uParam0, &(uParam0->f_524[uParam0->f_664 /*15*/]), iParam3);
			if (__LIB_0__::func_272(uParam0->f_524[uParam0->f_664 /*15*/], 0))
			{
				uParam0->f_664++;
				if (uParam0->f_664 == uParam0->f_540)
				{
					uParam0->f_664 = 0;
					uParam0->f_669 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
	uParam0->f_675 = 1;
}

int func_376(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_25[iVar0 /*679*/].f_1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_25[iVar0 /*679*/].f_1, false, false))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

float func_377(var uParam0, var uParam1)
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(uParam0->f_1, *uParam1, 1);
	return fVar0;
}

bool func_378(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	vector3 vVar11;
	if (__LIB_6__::func_702(512))
	{
		if (__LIB_6__::func_702(32768))
		{
			uParam0->f_609 = 1;
			return true;
		}
		else
		{
			return false;
		}
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, vVar0, 50f))
	{
		func_4(&Local_51, 536870912);
		uParam0->f_609 = 1;
		return true;
	}
	if (__LIB_6__::func_702(32768))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (uParam0->f_609)
	{
		return true;
	}
	if (__LIB_2__::func_875(Global_35, uParam0->f_9, &(Local_51.f_2069)))
	{
		func_4(&Local_51, 536870912);
		uParam0->f_609 = 1;
		return true;
	}
	if (func_592(uParam0))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (func_593())
	{
		if (func_594(&(uParam0->f_9)))
		{
			bVar3 = true;
		}
		if (!bVar3)
		{
			if (Local_51.f_2266 == 1)
			{
				if (func_595(&(uParam0->f_174)))
				{
					bVar3 = true;
				}
			}
		}
		if (!bVar3)
		{
			if (func_596(uParam0, Local_51.f_2389))
			{
				bVar3 = true;
			}
			Local_51.f_2389++;
			if (Local_51.f_2389 >= uParam0->f_499)
			{
				Local_51.f_2389 = 0;
			}
		}
	}
	if (bVar3)
	{
		if (!Global_1392388.f_8)
		{
			Global_1392388.f_8 = 1;
		}
	}
	else if (Global_1392388.f_8)
	{
		Global_1392388.f_8 = 0;
	}
	if (uParam0->f_9.f_164 == 9 || uParam0->f_9.f_164 == 11)
	{
		bVar4 = true;
	}
	if (func_15(&Local_51, 65536))
	{
		if (__LIB_0__::func_272(Global_1392388.f_3, 0))
		{
			if (__LIB_6__::func_702(8))
			{
				bVar4 = true;
			}
			if (__LIB_0__::func_48(uParam0->f_1, Global_1392388.f_3, 25f, 1))
			{
				if (func_597(uParam0))
				{
					uParam0->f_609 = 1;
				}
			}
		}
		else if (__LIB_0__::func_266(uParam0->f_9, Global_36, 15f, 1, 1) && bVar3)
		{
			uParam0->f_609 = 1;
			return true;
		}
	}
	if ((bVar3 && !bVar4) || __LIB_6__::func_702(16384))
	{
		if (func_598(&(uParam0->f_9), &Local_51))
		{
			if (!func_15(&Local_51, 32))
			{
				if (func_599(uParam0, &Local_51, iLocal_25))
				{
					func_4(&Local_51, 16);
				}
			}
			func_97(&(Local_51.f_2286), iLocal_25, 2);
			Local_51.f_2415 = 1;
			uParam0->f_609 = 1;
			return true;
		}
		else if (func_600(&(uParam0->f_174), &Local_51))
		{
			if (!func_15(&Local_51, 32))
			{
				if (func_599(uParam0, &Local_51, iLocal_25))
				{
					func_4(&Local_51, 16);
				}
			}
			uParam0->f_609 = 1;
			return true;
		}
		else if (func_601(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, 11f, 0f), 10f) && !func_15(&Local_51, 65536))
		{
			if (!func_15(&Local_51, 32))
			{
				if (func_599(uParam0, &Local_51, iLocal_25))
				{
					func_4(&Local_51, 16);
				}
			}
			uParam0->f_609 = 1;
			return true;
		}
		else if (func_602(&Local_51, iLocal_25))
		{
			if (!func_15(&Local_51, 32))
			{
				if (func_599(uParam0, &Local_51, iLocal_25))
				{
					func_4(&Local_51, 16);
				}
			}
			uParam0->f_609 = 1;
			return true;
		}
	}
	if (bVar3 && !bVar4)
	{
		if (((__LIB_0__::func_266(uParam0->f_9, Global_36, 25f, 1, 1) && __LIB_3__::func_425(&uVar5)) && __LIB_6__::func_803()) && iLocal_25 == 2)
		{
			func_97(&(Local_51.f_2286), iLocal_25, 49);
			uParam0->f_609 = 1;
			return true;
		}
	}
	if (func_603(uParam0))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (uParam0->f_499 > 0)
	{
		if (iLocal_43 != 1)
		{
			if (func_604(uParam0, &Local_51))
			{
				uParam0->f_609 = 1;
				return true;
			}
		}
	}
	if (uParam0->f_523 > 0)
	{
		if (iLocal_43 != 1)
		{
			if (func_605(uParam0, &Local_51))
			{
				uParam0->f_609 = 1;
				return true;
			}
		}
	}
	if (__LIB_6__::func_702(128))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (func_606(uParam0, bVar3))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (((func_607(uParam0, bVar3) && iLocal_36 == 0) && !Local_51.f_2395) && !AUDIO::_0xFE5C6177064BD390(1))
	{
		if (func_97(&(Local_51.f_2286), iLocal_25, 48))
		{
			Local_51.f_2395 = 1;
		}
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_9, Global_35, 1, 1))
	{
		func_4(&Local_51, 536870912);
		uParam0->f_609 = 1;
		return true;
	}
	if (((((iLocal_25 != 12 && bVar3) && (iLocal_26 == 0 || iLocal_26 == 2)) && uParam0->f_1.f_1 == joaat("COACH2")) && BUILTIN::VDIST(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_601)) < 1.4f) && !func_15(&Local_51, 16777216))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, uParam0->f_1, true))
	{
		iVar6 = PED::_GET_SEAT_PED_IS_USING(Global_35);
		iVar7 = iVar6;
		if ((((((bVar3 || iVar6 == uParam0->f_676) || iVar6 == uParam0->f_677) || iVar7 == 5) || iVar7 == 6) || iVar7 == 7) || iVar7 == 8)
		{
			uParam0->f_609 = 1;
			return true;
		}
	}
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, -2.1f, 0.8f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, 2.1f, 4f), 1.5f, false, true, 0))
		{
			uParam0->f_609 = 1;
			return true;
		}
	}
	vVar8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, 4f, 0.4f) };
	if (MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar8 - Vector(0f, 3f, 3f), vVar8 + Vector(2f, 3f, 3f), joaat("WEAPON_THROWN_DYNAMITE"), true))
	{
		func_608(&(Local_51.f_2286), iLocal_25);
		uParam0->f_609 = 1;
		return true;
	}
	if (func_609(iLocal_25))
	{
		vVar11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, 14f, 0f) };
		if (MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar11 - Vector(5f, 7f, 7f), vVar11 + Vector(5f, 7f, 7f), joaat("WEAPON_THROWN_DYNAMITE"), true))
		{
			func_608(&(Local_51.f_2286), iLocal_25);
			uParam0->f_609 = 1;
			return true;
		}
	}
	if (func_610())
	{
		if (!__LIB_0__::func_272(uParam0->f_9, 1))
		{
			uParam0->f_609 = 1;
			return true;
		}
		else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 30f, false))
		{
			uParam0->f_609 = 1;
			return true;
		}
	}
	if (MISC::IS_BULLET_IN_AREA(vVar0, func_611(iLocal_25), true) || MISC::HAS_BULLET_IMPACTED_IN_AREA(vVar0, func_611(iLocal_25), true, true))
	{
		func_4(&Local_51, 536870912);
		uParam0->f_609 = 1;
		return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_1, Global_35, 1, 0))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (__LIB_6__::func_692(uParam0->f_1))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (func_613(uParam0))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (bVar3 && PED::IS_PED_SHOOTING(Global_35))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (((((bVar3 && __LIB_6__::func_803()) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), Global_36) < 15f) && __LIB_1__::func_374(Global_35, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 0.5f)) && (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))) && ENTITY::GET_ENTITY_SPEED(Global_35) > 15f)
	{
		uParam0->f_609 = 1;
		return true;
	}
	return false;
}

void func_379()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_9, 3))
		{
			TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[iVar0 /*679*/].f_9, Global_35, -1, 3120, 51, 1);
		}
		if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_174, 3))
		{
			TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[iVar0 /*679*/].f_174, Global_35, -1, 2096, 51, 1);
		}
		iVar1 = 0;
		while (iVar1 < Local_51.f_25[iVar0 /*679*/].f_499)
		{
			if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_410[iVar1 /*22*/], 3))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[iVar0 /*679*/].f_410[iVar1 /*22*/], Global_35, -1, 2096, 51, 1);
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 < Local_51.f_25[iVar0 /*679*/].f_523)
		{
			if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_500[iVar2 /*11*/], 3))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[iVar0 /*679*/].f_500[iVar2 /*11*/], Global_35, -1, 2096, 51, 1);
			}
			iVar2++;
		}
		iVar0++;
	}
}

int func_380(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (__LIB_2__::func_1(uParam0->f_25[iVar0 /*679*/].f_9, 0, 1))
		{
			return uParam0->f_25[iVar0 /*679*/].f_9;
		}
		iVar0++;
	}
	return 0;
}

void func_381(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vVar0 = { func_244(iParam0, iParam1) };
	if (__LIB_10__::func_456(&vVar0))
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(&vVar0, bParam2, false);
	}
}

bool func_382()
{
	if (iLocal_25 == 9)
	{
		if (!__LIB_6__::func_702(8))
		{
			return false;
		}
	}
	if (func_111(iLocal_25, 49))
	{
		return false;
	}
	if (func_614(iLocal_25))
	{
		return false;
	}
	if (iLocal_2544 == 1)
	{
		return false;
	}
	return true;
}

void func_383()
{
	func_4(&Local_51, 2);
	func_4(&Local_51, 64);
	func_4(&Local_51, 256);
	__LIB_6__::func_705(1);
	__LIB_1__::func_148(&(Local_51.f_2158));
	if (func_15(&Local_51, 65536))
	{
		__LIB_0__::func_325(&(Local_51.f_25[0 /*679*/].f_1.f_2));
		__LIB_9__::func_739(2);
		return;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("PLAYER"), iLocal_46);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_46, joaat("PLAYER"));
	if (__LIB_1__::func_149(1) > 0 || __LIB_6__::func_702(4))
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_COMPANION_GROUP"), iLocal_46);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_46, joaat("REL_COMPANION_GROUP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_GANG_DUTCHS"), iLocal_46);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_46, joaat("REL_GANG_DUTCHS"));
	}
	if (!func_15(&Local_51, 16))
	{
		if (!func_15(&Local_51, 32))
		{
			if (!__LIB_6__::func_702(524288))
			{
				if (func_15(&Local_51, 262144))
				{
					func_113(&Local_51, 262144);
				}
			}
			func_173();
		}
		else
		{
			func_616(&Local_51);
			func_160(&Local_51, 0);
		}
	}
	switch (iLocal_26)
	{
		case 0:
			if (func_15(&Local_51, 16))
			{
				func_617(&Local_51);
				func_618(&Local_51);
			}
			else
			{
				func_160(&Local_51, 1);
				func_159(&Local_51, iLocal_25, 1);
				func_619(&Local_51);
				func_4(&Local_51, 8);
			}
			break;
		case 1:
			if (func_15(&Local_51, 16))
			{
				func_617(&Local_51);
				func_618(&Local_51);
			}
			else
			{
				func_160(&Local_51, 1);
				func_159(&Local_51, iLocal_25, 1);
				func_619(&Local_51);
				func_4(&Local_51, 8);
			}
			break;
		case 2:
			func_160(&Local_51, 1);
			func_159(&Local_51, iLocal_25, 1);
			func_619(&Local_51);
			func_4(&Local_51, 8);
			break;
		case 3:
			if (func_15(&Local_51, 16))
			{
				func_617(&Local_51);
				func_618(&Local_51);
			}
			else
			{
				func_160(&Local_51, 1);
				func_159(&Local_51, iLocal_25, 1);
				func_619(&Local_51);
				func_4(&Local_51, 8);
			}
			break;
	}
}

bool func_384(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (!func_270(uParam0, iVar0) && !uParam0->f_25[iVar0 /*679*/].f_612)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_385(var uParam0, int iParam1, bool bParam2)
{
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		PED::_0x802092B07E3B1EEA(*uParam0, Global_36, 3);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 2, bParam2);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, bParam2);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, !bParam2);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, !bParam2);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
	func_163(uParam0, &(uParam0->f_5), 1, 0, 0);
	if (!bParam2)
	{
		PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
		PED::_0x1854217C640B39EC(*uParam0, iParam1, 0f, 0f, 0f, 30f, 0, 0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 246, true);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(*uParam0, true);
		PED::SET_PED_SHOOT_RATE(*uParam0, 100);
		uParam0->f_72 = 1;
	}
	else
	{
		PED::SET_PED_SHOOT_RATE(*uParam0, 90);
	}
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 100f, 0, 0);
}

bool func_386(var uParam0)
{
	int iVar0;
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_676);
	if (__LIB_0__::func_272(iVar0, 0))
	{
		if (iVar0 != Global_35 && !PED::IS_PED_BEING_JACKED(iVar0))
		{
			return true;
		}
	}
	if ((__LIB_0__::func_272(uParam0->f_174, 0) && PED::IS_PED_IN_VEHICLE(uParam0->f_174, uParam0->f_1, true)) && __LIB_0__::func_75(&(uParam0->f_623)))
	{
		return true;
	}
	return false;
}

bool func_387()
{
	if (Global_40.f_9146.f_4[10] == 2)
	{
		return false;
	}
	return true;
}

bool func_391(int iParam0)
{
	int iVar0;
	if (bLocal_2530)
	{
		if (__LIB_0__::func_265(&uLocal_2533) > 4f && __LIB_0__::func_665(iParam0, PLAYER::PLAYER_PED_ID(), 1, 1) < 30f)
		{
			return true;
		}
		return false;
	}
	if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1, 1) && __LIB_0__::func_665(iParam0, PLAYER::PLAYER_PED_ID(), 1, 1) < 30f) && !FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		bLocal_2530 = true;
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		PED::SET_PED_RAGDOLL_FORCE_FALL(iParam0);
		PED::_0xAAB050DA48B57978(iParam0, "TaskIntimidated_OnKnees", Global_35, -1, 4);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PAUSE(0, 1000);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		__LIB_1__::func_148(&uLocal_2533);
	}
	return false;
}

void func_392()
{
	iLocal_2546 = 0;
}

void func_393(int iParam0)
{
	iLocal_2546 = 1;
	bLocal_2547 = iParam0;
}

bool func_394(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bVar0 = false;
	bVar1 = false;
	*iParam1 = 0;
	if (__LIB_0__::func_139(Local_51.f_2273))
	{
		bVar0 = __LIB_1__::func_732(Local_51.f_2273, 1);
		bVar1 = PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"));
		if (bVar0 || bVar1)
		{
			if (func_97(&(Local_51.f_2286), iLocal_25, iParam0))
			{
				if (bVar0)
				{
					*iParam1 = 1;
				}
				else if (bVar1)
				{
					*iParam1 = 2;
				}
				return true;
			}
		}
	}
	return false;
}

int func_396(int iParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_244(iParam0, iParam1) };
	if (__LIB_10__::func_456(&vVar0))
	{
		return AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(&vVar0);
	}
	return -1;
}

bool func_400(var uParam0)
{
	int iVar0;
	char* sVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	float fVar10;
	vector3 vVar11;
	bool bVar14;
	iVar0 = uParam0->f_1;
	sVar1 = "script@proc@robberies@coach@playerhiddencompartment";
	fVar9 = 0f;
	vVar11 = { 0f, 0f, 0f };
	bVar14 = false;
	switch (Local_51.f_2403)
	{
		case 0:
			Local_51.f_2404 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar1, 0, 0, false, true);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
			PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 0);
			PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 1);
			TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
			__LIB_6__::func_717(iVar0, 1);
			__LIB_6__::func_826(iVar0, 1);
			__LIB_6__::func_705(1073741824 /* Float: 2f */);
			STREAMING::REQUEST_MODEL(joaat("S_LOOTABLEMONEYBOX"), false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			if (__LIB_3__::func_419(iVar0, Global_35))
			{
				Local_51.f_2412 = 1;
			}
			Local_51.f_2403 = 1;
			break;
		case 1:
			if (__LIB_6__::func_805(Local_51.f_2404, "PBL_ACTION") && STREAMING::HAS_MODEL_LOADED(joaat("S_LOOTABLEMONEYBOX")))
			{
				vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar2, &fVar8, false))
				{
					if (CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH() > -10f && !CAM::_0xA24C1D341C6E0D53(0, 0, 0))
					{
						bVar14 = true;
					}
					if (bVar14)
					{
						iLocal_22 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
						iLocal_23 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
						if (Local_51.f_2412 == 1)
						{
							CAM::ATTACH_CAM_TO_ENTITY(iLocal_22, iVar0, -1.8384f, -0.6933f, 1.5872f, true);
							CAM::POINT_CAM_AT_ENTITY(iLocal_22, iVar0, -0.3943f, 0.3396f, -0.8311f, true);
							CAM::ATTACH_CAM_TO_ENTITY(iLocal_23, iVar0, -2.6206f, -0.8484f, 1.9162f, true);
							CAM::POINT_CAM_AT_ENTITY(iLocal_23, iVar0, -1.0165f, 0.2752f, -0.3563f, true);
						}
						else
						{
							CAM::ATTACH_CAM_TO_ENTITY(iLocal_22, iVar0, 1.4484f, 1.0164f, 1.8225f, true);
							CAM::POINT_CAM_AT_ENTITY(iLocal_22, iVar0, 0.5546f, -0.2186f, -0.7613f, true);
							CAM::ATTACH_CAM_TO_ENTITY(iLocal_23, iVar0, 2.5058f, 1.7933f, 1.7101f, true);
							CAM::POINT_CAM_AT_ENTITY(iLocal_23, iVar0, 1.151f, -0.094f, -0.1878f, true);
						}
						CAM::SET_CAM_FOV(iLocal_22, 51.282f);
						CAM::SET_CAM_FOV(iLocal_23, 51.282f);
						CAM::SET_CAM_ACTIVE(iLocal_22, true);
						CAM::SET_CAM_ACTIVE(iLocal_23, true);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_23, iLocal_22, 7000, 1, 1);
						CAM::SHAKE_CAM(iLocal_22, "HAND_SHAKE", 0.4f);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					}
					fVar10 = (fVar8 - vVar2.z);
					if (!__LIB_3__::func_419(iVar0, Global_35))
					{
						vVar11.f_2 = (vVar11.z - 180f);
						fVar9 = (fVar9 + 0.4f);
					}
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_51.f_2404, 0f, fVar9, fVar10, vVar11, 2);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_51.f_2404, iVar0, -1);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2404, "player", Global_35, 0);
					vVar5 = { vVar2 };
					vVar5.f_2 = (vVar5.z - 10f);
					Local_51.f_2402 = OBJECT::CREATE_OBJECT(joaat("S_LOOTABLEMONEYBOX"), vVar5, true, true, false, false, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_51.f_2402, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_51.f_2404, "MONEYBOX", Local_51.f_2402, 0);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_51.f_2402, iVar0, false);
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_51.f_2404, "player", "PBL_ACTION", 1f, 1, 0, 20000, -1082130432 /* Float: -1f */);
					__LIB_1__::func_148(&uLocal_17);
					Local_51.f_2403 = 2;
				}
			}
			break;
		case 2:
			CAM::_0x632BE8D84846FA56();
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_51.f_2404, false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2404) >= 0.1f)
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_51.f_2402, true);
					Local_51.f_2403 = 3;
				}
			}
			if (__LIB_0__::func_265(&uLocal_17) > 20f)
			{
				func_570(iVar0);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				Local_51.f_2403 = 5;
				return true;
			}
			break;
		case 3:
			CAM::_0x632BE8D84846FA56();
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_51.f_2404, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_51.f_2404) >= 0.99f)
			{
				func_628();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				Local_51.f_2403 = 6;
				Local_51.f_2405 = 1;
				if (CAM::DOES_CAM_EXIST(iLocal_22) || CAM::DOES_CAM_EXIST(iLocal_23))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_22))
				{
					CAM::DESTROY_CAM(iLocal_22, false);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_23))
				{
					CAM::DESTROY_CAM(iLocal_23, false);
				}
			}
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_51.f_2402, -1) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_51.f_2402) < 0.05f)
			{
				func_628();
			}
			break;
		case 6:
			if (ENTITY::_0x9587913B9E772D29(Local_51.f_2402, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_51.f_2402, true);
				Local_51.f_2403 = 4;
			}
			break;
		case 4:
			if (func_629())
			{
				__LIB_0__::func_15(__LIB_0__::func_358(joaat("AMBIENT_COACH_ROBBED")), 1);
				func_570(iVar0);
				Local_51.f_2403 = 5;
				return true;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_401(int iParam0)
{
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return;
	}
	switch (iLocal_40)
	{
		case 0:
			if (!__LIB_0__::func_270())
			{
				if (!AUDIO::_0xFE5C6177064BD390(1))
				{
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36) < 15f)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
						{
							if (func_97(&(Local_51.f_2286), iLocal_25, 59))
							{
								__LIB_1__::func_148(&(Local_51.f_2140));
								iLocal_40 = 1;
							}
						}
					}
				}
			}
			break;
		case 1:
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36) < 15f)
				{
					if (__LIB_0__::func_265(&(Local_51.f_2140)) > 10f)
					{
						if (func_97(&(Local_51.f_2286), iLocal_25, 18))
						{
							__LIB_1__::func_148(&(Local_51.f_2140));
							iLocal_40 = 2;
						}
					}
				}
			}
			break;
		case 2:
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36) < 15f)
				{
					if (__LIB_0__::func_265(&(Local_51.f_2140)) > 10f)
					{
						if (func_97(&(Local_51.f_2286), iLocal_25, 17))
						{
							__LIB_0__::func_37(&(Local_51.f_2140));
							iLocal_40 = 3;
						}
					}
				}
			}
			break;
		case 3:
			if (Local_51.f_2271 && PED::_0x753B15AD0FD6F3E3(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]) == 0)
			{
				if (!__LIB_0__::func_75(&(Local_51.f_2164)))
				{
					__LIB_1__::func_148(&(Local_51.f_2164));
				}
				else if (__LIB_0__::func_265(&(Local_51.f_2164)) > 3f)
				{
					if (!AUDIO::_0xFE5C6177064BD390(1))
					{
						if (!PED::_IS_PED_HOGTIED(Local_51.f_25[0 /*679*/].f_252[0 /*78*/]))
						{
							if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36) < 5f)
							{
								if (func_97(&(Local_51.f_2286), iLocal_25, 64))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], Global_35, -1, -1f, -1f, -1f);
									__LIB_0__::func_37(&(Local_51.f_2164));
									iLocal_40 = 4;
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], Global_35, 200f, -1, 0, 3f, 0);
								iLocal_40 = 12;
							}
						}
					}
				}
			}
			break;
		case 4:
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 22))
				{
					TASK::TASK_SMART_FLEE_PED(Local_51.f_25[0 /*679*/].f_252[0 /*78*/], Global_35, 200f, -1, 0, 3f, 0);
					iLocal_40 = 12;
				}
			}
			break;
	}
}

bool func_402()
{
	return iLocal_2546;
}

int func_413(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_413(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_6__::func_701(iParam0, iParam1);
	return 1;
}

void func_417(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_666(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_666(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_666(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_666(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_666(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_666(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_666(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_666(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_666(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_666(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_666(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_666(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_666(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_668();
						func_669(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_666(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_417(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_417(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_417(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_666(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @4027; //curOff = 3661
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_1__::func_146(89200);
						__LIB_1__::func_146(2300);
						__LIB_1__::func_146(2300);
						Jump @4027; //curOff = 3703
						__LIB_0__::func_887();
						Jump @4027; //curOff = 3710
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
						Jump @4027; //curOff = 3962
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_1__::func_146(-6000);
						}
						Jump @4027; //curOff = 3990
						__LIB_1__::func_146(23400);
						__LIB_1__::func_146(1900);
						__LIB_1__::func_146(-15000);
						Jump @4027; //curOff = 4014
						__LIB_1__::func_146(-5500);
						Jump @5141; //curOff = 4027
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
						Jump @5141; //curOff = 5079
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
						__LIB_0__::func_894(iParam0);
						func_706();
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
											func_666(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
bool func_418(int iParam0)
{
	if (__LIB_0__::func_272(iParam0, 1))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_421(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1398.749f, -1413.446f, 78.6417f;
		case 3:
			return 1328.9f, -1239.07f, 76.68f;
		case 7:
			return 1347.372f, -1151.021f, 80.9201f;
		case 5:
			return 1347.372f, -1151.021f, 80.9201f;
		case 6:
			return 2203.12f, -990.57f, 44.04f;
		case 8:
			return 0f, 0f, 0f;
		case 9:
			return 0f, 0f, 0f;
		case 10:
			return 1385.43f, -1319.86f, 76.28f;
		case 0:
			return -1103.517f, -561.7969f, 81.611f;
		case 1:
			return -1383.689f, -217.6679f, 99.6452f;
		case 2:
			return -1838.549f, -436.2846f, 158.5897f;
		case 11:
			return 2066.359f, -417.1617f, 43.8513f;
	}
	return 0f, 0f, 0f;
}

float func_471(int iParam0)
{
	if (iParam0 == 10)
	{
		return 33000f;
	}
	return 0f;
}

void func_472(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (__LIB_2__::func_1(uParam0->f_410[iVar0 /*22*/], 0, 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(uParam0->f_410[iVar0 /*22*/], true))
				{
					func_742(uParam0->f_410[iVar0 /*22*/], func_194(iParam1), uParam0->f_410[iVar0 /*22*/].f_11, bParam2);
				}
			}
		}
		iVar0++;
	}
}

void func_473(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4)
{
	if (__LIB_6__::func_702(524288))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || !__LIB_0__::func_272(iParam0, 1))
	{
		return;
	}
	TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iParam0, iParam1, sParam2, iParam4, 0, 24, -1, fParam3, 0, 1073741824 /* Float: 2f */, 0);
	TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1, fParam3);
}

void func_475(struct<6> Param0, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	bool bVar27;
	int iVar28;
	vVar3 = { -2.5f, 8f, 0.5f };
	vVar6 = { 2.5f, 8f, 0.5f };
	vVar9 = { -2.5f, -8f, 0.5f };
	vVar12 = { 2.5f, -8f, 0.5f };
	vVar15 = { -1.6f, 8f, 0.5f };
	vVar18 = { 1.6f, 8f, 0.5f };
	vVar21 = { -1.6f, -8f, 0.5f };
	vVar24 = { 1.6f, -8f, 0.5f };
	bVar27 = false;
	if (((((iParam6 == 5 || iParam6 == 11) || iParam6 == 0) || iParam6 == 1) || iParam6 == 2) || iParam6 == 6)
	{
		bVar27 = true;
	}
	if (iParam6 == 11)
	{
		vVar3 = { -2.5f, 10f, 0.5f };
		vVar6 = { 2.5f, 10f, 0.5f };
	}
	switch (Param0)
	{
		case 0:
			uParam7->f_2266 = 1;
			uParam7->f_25[0 /*679*/].f_8 = 4;
			uParam7->f_25[0 /*679*/].f_1.f_1 = joaat("COACH2");
			uParam7->f_25[0 /*679*/].f_409 = 0;
			if (Param0.f_1 == 2)
			{
				uParam7->f_25[0 /*679*/].f_598 = __LIB_1__::func_760(joaat("REWARD_COACHROB_LARGE"), 0, -1);
			}
			else
			{
				uParam7->f_25[0 /*679*/].f_598 = __LIB_1__::func_760(joaat("REWARD_COACHROB_MEDIUM"), 0, -1);
			}
			uParam7->f_25[0 /*679*/].f_174.f_74 = 1;
			if (func_15(uParam7, 65536))
			{
				uParam7->f_25[0 /*679*/].f_499 = 0;
			}
			else
			{
				if (__LIB_1__::func_200(37))
				{
					uParam7->f_25[0 /*679*/].f_523 = 0;
				}
				else if (iParam6 == 6 || iParam6 == 7)
				{
					uParam7->f_25[0 /*679*/].f_523 = 2;
				}
				else
				{
					uParam7->f_25[0 /*679*/].f_523 = 2;
				}
				if (Param0.f_1 == 0)
				{
					uParam7->f_25[0 /*679*/].f_499 = 0;
				}
				else if (Param0.f_1 == 1)
				{
					uParam7->f_25[0 /*679*/].f_499 = 2;
				}
				else
				{
					uParam7->f_25[0 /*679*/].f_499 = 4;
				}
			}
			break;
		case 1:
			uParam7->f_2266 = 1;
			uParam7->f_25[0 /*679*/].f_8 = 2;
			uParam7->f_25[0 /*679*/].f_1.f_1 = joaat("COACH5");
			uParam7->f_25[0 /*679*/].f_598 = __LIB_1__::func_760(joaat("REWARD_SMALL"), 0, -1);
			uParam7->f_25[0 /*679*/].f_409 = 1;
			uParam7->f_25[0 /*679*/].f_252[0 /*78*/].f_4 = 4;
			uParam7->f_25[0 /*679*/].f_174.f_74 = 0;
			uParam7->f_25[1 /*679*/].f_523 = 0;
			if (Param0.f_1 == 0)
			{
				uParam7->f_25[0 /*679*/].f_499 = 0;
			}
			else if (Param0.f_1 == 1)
			{
				uParam7->f_25[0 /*679*/].f_499 = 2;
			}
			else
			{
				uParam7->f_25[0 /*679*/].f_499 = 4;
			}
			break;
		case 2:
			uParam7->f_2266 = 2;
			uParam7->f_25[0 /*679*/].f_8 = 4;
			uParam7->f_25[0 /*679*/].f_1.f_1 = joaat("COACH2");
			uParam7->f_25[0 /*679*/].f_598 = __LIB_1__::func_760(joaat("REWARD_COACHROB_MEDIUM"), 0, -1);
			uParam7->f_25[0 /*679*/].f_499 = 2;
			uParam7->f_25[0 /*679*/].f_174.f_74 = 1;
			uParam7->f_25[0 /*679*/].f_523 = 1;
			uParam7->f_25[0 /*679*/].f_409 = 0;
			uParam7->f_25[1 /*679*/].f_8 = 4;
			uParam7->f_25[1 /*679*/].f_1.f_1 = joaat("COACH2");
			uParam7->f_25[1 /*679*/].f_598 = __LIB_1__::func_760(joaat("REWARD_COACHROB_MEDIUM"), 0, -1);
			uParam7->f_25[1 /*679*/].f_499 = 2;
			uParam7->f_25[1 /*679*/].f_174.f_74 = 1;
			uParam7->f_25[1 /*679*/].f_523 = 1;
			uParam7->f_25[1 /*679*/].f_409 = 0;
			break;
		case 3:
			uParam7->f_2266 = 1;
			uParam7->f_25[0 /*679*/].f_409 = 0;
			uParam7->f_25[0 /*679*/].f_8 = 2;
			if (!func_15(uParam7, 65536))
			{
				uParam7->f_25[0 /*679*/].f_1.f_1 = func_744(Param0);
			}
			else
			{
				uParam7->f_25[0 /*679*/].f_1.f_1 = joaat("COACH2");
			}
			uParam7->f_25[0 /*679*/].f_598 = __LIB_1__::func_760(joaat("REWARD_COACHROB_MEDIUM"), 0, -1);
			uParam7->f_25[0 /*679*/].f_174.f_74 = 1;
			if (func_15(uParam7, 65536))
			{
				uParam7->f_25[0 /*679*/].f_499 = 0;
			}
			else if (Param0.f_1 == 0)
			{
				uParam7->f_25[0 /*679*/].f_499 = 0;
			}
			else if (Param0.f_1 == 1)
			{
				uParam7->f_25[0 /*679*/].f_499 = 2;
			}
			else
			{
				uParam7->f_25[0 /*679*/].f_499 = 4;
			}
			switch (iParam6)
			{
				case 3:
					uParam7->f_2210 = { 1411.066f, 268.8441f, 88.5357f };
					break;
				case 11:
					uParam7->f_2210 = { 2821.865f, -1051.164f, 43.1327f };
					break;
			}
			break;
	}
	switch (iParam6)
	{
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 11:
			uParam7->f_25[0 /*679*/].f_9.f_1 = joaat("A_M_M_SCLROUGHTRAVELLERS_01");
			if (uParam7->f_2266 > 1)
			{
				uParam7->f_25[1 /*679*/].f_9.f_1 = joaat("A_M_M_SCLROUGHTRAVELLERS_01");
			}
			if (uParam7->f_25[0 /*679*/].f_174.f_74)
			{
				uParam7->f_25[0 /*679*/].f_174.f_1 = joaat("A_M_M_SCLROUGHTRAVELLERS_01");
			}
			if (uParam7->f_2266 > 1)
			{
				if (uParam7->f_25[1 /*679*/].f_174.f_74)
				{
					uParam7->f_25[1 /*679*/].f_174.f_1 = joaat("A_M_M_SCLROUGHTRAVELLERS_01");
				}
			}
			iVar0 = 0;
			while (iVar0 < uParam7->f_25[0 /*679*/].f_499)
			{
				uParam7->f_25[0 /*679*/].f_410[iVar0 /*22*/].f_1 = joaat("A_M_M_SCLROUGHTRAVELLERS_01");
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < uParam7->f_25[0 /*679*/].f_523)
			{
				uParam7->f_25[0 /*679*/].f_500[iVar1 /*11*/].f_1 = joaat("A_M_M_SCLROUGHTRAVELLERS_01");
				iVar1++;
			}
			if (uParam7->f_2266 > 1)
			{
				iVar0 = 0;
				while (iVar0 < uParam7->f_25[1 /*679*/].f_499)
				{
					uParam7->f_25[1 /*679*/].f_410[iVar0 /*22*/].f_1 = joaat("A_M_M_SCLROUGHTRAVELLERS_01");
					iVar0++;
				}
				iVar1 = 0;
				while (iVar1 < uParam7->f_25[1 /*679*/].f_523)
				{
					uParam7->f_25[1 /*679*/].f_500[iVar1 /*11*/].f_1 = joaat("A_M_M_SCLROUGHTRAVELLERS_01");
					iVar1++;
				}
			}
			if (uParam7->f_25[0 /*679*/].f_409 > 0)
			{
				uParam7->f_25[0 /*679*/].f_252[0 /*78*/].f_1 = joaat("A_M_M_SCLFANCYTRAVELLERS_01");
				uParam7->f_25[0 /*679*/].f_252[0 /*78*/].f_8 = 2;
			}
			break;
		case 0:
		case 1:
		case 2:
		case 8:
			uParam7->f_25[0 /*679*/].f_9.f_1 = joaat("CR_STRAWBERRY_MALES_01");
			if (uParam7->f_25[0 /*679*/].f_174.f_74)
			{
				uParam7->f_25[0 /*679*/].f_174.f_1 = joaat("CR_STRAWBERRY_MALES_01");
			}
			iVar0 = 0;
			while (iVar0 < uParam7->f_25[0 /*679*/].f_499)
			{
				uParam7->f_25[0 /*679*/].f_410[iVar0 /*22*/].f_1 = joaat("CR_STRAWBERRY_MALES_01");
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < uParam7->f_25[0 /*679*/].f_523)
			{
				uParam7->f_25[0 /*679*/].f_500[iVar1 /*11*/].f_1 = joaat("CR_STRAWBERRY_MALES_01");
				iVar1++;
			}
			break;
		case 10:
			uParam7->f_25[0 /*679*/].f_9.f_1 = joaat("RCSP_COACHROBBERY_MALES_01");
			uParam7->f_25[0 /*679*/].f_174.f_1 = joaat("RCSP_COACHROBBERY_MALES_01");
			uParam7->f_25[0 /*679*/].f_409 = 2;
			uParam7->f_25[0 /*679*/].f_252[0 /*78*/].f_1 = joaat("CS_OPERASINGER");
			uParam7->f_25[0 /*679*/].f_252[1 /*78*/].f_1 = joaat("RCSP_COACHROBBERY_MALES_01");
			uParam7->f_25[0 /*679*/].f_252[0 /*78*/].f_8 = 2;
			uParam7->f_25[0 /*679*/].f_252[1 /*78*/].f_8 = 4;
			break;
	}
	switch (iParam6)
	{
		case 0:
			uParam7->f_25[0 /*679*/].f_9.f_2 = -797707041;
			uParam7->f_25[0 /*679*/].f_174.f_2 = 566860665;
			uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_2 = -653795165;
			uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_2 = 1312575432;
			uParam7->f_25[0 /*679*/].f_500[0 /*11*/].f_2 = -1977731268;
			uParam7->f_25[0 /*679*/].f_500[1 /*11*/].f_2 = 1044811047;
			uParam7->f_25[0 /*679*/].f_9.f_3 = 1;
			uParam7->f_25[0 /*679*/].f_174.f_3 = 1;
			uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_3 = 1;
			uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_3 = 1;
			uParam7->f_25[0 /*679*/].f_500[0 /*11*/].f_3 = 1;
			uParam7->f_25[0 /*679*/].f_500[1 /*11*/].f_3 = 1;
			break;
		case 1:
			uParam7->f_25[0 /*679*/].f_9.f_2 = -1564894869;
			uParam7->f_25[0 /*679*/].f_174.f_2 = 830847729;
			uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_2 = -263286992;
			uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_2 = 529526552;
			uParam7->f_25[0 /*679*/].f_500[0 /*11*/].f_2 = 140030891;
			uParam7->f_25[0 /*679*/].f_500[1 /*11*/].f_2 = 1641761352;
			uParam7->f_25[0 /*679*/].f_9.f_3 = 1;
			uParam7->f_25[0 /*679*/].f_174.f_3 = 1;
			uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_3 = 1;
			uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_3 = 1;
			uParam7->f_25[0 /*679*/].f_500[0 /*11*/].f_3 = 1;
			uParam7->f_25[0 /*679*/].f_500[1 /*11*/].f_3 = 1;
			break;
		case 2:
			uParam7->f_25[0 /*679*/].f_9.f_2 = -1262469768;
			uParam7->f_25[0 /*679*/].f_174.f_2 = 1128226404;
			uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_2 = -23778371;
			uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_2 = 859543443;
			uParam7->f_25[0 /*679*/].f_410[2 /*22*/].f_2 = 553054982;
			uParam7->f_25[0 /*679*/].f_410[3 /*22*/].f_2 = 1457938152;
			uParam7->f_25[0 /*679*/].f_9.f_3 = 1;
			uParam7->f_25[0 /*679*/].f_174.f_3 = 1;
			uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_3 = 1;
			uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_3 = 1;
			uParam7->f_25[0 /*679*/].f_410[2 /*22*/].f_3 = 1;
			uParam7->f_25[0 /*679*/].f_410[3 /*22*/].f_3 = 1;
			break;
		case 8:
			uParam7->f_25[0 /*679*/].f_9.f_2 = -1262469768;
			uParam7->f_25[0 /*679*/].f_174.f_2 = 830847729;
			uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_2 = -23778371;
			uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_2 = 859543443;
			uParam7->f_25[0 /*679*/].f_410[2 /*22*/].f_2 = 553054982;
			uParam7->f_25[0 /*679*/].f_410[3 /*22*/].f_2 = 1457938152;
			uParam7->f_25[0 /*679*/].f_9.f_3 = 1;
			uParam7->f_25[0 /*679*/].f_174.f_3 = 1;
			uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_3 = 1;
			uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_3 = 1;
			uParam7->f_25[0 /*679*/].f_410[2 /*22*/].f_3 = 1;
			uParam7->f_25[0 /*679*/].f_410[3 /*22*/].f_3 = 1;
			break;
		case 10:
			uParam7->f_25[0 /*679*/].f_9.f_2 = 1459193931;
			uParam7->f_25[0 /*679*/].f_174.f_2 = 599616266;
			uParam7->f_25[0 /*679*/].f_252[1 /*78*/].f_2 = -2053696238;
			uParam7->f_25[0 /*679*/].f_9.f_3 = 1;
			uParam7->f_25[0 /*679*/].f_174.f_3 = 1;
			uParam7->f_25[0 /*679*/].f_252[1 /*78*/].f_3 = 1;
			break;
	}
	uParam7->f_25[0 /*679*/].f_9.f_4 = 4;
	uParam7->f_25[0 /*679*/].f_9.f_7 = joaat("GROUP_REVOLVER");
	uParam7->f_25[0 /*679*/].f_174.f_4 = 4;
	uParam7->f_25[0 /*679*/].f_174.f_7 = joaat("GROUP_SHOTGUN");
	if (bVar27)
	{
		uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_11 = { vVar15 };
		uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_11 = { vVar18 };
		uParam7->f_25[0 /*679*/].f_410[2 /*22*/].f_11 = { vVar21 };
		uParam7->f_25[0 /*679*/].f_410[3 /*22*/].f_11 = { vVar24 };
	}
	else
	{
		uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_11 = { vVar3 };
		uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_11 = { vVar6 };
		uParam7->f_25[0 /*679*/].f_410[2 /*22*/].f_11 = { vVar9 };
		uParam7->f_25[0 /*679*/].f_410[3 /*22*/].f_11 = { vVar12 };
	}
	if (Param0 == 3)
	{
		uParam7->f_25[0 /*679*/].f_500[0 /*11*/].f_8 = 1;
		uParam7->f_25[0 /*679*/].f_500[1 /*11*/].f_8 = 2;
	}
	else
	{
		uParam7->f_25[0 /*679*/].f_500[0 /*11*/].f_8 = 3;
		uParam7->f_25[0 /*679*/].f_500[1 /*11*/].f_8 = 4;
	}
	iVar0 = 0;
	while (iVar0 < uParam7->f_25[0 /*679*/].f_499)
	{
		if (__LIB_1__::func_985())
		{
			uParam7->f_25[0 /*679*/].f_410[iVar0 /*22*/].f_10 = joaat("GROUP_REVOLVER");
		}
		else
		{
			uParam7->f_25[0 /*679*/].f_410[iVar0 /*22*/].f_10 = joaat("GROUP_REPEATER");
		}
		iVar0++;
	}
	if (iParam6 == 1)
	{
		uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_10 = joaat("GROUP_REVOLVER");
	}
	iVar1 = 0;
	while (iVar1 < uParam7->f_25[0 /*679*/].f_523)
	{
		uParam7->f_25[0 /*679*/].f_500[iVar1 /*11*/].f_7 = joaat("GROUP_REVOLVER");
		iVar1++;
	}
	if (uParam7->f_2266 > 1)
	{
		uParam7->f_25[1 /*679*/].f_9.f_4 = 4;
		uParam7->f_25[1 /*679*/].f_9.f_7 = joaat("GROUP_REVOLVER");
		uParam7->f_25[1 /*679*/].f_174.f_4 = 4;
		uParam7->f_25[1 /*679*/].f_174.f_7 = joaat("GROUP_SHOTGUN");
		if (bVar27)
		{
			uParam7->f_25[1 /*679*/].f_410[0 /*22*/].f_11 = { vVar15 };
			uParam7->f_25[1 /*679*/].f_410[1 /*22*/].f_11 = { vVar18 };
			uParam7->f_25[1 /*679*/].f_410[2 /*22*/].f_11 = { vVar21 };
			uParam7->f_25[1 /*679*/].f_410[3 /*22*/].f_11 = { vVar24 };
		}
		else
		{
			uParam7->f_25[1 /*679*/].f_410[0 /*22*/].f_11 = { vVar3 };
			uParam7->f_25[1 /*679*/].f_410[1 /*22*/].f_11 = { vVar6 };
			uParam7->f_25[1 /*679*/].f_410[2 /*22*/].f_11 = { vVar9 };
			uParam7->f_25[1 /*679*/].f_410[3 /*22*/].f_11 = { vVar12 };
		}
		uParam7->f_25[1 /*679*/].f_500[0 /*11*/].f_8 = 3;
		uParam7->f_25[1 /*679*/].f_500[1 /*11*/].f_8 = 4;
		iVar0 = 0;
		while (iVar0 < uParam7->f_25[1 /*679*/].f_499)
		{
			if (__LIB_1__::func_985())
			{
				uParam7->f_25[1 /*679*/].f_410[iVar0 /*22*/].f_10 = joaat("GROUP_REVOLVER");
			}
			else
			{
				uParam7->f_25[1 /*679*/].f_410[iVar0 /*22*/].f_10 = joaat("GROUP_REPEATER");
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < uParam7->f_25[1 /*679*/].f_523)
		{
			uParam7->f_25[1 /*679*/].f_500[iVar1 /*11*/].f_7 = joaat("GROUP_REVOLVER");
			iVar1++;
		}
	}
	if (((iParam6 == 6 || iParam6 == 7) || iParam6 == 8) || iParam6 == 9)
	{
		uParam7->f_25[0 /*679*/].f_1.f_1 = joaat("STAGECOACH004X");
		uParam7->f_25[0 /*679*/].f_8 = 4;
		uParam7->f_25[0 /*679*/].f_598 = (__LIB_1__::func_760(joaat("REWARD_COACHROB_LARGE"), 0, -1) + __LIB_1__::func_760(joaat("REWARD_COACHROB_SMALL"), 0, -1));
		uParam7->f_25[0 /*679*/].f_500[0 /*11*/].f_8 = 3;
		uParam7->f_25[0 /*679*/].f_500[1 /*11*/].f_8 = 4;
	}
	if (iParam6 == 8)
	{
		uParam7->f_25[0 /*679*/].f_523 = 0;
	}
	if (func_15(uParam7, 65536))
	{
		uParam7->f_25[0 /*679*/].f_174.f_7 = joaat("WEAPON_SHOTGUN_SAWEDOFF");
		uParam7->f_25[0 /*679*/].f_9.f_4 = 6;
		uParam7->f_25[0 /*679*/].f_174.f_4 = 6;
		uParam7->f_25[0 /*679*/].f_598 = 0;
		uParam7->f_5[0 /*9*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
		uParam7->f_5[1 /*9*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
		uParam7->f_5[0 /*9*/].f_6 = "0380_S_M_M_PDLMarshals_01_WHITE_01";
		uParam7->f_5[0 /*9*/].f_4 = 6;
		uParam7->f_5[1 /*9*/].f_4 = 6;
		uParam7->f_5[0 /*9*/].f_7 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
		uParam7->f_5[1 /*9*/].f_7 = joaat("WEAPON_REPEATER_CARBINE");
		uParam7->f_5[0 /*9*/].f_8 = 1;
		uParam7->f_5[1 /*9*/].f_8 = 2;
		uParam7->f_25[0 /*679*/].f_499 = 3;
		uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
		uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
		uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_10 = joaat("GROUP_REPEATER");
		uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_10 = joaat("GROUP_REVOLVER");
		uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_11 = { -1.5f, -3f, 0.5f };
		uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_11 = { 1.5f, -3f, 0.5f };
		uParam7->f_25[0 /*679*/].f_410[2 /*22*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
		uParam7->f_25[0 /*679*/].f_410[3 /*22*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
		uParam7->f_25[0 /*679*/].f_410[2 /*22*/].f_10 = joaat("GROUP_REVOLVER");
		uParam7->f_25[0 /*679*/].f_410[3 /*22*/].f_10 = joaat("GROUP_REPEATER");
		uParam7->f_25[0 /*679*/].f_410[2 /*22*/].f_11 = { 0f, -5f, 0.5f };
		uParam7->f_25[0 /*679*/].f_410[3 /*22*/].f_11 = { 0.5f, -8f, 0.5f };
	}
	if (iParam6 == 7)
	{
		uParam7->f_25[0 /*679*/].f_174.f_7 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
		uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_11 = { vVar21 };
		uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_11 = { vVar12 };
	}
	iVar28 = 0;
	while (iVar28 < uParam7->f_2266)
	{
		if (uParam7->f_25[iVar28 /*679*/].f_1.f_1 == joaat("STAGECOACH004X"))
		{
			uParam7->f_25[iVar28 /*679*/].f_601 = { -1.5f, -1f, 0.7f };
			uParam7->f_25[iVar28 /*679*/].f_604 = { 1.5f, -1f, 0.7f };
		}
		else
		{
			uParam7->f_25[iVar28 /*679*/].f_601 = { 0f, -2.79f, 0.7f };
		}
		if (uParam7->f_25[iVar28 /*679*/].f_1.f_1 == joaat("STAGECOACH004X") || uParam7->f_25[iVar28 /*679*/].f_1.f_1 == joaat("COACH2"))
		{
			uParam7->f_25[iVar28 /*679*/].f_410[0 /*22*/].f_11.f_1 = (uParam7->f_25[iVar28 /*679*/].f_410[0 /*22*/].f_11.f_1 + 6f);
			uParam7->f_25[iVar28 /*679*/].f_410[1 /*22*/].f_11.f_1 = (uParam7->f_25[iVar28 /*679*/].f_410[1 /*22*/].f_11.f_1 + 6f);
			uParam7->f_25[iVar28 /*679*/].f_410[0 /*22*/].f_11 = (uParam7->f_25[iVar28 /*679*/].f_410[0 /*22*/].f_11 - 1f);
			uParam7->f_25[iVar28 /*679*/].f_410[1 /*22*/].f_11 = (uParam7->f_25[iVar28 /*679*/].f_410[1 /*22*/].f_11 + 1f);
		}
		if (iParam6 == 10)
		{
			uParam7->f_25[iVar28 /*679*/].f_676 = 0;
			uParam7->f_25[iVar28 /*679*/].f_677 = -1;
		}
		else
		{
			uParam7->f_25[iVar28 /*679*/].f_676 = -1;
			uParam7->f_25[iVar28 /*679*/].f_677 = 0;
		}
		iVar28++;
	}
	if (iParam6 == 11)
	{
		uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_11.f_1 = (uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_11.f_1 + 3f);
		uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_11.f_1 = (uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_11.f_1 + 3f);
		uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_11 = (uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_11 - 0.5f);
		uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_11 = (uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_11 + 0.5f);
	}
	if (iParam6 == 6)
	{
		uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_11 = { -1.4f, -8f, 0.5f };
		uParam7->f_25[0 /*679*/].f_410[1 /*22*/].f_11 = { 1.4f, -8f, 0.5f };
		uParam7->f_25[0 /*679*/].f_410[2 /*22*/].f_11 = { -1.4f, -12f, 0.5f };
		uParam7->f_25[0 /*679*/].f_410[3 /*22*/].f_11 = { 1.4f, -12f, 0.5f };
	}
	if (iParam6 == 3)
	{
		uParam7->f_25[0 /*679*/].f_499 = 1;
		uParam7->f_25[0 /*679*/].f_523 = 1;
		uParam7->f_25[0 /*679*/].f_500[0 /*11*/].f_1 = joaat("A_M_M_SCLROUGHTRAVELLERS_01");
		uParam7->f_25[0 /*679*/].f_410[0 /*22*/].f_11 = { -1f, -10f, 0.5f };
		uParam7->f_25[0 /*679*/].f_500[0 /*11*/].f_7 = joaat("GROUP_REVOLVER");
	}
	if (iParam6 == 10)
	{
		uParam7->f_25[0 /*679*/].f_9.f_7 = joaat("WEAPON_UNARMED");
		uParam7->f_25[0 /*679*/].f_174.f_7 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
	}
	if (iParam6 == 6)
	{
		uParam7->f_25[0 /*679*/].f_595 = 2;
		uParam7->f_25[0 /*679*/].f_541[0 /*13*/].f_1 = joaat("A_M_M_SCLROUGHTRAVELLERS_01");
		uParam7->f_25[0 /*679*/].f_541[1 /*13*/].f_1 = joaat("A_M_M_SCLROUGHTRAVELLERS_01");
		uParam7->f_25[0 /*679*/].f_541[0 /*13*/].f_11 = 1;
		uParam7->f_25[0 /*679*/].f_541[1 /*13*/].f_11 = 1;
		uParam7->f_25[0 /*679*/].f_541[0 /*13*/].f_9 = joaat("GROUP_REPEATER");
		uParam7->f_25[0 /*679*/].f_541[1 /*13*/].f_9 = joaat("GROUP_REPEATER");
	}
	if (iParam6 == 0)
	{
		uParam7->f_25[0 /*679*/].f_595 = 4;
		uParam7->f_25[0 /*679*/].f_541[0 /*13*/].f_1 = joaat("A_M_M_BIVROUGHTRAVELLERS_01");
		uParam7->f_25[0 /*679*/].f_541[1 /*13*/].f_1 = joaat("A_M_M_BIVROUGHTRAVELLERS_01");
		uParam7->f_25[0 /*679*/].f_541[2 /*13*/].f_1 = joaat("A_M_M_BIVROUGHTRAVELLERS_01");
		uParam7->f_25[0 /*679*/].f_541[3 /*13*/].f_1 = joaat("A_M_M_BIVROUGHTRAVELLERS_01");
		uParam7->f_25[0 /*679*/].f_541[0 /*13*/].f_11 = 0;
		uParam7->f_25[0 /*679*/].f_541[1 /*13*/].f_11 = 0;
		uParam7->f_25[0 /*679*/].f_541[2 /*13*/].f_11 = 0;
		uParam7->f_25[0 /*679*/].f_541[3 /*13*/].f_11 = 0;
		uParam7->f_25[0 /*679*/].f_541[0 /*13*/].f_9 = joaat("GROUP_SHOTGUN");
		uParam7->f_25[0 /*679*/].f_541[1 /*13*/].f_9 = joaat("GROUP_REPEATER");
		uParam7->f_25[0 /*679*/].f_541[2 /*13*/].f_9 = joaat("GROUP_REVOLVER");
		uParam7->f_25[0 /*679*/].f_541[3 /*13*/].f_9 = joaat("GROUP_REPEATER");
	}
	if (iParam6 == 2)
	{
		uParam7->f_25[0 /*679*/].f_499 = 4;
		uParam7->f_25[0 /*679*/].f_523 = 0;
		uParam7->f_25[0 /*679*/].f_1.f_1 = joaat("STAGECOACH004X");
		uParam7->f_25[0 /*679*/].f_8 = 4;
		uParam7->f_25[0 /*679*/].f_598 = (__LIB_1__::func_760(joaat("REWARD_COACHROB_LARGE"), 0, -1) + __LIB_1__::func_760(joaat("REWARD_COACHROB_SMALL"), 0, -1));
		uParam7->f_25[0 /*679*/].f_627 = 1;
	}
	if (iParam6 == 8)
	{
		uParam7->f_25[0 /*679*/].f_627 = 1;
		uParam7->f_25[0 /*679*/].f_678 = 32;
	}
	iVar0 = 0;
	while (iVar0 < uParam7->f_25[0 /*679*/].f_499)
	{
		uParam7->f_25[0 /*679*/].f_410[iVar0 /*22*/].f_8 = func_746();
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < uParam7->f_25[0 /*679*/].f_595)
	{
		uParam7->f_25[0 /*679*/].f_541[iVar2 /*13*/].f_8 = func_746();
		iVar2++;
	}
	if (uParam7->f_2266 > 1)
	{
		iVar0 = 0;
		while (iVar0 < uParam7->f_25[1 /*679*/].f_499)
		{
			uParam7->f_25[1 /*679*/].f_410[iVar0 /*22*/].f_8 = func_746();
			iVar0++;
		}
		iVar2 = 0;
		while (iVar2 < uParam7->f_25[1 /*679*/].f_595)
		{
			uParam7->f_25[1 /*679*/].f_541[iVar2 /*13*/].f_8 = func_746();
			iVar2++;
		}
	}
}

void func_476(var uParam0)
{
	__LIB_4__::func_228(&(uParam0->f_2069));
	__LIB_1__::func_398(&(uParam0->f_2069), 1);
	__LIB_2__::func_507(&(uParam0->f_2069), 0);
	__LIB_1__::func_975(&(uParam0->f_2069), 8f);
	__LIB_2__::func_906(&(uParam0->f_2069), 50);
	__LIB_2__::func_595(&(uParam0->f_2069), 30f);
	__LIB_1__::func_406(&(uParam0->f_2069), 0);
	__LIB_1__::func_407(&(uParam0->f_2069), 0);
	__LIB_1__::func_392(&(uParam0->f_2069), 0);
	__LIB_4__::func_228(&(uParam0->f_2097));
	__LIB_1__::func_398(&(uParam0->f_2097), 1);
	__LIB_2__::func_507(&(uParam0->f_2097), 1000);
	__LIB_2__::func_906(&(uParam0->f_2097), 65);
}

char* func_477(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CRST1A";
		case 1:
			return "CRST2A";
		case 2:
			return "CRST3A";
		case 4:
			return "CRRH1A";
		case 5:
			return "CRRH2A";
		case 6:
			return "CRRH3A";
		case 8:
			return "CRCA1A";
		case 9:
			return "CRCA2A";
		case 10:
			return "CRCA3A";
		case 11:
			return "";
		case 13:
			return "CRRL3A";
		case 12:
			return "CRRSCA";
		default:
			break;
	}
	return "";
}

void func_479(var uParam0)
{
	VEHICLE::_0xCBF88256E44D5D39(uParam0, 1);
}

void func_480(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4[6];
	vector3 vVar23[6];
	float fVar42;
	float fVar43;
	int iVar44;
	if (ENTITY::IS_ENTITY_DEAD(uParam1->f_1))
	{
		return;
	}
	iVar0 = uParam1->f_1;
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar1.f_2 = (vVar1.z + 5f);
	vVar4[0 /*3*/] = { 0f, -0.7f, 0.77f };
	vVar4[1 /*3*/] = { -0.5f, 0.2f, 0.44f };
	vVar4[2 /*3*/] = { -0.49f, -0.3f, 0.44f };
	vVar4[3 /*3*/] = { -0.05f, 0.62f, 0.35f };
	vVar4[4 /*3*/] = { 0.4f, 1f, 0.37f };
	vVar4[5 /*3*/] = { 0.1f, 1f, 0.37f };
	fVar42 = 1.6f;
	fVar43 = 0.35f;
	vVar4[0 /*3*/].f_1 = (vVar4[0 /*3*/].f_1 + fVar42);
	vVar4[1 /*3*/].f_1 = (vVar4[1 /*3*/].f_1 + fVar42);
	vVar4[2 /*3*/].f_1 = (vVar4[2 /*3*/].f_1 + fVar42);
	vVar4[3 /*3*/].f_1 = (vVar4[3 /*3*/].f_1 + fVar42);
	vVar4[4 /*3*/].f_1 = (vVar4[4 /*3*/].f_1 + fVar42);
	vVar4[5 /*3*/].f_1 = (vVar4[5 /*3*/].f_1 + fVar42);
	vVar4[0 /*3*/].f_2 = (vVar4[0 /*3*/].f_2 - fVar43);
	vVar4[1 /*3*/].f_2 = (vVar4[1 /*3*/].f_2 - fVar43);
	vVar4[2 /*3*/].f_2 = (vVar4[2 /*3*/].f_2 - fVar43);
	vVar4[3 /*3*/].f_2 = (vVar4[3 /*3*/].f_2 - fVar43);
	vVar4[4 /*3*/].f_2 = (vVar4[4 /*3*/].f_2 - fVar43);
	vVar4[5 /*3*/].f_2 = (vVar4[5 /*3*/].f_2 - fVar43);
	vVar23[0 /*3*/] = { 90f, 0f, 0f };
	vVar23[1 /*3*/] = { -59f, 0f, -90f };
	vVar23[2 /*3*/] = { 0f, 60f, 0f };
	vVar23[3 /*3*/] = { -16f, 0f, 0f };
	vVar23[4 /*3*/] = { 0f, 0f, 0f };
	vVar23[5 /*3*/] = { 0f, 0f, 60f };
	iVar44 = 0;
	while (iVar44 < 6)
	{
		if (!bParam2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2214[iVar44 /*3*/]))
			{
				uParam0->f_2214[iVar44 /*3*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_2214[iVar44 /*3*/].f_1, vVar1, true, true, false, true);
				if (iVar44 == 1 || iVar44 == 2)
				{
					OBJECT::_0xFFB99FFD17F65889(uParam0->f_2214[iVar44 /*3*/], 0.75f);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2214[iVar44 /*3*/]) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_2214[iVar44 /*3*/], iVar0))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_2214[iVar44 /*3*/], iVar0, 0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "boot"), vVar4[iVar44 /*3*/], 0f, 0f, 0f, vVar23[iVar44 /*3*/], -1f, 0, 1, 0, 0, 2, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
		}
		CAM::_0x7E3F546ACFE6C8D9(uParam0->f_2214[iVar44 /*3*/]);
		ENTITY::_0xA9E6D8F2DDFC4DB9(uParam0->f_2214[iVar44 /*3*/], 1);
		uParam0->f_2214[iVar44 /*3*/].f_2 = 1;
		iVar44++;
	}
}

int func_500(var uParam0, int iParam1, int iParam2)
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
		return func_500(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_504(int* iParam0, int iParam1, int iParam2)
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return;
	}
	if (__LIB_6__::func_702(262144))
	{
		switch (iParam1)
		{
			case 0:
				fVar0 = 0.3f;
				break;
			case 1:
				fVar0 = 0.1f;
				break;
			case 2:
				fVar0 = 1.8f;
				break;
			case 3:
				fVar0 = 1.5f;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				fVar0 = 1.3f;
				break;
			case 1:
				fVar0 = 0.9f;
				break;
			case 2:
				fVar0 = 1.8f;
				break;
			case 3:
				fVar0 = 1.5f;
				break;
		}
	}
	if (func_15(&Local_51, 2) && !func_15(&Local_51, 65536))
	{
		if (__LIB_0__::func_665(Global_35, *iParam0, 1, 1) < 100f)
		{
			func_163(iParam0, &(iParam0->f_5), 1, 0, 0);
		}
		else
		{
			__LIB_0__::func_325(&(iParam0->f_5));
		}
	}
	if (!func_15(&Local_51, 65536))
	{
		if (!Local_51.f_25[iParam2 /*679*/].f_613 && !ENTITY::IS_ENTITY_DEAD(Local_51.f_25[iParam2 /*679*/].f_1))
		{
			fVar4 = __LIB_6__::func_721(*iParam0, Local_51.f_25[iParam2 /*679*/].f_1, iParam0->f_11);
			if (((ENTITY::GET_ENTITY_SPEED(Local_51.f_25[iParam2 /*679*/].f_1) < 2f && !func_551(&(Local_51.f_25[iParam2 /*679*/]))) || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), func_421(iLocal_24)) < 12f) || (((__LIB_0__::func_272(Global_1392388.f_3, 0) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1392388.f_3, true, false), ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)) < 9f) && !__LIB_6__::func_702(1)) && PED::IS_PED_FACING_PED(*iParam0, Global_1392388.f_3, 45f)))
			{
				fVar4 = 0f;
				if (Local_51.f_25[iParam2 /*679*/].f_626)
				{
					if (!__LIB_0__::func_163(*iParam0, -982327190))
					{
						TASK::TASK_STAND_STILL(*iParam0, -1);
					}
				}
				if (__LIB_0__::func_272(Global_1392388.f_3, 0))
				{
					if (!iParam0->f_18)
					{
						PED::_0xAAB050DA48B57978(*iParam0, "Default_Curious", Global_1392388.f_3, -1, 4);
						iParam0->f_18 = 1;
					}
				}
			}
			if (fVar4 < 1f && func_822(*iParam0, Local_51.f_25[iParam2 /*679*/].f_1))
			{
				fVar4 = 1f;
			}
			func_182(*iParam0, fVar4);
		}
	}
	else
	{
		if (func_15(&Local_51, 2))
		{
			fVar4 = 2.5f;
		}
		else if (__LIB_0__::func_665(*iParam0, Local_51.f_25[iParam2 /*679*/].f_1, 1, 1) < (230f / 3f))
		{
			fVar4 = 0.101f;
		}
		else if (__LIB_0__::func_665(*iParam0, Local_51.f_25[iParam2 /*679*/].f_1, 1, 1) < 230f)
		{
			fVar4 = 1f;
		}
		else
		{
			fVar4 = 1.25f;
		}
		func_182(*iParam0, fVar4);
	}
	if (func_15(&Local_51, 65536))
	{
		return;
	}
	if (!__LIB_6__::func_702(262144))
	{
		if (!iParam0->f_15)
		{
			if (func_15(&Local_51, 8) && !func_823(*iParam0))
			{
				if (!__LIB_0__::func_75(&(iParam0->f_19)))
				{
					__LIB_1__::func_148(&(iParam0->f_19));
				}
				if (__LIB_1__::func_313(&(iParam0->f_19), fVar0))
				{
					if (iParam0->f_18)
					{
						PED::_0x935CF6E42BAF7F4D(*iParam0);
						iParam0->f_18 = 0;
					}
					if (iLocal_25 == 0)
					{
						if (iParam1 == 0 && iLocal_49 > 0)
						{
							vVar1 = { func_244(iLocal_25, 82) };
							if (__LIB_16__::func_276(&vVar1))
							{
								__LIB_5__::func_239(&vVar1, 0, 0);
							}
							func_97(&(Local_51.f_2286), iLocal_25, 51);
						}
					}
					func_826(iParam0, iParam1, Local_51.f_25[iParam2 /*679*/].f_613);
					__LIB_0__::func_37(&(iParam0->f_19));
					iParam0->f_15 = 1;
				}
			}
		}
	}
	if (!PED::IS_PED_ON_MOUNT(*iParam0))
	{
		if (func_15(&Local_51, 2))
		{
			if (!__LIB_0__::func_163(*iParam0, 1120685857) && !PED::IS_PED_IN_COMBAT(*iParam0, 0))
			{
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(*iParam0, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 100f, 0, 0);
			}
			if (ENTITY::GET_ENTITY_SPEED(Local_51.f_25[iParam2 /*679*/].f_1) > 0.5f)
			{
				PED::SET_PED_RESET_FLAG(*iParam0, 25, true);
			}
		}
	}
	if (!__LIB_6__::func_702(4194304))
	{
		if ((((!func_15(&Local_51, 1048576) && !iParam0->f_16) && !ENTITY::IS_ENTITY_DEAD(Local_51.f_25[iParam2 /*679*/].f_1)) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_51.f_25[iParam2 /*679*/].f_1, true, false), Global_36) < 50f) && (__LIB_0__::func_75(&(Local_51.f_2158)) && __LIB_0__::func_265(&(Local_51.f_2158)) > 20f))
		{
			if (__LIB_1__::func_985())
			{
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(*iParam0, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 300f, 0, 0);
				func_4(&Local_51, 1048576);
				iParam0->f_16 = 1;
			}
		}
	}
	if ((!iParam0->f_16 && __LIB_6__::func_702(1)) && !func_823(*iParam0))
	{
		if (Local_51.f_25[iParam2 /*679*/].f_613 || (!func_386(&(Local_51.f_25[iParam2 /*679*/])) && !__LIB_6__::func_702(2097152)))
		{
			if (!__LIB_0__::func_75(&(iParam0->f_19)))
			{
				__LIB_1__::func_148(&(iParam0->f_19));
			}
			if (__LIB_1__::func_313(&(iParam0->f_19), fVar0))
			{
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				if (__LIB_6__::func_702(262144))
				{
				}
				else
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(*iParam0, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 300f, 0, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
				__LIB_0__::func_37(&(iParam0->f_19));
				iParam0->f_16 = 1;
			}
		}
	}
	if (!iParam0->f_16)
	{
		if (func_15(&Local_51, 2) && func_15(&Local_51, 32))
		{
			if (!__LIB_0__::func_75(&(iParam0->f_19)))
			{
				__LIB_1__::func_148(&(iParam0->f_19));
			}
			if (__LIB_1__::func_313(&(iParam0->f_19), fVar0))
			{
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				if (iParam1 == 1 || iParam1 == 2)
				{
					PED::_0x1854217C640B39EC(*iParam0, Local_51.f_25[iParam2 /*679*/].f_1, 0f, 0f, 0f, 30f, 0, 0);
				}
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(*iParam0, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 100f, 0, 0);
				__LIB_0__::func_37(&(iParam0->f_19));
				iParam0->f_16 = 1;
			}
		}
	}
	if (Local_51.f_25[iParam2 /*679*/].f_612)
	{
		if (__LIB_0__::func_665(Global_35, *iParam0, 1, 1) > 250f)
		{
			PED::DELETE_PED(iParam0);
		}
	}
}

int func_505()
{
	if (iLocal_25 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_506(var uParam0)
{
	if (!__LIB_6__::func_702(1))
	{
		return false;
	}
	if (!__LIB_0__::func_75(&(Local_51.f_2158)))
	{
		return false;
	}
	if (iLocal_25 == 8)
	{
		if (!__LIB_6__::func_702(268435456))
		{
			if (__LIB_0__::func_265(&(Local_51.f_2158)) > 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1653.389f, -694.1118f, 50.80352f, 1735.805f, -777.8456f, 38.71126f, 80f, false, true, 0))
			{
				return true;
			}
		}
	}
	else if (iLocal_25 == 0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0->f_1, -1368.807f, -983.8635f, 63.5913f, -1174.204f, -1167.253f, 87.3559f, 105.75f, false, true, 0))
		{
			return true;
		}
	}
	else if (__LIB_0__::func_265(&(Local_51.f_2158)) > 30f)
	{
		return true;
	}
	return false;
}

void func_507(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (uParam0->f_595 != 0)
	{
		if (!uParam0->f_674)
		{
			func_827(uParam0, &(uParam0->f_541[uParam0->f_664 /*13*/]), uParam0->f_664, iParam2);
			if (__LIB_0__::func_272(uParam0->f_541[uParam0->f_664 /*13*/].f_7, 0))
			{
				uParam0->f_664++;
				if (uParam0->f_664 == uParam0->f_595)
				{
					uParam0->f_664 = 0;
					uParam0->f_674 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
		if (!uParam0->f_673)
		{
			func_828(uParam0, &(uParam0->f_541[uParam0->f_664 /*13*/]), uParam1, iParam3, iParam2);
			if (__LIB_0__::func_272(uParam0->f_541[uParam0->f_664 /*13*/], 0))
			{
				uParam0->f_664++;
				if (uParam0->f_664 == uParam0->f_595)
				{
					uParam0->f_664 = 0;
					uParam0->f_673 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
}

bool func_508()
{
	if (iLocal_25 == 0)
	{
		return true;
	}
	return false;
}

void func_509(int iParam0)
{
	if (iLocal_25 == 0)
	{
		__LIB_0__::func_928(&(Local_51.f_2286), iParam0, "CHRB_BACKUP_STR1", 0);
	}
}

void func_510(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar1 = func_829();
	fVar2 = 150f;
	if (__LIB_0__::func_665(*uParam0, Local_51.f_25[iParam1 /*679*/].f_1, 1, 1) < fVar2 || __LIB_0__::func_94(*uParam0, Global_36, 1) < fVar2)
	{
		if (!uParam0->f_12)
		{
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_5, -1034486097);
			uParam0->f_12 = 1;
		}
	}
	else if (uParam0->f_12)
	{
		MAP::_BLIP_SET_MODIFIER(uParam0->f_5, -1034486097);
		uParam0->f_12 = 0;
	}
	switch (uParam0->f_10)
	{
		case 0:
			if (__LIB_0__::func_665(*uParam0, Local_51.f_25[iParam1 /*679*/].f_1, 1, 1) < fVar1 || __LIB_0__::func_94(*uParam0, Global_36, 1) < fVar1)
			{
				if (func_508())
				{
					if (!AUDIO::_0xFE5C6177064BD390(1))
					{
						if (iParam2 == 0)
						{
							func_97(&(Local_51.f_2286), iLocal_25, 47);
						}
						TASK::TASK_LOOK_AT_ENTITY(*uParam0, Global_35, -1, 0, 51, 0);
						uParam0->f_10 = 1;
					}
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(*uParam0, Global_35, -1, 0, 51, 0);
					uParam0->f_10 = 2;
				}
			}
			else
			{
				if (!PED::DOES_GROUP_EXIST(Local_51.f_2420))
				{
					Local_51.f_2420 = PED::CREATE_GROUP(2);
					PED::SET_GROUP_FORMATION(Local_51.f_2420, 3);
				}
				if (iParam2 == 0)
				{
					if (!PED::IS_PED_IN_GROUP(*uParam0))
					{
						PED::SET_PED_CONFIG_FLAG(*uParam0, 279, true);
						PED::SET_PED_AS_GROUP_LEADER(*uParam0, Local_51.f_2420, false);
					}
				}
				else if (!PED::IS_PED_IN_GROUP(*uParam0))
				{
					PED::SET_PED_CONFIG_FLAG(*uParam0, 279, true);
					PED::SET_PED_AS_GROUP_MEMBER(*uParam0, Local_51.f_2420);
				}
				if (iParam2 == 0)
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*uParam0, 0))
					{
						func_182(*uParam0, 2f);
					}
					else
					{
						func_742(*uParam0, func_194(iLocal_24), func_830(iParam2), bParam3);
					}
				}
			}
			break;
		case 1:
			if ((func_111(iLocal_25, 47) || !__LIB_0__::func_272(*uParam0, 0)) || __LIB_13__::func_95(*uParam0, 0, &(Local_51.f_2069), &uVar0, 0, 0))
			{
				uParam0->f_10 = 2;
			}
			break;
		case 2:
			if ((!AUDIO::_0xFE5C6177064BD390(1) || !func_508()) || __LIB_13__::func_95(*uParam0, 0, &(Local_51.f_2069), &uVar0, 0, 0))
			{
				if (PED::IS_PED_IN_GROUP(*uParam0))
				{
					PED::REMOVE_PED_FROM_GROUP(*uParam0);
				}
				if ((iParam2 - 1) == Local_51.f_25[iParam1 /*679*/].f_595)
				{
					if (PED::DOES_GROUP_EXIST(Local_51.f_2420))
					{
						PED::REMOVE_GROUP(Local_51.f_2420);
					}
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
				if (uParam0->f_11)
				{
					PED::SET_PED_CONFIG_FLAG(*uParam0, 167, false);
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				if (uParam0->f_11)
				{
					TASK::TASK_DISMOUNT_ANIMAL(0, 268435456, 0, 0, 0, 0);
				}
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar3);
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				uParam0->f_10 = 4;
			}
			func_182(*uParam0, 0f);
			break;
	}
}

int func_511(int iParam0, float fParam1, int iParam2)
{
	switch (iLocal_25)
	{
		case 0:
			return func_832(iParam0);
		case 4:
			return func_833(iParam0);
		default:
			break;
	}
	return 0;
}

void func_516()
{
	STREAMING::REQUEST_ANIM_DICT(func_836());
}

bool func_518(int iParam0)
{
	if ((((iLocal_25 == 8 || iLocal_25 == 9) || iLocal_25 == 10) || iLocal_25 == 11) || iLocal_25 == 12)
	{
		return false;
	}
	return true;
}

int func_523(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_15__::func_483(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_523(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_15__::func_92(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (func_853(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_11__::func_791(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_853(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_15__::func_92(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
			__LIB_6__::func_699(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_524(int iParam0)
{
	if (__LIB_0__::func_71(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 364, true);
		TASK::TASK_PLAY_ANIM(Global_35, func_836(), "trick_driver_marston", 4f, -4f, 5000, 67108864, 0f, false, 65536, false, 0, false);
	}
	TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_51.f_25[iParam0 /*679*/].f_9, -1, 3120, 51, 0);
	TASK::TASK_PLAY_ANIM(Local_51.f_25[iParam0 /*679*/].f_9, func_836(), "trick_driver_ped_a", 4f, -4f, 5000, 0, 0f, false, 0, false, 0, false);
	TASK::TASK_PLAY_ANIM(Local_51.f_25[iParam0 /*679*/].f_174, func_836(), "trick_driver_ped_b", 4f, -4f, 5000, 0, 0f, false, 0, false, 0, false);
}

bool func_525(int iParam0)
{
	if ((iParam0 == 6 || iParam0 == 2) || iParam0 == 5)
	{
		return false;
	}
	return true;
}

void func_526(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_861(&(uParam0->f_25[iVar0 /*679*/]), iParam1, iParam2);
		iVar0++;
	}
}

bool func_528(int iParam0)
{
	if ((iParam0 == 0 || iParam0 == 13) || iParam0 == 4)
	{
		return true;
	}
	return false;
}

bool func_530(int iParam0)
{
	if (iParam0 == 5)
	{
		return true;
	}
	return false;
}

void func_532(int iParam0)
{
	if (__LIB_0__::func_71(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 364, true);
		TASK::TASK_PLAY_ANIM(Global_35, func_836(), "trick_driver_alt_marston", 4f, -4f, -1, 67108864, 0f, false, 65536, false, 0, false);
	}
	TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_51.f_25[iParam0 /*679*/].f_9, -1, 3120, 51, 0);
	TASK::TASK_PLAY_ANIM(Local_51.f_25[iParam0 /*679*/].f_9, func_836(), "trick_driver_alt_ped_a", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	TASK::TASK_PLAY_ANIM(Local_51.f_25[iParam0 /*679*/].f_174, func_836(), "trick_driver_alt_ped_b", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	TASK::TASK_PLAY_ANIM(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], func_836(), "trick_driver_alt_ped_c", 4f, -4f, -1, 67108864, 0f, false, 65536, false, 0, false);
}

bool func_534(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 4)
	{
		return true;
	}
	return false;
}

void func_536(var uParam0, var uParam1)
{
	if (!__LIB_2__::func_1(uParam0->f_9, 0, 1))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(uParam0->f_9, 205, true);
	PED::_0xAAC0EE3B4999ABB5(uParam0->f_9, uParam1);
	TASK::TASK_LOOK_AT_ENTITY(uParam0->f_9, uParam1, -1, 0, 51, 0);
	uParam0->f_626 = 1;
	__LIB_1__::func_148(&(uParam0->f_9.f_9));
}

bool func_537(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 1411.719f, 266.1364f, 88.14217f, 1408.178f, 279.8591f, 92.53093f, 8.5f, false, true, 0);
}

float func_539()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	fVar1 = 0f;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Local_51.f_2214[iVar0 /*3*/].f_2)
		{
			fVar1 = (fVar1 + 1f);
			if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_2214[iVar0 /*3*/]))
			{
				fVar2 = (fVar2 + OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Local_51.f_2214[iVar0 /*3*/], true));
			}
		}
		iVar0++;
	}
	fVar3 = (fVar2 - fVar1);
	fVar4 = (fVar3 / fVar1);
	fVar5 = (100f + (fVar4 * 100f));
	return fVar5;
}

void func_540()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	switch (iVar1)
	{
		case 0:
			iVar2 = 14;
			break;
		case 1:
			iVar2 = 15;
			break;
		case 2:
			iVar2 = 17;
			break;
		case 3:
			iVar2 = 18;
			break;
		case 4:
			iVar2 = 21;
			break;
		case 5:
			iVar2 = 22;
			break;
	}
	OBJECT::_0xAAACF33CBF9B990A(Local_51.f_2214[iVar0 /*3*/], iVar2);
}

int func_541(int iParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (__LIB_0__::func_272(iVar1, 1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

void func_544(int iParam0, int iParam1, bool bParam2)
{
	if (!__LIB_0__::func_272(iParam0, 1))
	{
		return;
	}
	if (func_863(iParam1) || bParam2)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
	}
	if (((TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1120685857, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1120685857, true) != 0) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 780511057, true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 780511057, true) != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			PED::_0x1854217C640B39EC(iParam0, iParam1, 0f, 0f, 0f, 30f, 0, 0);
		}
		else
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 30f, 0, 0, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		if (!bParam2)
		{
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), 300f, 0, 0);
		}
		else
		{
			TASK::TASK_COMBAT_PED(iParam0, Global_35, 0, 0);
		}
	}
}

void func_545(var uParam0, struct<4> Param1, var uParam5, var uParam6)
{
	if (func_15(&Local_51, 16))
	{
		return;
	}
	if (!__LIB_6__::func_702(1))
	{
		return;
	}
	if (__LIB_6__::func_702(268435456))
	{
		func_864(uParam0);
		return;
	}
	switch (Param1.f_3)
	{
		case 8:
			func_865(uParam0);
			break;
		case 9:
			func_866(uParam0);
			break;
		case 11:
			func_867(uParam0);
			break;
		case 12:
			break;
		default:
			func_864(uParam0);
			break;
	}
}

bool func_546(var uParam0, bool bParam1)
{
	float fVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	switch (Local_51.f_2400)
	{
		case 0:
			fVar0 = 0.01f;
			break;
		case 1:
			fVar0 = 0.015f;
			break;
		case 2:
			fVar0 = 0.025f;
			break;
		case 3:
			fVar0 = 0.025f;
			break;
		default:
			fVar0 = 0.01f;
			break;
	}
	sVar1 = "VEH_WAGON@STANDARD@FRONT@FL@IN_SEAT@MALE@BASE@SITTING@FAST";
	sVar2 = "brake_enter";
	sVar3 = "brake_loop";
	sVar4 = "brake_exit";
	fVar5 = 0f;
	if (__LIB_0__::func_272(uParam0->f_174, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_677) == uParam0->f_174 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_676) == Global_35)
		{
			if (!__LIB_0__::func_163(uParam0->f_174, 355471868))
			{
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uParam0->f_174, uParam0->f_1);
			}
		}
	}
	if (iLocal_42 > 0)
	{
		if (!__LIB_6__::func_693(Global_35, uParam0->f_1, uParam0->f_676))
		{
			if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, sVar1, sVar3, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, sVar1, sVar2, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, sVar1, sVar4, 1))
			{
				TASK::STOP_ANIM_PLAYBACK(Global_35, 0, false);
			}
			if (__LIB_0__::func_75(&(Local_51.f_2140)))
			{
				__LIB_0__::func_37(&(Local_51.f_2140));
			}
			__LIB_1__::func_281(&(Local_51.f_2275), 1, 1);
			return false;
		}
	}
	switch (iLocal_42)
	{
		case 0:
			if (!__LIB_0__::func_75(&(Local_51.f_2170)))
			{
				if (__LIB_6__::func_702(2))
				{
					uParam0->f_619 = func_195(iLocal_24);
				}
				STREAMING::REQUEST_ANIM_DICT(sVar1);
				__LIB_0__::func_105(1);
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_676) != Global_35 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_677) != Global_35)
				{
					__LIB_0__::func_45("CR_HELP_TRAN", 10000, 0, 0, 0, 1);
					if (__LIB_6__::func_708(iLocal_25))
					{
						__LIB_6__::func_830(iLocal_25, "CR_O_TRAN", 0);
					}
				}
				__LIB_1__::func_148(&(Local_51.f_2170));
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_676) == Global_35)
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(Global_35, uParam0->f_1) && TASK::_0x9420FB11B8D77948(Global_35) == -1)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
					PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 0);
					PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 1);
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_UNARMED"), 1, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					iLocal_42 = 1;
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_163(Global_35, 716706914))
			{
				__LIB_1__::func_148(&(Local_51.f_2170));
				__LIB_0__::func_45("CR_HELP_RUNAWAY", 10000, 0, 0, 0, 1);
				if (__LIB_6__::func_708(iLocal_25))
				{
					__LIB_6__::func_830(iLocal_25, "CR_O_RUNAWAY", 0);
				}
				iLocal_42 = 2;
			}
			break;
		case 2:
			PED::SET_PED_RESET_FLAG(Global_35, 246, true);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_ACCELERATE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_TURN_LR"), false);
			if (!__LIB_0__::func_139(Local_51.f_2275))
			{
				if (!__LIB_0__::func_75(&(Local_51.f_2200)) || __LIB_0__::func_265(&(Local_51.f_2200)) > 1f)
				{
					Local_51.f_2275 = func_870("CR_C_BRAKE", joaat("INPUT_VEH_DRAFT_BRAKE"), 304000);
					__LIB_4__::func_862(Local_51.f_2275, joaat("INPUT_VEH_DRAFT_BRAKE"));
					Local_51.f_2401 = 0;
					if (__LIB_0__::func_75(&(Local_51.f_2200)))
					{
						__LIB_0__::func_37(&(Local_51.f_2200));
					}
					__LIB_1__::func_148(&(Local_51.f_2176));
				}
			}
			else
			{
				fVar5 = __LIB_0__::func_486(Local_51.f_2275, 1);
				if (fVar5 >= 1f)
				{
					if (!Local_51.f_2401)
					{
						Local_51.f_2401 = 1;
					}
					if (!__LIB_0__::func_75(&(Local_51.f_2200)))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar8);
						TASK::TASK_PLAY_ANIM(0, sVar1, sVar2, 4f, -4f, -1, 8196, 0f, false, 0, false, 0, false);
						TASK::TASK_PLAY_ANIM(0, sVar1, sVar3, 4f, -4f, -1, 8197, 0f, false, 0, false, 0, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar8);
						TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar8);
						TASK::CLEAR_SEQUENCE_TASK(&iVar8);
						Local_51.f_2400++;
						__LIB_1__::func_148(&(Local_51.f_2200));
					}
					else if (__LIB_0__::func_265(&(Local_51.f_2200)) > 2f)
					{
						__LIB_1__::func_148(&(Local_51.f_2200));
						__LIB_1__::func_281(&(Local_51.f_2275), 1, 1);
						func_872(uParam0, Local_51.f_2400);
					}
				}
				if (Local_51.f_2401)
				{
					if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_VEH_DRAFT_BRAKE")) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_VEH_DRAFT_BRAKE")))
					{
						__LIB_1__::func_148(&(Local_51.f_2200));
						__LIB_1__::func_281(&(Local_51.f_2275), 1, 1);
						func_872(uParam0, Local_51.f_2400);
					}
				}
			}
			if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_1) < 2.5f && __LIB_0__::func_265(&(Local_51.f_2170)) > 2f) || bParam1)
			{
				uParam0->f_619 = 0f;
				if (PED::IS_PED_IN_VEHICLE(Global_35, uParam0->f_1, false))
				{
					VEHICLE::_0xE12F5ED49F44D40D(uParam0->f_1);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, sVar1, sVar3, 1) || func_15(&Local_51, 268435456))
				{
					TASK::TASK_PLAY_ANIM(Global_35, sVar1, sVar4, 4f, -4f, -1, 8196, 0f, false, 0, false, 0, false);
					func_113(&Local_51, 268435456);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, sVar1, sVar3, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, sVar1, sVar2, 1))
				{
					TASK::STOP_ANIM_PLAYBACK(Global_35, 0, false);
				}
				if (__LIB_0__::func_75(&(Local_51.f_2140)))
				{
					__LIB_0__::func_37(&(Local_51.f_2140));
				}
				__LIB_1__::func_281(&(Local_51.f_2275), 1, 1);
				if (CAM::DOES_CAM_EXIST(Local_51.f_2399))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_CAM(Local_51.f_2399, false);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				iLocal_42 = 3;
				return true;
			}
			if (fVar5 > 0.5f)
			{
				iVar6 = BUILTIN::FLOOR(((fVar5 - 0.5f) * 300f));
				__LIB_0__::func_309(iVar6, 0, 255);
				PAD::SET_PAD_SHAKE(0, 1, iVar6);
			}
			fVar7 = fVar5;
			__LIB_0__::func_251(fVar7, 0.7f, 1f);
			__LIB_6__::func_715(uParam0->f_1, fVar7);
			if (__LIB_0__::func_139(Local_51.f_2275) && __LIB_1__::func_530(Local_51.f_2275, 1))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, sVar1, sVar4, 1))
					{
						if (!func_15(&Local_51, 268435456))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar8);
							TASK::TASK_PLAY_ANIM(0, sVar1, sVar2, 4f, -4f, -1, 8196, 0f, false, 0, false, 0, false);
							TASK::TASK_PLAY_ANIM(0, sVar1, sVar3, 4f, -4f, -1, 8197, 0f, false, 0, false, 0, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar8);
							TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar8);
							TASK::CLEAR_SEQUENCE_TASK(&iVar8);
							func_4(&Local_51, 268435456);
						}
					}
				}
				if (__LIB_6__::func_708(iLocal_25))
				{
					if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) > 2.5f)
					{
						if (!__LIB_5__::func_236(0))
						{
							if (!__LIB_0__::func_75(&(Local_51.f_2140)) || __LIB_0__::func_265(&(Local_51.f_2140)) > 6f)
							{
								if (func_97(&(Local_51.f_2286), iLocal_25, 70))
								{
									__LIB_1__::func_148(&(Local_51.f_2140));
								}
							}
						}
					}
				}
				Local_51.f_2384++;
				if (Local_51.f_2384 > 150)
				{
					uParam0->f_619 = (uParam0->f_619 - fVar0);
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(Local_51.f_2399))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_CAM(Local_51.f_2399, false);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (func_15(&Local_51, 268435456))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, sVar1, sVar3, 1))
					{
						TASK::TASK_PLAY_ANIM(Global_35, sVar1, sVar4, 4f, -4f, -1, 8196, 0f, false, 0, false, 0, false);
						if (__LIB_0__::func_139(Local_51.f_2275))
						{
							__LIB_1__::func_148(&(Local_51.f_2200));
							__LIB_1__::func_281(&(Local_51.f_2275), 1, 1);
						}
						func_113(&Local_51, 268435456);
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, sVar1, sVar3, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, sVar1, sVar2, 1))
				{
					TASK::STOP_ANIM_PLAYBACK(Global_35, 0, false);
				}
				if (!__LIB_6__::func_702(1048576))
				{
					if (__LIB_0__::func_265(&(Local_51.f_2170)) > 20f && Local_51.f_2384 == 0)
					{
						__LIB_0__::func_45("CR_HELP_RUNAWAY", 10000, 0, 0, 0, 1);
						__LIB_6__::func_705(1048576);
					}
				}
			}
			break;
	}
	return false;
}

bool func_547(var uParam0)
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_25[0 /*679*/].f_1, 0f, 15f, 0f) };
	if (VEHICLE::_0xF5EA41C1408695FB((vVar0.x - 15f), (vVar0.y - 15f), (vVar0.x + 15f), (vVar0.y + 15f)))
	{
		return true;
	}
	return false;
}

bool func_548(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_1, iVar0);
		if (__LIB_0__::func_272(iVar1, 1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_550(var uParam0, struct<4> Param1, var uParam5, var uParam6)
{
	float fVar0;
	char* sVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	fVar0 = 12f;
	if (iLocal_41 >= 3)
	{
		func_876(uParam0->f_1);
	}
	if (!__LIB_0__::func_75(&(uParam0->f_620)))
	{
		STREAMING::REQUEST_MODEL(joaat("SCRIPTEDBALL"), false);
		uParam0->f_619 = fVar0;
		__LIB_1__::func_148(&(uParam0->f_620));
		VEHICLE::_0x8F75941C86EEBFCA(uParam0->f_1, false);
		VEHICLE::_0xC84E138448507567(uParam0->f_1, false);
		__LIB_6__::func_717(uParam0->f_1, 1);
		__LIB_6__::func_718(uParam0->f_1, 1);
		VEHICLE::_0xCBF88256E44D5D39(uParam0->f_1, 1);
		if (__LIB_0__::func_71(Global_35))
		{
			PED::_RESTORE_PED_STAMINA(PED::GET_MOUNT(Global_35), 100f);
		}
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, uParam0->f_1, true))
	{
		func_878(uParam0);
		if (__LIB_6__::func_702(2097152))
		{
			if (func_546(uParam0, 0))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_1, 0))
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(uParam0->f_1);
				}
				VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1, 3f, 3, false);
				__LIB_6__::func_704(2097152);
				return;
			}
		}
	}
	else
	{
		if (iLocal_42 > 0)
		{
			__LIB_1__::func_281(&(Local_51.f_2275), 1, 1);
			if (ENTITY::_0x0B7CB1300CBFE19C(Global_35, 1))
			{
				TASK::STOP_ANIM_PLAYBACK(Global_35, 0, false);
			}
			if (func_15(&Local_51, 268435456))
			{
				func_113(&Local_51, 268435456);
			}
			if (CAM::DOES_CAM_EXIST(Local_51.f_2399))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(Local_51.f_2399, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			iLocal_42 = 0;
		}
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) < 1f && __LIB_0__::func_265(&(uParam0->f_620)) > 5f)
		{
			func_878(uParam0);
			__LIB_6__::func_704(2097152);
			return;
		}
		__LIB_6__::func_715(uParam0->f_1, 1f);
		if (__LIB_6__::func_702(2) && iLocal_42 == 0)
		{
			func_879(uParam0);
			if (!func_15(&Local_51, 4194304))
			{
				if (!__LIB_0__::func_75(&(Local_51.f_2179)))
				{
					__LIB_1__::func_148(&(Local_51.f_2179));
				}
				else if (__LIB_0__::func_265(&(Local_51.f_2179)) > 5f)
				{
					__LIB_0__::func_45("CACR3_HELP_JUMP", 10000, 0, 0, 0, 1);
					if (__LIB_6__::func_708(iLocal_25))
					{
						__LIB_6__::func_830(Param1.f_3, "CR_O_CATCHCOACH", 0);
					}
					func_4(&Local_51, 4194304);
					__LIB_0__::func_37(&(Local_51.f_2179));
				}
			}
		}
	}
	sVar1 = func_880(uParam0);
	if (uParam0->f_619 < 0f)
	{
		uParam0->f_619 = 0f;
	}
	fVar2 = (uParam0->f_619 - func_556(uParam0));
	if (!PED::IS_PED_IN_VEHICLE(Global_35, uParam0->f_1, false))
	{
		fVar3 = 150f;
		if (__LIB_9__::func_954(uParam0->f_1, Global_35, sVar1, fVar3))
		{
			fVar5 = fVar2;
			fVar6 = (fVar2 * 0.6f);
			fVar4 = (fVar3 - BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false)));
			if (fVar4 < 0f)
			{
				fVar4 = 0f;
			}
			fVar4 = (fVar4 / fVar3);
			fVar2 = __LIB_0__::func_667(fVar6, fVar5, fVar4);
		}
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	if (iLocal_25 == 10)
	{
		vVar7 = { -219.28f, 293.79f, 95.22f };
		if (BUILTIN::VDIST(vVar7, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false)) < 25f)
		{
			__LIB_6__::func_715(uParam0->f_1, 1f);
			if (fVar2 < 9f)
			{
				if (!uParam0->f_626)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1, 15f, -1, false);
					uParam0->f_626 = 1;
				}
				if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) < 1f)
				{
					__LIB_6__::func_704(2097152);
				}
				return;
			}
		}
	}
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_1, sVar1))
	{
		TASK::_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING_2(uParam0->f_1, sVar1, 0, 0, 8, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
	}
	else
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam0->f_1, fVar2);
	}
}

bool func_551(var uParam0)
{
	if (__LIB_0__::func_75(&(uParam0->f_643)) && __LIB_0__::func_265(&(uParam0->f_643)) < 4f)
	{
		return true;
	}
	return false;
}

bool func_553(var uParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	if (!__LIB_0__::func_75(&(uParam0->f_649)))
	{
		__LIB_1__::func_148(&(uParam0->f_649));
	}
	if (__LIB_0__::func_265(&(uParam0->f_649)) > 3f)
	{
		return true;
	}
	else
	{
		fVar1 = (__LIB_0__::func_265(&(uParam0->f_649)) / 3f);
		if (uParam0->f_597 < func_195(iLocal_24))
		{
			fVar0 = __LIB_0__::func_667(func_333(uParam0, iLocal_24), func_195(iLocal_24), fVar1);
		}
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_676);
		if (__LIB_0__::func_272(iVar2, 0))
		{
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar2, fVar0);
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam0->f_1, fVar0);
		}
		uParam0->f_597 = fVar0;
		return false;
	}
	return true;
}

bool func_554()
{
	if (iLocal_25 == 9)
	{
		return false;
	}
	return true;
}

float func_556(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (iLocal_25 != 10)
	{
		return 0f;
	}
	if (__LIB_2__::func_343(Global_35, uParam0->f_1, 0))
	{
		return 0f;
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(uParam0->f_1);
	fVar1 = 0f;
	if (fVar0 > func_195(iLocal_24))
	{
		fVar2 = (fVar0 - func_195(iLocal_24));
		fVar3 = __LIB_0__::func_251(fVar2, 0f, 1f);
		fVar1 = __LIB_0__::func_667(0f, 2f, fVar3);
	}
	return fVar1;
}

void func_559(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	if (bParam4 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_CONTEXT_SET_POINT(Global_1945938[iVar0 /*18*/].f_3, vParam1);
	Global_1945938[iVar0 /*18*/].f_12 = { vParam1 };
}

bool func_565(int iParam0)
{
	if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iParam0) < 0.37f)
	{
		return true;
	}
	return false;
}

float func_567(int iParam0)
{
	if (Local_51.f_2412)
	{
		if (VEHICLE::_IS_VEHICLE_DOOR_BROKEN(iParam0, 0))
		{
			return 0.5f;
		}
		else
		{
			return 0.73f;
		}
	}
	if (VEHICLE::_IS_VEHICLE_DOOR_BROKEN(iParam0, 2))
	{
		return 0.5f;
	}
	return 0.797f;
}

float func_568(int iParam0)
{
	if (Local_51.f_2412)
	{
		if (VEHICLE::_IS_VEHICLE_DOOR_BROKEN(iParam0, 0))
		{
			return 0.952f;
		}
		else
		{
			return 0.952f;
		}
	}
	if (VEHICLE::_IS_VEHICLE_DOOR_BROKEN(iParam0, 2))
	{
		return 0.939f;
	}
	return 0.943f;
}

void func_570(int iParam0)
{
	__LIB_6__::func_717(iParam0, 0);
	__LIB_6__::func_826(iParam0, 0);
	if (CAM::DOES_CAM_EXIST(iLocal_20))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_20, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_21))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_21, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_2402))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_51.f_2402));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_LOOTABLEMONEYBOX"));
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_51.f_2404))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_51.f_2404);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_51.f_2406))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_51.f_2406);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_51.f_2407))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_51.f_2407);
	}
}

int func_574(var uParam0)
{
	if (func_895(uParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_575(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (func_370(&(uParam0->f_25[iVar0 /*679*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_576(int iParam0)
{
	if (iParam0 == 10)
	{
		return true;
	}
	else if (iParam0 == 11 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2367.368f, -393.5994f, 37.61279f, 2664.314f, -434.4291f, 56.50912f, 163.25f, false, true, 0))
	{
		return true;
	}
	else if (iParam0 == 7)
	{
		return true;
	}
	else if (iParam0 == 8)
	{
		return true;
	}
	else if (iParam0 == 9)
	{
		return true;
	}
	else if (iParam0 == 0)
	{
		return true;
	}
	return false;
}

Vector3 func_577(int iParam0)
{
	vector3 vVar0;
	if (iParam0 == 10)
	{
		return 1482.155f, -753.2833f, 49.4205f;
	}
	else if (iParam0 == 11)
	{
		return 2575.132f, -148.3842f, 40.5289f;
	}
	else if (iParam0 == 7)
	{
		return 1087.205f, -413.26f, 90.3717f;
	}
	else if (iParam0 == 8)
	{
		return 553.9537f, -75.2647f, 124.0514f;
	}
	else if (iParam0 == 9)
	{
		return 1490.56f, -2225.264f, 42.9585f;
	}
	else if (iParam0 == 0)
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
		if (vVar0.z < 80f)
		{
			return -1263.693f, -1159.767f, 69.5723f;
		}
		return -966.0467f, -1229.369f, 52.0366f;
	}
	return 0f, 0f, 0f;
}

int func_578(int iParam0)
{
	if (iParam0 == 5)
	{
		return 200;
	}
	return 140;
}

Vector3 func_579(char* sParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	vVar1 = { 0f, 0f, 0f };
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam0, vParam1, &iVar0);
	if (iParam4 != -1)
	{
		if (iVar0 < iParam4)
		{
			iVar0 = iParam4;
		}
	}
	TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, iVar0, &vVar1);
	if (__LIB_0__::func_86(vVar1))
	{
		return vParam1;
	}
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &uVar4, false))
	{
		vVar1.f_2 = uVar4;
	}
	return vVar1;
}

float func_580(char* sParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam0, vParam1, &iVar0);
	TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, iVar0, &vVar1);
	TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, iVar0 + 2, &vVar4);
	return __LIB_0__::func_152(vVar1, vVar4, 1);
}

void func_582(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		*uParam1 = __LIB_1__::func_545(uParam1->f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 0, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			__LIB_0__::func_862(*uParam1, uParam1->f_2);
		}
	}
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam1, true);
	ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(*uParam1, true);
	iVar0 = 2;
	if (__LIB_0__::func_58(iParam3))
	{
		iVar0 |= 1;
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam1, true, true);
	func_900(*uParam1, uParam1->f_7, -1, iVar0, 0, 0.9f, 1065353216 /* Float: 1f */, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, iParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_6))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(*uParam1, uParam1->f_6);
	}
	func_901(*uParam1);
	PED::SET_PED_INTO_VEHICLE(uParam0->f_9, uParam0->f_1, uParam0->f_676);
	if (__LIB_1__::func_200(129))
	{
		PED::SET_PED_CONFIG_FLAG(*uParam1, 6, true);
	}
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(*uParam1, false);
	ENTITY::_0x18FF3110CF47115D(*uParam1, 1, 0);
	ENTITY::SET_ENTITY_LOD_DIST(*uParam1, 300);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 22, true);
	PED::SET_PED_COMBAT_ABILITY(*uParam1, 2);
	PED::SET_PED_ACCURACY(*uParam1, 80);
	CAM::_0x986F7A51EE3E1F92(*uParam1, 0);
	__LIB_1__::func_991(*uParam1, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*uParam1, "Robberies_Coach_Target_Group", 0f);
	uParam0->f_665 = 1;
}

void func_583(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (!uParam1->f_74)
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		*uParam1 = __LIB_1__::func_545(uParam1->f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 0, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			__LIB_0__::func_862(*uParam1, uParam1->f_2);
		}
	}
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		return;
	}
	PED::SET_PED_CAN_BE_TARGETTED(*uParam1, true);
	ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(*uParam1, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	iVar0 = 2;
	if (__LIB_0__::func_0(iParam3))
	{
		iVar0 |= 1;
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam1, true, true);
	func_900(*uParam1, uParam1->f_7, -1, iVar0, 0, 0.9f, 1065353216 /* Float: 1f */, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, iParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_6))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(*uParam1, uParam1->f_6);
	}
	func_901(*uParam1);
	if (__LIB_1__::func_200(129))
	{
		PED::SET_PED_CONFIG_FLAG(*uParam1, 6, true);
	}
	PED::SET_PED_INTO_VEHICLE(uParam0->f_174, uParam0->f_1, uParam0->f_677);
	CAM::_0x986F7A51EE3E1F92(uParam0->f_174, 0);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(uParam0->f_174, false);
	ENTITY::_0x18FF3110CF47115D(uParam0->f_174, 1, 0);
	ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_174, 300);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_174, 22, true);
	PED::SET_PED_COMBAT_ABILITY(uParam0->f_174, 2);
	PED::SET_PED_ACCURACY(uParam0->f_174, 80);
	if (iParam3 == 2)
	{
		__LIB_3__::func_459(uParam0->f_174, 1);
		__LIB_9__::func_7(uParam0->f_174, joaat("WEAPON_THROWN_DYNAMITE"), MISC::GET_RANDOM_INT_IN_RANGE(1, 4), 1);
	}
	__LIB_1__::func_991(*uParam1, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*uParam1, "Robberies_Coach_Target_Group", 0f);
	uParam0->f_666 = 1;
}

void func_584(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		*uParam1 = __LIB_1__::func_545(uParam1->f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 0, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			__LIB_0__::func_862(*uParam1, uParam1->f_2);
		}
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, joaat("REL_COP"));
	PED::SET_PED_CAN_BE_TARGETTED(*uParam1, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam1, true, true);
	func_900(*uParam1, uParam1->f_7, -1, 3, 0, 0.9f, 1065353216 /* Float: 1f */, 0);
	PED::SET_PED_INTO_VEHICLE(*uParam1, uParam0->f_1, uParam1->f_8);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_6))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(*uParam1, uParam1->f_6);
	}
	ENTITY::_0x18FF3110CF47115D(*uParam1, 1, 0);
	ENTITY::SET_ENTITY_LOD_DIST(*uParam1, 300);
	PED::SET_PED_COMBAT_ABILITY(*uParam1, 2);
	PED::SET_PED_ACCURACY(*uParam1, 80);
	CAM::_0x986F7A51EE3E1F92(*uParam1, 0);
	__LIB_1__::func_991(*uParam1, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*uParam1, "Robberies_Coach_Target_Group", 0f);
}

void func_585(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		*uParam1 = __LIB_1__::func_545(uParam1->f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 0, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			__LIB_0__::func_862(*uParam1, uParam1->f_2);
		}
	}
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, iParam2);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 278, false);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 103, true);
	iVar0 = __LIB_1__::func_760(joaat("REWARD_COACHROB_LARGE"), 0, -1);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (iVar1 == 0)
	{
		iVar2 = joaat("PROVISION_NECKLACE");
	}
	else if (iVar1 == 1)
	{
		iVar2 = joaat("PROVISION_POCKET_WATCH_SILVER");
	}
	else
	{
		iVar2 = joaat("PROVISION_RING_SILVER");
	}
	__LIB_3__::func_459(*uParam1, 1);
	__LIB_2__::func_190(*uParam1, iVar0);
	__LIB_2__::func_463(*uParam1, iVar2, 1, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_6))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(*uParam1, uParam1->f_6);
	}
	PED::SET_PED_INTO_VEHICLE(*uParam1, uParam0->f_1, uParam1->f_8);
	ENTITY::SET_ENTITY_LOD_DIST(*uParam1, 300);
	CAM::_0x986F7A51EE3E1F92(*uParam1, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*uParam1, "Robberies_Coach_Target_Group", 0f);
}

void func_586(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	float fVar5;
	bVar0 = false;
	if (uParam1->f_9 != 0)
	{
		bVar0 = true;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		return;
	}
	if (!func_909())
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam1->f_11) };
	}
	else
	{
		vVar1 = { func_910(iParam2) };
	}
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &uVar4, false))
	{
		vVar1.f_2 = uVar4;
	}
	fVar5 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
	if (!__LIB_0__::func_272(uParam1->f_7, 0))
	{
		uParam1->f_7 = __LIB_1__::func_545(uParam1->f_8, vVar1, fVar5, 1, 1, 0, 1, 1, !bVar0, 0, 0, 0, 0);
		if (bVar0)
		{
			__LIB_0__::func_862(uParam1->f_7, uParam1->f_9);
		}
	}
	if (!__LIB_0__::func_272(uParam1->f_7, 0))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_7, false);
	PED::SET_PED_CAN_BE_TARGETTED(uParam1->f_7, false);
	ENTITY::_SET_ENTITY_HEALTH(uParam1->f_7, 400, 0);
	TASK::TASK_STAND_STILL(uParam1->f_7, 3000);
	PED::SET_PED_CONFIG_FLAG(uParam1->f_7, 145, true);
	if (__LIB_1__::func_200(129))
	{
		PED::SET_PED_CONFIG_FLAG(uParam1->f_7, 6, true);
	}
	ENTITY::SET_ENTITY_LOD_DIST(uParam1->f_7, 300);
	PED::SET_PED_CONFIG_FLAG(uParam1->f_7, 72, true);
	__LIB_1__::func_991(uParam1->f_7, 0);
}

void func_587(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	vector3 vVar0;
	var uVar3;
	float fVar4;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		return;
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam1->f_11) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
	{
		vVar0.f_2 = uVar3;
	}
	fVar4 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		*uParam1 = __LIB_1__::func_545(uParam1->f_1, vVar0, fVar4, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			__LIB_0__::func_862(*uParam1, uParam1->f_2);
		}
	}
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, iParam3);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 5, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam1, true, true);
	func_900(*uParam1, uParam1->f_10, -1, 3, 0, 0.9f, 1065353216 /* Float: 1f */, 0);
	func_911(*uParam1);
	if (func_15(uParam2, 65536))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, joaat("REL_COP"));
		LAW::_0x819ADD5EF1742F47(*uParam1, 7);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	}
	if (__LIB_1__::func_200(129))
	{
		PED::SET_PED_CONFIG_FLAG(*uParam1, 6, true);
	}
	if (__LIB_0__::func_272(uParam1->f_7, 0))
	{
		PED::_SET_PED_ON_MOUNT(*uParam1, uParam1->f_7, -1, true);
	}
	ENTITY::_0x18FF3110CF47115D(*uParam1, 1, 0);
	ENTITY::SET_ENTITY_LOD_DIST(*uParam1, 300);
	PED::SET_PED_SHOOT_RATE(*uParam1, 90);
	PED::SET_PED_COMBAT_ABILITY(*uParam1, 2);
	PED::SET_PED_ACCURACY(*uParam1, 80);
	CAM::_0x986F7A51EE3E1F92(*uParam1, 0);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 297, true);
	__LIB_1__::func_991(*uParam1, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*uParam1, "Robberies_Coach_Target_Group", 0f);
	if (iParam5 == 2 && (iParam4 == 1 || iParam4 == 3))
	{
		__LIB_3__::func_459(*uParam1, 1);
		__LIB_9__::func_7(*uParam1, joaat("WEAPON_THROWN_DYNAMITE"), MISC::GET_RANDOM_INT_IN_RANGE(1, 4), 1);
	}
}

void func_589(var uParam0, var uParam1, int iParam2)
{
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		*uParam1 = __LIB_1__::func_545(uParam1->f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 0, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			__LIB_0__::func_862(*uParam1, uParam1->f_2);
		}
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, iParam2);
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam1, true, true);
	func_900(*uParam1, uParam1->f_7, -1, 3, 0, 0.9f, 1065353216 /* Float: 1f */, 0);
	PED::SET_PED_INTO_VEHICLE(*uParam1, uParam0->f_1, uParam1->f_8);
	func_914(*uParam1);
	if (func_169(uParam0->f_1))
	{
		ENTITY::SET_ENTITY_PROOFS(*uParam1, 6, false);
		uParam1->f_10 = 1;
	}
	else
	{
		PED::SET_PED_CAN_BE_TARGETTED(*uParam1, true);
		ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(*uParam1, true);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 46, true);
	ENTITY::_0x18FF3110CF47115D(*uParam1, 1, 0);
	ENTITY::SET_ENTITY_LOD_DIST(*uParam1, 300);
	if (uParam0->f_1.f_1 == joaat("WAGON05X"))
	{
		PED::SET_PED_CONFIG_FLAG(*uParam1, 22, true);
	}
	PED::SET_PED_COMBAT_ABILITY(*uParam1, 2);
	PED::SET_PED_ACCURACY(*uParam1, 80);
	CAM::_0x986F7A51EE3E1F92(*uParam1, 0);
	__LIB_1__::func_991(*uParam1, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*uParam1, "Robberies_Coach_Target_Group", 0f);
}

void func_590(var uParam0, var uParam1, int iParam2)
{
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		*uParam1 = __LIB_1__::func_545(uParam1->f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 0, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			__LIB_0__::func_862(*uParam1, uParam1->f_2);
		}
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, iParam2);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	PED::SET_PED_INTO_VEHICLE(*uParam1, uParam0->f_1, 3);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(*uParam1, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 2, true);
	__LIB_2__::func_279(*uParam1, 1);
	ENTITY::_0x18FF3110CF47115D(*uParam1, 1, 0);
	ENTITY::SET_ENTITY_LOD_DIST(*uParam1, 300);
	PED::SET_PED_COMBAT_ABILITY(*uParam1, 2);
	PED::SET_PED_ACCURACY(*uParam1, 80);
	CAM::_0x986F7A51EE3E1F92(*uParam1, 0);
	__LIB_1__::func_991(*uParam1, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*uParam1, "Robberies_Coach_Target_Group", 0f);
}

bool func_592(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (__LIB_0__::func_272(uParam0->f_9, 1))
	{
		if (PED::IS_PED_BEING_JACKED(uParam0->f_9))
		{
			return true;
		}
	}
	if (__LIB_0__::func_272(uParam0->f_174, 1))
	{
		if (PED::IS_PED_BEING_JACKED(uParam0->f_174))
		{
			return true;
		}
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_676) == Global_35 || VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_677) == Global_35)
	{
		return true;
	}
	return false;
}

bool func_593()
{
	if (iLocal_25 == 9)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1096.761f, -640.862f, 94.36778f, 1104.477f, -645.5322f, 99.29914f, 2.75f, false, true, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_594(var uParam0)
{
	if (!__LIB_2__::func_1(*uParam0, 0, 1))
	{
		return false;
	}
	if (__LIB_2__::func_215(*uParam0, Global_35, 1, 40f, 0))
	{
		return true;
	}
	return false;
}

bool func_595(var uParam0)
{
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return false;
	}
	if (__LIB_0__::func_75(&(uParam0->f_68)))
	{
		return true;
	}
	if (__LIB_2__::func_215(*uParam0, Global_35, 1, 40f, 0))
	{
		return true;
	}
	return false;
}

bool func_596(var uParam0, int iParam1)
{
	if (__LIB_0__::func_272(uParam0->f_410[iParam1 /*22*/], 0))
	{
		if (__LIB_2__::func_215(uParam0->f_410[iParam1 /*22*/], Global_35, 1, 40f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_597(var uParam0)
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	switch (iLocal_36)
	{
		case 0:
			__LIB_1__::func_148(&(uParam0->f_637));
			__LIB_9__::func_744(1);
			break;
		case 1:
			if (__LIB_0__::func_265(&(uParam0->f_637)) > 19f)
			{
				iVar0 = 0;
				while (iVar0 < Local_51.f_25[0 /*679*/].f_499)
				{
					if (__LIB_0__::func_665(Local_51.f_25[0 /*679*/].f_1, Local_51.f_25[0 /*679*/].f_410[iVar0 /*22*/], 1, 1) < (50f - 20f))
					{
						func_182(Local_51.f_25[0 /*679*/].f_410[iVar0 /*22*/], 0f);
					}
					else if (__LIB_0__::func_665(Local_51.f_25[0 /*679*/].f_1, Local_51.f_25[0 /*679*/].f_410[iVar0 /*22*/], 1, 1) > 140f)
					{
						func_182(Local_51.f_25[0 /*679*/].f_410[iVar0 /*22*/], 1.25f);
					}
					else
					{
						bVar1 = true;
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < Local_51.f_25[0 /*679*/].f_499)
				{
					if (bVar1)
					{
						func_182(Local_51.f_25[0 /*679*/].f_410[iVar0 /*22*/], 1.75f);
					}
					iVar0++;
				}
			}
			break;
	}
	return __LIB_6__::func_702(32768);
}

bool func_598(var uParam0, var uParam1)
{
	if (func_918(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

bool func_599(var uParam0, var uParam1, int iParam2)
{
	if (func_15(uParam1, 65536))
	{
		return false;
	}
	if (__LIB_6__::func_702(4) && __LIB_1__::func_200(37))
	{
		return false;
	}
	if (uParam1->f_2266 > 1)
	{
		return false;
	}
	if (PED::IS_PED_SHOOTING(Global_35))
	{
		return false;
	}
	if (uParam0->f_523 > 0)
	{
		return false;
	}
	if (__LIB_0__::func_94(uParam0->f_9, Global_36, 1) > 30f)
	{
		return false;
	}
	if (!PED::IS_PED_FACING_PED(uParam0->f_9, Global_35, 45f))
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) > 1f)
	{
		return false;
	}
	if (uParam0->f_499 == 0)
	{
		return true;
	}
	return false;
}

bool func_600(var uParam0, var uParam1)
{
	if (func_919(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

bool func_601(vector3 vParam0, var uParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	if (__LIB_6__::func_803())
	{
		if (__LIB_2__::func_470())
		{
			vVar0 = { __LIB_1__::func_384(0) };
			vVar3 = { vVar0 * Vector(300f, 300f, 300f) + Global_36 };
			if (__LIB_3__::func_874(Global_36, vVar3, vParam0, uParam3))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_602(var uParam0, int iParam1)
{
	if (iParam1 == 4)
	{
		if (__LIB_0__::func_665(uParam0->f_25[0 /*679*/].f_500[0 /*11*/], Global_35, 1, 1) <= 0.75f && PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			return true;
		}
	}
	return false;
}

bool func_603(var uParam0)
{
	if (iLocal_26 != 3)
	{
		return false;
	}
	if (uParam0->f_523 == 0)
	{
		return false;
	}
	switch (iLocal_43)
	{
		case 0:
			if (PED::IS_PED_FACING_PED(uParam0->f_500[0 /*11*/], Global_35, 90f) && __LIB_0__::func_266(uParam0->f_500[0 /*11*/], Global_36, 40f, 1, 1))
			{
				if (func_601(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 10f))
				{
					if (__LIB_0__::func_272(uParam0->f_500[0 /*11*/], 0))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_500[0 /*11*/], 2, true);
						TASK::TASK_COMBAT_PED_TIMED(uParam0->f_500[0 /*11*/], Global_35, 1500, 0);
						iLocal_43 = 1;
					}
				}
			}
			break;
		case 1:
			if (!AUDIO::_0xFE5C6177064BD390(0))
			{
				iLocal_43 = 2;
				return true;
			}
			break;
	}
	return false;
}

bool func_604(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (__LIB_0__::func_272(uParam0->f_410[iVar0 /*22*/], 1))
		{
			if (func_923(&(uParam0->f_410[iVar0 /*22*/]), uParam1))
			{
				if (__LIB_0__::func_665(uParam0->f_410[iVar0 /*22*/], uParam0->f_1, 1, 1) < (200f - 30f))
				{
					return true;
				}
				else if (!func_15(uParam1, 8))
				{
					func_924(uParam0);
					func_4(uParam1, 8);
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_605(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_523)
	{
		if (__LIB_0__::func_272(uParam0->f_500[iVar0 /*11*/], 1))
		{
			if (func_925(&(uParam0->f_500[iVar0 /*11*/]), uParam1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_606(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = false;
	bVar1 = false;
	func_926(uParam0, bParam1);
	if (func_927() && __LIB_2__::func_343(uParam0->f_9, uParam0->f_1, 0))
	{
		if (!__LIB_0__::func_75(&(uParam0->f_174.f_68)))
		{
			if (((((((bParam1 && func_107()) && iLocal_36 > 0) && __LIB_0__::func_266(uParam0->f_9, Global_36, 20f, 1, 1)) && __LIB_0__::func_265(&(uParam0->f_637)) > 2f) && !func_928(&(uParam0->f_9))) && __LIB_0__::func_272(uParam0->f_174, 0)) && !__LIB_0__::func_163(uParam0->f_174, 1630799643))
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(uParam0->f_174, Global_35, -1, false, 1);
				__LIB_1__::func_148(&(uParam0->f_174.f_68));
			}
		}
		else if (__LIB_0__::func_265(&(uParam0->f_174.f_68)) > 5f)
		{
			if (!__LIB_0__::func_266(uParam0->f_9, Global_36, 20f, 1, 1) || (func_928(&(uParam0->f_9)) && __LIB_0__::func_265(&(uParam0->f_9.f_161)) > 2f))
			{
				if (__LIB_0__::func_163(uParam0->f_174, 1630799643))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_174, true, false);
					__LIB_0__::func_37(&(uParam0->f_174.f_68));
				}
			}
		}
	}
	if (uParam0->f_614 && !uParam0->f_630)
	{
		if ((!(PED::IS_PED_FACING_PED(uParam0->f_9, Global_35, 20f) && __LIB_0__::func_94(uParam0->f_9, Global_36, 1) < 30f) && !((__LIB_0__::func_272(Global_1392388.f_3, 0) && PED::IS_PED_FACING_PED(uParam0->f_9, Global_1392388.f_3, 20f)) && __LIB_0__::func_665(uParam0->f_9, Global_1392388.f_3, 1, 1) < 30f)) && !func_929(uParam0->f_1, Local_51.f_2209))
		{
			func_473(uParam0->f_9, uParam0->f_1, func_194(iLocal_24), 4.4f, 0);
			uParam0->f_614 = 0;
		}
	}
	if (!func_15(&Local_51, 32) && !func_15(&Local_51, 65536))
	{
		switch (iLocal_36)
		{
			case 0:
				if (__LIB_2__::func_227(0, 1, 0, 0))
				{
					if (func_929(uParam0->f_1, Local_51.f_2209))
					{
						if (iLocal_26 != 2 && uParam0->f_499 < 3)
						{
							TASK::TASK_LOOK_AT_ENTITY(uParam0->f_9, Local_51.f_2209, -1, 0, 51, 0);
							if (__LIB_0__::func_272(uParam0->f_174, 1))
							{
								TASK::TASK_LOOK_AT_ENTITY(uParam0->f_174, Local_51.f_2209, -1, 0, 51, 0);
							}
							func_930(uParam0, &Local_51);
							func_101(&Local_51);
							__LIB_9__::func_744(4);
						}
						else
						{
							__LIB_9__::func_744(6);
						}
					}
					if (func_610())
					{
						if (__LIB_1__::func_200(37))
						{
							__LIB_6__::func_705(512);
						}
						else
						{
							func_101(&Local_51);
							if (__LIB_0__::func_272(Global_1392388.f_3, 0))
							{
								func_931(uParam0);
								TASK::TASK_LOOK_AT_ENTITY(uParam0->f_9, Global_1392388.f_3, -1, 0, 51, 0);
								if (__LIB_0__::func_272(uParam0->f_174, 1))
								{
									TASK::TASK_LOOK_AT_ENTITY(uParam0->f_174, Global_1392388.f_3, -1, 0, 51, 0);
								}
							}
						}
						__LIB_9__::func_744(7);
						func_4(&Local_51, 131072);
					}
					if (bParam1)
					{
						if (__LIB_0__::func_266(uParam0->f_9, Global_36, 22f, 1, 1))
						{
							if ((PED::IS_PED_FACING_PED(uParam0->f_9, Global_35, 20f) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1) > 1f) && func_932(uParam0->f_1, 1077936128 /* Float: 3f */))
							{
								TASK::TASK_LOOK_AT_ENTITY(uParam0->f_9, Global_35, -1, 0, 51, 0);
								if (iLocal_26 == 1)
								{
									if (__LIB_0__::func_272(uParam0->f_252[0 /*78*/], 1))
									{
										TASK::TASK_LOOK_AT_ENTITY(uParam0->f_252[0 /*78*/], Global_35, -1, 0, 51, 0);
									}
								}
								func_933(uParam0);
								func_934(uParam0);
								iVar2 = 0;
								while (iVar2 < Local_51.f_2266)
								{
									Local_51.f_25[iVar2 /*679*/].f_597 = 0f;
									iVar2++;
								}
								func_101(&Local_51);
								if (!func_928(&(uParam0->f_9)))
								{
									func_97(&(Local_51.f_2286), iLocal_25, 6);
								}
								__LIB_9__::func_744(1);
								__LIB_6__::func_705(32);
							}
							else if (PED::IS_PED_FACING_PED(uParam0->f_9, Global_35, 120f))
							{
								TASK::TASK_LOOK_AT_ENTITY(uParam0->f_9, Global_35, -1, 0, 51, 0);
								if (iLocal_26 == 1)
								{
									if (__LIB_0__::func_272(uParam0->f_252[0 /*78*/], 1))
									{
										TASK::TASK_LOOK_AT_ENTITY(uParam0->f_252[0 /*78*/], Global_35, -1, 0, 51, 0);
									}
								}
								if (!func_928(&(uParam0->f_9)))
								{
									func_97(&(Local_51.f_2286), iLocal_25, 7);
								}
								__LIB_9__::func_744(1);
								__LIB_6__::func_705(32);
							}
						}
					}
				}
				break;
			case 1:
				if (!__LIB_6__::func_702(524288))
				{
					bVar0 = true;
				}
				if (!__LIB_0__::func_75(&(uParam0->f_637)))
				{
					__LIB_1__::func_148(&(uParam0->f_637));
				}
				if (!func_935() && !uParam0->f_630)
				{
					if (!Local_51.f_2416)
					{
						if (((((__LIB_0__::func_265(&(uParam0->f_637)) > 6f && uParam0->f_626) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1) < 0.5f) && __LIB_0__::func_266(uParam0->f_9, Global_36, 22f, 1, 1)) && PED::IS_PED_FACING_PED(uParam0->f_9, Global_35, 20f)) && PATHFIND::IS_POINT_ON_ROAD(Global_36, 0))
						{
							if (__LIB_0__::func_272(uParam0->f_174, 0))
							{
								TASK::TASK_AIM_GUN_AT_ENTITY(uParam0->f_174, Global_35, -1, false, 1);
							}
							func_97(&(Local_51.f_2286), iLocal_25, 8);
							Local_51.f_2416 = 1;
						}
					}
					if (uParam0->f_626 && uParam0->f_1 == Global_1392388.f_5)
					{
						if (!__LIB_0__::func_266(uParam0->f_9, Global_36, 22f, 1, 1) || !PED::IS_PED_FACING_PED(uParam0->f_9, Global_35, 20f))
						{
							if (!__LIB_6__::func_702(524288))
							{
								func_112(&Local_51, iLocal_24, 1);
							}
						}
					}
					if (__LIB_0__::func_265(&(uParam0->f_637)) > 12f || BUILTIN::VDIST(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_601)) < 5f)
					{
						if (((((__LIB_0__::func_265(&(uParam0->f_637)) > 12f && uParam0->f_626) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1) < 0.5f) && __LIB_0__::func_266(uParam0->f_9, Global_36, 22f, 1, 1)) && PED::IS_PED_FACING_PED(uParam0->f_9, Global_35, 20f)) && PATHFIND::IS_POINT_ON_ROAD(Global_36, 0))
						{
							if (iLocal_25 == 13)
							{
								func_97(&(Local_51.f_2286), iLocal_25, 49);
							}
							else
							{
								func_97(&(Local_51.f_2286), iLocal_25, 2);
							}
							Local_51.f_2415 = 1;
							__LIB_6__::func_705(524288);
							return true;
						}
						if (uParam0->f_626)
						{
							func_112(&Local_51, iLocal_24, 1);
						}
						if (bParam1 && !func_928(&(uParam0->f_9)))
						{
							if (!Local_51.f_2416)
							{
								func_97(&(Local_51.f_2286), iLocal_25, 8);
							}
						}
						__LIB_0__::func_37(&(uParam0->f_637));
						__LIB_9__::func_744(2);
					}
				}
				break;
			case 2:
				if (!__LIB_6__::func_702(524288))
				{
					bVar0 = true;
				}
				if (!__LIB_0__::func_75(&(uParam0->f_637)))
				{
					__LIB_1__::func_148(&(uParam0->f_637));
				}
				if (!func_935() && !uParam0->f_630)
				{
					if (__LIB_0__::func_266(uParam0->f_9, Global_36, 15f, 1, 1))
					{
						if (PED::IS_PED_FACING_PED(uParam0->f_9, Global_35, 120f))
						{
							if (__LIB_0__::func_265(&(uParam0->f_637)) > 9f)
							{
								if (!func_928(&(uParam0->f_9)))
								{
									func_97(&(Local_51.f_2286), iLocal_25, 9);
								}
								func_112(&Local_51, iLocal_24, 1);
								__LIB_0__::func_37(&(uParam0->f_637));
								__LIB_9__::func_744(3);
							}
						}
					}
				}
				break;
			case 3:
				if (!__LIB_6__::func_702(524288))
				{
					bVar0 = true;
				}
				if (iLocal_26 == 1)
				{
					if (__LIB_2__::func_227(-5f, 1, 0, 0))
					{
						__LIB_9__::func_744(11);
						return true;
					}
				}
				else if (__LIB_2__::func_227(-2f, 1, 0, 0))
				{
					__LIB_9__::func_744(11);
				}
				break;
			case 11:
				if (!__LIB_6__::func_702(524288))
				{
					bVar0 = true;
				}
				break;
			case 4:
				if (!__LIB_0__::func_75(&(uParam0->f_637)))
				{
					__LIB_1__::func_148(&(uParam0->f_637));
				}
				if ((bParam1 && __LIB_0__::func_266(uParam0->f_9, Global_36, 20f, 1, 1)) && PED::IS_PED_FACING_PED(uParam0->f_9, Global_35, 120f))
				{
					__LIB_0__::func_37(&(uParam0->f_637));
					__LIB_9__::func_744(6);
				}
				if (__LIB_0__::func_265(&(uParam0->f_637)) > 9f)
				{
					__LIB_0__::func_37(&(uParam0->f_637));
					__LIB_9__::func_744(5);
				}
				break;
			case 5:
				if (!__LIB_0__::func_75(&(uParam0->f_637)))
				{
					__LIB_1__::func_148(&(uParam0->f_637));
				}
				if (__LIB_0__::func_265(&(uParam0->f_637)) > 9f || ((bParam1 && __LIB_0__::func_266(uParam0->f_9, Global_36, 20f, 1, 1)) && PED::IS_PED_FACING_PED(uParam0->f_9, Global_35, 120f)))
				{
					__LIB_0__::func_37(&(uParam0->f_637));
					__LIB_9__::func_744(6);
				}
				break;
			case 6:
				if (__LIB_2__::func_227(-2f, 1, 0, 0))
				{
					func_112(&Local_51, iLocal_24, 1);
					__LIB_9__::func_744(1);
					__LIB_0__::func_37(&(uParam0->f_637));
					func_113(&Local_51, 131072);
				}
				break;
			case 7:
				if (__LIB_1__::func_200(37))
				{
					func_112(&Local_51, iLocal_24, 1);
					__LIB_9__::func_744(1);
					func_113(&Local_51, 131072);
				}
				else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("COACHROBBERIES_GANG2")) > 0)
				{
				}
				else
				{
					if (!__LIB_0__::func_75(&(uParam0->f_637)))
					{
						__LIB_1__::func_148(&(uParam0->f_637));
					}
					if ((bParam1 && __LIB_0__::func_266(uParam0->f_9, Global_36, 20f, 1, 1)) && PED::IS_PED_FACING_PED(uParam0->f_9, Global_35, 120f))
					{
						__LIB_1__::func_148(&(uParam0->f_637));
						__LIB_9__::func_744(9);
					}
					if (__LIB_0__::func_265(&(uParam0->f_637)) > 9f)
					{
						__LIB_1__::func_148(&(uParam0->f_637));
						__LIB_9__::func_744(8);
					}
				}
				break;
			case 8:
				if (!__LIB_0__::func_75(&(uParam0->f_637)))
				{
					__LIB_1__::func_148(&(uParam0->f_637));
				}
				if (__LIB_0__::func_265(&(uParam0->f_637)) > 9f || ((bParam1 && __LIB_0__::func_266(uParam0->f_9, Global_36, 20f, 1, 1)) && PED::IS_PED_FACING_PED(uParam0->f_9, Global_35, 120f)))
				{
					__LIB_1__::func_148(&(uParam0->f_637));
					__LIB_9__::func_744(9);
				}
				break;
			case 9:
				func_112(&Local_51, iLocal_24, 1);
				__LIB_9__::func_744(1);
				__LIB_0__::func_37(&(uParam0->f_637));
				__LIB_0__::func_325(&(uParam0->f_9.f_5));
				__LIB_0__::func_325(&(uParam0->f_174.f_5));
				break;
		}
	}
	if (bVar0 && !uParam0->f_630)
	{
		if (__LIB_0__::func_272(uParam0->f_9, 0))
		{
			if (!TASK::_0x508F5053E3F6F0C4(uParam0->f_9, Global_36, 2f))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_9, Global_35, -1, 0, 41, 0);
			}
		}
		if (__LIB_0__::func_272(uParam0->f_174, 0))
		{
			if (!TASK::_0x508F5053E3F6F0C4(uParam0->f_174, Global_36, 2f))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_174, Global_35, -1, 0, 41, 1);
			}
		}
		func_933(uParam0);
		func_934(uParam0);
	}
	if (bVar1)
	{
		if (__LIB_0__::func_272(Global_1392388.f_3, 0))
		{
			if (__LIB_0__::func_272(uParam0->f_9, 0))
			{
				if (!TASK::_0x508F5053E3F6F0C4(uParam0->f_9, ENTITY::GET_ENTITY_COORDS(Global_1392388.f_3, true, false), 2f))
				{
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_9, Global_1392388.f_3, -1, 0, 41, 1);
				}
			}
			if (__LIB_0__::func_272(uParam0->f_174, 0))
			{
				if (!TASK::_0x508F5053E3F6F0C4(uParam0->f_174, ENTITY::GET_ENTITY_COORDS(Global_1392388.f_3, true, false), 2f))
				{
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_174, Global_1392388.f_3, -1, 0, 41, 1);
				}
			}
			func_931(uParam0);
		}
	}
	return false;
}

bool func_607(var uParam0, bool bParam1)
{
	if (iLocal_25 == 5)
	{
		if (__LIB_0__::func_94(uParam0->f_1, Global_36, 1) < 60f)
		{
			return true;
		}
	}
	else if (iLocal_25 == 2)
	{
		if (__LIB_0__::func_94(uParam0->f_1, Global_36, 1) < 60f && bParam1)
		{
			return true;
		}
	}
	return false;
}

void func_608(var uParam0, int iParam1)
{
	if (func_609(iParam1))
	{
		__LIB_2__::func_813(uParam0, func_936(iParam1), 0, -1, 0, 0);
	}
}

bool func_609(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 6)
	{
		return true;
	}
	return false;
}

bool func_610()
{
	if (__LIB_6__::func_702(8))
	{
		return true;
	}
	return false;
}

float func_611(int iParam0)
{
	if (iParam0 == 12)
	{
		return 30f;
	}
	return 15f;
}

bool func_613(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_9, Global_35, 1, 1))
	{
		return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_174, Global_35, 1, 1))
	{
		return true;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_499)
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_410[iVar1 /*22*/], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_410[iVar1 /*22*/].f_7, Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_410[iVar1 /*22*/].f_7, __LIB_0__::func_398(7), 1, 1))
		{
			fVar0 = __LIB_0__::func_665(uParam0->f_410[iVar1 /*22*/], uParam0->f_1, 1, 1);
			if (fVar0 < (200f - 30f))
			{
				return true;
			}
			else if (!func_15(&Local_51, 8))
			{
				func_924(uParam0);
				func_4(&Local_51, 8);
			}
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < uParam0->f_523)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_500[iVar2 /*11*/], Global_35, 1, 1))
		{
			return true;
		}
		iVar2++;
	}
	return false;
}

bool func_614(int iParam0)
{
	vector3 vVar0;
	if (func_609(iParam0))
	{
		vVar0 = { func_936(iParam0) };
		if (__LIB_10__::func_456(&vVar0))
		{
			return true;
		}
	}
	return false;
}

void func_616(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_328(&(uParam0->f_25[iVar0 /*679*/]));
		iVar0++;
	}
}

void func_617(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_536(&(uParam0->f_25[iVar0 /*679*/]), Global_35);
		iVar0++;
	}
}

void func_618(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_940(&(uParam0->f_25[iVar0 /*679*/].f_174), Global_35);
		iVar0++;
	}
}

void func_619(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_25[iVar0 /*679*/].f_540)
		{
			func_941(&(uParam0->f_25[iVar0 /*679*/].f_524[iVar1 /*15*/]));
			iVar1++;
		}
		iVar0++;
	}
}

void func_628()
{
	if (bLocal_2532)
	{
		return;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_51.f_2402, -1))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_51.f_2404, "MONEYBOX", Local_51.f_2402);
	}
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_51.f_2402, Global_35, true);
	ENTITY::_0x9587913B9E772D29(Local_51.f_2402, 0);
	func_950(joaat("S_LOOTABLEMONEYBOX"), ENTITY::GET_ENTITY_COORDS(Local_51.f_2402, true, false), &(Local_51.f_2402), 1f, 0, 0);
	ENTITY::FREEZE_ENTITY_POSITION(Local_51.f_2402, true);
	__LIB_6__::func_694(&(Local_51.f_2422), ENTITY::GET_ENTITY_COORDS(Local_51.f_2402, true, false), 0.5f, 2, -1, 0);
	bLocal_2532 = true;
}

bool func_629()
{
	vector3 vVar0;
	int iVar10;
	if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_2402))
	{
		if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0 && __LIB_0__::func_94(Local_51.f_2402, Global_36, 1) < 2f)
		{
			iVar10 = 0;
			while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
			{
				if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar10) == -1730772208)
				{
					if (SCRIPTS::GET_EVENT_DATA(0, iVar10, &vVar0, 10))
					{
						if (vVar0.z == joaat("MONEY_BILLSTACK") || vVar0.z == joaat("MONEY_MONEYCLIP"))
						{
							return true;
						}
					}
				}
				iVar10++;
			}
		}
	}
	return false;
}

bool func_666(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_666(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_9__::func_717(28);
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
			__LIB_1__::func_833(iParam0);
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
			__LIB_4__::func_129(iParam0);
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
			__LIB_4__::func_130(iParam0, 0, 0, 0);
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
						func_666(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_666(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_666(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_666(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_666(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_666(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_666(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_9__::func_717(24);
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
					func_666(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_666(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_9__::func_725(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_18__::func_207(iParam0);
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
				func_666(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_668()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1065();
	func_1066();
	func_1067();
	func_1068();
	func_1069();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_669(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_413(iParam0, 1, 1, -142743235, 1);
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

void func_706()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1106(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_742(int iParam0, char* sParam1, var uParam2, bool bParam3, var uParam4, bool bParam5)
{
	int iVar0;
	if (!__LIB_0__::func_272(iParam0, 1))
	{
		return;
	}
	if (bParam5)
	{
		iVar0 = 8;
	}
	else
	{
		iVar0 = 1032;
	}
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(iParam0, sParam1, uParam2, 0, iVar0, -1, bParam5);
}

int func_744(struct<4> Param0, var uParam4, var uParam5)
{
	int iVar0;
	if (Param0.f_3 == 13)
	{
		return joaat("WAGON05X");
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	if (iVar0 == 3)
	{
		return joaat("OILWAGON02X");
	}
	return joaat("WAGON05X");
}

int func_746()
{
	int iVar0;
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			iVar0 = joaat("HORSE_CLASS_RIDING");
			break;
		case 1:
			iVar0 = joaat("HORSE_CLASS_RACE");
			break;
		case 2:
			iVar0 = joaat("HORSE_CLASS_WAR");
			break;
		case 3:
			iVar0 = joaat("HORSE_CLASS_WORK");
			break;
	}
	return __LIB_2__::func_44(iVar0, 1);
}

bool func_822(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam1, iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if (PED::IS_PED_FACING_PED(iVar1, iParam0, 45f) && __LIB_1__::func_348(iVar1, iParam0) < 4f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_823(int iParam0)
{
	var uVar0;
	if ((((iLocal_49 == 3 || iLocal_49 == 5) || iLocal_49 == 6) || iLocal_49 == 7) || iLocal_49 == 8)
	{
		if (__LIB_0__::func_94(iParam0, Global_36, 1) > 150f)
		{
			if (!__LIB_13__::func_95(iParam0, 0, &(Local_51.f_2069), &uVar0, 0, 0))
			{
				return true;
			}
		}
	}
	else if (iLocal_49 == 9)
	{
		if (!__LIB_13__::func_95(iParam0, 0, &(Local_51.f_2069), &uVar0, 0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_826(int* iParam0, int iParam1, bool bParam2)
{
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
	{
		PED::_0x802092B07E3B1EEA(*iParam0, Global_36, 3);
	}
	if (bParam2)
	{
		func_1209(*iParam0, 0, 0, 0);
	}
	else
	{
		TASK::TASK_COMBAT_HATED_TARGETS(*iParam0, -1f);
	}
}

void func_827(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	float fVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return;
	}
	iVar0 = func_1210(iParam2, iParam3);
	TASK::WAYPOINT_RECORDING_GET_COORD(func_194(iParam3), iVar0, &vVar1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &uVar4, false))
	{
		vVar1.f_2 = uVar4;
	}
	fVar5 = func_580(func_194(iParam3), vVar1);
	if (!__LIB_0__::func_272(uParam1->f_7, 0))
	{
		uParam1->f_7 = __LIB_1__::func_545(uParam1->f_8, vVar1, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	}
	if (!__LIB_0__::func_272(uParam1->f_7, 0))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_7, false);
	PED::SET_PED_CAN_BE_TARGETTED(uParam1->f_7, false);
	PED::SET_PED_CONFIG_FLAG(uParam1->f_7, 145, true);
	if (__LIB_1__::func_200(129))
	{
		PED::SET_PED_CONFIG_FLAG(uParam1->f_7, 6, true);
	}
	ENTITY::SET_ENTITY_LOD_DIST(uParam1->f_7, 300);
}

void func_828(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return;
	}
	TASK::WAYPOINT_RECORDING_GET_COORD(func_194(iParam4), 1, &vVar0);
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		*uParam1 = __LIB_1__::func_545(uParam1->f_1, vVar0, 0, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			__LIB_0__::func_862(*uParam1, uParam1->f_2);
		}
	}
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, iParam3);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam1, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam1, true, true);
	func_900(*uParam1, uParam1->f_9, -1, 3, 0, 0.9f, 1065353216 /* Float: 1f */, 0);
	func_911(*uParam1);
	if (func_15(uParam2, 65536))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, joaat("REL_COP"));
		LAW::_0x819ADD5EF1742F47(*uParam1, 7);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	}
	if (__LIB_1__::func_200(129))
	{
		PED::SET_PED_CONFIG_FLAG(*uParam1, 6, true);
	}
	if (__LIB_0__::func_272(uParam1->f_7, 0))
	{
		PED::_SET_PED_ON_MOUNT(*uParam1, uParam1->f_7, -1, true);
	}
	ENTITY::_0x18FF3110CF47115D(*uParam1, 1, 0);
	ENTITY::SET_ENTITY_LOD_DIST(*uParam1, 300);
	PED::SET_PED_SHOOT_RATE(*uParam1, 90);
	PED::SET_PED_COMBAT_ABILITY(*uParam1, 2);
	PED::SET_PED_ACCURACY(*uParam1, 40);
	CAM::_0x986F7A51EE3E1F92(*uParam1, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*uParam1, "Robberies_Coach_Target_Group", 0f);
}

float func_829()
{
	if (iLocal_25 == 0)
	{
		return 30f;
	}
	return 30f;
}

Vector3 func_830(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.8f, 0f, 0f;
		case 1:
			return 0.4f, 0f, 0f;
		case 2:
			return -1.5f, 0f, 0f;
		case 3:
			return 1.5f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_832(int iParam0)
{
	vector3 vVar0;
	int iVar3[2];
	int iVar6;
	vVar0 = { -1095.983f, -564.3661f, 81.0114f };
	iVar6 = -1;
	if (func_15(&Local_51, 16777216))
	{
		func_98();
	}
	else if (iLocal_49 < 10)
	{
		if (!AUDIO::_0xFE5C6177064BD390(1) && VEHICLE::IS_VEHICLE_STOPPED(Local_51.f_25[iParam0 /*679*/].f_1))
		{
			if (Local_51.f_2413 >= 2)
			{
				func_4(&Local_51, 16777216);
			}
		}
	}
	if (Local_51.f_2413 < 4)
	{
		if ((__LIB_6__::func_702(1) || Local_51.f_25[iParam0 /*679*/].f_9.f_164 == 9) || Local_51.f_25[iParam0 /*679*/].f_9.f_164 == 11)
		{
			Local_51.f_2413 = 4;
		}
	}
	switch (Local_51.f_2413)
	{
		case 0:
			if (iLocal_49 >= 3)
			{
				__LIB_1__::func_148(&(Local_51.f_2203));
				Local_51.f_2413 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&(Local_51.f_2203)) > 10f || (__LIB_0__::func_265(&(Local_51.f_2203)) > 3f && __LIB_0__::func_94(Local_51.f_25[iParam0 /*679*/].f_1, Global_36, 1) < 5f))
			{
				if (!AUDIO::_0xFE5C6177064BD390(1))
				{
					if (__LIB_0__::func_94(Local_51.f_25[iParam0 /*679*/].f_1, Global_36, 1) < 30f)
					{
						if (func_97(&(Local_51.f_2286), iLocal_25, 54))
						{
							__LIB_1__::func_148(&(Local_51.f_2203));
							Local_51.f_2413 = 2;
						}
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&(Local_51.f_2203)) > 17f)
			{
				if (!AUDIO::_0xFE5C6177064BD390(1))
				{
					if (__LIB_0__::func_94(Local_51.f_25[iParam0 /*679*/].f_1, Global_36, 1) < 30f)
					{
						if (func_97(&(Local_51.f_2286), iLocal_25, 55))
						{
							__LIB_1__::func_148(&(Local_51.f_2203));
							Local_51.f_2413 = 3;
						}
					}
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&(Local_51.f_2203)) > 20f)
			{
				if (!AUDIO::_0xFE5C6177064BD390(1))
				{
					if (__LIB_0__::func_94(Local_51.f_25[iParam0 /*679*/].f_1, Global_36, 1) < 30f)
					{
						if (func_97(&(Local_51.f_2286), iLocal_25, 56))
						{
							__LIB_1__::func_148(&(Local_51.f_2203));
							Local_51.f_2413 = 4;
						}
					}
				}
			}
			break;
	}
	if (((__LIB_0__::func_665(Global_35, Local_51.f_25[iParam0 /*679*/].f_9, 1, 1) < 30f && !bLocal_2527) && (func_1237(iParam0) || iLocal_2528)) && !__LIB_6__::func_702(1))
	{
		if (!AUDIO::_0xFE5C6177064BD390(1))
		{
			func_97(&(Local_51.f_2286), iLocal_25, 83);
			bLocal_2527 = true;
		}
	}
	if ((((((iLocal_49 != 3 && iLocal_49 != 4) && iLocal_49 != 5) && iLocal_49 != 6) && iLocal_49 != 7) && iLocal_49 != 8) && iLocal_49 != 9)
	{
		if (__LIB_6__::func_702(1))
		{
			return 0;
		}
	}
	switch (iLocal_49)
	{
		case 0:
			func_101(&Local_51);
			__LIB_6__::func_705(524288);
			__LIB_6__::func_705(4194304);
			__LIB_6__::func_830(iLocal_25, "CR_O_ROBCOACH", 1);
			iLocal_49 = 1;
			break;
		case 1:
			if (!TASK::_0x508F5053E3F6F0C4(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], ENTITY::GET_ENTITY_COORDS(Local_51.f_25[iParam0 /*679*/].f_9, true, false), 1f))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], Local_51.f_25[iParam0 /*679*/].f_9, -1, 3120, 51, 1);
			}
			if (!TASK::_0x508F5053E3F6F0C4(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], ENTITY::GET_ENTITY_COORDS(Local_51.f_25[iParam0 /*679*/].f_9, true, false), 1f))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], Local_51.f_25[iParam0 /*679*/].f_9, -1, 3120, 51, 1);
			}
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				__LIB_1__::func_148(&(Local_51.f_2194));
				iLocal_49 = 2;
			}
			break;
		case 2:
			if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], -1665583462))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_2(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], vVar0, 20f, 2.5f, 0, 0);
				TASK::TASK_CLEAR_LOOK_AT(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/]);
			}
			if (__LIB_0__::func_265(&(Local_51.f_2194)) > 0.8f)
			{
				iLocal_49 = 3;
			}
			break;
		case 3:
			if (!Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/].f_15)
			{
				if (__LIB_0__::func_94(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], vVar0, 1) > 50f && __LIB_0__::func_665(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], Local_51.f_25[iParam0 /*679*/].f_1, 1, 1) < 200f)
				{
					if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], -1665583462))
					{
						TASK::_TASK_MOVE_IN_TRAFFIC_2(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], vVar0, 20f, 2.5f, 0, 0);
						TASK::TASK_CLEAR_LOOK_AT(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/]);
					}
				}
				else
				{
					if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], -982327190))
					{
						TASK::TASK_STAND_STILL(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], -1);
					}
					iVar3[0] = 1;
				}
			}
			if (!Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/].f_15)
			{
				if (__LIB_0__::func_94(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], vVar0, 1) > 50f && __LIB_0__::func_665(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], Local_51.f_25[iParam0 /*679*/].f_1, 1, 1) < 200f)
				{
					if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], -1665583462))
					{
						TASK::_TASK_MOVE_IN_TRAFFIC_2(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], vVar0, 20f, 2.5f, 0, 0);
						TASK::TASK_CLEAR_LOOK_AT(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/]);
					}
				}
				else
				{
					if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], -982327190))
					{
						TASK::TASK_STAND_STILL(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], -1);
					}
					iVar3[1] = 1;
				}
			}
			if (func_1238(iParam0))
			{
				iLocal_49 = 16;
				return 1;
			}
			if (iVar3[0] && iVar3[1])
			{
				__LIB_1__::func_148(&uLocal_2479);
				iLocal_49 = 4;
			}
			break;
		case 4:
			if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], -2015108952))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], -1, 5f, 0f, 1.5f, 0);
			}
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				if (__LIB_0__::func_265(&uLocal_2479) > 15f || __LIB_0__::func_94(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], Global_36, 1) < 20f)
				{
					if (__LIB_0__::func_94(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], Global_36, 1) < 20f)
					{
						func_97(&(Local_51.f_2286), iLocal_25, 50);
					}
					iLocal_49 = 5;
				}
			}
			if (func_1238(iParam0))
			{
				iLocal_49 = 16;
				return 1;
			}
			break;
		case 5:
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				PED::SET_PED_CONFIG_FLAG(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], 297, true);
				__LIB_3__::func_157(&(Local_2488[0 /*17*/]), "CR_ILO_TRICK", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				iLocal_49 = 6;
				__LIB_1__::func_148(&uLocal_2479);
			}
			if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], -2015108952))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], -1, 5f, 0f, 1.5f, 0);
			}
			if (func_1238(iParam0))
			{
				iLocal_49 = 16;
				return 1;
			}
			break;
		case 6:
			if (__LIB_0__::func_265(&uLocal_2479) > 10f)
			{
				__LIB_2__::func_624(&Local_2488, 1, 1, 1, 0);
				__LIB_2__::func_344(&(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/]));
				iLocal_49 = 7;
			}
			iVar6 = func_523(&(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/]), &iLocal_2506, 8f, &Local_2488, 0f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (iVar6 == 0)
			{
				__LIB_2__::func_624(&Local_2488, 1, 1, 1, 0);
				__LIB_2__::func_344(&(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/]));
				TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], Global_35, -1, 0, 51, 0);
				TASK::TASK_LOOK_AT_ENTITY(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], Global_35, -1, 0, 51, 0);
				if (!AUDIO::_0xFE5C6177064BD390(1))
				{
					func_97(&(Local_51.f_2286), iLocal_25, 82);
				}
				iLocal_2528 = 1;
				iLocal_49 = 8;
			}
			if (func_1238(iParam0))
			{
				iLocal_49 = 16;
				__LIB_2__::func_624(&Local_2488, 1, 1, 1, 0);
				__LIB_2__::func_344(&(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/]));
				return 1;
			}
			break;
		case 8:
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/]);
				TASK::TASK_CLEAR_LOOK_AT(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/]);
				iLocal_49 = 7;
			}
			if (func_1238(iParam0))
			{
				iLocal_49 = 16;
				return 1;
			}
			break;
		case 7:
			if (!Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/].f_15)
			{
				if (__LIB_0__::func_94(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], vVar0, 1) > 50f)
				{
					if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], -1665583462))
					{
						TASK::_TASK_MOVE_IN_TRAFFIC_2(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], vVar0, 20f, 2.5f, 0, 0);
						TASK::TASK_CLEAR_LOOK_AT(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/]);
					}
				}
				else
				{
					if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], -982327190))
					{
						TASK::TASK_STAND_STILL(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], -1);
					}
					iVar3[0] = 1;
				}
			}
			if (!Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/].f_15)
			{
				if (__LIB_0__::func_94(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], vVar0, 1) > 50f)
				{
					if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], -1665583462))
					{
						TASK::_TASK_MOVE_IN_TRAFFIC_2(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], vVar0, 20f, 2.5f, 0, 0);
						TASK::TASK_CLEAR_LOOK_AT(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/]);
					}
				}
				else
				{
					if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], -982327190))
					{
						TASK::TASK_STAND_STILL(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], -1);
					}
					iVar3[1] = 1;
				}
			}
			if (func_1238(iParam0))
			{
				iLocal_49 = 16;
				return 1;
			}
			if (iVar3[0] && iVar3[1])
			{
				__LIB_1__::func_148(&(Local_51.f_2194));
				iLocal_49 = 9;
			}
			break;
		case 9:
			if (__LIB_0__::func_265(&(Local_51.f_2194)) > 4f)
			{
				if (!Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/].f_15)
				{
					if (__LIB_0__::func_94(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], ENTITY::GET_ENTITY_COORDS(Local_51.f_25[iParam0 /*679*/].f_1, true, false), 1) > 35f)
					{
						if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], -1665583462))
						{
							TASK::_TASK_MOVE_IN_TRAFFIC_2(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], ENTITY::GET_ENTITY_COORDS(Local_51.f_25[iParam0 /*679*/].f_1, true, false), 20f, 2.5f, 0, 0);
							TASK::TASK_CLEAR_LOOK_AT(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/]);
						}
					}
					else
					{
						if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], -982327190))
						{
							TASK::TASK_STAND_STILL(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/], -1);
						}
						iVar3[0] = 1;
					}
				}
				if (!Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/].f_15)
				{
					if (__LIB_0__::func_94(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], ENTITY::GET_ENTITY_COORDS(Local_51.f_25[iParam0 /*679*/].f_1, true, false), 1) > 31f)
					{
						if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], -1665583462))
						{
							TASK::_TASK_MOVE_IN_TRAFFIC_2(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], ENTITY::GET_ENTITY_COORDS(Local_51.f_25[iParam0 /*679*/].f_1, true, false), 20f, 2.5f, 0, 0);
							TASK::TASK_CLEAR_LOOK_AT(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/]);
						}
					}
					else
					{
						if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], -982327190))
						{
							TASK::TASK_STAND_STILL(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/], -1);
						}
						iVar3[1] = 1;
					}
				}
			}
			if (func_1238(iParam0))
			{
				iLocal_49 = 16;
				return 1;
			}
			if (iVar3[0] && iVar3[1])
			{
				if (__LIB_6__::func_702(1))
				{
					iLocal_49 = 16;
					return 1;
				}
				else if (func_97(&(Local_51.f_2286), iLocal_25, 38))
				{
					if (PED::IS_PED_IN_GROUP(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/]))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/]);
					}
					if (PED::IS_PED_IN_GROUP(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/]))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/]);
					}
					if (PED::DOES_GROUP_EXIST(Local_51.f_2421))
					{
						PED::REMOVE_GROUP(Local_51.f_2421);
					}
					iLocal_49 = 10;
				}
			}
			break;
		case 10:
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_51.f_25[iParam0 /*679*/].f_174, Local_51.f_25[iParam0 /*679*/].f_1, true))
				{
					if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_174, -1794415470))
					{
						func_113(&Local_51, 16777216);
						TASK::TASK_ENTER_VEHICLE(Local_51.f_25[iParam0 /*679*/].f_174, Local_51.f_25[iParam0 /*679*/].f_1, -1, Local_51.f_25[iParam0 /*679*/].f_677, 2f, 1, 0);
					}
				}
				if (PED::IS_PED_IN_VEHICLE(Local_51.f_25[iParam0 /*679*/].f_174, Local_51.f_25[iParam0 /*679*/].f_1, false))
				{
					__LIB_6__::func_704(524288);
					func_112(&Local_51, iLocal_24, 0);
					iLocal_49 = 16;
				}
			}
			break;
		case 16:
			return 1;
	}
	return 0;
}

int func_833(int iParam0)
{
	int iVar0;
	if (__LIB_6__::func_702(1))
	{
		return 0;
	}
	if (Local_51.f_25[iParam0 /*679*/].f_9.f_164 == 11 || Local_51.f_25[iParam0 /*679*/].f_9.f_164 == 9)
	{
		if (func_111(iLocal_25, 38))
		{
			func_381(iLocal_25, 38, 0);
		}
		else if (func_111(iLocal_25, 37))
		{
			func_381(iLocal_25, 37, 0);
		}
		return 0;
	}
	switch (iLocal_49)
	{
		case 0:
			func_101(&Local_51);
			__LIB_6__::func_705(524288);
			__LIB_6__::func_830(iLocal_25, "CR_O_STEALC", 1);
			iLocal_49 = 1;
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_STOPPED(Local_51.f_25[iParam0 /*679*/].f_1))
			{
				PED::_0xAAB050DA48B57978(Local_51.f_25[iParam0 /*679*/].f_500[0 /*11*/], "Default_Curious", 0, -1, 4);
				VEHICLE::_0x3053064F909B5F42(Local_51.f_25[iParam0 /*679*/].f_1, 1);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_51.f_25[iParam0 /*679*/].f_500[0 /*11*/], false);
				TASK::TASK_LOOK_AT_COORD(Local_51.f_25[iParam0 /*679*/].f_500[0 /*11*/], ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_51.f_25[iParam0 /*679*/].f_1, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_51.f_25[iParam0 /*679*/].f_1, "wheel_lr")), -1, 1072, 51, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51.f_25[iParam0 /*679*/].f_1, -2f, -2f, 0f), 1f, -1, 0.75f, 1, 40000f);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51.f_25[iParam0 /*679*/].f_1, -2.2f, -1.5f, 0f), 1f, -1, (ENTITY::GET_ENTITY_HEADING(Local_51.f_25[iParam0 /*679*/].f_1) - 80f), 1056964608 /* Float: 0.5f */, 0);
				TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_STARE_STOIC"), 7000, true, 0, -1f, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_51.f_25[iParam0 /*679*/].f_500[0 /*11*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				__LIB_1__::func_148(&(Local_51.f_2194));
				iLocal_49 = 2;
			}
			break;
		case 2:
			if (PED::IS_PED_USING_ANY_SCENARIO(Local_51.f_25[iParam0 /*679*/].f_500[0 /*11*/]) || !__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_500[0 /*11*/], 242628503))
			{
				__LIB_1__::func_148(&(Local_51.f_2194));
				iLocal_49 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&(Local_51.f_2194)) > 6f)
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 38))
				{
					__LIB_1__::func_148(&(Local_51.f_2194));
					iLocal_49 = 14;
				}
			}
			break;
		case 9:
			if (__LIB_0__::func_265(&(Local_51.f_2194)) > 5f)
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_51.f_25[iParam0 /*679*/].f_174, false);
				TASK::TASK_LOOK_AT_COORD(Local_51.f_25[iParam0 /*679*/].f_174, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_51.f_25[iParam0 /*679*/].f_1, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_51.f_25[iParam0 /*679*/].f_1, "wheel_lr")), -1, 0, 51, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51.f_25[iParam0 /*679*/].f_1, -2f, 0f, 0f), 1f, -1, 0.5f, 0, (ENTITY::GET_ENTITY_HEADING(Local_51.f_25[iParam0 /*679*/].f_1) - 135f));
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_51.f_25[iParam0 /*679*/].f_1, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_51.f_25[iParam0 /*679*/].f_1, "wheel_lr")), 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_51.f_25[iParam0 /*679*/].f_174, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				__LIB_1__::func_148(&(Local_51.f_2194));
				iLocal_49 = 10;
			}
			break;
		case 10:
			if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_174, 242628503))
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(Local_51.f_25[iParam0 /*679*/].f_174, joaat("WORLD_HUMAN_INSPECT"), 0, true, 0, -1f, false);
				__LIB_1__::func_148(&(Local_51.f_2194));
				iLocal_49 = 11;
			}
			break;
		case 11:
			if (__LIB_0__::func_265(&(Local_51.f_2194)) > 8f)
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 40))
				{
					__LIB_1__::func_148(&(Local_51.f_2194));
					iLocal_49 = 12;
				}
			}
			break;
		case 12:
			if (__LIB_0__::func_265(&(Local_51.f_2194)) > 5f)
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 36))
				{
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_51.f_25[iParam0 /*679*/].f_9, false);
					TASK::TASK_LOOK_AT_COORD(Local_51.f_25[iParam0 /*679*/].f_9, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_51.f_25[iParam0 /*679*/].f_1, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_51.f_25[iParam0 /*679*/].f_1, "wheel_lr")), -1, 0, 51, 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51.f_25[iParam0 /*679*/].f_1, -2.8f, 0f, 0f), 1f, -1, 0.5f, 0, (ENTITY::GET_ENTITY_HEADING(Local_51.f_25[iParam0 /*679*/].f_1) - 125f));
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_51.f_25[iParam0 /*679*/].f_1, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_51.f_25[iParam0 /*679*/].f_1, "wheel_lr")), 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_51.f_25[iParam0 /*679*/].f_9, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					__LIB_1__::func_148(&(Local_51.f_2194));
					iLocal_49 = 13;
				}
			}
			break;
		case 13:
			if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_9, 242628503))
			{
				__LIB_1__::func_148(&(Local_51.f_2194));
				iLocal_49 = 14;
			}
			break;
		case 14:
			if (!__LIB_5__::func_236(1))
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 37))
				{
					__LIB_1__::func_148(&(Local_51.f_2194));
					iLocal_49 = 15;
				}
			}
			break;
		case 15:
			if (!PED::IS_PED_IN_VEHICLE(Local_51.f_25[iParam0 /*679*/].f_9, Local_51.f_25[iParam0 /*679*/].f_1, true))
			{
				if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_9, -1794415470))
				{
					TASK::TASK_ENTER_VEHICLE(Local_51.f_25[iParam0 /*679*/].f_9, Local_51.f_25[iParam0 /*679*/].f_1, -1, Local_51.f_25[iParam0 /*679*/].f_676, 1f, 1, 0);
				}
			}
			if (__LIB_0__::func_265(&(Local_51.f_2194)) > 8f)
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_51.f_25[iParam0 /*679*/].f_174, Local_51.f_25[iParam0 /*679*/].f_1, true))
				{
					if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_174, -1794415470))
					{
						TASK::TASK_ENTER_VEHICLE(Local_51.f_25[iParam0 /*679*/].f_174, Local_51.f_25[iParam0 /*679*/].f_1, -1, Local_51.f_25[iParam0 /*679*/].f_677, 1f, 1, 0);
					}
				}
			}
			if (__LIB_0__::func_265(&(Local_51.f_2194)) > 3f)
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_51.f_25[iParam0 /*679*/].f_500[0 /*11*/], Local_51.f_25[iParam0 /*679*/].f_1, true))
				{
					if (!__LIB_0__::func_163(Local_51.f_25[iParam0 /*679*/].f_500[0 /*11*/], -1794415470))
					{
						PED::_0x935CF6E42BAF7F4D(Local_51.f_25[iParam0 /*679*/].f_500[0 /*11*/]);
						TASK::TASK_CLEAR_LOOK_AT(Local_51.f_25[iParam0 /*679*/].f_500[0 /*11*/]);
						TASK::TASK_ENTER_VEHICLE(Local_51.f_25[iParam0 /*679*/].f_500[0 /*11*/], Local_51.f_25[iParam0 /*679*/].f_1, -1, 1, 1f, 1, 0);
					}
				}
			}
			if ((PED::IS_PED_IN_VEHICLE(Local_51.f_25[iParam0 /*679*/].f_174, Local_51.f_25[iParam0 /*679*/].f_1, false) && PED::IS_PED_IN_VEHICLE(Local_51.f_25[iParam0 /*679*/].f_500[0 /*11*/], Local_51.f_25[iParam0 /*679*/].f_1, false)) && PED::IS_PED_IN_VEHICLE(Local_51.f_25[iParam0 /*679*/].f_9, Local_51.f_25[iParam0 /*679*/].f_1, false))
			{
				VEHICLE::_0x3053064F909B5F42(Local_51.f_25[iParam0 /*679*/].f_1, 0);
				__LIB_6__::func_704(524288);
				func_112(&Local_51, iLocal_24, 0);
				iLocal_49 = 16;
			}
			break;
		case 16:
			return 1;
	}
	return 0;
}

char* func_836()
{
	return "script_proc@robberies@coach@strawberry@trick_driver";
}

bool func_853(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_9__::func_339(Global_35)) || __LIB_9__::func_333(Global_35)) || __LIB_9__::func_337(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_75(&(iParam1->f_13)))
	{
		fVar12 = __LIB_0__::func_265(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_10__::func_370(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_624(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_4__::func_101(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_4__::func_452(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
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
						__LIB_1__::func_148(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_4__::func_101(uParam4, 0, 0);
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

void func_861(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	if (__LIB_0__::func_272(uParam0->f_9, 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		if (__LIB_6__::func_702(1))
		{
			fVar0 = func_195(iParam1);
		}
		else
		{
			fVar0 = func_333(uParam0, iParam1);
		}
		__LIB_1__::func_148(&(uParam0->f_643));
		func_473(uParam0->f_9, uParam0->f_1, func_194(iParam1), fVar0, iParam2);
	}
}

bool func_863(int iParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_864(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(uParam0->f_174, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_677) == uParam0->f_174 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_676) == Global_35)
		{
			if (!__LIB_0__::func_163(uParam0->f_174, 355471868))
			{
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uParam0->f_174, uParam0->f_1);
			}
		}
	}
	switch (uParam0->f_652)
	{
		case 0:
			if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) < 1f)
			{
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(uParam0->f_1, true);
				if (!PED::IS_PED_IN_VEHICLE(Global_35, uParam0->f_1, true))
				{
					func_385(&(uParam0->f_174), uParam0->f_1, 0);
				}
				__LIB_1__::func_148(&(uParam0->f_653));
				uParam0->f_652 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&(uParam0->f_653)) > 0.5f)
			{
				iVar0 = 0;
				while (iVar0 < uParam0->f_523)
				{
					func_164(&(uParam0->f_500[iVar0 /*11*/]), 0);
					iVar0++;
				}
				__LIB_1__::func_148(&(uParam0->f_653));
				uParam0->f_652 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&(uParam0->f_653)) > 0.4f)
			{
				if (__LIB_0__::func_272(uParam0->f_9, 0))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_9, 246, true);
					if (iLocal_25 == 5)
					{
						func_1260(uParam0);
					}
					else
					{
						func_328(uParam0);
					}
				}
				__LIB_1__::func_148(&(uParam0->f_653));
				uParam0->f_652 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&(uParam0->f_653)) > 5f)
			{
				if (!uParam0->f_174.f_72)
				{
					func_385(&(uParam0->f_174), uParam0->f_1, 0);
				}
				uParam0->f_652 = 4;
			}
			break;
		case 4:
			if (PED::_0x5407B7288D0478B7(Global_35, 0) < 3)
			{
				if (__LIB_0__::func_272(uParam0->f_174, 0))
				{
					func_1261(uParam0->f_174);
				}
				else if (__LIB_0__::func_272(uParam0->f_500[0 /*11*/], 0))
				{
					func_1261(uParam0->f_500[0 /*11*/]);
				}
				else if (__LIB_0__::func_272(uParam0->f_500[1 /*11*/], 0))
				{
					func_1261(uParam0->f_500[1 /*11*/]);
				}
				else if (__LIB_0__::func_272(uParam0->f_9, 0))
				{
					func_1261(uParam0->f_9);
				}
				__LIB_1__::func_148(&(uParam0->f_653));
				uParam0->f_652 = 9;
			}
			break;
	}
}

void func_865(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (uParam0->f_652)
	{
		case 0:
			if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) < 1f)
			{
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(uParam0->f_1, true);
				if (!PED::IS_PED_IN_VEHICLE(Global_35, uParam0->f_1, true))
				{
					func_385(&(uParam0->f_174), uParam0->f_1, 0);
				}
				if (__LIB_0__::func_272(uParam0->f_9, 0))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_9, 246, true);
					func_328(uParam0);
				}
				iVar0 = 0;
				while (iVar0 < uParam0->f_523)
				{
					func_164(&(uParam0->f_500[iVar0 /*11*/]), 0);
					iVar0++;
				}
				if (__LIB_0__::func_272(uParam0->f_410[0 /*22*/], 0))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_410[0 /*22*/], 167, false);
					PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_410[0 /*22*/], 3);
					PED::SET_PED_COMBAT_RANGE(uParam0->f_410[0 /*22*/], 2);
					PED::REGISTER_HATED_TARGETS_AROUND_PED(uParam0->f_410[0 /*22*/], 100f);
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					if (__LIB_0__::func_71(uParam0->f_410[0 /*22*/]))
					{
						TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 150f, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_410[0 /*22*/], iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					func_163(&(uParam0->f_410[0 /*22*/]), &(uParam0->f_410[0 /*22*/].f_5), 1, 0, 0);
				}
				if (__LIB_0__::func_272(uParam0->f_410[1 /*22*/], 0))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_410[1 /*22*/], 167, false);
					PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_410[1 /*22*/], 3);
					PED::SET_PED_COMBAT_RANGE(uParam0->f_410[1 /*22*/], 2);
					PED::REGISTER_HATED_TARGETS_AROUND_PED(uParam0->f_410[1 /*22*/], 100f);
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					if (__LIB_0__::func_71(uParam0->f_410[1 /*22*/]))
					{
						TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
					}
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 150f, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar3);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_410[1 /*22*/], iVar3);
					TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					func_163(&(uParam0->f_410[1 /*22*/]), &(uParam0->f_410[1 /*22*/].f_5), 1, 0, 0);
				}
				__LIB_1__::func_148(&(uParam0->f_653));
				uParam0->f_652 = 1;
			}
			break;
		case 1:
			if (Global_1392388.f_9 < 2)
			{
				iVar1 = func_1262();
				if (iVar1 != 0)
				{
					func_1261(iVar1);
				}
				uParam0->f_652 = 9;
			}
			break;
	}
}

void func_866(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	vVar0 = { 1099.67f, -633.5373f, 93.7302f };
	vVar3 = { 1110.308f, -609.5092f, 90.2995f };
	if (!Local_51.f_2396)
	{
		if (Global_1392388.f_9 == 1)
		{
			iVar6 = func_1262();
			if ((((((iVar6 != 0 && __LIB_0__::func_272(iVar6, 0)) && !__LIB_0__::func_71(iVar6)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, false)) && __LIB_0__::func_94(iVar6, Global_36, 1) > 30f) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar6, -1)) && __LIB_6__::func_702(268435456))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 17, true);
				TASK::TASK_SMART_FLEE_PED(iVar6, Global_35, 300f, -1, 0, 1077936128 /* Float: 3f */, 0);
				PED::SET_PED_KEEP_TASK(iVar6, true);
				MAP::_BLIP_REMOVE_MODIFIER(MAP::GET_BLIP_FROM_ENTITY(iVar6), -1034486097);
				uParam0->f_652 = 9;
				Local_51.f_2396 = 1;
			}
		}
	}
	else if (Global_1392388.f_9 == 1)
	{
		iVar7 = func_1262();
		if ((iVar7 != 0 && __LIB_0__::func_272(iVar7, 0)) && __LIB_0__::func_94(iVar7, Global_36, 1) > 60f)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar7);
		}
	}
	switch (uParam0->f_652)
	{
		case 0:
			VEHICLE::SET_VEHICLE_PROVIDES_COVER(uParam0->f_1, true);
			func_328(uParam0);
			if (__LIB_0__::func_272(uParam0->f_500[1 /*11*/], 0))
			{
				PED::SET_PED_COMBAT_RANGE(uParam0->f_500[1 /*11*/], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_500[1 /*11*/], 0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_500[1 /*11*/], true);
				func_164(&(uParam0->f_500[1 /*11*/]), 0);
				func_163(&(uParam0->f_500[1 /*11*/]), &(uParam0->f_500[1 /*11*/].f_5), 1, 0, 0);
			}
			if (__LIB_0__::func_272(uParam0->f_174, 0))
			{
				PED::SET_PED_COMBAT_RANGE(uParam0->f_174, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_174, 2, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_174, 1, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_174, 3, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_174, 0, true);
				func_163(&(uParam0->f_174), &(uParam0->f_174.f_5), 1, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_174, true);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uParam0->f_174, 150f, 0, 0);
			}
			uParam0->f_500[1 /*11*/].f_9 = 1;
			uParam0->f_174.f_72 = 1;
			__LIB_1__::func_148(&(uParam0->f_653));
			uParam0->f_652 = 1;
			break;
		case 1:
			if (__LIB_0__::func_265(&(uParam0->f_653)) > 0.4f)
			{
				if (__LIB_0__::func_272(uParam0->f_410[1 /*22*/], 0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_410[1 /*22*/], 262144, 0, 0, 0, Global_35);
					PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_410[1 /*22*/], 1);
					PED::SET_PED_COMBAT_RANGE(uParam0->f_410[1 /*22*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_410[1 /*22*/], 1, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_410[1 /*22*/], 3, true);
				}
				if (__LIB_0__::func_272(uParam0->f_410[0 /*22*/].f_7, 0))
				{
					TASK::TASK_HORSE_ACTION(uParam0->f_410[0 /*22*/].f_7, 2, uParam0->f_410[0 /*22*/], 0);
				}
				func_164(&(uParam0->f_500[0 /*11*/]), 0);
				__LIB_1__::func_148(&(uParam0->f_653));
				uParam0->f_652 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&(uParam0->f_653)) > 0.3f)
			{
				if (__LIB_0__::func_272(uParam0->f_9, 0))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_9, 1, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_9, 3, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_9, 0, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_9, 12, true);
					PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_9, 1);
					PED::SET_PED_COMBAT_RANGE(uParam0->f_9, 2);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_9, false);
					func_163(&(uParam0->f_9), &(uParam0->f_9.f_5), 1, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uParam0->f_9, 150f, 0, 0);
				}
				__LIB_1__::func_148(&(uParam0->f_653));
				uParam0->f_652 = 3;
			}
			func_1263(uParam0->f_9, vVar0, Global_1392388.f_3, 1, 1077936128 /* Float: 3f */);
			func_1263(uParam0->f_410[1 /*22*/], vVar3, Global_35, 1, 1077936128 /* Float: 3f */);
			func_1263(uParam0->f_174, vVar0, Global_1392388.f_3, 1, 1077936128 /* Float: 3f */);
			break;
		case 3:
			if (__LIB_0__::func_265(&(uParam0->f_653)) > 4f)
			{
				if (__LIB_0__::func_272(uParam0->f_410[0 /*22*/], 0))
				{
					if (PED::IS_PED_ON_MOUNT(uParam0->f_410[0 /*22*/]))
					{
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_410[0 /*22*/], 262144, 0, 0, 0, Global_35);
					}
					PED::SET_PED_COMBAT_RANGE(uParam0->f_410[0 /*22*/], 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_410[0 /*22*/], 1, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_410[0 /*22*/], 3, true);
				}
				__LIB_1__::func_148(&(uParam0->f_653));
				uParam0->f_652 = 4;
			}
			else
			{
				func_1263(uParam0->f_9, vVar0, Global_1392388.f_3, 1, 1077936128 /* Float: 3f */);
				func_1263(uParam0->f_500[1 /*11*/], vVar3, Global_1392388.f_3, 1, 1077936128 /* Float: 3f */);
				func_1263(uParam0->f_174, vVar0, Global_1392388.f_3, 1, 1077936128 /* Float: 3f */);
			}
			break;
		case 4:
			if (__LIB_0__::func_272(uParam0->f_500[1 /*11*/], 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_500[1 /*11*/], false);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uParam0->f_500[1 /*11*/], 150f, 0, 0);
			}
			if (__LIB_0__::func_272(uParam0->f_174, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_174, false);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uParam0->f_174, 150f, 0, 0);
			}
			uParam0->f_652 = 5;
			break;
		case 5:
			if ((((__LIB_0__::func_272(uParam0->f_500[1 /*11*/], 0) && !__LIB_0__::func_272(uParam0->f_500[0 /*11*/], 0)) && !__LIB_0__::func_272(uParam0->f_174, 0)) && !__LIB_0__::func_272(uParam0->f_410[0 /*22*/], 0)) && !__LIB_0__::func_272(uParam0->f_410[1 /*22*/], 0))
			{
				PED::SET_PED_COMBAT_RANGE(uParam0->f_500[1 /*11*/], 0);
				PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_500[1 /*11*/], 2);
				uParam0->f_652 = 9;
			}
			break;
	}
}

void func_867(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { 1516.833f, -2119.48f, 42.5536f };
	vVar3 = { 1528.314f, -2121.788f, 42.8021f };
	vVar6 = { 1506.201f, -2121.028f, 43.693f };
	switch (uParam0->f_652)
	{
		case 0:
			if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1) < 1f)
			{
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(uParam0->f_1, true);
				if (__LIB_0__::func_272(Local_51.f_5[0 /*9*/], 0))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_51.f_5[0 /*9*/], 1, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_51.f_5[0 /*9*/], 3, true);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51.f_5[0 /*9*/], vVar6, 10f, 0, 0, 0);
				}
				if (__LIB_0__::func_272(Local_51.f_5[1 /*9*/], 0))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_51.f_5[1 /*9*/], 1, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_51.f_5[1 /*9*/], 3, true);
					PED::SET_PED_CONFIG_FLAG(Local_51.f_5[1 /*9*/], 246, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_51.f_5[1 /*9*/], 0, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_51.f_5[1 /*9*/], 12, true);
					PED::SET_PED_COMBAT_MOVEMENT(Local_51.f_5[1 /*9*/], 1);
					PED::SET_PED_COMBAT_RANGE(Local_51.f_5[1 /*9*/], 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51.f_5[1 /*9*/], vVar6, 10f, 0, 0, 0);
				}
				if (__LIB_0__::func_272(uParam0->f_174, 0))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_174, 1, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_174, 3, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_174, 0, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_174, 12, true);
					PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_174, 1);
					PED::SET_PED_COMBAT_RANGE(uParam0->f_174, 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(uParam0->f_174, vVar3, 10f, 0, 0, 0);
				}
				__LIB_1__::func_148(&(uParam0->f_653));
				uParam0->f_652 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&(uParam0->f_653)) > 0.5f)
			{
				if (__LIB_0__::func_272(uParam0->f_9, 0))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_9, 246, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_9, 0, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_9, 12, true);
					PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_9, 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(uParam0->f_9, vVar0, 3f, 0, 0, 0);
				}
				__LIB_1__::func_148(&(uParam0->f_653));
				uParam0->f_652 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&(uParam0->f_653)) > 0.7f)
			{
				uParam0->f_652 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&(uParam0->f_653)) > 10f)
			{
				if (__LIB_0__::func_272(Local_51.f_5[1 /*9*/], 0))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_51.f_5[1 /*9*/], false);
					PED::SET_PED_COMBAT_MOVEMENT(Local_51.f_5[1 /*9*/], 2);
					PED::SET_PED_COMBAT_RANGE(Local_51.f_5[1 /*9*/], 0);
				}
				__LIB_1__::func_148(&(uParam0->f_653));
				uParam0->f_652 = 4;
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&(uParam0->f_653)) > 10f)
			{
				if (__LIB_0__::func_272(Local_51.f_5[0 /*9*/], 0))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_51.f_5[0 /*9*/], false);
					PED::SET_PED_COMBAT_MOVEMENT(Local_51.f_5[0 /*9*/], 2);
					PED::SET_PED_COMBAT_RANGE(Local_51.f_5[0 /*9*/], 0);
				}
				__LIB_1__::func_148(&(uParam0->f_653));
				uParam0->f_652 = 5;
			}
			break;
		case 5:
			if (__LIB_0__::func_265(&(uParam0->f_653)) > 8f)
			{
				if (__LIB_0__::func_272(uParam0->f_174, 0))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(uParam0->f_174, false);
					PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_174, 2);
					PED::SET_PED_COMBAT_RANGE(uParam0->f_174, 0);
				}
				__LIB_1__::func_148(&(uParam0->f_653));
				uParam0->f_652 = 6;
			}
			break;
		case 6:
			if (__LIB_0__::func_265(&(uParam0->f_653)) > 5f)
			{
				if (__LIB_0__::func_272(uParam0->f_9, 0))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(uParam0->f_9, false);
					PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_9, 2);
					PED::SET_PED_COMBAT_RANGE(uParam0->f_9, 0);
				}
				__LIB_1__::func_148(&(uParam0->f_653));
				uParam0->f_652 = 9;
			}
			break;
	}
}

int func_870(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1264(iVar1, sParam0, iParam1, iParam2);
		return iVar1;
	}
	return 0;
}

void func_872(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			if (uParam0->f_619 > 10f)
			{
				uParam0->f_619 = 10f;
			}
			break;
		case 2:
			if (uParam0->f_619 > 8f)
			{
				uParam0->f_619 = 8f;
			}
			break;
		case 3:
			if (uParam0->f_619 > 0f)
			{
				uParam0->f_619 = 0f;
			}
			break;
	}
}

void func_876(int iParam0)
{
	int iVar0;
	int iVar1[20];
	int iVar22;
	iVar0 = func_541(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	PED::GET_PED_NEARBY_PEDS(iVar0, &iVar1, -1, -1);
	iVar22 = 0;
	while (iVar22 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1[iVar22]))
		{
			if (!PED::IS_PED_INJURED(iVar1[iVar22]))
			{
				if (((__LIB_8__::func_649(iVar1[iVar22]) && BUILTIN::VDIST(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 30f, 0f), ENTITY::GET_ENTITY_COORDS(iVar1[iVar22], true, false)) < 30f) && !PED::IS_PED_FLEEING(iVar1[iVar22])) && !__LIB_0__::func_163(iVar1[iVar22], 518218985))
				{
					TASK::TASK_SMART_FLEE_COORD(iVar1[iVar22], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 15f, 0f), 200f, -1, false, 1077936128);
					PED::SET_PED_KEEP_TASK(iVar1[iVar22], true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iVar1[iVar22]));
				}
			}
		}
		iVar22++;
	}
}

void func_878(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_656))
	{
		PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), uParam0->f_656);
		OBJECT::DELETE_OBJECT(&(uParam0->f_656));
	}
}

void func_879(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_656))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("SCRIPTEDBALL")))
		{
			uParam0->f_656 = OBJECT::CREATE_OBJECT(joaat("SCRIPTEDBALL"), ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), true, true, false, false, true);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_656, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_656, false, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_656, uParam0->f_1, 0, 0f, 3f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), uParam0->f_656, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 2, 1);
		}
	}
}

char* func_880(var uParam0)
{
	char* sVar0[5];
	vector3 vVar6[5];
	int iVar22;
	int iVar23;
	int iVar24;
	if (iLocal_24 != 8)
	{
		return func_194(iLocal_24);
	}
	if (!__LIB_6__::func_702(2))
	{
		return func_194(iLocal_24);
	}
	switch (iLocal_24)
	{
		case 8:
			iVar22 = 3;
			sVar0[0] = "prc_chrob_comp3_offroad1";
			sVar0[1] = "prc_chrob_comp3_offroad2";
			sVar0[2] = "prc_chrob_comp3_offroad3";
			break;
		case 2:
			iVar22 = 1;
			sVar0[0] = "prc_chrob_straw3_offroad1";
			break;
	}
	switch (iLocal_41)
	{
		case 0:
			iVar23 = 0;
			while (iVar23 < iVar22)
			{
				TASK::REQUEST_WAYPOINT_RECORDING(sVar0[iVar23]);
				iVar23++;
			}
			iLocal_41 = 1;
			break;
		case 1:
			iVar23 = 0;
			while (iVar23 < iVar22)
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sVar0[iVar23]))
				{
					iVar24++;
				}
				iVar23++;
			}
			if (iVar24 == iVar22)
			{
				iLocal_41 = 2;
			}
			break;
		case 2:
			iVar23 = 0;
			while (iVar23 < iVar22)
			{
				if (TASK::WAYPOINT_RECORDING_GET_COORD(sVar0[iVar23], 0, &(vVar6[iVar23 /*3*/])))
				{
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), vVar6[iVar23 /*3*/]) < 20f && __LIB_1__::func_374(uParam0->f_1, vVar6[iVar23 /*3*/], 0))
					{
						Local_51.f_2285 = sVar0[iVar23];
						iLocal_41 = 3;
						return Local_51.f_2285;
					}
				}
				iVar23++;
			}
			break;
		case 3:
			return Local_51.f_2285;
	}
	return func_194(iLocal_24);
}

int func_895(var uParam0)
{
	return uParam0->f_2067;
}

int func_900(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bVar0 = __LIB_0__::func_27(iParam3, 1);
	bVar1 = __LIB_0__::func_27(iParam3, 2);
	bVar2 = !__LIB_0__::func_27(iParam3, 4);
	bVar3 = __LIB_0__::func_27(iParam3, 8);
	bVar4 = !__LIB_0__::func_27(iParam3, 16);
	bVar5 = __LIB_0__::func_27(iParam3, 32);
	bVar6 = __LIB_0__::func_27(iParam3, 64);
	return __LIB_1__::func_766(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, fParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_901(int iParam0)
{
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 12, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 111, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 1);
	PED::SET_PED_KEEP_TASK(iParam0, true);
}

bool func_909()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("COACHROBBERIES_GANG4")) > 0)
	{
		return true;
	}
	return false;
}

Vector3 func_910(int iParam0)
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("COACHROBBERIES_GANG4")) > 0)
	{
		switch (iParam0)
		{
			case 0:
				return 1429.894f, -2245.608f, 42.0677f;
			case 1:
				return 1432.3f, -2249.252f, 42.2208f;
			case 2:
				return 1427.249f, -2249.942f, 41.7828f;
			case 3:
				return 1425.844f, -2248.622f, 41.7429f;
		}
	}
	return 0f, 0f, 0f;
}

void func_911(int iParam0)
{
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, false);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 1);
	ENTITY::_SET_ENTITY_SOMETHING(iParam0, true);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_COMBAT_FLOAT(iParam0, 2, MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 50f));
	PED::SET_PED_FIRING_PATTERN(iParam0, joaat("FIRING_PATTERN_SLOW_SHOT"));
}

void func_914(int iParam0)
{
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 12, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 111, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 1);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_COMBAT_FLOAT(iParam0, 2, MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 50f));
}

bool func_918(var uParam0, var uParam1)
{
	var uVar0;
	if (__LIB_13__::func_95(*uParam0, 0, &(uParam1->f_2069), &uVar0, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_919(var uParam0, var uParam1)
{
	var uVar0;
	if (!__LIB_2__::func_1(*uParam0, 0, 1))
	{
		return false;
	}
	if (__LIB_13__::func_95(*uParam0, 0, &(uParam1->f_2069), &uVar0, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_923(var uParam0, var uParam1)
{
	var uVar0;
	if (func_1289(uParam0, uParam1) || (__LIB_13__::func_95(*uParam0, 0, &(uParam1->f_2069), &uVar0, 0, 0) && !__LIB_6__::func_702(8)))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7) && PED::_GET_RIDER_OF_MOUNT(uParam0->f_7, true) == Global_35)
	{
		return true;
	}
	return false;
}

void func_924(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		func_826(&(uParam0->f_410[iVar0 /*22*/]), iVar0, uParam0->f_613);
		iVar0++;
	}
}

bool func_925(var uParam0, var uParam1)
{
	var uVar0;
	if (__LIB_13__::func_95(*uParam0, 0, &(uParam1->f_2069), &uVar0, 0, 0) && !__LIB_6__::func_702(8))
	{
		return true;
	}
	return false;
}

void func_926(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	if (__LIB_6__::func_702(1) || (!__LIB_6__::func_708(iLocal_25) && !iLocal_25 == 13))
	{
		return;
	}
	if (uParam0->f_1 != Global_1392388.f_5)
	{
		return;
	}
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_194(iLocal_24), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0f, 22f, 0f), &iVar0);
	TASK::WAYPOINT_RECORDING_GET_COORD(func_194(iLocal_24), iVar0, &vVar1);
	if (__LIB_0__::func_86(vVar1))
	{
		return;
	}
	if (iLocal_49 > 0 && iLocal_49 < 16)
	{
		if (__LIB_0__::func_163(uParam0->f_174, -653332088))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_174, true, false);
		}
		return;
	}
	switch (iLocal_48)
	{
		case 0:
			if (!__LIB_6__::func_702(524288))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_51.f_2385) && !PED::IS_PED_ON_MOUNT(Global_35)) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_51.f_2385, true, false), vVar1) < 6f)
				{
					if (bParam1 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_51.f_2385, true, false), Global_36) < 10f)
					{
						func_112(&Local_51, iLocal_24, 1);
						iLocal_48 = 9;
					}
					else
					{
						Local_51.f_2390 = { vVar1 };
						func_101(&Local_51);
						__LIB_6__::func_705(524288);
						__LIB_1__::func_148(&(Local_51.f_2188));
						if (!__LIB_5__::func_236(1) && !Local_51.f_2417)
						{
							func_97(&(Local_51.f_2286), iLocal_25, 26);
							Local_51.f_2417 = 1;
						}
						iLocal_48 = 1;
					}
				}
				else if (func_1290(uParam0->f_1, vVar1, 6f))
				{
					Local_51.f_2390 = { vVar1 };
					func_101(&Local_51);
					__LIB_6__::func_705(524288);
					Local_51.f_2386 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
					__LIB_1__::func_148(&(Local_51.f_2188));
					if (!__LIB_5__::func_236(1) && !Local_51.f_2418)
					{
						func_97(&(Local_51.f_2286), iLocal_25, 27);
						Local_51.f_2418 = 1;
					}
					iLocal_48 = 4;
				}
				else if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar1, 5f) > 0)
				{
					Local_51.f_2390 = { vVar1 };
					func_101(&Local_51);
					__LIB_6__::func_705(524288);
					iLocal_48 = 7;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&(Local_51.f_2188)) > 5f)
			{
				if (__LIB_0__::func_272(uParam0->f_174, 0) && __LIB_0__::func_272(Local_51.f_2385, 0))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_174, 30, true);
					TASK::TASK_SHOOT_AT_COORD(uParam0->f_174, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51.f_2385, 0f, 0f, 2f), -1, joaat("FIRING_PATTERN_FULL_AUTO"), 1);
					TASK::OPEN_SEQUENCE_TASK(&iVar7);
					TASK::TASK_STAND_STILL(0, 1000);
					TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(uParam0->f_174, true, false), 100f, 10000, false, 1077936128);
					TASK::CLOSE_SEQUENCE_TASK(iVar7);
					TASK::TASK_PERFORM_SEQUENCE(Local_51.f_2385, iVar7);
					TASK::CLEAR_SEQUENCE_TASK(&iVar7);
				}
				__LIB_1__::func_148(&(Local_51.f_2188));
				iLocal_48 = 2;
			}
			break;
		case 2:
			if (BUILTIN::VDIST(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_601)) < 2f)
			{
				if (__LIB_0__::func_272(uParam0->f_174, 0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(uParam0->f_174, Global_35, -1, false, 1);
				}
				__LIB_6__::func_705(32768);
			}
			func_1291(uParam0->f_1, vVar1, 6f);
			if ((BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_51.f_2385, true, false), Local_51.f_2390) > 6f && __LIB_0__::func_265(&(Local_51.f_2188)) > 3f) || __LIB_0__::func_265(&(Local_51.f_2188)) > 10f)
			{
				iLocal_48 = 8;
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&(Local_51.f_2188)) > 5f)
			{
				if (__LIB_0__::func_272(uParam0->f_174, 0) && func_1292(uParam0->f_1, vVar1, 6f) > 0)
				{
					vVar4 = { vVar1 };
					vVar4.f_2 = (vVar4.z + 5f);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_174, 30, true);
					TASK::TASK_SHOOT_AT_COORD(uParam0->f_174, vVar4, -1, joaat("FIRING_PATTERN_FULL_AUTO"), 1);
				}
				__LIB_1__::func_148(&(Local_51.f_2188));
				iLocal_48 = 5;
			}
			break;
		case 5:
			if (BUILTIN::VDIST(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_601)) < 2f)
			{
				if (__LIB_0__::func_272(uParam0->f_174, 0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(uParam0->f_174, Global_35, -1, false, 1);
				}
				__LIB_6__::func_705(32768);
			}
			if (!func_1290(uParam0->f_1, vVar1, 6f) && __LIB_0__::func_265(&(Local_51.f_2188)) > 3f)
			{
				iLocal_48 = 8;
			}
			break;
		case 7:
			if (BUILTIN::VDIST(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_601)) < 2f)
			{
				if (__LIB_0__::func_272(uParam0->f_174, 0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(uParam0->f_174, Global_35, -1, false, 1);
				}
				__LIB_6__::func_705(32768);
			}
			if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_51.f_2390, 10f) == 0)
			{
				iLocal_48 = 8;
			}
			break;
		case 8:
			if (__LIB_0__::func_163(uParam0->f_174, -653332088))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_174, true, false);
			}
			__LIB_6__::func_704(524288);
			func_112(&Local_51, iLocal_24, 0);
			iLocal_48 = 0;
			break;
	}
}

bool func_927()
{
	if (((((iLocal_25 == 0 || iLocal_25 == 1) || iLocal_25 == 2) || iLocal_25 == 6) || iLocal_25 == 12) || iLocal_25 == 13)
	{
		return true;
	}
	return false;
}

bool func_928(var uParam0)
{
	return uParam0->f_159;
}

bool func_929(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PED::_IS_PED_HOGTIED(iParam1))
			{
				vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, -4f) };
				vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 17f, 2f) };
				fVar6 = 5f;
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, vVar0, vVar3, fVar6, false, true, 0))
				{
					if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iParam1) < 1.2f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_930(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (__LIB_0__::func_272(uParam0->f_410[iVar0 /*22*/], 1))
		{
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_410[iVar0 /*22*/], uParam1->f_2209, -1, 0, 51, 0);
		}
		iVar0++;
	}
	return 0;
}

int func_931(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (__LIB_0__::func_272(uParam0->f_410[iVar0 /*22*/], 1))
		{
			if (!TASK::_0x508F5053E3F6F0C4(uParam0->f_410[iVar0 /*22*/], ENTITY::GET_ENTITY_COORDS(Global_1392388.f_3, true, false), 2f))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_410[iVar0 /*22*/], Global_1392388.f_3, -1, 0, 51, 0);
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_932(int iParam0, float fParam1)
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	if (Global_36.f_2 < (vVar0.z + fParam1) && Global_36.f_2 > (vVar0.z - fParam1))
	{
		return true;
	}
	return false;
}

int func_933(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (__LIB_0__::func_272(uParam0->f_410[iVar0 /*22*/], 1))
		{
			if (!TASK::_0x508F5053E3F6F0C4(uParam0->f_410[iVar0 /*22*/], Global_36, 2f))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_410[iVar0 /*22*/], Global_35, -1, 0, 41, 1);
			}
		}
		iVar0++;
	}
	return 0;
}

int func_934(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_523)
	{
		if (__LIB_0__::func_272(uParam0->f_500[iVar0 /*11*/], 1))
		{
			if (!TASK::_0x508F5053E3F6F0C4(uParam0->f_500[iVar0 /*11*/], Global_36, 2f))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_500[iVar0 /*11*/], Global_35, -1, 0, 51, 0);
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_935()
{
	if (((((((func_111(iLocal_25, 71) || func_111(iLocal_25, 72)) || func_111(iLocal_25, 34)) || func_111(iLocal_25, 35)) || func_111(iLocal_25, 73)) || func_111(iLocal_25, 74)) || func_111(iLocal_25, 41)) || func_111(iLocal_25, 42))
	{
		return true;
	}
	return false;
}

Vector3 func_936(int iParam0)
{
	vector3 vVar0[24];
	if (iParam0 == 0)
	{
		StringCopy(&cVar0, "CRST1_DYNAMITE", 24);
	}
	else if (iParam0 == 6)
	{
		StringCopy(&cVar0, "CRRH3_DYNAMITE", 24);
	}
	return cVar0;
}

void func_940(var uParam0, var uParam1)
{
	if (!__LIB_2__::func_1(*uParam0, 0, 1))
	{
		return;
	}
	TASK::TASK_LOOK_AT_ENTITY(*uParam0, uParam1, -1, 0, 51, 0);
	PED::_0xAAC0EE3B4999ABB5(*uParam0, uParam1);
	__LIB_1__::func_148(&(uParam0->f_75));
}

void func_941(int* iParam0)
{
	if (__LIB_0__::func_272(*iParam0, 0))
	{
		func_163(iParam0, &(iParam0->f_5), 1, 0, 0);
		WEAPON::_0xA769D753922B031B(*iParam0, 0.5f, 0.6f);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 30, true);
		PED::SET_PED_FIRING_PATTERN(*iParam0, joaat("FIRING_PATTERN_FULL_AUTO"));
		PED::SET_PED_ACCURACY(*iParam0, 20);
		TASK::TASK_VEHICLE_SHOOT_AT_COORD(*iParam0, Global_36, 20f);
		iParam0->f_8 = 1;
	}
}

bool func_950(int iParam0, vector3 vParam1, int iParam4, float fParam5, var uParam6, var uParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = __LIB_3__::func_326(iParam0, vParam1, uParam6, uParam7);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		return __LIB_6__::func_696(*iParam4, fParam5);
	}
	return false;
}

void func_1065()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1403(0);
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
	func_1403(1);
}

void func_1066()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_666(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1067()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1406(0);
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
	func_1406(1);
}

void func_1068()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1406(0);
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
	func_1406(1);
}

void func_1069()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_666(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_666(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_413(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_413(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1106(var uParam0, var uParam1, var uParam2, var uParam3)
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
	iVar11 = (func_1440(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_666(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

void func_1209(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (!__LIB_0__::func_272(iParam0, 1))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(iParam0, true, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
	if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true))
	{
		iVar0 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
		}
	}
	if (bParam3)
	{
		if (iParam1 != 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1))
			{
				PED::_0x1854217C640B39EC(iParam0, iParam1, 0f, 0f, 0f, 30f, 0, 0);
			}
		}
	}
	if (!bParam2)
	{
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 300f, 0, 0);
	}
	else
	{
		TASK::TASK_COMBAT_PED(iParam0, Global_35, 0, 0);
		PED::SET_PED_KEEP_TASK(iParam0, true);
	}
}

int func_1210(int iParam0, int iParam1)
{
	if (iParam1 == 6)
	{
		return iParam0 + 10;
	}
	return iParam0 + 1;
}

int func_1237(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/]) || !ENTITY::IS_ENTITY_DEAD(Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/]))
	{
		return 0;
	}
	return 1;
}

bool func_1238(int iParam0)
{
	if (Local_51.f_25[iParam0 /*679*/].f_410[0 /*22*/].f_15 && Local_51.f_25[iParam0 /*679*/].f_410[1 /*22*/].f_15)
	{
		return true;
	}
	return false;
}

void func_1260(var uParam0)
{
	if (!__LIB_2__::func_1(uParam0->f_9, 0, 1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_9))
	{
		PED::_0x802092B07E3B1EEA(uParam0->f_9, Global_36, 3);
	}
	TASK::TASK_SMART_FLEE_PED(uParam0->f_9, Global_35, 6000f, -1, 0, 1077936128 /* Float: 3f */, 0);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(uParam0->f_9, true);
}

void func_1261(int iParam0)
{
	PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
	PED::SET_PED_COMBAT_RANGE(iParam0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 31, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 112, true);
}

int func_1262()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_9, 3))
		{
			return Local_51.f_25[iVar0 /*679*/].f_9;
		}
		if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_174, 3))
		{
			return Local_51.f_25[iVar0 /*679*/].f_174;
		}
		iVar1 = 0;
		while (iVar1 < Local_51.f_25[iVar0 /*679*/].f_499)
		{
			if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_410[iVar1 /*22*/], 3))
			{
				return Local_51.f_25[iVar0 /*679*/].f_410[iVar1 /*22*/];
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 < Local_51.f_25[iVar0 /*679*/].f_523)
		{
			if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_500[iVar2 /*11*/], 3))
			{
				return Local_51.f_25[iVar0 /*679*/].f_500[iVar2 /*11*/];
			}
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < Local_51.f_25[iVar0 /*679*/].f_540)
		{
			if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_524[iVar3 /*15*/], 3))
			{
				return Local_51.f_25[iVar0 /*679*/].f_524[iVar3 /*15*/];
			}
			iVar3++;
		}
		iVar4 = 0;
		while (iVar4 < Local_51.f_25[iVar0 /*679*/].f_595)
		{
			if (__LIB_0__::func_272(Local_51.f_25[iVar0 /*679*/].f_541[iVar4 /*13*/], 3))
			{
				return Local_51.f_25[iVar0 /*679*/].f_541[iVar4 /*13*/];
			}
			iVar4++;
		}
		iVar0++;
	}
	if (func_15(&Local_51, 65536))
	{
		iVar5 = 0;
		while (iVar5 < 2)
		{
			if (__LIB_0__::func_272(Local_51.f_5[iVar5 /*9*/], 3))
			{
				return Local_51.f_5[iVar5 /*9*/];
			}
			iVar5++;
		}
	}
	return 0;
}

void func_1263(int iParam0, vector3 vParam1, int iParam4, bool bParam5, float fParam6)
{
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return;
	}
	if (PED::IS_PED_ON_MOUNT(iParam0))
	{
		return;
	}
	if (PED::IS_PED_IN_COVER(iParam0, false, false))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 246, true);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vParam1) < fParam6)
	{
		if (!__LIB_0__::func_163(iParam0, 1812035420))
		{
			TASK::TASK_SEEK_COVER_TO_COORDS(iParam0, vParam1, ENTITY::GET_ENTITY_COORDS(iParam4, true, false), -1, 0, 0, 0);
		}
	}
	else if (bParam5)
	{
		if (!__LIB_0__::func_163(iParam0, -1758697641))
		{
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(iParam0, vParam1, iParam4, 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		}
	}
	else if (!__LIB_0__::func_163(iParam0, 713668775))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vParam1, 3f, -1, 0.25f, 0, 40000f);
	}
}

void func_1264(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	int iVar0;
	Global_1945938[iParam0 /*18*/].f_4 = iParam2;
	Global_1945938[iParam0 /*18*/] = 3;
	Global_1945938[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945938[iParam0 /*18*/].f_2 = 0;
	Global_1945938[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_9 = 0f;
	Global_1945938[iParam0 /*18*/].f_10 = 0;
	Global_1945938[iParam0 /*18*/].f_11 = 0;
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_5 = 4;
	Global_1945938[iParam0 /*18*/].f_1 = 2;
	Global_1945938[iParam0 /*18*/].f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam2);
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam1);
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, 3);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, 0);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	HUD::_UIPROMPT_SET_HOLD_MODE(iVar0, iParam3);
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1945938[iParam0 /*18*/].f_3 = iVar0;
	__LIB_0__::func_629(iParam0, 1);
	__LIB_0__::func_185(iParam0, 1);
	__LIB_0__::func_186(iParam0, 128);
}

bool func_1289(var uParam0, var uParam1)
{
	if (__LIB_2__::func_875(Global_35, *uParam0, &(uParam1->f_2069)))
	{
		return true;
	}
	return false;
}

bool func_1290(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam1, fParam4))
	{
		iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(vParam1, fParam4, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if ((((VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iVar0) == 0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) == 0) && iVar0 != iParam0) && (!ENTITY::DOES_ENTITY_EXIST(Local_51.f_2278) || iVar0 != Local_51.f_2278))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1291(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1[20];
	int iVar22;
	iVar0 = func_541(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	PED::GET_PED_NEARBY_PEDS(iVar0, &iVar1, -1, -1);
	iVar22 = 0;
	while (iVar22 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1[iVar22]))
		{
			if (!PED::IS_PED_INJURED(iVar1[iVar22]))
			{
				if ((((__LIB_0__::func_125(iVar1[iVar22]) && PED::_GET_RIDER_OF_MOUNT(iVar1[iVar22], false) == 0) && BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iVar1[iVar22], true, false)) < fParam4) && !PED::IS_PED_FLEEING(iVar1[iVar22])) && !__LIB_0__::func_163(iVar1[iVar22], 518218985))
				{
					TASK::TASK_SMART_FLEE_COORD(iVar1[iVar22], ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 200f, -1, false, 1077936128);
				}
			}
		}
		iVar22++;
	}
}

int func_1292(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	if (func_1290(iParam0, vParam1, fParam4))
	{
		iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(vParam1, fParam4, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar2);
				if (__LIB_0__::func_272(iVar3, 1))
				{
					iVar1++;
				}
				iVar2++;
			}
		}
	}
	return iVar1;
}

void func_1403(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_666(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1639(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_669(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_413(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1643(Var0);
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

void func_1406(bool bParam0)
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
		func_666(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_413(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_413(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_413(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_413(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_413(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_413(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_413(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_413(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_413(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_413(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_413(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1440(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1440(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1440(iVar63, -915411861, 1, 0, 0));
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

void func_1639(int iParam0)
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
	func_413(iParam0, 1, 1, -142743235, 1);
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
		func_413(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1643(struct<6> Param0)
{
	if (!func_1752(Param0.f_4, 1))
	{
	}
	if (!func_1752(Param0, 1))
	{
	}
	if (!func_1752(Param0.f_2, 1))
	{
	}
	if (!func_1752(Param0.f_5, 1))
	{
	}
	if (!func_1752(Param0.f_3, 1))
	{
	}
	if (!func_1752(Param0.f_1, 1))
	{
	}
}

bool func_1752(int iParam0, int iParam1)
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
				if (func_1752(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1752(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1752(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1752(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

