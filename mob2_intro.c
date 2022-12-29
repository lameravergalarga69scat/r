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
	struct<4> Local_14 = { 0, 0, 0, 1 } ;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23[1] = { 0 };
	var uLocal_25[1] = { 0 };
	var uLocal_27[2] = { 0, 0 };
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	struct<2907> Local_39 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	struct<4> Var1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (__LIB_5__::func_203(Local_39))
		{
			__LIB_0__::func_8(&Global_1935630, 32768);
		}
		func_3(&Local_39, 1);
	}
	__LIB_5__::func_610(&uScriptParam_0, &Local_39);
	while (!__LIB_2__::func_27(&Local_39, 1))
	{
		if (__LIB_4__::func_721(&Local_39) != 10)
		{
			if ((__LIB_4__::func_721(&Local_39) == 3 || __LIB_4__::func_721(&Local_39) == 4) && (!__LIB_5__::func_132(&Local_39) || __LIB_0__::func_78(&(Local_39.f_958)) > 0))
			{
				__LIB_7__::func_446(&Local_39, __LIB_2__::func_27(&Local_39, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && __LIB_5__::func_204(&Local_39)) && __LIB_2__::func_27(&Local_39, 65536))
			{
				__LIB_7__::func_446(&Local_39, 1);
			}
		}
		if (__LIB_4__::func_721(&Local_39) >= 3 && __LIB_4__::func_721(&Local_39) <= 7)
		{
			__LIB_5__::func_525(&Local_39);
		}
		if (((((__LIB_4__::func_721(&Local_39) >= 5 && __LIB_4__::func_721(&Local_39) <= 7) && !__LIB_2__::func_27(&Local_39, 4096)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_39.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_39.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_39.f_428.f_444))
		{
			MemCopy(&Var1, {__LIB_4__::func_681(Local_39)}, 4);
			func_13(Var1, &(Local_39.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (__LIB_4__::func_721(&Local_39))
		{
			case 8:
				if (__LIB_5__::func_607(&Local_39))
				{
					__LIB_5__::func_536(&Local_39);
					__LIB_0__::func_0(&Local_39);
					__LIB_4__::func_722(&Local_39, 0);
				}
				else if (!__LIB_5__::func_204(&Local_39))
				{
					if (!__LIB_0__::func_75(&(Local_39.f_2899)))
					{
						__LIB_1__::func_283(&(Local_39.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_39))
					{
						if (__LIB_0__::func_264(&(Local_39.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_39.f_2889, 2097152);
							__LIB_5__::func_174(&Local_39);
							__LIB_5__::func_608(&Local_39);
							__LIB_4__::func_722(&Local_39, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_39, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_39, 536870912);
						}
						__LIB_1__::func_148(&(Local_39.f_2899));
					}
				}
				break;
			case 0:
				if (__LIB_5__::func_204(&Local_39))
				{
					__LIB_0__::func_0(&Local_39);
				}
				if (!__LIB_5__::func_204(&Local_39) || __LIB_2__::func_27(&Local_39, 65536))
				{
					if (func_27(&Local_39))
					{
						__LIB_4__::func_722(&Local_39, 1);
					}
				}
				break;
			case 1:
				if (__LIB_5__::func_204(&Local_39))
				{
					__LIB_0__::func_0(&Local_39);
				}
				if (func_28(&Local_39))
				{
					__LIB_4__::func_722(&Local_39, 2);
				}
				break;
			case 2:
				if (__LIB_5__::func_204(&Local_39))
				{
					__LIB_0__::func_0(&Local_39);
				}
				if (func_29(&Local_39))
				{
					if (!__LIB_5__::func_132(&Local_39) || __LIB_5__::func_204(&Local_39))
					{
						if (!__LIB_0__::func_79(Local_39.f_2889))
						{
							Local_39.f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(Local_39));
						}
						__LIB_1__::func_109(Local_39.f_2889, 4);
						__LIB_5__::func_410(&Local_39, 8192);
					}
					if (__LIB_5__::func_204(&Local_39))
					{
						__LIB_5__::func_175(&Local_39);
						__LIB_4__::func_722(&Local_39, 9);
					}
					else
					{
						__LIB_4__::func_722(&Local_39, 3);
					}
				}
				break;
			case 9:
				if (__LIB_0__::func_0(&Local_39))
				{
					__LIB_0__::func_11(&Local_39);
					__LIB_5__::func_536(&Local_39);
					func_35(&Local_39);
					if (!__LIB_2__::func_27(&Local_39, 256))
					{
						__LIB_0__::func_11(&Local_39);
						__LIB_5__::func_227(Local_39);
						func_38(&Local_39);
						__LIB_4__::func_722(&Local_39, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_39, 5);
					}
				}
				break;
			case 3:
				if (!__LIB_2__::func_27(&Local_39, 8192))
				{
					if (__LIB_0__::func_78(&(Local_39.f_958)) == 3)
					{
						__LIB_1__::func_109(Local_39.f_2889, 4);
						__LIB_5__::func_410(&Local_39, 8192);
					}
				}
				func_39(&Local_39);
				if (__LIB_3__::func_919(__LIB_0__::func_80(Global_1835011[Local_39 /*74*/].f_1), 512))
				{
				}
				else if (__LIB_9__::func_415(&Local_39) || __LIB_5__::func_176(&Local_39, 32768))
				{
					__LIB_0__::func_11(&Local_39);
					__LIB_5__::func_536(&Local_39);
					__LIB_4__::func_722(&Local_39, 4);
					__LIB_1__::func_283(&(Local_39.f_2890), 0);
				}
				else if (__LIB_5__::func_204(&Local_39) && !__LIB_5__::func_203(Local_39))
				{
					if (!__LIB_0__::func_75(&(Local_39.f_2899)))
					{
						__LIB_1__::func_283(&(Local_39.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_39))
					{
						if (__LIB_0__::func_264(&(Local_39.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_39.f_2889, 2097152);
							__LIB_5__::func_174(&Local_39);
							__LIB_5__::func_608(&Local_39);
							__LIB_4__::func_722(&Local_39, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_39, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_39, 536870912);
						}
						__LIB_1__::func_148(&(Local_39.f_2899));
					}
				}
				break;
			case 4:
				func_43(&Local_39);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (__LIB_9__::func_415(&Local_39) || (__LIB_5__::func_176(&Local_39, 32768) && !__LIB_2__::func_27(&Local_39, 268435456)))
				{
					func_35(&Local_39);
					if (!__LIB_2__::func_27(&Local_39, 256))
					{
						__LIB_0__::func_11(&Local_39);
						func_38(&Local_39);
						if (!__LIB_0__::func_1(Global_1935630, 524288) || __LIB_5__::func_176(&Local_39, 524288))
						{
							__LIB_5__::func_227(Local_39);
							__LIB_4__::func_722(&Local_39, 7);
						}
						else
						{
							__LIB_4__::func_722(&Local_39, 6);
						}
					}
					else
					{
						__LIB_5__::func_227(Local_39);
						__LIB_4__::func_722(&Local_39, 5);
					}
				}
				break;
			case 5:
				__LIB_11__::func_302(&Local_39);
				__LIB_5__::func_526(&Local_39);
				if (__LIB_0__::func_265(&(Local_39.f_2884)) >= __LIB_4__::func_723(&Local_39))
				{
					__LIB_0__::func_11(&Local_39);
					func_38(&Local_39);
					__LIB_1__::func_148(&(Local_39.f_2884));
					if (!__LIB_5__::func_176(&Local_39, 524288))
					{
						__LIB_5__::func_227(Local_39);
						__LIB_4__::func_722(&Local_39, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_39, 6);
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75(&(Local_39.f_2906)))
				{
					__LIB_1__::func_283(&(Local_39.f_2906), 0);
				}
				if ((__LIB_0__::func_81(&(Local_39.f_428)) == 4 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_39.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_39.f_428.f_444))
				{
					__LIB_5__::func_227(Local_39);
					__LIB_4__::func_722(&Local_39, 7);
				}
				else if (__LIB_0__::func_265(&(Local_39.f_2906)) >= 5f)
				{
					__LIB_5__::func_227(Local_39);
					__LIB_4__::func_722(&Local_39, 7);
				}
				break;
			case 7:
				__LIB_0__::func_11(&Local_39);
				if (__LIB_5__::func_530(&Local_39))
				{
					__LIB_4__::func_722(&Local_39, 10);
				}
				break;
			case 10:
				if (func_3(&Local_39, 0))
				{
					__LIB_5__::func_410(&Local_39, 1);
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(int iParam0, bool bParam1)
{
	iParam0->f_2902 = bParam1;
	if (!func_53(iParam0) && !bParam1)
	{
		return false;
	}
	__LIB_5__::func_217(iParam0);
	__LIB_5__::func_205(iParam0);
	func_56(iParam0);
	__LIB_5__::func_224(iParam0);
	__LIB_4__::func_724(iParam0);
	__LIB_4__::func_776(*iParam0);
	__LIB_4__::func_777(*iParam0);
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_5);
	}
	if (!Global_1935630.f_12)
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
	}
	if (__LIB_2__::func_27(iParam0, 1024))
	{
		__LIB_0__::func_733(1);
		__LIB_0__::func_8(&Global_1935630, 32768);
	}
	else
	{
		__LIB_5__::func_177();
	}
	if (bParam1)
	{
		if (__LIB_4__::func_725(&(iParam0->f_958), 33554436) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
		__LIB_5__::func_133(&(iParam0->f_958));
	}
	__LIB_4__::func_726(iParam0, 0);
	if (__LIB_2__::func_27(iParam0, 536870912))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		__LIB_4__::func_727(iParam0, 536870912);
	}
	if (bParam1)
	{
		__LIB_0__::func_82(1, 0, 0);
	}
	if (__LIB_2__::func_27(iParam0, -2147483648))
	{
		__LIB_5__::func_206();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	__LIB_4__::func_779(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_5__::func_225(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_444, false))
				{
					__LIB_5__::func_603(uParam4, &uParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444))
				{
					__LIB_1__::func_747(uParam4, 4);
					return 0;
				}
				else if (__LIB_4__::func_729(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_437);
				}
				__LIB_1__::func_747(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_446)) && __LIB_0__::func_84(uParam4, 134217728))
				{
				}
				else
				{
					__LIB_5__::func_411(uParam4);
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
				__LIB_5__::func_412(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
			{
				if (__LIB_5__::func_518(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
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
					__LIB_5__::func_603(uParam4, &uParam0);
					__LIB_1__::func_747(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_94(uParam4);
			if (__LIB_4__::func_729(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_437);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_444, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_4__::func_780(uParam4, 1))
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
				__LIB_5__::func_225(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_4__::func_730(uParam4) - __LIB_4__::func_731(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_4__::func_781(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_4__::func_731(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_4__::func_732(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
				}
				__LIB_0__::func_488(uParam4);
				__LIB_5__::func_613(uParam4);
				return 1;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_444);
						}
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_4__::func_733(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_4__::func_731(uParam4) <= 5000) && __LIB_4__::func_731(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_5__::func_430(&(uParam4->f_501), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_4__::func_731(uParam4) >= 5000 && __LIB_4__::func_731(uParam4) <= (__LIB_4__::func_730(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_4__::func_732(uParam4))
			{
				__LIB_0__::func_488(uParam4);
				__LIB_5__::func_613(uParam4);
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
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_444))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_4__::func_729(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_438);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
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

bool func_27(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		iParam0->f_5 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_6))
	{
		iParam0->f_6 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_7))
	{
		iParam0->f_7 = ITEMSET::CREATE_ITEMSET(true);
	}
	__LIB_5__::func_425(*iParam0, iParam0->f_5, iParam0->f_6, iParam0->f_7);
	if (__LIB_0__::func_86(__LIB_5__::func_601(iParam0)))
	{
		vVar0 = { __LIB_4__::func_681(*iParam0) };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
		{
			StringCopy(&(iParam0->f_428.f_440), "cutscene@", 32);
			StringConCat(&(iParam0->f_428.f_440), &vVar0, 32);
			vVar3 = { __LIB_5__::func_207(&(iParam0->f_428)) };
			if (!__LIB_0__::func_86(vVar3))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, __LIB_1__::func_469(*iParam0), true) >= 10f)
				{
					__LIB_9__::func_108(iParam0, __LIB_1__::func_469(*iParam0));
				}
				else
				{
					__LIB_9__::func_108(iParam0, vVar3);
				}
			}
			else
			{
				return false;
			}
		}
	}
	if (!func_128(iParam0))
	{
		return false;
	}
	iParam0->f_55.f_1 = 67108863;
	iParam0->f_55 = 2;
	iParam0->f_55 = 1;
	__LIB_5__::func_531(iParam0);
	__LIB_11__::func_94(iParam0);
	__LIB_5__::func_224(iParam0);
	__LIB_5__::func_609(iParam0, Global_35, 0, 0, 0, 1);
	__LIB_5__::func_604(iParam0);
	func_133(iParam0);
	return true;
}

bool func_28(int iParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!func_134(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_135(iParam0, 0))
	{
		iVar0 = 0;
	}
	if (!__LIB_2__::func_27(iParam0, 1073741824 /* Float: 2f */) && !__LIB_5__::func_347(*iParam0, 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_29(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (!func_137(-1, 0))
	{
	}
	else if (!__LIB_0__::func_27(iLocal_20, 2))
	{
		PED::_SET_PED_BODY_COMPONENT(Local_14.f_3[0], 1146234389);
		PED::_UPDATE_PED_VARIATION(Local_14.f_3[0], false, true, true, true, false);
		__LIB_1__::func_683(&iLocal_20, 2);
	}
	if (func_140())
	{
		func_141();
	}
	else
	{
		return false;
	}
	__LIB_5__::func_609(iParam0, Global_35, "ARTHUR", 0, 0, 1);
	func_143(iParam0, &iLocal_32, 0, func_142(0, 0));
	func_143(iParam0, &iLocal_31, 1, func_142(0, 1));
	if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_3[0]))
	{
		__LIB_4__::func_766(iParam0, Local_14.f_3[0]);
		WEAPON::_GIVE_WEAPON_TO_PED_2(Local_14.f_3[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		PED::SET_PED_CONFIG_FLAG(Local_14.f_3[0], 253, true);
		PED::SET_PED_CONFIG_FLAG(Local_14.f_3[0], 169, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_3[0], joaat("REL_CIVMALE"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3[0], true);
		__LIB_2__::func_231(Local_14.f_3[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		__LIB_5__::func_183(iParam0, Local_14.f_3[0], 0);
		__LIB_4__::func_766(iParam0, Local_14.f_3[0]);
		__LIB_5__::func_609(iParam0, Local_14.f_3[0], "G_M_M_UNIBRONTEGOONS_01", 0, 0, 1);
	}
	iLocal_22 = 0;
	while (iLocal_22 < 1)
	{
		if (!PED::_0x91A5F9CBEBB9D936(uLocal_25[iLocal_22]))
		{
			vVar1 = { func_147(1, iLocal_22) };
			fVar4 = func_148(1, iLocal_22);
			iVar0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar1, 0f, 0f, 0f, 10f, 10f, 10f, "m_sbiGeneric");
			VOLUME::_SET_VOLUME_ROTATION(iVar0, 0f, 0f, fVar4);
			uLocal_25[iLocal_22] = PED::_0x4C39C95AE5DB1329(iVar0, false, 15);
		}
		iLocal_22++;
	}
	iLocal_22 = 0;
	while (iLocal_22 < 2)
	{
		if (!PED::_0x91A5F9CBEBB9D936(uLocal_27[iLocal_22]))
		{
			if (iLocal_22 == 0)
			{
				iVar0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2431.21f, -1205.752f, 47.64969f, 0f, 0f, -76.14959f, 58.78015f, 86.0213f, 8.302324f, "m_sbiMob2[MOB2_SBIVOLUME_PARK]");
			}
			else if (iLocal_22 == 1)
			{
				iVar0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2361.321f, -1218.033f, 52.0577f, 0f, 0f, 0.827839f, 94.15996f, 60.925f, 40.12043f, "m_sbiMob2[MOB2_SBIVOLUME_BRONTES_MANSION]");
			}
			uLocal_27[iLocal_22] = PED::_0x4C39C95AE5DB1329(iVar0, false, 15);
		}
		iLocal_22++;
	}
	func_149();
	func_150(1);
	__LIB_9__::func_168(iParam0);
	__LIB_5__::func_410(iParam0, 8);
	__LIB_5__::func_410(iParam0, 33554432);
	__LIB_9__::func_73(iParam0, 100f);
	__LIB_9__::func_74(iParam0, 130f);
	return true;
}

void func_35(int iParam0)
{
	func_56(iParam0);
	__LIB_0__::func_8(&Global_1935630, 32768);
	__LIB_9__::func_837(iParam0);
	__LIB_1__::func_148(&(iParam0->f_2884));
	if (__LIB_4__::func_682())
	{
		__LIB_4__::func_782();
	}
	if (__LIB_5__::func_176(iParam0, 524288))
	{
		__LIB_0__::func_7(&Global_1935630, 524288);
	}
	else if (!__LIB_5__::func_176(iParam0, 32768))
	{
		Global_43805 = iParam0->f_958.f_1684;
	}
	__LIB_5__::func_413(&(iParam0->f_428), &(iParam0->f_958));
	if (__LIB_2__::func_27(iParam0, 262144))
	{
		if (__LIB_0__::func_90(&(Global_1835011[*iParam0 /*74*/].f_29), 4))
		{
			CLOCK::SET_CLOCK_TIME(__LIB_4__::func_735(4), 0, 0);
		}
		else if (__LIB_0__::func_90(&(Global_1835011[*iParam0 /*74*/].f_29), 2))
		{
			CLOCK::SET_CLOCK_TIME(__LIB_4__::func_735(2), 0, 0);
		}
		else if (__LIB_0__::func_90(&(Global_1835011[*iParam0 /*74*/].f_29), 8))
		{
			CLOCK::SET_CLOCK_TIME(__LIB_4__::func_735(8), 0, 0);
		}
		else if (__LIB_0__::func_90(&(Global_1835011[*iParam0 /*74*/].f_29), 16))
		{
			CLOCK::SET_CLOCK_TIME(__LIB_4__::func_735(16), 0, 0);
		}
		else if (__LIB_0__::func_90(&(Global_1835011[*iParam0 /*74*/].f_29), 32))
		{
			CLOCK::SET_CLOCK_TIME(__LIB_4__::func_735(32), 0, 0);
		}
	}
}

void func_38(int iParam0)
{
	vector3 vVar0;
	struct<4> Var3;
	vVar0 = { __LIB_4__::func_681(*iParam0) };
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_428.f_444))
	{
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_428.f_444, true, false))
	{
		Global_43800 = iParam0->f_428.f_444;
	}
	else
	{
		if (__LIB_4__::func_725(&(iParam0->f_958), 8))
		{
			if (!__LIB_4__::func_725(&(iParam0->f_958), 131072))
			{
				if (!__LIB_4__::func_725(&(iParam0->f_958), 32768))
				{
					if (!__LIB_2__::func_27(iParam0, 8))
					{
						__LIB_5__::func_395(&(iParam0->f_428), &(iParam0->f_958));
					}
				}
			}
		}
		MemCopy(&Var3, {vVar0}, 4);
		func_13(Var3, &(iParam0->f_428));
	}
}

int func_39(int iParam0)
{
	int iVar0;
	struct<28> Var1;
	int iVar29;
	int iVar30;
	Var1.f_8 = -1;
	Var1.f_17 = 1097859072;
	Var1.f_18 = 1000;
	Var1.f_19 = 1067450368;
	Var1.f_20 = 5000;
	Var1.f_21 = 42;
	Var1.f_22 = 1103626240;
	Var1.f_23 = 1077936128;
	Var1.f_24 = 1106247680;
	Var1.f_25 = 1103101952;
	Var1.f_26 = 1097859072;
	Var1.f_27 = 1103626240;
	Var1 = 2176;
	iVar29 = 2054;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_37, 1, 0) || __LIB_11__::func_304(Local_14.f_3[0], 0, &Var1, &iVar29, 0, 0))
		{
			__LIB_5__::func_450(&(Global_1835011[28 /*74*/]), 1024);
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_14.f_3[0], 780511057, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Local_14.f_3[0], 780511057, true) != 1)
			{
				__LIB_4__::func_291(Local_14.f_3[0], iLocal_37, 0, 0);
				PED::SET_PED_FLEE_ATTRIBUTES(Local_14.f_3[0], 512, true);
				PED::SET_PED_COMBAT_RANGE(Local_14.f_3[0], 3);
				TASK::TASK_COMBAT_PED(Local_14.f_3[0], Global_35, 0, 0);
				PED::SET_PED_KEEP_TASK(Local_14.f_3[0], true);
				PED::SET_PED_CONFIG_FLAG(Local_14.f_3[0], 253, false);
				PED::SET_PED_CONFIG_FLAG(Local_14.f_3[0], 169, false);
			}
		}
		if (__LIB_1__::func_205(Global_35, iLocal_35, 1, 0))
		{
			func_168();
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				__LIB_5__::func_450(&(Global_1835011[28 /*74*/]), 1024);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iVar0 = PED::GET_MOUNT(Global_35);
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					iLocal_33 = iVar0;
					if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 501393341, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, 501393341, true) != 1)
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
						TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_33))
			{
				if (__LIB_1__::func_205(iLocal_33, iLocal_35, 1, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_33, 242628503, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_33, 242628503, true) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar30);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_169(0, 2), 1f, 20000, 0.25f, 0, func_170(0, 2));
						TASK::CLOSE_SEQUENCE_TASK(iVar30);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_33, iVar30);
						TASK::CLEAR_SEQUENCE_TASK(&iVar30);
					}
				}
			}
		}
		if (__LIB_0__::func_94(Global_35, func_169(0, 0), 1) < 100f)
		{
			__LIB_8__::func_781();
			if (MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME() != joaat("OVERCAST"))
			{
				if (!__LIB_0__::func_27(iLocal_20, 1))
				{
					MISC::_SET_WEATHER_TYPE(joaat("OVERCAST"), true, true, true, 10f, false);
					__LIB_1__::func_683(&iLocal_20, 1);
				}
			}
		}
	}
	return func_173(iParam0);
}

bool func_43(int iParam0)
{
	__LIB_3__::func_815(0, 1065353216 /* Float: 1f */);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_32, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_31, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_32) && !ENTITY::IS_ENTITY_DEAD(iLocal_32))
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iLocal_32, "Mob2_Intro", 0f, 0f, 0f, iLocal_32, 0);
	}
	return !__LIB_2__::func_27(iParam0, 64);
}

