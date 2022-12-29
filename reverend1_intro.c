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
	vector3 vLocal_22 = { 0f, 0f, 0f };
	float fLocal_25 = 0f;
	int iLocal_26 = 0;
	struct<22> Local_27 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_49 = 3;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_60[3] = { 0, 0, 0 };
	int iLocal_64[4] = { 0, 0, 0, 0 };
	struct<33> Local_69[3];
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	int iLocal_174 = 0;
	var uLocal_175[1] = { 0 };
	int iLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	struct<2907> Local_183 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
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
	iLocal_14 = joaat("U_M_M_VALPOKERPLAYER_01");
	iLocal_15 = joaat("U_M_M_VALPOKERPLAYER_02");
	iLocal_16 = joaat("P_CARDS01X");
	iLocal_17 = joaat("P_CHAIR05X");
	iLocal_18 = joaat("P_CS_HOLDEMHAND01X");
	iLocal_19 = joaat("P_CS_HOLDEMHAND02X");
	iLocal_20 = joaat("P_CS_HOLDEMHAND02X");
	iLocal_21 = joaat("P_CHIPS_FLA01X");
	vLocal_22 = { -327.1738f, -359.2269f, 87.0782f };
	fLocal_25 = 358.965f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (__LIB_5__::func_203(Local_183))
		{
			__LIB_0__::func_8(&Global_1935630, 32768);
		}
		func_3(&Local_183, 1);
	}
	__LIB_5__::func_610(&uScriptParam_0, &Local_183);
	while (!__LIB_2__::func_27(&Local_183, 1))
	{
		if (__LIB_4__::func_721(&Local_183) != 10)
		{
			if ((__LIB_4__::func_721(&Local_183) == 3 || __LIB_4__::func_721(&Local_183) == 4) && (!__LIB_5__::func_132(&Local_183) || __LIB_0__::func_78(&(Local_183.f_958)) > 0))
			{
				__LIB_7__::func_446(&Local_183, __LIB_2__::func_27(&Local_183, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && __LIB_5__::func_204(&Local_183)) && __LIB_2__::func_27(&Local_183, 65536))
			{
				__LIB_7__::func_446(&Local_183, 1);
			}
		}
		if (__LIB_4__::func_721(&Local_183) >= 3 && __LIB_4__::func_721(&Local_183) <= 7)
		{
			__LIB_5__::func_525(&Local_183);
		}
		if (((((__LIB_4__::func_721(&Local_183) >= 5 && __LIB_4__::func_721(&Local_183) <= 7) && !__LIB_2__::func_27(&Local_183, 4096)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_183.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_183.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_183.f_428.f_444))
		{
			MemCopy(&Var1, {__LIB_4__::func_681(Local_183)}, 4);
			func_13(Var1, &(Local_183.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (__LIB_4__::func_721(&Local_183))
		{
			case 8:
				if (__LIB_5__::func_607(&Local_183))
				{
					__LIB_5__::func_536(&Local_183);
					__LIB_0__::func_0(&Local_183);
					__LIB_4__::func_722(&Local_183, 0);
				}
				else if (!__LIB_5__::func_204(&Local_183))
				{
					if (!__LIB_0__::func_75(&(Local_183.f_2899)))
					{
						__LIB_1__::func_283(&(Local_183.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_183))
					{
						if (__LIB_0__::func_264(&(Local_183.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_183.f_2889, 2097152);
							__LIB_5__::func_174(&Local_183);
							__LIB_19__::func_327(&Local_183);
							__LIB_4__::func_722(&Local_183, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_183, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_183, 536870912);
						}
						__LIB_1__::func_148(&(Local_183.f_2899));
					}
				}
				break;
			case 0:
				if (__LIB_5__::func_204(&Local_183))
				{
					__LIB_0__::func_0(&Local_183);
				}
				if (!__LIB_5__::func_204(&Local_183) || __LIB_2__::func_27(&Local_183, 65536))
				{
					if (func_27(&Local_183))
					{
						__LIB_4__::func_722(&Local_183, 1);
					}
				}
				break;
			case 1:
				if (__LIB_5__::func_204(&Local_183))
				{
					__LIB_0__::func_0(&Local_183);
				}
				if (func_28(&Local_183))
				{
					__LIB_4__::func_722(&Local_183, 2);
				}
				break;
			case 2:
				if (__LIB_5__::func_204(&Local_183))
				{
					__LIB_0__::func_0(&Local_183);
				}
				if (func_29(&Local_183))
				{
					if (!__LIB_5__::func_132(&Local_183) || __LIB_5__::func_204(&Local_183))
					{
						if (!__LIB_0__::func_79(Local_183.f_2889))
						{
							Local_183.f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(Local_183));
						}
						__LIB_1__::func_109(Local_183.f_2889, 4);
						__LIB_5__::func_410(&Local_183, 8192);
					}
					if (__LIB_5__::func_204(&Local_183))
					{
						__LIB_5__::func_175(&Local_183);
						__LIB_4__::func_722(&Local_183, 9);
					}
					else
					{
						__LIB_4__::func_722(&Local_183, 3);
					}
				}
				break;
			case 9:
				if (__LIB_0__::func_0(&Local_183))
				{
					__LIB_0__::func_11(&Local_183);
					__LIB_5__::func_536(&Local_183);
					__LIB_11__::func_113(&Local_183);
					if (!__LIB_2__::func_27(&Local_183, 256))
					{
						func_36(&Local_183);
						__LIB_5__::func_227(Local_183);
						func_38(&Local_183);
						__LIB_4__::func_722(&Local_183, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_183, 5);
					}
				}
				break;
			case 3:
				if (!__LIB_2__::func_27(&Local_183, 8192))
				{
					if (__LIB_0__::func_78(&(Local_183.f_958)) == 3)
					{
						__LIB_1__::func_109(Local_183.f_2889, 4);
						__LIB_5__::func_410(&Local_183, 8192);
					}
				}
				func_39(&Local_183);
				if (__LIB_3__::func_919(__LIB_0__::func_80(Global_1835011[Local_183 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&Local_183) || __LIB_5__::func_176(&Local_183, 32768))
				{
					__LIB_0__::func_11(&Local_183);
					__LIB_5__::func_536(&Local_183);
					__LIB_4__::func_722(&Local_183, 4);
					__LIB_1__::func_283(&(Local_183.f_2890), 0);
				}
				else if (__LIB_5__::func_204(&Local_183) && !__LIB_5__::func_203(Local_183))
				{
					if (!__LIB_0__::func_75(&(Local_183.f_2899)))
					{
						__LIB_1__::func_283(&(Local_183.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_183))
					{
						if (__LIB_0__::func_264(&(Local_183.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_183.f_2889, 2097152);
							__LIB_5__::func_174(&Local_183);
							__LIB_19__::func_327(&Local_183);
							__LIB_4__::func_722(&Local_183, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_183, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_183, 536870912);
						}
						__LIB_1__::func_148(&(Local_183.f_2899));
					}
				}
				break;
			case 4:
				func_43(&Local_183);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (func_44(&Local_183) || (__LIB_5__::func_176(&Local_183, 32768) && !__LIB_2__::func_27(&Local_183, 268435456)))
				{
					__LIB_11__::func_113(&Local_183);
					if (!__LIB_2__::func_27(&Local_183, 256))
					{
						func_36(&Local_183);
						func_38(&Local_183);
						if (!__LIB_0__::func_1(Global_1935630, 524288) || __LIB_5__::func_176(&Local_183, 524288))
						{
							__LIB_5__::func_227(Local_183);
							__LIB_4__::func_722(&Local_183, 7);
						}
						else
						{
							__LIB_4__::func_722(&Local_183, 6);
						}
					}
					else
					{
						__LIB_5__::func_227(Local_183);
						__LIB_4__::func_722(&Local_183, 5);
					}
				}
				break;
			case 5:
				__LIB_0__::func_11(&Local_183);
				__LIB_5__::func_526(&Local_183);
				if (__LIB_0__::func_265(&(Local_183.f_2884)) >= __LIB_4__::func_723(&Local_183))
				{
					func_36(&Local_183);
					func_38(&Local_183);
					__LIB_1__::func_148(&(Local_183.f_2884));
					if (!__LIB_5__::func_176(&Local_183, 524288))
					{
						__LIB_5__::func_227(Local_183);
						__LIB_4__::func_722(&Local_183, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_183, 6);
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75(&(Local_183.f_2906)))
				{
					__LIB_1__::func_283(&(Local_183.f_2906), 0);
				}
				if ((__LIB_0__::func_81(&(Local_183.f_428)) == 4 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_183.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_183.f_428.f_444))
				{
					__LIB_5__::func_227(Local_183);
					__LIB_4__::func_722(&Local_183, 7);
				}
				else if (__LIB_0__::func_265(&(Local_183.f_2906)) >= 5f)
				{
					__LIB_5__::func_227(Local_183);
					__LIB_4__::func_722(&Local_183, 7);
				}
				break;
			case 7:
				__LIB_0__::func_11(&Local_183);
				if (__LIB_5__::func_530(&Local_183))
				{
					__LIB_4__::func_722(&Local_183, 10);
				}
				break;
			case 10:
				if (func_3(&Local_183, 0))
				{
					__LIB_5__::func_410(&Local_183, 1);
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
		__LIB_14__::func_249(uParam4);
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
				__LIB_14__::func_249(uParam4);
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
				__LIB_14__::func_250(uParam4);
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
				__LIB_14__::func_250(uParam4);
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
	__LIB_0__::func_16(iParam0);
	__LIB_5__::func_224(iParam0);
	__LIB_5__::func_609(iParam0, Global_35, 0, 0, 0, 1);
	__LIB_5__::func_604(iParam0);
	__LIB_5__::func_182(iParam0);
	return true;
}

bool func_28(int iParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_9__::func_169(iParam0))
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
	char cVar0[64];
	if (!func_137(2))
	{
		return false;
	}
	if (!func_137(0))
	{
		return false;
	}
	if (!func_137(1))
	{
		return false;
	}
	func_138(iParam0);
	__LIB_0__::func_928(&(iParam0->f_958.f_1771), iLocal_60[2], "SWANSON", 0);
	__LIB_0__::func_928(&(iParam0->f_958.f_1771), iLocal_60[0], "RRVD_PokerGuy", 0);
	StringCopy(&cVar0, "1-Start-MultiStart", 64);
	__LIB_9__::func_964(iParam0, cVar0);
	StringCopy(&cVar0, "1-Start", 64);
	__LIB_9__::func_109(iParam0, cVar0);
	return true;
}

void func_36(int iParam0)
{
	__LIB_5__::func_218(&(iParam0->f_958), 1, 1);
	__LIB_19__::func_327(iParam0);
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_181))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_181);
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
	float fVar0;
	int iVar1;
	func_153(iParam0);
	func_154(iParam0);
	func_155();
	fVar0 = __LIB_0__::func_94(Global_35, __LIB_1__::func_469(10), 0);
	iVar1 = CLOCK::GET_CLOCK_HOURS();
	if ((fVar0 <= 55f && iVar1 >= 16) && iVar1 <= 18)
	{
		CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
	}
	return 1;
}

bool func_41(int iParam0)
{
	if (__LIB_5__::func_132(iParam0))
	{
		func_158(&(iParam0->f_958), __LIB_5__::func_135(iParam0), 0, 0);
		if (__LIB_5__::func_397(iParam0))
		{
			func_160();
		}
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
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	func_160();
	if (!PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin"))
	{
		if (__LIB_0__::func_94(Global_35, vLocal_22, 0) < 2f)
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", true, -1);
		}
	}
	if (func_162(2))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_27);
	}
}

bool func_44(int iParam0)
{
	if (__LIB_5__::func_132(iParam0))
	{
		return func_158(&(iParam0->f_958), __LIB_5__::func_135(iParam0), iParam0->f_958, 0);
	}
	return __LIB_5__::func_519(iParam0);
}

bool func_53(int iParam0)
{
	func_165();
	func_166();
	func_167();
	func_168();
	if (PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin"))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
	}
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_181))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_181);
	}
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
		func_234(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_749(uParam0, 0f, 0f, 0f);
		func_236(uParam0);
		func_237(uParam0);
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
	__LIB_5__::func_410(iParam0, 2);
	__LIB_5__::func_410(iParam0, 64);
	if (!func_271())
	{
		return false;
	}
	if (!func_272())
	{
		return false;
	}
	if (!func_273(iParam0))
	{
		return false;
	}
	func_274();
	return true;
}

int func_135(int iParam0, bool bParam1)
{
	int iVar0;
	if (__LIB_2__::func_27(iParam0, 2))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	iVar0 = __LIB_5__::func_191(*iParam0);
	if (!__LIB_0__::func_31(iVar0))
	{
		return 1;
	}
	iParam0->f_4 = ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iVar0));
	return func_282(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

bool func_137(int iParam0)
{
	vector3 vVar0;
	if (!func_285(iParam0, 1))
	{
		return false;
	}
	if (!__LIB_0__::func_163(iLocal_60[iParam0], 1647992574))
	{
		vVar0 = { func_287(iParam0) };
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_60[iParam0], vVar0, 1f, -1, true, false, true, false);
	}
	return TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_60[iParam0], 0);
}

void func_138(int iParam0)
{
	__LIB_5__::func_609(iParam0, Global_35, "ARTHUR", 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_60[2], "RevSwanson", 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_60[0], "U_M_M_VALPOKERPLAYER_01", 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_60[1], "U_M_M_VALPOKERPLAYER_02", 0, 0, 1);
	__LIB_5__::func_532(iParam0, iLocal_52[0], "p_cards01x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_52[1], "p_chair05x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_52[2], "p_chair05x^1", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_52[3], "p_chair05x^2", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_52[4], 0, 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_52[5], 0, 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_52[6], 0, 0, 0, 1, 0);
	__LIB_5__::func_183(iParam0, Global_35, 0);
	__LIB_5__::func_183(iParam0, iLocal_60[2], 0);
	__LIB_5__::func_183(iParam0, iLocal_60[0], 0);
	__LIB_5__::func_183(iParam0, iLocal_60[1], 0);
	func_289(iParam0, 0);
	func_289(iParam0, 1);
	func_289(iParam0, 2);
	func_289(iParam0, 3);
	func_289(iParam0, 4);
	func_289(iParam0, 5);
	func_289(iParam0, 6);
}

void func_153(int iParam0)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, "RVD_RSC1_IDLE", 24);
	switch (iLocal_170)
	{
		case 0:
			if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_64[3], Global_36))
			{
				func_302(10);
				__LIB_1__::func_148(&uLocal_171);
				func_303(1);
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_171) > 1f)
			{
				if (__LIB_1__::func_104(&(iParam0->f_958.f_1771), cVar0, 0, -1, 0, 0))
				{
					func_303(2);
				}
			}
			break;
		case 2:
			break;
	}
}

