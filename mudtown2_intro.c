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
	var uLocal_21[2] = { 0, 0 };
	int iLocal_24[2] = { 0, 0 };
	int iLocal_27[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_40[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_49 = 0;
	int iLocal_50[1] = { 0 };
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = false;
	bool bLocal_55 = false;
	bool bLocal_56 = false;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_76[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<2907> Local_105 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
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
	iLocal_14 = joaat("P_BOTTLEJD01X");
	iLocal_15 = joaat("S_SHOTGLASS01X_BROWN");
	iLocal_16 = joaat("P_CS_BARRAG01X");
	iLocal_17 = joaat("P_BOTTLEBEER01X");
	iLocal_18 = joaat("A_M_M_VALTOWNFOLK_02");
	iLocal_19 = joaat("CS_VALPROSTITUTE_01");
	iLocal_20 = joaat("CS_VALPROSTITUTE_02");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (__LIB_5__::func_203(Local_105))
		{
			__LIB_0__::func_8(&Global_1935630, 32768);
		}
		func_3(&Local_105, 1);
	}
	__LIB_5__::func_610(&uScriptParam_0, &Local_105);
	while (!__LIB_2__::func_27(&Local_105, 1))
	{
		if (__LIB_4__::func_721(&Local_105) != 10)
		{
			if ((__LIB_4__::func_721(&Local_105) == 3 || __LIB_4__::func_721(&Local_105) == 4) && (!__LIB_5__::func_132(&Local_105) || __LIB_0__::func_78(&(Local_105.f_958)) > 0))
			{
				__LIB_7__::func_446(&Local_105, __LIB_2__::func_27(&Local_105, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && __LIB_5__::func_204(&Local_105)) && __LIB_2__::func_27(&Local_105, 65536))
			{
				__LIB_7__::func_446(&Local_105, 1);
			}
		}
		if (__LIB_4__::func_721(&Local_105) >= 3 && __LIB_4__::func_721(&Local_105) <= 7)
		{
			__LIB_5__::func_525(&Local_105);
		}
		if (((((__LIB_4__::func_721(&Local_105) >= 5 && __LIB_4__::func_721(&Local_105) <= 7) && !__LIB_2__::func_27(&Local_105, 4096)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_105.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_105.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_105.f_428.f_444))
		{
			MemCopy(&Var1, {__LIB_4__::func_681(Local_105)}, 4);
			func_13(Var1, &(Local_105.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (__LIB_4__::func_721(&Local_105))
		{
			case 8:
				if (__LIB_5__::func_607(&Local_105))
				{
					__LIB_5__::func_536(&Local_105);
					__LIB_0__::func_0(&Local_105);
					__LIB_4__::func_722(&Local_105, 0);
				}
				else if (!__LIB_5__::func_204(&Local_105))
				{
					if (!__LIB_0__::func_75(&(Local_105.f_2899)))
					{
						__LIB_1__::func_283(&(Local_105.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_105))
					{
						if (__LIB_0__::func_264(&(Local_105.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_105.f_2889, 2097152);
							__LIB_5__::func_174(&Local_105);
							__LIB_5__::func_608(&Local_105);
							__LIB_4__::func_722(&Local_105, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_105, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_105, 536870912);
						}
						__LIB_1__::func_148(&(Local_105.f_2899));
					}
				}
				break;
			case 0:
				if (__LIB_5__::func_204(&Local_105))
				{
					__LIB_0__::func_0(&Local_105);
				}
				if (!__LIB_5__::func_204(&Local_105) || __LIB_2__::func_27(&Local_105, 65536))
				{
					if (func_27(&Local_105))
					{
						__LIB_4__::func_722(&Local_105, 1);
					}
				}
				break;
			case 1:
				if (__LIB_5__::func_204(&Local_105))
				{
					__LIB_0__::func_0(&Local_105);
				}
				if (func_28(&Local_105))
				{
					__LIB_4__::func_722(&Local_105, 2);
				}
				break;
			case 2:
				if (__LIB_5__::func_204(&Local_105))
				{
					__LIB_0__::func_0(&Local_105);
				}
				if (func_29(&Local_105))
				{
					if (!__LIB_5__::func_132(&Local_105) || __LIB_5__::func_204(&Local_105))
					{
						if (!__LIB_0__::func_79(Local_105.f_2889))
						{
							Local_105.f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(Local_105));
						}
						__LIB_1__::func_109(Local_105.f_2889, 4);
						__LIB_5__::func_410(&Local_105, 8192);
					}
					if (__LIB_5__::func_204(&Local_105))
					{
						__LIB_5__::func_175(&Local_105);
						__LIB_4__::func_722(&Local_105, 9);
					}
					else
					{
						__LIB_4__::func_722(&Local_105, 3);
					}
				}
				break;
			case 9:
				if (__LIB_0__::func_0(&Local_105))
				{
					__LIB_0__::func_11(&Local_105);
					__LIB_5__::func_536(&Local_105);
					__LIB_6__::func_926(&Local_105);
					if (!__LIB_2__::func_27(&Local_105, 256))
					{
						__LIB_0__::func_11(&Local_105);
						__LIB_5__::func_227(Local_105);
						func_38(&Local_105);
						__LIB_4__::func_722(&Local_105, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_105, 5);
					}
				}
				break;
			case 3:
				if (!__LIB_2__::func_27(&Local_105, 8192))
				{
					if (__LIB_0__::func_78(&(Local_105.f_958)) == 3)
					{
						__LIB_1__::func_109(Local_105.f_2889, 4);
						__LIB_5__::func_410(&Local_105, 8192);
					}
				}
				func_39(&Local_105);
				if (__LIB_3__::func_919(__LIB_0__::func_80(Global_1835011[Local_105 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&Local_105) || __LIB_5__::func_176(&Local_105, 32768))
				{
					__LIB_0__::func_11(&Local_105);
					__LIB_5__::func_536(&Local_105);
					__LIB_4__::func_722(&Local_105, 4);
					__LIB_1__::func_283(&(Local_105.f_2890), 0);
				}
				else if (__LIB_5__::func_204(&Local_105) && !__LIB_5__::func_203(Local_105))
				{
					if (!__LIB_0__::func_75(&(Local_105.f_2899)))
					{
						__LIB_1__::func_283(&(Local_105.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_105))
					{
						if (__LIB_0__::func_264(&(Local_105.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_105.f_2889, 2097152);
							__LIB_5__::func_174(&Local_105);
							__LIB_5__::func_608(&Local_105);
							__LIB_4__::func_722(&Local_105, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_105, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_105, 536870912);
						}
						__LIB_1__::func_148(&(Local_105.f_2899));
					}
				}
				break;
			case 4:
				func_43(&Local_105);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (func_44(&Local_105) || (__LIB_5__::func_176(&Local_105, 32768) && !__LIB_2__::func_27(&Local_105, 268435456)))
				{
					__LIB_6__::func_926(&Local_105);
					if (!__LIB_2__::func_27(&Local_105, 256))
					{
						__LIB_0__::func_11(&Local_105);
						func_38(&Local_105);
						if (!__LIB_0__::func_1(Global_1935630, 524288) || __LIB_5__::func_176(&Local_105, 524288))
						{
							__LIB_5__::func_227(Local_105);
							__LIB_4__::func_722(&Local_105, 7);
						}
						else
						{
							__LIB_4__::func_722(&Local_105, 6);
						}
					}
					else
					{
						__LIB_5__::func_227(Local_105);
						__LIB_4__::func_722(&Local_105, 5);
					}
				}
				break;
			case 5:
				__LIB_0__::func_11(&Local_105);
				__LIB_5__::func_526(&Local_105);
				if (__LIB_0__::func_265(&(Local_105.f_2884)) >= __LIB_4__::func_723(&Local_105))
				{
					__LIB_0__::func_11(&Local_105);
					func_38(&Local_105);
					__LIB_1__::func_148(&(Local_105.f_2884));
					if (!__LIB_5__::func_176(&Local_105, 524288))
					{
						__LIB_5__::func_227(Local_105);
						__LIB_4__::func_722(&Local_105, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_105, 6);
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75(&(Local_105.f_2906)))
				{
					__LIB_1__::func_283(&(Local_105.f_2906), 0);
				}
				if ((__LIB_0__::func_81(&(Local_105.f_428)) == 4 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_105.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_105.f_428.f_444))
				{
					__LIB_5__::func_227(Local_105);
					__LIB_4__::func_722(&Local_105, 7);
				}
				else if (__LIB_0__::func_265(&(Local_105.f_2906)) >= 5f)
				{
					__LIB_5__::func_227(Local_105);
					__LIB_4__::func_722(&Local_105, 7);
				}
				break;
			case 7:
				func_51(&Local_105);
				if (__LIB_5__::func_530(&Local_105))
				{
					__LIB_4__::func_722(&Local_105, 10);
				}
				break;
			case 10:
				if (func_3(&Local_105, 0))
				{
					__LIB_5__::func_410(&Local_105, 1);
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
	__LIB_5__::func_611(iParam0);
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
	if (__LIB_0__::func_86(__LIB_5__::func_134(iParam0)))
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
					__LIB_5__::func_181(iParam0, __LIB_1__::func_469(*iParam0));
				}
				else
				{
					__LIB_5__::func_181(iParam0, vVar3);
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
	__LIB_0__::func_16(iParam0);
	__LIB_6__::func_925(iParam0);
	__LIB_5__::func_609(iParam0, Global_35, 0, 0, 0, 1);
	__LIB_5__::func_604(iParam0);
	__LIB_5__::func_182(iParam0);
	return true;
}

bool func_28(int iParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_5__::func_528(iParam0))
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
	func_137(iParam0, 0, -313.658f, 802.9703f, 117.985f, 10.7889f);
	func_137(iParam0, 1, -312.7198f, 803.2928f, 117.9849f, 278.4892f);
	__LIB_5__::func_602(uLocal_21[1], joaat("WEAPON_BOW"));
	__LIB_5__::func_602(uLocal_21[1], joaat("WEAPON_BOW_CHARLES"));
	func_139(iLocal_24[0], -313.5034f, 805.1655f, 117.985f, 12.7238f, 2, 1073741824 /* Float: 2f */);
	func_139(iLocal_24[1], -311.5867f, 798.6151f, 117.986f, 79.8126f, 2, 1073741824 /* Float: 2f */);
	__LIB_5__::func_609(iParam0, Global_35, "Arthur", 0, 0, 1);
	__LIB_5__::func_609(iParam0, uLocal_21[0], "JavierEscuella", 0, 0, 1);
	__LIB_5__::func_609(iParam0, uLocal_21[1], "CharlesSmith", 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_27[10], "VALPROSTITUTE_01", 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_27[11], "VALPROSTITUTE_02", 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_24[0], "U_M_M_ValBartender_01", 0, 0, 1);
	__LIB_5__::func_532(iParam0, iLocal_40[0], "p_bottleJD01x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_40[6], "p_cs_barrag01x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_40[7], "p_bottleBeer01x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_40[1], "S_SHOTGLASS01X_BROWN", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_40[2], "S_SHOTGLASS01X_BROWN^1", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_40[3], "S_SHOTGLASS01X_BROWN^2", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_40[4], "S_SHOTGLASS01X_BROWN^3", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_40[5], "S_SHOTGLASS01X_BROWN^4", 0, 0, 1, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50[0], "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50[0], "CharlesSmith", uLocal_21[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50[0], "JavierEscuella", uLocal_21[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50[0], "U_M_M_ValBartender_01", iLocal_24[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50[0], "VALPROSTITUTE_01", iLocal_27[10], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50[0], "VALPROSTITUTE_02", iLocal_27[11], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50[0], "p_bottleJD01x", iLocal_40[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50[0], "S_SHOTGLASS01X_BROWN", iLocal_40[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50[0], "S_SHOTGLASS01X_BROWN^1", iLocal_40[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50[0], "S_SHOTGLASS01X_BROWN^2", iLocal_40[3], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_50[0], "S_SHOTGLASS01X_BROWN^3", iLocal_40[4], 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_50[0]);
	__LIB_3__::func_123(968874193, 1);
	PERSCHAR::_0x7B204F88F6C3D287(__LIB_0__::func_120(8));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_24[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_24[0]))
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_24[0], true);
	}
	DECORATOR::DECOR_SET_INT(iLocal_27[0], __LIB_5__::func_393(), -438705860);
	DECORATOR::DECOR_SET_INT(iLocal_27[1], __LIB_5__::func_393(), -1204877849);
	DECORATOR::DECOR_SET_INT(iLocal_27[2], __LIB_5__::func_393(), -1991727077);
	DECORATOR::DECOR_SET_INT(iLocal_27[3], __LIB_5__::func_393(), -610677572);
	DECORATOR::DECOR_SET_INT(iLocal_27[4], __LIB_5__::func_393(), 608362001);
	DECORATOR::DECOR_SET_INT(iLocal_27[5], __LIB_5__::func_393(), 770830703);
	DECORATOR::DECOR_SET_INT(iLocal_27[6], __LIB_5__::func_393(), 1255875199);
	DECORATOR::DECOR_SET_INT(iLocal_27[7], __LIB_5__::func_393(), -1833094586);
	DECORATOR::DECOR_SET_INT(iLocal_27[8], __LIB_5__::func_393(), -1269664400);
	DECORATOR::DECOR_SET_INT(iLocal_27[9], __LIB_5__::func_393(), -2104192523);
	DECORATOR::DECOR_SET_INT(iLocal_40[1], __LIB_5__::func_393(), 1839204709);
	DECORATOR::DECOR_SET_INT(iLocal_40[2], __LIB_5__::func_393(), 2085758665);
	DECORATOR::DECOR_SET_INT(iLocal_40[3], __LIB_5__::func_393(), -487689212);
	DECORATOR::DECOR_SET_INT(iLocal_40[4], __LIB_5__::func_393(), -248704895);
	DECORATOR::DECOR_SET_INT(iLocal_40[5], __LIB_5__::func_393(), -947143361);
	__LIB_5__::func_183(iParam0, iLocal_24[0], 0);
	__LIB_5__::func_183(iParam0, iLocal_24[1], 0);
	__LIB_5__::func_183(iParam0, iLocal_27[0], 0);
	__LIB_5__::func_183(iParam0, iLocal_27[1], 0);
	__LIB_5__::func_183(iParam0, iLocal_27[2], 0);
	__LIB_5__::func_183(iParam0, iLocal_27[3], 0);
	__LIB_5__::func_183(iParam0, iLocal_27[4], 0);
	__LIB_5__::func_183(iParam0, iLocal_27[5], 0);
	__LIB_5__::func_183(iParam0, iLocal_27[6], 0);
	__LIB_5__::func_183(iParam0, iLocal_27[7], 0);
	__LIB_5__::func_183(iParam0, iLocal_27[8], 0);
	__LIB_5__::func_183(iParam0, iLocal_27[9], 0);
	__LIB_5__::func_183(iParam0, iLocal_27[10], 0);
	__LIB_5__::func_183(iParam0, iLocal_27[11], 0);
	__LIB_5__::func_183(iParam0, iLocal_40[0], 0);
	__LIB_5__::func_183(iParam0, iLocal_40[1], 0);
	__LIB_5__::func_183(iParam0, iLocal_40[2], 0);
	__LIB_5__::func_183(iParam0, iLocal_40[3], 0);
	__LIB_5__::func_183(iParam0, iLocal_40[4], 0);
	__LIB_5__::func_183(iParam0, iLocal_40[5], 0);
	__LIB_5__::func_183(iParam0, iLocal_40[6], 0);
	__LIB_5__::func_183(iParam0, iLocal_40[7], 0);
	TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("LEVDES_SPAWN_PICKLED_EGGS"), false);
	TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("PROP_PLAYER_EAT_PICKLED_EGG"), false);
	ENTITY::CREATE_MODEL_HIDE(-313.537f, 803.771f, 119.033f, 5f, joaat("P_CS_PICKLEDEGGS01X"), false);
	ENTITY::CREATE_MODEL_HIDE(-310.997f, 801.241f, 118.771f, 1f, joaat("P_CS_PLATESTEW01X"), false);
	ENTITY::CREATE_MODEL_HIDE(-313.025f, 804.156f, 119.052f, 1f, joaat("S_FOODMENUCLIPBOARD01X"), false);
	HUD::_TEXT_DATABASE_REQUEST("MUD2AUD");
	__LIB_0__::func_928(&(iParam0->f_958.f_1771), uLocal_21[0], "JAVIER", 0);
	__LIB_4__::func_932(70, 0);
	__LIB_4__::func_932(69, 0);
	__LIB_9__::func_420(32, 1);
	__LIB_11__::func_392(2);
	return true;
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
	vector3 vVar0[24];
	float fVar3;
	int iVar4;
	if (BUILTIN::VDIST2(Global_36, -307.3633f, 796.566f, 117.9327f) <= 144f && Global_1935630.f_5 == 0)
	{
		if (!__LIB_0__::func_75(&uLocal_57))
		{
			__LIB_0__::func_268(&uLocal_57, 8f);
		}
		if (__LIB_0__::func_265(&uLocal_57) >= 8f)
		{
			StringCopy(&cVar0, "MUD2_SALOON", 24);
			__LIB_1__::func_104(&(iParam0->f_958.f_1771), cVar0, 0, -1, 0, 0);
			__LIB_1__::func_148(&uLocal_57);
		}
	}
	if (Global_1935630.f_5 == iLocal_61)
	{
		if (!__LIB_0__::func_266(Global_35, -311.7287f, 797.4083f, 117.9685f, 3f, 1, 1))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
		}
		if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_50[0], "bToast"))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_50[0], "bToast", true, false);
		}
	}
	fVar3 = 0.5f;
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(-305.89f, 803.85f, 118.44f, fVar3);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(-310.4056f, 801.0967f, 117.9817f, fVar3);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(-311.4607f, 801.9698f, 117.9761f, fVar3);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(-312.2389f, 800.7795f, 117.9737f, fVar3);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(-304.52f, 802.34f, 118.44f, fVar3);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(-303.44f, 801.73f, 118.44f, fVar3);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(-306.76f, 805.93f, 118.44f, fVar3);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(-305.15f, 805.53f, 118.44f, fVar3);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(-311.63f, 806.2f, 117.98f, fVar3);
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(-312.13f, 808.45f, 117.98f, fVar3);
	if (!bLocal_54)
	{
		if (func_160())
		{
			bLocal_54 = true;
		}
		if (func_161(iLocal_27[0], iLocal_64[0]))
		{
			TASK::_TASK_USE_SCENARIO_POINT(iLocal_27[0], iLocal_64[0], "", -1, false, true, 0, false, -1f, false);
		}
		if (func_161(iLocal_27[1], iLocal_64[1]))
		{
			TASK::_TASK_USE_SCENARIO_POINT(iLocal_27[1], iLocal_64[1], "", -1, false, true, 0, false, -1f, false);
		}
		if (func_161(iLocal_27[2], iLocal_64[2]))
		{
			TASK::_TASK_USE_SCENARIO_POINT(iLocal_27[2], iLocal_64[2], "", -1, false, true, 0, false, -1f, false);
		}
		if (func_161(iLocal_27[3], iLocal_64[3]))
		{
			TASK::_TASK_USE_SCENARIO_POINT(iLocal_27[3], iLocal_64[3], "", -1, false, true, 0, false, -1f, false);
		}
		if (func_161(iLocal_27[4], iLocal_64[4]))
		{
			TASK::_TASK_USE_SCENARIO_POINT(iLocal_27[4], iLocal_64[4], "", -1, false, true, 0, false, -1f, false);
		}
		if (func_161(iLocal_27[5], iLocal_64[5]))
		{
			TASK::_TASK_USE_SCENARIO_POINT(iLocal_27[5], iLocal_64[5], "", -1, false, true, 0, false, -1f, false);
		}
		if (func_161(iLocal_27[6], iLocal_64[6]))
		{
			TASK::_TASK_USE_SCENARIO_POINT(iLocal_27[6], iLocal_64[6], "", -1, false, true, 0, false, -1f, false);
		}
		if (func_161(iLocal_27[7], iLocal_64[7]))
		{
			TASK::_TASK_USE_SCENARIO_POINT(iLocal_27[7], iLocal_64[7], "", -1, false, true, 0, false, -1f, false);
		}
		if (func_161(iLocal_27[8], iLocal_64[8]))
		{
			TASK::_TASK_USE_SCENARIO_POINT(iLocal_27[8], iLocal_64[8], "", -1, false, true, 0, false, -1f, false);
		}
		if (func_161(iLocal_27[9], iLocal_64[9]))
		{
			TASK::_TASK_USE_SCENARIO_POINT(iLocal_27[9], iLocal_64[9], "", -1, false, true, 0, false, -1f, false);
		}
		if (func_161(iLocal_24[1], iLocal_64[10]))
		{
			TASK::_TASK_USE_SCENARIO_POINT(iLocal_24[1], iLocal_64[10], "", -1, false, true, 0, false, -1f, false);
		}
	}
	if ((((!bLocal_55 && ENTITY::DOES_ENTITY_EXIST(iLocal_24[1])) && !ENTITY::IS_ENTITY_DEAD(iLocal_24[1])) && PED::_IS_PED_USING_SCENARIO_HASH(iLocal_24[1], joaat("PROP_HUMAN_PIANO"))) && AUDIO::_0xBE28DB99556FF8D9(iLocal_24[1]) != 0)
	{
		AUDIO::_0x8E901B65206C2D3E(iLocal_24[1]);
		AUDIO::_0xB93A769B8B726950(iLocal_24[1], 1949731019);
		AUDIO::_0xC4CFCE4C656EF480(iLocal_24[1]);
		AUDIO::_0x9EB779765E68C52E(iLocal_24[1], 1);
		bLocal_55 = true;
	}
	iVar4 = 0;
	while (iVar4 <= 9)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_27[iVar4]))
		{
			PED::SET_PED_RESET_FLAG(iLocal_27[iVar4], 49, true);
		}
		iVar4++;
	}
	return 1;
}

bool func_41(int iParam0)
{
	if (__LIB_5__::func_132(iParam0))
	{
		func_163(&(iParam0->f_958), __LIB_5__::func_135(iParam0), iParam0->f_958, 0);
		return __LIB_5__::func_397(iParam0);
	}
	if (__LIB_2__::func_27(iParam0, 64))
	{
		return false;
	}
	return __LIB_5__::func_520(iParam0);
}

void func_43(int iParam0)
{
	if ((!bLocal_56 && __LIB_5__::func_917() == 1) && __LIB_11__::func_394(Global_35))
	{
		bLocal_56 = true;
	}
}

bool func_44(int iParam0)
{
	if (__LIB_5__::func_132(iParam0))
	{
		return func_163(&(iParam0->f_958), __LIB_5__::func_135(iParam0), iParam0->f_958, 0);
	}
	return __LIB_5__::func_519(iParam0);
}

void func_51(int iParam0)
{
	if (__LIB_0__::func_91())
	{
		if (bLocal_56 && !ENTITY::DOES_ENTITY_EXIST(iLocal_49))
		{
			if (__LIB_5__::func_917() == 2)
			{
				iLocal_49 = __LIB_0__::func_147();
				ENTITY::SET_ENTITY_COORDS(iLocal_49, -303.2871f, 784.9673f, 116.9279f, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_49, 192.2018f);
				ENTITY::_0x9587913B9E772D29(iLocal_49, 0);
				__LIB_0__::func_150(-303.2871f, 784.9673f, 116.9279f);
			}
		}
	}
}

bool func_53(int iParam0)
{
	vector3 vVar0;
	__LIB_0__::func_484(&uLocal_52, iLocal_53, 0);
	__LIB_0__::func_172(iLocal_53);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_63))
	{
		__LIB_0__::func_484(&uLocal_62, iLocal_63, 0);
		__LIB_0__::func_172(iLocal_63);
	}
	if (!__LIB_5__::func_397(iParam0))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(8));
		__LIB_0__::func_294(2, uLocal_21[0]);
		__LIB_0__::func_294(7, uLocal_21[1]);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_24[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_24[0]))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_24[0], false);
		}
		__LIB_4__::func_932(70, 1);
		__LIB_4__::func_932(69, 1);
		vVar0 = -1;
		vVar0.f_1 = -1;
		vVar0.f_2 = -1;
		__LIB_1__::func_65(32, &vVar0, 1);
		__LIB_1__::func_806(&vVar0, 1, 1);
		__LIB_0__::func_804(1867912207);
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("LEVDES_SPAWN_PICKLED_EGGS"), true);
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("PROP_PLAYER_EAT_PICKLED_EGG"), true);
	}
	if ((__LIB_0__::func_6(__LIB_0__::func_298(0)) || __LIB_0__::func_1(Global_1935630, 32768)) && !__LIB_2__::func_27(iParam0, 1024))
	{
		__LIB_5__::func_534(iParam0, 2, uLocal_21[0], 0, 1, 1, 0);
		__LIB_5__::func_534(iParam0, 7, uLocal_21[1], 0, 1, 1, 0);
	}
	INTERIOR::UNPIN_INTERIOR(iLocal_61);
	__LIB_6__::func_357();
	return true;
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
		func_246(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_749(uParam0, 0f, 0f, 0f);
		func_248(uParam0);
		func_249(uParam0);
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
	bool bVar0;
	bool bVar1;
	switch (iLocal_60)
	{
		case 0:
			STREAMING::REQUEST_MODEL(iLocal_14, false);
			STREAMING::REQUEST_MODEL(iLocal_15, false);
			STREAMING::REQUEST_MODEL(iLocal_17, false);
			STREAMING::REQUEST_MODEL(iLocal_18, false);
			STREAMING::REQUEST_MODEL(iLocal_19, false);
			STREAMING::REQUEST_MODEL(iLocal_20, false);
			STREAMING::REQUEST_MODEL(iLocal_16, false);
			iLocal_61 = INTERIOR::GET_INTERIOR_AT_COORDS(-308.6731f, 801.1235f, 117.9846f);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_61);
			iLocal_50[0] = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@mud2@leadin@int@base_bar_toast_loop", 0, "PL_Loops_Toast", false, true);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_50[0]);
			PED::_0xF008E0BA1FE1D644(6);
			__LIB_0__::func_803(1867912207);
			__LIB_4__::func_524(175);
			__LIB_4__::func_495(174);
			if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_61, "6_chair_poker_set"))
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_61, "6_chair_poker_set", true);
			}
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_61, "4_chair_poker_set"))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_61, "4_chair_poker_set", 0);
			}
			__LIB_5__::func_521(0.85f);
			iLocal_60++;
			break;
		case 1:
			iLocal_53 = __LIB_11__::func_393(-307.1788f, 795.642f, 117.2125f, -311.6628f, 820.6473f, 127.0254f, 13f);
			uLocal_52 = __LIB_1__::func_391(iLocal_53, 0, 0, 0);
			iLocal_60++;
			break;
		case 2:
			iLocal_63 = VOLUME::_CREATE_VOLUME_BOX(-302.7397f, 793.7772f, 118.2877f, 0f, 0f, 11.26962f, 4.013749f, 4.752884f, 3.115868f);
			uLocal_62 = __LIB_1__::func_391(iLocal_63, 0, 0, 0);
			iLocal_60++;
			break;
		case 3:
			bVar0 = true;
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(2)))
			{
				PED::_0x6A489892E813951A(__LIB_0__::func_271(2));
			}
			if (!func_289(iParam0, 2, &(uLocal_21[0]), 0, 1, 0, 0, 0, 0, -922193456, 0, 0, 0))
			{
				bVar0 = false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(7)))
			{
				PED::_0x6A489892E813951A(__LIB_0__::func_271(7));
			}
			if (!func_289(iParam0, 7, &(uLocal_21[1]), 0, 1, 0, 0, 0, 0, -922193456, 0, 0, 0))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_60++;
			}
			break;
		case 4:
			bVar1 = true;
			if (!func_290(2, uLocal_21[0], -922193456))
			{
				bVar1 = false;
			}
			if (!func_290(7, uLocal_21[1], -922193456))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				iLocal_60++;
			}
			break;
		case 5:
			if (PED::_0x5C16855277819BBF() >= 16)
			{
				iLocal_60++;
			}
			break;
		case 6:
			if ((((((STREAMING::HAS_MODEL_LOADED(iLocal_14) && STREAMING::HAS_MODEL_LOADED(iLocal_15)) && STREAMING::HAS_MODEL_LOADED(iLocal_18)) && STREAMING::HAS_MODEL_LOADED(iLocal_19)) && STREAMING::HAS_MODEL_LOADED(iLocal_20)) && STREAMING::HAS_MODEL_LOADED(iLocal_16)) && STREAMING::HAS_MODEL_LOADED(iLocal_17))
			{
				iLocal_60++;
			}
			break;
		case 7:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_50[0], true, false))
			{
				iLocal_60++;
			}
			break;
		case 8:
			if (__LIB_1__::func_220(76))
			{
				if (func_292(iParam0))
				{
					iLocal_60++;
				}
			}
			break;
		case 9:
			if (func_293(iParam0))
			{
				iLocal_60++;
			}
			break;
		case 10:
			if (func_294())
			{
				iLocal_60++;
			}
			break;
		case 11:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_14);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_15);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_18);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_19);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_20);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_16);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_17);
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_422))
			{
				iParam0->f_422 = VOLUME::_CREATE_VOLUME_BOX(-307.2292f, 796.5427f, 118.7948f, 0f, 0f, 10.04827f, 2.225486f, 4.122518f, 3.912962f);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_423))
			{
				iParam0->f_423 = VOLUME::_CREATE_VOLUME_BOX(-307.2643f, 795.8691f, 117.9641f, 0f, 0f, 10.92621f, 5.762661f, 4.71389f, 5.585325f);
			}
			iLocal_60++;
			break;
		case 12:
			if (INTERIOR::IS_INTERIOR_READY(iLocal_61))
			{
				if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_61, "4_chair_poker_set"))
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_61, "4_chair_poker_set", 0);
				}
				else
				{
					iLocal_60++;
				}
			}
			break;
		case 13:
			return true;
	}
	return false;
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
	return func_289(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

void func_137(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_21[iParam1], true, true);
	func_139(uLocal_21[iParam1], vParam2, fParam5, 2, 1073741824 /* Float: 2f */);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_21[iParam1], true);
	WEAPON::SET_CURRENT_PED_WEAPON(uLocal_21[iParam1], joaat("WEAPON_UNARMED"), true, 0, false, false);
}