bool func_53(int iParam0)
{
	__LIB_0__::func_172(iLocal_35);
	__LIB_8__::func_807(0, 1103626240 /* Float: 25f */);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_32, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_31, false);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_23[0]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_23[0]);
	}
	iLocal_22 = 0;
	while (iLocal_22 < 1)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_25[iLocal_22], false);
		iLocal_22++;
	}
	iLocal_22 = 0;
	while (iLocal_22 < 2)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_27[iLocal_22], false);
		iLocal_22++;
	}
	func_150(0);
	return true;
}

void func_56(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = __LIB_3__::func_919(iParam0->f_2889, 2097152);
	bVar1 = __LIB_2__::func_27(iParam0, 1024);
	iVar2 = 0;
	while (iVar2 < 27)
	{
		iVar3 = iVar2;
		if (!__LIB_0__::func_31(iVar3))
		{
		}
		else if (!__LIB_0__::func_699(iVar3))
		{
		}
		else if (!__LIB_1__::func_22(iVar3))
		{
		}
		else
		{
			iVar4 = Global_1360165[iVar2 /*1157*/];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
			}
			else
			{
				func_182(iParam0, iVar3, iVar4, 0, bVar0, !bVar1, 0);
			}
		}
		iVar2++;
	}
}

void func_94(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_500, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_4__::func_748(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_500, 524288))
		{
			__LIB_5__::func_432(&(uParam0->f_512));
		}
		func_245(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_749(uParam0, 0f, 0f, 0f);
		func_247(uParam0);
		func_248(uParam0);
		__LIB_5__::func_137(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_5__::func_189(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_513)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_513));
		}
	}
}