void func_154(int iParam0)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, "REV1_SHOUT", 24);
	switch (iLocal_174)
	{
		case 0:
			if (func_305())
			{
				__LIB_14__::func_245(4);
			}
			else if (func_307())
			{
				__LIB_10__::func_979(iLocal_60[2], __LIB_1__::func_464(21, 0), 500f, 0, 500f, 324);
				__LIB_14__::func_245(1);
			}
			break;
		case 1:
			if (func_305())
			{
				func_166();
				__LIB_14__::func_245(4);
			}
			else if (!func_307())
			{
				func_166();
				__LIB_14__::func_245(0);
			}
			else if (__LIB_9__::func_331(PLAYER::PLAYER_ID(), iLocal_60[2]))
			{
				if (!__LIB_0__::func_139(iLocal_177))
				{
					iLocal_177 = __LIB_1__::func_877("INTERACT_CALLOUT", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_1__::func_574(&iLocal_177, iLocal_60[2]);
				}
				if (__LIB_0__::func_139(iLocal_177) && __LIB_1__::func_514(iLocal_177, 1))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						__LIB_1__::func_221(iLocal_177, 0, 1);
						func_319(func_318(), 1);
						__LIB_14__::func_245(2);
					}
				}
			}
			else if (__LIB_0__::func_139(iLocal_177))
			{
				__LIB_1__::func_281(&iLocal_177, 1, 1);
			}
			break;
		case 2:
			if (func_305())
			{
				func_166();
				__LIB_14__::func_245(4);
			}
			else if (__LIB_1__::func_104(&(iParam0->f_958.f_1771), cVar0, 0, -1, 0, 0))
			{
				__LIB_1__::func_148(&uLocal_178);
				__LIB_14__::func_245(3);
			}
			break;
		case 3:
			if (func_305())
			{
				func_166();
				__LIB_14__::func_245(4);
			}
			else if (__LIB_1__::func_871(&uLocal_178) > 3000 && !AUDIO::_0x1ECC76792F661CF5("REV1_SHOUT"))
			{
				if (func_318() != -1)
				{
					__LIB_1__::func_221(iLocal_177, 1, 1);
					__LIB_14__::func_245(1);
				}
				else
				{
					func_166();
					__LIB_14__::func_245(4);
				}
			}
			break;
		case 4:
			break;
	}
}