void func_139(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_139(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_139(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_160()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	iVar5 = 1;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_64[iVar0]))
		{
			switch (iVar0)
			{
				case 0:
					vVar1 = { -305.89f, 803.85f, 118.44f };
					iVar4 = joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS");
					break;
				case 1:
					vVar1 = { -312.23f, 800.8f, 118.43f };
					iVar4 = joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS");
					break;
				case 2:
					vVar1 = { -310.4f, 801.13f, 118.44f };
					iVar4 = joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING");
					break;
				case 3:
					vVar1 = { -311.45f, 801.97f, 118.44f };
					iVar4 = joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING");
					break;
				case 4:
					vVar1 = { -304.52f, 802.34f, 118.44f };
					iVar4 = joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING");
					break;
				case 5:
					vVar1 = { -303.44f, 801.73f, 118.44f };
					iVar4 = joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING");
					break;
				case 6:
					vVar1 = { -306.76f, 805.93f, 118.44f };
					iVar4 = joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS");
					break;
				case 7:
					vVar1 = { -305.15f, 805.53f, 118.44f };
					iVar4 = joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS");
					break;
				case 8:
					vVar1 = { -311.63f, 806.2f, 117.98f };
					iVar4 = joaat("WORLD_HUMAN_BARCUSTOMER_WHISKEY");
					break;
				case 9:
					vVar1 = { -312.1981f, 812.3229f, 117.9804f };
					iVar4 = joaat("WORLD_HUMAN_DRINKING");
					break;
				case 10:
					vVar1 = { -312.22f, 799.03f, 118.43f };
					iVar4 = joaat("PROP_HUMAN_PIANO");
					break;
			}
			iLocal_64[iVar0] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar1, iVar4, 0.5f, 0, false);
			iVar5 = 0;
		}
		iVar0++;
	}
	return iVar5;
}