bool func_128(int iParam0)
{
	int iVar0;
	iVar0 = 1;
	if (__LIB_0__::func_273(0, 16, 1) && !__LIB_1__::func_22(0))
	{
		return false;
	}
	if (__LIB_0__::func_273(1, 16, 1) && !__LIB_1__::func_22(1))
	{
		return false;
	}
	if (!func_282(iParam0, &iLocal_32, 0, func_142(0, 0), 0))
	{
		iVar0 = 0;
	}
	if (!func_282(iParam0, &iLocal_31, 1, func_142(0, 1), -922193456))
	{
		iVar0 = 0;
	}
	else
	{
		__LIB_0__::func_203(iLocal_31);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_35))
	{
		iLocal_35 = VOLUME::_CREATE_VOLUME_CYLINDER(2447.533f, -1212.597f, 47.80427f, 0f, 0f, 0f, 29.63224f, 21.09302f, 8.560916f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_36))
	{
		iLocal_36 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2440.922f, -1215.36f, 48.17067f, 0f, 0f, 0f, 91.68518f, 113.0415f, 28.57837f, "m_volClear");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_38))
	{
		iLocal_38 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2445.17f, -1213.12f, 50.63202f, 0f, 0f, 0f, 55.39652f, 44.21892f, 12.43718f, "m_volPathClear");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_37))
	{
		iLocal_37 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2399.575f, -1216.143f, 46.94058f, 0f, 0f, 0f, 7.349407f, 44.78005f, 4.959486f, "m_volMansionDisrupt");
	}
	STREAMING::REQUEST_MODEL(joaat("G_M_M_UNIBRONTEGOONS_01"), false);
	if (!STREAMING::HAS_MODEL_LOADED(joaat("G_M_M_UNIBRONTEGOONS_01")))
	{
	}
	__LIB_5__::func_410(iParam0, 16);
	__LIB_5__::func_410(iParam0, 256);
	__LIB_5__::func_410(iParam0, 64);
	__LIB_5__::func_410(iParam0, 2048);
	__LIB_9__::func_417(iParam0, (5f * 2f));
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_32) && !ENTITY::IS_ENTITY_DEAD(iLocal_31)) && STREAMING::HAS_MODEL_LOADED(joaat("G_M_M_UNIBRONTEGOONS_01")))
	{
		return iVar0;
	}
	return false;
}

