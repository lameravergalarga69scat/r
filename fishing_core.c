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
	struct<3090> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1077936128, 1065353216, 4, 8, 50, 10, 200, 0, 0, 0, 0, 0, 0, 0, 3, 10, 20, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1053609165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 500, 600, 800, 1500, 10, 1500, 1400, 1300, 1200, 1100, 200, 1048576000, 1065353216, 0 } ;
	var uLocal_3104 = 32;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 15;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 15;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 15;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 15;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 15;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 15;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 15;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 15;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 15;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 15;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 15;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 15;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 15;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 15;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 15;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 15;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 15;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 15;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 15;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 15;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 15;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 15;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 15;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 15;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 15;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 15;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 15;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 15;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 15;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 15;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 15;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 15;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iVar0 = 523;
	if (func_1())
	{
		iVar0 = 521;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(iVar0))
	{
		func_2(&Local_14, &(Local_14.f_711), &(Local_14.f_1764), &(Local_14.f_3089));
	}
	__LIB_8__::func_675(4);
	func_4(&Local_14, -1);
	while (true)
	{
		func_5();
		if (func_6(&Local_14, &(Local_14.f_711)))
		{
			func_7(&Local_14, 5);
		}
		else
		{
			func_8(&Local_14, &(Local_14.f_711), &(Local_14.f_1764));
			if (__LIB_4__::func_188(&Local_14) > 0)
			{
				func_10(&Local_14, &(Local_14.f_711));
				func_11(&(Local_14.f_711), 0);
				func_12(&Local_14, &(Local_14.f_711));
				func_13(&Local_14, &(Local_14.f_711), &(Local_14.f_1764));
				func_14(&Local_14, &(Local_14.f_711), &(Local_14.f_1764));
				func_15(&Local_14, &(Local_14.f_711));
				if (!func_1())
				{
					func_16(&Local_14, &(Local_14.f_711), &(Local_14.f_1764));
					func_17(&Local_14, &(Local_14.f_711));
				}
			}
		}
		switch (__LIB_4__::func_188(&Local_14))
		{
			case 0:
				func_18(&Local_14);
				break;
			case 1:
				func_19(&Local_14, &(Local_14.f_711), &(Local_14.f_1764));
				break;
			case 2:
				func_20(&Local_14, &(Local_14.f_711));
				break;
			case 3:
				func_21(&Local_14, &(Local_14.f_711), &(Local_14.f_1764));
				break;
			case 4:
				func_22(&Local_14);
				break;
			case 5:
				func_23(&Local_14, &(Local_14.f_711), &(Local_14.f_1764), &(Local_14.f_3089));
				break;
		}
		func_24(&Local_14, &(Local_14.f_711), &(Local_14.f_1764));
		if (func_1())
		{
			func_25(&(Local_14.f_3089));
		}
		BUILTIN::WAIT(0);
	}
}

bool func_1()
{
	return __LIB_0__::func_2() == 0;
}

void func_2(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	func_27(uParam0, uParam1, uParam2, 0);
	Global_1900073.f_194 = 0;
	func_28(&(uParam0->f_31));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (uParam2->f_1[iVar0] == 0)
		{
			func_29(uParam0, uParam1, uParam2, iVar0, 1, 0);
		}
		else
		{
			func_29(uParam0, uParam1, uParam2, iVar0, 0, 0);
		}
		iVar0++;
	}
	func_30(&(Global_1900073.f_195), 1, 1, 1);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < func_31(uParam0))
	{
		func_32(uParam1, iVar1);
		func_33(uParam1, iVar1);
		func_34(uParam1, iVar1);
		__LIB_1__::func_951(&((uParam1[iVar1 /*263*/])->f_13));
		func_36(uParam1, iVar1);
		iVar1++;
	}
	if (func_1())
	{
		func_37(uParam3);
	}
	else
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < func_31(uParam0))
		{
			if (iVar1 > 0 && Global_1900073.f_7[(iVar1 - 1)] != -1)
			{
				func_38(uParam0, uParam1, iVar1, 0);
			}
			iVar1++;
		}
		func_39();
		__LIB_1__::func_979(1);
	}
	func_41(uParam0);
	func_42(&(uParam0->f_676), 0);
	func_43(uParam0, uParam2, 0);
	func_44();
	if (__LIB_1__::func_662(8) || !func_46(&(uParam0->f_676)))
	{
		func_47();
	}
	__LIB_8__::func_675(32);
	Global_1900073.f_152 = 0;
	if (!func_1())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	else
	{
		__LIB_2__::func_822();
	}
}

void func_4(var uParam0, int iParam1)
{
	if (!func_1() || func_50(uParam0, 2))
	{
		return;
	}
	func_51(uParam0, 2);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

void func_5()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_8__::func_674(iVar0, 32);
		iVar0++;
	}
}

bool func_6(var uParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_53(uParam1, 0)))
	{
		return true;
	}
	if (PED::IS_PED_INJURED(func_53(uParam1, 0)))
	{
		func_54(uParam1);
		return true;
	}
	if (__LIB_1__::func_662(4))
	{
		if (!__LIB_1__::func_662(64))
		{
			func_54(uParam1);
		}
		return true;
	}
	if (func_50(uParam0, 1))
	{
		if (!func_46(&(uParam0->f_676)) || __LIB_1__::func_662(8))
		{
			if (!__LIB_0__::func_86(uParam0->f_36) && (uParam0->f_683 == 0 || uParam0->f_683 == 6))
			{
				uParam0->f_58 = __LIB_0__::func_94(func_53(uParam1, 0), uParam0->f_36, 0);
				if (uParam0->f_58 > 15f)
				{
					return true;
				}
			}
			if (PED::IS_PED_ON_MOUNT(func_53(uParam1, 0)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_7(var uParam0, int iParam1)
{
	if (__LIB_4__::func_188(uParam0) != iParam1)
	{
		uParam0->f_10 = iParam1;
	}
}

void func_8(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	if (func_50(uParam0, 1))
	{
		return;
	}
	func_51(uParam0, 1);
	if (!func_1())
	{
		func_57(&(uParam0->f_676));
		if (__LIB_0__::func_181())
		{
		}
		if (uParam0->f_676 == 1)
		{
		}
		else if (uParam0->f_676.f_1 == 1)
		{
		}
		else if (uParam0->f_676.f_2 == 1)
		{
		}
		else if (uParam0->f_676.f_3 == 1)
		{
		}
		else if (uParam0->f_676.f_4 == 1)
		{
		}
		else if (uParam0->f_676.f_5 == 1)
		{
		}
		if (Global_1900073.f_17 == 0 && func_46(&(uParam0->f_676)))
		{
			Global_1900073.f_17 = 1;
		}
	}
	func_44();
	func_59(uParam2);
	func_60(uParam0, uParam1);
	func_42(&(uParam0->f_676), 1);
	func_43(uParam0, uParam2, 1);
	func_61(&(uParam0->f_676), &(uParam0->f_105), 1);
	func_62(uParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_31(uParam0))
	{
		func_63(uParam1, iVar0);
		func_64(uParam0, uParam1, uParam2, iVar0, -1);
		iVar0++;
	}
	uParam0->f_39[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_39[1 /*3*/] = { -20f, 20f, 0f };
	uParam0->f_39[2 /*3*/] = { -20f, 50f, 0f };
	uParam0->f_39[3 /*3*/] = { 20f, 50f, 0f };
	uParam0->f_39[4 /*3*/] = { 20f, 20f, 0f };
	uParam0->f_36 = { Global_36 };
	uParam0->f_62 = { 2401.026f, -994.4021f, 43.0558f };
	if (!func_1())
	{
		__LIB_2__::func_29(1);
		__LIB_1__::func_924();
	}
	func_67();
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_31(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_53(uParam1, iVar0)) && func_68(uParam1, iVar0))
		{
			Global_1900073.f_147[iVar0] = TASK::_0xF3735ACD11ACD500(func_53(uParam1, iVar0), &(Global_1900073.f_26[iVar0 /*30*/]));
		}
		else
		{
			Global_1900073.f_26[iVar0 /*30*/] = 1;
			Global_1900073.f_147[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_11(var uParam0, int iParam1)
{
	(uParam0[iParam1 /*263*/])->f_7 = { ENTITY::GET_ENTITY_COORDS(func_53(uParam0, iParam1), true, false) };
	(uParam0[iParam1 /*263*/])->f_10 = ENTITY::GET_ENTITY_HEADING(func_53(uParam0, iParam1));
	if (func_69(iParam1, 1, 1))
	{
		(uParam0[iParam1 /*263*/])->f_10 = ((uParam0[iParam1 /*263*/])->f_10 + 90f);
	}
}

void func_12(var uParam0, var uParam1)
{
	if (uParam0->f_676.f_4 == 1)
	{
		POPULATION::_0x8EC7CD701F872F87(0.5f, 512, 0, 0, -1, -1);
		POPULATION::_0x8EC7CD701F872F87(4f, 0, 0, joaat("SPECIES_FISH_SMALLMOUTHBASS"), -1, -1);
	}
	else
	{
		POPULATION::_0x8EC7CD701F872F87(2f, 512, 0, 0, -1, -1);
	}
	POPULATION::_0x8EC7CD701F872F87(0.1f, 1024, 0, 0, -1, -1);
	if (__LIB_4__::func_188(uParam0) == 0)
	{
		return;
	}
	func_70(uParam0);
	if (__LIB_7__::func_729() || __LIB_1__::func_662(256))
	{
		func_72(uParam0);
	}
	if (__LIB_1__::func_662(512))
	{
		func_73(0);
		__LIB_8__::func_675(512);
	}
	if (__LIB_1__::func_662(1024))
	{
		func_73(1);
		__LIB_8__::func_675(1024);
	}
	if (__LIB_0__::func_75(&(uParam0->f_102)))
	{
		if (__LIB_1__::func_871(&(uParam0->f_102)) < 500)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		}
		else
		{
			__LIB_0__::func_37(&(uParam0->f_102));
		}
	}
	if (func_68(uParam1, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_53(uParam1, 0)))
		{
			PED::SET_PED_RESET_FLAG(func_53(uParam1, 0), 134, true);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(func_53(uParam1, 0), 1.5f);
		}
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		__LIB_1__::func_725();
		CAM::_0x8910C24B7E0046EC();
		if (Global_1900073.f_147[0] == 1)
		{
			if (Global_1900073.f_26[0 /*30*/] > 1 && Global_1900073.f_26[0 /*30*/] != 12)
			{
				__LIB_1__::func_538(0);
			}
			if (Global_1900073.f_26[0 /*30*/] > 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			if (Global_1900073.f_26[0 /*30*/] == 12)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
			}
		}
		if ((Global_1900073.f_26[0 /*30*/] > 1 && Global_1900073.f_26[0 /*30*/] != 6) || func_79(uParam1, 0, 4096))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		}
		uParam0->f_36 = { Global_36 };
		if ((__LIB_1__::func_672(0, 8192) && func_69(0, 1, 1)) && __LIB_1__::func_672(0, 32768))
		{
			TASK::_0x88FD60D846D9CD63(func_53(uParam1, 0));
		}
	}
}

void func_13(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_31(uParam0))
	{
		if (Global_1900073.f_147[iVar0] == 1 && (((Global_1900073.f_26[iVar0 /*30*/] == 4 || Global_1900073.f_26[iVar0 /*30*/] == 6) || Global_1900073.f_26[iVar0 /*30*/] == 7) || Global_1900073.f_26[iVar0 /*30*/] == 10))
		{
			func_81(uParam1, iVar0);
			func_82(uParam1, iVar0);
			if (Global_1900073.f_26[iVar0 /*30*/] == 7)
			{
				func_83(uParam0, uParam1, uParam2, iVar0);
			}
		}
		else
		{
			(uParam1[iVar0 /*263*/])->f_19 = -99999f;
			(uParam1[iVar0 /*263*/])->f_20 = -99999f;
			(uParam1[iVar0 /*263*/])->f_21 = -99999f;
			(uParam1[iVar0 /*263*/])->f_22 = -99999f;
			(uParam1[iVar0 /*263*/])->f_23 = -99999f;
			(uParam1[iVar0 /*263*/])->f_24 = -99999f;
		}
		iVar0++;
	}
}

void func_14(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1[15];
	var uVar17[15];
	var uVar33[15];
	var uVar49[15];
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	bool bVar69;
	int iVar70;
	int iVar71;
	func_84(uParam0, uParam2);
	func_85(uParam0, uParam1);
	uParam2->f_1140 = 0;
	uParam2->f_1141 = 0;
	uParam2->f_705 = 0;
	func_86(uParam2);
	iVar70 = 0;
	iVar70 = 0;
	while (iVar70 < *uParam2)
	{
		bVar69 = ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iVar70]);
		if (bVar69 == 0)
		{
			iVar0++;
			if (__LIB_8__::func_951(uParam2->f_327[iVar70]))
			{
				uVar49[uParam2->f_327[iVar70]]++;
				if (__LIB_8__::func_952(iVar70))
				{
					uVar33[uParam2->f_327[iVar70]]++;
				}
				else if (uParam2->f_532[iVar70] == 1)
				{
					uVar17[uParam2->f_327[iVar70]]++;
				}
				else
				{
					uVar1[uParam2->f_327[iVar70]]++;
				}
				if (func_89(uParam2->f_327[iVar70]))
				{
					iVar67++;
				}
				else
				{
					iVar68++;
				}
			}
			if (uParam2->f_1[iVar70] == 1)
			{
				iVar65++;
			}
			else
			{
				iVar66++;
			}
		}
		if ((uParam2->f_204[iVar70] >= 3 && uParam2->f_204[iVar70] < 11) && bVar69 == 1)
		{
			func_29(uParam0, uParam1, uParam2, iVar70, 0, 0);
		}
		else if (func_90(uParam2, iVar70))
		{
			func_29(uParam0, uParam1, uParam2, iVar70, 0, 0);
		}
		switch (uParam2->f_204[iVar70])
		{
			case 0:
				func_91(&(uParam0->f_676), uParam2, iVar70);
				break;
			case 1:
				func_92(uParam0, uParam1, uParam2, iVar70);
				break;
			case 2:
				func_93(uParam0, uParam1, uParam2, iVar70);
				break;
			case 3:
				func_94(uParam0, uParam1, uParam2, iVar70);
				break;
			case 4:
				func_95(uParam0, uParam1, uParam2, iVar70);
				break;
			case 5:
				func_96(uParam0, uParam1, uParam2, iVar70);
				break;
			case 6:
			case 7:
				func_97(uParam0, uParam1, uParam2, iVar70);
				break;
			case 8:
				func_98(uParam0, uParam1, uParam2, iVar70);
				break;
			case 9:
				func_99(uParam0, uParam1, uParam2, iVar70);
				break;
			case 10:
				func_100(uParam2, iVar70);
				break;
			case 11:
				func_101(uParam0, uParam1, uParam2, iVar70);
				break;
		}
		iVar70++;
	}
	uParam2->f_707 = iVar0;
	iVar71 = 0;
	iVar71 = 0;
	while (iVar71 < 15)
	{
		uParam2->f_708[iVar71] = uVar1[iVar71];
		uParam2->f_724[iVar71] = uVar17[iVar71];
		uParam2->f_740[iVar71] = uVar33[iVar71];
		uParam2->f_756[iVar71] = uVar49[iVar71];
		iVar71++;
	}
	uParam2->f_772 = iVar65;
	uParam2->f_773 = iVar66;
	uParam2->f_774 = iVar67;
	uParam2->f_775 = iVar68;
	uParam2->f_1142++;
	if (uParam2->f_1142 >= *uParam2)
	{
		uParam2->f_1142 = 0;
	}
}

void func_15(var uParam0, var uParam1)
{
	switch (uParam0->f_683)
	{
		case 0:
			break;
		case 1:
			if (func_102(0, 8192, 1))
			{
				uParam0->f_708 = 1;
			}
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_OUT())
			{
				func_72(uParam0);
				func_103();
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				uParam0->f_698 = { ENTITY::GET_ENTITY_COORDS(func_53(uParam1, 0), true, false) };
				uParam0->f_709 = 0;
				__LIB_1__::func_148(&(uParam0->f_705));
				func_105(uParam0, 2);
			}
			break;
		case 2:
			if (func_102(0, 8192, 1))
			{
				uParam0->f_708 = 1;
			}
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			if (func_106(uParam0) && ((uParam0->f_708 && PED::_IS_PED_CARRYING(func_53(uParam1, 0))) || __LIB_0__::func_264(&(uParam0->f_705)) > 10f))
			{
				__LIB_1__::func_148(&(uParam0->f_684));
				if (func_108(uParam0, uParam1))
				{
					func_105(uParam0, 3);
				}
				else
				{
					func_105(uParam0, 4);
				}
			}
			break;
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			if (func_109(uParam0))
			{
				func_105(uParam0, 4);
			}
			break;
		case 4:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			if ((__LIB_0__::func_264(&(uParam0->f_684)) > 2f && CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::DO_SCREEN_FADE_IN(500);
			}
			if (CAM::IS_SCREEN_FADED_IN())
			{
				func_105(uParam0, 5);
			}
			break;
		case 5:
			if (STREAMING::_0xCF45DF50C7775F2A())
			{
				STREAMING::_0x5A8B01199C3E79C3();
			}
			func_110(uParam0, 58, 1, -2, 1);
			__LIB_6__::func_766();
			func_105(uParam0, 6);
			func_112(uParam0);
			break;
		case 6:
			break;
	}
}

void func_16(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	if ((func_1() || uParam0->f_73 == 0) || !func_46(&(uParam0->f_676)))
	{
		return;
	}
	if (!func_113(uParam0))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_31(uParam0))
	{
		if (iVar0 > 0 && !func_102(iVar0, 2048, 1))
		{
			func_114(uParam0, uParam1, iVar0);
			switch (func_115(uParam1, iVar0))
			{
				case 0:
					func_116(uParam0, uParam1, iVar0);
					break;
				case 1:
					func_117(uParam1, iVar0);
					break;
				case 2:
					func_118(uParam0, uParam1, iVar0);
					break;
				case 3:
					func_119(uParam1, iVar0);
					break;
				case 4:
					func_120(uParam0, uParam1, uParam2, iVar0);
					break;
				case 5:
					func_121(uParam1, iVar0);
					break;
				case 6:
					func_122(uParam1, iVar0);
					break;
				case 7:
					func_123(uParam0, uParam1, uParam2, iVar0);
					break;
				case 8:
					break;
			}
		}
		iVar0++;
	}
}

void func_17(var uParam0, var uParam1)
{
	if (func_1())
	{
		return;
	}
	if (!func_50(uParam0, 16))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_53(uParam1, 0), 807.1916f, -1353.353f, 40.95065f, 810.0553f, -1326.595f, 40.97586f, 15f, false, false, 0) && __LIB_6__::func_668() == 234527101)
		{
			if ((((((__LIB_3__::func_993(42, 0) != 2 && __LIB_3__::func_993(42, 1) != 2) && __LIB_3__::func_657(42) <= 1) && __LIB_3__::func_564(42, 2) != 1) && !__LIB_1__::func_373(735.3256f, -1387.221f, 40.5f, 0.1f, 0.9f, 0.1f, 0.9f)) && (__LIB_8__::func_961(joaat("HAI_FISHING_02")) || ((__LIB_0__::func_317() != 0 && __LIB_0__::func_317() != 1) && __LIB_0__::func_317() != 2))) && __LIB_11__::func_126(42))
			{
				__LIB_8__::func_958(42, 1, 735.3256f, -1387.221f, 40.5f, -1, 0, 1);
				func_51(uParam0, 16);
			}
		}
	}
}

void func_18(var uParam0)
{
	if (!func_50(uParam0, 1))
	{
		return;
	}
	func_133();
	if (func_134(uParam0))
	{
		func_7(uParam0, 1);
	}
}

void func_19(var uParam0, var uParam1, var uParam2)
{
	func_135(uParam0, uParam1);
	if (func_68(uParam1, 0))
	{
		func_27(uParam0, uParam1, uParam2, 1);
		if (func_69(0, 1, 1))
		{
			func_7(uParam0, 2);
		}
		else
		{
			func_7(uParam0, 3);
		}
	}
}

void func_20(var uParam0, var uParam1)
{
	if (((func_136(uParam1) && func_137(uParam0, 1)) && func_138(uParam0, uParam1, 0, 1)) && func_139(uParam1, 0))
	{
		func_7(uParam0, 3);
	}
}

void func_21(var uParam0, var uParam1, var uParam2)
{
	if (func_140(uParam0, uParam1, 0))
	{
		func_27(uParam0, uParam1, uParam2, 0);
		func_7(uParam0, 4);
	}
	else
	{
		func_141(uParam0, uParam1, uParam2, 0);
	}
}

void func_22(var uParam0)
{
	func_7(uParam0, 1);
}

void func_23(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_2(uParam0, uParam1, uParam2, uParam3);
}

void func_24(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < func_31(uParam0))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(func_53(uParam1, iVar1)) && func_68(uParam1, iVar1)) && Global_1900073.f_147[iVar1] == 1)
		{
			iVar0 = func_142(uParam0, uParam1, uParam2, iVar1);
			if (func_143(uParam1, uParam2, iVar1, iVar0))
			{
				Global_1900073.f_26[iVar1 /*30*/].f_7 = 0;
				Global_1900073.f_26[iVar1 /*30*/].f_8 = func_144(uParam0, uParam1, uParam2, iVar1);
				Global_1900073.f_26[iVar1 /*30*/].f_9 = 0f;
				Global_1900073.f_26[iVar1 /*30*/].f_18 = uParam2->f_491[iVar0];
				if ((uParam1[iVar1 /*263*/])->f_189 == 0)
				{
					Global_1900073.f_26[iVar1 /*30*/].f_19 = uParam2->f_1323;
				}
				else
				{
					Global_1900073.f_26[iVar1 /*30*/].f_19 = uParam2->f_1324;
				}
				Global_1900073.f_26[iVar1 /*30*/].f_17 = 0f;
				Global_1900073.f_26[iVar1 /*30*/].f_13 = 0f;
				Global_1900073.f_26[iVar1 /*30*/].f_20 = 0f;
				Global_1900073.f_26[iVar1 /*30*/].f_21 = 0f;
			}
			else if (func_145(uParam2, iVar1, iVar0))
			{
				Global_1900073.f_26[iVar1 /*30*/].f_7 = uParam2->f_163[iVar0];
				Global_1900073.f_26[iVar1 /*30*/].f_8 = func_144(uParam0, uParam1, uParam2, iVar1);
				Global_1900073.f_26[iVar1 /*30*/].f_9 = (uParam1[iVar1 /*263*/])->f_235;
				Global_1900073.f_26[iVar1 /*30*/].f_18 = uParam2->f_491[iVar0];
				if (func_146(uParam2, iVar0))
				{
					Global_1900073.f_26[iVar1 /*30*/].f_17 = 1f;
				}
				else
				{
					Global_1900073.f_26[iVar1 /*30*/].f_17 = 0f;
				}
				Global_1900073.f_26[iVar1 /*30*/].f_13 = func_147(uParam1, iVar1);
				Global_1900073.f_26[iVar1 /*30*/].f_20 = func_148(uParam1, iVar1);
				Global_1900073.f_26[iVar1 /*30*/].f_21 = func_149(uParam1, iVar1);
			}
			else if (func_150(uParam1, iVar1))
			{
				Global_1900073.f_26[iVar1 /*30*/].f_7 = (uParam1[iVar1 /*263*/])->f_13;
				Global_1900073.f_26[iVar1 /*30*/].f_8 = func_151(uParam1, uParam2, iVar1);
				Global_1900073.f_26[iVar1 /*30*/].f_9 = func_151(uParam1, uParam2, iVar1);
				Global_1900073.f_26[iVar1 /*30*/].f_18 = func_152(Global_1900073.f_154[iVar1]);
				Global_1900073.f_26[iVar1 /*30*/].f_17 = 0f;
				Global_1900073.f_26[iVar1 /*30*/].f_13 = 0f;
				Global_1900073.f_26[iVar1 /*30*/].f_20 = 0f;
				Global_1900073.f_26[iVar1 /*30*/].f_21 = 0f;
			}
			else
			{
				Global_1900073.f_26[iVar1 /*30*/].f_7 = 0;
				Global_1900073.f_26[iVar1 /*30*/].f_8 = 0f;
				Global_1900073.f_26[iVar1 /*30*/].f_9 = 0f;
				Global_1900073.f_26[iVar1 /*30*/].f_17 = 0f;
				Global_1900073.f_26[iVar1 /*30*/].f_13 = 0f;
				Global_1900073.f_26[iVar1 /*30*/].f_20 = 0f;
				Global_1900073.f_26[iVar1 /*30*/].f_21 = 0f;
			}
			if (func_69(iVar1, 1, 1))
			{
				if (func_46(&(uParam0->f_676)))
				{
					func_153(iVar1, 65536, 1);
				}
				if (iVar1 == 0 && func_46(&(uParam0->f_676)))
				{
					Global_1900073.f_26[iVar1 /*30*/].f_27 = __LIB_3__::func_745((uParam1[iVar1 /*263*/])->f_259);
				}
				else
				{
					Global_1900073.f_26[iVar1 /*30*/].f_27 = -1f;
				}
				if (iVar1 != 0)
				{
					Global_1900073.f_26[iVar1 /*30*/].f_26 = -1f;
				}
			}
			else
			{
				Global_1900073.f_26[iVar1 /*30*/].f_27 = -1f;
				Global_1900073.f_26[iVar1 /*30*/].f_26 = -1f;
			}
			TASK::_0xF3735ACD11ACD501(func_53(uParam1, iVar1), &(Global_1900073.f_26[iVar1 /*30*/]));
		}
		iVar1++;
	}
}

void func_25(int* iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (((!MISC::IS_BIT_SET(*iParam0, iVar0) && func_155(iVar1, 1, 1)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iVar1))) && func_156(PLAYER::GET_PLAYER_PED(iVar1)))
			{
				MISC::SET_BIT(iParam0, iVar0);
			}
			if (MISC::IS_BIT_SET(*iParam0, iVar0))
			{
				if (func_155(iVar1, 1, 1) && func_156(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					func_157(&(iParam0->f_1[iVar0 /*47*/]), PLAYER::GET_PLAYER_PED(iVar1), iVar0);
				}
				else
				{
					MISC::CLEAR_BIT(iParam0, iVar0);
					func_158(&(iParam0->f_1[iVar0 /*47*/]), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_27(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 1)
	{
		__LIB_10__::func_237(13);
		func_160(uParam1);
		func_161();
		func_162();
		__LIB_1__::func_148(&(uParam0->f_12));
		__LIB_1__::func_148(&(uParam0->f_15));
		if (MAP::IS_WAYPOINT_ACTIVE())
		{
			MAP::SET_WAYPOINT_OFF();
		}
		func_36(uParam1, 0);
		func_163(func_53(uParam1, 0), 0);
		func_164(uParam1, 0, 1);
		func_165(&(uParam0->f_676), 1);
		func_166(uParam1, 0, 1);
		func_167(uParam0);
		if (func_46(&(uParam0->f_676)))
		{
			uParam0->f_74 = 1;
			if (uParam0->f_676.f_2 == 1)
			{
				if (!__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_LURE_LAKE"), 1, 0))
				{
					func_169(joaat("UPGRADE_FSH_BAIT_LURE_LAKE"), 0);
				}
				TASK::_0x9050DF2C53801208(func_53(uParam1, 0), (3.141593f * 0.5f));
			}
			else if (uParam0->f_676 == 1)
			{
				if (!__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"), 1, 0))
				{
					func_169(joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"), 0);
				}
				TASK::_0x9050DF2C53801208(func_53(uParam1, 0), (3.141593f * 0.5f));
			}
		}
		func_170();
		if (__LIB_0__::func_181())
		{
			__LIB_0__::func_928(&(uParam0->f_568), func_53(uParam1, 0), "JOHN", 0);
		}
		else
		{
			__LIB_0__::func_928(&(uParam0->f_568), func_53(uParam1, 0), "ARTHUR", 0);
		}
		func_172(uParam0, 1);
		func_173(uParam0, uParam1);
		func_174();
		__LIB_18__::func_164();
		func_177(func_176(&(uParam0->f_676)));
		func_178(uParam0, uParam1, 0);
		func_105(uParam0, 0);
		func_112(uParam0);
		PED::SET_PED_CONFIG_FLAG(func_53(uParam1, 0), 174, true);
		VEHICLE::SET_RANDOM_TRAINS(false);
		uParam0->f_710 = TASK::_0x5952DFA38FA529FE();
	}
	else
	{
		__LIB_0__::func_867(0);
		func_180(uParam1);
		func_181(0, 0);
		if (!__LIB_3__::func_127(uParam0->f_105[58]))
		{
			func_103();
		}
		func_183(uParam0);
		func_61(&(uParam0->f_676), &(uParam0->f_105), 1);
		func_72(uParam0);
		func_28(&(uParam0->f_31));
		func_184(uParam0, 0);
		func_172(uParam0, 0);
		func_185(joaat("UPGRADE_FSH_BAIT_NONE"));
		func_185(joaat("UPGRADE_FSH_LURE_NONE"));
		func_165(&(uParam0->f_676), 0);
		func_186(uParam1, 0);
		func_187(uParam0, uParam1, uParam2, 0, 0, 0, 0);
		func_36(uParam1, 0);
		func_163(func_53(uParam1, 0), 1);
		func_164(uParam1, 0, 0);
		func_137(uParam0, 0);
		func_138(uParam0, uParam1, 0, 0);
		__LIB_0__::func_172(uParam0->f_65);
		TASK::_0x22CDBF317C40A122(func_53(uParam1, 0));
		uParam0->f_36 = { Global_36 };
		uParam0->f_18 = 0;
		uParam0->f_35 = 0;
		func_189(uParam0);
		func_190(uParam0);
		WATER::_0xA33F5069B0CB89B8();
		func_191(uParam1, 0, 0);
		PED::SET_PED_CONFIG_FLAG(func_53(uParam1, 0), 174, false);
		VEHICLE::SET_RANDOM_TRAINS(true);
		__LIB_8__::func_674(0, 2);
	}
}

void func_28(var uParam0)
{
	if (uParam0->f_2 == 0)
	{
		return;
	}
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("SHOP_BROWSING")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(joaat("SHOP_BROWSING"));
	}
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_3);
}

void func_29(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iParam3]))
	{
		PED::SET_PED_RESET_FLAG(uParam2->f_163[iParam3], 169, false);
		if (__LIB_8__::func_952(iParam3))
		{
			iVar0 = __LIB_10__::func_762(uParam2->f_327[iParam3]);
			if (((__LIB_8__::func_951(iVar0) && Global_40.f_11184.f_5[iVar0] == 0) && !func_79(uParam1, 0, 32)) && !func_79(uParam1, 0, 64))
			{
				iParam4 = 1;
			}
		}
	}
	iVar1 = func_194(uParam0, uParam1, uParam2, iParam3);
	if (iVar1 != -1)
	{
		func_64(uParam0, uParam1, uParam2, iVar1, -1);
	}
	if (uParam2->f_573[iParam3] == 1)
	{
		iParam4 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_163[iParam3]))
	{
		if (iParam4 == 1 && (!func_1() || iParam5 == 1))
		{
			func_195(&(uParam2->f_163[iParam3]));
		}
		else
		{
			func_30(&(uParam2->f_163[iParam3]), 1, 1, 1);
		}
	}
	if (uParam2->f_286[iParam3] != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam2->f_286[iParam3]);
	}
	func_196(uParam2, iParam3);
}

void func_30(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

int func_31(var uParam0)
{
	return uParam0->f_73 + 1;
}

void func_32(var uParam0, int iParam1)
{
	if (!AUDIO::_0x84848E1C0FC67DBB((uParam0[iParam1 /*263*/])->f_91))
	{
		AUDIO::_0x3210BCB36AF7621B((uParam0[iParam1 /*263*/])->f_91);
	}
}

void func_33(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB((uParam0[iParam1 /*263*/])->f_84[iVar0]))
		{
			AUDIO::_0x3210BCB36AF7621B((uParam0[iParam1 /*263*/])->f_84[iVar0]);
		}
		iVar0++;
	}
}

void func_34(var uParam0, int iParam1)
{
	if (!AUDIO::_0x84848E1C0FC67DBB((uParam0[iParam1 /*263*/])->f_90))
	{
		AUDIO::_0x3210BCB36AF7621B((uParam0[iParam1 /*263*/])->f_90);
	}
}

void func_36(var uParam0, int iParam1)
{
	__LIB_1__::func_951(&((uParam0[iParam1 /*263*/])->f_14));
	(uParam0[iParam1 /*263*/])->f_14 = 0;
}

void func_37(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_158(&(uParam0->f_1[iVar0 /*47*/]), iVar0);
		iVar0++;
	}
}

bool func_38(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (func_115(uParam1, iParam2) != 8 && !ENTITY::IS_ENTITY_DEAD(func_53(uParam1, iParam2)))
	{
		iVar0 = (iParam2 - 1);
		PED::SET_PED_CONFIG_FLAG(func_53(uParam1, iParam2), 174, bParam3);
		if (bParam3 == 1)
		{
			Global_1900073.f_2[iParam2] = 0;
			__LIB_18__::func_162(iParam2, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_53(uParam1, iParam2), true);
			func_198(&(uParam0->f_676), uParam1, iParam2);
			Global_1900073.f_215[iParam2] = 0;
			Global_1900073.f_225[iParam2] = 0;
			Global_1900073.f_235[iParam2] = 0;
			func_178(uParam0, uParam1, iParam2);
			__LIB_1__::func_148(&((uParam1[iParam2 /*263*/])->f_260));
			if (uParam0->f_676.f_2 == 1)
			{
				if (iParam2 == 1)
				{
					AUDIO::_0xD733528B6C35647A(func_53(uParam1, iParam2), 1);
					AUDIO::_0x5BC885EBD75FAA7D(func_53(uParam1, iParam2), 1);
				}
				else if (iParam2 == 2)
				{
					AUDIO::_0xD733528B6C35647A(func_53(uParam1, iParam2), 3);
					AUDIO::_0x5BC885EBD75FAA7D(func_53(uParam1, iParam2), 3);
				}
			}
		}
		else
		{
			if (uParam0->f_676.f_2 == 0)
			{
				if (!__LIB_1__::func_672(iParam2, 4096) && __LIB_1__::func_372(func_53(uParam1, iParam2), 0) == joaat("WEAPON_FISHINGROD"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(func_53(uParam1, iParam2), joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_53(uParam1, iParam2), false);
			}
			func_138(uParam0, uParam1, iParam2, 0);
			Global_1900073.f_7[iVar0] = -1;
			func_200(uParam1, iParam2, 8);
			Global_1900073.f_2[iParam2] = 0;
			__LIB_8__::func_674(iParam2, 1);
		}
		if (__LIB_0__::func_700(__LIB_0__::func_298(0)) != 11)
		{
			func_164(uParam1, iParam2, bParam3);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_53(uParam1, iParam2), bParam3);
			func_163(func_53(uParam1, iParam2), !bParam3);
			if (func_50(uParam0, 32))
			{
				__LIB_0__::func_705(Global_1900073.f_7[iVar0], bParam3);
			}
		}
		if (bParam3 == 0)
		{
			func_30(uParam1[iParam2 /*263*/], 1, 0, 1);
		}
	}
	return true;
}

void func_39()
{
	Global_1900073.f_7[0] = -1;
	Global_1900073.f_7[1] = -1;
	Global_1900073.f_7[2] = -1;
}

void func_41(var uParam0)
{
	HUD::_TEXT_DATABASE_DELETE("MGFSH");
	HUD::_TEXT_DATABASE_DELETE("FISHAUD");
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::_0x531A78D6BF27014B(*uParam0);
}

void func_42(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		POPULATION::_0x247F86595D396344(1493307657);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(953996926, 313480217, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(953996926, -1227780828, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(953996926, -1604520857, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(953996926, -1688703117, 3);
		if (uParam0->f_4 == 1)
		{
			POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, -1510975932, 3);
			POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, 168569674, 3);
			POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, -1725785792, 3);
			POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, -1732578984, 3);
		}
		else if (uParam0->f_5 == 1)
		{
			POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, 168569674, 3);
			POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, -1732578984, 3);
		}
		else
		{
			POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, -1510975932, 3);
			POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, 168569674, 3);
			POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, -1725785792, 3);
			POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, -1732578984, 3);
		}
		POPULATION::SET_SPAWNER_INFO_PRIORITY(1097366826, 611346020, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(1097366826, -1266430074, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(1097366826, 190319331, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1095210956, -1095210956, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1482332679, -1482332679, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(1404193962, 1404193962, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-252502713, -252502713, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(207807619, 207807619, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1477335493, -1477335493, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1738466917, -1738466917, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1839535975, -1839535975, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(638269552, 638269552, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1881610067, -1563248673, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1881610067, 1729337451, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1881610067, 1031264513, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(809951616, -1563248673, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(809951616, 1729337451, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(809951616, 1031264513, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(718901240, -1563248673, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(718901240, -1387587743, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(718901240, 1119319615, 3);
	}
	else
	{
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(953996926, 313480217);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(953996926, -1227780828);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(953996926, -1604520857);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(953996926, -1688703117);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(753476326, -1510975932);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(753476326, 168569674);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(753476326, -1725785792);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(753476326, -1732578984);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(1097366826, 611346020);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(1097366826, -1266430074);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(1097366826, 190319331);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1095210956, -1095210956);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1482332679, -1482332679);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(1404193962, 1404193962);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-252502713, -252502713);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(207807619, 207807619);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1477335493, -1477335493);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1738466917, -1738466917);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1839535975, -1839535975);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(638269552, 638269552);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1881610067, -1563248673);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1881610067, 1729337451);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1881610067, 1031264513);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(809951616, -1563248673);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(809951616, 1729337451);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(809951616, 1031264513);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(718901240, -1563248673);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(718901240, -1387587743);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(718901240, 1119319615);
		POPULATION::_0x324AB2A68AD8AEE5();
	}
}

void func_43(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (!func_50(uParam0, 64))
		{
			if (func_1())
			{
				NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS(*uParam1 + 1);
			}
			PED::_0xED9582B3DA8F02B4((*uParam1 + uParam0->f_73) + 1);
			func_51(uParam0, 64);
		}
	}
	else if (func_50(uParam0, 64))
	{
		PED::_0x7D4E70A67A651C71((*uParam1 + uParam0->f_73) + 1);
		func_204(uParam0, 64);
	}
}

void func_44()
{
	int iVar0;
	__LIB_8__::func_675(1);
	__LIB_8__::func_675(4);
	Global_1900073.f_16 = 0;
	__LIB_1__::func_653(0);
	__LIB_1__::func_657(0);
	Global_1900073.f_215[0] = 0;
	Global_1900073.f_225[0] = 0;
	Global_1900073.f_235[0] = 0;
	Global_1900073.f_153 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1900073.f_2[iVar0] = 0;
		Global_1900073.f_26[iVar0 /*30*/].f_6 = 0;
		Global_1900073.f_26[iVar0 /*30*/].f_5 = 0;
		iVar0++;
	}
}

bool func_46(var uParam0)
{
	if (func_1())
	{
		return false;
	}
	if (((((*uParam0 == 1 || uParam0->f_1 == 1) || uParam0->f_2 == 1) || uParam0->f_3 == 1) || uParam0->f_4 == 1) || uParam0->f_5 == 1)
	{
		return true;
	}
	return false;
}

void func_47()
{
	__LIB_8__::func_600(0, 0);
	__LIB_8__::func_600(1, 0);
	__LIB_8__::func_600(2, 0);
	__LIB_8__::func_600(3, 0);
	__LIB_1__::func_651(0, 0);
	__LIB_1__::func_651(1, 0);
	__LIB_1__::func_651(2, 0);
	__LIB_1__::func_651(3, 0);
	__LIB_1__::func_663(1, 0);
	__LIB_1__::func_663(2, 0);
	__LIB_1__::func_663(3, 0);
	__LIB_18__::func_165(0);
	__LIB_18__::func_166(0);
	__LIB_1__::func_653(0);
	__LIB_1__::func_658(0);
	__LIB_1__::func_648(1, 0);
	__LIB_1__::func_648(2, 0);
	__LIB_1__::func_648(3, 0);
	__LIB_8__::func_674(0, 2048);
	__LIB_8__::func_674(1, 2048);
	__LIB_8__::func_674(2, 2048);
	__LIB_8__::func_674(3, 2048);
	__LIB_1__::func_659(0);
	__LIB_1__::func_657(0);
	__LIB_1__::func_664(0);
	__LIB_1__::func_665(0);
	__LIB_18__::func_167(0);
	__LIB_1__::func_646(0);
	__LIB_1__::func_666(0);
	__LIB_1__::func_667(0);
	__LIB_1__::func_668(0);
	__LIB_1__::func_669(0);
	__LIB_1__::func_670(0);
	__LIB_1__::func_564(0);
	__LIB_18__::func_168(0);
	__LIB_18__::func_164();
	__LIB_1__::func_671(0f, 0f, 0f);
	HUD::_0x160825DADF1B04B3();
	__LIB_8__::func_675(8);
	__LIB_8__::func_675(2048);
}

bool func_50(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_11, iParam1);
}

void func_51(var uParam0, int iParam1)
{
	if (!func_50(uParam0, iParam1))
	{
		__LIB_1__::func_581(&(uParam0->f_11), iParam1);
	}
}

int func_53(var uParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		return (*uParam0)[iParam1 /*263*/];
	}
	return PLAYER::PLAYER_PED_ID();
}

void func_54(var uParam0)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(func_53(uParam0, 0), joaat("WEAPON_UNARMED"), false, 0, false, false);
	}
	else
	{
		WEAPON::SET_CURRENT_PED_WEAPON(func_53(uParam0, 0), joaat("WEAPON_UNARMED"), true, 0, false, false);
	}
}

void func_57(var uParam0)
{
	if (__LIB_1__::func_200(148))
	{
		*uParam0 = 1;
	}
	else if (__LIB_1__::func_200(0))
	{
		uParam0->f_1 = 1;
	}
	else if (__LIB_2__::func_774(16))
	{
		uParam0->f_2 = 1;
	}
	else if (__LIB_1__::func_200(96))
	{
		uParam0->f_3 = 1;
	}
	else if (__LIB_6__::func_668() == 654481153)
	{
		if (__LIB_8__::func_953() == joaat("HAI_FISHING_01"))
		{
			uParam0->f_4 = 1;
		}
		else if (__LIB_8__::func_953() == joaat("HAI_FISHING_02"))
		{
			uParam0->f_5 = 1;
		}
	}
}

void func_59(var uParam0)
{
	if (((((((((((((__LIB_1__::func_923() || __LIB_1__::func_652()) || func_1()) || __LIB_0__::func_12() == 5) || __LIB_0__::func_12() == 78) || __LIB_0__::func_12() == 92) || __LIB_0__::func_12() == 4) || __LIB_0__::func_12() == 93) || __LIB_0__::func_12() == 95) || __LIB_0__::func_12() == 105) || __LIB_0__::func_12() == 65) || __LIB_0__::func_12() == 76) || __LIB_0__::func_12() == 43) || __LIB_0__::func_12() == 38)
	{
		*uParam0 = 30;
	}
	else
	{
		*uParam0 = 40;
	}
}

void func_60(var uParam0, var uParam1)
{
	if (!func_1())
	{
		__LIB_8__::func_674(1, 1);
		__LIB_8__::func_674(2, 1);
		__LIB_8__::func_674(3, 1);
		if (uParam0->f_676 == 1)
		{
			uParam0->f_73 = 1;
			func_204(uParam0, 32);
			(uParam1[1 /*263*/])->f_1 = joaat("CS_WARVET");
			(uParam1[1 /*263*/])->f_2 = "MGFSH_NAME_WV2";
		}
		else if (uParam0->f_676.f_2 == 1)
		{
			uParam0->f_73 = 2;
			func_204(uParam0, 32);
			(uParam1[1 /*263*/])->f_1 = joaat("CS_HOSEAMATTHEWS");
			(uParam1[1 /*263*/])->f_2 = "COMP_HOSEA";
			(uParam1[2 /*263*/])->f_1 = joaat("CS_DUTCH");
			(uParam1[2 /*263*/])->f_2 = "COMP_DUTCH";
		}
		else if (uParam0->f_676.f_4 == 1)
		{
			uParam0->f_73 = 1;
			func_51(uParam0, 32);
			(uParam1[1 /*263*/])->f_2 = "COMP_JAVIER";
		}
		else if (uParam0->f_676.f_5 == 1)
		{
			uParam0->f_73 = 1;
			func_51(uParam0, 32);
			(uParam1[1 /*263*/])->f_2 = "COMP_KIERAN";
		}
		else
		{
			uParam0->f_73 = 0;
		}
	}
	else
	{
		uParam0->f_73 = 0;
	}
	if (uParam0->f_73 > 0)
	{
	}
}

void func_61(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 76)
	{
		iVar0 = iVar1;
		if (iParam2 == 1 || !func_236(uParam0, iVar0))
		{
			func_237(uParam1, iVar0);
		}
		iVar1++;
	}
}

void func_62(var uParam0)
{
	*uParam0 = "MGFSH_Sounds";
	uParam0->f_1 = "Minigame_Fishing_Scenes";
	uParam0->f_2 = "None";
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_4 = "Rod_Equipped";
	uParam0->f_5 = "Cast";
	uParam0->f_6 = "Reel_In";
	uParam0->f_7 = "Fish_On_Line";
	uParam0->f_8 = "Snap";
	uParam0->f_9 = "Caught";
}

void func_63(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(uParam0[iParam1 /*263*/])->f_79[iVar0] = AUDIO::GET_SOUND_ID();
		(uParam0[iParam1 /*263*/])->f_84[iVar0] = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
	(uParam0[iParam1 /*263*/])->f_89 = AUDIO::GET_SOUND_ID();
	(uParam0[iParam1 /*263*/])->f_90 = AUDIO::GET_SOUND_ID();
	(uParam0[iParam1 /*263*/])->f_91 = AUDIO::GET_SOUND_ID();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		(uParam0[iParam1 /*263*/])->f_92[iVar0] = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
}

void func_64(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (func_142(uParam0, uParam1, uParam2, iParam3) != iParam4)
	{
		(uParam1[iParam3 /*263*/])->f_4 = iParam4;
		if (func_238(iParam4) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iParam4]))
		{
			Global_1900073.f_154[iParam3] = 1;
			Global_1900073.f_159[iParam3] = uParam2->f_327[iParam4];
			Global_1900073.f_164[iParam3] = uParam2->f_368[iParam4];
			Global_1900073.f_169[iParam3] = uParam2->f_409[iParam4];
		}
		else
		{
			Global_1900073.f_154[iParam3] = 0;
			Global_1900073.f_169[iParam3] = 0f;
		}
	}
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar3 = 0;
	while (iVar3 < 15)
	{
		iVar1 = iVar3;
		iVar2 = __LIB_10__::func_762(iVar1);
		iVar0 = __LIB_10__::func_763(iVar1, 2);
		if (PERSISTENCE::_0x1F56FB3FDB4EAF65(iVar0))
		{
			PERSISTENCE::_0x291CC21D1FB6790E(iVar0);
			if (__LIB_10__::func_760(iVar2))
			{
				if (!__LIB_0__::func_314(__LIB_10__::func_774(__LIB_10__::func_761(iVar2))))
				{
					__LIB_10__::func_812(iVar2, 0);
				}
			}
		}
		iVar3++;
	}
}

bool func_68(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bVar1 = WEAPON::GET_CURRENT_PED_WEAPON(func_53(uParam0, iParam1), &iVar0, true, 0, true);
	return (bVar1 == 1 && iVar0 == joaat("WEAPON_FISHINGROD"));
}

bool func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 1 && func_102(iParam0, 4096, 0))
	{
		return true;
	}
	if (iParam2 == 1 && __LIB_1__::func_672(iParam0, 524288))
	{
		return true;
	}
	return false;
}

void func_70(var uParam0)
{
	if (((func_247() != 0 || func_248() != 0) || func_249() != 0) || func_250() != 0)
	{
		__LIB_1__::func_148(&(uParam0->f_12));
	}
	if (func_251(0))
	{
		__LIB_1__::func_148(&(uParam0->f_15));
	}
}

void func_72(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_252(uParam0, iVar0);
		iVar0++;
	}
}

void func_73(bool bParam0)
{
	if (__LIB_1__::func_662(4096))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1900073.f_247, bParam0);
	}
}

bool func_79(var uParam0, int iParam1, int iParam2)
{
	return __LIB_0__::func_27((uParam0[iParam1 /*263*/])->f_3, iParam2);
}

void func_81(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_184(iParam1)))
	{
		vVar2 = { func_258(iParam1) };
		bVar5 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_259(vVar2, 1092616192 /* Float: 10f */), 0, &fVar0);
		bVar6 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_259(vVar2, 1092616192 /* Float: 10f */), &fVar1, false);
		if (bVar5 == 1 && bVar6 == 1)
		{
			(uParam0[iParam1 /*263*/])->f_19 = (vVar2.z - fVar0);
			(uParam0[iParam1 /*263*/])->f_20 = (fVar0 - fVar1);
		}
		else
		{
			(uParam0[iParam1 /*263*/])->f_19 = -99999f;
			(uParam0[iParam1 /*263*/])->f_20 = -99999f;
		}
	}
}

void func_82(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_185(iParam1)))
	{
		vVar2 = { func_261(iParam1) };
		bVar5 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_259(vVar2, 1092616192 /* Float: 10f */), 0, &fVar0);
		bVar6 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_259(vVar2, 1092616192 /* Float: 10f */), &fVar1, false);
		if (bVar5 == 1 && bVar6 == 1)
		{
			(uParam0[iParam1 /*263*/])->f_21 = (vVar2.z - fVar0);
			(uParam0[iParam1 /*263*/])->f_22 = (fVar0 - fVar1);
		}
		else
		{
			(uParam0[iParam1 /*263*/])->f_21 = -99999f;
			(uParam0[iParam1 /*263*/])->f_22 = -99999f;
		}
	}
}

void func_83(var uParam0, var uParam1, var uParam2, int iParam3)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	if (Global_1900073.f_154[iParam3] == 1)
	{
		iVar3 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (func_238(iVar3) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iVar3]))
		{
			vVar0 = { func_262(uParam2, iVar3) };
		}
	}
	else if (func_263(Global_1900073.f_154[iParam3]))
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam1[iParam3 /*263*/])->f_13))
		{
			vVar0 = { func_264(uParam1, iParam3) };
		}
	}
	if (!__LIB_0__::func_86(vVar0))
	{
		bVar6 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_259(vVar0, 1092616192 /* Float: 10f */), 0, &fVar4);
		bVar7 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_259(vVar0, 1092616192 /* Float: 10f */), &fVar5, false);
		if (bVar6 == 1 && bVar7 == 1)
		{
			(uParam1[iParam3 /*263*/])->f_23 = (vVar0.z - fVar4);
			(uParam1[iParam3 /*263*/])->f_24 = (fVar4 - fVar5);
		}
		else
		{
			(uParam1[iParam3 /*263*/])->f_23 = -99999f;
			(uParam1[iParam3 /*263*/])->f_24 = -99999f;
		}
	}
}

void func_84(var uParam0, var uParam1)
{
	int iVar0;
	if (func_50(uParam0, 8))
	{
		return;
	}
	func_51(uParam0, 8);
	if (__LIB_1__::func_662(32))
	{
		func_265(uParam1, Global_1900073.f_152, 1);
	}
	else
	{
		func_265(uParam1, 0, 1);
	}
	uParam1->f_706 = func_266();
	func_267(&(uParam1->f_1161));
	__LIB_1__::func_148(&(uParam1->f_702));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_196(uParam1, iVar0);
		iVar0++;
	}
}

void func_85(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (func_50(uParam0, 262144))
	{
		return;
	}
	func_51(uParam0, 262144);
	if (func_46(&(uParam0->f_676)))
	{
		return;
	}
	iVar0 = func_268(uParam1);
	iVar1 = __LIB_10__::func_762(iVar0);
	if (!__LIB_8__::func_951(iVar1))
	{
		return;
	}
	iVar2 = __LIB_10__::func_763(iVar1, 2);
	if (iVar2 == 0)
	{
		return;
	}
	iVar3 = func_270(iVar0);
	if (iVar3 == 0)
	{
		return;
	}
	__LIB_1__::func_266(&iVar4, Global_36, 0f, 0f, 0f, 100f, 100f, 100f);
	iVar6 = ITEMSET::CREATE_ITEMSET(true);
	iVar7 = ENTITY::_0x886171A12F400B89(iVar4, iVar6, 1);
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < iVar7)
	{
		iVar5 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar8, iVar6));
		if ((ENTITY::DOES_ENTITY_EXIST(iVar5) && ENTITY::GET_ENTITY_MODEL(iVar5) == iVar2) && PED::_GET_PED_META_OUTFIT_HASH(iVar5) == iVar3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar6);
			__LIB_0__::func_172(iVar4);
			func_51(uParam0, 524288);
			return;
		}
		iVar8++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar6);
	__LIB_0__::func_172(iVar4);
}

void func_86(var uParam0)
{
	int iVar0;
	if (Global_1900073.f_16 == 0)
	{
		return;
	}
	Global_1900073.f_16 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_272(uParam0, iVar0, 11);
		iVar0++;
	}
}

bool func_89(int iParam0)
{
	if (((((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 9) || iParam0 == 10) || iParam0 == 11)
	{
		return true;
	}
	return false;
}

bool func_90(var uParam0, int iParam1)
{
	if (iParam1 == 1 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_163[iParam1]))
	{
		if (Global_1900073.f_26[0 /*30*/] == 1 || Global_1900073.f_26[0 /*30*/] == 2)
		{
			return true;
		}
	}
	return false;
}

void func_91(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == 0 || iParam2 == 1)
	{
		func_272(uParam1, iParam2, 1);
	}
	else if (func_273(uParam0, iParam2))
	{
		func_272(uParam1, iParam2, 1);
	}
	else if (Global_1900073.f_152 == 0)
	{
		func_272(uParam1, iParam2, 2);
	}
	else
	{
		func_272(uParam1, iParam2, 1);
	}
}

void func_92(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_274(uParam0, uParam1, uParam2, iParam3))
	{
		func_272(uParam2, iParam3, 3);
	}
}

void func_93(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_275(uParam0, uParam1, uParam2, iParam3))
	{
		func_272(uParam2, iParam3, 3);
	}
	else if (func_276(uParam2, iParam3) && func_277(uParam2))
	{
		func_272(uParam2, iParam3, 1);
	}
}

void func_94(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_278(uParam0, uParam2, iParam3))
	{
		func_279(uParam0, uParam1, uParam2, iParam3);
	}
}

void func_95(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_276(uParam2, iParam3))
	{
		return;
	}
	if (func_280(uParam0, uParam1, &(uParam2->f_163[iParam3]), __LIB_8__::func_952(iParam3)))
	{
		func_272(uParam2, iParam3, 11);
	}
	else if (func_281(uParam1, uParam2, iParam3))
	{
		func_282(uParam0, uParam1, uParam2, iParam3);
	}
	else if (__LIB_8__::func_952(iParam3))
	{
		func_283(uParam0, uParam1, uParam2, iParam3);
	}
	else if (iParam3 == 1)
	{
		func_284(uParam0, uParam1, uParam2, iParam3);
	}
	else if (((!__LIB_0__::func_163(uParam2->f_163[iParam3], 1139527981) && !__LIB_0__::func_163(uParam2->f_163[iParam3], 518218985)) && !__LIB_0__::func_163(uParam2->f_163[iParam3], -773337285)) && !PED::IS_PED_FLEEING(uParam2->f_163[iParam3]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam2->f_163[iParam3], false);
		TASK::TASK_ANIMAL_UNALERTED(uParam2->f_163[iParam3], -1, 0, 0, 0);
	}
}

void func_96(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = func_194(uParam0, uParam1, uParam2, iParam3);
	if (iVar0 == -1)
	{
		func_282(uParam0, uParam1, uParam2, iParam3);
	}
	else if (iVar0 != -1 && !__LIB_0__::func_163(uParam2->f_163[iParam3], 1227113341))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(uParam2->f_163[iParam3]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam2->f_163[iParam3], true, true);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam2->f_163[iParam3], true);
		TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam3], true, false);
		TASK::TASK_GO_TO_ENTITY(uParam2->f_163[iParam3], __LIB_14__::func_185(iVar0), -1, 0f, 2f, 0f, 0);
	}
}

void func_97(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	PED::SET_PED_RESET_FLAG(uParam2->f_163[iParam3], 64, true);
	iVar0 = func_194(uParam0, uParam1, uParam2, iParam3);
	if (iVar0 != -1 && Global_1900073.f_26[iVar0 /*30*/] == 7)
	{
		if ((uParam1[iVar0 /*263*/])->f_233 != 9)
		{
			func_286(uParam0, uParam1, uParam2, iParam3, iVar0);
		}
		func_287(uParam1, uParam2, iParam3, iVar0);
		func_288(uParam0, uParam1, uParam2, iParam3, iVar0);
		func_289(uParam0, uParam1, uParam2, iParam3, iVar0);
	}
}

void func_98(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (uParam2->f_614[iParam3] == 0)
	{
		TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam3], true, false);
		PED::SET_PED_CONFIG_FLAG(uParam2->f_163[iParam3], 436, true);
		TASK::TASK_ANIMAL_UNALERTED(uParam2->f_163[iParam3], -1, 0, 0, 0);
		uParam2->f_614[iParam3] = 1;
	}
	else if (!PED::GET_PED_CONFIG_FLAG(uParam2->f_163[iParam3], 436, true))
	{
		func_282(uParam0, uParam1, uParam2, iParam3);
	}
}

void func_99(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iParam3]))
	{
		func_272(uParam2, iParam3, 11);
		return;
	}
	if (__LIB_0__::func_264(&(uParam2->f_777[iParam3 /*3*/])) >= 6f)
	{
		TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam3], true, false);
		func_279(uParam0, uParam1, uParam2, iParam3);
	}
	else if (!__LIB_0__::func_75(&(uParam2->f_898[iParam3 /*3*/])) || __LIB_1__::func_871(&(uParam2->f_898[iParam3 /*3*/])) >= 250)
	{
		__LIB_1__::func_148(&(uParam2->f_898[iParam3 /*3*/]));
		if ((!__LIB_0__::func_163(uParam2->f_163[iParam3], 518218985) && !__LIB_0__::func_163(uParam2->f_163[iParam3], -773337285)) && !PED::IS_PED_FLEEING(uParam2->f_163[iParam3]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam2->f_163[iParam3], true);
			TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam3], true, false);
			TASK::TASK_SMART_FLEE_COORD(uParam2->f_163[iParam3], uParam2->f_1019[iParam3 /*3*/], 10f, 6000, 8, 1077936128);
		}
	}
}

void func_100(var uParam0, int iParam1)
{
	if (__LIB_0__::func_163(uParam0->f_163[iParam1], 1227113341))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_163[iParam1], true, false);
	}
	PED::SET_PED_RESET_FLAG(uParam0->f_163[iParam1], 64, true);
}

void func_101(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_276(uParam2, iParam3))
	{
		func_29(uParam0, uParam1, uParam2, iParam3, 1, 0);
	}
}

bool func_102(int iParam0, int iParam1, int iParam2)
{
	if (__LIB_0__::func_27(Global_1900073.f_26[iParam0 /*30*/].f_5, iParam1))
	{
		if (iParam2 == 1)
		{
		}
		return true;
	}
	return false;
}

void func_103()
{
	if (Global_1900073.f_11 == 1)
	{
		return;
	}
	__LIB_0__::func_105(1);
}

void func_105(var uParam0, int iParam1)
{
	if (uParam0->f_683 != iParam1)
	{
		uParam0->f_683 = iParam1;
	}
}

bool func_106(var uParam0)
{
	if ((__LIB_0__::func_86(uParam0->f_701) && __LIB_0__::func_181()) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_292(4), true) < 100f)
	{
		uParam0->f_701 = { 2186.408f, -1494.255f, 40.8597f };
	}
	if (!__LIB_0__::func_86(uParam0->f_701))
	{
		return true;
	}
	if (uParam0->f_697 == 0)
	{
		TASK::_0x0E184495B27BB57D();
		uParam0->f_687.f_1 = TASK::_0x74F0209674864CBD();
		TASK::_0xE9225354FB7437A7(uParam0->f_687.f_1, 1);
		TASK::_0x5D9B0BAAF04CF65B(uParam0->f_687.f_1, 50, 2, 0);
		TASK::_0x5D9B0BAAF04CF65B(uParam0->f_687.f_1, 44, 1, 0);
		TASK::_0x5D9B0BAAF04CF65B(uParam0->f_687.f_1, 64, 1, 0);
		TASK::_0x885D19AC2B6FBFF4(uParam0->f_687.f_1, 1);
		TASK::_0x2B8AF29A78024BD3(uParam0->f_687.f_1);
		uParam0->f_697 = 1;
	}
	if (TASK::_0x1AC5A8AB50CFAA33(uParam0->f_687.f_1))
	{
		uParam0->f_696 = TASK::_0x0365000D8BF86531(&(uParam0->f_687.f_1));
	}
	else
	{
		func_112(uParam0);
		return false;
	}
	switch (uParam0->f_696)
	{
		case 0:
			uParam0->f_697 = 0;
			break;
		case 3:
			uParam0->f_709++;
			uParam0->f_701 = { TASK::_0x865732725536EE39(&(uParam0->f_687.f_1)) };
			if (!func_293(uParam0->f_701))
			{
				func_294(uParam0);
			}
			return true;
		case 4:
			uParam0->f_709++;
			func_112(uParam0);
			if (uParam0->f_709 > 5)
			{
				func_294(uParam0);
				return true;
			}
			break;
	}
	return false;
}

bool func_108(var uParam0, var uParam1)
{
	if (__LIB_0__::func_86(uParam0->f_698) || __LIB_0__::func_86(uParam0->f_701))
	{
		return false;
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	uParam0->f_704 = __LIB_2__::func_916(uParam0->f_701, uParam0->f_698);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(func_53(uParam1, 0), uParam0->f_701, uParam0->f_704, true, true, true);
	uParam0->f_36 = { uParam0->f_701 };
	return true;
}

bool func_109(var uParam0)
{
	if (__LIB_0__::func_264(&(uParam0->f_684)) > 5f)
	{
		return true;
	}
	if (!STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x513F8AA5BF2F17CF(uParam0->f_701, 50f, 0);
		STREAMING::_0xA8432A14D4DC2101(uParam0->f_701);
	}
	else if (STREAMING::_0x0909F71B5C070797() && STREAMING::_HAS_COLLISION_LOADED_AT_COORD(uParam0->f_701))
	{
		return true;
	}
	return false;
}

bool func_110(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (((((((func_297() || func_298(&(uParam0->f_105), iParam1)) || __LIB_3__::func_127(uParam0->f_105[iParam1])) || func_299(iParam1)) || func_300(&(uParam0->f_105), iParam1)) || ((iParam2 == 0 && __LIB_0__::func_75(&(uParam0->f_105.f_460))) && __LIB_1__::func_871(&(uParam0->f_105.f_460)) < 3000)) || (iParam2 == 0 && __LIB_0__::func_104())) || (uParam0->f_683 >= 1 && uParam0->f_683 <= 4))
	{
		return false;
	}
	func_103();
	if (iParam1 == 61)
	{
		uParam0->f_105[iParam1] = __LIB_0__::func_45(MISC::_CREATE_VAR_STRING(10, func_302(iParam1), func_303(Global_1900073.f_159[0])), iParam3, 0, 0, 0, 1);
	}
	else
	{
		uParam0->f_105[iParam1] = __LIB_0__::func_45(func_302(iParam1), iParam3, 0, 0, 0, 1);
	}
	if (iParam4 == 1)
	{
		uParam0->f_105.f_77[iParam1] = 1;
	}
	__LIB_1__::func_148(&(uParam0->f_105.f_460));
	return true;
}

void func_112(var uParam0)
{
	uParam0->f_687.f_1 = TASK::_0xE1C105E6BBA48270();
	uParam0->f_701 = { 0f, 0f, 0f };
	uParam0->f_697 = 0;
	uParam0->f_687 = 0;
	uParam0->f_687.f_3 = { 0f, 0f, 0f };
	uParam0->f_687.f_2 = 0;
}

bool func_113(var uParam0)
{
	if (func_50(uParam0, 4))
	{
		return true;
	}
	if (func_1() || uParam0->f_73 == 0)
	{
		return false;
	}
	func_39();
	if (func_50(uParam0, 32))
	{
		if (!func_305(&(Global_1900073.f_7), 0))
		{
			return false;
		}
		if (uParam0->f_73 > 1)
		{
		}
		if (uParam0->f_73 > 2)
		{
		}
	}
	else if (uParam0->f_676 == 1)
	{
	}
	else if (uParam0->f_676.f_2 == 1)
	{
	}
	func_51(uParam0, 4);
	return true;
}

void func_114(var uParam0, var uParam1, int iParam2)
{
	if ((func_115(uParam1, iParam2) != 0 && func_115(uParam1, iParam2) != 7) && func_115(uParam1, iParam2) != 8)
	{
		if (ENTITY::IS_ENTITY_DEAD(func_53(uParam1, iParam2)))
		{
			func_200(uParam1, iParam2, 7);
		}
		else
		{
			PED::SET_PED_RESET_FLAG(func_53(uParam1, iParam2), 134, true);
			PED::SET_PED_RESET_FLAG(func_53(uParam1, iParam2), 12, true);
			if (__LIB_1__::func_672(iParam2, 1024))
			{
				func_200(uParam1, iParam2, 7);
			}
			else if ((!__LIB_1__::func_672(iParam2, 2) && __LIB_4__::func_188(uParam0) == 4) && Global_1900073.f_13 == 0)
			{
				__LIB_18__::func_162(iParam2, 2);
			}
			else if (func_69(iParam2, 1, 1) && __LIB_1__::func_672(iParam2, 32768))
			{
				TASK::_0x88FD60D846D9CD63(func_53(uParam1, iParam2));
			}
		}
	}
}

int func_115(var uParam0, int iParam1)
{
	return (uParam0[iParam1 /*263*/])->f_5;
}

void func_116(var uParam0, var uParam1, int iParam2)
{
	if (Global_1900073.f_174[iParam2] == 0 && !ENTITY::DOES_ENTITY_EXIST(func_53(uParam1, iParam2)))
	{
		if (func_50(uParam0, 32))
		{
			if (__LIB_0__::func_866(Global_1900073.f_7[(iParam2 - 1)], 0))
			{
				(*uParam1)[iParam2 /*263*/] = Global_1360165[Global_1900073.f_7[(iParam2 - 1)] /*1157*/];
			}
		}
		else
		{
			func_307(uParam1, iParam2);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_53(uParam1, iParam2)) && func_38(uParam0, uParam1, iParam2, 1))
	{
		if (func_69(iParam2, 1, 1))
		{
			func_200(uParam1, iParam2, 1);
		}
		else
		{
			func_200(uParam1, iParam2, 2);
		}
	}
}

void func_117(var uParam0, int iParam1)
{
	if (__LIB_0__::func_75(&((uParam0[iParam1 /*263*/])->f_260)) && __LIB_1__::func_871(&((uParam0[iParam1 /*263*/])->f_260)) < (iParam1 - 1) * 500)
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(func_53(uParam0, iParam1), false))
	{
		if (!__LIB_0__::func_163(func_53(uParam0, iParam1), -828834893))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(func_53(uParam0, iParam1), 0, 67108864);
		}
	}
	else
	{
		func_200(uParam0, iParam1, 2);
	}
}

void func_118(var uParam0, var uParam1, int iParam2)
{
	if (__LIB_0__::func_75(&((uParam1[iParam2 /*263*/])->f_260)) && __LIB_1__::func_871(&((uParam1[iParam2 /*263*/])->f_260)) < (iParam2 - 1) * 500)
	{
		return;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(func_53(uParam1, iParam2), joaat("WEAPON_FISHINGROD"), 0, false))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(func_53(uParam1, iParam2), joaat("WEAPON_FISHINGROD"), 1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(func_53(uParam1, iParam2), joaat("WEAPON_FISHINGROD"), 0, false) && !__LIB_0__::func_163(func_53(uParam1, iParam2), 716706914))
	{
		if (__LIB_1__::func_372(func_53(uParam1, iParam2), 0) != joaat("WEAPON_FISHINGROD"))
		{
			if (func_308())
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_53(uParam1, iParam2), joaat("WEAPON_FISHINGROD"), true, 0, false, false);
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_53(uParam1, iParam2), joaat("WEAPON_FISHINGROD"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(func_53(uParam1, iParam2), 1, 0, 0, 0);
			}
			PED::_0x2208438012482A1A(func_53(uParam1, iParam2), false, false);
		}
		else
		{
			if (func_69(iParam2, 1, 1))
			{
				if (!func_138(uParam0, uParam1, iParam2, 1))
				{
					return;
				}
			}
			func_309(uParam0, uParam1, iParam2, joaat("UPGRADE_FSH_BAIT_BREAD"), 0, 1);
			__LIB_8__::func_674(iParam2, 128);
			func_200(uParam1, iParam2, 3);
		}
	}
}

void func_119(var uParam0, int iParam1)
{
	func_310(uParam0, iParam1);
	if (func_311(uParam0, iParam1))
	{
		func_312(uParam0, iParam1);
		func_200(uParam0, iParam1, 4);
	}
}

void func_120(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (__LIB_1__::func_672(iParam3, 2) && (Global_1900073.f_26[iParam3 /*30*/] == 1 || Global_1900073.f_26[iParam3 /*30*/] == 2))
	{
		func_200(uParam1, iParam3, 5);
	}
	else
	{
		func_141(uParam0, uParam1, uParam2, iParam3);
	}
}

void func_121(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_163(func_53(uParam0, iParam1), 716706914))
	{
		if (!__LIB_1__::func_672(iParam1, 4096) && __LIB_1__::func_372(func_53(uParam0, iParam1), 0) == joaat("WEAPON_FISHINGROD"))
		{
			if (func_313())
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_53(uParam0, iParam1), joaat("WEAPON_UNARMED"), true, 0, false, false);
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_53(uParam0, iParam1), joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(func_53(uParam0, iParam1), 1, 0, 0, 0);
			}
			PED::_0x2208438012482A1A(func_53(uParam0, iParam1), false, false);
		}
		else
		{
			if (__LIB_1__::func_672(iParam1, 512))
			{
				func_200(uParam0, iParam1, 7);
			}
			else
			{
				func_200(uParam0, iParam1, 6);
			}
			__LIB_8__::func_674(iParam1, 256);
		}
	}
}

void func_122(var uParam0, int iParam1)
{
	if (__LIB_1__::func_672(iParam1, 512))
	{
		func_200(uParam0, iParam1, 7);
	}
	else if (((!__LIB_1__::func_672(iParam1, 2) && func_68(uParam0, 0)) || (__LIB_1__::func_672(iParam1, 2) && __LIB_1__::func_672(iParam1, 256))) || func_68(uParam0, iParam1))
	{
		if (func_69(iParam1, 1, 1))
		{
			func_200(uParam0, iParam1, 1);
		}
		else
		{
			func_200(uParam0, iParam1, 2);
		}
		__LIB_8__::func_674(iParam1, 2);
	}
}

void func_123(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_186(uParam1, iParam3);
	func_187(uParam0, uParam1, uParam2, iParam3, 0, 0, 0);
	func_36(uParam1, iParam3);
	func_38(uParam0, uParam1, iParam3, 0);
}

void func_133()
{
	HUD::_TEXT_DATABASE_REQUEST("MGFSH");
	HUD::_TEXT_DATABASE_REQUEST("FISHAUD");
	STREAMING::REQUEST_PTFX_ASSET();
}

bool func_134(var uParam0)
{
	if (!func_50(uParam0, 1))
	{
		return false;
	}
	if ((!MISC::IS_STRING_NULL_OR_EMPTY("MGFSH") && HUD::_DOES_TEXT_DATABASE_EXIST("MGFSH")) && !HUD::_TEXT_DATABASE_HAS_LOADED("MGFSH"))
	{
		return false;
	}
	if ((!MISC::IS_STRING_NULL_OR_EMPTY("FISHAUD") && HUD::_DOES_TEXT_DATABASE_EXIST("FISHAUD")) && !HUD::_TEXT_DATABASE_HAS_LOADED("FISHAUD"))
	{
		return false;
	}
	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		return false;
	}
	if (!AUDIO::_0xD9130842D7226045(*uParam0, 1))
	{
		return false;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
	}
	return true;
}

void func_135(var uParam0, var uParam1)
{
	if ((!func_322() || func_68(uParam1, 0)) || __LIB_0__::func_163(func_53(uParam1, 0), 716706914))
	{
		uParam0->f_18 = 0;
		func_323(uParam0, 0);
		func_324(uParam0);
	}
	else if (Global_1935496.f_30 == joaat("WEAPON_FISHINGROD"))
	{
		uParam0->f_18 = Global_1935496.f_30;
		func_323(uParam0, 1);
		func_326(uParam0, 2, !__LIB_8__::func_957(&(uParam0->f_25), 4));
		func_327(&(uParam0->f_25), 4);
		func_328(uParam0, 2);
	}
	else if (__LIB_8__::func_954())
	{
		uParam0->f_18 = Global_1935496.f_30;
		func_323(uParam0, 1);
		func_326(uParam0, 1, !__LIB_8__::func_957(&(uParam0->f_25), 2));
		func_327(&(uParam0->f_25), 2);
		func_328(uParam0, 1);
	}
	else if (uParam0->f_18 != joaat("WEAPON_FISHINGROD"))
	{
		func_323(uParam0, 1);
		func_326(uParam0, 0, !__LIB_8__::func_957(&(uParam0->f_25), 1));
		func_327(&(uParam0->f_25), 1);
		func_328(uParam0, 0);
	}
	else
	{
		func_324(uParam0);
	}
}

bool func_136(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	if (ENTITY::IS_ENTITY_DEAD(Global_1900073.f_194))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(func_53(uParam0, 0), true))
		{
			Global_1900073.f_194 = PED::GET_VEHICLE_PED_IS_IN(func_53(uParam0, 0), false);
		}
		else
		{
			iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(Global_36, 10f, 0, 75782);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				Global_1900073.f_194 = iVar0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1900073.f_194))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_1900073.f_194, true, false) };
			vVar4 = { ENTITY::GET_ENTITY_ROTATION(Global_1900073.f_194, 2) };
		}
	}
	return !ENTITY::IS_ENTITY_DEAD(Global_1900073.f_194);
}

bool func_137(var uParam0, bool bParam1)
{
	if ((bParam1 == 1 && func_50(uParam0, 16384)) || (bParam1 == 0 && !func_50(uParam0, 16384)))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_1900073.f_194))
	{
		if (bParam1 == 1)
		{
			VEHICLE::BRING_VEHICLE_TO_HALT(Global_1900073.f_194, 0.1f, 1, false);
		}
		VEHICLE::SET_BOAT_ANCHOR(Global_1900073.f_194, bParam1);
		VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(Global_1900073.f_194, bParam1, 0);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_1900073.f_194, !bParam1);
		if (bParam1 == 1)
		{
			func_51(uParam0, 16384);
		}
		else
		{
			func_204(uParam0, 16384);
		}
		return true;
	}
	return false;
}

bool func_138(var uParam0, var uParam1, int iParam2, int iParam3)
{
	float fVar0;
	if (iParam3 == 1)
	{
		if (!__LIB_1__::func_672(iParam2, 16384) && !ENTITY::IS_ENTITY_DEAD(Global_1900073.f_194))
		{
			__LIB_18__::func_162(iParam2, 16384);
			fVar0 = ENTITY::GET_ENTITY_HEADING(Global_1900073.f_194);
			(uParam1[iParam2 /*263*/])->f_258 = func_330(&(uParam0->f_676), iParam2);
			(uParam1[iParam2 /*263*/])->f_259 = func_331(iParam2);
			(uParam1[iParam2 /*263*/])->f_10 = __LIB_0__::func_70((fVar0 + (uParam1[iParam2 /*263*/])->f_258), 0f, 360f);
		}
		return __LIB_1__::func_672(iParam2, 16384);
	}
	else
	{
		__LIB_8__::func_674(iParam2, 8192);
		__LIB_8__::func_674(iParam2, 16384);
		__LIB_8__::func_674(iParam2, 32768);
		__LIB_8__::func_674(iParam2, 524288);
		func_333(iParam2, 65536);
		return true;
	}
	return false;
}

bool func_139(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_1__::func_672(iParam1, 16384))
	{
		return false;
	}
	if (__LIB_1__::func_672(iParam1, 32768))
	{
		return true;
	}
	if (iParam1 == 0 && PED::IS_PED_IN_ANY_VEHICLE(func_53(uParam0, iParam1), true))
	{
		if (!__LIB_0__::func_163(func_53(uParam0, iParam1), -828834893))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(func_53(uParam0, iParam1), 0, 67108864);
		}
		return false;
	}
	if (__LIB_1__::func_672(iParam1, 8192))
	{
		iVar0 = 0;
		if (iParam1 != 0)
		{
			iVar0 = 2;
		}
		TASK::_0x517D01BF27B682D1(func_53(uParam0, iParam1), Global_1900073.f_194, 0f, 0f, 0f, __LIB_3__::func_745((uParam0[iParam1 /*263*/])->f_258), iVar0);
		func_153(iParam1, 65536, 1);
	}
	__LIB_18__::func_162(iParam1, 32768);
	return __LIB_1__::func_672(iParam1, 32768);
}

bool func_140(var uParam0, var uParam1, int iParam2)
{
	if (!func_68(uParam1, iParam2))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(func_334(uParam1, iParam2)))
	{
		return true;
	}
	if (iParam2 == 0)
	{
		if (PED::IS_PED_IN_COMBAT(func_53(uParam1, iParam2), 0))
		{
			if (func_68(uParam1, iParam2))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_53(uParam1, iParam2), joaat("WEAPON_UNARMED"), false, 0, false, false);
			}
			return true;
		}
		if (Global_1900073.f_17 == 0)
		{
			if (func_68(uParam1, iParam2))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_53(uParam1, iParam2), joaat("WEAPON_UNARMED"), false, 0, false, false);
			}
			return true;
		}
		if (__LIB_1__::func_672(iParam2, 2) && (Global_1900073.f_26[iParam2 /*30*/] == 1 || Global_1900073.f_26[iParam2 /*30*/] == 2))
		{
			if (func_68(uParam1, iParam2))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_53(uParam1, iParam2), joaat("WEAPON_UNARMED"), false, 0, false, false);
			}
			return true;
		}
		if (Global_1935496.f_25 == 1)
		{
			Global_1935496.f_25 = 0;
			__LIB_1__::func_148(&(uParam0->f_102));
			if (func_68(uParam1, iParam2))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_53(uParam1, iParam2), joaat("WEAPON_UNARMED"), false, 0, false, false);
			}
			return true;
		}
	}
	return false;
}

void func_141(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		if (uParam0->f_676.f_1 == 1)
		{
			__LIB_19__::func_447(joaat("UPGRADE_FSH_BAIT_CHEESE"));
		}
		else if (uParam0->f_676 == 1)
		{
			__LIB_19__::func_447(joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"));
		}
		else if (uParam0->f_676.f_4 == 1)
		{
			if (!__LIB_1__::func_662(128))
			{
				func_336();
			}
			else
			{
				__LIB_19__::func_447(joaat("UPGRADE_FSH_BAIT_CRICKET"));
			}
		}
		else if (uParam0->f_676.f_2 == 1)
		{
			__LIB_19__::func_447(joaat("UPGRADE_FSH_BAIT_LURE_LAKE"));
		}
		else
		{
			func_336();
		}
	}
	func_337(uParam1, uParam2, iParam3);
	switch (Global_1900073.f_26[iParam3 /*30*/])
	{
		case 0:
			func_338(uParam0, iParam3);
			break;
		case 1:
			func_339(uParam0, uParam1, uParam2, iParam3);
			break;
		case 2:
			func_340(uParam0, uParam1, uParam2, iParam3);
			break;
		case 3:
			func_341(uParam0, iParam3);
			break;
		case 4:
			func_342(uParam0, uParam1, uParam2, iParam3);
			break;
		case 5:
			func_343(uParam0, uParam1, uParam2, iParam3);
			break;
		case 6:
			func_344(uParam0, uParam1, uParam2, iParam3);
			break;
		case 7:
			func_345(uParam0, uParam1, uParam2, iParam3);
			break;
		case 8:
			func_346(uParam0, iParam3);
			break;
		case 9:
			func_347(uParam0, uParam1, uParam2, iParam3);
			break;
		case 10:
			func_348(uParam0, uParam1, uParam2, iParam3);
			break;
		case 11:
			func_349(uParam0, uParam1, uParam2, iParam3);
			break;
		case 12:
			func_350(uParam0, uParam1, uParam2, iParam3);
			break;
		case 13:
			func_351(uParam0, iParam3);
			break;
	}
	if (iParam3 == 0)
	{
		HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
		func_172(uParam0, 1);
		func_352(uParam0);
		func_353(uParam0, uParam1);
		func_354(uParam0, uParam1);
		func_355(uParam0, uParam1, uParam2);
		if ((func_69(iParam3, 1, 1) && !VOLUME::_DOES_VOLUME_EXIST(uParam0->f_65)) && !ENTITY::IS_ENTITY_DEAD(Global_1900073.f_194))
		{
			__LIB_7__::func_734(&(uParam0->f_65), ENTITY::GET_ENTITY_COORDS(Global_1900073.f_194, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(Global_1900073.f_194), 3f, 6.7f, 50f, "volumeBoat");
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_TOGGLE_HOLSTER")))
		{
			func_153(iParam3, 32768, 1);
		}
		if (!func_357())
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		}
	}
}

int func_142(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 < 0 || iParam3 > func_31(uParam0))
	{
	}
	if ((uParam1[iParam3 /*263*/])->f_4 >= *uParam2)
	{
	}
	return (uParam1[iParam3 /*263*/])->f_4;
}

bool func_143(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (__LIB_1__::func_672(iParam2, 4) || __LIB_1__::func_672(iParam2, 8))
	{
		return false;
	}
	if (((Global_1900073.f_26[iParam2 /*30*/] == 6 && (uParam0[iParam2 /*263*/])->f_74 == 0) && func_238(iParam3)) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_163[iParam3]))
	{
		return true;
	}
	return false;
}

float func_144(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (!func_238(iVar0))
	{
		return 0f;
	}
	return (uParam2->f_409[iVar0] / uParam2->f_706);
}

bool func_145(var uParam0, int iParam1, int iParam2)
{
	if ((((Global_1900073.f_26[iParam1 /*30*/] == 7 || Global_1900073.f_26[iParam1 /*30*/] == 12) && Global_1900073.f_154[iParam1] == 1) && func_238(iParam2)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_163[iParam2]))
	{
		return true;
	}
	return false;
}

bool func_146(var uParam0, int iParam1)
{
	return uParam0->f_204[iParam1] == 6;
}

float func_147(var uParam0, int iParam1)
{
	return __LIB_0__::func_251((BUILTIN::TO_FLOAT((uParam0[iParam1 /*263*/])->f_205) / 200f), 0f, 1f);
}

float func_148(var uParam0, int iParam1)
{
	return __LIB_0__::func_251((BUILTIN::TO_FLOAT((uParam0[iParam1 /*263*/])->f_206) / 200f), 0f, 1f);
}

float func_149(var uParam0, int iParam1)
{
	return __LIB_0__::func_251((BUILTIN::TO_FLOAT((uParam0[iParam1 /*263*/])->f_207) / 200f), 0f, 1f);
}

bool func_150(var uParam0, int iParam1)
{
	if (((Global_1900073.f_26[iParam1 /*30*/] == 7 || Global_1900073.f_26[iParam1 /*30*/] == 12) && Global_1900073.f_154[iParam1] == 2) && ENTITY::DOES_ENTITY_EXIST((uParam0[iParam1 /*263*/])->f_13))
	{
		return true;
	}
	return false;
}

float func_151(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	fVar0 = (func_359(uParam0, iParam2) / uParam1->f_706);
	return __LIB_0__::func_251(fVar0, 0f, 1f);
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_153(int iParam0, int iParam1, int iParam2)
{
	if (!func_360(iParam0, iParam1))
	{
		__LIB_1__::func_581(&(Global_1900073.f_26[iParam0 /*30*/].f_6), iParam1);
		if (iParam2 == 1)
		{
		}
	}
}

bool func_155(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_SESSION())
		{
			iVar0 = iParam0;
			if (iVar0 < 0 || iVar0 >= 32)
			{
				return false;
			}
			if (!Global_1051044.f_1[iVar0])
			{
				return false;
			}
		}
	}
	return true;
}

bool func_156(int iParam0)
{
	int iVar0;
	bool bVar1;
	bVar1 = WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, true);
	return (bVar1 == 1 && iVar0 == joaat("WEAPON_FISHINGROD"));
}

void func_157(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_30 = TASK::_0xF3735ACD11ACD500(iParam1, uParam0);
	func_361(uParam0, iParam1);
	switch (*uParam0)
	{
		case 0:
			__LIB_0__::func_11(uParam0, iParam1, iParam2);
			break;
		case 1:
			__LIB_0__::func_11(uParam0, iParam1, iParam2);
			break;
		case 2:
			__LIB_0__::func_11(uParam0, iParam1, iParam2);
			break;
		case 3:
			__LIB_0__::func_11(uParam0, iParam1, iParam2);
			break;
		case 4:
			__LIB_0__::func_11(uParam0, iParam1, iParam2);
			break;
		case 5:
			__LIB_0__::func_11(uParam0, iParam1, iParam2);
			break;
		case 6:
			__LIB_0__::func_11(uParam0, iParam1, iParam2);
			break;
		case 7:
			__LIB_0__::func_11(uParam0, iParam1, iParam2);
			break;
		case 8:
			__LIB_0__::func_11(uParam0, iParam1, iParam2);
			break;
		case 9:
			__LIB_0__::func_11(uParam0, iParam1, iParam2);
			break;
		case 10:
			__LIB_0__::func_11(uParam0, iParam1, iParam2);
			break;
		case 11:
			__LIB_0__::func_11(uParam0, iParam1, iParam2);
			break;
		case 12:
			__LIB_0__::func_11(uParam0, iParam1, iParam2);
			break;
		case 13:
			__LIB_0__::func_11(uParam0, iParam1, iParam2);
			break;
	}
}

void func_158(var uParam0, int iParam1)
{
	uParam0->f_30 = 0;
	func_376(uParam0);
}

void func_160(var uParam0)
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		sVar1 = func_379(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			DECORATOR::DECOR_SET_FLOAT(func_53(uParam0, 0), sVar1, 0f);
		}
		iVar0++;
	}
}

void func_161()
{
	int iVar0;
	iVar0 = __LIB_5__::func_639();
	if (func_381(iVar0))
	{
		__LIB_6__::func_178(-1, -1, iVar0, 1, -1, 0);
	}
}

void func_162()
{
	__LIB_8__::func_675(4);
	__LIB_8__::func_674(0, 2);
	Global_1900073.f_16 = 0;
	Global_1900073.f_215[0] = 0;
	Global_1900073.f_225[0] = 0;
	Global_1900073.f_235[0] = 0;
	Global_1900073.f_153 = 0;
}

void func_163(int iParam0, bool bParam1)
{
	PED::_0xAE6004120C18DF97(iParam0, 0, bParam1);
	PED::_0xAE6004120C18DF97(iParam0, 2, bParam1);
	PED::_0xAE6004120C18DF97(iParam0, 3, bParam1);
	PED::_0xAE6004120C18DF97(iParam0, 4, bParam1);
	if (func_1())
	{
		PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(iParam0, PLAYER::PLAYER_ID(), bParam1);
	}
}

void func_164(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2 == 1)
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(func_53(uParam0, iParam1), 16);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(func_53(uParam0, iParam1), 8192);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(func_53(uParam0, iParam1), 16384);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(func_53(uParam0, iParam1), 32768);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(func_53(uParam0, iParam1), 262144);
	}
	else
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(func_53(uParam0, iParam1), 16);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(func_53(uParam0, iParam1), 8192);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(func_53(uParam0, iParam1), 16384);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(func_53(uParam0, iParam1), 32768);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(func_53(uParam0, iParam1), 262144);
	}
}

void func_165(var uParam0, int iParam1)
{
	char* sVar0;
	if (!func_46(uParam0) && !MISC::GET_MISSION_FLAG())
	{
		if (iParam1 == 1)
		{
			sVar0 = __LIB_0__::func_196(func_1(), "MMFSH", "MGFSH");
			MISC::_0x1096603B519C905F(sVar0);
		}
		else
		{
			MISC::_0x1096603B519C905F("");
		}
	}
}

void func_166(var uParam0, int iParam1, int iParam2)
{
	if (func_79(uParam0, iParam1, iParam2))
	{
		__LIB_1__::func_681(&((uParam0[iParam1 /*263*/])->f_3), iParam2);
	}
}

void func_167(var uParam0)
{
	if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3, uParam0->f_4))
	{
		uParam0->f_3 = uParam0->f_4;
		AUDIO::_0x6339C1EA3979B5F7(uParam0->f_3, uParam0->f_1);
	}
}

void func_169(int iParam0, float fParam1)
{
	bool bVar0;
	bVar0 = func_388(iParam0);
	if (__LIB_0__::func_708(0))
	{
		if (func_390(iParam0, 1, bVar0, 0, 0, 752097756, fParam1, 0, 0, 0))
		{
		}
	}
}

void func_170()
{
	if (!__LIB_0__::func_708(0))
	{
		if ((((!__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_BREAD"), 1, 0) || !__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CORN"), 1, 0)) || !__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CHEESE"), 1, 0)) || !__LIB_1__::func_707(joaat("UPGRADE_FSH_LURE_NONE"), 1, 0)) || !__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_NONE"), 1, 0))
		{
			func_391(2047322594, 1, 255, 0);
		}
		return;
	}
	if (!__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_BREAD"), 1, 0))
	{
		func_169(joaat("UPGRADE_FSH_BAIT_BREAD"), 0);
	}
	if (!__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CORN"), 1, 0))
	{
		func_169(joaat("UPGRADE_FSH_BAIT_CORN"), 0);
	}
	if (!__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CHEESE"), 1, 0))
	{
		func_169(joaat("UPGRADE_FSH_BAIT_CHEESE"), 0);
	}
	if ((((((!__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_LURE_LAKE"), 1, 0) && !__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_LURE_RIVER"), 1, 0)) && !__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"), 1, 0)) && !__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"), 1, 0)) && !__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"), 1, 0)) && !__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"), 1, 0)) && !__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"), 1, 0))
	{
		func_169(joaat("UPGRADE_FSH_LURE_NONE"), 0);
	}
}

void func_172(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (uParam0->f_94 == 0)
		{
			uParam0->f_94 = 1;
			HUD::_HIDE_HUD_COMPONENT(100665617);
		}
	}
	else if (uParam0->f_94 == 1)
	{
		uParam0->f_94 = 0;
		HUD::_DISPLAY_HUD_COMPONENT(100665617);
	}
}

void func_173(var uParam0, var uParam1)
{
	if (__LIB_8__::func_955(Global_40.f_11184[0]) && __LIB_1__::func_707(Global_40.f_11184[0], 1, 0))
	{
		func_309(uParam0, uParam1, 0, Global_40.f_11184[0], 0, 1);
	}
	else
	{
		func_309(uParam0, uParam1, 0, joaat("UPGRADE_FSH_BAIT_NONE"), 0, 1);
	}
}

void func_174()
{
	char* sVar0;
	char[] cVar1[8];
	int iVar2;
	if (__LIB_1__::func_662(4096))
	{
		sVar0 = __LIB_1__::func_925(__LIB_1__::func_72(Global_40.f_11184[0]), joaat("COLOR_PURE_WHITE"));
		if (__LIB_8__::func_955(Global_40.f_11184[0]))
		{
			StringIntConCat(&cVar1, __LIB_1__::func_614(Global_40.f_11184[0], 0, 0), 8);
		}
		iVar2 = -973584697;
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1900073.f_248, sVar0);
		if (func_396(Global_40.f_11184[0]))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1900073.f_249, "");
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1900073.f_249, &cVar1);
		}
		if (func_397(Global_40.f_11184[0]) || func_398(Global_40.f_11184[0]))
		{
			iVar2 = 1048406616;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1900073.f_250, iVar2);
	}
}

int func_176(var uParam0)
{
	if (*uParam0 == 1 || uParam0->f_2 == 1)
	{
		return 0;
	}
	return 1;
}

void func_177(bool bParam0)
{
	if (__LIB_1__::func_662(4096))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1900073.f_251, bParam0);
	}
}

void func_178(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		if (((uParam0->f_676 == 1 || uParam0->f_676.f_2 == 1) || func_400(uParam1, iParam2)) || func_401(uParam1, iParam2))
		{
			__LIB_18__::func_162(iParam2, 524288);
		}
		else
		{
			__LIB_8__::func_674(iParam2, 524288);
		}
	}
	else if (uParam0->f_676 == 1 || uParam0->f_676.f_2 == 1)
	{
		__LIB_18__::func_162(iParam2, 524288);
	}
	else
	{
		__LIB_8__::func_674(iParam2, 524288);
	}
	if (uParam0->f_676 == 1 || uParam0->f_676.f_2 == 1)
	{
		__LIB_18__::func_162(iParam2, 8192);
	}
}

void func_180(var uParam0)
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		sVar1 = func_379(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			DECORATOR::DECOR_REMOVE(func_53(uParam0, 0), sVar1);
		}
		iVar0++;
	}
}

void func_181(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 <= 0 || iParam1 <= 0)
	{
		PAD::SET_PAD_SHAKE(0, 0, 0);
		PAD::_0x14D29BB12D47F68C(0, 0, 0, 0, 0);
	}
	else
	{
		PAD::SET_PAD_SHAKE(0, iParam0, iParam1);
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam1) / 2f));
		PAD::_0x14D29BB12D47F68C(0, 0, 0, iParam0, __LIB_0__::func_309(iVar0, 0, 255));
	}
}

void func_183(var uParam0)
{
	func_324(uParam0);
	func_406(uParam0);
	func_407(uParam0);
	func_408(uParam0);
	func_409(uParam0);
	func_410(uParam0);
}

void func_184(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (uParam0->f_95 == 0)
		{
			uParam0->f_95 = 1;
			HUD::_HIDE_HUD_COMPONENT(-859384195);
		}
	}
	else if (uParam0->f_95 == 1)
	{
		uParam0->f_95 = 0;
		HUD::_DISPLAY_HUD_COMPONENT(-859384195);
	}
}

void func_185(int iParam0)
{
	bool bVar0;
	if (func_396(iParam0))
	{
		return;
	}
	bVar0 = func_411(iParam0);
	if (func_412(iParam0, 1, bVar0, -142743235, 0))
	{
	}
}

void func_186(var uParam0, int iParam1)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST((uParam0[iParam1 /*263*/])->f_25))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED((uParam0[iParam1 /*263*/])->f_25, false);
	}
}

void func_187(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (func_238(iVar0))
	{
		uParam2->f_1019[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(func_53(uParam1, iParam3), true, false) };
		if (iParam5 == 1)
		{
			func_413(uParam0, uParam1, uParam2, iParam3, iVar0);
		}
		else
		{
			func_282(uParam0, uParam1, uParam2, iVar0);
		}
		if (iParam6 == 1)
		{
			uParam2->f_655[iVar0] = (uParam1[iParam3 /*263*/])->f_235;
		}
	}
	else
	{
		func_414(uParam0, uParam1, iParam3, 0);
		func_333(iParam3, 512);
	}
	func_32(uParam1, iParam3);
	func_33(uParam1, iParam3);
	if (iParam4 == 1)
	{
		func_415(uParam0, uParam1, uParam2, iParam3, 2);
	}
	(uParam1[iParam3 /*263*/])->f_198 = 0;
}

void func_189(var uParam0)
{
	if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3, uParam0->f_2))
	{
		uParam0->f_3 = uParam0->f_2;
		AUDIO::_0x9428447DED71FC7E(uParam0->f_1);
	}
}

void func_190(var uParam0)
{
	if (func_46(&(uParam0->f_676)) || !func_50(uParam0, 131072))
	{
		return;
	}
	if (AUDIO::TRIGGER_MUSIC_EVENT("BOB_FISHING_STOP"))
	{
		func_204(uParam0, 131072);
	}
}

void func_191(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = iVar0;
		func_416(uParam0, iParam1, iVar1);
		if (iParam2 == 1)
		{
			func_417(uParam0, iParam1, iVar1, 0);
		}
		else
		{
			func_417(uParam0, iParam1, iVar1, 2);
		}
		__LIB_0__::func_37(&((uParam0[iParam1 /*263*/])->f_134[iVar0 /*3*/]));
		iVar0++;
	}
}

int func_194(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_31(uParam0))
	{
		if (func_142(uParam0, uParam1, uParam2, iVar0) == iParam3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_195(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
	}
	PED::DELETE_PED(iParam0);
}

void func_196(var uParam0, int iParam1)
{
	func_272(uParam0, iParam1, 0);
	uParam0->f_286[iParam1] = 0;
	uParam0->f_327[iParam1] = 15;
	uParam0->f_368[iParam1] = 0;
	uParam0->f_409[iParam1] = 0f;
	uParam0->f_450[iParam1] = 1f;
	uParam0->f_491[iParam1] = 0;
	uParam0->f_532[iParam1] = 0;
	uParam0->f_573[iParam1] = 0;
	uParam0->f_42[iParam1 /*3*/] = { 0f, 0f, 0f };
}

void func_198(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_4 == 1)
	{
		(uParam1[iParam2 /*263*/])->f_7 = { 1185.089f, -595.3312f, 68.0589f };
		(uParam1[iParam2 /*263*/])->f_10 = 265.3134f;
	}
	else if (uParam0->f_5 == 1)
	{
		if (!__LIB_1__::func_662(16))
		{
			(uParam1[iParam2 /*263*/])->f_7 = { 801.9244f, -1350.853f, 40.54487f };
			(uParam1[iParam2 /*263*/])->f_10 = 100.13f;
		}
		else
		{
			(uParam1[iParam2 /*263*/])->f_7 = { 730.6402f, -1502.721f, 40.66145f };
			(uParam1[iParam2 /*263*/])->f_10 = 173.41f;
		}
	}
}

void func_200(var uParam0, int iParam1, int iParam2)
{
	if (func_115(uParam0, iParam1) != iParam2)
	{
		(uParam0[iParam1 /*263*/])->f_5 = iParam2;
	}
}

void func_204(var uParam0, int iParam1)
{
	if (func_50(uParam0, iParam1))
	{
		__LIB_1__::func_681(&(uParam0->f_11), iParam1);
	}
}

bool func_236(var uParam0, int iParam1)
{
	if ((((((((((((iParam1 == 62 || iParam1 == 63) || iParam1 == 64) || iParam1 == 65) || iParam1 == 66) || iParam1 == 67) || iParam1 == 68) || iParam1 == 69) || iParam1 == 70) || iParam1 == 71) || iParam1 == 72) || iParam1 == 73) || iParam1 == 74)
	{
		return true;
	}
	if (func_46(uParam0))
	{
		return false;
	}
	if (((((((((((((((((((((((iParam1 == 21 || iParam1 == 22) || iParam1 == 25) || iParam1 == 27) || iParam1 == 29) || iParam1 == 39) || iParam1 == 30) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || iParam1 == 43) || iParam1 == 44) || iParam1 == 45) || iParam1 == 47) || iParam1 == 48) || iParam1 == 49) || iParam1 == 75) || iParam1 == 52) || iParam1 == 53) || iParam1 == 41) || iParam1 == 58) || iParam1 == 60) || iParam1 == 59)
	{
		return true;
	}
	return false;
}

void func_237(var uParam0, int iParam1)
{
	if ((*uParam0)[iParam1] != 0)
	{
		(*uParam0)[iParam1] = 0;
		uParam0->f_77[iParam1] = 0;
	}
}

bool func_238(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 40);
}

int func_247()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_FISHING_LEFT_AXIS_X")) * 127f));
}

int func_248()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_FISHING_LEFT_AXIS_Y")) * 127f));
}

int func_249()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_X")) * 127f));
}

int func_250()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_Y")) * 127f));
}

bool func_251(int iParam0)
{
	return Global_1900073.f_26[iParam0 /*30*/].f_4 > 0f;
}

void func_252(var uParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		if (HUD::_UIPROMPT_IS_VALID(uParam0->f_93))
		{
			HUD::_UIPROMPT_DELETE(uParam0->f_93);
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_83[iParam1]))
	{
		__LIB_1__::func_748(&(uParam0->f_83[iParam1]), 0, 1);
	}
}

Vector3 func_258(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_184(iParam0)))
	{
		return ENTITY::GET_ENTITY_COORDS(__LIB_14__::func_184(iParam0), true, false);
	}
	return 0f, 0f, 0f;
}

Vector3 func_259(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vVar0 = { vParam0 };
	vVar0.f_2 = (vVar0.z + fParam3);
	return vVar0;
}

Vector3 func_261(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_185(iParam0)))
	{
		return ENTITY::GET_ENTITY_COORDS(__LIB_14__::func_185(iParam0), true, false);
	}
	return 0f, 0f, 0f;
}

Vector3 func_262(var uParam0, int iParam1)
{
	if (func_238(iParam1) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_163[iParam1]))
	{
		return ENTITY::GET_ENTITY_COORDS(uParam0->f_163[iParam1], true, false);
	}
	return 0f, 0f, 0f;
}

bool func_263(int iParam0)
{
	if (iParam0 == 2)
	{
		return true;
	}
	return false;
}

Vector3 func_264(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[iParam1 /*263*/])->f_13))
	{
		return ENTITY::GET_ENTITY_COORDS((uParam0[iParam1 /*263*/])->f_13, true, false);
	}
	return 0f, 0f, 0f;
}

void func_265(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	Global_1900073.f_152 = iParam1;
	if (Global_1900073.f_152 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_1145[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1145[10] = 1;
		uParam0->f_1143 = 0;
	}
	else if (Global_1900073.f_152 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_1145[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1145[13] = 1;
		uParam0->f_1143 = 50;
	}
	else if (Global_1900073.f_152 == 3)
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_1145[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1145[4] = 1;
		uParam0->f_1143 = 100;
	}
	else if (iParam2 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_1145[iVar0] = 1;
			iVar0++;
		}
		uParam0->f_1143 = -1;
	}
}

float func_266()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	iVar3 = 0;
	while (iVar3 < 15)
	{
		iVar2 = iVar3;
		if (__LIB_10__::func_760(iVar2))
		{
			fVar1 = func_429(iVar2);
			if (fVar1 > fVar0)
			{
				fVar0 = fVar1;
			}
		}
		iVar3++;
	}
	return fVar0;
}

void func_267(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		(*uParam0)[iVar0 /*10*/] = 1;
		(uParam0[iVar0 /*10*/])->f_1[0] = 1;
		iVar0++;
	}
	(*uParam0)[0 /*10*/] = 4;
	(uParam0[0 /*10*/])->f_1[0] = 0;
	(uParam0[0 /*10*/])->f_1[1] = 1;
	(uParam0[0 /*10*/])->f_1[2] = 0;
	(uParam0[0 /*10*/])->f_1[3] = 1;
	(*uParam0)[1 /*10*/] = 5;
	(uParam0[1 /*10*/])->f_1[0] = 0;
	(uParam0[1 /*10*/])->f_1[1] = 0;
	(uParam0[1 /*10*/])->f_1[2] = 0;
	(uParam0[1 /*10*/])->f_1[3] = 1;
	(uParam0[1 /*10*/])->f_1[4] = 1;
	(*uParam0)[2 /*10*/] = 4;
	(uParam0[2 /*10*/])->f_1[0] = 1;
	(uParam0[2 /*10*/])->f_1[1] = 0;
	(uParam0[2 /*10*/])->f_1[2] = 0;
	(uParam0[2 /*10*/])->f_1[3] = 1;
	(*uParam0)[3 /*10*/] = 6;
	(uParam0[3 /*10*/])->f_1[0] = 0;
	(uParam0[3 /*10*/])->f_1[1] = 0;
	(uParam0[3 /*10*/])->f_1[2] = 0;
	(uParam0[3 /*10*/])->f_1[3] = 1;
	(uParam0[3 /*10*/])->f_1[4] = 1;
	(uParam0[3 /*10*/])->f_1[5] = 1;
	(*uParam0)[4 /*10*/] = 8;
	(uParam0[4 /*10*/])->f_1[0] = 0;
	(uParam0[4 /*10*/])->f_1[1] = 0;
	(uParam0[4 /*10*/])->f_1[2] = 0;
	(uParam0[4 /*10*/])->f_1[3] = 0;
	(uParam0[4 /*10*/])->f_1[4] = 1;
	(uParam0[4 /*10*/])->f_1[5] = 1;
	(uParam0[4 /*10*/])->f_1[6] = 1;
	(uParam0[4 /*10*/])->f_1[7] = 1;
	(*uParam0)[5 /*10*/] = 4;
	(uParam0[5 /*10*/])->f_1[0] = 1;
	(uParam0[5 /*10*/])->f_1[1] = 1;
	(uParam0[5 /*10*/])->f_1[2] = 1;
	(uParam0[5 /*10*/])->f_1[3] = 0;
	(*uParam0)[6 /*10*/] = 8;
	(uParam0[6 /*10*/])->f_1[0] = 0;
	(uParam0[6 /*10*/])->f_1[1] = 0;
	(uParam0[6 /*10*/])->f_1[2] = 0;
	(uParam0[6 /*10*/])->f_1[3] = 0;
	(uParam0[6 /*10*/])->f_1[4] = 0;
	(uParam0[6 /*10*/])->f_1[5] = 0;
	(uParam0[6 /*10*/])->f_1[6] = 0;
	(uParam0[6 /*10*/])->f_1[7] = 1;
	(*uParam0)[7 /*10*/] = 8;
	(uParam0[7 /*10*/])->f_1[0] = 1;
	(uParam0[7 /*10*/])->f_1[1] = 0;
	(uParam0[7 /*10*/])->f_1[2] = 1;
	(uParam0[7 /*10*/])->f_1[3] = 1;
	(uParam0[7 /*10*/])->f_1[4] = 0;
	(uParam0[7 /*10*/])->f_1[5] = 1;
	(uParam0[7 /*10*/])->f_1[6] = 1;
	(uParam0[7 /*10*/])->f_1[7] = 1;
	(*uParam0)[8 /*10*/] = 7;
	(uParam0[8 /*10*/])->f_1[0] = 1;
	(uParam0[8 /*10*/])->f_1[1] = 1;
	(uParam0[8 /*10*/])->f_1[2] = 1;
	(uParam0[8 /*10*/])->f_1[3] = 1;
	(uParam0[8 /*10*/])->f_1[4] = 1;
	(uParam0[8 /*10*/])->f_1[5] = 1;
	(uParam0[8 /*10*/])->f_1[6] = 1;
	(*uParam0)[9 /*10*/] = 2;
	(uParam0[9 /*10*/])->f_1[0] = 0;
	(uParam0[9 /*10*/])->f_1[1] = 1;
	(*uParam0)[10 /*10*/] = 3;
	(uParam0[10 /*10*/])->f_1[0] = 0;
	(uParam0[10 /*10*/])->f_1[1] = 1;
	(uParam0[10 /*10*/])->f_1[2] = 1;
	(*uParam0)[11 /*10*/] = 4;
	(uParam0[11 /*10*/])->f_1[0] = 0;
	(uParam0[11 /*10*/])->f_1[1] = 1;
	(uParam0[11 /*10*/])->f_1[2] = 1;
	(uParam0[11 /*10*/])->f_1[3] = 1;
	(*uParam0)[12 /*10*/] = 4;
	(uParam0[12 /*10*/])->f_1[0] = 0;
	(uParam0[12 /*10*/])->f_1[1] = 0;
	(uParam0[12 /*10*/])->f_1[2] = 1;
	(uParam0[12 /*10*/])->f_1[3] = 1;
	(*uParam0)[13 /*10*/] = 3;
	(uParam0[13 /*10*/])->f_1[0] = 1;
	(uParam0[13 /*10*/])->f_1[1] = 0;
	(uParam0[13 /*10*/])->f_1[2] = 1;
	(*uParam0)[14 /*10*/] = 6;
	(uParam0[14 /*10*/])->f_1[0] = 0;
	(uParam0[14 /*10*/])->f_1[1] = 1;
	(uParam0[14 /*10*/])->f_1[2] = 1;
	(uParam0[14 /*10*/])->f_1[3] = 1;
	(uParam0[14 /*10*/])->f_1[4] = 1;
	(uParam0[14 /*10*/])->f_1[5] = 0;
}

int func_268(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	int iVar7;
	iVar0 = 0;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (iVar0 < 15)
		{
			iVar1 = iVar0;
			vVar4 = { func_292(iVar1) };
			if (!__LIB_0__::func_86(vVar4))
			{
				fVar3 = __LIB_0__::func_94(func_53(uParam0, 0), vVar4, 0);
				if (fVar3 < fVar2)
				{
					fVar2 = fVar3;
					iVar7 = iVar1;
				}
			}
		}
		iVar0++;
	}
	return iVar7;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("META_OUTFIT_ANIMAL_LEGENDARY_BLUEGILL");
		case 1:
			return joaat("META_OUTFIT_ANIMAL_LEGENDARY_BULLHEADCATFISH");
		case 2:
			return joaat("META_OUTFIT_ANIMAL_LEGENDARY_CHAINPICKEREL");
		case 3:
			return joaat("META_OUTFIT_ANIMAL_LEGENDARY_CHANNELCATFISH");
		case 4:
			return joaat("META_OUTFIT_ANIMAL_LEGENDARY_LAKESTURGEON");
		case 5:
			return joaat("META_OUTFIT_ANIMAL_LEGENDARY_LARGEMOUTHBASS");
		case 6:
			return joaat("META_OUTFIT_ANIMAL_LEGENDARY_LONGNOSEGAR");
		case 7:
			return joaat("META_OUTFIT_ANIMAL_LEGENDARY_MUSKIE");
		case 8:
			return joaat("META_OUTFIT_ANIMAL_LEGENDARY_NORTHERNPIKE");
		case 9:
			return joaat("META_OUTFIT_ANIMAL_LEGENDARY_PERCH");
		case 10:
			return joaat("META_OUTFIT_ANIMAL_LEGENDARY_REDFINPICKEREL");
		case 11:
			return joaat("META_OUTFIT_ANIMAL_LEGENDARY_ROCKBASS");
		case 12:
			return joaat("META_OUTFIT_ANIMAL_LEGENDARY_SMALLMOUTHBASS");
		case 13:
			return joaat("META_OUTFIT_ANIMAL_LEGENDARY_SOCKEYESALMON");
		case 14:
			return joaat("META_OUTFIT_ANIMAL_LEGENDARY_STEELHEADTROUT");
		default:
			break;
	}
	return 0;
}

void func_272(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_204[iParam1] != iParam2)
	{
		uParam0->f_204[iParam1] = iParam2;
		uParam0->f_245[iParam1] = iParam2;
	}
}

bool func_273(var uParam0, int iParam1)
{
	return (func_46(uParam0) && iParam1 <= 11);
}

bool func_274(var uParam0, var uParam1, var uParam2, int iParam3)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iParam3]))
	{
		return true;
	}
	if (iParam3 == 1 && !func_431(uParam0, uParam1, uParam2))
	{
		return false;
	}
	if ((uParam0->f_676.f_4 == 1 && !__LIB_1__::func_662(128)) && iParam3 > 7)
	{
		return false;
	}
	if (uParam2->f_286[iParam3] == 0)
	{
		if (iParam3 == 0)
		{
			func_432(uParam0, uParam1, uParam2);
		}
		else
		{
			func_433(uParam0, uParam2, iParam3);
		}
	}
	if (uParam2->f_286[iParam3] != 0 && __LIB_0__::func_86(uParam2->f_42[iParam3 /*3*/]))
	{
		if (uParam2->f_368[iParam3] == 2)
		{
			iVar3 = func_434(uParam2->f_286[iParam3]);
			iVar4 = __LIB_10__::func_762(iVar3);
			if (__LIB_8__::func_951(iVar4))
			{
				vVar0 = { func_292(iVar4) };
			}
			if (__LIB_0__::func_86(vVar0))
			{
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, false) >= 50f)
			{
			}
			else if (!func_435(vVar0, uParam2->f_286[iParam3], &(vVar0.f_2)))
			{
			}
			else
			{
				uParam2->f_42[iParam3 /*3*/] = { vVar0 };
			}
		}
		if (__LIB_0__::func_86(uParam2->f_42[iParam3 /*3*/]))
		{
			vVar5 = { Global_36 };
			if (iParam3 == 1)
			{
				if (Global_1900073.f_26[0 /*30*/] == 6 && func_436(uParam1, 0))
				{
					vVar0 = { func_261(0) };
				}
			}
			else
			{
				vVar0.x = (vVar5.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f));
				vVar0.f_1 = (vVar5.y + MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f));
				vVar0.f_2 = vVar5.z;
			}
			if (__LIB_0__::func_86(vVar0))
			{
				return false;
			}
			else if (func_69(0, 1, 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(vVar5, vVar0, false) < 5f)
			{
				return false;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar5, vVar0, false) < 10f)
			{
				return false;
			}
			else if (!func_437(uParam0, uParam1, vVar0))
			{
				return false;
			}
			else if (func_438(vVar0))
			{
				return false;
			}
			else if (!func_435(vVar0, uParam2->f_286[iParam3], &(vVar0.f_2)))
			{
				return false;
			}
			else
			{
				uParam2->f_42[iParam3 /*3*/] = { vVar0 };
			}
		}
	}
	if ((uParam2->f_1140 == 0 && uParam2->f_286[iParam3] != 0) && !__LIB_0__::func_86(uParam2->f_42[iParam3 /*3*/]))
	{
		STREAMING::REQUEST_MODEL(uParam2->f_286[iParam3], false);
		if (STREAMING::HAS_MODEL_LOADED(uParam2->f_286[iParam3]))
		{
			uParam2->f_163[iParam3] = __LIB_1__::func_545(uParam2->f_286[iParam3], uParam2->f_42[iParam3 /*3*/], 0f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			uParam2->f_1[iParam3] = 0;
			FLOCK::_0x8B6F0F59B1B99801(uParam2->f_163[iParam3], uParam2->f_368[iParam3]);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam2->f_286[iParam3]);
			uParam2->f_1140 = 1;
			if (__LIB_8__::func_952(iParam3))
			{
				Global_1900073.f_195 = uParam2->f_163[iParam3];
			}
		}
	}
	return !ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iParam3]);
}

bool func_275(var uParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;
	if (__LIB_0__::func_75(&(uParam2->f_699)) && __LIB_1__::func_871(&(uParam2->f_699)) < (200 + uParam2->f_707 * 20))
	{
		return false;
	}
	__LIB_1__::func_148(&(uParam2->f_699));
	iVar16 = PED::GET_PED_NEARBY_PEDS(func_53(uParam1, 0), &uVar0, -1, 8);
	if (iVar16 == 0)
	{
		return false;
	}
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 < iVar16)
	{
		if ((((!ENTITY::IS_ENTITY_DEAD(uVar0[iVar18]) && __LIB_10__::func_658(uVar0[iVar18])) && !func_441(uParam2, &(uVar0[iVar18]))) && func_442(&(uParam0->f_676), &(uVar0[iVar18]))) && !func_280(uParam0, uParam1, &(uVar0[iVar18]), 0))
		{
			uParam2->f_163[iParam3] = uVar0[iVar18];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam2->f_163[iParam3], true, true);
			uParam2->f_1[iParam3] = 1;
			iVar17 = PED::_GET_PED_META_OUTFIT_HASH(uParam2->f_163[iParam3]);
			if ((((iVar17 == joaat("META_OUTFIT_ANIMAL_POISON_BLUEGIL") || iVar17 == joaat("META_OUTFIT_ANIMAL_POISON_CHAINPICKEREL")) || iVar17 == joaat("META_OUTFIT_ANIMAL_POISON_LAKESTURGEON")) || iVar17 == joaat("META_OUTFIT_ANIMAL_POISON_REDFIN")) || iVar17 == joaat("META_OUTFIT_ANIMAL_POISON_ROCKBASS"))
			{
				uParam2->f_532[iParam3] = 1;
			}
			else
			{
				uParam2->f_532[iParam3] = 0;
			}
			__LIB_1__::func_148(&(uParam2->f_702));
			return true;
		}
		iVar18++;
	}
	return false;
}

bool func_276(var uParam0, int iParam1)
{
	if (__LIB_8__::func_952(iParam1) || iParam1 == 1)
	{
		return true;
	}
	return iParam1 == uParam0->f_1142;
}

bool func_277(var uParam0)
{
	if ((func_1() && uParam0->f_707 < 10) && __LIB_3__::func_135(&(uParam0->f_702)) > 15000)
	{
		return true;
	}
	return false;
}

bool func_278(var uParam0, var uParam1, int iParam2)
{
	if ((uParam1->f_1141 == 1 || ENTITY::IS_ENTITY_DEAD(uParam1->f_163[iParam2])) || !PED::_0xA0BC8FAED8CFEB3C(uParam1->f_163[iParam2]))
	{
		return false;
	}
	func_444(uParam1->f_163[iParam2]);
	uParam1->f_286[iParam2] = ENTITY::GET_ENTITY_MODEL(uParam1->f_163[iParam2]);
	uParam1->f_327[iParam2] = func_434(uParam1->f_286[iParam2]);
	uParam1->f_368[iParam2] = FLOCK::_0xF8B48A361DC388AE(uParam1->f_163[iParam2]);
	uParam1->f_409[iParam2] = func_445(uParam1, uParam1->f_327[iParam2], uParam1->f_368[iParam2]);
	uParam1->f_450[iParam2] = func_446(uParam1, iParam2);
	uParam1->f_491[iParam2] = func_447(uParam1->f_286[iParam2]);
	uParam1->f_655[iParam2] = 0f;
	PED::_SET_PED_SCALE(uParam1->f_163[iParam2], uParam1->f_450[iParam2]);
	func_448(uParam1, iParam2);
	__LIB_3__::func_459(uParam1->f_163[iParam2], 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_163[iParam2], __LIB_8__::func_952(iParam2));
	func_450(uParam0, uParam1, iParam2);
	PED::SET_PED_RESET_FLAG(uParam1->f_163[iParam2], 169, true);
	if ((((!__LIB_8__::func_952(iParam2) && !__LIB_0__::func_163(uParam1->f_163[iParam2], 1139527981)) && !__LIB_0__::func_163(uParam1->f_163[iParam2], 518218985)) && !__LIB_0__::func_163(uParam1->f_163[iParam2], -773337285)) && !PED::IS_PED_FLEEING(uParam1->f_163[iParam2]))
	{
		TASK::TASK_ANIMAL_UNALERTED(uParam1->f_163[iParam2], -1, 0, 0, 0);
	}
	uParam1->f_1141 = 1;
	return true;
}

void func_279(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	uParam2->f_1019[iParam3 /*3*/] = { 0f, 0f, 0f };
	iVar0 = func_194(uParam0, uParam1, uParam2, iParam3);
	if (iVar0 != -1)
	{
		func_64(uParam0, uParam1, uParam2, iVar0, -1);
	}
	func_272(uParam2, iParam3, 4);
}

bool func_280(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	if (bParam3 == 1 && func_46(&(uParam0->f_676)))
	{
		return false;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < func_31(uParam0))
	{
		if (bParam3 == 1 && __LIB_4__::func_188(uParam0) != 3)
		{
			fVar0 = (50f / 2f);
		}
		else
		{
			fVar0 = 50f;
		}
		if ((!__LIB_0__::func_86((uParam1[iVar1 /*263*/])->f_7) && !ENTITY::IS_ENTITY_DEAD(*uParam2)) && __LIB_0__::func_94(*uParam2, (uParam1[iVar1 /*263*/])->f_7, 0) < fVar0)
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_281(var uParam0, var uParam1, int iParam2)
{
	if (PED::IS_PED_FLEEING(uParam1->f_163[iParam2]) || __LIB_8__::func_952(iParam2))
	{
		return false;
	}
	if (func_79(uParam0, 0, 512) && __LIB_0__::func_94(__LIB_14__::func_184(0), func_262(uParam1, iParam2), 0) < 5f)
	{
		uParam1->f_1019[iParam2 /*3*/] = { func_258(0) };
		return true;
	}
	return false;
}

void func_282(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = func_194(uParam0, uParam1, uParam2, iParam3);
	if (iVar1 != -1)
	{
		func_451(iVar1);
		func_414(uParam0, uParam1, iVar1, 0);
		func_333(iVar1, 512);
		if (__LIB_8__::func_952(iParam3))
		{
			iVar0 = 0;
		}
		func_64(uParam0, uParam1, uParam2, iVar1, -1);
		Global_1900073.f_26[iVar1 /*30*/].f_7 = 0;
	}
	else if (__LIB_0__::func_86(uParam2->f_1019[iParam3 /*3*/]))
	{
		uParam2->f_1019[iParam3 /*3*/] = { Global_36 };
	}
	__LIB_1__::func_148(&(uParam2->f_777[iParam3 /*3*/]));
	__LIB_0__::func_37(&(uParam2->f_898[iParam3 /*3*/]));
	if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iParam3]))
	{
		func_450(uParam0, uParam2, iParam3);
	}
	if (iVar0 == 1)
	{
		func_272(uParam2, iParam3, 9);
	}
	else
	{
		func_272(uParam2, iParam3, 4);
	}
}

void func_283(var uParam0, var uParam1, var uParam2, int iParam3)
{
	vector3 vVar0;
	int iVar3;
	iVar3 = __LIB_10__::func_762(uParam2->f_327[iParam3]);
	if (__LIB_8__::func_951(iVar3))
	{
		vVar0 = { func_292(iVar3) };
	}
	if (func_452(uParam0, uParam1, uParam2, iParam3))
	{
		if ((!__LIB_0__::func_163(uParam2->f_163[iParam3], 518218985) && !__LIB_0__::func_163(uParam2->f_163[iParam3], -773337285)) && !PED::IS_PED_FLEEING(uParam2->f_163[iParam3]))
		{
			TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam3], true, false);
			TASK::TASK_SMART_FLEE_PED(uParam2->f_163[iParam3], func_53(uParam1, 0), 9999999f, -1, 8, 1077936128 /* Float: 3f */, 0);
		}
	}
	else if (func_453(uParam0, uParam1, uParam2, iParam3, uParam2->f_327[iParam3]))
	{
		uParam2->f_705 = 1;
		if (!__LIB_0__::func_163(uParam2->f_163[iParam3], 1227113341))
		{
			TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam3], true, false);
			TASK::TASK_GO_TO_ENTITY(uParam2->f_163[iParam3], __LIB_14__::func_185(0), -1, 0f, 2f, 0f, 0);
		}
	}
	else if (func_454(uParam1, uParam2, iParam3, vVar0))
	{
		if (!__LIB_0__::func_163(uParam2->f_163[iParam3], -1824940423))
		{
			TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam3], true, false);
			TASK::TASK_GO_TO_COORD_ANY_MEANS(uParam2->f_163[iParam3], vVar0, 2f, 0, false, 524419, -1f);
		}
	}
	else if (__LIB_0__::func_0())
	{
		if (!__LIB_0__::func_163(uParam2->f_163[iParam3], 670314910))
		{
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam2->f_163[iParam3], 68, 4f);
			TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam3], true, false);
			TASK::TASK_WANDER_SWIM(uParam2->f_163[iParam3], 4f);
		}
	}
}

void func_284(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((func_456(uParam0, uParam1, 0, 1) && func_457(uParam1, 0, uParam2->f_327[iParam3], 0)) && (uParam1[0 /*263*/])->f_74 == 0)
	{
		if (!__LIB_0__::func_163(uParam2->f_163[iParam3], 1227113341))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam2->f_163[iParam3], true);
			TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam3], true, false);
			TASK::TASK_GO_TO_ENTITY(uParam2->f_163[iParam3], __LIB_14__::func_185(0), -1, 0f, 2f, 0f, 0);
		}
	}
	else if (!__LIB_0__::func_163(uParam2->f_163[iParam3], 670314910))
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam2->f_163[iParam3], 68, 4f);
		TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam3], true, false);
		TASK::TASK_WANDER_SWIM(uParam2->f_163[iParam3], 4f);
	}
}

void func_286(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (uParam2->f_204[iParam3] == 6)
	{
		func_458(uParam1, uParam2, iParam3, iParam4);
		func_459(uParam0, uParam1, uParam2, iParam3, iParam4);
		if (func_460(uParam1, iParam4) || func_461(uParam0, uParam1, uParam2, iParam4))
		{
			if (iParam4 != 0 || !func_462(uParam0, uParam2, iParam3))
			{
				uParam2->f_204[iParam3] = 7;
			}
		}
	}
	else
	{
		func_463(uParam1, uParam2, iParam3, iParam4);
		func_32(uParam1, iParam4);
		if ((func_464(uParam0, uParam1, uParam2, iParam4) || func_465(uParam0, uParam1, uParam2, iParam4)) || (iParam4 == 0 && func_462(uParam0, uParam2, iParam3)))
		{
			uParam2->f_204[iParam3] = 6;
		}
	}
	if (uParam2->f_245[iParam3] != uParam2->f_204[iParam3])
	{
		uParam2->f_245[iParam3] = uParam2->f_204[iParam3];
		(uParam1[iParam4 /*263*/])->f_209 = 0;
		TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam3], true, false);
	}
}

void func_287(var uParam0, var uParam1, int iParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	if ((((iParam3 != 0 || (uParam0[iParam3 /*263*/])->f_233 == 0) || (uParam0[iParam3 /*263*/])->f_233 == 6) || (uParam0[iParam3 /*263*/])->f_233 == 7) || (uParam0[iParam3 /*263*/])->f_233 == 8)
	{
		(uParam0[iParam3 /*263*/])->f_234 = 0;
		if (__LIB_0__::func_75(&((uParam0[iParam3 /*263*/])->f_221)))
		{
			__LIB_2__::func_113(&((uParam0[iParam3 /*263*/])->f_221));
		}
		if (__LIB_0__::func_75(&((uParam0[iParam3 /*263*/])->f_224)))
		{
			__LIB_2__::func_113(&((uParam0[iParam3 /*263*/])->f_224));
		}
		return;
	}
	fVar0 = ENTITY::GET_ENTITY_HEADING(uParam1->f_163[iParam2]);
	fVar1 = ENTITY::GET_ENTITY_HEADING(func_53(uParam0, iParam3));
	fVar2 = (fVar0 - fVar1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 + 360f);
	}
	if (fVar2 >= 180f)
	{
		(uParam0[iParam3 /*263*/])->f_234 = 4;
	}
	else
	{
		(uParam0[iParam3 /*263*/])->f_234 = 3;
	}
	if ((uParam0[iParam3 /*263*/])->f_234 == 4)
	{
		if (IntToFloat(func_247()) < -25f && __LIB_0__::func_0(iParam3))
		{
			if (func_146(uParam1, iParam2))
			{
				if (__LIB_0__::func_75(&((uParam0[iParam3 /*263*/])->f_221)))
				{
					__LIB_2__::func_112(&((uParam0[iParam3 /*263*/])->f_221));
				}
				else
				{
					__LIB_1__::func_148(&((uParam0[iParam3 /*263*/])->f_221));
				}
			}
			else if (__LIB_0__::func_75(&((uParam0[iParam3 /*263*/])->f_224)))
			{
				__LIB_2__::func_112(&((uParam0[iParam3 /*263*/])->f_224));
			}
			else
			{
				__LIB_1__::func_148(&((uParam0[iParam3 /*263*/])->f_224));
			}
		}
		else
		{
			if (__LIB_0__::func_75(&((uParam0[iParam3 /*263*/])->f_221)))
			{
				__LIB_2__::func_113(&((uParam0[iParam3 /*263*/])->f_221));
			}
			if (__LIB_0__::func_75(&((uParam0[iParam3 /*263*/])->f_224)))
			{
				__LIB_2__::func_113(&((uParam0[iParam3 /*263*/])->f_224));
			}
		}
	}
	else if ((uParam0[iParam3 /*263*/])->f_234 == 3)
	{
		if (IntToFloat(func_247()) > 25f && __LIB_0__::func_0(iParam3))
		{
			if (func_146(uParam1, iParam2))
			{
				if (__LIB_0__::func_75(&((uParam0[iParam3 /*263*/])->f_221)))
				{
					__LIB_2__::func_112(&((uParam0[iParam3 /*263*/])->f_221));
				}
				else
				{
					__LIB_1__::func_148(&((uParam0[iParam3 /*263*/])->f_221));
				}
			}
			else if (__LIB_0__::func_75(&((uParam0[iParam3 /*263*/])->f_224)))
			{
				__LIB_2__::func_112(&((uParam0[iParam3 /*263*/])->f_224));
			}
			else
			{
				__LIB_1__::func_148(&((uParam0[iParam3 /*263*/])->f_224));
			}
		}
		else
		{
			if (__LIB_0__::func_75(&((uParam0[iParam3 /*263*/])->f_221)))
			{
				__LIB_2__::func_113(&((uParam0[iParam3 /*263*/])->f_221));
			}
			if (__LIB_0__::func_75(&((uParam0[iParam3 /*263*/])->f_224)))
			{
				__LIB_2__::func_113(&((uParam0[iParam3 /*263*/])->f_224));
			}
		}
	}
	else
	{
		if (__LIB_0__::func_75(&((uParam0[iParam3 /*263*/])->f_221)))
		{
			__LIB_2__::func_113(&((uParam0[iParam3 /*263*/])->f_221));
		}
		if (__LIB_0__::func_75(&((uParam0[iParam3 /*263*/])->f_224)))
		{
			__LIB_2__::func_113(&((uParam0[iParam3 /*263*/])->f_224));
		}
	}
}

void func_288(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	if (func_469(uParam0, uParam1, iParam4, 0))
	{
		if (__LIB_0__::func_163(uParam2->f_163[iParam3], 1227113341))
		{
			TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam3], true, false);
		}
		return;
	}
	if (!func_470(uParam1, iParam4))
	{
		return;
	}
	vVar0 = { func_262(uParam2, iParam3) };
	(uParam1[iParam4 /*263*/])->f_251 = 0;
	if ((uParam1[iParam4 /*263*/])->f_24 < 0.1f)
	{
		(uParam1[iParam4 /*263*/])->f_233 = 7;
	}
	else if (func_471(uParam0, uParam1, uParam2, iParam3, iParam4))
	{
		(uParam1[iParam4 /*263*/])->f_233 = 8;
	}
	else if (!func_472(uParam0, uParam1, iParam4, vVar0))
	{
		func_473(uParam1, uParam2, iParam4, iParam3);
	}
	else if (__LIB_8__::func_952(iParam3) && (uParam1[iParam4 /*263*/])->f_257 == 0)
	{
		if ((uParam1[iParam4 /*263*/])->f_233 != 9)
		{
			PED::SET_PED_CONFIG_FLAG(uParam2->f_163[iParam3], 436, true);
			TASK::TASK_ANIMAL_UNALERTED(uParam2->f_163[iParam3], -1, 0, 0, 0);
			(uParam1[iParam4 /*263*/])->f_233 = 9;
		}
	}
	else if (func_474(uParam1, uParam2, iParam3, iParam4))
	{
		func_475(uParam0, uParam1, uParam2, iParam4, iParam3, vVar0);
	}
	if ((((uParam1[iParam4 /*263*/])->f_233 == 8 || (uParam1[iParam4 /*263*/])->f_233 == 7) || (uParam1[iParam4 /*263*/])->f_233 == 6) || (uParam1[iParam4 /*263*/])->f_233 == 0)
	{
		(uParam1[iParam4 /*263*/])->f_255 = 0f;
		(uParam1[iParam4 /*263*/])->f_256 = 0;
		if (__LIB_0__::func_163(uParam2->f_163[iParam3], 1227113341))
		{
			TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam3], true, false);
		}
	}
	else if ((uParam1[iParam4 /*263*/])->f_233 == 9 && (uParam1[iParam4 /*263*/])->f_257 == 0)
	{
		if (!PED::GET_PED_CONFIG_FLAG(uParam2->f_163[iParam3], 436, true))
		{
			(uParam1[iParam4 /*263*/])->f_257 = 1;
			(uParam1[iParam4 /*263*/])->f_233 = 0;
		}
	}
	else
	{
		func_476(uParam1, uParam2, iParam4, iParam3);
		if ((uParam1[iParam4 /*263*/])->f_256 == 1 || !__LIB_0__::func_163(uParam2->f_163[iParam3], 1227113341))
		{
			TASK::TASK_GO_TO_ENTITY(uParam2->f_163[iParam3], (uParam1[iParam4 /*263*/])->f_14, -1, 0.1f, (uParam1[iParam4 /*263*/])->f_255, 0.1f, 1);
			(uParam1[iParam4 /*263*/])->f_256 = 0;
		}
	}
	if ((uParam1[iParam4 /*263*/])->f_233 == 7)
	{
		if (!__LIB_0__::func_75(&((uParam1[iParam4 /*263*/])->f_252)))
		{
			__LIB_1__::func_148(&((uParam1[iParam4 /*263*/])->f_252));
		}
		if (__LIB_0__::func_33(&((uParam1[iParam4 /*263*/])->f_252)))
		{
			__LIB_2__::func_112(&((uParam1[iParam4 /*263*/])->f_252));
		}
	}
	else if (__LIB_0__::func_75(&((uParam1[iParam4 /*263*/])->f_252)) && !__LIB_0__::func_33(&((uParam1[iParam4 /*263*/])->f_252)))
	{
		__LIB_2__::func_113(&((uParam1[iParam4 /*263*/])->f_252));
	}
}

void func_289(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	float fVar3;
	if (((__LIB_0__::func_75(&((uParam1[iParam4 /*263*/])->f_229)) && __LIB_1__::func_871(&((uParam1[iParam4 /*263*/])->f_229)) < (uParam1[iParam4 /*263*/])->f_232) || !func_146(uParam2, iParam3)) || !func_477(uParam1, iParam4))
	{
		return;
	}
	vVar0 = { func_478(func_262(uParam2, iParam3), 0) };
	if (__LIB_0__::func_86(vVar0))
	{
		return;
	}
	__LIB_1__::func_148(&((uParam1[iParam4 /*263*/])->f_229));
	if (func_147(uParam1, iParam4) > 0.8f)
	{
		(uParam1[iParam4 /*263*/])->f_232 = MISC::GET_RANDOM_INT_IN_RANGE(150, 250);
	}
	else
	{
		(uParam1[iParam4 /*263*/])->f_232 = MISC::GET_RANDOM_INT_IN_RANGE(250, 350);
	}
	fVar3 = 1f;
	if (uParam2->f_491[iParam3] == 0)
	{
		fVar3 = 0.8f;
	}
	else if (uParam2->f_491[iParam3] == 1)
	{
		fVar3 = 0.9f;
	}
	else if (uParam2->f_491[iParam3] == 2)
	{
		fVar3 = 1f;
	}
	else if (uParam2->f_491[iParam3] == 3)
	{
		fVar3 = 1.1f;
	}
	else if (uParam2->f_491[iParam3] == 4)
	{
		fVar3 = 1.2f;
	}
	GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_mg_fish_struggle", vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), fVar3, 0, 0, 0);
	func_479(uParam0, uParam1, uParam2, iParam3, iParam4);
}

Vector3 func_292(int iParam0)
{
	if (iParam0 == 8 && !__LIB_0__::func_86(Global_1900073.f_212))
	{
		return Global_1900073.f_212;
	}
	switch (iParam0)
	{
		case 0:
			return 724f, -1513f, 40f;
		case 1:
			return 3178f, -706f, 40f;
		case 2:
			return -485f, -142f, 40f;
		case 3:
			return -5071f, -4137f, -30f;
		case 4:
			return 2141f, -1541f, 40f;
		case 5:
			return -3068f, -3374f, -19f;
		case 6:
			return 2226f, -709f, 40f;
		case 7:
			return 3058f, 416f, 40f;
		case 8:
			return 1620f, 1518f, 140f;
		case 9:
			return 2365f, 967f, 70f;
		case 10:
			return -1828f, -2429f, 40f;
		case 11:
			return -2588f, -1434f, 144f;
		case 12:
			return -2365f, -430f, 140f;
		case 13:
			return -1687f, 1654f, 230f;
		case 14:
			return 2878f, 2327f, 160f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_293(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, -1);
	iVar1 = __LIB_0__::func_979(vParam0);
	iVar2 = func_483(vParam0);
	if (func_484(vParam0, 0) > 0f)
	{
		return false;
	}
	if ((((((iVar0 == joaat("WATER_LANNAHECHEE_RIVER") || iVar0 == joaat("SISKA")) || iVar0 == joaat("WATER_SAN_LUIS_RIVER")) || iVar0 == joaat("NUEVOPARAISO")) || iVar0 == joaat("WATER_FLAT_IRON_LAKE")) || iVar0 == -1) || iVar0 == 0)
	{
		return false;
	}
	if (__LIB_0__::func_980(iVar1, 1))
	{
		return false;
	}
	if (__LIB_3__::func_151(iVar2) || __LIB_0__::func_730(iVar2))
	{
		return false;
	}
	return true;
}

void func_294(var uParam0)
{
	vector3 vVar0[6];
	int iVar19;
	float fVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	vVar0[0 /*3*/] = { -1209.672f, -1949.075f, 41.6528f };
	vVar0[1 /*3*/] = { -733.228f, -1318.488f, 42.4546f };
	vVar0[2 /*3*/] = { 667.0115f, -1294.341f, 41.0552f };
	vVar0[3 /*3*/] = { 1323.089f, -2349.487f, 40.848f };
	vVar0[4 /*3*/] = { 2913.414f, -205.2208f, 40.6327f };
	vVar0[5 /*3*/] = { 2998.331f, 611.6033f, 40.6977f };
	iVar19 = -1;
	fVar20 = 999999f;
	iVar24 = 0;
	while (iVar24 < 6)
	{
		iVar22 = __LIB_0__::func_979(vVar0[iVar24 /*3*/]);
		iVar23 = func_483(vVar0[iVar24 /*3*/]);
		if (((!__LIB_0__::func_980(iVar22, 1) && __LIB_0__::func_20(iVar23)) && !__LIB_3__::func_151(iVar23)) && !__LIB_0__::func_730(iVar23))
		{
			fVar21 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0[iVar24 /*3*/], false);
			if (fVar21 < fVar20)
			{
				fVar20 = fVar21;
				iVar19 = iVar24;
			}
		}
		iVar24++;
	}
	if (iVar19 >= 0 && iVar19 < 6)
	{
		uParam0->f_701 = { vVar0[iVar19 /*3*/] };
	}
	else
	{
		uParam0->f_701 = { 0f, 0f, 0f };
	}
}

bool func_297()
{
	return ((__LIB_4__::func_365() || __LIB_8__::func_954()) || __LIB_14__::func_83());
}

bool func_298(var uParam0, int iParam1)
{
	return uParam0->f_77[iParam1] == 1;
}

bool func_299(int iParam0)
{
	if (Global_1900073.f_22 == 1)
	{
		if (((iParam0 == 21 || iParam0 == 22) || iParam0 == 25) || iParam0 == 27)
		{
			return true;
		}
	}
	if (Global_1900073.f_23 == 1)
	{
		if ((((iParam0 == 31 || iParam0 == 32) || iParam0 == 33) || iParam0 == 34) || iParam0 == 39)
		{
			return true;
		}
	}
	if (Global_1900073.f_24 == 1)
	{
		if (((iParam0 == 48 || iParam0 == 49) || iParam0 == 75) || iParam0 == 45)
		{
			return true;
		}
	}
	return Global_1900073.f_11;
}

bool func_300(var uParam0, int iParam1)
{
	if ((uParam0->f_383[iParam1] > 0 && __LIB_0__::func_75(&(uParam0->f_154[iParam1 /*3*/]))) && __LIB_0__::func_264(&(uParam0->f_154[iParam1 /*3*/])) < IntToFloat(uParam0->f_383[iParam1]))
	{
		return true;
	}
	return false;
}

char* func_302(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MGFSH_EQ_ROD1";
		case 1:
			return "MGFSH_EQ_ROD2";
		case 2:
			return "MGFSH_EQ_ROD3";
		case 3:
			return "MGFSH_EQ_BAIT1";
		case 4:
			return "MGFSH_EQ_BAIT2_ABI1";
		case 5:
			return "MGFSH_EQ_BAIT2_FUD1";
		case 6:
			return "MGFSH_EQ_BAIT2_WAR1";
		case 7:
			return "MGFSH_EQ_BAIT2_FSH1";
		case 8:
			return "MGFSH_EQ_BAIT3_ABI1";
		case 9:
			return "MGFSH_EQ_BAIT3_FUD1";
		case 10:
			return "MGFSH_EQ_BAIT3_WAR1";
		case 11:
			return "MGFSH_EQ_BAIT3_FSH1";
		case 12:
			return "MGFSH_EQ_REBAIT";
		case 13:
			return "MGFSH_EQ_BAIT1";
		case 14:
			return "MGFSH_EQ_BAIT_ANY";
		case 15:
			return "MGFSH_CAST_DEEP";
		case 16:
			return "MGFSH_CAST_HIGH";
		case 17:
			return "MGFSH_CAST_WATER";
		case 18:
			return "MGFSH_CAST_CLOSE";
		case 19:
			return "MGFSH_CAST_LOS";
		case 20:
			return "MGFSH_CAST_BAIT";
		case 21:
			return "MGFSH_BEGIN_AIM_HLP";
		case 22:
			return "MGFSH_BEGIN_AIM_TOG_HLP";
		case 23:
			return "MGFSH_BEGIN_AIM_OBJ";
		case 24:
			return "MGFSH_BEGIN_AIM_TOG_OBJ";
		case 25:
			return "MGFSH_CAST_AIMING_HLP";
		case 26:
			return "MGFSH_CAST_AIMING_OBJ";
		case 27:
			return "MGFSH_CAST_RELEASE_HLP";
		case 28:
			return "MGFSH_CAST_RELEASE_OBJ";
		case 29:
			return "MGFSH_CAST_POWER";
		case 30:
			return "MGFSH_NIBBLE_DESC";
		case 31:
			return "MGFSH_WAIT_LURE_HLP";
		case 32:
			return "MGFSH_WAIT_LURE_AUTO_HLP";
		case 33:
			return "MGFSH_WAIT_LURE_TOG_HLP";
		case 34:
			return "MGFSH_WAIT_LURE_TOG_AUTO_HLP";
		case 35:
			return "MGFSH_WAIT_LURE_GRIP";
		case 36:
			return "MGFSH_WAIT_LURE_GRIP_TOG";
		case 37:
			return "MGFSH_WAIT_LURE_HOOK";
		case 38:
			return "MGFSH_WAIT_LURE_HOOK_AUTO";
		case 39:
			return "MGFSH_HOOK_FISH_HLP";
		case 40:
			return "MGFSH_HOOK_FISH_OBJ";
		case 41:
			return "MGFSH_FLICK_BAIT";
		case 42:
			return "MGFSH_SPOOL_EMPTY";
		case 43:
			return "MGFSH_MISSED_BITE1";
		case 44:
			return "MGFSH_MISSED_BITE2";
		case 45:
			return "MGFSH_HOOK_ROD1_HLP";
		case 46:
			return "MGFSH_HOOK_ROD1_OBJ";
		case 47:
			return "MGFSH_HOOK_ROD2";
		case 48:
			return "MGFSH_REEL_FISH_HLP";
		case 49:
			return "MGFSH_REEL_FISH_AUTO_HLP";
		case 50:
			return "MGFSH_REEL_FISH_OBJ";
		case 51:
			return "MGFSH_REEL_FISH_AUTO_OBJ";
		case 52:
			return "MGFSH_OBJECT_REEL";
		case 53:
			return "MGFSH_OBJECT_REEL_AUTO";
		case 54:
			return "MGFSH_FISH_ESC1";
		case 55:
			return "MGFSH_FISH_ESC2";
		case 56:
			return "MGFSH_FISH_ESC3";
		case 57:
			return "MGFSH_BAIT_LOST";
		case 58:
			return "MGFSH_STOW_HORSE";
		case 59:
			return "MGFSH_HOLD_REEL";
		case 60:
			return "MGFSH_PUMP_ROD";
		case 61:
			return "MGFSH_FULL_SAT";
		case 62:
			return "MGFSH_EQD_CHEESE";
		case 63:
			return "MGFSH_EQD_BREAD";
		case 64:
			return "MGFSH_EQD_CORN";
		case 65:
			return "MGFSH_EQD_WORM";
		case 66:
			return "MGFSH_EQD_CRICKET";
		case 67:
			return "MGFSH_EQD_CRAYFISH";
		case 68:
			return "MGFSH_EQD_LURE_LAKE";
		case 69:
			return "MGFSH_EQD_LURE_RIVER";
		case 70:
			return "MGFSH_EQD_LURE_SWAMP";
		case 71:
			return "MGFSH_EQD_SPECIAL_LURE_LAKE";
		case 72:
			return "MGFSH_EQD_SPECIAL_LURE_RIVER";
		case 73:
			return "MGFSH_EQD_SPECIAL_LURE_SWAMP";
		case 74:
			return "MGFSH_EQD_SPECIAL_SPINNER";
		case 75:
			return "MGFSH_REEL_FISH_HLP2_KM";
		default:
			break;
	}
	return "";
}

char* func_303(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "";
}

bool func_305(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_18__::func_189())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_16__::func_771(bParam1))
	{
		(*uParam0)[iVar0] = Global_1359489[iVar0];
		iVar0++;
	}
	return true;
}

void func_307(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[10];
	int iVar12;
	iVar12 = PED::GET_PED_NEARBY_PEDS(func_53(uParam0, 0), &uVar1, -1, -1);
	if (iVar12 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar12)
		{
			if ((!ENTITY::IS_ENTITY_DEAD(uVar1[iVar0]) && !PED::IS_PED_A_PLAYER(uVar1[iVar0])) && ENTITY::GET_ENTITY_MODEL(uVar1[iVar0]) == (uParam0[iParam1 /*263*/])->f_1)
			{
				(*uParam0)[iParam1 /*263*/] = uVar1[iVar0];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(func_53(uParam0, iParam1), true, true);
				return;
			}
			iVar0++;
		}
	}
}

bool func_308()
{
	return Global_1900073.f_14;
}

void func_309(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	char* sVar1;
	if (Global_40.f_11184[iParam2] != iParam3 || iParam5 == 1)
	{
		Global_40.f_11184[iParam2] = iParam3;
		(uParam1[iParam2 /*263*/])->f_72 = 0;
		(uParam1[iParam2 /*263*/])->f_73 = 0;
		func_495(uParam1, iParam2, Global_40.f_11184[iParam2]);
		iVar0 = func_496(uParam1, iParam2);
		sVar1 = func_497(Global_40.f_11184[iParam2]);
		if (iParam4 == 1)
		{
			TASK::TASK_SWAP_FISHING_BAIT(func_53(uParam1, iParam2), sVar1, iVar0);
		}
		else
		{
			TASK::_0x9B0C7FA063E67629(func_53(uParam1, iParam2), sVar1, iVar0, 1);
		}
		if (iParam2 == 0)
		{
			if (Global_40.f_11184[iParam2] == joaat("UPGRADE_FSH_BAIT_NONE"))
			{
				if (!__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_NONE"), 1, 0))
				{
					func_169(joaat("UPGRADE_FSH_BAIT_NONE"), 0);
				}
			}
			else
			{
				if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_NONE"), 1, 0) && func_498())
				{
					func_185(joaat("UPGRADE_FSH_BAIT_NONE"));
				}
				uParam0->f_77 = Global_40.f_11184[iParam2];
			}
			uParam0->f_78 = 0;
			func_499();
			func_174();
			func_500(uParam0);
			if (Global_1900073.f_21 == 1 && __LIB_8__::func_955(Global_40.f_11184[iParam2]))
			{
				uParam0->f_76 = 1;
			}
			if ((Global_1900073.f_20 == 1 && __LIB_8__::func_955(Global_40.f_11184[iParam2])) && Global_40.f_11184[iParam2] == func_501(uParam0))
			{
				uParam0->f_75 = 1;
			}
		}
	}
}

void func_310(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	if (__LIB_1__::func_672(iParam1, 128))
	{
		return;
	}
	if ((uParam0[iParam1 /*263*/])->f_12 > 0 && __LIB_0__::func_163(func_53(uParam0, iParam1), 242628503))
	{
		return;
	}
	if (!func_69(iParam1, 1, 1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(func_53(uParam0, iParam1), true, false) };
		fVar3 = BUILTIN::VDIST(vVar0, (uParam0[iParam1 /*263*/])->f_7);
		if (fVar3 < 10f)
		{
			(uParam0[iParam1 /*263*/])->f_11 = 10000;
		}
		else
		{
			(uParam0[iParam1 /*263*/])->f_11 = BUILTIN::ROUND(fVar3) * 1000;
		}
		if ((uParam0[iParam1 /*263*/])->f_11 > 60000)
		{
			(uParam0[iParam1 /*263*/])->f_11 = 60000;
		}
	}
	TASK::CLEAR_PED_TASKS(func_53(uParam0, iParam1), true, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar4);
	if (!func_69(iParam1, 1, 1) && fVar3 > 1.25f)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (uParam0[iParam1 /*263*/])->f_7, 1f, (uParam0[iParam1 /*263*/])->f_11, 0.25f, 4, 40000f);
		(uParam0[iParam1 /*263*/])->f_12 = 2;
	}
	else
	{
		(uParam0[iParam1 /*263*/])->f_12 = 1;
	}
	TASK::TASK_ACHIEVE_HEADING(0, (uParam0[iParam1 /*263*/])->f_10, 0);
	TASK::TASK_STAND_STILL(0, -1);
	TASK::CLOSE_SEQUENCE_TASK(iVar4);
	TASK::TASK_PERFORM_SEQUENCE(func_53(uParam0, iParam1), iVar4);
	TASK::CLEAR_SEQUENCE_TASK(&iVar4);
	PED::_0x2208438012482A1A(func_53(uParam0, iParam1), false, false);
	if (func_69(iParam1, 1, 1))
	{
	}
}

bool func_311(var uParam0, int iParam1)
{
	if (__LIB_1__::func_672(iParam1, 128))
	{
		if (func_69(iParam1, 1, 1) && !func_139(uParam0, iParam1))
		{
			return false;
		}
		return true;
	}
	if (((uParam0[iParam1 /*263*/])->f_12 > 0 && __LIB_0__::func_163(func_53(uParam0, iParam1), 242628503)) && TASK::GET_SEQUENCE_PROGRESS(func_53(uParam0, iParam1)) >= (uParam0[iParam1 /*263*/])->f_12)
	{
		return true;
	}
	return false;
}

void func_312(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	__LIB_18__::func_162(iParam1, 128);
	if ((func_69(iParam1, 1, 1) || __LIB_0__::func_86((uParam0[iParam1 /*263*/])->f_7)) || __LIB_1__::func_672(iParam1, 128))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(func_53(uParam0, iParam1), true, false) };
	if (BUILTIN::VDIST(vVar0, (uParam0[iParam1 /*263*/])->f_7) > 1.25f)
	{
		ENTITY::SET_ENTITY_COORDS(func_53(uParam0, iParam1), (uParam0[iParam1 /*263*/])->f_7, true, false, true, true);
	}
	fVar3 = ENTITY::GET_ENTITY_HEADING(func_53(uParam0, iParam1));
	if (fVar3 > ((uParam0[iParam1 /*263*/])->f_10 + 2f) || fVar3 < ((uParam0[iParam1 /*263*/])->f_10 - 2f))
	{
		ENTITY::SET_ENTITY_HEADING(func_53(uParam0, iParam1), (uParam0[iParam1 /*263*/])->f_10);
	}
}

bool func_313()
{
	return Global_1900073.f_15;
}

bool func_322()
{
	if (func_1() || Global_1900073.f_19 == 0)
	{
		return false;
	}
	return true;
}

void func_323(var uParam0, int iParam1)
{
	struct<2> Var0;
	if (iParam1 == 1)
	{
		if (!func_50(uParam0, 32768))
		{
			func_51(uParam0, 32768);
			Var0 = 1;
			Var0.f_1 = joaat("WEAPON_FISHINGROD");
			HUD::_0x8A59D44189AF2BC5(&Var0, -1001145251);
		}
	}
	else if (func_50(uParam0, 32768))
	{
		func_204(uParam0, 32768);
		HUD::_0x160825DADF1B04B3();
	}
}

void func_324(var uParam0)
{
	func_510(uParam0);
	func_511(&(uParam0->f_105), 0);
	func_511(&(uParam0->f_105), 1);
	func_511(&(uParam0->f_105), 2);
}

void func_326(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	if (__LIB_3__::func_127(uParam0->f_105[iParam1]))
	{
		return;
	}
	iVar0 = 0;
	if (bParam2 == 0)
	{
		iVar0 = 2;
	}
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	if (iParam1 == 12)
	{
		sVar1 = __LIB_1__::func_925(__LIB_1__::func_72(func_501(uParam0)), joaat("COLOR_PURE_WHITE"));
		uParam0->f_105[iParam1] = __LIB_0__::func_565(MISC::_CREATE_VAR_STRING(10, func_302(iParam1), sVar1), -1, 0, 0, iVar0, 1);
	}
	else
	{
		uParam0->f_105[iParam1] = __LIB_0__::func_565(MISC::_CREATE_VAR_STRING(2, func_302(iParam1)), -1, 0, 0, iVar0, 1);
	}
	__LIB_10__::func_693(2048);
}

void func_327(var uParam0, int iParam1)
{
	if (!__LIB_8__::func_957(uParam0, iParam1))
	{
		__LIB_0__::func_7(uParam0, iParam1);
	}
}

void func_328(var uParam0, int iParam1)
{
	if (!func_50(uParam0, 256))
	{
		func_51(uParam0, 256);
		__LIB_3__::func_834(3);
	}
	if (uParam0->f_19 != iParam1)
	{
		if (uParam0->f_19 > iParam1)
		{
			__LIB_13__::func_671();
		}
		uParam0->f_19 = iParam1;
		__LIB_3__::func_787(uParam0->f_19);
	}
}

float func_330(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 1;
	if (iVar0 == 1)
	{
		if (iParam1 == 0 || *uParam0 == 1)
		{
			return 90f;
		}
		else if (iParam1 == 1)
		{
			return 50f;
		}
		else if (iParam1 == 2)
		{
			return 130f;
		}
		else if (iParam1 == 3)
		{
			return 130f;
		}
	}
	else if (iParam1 == 0 || *uParam0 == 1)
	{
		return 270f;
	}
	else if (iParam1 == 1)
	{
		return 310f;
	}
	else if (iParam1 == 2)
	{
		return 230f;
	}
	else if (iParam1 == 3)
	{
		return 230f;
	}
	return 0f;
}

float func_331(int iParam0)
{
	if (iParam0 == 0)
	{
		return 90f;
	}
	else if (iParam0 == 1)
	{
		return 90f;
	}
	else if (iParam0 == 2)
	{
		return 90f;
	}
	else if (iParam0 == 3)
	{
		return 90f;
	}
	return 90f;
}

void func_333(int iParam0, int iParam1)
{
	if (func_360(iParam0, iParam1))
	{
		__LIB_1__::func_681(&(Global_1900073.f_26[iParam0 /*30*/].f_6), iParam1);
	}
}

int func_334(var uParam0, int iParam1)
{
	if (func_68(uParam0, iParam1))
	{
		return WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(func_53(uParam0, iParam1), 0);
	}
	return 0;
}

void func_336()
{
	__LIB_19__::func_160(0, joaat("UPGRADE_FSH_BAIT_WORM"), 1);
	__LIB_19__::func_160(0, joaat("UPGRADE_FSH_BAIT_BREAD"), 1);
	__LIB_19__::func_160(0, joaat("UPGRADE_FSH_BAIT_CORN"), 1);
	__LIB_19__::func_160(0, joaat("UPGRADE_FSH_BAIT_CHEESE"), 1);
	__LIB_19__::func_160(0, joaat("UPGRADE_FSH_BAIT_CRICKET"), 1);
	__LIB_19__::func_160(0, joaat("UPGRADE_FSH_BAIT_CRAYFISH"), 1);
	__LIB_19__::func_160(0, joaat("UPGRADE_FSH_BAIT_LURE_RIVER"), 1);
	__LIB_19__::func_160(0, joaat("UPGRADE_FSH_BAIT_LURE_LAKE"), 1);
	__LIB_19__::func_160(0, joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"), 1);
	__LIB_19__::func_160(0, joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"), 1);
	__LIB_19__::func_160(0, joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"), 1);
	__LIB_19__::func_160(0, joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"), 1);
	__LIB_19__::func_160(0, joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"), 1);
}

void func_337(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	bVar0 = ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_185(iParam2));
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 40)
	{
		if ((((Global_1900073.f_26[iParam2 /*30*/] == 6 || Global_1900073.f_26[iParam2 /*30*/] == 10) && (uParam0[iParam2 /*263*/])->f_74 == 0) && bVar0 == 1) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_163[iVar1]))
		{
			(uParam0[iParam2 /*263*/])->f_30[iVar1] = __LIB_0__::func_636(func_262(uParam1, iVar1), func_261(iParam2));
		}
		else
		{
			(uParam0[iParam2 /*263*/])->f_30[iVar1] = 99999f;
		}
		iVar1++;
	}
}

void func_338(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		func_72(uParam0);
		uParam0->f_18 = 0;
		func_324(uParam0);
	}
}

void func_339(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	float fVar1;
	func_519(uParam0, uParam1, uParam2, iParam3);
	func_166(uParam1, iParam3, 1024);
	if (iParam3 == 0)
	{
		if (func_297() || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_WHEEL_MENU")))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			if (__LIB_0__::func_104())
			{
				func_103();
			}
			UIFEED::_0xDD1232B332CBB9E7(2, 1, 0);
			func_72(uParam0);
		}
		else
		{
			func_520(&(uParam0->f_105), 25, 0);
			func_520(&(uParam0->f_105), 27, 0);
			func_520(&(uParam0->f_105), 29, 0);
			if (func_521(uParam0, iParam3))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			}
			else if (__LIB_8__::func_955(Global_40.f_11184[0]))
			{
				if (PAD::_IS_USING_KEYBOARD(0) && PLAYER::_0xF4CB347D7B5EB0FD())
				{
					func_110(uParam0, 22, 0, -1, 1);
				}
				else
				{
					func_110(uParam0, 21, 0, -1, 1);
				}
			}
			if (func_522())
			{
				func_523(uParam0, 7, 0, 1);
			}
			func_524(uParam0, uParam1, uParam2);
		}
		func_525(uParam0, uParam1, uParam2);
		func_526(uParam0, uParam1);
		func_527(uParam0, uParam1);
	}
	else if (func_79(uParam1, iParam3, 1))
	{
		iVar0 = 1;
		if (!func_69(iParam3, 1, 1))
		{
			fVar1 = ENTITY::GET_ENTITY_HEADING(func_53(uParam1, iParam3));
			if (fVar1 > ((uParam1[iParam3 /*263*/])->f_10 + 10f) || fVar1 < ((uParam1[iParam3 /*263*/])->f_10 - 10f))
			{
				iVar0 = 0;
				if (!__LIB_0__::func_163(func_53(uParam1, iParam3), 1920390111))
				{
					TASK::TASK_ACHIEVE_HEADING(func_53(uParam1, iParam3), (uParam1[iParam3 /*263*/])->f_10, 0);
				}
			}
		}
		if (((iVar0 == 1 && !func_521(uParam0, iParam3)) && !__LIB_0__::func_163(func_53(uParam1, iParam3), 716706914)) && !__LIB_0__::func_163(func_53(uParam1, iParam3), joaat("SCRIPT_TASK_WEAPON")))
		{
			TASK::TASK_WEAPON(func_53(uParam1, iParam3));
			__LIB_1__::func_148(&((uParam1[iParam3 /*263*/])->f_99));
		}
	}
}

void func_340(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_519(uParam0, uParam1, uParam2, iParam3);
	func_528(&(uParam0->f_676), uParam1, iParam3);
	if (iParam3 == 0)
	{
		if (func_521(uParam0, iParam3))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		}
		func_520(&(uParam0->f_105), 21, 0);
		func_520(&(uParam0->f_105), 22, 0);
		func_520(&(uParam0->f_105), 27, 0);
		func_520(&(uParam0->f_105), 29, 0);
		func_529(uParam0, uParam1, uParam2);
		func_72(uParam0);
		func_406(uParam0);
		func_407(uParam0);
	}
	else if (!func_521(uParam0, iParam3))
	{
		if (__LIB_0__::func_265(&((uParam1[iParam3 /*263*/])->f_99)) > 2f)
		{
			if (uParam0->f_676.f_4 == 1)
			{
				Global_1900073.f_26[iParam3 /*30*/].f_15 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 0.5f);
			}
			else
			{
				Global_1900073.f_26[iParam3 /*30*/].f_15 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 1f);
			}
			func_153(iParam3, 1024, 1);
		}
	}
}

void func_341(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		func_520(&(uParam0->f_105), 21, 0);
		func_520(&(uParam0->f_105), 22, 0);
		func_520(&(uParam0->f_105), 25, 0);
		if (Global_1900073.f_22 == 0)
		{
			func_110(uParam0, 27, 1, -1, 1);
		}
		else
		{
			func_110(uParam0, 29, 1, -2, 1);
		}
	}
}

void func_342(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		func_72(uParam0);
		func_520(&(uParam0->f_105), 27, 0);
		func_520(&(uParam0->f_105), 29, 0);
		func_531(uParam0, uParam0->f_5);
		func_532(uParam0);
		if (__LIB_8__::func_955(Global_40.f_11184[iParam3]))
		{
			func_533(uParam0, uParam1, uParam2, iParam3, 1);
		}
	}
	func_534(uParam1, iParam3);
	func_166(uParam1, iParam3, 1);
	func_535(uParam1, iParam3);
}

void func_343(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		if ((!func_536(uParam0, 4) && Global_1900073.f_26[iParam3 /*30*/].f_2 > 2f) && !func_436(uParam1, iParam3))
		{
			func_533(uParam0, uParam1, uParam2, iParam3, 4);
		}
	}
}

void func_344(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (__LIB_1__::func_672(iParam3, 4) || __LIB_1__::func_672(iParam3, 8))
	{
		return;
	}
	func_537(uParam0, uParam1, iParam3);
	func_538(uParam1, iParam3);
	func_534(uParam1, iParam3);
	func_470(uParam1, iParam3);
	func_539(uParam0, uParam1, uParam2, iParam3);
	if (iParam3 == 0)
	{
		if (!func_79(uParam1, iParam3, 4096) && !func_540())
		{
			func_542(uParam0, func_541(uParam0));
			func_543(uParam0, uParam1);
			func_544(uParam0, uParam1, uParam2);
		}
		func_545(uParam0, uParam1);
	}
	func_546(uParam0, uParam1, uParam2, iParam3);
	if (func_547(uParam0, uParam1, iParam3))
	{
		func_548(uParam1, iParam3, 4096);
		func_153(iParam3, 128, 1);
		__LIB_8__::func_674(iParam3, 2048);
		func_33(uParam1, iParam3);
		func_415(uParam0, uParam1, uParam2, iParam3, 2);
		if (iParam3 == 0)
		{
			func_531(uParam0, uParam0->f_6);
			func_72(uParam0);
			if ((!__LIB_8__::func_955(Global_40.f_11184[iParam3]) && (uParam1[iParam3 /*263*/])->f_71 == 0) && (uParam1[iParam3 /*263*/])->f_6 == 1)
			{
				func_110(uParam0, 57, 1, -2, 1);
			}
			else if (__LIB_0__::func_104())
			{
				func_103();
			}
		}
	}
	else if (func_549(uParam0, uParam1, iParam3))
	{
	}
	else if (func_550(uParam0, uParam1, uParam2, iParam3))
	{
	}
	else
	{
		func_551(uParam0, uParam1, uParam2, iParam3);
		if (iParam3 == 0)
		{
			func_552(uParam1);
		}
	}
}

void func_345(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	__LIB_8__::func_674(iParam3, 4);
	__LIB_8__::func_674(iParam3, 8);
	if (!__LIB_0__::func_75(&((uParam1[iParam3 /*263*/])->f_212)))
	{
		__LIB_1__::func_148(&((uParam1[iParam3 /*263*/])->f_212));
	}
	if (iParam3 == 0)
	{
		func_520(&(uParam0->f_105), 30, 0);
		func_520(&(uParam0->f_105), 39, 0);
		func_520(&(uParam0->f_105), 31, 0);
		func_520(&(uParam0->f_105), 32, 0);
		func_520(&(uParam0->f_105), 33, 0);
		func_520(&(uParam0->f_105), 34, 0);
		func_520(&(uParam0->f_105), 41, 0);
		func_544(uParam0, uParam1, uParam2);
		if (Global_1900073.f_154[iParam3] == 1)
		{
			if (!func_540())
			{
				func_523(uParam0, 4, 0, 1);
			}
			func_553(uParam0, uParam1, uParam2, 0);
			iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
			if (func_238(iVar0) && !func_146(uParam2, iVar0))
			{
				if (__LIB_0__::func_75(&(uParam0->f_105.f_154[60 /*3*/])) && func_110(uParam0, 60, 0, -2, 0))
				{
					func_554(&(uParam0->f_105), 60, 60);
				}
				if ((__LIB_0__::func_75(&(uParam0->f_105.f_154[59 /*3*/])) && !TASK::_0x5952DFA38FA529FE()) && func_110(uParam0, 59, 0, -2, 0))
				{
					func_554(&(uParam0->f_105), 59, 60);
				}
			}
		}
	}
	func_555(uParam1, iParam3);
	if (func_469(uParam0, uParam1, iParam3, 1))
	{
		func_153(iParam3, 8, 1);
	}
	else if (func_556(uParam0, iParam3, 1))
	{
		func_153(iParam3, 8, 1);
	}
	else if (func_557(uParam0, uParam1, uParam2, iParam3))
	{
		func_558(uParam0, uParam1, uParam2, iParam3);
		func_153(iParam3, 2, 1);
	}
	else
	{
		func_559(uParam0, uParam1, uParam2, iParam3);
		func_551(uParam0, uParam1, uParam2, iParam3);
		if (iParam3 == 0)
		{
			func_560(uParam0, uParam1, uParam2);
		}
	}
}

void func_346(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		func_72(uParam0);
		uParam0->f_18 = 0;
		func_324(uParam0);
	}
}

void func_347(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 0 && func_102(iParam3, 256, 1))
	{
		func_561(uParam0, uParam1, uParam2, iParam3);
	}
}

void func_348(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_333(iParam3, 1);
	func_344(uParam0, uParam1, uParam2, iParam3);
	if (iParam3 == 0)
	{
		func_520(&(uParam0->f_105), 30, 0);
		func_520(&(uParam0->f_105), 39, 0);
		func_520(&(uParam0->f_105), 31, 0);
		func_520(&(uParam0->f_105), 32, 0);
		func_520(&(uParam0->f_105), 33, 0);
		func_520(&(uParam0->f_105), 34, 0);
		func_520(&(uParam0->f_105), 41, 0);
	}
}

void func_349(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_558(uParam0, uParam1, uParam2, iParam3);
	__LIB_18__::func_162(iParam3, 16);
	if (iParam3 == 0)
	{
		func_520(&(uParam0->f_105), 45, 0);
		func_520(&(uParam0->f_105), 47, 0);
		func_520(&(uParam0->f_105), 48, 0);
		func_520(&(uParam0->f_105), 49, 0);
		func_520(&(uParam0->f_105), 75, 0);
		func_520(&(uParam0->f_105), 52, 0);
		func_520(&(uParam0->f_105), 53, 0);
		func_531(uParam0, uParam0->f_8);
		func_535(uParam1, iParam3);
	}
	else
	{
		Global_1900073.f_26[iParam3 /*30*/].f_22 = -1f;
		Global_1900073.f_26[iParam3 /*30*/].f_23 = 0f;
	}
}

void func_350(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	func_562(uParam0, uParam1, uParam2, iParam3);
	if (!func_79(uParam1, iParam3, 32768) && func_102(iParam3, 32, 1))
	{
		func_548(uParam1, iParam3, 32768);
	}
	if ((func_79(uParam1, iParam3, 32768) && !func_79(uParam1, iParam3, 64)) && !func_79(uParam1, iParam3, 32))
	{
		func_563(uParam0, uParam1, uParam2, iParam3);
		func_564(uParam0, uParam1, iParam3);
		if (Global_1900073.f_154[iParam3] == 1)
		{
			if (iParam3 == 0)
			{
				iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
				if (func_238(iVar0))
				{
					func_565(&(uParam0->f_31), uParam2->f_532[iVar0]);
				}
			}
			func_566(uParam0, uParam1, uParam2, iParam3, 0);
		}
		if (func_102(iParam3, 4, 1))
		{
			if (Global_1900073.f_154[iParam3] == 1)
			{
				func_567(uParam0, uParam1, uParam2, iParam3);
			}
			else
			{
				func_568(uParam0, uParam1, uParam2, iParam3);
			}
			if (iParam3 == 0)
			{
				func_252(uParam0, 5);
				func_252(uParam0, 6);
			}
		}
		else
		{
			func_569(uParam0, uParam1, uParam2, iParam3);
		}
	}
	func_570(uParam1, iParam3);
	func_571(uParam0, uParam1, uParam2, iParam3);
	func_572(uParam1, iParam3);
	func_573(uParam0, uParam1, uParam2, iParam3);
	func_574(uParam0, uParam1, uParam2, iParam3);
	func_575(uParam0, uParam1, uParam2, iParam3);
}

void func_351(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		func_72(uParam0);
		uParam0->f_18 = 0;
		func_406(uParam0);
		func_407(uParam0);
		func_576(uParam0);
	}
}

void func_352(var uParam0)
{
	if ((Global_1900073.f_26[0 /*30*/] <= 1 || Global_1900073.f_26[0 /*30*/] == 9) || Global_1900073.f_26[0 /*30*/] == 13)
	{
		func_184(uParam0, 0);
	}
	else
	{
		func_184(uParam0, 1);
	}
}

void func_353(var uParam0, var uParam1)
{
	if (((!func_577() || !func_68(uParam1, 0)) || Global_40.f_11184[0] != func_501(uParam0)) || __LIB_0__::func_163(func_53(uParam1, 0), 716706914))
	{
		func_408(uParam0);
	}
	else if (Global_1900073.f_26[0 /*30*/] == 1)
	{
		if (PAD::_IS_USING_KEYBOARD(0) && PLAYER::_0xF4CB347D7B5EB0FD())
		{
			func_326(uParam0, 24, !__LIB_8__::func_957(&(uParam0->f_28), 1));
		}
		else
		{
			func_326(uParam0, 23, !__LIB_8__::func_957(&(uParam0->f_28), 1));
		}
		func_327(&(uParam0->f_28), 1);
		func_578(uParam0, 0);
	}
	else if (Global_1900073.f_26[0 /*30*/] == 2)
	{
		func_326(uParam0, 26, !__LIB_8__::func_957(&(uParam0->f_28), 2));
		func_327(&(uParam0->f_28), 2);
		func_578(uParam0, 1);
	}
	else if (Global_1900073.f_26[0 /*30*/] == 3)
	{
		func_326(uParam0, 28, !__LIB_8__::func_957(&(uParam0->f_28), 4));
		func_327(&(uParam0->f_28), 4);
		func_578(uParam0, 2);
	}
	else
	{
		func_408(uParam0);
	}
}

void func_354(var uParam0, var uParam1)
{
	if ((!func_579() || Global_1900073.f_26[0 /*30*/] != 6) || func_79(uParam1, 0, 4096))
	{
		func_409(uParam0);
	}
	else if (func_397(Global_40.f_11184[0]) || func_398(Global_40.f_11184[0]))
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
		{
			if (PAD::_IS_USING_KEYBOARD(0) && PLAYER::_0xF4CB347D7B5EB0FD())
			{
				func_326(uParam0, 36, !__LIB_8__::func_957(&(uParam0->f_29), 1));
			}
			else
			{
				func_326(uParam0, 35, !__LIB_8__::func_957(&(uParam0->f_29), 1));
			}
			func_327(&(uParam0->f_29), 1);
			func_580(uParam0, 0);
		}
		else
		{
			if (TASK::_0x5952DFA38FA529FE())
			{
				func_326(uParam0, 38, !__LIB_8__::func_957(&(uParam0->f_29), 2));
			}
			else
			{
				func_326(uParam0, 37, !__LIB_8__::func_957(&(uParam0->f_29), 2));
			}
			func_327(&(uParam0->f_29), 2);
			func_580(uParam0, 1);
		}
	}
	else
	{
		func_326(uParam0, 40, 1);
	}
}

void func_355(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	if (!func_581() || Global_1900073.f_26[0 /*30*/] != 7)
	{
		func_410(uParam0);
	}
	else
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, 0);
		if (!func_238(iVar0))
		{
			func_408(uParam0);
		}
		else if (func_146(uParam2, iVar0))
		{
			func_326(uParam0, 46, !__LIB_8__::func_957(&(uParam0->f_30), 1));
			func_327(&(uParam0->f_30), 1);
			func_582(uParam0, 0);
		}
		else
		{
			if (TASK::_0x5952DFA38FA529FE())
			{
				func_326(uParam0, 51, !__LIB_8__::func_957(&(uParam0->f_30), 2));
			}
			else
			{
				func_326(uParam0, 50, !__LIB_8__::func_957(&(uParam0->f_30), 2));
			}
			func_327(&(uParam0->f_30), 2);
			func_582(uParam0, 1);
		}
	}
}

bool func_357()
{
	if (Global_1900073.f_26[0 /*30*/] == 1)
	{
		return true;
	}
	return false;
}

float func_359(var uParam0, int iParam1)
{
	return func_584(func_583((uParam0[iParam1 /*263*/])->f_18));
}

bool func_360(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(Global_1900073.f_26[iParam0 /*30*/].f_6, iParam1);
}

void func_361(var uParam0, int iParam1)
{
	char* sVar0;
	float fVar1;
	int iVar2;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		sVar0 = func_379(iVar2);
		fVar1 = 0f;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && DECORATOR::DECOR_EXIST_ON(iParam1, sVar0))
		{
			fVar1 = DECORATOR::DECOR_GET_FLOAT(iParam1, sVar0);
		}
		if (fVar1 > 0f && ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
		{
			func_585(uParam0, iVar2, fVar1);
		}
		else
		{
			func_586(uParam0, iVar2);
		}
		iVar2++;
	}
}

void func_376(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_586(uParam0, iVar0);
		iVar0++;
	}
}

char* func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Fish_Attractor_Bluegill";
		case 1:
			return "Fish_Attractor_BullheadCatfish";
		case 2:
			return "Fish_Attractor_ChainPickerel";
		case 3:
			return "Fish_Attractor_ChannelCatfish";
		case 4:
			return "Fish_Attractor_LakeSturgeon";
		case 5:
			return "Fish_Attractor_LargemouthBass";
		case 6:
			return "Fish_Attractor_LongnoseGar";
		case 7:
			return "Fish_Attractor_Muskie";
		case 8:
			return "Fish_Attractor_NorthernPike";
		case 9:
			return "Fish_Attractor_Perch";
		case 10:
			return "Fish_Attractor_RedfinPickerel";
		case 11:
			return "Fish_Attractor_RockBass";
		case 12:
			return "Fish_Attractor_SmallmouthBass";
		case 13:
			return "Fish_Attractor_SockeyeSalmon";
		case 14:
			return "Fish_Attractor_SteelheadTrout";
		default:
			break;
	}
	return "";
}

bool func_381(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 0);
}

int func_388(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("PROVISION_FISH_BLUEGILL_LEGENDARY") || iParam0 == joaat("PROVISION_FISH_BLUEGILL_POOR")) || iParam0 == joaat("PROVISION_FISH_BLUEGILL")) || iParam0 == joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR")) || iParam0 == joaat("PROVISION_FISH_BULLHEAD_CATFISH")) || iParam0 == joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR")) || iParam0 == joaat("PROVISION_FISH_CHAIN_PICKEREL")) || iParam0 == joaat("PROVISION_FISH_CHANNEL_CATFISH_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR")) || iParam0 == joaat("PROVISION_FISH_CHANNEL_CATFISH")) || iParam0 == joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_LAKE_STURGEON_POOR")) || iParam0 == joaat("PROVISION_FISH_LAKE_STURGEON")) || iParam0 == joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR")) || iParam0 == joaat("PROVISION_FISH_LARGEMOUTH_BASS")) || iParam0 == joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_LONGNOSE_GAR_POOR")) || iParam0 == joaat("PROVISION_FISH_LONGNOSE_GAR")) || iParam0 == joaat("PROVISION_FISH_MUSKIE_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_MUSKIE_POOR")) || iParam0 == joaat("PROVISION_FISH_MUSKIE")) || iParam0 == joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_NORTHERN_PIKE_POOR")) || iParam0 == joaat("PROVISION_FISH_NORTHERN_PIKE")) || iParam0 == joaat("PROVISION_FISH_PERCH_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_PERCH_POOR")) || iParam0 == joaat("PROVISION_FISH_PERCH")) || iParam0 == joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR")) || iParam0 == joaat("PROVISION_FISH_REDFIN_PICKEREL")) || iParam0 == joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_ROCK_BASS_POOR")) || iParam0 == joaat("PROVISION_FISH_ROCK_BASS")) || iParam0 == joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR")) || iParam0 == joaat("PROVISION_FISH_SMALLMOUTH_BASS")) || iParam0 == joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR")) || iParam0 == joaat("PROVISION_FISH_SOCKEYE_SALMON")) || iParam0 == joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY")) || iParam0 == joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR")) || iParam0 == joaat("PROVISION_FISH_STEELHEAD_TROUT"))
	{
		return 0;
	}
	return 1;
}

bool func_390(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_390(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_7__::func_501(28);
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
			if (!__LIB_3__::func_708(iParam0, &iVar0, iParam5))
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
						func_390(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_390(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_390(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_390(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_390(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_390(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_390(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				Jump @4449; //curOff = 2860
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				Jump @4449; //curOff = 2876
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				Jump @4449; //curOff = 2892
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				Jump @4449; //curOff = 2908
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				Jump @4449; //curOff = 2924
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				Jump @4449; //curOff = 2940
				__LIB_7__::func_501(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				Jump @4449; //curOff = 3033
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				Jump @4449; //curOff = 3100
				Jump @4449; //curOff = 3103
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
				Jump @4449; //curOff = 3354
				bParam2 = true;
				bVar4 = true;
				Jump @4449; //curOff = 3363
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(1);
				Jump @4449; //curOff = 3396
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(2);
				Jump @4449; //curOff = 3429
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(4);
				Jump @4449; //curOff = 3462
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(1);
				Jump @4449; //curOff = 3495
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(2);
				Jump @4449; //curOff = 3528
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				Jump @4449; //curOff = 3561
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				Jump @4449; //curOff = 3594
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				Jump @4449; //curOff = 3627
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				Jump @4449; //curOff = 3660
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				Jump @4449; //curOff = 3693
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				Jump @4449; //curOff = 3726
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				Jump @4449; //curOff = 3759
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				Jump @4449; //curOff = 3792
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				Jump @4449; //curOff = 3825
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				Jump @4449; //curOff = 3856
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				Jump @4449; //curOff = 3887
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				Jump @4449; //curOff = 3918
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				Jump @4449; //curOff = 3950
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				Jump @4449; //curOff = 3969
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				Jump @4449; //curOff = 3988
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				Jump @4449; //curOff = 4007
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4054
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4101
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4148
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4195
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4242
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4289
				__LIB_1__::func_240(488, 0);
				Jump @4449; //curOff = 4300
				__LIB_1__::func_240(491, 0);
				Jump @4449; //curOff = 4311
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_390(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_390(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				Jump @4449; //curOff = 4384
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				Jump @4449; //curOff = 4403
				__LIB_1__::func_240(486, 0);
				Jump @4449; //curOff = 4414
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				Jump @4449; //curOff = 4432
				__LIB_1__::func_240(496, 0);
			}
			if (!bVar4)
			{
				if (iVar0 <= 0)
				{
					return false;
				}
				iVar10 = iParam0;
				__LIB_0__::func_371(&iVar10);
				if (!__LIB_3__::func_427(iVar10, iVar0, iParam5))
				{
					return false;
				}
				else if (!__LIB_0__::func_708(0))
				{
					return true;
				}
				if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
				{
					__LIB_7__::func_685(iParam0);
				}
				if (__LIB_0__::func_192(iParam0, -1979000645))
				{
					__LIB_9__::func_8(iParam0);
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
						func_390(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
						iVar34++;
					}
				}
				else
				{
					func_686(iVar2, 0);
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
int func_391(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	return __LIB_9__::func_282(iParam0, &uVar0, iParam1, iParam2, iParam3);
}

bool func_396(int iParam0)
{
	if (((iParam0 == joaat("UPGRADE_FSH_BAIT_BREAD") || iParam0 == joaat("UPGRADE_FSH_BAIT_CORN")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CHEESE")) || func_398(iParam0))
	{
		return true;
	}
	return false;
}

bool func_397(int iParam0)
{
	if ((iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_RIVER") || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"))
	{
		return true;
	}
	return false;
}

bool func_398(int iParam0)
{
	if (((iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER") || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP")) || iParam0 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		return true;
	}
	return false;
}

bool func_400(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_1900073.f_194) && PED::IS_PED_IN_VEHICLE(func_53(uParam0, iParam1), Global_1900073.f_194, true))
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(func_53(uParam0, iParam1), true))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(func_53(uParam0, iParam1), true);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (func_693(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_401(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_1900073.f_194) && PED::IS_PED_ON_SPECIFIC_VEHICLE(func_53(uParam0, iParam1), Global_1900073.f_194))
	{
		return true;
	}
	if (PED::IS_PED_ON_VEHICLE(func_53(uParam0, iParam1), false))
	{
		iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(func_53(uParam0, iParam1), true, false), 10f, 0, 75782);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (func_693(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_406(var uParam0)
{
	func_694(uParam0);
	func_511(&(uParam0->f_105), 3);
	func_511(&(uParam0->f_105), 4);
	func_511(&(uParam0->f_105), 5);
	func_511(&(uParam0->f_105), 6);
	func_511(&(uParam0->f_105), 7);
	func_511(&(uParam0->f_105), 8);
	func_511(&(uParam0->f_105), 9);
	func_511(&(uParam0->f_105), 10);
	func_511(&(uParam0->f_105), 11);
	func_511(&(uParam0->f_105), 12);
}

void func_407(var uParam0)
{
	func_695(uParam0);
	func_511(&(uParam0->f_105), 13);
	func_511(&(uParam0->f_105), 14);
	func_511(&(uParam0->f_105), 12);
}

void func_408(var uParam0)
{
	func_696(uParam0);
	func_511(&(uParam0->f_105), 23);
	func_511(&(uParam0->f_105), 24);
	func_511(&(uParam0->f_105), 26);
	func_511(&(uParam0->f_105), 28);
}

void func_409(var uParam0)
{
	func_697(uParam0);
	func_511(&(uParam0->f_105), 40);
	func_511(&(uParam0->f_105), 35);
	func_511(&(uParam0->f_105), 36);
	func_511(&(uParam0->f_105), 37);
	func_511(&(uParam0->f_105), 38);
}

void func_410(var uParam0)
{
	func_698(uParam0);
	func_511(&(uParam0->f_105), 46);
	func_511(&(uParam0->f_105), 50);
	func_511(&(uParam0->f_105), 51);
}

int func_411(int iParam0)
{
	if (iParam0 == joaat("UPGRADE_FSH_BAIT_NONE") || iParam0 == joaat("UPGRADE_FSH_LURE_NONE"))
	{
		return 1;
	}
	return 0;
}

bool func_412(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
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
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return false;
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
			func_412(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
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
	return true;
}

void func_413(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	uParam2->f_614[iParam4] = 0;
	func_451(iParam3);
	func_414(uParam0, uParam1, iParam3, 0);
	func_333(iParam3, 512);
	func_64(uParam0, uParam1, uParam2, iParam3, -1);
	Global_1900073.f_26[iParam3 /*30*/].f_7 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iParam4]))
	{
		func_450(uParam0, uParam2, iParam4);
	}
	func_272(uParam2, iParam4, 8);
}

void func_414(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 1 && func_46(&(uParam0->f_676)))
	{
		(uParam1[iParam2 /*263*/])->f_196 = uParam0->f_69;
	}
	else
	{
		(uParam1[iParam2 /*263*/])->f_196 = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_68, uParam0->f_69 + 1);
	}
	__LIB_1__::func_148(&((uParam1[iParam2 /*263*/])->f_236));
}

void func_415(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	if (func_79(uParam1, iParam3, 8192) && func_79(uParam1, iParam3, 16384))
	{
		return;
	}
	if ((uParam1[iParam3 /*263*/])->f_189 == 0)
	{
		return;
	}
	if ((__LIB_0__::func_75(&((uParam1[iParam3 /*263*/])->f_186)) && __LIB_1__::func_871(&((uParam1[iParam3 /*263*/])->f_186)) > (uParam1[iParam3 /*263*/])->f_197) && iParam4 != 0)
	{
		return;
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (!func_238(iVar0))
	{
		return;
	}
	if (iParam4 == 0)
	{
		sVar1 = "LARGE_BITE_FISH_END";
		sVar2 = "LARGE_BITE_ROD_END";
	}
	else if (iParam4 == 1)
	{
		sVar1 = "LARGE_BITE_FISH_HOOKED";
		sVar2 = "LARGE_BITE_ROD_HOOKED";
	}
	else
	{
		sVar1 = "LARGE_BITE_FISH_FLEE";
		sVar2 = "LARGE_BITE_ROD_FLEE";
	}
	if (!func_79(uParam1, iParam3, 8192) && AUDIO::_0x84848E1C0FC67DBB((uParam1[iParam3 /*263*/])->f_89))
	{
		AUDIO::_0xF1C5310FEAA36B48((uParam1[iParam3 /*263*/])->f_89, sVar1, __LIB_14__::func_184(iParam3), *uParam0, 0, 0);
		AUDIO::_0x503703EC1781B7D6((uParam1[iParam3 /*263*/])->f_89, "FishSize", uParam2->f_409[iVar0]);
		func_548(uParam1, iParam3, 8192);
	}
	if (!func_79(uParam1, iParam3, 16384) && AUDIO::_0x84848E1C0FC67DBB((uParam1[iParam3 /*263*/])->f_90))
	{
		AUDIO::_0xF1C5310FEAA36B48((uParam1[iParam3 /*263*/])->f_90, sVar2, func_53(uParam1, iParam3), *uParam0, 0, 0);
		AUDIO::_0x503703EC1781B7D6((uParam1[iParam3 /*263*/])->f_90, "FishSize", uParam2->f_409[iVar0]);
		func_548(uParam1, iParam3, 16384);
	}
}

void func_416(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = func_702(iParam2);
	if (func_703(iVar0) && FLOCK::_0x19870C40C7EE15BE(iVar0, (uParam0[iParam1 /*263*/])->f_102[iParam2]))
	{
		FLOCK::_0xC3D581A34BC0A1F0(iVar0, (uParam0[iParam1 /*263*/])->f_102[iParam2]);
		if (iParam1 == 0)
		{
			func_704(uParam0, iParam2, 0f);
		}
	}
}

void func_417(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if ((uParam0[iParam1 /*263*/])->f_118[iParam2] != iParam3)
	{
		(uParam0[iParam1 /*263*/])->f_118[iParam2] = iParam3;
	}
}

float func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4.125f;
		case 1:
			return 6.125f;
		case 2:
			return 9.0625f;
		case 3:
			return 180.4375f;
		case 4:
			return 46f;
		case 5:
			return 25.0625f;
		case 6:
			return 41.5f;
		case 7:
			return 36.4375f;
		case 8:
			return 46.4375f;
		case 9:
			return 2.5625f;
		case 10:
			return 10.1875f;
		case 11:
			return 3.3125f;
		case 12:
			return 22.375f;
		case 13:
			return 54.25f;
		case 14:
			return 29.5f;
		default:
			break;
	}
	return 0f;
}

bool func_431(var uParam0, var uParam1, var uParam2)
{
	if ((((((Global_1900073.f_25 == 1 || uParam2->f_705 == 1) || func_142(uParam0, uParam1, uParam2, 0) != -1) || !__LIB_8__::func_955(Global_40.f_11184[0])) || (uParam1[0 /*263*/])->f_22 < 0.25f) || !func_456(uParam0, uParam1, 0, 1)) || !__LIB_0__::func_75(&((uParam1[0 /*263*/])->f_183)))
	{
		return false;
	}
	if (func_46(&(uParam0->f_676)))
	{
		if (__LIB_1__::func_871(&((uParam1[0 /*263*/])->f_183)) >= func_708(uParam1))
		{
			return true;
		}
	}
	else if ((uParam2->f_776 >= 5 && uParam2->f_775 == 0) && __LIB_1__::func_871(&((uParam1[0 /*263*/])->f_183)) >= 5000)
	{
		return true;
	}
	return false;
}

void func_432(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	if (func_1() || __LIB_4__::func_188(uParam0) != 3)
	{
		return;
	}
	if (__LIB_0__::func_75(&(uParam2->f_696)) && __LIB_1__::func_871(&(uParam2->f_696)) < 5000)
	{
		return;
	}
	__LIB_1__::func_148(&(uParam2->f_696));
	iVar0 = func_268(uParam1);
	if (func_709(uParam0, iVar0) && func_710(uParam1, iVar0))
	{
		iVar1 = __LIB_10__::func_762(iVar0);
		if (__LIB_8__::func_951(iVar1))
		{
			uParam2->f_368[0] = 2;
			uParam2->f_286[0] = __LIB_10__::func_763(iVar1, uParam2->f_368[0]);
			if (iVar0 == 9)
			{
				uParam2->f_532[0] = 1;
			}
		}
	}
}

void func_433(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	iVar0 = 15;
	if (Global_1900073.f_152 == 1)
	{
		iVar0 = 10;
	}
	else if (Global_1900073.f_152 == 2)
	{
		iVar0 = 13;
	}
	else if (Global_1900073.f_152 == 3)
	{
		iVar0 = 4;
	}
	else if (Global_1900073.f_152 == 4)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 15);
		switch (iVar1)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 1;
				break;
			case 2:
				iVar0 = 2;
				break;
			case 3:
				iVar0 = 3;
				break;
			case 4:
				iVar0 = 4;
				break;
			case 5:
				iVar0 = 5;
				break;
			case 6:
				iVar0 = 6;
				break;
			case 7:
				iVar0 = 7;
				break;
			case 8:
				iVar0 = 8;
				break;
			case 9:
				iVar0 = 9;
				break;
			case 10:
				iVar0 = 10;
				break;
			case 11:
				iVar0 = 11;
				break;
			case 12:
				iVar0 = 13;
				break;
			case 13:
				iVar0 = 12;
				break;
			case 14:
				iVar0 = 14;
				break;
		}
	}
	else if (iParam2 == 1)
	{
		if (uParam0->f_676.f_2 == 1)
		{
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar2)
			{
				case 0:
					iVar0 = 5;
					break;
				case 1:
					iVar0 = 12;
					break;
				case 2:
					iVar0 = 14;
					break;
				default:
					iVar0 = 5;
					break;
			}
		}
		else if (uParam0->f_676.f_4 == 1)
		{
			iVar0 = 12;
		}
		else if (func_46(&(uParam0->f_676)))
		{
			iVar0 = 0;
		}
		else if (uParam0->f_60 == 0)
		{
			iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar3)
			{
				case 0:
					iVar0 = 4;
					break;
				case 1:
					iVar0 = 7;
					break;
				case 2:
					iVar0 = 12;
					break;
				case 3:
					iVar0 = 14;
					break;
				default:
					iVar0 = 12;
					break;
			}
		}
		else if (uParam0->f_60 == 1)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar4)
			{
				case 0:
					iVar0 = 8;
					break;
				case 1:
					iVar0 = 13;
					break;
				default:
					iVar0 = 13;
					break;
			}
		}
		else if (uParam0->f_60 == 2)
		{
			iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar5)
			{
				case 0:
					iVar0 = 3;
					break;
				case 1:
					iVar0 = 5;
					break;
				case 2:
					iVar0 = 6;
					break;
				default:
					iVar0 = 5;
					break;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (uParam0->f_676.f_1 == 1)
	{
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		switch (iVar6)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 2;
				break;
			case 2:
				iVar0 = 10;
				break;
			case 3:
				iVar0 = 11;
				break;
			case 4:
				iVar0 = 12;
				break;
			default:
				iVar0 = 0;
				break;
		}
	}
	else if (uParam0->f_676.f_2 == 1)
	{
		iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		switch (iVar7)
		{
			case 0:
				iVar0 = 5;
				break;
			case 1:
				iVar0 = 12;
				break;
			case 2:
				iVar0 = 14;
				break;
			default:
				iVar0 = 12;
				break;
		}
	}
	else if (uParam0->f_676.f_3 == 1)
	{
		iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		switch (iVar8)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 2;
				break;
			case 2:
				iVar0 = 10;
				break;
			case 3:
				iVar0 = 11;
				break;
			case 4:
				iVar0 = 12;
				break;
			default:
				iVar0 = 0;
				break;
		}
	}
	else if (uParam0->f_676 == 1)
	{
		iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		switch (iVar9)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 2;
				break;
			case 2:
				iVar0 = 9;
				break;
			case 3:
				iVar0 = 11;
				break;
			case 4:
				iVar0 = 12;
				break;
			default:
				iVar0 = 0;
				break;
		}
	}
	else if (uParam0->f_676.f_4 == 1)
	{
		iVar0 = 12;
	}
	else if (uParam0->f_676.f_5 == 1)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = func_711();
	}
	if (__LIB_8__::func_951(iVar0) && uParam1->f_1145[iVar0] == 1)
	{
		uParam1->f_368[iParam2] = 0;
		iVar10 = __LIB_10__::func_763(iVar0, uParam1->f_368[iParam2]);
		uParam1->f_286[iParam2] = iVar10;
	}
}

int func_434(int iParam0)
{
	int iVar0;
	iVar0 = 15;
	switch (iParam0)
	{
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
			iVar0 = 0;
			break;
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
			iVar0 = 1;
			break;
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
			iVar0 = 2;
			break;
		case joaat("A_C_FISHCHANNELCATFISH_01_XL"):
		case joaat("A_C_FISHCHANNELCATFISH_01_LG"):
			iVar0 = 3;
			break;
		case joaat("A_C_FISHLAKESTURGEON_01_LG"):
			iVar0 = 4;
			break;
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_LG"):
			iVar0 = 5;
			break;
		case joaat("A_C_FISHLONGNOSEGAR_01_LG"):
			iVar0 = 6;
			break;
		case joaat("A_C_FISHMUSKIE_01_LG"):
			iVar0 = 7;
			break;
		case joaat("A_C_FISHNORTHERNPIKE_01_LG"):
			iVar0 = 8;
			break;
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_FISHPERCH_01_SM"):
			iVar0 = 9;
			break;
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
			iVar0 = 10;
			break;
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
			iVar0 = 11;
			break;
		case joaat("A_C_FISHSMALLMOUTHBASS_01_LG"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
			iVar0 = 12;
			break;
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_LG"):
			iVar0 = 13;
			break;
		case joaat("A_C_FISHRAINBOWTROUT_01_LG"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
			iVar0 = 14;
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_435(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bVar4 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_259(vParam0, 1092616192 /* Float: 10f */), 0, &fVar0);
	bVar5 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_259(vParam0, 1092616192 /* Float: 10f */), &fVar1, false);
	fVar2 = (fVar0 - fVar1);
	fVar3 = func_712(uParam3);
	if ((bVar4 == 1 && bVar5 == 1) && fVar2 > fVar3)
	{
		if (fVar2 > 2f)
		{
			fVar2 = 2f;
		}
		*uParam4 = (fVar0 - (fVar2 / 2f));
		return true;
	}
	return false;
}

bool func_436(var uParam0, int iParam1)
{
	return ((uParam0[iParam1 /*263*/])->f_21 != -99999f && (uParam0[iParam1 /*263*/])->f_21 < 0.03f);
}

bool func_437(var uParam0, var uParam1, vector3 vParam2)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_31(uParam0))
	{
		if (func_472(uParam0, uParam1, iVar0, vParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_438(vector3 vParam0)
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, 2331.62f, -1216.34f, 45f, false) < 15f || MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, 210.38f, 1876.39f, 200.66f, false) < 125f)
	{
		return true;
	}
	return false;
}

bool func_441(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_163[iVar0]) && uParam0->f_163[iVar0] == *uParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_442(var uParam0, var uParam1)
{
	if (uParam0->f_4 == 1)
	{
		if (ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("A_C_FISHSMALLMOUTHBASS_01_MS") || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("A_C_FISHSMALLMOUTHBASS_01_LG"))
		{
			return false;
		}
	}
	return true;
}

void func_444(int iParam0)
{
	if (!func_1() || !ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
	{
		NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(iParam0);
	}
}

float func_445(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (iParam2 == 2)
	{
		iVar0 = __LIB_10__::func_762(iParam1);
		if (__LIB_8__::func_951(iVar0))
		{
			return func_429(iVar0);
		}
	}
	fVar1 = func_714(iParam1, iParam2, 1);
	fVar2 = func_715(iParam1, iParam2, 1);
	fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2);
	if (uParam0->f_1143 != -1)
	{
		fVar3 = func_716(iParam1, iParam2, uParam0->f_1143);
	}
	fVar4 = func_717(fVar3);
	return fVar4;
}

float func_446(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (__LIB_8__::func_952(iParam1))
	{
		return 1f;
	}
	fVar0 = func_718(uParam0, iParam1, 1);
	fVar1 = 1f;
	fVar2 = PED::_0x134775B093AD5C38(uParam0->f_163[iParam1]);
	fVar3 = ((fVar2 * 2f) * fVar0);
	fVar4 = ((fVar1 - fVar2) + fVar3);
	if (fVar1 <= 0f || fVar2 <= 0f)
	{
		return 1f;
	}
	else if (fVar4 <= 0f)
	{
		return 1f;
	}
	else if (fVar4 < (fVar1 - fVar2))
	{
		return 1f;
	}
	else if (fVar4 > (fVar1 + fVar2))
	{
		return 1f;
	}
	return fVar4;
}

int func_447(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
		case joaat("A_C_FISHPERCH_01_SM"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
			iVar0 = 0;
			break;
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
			iVar0 = 1;
			break;
		case joaat("A_C_FISHCHANNELCATFISH_01_XL"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_LG"):
		case joaat("A_C_FISHMUSKIE_01_LG"):
		case joaat("A_C_FISHLONGNOSEGAR_01_LG"):
		case joaat("A_C_FISHLAKESTURGEON_01_LG"):
		case joaat("A_C_FISHRAINBOWTROUT_01_LG"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_LG"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_LG"):
		case joaat("A_C_FISHNORTHERNPIKE_01_LG"):
		case joaat("A_C_FISHCHANNELCATFISH_01_LG"):
			iVar0 = 4;
			break;
		default:
			break;
	}
	return iVar0;
}

void func_448(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_8__::func_952(iParam1))
	{
		return;
	}
	iVar0 = __LIB_10__::func_762(uParam0->f_327[iParam1]);
	iVar1 = func_270(iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	PED::_SET_PED_BODY_COMPONENT(uParam0->f_163[iParam1], iVar1);
	PED::_UPDATE_PED_VARIATION(uParam0->f_163[iParam1], false, true, true, true, false);
}

void func_450(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_31(uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_184(iVar0)))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_163[iParam2], __LIB_14__::func_184(iVar0), false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_185(iVar0)))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_163[iParam2], __LIB_14__::func_185(iVar0), false);
		}
		iVar0++;
	}
}

void func_451(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_185(iParam0)) && ENTITY::IS_ENTITY_ATTACHED(__LIB_14__::func_185(iParam0)))
	{
		ENTITY::DETACH_ENTITY(__LIB_14__::func_185(iParam0), true, true);
	}
}

bool func_452(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_IN_WATER(func_53(uParam1, 0)) || PED::IS_PED_SWIMMING(func_53(uParam1, 0)))
	{
		if (__LIB_0__::func_665(func_53(uParam1, 0), uParam2->f_163[iParam3], 0, 1) < (10f / 2f))
		{
			return true;
		}
	}
	if (!func_46(&(uParam0->f_676)) && __LIB_4__::func_188(uParam0) != 3)
	{
		return true;
	}
	return PED::IS_PED_FLEEING(uParam2->f_163[iParam3]);
}

bool func_453(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if ((((func_456(uParam0, uParam1, 0, 1) && func_721(uParam0, uParam2)) && func_457(uParam1, 0, iParam4, 2)) && (uParam1[0 /*263*/])->f_74 == 0) && (uParam1[0 /*263*/])->f_30[iParam3] < func_722(uParam0, uParam2, 0, iParam4, 1))
	{
		return true;
	}
	return false;
}

bool func_454(var uParam0, var uParam1, int iParam2, vector3 vParam3)
{
	if ((!__LIB_0__::func_86(vParam3) && __LIB_0__::func_94(uParam1->f_163[iParam2], vParam3, 0) > (4f * 1.5f)) && __LIB_0__::func_94(func_53(uParam0, 0), vParam3, 0) < 50f)
	{
		return true;
	}
	return false;
}

bool func_456(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam2 == 0)
	{
		if (((((((__LIB_3__::func_127(uParam0->f_105[43]) || __LIB_3__::func_127(uParam0->f_105[44])) || (__LIB_3__::func_127(uParam0->f_105[31]) && Global_1900073.f_23 == 1)) || (__LIB_3__::func_127(uParam0->f_105[32]) && Global_1900073.f_23 == 1)) || (__LIB_3__::func_127(uParam0->f_105[33]) && Global_1900073.f_23 == 1)) || (__LIB_3__::func_127(uParam0->f_105[34]) && Global_1900073.f_23 == 1)) || __LIB_3__::func_127(uParam0->f_105[35])) || __LIB_3__::func_127(uParam0->f_105[36]))
		{
			return false;
		}
		if (iParam3 == 1)
		{
			if ((uParam1[iParam2 /*263*/])->f_71 == 0)
			{
				if (Global_1900073.f_26[iParam2 /*30*/].f_4 > 0.9f)
				{
					return false;
				}
			}
			else if ((!func_251(iParam2) && __LIB_0__::func_75(&(uParam0->f_15))) && __LIB_1__::func_871(&(uParam0->f_15)) > 2000)
			{
				return false;
			}
		}
	}
	else if (uParam0->f_676.f_5 == 1)
	{
		return false;
	}
	if (((((((Global_1900073.f_26[iParam2 /*30*/] != 6 || Global_1900073.f_179[iParam2] == 1) || func_79(uParam1, iParam2, 4096)) || !__LIB_0__::func_75(&((uParam1[iParam2 /*263*/])->f_236))) || __LIB_0__::func_264(&((uParam1[iParam2 /*263*/])->f_236)) <= IntToFloat((uParam1[iParam2 /*263*/])->f_196)) || func_723(uParam0, uParam1, iParam2)) || !func_436(uParam1, iParam2)) || (ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_185(iParam2)) && func_724(uParam1, iParam2, func_261(iParam2))))
	{
		return false;
	}
	return true;
}

bool func_457(var uParam0, int iParam1, int iParam2, int iParam3)
{
	return (func_436(uParam0, iParam1) && (uParam0[iParam1 /*263*/])->f_22 > func_712(__LIB_10__::func_763(iParam2, iParam3)));
}

void func_458(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (__LIB_0__::func_75(&((uParam0[iParam3 /*263*/])->f_215)))
	{
		return;
	}
	if (!__LIB_8__::func_951(uParam1->f_327[iParam2]))
	{
		return;
	}
	if ((uParam0[iParam3 /*263*/])->f_210 == 0)
	{
		(uParam0[iParam3 /*263*/])->f_227 = func_725(uParam1, iParam2);
	}
	else
	{
		(uParam0[iParam3 /*263*/])->f_227 = BUILTIN::ROUND((IntToFloat((uParam0[iParam3 /*263*/])->f_227) * 0.95f));
	}
	if ((uParam0[iParam3 /*263*/])->f_227 < 4000)
	{
		(uParam0[iParam3 /*263*/])->f_227 = 4000;
	}
	if ((uParam0[iParam3 /*263*/])->f_210 > 0)
	{
		func_726(uParam0, iParam3);
	}
	(uParam0[iParam3 /*263*/])->f_210++;
	__LIB_0__::func_37(&((uParam0[iParam3 /*263*/])->f_218));
	__LIB_0__::func_37(&((uParam0[iParam3 /*263*/])->f_224));
	__LIB_1__::func_148(&((uParam0[iParam3 /*263*/])->f_215));
	__LIB_0__::func_37(&((uParam0[iParam3 /*263*/])->f_221));
	__LIB_0__::func_37(&((uParam0[iParam3 /*263*/])->f_229));
}

void func_459(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (!func_238(iParam3))
	{
		return;
	}
	if (AUDIO::_0x84848E1C0FC67DBB((uParam1[iParam4 /*263*/])->f_91))
	{
		AUDIO::_0xF1C5310FEAA36B48((uParam1[iParam4 /*263*/])->f_91, "STRUGGLE", uParam2->f_163[iParam3], *uParam0, 0, 0);
		AUDIO::_0x503703EC1781B7D6((uParam1[iParam4 /*263*/])->f_91, "FishSize", uParam2->f_409[iParam3]);
	}
}

int func_460(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_75(&((uParam0[iParam1 /*263*/])->f_221)))
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(__LIB_1__::func_871(&((uParam0[iParam1 /*263*/])->f_221))) / 2f));
	}
	iVar1 = ((uParam0[iParam1 /*263*/])->f_227 - iVar0);
	if (iVar1 < 4000)
	{
		iVar1 = 4000;
	}
	if (__LIB_0__::func_75(&((uParam0[iParam1 /*263*/])->f_215)) && __LIB_1__::func_871(&((uParam0[iParam1 /*263*/])->f_215)) >= iVar1)
	{
		return 1;
	}
	return 0;
}

int func_461(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_469(uParam0, uParam1, iParam3, 0) || (uParam1[iParam3 /*263*/])->f_233 == 7)
	{
		return 1;
	}
	return 0;
}

bool func_462(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = func_727(uParam1, iParam2);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * 0.95f));
	return BUILTIN::TO_FLOAT(__LIB_3__::func_135(&(uParam0->f_12))) >= IntToFloat(iVar0 * 1000);
}

void func_463(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (__LIB_0__::func_75(&((uParam0[iParam3 /*263*/])->f_218)))
	{
		return;
	}
	if (!__LIB_8__::func_951(uParam1->f_327[iParam2]))
	{
		return;
	}
	if ((uParam0[iParam3 /*263*/])->f_211 == 0)
	{
		(uParam0[iParam3 /*263*/])->f_228 = func_728(uParam1, iParam2);
	}
	else
	{
		(uParam0[iParam3 /*263*/])->f_228 = BUILTIN::ROUND((IntToFloat((uParam0[iParam3 /*263*/])->f_228) / 0.98f));
	}
	if ((uParam0[iParam3 /*263*/])->f_228 > 10000)
	{
		(uParam0[iParam3 /*263*/])->f_228 = 10000;
	}
	(uParam0[iParam3 /*263*/])->f_211++;
	__LIB_0__::func_37(&((uParam0[iParam3 /*263*/])->f_215));
	__LIB_0__::func_37(&((uParam0[iParam3 /*263*/])->f_221));
	__LIB_1__::func_148(&((uParam0[iParam3 /*263*/])->f_218));
	__LIB_0__::func_37(&((uParam0[iParam3 /*263*/])->f_224));
}

int func_464(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_75(&((uParam1[iParam3 /*263*/])->f_224)))
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(__LIB_1__::func_871(&((uParam1[iParam3 /*263*/])->f_224))) / 2f));
	}
	iVar1 = ((uParam1[iParam3 /*263*/])->f_228 + iVar0);
	if (iVar1 > 10000)
	{
		iVar1 = 10000;
	}
	if ((((__LIB_0__::func_75(&((uParam1[iParam3 /*263*/])->f_218)) && __LIB_1__::func_871(&((uParam1[iParam3 /*263*/])->f_218)) >= iVar1) && !func_469(uParam0, uParam1, iParam3, 0)) && (uParam1[iParam3 /*263*/])->f_233 != 7) && func_477(uParam1, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_465(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (iParam3 == 0)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT((uParam1[iParam3 /*263*/])->f_228) / 2f));
		if ((((((__LIB_0__::func_75(&((uParam1[iParam3 /*263*/])->f_218)) && __LIB_1__::func_871(&((uParam1[iParam3 /*263*/])->f_218)) >= iVar0) && __LIB_0__::func_75(&(uParam0->f_12))) && __LIB_1__::func_871(&(uParam0->f_12)) >= iVar0) && !func_469(uParam0, uParam1, iParam3, 0)) && (uParam1[iParam3 /*263*/])->f_233 != 7) && func_477(uParam1, iParam3))
		{
			return 1;
		}
	}
	return 0;
}

bool func_469(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (Global_1900073.f_154[iParam2] == 1 && uParam0->f_676 == 0)
	{
		if (func_102(iParam2, 2, 1))
		{
			if (iParam3 == 1)
			{
			}
			return true;
		}
		else if (Global_1900073.f_26[iParam2 /*30*/].f_2 <= 1f)
		{
			if (iParam3 == 1)
			{
			}
			return true;
		}
		else if (func_69(iParam2, 1, 1) && __LIB_2__::func_157(uParam0->f_65, func_258(iParam2)))
		{
			if (iParam3 == 1)
			{
			}
			return true;
		}
		else if ((uParam1[iParam2 /*263*/])->f_233 == 8)
		{
			if (iParam3 == 1)
			{
			}
			return true;
		}
	}
	return false;
}

bool func_470(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST((uParam0[iParam1 /*263*/])->f_14))
	{
		iVar0 = func_730(joaat("UPGRADE_FSH_BAIT_BREAD"));
		if (iVar0 != 0)
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				(uParam0[iParam1 /*263*/])->f_14 = OBJECT::CREATE_OBJECT(iVar0, ENTITY::GET_ENTITY_COORDS(func_53(uParam0, iParam1), true, false), false, false, false, false, false);
				ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam1 /*263*/])->f_14, false);
				ENTITY::SET_ENTITY_COLLISION((uParam0[iParam1 /*263*/])->f_14, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE((uParam0[iParam1 /*263*/])->f_14, true);
				OBJECT::SET_OBJECT_TARGETTABLE((uParam0[iParam1 /*263*/])->f_14, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
		}
	}
	return ENTITY::DOES_ENTITY_EXIST((uParam0[iParam1 /*263*/])->f_14);
}

bool func_471(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	float fVar0;
	if (((uParam1[iParam4 /*263*/])->f_233 != 9 && (uParam1[iParam4 /*263*/])->f_23 != -99999f) && uParam0->f_676 == 0)
	{
		fVar0 = __LIB_0__::func_636(ENTITY::GET_ENTITY_COORDS(func_53(uParam1, iParam4), true, false), func_262(uParam2, iParam3));
		if ((fVar0 < 5f && (uParam1[iParam4 /*263*/])->f_23 > 0.01f) || (fVar0 < 10f && (uParam1[iParam4 /*263*/])->f_23 > 0.05f))
		{
			return true;
		}
	}
	return false;
}

bool func_472(var uParam0, var uParam1, int iParam2, vector3 vParam3)
{
	int iVar0;
	int iVar1;
	if ((uParam1[iParam2 /*263*/])->f_233 == 9)
	{
		return true;
	}
	iVar0 = func_731(uParam0, uParam1, iParam2, vParam3);
	iVar1 = func_732(uParam1, iParam2, vParam3);
	return (iVar0 == 1 && iVar1 == 1);
}

void func_473(var uParam0, var uParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	if ((uParam0[iParam2 /*263*/])->f_233 != 5)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_53(uParam0, iParam2), 0f, 15f, 0f) };
		vVar0.x = (vVar0.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
		vVar0.f_1 = (vVar0.y + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
		vVar3 = { func_478(vVar0, 0) };
		if (!__LIB_0__::func_86(vVar3))
		{
			fVar6 = func_484(vVar3, 0);
			fVar7 = func_712(ENTITY::GET_ENTITY_MODEL(uParam1->f_163[iParam3]));
			if (fVar6 > fVar7 && !func_724(uParam0, iParam2, vVar3))
			{
				vVar8 = { vVar3 };
				vVar8.f_2 = (vVar8.z - 0.25f);
				func_733(uParam0, iParam2, vVar8);
				(uParam0[iParam2 /*263*/])->f_233 = 5;
				(uParam0[iParam2 /*263*/])->f_256 = 1;
			}
			else
			{
				(uParam0[iParam2 /*263*/])->f_233 = 6;
			}
		}
		else
		{
			(uParam0[iParam2 /*263*/])->f_233 = 6;
		}
	}
}

bool func_474(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if ((uParam0[iParam3 /*263*/])->f_233 == 9)
	{
		return false;
	}
	if (!func_477(uParam0, iParam3))
	{
		return false;
	}
	if (func_734(uParam0, uParam1, iParam3, iParam2))
	{
		return true;
	}
	if (!__LIB_0__::func_163(uParam1->f_163[iParam2], 1227113341))
	{
		return true;
	}
	if (__LIB_0__::func_665(uParam1->f_163[iParam2], (uParam0[iParam3 /*263*/])->f_14, 0, 1) < 1f)
	{
		return true;
	}
	if ((uParam0[iParam3 /*263*/])->f_233 != 2 && __LIB_0__::func_665(func_53(uParam0, iParam3), uParam1->f_163[iParam2], 0, 1) < 6f)
	{
		return true;
	}
	if ((iParam3 == 0 && __LIB_0__::func_75(&((uParam0[iParam3 /*263*/])->f_248))) && __LIB_1__::func_871(&((uParam0[iParam3 /*263*/])->f_248)) > 3000)
	{
		if (((uParam0[iParam3 /*263*/])->f_234 == 4 && IntToFloat(func_247()) < -25f) || ((uParam0[iParam3 /*263*/])->f_234 == 3 && IntToFloat(func_247()) > 25f))
		{
			(uParam0[iParam3 /*263*/])->f_251 = 1;
			return true;
		}
	}
	return false;
}

void func_475(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, vector3 vParam5)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;
	fVar0 = __LIB_3__::func_978(func_53(uParam1, iParam3), uParam2->f_163[iParam4], 1);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	fVar3 = func_712(ENTITY::GET_ENTITY_MODEL(uParam2->f_163[iParam4]));
	if (iParam3 == 0 && (uParam1[iParam3 /*263*/])->f_251 == 1)
	{
		if (func_247() < 0)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = 1;
		}
	}
	if (__LIB_0__::func_665(func_53(uParam1, iParam3), uParam2->f_163[iParam4], 0, 1) < 6f)
	{
		(uParam1[iParam3 /*263*/])->f_233 = 2;
	}
	else if ((!func_146(uParam2, iParam4) || (uParam1[iParam3 /*263*/])->f_24 < fVar3) || (func_69(iParam3, 1, 1) && __LIB_2__::func_157(uParam0->f_65, vParam5)))
	{
		fVar1 = (fVar0 + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-10, 10)));
		(uParam1[iParam3 /*263*/])->f_233 = 1;
	}
	else if (func_736(iParam3, iVar2))
	{
		fVar1 = (fVar0 - IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(65, 85)));
		(uParam1[iParam3 /*263*/])->f_233 = 4;
	}
	else if (func_737(iParam3, iVar2))
	{
		fVar1 = (fVar0 + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(65, 85)));
		(uParam1[iParam3 /*263*/])->f_233 = 3;
	}
	else
	{
		fVar1 = (fVar0 + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-10, 10)));
		(uParam1[iParam3 /*263*/])->f_233 = 1;
	}
	if ((uParam1[iParam3 /*263*/])->f_233 == 2)
	{
		vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_53(uParam1, iParam3), 0f, (6f + 1f), 0f) };
		vVar7 = { func_478(vVar4, 0) };
	}
	else
	{
		vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam5, fVar1, 0f, 2.5f, 0f) };
		vVar7 = { func_478(vVar4, 0) };
	}
	if (!__LIB_0__::func_86(vVar7))
	{
		fVar10 = func_484(vVar7, 0);
		if (((((uParam1[iParam3 /*263*/])->f_233 != 1 && fVar10 < fVar3) || !func_472(uParam0, uParam1, iParam3, vVar7)) || (func_69(iParam3, 1, 1) && __LIB_2__::func_157(uParam0->f_65, vVar7))) || func_724(uParam1, iParam3, vVar7))
		{
			(uParam1[iParam3 /*263*/])->f_233 = 6;
		}
		else
		{
			vVar11 = { vVar7 };
			vVar11.f_2 = (vVar11.z - 0.25f);
			func_733(uParam1, iParam3, vVar11);
		}
	}
}

void func_476(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_251(iParam2))
	{
		(uParam0[iParam2 /*263*/])->f_255 = 1f;
	}
	else if (func_738())
	{
		(uParam0[iParam2 /*263*/])->f_255 = 1.5f;
	}
	else if (func_146(uParam1, iParam3))
	{
		(uParam0[iParam2 /*263*/])->f_255 = 3f;
	}
	else
	{
		(uParam0[iParam2 /*263*/])->f_255 = 1.5f;
	}
}

bool func_477(var uParam0, int iParam1)
{
	return ((uParam0[iParam1 /*263*/])->f_233 == 9 || ((uParam0[iParam1 /*263*/])->f_23 != -99999f && (uParam0[iParam1 /*263*/])->f_23 < 0.03f));
}

Vector3 func_478(vector3 vParam0, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	iVar0 = 1;
	if (iParam3 == 1)
	{
		iVar0 = 0;
	}
	vVar1 = { 0f, 0f, 0f };
	bVar6 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_259(vParam0, 1092616192 /* Float: 10f */), iVar0, &fVar4);
	bVar7 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_259(vParam0, 1092616192 /* Float: 10f */), &fVar5, false);
	if ((bVar6 == 1 || bVar7 == 0) || fVar4 > fVar5)
	{
		vVar1.x = vParam0.x;
		vVar1.f_1 = vParam0.y;
		vVar1.f_2 = fVar4;
	}
	return vVar1;
}

void func_479(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (!func_238(iParam3))
	{
		return;
	}
	iVar0 = func_739(uParam1, iParam4);
	if (iVar0 > -1)
	{
		AUDIO::_0xDCF5BA95BBF0FABA((uParam1[iParam4 /*263*/])->f_92[iVar0], "VFX_SPLASH", func_258(iParam4), *uParam0, 0, 0, 1);
		AUDIO::_0x503703EC1781B7D6((uParam1[iParam4 /*263*/])->f_92[iVar0], "FishSize", uParam2->f_409[iParam3]);
	}
}

int func_483(vector3 vParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iVar0 /*35*/].f_3) && VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_484(vector3 vParam0, int iParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	iVar0 = 1;
	if (iParam3 == 1)
	{
		iVar0 = 0;
	}
	bVar4 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_259(vParam0, 1092616192 /* Float: 10f */), iVar0, &fVar2);
	bVar5 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_259(vParam0, 1092616192 /* Float: 10f */), &fVar3, false);
	if ((bVar4 == 1 && bVar5 == 1) && fVar2 > fVar3)
	{
		fVar1 = (fVar2 - fVar3);
	}
	return fVar1;
}

void func_495(var uParam0, int iParam1, int iParam2)
{
	if ((func_744(iParam2) || func_745(iParam2)) || iParam2 == joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		(uParam0[iParam1 /*263*/])->f_71 = 0;
	}
	else
	{
		(uParam0[iParam1 /*263*/])->f_71 = 1;
	}
}

int func_496(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 1;
	if ((uParam0[iParam1 /*263*/])->f_71 == 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

char* func_497(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_BREAD"):
			return "p_baitBread01x";
		case joaat("UPGRADE_FSH_BAIT_CORN"):
			return "p_baitCorn01x";
		case joaat("UPGRADE_FSH_BAIT_CHEESE"):
			return "p_baitCheese01x";
		case joaat("UPGRADE_FSH_BAIT_WORM"):
			return "p_baitWorm01x";
		case joaat("UPGRADE_FSH_BAIT_CRICKET"):
			return "p_baitCricket01x";
		case joaat("UPGRADE_FSH_BAIT_CRAYFISH"):
			return "P_CRAWDAD01X";
		case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
			return "p_finishedragonfly01x";
		case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
			return "p_FinisdFishlure01x";
		case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
			return "p_finishdcrawd01x";
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
			return "P_FINISHEDRAGONFLYLEGENDARY01X";
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
			return "P_FINISDFISHLURELEGENDARY01X";
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
			return "P_FINISHDCRAWDLEGENDARY01X";
		case joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"):
			return "P_LGOC_SPINNER_V4";
		case joaat("UPGRADE_FSH_BAIT_NONE"):
			return "P_FISHHOOK02X";
		default:
			break;
	}
	return "P_FISHHOOK02X";
}

bool func_498()
{
	if (((((__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_BREAD"), 1, 0) || __LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CORN"), 1, 0)) || __LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CHEESE"), 1, 0)) || __LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_WORM"), 1, 0)) || __LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CRICKET"), 1, 0)) || __LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CRAYFISH"), 1, 0))
	{
		return true;
	}
	return false;
}

void func_499()
{
	struct<2> Var0;
	int iVar2;
	Var0 = 0;
	iVar2 = 0;
	if (__LIB_8__::func_955(Global_40.f_11184[0]) && __LIB_1__::func_707(Global_40.f_11184[0], 1, 0))
	{
		iVar2 = Global_40.f_11184[0];
	}
	else if (Global_40.f_11184[0] == joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		iVar2 = joaat("UPGRADE_FSH_BAIT_NONE");
	}
	else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_BREAD"), 1, 0))
	{
		iVar2 = joaat("UPGRADE_FSH_BAIT_BREAD");
	}
	else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CORN"), 1, 0))
	{
		iVar2 = joaat("UPGRADE_FSH_BAIT_CORN");
	}
	else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CHEESE"), 1, 0))
	{
		iVar2 = joaat("UPGRADE_FSH_BAIT_CHEESE");
	}
	if (iVar2 != 0)
	{
		Var0 = 2;
		switch (iVar2)
		{
			case joaat("UPGRADE_FSH_BAIT_BREAD"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_BREAD");
				break;
			case joaat("UPGRADE_FSH_BAIT_CORN"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_CORN");
				break;
			case joaat("UPGRADE_FSH_BAIT_CHEESE"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_CHEESE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_CRICKET");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_WORM");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRAYFISH"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_CRAYFISH");
				break;
			case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LURE_RIVER");
				break;
			case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LURE_LAKE");
				break;
			case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LURE_SWAMP");
				break;
			case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER");
				break;
			case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE");
				break;
			case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP");
				break;
			case joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG");
				break;
			case joaat("UPGRADE_FSH_BAIT_NONE"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_NONE");
				break;
		}
		HUD::_0x8A59D44189AF2BC5(&Var0, 1856029758);
	}
}

void func_500(var uParam0)
{
	uParam0->f_61 = 0;
	if (uParam0->f_60 == -1)
	{
	}
	else if (uParam0->f_60 == 0)
	{
		uParam0->f_61 = func_746(Global_40.f_11184[0]);
	}
	else if (uParam0->f_60 == 1)
	{
		uParam0->f_61 = func_747(Global_40.f_11184[0]);
	}
	else if (uParam0->f_60 == 2)
	{
		uParam0->f_61 = func_748(Global_40.f_11184[0]);
	}
}

int func_501(var uParam0)
{
	if (uParam0->f_676.f_1 == 1)
	{
		return joaat("UPGRADE_FSH_BAIT_CHEESE");
	}
	else if (uParam0->f_676.f_4 == 1)
	{
		return joaat("UPGRADE_FSH_BAIT_CRICKET");
	}
	else if (uParam0->f_676.f_2 == 1)
	{
		return joaat("UPGRADE_FSH_BAIT_LURE_LAKE");
	}
	else if (uParam0->f_676 == 1)
	{
		return joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE");
	}
	return joaat("UPGRADE_FSH_BAIT_CHEESE");
}

void func_510(var uParam0)
{
	if (func_50(uParam0, 256))
	{
		func_204(uParam0, 256);
		__LIB_3__::func_760();
		uParam0->f_19 = -1;
	}
}

void func_511(var uParam0, int iParam1)
{
	if (__LIB_3__::func_127((*uParam0)[iParam1]))
	{
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		__LIB_0__::func_769();
		(*uParam0)[iParam1] = 0;
		__LIB_8__::func_675(2048);
	}
}

void func_519(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_79(uParam1, iParam3, 1))
	{
		return;
	}
	func_186(uParam1, iParam3);
	if (func_79(uParam1, iParam3, 128))
	{
		func_187(uParam0, uParam1, uParam2, iParam3, 0, 0, 0);
		func_535(uParam1, iParam3);
	}
	func_64(uParam0, uParam1, uParam2, iParam3, -1);
	func_333(iParam3, 512);
	(uParam1[iParam3 /*263*/])->f_3 = 0;
	func_548(uParam1, iParam3, 1);
	Global_1900073.f_26[iParam3 /*30*/].f_6 = 0;
	__LIB_8__::func_674(iParam3, 4);
	__LIB_8__::func_674(iParam3, 8);
	__LIB_8__::func_674(iParam3, 64);
	__LIB_8__::func_674(iParam3, 16);
	__LIB_8__::func_674(iParam3, 65536);
	__LIB_8__::func_674(iParam3, 131072);
	__LIB_8__::func_674(iParam3, 262144);
	(uParam1[iParam3 /*263*/])->f_18 = 0;
	(uParam1[iParam3 /*263*/])->f_198 = 0;
	(uParam1[iParam3 /*263*/])->f_227 = 0;
	(uParam1[iParam3 /*263*/])->f_228 = 0;
	(uParam1[iParam3 /*263*/])->f_210 = 0;
	(uParam1[iParam3 /*263*/])->f_211 = 0;
	(uParam1[iParam3 /*263*/])->f_233 = 0;
	(uParam1[iParam3 /*263*/])->f_235 = 0f;
	(uParam1[iParam3 /*263*/])->f_205 = 0;
	(uParam1[iParam3 /*263*/])->f_206 = 0;
	(uParam1[iParam3 /*263*/])->f_207 = 0;
	(uParam1[iParam3 /*263*/])->f_208 = 0;
	(uParam1[iParam3 /*263*/])->f_209 = 0;
	(uParam1[iParam3 /*263*/])->f_182 = 0;
	(uParam1[iParam3 /*263*/])->f_74 = 0;
	(uParam1[iParam3 /*263*/])->f_78 = -1;
	(uParam1[iParam3 /*263*/])->f_6 = 0;
	(uParam1[iParam3 /*263*/])->f_199 = 1f;
	(uParam1[iParam3 /*263*/])->f_257 = 0;
	(uParam1[iParam3 /*263*/])->f_200 = 0;
	(uParam1[iParam3 /*263*/])->f_201 = 0;
	__LIB_0__::func_37(&((uParam1[iParam3 /*263*/])->f_202));
	__LIB_0__::func_37(&((uParam1[iParam3 /*263*/])->f_236));
	__LIB_0__::func_37(&((uParam1[iParam3 /*263*/])->f_215));
	__LIB_0__::func_37(&((uParam1[iParam3 /*263*/])->f_218));
	__LIB_0__::func_37(&((uParam1[iParam3 /*263*/])->f_221));
	__LIB_0__::func_37(&((uParam1[iParam3 /*263*/])->f_224));
	__LIB_0__::func_37(&((uParam1[iParam3 /*263*/])->f_191));
	__LIB_0__::func_37(&((uParam1[iParam3 /*263*/])->f_212));
	__LIB_0__::func_37(&((uParam1[iParam3 /*263*/])->f_186));
	func_191(uParam1, iParam3, 0);
	if (iParam3 == 0)
	{
		func_324(uParam0);
		func_408(uParam0);
		func_409(uParam0);
		func_410(uParam0);
		func_61(&(uParam0->f_676), &(uParam0->f_105), 0);
		uParam0->f_666 = 0;
		func_531(uParam0, uParam0->f_4);
		func_72(uParam0);
		func_204(uParam0, 128);
		func_28(&(uParam0->f_31));
		__LIB_0__::func_37(&(uParam0->f_96));
		__LIB_0__::func_37(&(uParam0->f_99));
		uParam0->f_59 = __LIB_5__::func_639();
		uParam0->f_60 = __LIB_1__::func_906(uParam0->f_59);
		func_500(uParam0);
	}
	func_32(uParam1, iParam3);
	func_33(uParam1, iParam3);
	func_34(uParam1, iParam3);
}

void func_520(var uParam0, int iParam1, bool bParam2)
{
	if (__LIB_3__::func_127((*uParam0)[iParam1]))
	{
		func_103();
		__LIB_0__::func_268(&(uParam0->f_460), 3f);
	}
	if (bParam2 == 1)
	{
		func_237(uParam0, iParam1);
	}
}

bool func_521(var uParam0, int iParam1)
{
	if (__LIB_1__::func_672(iParam1, 2))
	{
		return true;
	}
	if (Global_1900073.f_184[iParam1] == 1)
	{
		return true;
	}
	if (iParam1 == 0)
	{
		if (func_297())
		{
			return true;
		}
		if ((!func_1() && Global_1900073.f_20 == 1) && Global_40.f_11184[0] != func_501(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_522()
{
	if (func_540())
	{
		return false;
	}
	return true;
}

void func_523(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	if ((__LIB_7__::func_729() || __LIB_1__::func_662(256)) || (uParam0->f_683 >= 1 && uParam0->f_683 <= 4))
	{
		return;
	}
	if (iParam1 == 3)
	{
		if (HUD::_UIPROMPT_IS_VALID(uParam0->f_93))
		{
			return;
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_83[iParam1]))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_83[iParam1] = __LIB_11__::func_347("MGFSH_CTX_GRIP", joaat("INPUT_AIM"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_8__::func_754(uParam0->f_83[iParam1], 1);
			iVar0 = __LIB_0__::func_17(uParam0->f_83[iParam1]);
			if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
			{
				HUD::_UIPROMPT_SET_TAG(Global_1945938[iVar0 /*18*/].f_3, "CTX_GRIP");
			}
			break;
		case 1:
			if (Global_1900073.f_26[0 /*30*/] == 6 || Global_1900073.f_26[0 /*30*/] == 10)
			{
				uParam0->f_83[iParam1] = __LIB_11__::func_347("MGFSH_CTX_RESET", joaat("INPUT_MINIGAME_FISHING_RESET_CAST"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				uParam0->f_83[iParam1] = __LIB_11__::func_347("MGFSH_CTX_CUT_LINE", joaat("INPUT_MINIGAME_FISHING_RESET_CAST"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			break;
		case 2:
			uParam0->f_83[iParam1] = __LIB_11__::func_347("MGFSH_CTX_HOOK", joaat("INPUT_MINIGAME_FISHING_HOOK"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			if (func_758(2))
			{
				__LIB_1__::func_221(uParam0->f_83[iParam1], 0, 1);
			}
			__LIB_8__::func_754(uParam0->f_83[iParam1], 1);
			__LIB_4__::func_862(uParam0->f_83[iParam1], joaat("INPUT_ATTACK"));
			iVar0 = __LIB_0__::func_17(uParam0->f_83[iParam1]);
			if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
			{
				HUD::_UIPROMPT_SET_TAG(Global_1945938[iVar0 /*18*/].f_3, "CTX_HOOK");
			}
			break;
		case 3:
			uParam0->f_710 = TASK::_0x5952DFA38FA529FE();
			uParam0->f_93 = HUD::_UIPROMPT_REGISTER_BEGIN();
			HUD::_0xF4A5C4509BF923B1(uParam0->f_93, 0);
			if (PAD::_IS_USING_KEYBOARD(0) || uParam0->f_710 == 1)
			{
				HUD::_UIPROMPT_SET_CONTROL_ACTION(uParam0->f_93, joaat("INPUT_MINIGAME_FISHING_MANUAL_REEL_IN"));
			}
			else
			{
				HUD::_UIPROMPT_SET_CONTROL_ACTION(uParam0->f_93, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_X"));
				HUD::_UIPROMPT_SET_CONTROL_ACTION(uParam0->f_93, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_Y"));
				HUD::_UIPROMPT_SET_ROTATE_MODE(uParam0->f_93, 0f, 0);
			}
			HUD::_UIPROMPT_SET_ATTRIBUTE(uParam0->f_93, 10, 1);
			HUD::_UIPROMPT_SET_ATTRIBUTE(uParam0->f_93, 11, 1);
			HUD::_UIPROMPT_SET_ATTRIBUTE(uParam0->f_93, 18, 1);
			if (iParam2 == 1)
			{
				HUD::_UIPROMPT_SET_TEXT(uParam0->f_93, "MGFSH_CTX_REEL_LURE");
			}
			else
			{
				HUD::_UIPROMPT_SET_TEXT(uParam0->f_93, "MGFSH_CTX_REEL_IN");
			}
			HUD::_UIPROMPT_SET_TAG(uParam0->f_93, "CTX_REEL");
			HUD::_UIPROMPT_REGISTER_END(uParam0->f_93);
			break;
		case 4:
			uParam0->f_83[iParam1] = __LIB_11__::func_347("MGFSH_CTX_CONTROL", joaat("INPUT_MINIGAME_FISHING_LEFT_AXIS_X"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_8__::func_754(uParam0->f_83[iParam1], 1);
			break;
		case 5:
			uParam0->f_83[iParam1] = __LIB_11__::func_347("MGFSH_CTX_THROW_BACK", joaat("INPUT_MINIGAME_FISHING_RELEASE_FISH"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			break;
		case 6:
			if (uParam0->f_682 == 0)
			{
				uParam0->f_83[iParam1] = __LIB_11__::func_347("MGFSH_CTX_KEEP", joaat("INPUT_MINIGAME_FISHING_KEEP_FISH"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				uParam0->f_83[iParam1] = __LIB_11__::func_347("MGFSH_CTX_RETURN", joaat("INPUT_MINIGAME_FISHING_KEEP_FISH"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (iParam3 == 0)
			{
				__LIB_1__::func_221(uParam0->f_83[iParam1], 0, 1);
			}
			break;
		case 7:
			uParam0->f_83[iParam1] = __LIB_11__::func_347("MGFSH_CTX_CHOOSE", joaat("INPUT_OPEN_WHEEL_MENU"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_8__::func_754(uParam0->f_83[iParam1], 1);
			__LIB_4__::func_862(uParam0->f_83[iParam1], joaat("INPUT_TOGGLE_HOLSTER"));
			__LIB_4__::func_862(uParam0->f_83[iParam1], joaat("INPUT_QUICK_EQUIP_ITEM"));
			break;
		case 8:
			uParam0->f_83[iParam1] = __LIB_11__::func_347(MISC::_CREATE_VAR_STRING(10, "MGFSH_CTX_EQUIP", __LIB_1__::func_925(__LIB_1__::func_72(uParam0->f_78), joaat("COLOR_PURE_WHITE"))), joaat("INPUT_MINIGAME_FISHING_QUICK_EQUIP"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			break;
	}
	bVar1 = func_758(iParam1);
	if (bVar1 == 0)
	{
		func_761(uParam0, iParam1, bVar1);
	}
}

void func_524(var uParam0, var uParam1, var uParam2)
{
	if ((!__LIB_8__::func_955(uParam0->f_77) || Global_40.f_11184[0] == uParam0->f_77) || func_540())
	{
		func_252(uParam0, 8);
		return;
	}
	if (!__LIB_8__::func_955(Global_40.f_11184[0]))
	{
		if (uParam0->f_78 == 0)
		{
			if (__LIB_1__::func_707(uParam0->f_77, 1, 0))
			{
				uParam0->f_78 = uParam0->f_77;
			}
			else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_BREAD"), 1, 0))
			{
				uParam0->f_78 = joaat("UPGRADE_FSH_BAIT_BREAD");
			}
			else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CORN"), 1, 0))
			{
				uParam0->f_78 = joaat("UPGRADE_FSH_BAIT_CORN");
			}
			else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CHEESE"), 1, 0))
			{
				uParam0->f_78 = joaat("UPGRADE_FSH_BAIT_CHEESE");
			}
			else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CRICKET"), 1, 0))
			{
				uParam0->f_78 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			}
			else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_WORM"), 1, 0))
			{
				uParam0->f_78 = joaat("UPGRADE_FSH_BAIT_WORM");
			}
			else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_CRAYFISH"), 1, 0))
			{
				uParam0->f_78 = joaat("UPGRADE_FSH_BAIT_CRAYFISH");
			}
			else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_LURE_RIVER"), 1, 0))
			{
				uParam0->f_78 = joaat("UPGRADE_FSH_BAIT_LURE_RIVER");
			}
			else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_LURE_LAKE"), 1, 0))
			{
				uParam0->f_78 = joaat("UPGRADE_FSH_BAIT_LURE_LAKE");
			}
			else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"), 1, 0))
			{
				uParam0->f_78 = joaat("UPGRADE_FSH_BAIT_LURE_SWAMP");
			}
			else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"), 1, 0))
			{
				uParam0->f_78 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER");
			}
			else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"), 1, 0))
			{
				uParam0->f_78 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE");
			}
			else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"), 1, 0))
			{
				uParam0->f_78 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP");
			}
			else if (__LIB_1__::func_707(joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"), 1, 0))
			{
				uParam0->f_78 = joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG");
			}
			else
			{
				uParam0->f_78 = 0;
			}
		}
		if (uParam0->f_78 == 0)
		{
			func_252(uParam0, 8);
		}
		else
		{
			func_523(uParam0, 8, 0, 1);
		}
	}
	if (__LIB_1__::func_732(uParam0->f_83[8], 1))
	{
		Global_1900073.f_153 = uParam0->f_78;
	}
}

void func_525(var uParam0, var uParam1, var uParam2)
{
	if (Global_1900073.f_153 != 0)
	{
		if (Global_1900073.f_153 != Global_40.f_11184[0] && __LIB_8__::func_955(Global_1900073.f_153))
		{
			func_309(uParam0, uParam1, 0, Global_1900073.f_153, 1, 0);
			func_533(uParam0, uParam1, uParam2, 0, 2);
		}
		Global_1900073.f_153 = 0;
	}
}

void func_526(var uParam0, var uParam1)
{
	if (Global_1900073.f_21 == 1)
	{
		return;
	}
	if (((!func_763() || !func_68(uParam1, 0)) || Global_40.f_11184[0] == func_501(uParam0)) || __LIB_0__::func_163(func_53(uParam1, 0), 716706914))
	{
		uParam0->f_18 = 0;
		func_764(uParam0, 0, 0);
		func_406(uParam0);
	}
	else if (Global_1935496.f_30 == func_501(uParam0))
	{
		uParam0->f_18 = Global_1935496.f_30;
		func_764(uParam0, 1, 0);
		func_326(uParam0, func_765(uParam0), !__LIB_8__::func_957(&(uParam0->f_26), 4));
		func_327(&(uParam0->f_26), 4);
		func_766(uParam0, 2);
	}
	else if (__LIB_14__::func_83())
	{
		uParam0->f_18 = Global_1935496.f_30;
		func_764(uParam0, 1, 0);
		func_326(uParam0, func_767(uParam0), !__LIB_8__::func_957(&(uParam0->f_26), 2));
		func_327(&(uParam0->f_26), 2);
		func_766(uParam0, 1);
	}
	else
	{
		uParam0->f_18 = Global_1935496.f_30;
		func_764(uParam0, 0, uParam0->f_20 == -1);
		func_326(uParam0, func_768(uParam0), !__LIB_8__::func_957(&(uParam0->f_26), 1));
		func_327(&(uParam0->f_26), 1);
		func_766(uParam0, 0);
	}
}

void func_527(var uParam0, var uParam1)
{
	if (Global_1900073.f_20 == 1)
	{
		return;
	}
	if (((!func_769() || !func_68(uParam1, 0)) || __LIB_8__::func_955(Global_40.f_11184[0])) || __LIB_0__::func_163(func_53(uParam1, 0), 716706914))
	{
		uParam0->f_18 = 0;
		func_407(uParam0);
	}
	else if (__LIB_14__::func_83())
	{
		uParam0->f_18 = Global_1935496.f_30;
		func_326(uParam0, 14, !__LIB_8__::func_957(&(uParam0->f_27), 2));
		func_327(&(uParam0->f_27), 2);
		func_770(uParam0, 1);
	}
	else
	{
		func_326(uParam0, func_771(uParam0), !__LIB_8__::func_957(&(uParam0->f_27), 1));
		func_327(&(uParam0->f_27), 1);
		func_770(uParam0, 0);
	}
}

void func_528(var uParam0, var uParam1, int iParam2)
{
	if (!func_79(uParam1, iParam2, 1024))
	{
		Global_1900073.f_26[iParam2 /*30*/].f_1 = 30f;
		if (iParam2 == 0)
		{
			if (uParam0->f_1 == 1)
			{
				Global_1900073.f_26[iParam2 /*30*/].f_24 = 15f;
				Global_1900073.f_26[iParam2 /*30*/].f_25 = 20f;
			}
		}
		else if (uParam0->f_4 == 1)
		{
			Global_1900073.f_26[iParam2 /*30*/].f_24 = 7f;
			Global_1900073.f_26[iParam2 /*30*/].f_25 = 10f;
		}
		func_548(uParam1, iParam2, 1024);
	}
}

void func_529(var uParam0, var uParam1, var uParam2)
{
	switch (Global_1900073.f_26[0 /*30*/].f_16)
	{
		case -1:
			func_520(&(uParam0->f_105), 15, 1);
			func_520(&(uParam0->f_105), 16, 1);
			func_520(&(uParam0->f_105), 17, 1);
			func_520(&(uParam0->f_105), 18, 1);
			func_520(&(uParam0->f_105), 19, 1);
			func_520(&(uParam0->f_105), 20, 1);
			if (__LIB_8__::func_955(Global_40.f_11184[0]))
			{
				func_110(uParam0, 25, 1, -1, 1);
			}
			break;
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_110(uParam0, 15, 1, -2, 0);
			}
			break;
		case 3:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_110(uParam0, 16, 1, -2, 0);
			}
			break;
		case 2:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_110(uParam0, 17, 1, -2, 0);
			}
			break;
		case 4:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_110(uParam0, 18, 1, -2, 0);
			}
			break;
		case 5:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_110(uParam0, 19, 1, -2, 0);
			}
			break;
		case 6:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_110(uParam0, 20, 1, -2, 0);
				func_533(uParam0, uParam1, uParam2, 0, 32768);
			}
			break;
	}
}

void func_531(var uParam0, char* sParam1)
{
	if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3, sParam1))
	{
		uParam0->f_3 = sParam1;
		AUDIO::_0xAC84686C06184B0D(uParam0->f_3, uParam0->f_1);
	}
}

void func_532(var uParam0)
{
	if (func_46(&(uParam0->f_676)) || func_50(uParam0, 131072))
	{
		return;
	}
	if (AUDIO::TRIGGER_MUSIC_EVENT("BOB_FISHING_START"))
	{
		func_51(uParam0, 131072);
	}
}

void func_533(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	vector3 vVar0[24];
	int iVar3;
	if (((((iParam3 != 0 || func_1()) || func_46(&(uParam0->f_676))) || __LIB_5__::func_236(1)) || func_536(uParam0, iParam4)) || ENTITY::IS_ENTITY_DEAD(func_53(uParam1, iParam3)))
	{
		return;
	}
	StringCopy(&cVar0, "", 24);
	switch (iParam4)
	{
		case 1:
			StringCopy(&cVar0, "FISH_CAST", 24);
			break;
		case 2:
			StringCopy(&cVar0, "FISH_BAIT", 24);
			break;
		case 4:
			StringCopy(&cVar0, "FISH_GROUND", 24);
			break;
		case 8:
			StringCopy(&cVar0, "FISH_MISSED", 24);
			break;
		case 16:
			StringCopy(&cVar0, "FISH_HOOK", 24);
			break;
		case 32:
			StringCopy(&cVar0, "FISH_HOOK_I", 24);
			break;
		case 64:
			StringCopy(&cVar0, "FISH_SNAP_F", 24);
			break;
		case 128:
			StringCopy(&cVar0, "FISH_CT_GP", 24);
			break;
		case 256:
			StringCopy(&cVar0, "FISH_CT_FH", 24);
			break;
		case 512:
			StringCopy(&cVar0, "FISH_CT_L", 24);
			break;
		case 1024:
			StringCopy(&cVar0, "FISH_CT_T", 24);
			break;
		case 2048:
			StringCopy(&cVar0, "FISH_CT_L_T", 24);
			break;
		case 4096:
			StringCopy(&cVar0, "FISH_KEEP", 24);
			break;
		case 8192:
			StringCopy(&cVar0, "FISH_REL_FISH", 24);
			break;
		case 16384:
			StringCopy(&cVar0, "FISH_REL_MM", 24);
			break;
		case 32768:
			StringCopy(&cVar0, "FISH_NO_BAIT", 24);
			break;
		case 65536:
			StringCopy(&cVar0, "FISH_DIE_UHK", 24);
			break;
		case 131072:
			StringCopy(&cVar0, "FISH_REL_DEAD", 24);
			break;
		case 262144:
			StringCopy(&cVar0, "FISH_MID_BAT", 24);
			break;
		case 524288:
			iVar3 = func_142(uParam0, uParam1, uParam2, 0);
			if (func_238(iVar3))
			{
				switch (uParam2->f_327[iVar3])
				{
					case 0:
						StringCopy(&cVar0, "FISH_BLUEGILL", 24);
						break;
					case 1:
						StringCopy(&cVar0, "FISH_BULLCAT", 24);
						break;
					case 2:
						StringCopy(&cVar0, "FISH_CHAPICK", 24);
						break;
					case 3:
						StringCopy(&cVar0, "FISH_CHANCAT", 24);
						break;
					case 4:
						StringCopy(&cVar0, "FISH_STURGEON", 24);
						break;
					case 5:
						StringCopy(&cVar0, "FISH_LARGBASS", 24);
						break;
					case 6:
						StringCopy(&cVar0, "FISH_GAR", 24);
						break;
					case 7:
						StringCopy(&cVar0, "FISH_MUSKIE", 24);
						break;
					case 8:
						StringCopy(&cVar0, "FISH_PIKE", 24);
						break;
					case 9:
						StringCopy(&cVar0, "FISH_PERCH", 24);
						break;
					case 10:
						StringCopy(&cVar0, "FISH_REDPICK", 24);
						break;
					case 11:
						StringCopy(&cVar0, "FISH_ROCKBASS", 24);
						break;
					case 12:
						StringCopy(&cVar0, "FISH_SMALBASS", 24);
						break;
					case 13:
						StringCopy(&cVar0, "FISH_SALMON", 24);
						break;
					case 14:
						StringCopy(&cVar0, "FISH_TROUT", 24);
						break;
				}
			}
			break;
		default:
			break;
	}
	if (MISC::IS_STRING_NULL(&cVar0) || MISC::ARE_STRINGS_EQUAL(&cVar0, ""))
	{
		return;
	}
	if (__LIB_0__::func_181())
	{
		StringConCat(&cVar0, "_J", 24);
	}
	else
	{
		StringConCat(&cVar0, "_A", 24);
	}
	if (func_773(iParam4) && __LIB_2__::func_918())
	{
	}
	else
	{
		func_775(uParam0, cVar0);
	}
	if (iParam4 == 262144)
	{
		__LIB_1__::func_148(&(uParam0->f_667));
		uParam0->f_670 = MISC::GET_RANDOM_INT_IN_RANGE(40, 60);
	}
	else
	{
		func_776(uParam0, iParam4);
	}
}

void func_534(var uParam0, int iParam1)
{
	if (!__LIB_1__::func_672(iParam1, 64))
	{
		if (func_102(iParam1, 16, 1) || func_777(uParam0, iParam1))
		{
			__LIB_1__::func_148(&((uParam0[iParam1 /*263*/])->f_75));
			__LIB_1__::func_148(&((uParam0[iParam1 /*263*/])->f_183));
			__LIB_18__::func_162(iParam1, 64);
		}
	}
}

void func_535(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[iParam1 /*263*/])->f_13))
	{
		ENTITY::SET_ENTITY_COLLISION((uParam0[iParam1 /*263*/])->f_13, true, false);
		ENTITY::SET_ENTITY_INVINCIBLE((uParam0[iParam1 /*263*/])->f_13, false);
		if (ENTITY::IS_ENTITY_ATTACHED((uParam0[iParam1 /*263*/])->f_13))
		{
			ENTITY::DETACH_ENTITY((uParam0[iParam1 /*263*/])->f_13, true, true);
			PHYSICS::ACTIVATE_PHYSICS((uParam0[iParam1 /*263*/])->f_13);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&((uParam0[iParam1 /*263*/])->f_13));
	}
}

bool func_536(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_666, iParam1);
}

void func_537(var uParam0, var uParam1, int iParam2)
{
	if (func_79(uParam1, iParam2, 2))
	{
		return;
	}
	func_548(uParam1, iParam2, 2);
	func_414(uParam0, uParam1, iParam2, 1);
	func_11(uParam1, iParam2);
	func_778(uParam0, uParam1, iParam2);
	func_191(uParam1, iParam2, 1);
	(uParam1[iParam2 /*263*/])->f_181++;
	if (iParam2 == 0)
	{
		func_72(uParam0);
		if (!func_46(&(uParam0->f_676)))
		{
			func_554(&(uParam0->f_105), 41, 30);
		}
		else
		{
			func_554(&(uParam0->f_105), 41, 20);
		}
		uParam0->f_35++;
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_184(iParam2)))
		{
			ENTITY::_0x978AA2323ED32209(__LIB_14__::func_184(iParam2), 0.1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_185(iParam2)))
		{
			ENTITY::_0x978AA2323ED32209(__LIB_14__::func_185(iParam2), 0.1f);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_184(iParam2)))
		{
			ENTITY::_0x978AA2323ED32209(__LIB_14__::func_184(iParam2), 0f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_185(iParam2)))
		{
			ENTITY::_0x978AA2323ED32209(__LIB_14__::func_185(iParam2), 0f);
		}
	}
}

void func_538(var uParam0, int iParam1)
{
	if (((iParam1 == 0 && !func_79(uParam0, iParam1, 512)) && __LIB_0__::func_75(&((uParam0[iParam1 /*263*/])->f_202))) && __LIB_0__::func_265(&((uParam0[iParam1 /*263*/])->f_202)) < 6f)
	{
		(uParam0[iParam1 /*263*/])->f_199 = 2f;
	}
	else
	{
		(uParam0[iParam1 /*263*/])->f_199 = 1f;
	}
}

void func_539(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_672(iParam3, 64) || (uParam1[iParam3 /*263*/])->f_74 == 1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = iVar0;
		switch ((uParam1[iParam3 /*263*/])->f_118[iVar0])
		{
			case 0:
				if (func_779(uParam0, uParam1, uParam2, iParam3, iVar1))
				{
					func_417(uParam1, iParam3, iVar1, 1);
					__LIB_1__::func_148(&((uParam1[iParam3 /*263*/])->f_134[iVar0 /*3*/]));
				}
				else
				{
					func_416(uParam1, iParam3, iVar1);
				}
				break;
			case 1:
				if (func_780(uParam0, uParam1, uParam2, iParam3, iVar1))
				{
					func_416(uParam1, iParam3, iVar1);
					func_417(uParam1, iParam3, iVar1, 0);
					__LIB_1__::func_148(&((uParam1[iParam3 /*263*/])->f_134[iVar0 /*3*/]));
				}
				else
				{
					func_781(uParam0, uParam1, uParam2, iParam3, iVar1);
				}
				break;
			case 2:
				func_416(uParam1, iParam3, iVar1);
				break;
		}
		iVar0++;
	}
}

bool func_540()
{
	if (__LIB_7__::func_729())
	{
		return true;
	}
	return false;
}

int func_541(var uParam0)
{
	if (!__LIB_0__::func_75(&(uParam0->f_96)) || __LIB_0__::func_264(&(uParam0->f_96)) < 3f)
	{
		return 0;
	}
	if (__LIB_8__::func_955(Global_40.f_11184[0]))
	{
		if (func_397(Global_40.f_11184[0]) || func_398(Global_40.f_11184[0]))
		{
			if (Global_1900073.f_23 == 0)
			{
				if (PAD::_IS_USING_KEYBOARD(0) && PLAYER::_0xF4CB347D7B5EB0FD())
				{
					if (TASK::_0x5952DFA38FA529FE())
					{
						if (func_298(&(uParam0->f_105), 34) && !__LIB_3__::func_127(uParam0->f_105[34]))
						{
							return 1;
						}
					}
					else if (func_298(&(uParam0->f_105), 33) && !__LIB_3__::func_127(uParam0->f_105[33]))
					{
						return 1;
					}
				}
				else if (TASK::_0x5952DFA38FA529FE())
				{
					if (func_298(&(uParam0->f_105), 32) && !__LIB_3__::func_127(uParam0->f_105[32]))
					{
						return 1;
					}
				}
				else if (func_298(&(uParam0->f_105), 31) && !__LIB_3__::func_127(uParam0->f_105[31]))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_542(var uParam0, int iParam1)
{
	if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		func_523(uParam0, 0, 0, 1);
		func_782(uParam0, 0, iParam1);
		if (!__LIB_0__::func_75(&(uParam0->f_96)))
		{
			__LIB_1__::func_148(&(uParam0->f_96));
		}
	}
	else
	{
		func_782(uParam0, 0, iParam1);
		func_252(uParam0, 0);
		__LIB_0__::func_37(&(uParam0->f_96));
	}
}

void func_543(var uParam0, var uParam1)
{
	if ((uParam1[0 /*263*/])->f_71 == 0 || (uParam1[0 /*263*/])->f_71 == 1)
	{
		func_523(uParam0, 2, 0, 1);
	}
	else
	{
		func_252(uParam0, 2);
	}
}

void func_544(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;
	float fVar12;
	if ((((((func_540() || (Global_1900073.f_26[0 /*30*/] == 6 && !__LIB_1__::func_672(0, 64))) || (Global_1900073.f_26[0 /*30*/] == 6 && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))) || (Global_1900073.f_26[0 /*30*/] == 10 && !__LIB_1__::func_672(0, 64))) || (Global_1900073.f_26[0 /*30*/] == 10 && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))) || PAD::_0x6CD79468A1E595C6(0)) || uParam0->f_710 != TASK::_0x5952DFA38FA529FE())
	{
		func_252(uParam0, 3);
		__LIB_0__::func_37(&(uParam0->f_99));
		uParam0->f_710 = TASK::_0x5952DFA38FA529FE();
		return;
	}
	if (!HUD::_UIPROMPT_IS_VALID(uParam0->f_93))
	{
		iVar0 = 0;
		if (Global_1900073.f_26[0 /*30*/] == 6)
		{
			if (func_397(Global_40.f_11184[0]) || func_398(Global_40.f_11184[0]))
			{
				iVar0 = 1;
			}
		}
		func_523(uParam0, 3, iVar0, 1);
	}
	if (!HUD::_UIPROMPT_IS_VALID(uParam0->f_93))
	{
		return;
	}
	fVar1 = 0f;
	if (Global_1900073.f_26[0 /*30*/].f_4 != 0f)
	{
		func_782(uParam0, 3, 0);
		__LIB_0__::func_37(&(uParam0->f_99));
		fVar1 = Global_1900073.f_26[0 /*30*/].f_4;
	}
	else if (Global_1900073.f_26[0 /*30*/] == 6 || Global_1900073.f_26[0 /*30*/] == 10)
	{
		if ((uParam1[0 /*263*/])->f_71 != 0)
		{
			if (func_783(uParam0))
			{
				func_782(uParam0, 3, 1);
			}
			else
			{
				func_782(uParam0, 3, 0);
			}
		}
		else
		{
			func_782(uParam0, 3, 0);
		}
	}
	else if (Global_1900073.f_154[0] == 1)
	{
		iVar2 = func_142(uParam0, uParam1, uParam2, 0);
		if (func_238(iVar2) && !func_146(uParam2, iVar2))
		{
			if (func_784(uParam0))
			{
				func_782(uParam0, 3, 1);
			}
			else
			{
				func_782(uParam0, 3, 0);
			}
		}
		else
		{
			func_782(uParam0, 3, 0);
			__LIB_0__::func_37(&(uParam0->f_99));
		}
	}
	else if (func_784(uParam0))
	{
		func_782(uParam0, 3, 1);
	}
	else
	{
		func_782(uParam0, 3, 0);
	}
	fVar1 = __LIB_0__::func_251(fVar1, -1f, 1f);
	if (fVar1 > 0f)
	{
		fVar3 = PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_X"));
		fVar4 = PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_Y"));
		vVar5 = { __LIB_0__::func_173(fVar3, fVar4, 0f) };
		vVar8 = { 0f, -1f, 0f };
		fVar11 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar5.x, vVar5.y, vVar8.x, vVar8.y);
		fVar12 = (fVar11 / 360f);
		if (fVar3 < 0f)
		{
			fVar12 = (1f - fVar12);
		}
		fVar12 = __LIB_0__::func_251(fVar12, 0f, 1f);
		fVar12 = (fVar12 + 0.5f);
		if (fVar12 > 1f)
		{
			fVar12 = (fVar12 - 1f);
		}
		if (!PAD::_IS_USING_KEYBOARD(0))
		{
			HUD::_UIPROMPT_SET_SPINNER_POSITION(uParam0->f_93, fVar12);
		}
	}
}

void func_545(var uParam0, var uParam1)
{
	if ((Global_1900073.f_26[0 /*30*/] == 6 && !func_79(uParam1, 0, 4096)) && __LIB_8__::func_955(Global_40.f_11184[0]))
	{
		if ((uParam1[0 /*263*/])->f_71 == 1)
		{
			if (Global_1900073.f_23 == 1 && uParam0->f_35 < 2)
			{
				if (PAD::_IS_USING_KEYBOARD(0) && PLAYER::_0xF4CB347D7B5EB0FD())
				{
					if (TASK::_0x5952DFA38FA529FE())
					{
						func_110(uParam0, 34, 1, -2, 1);
					}
					else
					{
						func_110(uParam0, 33, 1, -2, 1);
					}
				}
				else if (TASK::_0x5952DFA38FA529FE())
				{
					func_110(uParam0, 32, 1, -2, 1);
				}
				else
				{
					func_110(uParam0, 31, 1, -2, 1);
				}
			}
			else
			{
				func_110(uParam0, 30, 1, func_787(uParam0), 1);
				if (PAD::_IS_USING_KEYBOARD(0) && PLAYER::_0xF4CB347D7B5EB0FD())
				{
					if (TASK::_0x5952DFA38FA529FE())
					{
						func_110(uParam0, 34, 0, -2, 1);
					}
					else
					{
						func_110(uParam0, 33, 0, -2, 1);
					}
				}
				else if (TASK::_0x5952DFA38FA529FE())
				{
					func_110(uParam0, 32, 0, -2, 1);
				}
				else
				{
					func_110(uParam0, 31, 0, -2, 1);
				}
			}
			func_110(uParam0, 39, 0, -2, 1);
			if (!func_46(&(uParam0->f_676)))
			{
				func_110(uParam0, 41, 0, -2, 1);
			}
		}
		else
		{
			if (Global_1900073.f_23 == 1 && uParam0->f_35 < 2)
			{
				func_110(uParam0, 39, 1, -2, 1);
			}
			else
			{
				func_110(uParam0, 30, 1, func_787(uParam0), 1);
				func_110(uParam0, 39, 0, -2, 1);
			}
			if (!func_46(&(uParam0->f_676)))
			{
				func_110(uParam0, 41, 0, -2, 1);
			}
		}
	}
}

void func_546(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if ((uParam1[iParam3 /*263*/])->f_74 == 1)
	{
		return;
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if ((!func_238(iVar0) && __LIB_8__::func_955(Global_40.f_11184[iParam3])) && !func_540())
	{
		func_788(uParam0, uParam1, uParam2, iParam3);
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (func_238(iVar0))
	{
		if (!func_789(uParam0, uParam1, uParam2, iParam3))
		{
			func_790(uParam0, uParam1, uParam2, iParam3);
		}
		else
		{
			func_333(iParam3, 512);
			if ((uParam1[iParam3 /*263*/])->f_189 == 1)
			{
				func_33(uParam1, iParam3);
				if (__LIB_0__::func_75(&((uParam1[iParam3 /*263*/])->f_186)) && __LIB_1__::func_871(&((uParam1[iParam3 /*263*/])->f_186)) > (uParam1[iParam3 /*263*/])->f_197)
				{
					func_415(uParam0, uParam1, uParam2, iParam3, 0);
				}
				else
				{
					func_415(uParam0, uParam1, uParam2, iParam3, 2);
				}
			}
			if (iParam3 == 0)
			{
				func_782(uParam0, 2, 0);
				if (func_758(2))
				{
					func_791(uParam0, 2, 0);
				}
			}
			func_187(uParam0, uParam1, uParam2, iParam3, 1, 0, 0);
			(uParam1[iParam3 /*263*/])->f_182 = 0;
			(uParam1[iParam3 /*263*/])->f_72++;
			func_792(uParam0, uParam1, iParam3, 1);
		}
	}
}

bool func_547(var uParam0, var uParam1, int iParam2)
{
	if (func_79(uParam1, iParam2, 4096))
	{
		return true;
	}
	else if (__LIB_1__::func_672(iParam2, 2))
	{
		return true;
	}
	else if (func_360(iParam2, 128))
	{
		return true;
	}
	else if (iParam2 == 0 && func_793(uParam0, uParam1))
	{
		return true;
	}
	else if (__LIB_1__::func_672(iParam2, 2048))
	{
		return true;
	}
	else if ((uParam1[iParam2 /*263*/])->f_71 == 0 && !__LIB_8__::func_955(Global_40.f_11184[iParam2]))
	{
		return true;
	}
	else if (iParam2 == 0 && func_794())
	{
		return true;
	}
	return false;
}

void func_548(var uParam0, int iParam1, int iParam2)
{
	if (!func_79(uParam0, iParam1, iParam2))
	{
		__LIB_1__::func_581(&((uParam0[iParam1 /*263*/])->f_3), iParam2);
	}
}

bool func_549(var uParam0, var uParam1, int iParam2)
{
	if ((((uParam1[iParam2 /*263*/])->f_74 == 1 && (uParam1[iParam2 /*263*/])->f_78 != -1) && __LIB_0__::func_264(&((uParam1[iParam2 /*263*/])->f_75)) > IntToFloat((uParam1[iParam2 /*263*/])->f_78)) && func_456(uParam0, uParam1, iParam2, 1))
	{
		func_795(uParam0, uParam1, iParam2);
		func_72(uParam0);
		return true;
	}
	return false;
}

bool func_550(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((uParam1[iParam3 /*263*/])->f_74 == 0 && __LIB_8__::func_955(Global_40.f_11184[iParam3]))
	{
		if ((((iParam3 == 0 && __LIB_1__::func_732(uParam0->f_83[2], 1)) || (iParam3 == 0 && func_102(0, 1, 1))) || iParam3 != 0) || __LIB_0__::func_58(uParam2, iParam3))
		{
			if (func_797(uParam0, uParam1, uParam2, iParam3))
			{
				func_798(uParam0, uParam1, uParam2, iParam3, func_142(uParam0, uParam1, uParam2, iParam3));
				if (iParam3 == 0)
				{
					func_72(uParam0);
					func_531(uParam0, uParam0->f_7);
				}
				else
				{
					__LIB_18__::func_162(iParam3, 32);
				}
				return true;
			}
			else if (func_799(uParam1, uParam2, iParam3))
			{
				func_187(uParam0, uParam1, uParam2, iParam3, 1, 0, 0);
				if (iParam3 == 0)
				{
					if ((uParam1[iParam3 /*263*/])->f_189 == 1)
					{
						func_110(uParam0, 43, 1, -2, 1);
					}
					else
					{
						func_110(uParam0, 44, 1, -2, 1);
					}
					if (func_46(&(uParam0->f_676)))
					{
						func_237(&(uParam0->f_105), 39);
					}
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
					{
						func_533(uParam0, uParam1, uParam2, iParam3, 8);
					}
				}
				(uParam1[iParam3 /*263*/])->f_72++;
				func_792(uParam0, uParam1, iParam3, 1);
				func_153(iParam3, 1, 1);
				return true;
			}
		}
	}
	return false;
}

void func_551(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	if (iParam3 == 0)
	{
		return;
	}
	if (!__LIB_0__::func_75(&((uParam1[iParam3 /*263*/])->f_191)))
	{
		func_166(uParam1, iParam3, 2048);
		__LIB_1__::func_148(&((uParam1[iParam3 /*263*/])->f_191));
		(uParam1[iParam3 /*263*/])->f_194 = MISC::GET_RANDOM_INT_IN_RANGE(7, 15);
	}
	if (Global_1900073.f_26[iParam3 /*30*/] == 6)
	{
		if (func_79(uParam1, iParam3, 2048))
		{
			if ((((uParam1[iParam3 /*263*/])->f_71 == 0 && __LIB_0__::func_264(&((uParam1[iParam3 /*263*/])->f_191)) >= IntToFloat((uParam1[iParam3 /*263*/])->f_194)) && !func_800(iParam3)) || Global_1900073.f_12 == 1)
			{
				func_166(uParam1, iParam3, 2048);
				__LIB_1__::func_148(&((uParam1[iParam3 /*263*/])->f_191));
				(uParam1[iParam3 /*263*/])->f_194 = MISC::GET_RANDOM_INT_IN_RANGE(7, 15);
			}
		}
		else if ((Global_1900073.f_12 == 0 && __LIB_0__::func_264(&((uParam1[iParam3 /*263*/])->f_191)) >= IntToFloat((uParam1[iParam3 /*263*/])->f_194)) && !func_801(uParam0, uParam1, uParam2, iParam3))
		{
			func_548(uParam1, iParam3, 2048);
			__LIB_1__::func_148(&((uParam1[iParam3 /*263*/])->f_191));
			(uParam1[iParam3 /*263*/])->f_194 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
			(uParam1[iParam3 /*263*/])->f_195 = MISC::GET_RANDOM_FLOAT_IN_RANGE((0.5f - 0.3f), 0.5f);
		}
	}
	else if (Global_1900073.f_26[iParam3 /*30*/] == 7)
	{
		if (func_802(uParam0, uParam1, uParam2, iParam3))
		{
			func_548(uParam1, iParam3, 2048);
			(uParam1[iParam3 /*263*/])->f_195 = MISC::GET_RANDOM_FLOAT_IN_RANGE((1f - 0.3f), 1f);
		}
		else
		{
			func_166(uParam1, iParam3, 2048);
		}
	}
	if (func_79(uParam1, iParam3, 2048))
	{
		func_153(iParam3, 2048, 0);
		Global_1900073.f_26[iParam3 /*30*/].f_23 = 0f;
		Global_1900073.f_26[iParam3 /*30*/].f_14 = (uParam1[iParam3 /*263*/])->f_195;
	}
	else
	{
		func_333(iParam3, 2048);
		Global_1900073.f_26[iParam3 /*30*/].f_23 = 1f;
		Global_1900073.f_26[iParam3 /*30*/].f_14 = 0f;
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (func_238(iVar0) && Global_1900073.f_26[iParam3 /*30*/] == 7)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(func_53(uParam1, iParam3), func_262(uParam2, iVar0)) };
		fVar4 = (MISC::ABSF(vVar1.x) / 10f);
		fVar5 = __LIB_0__::func_251(fVar4, 0f, 0.5f);
		if (vVar1.x > 0f)
		{
			Global_1900073.f_26[iParam3 /*30*/].f_22 = (0.5f + fVar5);
		}
		else if (vVar1.x < 0f)
		{
			Global_1900073.f_26[iParam3 /*30*/].f_22 = (0.5f - fVar5);
		}
		else
		{
			Global_1900073.f_26[iParam3 /*30*/].f_22 = 0.5f;
		}
	}
	else
	{
		Global_1900073.f_26[iParam3 /*30*/].f_22 = -1f;
	}
}

void func_552(var uParam0)
{
	if (!func_79(uParam0, 0, 256))
	{
		if (func_102(0, 1, 1))
		{
			func_548(uParam0, 0, 256);
			if (__LIB_0__::func_75(&((uParam0[0 /*263*/])->f_202)) && __LIB_0__::func_264(&((uParam0[0 /*263*/])->f_202)) < 10f)
			{
				func_548(uParam0, 0, 512);
			}
			else
			{
				func_166(uParam0, 0, 512);
			}
			__LIB_1__::func_148(&((uParam0[0 /*263*/])->f_202));
		}
		else if ((func_79(uParam0, 0, 512) && __LIB_0__::func_75(&((uParam0[0 /*263*/])->f_202))) && __LIB_0__::func_264(&((uParam0[0 /*263*/])->f_202)) > 10f)
		{
			func_166(uParam0, 0, 512);
		}
	}
	else if (!func_102(0, 1, 0))
	{
		func_166(uParam0, 0, 256);
	}
}

void func_553(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((iParam3 == 0 && __LIB_0__::func_264(&(uParam0->f_667)) > IntToFloat(uParam0->f_670)) && func_251(iParam3))
	{
		func_533(uParam0, uParam1, uParam2, 0, 262144);
	}
}

void func_554(var uParam0, int iParam1, int iParam2)
{
	__LIB_1__::func_148(&(uParam0->f_154[iParam1 /*3*/]));
	uParam0->f_383[iParam1] = iParam2;
}

void func_555(var uParam0, int iParam1)
{
	if (func_263(Global_1900073.f_154[iParam1]))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam0[iParam1 /*263*/])->f_13))
		{
			STREAMING::REQUEST_MODEL((uParam0[iParam1 /*263*/])->f_18, false);
			if (STREAMING::HAS_MODEL_LOADED((uParam0[iParam1 /*263*/])->f_18) && ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_185(iParam1)))
			{
				(uParam0[iParam1 /*263*/])->f_13 = OBJECT::CREATE_OBJECT((uParam0[iParam1 /*263*/])->f_18, func_261(iParam1), false, false, false, false, true);
				ENTITY::SET_ENTITY_COLLISION((uParam0[iParam1 /*263*/])->f_13, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE((uParam0[iParam1 /*263*/])->f_13, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0[iParam1 /*263*/])->f_18);
				func_444((uParam0[iParam1 /*263*/])->f_13);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST((uParam0[iParam1 /*263*/])->f_13))
		{
			TASK::_0xCE71C2F9BAA3F975(func_53(uParam0, iParam1), (uParam0[iParam1 /*263*/])->f_13);
		}
	}
}

bool func_556(var uParam0, int iParam1, int iParam2)
{
	if (func_263(Global_1900073.f_154[iParam1]))
	{
		if (func_102(iParam1, 2, 1))
		{
			if (iParam2 == 1)
			{
			}
			return true;
		}
		else if (Global_1900073.f_26[iParam1 /*30*/].f_2 <= 1f)
		{
			if (iParam2 == 1)
			{
			}
			return true;
		}
		else if (func_69(iParam1, 1, 1) && __LIB_2__::func_157(uParam0->f_65, func_258(iParam1)))
		{
			if (iParam2 == 1)
			{
			}
			return true;
		}
	}
	return false;
}

bool func_557(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (Global_1900073.f_154[iParam3] == 1)
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (func_238(iVar0))
		{
			func_803(uParam0, uParam1, uParam2, iParam3, iVar0);
			func_804(uParam0, uParam1, uParam2, iParam3, iVar0);
			func_805(uParam1, uParam2, iParam3);
		}
		else
		{
			(uParam1[iParam3 /*263*/])->f_207 = 0;
			(uParam1[iParam3 /*263*/])->f_206 = 0;
			(uParam1[iParam3 /*263*/])->f_205 = 0;
		}
		if (func_806(uParam0, uParam1, uParam2, iParam3, iVar0))
		{
			return true;
		}
	}
	else
	{
		(uParam1[iParam3 /*263*/])->f_207 = 0;
		(uParam1[iParam3 /*263*/])->f_206 = 0;
		(uParam1[iParam3 /*263*/])->f_205 = 0;
		if (iParam3 == 0)
		{
			if (__LIB_1__::func_672(iParam3, 2))
			{
				return true;
			}
			else if (func_793(uParam0, uParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_558(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (func_79(uParam1, iParam3, 1048576))
	{
		return;
	}
	func_548(uParam1, iParam3, 1048576);
	if (iParam3 == 0)
	{
		func_72(uParam0);
		WATER::_0xA33F5069B0CB89B8();
		func_807();
		func_808(uParam0, uParam1, uParam2, iParam3);
	}
	func_451(iParam3);
	if (Global_1900073.f_154[iParam3] == 1)
	{
		(uParam1[iParam3 /*263*/])->f_73++;
		func_792(uParam0, uParam1, iParam3, 2);
		iVar0 = func_809(uParam0, uParam1, uParam2, iParam3);
		func_187(uParam0, uParam1, uParam2, iParam3, 0, iVar0, 1);
	}
}

void func_559(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		if (!func_536(uParam0, 16))
		{
			func_533(uParam0, uParam1, uParam2, iParam3, 16);
		}
		else if (Global_1900073.f_154[iParam3] != 1)
		{
			func_533(uParam0, uParam1, uParam2, iParam3, 32);
		}
	}
}

void func_560(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	if (Global_1900073.f_154[0] == 1)
	{
		bVar0 = func_46(&(uParam0->f_676));
		iVar1 = func_142(uParam0, uParam1, uParam2, 0);
		if (func_238(iVar1))
		{
			if (func_146(uParam2, iVar1))
			{
				func_520(&(uParam0->f_105), 48, bVar0);
				func_520(&(uParam0->f_105), 49, bVar0);
				if (__LIB_0__::func_75(&((uParam1[0 /*263*/])->f_215)) && __LIB_1__::func_871(&((uParam1[0 /*263*/])->f_215)) < 4000)
				{
					if ((uParam1[0 /*263*/])->f_210 <= 1)
					{
						func_110(uParam0, 45, 1, 10000, 1);
					}
					else
					{
						func_110(uParam0, 47, 0, 10000, 1);
					}
				}
			}
			else
			{
				func_520(&(uParam0->f_105), 45, bVar0);
				func_520(&(uParam0->f_105), 47, bVar0);
				if ((uParam1[0 /*263*/])->f_211 > 0)
				{
					if (TASK::_0x5952DFA38FA529FE())
					{
						func_110(uParam0, 49, 1, 10000, 1);
					}
					else
					{
						func_110(uParam0, 48, 1, 10000, 1);
					}
					if (PAD::_IS_USING_KEYBOARD(0) && !TASK::_0x5952DFA38FA529FE())
					{
						func_110(uParam0, 75, 0, 10000, 1);
					}
				}
			}
		}
		else
		{
			func_520(&(uParam0->f_105), 45, bVar0);
			func_520(&(uParam0->f_105), 47, bVar0);
			func_520(&(uParam0->f_105), 48, bVar0);
			func_520(&(uParam0->f_105), 49, bVar0);
			func_520(&(uParam0->f_105), 75, bVar0);
		}
	}
	else if (TASK::_0x5952DFA38FA529FE())
	{
		func_110(uParam0, 53, 1, 10000, 1);
	}
	else
	{
		func_110(uParam0, 52, 1, 10000, 1);
	}
}

void func_561(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (func_79(uParam1, iParam3, 131072))
	{
		return;
	}
	func_548(uParam1, iParam3, 131072);
	func_567(uParam0, uParam1, uParam2, iParam3);
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (func_238(iVar0))
	{
		func_29(uParam0, uParam1, uParam2, iVar0, 0, 0);
	}
	if (uParam0->f_682 == 0)
	{
		func_110(uParam0, 58, 1, -2, 1);
	}
	else
	{
		uParam0->f_708 = 0;
		func_105(uParam0, 1);
	}
}

void func_562(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (func_79(uParam1, iParam3, 8))
	{
		return;
	}
	func_548(uParam1, iParam3, 8);
	if (Global_1900073.f_154[iParam3] == 1)
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (!func_238(iVar0))
		{
		}
		else
		{
			func_272(uParam2, iVar0, 10);
			if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iVar0]))
			{
				func_566(uParam0, uParam1, uParam2, iParam3, 1);
			}
			if (iParam3 == 0)
			{
				uParam0->f_79 = 1;
				bVar1 = __LIB_8__::func_952(iVar0);
				iVar2 = func_810(uParam1);
				iVar3 = func_811(uParam2->f_327[iVar0], bVar1, iVar2);
				if ((func_812(iVar3) && bVar1 == 0) && uParam2->f_491[iVar0] != 4)
				{
					uParam0->f_79 = 0;
				}
			}
		}
	}
	if (iParam3 == 0)
	{
		func_72(uParam0);
		WATER::_0xA33F5069B0CB89B8();
		func_520(&(uParam0->f_105), 45, 0);
		func_520(&(uParam0->f_105), 47, 0);
		func_520(&(uParam0->f_105), 48, 0);
		func_520(&(uParam0->f_105), 49, 0);
		func_520(&(uParam0->f_105), 75, 0);
		func_520(&(uParam0->f_105), 52, 0);
		func_520(&(uParam0->f_105), 53, 0);
		func_531(uParam0, uParam0->f_9);
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
		{
			uParam0->f_671 = 1;
		}
		else
		{
			uParam0->f_671 = 0;
		}
		__LIB_1__::func_148(&(uParam0->f_672));
	}
	else
	{
		Global_1900073.f_26[iParam3 /*30*/].f_22 = -1f;
		Global_1900073.f_26[iParam3 /*30*/].f_23 = 0f;
	}
	func_32(uParam1, iParam3);
	func_813(uParam1, iParam3);
	func_333(iParam3, 64);
	func_333(iParam3, 32);
	if (Global_1900073.f_154[iParam3] == 1 && __LIB_0__::func_75(&((uParam1[iParam3 /*263*/])->f_252)))
	{
		if (!__LIB_0__::func_33(&((uParam1[iParam3 /*263*/])->f_252)))
		{
			__LIB_2__::func_113(&((uParam1[iParam3 /*263*/])->f_252));
		}
	}
}

void func_563(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (func_79(uParam1, iParam3, 65536) || Global_1900073.f_154[iParam3] != 1)
	{
		return;
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	Global_1900073.f_220[iParam3]++;
	Global_1900073.f_215[iParam3]++;
	if (iParam3 == 0)
	{
		if (func_744(Global_40.f_11184[iParam3]))
		{
			iVar1 = joaat("FOOD");
		}
		else if (func_745(Global_40.f_11184[iParam3]))
		{
			iVar1 = joaat("LIVE_BAIT");
		}
		else if (func_397(Global_40.f_11184[iParam3]))
		{
			iVar1 = joaat("LURE");
		}
		else if (func_398(Global_40.f_11184[iParam3]))
		{
			iVar1 = joaat("LEGENDARY_LURE");
		}
		if (func_814(Global_1900073.f_159[iParam3]))
		{
			iVar2 = joaat("POTENT_PREDATOR_BAIT");
		}
		else
		{
			iVar2 = joaat("POTENT_HERBIVORE_BAIT");
		}
		if (func_238(iVar0))
		{
			uVar3 = uParam2->f_163[iVar0];
			STATS::_0xDA26263C87CCE9C1(uVar3, Global_1900073.f_169[iParam3], iVar1, iVar2);
			COMPENDIUM::COMPENDIUM_FISH_CAUGHT(uVar3, Global_40.f_11184[iParam3]);
			if (__LIB_8__::func_951(uParam2->f_327[iVar0]))
			{
				if (func_89(uParam2->f_327[iVar0]))
				{
					uParam2->f_776++;
				}
				else
				{
					uParam2->f_776 = 0;
				}
			}
		}
	}
	func_548(uParam1, iParam3, 65536);
}

void func_564(var uParam0, var uParam1, int iParam2)
{
	if (func_79(uParam1, iParam2, 524288))
	{
		return;
	}
	if (iParam2 == 0 && Global_1900073.f_154[iParam2] == 1)
	{
		func_792(uParam0, uParam1, iParam2, 3);
	}
	func_548(uParam1, iParam2, 524288);
}

void func_565(var uParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	if (uParam0->f_2 == 1)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		if (!__LIB_8__::func_951(Global_1900073.f_159[0]))
		{
			func_28(uParam0);
			return;
		}
		if (Global_1900073.f_164[0] == 2)
		{
			iVar2 = __LIB_10__::func_762(Global_1900073.f_159[0]);
			if (!__LIB_8__::func_951(iVar2))
			{
				func_28(uParam0);
				return;
			}
			sVar0 = MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", Global_1900073.f_169[0], func_815(iVar2));
			sVar1 = func_816(iVar2);
		}
		else
		{
			if (iParam1 == 1)
			{
				sVar0 = MISC::_CREATE_VAR_STRING(38, "MGFSH_CAUGHT_POI", Global_1900073.f_169[0], func_303(Global_1900073.f_159[0]));
			}
			else
			{
				sVar0 = MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", Global_1900073.f_169[0], func_303(Global_1900073.f_159[0]));
			}
			sVar1 = func_817(Global_1900073.f_159[0]);
		}
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "InfoBox");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3, "isVisible", 1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "itemLabel", sVar0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "itemDescription", sVar1);
		*uParam0 = 1;
	}
	if ((*uParam0 == 1 && uParam0->f_1 == 0) && UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("SHOP_BROWSING"), -1645363952) == 0)
	{
		uParam0->f_1 = 1;
		uParam0->f_2 = 1;
	}
}

void func_566(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	if (iParam4 == 0)
	{
		if (func_79(uParam1, iParam3, 262144))
		{
			iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
			if (func_238(iVar0) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iVar0]))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam2->f_163[iVar0], false);
				func_166(uParam1, iParam3, 262144);
			}
		}
	}
	else if (!func_79(uParam1, iParam3, 262144))
	{
		iVar1 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (func_238(iVar1) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iVar1]))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam2->f_163[iVar1], true);
			func_548(uParam1, iParam3, 262144);
		}
	}
}

void func_567(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (func_79(uParam1, iParam3, 64) || func_79(uParam1, iParam3, 32))
	{
		return;
	}
	func_548(uParam1, iParam3, 32);
	if (iParam3 == 0)
	{
		if (uParam0->f_682 == 0)
		{
			func_533(uParam0, uParam1, uParam2, iParam3, 4096);
		}
		func_818(uParam0, uParam1, uParam2);
		func_819(uParam0, uParam1, uParam2);
		func_28(&(uParam0->f_31));
		iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (func_238(iVar0) && uParam2->f_491[iVar0] == 4)
		{
			if (__LIB_8__::func_952(iVar0) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iVar0]))
			{
				PED::SET_PED_CONFIG_FLAG(uParam2->f_163[iVar0], 186, true);
				PED::SET_PED_CONFIG_FLAG(uParam2->f_163[iVar0], 517, true);
			}
			if (uParam0->f_682 == 0)
			{
				__LIB_6__::func_766();
			}
		}
	}
	Global_1900073.f_225[iParam3]++;
	Global_1900073.f_230[iParam3]++;
	func_820(uParam0, uParam1, uParam2, iParam3);
	func_186(uParam1, iParam3);
	func_548(uParam1, iParam3, 128);
	func_153(iParam3, 32, 1);
}

void func_568(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (func_79(uParam1, iParam3, 64) || func_79(uParam1, iParam3, 32))
	{
		return;
	}
	func_548(uParam1, iParam3, 64);
	__LIB_18__::func_162(iParam3, 65536);
	if (Global_1900073.f_154[iParam3] == 1)
	{
		if (__LIB_1__::func_672(iParam3, 131072))
		{
			func_533(uParam0, uParam1, uParam2, iParam3, 131072);
			iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
			if (func_238(iVar0))
			{
				uParam2->f_573[iVar0] = 1;
			}
		}
		else
		{
			func_533(uParam0, uParam1, uParam2, iParam3, 8192);
		}
		func_566(uParam0, uParam1, uParam2, iParam3, 1);
		if (iParam3 == 0)
		{
			func_819(uParam0, uParam1, uParam2);
			func_821(uParam0, uParam1, uParam2);
			func_28(&(uParam0->f_31));
		}
		Global_1900073.f_235[iParam3]++;
		Global_1900073.f_240[iParam3]++;
		func_820(uParam0, uParam1, uParam2, iParam3);
	}
	func_186(uParam1, iParam3);
	func_548(uParam1, iParam3, 128);
	func_153(iParam3, 64, 1);
}

void func_569(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (func_79(uParam1, iParam3, 64) || func_79(uParam1, iParam3, 32))
	{
		return;
	}
	if (iParam3 == 0)
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (uParam0->f_676 == 1)
		{
			if ((func_238(iVar0) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iVar0])) && __LIB_8__::func_952(iVar0))
			{
				func_567(uParam0, uParam1, uParam2, iParam3);
				return;
			}
		}
		if (!func_540())
		{
			func_523(uParam0, 5, 0, 1);
			if (Global_1900073.f_154[iParam3] == 1)
			{
				if (func_238(iVar0))
				{
					if (func_822(uParam0, uParam2, iVar0))
					{
						func_523(uParam0, 6, 0, uParam0->f_79);
						if (uParam0->f_79 == 0)
						{
							func_110(uParam0, 61, 1, -2, 1);
						}
					}
				}
			}
			else
			{
				func_823(2);
				func_533(uParam0, uParam1, uParam2, iParam3, 16384);
			}
			if (__LIB_0__::func_139(uParam0->f_83[5]) && __LIB_1__::func_732(uParam0->f_83[5], 1))
			{
				func_568(uParam0, uParam1, uParam2, iParam3);
				func_252(uParam0, 5);
				func_252(uParam0, 6);
			}
			else if ((__LIB_0__::func_139(uParam0->f_83[6]) && __LIB_0__::func_572(uParam0->f_83[6], 0)) && __LIB_1__::func_732(uParam0->f_83[6], 1))
			{
				func_567(uParam0, uParam1, uParam2, iParam3);
				func_252(uParam0, 5);
				func_252(uParam0, 6);
			}
		}
	}
	else if (func_825(uParam0, uParam1, uParam2, iParam3))
	{
		func_567(uParam0, uParam1, uParam2, iParam3);
	}
	else
	{
		func_568(uParam0, uParam1, uParam2, iParam3);
	}
}

void func_570(var uParam0, int iParam1)
{
	if ((GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST((uParam0[iParam1 /*263*/])->f_25) && __LIB_0__::func_75(&((uParam0[iParam1 /*263*/])->f_27))) && __LIB_1__::func_871(&((uParam0[iParam1 /*263*/])->f_27)) > 100)
	{
		__LIB_1__::func_148(&((uParam0[iParam1 /*263*/])->f_27));
		(uParam0[iParam1 /*263*/])->f_26 = ((uParam0[iParam1 /*263*/])->f_26 + 0.01f);
		if ((uParam0[iParam1 /*263*/])->f_26 > 1f)
		{
			func_186(uParam0, iParam1);
		}
		else
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION((uParam0[iParam1 /*263*/])->f_25, "fade", (uParam0[iParam1 /*263*/])->f_26, false);
		}
	}
}

void func_571(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if ((iParam3 == 0 && Global_1900073.f_154[iParam3] == 1) && __LIB_0__::func_264(&(uParam0->f_672)) > 2f)
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (func_238(iVar0))
		{
			if (__LIB_8__::func_952(iVar0))
			{
				if (uParam2->f_532[iVar0] == 1)
				{
					func_533(uParam0, uParam1, uParam2, iParam3, 2048);
				}
				else
				{
					func_533(uParam0, uParam1, uParam2, iParam3, 512);
				}
			}
			else if (uParam2->f_532[iVar0] == 1)
			{
				func_533(uParam0, uParam1, uParam2, iParam3, 1024);
			}
			else if (func_89(uParam2->f_327[iVar0]))
			{
				func_533(uParam0, uParam1, uParam2, iParam3, 128);
			}
			else
			{
				func_533(uParam0, uParam1, uParam2, iParam3, 256);
			}
			if (!func_79(uParam1, iParam3, 64) && !func_79(uParam1, iParam3, 32))
			{
				if (uParam0->f_671 == 1 && __LIB_0__::func_264(&(uParam0->f_672)) > 8f)
				{
					func_533(uParam0, uParam1, uParam2, iParam3, 524288);
				}
			}
		}
	}
}

void func_572(var uParam0, int iParam1)
{
	if (func_79(uParam0, iParam1, 16))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(func_53(uParam0, iParam1), -1947554776))
	{
		func_548(uParam0, iParam1, 16);
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_184(iParam1)))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(__LIB_14__::func_184(iParam1)))
			{
				ENTITY::DETACH_ENTITY(__LIB_14__::func_184(iParam1), true, true);
				PHYSICS::ACTIVATE_PHYSICS(__LIB_14__::func_184(iParam1));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_185(iParam1)))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(__LIB_14__::func_185(iParam1)))
			{
				ENTITY::DETACH_ENTITY(__LIB_14__::func_185(iParam1), true, true);
				PHYSICS::ACTIVATE_PHYSICS(__LIB_14__::func_185(iParam1));
			}
		}
	}
}

void func_573(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (func_79(uParam1, iParam3, 131072))
	{
		return;
	}
	if (func_102(iParam3, 64, 1))
	{
		func_548(uParam1, iParam3, 131072);
		if (Global_1900073.f_154[iParam3] == 1)
		{
			iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
			if (func_238(iVar0))
			{
				func_29(uParam0, uParam1, uParam2, iVar0, 1, 1);
			}
		}
		else
		{
			__LIB_1__::func_951(&((uParam1[iParam3 /*263*/])->f_13));
		}
	}
	else if (func_102(iParam3, 256, 1))
	{
		func_561(uParam0, uParam1, uParam2, iParam3);
	}
	else if (func_102(iParam3, 128, 1))
	{
		func_548(uParam1, iParam3, 131072);
	}
}

void func_574(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (!__LIB_1__::func_672(iParam3, 131072) && func_102(iParam3, 1024, 1))
	{
		__LIB_18__::func_162(iParam3, 131072);
	}
	if (__LIB_1__::func_672(iParam3, 131072))
	{
		func_533(uParam0, uParam1, uParam2, iParam3, 65536);
		if (!func_50(uParam0, 524288) && iParam3 == 0)
		{
			iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
			if (func_238(iVar0) && __LIB_8__::func_952(iVar0))
			{
				func_51(uParam0, 524288);
			}
		}
	}
}

void func_575(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (func_79(uParam1, iParam3, 4))
	{
		return;
	}
	if (func_102(iParam3, 512, 1))
	{
		func_548(uParam1, iParam3, 4);
		if (Global_1900073.f_154[iParam3] == 1)
		{
			iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
			if (func_238(iVar0) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(uParam2->f_163[iVar0], true, false);
				func_566(uParam0, uParam1, uParam2, iParam3, 0);
			}
			func_187(uParam0, uParam1, uParam2, iParam3, 0, 0, 0);
		}
		else
		{
			func_535(uParam1, iParam3);
		}
	}
}

void func_576(var uParam0)
{
	if (Global_40.f_11184[0] == joaat("UPGRADE_FSH_BAIT_CHEESE"))
	{
		func_110(uParam0, 62, 1, -2, 1);
	}
	else if (Global_40.f_11184[0] == joaat("UPGRADE_FSH_BAIT_BREAD"))
	{
		func_110(uParam0, 63, 1, -2, 1);
	}
	else if (Global_40.f_11184[0] == joaat("UPGRADE_FSH_BAIT_CORN"))
	{
		func_110(uParam0, 64, 1, -2, 1);
	}
	else if (Global_40.f_11184[0] == joaat("UPGRADE_FSH_BAIT_WORM"))
	{
		func_110(uParam0, 65, 1, -2, 1);
	}
	else if (Global_40.f_11184[0] == joaat("UPGRADE_FSH_BAIT_CRICKET"))
	{
		func_110(uParam0, 66, 1, -2, 1);
	}
	else if (Global_40.f_11184[0] == joaat("UPGRADE_FSH_BAIT_CRAYFISH"))
	{
		func_110(uParam0, 67, 1, -2, 1);
	}
	else if (Global_40.f_11184[0] == joaat("UPGRADE_FSH_BAIT_LURE_LAKE"))
	{
		func_110(uParam0, 68, 1, -2, 1);
	}
	else if (Global_40.f_11184[0] == joaat("UPGRADE_FSH_BAIT_LURE_RIVER"))
	{
		func_110(uParam0, 69, 1, -2, 1);
	}
	else if (Global_40.f_11184[0] == joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"))
	{
		func_110(uParam0, 70, 1, -2, 1);
	}
	else if (Global_40.f_11184[0] == joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"))
	{
		func_110(uParam0, 71, 1, -2, 1);
	}
	else if (Global_40.f_11184[0] == joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"))
	{
		func_110(uParam0, 72, 1, -2, 1);
	}
	else if (Global_40.f_11184[0] == joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"))
	{
		func_110(uParam0, 73, 1, -2, 1);
	}
	else if (Global_40.f_11184[0] == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		func_110(uParam0, 74, 1, -2, 1);
	}
}

bool func_577()
{
	if ((func_1() || Global_1900073.f_22 == 0) || func_297())
	{
		return false;
	}
	return true;
}

void func_578(var uParam0, int iParam1)
{
	if (!func_50(uParam0, 2048))
	{
		func_51(uParam0, 2048);
		__LIB_3__::func_834(3);
	}
	if (uParam0->f_22 != iParam1)
	{
		if (uParam0->f_22 > iParam1)
		{
			__LIB_13__::func_671();
		}
		uParam0->f_22 = iParam1;
		__LIB_3__::func_787(uParam0->f_22);
	}
}

bool func_579()
{
	if ((func_1() || Global_1900073.f_23 == 0) || func_297())
	{
		return false;
	}
	return true;
}

void func_580(var uParam0, int iParam1)
{
	if (!func_50(uParam0, 4096))
	{
		func_51(uParam0, 4096);
		__LIB_3__::func_834(2);
	}
	if (uParam0->f_23 != iParam1)
	{
		if (uParam0->f_23 > iParam1)
		{
		}
		uParam0->f_23 = iParam1;
		__LIB_3__::func_787(uParam0->f_23);
	}
}

bool func_581()
{
	if ((func_1() || Global_1900073.f_24 == 0) || func_297())
	{
		return false;
	}
	return true;
}

void func_582(var uParam0, int iParam1)
{
	if (!func_50(uParam0, 8192))
	{
		func_51(uParam0, 8192);
		__LIB_3__::func_834(2);
	}
	if (uParam0->f_24 != iParam1)
	{
		if (uParam0->f_24 > iParam1)
		{
		}
		uParam0->f_24 = iParam1;
		__LIB_3__::func_787(uParam0->f_24);
	}
}

int func_583(int iParam0)
{
	switch (iParam0)
	{
		case joaat("P_BODYPARTARMFLOAT02X"):
			return 2;
		default:
			break;
	}
	return 0;
}

float func_584(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 10f;
		default:
			break;
	}
	return 0f;
}

void func_585(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	iVar0 = func_702(iParam1);
	if (func_703(iVar0) && !FLOCK::_0x19870C40C7EE15BE(iVar0, uParam0->f_31[iParam1]))
	{
		uParam0->f_31[iParam1] = FLOCK::_0xE93415B3307208E5(iVar0, uParam0->f_12, 0f, fParam2, 10000f, 0f, 0f, 0f, 1);
	}
}

void func_586(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_702(iParam1);
	if (func_703(iVar0) && FLOCK::_0x19870C40C7EE15BE(iVar0, uParam0->f_31[iParam1]))
	{
		FLOCK::_0xC3D581A34BC0A1F0(iVar0, uParam0->f_31[iParam1]);
	}
}

bool func_686(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;
	Var4.f_1 = 10;
	__LIB_0__::func_452(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_945(iParam0, &Var4, &uVar0, iParam1);
}

bool func_693(int iParam0)
{
	if (((((((((iParam0 == joaat("BOATSTEAM02X") || iParam0 == joaat("CANOE")) || iParam0 == joaat("CANOETREETRUNK")) || iParam0 == joaat("KEELBOAT")) || iParam0 == joaat("PIROGUE")) || iParam0 == joaat("PIROGUE2")) || iParam0 == joaat("ROWBOAT")) || iParam0 == joaat("ROWBOATSWAMP")) || iParam0 == joaat("ROWBOATSWAMP02")) || iParam0 == joaat("SKIFF"))
	{
		return true;
	}
	return false;
}

void func_694(var uParam0)
{
	if (func_50(uParam0, 512))
	{
		func_204(uParam0, 512);
		__LIB_3__::func_760();
		uParam0->f_20 = -1;
	}
}

void func_695(var uParam0)
{
	if (func_50(uParam0, 1024))
	{
		func_204(uParam0, 1024);
		__LIB_3__::func_760();
		uParam0->f_21 = -1;
	}
}

void func_696(var uParam0)
{
	if (func_50(uParam0, 2048))
	{
		func_204(uParam0, 2048);
		__LIB_3__::func_760();
		uParam0->f_22 = -1;
	}
}

void func_697(var uParam0)
{
	if (func_50(uParam0, 4096))
	{
		func_204(uParam0, 4096);
		__LIB_3__::func_760();
		uParam0->f_23 = -1;
	}
}

void func_698(var uParam0)
{
	if (func_50(uParam0, 8192))
	{
		func_204(uParam0, 8192);
		__LIB_3__::func_760();
		uParam0->f_24 = -1;
	}
}

int func_702(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("SPECIES_FISH_BLUEGILL");
		case 1:
			return joaat("SPECIES_FISH_BULLHEADCATFISH");
		case 2:
			return joaat("SPECIES_FISH_CHAINPICKEREL");
		case 3:
			return joaat("SPECIES_FISH_CHANNELCATFISH");
		case 4:
			return joaat("SPECIES_FISH_LAKESTURGEON");
		case 5:
			return joaat("SPECIES_FISH_LARGEMOUTHBASS");
		case 6:
			return joaat("SPECIES_FISH_LONGNOSEGAR");
		case 7:
			return joaat("SPECIES_FISH_MUSKIE");
		case 8:
			return joaat("SPECIES_FISH_NORTHERNPIKE");
		case 9:
			return joaat("SPECIES_FISH_PERCH");
		case 10:
			return joaat("SPECIES_FISH_REDFINPICKEREL");
		case 11:
			return joaat("SPECIES_FISH_ROCKBASS");
		case 12:
			return joaat("SPECIES_FISH_SMALLMOUTHBASS");
		case 13:
			return joaat("SPECIES_FISH_SALMONSOCKEYE");
		case 14:
			return joaat("SPECIES_FISH_STEELHEADTROUT");
		default:
			break;
	}
	return 0;
}

bool func_703(int iParam0)
{
	if ((((((((((((((iParam0 == joaat("SPECIES_FISH_BLUEGILL") || iParam0 == joaat("SPECIES_FISH_BULLHEADCATFISH")) || iParam0 == joaat("SPECIES_FISH_CHAINPICKEREL")) || iParam0 == joaat("SPECIES_FISH_CHANNELCATFISH")) || iParam0 == joaat("SPECIES_FISH_LAKESTURGEON")) || iParam0 == joaat("SPECIES_FISH_LARGEMOUTHBASS")) || iParam0 == joaat("SPECIES_FISH_LONGNOSEGAR")) || iParam0 == joaat("SPECIES_FISH_MUSKIE")) || iParam0 == joaat("SPECIES_FISH_NORTHERNPIKE")) || iParam0 == joaat("SPECIES_FISH_PERCH")) || iParam0 == joaat("SPECIES_FISH_REDFINPICKEREL")) || iParam0 == joaat("SPECIES_FISH_ROCKBASS")) || iParam0 == joaat("SPECIES_FISH_SALMONSOCKEYE")) || iParam0 == joaat("SPECIES_FISH_SMALLMOUTHBASS")) || iParam0 == joaat("SPECIES_FISH_STEELHEADTROUT"))
	{
		return true;
	}
	return false;
}

void func_704(var uParam0, int iParam1, float fParam2)
{
	char* sVar0;
	sVar0 = func_379(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DECORATOR::DECOR_SET_FLOAT(func_53(uParam0, 0), sVar0, fParam2);
	}
}

int func_708(var uParam0)
{
	int iVar0;
	iVar0 = 10000;
	if ((uParam0[0 /*263*/])->f_71 == 1)
	{
		iVar0 = 20000;
	}
	else
	{
		iVar0 = 30000;
	}
	iVar0 = (iVar0 - (uParam0[0 /*263*/])->f_181 * 1000);
	if (iVar0 < 10000)
	{
		iVar0 = 10000;
	}
	return iVar0;
}

bool func_709(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 14)
	{
		return false;
	}
	if (iParam1 == 3)
	{
		return false;
	}
	else if (__LIB_10__::func_760(iParam1) && __LIB_0__::func_314(__LIB_10__::func_774(__LIB_10__::func_761(iParam1))))
	{
		return false;
	}
	else if (Global_40.f_11184.f_5[iParam1] == 1)
	{
		return false;
	}
	else if (Global_1900073.f_196[iParam1] == 1)
	{
		return true;
	}
	else if (iParam1 == 8)
	{
		if (uParam0->f_676 == 0)
		{
			return false;
		}
	}
	else if (!func_46(&(uParam0->f_676)) && func_50(uParam0, 524288))
	{
		return false;
	}
	return true;
}

bool func_710(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_292(iParam1) };
	if (__LIB_0__::func_86(vVar0))
	{
		return false;
	}
	return __LIB_0__::func_94(func_53(uParam0, 0), vVar0, 0) < 50f;
}

int func_711()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = POPULATION::_0x595478B3BBC3076D();
	iVar2 = func_434(iVar1);
	if (iVar2 != 15)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

float func_712(int iParam0)
{
	return FLOCK::_0x53187E563F938E76(iParam0);
}

float func_714(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	if (iParam1 == 2)
	{
		iVar0 = __LIB_10__::func_762(iParam0);
		if (__LIB_8__::func_951(iVar0))
		{
			return func_429(iVar0);
		}
	}
	fVar1 = func_964(iParam0);
	if (iParam2 == 1)
	{
		fVar2 = (fVar1 * 0.25f);
		if (func_965())
		{
			fVar1 = (fVar1 + fVar2);
		}
	}
	return fVar1;
}

float func_715(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	if (iParam1 == 2)
	{
		iVar0 = __LIB_10__::func_762(iParam0);
		if (__LIB_8__::func_951(iVar0))
		{
			return func_429(iVar0);
		}
	}
	fVar1 = func_966(iParam0);
	if (iParam2 == 1)
	{
		fVar2 = (fVar1 * 0.25f);
		if (!func_965())
		{
			fVar1 = (fVar1 - fVar2);
		}
	}
	return fVar1;
}

float func_716(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar0 = func_714(iParam0, iParam1, 0);
	fVar1 = func_715(iParam0, iParam1, 0);
	fVar2 = (fVar1 - fVar0);
	fVar3 = (fVar2 * (BUILTIN::TO_FLOAT(iParam2) / 100f));
	fVar4 = (fVar0 + fVar3);
	return fVar4;
}

float func_717(float fParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = BUILTIN::FLOOR(fParam0);
	fVar1 = (fParam0 - IntToFloat(iVar0));
	if (fVar1 < 0.0625f)
	{
		fVar2 = (IntToFloat(iVar0) + 0f);
	}
	else if (fVar1 < 0.125f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.0625f);
	}
	else if (fVar1 < 0.1875f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.125f);
	}
	else if (fVar1 < 0.25f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.1875f);
	}
	else if (fVar1 < 0.3125f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.25f);
	}
	else if (fVar1 < 0.375f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.3125f);
	}
	else if (fVar1 < 0.4375f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.375f);
	}
	else if (fVar1 < 0.5f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.4375f);
	}
	else if (fVar1 < 0.5625f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.5f);
	}
	else if (fVar1 < 0.625f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.5625f);
	}
	else if (fVar1 < 0.6875f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.625f);
	}
	else if (fVar1 < 0.75f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.6875f);
	}
	else if (fVar1 < 0.8125f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.75f);
	}
	else if (fVar1 < 0.875f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.8125f);
	}
	else if (fVar1 < 0.9375f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.875f);
	}
	else
	{
		fVar2 = (IntToFloat(iVar0) + 0.9375f);
	}
	return fVar2;
}

float func_718(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (__LIB_8__::func_952(iParam1))
	{
		return 1f;
	}
	if (iParam2 == 1)
	{
		fVar0 = func_714(uParam0->f_327[iParam1], uParam0->f_368[iParam1], 0);
		fVar1 = func_715(uParam0->f_327[iParam1], uParam0->f_368[iParam1], 0);
	}
	else
	{
		fVar0 = func_714(uParam0->f_327[iParam1], 0, 0);
		fVar1 = func_715(uParam0->f_327[iParam1], 2, 0);
	}
	fVar2 = (fVar1 - fVar0);
	fVar3 = (uParam0->f_409[iParam1] - fVar0);
	fVar4 = __LIB_0__::func_251((fVar3 / fVar2), 0f, 1f);
	return fVar4;
}

bool func_721(var uParam0, var uParam1)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(uParam1->f_163[0]) || !func_398(Global_40.f_11184[0]))
	{
		return false;
	}
	if (uParam0->f_676 == 0 && uParam0->f_676.f_5 == 0)
	{
		if (!__LIB_1__::func_187(41))
		{
			return false;
		}
	}
	if (__LIB_8__::func_951(uParam1->f_327[0]))
	{
		iVar0 = __LIB_10__::func_762(uParam1->f_327[0]);
		if (__LIB_8__::func_951(iVar0) && __LIB_10__::func_760(iVar0))
		{
			return true;
		}
	}
	return false;
}

float func_722(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_968(uParam0, uParam1, iParam2, iParam3, iParam4);
}

bool func_723(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	if (Global_1900073.f_26[iParam2 /*30*/].f_2 <= 3f || (func_69(iParam2, 1, 1) && __LIB_2__::func_157(uParam0->f_65, func_258(iParam2))))
	{
		return true;
	}
	vVar0 = { func_261(iParam2) };
	if (!__LIB_0__::func_86(vVar0) && __LIB_0__::func_636(ENTITY::GET_ENTITY_COORDS(func_53(uParam1, iParam2), true, false), vVar0) < 3f)
	{
		return true;
	}
	return false;
}

bool func_724(var uParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;
	if (iParam1 == 0)
	{
		vVar0 = { func_478(vParam2, 1) };
		if (!ENTITY::_0x0C9DBF48C6BA6E4C(func_53(uParam0, iParam1), vVar0, 1))
		{
			return true;
		}
	}
	return false;
}

int func_725(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	fVar0 = (uParam0->f_409[iParam1] / uParam0->f_706);
	iVar1 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(6000) * fVar0));
	iVar1 += 4000;
	return iVar1;
}

void func_726(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*263*/])->f_235 == 0f)
	{
		return;
	}
	(uParam0[iParam1 /*263*/])->f_235 = ((uParam0[iParam1 /*263*/])->f_235 * 0.9f);
	if ((uParam0[iParam1 /*263*/])->f_235 < 0.001f)
	{
		(uParam0[iParam1 /*263*/])->f_235 = 0f;
	}
}

int func_727(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 30;
	if (uParam0->f_491[iParam1] == 4)
	{
		iVar0 = 20;
	}
	else if (uParam0->f_491[iParam1] == 2 || uParam0->f_491[iParam1] == 3)
	{
		iVar0 = 25;
	}
	return iVar0;
}

int func_728(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	fVar0 = (uParam0->f_409[iParam1] / uParam0->f_706);
	iVar1 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(-4000) * fVar0));
	iVar1 += 10000;
	return iVar1;
}

int func_730(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_BREAD"):
			return joaat("P_BAITBREAD01X");
		case joaat("UPGRADE_FSH_BAIT_CORN"):
			return joaat("P_BAITCORN01X");
		case joaat("UPGRADE_FSH_BAIT_CHEESE"):
			return joaat("P_BAITCHEESE01X");
		case joaat("UPGRADE_FSH_BAIT_WORM"):
			return joaat("P_BAITWORM01X");
		case joaat("UPGRADE_FSH_BAIT_CRICKET"):
			return joaat("P_BAITCRICKET01X");
		case joaat("UPGRADE_FSH_BAIT_CRAYFISH"):
			return joaat("P_CRAWDAD01X");
		case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
			return joaat("P_FINISHEDRAGONFLY01X");
		case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
			return joaat("P_FINISDFISHLURE01X");
		case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
			return joaat("P_FINISHDCRAWD01X");
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
			return joaat("P_FINISHEDRAGONFLYLEGENDARY01X");
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
			return joaat("P_FINISDFISHLURELEGENDARY01X");
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
			return joaat("P_FINISHDCRAWDLEGENDARY01X");
		case joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"):
			return joaat("P_LGOC_SPINNER_V4");
		default:
			break;
	}
	return 0;
}

int func_731(var uParam0, var uParam1, int iParam2, vector3 vParam3)
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(func_53(uParam1, iParam2), vParam3) };
	if ((vVar0.x < uParam0->f_39[1 /*3*/] || vVar0.x > uParam0->f_39[4 /*3*/]) || vVar0.y > uParam0->f_39[2 /*3*/].f_1)
	{
		return 0;
	}
	return 1;
}

int func_732(var uParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(func_53(uParam0, iParam1)) };
	vVar3 = { __LIB_0__::func_173(vParam2 - ENTITY::GET_ENTITY_COORDS(func_53(uParam0, iParam1), true, false)) };
	fVar6 = __LIB_1__::func_95(vVar0, vVar3);
	fVar7 = BUILTIN::COS(45f);
	if (fVar6 < fVar7)
	{
		return 0;
	}
	return 1;
}

void func_733(var uParam0, int iParam1, vector3 vParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST((uParam0[iParam1 /*263*/])->f_14))
	{
		ENTITY::SET_ENTITY_COORDS((uParam0[iParam1 /*263*/])->f_14, vParam2, true, false, true, true);
		__LIB_1__::func_148(&((uParam0[iParam1 /*263*/])->f_248));
	}
}

bool func_734(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_251(iParam2))
	{
		if ((uParam0[iParam2 /*263*/])->f_255 != 1f)
		{
			(uParam0[iParam2 /*263*/])->f_256 = 1;
		}
	}
	else if (func_738())
	{
		if ((uParam0[iParam2 /*263*/])->f_255 != 1.5f)
		{
			(uParam0[iParam2 /*263*/])->f_256 = 1;
		}
	}
	else if (func_146(uParam1, iParam3))
	{
		if ((uParam0[iParam2 /*263*/])->f_255 != 3f)
		{
			(uParam0[iParam2 /*263*/])->f_256 = 1;
		}
	}
	else if ((uParam0[iParam2 /*263*/])->f_255 != 1.5f)
	{
		(uParam0[iParam2 /*263*/])->f_256 = 1;
	}
	return (uParam0[iParam2 /*263*/])->f_256;
}

bool func_736(int iParam0, int iParam1)
{
	if (Global_1900073.f_26[iParam0 /*30*/].f_3 > 0.5f)
	{
		return false;
	}
	return iParam1 > 0;
}

bool func_737(int iParam0, int iParam1)
{
	if (Global_1900073.f_26[iParam0 /*30*/].f_3 > 0.5f)
	{
		return false;
	}
	return iParam1 == 0;
}

bool func_738()
{
	if (!PAD::_IS_USING_KEYBOARD(0))
	{
		if (func_249() != 0 || func_250() != 0)
		{
			return true;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MINIGAME_FISHING_MANUAL_REEL_IN")) && PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MINIGAME_FISHING_MANUAL_REEL_OUT_MODIFER")))
	{
		return true;
	}
	return false;
}

int func_739(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (AUDIO::_0x84848E1C0FC67DBB((uParam0[iParam1 /*263*/])->f_92[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_744(int iParam0)
{
	if ((iParam0 == joaat("UPGRADE_FSH_BAIT_BREAD") || iParam0 == joaat("UPGRADE_FSH_BAIT_CORN")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CHEESE"))
	{
		return true;
	}
	return false;
}

bool func_745(int iParam0)
{
	if ((iParam0 == joaat("UPGRADE_FSH_BAIT_WORM") || iParam0 == joaat("UPGRADE_FSH_BAIT_CRICKET")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CRAYFISH"))
	{
		return true;
	}
	return false;
}

bool func_746(int iParam0)
{
	if ((((iParam0 == joaat("UPGRADE_FSH_BAIT_CHEESE") || iParam0 == joaat("UPGRADE_FSH_BAIT_WORM")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		return true;
	}
	return false;
}

bool func_747(int iParam0)
{
	if ((((iParam0 == joaat("UPGRADE_FSH_BAIT_BREAD") || iParam0 == joaat("UPGRADE_FSH_BAIT_CRICKET")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_RIVER")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER")) || iParam0 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		return true;
	}
	return false;
}

bool func_748(int iParam0)
{
	if ((((iParam0 == joaat("UPGRADE_FSH_BAIT_CORN") || iParam0 == joaat("UPGRADE_FSH_BAIT_CRAYFISH")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_SWAMP")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP")) || iParam0 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		return true;
	}
	return false;
}

bool func_758(int iParam0)
{
	if (Global_1900073.f_19 == 1)
	{
	}
	if (Global_1900073.f_20 == 1 && Global_1900073.f_26[0 /*30*/] == 1)
	{
		if (iParam0 == 7 || iParam0 == 8)
		{
			return false;
		}
	}
	if (Global_1900073.f_21 == 1 && Global_1900073.f_26[0 /*30*/] == 1)
	{
		if (iParam0 == 7 || iParam0 == 8)
		{
			return false;
		}
	}
	if (Global_1900073.f_22 == 1)
	{
	}
	if (Global_1900073.f_23 == 1 && Global_1900073.f_26[0 /*30*/] == 6)
	{
		if ((iParam0 == 0 || iParam0 == 2) || iParam0 == 3)
		{
			return false;
		}
	}
	if (Global_1900073.f_24 == 1 && Global_1900073.f_26[0 /*30*/] == 7)
	{
		if (((iParam0 == 0 || iParam0 == 1) || iParam0 == 3) || iParam0 == 4)
		{
			return false;
		}
	}
	return true;
}

void func_761(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 3)
	{
		if (HUD::_UIPROMPT_IS_VALID(uParam0->f_93))
		{
			HUD::_UIPROMPT_SET_VISIBLE(uParam0->f_93, bParam2);
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_83[iParam1]))
	{
		if (__LIB_0__::func_139(uParam0->f_83[iParam1]))
		{
			__LIB_1__::func_382(uParam0->f_83[iParam1], bParam2, 0);
		}
	}
}

bool func_763()
{
	if (func_1() || Global_1900073.f_20 == 0)
	{
		return false;
	}
	return true;
}

void func_764(var uParam0, int iParam1, bool bParam2)
{
	struct<2> Var0;
	struct<2> Var2;
	if (iParam1 == 1)
	{
		if (!func_50(uParam0, 65536))
		{
			func_51(uParam0, 65536);
			Var0 = 2;
			if (uParam0->f_676.f_1 == 1)
			{
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_CHEESE");
			}
			else if (uParam0->f_676.f_4 == 1)
			{
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			}
			else if (uParam0->f_676.f_2 == 1)
			{
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LURE_LAKE");
			}
			else if (uParam0->f_676 == 1)
			{
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE");
			}
			else
			{
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_CHEESE");
			}
			HUD::_0x8A59D44189AF2BC5(&Var0, -1001145251);
		}
	}
	else if (func_50(uParam0, 65536) || bParam2 == 1)
	{
		func_204(uParam0, 65536);
		Var2 = 2;
		if (uParam0->f_676.f_1 == 1)
		{
			Var2.f_1 = joaat("UPGRADE_FSH_BAIT_CHEESE");
		}
		else if (uParam0->f_676.f_4 == 1)
		{
			Var2.f_1 = joaat("UPGRADE_FSH_BAIT_CRICKET");
		}
		else if (uParam0->f_676.f_2 == 1)
		{
			Var2.f_1 = joaat("UPGRADE_FSH_BAIT_LURE_LAKE");
		}
		else if (uParam0->f_676 == 1)
		{
			Var2.f_1 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE");
		}
		else
		{
			Var2.f_1 = joaat("UPGRADE_FSH_BAIT_CHEESE");
		}
		HUD::_0x8A59D44189AF2BC5(&Var2, 1856029758);
	}
}

int func_765(var uParam0)
{
	if (uParam0->f_676.f_1 == 1)
	{
		return 8;
	}
	else if (uParam0->f_676.f_4 == 1)
	{
		return 11;
	}
	else if (uParam0->f_676.f_2 == 1)
	{
		return 9;
	}
	else if (uParam0->f_676 == 1)
	{
		return 10;
	}
	return 8;
}

void func_766(var uParam0, int iParam1)
{
	if (!func_50(uParam0, 512))
	{
		func_51(uParam0, 512);
		__LIB_3__::func_834(3);
	}
	if (uParam0->f_20 != iParam1)
	{
		if (uParam0->f_20 > iParam1)
		{
			__LIB_13__::func_671();
		}
		uParam0->f_20 = iParam1;
		__LIB_3__::func_787(uParam0->f_20);
	}
}

int func_767(var uParam0)
{
	if (uParam0->f_676.f_1 == 1)
	{
		return 4;
	}
	else if (uParam0->f_676.f_4 == 1)
	{
		return 7;
	}
	else if (uParam0->f_676.f_2 == 1)
	{
		return 5;
	}
	else if (uParam0->f_676 == 1)
	{
		return 6;
	}
	return 4;
}

int func_768(var uParam0)
{
	if (uParam0->f_75 == 1)
	{
		return 12;
	}
	return 3;
}

bool func_769()
{
	if (func_1() || Global_1900073.f_21 == 0)
	{
		return false;
	}
	return true;
}

void func_770(var uParam0, int iParam1)
{
	if (!func_50(uParam0, 1024))
	{
		func_51(uParam0, 1024);
		__LIB_3__::func_834(2);
	}
	if (uParam0->f_21 != iParam1)
	{
		if (uParam0->f_21 > iParam1)
		{
			__LIB_13__::func_671();
		}
		uParam0->f_21 = iParam1;
		__LIB_3__::func_787(uParam0->f_21);
	}
}

int func_771(var uParam0)
{
	if (uParam0->f_76 == 1)
	{
		return 12;
	}
	return 3;
}

int func_773(int iParam0)
{
	if (((((iParam0 == 1 || iParam0 == 2) || iParam0 == 16) || iParam0 == 128) || iParam0 == 4096) || iParam0 == 8192)
	{
		return 1;
	}
	return 0;
}

void func_775(var uParam0, char[12] cParam1)
{
	__LIB_1__::func_104(&(uParam0->f_568), cParam1, 0, -1, 0, 0);
}

void func_776(var uParam0, int iParam1)
{
	if (!func_536(uParam0, iParam1))
	{
		__LIB_1__::func_581(&(uParam0->f_666), iParam1);
	}
}

bool func_777(var uParam0, int iParam1)
{
	return ((uParam0[iParam1 /*263*/])->f_19 != -99999f && (uParam0[iParam1 /*263*/])->f_19 < 0.03f);
}

void func_778(var uParam0, var uParam1, int iParam2)
{
	(uParam1[iParam2 /*263*/])->f_74 = 0;
	(uParam1[iParam2 /*263*/])->f_78 = -1;
	(uParam1[iParam2 /*263*/])->f_180++;
	if ((iParam2 != 0 || func_1()) || func_46(&(uParam0->f_676)))
	{
		return;
	}
	if (!__LIB_0__::func_58(uParam0))
	{
		if (((!__LIB_14__::func_46(1) || __LIB_14__::func_46(2)) || (uParam1[iParam2 /*263*/])->f_180 < uParam0->f_80) || __LIB_0__::func_636(Global_36, uParam0->f_62) > 50f)
		{
			return;
		}
	}
	(uParam1[iParam2 /*263*/])->f_74 = 1;
	(uParam1[iParam2 /*263*/])->f_78 = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_81, uParam0->f_82);
}

bool func_779(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (((((func_456(uParam0, uParam1, iParam3, 1) && !func_79(uParam1, iParam3, 512)) && __LIB_8__::func_955(Global_40.f_11184[iParam3])) && func_990(iParam3, iParam4)) && func_722(uParam0, uParam2, iParam3, iParam4, 0) > 0f) && func_457(uParam1, iParam3, iParam4, 2))
	{
		return true;
	}
	return false;
}

bool func_780(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (!func_456(uParam0, uParam1, iParam3, 1))
	{
		return true;
	}
	else if (func_79(uParam1, iParam3, 512))
	{
		return true;
	}
	else if (!__LIB_8__::func_955(Global_40.f_11184[iParam3]))
	{
		return true;
	}
	else if (!func_990(iParam3, iParam4))
	{
		return true;
	}
	else if (func_722(uParam0, uParam2, iParam3, iParam4, 0) == 0f)
	{
		return true;
	}
	else if (!func_457(uParam1, iParam3, iParam4, 2))
	{
		return true;
	}
	return false;
}

void func_781(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	iVar0 = func_702(iParam4);
	if (func_703(iVar0) && !FLOCK::_0x19870C40C7EE15BE(iVar0, (uParam1[iParam3 /*263*/])->f_102[iParam4]))
	{
		fVar1 = func_722(uParam0, uParam2, iParam3, iParam4, 0);
		(uParam1[iParam3 /*263*/])->f_102[iParam4] = FLOCK::_0xE93415B3307208E5(iVar0, __LIB_14__::func_185(iParam3), 0f, fVar1, 10000f, 0f, 0f, 0f, 1);
		if (iParam3 == 0)
		{
			func_704(uParam1, iParam4, fVar1);
		}
	}
}

void func_782(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (iParam1 == 3)
	{
		if (iParam2 == 1)
		{
			if (!HUD::_UIPROMPT_GET_URGENT_PULSING_ENABLED(uParam0->f_93))
			{
				HUD::_UIPROMPT_SET_URGENT_PULSING_ENABLED(uParam0->f_93, 1);
			}
		}
		else if (HUD::_UIPROMPT_GET_URGENT_PULSING_ENABLED(uParam0->f_93))
		{
			HUD::_UIPROMPT_SET_URGENT_PULSING_ENABLED(uParam0->f_93, 0);
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_83[iParam1]))
	{
		iVar0 = __LIB_0__::func_17(uParam0->f_83[iParam1]);
		if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
		{
			if (iParam2 == 1)
			{
				if (!HUD::_UIPROMPT_GET_URGENT_PULSING_ENABLED(Global_1945938[iVar0 /*18*/].f_3))
				{
					HUD::_UIPROMPT_SET_URGENT_PULSING_ENABLED(Global_1945938[iVar0 /*18*/].f_3, 1);
				}
			}
			else if (HUD::_UIPROMPT_GET_URGENT_PULSING_ENABLED(Global_1945938[iVar0 /*18*/].f_3))
			{
				HUD::_UIPROMPT_SET_URGENT_PULSING_ENABLED(Global_1945938[iVar0 /*18*/].f_3, 0);
			}
		}
	}
}

bool func_783(var uParam0)
{
	if (!__LIB_0__::func_75(&(uParam0->f_99)))
	{
		__LIB_1__::func_148(&(uParam0->f_99));
	}
	if (__LIB_0__::func_264(&(uParam0->f_99)) >= 3f && __LIB_8__::func_955(Global_40.f_11184[0]))
	{
		if (func_397(Global_40.f_11184[0]) || func_398(Global_40.f_11184[0]))
		{
			return true;
		}
	}
	return false;
}

bool func_784(var uParam0)
{
	if (!__LIB_0__::func_75(&(uParam0->f_99)))
	{
		__LIB_1__::func_148(&(uParam0->f_99));
	}
	return __LIB_0__::func_264(&(uParam0->f_99)) >= 3f;
}

int func_787(var uParam0)
{
	if (Global_1900073.f_23 == 1)
	{
		return BUILTIN::ROUND((BUILTIN::TO_FLOAT(uParam0->f_69 * 1000) * 2f));
	}
	return uParam0->f_69 * 1000;
}

void func_788(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	if (!func_456(uParam0, uParam1, iParam3, 1) || func_79(uParam1, iParam3, 256))
	{
		return;
	}
	iVar0 = -1;
	if (iParam3 == 0)
	{
		if (uParam2->f_705 == 1)
		{
			(uParam1[iParam3 /*263*/])->f_201 = 1;
			if (Global_40.f_11184[iParam3] == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG") || uParam0->f_61 == 1)
			{
				(uParam1[iParam3 /*263*/])->f_200 = 0;
			}
			else
			{
				(uParam1[iParam3 /*263*/])->f_200 = 1;
			}
		}
		else
		{
			(uParam1[iParam3 /*263*/])->f_200 = 1;
			(uParam1[iParam3 /*263*/])->f_201 = 0;
		}
	}
	else
	{
		(uParam1[iParam3 /*263*/])->f_200 = 1;
		(uParam1[iParam3 /*263*/])->f_201 = 0;
	}
	if ((uParam1[iParam3 /*263*/])->f_201 == 1)
	{
		if (((!ENTITY::IS_ENTITY_DEAD(uParam2->f_163[0]) && func_194(uParam0, uParam1, uParam2, 0) == -1) && uParam2->f_204[0] == 4) && (uParam1[iParam3 /*263*/])->f_30[0] < (uParam1[iParam3 /*263*/])->f_199)
		{
			iVar0 = 0;
		}
	}
	if ((uParam1[iParam3 /*263*/])->f_200 == 1)
	{
		if ((((!func_238(iVar0) && iParam3 == 0) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_163[1])) && func_194(uParam0, uParam1, uParam2, 1) == -1) && uParam2->f_204[1] == 4)
		{
			if (func_457(uParam1, 0, uParam2->f_327[1], 0) && (uParam1[iParam3 /*263*/])->f_30[1] < (uParam1[iParam3 /*263*/])->f_199)
			{
				iVar0 = 1;
			}
		}
		if (!func_238(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if ((!ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iVar1]) && uParam2->f_204[iVar1] == 4) && func_991(iParam3, iVar1))
				{
					iVar10 = uParam2->f_327[iVar1];
					iVar2 = func_702(uParam2->f_327[iVar1]);
					if (func_703(iVar2) && FLOCK::_0x19870C40C7EE15BE(iVar2, (uParam1[iParam3 /*263*/])->f_102[iVar10]))
					{
						fVar18 = (uParam1[iParam3 /*263*/])->f_30[iVar1];
						if (fVar18 != 99999f && fVar18 < (uParam1[iParam3 /*263*/])->f_199)
						{
							fVar19 = func_992(uParam0, uParam2, iParam3, uParam2->f_327[iVar1], Global_40.f_11184[iParam3]);
							if (fVar19 == 100f)
							{
								if (fVar11 <= 0f || fVar18 < fVar11)
								{
									fVar11 = fVar18;
									iVar3 = iVar1;
								}
							}
							else if (fVar19 == 5f)
							{
								if (fVar12 <= 0f || fVar18 < fVar12)
								{
									fVar12 = fVar18;
									iVar4 = iVar1;
								}
							}
							else if (fVar19 == 4f)
							{
								if (fVar13 <= 0f || fVar18 < fVar13)
								{
									fVar13 = fVar18;
									iVar5 = iVar1;
								}
							}
							else if (fVar19 == 3f)
							{
								if (fVar14 <= 0f || fVar18 < fVar14)
								{
									fVar14 = fVar18;
									iVar6 = iVar1;
								}
							}
							else if (fVar19 == 2f)
							{
								if (fVar15 <= 0f || fVar18 < fVar15)
								{
									fVar15 = fVar18;
									iVar7 = iVar1;
								}
							}
							else if (fVar19 == 1f)
							{
								if (fVar16 <= 0f || fVar18 < fVar16)
								{
									fVar16 = fVar18;
									iVar8 = iVar1;
								}
							}
							else if (fVar19 == 0.5f)
							{
								if (fVar17 <= 0f || fVar18 < fVar17)
								{
									fVar17 = fVar18;
									iVar9 = iVar1;
								}
							}
						}
					}
				}
				iVar1++;
			}
			if (fVar11 > 0f)
			{
				iVar0 = iVar3;
			}
			else if (fVar12 > 0f)
			{
				iVar0 = iVar4;
			}
			else if (fVar13 > 0f)
			{
				iVar0 = iVar5;
			}
			else if (fVar14 > 0f)
			{
				iVar0 = iVar6;
			}
			else if (fVar15 > 0f)
			{
				iVar0 = iVar7;
			}
			else if (fVar16 > 0f)
			{
				iVar0 = iVar8;
			}
			else if (fVar17 > 0f)
			{
				iVar0 = iVar9;
			}
		}
	}
	if (func_238(iVar0))
	{
		func_993(uParam0, uParam1, uParam2, iParam3, iVar0);
	}
}

bool func_789(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if ((!func_456(uParam0, uParam1, iParam3, 0) || func_994(uParam0, uParam1, uParam2, iParam3)) || func_540())
	{
		return true;
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if ((func_238(iVar0) && (uParam1[iParam3 /*263*/])->f_30[iVar0] != 99999f) && (uParam1[iParam3 /*263*/])->f_30[iVar0] > ((uParam1[iParam3 /*263*/])->f_199 + 2f))
	{
		return true;
	}
	return false;
}

void func_790(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (iParam3 != 0)
	{
		return;
	}
	if (func_995(uParam0, uParam1, uParam2, iParam3))
	{
		(uParam1[iParam3 /*263*/])->f_189 = func_996(uParam0, uParam1, uParam2, iParam3);
		(uParam1[iParam3 /*263*/])->f_197 = func_997(uParam0, uParam1, uParam2, iParam3);
		(uParam1[iParam3 /*263*/])->f_198 = func_998(uParam0, uParam1, uParam2, iParam3);
		(uParam1[iParam3 /*263*/])->f_190 = func_999(uParam1, uParam2, iParam3);
		func_181((uParam1[iParam3 /*263*/])->f_197, (uParam1[iParam3 /*263*/])->f_198);
		if (func_758(2))
		{
			func_791(uParam0, 2, 1);
		}
		if ((uParam1[iParam3 /*263*/])->f_189 == 1)
		{
			func_782(uParam0, 2, 1);
		}
		func_1000(uParam0, uParam1, uParam2, iParam3);
		func_1001(uParam0, uParam1, uParam2, iParam3);
		func_153(iParam3, 512, 0);
		(uParam1[iParam3 /*263*/])->f_182++;
		__LIB_1__::func_148(&((uParam1[iParam3 /*263*/])->f_186));
		__LIB_18__::func_162(iParam3, 32);
		func_166(uParam1, iParam3, 8192);
		func_166(uParam1, iParam3, 16384);
	}
	if (func_360(iParam3, 512))
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (!func_238(iVar0) || (__LIB_0__::func_75(&((uParam1[iParam3 /*263*/])->f_186)) && __LIB_1__::func_871(&((uParam1[iParam3 /*263*/])->f_186)) > (uParam1[iParam3 /*263*/])->f_197))
		{
			func_333(iParam3, 512);
			if ((uParam1[iParam3 /*263*/])->f_189 == 1)
			{
				func_33(uParam1, iParam3);
				func_415(uParam0, uParam1, uParam2, iParam3, 0);
			}
			(uParam1[iParam3 /*263*/])->f_198 = 0;
			func_782(uParam0, 2, 0);
			if (func_758(2))
			{
				func_791(uParam0, 2, 0);
			}
		}
	}
}

void func_791(var uParam0, int iParam1, int iParam2)
{
	if (__LIB_0__::func_139(uParam0->f_83[iParam1]))
	{
		if (iParam2 == 1)
		{
			if (__LIB_4__::func_863(uParam0->f_83[iParam1], 1))
			{
				__LIB_1__::func_221(uParam0->f_83[iParam1], 1, 1);
			}
		}
		else if (!__LIB_4__::func_863(uParam0->f_83[iParam1], 1))
		{
			__LIB_1__::func_221(uParam0->f_83[iParam1], 0, 1);
		}
	}
}

void func_792(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam2 != 0)
	{
		return;
	}
	(uParam1[iParam2 /*263*/])->f_6 = iParam3;
	switch ((uParam1[iParam2 /*263*/])->f_6)
	{
		case 1:
			if ((func_744(Global_40.f_11184[iParam2]) && (uParam1[iParam2 /*263*/])->f_72 > 3) || (func_745(Global_40.f_11184[iParam2]) && (uParam1[iParam2 /*263*/])->f_72 > 4))
			{
				if (uParam0->f_74 == 0 && !func_396(Global_40.f_11184[iParam2]))
				{
					func_185(Global_40.f_11184[iParam2]);
				}
				func_309(uParam0, uParam1, iParam2, joaat("UPGRADE_FSH_BAIT_NONE"), 0, 0);
			}
			break;
		case 2:
			if (func_1003(uParam1, iParam2))
			{
				if (!func_50(uParam0, 128))
				{
					if (func_744(Global_40.f_11184[iParam2]) || func_745(Global_40.f_11184[iParam2]))
					{
						func_110(uParam0, 54, 1, -2, 1);
					}
					else
					{
						func_110(uParam0, 55, 1, -2, 1);
					}
				}
				if (uParam0->f_74 == 0 && !func_396(Global_40.f_11184[iParam2]))
				{
					func_185(Global_40.f_11184[iParam2]);
				}
				func_309(uParam0, uParam1, iParam2, joaat("UPGRADE_FSH_BAIT_NONE"), 0, 0);
			}
			if (!func_50(uParam0, 128))
			{
				func_110(uParam0, 56, 1, -2, 1);
			}
			break;
		case 3:
			if (func_744(Global_40.f_11184[iParam2]) || func_745(Global_40.f_11184[iParam2]))
			{
				if (uParam0->f_74 == 0 && !func_396(Global_40.f_11184[iParam2]))
				{
					func_185(Global_40.f_11184[iParam2]);
				}
				func_309(uParam0, uParam1, iParam2, joaat("UPGRADE_FSH_BAIT_NONE"), 0, 0);
			}
			break;
	}
}

bool func_793(var uParam0, var uParam1)
{
	if (func_79(uParam1, 0, 4096) || func_540())
	{
		return false;
	}
	func_523(uParam0, 1, 0, 1);
	if (__LIB_1__::func_732(uParam0->f_83[1], 1))
	{
		func_51(uParam0, 128);
		return true;
	}
	return false;
}

bool func_794()
{
	if (Global_1900073.f_153 != Global_40.f_11184[0] && __LIB_8__::func_955(Global_1900073.f_153))
	{
		return true;
	}
	return false;
}

void func_795(var uParam0, var uParam1, int iParam2)
{
	(uParam1[iParam2 /*263*/])->f_18 = joaat("P_BODYPARTARMFLOAT02X");
	Global_1900073.f_154[iParam2] = func_583((uParam1[iParam2 /*263*/])->f_18);
	__LIB_18__::func_162(iParam2, 8);
	func_153(iParam2, 4, 1);
	(uParam1[iParam2 /*263*/])->f_180 = 0;
	__LIB_1__::func_148(&(uParam0->f_12));
	func_554(&(uParam0->f_105), 52, 2);
	func_554(&(uParam0->f_105), 53, 2);
}

bool func_797(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (func_238(iVar0) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iVar0]))
	{
		if (__LIB_0__::func_58(uParam2, iParam3))
		{
			return true;
		}
		if (func_456(uParam0, uParam1, iParam3, 0))
		{
			if (iParam3 == 0)
			{
				if (((__LIB_0__::func_75(&((uParam1[iParam3 /*263*/])->f_186)) && __LIB_1__::func_871(&((uParam1[iParam3 /*263*/])->f_186)) < (uParam1[0 /*263*/])->f_197) && (uParam1[iParam3 /*263*/])->f_30[iVar0] != 99999f) && (uParam1[iParam3 /*263*/])->f_30[iVar0] < ((uParam1[iParam3 /*263*/])->f_199 + 2f))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

void func_798(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (!ENTITY::_0x88AD6CC10D8D35B2(uParam2->f_163[iParam4]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam2->f_163[iParam4], true, true);
	}
	TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam4], true, false);
	func_272(uParam2, iParam4, 6);
	if (iParam3 == 0)
	{
		WATER::_0xF0FBF193F1F5C0EA(uParam2->f_163[iParam4]);
		__LIB_1__::func_148(&(uParam0->f_12));
		func_554(&(uParam0->f_105), 45, 2);
		func_554(&(uParam0->f_105), 47, 2);
		func_554(&(uParam0->f_105), 48, 2);
		func_554(&(uParam0->f_105), 49, 2);
		func_554(&(uParam0->f_105), 75, 2);
		__LIB_1__::func_148(&(uParam0->f_667));
		uParam0->f_670 = MISC::GET_RANDOM_INT_IN_RANGE(30, 40);
		if (func_1004(uParam2->f_327[iParam4]))
		{
			func_554(&(uParam0->f_105), 59, 50);
			func_554(&(uParam0->f_105), 60, 30);
		}
		else
		{
			__LIB_0__::func_37(&(uParam0->f_105.f_154[59 /*3*/]));
			__LIB_0__::func_37(&(uParam0->f_105.f_154[60 /*3*/]));
		}
		if (func_69(iParam3, 1, 1) && uParam2->f_491[iParam4] == 4)
		{
			uParam0->f_682 = 1;
		}
		else
		{
			uParam0->f_682 = 0;
		}
	}
	(uParam1[iParam3 /*263*/])->f_205 = 0;
	(uParam1[iParam3 /*263*/])->f_206 = 0;
	(uParam1[iParam3 /*263*/])->f_207 = 0;
	(uParam1[iParam3 /*263*/])->f_210 = 0;
	(uParam1[iParam3 /*263*/])->f_211 = 0;
	(uParam1[iParam3 /*263*/])->f_181 = 0;
	(uParam1[iParam3 /*263*/])->f_255 = 3f;
	(uParam1[iParam3 /*263*/])->f_256 = 0;
	fVar0 = (uParam2->f_409[iParam4] / uParam2->f_706);
	fVar1 = (0.5f * fVar0);
	fVar2 = (fVar1 / 2f);
	if (uParam2->f_655[iParam4] > 0f)
	{
		if (uParam2->f_655[iParam4] >= fVar2)
		{
			(uParam1[iParam3 /*263*/])->f_235 = uParam2->f_655[iParam4];
		}
		else
		{
			(uParam1[iParam3 /*263*/])->f_235 = fVar2;
		}
	}
	else
	{
		(uParam1[iParam3 /*263*/])->f_235 = fVar1;
	}
	__LIB_0__::func_37(&((uParam1[iParam3 /*263*/])->f_191));
	__LIB_0__::func_37(&((uParam1[iParam3 /*263*/])->f_252));
	func_333(iParam3, 512);
	TASK::_0x1F298C7BD30D1240(func_53(uParam1, iParam3));
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam2->f_163[iParam4], false, true);
	TASK::_0x1A52076D26E09004(func_53(uParam1, iParam3), uParam2->f_163[iParam4]);
	__LIB_18__::func_162(iParam3, 4);
	func_153(iParam3, 4, 1);
	func_191(uParam1, iParam3, 0);
	func_33(uParam1, iParam3);
	func_415(uParam0, uParam1, uParam2, iParam3, 1);
}

bool func_799(var uParam0, var uParam1, int iParam2)
{
	if (Global_1900073.f_26[iParam2 /*30*/] != 6 || __LIB_0__::func_58(uParam1, iParam2))
	{
		return false;
	}
	if ((iParam2 == 0 && __LIB_0__::func_75(&((uParam0[iParam2 /*263*/])->f_186))) && __LIB_1__::func_871(&((uParam0[iParam2 /*263*/])->f_186)) < (uParam0[iParam2 /*263*/])->f_190 + 2000)
	{
		return true;
	}
	return false;
}

bool func_800(int iParam0)
{
	return Global_1900073.f_26[iParam0 /*30*/].f_2 < 4f;
}

bool func_801(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (!func_238(iVar0))
	{
		return false;
	}
	return true;
}

bool func_802(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (func_238(iVar0))
	{
		if (!func_146(uParam2, iVar0) || Global_1900073.f_26[iParam3 /*30*/].f_3 > 0.25f)
		{
			return true;
		}
	}
	return false;
}

void func_803(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	if (iParam3 != 0 || !__LIB_0__::func_75(&(uParam0->f_12)))
	{
		(uParam1[iParam3 /*263*/])->f_207 = 0;
		return;
	}
	iVar0 = func_727(uParam2, iParam4);
	fVar1 = (BUILTIN::TO_FLOAT(__LIB_3__::func_135(&(uParam0->f_12))) / IntToFloat(iVar0 * 1000));
	if (BUILTIN::ROUND((fVar1 * 200f)) >= (uParam1[iParam3 /*263*/])->f_207)
	{
		(uParam1[iParam3 /*263*/])->f_207 = BUILTIN::ROUND((fVar1 * 200f));
	}
	else if (!__LIB_0__::func_75(&((uParam1[iParam3 /*263*/])->f_245)) || __LIB_3__::func_135(&((uParam1[iParam3 /*263*/])->f_245)) > uParam0->f_71)
	{
		__LIB_1__::func_148(&((uParam1[iParam3 /*263*/])->f_245));
		if ((uParam1[iParam3 /*263*/])->f_207 > 0)
		{
			(uParam1[iParam3 /*263*/])->f_207 = ((uParam1[iParam3 /*263*/])->f_207 - 1);
		}
	}
	__LIB_0__::func_309((uParam1[iParam3 /*263*/])->f_207, 0, 200);
}

void func_804(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam3 == 0)
	{
		if ((!func_146(uParam2, iParam4) || !__LIB_0__::func_0(iParam3)) || func_469(uParam0, uParam1, iParam3, 0))
		{
			func_1005(uParam0, uParam1, uParam2, iParam4, iParam3);
		}
		else if ((func_251(iParam3) || func_738()) || func_1006(iParam3))
		{
			func_1007(uParam0, uParam1, uParam2, iParam3);
		}
		else
		{
			func_1005(uParam0, uParam1, uParam2, iParam4, iParam3);
		}
	}
	else if (func_1006(iParam3))
	{
		(uParam1[iParam3 /*263*/])->f_206 = 200;
	}
	else if (func_146(uParam2, iParam4))
	{
		func_1007(uParam0, uParam1, uParam2, iParam3);
	}
	__LIB_0__::func_309((uParam1[iParam3 /*263*/])->f_206, 0, 200);
}

void func_805(var uParam0, var uParam1, int iParam2)
{
	if ((uParam0[iParam2 /*263*/])->f_207 > 0 && (uParam0[iParam2 /*263*/])->f_207 >= (uParam0[iParam2 /*263*/])->f_206)
	{
		(uParam0[iParam2 /*263*/])->f_205 = (uParam0[iParam2 /*263*/])->f_207;
	}
	else
	{
		(uParam0[iParam2 /*263*/])->f_205 = (uParam0[iParam2 /*263*/])->f_206;
	}
	__LIB_0__::func_309((uParam0[iParam2 /*263*/])->f_205, 0, 200);
}

bool func_806(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (__LIB_1__::func_672(iParam3, 2))
	{
		return true;
	}
	else if (__LIB_1__::func_672(iParam3, 262144))
	{
		return true;
	}
	else if ((uParam1[iParam3 /*263*/])->f_205 >= 200)
	{
		return true;
	}
	else if (!func_238(iParam4))
	{
		return true;
	}
	else if (ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iParam4]))
	{
		return true;
	}
	else if (iParam3 == 0 && func_793(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

void func_807()
{
	struct<2> Var0;
	if (Global_1900073.f_154[0] != 1)
	{
		return;
	}
	Var0 = { __LIB_0__::func_14(joaat("FISH_ESCAPED")) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_808(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((iParam3 == 0 && !func_50(uParam0, 128)) && Global_1900073.f_154[iParam3] == 1)
	{
		func_533(uParam0, uParam1, uParam2, iParam3, 64);
	}
}

int func_809(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if ((func_238(iVar0) && __LIB_8__::func_951(uParam2->f_327[iVar0])) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_163[iVar0]))
	{
		if (__LIB_8__::func_952(iVar0))
		{
			if (uParam2->f_327[iVar0] == 8)
			{
				return 0;
			}
			return 1;
		}
		if (!func_89(uParam2->f_327[iVar0]))
		{
			return 1;
		}
	}
	return 0;
}

int func_810(var uParam0)
{
	if (__LIB_0__::func_75(&((uParam0[0 /*263*/])->f_252)) && __LIB_1__::func_871(&((uParam0[0 /*263*/])->f_252)) >= 6000)
	{
		return 1;
	}
	return 0;
}

int func_811(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			if (bParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_BLUEGILL_LEGENDARY");
			}
			else if (iParam2 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_BLUEGILL_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_BLUEGILL");
			}
			break;
		case 1:
			if (bParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY");
			}
			else if (iParam2 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_BULLHEAD_CATFISH");
			}
			break;
		case 2:
			if (bParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY");
			}
			else if (iParam2 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_CHAIN_PICKEREL");
			}
			break;
		case 3:
			if (bParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_CHANNEL_CATFISH_LEGENDARY");
			}
			else if (iParam2 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_CHANNEL_CATFISH");
			}
			break;
		case 4:
			if (bParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY");
			}
			else if (iParam2 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_LAKE_STURGEON_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_LAKE_STURGEON");
			}
			break;
		case 5:
			if (bParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY");
			}
			else if (iParam2 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_LARGEMOUTH_BASS");
			}
			break;
		case 6:
			if (bParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY");
			}
			else if (iParam2 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_LONGNOSE_GAR_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_LONGNOSE_GAR");
			}
			break;
		case 7:
			if (bParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_MUSKIE_LEGENDARY");
			}
			else if (iParam2 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_MUSKIE_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_MUSKIE");
			}
			break;
		case 8:
			if (bParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY");
			}
			else if (iParam2 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_NORTHERN_PIKE_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_NORTHERN_PIKE");
			}
			break;
		case 9:
			if (bParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_PERCH_LEGENDARY");
			}
			else if (iParam2 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_PERCH_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_PERCH");
			}
			break;
		case 10:
			if (bParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY");
			}
			else if (iParam2 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_REDFIN_PICKEREL");
			}
			break;
		case 11:
			if (bParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY");
			}
			else if (iParam2 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_ROCK_BASS_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_ROCK_BASS");
			}
			break;
		case 12:
			if (bParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY");
			}
			else if (iParam2 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_SMALLMOUTH_BASS");
			}
			break;
		case 13:
			if (bParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY");
			}
			else if (iParam2 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_SOCKEYE_SALMON");
			}
			break;
		case 14:
			if (bParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY");
			}
			else if (iParam2 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_STEELHEAD_TROUT");
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_812(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_614(iParam0, 0, 0);
	iVar1 = __LIB_8__::func_959(iParam0, 0);
	return iVar0 >= iVar1;
}

void func_813(var uParam0, int iParam1)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST((uParam0[iParam1 /*263*/])->f_25))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1900073.f_26[iParam1 /*30*/].f_7))
	{
		return;
	}
	(uParam0[iParam1 /*263*/])->f_26 = 0f;
	__LIB_1__::func_148(&((uParam0[iParam1 /*263*/])->f_27));
	if (Global_1900073.f_154[iParam1] == 1)
	{
		(uParam0[iParam1 /*263*/])->f_25 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_mg_fishing_drips", Global_1900073.f_26[iParam1 /*30*/].f_7, 0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Global_1900073.f_26[iParam1 /*30*/].f_7, "SKEL_Tail5"), 1065353216 /* Float: 1f */, 0, 0, 0);
	}
	else
	{
		(uParam0[iParam1 /*263*/])->f_25 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_mg_fishing_drips", Global_1900073.f_26[iParam1 /*30*/].f_7, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216 /* Float: 1f */, 0, 0, 0);
	}
	GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION((uParam0[iParam1 /*263*/])->f_25, "fade", (uParam0[iParam1 /*263*/])->f_26, false);
}

bool func_814(int iParam0)
{
	if ((((iParam0 == 2 || iParam0 == 3) || iParam0 == 5) || iParam0 == 7) || iParam0 == 8)
	{
		return true;
	}
	return false;
}

char* func_815(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH_LEGENDARY";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case 7:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE_LEGENDARY";
		case 9:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case 11:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_816(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_LEGBLUEGILL_DESC";
		case 1:
			return "PROVISION_LEGBULHDCATFSH_DESC";
		case 2:
			return "PROVISION_LEGCHNPKRL_DESC";
		case 3:
			return "PROVISION_LEGCHNCATFSH_DESC";
		case 4:
			return "PROVISION_LEGLKSTURG_DESC";
		case 5:
			return "PROVISION_LEGLRGMTHBASS_DESC";
		case 6:
			return "PROVISION_LEGLNGNOSEGAR_DESC";
		case 7:
			return "PROVISION_LEGMUSKIE_DESC";
		case 8:
			return "PROVISION_LEGNPIKE_DESC";
		case 9:
			return "PROVISION_LEGPERCH_DESC";
		case 10:
			return "PROVISION_LEGRDFNPCKREL_DESC";
		case 11:
			return "PROVISION_LEGROCKBASS_DESC";
		case 12:
			return "PROVISION_LEGSMLMTHBASS_DESC";
		case 13:
			return "PROVISION_LEGSCKEYESAL_DESC";
		case 14:
			return "PROVISION_LEGSTHDTROUT_DESC";
		default:
			break;
	}
	return "";
}

char* func_817(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_BLUEGILL_DESC";
		case 1:
			return "PROVISION_BULHDCATFSH_DESC";
		case 2:
			return "PROVISION_CHNPKRL_DESC";
		case 3:
			return "PROVISION_CHNCATFSH_DESC";
		case 4:
			return "PROVISION_LKSTURG_DESC";
		case 5:
			return "PROVISION_LRGMTHBASS_DESC";
		case 6:
			return "PROVISION_LNGNOSEGAR_DESC";
		case 7:
			return "PROVISION_MUSKIE_DESC";
		case 8:
			return "PROVISION_NPIKE_DESC";
		case 9:
			return "PROVISION_PERCH_DESC";
		case 10:
			return "PROVISION_RDFNPCKREL_DESC";
		case 11:
			return "PROVISION_ROCKBASS_DESC";
		case 12:
			return "PROVISION_SMLMTHBASS_DESC";
		case 13:
			return "PROVISION_SCKEYESAL_DESC";
		case 14:
			return "PROVISION_FISH_STHDTROUT_DESC";
		default:
			break;
	}
	return "";
}

void func_818(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	var uVar18;
	struct<14> Var22;
	iVar0 = func_142(uParam0, uParam1, uParam2, 0);
	if (!func_238(iVar0))
	{
		return;
	}
	bVar1 = __LIB_8__::func_952(iVar0);
	bVar2 = func_810(uParam1);
	iVar3 = func_811(uParam2->f_327[iVar0], bVar1, bVar2);
	if (uParam2->f_491[iVar0] == 4)
	{
		return;
	}
	else if (func_812(iVar3))
	{
		return;
	}
	if (!__LIB_0__::func_708(0))
	{
		iVar4 = func_1009(uParam2->f_327[iVar0]);
		iVar5 = func_1010(bVar1, bVar2);
		Var6.f_1 = 10;
		__LIB_0__::func_452(&Var6, iVar5);
		if (func_945(iVar4, &Var6, &uVar18, 0))
		{
			Var22.f_2.f_1 = 10;
			Var22.f_1 = uParam2->f_409[iVar0];
			func_1011(&uVar18, Var22);
		}
		return;
	}
	func_169(iVar3, uParam2->f_409[iVar0]);
}

void func_819(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = func_1012(uParam0, uParam1, uParam2, 0);
	iVar1 = func_142(uParam0, uParam1, uParam2, 0);
	if (!func_238(iVar1))
	{
		return;
	}
	if (!func_1())
	{
		__LIB_1__::func_696(func_1013(uParam1, uParam2, iVar0, iVar1));
	}
	else
	{
		func_1014(func_1013(uParam1, uParam2, iVar0, iVar1));
	}
}

void func_820(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (func_1() || Global_1900073.f_154[iParam3] != 1)
	{
		return;
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (func_238(iVar0) && __LIB_8__::func_952(iVar0))
	{
		if (func_79(uParam1, iParam3, 32))
		{
			Global_40.f_11184.f_5[Global_1900073.f_159[iParam3]] = 1;
			__LIB_0__::func_703(0, 10);
		}
	}
}

void func_821(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	if (!func_1())
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, 0);
		if (!func_238(iVar0))
		{
			return;
		}
		iVar1 = func_1012(uParam0, uParam1, uParam2, 0);
		if (__LIB_1__::func_672(0, 131072))
		{
		}
		else if (func_89(iVar1))
		{
			__LIB_8__::func_960(12, 0, 0, "MGFSH_HNR_REL", 0, 0, 1065353216 /* Float: 1f */, 0);
		}
		else
		{
			__LIB_8__::func_960(10, 0, 0, "MGFSH_HNR_REL", 0, 0, 1065353216 /* Float: 1f */, 0);
		}
	}
}

bool func_822(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_676.f_2 == 1 && uParam1->f_491[iParam2] == 4)
	{
		return false;
	}
	if (uParam1->f_532[iParam2] == 1 && !__LIB_8__::func_952(iParam2))
	{
		return false;
	}
	return true;
}

void func_823(int iParam0)
{
	if (!__LIB_14__::func_46(iParam0))
	{
		__LIB_1__::func_581(&(Global_40.f_11184.f_21), iParam0);
	}
}

bool func_825(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (!func_238(iVar0))
	{
		return false;
	}
	if (Global_1900073.f_189[iParam3] == 1)
	{
		return true;
	}
	else if (Global_1900073.f_189[iParam3] == 2)
	{
		return false;
	}
	iVar1 = 0;
	iVar1 = BUILTIN::ROUND((func_718(uParam2, iVar0, 1) * 100f));
	if (iVar1 > 50)
	{
		return true;
	}
	return false;
}

bool func_945(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;
	if (iParam0 == 0)
	{
		return false;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return false;
	}
	__LIB_0__::func_807(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return false;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	__LIB_0__::func_973(uParam2, iParam0, Var1);
	return true;
}

float func_964(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.5f;
		case 1:
			return 0.5f;
		case 2:
			return 0.5f;
		case 3:
			return 14f;
		case 4:
			return 14f;
		case 5:
			return 4f;
		case 6:
			return 14f;
		case 7:
			return 14f;
		case 8:
			return 14f;
		case 9:
			return 0.5f;
		case 10:
			return 0.5f;
		case 11:
			return 0.5f;
		case 12:
			return 4f;
		case 13:
			return 4f;
		case 14:
			return 4f;
		default:
			break;
	}
	return 0f;
}

bool func_965()
{
	return (__LIB_2__::func_988(1) || __LIB_2__::func_988(4));
}

float func_966(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2f;
		case 1:
			return 2f;
		case 2:
			return 2f;
		case 3:
			return 20f;
		case 4:
			return 20f;
		case 5:
			return 6f;
		case 6:
			return 20f;
		case 7:
			return 20f;
		case 8:
			return 20f;
		case 9:
			return 2f;
		case 10:
			return 2f;
		case 11:
			return 2f;
		case 12:
			return 6f;
		case 13:
			return 6f;
		case 14:
			return 6f;
		default:
			break;
	}
	return 0f;
}

float func_968(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = 0f;
	if (iParam4 == 0)
	{
		fVar1 = func_992(uParam0, uParam1, iParam2, iParam3, Global_40.f_11184[iParam2]);
	}
	else
	{
		fVar1 = 5f;
	}
	if (fVar1 > 0f)
	{
		fVar0 = (5f * fVar1);
	}
	if (fVar0 > 0f)
	{
		iVar2 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
		fVar0 = (fVar0 * func_1145(iVar2));
	}
	return fVar0;
}

bool func_990(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return true;
	}
	if ((((iParam1 == 3 || iParam1 == 4) || iParam1 == 6) || iParam1 == 7) || iParam1 == 8)
	{
		return false;
	}
	return true;
}

bool func_991(int iParam0, int iParam1)
{
	if (iParam0 != 0 && __LIB_8__::func_952(iParam1))
	{
		return false;
	}
	if (__LIB_8__::func_952(iParam1))
	{
		return false;
	}
	return true;
}

float func_992(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_8__::func_955(iParam4))
	{
		return 0f;
	}
	if (iParam2 == 0)
	{
		if (uParam0->f_676.f_1 == 1)
		{
			if (iParam4 == joaat("UPGRADE_FSH_BAIT_CHEESE"))
			{
				return 5f;
			}
		}
		else if (uParam0->f_676.f_2 == 1)
		{
			if ((iParam3 == 5 || iParam3 == 12) || iParam3 == 14)
			{
				return 5f;
			}
			else
			{
				return 0f;
			}
		}
		else if (uParam0->f_676.f_4 == 1)
		{
			if (!__LIB_1__::func_662(128))
			{
				if (iParam3 == 12 || !func_89(iParam3))
				{
					return 0f;
				}
			}
			else if (iParam4 == joaat("UPGRADE_FSH_BAIT_CRICKET"))
			{
				if (iParam3 == 12)
				{
					return 5f;
				}
				else
				{
					return 0f;
				}
			}
		}
	}
	else if (uParam0->f_676.f_4 == 1)
	{
		if (iParam3 == 12)
		{
			return 5f;
		}
		else
		{
			return 0f;
		}
	}
	fVar0 = 0f;
	iVar1 = func_1150(iParam3);
	iVar2 = COMPENDIUM::COMPENDIUM_FISH_GET_LURE_SUITABILITY_BY_STAT_ITEM(iVar1, iParam4);
	switch (iVar2)
	{
		case joaat("OUTSTANDING"):
			fVar0 = 4f;
			break;
		case joaat("EXCELLENT"):
			fVar0 = 3f;
			break;
		case joaat("GOOD"):
			fVar0 = 2f;
			break;
		case joaat("NORMAL"):
			fVar0 = 1f;
			break;
		case joaat("BAD"):
			fVar0 = 0.5f;
			break;
		case 0:
			fVar0 = 0f;
			break;
		default:
			break;
	}
	if ((iParam2 == 0 && fVar0 > 0f) && uParam0->f_60 != -1)
	{
		if (func_397(Global_40.f_11184[iParam2]) || func_398(Global_40.f_11184[iParam2]))
		{
			if (((uParam0->f_60 == 0 && func_746(Global_40.f_11184[iParam2])) || (uParam0->f_60 == 1 && func_747(Global_40.f_11184[iParam2]))) || (uParam0->f_60 == 2 && func_748(Global_40.f_11184[iParam2])))
			{
				fVar0 = func_1151(fVar0);
			}
		}
	}
	return fVar0;
}

void func_993(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	func_64(uParam0, uParam1, uParam2, iParam3, iParam4);
	func_272(uParam2, iParam4, 5);
	(uParam1[iParam3 /*263*/])->f_182 = 0;
	(uParam1[iParam3 /*263*/])->f_189 = 0;
	func_450(uParam0, uParam2, iParam4);
}

bool func_994(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (((iParam3 == 0 && func_1152(uParam0, uParam1, uParam2, iParam3)) && __LIB_0__::func_75(&((uParam1[iParam3 /*263*/])->f_186))) && __LIB_1__::func_871(&((uParam1[iParam3 /*263*/])->f_186)) > (uParam1[iParam3 /*263*/])->f_197)
	{
		return true;
	}
	if (func_360(iParam3, 1))
	{
		return true;
	}
	return false;
}

bool func_995(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if ((func_238(iVar0) && __LIB_8__::func_951(uParam2->f_327[iVar0])) && (uParam1[iParam3 /*263*/])->f_182 < uParam2->f_1161[uParam2->f_327[iVar0] /*10*/])
	{
		if (!__LIB_0__::func_75(&((uParam1[iParam3 /*263*/])->f_186)) || __LIB_3__::func_135(&((uParam1[iParam3 /*263*/])->f_186)) >= (uParam1[iParam3 /*263*/])->f_190)
		{
			return true;
		}
	}
	return false;
}

int func_996(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if ((func_238(iVar0) && __LIB_8__::func_951(uParam2->f_327[iVar0])) && uParam2->f_1161[uParam2->f_327[iVar0] /*10*/].f_1[(uParam1[iParam3 /*263*/])->f_182] == 1)
	{
		return 1;
	}
	return 0;
}

int func_997(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (!func_238(iVar0) || (uParam1[iParam3 /*263*/])->f_189 == 0)
	{
		return uParam2->f_1316;
	}
	iVar1 = uParam2->f_1317;
	switch (uParam2->f_491[iVar0])
	{
		case 0:
			iVar1 = uParam2->f_1317;
			break;
		case 1:
			iVar1 = uParam2->f_1318;
			break;
		case 2:
			iVar1 = uParam2->f_1319;
			break;
		case 3:
			iVar1 = uParam2->f_1320;
			break;
		case 4:
			iVar1 = uParam2->f_1321;
			break;
	}
	if ((uParam1[iParam3 /*263*/])->f_71 == 1)
	{
		iVar1 = (iVar1 + uParam2->f_1322);
	}
	return iVar1;
}

int func_998(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	float fVar1;
	if ((uParam1[iParam3 /*263*/])->f_189 == 0)
	{
		return 1;
	}
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	fVar1 = (func_718(uParam2, iVar0, 0) * 100f);
	return (150 + BUILTIN::ROUND(fVar1));
}

int func_999(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = (uParam0[iParam2 /*263*/])->f_197;
	if ((uParam0[iParam2 /*263*/])->f_189 == 0)
	{
		iVar0 = (iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(uParam1->f_1312, uParam1->f_1313));
	}
	else
	{
		iVar0 = (iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(uParam1->f_1314, uParam1->f_1315));
	}
	return iVar0;
}

void func_1000(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (!func_238(iVar0))
	{
		return;
	}
	if ((uParam1[iParam3 /*263*/])->f_189 == 1)
	{
		sVar1 = "LARGE_BITE";
		sVar2 = "LARGE_BITE_ROD";
	}
	else
	{
		sVar1 = "SMALL_BITE";
		sVar2 = "SMALL_BITE_ROD";
	}
	iVar3 = func_1153(uParam1, iParam3);
	if (iVar3 > -1)
	{
		AUDIO::_0xF1C5310FEAA36B48((uParam1[iParam3 /*263*/])->f_79[iVar3], sVar1, __LIB_14__::func_184(iParam3), *uParam0, 0, 0);
		AUDIO::_0x503703EC1781B7D6((uParam1[iParam3 /*263*/])->f_79[iVar3], "FishSize", uParam2->f_409[iVar0]);
	}
	iVar3 = func_1154(uParam1, iParam3);
	if (iVar3 > -1)
	{
		AUDIO::_0xF1C5310FEAA36B48((uParam1[iParam3 /*263*/])->f_84[iVar3], sVar2, func_53(uParam1, iParam3), *uParam0, 0, 0);
		AUDIO::_0x503703EC1781B7D6((uParam1[iParam3 /*263*/])->f_84[iVar3], "FishSize", uParam2->f_409[iVar0]);
	}
}

void func_1001(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;
	if (((uParam1[iParam3 /*263*/])->f_71 == 0 && ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_184(iParam3))) && (uParam1[iParam3 /*263*/])->f_19 > -0.05f)
	{
		iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (func_238(iVar0))
		{
			vVar1 = { func_258(iParam3) };
			vVar4 = { vVar1 };
			vVar4.f_2 = (vVar4.z - 1f);
			vVar7 = { __LIB_0__::func_173(vVar4 - vVar1) };
			if ((uParam1[iParam3 /*263*/])->f_189 == 1)
			{
				fVar10 = uParam0->f_66;
			}
			else
			{
				fVar10 = uParam0->f_67;
			}
			vVar11 = { vVar7 * Vector(fVar10, fVar10, fVar10) };
			ENTITY::APPLY_FORCE_TO_ENTITY(__LIB_14__::func_184(iParam3), 3, vVar11, 0f, 0f, 0f, 0, false, true, true, false, true);
		}
	}
}

bool func_1003(var uParam0, int iParam1)
{
	int iVar0;
	if (func_744(Global_40.f_11184[iParam1]) || func_745(Global_40.f_11184[iParam1]))
	{
		return true;
	}
	if (func_397(Global_40.f_11184[iParam1]))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		if (iVar0 <= (uParam0[iParam1 /*263*/])->f_208)
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

bool func_1004(int iParam0)
{
	if ((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 7) || iParam0 == 8) || iParam0 == 12) || iParam0 == 13) || iParam0 == 14)
	{
		return true;
	}
	return false;
}

void func_1005(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	if ((uParam1[iParam4 /*263*/])->f_206 > 0)
	{
		if (!__LIB_0__::func_75(&((uParam1[iParam4 /*263*/])->f_242)) || __LIB_3__::func_135(&((uParam1[iParam4 /*263*/])->f_242)) > uParam0->f_71)
		{
			__LIB_1__::func_148(&((uParam1[iParam4 /*263*/])->f_242));
			if (func_146(uParam2, iParam3))
			{
				iVar0++;
			}
			else
			{
				iVar0 += 2;
			}
			(uParam1[iParam4 /*263*/])->f_206 = ((uParam1[iParam4 /*263*/])->f_206 - iVar0);
		}
	}
}

bool func_1006(int iParam0)
{
	return Global_1900073.f_26[iParam0 /*30*/].f_2 > (IntToFloat(func_1155(iParam0)) - 0.1f);
}

void func_1007(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam3 == 0 && uParam0->f_676.f_1 == 1)
	{
		return;
	}
	iVar0 = uParam0->f_70;
	if (iParam3 == 0)
	{
		if (func_46(&(uParam0->f_676)))
		{
			iVar0 *= 2;
		}
	}
	else
	{
		iVar0 *= 20;
	}
	if (func_477(uParam1, iParam3) && (!__LIB_0__::func_75(&((uParam1[iParam3 /*263*/])->f_239)) || __LIB_3__::func_135(&((uParam1[iParam3 /*263*/])->f_239)) > iVar0))
	{
		__LIB_1__::func_148(&((uParam1[iParam3 /*263*/])->f_239));
		iVar1 = func_142(uParam0, uParam1, uParam2, iParam3);
		if (func_238(iVar1))
		{
			iVar2 = 1;
			if (iParam3 == 0)
			{
				if (func_1006(iParam3))
				{
					func_110(uParam0, 42, 1, -2, 1);
				}
				if (func_251(iParam3))
				{
					if (__LIB_8__::func_952(iVar1) || func_1004(uParam2->f_327[iVar1]))
					{
						iVar2 += 2;
					}
					else
					{
						iVar2++;
					}
				}
				if ((uParam1[iParam3 /*263*/])->f_209 == 0 && (uParam1[iParam3 /*263*/])->f_206 > 75)
				{
					(uParam1[iParam3 /*263*/])->f_209 = 1;
					(uParam1[iParam3 /*263*/])->f_208++;
				}
				iVar2 = (iVar2 + (uParam1[iParam3 /*263*/])->f_208);
			}
			(uParam1[iParam3 /*263*/])->f_206 = ((uParam1[iParam3 /*263*/])->f_206 + iVar2);
		}
	}
}

int func_1009(int iParam0)
{
	var uVar0;
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		default:
			return 0;
	}
	return RDR_LOCAL_LOAD_S;
}

int func_1010(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		return joaat("FISHING_RESULT_LEGENDARY");
	}
	else if (bParam1)
	{
		return joaat("FISHING_RESULT_RUINED");
	}
	return joaat("FISHING_RESULT_NORMAL");
}

void func_1011(var uParam0, struct<14> Param1)
{
	int iVar0;
	if (!__LIB_0__::func_607(uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1224866)
	{
		if (__LIB_9__::func_325(&(Global_1224866.f_1[iVar0 /*21*/]), uParam0))
		{
			if (Global_1224866.f_1[iVar0 /*21*/].f_6 == 1)
			{
				Global_1224866.f_1[iVar0 /*21*/].f_7 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

int func_1012(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if (!func_238(iVar0))
	{
		return 15;
	}
	return uParam2->f_327[iVar0];
}

int func_1013(var uParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	bVar0 = __LIB_8__::func_952(iParam3);
	iVar1 = func_810(uParam0);
	if (bVar0 == 1)
	{
		return 14;
	}
	else if (iVar1 == 1 || uParam1->f_532[iParam3] == 1)
	{
		return 12;
	}
	else if (func_1004(iParam2))
	{
		return 13;
	}
	return 12;
}

int func_1014(int iParam0)
{
	if (__LIB_4__::func_601())
	{
		return 1;
	}
	if (!func_391(__LIB_9__::func_981(iParam0), 0, 255, 0))
	{
		return 0;
	}
	return 1;
}

float func_1145(int iParam0)
{
	float fVar0;
	fVar0 = 1f;
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("SHOWER"):
			fVar0 = (fVar0 * 1.25f);
			break;
		case joaat("SANDSTORM"):
		case joaat("THUNDER"):
		case joaat("SNOW"):
		case joaat("SLEET"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("HURRICANE"):
		case joaat("SNOWCLEARING"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
		case joaat("GROUNDBLIZZARD"):
			fVar0 = (fVar0 * 0.5f);
			break;
	}
	return fVar0;
}

int func_1150(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("AT_FBLUEGIL");
		case 1:
			return joaat("AT_FBULLHEADCATFISH");
		case 2:
			return joaat("AT_FCHAINPICKEREL");
		case 3:
			return joaat("AT_FCHANNELCATFISH");
		case 4:
			return joaat("AT_FLAKESTURGEON");
		case 5:
			return joaat("AT_FLARGEMOUTHBASS");
		case 6:
			return joaat("AT_FLONGNOSEGAR");
		case 7:
			return joaat("AT_FMUSKIE");
		case 8:
			return joaat("AT_FNORTHERNPIKE");
		case 9:
			return joaat("AT_FPERCH");
		case 10:
			return joaat("AT_FREDFINPICKEREL");
		case 11:
			return joaat("AT_FROCKBASS");
		case 12:
			return joaat("AT_FSMALLMOUTHBASS");
		case 13:
			return joaat("AT_FSALMONSOCKEYE");
		case 14:
			return joaat("AT_FRAINBOWTROUT");
		default:
			break;
	}
	return 0;
}

float func_1151(float fParam0)
{
	if (fParam0 == 4f)
	{
		fParam0 = 5f;
	}
	else if (fParam0 == 3f)
	{
		fParam0 = 4f;
	}
	else if (fParam0 == 2f)
	{
		fParam0 = 3f;
	}
	else if (fParam0 == 1f)
	{
		fParam0 = 2f;
	}
	else if (fParam0 == 0.5f)
	{
		fParam0 = 1f;
	}
	return fParam0;
}

bool func_1152(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = func_142(uParam0, uParam1, uParam2, iParam3);
	if ((func_238(iVar0) && __LIB_8__::func_951(uParam2->f_327[iVar0])) && (uParam1[iParam3 /*263*/])->f_182 >= uParam2->f_1161[uParam2->f_327[iVar0] /*10*/])
	{
		return true;
	}
	return false;
}

int func_1153(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (AUDIO::_0x84848E1C0FC67DBB((uParam0[iParam1 /*263*/])->f_79[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1154(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (AUDIO::_0x84848E1C0FC67DBB((uParam0[iParam1 /*263*/])->f_84[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1155(int iParam0)
{
	return BUILTIN::ROUND(Global_1900073.f_26[iParam0 /*30*/].f_1);
}