void func_155()
{
	int iVar0;
	if (func_162(10))
	{
		return;
	}
	if (!func_162(9))
	{
		iLocal_181 = GRAPHICS::CREATE_TRACKED_POINT();
		GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_181, -324.8311f, -357.3004f, 88.64826f, 2f);
		func_319(9, 1);
	}
	if (!GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_181))
	{
		__LIB_14__::func_248();
		func_319(10, 1);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(iLocal_181);
		if (iVar0 >= 0 && iVar0 < 10)
		{
			GRAPHICS::DESTROY_TRACKED_POINT(iLocal_181);
			__LIB_14__::func_248();
			func_319(10, 1);
		}
	}
}

int func_158(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
			__LIB_11__::func_328(uParam0, iParam5, bParam6);
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
					__LIB_14__::func_247(uParam0, iParam5);
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
				__LIB_5__::func_515(uParam0);
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
				__LIB_14__::func_247(uParam0, iParam5);
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
						__LIB_14__::func_247(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		case 9:
			if (__LIB_5__::func_399(uParam0, iParam5))
			{
				__LIB_14__::func_247(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return 1;
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

void func_160()
{
	if (!func_162(2))
	{
		__LIB_5__::func_239("RVD_RSC1_IDLE", 0, 0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vLocal_22, 1f, -1, 0.2f, 1, fLocal_25);
		func_353();
		func_319(2, 1);
	}
	else
	{
		__LIB_3__::func_807();
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	}
}

bool func_162(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = BUILTIN::ROUND(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar1)));
	return (uLocal_175[iVar0] && iVar2) == iVar2;
}

void func_165()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_357(iVar1))
		{
			VOLUME::_DELETE_VOLUME(iLocal_64[iVar1]);
		}
		iVar0++;
	}
}