void func_133(int iParam0)
{
	if (__LIB_4__::func_745(&(iParam0->f_428)) != 15f || __LIB_4__::func_743(&(iParam0->f_428)) != 20f)
	{
		return;
	}
	switch (*iParam0)
	{
		case 31:
			__LIB_4__::func_753(&(iParam0->f_428), 50f);
			__LIB_4__::func_754(&(iParam0->f_428), 75f);
			Jump @175; //curOff = 107
			__LIB_4__::func_753(&(iParam0->f_428), 35f);
			__LIB_4__::func_754(&(iParam0->f_428), 50f);
			Jump @175; //curOff = 138
			__LIB_4__::func_753(&(iParam0->f_428), 25f);
			__LIB_4__::func_754(&(iParam0->f_428), 30f);
		}
int func_134(int iParam0)
{
	return __LIB_5__::func_340(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

bool func_135(int iParam0, bool bParam1)
{
	int iVar0;
	if (__LIB_2__::func_27(iParam0, 2))
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return true;
	}
	iVar0 = __LIB_5__::func_191(*iParam0);
	if (!__LIB_0__::func_31(iVar0))
	{
		return true;
	}
	iParam0->f_4 = ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iVar0));
	return func_292(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

bool func_137(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_1))
	{
		Local_14.f_1 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_1), 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_3[0] = __LIB_1__::func_545(joaat("G_M_M_UNIBRONTEGOONS_01"), 2400.687f, -1215.232f, 45.8323f, 271.6733f, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[0], "Guard01");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[0]);
		__LIB_5__::func_510(Local_14.f_3[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_1), 1);
	return true;
}