bool func_161(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 1;
	if (((!__LIB_0__::func_272(iParam0, 2) || !TASK::_DOES_SCENARIO_POINT_EXIST(iParam1)) || __LIB_0__::func_491(iParam0, -76381094)) || TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0, 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_163(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
			func_337(uParam0, iParam5, bParam6);
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
				func_345(uParam0);
			}
		}
	}
	bVar0 = __LIB_5__::func_421(uParam0, iParam5, bParam6);
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
		__LIB_11__::func_329(uParam0, iParam5);
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
			__LIB_5__::func_606(uParam0, Param1, iParam5);
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

void func_246(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_453();
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

void func_248(var uParam0)
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
			func_139(iVar1, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_139(iVar3, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_249(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_760(uParam0) };
			func_139(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_289(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	vector3 vVar0;
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if (__LIB_4__::func_767(iParam0, *uParam2))
	{
		if (*uParam2 != __LIB_0__::func_167(iParam1))
		{
		}
		return true;
	}
	vVar0 = { iParam5, iParam6, iParam7 };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { __LIB_1__::func_469(*iParam0) };
	}
	if (!__LIB_0__::func_287(iParam1, 28, 1))
	{
		__LIB_0__::func_288(iParam1, 28, 1);
	}
	*uParam2 = func_511(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(*uParam2))
		{
			return false;
		}
		__LIB_4__::func_766(iParam0, *uParam2);
		__LIB_4__::func_768(iParam0, *uParam2);
		__LIB_4__::func_787(*uParam2, bParam3, bParam4, 0);
		if (bParam4)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam2, true);
			if (!__LIB_0__::func_163(*uParam2, -982327190))
			{
				TASK::TASK_STAND_STILL(*uParam2, -1);
			}
		}
		__LIB_5__::func_532(iParam0, *uParam2, 0, 0, 0, 1, 0);
		__LIB_1__::func_296(iParam1, 0, 0, 1);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

bool func_290(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1) && !iLocal_76[iParam0])
	{
		__LIB_6__::func_810(iParam0, iParam1, iParam2);
		if (!__LIB_6__::func_804(iParam1))
		{
			return false;
		}
		__LIB_1__::func_288(iParam0, iParam2, 1);
		__LIB_1__::func_558(iParam0, iParam1, iParam2, 1);
		iLocal_76[iParam0] = 1;
		return false;
	}
	return true;
}