void func_166()
{
	__LIB_8__::func_771(iLocal_60[2], 0, 1, 0);
	if (__LIB_0__::func_139(iLocal_177))
	{
		__LIB_1__::func_281(&iLocal_177, 1, 1);
	}
}

void func_167()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = iVar0;
		if (func_359(iVar1))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_52[iVar1]));
		}
		iVar0++;
	}
}

void func_168()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	if (func_162(0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_69[iVar0 /*33*/][iVar1]))
				{
					OBJECT::DELETE_OBJECT(&(Local_69[iVar0 /*33*/][iVar1]));
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

void func_234(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_427();
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

void func_236(var uParam0)
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
			func_438(iVar1, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_438(iVar3, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_237(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_760(uParam0) };
			func_438(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_271()
{
	if (func_162(1))
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iLocal_14, false);
	STREAMING::REQUEST_MODEL(iLocal_15, false);
	STREAMING::REQUEST_MODEL(iLocal_16, false);
	STREAMING::REQUEST_MODEL(iLocal_17, false);
	STREAMING::REQUEST_MODEL(iLocal_18, false);
	STREAMING::REQUEST_MODEL(iLocal_19, false);
	STREAMING::REQUEST_MODEL(iLocal_20, false);
	STREAMING::REQUEST_MODEL(iLocal_21, false);
	if (((((((!STREAMING::HAS_MODEL_LOADED(iLocal_14) || !STREAMING::HAS_MODEL_LOADED(iLocal_15)) || !STREAMING::HAS_MODEL_LOADED(iLocal_16)) || !STREAMING::HAS_MODEL_LOADED(iLocal_17)) || !STREAMING::HAS_MODEL_LOADED(iLocal_18)) || !STREAMING::HAS_MODEL_LOADED(iLocal_19)) || !STREAMING::HAS_MODEL_LOADED(iLocal_20)) || !STREAMING::HAS_MODEL_LOADED(iLocal_21))
	{
		return false;
	}
	func_319(1, 1);
	return true;
}

bool func_272()
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = (iVar1 && func_483(iVar0));
		iVar0++;
	}
	iVar1 = (iVar1 && func_484());
	return iVar1;
}

bool func_273(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = (iVar0 && func_485(iParam0, iVar1));
		iVar1++;
	}
	return iVar0;
}

bool func_274()
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		bVar0 = (bVar0 && func_486(iVar1));
		iVar1++;
	}
	return bVar0;
}