bool func_140()
{
	bool bVar0;
	bVar0 = true;
	switch (iLocal_21)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_23[0]))
			{
				iLocal_23[0] = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@mob2@leadin@int_c@base", 0, 0, false, true);
				bVar0 = false;
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_23[0], true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_23[0], true))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_23[0]);
				}
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_21 = 1;
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[0]))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_21 = 2;
			}
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_23[0], "G_M_M_UNIBRONTEGOONS_01", Local_14.f_3[0], 0);
			iLocal_21 = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

void func_141()
{
	ANIMSCENE::START_ANIM_SCENE(iLocal_23[0]);
}

struct<4> func_142(int iParam0, int iParam1)
{
	return func_303(iParam0, iParam1);
}

void func_143(int iParam0, int iParam1, int iParam2, struct<4> Param3)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		TASK::CLEAR_PED_TASKS(*iParam1, true, false);
		TASK::TASK_STAND_STILL(*iParam1, -1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
		func_304(*iParam1, Param3, Param3.f_3, 2, 1073741824 /* Float: 2f */);
		__LIB_5__::func_609(iParam0, *iParam1, 0, 0, 0, 1);
		__LIB_5__::func_183(iParam0, *iParam1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(*iParam1, true);
	}
}

Vector3 func_147(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2448.243f, -1200.651f, 46.8211f;
				case 1:
					return 2447.844f, -1201.995f, 46.8197f;
				case 2:
					return 2460.32f, -1185.566f, 46.8469f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2444.414f, -1200.74f, 45.9786f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_148(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 158.977f;
				case 1:
					return 338.977f;
				case 2:
					return 181.0241f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 80.2636f;
			}
			break;
	}
	return 0f;
}

void func_149()
{
	__LIB_1__::func_948(-516807739, 1, 0f, 0, 0, 0, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-516807739, 0f, true);
	__LIB_1__::func_948(-777091906, 1, 0f, 0, 0, 0, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-777091906, 0f, true);
}

void func_150(bool bParam0)
{
	if (bParam0)
	{
		POPULATION::_0xB56D41A694E42E86(iLocal_36, 10208, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_36, 10208, 0, 0, -1, -1, 0);
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_36, 0, 0, 0);
		PATHFIND::_0xB03944057FD735BA(iLocal_36, 6, 0);
		uLocal_30 = __LIB_1__::func_391(iLocal_38, 0, 0, 0);
	}
	else
	{
		PATHFIND::_0xD17672447692478E(iLocal_36, 0);
		PATHFIND::_0xD17672447692478E(iLocal_36, 0);
		PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_36, 6, 0);
		POPULATION::_0x74C2B3DC0B294102(iLocal_36);
		POPULATION::_0xA1CFB35069D23C23(iLocal_36);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_30, false);
		__LIB_1__::func_600(1);
	}
}

int func_168()
{
	int iVar0;
	switch (iLocal_19)
	{
		case 0:
			if (!PED::IS_PED_INJURED(Global_35))
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar0))
					{
						iLocal_34 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, true) != 1)
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar0))
						{
							PED::_0x6569F31A01B4C097(iLocal_34, 0, 0);
							PED::_0x6569F31A01B4C097(iLocal_34, 1, 0);
							PED::_0x6569F31A01B4C097(iLocal_34, 6, 0);
							TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iLocal_34, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1f, 1);
						}
						else
						{
							ENTITY::_0x18FF3110CF47115D(iVar0, 1, 0);
							ENTITY::_0x18FF3110CF47115D(iVar0, 2, 0);
							ENTITY::_0x18FF3110CF47115D(iVar0, 3, 0);
							ENTITY::_0x18FF3110CF47115D(iVar0, 7, 0);
							ENTITY::_0x18FF3110CF47115D(iVar0, 12, 0);
						}
						iLocal_19 = 1;
					}
				}
				else
				{
					iLocal_19 = 2;
				}
			}
			break;
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, true) != 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_34) && ENTITY::IS_ENTITY_A_PED(iLocal_34))
				{
					ENTITY::_0x18FF3110CF47115D(iLocal_34, 1, 0);
					ENTITY::_0x18FF3110CF47115D(iLocal_34, 2, 0);
					ENTITY::_0x18FF3110CF47115D(iLocal_34, 3, 0);
					ENTITY::_0x18FF3110CF47115D(iLocal_34, 7, 0);
					ENTITY::_0x18FF3110CF47115D(iLocal_34, 12, 0);
				}
				iLocal_19 = 0;
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

Vector3 func_169(int iParam0, int iParam1)
{
	return func_147(iParam0, iParam1);
}

float func_170(int iParam0, int iParam1)
{
	return func_148(iParam0, iParam1);
}

