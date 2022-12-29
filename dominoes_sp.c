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
	float fLocal_14 = 0f;
	struct<2805> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 19, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 45, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1034818683, 1022739087, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1053273620, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1101004800, 1109393408, 1048576000, 0, 1, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 5, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 5, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 5, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 5, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1, 28, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1110704128, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 7, 128, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 150, 6, 1, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_2820 = -1;
	var uLocal_2821 = -1;
	var uLocal_2822 = 0;
	var uLocal_2823 = -1;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = -1;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 4;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	struct<14> ScriptParam_0 = { -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0 } ;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 6;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = -1;
	var uScriptParam_31 = 255;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
#endregion
void __EntryFunction__()
{
	float fVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_14 = 0.8f;
	fVar0 = 0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1();
	}
	Local_15.f_2804 = { ScriptParam_0 };
	func_3(__LIB_7__::func_720(ScriptParam_0.f_2), 0);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(ScriptParam_0.f_6, 1.5f);
	__LIB_8__::func_755(&ScriptParam_0);
	__LIB_3__::func_820(__LIB_7__::func_721(__LIB_7__::func_767()), 1);
	__LIB_1__::func_211(1, 128);
	HUD::_HIDE_HUD_COMPONENT(372886907);
	func_9(&Local_15, &ScriptParam_0);
	while (!func_10(&ScriptParam_0))
	{
		CAM::_0x8910C24B7E0046EC();
		if (!__LIB_18__::func_135(1))
		{
			func_1();
		}
		fVar0 = (fVar0 + MISC::GET_FRAME_TIME());
		if (fVar0 > 10f)
		{
			func_1();
		}
		BUILTIN::WAIT(0);
	}
	while (!func_12(__LIB_7__::func_720(ScriptParam_0.f_2), 0))
	{
		CAM::_0x8910C24B7E0046EC();
		if (!__LIB_18__::func_135(1))
		{
			func_1();
		}
		BUILTIN::WAIT(0);
	}
	func_13();
	while (!func_14(&(Local_15.f_1330)))
	{
		CAM::_0x8910C24B7E0046EC();
		if (!__LIB_18__::func_135(1))
		{
			func_1();
		}
		BUILTIN::WAIT(0);
	}
	__LIB_1__::func_211(1, 8388608);
	if (ScriptParam_0.f_13 == 1)
	{
		if (__LIB_8__::func_740(1))
		{
			while (!__LIB_7__::func_722(1))
			{
				__LIB_0__::func_489(0, 0);
				if (!__LIB_18__::func_135(1))
				{
					func_1();
				}
				BUILTIN::WAIT(0);
			}
		}
	}
	if (__LIB_1__::func_77(1, 32))
	{
		while (__LIB_1__::func_77(1, 32))
		{
			if (!__LIB_18__::func_135(1))
			{
				func_1();
			}
			BUILTIN::WAIT(0);
		}
	}
	if (__LIB_1__::func_652())
	{
		__LIB_1__::func_206(ScriptParam_0.f_6, 1.5f, 0);
		AUDIO::START_AUDIO_SCENE("Camp_Poker_and_Dominoes_Scene");
		AUDIO::TRIGGER_MUSIC_EVENT("DOMINOES_START_MUSIC");
	}
	func_21(&(Local_15.f_7), ScriptParam_0.f_10, 0, -1);
	func_22(&Local_15, &ScriptParam_0, 0);
	__LIB_1__::func_211(1, 256);
	if (__LIB_1__::func_652())
	{
		__LIB_0__::func_489(0, 0);
		CAM::_0x718C6ECF5E8CBDD4();
		func_23(&(Local_15.f_1330), &(Local_15.f_1330.f_199[Local_15.f_1330.f_194 /*124*/]), 1065185444 /* Float: 0.99f */);
		BUILTIN::WAIT(0);
	}
	if (__LIB_1__::func_652())
	{
		__LIB_1__::func_206(Local_15.f_1330, 2f, 0);
	}
	while (true)
	{
		if (__LIB_1__::func_652())
		{
			CAM::_0x718C6ECF5E8CBDD4();
		}
		if (func_24(&Local_15))
		{
			func_1();
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (__LIB_1__::func_652())
	{
		AUDIO::STOP_AUDIO_SCENE("Camp_Poker_and_Dominoes_Scene");
		AUDIO::TRIGGER_MUSIC_EVENT("DOMINOES_STOP_MUSIC");
	}
	ENTITY::REMOVE_MODEL_HIDE(Local_15.f_1330, 2f, joaat("P_MUGCOFFEE01X"), 1);
	__LIB_3__::func_820(__LIB_7__::func_721(__LIB_7__::func_767()), 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	func_25(&Local_15, 3);
}

void func_3(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	func_26(iParam0, bParam1);
	func_27();
	CAM::_0x6A4D224FC7643941("table_games_cam");
	AUDIO::_0xD9130842D7226045("MGDOM_Sounds", 1);
	if (!__LIB_1__::func_652())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = __LIB_4__::func_875(1, __LIB_0__::func_12(), iVar0);
			if (iVar1 != 0)
			{
				STREAMING::REQUEST_MODEL(iVar1, false);
			}
			iVar0++;
		}
	}
	HUD::_TEXT_DATABASE_REQUEST("MGDOM");
}

void func_9(var uParam0, var uParam1)
{
	if (uParam0->f_4 == 1)
	{
		return;
	}
	if (__LIB_1__::func_652())
	{
		if (uParam1->f_2 == 71)
		{
			uParam1->f_9 = -103.99f;
			__LIB_1__::func_408(442317566, 1, 0);
		}
		if (uParam1->f_2 == 98)
		{
			uParam1->f_9 = 135f;
			__LIB_1__::func_408(-1949204933, 1, 0);
		}
		if (uParam1->f_2 == 9)
		{
			uParam1->f_9 = 77.47f;
			uParam1->f_6 = { uParam1->f_6 + __LIB_3__::func_509(0f, -0.1f, 0f, uParam1->f_9) };
			__LIB_1__::func_408(-792853067, 1, 0);
			__LIB_0__::func_400(-1828030290);
			__LIB_0__::func_401(827269092);
		}
	}
	uParam0->f_4 = 1;
}

bool func_10(var uParam0)
{
	if (__LIB_1__::func_652())
	{
		if (uParam0->f_2 == 98)
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(719147410))
			{
				return false;
			}
		}
		if (uParam0->f_2 == 9)
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(827269092))
			{
				return false;
			}
		}
		if (uParam0->f_2 == 71)
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(1453569688))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_12(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (!func_52(iParam0, bParam1))
	{
		return false;
	}
	if (!func_53())
	{
		return false;
	}
	if (!CAM::_0xDD0B7C5AE58F721D("table_games_cam"))
	{
		return false;
	}
	if (!AUDIO::_0xD9130842D7226045("MGDOM_Sounds", 1))
	{
		return false;
	}
	if (!AUDIO::_0xD9130842D7226045("HUD_DOMINOS_SOUNDSET", 1))
	{
		return false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("MGDOM"))
	{
		return false;
	}
	if (!__LIB_1__::func_652())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = __LIB_4__::func_875(1, __LIB_0__::func_12(), iVar0);
			if (iVar1 != 0)
			{
				if (!STREAMING::HAS_MODEL_LOADED(iVar1))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

void func_13()
{
	ANIMSCENE::_0xB727A847862CB00A("Dominoes");
}

bool func_14(var uParam0)
{
	if (!ANIMSCENE::_0xFDFC14799373283F("Dominoes"))
	{
		return false;
	}
	func_54(uParam0);
	return true;
}

int func_21(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_55(uParam0);
	if (__LIB_0__::func_2() == -1)
	{
		if (uParam0->f_1)
		{
			uParam0->f_666.f_3 = -1617663169;
		}
		else
		{
			switch (__LIB_0__::func_12())
			{
				case 69:
					uParam0->f_666.f_3 = -1360983891;
					break;
				case 5:
					uParam0->f_666.f_3 = -1234859967;
					break;
				case 38:
					uParam0->f_666.f_3 = -382896522;
					break;
				case 71:
					uParam0->f_666.f_3 = -1617663169;
					break;
				case 98:
					uParam0->f_666.f_3 = -1234859967;
					break;
				case 9:
					uParam0->f_666.f_3 = -382896522;
					break;
				default:
					uParam0->f_666.f_3 = -1234859967;
					break;
			}
		}
	}
	if (iParam1 != -1)
	{
		uParam0->f_666.f_6 = iParam1;
	}
	if (iParam2 != 0)
	{
		uParam0->f_666.f_3 = iParam2;
	}
	if (uParam0->f_666.f_3 == -1234859967)
	{
		uParam0->f_666.f_14[0] = 100;
	}
	else if (uParam0->f_666.f_3 == -382896522)
	{
		uParam0->f_666.f_14[0] = 90;
	}
	else
	{
		uParam0->f_666.f_14[0] = 60;
	}
	if (iParam3 != -1)
	{
		uParam0->f_666.f_14[0] = iParam3;
	}
	MINIGAME::_0x58521E6DCDE97D74(uParam0->f_666.f_4, uParam0->f_666.f_5, uParam0->f_666.f_3);
	func_56(&(uParam0->f_340));
	func_56(&(uParam0->f_14));
	func_57(uParam0);
	__LIB_18__::func_58(1);
	return 1;
}

void func_22(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_2804 = { *uParam1 };
	uParam0->f_6 = 0;
	uParam0->f_1330.f_1003 = uParam1->f_4;
	func_59(&(uParam0->f_1330), uParam1->f_6, uParam1->f_9, uParam1->f_2, 0);
	func_60(&(uParam0->f_2334), uParam0->f_1330.f_6);
	__LIB_3__::func_683(&(uParam0->f_2840), uParam1->f_6, 0f, 0f, 0f, 3f, 3f, 3f, "DomBlockVol");
	uParam0->f_2839 = PED::_0x4C39C95AE5DB1329(uParam0->f_2840, 0, 15);
	POPULATION::_0xB56D41A694E42E86(uParam0->f_2840, 2016, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_2840, 10208, 0, 0, -1, -1, 0);
	uParam0->f_2841 = __LIB_2__::func_261(uParam0->f_2840, "DominoNoHorse", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	if (__LIB_1__::func_652() || __LIB_0__::func_2() == 0)
	{
		func_63(&(uParam0->f_1330));
		func_64(&(uParam0->f_1330));
		func_65(&(uParam0->f_1330));
		__LIB_1__::func_206(uParam1->f_6, 2f, 2);
	}
	if (__LIB_0__::func_2() == -1 && __LIB_1__::func_652())
	{
		func_66(uParam1, &(uParam0->f_7), &(uParam0->f_1330), uParam1->f_13 == 1);
		func_67(&(uParam0->f_7));
	}
}

void func_23(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	char* sVar4;
	iVar3 = 41346;
	sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_00";
	vVar0 = { func_68(uParam0, uParam1) };
	switch (uParam1->f_10)
	{
		case 0:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_00";
			break;
		case 1:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_01";
			break;
		case 2:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_02";
			break;
		case 3:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_03";
			break;
	}
	if (func_69(uParam0, uParam1))
	{
		sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00";
	}
	func_70(uParam0, uParam1, sVar4, "PLAYER_00_IDLE", vVar0, iVar3, iParam2, 0, 1);
}

bool func_24(var uParam0)
{
	uParam0->f_6++;
	CAM::_0x8910C24B7E0046EC();
	GRAPHICS::_0x1C6306E5BC25C29C();
	if (!__LIB_18__::func_135(1))
	{
		func_71(&(uParam0->f_2334));
		return true;
	}
	if (uParam0->f_1330.f_700 == 0)
	{
		func_72(&(uParam0->f_1330));
	}
	if (__LIB_1__::func_652())
	{
		if (uParam0->f_5 == 0)
		{
			if (CLOCK::GET_CLOCK_HOURS() >= 20)
			{
				uParam0->f_5 = 1;
			}
		}
		else
		{
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
		}
	}
	func_73(uParam0);
	func_74(uParam0);
	func_75(uParam0);
	func_76(uParam0, uParam0->f_7.f_14);
	func_77(&(uParam0->f_7));
	func_78(uParam0, &(uParam0->f_7));
	func_79(&(uParam0->f_1330), uParam0);
	func_80(uParam0, &(uParam0->f_7));
	if (func_81(&(uParam0->f_2334)))
	{
		func_82(uParam0);
	}
	if (func_83(uParam0))
	{
		if (__LIB_0__::func_2() == 0)
		{
			if (MINIGAME::_MINIGAME_IS_REQUEST_PENDING(&(uParam0->f_7.f_1300[0 /*4*/])))
			{
				return false;
			}
		}
		if (__LIB_0__::func_2() == -1)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
		if (uParam0->f_2334.f_238)
		{
		}
		func_84(&(uParam0->f_2334), &(uParam0->f_7));
		return true;
	}
	return false;
}

void func_25(var uParam0, int iParam1)
{
	int iVar0;
	if (uParam0->f_2839 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_2839, false);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2840))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_2840);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_2840);
		__LIB_1__::func_544(uParam0->f_2840);
	}
	if (__LIB_1__::func_652() && uParam0->f_5)
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(4000);
	}
	if (__LIB_0__::func_2() == 0)
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
	}
	__LIB_4__::func_872(1);
	if (iParam1 != 1 && !__LIB_1__::func_652())
	{
		iVar0 = 0;
		while (iVar0 < 28)
		{
			__LIB_12__::func_297(1, uParam0->f_1330.f_746[iVar0 /*8*/].f_1, iVar0, uParam0->f_1330.f_746[iVar0 /*8*/].f_3, 0);
			uParam0->f_1330.f_746[iVar0 /*8*/].f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			__LIB_12__::func_297(1, uParam0->f_1330.f_971[iVar0], (28 + iVar0), 0, 0);
			uParam0->f_1330.f_971[iVar0] = 0;
			iVar0++;
		}
	}
	func_88(uParam0);
	__LIB_0__::func_172(uParam0->f_2840);
	func_90(&(uParam0->f_2334));
	func_91(&(uParam0->f_1330), iParam1);
	func_92(__LIB_7__::func_720(uParam0->f_2804.f_2), 0);
	func_93(&(uParam0->f_7));
	__LIB_1__::func_283(&(Global_1359489.f_40), 1);
	__LIB_19__::func_158(&(uParam0->f_2804), 1, 0);
}

void func_26(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		STREAMING::REQUEST_MODEL(__LIB_7__::func_725(0, iParam0), false);
		STREAMING::REQUEST_MODEL(__LIB_7__::func_725(28, iParam0), false);
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		STREAMING::REQUEST_MODEL(__LIB_7__::func_725(iVar0, iParam0), false);
		iVar0++;
	}
}

void func_27()
{
	STREAMING::_REQUEST_MOVE_NETWORK_DEF("SCRIPT_MINI_GAME_DOMINOES");
	STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT");
	STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_00");
	STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_01");
	STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_02");
	STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_03");
	STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00");
	STREAMING::REQUEST_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_00");
	STREAMING::REQUEST_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_01");
	STREAMING::REQUEST_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_02");
	STREAMING::REQUEST_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_03");
	STREAMING::REQUEST_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00");
	STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES");
}

bool func_52(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_7__::func_725(0, iParam0)))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_7__::func_725(28, iParam0)))
		{
			return false;
		}
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_7__::func_725(iVar0, iParam0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_53()
{
	if (!STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED("SCRIPT_MINI_GAME_DOMINOES"))
	{
		return false;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_00"))
	{
		return false;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_01"))
	{
		return false;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_02"))
	{
		return false;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_03"))
	{
		return false;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_00"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_01"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_02"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_03"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES"))
	{
		return false;
	}
	return true;
}

void func_54(var uParam0)
{
	if (uParam0->f_742 == -1)
	{
		uParam0->f_742 = ANIMSCENE::_0xA1300DE03E5D1973("Dominoes");
	}
}

void func_55(var uParam0)
{
	uParam0->f_666.f_4 = 40;
	uParam0->f_666.f_5 = 40;
	uParam0->f_666.f_6 = 100;
	uParam0->f_666.f_7 = 30;
	uParam0->f_666.f_8 = 300;
	uParam0->f_666.f_14[0] = 60;
	uParam0->f_666.f_3 = -1360983891;
}

void func_56(var uParam0)
{
	int iVar0;
	*uParam0 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_149)
	{
		func_113(&(uParam0->f_149[iVar0 /*44*/]));
		iVar0++;
	}
	uParam0->f_6.f_142 = 0;
}

void func_57(var uParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		MINIGAME::_0xF6DE98516FD3AC9B();
	}
	func_114(&(uParam0->f_340));
	func_114(&(uParam0->f_14));
}

void func_59(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	int iVar9;
	*uParam0 = { vParam1 };
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = __LIB_7__::func_720(iParam5);
	uParam0->f_995 = "OJDominoValid";
	uParam0->f_996 = "OJDominoBlur";
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_118(&(uParam0->f_199[iVar0 /*124*/]), iVar0);
		func_119(1, vParam1, iParam4, iVar0, &vVar1, &fVar7);
		vVar1.f_2 = (vVar1.z + 0.01f);
		iVar9 = func_120(1, vParam1, iParam4, iVar0, 1051931443 /* Float: 0.35f */);
		if (ENTITY::DOES_ENTITY_EXIST(iVar9))
		{
			uParam0->f_990[iVar0] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar1, joaat("MINIGAME_DOMINOES_PLAYER"), 0.5f, 0, false);
			vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar9, vVar1) };
			fVar8 = (ENTITY::GET_ENTITY_HEADING(iVar9) - fVar7);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_990[iVar0]))
			{
				TASK::_SET_SCENARIO_POINT_COORDS(uParam0->f_990[iVar0], vVar4, false);
				TASK::_SET_SCENARIO_POINT_HEADING(uParam0->f_990[iVar0], fVar8, false);
			}
			else
			{
				uParam0->f_990[iVar0] = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iVar9, joaat("MINIGAME_DOMINOES_PLAYER"), vVar4, fVar8, 0, 0, 0);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_990[iVar0]))
				{
					MISC::SET_BIT(&(uParam0->f_989), iVar0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		func_121(uParam0, iVar0, 28, 1, iVar0, -1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_981)
	{
		uParam0->f_981[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_986 = 0;
	if (bParam6)
	{
		func_63(uParam0);
		func_64(uParam0);
		func_65(uParam0);
	}
	__LIB_4__::func_812(&Global_1899750, vParam1 - Vector(2f, 0f, 0f));
	uParam0->f_186 = MISC::GET_RANDOM_FLOAT_IN_RANGE(60f, 120f);
	func_123(uParam0);
	GRAPHICS::_0xFAAD23DE7A54FC14();
}

void func_60(var uParam0, int iParam1)
{
	int iVar0;
	*uParam0 = 1;
	__LIB_8__::func_757(&(uParam0->f_240));
	__LIB_7__::func_859(&(uParam0->f_240), 1);
	func_126(uParam0);
	func_127(uParam0);
	func_128(&(uParam0->f_1), 1, 0, iParam1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_129(&(uParam0->f_1), iVar0, "avatar_generic", 0, 1, 0);
		iVar0++;
	}
	func_130(&(uParam0->f_1));
	uParam0->f_409 = 0;
	StringCopy(&(uParam0->f_410), "table_games_cam", 64);
	StringCopy(&(uParam0->f_410.f_8), "CAMERA_TABLE_GAMES_REQUEST", 64);
	uParam0->f_410.f_16 = -832392197;
	uParam0->f_438 = { 0f, 0f, fLocal_14 };
}

void func_63(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar4 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar4))
	{
		__LIB_3__::func_685(&iVar0, *uParam0 + Vector(fLocal_14, 0f, 0f), 0f, 0f, 0f, 1f, 1f, 1f);
		iVar2 = ENTITY::_0x886171A12F400B89(iVar0, iVar4, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar4));
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("P_DOMINORACK01X") || func_133(iVar1))
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
					{
						ENTITY::DETACH_ENTITY(iVar1, true, true);
					}
					OBJECT::DELETE_OBJECT(&iVar1);
				}
			}
			iVar3++;
		}
		__LIB_0__::func_172(iVar0);
		ITEMSET::_CLEAR_ITEMSET(iVar4);
		ITEMSET::DESTROY_ITEMSET(iVar4);
	}
}

void func_64(var uParam0)
{
	int iVar0;
	func_134(uParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_135(uParam0, iVar0);
		iVar0++;
	}
}

void func_65(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	iVar7 = __LIB_7__::func_725(0, uParam0->f_6);
	func_136(uParam0);
	iVar0 = 0;
	while (iVar0 < 28)
	{
		func_137(uParam0, iVar0, &vVar1, &vVar4, 0.05f, 0);
		uParam0->f_746[iVar0 /*8*/].f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar7, vVar1, false, true, false, true);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_746[iVar0 /*8*/].f_1, vVar4, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iVar0 /*8*/].f_1, true);
		func_121(uParam0, iVar0, 28, 1, iVar0, -1);
		iVar0++;
	}
}

void func_66(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_23[iVar0]))
		{
			if (PED::IS_PED_A_PLAYER(uParam0->f_23[iVar0]))
			{
			}
			else if (__LIB_0__::func_407(uParam0->f_23[iVar0]))
			{
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_23[iVar0]))
		{
			if (PED::IS_PED_A_PLAYER(uParam0->f_23[iVar0]))
			{
				if (func_139(uParam2, iVar0, uParam0->f_23[iVar0], 255, 0, 0))
				{
					if (func_140(&(uParam0->f_23[iVar0])))
					{
						func_141(uParam2, iVar0);
					}
					else if (!bParam3)
					{
						func_143(uParam2, iVar0, __LIB_1__::func_985());
					}
					else
					{
						func_141(uParam2, iVar0);
					}
					func_144(uParam1, iVar0, 1);
				}
			}
			else if (__LIB_0__::func_407(uParam0->f_23[iVar0]))
			{
				iVar1 = __LIB_4__::func_656(uParam0->f_23[iVar0]);
				if (!iVar1 == -1)
				{
					if (!__LIB_0__::func_699(iVar1))
					{
						func_147(iVar1, 1, 0, 0f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1);
					}
					uParam2->f_1002 = iVar1;
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[iVar0]))
					{
						if (func_139(uParam2, iVar0, uParam0->f_23[iVar0], 255, 0, 0))
						{
							PED::SET_PED_RESET_FLAG(uParam0->f_23[iVar0], 264, true);
							if (func_140(&(uParam0->f_23[iVar0])))
							{
								func_141(uParam2, iVar0);
							}
							else if (!bParam3)
							{
								func_143(uParam2, iVar0, __LIB_1__::func_985());
							}
							else
							{
								func_141(uParam2, iVar0);
							}
							func_144(uParam1, iVar0, 0);
							func_23(uParam2, &(uParam2->f_199[iVar0 /*124*/]), 1065185444 /* Float: 0.99f */);
						}
					}
				}
			}
			else if (func_139(uParam2, iVar0, uParam0->f_23[iVar0], 255, 0, 0))
			{
				if (func_140(&(uParam0->f_23[iVar0])))
				{
					func_141(uParam2, iVar0);
				}
				else if (!bParam3)
				{
					func_143(uParam2, iVar0, __LIB_1__::func_985());
				}
				else
				{
					func_141(uParam2, iVar0);
				}
				func_144(uParam1, iVar0, 0);
			}
		}
		iVar0++;
	}
}

void func_67(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	uParam0->f_13 = MISC::ABSI(MISC::GET_FRAME_COUNT());
	MISC::SET_RANDOM_SEED(uParam0->f_13);
	uParam0->f_699 = 0;
	uParam0->f_698 = -1;
	uParam0->f_14 = -1;
	func_57(uParam0);
	func_148(&(uParam0->f_684), 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(&(uParam0->f_14), iVar0))
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 7)
			{
				iVar2 = func_150(&(uParam0->f_684), uParam0->f_699);
				func_151(iVar2, &(uParam0->f_14.f_149[iVar0 /*44*/].f_4[iVar1 /*2*/]), &(uParam0->f_14.f_149[iVar0 /*44*/].f_4[iVar1 /*2*/].f_1));
				uParam0->f_699++;
				iVar1++;
			}
			uParam0->f_14.f_149[iVar0 /*44*/] = iVar0;
			uParam0->f_14.f_149[iVar0 /*44*/].f_4.f_39 = 7;
			uParam0->f_14.f_149[iVar0 /*44*/].f_3 = uParam0->f_14.f_149[iVar0 /*44*/].f_4.f_39;
			func_152(uParam0, iVar0, uParam0->f_14.f_149[iVar0 /*44*/].f_2);
		}
		iVar0++;
	}
	uParam0->f_701 = 0;
}

Vector3 func_68(var uParam0, var uParam1)
{
	switch (uParam1->f_9)
	{
		case 0:
			return 0f, 0f, uParam0->f_3;
		case 1:
			return 0f, 0f, (uParam0->f_3 + 180f);
		case 2:
			return 0f, 0f, (uParam0->f_3 - 90f);
		case 3:
			return 0f, 0f, (uParam0->f_3 + 90f);
		default:
			break;
	}
	return 0f, 0f, uParam0->f_3;
}

bool func_69(var uParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_12))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(uParam1->f_12))
	{
		return false;
	}
	if (uParam0->f_189)
	{
		return true;
	}
	return !PED::IS_PED_MALE(uParam1->f_12);
}

void func_70(var uParam0, var uParam1, char* sParam2, char* sParam3, vector3 vParam4, int iParam7, float fParam8, bool bParam9, int iParam10)
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_12__::func_475(uParam1);
	bVar1 = TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0);
	if (fParam8 != 0f || bParam9)
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, sParam2, sParam3, *uParam0, vParam4, 1000f, -8f, -1, iParam7, fParam8, 2, iParam10, uParam1->f_2);
	}
	else
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, sParam2, sParam3, *uParam0, vParam4, 8f, -8f, -1, iParam7, 0f, 2, iParam10, uParam1->f_2);
	}
	if (bVar1)
	{
	}
}

void func_71(var uParam0)
{
	if (uParam0->f_409 == 1)
	{
		if (CAM::_0x927B810E43E99932(&(uParam0->f_410)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_410));
		}
		uParam0->f_409 = 0;
	}
	if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1 && uParam0->f_407 == 1)
	{
		GRAPHICS::_0xBB6C707F20D955D4(0.25f);
	}
	uParam0->f_407 = 0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_437))
	{
		CAM::DESTROY_CAM(uParam0->f_437, false);
	}
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	switch (uParam0->f_699)
	{
		case 0:
			if (!PED::_0x3C67506996001F5E())
			{
				PED::_0x2DF9038C90AD5264(*uParam0, 10f, 10f, 19, 0.5f, 1000, 0);
				uParam0->f_701 = 1;
				uParam0->f_699++;
			}
			break;
		case 1:
			if (PED::_0xF445DE8DA80A1792())
			{
				PED::_0xFEE4A5459472A9F8();
				uParam0->f_701 = 0;
				uParam0->f_699 = 0;
			}
			if (PED::_0xA586FBEB32A53DBB())
			{
				uParam0->f_702 = PED::_0xA635C11B8C44AFC2();
				iVar0 = 0;
				while (iVar0 < uParam0->f_703)
				{
					uParam0->f_703[iVar0 /*3*/] = { 0f, 0f, 0f };
					iVar0++;
				}
				if (uParam0->f_702 >= uParam0->f_703)
				{
					uParam0->f_702 = uParam0->f_703;
				}
				iVar1 = 0;
				iVar0 = 0;
				while (iVar0 < uParam0->f_702)
				{
					PED::_0x280C7E3AC7F56E90(iVar0, &vVar2, &(vVar2.f_1), &(vVar2.f_2));
					vVar5 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(vVar2) };
					fVar8 = BUILTIN::VDIST(vVar5, vVar2);
					if (fVar8 > 3f)
					{
						uParam0->f_703[iVar1 /*3*/] = { vVar2 };
						iVar1++;
					}
					iVar0++;
				}
				uParam0->f_702 = iVar1;
				PED::_0xFEE4A5459472A9F8();
				uParam0->f_701 = 0;
				uParam0->f_699++;
			}
			break;
		case 2:
			uParam0->f_700 = 1;
			return 1;
	}
	return 0;
}

void func_73(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_4__::func_874() != 1 || __LIB_0__::func_2() == 0)
	{
		return;
	}
	if (__LIB_1__::func_652())
	{
		return;
	}
	iVar1 = __LIB_4__::func_870();
	if (iVar1 == 1)
	{
		iVar0 = __LIB_7__::func_728();
		if (func_139(&(uParam0->f_1330), iVar0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_ID(), 0, 0))
		{
			func_143(&(uParam0->f_1330), iVar0, 0);
		}
		func_144(&(uParam0->f_7), uParam0->f_1330.f_194, 1);
		__LIB_4__::func_871(2);
	}
	if (iVar1 == 4)
	{
		func_158(&(uParam0->f_1330), &(uParam0->f_7));
		func_63(&(uParam0->f_1330));
		func_64(&(uParam0->f_1330));
		func_65(&(uParam0->f_1330));
		func_67(&(uParam0->f_7));
		__LIB_4__::func_871(5);
		__LIB_4__::func_877();
		__LIB_4__::func_878();
	}
}

int func_74(var uParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		return 0;
	}
	return 0;
}

void func_75(var uParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		func_161(&(uParam0->f_7), &(uParam0->f_7.f_14), &(uParam0->f_7.f_340), uParam0->f_1330.f_194);
		uParam0->f_7.f_340 = { uParam0->f_7.f_14 };
		return;
	}
}

void func_76(var uParam0, int iParam1)
{
	if (uParam0->f_7.f_1299 != 0)
	{
		if (!func_149(&(uParam0->f_7.f_14), iParam1))
		{
			func_162(&(uParam0->f_7), 0);
			func_163(&(uParam0->f_7));
			return;
		}
	}
	if (func_164(&(uParam0->f_7.f_14), uParam0->f_7.f_666.f_3, uParam0->f_7.f_666.f_14[0]))
	{
		func_162(&(uParam0->f_7), 0);
		func_163(&(uParam0->f_7));
		return;
	}
	if (func_149(&(uParam0->f_7.f_14), iParam1))
	{
		if (uParam0->f_7.f_14.f_149[iParam1 /*44*/].f_3 == 0)
		{
			func_162(&(uParam0->f_7), 0);
			func_163(&(uParam0->f_7));
			return;
		}
	}
	switch (uParam0->f_7.f_1299)
	{
		case 1:
			if (iParam1 == uParam0->f_1330.f_194 && uParam0->f_7.f_1)
			{
				func_162(&(uParam0->f_7), 5);
			}
			else
			{
				func_162(&(uParam0->f_7), 2);
			}
			break;
		case 2:
			if (!func_165(&(uParam0->f_7), iParam1))
			{
				func_166(&(uParam0->f_7), iParam1);
			}
			func_167(&(uParam0->f_7), iParam1);
			func_162(&(uParam0->f_7), 3);
			break;
		case 3:
			if (func_165(&(uParam0->f_7), iParam1))
			{
				if (iParam1 != uParam0->f_1330.f_194)
				{
					func_168(&(uParam0->f_7), iParam1);
				}
				func_162(&(uParam0->f_7), 4);
			}
			else
			{
				func_162(&(uParam0->f_7), 5);
			}
			break;
		case 4:
			if (iParam1 == uParam0->f_1330.f_194)
			{
				if (uParam0->f_7.f_14.f_3 != 0)
				{
					return;
				}
			}
			func_162(&(uParam0->f_7), 6);
			break;
		case 5:
			if (!func_164(&(uParam0->f_7.f_14), uParam0->f_7.f_666.f_3, uParam0->f_7.f_666.f_14[0]))
			{
				func_169(&(uParam0->f_7), iParam1, uParam0->f_1330.f_194);
			}
			func_162(&(uParam0->f_7), 6);
			break;
		case 6:
			if (__LIB_0__::func_773(&(uParam0->f_7)))
			{
				func_163(&(uParam0->f_7));
				if (!func_164(&(uParam0->f_7.f_14), uParam0->f_7.f_666.f_3, uParam0->f_7.f_666.f_14[0]))
				{
					func_171(&(uParam0->f_7));
				}
				func_162(&(uParam0->f_7), 0);
			}
			break;
	}
}

void func_77(var uParam0)
{
	uParam0->f_694 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

void func_78(var uParam0, var uParam1)
{
	struct<11> Var0;
	Var0.f_1 = -1;
	Var0.f_2 = 6;
	if (*uParam0)
	{
		return;
	}
	if (!func_172(uParam1, &Var0))
	{
		return;
	}
	if (uParam0->f_1330.f_196)
	{
		func_173(uParam1, &Var0);
		return;
	}
	switch (Var0)
	{
		case 4:
			if (func_174(uParam0, uParam1, &Var0))
			{
				uParam1->f_696 = -1;
				func_175(uParam1, 1);
				func_176(uParam1, -1);
				func_173(uParam1, &Var0);
			}
			break;
		case 5:
			func_176(uParam1, -1);
			func_175(uParam1, 1);
			uParam1->f_696 = -1;
			if (Var0.f_1 == uParam0->f_1330.f_194 && __LIB_0__::func_2() == -1)
			{
				__LIB_8__::func_758(uParam1->f_666.f_6, 0);
			}
			func_173(uParam1, &Var0);
			break;
		case 12:
			if (func_178(uParam0, uParam1, &Var0))
			{
				func_173(uParam1, &Var0);
			}
			break;
		case 14:
			if (func_179(uParam0, uParam1, &Var0))
			{
				func_173(uParam1, &Var0);
			}
			break;
		case 13:
			if (func_180(uParam0, uParam1, &Var0))
			{
				func_173(uParam1, &Var0);
			}
			break;
		case 15:
			if (func_181(uParam0, uParam1, &Var0))
			{
				func_173(uParam1, &Var0);
			}
			break;
		case 7:
			func_182(&(uParam0->f_2334), Var0.f_1);
			func_183(&(uParam0->f_1330), Var0.f_1, 0);
			func_184(&(uParam0->f_1330), Var0.f_1, 0, 0, __LIB_0__::func_2() != -1, 0);
			func_173(uParam1, &Var0);
			break;
		case 1:
			func_185(&(uParam0->f_2334), uParam1);
			func_186(&(uParam0->f_2334), Var0.f_2[0]);
			func_173(uParam1, &Var0);
			break;
		case 16:
			func_187(&(uParam0->f_2334), Var0.f_1, Var0.f_2[0], Var0.f_2[1]);
			func_173(uParam1, &Var0);
			break;
		case 3:
			func_188(&(uParam0->f_2334), Var0.f_1, Var0.f_2[0]);
			func_173(uParam1, &Var0);
			break;
		case 26:
			func_189(&(uParam0->f_2334), Var0.f_2[0]);
			func_173(uParam1, &Var0);
			break;
		case 2:
			func_190(&(uParam0->f_2334), Var0.f_1, Var0.f_10);
			func_173(uParam1, &Var0);
			break;
		case 8:
			func_191(&(uParam0->f_2334));
			func_192(&(uParam0->f_2334), 18, 0, 5000);
			func_173(uParam1, &Var0);
			break;
		case 9:
			func_191(&(uParam0->f_2334));
			func_192(&(uParam0->f_2334), 19, 0, 5000);
			func_173(uParam1, &Var0);
			break;
		case 17:
			func_191(&(uParam0->f_2334));
			if (Var0.f_2[0] == -1)
			{
				func_194(&(uParam0->f_2334), MISC::_CREATE_VAR_STRING(10, "MGDOM_HLP_GOFIRST", func_193(&(uParam0->f_2334), Var0.f_1)), 0, 5000);
			}
			else
			{
				func_194(&(uParam0->f_2334), MISC::_CREATE_VAR_STRING(10, "MGDOM_HLP_GOFIRSTD", func_193(&(uParam0->f_2334), Var0.f_1)), 0, 5000);
			}
			func_173(uParam1, &Var0);
			break;
		case 21:
			if (uParam1->f_701 >= func_195(&(uParam1->f_14)))
			{
				func_173(uParam1, &Var0);
				return;
			}
			func_196(uParam1, (6 + Var0.f_1));
			func_197(&(uParam0->f_2334), Var0.f_1);
			func_198(&(uParam0->f_2334), 0);
			if (__LIB_0__::func_2() == -1)
			{
				func_162(&(uParam0->f_7), 2);
			}
			func_173(uParam1, &Var0);
			break;
		case 22:
			if (uParam1->f_701 >= func_195(&(uParam1->f_14)))
			{
				func_173(uParam1, &Var0);
				return;
			}
			func_196(uParam1, (6 + Var0.f_1));
			func_198(&(uParam0->f_2334), 0);
			func_197(&(uParam0->f_2334), Var0.f_1);
			if (__LIB_0__::func_2() == -1)
			{
				func_162(&(uParam0->f_7), 2);
			}
			func_173(uParam1, &Var0);
			break;
		case 24:
			func_199(&(uParam0->f_2334), &Var0);
			func_173(uParam1, &Var0);
			break;
		case 25:
			if (Var0.f_1 != -1)
			{
				uParam0->f_2334.f_204[Var0.f_1 /*7*/].f_6 = Var0.f_10;
			}
			func_173(uParam1, &Var0);
			break;
		case 18:
			if (func_200(uParam0, uParam1, &Var0))
			{
				func_173(uParam1, &Var0);
			}
			break;
		case 19:
			if (func_201(uParam0, uParam1, &Var0))
			{
				func_173(uParam1, &Var0);
			}
			break;
		case 20:
			if (func_202(uParam0, uParam1, &Var0))
			{
				func_173(uParam1, &Var0);
			}
			break;
		case 27:
			func_67(uParam1);
			func_173(uParam1, &Var0);
			break;
		default:
			func_173(uParam1, &Var0);
			break;
	}
}

void func_79(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_199)
	{
		func_203(&(uParam0->f_199[iVar0 /*124*/]), uParam0, uParam1);
		iVar0++;
	}
	if (CAM::_0xA24C1D341C6E0D53(0, 0, 0))
	{
		if (func_204(uParam0, uParam0->f_194))
		{
			uParam0->f_199[uParam0->f_194 /*124*/].f_18.f_19 = 1;
		}
	}
	func_205(uParam0);
	func_206(uParam0);
	func_207(uParam0, &(uParam1->f_7));
}

void func_80(var uParam0, var uParam1)
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE() && uParam0->f_1330.f_196 == 0)
	{
		if (uParam0->f_2816 == 0)
		{
			PAD::_SET_CONTROL_CONTEXT(4, joaat("MINIGAMEDOMINOES"));
		}
		else
		{
			PAD::_SET_CONTROL_CONTEXT(4, joaat("STICKYFEED"));
		}
	}
	uParam0->f_2334.f_347 = uParam0->f_2334.f_348;
	uParam0->f_2334.f_348 = PAD::_IS_USING_KEYBOARD(0);
	uParam0->f_2334.f_350 = uParam0->f_2334.f_349;
	uParam0->f_2334.f_352 = uParam0->f_2334.f_351;
	uParam0->f_2334.f_349 = PAD::GET_DISABLED_CONTROL_NORMAL(2, joaat("INPUT_CURSOR_X"));
	uParam0->f_2334.f_351 = PAD::GET_DISABLED_CONTROL_NORMAL(2, joaat("INPUT_CURSOR_Y"));
	uParam0->f_2334.f_346 = (uParam0->f_2334.f_350 != uParam0->f_2334.f_349 || uParam0->f_2334.f_352 != uParam0->f_2334.f_351);
	if (uParam0->f_2334.f_402)
	{
		CAM::SET_GAMEPLAY_OBJECT_HINT(uParam0->f_1330.f_971[uParam0->f_1330.f_194], 0f, 0f, 0f, true, 2000, 2000, 2000);
		uParam0->f_2334.f_402 = 0;
	}
	if (uParam0->f_2334.f_347 == 1 && uParam0->f_2334.f_348 == 0)
	{
	}
	if (uParam0->f_2334.f_347 == 0 && uParam0->f_2334.f_348 == 1)
	{
	}
	uParam0->f_2334.f_404 = uParam0->f_2334.f_403;
	uParam0->f_2334.f_403 = uParam0->f_2334.f_348;
	uParam0->f_2334.f_448 = 0;
	if (__LIB_0__::func_139(uParam0->f_2334.f_463))
	{
		if (uParam0->f_2334.f_348)
		{
			uParam0->f_2334.f_448 = PAD::IS_DISABLED_CONTROL_PRESSED(2, joaat("INPUT_PC_FREE_LOOK"));
		}
	}
	if (uParam0->f_2334.f_348 == 1 && uParam0->f_2334.f_448 == 0)
	{
		if (uParam0->f_2334.f_234 == uParam0->f_1330.f_194)
		{
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_UD"), false);
		}
		_NAMESPACE30::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		_NAMESPACE30::_SET_MOUSE_CURSOR_SPRITE(0);
	}
	if (uParam0->f_2334.f_446)
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_2334.f_437, false);
		uParam0->f_2334.f_446 = 0;
	}
	uParam0->f_2334.f_407 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (uParam0->f_1330.f_198 == 4)
	{
		uParam0->f_2334.f_407 = 0;
	}
	if (uParam0->f_2334.f_407 != uParam0->f_2334.f_408)
	{
		if (uParam0->f_2334.f_407)
		{
			GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("Odd_Jobs_Dominoes_First_Person", 1E-08f);
		}
		else
		{
			GRAPHICS::_0xBB6C707F20D955D4(1E-08f);
		}
		uParam0->f_2334.f_408 = uParam0->f_2334.f_407;
	}
	if (func_209(&(uParam0->f_1330), 19) || uParam0->f_1330.f_198 == 4)
	{
		func_210(&(uParam0->f_2334), 1, 1);
		func_211(&(uParam0->f_2334));
		func_212(&(uParam0->f_2334.f_1));
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_PLAYER_MENU"), false);
	func_213(&(uParam0->f_2334));
	func_214(uParam0, &(uParam0->f_2334));
	func_215(&(uParam0->f_2334), &(uParam0->f_1330));
	func_216(&(uParam0->f_2334), &(uParam0->f_1330));
	func_217(&(uParam0->f_2334.f_1));
	if (__LIB_1__::func_77(1, 2))
	{
		__LIB_7__::func_859(&(uParam0->f_2334.f_240), 0);
	}
	else if (__LIB_7__::func_860(&(uParam0->f_2334.f_240), 1))
	{
		uParam0->f_2334.f_238 = 1;
		uParam1->f_690 = 2;
	}
	if (!func_219(&(uParam0->f_1330)))
	{
		func_211(&(uParam0->f_2334));
		func_210(&(uParam0->f_2334), 1, 1);
		return;
	}
	if (uParam0->f_2334.f_240.f_3 == 1 || __LIB_7__::func_729())
	{
		func_210(&(uParam0->f_2334), 1, 1);
		func_211(&(uParam0->f_2334));
		func_191(&(uParam0->f_2334));
		return;
	}
	switch (uParam1->f_4)
	{
		case 4:
			if (__LIB_0__::func_2() == -1)
			{
				func_221(uParam0, &(uParam0->f_2334), uParam1);
			}
			break;
		case 3:
			func_222(uParam0, &(uParam0->f_2334), uParam1);
			break;
		case 17:
			func_223(uParam0, &(uParam0->f_2334), uParam1);
			break;
		case 16:
			func_224(uParam0, &(uParam0->f_2334), uParam1);
			break;
		case 14:
			func_225(uParam0, &(uParam0->f_2334), uParam1);
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			func_226(uParam0, &(uParam0->f_2334), uParam1);
			break;
	}
}

bool func_81(var uParam0)
{
	return (__LIB_8__::func_748(&(uParam0->f_240)) || uParam0->f_165 == 10);
}

void func_82(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (uParam0->f_3 == 1)
	{
		return;
	}
	uParam0->f_3 = 1;
	func_228(&(uParam0->f_2334.f_240), 0);
	if (__LIB_0__::func_2() == 0)
	{
		iVar1 = MINIGAME::_0x644439B5387EE57E(PLAYER::PLAYER_ID(), &uVar2);
		if (iVar1 == 355424894)
		{
			func_229(&(uParam0->f_7), 0);
		}
	}
	if (uParam0->f_1330.f_740 == 1)
	{
		uParam0->f_1330.f_741 = 1;
	}
	if (uParam0->f_1330.f_190 == 0)
	{
		func_71(&(uParam0->f_2334));
	}
	func_210(&(uParam0->f_2334), 1, 1);
	func_230(&(uParam0->f_1330));
	func_191(&(uParam0->f_2334));
	func_231(&(uParam0->f_2334), 0);
	func_232(&(uParam0->f_1330), 1);
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_204(&(uParam0->f_1330), iVar0))
			{
				if (func_233(&(uParam0->f_1330.f_199[iVar0 /*124*/])))
				{
					func_234(&(uParam0->f_1330), iVar0, uParam0->f_1330.f_199[iVar0 /*124*/].f_18.f_22);
				}
			}
			iVar0++;
		}
		if (__LIB_1__::func_652())
		{
			if (uParam0->f_1330.f_190)
			{
				func_235(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/]));
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!func_236(&(uParam0->f_1330.f_199[iVar0 /*124*/]), 19))
				{
					func_184(&(uParam0->f_1330), iVar0, 0, 0, 0, 0);
				}
				iVar0++;
			}
		}
		else
		{
			if (uParam0->f_1330.f_190)
			{
				func_235(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/]));
			}
			func_184(&(uParam0->f_1330), uParam0->f_1330.f_194, 0, 0, 0, 0);
		}
	}
	else
	{
		func_184(&(uParam0->f_1330), uParam0->f_1330.f_194, 0, 0, 1, 0);
	}
	__LIB_7__::func_859(&(uParam0->f_2334.f_240), 0);
	func_212(&(uParam0->f_2334.f_1));
}

bool func_83(var uParam0)
{
	return uParam0->f_1330.f_196 == 1;
}

void func_84(var uParam0, var uParam1)
{
	switch (uParam1->f_690)
	{
		case 1:
			func_194(uParam0, "MG_BUYIN_EXPIRED", 0, 10000);
			break;
		case 3:
		case 4:
			func_194(uParam0, "MG_GAME_CANNED", 0, 10000);
			break;
		case 5:
			func_194(uParam0, "MGDOM_HLP_NOPLAYERS", 0, 10000);
			break;
	}
}

void func_88(var uParam0)
{
	if (uParam0->f_4 == 0)
	{
		return;
	}
	if (__LIB_1__::func_652())
	{
		if (__LIB_0__::func_12() == 9)
		{
			__LIB_1__::func_408(-792853067, 0, 0);
		}
		if (__LIB_0__::func_12() == 98)
		{
			__LIB_1__::func_408(-1949204933, 0, 0);
		}
		if (__LIB_0__::func_12() == 71)
		{
			__LIB_1__::func_408(442317566, 0, 0);
		}
	}
	uParam0->f_4 = 0;
}

void func_90(var uParam0)
{
	*uParam0 = 0;
	func_127(uParam0);
	func_71(uParam0);
	func_191(uParam0);
	func_210(uParam0, 1, 1);
	func_212(&(uParam0->f_1));
	__LIB_8__::func_757(&(uParam0->f_240));
}

void func_91(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_238(uParam0, iVar0, iParam1);
		if (MISC::IS_BIT_SET(uParam0->f_989, iVar0))
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_990[iVar0]))
			{
				TASK::_DELETE_SCENARIO_POINT(uParam0->f_990[iVar0]);
			}
		}
		__LIB_0__::func_172(uParam0->f_976[iVar0]);
		iVar0++;
	}
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_7__::func_769(1, 0, 0);
	}
	if (__LIB_1__::func_652())
	{
		func_240(uParam0, 1);
	}
	else
	{
		func_240(uParam0, iParam1 == 1);
	}
	func_241(uParam0);
	func_242(uParam0);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam0->f_995))
	{
		GRAPHICS::ANIMPOSTFX_STOP(uParam0->f_995);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam0->f_996))
	{
		GRAPHICS::ANIMPOSTFX_STOP(uParam0->f_996);
	}
	if (uParam0->f_701)
	{
		PED::_0xFEE4A5459472A9F8();
	}
	GRAPHICS::_0x5C9978A2A3DC3D0D();
}

void func_92(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_652())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = __LIB_4__::func_875(1, __LIB_0__::func_12(), iVar0);
			if (iVar1 != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
			}
			iVar0++;
		}
	}
	func_243(iParam0, bParam1);
	func_244();
	AUDIO::_0x531A78D6BF27014B("MGDOM_Sounds");
	AUDIO::_0x531A78D6BF27014B("HUD_DOMINOS_SOUNDSET");
	HUD::_TEXT_DATABASE_DELETE("MGDOM");
	CAM::_0x798BE43C9393632B("table_games_cam");
}

void func_93(var uParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		MINIGAME::_0x455ECCA0715C507F();
	}
}

void func_113(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4.f_39 = 0;
	uParam0->f_3 = 0;
}

void func_114(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_149)
	{
		uParam0->f_149[iVar0 /*44*/].f_4.f_39 = 0;
		uParam0->f_149[iVar0 /*44*/].f_3 = 0;
		iVar0++;
	}
	uParam0->f_6.f_142 = 0;
}

void func_118(var uParam0, int iParam1)
{
	int iVar0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 255;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = 0;
	uParam0->f_16 = 0;
	uParam0->f_46 = 0;
	uParam0->f_9 = iParam1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_48)
	{
		func_258(&(uParam0->f_48[iVar0 /*15*/]));
		iVar0++;
	}
}

int func_119(int iParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6, int iParam7)
{
	if (!__LIB_4__::func_867(iParam0))
	{
		return 0;
	}
	if (!__LIB_7__::func_764(iParam0, vParam1, iParam4, iParam5, fParam6, iParam7, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		*fParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*fParam6, *iParam7, 0f, 0f, -0.5f) };
	}
	else if (iParam0 == 3)
	{
		*fParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*fParam6, *iParam7, 0f, 0.05f, -0.5f) };
	}
	return 1;
}

int func_120(int iParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar3))
	{
		return 0;
	}
	func_260(iParam0, vParam1, iParam4, iParam5, &vVar5, 0);
	__LIB_1__::func_216(&iVar2, vVar5, 0f, 0f, 0f, (fParam6 * 2f), (fParam6 * 2f), 1.2f);
	iVar1 = ENTITY::_0x886171A12F400B89(iVar2, iVar3, 3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar4 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar3));
		if (!ENTITY::IS_ENTITY_DEAD(iVar4))
		{
			if (__LIB_4__::func_893(iParam0, ENTITY::GET_ENTITY_MODEL(iVar4)))
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar4) > 0.95f)
				{
					__LIB_0__::func_172(iVar2);
					ITEMSET::_CLEAR_ITEMSET(iVar3);
					ITEMSET::DESTROY_ITEMSET(iVar3);
					return iVar4;
				}
			}
		}
		iVar0++;
	}
	__LIB_0__::func_172(iVar2);
	ITEMSET::_CLEAR_ITEMSET(iVar3);
	ITEMSET::DESTROY_ITEMSET(iVar3);
	return 0;
}

void func_121(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	func_263(uParam0, iParam1, iParam2);
	func_264(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void func_123(var uParam0)
{
	uParam0->f_743 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@dominoes_generic", 2, "plMain", false, true);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_743))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_743);
		uParam0->f_77 = 1;
	}
}

void func_126(var uParam0)
{
	uParam0->f_356 = 0;
	uParam0->f_359 = 0;
	uParam0->f_357 = 0;
	uParam0->f_358 = 0;
	uParam0->f_360 = { 0f, 0f, 0f };
	uParam0->f_363 = -1;
}

void func_127(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_1__::func_951(&(uParam0->f_384[iVar0]));
		uParam0->f_391[iVar0] = -1;
		iVar0++;
	}
}

void func_128(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	uParam0->f_158++;
	*uParam0 = iParam1;
	uParam0->f_2 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-1534086282);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "MinigamesDataStore");
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "gameSettings");
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "totalsStack");
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_15, "isVisible", 1);
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_15, "totalsTextItemData");
	__LIB_7__::func_732(uParam0, iParam3);
	iVar1 = 0;
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_15, "totalsItemArray");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_16);
	func_268(uParam0);
	if ((iParam1 == 2 || iParam1 == 0) || bParam2)
	{
		uVar4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_15, "communityGameTokenItemArray");
		uVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_15, "communityGameTokenItemData");
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uVar4);
		iVar0 = 0;
		while (iVar0 < uParam0->f_13)
		{
			StringCopy(&cVar2, "", 8);
			StringIntConCat(&cVar2, iVar0, 8);
			uVar6 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar5, &cVar2);
			uParam0->f_13[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar6, "textureName", "");
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uVar4, iVar0, "single_game_token_big", uVar6);
			iVar0++;
		}
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_16, 0, "community_cards", uParam0->f_15);
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		StringCopy(&cVar2, "", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uParam0->f_10[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar3, &cVar2);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_16, (iVar0 + iVar1), "money_with_text", uParam0->f_10[iVar0]);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_10[iVar0], "moneyText", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_10[iVar0], "text", "");
		iVar0++;
	}
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "playerStack");
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_7, "playerData");
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_7, "playerList");
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_7, "isVisible", 1);
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	uVar7 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "bettingControl");
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar7, "isVisible", 0);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar7, "text", "");
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar7, "isLeftArrowVisible", 0);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar7, "isRightArrowVisible", 0);
	uVar8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "centralScoretimer");
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar8, "isVisible", 0);
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar8, "timerString", "18:88");
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar8, "isVisible", 0);
	__LIB_7__::func_733(uParam0, 2);
}

void func_129(var uParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	func_270(uParam0, &(uParam0->f_26[iParam1 /*32*/]), iParam1, sParam2, sParam3, bParam4, iParam5);
}

void func_130(var uParam0)
{
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	uParam0->f_157 = 0;
}

bool func_133(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_7__::func_720(__LIB_0__::func_12());
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "MinigameObject"))
	{
		return true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = 0;
	while (iVar1 < 28)
	{
		if (iVar2 == __LIB_7__::func_725(iVar1, iVar0))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_134(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar4 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar4))
	{
		__LIB_3__::func_685(&iVar0, *uParam0 + Vector(fLocal_14, 0f, 0f), 0f, 0f, 0f, 1f, 1f, 1f);
		iVar2 = ENTITY::_0x886171A12F400B89(iVar0, iVar4, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar4));
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("P_DOMINORACK01X"))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
				}
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
				{
					ENTITY::DETACH_ENTITY(iVar1, true, true);
				}
				OBJECT::DELETE_OBJECT(&iVar1);
			}
			iVar3++;
		}
		__LIB_0__::func_172(iVar0);
		ITEMSET::_CLEAR_ITEMSET(iVar4);
		ITEMSET::DESTROY_ITEMSET(iVar4);
	}
}

void func_135(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	iVar6 = joaat("P_DOMINORACK01X");
	func_276(uParam0, func_275(iParam1), &vVar0);
	func_277(uParam0, iParam1, &vVar3);
	__LIB_1__::func_951(&(uParam0->f_971[iParam1]));
	uParam0->f_971[iParam1] = OBJECT::CREATE_OBJECT(iVar6, vVar0, false, true, false, false, true);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_971[iParam1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_971[iParam1], true);
		CAM::_0xDB382FE20C2DA222(uParam0->f_971[iParam1]);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_971[iParam1], vVar3, 2, true);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_971[iParam1], false, false);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_976[iParam1]))
	{
		__LIB_7__::func_734(&(uParam0->f_976[iParam1]), vVar0, vVar3, 0.3f, 0.08f, 0.15f, "RACK");
	}
}

void func_136(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 28)
	{
		func_279(&(uParam0->f_746[iVar0 /*8*/]), 1);
		uParam0->f_746[iVar0 /*8*/].f_1 = 0;
		uParam0->f_746[iVar0 /*8*/].f_3 = 29;
		uParam0->f_746[iVar0 /*8*/] = 0;
		uParam0->f_746[iVar0 /*8*/].f_4 = 28;
		iVar0++;
	}
}

void func_137(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4, int iParam5)
{
	char cVar0[64];
	if (iParam1 < 10)
	{
		StringCopy(&cVar0, "PLAYER_00_PIECE_0", 64);
	}
	else
	{
		StringCopy(&cVar0, "PLAYER_00_PIECE_", 64);
	}
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_CLEAR_BOARD", 64);
	*uParam2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", &cVar0, *uParam0, 0f, 0f, uParam0->f_3, fParam4, 2) };
	*uParam3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", &cVar0, *uParam0, 0f, 0f, uParam0->f_3, fParam4, 2) };
}

bool func_139(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	char cVar1[32];
	int iVar5;
	StringCopy(&cVar1, "*** INVALID ***", 32);
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	if (func_280(uParam0, iParam2, &uVar0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		return false;
	}
	if (uParam0->f_199[iParam1 /*124*/] == 1)
	{
		return false;
	}
	func_118(&(uParam0->f_199[iParam1 /*124*/]), iParam1);
	if (__LIB_0__::func_407(iParam2))
	{
		iVar5 = __LIB_4__::func_656(iParam2);
		if (!__LIB_0__::func_699(iVar5) || !__LIB_1__::func_22(iVar5))
		{
			func_147(iVar5, 1, 0, 0f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1);
		}
	}
	__LIB_4__::func_881(iParam2);
	uParam0->f_199[iParam1 /*124*/] = 1;
	uParam0->f_199[iParam1 /*124*/].f_1 = iParam4;
	uParam0->f_199[iParam1 /*124*/].f_12 = iParam2;
	uParam0->f_199[iParam1 /*124*/].f_13 = iParam3;
	uParam0->f_199[iParam1 /*124*/].f_2 = iParam5;
	uParam0->f_199[iParam1 /*124*/].f_10 = iParam1;
	if ((!PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_199[iParam1 /*124*/].f_12, true)) && !__LIB_0__::func_407(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_199[iParam1 /*124*/].f_12, true, true);
	}
	if (!PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_199[iParam1 /*124*/].f_12, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_199[iParam1 /*124*/].f_12, 231, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_199[iParam1 /*124*/].f_12, 113, true);
	}
	__LIB_1__::func_148(&(uParam0->f_199[iParam1 /*124*/].f_43));
	ANIMSCENE::_0xBC781D24AA11F179(iParam2);
	PED::SET_PED_CONFIG_FLAG(iParam2, 168, false);
	if (iParam3 != 255)
	{
		StringCopy(&cVar1, PLAYER::GET_PLAYER_NAME(iParam3), 32);
	}
	if (PED::IS_PED_A_PLAYER(iParam2))
	{
	}
	else if (uParam0->f_199[iParam1 /*124*/].f_1)
	{
	}
	else if (__LIB_0__::func_407(iParam2))
	{
		iVar5 = __LIB_4__::func_656(iParam2);
	}
	if (iParam2 == PLAYER::PLAYER_PED_ID() || iParam3 == PLAYER::PLAYER_ID())
	{
		uParam0->f_194 = iParam1;
		uParam0->f_698 = MISC::GET_FRAME_COUNT();
		func_283(joaat("MPC_HIDE_ACTION_GLOVES"), uParam0->f_199[iParam1 /*124*/].f_12, 0, 1);
		uParam0->f_199[iParam1 /*124*/].f_10 = 3;
		__LIB_4__::func_872(1);
		__LIB_4__::func_871(2);
	}
	if (func_69(uParam0, &(uParam0->f_199[iParam1 /*124*/])))
	{
		uParam0->f_199[iParam1 /*124*/].f_10 = 0;
	}
	__LIB_4__::func_868(&Global_1899750, uParam0->f_199[iParam1 /*124*/].f_12, iParam1, 0);
	func_285(uParam0, iParam1);
	return true;
}

int func_140(var uParam0)
{
	int iVar0;
	char cVar1[64];
	if (__LIB_3__::func_138(*uParam0, joaat("MINIGAME_DOMINOES_PLAYER")))
	{
		return 1;
	}
	StringCopy(&cVar1, "MINI_GAMES@DOMINOES@enter_exit@PLAYER_FEMALE_00", 64);
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, &cVar1, "player_00_idle", 1))
	{
		return 1;
	}
	StringCopy(&cVar1, "MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00", 64);
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, &cVar1, "player_00_idle", 1))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "mini_games@dominoes@enter_exit@player_0", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, &cVar1, "player_00_idle", 1))
		{
			return 1;
		}
		StringCopy(&cVar1, "mini_games@dominoes@game@player_0", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, &cVar1, "player_00_idle", 1))
		{
			return 1;
		}
		iVar0++;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
	{
		return TASK::_GET_TASK_MOVE_NETWORK_ID(*uParam0) == joaat("SCRIPT_MINI_GAME_DOMINOES");
	}
	return func_287(*uParam0);
}

int func_141(var uParam0, int iParam1)
{
	struct<15> Var0;
	Var0.f_1 = 8;
	Var0.f_14 = -1;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	Var0 = 5;
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &Var0);
}

int func_143(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<15> Var1;
	iVar0 = 0;
	Var1.f_1 = 8;
	Var1.f_14 = -1;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_236(&(uParam0->f_199[iParam1 /*124*/]), 4))
	{
		return 0;
	}
	if (func_236(&(uParam0->f_199[iParam1 /*124*/]), 3))
	{
		return 0;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_990[iParam1]))
	{
		Var1 = 4;
	}
	else
	{
		Var1 = 3;
	}
	if (bParam2)
	{
		iVar0 = 1;
	}
	func_289(&Var1, 0, iVar0);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &Var1);
}

void func_144(var uParam0, int iParam1, int iParam2)
{
	func_290(&(uParam0->f_14), iParam1, uParam0->f_666.f_6);
	if (iParam2 == 1)
	{
	}
}

int func_147(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = fParam3;
	vVar0.f_1 = fParam4;
	vVar0.f_2 = fParam5;
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
				func_303(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
			__LIB_3__::func_921(iParam0, Global_1360165[iParam0 /*1157*/]);
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

void func_148(var uParam0, bool bParam1)
{
	int iVar0[28];
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	iVar31 = 0;
	while (iVar31 < 28)
	{
		iVar0[iVar31] = iVar31;
		iVar31++;
	}
	iVar30 = 0;
	while (iVar30 < 2)
	{
		iVar31 = 0;
		iVar31 = 0;
		while (iVar31 < 28)
		{
			iVar32 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
			iVar29 = iVar0[iVar32];
			iVar0[iVar32] = iVar0[iVar31];
			iVar0[iVar31] = iVar29;
			iVar31++;
		}
		iVar30++;
	}
	if (bParam1)
	{
		iVar31 = 0;
		iVar31 = 0;
		while (iVar31 < 28)
		{
			if (iVar0[iVar31] == 27)
			{
				iVar30 = iVar31;
			}
			iVar31++;
		}
		iVar29 = iVar0[0];
		iVar0[0] = iVar0[iVar30];
		iVar0[iVar30] = iVar29;
	}
	func_314(uParam0, 28);
	iVar31 = 0;
	while (iVar31 < 28)
	{
		func_315(uParam0, iVar31, iVar0[iVar31]);
		iVar31++;
	}
}

bool func_149(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_149)
	{
		return false;
	}
	if (__LIB_0__::func_2() == -1 && __LIB_1__::func_652())
	{
		return uParam0->f_149[iParam1 /*44*/] == iParam1;
	}
	return (uParam0->f_149[iParam1 /*44*/] == iParam1 && uParam0->f_149[iParam1 /*44*/].f_1 > 0);
}

int func_150(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = (5 * iParam1);
	iVar1 = iVar0 + 4;
	iVar4 = 159;
	if (iVar1 > iVar4)
	{
		return 29;
	}
	if (iVar0 > (iVar4 - 5))
	{
		return 29;
	}
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		if (MISC::_0x8F4F050054005C27(uParam0, iVar0))
		{
			MISC::SET_BIT(&iVar2, iVar3);
		}
		iVar0++;
		iVar3++;
	}
	return iVar2;
}

int func_151(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			return 1;
		case 1:
			*uParam1 = 0;
			*uParam2 = 1;
			return 1;
		case 2:
			*uParam1 = 0;
			*uParam2 = 2;
			return 1;
		case 3:
			*uParam1 = 0;
			*uParam2 = 3;
			return 1;
		case 4:
			*uParam1 = 0;
			*uParam2 = 4;
			return 1;
		case 5:
			*uParam1 = 0;
			*uParam2 = 5;
			return 1;
		case 6:
			*uParam1 = 0;
			*uParam2 = 6;
			return 1;
		case 7:
			*uParam1 = 1;
			*uParam2 = 1;
			return 1;
		case 8:
			*uParam1 = 1;
			*uParam2 = 2;
			return 1;
		case 9:
			*uParam1 = 1;
			*uParam2 = 3;
			return 1;
		case 10:
			*uParam1 = 1;
			*uParam2 = 4;
			return 1;
		case 11:
			*uParam1 = 1;
			*uParam2 = 5;
			return 1;
		case 12:
			*uParam1 = 1;
			*uParam2 = 6;
			return 1;
		case 13:
			*uParam1 = 2;
			*uParam2 = 2;
			return 1;
		case 14:
			*uParam1 = 2;
			*uParam2 = 3;
			return 1;
		case 15:
			*uParam1 = 2;
			*uParam2 = 4;
			return 1;
		case 16:
			*uParam1 = 2;
			*uParam2 = 5;
			return 1;
		case 17:
			*uParam1 = 2;
			*uParam2 = 6;
			return 1;
		case 18:
			*uParam1 = 3;
			*uParam2 = 3;
			return 1;
		case 19:
			*uParam1 = 3;
			*uParam2 = 4;
			return 1;
		case 20:
			*uParam1 = 3;
			*uParam2 = 5;
			return 1;
		case 21:
			*uParam1 = 3;
			*uParam2 = 6;
			return 1;
		case 22:
			*uParam1 = 4;
			*uParam2 = 4;
			return 1;
		case 23:
			*uParam1 = 4;
			*uParam2 = 5;
			return 1;
		case 24:
			*uParam1 = 4;
			*uParam2 = 6;
			return 1;
		case 25:
			*uParam1 = 5;
			*uParam2 = 5;
			return 1;
		case 26:
			*uParam1 = 5;
			*uParam2 = 6;
			return 1;
		case 27:
			*uParam1 = 6;
			*uParam2 = 6;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_152(var uParam0, int iParam1, var uParam2)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 3;
	vVar0.f_1 = iParam1;
	vVar0.f_2[0] = uParam2;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_158(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_204(uParam0, iVar0))
		{
			if (!func_318(&(uParam1->f_14), iVar0))
			{
				iVar1 = __LIB_7__::func_735(1, iVar0);
				if (!PED::IS_PED_INJURED(iVar1))
				{
					if (func_139(uParam0, iVar0, iVar1, 255, 0, 0))
					{
						func_141(uParam0, iVar0);
						func_144(uParam1, iVar0, 0);
						iVar2 = 1;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_161(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	struct<4> Var7;
	bool bVar12;
	bVar4 = false;
	bVar5 = false;
	bVar12 = func_164(uParam1, uParam0->f_666.f_3, uParam0->f_666.f_14[0]);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (func_318(uParam1, iVar3))
		{
			if (uParam1->f_149[iVar3 /*44*/] != uParam2->f_149[iVar3 /*44*/] && uParam1->f_149[iVar3 /*44*/] == iVar3)
			{
				bVar4 = true;
				func_320(uParam0, iVar3);
			}
			iVar2 = (uParam1->f_149[iVar3 /*44*/].f_1 - uParam2->f_149[iVar3 /*44*/].f_1);
			if (iVar2 > 0)
			{
				bVar4 = true;
				func_322(uParam0, iVar3, uParam1->f_149[iVar3 /*44*/].f_1, uParam2->f_149[iVar3 /*44*/].f_1, func_321(uParam1));
				uParam0->f_14.f_5 = 0;
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (func_318(uParam1, iVar0))
					{
						uParam0->f_14.f_5 = (uParam0->f_14.f_5 + uParam1->f_149[iVar0 /*44*/].f_1);
					}
					iVar0++;
				}
				if (iVar3 == iParam3)
				{
					func_175(uParam0, 1);
					func_176(uParam0, -1);
				}
			}
		}
		else if (func_318(uParam2, iVar3))
		{
			bVar4 = true;
			func_323(uParam0, iVar3, func_321(uParam1));
		}
		iVar3++;
	}
	if (uParam1->f_6.f_142 == 0)
	{
		bVar5 = false;
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (func_149(uParam1, iVar3))
			{
				if (uParam1->f_149[iVar3 /*44*/].f_3 == 7 && uParam2->f_149[iVar3 /*44*/].f_3 != 7)
				{
					bVar5 = true;
				}
			}
			iVar3++;
		}
		if (bVar5)
		{
			if (uParam0->f_700 == 0)
			{
				func_176(uParam0, -1);
			}
			func_175(uParam0, 0);
			uParam0->f_702 = 0;
			uParam0->f_698 = -1;
			uParam0->f_701 = 0;
			if (!func_318(uParam1, uParam0->f_695))
			{
				uParam0->f_695 = func_324(uParam1, uParam0->f_695);
			}
			if (__LIB_1__::func_652())
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (func_149(uParam1, iVar3))
					{
						func_322(uParam0, iVar3, 0, 0, func_321(uParam1));
						func_152(uParam0, iVar3, uParam1->f_149[iVar3 /*44*/].f_2);
					}
					iVar3++;
				}
			}
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (func_149(uParam1, iVar3))
				{
					func_152(uParam0, iVar3, uParam1->f_149[iVar3 /*44*/].f_2);
				}
				iVar3++;
			}
			bVar4 = true;
			uParam0->f_11 = 0;
			func_325(uParam0, uParam1, func_321(uParam1));
			func_327(uParam0, func_326(uParam1, uParam0->f_697), uParam0->f_697);
			uParam0->f_696 = -1;
		}
	}
	if (bVar12 == 0)
	{
		if (*uParam1 != -1 && bVar5 == 0)
		{
			if (func_149(uParam1, *uParam1))
			{
				if (uParam1->f_149[*uParam1 /*44*/].f_3 > 0)
				{
					iVar2 = (func_328(uParam2) - func_328(uParam1));
					if (iVar2 > 0)
					{
						bVar4 = true;
						func_330(uParam0, *uParam1, uParam1, iVar2, uParam2->f_149[*uParam1 /*44*/].f_3, func_329(&(uParam1->f_149[*uParam1 /*44*/].f_4)));
						if (*uParam1 == iParam3)
						{
							uParam0->f_11 = 1;
							func_331(uParam0, *uParam1, uParam1);
						}
						func_332(uParam0, *uParam1);
					}
				}
			}
		}
		if (*uParam1 != -1)
		{
			if (*uParam1 != *uParam2 || (uParam1->f_3 != 0 && uParam2->f_3 == 0))
			{
				if (uParam1->f_149[*uParam1 /*44*/].f_3 > 0)
				{
					if (*uParam1 == iParam3)
					{
						func_331(uParam0, *uParam1, uParam1);
					}
					uParam0->f_702++;
					func_333(uParam0, *uParam1, uParam1->f_3, uParam0->f_702);
					bVar4 = true;
				}
			}
		}
	}
	if (func_149(uParam1, *uParam1))
	{
		iVar0 = (uParam1->f_6.f_142 - 1);
		iVar3 = *uParam1;
		if (uParam1->f_6.f_142 > uParam2->f_6.f_142 || (uParam1->f_6.f_142 == 1 && uParam2->f_6.f_142 <= 0))
		{
			uParam0->f_701 = 0;
			Var7.f_1 = { uParam1->f_6.f_1[iVar0 /*5*/].f_2 };
			Var7 = uParam1->f_1;
			Var7.f_3 = uParam1->f_6.f_1[iVar0 /*5*/].f_4;
			iVar6 = func_334(uParam1->f_6.f_1[iVar0 /*5*/]);
			if (uParam0->f_666.f_3 == -1234859967 || uParam0->f_666.f_3 == -382896522)
			{
				iVar2 = (uParam1->f_149[iVar3 /*44*/].f_2 - uParam2->f_149[iVar3 /*44*/].f_2);
			}
			else
			{
				iVar2 = 0;
			}
			func_335(uParam0, iVar3, &Var7, iVar6, uParam1->f_149[iVar3 /*44*/].f_3 == 0, iVar2);
			if (uParam0->f_666.f_3 == -1234859967 || uParam0->f_666.f_3 == -382896522)
			{
				iVar2 = (uParam1->f_149[iVar3 /*44*/].f_2 - uParam2->f_149[iVar3 /*44*/].f_2);
				func_336(uParam0, iVar3, uParam1->f_149[iVar3 /*44*/].f_2, iVar2, uParam1->f_6);
				func_337(uParam0, uParam1->f_6);
			}
			else
			{
				func_338(uParam0, iVar3, uParam1->f_149[iVar3 /*44*/].f_3);
			}
			if (bVar12 == 1)
			{
				if (uParam1->f_149[iVar3 /*44*/].f_2 >= uParam0->f_666.f_14[0])
				{
					func_339(uParam0, iVar3 == iParam3, 1, 1);
					func_340(uParam0, iVar3);
					func_341(uParam0, 4, iParam3);
				}
				else
				{
					iVar1 = 0;
					while (iVar1 < 4)
					{
						if (func_149(uParam1, iVar1))
						{
							func_331(uParam0, iVar1, uParam1);
						}
						iVar1++;
					}
					uParam0->f_696 = iVar3;
					func_176(uParam0, iVar3);
					func_342(uParam0, iVar3);
					iVar2 = (uParam1->f_149[iVar3 /*44*/].f_2 + func_343(uParam1, uParam0->f_666.f_3, iVar3));
					func_176(uParam0, iVar3);
					uParam1->f_149[iVar3 /*44*/].f_2 = (uParam1->f_149[iVar3 /*44*/].f_2 + func_343(uParam1, uParam0->f_666.f_3, iVar3));
					if (iVar2 >= uParam0->f_666.f_14[0])
					{
						func_340(uParam0, iVar3);
						func_339(uParam0, iVar3 == iParam3, 1, 1);
						func_175(uParam0, 1);
						func_341(uParam0, 4, iParam3);
					}
					else
					{
						func_339(uParam0, iVar3 == iParam3, 1, 0);
						func_344(uParam0, iVar3);
					}
				}
			}
			bVar4 = true;
		}
	}
	if (bVar12 == 0)
	{
		if (uParam1->f_3 == 0 && uParam2->f_3 != 0)
		{
			bVar4 = true;
			func_345(uParam0, *uParam2);
			func_331(uParam0, iParam3, uParam1);
		}
	}
	if (bVar4 == 0)
	{
		if (!func_346(uParam2, uParam1))
		{
			bVar4 = true;
		}
	}
	if (bVar4)
	{
	}
	return bVar4;
}

void func_162(var uParam0, int iParam1)
{
	if (uParam0->f_1299 != iParam1)
	{
	}
	uParam0->f_1299 = iParam1;
}

void func_163(var uParam0)
{
	uParam0->f_14.f_3 = 0;
}

bool func_164(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			if (uParam0->f_149[iVar0 /*44*/].f_3 == 0)
			{
				return true;
			}
			if (uParam0->f_149[iVar0 /*44*/].f_2 >= iParam2)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_165(var uParam0, int iParam1)
{
	var uVar0;
	uVar0 = 15;
	return func_347(&(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &uVar0) > 0;
}

int func_166(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar3;
	var uVar4;
	uVar4 = 15;
	if (uParam0->f_666.f_3 == -1617663169)
	{
		return 0;
	}
	if (!func_149(&(uParam0->f_14), iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		iVar3 = func_348(uParam0, iParam1);
		if (iVar3 == 29)
		{
			return 0;
		}
		if (!func_349(iVar3, &uVar1))
		{
			return 0;
		}
		func_350(&uVar4);
		if (func_347(&(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &uVar4) > 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_167(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
	uParam0->f_14.f_3 = uParam0->f_694 + 30;
}

int func_168(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<5> Var2[15];
	iVar1 = 0;
	if (uParam0->f_14.f_6.f_142 == 0)
	{
		return func_351(uParam0, iParam1);
	}
	iVar0 = func_347(&(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &Var2);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_352(uParam0->f_666.f_3, &(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &Var2, &iVar1, iVar0))
	{
		if (!func_353(&(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &Var2, &iVar1, iVar0))
		{
			return 0;
		}
	}
	if (!func_354(uParam0->f_666.f_3, &(uParam0->f_14), iParam1, &(Var2[iVar1 /*5*/])))
	{
		return 0;
	}
	return 1;
}

void func_169(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = 2147483647;
	iVar3 = -1;
	if (!func_164(&(uParam0->f_14), uParam0->f_666.f_3, uParam0->f_666.f_14[0]))
	{
		func_355(uParam0, iParam1, 0);
	}
	func_163(uParam0);
	uParam0->f_701++;
	if (uParam0->f_701 < func_356(&(uParam0->f_14)))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(&(uParam0->f_14), iVar0))
		{
			func_331(uParam0, iVar0, &(uParam0->f_14));
			iVar1 = func_357(&(uParam0->f_14), iVar0, uParam0->f_666.f_3);
			if (iVar1 == iVar2)
			{
				iVar3 = -1;
				iVar2 = iVar1;
			}
			if (iVar1 < iVar2)
			{
				iVar3 = iVar0;
				iVar2 = iVar1;
			}
		}
		iVar0++;
	}
	uParam0->f_696 = iVar3;
	func_358(uParam0, iVar3);
	if (uParam0->f_696 != -1)
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_149(&(uParam0->f_14), iVar0) && iVar0 != uParam0->f_696)
			{
				iVar1 = (iVar1 + func_357(&(uParam0->f_14), iVar0, uParam0->f_666.f_3));
			}
			iVar0++;
		}
		uParam0->f_14.f_149[uParam0->f_696 /*44*/].f_2 = (uParam0->f_14.f_149[uParam0->f_696 /*44*/].f_2 + iVar1);
		if (uParam0->f_14.f_149[uParam0->f_696 /*44*/].f_2 >= uParam0->f_666.f_14[0])
		{
			func_176(uParam0, uParam0->f_696);
			func_339(uParam0, uParam0->f_696 == iParam2, 1, 1);
			func_340(uParam0, uParam0->f_696);
			func_341(uParam0, 4, iParam2);
		}
		else
		{
			func_339(uParam0, uParam0->f_696 == iParam2, 1, 0);
			func_344(uParam0, -1);
		}
	}
	else
	{
		func_344(uParam0, -1);
	}
}

void func_171(var uParam0)
{
	int iVar0;
	if (func_164(&(uParam0->f_14), uParam0->f_666.f_3, uParam0->f_666.f_14[0]))
	{
		return;
	}
	if (uParam0->f_696 != -1)
	{
		return;
	}
	if (func_359(&(uParam0->f_14), uParam0->f_14) == 0)
	{
		return;
	}
	iVar0 = func_324(&(uParam0->f_14), -1);
	uParam0->f_14 = iVar0;
	uParam0->f_14.f_3 = uParam0->f_694 + 30;
}

bool func_172(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = uParam0->f_709.f_1;
	if (uParam0->f_709.f_2 < 1)
	{
		return false;
	}
	if (iVar0 < 0 || iVar0 >= 45)
	{
		return false;
	}
	*uParam1 = { uParam0->f_709.f_4[iVar0 /*13*/] };
	if (uParam0->f_709 == 0)
	{
		uParam0->f_709 = 1;
	}
	return true;
}

int func_173(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = uParam0->f_709.f_1;
	if (uParam0->f_709.f_2 < 1)
	{
		return 0;
	}
	if (iVar0 < 0 || iVar0 >= 45)
	{
		return 0;
	}
	*iParam1 = { uParam0->f_709.f_4[uParam0->f_709.f_1 /*13*/] };
	func_316(&(uParam0->f_709.f_4[iVar0 /*13*/]));
	uParam0->f_709.f_1 = (iVar0 + 1 % 45);
	uParam0->f_709.f_2 = (uParam0->f_709.f_2 - 1);
	uParam0->f_709.f_3 = iParam1->f_11;
	uParam0->f_709 = 0;
	return 1;
}

bool func_174(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = uParam0->f_2334.f_165;
	if (uParam1->f_4 != 3 || __LIB_0__::func_773(uParam1))
	{
		func_196(uParam1, 3);
		func_360(&(uParam0->f_2334), 0);
		return false;
	}
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			func_361(uParam1);
			break;
		case 1:
			if (iVar0 == 8)
			{
				if (__LIB_0__::func_2() == -1)
				{
					func_290(&(uParam1->f_14), iParam2->f_1, uParam1->f_666.f_6);
					func_362(&(uParam1->f_14));
					func_67(uParam1);
					if (iParam2->f_1 == uParam0->f_1330.f_194)
					{
						__LIB_8__::func_758(uParam1->f_666.f_6, 0);
					}
				}
				func_363(uParam1);
				return true;
			}
			if (iVar0 == 10)
			{
				if (__LIB_0__::func_2() == -1)
				{
					func_364(&(uParam1->f_14), iParam2->f_1);
				}
				func_363(uParam1);
				return true;
			}
			break;
	}
	return false;
}

void func_175(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_700 = 0;
	}
	else
	{
		uParam0->f_700++;
	}
}

void func_176(var uParam0, int iParam1)
{
	uParam0->f_697 = iParam1;
}

bool func_178(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (uParam1->f_4 != 4 || __LIB_0__::func_773(uParam1))
	{
		func_196(uParam1, 4);
		return false;
	}
	__LIB_18__::func_137(&Global_1899750);
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			uParam0->f_1330.f_183 = 0;
			__LIB_7__::func_859(&(uParam0->f_2334.f_240), 1);
			func_189(&(uParam0->f_2334), uParam1->f_14.f_5);
			func_232(&(uParam0->f_1330), 1);
			func_367(&(uParam0->f_1330), uParam0->f_1330.f_1002);
			func_191(&(uParam0->f_2334));
			func_361(uParam1);
			__LIB_1__::func_148(&(uParam1->f_6));
			break;
		case 1:
			if (__LIB_0__::func_264(&(uParam1->f_6)) > 6f)
			{
				func_369(uParam0, uParam2->f_9, uParam0->f_1330.f_194);
				__LIB_1__::func_148(&(uParam0->f_1330.f_176));
				func_361(uParam1);
			}
			else if (__LIB_8__::func_749(&Global_1899750))
			{
				if (__LIB_18__::func_137(&Global_1899750))
				{
					__LIB_1__::func_148(&(uParam0->f_1330.f_176));
					func_369(uParam0, uParam2->f_9, uParam0->f_1330.f_194);
					func_361(uParam1);
				}
			}
			break;
		case 2:
			if (!func_371(&(uParam0->f_1330)))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_204(&(uParam0->f_1330), iVar0))
				{
					if (func_373(&(uParam0->f_1330), func_372(iVar0), &uVar2))
					{
						func_183(&(uParam0->f_1330), iVar0, 0);
						iVar1 = 1;
					}
				}
				iVar0++;
			}
			if (iVar1 == 1 || func_373(&(uParam0->f_1330), 6, &iVar0))
			{
				func_374(&(uParam0->f_1330), uParam2->f_1);
				func_375(&(uParam0->f_1330), uParam2->f_1, 0);
			}
			func_361(uParam1);
			break;
		case 3:
			if (func_376(&(uParam0->f_1330)))
			{
				func_377(uParam0, uParam1, uParam2);
				func_361(uParam1);
			}
			break;
		case 4:
			if (func_376(&(uParam0->f_1330)))
			{
				if (__LIB_0__::func_2() == -1)
				{
					func_378(uParam1);
				}
				func_185(&(uParam0->f_2334), uParam1);
				if (uParam1->f_666.f_3 == -1234859967 || uParam1->f_666.f_3 == -382896522)
				{
					func_186(&(uParam0->f_2334), 0);
				}
				else
				{
					func_379(&(uParam0->f_2334));
				}
				func_363(uParam1);
				return true;
			}
			break;
	}
	return false;
}

bool func_179(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_4 != 10 || __LIB_0__::func_773(uParam1))
	{
		if (func_380(uParam1))
		{
			func_173(uParam1, iParam2);
			return true;
		}
		func_196(uParam1, 10);
		return false;
	}
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			func_381(uParam0, uParam1, iParam2);
			func_361(uParam1);
			break;
		case 1:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_1330.f_199[iParam2->f_1 /*124*/].f_12))
			{
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(uParam0->f_1330.f_199[iParam2->f_1 /*124*/].f_12, "LH_MOVE_ClipFinished") || TASK::GET_TASK_MOVE_NETWORK_EVENT(uParam0->f_1330.f_199[iParam2->f_1 /*124*/].f_12, "RH_MOVE_ClipFinished"))
				{
					func_361(uParam1);
				}
			}
			else if (func_382(&(uParam0->f_1330.f_199[iParam2->f_1 /*124*/])))
			{
				func_361(uParam1);
			}
			break;
		case 2:
			func_363(uParam1);
			return true;
	}
	return false;
}

bool func_180(var uParam0, var uParam1, int iParam2)
{
	if (func_380(uParam1))
	{
		func_173(uParam1, iParam2);
		return true;
	}
	if (uParam1->f_4 != 11 || __LIB_0__::func_773(uParam1))
	{
		func_196(uParam1, 11);
		return false;
	}
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			func_383(&(uParam0->f_2334), iParam2->f_1, iParam2->f_10);
			func_384(uParam0, uParam1, iParam2);
			func_361(uParam1);
			break;
		case 1:
			if (func_382(&(uParam0->f_1330.f_199[iParam2->f_1 /*124*/])))
			{
				func_363(uParam1);
				return true;
			}
			break;
	}
	return false;
}

bool func_181(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_4 != 12 || __LIB_0__::func_773(uParam1))
	{
		if (func_380(uParam1))
		{
			func_173(uParam1, iParam2);
			return true;
		}
		func_196(uParam1, 12);
		return false;
	}
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			func_385(&(uParam0->f_1330), iParam2->f_1, MISC::GET_RANDOM_INT_IN_RANGE(250, 1000));
			func_361(uParam1);
			break;
		case 1:
			if (func_386(&(uParam0->f_1330.f_199[iParam2->f_1 /*124*/]), 14) || !func_387(&(uParam0->f_1330.f_199[iParam2->f_1 /*124*/]), 14))
			{
				func_388(&(uParam0->f_2334), iParam2->f_1);
				func_389(&(uParam0->f_2334), iParam2->f_1, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGPASS"));
				func_361(uParam1);
			}
			break;
		case 2:
			if (func_382(&(uParam0->f_1330.f_199[iParam2->f_1 /*124*/])))
			{
				if (uParam0->f_1330.f_194 == iParam2->f_1)
				{
					uParam0->f_2334.f_261 = 0;
					uParam0->f_2334.f_410.f_20 = 0;
				}
				func_363(uParam1);
				return true;
			}
			break;
	}
	return false;
}

void func_182(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	MISC::CLEAR_BIT(&(uParam0->f_236), iParam1);
	func_390(&(uParam0->f_1), iParam1);
	StringCopy(&(uParam0->f_171[iParam1 /*8*/]), "", 64);
}

int func_183(var uParam0, int iParam1, int iParam2)
{
	struct<15> Var0;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	if (func_236(&(uParam0->f_199[iParam1 /*124*/]), 15))
	{
		return 0;
	}
	Var0.f_1 = 8;
	Var0.f_14 = -1;
	Var0 = 15;
	func_289(&Var0, 0, iParam2);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &Var0);
}

int func_184(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	struct<15> Var0;
	int iVar15;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	if (func_236(&(uParam0->f_199[iParam1 /*124*/]), 19))
	{
		return 0;
	}
	Var0.f_1 = 8;
	Var0.f_14 = -1;
	iVar15 = 0;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (bParam2)
	{
		iVar15 = 1;
	}
	Var0 = 19;
	func_289(&Var0, 0, iVar15);
	func_289(&Var0, 1, iParam3);
	if (bParam4)
	{
		func_289(&Var0, 2, 1);
	}
	func_289(&Var0, 3, iParam5);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &Var0);
}

void func_185(var uParam0, var uParam1)
{
	char cVar0[64];
	StringIntConCat(&cVar0, uParam1->f_666.f_14[0], 64);
	if (*uParam0 == 0)
	{
		return;
	}
	__LIB_7__::func_736(&(uParam0->f_1), 0, MISC::_CREATE_VAR_STRING(10, "MGDOM_TGTSCOREM", func_392(uParam1->f_666.f_3)));
	__LIB_7__::func_737(&(uParam0->f_1), 0, &cVar0);
}

void func_186(var uParam0, int iParam1)
{
	char cVar0[64];
	StringIntConCat(&cVar0, iParam1, 64);
	uParam0->f_164 = iParam1;
	if (*uParam0 == 0)
	{
		return;
	}
	__LIB_7__::func_736(&(uParam0->f_1), 1, MISC::_CREATE_VAR_STRING(2, "MGDOM_EDGETOTAL"));
	__LIB_7__::func_737(&(uParam0->f_1), 1, &cVar0);
}

void func_187(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_395(uParam0, iParam1, iParam3);
	func_188(uParam0, iParam1, iParam2);
}

void func_188(var uParam0, int iParam1, int iParam2)
{
	char cVar0[64];
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	StringIntConCat(&cVar0, iParam2, 64);
	func_396(&(uParam0->f_1.f_26[iParam1 /*32*/]), 1);
	func_397(&(uParam0->f_1.f_26[iParam1 /*32*/]), &cVar0);
	uParam0->f_166[iParam1] = iParam2;
}

void func_189(var uParam0, var uParam1)
{
	uParam0->f_237 = uParam1;
}

void func_190(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	func_398(&(uParam0->f_1), iParam1);
	if (iParam2 == 0)
	{
		func_389(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGNOTILELEFT"));
	}
	else if (iParam2 == 1)
	{
		func_389(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGTILELEFT1", iParam2));
	}
	else
	{
		func_389(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGTILELEFT", iParam2));
	}
}

void func_191(var uParam0)
{
	uParam0->f_246 = 0;
	uParam0->f_247 = 0;
	if (uParam0->f_239 == 1)
	{
		return;
	}
	__LIB_0__::func_105(1);
}

void func_192(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	int iVar1;
	sVar0 = func_399(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	if (uParam0->f_247 == iParam1)
	{
		return;
	}
	iVar1 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar1 == 0 || uParam0->f_246 == 0)
	{
		if (bParam2)
		{
			func_400(uParam0, sVar0);
		}
		else
		{
			func_194(uParam0, sVar0, 0, iParam3);
		}
		uParam0->f_247 = iParam1;
		return;
	}
	if (iVar1 == uParam0->f_246)
	{
		return;
	}
	__LIB_0__::func_105(1);
	if (bParam2)
	{
		func_400(uParam0, sVar0);
	}
	else
	{
		func_194(uParam0, sVar0, 0, iParam3);
	}
	uParam0->f_247 = iParam1;
}

char* func_193(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return "";
	}
	if (__LIB_0__::func_2() == -1)
	{
		return __LIB_1__::func_925(&(uParam0->f_171[iParam1 /*8*/]), joaat("COLOR_PURE_WHITE"));
	}
	return __LIB_0__::func_666(&(uParam0->f_171[iParam1 /*8*/]), joaat("COLOR_PURE_WHITE"));
}

void func_194(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (iParam2 == 0)
	{
		uParam0->f_246 = __LIB_0__::func_45(sParam1, iParam3, 0, 0, 0, 1);
	}
	else
	{
		uParam0->f_246 = __LIB_4__::func_981(sParam1, 0, 0, 1);
	}
}

int func_195(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_318(uParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_196(var uParam0, int iParam1)
{
	if (uParam0->f_4 != iParam1 || uParam0->f_9)
	{
	}
	__LIB_1__::func_148(&(uParam0->f_6));
	uParam0->f_5 = uParam0->f_4;
	uParam0->f_2 = 0;
	uParam0->f_4 = iParam1;
	uParam0->f_3 = 0;
	uParam0->f_9 = 0;
	if (uParam0->f_4 == 16 || uParam0->f_4 == 14)
	{
		__LIB_18__::func_56(1);
	}
}

void func_197(var uParam0, var uParam1)
{
	uParam0->f_234 = uParam1;
}

void func_198(var uParam0, int iParam1)
{
	if (uParam0->f_233 != iParam1)
	{
	}
	__LIB_1__::func_148(&(uParam0->f_160));
	uParam0->f_233 = iParam1;
}

void func_199(var uParam0, var uParam1)
{
	int iVar0;
	func_314(&(uParam0->f_204[uParam1->f_1 /*7*/]), 28);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_204[uParam1->f_1 /*7*/][iVar0] = uParam1->f_2[iVar0];
		iVar0++;
	}
	uParam0->f_204[uParam1->f_1 /*7*/].f_6 = uParam1->f_10;
}

bool func_200(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	if (uParam1->f_4 != 14 || __LIB_0__::func_773(uParam1))
	{
		func_196(uParam1, 14);
		func_360(&(uParam0->f_2334), 0);
		func_406(&(uParam0->f_2334), uParam2->f_1);
		uParam1->f_696 = uParam2->f_1;
		return false;
	}
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			uParam1->f_696 = uParam2->f_1;
			func_406(&(uParam0->f_2334), uParam2->f_1);
			if (func_204(&(uParam0->f_1330), uParam2->f_1))
			{
				uParam1->f_695 = uParam2->f_1;
				func_407(&(uParam0->f_1330), uParam2->f_1, 0);
				func_374(&(uParam0->f_1330), uParam2->f_1);
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_204(&(uParam0->f_1330), iVar0))
				{
					if (uParam2->f_1 != iVar0 && uParam2->f_1 != -1)
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5) < 2)
						{
							func_408(&(uParam0->f_1330), iVar0, 0);
						}
					}
				}
				iVar0++;
			}
			if (uParam2->f_1 == -1)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (func_204(&(uParam0->f_1330), iVar0))
					{
						func_183(&(uParam0->f_1330), iVar0, 0);
					}
					iVar0++;
				}
			}
			func_361(uParam1);
			break;
		case 1:
			if (uParam2->f_1 == -1 || func_386(&(uParam0->f_1330.f_199[uParam2->f_1 /*124*/]), 17))
			{
				func_361(uParam1);
			}
			break;
		case 2:
			if (!func_376(&(uParam0->f_1330)))
			{
				return false;
			}
			func_374(&(uParam0->f_1330), uParam1->f_695);
			if (uParam2->f_1 == -1)
			{
				func_375(&(uParam0->f_1330), uParam1->f_695, 0);
			}
			func_361(uParam1);
			break;
		case 3:
			if (uParam0->f_2334.f_165 == 6)
			{
				func_363(uParam1);
				return true;
			}
			break;
	}
	return false;
}

bool func_201(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	if (uParam1->f_4 != 16 || __LIB_0__::func_773(uParam1))
	{
		func_196(uParam1, 16);
		func_360(&(uParam0->f_2334), 0);
		func_406(&(uParam0->f_2334), uParam2->f_1);
		uParam1->f_696 = uParam2->f_1;
		return false;
	}
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			uParam1->f_696 = uParam2->f_1;
			func_406(&(uParam0->f_2334), uParam2->f_1);
			if (func_204(&(uParam0->f_1330), uParam2->f_1))
			{
				func_407(&(uParam0->f_1330), uParam2->f_1, 0);
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar1 = 0;
				if (func_204(&(uParam0->f_1330), iVar0) && func_149(&(uParam1->f_14), iVar0))
				{
					if (uParam2->f_1 != iVar0)
					{
						if (uParam1->f_695 == uParam2->f_1)
						{
							uParam1->f_695 = iVar0;
							func_374(&(uParam0->f_1330), iVar0);
							iVar1 = 1;
						}
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5) < 2 && iVar1 == 0)
						{
							func_408(&(uParam0->f_1330), iVar0, 0);
						}
					}
					if (uParam2->f_1 == -1)
					{
						func_183(&(uParam0->f_1330), iVar0, 0);
					}
				}
				iVar0++;
			}
			if (uParam2->f_1 == -1)
			{
				func_375(&(uParam0->f_1330), uParam1->f_695, 0);
			}
			func_361(uParam1);
			break;
		case 1:
			if (uParam2->f_1 == -1 || func_386(&(uParam0->f_1330.f_199[uParam2->f_1 /*124*/]), 17))
			{
				func_361(uParam1);
			}
			break;
		case 2:
			if (!func_376(&(uParam0->f_1330)))
			{
				return false;
			}
			func_361(uParam1);
			break;
		case 3:
			if (uParam0->f_2334.f_165 == 6)
			{
				func_363(uParam1);
				return true;
			}
			break;
	}
	return false;
}

bool func_202(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam1->f_4 != 17 || __LIB_0__::func_773(uParam1))
	{
		func_196(uParam1, 17);
		func_360(&(uParam0->f_2334), 0);
		func_406(&(uParam0->f_2334), uParam2->f_1);
		uParam1->f_696 = uParam2->f_1;
		return false;
	}
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			uParam1->f_696 = uParam2->f_1;
			func_406(&(uParam0->f_2334), uParam2->f_1);
			if (func_204(&(uParam0->f_1330), uParam2->f_1))
			{
				func_407(&(uParam0->f_1330), uParam2->f_1, 1);
			}
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (func_204(&(uParam0->f_1330), iVar1))
				{
					if (uParam2->f_1 != iVar1)
					{
						if (uParam1->f_695 == uParam2->f_1)
						{
							uParam1->f_695 = iVar1;
							func_374(&(uParam0->f_1330), iVar1);
							iVar2 = 1;
						}
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5) < 2 && iVar2 == 0)
						{
							func_408(&(uParam0->f_1330), iVar1, 0);
						}
					}
					if (uParam2->f_1 == -1)
					{
						func_183(&(uParam0->f_1330), iVar1, 0);
					}
				}
				iVar1++;
			}
			if (uParam2->f_1 == -1)
			{
				func_375(&(uParam0->f_1330), uParam1->f_695, 0);
			}
			if (__LIB_0__::func_2() == -1 && __LIB_1__::func_652())
			{
				if (uParam2->f_1 == uParam0->f_1330.f_194)
				{
					func_409(uParam0->f_1330.f_1002, Global_35, 27, 0, 0);
				}
				else
				{
					func_409(uParam0->f_1330.f_1002, __LIB_0__::func_271(uParam0->f_1330.f_1002), 27, 0, 0);
				}
			}
			func_361(uParam1);
			break;
		case 1:
			if (func_386(&(uParam0->f_1330.f_199[uParam2->f_1 /*124*/]), 17))
			{
				if (uParam2->f_1 == uParam0->f_1330.f_194)
				{
					__LIB_2__::func_590(uParam1->f_14.f_5, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
				}
				else
				{
					iVar0 = (PED::GET_PED_MONEY(uParam0->f_1330.f_199[uParam2->f_1 /*124*/].f_12) + uParam1->f_14.f_5);
					PED::SET_PED_MONEY(uParam0->f_1330.f_199[uParam2->f_1 /*124*/].f_12, iVar0);
					__LIB_2__::func_190(uParam0->f_1330.f_199[uParam2->f_1 /*124*/].f_12, iVar0);
				}
				func_361(uParam1);
			}
			break;
		case 2:
			func_361(uParam1);
			break;
		case 3:
			if (uParam0->f_2334.f_165 == 4)
			{
				func_363(uParam1);
				return true;
			}
			break;
	}
	return false;
}

void func_203(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_12__::func_475(uParam0);
	iVar1 = __LIB_0__::func_773(uParam0);
	if (__LIB_0__::func_2() == 0)
	{
		NETWORK::_0xD78A26024BB13E08(PLAYER::PLAYER_ID());
	}
	if (iVar0 != 0)
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			func_238(uParam1, iVar1, 3);
			return;
		}
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_CAN_LEG_IK(iVar0, false);
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iVar0, 0, 1);
		}
		if (iVar1 != uParam1->f_194)
		{
			CAM::_0x39073DA4EDDBC91D(iVar0);
		}
		if (uParam0->f_48[0 /*15*/] != 0)
		{
			if (!func_414(uParam0))
			{
				switch (uParam0->f_48[0 /*15*/])
				{
					case 1:
						func_415(uParam1, uParam0, iVar1);
						break;
					case 2:
						func_416(uParam1, uParam0, iVar1);
						break;
					case 5:
						func_417(uParam1, uParam0, iVar1);
						break;
					case 3:
						func_418(uParam1, uParam0, iVar1);
						break;
					case 4:
						func_419(uParam1, uParam0, iVar1, uParam2);
						break;
					case 19:
						if (uParam1->f_190 && iVar1 == uParam1->f_194)
						{
							func_420(uParam1, uParam0, iVar1, uParam2);
						}
						else
						{
							func_421(uParam1, uParam0, iVar1);
						}
						break;
					case 11:
						func_422(uParam1, uParam0, iVar1);
						break;
					case 12:
						func_422(uParam1, uParam0, iVar1);
						break;
					case 13:
						func_423(uParam1, uParam0, iVar1);
						break;
					case 6:
						func_424(uParam1, uParam0, iVar1);
						break;
					case 7:
						func_425(uParam1, uParam0, iVar1);
						break;
					case 8:
						func_426(uParam1, uParam0, iVar1);
						break;
					case 9:
					case 10:
						func_427(uParam1, uParam0, iVar1);
						break;
					case 17:
						func_428(uParam1, uParam0, iVar1);
						break;
					case 18:
						func_429(uParam1, uParam0, iVar1);
						break;
					case 14:
						func_430(uParam1, uParam0, iVar1, uParam2);
						break;
					case 15:
						func_431(uParam1, uParam0, iVar1);
						break;
					case 16:
						func_432(uParam1, uParam0, iVar1);
						break;
				}
			}
			func_433(uParam1, iVar0, &(uParam0->f_42));
			if (func_414(uParam0) && uParam0->f_48[1 /*15*/] != 0)
			{
				func_434(uParam0);
				func_435(uParam0, &(uParam0->f_48[0 /*15*/]));
			}
		}
	}
	func_436(uParam0);
}

bool func_204(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(__LIB_12__::func_475(&(uParam0->f_199[iParam1 /*124*/]))))
	{
		return false;
	}
	return true;
}

void func_205(var uParam0)
{
	vector3 vVar0;
	vVar0 = { 0f, 0f, uParam0->f_3 };
	switch (uParam0->f_77)
	{
		case 1:
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_743, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_743, true))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_743);
				}
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_743, *uParam0, vVar0, 2);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_743);
				uParam0->f_77 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_743, "Breakout", true, false);
			break;
	}
}

int func_206(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (!__LIB_1__::func_652())
	{
		return 0;
	}
	if (uParam0->f_740 == 0)
	{
		return 0;
	}
	if (uParam0->f_184 == 0)
	{
		uParam0->f_186 = (uParam0->f_186 - MISC::GET_FRAME_TIME());
	}
	if (__LIB_0__::func_481(1))
	{
		return 0;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
	{
		return 0;
	}
	if (uParam0->f_184 == 0)
	{
		if (uParam0->f_186 < 0f)
		{
			if (func_438(uParam0, &iVar0))
			{
				func_439(uParam0, iVar0);
				return 1;
			}
		}
		return 0;
	}
	if (!func_204(uParam0, uParam0->f_185))
	{
		return 0;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_199[uParam0->f_185 /*124*/].f_12))
	{
		return 0;
	}
	func_440(uParam0);
	uParam0->f_184 = 0;
	uParam0->f_185 = -1;
	uParam0->f_186 = MISC::GET_RANDOM_FLOAT_IN_RANGE(300f, 600f);
	return 1;
}

void func_207(var uParam0, var uParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (uParam0->f_740 == 0)
	{
		return;
	}
	uParam0->f_187 = (uParam0->f_187 - MISC::GET_FRAME_TIME());
	if (__LIB_0__::func_481(1))
	{
		return;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
	{
		return;
	}
	if (uParam0->f_187 > 0f)
	{
		return;
	}
	if (__LIB_1__::func_985())
	{
		if (func_441(&(uParam1->f_14), &iVar0))
		{
			func_442(uParam0, 88, iVar0, -1);
			uParam0->f_187 = MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 80f);
		}
	}
	else if (func_443(&(uParam1->f_14), &iVar0))
	{
		func_442(uParam0, 87, iVar0, -1);
		uParam0->f_187 = MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 80f);
	}
}

bool func_209(var uParam0, int iParam1)
{
	if (!func_204(uParam0, uParam0->f_194))
	{
		return false;
	}
	return func_387(&(uParam0->f_199[uParam0->f_194 /*124*/]), iParam1);
}

void func_210(var uParam0, int iParam1, bool bParam2)
{
	func_444(uParam0, &(uParam0->f_454));
	func_444(uParam0, &(uParam0->f_455));
	func_444(uParam0, &(uParam0->f_456));
	func_444(uParam0, &(uParam0->f_458));
	func_444(uParam0, &(uParam0->f_459));
	func_444(uParam0, &(uParam0->f_460));
	func_444(uParam0, &(uParam0->f_461));
	if (iParam1 == 1)
	{
		func_444(uParam0, &(uParam0->f_457));
	}
	func_444(uParam0, &(uParam0->f_462));
	func_444(uParam0, &(uParam0->f_464));
	if (bParam2)
	{
		func_445(uParam0);
	}
}

void func_211(var uParam0)
{
	func_446(uParam0);
}

void func_212(var uParam0)
{
	int iVar0;
	if (uParam0->f_1 != 5)
	{
		if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
		{
			func_447(uParam0);
			iVar0 = 0;
			while (iVar0 < 2)
			{
				__LIB_12__::func_426(uParam0, iVar0);
				iVar0++;
			}
			func_268(uParam0);
			UISTATEMACHINE::_UISTATEMACHINE_DESTROY(-1631983120);
			UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_2));
		}
		__LIB_7__::func_733(uParam0, 5);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_6);
		uParam0->f_158 = (uParam0->f_158 - 1);
	}
}

void func_213(var uParam0)
{
	int iVar0;
	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 == 0)
	{
		uParam0->f_246 = 0;
		uParam0->f_247 = 0;
	}
}

void func_214(var uParam0, var uParam1)
{
	if (!func_219(&(uParam0->f_1330)))
	{
		return;
	}
	if (uParam0->f_7.f_4 < 6 || uParam0->f_7.f_4 >= 14)
	{
		func_449(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/]), 0);
		if (uParam0->f_7.f_4 >= 14 && uParam1->f_405 == 2)
		{
			func_450(uParam1, &(uParam0->f_1330), uParam1->f_410.f_20);
		}
		func_445(uParam1);
		return;
	}
	if ((func_451(&(uParam0->f_1330), 19) || uParam0->f_1330.f_198 == 4) || __LIB_7__::func_729())
	{
		func_449(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/]), 0);
		func_445(uParam1);
		return;
	}
	if (!func_219(&(uParam0->f_1330)))
	{
		func_445(uParam1);
		return;
	}
	if (uParam1->f_348)
	{
		if (!__LIB_0__::func_139(uParam1->f_463))
		{
			func_452(uParam1, &(uParam1->f_463), "MGDOM_CTX_FREELOOK", joaat("INPUT_PC_FREE_LOOK"), 0, 3, 4000);
		}
	}
	else
	{
		func_444(uParam1, &(uParam1->f_463));
	}
	uParam1->f_406 = uParam1->f_405;
	switch (uParam1->f_405)
	{
		case 0:
			if (func_453(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1))
			{
				func_454(uParam1, 1);
			}
			else if (func_453(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1))
			{
				func_454(uParam1, 2);
			}
			break;
		case 1:
			if (uParam1->f_403)
			{
				if (func_455(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1))
				{
					func_454(uParam1, 0);
				}
				else if (func_455(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1))
				{
					func_454(uParam1, 2);
				}
			}
			else if (func_453(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1))
			{
				func_454(uParam1, 2);
				__LIB_1__::func_522(uParam1->f_465, 14, 1, 1);
				__LIB_1__::func_522(uParam1->f_466, 14, 0, 1);
			}
			else if (!func_457(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1))
			{
				if (!func_457(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1))
				{
					func_454(uParam1, 0);
				}
				else
				{
					__LIB_1__::func_522(uParam1->f_465, 14, 1, 1);
					__LIB_1__::func_522(uParam1->f_466, 14, 0, 1);
					if (func_457(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1))
					{
						func_454(uParam1, 2);
					}
				}
			}
			break;
		case 2:
			if (uParam1->f_403)
			{
				if (func_455(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1))
				{
					func_454(uParam1, 1);
				}
				else if (func_455(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1))
				{
					func_454(uParam1, 0);
				}
			}
			else if (func_453(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1))
			{
				__LIB_1__::func_522(uParam1->f_465, 14, 0, 1);
				__LIB_1__::func_522(uParam1->f_466, 14, 1, 1);
				func_454(uParam1, 1);
			}
			else if (!func_457(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1))
			{
				if (!func_457(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1))
				{
					func_454(uParam1, 0);
				}
				else
				{
					__LIB_1__::func_522(uParam1->f_465, 14, 0, 1);
					__LIB_1__::func_522(uParam1->f_466, 14, 1, 1);
					if (func_457(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1))
					{
						func_454(uParam1, 1);
					}
				}
			}
			break;
	}
	if (uParam1->f_406 != uParam1->f_405)
	{
		switch (uParam1->f_405)
		{
			case 0:
				func_450(uParam1, &(uParam0->f_1330), uParam1->f_410.f_20);
				__LIB_1__::func_522(uParam1->f_466, 14, 0, 1);
				__LIB_1__::func_522(uParam1->f_465, 14, 0, 1);
				break;
			case 1:
				func_458(uParam1, &(uParam0->f_1330));
				break;
			case 2:
				func_459(uParam1, &(uParam0->f_1330));
				break;
		}
	}
	switch (uParam1->f_405)
	{
		case 0:
			if (!__LIB_0__::func_139(uParam1->f_466))
			{
				func_452(uParam1, &(uParam1->f_466), "MGDOM_CTX_TABLE", joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1, 3, 4000);
				__LIB_1__::func_522(uParam1->f_466, 29, 1, 1);
			}
			if (!__LIB_0__::func_139(uParam1->f_465))
			{
				func_452(uParam1, &(uParam1->f_465), "MGDOM_CTX_DOMS", joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1, 3, 4000);
				__LIB_1__::func_522(uParam1->f_465, 29, 1, 1);
			}
			if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) && (uParam1->f_410.f_20 && uParam1->f_261))
			{
				func_449(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/]), 1);
			}
			else
			{
				func_449(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/]), 0);
			}
			uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/].f_18.f_4 = 0;
			if ((__LIB_0__::func_139(uParam1->f_465) && __LIB_4__::func_863(uParam1->f_465, 1)) && !((uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/].f_42 != -1 || func_461(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/]))) && CAM::_0xA24C1D341C6E0D53(0, 0, 0)))
			{
				__LIB_1__::func_221(uParam1->f_465, 1, 1);
			}
			break;
		case 1:
			if (!__LIB_0__::func_139(uParam1->f_466))
			{
				func_452(uParam1, &(uParam1->f_466), "MGDOM_CTX_TABLE", joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1, 3, 4000);
				__LIB_1__::func_522(uParam1->f_466, 29, 1, 1);
			}
			CAM::_0x90DA5BA5C2635416();
			break;
		case 2:
			if (!__LIB_0__::func_139(uParam1->f_465))
			{
				func_452(uParam1, &(uParam1->f_465), "MGDOM_CTX_DOMS", joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1, 3, 4000);
				__LIB_1__::func_522(uParam1->f_465, 29, 1, 1);
			}
			func_463(uParam1);
			break;
	}
	if (uParam1->f_347 != uParam1->f_348)
	{
		func_444(uParam1, &(uParam1->f_465));
		func_444(uParam1, &(uParam1->f_466));
		if (uParam1->f_348)
		{
			func_452(uParam1, &(uParam1->f_466), "MGDOM_CTX_TABLE", joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1, 0, 4000);
			func_452(uParam1, &(uParam1->f_465), "MGDOM_CTX_DOMS", joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1, 0, 4000);
			__LIB_1__::func_522(uParam1->f_466, 29, 1, 1);
			__LIB_1__::func_522(uParam1->f_465, 29, 1, 1);
		}
		else
		{
			func_452(uParam1, &(uParam1->f_466), "MGDOM_CTX_TABLE", joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1, 3, 4000);
			func_452(uParam1, &(uParam1->f_465), "MGDOM_CTX_DOMS", joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1, 3, 4000);
		}
	}
	if ((uParam1->f_406 != uParam1->f_405 || uParam1->f_404 != uParam1->f_403) || uParam1->f_347 != uParam1->f_348)
	{
		switch (uParam1->f_405)
		{
			case 0:
				__LIB_1__::func_484(uParam1->f_465, "MGDOM_CTX_DOMS", 1);
				__LIB_1__::func_484(uParam1->f_466, "MGDOM_CTX_TABLE", 1);
				break;
			case 1:
				__LIB_1__::func_484(uParam1->f_466, "MGDOM_CTX_TABLE", 1);
				if (uParam1->f_403)
				{
					__LIB_1__::func_484(uParam1->f_465, "MGDOM_CTX_VIEWRESET", 1);
				}
				else
				{
					__LIB_1__::func_484(uParam1->f_465, "MGDOM_CTX_DOMS", 1);
				}
				break;
			case 2:
				__LIB_1__::func_484(uParam1->f_465, "MGDOM_CTX_DOMS", 1);
				if (uParam1->f_403)
				{
					__LIB_1__::func_484(uParam1->f_466, "MGDOM_CTX_VIEWRESET", 1);
				}
				else
				{
					__LIB_1__::func_484(uParam1->f_466, "MGDOM_CTX_TABLE", 1);
				}
				break;
		}
	}
}

void func_215(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar1 = 0;
	bVar2 = func_465(uParam1);
	if (bVar2)
	{
		if (uParam0->f_366 < 44)
		{
			uParam0->f_366 = 44;
		}
	}
	else
	{
		uParam0->f_366 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_384[iVar0]))
		{
			iVar1 = ENTITY::GET_ENTITY_ALPHA(uParam0->f_384[iVar0]);
			if (uParam0->f_391[iVar0] != uParam0->f_338)
			{
				iVar1 = (iVar1 - ((uParam0->f_367 - uParam0->f_366) / uParam0->f_368));
				if (iVar1 < uParam0->f_366)
				{
					iVar1 = uParam0->f_366;
				}
			}
			else
			{
				iVar1 = (iVar1 + ((uParam0->f_367 - uParam0->f_366) / uParam0->f_368));
				if (iVar1 > uParam0->f_367)
				{
					iVar1 = uParam0->f_367;
				}
			}
			if (uParam0->f_391[iVar0] == uParam0->f_338)
			{
				func_466(uParam0, uParam1, iVar0, 3);
			}
			else
			{
				func_467(uParam0, iVar0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_384[iVar0]))
			{
				ENTITY::SET_ENTITY_ALPHA(uParam0->f_384[iVar0], iVar1, uParam0->f_369);
			}
		}
		iVar0++;
	}
}

void func_216(var uParam0, var uParam1)
{
	if (uParam1->f_198 >= 1 && uParam1->f_198 < 4)
	{
		if (uParam0->f_409 == 0)
		{
			func_468(uParam0, uParam1);
			func_450(uParam0, uParam1, uParam0->f_410.f_20);
		}
	}
	else if (uParam1->f_198 == 4)
	{
		func_71(uParam0);
	}
}

bool func_217(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 1:
			__LIB_7__::func_733(uParam0, 2);
			break;
		case 2:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
			{
				__LIB_7__::func_733(uParam0, 3);
			}
			break;
		case 3:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_2, uParam0->f_3);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(-1631983120, uParam0->f_2);
				__LIB_7__::func_733(uParam0, 4);
			}
			break;
		case 4:
			if (MISC::GET_FRAME_COUNT() > uParam0->f_155 && uParam0->f_156 != -1)
			{
				func_398(uParam0, -1);
			}
			break;
	}
	return uParam0->f_1 == 4;
}

bool func_219(var uParam0)
{
	return func_204(uParam0, uParam0->f_194);
}

void func_221(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	switch (uParam1->f_163)
	{
		case 0:
			if (uParam2->f_2 == 1)
			{
				func_473(uParam1);
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_204(&(uParam0->f_1330), iVar0))
				{
					if (func_474(&(uParam0->f_1330.f_199[iVar0 /*124*/])))
					{
						func_473(uParam1);
					}
				}
				iVar0++;
			}
			break;
		case 2:
			if (!__LIB_0__::func_139(uParam1->f_456))
			{
				func_452(uParam1, &(uParam1->f_456), "MGDOM_CTX_SKIP", joaat("INPUT_MINIGAME_DOMINOES_SKIP_DEAL"), 0, 0, 4000);
			}
			if (__LIB_1__::func_514(uParam1->f_456, 1))
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (func_204(&(uParam0->f_1330), iVar0))
					{
						if (func_474(&(uParam0->f_1330.f_199[iVar0 /*124*/])))
						{
							uParam0->f_1330.f_199[iVar0 /*124*/].f_8 = 1;
						}
					}
					iVar0++;
				}
				func_473(uParam1);
				return;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_204(&(uParam0->f_1330), iVar0))
				{
					if (func_474(&(uParam0->f_1330.f_199[iVar0 /*124*/])))
					{
						return;
					}
				}
				iVar0++;
			}
			func_473(uParam1);
			break;
		case 3:
			func_444(uParam1, &(uParam1->f_456));
			func_473(uParam1);
			break;
	}
}

void func_222(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 10000;
	switch (uParam1->f_163)
	{
		case 0:
			if (uParam2->f_2 == 1)
			{
				func_379(uParam1);
				func_476(uParam1);
				func_477(&(uParam1->f_1));
				func_473(uParam1);
				iVar1 = 0;
				while (iVar1 < 4)
				{
					func_478(uParam1, iVar1);
					iVar1++;
				}
			}
			break;
		case 1:
		case 2:
			func_473(uParam1);
			break;
		case 3:
			if (func_195(&(uParam2->f_14)) > 1 && func_479(&(uParam0->f_1330)) > 1)
			{
				func_191(uParam1);
				if (uParam2->f_666.f_6 == 0)
				{
					__LIB_0__::func_45("MGDOM_HLP_BUYINF", 10000, 0, 0, 0, 1);
				}
				else
				{
					__LIB_0__::func_45("MGDOM_HLP_BUYIN", 10000, 0, 0, 0, 1);
				}
				func_473(uParam1);
				PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_QUIT"), false);
				func_452(uParam1, &(uParam1->f_455), "MG_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 0, 0, 4000);
			}
			break;
		case 4:
			if (__LIB_0__::func_492(1) >= uParam2->f_666.f_6)
			{
				if (__LIB_0__::func_2() != -1)
				{
					iVar0 = (uParam2->f_14.f_2 - uParam2->f_694);
					iVar0 = __LIB_0__::func_309(iVar0, 0, 30);
					iVar0 *= 1000;
				}
				if (uParam2->f_666.f_6 > 0)
				{
					func_482(uParam1, &(uParam1->f_462), "MGDOM_BUY_IN", uParam2->f_666.f_6, joaat("INPUT_MINIGAME_REPLAY"), 0, 1, iVar0);
				}
				else
				{
					func_482(uParam1, &(uParam1->f_462), "MG_PLAY_AGAIN", uParam2->f_666.f_6, joaat("INPUT_MINIGAME_REPLAY"), 0, 1, iVar0);
				}
			}
			func_473(uParam1);
			break;
		case 5:
			if (uParam2->f_666.f_6 > 0)
			{
				__LIB_7__::func_736(&(uParam1->f_1), 0, MISC::_CREATE_VAR_STRING(2, "MGDOM_YOURMONEY"));
				__LIB_7__::func_737(&(uParam1->f_1), 0, MISC::_CREATE_VAR_STRING(2, "MGDOM_CASH", __LIB_0__::func_492(1)));
			}
			if (func_483(uParam1->f_462, 1))
			{
				func_231(uParam1, 10);
				func_191(uParam1);
				func_210(uParam1, 1, 1);
				func_484(uParam2, uParam1, 1);
				func_194(uParam1, "MG_BUYIN_EXPIRED", 0, 10000);
				func_230(&(uParam0->f_1330));
				func_473(uParam1);
				return;
			}
			if (__LIB_11__::func_74(uParam1->f_462, 1) || *uParam2)
			{
				func_379(uParam1);
				func_476(uParam1);
				func_231(uParam1, 8);
				func_191(uParam1);
				func_210(uParam1, 1, 1);
				func_230(&(uParam0->f_1330));
				func_473(uParam1);
				return;
			}
			if (__LIB_1__::func_514(uParam1->f_455, 1))
			{
				func_231(uParam1, 10);
				func_484(uParam2, uParam1, 2);
				func_191(uParam1);
				func_210(uParam1, 1, 1);
				func_230(&(uParam0->f_1330));
				func_473(uParam1);
				return;
			}
			break;
	}
}

void func_223(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	switch (uParam1->f_163)
	{
		case 0:
			if (uParam2->f_2 == 1)
			{
				func_473(uParam1);
				func_210(uParam1, 1, 1);
				func_379(uParam1);
				func_232(&(uParam0->f_1330), 1);
				func_446(&(uParam0->f_2334));
			}
			break;
		case 1:
			if (func_386(&(uParam0->f_1330.f_199[uParam1->f_235 /*124*/]), 17))
			{
				func_191(uParam1);
				func_210(uParam1, 1, 1);
				if (uParam1->f_235 != -1)
				{
					if (uParam2->f_666.f_6 == 0)
					{
						func_194(uParam1, MISC::_CREATE_VAR_STRING(10, "MGDOM_HLP_WINGAMEF", func_193(uParam1, uParam1->f_235)), 0, 10000);
					}
					else if (__LIB_0__::func_492(1) >= uParam2->f_666.f_6)
					{
						func_194(uParam1, MISC::_CREATE_VAR_STRING(10, "MGDOM_HLP_WINGAMEA", func_193(uParam1, uParam1->f_235), uParam1->f_237), 0, 10000);
					}
					else
					{
						func_194(uParam1, MISC::_CREATE_VAR_STRING(10, "MGDOM_HLP_WINGAMEC", func_193(uParam1, uParam1->f_235), uParam1->f_237), 0, 10000);
					}
				}
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
					{
						if (uParam1->f_235 == iVar0)
						{
							func_389(uParam1, iVar0, MISC::_CREATE_VAR_STRING(2, "MGDOM_WINNER"));
						}
						else
						{
							func_389(uParam1, iVar0, MISC::_CREATE_VAR_STRING(2, "MGDOM_LOSER"));
						}
					}
					iVar0++;
				}
				func_388(uParam1, uParam1->f_235);
				func_473(uParam1);
			}
			break;
		case 2:
			if (!func_386(&(uParam0->f_1330.f_199[uParam1->f_235 /*124*/]), 17))
			{
				if (uParam1->f_235 != -1)
				{
					if (func_486(&(uParam0->f_1330), &iVar1, uParam1->f_235))
					{
						func_442(&(uParam0->f_1330), 53, uParam1->f_235, iVar1);
					}
				}
				func_473(uParam1);
			}
			break;
		case 3:
			func_452(uParam1, &(uParam1->f_457), "MGDOM_CTX_SKIP", joaat("INPUT_MINIGAME_REPLAY"), 0, 1, 5000);
			if ((__LIB_11__::func_74(uParam1->f_457, 1) || func_483(uParam1->f_457, 1)) || *uParam2)
			{
				func_230(&(uParam0->f_1330));
				func_231(uParam1, 4);
				func_210(uParam1, 1, 1);
				func_473(uParam1);
			}
			break;
	}
}

void func_224(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	switch (uParam1->f_163)
	{
		case 0:
			if (uParam2->f_2 == 1)
			{
				func_473(uParam1);
				func_210(uParam1, 1, 1);
				func_232(&(uParam0->f_1330), 1);
				func_446(&(uParam0->f_2334));
				iVar0 = 0;
				while (iVar0 < 4)
				{
					func_487(uParam1, iVar0);
					func_488(uParam1, iVar0, uParam2->f_666.f_3);
					func_489(&(uParam0->f_1330), iVar0, uParam1->f_235);
					iVar0++;
				}
			}
			break;
		case 1:
			if (uParam1->f_235 == -1)
			{
				func_191(uParam1);
				func_210(uParam1, 1, 1);
				func_194(uParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_HLP_WINROUNDT"), 0, 10000);
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
					{
						func_190(uParam1, iVar0, uParam1->f_204[iVar0 /*7*/].f_6);
					}
					iVar0++;
				}
				func_379(uParam1);
				func_360(uParam1, 4);
			}
			else if (func_386(&(uParam0->f_1330.f_199[uParam1->f_235 /*124*/]), 17))
			{
				func_191(uParam1);
				func_379(uParam1);
				func_210(uParam1, 1, 1);
				func_194(uParam1, MISC::_CREATE_VAR_STRING(10, "MGDOM_HLP_WINROUND", func_193(uParam1, uParam1->f_235)), 0, 10000);
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
					{
						func_190(uParam1, iVar0, uParam1->f_204[iVar0 /*7*/].f_6);
					}
					iVar0++;
				}
				func_473(uParam1);
			}
			break;
		case 2:
			if (uParam1->f_235 == -1)
			{
				if (__LIB_0__::func_264(&(uParam1->f_160)) < 3f)
				{
					return;
				}
			}
			else if (func_386(&(uParam0->f_1330.f_199[uParam1->f_235 /*124*/]), 17))
			{
				return;
			}
			func_191(uParam1);
			if (uParam2->f_666.f_3 == -1234859967)
			{
				func_194(uParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_HLP_REMAINTILES2", 5), 0, 10000);
			}
			else if (uParam2->f_666.f_3 == -382896522)
			{
				func_194(uParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_HLP_REMAINTILES2", 3), 0, 10000);
			}
			else
			{
				func_194(uParam1, "MGDOM_HLP_REMAINTILES", 0, 10000);
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
				{
					func_389(uParam1, iVar0, MISC::_CREATE_VAR_STRING(2, "MGDOM_CNTTILES"));
				}
				iVar0++;
			}
			func_490(uParam1, uParam1->f_235);
			func_473(uParam1);
			break;
		case 3:
			if (__LIB_1__::func_732(uParam1->f_456, 1))
			{
				func_492(uParam1, uParam2, &(uParam0->f_1330), uParam0->f_1330.f_194, 1, 1);
				func_473(uParam1);
				func_210(uParam1, 1, 1);
				return;
			}
			if (func_492(uParam1, uParam2, &(uParam0->f_1330), uParam0->f_1330.f_194, 1, 0))
			{
				func_473(uParam1);
				func_210(uParam1, 1, 1);
			}
			break;
		case 4:
			if (__LIB_0__::func_264(&(uParam1->f_160)) > 1f)
			{
				iVar1 = 0;
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
					{
						if (iVar0 != uParam1->f_235)
						{
							iVar1 = (iVar1 + func_493(uParam1, iVar0, uParam2->f_666.f_3));
							func_188(uParam1, iVar0, uParam1->f_166[iVar0]);
							func_389(uParam1, iVar0, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGWAITTURN"));
						}
					}
					iVar0++;
				}
				func_191(uParam1);
				if (iVar1 == 0 || uParam1->f_235 == -1)
				{
					func_194(uParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_HLP_BONUS0"), 0, 10000);
				}
				else if (iVar1 == 1)
				{
					func_194(uParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_HLP_BONUS1"), 0, 10000);
				}
				else
				{
					func_194(uParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_HLP_BONUS", iVar1), 0, 10000);
				}
				if (uParam1->f_235 != -1)
				{
					func_494(uParam1, uParam1->f_235, iVar1);
					func_188(uParam1, uParam1->f_235, (uParam1->f_166[uParam1->f_235] + iVar1));
				}
				func_473(uParam1);
			}
			break;
		case 5:
			if (__LIB_0__::func_264(&(uParam1->f_160)) < 1.5f)
			{
				return;
			}
			if (!func_149(&(uParam2->f_14), uParam0->f_1330.f_194))
			{
				func_230(&(uParam0->f_1330));
				func_231(uParam1, 6);
				func_444(uParam1, &(uParam1->f_457));
				func_473(uParam1);
				func_210(uParam1, 1, 1);
				return;
			}
			if (uParam1->f_235 != -1)
			{
				if (uParam1->f_166[uParam1->f_235] >= uParam2->f_666.f_14[0])
				{
					if (__LIB_0__::func_264(&(uParam1->f_160)) > 1.5f)
					{
						func_230(&(uParam0->f_1330));
						func_231(uParam1, 6);
						func_444(uParam1, &(uParam1->f_457));
						func_473(uParam1);
						func_210(uParam1, 1, 1);
						return;
					}
				}
			}
			func_452(uParam1, &(uParam1->f_457), "MGDOM_CTX_NXTRND", joaat("INPUT_MINIGAME_REPLAY"), 0, 1, 5000);
			if ((__LIB_11__::func_74(uParam1->f_457, 1) || func_483(uParam1->f_457, 1)) || *uParam2)
			{
				func_230(&(uParam0->f_1330));
				func_231(uParam1, 6);
				func_444(uParam1, &(uParam1->f_457));
				func_473(uParam1);
				func_210(uParam1, 1, 1);
			}
			break;
	}
}

void func_225(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	switch (uParam1->f_163)
	{
		case 0:
			if (uParam2->f_2 == 1)
			{
				func_473(uParam1);
				func_210(uParam1, 1, 1);
				func_232(&(uParam0->f_1330), 1);
				func_446(&(uParam0->f_2334));
				iVar0 = 0;
				while (iVar0 < 4)
				{
					func_487(uParam1, iVar0);
					func_488(uParam1, iVar0, uParam2->f_666.f_3);
					func_489(&(uParam0->f_1330), iVar0, uParam1->f_235);
					iVar0++;
				}
			}
			break;
		case 1:
			if (uParam1->f_235 == -1)
			{
				func_191(uParam1);
				func_210(uParam1, 1, 1);
				func_194(uParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_HLP_ALLPASSD"), 0, 10000);
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
					{
						func_190(uParam1, iVar0, uParam1->f_204[iVar0 /*7*/].f_6);
					}
					iVar0++;
				}
				func_379(uParam1);
				func_473(uParam1);
			}
			else if (func_386(&(uParam0->f_1330.f_199[uParam1->f_235 /*124*/]), 17))
			{
				func_191(uParam1);
				func_210(uParam1, 1, 1);
				func_379(uParam1);
				func_194(uParam1, MISC::_CREATE_VAR_STRING(10, "MGDOM_HLP_ALLPASS", func_193(uParam1, uParam1->f_235)), 0, 10000);
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
					{
						func_190(uParam1, iVar0, uParam1->f_204[iVar0 /*7*/].f_6);
					}
					iVar0++;
				}
				func_473(uParam1);
			}
			break;
		case 2:
			if (uParam1->f_235 == -1)
			{
				if (__LIB_0__::func_264(&(uParam1->f_160)) < 3f)
				{
					return;
				}
			}
			else if (func_386(&(uParam0->f_1330.f_199[uParam1->f_235 /*124*/]), 17))
			{
				return;
			}
			func_473(uParam1);
			func_191(uParam1);
			if (uParam2->f_666.f_3 == -1234859967)
			{
				func_194(uParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_HLP_REMAINTILES2", 5), 0, 10000);
			}
			else if (uParam2->f_666.f_3 == -382896522)
			{
				func_194(uParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_HLP_REMAINTILES2", 3), 0, 10000);
			}
			else
			{
				func_194(uParam1, "MGDOM_HLP_REMAINTILES", 0, 10000);
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
				{
					func_389(uParam1, iVar0, MISC::_CREATE_VAR_STRING(2, "MGDOM_CNTTILES"));
				}
				iVar0++;
			}
			func_490(uParam1, uParam0->f_1330.f_194);
			break;
		case 3:
			if (__LIB_1__::func_732(uParam1->f_456, 1))
			{
				func_492(uParam1, uParam2, &(uParam0->f_1330), uParam0->f_1330.f_194, 1, 1);
				func_473(uParam1);
				func_210(uParam1, 1, 1);
				return;
			}
			if (func_492(uParam1, uParam2, &(uParam0->f_1330), uParam0->f_1330.f_194, 1, 0))
			{
				func_473(uParam1);
				func_210(uParam1, 1, 1);
			}
			break;
		case 4:
			if (__LIB_0__::func_264(&(uParam1->f_160)) > 1f)
			{
				if (uParam1->f_235 != -1)
				{
					iVar1 = 0;
					iVar0 = 0;
					while (iVar0 < 4)
					{
						if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
						{
							if (iVar0 != uParam1->f_235)
							{
								iVar1 = (iVar1 + func_493(uParam1, iVar0, uParam2->f_666.f_3));
								func_188(uParam1, iVar0, uParam1->f_166[iVar0]);
								func_389(uParam1, iVar0, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGWAITTURN"));
							}
						}
						iVar0++;
					}
					func_191(uParam1);
					if (iVar1 == 1)
					{
						func_194(uParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_HLP_BONUS1"), 0, 10000);
					}
					else if (iVar1 == 0)
					{
						func_194(uParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_HLP_BONUS0"), 0, 10000);
					}
					else
					{
						func_194(uParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_HLP_BONUS", iVar1), 0, 10000);
					}
					func_494(uParam1, uParam1->f_235, iVar1);
					func_188(uParam1, uParam1->f_235, (uParam1->f_166[uParam1->f_235] + iVar1));
				}
				func_473(uParam1);
			}
			break;
		case 5:
			if (uParam1->f_235 != -1)
			{
				if (uParam1->f_166[uParam1->f_235] >= uParam2->f_666.f_14[0])
				{
					if (__LIB_0__::func_264(&(uParam1->f_160)) > 1.5f)
					{
						func_230(&(uParam0->f_1330));
						func_231(uParam1, 6);
						func_444(uParam1, &(uParam1->f_457));
						func_473(uParam1);
						func_210(uParam1, 1, 1);
						return;
					}
				}
			}
			func_452(uParam1, &(uParam1->f_457), "MGDOM_CTX_NXTRND", joaat("INPUT_MINIGAME_REPLAY"), 0, 1, 5000);
			if ((__LIB_11__::func_74(uParam1->f_457, 1) || func_483(uParam1->f_457, 1)) || *uParam2)
			{
				func_230(&(uParam0->f_1330));
				func_231(uParam1, 6);
				func_444(uParam1, &(uParam1->f_457));
				func_473(uParam1);
				func_210(uParam1, 1, 1);
			}
			break;
	}
}

void func_226(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = uParam1->f_234;
	iVar3 = func_372(uParam0->f_1330.f_194);
	switch (uParam1->f_233)
	{
		case 0:
			func_185(uParam1, uParam2);
			func_231(uParam1, 0);
			func_232(&(uParam0->f_1330), 1);
			func_446(&(uParam0->f_2334));
			func_210(uParam1, 0, 0);
			uParam1->f_342 = -1;
			uParam1->f_343 = -1;
			uParam1->f_344 = 0;
			uParam1->f_251 = 0;
			if (iVar2 == uParam0->f_1330.f_194)
			{
				uParam1->f_259 = -1;
				uParam1->f_410.f_20 = 1;
				uParam1->f_261 = 0;
				func_127(uParam1);
				func_389(uParam1, uParam0->f_1330.f_194, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGYOURTURN"));
				func_495(uParam1, uParam2, uParam0->f_1330.f_194);
			}
			else
			{
				if (iVar2 != -1)
				{
					func_389(uParam1, iVar2, MISC::_CREATE_VAR_STRING(10, "MGDOM_MSGTURN", func_193(uParam1, iVar2)));
				}
				uParam1->f_410.f_20 = 0;
				CAM::_0x1D9F72DD4FD9A9D7(&(uParam1->f_410));
				func_198(uParam1, 5);
				return;
			}
			CAM::_0x1D9F72DD4FD9A9D7(&(uParam1->f_410));
			func_198(uParam1, 1);
			break;
		case 1:
			if (iVar2 != uParam0->f_1330.f_194)
			{
				return;
			}
			if (func_496(uParam2))
			{
				return;
			}
			if (uParam1->f_261 == 0)
			{
				return;
			}
			func_126(uParam1);
			func_198(uParam1, 2);
			break;
		case 2:
			if (func_497(&(uParam0->f_1330), iVar3, -1, &iVar0))
			{
				uParam1->f_343 = iVar0;
				uParam1->f_340 = uParam0->f_1330.f_746[iVar0 /*8*/].f_4;
				uParam1->f_339 = uParam0->f_1330.f_746[iVar0 /*8*/].f_5;
				func_232(&(uParam0->f_1330), 1);
				func_446(&(uParam0->f_2334));
				func_498(&(uParam0->f_1330), &(uParam0->f_1330.f_746[iVar0 /*8*/]), 3);
				uParam1->f_260 = func_499(&(uParam1->f_262), uParam1->f_339);
				uParam1->f_344 = uParam1->f_260 > 0;
			}
			__LIB_1__::func_148(&(uParam1->f_253));
			uParam1->f_258 = MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 20f);
			func_500(uParam1, uParam0->f_1330.f_194, 0);
			func_198(uParam1, 3);
			if (uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/].f_47 == 10)
			{
				func_191(uParam1);
				func_444(uParam1, &(uParam1->f_459));
				func_232(&(uParam0->f_1330), 1);
				func_446(&(uParam0->f_2334));
				func_211(uParam1);
				func_501(uParam1, &(uParam0->f_1330), uParam2);
				func_502(uParam1, 1);
				uParam1->f_339 = (uParam1->f_204[uParam0->f_1330.f_194 /*7*/].f_6 - 1);
				if (!func_503(&(uParam1->f_262), uParam1->f_339, &(uParam1->f_338), -1))
				{
				}
				if (func_504(&(uParam0->f_1330), iVar3, uParam1->f_339, &iVar0))
				{
					uParam1->f_343 = iVar0;
				}
			}
			else
			{
				func_502(uParam1, 0);
			}
			break;
		case 3:
			if (__LIB_0__::func_2() != -1)
			{
				iVar0 = func_505(uParam1);
				func_500(uParam1, uParam0->f_1330.f_194, iVar0);
				if (iVar0 == 100)
				{
					if (uParam1->f_338 >= uParam1->f_259 || uParam1->f_338 < 0)
					{
						uParam1->f_338 = 0;
					}
					if (func_506(uParam1, &(uParam0->f_1330), uParam2))
					{
						return;
					}
				}
			}
			else if (*uParam2)
			{
				if (uParam1->f_338 >= uParam1->f_259 || uParam1->f_338 < 0)
				{
					uParam1->f_338 = 0;
				}
				if (func_506(uParam1, &(uParam0->f_1330), uParam2))
				{
					return;
				}
			}
			uParam1->f_258 = (uParam1->f_258 - MISC::GET_FRAME_TIME());
			if (uParam1->f_258 < 0f)
			{
				iVar0 = ((uParam0->f_1330.f_194 + MISC::GET_RANDOM_INT_IN_RANGE(0, 4)) % 4);
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (func_204(&(uParam0->f_1330), iVar0) && iVar0 != uParam0->f_1330.f_194)
					{
						func_442(&(uParam0->f_1330), 52, iVar0, uParam0->f_1330.f_194);
						iVar1 = 10000;
					}
					iVar0 = (iVar0 + 1 % 4);
					iVar1++;
				}
				uParam1->f_258 = MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 20f);
			}
			func_507(uParam0, uParam1);
			if (!uParam1->f_345)
			{
				func_508(uParam0, uParam1, uParam2);
			}
			else
			{
				func_509(uParam0, uParam1, uParam2);
			}
			break;
		case 4:
			if (MISC::IS_BIT_SET(uParam2->f_1322, 3))
			{
				func_191(uParam1);
				func_192(uParam1, 17, 0, 3333);
				func_198(uParam1, 3);
			}
			else if (MISC::IS_BIT_SET(uParam2->f_1321, 3))
			{
				func_510(uParam1);
			}
			break;
	}
}

void func_228(var uParam0, int iParam1)
{
	__LIB_8__::func_757(uParam0);
	uParam0->f_2 = iParam1;
}

int func_229(var uParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(uParam0->f_1321), iParam1);
	MISC::CLEAR_BIT(&(uParam0->f_1322), iParam1);
	switch (iParam1)
	{
		case 1:
			if (MINIGAME::_DOMINOES_BUY_IN(&(uParam0->f_1300[iParam1 /*4*/])))
			{
				return 1;
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_1322), iParam1);
			}
			break;
		case 4:
			if (MINIGAME::_DOMINOES_REQUEST_VALID_PLACEMENTS(&(uParam0->f_1300[iParam1 /*4*/])))
			{
				return 1;
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_1322), iParam1);
			}
			break;
		case 0:
			if (MINIGAME::_MINIGAME_LEAVE_TABLE(&(uParam0->f_1300[iParam1 /*4*/])))
			{
				return 1;
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_1322), iParam1);
			}
			break;
	}
	return 0;
}

void func_230(var uParam0)
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam0->f_996))
	{
		GRAPHICS::_0xC5CB91D65852ED7E(uParam0->f_996);
	}
}

void func_231(var uParam0, int iParam1)
{
	if (uParam0->f_165 != iParam1)
	{
	}
	uParam0->f_165 = iParam1;
}

void func_232(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_746[iVar0 /*8*/].f_1))
		{
			if (uParam0->f_746[iVar0 /*8*/].f_6)
			{
				GRAPHICS::_0x56A786E87FF53478(uParam0->f_746[iVar0 /*8*/].f_1);
				uParam0->f_746[iVar0 /*8*/].f_6 = 0;
			}
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam0->f_995))
		{
			GRAPHICS::_0xC5CB91D65852ED7E(uParam0->f_995);
		}
	}
}

bool func_233(var uParam0)
{
	if (!uParam0->f_3)
	{
		return false;
	}
	if (uParam0->f_42 == -1)
	{
		return false;
	}
	return func_511(uParam0);
}

int func_234(var uParam0, int iParam1, int iParam2)
{
	struct<15> Var0;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	Var0.f_1 = 8;
	Var0.f_14 = -1;
	Var0 = 7;
	func_289(&Var0, 0, iParam2);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &Var0);
}

void func_235(var uParam0)
{
	int iVar0;
	uParam0->f_46 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_48)
	{
		func_258(&(uParam0->f_48[iVar0 /*15*/]));
		iVar0++;
	}
}

bool func_236(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_48)
	{
		if (uParam0->f_48[iVar0 /*15*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_238(var uParam0, int iParam1, int iParam2)
{
	char cVar0[32];
	int iVar4;
	StringCopy(&cVar0, "*** INVALID ***", 32);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		func_118(&(uParam0->f_199[iParam1 /*124*/]), iParam1);
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_199[iParam1 /*124*/].f_12))
	{
	}
	__LIB_7__::func_738(&Global_1899750, uParam0->f_199[iParam1 /*124*/].f_12);
	func_514(uParam0, iParam1);
	if (uParam0->f_199[iParam1 /*124*/].f_12 == PLAYER::PLAYER_PED_ID())
	{
		uParam0->f_194 = 4;
		__LIB_6__::func_616(uParam0->f_199[iParam1 /*124*/].f_12, joaat("MPC_HIDE_ACTION_GLOVES"), 0);
	}
	if (uParam0->f_199[iParam1 /*124*/].f_13 != 255)
	{
		StringCopy(&cVar0, PLAYER::GET_PLAYER_NAME(uParam0->f_199[iParam1 /*124*/].f_13), 32);
	}
	if (PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12))
	{
	}
	if (uParam0->f_199[iParam1 /*124*/].f_2)
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_199[iParam1 /*124*/].f_12, true, true);
		NETWORK::_0x02C4C6C2900D84DF(uParam0->f_199[iParam1 /*124*/].f_13, 0);
	}
	if (__LIB_0__::func_407(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		iVar4 = __LIB_4__::func_656(uParam0->f_199[iParam1 /*124*/].f_12);
		__LIB_0__::func_288(iVar4, 56, 1);
		if (__LIB_1__::func_22(iVar4))
		{
			__LIB_1__::func_774(iVar4, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
		func_118(&(uParam0->f_199[iParam1 /*124*/]), iParam1);
		return;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		func_516(uParam0, &(uParam0->f_199[iParam1 /*124*/]), 1090519040 /* Float: 8f */);
	}
	if (!PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_199[iParam1 /*124*/].f_12, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_199[iParam1 /*124*/].f_12, 231, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_199[iParam1 /*124*/].f_12, 113, false);
	}
	PED::_0xA3A9299C4F2ADB98(uParam0->f_199[iParam1 /*124*/].f_12);
	if (uParam0->f_199[iParam1 /*124*/].f_1)
	{
		PED::DELETE_PED(&(uParam0->f_199[iParam1 /*124*/].f_12));
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				if (!PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12) && !__LIB_0__::func_407(uParam0->f_199[iParam1 /*124*/].f_12))
				{
					if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_199[iParam1 /*124*/].f_12, true))
					{
						PED::DELETE_PED(&(uParam0->f_199[iParam1 /*124*/].f_12));
					}
				}
				break;
			case 2:
				if (!PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12))
				{
					if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_199[iParam1 /*124*/].f_12, true))
					{
						__LIB_2__::func_788(&(uParam0->f_199[iParam1 /*124*/].f_12), 0, 0, 1);
					}
				}
				break;
			case 3:
				if (!PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12))
				{
					PED::SET_PED_KEEP_TASK(uParam0->f_199[iParam1 /*124*/].f_12, true);
					if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_199[iParam1 /*124*/].f_12, true))
					{
						__LIB_2__::func_788(&(uParam0->f_199[iParam1 /*124*/].f_12), 1, 0, 1);
					}
				}
				break;
			case 4:
				if (!PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12))
				{
					if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_199[iParam1 /*124*/].f_12, true))
					{
						__LIB_2__::func_788(&(uParam0->f_199[iParam1 /*124*/].f_12), 1, 0, 1);
					}
				}
				break;
		}
	}
	func_118(&(uParam0->f_199[iParam1 /*124*/]), iParam1);
}

void func_240(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_746[iVar0 /*8*/].f_1))
		{
			if (ENTITY::_0x0B7CB1300CBFE19C(uParam0->f_746[iVar0 /*8*/].f_1, 1))
			{
				TASK::STOP_ANIM_PLAYBACK(uParam0->f_746[iVar0 /*8*/].f_1, 0, false);
			}
			__LIB_2__::func_919(uParam0->f_746[iVar0 /*8*/].f_1, 1, 1);
			if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_746[iVar0 /*8*/].f_1))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iVar0 /*8*/].f_1, false);
			}
			if (bParam1 == 0)
			{
				func_279(&(uParam0->f_746[iVar0 /*8*/]), bParam1);
			}
			else
			{
				func_279(&(uParam0->f_746[iVar0 /*8*/]), bParam1);
			}
			uParam0->f_746[iVar0 /*8*/].f_1 = 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_971)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_971[iVar0]))
		{
			__LIB_2__::func_919(uParam0->f_746[iVar0 /*8*/].f_1, 1, 1);
			if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_971[iVar0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_971[iVar0], false);
			}
			if (bParam1 == 0)
			{
				__LIB_4__::func_866(&(uParam0->f_971[iVar0]), 1, 1);
			}
			else
			{
				__LIB_1__::func_951(&(uParam0->f_971[iVar0]));
			}
			uParam0->f_971[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_241(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_743))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_743);
		uParam0->f_743 = -1;
	}
}

void func_242(var uParam0)
{
	if (uParam0->f_742 != -1)
	{
		ANIMSCENE::_0x53CB3970BA02E3CC(uParam0->f_742);
		uParam0->f_742 = -1;
	}
}

void func_243(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_7__::func_725(0, iParam0));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_7__::func_725(28, iParam0));
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_7__::func_725(iVar0, iParam0));
		iVar0++;
	}
}

void func_244()
{
	STREAMING::_REMOVE_MOVE_NETWORK_DEF("SCRIPT_MINI_GAME_DOMINOES");
	STREAMING::REMOVE_ANIM_DICT("MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT");
	STREAMING::REMOVE_ANIM_DICT("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES");
	STREAMING::REMOVE_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_00");
	STREAMING::REMOVE_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_01");
	STREAMING::REMOVE_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_02");
	STREAMING::REMOVE_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_03");
	STREAMING::REMOVE_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00");
	STREAMING::REMOVE_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_00");
	STREAMING::REMOVE_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_01");
	STREAMING::REMOVE_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_02");
	STREAMING::REMOVE_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_03");
	STREAMING::REMOVE_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00");
}

void func_258(int iParam0)
{
	int iVar0;
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_1)
	{
		func_289(iParam0, iVar0, 0);
		iVar0++;
	}
}

int func_260(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	vector3 vVar0;
	var uVar3;
	if (!__LIB_1__::func_76(iParam0))
	{
		return 0;
	}
	if (!__LIB_1__::func_88(iParam0, iParam5, &vVar0))
	{
		return 0;
	}
	*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar0) };
	if (iParam7 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + Vector(0.1f, 0f, 0f), &uVar3, false))
		{
			uParam6->f_2 = uVar3;
		}
	}
	return 1;
}

void func_263(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iParam1 /*8*/].f_1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iParam1 /*8*/].f_1, true, false) };
		vVar3 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_746[iParam1 /*8*/].f_1, 2) };
		iVar6 = func_552(iParam2, uParam0->f_6);
		if (ENTITY::GET_ENTITY_MODEL(uParam0->f_746[iParam1 /*8*/].f_1) != iVar6)
		{
			__LIB_1__::func_951(&(uParam0->f_746[iParam1 /*8*/].f_1));
			uParam0->f_746[iParam1 /*8*/].f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar6, vVar0, false, true, false, false);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_746[iParam1 /*8*/].f_1, vVar3, 2, true);
		}
	}
	uParam0->f_746[iParam1 /*8*/].f_3 = iParam2;
}

void func_264(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	func_553(uParam0, iParam1, iParam3, iParam4, iParam5);
	uParam0->f_746[iParam1 /*8*/].f_3 = iParam2;
}

void func_268(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_16, iVar0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_16);
}

void func_270(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	char[] cVar1[8];
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	StringIntConCat(&cVar1, iParam2, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		sParam3 = "avatar_generic";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		sParam4 = "minigames_hud";
	}
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, &cVar1);
	uParam1->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_1, "playerIconTextureDictionary", sParam4);
	uParam1->f_3 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_1, "playerIconTextureName", sParam3);
	uParam1->f_4 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isEnabled", 1);
	uParam1->f_5 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isVisible", iParam6);
	uParam1->f_6 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isActivePlayer", 0);
	uParam1->f_7 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_1, "stateText", " ");
	uParam1->f_8 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_1, "moneyText", "");
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isMoneyTextVisible", 1);
	uParam1->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isDealer", 0);
	uParam1->f_11 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_1, "turnTimerValue", -1);
	if (bParam5)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_9, iParam2, "player_stack_item", uParam1->f_1);
	}
	uVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_1, "playerHandData");
	uParam1->f_12 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam1->f_1, "playerHandList");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam1->f_12);
	iVar0 = 0;
	while (iVar0 < uParam1->f_14)
	{
		StringCopy(&cVar1, "", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar2, &cVar1);
		uParam1->f_14[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "textureName", "");
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_12, iVar0, "single_game_token", uVar3);
		iVar0++;
	}
	if (*uParam0 == 0)
	{
		uVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_1, "secondPlayerHandData");
		uParam1->f_13 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam1->f_1, "secondPlayerHandList");
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam1->f_13);
		iVar0 = 0;
		while (iVar0 < uParam1->f_30)
		{
			StringCopy(&cVar1, "", 8);
			StringIntConCat(&cVar1, iVar0, 8);
			uVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar4, &cVar1);
			uParam1->f_30[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar5, "textureName", "");
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_13, iVar0, "single_game_token", uVar5);
			iVar0++;
		}
	}
	MISC::SET_BIT(&(uParam0->f_157), iParam2);
	*uParam1 = 1;
}

Vector3 func_275(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0.382f, fLocal_14;
		case 1:
			return 0f, -0.382f, fLocal_14;
		case 2:
			return 0.382f, 0f, fLocal_14;
		case 3:
			return -0.382f, 0f, fLocal_14;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_276(var uParam0, vector3 vParam1, var uParam4)
{
	*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam0, uParam0->f_3, vParam1) };
	return 1;
}

int func_277(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	if (!__LIB_7__::func_697(1, iParam1, &fVar0))
	{
		return 0;
	}
	*uParam2 = { Vector(uParam0->f_3, 0f, 0f) + Vector(fVar0, 0f, 0f) };
	return 1;
}

void func_279(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		if (uParam0->f_6)
		{
			GRAPHICS::_0x56A786E87FF53478(uParam0->f_1);
			uParam0->f_6 = 0;
		}
	}
	if (bParam1 == 0)
	{
		__LIB_4__::func_866(&(uParam0->f_1), 1, 1);
	}
	else
	{
		__LIB_1__::func_951(&(uParam0->f_1));
	}
}

bool func_280(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_199)
	{
		iVar1 = __LIB_12__::func_475(&(uParam0->f_199[iVar0 /*124*/]));
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iVar1 == iParam1)
		{
			*uParam2 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_283(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_556(iParam0, iParam1, bParam2, bParam3);
}

int func_285(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_12__::func_475(&(uParam0->f_199[iParam1 /*124*/]));
	if (!func_557(uParam0))
	{
		return 0;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (!func_204(uParam0, iParam1))
	{
		return 0;
	}
	if (uParam0->f_199[iParam1 /*124*/].f_7)
	{
		return 0;
	}
	ANIMSCENE::_0xB1A196BAFE650402(uParam0->f_742, iVar0);
	if (__LIB_0__::func_407(iVar0) || PED::IS_PED_A_PLAYER(iVar0))
	{
		ANIMSCENE::_0x3641FCD53E59B335(uParam0->f_742, iVar0, "");
	}
	uParam0->f_199[iParam1 /*124*/].f_7 = 1;
	return 1;
}

int func_287(int iParam0)
{
	vector3 vVar0[3];
	vector3 vVar10;
	float fVar13;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
	{
		return 1;
	}
	if (!TASK::IS_PED_STILL(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90f))
	{
		return 0;
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(iParam0))
	{
		return 0;
	}
	if (PED::GET_PED_STEALTH_MOVEMENT(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_JUMPING(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return 0;
	}
	vVar10 = { PED::GET_PED_BONE_COORDS(iParam0, 56200, 0f, 0f, 0f) };
	vVar0[2 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	if ((vVar10.z - vVar0[2 /*3*/].f_2) > 0.7f)
	{
		return 0;
	}
	vVar0[0 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 65478, 0f, 0f, 0f) };
	vVar0[1 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 55120, 0f, 0f, 0f) };
	fVar13 = __LIB_1__::func_95(vVar0[2 /*3*/] - vVar0[1 /*3*/], vVar0[1 /*3*/] - vVar0[0 /*3*/]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return 0;
	}
	vVar0[0 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 6884, 0f, 0f, 0f) };
	vVar0[1 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 43312, 0f, 0f, 0f) };
	vVar0[2 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar13 = __LIB_1__::func_95(vVar0[2 /*3*/] - vVar0[1 /*3*/], vVar0[1 /*3*/] - vVar0[0 /*3*/]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return 0;
	}
	return 1;
}

int func_288(var uParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(__LIB_12__::func_475(uParam0)))
	{
		return 0;
	}
	if (*iParam1 == 0)
	{
		return 0;
	}
	if (!func_559(uParam0, &iVar0))
	{
		return 0;
	}
	if (func_391(uParam0))
	{
		return 0;
	}
	if (func_387(uParam0, 19))
	{
		return 0;
	}
	if (iVar0 == 0)
	{
		func_435(uParam0, iParam1);
	}
	else
	{
		uParam0->f_48[iVar0 /*15*/] = { *iParam1 };
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_48)
	{
		iVar0++;
	}
	return 1;
}

void func_289(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= iParam0->f_1)
	{
		return;
	}
	iParam0->f_1[iParam1] = iParam2;
}

void func_290(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_149)
	{
		return;
	}
	uParam0->f_149[iParam1 /*44*/] = iParam1;
	if (iParam2 != -1)
	{
		uParam0->f_149[iParam1 /*44*/].f_1 = iParam2;
	}
}

void func_303(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_303(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_303(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_314(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_315(uParam0, iVar0, 29);
		iVar0++;
	}
}

void func_315(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = (5 * iParam1);
	iVar1 = iVar0 + 4;
	iVar2 = iParam2;
	iVar4 = 159;
	if (iVar1 > iVar4)
	{
		return;
	}
	if (iVar0 > (iVar4 - 5))
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 < 5)
	{
		if (MISC::IS_BIT_SET(iVar2, iVar3))
		{
			MISC::_0xE84AAC1B22A73E99(uParam0, iVar0);
		}
		else
		{
			MISC::_0xB909149F2BB5F6DA(uParam0, iVar0);
		}
		iVar0++;
		iVar3++;
	}
}

void func_316(var uParam0)
{
	int iVar0;
	*uParam0 = 0;
	uParam0->f_1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2)
	{
		uParam0->f_2[iVar0] = 0;
		iVar0++;
	}
}

bool func_317(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vVar1.f_1 = -1;
	vVar1.f_2 = 6;
	if (uParam0->f_709.f_2 >= 45)
	{
		while (uParam0->f_709.f_2 >= 45)
		{
			func_173(uParam0, &vVar1);
		}
	}
	iVar0 = (uParam0->f_709.f_1 + uParam0->f_709.f_2);
	iVar0 = (iVar0 % 45);
	if (iVar0 < 0 || iVar0 >= 45)
	{
		return false;
	}
	iParam1->f_11 = MISC::GET_FRAME_COUNT();
	func_316(&(uParam0->f_709.f_4[iVar0 /*13*/]));
	uParam0->f_709.f_4[iVar0 /*13*/] = { *iParam1 };
	uParam0->f_709.f_2++;
	if (!bParam2)
	{
	}
	return true;
}

bool func_318(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_149)
	{
		return false;
	}
	return uParam0->f_149[iParam1 /*44*/] == iParam1;
}

int func_320(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 6;
	vVar0.f_1 = iParam1;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

var func_321(var uParam0)
{
	int iVar0;
	var uVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_322(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	struct<10> Var0;
	Var0.f_1 = -1;
	Var0.f_2 = 6;
	func_316(&Var0);
	Var0 = 5;
	Var0.f_1 = iParam1;
	Var0.f_2[0] = iParam2;
	Var0.f_2[1] = iParam3;
	Var0.f_2[2] = (iParam2 - iParam3);
	Var0.f_9 = uParam4;
	if (func_317(uParam0, &Var0, 1))
	{
		return 1;
	}
	return 0;
}

int func_323(var uParam0, int iParam1, var uParam2)
{
	struct<10> Var0;
	Var0.f_1 = -1;
	Var0.f_2 = 6;
	func_316(&Var0);
	Var0 = 7;
	Var0.f_1 = iParam1;
	Var0.f_9 = uParam2;
	if (func_317(uParam0, &Var0, 1))
	{
		return 1;
	}
	return 0;
}

int func_324(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[4];
	if (iParam1 == -1)
	{
		iParam1 = *uParam0;
	}
	switch (iParam1)
	{
		case 0:
			iVar2[0] = 0;
			iVar2[1] = 2;
			iVar2[2] = 1;
			iVar2[3] = 3;
			break;
		case 1:
			iVar2[0] = 1;
			iVar2[1] = 3;
			iVar2[2] = 0;
			iVar2[3] = 2;
			break;
		case 2:
			iVar2[0] = 2;
			iVar2[1] = 1;
			iVar2[2] = 3;
			iVar2[3] = 0;
			break;
		case 3:
			iVar2[0] = 3;
			iVar2[1] = 0;
			iVar2[2] = 2;
			iVar2[3] = 1;
			break;
	}
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_149(uParam0, iVar2[iVar1]))
		{
			return iVar2[iVar1];
		}
		iVar1 = (iVar1 + 1 % 4);
		iVar0++;
	}
	return -1;
}

int func_325(var uParam0, var uParam1, var uParam2)
{
	struct<10> Var0;
	Var0.f_1 = -1;
	Var0.f_2 = 6;
	func_316(&Var0);
	Var0 = 12;
	func_596(uParam1, &(Var0.f_2));
	Var0.f_1 = uParam0->f_695;
	Var0.f_9 = uParam2;
	uParam0->f_705 = 0;
	uParam0->f_706 = 0;
	uParam0->f_708 = 0;
	uParam0->f_707 = -1;
	if (func_317(uParam0, &Var0, 1))
	{
		return 1;
	}
	return 0;
}

int func_326(var uParam0, int iParam1)
{
	if (!func_149(uParam0, iParam1))
	{
		return func_597(uParam0, 0);
	}
	return iParam1;
}

int func_327(var uParam0, int iParam1, var uParam2)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 17;
	vVar0.f_1 = iParam1;
	vVar0.f_2[0] = uParam2;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_328(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (iVar1 + func_359(uParam0, iVar0));
		iVar0++;
	}
	iVar1 = (iVar1 + uParam0->f_6.f_142);
	return (28 - iVar1);
}

bool func_329(var uParam0)
{
	var uVar0;
	uVar0 = 15;
	func_350(&uVar0);
	return MINIGAME::_0x3AE451860F03CA8A(uParam0, &uVar0) > 0;
}

int func_330(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	Var2.f_1 = -1;
	Var2.f_2 = 6;
	func_316(&Var2);
	Var2 = 13;
	Var2.f_10 = iParam3;
	Var2.f_1 = iParam1;
	func_314(&(Var2.f_2), 28);
	iVar0 = 0;
	while (iVar0 < Var2.f_10)
	{
		iVar1 = func_334(uParam2->f_149[iParam1 /*44*/].f_4[(iParam4 + iVar0) /*2*/]);
		func_598(&(Var2.f_2), iVar1);
		iVar0++;
	}
	Var2.f_2[5] = iParam4;
	if (bParam5)
	{
		Var2.f_12 = 1;
	}
	if (func_317(uParam0, &Var2, 1))
	{
		return 1;
	}
	return 0;
}

int func_331(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;
	Var2.f_1 = -1;
	Var2.f_2 = 6;
	func_316(&Var2);
	Var2 = 24;
	Var2.f_10 = 0;
	Var2.f_1 = iParam1;
	func_314(&(Var2.f_2), 28);
	iVar0 = 0;
	while (iVar0 < uParam2->f_149[iParam1 /*44*/].f_3)
	{
		iVar1 = func_334(uParam2->f_149[iParam1 /*44*/].f_4[iVar0 /*2*/]);
		if (func_598(&(Var2.f_2), iVar1))
		{
			iVar1 = func_150(&(Var2.f_2), iVar0);
			Var2.f_10++;
		}
		iVar0++;
	}
	if (func_317(uParam0, &Var2, 1))
	{
		return 1;
	}
	return 0;
}

int func_332(var uParam0, var uParam1)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 22;
	vVar0.f_1 = uParam1;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_333(var uParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 21;
	vVar0.f_1 = uParam1;
	vVar0.f_2[0] = uParam2;
	vVar0.f_2[1] = uParam3;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_334(struct<2> Param0)
{
	switch (Param0.f_1)
	{
		case 0:
			if (Param0 == 0)
			{
				return 0;
			}
			break;
		case 1:
			switch (Param0)
			{
				case 0:
					return 1;
				case 1:
					return 7;
				default:
					break;
			}
			break;
		case 2:
			switch (Param0)
			{
				case 0:
					return 2;
				case 1:
					return 8;
				case 2:
					return 13;
				default:
					break;
			}
			break;
		case 3:
			switch (Param0)
			{
				case 0:
					return 3;
				case 1:
					return 9;
				case 2:
					return 14;
				case 3:
					return 18;
				default:
					break;
			}
			break;
		case 4:
			switch (Param0)
			{
				case 0:
					return 4;
				case 1:
					return 10;
				case 2:
					return 15;
				case 3:
					return 19;
				case 4:
					return 22;
				default:
					break;
			}
			break;
		case 5:
			switch (Param0)
			{
				case 0:
					return 5;
				case 1:
					return 11;
				case 2:
					return 16;
				case 3:
					return 20;
				case 4:
					return 23;
				case 5:
					return 25;
				default:
					break;
			}
			break;
		case 6:
			switch (Param0)
			{
				case 0:
					return 6;
				case 1:
					return 12;
				case 2:
					return 17;
				case 3:
					return 21;
				case 4:
					return 24;
				case 5:
					return 26;
				case 6:
					return 27;
				default:
					break;
			}
			break;
	}
	return 29;
}

int func_335(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	struct<13> Var0;
	Var0.f_1 = -1;
	Var0.f_2 = 6;
	func_316(&Var0);
	Var0 = 14;
	Var0.f_1 = iParam1;
	Var0.f_2[0] = iParam3;
	Var0.f_2[1] = func_599(uParam2);
	if (bParam4)
	{
		Var0.f_2[2] = 1;
	}
	Var0.f_12 = iParam5;
	if (func_317(uParam0, &Var0, 1))
	{
		if (bParam4 == 0)
		{
			if (uParam0->f_666.f_3 == -1234859967 || uParam0->f_666.f_3 == -382896522)
			{
				if (uParam0->f_705 == 0)
				{
					if (func_600(iParam3))
					{
						uParam0->f_707 = (uParam0->f_14.f_6.f_142 - 1);
						func_601(uParam0);
						uParam0->f_705 = 1;
					}
				}
				if (uParam0->f_705 == 1)
				{
					uParam0->f_708 = func_602(uParam0);
					if (uParam0->f_708 == 2 && uParam0->f_706 == 0)
					{
						func_603(uParam0);
						uParam0->f_706 = 1;
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

int func_336(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 16;
	vVar0.f_1 = iParam1;
	vVar0.f_2[0] = uParam2;
	vVar0.f_2[1] = iParam3;
	vVar0.f_2[2] = uParam4;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_337(var uParam0, var uParam1)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 1;
	vVar0.f_2[0] = uParam1;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_338(var uParam0, int iParam1, var uParam2)
{
	struct<11> Var0;
	Var0.f_1 = -1;
	Var0.f_2 = 6;
	func_316(&Var0);
	Var0 = 2;
	Var0.f_1 = iParam1;
	Var0.f_10 = uParam2;
	if (func_317(uParam0, &Var0, 1))
	{
		return 1;
	}
	return 0;
}

void func_339(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		func_605(__LIB_0__::func_38(joaat("ATTEMPTS"), joaat("DOMINOES_HAND")));
	}
	if (bParam3)
	{
		func_605(__LIB_0__::func_38(joaat("ATTEMPTS"), joaat("DOMINOES_GAME")));
	}
	if (bParam1)
	{
		if (bParam3)
		{
			__LIB_7__::func_739(joaat("DOMINOES_GAME"));
		}
		if (bParam2)
		{
			__LIB_7__::func_739(joaat("DOMINOES_HAND"));
			if ((uParam0->f_11 == 0 && uParam0->f_666.f_3 != -1617663169) && func_356(&(uParam0->f_14)) != 4)
			{
				func_605(__LIB_0__::func_38(joaat("WINS"), joaat("DOMINOES_NO_DRAWS")));
			}
		}
	}
	else
	{
		if (bParam3)
		{
			__LIB_7__::func_740(joaat("DOMINOES_GAME"));
		}
		if (bParam2)
		{
			__LIB_7__::func_740(joaat("DOMINOES_HAND"));
		}
	}
}

int func_340(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 20;
	vVar0.f_1 = iParam1;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_341(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = iParam1;
	vVar0.f_1 = iParam2;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_342(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 19;
	vVar0.f_1 = iParam1;
	__LIB_7__::func_741();
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_343(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0) && iVar0 != iParam2)
		{
			iVar1 = (iVar1 + func_357(uParam0, iVar0, iParam1));
		}
		iVar0++;
	}
	return iVar1;
}

int func_344(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 27;
	vVar0.f_1 = iParam1;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_345(var uParam0, var uParam1)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 23;
	vVar0.f_1 = uParam1;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_346(var uParam0, var uParam1)
{
	int iVar0;
	if (*uParam0 != *uParam1)
	{
		return false;
	}
	if (uParam0->f_1 != uParam1->f_1)
	{
		return false;
	}
	if (uParam0->f_2 != uParam1->f_2)
	{
		return false;
	}
	if (uParam0->f_3 != uParam1->f_3)
	{
		return false;
	}
	if (uParam0->f_4 != uParam1->f_4)
	{
		return false;
	}
	if (uParam0->f_5 != uParam1->f_5)
	{
		return false;
	}
	if (!func_609(&(uParam0->f_6), &(uParam1->f_6)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_610(&(uParam0->f_149[iVar0 /*44*/]), &(uParam1->f_149[iVar0 /*44*/])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_347(var uParam0, var uParam1)
{
	func_350(uParam1);
	return MINIGAME::_0x3AE451860F03CA8A(uParam0, uParam1);
}

int func_348(var uParam0, int iParam1)
{
	int iVar0;
	if (uParam0->f_699 >= 28)
	{
		return 29;
	}
	iVar0 = func_150(&(uParam0->f_684), uParam0->f_699);
	if (iVar0 == 29)
	{
		return 29;
	}
	if (func_611(uParam0, iParam1, iVar0))
	{
		uParam0->f_699++;
		return iVar0;
	}
	return 29;
}

int func_349(int iParam0, var uParam1)
{
	if (iParam0 == 29)
	{
		return 0;
	}
	return func_151(iParam0, uParam1, &(uParam1->f_1));
}

void func_350(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_7__::func_742(uParam0[iVar0 /*5*/]);
		iVar0++;
	}
}

int func_351(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<5> Var2[15];
	iVar1 = 0;
	iVar0 = func_347(&(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &Var2);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_352(uParam0->f_666.f_3, &(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &Var2, &iVar1, iVar0))
	{
		if (!func_353(&(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &Var2, &iVar1, iVar0))
		{
			return 0;
		}
	}
	if (!func_354(uParam0->f_666.f_3, &(uParam0->f_14), iParam1, &(Var2[iVar1 /*5*/])))
	{
		return 0;
	}
	return 1;
}

bool func_352(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = -1;
	if (uParam1->f_39 == 0)
	{
		return false;
	}
	*iParam3 = -1;
	if (iParam4 == -1)
	{
		iParam4 = *uParam2;
	}
	iVar1 = 0;
	while (iVar1 < iParam4)
	{
		if (func_613(*(uParam2[iVar1 /*5*/])))
		{
			if ((*uParam2)[iVar1 /*5*/] < uParam1->f_39 && (*uParam2)[iVar1 /*5*/] >= 0)
			{
				iVar0 = (uParam2[iVar1 /*5*/])->f_4;
				if (iVar0 >= iVar2 || iVar2 == -1)
				{
					if (func_614(iParam0, iVar0))
					{
						*iParam3 = iVar1;
						iVar2 = iVar0;
					}
				}
			}
		}
		iVar1++;
	}
	return *iParam3 >= 0;
}

bool func_353(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = -1;
	if (uParam0->f_39 == 0)
	{
		return false;
	}
	*iParam2 = -1;
	if (iParam3 == -1)
	{
		iParam3 = *uParam1;
	}
	iVar1 = 0;
	while (iVar1 < iParam3)
	{
		if (func_613(*(uParam1[iVar1 /*5*/])))
		{
			if ((*uParam1)[iVar1 /*5*/] < uParam0->f_39 && (*uParam1)[iVar1 /*5*/] >= 0)
			{
				iVar0 = func_615(*(uParam0[(*uParam1)[iVar1 /*5*/] /*2*/]));
				if (iVar0 >= iVar2 || iVar2 == -1)
				{
					*iParam2 = iVar1;
					iVar2 = iVar0;
				}
			}
		}
		iVar1++;
	}
	return *iParam2 >= 0;
}

bool func_354(int iParam0, var uParam1, int iParam2, var uParam3)
{
	if (*uParam3 < 0)
	{
		return false;
	}
	if (*uParam3 >= uParam1->f_149[iParam2 /*44*/].f_3)
	{
		return false;
	}
	if (!func_149(uParam1, iParam2))
	{
		return false;
	}
	if (!MINIGAME::_0x012027C28F421F46(uParam3, &(uParam1->f_149[iParam2 /*44*/].f_4)))
	{
		return false;
	}
	uParam1->f_1 = *uParam3;
	uParam1->f_149[iParam2 /*44*/].f_3 = uParam1->f_149[iParam2 /*44*/].f_4.f_39;
	if (!MINIGAME::_0x3F4FD4BED07AB8C4(&(uParam1->f_6)))
	{
		return false;
	}
	if (uParam1->f_6 > 0)
	{
		if ((iParam0 == -382896522 && (uParam1->f_6 % 3) == 0) || (iParam0 == -1234859967 && (uParam1->f_6 % 5) == 0))
		{
			uParam1->f_149[iParam2 /*44*/].f_2 = (uParam1->f_149[iParam2 /*44*/].f_2 + uParam1->f_6);
		}
	}
	return true;
}

int func_355(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 15;
	vVar0.f_1 = iParam1;
	vVar0.f_2[0] = iParam2;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_356(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_357(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!func_149(uParam0, iParam1))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_149[iParam1 /*44*/].f_3)
	{
		iVar0 = (iVar0 + func_615(uParam0->f_149[iParam1 /*44*/].f_4[iVar1 /*2*/]));
		iVar1++;
	}
	if (iParam2 == -1234859967)
	{
		iVar0 += 2;
		iVar0 = (iVar0 - (iVar0 % 5));
	}
	if (iParam2 == -382896522)
	{
		iVar0++;
		iVar0 = (iVar0 - (iVar0 % 3));
	}
	return iVar0;
}

int func_358(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 18;
	vVar0.f_1 = iParam1;
	__LIB_7__::func_741();
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_359(var uParam0, int iParam1)
{
	if (!func_149(uParam0, iParam1))
	{
		return 0;
	}
	return uParam0->f_149[iParam1 /*44*/].f_3;
}

void func_360(var uParam0, int iParam1)
{
	if (uParam0->f_163 != iParam1)
	{
	}
	__LIB_1__::func_148(&(uParam0->f_160));
	uParam0->f_163 = iParam1;
}

void func_361(var uParam0)
{
	uParam0->f_3++;
}

void func_362(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_149)
	{
		uParam0->f_149[iVar0 /*44*/].f_2 = 0;
		iVar0++;
	}
}

void func_363(var uParam0)
{
	uParam0->f_9 = 1;
}

void func_364(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_149)
	{
		return;
	}
	uParam0->f_149[iParam1 /*44*/] = -1;
}

void func_367(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	if (!__LIB_1__::func_652())
	{
		return;
	}
	uParam0->f_179 = { vVar1 };
	iVar4 = __LIB_0__::func_895(uParam0->f_1003);
	iVar5 = __LIB_0__::func_167(iParam1);
	__LIB_1__::func_148(&(uParam0->f_176));
	switch (iParam1)
	{
		case 13:
			if (!MISC::IS_BIT_SET(iVar4, 1))
			{
				iVar0 = 1;
				MISC::SET_BIT(&iVar4, iVar0);
				StringCopy(&vVar1, "DMINO_ABI1", 24);
			}
			else if (!MISC::IS_BIT_SET(iVar4, 2))
			{
				iVar0 = 2;
				MISC::SET_BIT(&iVar4, iVar0);
				StringCopy(&vVar1, "DMINO_ABI2", 24);
			}
			else
			{
				return;
			}
			__LIB_0__::func_928(&(uParam0->f_78), iVar5, "ABIGAIL", 0);
			break;
		case 15:
			if (!MISC::IS_BIT_SET(iVar4, 3))
			{
				iVar0 = 3;
				MISC::SET_BIT(&iVar4, iVar0);
				StringCopy(&vVar1, "DMINO_MBETH1", 24);
			}
			else if (!MISC::IS_BIT_SET(iVar4, 4))
			{
				iVar0 = 4;
				MISC::SET_BIT(&iVar4, iVar0);
				StringCopy(&vVar1, "DMINO_MBETH2", 24);
			}
			else
			{
				return;
			}
			__LIB_0__::func_928(&(uParam0->f_78), iVar5, "MARYBETH", 0);
			break;
		case 22:
			if (!MISC::IS_BIT_SET(iVar4, 5))
			{
				iVar0 = 5;
				MISC::SET_BIT(&iVar4, iVar0);
				StringCopy(&vVar1, "DMINO_TILLY1", 24);
				if (!MISC::IS_BIT_SET(iVar4, 7))
				{
					MISC::SET_BIT(&iVar4, 7);
					func_622(20, 22, 1);
				}
			}
			else if (!MISC::IS_BIT_SET(iVar4, 6))
			{
				iVar0 = 6;
				MISC::SET_BIT(&iVar4, iVar0);
				StringCopy(&vVar1, "DMINO_TILLY2", 24);
			}
			else
			{
				return;
			}
			__LIB_0__::func_928(&(uParam0->f_78), iVar5, "TILLY", 0);
			break;
		case 17:
			if (!MISC::IS_BIT_SET(iVar4, 8))
			{
				iVar0 = 8;
				MISC::SET_BIT(&iVar4, iVar0);
				StringCopy(&vVar1, "DMINO_PEARSON1", 24);
			}
			else
			{
				return;
			}
			__LIB_0__::func_928(&(uParam0->f_78), iVar5, "PEARSON", 0);
			break;
		case 5:
			if (!MISC::IS_BIT_SET(iVar4, 9))
			{
				iVar0 = 9;
				MISC::SET_BIT(&iVar4, iVar0);
				StringCopy(&vVar1, "DMINO_HOSEA1", 24);
			}
			else if (!MISC::IS_BIT_SET(iVar4, 10))
			{
				iVar0 = 10;
				MISC::SET_BIT(&iVar4, iVar0);
				StringCopy(&vVar1, "DMINO_HOSEA2", 24);
			}
			else
			{
				return;
			}
			__LIB_0__::func_928(&(uParam0->f_78), iVar5, "HOSEA", 0);
			break;
		default:
			return;
	}
	__LIB_1__::func_532(uParam0->f_1003, iVar4);
	__LIB_0__::func_928(&(uParam0->f_78), Global_35, "ARTHUR", 0);
	uParam0->f_997 = iVar0;
	uParam0->f_179 = { vVar1 };
	uParam0->f_182 = 1;
}

void func_369(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!func_626(&(uParam0->f_2334.f_1), iParam2))
	{
		func_627(&(uParam0->f_2334), &(uParam0->f_1330), iParam2);
	}
	iVar1 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_628(iParam1, iVar1);
		if (!func_626(&(uParam0->f_2334.f_1), iVar1))
		{
			func_627(&(uParam0->f_2334), &(uParam0->f_1330), iVar1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_BIT_SET(iParam1, iVar0))
		{
			func_182(&(uParam0->f_2334), iVar0);
		}
		iVar0++;
	}
}

bool func_371(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_895(uParam0->f_1003);
	if (!__LIB_1__::func_652())
	{
		return true;
	}
	if (__LIB_0__::func_264(&(uParam0->f_176)) > 5f)
	{
		MISC::CLEAR_BIT(&iVar0, uParam0->f_997);
		__LIB_1__::func_532(uParam0->f_1003, iVar0);
		return true;
	}
	if (uParam0->f_182 == 0)
	{
		return true;
	}
	if (uParam0->f_183 == 1)
	{
		return true;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_179)))
	{
		return true;
	}
	if (__LIB_2__::func_813(&(uParam0->f_78), uParam0->f_179, 0, -1, 0, 0))
	{
		uParam0->f_183 = 1;
		return true;
	}
	return false;
}

int func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 4;
		case 3:
			return 5;
		default:
			break;
	}
	return 0;
}

bool func_373(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	*iParam2 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (uParam0->f_746[iVar0 /*8*/] == iParam1)
		{
			*iParam2 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_374(var uParam0, int iParam1)
{
	uParam0->f_192 = iParam1;
}

int func_375(var uParam0, int iParam1, bool bParam2)
{
	struct<15> Var0;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	if (func_236(&(uParam0->f_199[iParam1 /*124*/]), 16))
	{
		return 0;
	}
	if (func_630(&(uParam0->f_199[iParam1 /*124*/])) == 16)
	{
		return 0;
	}
	if (uParam0->f_988 == 1)
	{
		return 0;
	}
	Var0.f_1 = 8;
	Var0.f_14 = -1;
	Var0 = 16;
	if (bParam2)
	{
		func_289(&Var0, 0, 1);
	}
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &Var0);
}

bool func_376(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_204(uParam0, iVar0))
		{
			iVar3 = __LIB_12__::func_475(&(uParam0->f_199[iVar0 /*124*/]));
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				iVar1++;
				if (uParam0->f_199[iVar0 /*124*/].f_48[0 /*15*/] == 0)
				{
					iVar2++;
				}
				else if (uParam0->f_199[iVar0 /*124*/].f_48[1 /*15*/] == 0 && uParam0->f_199[iVar0 /*124*/].f_46 == 54)
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	return iVar1 == iVar2;
}

void func_377(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar3 = 0;
	iVar4 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (MISC::IS_BIT_SET(uParam2->f_9, iVar1))
		{
		}
		iVar1++;
	}
	func_406(&(uParam0->f_2334), -1);
	func_185(&(uParam0->f_2334), uParam1);
	if (uParam1->f_700 <= 1)
	{
		func_631(&(uParam0->f_2334), uParam1->f_666.f_3, 0);
	}
	else
	{
		func_194(&(uParam0->f_2334), "MGDOM_HLP_DEALING", 0, 10000);
	}
	if (!func_204(&(uParam0->f_1330), uParam2->f_1))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (func_204(&(uParam0->f_1330), iVar1) && MISC::IS_BIT_SET(uParam2->f_9, iVar1))
			{
				uParam2->f_1 = iVar1;
				uParam1->f_695 = iVar1;
			}
			iVar1++;
		}
	}
	func_374(&(uParam0->f_1330), uParam2->f_1);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (MISC::IS_BIT_SET(uParam2->f_9, iVar1))
		{
			func_632(&(uParam0->f_1330), iVar1, 1);
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (uParam0->f_1330.f_194 == iVar1)
				{
					iVar2 = func_150(&(uParam2->f_2), (iVar1 * 7 + iVar0));
					func_121(&(uParam0->f_1330), (iVar1 * 7 + iVar0), iVar2, func_372(iVar1), iVar0, iVar0);
					func_263(&(uParam0->f_1330), (iVar1 * 7 + iVar0), iVar2);
				}
				else
				{
					func_121(&(uParam0->f_1330), (iVar1 * 7 + iVar0), 28, func_372(iVar1), iVar0, iVar0);
					func_263(&(uParam0->f_1330), (iVar1 * 7 + iVar0), 28);
				}
				iVar0++;
			}
		}
		else
		{
			func_632(&(uParam0->f_1330), iVar1, 0);
			iVar0 = 0;
			while (iVar0 < 7)
			{
				func_121(&(uParam0->f_1330), (iVar1 * 7 + iVar0), 28, 1, iVar3, -1);
				iVar3++;
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (MISC::IS_BIT_SET(uParam2->f_9, iVar1))
		{
			func_632(&(uParam0->f_1330), iVar1, 1);
			if (func_633(&(uParam0->f_1330), iVar1, 1, iVar0 == uParam2->f_1))
			{
				func_389(&(uParam0->f_2334), iVar1, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGWAITTURN"));
			}
			iVar4++;
		}
		else
		{
			func_632(&(uParam0->f_1330), iVar1, 0);
		}
		iVar1++;
	}
	if (iVar4 != 4)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			func_634(&(uParam0->f_1330), iVar1);
			iVar1++;
		}
	}
	func_232(&(uParam0->f_1330), 1);
}

void func_378(var uParam0)
{
	uParam0->f_702 = 0;
	uParam0->f_14 = func_326(&(uParam0->f_14), uParam0->f_697);
	uParam0->f_14.f_3 = uParam0->f_694 + 30;
}

void func_379(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	__LIB_7__::func_736(&(uParam0->f_1), 1, "");
	__LIB_7__::func_737(&(uParam0->f_1), 1, "");
}

bool func_380(var uParam0)
{
	if (uParam0->f_5 == 17 || uParam0->f_5 == 16)
	{
		return true;
	}
	return false;
}

void func_381(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	var uVar1;
	struct<5> Var2;
	int iVar7;
	iVar7 = iParam2->f_12;
	uVar1 = iParam2->f_2[0];
	func_635(iParam2->f_2[1], &Var2);
	bVar0 = iParam2->f_2[2] == true;
	if (!func_236(&(uParam0->f_1330.f_199[iParam2->f_1 /*124*/]), 6) && !func_236(&(uParam0->f_1330.f_199[iParam2->f_1 /*124*/]), 10))
	{
		func_636(&(uParam0->f_1330), iParam2->f_1, Var2);
	}
	if (uParam1->f_666.f_3 == -1617663169 || uParam1->f_666.f_3 == -1360983891)
	{
		iVar7 = -1;
	}
	func_637(&(uParam0->f_1330), iParam2->f_1, Var2, Var2, uVar1, bVar0, iVar7);
	func_232(&(uParam0->f_1330), 1);
}

bool func_382(var uParam0)
{
	return (uParam0->f_48[1 /*15*/] == 0 && uParam0->f_46 == 54);
}

void func_383(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	func_398(&(uParam0->f_1), iParam1);
	func_389(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGDRAWTILE"));
}

void func_384(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < iParam2->f_10)
	{
		if (func_638(&(uParam0->f_1330), 1, &iVar1, iVar2))
		{
			iVar2 = iVar1;
			func_639(&(uParam0->f_1330), iVar1, (iParam2->f_2[5] + iVar0));
			if (uParam0->f_1330.f_194 == iParam2->f_1)
			{
				iVar3 = func_150(&(iParam2->f_2), iVar0);
				func_263(&(uParam0->f_1330), iVar1, iVar3);
			}
		}
		iVar0++;
	}
	func_232(&(uParam0->f_1330), 1);
	if (iParam2->f_12 != 0)
	{
		func_640(&(uParam0->f_1330), iParam2->f_1, iParam2->f_10, 1, MISC::GET_RANDOM_INT_IN_RANGE(250, 500));
	}
	else
	{
		func_640(&(uParam0->f_1330), iParam2->f_1, iParam2->f_10, 0, MISC::GET_RANDOM_INT_IN_RANGE(250, 500));
	}
}

int func_385(var uParam0, int iParam1, int iParam2)
{
	struct<15> Var0;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	Var0.f_1 = 8;
	Var0.f_14 = -1;
	Var0 = 14;
	func_289(&Var0, 0, iParam2);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &Var0);
}

bool func_386(var uParam0, int iParam1)
{
	return (uParam0->f_46 != 54 && uParam0->f_48[0 /*15*/] == iParam1);
}

bool func_387(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_48)
	{
		if (uParam0->f_48[iVar0 /*15*/] == iParam1)
		{
			if (iVar0 == 0 && uParam0->f_46 == 54)
			{
				return false;
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_388(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	func_398(&(uParam0->f_1), iParam1);
}

void func_389(var uParam0, int iParam1, char[4] cParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	__LIB_7__::func_743(&(uParam0->f_1.f_26[iParam1 /*32*/]), cParam2);
}

void func_390(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_9, uParam0->f_26[iParam1 /*32*/].f_1);
	MISC::CLEAR_BIT(&(uParam0->f_157), iParam1);
}

bool func_391(var uParam0)
{
	if (func_386(uParam0, 19))
	{
		return true;
	}
	if (func_642(uParam0, 19))
	{
		return true;
	}
	return false;
}

char* func_392(int iParam0)
{
	switch (iParam0)
	{
		case -1234859967:
			return "MGDOM_MODE_0";
		case -382896522:
			return "MGDOM_MODE_1";
		case -1360983891:
			return "MGDOM_MODE_2";
		case -1617663169:
			return "MGDOM_MODE_3";
		default:
			break;
	}
	return "";
}

void func_395(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	if (iParam2 >= 0)
	{
		func_398(&(uParam0->f_1), iParam1);
		if (iParam2 == 1)
		{
			func_389(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGSCORE1", iParam2));
		}
		else
		{
			func_389(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGSCORE", iParam2));
		}
	}
}

void func_396(var uParam0, int iParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, iParam1);
}

void func_397(var uParam0, char[4] cParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_8, cParam1);
}

void func_398(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_26)
	{
		if (uParam0->f_26[iVar0 /*32*/])
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_26[iVar0 /*32*/].f_6, iVar0 == iParam1);
		}
		iVar0++;
	}
	uParam0->f_156 = iParam1;
	uParam0->f_155 = MISC::GET_FRAME_COUNT() + 30;
}

char* func_399(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "MGDOM_HLP_NOMOVES";
		case 2:
			return "MGDOM_HLP_NOMOVEDRAW";
		case 3:
			return "MGDOM_HLP_NOMOVEPASS";
		case 4:
			return "MGDOM_HLP_TILECHOOSE";
		case 5:
			return "MGDOM_HLP_MOVECHOOSE";
		case 6:
			return "MGDOM_HLP_MOREMOVES";
		case 9:
			return "MGDOM_HLP_SCORE";
		case 10:
			return "MGDOM_HLP_WAITPLYR";
		case 11:
			return "MGDOM_HLP_QRULE_0";
		case 12:
			return "MGDOM_HLP_QRULE_1";
		case 13:
			return "MGDOM_HLP_QRULE_2";
		case 14:
			return "MGDOM_HLP_QRULE_3";
		case 15:
			return "MGDOM_HLP_SPECTATOR";
		case 16:
			return "MGDOM_HLP_NOPLAYERS";
		case 7:
			return "MGDOM_HLP_VIEWDOMS";
		case 8:
			return "MGDOM_HLP_VIEWMOVES";
		case 17:
			return "MGDOM_HLP_MOVEFAIL";
		case 18:
			return "MGDOM_HLP_SPINPLACE";
		case 19:
			return "MGDOM_HLP_SPINOPEN";
		default:
			break;
	}
	return "";
}

void func_400(var uParam0, char* sParam1)
{
	uParam0->f_246 = __LIB_4__::func_981(sParam1, 0, 0, 1);
}

void func_406(var uParam0, int iParam1)
{
	uParam0->f_235 = iParam1;
}

int func_407(var uParam0, int iParam1, bool bParam2)
{
	struct<15> Var0;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	Var0.f_1 = 8;
	Var0.f_14 = -1;
	Var0 = 17;
	if (bParam2)
	{
		func_289(&Var0, 1, 1);
	}
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &Var0);
}

int func_408(var uParam0, int iParam1, bool bParam2)
{
	struct<15> Var0;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	Var0.f_1 = 8;
	Var0.f_14 = -1;
	Var0 = 18;
	if (bParam2)
	{
		func_289(&Var0, 1, 1);
	}
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &Var0);
}

void func_409(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<15> Var0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (iParam2 == 0)
	{
		return;
	}
	Var0.f_14 = __LIB_0__::func_271(iParam0);
	Var0 = iParam1;
	Var0.f_12 = iParam2;
	Var0.f_8 = 0;
	if (iParam3 != 0)
	{
		Var0.f_13 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
}

bool func_414(var uParam0)
{
	return uParam0->f_46 == 54;
}

void func_415(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = func_649(uParam1);
	switch (iVar0)
	{
		case 1:
			func_650(uParam0, uParam1, 0, 1, 1056964608 /* Float: 0.5f */);
			func_651(uParam1, 30);
			break;
		case 30:
			if (func_652(uParam1))
			{
				func_651(uParam1, 50);
			}
			break;
		case 50:
			if (uParam0->f_194 == iParam2)
			{
				uParam0->f_195 = 1;
				uParam0->f_198 = 3;
			}
			func_651(uParam1, 54);
			break;
	}
}

void func_416(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = func_649(uParam1);
	switch (iVar0)
	{
		case 1:
			__LIB_1__::func_148(&(uParam1->f_43));
			func_653(uParam0, uParam1, 0);
			func_651(uParam1, 50);
			break;
		case 50:
			if (__LIB_0__::func_265(&(uParam1->f_43)) > 1f)
			{
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_195 = 1;
					uParam0->f_198 = 3;
				}
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_417(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = func_649(uParam1);
	iVar1 = __LIB_12__::func_475(uParam1);
	switch (iVar0)
	{
		case 1:
			if (iVar1 == PLAYER::PLAYER_PED_ID())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			}
			else
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(iVar1))
				{
					PED::_0xF1C03A5352243A30(iVar1);
					TASK::CLEAR_PED_TASKS(iVar1, true, false);
				}
				func_655(iVar1, 1);
				WEAPON::_0x94A3C1B804D291EC(iVar1, 0, 0, 1, 1);
			}
			if (__LIB_1__::func_652())
			{
				func_656(uParam0, uParam1, 1000f, 1);
			}
			else
			{
				func_656(uParam0, uParam1, 1073741824 /* Float: 2f */, 0);
			}
			__LIB_1__::func_148(&(uParam1->f_43));
			func_651(uParam1, 2);
			break;
		case 2:
			if (__LIB_0__::func_264(&(uParam1->f_43)) > 0.1f)
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608 /* Float: 0.5f */);
				func_651(uParam1, 30);
			}
			break;
		case 30:
			if (func_652(uParam1))
			{
				func_651(uParam1, 50);
			}
			break;
		case 50:
			ENTITY::CREATE_MODEL_HIDE(*uParam0, 2f, joaat("P_MUGCOFFEE01X"), true);
			uParam1->f_3 = 1;
			if (uParam0->f_194 == iParam2)
			{
				uParam0->f_195 = 1;
				uParam0->f_198 = 3;
			}
			func_651(uParam1, 54);
			break;
	}
}

void func_418(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	char* sVar13;
	char* sVar14;
	struct<4> Var15;
	int iVar19;
	int iVar20;
	sVar13 = "PLAYER_00_ENTER_LEFT";
	sVar14 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_00";
	iVar19 = __LIB_12__::func_475(uParam1);
	iVar20 = func_649(uParam1);
	if (func_657(&(uParam1->f_48[0 /*15*/]), 0) == 1)
	{
		sVar13 = "PLAYER_00_ENTER_RIGHT";
	}
	switch (uParam1->f_10)
	{
		case 0:
			sVar14 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_00";
			break;
		case 1:
			sVar14 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_01";
			break;
		case 2:
			sVar14 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_02";
			break;
		case 3:
			sVar14 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_03";
			break;
	}
	if (func_69(uParam0, uParam1))
	{
		sVar14 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_FEMALE_00";
	}
	switch (iVar20)
	{
		case 1:
			uParam1->f_3 = 0;
			STREAMING::REQUEST_ANIM_DICT(sVar14);
			func_651(uParam1, 6);
			break;
		case 6:
			if (iVar19 == PLAYER::PLAYER_PED_ID())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			}
			WEAPON::_HIDE_PED_WEAPONS(iVar19, 2, false);
			TASK::TASK_SWAP_WEAPON(iVar19, 0, 0, 0, 0);
			func_651(uParam1, 7);
			break;
		case 7:
			if (func_658(iVar19))
			{
				if (iVar19 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				}
				func_651(uParam1, 9);
			}
			break;
		case 9:
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar14))
			{
				return;
			}
			if (!uParam1->f_2)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar19, false);
			}
			func_659(uParam0, iParam2, &vVar7);
			func_277(uParam0, iParam2, &vVar10);
			vVar1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sVar14, sVar13, vVar7, vVar10, 0f, 2) };
			vVar4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sVar14, sVar13, vVar7, vVar10, 0f, 2) };
			if (__LIB_0__::func_175(vVar1, 0f, 0f, 0f, 1056964608 /* Float: 0.5f */, 1))
			{
				func_651(uParam1, 12);
			}
			else
			{
				Var15 = vVar4.z;
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(iVar19, vVar1, 1f, 20000, 0.25f, 5120, Var15, vVar4.z);
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_198 = 1;
				}
				func_651(uParam1, 11);
			}
			break;
		case 11:
			vVar1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sVar14, sVar13, vVar7, vVar10, 0f, 2) };
			if (!__LIB_0__::func_163(iVar19, -1672495956) || __LIB_0__::func_94(Global_35, vVar1, 0) < 0.25f)
			{
				func_659(uParam0, iParam2, &vVar7);
				func_277(uParam0, iParam2, &vVar10);
				vVar7.f_2 = (vVar7.z - 0.5f);
				func_662(uParam0, uParam1, sVar14, sVar13, vVar7, vVar10, 41350, 0, 0, 1);
				func_651(uParam1, 12);
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_198 = 2;
				}
			}
			break;
		case 12:
			func_663(uParam1, sVar14, sVar13, &fVar0);
			if (fVar0 > 0.4f)
			{
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_195 = 1;
					uParam0->f_198 = 3;
				}
				uParam1->f_3 = 1;
			}
			if (!func_664(uParam1, sVar14, sVar13, 0))
			{
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_195 = 1;
					uParam0->f_198 = 3;
				}
				uParam1->f_3 = 1;
				func_653(uParam0, uParam1, 1);
				func_651(uParam1, 50);
				__LIB_1__::func_148(&(uParam1->f_43));
			}
			break;
		case 50:
			if (__LIB_0__::func_265(&(uParam1->f_43)) > 0.5f)
			{
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_195 = 1;
					uParam0->f_198 = 3;
				}
				uParam1->f_3 = 1;
				STREAMING::REMOVE_ANIM_DICT(sVar14);
				func_650(uParam0, uParam1, 0, 1, 1056964608 /* Float: 0.5f */);
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_419(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	vector3 vVar10;
	iVar0 = __LIB_12__::func_475(uParam1);
	iVar1 = func_649(uParam1);
	StringCopy(&cVar2, "MINIGAME_DOMINOES_PLAYER_", 64);
	StringIntConCat(&cVar2, uParam1->f_10 + 1, 64);
	switch (iVar1)
	{
		case 1:
			uParam1->f_3 = 0;
			if (iVar0 == PLAYER::PLAYER_PED_ID())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				__LIB_7__::func_859(&(uParam3->f_2334.f_240), 0);
			}
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_990[iParam2]))
			{
				uParam1->f_48[0 /*15*/] = 3;
				func_651(uParam1, 1);
				return;
			}
			if (uParam0->f_194 == iParam2)
			{
				uParam0->f_198 = 1;
			}
			WEAPON::_HIDE_PED_WEAPONS(iVar0, 2, false);
			TASK::TASK_SWAP_WEAPON(iVar0, 0, 0, 1, 1);
			func_651(uParam1, 6);
			break;
		case 6:
			if (!__LIB_0__::func_163(iVar0, 716706914))
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
				{
					TASK::_TASK_USE_SCENARIO_POINT(iVar0, uParam0->f_990[iParam2], 0, 0, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::_TASK_USE_SCENARIO_POINT(iVar0, uParam0->f_990[iParam2], &cVar2, 0, true, false, 0, false, -1f, false);
				}
				__LIB_1__::func_148(&(uParam1->f_43));
				func_651(uParam1, 10);
			}
			break;
		case 10:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0) && PED::_IS_PED_USING_SCENARIO_HASH(iVar0, joaat("MINIGAME_DOMINOES_PLAYER")))
			{
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_195 = 1;
					uParam0->f_198 = 3;
				}
				uParam1->f_3 = 1;
				vVar10 = { func_68(uParam0, uParam1) };
				StringCopy(&cVar2, "MINI_GAMES@DOMINOES@GAME@PLAYER_0", 64);
				StringIntConCat(&cVar2, uParam1->f_10, 64);
				PED::_0xF1C03A5352243A30(iVar0);
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
				PED::SET_PED_LEG_IK_MODE(iVar0, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, &cVar2, "PLAYER_00_IDLE", *uParam0, vVar10, 2f, -8f, -1, 536912257, 0f, 2, 0, 0);
				PED::_0x2208438012482A1A(iVar0, false, false);
				__LIB_1__::func_148(&(uParam1->f_43));
				func_651(uParam1, 12);
			}
			else if (__LIB_0__::func_264(&(uParam1->f_43)) > 6f && !__LIB_0__::func_163(iVar0, -76381094))
			{
				uParam1->f_48[0 /*15*/] = 3;
				func_651(uParam1, 1);
			}
			break;
		case 12:
			if (__LIB_0__::func_264(&(uParam1->f_43)) > 0.5f)
			{
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_420(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	var uVar18;
	var uVar21;
	vector3 vVar24;
	float fVar27;
	int iVar28;
	int iVar29;
	iVar0 = func_649(uParam1);
	iVar1 = func_657(&(uParam1->f_48[0 /*15*/]), 1);
	StringCopy(&cVar2, "PBL_EXITR", 64);
	StringIntConCat(&cVar2, uParam1->f_9, 64);
	StringCopy(&cVar10, "script@mini_game@dominoes@interrupt_exits", 64);
	switch (iVar0)
	{
		case 1:
			if (func_657(&(uParam1->f_48[0 /*15*/]), 2) == 1)
			{
				func_651(uParam1, 53);
				return;
			}
			if (uParam0->f_740)
			{
				if (func_438(uParam0, &iVar28))
				{
					iVar29 = 1;
					func_442(uParam0, 21, iVar28, iParam2);
				}
				if (iVar29 == 0 && uParam3->f_7.f_700 > 0)
				{
					func_442(uParam0, 25, iParam2, -1);
				}
			}
			else if (uParam3->f_7.f_700 > 0)
			{
				func_442(uParam0, 25, iParam2, -1);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_697))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_697);
			}
			uParam0->f_697 = ANIMSCENE::_CREATE_ANIM_SCENE(&cVar10, 2, &cVar2, false, true);
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_697);
			func_651(uParam1, 3);
			break;
		case 3:
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_697, true, false))
			{
				return;
			}
			func_260(1, *uParam0, uParam0->f_3, iParam2, &uVar18, 0);
			__LIB_7__::func_744(1, uParam0->f_3, iParam2, &uVar21);
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			if (uParam0->f_194 == iParam2)
			{
				uParam0->f_198 = 4;
			}
			uParam0->f_740 = 0;
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_697, *uParam0, func_68(uParam0, uParam1), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_697, "player", uParam1->f_12, 0);
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_697);
			func_651(uParam1, 50);
			break;
		case 50:
			fVar27 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_697);
			if (uParam1->f_16 == 0)
			{
				if (fVar27 > 0.05f)
				{
					uParam1->f_16 = 1;
					func_666(uParam0);
					func_667(uParam3);
					CAM::_0x04084490CC302CFB();
				}
			}
			if (fVar27 > 0.8f && uParam1->f_17 == 0)
			{
				if (__LIB_1__::func_652())
				{
					func_240(uParam0, 1);
				}
				else
				{
					func_134(uParam0);
					func_668(uParam0);
					func_64(uParam0);
					func_65(uParam0);
				}
				uParam1->f_17 = 1;
			}
			if (fVar27 >= 0.825f || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_12, joaat("INTERRUPTIBLE")))
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
				func_651(uParam1, 53);
			}
			break;
		case 53:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
			if (uParam0->f_194 == iParam2)
			{
				uParam0->f_195 = 0;
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_697))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_697);
			}
			uParam0->f_696 = -1;
			if (PED::IS_PED_A_PLAYER(uParam1->f_12))
			{
				PED::SET_PED_LEG_IK_MODE(uParam1->f_12, 2);
			}
			else
			{
				PED::SET_PED_LEG_IK_MODE(uParam1->f_12, 1);
			}
			if (__LIB_1__::func_652())
			{
				vVar24 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_12, true, false) - *uParam0 };
				vVar24.f_2 = 0f;
				__LIB_0__::func_173(vVar24);
				__LIB_1__::func_148(&(uParam1->f_43));
				TASK::TASK_GO_STRAIGHT_TO_COORD(uParam1->f_12, *uParam0 + vVar24 * Vector(2f, 2f, 2f), 1f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
				func_651(uParam1, 55);
			}
			else
			{
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_196 = 1;
				}
				if (__LIB_0__::func_407(uParam1->f_12))
				{
					TASK::TASK_WANDER_STANDARD(uParam1->f_12, 40000f, 0);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(uParam1->f_12, true, true);
				}
				func_651(uParam1, 54);
				if (iVar1 != 0)
				{
					func_238(uParam0, iParam2, iVar1);
				}
			}
			break;
		case 55:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
			if (__LIB_0__::func_264(&(uParam1->f_43)) > 1.5f)
			{
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_196 = 1;
				}
				func_88(uParam3);
				if (__LIB_0__::func_407(uParam1->f_12))
				{
					TASK::TASK_WANDER_STANDARD(uParam1->f_12, 40000f, 0);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(uParam1->f_12, true, true);
				}
				func_651(uParam1, 54);
				if (iVar1 != 0)
				{
					func_238(uParam0, iParam2, iVar1);
				}
			}
			break;
	}
}

void func_421(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	sVar6 = "PLAYER_00_EXIT_LEFT";
	sVar7 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_00";
	iVar8 = func_649(uParam1);
	iVar9 = __LIB_12__::func_475(uParam1);
	iVar10 = func_657(&(uParam1->f_48[0 /*15*/]), 1);
	iVar11 = func_657(&(uParam1->f_48[0 /*15*/]), 3);
	switch (uParam1->f_10)
	{
		case 0:
			sVar7 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_00";
			break;
		case 1:
			sVar7 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_01";
			break;
		case 2:
			sVar7 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_02";
			break;
		case 3:
			sVar7 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_03";
			break;
	}
	if (func_69(uParam0, uParam1))
	{
		sVar7 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_FEMALE_00";
	}
	if (func_657(&(uParam1->f_48[0 /*15*/]), 0) == 1)
	{
		sVar6 = "PLAYER_00_EXIT_RIGHT";
	}
	switch (iVar8)
	{
		case 1:
			__LIB_1__::func_148(&(uParam1->f_43));
			STREAMING::REQUEST_ANIM_DICT(sVar7);
			__LIB_4__::func_880(iVar9);
			func_651(uParam1, 3);
			break;
		case 3:
			if (STREAMING::HAS_ANIM_DICT_LOADED(sVar7))
			{
				if (iVar11 > 0)
				{
					func_651(uParam1, 2);
				}
				else
				{
					func_651(uParam1, 10);
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_871(&(uParam1->f_43)) > iVar11)
			{
				func_651(uParam1, 10);
			}
			break;
		case 10:
			if (iParam2 == uParam0->f_194)
			{
				if (__LIB_0__::func_2() == -1 && __LIB_1__::func_652())
				{
					iVar13 = 0;
					while (iVar13 < 4)
					{
						if (iVar13 != iParam2)
						{
							if (uParam0->f_199[iVar13 /*124*/].f_16 == 0 && func_204(uParam0, iVar13))
							{
								return;
							}
						}
						iVar13++;
					}
				}
			}
			func_651(uParam1, 12);
			break;
		case 12:
			__LIB_1__::func_148(&(uParam1->f_43));
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			if (uParam0->f_194 == iParam2)
			{
				uParam0->f_198 = 4;
				func_438(uParam0, &iVar13);
				if (__LIB_1__::func_985())
				{
					if (uParam0->f_740)
					{
						func_442(uParam0, 21, iVar13, iParam2);
					}
				}
				else if (uParam0->f_740)
				{
					func_442(uParam0, 21, iParam2, iVar13);
				}
				else
				{
					func_442(uParam0, 25, iParam2, -1);
				}
			}
			if (func_657(&(uParam1->f_48[0 /*15*/]), 2) == 1)
			{
				func_651(uParam1, 53);
				return;
			}
			func_659(uParam0, iParam2, &vVar0);
			func_277(uParam0, iParam2, &vVar3);
			vVar0.f_2 = (vVar0.z - 0.5f);
			func_662(uParam0, uParam1, sVar7, sVar6, vVar0, vVar3, 536914306, 0, 0, 1);
			PED::_0x2208438012482A1A(iVar9, true, true);
			func_651(uParam1, 50);
			break;
		case 50:
			func_663(uParam1, sVar7, sVar6, &fVar12);
			if (fVar12 > 0.4f)
			{
				uParam1->f_16 = 1;
			}
			if (__LIB_0__::func_2() == -1)
			{
				if (uParam0->f_194 != -1 && uParam0->f_199[uParam0->f_194 /*124*/].f_16 == 1)
				{
					if (__LIB_1__::func_652())
					{
						func_672(1, *uParam0, uParam0->f_3, uParam1->f_9, -0.5f, -0.5f, 0f, &vVar0, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar9, false, true);
						__LIB_1__::func_338(iVar9, vVar0);
						func_651(uParam1, 53);
						return;
					}
					else
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar9, false, true);
						func_23(uParam0, uParam1, 0f);
						func_651(uParam1, 53);
						return;
					}
				}
			}
			if ((!func_664(uParam1, sVar7, sVar6, 0) || fVar12 > 0.82f) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar9, joaat("INTERRUPTIBLE")))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar9, false);
				if (__LIB_0__::func_407(iVar9))
				{
					TASK::TASK_WANDER_STANDARD(iVar9, 40000f, 0);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iVar9, true, true);
				}
				func_651(uParam1, 53);
			}
			break;
		case 53:
			if (uParam0->f_194 == iParam2)
			{
				uParam0->f_195 = 0;
				uParam0->f_196 = 1;
			}
			if (PED::IS_PED_A_PLAYER(iVar9))
			{
				PED::SET_PED_LEG_IK_MODE(iVar9, 2);
			}
			else
			{
				PED::SET_PED_LEG_IK_MODE(iVar9, 1);
			}
			STREAMING::REMOVE_ANIM_DICT(sVar7);
			func_651(uParam1, 54);
			if (iVar10 != 0)
			{
				func_238(uParam0, iParam2, iVar10);
			}
			break;
	}
}

void func_422(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];
	int iVar19;
	vector3 vVar20;
	iVar19 = func_649(uParam1);
	vVar20 = { func_68(uParam0, uParam1) };
	uParam0->f_740 = 1;
	if (uParam1->f_8 && iVar19 < 51)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(1250);
		}
		else if (iVar19 < 51)
		{
			func_651(uParam1, 51);
		}
	}
	if (iVar19 > 1 && iVar19 < 52)
	{
		if (uParam1->f_9 != uParam0->f_194)
		{
			if (uParam0->f_198 == 4 || func_236(uParam1, 19))
			{
				func_651(uParam1, 52);
			}
		}
		else if (func_209(uParam0, 19))
		{
			func_651(uParam1, 52);
		}
	}
	switch (iVar19)
	{
		case 1:
			if (uParam1->f_9 == uParam0->f_194)
			{
				uParam0->f_197 = 0;
				if (__LIB_1__::func_652())
				{
					__LIB_1__::func_206(*uParam0, 2f, 0);
				}
			}
			uParam0->f_988 = 0;
			func_230(uParam0);
			func_651(uParam1, 3);
			break;
		case 3:
			StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE", 64);
			STREAMING::REQUEST_ANIM_DICT(&cVar11);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_DEALER@0", 64);
				StringIntConCat(&cVar11, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar11);
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_PLAYER@0", 64);
				StringIntConCat(&cVar11, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar11);
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_IDLE@0", 64);
				StringIntConCat(&cVar11, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar11);
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_TO_POP@0", 64);
				StringIntConCat(&cVar11, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar11);
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@IDLE_TO_POP@0", 64);
				StringIntConCat(&cVar11, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar11);
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0", 64);
				StringIntConCat(&cVar11, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar11);
				iVar0++;
			}
			func_651(uParam1, 4);
			break;
		case 4:
			if (func_236(uParam1, 19) || func_209(uParam0, 19))
			{
				func_651(uParam1, 52);
				return;
			}
			StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE", 64);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar11))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_DEALER@0", 64);
				StringIntConCat(&cVar11, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar11))
				{
					return;
				}
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_PLAYER@0", 64);
				StringIntConCat(&cVar11, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar11))
				{
					return;
				}
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_IDLE@0", 64);
				StringIntConCat(&cVar11, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar11))
				{
					return;
				}
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_TO_POP@0", 64);
				StringIntConCat(&cVar11, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar11))
				{
					return;
				}
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@IDLE_TO_POP@0", 64);
				StringIntConCat(&cVar11, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar11))
				{
					return;
				}
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0", 64);
				StringIntConCat(&cVar11, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar11))
				{
					return;
				}
				iVar0++;
			}
			if (uParam1->f_47 == 16 && uParam0->f_987)
			{
				func_651(uParam1, 16);
			}
			else
			{
				func_651(uParam1, 14);
			}
			break;
		case 14:
			if (func_236(uParam1, 19) || func_209(uParam0, 19))
			{
				func_651(uParam1, 54);
				return;
			}
			if (iParam2 == uParam0->f_192)
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_DEALER@0", 64);
				StringCopy(&cVar3, "PLAYER_00_DEALER", 64);
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					StringCopy(&cVar3, "PLAYER_DEALER_FEMALE", 64);
				}
			}
			else
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_PLAYER@0", 64);
				StringCopy(&cVar3, "PLAYER_00_PLAYER", 64);
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					StringCopy(&cVar3, "PLAYER_PLAYER_FEMALE", 64);
				}
			}
			StringIntConCat(&cVar11, uParam1->f_10, 64);
			func_674(uParam0, uParam1, &cVar11, &cVar3, vVar20, 33154, 0, 2f, 1);
			func_651(uParam1, 15);
			break;
		case 15:
			if (iParam2 == uParam0->f_192)
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_DEALER@0", 64);
				StringCopy(&cVar3, "PLAYER_00_DEALER", 64);
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					StringCopy(&cVar3, "PLAYER_DEALER_FEMALE", 64);
				}
			}
			else
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_PLAYER@0", 64);
				StringCopy(&cVar3, "PLAYER_00_PLAYER", 64);
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					StringCopy(&cVar3, "PLAYER_PLAYER_FEMALE", 64);
				}
			}
			StringIntConCat(&cVar11, uParam1->f_10, 64);
			if (func_664(&(uParam0->f_199[iParam2 /*124*/]), &cVar11, &cVar3, 0))
			{
				return;
			}
			if (iParam2 == uParam0->f_192)
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_DEALER@0", 64);
			}
			else
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_PLAYER@0", 64);
			}
			StringIntConCat(&cVar11, uParam1->f_10, 64);
			STREAMING::REMOVE_ANIM_DICT(&cVar11);
			func_651(uParam1, 16);
			break;
		case 16:
			if (func_236(uParam1, 19) || func_209(uParam0, 19))
			{
				func_651(uParam1, 52);
				return;
			}
			if (iParam2 == uParam0->f_192)
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE", 64);
				StringCopy(&cVar3, "PLAYER_00_SHUFFLE", 64);
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					StringCopy(&cVar3, "PLAYER_SHUFFLE_FEMALE", 64);
				}
			}
			else
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_IDLE@0", 64);
				StringIntConCat(&cVar11, uParam1->f_10, 64);
				StringCopy(&cVar3, "PLAYER_00_SHUFFLE_IDLE", 64);
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					StringCopy(&cVar3, "PLAYER_SHUFFLE_IDLE_FEMALE", 64);
				}
			}
			func_674(uParam0, uParam1, &cVar11, &cVar3, vVar20, 33154, 0, 2f, 1);
			if (iParam2 == uParam0->f_192)
			{
				iVar0 = 0;
				while (iVar0 < 28)
				{
					if (iVar0 < 10)
					{
						StringCopy(&cVar3, "PIECE_0", 64);
					}
					else
					{
						StringCopy(&cVar3, "PIECE_", 64);
					}
					StringIntConCat(&cVar3, iVar0, 64);
					StringConCat(&cVar3, "_SHUFFLE", 64);
					__LIB_7__::func_745(uParam0->f_746[iVar0 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 0);
					func_676(uParam0->f_746[iVar0 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 0, 1065353216 /* Float: 1f */, 0, 0);
					iVar0++;
				}
			}
			func_651(uParam1, 17);
			break;
		case 17:
			StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE", 64);
			StringCopy(&cVar3, "PLAYER_00_SHUFFLE", 64);
			if (func_69(uParam0, &(uParam0->f_199[uParam0->f_192 /*124*/])))
			{
				StringCopy(&cVar3, "PLAYER_SHUFFLE_FEMALE", 64);
			}
			if (func_664(&(uParam0->f_199[uParam0->f_192 /*124*/]), &cVar11, &cVar3, 0))
			{
				return;
			}
			if (iParam2 == uParam0->f_192)
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE", 64);
			}
			else
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_IDLE@0", 64);
				StringIntConCat(&cVar11, uParam1->f_10, 64);
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar11);
			func_651(uParam1, 18);
			break;
		case 18:
			if (func_236(uParam1, 19) || func_209(uParam0, 19))
			{
				func_651(uParam1, 52);
				return;
			}
			if (iParam2 == uParam0->f_192)
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_TO_POP@0", 64);
				StringIntConCat(&cVar11, uParam1->f_10, 64);
				StringCopy(&cVar3, "PLAYER_00_SHUFFLE_TO_POP", 64);
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					StringCopy(&cVar3, "PLAYER_SHUFFLE_TO_POP_FEMALE", 64);
				}
			}
			else
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@IDLE_TO_POP@0", 64);
				StringIntConCat(&cVar11, uParam1->f_10, 64);
				StringCopy(&cVar3, "PLAYER_00_IDLE_TO_POP", 64);
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					StringCopy(&cVar3, "PLAYER_IDLE_TO_POP_FEMALE", 64);
				}
			}
			func_70(uParam0, uParam1, &cVar11, &cVar3, vVar20, 33154, 0, 0, 1);
			func_651(uParam1, 19);
			break;
		case 19:
			if (iParam2 == uParam0->f_192)
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_TO_POP@0", 64);
				StringIntConCat(&cVar11, uParam1->f_10, 64);
				StringCopy(&cVar3, "PLAYER_00_SHUFFLE_TO_POP", 64);
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					StringCopy(&cVar3, "PLAYER_SHUFFLE_TO_POP_FEMALE", 64);
				}
			}
			else
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@IDLE_TO_POP@0", 64);
				StringIntConCat(&cVar11, uParam1->f_10, 64);
				StringCopy(&cVar3, "PLAYER_00_IDLE_TO_POP", 64);
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					StringCopy(&cVar3, "PLAYER_IDLE_TO_POP_FEMALE", 64);
				}
			}
			if (func_664(&(uParam0->f_199[iParam2 /*124*/]), &cVar11, &cVar3, 0))
			{
				return;
			}
			if (iParam2 == uParam0->f_192)
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_TO_POP@0", 64);
				StringIntConCat(&cVar11, uParam1->f_10, 64);
			}
			else
			{
				StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@IDLE_TO_POP@0", 64);
				StringIntConCat(&cVar11, uParam1->f_10, 64);
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar11);
			func_651(uParam1, 20);
			break;
		case 20:
			StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0", 64);
			StringIntConCat(&cVar11, uParam1->f_10, 64);
			StringCopy(&cVar3, "PLAYER_00_POP_RACK", 64);
			if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
			{
				StringCopy(&cVar3, "PLAYER_POP_RACK_FEMALE", 64);
			}
			func_70(uParam0, uParam1, &cVar11, &cVar3, vVar20, 33154, 0f, 1, 1);
			PED::_0x2208438012482A1A(uParam1->f_12, true, true);
			if (iParam2 == uParam0->f_192)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					vVar20 = { func_677(uParam0, iVar2) };
					StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0", 64);
					StringIntConCat(&cVar11, uParam0->f_199[iVar2 /*124*/].f_10, 64);
					iVar0 = 0;
					while (iVar0 < 7)
					{
						iVar1 = (iVar2 * 7 + iVar0);
						StringCopy(&cVar3, "PIECE_0", 64);
						StringIntConCat(&cVar3, iVar0, 64);
						StringConCat(&cVar3, "_POP_RACK", 64);
						if (func_678(uParam0, iVar2))
						{
							func_676(uParam0->f_746[iVar1 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 0, 1065353216 /* Float: 1f */, 0, 1);
						}
						else
						{
							__LIB_7__::func_745(uParam0->f_746[iVar1 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 0f);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iVar1 /*8*/].f_1, true);
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_746[iVar1 /*8*/].f_1, uParam0->f_745, false);
						}
						iVar0++;
					}
					iVar2++;
				}
			}
			func_651(uParam1, 21);
			break;
		case 21:
			StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0", 64);
			StringIntConCat(&cVar11, uParam1->f_10, 64);
			StringCopy(&cVar3, "PLAYER_00_POP_RACK", 64);
			if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
			{
				StringCopy(&cVar3, "PLAYER_POP_RACK_FEMALE", 64);
			}
			if (func_679(uParam1))
			{
				if (func_236(uParam1, 19) || func_209(uParam0, 19))
				{
					func_651(uParam1, 52);
					return;
				}
			}
			if (func_664(&(uParam0->f_199[iParam2 /*124*/]), &cVar11, &cVar3, 0))
			{
				return;
			}
			func_516(uParam0, uParam1, 4f);
			func_651(uParam1, 53);
			break;
		case 51:
			if (iParam2 == uParam0->f_192)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					vVar20 = { func_677(uParam0, iVar2) };
					StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0", 64);
					StringIntConCat(&cVar11, uParam0->f_199[iVar2 /*124*/].f_10, 64);
					iVar0 = 0;
					while (iVar0 < 7)
					{
						iVar1 = (iVar2 * 7 + iVar0);
						StringCopy(&cVar3, "PIECE_0", 64);
						StringIntConCat(&cVar3, iVar0, 64);
						StringConCat(&cVar3, "_POP_RACK", 64);
						if (func_678(uParam0, iVar2))
						{
							func_676(uParam0->f_746[iVar1 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 1f, 1065353216 /* Float: 1f */, 0, 1);
						}
						else
						{
							func_676(uParam0->f_746[iVar1 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 0f, 0f, 0, 1);
						}
						iVar0++;
					}
					iVar2++;
				}
			}
			func_651(uParam1, 53);
			break;
		case 52:
			iVar1 = 0;
			while (iVar1 < 28)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar1 /*8*/].f_1))
				{
					TASK::STOP_ANIM_PLAYBACK(uParam0->f_746[iVar1 /*8*/].f_1, 2, false);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iVar1 /*8*/].f_1, true);
				}
				iVar1++;
			}
			__LIB_1__::func_148(&(uParam1->f_43));
			func_516(uParam0, uParam1, 4f);
			func_651(uParam1, 55);
			break;
		case 55:
			if (__LIB_0__::func_264(&(uParam1->f_43)) > 0.25f)
			{
				func_651(uParam1, 54);
			}
			break;
		case 53:
			if (iParam2 == uParam0->f_192)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					vVar20 = { func_677(uParam0, iVar2) };
					StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0", 64);
					StringIntConCat(&cVar11, uParam0->f_199[iVar2 /*124*/].f_10, 64);
					iVar0 = 0;
					while (iVar0 < 7)
					{
						iVar1 = (iVar2 * 7 + iVar0);
						StringCopy(&cVar3, "PIECE_0", 64);
						StringIntConCat(&cVar3, iVar0, 64);
						StringConCat(&cVar3, "_POP_RACK", 64);
						if (func_678(uParam0, iVar2))
						{
							__LIB_7__::func_745(uParam0->f_746[iVar1 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 1f);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iVar1 /*8*/].f_1, true);
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_746[iVar1 /*8*/].f_1, uParam0->f_745, false);
						}
						else
						{
							__LIB_7__::func_745(uParam0->f_746[iVar1 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 0f);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iVar1 /*8*/].f_1, true);
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_746[iVar1 /*8*/].f_1, uParam0->f_745, false);
						}
						iVar0++;
					}
					iVar2++;
				}
			}
			if (!func_236(uParam1, 13))
			{
				uParam1->f_18.f_19 = 0;
				func_650(uParam0, uParam1, 0, 1, 1056964608 /* Float: 0.5f */);
				__LIB_1__::func_212(1, 2);
				if (uParam1->f_8)
				{
					BUILTIN::WAIT(125);
					uParam1->f_8 = 0;
					CAM::DO_SCREEN_FADE_IN(1250);
				}
			}
			StringCopy(&cVar11, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0", 64);
			StringIntConCat(&cVar11, uParam1->f_10, 64);
			STREAMING::REMOVE_ANIM_DICT(&cVar11);
			func_651(uParam1, 54);
			break;
	}
}

void func_423(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[64];
	char cVar12[64];
	int iVar20;
	vector3 vVar21;
	iVar20 = func_649(uParam1);
	vVar21 = { func_68(uParam0, uParam1) };
	if (uParam1->f_8 && iVar20 < 51)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(1250);
		}
		else if (iVar20 < 51)
		{
			func_651(uParam1, 51);
		}
	}
	if (iVar20 > 1 && iVar20 < 52)
	{
		if (uParam1->f_9 != uParam0->f_194)
		{
			if (uParam0->f_198 == 4 || func_236(uParam1, 19))
			{
				func_651(uParam1, 51);
			}
		}
		else if (func_209(uParam0, 19))
		{
			func_651(uParam1, 51);
		}
	}
	switch (iVar20)
	{
		case 1:
			if (func_236(uParam1, 19) || func_209(uParam0, 19))
			{
				func_651(uParam1, 54);
				return;
			}
			func_651(uParam1, 3);
			break;
		case 3:
			StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT", 64);
			STREAMING::REQUEST_ANIM_DICT(&cVar12);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@INTRO@0", 64);
				StringIntConCat(&cVar12, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar12);
				StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@IDLE@0", 64);
				StringIntConCat(&cVar12, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar12);
				StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@OUTRO@0", 64);
				StringIntConCat(&cVar12, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar12);
				iVar0++;
			}
			func_651(uParam1, 4);
			break;
		case 4:
			StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT", 64);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar12))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@INTRO@0", 64);
				StringIntConCat(&cVar12, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar12))
				{
					return;
				}
				StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@IDLE@0", 64);
				StringIntConCat(&cVar12, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar12))
				{
					return;
				}
				StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@OUTRO@0", 64);
				StringIntConCat(&cVar12, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar12))
				{
					return;
				}
				iVar0++;
			}
			if (iParam2 == uParam0->f_192)
			{
				func_651(uParam1, 22);
			}
			else
			{
				func_651(uParam1, 26);
			}
			break;
		case 26:
			StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@IDLE@0", 64);
			StringCopy(&cVar4, "PLAYER_00_IDLE", 64);
			StringIntConCat(&cVar12, uParam1->f_10, 64);
			if (func_69(uParam0, uParam1))
			{
				StringCopy(&cVar4, "PLAYER_IDLE_FEMALE", 64);
			}
			func_70(uParam0, uParam1, &cVar12, &cVar4, vVar21, 33154, 0, 0, 1);
			func_651(uParam1, 27);
			break;
		case 27:
			StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@IDLE@0", 64);
			StringCopy(&cVar4, "PLAYER_00_IDLE", 64);
			StringIntConCat(&cVar12, uParam1->f_10, 64);
			if (func_69(uParam0, uParam1))
			{
				StringCopy(&cVar4, "PLAYER_IDLE_FEMALE", 64);
			}
			if (func_664(uParam1, &cVar12, &cVar4, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar12);
			func_651(uParam1, 53);
			break;
		case 22:
			StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@INTRO@0", 64);
			StringCopy(&cVar4, "PLAYER_00_INTRO", 64);
			StringIntConCat(&cVar12, uParam1->f_10, 64);
			if (func_69(uParam0, uParam1))
			{
				StringCopy(&cVar4, "PLAYER_INTRO_FEMALE", 64);
			}
			func_70(uParam0, uParam1, &cVar12, &cVar4, vVar21, 33154, 0, 0, 1);
			func_651(uParam1, 23);
			break;
		case 23:
			StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@INTRO@0", 64);
			StringCopy(&cVar4, "PLAYER_00_INTRO", 64);
			StringIntConCat(&cVar12, uParam1->f_10, 64);
			if (func_69(uParam0, uParam1))
			{
				StringCopy(&cVar4, "PLAYER_INTRO_FEMALE", 64);
			}
			if (func_664(uParam1, &cVar12, &cVar4, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar12);
			func_651(uParam1, 24);
			break;
		case 24:
			StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT", 64);
			StringCopy(&cVar4, "PLAYER_00_COLLECT_TILES", 64);
			if (func_69(uParam0, uParam1))
			{
				StringCopy(&cVar4, "PLAYER_COLLECT_TILES_FEMALE", 64);
			}
			func_70(uParam0, uParam1, &cVar12, &cVar4, vVar21, 33154, 0, 0, 1);
			PED::_0x2208438012482A1A(uParam1->f_12, true, true);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!func_678(uParam0, iVar0))
				{
					iVar3 = __LIB_7__::func_746(iVar0, uParam0->f_192);
					iVar1 = 0;
					while (iVar1 < 7)
					{
						iVar2 = (iVar0 * 7 + iVar1);
						if (iVar3 < 10)
						{
							StringCopy(&cVar4, "PLAYER_00_PIECE_0", 64);
						}
						else
						{
							StringCopy(&cVar4, "PLAYER_00_PIECE_", 64);
						}
						StringIntConCat(&cVar4, iVar3, 64);
						StringConCat(&cVar4, "_COLLECT_TILES", 64);
						func_676(uParam0->f_746[iVar2 /*8*/].f_1, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT", &cVar4, *uParam0, vVar21, 0, 1065353216 /* Float: 1f */, 0, 1);
						iVar3++;
						iVar1++;
					}
				}
				iVar0++;
			}
			func_651(uParam1, 25);
			break;
		case 25:
			StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT", 64);
			StringCopy(&cVar4, "PLAYER_00_COLLECT_TILES", 64);
			if (func_69(uParam0, uParam1))
			{
				StringCopy(&cVar4, "PLAYER_COLLECT_TILES_FEMALE", 64);
			}
			if (func_664(uParam1, &cVar12, &cVar4, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar12);
			func_651(uParam1, 28);
			break;
		case 28:
			StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@OUTRO@0", 64);
			StringCopy(&cVar4, "PLAYER_00_OUTRO", 64);
			StringIntConCat(&cVar12, uParam1->f_10, 64);
			if (func_69(uParam0, uParam1))
			{
				StringCopy(&cVar4, "PLAYER_OUTRO_FEMALE", 64);
			}
			func_70(uParam0, uParam1, &cVar12, &cVar4, vVar21, 33154, 0, 0, 1);
			func_651(uParam1, 29);
			break;
		case 29:
			StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@OUTRO@0", 64);
			StringCopy(&cVar4, "PLAYER_00_OUTRO", 64);
			StringIntConCat(&cVar12, uParam1->f_10, 64);
			if (func_69(uParam0, uParam1))
			{
				StringCopy(&cVar4, "PLAYER_OUTRO_FEMALE", 64);
			}
			if (func_664(uParam1, &cVar12, &cVar4, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar12);
			func_656(uParam0, uParam1, 1073741824 /* Float: 2f */, 0);
			func_651(uParam1, 53);
			break;
		case 51:
			StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT", 64);
			StringCopy(&cVar4, "PLAYER_00_COLLECT_TILES", 64);
			func_70(uParam0, uParam1, &cVar12, &cVar4, vVar21, 33154, 0, 0, 1);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!func_678(uParam0, iVar0))
				{
					iVar3 = __LIB_7__::func_746(iVar0, uParam0->f_192);
					iVar1 = 0;
					while (iVar1 < 7)
					{
						iVar2 = (iVar0 * 7 + iVar1);
						if (iVar3 < 10)
						{
							StringCopy(&cVar4, "PLAYER_00_PIECE_0", 64);
						}
						else
						{
							StringCopy(&cVar4, "PLAYER_00_PIECE_", 64);
						}
						StringIntConCat(&cVar4, iVar3, 64);
						StringConCat(&cVar4, "_COLLECT_TILES", 64);
						func_676(uParam0->f_746[iVar2 /*8*/].f_1, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT", &cVar4, *uParam0, vVar21, 1f, 1065353216 /* Float: 1f */, 0, 1);
						iVar3++;
						iVar1++;
					}
				}
				iVar0++;
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam1->f_12, false, true);
			func_650(uParam0, uParam1, 0, 1, 1056964608 /* Float: 0.5f */);
			func_651(uParam1, 53);
			break;
		case 53:
			if (__LIB_0__::func_265(&(uParam1->f_43)) > 0.25f)
			{
				__LIB_1__::func_212(1, 2);
				StringCopy(&cVar12, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT", 64);
				STREAMING::REMOVE_ANIM_DICT(&cVar12);
				if (uParam1->f_8)
				{
					uParam1->f_8 = 0;
					BUILTIN::WAIT(125);
					CAM::DO_SCREEN_FADE_IN(1250);
				}
				func_650(uParam0, uParam1, 0, 1, 1056964608 /* Float: 0.5f */);
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_424(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	iVar0 = func_649(uParam1);
	iVar1 = func_657(&(uParam1->f_48[0 /*15*/]), 0);
	iVar2 = func_657(&(uParam1->f_48[0 /*15*/]), 4);
	iVar3 = (2 + iParam2);
	switch (iVar0)
	{
		case 1:
			if (!func_511(uParam1))
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608 /* Float: 0.5f */);
			}
			else
			{
				func_651(uParam1, 30);
			}
			break;
		case 30:
			if (func_652(uParam1))
			{
				if (!func_504(uParam0, iVar3, iVar1, &iVar2))
				{
					func_651(uParam1, 54);
					return;
				}
				uParam1->f_18.f_22 = uParam0->f_746[iVar2 /*8*/].f_4;
				uParam1->f_18.f_23 = iVar2;
				func_289(&(uParam1->f_48[0 /*15*/]), 4, iVar2);
				if (__LIB_7__::func_747(uParam0->f_746[iVar2 /*8*/].f_4))
				{
					func_683(uParam1, "GET_TILE_RACK_LH");
				}
				else
				{
					func_683(uParam1, "GET_TILE_RACK_RH");
				}
				func_651(uParam1, 33);
			}
			break;
		case 33:
			bVar4 = __LIB_7__::func_747(uParam0->f_746[iVar2 /*8*/].f_4);
			if (func_684(uParam1, "Pickup"))
			{
				if (bVar4 == 1)
				{
					func_685(uParam0, uParam1, iVar2, 0, 0);
				}
				else
				{
					func_685(uParam0, uParam1, iVar2, 1, 0);
				}
				if (iVar2 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar2 /*8*/].f_1))
					{
						AUDIO::_PLAY_SOUND_FROM_POSITION("COLLECT", ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iVar2 /*8*/].f_1, true, false), "MGDOM_Sounds", false, 0, true, 0);
					}
				}
				if (uParam1->f_48[1 /*15*/] == 8)
				{
					func_651(uParam1, 53);
					return;
				}
			}
			if (func_686(uParam1, "GET_TILE_RACK_LH_ClipFinished", 1) || func_686(uParam1, "GET_TILE_RACK_RH_ClipFinished", 1))
			{
				if (bVar4)
				{
					func_683(uParam1, "LH_TILE_IDLE");
					func_685(uParam0, uParam1, iVar2, 0, 0);
				}
				else
				{
					func_683(uParam1, "RH_TILE_IDLE");
					func_685(uParam0, uParam1, iVar2, 1, 0);
				}
				func_651(uParam1, 53);
				__LIB_1__::func_148(&(uParam1->f_43));
			}
			break;
		case 53:
			func_651(uParam1, 54);
			break;
	}
}

void func_425(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = __LIB_12__::func_475(uParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	iVar1 = func_649(uParam1);
	iVar2 = func_657(&(uParam1->f_48[0 /*15*/]), 0);
	iVar3 = (2 + iParam2);
	iVar5 = func_657(&(uParam1->f_48[0 /*15*/]), 3);
	iVar6 = func_657(&(uParam1->f_48[0 /*15*/]), 4);
	switch (iVar1)
	{
		case 1:
			if (!func_687(uParam1, &iVar4))
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608 /* Float: 0.5f */);
				func_651(uParam1, 54);
				return;
			}
			if (uParam1->f_42 == -1)
			{
				func_651(uParam1, 54);
				return;
			}
			if (joaat("RH_TILE_IDLE") != iVar4 && joaat("LH_TILE_IDLE") != iVar4)
			{
				if (__LIB_7__::func_747(iVar5))
				{
					func_650(uParam0, uParam1, "LH_TILE_IDLERequest", 1, 1056964608 /* Float: 0.5f */);
				}
				else
				{
					func_650(uParam0, uParam1, "RH_TILE_IDLERequest", 1, 1056964608 /* Float: 0.5f */);
				}
			}
			func_651(uParam1, 30);
			break;
		case 30:
			if (func_652(uParam1))
			{
				if (!func_504(uParam0, iVar3, iVar2, &iVar6))
				{
					func_651(uParam1, 54);
					return;
				}
				iVar5 = uParam0->f_746[iVar6 /*8*/].f_4;
				uParam1->f_18.f_22 = iVar5;
				uParam1->f_18.f_23 = iVar6;
				uParam1->f_18.f_3 = 0;
				func_289(&(uParam1->f_48[0 /*15*/]), 3, iVar5);
				func_289(&(uParam1->f_48[0 /*15*/]), 4, iVar6);
				func_688(uParam1, iVar5);
				if (__LIB_7__::func_747(iVar5))
				{
					func_685(uParam0, uParam1, iVar6, 0, 0);
					func_683(uParam1, "REPLACE_TILE_RACK_LH");
				}
				else
				{
					func_685(uParam0, uParam1, iVar6, 1, 0);
					func_683(uParam1, "REPLACE_TILE_RACK_RH");
				}
				func_651(uParam1, 34);
				__LIB_1__::func_148(&(uParam1->f_43));
			}
			break;
		case 34:
			if (func_684(uParam1, "Release"))
			{
				if (iVar6 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar6 /*8*/].f_1))
					{
						AUDIO::_PLAY_SOUND_FROM_POSITION("INBOX", ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iVar6 /*8*/].f_1, true, false), "MGDOM_Sounds", false, 0, true, 0);
					}
				}
				func_689(uParam0, iVar6, iParam2, iVar5, uParam0->f_746[iVar6 /*8*/].f_5);
				uParam1->f_18.f_22 = -1;
				uParam1->f_18.f_23 = -1;
				uParam1->f_18.f_3 = 1;
				func_690(uParam1);
			}
			if ((func_686(uParam1, "REPLACE_TILE_RACK_LH_ClipFinished", 1) || func_686(uParam1, "REPLACE_TILE_RACK_RH_ClipFinished", 1)) || __LIB_0__::func_264(&(uParam1->f_43)) > 2f)
			{
				func_690(uParam1);
				uParam1->f_18.f_22 = -1;
				uParam1->f_18.f_23 = -1;
				uParam1->f_18.f_3 = 1;
				func_683(uParam1, "Idle");
				func_651(uParam1, 50);
				__LIB_1__::func_148(&(uParam1->f_43));
			}
			break;
		case 50:
			if (func_686(uParam1, "Idle", 1))
			{
				func_651(uParam1, 53);
			}
			break;
		case 53:
			uParam1->f_18.f_3 = 0;
			func_651(uParam1, 54);
			break;
	}
}

void func_426(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	iVar0 = __LIB_12__::func_475(uParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	iVar1 = func_649(uParam1);
	vVar2 = { __LIB_4__::func_188(&(uParam1->f_48[0 /*15*/])) };
	iVar5 = func_657(&(uParam1->f_48[0 /*15*/]), 0);
	iVar6 = func_657(&(uParam1->f_48[0 /*15*/]), 1);
	iVar7 = func_657(&(uParam1->f_48[0 /*15*/]), 2);
	bVar8 = func_657(&(uParam1->f_48[0 /*15*/]), 3) == true;
	iVar10 = func_657(&(uParam1->f_48[0 /*15*/]), 4);
	iVar11 = func_657(&(uParam1->f_48[0 /*15*/]), 5);
	iVar12 = func_657(&(uParam1->f_48[0 /*15*/]), 7);
	iVar13 = (2 + iParam2);
	if (bVar8)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_12, 1368185894))
		{
			uParam1->f_18.f_22 = -1;
			uParam1->f_18.f_23 = -1;
			func_690(uParam1);
			func_651(uParam1, 54);
		}
	}
	switch (iVar1)
	{
		case 1:
			uParam1->f_18.f_13 = 0;
			func_232(uParam0, 1);
			if (uParam0->f_741)
			{
				func_651(uParam1, 54);
				return;
			}
			if (!func_687(uParam1, &iVar14))
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608 /* Float: 0.5f */);
				func_651(uParam1, 53);
				return;
			}
			if (joaat("GET_TILE_RACK_LH") == iVar14 || joaat("GET_TILE_RACK_RH") == iVar14)
			{
				func_651(uParam1, 31);
				return;
			}
			if (func_692(uParam1))
			{
				func_651(uParam1, 30);
				return;
			}
			if (joaat("RH_TILE_IDLE") != iVar14 && joaat("LH_TILE_IDLE") != iVar14)
			{
				if (__LIB_7__::func_747(iVar10))
				{
					func_650(uParam0, uParam1, "LH_TILE_IDLERequest", 1, 1056964608 /* Float: 0.5f */);
				}
				else
				{
					func_650(uParam0, uParam1, "RH_TILE_IDLERequest", 1, 1056964608 /* Float: 0.5f */);
				}
			}
			func_651(uParam1, 30);
			break;
		case 31:
			if (((func_686(uParam1, "GET_TILE_RACK_LH_ClipFinished", 1) || func_686(uParam1, "GET_TILE_RACK_RH_ClipFinished", 1)) || func_686(uParam1, "Blend", 1)) || uParam1->f_18.f_21 > 0.65f)
			{
				func_651(uParam1, 30);
			}
			break;
		case 30:
			if (func_652(uParam1))
			{
				if (!func_504(uParam0, iVar13, iVar5, &iVar11))
				{
					func_651(uParam1, 53);
					return;
				}
				iVar10 = uParam0->f_746[iVar11 /*8*/].f_4;
				uParam1->f_18.f_22 = iVar10;
				uParam1->f_18.f_23 = iVar11;
				func_289(&(uParam1->f_48[0 /*15*/]), 4, iVar10);
				func_289(&(uParam1->f_48[0 /*15*/]), 5, iVar11);
				if (iVar7 != 29)
				{
					func_263(uParam0, iVar11, iVar7);
				}
				func_693(uParam1, vVar2);
				fVar16 = __LIB_7__::func_748(iParam2, iVar6);
				func_695(uParam1, fVar16);
				func_688(uParam1, iVar10);
				func_696(uParam1);
				bVar9 = (__LIB_7__::func_747(iVar10) || uParam0->f_199[iParam2 /*124*/].f_14 == 1);
				if (!bVar8)
				{
					if (iVar12 > 0)
					{
						func_442(uParam0, 57, iParam2, -1);
					}
					else if (iVar12 == -1)
					{
						func_442(uParam0, 59, iParam2, -1);
					}
					else
					{
						func_442(uParam0, 58, iParam2, -1);
					}
				}
				else
				{
					func_442(uParam0, 33, iParam2, -1);
				}
				if (bVar9)
				{
					func_685(uParam0, uParam1, iVar11, 0, 0);
					func_683(uParam1, "LH_MOVE");
				}
				else
				{
					func_685(uParam0, uParam1, iVar11, 1, 0);
					func_683(uParam1, "RH_MOVE");
				}
				func_651(uParam1, 37);
			}
			break;
		case 37:
			bVar9 = (__LIB_7__::func_747(iVar10) || uParam0->f_199[iParam2 /*124*/].f_14 == 1);
			if (uParam1->f_18.f_13 == 0 && !func_600(iVar7))
			{
				if (func_686(&(uParam0->f_199[iParam2 /*124*/]), "FLIP", 0))
				{
					if (func_697(&(uParam0->f_199[iParam2 /*124*/]), iVar6, bVar9))
					{
						if (bVar9)
						{
							func_685(uParam0, uParam1, iVar11, 0, 1);
						}
						else
						{
							func_685(uParam0, uParam1, iVar11, 1, 1);
						}
						uParam1->f_18.f_13 = 1;
					}
				}
			}
			if (func_686(uParam1, "LH_MOVE_ClipFinished", 1) || func_686(uParam1, "RH_MOVE_ClipFinished", 1))
			{
				uParam0->f_193++;
				func_698(uParam0, iParam2, iVar11);
				func_699(uParam0, iVar11, vVar2, iVar6, 0);
				if (iVar11 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar11 /*8*/].f_1))
					{
						AUDIO::_PLAY_SOUND_FROM_POSITION("PLACE", ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iVar11 /*8*/].f_1, true, false), "MGDOM_Sounds", false, 0, true, 0);
					}
				}
				if (bVar9)
				{
					func_683(uParam1, "LH_MOVE_TO_IDLE");
				}
				else
				{
					func_683(uParam1, "RH_MOVE_TO_IDLE");
				}
				if (bVar8)
				{
					if (func_486(uParam0, &iVar15, iParam2))
					{
						if (__LIB_1__::func_985())
						{
							func_442(uParam0, 51, iVar15, iParam2);
						}
						else
						{
							func_442(uParam0, 39, iParam2, -1);
						}
					}
				}
				uParam1->f_18.f_3 = 0;
				uParam1->f_18.f_22 = -1;
				uParam1->f_18.f_23 = -1;
				func_690(uParam1);
				func_651(uParam1, 38);
			}
			break;
		case 38:
			if (func_686(uParam1, "LH_MOVE_TO_IDLE_ClipFinished", 1) || func_686(uParam1, "RH_MOVE_TO_IDLE_ClipFinished", 1))
			{
				uParam1->f_18.f_22 = -1;
				uParam1->f_18.f_23 = -1;
				func_683(uParam1, "Idle");
				func_651(uParam1, 50);
			}
			break;
		case 50:
			if (func_686(uParam1, "Idle", 1))
			{
				uParam1->f_18.f_19 = 0;
				uParam1->f_18.f_22 = -1;
				uParam1->f_18.f_23 = -1;
				func_651(uParam1, 54);
			}
			break;
		case 53:
			uParam1->f_18.f_22 = -1;
			uParam1->f_18.f_23 = -1;
			func_651(uParam1, 54);
			break;
	}
}

void func_427(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	iVar3 = __LIB_12__::func_475(uParam1);
	iVar4 = func_649(uParam1);
	iVar6 = func_657(&(uParam1->f_48[0 /*15*/]), 0);
	bVar7 = func_657(&(uParam1->f_48[0 /*15*/]), 1) != false;
	iVar8 = func_657(&(uParam1->f_48[0 /*15*/]), 2);
	iVar9 = func_657(&(uParam1->f_48[0 /*15*/]), 3);
	iVar10 = func_657(&(uParam1->f_48[0 /*15*/]), 4);
	iVar11 = func_657(&(uParam1->f_48[0 /*15*/]), 5);
	switch (iVar4)
	{
		case 1:
			uParam1->f_5 = 1;
			if (uParam0->f_741)
			{
				func_651(uParam1, 54);
				return;
			}
			if (!func_511(uParam1))
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608 /* Float: 0.5f */);
			}
			else
			{
				func_651(uParam1, 2);
			}
			__LIB_1__::func_148(&(uParam1->f_43));
			if (uParam1->f_9 == uParam0->f_194)
			{
				uParam0->f_197 = 1;
			}
			break;
		case 2:
			if (__LIB_1__::func_871(&(uParam1->f_43)) > iVar11)
			{
				func_651(uParam1, 30);
			}
			break;
		case 30:
			if (func_652(uParam1))
			{
				if (!func_700(uParam0->f_981[iParam2], &iVar9, 20))
				{
					func_651(uParam1, 54);
					return;
				}
				if (!func_373(uParam0, 1, &iVar10))
				{
					func_651(uParam1, 54);
					return;
				}
				uParam1->f_18.f_22 = iVar9;
				uParam1->f_18.f_23 = iVar10;
				func_289(&(uParam1->f_48[0 /*15*/]), 2, uParam0->f_746[iVar10 /*8*/].f_5);
				func_289(&(uParam1->f_48[0 /*15*/]), 3, iVar9);
				func_289(&(uParam1->f_48[0 /*15*/]), 4, iVar10);
				func_701(uParam0, iVar10, func_372(iParam2), iVar9);
				func_702(uParam0, iVar10, &vVar0);
				func_693(uParam1, vVar0);
				func_696(uParam1);
				fVar13 = __LIB_0__::func_665(iVar3, uParam0->f_746[iVar10 /*8*/].f_1, 1, 1);
				if (iVar10 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar10 /*8*/].f_1))
					{
						fVar14 = __LIB_1__::func_95(ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar3), ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_746[iVar10 /*8*/].f_1));
						uParam1->f_18.f_10 = MISC::ABSF(fVar14);
					}
				}
				if (__LIB_7__::func_747(iVar9))
				{
					func_683(uParam1, "GET_TILE_BONEYARD_LH");
				}
				else
				{
					func_683(uParam1, "GET_TILE_BONEYARD_RH");
				}
				if (fVar13 > 0f)
				{
				}
				func_651(uParam1, 39);
			}
			break;
		case 39:
			if ((func_686(uParam1, "GET_TILE_BONEYARD_LH_ClipFinished", 1) || func_686(uParam1, "GET_TILE_BONEYARD_RH_ClipFinished", 1)) || func_684(uParam1, "Pickup"))
			{
				if (func_684(uParam1, "Pickup"))
				{
				}
				if (iVar10 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar10 /*8*/].f_1))
					{
						vVar15 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iVar10 /*8*/].f_1, true, false) };
						vVar18 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_746[iVar10 /*8*/].f_1, 2) };
						AUDIO::_PLAY_SOUND_FROM_POSITION("TAKE", ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iVar10 /*8*/].f_1, true, false), "MGDOM_Sounds", false, 0, true, 0);
						iVar12 = ENTITY::GET_ENTITY_MODEL(uParam0->f_746[iVar10 /*8*/].f_1);
						__LIB_1__::func_951(&(uParam0->f_746[iVar10 /*8*/].f_1));
						uParam0->f_746[iVar10 /*8*/].f_1 = OBJECT::CREATE_OBJECT(iVar12, vVar15, false, true, false, false, false);
						ENTITY::SET_ENTITY_COORDS(uParam0->f_746[iVar10 /*8*/].f_1, vVar15, true, false, true, true);
						ENTITY::SET_ENTITY_ROTATION(uParam0->f_746[iVar10 /*8*/].f_1, vVar18, 2, true);
						ENTITY::SET_ENTITY_COLLISION(uParam0->f_746[iVar10 /*8*/].f_1, uParam0->f_745, false);
					}
				}
				if (__LIB_7__::func_747(iVar9))
				{
					func_685(uParam0, uParam1, iVar10, 0, 0);
					func_683(uParam1, "LH_TO_MID_POINT");
				}
				else
				{
					func_685(uParam0, uParam1, iVar10, 1, 0);
					func_683(uParam1, "RH_TO_MID_POINT");
				}
				func_651(uParam1, 40);
			}
			break;
		case 40:
			if (func_686(uParam1, "LH_TO_MID_POINT_ClipFinished", 1) || func_686(uParam1, "RH_TO_MID_POINT_ClipFinished", 1))
			{
				iVar6 = (iVar6 - 1);
				func_289(&(uParam1->f_48[0 /*15*/]), 0, iVar6);
				if (uParam0->f_741)
				{
					if (__LIB_7__::func_747(iVar9))
					{
						func_683(uParam1, "PLACE_TILE_RACK_LH");
					}
					else
					{
						func_683(uParam1, "PLACE_TILE_RACK_RH");
					}
					func_651(uParam1, 41);
				}
				else if (bVar7 && iVar6 <= 0)
				{
					func_442(uParam0, 60, iParam2, -1);
					if (__LIB_7__::func_747(iVar9))
					{
						func_685(uParam0, uParam1, iVar10, 0, 0);
						func_683(uParam1, "LH_TILE_IDLE");
					}
					else
					{
						func_685(uParam0, uParam1, iVar10, 1, 0);
						func_683(uParam1, "RH_TILE_IDLE");
					}
					func_651(uParam1, 54);
				}
				else
				{
					if (__LIB_1__::func_985())
					{
						if (func_486(uParam0, &iVar5, iParam2))
						{
							func_442(uParam0, 22, iVar5, iParam2);
						}
					}
					else
					{
						iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						switch (iVar5)
						{
							case 0:
								func_442(uParam0, 61, iParam2, -1);
								break;
							case 1:
								func_442(uParam0, 62, iParam2, -1);
								break;
							case 2:
								func_442(uParam0, 78, iParam2, -1);
								break;
							case 3:
								func_442(uParam0, 69, iParam2, -1);
								break;
						}
					}
					if (__LIB_7__::func_747(iVar9))
					{
						func_683(uParam1, "PLACE_TILE_RACK_LH");
					}
					else
					{
						func_683(uParam1, "PLACE_TILE_RACK_RH");
					}
					func_651(uParam1, 41);
				}
			}
			break;
		case 41:
			if (func_684(uParam1, "Release"))
			{
				func_689(uParam0, iVar10, iParam2, iVar9, iVar8);
				func_690(uParam1);
				uParam1->f_18.f_3 = 1;
				if (iVar10 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar10 /*8*/].f_1))
					{
						AUDIO::_PLAY_SOUND_FROM_POSITION("INBOX", ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iVar10 /*8*/].f_1, true, false), "MGDOM_Sounds", false, 0, true, 0);
					}
				}
			}
			if (func_686(uParam1, "PLACE_TILE_RACK_LH_ClipFinished", 1) || func_686(uParam1, "PLACE_TILE_RACK_RH_ClipFinished", 1))
			{
				func_689(uParam0, iVar10, iParam2, iVar9, iVar8);
				func_690(uParam1);
				if (uParam1->f_48[0 /*15*/] == 9)
				{
					uParam1->f_18.f_22 = -1;
					uParam1->f_18.f_23 = -1;
				}
				func_683(uParam1, "Idle");
				func_651(uParam1, 50);
			}
			break;
		case 50:
			if (func_686(uParam1, "Idle", 1))
			{
				func_651(uParam1, 53);
			}
			break;
		case 53:
			uParam1->f_18.f_19 = 0;
			if (func_236(uParam1, 19))
			{
				func_651(uParam1, 54);
				return;
			}
			if (uParam0->f_741)
			{
				func_651(uParam1, 54);
			}
			else if (iVar6 > 0)
			{
				func_651(uParam1, 30);
			}
			else
			{
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_428(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	char cVar2[64];
	bool bVar10;
	iVar0 = func_649(uParam1);
	sVar1 = "PBL_WIN_A";
	StringCopy(&cVar2, "script@mini_game@dominoes@player_00_WIN", 64);
	bVar10 = func_657(&(uParam1->f_48[0 /*15*/]), 1) != false;
	uParam0->f_740 = 0;
	switch (iVar0)
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_696))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_696);
			}
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					sVar1 = "PBL_WIN_A";
					break;
				case 1:
					sVar1 = "PBL_WIN_B";
					break;
				case 2:
					sVar1 = "PBL_WIN_C";
					break;
				case 3:
					sVar1 = "PBL_WIN_D";
					break;
			}
			StringCopy(&cVar2, "script@mini_game@dominoes@player_0", 64);
			StringIntConCat(&cVar2, uParam1->f_10, 64);
			StringConCat(&cVar2, "_WIN", 64);
			if (func_69(uParam0, uParam1))
			{
				StringCopy(&cVar2, "script@mini_game@dominoes@player_female_win", 64);
			}
			uParam0->f_696 = ANIMSCENE::_CREATE_ANIM_SCENE(&cVar2, 2, sVar1, false, true);
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_696);
			func_651(uParam1, 3);
			break;
		case 3:
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_696, true, false))
			{
				return;
			}
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_696, *uParam0, func_68(uParam0, uParam1), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_696, "player", uParam1->f_12, 0);
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_696);
			if (bVar10)
			{
				func_442(uParam0, 38, iParam2, -1);
			}
			else
			{
				func_442(uParam0, 40, iParam2, -1);
			}
			func_651(uParam1, 50);
			break;
		case 50:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_696) >= 0.97f)
			{
				CAM::_0x04084490CC302CFB();
				func_65(uParam0);
				func_651(uParam1, 30);
			}
			break;
		case 30:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_696) >= 0.99f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_696))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_696);
				}
				func_656(uParam0, uParam1, 1073741824 /* Float: 2f */, 0);
				uParam0->f_696 = -1;
				uParam1->f_18.f_19 = 0;
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_429(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = func_649(uParam1);
	uParam0->f_740 = 0;
	switch (iVar0)
	{
		case 1:
			if (uParam1->f_5 == 0)
			{
				func_651(uParam1, 54);
				return;
			}
			if (!func_511(uParam1))
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608 /* Float: 0.5f */);
			}
			else
			{
				func_651(uParam1, 30);
			}
			break;
		case 30:
			if (func_652(uParam1))
			{
				func_704(uParam1);
				func_683(uParam1, "LOSE");
				func_651(uParam1, 38);
			}
			break;
		case 38:
			if (func_686(uParam1, "LOSE_ClipFinished", 1))
			{
				func_683(uParam1, "Idle");
				func_651(uParam1, 50);
			}
			break;
		case 50:
			if (func_686(uParam1, "Idle", 1))
			{
				uParam1->f_18.f_19 = 0;
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_430(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = func_649(uParam1);
	iVar1 = func_657(&(uParam1->f_48[0 /*15*/]), 0);
	switch (iVar0)
	{
		case 1:
			if (!func_511(uParam1))
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608 /* Float: 0.5f */);
			}
			else
			{
				func_651(uParam1, 2);
			}
			func_651(uParam1, 2);
			break;
		case 2:
			if (__LIB_1__::func_871(&(uParam1->f_43)) > iVar1)
			{
				func_651(uParam1, 30);
			}
			break;
		case 30:
			if (!func_511(uParam1))
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608 /* Float: 0.5f */);
			}
			else
			{
				func_683(uParam1, "Pass");
				func_442(uParam0, 56, iParam2, -1);
				func_705(uParam1);
				func_651(uParam1, 38);
			}
			break;
		case 38:
			if (func_686(uParam1, "Pass_ClipFinished", 1))
			{
				if (uParam3->f_1330.f_194 == uParam1->f_9)
				{
					uParam3->f_2334.f_261 = 0;
					uParam3->f_2334.f_410.f_20 = 0;
				}
				func_449(uParam1, 0);
				func_683(uParam1, "Idle");
				func_651(uParam1, 50);
			}
			break;
		case 50:
			func_449(uParam1, 0);
			if (func_686(uParam1, "Idle", 1))
			{
				uParam1->f_18.f_19 = 0;
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_431(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	char cVar6[64];
	char cVar14[64];
	int iVar22;
	iVar1 = func_657(&(uParam1->f_48[0 /*15*/]), 0);
	iVar2 = func_649(uParam1);
	vVar3 = { func_68(uParam0, uParam1) };
	iVar22 = (2 + iParam2);
	StringCopy(&cVar14, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_RACK@PLAYER@0", 64);
	StringIntConCat(&cVar14, uParam1->f_10, 64);
	switch (iVar2)
	{
		case 1:
			if (uParam1->f_5 == 0)
			{
				func_651(uParam1, 54);
				return;
			}
			iVar0 = 0;
			while (iVar0 < 28)
			{
				if (uParam0->f_746[iVar0 /*8*/] == iVar22)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0 /*8*/].f_1))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_746[iVar0 /*8*/].f_1, uParam0->f_976[iParam2], true, 0))
						{
							__LIB_1__::func_148(&(uParam1->f_43));
							STREAMING::REQUEST_ANIM_DICT(&cVar14);
							func_651(uParam1, 2);
							return;
						}
					}
				}
				iVar0++;
			}
			func_651(uParam1, 54);
			break;
		case 2:
			if (__LIB_1__::func_871(&(uParam1->f_43)) > iVar1)
			{
				func_651(uParam1, 3);
			}
			break;
		case 3:
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar14))
			{
				return;
			}
			func_651(uParam1, 12);
			break;
		case 12:
			StringCopy(&cVar6, "PLAYER_00_CLEAR_RACK", 64);
			func_674(uParam0, uParam1, &cVar14, &cVar6, vVar3, 8578, 0, 1090519040 /* Float: 8f */, 1);
			iVar0 = 0;
			while (iVar0 < 28)
			{
				if (uParam0->f_746[iVar0 /*8*/] == iVar22)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0 /*8*/].f_1))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_746[iVar0 /*8*/].f_1, uParam0->f_976[iParam2], true, 0))
						{
							if (uParam0->f_746[iVar0 /*8*/].f_4 < 10)
							{
								StringCopy(&cVar6, "PLAYER_00_PIECE_0", 64);
							}
							else
							{
								StringCopy(&cVar6, "PLAYER_00_PIECE_", 64);
							}
							StringIntConCat(&cVar6, uParam0->f_746[iVar0 /*8*/].f_4, 64);
							StringConCat(&cVar6, "_CLEAR_RACK", 64);
							func_676(uParam0->f_746[iVar0 /*8*/].f_1, &cVar14, &cVar6, *uParam0, vVar3, 0, 1065353216 /* Float: 1f */, 0, 1);
						}
						func_553(uParam0, iVar0, 0, uParam0->f_746[iVar0 /*8*/].f_4, -1);
					}
				}
				iVar0++;
			}
			func_651(uParam1, 50);
			break;
		case 50:
			StringCopy(&cVar6, "PLAYER_00_CLEAR_RACK", 64);
			if (func_664(uParam1, &cVar14, &cVar6, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar14);
			func_651(uParam1, 54);
			break;
	}
}

void func_432(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	char cVar9[64];
	int iVar17;
	vector3 vVar18;
	bool bVar21;
	iVar17 = func_649(uParam1);
	vVar18 = { func_68(uParam0, uParam1) };
	bVar21 = func_657(&(uParam1->f_48[0 /*15*/]), 0) != false;
	switch (iVar17)
	{
		case 1:
			if (uParam1->f_5 == 0)
			{
				func_651(uParam1, 54);
				return;
			}
			uParam0->f_987 = 0;
			__LIB_1__::func_148(&(uParam1->f_43));
			func_651(uParam1, 3);
			break;
		case 3:
			StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@00", 64);
			STREAMING::REQUEST_ANIM_DICT(&cVar9);
			StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", 64);
			STREAMING::REQUEST_ANIM_DICT(&cVar9);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@INTRO@0", 64);
				StringIntConCat(&cVar9, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar9);
				StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@IDLE@0", 64);
				StringIntConCat(&cVar9, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar9);
				StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@OUTRO@0", 64);
				StringIntConCat(&cVar9, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar9);
				iVar0++;
			}
			func_651(uParam1, 4);
			break;
		case 4:
			StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@00", 64);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar9))
			{
				return;
			}
			StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", 64);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar9))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@INTRO@0", 64);
				StringIntConCat(&cVar9, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar9))
				{
					return;
				}
				StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@IDLE@0", 64);
				StringIntConCat(&cVar9, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar9))
				{
					return;
				}
				StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@OUTRO@0", 64);
				StringIntConCat(&cVar9, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar9))
				{
					return;
				}
				iVar0++;
			}
			func_651(uParam1, 12);
			break;
		case 12:
			if (bVar21)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (func_204(uParam0, iVar0))
					{
						if (func_387(&(uParam0->f_199[iVar0 /*124*/]), 15))
						{
							return;
						}
					}
					iVar0++;
				}
			}
			if (iParam2 == uParam0->f_192)
			{
				func_651(uParam1, 42);
			}
			else
			{
				func_651(uParam1, 46);
			}
			break;
		case 46:
			StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@IDLE@0", 64);
			StringCopy(&cVar1, "PLAYER_00_IDLE", 64);
			StringIntConCat(&cVar9, uParam1->f_10, 64);
			func_70(uParam0, uParam1, &cVar9, &cVar1, vVar18, 33154, 0, 0, 1);
			func_651(uParam1, 47);
			break;
		case 47:
			StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@IDLE@0", 64);
			StringCopy(&cVar1, "PLAYER_00_IDLE", 64);
			StringIntConCat(&cVar9, uParam1->f_10, 64);
			if (func_664(uParam1, &cVar9, &cVar1, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar9);
			func_651(uParam1, 53);
			break;
		case 42:
			StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@INTRO@0", 64);
			StringCopy(&cVar1, "PLAYER_00_INTRO", 64);
			StringIntConCat(&cVar9, uParam1->f_10, 64);
			func_70(uParam0, uParam1, &cVar9, &cVar1, vVar18, 33154, 0, 0, 1);
			func_651(uParam1, 43);
			break;
		case 43:
			StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@INTRO@0", 64);
			StringCopy(&cVar1, "PLAYER_00_INTRO", 64);
			StringIntConCat(&cVar9, uParam1->f_10, 64);
			if (func_664(uParam1, &cVar9, &cVar1, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar9);
			if (iParam2 == uParam0->f_192)
			{
				func_651(uParam1, 44);
			}
			else
			{
				func_651(uParam1, 46);
			}
			break;
		case 44:
			StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@00", 64);
			StringCopy(&cVar1, "PLAYER_00_CLEAR_BOARD", 64);
			func_70(uParam0, uParam1, &cVar9, &cVar1, vVar18, 33154, 0, 0, 1);
			iVar0 = 0;
			while (iVar0 < 28)
			{
				if (uParam0->f_746[iVar0 /*8*/] == 0)
				{
					func_553(uParam0, iVar0, 6, -1, -1);
				}
				iVar0++;
			}
			__LIB_7__::func_749(&(uParam0->f_35));
			func_651(uParam1, 45);
			break;
		case 45:
			StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@00", 64);
			StringCopy(&cVar1, "PLAYER_00_CLEAR_BOARD", 64);
			if (func_664(uParam1, &cVar9, &cVar1, 0))
			{
				func_707(uParam0, uParam1->f_12);
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar9);
			func_651(uParam1, 48);
			break;
		case 48:
			StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@OUTRO@0", 64);
			StringCopy(&cVar1, "PLAYER_00_OUTRO", 64);
			StringIntConCat(&cVar9, uParam1->f_10, 64);
			func_70(uParam0, uParam1, &cVar9, &cVar1, vVar18, 33154, 0, 0, 1);
			func_651(uParam1, 49);
			break;
		case 49:
			StringCopy(&cVar9, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@OUTRO@0", 64);
			StringCopy(&cVar1, "PLAYER_00_OUTRO", 64);
			StringIntConCat(&cVar9, uParam1->f_10, 64);
			if (func_664(uParam1, &cVar9, &cVar1, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar9);
			uParam0->f_988 = 1;
			func_516(uParam0, uParam1, 1090519040 /* Float: 8f */);
			func_651(uParam1, 53);
			break;
		case 53:
			func_651(uParam1, 54);
			break;
	}
}

int func_433(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	*uParam2 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0 /*8*/].f_1))
		{
			if (uParam0->f_746[iVar0 /*8*/] != 6)
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_746[iVar0 /*8*/].f_1, iParam1))
				{
					*uParam2 = iVar0;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

struct<15> func_434(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	struct<15> Var17;
	iVar1 = (uParam0->f_48 - 1);
	Var2.f_1 = 8;
	Var2.f_14 = -1;
	Var17 = { uParam0->f_48[0 /*15*/] };
	iVar0 = 1;
	while (iVar0 <= iVar1)
	{
		uParam0->f_48[(iVar0 - 1) /*15*/] = { uParam0->f_48[iVar0 /*15*/] };
		iVar0++;
	}
	uParam0->f_48[iVar1 /*15*/] = { Var2 };
	return Var17;
}

int func_435(var uParam0, int iParam1)
{
	if (uParam0->f_48[0 /*15*/] != 0 && uParam0->f_46 != 54)
	{
		return 0;
	}
	uParam0->f_48[0 /*15*/] = { *iParam1 };
	uParam0->f_46 = 1;
	return 1;
}

int func_436(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_12__::func_475(uParam0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	if (!func_511(uParam0))
	{
		return 0;
	}
	uParam0->f_18.f_21 = TASK::_0x844CEEE428EA35B0(iVar0, "CLIP_PHASE");
	if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, "IntroFinished"))
	{
		uParam0->f_18.f_20 = 1;
	}
	if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, "IdleClipFinished"))
	{
		uParam0->f_18.f_1 = 0;
	}
	if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, "LH_MOVE_TO_IDLE"))
	{
	}
	if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, "RH_MOVE_TO_IDLE"))
	{
	}
	if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, "MainIdleClipFinished") && uParam0->f_18.f_19 == 0)
	{
		uParam0->f_18.f_1 = 1;
		uParam0->f_18.f_11 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	}
	if (uParam0->f_18)
	{
		uParam0->f_18 = 0;
		return 1;
	}
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "X", uParam0->f_18.f_5);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "Y", uParam0->f_18.f_6);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "ANGLE_OF_PIECE", uParam0->f_18.f_10);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "RACK_TILE_INDEX", BUILTIN::TO_FLOAT(uParam0->f_18.f_22));
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "ANIM_VARIATION", uParam0->f_18.f_11);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "CLIP_RATE", uParam0->f_18.f_12);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "CHANGE_IDLE", uParam0->f_18.f_1);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "FIRSTPERSON_IDLE", uParam0->f_18.f_2);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "TILE_PUT_BACK", uParam0->f_18.f_3);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "PEEK_AT_TILES", uParam0->f_18.f_4);
	if (!__LIB_0__::func_86(uParam0->f_18.f_7))
	{
		TASK::_SET_TASK_MOVE_NETWORK_SIGNAL_VECTOR(iVar0, "HAND_POS", uParam0->f_18.f_7);
	}
	return 1;
}

bool func_438(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_199);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_199[iVar0 /*124*/].f_12) && uParam0->f_199[iVar0 /*124*/].f_12 != Global_35)
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_439(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return 1;
	}
	if (!__LIB_1__::func_652())
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_61();
	switch (iVar0)
	{
		case 71:
			iVar1 = func_442(uParam0, 16, iParam1, uParam0->f_194);
			break;
		case 9:
			iVar1 = func_442(uParam0, 18, iParam1, uParam0->f_194);
			break;
		case 98:
			iVar1 = func_442(uParam0, 17, iParam1, uParam0->f_194);
			break;
	}
	uParam0->f_184 = 1;
	uParam0->f_185 = iParam1;
	return iVar1;
}

int func_440(var uParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return 1;
	}
	if (!__LIB_1__::func_652())
	{
		return 0;
	}
	return func_442(uParam0, 19, uParam0->f_194, -1);
}

bool func_441(var uParam0, var uParam1)
{
	int iVar0;
	func_709(uParam0, &iVar0);
	func_710(uParam0, uParam1);
	if ((*uParam1 != -1 && iVar0 != -1) && iVar0 != *uParam1)
	{
		if (MISC::ABSI((uParam0->f_149[iVar0 /*44*/].f_2 - uParam0->f_149[*uParam1 /*44*/].f_2)) > 10)
		{
			return true;
		}
	}
	func_711(uParam0, &iVar0);
	func_712(uParam0, uParam1);
	if ((*uParam1 != -1 && iVar0 != -1) && iVar0 != *uParam1)
	{
		if (MISC::ABSI((uParam0->f_149[iVar0 /*44*/].f_3 - uParam0->f_149[*uParam1 /*44*/].f_3)) > 2)
		{
			return true;
		}
	}
	return false;
}

int func_442(var uParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return 1;
	}
	sVar0 = func_713(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	if (__LIB_0__::func_481(1))
	{
		return 0;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_199[iParam2 /*124*/].f_12))
	{
		return 0;
	}
	if (uParam0->f_742 == -1)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		if (!ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_742, sVar0, __LIB_12__::func_475(&(uParam0->f_199[iParam2 /*124*/])), 0, 0))
		{
			return 0;
		}
	}
	else if (!ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_742, sVar0, __LIB_12__::func_475(&(uParam0->f_199[iParam2 /*124*/])), __LIB_12__::func_475(&(uParam0->f_199[iParam3 /*124*/])), 0))
	{
		return 0;
	}
	return 1;
}

bool func_443(var uParam0, int iParam1)
{
	int iVar0;
	func_709(uParam0, iParam1);
	func_710(uParam0, &iVar0);
	if ((*iParam1 != -1 && iVar0 != -1) && iVar0 != *iParam1)
	{
		if (MISC::ABSI((uParam0->f_149[*iParam1 /*44*/].f_2 - uParam0->f_149[iVar0 /*44*/].f_2)) > 10)
		{
			return true;
		}
	}
	func_711(uParam0, iParam1);
	func_712(uParam0, &iVar0);
	if ((*iParam1 != -1 && iVar0 != -1) && iVar0 != *iParam1)
	{
		if (MISC::ABSI((uParam0->f_149[*iParam1 /*44*/].f_3 - uParam0->f_149[iVar0 /*44*/].f_3)) > 2)
		{
			return true;
		}
	}
	return false;
}

int func_444(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_139(*uParam1))
	{
		return 0;
	}
	uParam0->f_453 = (uParam0->f_453 - 1);
	__LIB_1__::func_748(uParam1, 1, 0);
	return 1;
}

void func_445(var uParam0)
{
	func_444(uParam0, &(uParam0->f_465));
	func_444(uParam0, &(uParam0->f_466));
	func_444(uParam0, &(uParam0->f_463));
}

void func_446(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_467(uParam0, iVar0);
		iVar0++;
	}
}

void func_447(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_26)
	{
		func_714(uParam0, iVar0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	uParam0->f_157 = 0;
}

void func_449(var uParam0, int iParam1)
{
	if (uParam0->f_18.f_2 != iParam1)
	{
	}
	uParam0->f_18.f_2 = iParam1;
}

void func_450(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_410.f_20 = iParam2;
	uParam0->f_410.f_21 = 0;
	uParam0->f_410.f_22 = 0;
	uParam0->f_410.f_23 = 0;
	uParam0->f_410.f_25 = 0;
	uParam0->f_410.f_19 = 0;
	if (uParam0->f_405 != 0)
	{
	}
	if (func_219(uParam1))
	{
		if (uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_2 && !CAM::_0xA24C1D341C6E0D53(0, 0, 0))
		{
			func_449(&(uParam1->f_199[uParam1->f_194 /*124*/]), 0);
		}
		if (uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4)
		{
			uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4 = 0;
		}
	}
	func_454(uParam0, 0);
	func_715(uParam0, 1);
	CAM::_0x1D9F72DD4FD9A9D7(&(uParam0->f_410));
}

bool func_451(var uParam0, int iParam1)
{
	if (!func_204(uParam0, uParam0->f_194))
	{
		return false;
	}
	if (!func_387(&(uParam0->f_199[uParam0->f_194 /*124*/]), iParam1))
	{
		return false;
	}
	return func_386(&(uParam0->f_199[uParam0->f_194 /*124*/]), iParam1);
}

bool func_452(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (__LIB_0__::func_139(*uParam1))
	{
		if (!__LIB_1__::func_264(*uParam1, 1))
		{
			func_717(uParam0, uParam1, 1);
		}
		return false;
	}
	if (__LIB_7__::func_729() || uParam0->f_240.f_3 == 1)
	{
		return false;
	}
	*uParam1 = __LIB_2__::func_403(sParam2, iParam3, PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0, iParam5, 1070386381 /* Float: 1.6f */, 570, iParam6, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	if (iParam4 == 1)
	{
		__LIB_8__::func_753(*uParam1, 1, 1);
	}
	uParam0->f_453++;
	return true;
}

bool func_453(var uParam0, int iParam1, bool bParam2)
{
	if (__LIB_7__::func_729())
	{
		return false;
	}
	if (bParam2)
	{
		return (PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iParam1));
	}
	return (PAD::IS_CONTROL_PRESSED(2, iParam1) && PAD::IS_CONTROL_JUST_PRESSED(2, iParam1));
}

void func_454(var uParam0, int iParam1)
{
	uParam0->f_405 = iParam1;
	__LIB_0__::func_37(&(uParam0->f_450));
}

bool func_455(var uParam0, int iParam1, bool bParam2)
{
	if (__LIB_7__::func_729())
	{
		return false;
	}
	if (bParam2)
	{
		return PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iParam1);
	}
	return PAD::IS_CONTROL_JUST_PRESSED(2, iParam1);
}

bool func_457(var uParam0, int iParam1, bool bParam2)
{
	if (__LIB_7__::func_729())
	{
		return false;
	}
	if (bParam2)
	{
		return PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1);
	}
	return PAD::IS_CONTROL_PRESSED(2, iParam1);
}

void func_458(var uParam0, var uParam1)
{
	uParam0->f_410.f_21 = 1;
	uParam0->f_410.f_22 = 0;
	uParam0->f_410.f_23 = 0;
	uParam0->f_410.f_25 = 0;
	uParam0->f_410.f_19 = 0;
	if (uParam0->f_405 != 1)
	{
	}
	if (func_219(uParam1))
	{
		if (uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4 == 0)
		{
			uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4 = 1;
		}
	}
	func_715(uParam0, 0);
	func_454(uParam0, 1);
	CAM::_0x1D9F72DD4FD9A9D7(&(uParam0->f_410));
	CAM::_0x90DA5BA5C2635416();
}

void func_459(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	uParam0->f_410.f_21 = 0;
	uParam0->f_410.f_22 = 1;
	uParam0->f_410.f_23 = 0;
	uParam0->f_410.f_25 = 0;
	uParam0->f_410.f_19 = 0;
	if (uParam0->f_405 != 2)
	{
	}
	func_454(uParam0, 2);
	CAM::_0x1D9F72DD4FD9A9D7(&(uParam0->f_410));
	if (func_219(uParam1))
	{
		if (uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_2 && !CAM::_0xA24C1D341C6E0D53(0, 0, 0))
		{
			func_449(&(uParam1->f_199[uParam1->f_194 /*124*/]), 0);
		}
		if (uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4)
		{
			uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4 = 0;
		}
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_437))
	{
		if (!CAM::IS_CAM_ACTIVE(uParam0->f_437))
		{
			__LIB_7__::func_697(1, uParam1->f_194, &fVar6);
			vVar3 = { __LIB_3__::func_509(uParam0->f_441, fVar6) };
			func_276(uParam1, vVar3, &vVar0);
			CAM::SET_CAM_COORD(uParam0->f_437, vVar0);
			__LIB_7__::func_697(1, uParam1->f_194, &fVar6);
			vVar3 = { __LIB_3__::func_509(uParam0->f_438, fVar6) };
			func_276(uParam1, vVar3, &vVar0);
			CAM::POINT_CAM_AT_COORD(uParam0->f_437, vVar0);
			CAM::SET_CAM_FOV(uParam0->f_437, uParam0->f_444);
			CAM::SET_CAM_ACTIVE(uParam0->f_437, true);
			CAM::SHAKE_CAM(uParam0->f_437, "TABLE_GAMES_IDLE_SHAKE", 0.19f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			CAM::_0x04084490CC302CFB();
			uParam0->f_445 = 0f;
		}
	}
}

bool func_461(var uParam0)
{
	if (func_386(uParam0, 9))
	{
		return true;
	}
	if (func_386(uParam0, 10))
	{
		return true;
	}
	return false;
}

void func_463(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_437))
	{
		return;
	}
	if (!CAM::IS_CAM_ACTIVE(uParam0->f_437))
	{
		return;
	}
	if (uParam0->f_445 == 1f)
	{
		return;
	}
	uParam0->f_445 = (uParam0->f_445 + (MISC::GET_FRAME_TIME() / 0.65f));
	uParam0->f_445 = __LIB_0__::func_251(uParam0->f_445, 0f, 1f);
	fVar0 = func_726(uParam0->f_445);
	fVar1 = uParam0->f_444;
	fVar2 = (uParam0->f_444 - 2.5f);
	fVar3 = (fVar1 + ((fVar2 - fVar1) * fVar0));
	CAM::SET_CAM_FOV(uParam0->f_437, fVar3);
}

bool func_465(var uParam0)
{
	if (!func_204(uParam0, uParam0->f_194))
	{
		return false;
	}
	return func_233(&(uParam0->f_199[uParam0->f_194 /*124*/]));
}

void func_466(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_384[iParam2]))
	{
		return;
	}
	if (uParam0->f_377[iParam2] != iParam3)
	{
	}
	uParam0->f_377[iParam2] = iParam3;
	switch (iParam3)
	{
		case 0:
			if (uParam0->f_370[iParam2])
			{
				GRAPHICS::_0x56A786E87FF53478(uParam0->f_384[iParam2]);
				uParam0->f_370[iParam2] = 0;
			}
			break;
		case 3:
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam1->f_995))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(uParam1->f_995);
			}
			GRAPHICS::_0xC6F81FCD15350323(uParam0->f_384[iParam2], iParam3);
			uParam0->f_370[iParam2] = 1;
			break;
		case 2:
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam1->f_995))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(uParam1->f_995);
			}
			GRAPHICS::_0xC6F81FCD15350323(uParam0->f_384[iParam2], iParam3);
			uParam0->f_370[iParam2] = 1;
			break;
	}
}

void func_467(var uParam0, int iParam1)
{
	if (uParam0->f_370[iParam1])
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_384[iParam1]))
		{
			GRAPHICS::_0x56A786E87FF53478(uParam0->f_384[iParam1]);
		}
		uParam0->f_370[iParam1] = 0;
	}
}

void func_468(var uParam0, var uParam1)
{
	vector3 vVar0;
	uParam0->f_409 = 1;
	uParam0->f_444 = CAM::GET_GAMEPLAY_CAM_FOV();
	uParam0->f_444 = 55f;
	uParam0->f_441 = { 0f, -0.42f, 1.8f };
	uParam0->f_438 = { 0f, -0.08f, 0.87f };
	uParam0->f_407 = 0;
	if (CAM::_0x927B810E43E99932(&(uParam0->f_410)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_410));
	}
	if (!CAM::_0x927B810E43E99932(&(uParam0->f_410)))
	{
		CAM::_0xB8B207C34285E978(&(uParam0->f_410));
		uParam0->f_410.f_16 = -832392197;
		uParam0->f_409 = 1;
	}
	if (!CAM::DOES_CAM_EXIST(uParam0->f_437))
	{
		uParam0->f_437 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_437))
	{
		func_276(uParam1, uParam0->f_441, &vVar0);
		CAM::SET_CAM_COORD(uParam0->f_437, vVar0);
		func_276(uParam1, uParam0->f_438, &vVar0);
		CAM::POINT_CAM_AT_COORD(uParam0->f_437, vVar0);
		CAM::SET_CAM_FOV(uParam0->f_437, uParam0->f_444);
		CAM::SET_CAM_ACTIVE(uParam0->f_437, false);
	}
	func_450(uParam0, uParam1, 0);
}

void func_473(var uParam0)
{
	uParam0->f_163++;
	__LIB_1__::func_148(&(uParam0->f_160));
}

bool func_474(var uParam0)
{
	if (uParam0->f_46 != 54)
	{
		if (uParam0->f_48[0 /*15*/] == 11)
		{
			return true;
		}
		if (uParam0->f_48[0 /*15*/] == 12)
		{
			return true;
		}
		if (uParam0->f_48[0 /*15*/] == 13)
		{
			return true;
		}
	}
	return false;
}

void func_476(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	__LIB_7__::func_736(&(uParam0->f_1), 0, "");
	__LIB_7__::func_737(&(uParam0->f_1), 0, "");
}

void func_477(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_26)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_9, uParam0->f_26[iVar0 /*32*/].f_1);
		MISC::CLEAR_BIT(&(uParam0->f_157), iVar0);
		iVar0++;
	}
}

void func_478(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	func_314(&(uParam0->f_204[iParam1 /*7*/]), 28);
	uParam0->f_204[iParam1 /*7*/].f_6 = 0;
}

int func_479(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_199)
	{
		if (func_204(uParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_482(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (__LIB_0__::func_139(*uParam1))
	{
		if (!__LIB_1__::func_264(*uParam1, 1))
		{
			func_717(uParam0, uParam1, 1);
		}
		return 0;
	}
	if (__LIB_7__::func_729() || uParam0->f_240.f_3 == 1)
	{
		return 0;
	}
	*uParam1 = __LIB_2__::func_403(sParam2, iParam4, PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0, iParam6, 1070386381 /* Float: 1.6f */, 570, iParam7, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	if (iParam5 == 1)
	{
		__LIB_8__::func_753(*uParam1, 1, 1);
	}
	__LIB_1__::func_483(*uParam1, sParam2, sParam3, 1);
	uParam0->f_453++;
	return 1;
}

bool func_483(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1 && !__LIB_0__::func_139(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	return HUD::_UIPROMPT_HAS_PRESSED_TIMED_MODE_FAILED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_484(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_690 != 0)
	{
		return;
	}
	switch (iParam2)
	{
		case 1:
		case 3:
		case 4:
		case 5:
			uParam1->f_239 = 1;
			break;
	}
	uParam0->f_690 = iParam2;
}

bool func_486(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_199);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_199[iVar0 /*124*/].f_12) && iVar0 != iParam2)
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_487(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	func_729(&(uParam0->f_1.f_26[iParam1 /*32*/]));
}

void func_488(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_204[iParam1 /*7*/].f_6)
	{
		iVar1 = func_150(&(uParam0->f_204[iParam1 /*7*/]), iVar0);
		if (iVar1 != 29)
		{
		}
		iVar0++;
	}
}

void func_489(var uParam0, int iParam1, int iParam2)
{
	if (!func_204(uParam0, iParam1))
	{
		return;
	}
	if (PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		return;
	}
	if (!__LIB_1__::func_652())
	{
		return;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (iParam2 != -1)
	{
		if (iParam2 == iParam1)
		{
			func_730(uParam0->f_199[iParam1 /*124*/].f_12, uParam0->f_199[iParam1 /*124*/].f_12, Global_35, 0, 10);
		}
		else if (uParam0->f_199[iParam2 /*124*/].f_12 == Global_35)
		{
			func_730(uParam0->f_199[iParam1 /*124*/].f_12, Global_35, uParam0->f_199[iParam1 /*124*/].f_12, 0, 10);
		}
	}
}

void func_490(var uParam0, var uParam1)
{
	uParam0->f_398 = 0f;
	uParam0->f_399 = 0;
	uParam0->f_400 = uParam1;
	uParam0->f_401 = uParam1;
}

bool func_492(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	uParam0->f_398 = (uParam0->f_398 + MISC::GET_FRAME_TIME());
	if (bParam5)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (func_149(&(uParam1->f_14), iVar1))
			{
				iVar0 = func_493(uParam0, iVar1, uParam1->f_666.f_3);
				if (iVar1 == uParam0->f_235)
				{
					if (iParam4 == 1)
					{
						if (iVar0 != 0)
						{
							func_731(uParam0, iVar1, -1);
						}
						func_732(uParam0, iVar1, iVar0);
					}
				}
				else
				{
					func_731(uParam0, iVar1, -1);
					func_732(uParam0, iVar1, iVar0);
				}
			}
			iVar1++;
		}
		return true;
	}
	if (uParam0->f_398 < 0.2f)
	{
		return false;
	}
	if (iParam4 == 0 && uParam0->f_400 == uParam0->f_235)
	{
		uParam0->f_399 = 0;
		uParam0->f_400 = func_324(&(uParam1->f_14), uParam0->f_400);
		if (iVar0 == 0)
		{
			func_442(uParam2, 65, uParam0->f_400, -1);
		}
		else if (iVar0 < 15)
		{
			func_442(uParam2, 66, uParam0->f_400, -1);
		}
		else if (iVar0 < 30)
		{
			func_442(uParam2, 67, uParam0->f_400, -1);
		}
		else
		{
			func_442(uParam2, 68, uParam0->f_400, -1);
		}
	}
	uParam0->f_398 = 0f;
	iVar0 = func_493(uParam0, uParam0->f_400, uParam1->f_666.f_3);
	func_731(uParam0, uParam0->f_400, uParam0->f_399);
	uParam0->f_399++;
	if (uParam0->f_399 < uParam0->f_204[uParam0->f_400 /*7*/].f_6)
	{
		return false;
	}
	if (iVar0 != 0)
	{
		func_732(uParam0, uParam0->f_400, iVar0);
	}
	uParam0->f_399 = uParam0->f_204[uParam0->f_400 /*7*/].f_6;
	func_731(uParam0, uParam0->f_400, uParam0->f_399);
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam2->f_199[uParam0->f_400 /*124*/].f_12))
	{
		return false;
	}
	if (func_733(uParam2))
	{
		return false;
	}
	uParam0->f_399 = 0;
	uParam0->f_400 = func_324(&(uParam1->f_14), uParam0->f_400);
	if (uParam0->f_400 == uParam0->f_401 || uParam0->f_400 == -1)
	{
		return true;
	}
	iVar0 = func_493(uParam0, uParam0->f_400, uParam1->f_666.f_3);
	if (iVar0 == 0)
	{
		func_442(uParam2, 65, uParam0->f_400, -1);
	}
	else if (iVar0 < 15)
	{
		func_442(uParam2, 66, uParam0->f_400, -1);
	}
	else if (iVar0 < 30)
	{
		func_442(uParam2, 67, uParam0->f_400, -1);
	}
	else
	{
		func_442(uParam2, 68, uParam0->f_400, -1);
	}
	func_732(uParam0, uParam0->f_400, iVar0);
	return false;
}

int func_493(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return 0;
	}
	if (uParam0->f_204[iParam1 /*7*/].f_6 <= 0)
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < uParam0->f_204[iParam1 /*7*/].f_6)
	{
		iVar3 = func_150(&(uParam0->f_204[iParam1 /*7*/]), iVar2);
		if (iVar3 != 29)
		{
			iVar0 = (func_734(iVar3) + func_735(iVar3));
			iVar1 = (iVar1 + iVar0);
		}
		iVar2++;
	}
	if (iParam2 == -1234859967)
	{
		iVar1 += 2;
		iVar1 = (iVar1 - (iVar1 % 5));
	}
	if (iParam2 == -382896522)
	{
		iVar1++;
		iVar1 = (iVar1 - (iVar1 % 3));
	}
	return iVar1;
}

void func_494(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	func_398(&(uParam0->f_1), iParam1);
	if (iParam2 == 0)
	{
		func_389(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGSCORE0"));
	}
	else if (iParam2 == 1)
	{
		func_389(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGWINPTS1"));
	}
	else
	{
		func_389(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGWINPTS", iParam2));
	}
}

int func_495(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	uVar1 = 15;
	uParam0->f_261 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = func_347(&(uParam1->f_14.f_149[iParam2 /*44*/].f_4), &uVar1);
		func_736(uParam0, &uVar1, iVar0);
	}
	else
	{
		return func_229(uParam1, 4);
	}
	return 1;
}

bool func_496(var uParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		return false;
	}
	return MINIGAME::_MINIGAME_IS_REQUEST_PENDING(&(uParam0->f_1300[4 /*4*/]));
}

bool func_497(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	iVar1 = -1;
	*iParam3 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (uParam0->f_746[iVar0 /*8*/] == iParam1)
		{
			if (uParam0->f_746[iVar0 /*8*/].f_4 > iParam2)
			{
				if (iVar1 == -1 || uParam0->f_746[iVar0 /*8*/].f_4 < iVar1)
				{
					iVar1 = uParam0->f_746[iVar0 /*8*/].f_4;
					*iParam3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return *iParam3 != -1;
}

void func_498(var uParam0, var uParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam1->f_1))
	{
		return;
	}
	if (uParam1->f_7 != iParam2)
	{
	}
	uParam1->f_7 = iParam2;
	switch (iParam2)
	{
		case 0:
			if (uParam1->f_6)
			{
				GRAPHICS::_0x56A786E87FF53478(uParam1->f_1);
				uParam1->f_6 = 0;
			}
			break;
		case 3:
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam0->f_995))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(uParam0->f_995);
			}
			GRAPHICS::_0xC6F81FCD15350323(uParam1->f_1, iParam2);
			uParam1->f_6 = 1;
			break;
		case 2:
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam0->f_995))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(uParam0->f_995);
			}
			GRAPHICS::_0xC6F81FCD15350323(uParam1->f_1, iParam2);
			uParam1->f_6 = 1;
			break;
	}
}

int func_499(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_613(*(uParam0[iVar0 /*5*/])))
		{
			if ((*uParam0)[iVar0 /*5*/] == iParam1)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_500(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	uParam0->f_256 = iParam2;
	__LIB_7__::func_750(&(uParam0->f_1.f_26[iParam1 /*32*/]), iParam2);
}

void func_501(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = func_738(&(uParam0->f_262), uParam0->f_339, &(uParam0->f_391));
	func_446(uParam0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_1__::func_951(&(uParam0->f_384[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = uParam0->f_391[iVar0];
		if (iVar2 != -1)
		{
			iVar3 = func_150(&(uParam0->f_204[uParam1->f_194 /*7*/]), uParam0->f_262[iVar2 /*5*/]);
			func_739(uParam1, &(uParam0->f_262[iVar2 /*5*/]), iVar3, &(uParam0->f_384[iVar0]), 0);
		}
		iVar0++;
	}
}

void func_502(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_211(1, 2);
		__LIB_7__::func_859(&(uParam0->f_240), 0);
	}
	else
	{
		__LIB_1__::func_212(1, 2);
		__LIB_7__::func_859(&(uParam0->f_240), 1);
		uParam0->f_338 = -1;
	}
	func_210(uParam0, 0, 0);
	uParam0->f_345 = bParam1;
}

bool func_503(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	iParam3++;
	iParam3 = (iParam3 % *uParam0);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_613(*(uParam0[iParam3 /*5*/])))
		{
			if ((*uParam0)[iParam3 /*5*/] == iParam1)
			{
				*iParam2 = iParam3;
				return true;
			}
		}
		iParam3++;
		iParam3 = (iParam3 % *uParam0);
		iVar0++;
	}
	return false;
}

bool func_504(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	*iParam3 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (uParam0->f_746[iVar0 /*8*/] == iParam1 && uParam0->f_746[iVar0 /*8*/].f_5 == iParam2)
		{
			*iParam3 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_505(var uParam0)
{
	float fVar0;
	fVar0 = ((__LIB_0__::func_264(&(uParam0->f_253)) / uParam0->f_257) * 100f);
	fVar0 = __LIB_0__::func_251(fVar0, 0f, 100f);
	return BUILTIN::FLOOR(fVar0);
}

bool func_506(var uParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	if (__LIB_0__::func_2() != -1)
	{
		if (uParam0->f_338 == -1)
		{
			if (func_503(&(uParam0->f_262), uParam0->f_339, &(uParam0->f_338), -1))
			{
				func_501(uParam0, uParam1, uParam2);
			}
			return false;
		}
		Var0 = { func_740(&(uParam0->f_262[uParam0->f_338 /*5*/])) };
		if (!func_741(uParam2, &Var0))
		{
			func_191(uParam0);
			func_192(uParam0, 17, 0, 3333);
			return false;
		}
	}
	else
	{
		if (uParam0->f_338 == -1)
		{
			if (func_503(&(uParam0->f_262), uParam0->f_339, &(uParam0->f_338), -1))
			{
				func_501(uParam0, uParam1, uParam2);
			}
			return false;
		}
		func_354(uParam2->f_666.f_3, &(uParam2->f_14), uParam1->f_194, &(uParam0->f_262[uParam0->f_338 /*5*/]));
		func_163(uParam2);
	}
	func_500(uParam0, uParam1->f_194, 0);
	__LIB_0__::func_37(&(uParam0->f_253));
	func_232(uParam1, 1);
	func_446(uParam0);
	if (__LIB_0__::func_2() == -1)
	{
		func_510(uParam0);
	}
	else
	{
		func_198(uParam0, 4);
	}
	uParam0->f_261 = 0;
	uParam0->f_410.f_20 = 0;
	return true;
}

void func_507(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	var uVar4;
	var uVar7;
	int iVar10;
	int iVar11;
	if (uParam1->f_356 == 0)
	{
		uParam1->f_356 = SHAPETEST::_START_SHAPE_TEST_SURROUNDING_COORDS(&uVar4, &uVar7, 16, Global_35, 7);
		return;
	}
	uParam1->f_359 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam1->f_356, &iVar0, &(uParam1->f_360), &uVar1, &iVar10);
	if (uParam1->f_359 == 0)
	{
		uParam1->f_356 = 0;
		return;
	}
	if (uParam1->f_359 == 2)
	{
		if (iVar0 > 0)
		{
			iVar11 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar10);
			if (ENTITY::DOES_ENTITY_EXIST(iVar11) && func_133(iVar11))
			{
				uParam1->f_357 = iVar11;
				func_742(&(uParam0->f_1330), iVar11, &(uParam1->f_363), 0);
				func_743(uParam1, iVar11, &(uParam1->f_364));
			}
			else
			{
				uParam1->f_357 = 0;
				uParam1->f_363 = -1;
				uParam1->f_364 = -1;
			}
		}
		uParam1->f_356 = 0;
	}
}

void func_508(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	if (func_452(uParam1, &(uParam1->f_459), "MGDOM_CTX_SELTILE", joaat("INPUT_MINIGAME_DOMINOES_PLAY_TILE"), 0, 0, 4000))
	{
		func_211(uParam1);
	}
	func_744(uParam1, &(uParam0->f_1330), uParam2);
	bVar0 = ((uParam1->f_344 == 1 || uParam2->f_14.f_6.f_142 == 0) && !func_233(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/])));
	if (bVar0 && uParam1->f_348)
	{
		bVar0 = !uParam1->f_448;
	}
	__LIB_1__::func_221(uParam1->f_459, bVar0, 1);
	if (!uParam1->f_248)
	{
		if (!func_745(uParam1))
		{
			func_192(uParam1, 7, 0, 5000);
			uParam1->f_248 = 1;
		}
	}
	if (uParam1->f_344 == 0)
	{
		if (!func_746(uParam1) && uParam1->f_251 == 0)
		{
			if (!func_461(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/])))
			{
				if (!func_747(uParam1, 1))
				{
					func_192(uParam1, 1, 0, 3333);
					uParam1->f_251 = 1;
					uParam1->f_252 = 0f;
				}
			}
		}
	}
	else
	{
		if (func_747(uParam1, 1))
		{
			func_191(uParam1);
		}
		uParam1->f_251 = 0;
		uParam1->f_252 = 0f;
	}
	if (uParam1->f_344 == 0 && !func_746(uParam1))
	{
		if (func_747(uParam1, 1))
		{
			uParam1->f_252 = 0f;
		}
		else
		{
			uParam1->f_252 = (uParam1->f_252 + MISC::GET_FRAME_TIME());
			if (uParam1->f_252 > 5f && uParam1->f_251 == 1)
			{
				uParam1->f_251 = 0;
				uParam1->f_252 = 0f;
			}
		}
	}
	if (func_748(uParam1, &(uParam0->f_1330)) && uParam1->f_344 == 1)
	{
		func_191(uParam1);
		func_636(&(uParam0->f_1330), uParam0->f_1330.f_194, uParam1->f_339);
		func_444(uParam1, &(uParam1->f_459));
		func_232(&(uParam0->f_1330), 1);
		func_446(&(uParam0->f_2334));
		func_211(uParam1);
		if (!func_503(&(uParam1->f_262), uParam1->f_339, &(uParam1->f_338), -1))
		{
		}
		func_501(uParam1, &(uParam0->f_1330), uParam2);
		func_502(uParam1, 1);
	}
}

void func_509(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	bVar1 = true;
	iVar2 = func_372(uParam0->f_1330.f_194);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_QUIT"), false);
	func_444(uParam1, &(uParam1->f_459));
	func_444(uParam1, &(uParam1->f_461));
	func_444(uParam1, &(uParam1->f_458));
	func_452(uParam1, &(uParam1->f_455), "MG_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 0, 0, 4000);
	if (func_452(uParam1, &(uParam1->f_460), "MGDOM_CTX_PLACE", joaat("INPUT_MINIGAME_DOMINOES_PLAY_TILE"), 0, 0, 4000))
	{
		func_501(uParam1, &(uParam0->f_1330), uParam2);
	}
	if (uParam1->f_348)
	{
		bVar1 = !uParam1->f_448;
	}
	__LIB_1__::func_221(uParam1->f_460, bVar1, 1);
	if (!uParam1->f_249)
	{
		if (!func_745(uParam1))
		{
			func_192(uParam1, 8, 0, 5000);
			uParam1->f_249 = 1;
		}
	}
	if (uParam1->f_260 > 1 && !uParam1->f_250)
	{
		if (!func_745(uParam1))
		{
			func_192(uParam1, 6, 0, 5000);
			uParam1->f_250 = 1;
		}
	}
	func_749(uParam1, &(uParam0->f_1330), uParam2);
	if (uParam1->f_260 > 1)
	{
		func_750(uParam1, &(uParam1->f_464), "MGDOM_CTX_SELMOVE", joaat("INPUT_MINIGAME_DOMINOES_MOVE_LEFT_ONLY"), joaat("INPUT_MINIGAME_DOMINOES_MOVE_RIGHT_ONLY"), 0, 0);
		__LIB_4__::func_862(uParam1->f_464, joaat("INPUT_MINIGAME_DOMINOES_MOVE_LEFT_ONLY"));
		__LIB_4__::func_862(uParam1->f_464, joaat("INPUT_MINIGAME_DOMINOES_MOVE_RIGHT_ONLY"));
	}
	else
	{
		func_444(uParam1, &(uParam1->f_464));
	}
	if (func_751(uParam1))
	{
		func_234(&(uParam0->f_1330), uParam0->f_1330.f_194, uParam1->f_339);
		func_191(uParam1);
		func_211(uParam1);
		func_210(uParam1, 0, 0);
		func_502(uParam1, 0);
		func_232(&(uParam0->f_1330), 0);
		func_446(&(uParam0->f_2334));
		if (func_504(&(uParam0->f_1330), iVar2, uParam1->f_339, &uVar0))
		{
		}
		if (uParam1->f_343 != -1)
		{
			func_498(&(uParam0->f_1330), &(uParam0->f_1330.f_746[uParam1->f_343 /*8*/]), 3);
		}
	}
	if (func_752(uParam1, &(uParam0->f_1330)))
	{
		if (func_506(uParam1, &(uParam0->f_1330), uParam2))
		{
			func_444(uParam1, &(uParam1->f_460));
		}
	}
}

void func_510(var uParam0)
{
	uParam0->f_261 = 0;
	func_191(uParam0);
	func_502(uParam0, 0);
	func_211(uParam0);
	func_198(uParam0, 5);
}

bool func_511(var uParam0)
{
	return func_753(__LIB_12__::func_475(uParam0));
}

void func_514(var uParam0, int iParam1)
{
	if (!func_557(uParam0))
	{
		return;
	}
	if (!func_204(uParam0, iParam1))
	{
		return;
	}
	if (uParam0->f_199[iParam1 /*124*/].f_7)
	{
		ANIMSCENE::_0xAE6DE22DE0ED4554(uParam0->f_742, __LIB_12__::func_475(&(uParam0->f_199[iParam1 /*124*/])));
		uParam0->f_199[iParam1 /*124*/].f_7 = 0;
	}
}

void func_516(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	char* sVar4;
	iVar3 = 33153;
	sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_00";
	vVar0 = { func_68(uParam0, uParam1) };
	switch (uParam1->f_10)
	{
		case 0:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_00";
			break;
		case 1:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_01";
			break;
		case 2:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_02";
			break;
		case 3:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_03";
			break;
	}
	if (func_69(uParam0, uParam1))
	{
		sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00";
	}
	func_674(uParam0, uParam1, sVar4, "PLAYER_00_IDLE", vVar0, iVar3, 0, iParam2, 1);
}

int func_552(int iParam0, int iParam1)
{
	if ((iParam0 == 29 || iParam0 == 28) || iParam0 == 28)
	{
		switch (iParam1)
		{
			case -1:
				return joaat("P_DOMINO_0_0");
			case 0:
				return joaat("P_DOMINO01_0_0");
			case 1:
				return joaat("P_DOMINO02_0_0");
			case 2:
				return joaat("P_DOMINO03_0_0");
			case 3:
				return joaat("P_DOMINO04_0_0");
			case 4:
				return joaat("P_DOMINO05_0_0");
			case 5:
				return joaat("P_DOMINO06_0_0");
			default:
				break;
		}
		return joaat("P_DOMINO_0_0");
	}
	return __LIB_7__::func_725(iParam0, iParam1);
}

void func_553(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_701(uParam0, iParam1, iParam2, iParam3);
	uParam0->f_746[iParam1 /*8*/].f_5 = iParam4;
}

int func_556(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (Global_1946804.f_2535.f_1 >= 5)
	{
		return 0;
	}
	if (!__LIB_18__::func_288(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = __LIB_6__::func_112(iParam0);
	return __LIB_6__::func_478(iParam1, iVar0, bParam2, 1);
}

bool func_557(var uParam0)
{
	return uParam0->f_742 != -1;
}

bool func_559(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_48)
	{
		if (uParam0->f_48[iVar0 /*15*/] == 0)
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_596(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	func_314(uParam1, 28);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 7)
			{
				if (uParam0->f_149[iVar0 /*44*/].f_4.f_39 == uParam0->f_149[iVar0 /*44*/].f_3)
				{
					func_598(uParam1, func_334(uParam0->f_149[iVar0 /*44*/].f_4[iVar1 /*2*/]));
				}
				else
				{
					func_598(uParam1, 28);
				}
				iVar1++;
			}
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 7)
			{
				func_598(uParam1, 28);
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_597(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = -1;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			iVar1 = func_816(&(uParam0->f_149[iVar0 /*44*/].f_4), iParam1);
			if (iVar1 > iVar2 || iVar2 == -1)
			{
				iVar3 = iVar0;
				iVar2 = iVar1;
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_598(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 28)
	{
		iVar1 = func_150(uParam0, iVar0);
		if (iVar1 == 29)
		{
			func_315(uParam0, iVar0, iParam1);
			return true;
		}
		iVar0++;
	}
	return false;
}

var func_599(var uParam0)
{
	var uVar0;
	MISC::SET_BITS_IN_RANGE(&uVar0, 0, 4, *uParam0);
	MISC::SET_BITS_IN_RANGE(&uVar0, 5, 10, uParam0->f_1 + 32);
	MISC::SET_BITS_IN_RANGE(&uVar0, 11, 16, uParam0->f_1.f_1 + 32);
	MISC::SET_BITS_IN_RANGE(&uVar0, 17, 19, uParam0->f_3);
	MISC::SET_BITS_IN_RANGE(&uVar0, 20, 31, uParam0->f_4);
	return uVar0;
}

bool func_600(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
		case 13:
		case 18:
		case 22:
		case 25:
		case 27:
			return true;
		default:
			break;
	}
	return false;
}

int func_601(var uParam0)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 8;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_602(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (uParam0->f_705 == 0)
	{
		return 0;
	}
	if (uParam0->f_707 == -1)
	{
		return 0;
	}
	iVar3 = uParam0->f_14.f_6.f_1[uParam0->f_707 /*5*/].f_4;
	iVar1 = uParam0->f_14.f_6.f_1[uParam0->f_707 /*5*/].f_2;
	iVar2 = uParam0->f_14.f_6.f_1[uParam0->f_707 /*5*/].f_2.f_1;
	iVar0 = 0;
	if (iVar3 == 1 || iVar3 == 3)
	{
		if (func_817(&(uParam0->f_14), (iVar1 - 4), iVar2))
		{
			iVar0++;
		}
		if (func_817(&(uParam0->f_14), iVar1 + 4, iVar2))
		{
			iVar0++;
		}
		if (func_817(&(uParam0->f_14), iVar1 + 1, (iVar2 - 6)))
		{
			iVar0++;
		}
		if (func_817(&(uParam0->f_14), iVar1 + 1, iVar2 + 3))
		{
			iVar0++;
		}
	}
	else
	{
		if (func_817(&(uParam0->f_14), iVar1, iVar2 + 4))
		{
			iVar0++;
		}
		if (func_817(&(uParam0->f_14), iVar1, (iVar2 - 4)))
		{
			iVar0++;
		}
		if (func_817(&(uParam0->f_14), (iVar1 - 4), (iVar2 - 1)))
		{
			iVar0++;
		}
		if (func_817(&(uParam0->f_14), iVar1 + 2, (iVar2 - 1)))
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_603(var uParam0)
{
	vector3 vVar0;
	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 9;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_605(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	if (STATS::STAT_ID_GET_INT(&uParam0, &uVar0))
	{
		STATS::_STAT_ID_INCREMENT_INT(&uParam0, 1);
		STATS::STAT_ID_GET_INT(&uParam0, &uVar1);
		return 1;
	}
	return 0;
}

bool func_609(var uParam0, var uParam1)
{
	int iVar0;
	if (*uParam0 != *uParam1)
	{
		return false;
	}
	if (uParam0->f_142 != uParam1->f_142)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (!func_818(&(uParam0->f_1[iVar0 /*5*/]), &(uParam1->f_1[iVar0 /*5*/])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_610(var uParam0, var uParam1)
{
	if (*uParam0 != *uParam1)
	{
		return 0;
	}
	if (uParam0->f_1 != uParam1->f_1)
	{
		return 0;
	}
	if (uParam0->f_2 != uParam1->f_2)
	{
		return 0;
	}
	if (uParam0->f_3 != uParam1->f_3)
	{
		return 0;
	}
	return func_819(&(uParam0->f_4), &(uParam1->f_4));
}

bool func_611(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!func_149(&(uParam0->f_14), iParam1))
	{
		return false;
	}
	iVar0 = uParam0->f_14.f_149[iParam1 /*44*/].f_4.f_39;
	if (iVar0 >= 19)
	{
		return false;
	}
	func_151(iParam2, &(uParam0->f_14.f_149[iParam1 /*44*/].f_4[iVar0 /*2*/]), &(uParam0->f_14.f_149[iParam1 /*44*/].f_4[iVar0 /*2*/].f_1));
	uParam0->f_14.f_149[iParam1 /*44*/].f_4.f_39++;
	uParam0->f_14.f_149[iParam1 /*44*/].f_3 = uParam0->f_14.f_149[iParam1 /*44*/].f_4.f_39;
	return true;
}

bool func_613(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	return (!(Param0.f_1 == 0 && Param0.f_1.f_1 == 0) && Param0 >= 0);
}

bool func_614(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return false;
	}
	switch (iParam0)
	{
		case -1234859967:
			if (iParam1 == 0)
			{
				return false;
			}
			return (iParam1 % 5) == 0;
		case -382896522:
			if (iParam1 == 0)
			{
				return false;
			}
			return (iParam1 % 3) == 0;
		default:
			break;
	}
	return false;
}

int func_615(struct<2> Param0)
{
	return (Param0 + Param0.f_1);
}

int func_622(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_40.f_6563[iVar0 /*27*/] == iParam0)
		{
			Global_40.f_6563[iVar0 /*27*/].f_24 = 2;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_40.f_6563[iVar0 /*27*/].f_24 != 0)
		{
		}
		else
		{
			__LIB_7__::func_381(&(Global_40.f_6563[iVar0 /*27*/]), iParam0);
			__LIB_7__::func_384(iParam0);
			if (bParam2)
			{
				func_827(&(Global_40.f_6563[iVar0 /*27*/]));
				if (!__LIB_0__::func_474(172))
				{
					__LIB_1__::func_240(172, 0);
				}
				func_830(&(Global_40.f_6563[iVar0 /*27*/]), 0);
			}
			__LIB_7__::func_372(iVar0, 1);
			__LIB_7__::func_373();
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CAMP_REQUESTS_STARTED")), 1);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_626(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_157, iParam1);
}

void func_627(var uParam0, var uParam1, int iParam2)
{
	char[] cVar0[8];
	if (!func_204(uParam1, iParam2))
	{
		return;
	}
	if (iParam2 < 0 || iParam2 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	if (!func_626(&(uParam0->f_1), iParam2))
	{
		func_836(&(uParam0->f_1), iParam2);
	}
	func_837(&(uParam0->f_1), iParam2);
	cVar0 = __LIB_7__::func_751(&Global_1899750, iParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0))
	{
		__LIB_12__::func_415(&(uParam0->f_1.f_26[iParam2 /*32*/]), cVar0);
		__LIB_7__::func_752(&(uParam0->f_1.f_26[iParam2 /*32*/]), cVar0);
	}
	else if (iParam2 == uParam1->f_194)
	{
		if (__LIB_0__::func_181())
		{
			__LIB_12__::func_415(&(uParam0->f_1.f_26[iParam2 /*32*/]), "avatar_john");
		}
		else
		{
			__LIB_12__::func_415(&(uParam0->f_1.f_26[iParam2 /*32*/]), "avatar_arthur");
		}
	}
	else
	{
		__LIB_12__::func_415(&(uParam0->f_1.f_26[iParam2 /*32*/]), "avatar_generic");
	}
	MISC::SET_BIT(&(uParam0->f_236), iParam2);
	uParam0->f_171[iParam2 /*8*/] = { func_841(uParam1->f_199[iParam2 /*124*/]) };
	func_188(uParam0, iParam2, uParam0->f_166[iParam2]);
	func_389(uParam0, iParam2, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGWAITTURN"));
}

int func_628(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[4];
	switch (iParam1)
	{
		case 0:
			iVar2[0] = 0;
			iVar2[1] = 2;
			iVar2[2] = 1;
			iVar2[3] = 3;
			break;
		case 1:
			iVar2[0] = 1;
			iVar2[1] = 3;
			iVar2[2] = 0;
			iVar2[3] = 2;
			break;
		case 2:
			iVar2[0] = 2;
			iVar2[1] = 1;
			iVar2[2] = 3;
			iVar2[3] = 0;
			break;
		case 3:
			iVar2[0] = 3;
			iVar2[1] = 0;
			iVar2[2] = 2;
			iVar2[3] = 1;
			break;
	}
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar2[iVar1]))
		{
			return iVar2[iVar1];
		}
		iVar1 = (iVar1 + 1 % 4);
		iVar0++;
	}
	return -1;
}

int func_630(var uParam0)
{
	return uParam0->f_47;
}

void func_631(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case -1234859967:
			func_194(uParam0, "MGDOM_HLP_QRULE_0", iParam2, 10000);
			break;
		case -382896522:
			func_194(uParam0, "MGDOM_HLP_QRULE_1", iParam2, 10000);
			break;
		case -1617663169:
			func_194(uParam0, "MGDOM_HLP_QRULE_2", iParam2, 10000);
			break;
		case -1360983891:
			func_194(uParam0, "MGDOM_HLP_QRULE_3", iParam2, 10000);
			break;
	}
}

void func_632(var uParam0, int iParam1, int iParam2)
{
	if (func_204(uParam0, iParam1))
	{
		uParam0->f_199[iParam1 /*124*/].f_5 = iParam2;
	}
}

int func_633(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<15> Var0;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_236(&(uParam0->f_199[iParam1 /*124*/]), 12))
	{
		return 0;
	}
	if (func_236(&(uParam0->f_199[iParam1 /*124*/]), 11))
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	Var0.f_1 = 8;
	Var0.f_14 = -1;
	if (bParam2)
	{
		Var0 = 11;
	}
	else
	{
		Var0 = 12;
	}
	if (bParam3)
	{
		func_374(uParam0, iParam1);
	}
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &Var0);
}

int func_634(var uParam0, int iParam1)
{
	struct<15> Var0;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	Var0.f_1 = 8;
	Var0.f_14 = -1;
	Var0 = 13;
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &Var0);
}

void func_635(int iParam0, int iParam1)
{
	*iParam1 = MISC::GET_BITS_IN_RANGE(iParam0, 0, 4);
	iParam1->f_1 = (MISC::GET_BITS_IN_RANGE(iParam0, 5, 10) - 32);
	iParam1->f_1.f_1 = (MISC::GET_BITS_IN_RANGE(iParam0, 11, 16) - 32);
	iParam1->f_3 = MISC::GET_BITS_IN_RANGE(iParam0, 17, 19);
	iParam1->f_4 = MISC::GET_BITS_IN_RANGE(iParam0, 20, 31);
}

int func_636(var uParam0, int iParam1, int iParam2)
{
	struct<15> Var0;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	if (uParam0->f_741)
	{
		return 0;
	}
	Var0.f_1 = 8;
	Var0.f_14 = -1;
	Var0 = 6;
	func_289(&Var0, 0, iParam2);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &Var0);
}

int func_637(var uParam0, int iParam1, int iParam2, struct<4> Param3, var uParam7, int iParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	struct<15> Var3;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	if (uParam0->f_741)
	{
		return 0;
	}
	Var3.f_1 = 8;
	Var3.f_14 = -1;
	Var3 = 8;
	func_289(&Var3, 0, iParam2);
	func_289(&Var3, 1, Param3.f_3);
	func_289(&Var3, 2, iParam8);
	if (bParam9)
	{
		func_289(&Var3, 3, 1);
	}
	func_289(&Var3, 7, iParam10);
	vVar0 = { func_843(uParam0, &Param3) };
	func_844(&Var3, vVar0);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &Var3);
}

bool func_638(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	*iParam2 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (uParam0->f_746[iVar0 /*8*/] == iParam1 && iVar0 > iParam3)
		{
			*iParam2 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_639(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_746[iParam1 /*8*/].f_5 = iParam2;
}

int func_640(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	struct<15> Var0;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	if (uParam0->f_741)
	{
		return 0;
	}
	Var0.f_1 = 8;
	Var0.f_14 = -1;
	Var0 = 9;
	func_289(&Var0, 0, iParam2);
	if (bParam3)
	{
		Var0 = 10;
		func_289(&Var0, 1, 1);
	}
	func_289(&Var0, 5, iParam4);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &Var0);
}

bool func_642(var uParam0, int iParam1)
{
	return (uParam0->f_46 == 54 && uParam0->f_48[0 /*15*/] == iParam1);
}

int func_649(var uParam0)
{
	return uParam0->f_46;
}

int func_650(var uParam0, var uParam1, char* sParam2, bool bParam3, float fParam4)
{
	struct<34> Var0;
	int iVar34;
	var uVar35;
	Var0.f_6 = -1082130432;
	Var0.f_9 = -1082130432;
	iVar34 = __LIB_12__::func_475(uParam1);
	uVar35 = uParam1->f_9;
	if (func_69(uParam0, uParam1))
	{
		uParam1->f_18.f_17 = joaat("MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00");
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				uParam1->f_18.f_17 = joaat("MINI_GAMES@DOMINOES@GAME@PLAYER_00");
				break;
			case 1:
				uParam1->f_18.f_17 = joaat("MINI_GAMES@DOMINOES@GAME@PLAYER_01");
				break;
			case 2:
				uParam1->f_18.f_17 = joaat("MINI_GAMES@DOMINOES@GAME@PLAYER_02");
				break;
			case 3:
				uParam1->f_18.f_17 = joaat("MINI_GAMES@DOMINOES@GAME@PLAYER_03");
				break;
			default:
				uParam1->f_18.f_17 = joaat("MINI_GAMES@DOMINOES@GAME@PLAYER_00");
				break;
		}
	}
	Var0 = uParam1->f_18.f_17;
	Var0.f_1 = joaat("DEFAULT");
	Var0.f_4 = "ANGLE_OF_PIECE";
	Var0.f_5 = 0f;
	Var0.f_32 = "CURRENT_CLIP";
	Var0.f_33 = "CLIP_PHASE";
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		Var0.f_29 = sParam2;
	}
	else
	{
		Var0.f_29 = "IdleRequest";
	}
	if (uParam0->f_194 == uParam1->f_9)
	{
		uParam0->f_195 = 1;
		uParam0->f_198 = 3;
	}
	uParam1->f_3 = 1;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar34, 0) || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar34, -1))
	{
		PED::_0xF1C03A5352243A30(iVar34);
		TASK::CLEAR_PED_TASKS(iVar34, true, false);
	}
	if (__LIB_0__::func_2() == 0)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar34, true);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar34, false);
	}
	PED::SET_PED_LEG_IK_MODE(iVar34, 0);
	TASK::TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(iVar34, "SCRIPT_MINI_GAME_DOMINOES", &Var0, fParam4, true, 0, 512);
	uParam1->f_18.f_11 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	uParam1->f_18.f_20 = 0;
	func_449(uParam1, 0);
	uParam1->f_18.f_4 = 0;
	if (bParam3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar34) && !uParam1->f_2)
		{
			PED::_0x2208438012482A1A(iVar34, false, false);
		}
	}
	return 1;
}

void func_651(var uParam0, int iParam1)
{
	if (iParam1 == 54)
	{
		uParam0->f_47 = uParam0->f_48[0 /*15*/];
	}
	if (iParam1 != uParam0->f_46)
	{
		__LIB_1__::func_148(&(uParam0->f_43));
		uParam0->f_46 = iParam1;
	}
}

bool func_652(var uParam0)
{
	return __LIB_7__::func_753(__LIB_12__::func_475(uParam0));
}

void func_653(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	char* sVar4;
	iVar3 = 33153;
	sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_00";
	vVar0 = { func_68(uParam0, uParam1) };
	switch (uParam1->f_10)
	{
		case 0:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_00";
			break;
		case 1:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_01";
			break;
		case 2:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_02";
			break;
		case 3:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_03";
			break;
	}
	if (func_69(uParam0, uParam1))
	{
		sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00";
	}
	func_70(uParam0, uParam1, sVar4, "PLAYER_00_IDLE", vVar0, iVar3, 0, iParam2, 1);
}

void func_655(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[6];
	int iVar8;
	iVar8 = __LIB_7__::func_754(iParam0, &uVar1, 6);
	iVar0 = 0;
	while (iVar0 < iVar8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar1[iVar0]) && ENTITY::IS_ENTITY_AN_OBJECT(uVar1[iVar0]))
		{
			PED::_0xED00D72F81CF7278(uVar1[iVar0], 0, 0);
			if (iParam1 == 1)
			{
				if (ENTITY::_0x61914209C36EFDDB(uVar1[iVar0]) == 5)
				{
					ENTITY::DELETE_ENTITY(&(uVar1[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_656(var uParam0, var uParam1, float fParam2, bool bParam3)
{
	char cVar0[64];
	vector3 vVar8;
	StringCopy(&cVar0, "MINI_GAMES@DOMINOES@GAME@PLAYER_0", 64);
	vVar8 = { func_68(uParam0, uParam1) };
	StringIntConCat(&cVar0, uParam1->f_10, 64);
	if (func_69(uParam0, uParam1))
	{
		StringCopy(&cVar0, "MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00", 64);
	}
	PED::_0xF1C03A5352243A30(uParam1->f_12);
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam1->f_12, 0))
	{
		TASK::CLEAR_PED_TASKS(uParam1->f_12, true, false);
	}
	PED::SET_PED_LEG_IK_MODE(uParam1->f_12, 0);
	TASK::TASK_PLAY_ANIM_ADVANCED(uParam1->f_12, &cVar0, "PLAYER_00_IDLE", *uParam0, vVar8, fParam2, -8f, -1, 41345, 0f, 2, 0, 0);
	if (bParam3)
	{
		PED::_0x2208438012482A1A(uParam1->f_12, false, false);
	}
}

int func_657(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1)
	{
		return 0;
	}
	return uParam0->f_1[iParam1];
}

bool func_658(int iParam0)
{
	int iVar0;
	int iVar1;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, 1, false);
	return (iVar0 == joaat("WEAPON_UNARMED") && iVar1 == joaat("WEAPON_UNARMED"));
}

int func_659(var uParam0, int iParam1, var uParam2)
{
	vector3 vVar0;
	if (!__LIB_1__::func_88(1, iParam1, &vVar0))
	{
		return 0;
	}
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam0, uParam0->f_3, vVar0) };
	return 1;
}

void func_662(var uParam0, var uParam1, char* sParam2, char* sParam3, vector3 vParam4, vector3 vParam7, int iParam10, float fParam11, bool bParam12, int iParam13)
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_12__::func_475(uParam1);
	bVar1 = TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0);
	if (fParam11 != 0f || bParam12)
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, sParam2, sParam3, vParam4, vParam7, 1000f, -8f, -1, iParam10, fParam11, 2, iParam13, uParam1->f_2);
	}
	else
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, sParam2, sParam3, vParam4, vParam7, 8f, -8f, -1, iParam10, 0f, 2, iParam13, uParam1->f_2);
	}
	if (bVar1)
	{
	}
}

int func_663(var uParam0, char* sParam1, char* sParam2, var uParam3)
{
	int iVar0;
	iVar0 = __LIB_12__::func_475(uParam0);
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sParam1, sParam2, 1))
	{
		return 0;
	}
	*uParam3 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar0, sParam1, sParam2);
	return 1;
}

bool func_664(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	iVar0 = __LIB_12__::func_475(uParam0);
	if ((!PED::IS_PED_INJURED(iVar0) && ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sParam1, sParam2, 1)) && (bParam3 || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar0, sParam1, sParam2) < 1f))
	{
		return true;
	}
	return false;
}

void func_666(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_743))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_743, false))
		{
			uParam0->f_77 = 3;
		}
	}
}

void func_667(var uParam0)
{
	if (uParam0->f_2334.f_409 == 1)
	{
		if (CAM::_0x927B810E43E99932(&(uParam0->f_2334.f_410)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_2334.f_410));
		}
		uParam0->f_2334.f_409 = 0;
	}
	if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1 && uParam0->f_2334.f_407 == 1)
	{
		GRAPHICS::_0xBB6C707F20D955D4(0.25f);
	}
	uParam0->f_2334.f_407 = 0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_2334.f_437))
	{
		CAM::DESTROY_CAM(uParam0->f_2334.f_437, false);
	}
}

void func_668(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar4 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar4))
	{
		__LIB_3__::func_685(&iVar0, *uParam0 + Vector(fLocal_14, 0f, 0f), 0f, 0f, 0f, 1f, 1f, 1f);
		iVar2 = ENTITY::_0x886171A12F400B89(iVar0, iVar4, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar4));
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && func_133(iVar1))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
				}
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
				{
					ENTITY::DETACH_ENTITY(iVar1, true, true);
				}
				OBJECT::DELETE_OBJECT(&iVar1);
			}
			iVar3++;
		}
		__LIB_0__::func_172(iVar0);
		ITEMSET::_CLEAR_ITEMSET(iVar4);
		ITEMSET::DESTROY_ITEMSET(iVar4);
	}
}

int func_672(int iParam0, vector3 vParam1, float fParam4, float fParam5, vector3 vParam6, var uParam9, int iParam10)
{
	vector3 vVar0;
	float fVar3;
	if (!__LIB_1__::func_76(iParam0))
	{
		return 0;
	}
	if (!__LIB_7__::func_764(iParam0, vParam1, fParam4, fParam5, &vVar0, &fVar3, iParam10))
	{
		return 0;
	}
	*uParam9 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, vParam6) };
	return 1;
}

void func_674(var uParam0, var uParam1, char* sParam2, char* sParam3, vector3 vParam4, int iParam7, float fParam8, float fParam9, int iParam10)
{
	int iVar0;
	iVar0 = __LIB_12__::func_475(uParam1);
	TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, sParam2, sParam3, *uParam0, vParam4, fParam9, -fParam9, -1, iParam7, fParam8, 2, iParam10, uParam1->f_2);
}

void func_676(int iParam0, char[4] cParam1, char[4] cParam2, vector3 vParam3, vector3 vParam6, int iParam9, float fParam10, int iParam11, bool bParam12)
{
	struct<31> Var0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	Var0.f_26 = -1082130432;
	if (ENTITY::_0x0B7CB1300CBFE19C(iParam0, 1))
	{
		TASK::STOP_ANIM_PLAYBACK(iParam0, 0, false);
	}
	Var0 = 1;
	Var0.f_1 = cParam1;
	Var0.f_2 = cParam2;
	Var0.f_3 = iParam9;
	Var0.f_4 = fParam10;
	Var0.f_5 = 1f;
	Var0.f_10 = 0f;
	Var0.f_15 = 0f;
	Var0.f_23 = 0;
	Var0.f_19 = -1;
	Var0.f_16 = 0;
	Var0.f_20 = 16662;
	Var0.f_21 = 8;
	Var0.f_22 = 1;
	Var0.f_17 = iParam11;
	Var0.f_18 = 0f;
	Var0.f_27 = { vParam3 };
	Var0.f_30 = { vParam6 };
	TASK::PLAY_ENTITY_SCRIPTED_ANIM(iParam0, &Var0);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam0, true);
	if (fParam10 != 1f)
	{
		TASK::SET_ANIM_RATE(iParam0, fParam10, 0, false);
	}
	if (bParam12)
	{
	}
}

Vector3 func_677(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return 0f, 0f, uParam0->f_3;
		case 1:
			return 0f, 0f, (uParam0->f_3 + 180f);
		case 2:
			return 0f, 0f, (uParam0->f_3 - 90f);
		case 3:
			return 0f, 0f, (uParam0->f_3 + 90f);
		default:
			break;
	}
	return 0f, 0f, uParam0->f_3;
}

bool func_678(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(__LIB_12__::func_475(&(uParam0->f_199[iParam1 /*124*/]))))
	{
		return false;
	}
	return uParam0->f_199[iParam1 /*124*/].f_5;
}

bool func_679(var uParam0)
{
	char cVar0[64];
	char cVar8[64];
	float fVar16;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
	{
		return true;
	}
	StringCopy(&cVar0, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0", 64);
	StringIntConCat(&cVar0, uParam0->f_10, 64);
	StringCopy(&cVar8, "PLAYER_00_POP_RACK", 64);
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_12, &cVar0, &cVar8, 1))
	{
		return true;
	}
	fVar16 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_12, &cVar0, &cVar8);
	switch (uParam0->f_10)
	{
		case 0:
			if (fVar16 >= 0.005f && fVar16 <= 0.039f)
			{
				return false;
			}
			if (fVar16 >= 0.392f && fVar16 <= 0.637f)
			{
				return false;
			}
			break;
		case 1:
			if (fVar16 >= 0.017f && fVar16 <= 0.22f)
			{
				return false;
			}
			if (fVar16 >= 0.252f && fVar16 <= 0.4f)
			{
				return false;
			}
			if (fVar16 >= 0.447f && fVar16 <= 0.554f)
			{
				return false;
			}
			if (fVar16 >= 0.559f && fVar16 <= 0.772f)
			{
				return false;
			}
			break;
		case 2:
			if (fVar16 >= 0.017f && fVar16 <= 0.128f)
			{
				return false;
			}
			if (fVar16 >= 0.191f && fVar16 <= 0.368f)
			{
				return false;
			}
			if (fVar16 >= 0.413f && fVar16 <= 0.596f)
			{
				return false;
			}
			if (fVar16 >= 0.69f && fVar16 <= 0.823f)
			{
				return false;
			}
			break;
		case 3:
			if (fVar16 >= 0.019f && fVar16 <= 0.128f)
			{
				return false;
			}
			if (fVar16 >= 0.173f && fVar16 <= 0.42f)
			{
				return false;
			}
			if (fVar16 >= 0.486f && fVar16 <= 0.55f)
			{
				return false;
			}
			if (fVar16 >= 0.598f && fVar16 <= 0.728f)
			{
				return false;
			}
			break;
	}
	return true;
}

int func_683(var uParam0, char* sParam1)
{
	var uVar0;
	int iVar1;
	uVar0 = uParam0->f_9;
	iVar1 = __LIB_12__::func_475(uParam0);
	if (!func_511(uParam0))
	{
		return 0;
	}
	if (!func_652(uParam0))
	{
		return 0;
	}
	TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iVar1, sParam1);
	__LIB_1__::func_148(&(uParam0->f_18.f_14));
	return 1;
}

bool func_684(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = __LIB_12__::func_475(uParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	return ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY(sParam1));
}

void func_685(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	iVar0 = __LIB_12__::func_475(uParam1);
	func_852(uParam0, iVar0, iParam2, bParam3, bParam4);
	if (bParam3)
	{
		uParam1->f_14 = 0;
		uParam1->f_15 = 1;
	}
	else
	{
		uParam1->f_14 = 1;
		uParam1->f_15 = 0;
	}
}

bool func_686(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	if (!func_511(uParam0))
	{
		return false;
	}
	iVar0 = __LIB_12__::func_475(uParam0);
	if (bParam2)
	{
		if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, sParam1))
		{
			return true;
		}
		if (__LIB_0__::func_264(&(uParam0->f_18.f_14)) > 5f)
		{
			return true;
		}
		return false;
	}
	return TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, sParam1);
}

bool func_687(var uParam0, var uParam1)
{
	int iVar0;
	if (!func_511(uParam0))
	{
		return false;
	}
	iVar0 = __LIB_12__::func_475(uParam0);
	if (__LIB_0__::func_2() == -1)
	{
		*uParam1 = MISC::GET_HASH_KEY(TASK::GET_TASK_MOVE_NETWORK_STATE(iVar0));
	}
	else
	{
		*uParam1 = TASK::_0xE9A6400D1A0E7A55(iVar0);
	}
	return true;
}

void func_688(var uParam0, int iParam1)
{
	uParam0->f_18.f_22 = iParam1;
}

int func_689(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	var uVar3;
	vector3 vVar6;
	vector3 vVar9;
	func_853(iParam2, iParam3, &uVar0, &uVar3, 0);
	func_854(uParam0, &uVar0, &uVar3, &vVar6, &vVar9);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iParam1 /*8*/].f_1))
	{
		return 0;
	}
	__LIB_2__::func_919(uParam0->f_746[iParam1 /*8*/].f_1, 1, 1);
	if (ENTITY::_0x0B7CB1300CBFE19C(uParam0->f_746[iParam1 /*8*/].f_1, 1))
	{
		TASK::STOP_ANIM_PLAYBACK(uParam0->f_746[iParam1 /*8*/].f_1, 0, false);
	}
	ENTITY::SET_ENTITY_COORDS(uParam0->f_746[iParam1 /*8*/].f_1, vVar6, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(uParam0->f_746[iParam1 /*8*/].f_1, vVar9, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iParam1 /*8*/].f_1, true);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_746[iParam1 /*8*/].f_1, uParam0->f_745, false);
	switch (iParam2)
	{
		case 0:
			func_553(uParam0, iParam1, 2, iParam3, iParam4);
			break;
		case 1:
			func_553(uParam0, iParam1, 3, iParam3, iParam4);
			break;
		case 2:
			func_553(uParam0, iParam1, 4, iParam3, iParam4);
			break;
		case 3:
			func_553(uParam0, iParam1, 5, iParam3, iParam4);
			break;
	}
	return 1;
}

void func_690(var uParam0)
{
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_42 = -1;
}

bool func_692(var uParam0)
{
	int iVar0;
	if (!func_511(uParam0))
	{
		return false;
	}
	if (!func_687(uParam0, &iVar0))
	{
		return false;
	}
	if (!uParam0->f_3)
	{
		return false;
	}
	if (joaat("RH_TILE_IDLE") == iVar0 || joaat("LH_TILE_IDLE") == iVar0)
	{
		return true;
	}
	if (func_684(uParam0, "Blend"))
	{
		return true;
	}
	if (uParam0->f_18.f_21 > 0.9f)
	{
		if (joaat("GET_TILE_RACK_LH") == iVar0 || joaat("GET_TILE_RACK_RH") == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_693(var uParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	iVar0 = __LIB_12__::func_475(uParam0);
	vVar1 = { -0.325f, (0.66f - 0.325f), fLocal_14 };
	vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar0, vParam1) };
	vVar7 = { vVar1 - vVar4 };
	uParam0->f_18.f_5 = ((vVar7.x / (0.325f * 2f)) * -1f);
	uParam0->f_18.f_6 = ((vVar7.y / (0.325f * 2f)) * -1f);
	uParam0->f_18.f_7 = { vParam1 };
}

void func_695(var uParam0, float fParam1)
{
	uParam0->f_18.f_10 = fParam1;
}

void func_696(var uParam0)
{
	int iVar0;
	if (!func_511(uParam0))
	{
		return;
	}
	iVar0 = __LIB_12__::func_475(uParam0);
	uParam0->f_18.f_21 = TASK::_0x844CEEE428EA35B0(iVar0, "CLIP_PHASE");
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "X", uParam0->f_18.f_5);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "Y", uParam0->f_18.f_6);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "ANGLE_OF_PIECE", uParam0->f_18.f_10);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "RACK_TILE_INDEX", BUILTIN::TO_FLOAT(uParam0->f_18.f_22));
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "ANIM_VARIATION", uParam0->f_18.f_11);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "CHANGE_IDLE", uParam0->f_18.f_1);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "FIRSTPERSON_IDLE", uParam0->f_18.f_2);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "TILE_PUT_BACK", uParam0->f_18.f_3);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "PEEK_AT_TILES", uParam0->f_18.f_4);
	if (!__LIB_0__::func_86(uParam0->f_18.f_7))
	{
		TASK::_SET_TASK_MOVE_NETWORK_SIGNAL_VECTOR(iVar0, "HAND_POS", uParam0->f_18.f_7);
	}
	if (!uParam0->f_2)
	{
		PED::_0x2208438012482A1A(iVar0, false, false);
	}
	uParam0->f_18 = 1;
}

bool func_697(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = __LIB_7__::func_755(uParam0->f_9, iParam1);
	switch (uParam0->f_10)
	{
		case 0:
		case 1:
			if (bParam2 == 1)
			{
				if (iVar0 == 1 || iVar0 == 2)
				{
					return false;
				}
				return true;
			}
			else
			{
				if (iVar0 == 1 || iVar0 == 0)
				{
					return false;
				}
				return true;
			}
			break;
		case 2:
		case 3:
			if (bParam2 == 1)
			{
				if (iVar0 == 1 || iVar0 == 2)
				{
					return false;
				}
				return true;
			}
			else
			{
				if (iVar0 == 3 || iVar0 == 2)
				{
					return false;
				}
				return true;
			}
			break;
	}
	return false;
}

void func_698(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = func_372(iParam1);
	if (iVar2 != uParam0->f_746[iParam2 /*8*/])
	{
		return;
	}
	switch (uParam0->f_746[iParam2 /*8*/])
	{
		case 2:
			MISC::CLEAR_BIT(&(uParam0->f_981[0]), uParam0->f_746[iParam2 /*8*/].f_4);
			break;
		case 3:
			MISC::CLEAR_BIT(&(uParam0->f_981[1]), uParam0->f_746[iParam2 /*8*/].f_4);
			break;
		case 4:
			MISC::CLEAR_BIT(&(uParam0->f_981[2]), uParam0->f_746[iParam2 /*8*/].f_4);
			break;
		case 5:
			MISC::CLEAR_BIT(&(uParam0->f_981[3]), uParam0->f_746[iParam2 /*8*/].f_4);
			break;
	}
	iVar1 = uParam0->f_746[iParam2 /*8*/].f_5;
	uParam0->f_746[iParam2 /*8*/].f_5 = -1;
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (iVar0 != iParam2 && uParam0->f_746[iVar0 /*8*/].f_5 >= 0)
		{
			if (uParam0->f_746[iVar0 /*8*/] == iVar2 && uParam0->f_746[iVar0 /*8*/].f_5 > iVar1)
			{
				uParam0->f_746[iVar0 /*8*/].f_5 = (uParam0->f_746[iVar0 /*8*/].f_5 - 1);
			}
		}
		iVar0++;
	}
}

int func_699(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6)
{
	vector3 vVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iParam1 /*8*/].f_1))
	{
		return 0;
	}
	__LIB_2__::func_919(uParam0->f_746[iParam1 /*8*/].f_1, 1, 1);
	if (ENTITY::_0x0B7CB1300CBFE19C(uParam0->f_746[iParam1 /*8*/].f_1, 1))
	{
		TASK::STOP_ANIM_PLAYBACK(uParam0->f_746[iParam1 /*8*/].f_1, 0, false);
	}
	vParam2.f_2 = (uParam0->f_2 + (fLocal_14 + (0.01f / 2f)));
	ENTITY::SET_ENTITY_COORDS(uParam0->f_746[iParam1 /*8*/].f_1, vParam2, true, false, true, true);
	vVar0 = { 0f, 0f, (uParam0->f_3 + IntToFloat(__LIB_7__::func_756(iParam5))) };
	ENTITY::SET_ENTITY_ROTATION(uParam0->f_746[iParam1 /*8*/].f_1, vVar0, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iParam1 /*8*/].f_1, true);
	uParam0->f_746[iParam1 /*8*/].f_2 = iParam5;
	func_553(uParam0, iParam1, 6, iParam6, -1);
	return 1;
}

bool func_700(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (iParam0 == 0)
	{
		*iParam1 = 0;
		return true;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (!MISC::IS_BIT_SET(iParam0, iVar0))
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_701(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (uParam0->f_746[iParam1 /*8*/])
	{
		case 2:
			MISC::CLEAR_BIT(&(uParam0->f_981[0]), uParam0->f_746[iParam1 /*8*/].f_4);
			break;
		case 3:
			MISC::CLEAR_BIT(&(uParam0->f_981[1]), uParam0->f_746[iParam1 /*8*/].f_4);
			break;
		case 4:
			MISC::CLEAR_BIT(&(uParam0->f_981[2]), uParam0->f_746[iParam1 /*8*/].f_4);
			break;
		case 5:
			MISC::CLEAR_BIT(&(uParam0->f_981[3]), uParam0->f_746[iParam1 /*8*/].f_4);
			break;
		case 6:
			MISC::CLEAR_BIT(&(uParam0->f_986), iParam1);
			break;
	}
	uParam0->f_746[iParam1 /*8*/] = iParam2;
	uParam0->f_746[iParam1 /*8*/].f_4 = iParam3;
	switch (uParam0->f_746[iParam1 /*8*/])
	{
		case 2:
			MISC::SET_BIT(&(uParam0->f_981[0]), iParam3);
			break;
		case 3:
			MISC::SET_BIT(&(uParam0->f_981[1]), iParam3);
			break;
		case 4:
			MISC::SET_BIT(&(uParam0->f_981[2]), iParam3);
			break;
		case 5:
			MISC::SET_BIT(&(uParam0->f_981[3]), iParam3);
			break;
		case 6:
			MISC::SET_BIT(&(uParam0->f_986), iParam1);
			break;
	}
}

int func_702(var uParam0, int iParam1, var uParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iParam1 /*8*/].f_1))
	{
		return 0;
	}
	*uParam2 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iParam1 /*8*/].f_1, true, false) };
	return 1;
}

void func_704(var uParam0)
{
	uParam0->f_18.f_11 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.3f);
}

void func_705(var uParam0)
{
	uParam0->f_18.f_11 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
}

void func_707(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	int iVar18;
	iVar0 = 41308;
	iVar1 = 16732;
	uParam0->f_35.f_41 = iParam1;
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam1, iVar0, 0f, 0f, 0f) };
	vVar2.f_2 = (uParam0->f_2 + fLocal_14);
	vVar5 = { PED::GET_PED_BONE_COORDS(iParam1, iVar1, 0f, 0f, 0f) };
	vVar5.f_2 = (uParam0->f_2 + fLocal_14);
	iVar17 = 0;
	while (iVar17 < 28)
	{
		if (__LIB_7__::func_757(uParam0->f_746[iVar17 /*8*/].f_1, iVar17, &(uParam0->f_35), vVar2, vVar5))
		{
			iVar18 = __LIB_18__::func_57(uParam0->f_746[iVar17 /*8*/].f_1, iVar17, &(uParam0->f_35), *uParam0, 0f, 0f, uParam0->f_3);
			if (__LIB_1__::func_985())
			{
				AUDIO::_PLAY_SOUND_FROM_POSITION("TILE_SLIDE_SHORT", vVar2, "MGDOM_Sounds", false, 0, true, 0);
			}
			else
			{
				AUDIO::_PLAY_SOUND_FROM_POSITION("TILE_SLIDE_LONG", vVar2, "MGDOM_Sounds", false, 0, true, 0);
			}
		}
		iVar18 = uParam0->f_35.f_8[iVar17];
		if (iVar18 != -1)
		{
			__LIB_7__::func_758(iVar18, *uParam0, 0f, 0f, uParam0->f_3, &vVar8, &vVar11, 0);
			vVar14 = { __LIB_1__::func_367(ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iVar17 /*8*/].f_1, true, false), vVar8, uParam0->f_35.f_37) };
			ENTITY::SET_ENTITY_COORDS(uParam0->f_746[iVar17 /*8*/].f_1, vVar14, true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_746[iVar17 /*8*/].f_1, vVar11, 2, true);
		}
		iVar17++;
	}
}

bool func_709(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = -1;
	*uParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			if (uParam0->f_149[iVar0 /*44*/].f_2 > iVar1)
			{
				iVar1 = uParam0->f_149[iVar0 /*44*/].f_2;
				*uParam1 = iVar0;
			}
		}
		iVar0++;
	}
	return *uParam1 != -1;
}

bool func_710(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 2147483647;
	*uParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			if (uParam0->f_149[iVar0 /*44*/].f_2 < iVar1)
			{
				iVar1 = uParam0->f_149[iVar0 /*44*/].f_2;
				*uParam1 = iVar0;
			}
		}
		iVar0++;
	}
	return *uParam1 != -1;
}

bool func_711(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 2147483647;
	*iParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			if (uParam0->f_149[iVar0 /*44*/].f_3 < iVar1)
			{
				iVar1 = uParam0->f_149[iVar0 /*44*/].f_3;
				*iParam1 = iVar0;
			}
		}
		iVar0++;
	}
	return *iParam1 != -1;
}

bool func_712(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = -1;
	*iParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			if (uParam0->f_149[iVar0 /*44*/].f_3 > iVar1)
			{
				iVar1 = uParam0->f_149[iVar0 /*44*/].f_3;
				*iParam1 = iVar0;
			}
		}
		iVar0++;
	}
	return *iParam1 != -1;
}

char* func_713(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GREET";
		case 1:
			return "GREET_WINNER_MEMORY";
		case 2:
			return "GREET_LOSER_MEMORY";
		case 3:
			return "GREET_GOOD_MEMORY";
		case 4:
			return "GREET_BAD_MEMORY";
		case 5:
			return "GREET_AGAIN_WINNER";
		case 6:
			return "GREET_AGAIN_LOSER";
		case 7:
			return "GREET_CALLOVER";
		case 8:
			return "GREET_APPROACH";
		case 9:
			return "GOOD_MEMORY_CHATTER";
		case 10:
			return "BAD_MEMORY_CHATTER";
		case 11:
			return "GENERIC_CHATTER";
		case 12:
			return "CALLOVER_PLAYERS_GENERIC";
		case 13:
			return "CAMP_CHAT_HORSESHOE_OVERLOOK_CUSTOM";
		case 14:
			return "CAMP_CHAT_CLEMENS_POINT_CUSTOM";
		case 15:
			return "CAMP_CHAT_SHADY_BELLE_CUSTOM";
		case 16:
			return "COMPANION_CHAT_HORSESHOE_OVERLOOK_CUSTOM";
		case 17:
			return "COMPANION_CHAT_CLEMENS_POINT_CUSTOM";
		case 18:
			return "COMPANION_CHAT_SHADY_BELLE_CUSTOM";
		case 19:
			return "PLAYER_CAMP_CHAT_RESPONSE";
		case 20:
			return "COMMENT_LEAVE";
		case 21:
			return "COMMENT_LEAVE_EARLY";
		case 22:
			return "COMMENT_NOT_LOOKING_GOOD";
		case 23:
			return "COMMENT_LOOKING_GOOD";
		case 24:
			return "LEAVE_GOOD_GAME";
		case 25:
			return "LEAVE_NEUTRAL_GAME";
		case 26:
			return "LEAVE_BAD_GAME";
		case 27:
			return "LEAVE_VERY_BAD_GAME";
		case 28:
			return "REJOIN_TABLE";
		case 29:
			return "YES";
		case 30:
			return "NO";
		case 31:
			return "TIE";
		case 32:
			return "THANKS";
		case 33:
			return "FINISHED";
		case 34:
			return "RAISE";
		case 35:
			return "BUST";
		case 36:
			return "PLACE_BID";
		case 37:
			return "DELIBERATING";
		case 38:
			return "BIG_WIN";
		case 39:
			return "BIG_LOSS";
		case 40:
			return "SMALL_WIN";
		case 41:
			return "SMALL_LOSS";
		case 42:
			return "BIG_WIN_VOCAL";
		case 43:
			return "BIG_LOSS_VOCAL";
		case 44:
			return "SMALL_WIN_VOCAL";
		case 45:
			return "SMALL_LOSS_VOCAL";
		case 46:
			return "FILLER";
		case 47:
			return "ANGRY";
		case 48:
			return "EXCITED";
		case 49:
			return "DISAPPROVE";
		case 50:
			return "SURPRISED";
		case 51:
			return "COMMENT_WIN";
		case 52:
			return "COMMENT_SLOW";
		case 53:
			return "COMMENT_LOSS";
		case 54:
			return "COMMENT_RESPONSE";
		case 55:
			return "CALL_BULLSHIT";
		case 56:
			return "PASS";
		case 57:
			return "MOVE_POINT";
		case 58:
			return "MOVE_NO_POINT";
		case 59:
			return "MOVE_GENERIC_NO_POINT";
		case 60:
			return "SUCCESSFUL_DRAW";
		case 61:
			return "UNSUCCESSFUL_DRAW";
		case 62:
			return "UNSUCCESSFUL_DRAW_AGAIN";
		case 63:
			return "DEPLETED_BONEYARD";
		case 64:
			return "NO_LUCK_DEPLETED_BONEYARD";
		case 65:
			return "REVEAL_SURRENDER_NONE";
		case 66:
			return "REVEAL_SURRENDER_LOW";
		case 67:
			return "REVEAL_SURRENDER_MED";
		case 68:
			return "REVEAL_SURRENDER_HIGH";
		case 69:
			return "REACTION_FRUSTRATED_LVL1 ";
		case 70:
			return "REACTION_FRUSTRATED_LVL2";
		case 71:
			return "REACTION_FRUSTRATED_LVL3";
		case 72:
			return "REACTION_DISBELIEF_LVL1";
		case 73:
			return "REACTION_DISBELIEF_LVL2";
		case 74:
			return "REACTION_DISBELIEF_LVL3";
		case 75:
			return "REACTION_EXCITED_LVL1";
		case 76:
			return "REACTION_EXCITED_LVL2";
		case 77:
			return "REACTION_EXCITED_LVL3";
		case 78:
			return "REACTION_ANGRY_LVL1";
		case 79:
			return "REACTION_ANGRY_LVL2";
		case 80:
			return "REACTION_ANGRY_LVL3";
		case 81:
			return "REACTION_CONTENT_LVL1";
		case 82:
			return "REACTION_CONTENT_LVL2";
		case 83:
			return "REACTION_CONTENT_LVL3";
		case 84:
			return "REACTION_NERVOUS_LVL1";
		case 85:
			return "REACTION_NERVOUS_LVL2";
		case 86:
			return "REACTION_NERVOUS_LVL3";
		case 87:
			return "MONO_GOOD_GAME";
		case 88:
			return "MONO_BAD_GAME";
		case 89:
			return "WIN_LAST_MINUTE";
		case 90:
			return "WINNING_STREAK";
		default:
			break;
	}
	return "";
}

void func_714(var uParam0, int iParam1)
{
	if (uParam0->f_26[iParam1 /*32*/])
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_26[iParam1 /*32*/].f_12);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_26[iParam1 /*32*/].f_12);
		if (*uParam0 == 0)
		{
			DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_26[iParam1 /*32*/].f_13);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_26[iParam1 /*32*/].f_13);
		}
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_26[iParam1 /*32*/].f_1);
		uParam0->f_26[iParam1 /*32*/] = 0;
	}
	MISC::CLEAR_BIT(&(uParam0->f_157), iParam1);
}

void func_715(var uParam0, int iParam1)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_437))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_437))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 2);
			if (iParam1 == 0)
			{
				uParam0->f_446 = 1;
			}
			else
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_437, false);
			}
		}
	}
}

int func_717(var uParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	if (!__LIB_0__::func_139(*uParam1))
	{
		return 0;
	}
	bVar0 = __LIB_1__::func_264(*uParam1, 1);
	if (bVar0 != bParam2)
	{
		__LIB_1__::func_382(*uParam1, bParam2, 1);
	}
	return 1;
}

float func_726(float fParam0)
{
	float fVar0;
	fVar0 = (fParam0 * fParam0);
	return (fVar0 / ((2f * (fVar0 - fParam0)) + 1f));
}

void func_729(var uParam0)
{
	int iVar0;
	if (*uParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_14)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_14[iVar0], "");
		iVar0++;
	}
}

int func_730(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	struct<15> Var1;
	switch (__LIB_0__::func_12())
	{
		case 71:
			iVar0 = 18;
			break;
		case 98:
			iVar0 = 24;
			break;
		case 9:
			iVar0 = 4;
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var1.f_14 = iParam0;
		Var1 = uParam1;
		Var1.f_12 = 27;
		Var1.f_3 = uParam2;
		Var1.f_8 = iParam3;
		Var1.f_11 = iParam4;
		Var1.f_13 = iVar0;
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
		return 1;
	}
	return 0;
}

void func_731(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	func_396(&(uParam0->f_1.f_26[iParam1 /*32*/]), 0);
	iVar1 = 0;
	if (iParam2 < 0 || iParam2 >= uParam0->f_204[iParam1 /*7*/].f_6)
	{
		iParam2 = uParam0->f_204[iParam1 /*7*/].f_6;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		iVar2 = func_150(&(uParam0->f_204[iParam1 /*7*/]), iVar0);
		if (func_862(iVar2, &uVar3))
		{
			__LIB_7__::func_759(&(uParam0->f_1.f_26[iParam1 /*32*/]), iVar1, &uVar3);
			iVar1++;
		}
		iVar0++;
	}
}

void func_732(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	func_398(&(uParam0->f_1), iParam1);
	if (iParam2 == 1)
	{
		func_389(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGTILEPTS1"));
	}
	else
	{
		func_389(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGDOM_MSGTILEPTS", iParam2));
	}
}

bool func_733(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_481(1))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_204(uParam0, iVar0))
		{
			if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_199[iVar0 /*124*/].f_12))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_734(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 2;
		case 16:
			return 2;
		case 17:
			return 2;
		case 18:
			return 3;
		case 19:
			return 3;
		case 20:
			return 3;
		case 21:
			return 3;
		case 22:
			return 4;
		case 23:
			return 4;
		case 24:
			return 4;
		case 25:
			return 5;
		case 26:
			return 5;
		case 27:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_735(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 1;
		case 8:
			return 2;
		case 9:
			return 3;
		case 10:
			return 4;
		case 11:
			return 5;
		case 12:
			return 6;
		case 13:
			return 2;
		case 14:
			return 3;
		case 15:
			return 4;
		case 16:
			return 5;
		case 17:
			return 6;
		case 18:
			return 3;
		case 19:
			return 4;
		case 20:
			return 5;
		case 21:
			return 6;
		case 22:
			return 4;
		case 23:
			return 5;
		case 24:
			return 6;
		case 25:
			return 5;
		case 26:
			return 6;
		case 27:
			return 6;
		default:
			break;
	}
	return -1;
}

void func_736(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	func_350(&(uParam0->f_262));
	if (iParam2 >= *uParam1)
	{
		iParam2 = *uParam1;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		uParam0->f_262[iVar0 /*5*/] = { *(uParam1[iVar0 /*5*/]) };
		iVar0++;
	}
	uParam0->f_259 = iParam2;
	uParam0->f_261 = 1;
}

int func_738(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		(*uParam2)[iVar1] = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_613(*(uParam0[iVar0 /*5*/])))
		{
			if ((*uParam0)[iVar0 /*5*/] == iParam1)
			{
				if (iVar1 < *uParam2)
				{
					(*uParam2)[iVar1] = iVar0;
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_739(var uParam0, var uParam1, int iParam2, int* iParam3, int iParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	if (iParam2 == 29)
	{
		return 0;
	}
	iVar0 = func_552(iParam2, uParam0->f_6);
	vVar1 = { func_843(uParam0, uParam1) };
	vVar4 = { 0f, 0f, (uParam0->f_3 + IntToFloat(__LIB_7__::func_756(uParam1->f_3))) };
	if (ENTITY::DOES_ENTITY_EXIST(*iParam3) && ENTITY::GET_ENTITY_MODEL(*iParam3) != iVar0)
	{
		__LIB_1__::func_951(iParam3);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam3))
	{
		*iParam3 = OBJECT::CREATE_OBJECT(iVar0, vVar1, false, true, false, false, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam3))
	{
		ENTITY::SET_ENTITY_COORDS(*iParam3, vVar1, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(*iParam3, vVar4, 2, true);
		ENTITY::SET_ENTITY_ALPHA(*iParam3, iParam4, false);
		CAM::_0xDB382FE20C2DA222(*iParam3);
		return 1;
	}
	return 0;
}

struct<4> func_740(var uParam0)
{
	struct<4> Var0;
	Var0 = *uParam0;
	Var0.f_1 = { uParam0->f_1 };
	Var0.f_3 = uParam0->f_3;
	return Var0;
}

bool func_741(var uParam0, var uParam1)
{
	MISC::CLEAR_BIT(&(uParam0->f_1321), 3);
	MISC::CLEAR_BIT(&(uParam0->f_1322), 3);
	if (MINIGAME::_DOMINOES_PLACE_DOMINO(uParam1, &(uParam0->f_1300[3 /*4*/])))
	{
		return true;
	}
	MISC::SET_BIT(&(uParam0->f_1322), 3);
	return false;
}

int func_742(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	*uParam2 = -1;
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (uParam0->f_746[iVar0 /*8*/].f_1 == iParam1)
		{
			if (iParam3 == 0 || uParam0->f_746[iVar0 /*8*/] == iParam3)
			{
				*uParam2 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_743(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	*uParam2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_384[iVar0] == iParam1)
		{
			*uParam2 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_744(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	iVar3 = func_372(uParam1->f_194);
	if (uParam0->f_345)
	{
		return;
	}
	if (!func_204(uParam1, uParam1->f_194))
	{
		return;
	}
	if (func_233(&(uParam1->f_199[uParam1->f_194 /*124*/])))
	{
		return;
	}
	if (uParam0->f_348 && uParam0->f_448)
	{
		return;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DOMINOES_MOVE_LEFT_ONLY")))
	{
		if (func_864(uParam1, iVar3, uParam0->f_340, &uVar2))
		{
			uParam0->f_343 = uVar2;
			uParam0->f_340 = uParam1->f_746[uParam0->f_343 /*8*/].f_4;
			uParam0->f_339 = uParam1->f_746[uParam0->f_343 /*8*/].f_5;
		}
		else if (func_864(uParam1, iVar3, 19, &uVar2))
		{
			uParam0->f_343 = uVar2;
			uParam0->f_340 = uParam1->f_746[uParam0->f_343 /*8*/].f_4;
			uParam0->f_339 = uParam1->f_746[uParam0->f_343 /*8*/].f_5;
		}
		iVar1 = 3;
		iVar0 = 1;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DOMINOES_MOVE_RIGHT_ONLY")))
	{
		if (func_497(uParam1, iVar3, uParam0->f_340, &uVar2))
		{
			uParam0->f_343 = uVar2;
			uParam0->f_340 = uParam1->f_746[uParam0->f_343 /*8*/].f_4;
			uParam0->f_339 = uParam1->f_746[uParam0->f_343 /*8*/].f_5;
		}
		else if (func_497(uParam1, iVar3, -1, &uVar2))
		{
			uParam0->f_343 = uVar2;
			uParam0->f_340 = uParam1->f_746[uParam0->f_343 /*8*/].f_4;
			uParam0->f_339 = uParam1->f_746[uParam0->f_343 /*8*/].f_5;
		}
		iVar1 = 1;
		iVar0 = 1;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DOMINOES_MOVE_UP_ONLY")))
	{
		if (func_865(uParam1, iVar3, uParam0->f_340 + 5, &uVar2))
		{
			uParam0->f_343 = uVar2;
			uParam0->f_340 = uParam1->f_746[uParam0->f_343 /*8*/].f_4;
			uParam0->f_339 = uParam1->f_746[uParam0->f_343 /*8*/].f_5;
		}
		iVar1 = 0;
		iVar0 = 1;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DOMINOES_MOVE_DOWN_ONLY")))
	{
		if (func_865(uParam1, iVar3, (uParam0->f_340 - 5), &uVar2))
		{
			uParam0->f_343 = uVar2;
			uParam0->f_340 = uParam1->f_746[uParam0->f_343 /*8*/].f_4;
			uParam0->f_339 = uParam1->f_746[uParam0->f_343 /*8*/].f_5;
		}
		iVar1 = 2;
		iVar0 = 1;
	}
	if (uParam0->f_348)
	{
		if (uParam0->f_363 != -1)
		{
			if (uParam1->f_746[uParam0->f_363 /*8*/] == iVar3)
			{
				if (uParam0->f_343 != uParam0->f_363)
				{
					iVar0 = 1;
				}
				uParam0->f_343 = uParam0->f_363;
				uParam0->f_340 = uParam1->f_746[uParam0->f_343 /*8*/].f_4;
				uParam0->f_339 = uParam1->f_746[uParam0->f_343 /*8*/].f_5;
			}
		}
	}
	if (uParam0->f_342 != uParam0->f_343 || iVar0 == 1)
	{
		uParam0->f_260 = func_499(&(uParam0->f_262), uParam0->f_339);
		uParam0->f_344 = uParam0->f_260 > 0;
		uParam0->f_251 = 0;
		if (uParam0->f_342 != -1)
		{
			func_498(uParam1, &(uParam1->f_746[uParam0->f_342 /*8*/]), 0);
		}
		if (uParam0->f_343 != -1)
		{
			func_498(uParam1, &(uParam1->f_746[uParam0->f_343 /*8*/]), 3);
		}
		if (iVar0 == 1)
		{
			switch (iVar1)
			{
				case 0:
					AUDIO::PLAY_SOUND_FRONTEND("NAV_UP", "HUD_DOMINOS_SOUNDSET", true, 0);
					break;
				case 2:
					AUDIO::PLAY_SOUND_FRONTEND("NAV_DOWN", "HUD_DOMINOS_SOUNDSET", true, 0);
					break;
				case 1:
					AUDIO::PLAY_SOUND_FRONTEND("NAV_RIGHT", "HUD_DOMINOS_SOUNDSET", true, 0);
					break;
				case 3:
					AUDIO::PLAY_SOUND_FRONTEND("NAV_LEFT", "HUD_DOMINOS_SOUNDSET", true, 0);
					break;
			}
		}
	}
	uParam0->f_342 = uParam0->f_343;
}

bool func_745(var uParam0)
{
	int iVar0;
	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return iVar0 != 0;
}

bool func_746(var uParam0)
{
	int iVar0;
	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 == 0)
	{
		return false;
	}
	return (uParam0->f_246 == iVar0 && (uParam0->f_247 >= 11 && uParam0->f_247 <= 14));
}

bool func_747(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 == 0)
	{
		return false;
	}
	return (uParam0->f_246 == iVar0 && uParam0->f_247 == iParam1);
}

bool func_748(var uParam0, var uParam1)
{
	if (uParam0->f_343 == -1)
	{
		return false;
	}
	if (__LIB_1__::func_732(uParam0->f_459, 1))
	{
		return true;
	}
	if (uParam0->f_348)
	{
		if (uParam0->f_448)
		{
			return false;
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, joaat("INPUT_CURSOR_ACCEPT")))
		{
			return func_866(uParam0, uParam1);
		}
	}
	return false;
}

void func_749(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	if (!uParam0->f_345)
	{
		return;
	}
	if (!func_204(uParam1, uParam1->f_194))
	{
		return;
	}
	if (uParam0->f_259 == 0)
	{
		func_211(uParam0);
		return;
	}
	if (uParam0->f_348)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_357))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (uParam0->f_357 == uParam0->f_384[iVar0])
				{
					uParam0->f_338 = uParam0->f_391[iVar0];
				}
				iVar0++;
			}
		}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DOMINOES_MOVE_RIGHT_ONLY")))
	{
		if (func_503(&(uParam0->f_262), uParam0->f_339, &iVar0, uParam0->f_338))
		{
			if (uParam0->f_338 != iVar0)
			{
				uParam0->f_338 = iVar0;
				func_501(uParam0, uParam1, uParam2);
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND("NAV_RIGHT", "HUD_DOMINOS_SOUNDSET", true, 0);
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DOMINOES_MOVE_LEFT_ONLY")))
	{
		if (func_867(&(uParam0->f_262), uParam0->f_339, &iVar0, uParam0->f_338))
		{
			if (uParam0->f_338 != iVar0)
			{
				uParam0->f_338 = iVar0;
				func_501(uParam0, uParam1, uParam2);
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND("NAV_LEFT", "HUD_DOMINOS_SOUNDSET", true, 0);
	}
}

int func_750(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (__LIB_0__::func_139(*uParam1))
	{
		if (!__LIB_1__::func_264(*uParam1, 1))
		{
			func_717(uParam0, uParam1, 1);
		}
		return 0;
	}
	if (__LIB_7__::func_729() || uParam0->f_240.f_3 == 1)
	{
		return 0;
	}
	*uParam1 = __LIB_5__::func_651(sParam2, iParam3, iParam4, iParam6);
	if (iParam5 == 1)
	{
		__LIB_8__::func_753(*uParam1, 1, 1);
	}
	uParam0->f_453++;
	return 1;
}

bool func_751(var uParam0)
{
	if (__LIB_1__::func_732(uParam0->f_455, 1))
	{
		return true;
	}
	if (uParam0->f_348)
	{
		if (uParam0->f_448)
		{
			return false;
		}
		return PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, joaat("INPUT_CURSOR_CANCEL"));
	}
	return false;
}

int func_752(var uParam0, var uParam1)
{
	if (__LIB_1__::func_732(uParam0->f_460, 1))
	{
		return 1;
	}
	if (uParam0->f_348)
	{
		if (uParam0->f_448)
		{
			return 0;
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, joaat("INPUT_CURSOR_ACCEPT")))
		{
			return func_869(uParam0);
		}
		return 0;
	}
	return 0;
}

int func_753(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	else if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	else if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_816(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = -1;
	if (uParam0->f_39 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = func_615(*(uParam0[iVar0 /*2*/]));
		if (iVar1 > iVar2 || iVar2 == -1)
		{
			if (iParam1 == 0 || (iParam1 == 1 && func_913(*(uParam0[iVar0 /*2*/]))))
			{
				iVar2 = iVar1;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_817(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_6.f_142)
	{
		if (uParam0->f_6.f_1[iVar0 /*5*/].f_2 == iParam1 && uParam0->f_6.f_1[iVar0 /*5*/].f_2.f_1 == iParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_818(var uParam0, var uParam1)
{
	if (!func_914(uParam0, uParam1))
	{
		return false;
	}
	if (uParam0->f_2 != uParam1->f_2)
	{
		return false;
	}
	if (uParam0->f_2.f_1 != uParam1->f_2.f_1)
	{
		return false;
	}
	return uParam0->f_4 == uParam1->f_4;
}

int func_819(var uParam0, var uParam1)
{
	int iVar0;
	if (uParam0->f_39 != uParam1->f_39)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (!func_914(uParam0[iVar0 /*2*/], uParam1[iVar0 /*2*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_827(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_7__::func_371(*uParam0);
	iVar1 = __LIB_7__::func_376(*uParam0);
	iVar2 = MISC::GET_HASH_KEY(__LIB_0__::func_558(uParam0->f_3));
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(8, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(8, iVar0, __LIB_1__::func_546(__LIB_0__::func_317()), 1307979820 /* GXTEntry: "Camp Item Request" */, __LIB_7__::func_377(*uParam0), 0);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(8, iVar0, iVar2, 1997120069);
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(8, iVar0, iVar1, joaat("SP_MISSIONS_22"));
		if (*uParam0 == 21)
		{
			__LIB_7__::func_378(1, joaat("CONSUMABLE_WHISKEY"), 0);
			__LIB_7__::func_378(2, joaat("CONSUMABLE_PEPPERMINT"), 0);
			__LIB_7__::func_378(3, joaat("CONSUMABLE_HERB_MILKWEED"), 0);
			__LIB_7__::func_378(4, joaat("CONSUMABLE_HAIR_GREASE"), 0);
			__LIB_7__::func_378(5, 0, joaat("AT_SKUNK"));
			iVar3 = 0;
			while (iVar3 < 6)
			{
				if (iVar3 == 0)
				{
				}
				else
				{
					func_927(uParam0, iVar3, &(Global_1359489.f_361.f_258[iVar3 /*6*/].f_2), 0, 1, 1);
				}
				iVar3++;
			}
		}
	}
}

void func_830(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	var uVar4;
	iVar0 = __LIB_7__::func_379(*uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == 761950088)
	{
		sVar1 = MISC::_CREATE_VAR_STRING(0, uParam0->f_1);
		MISC::_INT_TO_STRING(uParam0->f_2, "%i", &uVar4);
		sVar3 = __LIB_1__::func_925(&uVar4, joaat("COLOR_PURE_WHITE"));
		sVar2 = __LIB_1__::func_464(uParam0->f_3, 0);
		func_927(uParam0, 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, MISC::_CREATE_VAR_STRING(168, iVar0, sVar2, sVar3, sVar1), 0, bParam1, 0);
	}
	else
	{
		func_927(uParam0, 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, HUD::_GET_LABEL_TEXT_BY_HASH(iVar0), 0, bParam1, 0);
	}
}

void func_836(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_9, -1, "player_stack_item", uParam0->f_26[iParam1 /*32*/].f_1);
	MISC::SET_BIT(&(uParam0->f_157), iParam1);
}

void func_837(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_26[iParam1 /*32*/].f_5, 1);
}

struct<8> func_841(struct<14> Param0, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	iVar0 = __LIB_12__::func_475(&Param0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return Var3;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iVar0);
	func_933(__LIB_0__::func_773(&Param0), !PED::IS_PED_MALE(iVar0), &Var3);
	if (Param0.f_1)
	{
		StringCopy(&Var3, PLAYER::GET_PLAYER_NAME(Param0.f_13), 64);
		return Var3;
	}
	if (PED::IS_PED_A_PLAYER(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (iVar2 == joaat("CS_JOHNMARSTON") || iVar2 == joaat("PLAYER_THREE"))
			{
				StringCopy(&Var3, HUD::_GET_LABEL_TEXT_2("COMP_JOHN"), 64);
			}
			else
			{
				StringCopy(&Var3, HUD::_GET_LABEL_TEXT_2("PLYR_ARTHUR"), 64);
			}
		}
		else
		{
			StringCopy(&Var3, PLAYER::GET_PLAYER_NAME(Param0.f_13), 64);
		}
	}
	else if (__LIB_0__::func_2() == -1 && __LIB_0__::func_407(iVar0))
	{
		iVar1 = __LIB_4__::func_656(iVar0);
		if (iVar1 != -1)
		{
			StringCopy(&Var3, HUD::_GET_LABEL_TEXT_2(__LIB_1__::func_464(iVar1, 0)), 64);
		}
	}
	return Var3;
}

Vector3 func_843(var uParam0, var uParam1)
{
	struct<2> Var0;
	Var0 = { uParam1->f_1 };
	if (__LIB_7__::func_760(uParam1->f_3))
	{
		Var0++;
		Var0.f_1 = (Var0.f_1 - 2);
	}
	else
	{
		Var0 += 2;
		Var0.f_1 = (Var0.f_1 - 1);
	}
	return func_935(uParam0, Var0);
}

void func_844(int iParam0, vector3 vParam1)
{
	iParam0->f_10 = { vParam1 };
}

int func_852(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	fVar0 = 0f;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (iParam2 < 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_746[iParam2 /*8*/].f_1))
	{
		return 0;
	}
	if (ENTITY::_0x0B7CB1300CBFE19C(uParam0->f_746[iParam2 /*8*/].f_1, 1))
	{
		TASK::STOP_ANIM_PLAYBACK(uParam0->f_746[iParam2 /*8*/].f_1, 0, false);
	}
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iParam2 /*8*/].f_1, false);
	__LIB_2__::func_919(uParam0->f_746[iParam2 /*8*/].f_1, 1, 1);
	if (bParam4)
	{
		fVar0 = 180f;
	}
	if (iParam3 == 1)
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_746[iParam2 /*8*/].f_1, iParam1, PED::GET_PED_BONE_INDEX(iParam1, 7966), 0f, 0f, 0f, 0f, 0f, (0f + fVar0), false, false, false, false, 2, true, false, false);
	}
	else
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_746[iParam2 /*8*/].f_1, iParam1, PED::GET_PED_BONE_INDEX(iParam1, 37709), 0f, 0f, 0f, 0f, 0f, (0f + fVar0), false, false, false, false, 2, true, false, false);
	}
	return 1;
}

int func_853(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	fVar0 = (BUILTIN::TO_FLOAT(4) / 2f);
	vVar4 = { func_275(iParam0) };
	*uParam3 = { func_941(iParam0) };
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return 0;
	}
	iVar7 = (iParam1 % 5);
	iVar8 = (iParam1 / 5);
	vVar1 = { -(0.01f * 2f), (0.055f * fVar0), 0f };
	vVar1 = { vVar1 + Vector(0f, -(BUILTIN::TO_FLOAT(iVar7) * 0.055f), (BUILTIN::TO_FLOAT(iVar8) * (0.01f * 2f))) };
	vVar1.f_2 = (vVar1.z + ((IntToFloat(iVar8) * 0.009f) + 0.017f));
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, uParam3->f_2, vVar1) };
	if (bParam4)
	{
		uParam2->f_2 = (uParam2->f_2 + (0.0525f / 2f));
	}
	return 1;
}

void func_854(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam0, uParam0->f_3, *uParam1) };
	*uParam4 = { Vector(uParam0->f_3, 0f, 0f) + *uParam2 };
	if (*uParam4 > 180f)
	{
		*uParam4 = (*uParam4 - 360f);
	}
	if (uParam4->f_1 > 180f)
	{
		uParam4->f_1 = (uParam4->f_1 - 360f);
	}
	if (uParam4->f_2 > 180f)
	{
		uParam4->f_2 = (uParam4->f_2 - 360f);
	}
	if (*uParam4 < -180f)
	{
		*uParam4 = (*uParam4 + 360f);
	}
	if (uParam4->f_1 < -180f)
	{
		uParam4->f_1 = (uParam4->f_1 + 360f);
	}
	if (uParam4->f_2 < 180f)
	{
		uParam4->f_2 = (uParam4->f_2 + 360f);
	}
}

bool func_862(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "DOMINO_0_0", 32);
			return true;
		case 1:
			StringCopy(sParam1, "DOMINO_0_1", 32);
			return true;
		case 2:
			StringCopy(sParam1, "DOMINO_0_2", 32);
			return true;
		case 3:
			StringCopy(sParam1, "DOMINO_0_3", 32);
			return true;
		case 4:
			StringCopy(sParam1, "DOMINO_0_4", 32);
			return true;
		case 5:
			StringCopy(sParam1, "DOMINO_0_5", 32);
			return true;
		case 6:
			StringCopy(sParam1, "DOMINO_0_6", 32);
			return true;
		case 7:
			StringCopy(sParam1, "DOMINO_1_1", 32);
			return true;
		case 8:
			StringCopy(sParam1, "DOMINO_1_2", 32);
			return true;
		case 9:
			StringCopy(sParam1, "DOMINO_1_3", 32);
			return true;
		case 10:
			StringCopy(sParam1, "DOMINO_1_4", 32);
			return true;
		case 11:
			StringCopy(sParam1, "DOMINO_1_5", 32);
			return true;
		case 12:
			StringCopy(sParam1, "DOMINO_1_6", 32);
			return true;
		case 13:
			StringCopy(sParam1, "DOMINO_2_2", 32);
			return true;
		case 14:
			StringCopy(sParam1, "DOMINO_2_3", 32);
			return true;
		case 15:
			StringCopy(sParam1, "DOMINO_2_4", 32);
			return true;
		case 16:
			StringCopy(sParam1, "DOMINO_2_5", 32);
			return true;
		case 17:
			StringCopy(sParam1, "DOMINO_2_6", 32);
			return true;
		case 18:
			StringCopy(sParam1, "DOMINO_3_3", 32);
			return true;
		case 19:
			StringCopy(sParam1, "DOMINO_3_4", 32);
			return true;
		case 20:
			StringCopy(sParam1, "DOMINO_3_5", 32);
			return true;
		case 21:
			StringCopy(sParam1, "DOMINO_3_6", 32);
			return true;
		case 22:
			StringCopy(sParam1, "DOMINO_4_4", 32);
			return true;
		case 23:
			StringCopy(sParam1, "DOMINO_4_5", 32);
			return true;
		case 24:
			StringCopy(sParam1, "DOMINO_4_6", 32);
			return true;
		case 25:
			StringCopy(sParam1, "DOMINO_5_5", 32);
			return true;
		case 26:
			StringCopy(sParam1, "DOMINO_5_6", 32);
			return true;
		case 27:
			StringCopy(sParam1, "DOMINO_6_6", 32);
			return true;
		default:
			break;
	}
	StringCopy(sParam1, " ", 32);
	return false;
}

bool func_864(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	iVar1 = 2147483647;
	*uParam3 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (uParam0->f_746[iVar0 /*8*/] == iParam1)
		{
			if (uParam0->f_746[iVar0 /*8*/].f_4 < iParam2)
			{
				if (iVar1 == 2147483647 || uParam0->f_746[iVar0 /*8*/].f_4 > iVar1)
				{
					iVar1 = uParam0->f_746[iVar0 /*8*/].f_4;
					*uParam3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return *uParam3 != -1;
}

bool func_865(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	*uParam3 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (uParam0->f_746[iVar0 /*8*/] == iParam1 && uParam0->f_746[iVar0 /*8*/].f_4 == iParam2)
		{
			*uParam3 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_866(var uParam0, var uParam1)
{
	if (uParam0->f_343 == -1)
	{
		return false;
	}
	if (!uParam0->f_348)
	{
		return false;
	}
	return (ENTITY::DOES_ENTITY_EXIST(uParam0->f_357) && uParam1->f_746[uParam0->f_343 /*8*/].f_1 == uParam0->f_357);
}

bool func_867(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	iParam3 = (iParam3 - 1);
	if (iParam3 < 0)
	{
		iParam3 = (iParam3 + *uParam0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_613(*(uParam0[iParam3 /*5*/])))
		{
			if ((*uParam0)[iParam3 /*5*/] == iParam1)
			{
				*iParam2 = iParam3;
				return true;
			}
		}
		iParam3 = (iParam3 - 1);
		if (iParam3 < 0)
		{
			iParam3 = (iParam3 + *uParam0);
		}
		iVar0++;
	}
	return false;
}

int func_869(var uParam0)
{
	int iVar0;
	if (!uParam0->f_348)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_357))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (uParam0->f_391[iVar0] == uParam0->f_338 && uParam0->f_357 == uParam0->f_384[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_913(struct<2> Param0)
{
	return Param0 == Param0.f_1;
}

bool func_914(var uParam0, var uParam1)
{
	if (*uParam0 != *uParam1)
	{
		return false;
	}
	return uParam0->f_1 == uParam1->f_1;
}

void func_927(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	iVar0 = __LIB_7__::func_371(*uParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(8, iVar0))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, __LIB_7__::func_371(*uParam0), iParam1, sParam2, bParam3, bParam5, false);
		if (bParam4)
		{
			UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
			Global_1359489.f_361.f_194 = __LIB_7__::func_727("CAMP_REQUEST", "CAMP_REQUEST_DETAIL", 1997120069, MISC::GET_HASH_KEY(__LIB_0__::func_558(uParam0->f_3)), joaat("PLAYER_MENU"), "INPUT_FEED_INTERACT_GENERIC", joaat("SP_MISSIONS"), 5000, 0, 0, 0, 0, 1, 1);
		}
	}
}

void func_933(int iParam0, bool bParam1, char* sParam2)
{
	char cVar0[16];
	StringCopy(sParam2, "Opponent", 64);
	if (bParam1)
	{
		iParam0 = (iParam0 % 10);
		switch (iParam0)
		{
			case 0:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME0"), 64);
				break;
			case 1:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME1"), 64);
				break;
			case 2:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME2"), 64);
				break;
			case 3:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME3"), 64);
				break;
			case 4:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME4"), 64);
				break;
			case 5:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME5"), 64);
				break;
			case 6:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME6"), 64);
				break;
			case 7:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME7"), 64);
				break;
			case 8:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME8"), 64);
				break;
			case 9:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME9"), 64);
				break;
		}
		return;
		StringCopy(&cVar0, "MGDOM_F_NAME", 16);
		StringIntConCat(&cVar0, (iParam0 % 10), 16);
	}
	else
	{
		iParam0 = (iParam0 % 10);
		switch (iParam0)
		{
			case 0:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME0"), 64);
				break;
			case 1:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME1"), 64);
				break;
			case 2:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME2"), 64);
				break;
			case 3:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME3"), 64);
				break;
			case 4:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME4"), 64);
				break;
			case 5:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME5"), 64);
				break;
			case 6:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME6"), 64);
				break;
			case 7:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME7"), 64);
				break;
			case 8:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME8"), 64);
				break;
			case 9:
				StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME9"), 64);
				break;
		}
		return;
		StringCopy(&cVar0, "MGDOM_M_NAME", 16);
		StringIntConCat(&cVar0, (iParam0 % 10), 16);
	}
	StringCopy(sParam2, HUD::_GET_LABEL_TEXT_2(&cVar0), 64);
}

Vector3 func_935(var uParam0, struct<2> Param1)
{
	vector3 vVar0;
	vVar0 = { (BUILTIN::TO_FLOAT(Param1) * 0.013125f), (BUILTIN::TO_FLOAT(Param1.f_1) * 0.013125f), 0f };
	vVar0.f_2 = (fLocal_14 + (0.01f / 2f));
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam0, uParam0->f_3, vVar0);
}

Vector3 func_941(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Vector(180f, 0f, 90f) + Vector(90f, -105f, 90f);
		case 1:
			return Vector(0f, 0f, 90f) + Vector(90f, -105f, 90f);
		case 2:
			return Vector(90f, 0f, 90f) + Vector(90f, -105f, 90f);
		case 3:
			return Vector(270f, 0f, 90f) + Vector(90f, -105f, 90f);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