bool func_292(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_24[0]))
	{
		if (__LIB_3__::func_397(1, 1))
		{
			iLocal_24[0] = __LIB_2__::func_965(1, 1, 0, 1, 1, 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_24[1]))
	{
		if (__LIB_3__::func_397(14, 1))
		{
			iLocal_24[1] = __LIB_2__::func_965(14, 1, 0, 1, 1, 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_24[0]) || !ENTITY::DOES_ENTITY_EXIST(iLocal_24[1]))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iLocal_24[iVar0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_24[iVar0], true, true);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_24[iVar0], true);
		__LIB_4__::func_766(iParam0, iLocal_24[iVar0]);
		iVar0++;
	}
	return true;
}

bool func_293(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	bool bVar6;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_27[iVar0]))
		{
			iVar4 = iLocal_18;
			iVar5 = joaat("META_OUTFIT_DEFAULT");
			switch (iVar0)
			{
				case 0:
					vVar1 = { -306.9495f, 803.9076f, 117.9846f };
					iVar5 = -1296852855;
					break;
				case 1:
					vVar1 = { -310.6807f, 799.1054f, 117.9847f };
					iVar5 = -461013972;
					break;
				case 2:
					vVar1 = { -309.6544f, 800.2461f, 117.9846f };
					iVar5 = -962772900;
					break;
				case 3:
					vVar1 = { -309.4664f, 801.4415f, 117.9846f };
					iVar5 = -119790375;
					break;
				case 4:
					vVar1 = { -305.358f, 801.8802f, 117.9872f };
					iVar5 = -425033610;
					break;
				case 5:
					vVar1 = { -303.36f, 800.9885f, 117.9872f };
					iVar5 = 416376003;
					break;
				case 6:
					vVar1 = { -307.4178f, 804.5525f, 117.9845f };
					iVar5 = 230969001;
					break;
				case 7:
					vVar1 = { -305.52f, 806.1306f, 117.9845f };
					iVar5 = 1022635276;
					break;
				case 8:
					vVar1 = { -311.7947f, 806.1513f, 117.9847f };
					iVar5 = 1650751468;
					break;
				case 9:
					vVar1 = { -312.1981f, 812.3229f, 117.9804f };
					iVar5 = -1530110665;
					break;
				case 10:
					vVar1 = { -308.3655f, 802.8646f, 117.9846f };
					iVar4 = iLocal_19;
					break;
				case 11:
					vVar1 = { -306.4259f, 803.003f, 117.9846f };
					iVar4 = iLocal_20;
					break;
			}
			bVar6 = true;
			if (iVar5 != joaat("META_OUTFIT_DEFAULT"))
			{
				bVar6 = false;
			}
			iLocal_27[iVar0] = __LIB_1__::func_545(iVar4, vVar1, 0f, 1, 1, 0, 1, 1, bVar6, 0, !bVar6, 0, 0);
			if (iVar5 != joaat("META_OUTFIT_DEFAULT"))
			{
				PED::_SET_PED_BODY_COMPONENT(iLocal_27[iVar0], iVar5);
				PED::_UPDATE_PED_VARIATION(iLocal_27[iVar0], false, true, true, true, false);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_27[iVar0], true);
			__LIB_4__::func_766(iParam0, iLocal_27[iVar0]);
			if (iVar0 == 10 || iVar0 == 11)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_27[iVar0], joaat("REL_PLAYER_ALLY"));
			}
			if (iVar0 != 10 && iVar0 != 11)
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_27[iVar0], 297, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_27[iVar0], 178, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_27[iVar0], 130, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_27[iVar0], 330, true);
			}
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_294()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40[iVar0]))
		{
			switch (iVar0)
			{
				case 0:
					vVar1 = { -307.1357f, 801.5696f, 117.9846f };
					iVar4 = iLocal_14;
					break;
				case 1:
					vVar1 = { -307.1357f, 801.5696f, 117.9846f };
					iVar4 = iLocal_15;
					break;
				case 2:
					vVar1 = { -307.1357f, 801.5696f, 117.9846f };
					iVar4 = iLocal_15;
					break;
				case 3:
					vVar1 = { -307.1357f, 801.5696f, 117.9846f };
					iVar4 = iLocal_15;
					break;
				case 4:
					vVar1 = { -307.1357f, 801.5696f, 117.9846f };
					iVar4 = iLocal_15;
					break;
				case 5:
					vVar1 = { -313.2475f, 803.999f, 119.0335f };
					iVar4 = iLocal_15;
					break;
				case 6:
					vVar1 = { -312.5695f, 804.7234f, 119.0368f };
					iVar4 = iLocal_16;
					break;
				case 7:
					vVar1 = { -314.0163f, 803.8469f, 119.0309f };
					iVar4 = iLocal_17;
					break;
			}
			iLocal_40[iVar0] = OBJECT::CREATE_OBJECT(iVar4, vVar1, true, true, false, false, true);
		}
		iVar0++;
	}
	return true;
}

void func_337(var uParam0, int iParam1, bool bParam2)
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
	func_345(uParam0);
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
						__LIB_9__::func_255(uParam0);
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

void func_345(var uParam0)
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
							Jump @1473; //curOff = 1425
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

void func_453()
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
	iVar0 = func_663(6291456, 0);
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

int func_511(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_139(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

int func_663(int iParam0, int iParam1)
{
	var uVar0;
	return func_834(&uVar0, iParam0, iParam1);
}

int func_834(var uParam0, int iParam1, int iParam2)
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
		return func_834(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