int func_173(int iParam0)
{
	char cVar0[32];
	int iVar4;
	if (__LIB_2__::func_27(iParam0, 16))
	{
		if (__LIB_2__::func_27(iParam0, 64))
		{
			StringCopy(&cVar0, "MOB2_WNT", 32);
			func_353(&(iParam0->f_958), cVar0, 1, 0);
			if (__LIB_11__::func_303(&(iParam0->f_958), 1, 0))
			{
				if (__LIB_5__::func_139(&(iParam0->f_958), iVar4))
				{
				}
				__LIB_4__::func_727(iParam0, 64);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_182(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (!__LIB_0__::func_31(iParam1))
	{
		return;
	}
	__LIB_0__::func_130(iParam2);
	if (bParam4)
	{
		__LIB_5__::func_422(iParam0, iParam2, 0);
	}
	if (!bParam6)
	{
		if (!__LIB_2__::func_27(iParam0, 4194304))
		{
			bParam6 = __LIB_3__::func_740(&(Global_1835011[*iParam0 /*74*/]), 1024);
			bVar0 = __LIB_3__::func_740(&(Global_1835011[*iParam0 /*74*/]), 65536);
		}
	}
	func_366(iParam1, iParam3, bParam4, bParam5, -1082130432 /* Float: -1f */, 1, 1, bParam6, bVar0, 0, 0);
}

void func_245(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_432();
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
			__LIB_5__::func_431(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_247(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0)))
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
			func_304(iVar1, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_304(iVar3, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_248(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_760(uParam0) };
			func_304(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_282(int iParam0, int iParam1, int iParam2, vector3 vParam3, var uParam6, int iParam7)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return true;
	}
	if (func_292(iParam0, iParam2, iParam1, 1, 1, vParam3.x, vParam3.y, vParam3.z, 0, iParam7, 0, 0, 0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam1, 1);
	}
	return false;
}

bool func_292(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	vector3 vVar0;
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if (__LIB_4__::func_767(iParam0, *iParam2))
	{
		if (*iParam2 != __LIB_0__::func_167(iParam1))
		{
		}
		return true;
	}
	vVar0 = { uParam5, uParam6, uParam7 };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { __LIB_1__::func_469(*iParam0) };
	}
	if (!__LIB_0__::func_287(iParam1, 28, 1))
	{
		__LIB_0__::func_288(iParam1, 28, 1);
	}
	*iParam2 = func_507(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam2))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(*iParam2))
		{
			return false;
		}
		__LIB_4__::func_766(iParam0, *iParam2);
		__LIB_4__::func_768(iParam0, *iParam2);
		__LIB_4__::func_787(*iParam2, bParam3, bParam4, 0);
		if (bParam4)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
			if (!__LIB_0__::func_163(*iParam2, -982327190))
			{
				TASK::TASK_STAND_STILL(*iParam2, -1);
			}
		}
		__LIB_5__::func_532(iParam0, *iParam2, 0, 0, 0, 1, 0);
		func_510(iParam1, 0, 0, 1);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

struct<4> func_303(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_147(iParam0, iParam1) };
	Var0.f_3 = func_148(iParam0, iParam1);
	return Var0;
}

void func_304(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_304(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_304(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_353(var uParam0, char[16] cParam1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_4__::func_725(uParam0, 32768))
	{
		return 1;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1896 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1897 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1899 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1897)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1898 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1898 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1899)
		{
			uParam0->f_1901 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1902 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_5__::func_192(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			func_579(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_4__::func_725(uParam0, 524288))
				{
					__LIB_5__::func_222(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_4__::func_751(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_5__::func_419(uParam0, iParam5);
					return 1;
				}
			}
			if (!__LIB_4__::func_725(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 16))
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
			if (uParam0->f_1684 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_5__::func_139(uParam0, uParam0->f_1684))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1688 >= 0)
					{
						__LIB_5__::func_420(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1688 >= 0)
				{
					__LIB_5__::func_420(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				func_585(uParam0);
			}
		}
	}
	bVar0 = __LIB_11__::func_303(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_4__::func_725(uParam0, 268435456) && bVar1) && !__LIB_4__::func_725(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902);
			if (uParam0->f_1684 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1016[uParam0->f_1684 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1902)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_4__::func_757(uParam0, 131072);
				__LIB_4__::func_757(uParam0, 268435456);
			}
		}
		if (__LIB_4__::func_756(uParam0, 64) || (uParam0->f_1684 >= 0 && !__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_4__::func_725(uParam0, 131072))
	{
		__LIB_5__::func_140(uParam0);
		if (!__LIB_4__::func_725(uParam0, 262144))
		{
			if ((bVar0 && __LIB_4__::func_725(uParam0, 65536)) || __LIB_4__::func_725(uParam0, 131072))
			{
				__LIB_4__::func_757(uParam0, 32768);
				__LIB_4__::func_751(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1769 = 1;
				__LIB_5__::func_419(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_9__::func_77(uParam0, iParam5);
		__LIB_5__::func_141(uParam0);
		if (!__LIB_5__::func_142(uParam0, 1))
		{
			__LIB_4__::func_786(uParam0);
		}
		__LIB_5__::func_143(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_9__::func_418(uParam0, cParam1, iParam5);
			break;
		case 1:
			__LIB_5__::func_529(uParam0);
			break;
		case 2:
			__LIB_5__::func_522(uParam0);
			break;
		case 3:
			if (__LIB_5__::func_144(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_5__::func_420(uParam0, uParam0->f_1016[uParam0->f_1684 /*41*/].f_27, uParam0->f_1345[uParam0->f_1684 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1872));
				__LIB_4__::func_751(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_4__::func_725(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_5__::func_145(uParam0))
				{
					__LIB_4__::func_751(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_5__::func_146(uParam0))
				{
					__LIB_4__::func_751(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1685 >= 0 || __LIB_0__::func_264(&(uParam0->f_1872)) >= 15f)
			{
				if (__LIB_5__::func_399(uParam0, iParam5))
				{
					if (__LIB_5__::func_147(uParam0))
					{
						uParam0->f_1685 = __LIB_5__::func_193(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1872));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_4__::func_751(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_4__::func_751(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_5__::func_419(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		case 9:
			if (__LIB_5__::func_399(uParam0, iParam5))
			{
				__LIB_5__::func_419(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return 1;
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

void func_366(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_699(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		__LIB_0__::func_288(iParam0, 56, 1);
		__LIB_1__::func_283(&(Global_1359489.f_40), 1);
	}
	__LIB_0__::func_904(iParam0, 0);
	__LIB_0__::func_289(iParam0, 4, 0);
	__LIB_0__::func_745(iParam0);
	__LIB_0__::func_706(iParam0);
	__LIB_0__::func_290(iParam0, 37, 1);
	bVar0 = __LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = __LIB_0__::func_748(iParam0, 0);
	bVar2 = PERSCHAR::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (__LIB_0__::func_287(iParam0, 64, 1))
	{
		__LIB_0__::func_290(iParam0, 64, 1);
	}
	if (bParam3)
	{
		__LIB_0__::func_290(iParam0, 33, 1);
		__LIB_0__::func_290(iParam0, 34, 1);
		__LIB_1__::func_27(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		__LIB_0__::func_707(iParam0, 1, 1, 0);
		if (bParam6)
		{
			__LIB_0__::func_288(iParam0, 30, 1);
		}
		if (bParam7)
		{
			__LIB_0__::func_288(iParam0, 35, 1);
			if (bParam8)
			{
				__LIB_0__::func_288(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			__LIB_0__::func_705(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		__LIB_0__::func_290(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		__LIB_0__::func_288(iParam0, 33, 1);
		__LIB_0__::func_707(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			__LIB_1__::func_283(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			__LIB_0__::func_37(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			__LIB_0__::func_288(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			__LIB_1__::func_197(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (__LIB_0__::func_287(iParam0, 45, 1))
	{
		__LIB_0__::func_290(iParam0, 45, 1);
	}
	__LIB_0__::func_176(iParam0, 16, 1);
	__LIB_0__::func_290(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
		{
			func_622(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_432()
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
			__LIB_2__::func_231(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_650(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_2__::func_231(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_507(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
						func_366(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
				func_510(iParam0, 0, 0, 1);
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
				func_304(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

void func_510(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_701(iParam0, bParam3);
	}
	else
	{
		func_702(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_703(iParam0, bParam3);
	}
	else
	{
		func_704(iParam0, bParam3);
	}
}

void func_579(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!__LIB_4__::func_725(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231.f_4)
	{
		return;
	}
	if (!__LIB_4__::func_725(uParam0, 4096) && uParam0->f_1896)
	{
		return;
	}
	if (!__LIB_4__::func_725(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_585(uParam0);
	__LIB_5__::func_415(uParam0, uParam0->f_1897, uParam0->f_1899);
	__LIB_5__::func_195(uParam0);
	if (uParam0->f_1900 && !uParam0->f_1899)
	{
		if (((((uParam0->f_1895 >= 0 && uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 > 0f) && uParam0->f_1688 >= 0) && !__LIB_0__::func_266(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, (uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 + 5f), 1, 1)) && !__LIB_4__::func_725(uParam0, 33554432)) && !__LIB_4__::func_725(uParam0, 4))
		{
			__LIB_5__::func_614(uParam0, uParam0->f_1897);
			return;
		}
	}
	if (!__LIB_4__::func_725(uParam0, 4))
	{
		if (__LIB_5__::func_196(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1684 = uParam0->f_1688;
				__LIB_4__::func_757(uParam0, 8);
				return;
			}
		}
		else
		{
			__LIB_5__::func_614(uParam0, uParam0->f_1897);
		}
		if (uParam0->f_1016[uParam0->f_1690 /*41*/].f_29)
		{
			fVar0 = __LIB_5__::func_533(uParam0, uParam0->f_1690);
			if (fVar0 < 0f || (uParam0->f_1897 && fVar0 < 1f))
			{
				uParam0->f_1688 = uParam0->f_1690;
				if (!bParam2)
				{
					uParam0->f_1684 = uParam0->f_1690;
					__LIB_4__::func_757(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1689 == -1f || fVar0 <= uParam0->f_1689) || uParam0->f_1690 == uParam0->f_1688)
				{
					if (uParam0->f_1690 != uParam0->f_1688)
					{
					}
					uParam0->f_1688 = uParam0->f_1690;
					uParam0->f_1689 = fVar0;
					__LIB_4__::func_757(uParam0, 16);
					if (((!__LIB_4__::func_725(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, true) < (uParam0->f_1016[uParam0->f_1688 /*41*/].f_11 + 5f))
					{
						__LIB_5__::func_424(uParam0);
						__LIB_4__::func_757(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1688 == uParam0->f_1690)
			{
				__LIB_4__::func_755(uParam0, 16);
			}
		}
		if (uParam0->f_1690 + 1 >= 8)
		{
			uParam0->f_1690 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1690 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_1016[iVar2 /*41*/].f_29)
				{
					uParam0->f_1690 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1690 = 0;
			}
		}
		if (uParam0->f_1688 < 0)
		{
			return;
		}
		if (__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2) && uParam0->f_1897)
		{
			return;
		}
	}
	if (__LIB_4__::func_725(uParam0, 16))
	{
		fVar4 = __LIB_0__::func_94(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		if (uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = __LIB_0__::func_152(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1875, uParam0->f_1879))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 + uParam0->f_1016[uParam0->f_1688 /*41*/].f_10))
			{
				__LIB_5__::func_420(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_1899 && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1875, uParam0->f_1879)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1901) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1901, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1901);
			}
		}
		else if ((uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1898))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1898, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_1897 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1898) > 1.25f) || __LIB_4__::func_725(uParam0, 4))
	{
		if (((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1875, uParam0->f_1879) && __LIB_5__::func_533(uParam0, uParam0->f_1688) < 10000f) && __LIB_4__::func_725(uParam0, 16)) || __LIB_4__::func_725(uParam0, 4))
		{
			if (!__LIB_4__::func_725(uParam0, 4))
			{
				__LIB_4__::func_757(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!__LIB_5__::func_139(uParam0, uParam0->f_1688))
			{
				iVar7 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1686), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_1016[uParam0->f_1688 /*41*/].f_7, uParam0->f_1016[uParam0->f_1688 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1686 = 0;
				__LIB_4__::func_755(uParam0, 4);
			}
		}
	}
	else if (__LIB_4__::func_725(uParam0, 4))
	{
		__LIB_4__::func_755(uParam0, 4);
	}
}

void func_585(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	iVar0 = uParam0->f_1688;
	if (iVar0 >= 0 && !__LIB_5__::func_142(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iVar0 /*41*/].f_1, true) <= uParam0->f_1016[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_1692 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_1692), __LIB_0__::func_67(uParam0->f_1345[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1692), __LIB_0__::func_166(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_1692.f_8), __LIB_0__::func_67(uParam0->f_1345[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1692.f_8), __LIB_4__::func_616(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_1692)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_1692.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !uParam0->f_1345[iVar0 /*22*/])
		{
			if (!__LIB_0__::func_1(uParam0->f_1345[iVar0 /*22*/].f_1, 8))
			{
				if (!__LIB_0__::func_1(uParam0->f_1345[iVar0 /*22*/].f_1, 8))
				{
					__LIB_4__::func_706(&iVar19, uParam0->f_1345[iVar0 /*22*/].f_1);
					__LIB_4__::func_707(&(uParam0->f_1904), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_1016[iVar0 /*41*/].f_1 };
				iVar24 = -1;
				if (uParam0->f_1345[iVar0 /*22*/].f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 35)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar25 /*13*/].f_2))
						{
							if (uParam0->f_1345[iVar0 /*22*/].f_20 == uParam0->f_3[iVar25 /*13*/].f_3)
							{
								iVar23 = uParam0->f_3[iVar25 /*13*/].f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (__LIB_0__::func_1(uParam0->f_1345[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1345[iVar0 /*22*/].f_20 /*13*/].f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902) || iVar26 != uParam0->f_1902))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
											__LIB_4__::func_765(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1345[iVar0 /*22*/].f_18 != 0f || uParam0->f_1345[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_3__::func_978(Global_35, iVar23, 1), uParam0->f_1345[iVar0 /*22*/].f_18, 0f, uParam0->f_1345[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1345[iVar0 /*22*/].f_18 != 0f || uParam0->f_1345[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_0__::func_152(Global_36, uParam0->f_1016[iVar0 /*41*/].f_1, 1), uParam0->f_1345[iVar0 /*22*/].f_18, 0f, uParam0->f_1345[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_1016[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_1016[iVar0 /*41*/].f_14;
							bVar29 = __LIB_0__::func_1(uParam0->f_1345[iVar0 /*22*/].f_1, 2);
							bVar30 = (__LIB_0__::func_1(uParam0->f_1345[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = __LIB_0__::func_1(uParam0->f_1345[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1692));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									__LIB_0__::func_489(0, 0);
								}
								bVar32 = true;
								__LIB_4__::func_765(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1692), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1708.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1708.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1708.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1708.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1708.f_22 != bVar30);
								uParam0->f_1708.f_16 = iVar23;
								uParam0->f_1708.f_17 = { vVar20 };
								uParam0->f_1708.f_20 = fVar27;
								uParam0->f_1708.f_21 = fVar28;
								uParam0->f_1708.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1708 = { uParam0->f_1692 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1708));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1692), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1731.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1731.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || uParam0->f_1731.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1731.f_21 != bVar30);
								uParam0->f_1731.f_16 = iVar23;
								uParam0->f_1731.f_17 = { vVar20 };
								uParam0->f_1731.f_20 = !bVar31;
								uParam0->f_1731.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1731 = { uParam0->f_1692 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1731));
								}
							}
							Jump @1469; //curOff = 1421
							if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
							}
							StringCopy(&(uParam0->f_1692), "", 64);
							StringCopy(&(uParam0->f_1692.f_8), "", 64);
							__LIB_5__::func_150(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

void func_622(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam1))
	{
		return;
	}
	iVar0 = __LIB_0__::func_177(iParam1);
	if (__LIB_0__::func_211(iParam1))
	{
		if (!__LIB_0__::func_212(iParam1))
		{
			return;
		}
	}
	__LIB_0__::func_290(iParam1, 39, 1);
	__LIB_0__::func_213(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	__LIB_0__::func_213(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			__LIB_0__::func_213(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			__LIB_0__::func_288(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_781(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_650(int iParam0, int iParam1)
{
	var uVar0;
	return func_786(&uVar0, iParam0, iParam1);
}

void func_701(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	__LIB_0__::func_734(iVar0);
	__LIB_0__::func_288(iParam0, 60, 1);
	if (bParam1)
	{
		func_828(iParam0);
	}
}

void func_702(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	__LIB_0__::func_735(iVar0);
	__LIB_0__::func_290(iParam0, 60, 1);
	if (bParam1)
	{
		func_830(iParam0);
	}
}

void func_703(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	__LIB_0__::func_736(iVar0);
	if (iParam0 == 14)
	{
		__LIB_0__::func_985(iVar0);
	}
	__LIB_0__::func_288(iParam0, 61, 1);
	if (bParam1)
	{
		func_833(iParam0);
	}
}

void func_704(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	__LIB_0__::func_737(iVar0);
	__LIB_0__::func_290(iParam0, 61, 1);
	if (bParam1)
	{
		func_835(iParam0);
	}
}

int func_781(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_177(iParam0);
	if (__LIB_0__::func_272(iVar0, 0))
	{
		if (__LIB_0__::func_272(PED::_GET_RIDER_OF_MOUNT(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !__LIB_0__::func_211(iParam0)) || __LIB_0__::func_212(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && __LIB_0__::func_232(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_897(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					__LIB_0__::func_515(iParam0);
					PERSCHAR::_0x7B204F88F6C3D287(func_899(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_899(iParam0, 0));
					__LIB_0__::func_233(iParam0);
				}
			}
			else
			{
				if (__LIB_0__::func_273(iParam0, 32768, 1))
				{
					iVar2 = func_899(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (__LIB_0__::func_273(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				__LIB_0__::func_515(iParam0);
				PERSCHAR::_0x7B204F88F6C3D287(func_899(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_899(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				__LIB_0__::func_515(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	__LIB_0__::func_234(iParam0, 0);
	return 1;
}

int func_786(var uParam0, int iParam1, int iParam2)
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
		return func_786(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_828(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (func_897(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = __LIB_0__::func_177(iParam0);
	__LIB_0__::func_734(iVar0);
	__LIB_0__::func_213(iParam0, 8192, 1);
}

void func_830(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (func_897(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = __LIB_0__::func_177(iParam0);
	__LIB_0__::func_735(iVar0);
	__LIB_0__::func_213(iParam0, 8192, 0);
}

void func_833(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (func_897(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = __LIB_0__::func_177(iParam0);
	__LIB_0__::func_736(iVar0);
	__LIB_0__::func_213(iParam0, 16384, 1);
}

void func_835(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (func_897(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = __LIB_0__::func_177(iParam0);
	__LIB_0__::func_737(iVar0);
	__LIB_0__::func_213(iParam0, 16384, 0);
}

int func_897(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	if (Global_1360165[iParam0 /*1157*/].f_127 != 0)
	{
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	switch (iParam0)
	{
		case 3:
			return joaat("PERSCHAR_COMP_HORSE_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_HORSE_CHARLES");
		case 0:
			return joaat("PERSCHAR_COMP_HORSE_DUTCH");
		case 5:
			return joaat("PERSCHAR_COMP_HORSE_HOSEA");
		case 2:
			return joaat("PERSCHAR_COMP_HORSE_JAVIER");
		case 1:
			return joaat("PERSCHAR_COMP_HORSE_JOHN");
		case 9:
			return joaat("PERSCHAR_COMP_HORSE_LENNY");
		case 6:
			return joaat("PERSCHAR_COMP_HORSE_MICAH");
		case 11:
			return joaat("PERSCHAR_COMP_HORSE_SADIE");
		case 8:
			return joaat("PERSCHAR_COMP_HORSE_SEAN");
		case 23:
			return joaat("PERSCHAR_COMP_HORSE_TRELAWNEY");
		case 20:
			return joaat("PERSCHAR_COMP_HORSE_KAREN");
		case 4:
			return joaat("PERSCHAR_COMP_HORSE_UNCLE");
		case 10:
			return joaat("PERSCHAR_COMP_HORSE_ODRISCOLL");
		case 26:
			return joaat("PERSCHAR_COMP_HORSE_EAGLE_FLIES");
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_127 = func_957(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

int func_899(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_958(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

int func_957(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (!__LIB_0__::func_49(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549.f_1675[iVar1 /*5*/].f_1 == iParam0)
			{
				Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
				return Global_1357549.f_1675[iVar1 /*5*/];
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_1357549.f_1675[iVar1 /*5*/] != 0 && Global_1357549.f_1675[iVar1 /*5*/].f_1 == -1)
		{
			iVar0 = Global_1357549.f_1675[iVar1 /*5*/];
			Jump @168; //curOff = 153
		}
		iVar1++;
	}
	if (!__LIB_0__::func_49(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_958(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_897(iParam0, 1);
		iVar1 = PERSCHAR::_0xA00DF706C60173D1(iVar0);
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && iVar1 != Global_40.f_4942[iParam0 /*60*/].f_7)
		{
			PERSCHAR::_0x8BC555034A5A5E8C(iVar0, Global_40.f_4942[iParam0 /*60*/].f_7);
		}
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