int func_282(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	vector3 vVar0;
	if (!__LIB_0__::func_31(iParam1))
	{
		return 0;
	}
	if (__LIB_4__::func_767(iParam0, *uParam2))
	{
		if (*uParam2 != __LIB_0__::func_167(iParam1))
		{
		}
		return 1;
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
	*uParam2 = func_508(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(*uParam2))
		{
			return 0;
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
		return 1;
	}
	return 0;
}

bool func_285(int iParam0, bool bParam1)
{
	return ((iParam0 > -1 && iParam0 < 3) && ((bParam1 && __LIB_0__::func_272(iLocal_60[iParam0], 0)) || (!bParam1 && ENTITY::DOES_ENTITY_EXIST(iLocal_60[iParam0]))));
}

struct<4> func_287(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { -328.8708f, -357.4108f, 87.0647f };
			Var0.f_3 = 76.32f;
			break;
		case 1:
			Var0 = { -328.5955f, -358.8191f, 87.1241f };
			Var0.f_3 = 160.56f;
			break;
		case 2:
			Var0 = { -326.7283f, -356.9244f, 87.0636f };
			break;
	}
	return Var0;
}

void func_289(int iParam0, int iParam1)
{
	int iVar0;
	if (!func_359(iParam1))
	{
		return;
	}
	iVar0 = func_514(iParam1);
	if (iVar0 != 1)
	{
		DECORATOR::DECOR_SET_INT(iLocal_52[iParam1], __LIB_5__::func_393(), iVar0);
	}
	__LIB_5__::func_183(iParam0, iLocal_52[iParam1], 0);
}

void func_302(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_83(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_702(Global_1835011[iParam0 /*74*/].f_1))
	{
		return;
	}
	iVar0 = __LIB_0__::func_80(Global_1835011[iParam0 /*74*/].f_1);
	if (!__LIB_0__::func_79(iVar0))
	{
		return;
	}
	__LIB_1__::func_109(iVar0, 1048576);
}

