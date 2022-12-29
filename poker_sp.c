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
	struct<4584> Local_14 = { 0, 0, 0, 0, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, -1, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1088421888, 1094713344, 1128792064, 1066024305, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1088421888, 1094713344, 1128792064, 1066024305, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 2, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = -1;
	var uLocal_4633 = 2;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 8;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 1;
	var uLocal_4756 = 0;
	var uLocal_4757 = 1;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 4;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uScriptParam_0 = -1;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = -1;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = -1;
	var uScriptParam_12 = -1;
	var uScriptParam_13 = 0;
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
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_3(&(Local_14.f_1), &uScriptParam_0, 33, 317);
}

void func_1()
{
	__LIB_12__::func_259(&(Local_14.f_1), 1527);
	__LIB_12__::func_260(&(Local_14.f_1), 1966);
	__LIB_12__::func_261(&(Local_14.f_1), 2314);
	__LIB_12__::func_262(&(Local_14.f_1), 2554);
	__LIB_12__::func_263(&(Local_14.f_1), 3004);
	__LIB_12__::func_264(&(Local_14.f_1), 3039);
	__LIB_5__::func_662(&(Local_14.f_1), 3074);
	__LIB_12__::func_265(&(Local_14.f_1), 3109);
	__LIB_12__::func_266(&(Local_14.f_1), 3144);
	__LIB_12__::func_267(&(Local_14.f_1), 3179);
	__LIB_4__::func_869(&(Local_14.f_1), 3214);
	__LIB_12__::func_268(&(Local_14.f_1), 3244);
	__LIB_12__::func_269(&(Local_14.f_1), 3276);
	__LIB_12__::func_270(&(Local_14.f_1), 3306);
	__LIB_12__::func_271(&(Local_14.f_1), 3339);
	__LIB_12__::func_272(&(Local_14.f_1), 3370);
	__LIB_12__::func_273(&(Local_14.f_1), 3401);
	func_39(&(Local_14.f_1), 3434);
	__LIB_12__::func_274(&(Local_14.f_1), 3465);
	__LIB_12__::func_275(&(Local_14.f_1), 3496);
	__LIB_12__::func_276(&(Local_14.f_1), 3528);
	__LIB_12__::func_277(&(Local_14.f_1), 3590);
	__LIB_12__::func_278(&(Local_14.f_1), 3775);
}

void func_2()
{
	switch (__LIB_0__::func_81(&Local_14))
	{
		case 0:
			__LIB_0__::func_115(&(Local_14.f_1), 1);
			__LIB_12__::func_279(&(Local_14.f_1), 4112);
			__LIB_12__::func_280(&(Local_14.f_1), 4377);
			__LIB_12__::func_281(&(Local_14.f_1), 4923);
			break;
		case 2:
			__LIB_0__::func_115(&(Local_14.f_1), 2);
			__LIB_5__::func_636(&(Local_14.f_1), 5365);
			__LIB_12__::func_279(&(Local_14.f_1), 5826);
			break;
		case 3:
			__LIB_0__::func_115(&(Local_14.f_1), 2);
			__LIB_5__::func_636(&(Local_14.f_1), 6517);
			__LIB_12__::func_279(&(Local_14.f_1), 6619);
			break;
		case 1:
			__LIB_0__::func_115(&(Local_14.f_1), 2);
			__LIB_5__::func_636(&(Local_14.f_1), 6928);
			func_65(&(Local_14.f_1), 7378);
			__LIB_12__::func_279(&(Local_14.f_1), 7658);
			break;
	}
}

void func_3(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	func_67(uParam0, uParam1, iParam2, iParam3, 0, 0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		__LIB_19__::func_471(uParam0);
	}
	__LIB_18__::func_525(uParam0);
	__LIB_18__::func_526(uParam0);
	while (true)
	{
		if (__LIB_19__::func_472(uParam0))
		{
			__LIB_12__::func_441(uParam0, 20);
		}
		switch (uParam0->f_42)
		{
			case 0:
				__LIB_12__::func_282(uParam0);
				__LIB_12__::func_441(uParam0, 1);
				break;
			case 1:
				Call_Loc(uParam0->f_81);
				if (StackVal)
				{
					if (uParam0->f_1 == 1)
					{
						if (__LIB_4__::func_870() != 1)
						{
							Jump @911; //curOff = 184
						}
						else if (__LIB_7__::func_728() == -1)
						{
						}
						else
						{
							if (__LIB_12__::func_283(uParam0))
							{
								__LIB_12__::func_284(uParam0);
								uParam0->f_49 = 1;
							}
							__LIB_12__::func_441(uParam0, 2);
							Jump @911; //curOff = 228
							Stack.Push(!uParam0->f_49);
							Call_Loc(uParam0->f_85);
							if (StackVal || StackVal)
							{
								if (uParam0->f_1 == 1)
								{
									if (__LIB_4__::func_870() != 1)
									{
										Jump @911; //curOff = 266
									}
									else if (__LIB_7__::func_728() == -1)
									{
									}
									else
									{
										switch (uParam0->f_1)
										{
											case 2:
												__LIB_12__::func_441(uParam0, 3);
												break;
											case 1:
												__LIB_12__::func_285(uParam0);
												__LIB_4__::func_871(2);
												__LIB_12__::func_441(uParam0, 4);
												break;
										}
										Jump @911; //curOff = 336
										if (__LIB_7__::func_722(uParam0->f_38))
										{
											if (!uParam0->f_50)
											{
												__LIB_12__::func_286(uParam0);
											}
										}
										if (__LIB_12__::func_287(uParam0->f_38))
										{
											__LIB_12__::func_285(uParam0);
											__LIB_19__::func_231(uParam0, 1);
											__LIB_1__::func_211(uParam0->f_38, 8388608);
											__LIB_12__::func_441(uParam0, 6);
										}
										Jump @911; //curOff = 407
										Call_Loc(uParam0->f_88);
										if (__LIB_4__::func_870() == 4)
										{
											Call_Loc(uParam0->f_82);
											if (StackVal)
											{
												__LIB_12__::func_441(uParam0, 5);
											}
											else
											{
												__LIB_12__::func_288(uParam0);
												__LIB_4__::func_871(5);
												__LIB_7__::func_704();
												__LIB_19__::func_231(uParam0, 1);
												__LIB_1__::func_211(uParam0->f_38, 8388608);
												__LIB_12__::func_441(uParam0, 6);
											}
										}
										Jump @911; //curOff = 483
										Call_Loc(uParam0->f_88);
										if (__LIB_4__::func_870() != 4)
										{
										}
										else
										{
											Call_Loc(uParam0->f_83);
											if (StackVal)
											{
												__LIB_12__::func_288(uParam0);
												__LIB_4__::func_871(5);
												__LIB_7__::func_704();
												__LIB_19__::func_231(uParam0, 1);
												__LIB_1__::func_211(uParam0->f_38, 8388608);
												__LIB_12__::func_441(uParam0, 6);
											}
										}
										Jump @911; //curOff = 552
										if (uParam0->f_54 == 3)
										{
											if (!uParam0->f_52)
											{
												__LIB_12__::func_289(uParam0);
											}
										}
										Call_Loc(uParam0->f_88);
										iVar0 = StackVal;
										if (iVar0 != 0)
										{
											__LIB_19__::func_231(uParam0, 0);
											switch (iVar0)
											{
												case 3:
													__LIB_4__::func_872(uParam0->f_38);
													__LIB_4__::func_873(uParam0->f_37);
													__LIB_4__::func_871(6);
													__LIB_12__::func_441(uParam0, 8);
													break;
												case 4:
													__LIB_12__::func_441(uParam0, 11);
													break;
												case 1:
													__LIB_12__::func_441(uParam0, 20);
													break;
												default:
													break;
											}
										}
										Jump @911; //curOff = 680
										Call_Loc(uParam0->f_88);
										Call_Loc(uParam0->f_99);
										if (StackVal)
										{
											__LIB_4__::func_871(7);
											__LIB_12__::func_290(uParam0);
											__LIB_12__::func_441(uParam0, 10);
										}
										else if (!uParam0->f_48)
										{
											Call_Loc(uParam0->f_97);
											if (StackVal)
											{
												__LIB_19__::func_232(uParam0);
												__LIB_12__::func_441(uParam0, 9);
											}
										}
										Jump @911; //curOff = 749
										if (!__LIB_12__::func_422(uParam0->f_37) || __LIB_12__::func_442(uParam0))
										{
											__LIB_12__::func_441(uParam0, 20);
										}
										else
										{
											Call_Loc(uParam0->f_88);
											Call_Loc(uParam0->f_99);
											if (StackVal)
											{
												__LIB_4__::func_871(7);
												__LIB_12__::func_290(uParam0);
												__LIB_12__::func_441(uParam0, 10);
											}
										}
										Jump @911; //curOff = 820
										if (!__LIB_12__::func_422(uParam0->f_37) || __LIB_12__::func_442(uParam0))
										{
											__LIB_12__::func_441(uParam0, 20);
										}
										else
										{
											Call_Loc(uParam0->f_88);
											if (__LIB_4__::func_874() != uParam0->f_38)
											{
												__LIB_12__::func_441(uParam0, 20);
											}
										}
										Jump @911; //curOff = 883
										Call_Loc(uParam0->f_88);
										Call_Loc(uParam0->f_99);
										if (StackVal)
										{
											__LIB_12__::func_441(uParam0, 20);
										}
									}
									if (uParam0->f_42 == 19 || uParam0->f_42 == 20)
									{
										if (uParam0->f_51)
										{
											__LIB_12__::func_291(uParam0);
										}
									}
									Call_Loc(uParam0->f_101);
									if (uParam0->f_42 == 19 || uParam0->f_42 == 20)
									{
										__LIB_19__::func_471(uParam0);
									}
									BUILTIN::WAIT(0);
									__LIB_19__::func_471(uParam0);
								}
							}
						}
					}
				}
				default:
					break;
		}
	}
}

void func_4()
{
	func_96(&Local_14, Local_14.f_1.f_38, Local_14.f_1.f_40, Local_14.f_1.f_41);
	func_98(&(Local_14.f_3310), Local_14.f_1.f_3.f_6, Local_14.f_1.f_3.f_9, ((__LIB_12__::func_292(&Local_14, 0) || __LIB_12__::func_292(&Local_14, 1)) || __LIB_12__::func_292(&Local_14, 3)));
	func_99(&(Local_14.f_4583), Local_14.f_1.f_3.f_6, Local_14.f_1.f_3.f_9);
	func_100(&(Local_14.f_2979), Local_14.f_1.f_3.f_6);
	func_101(&(Local_14.f_114));
	if (__LIB_12__::func_292(&Local_14, 1))
	{
		func_102(&(Local_14.f_3310), 1);
	}
	else
	{
		switch (Local_14.f_1.f_3.f_2)
		{
			case 38:
				func_102(&(Local_14.f_3310), 0);
				break;
			case 8:
				func_102(&(Local_14.f_3310), 2);
				break;
			case 105:
				func_102(&(Local_14.f_3310), 3);
				break;
			case 75:
				func_102(&(Local_14.f_3310), 4);
				break;
			case 5:
				func_102(&(Local_14.f_3310), 5);
				break;
			case 76:
				func_102(&(Local_14.f_3310), 7);
				break;
			case 92:
				func_102(&(Local_14.f_3310), 8);
				break;
			case 115:
				func_102(&(Local_14.f_3310), 6);
				break;
			default:
				func_102(&(Local_14.f_3310), 1);
				break;
		}
	}
	func_103(&Local_14, Local_14.f_1.f_41);
	switch (__LIB_0__::func_81(&Local_14))
	{
		case 2:
			func_104();
			__LIB_1__::func_212(2, 16384);
			__LIB_1__::func_212(2, 8192);
			__LIB_1__::func_212(2, 32768);
			break;
		case 3:
			func_106();
			break;
	}
}

void func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (Local_14.f_1.f_41)
	{
		case 76:
			iVar1 = 0;
			break;
		case 115:
			iVar1 = 2;
			break;
		case 75:
			iVar1 = 3;
			break;
		default:
			iVar1 = 1;
			break;
	}
	switch (Local_14.f_1.f_41)
	{
		case 76:
			iVar2 = 1;
			break;
		default:
			iVar2 = 0;
			break;
	}
	if (__LIB_0__::func_113())
	{
		if (__LIB_12__::func_292(&Local_14, 1))
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if (__LIB_12__::func_292(&Local_14, 1))
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 3;
	}
	__LIB_19__::func_233(&(Local_14.f_3310), iVar0, iVar1, __LIB_12__::func_292(&Local_14, 0));
	func_109(&(Local_14.f_4583), iVar2);
	func_110(&(Local_14.f_2979), Local_14.f_3310.f_691);
	AUDIO::_0xD9130842D7226045("MGBLK_Sounds", 1);
	HUD::_TEXT_DATABASE_REQUEST("MGPKR");
	PED::_0xED9582B3DA8F02B4(6);
	func_111(&Local_14);
	if (__LIB_12__::func_292(&Local_14, 0))
	{
		iVar3 = __LIB_4__::func_875(Local_14.f_1.f_38, Local_14.f_1.f_41, -1);
		if (iVar3 != 0)
		{
			STREAMING::REQUEST_MODEL(iVar3, false);
		}
	}
	if (__LIB_12__::func_292(&Local_14, 1))
	{
		switch (__LIB_0__::func_12())
		{
			case 71:
				STREAMING::_0x20D504994FDC4412("hso_normal_seats", "hso_poker_seats");
				break;
			case 98:
				STREAMING::_0x20D504994FDC4412("dewclm_normal_seats", "dewclm_poker_seats");
				break;
			case 9:
				STREAMING::_0x20D504994FDC4412("shb_normal_seats", "shb_poker_seats");
				break;
		}
	}
}

int func_8()
{
	int iVar0;
	if (((((!__LIB_19__::func_234(&(Local_14.f_3310)) || !__LIB_12__::func_293(&(Local_14.f_4583))) || !func_116(&(Local_14.f_2979))) || !AUDIO::_0xD9130842D7226045("MGBLK_Sounds", 1)) || !HUD::_TEXT_DATABASE_HAS_LOADED("MGPKR")) || !PED::_0x5E420FF293EE5472())
	{
		return 0;
	}
	if (!func_117(&Local_14))
	{
		return 0;
	}
	if (__LIB_12__::func_292(&Local_14, 0))
	{
		iVar0 = __LIB_4__::func_875(Local_14.f_1.f_38, Local_14.f_1.f_41, -1);
		if (iVar0 == 0 || !STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			return 0;
		}
	}
	if (__LIB_12__::func_292(&Local_14, 1))
	{
		switch (__LIB_0__::func_12())
		{
			case 9:
			case 71:
			case 98:
				if (STREAMING::_0xFC464598F6EE97B0() && !STREAMING::_0xC2C05DEFE85A0B64())
				{
					return 0;
				}
				break;
		}
	}
	return 1;
}

int func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_14.f_1.f_47)
	{
		PAD::_SET_CONTROL_CONTEXT(4, joaat("MINIGAMEPOKER"));
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
		if (CAM::_0xA2B1C7EF759A63CE() > 0f)
		{
			if (Local_14.f_114.f_2653 != 3)
			{
				func_118(&(Local_14.f_114), 3);
			}
		}
		else if (Local_14.f_114.f_2653 == 3)
		{
			func_118(&(Local_14.f_114), 2);
		}
	}
	if (__LIB_0__::func_139(Local_14.f_2979.f_327))
	{
		if (PAD::_IS_USING_KEYBOARD(0) && Local_14.f_1.f_47)
		{
			if (!__LIB_1__::func_530(Local_14.f_2979.f_327, 1))
			{
				_NAMESPACE30::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
				_NAMESPACE30::_SET_MOUSE_CURSOR_SPRITE(0);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
			}
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_PC_FREE_LOOK"), false);
		}
	}
	func_121(&Local_14);
	if (!Local_14.f_1.f_51)
	{
		if (__LIB_12__::func_292(&Local_14, 1))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar1 = Local_14.f_1.f_3.f_23[iVar2];
				if ((!PED::IS_PED_INJURED(iVar1) && !PED::IS_PED_A_PLAYER(iVar1)) && __LIB_0__::func_407(iVar1))
				{
					iVar0 = __LIB_4__::func_656(iVar1);
					if (!__LIB_1__::func_22(iVar0))
					{
						func_125(iVar0, 1, 0, 0f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1);
						if (__LIB_1__::func_22(iVar0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, true);
							ENTITY::SET_ENTITY_COORDS(iVar1, Local_14.f_3310.f_1137[iVar2 /*3*/], true, false, true, true);
						}
					}
				}
				iVar2++;
			}
		}
	}
	if (Local_14.f_1.f_51)
	{
		if (__LIB_12__::func_292(&Local_14, 3))
		{
			if (__LIB_14__::func_239(1))
			{
				if (!__LIB_14__::func_239(2))
				{
					__LIB_12__::func_433(2);
				}
			}
			else if (__LIB_14__::func_239(2))
			{
				__LIB_12__::func_434(2);
			}
		}
	}
	return 0;
}

int func_12()
{
	return func_129(&Local_14, &(Local_14.f_114.f_287));
}

int func_14()
{
	return func_130(&Local_14, &(Local_14.f_114.f_287));
}

void func_16()
{
	func_131(&Local_14, &(Local_14.f_114.f_287));
}

int func_18()
{
	return func_132(&Local_14, &(Local_14.f_114.f_287));
}

void func_20()
{
	func_133(&Local_14, &(Local_14.f_114.f_287));
}

int func_22()
{
	return func_134(&Local_14, &(Local_14.f_114.f_287));
}

void func_24()
{
	func_135(&(Local_14.f_114));
}

var func_26()
{
	return func_136(&Local_14, &(Local_14.f_114));
}

void func_28()
{
	func_137(&(Local_14.f_114));
}

int func_30(int iParam0)
{
	return func_138(&(Local_14.f_114), iParam0, 1);
}

bool func_32()
{
	return func_139(&(Local_14.f_114), 1);
}

int func_34()
{
	return func_140(&(Local_14.f_114), 1);
}

void func_36()
{
	func_141(&(Local_14.f_114), 0, 0, 0);
}

bool func_38()
{
	return func_142(&(Local_14.f_114), 6);
}

void func_39(var uParam0, int iParam1)
{
	uParam0->f_97 = iParam1;
}

bool func_40()
{
	return func_142(&(Local_14.f_114), 7);
}

bool func_42()
{
	return func_142(&(Local_14.f_114), 8);
}

void func_44()
{
	if (__LIB_12__::func_292(&Local_14, 0))
	{
		HUD::_DISPLAY_HUD_COMPONENT(372886907);
		func_118(&(Local_14.f_114), 1);
	}
	else
	{
		func_118(&(Local_14.f_114), 2);
	}
}

void func_46()
{
	func_118(&(Local_14.f_114), 0);
	if ((__LIB_12__::func_292(&Local_14, 0) || __LIB_12__::func_292(&Local_14, 3)) || __LIB_12__::func_292(&Local_14, 1))
	{
		if (func_143(&(Local_14.f_114.f_287), Local_14.f_114.f_9))
		{
			__LIB_2__::func_590(func_145(&Local_14, func_144(&(Local_14.f_114.f_287), Local_14.f_114.f_9)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
		}
		else
		{
			__LIB_2__::func_590(func_145(&Local_14, Local_14.f_114.f_2031.f_3), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
		}
	}
	if (__LIB_0__::func_12() == 75)
	{
		__LIB_3__::func_124(-1983417035, 1);
	}
}

void func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_12__::func_292(&Local_14, 0))
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (func_143(&(Local_14.f_114.f_287), iVar1) && func_148(&(Local_14.f_3310), iVar1))
			{
				iVar0 = func_149(&(Local_14.f_3310), iVar1);
				if (!PED::IS_PED_A_PLAYER(iVar0) && !__LIB_0__::func_407(iVar0))
				{
					__LIB_2__::func_190(iVar0, func_145(&Local_14, func_144(&(Local_14.f_114.f_287), iVar1)));
				}
			}
			iVar1++;
		}
	}
	if (__LIB_12__::func_292(&Local_14, 1))
	{
		AUDIO::STOP_AUDIO_SCENE("Camp_Poker_and_Dominoes_Scene");
		if (AUDIO::TRIGGER_MUSIC_EVENT("POKER_STOP_MUSIC"))
		{
		}
	}
	if (Local_14.f_114.f_2010 == 12)
	{
		__LIB_18__::func_527(&(Local_14.f_3310));
	}
	func_152(&Local_14);
	__LIB_19__::func_586(&(Local_14.f_3310), 1, 1);
	func_154(&(Local_14.f_4583));
	func_155(&(Local_14.f_2979));
	__LIB_7__::func_769(1, 0, 0);
	AUDIO::_0x531A78D6BF27014B("MGBLK_Sounds");
	HUD::_TEXT_DATABASE_DELETE("MGPKR");
	PED::_0x7D4E70A67A651C71(6);
	func_157(&Local_14);
	if (__LIB_12__::func_292(&Local_14, 0))
	{
		iVar2 = __LIB_4__::func_875(Local_14.f_1.f_38, Local_14.f_1.f_41, -1);
		if (iVar2 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		}
	}
	__LIB_1__::func_283(&(Global_1359489.f_40), 1);
}

void func_52()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_159(&(Local_14.f_3310), "NEW_SESSION", -1, -1);
	func_160(&(Local_14.f_114));
	uVar0 = __LIB_12__::func_241(2, Local_14.f_1.f_3.f_10);
	iVar1 = __LIB_12__::func_294(2, Local_14.f_1.f_3.f_10);
	func_163(&Local_14, uVar0, iVar1);
	__LIB_2__::func_522(Local_14.f_1.f_3.f_10, 0, 0, 0, 1);
	iVar2 = __LIB_7__::func_728();
	iVar3 = 1;
	if (__LIB_0__::func_181())
	{
		iVar3 = 2;
	}
	func_166(&(Local_14.f_114), iVar2, iVar3, iVar1);
	func_167(&(Local_14.f_3310), iVar2, Global_35, 0, 0, 0, -1, 92, 255, 0, 0, 0, 0);
	func_168(&(Local_14.f_3310), iVar2);
	func_169(&(Local_14.f_114), iVar2);
	func_170(&(Local_14.f_3310), iVar2, iVar1, 1);
	func_171(&Local_14, 1);
	iVar2 = __LIB_12__::func_295();
	if (iVar2 != -1)
	{
		func_173(&(Local_14.f_114), iVar2, 1);
	}
	func_174(&(Local_14.f_3310), Local_14.f_114.f_9);
	func_175(&(Local_14.f_114), 0);
	func_175(&(Local_14.f_114), 1);
	func_176(2);
}

void func_54()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Local_14.f_114.f_9 != iVar0)
		{
			__LIB_0__::func_11(&(Local_14.f_3310), iVar0, "OLD", "IMPORT");
			iVar1 = 0;
			while (iVar1 < 4)
			{
				iVar2 = (iVar0 * 4 + iVar1);
				iVar3 = func_178(2, iVar2, &uVar5, &uVar6);
				uVar4 = uVar5;
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					func_179(&(Local_14.f_3310), iVar0, iVar1, iVar3, uVar4, uVar6);
				}
				iVar1++;
			}
			__LIB_0__::func_11(&(Local_14.f_3310), iVar0, "NEW", "IMPORT");
		}
		iVar0++;
	}
	iVar3 = __LIB_12__::func_238(2, 24);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		func_181(&(Local_14.f_3310), __LIB_12__::func_295(), 0, iVar3);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar12 = __LIB_4__::func_876(2, iVar0, &uVar7, &uVar8, &iVar9, &iVar10);
		if (!PED::IS_PED_INJURED(iVar12) && iVar12 != Global_35)
		{
			iVar11 = func_183(&Local_14, iVar9);
			func_184(&(Local_14.f_114), iVar0, iVar11, uVar7, 1);
			iVar13 = uVar8;
			if (((iVar13 != 0 && iVar13 != 1) && iVar13 != 2) && iVar13 != 3)
			{
				if (!PED::IS_PED_MALE(iVar12))
				{
					iVar13 = 3;
				}
				else if (iVar0 == (Local_14.f_114.f_9 + 5 % 6))
				{
					iVar13 = 2;
				}
				else
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
					{
						case 0:
							iVar13 = 0;
							break;
						case 1:
							iVar13 = 1;
							break;
						case 2:
							iVar13 = 2;
							break;
					}
				}
			}
			func_167(&(Local_14.f_3310), iVar0, iVar12, 1, iVar13, 1, iVar9, iVar10, 255, 0, 0.5f, 0, 0);
			func_169(&(Local_14.f_114), iVar0);
			func_185(&(Local_14.f_114.f_2655), iVar0);
		}
		iVar0++;
	}
	iVar14 = __LIB_12__::func_295();
	if (__LIB_12__::func_296(&(Local_14.f_3310), iVar14))
	{
		func_187(&(Local_14.f_114), iVar14);
	}
	else
	{
		iVar14 = 0;
		if (func_188(&(Local_14.f_114.f_287), &iVar14, -1, 1))
		{
			func_187(&(Local_14.f_114), iVar14);
		}
		else
		{
			func_187(&(Local_14.f_114), -1);
		}
	}
	func_189(&(Local_14.f_2979), 0);
	func_190(&(Local_14.f_114), 1);
}

void func_56()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	int iVar7;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		bVar6 = __LIB_12__::func_296(&(Local_14.f_3310), iVar0);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar2 = (iVar0 * 4 + iVar1);
			if (bVar6 && func_191(&(Local_14.f_3310), iVar0, iVar1))
			{
				iVar3 = func_192(&(Local_14.f_3310), iVar0, iVar1);
				uVar4 = func_193(&(Local_14.f_3310), iVar0, iVar1);
				uVar5 = func_194(&(Local_14.f_3310), iVar0, iVar1);
				__LIB_12__::func_297(2, iVar3, iVar2, uVar4, uVar5);
				func_196(&(Local_14.f_3310), iVar0, iVar1);
			}
			else
			{
				__LIB_12__::func_297(2, 0, iVar2, 0, 0);
			}
			iVar1++;
		}
		iVar0++;
	}
	if (func_197(&(Local_14.f_3310)))
	{
		__LIB_12__::func_297(2, __LIB_12__::func_298(&(Local_14.f_3310)), 24, 0, 0);
		func_199(&(Local_14.f_3310));
	}
	else
	{
		__LIB_12__::func_297(2, 0, 24, 0, 0);
	}
	__LIB_12__::func_299(Local_14.f_114.f_2474);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_12__::func_296(&(Local_14.f_3310), iVar0))
		{
			if (((func_148(&(Local_14.f_3310), iVar0) && __LIB_12__::func_300(&(Local_14.f_3310), iVar0) != 0) && !func_202(&(Local_14.f_3310), iVar0, 26)) && !func_202(&(Local_14.f_3310), iVar0, 27))
			{
				iVar7 = func_149(&(Local_14.f_3310), iVar0);
				func_206(2, iVar7, iVar0, func_144(&(Local_14.f_114.f_287), iVar0), __LIB_12__::func_301(&(Local_14.f_3310), iVar0), func_204(&(Local_14.f_3310), iVar0), func_205(&(Local_14.f_3310), iVar0));
				if (__LIB_0__::func_407(iVar7))
				{
				}
				__LIB_18__::func_563(&(Local_14.f_3310), iVar0, 0);
			}
		}
		iVar0++;
	}
}

int func_58()
{
	func_163(&Local_14, 100, 300);
	__LIB_12__::func_435(14);
	func_209(&(Local_14.f_4583), &(Local_14.f_3310), 0);
	if (__LIB_1__::func_77(2, 512))
	{
		func_166(&(Local_14.f_114), 2, 1, 300);
		func_184(&(Local_14.f_114), 0, 6, 50, 1);
		func_184(&(Local_14.f_114), 1, 7, 50, 1);
		func_184(&(Local_14.f_114), 3, 8, 50, 1);
		func_184(&(Local_14.f_114), 5, 4, 50, 1);
		func_173(&(Local_14.f_114), 3, 1);
		func_211(&(Local_14.f_114), 1);
		func_190(&(Local_14.f_114), 1);
		while (!func_139(&(Local_14.f_114), 1))
		{
			func_212(&(Local_14.f_114.f_1276));
			func_137(&(Local_14.f_114));
		}
		func_141(&(Local_14.f_114), 1, -1857735811, -26793149);
		while (!func_139(&(Local_14.f_114), 1))
		{
			func_212(&(Local_14.f_114.f_1276));
			func_137(&(Local_14.f_114));
		}
		func_141(&(Local_14.f_114), 1, -1857735811, -1442142035);
		func_190(&(Local_14.f_114), 2);
		func_213(&(Local_14.f_114), 2, 0);
	}
	else if (__LIB_1__::func_77(2, 1024))
	{
		func_166(&(Local_14.f_114), 2, 1, 300);
		func_184(&(Local_14.f_114), 5, 4, 200, 1);
		func_173(&(Local_14.f_114), 2, 1);
		func_211(&(Local_14.f_114), 2);
		func_190(&(Local_14.f_114), 1);
		func_213(&(Local_14.f_114), 3, 0);
	}
	else if (__LIB_1__::func_77(2, 2048))
	{
		func_166(&(Local_14.f_114), 2, 1, 500);
		func_184(&(Local_14.f_114), 5, 4, 500, 1);
		func_173(&(Local_14.f_114), 5, 1);
		func_211(&(Local_14.f_114), 4);
		func_190(&(Local_14.f_114), 1);
		func_213(&(Local_14.f_114), 3, 0);
	}
	return 1;
}

void func_60()
{
	if (__LIB_1__::func_77(2, 512))
	{
		func_214(&Local_14, &(Local_14.f_114.f_287), 0, 1);
		func_167(&(Local_14.f_3310), 2, Global_35, 2, 0, 0, -1, 92, 255, 0, 0, 0, 0);
		func_167(&(Local_14.f_3310), 0, Local_14.f_1.f_3.f_23[0], 2, 0, 1, -1, 92, 255, 0, 0, 0, 0);
		func_167(&(Local_14.f_3310), 1, Local_14.f_1.f_3.f_23[1], 2, 2, 1, -1, 92, 255, 0, 0, 0, 0);
		func_167(&(Local_14.f_3310), 3, Local_14.f_1.f_3.f_23[3], 2, 0, 1, -1, 92, 255, 0, 0, 0, 0);
		func_167(&(Local_14.f_3310), 4, Local_14.f_1.f_3.f_23[4], 1, 1, 1, -1, 92, 255, 0, 0, 0, 0);
		func_167(&(Local_14.f_3310), 5, Local_14.f_1.f_3.f_23[5], 2, 0, 1, -1, 92, 255, 0, 0, 0, 0);
		func_215(&(Local_14.f_114), 0, 9);
		func_215(&(Local_14.f_114), 1, 9);
		func_215(&(Local_14.f_114), 3, 9);
		func_215(&(Local_14.f_114), 5, 10);
		func_216(&(Local_14.f_114), 4);
		func_217(&(Local_14.f_3310), Local_14.f_114.f_2474, 0);
	}
	else if (__LIB_1__::func_77(2, 1024))
	{
		func_214(&Local_14, &(Local_14.f_114.f_287), 0, 1);
		func_167(&(Local_14.f_3310), 2, Global_35, 1, 0, 0, -1, 92, 255, 0, 0, 0, 0);
		func_167(&(Local_14.f_3310), 4, Local_14.f_1.f_3.f_23[4], 1, 1, 1, -1, 92, 255, 0, 0, 0, 0);
		func_167(&(Local_14.f_3310), 5, Local_14.f_1.f_3.f_23[5], 1, 0, 1, -1, 92, 255, 0, 0, 0, 0);
		func_215(&(Local_14.f_114), 0, 9);
		func_215(&(Local_14.f_114), 5, 10);
		func_216(&(Local_14.f_114), 4);
		func_217(&(Local_14.f_3310), Local_14.f_114.f_2474, 0);
	}
	else if (__LIB_1__::func_77(2, 2048))
	{
		func_214(&Local_14, &(Local_14.f_114.f_287), 0, 1);
		func_167(&(Local_14.f_3310), 2, Global_35, 1, 0, 0, -1, 92, 255, 0, 0, 0, 0);
		func_167(&(Local_14.f_3310), 4, Local_14.f_1.f_3.f_23[4], 1, 1, 1, -1, 92, 255, 0, 0, 0, 0);
		func_167(&(Local_14.f_3310), 5, Local_14.f_1.f_3.f_23[5], 1, 0, 1, -1, 92, 255, 0, 0, 0, 0);
		func_215(&(Local_14.f_114), 0, 9);
		func_215(&(Local_14.f_114), 5, 11);
		func_216(&(Local_14.f_114), 4);
		func_217(&(Local_14.f_3310), Local_14.f_114.f_2474, 0);
	}
	func_218(&(Local_14.f_4583), 5, 0, Local_14.f_114.f_9, -1, 0);
	func_174(&(Local_14.f_3310), Local_14.f_114.f_9);
	func_189(&(Local_14.f_2979), 1);
	func_219(&(Local_14.f_114), 1);
	func_176(2);
}

int func_61()
{
	int iVar0;
	iVar0 = 1;
	if (__LIB_0__::func_181())
	{
		iVar0 = 2;
	}
	func_166(&(Local_14.f_114), 0, iVar0, 61);
	func_184(&(Local_14.f_114), 3, 9, 384, 1);
	func_184(&(Local_14.f_114), 4, 10, 109, 1);
	func_173(&(Local_14.f_114), 4, 1);
	func_211(&(Local_14.f_114), 5);
	func_209(&(Local_14.f_4583), &(Local_14.f_3310), 0);
	return 1;
}

void func_62()
{
	func_163(&Local_14, (Local_14.f_1.f_3.f_10 / 100), 100);
	func_159(&(Local_14.f_3310), "NEW_SESSION", -1, -1);
	func_160(&(Local_14.f_114));
	func_167(&(Local_14.f_3310), 0, Global_35, 1, 0, 0, -1, 92, 255, 0, 0, 0, 0);
	func_167(&(Local_14.f_3310), 3, Local_14.f_1.f_3.f_23[3], 1, 0, 1, -1, 92, 255, 0, 0, 0, 0);
	func_167(&(Local_14.f_3310), 4, Local_14.f_1.f_3.f_23[4], 1, 0, 1, -1, 92, 255, 0, 0, 0, 0);
	func_169(&(Local_14.f_114), 0);
	func_169(&(Local_14.f_114), 3);
	func_169(&(Local_14.f_114), 4);
	func_215(&(Local_14.f_114), 3, 12);
	func_215(&(Local_14.f_114), 4, 12);
	func_219(&(Local_14.f_114), 0);
	func_175(&(Local_14.f_114), 4);
	func_175(&(Local_14.f_114), 5);
	func_218(&(Local_14.f_4583), 5, 0, Local_14.f_114.f_9, -1, 0);
	func_174(&(Local_14.f_3310), Local_14.f_114.f_9);
	func_189(&(Local_14.f_2979), 0);
	func_171(&Local_14, 0);
	func_214(&Local_14, &(Local_14.f_114.f_287), 0, 1);
	func_217(&(Local_14.f_3310), 4, 0);
	func_190(&(Local_14.f_114), 1);
	func_176(2);
}

int func_63()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	if (__LIB_0__::func_181())
	{
		iVar2 = 2;
	}
	func_209(&(Local_14.f_4583), &(Local_14.f_3310), 0);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar0 = Local_14.f_1.f_3.f_23[iVar1];
		if (!PED::IS_PED_INJURED(iVar0) && PED::IS_PED_A_PLAYER(iVar0))
		{
			func_166(&(Local_14.f_114), iVar1, iVar2, 100);
			func_173(&(Local_14.f_114), iVar1, 0);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar0 = Local_14.f_1.f_3.f_23[iVar1];
		if (!PED::IS_PED_INJURED(iVar0) && !PED::IS_PED_A_PLAYER(iVar0))
		{
			iVar2 = 0;
			if (__LIB_0__::func_407(iVar0))
			{
				switch (__LIB_4__::func_656(iVar0))
				{
					case 0:
						iVar2 = 11;
						break;
					case 1:
						iVar2 = 12;
						break;
					case 2:
						iVar2 = 13;
						break;
					case 3:
						iVar2 = 14;
						break;
					case 4:
						iVar2 = 15;
						break;
					case 5:
						iVar2 = 16;
						break;
					case 6:
						iVar2 = 17;
						break;
					case 7:
						iVar2 = 18;
						break;
					case 8:
						iVar2 = 19;
						break;
					case 9:
						iVar2 = 20;
						break;
					case 10:
						iVar2 = 21;
						break;
					case 14:
						iVar2 = 22;
						break;
					case 17:
						iVar2 = 23;
						break;
					case 18:
						iVar2 = 24;
						break;
					case 19:
						iVar2 = 25;
						break;
					case 21:
						iVar2 = 26;
						break;
					case 23:
						iVar2 = 27;
						break;
					default:
						iVar2 = 3;
						break;
				}
			}
			else
			{
				iVar2 = 3;
			}
			if (iVar2 != 0)
			{
				func_184(&(Local_14.f_114), iVar1, iVar2, 100, 1);
			}
		}
		iVar1++;
	}
	return 1;
}

void func_64()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	func_159(&(Local_14.f_3310), "NEW_SESSION", -1, -1);
	func_160(&(Local_14.f_114));
	func_163(&Local_14, (Local_14.f_1.f_3.f_10 / 100), 100);
	func_171(&Local_14, 0);
	func_175(&(Local_14.f_114), 0);
	func_175(&(Local_14.f_114), 1);
	func_175(&(Local_14.f_114), 5);
	iVar4 = 0;
	while (iVar4 < 6)
	{
		iVar3 = Local_14.f_1.f_3.f_23[iVar4];
		if (!PED::IS_PED_INJURED(iVar3) && iVar4 != Local_14.f_114.f_9)
		{
			if (__LIB_0__::func_407(iVar3))
			{
				iVar0 = __LIB_4__::func_656(iVar3);
				if (!__LIB_1__::func_22(iVar0))
				{
					func_220(&(Local_14.f_114), iVar4, 1);
				}
				else
				{
					if (PED::IS_PED_MALE(iVar3))
					{
						iVar1 = 1;
					}
					else
					{
						iVar1 = 3;
					}
					if (PED::IS_PED_A_PLAYER(iVar3))
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 1;
					}
					func_167(&(Local_14.f_3310), iVar4, iVar3, 1, iVar1, iVar2, -1, 92, 255, 0, 0, 1, 1);
					func_169(&(Local_14.f_114), iVar4);
					func_215(&(Local_14.f_114), iVar4, 0);
				}
				iVar4++;
			}
		}
	}
}

void func_65(var uParam0, int iParam1)
{
	uParam0->f_105 = iParam1;
}

void func_66()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	__LIB_2__::func_522(Local_14.f_1.f_3.f_10, 0, 0, 0, 1);
	switch (__LIB_0__::func_12())
	{
		case 9:
		case 71:
		case 98:
			if (STREAMING::_0xFC464598F6EE97B0())
			{
				if (STREAMING::_0xC2C05DEFE85A0B64())
				{
					STREAMING::_0x040EE319EFD1D3B5();
				}
				else
				{
					STREAMING::_0x31108BB5715D035F();
				}
			}
			break;
	}
	iVar3 = Local_14.f_114.f_9;
	iVar2 = Local_14.f_1.f_3.f_23[iVar3];
	if (!PED::IS_PED_INJURED(iVar2))
	{
		if (PED::IS_PED_MALE(iVar2))
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 3;
		}
		if (PED::IS_PED_A_PLAYER(iVar2))
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = 1;
		}
		func_167(&(Local_14.f_3310), iVar3, iVar2, 1, iVar0, iVar1, -1, 92, 255, 0, 0, 1, 0);
		func_169(&(Local_14.f_114), iVar3);
		func_215(&(Local_14.f_114), iVar3, 0);
	}
	iVar3 = 0;
	while (iVar3 < 6)
	{
		if (func_148(&(Local_14.f_3310), iVar3))
		{
			func_221(&(Local_14.f_3310), iVar3);
		}
		iVar3++;
	}
	ENTITY::CREATE_MODEL_HIDE(Local_14.f_3310, 2.5f, joaat("P_BOTTLEBEER01A"), true);
	func_218(&(Local_14.f_4583), 5, 0, Local_14.f_114.f_9, -1, 0);
	func_174(&(Local_14.f_3310), Local_14.f_114.f_9);
	func_189(&(Local_14.f_2979), 0);
	func_214(&Local_14, &(Local_14.f_114.f_287), 1, 1);
	func_190(&(Local_14.f_114), 1);
	func_176(2);
	if (__LIB_12__::func_292(&Local_14, 1))
	{
		AUDIO::START_AUDIO_SCENE("Camp_Poker_and_Dominoes_Scene");
		if (AUDIO::TRIGGER_MUSIC_EVENT("POKER_START_MUSIC"))
		{
		}
	}
}

void func_67(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam4;
	uParam0->f_1 = 0;
	uParam0->f_2 = iParam5;
	uParam0->f_3 = { *uParam1 };
	uParam0->f_37 = *uParam1;
	uParam0->f_38 = uParam1->f_12;
	uParam0->f_40 = uParam1->f_13;
	uParam0->f_41 = uParam1->f_2;
	switch (uParam1->f_12)
	{
		case 0:
			uParam0->f_39 = -1150372370;
			break;
		case 2:
			uParam0->f_39 = -471827042;
			break;
		case 1:
			uParam0->f_39 = 355424894;
			break;
		case 3:
			uParam0->f_39 = -2033178055;
			break;
		default:
			uParam0->f_39 = 0;
			break;
	}
	__LIB_12__::func_441(uParam0, 0);
	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	uParam0->f_53 = 0;
	uParam0->f_54 = 0;
	uParam0->f_55 = 0;
	uParam0->f_56 = 0;
	uParam0->f_57 = 0;
	uParam0->f_58.f_3 = MISC::GET_HASH_KEY("MG_YES");
	uParam0->f_58.f_3.f_3 = 0;
	uParam0->f_78 = 25867;
	uParam0->f_79 = 25867;
	uParam0->f_80 = 25867;
	uParam0->f_81 = 25875;
	uParam0->f_82 = 25875;
	uParam0->f_83 = 25875;
	uParam0->f_84 = 25867;
	uParam0->f_85 = 25875;
	uParam0->f_86 = 25867;
	uParam0->f_87 = 25875;
	uParam0->f_88 = 25884;
	uParam0->f_89 = 25867;
	uParam0->f_90 = 25867;
	uParam0->f_91 = 25893;
	uParam0->f_92 = 25875;
	uParam0->f_93 = 25902;
	uParam0->f_94 = 25867;
	uParam0->f_95 = 25867;
	uParam0->f_96 = 25875;
	uParam0->f_97 = 25875;
	uParam0->f_98 = 25875;
	uParam0->f_99 = 25875;
	uParam0->f_100 = 25875;
	uParam0->f_101 = 25867;
	uParam0->f_102 = 25867;
	uParam0->f_103 = 25867;
	uParam0->f_104 = 25867;
	uParam0->f_105 = 25867;
	uParam0->f_106 = 25867;
	uParam0->f_107 = 25867;
	uParam0->f_108 = 25875;
	uParam0->f_109 = 25867;
	uParam0->f_110 = 25867;
	uParam0->f_111 = 25875;
	uParam0->f_112 = 25875;
	Call_Loc(iParam2);
	Call_Loc(uParam0->f_78);
	Call_Loc(iParam3);
}

int func_96(var uParam0, var uParam1, int iParam2, var uParam3)
{
	switch (iParam2)
	{
		case 0:
			*uParam0 = 0;
			break;
		case 1:
			*uParam0 = 1;
			break;
		case 3:
			*uParam0 = 3;
			break;
		case 4:
			*uParam0 = 2;
			break;
		default:
			*uParam0 = 0;
			return 0;
	}
	return 1;
}

void func_98(var uParam0, vector3 vParam1, var uParam4, bool bParam5)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = uParam4;
	uParam0->f_758 = 0;
	uParam0->f_762 = 0;
	uParam0->f_778 = bParam5;
	uParam0->f_779 = 0;
	StringCopy(&(uParam0->f_4[0 /*8*/]), "face_human@mini_games@generic", 64);
	StringCopy(&(uParam0->f_4[1 /*8*/]), "face_human@mini_games@poker", 64);
	StringCopy(&(uParam0->f_21[0 /*8*/]), "p_m_zero", 64);
	StringCopy(&(uParam0->f_21[1 /*8*/]), "gen_male", 64);
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_41 = 0;
	uParam0->f_1098 = 0;
	__LIB_18__::func_530(uParam0);
	func_263(uParam0);
	__LIB_12__::func_304(uParam0);
	__LIB_12__::func_305(uParam0);
	__LIB_12__::func_306(uParam0);
	__LIB_12__::func_307(uParam0);
	__LIB_12__::func_308(uParam0);
	__LIB_12__::func_309(uParam0);
}

void func_99(var uParam0, vector3 vParam1, var uParam4)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	func_270(&(uParam0->f_36), vParam1, uParam4);
	func_271(&(uParam0->f_36), 0, 0.4134f, -0.7059f, 1.3215f, -13.2545f, 0.0387f, 9.8994f, 36.4835f, 0f);
	func_271(&(uParam0->f_36), 1, -0.8528f, 1.8438f, 1.5104f, -17.3208f, -0.1408f, -154.8075f, 51.282f, 0f);
	func_272(&(uParam0->f_36), 0, 0.0729f, 0.553f, 1.1431f, -59.0945f, 0f, 179.8223f, 42.735f, 0, 0, 0, 0f, 0.1f);
	func_272(&(uParam0->f_36), 1, 0.0337f, 0.6014f, 1.2234f, -59.0944f, 0f, 179.8223f, 42.735f, 0, 0, 0, 0f, 0.1f);
	func_272(&(uParam0->f_36), 2, 0.0028f, 1.0857f, 2.175f, -62.243f, 0f, 179.2382f, 14.4905f, 0, 0, 0, 0f, 0.1f);
	func_272(&(uParam0->f_36), 3, 0.0651f, 0.3596f, 1.1895f, -89.4999f, -0.1268f, 0.2809f, 46.62f, 0, 0, 0, 0f, 0.1f);
	func_272(&(uParam0->f_36), 4, 0.0328f, 0.359f, 1.2283f, -89.4999f, -0.1268f, 0.2809f, 46.62f, 0, 0, 0, 0f, 0.1f);
	func_272(&(uParam0->f_36), 5, -0.0174f, -0.3798f, 2.175f, -62.243f, 0f, -0.8449f, 14.4905f, 0, 0, 0, 0f, 0.1f);
	func_272(&(uParam0->f_36), 6, 0.6349f, -0.2965f, 1.1056f, -3.4672f, 0f, 78.9368f, 37.8962f, 0, 0, 0, 0f, 0.19f);
}

void func_100(var uParam0, vector3 vParam1)
{
	uParam0->f_1 = 0;
	uParam0->f_153 = 0;
	uParam0->f_154 = 0;
	uParam0->f_155 = 0;
	uParam0->f_156 = 0;
	uParam0->f_157 = 1;
	uParam0->f_158 = 0;
	func_273(uParam0);
	func_274(uParam0);
	func_275(uParam0, vParam1);
}

void func_101(var uParam0)
{
	int iVar0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	uParam0->f_9 = -1;
	uParam0->f_10.f_3 = -93138100;
	uParam0->f_10.f_11 = 0f;
	uParam0->f_10.f_12 = 2;
	uParam0->f_10.f_13 = 1000;
	uParam0->f_10.f_14 = 1;
	uParam0->f_10.f_15 = 2;
	uParam0->f_10.f_16 = -1;
	uParam0->f_10.f_17 = 0;
	uParam0->f_10.f_39 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_50[iVar0 /*19*/] = 0;
		uParam0->f_165[iVar0 /*19*/] = 0;
		uParam0->f_280[iVar0] = 0;
		iVar0++;
	}
	func_276(&(uParam0->f_287));
	uParam0->f_1265 = 0;
	uParam0->f_1266 = 0;
	uParam0->f_1267 = 0;
	uParam0->f_1259 = 0;
	uParam0->f_1259.f_1 = 0;
	uParam0->f_1259.f_2 = 0;
	uParam0->f_1262 = 0;
	uParam0->f_1262.f_1 = 0;
	uParam0->f_1262.f_2 = 0;
	uParam0->f_1268 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1269[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_2010 = 0;
	uParam0->f_2011 = 0;
	__LIB_0__::func_37(&(uParam0->f_2012));
	uParam0->f_2031 = 0;
	uParam0->f_2031.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2041[iVar0 /*6*/] = 0;
		uParam0->f_2041[iVar0 /*6*/].f_1 = 0;
		iVar0++;
	}
	uParam0->f_2082 = 0;
	uParam0->f_2082.f_1 = 0;
	uParam0->f_2098 = 0;
	uParam0->f_2099 = 0;
	uParam0->f_2100 = 0;
	func_278(uParam0);
	func_279(uParam0);
	uParam0->f_2117 = 0;
	uParam0->f_2118 = 0;
	uParam0->f_2120 = 0;
	uParam0->f_2121 = 0;
	uParam0->f_2122 = 0;
	uParam0->f_2138 = 0;
	uParam0->f_2139 = 0;
	func_280(uParam0);
	func_281(uParam0);
	uParam0->f_2473 = 0;
	uParam0->f_2474 = 0;
	uParam0->f_2476 = 1;
	uParam0->f_2137 = 0;
	uParam0->f_2528 = 0;
	uParam0->f_2529 = 0;
	uParam0->f_2530 = 0;
	uParam0->f_2542 = -1;
	uParam0->f_2543 = -1;
	uParam0->f_2544 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2545[iVar0] = -1;
		__LIB_0__::func_37(&(uParam0->f_2559[iVar0 /*3*/]));
		iVar0++;
	}
	func_282(uParam0);
	__LIB_0__::func_37(&(uParam0->f_2639));
	uParam0->f_2653 = 0;
	func_283(&(uParam0->f_2655));
	uParam0->f_2858 = 0;
	uParam0->f_2859 = 0;
	uParam0->f_2860 = 0;
	uParam0->f_2861 = 0;
	uParam0->f_2862 = 0;
	uParam0->f_2864 = 0;
	func_284(uParam0);
	func_285(&(uParam0->f_1276));
	func_287(uParam0, 1, 32584);
	func_287(uParam0, 2, 32819);
	func_287(uParam0, 3, 32925);
	func_287(uParam0, 4, 33480);
	func_287(uParam0, 5, 35457);
	func_287(uParam0, 6, 38929);
	func_287(uParam0, 7, 39511);
	func_287(uParam0, 8, 42124);
	func_287(uParam0, 9, 43027);
	func_287(uParam0, 10, 44000);
	func_287(uParam0, 11, 49592);
	func_287(uParam0, 12, 51511);
	func_287(uParam0, 13, 53617);
	func_287(uParam0, 14, 53826);
	func_302(uParam0, 1, 53896);
	func_302(uParam0, 2, 54641);
	func_305(uParam0, 2, 56066);
	func_305(uParam0, 3, 56328);
	func_305(uParam0, 4, 58613);
	func_305(uParam0, 1, 59475);
	func_310(uParam0, 1, 59535);
	func_310(uParam0, 2, 59861);
	func_310(uParam0, 3, 63577);
	func_314(uParam0, 1, 64833);
	func_314(uParam0, 2, 64993);
	func_314(uParam0, 3, 65134);
}

void func_102(var uParam0, int iParam1)
{
	uParam0->f_691 = iParam1;
	__LIB_9__::func_934(&(uParam0->f_692), uParam0->f_691);
	__LIB_9__::func_935(&(uParam0->f_694), uParam0->f_691);
	__LIB_4__::func_879(&(uParam0->f_693), __LIB_9__::func_930(), uParam0->f_691, 0);
}

void func_103(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 76:
			func_321(&(uParam0->f_3310), -307.1723f, 796.1072f, 117.9627f);
			func_321(&(uParam0->f_3310), -312.5649f, 809.5051f, 117.9771f);
			func_321(&(uParam0->f_3310), -305.9782f, 811.3005f, 117.9807f);
			func_321(&(uParam0->f_3310), -312.6757f, 802.9134f, 117.9805f);
			func_321(&(uParam0->f_3310), -310.7475f, 796.211f, 117.9675f);
			func_321(&(uParam0->f_3310), -308.5533f, 797.4734f, 117.9642f);
			func_321(&(uParam0->f_3310), -305.9204f, 798.1023f, 117.9606f);
			func_321(&(uParam0->f_3310), -307.3433f, 797.2706f, 117.9627f);
			func_321(&(uParam0->f_3310), -301.5801f, 792.1054f, 117.1054f);
			func_322(&(uParam0->f_3310), -306.8107f, 793.4584f, 116.9747f);
			break;
		case 5:
			func_321(&(uParam0->f_3310), 2626.753f, -1219.197f, 52.2514f);
			func_321(&(uParam0->f_3310), 2637.419f, -1224.354f, 52.3804f);
			func_321(&(uParam0->f_3310), 2637.921f, -1229.526f, 52.3804f);
			func_321(&(uParam0->f_3310), 2633.379f, -1233.32f, 53.1887f);
			func_321(&(uParam0->f_3310), 2635.423f, -1220.865f, 52.3804f);
			func_321(&(uParam0->f_3310), 2630.454f, -1217.621f, 52.2645f);
			func_321(&(uParam0->f_3310), 2624.762f, -1222.479f, 52.2391f);
			func_322(&(uParam0->f_3310), 2627.455f, -1219.955f, 52.2466f);
			break;
		case 115:
			func_321(&(uParam0->f_3310), -5512.044f, -2910.505f, 0.6699f);
			func_321(&(uParam0->f_3310), -5515.198f, -2911.668f, 0.6704f);
			func_321(&(uParam0->f_3310), -5512.416f, -2918.883f, 0.6517f);
			func_322(&(uParam0->f_3310), -5514.41f, -2918.763f, 0.6464f);
			break;
		case 38:
			func_321(&(uParam0->f_3310), -811.3929f, -1324.61f, 42.6781f);
			func_321(&(uParam0->f_3310), -817.068f, -1322.638f, 42.6789f);
			func_321(&(uParam0->f_3310), -821.1555f, -1315.399f, 42.6789f);
			func_321(&(uParam0->f_3310), -807.1668f, -1312.655f, 42.6624f);
			func_321(&(uParam0->f_3310), -808.6184f, -1309.705f, 42.6567f);
			func_321(&(uParam0->f_3310), -808.018f, -1319.517f, 42.6661f);
			func_322(&(uParam0->f_3310), -809.1511f, -1312.746f, 42.6682f);
			break;
		case 75:
			func_321(&(uParam0->f_3310), -321.8182f, -358.8911f, 87.0173f);
			func_321(&(uParam0->f_3310), -322.9761f, -356.7132f, 87.001f);
			func_321(&(uParam0->f_3310), -324.3805f, -353.8069f, 86.9829f);
			func_321(&(uParam0->f_3310), -332.2454f, -354.9357f, 87.0182f);
			func_321(&(uParam0->f_3310), -338.1316f, -356.5013f, 87.0331f);
			func_321(&(uParam0->f_3310), -334.125f, -356.3169f, 87.0035f);
			func_321(&(uParam0->f_3310), -335.3971f, -361.9433f, 87.0766f);
			func_321(&(uParam0->f_3310), -338.2805f, -359.7622f, 87.0718f);
			func_321(&(uParam0->f_3310), -340.7805f, -362.6811f, 87.048f);
			func_321(&(uParam0->f_3310), -341.2767f, -360.5272f, 87.0055f);
			func_322(&(uParam0->f_3310), -324.0977f, -357.0095f, 86.9931f);
			break;
	}
}

void func_104()
{
	__LIB_1__::func_532(Global_1835011[34 /*74*/].f_1, 0);
	__LIB_7__::func_448(Global_1835011[34 /*74*/].f_1, 0);
}

void func_106()
{
	__LIB_1__::func_532(Global_1835011[10 /*74*/].f_1, 0);
	__LIB_7__::func_448(Global_1835011[10 /*74*/].f_1, 0);
}

void func_109(var uParam0, int iParam1)
{
	if (!*uParam0)
	{
		*uParam0 = 1;
		uParam0->f_7 = iParam1;
		CAM::_0x6A4D224FC7643941("table_games_cam");
		STREAMING::REQUEST_MODEL(joaat("P_COIN01X"), false);
	}
}

void func_110(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	__LIB_12__::func_312(iParam1, &iVar0);
	func_331(uParam0, 2, 0, iVar0);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		func_332(uParam0, iVar1, "", "", 0, 0);
		iVar1++;
	}
	AUDIO::_0xD9130842D7226045("HUD_POKER", 0);
}

void func_111(var uParam0)
{
	if (__LIB_12__::func_292(uParam0, 1))
	{
		HUD::_TEXT_DATABASE_REQUEST("PKRAUD");
	}
}

bool func_116(var uParam0)
{
	if (!AUDIO::_0xD9130842D7226045("HUD_POKER", 0))
	{
		return false;
	}
	if (uParam0->f_1 == 4)
	{
		return true;
	}
	return false;
}

bool func_117(var uParam0)
{
	if (__LIB_12__::func_292(uParam0, 1))
	{
		return HUD::_TEXT_DATABASE_HAS_LOADED("PKRAUD");
	}
	return true;
}

void func_118(var uParam0, int iParam1)
{
	switch (uParam0->f_2653)
	{
		case 0:
			break;
		case 1:
			HUD::_DISPLAY_HUD_COMPONENT(1920936087);
			break;
		case 2:
			HUD::_DISPLAY_HUD_COMPONENT(372886907);
			break;
		case 3:
			break;
	}
	uParam0->f_2653 = iParam1;
	switch (uParam0->f_2653)
	{
		case 0:
			break;
		case 1:
			HUD::_HIDE_HUD_COMPONENT(1920936087);
			break;
		case 2:
			HUD::_HIDE_HUD_COMPONENT(372886907);
			break;
		case 3:
			break;
	}
}

void func_121(var uParam0)
{
	__LIB_19__::func_587(&(uParam0->f_3310), 1);
	func_338(&(uParam0->f_2979));
}

int func_125(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_353(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
			func_362(iParam0, Global_1360165[iParam0 /*1157*/]);
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

int func_129(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar0 = __LIB_7__::func_735(uParam0->f_1.f_38, iVar1);
		if (!PED::IS_PED_INJURED(iVar0) && uParam0->f_114.f_9 != iVar1)
		{
			func_366(&(uParam0->f_2979), iVar1, iVar0);
		}
		iVar1++;
	}
	func_366(&(uParam0->f_2979), uParam0->f_114.f_9, Global_35);
	return 1;
}

int func_130(var uParam0, var uParam1)
{
	if (!func_367(&(uParam0->f_2979)))
	{
		return 0;
	}
	return 1;
}

void func_131(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	func_368(uParam0, uParam1);
	if (!__LIB_12__::func_292(uParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			iVar0 = uParam0->f_1.f_3.f_23[iVar1];
			if (!PED::IS_PED_INJURED(iVar0) && uParam0->f_114.f_9 != iVar1)
			{
				func_366(&(uParam0->f_2979), iVar1, iVar0);
			}
			iVar1++;
		}
		func_366(&(uParam0->f_2979), uParam0->f_114.f_9, Global_35);
	}
}

int func_132(var uParam0, var uParam1)
{
	if (!func_369(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_133(var uParam0, var uParam1)
{
	int iVar0;
	uParam0->f_114.f_2116 = 0;
	func_368(uParam0, uParam1);
	func_370(&(uParam0->f_114));
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_143(uParam1, iVar0) && func_371(&(uParam0->f_114), iVar0) == 1)
		{
			func_373(&(uParam0->f_2979), iVar0, func_372(&(uParam0->f_114), iVar0));
		}
		iVar0++;
	}
}

int func_134(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	iVar0 = uParam0->f_114.f_2116;
	if (iVar0 < 6)
	{
		if (!func_143(uParam1, iVar0))
		{
			uParam0->f_114.f_2116++;
		}
		else if (func_371(&(uParam0->f_114), iVar0) == 0)
		{
			return 0;
		}
		else if (func_371(&(uParam0->f_114), iVar0) != 1)
		{
			return 0;
		}
		else
		{
			iVar3 = func_372(&(uParam0->f_114), iVar0);
			if (!func_374(uParam0, iVar0, iVar3, &iVar1, &uVar2))
			{
				return 0;
			}
			else
			{
				func_375(&(uParam0->f_114), iVar0, iVar1, uParam0->f_114.f_9 != iVar0);
				uParam0->f_114.f_2116++;
			}
		}
	}
	if (uParam0->f_114.f_2116 >= 6)
	{
		if (func_369(uParam0) && func_367(&(uParam0->f_2979)))
		{
			return 1;
		}
	}
	return 0;
}

void func_135(var uParam0)
{
	if (!uParam0->f_2098)
	{
		uParam0->f_2098 = 1;
	}
}

var func_136(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	func_212(&(uParam1->f_1276));
	func_137(uParam1);
	while ((func_138(uParam1, 1246061318, 1) || func_138(uParam1, 287982460, 1)) || func_376(uParam1, -1043649719, 0, 1))
	{
		func_141(uParam1, 1, 0, 0);
	}
	if (func_376(uParam1, 1995414514, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_377(uParam1, iVar0, 1))
			{
				if (uParam1->f_2041[iVar0 /*6*/] == 0)
				{
					if (func_143(&(uParam1->f_773), iVar0))
					{
						func_378(uParam0, uParam1, iVar0, 1, 1);
					}
					else
					{
						func_378(uParam0, uParam1, iVar0, 2, 1);
					}
				}
			}
			iVar0++;
		}
	}
	if (func_138(uParam1, 1959158395, 1) || uParam1->f_2098)
	{
		if (uParam1->f_2031 == 0)
		{
			func_379(uParam0, uParam1);
		}
	}
	if (uParam1->f_2031 != 0)
	{
		func_380(uParam0, uParam1);
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (uParam1->f_2041[iVar1 /*6*/] != 0)
		{
			func_381(uParam0, uParam1, iVar1);
		}
		iVar1++;
	}
	if (uParam0->f_114.f_2082 != 0)
	{
		func_382(uParam0, &(uParam0->f_114));
	}
	if (func_383(uParam1, 1))
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (func_384(uParam1, iVar1, 1))
			{
				func_385(uParam1, iVar1);
				func_170(&(uParam0->f_3310), iVar1, func_144(&(uParam1->f_287), iVar1), 1);
			}
			iVar1++;
		}
	}
	if (!uParam1->f_2117)
	{
		if (((func_143(&(uParam1->f_287), uParam1->f_9) && func_144(&(uParam1->f_287), uParam1->f_9) == 0) && __LIB_0__::func_492(1) >= func_145(uParam0, uParam1->f_10.f_12)) && ((uParam1->f_2010 == 3 || uParam1->f_2010 == 11) || !func_387(&(uParam1->f_287), uParam1->f_9)))
		{
			if (!func_388(&(uParam0->f_2979)))
			{
				func_389(&(uParam0->f_2979), &(uParam1->f_10));
			}
			else if (func_390(&(uParam0->f_2979), &(uParam1->f_10)))
			{
				if (func_392(uParam1, uParam1->f_9, func_391(&(uParam0->f_2979))))
				{
					uParam1->f_2117 = 1;
					uParam1->f_2118 = func_391(&(uParam0->f_2979));
					func_393(&(uParam0->f_2979));
				}
			}
		}
		else if (func_388(&(uParam0->f_2979)))
		{
			func_393(&(uParam0->f_2979));
		}
	}
	else if (!func_143(&(uParam1->f_287), uParam1->f_9))
	{
		uParam1->f_2117 = 0;
	}
	else if (func_144(&(uParam1->f_287), uParam1->f_9) >= 0)
	{
		uParam1->f_2117 = 0;
		__LIB_2__::func_522(func_145(uParam0, func_144(&(uParam1->f_287), uParam1->f_9)), 0, 0, 1, 1);
	}
	func_394(uParam0);
	iVar2 = 0;
	bVar3 = true;
	while (bVar3)
	{
		bVar3 = false;
		if (uParam1->f_2010 != 0)
		{
			Stack.Push(uParam0);
			Stack.Push(&(uParam1->f_287));
			Call_Loc(uParam1->f_2015[uParam1->f_2010]);
			if (StackVal)
			{
				iVar2++;
				bVar3 = true;
			}
		}
		if (iVar2 > 50)
		{
		}
	else
	{
		}
	}
	func_395(uParam0);
	return uParam1->f_2031;
}

void func_137(var uParam0)
{
	int iVar0;
	struct<2> Var1;
	if (uParam0->f_1259 == 0)
	{
		uParam0->f_1259 = MINIGAME::_0xE53A308AC35877A8();
		if (uParam0->f_1259 != 0)
		{
			if (uParam0->f_1259 == -1857735811)
			{
				Var1.f_1.f_15 = 11;
				Var1.f_1.f_39 = 6;
				Var1.f_1.f_39.f_1.f_7 = 11;
				Var1.f_1.f_39.f_1.f_31 = 11;
				Var1.f_1.f_39.f_1.f_56.f_7 = 11;
				Var1.f_1.f_39.f_1.f_56.f_31 = 11;
				Var1.f_1.f_39.f_1.f_56.f_56.f_7 = 11;
				Var1.f_1.f_39.f_1.f_56.f_56.f_31 = 11;
				Var1.f_1.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
				Var1.f_1.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
				Var1.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
				Var1.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
				Var1.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
				Var1.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
				Var1.f_1.f_376 = 6;
				Var1.f_1.f_376.f_1.f_2 = 6;
				Var1.f_1.f_376.f_1.f_10 = 6;
				Var1.f_1.f_376.f_1.f_18.f_2 = 6;
				Var1.f_1.f_376.f_1.f_18.f_10 = 6;
				Var1.f_1.f_376.f_1.f_18.f_18.f_2 = 6;
				Var1.f_1.f_376.f_1.f_18.f_18.f_10 = 6;
				Var1.f_1.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
				Var1.f_1.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
				Var1.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
				Var1.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
				Var1.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
				Var1.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
				if (!MINIGAME::_0x580F34C726387226(&Var1, 487))
				{
					return;
				}
				uParam0->f_773 = { Var1.f_1 };
				uParam0->f_1259.f_1 = Var1.f_1.f_1;
				uParam0->f_1259.f_2 = 0;
				switch (uParam0->f_1259.f_1)
				{
					case 1995414514:
						iVar0 = 0;
						while (iVar0 < 6)
						{
							if (func_143(&(uParam0->f_287), iVar0) != func_143(&(Var1.f_1), iVar0))
							{
								MISC::SET_BIT(&(uParam0->f_1259.f_2), iVar0);
							}
							iVar0++;
						}
						break;
					case 1592704673:
						iVar0 = 0;
						while (iVar0 < 6)
						{
							if (func_144(&(uParam0->f_287), iVar0) < func_144(&(Var1.f_1), iVar0))
							{
								MISC::SET_BIT(&(uParam0->f_1259.f_2), iVar0);
							}
							iVar0++;
						}
						break;
				}
			}
		}
	}
}

bool func_138(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (uParam0->f_2136)
		{
			return false;
		}
	}
	if (iParam1 == 0)
	{
	}
	else if (uParam0->f_1259 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_139(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_2136)
		{
			return false;
		}
	}
	return uParam0->f_1259 != 0;
}

int func_140(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_2136)
		{
			return 0;
		}
	}
	return uParam0->f_1259;
}

void func_141(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (uParam0->f_1259 == 0)
	{
	}
	else
	{
		if (bParam1)
		{
			if ((uParam0->f_1259 == -1857735811 && uParam0->f_1259.f_1 == 1995414514) && uParam0->f_1259.f_2 != 0)
			{
				return;
			}
		}
		if (iParam2 != 0 && iParam2 != uParam0->f_1259)
		{
			return;
		}
		if (iParam3 != 0 && iParam3 != uParam0->f_1259.f_1)
		{
			return;
		}
		uParam0->f_1262 = { uParam0->f_1259 };
		switch (uParam0->f_1259)
		{
			case -1553724839:
				func_396(uParam0);
				break;
			case 1959158395:
				func_397(uParam0);
				break;
			case 1246061318:
				func_398(uParam0);
				break;
			case 287982460:
				func_399(uParam0);
				break;
			case -1857735811:
				func_400(uParam0, &(uParam0->f_773));
				break;
			case -1657573670:
			case -1267385353:
			case 308196724:
				__LIB_12__::func_314();
				break;
			default:
				break;
		}
		func_402(uParam0);
		func_137(uParam0);
	}
}

bool func_142(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_2137, iParam1);
}

bool func_143(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 6) && uParam0->f_39[iParam1 /*56*/] != -1)
	{
		return true;
	}
	return false;
}

int func_144(var uParam0, int iParam1)
{
	return uParam0->f_39[iParam1 /*56*/].f_2;
}

int func_145(var uParam0, int iParam1)
{
	return (iParam1 * uParam0->f_114.f_2476);
}

bool func_148(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 6) && uParam0->f_785[iParam1 /*52*/] != 0)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_785[iParam1 /*52*/]))
		{
			return true;
		}
	}
	return false;
}

int func_149(var uParam0, int iParam1)
{
	return uParam0->f_785[iParam1 /*52*/];
}

void func_152(var uParam0)
{
	func_410(uParam0);
	func_411(&(uParam0->f_114));
	func_412(&(uParam0->f_114), &(uParam0->f_3310));
	__LIB_12__::func_317(&(uParam0->f_114.f_1276));
	uParam0->f_114 = 0;
}

void func_154(var uParam0)
{
	if (uParam0->f_1)
	{
		func_423(uParam0);
	}
	func_424(&(uParam0->f_36));
	__LIB_12__::func_324(uParam0);
}

void func_155(var uParam0)
{
	__LIB_0__::func_105(1);
	__LIB_0__::func_11(uParam0);
	func_427(uParam0);
	func_428(uParam0);
	if (uParam0->f_1 != 0 && uParam0->f_1 != 5)
	{
		func_429(uParam0);
	}
}

void func_157(var uParam0)
{
	if (__LIB_12__::func_292(uParam0, 1))
	{
		HUD::_TEXT_DATABASE_DELETE("PKRAUD");
	}
}

int func_159(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (uParam0->f_777 != -1)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (iParam2 >= 0 && iParam2 < 6)
		{
			iVar0 = uParam0->f_785[iParam2 /*52*/];
		}
		if (iParam3 >= 0 && iParam3 < 6)
		{
			iVar1 = uParam0->f_785[iParam3 /*52*/];
		}
		if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_777, sParam1, iVar0, iVar1, uParam0->f_40))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_160(var uParam0)
{
	uParam0->f_2147.f_118 = 1;
}

void func_163(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_114.f_10.f_3 = -93138100;
	uParam0->f_114.f_10.f_12 = iParam2;
	uParam0->f_114.f_10.f_13 = iParam2;
	uParam0->f_114.f_10.f_14 = 1;
	uParam0->f_114.f_10.f_15 = 2;
	func_431(uParam0, iParam1);
}

int func_166(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_1276.f_537 != -1)
	{
		return 0;
	}
	func_434(&(uParam0->f_1276), iParam1, iParam2, iParam3, 1);
	func_435(&(uParam0->f_1276), 1995414514);
	func_137(uParam0);
	if (!func_138(uParam0, -1553724839, 1))
	{
		return 0;
	}
	else
	{
		func_141(uParam0, 0, 0, 0);
	}
	if (!func_376(uParam0, 1995414514, 1, 1))
	{
		return 0;
	}
	else
	{
		func_141(uParam0, 0, 0, 0);
	}
	return 1;
}

bool func_167(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, bool bParam11, bool bParam12)
{
	if (__LIB_19__::func_237(uParam0, iParam1, iParam2, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9))
	{
		if (iParam3 == 0)
		{
			__LIB_19__::func_238(uParam0, iParam1);
		}
		else if (!bParam11)
		{
			__LIB_19__::func_239(uParam0, iParam1, iParam3, fParam10);
		}
		else
		{
			__LIB_19__::func_240(uParam0, iParam1, bParam12);
		}
		return true;
	}
	return false;
}

void func_168(var uParam0, int iParam1)
{
	if (!uParam0->f_785[iParam1 /*52*/].f_40 && !uParam0->f_785[iParam1 /*52*/].f_41)
	{
		uParam0->f_785[iParam1 /*52*/].f_41 = 1;
	}
}

void func_169(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	if (uParam0->f_2147[iParam1 /*13*/])
	{
	}
	else
	{
		iVar0 = func_144(&(uParam0->f_287), iParam1);
		uParam0->f_2147[iParam1 /*13*/] = 1;
		uParam0->f_2147[iParam1 /*13*/].f_2 = 0;
		uParam0->f_2147[iParam1 /*13*/].f_3 = 0;
		uParam0->f_2147[iParam1 /*13*/].f_1 = iVar0;
		uParam0->f_2147[iParam1 /*13*/].f_4 = MISC::GET_RANDOM_INT_IN_RANGE(8, 13);
		fVar1 = 1f;
		fVar2 = 0f;
		if (uParam0->f_2147.f_126 > 0)
		{
			fVar1 = __LIB_9__::func_231((BUILTIN::TO_FLOAT(iVar0) / BUILTIN::TO_FLOAT(uParam0->f_2147.f_125)), 0, 1065353216 /* Float: 1f */);
		}
		uParam0->f_2147[iParam1 /*13*/].f_5 = fVar1;
		uParam0->f_2147[iParam1 /*13*/].f_6 = fVar2;
		uParam0->f_2147[iParam1 /*13*/].f_7 = ((1f - fVar1) + ((fVar2 * 0.5f) * fVar1));
	}
}

void func_170(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar5;
	__LIB_0__::func_11(uParam0, iParam1, "OLD", "CREATE_BANK_STACKS_TO_VALUE()");
	uVar0 = 4;
	uVar5 = 4;
	__LIB_12__::func_252(iParam2, &uVar0, &uVar5);
	func_442(uParam0, iParam1, &uVar0, &uVar5, bParam3);
	__LIB_0__::func_11(uParam0, iParam1, "NEW", 0);
}

void func_171(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_213(&(uParam0->f_114), 1, 0);
	}
	else
	{
		func_213(&(uParam0->f_114), 3, 0);
	}
}

int func_173(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		iParam1 = (iParam1 - 1);
		if (iParam1 < 0)
		{
			iParam1 += 6;
		}
	}
	if (uParam0->f_1259 != 0)
	{
		return 0;
	}
	if (!func_443(&(uParam0->f_1276)))
	{
		return 0;
	}
	if (!func_444(&(uParam0->f_1276), iParam1))
	{
		return 0;
	}
	func_212(&(uParam0->f_1276));
	func_137(uParam0);
	if (!func_376(uParam0, -1043649719, 1, 1))
	{
		return 0;
	}
	func_141(uParam0, 1, 0, 0);
	return 1;
}

void func_174(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_774))
	{
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_774, uParam0->f_1137[iParam1 /*3*/], uParam0->f_1156[iParam1 /*3*/], 2);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_774);
	}
	uParam0->f_780 = 1;
}

void func_175(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_2137), iParam1);
}

void func_176(int iParam0)
{
	int iVar0;
	char cVar1[64];
	iVar0 = __LIB_8__::func_759(iParam0);
	if (iVar0 <= 10)
	{
		if (iVar0 <= 1)
		{
			StringCopy(&cVar1, "MG_HELP_UPDATED", 64);
		}
		else
		{
			StringCopy(&cVar1, "MG_HELP_REMINDER", 64);
		}
		switch (iParam0)
		{
			case 1:
				__LIB_7__::func_380(__LIB_4__::func_882(iParam0), &cVar1, joaat("TOAST_LOG_BLIPS"), joaat("BLIP_MG_DOMINOES"), MISC::GET_HASH_KEY("help_menu"), "INPUT_FEED_INTERACT_GENERIC", joaat("DOMINOES"), -2, 0, 0, 0, 0, 1, 1);
				break;
			case 3:
				__LIB_7__::func_380(__LIB_4__::func_882(iParam0), &cVar1, joaat("TOAST_LOG_BLIPS"), joaat("BLIP_MG_FIVE_FINGER_FILLET"), MISC::GET_HASH_KEY("help_menu"), "INPUT_FEED_INTERACT_GENERIC", -1280897372, -2, 0, 0, 0, 0, 1, 1);
				break;
			case 2:
				__LIB_7__::func_380(__LIB_4__::func_882(iParam0), &cVar1, joaat("TOAST_LOG_BLIPS"), joaat("BLIP_MG_POKER"), MISC::GET_HASH_KEY("help_menu"), "INPUT_FEED_INTERACT_GENERIC", joaat("POKER"), -2, 0, 0, 0, 0, 1, 1);
				break;
			case 0:
				__LIB_7__::func_380(__LIB_4__::func_882(iParam0), &cVar1, joaat("TOAST_LOG_BLIPS"), joaat("BLIP_MG_BLACKJACK"), MISC::GET_HASH_KEY("help_menu"), "INPUT_FEED_INTERACT_GENERIC", joaat("BLACKJACK"), -2, 0, 0, 0, 0, 1, 1);
				break;
		}
	}
}

int func_178(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (Global_1899528.f_61.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	*uParam2 = Global_1899528.f_61.f_35[iParam1];
	*uParam3 = Global_1899528.f_61.f_68[iParam1];
	return Global_1899528.f_61.f_101[iParam1];
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_73[iParam1 /*30*/][iParam2]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_73[iParam1 /*30*/][iParam2]));
		AUDIO::_0x341CDD17EFC2472E(iParam1, iParam2);
		uParam0->f_73[iParam1 /*30*/][iParam2] = 0;
	}
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam3, true, true);
	ENTITY::SET_ENTITY_COLLISION(iParam3, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam3, true);
	AUDIO::_0x06C5DF5EE444BC6B(iParam1, iParam2, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
	uParam0->f_73[iParam1 /*30*/][iParam2] = iParam3;
	uParam0->f_73[iParam1 /*30*/].f_5[iParam2] = uParam4;
	uParam0->f_73[iParam1 /*30*/].f_10[iParam2] = uParam5;
}

void func_181(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_688))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_688));
	}
	uParam0->f_688 = 0;
	ENTITY::SET_ENTITY_COLLISION(iParam3, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam3, true);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam3, true, true);
	uParam0->f_688 = iParam3;
	uParam0->f_688.f_1 = iParam1;
	uParam0->f_688.f_2 = iParam2;
}

int func_183(var uParam0, int iParam1)
{
	int iVar0;
	if (iParam1 != -1)
	{
		iVar0 = ((uParam0->f_1.f_37 * 6 + iParam1) % 23);
		return (28 + iVar0);
	}
	return func_448(&(uParam0->f_114));
}

int func_184(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (uParam0->f_1259 != 0)
	{
		return 0;
	}
	if (!func_449(&(uParam0->f_1276), iParam1, iParam2, iParam3))
	{
		return 0;
	}
	func_212(&(uParam0->f_1276));
	func_137(uParam0);
	if (func_138(uParam0, 1246061318, 0))
	{
		func_141(uParam0, 1, 0, 0);
	}
	if (!func_377(uParam0, iParam1, 0))
	{
		return 0;
	}
	if (bParam4)
	{
		func_141(uParam0, 0, 0, 0);
	}
	return 1;
}

void func_185(var uParam0, int iParam1)
{
	var uVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;
	iVar16 = 0;
	while (iVar16 < 6)
	{
		uVar0[uParam0->f_90[iVar16]]++;
		iVar16++;
	}
	iVar17 = uVar0[5];
	iVar18 = 5;
	while (iVar18 <= 8)
	{
		if (iVar17 < uVar0[iVar18])
		{
			iVar17 = uVar0[iVar18];
		}
		iVar18++;
	}
	iVar18 = MISC::GET_RANDOM_INT_IN_RANGE(5, 8 + 1);
	while (uVar0[iVar18] > iVar17)
	{
		iVar18++;
		if (iVar18 > 8)
		{
			iVar18 = 5;
		}
	}
	uParam0->f_90[iParam1] = iVar18;
}

void func_187(var uParam0, int iParam1)
{
	if (uParam0->f_2473)
	{
		return;
	}
	uParam0->f_2474 = iParam1;
}

bool func_188(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (*iParam1 < 0 || *iParam1 >= 6)
	{
		*iParam1 = -1;
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam3 == 0)
		{
			if (*iParam1 == uParam0->f_3)
			{
				*iParam1 = -1;
				return false;
			}
		}
		*iParam1 = (*iParam1 + 1 % 6);
		if (func_387(uParam0, *iParam1) && uParam0->f_39[*iParam1 /*56*/].f_6 == iParam2)
		{
			return true;
		}
		iVar0++;
	}
	*iParam1 = -1;
	return false;
}

void func_189(var uParam0, bool bParam1)
{
	uParam0->f_321 = __LIB_1__::func_877("MGPKR_UI_HOLE", joaat("INPUT_MINIGAME_POKER_YOUR_CARDS"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
	__LIB_1__::func_522(uParam0->f_321, 14, 1, 1);
	__LIB_1__::func_522(uParam0->f_321, 17, 1, 1);
	uParam0->f_322 = __LIB_1__::func_877("MGPKR_UI_BOARD", joaat("INPUT_MINIGAME_POKER_COMMUNITY_CARDS"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
	__LIB_1__::func_522(uParam0->f_322, 14, 1, 1);
	__LIB_1__::func_522(uParam0->f_322, 17, 1, 1);
	uParam0->f_327 = __LIB_1__::func_877("MGPKR_UI_FREE_LOOK", joaat("INPUT_PC_FREE_LOOK"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
	__LIB_1__::func_522(uParam0->f_327, 14, 1, 1);
	__LIB_1__::func_522(uParam0->f_327, 17, 1, 1);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_PC_FREE_LOOK"), false);
	if (bParam1)
	{
		uParam0->f_323 = __LIB_1__::func_877("MGPKR_UI_STRAUSS", joaat("INPUT_MINIGAME_POKER_SKIP"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		__LIB_1__::func_522(uParam0->f_323, 17, 1, 1);
	}
}

void func_190(var uParam0, int iParam1)
{
	func_452(&(uParam0->f_1276), iParam1);
}

bool func_191(var uParam0, int iParam1, int iParam2)
{
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_73[iParam1 /*30*/][iParam2]);
}

var func_192(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_73[iParam1 /*30*/][iParam2];
}

int func_193(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_73[iParam1 /*30*/].f_5[iParam2];
}

int func_194(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_73[iParam1 /*30*/].f_10[iParam2];
}

void func_196(var uParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_73[iParam1 /*30*/][iParam2]))
	{
		AUDIO::_0x341CDD17EFC2472E(iParam1, iParam2);
	}
	uParam0->f_73[iParam1 /*30*/][iParam2] = 0;
	uParam0->f_73[iParam1 /*30*/].f_5[iParam2] = 0;
	uParam0->f_73[iParam1 /*30*/].f_10[iParam2] = 0;
}

bool func_197(var uParam0)
{
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_688);
}

void func_199(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_688))
	{
		uParam0->f_688 = 0;
	}
}

bool func_202(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_785[iParam1 /*52*/].f_8 == iParam2)
	{
		return true;
	}
	return false;
}

var func_204(var uParam0, int iParam1)
{
	return uParam0->f_785[iParam1 /*52*/].f_6;
}

var func_205(var uParam0, int iParam1)
{
	return uParam0->f_785[iParam1 /*52*/].f_7;
}

void func_206(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)
{
	Global_1899528.f_61.f_1 = iParam0;
	if (iParam2 < 6)
	{
		Global_1899528.f_61.f_134[iParam2] = iParam1;
		Global_1899528.f_61.f_7[iParam2] = iParam3;
		Global_1899528.f_61.f_14[iParam2] = iParam4;
		Global_1899528.f_61.f_21[iParam2] = uParam5;
		Global_1899528.f_61.f_28[iParam2] = uParam6;
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
	}
}

void func_209(var uParam0, var uParam1, bool bParam2)
{
	if (uParam0->f_1)
	{
	}
	else if (!CAM::_0xDD0B7C5AE58F721D("table_games_cam"))
	{
	}
	else if (!STREAMING::HAS_MODEL_LOADED(joaat("P_COIN01X")))
	{
	}
	else
	{
		uParam0->f_9.f_17 = OBJECT::CREATE_OBJECT(joaat("P_COIN01X"), *uParam1 + Vector(0.825f, 0f, 0f), false, true, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_9.f_17))
		{
			return;
		}
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_9.f_17, false);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_9.f_17, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_9.f_17, true);
		StringCopy(&(uParam0->f_9), "table_games_cam", 64);
		uParam0->f_9.f_16 = -1774795398;
		if (!bParam2)
		{
			StringCopy(&(uParam0->f_9.f_8), "CAMERA_TABLE_GAMES_REQUEST", 64);
		}
		else
		{
			StringCopy(&(uParam0->f_9.f_8), "CAMERA_TABLE_GAMES_CUT_REQUEST", 64);
		}
		CAM::_0xB8B207C34285E978(&(uParam0->f_9));
		func_462(&(uParam0->f_36));
		uParam0->f_1 = 1;
		func_218(uParam0, 0, 0, -1, -1, 0);
		if (CAM::_0xA24C1D341C6E0D53(1, 0, 0) && CAM::_0xD1BA66940E94C547())
		{
			GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(func_463(uParam0->f_7), 5f);
			uParam0->f_8 = 1;
		}
	}
}

int func_211(var uParam0, int iParam1)
{
	if (uParam0->f_1259 != 0)
	{
		return 0;
	}
	if (!func_443(&(uParam0->f_1276)))
	{
		return 0;
	}
	if (!func_464(&(uParam0->f_1276), iParam1))
	{
		return 0;
	}
	func_212(&(uParam0->f_1276));
	func_137(uParam0);
	if (!func_376(uParam0, -1043649719, 1, 1))
	{
		return 0;
	}
	func_141(uParam0, 1, 0, 0);
	return 1;
}

void func_212(var uParam0)
{
	bool bVar0;
	int iVar1;
	func_465(uParam0);
	func_466(uParam0);
	func_467(uParam0);
	bVar0 = true;
	iVar1 = 0;
	while (bVar0 && uParam0->f_536 == 0)
	{
		bVar0 = func_468(uParam0);
		if (bVar0 && uParam0->f_536 == 0)
		{
			iVar1++;
			if (iVar1 > 30)
			{
			}
		else
		{
			}
		}
	}
}

void func_213(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2010 = iParam1;
	uParam0->f_2011 = iParam2;
	__LIB_1__::func_148(&(uParam0->f_2012));
}

void func_214(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!uParam0->f_114.f_2473)
	{
		func_187(&(uParam0->f_114), uParam1->f_3);
	}
	if (bParam2)
	{
		func_217(&(uParam0->f_3310), uParam0->f_114.f_2474, 0);
	}
	if (bParam3)
	{
		bVar2 = false;
		if ((uParam0->f_114.f_2010 == 4 || uParam0->f_114.f_2010 == 5) || uParam0->f_114.f_2010 == 6)
		{
			bVar2 = true;
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_143(uParam1, iVar0))
			{
				func_470(&(uParam0->f_3310), iVar0, func_144(uParam1, iVar0), func_469(uParam1, iVar0), bVar2, 0);
			}
			else
			{
				func_470(&(uParam0->f_3310), iVar0, 0, 0, 0, 0);
			}
			iVar0++;
		}
	}
	iVar1 = 0;
	while (iVar1 < uParam1->f_15.f_23)
	{
		func_471(&(uParam0->f_3310), iVar1, uParam0->f_114.f_2474, 1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_472(uParam1, iVar0))
		{
			if (uParam0->f_114.f_9 == iVar0)
			{
				func_473(&(uParam0->f_3310), iVar0, 2, 0, 1);
			}
			else
			{
				func_474(&(uParam0->f_3310), iVar0, 2, 0);
			}
		}
		else if (func_475(uParam1, iVar0))
		{
			if (uParam0->f_114.f_9 == iVar0)
			{
				func_473(&(uParam0->f_3310), iVar0, 5, uParam0->f_114.f_2474, 1);
			}
			else
			{
				func_474(&(uParam0->f_3310), iVar0, 5, uParam0->f_114.f_2474);
			}
		}
		else if (func_476(uParam1, iVar0))
		{
			func_473(&(uParam0->f_3310), iVar0, 3, 0, 1);
		}
		iVar0++;
	}
}

void func_215(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2655.f_90[iParam1] = iParam2;
}

void func_216(var uParam0, int iParam1)
{
	uParam0->f_2473 = 1;
	uParam0->f_2474 = iParam1;
}

int func_217(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_688))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_688));
	}
	uParam0->f_688 = 0;
	if (!func_477(uParam0, iParam1, iParam2, &vVar0, &vVar3, 1))
	{
		return 0;
	}
	iVar6 = OBJECT::CREATE_OBJECT(uParam0->f_694, vVar0, false, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COORDS(iVar6, vVar0, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(iVar6, vVar3, 2, true);
	ENTITY::SET_ENTITY_COLLISION(iVar6, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iVar6, true);
	uParam0->f_688 = iVar6;
	uParam0->f_688.f_1 = iParam1;
	uParam0->f_688.f_2 = iParam2;
	return 1;
}

void func_218(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!uParam0->f_1)
	{
	}
	else if (!CAM::_0x927B810E43E99932(&(uParam0->f_9)))
	{
	}
	else
	{
		if ((uParam0->f_2 == 3 || uParam0->f_2 == 4) || uParam0->f_2 == 1)
		{
			if (iParam1 == 2)
			{
				func_478(&(uParam0->f_36), MISC::GET_FRAME_COUNT() + 1);
			}
			else
			{
				func_479(&(uParam0->f_36), 0);
			}
		}
		if (uParam0->f_2 == 5)
		{
			func_479(&(uParam0->f_36), 3000);
		}
		uParam0->f_2 = iParam1;
		uParam0->f_3 = iParam2;
		uParam0->f_4 = iParam3;
		uParam0->f_5 = iParam4;
		switch (iParam1)
		{
			case 0:
				uParam0->f_9.f_21 = 0;
				uParam0->f_9.f_22 = 0;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				break;
			case 2:
				uParam0->f_9.f_21 = 1;
				uParam0->f_9.f_22 = 0;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				break;
			case 1:
				if (iParam4 == 0)
				{
					func_480(&(uParam0->f_36), 2, (360f - (BUILTIN::TO_FLOAT(iParam3) * 60f)), iParam5);
				}
				else
				{
					func_480(&(uParam0->f_36), 5, (360f - (BUILTIN::TO_FLOAT(iParam3) * 60f)), iParam5);
				}
				uParam0->f_9.f_21 = 0;
				uParam0->f_9.f_22 = 1;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				uParam0->f_9.f_26 = iParam4;
				break;
			case 3:
				func_480(&(uParam0->f_36), 6, 0, 0);
				uParam0->f_9.f_21 = 0;
				uParam0->f_9.f_22 = 1;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				uParam0->f_9.f_26 = iParam4;
				break;
			case 4:
				func_481(&(uParam0->f_36), 0, (360f - (BUILTIN::TO_FLOAT(iParam3) * 60f)), 0, 1, 1);
				uParam0->f_9.f_21 = 0;
				uParam0->f_9.f_22 = 1;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				uParam0->f_9.f_26 = iParam4;
				break;
			case 5:
				func_481(&(uParam0->f_36), 1, (360f - (BUILTIN::TO_FLOAT(iParam3) * 60f)), 0, 1, 1);
				uParam0->f_9.f_22 = 1;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				uParam0->f_9.f_26 = iParam4;
				uParam0->f_6 = 0;
				break;
			default:
				return;
		}
		CAM::_0x1D9F72DD4FD9A9D7(&(uParam0->f_9));
	}
}

void func_219(var uParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(uParam0->f_2137), iParam1);
}

int func_220(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_1259 != 0)
	{
		return 0;
	}
	if (!func_482(&(uParam0->f_1276), iParam1))
	{
		return 0;
	}
	func_212(&(uParam0->f_1276));
	func_137(uParam0);
	if (func_138(uParam0, 287982460, 0))
	{
		func_141(uParam0, 1, 0, 0);
	}
	if (!func_377(uParam0, iParam1, 0) && !func_138(uParam0, 1959158395, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		func_141(uParam0, 0, 0, 0);
	}
	return 1;
}

void func_221(var uParam0, int iParam1)
{
	PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(uParam0->f_785[iParam1 /*52*/], 1);
}

void func_263(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_12__::func_329(uParam0, iVar0);
		iVar0++;
	}
	uParam0->f_764 = 0;
	uParam0->f_765 = -1;
	uParam0->f_767 = -1;
	uParam0->f_1099[0 /*3*/] = { 0.008654f, 1.171513f, 0.4999996f };
	uParam0->f_1118[0 /*3*/] = { 0f, 0f, 180f };
	uParam0->f_1099[1 /*3*/] = { 1.018887f, 0.5782621f, 0.4999996f };
	uParam0->f_1118[1 /*3*/] = { 0f, 0f, 120f };
	uParam0->f_1099[2 /*3*/] = { 1.010233f, -0.5932513f, 0.4999996f };
	uParam0->f_1118[2 /*3*/] = { 0f, 0f, 60f };
	uParam0->f_1099[3 /*3*/] = { -0.008654f, -1.171513f, 0.4999996f };
	uParam0->f_1118[3 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_1099[4 /*3*/] = { -1.018887f, -0.5782621f, 0.4999996f };
	uParam0->f_1118[4 /*3*/] = { 0f, 0f, -60f };
	uParam0->f_1099[5 /*3*/] = { -1.010233f, 0.5932513f, 0.4999996f };
	uParam0->f_1118[5 /*3*/] = { 0f, 0f, -120f };
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_531(*uParam0, uParam0->f_3, uParam0->f_1099[iVar0 /*3*/], uParam0->f_1118[iVar0 /*3*/], &(uParam0->f_1137[iVar0 /*3*/]), &(uParam0->f_1156[iVar0 /*3*/]));
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 29)
	{
		uParam0->f_1213[iVar1] = 102643;
		uParam0->f_1243[iVar1] = 102651;
		iVar1++;
	}
	StringCopy(&(uParam0->f_1175[0 /*8*/]), "mini_games@poker_mg@base", 64);
	StringCopy(&(uParam0->f_1175[1 /*8*/]), "mini_games@poker_mg@base_camp", 64);
	StringCopy(&(uParam0->f_1175[2 /*8*/]), "mini_games@poker_mg@relaxed", 64);
	StringCopy(&(uParam0->f_1175[3 /*8*/]), "mini_games@poker_mg@fem_base_camp", 64);
	uParam0->f_1208[0] = -1196886585;
	uParam0->f_1208[1] = 1937500030;
	uParam0->f_1208[2] = -521410981;
	uParam0->f_1208[3] = -1999305469;
	uParam0->f_1213[0] = 102643;
	uParam0->f_1213[1] = 102659;
	uParam0->f_1213[2] = 102667;
	uParam0->f_1213[3] = 102742;
	uParam0->f_1243[3] = 102932;
	uParam0->f_1213[4] = 102948;
	uParam0->f_1243[4] = 104141;
	uParam0->f_1213[5] = 104157;
	uParam0->f_1213[6] = 105337;
	uParam0->f_1213[7] = 108261;
	uParam0->f_1213[8] = 108470;
	uParam0->f_1213[9] = 108902;
	uParam0->f_1213[10] = 109160;
	uParam0->f_1213[11] = 109814;
	uParam0->f_1243[11] = 110814;
	uParam0->f_1213[12] = 110849;
	uParam0->f_1213[13] = 111239;
	uParam0->f_1213[14] = 111596;
	uParam0->f_1243[14] = 112343;
	uParam0->f_1213[15] = 112359;
	uParam0->f_1243[15] = 113276;
	uParam0->f_1213[16] = 113292;
	uParam0->f_1243[16] = 113808;
	uParam0->f_1213[17] = 113829;
	uParam0->f_1213[18] = 114849;
	uParam0->f_1213[19] = 115286;
	uParam0->f_1213[20] = 115626;
	uParam0->f_1243[20] = 116008;
	uParam0->f_1213[21] = 116024;
	uParam0->f_1243[21] = 116233;
	uParam0->f_1213[22] = 116249;
	uParam0->f_1243[22] = 116445;
	uParam0->f_1213[23] = 116461;
	uParam0->f_1243[23] = 117304;
	uParam0->f_1213[24] = 117320;
	uParam0->f_1243[24] = 117770;
	uParam0->f_1213[25] = 117786;
	uParam0->f_1213[26] = 117864;
	uParam0->f_1213[27] = 118417;
	uParam0->f_1213[28] = 119084;
}

void func_270(var uParam0, vector3 vParam1, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_126 != 0)
	{
		return;
	}
	iVar0 = 2;
	if ((iVar0 + 31 / 32) < 1)
	{
		return;
	}
	iVar1 = 2;
	if ((iVar1 + 31 / 32) < 1)
	{
		return;
	}
	uParam0->f_126 = 0;
	uParam0->f_127 = -1;
	MISC::SET_BIT(&(uParam0->f_126), 0);
	uParam0->f_128 = -1;
	uParam0->f_129 = -1;
	uParam0->f_130 = 0f;
	iVar2 = 0;
	while (iVar2 < 1)
	{
		uParam0->f_122[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		uParam0->f_124[iVar2] = 0;
		iVar2++;
	}
	uParam0->f_175 = 119210;
	uParam0->f_176 = 119210;
	uParam0->f_135 = 0;
	uParam0->f_131 = { vParam1 };
	uParam0->f_134 = uParam4;
}

int func_271(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, float fParam8, float fParam9)
{
	if (uParam0->f_126 == 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return 0;
	}
	*(uParam0[iParam1 /*12*/]) = { vParam2 };
	(uParam0[iParam1 /*12*/])->f_3 = { vParam5 };
	(uParam0[iParam1 /*12*/])->f_6 = fParam8;
	(uParam0[iParam1 /*12*/])->f_7 = fParam9;
	MISC::SET_BIT(&(uParam0->f_122[(iParam1 / 32)]), (iParam1 % 32));
	return 1;
}

int func_272(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13)
{
	if (uParam0->f_126 == 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return 0;
	}
	uParam0->f_25[iParam1 /*12*/] = { vParam2 };
	uParam0->f_25[iParam1 /*12*/].f_3 = { vParam5 };
	uParam0->f_25[iParam1 /*12*/].f_6 = fParam8;
	uParam0->f_25[iParam1 /*12*/].f_7 = iParam9;
	uParam0->f_25[iParam1 /*12*/].f_8 = iParam10;
	uParam0->f_25[iParam1 /*12*/].f_9 = iParam11;
	uParam0->f_25[iParam1 /*12*/].f_10 = fParam12;
	uParam0->f_25[iParam1 /*12*/].f_11 = fParam13;
	MISC::SET_BIT(&(uParam0->f_124[(iParam1 / 32)]), (iParam1 % 32));
	return 1;
}

void func_273(var uParam0)
{
	int iVar0;
	uParam0->f_184 = 0;
	uParam0->f_183 = 0;
	uParam0->f_181 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_574(uParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_575(uParam0, iVar0);
		iVar0++;
	}
	func_576(uParam0);
}

void func_274(var uParam0)
{
	uParam0->f_281 = 0;
	uParam0->f_281.f_1 = 0;
	uParam0->f_281.f_2 = 0;
	uParam0->f_281.f_4 = 0;
	uParam0->f_281.f_3 = 0;
	uParam0->f_281.f_14 = 0;
	uParam0->f_281.f_15 = 0;
	uParam0->f_281.f_16 = 0;
	__LIB_12__::func_337(&(uParam0->f_281.f_5));
	uParam0->f_298 = 0;
	uParam0->f_298.f_1 = 0;
	uParam0->f_298.f_2 = 0;
	uParam0->f_298.f_12 = 0;
	uParam0->f_298.f_13 = 0;
	__LIB_12__::func_337(&(uParam0->f_298.f_3));
	uParam0->f_321 = 0;
	uParam0->f_322 = 0;
	uParam0->f_323 = 0;
	uParam0->f_324 = 0;
	uParam0->f_325 = 0;
	uParam0->f_326 = 0;
	uParam0->f_327 = 0;
	__LIB_0__::func_37(&(uParam0->f_328));
}

void func_275(var uParam0, vector3 vParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_159[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_180 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	__LIB_4__::func_812(&Global_1899750, vParam1 - Vector(2f, 0f, 0f));
}

void func_276(var uParam0)
{
	int iVar0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_579(&(uParam0->f_39[iVar0 /*56*/]));
		func_580(&(uParam0->f_376[iVar0 /*18*/]));
		iVar0++;
	}
	uParam0->f_485 = 0;
	__LIB_4__::func_884(&(uParam0->f_15));
}

void func_278(var uParam0)
{
	func_582(uParam0);
}

void func_279(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2109[iVar0] = 0;
		iVar0++;
	}
}

void func_280(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2147[iVar0 /*13*/] = 0;
		uParam0->f_2147[iVar0 /*13*/].f_2 = 0;
		uParam0->f_2147[iVar0 /*13*/].f_3 = 0;
		uParam0->f_2147[iVar0 /*13*/].f_1 = 0;
		uParam0->f_2147[iVar0 /*13*/].f_4 = 0;
		uParam0->f_2147[iVar0 /*13*/].f_5 = 0f;
		uParam0->f_2147[iVar0 /*13*/].f_6 = 0f;
		uParam0->f_2147[iVar0 /*13*/].f_7 = 0f;
		uParam0->f_2147[iVar0 /*13*/].f_8 = 0;
		uParam0->f_2147[iVar0 /*13*/].f_9 = 0;
		uParam0->f_2147[iVar0 /*13*/].f_10 = 0;
		uParam0->f_2147[iVar0 /*13*/].f_11 = 0;
		uParam0->f_2147[iVar0 /*13*/].f_12 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		uParam0->f_2147.f_79[iVar1 /*4*/] = 0;
		uParam0->f_2147.f_79[iVar1 /*4*/].f_1 = 0;
		uParam0->f_2147.f_79[iVar1 /*4*/].f_2 = 0;
		uParam0->f_2147.f_79[iVar1 /*4*/].f_3 = 0;
		iVar1++;
	}
	uParam0->f_2147.f_112 = 0;
	uParam0->f_2147.f_112.f_1 = -1;
	uParam0->f_2147.f_112.f_2 = -1;
	__LIB_0__::func_37(&(uParam0->f_2147.f_112.f_3));
	uParam0->f_2147.f_118 = 0;
	uParam0->f_2147.f_119 = 0;
	uParam0->f_2147.f_120 = 0;
	__LIB_0__::func_37(&(uParam0->f_2147.f_121));
	uParam0->f_2147.f_125 = 0;
	uParam0->f_2147.f_126 = 0;
	uParam0->f_2147.f_127 = 0;
	uParam0->f_2147.f_128 = 0;
	uParam0->f_2147.f_129 = 0;
	uParam0->f_2147.f_131 = -1;
	uParam0->f_2147.f_132 = -1;
	uParam0->f_2147.f_133 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		uParam0->f_2147.f_134[iVar2] = 0;
		iVar2++;
	}
	uParam0->f_2147.f_137 = 0f;
	uParam0->f_2147.f_138 = 0f;
	uParam0->f_2147.f_139 = 0f;
	uParam0->f_2147.f_140 = 0;
	uParam0->f_2147.f_141 = 0;
	uParam0->f_2147.f_142 = 0;
	uParam0->f_2147.f_143 = 0;
	uParam0->f_2147.f_144 = 0;
	uParam0->f_2147.f_145 = -1;
	uParam0->f_2147.f_146 = 0;
	uParam0->f_2147.f_147 = -1;
	uParam0->f_2147.f_148 = 0;
	uParam0->f_2147.f_149 = 0;
	uParam0->f_2147.f_150 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2147.f_151[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2147.f_158[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_2147.f_165 = 0;
	uParam0->f_2147.f_166 = 0;
	uParam0->f_2147.f_167 = 0;
	uParam0->f_2147.f_168 = 0;
	uParam0->f_2147.f_169 = 0;
	uParam0->f_2147.f_170 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2147.f_171[iVar0] = 0f;
		uParam0->f_2147.f_178[iVar0] = 0f;
		uParam0->f_2147.f_185[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_2147.f_192 = 0;
	uParam0->f_2147.f_193 = 0;
	uParam0->f_2147.f_194 = 0;
	uParam0->f_2147.f_195 = 0;
	uParam0->f_2147.f_196 = 0;
	uParam0->f_2147.f_197 = 0;
	uParam0->f_2147.f_198 = 0;
	uParam0->f_2147.f_199 = 0;
}

void func_281(var uParam0)
{
	func_583(&(uParam0->f_2347.f_96), 0f, 120f);
	func_583(&(uParam0->f_2347.f_106), 0f, 120f);
	func_583(&(uParam0->f_2347.f_116), 120f, 180f);
	func_583(&(uParam0->f_2347.f_16), 60f, 180f);
	func_583(&(uParam0->f_2347.f_26), 60f, 180f);
	func_583(&(uParam0->f_2347.f_36), 60f, 240f);
	func_583(&(uParam0->f_2347.f_46), 60f, 240f);
	func_583(&(uParam0->f_2347.f_56), 60f, 180f);
	func_583(&(uParam0->f_2347.f_66), 120f, 180f);
	func_583(&(uParam0->f_2347.f_76), 0f, 120f);
	func_583(&(uParam0->f_2347.f_86), 0f, 120f);
	uParam0->f_2347 = -1;
}

void func_282(var uParam0)
{
	uParam0->f_2578[0 /*6*/] = 0.3f;
	uParam0->f_2578[0 /*6*/].f_1 = 0.7f;
	uParam0->f_2578[0 /*6*/].f_2 = 0.2f;
	uParam0->f_2578[0 /*6*/].f_3 = 0.5f;
	uParam0->f_2578[0 /*6*/].f_4 = 70;
	uParam0->f_2578[0 /*6*/].f_5 = 65;
	uParam0->f_2578[1 /*6*/] = 0f;
	uParam0->f_2578[1 /*6*/].f_1 = 0f;
	uParam0->f_2578[1 /*6*/].f_2 = 0.3f;
	uParam0->f_2578[1 /*6*/].f_3 = 0.6f;
	uParam0->f_2578[1 /*6*/].f_4 = 100;
	uParam0->f_2578[1 /*6*/].f_5 = 100;
	uParam0->f_2578[2 /*6*/] = 0f;
	uParam0->f_2578[2 /*6*/].f_1 = 0f;
	uParam0->f_2578[2 /*6*/].f_2 = 0.2f;
	uParam0->f_2578[2 /*6*/].f_3 = 0.5f;
	uParam0->f_2578[2 /*6*/].f_4 = 100;
	uParam0->f_2578[2 /*6*/].f_5 = 100;
	uParam0->f_2578[3 /*6*/] = 0.25f;
	uParam0->f_2578[3 /*6*/].f_1 = 0.25f;
	uParam0->f_2578[3 /*6*/].f_2 = 0.2f;
	uParam0->f_2578[3 /*6*/].f_3 = 0.5f;
	uParam0->f_2578[3 /*6*/].f_4 = 100;
	uParam0->f_2578[3 /*6*/].f_5 = 100;
	uParam0->f_2578[4 /*6*/] = 0f;
	uParam0->f_2578[4 /*6*/].f_1 = 0f;
	uParam0->f_2578[4 /*6*/].f_2 = 0.3f;
	uParam0->f_2578[4 /*6*/].f_3 = 0.8f;
	uParam0->f_2578[4 /*6*/].f_4 = 75;
	uParam0->f_2578[4 /*6*/].f_5 = 100;
	uParam0->f_2578[5 /*6*/] = 0.25f;
	uParam0->f_2578[5 /*6*/].f_1 = 0.5f;
	uParam0->f_2578[5 /*6*/].f_2 = 0f;
	uParam0->f_2578[5 /*6*/].f_3 = 0f;
	uParam0->f_2578[5 /*6*/].f_4 = 100;
	uParam0->f_2578[5 /*6*/].f_5 = 0;
	uParam0->f_2578[6 /*6*/] = 0f;
	uParam0->f_2578[6 /*6*/].f_1 = 0f;
	uParam0->f_2578[6 /*6*/].f_2 = 0.2f;
	uParam0->f_2578[6 /*6*/].f_3 = 0.5f;
	uParam0->f_2578[6 /*6*/].f_4 = 100;
	uParam0->f_2578[6 /*6*/].f_5 = 100;
	uParam0->f_2578[7 /*6*/] = 0.6f;
	uParam0->f_2578[7 /*6*/].f_1 = 0.9f;
	uParam0->f_2578[7 /*6*/].f_2 = 0.4f;
	uParam0->f_2578[7 /*6*/].f_3 = 0.6f;
	uParam0->f_2578[7 /*6*/].f_4 = 75;
	uParam0->f_2578[7 /*6*/].f_5 = 30;
	uParam0->f_2578[8 /*6*/] = 0f;
	uParam0->f_2578[8 /*6*/].f_1 = 0f;
	uParam0->f_2578[8 /*6*/].f_2 = 0f;
	uParam0->f_2578[8 /*6*/].f_3 = 0f;
	uParam0->f_2578[8 /*6*/].f_4 = 100;
	uParam0->f_2578[8 /*6*/].f_5 = 100;
	uParam0->f_2578[9 /*6*/] = 0.25f;
	uParam0->f_2578[9 /*6*/].f_1 = 0.5f;
	uParam0->f_2578[9 /*6*/].f_2 = 0f;
	uParam0->f_2578[9 /*6*/].f_3 = 0f;
	uParam0->f_2578[9 /*6*/].f_4 = 100;
	uParam0->f_2578[9 /*6*/].f_5 = 100;
}

void func_283(var uParam0)
{
	func_584(uParam0);
	func_585(uParam0);
}

void func_284(var uParam0)
{
	uParam0->f_2752 = 0;
	uParam0->f_2752.f_1 = 16;
	uParam0->f_2752.f_5 = 0;
	uParam0->f_2752.f_6 = 0;
	uParam0->f_2752.f_7 = -1;
	__LIB_1__::func_148(&(uParam0->f_2752.f_2));
}

void func_285(var uParam0)
{
	int iVar0;
	MINIGAME::_0x6480723D3BE535B6(-471827042);
	func_276(uParam0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_486[iVar0] = 0;
		uParam0->f_493[iVar0 /*3*/] = 0;
		uParam0->f_512[iVar0 /*2*/] = 0;
		iVar0++;
	}
	uParam0->f_525[0 /*2*/] = 0;
	uParam0->f_525[0 /*2*/].f_1 = 0;
	uParam0->f_534 = 0;
	uParam0->f_535 = 2;
	uParam0->f_536 = 1;
	uParam0->f_537 = -1;
	func_586(&(uParam0->f_557));
	func_587(uParam0);
	func_588(uParam0);
	__LIB_4__::func_885(&(uParam0->f_606));
	uParam0->f_9 = uParam0->f_557.f_14;
	uParam0->f_10 = uParam0->f_557.f_15;
	uParam0->f_597 = uParam0->f_557.f_15;
	uParam0->f_598 = uParam0->f_557.f_15 * 2;
	uParam0->f_599 = 4;
	uParam0->f_485 = 0;
	uParam0->f_731 = -1;
	uParam0->f_732 = 0;
	func_590(uParam0);
}

int func_286(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = uParam0->f_114.f_9;
	switch (uParam0->f_114.f_2011)
	{
		case 0:
			if ((!__LIB_12__::func_296(&(uParam0->f_3310), iVar0) || !func_202(&(uParam0->f_3310), iVar0, 4)) || __LIB_12__::func_338(&(uParam0->f_3310), iVar0, 0))
			{
				func_209(&(uParam0->f_4583), &(uParam0->f_3310), 0);
				func_592(&(uParam0->f_114), 13);
				return 1;
			}
			break;
		case 13:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), iVar0) || !func_202(&(uParam0->f_3310), iVar0, 4))
			{
				func_592(&(uParam0->f_114), 94);
				return 1;
			}
			break;
		case 94:
			if (!__LIB_12__::func_339(&(uParam0->f_1)))
			{
				func_213(&(uParam0->f_114), 3, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_287(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2015[iParam1] = iParam2;
}

int func_288(var uParam0, var uParam1)
{
	switch (uParam0->f_114.f_2011)
	{
		case 0:
			if (func_367(&(uParam0->f_2979)))
			{
				func_594(uParam0, uParam1);
				func_595(uParam0, uParam1);
				func_596(uParam0, uParam1);
				func_597(uParam0, uParam1);
				func_598(uParam0, uParam1);
				func_599(uParam0);
				func_213(&(uParam0->f_114), 5, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_289(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	switch (uParam0->f_114.f_2011)
	{
		case 0:
			__LIB_0__::func_268(&(uParam0->f_114.f_2130), 15f);
			__LIB_0__::func_268(&(uParam0->f_114.f_2133), -MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.7f));
			uParam0->f_114.f_2140 = 0;
			func_592(&(uParam0->f_114), 4);
			return 1;
		case 4:
			if (func_376(&(uParam0->f_114), -26793149, 0, 1))
			{
				func_141(&(uParam0->f_114), 1, 0, 0);
			}
			if (func_388(&(uParam0->f_2979)))
			{
				if (func_600(&(uParam0->f_2979)) != 6)
				{
					func_601(&(uParam0->f_2979), "MGPKR_OFFER_REBUYIN", 6);
				}
				if (uParam0->f_114.f_2140 == 0)
				{
					iVar1 = func_602(uParam1, -1);
					if (__LIB_12__::func_296(&(uParam0->f_3310), iVar1) && !func_603(&(uParam0->f_3310), iVar1))
					{
						func_604(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, iVar1);
						uParam0->f_114.f_2140++;
					}
				}
				else
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					if (__LIB_0__::func_265(&(uParam0->f_114.f_2130)) > 30f)
					{
						iVar0 = 0;
						while (iVar0 < 6)
						{
							if (func_143(uParam1, iVar1) && iVar1 != uParam0->f_114.f_9)
							{
								func_606(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, iVar1, uParam0->f_114.f_9, 1);
								__LIB_1__::func_148(&(uParam0->f_114.f_2130));
							}
							else
							{
								iVar1 = (iVar1 + 1 % 6);
								iVar0++;
							}
						}
					}
					if (__LIB_0__::func_265(&(uParam0->f_114.f_2133)) > 0f)
					{
						func_607(uParam0, uParam0->f_114.f_9, 0, 1, -1);
						if (func_608(uParam1) > 2)
						{
							__LIB_0__::func_268(&(uParam0->f_114.f_2133), -MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 5f));
						}
						else
						{
							__LIB_0__::func_268(&(uParam0->f_114.f_2133), -MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 7f));
						}
					}
				}
			}
			if (func_376(&(uParam0->f_114), -1442142035, 1, 1))
			{
				if (func_600(&(uParam0->f_2979)) == 6)
				{
					func_609(&(uParam0->f_2979));
				}
				if (!uParam0->f_114.f_2473)
				{
					func_187(&(uParam0->f_114), uParam0->f_114.f_773.f_3);
				}
				func_213(&(uParam0->f_114), 4, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_290(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bVar1 = true;
	if (uParam0->f_114.f_2011 != 0)
	{
		switch (uParam0->f_114.f_2103)
		{
			case 0:
				if (((uParam0->f_114.f_2474 != uParam1->f_4 && uParam0->f_114.f_2474 != uParam1->f_5) || (uParam0->f_114.f_2474 == uParam1->f_4 && uParam0->f_114.f_2011 > 16)) || (uParam0->f_114.f_2474 == uParam1->f_5 && uParam0->f_114.f_2011 > 18))
				{
					if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2474) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2474, 1))
					{
						if ((__LIB_12__::func_301(&(uParam0->f_3310), uParam0->f_114.f_2474) == 0 || __LIB_12__::func_301(&(uParam0->f_3310), uParam0->f_114.f_2474) == 1) && uParam0->f_114.f_9 == (uParam0->f_114.f_2474 + 1 % 6))
						{
							iVar2 = 2;
						}
						else
						{
							iVar2 = 4;
						}
						func_612(&(uParam0->f_3310), uParam0->f_114.f_2474, uParam0->f_114.f_9, func_611(uParam1), 0, iVar2);
						func_613(&(uParam0->f_114), 1);
					}
				}
				break;
			case 1:
				if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2474) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2474, 5))
				{
					func_613(&(uParam0->f_114), 2);
				}
				else if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2474) && __LIB_12__::func_338(&(uParam0->f_3310), uParam0->f_114.f_2474, 6))
				{
					func_607(uParam0, uParam0->f_114.f_2474, 1, 3, -1);
					__LIB_12__::func_340(&(uParam0->f_3310), uParam0->f_114.f_2474, 6);
				}
				break;
			case 2:
				break;
			default:
				break;
		}
	}
	switch (uParam0->f_114.f_2011)
	{
		case 0:
			if (((func_616(&(uParam0->f_114), uParam0->f_114.f_2474, 1) && func_616(&(uParam0->f_114), uParam0->f_114.f_773.f_4, 1)) && func_616(&(uParam0->f_114), uParam0->f_114.f_773.f_5, 1)) && func_367(&(uParam0->f_2979)))
			{
				func_617(&(uParam0->f_114), uParam0->f_114.f_2474, 1);
				func_617(&(uParam0->f_114), uParam0->f_114.f_773.f_4, 0);
				func_617(&(uParam0->f_114), uParam0->f_114.f_773.f_5, 0);
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_613(&(uParam0->f_114), 0);
				if (!uParam0->f_114.f_2473)
				{
					func_187(&(uParam0->f_114), uParam1->f_3);
				}
				func_618(&(uParam0->f_114.f_2655), uParam1);
				__LIB_18__::func_541(2);
				func_594(uParam0, uParam1);
				func_620(&(uParam0->f_114), uParam1);
				if (uParam0->f_114.f_2147.f_126 == 1)
				{
					if (!func_142(&(uParam0->f_114), 4))
					{
						func_621(uParam0, &(uParam0->f_114), 1, 1, 1);
					}
				}
				func_622(uParam0, uParam1);
				func_623(&(uParam0->f_3310));
				if (__LIB_12__::func_292(uParam0, 1))
				{
					if ((!uParam0->f_114.f_2863 && uParam0->f_114.f_2138 >= 1) && uParam0->f_3310.f_40 == 0)
					{
						func_624(uParam0, &(uParam0->f_114), &(uParam0->f_3310));
					}
				}
				if (__LIB_12__::func_292(uParam0, 2))
				{
					if (__LIB_1__::func_77(2, 512))
					{
						func_625(&(uParam0->f_114), 1);
					}
					else if (__LIB_1__::func_77(2, 1024))
					{
						func_625(&(uParam0->f_114), 2);
						__LIB_12__::func_321(&(uParam0->f_3310));
						func_626(&(uParam0->f_3310));
					}
					else if (__LIB_1__::func_77(2, 2048))
					{
						func_625(&(uParam0->f_114), 3);
					}
				}
				if (!func_197(&(uParam0->f_3310)) || func_627(&(uParam0->f_3310)) != uParam0->f_114.f_2474)
				{
					func_217(&(uParam0->f_3310), uParam0->f_114.f_2474, 0);
				}
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (func_387(uParam1, iVar0))
					{
						if (__LIB_12__::func_341(func_628(uParam1, iVar0, 0)) && __LIB_12__::func_341(func_628(uParam1, iVar0, 1)))
						{
							func_630(&(uParam0->f_3310), iVar0, func_628(uParam1, iVar0, 0), func_628(uParam1, iVar0, 1), 1);
						}
					}
					iVar0++;
				}
				func_592(&(uParam0->f_114), 15);
				return 1;
			}
			break;
		case 15:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_4) && __LIB_18__::func_540(&(uParam0->f_3310), uParam1->f_4, 1))
			{
				func_631(&(uParam0->f_3310), uParam1->f_4, uParam1->f_9, 1);
				func_595(uParam0, uParam1);
				func_592(&(uParam0->f_114), 16);
			}
			break;
		case 16:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_4) || !func_614(&(uParam0->f_3310), uParam1->f_4, 11))
			{
				func_596(uParam0, uParam1);
				if (uParam1->f_4 != uParam0->f_114.f_2474)
				{
					func_632(&(uParam0->f_114), uParam1->f_4, 0);
				}
				func_592(&(uParam0->f_114), 17);
				return 1;
			}
			break;
		case 17:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_5) && __LIB_18__::func_540(&(uParam0->f_3310), uParam1->f_5, 1))
			{
				func_631(&(uParam0->f_3310), uParam1->f_5, uParam1->f_10, 1);
				func_597(uParam0, uParam1);
				func_592(&(uParam0->f_114), 18);
			}
			break;
		case 18:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_5) || !func_614(&(uParam0->f_3310), uParam1->f_5, 11))
			{
				func_598(uParam0, uParam1);
				if (uParam1->f_5 != uParam0->f_114.f_2474)
				{
					func_632(&(uParam0->f_114), uParam1->f_5, 0);
				}
				func_592(&(uParam0->f_114), 21);
				return 1;
			}
			break;
		case 21:
			if (uParam0->f_114.f_2103 != 0)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (iVar0 != uParam0->f_114.f_2474 && func_472(uParam1, iVar0))
					{
						if (__LIB_12__::func_300(&(uParam0->f_3310), iVar0) != 2)
						{
							bVar1 = false;
							if ((!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2474) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2474, 5)) || __LIB_12__::func_338(&(uParam0->f_3310), uParam0->f_114.f_2474, (0 + iVar0)))
							{
								if (__LIB_18__::func_540(&(uParam0->f_3310), iVar0, 1))
								{
									if ((__LIB_12__::func_301(&(uParam0->f_3310), iVar0) == 0 || __LIB_12__::func_301(&(uParam0->f_3310), iVar0) == 1) && uParam0->f_114.f_9 == (iVar0 + 1 % 6))
									{
										func_633(&(uParam0->f_3310), iVar0, 2);
									}
									else
									{
										func_634(&(uParam0->f_3310), iVar0, 0);
										if (func_142(&(uParam0->f_114), 1))
										{
											if (iVar0 == uParam0->f_114.f_9)
											{
												if (func_635(uParam1, uParam0->f_114.f_9))
												{
													func_636(&(uParam0->f_2979), uParam1, uParam0->f_114.f_9, 0);
												}
											}
										}
										func_637(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, iVar0);
									}
								}
							}
						}
					}
					iVar0++;
				}
				if (bVar1)
				{
					if (uParam0->f_114.f_2103 == 2)
					{
						func_599(uParam0);
						if (func_142(&(uParam0->f_114), 1) && func_143(uParam1, uParam0->f_114.f_9))
						{
							if (func_635(uParam1, uParam0->f_114.f_9))
							{
								func_636(&(uParam0->f_2979), uParam1, uParam0->f_114.f_9, 0);
							}
						}
						func_638(&(uParam0->f_114));
						func_190(&(uParam0->f_114), 2);
						func_592(&(uParam0->f_114), 24);
						return 1;
					}
				}
			}
			break;
		case 24:
			if (__LIB_12__::func_292(uParam0, 0))
			{
				if (func_639(uParam0, &(uParam0->f_114), bVar3))
				{
					iVar0 = func_640(uParam1, uParam0->f_114.f_9);
					if (iVar0 != -1)
					{
						func_641(&(uParam0->f_114), iVar0, 3, __LIB_12__::func_294(2, uParam0->f_1.f_3.f_10));
						func_642(&(uParam0->f_114), 0);
					}
				}
			}
			func_643(&(uParam0->f_114));
			func_213(&(uParam0->f_114), 5, 0);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_291(var uParam0, var uParam1)
{
	struct<2> Var0;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	switch (uParam0->f_114.f_2011)
	{
		case 0:
			uParam0->f_114.f_2139 = 0;
			func_644(&(uParam0->f_114));
			func_592(&(uParam0->f_114), 6);
			return 1;
		case 1:
			uParam0->f_114.f_2139 = 0;
			func_644(&(uParam0->f_114));
			func_592(&(uParam0->f_114), 25);
			return 1;
		case 3:
			if (func_645(uParam0, &(uParam0->f_114)))
			{
				func_646(uParam0);
				func_592(&(uParam0->f_114), 25);
				return 1;
			}
			break;
		case 6:
			if (func_376(&(uParam0->f_114), -441318505, 0, 1))
			{
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_592(&(uParam0->f_114), 25);
				return 1;
			}
			else if (func_376(&(uParam0->f_114), 981015204, 1, 1))
			{
				func_592(&(uParam0->f_114), 36);
				return 1;
			}
			break;
		case 25:
			if (func_647(uParam0, 0) && __LIB_12__::func_342(&(uParam0->f_114), uParam1->f_6))
			{
				if (func_649(uParam0))
				{
					func_650(&(uParam0->f_114));
					func_592(&(uParam0->f_114), 3);
					return 1;
				}
			}
			func_651(uParam0, uParam1);
			if (__LIB_12__::func_342(&(uParam0->f_114), uParam1->f_6))
			{
				func_652(uParam0, uParam1);
			}
			uParam0->f_114.f_2120 = 0;
			uParam0->f_114.f_2140 = 0;
			__LIB_1__::func_148(&(uParam0->f_114.f_2130));
			__LIB_0__::func_268(&(uParam0->f_114.f_2133), -MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.7f));
			if (uParam0->f_114.f_9 == uParam1->f_6)
			{
				uParam0->f_114.f_2139++;
			}
			func_592(&(uParam0->f_114), 26);
			return 1;
		case 26:
			if (!uParam0->f_114.f_2120)
			{
				if (uParam0->f_114.f_2119)
				{
					func_653(uParam0, uParam1, &Var0);
				}
				else
				{
					func_654(uParam0, uParam1, &Var0);
				}
				if (Var0 != 0)
				{
					switch (Var0)
					{
						case 4:
							bVar2 = func_655(&(uParam0->f_114), uParam1->f_6);
							break;
						case 3:
							bVar2 = func_656(&(uParam0->f_114), uParam1->f_6);
							break;
						case 2:
							bVar2 = func_657(&(uParam0->f_114), uParam1->f_6, Var0.f_1);
							break;
						case 5:
							bVar2 = func_658(&(uParam0->f_114), uParam1->f_6);
							break;
					}
					if (bVar2)
					{
						func_659(uParam0, uParam1);
						uParam0->f_114.f_2120 = 1;
					}
				}
			}
			if (!uParam0->f_114.f_2120)
			{
				if (__LIB_12__::func_292(uParam0, 2))
				{
					if (__LIB_1__::func_285(&(uParam0->f_114.f_2130), 12f))
					{
						__LIB_12__::func_436(9, uParam1->f_6);
					}
					if (__LIB_12__::func_424(9))
					{
						__LIB_1__::func_148(&(uParam0->f_114.f_2130));
					}
				}
				else
				{
					iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					if (__LIB_0__::func_265(&(uParam0->f_114.f_2130)) > __LIB_0__::func_646(30f, (17f + BUILTIN::TO_FLOAT(uParam0->f_114.f_2140 * 3))))
					{
						iVar6 = 0;
						while (iVar6 < 6)
						{
							if (func_143(uParam1, iVar3) && iVar3 != uParam1->f_6)
							{
								if (uParam0->f_114.f_2140 == 0)
								{
									func_606(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, iVar3, uParam1->f_6, 0);
								}
								else
								{
									func_606(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, iVar3, uParam1->f_6, __LIB_1__::func_985());
								}
								__LIB_1__::func_148(&(uParam0->f_114.f_2130));
								uParam0->f_114.f_2140++;
							}
							else
							{
								iVar3 = (iVar3 + 1 % 6);
								iVar6++;
							}
						}
					}
					if (__LIB_0__::func_265(&(uParam0->f_114.f_2133)) > 0f)
					{
						func_607(uParam0, uParam1->f_6, 0, 1, -1);
						if (func_665(uParam1) > 2)
						{
							__LIB_0__::func_268(&(uParam0->f_114.f_2133), -MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 5f));
						}
						else
						{
							__LIB_0__::func_268(&(uParam0->f_114.f_2133), -MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 7f));
						}
					}
				}
			}
			if (func_138(&(uParam0->f_114), -1267385353, 1))
			{
				func_659(uParam0, uParam1);
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_592(&(uParam0->f_114), 25);
				return 1;
			}
			else if (func_376(&(uParam0->f_114), 402903974, 0, 1))
			{
				func_659(uParam0, uParam1);
				func_190(&(uParam0->f_114), 4);
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_592(&(uParam0->f_114), 6);
				return 1;
			}
			else if (func_376(&(uParam0->f_114), -1766937362, 1, 1))
			{
				func_659(uParam0, uParam1);
				func_592(&(uParam0->f_114), 27);
				return 1;
			}
			break;
		case 27:
			if (func_616(&(uParam0->f_114), uParam0->f_114.f_773.f_6, 1))
			{
				func_617(&(uParam0->f_114), uParam0->f_114.f_773.f_6, 1);
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_592(&(uParam0->f_114), 28);
				return 1;
			}
			break;
		case 28:
			if (func_142(&(uParam0->f_114), 1) && func_143(uParam1, uParam0->f_114.f_9))
			{
				if (func_635(uParam1, uParam0->f_114.f_9))
				{
					func_636(&(uParam0->f_2979), uParam1, uParam0->f_114.f_9, 0);
				}
			}
			func_607(uParam0, uParam1->f_6, 0, 6, -1);
			switch (uParam0->f_114.f_1265)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					if (uParam0->f_3310.f_778)
					{
						uParam0->f_114.f_2145 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 1f);
						uParam0->f_114.f_2144 = (MISC::GET_RANDOM_FLOAT_IN_RANGE(0.45f, 0.9f) * uParam0->f_114.f_2145);
						__LIB_1__::func_148(&(uParam0->f_114.f_2141));
						func_592(&(uParam0->f_114), 29);
						return 1;
					}
					func_592(&(uParam0->f_114), 30);
					return 1;
				case 6:
					func_592(&(uParam0->f_114), 33);
					return 1;
				default:
					break;
			}
			break;
		case 29:
			if ((__LIB_12__::func_342(&(uParam0->f_114), uParam1->f_6) || __LIB_1__::func_285(&(uParam0->f_114.f_2141), uParam0->f_114.f_2144)) || uParam0->f_3310.f_40)
			{
				if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_6) || __LIB_18__::func_540(&(uParam0->f_3310), uParam1->f_6, 1))
				{
					func_666(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1, uParam1->f_6);
					switch (uParam0->f_114.f_2147.f_79[0 /*4*/])
					{
						case 2:
							func_667(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam1->f_6);
							break;
						case 4:
							func_668(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam1->f_6);
							break;
						case 3:
							func_669(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam1->f_6);
							break;
					}
					func_592(&(uParam0->f_114), 30);
					return 1;
				}
			}
			break;
		case 30:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_6) && __LIB_18__::func_540(&(uParam0->f_3310), uParam1->f_6, 1))
			{
				if (!uParam0->f_3310.f_40 && uParam0->f_3310.f_778)
				{
					if (!__LIB_12__::func_342(&(uParam0->f_114), uParam1->f_6) && !__LIB_1__::func_285(&(uParam0->f_114.f_2141), uParam0->f_114.f_2145))
					{
						return 0;
					}
				}
				if (uParam0->f_114.f_1265 == 1)
				{
					func_670(&(uParam0->f_3310), uParam1->f_6);
				}
				else if (uParam0->f_114.f_1265 == 5 && func_671(&(uParam0->f_3310), uParam1->f_6))
				{
					func_672(&(uParam0->f_3310), uParam1->f_6);
				}
				else
				{
					func_631(&(uParam0->f_3310), uParam1->f_6, uParam0->f_114.f_1266, 0);
				}
				if (__LIB_12__::func_292(uParam0, 2))
				{
					switch (uParam0->f_114.f_1265)
					{
						case 1:
							__LIB_12__::func_436(4, uParam1->f_6);
							break;
						case 3:
							__LIB_12__::func_436(3, uParam1->f_6);
							break;
						case 2:
						case 4:
							__LIB_12__::func_436(5, uParam1->f_6);
							break;
						case 5:
							__LIB_12__::func_436(6, uParam1->f_6);
							break;
					}
				}
				func_673(uParam0, uParam1);
				func_592(&(uParam0->f_114), 31);
			}
			break;
		case 31:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_6) || ((!func_614(&(uParam0->f_3310), uParam1->f_6, 11) && !func_614(&(uParam0->f_3310), uParam1->f_6, 13)) && !func_614(&(uParam0->f_3310), uParam1->f_6, 12)))
			{
				switch (uParam0->f_114.f_2147.f_79[0 /*4*/])
				{
					case 2:
						func_674(uParam0, &(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_114.f_287));
						break;
					case 4:
						func_675(uParam0, &(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_114.f_287));
						break;
					case 3:
						func_676(uParam0, &(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_114.f_287));
						break;
				}
				func_592(&(uParam0->f_114), 32);
				return 1;
			}
			break;
		case 32:
			if (!uParam0->f_3310.f_40 && uParam0->f_3310.f_778)
			{
				if ((__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_6) && func_603(&(uParam0->f_3310), uParam1->f_6)) && __LIB_0__::func_265(&(uParam0->f_114.f_2012)) < 5f)
				{
					iVar5 = func_677(uParam1, uParam1->f_6);
					if (func_143(uParam1, iVar5) && !__LIB_12__::func_342(&(uParam0->f_114), iVar5))
					{
						return 0;
					}
				}
			}
			func_678(uParam0, uParam1);
			func_638(&(uParam0->f_114));
			func_190(&(uParam0->f_114), 3);
			func_592(&(uParam0->f_114), 7);
			return 1;
		case 33:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_6) && __LIB_18__::func_540(&(uParam0->f_3310), uParam1->f_6, 1))
			{
				func_679(&(uParam0->f_3310), uParam1->f_6, uParam0->f_114.f_2474, 1);
				func_666(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1, uParam1->f_6);
				func_680(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam1->f_6);
				if (__LIB_12__::func_292(uParam0, 2))
				{
					__LIB_12__::func_436(7, uParam1->f_6);
				}
				func_673(uParam0, uParam1);
				func_592(&(uParam0->f_114), 34);
			}
			break;
		case 34:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_6) || !func_614(&(uParam0->f_3310), uParam1->f_6, 15))
			{
				switch (uParam0->f_114.f_2147.f_79[0 /*4*/])
				{
					case 5:
						func_681(uParam0, &(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_114.f_287));
						break;
				}
				func_592(&(uParam0->f_114), 35);
				return 1;
			}
			break;
		case 35:
			if (!uParam0->f_3310.f_40 && uParam0->f_3310.f_778)
			{
				if ((__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_6) && func_603(&(uParam0->f_3310), uParam1->f_6)) && __LIB_0__::func_265(&(uParam0->f_114.f_2012)) < 5f)
				{
					iVar5 = func_677(uParam1, uParam1->f_6);
					if (func_143(uParam1, iVar5) && !__LIB_12__::func_342(&(uParam0->f_114), iVar5))
					{
						return 0;
					}
				}
			}
			func_678(uParam0, uParam1);
			func_682(uParam0, uParam1);
			if (__LIB_12__::func_292(uParam0, 2))
			{
				if (uParam1->f_6 == uParam0->f_114.f_9)
				{
					if (func_683(&(uParam0->f_114), uParam1))
					{
						__LIB_12__::func_436(1, 0);
						func_213(&(uParam0->f_114), 14, 0);
						return 1;
					}
				}
			}
			func_638(&(uParam0->f_114));
			func_190(&(uParam0->f_114), 3);
			func_592(&(uParam0->f_114), 7);
			return 1;
		case 7:
			if (__LIB_12__::func_292(uParam0, 2))
			{
				if (__LIB_1__::func_77(2, 4096))
				{
					return 0;
				}
			}
			if (func_376(&(uParam0->f_114), 402903974, 1, 1))
			{
				if (__LIB_12__::func_292(uParam0, 2))
				{
					if (__LIB_12__::func_342(&(uParam0->f_114), uParam1->f_6))
					{
						if (!func_142(&(uParam0->f_114), 1))
						{
							func_175(&(uParam0->f_114), 1);
						}
					}
				}
				func_190(&(uParam0->f_114), 4);
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_592(&(uParam0->f_114), 6);
				return 1;
			}
			break;
		case 36:
			func_684(&(uParam0->f_2979));
			func_685(uParam0, &(uParam0->f_114.f_773));
			iVar3 = 0;
			while (iVar3 < 6)
			{
				if ((func_143(uParam1, iVar3) && func_143(&(uParam0->f_114.f_773), iVar3)) && func_144(&(uParam0->f_114.f_773), iVar3) > func_144(uParam1, iVar3))
				{
					bVar4 = (func_686(&(uParam0->f_114.f_773)) || uParam1->f_2 == 3);
					func_687(uParam0, iVar3, (func_144(&(uParam0->f_114.f_773), iVar3) - func_144(uParam1, iVar3)));
					func_688(&(uParam0->f_3310), iVar3, func_144(&(uParam0->f_114.f_773), iVar3), func_469(&(uParam0->f_114.f_773), iVar3), bVar4, 1);
					func_592(&(uParam0->f_114), 37);
					return 1;
				}
				iVar3++;
			}
			func_592(&(uParam0->f_114), 38);
			return 1;
		case 37:
			func_592(&(uParam0->f_114), 38);
			return 1;
		case 38:
			if (func_686(&(uParam0->f_114.f_773)))
			{
				func_213(&(uParam0->f_114), 7, 0);
				return 1;
			}
			else
			{
				func_190(&(uParam0->f_114), 5);
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_592(&(uParam0->f_114), 5);
				return 1;
			}
			break;
		case 5:
			if (func_376(&(uParam0->f_114), -1179646469, 0, 1))
			{
				func_213(&(uParam0->f_114), 9, 0);
				return 1;
			}
			else if (func_376(&(uParam0->f_114), -1442142035, 1, 1))
			{
				if (func_689(&(uParam0->f_114.f_773)))
				{
					func_213(&(uParam0->f_114), 10, 0);
				}
				else
				{
					func_213(&(uParam0->f_114), 6, 0);
				}
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_292(var uParam0, var uParam1)
{
	int iVar0;
	if (uParam0->f_114.f_2011 != 0)
	{
		func_690(&(uParam0->f_114.f_2655), uParam1, 0);
	}
	switch (uParam0->f_114.f_2011)
	{
		case 0:
			if (func_616(&(uParam0->f_114), uParam0->f_114.f_2474, 1))
			{
				func_617(&(uParam0->f_114), uParam0->f_114.f_2474, 1);
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_691(uParam0, uParam1);
				func_692(&(uParam0->f_114.f_2655), uParam1);
				iVar0 = 0;
				while (iVar0 < uParam1->f_15.f_23)
				{
					if (!func_693(&(uParam0->f_3310), iVar0))
					{
						__LIB_18__::func_542(&(uParam0->f_3310), iVar0, uParam1->f_15[iVar0 /*2*/], 1);
					}
					iVar0++;
				}
				func_592(&(uParam0->f_114), 19);
				return 1;
			}
			break;
		case 19:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2474) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2474, 1))
			{
				func_695(&(uParam0->f_3310), uParam0->f_114.f_2474, uParam1->f_2, 0);
				func_607(uParam0, uParam0->f_114.f_2474, 2, 6, -1);
				func_592(&(uParam0->f_114), 21);
			}
			break;
		case 21:
			if (__LIB_1__::func_285(&(uParam0->f_114.f_2012), 2.5f) || uParam0->f_3310.f_40)
			{
				func_696(uParam0, uParam1);
				func_592(&(uParam0->f_114), 22);
				return 1;
			}
			break;
		case 22:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2474) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2474, 6))
			{
				func_697(uParam0, uParam1);
				if (func_142(&(uParam0->f_114), 1) && func_143(uParam1, uParam0->f_114.f_9))
				{
					if (func_635(uParam1, uParam0->f_114.f_9))
					{
						func_636(&(uParam0->f_2979), uParam1, uParam0->f_114.f_9, 0);
					}
				}
				func_638(&(uParam0->f_114));
				func_592(&(uParam0->f_114), 23);
				return 1;
			}
			break;
		case 23:
			if (__LIB_1__::func_285(&(uParam0->f_114.f_2012), 2f) || uParam0->f_3310.f_40)
			{
				if (uParam0->f_114.f_2655 == 1)
				{
					return 0;
				}
				func_190(&(uParam0->f_114), 2);
				func_213(&(uParam0->f_114), 5, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_293(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	switch (uParam0->f_114.f_2011)
	{
		case 0:
			iVar2 = func_698(&(uParam0->f_114.f_773));
			if (func_699(&(uParam0->f_114), iVar2, 1))
			{
				func_700(&(uParam0->f_114), iVar2, 1);
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_701(uParam0, uParam1, 1);
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (func_476(uParam1, iVar0))
					{
						if (!func_702(&(uParam0->f_3310), iVar0))
						{
							func_630(&(uParam0->f_3310), iVar0, func_628(uParam1, iVar0, 0), func_628(uParam1, iVar0, 1), 0);
						}
					}
					iVar0++;
				}
				uParam0->f_114.f_2532 = uParam1->f_2;
				func_703(uParam0);
				if (__LIB_12__::func_292(uParam0, 2) && uParam0->f_114.f_2860 == 3)
				{
					uParam0->f_114.f_2528 = 2;
					func_592(&(uParam0->f_114), 11);
					return 1;
				}
				if (func_704(uParam1, &(uParam0->f_114.f_2528), 2))
				{
					func_592(&(uParam0->f_114), 11);
				}
				else
				{
					func_592(&(uParam0->f_114), 46);
				}
				return 1;
			}
			break;
		case 11:
			if (uParam0->f_3310.f_778 && uParam0->f_114.f_2147.f_118)
			{
				iVar0 = func_705(&(uParam0->f_114.f_2147));
				if (__LIB_12__::func_296(&(uParam0->f_3310), iVar0) && func_603(&(uParam0->f_3310), iVar0))
				{
					return 0;
				}
			}
			func_592(&(uParam0->f_114), 39);
			return 1;
		case 39:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2528, 1))
			{
				func_706(uParam0, uParam0->f_114.f_2528);
				if (uParam0->f_114.f_2535)
				{
					func_707(&(uParam0->f_3310), uParam0->f_114.f_2528, 0);
				}
				else
				{
					func_707(&(uParam0->f_3310), uParam0->f_114.f_2528, 1);
				}
				func_592(&(uParam0->f_114), 40);
			}
			break;
		case 40:
			if (__LIB_1__::func_285(&(uParam0->f_114.f_2012), 0.2f) || uParam0->f_3310.f_40)
			{
				func_708(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1, uParam0->f_114.f_2528, 0);
				func_709(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam0->f_114.f_2528);
				func_607(uParam0, uParam0->f_114.f_2528, 4, 6, -1);
				func_592(&(uParam0->f_114), 41);
			}
			break;
		case 41:
			if (__LIB_1__::func_285(&(uParam0->f_114.f_2012), 0.4f) || uParam0->f_3310.f_40)
			{
				func_710(uParam0, uParam1);
				func_592(&(uParam0->f_114), 42);
			}
			break;
		case 42:
			if (((!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 14)) || __LIB_1__::func_285(&(uParam0->f_114.f_2012), 0.35f)) || uParam0->f_3310.f_40)
			{
				if (uParam0->f_114.f_2536)
				{
					func_592(&(uParam0->f_114), 45);
					return 1;
				}
				else
				{
					func_592(&(uParam0->f_114), 43);
					return 1;
				}
			}
			break;
		case 45:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2533) || !func_476(uParam1, uParam0->f_114.f_2533))
			{
				func_592(&(uParam0->f_114), 43);
				return 1;
			}
			else if (__LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2533, 1))
			{
				func_712(&(uParam0->f_3310), uParam0->f_114.f_2533, 1, func_711(&(uParam0->f_114), uParam0->f_114.f_2533));
				func_713(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam0->f_114.f_2533);
				func_592(&(uParam0->f_114), 43);
				return 1;
			}
			break;
		case 43:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 14))
			{
				if ((uParam0->f_3310.f_778 && uParam0->f_114.f_2147.f_118) && !uParam0->f_3310.f_40)
				{
					if (((uParam0->f_114.f_2147.f_141 || uParam0->f_114.f_2147.f_142) && uParam0->f_114.f_2147.f_144) != uParam0->f_114.f_2147.f_144)
					{
						if ((__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && func_603(&(uParam0->f_3310), uParam0->f_114.f_2528)) && __LIB_0__::func_265(&(uParam0->f_114.f_2012)) < 5f)
						{
							return 0;
						}
					}
				}
				func_714(uParam0);
				func_592(&(uParam0->f_114), 44);
				return 1;
			}
			break;
		case 44:
			func_715(uParam0);
			func_632(&(uParam0->f_114), uParam0->f_114.f_2528, 1);
			if (__LIB_12__::func_292(uParam0, 2) && uParam0->f_114.f_2860 == 3)
			{
				if (uParam0->f_114.f_2528 == 2)
				{
					uParam0->f_114.f_2528 = 5;
					func_592(&(uParam0->f_114), 39);
					return 1;
				}
				else
				{
					func_592(&(uParam0->f_114), 46);
					return 1;
				}
			}
			if (func_188(uParam1, &(uParam0->f_114.f_2528), 2, 0))
			{
				func_592(&(uParam0->f_114), 39);
				return 1;
			}
			else
			{
				func_592(&(uParam0->f_114), 46);
				return 1;
			}
			break;
		case 46:
			func_638(&(uParam0->f_114));
			func_190(&(uParam0->f_114), 5);
			func_592(&(uParam0->f_114), 10);
			return 1;
		case 10:
			if (func_376(&(uParam0->f_114), -1442142035, 0, 1))
			{
				func_190(&(uParam0->f_114), 2);
				func_141(&(uParam0->f_114), 1, 0, 0);
				return 1;
			}
			else if (func_376(&(uParam0->f_114), 981015204, 0, 1))
			{
				func_190(&(uParam0->f_114), 5);
				func_141(&(uParam0->f_114), 1, 0, 0);
				return 1;
			}
			else if (func_376(&(uParam0->f_114), -1179646469, 1, 1))
			{
				func_592(&(uParam0->f_114), 66);
				return 1;
			}
			break;
		case 66:
			iVar3 = func_716(&(uParam0->f_114.f_773));
			if (func_699(&(uParam0->f_114), iVar3, 1) && func_616(&(uParam0->f_114), uParam0->f_114.f_2474, 1))
			{
				func_700(&(uParam0->f_114), iVar3, 1);
				func_617(&(uParam0->f_114), uParam0->f_114.f_2474, 0);
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_717(uParam0, uParam1, uParam0->f_114.f_2532);
				func_718(&(uParam0->f_114), uParam1, uParam0->f_114.f_2532);
				func_719(&(uParam0->f_114.f_2532));
				iVar1 = 0;
				while (iVar1 < uParam1->f_15.f_23)
				{
					if (!func_693(&(uParam0->f_3310), iVar1))
					{
						__LIB_18__::func_542(&(uParam0->f_3310), iVar1, uParam1->f_15[iVar1 /*2*/], 1);
					}
					iVar1++;
				}
				func_592(&(uParam0->f_114), 19);
				return 1;
			}
			break;
		case 19:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2474) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2474, 1))
			{
				func_695(&(uParam0->f_3310), uParam0->f_114.f_2474, uParam0->f_114.f_2532, 1);
				func_592(&(uParam0->f_114), 20);
				return 1;
			}
			break;
		case 20:
			if (uParam0->f_3310.f_778)
			{
				if ((((!func_720(&(uParam0->f_3310)) || !__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2474)) || !func_202(&(uParam0->f_3310), uParam0->f_114.f_2474, 6)) || func_721(&(uParam0->f_3310), uParam0->f_114.f_2474) >= 2.5f) || uParam0->f_3310.f_40)
				{
					if (func_722(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, &iVar4, &iVar5))
					{
						func_723(uParam0, iVar4, iVar5, 8);
						func_723(uParam0, iVar5, iVar4, 9);
					}
					func_607(uParam0, uParam0->f_114.f_2474, 3, 6, -1);
					func_592(&(uParam0->f_114), 21);
					return 1;
				}
				return 0;
			}
			func_592(&(uParam0->f_114), 21);
			return 1;
		case 21:
			if (((!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2474) || !func_202(&(uParam0->f_3310), uParam0->f_114.f_2474, 6)) || func_721(&(uParam0->f_3310), uParam0->f_114.f_2474) >= 2.5f) || uParam0->f_3310.f_40)
			{
				func_592(&(uParam0->f_114), 22);
				return 1;
			}
			break;
		case 22:
			if ((__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2474) && func_614(&(uParam0->f_3310), uParam0->f_114.f_2474, 6)) && !__LIB_12__::func_338(&(uParam0->f_3310), uParam0->f_114.f_2474, 2))
			{
				switch (uParam0->f_114.f_2532)
				{
					case 1:
						if (__LIB_12__::func_338(&(uParam0->f_3310), uParam0->f_114.f_2474, 0))
						{
							func_717(uParam0, uParam1, uParam0->f_114.f_2532);
							func_724(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1);
							func_725(&(uParam0->f_114), uParam1, uParam0->f_114.f_2532);
							func_719(&(uParam0->f_114.f_2532));
						}
						break;
					case 2:
						if (__LIB_12__::func_338(&(uParam0->f_3310), uParam0->f_114.f_2474, 1))
						{
							func_717(uParam0, uParam1, uParam0->f_114.f_2532);
							func_726(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1);
							func_725(&(uParam0->f_114), uParam1, uParam0->f_114.f_2532);
							func_719(&(uParam0->f_114.f_2532));
						}
						break;
				}
			}
			else
			{
				func_727(uParam0, uParam1);
				func_728(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1);
				func_725(&(uParam0->f_114), uParam1, 3);
				if (__LIB_1__::func_77(2, 512) || __LIB_1__::func_77(2, 2048))
				{
					__LIB_12__::func_436(13, 0);
					uParam0->f_114.f_2862 = 1;
				}
				func_592(&(uParam0->f_114), 23);
				return 1;
			}
			break;
		case 23:
			if (__LIB_1__::func_285(&(uParam0->f_114.f_2012), 1f) || uParam0->f_3310.f_40)
			{
				if (!func_729(uParam1, uParam0->f_114.f_2474))
				{
					func_632(&(uParam0->f_114), uParam0->f_114.f_2474, 1);
				}
				func_592(&(uParam0->f_114), 50);
				return 1;
			}
			break;
		case 50:
			if (!func_730(&(uParam0->f_114)))
			{
				func_213(&(uParam0->f_114), 8, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_294(var uParam0, var uParam1)
{
	bool bVar0;
	switch (uParam0->f_114.f_2011)
	{
		case 0:
			uParam0->f_114.f_2477 = 0;
			func_592(&(uParam0->f_114), 2);
			return 1;
		case 2:
			if (func_731(uParam0))
			{
				if (func_649(uParam0))
				{
					func_650(&(uParam0->f_114));
					func_592(&(uParam0->f_114), 3);
					return 1;
				}
			}
			if (__LIB_12__::func_292(uParam0, 2))
			{
				if (func_732(uParam1))
				{
					func_213(&(uParam0->f_114), 12, 99);
					return 1;
				}
			}
			else if (__LIB_12__::func_292(uParam0, 3))
			{
				if (func_733(uParam1))
				{
					__LIB_12__::func_433(0);
					func_213(&(uParam0->f_114), 13, 99);
					return 1;
				}
			}
			func_621(uParam0, &(uParam0->f_114), 3, 1, 1);
			func_592(&(uParam0->f_114), 54);
			return 1;
		case 3:
			if (func_645(uParam0, &(uParam0->f_114)))
			{
				func_646(uParam0);
				func_592(&(uParam0->f_114), 2);
				return 1;
			}
			break;
		case 54:
			uParam0->f_114.f_2528 = func_734(uParam1, uParam0->f_114.f_2477);
			if (uParam0->f_114.f_2528 != -1)
			{
				MISC::SET_BIT(&(uParam0->f_114.f_2477), uParam0->f_114.f_2528);
				func_592(&(uParam0->f_114), 69);
				return 1;
			}
			else
			{
				func_592(&(uParam0->f_114), 14);
				return 1;
			}
			break;
		case 69:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2528, 1))
			{
				func_679(&(uParam0->f_3310), uParam0->f_114.f_2528, uParam0->f_114.f_2474, 0);
				func_607(uParam0, uParam0->f_114.f_2528, 2, 6, -1);
				func_592(&(uParam0->f_114), 70);
			}
			break;
		case 70:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 15))
			{
				func_592(&(uParam0->f_114), 71);
				return 1;
			}
			break;
		case 71:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2528, 1))
			{
				bVar0 = uParam0->f_114.f_2477 != func_716(uParam1);
				func_735(&(uParam0->f_3310), uParam0->f_114.f_2528, func_144(uParam1, uParam0->f_114.f_2528), bVar0);
				uParam0->f_114.f_2146 = 0;
				func_736(uParam0, uParam1);
				func_592(&(uParam0->f_114), 72);
			}
			break;
		case 72:
			if (!uParam0->f_114.f_2146)
			{
				if ((!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 16)) || !func_720(&(uParam0->f_3310)))
				{
					func_643(&(uParam0->f_114));
					func_737(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1, uParam0->f_114.f_2528);
					func_738(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam0->f_114.f_2528);
					uParam0->f_114.f_2146 = 1;
				}
			}
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 16))
			{
				func_632(&(uParam0->f_114), uParam0->f_114.f_2528, 1);
				func_592(&(uParam0->f_114), 54);
				return 1;
			}
			break;
		case 14:
			func_638(&(uParam0->f_114));
			func_190(&(uParam0->f_114), 6);
			func_739(uParam0, uParam1);
			func_213(&(uParam0->f_114), 11, 0);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_295(var uParam0, var uParam1)
{
	switch (uParam0->f_114.f_2011)
	{
		case 0:
			if (func_704(&(uParam0->f_114.f_773), &(uParam0->f_114.f_2528), 0))
			{
				if (func_616(&(uParam0->f_114), uParam0->f_114.f_2528, 1))
				{
					func_617(&(uParam0->f_114), uParam0->f_114.f_2528, 1);
					func_141(&(uParam0->f_114), 1, 0, 0);
					func_592(&(uParam0->f_114), 2);
					return 1;
				}
			}
			else
			{
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_592(&(uParam0->f_114), 2);
				return 1;
			}
			break;
		case 2:
			if (func_731(uParam0))
			{
				if (func_649(uParam0))
				{
					func_650(&(uParam0->f_114));
					func_592(&(uParam0->f_114), 3);
					return 1;
				}
			}
			if (__LIB_12__::func_292(uParam0, 2))
			{
				if (func_732(uParam1))
				{
					func_213(&(uParam0->f_114), 12, 99);
					return 1;
				}
			}
			else if (__LIB_12__::func_292(uParam0, 3))
			{
				if (func_733(uParam1))
				{
					__LIB_12__::func_433(0);
					func_213(&(uParam0->f_114), 13, 99);
					return 1;
				}
			}
			func_621(uParam0, &(uParam0->f_114), 3, 1, 1);
			func_592(&(uParam0->f_114), 67);
			return 1;
		case 3:
			if (func_645(uParam0, &(uParam0->f_114)))
			{
				func_646(uParam0);
				func_592(&(uParam0->f_114), 67);
				return 1;
			}
			break;
		case 67:
			if (uParam0->f_114.f_2528 != -1)
			{
				func_592(&(uParam0->f_114), 69);
				return 1;
			}
			else
			{
				func_592(&(uParam0->f_114), 14);
				return 1;
			}
			break;
		case 69:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2528, 1))
			{
				func_679(&(uParam0->f_3310), uParam0->f_114.f_2528, uParam0->f_114.f_2474, 0);
				func_740(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1, uParam0->f_114.f_2528);
				func_741(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam0->f_114.f_2528);
				func_607(uParam0, uParam0->f_114.f_2528, 2, 6, -1);
				func_592(&(uParam0->f_114), 70);
			}
			break;
		case 70:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 15))
			{
				func_592(&(uParam0->f_114), 71);
				return 1;
			}
			break;
		case 71:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2528, 1))
			{
				func_735(&(uParam0->f_3310), uParam0->f_114.f_2528, func_144(uParam1, uParam0->f_114.f_2528), 0);
				uParam0->f_114.f_2146 = 0;
				func_742(uParam0, uParam1);
				func_592(&(uParam0->f_114), 72);
			}
			break;
		case 72:
			if (!uParam0->f_114.f_2146)
			{
				if ((!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 16)) || !func_720(&(uParam0->f_3310)))
				{
					func_643(&(uParam0->f_114));
					func_737(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1, uParam0->f_114.f_2528);
					func_738(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam0->f_114.f_2528);
					uParam0->f_114.f_2146 = 1;
				}
			}
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 16))
			{
				func_592(&(uParam0->f_114), 14);
				return 1;
			}
			break;
		case 14:
			func_638(&(uParam0->f_114));
			func_190(&(uParam0->f_114), 6);
			func_739(uParam0, uParam1);
			func_213(&(uParam0->f_114), 11, 0);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_296(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (func_743(&(uParam0->f_2979)))
	{
		if (__LIB_1__::func_732(uParam0->f_2979.f_326, 1))
		{
			uParam0->f_114.f_2121 = 1;
			func_745(&(uParam0->f_2979), 0);
		}
	}
	switch (uParam0->f_114.f_2011)
	{
		case 0:
			func_701(uParam0, &(uParam0->f_114.f_773), 0);
			func_703(uParam0);
			uParam0->f_114.f_2124 = 0;
			uParam0->f_114.f_2121 = 0;
			if (func_472(&(uParam0->f_114.f_773), uParam0->f_114.f_9))
			{
				func_745(&(uParam0->f_2979), 1);
			}
			func_592(&(uParam0->f_114), 12);
			return 1;
		case 12:
			if (func_704(&(uParam0->f_114.f_773), &(uParam0->f_114.f_2528), 2))
			{
				if (func_616(&(uParam0->f_114), uParam0->f_114.f_2528, 1))
				{
					func_617(&(uParam0->f_114), uParam0->f_114.f_2528, 1);
					func_141(&(uParam0->f_114), 1, 0, 0);
					func_592(&(uParam0->f_114), 11);
					return 1;
				}
			}
			else
			{
				func_190(&(uParam0->f_114), 2);
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_592(&(uParam0->f_114), 6);
				return 1;
			}
			break;
		case 1:
			func_703(uParam0);
			uParam0->f_114.f_2124 = 0;
			uParam0->f_114.f_2121 = 0;
			func_592(&(uParam0->f_114), 25);
			return 1;
		case 11:
			if (uParam0->f_3310.f_778 && uParam0->f_114.f_2147.f_118)
			{
				iVar2 = func_705(&(uParam0->f_114.f_2147));
				if (__LIB_12__::func_296(&(uParam0->f_3310), iVar2) && func_603(&(uParam0->f_3310), iVar2))
				{
					return 0;
				}
			}
			func_592(&(uParam0->f_114), 56);
			return 1;
		case 56:
			uParam0->f_114.f_2529 = func_746(uParam1, uParam0->f_114.f_2528);
			func_630(&(uParam0->f_3310), uParam0->f_114.f_2528, func_628(uParam1, uParam0->f_114.f_2528, 0), func_628(uParam1, uParam0->f_114.f_2528, 1), 0);
			func_592(&(uParam0->f_114), 57);
			return 1;
		case 57:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2528, 1))
			{
				func_706(uParam0, uParam0->f_114.f_2528);
				if (func_747(uParam1, uParam0->f_114.f_2529))
				{
					uParam0->f_114.f_2535 = 1;
				}
				if (uParam0->f_114.f_2535)
				{
					func_707(&(uParam0->f_3310), uParam0->f_114.f_2528, 0);
				}
				else
				{
					func_707(&(uParam0->f_3310), uParam0->f_114.f_2528, 1);
				}
				if (!uParam0->f_114.f_2124)
				{
					func_748(uParam0, uParam1, uParam0->f_114.f_2529);
					uParam0->f_114.f_2124 = 1;
				}
				func_592(&(uParam0->f_114), 58);
			}
			break;
		case 58:
			if (__LIB_1__::func_285(&(uParam0->f_114.f_2012), 0.2f) || uParam0->f_3310.f_40)
			{
				func_708(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1, uParam0->f_114.f_2528, 0);
				if (func_747(uParam1, uParam0->f_114.f_2529))
				{
					func_749(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam0->f_114.f_2528, uParam0->f_114.f_2529);
				}
				else
				{
					func_709(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam0->f_114.f_2528);
				}
				func_607(uParam0, uParam0->f_114.f_2528, 4, 6, -1);
				func_592(&(uParam0->f_114), 59);
			}
			break;
		case 59:
			if (__LIB_1__::func_285(&(uParam0->f_114.f_2012), 0.4f) || uParam0->f_3310.f_40)
			{
				func_710(uParam0, uParam1);
				func_592(&(uParam0->f_114), 60);
			}
			break;
		case 60:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 14))
			{
				if ((uParam0->f_3310.f_778 && uParam0->f_114.f_2147.f_118) && !uParam0->f_3310.f_40)
				{
					if (((uParam0->f_114.f_2147.f_141 || uParam0->f_114.f_2147.f_142) && uParam0->f_114.f_2147.f_144) != uParam0->f_114.f_2147.f_144)
					{
						if ((__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && func_603(&(uParam0->f_3310), uParam0->f_114.f_2528)) && __LIB_0__::func_265(&(uParam0->f_114.f_2012)) < 5f)
						{
							return 0;
						}
					}
				}
				func_714(uParam0);
				func_715(uParam0);
				if (func_747(uParam1, uParam0->f_114.f_2529))
				{
					func_592(&(uParam0->f_114), 86);
					return 1;
				}
				else
				{
					func_638(&(uParam0->f_114));
					func_190(&(uParam0->f_114), 2);
					func_592(&(uParam0->f_114), 6);
					return 1;
				}
			}
			break;
		case 86:
			if (func_731(uParam0))
			{
				if (func_649(uParam0))
				{
					func_650(&(uParam0->f_114));
					func_592(&(uParam0->f_114), 87);
					return 1;
				}
			}
			if (__LIB_12__::func_292(uParam0, 2))
			{
				if (func_732(uParam1))
				{
					func_213(&(uParam0->f_114), 12, 0);
					return 1;
				}
			}
			else if (__LIB_12__::func_292(uParam0, 3))
			{
				if (func_733(uParam1))
				{
					__LIB_12__::func_433(0);
					func_213(&(uParam0->f_114), 13, 0);
					return 1;
				}
			}
			func_592(&(uParam0->f_114), 88);
			return 1;
		case 87:
			if (func_645(uParam0, &(uParam0->f_114)))
			{
				func_646(uParam0);
				func_592(&(uParam0->f_114), 86);
				return 1;
			}
			break;
		case 88:
			func_750(uParam0, uParam1);
			func_751(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1, uParam0->f_114.f_2529);
			func_621(uParam0, &(uParam0->f_114), 3, 1, 1);
			func_592(&(uParam0->f_114), 89);
			return 1;
		case 89:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2528, 1))
			{
				bVar1 = true;
				func_735(&(uParam0->f_3310), uParam0->f_114.f_2528, func_144(uParam1, uParam0->f_114.f_2528), bVar1);
				uParam0->f_114.f_2146 = 0;
				func_752(uParam0, uParam1);
				func_592(&(uParam0->f_114), 90);
			}
			break;
		case 90:
			if (!uParam0->f_114.f_2146)
			{
				if ((!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 16)) || !func_720(&(uParam0->f_3310)))
				{
					func_643(&(uParam0->f_114));
					func_737(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1, uParam0->f_114.f_2528);
					func_738(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam0->f_114.f_2528);
					uParam0->f_114.f_2146 = 1;
				}
			}
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 16))
			{
				func_632(&(uParam0->f_114), uParam0->f_114.f_2528, 1);
				func_592(&(uParam0->f_114), 91);
				return 1;
			}
			break;
		case 91:
			if ((!func_202(&(uParam0->f_3310), uParam0->f_114.f_2528, 16) || __LIB_12__::func_338(&(uParam0->f_3310), uParam0->f_114.f_2528, 1)) || func_665(uParam1) == 0)
			{
				func_753(uParam0, uParam1);
				uParam0->f_114.f_2124 = 0;
				func_638(&(uParam0->f_114));
				func_190(&(uParam0->f_114), 2);
				func_592(&(uParam0->f_114), 6);
				return 1;
			}
			break;
		case 6:
			if (func_376(&(uParam0->f_114), -441318505, 0, 1))
			{
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_592(&(uParam0->f_114), 25);
				return 1;
			}
			else if (func_376(&(uParam0->f_114), 981015204, 1, 1))
			{
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_592(&(uParam0->f_114), 36);
				return 1;
			}
			break;
		case 25:
			uParam0->f_114.f_2528 = uParam1->f_6;
			uParam0->f_114.f_2529 = func_746(uParam1, uParam0->f_114.f_2528);
			if (!uParam0->f_114.f_2124)
			{
				func_748(uParam0, uParam1, uParam0->f_114.f_2529);
				uParam0->f_114.f_2124 = 1;
			}
			uParam0->f_114.f_2120 = 0;
			func_592(&(uParam0->f_114), 26);
			return 1;
		case 26:
			if (!uParam0->f_114.f_2120)
			{
				if (__LIB_12__::func_342(&(uParam0->f_114), uParam1->f_6))
				{
					if (uParam0->f_114.f_2121)
					{
						if (func_658(&(uParam0->f_114), uParam1->f_6))
						{
							func_745(&(uParam0->f_2979), 0);
							uParam0->f_114.f_2120 = 1;
						}
					}
					else if ((!func_743(&(uParam0->f_2979)) || func_754(&(uParam0->f_2979)) > 2f) || uParam0->f_3310.f_40)
					{
						if (func_755(&(uParam0->f_114), uParam1->f_6))
						{
							func_745(&(uParam0->f_2979), 0);
							uParam0->f_114.f_2120 = 1;
						}
					}
				}
				else
				{
					func_755(&(uParam0->f_114), uParam1->f_6);
					uParam0->f_114.f_2120 = 1;
				}
			}
			if (func_376(&(uParam0->f_114), -1766937362, 0, 1))
			{
				func_592(&(uParam0->f_114), 27);
				return 1;
			}
			else if (func_376(&(uParam0->f_114), 402903974, 1, 1))
			{
				func_592(&(uParam0->f_114), 65);
				return 1;
			}
			break;
		case 27:
			if (func_616(&(uParam0->f_114), uParam0->f_114.f_773.f_6, 1))
			{
				func_617(&(uParam0->f_114), uParam0->f_114.f_773.f_6, 1);
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_592(&(uParam0->f_114), 28);
				return 1;
			}
			break;
		case 28:
			if (func_476(uParam1, uParam1->f_6))
			{
				func_630(&(uParam0->f_3310), uParam1->f_6, func_628(uParam1, uParam1->f_6, 0), func_628(uParam1, uParam1->f_6, 1), 0);
				func_592(&(uParam0->f_114), 39);
				return 1;
			}
			else if (func_475(uParam1, uParam1->f_6))
			{
				func_592(&(uParam0->f_114), 61);
				return 1;
			}
			break;
		case 39:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2528, 1))
			{
				func_706(uParam0, uParam0->f_114.f_2528);
				if (uParam0->f_114.f_2535)
				{
					func_707(&(uParam0->f_3310), uParam0->f_114.f_2528, 0);
				}
				else
				{
					func_707(&(uParam0->f_3310), uParam0->f_114.f_2528, 1);
				}
				func_592(&(uParam0->f_114), 40);
			}
			break;
		case 40:
			if (__LIB_1__::func_285(&(uParam0->f_114.f_2012), 0.2f) || uParam0->f_3310.f_40)
			{
				func_708(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1, uParam0->f_114.f_2528, 0);
				func_709(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam0->f_114.f_2528);
				func_607(uParam0, uParam0->f_114.f_2528, 4, 6, -1);
				func_592(&(uParam0->f_114), 41);
			}
			break;
		case 41:
			if (__LIB_1__::func_285(&(uParam0->f_114.f_2012), 0.2f) || uParam0->f_3310.f_40)
			{
				func_710(uParam0, uParam1);
				func_592(&(uParam0->f_114), 42);
			}
			break;
		case 42:
			if (((!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 14)) || __LIB_1__::func_285(&(uParam0->f_114.f_2012), 0.35f)) || uParam0->f_3310.f_40)
			{
				if (uParam0->f_114.f_2536)
				{
					func_592(&(uParam0->f_114), 45);
					return 1;
				}
				else
				{
					func_592(&(uParam0->f_114), 43);
					return 1;
				}
			}
			break;
		case 45:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2533) || !func_476(uParam1, uParam0->f_114.f_2533))
			{
				func_592(&(uParam0->f_114), 43);
				return 1;
			}
			else if (__LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2533, 1))
			{
				func_712(&(uParam0->f_3310), uParam0->f_114.f_2533, 1, func_756(&(uParam0->f_114), uParam0->f_114.f_2533, uParam0->f_114.f_2529));
				func_713(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam0->f_114.f_2533);
				func_592(&(uParam0->f_114), 43);
				return 1;
			}
			break;
		case 43:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 14))
			{
				if ((uParam0->f_3310.f_778 && uParam0->f_114.f_2147.f_118) && !uParam0->f_3310.f_40)
				{
					if (((uParam0->f_114.f_2147.f_141 || uParam0->f_114.f_2147.f_142) && uParam0->f_114.f_2147.f_144) != uParam0->f_114.f_2147.f_144)
					{
						if ((__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && func_603(&(uParam0->f_3310), uParam0->f_114.f_2528)) && __LIB_0__::func_265(&(uParam0->f_114.f_2012)) < 5f)
						{
							return 0;
						}
					}
				}
				func_714(uParam0);
				func_715(uParam0);
				func_592(&(uParam0->f_114), 64);
				return 1;
			}
			break;
		case 61:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2528, 1))
			{
				func_679(&(uParam0->f_3310), uParam0->f_114.f_2528, uParam0->f_114.f_2474, 1);
				func_592(&(uParam0->f_114), 62);
			}
			break;
		case 62:
			if (__LIB_1__::func_285(&(uParam0->f_114.f_2012), 0.2f) || uParam0->f_3310.f_40)
			{
				func_708(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1, uParam0->f_114.f_2528, 1);
				func_757(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam0->f_114.f_2528);
				func_607(uParam0, uParam0->f_114.f_2528, 4, 6, -1);
				func_758(uParam0);
				func_592(&(uParam0->f_114), 63);
			}
			break;
		case 63:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 15))
			{
				if ((uParam0->f_3310.f_778 && uParam0->f_114.f_2147.f_118) && !uParam0->f_3310.f_40)
				{
					if (((uParam0->f_114.f_2147.f_141 || uParam0->f_114.f_2147.f_142) && uParam0->f_114.f_2147.f_144) != uParam0->f_114.f_2147.f_144)
					{
						if ((__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && func_603(&(uParam0->f_3310), uParam0->f_114.f_2528)) && __LIB_0__::func_265(&(uParam0->f_114.f_2012)) < 5f)
						{
							return 0;
						}
					}
				}
				func_714(uParam0);
				func_759(uParam0);
				func_592(&(uParam0->f_114), 64);
				return 1;
			}
			break;
		case 64:
			func_638(&(uParam0->f_114));
			func_190(&(uParam0->f_114), 3);
			func_592(&(uParam0->f_114), 7);
			return 1;
		case 7:
			if (func_376(&(uParam0->f_114), 402903974, 1, 1))
			{
				func_592(&(uParam0->f_114), 65);
				return 1;
			}
			break;
		case 65:
			if (func_760(&(uParam0->f_114.f_773), uParam0->f_114.f_2529) > 0)
			{
				func_592(&(uParam0->f_114), 66);
				return 1;
			}
			else
			{
				func_190(&(uParam0->f_114), 4);
				func_141(&(uParam0->f_114), 0, -1857735811, 402903974);
				func_592(&(uParam0->f_114), 6);
				return 1;
			}
			break;
		case 66:
			iVar0 = func_761(&(uParam0->f_114.f_773), uParam0->f_114.f_2529);
			if (func_699(&(uParam0->f_114), iVar0, 1) || iVar0 == 0)
			{
				func_700(&(uParam0->f_114), iVar0, 1);
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_592(&(uParam0->f_114), 2);
				return 1;
			}
			break;
		case 2:
			if (func_731(uParam0))
			{
				if (func_649(uParam0))
				{
					func_650(&(uParam0->f_114));
					func_592(&(uParam0->f_114), 3);
					return 1;
				}
			}
			if (__LIB_12__::func_292(uParam0, 2))
			{
				if (func_732(uParam1))
				{
					func_213(&(uParam0->f_114), 12, 0);
					return 1;
				}
			}
			else if (__LIB_12__::func_292(uParam0, 3))
			{
				if (func_733(uParam1))
				{
					__LIB_12__::func_433(0);
					func_213(&(uParam0->f_114), 13, 0);
					return 1;
				}
			}
			func_592(&(uParam0->f_114), 47);
			return 1;
		case 3:
			if (func_645(uParam0, &(uParam0->f_114)))
			{
				func_646(uParam0);
				func_592(&(uParam0->f_114), 2);
				return 1;
			}
			break;
		case 47:
			func_750(uParam0, uParam1);
			func_751(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1, uParam0->f_114.f_2529);
			if (func_760(uParam1, uParam0->f_114.f_2529) == 1 && func_762(uParam1, uParam0->f_114.f_2529, uParam0->f_114.f_2528))
			{
				func_592(&(uParam0->f_114), 51);
				return 1;
			}
			uParam0->f_114.f_2477 = 0;
			uParam0->f_114.f_2528 = func_763(uParam1, uParam0->f_114.f_2529, uParam0->f_114.f_2477);
			func_592(&(uParam0->f_114), 48);
			return 1;
		case 48:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2528, 1))
			{
				func_712(&(uParam0->f_3310), uParam0->f_114.f_2528, 0, 1);
				func_741(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam0->f_114.f_2528);
				MISC::SET_BIT(&(uParam0->f_114.f_2477), uParam0->f_114.f_2528);
				func_592(&(uParam0->f_114), 49);
				return 1;
			}
			break;
		case 49:
			if (__LIB_0__::func_265(&(uParam0->f_114.f_2012)) > 0.2f || uParam0->f_3310.f_40)
			{
				uParam0->f_114.f_2528 = func_763(uParam1, uParam0->f_114.f_2529, uParam0->f_114.f_2477);
				if (func_143(uParam1, uParam0->f_114.f_2528))
				{
					func_592(&(uParam0->f_114), 48);
					return 1;
				}
				else
				{
					func_592(&(uParam0->f_114), 51);
					return 1;
				}
			}
			break;
		case 51:
			uParam0->f_114.f_2530 = 0;
			uParam0->f_114.f_2528 = uParam1->f_376[uParam0->f_114.f_2529 /*18*/].f_10[uParam0->f_114.f_2530];
			func_621(uParam0, &(uParam0->f_114), 3, 1, 1);
			func_592(&(uParam0->f_114), 52);
			return 1;
		case 52:
			if (func_665(uParam1) == 0)
			{
				func_592(&(uParam0->f_114), 69);
				return 1;
			}
			else
			{
				func_592(&(uParam0->f_114), 71);
				return 1;
			}
			break;
		case 69:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2528, 1))
			{
				func_679(&(uParam0->f_3310), uParam0->f_114.f_2528, uParam0->f_114.f_2474, 0);
				func_607(uParam0, uParam0->f_114.f_2528, 2, 6, -1);
				func_592(&(uParam0->f_114), 70);
			}
			break;
		case 70:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 15))
			{
				func_592(&(uParam0->f_114), 71);
				return 1;
			}
			break;
		case 71:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2528, 1))
			{
				bVar1 = (uParam0->f_114.f_2530 < (uParam1->f_376[uParam0->f_114.f_2529 /*18*/].f_17 - 1) || uParam0->f_114.f_2529 > 0);
				func_735(&(uParam0->f_3310), uParam0->f_114.f_2528, func_144(uParam1, uParam0->f_114.f_2528), bVar1);
				uParam0->f_114.f_2146 = 0;
				func_752(uParam0, uParam1);
				func_592(&(uParam0->f_114), 72);
			}
			break;
		case 72:
			if (!uParam0->f_114.f_2146)
			{
				if ((!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 16)) || !func_720(&(uParam0->f_3310)))
				{
					func_643(&(uParam0->f_114));
					func_737(&(uParam0->f_114), &(uParam0->f_114.f_2147), uParam1, uParam0->f_114.f_2528);
					func_738(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), uParam1, uParam0->f_114.f_2528);
					uParam0->f_114.f_2146 = 1;
				}
			}
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2528) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2528, 16))
			{
				func_632(&(uParam0->f_114), uParam0->f_114.f_2528, 1);
				func_592(&(uParam0->f_114), 54);
				return 1;
			}
			break;
		case 54:
			uParam0->f_114.f_2530++;
			if (uParam0->f_114.f_2530 < uParam1->f_376[uParam0->f_114.f_2529 /*18*/].f_17)
			{
				uParam0->f_114.f_2528 = uParam1->f_376[uParam0->f_114.f_2529 /*18*/].f_10[uParam0->f_114.f_2530];
				func_592(&(uParam0->f_114), 52);
				return 1;
			}
			else if ((!func_202(&(uParam0->f_3310), uParam0->f_114.f_2528, 16) || __LIB_12__::func_338(&(uParam0->f_3310), uParam0->f_114.f_2528, 1)) || func_665(uParam1) == 0)
			{
				func_753(uParam0, uParam1);
				uParam0->f_114.f_2124 = 0;
				func_638(&(uParam0->f_114));
				func_190(&(uParam0->f_114), 4);
				func_592(&(uParam0->f_114), 6);
				return 1;
			}
			break;
		case 36:
			func_190(&(uParam0->f_114), 5);
			func_745(&(uParam0->f_2979), 0);
			func_592(&(uParam0->f_114), 9);
			return 1;
		case 9:
			if (func_376(&(uParam0->f_114), -1179646469, 1, 1))
			{
				func_141(&(uParam0->f_114), 1, 0, 0);
				func_190(&(uParam0->f_114), 6);
				func_739(uParam0, uParam1);
				func_213(&(uParam0->f_114), 11, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_297(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	if (uParam0->f_114.f_2011 != 0)
	{
		func_765(uParam0, uParam1, 149850);
	}
	switch (uParam0->f_114.f_2011)
	{
		case 0:
			if (func_376(&(uParam0->f_114), -1773144867, 1, 1))
			{
				func_766(&(uParam0->f_114), uParam1);
				func_141(&(uParam0->f_114), 1, 0, 0);
				if (__LIB_12__::func_292(uParam0, 0))
				{
					if (func_767(uParam0, &(uParam0->f_114), bVar3))
					{
						func_768(&(uParam0->f_114));
					}
				}
				if (!func_142(&(uParam0->f_114), 5))
				{
					func_621(uParam0, &(uParam0->f_114), 2, 1, 1);
				}
				func_769(uParam0);
				func_770(uParam0, 1, 0);
				if (__LIB_12__::func_292(uParam0, 1))
				{
					func_771(uParam0);
				}
				if (__LIB_12__::func_292(uParam0, 0) || __LIB_12__::func_292(uParam0, 1))
				{
					__LIB_7__::func_741();
				}
				if (__LIB_12__::func_292(uParam0, 3))
				{
					if (func_773(uParam1, -1) != -1)
					{
						func_213(&(uParam0->f_114), 14, 0);
						return 1;
					}
				}
				func_592(&(uParam0->f_114), 69);
				return 1;
			}
			break;
		case 69:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (iVar0 != uParam0->f_114.f_2474)
				{
					if (((func_143(uParam1, iVar0) && __LIB_12__::func_296(&(uParam0->f_3310), iVar0)) && __LIB_12__::func_343(&(uParam0->f_3310), iVar0)) && __LIB_12__::func_344(&(uParam0->f_3310), iVar0) == 3)
					{
						func_776(&(uParam0->f_114), iVar0, 1);
					}
				}
				iVar0++;
			}
			func_592(&(uParam0->f_114), 70);
			return 0;
		case 70:
			if (!func_777(&(uParam0->f_114), 1))
			{
				bVar2 = true;
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (__LIB_12__::func_296(&(uParam0->f_3310), iVar0) && func_614(&(uParam0->f_3310), iVar0, 15))
					{
						bVar2 = false;
					}
					iVar0++;
				}
				if (bVar2)
				{
					func_592(&(uParam0->f_114), 12);
					return 1;
				}
			}
			break;
		case 12:
			iVar1 = uParam1->f_3;
			if (uParam0->f_114.f_2473 || !func_778(uParam1, &iVar1, 1))
			{
				iVar1 = uParam0->f_114.f_2474;
			}
			if (func_616(&(uParam0->f_114), uParam0->f_114.f_2474, 1) && func_616(&(uParam0->f_114), iVar1, 1))
			{
				func_617(&(uParam0->f_114), uParam0->f_114.f_2474, 1);
				func_617(&(uParam0->f_114), iVar1, 0);
				uParam0->f_114.f_2475 = iVar1;
				func_592(&(uParam0->f_114), 80);
				return 1;
			}
			break;
		case 80:
			if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2474) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2474, 1))
			{
				bVar5 = uParam0->f_114.f_2475 != uParam0->f_114.f_2474;
				func_779(&(uParam0->f_3310), uParam0->f_114.f_2474, bVar5, uParam0->f_114.f_2475);
				func_592(&(uParam0->f_114), 84);
				return 1;
			}
			break;
		case 84:
			if (func_780(uParam1) > 0)
			{
				if (func_143(uParam1, uParam0->f_114.f_9) && func_144(uParam1, uParam0->f_114.f_9) == 0)
				{
					if (__LIB_12__::func_292(uParam0, 2))
					{
						__LIB_12__::func_436(0, 0);
						func_213(&(uParam0->f_114), 14, 0);
						return 1;
					}
				}
				func_781(uParam0, uParam1);
				func_642(&(uParam0->f_114), 0);
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (func_143(uParam1, iVar0) && func_144(uParam1, iVar0) == 0)
					{
						if (iVar0 == uParam0->f_114.f_9)
						{
							if (__LIB_0__::func_492(1) < func_145(uParam0, uParam0->f_114.f_10.f_12))
							{
								func_776(&(uParam0->f_114), iVar0, 4);
							}
						}
						else
						{
							func_776(&(uParam0->f_114), iVar0, 5);
						}
					}
					iVar0++;
				}
			}
			else if (__LIB_12__::func_292(uParam0, 0) && uParam0->f_114.f_2147.f_130)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				iVar4 = 0;
				while (iVar4 < 6)
				{
					if (func_143(uParam1, iVar0))
					{
						if (func_782(uParam0, &(uParam0->f_114), iVar0, uParam0->f_114.f_2475, bVar3))
						{
							func_776(&(uParam0->f_114), iVar0, 3);
							func_642(&(uParam0->f_114), 1);
						}
						else
						{
							iVar0 = (iVar0 + 1 % 6);
							iVar4++;
						}
						func_592(&(uParam0->f_114), 81);
						return 1;
						Jump @1915; //curOff = 1084
						if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2474))
						{
							if (func_614(&(uParam0->f_3310), uParam0->f_114.f_2474, 17))
							{
								if (__LIB_12__::func_338(&(uParam0->f_3310), uParam0->f_114.f_2474, 0))
								{
									if (uParam0->f_114.f_2475 != uParam0->f_114.f_2474)
									{
										func_723(uParam0, uParam0->f_114.f_2475, uParam0->f_114.f_2474, 5);
									}
									__LIB_12__::func_340(&(uParam0->f_3310), uParam0->f_114.f_2474, 0);
								}
							}
							else
							{
								func_632(&(uParam0->f_114), uParam0->f_114.f_2474, 1);
								func_187(&(uParam0->f_114), uParam0->f_114.f_2475);
								if (func_783(&(uParam0->f_114)) && func_784(&(uParam0->f_3310)))
								{
									func_592(&(uParam0->f_114), 82);
									return 1;
								}
								else
								{
									if (func_785(&(uParam0->f_114), uParam0->f_114.f_2474))
									{
										func_632(&(uParam0->f_114), uParam0->f_114.f_2474, 1);
									}
									func_592(&(uParam0->f_114), 14);
									return 1;
								}
							}
						}
						Jump @1915; //curOff = 1328
						if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2474) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_2474, 1))
						{
							func_786(&(uParam0->f_3310), uParam0->f_114.f_2474);
							func_592(&(uParam0->f_114), 83);
							return 1;
						}
						Jump @1915; //curOff = 1402
						if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2474) || !func_614(&(uParam0->f_3310), uParam0->f_114.f_2474, 19))
						{
							func_632(&(uParam0->f_114), uParam0->f_114.f_2474, 1);
							func_592(&(uParam0->f_114), 14);
							return 1;
						}
						Jump @1915; //curOff = 1481
						if (!func_787(&(uParam0->f_114)))
						{
							uParam0->f_114.f_2138++;
							func_638(&(uParam0->f_114));
							__LIB_19__::func_255(&(uParam0->f_3310), 0);
							__LIB_19__::func_256(&(uParam0->f_3310), 0);
							func_790(&(uParam0->f_3310));
							func_791(&(uParam0->f_3310));
							__LIB_18__::func_543(&(uParam0->f_3310), 1);
							__LIB_18__::func_544(&(uParam0->f_3310), 1);
							if (__LIB_12__::func_292(uParam0, 3))
							{
								if (uParam0->f_114.f_2138 == 1)
								{
									func_794(uParam0);
								}
							}
							if ((func_143(uParam1, uParam0->f_114.f_9) && func_144(uParam1, uParam0->f_114.f_9) > 0) && func_795(uParam1) == 1)
							{
								if (func_796(&(uParam0->f_114), uParam0->f_114.f_9) && func_797(&(uParam0->f_114), uParam0->f_114.f_9, 1))
								{
									func_220(&(uParam0->f_114), uParam0->f_114.f_9, 0);
									func_379(uParam0, &(uParam0->f_114));
								}
								return 0;
							}
							if (__LIB_12__::func_292(uParam0, 2) && __LIB_1__::func_77(2, 1024))
							{
								func_211(&(uParam0->f_114), 3);
								__LIB_12__::func_436(14, 0);
							}
							func_190(&(uParam0->f_114), 7);
							func_585(&(uParam0->f_114.f_2655));
							func_798(&(uParam0->f_114), &(uParam0->f_3310));
							if (!func_783(&(uParam0->f_114)))
							{
								func_213(&(uParam0->f_114), 3, 0);
								return 1;
							}
							else
							{
								func_592(&(uParam0->f_114), 85);
								return 1;
							}
						}
						Jump @1915; //curOff = 1835
						bVar2 = true;
						iVar0 = 0;
						while (iVar0 < 6)
						{
							if (__LIB_12__::func_296(&(uParam0->f_3310), iVar0))
							{
								if (func_799(&(uParam0->f_3310), iVar0))
								{
									bVar2 = false;
								}
							}
							iVar0++;
						}
						if (bVar2)
						{
							func_213(&(uParam0->f_114), 0, 0);
							return 1;
						}
						return 0;
					}
				}
			}
			default:
				break;
	}
}

int func_298(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	switch (uParam0->f_114.f_2011)
	{
		case 0:
			while (func_139(&(uParam0->f_114), 1))
			{
				if (func_376(&(uParam0->f_114), -1179646469, 0, 1))
				{
					func_141(&(uParam0->f_114), 1, 0, 0);
					func_592(&(uParam0->f_114), 99);
					return 1;
				}
				else if (uParam1->f_2 == 4 && func_376(&(uParam0->f_114), -441318505, 0, 1))
				{
					func_141(&(uParam0->f_114), 1, 0, 0);
					func_755(&(uParam0->f_114), uParam1->f_6);
				}
				else
				{
					func_141(&(uParam0->f_114), 1, 0, 0);
				}
			}
			if (func_800(&(uParam0->f_114)))
			{
				func_801(&(uParam0->f_114));
			}
			break;
		case 99:
			func_739(uParam0, uParam1);
			if (!uParam0->f_114.f_2862)
			{
				if (__LIB_1__::func_77(2, 512))
				{
					__LIB_12__::func_436(13, 0);
				}
			}
			func_592(&(uParam0->f_114), 92);
			return 1;
		case 92:
			if (__LIB_1__::func_77(2, 8192))
			{
				if (!func_802(uParam0->f_1.f_38))
				{
					return 0;
				}
				if (__LIB_1__::func_77(2, 1024))
				{
					func_592(&(uParam0->f_114), 93);
				}
				else
				{
					func_592(&(uParam0->f_114), 95);
				}
				return 1;
			}
			break;
		case 93:
			if (__LIB_12__::func_296(&(uParam0->f_3310), 5) && __LIB_18__::func_540(&(uParam0->f_3310), 5, 1))
			{
				func_803(&(uParam0->f_3310), 5);
				func_592(&(uParam0->f_114), 94);
				return 1;
			}
			break;
		case 94:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), 5) || !func_614(&(uParam0->f_3310), 5, 28))
			{
				func_592(&(uParam0->f_114), 95);
				return 1;
			}
			break;
		case 95:
			uParam0->f_114.f_2138++;
			__LIB_18__::func_543(&(uParam0->f_3310), 0);
			__LIB_18__::func_544(&(uParam0->f_3310), 0);
			func_585(&(uParam0->f_114.f_2655));
			func_219(&(uParam0->f_114), 1);
			func_804(&(uParam0->f_3310), 1);
			func_638(&(uParam0->f_114));
			iVar1 = func_805(uParam0->f_1.f_38);
			if (__LIB_1__::func_77(2, 512))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_cards01x", uParam0->f_3310.f_688, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk^4", uParam0->f_3310.f_671.f_11[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk^3", uParam0->f_3310.f_671.f_11[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk^2", uParam0->f_3310.f_671.f_11[2], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk^1", uParam0->f_3310.f_671.f_11[3], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk", uParam0->f_3310.f_671.f_11[4], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk^9", uParam0->f_3310.f_616[0 /*9*/].f_5[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk^10", uParam0->f_3310.f_616[0 /*9*/].f_5[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk^6", uParam0->f_3310.f_616[1 /*9*/].f_5[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk^5", uParam0->f_3310.f_616[1 /*9*/].f_5[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk^7", uParam0->f_3310.f_616[2 /*9*/].f_5[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk^8", uParam0->f_3310.f_616[2 /*9*/].f_5[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk^12", uParam0->f_3310.f_616[3 /*9*/].f_5[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk^11", uParam0->f_3310.f_616[3 /*9*/].f_5[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk^14", uParam0->f_3310.f_616[5 /*9*/].f_5[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk^13", uParam0->f_3310.f_616[5 /*9*/].f_5[1], 0);
			}
			else if (__LIB_1__::func_77(2, 1024))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_gk", uParam0->f_3310.f_616[2 /*9*/].f_5[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_Gk^1", uParam0->f_3310.f_616[2 /*9*/].f_5[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_Gk^2", uParam0->f_3310.f_616[5 /*9*/].f_5[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_Gk^3", uParam0->f_3310.f_616[5 /*9*/].f_5[0], 0);
			}
			else if (__LIB_1__::func_77(2, 2048))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_Gk^4", uParam0->f_3310.f_616[2 /*9*/].f_5[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_Gk^5", uParam0->f_3310.f_616[2 /*9*/].f_5[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_Gk^6", uParam0->f_3310.f_616[5 /*9*/].f_5[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "p_crd_2_c01x_Gk^7", uParam0->f_3310.f_616[5 /*9*/].f_5[0], 0);
			}
			__LIB_1__::func_211(2, 16384);
			__LIB_1__::func_212(2, 8192);
			__LIB_1__::func_212(2, 32768);
			if (__LIB_1__::func_77(2, 2048))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (__LIB_12__::func_296(&(uParam0->f_3310), iVar0))
					{
						__LIB_18__::func_563(&(uParam0->f_3310), iVar0, 1);
					}
					iVar0++;
				}
			}
			func_592(&(uParam0->f_114), 96);
			return 1;
		case 96:
			iVar1 = func_805(uParam0->f_1.f_38);
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar1) || ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar1, false))
			{
				func_769(uParam0);
				__LIB_19__::func_255(&(uParam0->f_3310), 0);
				__LIB_19__::func_256(&(uParam0->f_3310), 0);
				if (__LIB_1__::func_77(2, 1024) || __LIB_1__::func_77(2, 2048))
				{
					func_790(&(uParam0->f_3310));
				}
				if (__LIB_1__::func_77(2, 1024))
				{
					func_806(&(uParam0->f_3310));
				}
				uParam0->f_114.f_2862 = 0;
				func_592(&(uParam0->f_114), 10);
				return 1;
			}
			break;
		case 10:
			while (func_139(&(uParam0->f_114), 1))
			{
				if (uParam1->f_2 == 4 && func_376(&(uParam0->f_114), -441318505, 0, 1))
				{
					func_141(&(uParam0->f_114), 1, 0, 0);
					func_755(&(uParam0->f_114), uParam1->f_6);
				}
				else
				{
					func_141(&(uParam0->f_114), 1, 0, 0);
				}
			}
			if (func_807(&(uParam0->f_114), 7))
			{
				func_592(&(uParam0->f_114), 97);
				return 1;
			}
			else if (func_800(&(uParam0->f_114)))
			{
				func_801(&(uParam0->f_114));
			}
			break;
		case 97:
			if (func_807(&(uParam0->f_114), 7))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (iVar0 != 2 && iVar0 != 5)
					{
						if (func_143(uParam1, iVar0) && func_144(uParam1, iVar0) == 0)
						{
							func_220(&(uParam0->f_114), iVar0, 1);
						}
					}
					iVar0++;
				}
				if (__LIB_1__::func_77(2, 512))
				{
					func_211(&(uParam0->f_114), 2);
					func_173(&(uParam0->f_114), 2, 1);
				}
				else if (__LIB_1__::func_77(2, 1024))
				{
					func_211(&(uParam0->f_114), 4);
					func_173(&(uParam0->f_114), 5, 1);
					func_808(&(uParam0->f_114), 5, 500, 1);
					func_215(&(uParam0->f_114), 5, 11);
				}
				func_190(&(uParam0->f_114), 7);
				func_592(&(uParam0->f_114), 98);
				return 1;
			}
			break;
		case 98:
			if (__LIB_1__::func_77(2, 32768) || __LIB_12__::func_287(2))
			{
				func_218(&(uParam0->f_4583), 5, 0, uParam0->f_114.f_9, -1, 0);
				__LIB_1__::func_212(2, 16384);
				__LIB_1__::func_212(2, 32768);
				func_592(&(uParam0->f_114), 4);
				return 1;
			}
			break;
		case 4:
			while (func_139(&(uParam0->f_114), 1) && !func_376(&(uParam0->f_114), -1442142035, 0, 1))
			{
				func_141(&(uParam0->f_114), 1, 0, 0);
			}
			if (func_376(&(uParam0->f_114), -1442142035, 1, 1))
			{
				func_190(&(uParam0->f_114), 2);
				func_790(&(uParam0->f_3310));
				func_791(&(uParam0->f_3310));
				func_217(&(uParam0->f_3310), uParam0->f_114.f_2474, 0);
				__LIB_12__::func_435(14);
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (func_143(uParam1, iVar0))
					{
						func_170(&(uParam0->f_3310), iVar0, func_144(uParam1, iVar0), 0);
					}
					iVar0++;
				}
				func_804(&(uParam0->f_3310), 0);
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (__LIB_12__::func_296(&(uParam0->f_3310), iVar0))
					{
						__LIB_19__::func_239(&(uParam0->f_3310), iVar0, 1, 0);
					}
					iVar0++;
				}
				func_213(&(uParam0->f_114), 4, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_299(var uParam0, var uParam1)
{
	switch (uParam0->f_114.f_2011)
	{
		case 0:
			while (func_139(&(uParam0->f_114), 1))
			{
				if (func_376(&(uParam0->f_114), -1179646469, 0, 1))
				{
					func_141(&(uParam0->f_114), 1, 0, 0);
					func_592(&(uParam0->f_114), 99);
					return 1;
				}
				else if (uParam1->f_2 == 4 && func_376(&(uParam0->f_114), -441318505, 0, 1))
				{
					func_141(&(uParam0->f_114), 1, 0, 0);
					func_755(&(uParam0->f_114), uParam1->f_6);
				}
				else
				{
					func_141(&(uParam0->f_114), 1, 0, 0);
				}
			}
			if (func_800(&(uParam0->f_114)))
			{
				func_801(&(uParam0->f_114));
			}
			break;
		case 99:
			func_739(uParam0, uParam1);
			func_213(&(uParam0->f_114), 14, 0);
			break;
		default:
			break;
	}
	return 0;
}

int func_300(var uParam0, var uParam1)
{
	switch (uParam0->f_114.f_2011)
	{
		case 0:
			func_809(uParam0, &(uParam0->f_114), 1, 1);
			func_592(&(uParam0->f_114), 14);
			return 1;
		case 14:
			break;
		default:
			break;
	}
	return 0;
}

int func_301(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar14;
	vector3 vVar15;
	vector3 vVar18;
	float fVar21;
	uVar7 = 6;
	switch (uParam2->f_1)
	{
		case 0:
			iVar0 = func_810(uParam1, iParam3);
			if (iVar0 == 0)
			{
			}
			else if (iVar0 != 1 && iVar0 != 2)
			{
			}
			else if (func_811(uParam1, iParam3, 1))
			{
				func_812(uParam1, iParam3, 1);
				func_813(uParam1, iParam3, 1);
				return 1;
			}
			break;
		case 1:
			iVar0 = func_810(uParam1, iParam3);
			if (__LIB_12__::func_296(&(uParam0->f_3310), iParam3))
			{
			}
			else
			{
				__LIB_1__::func_148(&(uParam2->f_2));
				func_813(uParam1, iParam3, 2);
				return 1;
			}
			break;
		case 2:
			iVar0 = func_810(uParam1, iParam3);
			if (iVar0 == 1)
			{
				iVar1 = func_814(uParam1, iParam3);
				vVar15 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true, false) };
			}
			else if (iVar0 == 2)
			{
				iVar1 = 255;
				vVar15 = { uParam0->f_3310 };
			}
			if (!func_815(&(uParam0->f_3310), vVar15, &vVar18, &fVar21, !__LIB_1__::func_285(&(uParam2->f_2), 10f)))
			{
				return 0;
			}
			if (!func_374(uParam0, iParam3, iVar1, &iVar2, &iVar4))
			{
				return 0;
			}
			if (!PED::IS_PED_MALE(iVar2))
			{
				iVar3 = 3;
			}
			else
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				if (uParam1->f_9 != -1)
				{
					if ((iParam3 + 1 % 6) == uParam0->f_114.f_9)
					{
						iVar3 = 2;
					}
				}
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar2, vVar18, fVar21, true, false, true);
			iVar5 = 92;
			func_816(&(uParam0->f_3310), &uVar7, &iVar14);
			if (func_818(iVar2, 2, __LIB_4__::func_886(2, __LIB_0__::func_12(), iVar4), &uVar7, iVar14, &iVar5))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iVar2, __LIB_4__::func_887(iVar5));
			}
			else if (__LIB_12__::func_255(iVar2, 2, &uVar7, iVar14, &iVar5))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iVar2, __LIB_4__::func_887(iVar5));
			}
			func_821(&(uParam0->f_114), iParam3, func_183(uParam0, iVar4));
			iVar6 = 0;
			if (!func_167(&(uParam0->f_3310), iParam3, iVar2, 0, iVar3, 1, iVar4, iVar5, iVar1, iVar6, 0, 0, 0))
			{
				PED::DELETE_PED(&iVar2);
				return 0;
			}
			if (!func_822(&(uParam0->f_2979), iParam3))
			{
				if (iVar0 == 1)
				{
					func_373(&(uParam0->f_2979), iParam3, iVar1);
				}
				else if (iVar0 == 2)
				{
					func_366(&(uParam0->f_2979), iParam3, iVar2);
				}
			}
			func_823(uParam1, iParam3);
			func_169(uParam1, iParam3);
			func_824(uParam1, func_144(&(uParam1->f_287), iParam3));
			func_825(uParam1, iParam3, 1);
			func_813(uParam1, iParam3, 3);
			return 1;
		case 3:
			if ((!__LIB_12__::func_296(&(uParam0->f_3310), iParam3) || !func_614(&(uParam0->f_3310), iParam3, 4)) || __LIB_12__::func_338(&(uParam0->f_3310), iParam3, 0))
			{
				func_826(uParam0, iParam3);
				func_170(&(uParam0->f_3310), iParam3, func_144(&(uParam1->f_287), iParam3), 1);
				func_827(uParam1, iParam3);
			}
			break;
	}
	return 0;
}

void func_302(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2078[iParam1] = iParam2;
}

int func_303(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bVar0 = false;
	switch (uParam2->f_1)
	{
		case 0:
			if (uParam1->f_2474 == iParam3)
			{
				iVar1 = func_828(&(uParam1->f_287), iParam3);
			}
			else
			{
				iVar1 = -1;
			}
			if (iVar1 == -1)
			{
				if (func_811(uParam1, iParam3, 1))
				{
					func_812(uParam1, iParam3, 1);
					bVar0 = true;
				}
			}
			else if ((func_811(uParam1, iParam3, 1) && func_811(uParam1, iVar1, 1)) && !func_829(uParam1))
			{
				func_812(uParam1, iParam3, 1);
				func_812(uParam1, iVar1, 1);
				func_830(uParam1, iParam3, iVar1, 0);
				func_831(uParam1);
				bVar0 = true;
			}
			if (bVar0)
			{
				uParam2->f_5 = 0;
				if (func_143(&(uParam1->f_287), iParam3))
				{
					uParam2->f_5 = func_144(&(uParam1->f_287), iParam3);
				}
				if (__LIB_12__::func_292(uParam0, 0))
				{
					if (func_148(&(uParam0->f_3310), iParam3))
					{
						iVar3 = func_149(&(uParam0->f_3310), iParam3);
						if (!PED::IS_PED_A_PLAYER(iVar3) && !__LIB_0__::func_407(iVar3))
						{
							iVar2 = func_145(uParam0, uParam2->f_5);
							if (iVar2 > 0)
							{
								__LIB_2__::func_190(iVar3, iVar2);
								PED::_0x6569F31A01B4C097(iVar3, 0, 1);
								PED::_0x6569F31A01B4C097(iVar3, 1, 1);
							}
						}
					}
				}
				if (func_822(&(uParam0->f_2979), iParam3))
				{
					func_832(uParam0, iParam3);
				}
				func_813(uParam1, iParam3, 4);
				return 1;
			}
			break;
		case 4:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), iParam3) || __LIB_18__::func_540(&(uParam0->f_3310), iParam3, 1))
			{
				if (__LIB_12__::func_296(&(uParam0->f_3310), iParam3) && __LIB_12__::func_300(&(uParam0->f_3310), iParam3) == 2)
				{
					func_679(&(uParam0->f_3310), iParam3, uParam1->f_2474, 2);
				}
				func_833(uParam1, &(uParam1->f_2147), &(uParam0->f_3310), &(uParam1->f_287), iParam3, uParam2->f_5);
				func_813(uParam1, iParam3, 5);
			}
			break;
		case 5:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), iParam3) || !func_614(&(uParam0->f_3310), iParam3, 15))
			{
				func_834(uParam1, uParam2->f_5);
				func_823(uParam1, iParam3);
				func_835(uParam1, iParam3);
				if (!func_829(uParam1))
				{
					func_813(uParam1, iParam3, 6);
					return 1;
				}
				else
				{
					func_813(uParam1, iParam3, 7);
					return 1;
				}
			}
			break;
		case 6:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), iParam3) || __LIB_18__::func_540(&(uParam0->f_3310), iParam3, 1))
			{
				if (__LIB_12__::func_296(&(uParam0->f_3310), iParam3))
				{
					func_837(&(uParam0->f_3310), iParam3, __LIB_12__::func_345(uParam2->f_5), 0);
					func_170(&(uParam0->f_3310), iParam3, 0, 1);
					func_607(uParam0, iParam3, 6, 6, -1);
				}
				func_813(uParam1, iParam3, 13);
			}
			break;
		case 7:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_2543) || __LIB_18__::func_540(&(uParam0->f_3310), uParam1->f_2543, 1))
			{
				func_813(uParam1, iParam3, 8);
				return 1;
			}
			break;
		case 8:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), iParam3) || __LIB_18__::func_540(&(uParam0->f_3310), iParam3, 1))
			{
				if (__LIB_12__::func_296(&(uParam0->f_3310), iParam3))
				{
					func_838(&(uParam0->f_3310), iParam3, uParam1->f_2543);
				}
				func_839(uParam1, 1);
				func_813(uParam1, iParam3, 9);
				return 1;
			}
			break;
		case 9:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), iParam3) || __LIB_18__::func_540(&(uParam0->f_3310), iParam3, 1))
			{
				if (__LIB_12__::func_296(&(uParam0->f_3310), iParam3))
				{
					func_837(&(uParam0->f_3310), iParam3, __LIB_12__::func_345(uParam2->f_5), 0);
					func_607(uParam0, iParam3, 6, 6, -1);
				}
				func_813(uParam1, iParam3, 10);
			}
			break;
		case 10:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_2543) || __LIB_18__::func_540(&(uParam0->f_3310), uParam1->f_2543, 1))
			{
				if (__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_2543) && __LIB_12__::func_300(&(uParam0->f_3310), uParam1->f_2543) == 2)
				{
					func_473(&(uParam0->f_3310), uParam1->f_2543, 1, 0, 0);
					__LIB_19__::func_239(&(uParam0->f_3310), uParam1->f_2543, 1, 0);
				}
				func_187(uParam1, uParam1->f_2543);
				func_840(uParam0, uParam1->f_2543, 1);
				func_170(&(uParam0->f_3310), iParam3, 0, 0);
				func_841(uParam1);
				func_839(uParam1, 0);
				func_813(uParam1, iParam3, 11);
			}
			break;
		case 11:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_2543) || __LIB_18__::func_540(&(uParam0->f_3310), uParam1->f_2543, 1))
			{
				if (__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_2543))
				{
					func_786(&(uParam0->f_3310), uParam1->f_2543);
				}
				if (__LIB_12__::func_344(&(uParam0->f_3310), uParam1->f_2543) == 1)
				{
					func_813(uParam1, iParam3, 12);
					return 1;
				}
				else
				{
					func_813(uParam1, iParam3, 13);
					return 1;
				}
			}
			break;
		case 12:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_2543) || __LIB_18__::func_540(&(uParam0->f_3310), uParam1->f_2543, 1))
			{
				if (__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_2543))
				{
					func_634(&(uParam0->f_3310), uParam1->f_2543, 0);
				}
				func_813(uParam1, iParam3, 13);
			}
			break;
		case 13:
			func_825(uParam1, iParam3, 1);
			if (func_829(uParam1))
			{
				func_825(uParam1, uParam1->f_2543, 1);
				func_842(uParam1);
			}
			if (func_843(&(uParam0->f_2979), iParam3))
			{
				func_844(&(uParam0->f_2979), iParam3);
			}
			func_827(uParam1, iParam3);
			break;
	}
	return 0;
}

int func_304(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_213(uParam1, 0, 0);
			func_845(uParam0, &(uParam1->f_287));
			func_846(&(uParam0->f_2979));
			func_847(uParam1, 1);
			return 1;
		case 1:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_9) || __LIB_18__::func_540(&(uParam0->f_3310), uParam1->f_9, 1))
			{
				if (__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_9) && __LIB_12__::func_300(&(uParam0->f_3310), uParam1->f_9) == 2)
				{
					func_679(&(uParam0->f_3310), uParam1->f_9, uParam1->f_2474, 2);
				}
				func_847(uParam1, 2);
				return 1;
			}
			break;
		case 2:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_9) || !func_614(&(uParam0->f_3310), uParam1->f_9, 15))
			{
				func_175(uParam1, 8);
				func_847(uParam1, 16);
			}
			break;
	}
	return 0;
}

void func_305(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2035[iParam1] = iParam2;
}

int func_306(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	switch (uParam2->f_1)
	{
		case 0:
			uParam2->f_2 = uParam1->f_9;
			uParam2->f_3 = 0;
			if (func_143(&(uParam1->f_287), uParam2->f_2))
			{
				uParam2->f_3 = func_144(&(uParam1->f_287), uParam2->f_2);
			}
			func_845(uParam0, &(uParam1->f_287));
			func_846(&(uParam0->f_2979));
			if (!func_138(uParam1, 1959158395, 0))
			{
				func_848(uParam1);
			}
			if (func_614(&(uParam0->f_3310), uParam2->f_2, 5))
			{
				func_849(&(uParam0->f_3310), 0, 0);
				func_213(uParam1, 0, 0);
				func_847(uParam1, 3);
				return 1;
			}
			else
			{
				func_849(&(uParam0->f_3310), 1, 0);
				func_847(uParam1, 6);
				return 1;
			}
			break;
		case 3:
			if (!func_850(&(uParam0->f_3310)) || func_851(&(uParam0->f_3310)))
			{
				if (func_850(&(uParam0->f_3310)))
				{
					func_852(&(uParam0->f_3310), uParam2->f_2);
				}
				func_833(&(uParam0->f_114), &(uParam1->f_2147), &(uParam0->f_3310), &(uParam1->f_287), uParam2->f_2, uParam2->f_3);
				func_853(&(uParam0->f_2979));
				func_854(&(uParam0->f_3310), 1);
				__LIB_18__::func_563(&(uParam0->f_3310), uParam2->f_2, 1);
				func_847(uParam1, 4);
				return 1;
			}
			break;
		case 4:
			if ((!func_850(&(uParam0->f_3310)) || func_855(&(uParam0->f_3310))) || func_856(&(uParam0->f_3310)))
			{
				func_170(&(uParam0->f_3310), uParam2->f_2, 0, 0);
				func_790(&(uParam0->f_3310));
				func_791(&(uParam0->f_3310));
				__LIB_19__::func_256(&(uParam0->f_3310), 0);
				__LIB_19__::func_255(&(uParam0->f_3310), 0);
				func_857(&(uParam0->f_3310));
				iVar1 = 0;
				while (iVar1 < 6)
				{
					if (__LIB_12__::func_296(&(uParam0->f_3310), iVar1))
					{
						__LIB_19__::func_239(&(uParam0->f_3310), iVar1, 1, 0f);
					}
					iVar1++;
				}
				func_423(&(uParam0->f_4583));
				func_858(&(uParam0->f_3310));
				func_847(uParam1, 5);
			}
			break;
		case 5:
			if (!func_850(&(uParam0->f_3310)) || func_855(&(uParam0->f_3310)))
			{
				func_175(uParam1, 8);
				func_847(uParam1, 16);
			}
			break;
		case 6:
			if (func_138(uParam1, 1959158395, 0))
			{
				func_847(uParam1, 7);
				return 1;
			}
			break;
		case 7:
			if (func_797(uParam1, uParam2->f_2, 1))
			{
				func_859(uParam1, uParam2->f_2, 1);
				func_141(uParam1, 0, 1959158395, 0);
				func_141(uParam1, 0, -1857735811, 1995414514);
				func_835(uParam1, uParam2->f_2);
				func_847(uParam1, 8);
				return 1;
			}
			break;
		case 8:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam2->f_2) || __LIB_18__::func_540(&(uParam0->f_3310), uParam2->f_2, 1))
			{
				if (__LIB_12__::func_296(&(uParam0->f_3310), uParam2->f_2) && __LIB_12__::func_300(&(uParam0->f_3310), uParam2->f_2) == 2)
				{
					func_679(&(uParam0->f_3310), uParam2->f_2, uParam1->f_2474, __LIB_12__::func_345(uParam2->f_3));
				}
				func_833(&(uParam0->f_114), &(uParam1->f_2147), &(uParam0->f_3310), &(uParam1->f_287), uParam2->f_2, uParam2->f_3);
				func_847(uParam1, 9);
				return 1;
			}
			break;
		case 9:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam2->f_2) || !func_614(&(uParam0->f_3310), uParam2->f_2, 15))
			{
				func_847(uParam1, 10);
				return 1;
			}
			break;
		case 10:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam2->f_2) || __LIB_18__::func_540(&(uParam0->f_3310), uParam2->f_2, 1))
			{
				if (uParam1->f_2474 == uParam2->f_2)
				{
					iVar0 = func_828(&(uParam1->f_287), uParam1->f_2474);
				}
				else
				{
					iVar0 = -1;
				}
				if (iVar0 != -1)
				{
					if (!func_850(&(uParam0->f_3310)) || func_851(&(uParam0->f_3310)))
					{
						if (func_850(&(uParam0->f_3310)))
						{
							func_852(&(uParam0->f_3310), uParam2->f_2);
						}
						func_853(&(uParam0->f_2979));
						func_854(&(uParam0->f_3310), 1);
						__LIB_18__::func_563(&(uParam0->f_3310), uParam2->f_2, 1);
						func_847(uParam1, 12);
						return 1;
					}
				}
				else
				{
					if (__LIB_12__::func_296(&(uParam0->f_3310), uParam2->f_2))
					{
						func_837(&(uParam0->f_3310), uParam2->f_2, __LIB_12__::func_345(uParam2->f_3), 0);
					}
					func_607(uParam0, uParam2->f_2, 6, 6, -1);
					func_853(&(uParam0->f_2979));
					func_423(&(uParam0->f_4583));
					func_858(&(uParam0->f_3310));
					func_854(&(uParam0->f_3310), 1);
					func_847(uParam1, 11);
					return 1;
				}
			}
			break;
		case 12:
			if ((!func_850(&(uParam0->f_3310)) || func_855(&(uParam0->f_3310))) || func_856(&(uParam0->f_3310)))
			{
				iVar0 = func_828(&(uParam1->f_287), uParam1->f_2474);
				if (iVar0 == -1)
				{
					iVar0 = uParam1->f_2474;
					func_860(&iVar0);
				}
				func_187(uParam1, iVar0);
				func_840(uParam0, iVar0, 0);
				func_170(&(uParam0->f_3310), uParam2->f_2, 0, 0);
				__LIB_12__::func_346(&(uParam0->f_3310), uParam2->f_2);
				func_857(&(uParam0->f_3310));
				func_423(&(uParam0->f_4583));
				func_858(&(uParam0->f_3310));
				func_847(uParam1, 13);
			}
			break;
		case 13:
			if (!func_850(&(uParam0->f_3310)) || func_855(&(uParam0->f_3310)))
			{
				func_862(uParam1, uParam2->f_2, 1);
				func_863(&(uParam0->f_3310));
				func_175(uParam1, 6);
				if (func_608(&(uParam1->f_287)) <= 1)
				{
					func_864(&(uParam0->f_3310), 1);
				}
				func_847(uParam1, 14);
				return 1;
			}
			break;
		case 11:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam2->f_2))
			{
				func_862(uParam1, uParam2->f_2, 1);
				func_170(&(uParam0->f_3310), uParam2->f_2, 0, 1);
				func_863(&(uParam0->f_3310));
				func_175(uParam1, 6);
				if (func_608(&(uParam1->f_287)) <= 1)
				{
					func_864(&(uParam0->f_3310), 1);
				}
				func_847(uParam1, 14);
				return 1;
			}
			break;
		case 14:
			func_865(uParam0);
			if (func_866(&(uParam0->f_3310)))
			{
				func_213(uParam1, 0, 0);
				func_847(uParam1, 15);
				return 1;
			}
			else if (uParam1->f_2010 == 0)
			{
				func_175(uParam1, 8);
				func_847(uParam1, 16);
				return 0;
			}
			else if (uParam0->f_1.f_41 == 38)
			{
				if (!CAM::IS_SPHERE_VISIBLE(uParam0->f_3310 + Vector(0.4f, 0f, 0f), 2.5f) && BUILTIN::VDIST(Global_36, uParam0->f_3310 - Vector(10f, 0f, 0f)) > 16f)
				{
					iVar1 = 0;
					while (iVar1 < 6)
					{
						if (__LIB_12__::func_296(&(uParam0->f_3310), iVar1))
						{
							if (func_202(&(uParam0->f_3310), iVar1, 4) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(func_149(&(uParam0->f_3310), iVar1), true, false), uParam0->f_3310 + Vector(0.4f, 0f, 0f)) > 2.5f)
							{
								if (func_143(&(uParam1->f_287), iVar1))
								{
									func_834(uParam1, func_144(&(uParam1->f_287), iVar1));
								}
								__LIB_19__::func_257(&(uParam0->f_3310), iVar1, 0);
							}
							else if ((func_202(&(uParam0->f_3310), iVar1, 26) || func_202(&(uParam0->f_3310), iVar1, 27)) || func_202(&(uParam0->f_3310), iVar1, 25))
							{
								__LIB_19__::func_258(&(uParam0->f_3310), iVar1);
							}
							else if (!func_143(&(uParam1->f_287), iVar1))
							{
								__LIB_19__::func_258(&(uParam0->f_3310), iVar1);
							}
						}
						iVar1++;
					}
					func_791(&(uParam0->f_3310));
					func_790(&(uParam0->f_3310));
					func_869(&(uParam0->f_3310), 0);
					__LIB_19__::func_256(&(uParam0->f_3310), 0);
					__LIB_19__::func_255(&(uParam0->f_3310), 0);
					iVar3 = (func_870(&(uParam1->f_287)) - func_871(&(uParam1->f_287)));
					iVar2 = 0;
					iVar1 = 0;
					while (iVar1 < 6)
					{
						if (__LIB_12__::func_296(&(uParam0->f_3310), iVar1))
						{
							iVar2++;
						}
						iVar1++;
					}
					iVar4 = 0;
					if (iVar2 > 0)
					{
						iVar4 = (iVar3 / iVar2);
					}
					iVar1 = 0;
					while (iVar1 < 6)
					{
						if (__LIB_12__::func_296(&(uParam0->f_3310), iVar1))
						{
							iVar5 = func_144(&(uParam1->f_287), iVar1);
							iVar5 = (iVar5 + iVar4);
							func_872(&(uParam1->f_287), iVar1, iVar5);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < 6)
					{
						if (__LIB_12__::func_296(&(uParam0->f_3310), iVar1))
						{
							__LIB_19__::func_239(&(uParam0->f_3310), iVar1, 1, 0);
							func_170(&(uParam0->f_3310), iVar1, func_144(&(uParam1->f_287), iVar1), 0);
						}
						iVar1++;
					}
					func_213(uParam1, 0, 0);
					func_175(uParam1, 8);
					func_847(uParam1, 16);
					return 0;
				}
			}
			break;
		case 15:
			if (func_873(&(uParam0->f_3310)) == 0)
			{
				__LIB_18__::func_527(&(uParam0->f_3310));
				func_175(uParam1, 8);
				func_847(uParam1, 16);
				return 0;
			}
			break;
	}
	return 0;
}

int func_307(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	switch (uParam2->f_1)
	{
		case 0:
			func_213(uParam1, 0, 0);
			func_845(uParam0, &(uParam1->f_287));
			if (__LIB_12__::func_292(uParam0, 1))
			{
				func_874(uParam0);
			}
			func_846(&(uParam0->f_2979));
			func_849(&(uParam0->f_3310), 1, 1);
			if (STREAMING::_0xFC464598F6EE97B0())
			{
				STREAMING::_0x31108BB5715D035F();
			}
			switch (uParam0->f_1.f_41)
			{
				case 71:
					STREAMING::_0x20D504994FDC4412("hso_poker_seats", "hso_normal_seats");
					break;
				case 98:
					STREAMING::_0x20D504994FDC4412("dewclm_poker_seats", "dewclm_normal_seats");
					break;
				case 9:
					STREAMING::_0x20D504994FDC4412("shb_poker_seats", "shb_normal_seats");
					break;
			}
			func_847(uParam1, 1);
			return 1;
		case 1:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_9) || __LIB_18__::func_540(&(uParam0->f_3310), uParam1->f_9, 1))
			{
				if (__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_9) && __LIB_12__::func_300(&(uParam0->f_3310), uParam1->f_9) == 2)
				{
					func_679(&(uParam0->f_3310), uParam1->f_9, uParam1->f_2474, 2);
				}
				func_833(uParam1, &(uParam1->f_2147), &(uParam0->f_3310), &(uParam1->f_287), uParam1->f_9, func_144(&(uParam1->f_287), uParam1->f_9));
				func_853(&(uParam0->f_2979));
				func_847(uParam1, 2);
				return 1;
			}
			break;
		case 2:
			if (!__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_9) || !func_202(&(uParam0->f_3310), uParam1->f_9, 15))
			{
				if ((!func_850(&(uParam0->f_3310)) || func_851(&(uParam0->f_3310))) && (!STREAMING::_0xFC464598F6EE97B0() || STREAMING::_0xC2C05DEFE85A0B64()))
				{
					if (__LIB_12__::func_296(&(uParam0->f_3310), uParam1->f_9))
					{
						func_854(&(uParam0->f_3310), 1);
						func_852(&(uParam0->f_3310), uParam1->f_9);
						__LIB_18__::func_563(&(uParam0->f_3310), uParam1->f_9, 1);
					}
					else
					{
						__LIB_12__::func_320(&(uParam0->f_3310));
					}
					func_847(uParam1, 12);
					return 1;
				}
			}
			break;
		case 12:
			if ((!func_850(&(uParam0->f_3310)) || func_855(&(uParam0->f_3310))) || func_856(&(uParam0->f_3310)))
			{
				if (STREAMING::_0xFC464598F6EE97B0())
				{
					STREAMING::_0x040EE319EFD1D3B5();
				}
				ENTITY::REMOVE_MODEL_HIDE(uParam0->f_3310, 2.5f, joaat("P_BOTTLEBEER01A"), 1);
				func_423(&(uParam0->f_4583));
				__LIB_18__::func_535(&(uParam0->f_3310), 1);
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (__LIB_12__::func_296(&(uParam0->f_3310), iVar0))
					{
						iVar1 = func_149(&(uParam0->f_3310), iVar0);
						if (!PED::IS_PED_INJURED(iVar1))
						{
							vVar5 = { uParam0->f_3310.f_1137[iVar0 /*3*/] - uParam0->f_3310 };
							vVar5.f_2 = 0f;
							vVar5 = { __LIB_0__::func_173(vVar5) * Vector(2f, 2f, 2f) };
							vVar5.f_2 = 1f;
							vVar2 = { uParam0->f_3310 + vVar5 };
							MISC::GET_GROUND_Z_FOR_3D_COORD(vVar2, &(vVar2.f_2), false);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, true);
							ENTITY::SET_ENTITY_COORDS(iVar1, vVar2, true, false, true, true);
							ENTITY::SET_ENTITY_HEADING(iVar1, MISC::GET_HEADING_FROM_VECTOR_2D(vVar5.x, vVar5.y));
							__LIB_19__::func_257(&(uParam0->f_3310), iVar0, 0);
						}
					}
					iVar0++;
				}
				func_847(uParam1, 13);
				return 1;
			}
			break;
		case 13:
			if (!func_850(&(uParam0->f_3310)) || func_855(&(uParam0->f_3310)))
			{
				func_175(uParam1, 8);
				func_847(uParam1, 16);
			}
			break;
	}
	return 0;
}

int func_308(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_845(uParam0, &(uParam1->f_287));
			func_846(&(uParam0->f_2979));
			func_847(uParam1, 16);
			return 1;
	}
	return 0;
}

int func_309(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (uParam2->f_1)
	{
		case 0:
			__LIB_1__::func_148(&(uParam2->f_2));
			func_876(uParam1, 5);
			break;
		case 5:
			if (__LIB_1__::func_285(&(uParam2->f_2), 1.5f))
			{
				iVar0 = func_877(&(uParam0->f_3310), uParam1->f_9, -1, -1);
				iVar1 = func_877(&(uParam0->f_3310), -1, -1, -1);
				if (func_878(uParam0, &(uParam1->f_2347.f_96), iVar0, "postGame_chatter", iVar1, 100, &iVar2, &iVar3))
				{
					func_723(uParam0, iVar3, iVar2, 9);
					func_607(uParam0, iVar2, 7, 6, -1);
				}
				func_876(uParam1, 2);
			}
			break;
		case 2:
			if (func_720(&(uParam0->f_3310)))
			{
				__LIB_1__::func_148(&(uParam2->f_2));
			}
			else if (__LIB_1__::func_285(&(uParam2->f_2), 1.5f))
			{
				iVar0 = func_877(&(uParam0->f_3310), uParam1->f_9, -1, -1);
				iVar1 = func_877(&(uParam0->f_3310), -1, -1, -1);
				if (func_878(uParam0, &(uParam1->f_2347.f_96), iVar0, "postGame_chatter", iVar1, 100, &iVar2, &iVar3))
				{
					func_723(uParam0, iVar3, iVar2, 9);
					func_607(uParam0, iVar2, 7, 6, -1);
				}
				func_876(uParam1, 3);
			}
			break;
		case 3:
			break;
	}
	return 0;
}

void func_310(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2093[iParam1] = iParam2;
}

int func_311(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	iVar21 = -1;
	iVar22 = -1;
	iVar0 = func_877(&(uParam0->f_3310), -1, -1, -1);
	iVar1 = func_877(&(uParam0->f_3310), uParam1->f_9, -1, -1);
	iVar2 = iVar0;
	uVar4 = func_879(&(uParam1->f_2147));
	iVar5 = func_880(&(uParam1->f_2147));
	iVar6 = (uVar4 && -1 ^ iVar5);
	uVar11 = func_881(&(uParam1->f_2147));
	uVar12 = func_882(&(uParam1->f_2147));
	uVar13 = func_883(&(uParam1->f_2147));
	uVar14 = func_884(&(uParam1->f_2147));
	uVar15 = func_885(&(uParam1->f_2147));
	uVar16 = func_886(&(uParam1->f_2147));
	if (uParam2->f_8 != -1)
	{
		MISC::SET_BIT(&iVar3, uParam2->f_8);
	}
	iVar23 = 0;
	while (iVar23 < 6)
	{
		if (MISC::IS_BIT_SET(iVar0, iVar23))
		{
			fVar17 = func_887(&(uParam1->f_2147), iVar23);
			fVar18 = func_888(&(uParam1->f_2147), iVar23);
			fVar19 = func_889(&(uParam1->f_2147), iVar23);
			if (func_890(fVar17))
			{
				MISC::SET_BIT(&iVar9, iVar23);
			}
			if (func_891(fVar17))
			{
				MISC::SET_BIT(&uVar10, iVar23);
			}
			if (MISC::IS_BIT_SET(iVar5, iVar23))
			{
				if (func_892(fVar18))
				{
					MISC::SET_BIT(&uVar7, iVar23);
				}
			}
			if (MISC::IS_BIT_SET(iVar6, iVar23))
			{
				if (func_893(fVar19))
				{
					MISC::SET_BIT(&iVar8, iVar23);
				}
			}
		}
		iVar23++;
	}
	switch (uParam2->f_1)
	{
		case 0:
			__LIB_0__::func_37(&(uParam2->f_5));
			if (func_780(&(uParam1->f_287)) > 0 || uParam0->f_114.f_2147.f_130)
			{
				func_876(uParam1, 1);
				return 1;
			}
			else
			{
				__LIB_0__::func_268(&(uParam2->f_2), -4f);
				func_876(uParam1, 5);
				return 1;
			}
			break;
		case 1:
			if (((((func_780(&(uParam1->f_287)) == 0 && !uParam0->f_114.f_2147.f_130) && !func_787(uParam1)) && !func_894(uParam1, 2)) && !func_895(uParam1)) && !func_720(&(uParam0->f_3310)))
			{
				__LIB_0__::func_268(&(uParam2->f_2), -3.5f);
				func_876(uParam1, 21);
			}
			break;
		case 5:
			iVar23 = 0;
			while (iVar23 < 6)
			{
				if ((__LIB_12__::func_296(&(uParam0->f_3310), iVar23) && func_202(&(uParam0->f_3310), iVar23, 16)) && !__LIB_12__::func_338(&(uParam0->f_3310), iVar23, 1))
				{
					bVar24 = true;
				}
				iVar23++;
			}
			if (bVar24)
			{
				__LIB_0__::func_268(&(uParam2->f_2), -MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 4f));
			}
			if (__LIB_1__::func_285(&(uParam2->f_2), 0f) && !func_720(&(uParam0->f_3310)))
			{
				if (__LIB_12__::func_292(uParam0, 1))
				{
					if (uParam0->f_1.f_41 == 71)
					{
						iVar21 = func_896(uParam0, (iVar1 && -1 ^ uParam2->f_10), "chat_camp_horseshoe_NOCONV", uParam1->f_9, 50);
						if (iVar21 != -1)
						{
							uParam2->f_8 = iVar21;
							uParam2->f_9 = uParam1->f_9;
							MISC::SET_BIT(&(uParam2->f_10), iVar21);
							func_607(uParam0, iVar21, 7, 6, -1);
							func_876(uParam1, 19);
							return 1;
						}
					}
					else if (uParam0->f_1.f_41 == 98)
					{
						iVar21 = func_896(uParam0, (iVar1 && -1 ^ uParam2->f_10), "chat_camp_clemens_NOCONV", uParam1->f_9, 50);
						if (iVar21 != -1)
						{
							uParam2->f_8 = iVar21;
							uParam2->f_9 = uParam1->f_9;
							MISC::SET_BIT(&(uParam2->f_10), iVar21);
							func_607(uParam0, iVar21, 7, 6, -1);
							func_876(uParam1, 19);
							return 1;
						}
					}
					else if (uParam0->f_1.f_41 == 9)
					{
						iVar21 = func_896(uParam0, (iVar1 && -1 ^ uParam2->f_10), "chat_camp_shady_NOCONV", uParam1->f_9, 50);
						if (iVar21 != -1)
						{
							uParam2->f_8 = iVar21;
							uParam2->f_9 = uParam1->f_9;
							MISC::SET_BIT(&(uParam2->f_10), iVar21);
							func_607(uParam0, iVar21, 7, 6, -1);
							func_876(uParam1, 19);
							return 1;
						}
					}
				}
				if (func_878(uParam0, &(uParam1->f_2347.f_16), (iVar0 && uVar11), "postGame_brokeWinningStreak", iVar2, 100, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_607(uParam0, iVar21, 7, 6, iVar22);
					func_876(uParam1, 7);
					return 0;
				}
				if (func_878(uParam0, &(uParam1->f_2347.f_26), (iVar0 && uVar12), "postGame_brokeLosingStreak", iVar2, 100, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_607(uParam0, iVar21, 7, 6, iVar22);
					func_876(uParam1, 8);
					return 0;
				}
				if (func_878(uParam0, &(uParam1->f_2347.f_56), (((iVar0 && -1 ^ iVar9) && uVar7) && uVar15), "postGame_mono_goodGame", iVar2, 60, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_607(uParam0, iVar21, 7, 6, iVar22);
					func_876(uParam1, 11);
					return 0;
				}
				if (func_878(uParam0, &(uParam1->f_2347.f_66), (((iVar0 && iVar6) && -1 ^ iVar8) && uVar16), "postGame_frustrated_lvl1", iVar2, 60, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_607(uParam0, iVar21, 7, 6, iVar22);
					func_876(uParam1, 12);
					return 0;
				}
				if (func_878(uParam0, &(uParam1->f_2347.f_36), ((iVar0 && uVar13) && -1 ^ iVar9), "postGame_winningStreak", iVar2, 100, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_607(uParam0, iVar21, 7, 6, iVar22);
					func_876(uParam1, 9);
					return 0;
				}
				if (func_878(uParam0, &(uParam1->f_2347.f_46), (iVar0 && uVar14), "postGame_losingStreak", iVar2, 100, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_607(uParam0, iVar21, 7, 6, iVar22);
					func_876(uParam1, 10);
					return 0;
				}
				__LIB_0__::func_268(&(uParam2->f_2), -2f);
				func_876(uParam1, 6);
				return 0;
			}
			break;
		case 6:
			if (__LIB_1__::func_285(&(uParam2->f_2), 0f))
			{
				iVar21 = func_896(uParam0, iVar0, "postGame_fillerFX", -1, 60);
				if (iVar21 != -1)
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = -1;
					func_607(uParam0, iVar21, 7, 6, -1);
					func_876(uParam1, 13);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 7:
			if (!func_720(&(uParam0->f_3310)))
			{
				if (func_897(uParam0, uParam2->f_9, "postGame_commentLoss", uParam2->f_8, 100))
				{
					func_898(&(uParam1->f_2347.f_86), uParam2->f_9);
					func_723(uParam0, uParam2->f_8, uParam2->f_9, 9);
					func_607(uParam0, uParam2->f_9, 7, 6, -1);
					func_876(uParam1, 17);
					return 0;
				}
				if (func_899(uParam0, &(uParam1->f_2347.f_86), (iVar2 && -1 ^ iVar3), "postGame_commentLoss", uParam2->f_8, 100, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_723(uParam0, uParam2->f_8, uParam2->f_9, 9);
					func_607(uParam0, uParam2->f_9, 7, 6, -1);
					func_876(uParam1, 17);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 8:
			if (!func_720(&(uParam0->f_3310)))
			{
				if (func_897(uParam0, uParam2->f_9, "postGame_commentWin", uParam2->f_8, 100))
				{
					func_898(&(uParam1->f_2347.f_76), uParam2->f_9);
					func_723(uParam0, uParam2->f_8, uParam2->f_9, 9);
					func_607(uParam0, uParam2->f_9, 7, 6, -1);
					func_876(uParam1, 16);
					return 0;
				}
				if (func_899(uParam0, &(uParam1->f_2347.f_76), (iVar2 && -1 ^ iVar3), "postGame_commentWin", uParam2->f_8, 100, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_723(uParam0, uParam2->f_8, uParam2->f_9, 9);
					func_607(uParam0, uParam2->f_9, 7, 6, -1);
					func_876(uParam1, 16);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 9:
			if (!func_720(&(uParam0->f_3310)))
			{
				if (func_897(uParam0, uParam2->f_9, "postGame_commentWinningStreak", uParam2->f_8, 100))
				{
					func_723(uParam0, uParam2->f_8, uParam2->f_9, 9);
					func_607(uParam0, uParam2->f_9, 7, 6, -1);
					func_876(uParam1, 14);
					return 0;
				}
				iVar21 = func_896(uParam0, (iVar2 && -1 ^ iVar3), "postGame_commentWinningStreak", uParam2->f_8, 100);
				if (iVar21 != -1)
				{
					uParam2->f_9 = iVar21;
					func_723(uParam0, uParam2->f_8, uParam2->f_9, 9);
					func_607(uParam0, uParam2->f_9, 7, 6, -1);
					func_876(uParam1, 14);
					return 0;
				}
				if (func_899(uParam0, &(uParam1->f_2347.f_76), (iVar2 && -1 ^ iVar3), "postGame_commentWin", uParam2->f_8, 100, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_723(uParam0, uParam2->f_8, uParam2->f_9, 9);
					func_607(uParam0, uParam2->f_9, 7, 6, -1);
					func_876(uParam1, 16);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 10:
			if (!func_720(&(uParam0->f_3310)))
			{
				if (func_897(uParam0, uParam2->f_9, "postGame_commentLosingStreak", uParam2->f_8, 100))
				{
					func_723(uParam0, uParam2->f_8, uParam2->f_9, 9);
					func_607(uParam0, uParam2->f_9, 7, 6, -1);
					func_876(uParam1, 15);
					return 0;
				}
				iVar21 = func_896(uParam0, (iVar2 && -1 ^ iVar3), "postGame_commentLosingStreak", uParam2->f_8, 100);
				if (iVar21 != -1)
				{
					uParam2->f_9 = iVar21;
					func_723(uParam0, uParam2->f_8, uParam2->f_9, 9);
					func_607(uParam0, uParam2->f_9, 7, 6, -1);
					func_876(uParam1, 15);
					return 0;
				}
				if (func_899(uParam0, &(uParam1->f_2347.f_86), (iVar2 && -1 ^ iVar3), "postGame_commentLoss", uParam2->f_8, 100, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_723(uParam0, uParam2->f_8, uParam2->f_9, 9);
					func_607(uParam0, uParam2->f_9, 7, 6, -1);
					func_876(uParam1, 17);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 11:
			if (!func_720(&(uParam0->f_3310)))
			{
				if (func_897(uParam0, uParam2->f_9, "postGame_commentWin", uParam2->f_8, 60))
				{
					func_898(&(uParam1->f_2347.f_76), uParam2->f_9);
					func_723(uParam0, uParam2->f_8, uParam2->f_9, 9);
					func_607(uParam0, uParam2->f_9, 7, 6, -1);
					func_876(uParam1, 16);
					return 0;
				}
				if (func_899(uParam0, &(uParam1->f_2347.f_76), (iVar2 && -1 ^ iVar3), "postGame_commentWin", uParam2->f_8, 60, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_723(uParam0, uParam2->f_8, uParam2->f_9, 9);
					func_607(uParam0, uParam2->f_9, 7, 6, -1);
					func_876(uParam1, 16);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 12:
			if (!func_720(&(uParam0->f_3310)))
			{
				if (func_897(uParam0, uParam2->f_9, "postGame_commentLoss", uParam2->f_8, 100))
				{
					func_898(&(uParam1->f_2347.f_86), uParam2->f_9);
					func_723(uParam0, uParam2->f_8, uParam2->f_9, 9);
					func_607(uParam0, uParam2->f_9, 7, 6, -1);
					func_876(uParam1, 17);
					return 0;
				}
				if (func_899(uParam0, &(uParam1->f_2347.f_86), (iVar2 && -1 ^ iVar3), "postGame_commentLoss", uParam2->f_8, 100, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_723(uParam0, uParam2->f_8, uParam2->f_9, 9);
					func_607(uParam0, uParam2->f_9, 7, 6, -1);
					func_876(uParam1, 17);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 19:
			if (!func_720(&(uParam0->f_3310)))
			{
				if (func_897(uParam0, uParam2->f_9, "chat_camp_response_NOCONV", uParam2->f_8, 100))
				{
					func_876(uParam1, 20);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 17:
			if (!func_720(&(uParam0->f_3310)))
			{
				if (func_890(func_887(&(uParam1->f_2147), uParam2->f_8)))
				{
					iVar20 = 100;
				}
				else
				{
					iVar20 = 50;
				}
				if (func_900(uParam0, &(uParam1->f_2347.f_116), uParam2->f_8, "postGame_rebuff", uParam2->f_9, iVar20))
				{
					func_723(uParam0, uParam2->f_9, uParam2->f_8, 9);
					func_607(uParam0, uParam2->f_8, 7, 6, -1);
					func_876(uParam1, 18);
					return 0;
				}
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
			if (!func_720(&(uParam0->f_3310)))
			{
				func_876(uParam1, 21);
				return 0;
			}
			break;
		case 21:
			if (!func_720(&(uParam0->f_3310)))
			{
				__LIB_0__::func_268(&(uParam2->f_2), -MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 8f));
				func_876(uParam1, 22);
				return 0;
			}
			break;
		case 22:
			if (__LIB_1__::func_285(&(uParam2->f_2), 0f))
			{
				iVar0 = func_877(&(uParam0->f_3310), -1, -1, -1);
				iVar2 = iVar0;
				if (func_878(uParam0, &(uParam1->f_2347.f_96), iVar0, "postGame_chatter", iVar2, 66, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_607(uParam0, iVar21, 7, 6, iVar22);
					func_876(uParam1, 23);
					return 0;
				}
				iVar21 = func_896(uParam0, iVar0, "postGame_fillerFX", -1, 60);
				if (iVar21 != -1)
				{
					func_607(uParam0, iVar21, 7, 6, -1);
					func_876(uParam1, 30);
					return 0;
				}
				func_876(uParam1, 28);
				return 0;
			}
			break;
		case 23:
			if (func_720(&(uParam0->f_3310)))
			{
				__LIB_0__::func_268(&(uParam2->f_2), -0.75f);
			}
			else if (__LIB_1__::func_285(&(uParam2->f_2), 0f))
			{
				if (func_900(uParam0, &(uParam1->f_2347.f_106), uParam2->f_9, "postGame_banter", uParam2->f_8, 50))
				{
					func_607(uParam0, uParam2->f_9, 7, 6, uParam2->f_8);
					func_876(uParam1, 25);
					return 0;
				}
				if (func_900(uParam0, &(uParam1->f_2347.f_106), uParam2->f_9, "postGame_chatter", uParam2->f_8, 33))
				{
					func_607(uParam0, uParam2->f_9, 7, 6, uParam2->f_8);
					func_876(uParam1, 24);
					return 0;
				}
				func_876(uParam1, 28);
				return 0;
			}
			break;
		case 24:
		case 25:
			if (!func_720(&(uParam0->f_3310)))
			{
				func_876(uParam1, 28);
				return 0;
			}
			break;
		case 26:
			if (!func_720(&(uParam0->f_3310)))
			{
				func_876(uParam1, 28);
				return 0;
			}
			break;
		case 27:
			if (!func_720(&(uParam0->f_3310)))
			{
				func_876(uParam1, 28);
				return 0;
			}
			break;
		case 28:
			if (!func_720(&(uParam0->f_3310)))
			{
				__LIB_0__::func_268(&(uParam2->f_2), -5f);
				func_876(uParam1, 29);
				return 0;
			}
			break;
		case 29:
			if (__LIB_1__::func_285(&(uParam2->f_2), 0f))
			{
				iVar0 = func_877(&(uParam0->f_3310), -1, -1, -1);
				if (func_896(uParam0, iVar0, "postGame_fillerFX", -1, 60) != -1)
				{
					func_607(uParam0, iVar21, 7, 6, -1);
					func_876(uParam1, 30);
					return 0;
				}
			}
			break;
		case 30:
			if (!func_720(&(uParam0->f_3310)))
			{
				func_876(uParam1, 28);
				return 0;
			}
			break;
	}
	return 0;
}

int func_312(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	iVar9 = -1;
	switch (uParam2->f_1)
	{
		case 0:
			if (!func_720(&(uParam0->f_3310)))
			{
				iVar0 = func_877(&(uParam0->f_3310), -1, -1, -1);
				iVar1 = __LIB_1__::func_478(&(uParam1->f_2147));
				uVar2 = func_902(&(uParam1->f_2147));
				iVar4 = (uVar2 && -1 ^ iVar1);
				iVar10 = func_903(&(uParam1->f_2147));
				iVar11 = 0;
				while (iVar11 < 6)
				{
					if (MISC::IS_BIT_SET(iVar4, iVar11))
					{
						fVar13 = func_904(&(uParam1->f_2147), iVar11);
						fVar14 = func_887(&(uParam1->f_2147), iVar11);
						if (func_905(fVar13, fVar14))
						{
							MISC::SET_BIT(&uVar5, iVar11);
						}
						else
						{
							MISC::SET_BIT(&uVar6, iVar11);
						}
					}
					iVar11++;
				}
				func_607(uParam0, iVar10, 7, 6, -1);
				iVar9 = func_896(uParam0, (iVar0 && uVar6), "postCelebrate_disapproveFX", -1, 66);
				if (iVar9 != -1)
				{
					__LIB_0__::func_268(&(uParam2->f_2), 0f);
					func_876(uParam1, 2);
					return 0;
				}
				__LIB_0__::func_268(&(uParam2->f_2), -0.5f);
				func_876(uParam1, 2);
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(uParam2->f_2), 0f) && !func_720(&(uParam0->f_3310)))
			{
				iVar0 = func_877(&(uParam0->f_3310), -1, -1, -1);
				iVar1 = __LIB_1__::func_478(&(uParam1->f_2147));
				uVar2 = func_902(&(uParam1->f_2147));
				uVar3 = func_906(&(uParam1->f_2147));
				iVar4 = (uVar2 && -1 ^ iVar1);
				iVar10 = func_903(&(uParam1->f_2147));
				iVar11 = 0;
				while (iVar11 < 6)
				{
					if (MISC::IS_BIT_SET(iVar4, iVar11))
					{
						fVar13 = func_904(&(uParam1->f_2147), iVar11);
						fVar14 = func_887(&(uParam1->f_2147), iVar11);
						if (func_905(fVar13, fVar14))
						{
							MISC::SET_BIT(&uVar5, iVar11);
						}
						else
						{
							MISC::SET_BIT(&uVar6, iVar11);
						}
					}
					iVar11++;
				}
				if (func_476(&(uParam1->f_287), iVar10))
				{
					if (func_907(&(uParam1->f_287), iVar10))
					{
						iVar9 = func_896(uParam0, (iVar0 && iVar4), "postCelebrate_commentRareWin", iVar10, 100);
						if (iVar9 != -1)
						{
							func_607(uParam0, iVar9, 7, 6, -1);
							func_876(uParam1, 3);
							return 0;
						}
					}
					if (func_908(&(uParam1->f_287), iVar10))
					{
						iVar9 = func_896(uParam0, (iVar0 && iVar4), "postCelebrate_commentGoodWin", iVar10, 100);
						if (iVar9 != -1)
						{
							func_607(uParam0, iVar9, 7, 6, -1);
							func_876(uParam1, 3);
							return 0;
						}
					}
					if (func_909(&(uParam1->f_287), iVar10))
					{
						iVar9 = func_896(uParam0, (iVar0 && iVar4), "postCelebrate_lostToPoorWin", iVar10, 50);
						if (iVar9 != -1)
						{
							func_607(uParam0, iVar9, 7, 6, -1);
							func_876(uParam1, 3);
							return 0;
						}
					}
					if (func_909(&(uParam1->f_287), iVar10))
					{
						iVar9 = func_896(uParam0, (iVar0 && iVar4), "postCelebrate_commentPoorWin", iVar10, 100);
						if (iVar9 != -1)
						{
							func_607(uParam0, iVar9, 7, 6, -1);
							func_876(uParam1, 3);
							return 0;
						}
					}
				}
				iVar9 = func_896(uParam0, ((iVar0 && uVar5) && uVar3), "postCelebrate_bigLoss", iVar10, 100);
				if (iVar9 != -1)
				{
					func_607(uParam0, iVar9, 7, 6, -1);
					func_876(uParam1, 3);
					return 0;
				}
				iVar9 = func_896(uParam0, (iVar0 && uVar5), "postCelebrate_bigLoss", iVar10, 100);
				if (iVar9 != -1)
				{
					func_607(uParam0, iVar9, 7, 6, -1);
					func_876(uParam1, 3);
					return 0;
				}
				iVar9 = func_896(uParam0, ((iVar0 && uVar6) && uVar3), "postCelebrate_smallLoss", iVar10, 100);
				if (iVar9 != -1)
				{
					func_607(uParam0, iVar9, 7, 6, -1);
					func_876(uParam1, 3);
					return 0;
				}
				iVar9 = func_896(uParam0, (iVar0 && uVar6), "postCelebrate_smallLoss", iVar10, 100);
				if (iVar9 != -1)
				{
					func_607(uParam0, iVar9, 7, 6, -1);
					func_876(uParam1, 3);
					return 0;
				}
				func_876(uParam1, 3);
				return 0;
			}
			break;
		case 3:
			if (!func_720(&(uParam0->f_3310)))
			{
				__LIB_0__::func_268(&(uParam2->f_2), -MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.45f));
				func_876(uParam1, 4);
			}
			break;
		case 4:
			iVar11 = 0;
			while (iVar11 < 6)
			{
				if (__LIB_12__::func_296(&(uParam0->f_3310), iVar11) && func_202(&(uParam0->f_3310), iVar11, 16))
				{
					func_910(uParam1);
					return 0;
				}
				iVar11++;
			}
			if (__LIB_1__::func_285(&(uParam2->f_2), 0f) && !func_720(&(uParam0->f_3310)))
			{
				iVar0 = func_877(&(uParam0->f_3310), -1, -1, -1);
				iVar1 = __LIB_1__::func_478(&(uParam1->f_2147));
				iVar11 = 0;
				while (iVar11 < 6)
				{
					if (MISC::IS_BIT_SET(iVar4, iVar11))
					{
						fVar12 = func_911(&(uParam1->f_2147), iVar11);
						if (func_892(fVar12))
						{
							MISC::SET_BIT(&uVar7, iVar11);
						}
						else
						{
							MISC::SET_BIT(&uVar8, iVar11);
						}
					}
					iVar11++;
				}
				iVar9 = func_896(uParam0, (iVar0 && uVar7), "postCelebrate_excitedFX", 100, 100);
				if (iVar9 != -1)
				{
					func_607(uParam0, iVar9, 2, 6, -1);
				}
				iVar9 = func_896(uParam0, (iVar0 && iVar1), "postCelebrate_smallWinFX", 50, 100);
				if (iVar9 != -1)
				{
					func_607(uParam0, iVar9, 2, 6, -1);
				}
				func_910(uParam1);
				return 0;
			}
			break;
	}
	return 0;
}

int func_313(var uParam0, var uParam1, int iParam2, var uParam3)
{
	if (__LIB_1__::func_285(uParam3, 0f))
	{
		if (((!func_912(&(uParam1->f_287), iParam2) || !__LIB_12__::func_296(&(uParam0->f_3310), iParam2)) || !func_913(uParam1, iParam2, 0, 0)) || func_603(&(uParam0->f_3310), iParam2))
		{
			return 1;
		}
		else
		{
			if (func_914(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), &(uParam0->f_114.f_287), iParam2))
			{
				func_915(uParam1, 1, 0.3f);
			}
			return 1;
		}
	}
	return 0;
}

void func_314(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2523[iParam1] = iParam2;
}

int func_315(var uParam0, var uParam1, int iParam2, var uParam3)
{
	if (__LIB_1__::func_285(uParam3, 0f))
	{
		if (((!func_912(&(uParam1->f_287), iParam2) || !__LIB_12__::func_296(&(uParam0->f_3310), iParam2)) || !func_913(uParam1, iParam2, 0, 0)) || func_603(&(uParam0->f_3310), iParam2))
		{
			return 1;
		}
		else
		{
			if (func_916(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), &(uParam0->f_114.f_287), iParam2))
			{
				func_915(uParam1, 2, 0.1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_316(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	if (__LIB_1__::func_285(uParam3, 0f))
	{
		if ((!func_912(&(uParam1->f_287), iParam2) || !__LIB_12__::func_296(&(uParam0->f_3310), iParam2)) || !func_913(uParam1, iParam2, 0, 0))
		{
			return 1;
		}
		else if (__LIB_18__::func_540(&(uParam0->f_3310), iParam2, 1) || ((uParam0->f_3310.f_778 && func_614(&(uParam0->f_3310), iParam2, 6)) && func_917(uParam1) == 1))
		{
			if (!func_603(&(uParam0->f_3310), iParam2))
			{
				iVar0 = func_469(&(uParam1->f_287), iParam2);
				iVar1 = func_918(&(uParam1->f_287), iParam2);
				iVar2 = (func_144(&(uParam1->f_287), iParam2) - iVar1);
				iVar3 = (iVar2 + iVar0);
				fVar4 = (BUILTIN::TO_FLOAT(iVar0) / BUILTIN::TO_FLOAT(iVar3));
				fVar5 = (BUILTIN::TO_FLOAT((iVar1 - iVar0)) / BUILTIN::TO_FLOAT(iVar3));
				if (func_919(&(uParam0->f_3310), iParam2, 1))
				{
					if (MISC::IS_BIT_SET(uParam1->f_2538, iParam2) && !MISC::IS_BIT_SET(uParam1->f_2537, iParam2))
					{
						func_712(&(uParam0->f_3310), iParam2, 0, 1);
					}
					else if (!MISC::IS_BIT_SET(uParam1->f_2538, iParam2) && MISC::IS_BIT_SET(uParam1->f_2537, iParam2))
					{
						func_712(&(uParam0->f_3310), iParam2, 1, 1);
					}
					else if (fVar5 > 0f)
					{
						if (fVar5 >= 0.5f && uParam1->f_2539 < 1)
						{
							func_712(&(uParam0->f_3310), iParam2, 0, 1);
							uParam1->f_2539++;
							uParam1->f_2541++;
						}
						else if (fVar5 >= 0.25f && uParam1->f_2541 < 3)
						{
							func_712(&(uParam0->f_3310), iParam2, 0, 0);
							uParam1->f_2541++;
						}
					}
					else if (fVar4 >= 0.2f && uParam1->f_2541 < 3)
					{
						func_712(&(uParam0->f_3310), iParam2, 1, 0);
						uParam1->f_2541++;
					}
				}
				func_920(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), &(uParam0->f_114.f_287), iParam2);
				func_915(uParam1, 3, 0.6f);
				return 1;
			}
		}
	}
	return 0;
}

void func_321(var uParam0, vector3 vParam1)
{
	if (uParam0->f_758 >= 20)
	{
	}
	else
	{
		uParam0->f_697[uParam0->f_758 /*3*/] = { vParam1 };
		uParam0->f_758++;
	}
}

void func_322(var uParam0, vector3 vParam1)
{
	uParam0->f_762 = 1;
	uParam0->f_759 = { vParam1 };
}

void func_331(var uParam0, int iParam1, bool bParam2, int iParam3)
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
	uParam0->f_152++;
	*uParam0 = iParam1;
	uParam0->f_2 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-1534086282);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "MinigamesDataStore");
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "gameSettings");
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "totalsStack");
	uParam0->f_30 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_23, "isVisible", 1);
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_23, "totalsTextItemData");
	__LIB_7__::func_732(uParam0, iParam3);
	iVar1 = 0;
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_23, "totalsItemArray");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_24);
	func_926(uParam0);
	if ((iParam1 == 2 || iParam1 == 0) || bParam2)
	{
		uVar4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_23, "communityGameTokenItemArray");
		uVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_23, "communityGameTokenItemData");
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uVar4);
		iVar0 = 0;
		while (iVar0 < uParam0->f_17)
		{
			StringCopy(&cVar2, "", 8);
			StringIntConCat(&cVar2, iVar0, 8);
			uVar6 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar5, &cVar2);
			uParam0->f_17[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar6, "textureName", "");
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uVar4, iVar0, "single_game_token_big", uVar6);
			iVar0++;
		}
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_24, 0, "community_cards", uParam0->f_23);
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		StringCopy(&cVar2, "", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uParam0->f_10[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar3, &cVar2);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_24, (iVar0 + iVar1), "money_with_text", uParam0->f_10[iVar0]);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_10[iVar0], "moneyText", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_10[iVar0], "text", "");
		iVar0++;
	}
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "playerStack");
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_7, "playerData");
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_7, "playerList");
	uParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_7, "isVisible", 1);
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	uVar7 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "bettingControl");
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar7, "isVisible", 0);
	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar7, "text", "");
	uParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar7, "isLeftArrowVisible", 0);
	uParam0->f_28 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar7, "isRightArrowVisible", 0);
	uVar8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "centralScoretimer");
	uParam0->f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar8, "isVisible", 0);
	uParam0->f_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar8, "timerString", "18:88");
	uParam0->f_33 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar8, "isVisible", 0);
	__LIB_7__::func_733(uParam0, 2);
}

void func_332(var uParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	func_928(uParam0, &(uParam0->f_34[iParam1 /*19*/]), iParam1, sParam2, sParam3, bParam4, iParam5);
}

void func_338(var uParam0)
{
	func_931(uParam0);
}

void func_353(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_353(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_353(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_362(int iParam0, int iParam1)
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
				func_967(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_967(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_366(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_159[iParam1] != 0)
	{
		func_844(uParam0, iParam1);
	}
	if (iParam2 == 0 || PED::IS_PED_INJURED(iParam2))
	{
		uParam0->f_159[iParam1] = 3;
	}
	else if (__LIB_12__::func_350(&Global_1899750, iParam2, iParam1, 0))
	{
		uParam0->f_159[iParam1] = 2;
	}
	else
	{
		uParam0->f_159[iParam1] = 3;
	}
	uParam0->f_173[iParam1] = MISC::GET_GAME_TIMER();
}

bool func_367(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_159[iVar0] == 1)
		{
			if (!((__LIB_12__::func_351(uParam0->f_166[iVar0]) || __LIB_12__::func_352(uParam0->f_166[iVar0])) || MISC::GET_GAME_TIMER() > uParam0->f_173[iVar0] + 5000))
			{
				return false;
			}
		}
		else if (uParam0->f_159[iVar0] == 2)
		{
			if (!(__LIB_8__::func_751(&Global_1899750, iVar0) || MISC::GET_GAME_TIMER() > uParam0->f_173[iVar0] + 5000))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_368(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_387(uParam1, iVar0))
		{
			if (__LIB_12__::func_341(func_628(uParam1, iVar0, 0)) && __LIB_12__::func_341(func_628(uParam1, iVar0, 1)))
			{
				func_630(&(uParam0->f_3310), iVar0, func_628(uParam1, iVar0, 0), func_628(uParam1, iVar0, 1), 0);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < uParam1->f_15.f_23)
	{
		__LIB_18__::func_542(&(uParam0->f_3310), iVar1, func_973(uParam1, iVar1), 0);
		iVar1++;
	}
}

bool func_369(var uParam0)
{
	if (!__LIB_18__::func_545(&(uParam0->f_3310)))
	{
		return false;
	}
	if (!__LIB_18__::func_546(&(uParam0->f_3310)))
	{
		return false;
	}
	return true;
}

void func_370(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar0 = uParam0->f_2109[iVar1];
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
				ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
			}
			else
			{
				PED::DELETE_PED(&iVar0);
			}
		}
		uParam0->f_2109[iVar1] = 0;
		iVar1++;
	}
}

int func_371(var uParam0, int iParam1)
{
	return uParam0->f_50[iParam1 /*19*/];
}

int func_372(var uParam0, int iParam1)
{
	if (uParam0->f_50[iParam1 /*19*/] != 1)
	{
		return 255;
	}
	return uParam0->f_50[iParam1 /*19*/].f_17;
}

void func_373(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (uParam0->f_159[iParam1] != 0)
	{
		func_844(uParam0, iParam1);
	}
	if (iParam2 == 255 || PLAYER::IS_PLAYER_DEAD(iParam2))
	{
		uParam0->f_159[iParam1] = 3;
	}
	else
	{
		iVar0 = __LIB_18__::func_547(iParam2, "pkrHeadShot", &(uParam0->f_180));
		if (iVar0 != 0)
		{
			uParam0->f_159[iParam1] = 1;
			uParam0->f_166[iParam1] = iVar0;
		}
		else
		{
			uParam0->f_159[iParam1] = 3;
		}
	}
	uParam0->f_173[iParam1] = MISC::GET_GAME_TIMER();
}

bool func_374(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	*uParam3 = 0;
	*uParam4 = -1;
	if (uParam0->f_114.f_9 == iParam1)
	{
		*uParam3 = PLAYER::GET_PLAYER_PED(iParam2);
	}
	else if (iParam2 != 255 && !PLAYER::IS_PLAYER_DEAD(iParam2))
	{
		*uParam3 = PED::CLONE_PED(PLAYER::GET_PLAYER_PED(iParam2), 0f, false, false);
		if (!PED::IS_PED_INJURED(*uParam3))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*uParam3, "Poker_NPC_Group", 0f);
		}
	}
	else
	{
		iVar0 = __LIB_4__::func_875(uParam0->f_1.f_38, uParam0->f_1.f_41, -1);
		if (iVar0 != 0)
		{
			*uParam3 = __LIB_1__::func_545(iVar0, uParam0->f_3310, 0f, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(*uParam3))
		{
			*uParam4 = __LIB_7__::func_705(2, func_978(&(uParam0->f_3310)));
			__LIB_7__::func_706(*uParam3, 2, uParam0->f_1.f_41, *uParam4);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*uParam3, "Poker_NPC_Group", 0f);
		}
	}
	if (PED::IS_PED_INJURED(*uParam3))
	{
		return false;
	}
	return true;
}

void func_375(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_2109[iParam1] != 0)
	{
	}
	else if (PED::IS_PED_INJURED(iParam2))
	{
	}
	else
	{
		uParam0->f_2109[iParam1] = iParam2;
		if (bParam3)
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam2, false);
			ENTITY::SET_ENTITY_COLLISION(iParam2, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iParam2, true);
		}
	}
}

bool func_376(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (uParam0->f_2136)
		{
			return false;
		}
	}
	if (iParam1 == 0)
	{
	}
	else if (uParam0->f_1259 == -1857735811)
	{
		if (uParam0->f_1259.f_1 == iParam1)
		{
			return true;
		}
		if ((bParam2 && uParam0->f_1259.f_1 != 1995414514) && uParam0->f_1259.f_1 != 1592704673)
		{
		}
	}
	return false;
}

bool func_377(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (uParam0->f_2136)
		{
			return false;
		}
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if ((uParam0->f_1259 == -1857735811 && uParam0->f_1259.f_1 == 1995414514) && MISC::IS_BIT_SET(uParam0->f_1259.f_2, iParam1))
	{
		return true;
	}
	return false;
}

int func_378(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (uParam1->f_2041[iParam2 /*6*/] != 0)
	{
		return 0;
	}
	uParam1->f_2041[iParam2 /*6*/] = iParam3;
	uParam1->f_2041[iParam2 /*6*/].f_1 = 0;
	__LIB_1__::func_148(&(uParam1->f_2041[iParam2 /*6*/].f_2));
	if (bParam4)
	{
		func_381(uParam0, uParam1, iParam2);
	}
	return 1;
}

void func_379(var uParam0, var uParam1)
{
	func_809(uParam0, uParam1, func_981(uParam0), 1);
}

void func_380(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = uParam1->f_2031;
	iVar1 = 0;
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(&(uParam1->f_2031));
	Call_Loc(uParam1->f_2035[iVar0]);
	while (StackVal && iVar1 < 10)
	{
		iVar1++;
	}
}

void func_381(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = uParam1->f_2041[iParam2 /*6*/];
	iVar1 = 0;
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(&(uParam1->f_2041[iParam2 /*6*/]));
	Stack.Push(iParam2);
	Call_Loc(uParam1->f_2078[iVar0]);
	while (StackVal && iVar1 < 10)
	{
		iVar1++;
	}
}

void func_382(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = uParam1->f_2082;
	iVar1 = 0;
	Stack.Push(uParam1->f_2082 != 0);
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(&(uParam1->f_2082));
	Call_Loc(uParam1->f_2093[iVar0]);
	while ((StackVal && StackVal) && iVar1 < 10)
	{
		iVar1++;
	}
}

bool func_383(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_2136)
		{
			return false;
		}
	}
	if ((uParam0->f_1259 == -1857735811 && uParam0->f_1259.f_1 == 1592704673) && uParam0->f_1259.f_2 != 0)
	{
		return true;
	}
	return false;
}

bool func_384(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (uParam0->f_2136)
		{
			return false;
		}
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if ((uParam0->f_1259 == -1857735811 && uParam0->f_1259.f_1 == 1592704673) && MISC::IS_BIT_SET(uParam0->f_1259.f_2, iParam1))
	{
		return true;
	}
	return false;
}

void func_385(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (uParam0->f_1259 != -1857735811)
	{
		return;
	}
	else if (uParam0->f_1259.f_1 != 1592704673)
	{
		return;
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_1259.f_2, iParam1))
	{
		return;
	}
	else
	{
		uParam0->f_287.f_39[iParam1 /*56*/] = { uParam0->f_773.f_39[iParam1 /*56*/] };
		MISC::CLEAR_BIT(&(uParam0->f_1259.f_2), iParam1);
		if (uParam0->f_1259.f_2 == 0)
		{
			func_141(uParam0, 1, 0, 0);
		}
	}
}

bool func_387(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && uParam0->f_39[iParam1 /*56*/] != -1) && uParam0->f_39[iParam1 /*56*/].f_6 != -1)
	{
		return true;
	}
	return false;
}

bool func_388(var uParam0)
{
	return uParam0->f_298;
}

void func_389(var uParam0, var uParam1)
{
	if (uParam0->f_154)
	{
		return;
	}
	uParam0->f_298 = 1;
	uParam0->f_298.f_1 = 0;
	uParam0->f_298.f_2 = __LIB_0__::func_259(uParam1->f_13, func_982(uParam0, __LIB_0__::func_492(1)));
	__LIB_12__::func_337(&(uParam0->f_298.f_3));
	uParam0->f_298.f_11 = 0;
}

bool func_390(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (uParam0->f_298)
	{
		if (uParam0->f_298.f_1 == 0)
		{
			iVar0 = __LIB_0__::func_259(uParam1->f_12, func_982(uParam0, __LIB_0__::func_492(1)));
			iVar1 = __LIB_0__::func_259(uParam1->f_13, func_982(uParam0, __LIB_0__::func_492(1)));
			if (!__LIB_0__::func_139(uParam0->f_298.f_12))
			{
				uParam0->f_298.f_12 = __LIB_1__::func_877("MGPKR_UI_BUYIN", joaat("INPUT_MINIGAME_POKER_BET"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (!__LIB_0__::func_139(uParam0->f_298.f_13))
			{
				if (iVar0 != iVar1)
				{
					uParam0->f_298.f_13 = __LIB_1__::func_877("MGPKR_UI_ALTER", joaat("INPUT_MINIGAME_CHANGE_BET_AXIS_Y"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
			}
			iVar2 = 0;
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_INCREASE_BET")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DECREASE_BET")))
			{
				__LIB_12__::func_337(&(uParam0->f_298.f_3));
			}
			if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_INCREASE_BET")))
			{
				iVar2 = __LIB_12__::func_353(&(uParam0->f_298.f_3), 1f, 0);
			}
			else if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_DECREASE_BET")))
			{
				iVar2 = __LIB_12__::func_353(&(uParam0->f_298.f_3), -1f, 0);
			}
			else
			{
				iVar2 = __LIB_12__::func_353(&(uParam0->f_298.f_3), -PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MINIGAME_CHANGE_BET_AXIS_Y")), 0);
			}
			if (iVar2 != 0)
			{
				iVar3 = __LIB_9__::func_939((uParam0->f_298.f_2 + iVar2), iVar0, iVar1);
				if (uParam0->f_298.f_2 != iVar3)
				{
					uParam0->f_298.f_2 = iVar3;
					__LIB_12__::func_354((iVar3 == iVar0 || iVar3 == iVar1));
				}
			}
			if (__LIB_1__::func_732(uParam0->f_298.f_12, 1))
			{
				uParam0->f_298.f_1 = 1;
			}
			if (__LIB_0__::func_139(uParam0->f_298.f_12))
			{
				__LIB_1__::func_483(uParam0->f_298.f_12, "MGPKR_UI_BUYIN", func_987(uParam0, uParam0->f_298.f_2), 1);
			}
		}
		if (uParam0->f_298.f_1 != 0)
		{
			__LIB_1__::func_748(&(uParam0->f_298.f_12), 1, 1);
			__LIB_1__::func_748(&(uParam0->f_298.f_13), 1, 1);
			return true;
		}
	}
	return false;
}

var func_391(var uParam0)
{
	return uParam0->f_298.f_2;
}

bool func_392(var uParam0, int iParam1, var uParam2)
{
	func_990(&(uParam0->f_1276), iParam1, 1, uParam2);
	return true;
	return false;
}

void func_393(var uParam0)
{
	uParam0->f_298 = 0;
	uParam0->f_298.f_1 = 0;
	uParam0->f_298.f_2 = 0;
	__LIB_1__::func_748(&(uParam0->f_298.f_12), 1, 1);
	__LIB_1__::func_748(&(uParam0->f_298.f_13), 1, 1);
}

void func_394(var uParam0)
{
	func_991(uParam0, &(uParam0->f_114));
}

void func_395(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	bool bVar7;
	struct<16> Var8;
	int iVar24;
	int iVar25;
	bool bVar26;
	if (!__LIB_0__::func_75(&(uParam0->f_114.f_2642)))
	{
		__LIB_1__::func_148(&(uParam0->f_114.f_2642));
	}
	else if (uParam0->f_114.f_2653 == 1)
	{
		if (__LIB_1__::func_285(&(uParam0->f_114.f_2642), 3f))
		{
			func_118(&(uParam0->f_114), 2);
		}
	}
	if (((((((__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_9) && __LIB_12__::func_300(&(uParam0->f_3310), uParam0->f_114.f_9) == 2) && !func_614(&(uParam0->f_3310), uParam0->f_114.f_9, 5)) && !func_614(&(uParam0->f_3310), uParam0->f_114.f_9, 7)) && uParam0->f_114.f_2010 != 12) && uParam0->f_114.f_2010 != 11) && uParam0->f_114.f_2010 != 11) && uParam0->f_114.f_2011 != 72)
	{
		func_992(&(uParam0->f_2979), 1);
		bVar1 = true;
	}
	else
	{
		func_992(&(uParam0->f_2979), 0);
		bVar1 = false;
	}
	if ((((__LIB_12__::func_355(&(uParam0->f_3310), 0) && uParam0->f_114.f_2010 != 12) && uParam0->f_114.f_2010 != 11) && uParam0->f_114.f_2010 != 11) && uParam0->f_114.f_2011 != 72)
	{
		func_994(&(uParam0->f_2979), 1);
	}
	else
	{
		func_994(&(uParam0->f_2979), 0);
	}
	if (((((__LIB_12__::func_292(uParam0, 2) && __LIB_0__::func_139(uParam0->f_2979.f_321)) && bVar1) && func_472(&(uParam0->f_114.f_287), 5)) && __LIB_12__::func_344(&(uParam0->f_3310), 5) == 2) && uParam0->f_2979.f_281)
	{
		func_995(&(uParam0->f_2979), 1);
	}
	else
	{
		func_995(&(uParam0->f_2979), 0);
	}
	if (uParam0->f_4583.f_1)
	{
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = -1;
		iVar5 = -1;
		fVar6 = 0f;
		if (uParam0->f_114.f_2544)
		{
			iVar2 = 4;
		}
		else if (uParam0->f_4583.f_2 == 5)
		{
			if (func_202(&(uParam0->f_3310), uParam0->f_114.f_9, 3))
			{
				iVar2 = 5;
			}
			else if (uParam0->f_4583.f_6 < 5)
			{
				if (uParam0->f_4583.f_6 == 3)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(24.97928f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				iVar2 = 5;
				uParam0->f_4583.f_6++;
			}
			else
			{
				iVar2 = 0;
			}
		}
		else
		{
			bVar7 = false;
			switch (uParam0->f_4583.f_2)
			{
				case 0:
					if (__LIB_12__::func_425(uParam0->f_2979.f_323))
					{
						iVar2 = 3;
					}
					else if (__LIB_12__::func_425(uParam0->f_2979.f_321) || bVar7)
					{
						iVar2 = 2;
					}
					else if (__LIB_12__::func_425(uParam0->f_2979.f_322))
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					break;
				case 2:
					if (__LIB_12__::func_425(uParam0->f_2979.f_323))
					{
						iVar2 = 3;
					}
					else if (__LIB_12__::func_425(uParam0->f_2979.f_322))
					{
						iVar2 = 1;
					}
					else if (!(func_997(uParam0->f_2979.f_321) || bVar7))
					{
						if (func_997(uParam0->f_2979.f_323))
						{
							iVar2 = 3;
						}
						else if (func_997(uParam0->f_2979.f_322))
						{
							iVar2 = 1;
						}
						else
						{
							iVar2 = 0;
						}
					}
					else
					{
						iVar2 = 2;
					}
					break;
				case 1:
					if (__LIB_12__::func_425(uParam0->f_2979.f_323))
					{
						iVar2 = 3;
					}
					else if (__LIB_12__::func_425(uParam0->f_2979.f_321) || bVar7)
					{
						iVar2 = 2;
					}
					else if (!func_997(uParam0->f_2979.f_322))
					{
						if (func_997(uParam0->f_2979.f_323))
						{
							iVar2 = 3;
						}
						else if (func_997(uParam0->f_2979.f_321))
						{
							iVar2 = 2;
						}
						else
						{
							iVar2 = 0;
						}
					}
					else
					{
						iVar2 = 1;
					}
					break;
				case 3:
					if (__LIB_12__::func_425(uParam0->f_2979.f_321))
					{
						iVar2 = 2;
					}
					else if (__LIB_12__::func_425(uParam0->f_2979.f_322))
					{
						iVar2 = 1;
					}
					else if (!func_997(uParam0->f_2979.f_323))
					{
						if (func_997(uParam0->f_2979.f_321))
						{
							iVar2 = 2;
						}
						else if (func_997(uParam0->f_2979.f_322))
						{
							iVar2 = 1;
						}
						else
						{
							iVar2 = 0;
						}
					}
					else
					{
						iVar2 = 3;
					}
					break;
			}
			if (!CAM::_0xA24C1D341C6E0D53(0, 0, 0))
			{
				if (uParam0->f_114.f_2010 == 6 && (uParam0->f_114.f_2011 == 22 || uParam0->f_114.f_2011 == 23))
				{
					if (iVar2 == 0)
					{
						iVar2 = 1;
					}
				}
				if (uParam0->f_114.f_2010 == 7 && (uParam0->f_114.f_2011 == 22 || uParam0->f_114.f_2011 == 23))
				{
					if (iVar2 == 0)
					{
						iVar2 = 1;
					}
				}
				if (uParam0->f_114.f_2862)
				{
					if (iVar2 == 0)
					{
						iVar2 = 1;
					}
				}
			}
		}
		iVar3 = 0;
		if (uParam0->f_114.f_9 == uParam0->f_114.f_287.f_6)
		{
			if (uParam0->f_2979.f_281)
			{
				iVar3 = 1;
			}
		}
		if (iVar2 == 1)
		{
			iVar4 = uParam0->f_114.f_2474;
			if (uParam0->f_114.f_2474 == uParam0->f_114.f_9)
			{
				iVar5 = 0;
			}
			else
			{
				iVar5 = 1;
			}
		}
		else if (iVar2 == 4)
		{
			iVar4 = uParam0->f_114.f_2542;
			iVar5 = -1;
		}
		else if (iVar2 == 5)
		{
			iVar4 = uParam0->f_114.f_9;
			iVar5 = -1;
		}
		else
		{
			iVar4 = -1;
			iVar5 = -1;
		}
		if (iVar2 == 1 || iVar2 == 3)
		{
			if (uParam0->f_4583.f_2 == 0)
			{
				fVar6 = 2.5f;
			}
		}
		if (((uParam0->f_4583.f_2 != iVar2 || (((uParam0->f_4583.f_3 != iVar3 && iVar2 != 1) && iVar2 != 3) && iVar2 != 4)) || uParam0->f_4583.f_4 != iVar4) || uParam0->f_4583.f_5 != iVar5)
		{
			func_218(&(uParam0->f_4583), iVar2, iVar3, iVar4, iVar5, fVar6);
			if (__LIB_12__::func_292(uParam0, 2))
			{
				if (iVar2 == 3)
				{
					__LIB_12__::func_436(2, 0);
				}
				else
				{
					__LIB_12__::func_435(2);
				}
			}
		}
		func_998(&(uParam0->f_4583));
	}
	if (!__LIB_0__::func_75(&(uParam0->f_114.f_2639)))
	{
		if (!func_999(&(uParam0->f_2979)))
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_REVEAL_HUD")))
			{
				__LIB_1__::func_148(&(uParam0->f_114.f_2639));
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (func_143(&(uParam0->f_114.f_287), iVar0))
					{
						if (func_822(&(uParam0->f_2979), iVar0))
						{
							Var8 = { func_1000(&(uParam0->f_114), iVar0, 0) };
							func_1001(&(uParam0->f_2979), iVar0, &Var8);
						}
					}
					iVar0++;
				}
			}
		}
	}
	else if (__LIB_1__::func_285(&(uParam0->f_114.f_2639), 2f))
	{
		__LIB_0__::func_37(&(uParam0->f_114.f_2639));
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_822(&(uParam0->f_2979), iVar0))
			{
				func_1002(&(uParam0->f_2979), iVar0);
			}
			iVar0++;
		}
	}
	func_1003(uParam0, &(uParam0->f_114));
	func_1004(&(uParam0->f_2979), &(uParam0->f_114.f_287));
	if (!uParam0->f_114.f_2122)
	{
		if (uParam0->f_4583.f_2 == 2)
		{
			uParam0->f_114.f_2122 = 1;
		}
	}
	else if (uParam0->f_4583.f_2 != 2 && uParam0->f_4583.f_2 != 1)
	{
		uParam0->f_114.f_2122 = 0;
	}
	if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_9))
	{
		if (uParam0->f_114.f_2122)
		{
			if (!func_202(&(uParam0->f_3310), uParam0->f_114.f_9, 8) && __LIB_18__::func_540(&(uParam0->f_3310), uParam0->f_114.f_9, 1))
			{
				func_1005(&(uParam0->f_3310), uParam0->f_114.f_9);
			}
		}
		else if (func_202(&(uParam0->f_3310), uParam0->f_114.f_9, 8) && !func_1006(&(uParam0->f_3310), uParam0->f_114.f_9, 1))
		{
			func_168(&(uParam0->f_3310), uParam0->f_114.f_9);
		}
	}
	func_1007(uParam0, &(uParam0->f_114));
	func_1008(uParam0, &(uParam0->f_114));
	if (__LIB_12__::func_292(uParam0, 3))
	{
		func_1009(&(uParam0->f_114), &(uParam0->f_3310));
	}
	func_1010(uParam0, &(uParam0->f_114), &(uParam0->f_3310));
	if (uParam0->f_114.f_2645 != -1)
	{
		func_1011(uParam0);
	}
	if (__LIB_12__::func_292(uParam0, 2))
	{
		if (__LIB_12__::func_424(16))
		{
			iVar24 = 2;
			iVar25 = 5;
		}
		else if (__LIB_12__::func_424(17))
		{
			iVar24 = 5;
			iVar25 = 2;
		}
		else if (__LIB_12__::func_424(18))
		{
			iVar24 = 4;
			iVar25 = 2;
		}
		else if (__LIB_12__::func_424(19))
		{
			iVar24 = 4;
			iVar25 = 5;
		}
		else
		{
			iVar24 = -1;
			iVar25 = -1;
		}
		if (func_1012(uParam0) != iVar24 || func_1013(uParam0) != iVar25)
		{
			func_1014(uParam0);
			if (iVar24 != -1 && iVar25 != -1)
			{
				func_1015(uParam0, iVar24, iVar25);
			}
		}
	}
	func_1016(uParam0, &(uParam0->f_114));
	func_1017(uParam0, &(uParam0->f_114), &(uParam0->f_114.f_2147.f_112));
	func_1018(&(uParam0->f_114));
	bVar26 = !func_999(&(uParam0->f_2979));
	if (uParam0->f_1.f_57 != bVar26)
	{
		__LIB_18__::func_548(&(uParam0->f_1), bVar26);
	}
	if (uParam0->f_1.f_54 == 2 || uParam0->f_1.f_54 == 3)
	{
		func_1020(&(uParam0->f_114), 1);
	}
	switch (uParam0->f_114.f_2654)
	{
		case 1:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_YOUR_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_COMMUNITY_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_HOLE_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_BOARD_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_SKIP"), false);
			PAD::ENABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_QUIT"), true);
			break;
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_YOUR_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_COMMUNITY_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_HOLE_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_BOARD_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_SKIP"), false);
			break;
	}
	uParam0->f_114.f_2654 = 0;
}

void func_396(var uParam0)
{
	struct<72> Var0;
	int iVar72;
	Var0.f_10 = 6;
	if (!MINIGAME::_0x580F34C726387226(&Var0, 72))
	{
		return;
	}
	MINIGAME::_0x0876326238914A3F();
	uParam0->f_1 = { Var0.f_1 };
	uParam0->f_9 = Var0.f_9;
	*uParam0 = 1;
	iVar72 = 0;
	while (iVar72 < Var0.f_71)
	{
		func_1021(uParam0, Var0.f_10[iVar72 /*10*/], Var0.f_10[iVar72 /*10*/].f_8);
		iVar72++;
	}
}

void func_397(var uParam0)
{
	struct<11> Var0;
	Var0.f_10 = 6;
	if (!MINIGAME::_0x580F34C726387226(&Var0, 72))
	{
		return;
	}
	MINIGAME::_0x0876326238914A3F();
	uParam0->f_1 = { Var0.f_1 };
	uParam0->f_9 = Var0.f_9;
	*uParam0 = 0;
}

void func_398(var uParam0)
{
	struct<2> Var0;
	if (!MINIGAME::_0x580F34C726387226(&Var0, 11))
	{
		return;
	}
	MINIGAME::_0x0876326238914A3F();
	func_1021(uParam0, Var0.f_1, Var0.f_1.f_8);
}

void func_399(var uParam0)
{
	struct<2> Var0;
	if (!MINIGAME::_0x580F34C726387226(&Var0, 11))
	{
		return;
	}
	MINIGAME::_0x0876326238914A3F();
	func_1022(uParam0, Var0.f_1);
}

void func_400(var uParam0, var uParam1)
{
	int iVar0;
	if (MINIGAME::_0xE53A308AC35877A8() != -1857735811)
	{
		return;
	}
	MINIGAME::_0x0876326238914A3F();
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_280[iVar0])
		{
			func_1023(uParam0, iVar0);
		}
		iVar0++;
	}
	if (uParam1->f_1 == -1766937362)
	{
		func_1024(&(uParam0->f_287), uParam1, uParam1->f_6, &(uParam0->f_1265), &(uParam0->f_1266), &(uParam0->f_1267));
	}
	uParam0->f_287 = { *uParam1 };
}

void func_402(var uParam0)
{
	uParam0->f_1259 = 0;
	uParam0->f_1259.f_1 = 0;
	uParam0->f_1259.f_2 = 0;
}

void func_410(var uParam0)
{
	func_1038(uParam0);
	func_1039(uParam0);
}

void func_411(var uParam0)
{
	func_370(uParam0);
}

void func_412(var uParam0, var uParam1)
{
	if (uParam0->f_2752 != 0)
	{
		func_1040(uParam0, uParam1);
	}
}

void func_423(var uParam0)
{
	if (!uParam0->f_1)
	{
	}
	else
	{
		if (CAM::_0x927B810E43E99932(&(uParam0->f_9)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_9));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9.f_17))
		{
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(uParam0->f_9.f_17));
		}
		if (uParam0->f_8)
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0) && CAM::_0xD1BA66940E94C547())
			{
				GRAPHICS::_0xBB6C707F20D955D4(5f);
			}
			else
			{
				GRAPHICS::_0xBB6C707F20D955D4(1E-08f);
			}
		}
		func_1042(&(uParam0->f_36));
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_4 = -1;
		uParam0->f_5 = -1;
		uParam0->f_8 = 0;
	}
}

void func_424(var uParam0)
{
	int iVar0;
	if (func_1043(uParam0))
	{
		func_479(uParam0, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_135))
	{
		CAM::DESTROY_CAM(uParam0->f_135, false);
	}
	uParam0->f_126 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		uParam0->f_122[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		uParam0->f_124[iVar0] = 0;
		iVar0++;
	}
}

void func_427(var uParam0)
{
	if (func_999(uParam0))
	{
		func_1044(uParam0);
	}
	if (func_388(uParam0))
	{
		func_393(uParam0);
	}
	if (func_1045(uParam0))
	{
		func_684(uParam0);
	}
	__LIB_1__::func_748(&(uParam0->f_321), 1, 1);
	__LIB_1__::func_748(&(uParam0->f_322), 1, 1);
	__LIB_1__::func_748(&(uParam0->f_323), 1, 1);
	__LIB_1__::func_748(&(uParam0->f_324), 1, 1);
	__LIB_1__::func_748(&(uParam0->f_325), 1, 1);
	__LIB_1__::func_748(&(uParam0->f_326), 1, 1);
	__LIB_1__::func_748(&(uParam0->f_327), 1, 1);
	__LIB_0__::func_37(&(uParam0->f_328));
}

void func_428(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_159[iVar0] != 0)
		{
			func_844(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_429(var uParam0)
{
	int iVar0;
	if (uParam0->f_1 != 5)
	{
		if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
		{
			func_1046(uParam0);
			iVar0 = 0;
			while (iVar0 < 6)
			{
				__LIB_12__::func_426(uParam0, iVar0);
				iVar0++;
			}
			func_926(uParam0);
			UISTATEMACHINE::_UISTATEMACHINE_DESTROY(-1631983120);
			UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_2));
		}
		__LIB_7__::func_733(uParam0, 5);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_6);
		uParam0->f_152 = (uParam0->f_152 - 1);
	}
}

void func_431(var uParam0, int iParam1)
{
	uParam0->f_114.f_2476 = iParam1;
	func_1049(&(uParam0->f_2979), iParam1);
}

void func_434(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_1050(uParam0, iParam1, iParam3);
	func_1051(uParam0, iParam1, iParam2, bParam4);
}

void func_435(var uParam0, int iParam1)
{
	struct<2> Var0;
	uParam0->f_1 = iParam1;
	Var0.f_1.f_15 = 11;
	Var0.f_1.f_39 = 6;
	Var0.f_1.f_39.f_1.f_7 = 11;
	Var0.f_1.f_39.f_1.f_31 = 11;
	Var0.f_1.f_39.f_1.f_56.f_7 = 11;
	Var0.f_1.f_39.f_1.f_56.f_31 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_1.f_376 = 6;
	Var0.f_1.f_376.f_1.f_2 = 6;
	Var0.f_1.f_376.f_1.f_10 = 6;
	Var0.f_1.f_376.f_1.f_18.f_2 = 6;
	Var0.f_1.f_376.f_1.f_18.f_10 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0 = -1857735811;
	Var0.f_1 = { *uParam0 };
	MINIGAME::_0xE1F365C4C8F259D8(Var0, &Var0, 487);
}

void func_442(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((*uParam3)[iVar0] > 0)
		{
			func_1069(uParam0, iParam1, iVar0, (*uParam2)[iVar0], (*uParam3)[iVar0], __LIB_12__::func_253((*uParam2)[iVar0], (*uParam3)[iVar0], 10), bParam4, 0);
		}
		else
		{
			__LIB_18__::func_553(uParam0, iParam1, iVar0, bParam4);
		}
		iVar0++;
	}
}

bool func_443(var uParam0)
{
	return uParam0->f_536 != 0;
}

bool func_444(var uParam0, int iParam1)
{
	if (uParam0->f_731 != -1)
	{
		return false;
	}
	uParam0->f_731 = iParam1;
	return true;
}

int func_448(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (uParam0->f_50[iVar2 /*19*/] == 2)
		{
			iVar1 = (uParam0->f_50[iVar2 /*19*/].f_18 - 28);
			if (iVar1 >= 0 && iVar1 < 23)
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar2++;
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 23);
	iVar3 = 0;
	while (iVar3 < 23)
	{
		if (!MISC::IS_BIT_SET(iVar0, iVar1))
		{
		}
		else
		{
			iVar3++;
		}
	}
	return (28 + iVar1);
}

bool func_449(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_493[iParam1 /*3*/] != 0)
	{
		return false;
	}
	if (!func_1074(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_493[iParam1 /*3*/] = 1;
	uParam0->f_493[iParam1 /*3*/].f_1 = iParam2;
	uParam0->f_493[iParam1 /*3*/].f_2 = iParam3;
	return true;
}

void func_452(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (uParam0->f_536 == 0)
	{
		return;
	}
	if (uParam0->f_536 != iParam1)
	{
		return;
	}
	uParam0->f_536 = 0;
}

void func_462(var uParam0)
{
	if (uParam0->f_126 == 0)
	{
		return;
	}
	if (!CAM::DOES_CAM_EXIST(uParam0->f_135))
	{
		uParam0->f_135 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
	}
	if (!CAM::DOES_CAM_EXIST(uParam0->f_135))
	{
	}
}

char* func_463(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "Odd_Jobs_Poker_Exposure_val";
		case 0:
			return "Odd_Jobs_Poker_First_Person";
		default:
			break;
	}
	return "Odd_Jobs_Poker_First_Person";
}

bool func_464(var uParam0, int iParam1)
{
	if (uParam0->f_732 != 0)
	{
		return false;
	}
	uParam0->f_732 = iParam1;
	return true;
}

void func_465(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	while (iVar5 < 6)
	{
		if (uParam0->f_493[iVar5 /*3*/] != 0)
		{
			bVar3 = true;
		}
		if (uParam0->f_493[iVar5 /*3*/] == 2)
		{
			bVar4 = true;
		}
		iVar5++;
	}
	if (bVar3)
	{
		iVar5 = 0;
		while (iVar5 < 6)
		{
			if (func_1079(uParam0, iVar5, &vVar0))
			{
				if (func_143(uParam0, iVar5))
				{
					uParam0->f_538[iVar5 /*3*/] = iVar5;
					uParam0->f_538[iVar5 /*3*/].f_1 = uParam0->f_39[iVar5 /*56*/].f_4;
					uParam0->f_538[iVar5 /*3*/].f_2 = uParam0->f_39[iVar5 /*56*/].f_2;
				}
				func_1080(uParam0, iVar5);
				if (uParam0->f_6 == iVar5 && uParam0->f_535 == 7)
				{
					func_1081(uParam0, 9);
				}
			}
			else if (func_1082(uParam0, iVar5, &vVar0))
			{
				if (func_143(uParam0, iVar5))
				{
					return;
				}
				else
				{
					func_434(uParam0, iVar5, vVar0.y, vVar0.z, 0);
				}
			}
			iVar5++;
		}
		func_435(uParam0, 1995414514);
		if (bVar4 && func_1083(uParam0) < 2)
		{
			if (uParam0->f_535 > 6 && uParam0->f_535 <= 9)
			{
				func_1081(uParam0, 9);
			}
			else if (uParam0->f_535 > 4 && uParam0->f_535 <= 11)
			{
				func_1081(uParam0, 11);
			}
			else if (uParam0->f_535 > 3 && uParam0->f_535 <= 13)
			{
				func_1081(uParam0, 13);
			}
			else if (uParam0->f_535 == 3)
			{
				func_1081(uParam0, 2);
			}
		}
	}
}

void func_466(var uParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (uParam0->f_731 != -1)
	{
		uParam0->f_3 = uParam0->f_731;
		uParam0->f_731 = -1;
		bVar0 = true;
	}
	if (uParam0->f_732 != 0)
	{
		switch (uParam0->f_732)
		{
			case 1:
				iVar1 = 47;
				func_1085(&(uParam0->f_606), iVar1, 0, __LIB_12__::func_360(0, 13), __LIB_12__::func_360(2, 11));
				func_1085(&(uParam0->f_606), iVar1, 1, __LIB_12__::func_360(2, 5), __LIB_12__::func_360(3, 8));
				func_1085(&(uParam0->f_606), iVar1, 2, __LIB_12__::func_360(3, 11), __LIB_12__::func_360(3, 9));
				func_1085(&(uParam0->f_606), iVar1, 3, __LIB_12__::func_360(3, 13), __LIB_12__::func_360(0, 2));
				func_1085(&(uParam0->f_606), iVar1, 5, __LIB_12__::func_360(0, 12), __LIB_12__::func_360(3, 12));
				func_1086(&(uParam0->f_606), iVar1, __LIB_12__::func_360(2, 7), __LIB_12__::func_360(0, 10), __LIB_12__::func_360(2, 12), __LIB_12__::func_360(1, 3), __LIB_12__::func_360(2, 4));
				break;
			case 2:
				iVar1 = 36;
				func_1085(&(uParam0->f_606), iVar1, 2, __LIB_12__::func_360(2, 12), __LIB_12__::func_360(0, 12));
				func_1085(&(uParam0->f_606), iVar1, 5, __LIB_12__::func_360(3, 11), __LIB_12__::func_360(2, 14));
				func_1086(&(uParam0->f_606), iVar1, __LIB_12__::func_360(1, 7), __LIB_12__::func_360(3, 10), __LIB_12__::func_360(2, 11), __LIB_12__::func_360(3, 13), __LIB_12__::func_360(0, 3));
				break;
			case 3:
				iVar1 = 36;
				func_1087(&(uParam0->f_606), iVar1, 2);
				break;
			case 4:
				iVar1 = 36;
				func_1085(&(uParam0->f_606), iVar1, 2, __LIB_12__::func_360(3, 13), __LIB_12__::func_360(1, 13));
				func_1085(&(uParam0->f_606), iVar1, 5, __LIB_12__::func_360(3, 14), __LIB_12__::func_360(2, 14));
				func_1086(&(uParam0->f_606), iVar1, __LIB_12__::func_360(1, 9), __LIB_12__::func_360(1, 14), __LIB_12__::func_360(2, 4), __LIB_12__::func_360(1, 11), __LIB_12__::func_360(1, 2));
				break;
			case 5:
				iVar1 = 25;
				func_1085(&(uParam0->f_606), iVar1, 0, __LIB_12__::func_360(3, 10), __LIB_12__::func_360(2, 12));
				func_1085(&(uParam0->f_606), iVar1, 3, __LIB_12__::func_360(3, 8), __LIB_12__::func_360(1, 6));
				func_1085(&(uParam0->f_606), iVar1, 4, __LIB_12__::func_360(0, 12), __LIB_12__::func_360(1, 11));
				func_1086(&(uParam0->f_606), iVar1, __LIB_12__::func_360(0, 8), __LIB_12__::func_360(1, 12), __LIB_12__::func_360(3, 7), __LIB_12__::func_360(1, 14), __LIB_12__::func_360(0, 10));
				break;
		}
		uParam0->f_732 = 0;
		bVar0 = true;
	}
	if (bVar0)
	{
		func_435(uParam0, -1043649719);
	}
}

void func_467(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_143(uParam0, iVar2) && !func_912(uParam0, iVar2))
		{
			iVar1 = func_1088(uParam0, iVar2);
			if (iVar1 > 0)
			{
				uParam0->f_39[iVar2 /*56*/].f_2 = (uParam0->f_39[iVar2 /*56*/].f_2 + iVar1);
				bVar0 = true;
			}
		}
		iVar2++;
	}
	if (bVar0)
	{
		func_435(uParam0, 1592704673);
	}
}

int func_468(var uParam0)
{
	struct<2> Var0;
	var uVar2;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	uVar2 = 6;
	bVar10 = false;
	switch (uParam0->f_535)
	{
		case 0:
			func_1081(uParam0, 1);
			return 1;
		case 1:
			func_590(uParam0);
			func_435(uParam0, -1773144867);
			func_1089(uParam0, 7);
			func_1081(uParam0, 2);
			return 1;
		case 2:
			if (!__LIB_0__::func_75(&(uParam0->f_600)) && func_795(uParam0) >= 2)
			{
				__LIB_1__::func_148(&(uParam0->f_600));
				func_435(uParam0, -26793149);
			}
			if (func_795(uParam0) >= 2 && (!func_143(uParam0, uParam0->f_537) || func_144(uParam0, uParam0->f_537) > 0))
			{
				func_1081(uParam0, 3);
				return 1;
			}
			break;
		case 3:
			__LIB_0__::func_37(&(uParam0->f_600));
			func_1081(uParam0, 4);
			return 1;
		case 4:
			func_1090(uParam0);
			uParam0->f_2++;
			if (!func_1091(uParam0))
			{
				uParam0->f_733 = -572748395;
				func_1081(uParam0, 14);
				return 1;
			}
			if (uParam0->f_2 == 0)
			{
				if (!func_1092(uParam0, &iVar16))
				{
					uParam0->f_733 = 2120539167;
					func_1081(uParam0, 14);
					return 1;
				}
				if (!func_1093(uParam0, iVar16))
				{
					uParam0->f_733 = -572748395;
					func_1081(uParam0, 14);
					return 1;
				}
			}
			else if (uParam0->f_2 == 4)
			{
				iVar14 = 0;
				while (iVar14 < 6)
				{
					if (func_143(uParam0, iVar14))
					{
						uParam0->f_39[iVar14 /*56*/].f_5 = 0;
					}
					iVar14++;
				}
				func_1094(uParam0);
				if (uParam0->f_716.f_7 > 0)
				{
					iVar11 = func_1095(uParam0);
					if (func_143(uParam0, iVar11))
					{
						uParam0->f_39[iVar11 /*56*/].f_6 = 2;
					}
				}
				iVar15 = 0;
				while (iVar15 < uParam0->f_485)
				{
					if (uParam0->f_376[iVar15 /*18*/].f_17 == 0 && func_1096(uParam0, iVar15, iVar11))
					{
						if (!func_1097(uParam0, &(uParam0->f_376[iVar15 /*18*/])))
						{
							func_1098(uParam0, &(uParam0->f_376[iVar15 /*18*/]));
						}
					}
					iVar15++;
				}
			}
			func_435(uParam0, -1442142035);
			func_1089(uParam0, 2);
			func_1081(uParam0, 5);
			break;
		case 5:
			if ((uParam0->f_2 != 0 && uParam0->f_2 != 4) && func_1099(uParam0) <= 1)
			{
				func_1081(uParam0, 11);
				return 1;
			}
			else
			{
				func_1081(uParam0, 6);
				return 1;
			}
			break;
		case 6:
			if (func_1083(uParam0) < 2)
			{
				func_1081(uParam0, 11);
				return 1;
			}
			if (uParam0->f_2 == 4)
			{
				if (uParam0->f_716.f_7 == 0)
				{
					func_1081(uParam0, 11);
					return 1;
				}
				uParam0->f_6 = func_1095(uParam0);
			}
			else
			{
				iVar12 = -1;
				if (uParam0->f_6 == -1)
				{
					if (uParam0->f_2 == 0)
					{
						iVar12 = uParam0->f_5;
					}
					else
					{
						iVar12 = uParam0->f_3;
					}
				}
				else
				{
					iVar12 = uParam0->f_6;
				}
				iVar13 = func_1100(iVar12);
				while (true)
				{
					if (func_1101(uParam0, iVar13))
					{
						Jump @859; //curOff = 829
					}
					else if (iVar13 == iVar12)
					{
						Jump @859; //curOff = 842
					}
					else
					{
						iVar13 = func_1100(iVar13);
					}
				}
				if (!func_1101(uParam0, iVar13))
				{
					func_1081(uParam0, 11);
					return 1;
				}
				uParam0->f_6 = iVar13;
			}
			__LIB_1__::func_148(&(uParam0->f_603));
			func_435(uParam0, -441318505);
			func_1081(uParam0, 7);
			return 1;
		case 7:
			if (!func_143(uParam0, uParam0->f_6))
			{
				func_1081(uParam0, 9);
				return 1;
			}
			if (func_1102(uParam0, uParam0->f_6, &Var0))
			{
				func_1081(uParam0, 8);
				return 1;
			}
			break;
		case 8:
			if (!func_143(uParam0, uParam0->f_6))
			{
				func_1081(uParam0, 9);
				return 1;
			}
			if (!func_1103(uParam0, uParam0->f_6, &Var0))
			{
				if (uParam0->f_2 == 4)
				{
					Var0 = 6;
					Var0.f_1 = 0;
				}
				else
				{
					Var0 = 4;
					Var0.f_1 = 1;
				}
			}
			if (func_1104(uParam0, &(uParam0->f_39[uParam0->f_6 /*56*/]), &Var0))
			{
				func_435(uParam0, -1766937362);
				func_1089(uParam0, 3);
				func_1081(uParam0, 9);
				return 1;
			}
			else
			{
				func_1105(uParam0, uParam0->f_6);
				func_1081(uParam0, 7);
				return 1;
			}
			break;
		case 9:
			if (func_1106(uParam0))
			{
				iVar14 = 0;
				while (iVar14 < 6)
				{
					if (func_912(uParam0, iVar14))
					{
						if (func_1102(uParam0, iVar14, &Var0))
						{
							bVar10 = false;
							switch (Var0)
							{
								case 3:
									if (Var0.f_1 == 0)
									{
										bVar10 = true;
									}
									break;
								case 4:
									if (Var0.f_1 == 0)
									{
										bVar10 = true;
									}
									break;
								case 2:
									bVar10 = true;
									break;
							}
							if (bVar10)
							{
								func_1103(uParam0, iVar14, &Var0);
								func_1107(uParam0, iVar14);
							}
						}
					}
					iVar14++;
				}
			}
			if (func_1099(uParam0) == 1)
			{
				iVar14 = 0;
				while (iVar14 < 6)
				{
					if (func_1108(uParam0, iVar14))
					{
						uParam0->f_39[iVar14 /*56*/].f_5 = 0;
					}
					iVar14++;
				}
			}
			if (uParam0->f_2 == 4)
			{
				iVar15 = 0;
				while (iVar15 < uParam0->f_485)
				{
					if (uParam0->f_376[iVar15 /*18*/].f_17 == 0 && func_1096(uParam0, iVar15, uParam0->f_6))
					{
						if (!func_1097(uParam0, &(uParam0->f_376[iVar15 /*18*/])))
						{
							func_1098(uParam0, &(uParam0->f_376[iVar15 /*18*/]));
						}
					}
					iVar15++;
				}
			}
			__LIB_0__::func_37(&(uParam0->f_603));
			func_435(uParam0, 402903974);
			func_1089(uParam0, 4);
			func_1081(uParam0, 10);
			break;
		case 10:
			func_1081(uParam0, 6);
			return 1;
		case 11:
			if ((uParam0->f_2 < 3 && func_1083(uParam0) > 1) && func_1099(uParam0) <= 1)
			{
				iVar14 = 0;
				while (iVar14 < 6)
				{
					if (func_912(uParam0, iVar14))
					{
						uParam0->f_39[iVar14 /*56*/].f_6 = 2;
					}
					iVar14++;
				}
			}
			iVar17 = 0;
			uVar2.f_7 = 0;
			iVar14 = 0;
			while (iVar14 < 6)
			{
				if (func_143(uParam0, iVar14))
				{
					if (uParam0->f_39[iVar14 /*56*/].f_4 >= uParam0->f_7)
					{
						func_1109(&uVar2, iVar14);
					}
					else if (uParam0->f_39[iVar14 /*56*/].f_4 > iVar17)
					{
						iVar17 = uParam0->f_39[iVar14 /*56*/].f_4;
					}
				}
				iVar14++;
			}
			if (uVar2.f_7 == 1 && func_1083(uParam0) > 1)
			{
				iVar14 = uVar2[0];
				func_1110(&(uParam0->f_39[iVar14 /*56*/]), (uParam0->f_7 - iVar17));
			}
			func_1111(uParam0);
			uParam0->f_6 = -1;
			func_435(uParam0, 981015204);
			func_1089(uParam0, 5);
			func_1081(uParam0, 12);
			break;
		case 12:
			if (func_1083(uParam0) < 2 || uParam0->f_2 == 4)
			{
				func_1081(uParam0, 13);
				return 1;
			}
			else
			{
				func_1081(uParam0, 4);
				return 1;
			}
			break;
		case 13:
			iVar15 = 0;
			while (iVar15 < uParam0->f_485)
			{
				if (uParam0->f_376[iVar15 /*18*/].f_17 == 0)
				{
					func_1098(uParam0, &(uParam0->f_376[iVar15 /*18*/]));
				}
				iVar15++;
			}
			func_435(uParam0, -1179646469);
			func_1089(uParam0, 6);
			func_1081(uParam0, 0);
			return 1;
		case 14:
			func_1112(uParam0, uParam0->f_733);
			func_1081(uParam0, 1);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_469(var uParam0, int iParam1)
{
	return uParam0->f_39[iParam1 /*56*/].f_3;
}

void func_470(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar5;
	var uVar10;
	var uVar15;
	__LIB_0__::func_11(uParam0, iParam1, "OLD", "PWORLD__CREATE_PLAYER_STACKS_FOR_POPULATE()");
	__LIB_0__::func_11(uParam0, iParam1, "OLD", 0);
	uVar0 = 4;
	uVar5 = 4;
	uVar10 = 4;
	uVar15 = 4;
	if (bParam4)
	{
		__LIB_12__::func_252((iParam2 + iParam3), &uVar0, &uVar10);
		func_1114(iParam2, iParam3, &uVar10, &uVar15);
		func_1115(uParam0, iParam1, &uVar0);
		func_442(uParam0, iParam1, &uVar0, &uVar10, bParam5);
		func_1116(uParam0, iParam1, &uVar0, &uVar15, bParam5);
	}
	else
	{
		__LIB_12__::func_252(iParam2, &uVar0, &uVar10);
		func_442(uParam0, iParam1, &uVar0, &uVar10, bParam5);
		__LIB_12__::func_252(iParam3, &uVar5, &uVar15);
		func_1116(uParam0, iParam1, &uVar5, &uVar15, bParam5);
		func_1115(uParam0, iParam1, &uVar5);
	}
	__LIB_0__::func_11(uParam0, iParam1, "NEW", 0);
	__LIB_0__::func_11(uParam0, iParam1, "NEW", 0);
}

int func_471(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_671.f_11[iParam1]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_671.f_11[iParam1]));
	}
	uParam0->f_671.f_11[iParam1] = 0;
	if (!__LIB_12__::func_361(uParam0, uParam0->f_671[iParam1 /*2*/], &iVar0))
	{
		iVar0 = uParam0->f_693;
		if (bParam3)
		{
		}
	}
	if (!func_1118(uParam0, iParam1, iParam2, &vVar1, &vVar4, 1))
	{
		return 0;
	}
	iVar7 = OBJECT::CREATE_OBJECT(iVar0, vVar1, false, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COORDS(iVar7, vVar1, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(iVar7, vVar4, 2, true);
	ENTITY::SET_ENTITY_COLLISION(iVar7, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iVar7, true);
	uParam0->f_671.f_11[iParam1] = iVar7;
	return 1;
}

bool func_472(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && uParam0->f_39[iParam1 /*56*/] != -1) && uParam0->f_39[iParam1 /*56*/].f_6 == 0)
	{
		return true;
	}
	return false;
}

void func_473(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	uParam0->f_616[iParam1 /*9*/].f_8 = iParam2;
	iVar7 = 0;
	while (iVar7 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_616[iParam1 /*9*/].f_5[iVar7]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_616[iParam1 /*9*/].f_5[iVar7]));
		}
		uParam0->f_616[iParam1 /*9*/].f_5[iVar7] = 0;
		if (!__LIB_12__::func_361(uParam0, uParam0->f_616[iParam1 /*9*/][iVar7 /*2*/], &iVar0))
		{
			iVar0 = uParam0->f_693;
			if (bParam4)
			{
			}
		}
		if (iParam2 != 5)
		{
			if (!func_1119(uParam0, iParam1, iVar7, iParam2, &vVar1, &vVar4, 1))
			{
			}
			else
			{
				Jump @180; //curOff = 153
				if (!func_1119(uParam0, iParam3, iVar7, iParam2, &vVar1, &vVar4, 1))
				{
				}
				else
				{
					iVar8 = OBJECT::CREATE_OBJECT(iVar0, vVar1, false, true, false, false, true);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
					{
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(iVar8, vVar1, true, false, true, true);
						ENTITY::SET_ENTITY_ROTATION(iVar8, vVar4, 2, true);
						ENTITY::SET_ENTITY_COLLISION(iVar8, false, false);
						ENTITY::FREEZE_ENTITY_POSITION(iVar8, true);
						uParam0->f_616[iParam1 /*9*/].f_5[iVar7] = iVar8;
					}
				}
			}
			iVar7++;
		}
	}
}

void func_474(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	uParam0->f_616[iParam1 /*9*/].f_8 = iParam2;
	iVar7 = 0;
	while (iVar7 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_616[iParam1 /*9*/].f_5[iVar7]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_616[iParam1 /*9*/].f_5[iVar7]));
		}
		uParam0->f_616[iParam1 /*9*/].f_5[iVar7] = 0;
		iVar0 = uParam0->f_693;
		if (iParam2 != 5)
		{
			if (!func_1119(uParam0, iParam1, iVar7, iParam2, &vVar1, &vVar4, 1))
			{
			}
			else
			{
				Jump @148; //curOff = 121
				if (!func_1119(uParam0, iParam3, iVar7, iParam2, &vVar1, &vVar4, 1))
				{
				}
				else
				{
					iVar8 = OBJECT::CREATE_OBJECT(iVar0, vVar1, false, true, false, false, true);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
					{
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(iVar8, vVar1, true, false, true, true);
						ENTITY::SET_ENTITY_ROTATION(iVar8, vVar4, 2, true);
						ENTITY::SET_ENTITY_COLLISION(iVar8, false, false);
						ENTITY::FREEZE_ENTITY_POSITION(iVar8, true);
						uParam0->f_616[iParam1 /*9*/].f_5[iVar7] = iVar8;
					}
				}
			}
			iVar7++;
		}
	}
}

bool func_475(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && uParam0->f_39[iParam1 /*56*/] != -1) && uParam0->f_39[iParam1 /*56*/].f_6 == 1)
	{
		return true;
	}
	return false;
}

bool func_476(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && uParam0->f_39[iParam1 /*56*/] != -1) && uParam0->f_39[iParam1 /*56*/].f_6 == 2)
	{
		return true;
	}
	return false;
}

bool func_477(var uParam0, int iParam1, int iParam2, float fParam3, var uParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	if (iParam2 == 0)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.2855f, 0.6374f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 164.3123f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.6947f, 0.0714f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 104.3123f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.4092f, -0.5659f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 44.3123f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.2855f, -0.6374f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -15.6877f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.6947f, -0.0714f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -75.6877f };
		}
		else if (iParam1 == 5)
		{
			vVar1 = { -0.4092f, 0.5659f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -135.6877f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 0)
	{
		vVar1 = { -0.0088f, 0.3252f, 0.8015f };
		vVar4 = { 0f, 0f, 100.3871f };
	}
	else if (iParam1 == 1)
	{
		vVar1 = { 0.2772f, 0.1702f, 0.8015f };
		vVar4 = { 0f, 0f, 40.3871f };
	}
	else if (iParam1 == 2)
	{
		vVar1 = { 0.286f, -0.155f, 0.8015f };
		vVar4 = { 0f, 0f, -19.6129f };
	}
	else if (iParam1 == 3)
	{
		vVar1 = { 0.0088f, -0.3252f, 0.8015f };
		vVar4 = { 0f, 0f, -79.6129f };
	}
	else if (iParam1 == 4)
	{
		vVar1 = { -0.2772f, -0.1702f, 0.8015f };
		vVar4 = { 0f, 0f, -139.6129f };
	}
	else if (iParam1 == 5)
	{
		vVar1 = { -0.286f, 0.155f, 0.8015f };
		vVar4 = { 0f, 0f, 160.3871f };
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	else if (bParam5)
	{
		func_531(*uParam0, uParam0->f_3, vVar1, vVar4, fParam3, uParam4);
	}
	else
	{
		*fParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	return true;
}

void func_478(var uParam0, var uParam1)
{
	if (uParam0->f_126 == 0)
	{
		return;
	}
	if (!func_1043(uParam0))
	{
		return;
	}
	uParam0->f_127 = uParam1;
}

void func_479(var uParam0, int iParam1)
{
	if (uParam0->f_126 == 0)
	{
		return;
	}
	if (uParam0->f_129 != -1)
	{
		__LIB_5__::func_780(&(uParam0->f_136));
	}
	if (uParam0->f_128 != -1)
	{
		if (iParam1 > 0)
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, iParam1, true, false, 0);
		}
		else
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
	}
	uParam0->f_128 = -1;
	uParam0->f_129 = -1;
	uParam0->f_127 = -1;
}

void func_480(var uParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	if (uParam0->f_126 == 0)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_124[(iParam1 / 32)], (iParam1 % 32)))
	{
		return;
	}
	if (uParam0->f_129 != -1)
	{
		__LIB_5__::func_780(&(uParam0->f_136));
	}
	func_531(uParam0->f_131, (uParam0->f_134 + fParam2), uParam0->f_25[iParam1 /*12*/], uParam0->f_25[iParam1 /*12*/].f_3, &vVar0, &vVar3);
	__LIB_12__::func_362(&(uParam0->f_136), vVar0, vVar3, uParam0->f_25[iParam1 /*12*/].f_6, uParam0->f_25[iParam1 /*12*/].f_7, uParam0->f_25[iParam1 /*12*/].f_8, BUILTIN::TO_FLOAT(uParam0->f_25[iParam1 /*12*/].f_9), uParam0->f_25[iParam1 /*12*/].f_10, 0, 0, -1f, uParam0->f_25[iParam1 /*12*/].f_11 == 0f, iParam3, uParam0->f_25[iParam1 /*12*/].f_11);
	uParam0->f_128 = -1;
	uParam0->f_129 = iParam1;
	uParam0->f_130 = fParam2;
	uParam0->f_127 = -1;
}

void func_481(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	if (uParam0->f_126 == 0)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_122[(iParam1 / 32)], (iParam1 % 32)))
	{
		return;
	}
	if (!CAM::DOES_CAM_EXIST(uParam0->f_135))
	{
		return;
	}
	iVar0 = 0;
	if (iParam3 > 0)
	{
		if (uParam0->f_128 == -1 && uParam0->f_129 == -1)
		{
			iVar0 = iParam3;
			iParam3 = 0;
		}
		else if (uParam0->f_129 != -1)
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_136))
			{
				func_1122(uParam0->f_136, uParam0->f_135);
			}
			else
			{
				iParam3 = 0;
			}
		}
		else if (uParam0->f_128 != -1)
		{
			func_1122(uParam0->f_135, uParam0->f_135);
		}
	}
	if (uParam0->f_129 != -1)
	{
		__LIB_5__::func_780(&(uParam0->f_136));
	}
	func_531(uParam0->f_131, (uParam0->f_134 + fParam2), (uParam0[iParam1 /*12*/])->f_8, 0f, 0f, (uParam0[iParam1 /*12*/])->f_11, &vVar1, &vVar4);
	func_531(vVar1, vVar4.z, *(uParam0[iParam1 /*12*/]), (uParam0[iParam1 /*12*/])->f_3, &vVar7, &vVar10);
	CAM::SET_CAM_ACTIVE(uParam0->f_135, true);
	CAM::SET_CAM_PARAMS(uParam0->f_135, vVar7, vVar10, (uParam0[iParam1 /*12*/])->f_6, iParam3, iParam4, iParam5, 2, 1, 0);
	CAM::SHAKE_CAM(uParam0->f_135, "HAND_SHAKE", (uParam0[iParam1 /*12*/])->f_7);
	if (iVar0 > 0)
	{
		CAM::RENDER_SCRIPT_CAMS(true, true, iVar0, true, false, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
	uParam0->f_128 = iParam1;
	uParam0->f_129 = -1;
	uParam0->f_130 = fParam2;
	uParam0->f_127 = -1;
}

bool func_482(var uParam0, int iParam1)
{
	if (uParam0->f_493[iParam1 /*3*/] != 0)
	{
		return false;
	}
	if (func_1074(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_493[iParam1 /*3*/] = 2;
	return true;
}

void func_531(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, float fParam10, var uParam11)
{
	vector3 vVar0;
	vVar0.x = ((vParam4.x * BUILTIN::COS(fParam3)) - (vParam4.y * BUILTIN::SIN(fParam3)));
	vVar0.f_1 = ((vParam4.x * BUILTIN::SIN(fParam3)) + (vParam4.y * BUILTIN::COS(fParam3)));
	vVar0.f_2 = vParam4.z;
	*fParam10 = { vVar0 + vParam0 };
	*uParam11 = vParam7.x;
	uParam11->f_1 = vParam7.y;
	uParam11->f_2 = (vParam7.z + fParam3);
}

void func_540(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bVar0 = MISC::IS_BIT_SET(uParam1->f_19, 0);
	bVar1 = MISC::IS_BIT_SET(uParam1->f_19, 1);
	iVar2 = uParam1->f_20;
	iVar3 = uParam1->f_21;
	if (uParam0->f_40)
	{
		if (__LIB_18__::func_545(uParam0))
		{
			__LIB_12__::func_319(uParam0);
			if (iVar2 < 4)
			{
				__LIB_12__::func_367(uParam0, iParam2, iVar2);
			}
			if (__LIB_12__::func_300(uParam0, iParam2) == 2)
			{
				__LIB_18__::func_549(uParam0, iParam2, 1);
			}
			else
			{
				__LIB_18__::func_549(uParam0, iParam2, 0);
			}
			__LIB_12__::func_437(uParam0, iParam2, 1);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 7:
			if (__LIB_12__::func_363(uParam1, "ReceiveDeckEnterNoCardsAnimFinished"))
			{
				if (__LIB_1__::func_985() || bVar0)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ShuffleRiffleFront");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ShuffleStandardFront");
				}
				__LIB_12__::func_438(uParam0, iParam2, 8);
			}
			break;
		case 8:
			if (__LIB_12__::func_363(uParam1, "ShuffleStandardFrontAnimFinished") || __LIB_12__::func_363(uParam1, "ShuffleRiffleFrontAnimFinished"))
			{
				__LIB_12__::func_438(uParam0, iParam2, 11);
			}
			break;
		case 9:
			if (__LIB_12__::func_363(uParam1, "ShuffleEnterAnimFinished"))
			{
				if (__LIB_1__::func_985() || bVar0)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ShuffleRiffleLeft");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ShuffleStandardLeft");
				}
				__LIB_12__::func_438(uParam0, iParam2, 10);
			}
			break;
		case 10:
			if (__LIB_12__::func_363(uParam1, "ShuffleStandardLeftAnimFinished") || __LIB_12__::func_363(uParam1, "ShuffleRiffleLeftAnimFinished"))
			{
				__LIB_12__::func_438(uParam0, iParam2, 11);
			}
			break;
		case 11:
			if (__LIB_12__::func_368(uParam0) && __LIB_18__::func_545(uParam0))
			{
				func_1159(uParam0, iParam2, iVar3);
				__LIB_12__::func_359(uParam0, iParam2, 6);
				__LIB_12__::func_438(uParam0, iParam2, 12);
			}
			break;
		case 12:
			if (__LIB_12__::func_369(uParam0))
			{
				iVar5 = 0;
				while (iVar5 < 6)
				{
					iVar4 = __LIB_12__::func_358(uParam0, iVar5, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar4) && ENTITY::_0x0B7CB1300CBFE19C(iVar4, 1))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, -942436593))
						{
							__LIB_12__::func_359(uParam0, iParam2, (iParam2 + 6 % 6));
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, -1248793974))
						{
							__LIB_12__::func_359(uParam0, iParam2, (iParam2 + 1 % 6));
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, -1698646806))
						{
							__LIB_12__::func_359(uParam0, iParam2, (iParam2 + 2 % 6));
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, -2004414345))
						{
							__LIB_12__::func_359(uParam0, iParam2, (iParam2 + 3 % 6));
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, 220797369))
						{
							__LIB_12__::func_359(uParam0, iParam2, (iParam2 + 4 % 6));
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, -228858849))
						{
							__LIB_12__::func_359(uParam0, iParam2, (iParam2 + 5 % 6));
						}
					}
					iVar5++;
				}
			}
			if (__LIB_12__::func_370(uParam0))
			{
				if (iVar2 < 4)
				{
					__LIB_12__::func_367(uParam0, iParam2, iVar2);
				}
				__LIB_12__::func_371(uParam0, iParam2);
				__LIB_12__::func_340(uParam0, iParam2, 6);
				if (bVar1)
				{
					__LIB_18__::func_552(uParam0, iParam2, "DealToHoldCardsRequest", 0.5f);
					__LIB_12__::func_438(uParam0, iParam2, 13);
				}
				else
				{
					__LIB_18__::func_552(uParam0, iParam2, "DealToNoCardsRequest", 0.5f);
					__LIB_12__::func_438(uParam0, iParam2, 14);
				}
			}
			break;
		case 13:
			if (__LIB_12__::func_363(uParam1, "DealToHoldCardsAnimFinished"))
			{
				__LIB_18__::func_549(uParam0, iParam2, 1);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 14:
			if (__LIB_12__::func_363(uParam1, "DealToNoCardsAnimFinished"))
			{
				__LIB_18__::func_549(uParam0, iParam2, 0);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "HoldCardsIdle") || __LIB_12__::func_363(uParam1, "NoCardsIdle"))
			{
				__LIB_12__::func_319(uParam0);
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -240642751))
	{
		__LIB_12__::func_427(uParam0, iParam2, "shuffle_enter_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 190968016))
	{
		__LIB_12__::func_427(uParam0, iParam2, "shuffle_standard_front_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1711999502))
	{
		__LIB_12__::func_427(uParam0, iParam2, "shuffle_riffle_front_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 96509896))
	{
		__LIB_12__::func_427(uParam0, iParam2, "shuffle_standard_left_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1301672132))
	{
		__LIB_12__::func_427(uParam0, iParam2, "shuffle_riffle_left_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1846387738))
	{
		__LIB_12__::func_427(uParam0, iParam2, "deal_to_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "deal_to_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
	}
}

void func_541(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		if (__LIB_18__::func_546(uParam0))
		{
			if (__LIB_12__::func_300(uParam0, iParam2) == 2)
			{
				__LIB_18__::func_549(uParam0, iParam2, 1);
			}
			uParam0->f_765 = -1;
			__LIB_12__::func_437(uParam0, iParam2, 1);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 15:
			if (__LIB_18__::func_546(uParam0))
			{
				switch (uParam0->f_765)
				{
					case 1:
						func_471(uParam0, 0, -1, 1);
						func_471(uParam0, 1, -1, 1);
						func_471(uParam0, 2, -1, 1);
						if (uParam0->f_766)
						{
							func_471(uParam0, 3, -1, 1);
							func_471(uParam0, 4, -1, 1);
						}
						break;
					case 2:
						func_471(uParam0, 3, -1, 1);
						if (uParam0->f_766)
						{
							func_471(uParam0, 4, -1, 1);
						}
						break;
					case 3:
						func_471(uParam0, 4, -1, 1);
						break;
				}
				if (uParam1->f_1 == 1)
				{
					if (uParam0->f_765 == 1)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopEnterNoCards");
						__LIB_12__::func_438(uParam0, iParam2, 16);
					}
					else if (uParam0->f_765 == 2)
					{
						if (!uParam0->f_766)
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "TurnNoCards");
							__LIB_12__::func_438(uParam0, iParam2, 19);
						}
						else
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "TurnRiverNoCards");
							__LIB_12__::func_438(uParam0, iParam2, 22);
						}
					}
					else if (uParam0->f_765 == 3)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "RiverNoCards");
						__LIB_12__::func_438(uParam0, iParam2, 20);
					}
				}
				else if (uParam1->f_1 == 2)
				{
					if (uParam0->f_765 == 1)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopEnterHoldCards");
						__LIB_12__::func_438(uParam0, iParam2, 23);
					}
					else if (uParam0->f_765 == 2)
					{
						if (!uParam0->f_766)
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "TurnHoldCards");
							__LIB_12__::func_438(uParam0, iParam2, 26);
						}
						else
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "TurnRiverHoldCards");
							__LIB_12__::func_438(uParam0, iParam2, 29);
						}
					}
					else if (uParam0->f_765 == 3)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "RiverHoldCards");
						__LIB_12__::func_438(uParam0, iParam2, 27);
					}
				}
			}
			break;
		case 16:
			if (__LIB_12__::func_363(uParam1, "FlopEnterNoCardsAnimFinished"))
			{
				if (!uParam0->f_766)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Flop");
					__LIB_12__::func_438(uParam0, iParam2, 17);
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopTurnRiverNoCards");
					__LIB_12__::func_438(uParam0, iParam2, 21);
				}
			}
			break;
		case 17:
			if (__LIB_12__::func_363(uParam1, "FlopAnimFinished"))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopExitNoCards");
				__LIB_12__::func_438(uParam0, iParam2, 18);
			}
			break;
		case 18:
			__LIB_12__::func_371(uParam0, iParam2);
			if (__LIB_12__::func_363(uParam1, "FlopExitNoCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 19:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "TurnNoCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 20:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "RiverNoCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 21:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "FlopTurnRiverNoCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 22:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "TurnRiverNoCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 23:
			if (__LIB_12__::func_363(uParam1, "FlopEnterHoldCardsAnimFinished"))
			{
				if (!uParam0->f_766)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Flop");
					__LIB_12__::func_438(uParam0, iParam2, 24);
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopTurnRiverHoldCards");
					__LIB_12__::func_438(uParam0, iParam2, 28);
				}
			}
			break;
		case 24:
			if (__LIB_12__::func_363(uParam1, "FlopAnimFinished"))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopExitHoldCards");
				__LIB_12__::func_438(uParam0, iParam2, 25);
			}
			break;
		case 25:
			__LIB_12__::func_371(uParam0, iParam2);
			if (__LIB_12__::func_363(uParam1, "FlopExitHoldCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 26:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "TurnHoldCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 27:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "RiverHoldCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 28:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "FlopTurnRiverHoldCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 29:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (__LIB_12__::func_363(uParam1, "TurnRiverHoldCardsAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle") || __LIB_12__::func_363(uParam1, "HoldCardsIdle"))
			{
				if (__LIB_12__::func_300(uParam0, iParam2) == 2)
				{
					__LIB_18__::func_549(uParam0, iParam2, 1);
				}
				if (!__LIB_12__::func_338(uParam0, iParam2, 0))
				{
					__LIB_12__::func_436(10, iParam2);
				}
				if (!__LIB_12__::func_338(uParam0, iParam2, 1))
				{
					__LIB_12__::func_436(11, iParam2);
				}
				if (!__LIB_12__::func_338(uParam0, iParam2, 2))
				{
					__LIB_12__::func_436(12, iParam2);
				}
				uParam0->f_765 = -1;
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1228639662))
	{
		__LIB_12__::func_427(uParam0, iParam2, "flop_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_card1", __LIB_12__::func_372(uParam0, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_card2", __LIB_12__::func_372(uParam0, 1), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_card3", __LIB_12__::func_372(uParam0, 2), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -572100475))
	{
		__LIB_12__::func_427(uParam0, iParam2, "flop_enter_no_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -113517709))
	{
		__LIB_12__::func_427(uParam0, iParam2, "flop_exit_no_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 711118658))
	{
		__LIB_12__::func_427(uParam0, iParam2, "turn_no_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_no_cards_card1", __LIB_12__::func_372(uParam0, 3), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 437520029))
	{
		__LIB_12__::func_427(uParam0, iParam2, "river_no_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "river_no_cards_card1", __LIB_12__::func_372(uParam0, 4), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 419783961))
	{
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_no_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_no_cards_card1", __LIB_12__::func_372(uParam0, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_no_cards_card2", __LIB_12__::func_372(uParam0, 1), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_no_cards_card3", __LIB_12__::func_372(uParam0, 2), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_no_cards_card4", __LIB_12__::func_372(uParam0, 3), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_no_cards_card5", __LIB_12__::func_372(uParam0, 4), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 381129739))
	{
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_no_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_no_cards_card1", __LIB_12__::func_372(uParam0, 3), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_no_cards_card2", __LIB_12__::func_372(uParam0, 4), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -95084943))
	{
		__LIB_12__::func_427(uParam0, iParam2, "flop_enter_hold_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_enter_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_enter_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -607868067))
	{
		__LIB_12__::func_427(uParam0, iParam2, "flop_exit_hold_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_exit_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_exit_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1776513281))
	{
		__LIB_12__::func_427(uParam0, iParam2, "turn_hold_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_hold_cards_card3", __LIB_12__::func_372(uParam0, 3), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1551570381))
	{
		__LIB_12__::func_427(uParam0, iParam2, "river_hold_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "river_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "river_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "river_hold_cards_card3", __LIB_12__::func_372(uParam0, 4), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 198906537))
	{
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_card3", __LIB_12__::func_372(uParam0, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_card4", __LIB_12__::func_372(uParam0, 1), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_card5", __LIB_12__::func_372(uParam0, 2), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_card6", __LIB_12__::func_372(uParam0, 3), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "flop_turn_river_hold_cards_card7", __LIB_12__::func_372(uParam0, 4), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 947648498))
	{
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_hold_cards_deck", __LIB_12__::func_298(uParam0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_hold_cards_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_hold_cards_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_hold_cards_card3", __LIB_12__::func_372(uParam0, 3), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "turn_river_hold_cards_card4", __LIB_12__::func_372(uParam0, 4), 0, 2);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -134313359))
	{
		if (!__LIB_12__::func_338(uParam0, iParam2, 0))
		{
			__LIB_12__::func_359(uParam0, iParam2, 0);
			__LIB_12__::func_436(10, iParam2);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1156819043))
	{
		if (!__LIB_12__::func_338(uParam0, iParam2, 1))
		{
			__LIB_12__::func_359(uParam0, iParam2, 1);
			__LIB_12__::func_436(11, iParam2);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1436811567))
	{
		if (!__LIB_12__::func_338(uParam0, iParam2, 2))
		{
			__LIB_12__::func_359(uParam0, iParam2, 2);
			__LIB_12__::func_436(12, iParam2);
		}
	}
}

void func_544(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = uParam1->f_19;
	iVar1 = uParam1->f_20;
	iVar2 = uParam1->f_21;
	if (uParam0->f_40)
	{
		func_1164(uParam0, iParam2, iVar0, iVar2, 0, __LIB_0__::func_259(iVar1, 4), 0, 0);
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
	switch (uParam1->f_9)
	{
		case 33:
			if (__LIB_12__::func_363(uParam1, "BetBlindAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle") || __LIB_12__::func_363(uParam1, "HoldCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -131858145))
	{
		func_1164(uParam0, iParam2, iVar0, iVar2, 0, __LIB_0__::func_259(iVar1, 4), 0, 0);
		__LIB_12__::func_427(uParam0, iParam2, "bet_blind_a_chips", __LIB_12__::func_373(uParam0, iParam2, iVar0), 0, 2);
	}
}

void func_545(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = uParam1->f_19;
	iVar1 = uParam1->f_20;
	iVar2 = uParam1->f_21;
	if (uParam0->f_40)
	{
		func_1164(uParam0, iParam2, iVar0, iVar2, 0, __LIB_0__::func_259(iVar1, 4), 0, 0);
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
	switch (uParam1->f_9)
	{
		case 35:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BetType", BUILTIN::TO_FLOAT(iVar0));
			if (__LIB_12__::func_363(uParam1, "BetAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle") || __LIB_12__::func_363(uParam1, "HoldCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1753320602))
	{
		func_1164(uParam0, iParam2, iVar0, iVar2, 0, __LIB_0__::func_259(iVar1, 4), 0, 0);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_a_chips", __LIB_12__::func_373(uParam0, iParam2, iVar0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_a_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_a_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1249714093))
	{
		func_1164(uParam0, iParam2, iVar0, iVar2, 0, __LIB_0__::func_259(iVar1, 4), 0, 0);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_b_chips", __LIB_12__::func_373(uParam0, iParam2, iVar0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_b_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_b_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 2023235118))
	{
		func_1164(uParam0, iParam2, iVar0, iVar2, 0, __LIB_0__::func_259(iVar1, 4), 0, 0);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_c_chips", __LIB_12__::func_373(uParam0, iParam2, iVar0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_c_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_c_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -431766831))
	{
		func_1164(uParam0, iParam2, iVar0, iVar2, 0, __LIB_0__::func_259(iVar1, 4), 0, 0);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_d_chips", __LIB_12__::func_373(uParam0, iParam2, iVar0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_d_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_d_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
}

void func_546(var uParam0, var uParam1, int iParam2)
{
	struct<2> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	Var0.f_1 = 4;
	Var0 = uParam1->f_19;
	Var0.f_1[0] = uParam1->f_20;
	Var0.f_1[1] = uParam1->f_21;
	Var0.f_1[2] = uParam1->f_22;
	Var0.f_1[3] = uParam1->f_23;
	iVar6 = uParam1->f_36;
	if (uParam0->f_40)
	{
		func_1166(uParam0, iParam2, uParam1, &Var0, 0);
		func_1167(uParam0, iParam2, uParam1, &Var0, 0);
		func_1168(uParam0, iParam2, uParam1, &Var0, 0);
		func_1169(uParam0, iParam2, uParam1, &Var0, 0);
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
	switch (uParam1->f_9)
	{
		case 0:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BetType", BUILTIN::TO_FLOAT(iVar6));
			__LIB_18__::func_556(uParam0, iParam2, Var0, 1);
			__LIB_12__::func_438(uParam0, iParam2, 36);
			break;
		case 36:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BetType", BUILTIN::TO_FLOAT(iVar6));
			if (__LIB_12__::func_363(uParam1, "BetAnimFinished") || __LIB_12__::func_363(uParam1, "BetBlindAnimFinished"))
			{
				__LIB_12__::func_438(uParam0, iParam2, 40);
			}
			else if ((ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1634097517) || ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 813449677)) || ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 21374103))
			{
				iVar7 = __LIB_12__::func_374(uParam0, iParam2, Var0);
				iVar8 = uParam1->f_29[Var0];
				iVar9 = __LIB_12__::func_253(iVar7, iVar8, 10);
				if (iVar9 > 4)
				{
					iVar9 = 4;
				}
				func_1164(uParam0, iParam2, Var0, iVar7, iVar8, iVar9, 0, 0);
				__LIB_18__::func_557(uParam0, uParam1, iParam2, Var0);
				AUDIO::_0x3E93DDDCBB6111E4("Game.MiniGame.OddJob.ChipValue", BUILTIN::TO_FLOAT(__LIB_9__::func_939(iVar9, 1, 4)));
				func_1166(uParam0, iParam2, uParam1, &Var0, 0);
				func_1167(uParam0, iParam2, uParam1, &Var0, 1);
				func_1169(uParam0, iParam2, uParam1, &Var0, 1);
				__LIB_12__::func_438(uParam0, iParam2, 39);
			}
			break;
		case 39:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BetType", BUILTIN::TO_FLOAT(iVar6));
			if ((__LIB_12__::func_363(uParam1, "BetAnimFinished") || __LIB_12__::func_363(uParam1, "BetBlindAnimFinished")) || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				if (__LIB_12__::func_300(uParam0, iParam2) == 2)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				}
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 40:
			func_1166(uParam0, iParam2, uParam1, &Var0, 1);
			func_1167(uParam0, iParam2, uParam1, &Var0, 1);
			func_1169(uParam0, iParam2, uParam1, &Var0, 1);
			func_1168(uParam0, iParam2, uParam1, &Var0, 1);
			if (__LIB_12__::func_300(uParam0, iParam2) == 2)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
			}
			else
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
			}
			__LIB_12__::func_438(uParam0, iParam2, 1);
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle") || __LIB_12__::func_363(uParam1, "HoldCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1753320602))
	{
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_a_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_a_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1249714093))
	{
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_b_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_b_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 2023235118))
	{
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_c_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_c_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -431766831))
	{
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_d_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_stack_d_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
	}
}

void func_547(var uParam0, var uParam1, int iParam2)
{
	__LIB_0__::func_11(uParam0, iParam2, "NEW", "BET_ADVANCED");
	__LIB_0__::func_11(uParam0, iParam2, "NEW", 0);
}

void func_548(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_40)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (__LIB_12__::func_375(uParam0, iParam2, iVar2))
			{
				iVar0 = __LIB_12__::func_374(uParam0, iParam2, iVar2);
				iVar1 = __LIB_12__::func_376(uParam0, iParam2, iVar2);
				func_1175(uParam0, iParam2, iVar2, iVar0, iVar1, __LIB_12__::func_253(iVar0, iVar1, 10), 0, 0);
			}
			iVar2++;
		}
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
	switch (uParam1->f_9)
	{
		case 34:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BetType", BUILTIN::TO_FLOAT(4));
			if (__LIB_12__::func_363(uParam1, "BetAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "HoldCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 727682306))
	{
		__LIB_12__::func_427(uParam0, iParam2, "bet_all_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_all_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 4, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_all_bank_01", __LIB_12__::func_377(uParam0, iParam2, 0), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_all_bank_02", __LIB_12__::func_377(uParam0, iParam2, 1), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_all_bank_03", __LIB_12__::func_377(uParam0, iParam2, 2), 0, 2);
		__LIB_12__::func_427(uParam0, iParam2, "bet_all_bank_05", __LIB_12__::func_377(uParam0, iParam2, 3), 0, 2);
	}
}

void func_550(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		if (__LIB_18__::func_558(uParam0, iParam2))
		{
			__LIB_18__::func_549(uParam0, iParam2, 0);
			__LIB_12__::func_437(uParam0, iParam2, 1);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 43:
			if (__LIB_18__::func_558(uParam0, iParam2))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "WinLossType", BUILTIN::TO_FLOAT(uParam1->f_34));
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "VariationType", BUILTIN::TO_FLOAT(uParam1->f_36));
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Reveal");
				__LIB_12__::func_438(uParam0, iParam2, 44);
			}
			break;
		case 44:
			if (__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE")))
			{
				__LIB_18__::func_555(uParam0, iParam2);
				__LIB_12__::func_436(8, iParam2);
			}
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "WinLossType", BUILTIN::TO_FLOAT(uParam1->f_34));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "VariationType", BUILTIN::TO_FLOAT(uParam1->f_36));
			if (__LIB_12__::func_363(uParam1, "RevealAnimFinished") || __LIB_12__::func_366(uParam0, iParam2, 1))
			{
				__LIB_18__::func_549(uParam0, iParam2, 0);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle"))
			{
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 2347088))
	{
		func_473(uParam0, iParam2, 3, 0, 1);
		switch (uParam1->f_34)
		{
			case 0:
				if (uParam1->f_36 == 0)
				{
					__LIB_12__::func_427(uParam0, iParam2, "reveal_win_a_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
					__LIB_12__::func_427(uParam0, iParam2, "reveal_win_a_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
				}
				else if (uParam1->f_36 == 1)
				{
					__LIB_12__::func_427(uParam0, iParam2, "reveal_win_b_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
					__LIB_12__::func_427(uParam0, iParam2, "reveal_win_b_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
				}
				else if (uParam1->f_36 == 2)
				{
					__LIB_12__::func_427(uParam0, iParam2, "reveal_win_c_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
					__LIB_12__::func_427(uParam0, iParam2, "reveal_win_c_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
				}
				break;
			case 1:
				if (uParam1->f_36 == 0)
				{
					__LIB_12__::func_427(uParam0, iParam2, "reveal_loss_a_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
					__LIB_12__::func_427(uParam0, iParam2, "reveal_loss_a_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
				}
				else if (uParam1->f_36 == 1)
				{
					__LIB_12__::func_427(uParam0, iParam2, "reveal_loss_b_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
					__LIB_12__::func_427(uParam0, iParam2, "reveal_loss_b_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
				}
				else if (uParam1->f_36 == 2)
				{
					__LIB_12__::func_427(uParam0, iParam2, "reveal_loss_c_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
					__LIB_12__::func_427(uParam0, iParam2, "reveal_loss_c_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
				}
				break;
			case 2:
				__LIB_12__::func_427(uParam0, iParam2, "reveal_card1", __LIB_12__::func_358(uParam0, iParam2, 0), 0, 2);
				__LIB_12__::func_427(uParam0, iParam2, "reveal_card2", __LIB_12__::func_358(uParam0, iParam2, 1), 0, 2);
				break;
		}
	}
}

void func_554(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	iVar0 = uParam1->f_19;
	bVar1 = MISC::IS_BIT_SET(uParam1->f_20, 0);
	if (uParam0->f_40)
	{
		func_170(uParam0, iParam2, iVar0, 0);
		__LIB_19__::func_255(uParam0, 0);
		__LIB_19__::func_256(uParam0, 0);
		__LIB_12__::func_437(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 41:
			if (uParam1->f_4 == 1)
			{
				iVar3 = 1;
			}
			else if (uParam1->f_4 == 3)
			{
				iVar3 = 2;
			}
			else
			{
				iVar3 = 0;
			}
			if (__LIB_12__::func_379(uParam0, iVar3))
			{
				__LIB_18__::func_559(uParam0, iParam2, iVar3);
				__LIB_12__::func_433(3);
				__LIB_12__::func_438(uParam0, iParam2, 42);
			}
			break;
		case 42:
			__LIB_18__::func_554(uParam0, iParam2, joaat("ACTIONDONE"));
			if (!__LIB_12__::func_338(uParam0, iParam2, 0))
			{
				if (__LIB_12__::func_380(uParam0, iParam2) && __LIB_12__::func_381(uParam0, iParam2))
				{
					__LIB_12__::func_359(uParam0, iParam2, 0);
				}
			}
			if (!__LIB_12__::func_338(uParam0, iParam2, 1))
			{
				if (((__LIB_12__::func_382(uParam0, iParam2) || __LIB_12__::func_366(uParam0, iParam2, 0)) || ((!uParam0->f_39 && __LIB_12__::func_338(uParam0, iParam2, 0)) && !__LIB_12__::func_381(uParam0, iParam2))) || ((uParam0->f_39 || !__LIB_12__::func_338(uParam0, iParam2, 0)) && __LIB_12__::func_383(uParam0, iParam2)))
				{
					bVar2 = (uParam0->f_39 || !__LIB_12__::func_338(uParam0, iParam2, 0));
					func_170(uParam0, iParam2, iVar0, bVar2);
					if (!bVar1)
					{
						__LIB_19__::func_255(uParam0, bVar2);
						__LIB_19__::func_256(uParam0, bVar2);
					}
					else
					{
						func_1185(uParam0, iParam2, bVar2);
					}
					__LIB_12__::func_434(3);
					__LIB_12__::func_359(uParam0, iParam2, 1);
				}
			}
			if (__LIB_12__::func_382(uParam0, iParam2) || __LIB_12__::func_366(uParam0, iParam2, 0))
			{
				__LIB_18__::func_552(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				__LIB_12__::func_438(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (__LIB_12__::func_363(uParam1, "NoCardsIdle"))
			{
				__LIB_12__::func_328(uParam0, iParam2);
				__LIB_12__::func_437(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_574(var uParam0, int iParam1)
{
	uParam0->f_197[iParam1 /*12*/] = 0;
	uParam0->f_197[iParam1 /*12*/].f_1 = 0;
	uParam0->f_197[iParam1 /*12*/].f_2 = 0;
	StringCopy(&(uParam0->f_197[iParam1 /*12*/].f_3), "", 64);
	uParam0->f_197[iParam1 /*12*/].f_11 = 0;
}

void func_575(var uParam0, int iParam1)
{
	uParam0->f_270[iParam1 /*2*/] = 0;
	uParam0->f_270[iParam1 /*2*/].f_1 = 0;
}

void func_576(var uParam0)
{
	uParam0->f_185 = 0;
}

void func_579(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = -1;
	__LIB_4__::func_884(&(uParam0->f_7));
	uParam0->f_31.f_24 = -1;
	uParam0->f_31.f_23 = 0;
}

void func_580(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_9 = 0;
	uParam0->f_17 = 0;
}

void func_582(var uParam0)
{
	uParam0->f_2104 = 0;
	uParam0->f_2104.f_1 = 0;
	__LIB_0__::func_37(&(uParam0->f_2104.f_2));
}

void func_583(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_8 = fParam1;
	uParam0->f_9 = fParam2;
}

void func_584(var uParam0)
{
	int iVar0;
	func_1191(uParam0, 0, 1, 1, 0);
	func_1191(uParam0, 1, 2, 1, 0);
	func_1191(uParam0, 2, 0, 1, 0);
	func_1191(uParam0, 3, 1, 2, 0);
	func_1191(uParam0, 4, 1, 0, 0);
	func_1191(uParam0, 5, 0, 0, 0);
	func_1191(uParam0, 6, 2, 0, 0);
	func_1191(uParam0, 7, 0, 2, 0);
	func_1191(uParam0, 8, 2, 2, 0);
	func_1191(uParam0, 9, 1, 1, 1);
	func_1191(uParam0, 10, 1, 1, 2);
	func_1191(uParam0, 11, 1, 1, 3);
	func_1191(uParam0, 12, 1, 1, 4);
	func_1191(uParam0, 13, 0, 1, 5);
	func_1191(uParam0, 14, 1, 1, 6);
	uParam0->f_9[0] = 1.25f;
	uParam0->f_9[1] = 1f;
	uParam0->f_9[2] = 0.8f;
	uParam0->f_13[0 /*10*/] = 0.05f;
	uParam0->f_13[0 /*10*/].f_1 = 0.35f;
	uParam0->f_13[0 /*10*/].f_2 = 0.1f;
	uParam0->f_13[0 /*10*/].f_3 = 0.55f;
	uParam0->f_13[0 /*10*/].f_4 = 1f;
	uParam0->f_13[0 /*10*/].f_5 = 1f;
	uParam0->f_13[0 /*10*/].f_6 = 1f;
	uParam0->f_13[0 /*10*/].f_7 = 1.5f;
	uParam0->f_13[0 /*10*/].f_8 = 1.5f;
	uParam0->f_13[0 /*10*/].f_9 = 3f;
	uParam0->f_13[1 /*10*/] = 0.1f;
	uParam0->f_13[1 /*10*/].f_1 = 0.7f;
	uParam0->f_13[1 /*10*/].f_2 = 0.2f;
	uParam0->f_13[1 /*10*/].f_3 = 1.1f;
	uParam0->f_13[1 /*10*/].f_4 = 1f;
	uParam0->f_13[1 /*10*/].f_5 = 1f;
	uParam0->f_13[1 /*10*/].f_6 = 1f;
	uParam0->f_13[1 /*10*/].f_7 = 2.5f;
	uParam0->f_13[1 /*10*/].f_8 = 2f;
	uParam0->f_13[1 /*10*/].f_9 = 5f;
	uParam0->f_13[2 /*10*/] = 0.4f;
	uParam0->f_13[2 /*10*/].f_1 = 1f;
	uParam0->f_13[2 /*10*/].f_2 = 0.5f;
	uParam0->f_13[2 /*10*/].f_3 = 1.4f;
	uParam0->f_13[2 /*10*/].f_4 = 0.2f;
	uParam0->f_13[2 /*10*/].f_5 = 1.2f;
	uParam0->f_13[2 /*10*/].f_6 = 2f;
	uParam0->f_13[2 /*10*/].f_7 = 3.5f;
	uParam0->f_13[2 /*10*/].f_8 = 3f;
	uParam0->f_13[2 /*10*/].f_9 = 6f;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_90[iVar0] = 0;
		iVar0++;
	}
}

void func_585(var uParam0)
{
	int iVar0;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1[iVar0] = 0f;
		iVar0++;
	}
}

void func_586(var uParam0)
{
	uParam0->f_3 = -93138100;
	uParam0->f_10 = 300;
	uParam0->f_12 = 20;
	uParam0->f_13 = 40;
	uParam0->f_14 = 1;
	uParam0->f_15 = 2;
}

void func_587(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_538[iVar0 /*3*/] = -1;
		uParam0->f_538[iVar0 /*3*/].f_1 = 0;
		uParam0->f_538[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
}

void func_588(var uParam0)
{
	uParam0->f_716.f_7 = 0;
}

void func_590(var uParam0)
{
	int iVar0;
	uParam0->f_7 = 0;
	uParam0->f_8 = uParam0->f_10;
	uParam0->f_715 = 0;
	uParam0->f_2 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_714 = -1;
	uParam0->f_713 = -1;
	func_1192(uParam0);
	func_1193(uParam0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_1194(&(uParam0->f_39[iVar0 /*56*/]));
		iVar0++;
	}
	func_587(uParam0);
	func_588(uParam0);
	__LIB_4__::func_885(&(uParam0->f_606));
	__LIB_4__::func_888(&(uParam0->f_606));
}

void func_592(var uParam0, int iParam1)
{
	uParam0->f_2011 = iParam1;
	__LIB_1__::func_148(&(uParam0->f_2012));
}

void func_594(var uParam0, var uParam1)
{
	var uVar0;
	char[] cVar8[8];
	int iVar16;
	int iVar17;
	func_1196(&(uParam0->f_2979), uParam0->f_114.f_9);
	iVar16 = 0;
	while (iVar16 < 6)
	{
		if (func_912(uParam1, iVar16))
		{
			func_1197(&(uParam0->f_2979), iVar16, &uVar0, &cVar8);
			func_1198(&(uParam0->f_2979), iVar16, &uVar0, &cVar8);
			func_1199(&(uParam0->f_2979), iVar16, 0);
			func_1201(&(uParam0->f_2979), iVar16, (func_144(uParam1, iVar16) + func_1200(uParam1, iVar16)));
			func_1203(&(uParam0->f_2979), iVar16, func_1202(uParam0, iVar16, 0));
			func_1204(&(uParam0->f_2979), iVar16, 0);
			func_1205(&(uParam0->f_2979), iVar16, iVar16 == uParam1->f_3);
		}
		iVar16++;
	}
	func_1206(&(uParam0->f_2979));
	iVar17 = 0;
	while (iVar17 < 5)
	{
		func_1207(&(uParam0->f_2979), iVar17, __LIB_9__::func_930(), 0, 1);
		iVar17++;
	}
	if (__LIB_12__::func_292(uParam0, 3))
	{
		if (uParam0->f_114.f_2138 == 0)
		{
			func_1208(uParam0, &(uParam0->f_114), 7, 0);
		}
		else if (uParam0->f_114.f_2138 == 1)
		{
			func_1208(uParam0, &(uParam0->f_114), 11, 0);
		}
	}
}

void func_595(var uParam0, var uParam1)
{
	func_1201(&(uParam0->f_2979), uParam1->f_4, func_144(uParam1, uParam1->f_4));
	func_1203(&(uParam0->f_2979), uParam1->f_4, func_1209(&(uParam0->f_2979), func_1200(uParam1, uParam1->f_4)));
	func_1204(&(uParam0->f_2979), uParam1->f_4, 1);
	func_1210(&(uParam0->f_2979), 0, func_1200(uParam1, uParam1->f_4), 1);
}

void func_596(var uParam0, var uParam1)
{
	func_1204(&(uParam0->f_2979), uParam1->f_4, 0);
}

void func_597(var uParam0, var uParam1)
{
	func_1201(&(uParam0->f_2979), uParam1->f_5, func_144(uParam1, uParam1->f_5));
	func_1203(&(uParam0->f_2979), uParam1->f_5, func_1211(&(uParam0->f_2979), func_1200(uParam1, uParam1->f_5)));
	func_1204(&(uParam0->f_2979), uParam1->f_5, 1);
	func_1210(&(uParam0->f_2979), 0, func_1212(uParam1), 1);
}

void func_598(var uParam0, var uParam1)
{
	func_1204(&(uParam0->f_2979), uParam1->f_5, 0);
}

void func_599(var uParam0)
{
	if (__LIB_12__::func_292(uParam0, 3))
	{
		if (func_1213(&(uParam0->f_114)))
		{
			func_1214(uParam0, &(uParam0->f_114));
		}
	}
}

int func_600(var uParam0)
{
	return uParam0->f_156;
}

void func_601(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_153)
	{
		return;
	}
	if (!uParam0->f_155)
	{
		__LIB_0__::func_105(1);
		__LIB_4__::func_981(sParam1, 0, 0, 1);
		uParam0->f_156 = iParam2;
	}
}

int func_602(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((func_143(uParam0, iVar1) && func_144(uParam0, iVar1) > 0) && iVar1 != iParam1)
		{
			return iVar1;
		}
		iVar1 = (iVar1 + 1 % 6);
		iVar0++;
	}
	return -1;
}

bool func_603(var uParam0, int iParam1)
{
	int iVar0;
	if ((iParam1 >= 0 && iParam1 < 6) && uParam0->f_785[iParam1 /*52*/] != 0)
	{
		iVar0 = uParam0->f_785[iParam1 /*52*/];
		if (!PED::IS_PED_INJURED(iVar0) && AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_604(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "offer_rebuyin", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40);
	}
	return false;
}

void func_606(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 1, uParam3->f_6))
	{
		if (bParam6)
		{
			ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "slow_subtle", uParam2->f_785[iParam4 /*52*/], uParam2->f_785[iParam5 /*52*/], uParam2->f_40);
		}
		else
		{
			ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "slow_regular", uParam2->f_785[iParam4 /*52*/], uParam2->f_785[iParam5 /*52*/], uParam2->f_40);
		}
	}
}

void func_607(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	Var0 = { uParam0->f_114.f_2578[iParam2 /*6*/] };
	if (iParam1 == -1)
	{
	}
	else
	{
		iVar7 = 0;
		iVar8 = 0;
		while (iVar8 < 6)
		{
			if ((((uParam0->f_3310.f_785[iVar8 /*52*/] != 0 && uParam0->f_3310.f_785[iVar8 /*52*/].f_47 == 0) && uParam0->f_114.f_2545[iVar8] == -1) && iVar8 != iParam1) && iVar8 != iParam4)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < Var0.f_4)
				{
					MISC::SET_BIT(&iVar7, iVar8);
				}
			}
			iVar8++;
		}
		fVar9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(Var0, Var0.f_1);
		while (iVar7 & 63 != 0 && iParam3 > 0)
		{
			iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			while (!MISC::IS_BIT_SET(iVar7, iVar8))
			{
				iVar8 = (iVar8 + 1 % 6);
			}
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < Var0.f_5)
			{
				iVar6 = 1;
			}
			else
			{
				iVar6 = 0;
			}
			func_1218(&(uParam0->f_114), iVar8, iParam1, iVar6, fVar9);
			fVar9 = (fVar9 + MISC::GET_RANDOM_FLOAT_IN_RANGE(Var0.f_2, Var0.f_3));
			MISC::CLEAR_BIT(&iVar7, iVar8);
			iParam3 = (iParam3 - 1);
		}
	}
}

int func_608(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (uParam0->f_39[iVar1 /*56*/] != -1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_609(var uParam0)
{
	if (uParam0->f_153)
	{
		return;
	}
	if (!uParam0->f_155)
	{
		__LIB_0__::func_105(1);
		uParam0->f_156 = 0;
	}
}

int func_611(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_387(uParam0, iVar1))
		{
			MISC::SET_BIT(&iVar0, iVar1);
		}
		iVar1++;
	}
	return iVar0;
}

void func_612(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 1)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 5);
		bVar0 = MISC::IS_BIT_SET(iParam3, iParam1);
		if (bParam4)
		{
			MISC::SET_BIT(&(uParam0->f_785[iParam1 /*52*/].f_19), 0);
		}
		if (bVar0)
		{
			MISC::SET_BIT(&(uParam0->f_785[iParam1 /*52*/].f_19), 1);
		}
		uParam0->f_785[iParam1 /*52*/].f_20 = iParam5;
		uParam0->f_785[iParam1 /*52*/].f_21 = uParam2;
		if (!uParam0->f_40)
		{
			func_1220(uParam0, iParam1, iParam3);
			if (!func_197(uParam0))
			{
			}
			else if (func_627(uParam0) != iParam1)
			{
			}
			if (func_784(uParam0))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "ReceiveDeckEnterNoCards");
				__LIB_12__::func_438(uParam0, iParam1, 7);
			}
			else
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "ShuffleEnter");
				__LIB_12__::func_438(uParam0, iParam1, 9);
			}
		}
		if (bVar0)
		{
			__LIB_18__::func_550(uParam0, iParam1, 2);
		}
		else
		{
			__LIB_18__::func_550(uParam0, iParam1, 1);
		}
		if (func_784(uParam0))
		{
			func_1221(uParam0, iParam1, 0);
		}
	}
}

void func_613(var uParam0, int iParam1)
{
	uParam0->f_2103 = iParam1;
}

bool func_614(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_785[iParam1 /*52*/].f_8 == iParam2 && uParam0->f_785[iParam1 /*52*/].f_39 == 0)
	{
		return true;
	}
	return false;
}

bool func_616(var uParam0, int iParam1, bool bParam2)
{
	return func_913(uParam0, iParam1, 0, bParam2);
}

int func_617(var uParam0, int iParam1, bool bParam2)
{
	return func_1222(uParam0, iParam1, 0, bParam2);
}

void func_618(var uParam0, var uParam1)
{
	int iVar0;
	func_585(uParam0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_472(uParam1, iVar0))
		{
			uParam0->f_1[iVar0] = func_1223(&(uParam1->f_39[iVar0 /*56*/].f_7));
		}
		iVar0++;
	}
	*uParam0 = 2;
}

void func_620(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	func_1225(&(uParam0->f_2147), 1, -1);
	iVar0 = -1;
	iVar3 = 0;
	while (iVar3 < 6)
	{
		if (uParam0->f_2147[iVar3 /*13*/])
		{
			if (func_143(uParam1, iVar3))
			{
				iVar2 = (func_144(uParam1, iVar3) + func_469(uParam1, iVar3));
				uParam0->f_2147[iVar3 /*13*/].f_3 = iVar2;
				if (func_387(uParam1, iVar3))
				{
					if (iVar0 == -1 || iVar1 < iVar2)
					{
						iVar0 = iVar3;
						iVar1 = iVar2;
					}
					uParam0->f_2147[iVar3 /*13*/].f_2++;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 6)
	{
		if (uParam0->f_2147[iVar3 /*13*/])
		{
			iVar2 = uParam0->f_2147[iVar3 /*13*/].f_3;
			fVar4 = __LIB_9__::func_231((BUILTIN::TO_FLOAT(iVar2) / BUILTIN::TO_FLOAT(iVar1)), 0, 1065353216 /* Float: 1f */);
			fVar5 = 0f;
			fVar6 = ((1f - fVar4) + ((fVar5 * 0.5f) * fVar4));
			uParam0->f_2147[iVar3 /*13*/].f_5 = fVar4;
			uParam0->f_2147[iVar3 /*13*/].f_6 = fVar5;
			uParam0->f_2147[iVar3 /*13*/].f_7 = fVar6;
		}
		iVar3++;
	}
	uParam0->f_2147.f_120 = 0;
	uParam0->f_2147.f_125 = iVar1;
	uParam0->f_2147.f_126++;
	uParam0->f_2147.f_127++;
	uParam0->f_2147.f_128++;
	uParam0->f_2147.f_131 = -1;
	uParam0->f_2147.f_132 = -1;
	uParam0->f_2147.f_133 = 0;
	uParam0->f_2147.f_137 = 0f;
	uParam0->f_2147.f_138 = 0f;
	uParam0->f_2147.f_139 = 0f;
	uParam0->f_2147.f_140 = 0;
	uParam0->f_2147.f_141 = 0;
	uParam0->f_2147.f_142 = 0;
	uParam0->f_2147.f_143 = 0;
	uParam0->f_2147.f_144 = 0;
	uParam0->f_2147.f_145 = -1;
	uParam0->f_2147.f_146 = 0;
	uParam0->f_2147.f_147 = -1;
	uParam0->f_2147.f_148 = 0;
	uParam0->f_2147.f_149 = 0;
	uParam0->f_2147.f_150 = 0;
	iVar3 = 0;
	while (iVar3 < 6)
	{
		uParam0->f_2147.f_151[iVar3] = 0f;
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 6)
	{
		uParam0->f_2147.f_158[iVar3] = 0f;
		iVar3++;
	}
	uParam0->f_2147.f_165 = 0;
	uParam0->f_2147.f_166 = 0;
	uParam0->f_2147.f_167 = 0;
	uParam0->f_2147.f_168 = 0;
	uParam0->f_2147.f_169 = 0;
	uParam0->f_2147.f_170 = 0;
	uParam0->f_2147.f_130 = 0;
}

int func_621(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (uParam1->f_2082 != 0)
	{
		if (bParam4)
		{
			func_643(uParam1);
		}
		else
		{
			return 0;
		}
	}
	uParam1->f_2082 = iParam2;
	uParam1->f_2082.f_1 = 0;
	if (bParam3)
	{
		func_382(uParam0, uParam1);
	}
	return 1;
}

void func_622(var uParam0, var uParam1)
{
	if (func_387(uParam1, uParam0->f_114.f_9))
	{
		__LIB_0__::func_15(__LIB_0__::func_38(joaat("ATTEMPTS"), joaat("POKER_HAND")), 1);
	}
}

void func_623(var uParam0)
{
	func_1227(uParam0);
}

int func_624(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (uParam1->f_2752 != 0)
	{
		return 0;
	}
	iVar0 = func_1228(uParam1, 26);
	iVar1 = func_1228(uParam1, 25);
	iVar2 = func_1228(uParam1, 24);
	iVar3 = func_1228(uParam1, 23);
	iVar4 = func_1228(uParam1, 20);
	iVar5 = func_1228(uParam1, 12);
	iVar6 = __LIB_0__::func_895(uParam0->f_1.f_3.f_4);
	if (iVar0 != -1)
	{
		if (!MISC::IS_BIT_SET(iVar6, 0))
		{
			func_1229(uParam1, uParam2, uParam1->f_9);
			func_1229(uParam1, uParam2, iVar0);
			func_1230(uParam1, 0);
			return 1;
		}
		else if (!MISC::IS_BIT_SET(iVar6, 1))
		{
			func_1229(uParam1, uParam2, uParam1->f_9);
			func_1229(uParam1, uParam2, iVar0);
			func_1230(uParam1, 1);
			return 1;
		}
	}
	if (iVar1 != -1)
	{
		if (!MISC::IS_BIT_SET(iVar6, 2))
		{
			func_1229(uParam1, uParam2, uParam1->f_9);
			func_1229(uParam1, uParam2, iVar1);
			func_1230(uParam1, 2);
			return 1;
		}
		else if (!MISC::IS_BIT_SET(iVar6, 3))
		{
			func_1229(uParam1, uParam2, uParam1->f_9);
			func_1229(uParam1, uParam2, iVar1);
			func_1230(uParam1, 3);
			return 1;
		}
	}
	if (iVar2 != -1)
	{
		if (!MISC::IS_BIT_SET(iVar6, 4))
		{
			func_1229(uParam1, uParam2, uParam1->f_9);
			func_1229(uParam1, uParam2, iVar2);
			func_1230(uParam1, 4);
			return 1;
		}
		else if (!MISC::IS_BIT_SET(iVar6, 5))
		{
			func_1229(uParam1, uParam2, uParam1->f_9);
			func_1229(uParam1, uParam2, iVar2);
			func_1230(uParam1, 5);
			return 1;
		}
	}
	if (iVar3 != -1)
	{
		if (!MISC::IS_BIT_SET(iVar6, 6))
		{
			func_1229(uParam1, uParam2, uParam1->f_9);
			func_1229(uParam1, uParam2, iVar3);
			func_1230(uParam1, 6);
			return 1;
		}
	}
	if (iVar4 != -1)
	{
		if (!MISC::IS_BIT_SET(iVar6, 7))
		{
			func_1229(uParam1, uParam2, uParam1->f_9);
			func_1229(uParam1, uParam2, iVar4);
			func_1230(uParam1, 7);
			return 1;
		}
	}
	if (iVar5 != -1)
	{
		if (!MISC::IS_BIT_SET(iVar6, 8))
		{
			func_1229(uParam1, uParam2, uParam1->f_9);
			func_1229(uParam1, uParam2, iVar5);
			func_1230(uParam1, 8);
			return 1;
		}
		else if (!MISC::IS_BIT_SET(iVar6, 9))
		{
			func_1229(uParam1, uParam2, uParam1->f_9);
			func_1229(uParam1, uParam2, iVar5);
			func_1230(uParam1, 9);
			return 1;
		}
	}
	return 0;
}

void func_625(var uParam0, int iParam1)
{
	if (uParam0->f_2860 != iParam1)
	{
		uParam0->f_2860 = iParam1;
		uParam0->f_2861 = 0;
	}
}

int func_626(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_775))
	{
		return 0;
	}
	uParam0->f_775 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@ind3@leadin@mcs3@leadin", 2, "pl_leadin", false, true);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_775))
	{
		return 0;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_775);
	return 1;
}

int func_627(var uParam0)
{
	return uParam0->f_688.f_1;
}

struct<2> func_628(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_39[iParam1 /*56*/].f_7[iParam2 /*2*/];
}

int func_630(var uParam0, int iParam1, struct<2> Param2, struct<2> Param4, bool bParam6)
{
	var uVar0[2];
	int iVar3;
	struct<2> Var4[2];
	int iVar9;
	int iVar10;
	Var4[0 /*2*/] = { Param2 };
	Var4[1 /*2*/] = { Param4 };
	if (!__LIB_12__::func_361(uParam0, Var4[0 /*2*/], &(uVar0[0])) || !__LIB_12__::func_361(uParam0, Var4[1 /*2*/], &(uVar0[1])))
	{
		iVar9 = 0;
		while (iVar9 < 2)
		{
			if (__LIB_12__::func_361(uParam0, uParam0->f_616[iParam1 /*9*/][iVar9 /*2*/], &iVar3))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
				uParam0->f_616[iParam1 /*9*/][iVar9 /*2*/] = { __LIB_9__::func_930() };
			}
			iVar9++;
		}
		return 0;
	}
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (uParam0->f_616[iParam1 /*9*/][iVar10 /*2*/].f_1 != Var4[iVar10 /*2*/].f_1 || uParam0->f_616[iParam1 /*9*/][iVar10 /*2*/] != Var4[iVar10 /*2*/])
		{
			if (bParam6)
			{
				if (uParam0->f_616[iParam1 /*9*/].f_5[iVar10] != 0)
				{
				}
			}
			if (__LIB_12__::func_361(uParam0, uParam0->f_616[iParam1 /*9*/][iVar10 /*2*/], &iVar3))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
			}
			uParam0->f_616[iParam1 /*9*/][iVar10 /*2*/] = { Var4[iVar10 /*2*/] };
			STREAMING::REQUEST_MODEL(uVar0[iVar10], false);
		}
		iVar10++;
	}
	return 1;
}

void func_631(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	var uVar6;
	var uVar11;
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (!bParam3 && uParam0->f_785[iParam1 /*52*/].f_1 != 2)
	{
	}
	else if (bParam3 && uParam0->f_785[iParam1 /*52*/].f_1 != 1)
	{
	}
	else if (iParam2 < 1)
	{
	}
	else
	{
		Var0.f_1 = 4;
		uVar6 = 4;
		uVar11 = 4;
		func_1231(uParam0, iParam1, &uVar6);
		__LIB_12__::func_387(uParam0, iParam1, &uVar11, 0);
		func_1233(iParam2, &uVar6, &uVar11, &Var0, bParam3);
		func_1234(uParam0, iParam1, &Var0, bParam3);
	}
}

int func_632(var uParam0, int iParam1, bool bParam2)
{
	return func_1235(uParam0, iParam1, 0, bParam2);
}

void func_633(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_4 == 3)
	{
	}
	else if (iParam2 == 3)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_4 == iParam2)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 21);
		__LIB_18__::func_551(uParam0, iParam1, 0);
		iVar0 = __LIB_12__::func_301(uParam0, iParam1);
		uParam0->f_785[iParam1 /*52*/].f_19 = iVar0;
		uParam0->f_785[iParam1 /*52*/].f_20 = iParam2;
		if (iVar0 == 1 || iParam2 == 1)
		{
			if (!uParam0->f_40)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "ClipsetTransBase");
			}
		}
		__LIB_12__::func_438(uParam0, iParam1, 0);
	}
}

void func_634(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 1)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 7);
		if (bParam2)
		{
			__LIB_12__::func_367(uParam0, iParam1, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		}
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "HoldCardsEnter");
		}
		__LIB_18__::func_550(uParam0, iParam1, 2);
		if (__LIB_12__::func_343(uParam0, iParam1))
		{
			__LIB_12__::func_388(uParam0, iParam1, 2);
		}
	}
}

bool func_635(var uParam0, int iParam1)
{
	return (func_1108(uParam0, iParam1) && func_1237(uParam0) > 0);
}

void func_636(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_154)
	{
		return;
	}
	if (uParam0->f_312 != 0)
	{
		if (bParam3)
		{
		}
	}
	else if (!func_635(uParam1, iParam2))
	{
	}
	else
	{
		uParam0->f_312 = 1;
		uParam0->f_312.f_1 = iParam2;
		uParam0->f_312.f_2 = 0;
		uParam0->f_312.f_3 = 0;
	}
}

void func_637(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "receivedHand", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40);
	}
}

void func_638(var uParam0)
{
	func_1238(uParam0, 0);
}

bool func_639(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = func_795(&(uParam1->f_287));
	iVar1 = __LIB_12__::func_294(2, uParam0->f_1.f_3.f_10);
	iVar2 = uParam1->f_2147.f_129;
	iVar3 = uParam1->f_2147.f_127;
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 6 && iVar2 >= iVar1)
	{
		if (bParam2 || (iVar3 >= 2 && iVar4 < 50))
		{
			return true;
		}
	}
	return false;
}

int func_640(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!func_143(uParam0, iVar1) && iVar1 != iParam1)
		{
			return iVar1;
		}
		iVar1 = (iVar1 + 1 % 6);
		iVar0++;
	}
	return -1;
}

int func_641(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_449(&(uParam0->f_1276), iParam1, iParam2, iParam3);
	return 1;
}

void func_642(var uParam0, bool bParam1)
{
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	uParam0->f_2147.f_127 = 0;
	if (bParam1)
	{
		uParam0->f_2147.f_128 = 0;
	}
}

void func_643(var uParam0)
{
	if (uParam0->f_2082 != 0)
	{
		uParam0->f_2082 = 0;
		uParam0->f_2082.f_1 = 0;
	}
}

void func_644(var uParam0)
{
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	uParam0->f_2147.f_120 = 0;
	uParam0->f_2147.f_131 = -1;
}

bool func_645(var uParam0, var uParam1)
{
	int iVar0;
	switch (uParam1->f_2101)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (__LIB_12__::func_296(&(uParam0->f_3310), iVar0) && func_799(&(uParam0->f_3310), iVar0))
				{
					return false;
				}
				iVar0++;
			}
			__LIB_18__::func_535(&(uParam0->f_3310), 0);
			func_1239(uParam0);
			func_368(uParam0, &(uParam0->f_114.f_287));
			func_1240(uParam1, 1);
			break;
		case 1:
			if (func_369(uParam0))
			{
				func_1241(uParam1);
				func_804(&(uParam0->f_3310), 0);
				func_857(&(uParam0->f_3310));
				func_214(uParam0, &(uParam1->f_287), 1, 0);
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (__LIB_12__::func_296(&(uParam0->f_3310), iVar0))
					{
						__LIB_19__::func_239(&(uParam0->f_3310), iVar0, __LIB_12__::func_300(&(uParam0->f_3310), iVar0), 0);
					}
					iVar0++;
				}
				uParam1->f_2102 = 0;
				func_1240(uParam1, 2);
			}
			break;
		case 2:
			if (uParam0->f_114.f_2102 > 3)
			{
				func_1240(uParam1, 3);
			}
			uParam0->f_114.f_2102++;
			break;
	}
	return uParam1->f_2101 == 3;
}

void func_646(var uParam0)
{
	uParam0->f_114.f_2100 = 0;
	CAM::DO_SCREEN_FADE_IN(1000);
}

bool func_647(var uParam0, int iParam1)
{
	if (uParam0->f_114.f_2100 == 1 || uParam0->f_114.f_2100 == 2)
	{
		if (uParam0->f_114.f_2099 == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_649(var uParam0)
{
	if (uParam0->f_114.f_2100 == 1)
	{
		CAM::DO_SCREEN_FADE_IN(1000);
		uParam0->f_114.f_2100 = 0;
		return false;
	}
	else if (uParam0->f_114.f_2100 == 2)
	{
		uParam0->f_114.f_2100 = 3;
		return true;
	}
	return false;
}

void func_650(var uParam0)
{
	func_1240(uParam0, 0);
}

void func_651(var uParam0, var uParam1)
{
	if (!__LIB_12__::func_342(&(uParam0->f_114), uParam1->f_6))
	{
		return;
	}
	func_1203(&(uParam0->f_2979), uParam1->f_6, func_1242(uParam0, uParam1->f_6, func_1200(uParam1, uParam1->f_6)));
	func_1243(&(uParam0->f_2979), uParam1->f_6, 1f);
}

void func_652(var uParam0, var uParam1)
{
	uParam0->f_114.f_2119 = 1;
	__LIB_1__::func_148(&(uParam0->f_114.f_2127));
	__LIB_4__::func_526(&(uParam0->f_114.f_2125));
	if (func_1045(&(uParam0->f_2979)))
	{
		func_1245(&(uParam0->f_2979), uParam1, &(uParam0->f_114.f_2125), 1);
		func_684(&(uParam0->f_2979));
	}
	if (!__LIB_0__::func_131(&(uParam0->f_114.f_2125)))
	{
		func_1248(&(uParam0->f_2979), &(uParam0->f_114.f_287), &(uParam0->f_114.f_10), uParam1->f_6, func_1247(&(uParam0->f_114)) != 1);
	}
	func_1249(&(uParam0->f_2979), "MGPKR_OBJ_YOUR_TURN");
	if (__LIB_12__::func_292(uParam0, 3) && uParam0->f_114.f_2138 == 0)
	{
		if (uParam0->f_114.f_9 == uParam1->f_6)
		{
			if (uParam0->f_114.f_2139 == 0)
			{
				switch (uParam1->f_2)
				{
					case 0:
						func_1208(uParam0, &(uParam0->f_114), 1, 0);
						break;
					case 1:
						func_1208(uParam0, &(uParam0->f_114), 2, 0);
						break;
					case 2:
						func_1208(uParam0, &(uParam0->f_114), 3, 0);
						break;
					case 3:
						func_1208(uParam0, &(uParam0->f_114), 4, 0);
						break;
				}
			}
			else
			{
				func_1208(uParam0, &(uParam0->f_114), 5, 0);
			}
		}
	}
}

int func_653(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_114.f_2119)
	{
		if (__LIB_0__::func_131(&(uParam0->f_114.f_2125)))
		{
			*uParam2 = { uParam0->f_114.f_2125 };
			return 1;
		}
		else
		{
			if (__LIB_12__::func_292(uParam0, 2))
			{
				if (uParam0->f_2979.f_156 != 5)
				{
					if (!uParam0->f_114.f_2123)
					{
						func_601(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_INSTRUCT_STRAUSS"), 5);
						uParam0->f_114.f_2123 = 1;
					}
				}
				else if (__LIB_1__::func_871(&(uParam0->f_114.f_2127)) > 10000)
				{
					func_609(&(uParam0->f_2979));
				}
			}
			if (uParam0->f_2979.f_156 != 5)
			{
				if (uParam0->f_4583.f_2 == 2 || uParam0->f_4583.f_2 == 1)
				{
					if (uParam0->f_2979.f_156 != 4)
					{
						func_601(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG_YOU_HAVE", func_1251(&(uParam1->f_39[uParam1->f_6 /*56*/].f_31), 0)), 4);
					}
				}
				else if (uParam0->f_2979.f_156 == 4 || uParam0->f_2979.f_156 == 3)
				{
					func_609(&(uParam0->f_2979));
				}
			}
			if (func_999(&(uParam0->f_2979)) && func_1252(&(uParam0->f_2979), &(uParam0->f_114.f_287), &(uParam0->f_114.f_10), uParam1->f_6))
			{
				func_1253(&(uParam0->f_2979), uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_654(var uParam0, var uParam1, var uParam2)
{
	if (func_783(&(uParam0->f_114)))
	{
		func_1254(uParam2);
		return;
	}
	func_1255(&(uParam0->f_114.f_2655), uParam1, uParam2, uParam0->f_114.f_2655.f_90[uParam1->f_6]);
}

int func_655(var uParam0, int iParam1)
{
	func_990(&(uParam0->f_1276), iParam1, 4, 0);
	return 1;
	return 0;
}

int func_656(var uParam0, int iParam1)
{
	func_990(&(uParam0->f_1276), iParam1, 3, 0);
	return 1;
	return 0;
}

int func_657(var uParam0, int iParam1, int iParam2)
{
	func_990(&(uParam0->f_1276), iParam1, 2, iParam2);
	return 1;
	return 0;
}

bool func_658(var uParam0, int iParam1)
{
	func_990(&(uParam0->f_1276), iParam1, 5, 0);
	return true;
	return false;
}

void func_659(var uParam0, var uParam1)
{
	if (uParam0->f_114.f_2119)
	{
		func_1256(&(uParam0->f_2979));
		func_1044(&(uParam0->f_2979));
		func_609(&(uParam0->f_2979));
		func_1243(&(uParam0->f_2979), uParam1->f_6, -1f);
		if (__LIB_12__::func_292(uParam0, 3) && uParam0->f_114.f_2138 == 0)
		{
			if (uParam0->f_114.f_9 == uParam1->f_6)
			{
				if (func_1213(&(uParam0->f_114)))
				{
					func_1214(uParam0, &(uParam0->f_114));
				}
				if (uParam1->f_2 == 0)
				{
					func_1208(uParam0, &(uParam0->f_114), 6, 0);
				}
			}
		}
		uParam0->f_114.f_2119 = 0;
	}
}

int func_665(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (uParam0->f_39[iVar1 /*56*/] != -1 && uParam0->f_39[iVar1 /*56*/].f_6 == 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_666(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	if (!(*uParam1)[iParam3 /*13*/])
	{
		return;
	}
	switch (uParam0->f_1265)
	{
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 4:
			iVar0 = 3;
			break;
		case 3:
			iVar0 = 4;
			break;
		case 5:
			if (uParam0->f_1267 > 0)
			{
				iVar0 = 3;
			}
			else
			{
				iVar0 = 4;
			}
			break;
		case 6:
			iVar0 = 5;
			break;
	}
	func_1225(uParam1, iVar0, iParam3);
	iVar1 = func_144(uParam2, iParam3);
	iVar2 = (iVar1 + uParam0->f_1266);
	iVar3 = func_469(uParam2, iParam3);
	iVar4 = (iVar1 + iVar3);
	iVar5 = (func_1258(uParam2) - uParam0->f_1266);
	iVar6 = iVar5;
	if (iVar6 < uParam2->f_10 * 10)
	{
		iVar6 = uParam2->f_10 * 10;
	}
	iVar7 = uParam0->f_1266;
	if (iVar0 == 5)
	{
		iVar7 = (__LIB_4__::func_809(uParam2) - func_1200(uParam2, iParam3));
	}
	fVar8 = (uParam1[iParam3 /*13*/])->f_5;
	fVar9 = (uParam1[iParam3 /*13*/])->f_6;
	fVar10 = (uParam1[iParam3 /*13*/])->f_7;
	fVar11 = (BUILTIN::TO_FLOAT(iVar7) / BUILTIN::TO_FLOAT(iVar2));
	fVar12 = (BUILTIN::TO_FLOAT(uParam0->f_1267) / BUILTIN::TO_FLOAT(iVar6));
	fVar13 = (BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4));
	fVar14 = ((1f - fVar8) + ((fVar13 * 0.5f) * fVar8));
	if (uParam0->f_1265 == 2)
	{
		MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 0);
	}
	if (uParam0->f_1265 == 5)
	{
		MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 1);
	}
	if (uParam2->f_2 == 0)
	{
		MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 2);
	}
	if (uParam2->f_2 == 1)
	{
		MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 3);
	}
	if (uParam2->f_2 == 2)
	{
		MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 4);
	}
	if (uParam2->f_2 == 3)
	{
		MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 5);
	}
	if (func_665(uParam2) < 2)
	{
		MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 12);
	}
	if (iVar0 == 3)
	{
		if (fVar12 >= 1f)
		{
			MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 6);
		}
		else if (fVar12 >= 0.3f)
		{
			MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 7);
		}
		else
		{
			MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 8);
		}
	}
	if (iVar0 == 5)
	{
		if (fVar9 >= 0.8f)
		{
			MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 9);
		}
		if (fVar9 >= 0.4f || (fVar10 >= 0.666f && fVar9 < 0.15f))
		{
			MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 10);
		}
	}
	if (func_1099(uParam2) < 2 || (func_1237(uParam2) == 0 && uParam2->f_2 == 3))
	{
		MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 11);
	}
	if (iVar0 == 2)
	{
		func_1260(&(uParam0->f_2147), iParam3, 1);
	}
	else if (iVar0 != 5)
	{
		func_1260(&(uParam0->f_2147), iParam3, 0);
	}
	if (iVar0 == 5)
	{
		func_1261(&(uParam0->f_2147), iParam3, 1);
		func_1262(&(uParam0->f_2147), iParam3);
	}
	(uParam1[iParam3 /*13*/])->f_6 = fVar13;
	(uParam1[iParam3 /*13*/])->f_7 = fVar14;
	uParam1->f_137 = fVar11;
	uParam1->f_138 = fVar9;
	uParam1->f_139 = fVar10;
}

void func_667(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 2, -1))
	{
		bVar0 = func_1263(uParam1);
		bVar1 = func_1264(uParam0);
		bVar2 = func_1265(uParam1, 1);
		bVar3 = func_1266(uParam1, 1);
		bVar4 = func_1267(uParam1, 1);
		iVar5 = func_1268(uParam1, 0);
		if (!bVar1)
		{
			if (bVar2)
			{
				if (bVar3)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_fold_again", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						func_1269(uParam1, iVar5);
						return;
					}
				}
				if (bVar4)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_fold_badLoss", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						return;
					}
				}
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_fold_weakMove", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar0)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "check_preflop", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "check_base", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
		}
	}
}

void func_668(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 2, -1))
	{
		fVar0 = func_1270(uParam1);
		fVar1 = func_1271(uParam1);
		fVar2 = func_887(uParam1, iParam4);
		bVar3 = func_1272(uParam1);
		bVar4 = func_1273(fVar0);
		bVar5 = func_893(fVar0);
		bVar6 = func_890(fVar1);
		bVar7 = func_1275(fVar1);
		bVar8 = func_891(fVar1);
		bVar9 = func_1276(fVar1);
		bVar10 = func_891(fVar2);
		bVar11 = func_1264(uParam0);
		bVar12 = func_1265(uParam1, 1);
		bVar13 = func_1266(uParam1, 1);
		bVar14 = func_1267(uParam1, 1);
		bVar15 = func_1277(uParam1, 1);
		bVar16 = func_1278(uParam1, 1);
		bVar17 = func_1279(uParam1, 1);
		bVar18 = func_1280(uParam1, 1);
		bVar19 = func_1281(uParam1, 1);
		iVar20 = func_1268(uParam1, 0);
		if (!bVar11)
		{
			if (bVar12)
			{
				if (bVar13)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_fold_again", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						func_1269(uParam1, iVar20);
						return;
					}
				}
				if (bVar14)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_fold_badLoss", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						return;
					}
				}
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_fold_weakMove", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar15)
			{
				if (bVar16)
				{
					if (bVar6)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_bigRaise_aggressive", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar7)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_bigRaise_aggressive", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_bigRaise_nervous", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar8)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_bigRaise_cocky", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_bigRaise_impressed", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_bullshit", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						return;
					}
				}
				else if (bVar17)
				{
					if (bVar7)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_medRaise_focused", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar8)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_medRaise_complacent", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
				}
				else if (bVar18 && !bVar19)
				{
					if (bVar9)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_smallRaise_tease", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_weakMove", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
				}
				if ((bVar16 || bVar17) || bVar19)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_bigRaise_bluff", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						return;
					}
					if (!bVar6)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_boldMove", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
				}
			}
			if (bVar10 && !bVar4)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "call_happy", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar6 && bVar3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "call_highPressure_allin", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar6 && !bVar5)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "call_highPressure_notCheap", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar3 || bVar4)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "call_base_significant", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar6)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "call_base_highPressure", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "call_base_casual", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "call_base_significant", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_669(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 2, -1))
	{
		bVar0 = func_1272(uParam1);
		bVar1 = func_1282(uParam1);
		bVar2 = func_1283(uParam1);
		bVar3 = func_1284(uParam1);
		bVar4 = func_1264(uParam0);
		bVar5 = func_1285(uParam1);
		bVar6 = func_1286(uParam1, 4);
		fVar7 = func_1271(uParam1);
		bVar8 = func_1276(fVar7);
		bVar9 = func_1277(uParam1, 1);
		bVar10 = func_1278(uParam1, 1);
		bVar11 = func_1279(uParam1, 1);
		bVar12 = func_1280(uParam1, 1);
		bVar13 = func_1281(uParam1, 1);
		iVar14 = func_1268(uParam1, 0);
		if (bVar0)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "raise_allin", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
		}
		if (!bVar4)
		{
			if (bVar9)
			{
				if (bVar10)
				{
					if (bVar8)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_bigRaise_cocky", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_bullshit", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						return;
					}
				}
				else if (bVar12 || bVar11)
				{
					if (bVar8 && !bVar13)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_smallRaise_tease", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_weakMove", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_interestingMove", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
				}
				if ((bVar10 || bVar11) || bVar13)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_bigRaise_bluff", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						return;
					}
				}
			}
			if (bVar5)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "raise_afterCheckAgain", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					func_1287(uParam1, iVar14);
					return;
				}
			}
			if (bVar6)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "raise_afterChecks", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar1)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "raise_big", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar2)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "raise_med", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "raise_small", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "raise_base", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "raise_base", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_670(var uParam0, int iParam1)
{
	int iVar0;
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 2)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 13);
		iVar0 = ((uParam0->f_768 + MISC::GET_RANDOM_INT_IN_RANGE(1, 3)) % 3);
		uParam0->f_768 = iVar0;
		uParam0->f_785[iParam1 /*52*/].f_19 = iVar0;
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "Check");
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam1 /*52*/], "CheckType", BUILTIN::TO_FLOAT(iVar0));
		}
	}
}

bool func_671(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (__LIB_12__::func_253(func_193(uParam0, iParam1, iVar1), func_194(uParam0, iParam1, iVar1), 10) >= 4)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0 > 1;
}

void func_672(var uParam0, int iParam1)
{
	int iVar0;
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 2)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 12);
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "Bet");
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam1 /*52*/], "BetType", BUILTIN::TO_FLOAT(4));
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_191(uParam0, iParam1, iVar0))
			{
				func_1288(uParam0, iParam1, iVar0);
			}
			iVar0++;
		}
		__LIB_12__::func_438(uParam0, iParam1, 34);
	}
}

void func_673(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (((uParam0->f_114.f_1265 == 2 || uParam0->f_114.f_1265 == 3) || uParam0->f_114.f_1265 == 4) && func_1289(uParam1, &(uParam0->f_114.f_10), uParam1->f_6))
	{
		func_1203(&(uParam0->f_2979), uParam1->f_6, func_1290(&(uParam0->f_2979), func_1200(uParam1, uParam1->f_6)));
		func_1204(&(uParam0->f_2979), uParam1->f_6, 1);
	}
	else
	{
		switch (uParam0->f_114.f_1265)
		{
			case 5:
				func_1203(&(uParam0->f_2979), uParam1->f_6, func_1291(&(uParam0->f_2979), func_1200(uParam1, uParam1->f_6)));
				func_1204(&(uParam0->f_2979), uParam1->f_6, 1);
				break;
			case 1:
				func_1203(&(uParam0->f_2979), uParam1->f_6, func_1292(&(uParam0->f_2979), func_1200(uParam1, uParam1->f_6)));
				func_1204(&(uParam0->f_2979), uParam1->f_6, 1);
				break;
			case 2:
				func_1203(&(uParam0->f_2979), uParam1->f_6, func_1293(&(uParam0->f_2979), func_1200(uParam1, uParam1->f_6)));
				func_1204(&(uParam0->f_2979), uParam1->f_6, 1);
				break;
			case 3:
				func_1203(&(uParam0->f_2979), uParam1->f_6, func_1294(&(uParam0->f_2979), func_1200(uParam1, uParam1->f_6)));
				func_1204(&(uParam0->f_2979), uParam1->f_6, 1);
				break;
			case 4:
				func_1203(&(uParam0->f_2979), uParam1->f_6, func_1295(&(uParam0->f_2979), func_1200(uParam1, uParam1->f_6)));
				func_1204(&(uParam0->f_2979), uParam1->f_6, 1);
				break;
			case 6:
				func_1203(&(uParam0->f_2979), uParam1->f_6, func_1296(&(uParam0->f_2979), func_1200(uParam1, uParam1->f_6)));
				func_1204(&(uParam0->f_2979), uParam1->f_6, 1);
				break;
		}
	}
	func_1243(&(uParam0->f_2979), uParam1->f_6, -1f);
	func_1201(&(uParam0->f_2979), uParam1->f_6, func_144(uParam1, uParam1->f_6));
	iVar0 = 0;
	if (uParam1->f_485 == 0)
	{
		iVar1 = 0;
		iVar0 = func_1212(uParam1);
	}
	else
	{
		iVar1 = (uParam1->f_485 - 1);
		iVar0 = (func_1212(uParam1) + func_1297(uParam1, iVar1));
	}
	func_1210(&(uParam0->f_2979), iVar1, iVar0, func_1298(uParam1));
}

int func_674(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	if ((!func_1299(uParam2) && !func_1264(uParam1)) && func_1300(uParam1->f_2347.f_1, 5f))
	{
		iVar0 = func_705(uParam2);
		iVar1 = func_877(&(uParam0->f_3310), iVar0, -1, -1);
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		while (iVar4 < 6)
		{
			if (func_143(uParam3, iVar4))
			{
				if (func_1108(uParam3, iVar4))
				{
					MISC::SET_BIT(&iVar2, iVar4);
				}
				if (func_1300(uParam1->f_2347.f_2[iVar4], 20f))
				{
					MISC::SET_BIT(&iVar3, iVar4);
				}
			}
			iVar4++;
		}
		iVar1 = (iVar1 && iVar3);
		bVar5 = func_1301(uParam2);
		iVar6 = -1;
		if (bVar5)
		{
			if (func_1300(uParam1->f_2347.f_12, (5f * 60f)))
			{
				iVar6 = func_896(uParam0, (iVar1 && -1 ^ iVar2), "commentCurAct_check_tooOften", -1, 100);
				if (iVar6 != -1)
				{
					func_1302(&(uParam1->f_2347.f_12));
					func_1302(&(uParam1->f_2347.f_1));
					func_1302(&(uParam1->f_2347.f_2[iVar6]));
					func_1287(uParam2, iVar0);
					func_1303(uParam1, iVar6);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_675(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	if ((!func_1299(uParam2) && !func_1264(uParam1)) && func_1300(uParam1->f_2347.f_1, 5f))
	{
		iVar0 = func_705(uParam2);
		iVar1 = func_677(uParam3, iVar0);
		iVar2 = func_677(uParam3, iVar1);
		iVar3 = func_1304(uParam2);
		iVar4 = func_877(&(uParam0->f_3310), iVar0, iVar1, iVar2);
		iVar5 = 0;
		iVar6 = 0;
		iVar7 = 0;
		while (iVar7 < 6)
		{
			if (func_143(uParam3, iVar7))
			{
				if (iVar7 == iVar3)
				{
					MISC::SET_BIT(&iVar5, iVar7);
				}
				if (func_1300(uParam1->f_2347.f_2[iVar7], 20f))
				{
					MISC::SET_BIT(&iVar6, iVar7);
				}
			}
			iVar7++;
		}
		iVar4 = (iVar4 && iVar6);
		fVar8 = func_1270(uParam2);
		bVar9 = func_1273(fVar8);
		bVar10 = func_1272(uParam2);
		iVar11 = -1;
		if (bVar9 || bVar10)
		{
			if (func_1300(uParam1->f_2347.f_9, 30f))
			{
				iVar11 = func_896(uParam0, (iVar4 && -1 ^ iVar5), "commentCurAct_boldMove", -1, 50);
				if (iVar11 != -1)
				{
					func_1302(&(uParam1->f_2347.f_9));
					func_1302(&(uParam1->f_2347.f_1));
					func_1302(&(uParam1->f_2347.f_2[iVar11]));
					func_1303(uParam1, iVar11);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_676(var uParam0, var uParam1, var uParam2, var uParam3)
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
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	if ((!func_1299(uParam2) && !func_1264(uParam1)) && func_1300(uParam1->f_2347.f_1, 5f))
	{
		iVar0 = func_705(uParam2);
		iVar1 = func_677(uParam3, iVar0);
		iVar2 = func_677(uParam3, iVar1);
		iVar3 = func_877(&(uParam0->f_3310), iVar0, iVar1, iVar2);
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		iVar7 = 0;
		iVar8 = 0;
		while (iVar8 < 6)
		{
			if (func_143(uParam3, iVar8))
			{
				if (func_472(uParam3, iVar8))
				{
					MISC::SET_BIT(&iVar4, iVar8);
				}
				if (func_1108(uParam3, iVar8))
				{
					MISC::SET_BIT(&iVar5, iVar8);
				}
				if (func_890(func_887(uParam2, iVar8)))
				{
					MISC::SET_BIT(&iVar6, iVar8);
				}
				if (func_1300(uParam1->f_2347.f_2[iVar8], 20f))
				{
					MISC::SET_BIT(&iVar7, iVar8);
				}
			}
			iVar8++;
		}
		iVar3 = (iVar3 && iVar7);
		bVar9 = func_1282(uParam2);
		bVar10 = func_1283(uParam2);
		bVar11 = func_1284(uParam2);
		bVar12 = func_1272(uParam2);
		iVar13 = -1;
		if (bVar12 && !bVar11)
		{
			if (func_1300(uParam1->f_2347.f_9, 30f))
			{
				iVar13 = func_896(uParam0, (iVar3 && (-1 ^ iVar6 || -1 ^ iVar4)), "commentCurAct_boldMove", -1, 50);
				if (iVar13 != -1)
				{
					func_1302(&(uParam1->f_2347.f_9));
					func_1302(&(uParam1->f_2347.f_1));
					func_1302(&(uParam1->f_2347.f_2[iVar13]));
					func_1303(uParam1, iVar13);
					return 1;
				}
			}
		}
		if (bVar9)
		{
			if (func_1300(uParam1->f_2347.f_13, 40f))
			{
				iVar13 = func_896(uParam0, ((iVar3 && iVar5) && iVar6), "commentCurAct_bigRaise_aggressive", -1, 66);
				if (iVar13 != -1)
				{
					func_1302(&(uParam1->f_2347.f_13));
					func_1302(&(uParam1->f_2347.f_1));
					func_1302(&(uParam1->f_2347.f_2[iVar13]));
					func_1303(uParam1, iVar13);
					return 1;
				}
			}
			if (func_1300(uParam1->f_2347.f_14, 20f))
			{
				iVar13 = func_896(uParam0, (iVar3 && iVar5), "commentCurAct_bigRaise_bluff", -1, 50);
				if (iVar13 != -1)
				{
					func_1302(&(uParam1->f_2347.f_14));
					func_1302(&(uParam1->f_2347.f_1));
					func_1302(&(uParam1->f_2347.f_2[iVar13]));
					func_1303(uParam1, iVar13);
					return 1;
				}
			}
		}
		if (bVar10)
		{
			if (func_1300(uParam1->f_2347.f_14, 20f))
			{
				iVar13 = func_896(uParam0, (iVar3 && iVar5), "commentCurAct_bigRaise_bluff", -1, 50);
				if (iVar13 != -1)
				{
					func_1302(&(uParam1->f_2347.f_14));
					func_1302(&(uParam1->f_2347.f_1));
					func_1302(&(uParam1->f_2347.f_2[iVar13]));
					func_1303(uParam1, iVar13);
					return 1;
				}
			}
		}
		if (bVar11 && !bVar12)
		{
			if (func_1300(uParam1->f_2347.f_15, 60f))
			{
				iVar13 = func_896(uParam0, ((iVar3 && iVar5) && -1 ^ iVar6), "commentCurAct_smallRaise_bluff", -1, 50);
				if (iVar13 != -1)
				{
					func_1302(&(uParam1->f_2347.f_15));
					func_1302(&(uParam1->f_2347.f_1));
					func_1302(&(uParam1->f_2347.f_2[iVar13]));
					func_1303(uParam1, iVar13);
					return 1;
				}
				iVar13 = func_896(uParam0, (iVar3 && -1 ^ iVar6), "commentCurAct_smallRaise_tease", -1, 50);
				if (iVar13 != -1)
				{
					func_1302(&(uParam1->f_2347.f_15));
					func_1302(&(uParam1->f_2347.f_1));
					func_1302(&(uParam1->f_2347.f_2[iVar13]));
					func_1303(uParam1, iVar13);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_677(var uParam0, int iParam1)
{
	int iVar0;
	iParam1 = (iParam1 + 1 % 6);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_1101(uParam0, iParam1))
		{
			return iParam1;
		}
		iParam1 = (iParam1 + 1 % 6);
		iVar0++;
	}
	return -1;
}

void func_678(var uParam0, var uParam1)
{
	func_1204(&(uParam0->f_2979), uParam1->f_6, 0);
}

void func_679(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 1 && uParam0->f_785[iParam1 /*52*/].f_1 != 2)
	{
	}
	else if (iParam2 < 0 || iParam2 >= 6)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 15);
		uParam0->f_785[iParam1 /*52*/].f_34 = iParam3;
		iVar0 = (iParam2 - iParam1);
		if (iVar0 <= 0)
		{
			iVar0 += 6;
		}
		uParam0->f_785[iParam1 /*52*/].f_19 = iVar0;
		if (!uParam0->f_40)
		{
			iVar1 = __LIB_12__::func_300(uParam0, iParam1);
			iVar2 = __LIB_12__::func_344(uParam0, iParam1);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam1 /*52*/], "WinLossType", BUILTIN::TO_FLOAT(iParam3));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam1 /*52*/], "ReturnCardType", BUILTIN::TO_FLOAT(iVar0));
			if (iVar1 == 2)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "ReturnEnterHoldCards");
			}
			else
			{
				if (iVar2 != 3)
				{
				}
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "ReturnRevealEnter");
			}
		}
		__LIB_12__::func_438(uParam0, iParam1, 45);
		__LIB_18__::func_550(uParam0, iParam1, 1);
		__LIB_18__::func_551(uParam0, iParam1, 2);
		if (__LIB_12__::func_343(uParam0, iParam1))
		{
			__LIB_12__::func_388(uParam0, iParam1, 5);
		}
	}
}

void func_680(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 2, -1))
	{
		fVar0 = func_1271(uParam1);
		fVar1 = func_1305(uParam1);
		fVar2 = func_1270(uParam1);
		bVar3 = func_890(fVar0);
		bVar4 = func_1273(fVar0);
		bVar5 = func_1307(fVar1);
		bVar6 = func_1308(fVar1);
		bVar7 = func_1309(fVar1);
		bVar8 = func_893(fVar1);
		bVar9 = func_1310(fVar1);
		bVar10 = func_1273(fVar2);
		bVar11 = func_1264(uParam0);
		bVar12 = func_1277(uParam1, 1);
		bVar13 = func_1278(uParam1, 1);
		if (!bVar11)
		{
			if (bVar12)
			{
				if (bVar4)
				{
					if (bVar5)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_angry_lvl3", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar6)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_angry_lvl2", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar7 || bVar8)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_angry_lvl1", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
					if (bVar13)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_bigRaise_aggressive", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
				}
				else
				{
					if (bVar5)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_frustrated_lvl3", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar6)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_frustrated_lvl2", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar7 || bVar8)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_frustrated_lvl1", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
					if (bVar13 && !bVar6)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "commentPrevAct_boldMove", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							return;
						}
					}
				}
			}
			if (bVar5)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "fold_veryBadLoss", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar6 || (bVar3 && !bVar9))
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "fold_badLoss", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar10 && bVar3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "fold_tooExpensive_highPressure", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar10)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "fold_tooExpensive", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if ((bVar10 || bVar6) || bVar3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "fold_base_significant", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "fold_base_casual", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "fold_base_significant", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
		{
			return;
		}
	}
}

int func_681(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	if ((!func_1299(uParam2) && !func_1264(uParam1)) && func_1300(uParam1->f_2347.f_1, 5f))
	{
		iVar0 = func_705(uParam2);
		iVar1 = func_1304(uParam2);
		iVar2 = func_877(&(uParam0->f_3310), iVar0, -1, -1);
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		iVar7 = 0;
		while (iVar7 < 6)
		{
			if (func_143(uParam3, iVar7))
			{
				if (func_472(uParam3, iVar7))
				{
					MISC::SET_BIT(&iVar3, iVar7);
				}
				if (!func_1101(uParam3, iVar7))
				{
					MISC::SET_BIT(&iVar4, iVar7);
				}
				if (iVar7 == iVar1)
				{
					MISC::SET_BIT(&iVar5, iVar7);
				}
				if (func_1300(uParam1->f_2347.f_2[iVar7], 20f))
				{
					MISC::SET_BIT(&iVar6, iVar7);
				}
			}
			iVar7++;
		}
		iVar2 = (iVar2 && iVar6);
		bVar8 = func_1311(uParam2);
		iVar9 = -1;
		if (bVar8)
		{
			if (func_1300(uParam1->f_2347.f_11, (5f * 60f)))
			{
				iVar9 = func_896(uParam0, ((iVar2 && iVar3) && iVar4), "commentCurAct_fold_tooOften", -1, 100);
				if (iVar9 != -1)
				{
					func_1302(&(uParam1->f_2347.f_11));
					func_1302(&(uParam1->f_2347.f_1));
					func_1302(&(uParam1->f_2347.f_2[iVar9]));
					func_1269(uParam2, iVar0);
					func_1303(uParam1, iVar9);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_682(var uParam0, var uParam1)
{
	func_1312(&(uParam0->f_2979), uParam1->f_6, 1);
}

bool func_683(var uParam0, var uParam1)
{
	uParam0->f_2861++;
	if (uParam0->f_2860 == 2)
	{
		if (uParam0->f_2861 >= 2)
		{
			return true;
		}
		if ((func_143(uParam1, 2) && func_143(uParam1, 5)) && func_144(uParam1, 2) < (func_144(uParam1, 5) + func_870(uParam1)))
		{
			return true;
		}
	}
	if (uParam0->f_2860 == 3)
	{
		return true;
	}
	return false;
}

void func_684(var uParam0)
{
	if (uParam0->f_312 != 0)
	{
		if (__LIB_0__::func_139(uParam0->f_321))
		{
			__LIB_1__::func_382(uParam0->f_321, 1, 1);
		}
		if (__LIB_0__::func_139(uParam0->f_322))
		{
			__LIB_1__::func_382(uParam0->f_322, 1, 1);
		}
		if (__LIB_0__::func_139(uParam0->f_323))
		{
			__LIB_1__::func_382(uParam0->f_323, 1, 1);
		}
		if (__LIB_0__::func_139(uParam0->f_327))
		{
			__LIB_1__::func_382(uParam0->f_327, 1, 1);
		}
		uParam0->f_312 = 0;
		uParam0->f_312.f_2 = 0;
		uParam0->f_312.f_3 = 0;
		__LIB_1__::func_748(&(uParam0->f_312.f_4), 1, 1);
		__LIB_1__::func_748(&(uParam0->f_312.f_5), 1, 1);
		__LIB_1__::func_748(&(uParam0->f_312.f_6), 1, 1);
		__LIB_1__::func_748(&(uParam0->f_312.f_7), 1, 1);
		__LIB_1__::func_748(&(uParam0->f_312.f_8), 1, 1);
	}
}

void func_685(var uParam0, var uParam1)
{
	int iVar0;
	func_1313(&(uParam0->f_2979));
	iVar0 = 0;
	while (iVar0 < uParam1->f_485)
	{
		func_1210(&(uParam0->f_2979), iVar0, func_1297(uParam1, iVar0), func_1298(uParam1));
		iVar0++;
	}
}

bool func_686(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_476(uParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_687(var uParam0, int iParam1, int iParam2)
{
	struct<16> Var0;
	if (uParam0->f_114.f_9 == iParam1)
	{
		func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_REFUND_YOU", func_145(uParam0, iParam2)), 0);
	}
	else
	{
		Var0 = { func_1000(&(uParam0->f_114), iParam1, 0) };
		func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(10, "MGPKR_REFUND_THEM", &Var0, func_145(uParam0, iParam2)), 0);
	}
}

void func_688(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	var uVar0[4];
	var uVar5[4];
	var uVar10[4];
	var uVar15[4];
	var uVar20[4];
	int iVar25;
	__LIB_0__::func_11(uParam0, iParam1, "OLD", "PWORLD__CREATE_PLAYER_STACKS_FOR_FIXUP_DURING_ROUND()");
	__LIB_0__::func_11(uParam0, iParam1, "OLD", 0);
	func_1231(uParam0, iParam1, &uVar5);
	__LIB_12__::func_387(uParam0, iParam1, &uVar10, 1);
	func_1231(uParam0, iParam1, &uVar15);
	__LIB_12__::func_387(uParam0, iParam1, &uVar20, 1);
	func_1315(uParam0, iParam1, &uVar0);
	if (func_1114(iParam2, iParam3, &uVar15, &uVar20))
	{
		iVar25 = 0;
		while (iVar25 < 4)
		{
			if ((!bParam4 || uVar5[iVar25] != uVar15[iVar25]) || uVar10[iVar25] != uVar20[iVar25])
			{
				func_1069(uParam0, iParam1, iVar25, uVar0[iVar25], uVar15[iVar25], __LIB_12__::func_253(uVar0[iVar25], uVar15[iVar25], 10), bParam5, 0);
				func_1164(uParam0, iParam1, iVar25, uVar0[iVar25], uVar20[iVar25], __LIB_12__::func_253(uVar0[iVar25], uVar20[iVar25], 10), bParam5, 0);
				__LIB_18__::func_561(uParam0, iParam1, iVar25, bParam5);
			}
			iVar25++;
		}
	}
	__LIB_0__::func_11(uParam0, iParam1, "NEW", 0);
	__LIB_0__::func_11(uParam0, iParam1, "NEW", 0);
}

bool func_689(var uParam0)
{
	return uParam0->f_2 == 4;
}

void func_690(var uParam0, var uParam1, int iParam2)
{
	struct<24> Var0;
	struct<24> Var24;
	var uVar48;
	int iVar153;
	int iVar154;
	int iVar155;
	int iVar156;
	if (*uParam0 == 1)
	{
		if (func_472(uParam1, uParam0->f_8))
		{
			Var0 = { uParam1->f_39[uParam0->f_8 /*56*/].f_7 };
			Var24 = { uParam1->f_15 };
			uVar48 = 52;
			iVar153 = 0;
			func_1317(&Var24, &Var0, &uVar48, &iVar153);
			switch (uParam1->f_2)
			{
				case 1:
					iVar154 = 20;
					break;
				case 2:
					iVar154 = 50;
					break;
				case 3:
					iVar154 = 100;
					break;
			}
			MINIGAME::_0xEC819D612038EF4B(uParam1->f_2, &Var24, &Var0, &uVar48, iVar153, iVar154, &iVar156, &iVar155);
			uParam0->f_1[uParam0->f_8] = (BUILTIN::TO_FLOAT(iVar156) / BUILTIN::TO_FLOAT(iVar155));
		}
		uParam0->f_8++;
		if (uParam0->f_8 >= 6)
		{
			*uParam0 = 2;
		}
	}
}

void func_691(var uParam0, var uParam1)
{
	if (__LIB_12__::func_292(uParam0, 3) && uParam0->f_114.f_2138 == 0)
	{
		switch (uParam1->f_2)
		{
			case 1:
				func_1208(uParam0, &(uParam0->f_114), 8, 0);
				break;
			case 2:
				func_1208(uParam0, &(uParam0->f_114), 9, 0);
				break;
			case 3:
				func_1208(uParam0, &(uParam0->f_114), 10, 0);
				break;
		}
	}
}

void func_692(var uParam0, var uParam1)
{
	if ((uParam1->f_2 != 1 && uParam1->f_2 != 2) && uParam1->f_2 != 3)
	{
		return;
	}
	func_585(uParam0);
	*uParam0 = 1;
	uParam0->f_8 = 0;
}

bool func_693(var uParam0, int iParam1)
{
	return __LIB_12__::func_341(uParam0->f_671[iParam1 /*2*/]);
}

void func_695(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 1 && uParam0->f_785[iParam1 /*52*/].f_1 != 2)
	{
	}
	else if ((iParam2 != 1 && iParam2 != 2) && iParam2 != 3)
	{
	}
	else if (uParam0->f_765 != -1)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 6);
		uParam0->f_765 = iParam2;
		uParam0->f_766 = iParam3;
		if (__LIB_12__::func_300(uParam0, iParam1) == 2)
		{
			__LIB_18__::func_549(uParam0, iParam1, 2);
		}
		__LIB_12__::func_438(uParam0, iParam1, 15);
	}
}

void func_696(var uParam0, var uParam1)
{
	int iVar0;
	func_1318(uParam0, uParam1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_912(uParam1, iVar0))
		{
			func_1199(&(uParam0->f_2979), iVar0, 0);
			func_1201(&(uParam0->f_2979), iVar0, func_144(uParam1, iVar0));
			func_1204(&(uParam0->f_2979), iVar0, 0);
			if (func_144(uParam1, iVar0) <= 0)
			{
			}
			else if (func_1289(uParam1, &(uParam0->f_114.f_10), iVar0))
			{
			}
			else
			{
				func_1203(&(uParam0->f_2979), iVar0, func_1202(uParam0, iVar0, 0));
			}
		}
		iVar0++;
	}
}

void func_697(var uParam0, var uParam1)
{
	int iVar0;
	func_1319(&(uParam0->f_2979), 0, 1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < uParam1->f_15.f_23)
		{
			func_1207(&(uParam0->f_2979), iVar0, func_973(uParam1, iVar0), 0, 1);
		}
		else
		{
			func_1207(&(uParam0->f_2979), iVar0, __LIB_9__::func_930(), 0, 1);
		}
		iVar0++;
	}
	if (__LIB_12__::func_292(uParam0, 3))
	{
		if (func_1213(&(uParam0->f_114)))
		{
			func_1214(uParam0, &(uParam0->f_114));
		}
	}
}

int func_698(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_476(uParam0, iVar1))
		{
			MISC::SET_BIT(&iVar0, iVar1);
		}
		iVar1++;
	}
	return iVar0;
}

bool func_699(var uParam0, int iParam1, bool bParam2)
{
	return func_1321(uParam0, iParam1, 0, bParam2);
}

int func_700(var uParam0, int iParam1, bool bParam2)
{
	return func_1322(uParam0, iParam1, 0, bParam2);
}

void func_701(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	func_1318(uParam0, uParam1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_912(uParam1, iVar0))
		{
			func_1199(&(uParam0->f_2979), iVar0, 1);
			func_1203(&(uParam0->f_2979), iVar0, func_1323());
			func_1204(&(uParam0->f_2979), iVar0, 0);
			func_1324(&(uParam0->f_2979), iVar0);
			func_1325(&(uParam0->f_2979), iVar0, 0, __LIB_9__::func_930());
			func_1325(&(uParam0->f_2979), iVar0, 1, __LIB_9__::func_930());
			func_1326(&(uParam0->f_2979), iVar0, 0);
			func_1326(&(uParam0->f_2979), iVar0, 1);
		}
		iVar0++;
	}
}

bool func_702(var uParam0, int iParam1)
{
	return (__LIB_12__::func_341(uParam0->f_616[iParam1 /*9*/][0 /*2*/]) && __LIB_12__::func_341(uParam0->f_616[iParam1 /*9*/][1 /*2*/]));
}

void func_703(var uParam0)
{
	uParam0->f_114.f_2533 = -1;
	uParam0->f_114.f_2534 = -1;
	uParam0->f_114.f_2535 = 0;
	uParam0->f_114.f_2536 = 0;
}

bool func_704(var uParam0, int iParam1, int iParam2)
{
	*iParam1 = uParam0->f_3;
	return func_188(uParam0, iParam1, iParam2, 1);
}

int func_705(var uParam0)
{
	return uParam0->f_79[0 /*4*/].f_1;
}

void func_706(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	iVar0 = uParam0->f_114.f_2533;
	if (!func_476(&(uParam0->f_114.f_287), iVar0))
	{
		iVar0 = -1;
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar2 != iParam1)
			{
				if (func_476(&(uParam0->f_114.f_287), iVar2) && __LIB_12__::func_344(&(uParam0->f_3310), iVar2) == 3)
				{
					MISC::SET_BIT(&iVar1, iVar2);
				}
			}
			iVar2++;
		}
		iVar4 = 0;
		while (iVar4 < 6)
		{
			if (MISC::IS_BIT_SET(iVar1, iVar4))
			{
				bVar3 = false;
				iVar5 = 0;
				while (iVar5 < 6)
				{
					if ((iVar4 != iVar5 && MISC::IS_BIT_SET(iVar1, iVar5)) && func_1327(&(uParam0->f_114.f_287), iVar5, iVar4))
					{
						bVar3 = true;
					}
					else
					{
						iVar5++;
					}
				}
				if (!bVar3)
				{
					iVar0 = iVar4;
				}
				else
				{
					iVar4++;
				}
				uParam0->f_114.f_2533 = iVar0;
				uParam0->f_114.f_2534 = iParam1;
				if (!func_387(&(uParam0->f_114.f_287), iParam1))
				{
					uParam0->f_114.f_2535 = 0;
					uParam0->f_114.f_2536 = 0;
				}
				else if (!func_476(&(uParam0->f_114.f_287), iVar0))
				{
					uParam0->f_114.f_2535 = func_1328(&(uParam0->f_114.f_287), iParam1) > 0;
					uParam0->f_114.f_2536 = 0;
				}
				else
				{
					uParam0->f_114.f_2535 = func_1329(&(uParam0->f_114.f_287), iParam1, iVar0);
					uParam0->f_114.f_2536 = func_1327(&(uParam0->f_114.f_287), iParam1, iVar0);
				}
			}
		}
	}
}

void func_707(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 2)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 14);
		__LIB_12__::func_438(uParam0, iParam1, 43);
		uParam0->f_772 = ((uParam0->f_772 + MISC::GET_RANDOM_INT_IN_RANGE(1, 3)) % 3);
		uParam0->f_785[iParam1 /*52*/].f_34 = iParam2;
		uParam0->f_785[iParam1 /*52*/].f_36 = uParam0->f_772;
		__LIB_18__::func_550(uParam0, iParam1, 1);
		__LIB_18__::func_551(uParam0, iParam1, 2);
		if (__LIB_12__::func_343(uParam0, iParam1))
		{
			__LIB_12__::func_388(uParam0, iParam1, 3);
		}
	}
}

void func_708(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	if (!(*uParam1)[iParam3 /*13*/])
	{
		return;
	}
	func_1225(uParam1, 6, iParam3);
	if (bParam4)
	{
		MISC::SET_BIT(&(uParam1->f_142), iParam3);
	}
	else
	{
		MISC::SET_BIT(&(uParam1->f_141), iParam3);
	}
	if (!uParam1->f_140)
	{
		uParam1->f_140 = 1;
		if (uParam0->f_2010 == 10)
		{
			iVar2 = func_746(uParam2, iParam3);
			uParam1->f_144 = uParam1->f_146;
			uParam1->f_143 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_912(uParam2, iVar0) || (bParam4 && iVar0 == iParam3))
				{
					if (func_746(uParam2, iVar0) == iVar2)
					{
						MISC::SET_BIT(&(uParam1->f_144), iVar0);
						MISC::SET_BIT(&(uParam1->f_143), iVar0);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_1096(uParam2, iVar2, iVar0))
				{
					iVar1 = func_1330(uParam2, iVar0, iVar2);
					uParam1->f_151[iVar0] = (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT((uParam1[iVar0 /*13*/])->f_3));
				}
				else
				{
					uParam1->f_151[iVar0] = 0f;
				}
				iVar0++;
			}
		}
		else if (uParam0->f_2010 == 7)
		{
			uParam1->f_144 = 0;
			uParam1->f_143 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_912(uParam2, iVar0))
				{
					MISC::SET_BIT(&(uParam1->f_144), iVar0);
					MISC::SET_BIT(&(uParam1->f_143), iVar0);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_912(uParam2, iVar0))
				{
					iVar1 = func_469(uParam2, iVar0);
					uParam1->f_151[iVar0] = (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT((uParam1[iVar0 /*13*/])->f_3));
				}
				iVar0++;
			}
		}
	}
	uParam1->f_147 = uParam1->f_145;
	uParam1->f_148 = uParam1->f_146;
	if (!bParam4)
	{
		if (uParam1->f_145 == -1)
		{
			uParam1->f_145 = iParam3;
			MISC::SET_BIT(&(uParam1->f_146), iParam3);
			if (func_1328(uParam2, iParam3) > 0)
			{
				MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 13);
			}
		}
		else if (func_1329(uParam2, iParam3, uParam1->f_145))
		{
			if (func_1327(uParam2, iParam3, uParam1->f_145))
			{
				uParam1->f_145 = iParam3;
				uParam1->f_146 = 0;
			}
			MISC::SET_BIT(&(uParam1->f_146), iParam3);
			MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 13);
		}
	}
	else if (uParam1->f_145 == -1)
	{
	}
	uParam1->f_149 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((MISC::IS_BIT_SET(uParam1->f_141, iVar0) && MISC::IS_BIT_SET(uParam1->f_144, iVar0)) && !MISC::IS_BIT_SET(uParam1->f_146, iVar0))
		{
			if (func_1331(uParam2, iVar0, uParam1->f_145))
			{
				MISC::SET_BIT(&(uParam1->f_149), iVar0);
			}
		}
		iVar0++;
	}
	iVar3 = -1;
	uParam1->f_150 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (((MISC::IS_BIT_SET(uParam1->f_141, iVar0) && MISC::IS_BIT_SET(uParam1->f_144, iVar0)) && !MISC::IS_BIT_SET(uParam1->f_146, iVar0)) && !MISC::IS_BIT_SET(uParam1->f_149, iVar0))
		{
			if (iVar3 == -1 || func_1327(uParam2, iVar3, iVar0))
			{
				iVar3 = iVar0;
				uParam1->f_150 = 0;
				MISC::SET_BIT(&(uParam1->f_150), iVar0);
			}
			else if (func_1332(uParam2, iVar3, iVar0))
			{
				MISC::SET_BIT(&(uParam1->f_150), iVar0);
			}
		}
		iVar0++;
	}
}

void func_709(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 4, -1))
	{
		bVar0 = func_1333(uParam1, iParam4);
		bVar1 = func_1334(uParam1);
		bVar2 = func_1335(uParam1);
		bVar3 = (func_1336(uParam1) && __LIB_12__::func_389(uParam1->f_144) < __LIB_12__::func_389(func_1338(uParam3)));
		bVar4 = func_1339(uParam1, iParam4);
		bVar5 = func_1340(uParam1, iParam4);
		bVar6 = func_1341(uParam1, iParam4);
		bVar7 = func_1342(uParam1, iParam4);
		if (bVar2 && func_1328(uParam3, iParam4) <= 1)
		{
			if (bVar3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "reveal_first_samePlayers", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "reveal_first", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
			if (!bVar1)
			{
				ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "reveal_bad", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40);
				return;
			}
		}
		if (bVar0)
		{
			if (bVar4)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "reveal_good_closeWinAgain", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar5)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "reveal_good_closeWin", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "reveal_good", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
		}
		else
		{
			if (bVar6)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "reveal_bad_closeLossAgain", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar7)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "reveal_bad_closeLoss", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "reveal_bad", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
		}
	}
}

void func_710(var uParam0, var uParam1)
{
	func_1203(&(uParam0->f_2979), uParam0->f_114.f_2528, func_1343(uParam1, uParam0->f_114.f_2528, 1));
	func_1204(&(uParam0->f_2979), uParam0->f_114.f_2528, 1);
	func_1324(&(uParam0->f_2979), uParam0->f_114.f_2528);
	func_1325(&(uParam0->f_2979), uParam0->f_114.f_2528, 0, func_628(uParam1, uParam0->f_114.f_2528, 0));
	func_1325(&(uParam0->f_2979), uParam0->f_114.f_2528, 1, func_628(uParam1, uParam0->f_114.f_2528, 1));
	func_1344(&(uParam0->f_2979), uParam0->f_114.f_2528, 0);
}

int func_711(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = func_1345(&(uParam0->f_287), iParam1);
	iVar1 = func_144(&(uParam0->f_287), iParam1);
	fVar2 = (BUILTIN::TO_FLOAT(iVar0) / BUILTIN::TO_FLOAT((iVar1 + iVar0)));
	if (fVar2 > 0.4f)
	{
		return 1;
	}
	return 0;
}

void func_712(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 1)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 22);
		uParam0->f_773 = ((uParam0->f_773 + MISC::GET_RANDOM_INT_IN_RANGE(1, 3)) % 3);
		uParam0->f_785[iParam1 /*52*/].f_34 = iParam2;
		uParam0->f_785[iParam1 /*52*/].f_35 = iParam3;
		uParam0->f_785[iParam1 /*52*/].f_36 = uParam0->f_773;
		if (!uParam0->f_40)
		{
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam1 /*52*/], "WinLossType", BUILTIN::TO_FLOAT(uParam0->f_785[iParam1 /*52*/].f_34));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam1 /*52*/], "IntensityType", BUILTIN::TO_FLOAT(uParam0->f_785[iParam1 /*52*/].f_35));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam1 /*52*/], "VariationType", BUILTIN::TO_FLOAT(uParam0->f_785[iParam1 /*52*/].f_36));
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "Express");
		}
	}
}

void func_713(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 4, -1))
	{
		fVar0 = func_887(uParam1, iParam4);
		fVar1 = func_904(uParam1, iParam4);
		bVar2 = func_1308(fVar1);
		bVar3 = func_1309(fVar1);
		bVar4 = func_893(fVar1);
		bVar5 = func_1273(fVar0);
		if (bVar5)
		{
			if (bVar2)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "beaten_angry_lvl2", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar3 || bVar4)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "beaten_angry_lvl1", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		else if (bVar2)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "beaten_frustrated_lvl2", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (bVar3 || bVar4)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "beaten_frustrated_lvl1", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
		}
		if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "beaten_base", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_714(var uParam0)
{
	func_1204(&(uParam0->f_2979), uParam0->f_114.f_2528, 0);
}

void func_715(var uParam0)
{
	if (!func_476(&(uParam0->f_114.f_287), uParam0->f_114.f_2533) || uParam0->f_114.f_2536)
	{
		uParam0->f_114.f_2533 = uParam0->f_114.f_2534;
	}
	uParam0->f_114.f_2534 = -1;
	uParam0->f_114.f_2535 = 0;
	uParam0->f_114.f_2536 = 0;
}

int func_716(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_376[iVar1 /*18*/].f_17)
		{
			MISC::SET_BIT(&iVar0, uParam0->f_376[iVar1 /*18*/].f_10[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_717(var uParam0, var uParam1, int iParam2)
{
	struct<377> Var0;
	int iVar486;
	int iVar487;
	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1346(uParam1, &Var0, iParam2);
	iVar486 = 0;
	while (iVar486 < Var0.f_15.f_23)
	{
		func_1207(&(uParam0->f_2979), iVar486, func_973(&Var0, iVar486), 0, 1);
		iVar486++;
	}
	iVar487 = 0;
	while (iVar487 < 6)
	{
		if (func_912(&Var0, iVar487))
		{
			func_1203(&(uParam0->f_2979), iVar487, func_1343(&Var0, iVar487, 1));
			func_1204(&(uParam0->f_2979), iVar487, 0);
		}
		iVar487++;
	}
}

void func_718(var uParam0, var uParam1, int iParam2)
{
	struct<377> Var0;
	int iVar486;
	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1346(uParam1, &Var0, iParam2);
	uParam0->f_2537 = 0;
	uParam0->f_2538 = 0;
	iVar486 = 0;
	while (iVar486 < Var0.f_376[0 /*18*/].f_17)
	{
		MISC::SET_BIT(&(uParam0->f_2538), Var0.f_376[0 /*18*/].f_10[iVar486]);
		iVar486++;
	}
	uParam0->f_2539 = 0;
	uParam0->f_2540 = 0;
	uParam0->f_2541 = 0;
}

void func_719(var uParam0)
{
	*uParam0++;
}

bool func_720(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_148(uParam0, iVar0))
		{
			if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_785[iVar0 /*52*/]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

float func_721(var uParam0, int iParam1)
{
	return __LIB_0__::func_264(&(uParam0->f_785[iParam1 /*52*/].f_10));
}

bool func_722(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = __LIB_1__::func_478(uParam1);
	iVar3 = func_1348(uParam1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!__LIB_12__::func_296(uParam2, iVar0) || __LIB_12__::func_300(uParam2, iVar0) == 0)
		{
			MISC::CLEAR_BIT(&iVar2, iVar0);
			MISC::CLEAR_BIT(&iVar3, iVar0);
		}
		iVar0++;
	}
	if (func_1349(uParam3) > 2)
	{
		MISC::CLEAR_BIT(&iVar2, uParam1->f_79[0 /*4*/].f_1);
		MISC::CLEAR_BIT(&iVar3, uParam1->f_79[0 /*4*/].f_1);
	}
	*uParam4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (((func_387(uParam3, *uParam4) && __LIB_12__::func_296(uParam2, *uParam4)) && __LIB_12__::func_300(uParam2, *uParam4) != 0) && !func_603(uParam2, *uParam4))
		{
			*uParam5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			iVar1 = 0;
			while (iVar1 < 6)
			{
				if (MISC::IS_BIT_SET(iVar2, *uParam5) && !MISC::IS_BIT_SET(iVar2, *uParam4))
				{
					if (func_1216(uParam0, uParam1, uParam2, uParam3, *uParam4, 1, *uParam5))
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "allinDeal_comment_lookingGood", uParam2->f_785[*uParam4 /*52*/], 0, uParam2->f_40))
						{
							return true;
						}
					}
				}
				if (MISC::IS_BIT_SET(iVar3, *uParam5) && !MISC::IS_BIT_SET(iVar3, *uParam4))
				{
					if (func_1216(uParam0, uParam1, uParam2, uParam3, *uParam4, 1, *uParam5))
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "allinDeal_comment_lookingBad", uParam2->f_785[*uParam4 /*52*/], 0, uParam2->f_40))
						{
							return true;
						}
					}
				}
				*uParam5 = (*uParam5 + 1 % 6);
				iVar1++;
			}
		}
		*uParam4 = (*uParam4 + 1 % 6);
		iVar0++;
	}
	return false;
}

void func_723(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	int iVar6;
	float fVar7;
	Var0 = { uParam0->f_114.f_2578[iParam3 /*6*/] };
	fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(Var0, Var0.f_1);
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < Var0.f_5)
	{
		iVar6 = 1;
	}
	else
	{
		iVar6 = 0;
	}
	func_1218(&(uParam0->f_114), iParam1, iParam2, iVar6, fVar7);
}

void func_724(var uParam0, var uParam1, var uParam2)
{
	struct<377> Var0;
	int iVar486;
	int iVar487;
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	func_1225(uParam1, 9, -1);
	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1346(uParam2, &Var0, 1);
	uParam1->f_147 = uParam1->f_145;
	uParam1->f_148 = uParam1->f_146;
	uParam1->f_145 = -1;
	uParam1->f_146 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_141, iVar486))
		{
			if (uParam1->f_145 == -1 || func_1327(&Var0, iVar486, uParam1->f_145))
			{
				uParam1->f_145 = iVar486;
				uParam1->f_146 = 0;
				MISC::SET_BIT(&(uParam1->f_146), iVar486);
			}
			else if (func_1329(&Var0, iVar486, uParam1->f_145))
			{
				MISC::SET_BIT(&(uParam1->f_146), iVar486);
			}
		}
		iVar486++;
	}
	uParam1->f_149 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_141, iVar486) && !MISC::IS_BIT_SET(uParam1->f_146, iVar486))
		{
			if (func_1331(uParam2, iVar486, uParam1->f_145))
			{
				MISC::SET_BIT(&(uParam1->f_149), iVar486);
			}
		}
		iVar486++;
	}
	iVar487 = -1;
	uParam1->f_150 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if ((MISC::IS_BIT_SET(uParam1->f_141, iVar486) && !MISC::IS_BIT_SET(uParam1->f_146, iVar486)) && !MISC::IS_BIT_SET(uParam1->f_149, iVar486))
		{
			if (iVar487 == -1 || func_1327(uParam2, iVar487, iVar486))
			{
				iVar487 = iVar486;
				uParam1->f_150 = 0;
				MISC::SET_BIT(&(uParam1->f_150), iVar486);
			}
			else if (func_1332(uParam2, iVar487, iVar486))
			{
				MISC::SET_BIT(&(uParam1->f_150), iVar486);
			}
		}
		iVar486++;
	}
	uParam1->f_166 = 0;
	uParam1->f_167 = 0;
	uParam1->f_168 = 0;
	uParam1->f_169 = 0;
	uParam1->f_170 = 0;
}

void func_725(var uParam0, var uParam1, int iParam2)
{
	struct<377> Var0;
	int iVar486;
	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1346(uParam1, &Var0, iParam2);
	uParam0->f_2537 = uParam0->f_2538;
	uParam0->f_2538 = 0;
	iVar486 = 0;
	while (iVar486 < Var0.f_376[0 /*18*/].f_17)
	{
		MISC::SET_BIT(&(uParam0->f_2538), Var0.f_376[0 /*18*/].f_10[iVar486]);
		iVar486++;
	}
	func_1350(uParam0);
	switch (iParam2)
	{
		case 1:
			func_1351(uParam0, func_1338(&Var0), 1, 0f, 0f);
			break;
		case 2:
			func_1351(uParam0, func_1338(&Var0), 2, 0f, 0f);
			break;
		case 3:
			func_1351(uParam0, func_1338(&Var0), 3, 0.1f, 0f);
			break;
	}
}

void func_726(var uParam0, var uParam1, var uParam2)
{
	struct<377> Var0;
	int iVar486;
	int iVar487;
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	func_1225(uParam1, 10, -1);
	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1346(uParam2, &Var0, 2);
	uParam1->f_147 = uParam1->f_145;
	uParam1->f_148 = uParam1->f_146;
	uParam1->f_145 = -1;
	uParam1->f_146 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_141, iVar486))
		{
			if (uParam1->f_145 == -1 || func_1327(&Var0, iVar486, uParam1->f_145))
			{
				uParam1->f_145 = iVar486;
				uParam1->f_146 = 0;
				MISC::SET_BIT(&(uParam1->f_146), iVar486);
			}
			else if (func_1329(&Var0, iVar486, uParam1->f_145))
			{
				MISC::SET_BIT(&(uParam1->f_146), iVar486);
			}
		}
		iVar486++;
	}
	uParam1->f_149 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_141, iVar486) && !MISC::IS_BIT_SET(uParam1->f_146, iVar486))
		{
			if (func_1331(uParam2, iVar486, uParam1->f_145))
			{
				MISC::SET_BIT(&(uParam1->f_149), iVar486);
			}
		}
		iVar486++;
	}
	iVar487 = -1;
	uParam1->f_150 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if ((MISC::IS_BIT_SET(uParam1->f_141, iVar486) && !MISC::IS_BIT_SET(uParam1->f_146, iVar486)) && !MISC::IS_BIT_SET(uParam1->f_149, iVar486))
		{
			if (iVar487 == -1 || func_1327(uParam2, iVar487, iVar486))
			{
				iVar487 = iVar486;
				uParam1->f_150 = 0;
				MISC::SET_BIT(&(uParam1->f_150), iVar486);
			}
			else if (func_1332(uParam2, iVar487, iVar486))
			{
				MISC::SET_BIT(&(uParam1->f_150), iVar486);
			}
		}
		iVar486++;
	}
	uParam1->f_166 = 0;
	uParam1->f_167 = 0;
	uParam1->f_168 = 0;
	uParam1->f_169 = 0;
	uParam1->f_170 = 0;
}

void func_727(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	func_609(&(uParam0->f_2979));
	iVar0 = 0;
	while (iVar0 < uParam1->f_15.f_23)
	{
		func_1207(&(uParam0->f_2979), iVar0, func_973(uParam1, iVar0), 0, 1);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_912(uParam1, iVar1))
		{
			if (func_1352(uParam1, iVar1))
			{
				func_1203(&(uParam0->f_2979), iVar1, func_1353(&(uParam0->f_2979), func_1343(uParam1, iVar1, 1), func_918(uParam1, iVar1)));
				func_1344(&(uParam0->f_2979), iVar1, 1);
				func_1204(&(uParam0->f_2979), iVar1, 1);
			}
			else
			{
				func_1203(&(uParam0->f_2979), iVar1, func_1343(uParam1, iVar1, 1));
				func_1204(&(uParam0->f_2979), iVar1, 0);
			}
		}
		iVar1++;
	}
}

void func_728(var uParam0, var uParam1, var uParam2)
{
	struct<377> Var0;
	int iVar486;
	int iVar487;
	int iVar488;
	int iVar489;
	float fVar490;
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	func_1225(uParam1, 11, -1);
	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1346(uParam2, &Var0, 3);
	iVar486 = 0;
	while (iVar486 < 6)
	{
		uParam1->f_158[iVar486] = 0f;
		iVar486++;
	}
	uParam1->f_140 = 0;
	uParam1->f_147 = uParam1->f_145;
	uParam1->f_148 = uParam1->f_146;
	uParam1->f_145 = -1;
	uParam1->f_146 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_141, iVar486))
		{
			if (uParam1->f_145 == -1 || func_1327(&Var0, iVar486, uParam1->f_145))
			{
				uParam1->f_145 = iVar486;
				uParam1->f_146 = 0;
				MISC::SET_BIT(&(uParam1->f_146), iVar486);
			}
			else if (func_1329(&Var0, iVar486, uParam1->f_145))
			{
				MISC::SET_BIT(&(uParam1->f_146), iVar486);
			}
		}
		iVar486++;
	}
	uParam1->f_149 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_141, iVar486) && !MISC::IS_BIT_SET(uParam1->f_146, iVar486))
		{
			if (func_1331(uParam2, iVar486, uParam1->f_145))
			{
				MISC::SET_BIT(&(uParam1->f_149), iVar486);
			}
		}
		iVar486++;
	}
	iVar487 = -1;
	uParam1->f_150 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if ((MISC::IS_BIT_SET(uParam1->f_141, iVar486) && !MISC::IS_BIT_SET(uParam1->f_146, iVar486)) && !MISC::IS_BIT_SET(uParam1->f_149, iVar486))
		{
			if (iVar487 == -1 || func_1327(uParam2, iVar487, iVar486))
			{
				iVar487 = iVar486;
				uParam1->f_150 = 0;
				MISC::SET_BIT(&(uParam1->f_150), iVar486);
			}
			else if (func_1332(uParam2, iVar487, iVar486))
			{
				MISC::SET_BIT(&(uParam1->f_150), iVar486);
			}
		}
		iVar486++;
	}
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_144, iVar486))
		{
			iVar488 = (uParam1[iVar486 /*13*/])->f_3;
			iVar489 = (func_918(uParam2, iVar486) - func_469(uParam2, iVar486));
			fVar490 = (BUILTIN::TO_FLOAT(iVar489) / BUILTIN::TO_FLOAT(iVar488));
			if (fVar490 < 0f)
			{
				fVar490 = 0f;
			}
			uParam1->f_158[iVar486] = fVar490;
		}
		iVar486++;
	}
	uParam1->f_166 = 0;
	uParam1->f_167 = 0;
	uParam1->f_168 = 0;
	uParam1->f_169 = 0;
	uParam1->f_170 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_144, iVar486))
		{
			if (MISC::IS_BIT_SET(uParam1->f_146, iVar486))
			{
				if (MISC::IS_BIT_SET(uParam1->f_143, iVar486))
				{
					func_1354(uParam1, iVar486);
				}
				func_1355(uParam1, iVar486, uParam1->f_149 != 0);
				func_1356(uParam1, iVar486, 0);
			}
			else
			{
				func_1262(uParam1, iVar486);
				func_1356(uParam1, iVar486, MISC::IS_BIT_SET(uParam1->f_149, iVar486));
				func_1355(uParam1, iVar486, 0);
			}
		}
		iVar486++;
	}
}

bool func_729(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_485)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_376[iVar0 /*18*/].f_17)
		{
			if (uParam0->f_376[iVar0 /*18*/].f_10[iVar1] == iParam1)
			{
				return true;
			}
			iVar1++;
		}
		iVar0++;
	}
	return false;
}

bool func_730(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_2497[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_731(var uParam0)
{
	if (uParam0->f_114.f_2100 == 1 || uParam0->f_114.f_2100 == 2)
	{
		return true;
	}
	return false;
}

bool func_732(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bVar0 = false;
	bVar1 = false;
	if (func_143(uParam0, 2))
	{
		if ((func_144(uParam0, 2) + func_918(uParam0, 2)) > 0)
		{
			bVar0 = true;
		}
	}
	if (func_143(uParam0, 5))
	{
		if ((func_144(uParam0, 5) + func_918(uParam0, 5)) > 0)
		{
			bVar1 = true;
		}
	}
	if (bVar0)
	{
		if (__LIB_1__::func_77(2, 512))
		{
			return true;
		}
		else if (__LIB_1__::func_77(2, 1024) || __LIB_1__::func_77(2, 2048))
		{
			if (!bVar1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_733(var uParam0)
{
	if (func_143(uParam0, 0) && func_1352(uParam0, 0))
	{
		if ((func_143(uParam0, 3) && func_144(uParam0, 3) == 0) && !func_1352(uParam0, 3))
		{
			return true;
		}
		if ((func_143(uParam0, 4) && func_144(uParam0, 4) == 0) && !func_1352(uParam0, 4))
		{
			return true;
		}
	}
	return false;
}

int func_734(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if ((func_143(uParam0, iVar2) && func_729(uParam0, iVar2)) && !MISC::IS_BIT_SET(iParam1, iVar2))
		{
			iVar3 = func_918(uParam0, iVar2);
			if (iVar0 == -1 || iVar1 < iVar3)
			{
				iVar0 = iVar2;
				iVar1 = iVar3;
			}
		}
		iVar2++;
	}
	return iVar0;
}

void func_735(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 1)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 16);
		uParam0->f_785[iParam1 /*52*/].f_19 = iParam2;
		if (bParam3)
		{
			MISC::SET_BIT(&(uParam0->f_785[iParam1 /*52*/].f_20), 0);
		}
		__LIB_12__::func_438(uParam0, iParam1, 41);
	}
}

void func_736(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	char cVar9[64];
	char cVar17[64];
	struct<16> Var25;
	char cVar41[64];
	iVar0 = uParam0->f_114.f_2528;
	iVar2 = func_918(uParam1, iVar0);
	iVar3 = (func_1357(&(uParam0->f_2979), iVar0) + iVar2);
	func_1201(&(uParam0->f_2979), iVar0, iVar3);
	iVar4 = 0;
	iVar5 = 0;
	bVar6 = false;
	iVar1 = 0;
	while (iVar1 < uParam1->f_485)
	{
		if (func_762(uParam1, iVar1, iVar0))
		{
			if (func_760(uParam1, iVar1) == 1)
			{
				MISC::SET_BIT(&iVar4, iVar1);
			}
			else
			{
				MISC::SET_BIT(&iVar5, iVar1);
			}
			if (func_1358(uParam1, iVar1))
			{
				bVar6 = true;
			}
		}
		iVar1++;
	}
	iVar7 = __LIB_12__::func_389(iVar4);
	iVar8 = __LIB_12__::func_389(iVar5);
	if (((uParam1->f_485 > 1 && !func_1359(uParam1)) || func_760(uParam1, 0) > 1) || bVar6)
	{
		StringCopy(&cVar9, "", 64);
		StringCopy(&cVar17, "", 64);
		if (iVar7 == 1 || func_1359(uParam1))
		{
			iVar1 = __LIB_12__::func_390(iVar4);
			if (uParam1->f_485 == 1 || func_1359(uParam1))
			{
				cVar9 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_POT")) };
			}
			else if (iVar1 == 0)
			{
				cVar9 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_MAIN_POT")) };
			}
			else if (iVar1 == 1 && uParam1->f_485 == 2)
			{
				cVar9 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_SIDE_POT")) };
			}
			else
			{
				cVar9 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG_NTH_SIDE_POT", func_1362(iVar1))) };
			}
		}
		else if (iVar7 > 1)
		{
			iVar1 = 0;
			while (iVar1 < uParam1->f_485)
			{
				if (MISC::IS_BIT_SET(iVar4, iVar1))
				{
					if (__LIB_12__::func_390(iVar4) == iVar1)
					{
						StringCopy(&cVar9, func_1362(iVar1), 64);
					}
					else if (func_1363(iVar4) != iVar1)
					{
						StringCopy(&cVar9, MISC::_CREATE_VAR_STRING(42, "MGPKR_MSG_LIST_MID", &cVar9, func_1362(iVar1)), 64);
					}
					else
					{
						StringCopy(&cVar9, MISC::_CREATE_VAR_STRING(42, "MGPKR_MSG_LIST_END", &cVar9, func_1362(iVar1)), 64);
					}
				}
				iVar1++;
			}
			StringCopy(&cVar9, MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG_LISTED_SIDE_POTS", &cVar9), 64);
		}
		if (iVar8 == 1 || func_1359(uParam1))
		{
			iVar1 = __LIB_12__::func_390(iVar4);
			if (uParam1->f_485 <= 1 || func_1359(uParam1))
			{
				cVar17 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_POT")) };
			}
			else if (iVar1 == 0)
			{
				cVar17 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_MAIN_POT")) };
			}
			else if (iVar1 == 1 && uParam1->f_485 == 2)
			{
				cVar9 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_SIDE_POT")) };
			}
			else
			{
				cVar17 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG_NTH_SIDE_POT", func_1362(iVar1))) };
			}
		}
		else if (iVar8 > 1)
		{
			iVar1 = 0;
			while (iVar1 < uParam1->f_485)
			{
				if (MISC::IS_BIT_SET(iVar5, iVar1))
				{
					if (__LIB_12__::func_390(iVar5) == iVar1)
					{
						StringCopy(&cVar17, func_1362(iVar1), 64);
					}
					else if (func_1363(iVar4) != iVar1)
					{
						StringCopy(&cVar17, MISC::_CREATE_VAR_STRING(42, "MGPKR_MSG_LIST_MID", &cVar17, func_1362(iVar1)), 64);
					}
					else
					{
						StringCopy(&cVar17, MISC::_CREATE_VAR_STRING(42, "MGPKR_MSG_LIST_END", &cVar17, func_1362(iVar1)), 64);
					}
				}
				iVar1++;
			}
			StringCopy(&cVar17, MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG_LISTED_SIDE_POTS", &cVar17), 64);
		}
		Var25 = { func_1000(&(uParam0->f_114), iVar0, 0) };
		StringCopy(&cVar41, "", 64);
		if (bVar6)
		{
			cVar41 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_KICKER")) };
		}
		if (iVar7 > 0 && iVar8 > 0)
		{
			if (uParam0->f_114.f_9 == iVar0)
			{
				func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG_YOU_WON_SPLIT", &cVar9, &cVar17, &cVar41), 0);
			}
			else
			{
				func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(682, "MGPKR_MSG_THEY_WON_SPLIT", &Var25, &cVar9, &cVar17, &cVar41), 0);
			}
		}
		else if (iVar7 > 0)
		{
			if (uParam0->f_114.f_9 == iVar0)
			{
				func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(42, "MGPKR_MSG_YOU_WON", &cVar9, &cVar41), 0);
			}
			else
			{
				func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG_THEY_WON", &Var25, &cVar9, &cVar41), 0);
			}
		}
		else if (iVar8 > 0)
		{
			if (uParam0->f_114.f_9 == iVar0)
			{
				func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(42, "MGPKR_MSG_YOU_SPLIT", &cVar17, &cVar41), 0);
			}
			else
			{
				func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG_THEY_SPLIT", &Var25, &cVar17, &cVar41), 0);
			}
		}
	}
}

void func_737(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	if (!(*uParam1)[iParam3 /*13*/])
	{
		return;
	}
	func_1225(uParam1, 12, iParam3);
	if (uParam2->f_2 == 0)
	{
		MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 2);
	}
	if (uParam2->f_2 == 1)
	{
		MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 3);
	}
	if (uParam2->f_2 == 2)
	{
		MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 4);
	}
	if (uParam2->f_2 == 3)
	{
		MISC::SET_BIT(&(uParam1->f_79[0 /*4*/].f_2), 5);
	}
}

void func_738(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		fVar0 = func_911(uParam1, iParam4);
		bVar1 = func_892(fVar0);
		bVar2 = func_1364(uParam1);
		bVar3 = func_1365(uParam1);
		bVar4 = func_1263(uParam1);
		bVar5 = func_1366(uParam1);
		bVar6 = func_1367(uParam1);
		if (bVar2)
		{
			if (bVar4)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "scoop_stealPreFlop", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar5)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "scoop_stealFlop", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar6)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "scoop_stealRiver", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		if (bVar3)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "scoop_splitPot", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
		}
		if (bVar1)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "scoop_base_bigWin", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "scoop_base_smallWin", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_739(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (func_387(uParam1, uParam0->f_114.f_9))
	{
		if (func_918(uParam1, uParam0->f_114.f_9) > 0)
		{
			__LIB_7__::func_739(joaat("POKER_HAND"));
			if (func_472(uParam1, uParam0->f_114.f_9))
			{
				__LIB_0__::func_15(__LIB_0__::func_38(joaat("WINS"), joaat("POKER_STOLE_POT")), 1);
			}
			else
			{
				switch (func_1328(uParam1, uParam0->f_114.f_9))
				{
					case 0:
						__LIB_0__::func_15(__LIB_0__::func_38(joaat("WINS"), joaat("POKER_HIGH_CARD")), 1);
						break;
					case 1:
						__LIB_0__::func_15(__LIB_0__::func_38(joaat("WINS"), joaat("POKER_2_OF_A_KIND")), 1);
						break;
					case 2:
						__LIB_0__::func_15(__LIB_0__::func_38(joaat("WINS"), joaat("POKER_2_PAIR")), 1);
						break;
					case 3:
						__LIB_0__::func_15(__LIB_0__::func_38(joaat("WINS"), joaat("POKER_3_OF_A_KIND")), 1);
						break;
					case 4:
						__LIB_0__::func_15(__LIB_0__::func_38(joaat("WINS"), joaat("POKER_STRAIGHT")), 1);
						break;
					case 5:
						__LIB_0__::func_15(__LIB_0__::func_38(joaat("WINS"), joaat("POKER_FLUSH")), 1);
						break;
					case 6:
						__LIB_0__::func_15(__LIB_0__::func_38(joaat("WINS"), joaat("POKER_FULL_HOUSE")), 1);
						break;
					case 7:
						__LIB_0__::func_15(__LIB_0__::func_38(joaat("WINS"), joaat("POKER_4_OF_A_KIND")), 1);
						break;
					case 8:
						__LIB_0__::func_15(__LIB_0__::func_38(joaat("WINS"), joaat("POKER_STRAIGHT_FLUSH")), 1);
						break;
					case 9:
						__LIB_0__::func_15(__LIB_0__::func_38(joaat("WINS"), joaat("POKER_ROYAL_FLUSH")), 1);
						break;
				}
			}
		}
		else
		{
			__LIB_7__::func_740(joaat("POKER_HAND"));
		}
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 < uParam1->f_485)
		{
			if (func_762(uParam1, iVar1, uParam0->f_114.f_9))
			{
				iVar2 = 0;
				while (iVar2 < uParam1->f_376[iVar1 /*18*/].f_9)
				{
					iVar3 = uParam1->f_376[iVar1 /*18*/].f_2[iVar2];
					if (!func_762(uParam1, iVar1, iVar3) && func_144(uParam1, iVar3) == 0)
					{
						if (!MISC::IS_BIT_SET(iVar0, iVar3))
						{
							MISC::SET_BIT(&iVar0, iVar3);
							switch (uParam0->f_1.f_41)
							{
								case 75:
									STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_GAMB_ROOT"), joaat("ACW_GAMB_RANK_04_POKER_FNS"), 1);
									break;
								case 5:
									STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_GAMB_ROOT"), joaat("ACW_GAMB_RANK_04_POKER_SDN"), 1);
									break;
								case 76:
									STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_GAMB_ROOT"), joaat("ACW_GAMB_RANK_04_POKER_VAL"), 1);
									break;
							}
						}
					}
					iVar2++;
				}
			}
			iVar1++;
		}
		bVar4 = uParam0->f_114.f_2859 >= 4;
		uParam0->f_114.f_2859 = (uParam0->f_114.f_2859 + __LIB_12__::func_389(iVar0));
		if (!bVar4 && uParam0->f_114.f_2859 >= 4)
		{
		}
		__LIB_18__::func_541(uParam0->f_1.f_38);
	}
}

void func_740(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	if (!(*uParam1)[iParam3 /*13*/])
	{
		return;
	}
	func_1225(uParam1, 8, iParam3);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam1->f_158[iVar0] = 0f;
		iVar0++;
	}
	uParam1->f_140 = 0;
	MISC::SET_BIT(&(uParam1->f_144), iParam3);
	MISC::SET_BIT(&(uParam1->f_143), iParam3);
	MISC::SET_BIT(&(uParam1->f_146), iParam3);
	uParam1->f_145 = iParam3;
	iVar1 = (uParam1[iParam3 /*13*/])->f_3;
	iVar2 = (func_1258(uParam2) - func_469(uParam2, iParam3));
	fVar3 = (BUILTIN::TO_FLOAT(iVar2) / BUILTIN::TO_FLOAT(iVar1));
	if (fVar3 < 0f)
	{
		fVar3 = 0f;
	}
	uParam1->f_158[iParam3] = fVar3;
	uParam1->f_165 = 0;
	func_1354(uParam1, iParam3);
	func_1355(uParam1, iParam3, 0);
	func_1356(uParam1, iParam3, 0);
}

void func_741(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		fVar0 = func_911(uParam1, iParam4);
		fVar1 = func_887(uParam1, iParam4);
		bVar2 = func_1273(fVar0);
		bVar3 = func_1371(fVar0);
		bVar4 = func_1372(fVar0);
		bVar5 = func_892(fVar0);
		bVar6 = func_1273(fVar1);
		if (bVar2)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "celebrate_excited_lvl3", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (bVar3)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "celebrate_excited_lvl2", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
			if (!bVar6)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "celebrate_content_lvl3", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		else if (bVar4)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "celebrate_excited_lvl1", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
			if (!bVar6)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "celebrate_content_lvl2", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		if (bVar5)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "celebrate_base_bigWin", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "celebrate_base_smallWin", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_742(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = uParam0->f_114.f_2528;
	iVar1 = func_1258(uParam1);
	iVar2 = (func_1357(&(uParam0->f_2979), iVar0) + iVar1);
	func_1318(uParam0, uParam1);
	func_1324(&(uParam0->f_2979), iVar0);
	func_1325(&(uParam0->f_2979), iVar0, 0, __LIB_9__::func_930());
	func_1325(&(uParam0->f_2979), iVar0, 1, __LIB_9__::func_930());
	func_1203(&(uParam0->f_2979), iVar0, func_1373(&(uParam0->f_2979), iVar1));
	func_1344(&(uParam0->f_2979), iVar0, 1);
	func_1204(&(uParam0->f_2979), iVar0, 1);
	func_1201(&(uParam0->f_2979), iVar0, iVar2);
}

bool func_743(var uParam0)
{
	return __LIB_0__::func_139(uParam0->f_326);
}

void func_745(var uParam0, bool bParam1)
{
	if (bParam1 && !uParam0->f_154)
	{
		if (!__LIB_0__::func_139(uParam0->f_326))
		{
			uParam0->f_326 = __LIB_1__::func_877("MGPKR_UI_MUCK", joaat("INPUT_MINIGAME_POKER_FOLD"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_1__::func_148(&(uParam0->f_328));
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_326))
	{
		__LIB_1__::func_748(&(uParam0->f_326), 1, 1);
		__LIB_0__::func_37(&(uParam0->f_328));
	}
}

int func_746(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = (uParam0->f_485 - 1);
	while (iVar1 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_376[iVar1 /*18*/].f_9)
		{
			if (uParam0->f_376[iVar1 /*18*/].f_2[iVar0] == iParam1)
			{
				return iVar1;
			}
			iVar0++;
		}
		iVar1 = (iVar1 - 1);
	}
	return -1;
}

bool func_747(var uParam0, int iParam1)
{
	return uParam0->f_376[iParam1 /*18*/].f_17 > 0;
}

void func_748(var uParam0, var uParam1, int iParam2)
{
	struct<8> Var0;
	if (uParam1->f_485 > 1)
	{
		if (uParam1->f_485 == 1)
		{
			Var0 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_POT")) };
		}
		else if (iParam2 == 0)
		{
			Var0 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_MAIN_POT")) };
		}
		else if (iParam2 == 1 && uParam1->f_485 == 2)
		{
			Var0 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_SIDE_POT")) };
		}
		else
		{
			Var0 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG_NTH_SIDE_POT", func_1362(iParam2))) };
		}
		func_601(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG_AWARDING_POT", &Var0), 0);
	}
}

void func_749(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		iVar0 = (uParam1[iParam4 /*13*/])->f_3;
		iVar1 = (func_1374(uParam3, iParam4, iParam5) - func_1330(uParam3, iParam4, iParam5));
		fVar2 = (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar0));
		if (fVar2 < 0f)
		{
			fVar2 = 0f;
		}
		fVar3 = func_887(uParam1, iParam4);
		bVar4 = func_1273(fVar2);
		bVar5 = func_1371(fVar2);
		bVar6 = func_1372(fVar2);
		bVar7 = func_892(fVar2);
		bVar8 = func_1273(fVar3);
		if (bVar4)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "celebrate_excited_lvl3", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (bVar5)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "celebrate_excited_lvl2", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
			if (!bVar8)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "celebrate_content_lvl3", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		else if (bVar6)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "celebrate_excited_lvl1", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
			if (!bVar8)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "celebrate_content_lvl2", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		if (bVar7)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "celebrate_base_bigWin", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "celebrate_base_smallWin", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_750(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0->f_114.f_2529;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_762(uParam1, iVar0, iVar1))
		{
			func_1203(&(uParam0->f_2979), iVar1, func_1353(&(uParam0->f_2979), func_1343(uParam1, iVar1, 1), func_1374(uParam1, iVar1, iVar0)));
			func_1344(&(uParam0->f_2979), iVar1, 1);
			func_1204(&(uParam0->f_2979), iVar1, 1);
		}
		iVar1++;
	}
}

void func_751(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	func_1225(uParam1, 7, -1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam1->f_158[iVar0] = 0f;
		iVar0++;
	}
	uParam1->f_140 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_144, iVar0))
		{
			iVar1 = (uParam1[iVar0 /*13*/])->f_3;
			iVar2 = (func_1374(uParam2, iVar0, iParam3) - func_1330(uParam2, iVar0, iParam3));
			fVar3 = (BUILTIN::TO_FLOAT(iVar2) / BUILTIN::TO_FLOAT(iVar1));
			if (fVar3 < 0f)
			{
				fVar3 = 0f;
			}
			uParam1->f_158[iVar0] = fVar3;
		}
		iVar0++;
	}
	uParam1->f_165 = func_760(uParam2, iParam3) > 1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_144, iVar0))
		{
			if (MISC::IS_BIT_SET(uParam1->f_146, iVar0))
			{
				if (MISC::IS_BIT_SET(uParam1->f_143, iVar0))
				{
					func_1354(uParam1, iVar0);
				}
				func_1355(uParam1, iVar0, uParam1->f_149 != 0);
				func_1356(uParam1, iVar0, 0);
			}
			else
			{
				func_1262(uParam1, iVar0);
				func_1356(uParam1, iVar0, MISC::IS_BIT_SET(uParam1->f_149, iVar0));
				func_1355(uParam1, iVar0, 0);
			}
		}
		iVar0++;
	}
}

void func_752(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<8> Var5;
	struct<16> Var13;
	char cVar29[64];
	iVar0 = uParam0->f_114.f_2528;
	iVar1 = uParam0->f_114.f_2529;
	iVar2 = func_1374(uParam1, iVar0, iVar1);
	iVar3 = (func_1357(&(uParam0->f_2979), iVar0) + iVar2);
	func_1201(&(uParam0->f_2979), iVar0, iVar3);
	bVar4 = func_1358(uParam1, iVar1);
	if ((uParam1->f_485 > 1 || func_760(uParam1, iVar1) > 1) || bVar4)
	{
		if (uParam1->f_485 == 1)
		{
			Var5 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_POT")) };
		}
		else if (iVar1 == 0)
		{
			Var5 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_MAIN_POT")) };
		}
		else if (iVar1 == 1 && uParam1->f_485 == 2)
		{
			Var5 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_SIDE_POT")) };
		}
		else
		{
			Var5 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG_NTH_SIDE_POT", func_1362(iVar1))) };
		}
		Var13 = { func_1000(&(uParam0->f_114), iVar0, 0) };
		StringCopy(&cVar29, "", 64);
		if (func_1358(uParam1, iVar1))
		{
			cVar29 = { __LIB_0__::func_482(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_KICKER")) };
		}
		if (func_760(uParam1, iVar1) == 1)
		{
			if (uParam0->f_114.f_9 == iVar0)
			{
				func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(42, "MGPKR_MSG_YOU_WON", &Var5, &cVar29), 0);
			}
			else
			{
				func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG_THEY_WON", &Var13, &Var5, &cVar29), 0);
			}
		}
		else if (uParam0->f_114.f_9 == iVar0)
		{
			func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(42, "MGPKR_MSG_YOU_SPLIT", &Var5, &cVar29), 0);
		}
		else
		{
			func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG_THEY_SPLIT", &Var13, &Var5, &cVar29), 0);
		}
	}
}

void func_753(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_762(uParam1, uParam0->f_114.f_2529, iVar0))
		{
			if (func_1375(&(uParam0->f_2979), iVar0, 0))
			{
				func_1203(&(uParam0->f_2979), iVar0, func_1343(uParam1, iVar0, 1));
			}
			func_1326(&(uParam0->f_2979), iVar0, 1);
			func_1204(&(uParam0->f_2979), iVar0, 0);
		}
		iVar0++;
	}
}

float func_754(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_326) && __LIB_0__::func_75(&(uParam0->f_328)))
	{
		return __LIB_0__::func_265(&(uParam0->f_328));
	}
	return 0f;
}

bool func_755(var uParam0, int iParam1)
{
	func_990(&(uParam0->f_1276), iParam1, 6, 0);
	return true;
	return false;
}

int func_756(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = func_1297(&(uParam0->f_287), iParam2);
	iVar1 = func_144(&(uParam0->f_287), iParam1);
	fVar2 = (BUILTIN::TO_FLOAT(iVar0) / BUILTIN::TO_FLOAT((iVar1 + iVar0)));
	if (fVar2 > 0.4f)
	{
		return 1;
	}
	return 0;
}

void func_757(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 4, -1))
	{
		if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "muck", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_758(var uParam0)
{
	func_1203(&(uParam0->f_2979), uParam0->f_114.f_2528, func_1377());
	func_1204(&(uParam0->f_2979), uParam0->f_114.f_2528, 1);
	func_1324(&(uParam0->f_2979), uParam0->f_114.f_2528);
	func_1325(&(uParam0->f_2979), uParam0->f_114.f_2528, 0, __LIB_9__::func_930());
	func_1325(&(uParam0->f_2979), uParam0->f_114.f_2528, 1, __LIB_9__::func_930());
}

void func_759(var uParam0)
{
	func_1312(&(uParam0->f_2979), uParam0->f_114.f_2528, 1);
}

int func_760(var uParam0, int iParam1)
{
	return uParam0->f_376[iParam1 /*18*/].f_17;
}

int func_761(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (iParam1 < 0 || iParam1 >= uParam0->f_485)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_376[iParam1 /*18*/].f_17)
	{
		MISC::SET_BIT(&iVar0, uParam0->f_376[iParam1 /*18*/].f_10[iVar1]);
		iVar1++;
	}
	return iVar0;
}

bool func_762(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (iParam1 < 0 || iParam1 >= uParam0->f_485)
	{
		return false;
	}
	else if (iParam2 < 0 || iParam2 >= 6)
	{
		return false;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_376[iParam1 /*18*/].f_17)
		{
			if (uParam0->f_376[iParam1 /*18*/].f_10[iVar0] == iParam2)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

int func_763(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((func_143(uParam0, iVar1) && func_1378(uParam0, iVar1, iParam1)) && !MISC::IS_BIT_SET(iParam2, iVar1))
		{
			return iVar1;
		}
		iVar1 = (iVar1 + 1 % 6);
		iVar0++;
	}
	return -1;
}

int func_764(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_114.f_2487[iParam2])
	{
		case 1:
			if (((!func_143(uParam1, iParam2) || !__LIB_12__::func_296(&(uParam0->f_3310), iParam2)) || !__LIB_12__::func_343(&(uParam0->f_3310), iParam2)) || __LIB_12__::func_344(&(uParam0->f_3310), iParam2) != 3)
			{
				return 1;
			}
			else if (!func_1379(&(uParam0->f_114), iParam2))
			{
				if (__LIB_18__::func_540(&(uParam0->f_3310), iParam2, 1))
				{
					if (__LIB_1__::func_285(&(uParam0->f_114.f_2494), 0.5f) || uParam0->f_3310.f_40)
					{
						func_679(&(uParam0->f_3310), iParam2, uParam0->f_114.f_2474, 2);
						return 1;
					}
				}
			}
			break;
		case 3:
			if (!func_143(uParam1, iParam2) || !__LIB_12__::func_296(&(uParam0->f_3310), iParam2))
			{
				return 1;
			}
			else if (func_796(&(uParam0->f_114), iParam2) && func_811(&(uParam0->f_114), iParam2, 1))
			{
				func_220(&(uParam0->f_114), iParam2, 0);
				func_1380(uParam0, iParam2);
				return 1;
			}
			break;
		case 5:
			if (!func_143(uParam1, iParam2) || !__LIB_12__::func_296(&(uParam0->f_3310), iParam2))
			{
				return 1;
			}
			else if (__LIB_1__::func_285(&(uParam0->f_114.f_2494), 1f) || uParam0->f_3310.f_40)
			{
				if (func_796(&(uParam0->f_114), iParam2) && func_811(&(uParam0->f_114), iParam2, 1))
				{
					func_220(&(uParam0->f_114), iParam2, 0);
					func_1380(uParam0, iParam2);
					return 1;
				}
			}
			break;
		case 4:
			if (!func_143(uParam1, iParam2) || !__LIB_12__::func_296(&(uParam0->f_3310), iParam2))
			{
				return 1;
			}
			else if (__LIB_1__::func_285(&(uParam0->f_114.f_2494), 1f) || uParam0->f_3310.f_40)
			{
				if (func_796(&(uParam0->f_114), uParam0->f_114.f_9) && func_811(&(uParam0->f_114), iParam2, 1))
				{
					func_220(&(uParam0->f_114), uParam0->f_114.f_9, 0);
					func_379(uParam0, &(uParam0->f_114));
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_765(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_114.f_2487[iVar1] != 0)
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(iVar1);
			Call_Loc(iParam2);
			if (StackVal)
			{
				func_1381(&(uParam0->f_114), iVar1);
				__LIB_1__::func_148(&(uParam0->f_114.f_2494));
			}
		}
		iVar1 = (iVar1 + 1 % 6);
		iVar0++;
	}
}

void func_766(var uParam0, var uParam1)
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
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	func_1225(&(uParam0->f_2147), 13, -1);
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 0;
	iVar11 = 0;
	iVar12 = 0;
	while (iVar12 < 6)
	{
		if (func_387(uParam1, iVar12))
		{
			iVar0 = func_469(uParam1, iVar12);
			iVar1 = func_918(uParam1, iVar12);
			if (iVar1 > iVar0)
			{
				iVar2 = (iVar1 - iVar0);
				iVar3 = 0;
			}
			else
			{
				iVar3 = (iVar0 - iVar1);
				iVar2 = 0;
			}
			uParam0->f_2147.f_178[iVar12] = (BUILTIN::TO_FLOAT(iVar2) / BUILTIN::TO_FLOAT(uParam0->f_2147[iVar12 /*13*/].f_3));
			uParam0->f_2147.f_185[iVar12] = (BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(uParam0->f_2147[iVar12 /*13*/].f_3));
			MISC::SET_BIT(&iVar4, iVar12);
			if (iVar2 > 0)
			{
				MISC::SET_BIT(&iVar5, iVar12);
			}
			if (func_1382(&(uParam0->f_2147), iVar12))
			{
				MISC::SET_BIT(&iVar6, iVar12);
			}
			if (func_1383(&(uParam0->f_2147), iVar12))
			{
				MISC::SET_BIT(&iVar7, iVar12);
			}
			if (func_1384(&(uParam0->f_2147), iVar12))
			{
				MISC::SET_BIT(&iVar8, iVar12);
			}
			if (func_1385(&(uParam0->f_2147), iVar12))
			{
				MISC::SET_BIT(&iVar9, iVar12);
			}
			if (func_1386(&(uParam0->f_2147), iVar12))
			{
				MISC::SET_BIT(&iVar10, iVar12);
			}
			if (func_1387(&(uParam0->f_2147), iVar12))
			{
				MISC::SET_BIT(&iVar11, iVar12);
			}
		}
		else
		{
			uParam0->f_2147.f_178[iVar12] = 0f;
			uParam0->f_2147.f_185[iVar12] = 0f;
		}
		uParam0->f_2147.f_171[iVar12] = uParam0->f_2147[iVar12 /*13*/].f_7;
		iVar12++;
	}
	uParam0->f_2147.f_192 = iVar4;
	uParam0->f_2147.f_193 = iVar5;
	uParam0->f_2147.f_194 = iVar6;
	uParam0->f_2147.f_195 = iVar7;
	uParam0->f_2147.f_196 = iVar8;
	uParam0->f_2147.f_197 = iVar9;
	uParam0->f_2147.f_198 = iVar10;
	uParam0->f_2147.f_199 = iVar11;
	func_1388(&(uParam0->f_2147));
	iVar13 = -1;
	iVar12 = 0;
	while (iVar12 < 6)
	{
		if (uParam0->f_2147[iVar12 /*13*/])
		{
			if (func_143(uParam1, iVar12))
			{
				iVar15 = func_144(uParam1, iVar12);
				uParam0->f_2147[iVar12 /*13*/].f_3 = iVar15;
				if (iVar13 == -1 || iVar14 < iVar15)
				{
					iVar13 = iVar12;
					iVar14 = iVar15;
				}
			}
		}
		iVar12++;
	}
	iVar12 = 0;
	while (iVar12 < 6)
	{
		if (uParam0->f_2147[iVar12 /*13*/])
		{
			iVar15 = uParam0->f_2147[iVar12 /*13*/].f_3;
			fVar16 = __LIB_9__::func_231((BUILTIN::TO_FLOAT(iVar15) / BUILTIN::TO_FLOAT(iVar14)), 0, 1065353216 /* Float: 1f */);
			fVar17 = 0f;
			fVar18 = ((1f - fVar16) + ((fVar17 * 0.5f) * fVar16));
			uParam0->f_2147[iVar12 /*13*/].f_5 = fVar16;
			uParam0->f_2147[iVar12 /*13*/].f_6 = fVar17;
			uParam0->f_2147[iVar12 /*13*/].f_7 = fVar18;
		}
		iVar12++;
	}
	iVar19 = 1;
	while (iVar19 > 0)
	{
		uParam0->f_2147.f_134[iVar19] = uParam0->f_2147.f_134[(iVar19 - 1)];
		iVar19 = (iVar19 - 1);
	}
	uParam0->f_2147.f_134[iVar19] = (uParam0->f_2147.f_141 || uParam0->f_2147.f_142);
	uParam0->f_2147.f_120 = 0;
	uParam0->f_2147.f_125 = iVar14;
	uParam0->f_2147.f_131 = -1;
	uParam0->f_2147.f_132 = -1;
	uParam0->f_2147.f_133 = 0;
	uParam0->f_2147.f_137 = 0f;
	uParam0->f_2147.f_138 = 0f;
	uParam0->f_2147.f_139 = 0f;
	uParam0->f_2147.f_140 = 0;
	uParam0->f_2147.f_141 = 0;
	uParam0->f_2147.f_142 = 0;
	uParam0->f_2147.f_143 = 0;
	uParam0->f_2147.f_144 = 0;
	uParam0->f_2147.f_145 = -1;
	uParam0->f_2147.f_146 = 0;
	uParam0->f_2147.f_147 = -1;
	uParam0->f_2147.f_148 = 0;
	uParam0->f_2147.f_149 = 0;
	uParam0->f_2147.f_150 = 0;
	iVar12 = 0;
	while (iVar12 < 6)
	{
		uParam0->f_2147.f_151[iVar12] = 0f;
		iVar12++;
	}
	iVar12 = 0;
	while (iVar12 < 6)
	{
		uParam0->f_2147.f_158[iVar12] = 0f;
		iVar12++;
	}
	uParam0->f_2147.f_165 = 0;
	uParam0->f_2147.f_166 = 0;
	uParam0->f_2147.f_167 = 0;
	uParam0->f_2147.f_168 = 0;
	uParam0->f_2147.f_169 = 0;
	uParam0->f_2147.f_170 = 0;
	iVar12 = 0;
	while (iVar12 < 6)
	{
		if (func_912(uParam1, iVar12))
		{
			func_1261(&(uParam0->f_2147), iVar12, 0);
		}
		iVar12++;
	}
}

bool func_767(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = func_795(&(uParam1->f_287));
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	iVar2 = uParam1->f_2147.f_127;
	iVar3 = uParam1->f_2147.f_128;
	iVar4 = uParam1->f_287.f_3;
	if (uParam0->f_114.f_2473 || !func_778(&(uParam1->f_287), &iVar4, 1))
	{
		iVar4 = uParam0->f_114.f_2474;
	}
	if (iVar0 > 2)
	{
		if (bParam2 || ((iVar2 >= 2 && iVar3 >= 4) && iVar1 < 25))
		{
			iVar5 = 0;
			while (iVar5 < 6)
			{
				if (func_143(&(uParam1->f_287), iVar5))
				{
					if (func_782(uParam0, uParam1, iVar5, iVar4, bParam2))
					{
						return true;
					}
				}
				iVar5++;
			}
		}
	}
	return false;
}

void func_768(var uParam0)
{
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	uParam0->f_2147.f_130 = 1;
}

void func_769(var uParam0)
{
	int iVar0;
	func_1319(&(uParam0->f_2979), 0, 1);
	func_1313(&(uParam0->f_2979));
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_822(&(uParam0->f_2979), iVar0))
		{
			func_1389(&(uParam0->f_2979), iVar0);
		}
		iVar0++;
	}
	func_1390(&(uParam0->f_2979));
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_143(&(uParam0->f_114.f_287), iVar0) && !func_843(&(uParam0->f_2979), iVar0))
		{
			if (!__LIB_12__::func_296(&(uParam0->f_3310), iVar0))
			{
			}
			else
			{
				func_366(&(uParam0->f_2979), iVar0, func_149(&(uParam0->f_3310), iVar0));
			}
		}
		iVar0++;
	}
}

void func_770(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	if (bParam1)
	{
		__LIB_0__::func_268(&(uParam0->f_114.f_2494), fParam2);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_114.f_2487[iVar0] != 0)
		{
			uParam0->f_114.f_2487[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_771(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (uParam0->f_1.f_41)
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
		default:
			break;
	}
	iVar1 = uParam0->f_114.f_9;
	if ((__LIB_12__::func_296(&(uParam0->f_3310), iVar1) && func_143(&(uParam0->f_114.f_287), iVar1)) && func_144(&(uParam0->f_114.f_287), iVar1) > 0)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (((__LIB_12__::func_296(&(uParam0->f_3310), iVar2) && func_143(&(uParam0->f_114.f_287), iVar2)) && func_144(&(uParam0->f_114.f_287), iVar2) == 0) && iVar2 != iVar1)
			{
				func_1391(&(uParam0->f_3310), iVar2, iVar1, iVar0, 0);
			}
			iVar2++;
		}
	}
}

int func_773(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((func_143(uParam0, iVar1) && func_144(uParam0, iVar1) == 0) && iVar1 != iParam1)
		{
			return iVar1;
		}
		iVar1 = (iVar1 + 1 % 6);
		iVar0++;
	}
	return -1;
}

void func_776(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2487[iParam1] = iParam2;
}

bool func_777(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_2487[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_778(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	if (*uParam1 < 0 || *uParam1 >= 6)
	{
		*uParam1 = -1;
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam2 == 0)
		{
			if (*uParam1 == uParam0->f_3)
			{
				*uParam1 = -1;
				return false;
			}
		}
		*uParam1 = (*uParam1 + 1 % 6);
		if (func_143(uParam0, *uParam1) && func_144(uParam0, *uParam1) > 0)
		{
			return true;
		}
		iVar0++;
	}
	*uParam1 = -1;
	return false;
}

void func_779(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (bParam2)
	{
	}
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 1)
	{
	}
	else if (bParam2 && (iParam3 < 0 || iParam3 >= 6))
	{
	}
	else if (bParam2 && iParam1 == iParam3)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 17);
		iVar0 = (iParam3 - iParam1);
		if (iVar0 < 0)
		{
			iVar0 += 6;
		}
		iVar1 = __LIB_12__::func_344(uParam0, iParam1);
		bVar2 = iVar1 == 5;
		if (bParam2)
		{
			MISC::SET_BIT(&(uParam0->f_785[iParam1 /*52*/].f_19), 0);
		}
		if (bVar2)
		{
			MISC::SET_BIT(&(uParam0->f_785[iParam1 /*52*/].f_19), 1);
		}
		uParam0->f_785[iParam1 /*52*/].f_20 = iVar0;
		if (bParam2)
		{
			if (!uParam0->f_40)
			{
				if (!func_197(uParam0))
				{
				}
				else if (func_627(uParam0) != iParam1)
				{
				}
				else if (func_784(uParam0))
				{
				}
			}
		}
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "BoardReturnReveal");
			__LIB_12__::func_438(uParam0, iParam1, 47);
		}
		if (bParam2)
		{
			func_1221(uParam0, iParam3, 1);
		}
	}
}

int func_780(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (uParam0->f_39[iVar1 /*56*/] != -1 && uParam0->f_39[iVar1 /*56*/].f_2 == 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_781(var uParam0, var uParam1)
{
	int iVar0[6];
	int iVar7;
	int iVar8;
	struct<8> Var9[6];
	int iVar58;
	if (func_143(uParam1, uParam0->f_114.f_9) && func_144(uParam1, uParam0->f_114.f_9) == 0)
	{
		iVar0[iVar7] = uParam0->f_114.f_9;
		iVar7++;
	}
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if ((func_143(uParam1, iVar8) && func_144(uParam1, iVar8) == 0) && iVar8 != uParam0->f_114.f_9)
		{
			iVar0[iVar7] = iVar8;
			iVar7++;
		}
		iVar8++;
	}
	if (iVar7 > 0)
	{
		if (iVar7 == 1 && iVar0[0] == uParam0->f_114.f_9)
		{
			func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_BUST_1_YOU"), 0);
		}
		else
		{
			iVar58 = 0;
			while (iVar58 < iVar7)
			{
				MemCopy(&(Var9[iVar58 /*8*/]), {func_1000(&(uParam0->f_114), iVar0[iVar58], 1)}, 8);
				iVar58++;
			}
			switch (iVar7)
			{
				case 1:
					func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(10, "MGPKR_BUST_1", &(Var9[0 /*8*/])), 0);
					break;
				case 2:
					func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(42, "MGPKR_BUST_2", &(Var9[0 /*8*/]), &(Var9[1 /*8*/])), 0);
					break;
				case 3:
					func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(170, "MGPKR_BUST_3", &(Var9[0 /*8*/]), &(Var9[1 /*8*/]), &(Var9[2 /*8*/])), 0);
					break;
				case 4:
					func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(682, "MGPKR_BUST_4", &(Var9[0 /*8*/]), &(Var9[1 /*8*/]), &(Var9[2 /*8*/]), &(Var9[3 /*8*/])), 0);
					break;
				case 5:
					func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2730, "MGPKR_BUST_5", &(Var9[0 /*8*/]), &(Var9[1 /*8*/]), &(Var9[2 /*8*/]), &(Var9[3 /*8*/]), &(Var9[4 /*8*/])), 0);
					break;
				case 6:
					func_1314(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(10922, "MGPKR_BUST_6", &(Var9[0 /*8*/]), &(Var9[1 /*8*/]), &(Var9[2 /*8*/]), &(Var9[3 /*8*/]), &(Var9[4 /*8*/]), &(Var9[5 /*8*/])), 0);
					break;
				default:
					func_609(&(uParam0->f_2979));
					break;
			}
		}
	}
}

bool func_782(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bVar0 = uParam1->f_2147[iParam2 /*13*/];
	fVar1 = uParam1->f_2147[iParam2 /*13*/].f_5;
	iVar2 = uParam1->f_2147[iParam2 /*13*/].f_2;
	iVar3 = uParam1->f_2147[iParam2 /*13*/].f_4;
	iVar4 = func_144(&(uParam1->f_287), iParam2);
	iVar5 = func_795(&(uParam1->f_287));
	iVar6 = __LIB_12__::func_294(2, uParam0->f_1.f_3.f_10);
	if (iVar5 > 2)
	{
		if (iParam2 != uParam0->f_114.f_9 && iParam2 != iParam3)
		{
			if (bParam4 || (((bVar0 && fVar1 < 1f) && iVar4 >= iVar6) && iVar2 >= iVar3))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_783(var uParam0)
{
	return uParam0->f_2031 != 0;
}

bool func_784(var uParam0)
{
	return uParam0->f_688.f_2;
}

bool func_785(var uParam0, int iParam1)
{
	return func_1392(uParam0, iParam1, 0);
}

void func_786(var uParam0, int iParam1)
{
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 1)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 19);
		if (!uParam0->f_40)
		{
			if (!func_197(uParam0))
			{
			}
			else
			{
				if (func_627(uParam0) != iParam1)
				{
				}
				if (!func_784(uParam0))
				{
				}
			}
		}
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "ReceiveDeckEnterNoCards");
			__LIB_12__::func_438(uParam0, iParam1, 54);
		}
		func_1221(uParam0, iParam1, 0);
	}
}

bool func_787(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_2487[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_790(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_671.f_11[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_671.f_11[iVar0]));
		}
		uParam0->f_671.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_791(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_616[iVar0 /*9*/].f_5[iVar1]))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_616[iVar0 /*9*/].f_5[iVar1]));
			}
			uParam0->f_616[iVar0 /*9*/].f_5[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
}

void func_794(var uParam0)
{
	func_175(&(uParam0->f_114), 0);
	func_175(&(uParam0->f_114), 1);
	__LIB_1__::func_267(uParam0->f_1.f_38, 1);
	func_215(&(uParam0->f_114), 3, 14);
	func_215(&(uParam0->f_114), 4, 13);
}

int func_795(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (uParam0->f_39[iVar1 /*56*/] != -1 && uParam0->f_39[iVar1 /*56*/].f_2 > 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_796(var uParam0, int iParam1)
{
	if (uParam0->f_1259 != 0)
	{
		return false;
	}
	if (func_1394(&(uParam0->f_1276)))
	{
		return false;
	}
	if (func_1074(&(uParam0->f_1276), iParam1))
	{
		return false;
	}
	return true;
}

bool func_797(var uParam0, int iParam1, bool bParam2)
{
	return func_913(uParam0, iParam1, 1, bParam2);
}

void func_798(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_143(&(uParam0->f_287), iVar2))
		{
			iVar0 = func_1395(uParam1, iVar2);
			iVar1 = func_144(&(uParam0->f_287), iVar2);
			if (iVar0 != iVar1)
			{
				func_470(uParam1, iVar2, iVar1, 0, 0, 1);
			}
		}
		iVar2++;
	}
}

bool func_799(var uParam0, int iParam1)
{
	if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
		return true;
	}
	return false;
}

bool func_800(var uParam0)
{
	return func_443(&(uParam0->f_1276));
}

void func_801(var uParam0)
{
	func_1396(&(uParam0->f_1276));
}

bool func_802(var uParam0)
{
	return ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1899528.f_61.f_4);
}

void func_803(var uParam0, int iParam1)
{
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 1)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 28);
		__LIB_12__::func_438(uParam0, iParam1, 41);
	}
}

void func_804(var uParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	uParam0->f_40 = bParam1;
}

int func_805(var uParam0)
{
	return Global_1899528.f_61.f_4;
}

void func_806(var uParam0)
{
	if (uParam0->f_688 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_688))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_688));
		}
		uParam0->f_688 = 0;
	}
}

bool func_807(var uParam0, int iParam1)
{
	return func_1397(&(uParam0->f_1276), iParam1);
}

int func_808(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_1259 != 0)
	{
		return 0;
	}
	if (!func_990(&(uParam0->f_1276), iParam1, 1, iParam2))
	{
		return 0;
	}
	func_212(&(uParam0->f_1276));
	func_137(uParam0);
	if (!func_384(uParam0, iParam1, 0))
	{
		return 0;
	}
	if (bParam3)
	{
		func_141(uParam0, 0, 0, 0);
	}
	return 1;
}

int func_809(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (uParam1->f_2031 != 0)
	{
		return 0;
	}
	uParam1->f_2031 = iParam2;
	uParam1->f_2031.f_1 = 0;
	if (bParam3)
	{
		func_380(uParam0, uParam1);
	}
	return 1;
}

int func_810(var uParam0, int iParam1)
{
	if (!uParam0->f_280[iParam1])
	{
		return 0;
	}
	return uParam0->f_165[iParam1 /*19*/];
}

bool func_811(var uParam0, int iParam1, bool bParam2)
{
	return func_913(uParam0, iParam1, 2, bParam2);
}

int func_812(var uParam0, int iParam1, bool bParam2)
{
	return func_1222(uParam0, iParam1, 2, bParam2);
}

void func_813(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2041[iParam1 /*6*/].f_1 = iParam2;
}

int func_814(var uParam0, int iParam1)
{
	if (uParam0->f_165[iParam1 /*19*/] != 1)
	{
		return 255;
	}
	return uParam0->f_165[iParam1 /*19*/].f_17;
}

bool func_815(var uParam0, vector3 vParam1, bool bParam4, var uParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	if (uParam0->f_758 > 0)
	{
		iVar0 = -1;
		fVar1 = 0f;
		iVar2 = 0;
		while (iVar2 < uParam0->f_758)
		{
			fVar3 = BUILTIN::VDIST2(uParam0->f_697[iVar2 /*3*/], vParam1);
			if (iVar0 == -1 || fVar1 > fVar3)
			{
				if (!bParam6 || ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_697[iVar2 /*3*/], true))
				{
					iVar0 = iVar2;
					fVar1 = fVar3;
				}
			}
			iVar2++;
		}
		if (iVar0 != -1)
		{
			*bParam4 = { uParam0->f_697[iVar0 /*3*/] };
			*uParam5 = __LIB_2__::func_916(*bParam4, *uParam0);
			return true;
		}
	}
	else
	{
		*bParam4 = { *uParam0 + uParam0->f_1099[4 /*3*/] * Vector(1.78f, 1.78f, 1.78f) };
		*uParam5 = __LIB_2__::func_916(*bParam4, *uParam0);
		bParam4->f_2 = uParam0->f_2;
	}
	return false;
}

void func_816(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	*uParam2 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_12__::func_296(uParam0, iVar0))
		{
			(*uParam1)[*uParam2] = uParam0->f_785[iVar0 /*52*/].f_7;
			*uParam2++;
		}
		iVar0++;
	}
}

bool func_818(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	uVar0 = 3;
	iVar4 = 0;
	if (__LIB_4__::func_890(iParam0))
	{
		return false;
	}
	func_1400(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, iParam2, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return false;
	}
	iVar5 = iParam4;
	iVar7 = 0;
	while (iVar7 < iParam4)
	{
		iVar6 = (*uParam3)[iVar7];
		if (!__LIB_4__::func_891(&uVar0, iVar6))
		{
			iVar5 = (iVar5 - 1);
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if ((*uParam3)[iVar8] == iVar6)
				{
					iVar5 = (iVar5 - 1);
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam4)
		{
			iVar6 = (*uParam3)[iVar7];
			if (__LIB_4__::func_891(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam4)
				{
					if ((*uParam3)[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return false;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (__LIB_4__::func_891(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam4)
			{
				if ((*uParam3)[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*iParam5 = iVar6;
					return true;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return false;
}

void func_821(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_165[iParam1 /*19*/] != 2)
	{
	}
	else
	{
		StringCopy(&(uParam0->f_165[iParam1 /*19*/].f_1), func_1403(iParam2), 128);
		uParam0->f_165[iParam1 /*19*/].f_18 = iParam2;
	}
}

bool func_822(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 6) && uParam0->f_197[iParam1 /*12*/])
	{
		return true;
	}
	return false;
}

void func_823(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (uParam0->f_1259 != -1857735811)
	{
		return;
	}
	else if (uParam0->f_1259.f_1 != 1995414514)
	{
		return;
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_1259.f_2, iParam1))
	{
		return;
	}
	else
	{
		uParam0->f_287.f_39[iParam1 /*56*/] = { uParam0->f_773.f_39[iParam1 /*56*/] };
		func_1023(uParam0, iParam1);
		MISC::CLEAR_BIT(&(uParam0->f_1259.f_2), iParam1);
		if (uParam0->f_1259.f_2 == 0)
		{
			func_141(uParam0, 1, 0, 0);
		}
	}
}

void func_824(var uParam0, int iParam1)
{
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	uParam0->f_2147.f_129 = (uParam0->f_2147.f_129 - iParam1);
}

int func_825(var uParam0, int iParam1, bool bParam2)
{
	return func_1235(uParam0, iParam1, 2, bParam2);
}

void func_826(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = func_1338(&(uParam0->f_114.f_287));
	MISC::CLEAR_BIT(&iVar0, iParam1);
	iVar1 = func_896(uParam0, iVar0, "arrive_greet", iParam1, 100);
	if (iVar1 != -1)
	{
		func_1404(&(uParam0->f_114), 1, iVar1, iParam1);
	}
}

void func_827(var uParam0, int iParam1)
{
	uParam0->f_2041[iParam1 /*6*/] = 0;
	uParam0->f_2041[iParam1 /*6*/].f_1 = 0;
}

int func_828(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = (iParam1 + 1 % 6);
	while (uParam0->f_39[iVar0 /*56*/] == -1)
	{
		if (iVar0 == iParam1)
		{
			return -1;
		}
		iVar0 = (iVar0 + 1 % 6);
	}
	return iVar0;
}

bool func_829(var uParam0)
{
	return (uParam0->f_2542 != -1 && uParam0->f_2543 != -1);
}

void func_830(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_829(uParam0))
	{
	}
	else
	{
		uParam0->f_2542 = iParam1;
		uParam0->f_2543 = iParam2;
		uParam0->f_2544 = iParam3;
	}
}

void func_831(var uParam0)
{
	if (uParam0->f_2136)
	{
	}
	uParam0->f_2136 = 1;
}

void func_832(var uParam0, int iParam1)
{
	if (func_822(&(uParam0->f_2979), iParam1))
	{
		func_1203(&(uParam0->f_2979), iParam1, func_1405());
		func_1312(&(uParam0->f_2979), iParam1, 1);
	}
}

void func_833(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		iVar0 = func_1406(uParam1, iParam4);
		iVar1 = func_1407(uParam1, iParam4);
		fVar2 = func_1408(uParam1, iParam4);
		bVar3 = func_1307(fVar2);
		if (iParam5 > iVar0)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "leave_happy", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				func_1404(uParam0, 2, iParam4, -1);
				return;
			}
		}
		if (iParam5 == 0)
		{
			if (iVar1 <= 3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "leave_bust_early", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					func_1404(uParam0, 2, iParam4, -1);
					return;
				}
			}
			if (bVar3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "leave_bust_highStanding", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					func_1404(uParam0, 2, iParam4, -1);
					return;
				}
			}
		}
		if (iParam5 > 0)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "leave_base_neutral", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				func_1404(uParam0, 2, iParam4, -1);
				return;
			}
		}
		else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "leave_base_bust", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
		{
			func_1404(uParam0, 2, iParam4, -1);
			return;
		}
	}
}

void func_834(var uParam0, int iParam1)
{
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	uParam0->f_2147.f_129 = (uParam0->f_2147.f_129 + iParam1);
}

void func_835(var uParam0, int iParam1)
{
	if (!uParam0->f_2147.f_118)
	{
		return;
	}
	if (uParam0->f_2147[iParam1 /*13*/])
	{
		uParam0->f_2147[iParam1 /*13*/] = 0;
		uParam0->f_2147[iParam1 /*13*/].f_2 = 0;
		uParam0->f_2147[iParam1 /*13*/].f_3 = 0;
		uParam0->f_2147[iParam1 /*13*/].f_1 = 0;
		uParam0->f_2147[iParam1 /*13*/].f_4 = 0;
		uParam0->f_2147[iParam1 /*13*/].f_5 = 0f;
		uParam0->f_2147[iParam1 /*13*/].f_6 = 0f;
		uParam0->f_2147[iParam1 /*13*/].f_7 = 0f;
		uParam0->f_2147[iParam1 /*13*/].f_8 = 0;
		uParam0->f_2147[iParam1 /*13*/].f_9 = 0;
		uParam0->f_2147[iParam1 /*13*/].f_10 = 0;
		uParam0->f_2147[iParam1 /*13*/].f_11 = 0;
		uParam0->f_2147[iParam1 /*13*/].f_12 = 0;
	}
}

void func_837(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 1 && uParam0->f_785[iParam1 /*52*/].f_1 != 2)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 26);
		uParam0->f_785[iParam1 /*52*/].f_36 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		uParam0->f_785[iParam1 /*52*/].f_34 = iParam2;
		if (bParam3)
		{
			MISC::SET_BIT(&(uParam0->f_785[iParam1 /*52*/].f_19), 0);
		}
		if (uParam0->f_785[iParam1 /*52*/].f_1 == 2)
		{
			if (!uParam0->f_40)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "Fold");
			}
			__LIB_12__::func_438(uParam0, iParam1, 59);
		}
		else
		{
			__LIB_12__::func_438(uParam0, iParam1, 60);
		}
		__LIB_18__::func_550(uParam0, iParam1, 0);
		__LIB_18__::func_549(uParam0, iParam1, 0);
	}
}

void func_838(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 1)
	{
	}
	else if (iParam2 < 0 || iParam2 >= 6)
	{
	}
	else if (iParam1 == iParam2)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 18);
		iVar0 = (iParam2 - iParam1);
		if (iVar0 < 0)
		{
			iVar0 += 6;
		}
		uParam0->f_785[iParam1 /*52*/].f_19 = iVar0;
		if (!uParam0->f_40)
		{
			if (!func_197(uParam0))
			{
			}
			else if (func_627(uParam0) != iParam1)
			{
			}
			else if (func_784(uParam0))
			{
			}
		}
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "PassDeckEnter");
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam1 /*52*/], "PassDeckType", BUILTIN::TO_FLOAT(iVar0));
			__LIB_12__::func_438(uParam0, iParam1, 52);
		}
		func_1221(uParam0, iParam2, 1);
	}
}

void func_839(var uParam0, int iParam1)
{
	if (!func_829(uParam0))
	{
	}
	else
	{
		uParam0->f_2544 = iParam1;
	}
}

void func_840(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	func_217(&(uParam0->f_3310), iParam1, iParam2);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_12__::func_355(&(uParam0->f_3310), iVar0))
		{
			func_471(&(uParam0->f_3310), iVar0, iParam1, 1);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (__LIB_12__::func_343(&(uParam0->f_3310), iVar1))
		{
			if (__LIB_12__::func_344(&(uParam0->f_3310), iVar1) == 5 || __LIB_12__::func_344(&(uParam0->f_3310), iVar1) == 4)
			{
				func_473(&(uParam0->f_3310), iVar1, 5, iParam1, 1);
			}
		}
		iVar1++;
	}
}

void func_841(var uParam0)
{
	if (!uParam0->f_2136)
	{
	}
	uParam0->f_2136 = 0;
}

void func_842(var uParam0)
{
	if (!func_829(uParam0))
	{
	}
	else
	{
		uParam0->f_2542 = -1;
		uParam0->f_2543 = -1;
		uParam0->f_2544 = 0;
	}
}

bool func_843(var uParam0, int iParam1)
{
	return uParam0->f_159[iParam1] != 0;
}

void func_844(var uParam0, int iParam1)
{
	if (uParam0->f_159[iParam1] == 0)
	{
	}
	else
	{
		if (uParam0->f_159[iParam1] == 1)
		{
			__LIB_12__::func_391(&(uParam0->f_166[iParam1]));
		}
		else if (uParam0->f_159[iParam1] == 2)
		{
			__LIB_7__::func_738(&Global_1899750, Global_1899750.f_14[iParam1]);
		}
		uParam0->f_159[iParam1] = 0;
	}
}

void func_845(var uParam0, var uParam1)
{
	struct<2> Var0;
	Var0 = { __LIB_0__::func_38(joaat("WIN_STREAK"), joaat("POKER_HAND")) };
	STATS::_0x0FEE2561120F3333(&Var0);
}

void func_846(var uParam0)
{
	uParam0->f_154 = 1;
	func_427(uParam0);
}

void func_847(var uParam0, int iParam1)
{
	uParam0->f_2031.f_1 = iParam1;
}

int func_848(var uParam0)
{
	if (uParam0->f_9 == -1)
	{
	}
	else
	{
		func_482(&(uParam0->f_1276), uParam0->f_9);
		return 1;
	}
	return 0;
}

void func_849(var uParam0, bool bParam1, bool bParam2)
{
	char cVar0[64];
	StringCopy(&cVar0, "", 64);
	if (!bParam1)
	{
		StringCopy(&cVar0, "PBL_EXIT_DEALING_", 64);
	}
	else
	{
		StringCopy(&cVar0, "PBL_EXIT_BOARD_SWAP_", 64);
	}
	if (!bParam2)
	{
		StringConCat(&cVar0, "L", 64);
	}
	else
	{
		StringConCat(&cVar0, "R", 64);
	}
	uParam0->f_784 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@poker@interrupt_exits", 0, &cVar0, false, true);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_784))
	{
	}
	else
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_784);
	}
}

bool func_850(var uParam0)
{
	return ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_784);
}

bool func_851(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_784))
	{
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_784, true, false))
	{
		return true;
	}
	return false;
}

void func_852(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_784))
	{
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_784, uParam0->f_1137[iParam1 /*3*/], uParam0->f_1156[iParam1 /*3*/], 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_784, "player", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_784, "deck", uParam0->f_688, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_784);
	}
}

void func_853(var uParam0)
{
	uParam0->f_153 = 1;
	func_1412(uParam0, 0);
	func_1413(uParam0, 0);
	__LIB_0__::func_105(1);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
}

void func_854(var uParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
	}
	uParam0->f_39 = bParam1;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_785[iVar0 /*52*/].f_50))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_785[iVar0 /*52*/].f_50, "ignoreCamera", true, false);
			}
			iVar0++;
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_781))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_781, "ignoreCamera", true, false);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_782))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_782, "ignoreCamera", true, false);
		}
	}
}

bool func_855(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_784))
	{
		return false;
	}
	return (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_784) || ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_784, 0));
}

bool func_856(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_784))
	{
		return false;
	}
	return ANIMSCENE::_0x4822A65D5AF64E69(uParam0->f_784) >= 1;
}

void func_857(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (uParam0->f_73[iVar0 /*30*/].f_20[iVar1] != 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_73[iVar0 /*30*/][iVar1]))
				{
					ENTITY::SET_ENTITY_ALPHA(uParam0->f_73[iVar0 /*30*/][iVar1], 255, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_73[iVar0 /*30*/].f_15[iVar1]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_73[iVar0 /*30*/].f_15[iVar1]));
				}
				uParam0->f_73[iVar0 /*30*/].f_20[iVar1] = 0;
				uParam0->f_73[iVar0 /*30*/].f_15[iVar1] = 0;
				uParam0->f_73[iVar0 /*30*/].f_25[iVar1] = 0f;
			}
			if (uParam0->f_254[iVar0 /*30*/].f_20[iVar1] != 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_254[iVar0 /*30*/][iVar1]))
				{
					ENTITY::SET_ENTITY_ALPHA(uParam0->f_254[iVar0 /*30*/][iVar1], 255, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_254[iVar0 /*30*/].f_15[iVar1]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_254[iVar0 /*30*/].f_15[iVar1]));
				}
				uParam0->f_254[iVar0 /*30*/].f_20[iVar1] = 0;
				uParam0->f_254[iVar0 /*30*/].f_15[iVar1] = 0;
				uParam0->f_254[iVar0 /*30*/].f_25[iVar1] = 0f;
			}
			if (uParam0->f_435[iVar0 /*30*/].f_20[iVar1] != 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_435[iVar0 /*30*/][iVar1]))
				{
					ENTITY::SET_ENTITY_ALPHA(uParam0->f_435[iVar0 /*30*/][iVar1], 255, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_435[iVar0 /*30*/].f_15[iVar1]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_435[iVar0 /*30*/].f_15[iVar1]));
				}
				uParam0->f_435[iVar0 /*30*/].f_20[iVar1] = 0;
				uParam0->f_435[iVar0 /*30*/].f_15[iVar1] = 0;
				uParam0->f_435[iVar0 /*30*/].f_25[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_858(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_774))
	{
	}
	else if (!ANIMSCENE::_0x1F0E401031E20146(uParam0->f_774, "plMain"))
	{
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_774, "Breakout", true, false);
	}
}

int func_859(var uParam0, int iParam1, bool bParam2)
{
	return func_1222(uParam0, iParam1, 1, bParam2);
}

int func_860(int iParam0)
{
	if (*iParam0 < 0 || *iParam0 >= 6)
	{
		*iParam0 = -1;
		return 0;
	}
	*iParam0 = (*iParam0 + 1 % 6);
	return 1;
}

int func_862(var uParam0, int iParam1, bool bParam2)
{
	return func_1235(uParam0, iParam1, 1, bParam2);
}

void func_863(var uParam0)
{
	int iVar0;
	if (uParam0->f_41 != 0)
	{
	}
	else
	{
		uParam0->f_41 = 1;
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (__LIB_12__::func_296(uParam0, iVar0))
			{
				__LIB_12__::func_357(uParam0, iVar0);
			}
			iVar0++;
		}
	}
}

void func_864(var uParam0, int iParam1)
{
	uParam0->f_779 = iParam1;
}

void func_865(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_19__::func_377(uParam0->f_1.f_38, uParam0->f_1.f_41, uParam0->f_3310, uParam0->f_3310.f_3, 1, 0);
	if (iVar0 != -1 && __LIB_3__::func_254(uParam0->f_3310, Global_35))
	{
		if (uParam0->f_114.f_2864 == 0)
		{
			uParam0->f_114.f_2864 = __LIB_4__::func_981(MISC::_CREATE_VAR_STRING(2, "MG_GAME_RESET"), 0, 0, 1);
		}
	}
	else if (uParam0->f_114.f_2864 != 0)
	{
		UIFEED::_0x2F901291EF177B02(uParam0->f_114.f_2864, 1);
		uParam0->f_114.f_2864 = 0;
	}
}

bool func_866(var uParam0)
{
	return uParam0->f_41 == 2;
}

void func_869(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			__LIB_18__::func_553(uParam0, iVar0, iVar1, bParam1);
			iVar1++;
		}
		iVar0++;
	}
}

int func_870(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar0 = (iVar0 + uParam0->f_376[iVar1 /*18*/]);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_387(uParam0, iVar2))
		{
			iVar0 = (iVar0 + func_1200(uParam0, iVar2));
		}
		iVar2++;
	}
	return iVar0;
}

int func_871(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		if (uParam0->f_376[iVar1 /*18*/].f_17 > 0)
		{
			iVar0 = (iVar0 + uParam0->f_376[iVar1 /*18*/]);
		}
		iVar1++;
	}
	return iVar0;
}

void func_872(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_39[iParam1 /*56*/].f_2 = iParam2;
}

int func_873(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (__LIB_12__::func_296(uParam0, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_874(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (uParam0->f_1.f_41)
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
		default:
			break;
	}
	iVar1 = uParam0->f_114.f_9;
	if ((__LIB_12__::func_296(&(uParam0->f_3310), iVar1) && func_143(&(uParam0->f_114.f_287), iVar1)) && func_144(&(uParam0->f_114.f_287), iVar1) == 0)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (((__LIB_12__::func_296(&(uParam0->f_3310), iVar2) && func_143(&(uParam0->f_114.f_287), iVar2)) && func_144(&(uParam0->f_114.f_287), iVar2) > 0) && iVar2 != iVar1)
			{
				func_1391(&(uParam0->f_3310), iVar2, iVar1, iVar0, 1);
			}
			iVar2++;
		}
	}
}

void func_876(var uParam0, int iParam1)
{
	uParam0->f_2082.f_1 = iParam1;
}

int func_877(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (((iVar1 != iParam1 && iVar1 != iParam2) && iVar1 != iParam3) && func_1418(uParam0, iVar1))
		{
			MISC::SET_BIT(&iVar0, iVar1);
		}
		iVar1++;
	}
	return iVar0;
}

bool func_878(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	iVar0 = func_1419(uParam1);
	if (func_1420(uParam0, (iParam2 && iVar0), sParam3, iParam4, iParam5, iParam6, iParam7))
	{
		func_898(uParam1, *iParam6);
		return true;
	}
	return false;
}

var func_879(var uParam0)
{
	return uParam0->f_192;
}

var func_880(var uParam0)
{
	return uParam0->f_193;
}

var func_881(var uParam0)
{
	return uParam0->f_194;
}

var func_882(var uParam0)
{
	return uParam0->f_195;
}

var func_883(var uParam0)
{
	return uParam0->f_196;
}

var func_884(var uParam0)
{
	return uParam0->f_197;
}

var func_885(var uParam0)
{
	return uParam0->f_198;
}

var func_886(var uParam0)
{
	return uParam0->f_199;
}

float func_887(var uParam0, int iParam1)
{
	return (uParam0[iParam1 /*13*/])->f_7;
}

var func_888(var uParam0, int iParam1)
{
	return uParam0->f_178[iParam1];
}

var func_889(var uParam0, int iParam1)
{
	return uParam0->f_185[iParam1];
}

bool func_890(float fParam0)
{
	return fParam0 >= 0.666f;
}

bool func_891(float fParam0)
{
	return fParam0 < 0.333f;
}

bool func_892(float fParam0)
{
	return fParam0 >= 0.325f;
}

bool func_893(float fParam0)
{
	return fParam0 < 0.2f;
}

bool func_894(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_2041[iVar0 /*6*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_895(var uParam0)
{
	return uParam0->f_2147.f_112 != 0;
}

int func_896(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1[6];
	int iVar8;
	int iVar9;
	int iVar10;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60000);
	if (iVar0 < iParam4 * 600)
	{
		iVar8 = 0;
		iVar9 = 0;
		while (iVar9 < 6)
		{
			if (MISC::IS_BIT_SET(iParam1, iVar9))
			{
				iVar1[iVar8] = iVar9;
				iVar8++;
			}
			iVar9++;
		}
		if (iVar8 > 0)
		{
			iVar9 = iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8)];
			iVar10 = 0;
			while (iVar10 < 6)
			{
				if (MISC::IS_BIT_SET(iParam1, iVar9))
				{
					if (func_1216(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), &(uParam0->f_114.f_287), iVar9, 1, iParam3))
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_3310.f_777, sParam2, uParam0->f_3310.f_785[iVar9 /*52*/], 0, uParam0->f_3310.f_40))
						{
							return iVar9;
						}
					}
				}
				iVar9 = (iVar9 + 1 % 6);
				iVar10++;
			}
		}
		return -1;
	}
	return -1;
}

bool func_897(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60000);
	if (iVar0 < iParam4 * 600)
	{
		if (func_1216(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), &(uParam0->f_114.f_287), iParam1, 1, iParam3))
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_3310.f_777, sParam2, uParam0->f_3310.f_785[iParam1 /*52*/], 0, uParam0->f_3310.f_40))
			{
				return true;
			}
		}
		return false;
	}
	return false;
}

void func_898(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER();
	*uParam0 = iVar0;
	if (iParam1 >= 0 && iParam1 < 6)
	{
		uParam0->f_1[iParam1] = iVar0;
	}
}

bool func_899(var uParam0, var uParam1, var uParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	iVar0 = func_1419(uParam1);
	*iParam6 = func_896(uParam0, (uParam2 && iVar0), sParam3, iParam4, iParam5);
	if (*iParam6 != -1)
	{
		func_898(uParam1, *iParam6);
		return true;
	}
	return false;
}

bool func_900(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (func_1421(uParam1, iParam2))
	{
		if (func_897(uParam0, iParam2, sParam3, iParam4, iParam5))
		{
			func_898(uParam1, iParam2);
			return true;
		}
	}
	return false;
}

var func_902(var uParam0)
{
	return uParam0->f_144;
}

int func_903(var uParam0)
{
	return uParam0->f_145;
}

float func_904(var uParam0, int iParam1)
{
	return uParam0->f_151[iParam1];
}

bool func_905(float fParam0, float fParam1)
{
	return (func_1308(fParam0) || (func_890(fParam1) && !func_1310(fParam0)));
}

var func_906(var uParam0)
{
	return uParam0->f_149;
}

bool func_907(var uParam0, int iParam1)
{
	if (uParam0->f_39[iParam1 /*56*/].f_31.f_24 > 7 || (uParam0->f_39[iParam1 /*56*/].f_31.f_24 == 7 && uParam0->f_39[iParam1 /*56*/].f_31[0 /*2*/] >= 11))
	{
		return true;
	}
	return false;
}

bool func_908(var uParam0, int iParam1)
{
	if (uParam0->f_39[iParam1 /*56*/].f_31.f_24 >= 3)
	{
		return true;
	}
	return false;
}

bool func_909(var uParam0, int iParam1)
{
	if (uParam0->f_39[iParam1 /*56*/].f_31.f_24 == 0)
	{
		return true;
	}
	if (uParam0->f_39[iParam1 /*56*/].f_31.f_24 == 1 && uParam0->f_39[iParam1 /*56*/].f_31[0 /*2*/] < 11)
	{
		return true;
	}
	return false;
}

void func_910(var uParam0)
{
	uParam0->f_2082 = 0;
	uParam0->f_2082.f_1 = 0;
}

var func_911(var uParam0, int iParam1)
{
	return uParam0->f_158[iParam1];
}

bool func_912(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 6) && uParam0->f_39[iParam1 /*56*/] != -1)
	{
		if (uParam0->f_39[iParam1 /*56*/].f_6 == 0 || uParam0->f_39[iParam1 /*56*/].f_6 == 2)
		{
			return true;
		}
	}
	return false;
}

bool func_913(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	return (!MISC::IS_BIT_SET(uParam0->f_1268, iParam1) || (uParam0->f_1269[iParam1] == iParam2 && !bParam3));
}

bool func_914(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		bVar0 = func_1422(uParam1);
		bVar1 = func_1333(uParam1, iParam4);
		bVar2 = func_1423(uParam1, iParam4);
		bVar3 = (bVar2 && bVar1);
		bVar4 = (bVar2 && !bVar1);
		fVar5 = func_887(uParam1, iParam4);
		bVar6 = func_1273(fVar5);
		if (bVar0)
		{
			if (bVar3)
			{
				if (uParam1->f_170 < 3)
				{
					if (uParam1->f_168 < 1)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "flop_excited_lvl2", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							uParam1->f_168++;
							uParam1->f_170++;
							return true;
						}
					}
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "flop_smallWinFX", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return true;
					}
				}
			}
			if (bVar4)
			{
				if (uParam1->f_170 < 3)
				{
					if (uParam1->f_168 < 1)
					{
						if (bVar6)
						{
							if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "flop_angry_lvl2", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
							{
								uParam1->f_168++;
								uParam1->f_170++;
								return true;
							}
						}
						else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "flop_frustrated_lvl2", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							uParam1->f_168++;
							uParam1->f_170++;
							return true;
						}
					}
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "flop_smallLossFX", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return true;
					}
				}
			}
		}
		if (!bVar0)
		{
			if (bVar1)
			{
				if (uParam1->f_170 < 1)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "flop_lookingGood", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return true;
					}
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "flop_content_lvl1", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return true;
					}
				}
			}
			else if (uParam1->f_170 < 1)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "flop_lookingBad", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					uParam1->f_170++;
					return true;
				}
				if (bVar6)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "flop_frustrated_lvl1", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return true;
					}
				}
				else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "flop_nervous_lvl1", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					uParam1->f_170++;
					return true;
				}
			}
		}
	}
	return false;
}

void func_915(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_2497[iVar0] == iParam1)
		{
			__LIB_0__::func_268(&(uParam0->f_2504[iVar0 /*3*/]), -fParam2);
		}
		iVar0++;
	}
}

bool func_916(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		bVar0 = func_1422(uParam1);
		bVar1 = func_1333(uParam1, iParam4);
		bVar2 = func_1423(uParam1, iParam4);
		bVar3 = (bVar2 && bVar1);
		bVar4 = (bVar2 && !bVar1);
		if (bVar0)
		{
			if (bVar3)
			{
				if (uParam1->f_166 < 1)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "turn_smallWinFX", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						uParam1->f_166++;
						return true;
					}
				}
			}
			if (bVar4)
			{
				if (uParam1->f_167 < 1)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "turn_smallLossFX", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						uParam1->f_167++;
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_917(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (uParam0->f_2497[iVar1] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_918(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_376[iVar1 /*18*/].f_17)
		{
			if (uParam0->f_376[iVar1 /*18*/].f_10[iVar2] == iParam1)
			{
				iVar0 = (iVar0 + (uParam0->f_376[iVar1 /*18*/] / uParam0->f_376[iVar1 /*18*/].f_17));
			}
			iVar2++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_919(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_785[iParam1 /*52*/].f_8 == 1)
	{
		if ((!bParam2 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_785[iParam1 /*52*/])) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(uParam0->f_785[iParam1 /*52*/]))
		{
			return true;
		}
	}
	return false;
}

void func_920(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	if (func_1216(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		bVar0 = func_1333(uParam1, iParam4);
		bVar1 = func_1423(uParam1, iParam4);
		bVar2 = (bVar1 && bVar0);
		bVar3 = (bVar1 && !bVar0);
		fVar4 = func_887(uParam1, iParam4);
		fVar5 = func_911(uParam1, iParam4);
		fVar6 = func_1424(uParam1, iParam4);
		bVar7 = func_1273(fVar4);
		bVar8 = func_1425(fVar5);
		bVar9 = func_892(fVar5);
		bVar10 = func_905(fVar6, fVar4);
		if (bVar2)
		{
			if (uParam1->f_166 < 1)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_winLastMinute", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					uParam1->f_166++;
					uParam1->f_170++;
					return;
				}
				if (bVar9)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_excited_lvl3", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						uParam1->f_166++;
						uParam1->f_170++;
						return;
					}
				}
				else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_excited_lvl2", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					uParam1->f_166++;
					uParam1->f_170++;
					return;
				}
				if (bVar9)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_bigWinFX", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						uParam1->f_166++;
						return;
					}
				}
				else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_smallWinFX", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					uParam1->f_166++;
					return;
				}
			}
		}
		if (bVar3 && !bVar8)
		{
			if (uParam1->f_167 < 1)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_loseLastMinute", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					uParam1->f_167++;
					uParam1->f_170++;
					return;
				}
				if (bVar7)
				{
					if (bVar10)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_angry_lvl3", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
						{
							uParam1->f_167++;
							uParam1->f_170++;
							return;
						}
					}
					else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_angry_lvl2", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						uParam1->f_167++;
						uParam1->f_170++;
						return;
					}
				}
				else if (bVar10)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_frustrated_lvl3", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						uParam1->f_167++;
						uParam1->f_170++;
						return;
					}
				}
				else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_frustrated_lvl2", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					uParam1->f_167++;
					uParam1->f_170++;
					return;
				}
				if (bVar10)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_medLossFX", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						uParam1->f_167++;
						return;
					}
				}
				else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_smallLossFX", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					uParam1->f_167++;
					return;
				}
			}
		}
		if (bVar8)
		{
			if (uParam1->f_170 < 4)
			{
				if (bVar9)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_excited_lvl2", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						uParam1->f_169++;
						uParam1->f_170++;
						return;
					}
				}
				else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_excited_lvl1", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					uParam1->f_169++;
					uParam1->f_170++;
					return;
				}
				if (bVar9)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_bigWinFX", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return;
					}
				}
			}
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_smallWinFX", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
			{
				uParam1->f_170++;
				return;
			}
		}
		if (!bVar8)
		{
			if (uParam1->f_170 < 4)
			{
				if (bVar7)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_angry_lvl1", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
					{
						uParam1->f_169++;
						uParam1->f_170++;
						return;
					}
				}
				else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_frustrated_lvl1", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					uParam1->f_169++;
					uParam1->f_170++;
					return;
				}
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_777, "river_smallLossFX", uParam2->f_785[iParam4 /*52*/], 0, uParam2->f_40))
				{
					uParam1->f_170++;
					return;
				}
			}
		}
	}
}

void func_926(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_24, iVar0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_24);
}

void func_928(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, bool bParam5, int iParam6)
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
		while (iVar0 < uParam1->f_17)
		{
			StringCopy(&cVar1, "", 8);
			StringIntConCat(&cVar1, iVar0, 8);
			uVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar4, &cVar1);
			uParam1->f_17[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar5, "textureName", "");
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_13, iVar0, "single_game_token", uVar5);
			iVar0++;
		}
	}
	MISC::SET_BIT(&(uParam0->f_151), iParam2);
	*uParam1 = 1;
}

bool func_931(var uParam0)
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
			if (MISC::GET_FRAME_COUNT() > uParam0->f_149 && uParam0->f_150 != -1)
			{
				func_1429(uParam0, -1);
			}
			break;
	}
	return uParam0->f_1 == 4;
}

int func_967(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
		func_1456(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
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

struct<2> func_973(var uParam0, int iParam1)
{
	return uParam0->f_15[iParam1 /*2*/];
}

int func_978(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (__LIB_12__::func_296(uParam0, iVar2))
		{
			iVar1 = uParam0->f_785[iVar2 /*52*/].f_6;
			if (iVar1 != -1)
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_981(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_81(uParam0);
	switch (iVar0)
	{
		case 0:
			return 3;
		case 1:
			return 4;
		default:
			break;
	}
	return 1;
	return 1;
}

int func_982(var uParam0, int iParam1)
{
	return (iParam1 / uParam0->f_157);
}

char* func_987(var uParam0, int iParam1)
{
	return (iParam1 * uParam0->f_157);
}

bool func_990(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (func_1074(uParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == uParam0->f_537)
	{
		if (uParam0->f_534 >= 4)
		{
			return false;
		}
		iVar0 = uParam0->f_534;
		uParam0->f_525[iVar0 /*2*/] = iParam2;
		uParam0->f_525[iVar0 /*2*/].f_1 = iParam3;
		uParam0->f_534++;
		return true;
	}
	if (uParam0->f_512[iParam1 /*2*/] != 0)
	{
		return false;
	}
	uParam0->f_512[iParam1 /*2*/] = iParam2;
	uParam0->f_512[iParam1 /*2*/].f_1 = iParam3;
	return true;
}

void func_991(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar0 = uParam1->f_2497[iVar2];
		if (iVar0 != 0)
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(iVar2);
			Stack.Push(&(uParam1->f_2504[iVar2 /*3*/]));
			Call_Loc(uParam1->f_2523[iVar0]);
			if (StackVal)
			{
				func_1465(uParam1, iVar2);
			}
		}
		iVar2 = (iVar2 + 1 % 6);
		iVar1++;
	}
}

void func_992(var uParam0, bool bParam1)
{
	if (!uParam0->f_154)
	{
		if (__LIB_0__::func_139(uParam0->f_321))
		{
			__LIB_5__::func_793(uParam0->f_321, !bParam1);
		}
	}
}

void func_994(var uParam0, bool bParam1)
{
	if (!uParam0->f_154)
	{
		if (__LIB_0__::func_139(uParam0->f_322))
		{
			__LIB_5__::func_793(uParam0->f_322, !bParam1);
		}
	}
}

void func_995(var uParam0, bool bParam1)
{
	if (!uParam0->f_154)
	{
		if (__LIB_0__::func_139(uParam0->f_323))
		{
			__LIB_5__::func_793(uParam0->f_323, !bParam1);
		}
	}
}

bool func_997(int iParam0)
{
	return __LIB_1__::func_530(iParam0, 1);
}

void func_998(var uParam0)
{
	func_1467(&(uParam0->f_36), 0);
	switch (uParam0->f_2)
	{
		case 2:
			CAM::_0x90DA5BA5C2635416();
			break;
	}
	if (uParam0->f_1)
	{
		if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
		{
			if (!uParam0->f_8)
			{
				GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(func_463(uParam0->f_7), 1E-08f);
				uParam0->f_8 = 1;
			}
		}
		else if (uParam0->f_8)
		{
			GRAPHICS::_0xBB6C707F20D955D4(1E-08f);
			uParam0->f_8 = 0;
		}
	}
}

bool func_999(var uParam0)
{
	return uParam0->f_281;
}

struct<16> func_1000(var uParam0, int iParam1, bool bParam2)
{
	char cVar0[128];
	StringCopy(&cVar0, "** Null **", 128);
	if (bParam2)
	{
		if (iParam1 == uParam0->f_9)
		{
			StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "MGPKR_YOU"), 128);
			return cVar0;
		}
	}
	switch (uParam0->f_50[iParam1 /*19*/])
	{
		case 1:
		case 2:
			return uParam0->f_50[iParam1 /*19*/].f_1;
	}
	return cVar0;
}

void func_1001(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!uParam0->f_197[iParam1 /*12*/])
	{
	}
	else
	{
		__LIB_7__::func_743(&(uParam0->f_34[iParam1 /*19*/]), uParam2);
		uParam0->f_197[iParam1 /*12*/].f_11 = 1;
	}
}

void func_1002(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!uParam0->f_197[iParam1 /*12*/])
	{
	}
	else if (uParam0->f_197[iParam1 /*12*/].f_11)
	{
		__LIB_7__::func_743(&(uParam0->f_34[iParam1 /*19*/]), &(uParam0->f_197[iParam1 /*12*/].f_3));
		uParam0->f_197[iParam1 /*12*/].f_11 = 0;
	}
}

void func_1003(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bVar0 = false;
	bVar1 = false;
	switch (uParam1->f_2100)
	{
		case 0:
			if ((func_143(&(uParam1->f_287), uParam1->f_9) && func_142(uParam1, 0)) && !(uParam1->f_2752 == 2 && uParam1->f_2752.f_1 < 10))
			{
				if (func_472(&(uParam1->f_287), uParam1->f_9))
				{
					if (uParam1->f_2010 == 4 || uParam1->f_2010 == 6)
					{
						bVar0 = true;
					}
					if (uParam1->f_2010 == 5 && !__LIB_12__::func_342(&(uParam0->f_114), uParam1->f_287.f_6))
					{
						bVar0 = true;
					}
				}
				else if (((uParam1->f_2010 == 4 || uParam1->f_2010 == 6) || uParam1->f_2010 == 5) || uParam1->f_2010 == 7)
				{
					bVar1 = true;
				}
			}
			func_1469(&(uParam0->f_2979), bVar0);
			func_1470(&(uParam0->f_2979), bVar1);
			if (__LIB_1__::func_732(uParam0->f_2979.f_324, 1))
			{
				func_1471(uParam0, 0);
			}
			else if (__LIB_1__::func_732(uParam0->f_2979.f_325, 1))
			{
				func_1471(uParam0, 1);
			}
			break;
		case 1:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
			}
			else
			{
				func_1472(uParam0);
			}
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (uParam1->f_2100 != 0)
	{
		func_1020(uParam1, 2);
	}
}

void func_1004(var uParam0, var uParam1)
{
	bool bVar0;
	if (uParam0->f_312 != 0)
	{
		if (!func_635(uParam1, uParam0->f_312.f_1))
		{
			func_684(uParam0);
			return;
		}
		bVar0 = true;
		while (bVar0)
		{
			bVar0 = false;
			switch (uParam0->f_312)
			{
				case 1:
					if (!__LIB_0__::func_139(uParam0->f_312.f_4))
					{
						uParam0->f_312.f_4 = __LIB_1__::func_877("MGPKR_UI_PRETURN_MENU", joaat("INPUT_MINIGAME_HELP_NEXT"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						__LIB_8__::func_753(uParam0->f_312.f_4, 1, 1);
						func_1474(uParam0->f_312.f_4, 1, 1);
					}
					if (__LIB_12__::func_425(uParam0->f_312.f_4))
					{
						if (func_1475(uParam1, uParam0->f_312.f_1))
						{
							func_1476(uParam0, 2);
							bVar0 = true;
						}
						else
						{
							func_1476(uParam0, 3);
							bVar0 = true;
						}
					}
					break;
				case 2:
					if (!PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_HELP_NEXT")))
					{
						func_1476(uParam0, 1);
						bVar0 = true;
					}
					else if (func_1477(uParam0, uParam1))
					{
						if (func_1475(uParam1, uParam0->f_312.f_1))
						{
							func_1476(uParam0, 2);
						}
						else
						{
							func_1476(uParam0, 3);
						}
						bVar0 = true;
					}
					else
					{
						HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(635838715, "MGPKR_UI_PRETURN_MENU", 1, 0, 0, 0);
						if (!__LIB_0__::func_139(uParam0->f_312.f_5))
						{
							uParam0->f_312.f_5 = __LIB_1__::func_877("MGPKR_UI_PRETURN_CHECK", joaat("INPUT_MINIGAME_POKER_BET"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							__LIB_4__::func_12(uParam0->f_312.f_5, 635838715, 0, 1);
							if (uParam0->f_312.f_2 == 1)
							{
								__LIB_5__::func_793(uParam0->f_312.f_5, 1);
							}
						}
						if (!__LIB_0__::func_139(uParam0->f_312.f_6))
						{
							uParam0->f_312.f_6 = __LIB_1__::func_877("MGPKR_UI_PRETURN_FOLD", joaat("INPUT_MINIGAME_POKER_FOLD"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							__LIB_4__::func_12(uParam0->f_312.f_6, 635838715, 0, 1);
							if (uParam0->f_312.f_2 == 5)
							{
								__LIB_5__::func_793(uParam0->f_312.f_6, 1);
							}
						}
						if (!__LIB_0__::func_139(uParam0->f_312.f_7))
						{
							uParam0->f_312.f_7 = __LIB_1__::func_877("MGPKR_UI_PRETURN_CHECK_FOLD", joaat("INPUT_MINIGAME_POKER_CHECK_FOLD"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							__LIB_4__::func_12(uParam0->f_312.f_7, 635838715, 0, 1);
							if (uParam0->f_312.f_2 == 2)
							{
								__LIB_5__::func_793(uParam0->f_312.f_7, 1);
							}
						}
						if (!__LIB_0__::func_139(uParam0->f_312.f_8))
						{
							uParam0->f_312.f_8 = __LIB_1__::func_877("MGPKR_UI_PRETURN_CANCEL", joaat("INPUT_MINIGAME_QUIT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							__LIB_4__::func_12(uParam0->f_312.f_8, 635838715, 0, 1);
							if (uParam0->f_312.f_2 == 0)
							{
								__LIB_5__::func_793(uParam0->f_312.f_8, 1);
							}
						}
						if (__LIB_0__::func_139(uParam0->f_321))
						{
							__LIB_1__::func_382(uParam0->f_321, 0, 1);
						}
						if (__LIB_0__::func_139(uParam0->f_322))
						{
							__LIB_1__::func_382(uParam0->f_322, 0, 1);
						}
						if (__LIB_0__::func_139(uParam0->f_323))
						{
							__LIB_1__::func_382(uParam0->f_323, 0, 1);
						}
						if (__LIB_0__::func_139(uParam0->f_327))
						{
							__LIB_1__::func_382(uParam0->f_327, 0, 1);
						}
						if (__LIB_1__::func_514(uParam0->f_312.f_5, 1))
						{
							func_1480(uParam0, 1, 0);
							func_1476(uParam0, 2);
							bVar0 = true;
						}
						else if (__LIB_1__::func_514(uParam0->f_312.f_6, 1))
						{
							func_1480(uParam0, 5, 0);
							func_1476(uParam0, 2);
							bVar0 = true;
						}
						else if (__LIB_1__::func_514(uParam0->f_312.f_7, 1))
						{
							func_1480(uParam0, 2, 0);
							func_1476(uParam0, 2);
							bVar0 = true;
						}
						else if (__LIB_1__::func_514(uParam0->f_312.f_8, 1))
						{
							func_1481(uParam0);
							func_1476(uParam0, 2);
							bVar0 = true;
						}
					}
					break;
				case 3:
					if (!PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_HELP_NEXT")))
					{
						func_1476(uParam0, 1);
						bVar0 = true;
					}
					else if (func_1477(uParam0, uParam1))
					{
						if (func_1475(uParam1, uParam0->f_312.f_1))
						{
							func_1476(uParam0, 2);
						}
						else
						{
							func_1476(uParam0, 3);
						}
						bVar0 = true;
					}
					else
					{
						HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(635838715, "MGPKR_UI_PRETURN_MENU", 1, 0, 0, 0);
						if (!__LIB_0__::func_139(uParam0->f_312.f_5))
						{
							uParam0->f_312.f_5 = __LIB_1__::func_877("MGPKR_UI_PRETURN_CALL_ANY", joaat("INPUT_MINIGAME_POKER_BET"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							__LIB_4__::func_12(uParam0->f_312.f_5, 635838715, 0, 1);
							if (uParam0->f_312.f_2 == 3)
							{
								__LIB_5__::func_793(uParam0->f_312.f_5, 1);
							}
						}
						if (!__LIB_0__::func_139(uParam0->f_312.f_6))
						{
							uParam0->f_312.f_6 = __LIB_1__::func_877("MGPKR_UI_PRETURN_FOLD", joaat("INPUT_MINIGAME_POKER_FOLD"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							__LIB_4__::func_12(uParam0->f_312.f_6, 635838715, 0, 1);
							if (uParam0->f_312.f_2 == 5)
							{
								__LIB_5__::func_793(uParam0->f_312.f_6, 1);
							}
						}
						if (!__LIB_0__::func_139(uParam0->f_312.f_8))
						{
							uParam0->f_312.f_8 = __LIB_1__::func_877("MGPKR_UI_PRETURN_CANCEL", joaat("INPUT_MINIGAME_QUIT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							__LIB_4__::func_12(uParam0->f_312.f_8, 635838715, 0, 1);
							if (uParam0->f_312.f_2 == 0)
							{
								__LIB_5__::func_793(uParam0->f_312.f_8, 1);
							}
						}
						if (__LIB_0__::func_139(uParam0->f_321))
						{
							__LIB_1__::func_382(uParam0->f_321, 0, 1);
						}
						if (__LIB_0__::func_139(uParam0->f_322))
						{
							__LIB_1__::func_382(uParam0->f_322, 0, 1);
						}
						if (__LIB_0__::func_139(uParam0->f_323))
						{
							__LIB_1__::func_382(uParam0->f_323, 0, 1);
						}
						if (__LIB_0__::func_139(uParam0->f_327))
						{
							__LIB_1__::func_382(uParam0->f_327, 0, 1);
						}
						if (__LIB_1__::func_514(uParam0->f_312.f_5, 1))
						{
							func_1480(uParam0, 3, 0);
							func_1476(uParam0, 3);
							bVar0 = true;
						}
						else if (__LIB_1__::func_514(uParam0->f_312.f_6, 1))
						{
							func_1480(uParam0, 5, 0);
							func_1476(uParam0, 3);
							bVar0 = true;
						}
						else if (__LIB_1__::func_514(uParam0->f_312.f_8, 1))
						{
							func_1481(uParam0);
							func_1476(uParam0, 3);
							bVar0 = true;
						}
					}
					break;
			}
		}
	}
}

void func_1005(var uParam0, int iParam1)
{
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 2)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 8);
		__LIB_12__::func_438(uParam0, iParam1, 30);
		__LIB_18__::func_549(uParam0, iParam1, 2);
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "PeekEnter");
		}
	}
}

bool func_1006(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_785[iParam1 /*52*/].f_41 || (iParam2 && uParam0->f_785[iParam1 /*52*/].f_40));
}

void func_1007(var uParam0, var uParam1)
{
	if (uParam1->f_2104 != 0)
	{
		switch (uParam1->f_2104)
		{
			case 1:
				func_1482(uParam0, uParam1, &(uParam1->f_2104));
				break;
			case 2:
				func_1483(uParam0, uParam1, &(uParam1->f_2104));
				break;
			case 3:
				func_1484(uParam0, uParam1, &(uParam1->f_2104));
				break;
			case 4:
				func_1485(uParam0, uParam1, &(uParam1->f_2104));
				break;
			case 5:
				func_1486(uParam0, uParam1, &(uParam1->f_2104));
				break;
			case 6:
				func_1487(uParam0, uParam1, &(uParam1->f_2104));
				break;
			case 7:
				func_1488(uParam0, uParam1, &(uParam1->f_2104));
				break;
			case 8:
				func_1489(uParam0, uParam1, &(uParam1->f_2104));
				break;
			case 9:
				func_1490(uParam0, uParam1, &(uParam1->f_2104));
				break;
			case 10:
				func_1491(uParam0, uParam1, &(uParam1->f_2104));
				break;
			case 11:
				func_1492(uParam0, uParam1, &(uParam1->f_2104));
				break;
			default:
				break;
		}
	}
}

void func_1008(var uParam0, var uParam1)
{
	if (uParam1->f_2347 != -1)
	{
		if (!func_603(&(uParam0->f_3310), uParam1->f_2347))
		{
			func_1493(uParam1);
		}
	}
}

int func_1009(var uParam0, var uParam1)
{
	if ((((uParam0->f_2010 == 3 || uParam0->f_2010 == 4) || uParam0->f_2010 == 5) || uParam0->f_2010 == 6) || uParam0->f_2010 == 11)
	{
		if (uParam0->f_2752 == 0 && __LIB_1__::func_285(&(uParam0->f_2752.f_2), 3f))
		{
			if (uParam0->f_2752.f_5 == 0)
			{
				func_1229(uParam0, uParam1, 0);
				func_1229(uParam0, uParam1, 3);
				func_1229(uParam0, uParam1, 4);
				func_1230(uParam0, 10);
				PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_YOSEMITE"));
				PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BOB"));
				uParam0->f_2752.f_5++;
				return 1;
			}
			else if (uParam0->f_2752.f_5 == 1)
			{
				func_1229(uParam0, uParam1, 0);
				func_1229(uParam0, uParam1, 3);
				func_1229(uParam0, uParam1, 4);
				func_1230(uParam0, 11);
				uParam0->f_2752.f_5++;
				return 1;
			}
			else if (uParam0->f_2752.f_5 == 2)
			{
				func_1229(uParam0, uParam1, 0);
				func_1229(uParam0, uParam1, 3);
				func_1229(uParam0, uParam1, 4);
				func_1230(uParam0, 12);
				uParam0->f_2752.f_5++;
				return 1;
			}
			else if (uParam0->f_2752.f_5 == 3)
			{
				func_1229(uParam0, uParam1, 0);
				func_1229(uParam0, uParam1, 3);
				func_1229(uParam0, uParam1, 4);
				func_1230(uParam0, 13);
				uParam0->f_2752.f_5++;
				return 1;
			}
			else if (uParam0->f_2752.f_5 == 4)
			{
				func_1229(uParam0, uParam1, 0);
				func_1229(uParam0, uParam1, 3);
				func_1229(uParam0, uParam1, 4);
				func_1230(uParam0, 14);
				uParam0->f_2752.f_5++;
				return 1;
			}
			else if (uParam0->f_2752.f_5 == 5)
			{
				func_1229(uParam0, uParam1, 0);
				func_1229(uParam0, uParam1, 3);
				func_1229(uParam0, uParam1, 4);
				func_1230(uParam0, 15);
				uParam0->f_2752.f_5++;
				return 1;
			}
		}
	}
	return 0;
}

void func_1010(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	switch (uParam1->f_2752)
	{
		case 0:
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (MISC::IS_BIT_SET(uParam1->f_2752.f_6, iVar0) && !func_148(uParam2, iVar0))
				{
					func_1040(uParam1, uParam2);
					return;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (MISC::IS_BIT_SET(uParam1->f_2752.f_6, iVar0))
				{
					if (AUDIO::IS_ANY_SPEECH_PLAYING(func_149(uParam2, iVar0)))
					{
						return;
					}
				}
				iVar0++;
			}
			if (!func_1494(uParam1->f_2752.f_1, &vVar1) || !__LIB_2__::func_813(&(uParam1->f_2752.f_8), vVar1, 0, -1, 0, 0))
			{
				func_1040(uParam1, uParam2);
				return;
			}
			func_1496(uParam1, 2);
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (MISC::IS_BIT_SET(uParam1->f_2752.f_6, iVar0) && !func_148(uParam2, iVar0))
				{
					func_1040(uParam1, uParam2);
					return;
				}
				iVar0++;
			}
			if (!func_1494(uParam1->f_2752.f_1, &vVar1) || !__LIB_10__::func_456(&vVar1))
			{
				func_1498(uParam0, uParam1);
				func_1040(uParam1, uParam2);
			}
			else
			{
				iVar4 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(&vVar1);
				if (uParam1->f_2752.f_7 != -1)
				{
					iVar0 = uParam1->f_2752.f_7;
					if ((!MISC::IS_BIT_SET(uParam1->f_2752.f_6, iVar0) || !func_148(uParam2, iVar0)) || func_149(uParam2, iVar0) != AUDIO::_0x254B0241E964B450(&vVar1, iVar4))
					{
						uParam1->f_2752.f_7 = -1;
					}
				}
				if (uParam1->f_2752.f_7 == -1)
				{
					iVar5 = -1;
					iVar6 = -1;
					iVar0 = 0;
					while (iVar0 < 6)
					{
						if (MISC::IS_BIT_SET(uParam1->f_2752.f_6, iVar0) && func_148(uParam2, iVar0))
						{
							iVar7 = func_149(uParam2, iVar0);
							if (iVar5 == -1 && iVar7 == AUDIO::_0x254B0241E964B450(&vVar1, iVar4))
							{
								iVar5 = iVar0;
							}
							if (iVar6 == -1 && iVar7 == AUDIO::_0x152ED1B56E8F1F50(&vVar1, iVar4))
							{
								iVar6 = iVar0;
							}
							if (iVar5 != -1 && iVar6 != -1)
							{
							}
							else
							{
								iVar0++;
							}
							if (iVar5 != -1 && iVar6 != -1)
							{
								func_1499(uParam2, iVar5, 1, iVar6);
								uParam1->f_2752.f_7 = iVar5;
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_1011(var uParam0)
{
	if (__LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2645) && __LIB_12__::func_296(&(uParam0->f_3310), uParam0->f_114.f_2646))
	{
		if (!__LIB_0__::func_75(&(uParam0->f_114.f_2647)) || __LIB_0__::func_265(&(uParam0->f_114.f_2647)) >= 0f)
		{
			if (__LIB_12__::func_394(&(uParam0->f_3310), uParam0->f_114.f_2645))
			{
				func_1499(&(uParam0->f_3310), uParam0->f_114.f_2645, 1, uParam0->f_114.f_2646);
				__LIB_0__::func_268(&(uParam0->f_114.f_2647), -100000f);
			}
		}
		if (!__LIB_0__::func_75(&(uParam0->f_114.f_2650)) || __LIB_0__::func_265(&(uParam0->f_114.f_2650)) >= 0f)
		{
			if (__LIB_12__::func_394(&(uParam0->f_3310), uParam0->f_114.f_2646))
			{
				func_1499(&(uParam0->f_3310), uParam0->f_114.f_2646, 0, uParam0->f_114.f_2645);
				__LIB_0__::func_268(&(uParam0->f_114.f_2650), -100000f);
			}
		}
	}
}

int func_1012(var uParam0)
{
	return uParam0->f_114.f_2645;
}

int func_1013(var uParam0)
{
	return uParam0->f_114.f_2646;
}

void func_1014(var uParam0)
{
	uParam0->f_114.f_2645 = -1;
	uParam0->f_114.f_2646 = -1;
}

void func_1015(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_114.f_2645 = iParam1;
	uParam0->f_114.f_2646 = iParam2;
	__LIB_1__::func_148(&(uParam0->f_114.f_2647));
	__LIB_0__::func_268(&(uParam0->f_114.f_2650), -0.5f);
}

void func_1016(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	if (uParam0->f_3310.f_40)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam1->f_2545[iVar0] != -1)
		{
			if (__LIB_12__::func_296(&(uParam0->f_3310), iVar0) && __LIB_12__::func_394(&(uParam0->f_3310), iVar0))
			{
				if (__LIB_0__::func_265(&(uParam1->f_2559[iVar0 /*3*/])) >= 0f)
				{
					func_1499(&(uParam0->f_3310), iVar0, uParam1->f_2552[iVar0], uParam1->f_2545[iVar0]);
					func_1501(uParam1, iVar0);
				}
			}
			else
			{
				func_1501(uParam1, iVar0);
			}
		}
		iVar0++;
	}
	if (uParam1->f_2010 == 5)
	{
		iVar1 = func_1502(&(uParam1->f_287), uParam1->f_287.f_6, 0, 1, 0);
		iVar2 = func_665(&(uParam1->f_287));
		iVar3 = func_1237(&(uParam1->f_287));
		iVar4 = func_1099(&(uParam1->f_287));
	}
	if (uParam1->f_2010 == 6)
	{
		iVar5 = func_1502(&(uParam1->f_287), uParam1->f_287.f_3, 0, 1, 0);
	}
	uParam1->f_2478 = 0;
	iVar7 = 0;
	while (iVar7 < 6)
	{
		bVar6 = true;
		if ((uParam1->f_287.f_39[iVar7 /*56*/] != -1 && uParam0->f_3310.f_785[iVar7 /*52*/] != 0) && !MISC::IS_BIT_SET(uParam0->f_114.f_1268, iVar7))
		{
			switch (uParam1->f_2010)
			{
				case 1:
				case 2:
				case 3:
					if (uParam1->f_2474 == iVar7)
					{
						bVar6 = false;
					}
					break;
				case 4:
					if (uParam1->f_2474 == iVar7)
					{
						bVar6 = false;
					}
					break;
				case 5:
					if (iVar2 == 1 && func_472(&(uParam1->f_287), iVar7))
					{
						bVar6 = false;
					}
					else if ((iVar3 == 0 || uParam1->f_2011 == 36) || uParam1->f_2011 == 5)
					{
						if (iVar4 == 0 || uParam1->f_287.f_2 == 3)
						{
							if (func_912(&(uParam1->f_287), iVar7))
							{
								bVar6 = false;
							}
						}
						else if (uParam1->f_287.f_2 < 3)
						{
							if (iVar7 == uParam1->f_2474)
							{
								bVar6 = false;
							}
						}
					}
					else if ((iVar7 == uParam1->f_287.f_6 && !(uParam1->f_2011 == 26 && __LIB_0__::func_265(&(uParam1->f_2012)) > 5f)) || (iVar7 == iVar1 && !(uParam1->f_2011 == 26 && __LIB_0__::func_265(&(uParam1->f_2012)) > 10f)))
					{
						bVar6 = false;
					}
					break;
				case 6:
					if (uParam1->f_2474 == iVar7 || (iVar5 == iVar7 && uParam1->f_2011 == 23))
					{
						bVar6 = false;
					}
					break;
				case 7:
					if (uParam1->f_2474 == iVar7 || func_912(&(uParam1->f_287), iVar7))
					{
						bVar6 = false;
					}
					break;
				case 8:
				case 9:
				case 10:
					if (func_912(&(uParam1->f_287), iVar7))
					{
						bVar6 = false;
					}
					break;
				case 11:
					if ((uParam1->f_2474 == iVar7 || __LIB_12__::func_300(&(uParam0->f_3310), iVar7) == 2) || func_783(uParam1))
					{
						bVar6 = false;
					}
					break;
				default:
					bVar6 = false;
					break;
			}
			if (bVar6)
			{
				MISC::SET_BIT(&(uParam1->f_2478), iVar7);
			}
		}
		iVar7++;
	}
	func_1503(&(uParam0->f_3310), uParam1->f_2478, uParam1->f_9);
}

void func_1017(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam2)
	{
		case 1:
			if (__LIB_1__::func_285(&(uParam2->f_3), 1f))
			{
				if ((!__LIB_12__::func_296(&(uParam0->f_3310), uParam2->f_1) || !func_603(&(uParam0->f_3310), uParam2->f_1)) || __LIB_1__::func_285(&(uParam2->f_3), 5f))
				{
					func_1504(uParam0, uParam2->f_2, uParam2->f_1);
					func_1505(uParam1);
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&(uParam2->f_3), 1f))
			{
				if ((!__LIB_12__::func_296(&(uParam0->f_3310), uParam2->f_1) || !func_603(&(uParam0->f_3310), uParam2->f_1)) || __LIB_1__::func_285(&(uParam2->f_3), 5f))
				{
					func_1506(uParam0, uParam2->f_1);
					func_1505(uParam1);
				}
			}
			break;
	}
}

void func_1018(var uParam0)
{
	switch (uParam0->f_2653)
	{
		case 0:
			break;
		case 2:
			break;
		case 3:
			func_1020(uParam0, 2);
			break;
	}
}

void func_1020(var uParam0, int iParam1)
{
	if (uParam0->f_2654 < iParam1)
	{
		uParam0->f_2654 = iParam1;
	}
}

void func_1021(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_280[iParam1])
	{
	}
	if (iParam2 == 0)
	{
	}
	uParam0->f_165[iParam1 /*19*/] = 2;
	StringCopy(&(uParam0->f_165[iParam1 /*19*/].f_1), func_1403(iParam2), 128);
	uParam0->f_165[iParam1 /*19*/].f_18 = iParam2;
	uParam0->f_280[iParam1] = 1;
}

void func_1022(var uParam0, int iParam1)
{
	if (uParam0->f_280[iParam1])
	{
	}
	uParam0->f_165[iParam1 /*19*/] = 0;
	uParam0->f_280[iParam1] = 1;
}

void func_1023(var uParam0, int iParam1)
{
	if (!uParam0->f_280[iParam1])
	{
		return;
	}
	uParam0->f_50[iParam1 /*19*/] = { uParam0->f_165[iParam1 /*19*/] };
	uParam0->f_280[iParam1] = 0;
}

void func_1024(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	if (!func_472(uParam1, iParam2))
	{
		*uParam3 = 6;
		*uParam4 = 0;
		*uParam5 = 0;
	}
	else
	{
		func_1507(uParam0, iParam2, func_1200(uParam1, iParam2), uParam3, uParam4, uParam5);
	}
}

void func_1038(var uParam0)
{
	func_582(&(uParam0->f_114));
}

void func_1039(var uParam0)
{
	if (uParam0->f_114.f_2864 != 0)
	{
		UIFEED::_0x2F901291EF177B02(uParam0->f_114.f_2864, 1);
		uParam0->f_114.f_2864 = 0;
	}
}

void func_1040(var uParam0, var uParam1)
{
	var uVar0;
	int iVar3;
	int iVar4;
	if (uParam0->f_2752 == 0)
	{
	}
	else
	{
		if (uParam0->f_2752 == 2)
		{
			if (func_1494(uParam0->f_2752.f_1, &uVar0))
			{
				__LIB_5__::func_239(&uVar0, 0, 0);
			}
		}
		iVar3 = 0;
		while (iVar3 < 6)
		{
			if (MISC::IS_BIT_SET(uParam0->f_2752.f_6, iVar3) && __LIB_12__::func_296(uParam1, iVar3))
			{
				iVar4 = func_149(uParam1, iVar3);
				__LIB_9__::func_334(&(uParam0->f_2752.f_8), iVar4);
			}
			iVar3++;
		}
		func_1496(uParam0, 0);
		uParam0->f_2752.f_1 = 16;
		uParam0->f_2752.f_6 = 0;
		uParam0->f_2752.f_7 = -1;
	}
}

void func_1042(var uParam0)
{
	if (func_1043(uParam0))
	{
		func_479(uParam0, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_135))
	{
		CAM::DESTROY_CAM(uParam0->f_135, false);
	}
}

bool func_1043(var uParam0)
{
	if (uParam0->f_128 != -1 || uParam0->f_129 != -1)
	{
		return true;
	}
	return false;
}

void func_1044(var uParam0)
{
	uParam0->f_281 = 0;
	uParam0->f_281.f_2 = 0;
	uParam0->f_281.f_4 = 0;
	__LIB_1__::func_748(&(uParam0->f_281.f_14), 1, 1);
	__LIB_1__::func_748(&(uParam0->f_281.f_15), 1, 1);
	__LIB_1__::func_748(&(uParam0->f_281.f_16), 1, 1);
}

bool func_1045(var uParam0)
{
	return uParam0->f_312 != 0;
}

void func_1046(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_34)
	{
		func_1514(uParam0, iVar0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	uParam0->f_151 = 0;
}

void func_1049(var uParam0, int iParam1)
{
	uParam0->f_157 = iParam1;
}

int func_1050(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_39[iParam1 /*56*/] != -1)
	{
		return 0;
	}
	uParam0->f_39[iParam1 /*56*/] = iParam1;
	uParam0->f_39[iParam1 /*56*/].f_2 = iParam2;
	uParam0->f_39[iParam1 /*56*/].f_3 = 0;
	uParam0->f_39[iParam1 /*56*/].f_4 = 0;
	uParam0->f_39[iParam1 /*56*/].f_5 = 0;
	uParam0->f_39[iParam1 /*56*/].f_6 = -1;
	uParam0->f_39[iParam1 /*56*/].f_7.f_23 = 0;
	uParam0->f_39[iParam1 /*56*/].f_31.f_24 = -1;
	uParam0->f_39[iParam1 /*56*/].f_31.f_23 = 0;
	return 1;
}

int func_1051(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_1074(uParam0, iParam1))
	{
	}
	else if (iParam2 == 0)
	{
	}
	else
	{
		uParam0->f_486[iParam1] = iParam2;
		if (bParam3)
		{
			if (uParam0->f_537 != -1)
			{
			}
			uParam0->f_537 = iParam1;
		}
		if (uParam0->f_537 == iParam1)
		{
			uParam0->f_534 = 0;
		}
		else
		{
			uParam0->f_512[iParam1 /*2*/] = 0;
		}
		if (uParam0->f_537 == iParam1)
		{
			func_1517(uParam0);
		}
		else
		{
			func_1518(uParam0, iParam1);
		}
		return 1;
	}
	return 0;
}

int func_1069(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	if (bParam6)
	{
		iVar1 = uParam0->f_73[iParam1 /*30*/].f_5[iParam2];
		iVar2 = uParam0->f_73[iParam1 /*30*/].f_10[iParam2];
		if (iParam7 != 0)
		{
			iVar0 = iParam7;
		}
		else if (iVar2 > 0 && iVar1 != iParam3)
		{
			iVar0 = 3;
		}
		else if (iVar2 < iParam4)
		{
			iVar0 = 1;
		}
		else if (iVar2 > iParam4)
		{
			iVar0 = 2;
		}
		else
		{
			return 1;
		}
		__LIB_12__::func_399(uParam0, iParam1, iParam2, iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_73[iParam1 /*30*/][iParam2]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_73[iParam1 /*30*/][iParam2]));
		AUDIO::_0x341CDD17EFC2472E(iParam1, iParam2);
	}
	iVar3 = 0;
	if (iParam5 > 0)
	{
		iVar4 = uParam0->f_692;
		if (!func_1525(uParam0, iParam1, iParam2, &vVar5, &vVar8, 0, 1))
		{
			return 0;
		}
		iVar3 = OBJECT::CREATE_OBJECT(iVar4, vVar5, false, true, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			return 0;
		}
		ENTITY::SET_ENTITY_COORDS(iVar3, vVar5, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iVar3, vVar8, 2, true);
		ENTITY::SET_ENTITY_COLLISION(iVar3, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
		AUDIO::_0x06C5DF5EE444BC6B(iParam1, iParam2, vVar5);
		if (bParam6)
		{
			ENTITY::SET_ENTITY_ALPHA(iVar3, 0, false);
		}
		__LIB_9__::func_932(iVar3, iParam5, 0);
		__LIB_12__::func_400(iVar3, iParam3);
	}
	uParam0->f_73[iParam1 /*30*/][iParam2] = iVar3;
	uParam0->f_73[iParam1 /*30*/].f_5[iParam2] = iParam3;
	uParam0->f_73[iParam1 /*30*/].f_10[iParam2] = iParam4;
	return 1;
}

bool func_1074(var uParam0, int iParam1)
{
	return uParam0->f_486[iParam1] == 0;
}

bool func_1079(var uParam0, int iParam1, var uParam2)
{
	if (uParam0->f_493[iParam1 /*3*/] == 2)
	{
		*uParam2 = { uParam0->f_493[iParam1 /*3*/] };
		uParam0->f_493[iParam1 /*3*/] = 0;
		return true;
	}
	return false;
}

void func_1080(var uParam0, int iParam1)
{
	func_1538(uParam0, iParam1);
	func_1539(uParam0, iParam1);
}

void func_1081(var uParam0, int iParam1)
{
	uParam0->f_535 = iParam1;
}

bool func_1082(var uParam0, int iParam1, var uParam2)
{
	if (uParam0->f_493[iParam1 /*3*/] == 1)
	{
		*uParam2 = { uParam0->f_493[iParam1 /*3*/] };
		uParam0->f_493[iParam1 /*3*/] = 0;
		return true;
	}
	return false;
}

int func_1083(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (uParam0->f_39[iVar1 /*56*/] != -1)
		{
			if (uParam0->f_39[iVar1 /*56*/].f_6 == 0 || uParam0->f_39[iVar1 /*56*/].f_6 == 2)
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_1085(var uParam0, int iParam1, int iParam2, struct<2> Param3, struct<2> Param5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar2))
		{
			if (iVar2 == iParam2)
			{
				iVar1 = iVar0;
			}
			iVar0++;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	*(uParam0[iVar1 * 2 /*2*/]) = { Param3 };
	*(uParam0[iVar1 * 2 + 1 /*2*/]) = { Param5 };
}

void func_1086(var uParam0, int iParam1, struct<2> Param2, struct<2> Param4, struct<2> Param6, struct<2> Param8, struct<2> Param10)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	*(uParam0[iVar0 * 2 /*2*/]) = { Param2 };
	*(uParam0[iVar0 * 2 + 1 /*2*/]) = { Param4 };
	*(uParam0[iVar0 * 2 + 2 /*2*/]) = { Param6 };
	*(uParam0[iVar0 * 2 + 3 /*2*/]) = { Param8 };
	*(uParam0[iVar0 * 2 + 4 /*2*/]) = { Param10 };
}

void func_1087(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1[6];
	int iVar8;
	struct<24> Var9;
	var uVar154;
	int iVar178;
	struct<25> Var179;
	int iVar330;
	struct<2> Var331;
	struct<2> Var333;
	int iVar335;
	int iVar336;
	iVar0 = 0;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar8))
		{
			iVar1[iVar8] = iVar0;
			iVar0++;
		}
		iVar8++;
	}
	Var9 = 6;
	Var9.f_1 = 11;
	Var9.f_1.f_24 = 11;
	Var9.f_1.f_24.f_24 = 11;
	Var9.f_1.f_24.f_24.f_24 = 11;
	Var9.f_1.f_24.f_24.f_24.f_24 = 11;
	Var9.f_1.f_24.f_24.f_24.f_24.f_24 = 11;
	uVar154 = 11;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar8))
		{
			iVar178 = iVar1[iVar8];
			__LIB_12__::func_431(&(Var9[iVar8 /*24*/]), uParam0[iVar178 * 2 /*2*/]);
			__LIB_12__::func_431(&(Var9[iVar8 /*24*/]), uParam0[iVar178 * 2 + 1 /*2*/]);
		}
		iVar8++;
	}
	__LIB_12__::func_431(&uVar154, uParam0[iVar0 * 2 /*2*/]);
	__LIB_12__::func_431(&uVar154, uParam0[iVar0 * 2 + 1 /*2*/]);
	__LIB_12__::func_431(&uVar154, uParam0[iVar0 * 2 + 2 /*2*/]);
	__LIB_12__::func_431(&uVar154, uParam0[iVar0 * 2 + 3 /*2*/]);
	__LIB_12__::func_431(&uVar154, uParam0[iVar0 * 2 + 4 /*2*/]);
	Var179 = 6;
	Var179.f_1 = 11;
	Var179.f_1.f_25 = 11;
	Var179.f_1.f_25.f_25 = 11;
	Var179.f_1.f_25.f_25.f_25 = 11;
	Var179.f_1.f_25.f_25.f_25.f_25 = 11;
	Var179.f_1.f_25.f_25.f_25.f_25.f_25 = 11;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar8))
		{
			MINIGAME::_0x32A7C216344D623B(&(Var9[iVar8 /*24*/]), &uVar154, &(Var179[iVar8 /*25*/]));
		}
		iVar8++;
	}
	iVar330 = -1;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar8))
		{
			if (iVar330 == -1 || __LIB_12__::func_401(&(Var179[iVar8 /*25*/]), &(Var179[iVar330 /*25*/])) > 0)
			{
				iVar330 = iVar8;
			}
		}
		iVar8++;
	}
	iVar335 = iVar1[iVar330];
	iVar336 = iVar1[iParam2];
	Var331 = { *(uParam0[iVar335 * 2 /*2*/]) };
	Var333 = { *(uParam0[iVar335 * 2 + 1 /*2*/]) };
	*(uParam0[iVar335 * 2 /*2*/]) = { *(uParam0[iVar336 * 2 /*2*/]) };
	*(uParam0[iVar335 * 2 + 1 /*2*/]) = { *(uParam0[iVar336 * 2 + 1 /*2*/]) };
	*(uParam0[iVar336 * 2 /*2*/]) = { Var331 };
	*(uParam0[iVar336 * 2 + 1 /*2*/]) = { Var333 };
}

int func_1088(var uParam0, int iParam1)
{
	struct<2> Var0;
	if (func_1102(uParam0, iParam1, &Var0) && Var0 == 1)
	{
		func_1103(uParam0, iParam1, &Var0);
		return Var0.f_1;
	}
	return 0;
}

void func_1089(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (uParam0->f_536 != 0)
	{
	}
	uParam0->f_536 = iParam1;
}

void func_1090(var uParam0)
{
	int iVar0;
	uParam0->f_7 = 0;
	uParam0->f_8 = uParam0->f_10;
	uParam0->f_715 = 0;
	uParam0->f_6 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_1542(&(uParam0->f_39[iVar0 /*56*/]));
		iVar0++;
	}
	func_587(uParam0);
}

bool func_1091(var uParam0)
{
	int iVar0;
	var uVar1;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 1:
			iVar0 = 3;
			break;
		case 2:
		case 3:
			iVar0 = 1;
			break;
		default:
			return true;
	}
	iVar3 = 0;
	while (iVar3 < iVar0)
	{
		if (!__LIB_4__::func_895(&(uParam0->f_606), &uVar1))
		{
			return false;
		}
		else
		{
			__LIB_12__::func_431(&(uParam0->f_15), &uVar1);
			iVar4 = 0;
			while (iVar4 < 6)
			{
				if (func_912(uParam0, iVar4))
				{
					func_1544(&(uParam0->f_39[iVar4 /*56*/].f_31), &uVar1);
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return true;
}

bool func_1092(var uParam0, int* iParam1)
{
	int iVar0[6];
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	iVar7 = 0;
	iVar8 = func_1100(uParam0->f_3);
	while (true)
	{
		if (func_143(uParam0, iVar8) && func_144(uParam0, iVar8) > 0)
		{
			iVar0[iVar7] = iVar8;
			iVar7++;
		}
		if (iVar8 != uParam0->f_3)
		{
			iVar8 = func_1100(iVar8);
		}
	else
	{
		}
	else
	{
		}
	}
	if (iVar7 < 2)
	{
		uParam0->f_733 = 2120539167;
		return false;
	}
	iVar9 = 0;
	iVar10 = iVar0[iVar9];
	uParam0->f_3 = iVar10;
	iVar9 = (func_1545(&iVar0, iVar7, iVar10) + 1 % iVar7);
	bVar11 = iVar7 == 2;
	iVar12 = __LIB_0__::func_55(bVar11, iVar10, iVar0[iVar9]);
	uParam0->f_4 = iVar12;
	iVar9 = (func_1545(&iVar0, iVar7, iVar12) + 1 % iVar7);
	iVar13 = iVar0[iVar9];
	uParam0->f_5 = iVar13;
	iVar14 = __LIB_0__::func_259(uParam0->f_39[iVar12 /*56*/].f_2, uParam0->f_9);
	if (bVar11)
	{
		iVar14 = __LIB_0__::func_259(uParam0->f_39[iVar13 /*56*/].f_2, iVar14);
	}
	iVar15 = __LIB_0__::func_55((bVar11 && uParam0->f_39[iVar12 /*56*/].f_2 == iVar14), iVar14, __LIB_0__::func_259(uParam0->f_39[iVar13 /*56*/].f_2, uParam0->f_10));
	iVar16 = func_1547(uParam0);
	uParam0->f_7 = __LIB_0__::func_259(uParam0->f_10, iVar16);
	if (!func_1548(&(uParam0->f_39[iVar12 /*56*/]), iVar14))
	{
		return false;
	}
	uParam0->f_39[iVar12 /*56*/].f_5 = uParam0->f_39[iVar12 /*56*/].f_2 != 0;
	if (!func_1548(&(uParam0->f_39[iVar13 /*56*/]), iVar15))
	{
		return false;
	}
	uParam0->f_39[iVar13 /*56*/].f_5 = uParam0->f_39[iVar13 /*56*/].f_2 != 0;
	if (func_795(uParam0) == 1)
	{
		iVar17 = 0;
		while (iVar17 < 6)
		{
			if (func_143(uParam0, iVar17) && func_144(uParam0, iVar17) > 0)
			{
				uParam0->f_39[iVar17 /*56*/].f_5 = 0;
			}
			iVar17++;
		}
	}
	*iParam1 = 0;
	iVar17 = 0;
	while (iVar17 < iVar7)
	{
		MISC::SET_BIT(iParam1, iVar0[iVar17]);
		iVar17++;
	}
	return true;
}

bool func_1093(var uParam0, int iParam1)
{
	var uVar0;
	var uVar2;
	int iVar4;
	iVar4 = 0;
	while (iVar4 < 6)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar4))
		{
			if (!__LIB_4__::func_895(&(uParam0->f_606), &uVar0) || !__LIB_4__::func_895(&(uParam0->f_606), &uVar2))
			{
				return false;
			}
			else
			{
				uParam0->f_39[iVar4 /*56*/].f_6 = 0;
				__LIB_12__::func_431(&(uParam0->f_39[iVar4 /*56*/].f_7), &uVar0);
				__LIB_12__::func_431(&(uParam0->f_39[iVar4 /*56*/].f_7), &uVar2);
				func_1544(&(uParam0->f_39[iVar4 /*56*/].f_31), &uVar0);
				func_1544(&(uParam0->f_39[iVar4 /*56*/].f_31), &uVar2);
			}
		}
		iVar4++;
	}
	return true;
}

void func_1094(var uParam0)
{
	var uVar0;
	int iVar8;
	int iVar9;
	int iVar10;
	if (func_472(uParam0, uParam0->f_714) && uParam0->f_713 == 3)
	{
		func_1549(uParam0, uParam0->f_714, 0);
	}
	uVar0 = 6;
	iVar10 = (uParam0->f_485 - 1);
	while (iVar10 >= 0)
	{
		if (uParam0->f_716.f_7 > 0)
		{
			iVar8 = uParam0->f_716[(uParam0->f_716.f_7 - 1)];
		}
		else
		{
			iVar8 = uParam0->f_3;
		}
		func_1550(uParam0, &(uParam0->f_376[iVar10 /*18*/]), iVar8, &uVar0);
		iVar9 = 0;
		while (iVar9 < uVar0.f_7)
		{
			func_1549(uParam0, uVar0[iVar9], 1);
			iVar9++;
		}
		iVar10 = (iVar10 - 1);
	}
}

int func_1095(var uParam0)
{
	var uVar0;
	int iVar1;
	if (uParam0->f_716.f_7 <= 0)
	{
		return -1;
	}
	uVar0 = uParam0->f_716[0];
	uParam0->f_716.f_7 = (uParam0->f_716.f_7 - 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_716.f_7)
	{
		uParam0->f_716[iVar1] = uParam0->f_716[iVar1 + 1];
		iVar1++;
	}
	return uVar0;
}

bool func_1096(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (iParam1 < 0 || iParam1 >= uParam0->f_485)
	{
		return false;
	}
	else if (iParam2 < 0 || iParam2 >= 6)
	{
		return false;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_376[iParam1 /*18*/].f_9)
		{
			if (uParam0->f_376[iParam1 /*18*/].f_2[iVar0] == iParam2)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_1097(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < uParam1->f_9)
	{
		iVar1 = uParam1->f_2[iVar0];
		if (func_1101(uParam0, iVar1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1098(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = 0;
	while (iVar1 < uParam1->f_9)
	{
		iVar0 = uParam1->f_2[iVar1];
		if (func_912(uParam0, iVar0))
		{
			if (uParam1->f_17 == 0)
			{
				uParam1->f_10[0] = iVar0;
				uParam1->f_17 = 1;
			}
			else
			{
				iVar2 = uParam1->f_10[0];
				iVar3 = __LIB_12__::func_401(&(uParam0->f_39[iVar0 /*56*/].f_31), &(uParam0->f_39[iVar2 /*56*/].f_31));
				if (iVar3 > 0)
				{
					uParam1->f_10[0] = iVar0;
					uParam1->f_17 = 1;
				}
				else if (iVar3 == 0)
				{
					uParam1->f_10[uParam1->f_17] = iVar0;
					uParam1->f_17++;
				}
			}
		}
		iVar1++;
	}
	if (uParam1->f_17 > 0)
	{
		iVar4 = (*uParam1 / uParam1->f_17);
		iVar1 = 0;
		while (iVar1 < uParam1->f_17)
		{
			uParam0->f_39[uParam1->f_10[iVar1] /*56*/].f_2 = (uParam0->f_39[uParam1->f_10[iVar1] /*56*/].f_2 + iVar4);
			iVar1++;
		}
	}
}

int func_1099(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if ((uParam0->f_39[iVar1 /*56*/] != -1 && uParam0->f_39[iVar1 /*56*/].f_6 == 0) && uParam0->f_39[iVar1 /*56*/].f_2 != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1100(int iParam0)
{
	return (iParam0 + 1 % 6);
}

bool func_1101(var uParam0, int iParam1)
{
	if (uParam0->f_39[iParam1 /*56*/] != -1)
	{
		if (uParam0->f_2 == 4)
		{
			if (uParam0->f_39[iParam1 /*56*/].f_6 == 0)
			{
				return true;
			}
		}
		else if ((uParam0->f_39[iParam1 /*56*/].f_6 == 0 && uParam0->f_39[iParam1 /*56*/].f_2 != 0) && (uParam0->f_39[iParam1 /*56*/].f_4 < uParam0->f_7 || uParam0->f_39[iParam1 /*56*/].f_5))
		{
			return true;
		}
	}
	return false;
}

bool func_1102(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 == uParam0->f_537)
	{
		if (uParam0->f_534 <= 0)
		{
			return false;
		}
		*uParam2 = { uParam0->f_525[0 /*2*/] };
		return true;
	}
	if (uParam0->f_512[iParam1 /*2*/] == 0)
	{
		return false;
	}
	*uParam2 = { uParam0->f_512[iParam1 /*2*/] };
	return true;
}

bool func_1103(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (iParam1 == uParam0->f_537)
	{
		if (uParam0->f_534 <= 0)
		{
			return false;
		}
		*iParam2 = { uParam0->f_525[0 /*2*/] };
		if (uParam0->f_534 > 1)
		{
			iVar0 = 0;
			while (iVar0 < (uParam0->f_534 - 1))
			{
				uParam0->f_525[iVar0 /*2*/] = { uParam0->f_525[iVar0 + 1 /*2*/] };
				iVar0++;
			}
		}
		uParam0->f_525[(uParam0->f_534 - 1) /*2*/] = 0;
		uParam0->f_534 = (uParam0->f_534 - 1);
		return true;
	}
	if (uParam0->f_512[iParam1 /*2*/] == 0)
	{
		return false;
	}
	*iParam2 = { uParam0->f_512[iParam1 /*2*/] };
	uParam0->f_512[iParam1 /*2*/] = 0;
	return true;
}

bool func_1104(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	if (uParam0->f_6 == -1)
	{
		return false;
	}
	if (!func_143(uParam0, uParam0->f_6))
	{
		return false;
	}
	if (!func_1551(uParam0, uParam1, uParam2))
	{
		return false;
	}
	switch (*uParam2)
	{
		case 3:
			iVar1 = __LIB_0__::func_259(uParam1->f_2, (uParam0->f_7 - uParam1->f_4));
			if (iVar1 > 0 && !func_1548(uParam1, iVar1))
			{
				return false;
			}
			uParam1->f_5 = 0;
			break;
		case 4:
			bVar0 = uParam2->f_1 != false;
			if (uParam1->f_4 < uParam0->f_7 && bVar0)
			{
				uParam1->f_6 = 1;
			}
			uParam1->f_5 = 0;
			break;
		case 5:
			uParam1->f_6 = 1;
			uParam1->f_5 = 0;
			break;
		case 2:
			iVar1 = ((uParam0->f_7 + uParam2->f_1) - uParam1->f_4);
			if (!func_1548(uParam1, iVar1))
			{
				return false;
			}
			uParam0->f_7 = (uParam0->f_7 + uParam2->f_1);
			uParam0->f_8 = __LIB_5__::func_723(uParam0->f_8, uParam2->f_1);
			uParam0->f_715++;
			iVar2 = 0;
			while (iVar2 < 6)
			{
				if (func_143(uParam0, iVar2))
				{
					if (*uParam1 == iVar2)
					{
						uParam0->f_39[iVar2 /*56*/].f_5 = 0;
					}
					else if (uParam0->f_557.f_3 == 1312290981 && uParam0->f_715 >= uParam0->f_599)
					{
						uParam0->f_39[iVar2 /*56*/].f_5 = 0;
					}
					else if (uParam2->f_1 >= uParam0->f_8)
					{
						uParam0->f_39[iVar2 /*56*/].f_5 = uParam0->f_39[iVar2 /*56*/].f_2 != 0;
					}
				}
				iVar2++;
			}
			uParam0->f_714 = uParam0->f_6;
			uParam0->f_713 = uParam0->f_2;
			break;
		case 6:
			uParam1->f_6 = 2;
			break;
	}
	return true;
}

void func_1105(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = -1267385353;
	MINIGAME::_0xE1F365C4C8F259D8(iVar0, &iVar0, 1);
}

bool func_1106(var uParam0)
{
	if (uParam0->f_714 == uParam0->f_6 && uParam0->f_713 == uParam0->f_2)
	{
		return true;
	}
	return false;
}

void func_1107(var uParam0, int iParam1)
{
	int iVar0;
	if (iParam1 == uParam0->f_537)
	{
		iVar0 = -1657573670;
		MINIGAME::_0xE1F365C4C8F259D8(iVar0, &iVar0, 1);
	}
}

bool func_1108(var uParam0, int iParam1)
{
	return (uParam0->f_39[iParam1 /*56*/].f_6 == 0 && uParam0->f_39[iParam1 /*56*/].f_2 != 0);
}

void func_1109(var uParam0, int iParam1)
{
	if (uParam0->f_7 >= 6)
	{
		return;
	}
	(*uParam0)[uParam0->f_7] = iParam1;
	uParam0->f_7++;
}

int func_1110(var uParam0, int iParam1)
{
	if (iParam1 <= uParam0->f_4)
	{
		uParam0->f_2 = (uParam0->f_2 + iParam1);
		uParam0->f_3 = (uParam0->f_3 - iParam1);
		uParam0->f_4 = (uParam0->f_4 - iParam1);
		return 1;
	}
	return 0;
}

void func_1111(var uParam0)
{
	vector3 vVar0;
	vector3 vVar20;
	int iVar40;
	int iVar41;
	bool bVar42;
	int iVar43;
	int iVar44;
	vector3 vVar45;
	int iVar48;
	vVar0 = 6;
	vVar20 = 6;
	vVar0.f_19 = 0;
	vVar20.f_19 = 0;
	iVar40 = 0;
	while (iVar40 < 6)
	{
		if (func_387(uParam0, iVar40))
		{
			func_1553(&vVar0, &(uParam0->f_39[iVar40 /*56*/]));
		}
		else if (func_1554(uParam0, iVar40))
		{
			func_1555(&vVar0, &(uParam0->f_538[iVar40 /*3*/]));
		}
		iVar40++;
	}
	iVar41 = 0;
	while (iVar41 < vVar0.f_19)
	{
		if (vVar0[iVar41 /*3*/].f_2 == 0 && vVar0[iVar41 /*3*/].f_1 > 0)
		{
			func_1555(&vVar20, &(vVar0[iVar41 /*3*/]));
		}
		iVar41++;
	}
	bVar42 = false;
	while (!bVar42)
	{
		bVar42 = true;
		iVar41 = 0;
		while (iVar41 < (vVar20.f_19 - 1))
		{
			iVar43 = vVar20[iVar41 /*3*/].f_1;
			iVar44 = vVar20[iVar41 + 1 /*3*/].f_1;
			if (iVar43 > iVar44)
			{
				vVar45 = { vVar20[iVar41 /*3*/] };
				vVar20[iVar41 /*3*/] = { vVar20[iVar41 + 1 /*3*/] };
				vVar20[iVar41 + 1 /*3*/] = { vVar45 };
				bVar42 = false;
			}
			iVar41++;
		}
	}
	iVar48 = 0;
	while (iVar48 < vVar20.f_19)
	{
		iVar41 = 0;
		while (iVar41 < vVar0.f_19)
		{
			if (vVar0[iVar41 /*3*/].f_1 == 0)
			{
				func_1556(&vVar0, iVar41);
			}
			else
			{
				iVar41++;
			}
		}
		func_1557(uParam0, &vVar0, &vVar20, vVar20[iVar48 /*3*/].f_1, 1);
		iVar48++;
	}
	iVar41 = 0;
	while (iVar41 < vVar0.f_19)
	{
		if (vVar0[iVar41 /*3*/].f_1 == 0)
		{
			func_1556(&vVar0, iVar41);
		}
		else
		{
			iVar41++;
		}
	}
	func_1557(uParam0, &vVar0, &vVar20, uParam0->f_7, 0);
}

void func_1112(var uParam0, var uParam1)
{
	struct<2> Var0;
	Var0 = 308196724;
	Var0.f_1 = uParam1;
	MINIGAME::_0xE1F365C4C8F259D8(Var0, &Var0, 2);
}

bool func_1114(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = __LIB_12__::func_402(uParam2);
	iVar1 = __LIB_12__::func_402(uParam3);
	if (iVar0 + iVar1) != (iParam0 + iParam1)
	{
		return false;
	}
	iVar2 = (iParam0 - iVar0);
	if (iVar2 > 0)
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			if (iVar2 > 0)
			{
				iVar3 = __LIB_0__::func_259(iVar2, (*uParam3)[iVar5]);
				(*uParam2)[iVar5] = ((*uParam2)[iVar5] + iVar3);
				(*uParam3)[iVar5] = ((*uParam3)[iVar5] - iVar3);
				iVar2 = (iVar2 - iVar3);
			}
			iVar5++;
		}
	}
	else if (iVar2 < 0)
	{
		iVar2 = -iVar2;
		iVar4 = 0;
		while (iVar4 < 4)
		{
			iVar5 = (3 - iVar4);
			if (iVar2 > 0)
			{
				iVar3 = __LIB_0__::func_259(iVar2, (*uParam2)[iVar5]);
				(*uParam3)[iVar5] = ((*uParam3)[iVar5] + iVar3);
				(*uParam2)[iVar5] = ((*uParam2)[iVar5] - iVar3);
				iVar2 = (iVar2 - iVar3);
			}
			iVar4++;
		}
	}
	return true;
}

void func_1115(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_42[iParam1 /*5*/][iVar0] = (*uParam2)[iVar0];
		iVar0++;
	}
}

void func_1116(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((*uParam3)[iVar0] > 0)
		{
			func_1164(uParam0, iParam1, iVar0, (*uParam2)[iVar0], (*uParam3)[iVar0], __LIB_12__::func_253((*uParam2)[iVar0], (*uParam3)[iVar0], 10), bParam4, 0);
		}
		else
		{
			__LIB_18__::func_556(uParam0, iParam1, iVar0, bParam4);
		}
		iVar0++;
	}
}

bool func_1118(var uParam0, int iParam1, int iParam2, float fParam3, var uParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	if (iParam2 == 0)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.1398f, 0.3457f, 0.803f };
			vVar4 = { 0f, 0f, 177.1619f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.0686f, 0.3527f, 0.803f };
			vVar4 = { 0f, 0f, 179.3696f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.0038f, 0.35f, 0.803f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.0748f, 0.3543f, 0.803f };
			vVar4 = { 0f, 0f, 178.0068f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.1462f, 0.3533f, 0.803f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 1)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.3693f, 0.0518f, 0.803f };
			vVar4 = { 0f, 0f, 117.1619f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.3397f, 0.1169f, 0.803f };
			vVar4 = { 0f, 0f, 119.3696f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.3012f, 0.1783f, 0.803f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.2694f, 0.2419f, 0.803f };
			vVar4 = { 0f, 0f, 118.0068f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { 0.2328f, 0.3032f, 0.803f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 2)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.2295f, -0.2939f, 0.803f };
			vVar4 = { 0f, 0f, 57.1619f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.2711f, -0.2358f, 0.803f };
			vVar4 = { 0f, 0f, 59.3696f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.305f, -0.1717f, 0.803f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.3442f, -0.1124f, 0.803f };
			vVar4 = { 0f, 0f, 58.0068f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { 0.379f, -0.05f, 0.803f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 3)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.1398f, -0.3457f, 0.803f };
			vVar4 = { 0f, 0f, -2.8381f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.0686f, -0.3527f, 0.803f };
			vVar4 = { 0f, 0f, -0.6304f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.0038f, -0.35f, 0.803f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.0748f, -0.3543f, 0.803f };
			vVar4 = { 0f, 0f, -1.9932f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { 0.1462f, -0.3533f, 0.803f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 4)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.3693f, -0.0518f, 0.803f };
			vVar4 = { 0f, 0f, -62.8381f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.3397f, -0.1169f, 0.803f };
			vVar4 = { 0f, 0f, -60.6304f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.3012f, -0.1783f, 0.803f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.2694f, -0.2419f, 0.803f };
			vVar4 = { 0f, 0f, -61.9932f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.2328f, -0.3032f, 0.803f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 5)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.2295f, 0.2939f, 0.803f };
			vVar4 = { 0f, 0f, -122.8381f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.2711f, 0.2358f, 0.803f };
			vVar4 = { 0f, 0f, -120.6304f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.305f, 0.1717f, 0.803f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.3442f, 0.1124f, 0.803f };
			vVar4 = { 0f, 0f, -121.9932f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.379f, 0.05f, 0.803f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		vVar1 = { 0f, 0f, (0.8f - 0.05f) };
		vVar4 = { 0f, 0f, 0f };
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bParam5)
		{
			func_531(*uParam0, uParam0->f_3, vVar1, vVar4, fParam3, uParam4);
		}
		else
		{
			*fParam3 = { vVar1 };
			*uParam4 = { vVar4 };
		}
		return true;
	}
	return false;
}

bool func_1119(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, var uParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = false;
	if (iParam3 == 1)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0252f, 0.57f, 0.8033f };
				vVar4 = { 0f, -180f, -172.5264f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0381f, 0.5555f, 0.805f };
				vVar4 = { 0f, 180f, 176.7731f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.481f, 0.3068f, 0.8033f };
				vVar4 = { 0f, -180f, 127.4737f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5001f, 0.2447f, 0.805f };
				vVar4 = { 0f, 180f, 116.7731f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5062f, -0.2631f, 0.8033f };
				vVar4 = { 0f, -180f, 67.4737f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.462f, -0.3108f, 0.805f };
				vVar4 = { 0f, 180f, 56.7731f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0252f, -0.57f, 0.8033f };
				vVar4 = { 0f, -180f, 7.4737f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0381f, -0.5555f, 0.805f };
				vVar4 = { 0f, 180f, -3.2269f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.481f, -0.3068f, 0.8033f };
				vVar4 = { 0f, -180f, -52.5263f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5001f, -0.2447f, 0.805f };
				vVar4 = { 0f, 180f, -63.2269f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5062f, 0.2631f, 0.8033f };
				vVar4 = { 0f, -180f, -112.5264f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.462f, 0.3108f, 0.805f };
				vVar4 = { 0f, 180f, -123.2269f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 2)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0002f, 0.5979f, 0.8033f };
				vVar4 = { 0f, -180f, -173.5319f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0146f, 0.5994f, 0.805f };
				vVar4 = { 0f, 180f, 177.2384f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5177f, 0.2991f, 0.8033f };
				vVar4 = { 0f, -180f, 126.4681f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5264f, 0.2871f, 0.805f };
				vVar4 = { 0f, 180f, 117.2384f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5179f, -0.2988f, 0.8033f };
				vVar4 = { 0f, -180f, 66.4681f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5118f, -0.3123f, 0.805f };
				vVar4 = { 0f, 180f, 57.2384f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0002f, -0.5979f, 0.8033f };
				vVar4 = { 0f, -180f, 6.4681f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0146f, -0.5994f, 0.805f };
				vVar4 = { 0f, 180f, -2.7616f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5177f, -0.2991f, 0.8033f };
				vVar4 = { 0f, -180f, -53.5319f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5264f, -0.2871f, 0.805f };
				vVar4 = { 0f, 180f, -62.7616f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5179f, 0.2988f, 0.8033f };
				vVar4 = { 0f, -180f, -113.5319f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5118f, 0.3123f, 0.805f };
				vVar4 = { 0f, 180f, -122.7616f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 3)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0048f, 0.6125f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, -5.6941f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0198f, 0.613f, 0.8032f };
				vVar4 = { 0f, 0f, 0f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5281f, 0.3104f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, -65.6941f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5408f, 0.2893f, 0.8032f };
				vVar4 = { 0f, 0f, -60f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5328f, -0.3021f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, -125.6941f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.521f, -0.3237f, 0.8032f };
				vVar4 = { 0f, 0f, -120f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0048f, -0.6125f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, 174.3059f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0198f, -0.613f, 0.8032f };
				vVar4 = { 0f, 0f, 180f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5281f, -0.3104f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, 114.3059f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5408f, -0.2893f, 0.8032f };
				vVar4 = { 0f, 0f, 120f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5328f, 0.3021f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, 54.3059f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.521f, 0.3237f, 0.8032f };
				vVar4 = { 0f, 0f, 60f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 4)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0197f, 0.5193f, 0.8014f };
				vVar4 = { 0f, 180f, 135f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0276f, 0.513f, 0.8032f };
				vVar4 = { 0f, 180f, 126.7335f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.4595f, 0.2426f, 0.8014f };
				vVar4 = { 0f, 180f, 75f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.458f, 0.2326f, 0.8032f };
				vVar4 = { 0f, 180f, 66.7335f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.4399f, -0.2767f, 0.8014f };
				vVar4 = { 0f, 180f, 15f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.4304f, -0.2804f, 0.8032f };
				vVar4 = { 0f, 180f, 6.7335f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0197f, -0.5193f, 0.8014f };
				vVar4 = { 0f, 180f, -45f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0276f, -0.513f, 0.8032f };
				vVar4 = { 0f, 180f, -53.2665f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.4595f, -0.2426f, 0.8014f };
				vVar4 = { 0f, 180f, -105f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.458f, -0.2326f, 0.8032f };
				vVar4 = { 0f, 180f, -113.2665f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.4399f, 0.2767f, 0.8014f };
				vVar4 = { 0f, 180f, -165f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.4304f, 0.2804f, 0.8032f };
				vVar4 = { 0f, 180f, -173.2665f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 5)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.2147f, 0.5145f, 0.803f };
				vVar4 = { 0f, -180f, -149.0357f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.2194f, 0.5192f, 0.8034f };
				vVar4 = { 0f, -180f, -145.6939f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5529f, 0.0713f, 0.803f };
				vVar4 = { 0f, -180f, 150.9643f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5593f, 0.0696f, 0.8034f };
				vVar4 = { 0f, -180f, 154.3062f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.3382f, -0.4432f, 0.803f };
				vVar4 = { 0f, -180f, 90.9643f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.3399f, -0.4496f, 0.8034f };
				vVar4 = { 0f, -180f, 94.3061f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.2147f, -0.5145f, 0.803f };
				vVar4 = { 0f, -180f, 30.9643f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.2194f, -0.5192f, 0.8034f };
				vVar4 = { 0f, -180f, 34.3061f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5529f, -0.0713f, 0.803f };
				vVar4 = { 0f, -180f, -29.0357f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5593f, -0.0696f, 0.8034f };
				vVar4 = { 0f, -180f, -25.6939f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.3382f, 0.4432f, 0.803f };
				vVar4 = { 0f, -180f, -89.0357f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.3399f, 0.4496f, 0.8034f };
				vVar4 = { 0f, -180f, -85.6939f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 0)
	{
		vVar1 = { 0f, 0f, (0.8f - 0.05f) };
		vVar4 = { 0f, 0f, 0f };
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bParam6)
		{
			func_531(*uParam0, uParam0->f_3, vVar1, vVar4, fParam4, uParam5);
		}
		else
		{
			*fParam4 = { vVar1 };
			*uParam5 = { vVar4 };
		}
		return true;
	}
	return false;
}

void func_1122(int iParam0, int iParam1)
{
	if (CAM::DOES_CAM_EXIST(iParam0) && CAM::DOES_CAM_EXIST(iParam1))
	{
		CAM::SET_CAM_PARAMS(iParam1, CAM::GET_CAM_COORD(iParam0), CAM::GET_CAM_ROT(iParam0, 2), CAM::GET_CAM_FOV(iParam0), 0, 1, 1, 2, 1, 0);
	}
}

int func_1159(var uParam0, int iParam1, int iParam2)
{
	char cVar0[16];
	char cVar2[16];
	int iVar4;
	int iVar5;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_763))
	{
		return 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_763, uParam0->f_1137[iParam1 /*3*/], uParam0->f_1156[iParam1 /*3*/], 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_763, "plr", uParam0->f_785[iParam1 /*52*/], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_763, "deck", __LIB_12__::func_298(uParam0), 0);
	iVar4 = (iParam1 + 1 % 6);
	iVar5 = 0;
	while (iVar5 < 6)
	{
		if (MISC::IS_BIT_SET(uParam0->f_764, iVar4))
		{
			if (iVar4 == iParam2)
			{
				func_473(uParam0, iVar4, 0, 0, 0);
			}
			else
			{
				func_474(uParam0, iVar4, 0, 0);
			}
			if (iVar4 == iParam1)
			{
				__LIB_12__::func_388(uParam0, iVar4, 2);
			}
			else
			{
				__LIB_12__::func_388(uParam0, iVar4, 1);
			}
			StringCopy(&cVar0, "card1_seat", 16);
			StringCopy(&cVar2, "card2_seat", 16);
			StringIntConCat(&cVar0, iVar5 + 1, 16);
			StringIntConCat(&cVar2, iVar5 + 1, 16);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_763, &cVar0, __LIB_12__::func_358(uParam0, iVar4, 0), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_763, &cVar2, __LIB_12__::func_358(uParam0, iVar4, 1), 0);
		}
		iVar4 = (iVar4 + 1 % 6);
		iVar5++;
	}
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_763);
	return 1;
}

int func_1164(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	if (bParam6)
	{
		iVar1 = uParam0->f_254[iParam1 /*30*/].f_5[iParam2];
		iVar2 = uParam0->f_254[iParam1 /*30*/].f_10[iParam2];
		if (iParam7 != 0)
		{
			iVar0 = iParam7;
		}
		else if (iVar2 > 0 && iVar1 != iParam3)
		{
			iVar0 = 3;
		}
		else if (iVar2 < iParam4)
		{
			if (iVar2 > 0)
			{
				iVar0 = 3;
			}
			else
			{
				iVar0 = 1;
			}
		}
		else if (iVar2 > iParam4)
		{
			iVar0 = 2;
		}
		else
		{
			return 1;
		}
		__LIB_12__::func_403(uParam0, iParam1, iParam2, iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_254[iParam1 /*30*/][iParam2]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_254[iParam1 /*30*/][iParam2]));
	}
	iVar3 = 0;
	if (iParam5 > 0)
	{
		iVar4 = uParam0->f_692;
		if (!func_1574(uParam0, iParam1, iParam2, &vVar5, &vVar8, 0, 1))
		{
			return 0;
		}
		iVar3 = OBJECT::CREATE_OBJECT(iVar4, vVar5, false, true, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			return 0;
		}
		ENTITY::SET_ENTITY_COORDS(iVar3, vVar5, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iVar3, vVar8, 2, true);
		ENTITY::SET_ENTITY_COLLISION(iVar3, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
		if (bParam6)
		{
			ENTITY::SET_ENTITY_ALPHA(iVar3, 0, false);
		}
		__LIB_9__::func_932(iVar3, iParam5, 0);
		__LIB_12__::func_400(iVar3, iParam3);
	}
	uParam0->f_254[iParam1 /*30*/][iParam2] = iVar3;
	uParam0->f_254[iParam1 /*30*/].f_5[iParam2] = iParam3;
	uParam0->f_254[iParam1 /*30*/].f_10[iParam2] = iParam4;
	return 1;
}

void func_1166(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = *iParam3;
	iVar0 = __LIB_12__::func_374(uParam0, iParam1, iVar2);
	iVar1 = uParam2->f_24[iVar2];
	func_1069(uParam0, iParam1, iVar2, iVar0, iVar1, __LIB_12__::func_253(iVar0, iVar1, 10), bParam4, 0);
}

void func_1167(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != *iParam3)
		{
			iVar0 = __LIB_12__::func_374(uParam0, iParam1, iVar2);
			iVar1 = uParam2->f_24[iVar2];
			func_1069(uParam0, iParam1, iVar2, iVar0, iVar1, __LIB_12__::func_253(iVar0, iVar1, 10), bParam4, 0);
		}
		iVar2++;
	}
}

void func_1168(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = *iParam3;
	iVar0 = __LIB_12__::func_374(uParam0, iParam1, iVar2);
	iVar1 = uParam2->f_29[iVar2];
	func_1164(uParam0, iParam1, iVar2, iVar0, iVar1, __LIB_12__::func_253(iVar0, iVar1, 10), bParam4, 0);
}

void func_1169(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != *iParam3)
		{
			iVar0 = __LIB_12__::func_374(uParam0, iParam1, iVar2);
			iVar1 = uParam2->f_29[iVar2];
			func_1164(uParam0, iParam1, iVar2, iVar0, iVar1, __LIB_12__::func_253(iVar0, iVar1, 10), bParam4, 0);
		}
		iVar2++;
	}
}

int func_1175(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	if (bParam6)
	{
		iVar1 = uParam0->f_435[iParam1 /*30*/].f_5[iParam2];
		iVar2 = uParam0->f_435[iParam1 /*30*/].f_10[iParam2];
		if (iParam7 != 0)
		{
			iVar0 = iParam7;
		}
		else if (iVar2 > 0 && iVar1 != iParam3)
		{
			iVar0 = 3;
		}
		else if (iVar2 < iParam4)
		{
			iVar0 = 1;
		}
		else if (iVar2 > iParam4)
		{
			iVar0 = 2;
		}
		else
		{
			return 1;
		}
		__LIB_12__::func_405(uParam0, iParam1, iParam2, iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_435[iParam1 /*30*/][iParam2]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_435[iParam1 /*30*/][iParam2]));
	}
	iVar3 = 0;
	if (iParam5 > 0)
	{
		iVar4 = uParam0->f_692;
		if (!func_1577(uParam0, iParam1, iParam2, &vVar5, &vVar8, 0, 1))
		{
			return 0;
		}
		iVar3 = OBJECT::CREATE_OBJECT(iVar4, vVar5, false, true, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			return 0;
		}
		ENTITY::SET_ENTITY_COORDS(iVar3, vVar5, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iVar3, vVar8, 2, true);
		ENTITY::SET_ENTITY_COLLISION(iVar3, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
		if (bParam6)
		{
			ENTITY::SET_ENTITY_ALPHA(iVar3, 0, false);
		}
		__LIB_9__::func_932(iVar3, iParam5, 0);
		__LIB_12__::func_400(iVar3, iParam3);
	}
	uParam0->f_435[iParam1 /*30*/][iParam2] = iVar3;
	uParam0->f_435[iParam1 /*30*/].f_5[iParam2] = iParam3;
	uParam0->f_435[iParam1 /*30*/].f_10[iParam2] = iParam4;
	return 1;
}

void func_1185(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (uParam0->f_767 != iParam1)
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_785[iParam1 /*52*/].f_50))
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar4 = (iVar2 - iParam1);
			while (iVar4 <= 0)
			{
				iVar4 += 6;
			}
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (__LIB_12__::func_404(uParam0, iVar2, iVar3))
				{
					iVar0 = __LIB_12__::func_411(uParam0, iVar2, iVar3);
					iVar1 = __LIB_12__::func_412(uParam0, iVar2, iVar3);
					func_1164(uParam0, iVar2, iVar3, iVar0, iVar1, __LIB_12__::func_253(iVar0, iVar1, 10), bParam2, 3);
				}
				iVar3++;
			}
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (__LIB_12__::func_375(uParam0, iVar2, iVar3))
				{
					iVar0 = __LIB_12__::func_413(uParam0, iVar2, iVar3);
					iVar1 = __LIB_12__::func_376(uParam0, iVar2, iVar3);
					func_1175(uParam0, iVar2, iVar3, iVar0, iVar1, __LIB_12__::func_253(iVar0, iVar1, 10), bParam2, 3);
				}
				iVar3++;
			}
			iVar2++;
		}
	}
}

void func_1191(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_44[iParam1 /*3*/] = iParam2;
	uParam0->f_44[iParam1 /*3*/].f_1 = iParam3;
	uParam0->f_44[iParam1 /*3*/].f_2 = iParam4;
}

void func_1192(var uParam0)
{
	uParam0->f_15.f_23 = 0;
}

void func_1193(var uParam0)
{
	uParam0->f_485 = 0;
}

void func_1194(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = uParam0->f_2 != 0;
	uParam0->f_3 = 0;
	uParam0->f_6 = -1;
	uParam0->f_7.f_23 = 0;
	uParam0->f_31.f_24 = -1;
	uParam0->f_31.f_23 = 0;
}

void func_1196(var uParam0, var uParam1)
{
	uParam0->f_181 = uParam1;
}

int func_1197(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	char* sVar0;
	if (uParam0->f_159[iParam1] == 0)
	{
	}
	else if (uParam0->f_159[iParam1] == 1)
	{
		return __LIB_12__::func_414(uParam0->f_166[iParam1], sParam2, sParam3);
	}
	else if (uParam0->f_159[iParam1] == 2)
	{
		sVar0 = __LIB_7__::func_751(&Global_1899750, iParam1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			*sParam2 = { __LIB_0__::func_482(sVar0) };
			*sParam3 = { __LIB_0__::func_482(sVar0) };
			return 1;
		}
	}
	else if (uParam0->f_159[iParam1] == 3)
	{
		StringCopy(sParam2, "avatar_generic", 64);
		StringCopy(sParam3, "minigames_hud", 64);
		return 1;
	}
	StringCopy(sParam2, "avatar_generic", 64);
	StringCopy(sParam3, "minigames_hud", 64);
	return 0;
}

int func_1198(var uParam0, int iParam1, char[4] cParam2, char[4] cParam3)
{
	int iVar0;
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (uParam0->f_197[iParam1 /*12*/])
	{
	}
	else
	{
		uParam0->f_197[iParam1 /*12*/] = 1;
		uParam0->f_197[iParam1 /*12*/].f_1 = 0;
		uParam0->f_197[iParam1 /*12*/].f_2 = 0;
		StringCopy(&(uParam0->f_197[iParam1 /*12*/].f_3), "", 64);
		uParam0->f_197[iParam1 /*12*/].f_11 = 0;
		__LIB_12__::func_415(&(uParam0->f_34[iParam1 /*19*/]), cParam2);
		func_1588(&(uParam0->f_34[iParam1 /*19*/]), cParam3);
		__LIB_12__::func_416(&(uParam0->f_34[iParam1 /*19*/]), 1);
		__LIB_12__::func_417(&(uParam0->f_34[iParam1 /*19*/]), MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_CASH", 0));
		__LIB_7__::func_743(&(uParam0->f_34[iParam1 /*19*/]), " ");
		func_1591(&(uParam0->f_34[iParam1 /*19*/]), 1);
		__LIB_12__::func_418(&(uParam0->f_34[iParam1 /*19*/]), 0);
		if (!uParam0->f_183)
		{
			func_1593(uParam0, iParam1);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			__LIB_7__::func_759(&(uParam0->f_34[iParam1 /*19*/]), iVar0, "");
			iVar0++;
		}
		return 1;
	}
	return 0;
}

void func_1199(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!uParam0->f_197[iParam1 /*12*/])
	{
	}
	else
	{
		switch (iParam2)
		{
			case 0:
				__LIB_12__::func_416(&(uParam0->f_34[iParam1 /*19*/]), 1);
				break;
			case 1:
				__LIB_12__::func_419(&(uParam0->f_34[iParam1 /*19*/]), 1);
				break;
		}
	}
}

int func_1200(var uParam0, int iParam1)
{
	return uParam0->f_39[iParam1 /*56*/].f_4;
}

void func_1201(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!uParam0->f_197[iParam1 /*12*/])
	{
	}
	else
	{
		uParam0->f_197[iParam1 /*12*/].f_2 = iParam2;
		__LIB_12__::func_417(&(uParam0->f_34[iParam1 /*19*/]), MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_CASH", func_987(uParam0, iParam2)));
	}
}

char[] func_1202(var uParam0, int iParam1, int iParam2)
{
	struct<16> Var0;
	Var0 = { func_1000(&(uParam0->f_114), iParam1, 0) };
	return MISC::_CREATE_VAR_STRING(34, "MGPKR_INFO_WAIT_TURN", func_987(&(uParam0->f_2979), iParam2), &Var0);
}

void func_1203(var uParam0, int iParam1, char[4] cParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!uParam0->f_197[iParam1 /*12*/])
	{
	}
	else
	{
		uParam0->f_197[iParam1 /*12*/].f_3 = { __LIB_0__::func_482(cParam2) };
		if (!uParam0->f_197[iParam1 /*12*/].f_11)
		{
			__LIB_7__::func_743(&(uParam0->f_34[iParam1 /*19*/]), cParam2);
		}
	}
}

void func_1204(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!uParam0->f_197[iParam1 /*12*/])
	{
	}
	else
	{
		__LIB_12__::func_418(&(uParam0->f_34[iParam1 /*19*/]), bParam2);
	}
}

void func_1205(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!uParam0->f_197[iParam1 /*12*/])
	{
	}
	else
	{
		func_1596(&(uParam0->f_34[iParam1 /*19*/]), bParam2);
	}
}

void func_1206(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_182)
	{
		func_1597(uParam0);
		iVar0 = uParam0->f_181;
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		iVar1 = 0;
		while (iVar1 < 6)
		{
			func_1598(uParam0, iVar0);
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 += 6;
			}
			iVar1++;
		}
		uParam0->f_182 = 1;
	}
}

void func_1207(var uParam0, int iParam1, struct<2> Param2, int iParam4, bool bParam5)
{
	char[] cVar0[8];
	if (bParam5)
	{
	}
	if (iParam1 < 0 || iParam1 >= 5)
	{
	}
	else
	{
		if (iParam4 == 0)
		{
			MISC::SET_BIT(&(uParam0->f_185), iParam1);
			uParam0->f_185.f_1[iParam1 /*2*/] = { Param2 };
		}
		if (iParam4 == uParam0->f_184)
		{
			func_1599(&Param2, &cVar0);
			func_1600(uParam0, iParam1, &cVar0);
		}
	}
}

void func_1208(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam1->f_2104 = iParam2;
	uParam1->f_2104.f_1 = iParam3;
	__LIB_1__::func_148(&(uParam1->f_2104.f_2));
	func_1601(&(uParam0->f_2979), 1);
}

char[] func_1209(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_SBLIND", func_987(uParam0, iParam1));
}

void func_1210(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 < 0 || iParam1 >= 5)
	{
	}
	else
	{
		uParam0->f_270[iParam1 /*2*/] = 1;
		uParam0->f_270[iParam1 /*2*/].f_1 = iParam2;
		if (iParam3 <= 1)
		{
			__LIB_7__::func_736(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_POT"));
		}
		else if (iParam1 == 0)
		{
			__LIB_7__::func_736(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_MAINPOT"));
		}
		else if (iParam1 == 1 && iParam3 == 2)
		{
			__LIB_7__::func_736(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_SIDEPOT"));
		}
		else if (iParam1 == 1)
		{
			__LIB_7__::func_736(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_1ST_SIDEPOT"));
		}
		else if (iParam1 == 2)
		{
			__LIB_7__::func_736(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_2ND_SIDEPOT"));
		}
		else if (iParam1 == 3)
		{
			__LIB_7__::func_736(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_3RD_SIDEPOT"));
		}
		else if (iParam1 == 4)
		{
			__LIB_7__::func_736(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_4TH_SIDEPOT"));
		}
		else if (iParam1 == 5)
		{
			__LIB_7__::func_736(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_5TH_SIDEPOT"));
		}
		else
		{
			__LIB_7__::func_736(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_6TH_SIDEPOT"));
		}
		__LIB_7__::func_737(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_CASH", func_987(uParam0, iParam2)));
	}
}

char[] func_1211(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_BBLIND", func_987(uParam0, iParam1));
}

int func_1212(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_387(uParam0, iVar1))
		{
			iVar0 = (iVar0 + func_1200(uParam0, iVar1));
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1213(var uParam0)
{
	return uParam0->f_2104 != 0;
}

void func_1214(var uParam0, var uParam1)
{
	if (uParam1->f_2104 != 0)
	{
		uParam1->f_2104 = 0;
		func_1602(&(uParam0->f_2979));
		func_1601(&(uParam0->f_2979), 0);
	}
}

bool func_1216(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11[10];
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	if (!uParam2->f_778 || uParam2->f_779)
	{
		return false;
	}
	if (uParam2->f_777 == -1)
	{
		return false;
	}
	if (iParam4 < 0 || iParam4 >= 6)
	{
		return false;
	}
	if (uParam0->f_2752 != 0)
	{
		return false;
	}
	fVar2 = -1f;
	switch (uParam2->f_785[iParam4 /*52*/].f_2)
	{
		case 0:
			fVar2 = -1f;
			break;
		case 1:
			fVar2 = 0f;
			break;
		case 2:
			fVar2 = 1f;
			break;
	}
	fVar3 = 0f;
	ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_777, "MgmLookPose", uParam2->f_785[iParam4 /*52*/], 0, fVar2);
	ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_777, "MgmLookVar", uParam2->f_785[iParam4 /*52*/], 0, fVar3);
	iVar4 = uParam0->f_2474;
	iVar5 = -1;
	if (uParam1->f_119 >= 1)
	{
		iVar5 = uParam1->f_79[0 /*4*/].f_1;
	}
	iVar6 = -1;
	if (uParam1->f_119 >= 2)
	{
		iVar6 = uParam1->f_79[1 /*4*/].f_1;
	}
	ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_777, "look_atDealer", uParam2->f_785[iParam4 /*52*/], 0, func_1604(iParam4, iVar4));
	ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_777, "look_atCurActor", uParam2->f_785[iParam4 /*52*/], 0, func_1604(iParam4, iVar5));
	ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_777, "look_atPrevActor", uParam2->f_785[iParam4 /*52*/], 0, func_1604(iParam4, iVar6));
	ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_777, "look_atGivenSeat", uParam2->f_785[iParam4 /*52*/], 0, func_1604(iParam4, iParam6));
	if (iParam5 & 2 != 0)
	{
		iVar7 = uParam1->f_131;
		iVar8 = uParam1->f_132;
		iVar9 = func_1605(uParam3, iParam4);
		iVar10 = -1;
		iVar0 = (uParam3->f_6 + 1 % 6);
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_472(uParam3, iVar0) && func_1101(uParam3, iVar0))
			{
				iVar10 = iVar0;
			}
			else
			{
				iVar0 = (iVar0 + 1 % 6);
				iVar1++;
			}
		}
		iVar1 = 0;
		if (iVar7 != -1)
		{
			iVar11[iVar1] = iVar7;
			iVar1++;
		}
		if (iVar8 != -1)
		{
			iVar11[iVar1] = iVar8;
			iVar1++;
		}
		if (iVar10 != -1)
		{
			iVar11[iVar1] = iVar10;
			iVar1++;
		}
		if (iVar9 != -1)
		{
			iVar11[iVar1] = iVar9;
			iVar1++;
		}
		iVar22 = -1;
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 90)
		{
			iVar22 = iVar11[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1)];
		}
		ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_777, "look_onAction", uParam2->f_785[iParam4 /*52*/], 0, func_1604(iParam4, iVar22));
		ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_777, "look_atPrevRaiser", uParam2->f_785[iParam4 /*52*/], 0, func_1604(iParam4, iVar7));
	}
	if (iParam5 & 4 != 0)
	{
		iVar23 = (uParam1->f_144 && uParam1->f_141 ^ -1);
		iVar24 = -1;
		iVar0 = (iParam4 + 1 % 6);
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (MISC::IS_BIT_SET(iVar23, iVar0))
			{
				iVar24 = iVar0;
			}
			else
			{
				iVar0 = (iVar0 + 1 % 6);
				iVar1++;
			}
		}
		iVar25 = -1;
		if (uParam1->f_145 != iParam4)
		{
			iVar25 = uParam1->f_145;
		}
		else if (uParam1->f_147 != -1)
		{
			iVar25 = uParam1->f_147;
		}
		else
		{
			iVar25 = iVar24;
		}
		ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_777, "look_onReveal", uParam2->f_785[iParam4 /*52*/], 0, func_1604(iParam4, iVar25));
	}
	if (iParam5 & 8 != 0)
	{
		iVar26 = -1;
		iVar27 = 0;
		while (iVar27 < uParam1->f_119)
		{
			if (uParam1->f_79[iVar27 /*4*/] == 6)
			{
				iVar26 = uParam1->f_79[iVar27 /*4*/].f_1;
			}
			else
			{
				iVar27++;
			}
		}
		ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_777, "look_onCelebrate", uParam2->f_785[iParam4 /*52*/], 0, func_1604(iParam4, iVar26));
	}
	return true;
}

void func_1218(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	if (iParam1 == -1)
	{
	}
	else if (iParam2 == -1)
	{
	}
	else
	{
		if (uParam0->f_2545[iParam1] != -1)
		{
		}
		uParam0->f_2545[iParam1] = iParam2;
		uParam0->f_2552[iParam1] = iParam3;
		__LIB_0__::func_268(&(uParam0->f_2559[iParam1 /*3*/]), -fParam4);
	}
}

int func_1220(var uParam0, int iParam1, int iParam2)
{
	char cVar0[64];
	char cVar8[16];
	int iVar10;
	int iVar11;
	if (uParam0->f_763 != -1)
	{
		return 0;
	}
	StringCopy(&cVar8, "PBL_", 16);
	iVar10 = (iParam1 + 1 % 6);
	iVar11 = 0;
	while (iVar11 < 6)
	{
		if (MISC::IS_BIT_SET(iParam2, iVar10))
		{
			StringIntConCat(&cVar8, iVar11 + 1, 16);
		}
		else if (iVar10 == iParam1)
		{
			StringIntConCat(&cVar8, iVar11 + 1, 16);
		}
		iVar10 = (iVar10 + 1 % 6);
		iVar11++;
	}
	if (uParam0->f_785[iParam1 /*52*/].f_4 == 3)
	{
		StringCopy(&cVar0, "script@mini_game@poker@fem_deal", 64);
	}
	else if (MISC::IS_BIT_SET(iParam2, iParam1))
	{
		StringCopy(&cVar0, "script@mini_game@poker@deal", 64);
	}
	else
	{
		StringCopy(&cVar0, "script@mini_game@poker@deal_casino", 64);
	}
	uParam0->f_763 = ANIMSCENE::_CREATE_ANIM_SCENE(&cVar0, 0, &cVar8, false, true);
	uParam0->f_764 = iParam2;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_763))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_763);
		return 1;
	}
	uParam0->f_763 = -1;
	return 0;
}

void func_1221(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_688 == 0)
	{
	}
	else
	{
		uParam0->f_688.f_1 = iParam1;
		uParam0->f_688.f_2 = iParam2;
	}
}

int func_1222(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	else if (MISC::IS_BIT_SET(uParam0->f_1268, iParam1))
	{
		if (uParam0->f_1269[iParam1] != iParam2)
		{
			return 0;
		}
		else if (bParam3)
		{
			return 0;
		}
	}
	MISC::SET_BIT(&(uParam0->f_1268), iParam1);
	uParam0->f_1269[iParam1] = iParam2;
	return 1;
}

float func_1223(var uParam0)
{
	float fVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	int iVar9;
	int iVar10;
	float fVar11[13];
	fVar0 = 0f;
	Var1 = { *(uParam0[0 /*2*/]) };
	Var3 = { *(uParam0[1 /*2*/]) };
	if (Var1 > Var3)
	{
		Var5 = { Var1 };
		Var7 = { Var3 };
	}
	else
	{
		Var5 = { Var3 };
		Var7 = { Var1 };
	}
	switch (Var5)
	{
		case 14:
			fVar0 = 10f;
			break;
		case 13:
			fVar0 = 8f;
			break;
		case 12:
			fVar0 = 7f;
			break;
		case 11:
			fVar0 = 6f;
			break;
		default:
			fVar0 = (BUILTIN::TO_FLOAT(Var5 + 2) / 2f);
			break;
	}
	iVar9 = ((Var5 - Var7) - 1);
	if (Var5 == Var7)
	{
		fVar0 = (fVar0 * 2f);
		if (fVar0 < 5f)
		{
			fVar0 = 5f;
		}
	}
	else
	{
		switch (iVar9)
		{
			case 0:
				fVar0 = fVar0;
				break;
			case 1:
				fVar0 = (fVar0 - 1f);
				break;
			case 2:
				fVar0 = (fVar0 - 2f);
				break;
			case 3:
				fVar0 = (fVar0 - 4f);
				break;
			default:
				fVar0 = (fVar0 - 5f);
				break;
		}
	}
	if (Var5.f_1 == Var7.f_1)
	{
		fVar0 = (fVar0 + 2f);
	}
	if (iVar9 < 2 && Var5 <= 11)
	{
		fVar0 = (fVar0 + 1f);
	}
	iVar10 = (12 - BUILTIN::CEIL(fVar0));
	if (iVar10 < 1)
	{
		iVar10 = 1;
	}
	else if (iVar10 > 12)
	{
		iVar10 = 12;
	}
	fVar11[0] = 1f;
	fVar11[1] = 1f;
	fVar11[2] = 0.95f;
	fVar11[3] = 0.9f;
	fVar11[4] = 0.85f;
	fVar11[5] = 0.8f;
	fVar11[6] = 0.75f;
	fVar11[7] = 0.7f;
	fVar11[8] = 0.55f;
	fVar11[9] = 0.4f;
	fVar11[10] = 0.3f;
	fVar11[11] = 0.2f;
	fVar11[12] = 0.1f;
	return (fVar11[iVar10] * 0.853f);
}

void func_1225(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!uParam0->f_118)
	{
		return;
	}
	iVar0 = 7;
	while (iVar0 > 0)
	{
		uParam0->f_79[iVar0 /*4*/] = { uParam0->f_79[(iVar0 - 1) /*4*/] };
		iVar0 = (iVar0 - 1);
	}
	uParam0->f_119++;
	if (uParam0->f_119 >= 8)
	{
		uParam0->f_119 = 8;
	}
	uParam0->f_120++;
	if (uParam0->f_120 >= 8)
	{
		uParam0->f_120 = 8;
	}
	if (uParam0->f_79[1 /*4*/] == 3)
	{
		uParam0->f_131 = uParam0->f_79[1 /*4*/].f_1;
	}
	if ((uParam0->f_79[1 /*4*/] == 2 || uParam0->f_79[1 /*4*/] == 4) || uParam0->f_79[1 /*4*/] == 3)
	{
		uParam0->f_132 = uParam0->f_79[1 /*4*/].f_1;
	}
	uParam0->f_79[0 /*4*/] = iParam1;
	uParam0->f_79[0 /*4*/].f_1 = iParam2;
	uParam0->f_79[0 /*4*/].f_2 = 0;
	uParam0->f_79[0 /*4*/].f_3 = 0;
	uParam0->f_124 = __LIB_0__::func_264(&(uParam0->f_121));
	__LIB_1__::func_148(&(uParam0->f_121));
}

void func_1227(var uParam0)
{
	var uVar0;
	int iVar5;
	uVar0 = 4;
	iVar5 = 0;
	while (iVar5 < 6)
	{
		func_1607(uParam0, iVar5, &uVar0);
		func_1115(uParam0, iVar5, &uVar0);
		__LIB_0__::func_11(uParam0, iVar5, "NEW", "PWORLD__ASSIGN_ROUND_DENOMS()");
		iVar5++;
	}
}

int func_1228(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_50[iVar0 /*19*/] == 2 && uParam0->f_50[iVar0 /*19*/].f_18 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1229(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (uParam0->f_2752 != 0)
	{
	}
	else if (uParam0->f_50[iParam2 /*19*/] == 0)
	{
	}
	else if (uParam0->f_50[iParam2 /*19*/] != 2)
	{
	}
	else if (!__LIB_12__::func_296(uParam1, iParam2))
	{
	}
	else
	{
		iVar0 = func_149(uParam1, iParam2);
		iVar1 = func_1609(uParam0, iParam2);
		__LIB_0__::func_928(&(uParam0->f_2752.f_8), iVar0, func_1610(iVar1), 0);
		MISC::SET_BIT(&(uParam0->f_2752.f_6), iParam2);
	}
}

void func_1230(var uParam0, int iParam1)
{
	if (uParam0->f_2752 != 0)
	{
	}
	else if (uParam0->f_2752.f_6 == 0)
	{
	}
	else
	{
		func_1496(uParam0, 1);
		uParam0->f_2752.f_1 = iParam1;
		uParam0->f_2752.f_7 = -1;
	}
}

void func_1231(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = uParam0->f_73[iParam1 /*30*/].f_10[iVar0];
		iVar0++;
	}
}

int func_1233(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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
	iVar0 = -1;
	*uParam3 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		uParam3->f_1[iVar1] = 0;
		iVar1++;
	}
	if (bParam4 && (*uParam1)[0] > 0)
	{
		iVar0 = 0;
	}
	else
	{
		iVar3 = 14;
		if ((*uParam1)[0] > iParam0)
		{
			iVar3 = 15;
		}
		else if (((*uParam1)[1] == 0 && (*uParam1)[2] == 0) && (*uParam1)[3] == 0)
		{
			iVar3 = 15;
		}
		iVar4 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if ((*uParam1)[iVar1] >= iParam0)
			{
				MISC::SET_BIT(&iVar4, iVar1);
			}
			iVar1++;
		}
		iVar5 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if ((*uParam2)[iVar1] == 0)
			{
				MISC::SET_BIT(&iVar5, iVar1);
			}
			iVar1++;
		}
		if (__LIB_12__::func_389(((iVar4 && iVar5) && iVar3)) != 0)
		{
			iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_12__::func_389(((iVar4 && iVar5) && iVar3)));
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (MISC::IS_BIT_SET(((iVar4 && iVar5) && iVar3), iVar1))
				{
					if (iVar6 == 0)
					{
						iVar0 = iVar1;
					}
					iVar6 = (iVar6 - 1);
				}
				iVar1++;
			}
		}
		else if (__LIB_12__::func_389((iVar4 && iVar3)) != 0)
		{
			iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_12__::func_389((iVar4 && iVar3)));
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (MISC::IS_BIT_SET((iVar4 && iVar3), iVar1))
				{
					if (iVar7 == 0)
					{
						iVar0 = iVar1;
					}
					iVar7 = (iVar7 - 1);
				}
				iVar1++;
			}
		}
		else
		{
			iVar8 = -1;
			iVar9 = 0;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (MISC::IS_BIT_SET(iVar3, iVar1))
				{
					if (iVar9 < (*uParam1)[iVar1])
					{
						iVar9 = (*uParam1)[iVar1];
						iVar8 = iVar1;
					}
				}
				iVar1++;
			}
			iVar0 = iVar8;
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = 3;
	}
	*uParam3 = iVar0;
	iVar1 = iVar0;
	iVar2 = __LIB_0__::func_259(iParam0, (*uParam1)[iVar1]);
	uParam3->f_1[iVar1] = (uParam3->f_1[iVar1] + iVar2);
	(*uParam1)[iVar1] = ((*uParam1)[iVar1] - iVar2);
	iParam0 = (iParam0 - iVar2);
	iVar10 = 0;
	while (iVar10 < 4)
	{
		iVar1 = (3 - iVar10);
		iVar2 = __LIB_0__::func_259(iParam0, (*uParam1)[iVar1]);
		uParam3->f_1[iVar1] = (uParam3->f_1[iVar1] + iVar2);
		(*uParam1)[iVar1] = ((*uParam1)[iVar1] - iVar2);
		iParam0 = (iParam0 - iVar2);
		iVar10++;
	}
	if (iParam0 > 0)
	{
	}
	return 1;
}

void func_1234(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	var uVar0[4];
	var uVar5[4];
	int iVar10;
	int iVar11;
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (!bParam3 && uParam0->f_785[iParam1 /*52*/].f_1 != 2)
	{
	}
	else if (bParam3 && uParam0->f_785[iParam1 /*52*/].f_1 != 1)
	{
	}
	else if (*uParam2 < 0 || *uParam2 >= 4)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 11);
		__LIB_0__::func_11(uParam0, iParam1, "OLD", "BET_ADVANCED");
		__LIB_0__::func_11(uParam0, iParam1, "OLD", 0);
		func_1231(uParam0, iParam1, &uVar0);
		__LIB_12__::func_387(uParam0, iParam1, &uVar5, 0);
		iVar10 = 0;
		while (iVar10 < 4)
		{
			if (uParam2->f_1[iVar10] < 0)
			{
				uParam2->f_1[iVar10] = 0;
			}
			else if (uParam2->f_1[iVar10] > uVar0[iVar10])
			{
				uParam2->f_1[iVar10] = uVar0[iVar10];
			}
			iVar10++;
		}
		__LIB_0__::func_11(uParam0, iParam1, uParam2, 0);
		iVar10 = 0;
		while (iVar10 < 4)
		{
			uParam0->f_785[iParam1 /*52*/].f_24[iVar10] = (uVar0[iVar10] - uParam2->f_1[iVar10]);
			uParam0->f_785[iParam1 /*52*/].f_29[iVar10] = (uVar5[iVar10] + uParam2->f_1[iVar10]);
			iVar10++;
		}
		iVar11 = *uParam2;
		if (__LIB_12__::func_301(uParam0, iParam1) == 1 || __LIB_12__::func_301(uParam0, iParam1) == 3)
		{
			if (iVar11 == 0)
			{
				iVar11 = 1;
			}
			else if (iVar11 == 1)
			{
				iVar11 = 0;
			}
		}
		if (!uParam0->f_40)
		{
			if (bParam3)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "BetBlind");
			}
			else
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "Bet");
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam1 /*52*/], "BetType", BUILTIN::TO_FLOAT(iVar11));
			}
		}
		uParam0->f_785[iParam1 /*52*/].f_19 = *uParam2;
		uParam0->f_785[iParam1 /*52*/].f_20 = uParam2->f_1[0];
		uParam0->f_785[iParam1 /*52*/].f_21 = uParam2->f_1[1];
		uParam0->f_785[iParam1 /*52*/].f_22 = uParam2->f_1[2];
		uParam0->f_785[iParam1 /*52*/].f_23 = uParam2->f_1[3];
		uParam0->f_785[iParam1 /*52*/].f_36 = iVar11;
	}
}

int func_1235(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_1268, iParam1))
	{
		if (bParam3)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else if (uParam0->f_1269[iParam1] != iParam2)
	{
		return 0;
	}
	MISC::CLEAR_BIT(&(uParam0->f_1268), iParam1);
	return 1;
}

int func_1237(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_1101(uParam0, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1238(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (MISC::IS_BIT_SET(uParam0->f_1268, iVar0) && uParam0->f_1269[iVar0] == iParam1)
		{
			func_1235(uParam0, iVar0, iParam1, 1);
		}
		iVar0++;
	}
}

void func_1239(var uParam0)
{
	__LIB_18__::func_543(&(uParam0->f_3310), 1);
	__LIB_18__::func_544(&(uParam0->f_3310), 1);
}

void func_1240(var uParam0, int iParam1)
{
	uParam0->f_2101 = iParam1;
}

void func_1241(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_2545[iVar0] != -1)
		{
			uParam0->f_2545[iVar0] = -1;
		}
		iVar0++;
	}
}

char[] func_1242(var uParam0, int iParam1, int iParam2)
{
	struct<16> Var0;
	if (iParam1 == uParam0->f_114.f_9)
	{
		return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_YOU_ACT", func_987(&(uParam0->f_2979), iParam2));
	}
	Var0 = { func_1000(&(uParam0->f_114), iParam1, 0) };
	return MISC::_CREATE_VAR_STRING(34, "MGPKR_INFO_THEY_ACT", func_987(&(uParam0->f_2979), iParam2), &Var0);
}

void func_1243(var uParam0, int iParam1, float fParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!uParam0->f_197[iParam1 /*12*/])
	{
	}
	else if (fParam2 >= 0f && fParam2 <= 1f)
	{
		__LIB_7__::func_750(&(uParam0->f_34[iParam1 /*19*/]), BUILTIN::ROUND((fParam2 * 100f)));
	}
	else
	{
		__LIB_7__::func_750(&(uParam0->f_34[iParam1 /*19*/]), -1);
	}
}

void func_1245(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (uParam0->f_312 != 0)
	{
		if (bParam3)
		{
			func_1477(uParam0, uParam1);
		}
		switch (uParam0->f_312.f_2)
		{
			case 1:
			case 2:
			case 3:
			case 4:
				if (func_1200(uParam1, uParam0->f_312.f_1) == __LIB_4__::func_809(uParam1))
				{
					*uParam2 = 4;
					uParam2->f_1 = 0;
				}
				else
				{
					*uParam2 = 3;
					uParam2->f_1 = 0;
				}
				break;
			case 5:
				*uParam2 = 5;
				uParam2->f_1 = 0;
				break;
			default:
				*uParam2 = 0;
				uParam2->f_1 = 0;
				break;
		}
	}
}

int func_1247(var uParam0)
{
	return uParam0->f_2104;
}

void func_1248(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	var uVar0;
	var uVar1;
	var uVar2;
	if (uParam0->f_154)
	{
		return;
	}
	uParam0->f_281 = 1;
	uParam0->f_281.f_1 = bParam4;
	uParam0->f_281.f_2 = 0;
	uParam0->f_281.f_3 = 0;
	func_1614(uParam1, uParam2, iParam3, &uVar0, &uVar1, &uVar2, 1);
	uParam0->f_281.f_4 = uVar0;
	__LIB_12__::func_337(&(uParam0->f_281.f_5));
	uParam0->f_281.f_13 = 0;
}

void func_1249(var uParam0, char* sParam1)
{
	if (uParam0->f_153)
	{
		return;
	}
	uParam0->f_158 = __LIB_1__::func_422(sParam1, 7500, 0, 0, 0, 0, -1, -1, 0);
}

char* func_1251(var uParam0, bool bParam1)
{
	char* sVar0;
	if (!bParam1)
	{
		switch (uParam0->f_24)
		{
			case 0:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND_HIGH", func_1617((*uParam0)[0 /*2*/]));
				break;
			case 1:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND_PAIR", func_1618((*uParam0)[0 /*2*/]));
				break;
			case 2:
				sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND_TWOPAIR", func_1618((*uParam0)[0 /*2*/]), func_1618((*uParam0)[2 /*2*/]));
				break;
			case 3:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND_THREE", func_1618((*uParam0)[0 /*2*/]));
				break;
			case 4:
				if (func_1619((*uParam0)[0 /*2*/]))
				{
					sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND_STRAIT1", func_1617((*uParam0)[0 /*2*/]));
				}
				else
				{
					sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND_STRAIT2", func_1617((*uParam0)[0 /*2*/]));
				}
				break;
			case 5:
				if (func_1619((*uParam0)[0 /*2*/]))
				{
					sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND_FLUSH1", func_1617((*uParam0)[0 /*2*/]), func_1620((uParam0[0 /*2*/])->f_1));
				}
				else
				{
					sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND_FLUSH2", func_1617((*uParam0)[0 /*2*/]), func_1620((uParam0[0 /*2*/])->f_1));
				}
				break;
			case 6:
				sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND_HOUSE", func_1618((*uParam0)[0 /*2*/]), func_1618((*uParam0)[3 /*2*/]));
				break;
			case 7:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND_FOUR", func_1618((*uParam0)[0 /*2*/]));
				break;
			case 8:
				if (func_1619((*uParam0)[0 /*2*/]))
				{
					sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND_STFLUSH1", func_1617((*uParam0)[0 /*2*/]), func_1620((uParam0[0 /*2*/])->f_1));
				}
				else
				{
					sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND_STFLUSH2", func_1617((*uParam0)[0 /*2*/]), func_1620((uParam0[0 /*2*/])->f_1));
				}
				break;
			case 9:
				sVar0 = MISC::_CREATE_VAR_STRING(2, "MGPKR_HND_RYFLUSH");
				break;
			default:
				sVar0 = "nothing";
				break;
		}
	}
	else
	{
		switch (uParam0->f_24)
		{
			case 0:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND2_HIGH", func_1621((*uParam0)[0 /*2*/]));
				break;
			case 1:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND2_PAIR", func_1618((*uParam0)[0 /*2*/]));
				break;
			case 2:
				sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND2_TWOPAIR", func_1618((*uParam0)[0 /*2*/]), func_1618((*uParam0)[2 /*2*/]));
				break;
			case 3:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND2_THREE", func_1618((*uParam0)[0 /*2*/]));
				break;
			case 4:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND2_STRAIT", func_1621((*uParam0)[0 /*2*/]));
				break;
			case 5:
				sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND2_FLUSH", func_1621((*uParam0)[0 /*2*/]), func_1620((uParam0[0 /*2*/])->f_1));
				break;
			case 6:
				sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND2_HOUSE", func_1618((*uParam0)[0 /*2*/]), func_1618((*uParam0)[3 /*2*/]));
				break;
			case 7:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND2_FOUR", func_1618((*uParam0)[0 /*2*/]));
				break;
			case 8:
				sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND2_STFLUSH", func_1621((*uParam0)[0 /*2*/]), func_1620((uParam0[0 /*2*/])->f_1));
				break;
			case 9:
				sVar0 = MISC::_CREATE_VAR_STRING(2, "MGPKR_HND2_RYFLUSH");
				break;
			default:
				sVar0 = "nothing";
				break;
		}
	}
	return sVar0;
}

bool func_1252(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (uParam0->f_281)
	{
		if (uParam0->f_281.f_2 == 0)
		{
			if (!__LIB_0__::func_139(uParam0->f_281.f_14))
			{
				uParam0->f_281.f_14 = __LIB_1__::func_877("MGPKR_UI_BET", joaat("INPUT_MINIGAME_POKER_BET"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (!__LIB_0__::func_139(uParam0->f_281.f_15))
			{
				if (uParam0->f_281.f_1)
				{
					uParam0->f_281.f_15 = __LIB_1__::func_877("MGPKR_UI_FOLD", joaat("INPUT_MINIGAME_POKER_FOLD"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
			}
			if (!__LIB_0__::func_139(uParam0->f_281.f_16))
			{
				uParam0->f_281.f_16 = __LIB_1__::func_877("MGPKR_UI_ALTER", joaat("INPUT_MINIGAME_CHANGE_BET_AXIS_Y"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			func_1614(uParam1, uParam2, iParam3, &iVar0, &iVar1, &iVar2, 1);
			iVar3 = 0;
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_INCREASE_BET")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DECREASE_BET")))
			{
				__LIB_12__::func_337(&(uParam0->f_281.f_5));
			}
			if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_INCREASE_BET")))
			{
				iVar3 = __LIB_12__::func_353(&(uParam0->f_281.f_5), 1f, 0);
			}
			else if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_DECREASE_BET")))
			{
				iVar3 = __LIB_12__::func_353(&(uParam0->f_281.f_5), -1f, 0);
			}
			else
			{
				iVar3 = __LIB_12__::func_353(&(uParam0->f_281.f_5), -PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MINIGAME_CHANGE_BET_AXIS_Y")), 0);
			}
			if (iVar3 != 0)
			{
				iVar4 = (uParam0->f_281.f_4 + iVar3);
				if (iVar4 < iVar0)
				{
					iVar4 = iVar0;
				}
				else if (iVar4 > iVar0 && iVar4 < iVar1)
				{
					if (iVar3 < 0)
					{
						iVar4 = iVar0;
					}
					else
					{
						iVar4 = iVar1;
					}
				}
				else if (iVar4 > iVar2)
				{
					iVar4 = iVar2;
				}
				if (uParam0->f_281.f_4 != iVar4)
				{
					uParam0->f_281.f_4 = iVar4;
					__LIB_12__::func_354((iVar4 == iVar0 || iVar4 == iVar2));
				}
			}
			iVar5 = (func_1200(uParam1, iParam3) + uParam0->f_281.f_4);
			iVar6 = (iVar5 - __LIB_4__::func_809(uParam1));
			if (__LIB_1__::func_732(uParam0->f_281.f_14, 1))
			{
				if (uParam0->f_281.f_4 == 0)
				{
					uParam0->f_281.f_2 = 4;
				}
				else if (iVar6 <= 0)
				{
					uParam0->f_281.f_2 = 3;
				}
				else
				{
					uParam0->f_281.f_2 = 2;
					uParam0->f_281.f_3 = iVar6;
				}
			}
			else if (__LIB_1__::func_732(uParam0->f_281.f_15, 1))
			{
				uParam0->f_281.f_2 = 5;
			}
			if (__LIB_0__::func_139(uParam0->f_281.f_14))
			{
				if (uParam0->f_281.f_4 == 0)
				{
					__LIB_1__::func_483(uParam0->f_281.f_14, "MGPKR_UI_CHECK", func_987(uParam0, uParam0->f_281.f_4), 1);
				}
				else if (uParam0->f_281.f_4 == func_144(uParam1, iParam3))
				{
					__LIB_1__::func_483(uParam0->f_281.f_14, "MGPKR_UI_ALLIN", func_987(uParam0, uParam0->f_281.f_4), 1);
				}
				else if (func_1622(uParam1, uParam2, iParam3, uParam0->f_281.f_4))
				{
					__LIB_1__::func_483(uParam0->f_281.f_14, "MGPKR_UI_MAX_BET", func_987(uParam0, uParam0->f_281.f_4), 1);
				}
				else if (__LIB_4__::func_809(uParam1) == 0)
				{
					__LIB_1__::func_483(uParam0->f_281.f_14, "MGPKR_UI_BET", func_987(uParam0, uParam0->f_281.f_4), 1);
				}
				else if (iVar6 <= 0)
				{
					__LIB_1__::func_483(uParam0->f_281.f_14, "MGPKR_UI_CALL", func_987(uParam0, uParam0->f_281.f_4), 1);
				}
				else
				{
					__LIB_1__::func_483(uParam0->f_281.f_14, "MGPKR_UI_RAISE", func_987(uParam0, uParam0->f_281.f_4), 1);
				}
			}
		}
		if (uParam0->f_281.f_2 != 0)
		{
			__LIB_1__::func_748(&(uParam0->f_281.f_14), 1, 1);
			__LIB_1__::func_748(&(uParam0->f_281.f_15), 1, 1);
			__LIB_1__::func_748(&(uParam0->f_281.f_16), 1, 1);
			return true;
		}
	}
	return false;
}

bool func_1253(var uParam0, var uParam1)
{
	*uParam1 = uParam0->f_281.f_2;
	uParam1->f_1 = uParam0->f_281.f_3;
	return *uParam1 != 0;
}

int func_1254(var uParam0)
{
	*uParam0 = 5;
	uParam0->f_1 = 0;
	return 1;
}

bool func_1255(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = uParam1->f_6;
	switch (uParam0->f_44[iParam3 /*3*/].f_2)
	{
		case 1:
			return func_1623(uParam2, uParam1, iVar0);
		case 2:
			return func_1624(uParam2, uParam1, iVar0);
		case 3:
			return func_1625(uParam2, uParam1, iVar0);
		case 4:
			return func_1623(uParam2, uParam1, iVar0);
		case 5:
			return func_1626(uParam0, uParam2, uParam1, iVar0, iParam3);
		case 6:
			return func_1627(uParam0, uParam2, uParam1, iVar0, iParam3);
		default:
			return func_1628(uParam0, uParam1, uParam2, iParam3);
	}
	return false;
}

void func_1256(var uParam0)
{
	if (uParam0->f_153)
	{
		return;
	}
	if (__LIB_3__::func_127(uParam0->f_158))
	{
		UIFEED::_0x2F901291EF177B02(uParam0->f_158, 0);
	}
}

int func_1258(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar0 = (iVar0 + uParam0->f_376[iVar1 /*18*/]);
		iVar1++;
	}
	return iVar0;
}

void func_1260(var uParam0, int iParam1, bool bParam2)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!(*uParam0)[iParam1 /*13*/])
	{
		return;
	}
	(uParam0[iParam1 /*13*/])->f_8 = BUILTIN::SHIFT_LEFT((uParam0[iParam1 /*13*/])->f_8 & 2147483647, 1);
	if (bParam2)
	{
		MISC::SET_BIT(&((uParam0[iParam1 /*13*/])->f_8), 0);
	}
}

void func_1261(var uParam0, int iParam1, bool bParam2)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!(*uParam0)[iParam1 /*13*/])
	{
		return;
	}
	(uParam0[iParam1 /*13*/])->f_9 = BUILTIN::SHIFT_LEFT((uParam0[iParam1 /*13*/])->f_9 & 2147483647, 1);
	if (bParam2)
	{
		MISC::SET_BIT(&((uParam0[iParam1 /*13*/])->f_9), 0);
	}
}

void func_1262(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!(*uParam0)[iParam1 /*13*/])
	{
		return;
	}
	if ((uParam0[iParam1 /*13*/])->f_12 > 0)
	{
		if ((uParam0[iParam1 /*13*/])->f_12 >= 3)
		{
			MISC::SET_BIT(&(uParam0->f_133), iParam1);
		}
		(uParam0[iParam1 /*13*/])->f_12 = 0;
	}
	(uParam0[iParam1 /*13*/])->f_12 = ((uParam0[iParam1 /*13*/])->f_12 - 1);
}

bool func_1263(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_79[0 /*4*/].f_2, 2);
}

bool func_1264(var uParam0)
{
	return uParam0->f_2347 != -1;
}

bool func_1265(var uParam0, bool bParam1)
{
	if (!bParam1 || uParam0->f_120 >= 2)
	{
		return uParam0->f_79[1 /*4*/] == 5;
	}
	return false;
}

bool func_1266(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		if (uParam0->f_79[1 /*4*/] == 5)
		{
			return func_1631(uParam0, uParam0->f_79[1 /*4*/].f_1, 4, 6);
		}
	}
	return false;
}

bool func_1267(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return MISC::IS_BIT_SET(uParam0->f_79[1 /*4*/].f_2, 10);
	}
	return false;
}

int func_1268(var uParam0, bool bParam1)
{
	if (uParam0->f_119 >= 2 && (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f)))
	{
		return uParam0->f_79[1 /*4*/].f_1;
	}
	return -1;
}

void func_1269(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!(*uParam0)[iParam1 /*13*/])
	{
		return;
	}
	(uParam0[iParam1 /*13*/])->f_9 = 0;
}

var func_1270(var uParam0)
{
	return uParam0->f_137;
}

var func_1271(var uParam0)
{
	return uParam0->f_139;
}

bool func_1272(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_79[0 /*4*/].f_2, 1);
}

bool func_1273(float fParam0)
{
	return fParam0 >= 0.5f;
}

bool func_1275(float fParam0)
{
	return (fParam0 >= 0.333f && fParam0 < 0.666f);
}

bool func_1276(float fParam0)
{
	return fParam0 < 0.5f;
}

bool func_1277(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return uParam0->f_79[1 /*4*/] == 3;
	}
	return false;
}

bool func_1278(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return MISC::IS_BIT_SET(uParam0->f_79[1 /*4*/].f_2, 6);
	}
	return false;
}

bool func_1279(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return MISC::IS_BIT_SET(uParam0->f_79[1 /*4*/].f_2, 7);
	}
	return false;
}

bool func_1280(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return MISC::IS_BIT_SET(uParam0->f_79[1 /*4*/].f_2, 8);
	}
	return false;
}

bool func_1281(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return MISC::IS_BIT_SET(uParam0->f_79[1 /*4*/].f_2, 1);
	}
	return false;
}

bool func_1282(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_79[0 /*4*/].f_2, 6);
}

bool func_1283(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_79[0 /*4*/].f_2, 7);
}

bool func_1284(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_79[0 /*4*/].f_2, 8);
}

int func_1285(var uParam0)
{
	if (((uParam0->f_120 >= 2 && uParam0->f_79[0 /*4*/] == 3) && uParam0->f_79[1 /*4*/] == 2) && func_1632(uParam0, uParam0->f_79[1 /*4*/].f_1, 4, 8))
	{
		return 1;
	}
	return 0;
}

int func_1286(var uParam0, int iParam1)
{
	int iVar0;
	if ((MISC::IS_BIT_SET(uParam0->f_79[0 /*4*/].f_2, 0) && MISC::IS_BIT_SET(uParam0->f_79[0 /*4*/].f_2, 8)) && uParam0->f_119 >= iParam1 + 1)
	{
		iVar0 = 0;
		while (iVar0 < iParam1)
		{
			if (uParam0->f_79[iVar0 + 1 /*4*/] != 2 && uParam0->f_79[iVar0 + 1 /*4*/] != 5)
			{
				return 0;
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

void func_1287(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!(*uParam0)[iParam1 /*13*/])
	{
		return;
	}
	(uParam0[iParam1 /*13*/])->f_8 = 0;
}

int func_1288(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_435[iParam1 /*30*/][iParam2] = uParam0->f_73[iParam1 /*30*/][iParam2];
	uParam0->f_435[iParam1 /*30*/].f_5[iParam2] = uParam0->f_73[iParam1 /*30*/].f_5[iParam2];
	uParam0->f_435[iParam1 /*30*/].f_10[iParam2] = uParam0->f_73[iParam1 /*30*/].f_10[iParam2];
	uParam0->f_73[iParam1 /*30*/][iParam2] = 0;
	uParam0->f_73[iParam1 /*30*/].f_5[iParam2] = 0;
	uParam0->f_73[iParam1 /*30*/].f_10[iParam2] = 0;
	return 1;
}

bool func_1289(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_3 == 1717653435 && uParam1->f_16 > 0)
	{
		if (uParam0->f_39[iParam2 /*56*/].f_3 >= uParam1->f_16)
		{
			return true;
		}
	}
	return false;
}

char[] func_1290(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_MAX_BET", func_987(uParam0, iParam1));
}

char[] func_1291(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_ALLIN", func_987(uParam0, iParam1));
}

char[] func_1292(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_CHECK", func_987(uParam0, iParam1));
}

char[] func_1293(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_BET", func_987(uParam0, iParam1));
}

char[] func_1294(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_CALL", func_987(uParam0, iParam1));
}

char[] func_1295(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_RAISE", func_987(uParam0, iParam1));
}

char[] func_1296(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_FOLD", func_987(uParam0, iParam1));
}

int func_1297(var uParam0, int iParam1)
{
	return uParam0->f_376[iParam1 /*18*/];
}

int func_1298(var uParam0)
{
	return uParam0->f_485;
}

bool func_1299(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_79[0 /*4*/].f_2, 11);
}

bool func_1300(int iParam0, float fParam1)
{
	if (iParam0 == 0 || (iParam0 + BUILTIN::ROUND((fParam1 * 1000f))) < MISC::GET_GAME_TIMER())
	{
		return true;
	}
	return false;
}

bool func_1301(var uParam0)
{
	if (uParam0->f_79[0 /*4*/] == 5)
	{
		return func_1632(uParam0, uParam0->f_79[0 /*4*/].f_1, 4, 8);
	}
	return false;
}

void func_1302(var uParam0)
{
	*uParam0 = MISC::GET_GAME_TIMER();
}

void func_1303(var uParam0, int iParam1)
{
	if (uParam0->f_2347 != -1)
	{
	}
	uParam0->f_2347 = iParam1;
}

var func_1304(var uParam0)
{
	return uParam0->f_131;
}

var func_1305(var uParam0)
{
	return uParam0->f_138;
}

bool func_1307(float fParam0)
{
	return fParam0 >= 0.8f;
}

bool func_1308(float fParam0)
{
	return fParam0 >= 0.4f;
}

bool func_1309(float fParam0)
{
	return (fParam0 >= 0.2f && fParam0 < 0.4f);
}

bool func_1310(float fParam0)
{
	return fParam0 < 0.15f;
}

bool func_1311(var uParam0)
{
	if (uParam0->f_79[0 /*4*/] == 5)
	{
		return func_1631(uParam0, uParam0->f_79[0 /*4*/].f_1, 4, 6);
	}
	return false;
}

void func_1312(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!uParam0->f_197[iParam1 /*12*/])
	{
	}
	else
	{
		func_1591(&(uParam0->f_34[iParam1 /*19*/]), !bParam2);
	}
}

void func_1313(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_270[iVar0 /*2*/] = 0;
		uParam0->f_270[iVar0 /*2*/].f_1 = 0;
		__LIB_7__::func_736(uParam0, iVar0, "");
		__LIB_7__::func_737(uParam0, iVar0, "");
		iVar0++;
	}
}

void func_1314(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_153)
	{
		return;
	}
	if (!uParam0->f_155)
	{
		__LIB_0__::func_105(1);
		__LIB_0__::func_45(sParam1, 10000, 0, 0, 0, 1);
		uParam0->f_156 = iParam2;
	}
}

void func_1315(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = uParam0->f_42[iParam1 /*5*/][iVar0];
		iVar0++;
	}
}

void func_1317(var uParam0, var uParam1, var uParam2, int iParam3)
{
	struct<2> Var0;
	Var0 = 2;
	while (Var0 <= 14)
	{
		Var0.f_1 = 0;
		while (Var0.f_1 <= 3)
		{
			if (!__LIB_12__::func_246(uParam1, Var0) && !__LIB_12__::func_246(uParam0, Var0))
			{
				*(uParam2[*iParam3 /*2*/]) = { Var0 };
				*iParam3++;
			}
			Var0.f_1++;
		}
		Var0++;
	}
}

void func_1318(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_822(&(uParam0->f_2979), iVar0))
		{
			if (func_912(uParam1, iVar0))
			{
				if (func_144(uParam1, iVar0) <= 0)
				{
					func_1203(&(uParam0->f_2979), iVar0, func_1634());
				}
				else if (func_1289(uParam1, &(uParam0->f_114.f_10), iVar0))
				{
					func_1203(&(uParam0->f_2979), iVar0, func_1635());
				}
			}
			else
			{
				func_1203(&(uParam0->f_2979), iVar0, func_1405());
			}
		}
		iVar0++;
	}
}

int func_1319(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (bParam2)
	{
	}
	if (iParam1 == 0)
	{
		uParam0->f_185 = 0;
	}
	if (iParam1 == uParam0->f_184)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			func_1600(uParam0, iVar0, "");
			iVar0++;
		}
	}
	return 1;
}

int func_1321(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar0))
		{
			if (!(!MISC::IS_BIT_SET(uParam0->f_1268, iVar0) || (uParam0->f_1269[iVar0] == iParam2 && !bParam3)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1322(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar1))
		{
			if (MISC::IS_BIT_SET(uParam0->f_1268, iVar1))
			{
				if (uParam0->f_1269[iVar1] != iParam2)
				{
					iVar0 = 0;
					Jump @98; //curOff = 59
				}
				else if (bParam3)
				{
					iVar0 = 0;
				}
				else
				{
					MISC::SET_BIT(&(uParam0->f_1268), iVar1);
					uParam0->f_1269[iVar1] = iParam2;
				}
				iVar1++;
				return iVar0;
			}
		}
	}
}

char* func_1323()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_WAIT_REVEAL");
}

void func_1324(var uParam0, int iParam1)
{
	int iVar0;
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!uParam0->f_197[iParam1 /*12*/])
	{
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			__LIB_7__::func_759(&(uParam0->f_34[iParam1 /*19*/]), iVar0, "");
			iVar0++;
		}
	}
}

void func_1325(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	char[] cVar0[8];
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!uParam0->f_197[iParam1 /*12*/])
	{
	}
	else if (iParam2 < 0 || iParam2 >= 2)
	{
	}
	else
	{
		func_1599(&uParam3, &cVar0);
		__LIB_7__::func_759(&(uParam0->f_34[iParam1 /*19*/]), iParam2, &cVar0);
	}
}

void func_1326(var uParam0, int iParam1, int iParam2)
{
	MISC::CLEAR_BIT(&(uParam0->f_197[iParam1 /*12*/].f_1), iParam2);
}

bool func_1327(var uParam0, int iParam1, int iParam2)
{
	return __LIB_12__::func_401(&(uParam0->f_39[iParam1 /*56*/].f_31), &(uParam0->f_39[iParam2 /*56*/].f_31)) > 0;
}

int func_1328(var uParam0, int iParam1)
{
	return uParam0->f_39[iParam1 /*56*/].f_31.f_24;
}

bool func_1329(var uParam0, int iParam1, int iParam2)
{
	return __LIB_12__::func_401(&(uParam0->f_39[iParam1 /*56*/].f_31), &(uParam0->f_39[iParam2 /*56*/].f_31)) >= 0;
}

int func_1330(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = uParam0->f_39[iParam1 /*56*/].f_3;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam2 > 0)
	{
		iVar1 = func_1636(uParam0, (iParam2 - 1));
	}
	iVar2 = func_1636(uParam0, iParam2);
	return (__LIB_0__::func_259(iVar2, iVar0) - __LIB_0__::func_259(iVar1, iVar0));
}

bool func_1331(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_39[iParam1 /*56*/].f_31.f_24 == uParam0->f_39[iParam2 /*56*/].f_31.f_24)
	{
		if (uParam0->f_39[iParam1 /*56*/].f_31.f_24 > 1)
		{
			return true;
		}
		if (MISC::ABSI((uParam0->f_39[iParam1 /*56*/].f_31[0 /*2*/] - uParam0->f_39[iParam2 /*56*/].f_31[0 /*2*/])) <= 3)
		{
			return true;
		}
	}
	return false;
}

bool func_1332(var uParam0, int iParam1, int iParam2)
{
	return __LIB_12__::func_401(&(uParam0->f_39[iParam1 /*56*/].f_31), &(uParam0->f_39[iParam2 /*56*/].f_31)) == 0;
}

bool func_1333(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_146, iParam1);
}

bool func_1334(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_79[0 /*4*/].f_2, 13);
}

bool func_1335(var uParam0)
{
	return __LIB_12__::func_389((uParam0->f_141 || uParam0->f_142)) <= 1;
}

bool func_1336(var uParam0)
{
	return uParam0->f_144 == uParam0->f_134[0];
}

int func_1338(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_143(uParam0, iVar1))
		{
			MISC::SET_BIT(&iVar0, iVar1);
		}
		iVar1++;
	}
	return iVar0;
}

int func_1339(var uParam0, int iParam1)
{
	if ((((MISC::IS_BIT_SET(uParam0->f_144, iParam1) && MISC::IS_BIT_SET(uParam0->f_141, iParam1)) && MISC::IS_BIT_SET(uParam0->f_146, iParam1)) && uParam0->f_149 != 0) && func_1637(uParam0, iParam1, 2, 5))
	{
		return 1;
	}
	return 0;
}

int func_1340(var uParam0, int iParam1)
{
	if (((MISC::IS_BIT_SET(uParam0->f_144, iParam1) && MISC::IS_BIT_SET(uParam0->f_141, iParam1)) && MISC::IS_BIT_SET(uParam0->f_146, iParam1)) && uParam0->f_149 != 0)
	{
		return 1;
	}
	return 0;
}

int func_1341(var uParam0, int iParam1)
{
	if ((((MISC::IS_BIT_SET(uParam0->f_144, iParam1) && MISC::IS_BIT_SET(uParam0->f_141, iParam1)) && !MISC::IS_BIT_SET(uParam0->f_146, iParam1)) && MISC::IS_BIT_SET(uParam0->f_149, iParam1)) && func_1638(uParam0, iParam1, 2, 5))
	{
		return 1;
	}
	return 0;
}

int func_1342(var uParam0, int iParam1)
{
	if (((MISC::IS_BIT_SET(uParam0->f_144, iParam1) && MISC::IS_BIT_SET(uParam0->f_141, iParam1)) && !MISC::IS_BIT_SET(uParam0->f_146, iParam1)) && MISC::IS_BIT_SET(uParam0->f_149, iParam1))
	{
		return 1;
	}
	return 0;
}

char[] func_1343(var uParam0, int iParam1, bool bParam2)
{
	if (func_143(uParam0, iParam1) && func_1639(&(uParam0->f_39[iParam1 /*56*/].f_31)))
	{
		return func_1251(&(uParam0->f_39[iParam1 /*56*/].f_31), bParam2);
	}
	return "nothing";
}

void func_1344(var uParam0, int iParam1, int iParam2)
{
	MISC::SET_BIT(&(uParam0->f_197[iParam1 /*12*/].f_1), iParam2);
}

int func_1345(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_376[iVar1 /*18*/].f_9)
		{
			if (uParam0->f_376[iVar1 /*18*/].f_2[iVar2] == iParam1)
			{
				iVar0 = (iVar0 + uParam0->f_376[iVar1 /*18*/]);
			}
			iVar2++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1346(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	*uParam1 = { *uParam0 };
	uParam1->f_2 = iParam2;
	uParam1->f_15.f_23 = func_1640(iParam2);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_912(uParam1, iVar2))
		{
			func_1641(&(uParam1->f_39[iVar2 /*56*/].f_31), &(uParam1->f_39[iVar2 /*56*/].f_7), &(uParam1->f_15));
		}
		iVar2++;
	}
	iVar0 = 0;
	while (iVar0 < uParam1->f_485)
	{
		iVar3 = -1;
		iVar1 = 0;
		while (iVar1 < uParam1->f_376[iVar0 /*18*/].f_9)
		{
			iVar2 = uParam1->f_376[iVar0 /*18*/].f_2[iVar1];
			if (func_912(uParam1, iVar2))
			{
				if (iVar3 == -1 || func_1327(uParam1, iVar2, iVar3))
				{
					iVar3 = iVar2;
				}
			}
			iVar1++;
		}
		uParam1->f_376[iVar0 /*18*/].f_17 = 0;
		if (iVar3 != -1)
		{
			iVar1 = 0;
			while (iVar1 < uParam1->f_376[iVar0 /*18*/].f_9)
			{
				iVar2 = uParam1->f_376[iVar0 /*18*/].f_2[iVar1];
				if (func_912(uParam1, iVar2))
				{
					if (iVar2 == iVar3 || func_1329(uParam1, iVar2, iVar3))
					{
						uParam1->f_376[iVar0 /*18*/].f_10[uParam1->f_376[iVar0 /*18*/].f_17] = iVar2;
						uParam1->f_376[iVar0 /*18*/].f_17++;
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

var func_1348(var uParam0)
{
	return uParam0->f_150;
}

int func_1349(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (uParam0->f_39[iVar1 /*56*/] != -1 && uParam0->f_39[iVar1 /*56*/].f_6 != -1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1350(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_2497[iVar0] != 0)
		{
			func_1465(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_1351(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	fVar0 = fParam3;
	while (iParam1 & 63 != 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (MISC::IS_BIT_SET(iParam1, iVar1))
			{
				func_1642(uParam0, iVar1, iParam2, -fVar0);
				MISC::CLEAR_BIT(&iParam1, iVar1);
				fVar0 = (fVar0 + fParam4);
			}
			else
			{
				iVar1 = (iVar1 + 1 % 6);
				iVar2++;
			}
		}
	}
}

bool func_1352(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_485)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_376[iVar1 /*18*/].f_17)
			{
				if (uParam0->f_376[iVar1 /*18*/].f_10[iVar0] == iParam1)
				{
					return true;
				}
				iVar0++;
			}
			iVar1++;
		}
	}
	return false;
}

char[] func_1353(var uParam0, char* sParam1, int iParam2)
{
	return MISC::_CREATE_VAR_STRING(10, "MGPKR_INFO_OUTCOME_WON", sParam1, func_987(uParam0, iParam2));
}

void func_1354(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!(*uParam0)[iParam1 /*13*/])
	{
		return;
	}
	if ((uParam0[iParam1 /*13*/])->f_12 < 0)
	{
		if (-(uParam0[iParam1 /*13*/])->f_12 >= 3)
		{
			MISC::SET_BIT(&(uParam0->f_133), iParam1);
		}
		(uParam0[iParam1 /*13*/])->f_12 = 0;
	}
	(uParam0[iParam1 /*13*/])->f_12++;
}

void func_1355(var uParam0, int iParam1, bool bParam2)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!(*uParam0)[iParam1 /*13*/])
	{
		return;
	}
	(uParam0[iParam1 /*13*/])->f_10 = BUILTIN::SHIFT_LEFT((uParam0[iParam1 /*13*/])->f_10 & 2147483647, 1);
	if (bParam2)
	{
		MISC::SET_BIT(&((uParam0[iParam1 /*13*/])->f_10), 0);
	}
}

void func_1356(var uParam0, int iParam1, bool bParam2)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!(*uParam0)[iParam1 /*13*/])
	{
		return;
	}
	(uParam0[iParam1 /*13*/])->f_11 = BUILTIN::SHIFT_LEFT((uParam0[iParam1 /*13*/])->f_11 & 2147483647, 1);
	if (bParam2)
	{
		MISC::SET_BIT(&((uParam0[iParam1 /*13*/])->f_11), 0);
	}
}

int func_1357(var uParam0, int iParam1)
{
	return uParam0->f_197[iParam1 /*12*/].f_2;
}

bool func_1358(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<2> Var3;
	struct<2> Var28;
	int iVar53;
	int iVar54;
	bool bVar55;
	int iVar56;
	int iVar57;
	if (uParam0->f_376[iParam1 /*18*/].f_17 == 0)
	{
		return false;
	}
	iVar0 = uParam0->f_376[iParam1 /*18*/].f_10[0];
	Var3 = 11;
	Var28 = 11;
	iVar56 = 0;
	while (iVar56 < uParam0->f_376[iParam1 /*18*/].f_9)
	{
		iVar1 = uParam0->f_376[iParam1 /*18*/].f_2[iVar56];
		bVar2 = false;
		iVar57 = 0;
		while (iVar57 < uParam0->f_376[iParam1 /*18*/].f_17)
		{
			if (uParam0->f_376[iParam1 /*18*/].f_10[iVar57] == iVar1)
			{
				bVar2 = true;
			}
			else
			{
				iVar57++;
			}
		}
		if (func_476(uParam0, iVar1) && !bVar2)
		{
			Var3 = { uParam0->f_39[iVar0 /*56*/].f_31 };
			Var28 = { uParam0->f_39[iVar1 /*56*/].f_31 };
			if (Var3.f_24 == Var28.f_24)
			{
				switch (Var3.f_24)
				{
					case 0:
						iVar53 = 1;
						break;
					case 1:
						iVar53 = 2;
						break;
					case 2:
						iVar53 = 4;
						break;
					case 3:
						iVar53 = 3;
						break;
					case 4:
						iVar53 = 5;
						break;
					case 5:
						iVar53 = 5;
						break;
					case 6:
						iVar53 = 5;
						break;
					case 7:
						iVar53 = 4;
						break;
					case 8:
						iVar53 = 5;
						break;
					case 9:
						iVar53 = 5;
						break;
					default:
						return false;
				}
				bVar55 = true;
				iVar54 = 0;
				while (iVar54 < iVar53)
				{
					if (Var3[iVar54 /*2*/] != Var28[iVar54 /*2*/])
					{
						bVar55 = false;
					}
					else
					{
						iVar54++;
					}
				}
				if (bVar55)
				{
					return true;
				}
			}
		}
		iVar56++;
	}
	return false;
}

bool func_1359(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_485)
	{
		if (uParam0->f_376[0 /*18*/].f_17 != uParam0->f_376[iVar0 /*18*/].f_17)
		{
			return false;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_376[iVar0 /*18*/].f_17)
		{
			if (uParam0->f_376[0 /*18*/].f_10[iVar1] != uParam0->f_376[iVar0 /*18*/].f_10[iVar1])
			{
				return false;
			}
			iVar1++;
		}
		iVar0++;
	}
	return true;
}

char* func_1362(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_MAIN");
		case 1:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_1ST");
		case 2:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_2ND");
		case 3:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_3RD");
		case 4:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_4TH");
		case 5:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_5TH");
		case 6:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_6TH");
		default:
			break;
	}
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_MAIN");
}

int func_1363(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar1))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1364(var uParam0)
{
	return uParam0->f_79[0 /*4*/] == 8;
}

var func_1365(var uParam0)
{
	return uParam0->f_165;
}

bool func_1366(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_79[0 /*4*/].f_2, 3);
}

bool func_1367(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_79[0 /*4*/].f_2, 5);
}

bool func_1371(float fParam0)
{
	return (fParam0 >= 0.25f && fParam0 < 0.5f);
}

bool func_1372(float fParam0)
{
	return fParam0 < 0.25f;
}

char[] func_1373(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_OUTCOME_STEAL", func_987(uParam0, iParam1));
}

int func_1374(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_376[iParam2 /*18*/].f_17)
	{
		if (uParam0->f_376[iParam2 /*18*/].f_10[iVar0] == iParam1)
		{
			return (uParam0->f_376[iParam2 /*18*/] / uParam0->f_376[iParam2 /*18*/].f_17);
		}
		iVar0++;
	}
	return 0;
}

bool func_1375(var uParam0, int iParam1, int iParam2)
{
	return MISC::IS_BIT_SET(uParam0->f_197[iParam1 /*12*/].f_1, iParam2);
}

char[] func_1377()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_MUCK");
}

bool func_1378(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_376[iParam2 /*18*/].f_17)
	{
		if (uParam0->f_376[iParam2 /*18*/].f_10[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1379(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	return MISC::IS_BIT_SET(uParam0->f_1268, iParam1);
}

void func_1380(var uParam0, int iParam1)
{
	func_378(uParam0, &(uParam0->f_114), iParam1, 2, 1);
}

void func_1381(var uParam0, int iParam1)
{
	uParam0->f_2487[iParam1] = 0;
}

bool func_1382(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!(*uParam0)[iParam1 /*13*/])
	{
		return false;
	}
	return (MISC::IS_BIT_SET(uParam0->f_133, iParam1) && (uParam0[iParam1 /*13*/])->f_12 < 0);
}

bool func_1383(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!(*uParam0)[iParam1 /*13*/])
	{
		return false;
	}
	return (MISC::IS_BIT_SET(uParam0->f_133, iParam1) && (uParam0[iParam1 /*13*/])->f_12 > 0);
}

bool func_1384(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!(*uParam0)[iParam1 /*13*/])
	{
		return false;
	}
	return (uParam0[iParam1 /*13*/])->f_12 >= 3;
}

bool func_1385(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!(*uParam0)[iParam1 /*13*/])
	{
		return false;
	}
	return -(uParam0[iParam1 /*13*/])->f_12 >= 3;
}

bool func_1386(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!(*uParam0)[iParam1 /*13*/])
	{
		return false;
	}
	return (uParam0[iParam1 /*13*/])->f_12 > 0;
}

bool func_1387(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!(*uParam0)[iParam1 /*13*/])
	{
		return false;
	}
	return (uParam0[iParam1 /*13*/])->f_12 < 0;
}

void func_1388(var uParam0)
{
	if (!uParam0->f_118)
	{
		return;
	}
	uParam0->f_133 = 0;
}

void func_1389(var uParam0, int iParam1)
{
	int iVar0;
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!uParam0->f_197[iParam1 /*12*/])
	{
	}
	else
	{
		__LIB_12__::func_415(&(uParam0->f_34[iParam1 /*19*/]), "");
		func_1588(&(uParam0->f_34[iParam1 /*19*/]), "");
		__LIB_12__::func_416(&(uParam0->f_34[iParam1 /*19*/]), 1);
		__LIB_12__::func_417(&(uParam0->f_34[iParam1 /*19*/]), "");
		__LIB_7__::func_743(&(uParam0->f_34[iParam1 /*19*/]), "");
		func_1591(&(uParam0->f_34[iParam1 /*19*/]), 1);
		__LIB_12__::func_418(&(uParam0->f_34[iParam1 /*19*/]), 0);
		if (!uParam0->f_183)
		{
			func_1643(uParam0, iParam1);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			__LIB_7__::func_759(&(uParam0->f_34[iParam1 /*19*/]), iVar0, "");
			iVar0++;
		}
		func_574(uParam0, iParam1);
	}
}

void func_1390(var uParam0)
{
	func_1597(uParam0);
	uParam0->f_182 = 0;
}

int func_1391(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	if (!func_148(uParam0, iParam1))
	{
		return 0;
	}
	else if (!func_148(uParam0, iParam2))
	{
		return 0;
	}
	else if (iParam3 == 0)
	{
		return 0;
	}
	else
	{
		iVar0 = func_149(uParam0, iParam1);
		iVar1 = func_149(uParam0, iParam1);
		Var2.f_12 = 27;
		Var2.f_11 = 10;
		Var2.f_13 = iParam3;
		Var2.f_14 = iVar0;
		if (bParam4)
		{
			Var2 = iVar0;
			Var2.f_3 = iVar1;
		}
		else
		{
			Var2 = iVar1;
			Var2.f_3 = iVar0;
		}
		MISC::_0x88BC5F4AEF77FC4E(&Var2, 17);
		return 1;
	}
	return 0;
}

bool func_1392(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	return (MISC::IS_BIT_SET(uParam0->f_1268, iParam1) && uParam0->f_1269[iParam1] == iParam2);
}

bool func_1394(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_493[iVar0 /*3*/] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1395(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar0 = (iVar0 + uParam0->f_73[iParam1 /*30*/].f_10[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_1396(var uParam0)
{
	if (uParam0->f_536 == 0)
	{
		return;
	}
	uParam0->f_536 = 0;
}

bool func_1397(var uParam0, int iParam1)
{
	return uParam0->f_536 == iParam1;
}

int func_1400(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	if (*uParam3 < ((92 + 31) / 32))
	{
		return 0;
	}
	*iParam4 = 0;
	if (iParam1 == 1 && iParam0 == joaat("A_M_M_DOMINOESPLAYERS_01"))
	{
		switch (iParam2)
		{
			case -1139797490:
			case -875384429:
			case joaat("META_OUTFIT_BLACKWATER_VAR_02"):
			case joaat("META_OUTFIT_BLACKWATER_VAR_03"):
			case joaat("META_OUTFIT_BLACKWATER_VAR_01"):
			case 436555239:
				__LIB_4__::func_894(uParam3, 35);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 36);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 37);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 38);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 45);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 46);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 47);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 51);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 52);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 53);
				*iParam4++;
				if (iParam2 == joaat("META_OUTFIT_BLACKWATER_VAR_01"))
				{
					__LIB_4__::func_894(uParam3, 63);
					*iParam4++;
					__LIB_4__::func_894(uParam3, 64);
					*iParam4++;
				}
				__LIB_4__::func_894(uParam3, 75);
				*iParam4++;
				break;
			case joaat("META_OUTFIT_EMERALDRANCH_VAR_01"):
			case joaat("META_OUTFIT_EMERALDRANCH_VAR_02"):
			case -216756988:
			case 368759504:
			case joaat("META_OUTFIT_EMERALDRANCH_VAR_03"):
			case 1633413521:
				__LIB_4__::func_894(uParam3, 35);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 36);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 37);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 38);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 45);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 46);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 47);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 51);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 52);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 53);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 56);
				*iParam4++;
				if (iParam2 == joaat("META_OUTFIT_EMERALDRANCH_VAR_02"))
				{
					__LIB_4__::func_894(uParam3, 63);
					*iParam4++;
					__LIB_4__::func_894(uParam3, 64);
					*iParam4++;
				}
				__LIB_4__::func_894(uParam3, 66);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 67);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 68);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 71);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 75);
				*iParam4++;
				break;
			case joaat("META_OUTFIT_SAINTDENIS_VAR_01"):
			case joaat("META_OUTFIT_SAINTDENIS_VAR_03"):
			case 1371088384:
			case 2106064285:
				__LIB_4__::func_894(uParam3, 37);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 38);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 41);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 51);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 52);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 53);
				*iParam4++;
				break;
			case joaat("META_OUTFIT_SAINTDENIS_VAR_02"):
			case 1263868216:
				__LIB_4__::func_894(uParam3, 34);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 58);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 61);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 73);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 76);
				*iParam4++;
				break;
			default:
				__LIB_4__::func_894(uParam3, 1);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 2);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 3);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 4);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 5);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 6);
				*iParam4 = (*iParam4 + 1);
				return 0;
		}
	}
	else if (iParam1 == 0 && iParam0 == joaat("A_M_M_CARDGAMEPLAYERS_01"))
	{
		switch (iParam2)
		{
			case joaat("META_OUTFIT_RHODES_VAR_03"):
			case joaat("META_OUTFIT_RHODES_VAR_01"):
			case -1233239944:
			case -726499920:
			case -321409750:
			case -262949646:
			case 772091720:
			case 1051251111:
			case 1088279801:
			case 1338340040:
			case joaat("META_OUTFIT_RHODES_VAR_02"):
			case 1949514659:
				__LIB_4__::func_894(uParam3, 2);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 12);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 16);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 18);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 26);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 37);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 38);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				break;
			case -1139797490:
			case -875384429:
			case joaat("META_OUTFIT_BLACKWATER_VAR_02"):
			case joaat("META_OUTFIT_BLACKWATER_VAR_03"):
			case 1841389:
			case 4921971:
			case 251738079:
			case joaat("META_OUTFIT_BLACKWATER_VAR_01"):
			case 436555239:
			case 478204342:
			case 666823002:
			case 777155929:
				__LIB_4__::func_894(uParam3, 1);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 2);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 16);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 18);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 26);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 37);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 38);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				break;
			case -1887776194:
			case joaat("META_OUTFIT_VANHORN_VAR_03"):
			case -1562249180:
			case -1431009331:
			case -1276208343:
			case -815574510:
			case -506398995:
			case 104710086:
			case joaat("META_OUTFIT_VANHORN_VAR_01"):
			case joaat("META_OUTFIT_VANHORN_VAR_02"):
				__LIB_4__::func_894(uParam3, 3);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 4);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 5);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 6);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 7);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 8);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 9);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 10);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 11);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 12);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 35);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 36);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 45);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 46);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 47);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 51);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 52);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 53);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 56);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 63);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 64);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 66);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 67);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 68);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 71);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 75);
				*iParam4++;
				break;
			case -1812506033:
			case -967360518:
				__LIB_4__::func_894(uParam3, 7);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 8);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 9);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 10);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 11);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 12);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 14);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 17);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 34);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 58);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 73);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 76);
				*iParam4++;
				break;
			default:
				return 0;
		}
	}
	else if (iParam1 == 2 && iParam0 == joaat("A_M_M_CARDGAMEPLAYERS_01"))
	{
		switch (iParam2)
		{
			case -1387257155:
			case -1087322498:
			case -478015708:
			case joaat("META_OUTFIT_VALENTINE_VAR_01"):
			case -194891548:
			case joaat("META_OUTFIT_VALENTINE_VAR_02"):
			case 112776593:
			case joaat("META_OUTFIT_VALENTINE_VAR_03"):
			case 411040031:
			case 1426194578:
			case 1791437852:
			case 2089668521:
				__LIB_4__::func_894(uParam3, 1);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 2);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 3);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 4);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 5);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 6);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 7);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 8);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 9);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 10);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 11);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 12);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 16);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 18);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 29);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 35);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 36);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 45);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 46);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 47);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 51);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 52);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 53);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 56);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 63);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 64);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 66);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 67);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 68);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 71);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 75);
				*iParam4++;
				break;
			case -1139797490:
			case -875384429:
			case joaat("META_OUTFIT_BLACKWATER_VAR_02"):
			case joaat("META_OUTFIT_BLACKWATER_VAR_03"):
			case 1841389:
			case 4921971:
			case 251738079:
			case joaat("META_OUTFIT_BLACKWATER_VAR_01"):
			case 436555239:
			case 478204342:
			case 666823002:
			case 777155929:
				__LIB_4__::func_894(uParam3, 1);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 2);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 16);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 18);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 26);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 37);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 38);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				break;
			case -1978394955:
			case -1726696266:
			case -820633060:
			case -342303967:
			case -44073298:
			case joaat("META_OUTFIT_SAINTDENIS_VAR_01"):
			case joaat("META_OUTFIT_SAINTDENIS_VAR_03"):
			case joaat("META_OUTFIT_SAINTDENIS_VAR_02"):
			case 1263868216:
			case 1371088384:
			case 1754977219:
			case 2106064285:
				__LIB_4__::func_894(uParam3, 26);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 28);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 37);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 38);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 41);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				break;
			case -1600439903:
			case -903083698:
			case 163056605:
			case 401713232:
			case 793499396:
			case 883482182:
			case 1032745865:
			case 1123711721:
			case 1147797824:
			case 1508387900:
			case 1716995354:
			case 1947066503:
				__LIB_4__::func_894(uParam3, 1);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 2);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 7);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 8);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 9);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 10);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 11);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 12);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 15);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 16);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 35);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 36);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 51);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 52);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 53);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 56);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 63);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 64);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 66);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 67);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 68);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 71);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 75);
				*iParam4++;
				break;
			case -1892751910:
			case -1833636986:
			case 317713758:
			case joaat("META_OUTFIT_TUMBLEWEED_VAR_03"):
			case 979024947:
			case 1174655877:
			case 1469806260:
			case joaat("META_OUTFIT_TUMBLEWEED_VAR_01"):
				__LIB_4__::func_894(uParam3, 1);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 2);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 3);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 4);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 5);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 6);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 7);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 8);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 9);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 10);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 11);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 12);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 16);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 18);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 29);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 35);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 36);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 39);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 45);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 46);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 47);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 48);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 50);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 51);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 52);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 53);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 56);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 63);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 64);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 66);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 67);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 68);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 71);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 75);
				*iParam4++;
				break;
			case -240866616:
			case 487194674:
			case joaat("META_OUTFIT_TUMBLEWEED_VAR_02"):
			case 1934601404:
				__LIB_4__::func_894(uParam3, 14);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 17);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 34);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 58);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 73);
				*iParam4++;
				__LIB_4__::func_894(uParam3, 76);
				*iParam4++;
				break;
			default:
				return 0;
		}
	}
	return 1;
}

char* func_1403(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_ARTHUR");
		case 2:
			return MISC::_CREATE_VAR_STRING(2, "COMP_JOHN");
		case 3:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_OPPONENT");
		case 4:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_DESMOND_IND3");
		case 5:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_DEALER_IND3");
		case 6:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_OPPONENTA_IND3");
		case 7:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_OPPONENTB_IND3");
		case 8:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_OPPONENTC_IND3");
		case 9:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_OPPONENTA_REV1");
		case 10:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_OPPONENTB_REV1");
		case 11:
			return MISC::_CREATE_VAR_STRING(2, "COMP_DUTCH");
		case 12:
			return MISC::_CREATE_VAR_STRING(2, "COMP_JOHN");
		case 13:
			return MISC::_CREATE_VAR_STRING(2, "COMP_JAVIER");
		case 14:
			return MISC::_CREATE_VAR_STRING(2, "COMP_BILL");
		case 15:
			return MISC::_CREATE_VAR_STRING(2, "COMP_UNCLE");
		case 16:
			return MISC::_CREATE_VAR_STRING(2, "COMP_HOSEA");
		case 17:
			return MISC::_CREATE_VAR_STRING(2, "COMP_MICAH");
		case 18:
			return MISC::_CREATE_VAR_STRING(2, "COMP_CHARLES");
		case 19:
			return MISC::_CREATE_VAR_STRING(2, "COMP_SEAN");
		case 20:
			return MISC::_CREATE_VAR_STRING(2, "COMP_LENNY");
		case 21:
			return MISC::_CREATE_VAR_STRING(2, "COMP_KIERAN");
		case 22:
			return MISC::_CREATE_VAR_STRING(2, "COMP_JACK");
		case 23:
			return MISC::_CREATE_VAR_STRING(2, "COMP_PEARSON");
		case 24:
			return MISC::_CREATE_VAR_STRING(2, "COMP_STRAUSS");
		case 25:
			return MISC::_CREATE_VAR_STRING(2, "COMP_SUSAN_GRIMSHAW");
		case 26:
			return MISC::_CREATE_VAR_STRING(2, "COMP_SWANSON");
		case 27:
			return MISC::_CREATE_VAR_STRING(2, "COMP_TRELAWNY");
		case 28:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_0");
		case 29:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_1");
		case 30:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_2");
		case 31:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_3");
		case 32:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_4");
		case 33:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_5");
		case 34:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_6");
		case 35:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_7");
		case 36:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_8");
		case 37:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_9");
		case 38:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_10");
		case 39:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_11");
		case 40:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_12");
		case 41:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_13");
		case 42:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_14");
		case 43:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_15");
		case 44:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_16");
		case 45:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_17");
		case 46:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_18");
		case 47:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_19");
		case 48:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_20");
		case 49:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_21");
		case 50:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_NAME_AMB_22");
		default:
			break;
	}
	return "** Invalid(char) **";
}

void func_1404(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2147.f_112 = iParam1;
	uParam0->f_2147.f_112.f_1 = iParam2;
	uParam0->f_2147.f_112.f_2 = iParam3;
	__LIB_1__::func_148(&(uParam0->f_2147.f_112.f_3));
}

char* func_1405()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_FOLD_DONE");
}

var func_1406(var uParam0, int iParam1)
{
	return (uParam0[iParam1 /*13*/])->f_1;
}

var func_1407(var uParam0, int iParam1)
{
	return (uParam0[iParam1 /*13*/])->f_2;
}

var func_1408(var uParam0, int iParam1)
{
	return (uParam0[iParam1 /*13*/])->f_5;
}

void func_1412(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_30, bParam1);
}

void func_1413(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_29, bParam1);
}

bool func_1418(var uParam0, int iParam1)
{
	int iVar0;
	if ((iParam1 >= 0 && iParam1 < 6) && uParam0->f_785[iParam1 /*52*/] != 0)
	{
		iVar0 = uParam0->f_785[iParam1 /*52*/];
		if (((((!PED::IS_PED_INJURED(iVar0) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0)) && uParam0->f_785[iParam1 /*52*/].f_1 != 0) && uParam0->f_785[iParam1 /*52*/].f_8 != 4) && uParam0->f_785[iParam1 /*52*/].f_8 != 26) && uParam0->f_785[iParam1 /*52*/].f_8 != 27)
		{
			return true;
		}
	}
	return false;
}

int func_1419(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 63;
	if (uParam0->f_8 != -1f)
	{
		if (*uParam0 != 0 && MISC::GET_GAME_TIMER() < (*uParam0 + BUILTIN::ROUND((uParam0->f_8 * 1000f))))
		{
			return 0;
		}
	}
	if (uParam0->f_9 != -1f)
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (uParam0->f_1[iVar1] != 0 && MISC::GET_GAME_TIMER() < (uParam0->f_1[iVar1] + BUILTIN::ROUND((uParam0->f_9 * 1000f))))
			{
				MISC::CLEAR_BIT(&iVar0, iVar1);
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_1420(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1[6];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60000);
	if (iVar0 < iParam4 * 600)
	{
		iVar8 = 0;
		iVar9 = 0;
		while (iVar9 < 6)
		{
			if (MISC::IS_BIT_SET(iParam1, iVar9))
			{
				iVar1[iVar8] = iVar9;
				iVar8++;
			}
			iVar9++;
		}
		if (iVar8 > 0)
		{
			iVar9 = iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8)];
			iVar10 = 0;
			while (iVar10 < 6)
			{
				if (MISC::IS_BIT_SET(iParam1, iVar9))
				{
					*iParam6 = -1;
					iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					iVar11 = 0;
					while (iVar11 < 6)
					{
						if (MISC::IS_BIT_SET(iParam3, iVar12) && iVar12 != iVar9)
						{
							*iParam6 = iVar12;
						}
						else
						{
							iVar12 = (iVar12 + 1 % 6);
							iVar11++;
						}
					}
					if (func_1216(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), &(uParam0->f_114.f_287), iVar9, 1, *iParam6))
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_3310.f_777, sParam2, uParam0->f_3310.f_785[iVar9 /*52*/], 0, uParam0->f_3310.f_40))
						{
							*iParam5 = iVar9;
							return true;
						}
					}
				}
				iVar9 = (iVar9 + 1 % 6);
				iVar10++;
			}
		}
		return false;
	}
	return false;
}

bool func_1421(var uParam0, int iParam1)
{
	if ((uParam0->f_8 != -1f && *uParam0 != 0) && MISC::GET_GAME_TIMER() < (*uParam0 + BUILTIN::ROUND((uParam0->f_8 * 1000f))))
	{
		return false;
	}
	if ((((iParam1 >= 0 && iParam1 < 6) && uParam0->f_9 != -1f) && uParam0->f_1[iParam1] != 0) && MISC::GET_GAME_TIMER() < (uParam0->f_1[iParam1] + BUILTIN::ROUND((uParam0->f_9 * 1000f))))
	{
		return false;
	}
	return true;
}

bool func_1422(var uParam0)
{
	return uParam0->f_146 != uParam0->f_148;
}

bool func_1423(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_146, iParam1) != MISC::IS_BIT_SET(uParam0->f_148, iParam1);
}

var func_1424(var uParam0, int iParam1)
{
	return (uParam0[iParam1 /*13*/])->f_6;
}

bool func_1425(float fParam0)
{
	return fParam0 > 0f;
}

void func_1429(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_34)
	{
		if (uParam0->f_34[iVar0 /*19*/])
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_34[iVar0 /*19*/].f_6, iVar0 == iParam1);
		}
		iVar0++;
	}
	uParam0->f_150 = iParam1;
	uParam0->f_149 = MISC::GET_FRAME_COUNT() + 30;
}

int func_1456(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_1661(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1662((386 + iVar28), 1);
			if (func_1663(iParam0, &Var0, iVar5, 0))
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
						return 0;
					}
					__LIB_1__::func_543(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					__LIB_0__::func_718(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_1465(var uParam0, int iParam1)
{
	if (uParam0->f_2497[iParam1] != 0)
	{
		uParam0->f_2497[iParam1] = 0;
	}
}

void func_1467(var uParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(uParam0->f_126, 0))
	{
		if (!CAM::DOES_CAM_EXIST(uParam0->f_135))
		{
			uParam0->f_135 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
			if (CAM::DOES_CAM_EXIST(uParam0->f_135))
			{
			}
		}
		if (uParam0->f_129 != -1)
		{
			__LIB_12__::func_432(&(uParam0->f_136), bParam1, 1, 0, 0);
		}
		if (uParam0->f_127 != -1)
		{
			if (func_1043(uParam0))
			{
				if (MISC::GET_FRAME_COUNT() >= uParam0->f_127)
				{
					func_479(uParam0, 0);
				}
			}
			else
			{
				uParam0->f_127 = -1;
			}
		}
	}
}

void func_1469(var uParam0, bool bParam1)
{
	if (bParam1 && !uParam0->f_154)
	{
		if (!__LIB_0__::func_139(uParam0->f_324))
		{
			uParam0->f_324 = __LIB_1__::func_877("MGPKR_SKIP", joaat("INPUT_MINIGAME_POKER_SKIP"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_324))
	{
		__LIB_1__::func_748(&(uParam0->f_324), 1, 1);
	}
}

void func_1470(var uParam0, bool bParam1)
{
	if (bParam1 && !uParam0->f_154)
	{
		if (!__LIB_0__::func_139(uParam0->f_325))
		{
			uParam0->f_325 = __LIB_1__::func_877("MGPKR_SKIP", joaat("INPUT_MINIGAME_POKER_SKIP"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		}
	}
	else if (__LIB_0__::func_139(uParam0->f_325))
	{
		__LIB_1__::func_748(&(uParam0->f_325), 1, 1);
	}
}

void func_1471(var uParam0, int iParam1)
{
	uParam0->f_114.f_2100 = 1;
	uParam0->f_114.f_2099 = iParam1;
	CAM::DO_SCREEN_FADE_OUT(1000);
	func_1469(&(uParam0->f_2979), 0);
	func_1470(&(uParam0->f_2979), 0);
}

void func_1472(var uParam0)
{
	int iVar0;
	uParam0->f_114.f_2100 = 2;
	func_804(&(uParam0->f_3310), 1);
	if (uParam0->f_114.f_2752 != 0)
	{
		func_1040(&(uParam0->f_114), &(uParam0->f_3310));
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_148(&(uParam0->f_3310), iVar0))
		{
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(func_149(&(uParam0->f_3310), iVar0), 0);
		}
		iVar0++;
	}
}

void func_1474(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (bParam2 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, 10, iParam1);
}

bool func_1475(var uParam0, int iParam1)
{
	if (uParam0->f_39[iParam1 /*56*/] != -1)
	{
		if ((uParam0->f_39[iParam1 /*56*/].f_6 == 0 && uParam0->f_39[iParam1 /*56*/].f_2 != 0) && (uParam0->f_39[iParam1 /*56*/].f_4 == uParam0->f_7 && uParam0->f_39[iParam1 /*56*/].f_5))
		{
			return true;
		}
	}
	return false;
}

void func_1476(var uParam0, int iParam1)
{
	uParam0->f_312 = iParam1;
	if (__LIB_0__::func_139(uParam0->f_321))
	{
		__LIB_1__::func_382(uParam0->f_321, 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_322))
	{
		__LIB_1__::func_382(uParam0->f_322, 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_323))
	{
		__LIB_1__::func_382(uParam0->f_323, 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_327))
	{
		__LIB_1__::func_382(uParam0->f_327, 1, 1);
	}
	__LIB_1__::func_748(&(uParam0->f_312.f_4), 1, 1);
	__LIB_1__::func_748(&(uParam0->f_312.f_5), 1, 1);
	__LIB_1__::func_748(&(uParam0->f_312.f_6), 1, 1);
	__LIB_1__::func_748(&(uParam0->f_312.f_7), 1, 1);
	__LIB_1__::func_748(&(uParam0->f_312.f_8), 1, 1);
}

bool func_1477(var uParam0, var uParam1)
{
	if (uParam0->f_312 != 0)
	{
		if (!func_635(uParam1, uParam0->f_312.f_1))
		{
			if (uParam0->f_312.f_2 != 0)
			{
				func_1481(uParam0);
				return true;
			}
		}
		else
		{
			switch (uParam0->f_312.f_2)
			{
				case 1:
					if (!func_1475(uParam1, uParam0->f_312.f_1))
					{
						func_1481(uParam0);
						return true;
					}
					break;
				case 2:
					if (!func_1475(uParam1, uParam0->f_312.f_1))
					{
						func_1480(uParam0, 5, 0);
						return true;
					}
					break;
				case 4:
					if (__LIB_4__::func_809(uParam1) > uParam0->f_312.f_3)
					{
						func_1481(uParam0);
						return true;
					}
					break;
				case 3:
				case 5:
					break;
			}
		}
	}
	return false;
}

void func_1480(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_312.f_2 = iParam1;
	uParam0->f_312.f_3 = iParam2;
}

void func_1481(var uParam0)
{
	uParam0->f_312.f_2 = 0;
	uParam0->f_312.f_3 = 0;
}

void func_1482(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_PACT_1A"), 0);
			func_1681(uParam1, 1);
			break;
		case 1:
			if (uParam0->f_4583.f_2 == 2)
			{
				func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_PACT_1B"), 0);
				func_1681(uParam1, 2);
			}
			break;
		case 2:
			if (uParam0->f_4583.f_2 != 2 && __LIB_1__::func_285(&(uParam2->f_2), 3f))
			{
				func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_PACT_1C"), 0);
				func_1681(uParam1, 5);
			}
			break;
	}
}

void func_1483(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_PACT_2A"), 0);
			func_1681(uParam1, 1);
			break;
		case 1:
			if (uParam0->f_4583.f_2 == 1)
			{
				func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_PACT_2B"), 0);
				func_1681(uParam1, 2);
			}
			break;
		case 2:
			if (uParam0->f_4583.f_2 != 1 && __LIB_1__::func_285(&(uParam2->f_2), 8f))
			{
				func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_PACT_2C"), 0);
				func_1681(uParam1, 5);
			}
			break;
	}
}

void func_1484(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_PACT_3A"), 0);
			func_1681(uParam1, 1);
			break;
		case 1:
			if (uParam0->f_4583.f_2 == 1)
			{
				func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_PACT_3B"), 0);
				func_1681(uParam1, 2);
			}
			break;
		case 2:
			if (uParam0->f_4583.f_2 != 1 && __LIB_1__::func_285(&(uParam2->f_2), 8f))
			{
				func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_PACT_3C"), 0);
				func_1681(uParam1, 5);
			}
			break;
	}
}

void func_1485(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_PACT_4A"), 0);
			func_1681(uParam1, 1);
			break;
		case 1:
			if (uParam0->f_4583.f_2 == 1)
			{
				func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_PACT_4B"), 0);
				func_1681(uParam1, 2);
			}
			break;
		case 2:
			if (uParam0->f_4583.f_2 != 1 && __LIB_1__::func_285(&(uParam2->f_2), 8f))
			{
				func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_PACT_4C"), 0);
				func_1681(uParam1, 5);
			}
			break;
	}
}

void func_1486(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_PACT_5"), 0);
			func_1681(uParam1, 4);
			break;
		case 4:
			if (__LIB_1__::func_285(&(uParam2->f_2), 8f))
			{
				func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_PACT_1C"), 0);
				func_1681(uParam1, 5);
			}
			break;
	}
}

void func_1487(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_1681(uParam1, 5);
			break;
	}
}

void func_1488(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_INTRO_A"), 0);
			func_1681(uParam1, 4);
			break;
		case 4:
			if (__LIB_1__::func_285(&(uParam2->f_2), 6f))
			{
				func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_INTRO_B"), 0);
				func_1681(uParam1, 5);
			}
			break;
	}
}

void func_1489(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_BOARD_1"), 0);
			func_1681(uParam1, 5);
			break;
	}
}

void func_1490(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_BOARD_2"), 0);
			func_1681(uParam1, 5);
			break;
	}
}

void func_1491(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_1680(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_BOARD_3"), 0);
			func_1681(uParam1, 5);
			break;
	}
}

void func_1492(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_1682(&(uParam0->f_2979), MISC::_CREATE_VAR_STRING(2, "MGPKR_T_QUIT"), 0);
			func_1681(uParam1, 5);
			break;
	}
}

void func_1493(var uParam0)
{
	if (uParam0->f_2347 != -1)
	{
		uParam0->f_2347 = -1;
	}
}

bool func_1494(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PKR_REV1_CONV1", 24);
			return true;
		case 1:
			StringCopy(sParam1, "PKR_REV1_CONV2", 24);
			return true;
		case 2:
			StringCopy(sParam1, "PKR_SUS_CONV1", 24);
			return true;
		case 3:
			StringCopy(sParam1, "PKR_SUS_CONV2", 24);
			return true;
		case 4:
			StringCopy(sParam1, "PKR_STR_CONV1", 24);
			return true;
		case 5:
			StringCopy(sParam1, "PKR_STR_CONV2", 24);
			return true;
		case 6:
			StringCopy(sParam1, "PKR_PRS_CONV1", 24);
			return true;
		case 7:
			StringCopy(sParam1, "PKR_LEN_CONV1", 24);
			return true;
		case 8:
			StringCopy(sParam1, "PKR_JOHN_CONV1", 24);
			return true;
		case 9:
			StringCopy(sParam1, "PKR_JOHN_CONV2", 24);
			return true;
		case 10:
			StringCopy(sParam1, "REV1_POKR_ENTER", 24);
			return true;
		case 11:
			StringCopy(sParam1, "REV1_POKR_BANT1", 24);
			return true;
		case 12:
			StringCopy(sParam1, "REV1_POKR_BANT2", 24);
			return true;
		case 13:
			StringCopy(sParam1, "REV1_POKR_BANT3", 24);
			return true;
		case 14:
			StringCopy(sParam1, "REV1_POKR_BANT4", 24);
			return true;
		case 15:
			StringCopy(sParam1, "REV1_POKR_BANT5", 24);
			return true;
		default:
			break;
	}
	return false;
}

void func_1496(var uParam0, int iParam1)
{
	uParam0->f_2752 = iParam1;
	__LIB_1__::func_148(&(uParam0->f_2752.f_2));
}

void func_1498(var uParam0, var uParam1)
{
	int iVar0;
	switch (uParam1->f_2752.f_1)
	{
		case 6:
			__LIB_7__::func_393(16, 17, 1);
			break;
	}
	iVar0 = __LIB_0__::func_895(uParam0->f_1.f_3.f_4);
	MISC::SET_BIT(&iVar0, uParam1->f_2752.f_1);
	__LIB_1__::func_532(uParam0->f_1.f_3.f_4, iVar0);
	if (uParam1->f_2752.f_1 < 10)
	{
		func_219(&(uParam0->f_114), 4);
		func_219(&(uParam0->f_114), 5);
		uParam1->f_2863 = 1;
	}
	if (uParam1->f_2752.f_1 == 15)
	{
		func_219(&(uParam0->f_114), 4);
		func_219(&(uParam0->f_114), 5);
	}
}

void func_1499(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_785[iParam1 /*52*/].f_47 != 0)
	{
	}
	else if (iParam1 == iParam3)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_2 != 1 && uParam0->f_785[iParam1 /*52*/].f_2 != 2)
	{
	}
	else if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_785[iParam1 /*52*/]))
	{
	}
	else
	{
		uParam0->f_785[iParam1 /*52*/].f_47 = 1;
		uParam0->f_785[iParam1 /*52*/].f_48 = iParam2;
		uParam0->f_785[iParam1 /*52*/].f_49 = iParam3;
		iVar0 = ((iParam3 - iParam1) - 1);
		while (iVar0 < 0)
		{
			iVar0 += 6;
		}
		if (uParam0->f_785[iParam1 /*52*/].f_2 == 1)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = 1;
		}
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		switch (iParam2)
		{
			case 0:
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(uParam0->f_785[iParam1 /*52*/], "StartQuickMgmLook", true);
				break;
			case 1:
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(uParam0->f_785[iParam1 /*52*/], "StartMediumMgmLook", true);
				break;
		}
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam1 /*52*/], "MgmLookPose", BUILTIN::TO_FLOAT(iVar1));
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam1 /*52*/], "MgmLookSeat", BUILTIN::TO_FLOAT(iVar0));
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam1 /*52*/], "MgmLookVar", BUILTIN::TO_FLOAT(iVar2));
		__LIB_12__::func_393(uParam0, iParam1, 1);
	}
}

void func_1501(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (uParam0->f_2545[iParam1] != -1)
	{
		uParam0->f_2545[iParam1] = -1;
	}
}

int func_1502(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	if (iParam1 < 0 || iParam1 >= 6)
	{
		if (bParam4)
		{
		}
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam3 == 0)
		{
			if (iParam1 == uParam0->f_3)
			{
				return -1;
			}
		}
		iParam1 = (iParam1 + 1 % 6);
		if (func_387(uParam0, iParam1) && uParam0->f_39[iParam1 /*56*/].f_6 == iParam2)
		{
			return iParam1;
		}
		iVar0++;
	}
	return -1;
}

void func_1503(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_785[iVar0 /*52*/] != 0 && uParam0->f_785[iVar0 /*52*/].f_8 == 1)
		{
			if (uParam0->f_785[iVar0 /*52*/].f_43 && MISC::IS_BIT_SET(iParam1, iVar0))
			{
				if (__LIB_0__::func_265(&(uParam0->f_785[iVar0 /*52*/].f_16)) > 0f && func_919(uParam0, iVar0, 1))
				{
					if ((((((MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 20 && uParam0->f_785[iVar0 /*52*/].f_51 == 255) && iParam2 != iVar0) && iParam2 != (iVar0 + 1 % 6)) && __LIB_12__::func_300(uParam0, iVar0) == 2) && __LIB_12__::func_301(uParam0, iVar0) != 0) && __LIB_12__::func_394(uParam0, iVar0))
					{
						func_1005(uParam0, iVar0);
						__LIB_12__::func_386(uParam0, iVar0);
					}
					else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 75)
					{
						func_1685(uParam0, iVar0, 0);
					}
					else
					{
						func_1685(uParam0, iVar0, 1);
					}
					__LIB_0__::func_268(&(uParam0->f_785[iVar0 /*52*/].f_16), -MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 35f));
				}
			}
		}
		iVar0++;
	}
}

void func_1504(var uParam0, int iParam1, int iParam2)
{
	if (func_1216(&(uParam0->f_114), &(uParam0->f_114.f_2147), &(uParam0->f_3310), &(uParam0->f_114.f_287), iParam1, 1, iParam2))
	{
		if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_3310.f_777, "arrive_response", uParam0->f_3310.f_785[iParam1 /*52*/], 0, uParam0->f_3310.f_40))
		{
			return;
		}
	}
}

void func_1505(var uParam0)
{
	uParam0->f_2147.f_112 = 0;
	uParam0->f_2147.f_112.f_1 = -1;
	uParam0->f_2147.f_112.f_2 = -1;
	__LIB_0__::func_37(&(uParam0->f_2147.f_112.f_3));
}

void func_1506(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_1338(&(uParam0->f_114.f_287));
	MISC::CLEAR_BIT(&iVar0, iParam1);
	func_896(uParam0, iVar0, "leave_response", iParam1, 100);
}

int func_1507(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam4 = (iParam2 - func_1200(uParam0, iParam1));
	*uParam5 = (iParam2 - __LIB_4__::func_809(uParam0));
	if (iParam2 == func_1200(uParam0, iParam1))
	{
		*uParam3 = 1;
		return 1;
	}
	else if (iParam2 == (func_144(uParam0, iParam1) + func_1200(uParam0, iParam1)))
	{
		*uParam3 = 5;
		return 1;
	}
	else if (__LIB_4__::func_809(uParam0) == 0)
	{
		*uParam3 = 2;
		return 1;
	}
	else if (__LIB_4__::func_809(uParam0) == iParam2)
	{
		*uParam3 = 3;
		return 1;
	}
	else
	{
		*uParam3 = 4;
		return 1;
	}
	return 0;
}

void func_1514(var uParam0, int iParam1)
{
	if (uParam0->f_34[iParam1 /*19*/])
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_34[iParam1 /*19*/].f_12);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_34[iParam1 /*19*/].f_12);
		if (*uParam0 == 0)
		{
			DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_34[iParam1 /*19*/].f_13);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_34[iParam1 /*19*/].f_13);
		}
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_34[iParam1 /*19*/].f_1);
		uParam0->f_34[iParam1 /*19*/] = 0;
	}
	MISC::CLEAR_BIT(&(uParam0->f_151), iParam1);
}

void func_1517(var uParam0)
{
	struct<72> Var0;
	int iVar72;
	Var0.f_10 = 6;
	Var0 = -1553724839;
	StringCopy(&(Var0.f_1), "", 64);
	Var0.f_9 = uParam0->f_537;
	Var0.f_71 = 0;
	iVar72 = 0;
	while (iVar72 < 6)
	{
		if (!func_1074(uParam0, iVar72))
		{
			Var0.f_10[Var0.f_71 /*10*/] = iVar72;
			Var0.f_10[Var0.f_71 /*10*/].f_1 = 0;
			Var0.f_10[Var0.f_71 /*10*/].f_8.f_1 = 0;
			Var0.f_10[Var0.f_71 /*10*/].f_8 = func_1686(uParam0, iVar72);
			Var0.f_71++;
		}
		iVar72++;
	}
	if (Var0.f_71 == 0)
	{
	}
	MINIGAME::_0xE1F365C4C8F259D8(Var0, &Var0, 72);
}

void func_1518(var uParam0, int iParam1)
{
	struct<2> Var0;
	Var0 = 1246061318;
	Var0.f_1 = iParam1;
	Var0.f_1.f_1 = 0;
	Var0.f_1.f_8.f_1 = 0;
	Var0.f_1.f_8 = func_1686(uParam0, iParam1);
	MINIGAME::_0xE1F365C4C8F259D8(Var0, &Var0, 11);
}

bool func_1525(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.2469f, 0.657f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.2508f, 0.605f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.2875f, 0.6661f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3201f, 0.623f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.4455f, 0.5423f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.3985f, 0.5197f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.4331f, 0.582f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3795f, 0.5888f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.6924f, -0.1147f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.6493f, -0.0852f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.7206f, -0.084f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.6996f, -0.0343f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.2469f, -0.657f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.2508f, -0.605f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2875f, -0.6661f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3201f, -0.623f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.4455f, -0.5423f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.3985f, -0.5197f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.4331f, -0.582f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3795f, -0.5888f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.6924f, 0.1147f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.6493f, 0.0852f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.7206f, 0.084f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.6996f, 0.0343f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return false;
	}
	if (bParam6)
	{
		func_531(*uParam0, uParam0->f_3, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	uParam3->f_2 = (uParam3->f_2 + (BUILTIN::TO_FLOAT(iParam5) * 0.006f));
	return true;
}

int func_1538(var uParam0, int iParam1)
{
	if (uParam0->f_39[iParam1 /*56*/] == -1)
	{
		return 0;
	}
	uParam0->f_39[iParam1 /*56*/] = -1;
	uParam0->f_39[iParam1 /*56*/].f_2 = 0;
	uParam0->f_39[iParam1 /*56*/].f_3 = 0;
	uParam0->f_39[iParam1 /*56*/].f_4 = 0;
	uParam0->f_39[iParam1 /*56*/].f_5 = 0;
	uParam0->f_39[iParam1 /*56*/].f_6 = -1;
	uParam0->f_39[iParam1 /*56*/].f_7.f_23 = 0;
	uParam0->f_39[iParam1 /*56*/].f_31.f_24 = -1;
	uParam0->f_39[iParam1 /*56*/].f_31.f_23 = 0;
	return 1;
}

int func_1539(var uParam0, int iParam1)
{
	bool bVar0;
	if (func_1074(uParam0, iParam1))
	{
	}
	else
	{
		bVar0 = uParam0->f_537 == iParam1;
		uParam0->f_486[iParam1] = 0;
		if (bVar0)
		{
			uParam0->f_534 = 0;
		}
		else
		{
			uParam0->f_512[iParam1 /*2*/] = 0;
		}
		if (bVar0)
		{
			uParam0->f_537 = -1;
		}
		if (bVar0)
		{
			func_1690(uParam0);
		}
		else
		{
			__LIB_12__::func_421(uParam0, iParam1);
		}
		return 1;
	}
	return 0;
}

void func_1542(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = uParam0->f_2 != 0;
}

void func_1544(var uParam0, var uParam1)
{
	var uVar0;
	struct<24> Var24;
	uVar0 = 11;
	Var24 = { *uParam0 };
	__LIB_12__::func_431(&Var24, uParam1);
	MINIGAME::_0x32A7C216344D623B(&Var24, &uVar0, uParam0);
}

int func_1545(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if ((*iParam0)[iVar0] == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_1547(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_143(uParam0, iVar1) && func_144(uParam0, iVar1) > iVar0)
		{
			iVar0 = func_144(uParam0, iVar1);
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1548(var uParam0, int iParam1)
{
	if (iParam1 > 0 && iParam1 <= uParam0->f_2)
	{
		uParam0->f_2 = (uParam0->f_2 - iParam1);
		uParam0->f_3 = (uParam0->f_3 + iParam1);
		uParam0->f_4 = (uParam0->f_4 + iParam1);
		return true;
	}
	return false;
}

int func_1549(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (uParam0->f_716.f_7 >= 6)
	{
		return 0;
	}
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_716.f_7)
		{
			if (uParam0->f_716[iVar0] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	uParam0->f_716[uParam0->f_716.f_7] = iParam1;
	uParam0->f_716.f_7++;
	return 1;
}

void func_1550(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	uParam3->f_7 = 0;
	iVar0 = 0;
	while (iVar0 < uParam1->f_9)
	{
		iVar1 = uParam1->f_2[iVar0];
		if (func_1101(uParam0, iVar1))
		{
			(*uParam3)[uParam3->f_7] = iVar1;
			uParam3->f_7++;
		}
		iVar0++;
	}
	bVar2 = false;
	while (!bVar2)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < (uParam3->f_7 - 1))
		{
			iVar3 = (((*uParam3)[iVar0] - iParam2 + 1) + 6 % 6);
			iVar4 = (((*uParam3)[iVar0 + 1] - iParam2 + 1) + 6 % 6);
			if (iVar3 > iVar4)
			{
				uVar5 = (*uParam3)[iVar0];
				(*uParam3)[iVar0] = (*uParam3)[iVar0 + 1];
				(*uParam3)[iVar0 + 1] = uVar5;
				bVar2 = false;
			}
			iVar0++;
		}
	}
}

bool func_1551(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	if (!func_143(uParam0, *uParam1))
	{
		return false;
	}
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	switch (*uParam2)
	{
		case 3:
			if (uParam0->f_2 == 4)
			{
				return false;
			}
			bVar0 = uParam2->f_1 != false;
			if (uParam0->f_7 <= uParam1->f_4 && !bVar0)
			{
				return false;
			}
			break;
		case 4:
			if (uParam0->f_2 == 4)
			{
				return false;
			}
			bVar1 = uParam2->f_1 != false;
			if (uParam1->f_4 < uParam0->f_7 && !bVar1)
			{
				return false;
			}
			break;
		case 5:
			break;
		case 2:
			if (uParam0->f_2 == 4)
			{
				return false;
			}
			if (!uParam1->f_5)
			{
				return false;
			}
			iVar2 = ((uParam0->f_7 + uParam2->f_1) - uParam1->f_4);
			if (iVar2 <= 0)
			{
				return false;
			}
			if (uParam1->f_2 < iVar2)
			{
				return false;
			}
			if (uParam2->f_1 < uParam0->f_8 && uParam1->f_2 > iVar2)
			{
				return false;
			}
			if (uParam0->f_557.f_3 == 1312290981)
			{
				switch (uParam0->f_2)
				{
					case 0:
					case 1:
						if (uParam2->f_1 > uParam0->f_597 || (uParam2->f_1 < uParam0->f_597 && uParam1->f_2 > iVar2))
						{
							return false;
						}
						break;
					case 2:
					case 3:
						if (uParam2->f_1 > uParam0->f_598 || (uParam2->f_1 < uParam0->f_598 && uParam1->f_2 > iVar2))
						{
							return false;
						}
						break;
				}
			}
			break;
		case 6:
			if (uParam0->f_2 != 4)
			{
				return false;
			}
			if (uParam1->f_6 != 0)
			{
				return false;
			}
			break;
		default:
			return false;
	}
	return true;
}

void func_1553(var uParam0, var uParam1)
{
	if (uParam0->f_19 >= 6)
	{
		return;
	}
	(*uParam0)[uParam0->f_19 /*3*/] = *uParam1;
	(uParam0[uParam0->f_19 /*3*/])->f_1 = uParam1->f_4;
	(uParam0[uParam0->f_19 /*3*/])->f_2 = uParam1->f_2;
	uParam0->f_19++;
}

bool func_1554(var uParam0, int iParam1)
{
	return uParam0->f_538[iParam1 /*3*/] != -1;
}

void func_1555(var uParam0, var uParam1)
{
	if (uParam0->f_19 >= 6)
	{
		return;
	}
	(*uParam0)[uParam0->f_19 /*3*/] = *uParam1;
	(uParam0[uParam0->f_19 /*3*/])->f_1 = uParam1->f_1;
	(uParam0[uParam0->f_19 /*3*/])->f_2 = uParam1->f_2;
	uParam0->f_19++;
}

void func_1556(var uParam0, int iParam1)
{
	if (uParam0->f_19 == 0)
	{
		return;
	}
	while (iParam1 < (uParam0->f_19 - 1))
	{
		(*uParam0)[iParam1 /*3*/] = (*uParam0)[iParam1 + 1 /*3*/];
		(uParam0[iParam1 /*3*/])->f_1 = (uParam0[iParam1 + 1 /*3*/])->f_1;
		(uParam0[iParam1 /*3*/])->f_2 = (uParam0[iParam1 + 1 /*3*/])->f_2;
		iParam1++;
	}
	uParam0->f_19 = (uParam0->f_19 - 1);
}

void func_1557(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (uParam1->f_19 > 0 && iParam3 > 0)
	{
		iVar3 = -1;
		iVar2 = 0;
		while (iVar2 < uParam0->f_485)
		{
			iVar5 = 0;
			iVar1 = 0;
			while (iVar1 < uParam0->f_376[iVar2 /*18*/].f_9)
			{
				iVar0 = 0;
				while (iVar0 < uParam1->f_19)
				{
					if ((*uParam1)[iVar0 /*3*/] == uParam0->f_376[iVar2 /*18*/].f_2[iVar1])
					{
						iVar5++;
					}
					else
					{
						iVar0++;
					}
				}
				iVar1++;
			}
			if (!uParam0->f_724[iVar2] && iVar5 == uParam1->f_19)
			{
				iVar3 = iVar2;
			}
			iVar2++;
		}
		if (iVar3 == -1)
		{
			iVar3 = uParam0->f_485;
			uParam0->f_485++;
			uParam0->f_376[iVar3 /*18*/] = 0;
			uParam0->f_376[iVar3 /*18*/].f_9 = 0;
			uParam0->f_376[iVar3 /*18*/].f_17 = 0;
			uParam0->f_724[iVar3] = 0;
		}
		iVar0 = 0;
		while (iVar0 < uParam1->f_19)
		{
			iVar6 = __LIB_0__::func_259(iParam3, (uParam1[iVar0 /*3*/])->f_1);
			func_1692(uParam0, iVar3, (*uParam1)[iVar0 /*3*/], iVar6);
			(uParam1[iVar0 /*3*/])->f_1 = ((uParam1[iVar0 /*3*/])->f_1 - iVar6);
			iVar4 = 0;
			while (iVar4 < uParam2->f_19)
			{
				if ((*uParam2)[iVar4 /*3*/] == (*uParam1)[iVar0 /*3*/])
				{
					(uParam2[iVar4 /*3*/])->f_1 = ((uParam2[iVar4 /*3*/])->f_1 - iVar6);
				}
				iVar4++;
			}
			if (func_387(uParam0, (*uParam1)[iVar0 /*3*/]))
			{
				uParam0->f_39[(*uParam1)[iVar0 /*3*/] /*56*/].f_4 = (uParam0->f_39[(*uParam1)[iVar0 /*3*/] /*56*/].f_4 - iVar6);
			}
			iVar0++;
		}
		uParam0->f_724[iVar3] = iParam4;
	}
}

bool func_1574(var uParam0, int iParam1, int iParam2, float fParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.038f, -0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 11.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1179f, 0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 1.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.0351f, 0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 19.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0718f, -0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 9.99f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0696f, 0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -48.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.0133f, 0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -58.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1651f, 0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -40.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0408f, -0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -50.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0316f, 0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -108.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1046f, 0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -118.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1299f, -0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -100.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.1126f, -0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -110.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.038f, 0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -168.8103f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1179f, -0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -178.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.0351f, -0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -160.9886f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0718f, 0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -170.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0696f, -0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 131.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.0133f, -0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 121.446f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1651f, -0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 139.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0408f, 0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 129.9899f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0316f, -0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 71.1897f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1046f, -0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 61.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1299f, 0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 79.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.1126f, 0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 69.9899f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return false;
	}
	if (bParam6)
	{
		func_531(*uParam0, uParam0->f_3, vVar1, vVar4, fParam3, uParam4);
	}
	else
	{
		*fParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	fParam3->f_2 = (fParam3->f_2 + (BUILTIN::TO_FLOAT(iParam5) * 0.006f));
	return true;
}

bool func_1577(var uParam0, int iParam1, int iParam2, float fParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0353f, 0.196f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.0603f, 0.1639f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.0746f, 0.197f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.112f, 0.1826f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.1521f, 0.1285f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1118f, 0.1341f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1333f, 0.1631f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.1022f, 0.1883f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.1874f, -0.0674f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1721f, -0.0298f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2079f, -0.0339f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.2142f, 0.0057f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0353f, -0.196f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.0603f, -0.1639f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.0746f, -0.197f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.112f, -0.1826f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.1521f, -0.1285f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1118f, -0.1341f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1333f, -0.1631f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.1022f, -0.1883f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.1874f, 0.0674f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1721f, 0.0298f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.2079f, 0.0339f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.2142f, -0.0057f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return false;
	}
	if (bParam6)
	{
		func_531(*uParam0, uParam0->f_3, vVar1, vVar4, fParam3, uParam4);
	}
	else
	{
		*fParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	fParam3->f_2 = (fParam3->f_2 + (BUILTIN::TO_FLOAT(iParam5) * 0.006f));
	return true;
}

void func_1588(var uParam0, char* sParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, sParam1);
}

void func_1591(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_4, bParam1);
}

void func_1593(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_34[iParam1 /*19*/].f_5, true);
}

void func_1596(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_10, bParam1);
}

void func_1597(var uParam0)
{
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	uParam0->f_151 = 0;
}

void func_1598(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_9, -1, "player_stack_item", uParam0->f_34[iParam1 /*19*/].f_1);
	MISC::SET_BIT(&(uParam0->f_151), iParam1);
}

int func_1599(var uParam0, char* sParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			StringCopy(sParam1, "HEARTS_", 16);
			break;
		case 1:
			StringCopy(sParam1, "DIAMONDS_", 16);
			break;
		case 3:
			StringCopy(sParam1, "CLUBS_", 16);
			break;
		case 2:
			StringCopy(sParam1, "SPADES_", 16);
			break;
		default:
			StringCopy(sParam1, "BACK", 16);
			return 0;
	}
	switch (*uParam0)
	{
		case 2:
			StringConCat(sParam1, "2", 16);
			break;
		case 3:
			StringConCat(sParam1, "3", 16);
			break;
		case 4:
			StringConCat(sParam1, "4", 16);
			break;
		case 5:
			StringConCat(sParam1, "5", 16);
			break;
		case 6:
			StringConCat(sParam1, "6", 16);
			break;
		case 7:
			StringConCat(sParam1, "7", 16);
			break;
		case 8:
			StringConCat(sParam1, "8", 16);
			break;
		case 9:
			StringConCat(sParam1, "9", 16);
			break;
		case 10:
			StringConCat(sParam1, "10", 16);
			break;
		case 11:
			StringConCat(sParam1, "J", 16);
			break;
		case 12:
			StringConCat(sParam1, "Q", 16);
			break;
		case 13:
			StringConCat(sParam1, "K", 16);
			break;
		case 14:
			StringConCat(sParam1, "A", 16);
			break;
		default:
			StringCopy(sParam1, "BACK", 16);
			return 0;
	}
	return 1;
}

void func_1600(var uParam0, int iParam1, char[4] cParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_17)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_17[iParam1], cParam2);
}

void func_1601(var uParam0, int iParam1)
{
	if (uParam0->f_153)
	{
		return;
	}
	uParam0->f_155 = iParam1;
}

void func_1602(var uParam0)
{
	if (uParam0->f_153)
	{
		return;
	}
	if (uParam0->f_155)
	{
		__LIB_0__::func_105(1);
		uParam0->f_156 = 0;
	}
}

float func_1604(int iParam0, int iParam1)
{
	int iVar0;
	if ((((iParam0 < 0 || iParam0 >= 6) || iParam1 < 0) || iParam1 >= 6) || iParam1 == iParam0)
	{
		return -1f;
	}
	iVar0 = ((iParam1 - iParam0) - 1);
	while (iVar0 < 0)
	{
		iVar0 += 6;
	}
	return BUILTIN::TO_FLOAT(iVar0);
}

int func_1605(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_472(uParam0, iVar1) && iVar1 != iParam1)
		{
			return iVar1;
		}
		iVar1 = (iVar1 + 1 % 6);
		iVar0++;
	}
	return -1;
}

void func_1607(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = uParam0->f_73[iParam1 /*30*/].f_5[iVar0];
		iVar0++;
	}
}

int func_1609(var uParam0, int iParam1)
{
	if (uParam0->f_50[iParam1 /*19*/] != 2)
	{
		return 0;
	}
	return uParam0->f_50[iParam1 /*19*/].f_18;
}

char* func_1610(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "ARTHUR";
		case 2:
			return "JOHN";
		case 9:
			return "RRVD_PokerGuy2";
		case 10:
			return "RRVD_PokerGuy";
		case 12:
			return "JOHN";
		case 20:
			return "LENNY";
		case 23:
			return "PEARSON";
		case 24:
			return "STRAUSS";
		case 25:
			return "SUSAN";
		case 26:
			return "SWANSON";
		default:
			break;
	}
	return "unknown";
}

void func_1614(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = uParam0->f_7;
	iVar1 = uParam0->f_8;
	if (iVar0 == 0)
	{
		*uParam3 = 0;
		*uParam4 = uParam0->f_10;
	}
	else
	{
		*uParam3 = iVar0;
		*uParam4 = (iVar0 + iVar1);
	}
	if (iVar0 > 0 && iVar1 == 0)
	{
	}
	*uParam5 = (uParam0->f_39[iParam2 /*56*/].f_2 + uParam0->f_39[iParam2 /*56*/].f_4);
	if (uParam1->f_3 == 1717653435 && uParam1->f_16 > 0)
	{
		iVar2 = ((uParam1->f_16 - uParam0->f_39[iParam2 /*56*/].f_3) + uParam0->f_39[iParam2 /*56*/].f_4);
		if (*uParam5 > iVar2)
		{
			*uParam5 = iVar2;
		}
	}
	if (!uParam0->f_39[iParam2 /*56*/].f_5)
	{
		if (*uParam5 > iVar0)
		{
			*uParam5 = iVar0;
		}
	}
	if (*uParam3 > *uParam5)
	{
		*uParam3 = *uParam5;
	}
	if (*uParam4 > *uParam5)
	{
		*uParam4 = *uParam5;
	}
	if (bParam6)
	{
		iVar3 = func_1200(uParam0, iParam2);
		*uParam3 = (*uParam3 - iVar3);
		*uParam4 = (*uParam4 - iVar3);
		*uParam5 = (*uParam5 - iVar3);
	}
}

char* func_1617(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR_RANKL1_2";
		case 3:
			return "MGPKR_RANKL1_3";
		case 4:
			return "MGPKR_RANKL1_4";
		case 5:
			return "MGPKR_RANKL1_5";
		case 6:
			return "MGPKR_RANKL1_6";
		case 7:
			return "MGPKR_RANKL1_7";
		case 8:
			return "MGPKR_RANKL1_8";
		case 9:
			return "MGPKR_RANKL1_9";
		case 10:
			return "MGPKR_RANKL1_10";
		case 11:
			return "MGPKR_RANKL1_JACK";
		case 12:
			return "MGPKR_RANKL1_QUEEN";
		case 13:
			return "MGPKR_RANKL1_KING";
		case 14:
			return "MGPKR_RANKL1_ACE";
		default:
			break;
	}
	return "unknown";
}

char* func_1618(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR_RANKL2_2";
		case 3:
			return "MGPKR_RANKL2_3";
		case 4:
			return "MGPKR_RANKL2_4";
		case 5:
			return "MGPKR_RANKL2_5";
		case 6:
			return "MGPKR_RANKL2_6";
		case 7:
			return "MGPKR_RANKL2_7";
		case 8:
			return "MGPKR_RANKL2_8";
		case 9:
			return "MGPKR_RANKL2_9";
		case 10:
			return "MGPKR_RANKL2_10";
		case 11:
			return "MGPKR_RANKL2_JACK";
		case 12:
			return "MGPKR_RANKL2_QUEEN";
		case 13:
			return "MGPKR_RANKL2_KING";
		case 14:
			return "MGPKR_RANKL2_ACE";
		default:
			break;
	}
	return "unknown";
}

bool func_1619(int iParam0)
{
	if (iParam0 == 8 || iParam0 == 14)
	{
		return false;
	}
	return true;
}

char* func_1620(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MGPKR_SUIT_HEART";
		case 1:
			return "MGPKR_SUIT_DMOND";
		case 2:
			return "MGPKR_SUIT_SPADE";
		case 3:
			return "MGPKR_SUIT_CLUB";
		default:
			break;
	}
	return "unknown";
}

char* func_1621(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR_RANKU1_2";
		case 3:
			return "MGPKR_RANKU1_3";
		case 4:
			return "MGPKR_RANKU1_4";
		case 5:
			return "MGPKR_RANKU1_5";
		case 6:
			return "MGPKR_RANKU1_6";
		case 7:
			return "MGPKR_RANKU1_7";
		case 8:
			return "MGPKR_RANKU1_8";
		case 9:
			return "MGPKR_RANKU1_9";
		case 10:
			return "MGPKR_RANKU1_10";
		case 11:
			return "MGPKR_RANKU1_JACK";
		case 12:
			return "MGPKR_RANKU1_QUEEN";
		case 13:
			return "MGPKR_RANKU1_KING";
		case 14:
			return "MGPKR_RANKU1_ACE";
		default:
			break;
	}
	return "unknown";
}

bool func_1622(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (uParam1->f_3 == 1717653435 && uParam1->f_16 > 0)
	{
		if ((uParam0->f_39[iParam2 /*56*/].f_3 + iParam3) >= uParam1->f_16)
		{
			return true;
		}
	}
	return false;
}

int func_1623(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = (uParam1->f_7 - uParam1->f_39[iParam2 /*56*/].f_4);
	return func_1704(uParam0, uParam1, iParam2, iVar0);
}

int func_1624(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = (func_144(uParam1, iParam2) + func_469(uParam1, iParam2));
	switch (uParam1->f_2)
	{
		case 0:
			iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar0) * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.225f, 0.333f)));
			break;
		case 1:
			iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar0) * 1f));
			break;
		case 2:
			iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar0) * 1f));
			break;
		case 3:
			iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar0) * 1f));
			break;
	}
	iVar1 = (iVar0 - func_469(uParam1, iParam2));
	if (iVar1 <= 0)
	{
		iVar1 = uParam1->f_8;
	}
	return func_1704(uParam0, uParam1, iParam2, iVar1);
}

int func_1625(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = func_144(uParam1, iParam2);
	return func_1704(uParam0, uParam1, iParam2, iVar0);
}

int func_1626(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	iVar0 = func_144(uParam2, iParam3);
	if (iVar0 < 20)
	{
		return func_1704(uParam1, uParam2, iParam3, iVar0);
	}
	return func_1628(uParam0, uParam2, uParam1, iParam4);
}

int func_1627(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 6)
	{
		if (func_472(uParam2, iVar3) && uParam0->f_90[iVar3] == 13)
		{
			bVar0 = true;
			if (func_144(uParam2, iVar3) > (__LIB_4__::func_809(uParam2) + __LIB_4__::func_188(uParam2)))
			{
				iVar1 = 1;
			}
		}
		iVar3++;
	}
	if (func_144(uParam2, iParam3) > (__LIB_4__::func_809(uParam2) + __LIB_4__::func_188(uParam2)) + 75)
	{
		iVar2 = 1;
	}
	if (!bVar0 || (iVar1 && iVar2))
	{
		if (func_1628(uParam0, uParam2, uParam1, iParam4))
		{
			if (*uParam1 == 2)
			{
				func_1706(uParam1, uParam2, iParam3);
			}
			return 1;
		}
	}
	else
	{
		func_1707(uParam1, uParam2, iParam3);
		return 1;
	}
	return 0;
}

bool func_1628(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	struct<10> Var4;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	bool bVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	iVar0 = uParam1->f_6;
	iVar1 = (uParam1->f_7 - uParam1->f_39[iVar0 /*56*/].f_4);
	iVar2 = uParam1->f_39[iVar0 /*56*/].f_2;
	fVar3 = uParam0->f_9[uParam0->f_44[iParam3 /*3*/]];
	Var4 = { uParam0->f_13[uParam0->f_44[iParam3 /*3*/].f_1 /*10*/] };
	fVar14 = uParam0->f_1[iVar0];
	fVar15 = func_1708(fVar14, fVar3, 0, 1065353216 /* Float: 1f */);
	fVar16 = func_1709(uParam1, iVar0, uParam1->f_2 == 0);
	iVar17 = uParam1->f_39[iVar0 /*56*/].f_2;
	fVar18 = ((BUILTIN::TO_FLOAT(iVar17) - IntToFloat(uParam1->f_7)) / IntToFloat(iVar17));
	if (fVar18 < 0f)
	{
		fVar18 = 0f;
	}
	fVar19 = ((MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar16) * 0.7f) + (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar18) * 0.3f));
	bVar20 = fVar19 > 0.6f;
	if (bVar20)
	{
	}
	switch (uParam1->f_2)
	{
		case 0:
			if (bVar20)
			{
				fVar21 = ((0.5f * fVar16) + (0.5f * fVar15));
			}
			else
			{
				fVar21 = ((0.3f * fVar16) + (0.7f * fVar15));
			}
			break;
		case 1:
			if (bVar20)
			{
				fVar21 = ((0.6f * fVar16) + (0.4f * fVar15));
			}
			else
			{
				fVar21 = ((0.15f * fVar16) + (0.85f * fVar15));
			}
			break;
		case 2:
			if (bVar20)
			{
				fVar21 = ((0.5f * fVar16) + (0.5f * fVar15));
			}
			else
			{
				fVar21 = ((0.1f * fVar16) + (0.9f * fVar15));
			}
			break;
		case 3:
			if (bVar20)
			{
				fVar21 = ((0.5f * fVar16) + (0.5f * fVar15));
			}
			else
			{
				fVar21 = ((0f * fVar16) + (1f * fVar15));
			}
			break;
	}
	iVar22 = func_1710(uParam1);
	iVar23 = func_665(uParam1);
	if (iVar22 < 2 && uParam1->f_7 == 0)
	{
		func_1711(uParam2, uParam1, iVar0);
		return true;
	}
	else if (func_1712(fVar21, iVar23))
	{
		func_1707(uParam2, uParam1, iVar0);
		return true;
	}
	else if (func_1713(fVar21, iVar23))
	{
		if (func_1714(iVar1, iVar2))
		{
			if (uParam1->f_7 == 0)
			{
				func_1715(uParam2, uParam1, iVar0, Var4, Var4.f_1);
			}
			else
			{
				func_1716(uParam2, uParam1, iVar0, Var4.f_4, Var4.f_5);
			}
			return true;
		}
		else
		{
			func_1707(uParam2, uParam1, iVar0);
			return true;
		}
	}
	else if (!func_1717(fVar16, uParam1->f_2))
	{
		if (iVar1 == 0)
		{
			func_1715(uParam2, uParam1, iVar0, Var4.f_2, Var4.f_3);
		}
		else
		{
			func_1716(uParam2, uParam1, iVar0, Var4.f_6, Var4.f_7);
		}
		return true;
	}
	else if (iVar1 == 0)
	{
		func_1711(uParam2, uParam1, iVar0);
		return true;
	}
	else if (!func_1718(fVar21, iVar23))
	{
		func_1719(uParam2, uParam1, iVar0);
		return true;
	}
	else
	{
		func_1716(uParam2, uParam1, iVar0, Var4.f_8, Var4.f_9);
		return true;
	}
	return false;
}

bool func_1631(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (iParam3 > 32)
	{
		iParam3 = 32;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < iParam3)
	{
		if (MISC::IS_BIT_SET((uParam0[iParam1 /*13*/])->f_9, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0 >= iParam2;
}

bool func_1632(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (iParam3 > 32)
	{
		iParam3 = 32;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < iParam3)
	{
		if (MISC::IS_BIT_SET((uParam0[iParam1 /*13*/])->f_8, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0 >= iParam2;
}

char* func_1634()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_ALLIN_DONE");
}

char* func_1635()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_MAX_BET_DONE");
}

int func_1636(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	iVar3 = 0;
	while (iVar3 < uParam0->f_376[iParam1 /*18*/].f_9)
	{
		iVar2 = uParam0->f_376[iParam1 /*18*/].f_2[iVar3];
		bVar1 = false;
		if (iParam1 < (uParam0->f_485 - 1))
		{
			iVar4 = 0;
			while (iVar4 < uParam0->f_376[iParam1 + 1 /*18*/].f_9)
			{
				if (uParam0->f_376[iParam1 + 1 /*18*/].f_2[iVar4] == iVar2)
				{
					bVar1 = true;
				}
				else
				{
					iVar4++;
				}
			}
		}
		if (!bVar1)
		{
			if (iVar0 < uParam0->f_39[iVar2 /*56*/].f_3)
			{
				iVar0 = uParam0->f_39[iVar2 /*56*/].f_3;
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_1637(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (iParam3 > 32)
	{
		iParam3 = 32;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < iParam3)
	{
		if (MISC::IS_BIT_SET((uParam0[iParam1 /*13*/])->f_10, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0 >= iParam2;
}

bool func_1638(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (iParam3 > 32)
	{
		iParam3 = 32;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < iParam3)
	{
		if (MISC::IS_BIT_SET((uParam0[iParam1 /*13*/])->f_11, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0 >= iParam2;
}

bool func_1639(var uParam0)
{
	if (uParam0->f_24 >= 0 && uParam0->f_24 <= 9)
	{
		return true;
	}
	return false;
}

int func_1640(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 5;
		default:
			break;
	}
	return 0;
}

void func_1641(var uParam0, var uParam1, var uParam2)
{
	MINIGAME::_0x32A7C216344D623B(uParam1, uParam2, uParam0);
}

void func_1642(var uParam0, int iParam1, int iParam2, float fParam3)
{
	if (uParam0->f_2497[iParam1] != 0)
	{
	}
	else
	{
		uParam0->f_2497[iParam1] = iParam2;
		__LIB_0__::func_268(&(uParam0->f_2504[iParam1 /*3*/]), fParam3);
	}
}

void func_1643(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_34[iParam1 /*19*/].f_5, false);
}

struct<5> func_1661(int iParam0, bool bParam1, bool bParam2)
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
				if (!func_1663(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_1663(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
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

int func_1662(int iParam0, int iParam1)
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
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 237:
			return joaat("SLOTID_HORSE_BLANKET");
		case 238:
			return joaat("SLOTID_HORSE_CANTLE");
		case 239:
			return joaat("SLOTID_HORSE_FENDER");
		case 240:
			return joaat("SLOTID_HORSE_HORN");
		case 241:
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
bool func_1663(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return __LIB_0__::func_800(iParam0, *uParam1, iParam2, iParam3) > 0;
}

void func_1680(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_153)
	{
		return;
	}
	if (uParam0->f_155)
	{
		__LIB_0__::func_105(1);
		__LIB_4__::func_981(sParam1, 0, 0, 1);
		uParam0->f_156 = iParam2;
	}
}

void func_1681(var uParam0, int iParam1)
{
	uParam0->f_2104.f_1 = iParam1;
	__LIB_1__::func_148(&(uParam0->f_2104.f_2));
}

void func_1682(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_153)
	{
		return;
	}
	if (uParam0->f_155)
	{
		__LIB_0__::func_105(1);
		__LIB_0__::func_45(sParam1, 10000, 0, 0, 0, 1);
		uParam0->f_156 = iParam2;
	}
}

void func_1685(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (uParam0->f_785[iParam1 /*52*/] == 0)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_8 != 1)
	{
	}
	else if (uParam0->f_785[iParam1 /*52*/].f_1 != 2 && uParam0->f_785[iParam1 /*52*/].f_1 != 1)
	{
	}
	else
	{
		__LIB_12__::func_437(uParam0, iParam1, 23);
		__LIB_18__::func_551(uParam0, iParam1, 0);
		switch (iParam2)
		{
			case 0:
				iVar0 = ((uParam0->f_769 + MISC::GET_RANDOM_INT_IN_RANGE(1, 5)) % 5);
				uParam0->f_769 = iVar0;
				break;
			default:
				iVar0 = ((uParam0->f_770 + MISC::GET_RANDOM_INT_IN_RANGE(1, 4)) % 4);
				uParam0->f_770 = iVar0;
				break;
		}
		uParam0->f_785[iParam1 /*52*/].f_35 = iParam2;
		uParam0->f_785[iParam1 /*52*/].f_36 = iVar0;
		if (!uParam0->f_40)
		{
			switch (iParam2)
			{
				case 0:
					if (uParam0->f_785[iParam1 /*52*/].f_1 == 2)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "FidgetHoldCardsSubtle");
					}
					else
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "FidgetNoCardsSubtle");
					}
					break;
				default:
					if (uParam0->f_785[iParam1 /*52*/].f_1 == 2)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "FidgetHoldCards");
					}
					else
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_785[iParam1 /*52*/], "FidgetNoCards");
					}
					break;
			}
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_785[iParam1 /*52*/], "CheckType", BUILTIN::TO_FLOAT(iVar0));
		}
	}
}

var func_1686(var uParam0, int iParam1)
{
	return uParam0->f_486[iParam1];
}

void func_1690(var uParam0)
{
	struct<72> Var0;
	int iVar72;
	Var0.f_10 = 6;
	Var0 = 1959158395;
	StringCopy(&(Var0.f_1), "", 64);
	Var0.f_9 = uParam0->f_537;
	Var0.f_71 = 0;
	iVar72 = 0;
	while (iVar72 < 6)
	{
		if (!func_1074(uParam0, iVar72))
		{
			Var0.f_10[Var0.f_71 /*10*/] = iVar72;
			Var0.f_10[Var0.f_71 /*10*/].f_1 = 0;
			Var0.f_10[Var0.f_71 /*10*/].f_8.f_1 = 0;
			Var0.f_10[Var0.f_71 /*10*/].f_8 = func_1686(uParam0, iVar72);
			Var0.f_71++;
		}
		iVar72++;
	}
	MINIGAME::_0xE1F365C4C8F259D8(Var0, &Var0, 72);
}

void func_1692(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (!uParam0->f_724[iParam1])
	{
		uParam0->f_376[iParam1 /*18*/] = (uParam0->f_376[iParam1 /*18*/] + iParam3);
		iVar0 = 0;
		while (iVar0 < uParam0->f_376[iParam1 /*18*/].f_9)
		{
			if (uParam0->f_376[iParam1 /*18*/].f_2[iVar0] == iParam2)
			{
				return;
			}
			iVar0++;
		}
		uParam0->f_376[iParam1 /*18*/].f_2[uParam0->f_376[iParam1 /*18*/].f_9] = iParam2;
		uParam0->f_376[iParam1 /*18*/].f_9++;
	}
}

int func_1704(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	iParam3 = func_1757(uParam1, iParam2, iParam3);
	iVar0 = (uParam1->f_7 - uParam1->f_39[iParam2 /*56*/].f_4);
	if (iParam3 > iVar0 && func_1710(uParam1) > 1)
	{
		*uParam0 = 2;
		uParam0->f_1 = (iParam3 - iVar0);
		return 1;
	}
	if (iVar0 != 0)
	{
		*uParam0 = 3;
		uParam0->f_1 = 0;
		return 1;
	}
	*uParam0 = 4;
	uParam0->f_1 = 0;
	return 1;
}

int func_1706(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = (uParam1->f_7 - uParam1->f_39[iParam2 /*56*/].f_4);
	if (iVar0 == 0)
	{
		*uParam0 = 4;
		uParam0->f_1 = 0;
		return 1;
	}
	*uParam0 = 3;
	uParam0->f_1 = 0;
	return 1;
}

int func_1707(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = (uParam1->f_7 - uParam1->f_39[iParam2 /*56*/].f_4);
	if (iVar0 == 0)
	{
		*uParam0 = 4;
		uParam0->f_1 = 0;
		return 1;
	}
	*uParam0 = 5;
	uParam0->f_1 = 0;
	return 1;
}

float func_1708(float fParam0, float fParam1, float fParam2, float fParam3)
{
	fParam0 = (fParam0 * fParam1);
	if (fParam0 < fParam2)
	{
		fParam0 = fParam2;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	return fParam0;
}

float func_1709(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_665(uParam0);
	iVar1 = uParam0->f_3;
	if (bParam2)
	{
		iVar1 = uParam0->f_5;
	}
	else
	{
		iVar1 = uParam0->f_3;
	}
	if (iParam1 == iVar1)
	{
		return 1f;
	}
	iVar2 = iParam1;
	iVar3 = 0;
	while (iVar2 != iVar1)
	{
		iVar2 = (iVar2 + 1 % 6);
		if (func_472(uParam0, iVar2))
		{
			iVar3++;
		}
	}
	return (BUILTIN::TO_FLOAT((iVar0 - iVar3)) / BUILTIN::TO_FLOAT(iVar0));
}

int func_1710(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if ((uParam0->f_39[iVar1 /*56*/] != -1 && uParam0->f_39[iVar1 /*56*/].f_6 == 0) && uParam0->f_39[iVar1 /*56*/].f_2 > 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1711(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = (uParam1->f_7 - uParam1->f_39[iParam2 /*56*/].f_4);
	if (iVar0 != 0)
	{
		return 0;
	}
	*uParam0 = 4;
	uParam0->f_1 = 0;
	return 1;
}

bool func_1712(float fParam0, int iParam1)
{
	float fVar0[7];
	fVar0[0] = 1f;
	fVar0[1] = 1f;
	fVar0[2] = 0.35f;
	fVar0[3] = 0.4f;
	fVar0[4] = 0.45f;
	fVar0[5] = 0.5f;
	fVar0[6] = 0.5f;
	return fParam0 < fVar0[iParam1];
}

bool func_1713(float fParam0, int iParam1)
{
	float fVar0[7];
	fVar0[0] = 1f;
	fVar0[1] = 1f;
	fVar0[2] = 0.6f;
	fVar0[3] = 0.65f;
	fVar0[4] = 0.7f;
	fVar0[5] = 0.75f;
	fVar0[6] = 0.75f;
	return fParam0 < fVar0[iParam1];
}

bool func_1714(int iParam0, int iParam1)
{
	return iParam0 < (iParam1 / 2);
}

int func_1715(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar0 = func_870(uParam1);
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4);
	iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar0) * fVar1));
	return func_1704(uParam0, uParam1, iParam2, iVar2);
}

int func_1716(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar0 = (uParam1->f_7 - uParam1->f_39[iParam2 /*56*/].f_4);
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4);
	iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar0) * fVar1));
	return func_1704(uParam0, uParam1, iParam2, iVar2);
}

bool func_1717(float fParam0, int iParam1)
{
	float fVar0;
	if (fParam0 == 1f && iParam1 == 3)
	{
		fVar0 = 1f;
	}
	else if (fParam0 > 0f)
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam0);
	}
	else
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	}
	return fVar0 <= 0.4f;
}

bool func_1718(float fParam0, int iParam1)
{
	float fVar0[7];
	fVar0[0] = 1f;
	fVar0[1] = 1f;
	fVar0[2] = 0.8f;
	fVar0[3] = 0.8f;
	fVar0[4] = 0.85f;
	fVar0[5] = 0.85f;
	fVar0[6] = 0.85f;
	return fParam0 >= fVar0[iParam1];
}

int func_1719(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = (uParam1->f_7 - uParam1->f_39[iParam2 /*56*/].f_4);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (uParam1->f_39[iParam2 /*56*/].f_2 == 0)
	{
		return 0;
	}
	*uParam0 = 3;
	uParam0->f_1 = 0;
	return 1;
}

int func_1757(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;
	Var3.f_18 = 20;
	func_1614(uParam0, &Var3, iParam1, &iVar0, &iVar1, &iVar2, 1);
	if (iParam2 < iVar0)
	{
		iParam2 = iVar0;
	}
	else if (iParam2 > iVar0 && iParam2 < iVar1)
	{
		if (IntToFloat(iParam2) < (IntToFloat((iVar0 + iVar1)) / 2f))
		{
			iParam2 = iVar0;
		}
		else
		{
			iParam2 = iVar1;
		}
	}
	else if (iParam2 > iVar2)
	{
		iParam2 = iVar2;
	}
	return iParam2;
}