void func_303(int iParam0)
{
	if (iLocal_170 != iParam0)
	{
		iLocal_170 = iParam0;
	}
}

bool func_305()
{
	return iLocal_170 >= 1;
}

bool func_307()
{
	if (func_520())
	{
		return false;
	}
	if (func_521(1))
	{
		return false;
	}
	return ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_64[0], false, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_64[1], false, 0)) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_64[2], false, 0));
}

int func_318()
{
	int iVar0;
	int iVar1;
	iVar0 = func_532();
	if (iVar0 == -1)
	{
		return 3;
	}
	iVar1 = iVar0 + 1;
	if (iVar1 > 8)
	{
		iVar1 = -1;
	}
	return iVar1;
}

void func_319(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = BUILTIN::ROUND(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar1)));
	bVar3 = (uLocal_175[iVar0] && iVar2) == iVar2;
	if (!bVar3 && bParam1)
	{
		uLocal_175[iVar0] = (uLocal_175[iVar0] || iVar2);
	}
	else if (bVar3 && !bParam1)
	{
		iVar4 = (-1 - iVar2);
		uLocal_175[iVar0] = (uLocal_175[iVar0] && iVar4);
	}
}

void func_353()
{
	Local_27 = { 0f, 0f, -0.5f };
	Local_27.f_3 = iLocal_60[2];
	Local_27.f_4 = 21030;
	Local_27.f_8 = 4;
	Local_27.f_19 = 4;
	Local_27.f_21 = 4;
	Local_27.f_17 = 4;
	Local_27.f_18 = 4;
	Local_27.f_7 = 0;
}

bool func_357(int iParam0)
{
	return ((iParam0 > -1 && iParam0 < 4) && VOLUME::_DOES_VOLUME_EXIST(iLocal_64[iParam0]));
}

bool func_359(int iParam0)
{
	return ((iParam0 > -1 && iParam0 < 7) && ENTITY::DOES_ENTITY_EXIST(iLocal_52[iParam0]));
}

void func_427()
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
	iVar0 = func_614(6291456, 0);
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

void func_438(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_438(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_438(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_483(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	if (func_359(iParam0))
	{
		return 1;
	}
	if (!func_653(iParam0, &iVar0, &Var1))
	{
		return 0;
	}
	iLocal_52[iParam0] = OBJECT::CREATE_OBJECT(iVar0, Var1, true, true, false, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[iParam0]))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_52[iParam0], Var1.f_3);
		return 1;
	}
	return 0;
}

int func_484()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	var uVar7;
	if (func_162(0))
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	func_654();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = Local_69[iVar0 /*33*/].f_32;
		iLocal_169 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if ((iVar2 % 10) > 0)
			{
				iVar3 = (iVar2 % 10);
				iVar2 = (iVar2 - (iVar2 % 10));
			}
			else if (iVar2 > 0)
			{
				iVar3 = 10;
				iVar2 = (iVar2 - 10);
			}
			else
			{
				iVar3 = 0;
			}
			if (iVar3 > 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_69[iVar0 /*33*/][iVar1]))
				{
					if (func_655(Local_69[iVar0 /*33*/].f_31, iVar1, &vVar4, &uVar7, 1))
					{
						Local_69[iVar0 /*33*/][iVar1] = OBJECT::CREATE_OBJECT(iLocal_21, vVar4, true, true, false, false, true);
						if (Local_69[iVar0 /*33*/].f_31 == 3)
						{
							OBJECT::_SET_OBJECT_TEXTURE_VARIATION(Local_69[iVar0 /*33*/][iVar1], 24);
						}
						else
						{
							OBJECT::_SET_OBJECT_TEXTURE_VARIATION(Local_69[iVar0 /*33*/][iVar1], 18);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_69[iVar0 /*33*/][iVar1]))
				{
					func_656(Local_69[iVar0 /*33*/][iVar1], 0, iVar3, iLocal_169);
				}
				iLocal_169++;
				iVar2 = (iVar2 / 10);
			}
			iVar1++;
		}
		iVar0++;
	}
	func_319(0, 1);
	return 1;
}

int func_485(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	if (func_285(iParam1, 0))
	{
		return 1;
	}
	if (func_657())
	{
		return 0;
	}
	if (!func_658(iParam1, &iVar0, &iVar1, &Var2))
	{
		return 0;
	}
	if (iVar1 != -1)
	{
		func_282(iParam0, iVar1, &(iLocal_60[iParam1]), 0, 1, Var2, Var2.f_1, Var2.f_2, 0, 0, 0, 0, 0);
	}
	else if (iVar0 != 0)
	{
		iLocal_60[iParam1] = __LIB_1__::func_545(iVar0, Var2, Var2.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_60[iParam1]))
	{
		func_660(iParam1);
		func_661();
		return 1;
	}
	return 0;
}

bool func_486(int iParam0)
{
	if (func_357(iParam0))
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			iLocal_64[iParam0] = VOLUME::_CREATE_VOLUME_BOX(-332.454f, -358.2838f, 86.75181f, 0f, 0f, 27.58047f, 51.53156f, 32.94476f, 26.50452f);
			break;
		case 1:
			iLocal_64[iParam0] = VOLUME::_CREATE_VOLUME_BOX(-329.0231f, -359.5379f, 87.32176f, 0f, 0f, -63.2881f, 7.303298f, 9.502841f, 5.007598f);
			break;
		case 2:
			iLocal_64[iParam0] = VOLUME::_CREATE_VOLUME_BOX(-323.0196f, -357.1184f, 87.22038f, 0f, 0f, 27.18377f, 3.612593f, 2.697532f, 5.066611f);
			break;
		case 3:
			iLocal_64[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("RVD1_LeadinDlgTrigger");
			VOLUME::_0x39816F6F94F385AD(iLocal_64[iParam0], -333.396f, -358.114f, 88.272f, 0f, 0f, -27f, 3f, 6f, 2.7f);
			VOLUME::_0x39816F6F94F385AD(iLocal_64[iParam0], -336.327f, -360.903f, 88.54f, 0f, 0f, -27f, 4.5f, 6f, 3f);
			VOLUME::_0x39816F6F94F385AD(iLocal_64[iParam0], -323.376f, -356.531f, 88.469f, 0f, 0f, -27f, 3.3f, 5.5f, 2.7f);
			break;
	}
	return func_357(iParam0);
}

int func_508(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_438(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

int func_514(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 4;
		case 4:
			return 5;
		case 5:
			return 6;
		case 6:
			return 7;
		default:
			break;
	}
	return 1;
}

bool func_520()
{
	int iVar0;
	int iVar1;
	if (!PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, 1, 1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return true;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (iVar1 == iLocal_60[2])
	{
		return false;
	}
	return true;
}

bool func_521(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if ((MISC::GET_FRAME_COUNT() % 10) != 0)
	{
		return iLocal_182;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return false;
	}
	iVar1 = ENTITY::_0x59B57C4B06531E1E(Global_36, 3f, iVar0, 1);
	iLocal_182 = 0;
	if (iVar1 > 0)
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
			if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar3))
			{
				iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4) && ENTITY::IS_ENTITY_A_PED(iVar4))
				{
					iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
					if (iVar5 != Global_35)
					{
						if (!bParam0)
						{
							iLocal_182 = 1;
							Jump @179; //curOff = 148
						}
						else if (!__LIB_14__::func_246(iVar5))
						{
							iLocal_182 = 1;
						}
						else
						{
							iVar2++;
						}
						ITEMSET::DESTROY_ITEMSET(iVar0);
						return iLocal_182;
					}
				}
			}
		}
	}
}

int func_532()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = 3;
	while (iVar1 <= 8)
	{
		iVar2 = iVar1;
		if (func_162(iVar2))
		{
			iVar0 = iVar2;
		}
	else
	{
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_614(int iParam0, int iParam1)
{
	var uVar0;
	return func_768(&uVar0, iParam0, iParam1);
}

bool func_653(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = { 0f, 0f, 0f };
	uParam2->f_3 = 0f;
	switch (iParam0)
	{
		case 0:
			*iParam1 = iLocal_16;
			*uParam2 = { -326.7443f, -359.3875f, 87.06474f };
			break;
		case 1:
			*iParam1 = iLocal_17;
			*uParam2 = { -328.8708f, -357.4108f, 87.0647f };
			uParam2->f_3 = 76.32f;
			break;
		case 2:
			*iParam1 = iLocal_17;
			*uParam2 = { -328.5955f, -358.8191f, 87.1241f };
			uParam2->f_3 = 160.56f;
			break;
		case 3:
			*iParam1 = iLocal_17;
			*uParam2 = { -326.7283f, -356.9244f, 87.0636f };
			uParam2->f_3 = -43.56f;
			break;
		case 4:
			*iParam1 = iLocal_18;
			*uParam2 = { -326.7443f, -359.3875f, 87.06474f };
			break;
		case 5:
			*iParam1 = iLocal_19;
			*uParam2 = { -326.7443f, -359.3875f, 87.06474f };
			break;
		case 6:
			*iParam1 = iLocal_20;
			*uParam2 = { -326.7443f, -359.3875f, 87.06474f };
			break;
	}
	return (*iParam1 != 0 && !__LIB_0__::func_86(*uParam2));
}

void func_654()
{
	Local_69[0 /*33*/].f_31 = 3;
	Local_69[1 /*33*/].f_31 = 4;
	Local_69[2 /*33*/].f_31 = 0;
	Local_69[0 /*33*/].f_32 = 384;
	Local_69[1 /*33*/].f_32 = 109;
	Local_69[2 /*33*/].f_32 = 61;
}

bool func_655(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	struct<9> Var7;
	bVar0 = true;
	if (iParam0 == 0)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.2469f, 0.657f, 0.8024f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.2508f, 0.605f, 0.8024f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.2875f, 0.6661f, 0.8024f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.3161f, 0.6243f, 0.8024f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam0 == 1)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.4455f, 0.5423f, 0.8024f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.3985f, 0.5197f, 0.8024f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.4331f, 0.582f, 0.8024f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.3826f, 0.5859f, 0.8024f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam0 == 2)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.6924f, -0.1147f, 0.8024f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.6493f, -0.0852f, 0.8024f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.7206f, -0.084f, 0.8024f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.6987f, -0.0384f, 0.8024f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.3469f, -0.707f, 0.8024f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.3508f, -0.655f, 0.8024f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.3875f, -0.7161f, 0.8024f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.4161f, -0.6743f, 0.8024f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.4455f, -0.5423f, 0.8024f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.3985f, -0.5197f, 0.8024f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.4331f, -0.582f, 0.8024f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.3826f, -0.5859f, 0.8024f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.6924f, 0.1147f, 0.8024f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.6493f, 0.0852f, 0.8024f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.7206f, 0.084f, 0.8024f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.6987f, 0.0384f, 0.8024f };
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
	if (bVar0)
	{
		if (bParam4)
		{
			Var7 = -1;
			Var7.f_1 = -1;
			Var7.f_2 = -1;
			__LIB_1__::func_65(30, &Var7, 1);
			__LIB_4__::func_883(Var7.f_5, Var7.f_8, vVar1, vVar4, uParam2, uParam3);
		}
		else
		{
			*uParam2 = { vVar1 };
			*uParam3 = { vVar4 };
		}
		return true;
	}
	return false;
}

void func_656(var uParam0, int iParam1, int iParam2, int iParam3)
{
	char cVar0[32];
	int iVar4;
	iVar4 = 0;
	while (iVar4 < iParam2)
	{
		if (iParam1 + 1 == 10)
		{
			switch (iParam3)
			{
				case 0:
					StringCopy(&cVar0, "WhiteChip_Ctrl_10", 32);
					break;
				case 1:
					StringCopy(&cVar0, "BlueChip_Ctrl_10", 32);
					break;
				case 2:
					StringCopy(&cVar0, "BlackChip_Ctrl_10", 32);
					break;
				case 3:
					StringCopy(&cVar0, "RedChip_Ctrl_10", 32);
					break;
			}
		}
		else
		{
			switch (iParam3)
			{
				case 0:
					StringCopy(&cVar0, "WhiteChip_Ctrl_0", 32);
					break;
				case 1:
					StringCopy(&cVar0, "BlueChip_Ctrl_0", 32);
					break;
				case 2:
					StringCopy(&cVar0, "BlackChip_Ctrl_0", 32);
					break;
				case 3:
					StringCopy(&cVar0, "RedChip_Ctrl_0", 32);
					break;
			}
			StringIntConCat(&cVar0, iParam1 + 1, 32);
		}
		ENTITY::_0x669655FFB29EF1A9(uParam0, 2, &cVar0, 1f);
		iParam1++;
		iVar4++;
	}
}

bool func_657()
{
	return iLocal_26 == MISC::GET_FRAME_COUNT();
}

bool func_658(int iParam0, int iParam1, int iParam2, var uParam3)
{
	*iParam1 = 0;
	*iParam2 = -1;
	*uParam3 = { func_287(iParam0) };
	switch (iParam0)
	{
		case 0:
			*iParam1 = iLocal_14;
			break;
		case 1:
			*iParam1 = iLocal_15;
			break;
		case 2:
			*iParam2 = 21;
			break;
	}
	return ((*iParam1 != 0 || *iParam2 != -1) && !__LIB_0__::func_86(*uParam3));
}

void func_660(int iParam0)
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_60[iParam0], true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_60[iParam0], false);
	PED::SET_PED_CONFIG_FLAG(iLocal_60[iParam0], 278, true);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_60[iParam0], false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_60[iParam0], joaat("REL_PLAYER_ALLY"));
	PED::_0xAE6004120C18DF97(iLocal_60[iParam0], 0, 0);
	if (iParam0 == 2)
	{
		ENTITY::_0x1AD922AB5038DEF3(iLocal_60[iParam0]);
	}
}

void func_661()
{
	iLocal_26 = MISC::GET_FRAME_COUNT();
}

int func_768(var uParam0, int iParam1, int iParam2)
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
		return func_768(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

