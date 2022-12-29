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
	struct<9> Local_14 = { 0, 0, 0, 2, 0, 0, 0, 0, 1 } ;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28[1] = { 0 };
	int iLocal_30[1] = { 0 };
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	struct<9> Local_34[2];
	struct<26> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	struct<20> Local_89 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_109 = 0;
	struct<2907> Local_110 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
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
	iLocal_25 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (__LIB_5__::func_203(Local_110))
		{
			__LIB_0__::func_8(&Global_1935630, 32768);
		}
		func_3(&Local_110, 1);
	}
	__LIB_5__::func_610(&uScriptParam_0, &Local_110);
	while (!__LIB_2__::func_27(&Local_110, 1))
	{
		if (__LIB_4__::func_721(&Local_110) != 10)
		{
			if ((__LIB_4__::func_721(&Local_110) == 3 || __LIB_4__::func_721(&Local_110) == 4) && (!__LIB_5__::func_132(&Local_110) || __LIB_0__::func_78(&(Local_110.f_958)) > 0))
			{
				__LIB_7__::func_446(&Local_110, __LIB_2__::func_27(&Local_110, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && __LIB_5__::func_204(&Local_110)) && __LIB_2__::func_27(&Local_110, 65536))
			{
				__LIB_7__::func_446(&Local_110, 1);
			}
		}
		if (__LIB_4__::func_721(&Local_110) >= 3 && __LIB_4__::func_721(&Local_110) <= 7)
		{
			__LIB_5__::func_525(&Local_110);
		}
		if (((((__LIB_4__::func_721(&Local_110) >= 5 && __LIB_4__::func_721(&Local_110) <= 7) && !__LIB_2__::func_27(&Local_110, 4096)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_110.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_110.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_110.f_428.f_444))
		{
			MemCopy(&Var1, {__LIB_4__::func_681(Local_110)}, 4);
			func_13(Var1, &(Local_110.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (__LIB_4__::func_721(&Local_110))
		{
			case 8:
				if (__LIB_5__::func_607(&Local_110))
				{
					__LIB_5__::func_536(&Local_110);
					__LIB_0__::func_0(&Local_110);
					__LIB_4__::func_722(&Local_110, 0);
				}
				else if (!__LIB_5__::func_204(&Local_110))
				{
					if (!__LIB_0__::func_75(&(Local_110.f_2899)))
					{
						__LIB_1__::func_283(&(Local_110.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_110))
					{
						if (__LIB_0__::func_264(&(Local_110.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_110.f_2889, 2097152);
							__LIB_5__::func_174(&Local_110);
							__LIB_5__::func_608(&Local_110);
							__LIB_4__::func_722(&Local_110, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_110, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_110, 536870912);
						}
						__LIB_1__::func_148(&(Local_110.f_2899));
					}
				}
				break;
			case 0:
				if (__LIB_5__::func_204(&Local_110))
				{
					__LIB_0__::func_0(&Local_110);
				}
				if (!__LIB_5__::func_204(&Local_110) || __LIB_2__::func_27(&Local_110, 65536))
				{
					if (func_27(&Local_110))
					{
						__LIB_4__::func_722(&Local_110, 1);
					}
				}
				break;
			case 1:
				if (__LIB_5__::func_204(&Local_110))
				{
					__LIB_0__::func_0(&Local_110);
				}
				if (func_28(&Local_110))
				{
					__LIB_4__::func_722(&Local_110, 2);
				}
				break;
			case 2:
				if (__LIB_5__::func_204(&Local_110))
				{
					__LIB_0__::func_0(&Local_110);
				}
				if (func_29(&Local_110))
				{
					if (!__LIB_5__::func_132(&Local_110) || __LIB_5__::func_204(&Local_110))
					{
						if (!__LIB_0__::func_79(Local_110.f_2889))
						{
							Local_110.f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(Local_110));
						}
						__LIB_1__::func_109(Local_110.f_2889, 4);
						__LIB_5__::func_410(&Local_110, 8192);
					}
					if (__LIB_5__::func_204(&Local_110))
					{
						__LIB_5__::func_175(&Local_110);
						__LIB_4__::func_722(&Local_110, 9);
					}
					else
					{
						__LIB_4__::func_722(&Local_110, 3);
					}
				}
				break;
			case 9:
				if (__LIB_0__::func_0(&Local_110))
				{
					__LIB_0__::func_11(&Local_110);
					__LIB_5__::func_536(&Local_110);
					__LIB_11__::func_113(&Local_110);
					if (!__LIB_2__::func_27(&Local_110, 256))
					{
						func_36(&Local_110);
						__LIB_5__::func_227(Local_110);
						func_38(&Local_110);
						__LIB_4__::func_722(&Local_110, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_110, 5);
					}
				}
				break;
			case 3:
				if (!__LIB_2__::func_27(&Local_110, 8192))
				{
					if (__LIB_0__::func_78(&(Local_110.f_958)) == 3)
					{
						__LIB_1__::func_109(Local_110.f_2889, 4);
						__LIB_5__::func_410(&Local_110, 8192);
					}
				}
				__LIB_14__::func_414(&Local_110);
				if (__LIB_3__::func_919(__LIB_0__::func_80(Global_1835011[Local_110 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&Local_110) || __LIB_5__::func_176(&Local_110, 32768))
				{
					__LIB_0__::func_11(&Local_110);
					__LIB_5__::func_536(&Local_110);
					__LIB_4__::func_722(&Local_110, 4);
					__LIB_1__::func_283(&(Local_110.f_2890), 0);
				}
				else if (__LIB_5__::func_204(&Local_110) && !__LIB_5__::func_203(Local_110))
				{
					if (!__LIB_0__::func_75(&(Local_110.f_2899)))
					{
						__LIB_1__::func_283(&(Local_110.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_110))
					{
						if (__LIB_0__::func_264(&(Local_110.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_110.f_2889, 2097152);
							__LIB_5__::func_174(&Local_110);
							__LIB_5__::func_608(&Local_110);
							__LIB_4__::func_722(&Local_110, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_110, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_110, 536870912);
						}
						__LIB_1__::func_148(&(Local_110.f_2899));
					}
				}
				break;
			case 4:
				__LIB_6__::func_109(&Local_110);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (func_44(&Local_110) || (__LIB_5__::func_176(&Local_110, 32768) && !__LIB_2__::func_27(&Local_110, 268435456)))
				{
					__LIB_11__::func_113(&Local_110);
					if (!__LIB_2__::func_27(&Local_110, 256))
					{
						func_36(&Local_110);
						func_38(&Local_110);
						if (!__LIB_0__::func_1(Global_1935630, 524288) || __LIB_5__::func_176(&Local_110, 524288))
						{
							__LIB_5__::func_227(Local_110);
							__LIB_4__::func_722(&Local_110, 7);
						}
						else
						{
							__LIB_4__::func_722(&Local_110, 6);
						}
					}
					else
					{
						__LIB_5__::func_227(Local_110);
						__LIB_4__::func_722(&Local_110, 5);
					}
				}
				break;
			case 5:
				__LIB_0__::func_11(&Local_110);
				__LIB_5__::func_526(&Local_110);
				if (__LIB_0__::func_265(&(Local_110.f_2884)) >= __LIB_4__::func_723(&Local_110))
				{
					func_36(&Local_110);
					func_38(&Local_110);
					__LIB_1__::func_148(&(Local_110.f_2884));
					if (!__LIB_5__::func_176(&Local_110, 524288))
					{
						__LIB_5__::func_227(Local_110);
						__LIB_4__::func_722(&Local_110, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_110, 6);
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75(&(Local_110.f_2906)))
				{
					__LIB_1__::func_283(&(Local_110.f_2906), 0);
				}
				if ((__LIB_0__::func_81(&(Local_110.f_428)) == 4 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_110.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_110.f_428.f_444))
				{
					__LIB_5__::func_227(Local_110);
					__LIB_4__::func_722(&Local_110, 7);
				}
				else if (__LIB_0__::func_265(&(Local_110.f_2906)) >= 5f)
				{
					__LIB_5__::func_227(Local_110);
					__LIB_4__::func_722(&Local_110, 7);
				}
				break;
			case 7:
				__LIB_0__::func_11(&Local_110);
				if (__LIB_5__::func_530(&Local_110))
				{
					__LIB_4__::func_722(&Local_110, 10);
				}
				break;
			case 10:
				if (func_3(&Local_110, 0))
				{
					__LIB_5__::func_410(&Local_110, 1);
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
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_11__::func_111(uParam4, 1))
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
	int iVar0;
	iVar0 = 1;
	STREAMING::REQUEST_MODEL(joaat("P_CRD_CHIPBLUE01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_NOOSE03X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_DETONATOR01X"), false);
	STREAMING::REQUEST_MODEL(joaat("A_M_M_UNICORPSE_01"), false);
	if (!__LIB_0__::func_27(iLocal_32, 1))
	{
		if (((STREAMING::HAS_MODEL_LOADED(joaat("P_CRD_CHIPBLUE01X")) && STREAMING::HAS_MODEL_LOADED(joaat("P_NOOSE03X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_DETONATOR01X"))) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_UNICORPSE_01")))
		{
			if (!func_138())
			{
				return false;
			}
			else
			{
				__LIB_1__::func_683(&iLocal_32, 1);
			}
		}
		else
		{
			return false;
		}
	}
	__LIB_5__::func_609(iParam0, Global_35, 0, 0, 0, 1);
	__LIB_8__::func_913(&(iParam0->f_428), 15853);
	return iVar0;
}

int func_36(int iParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_Fussar2_Corpse_Area", false, true);
	if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), joaat("WEAPON_KIT_CAMERA"), 0))
	{
		INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("WEAPON_KIT_CAMERA"));
	}
	if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), joaat("WEAPON_KIT_BINOCULARS"), 0))
	{
		INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("WEAPON_KIT_BINOCULARS"));
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FUS2_Intro_Arthur_Drugged_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("FUS2_Intro_Arthur_Drugged_Scene");
	}
	return 1;
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

bool func_41(int iParam0)
{
	if (func_154(iParam0))
	{
		return true;
	}
	return false;
}

bool func_44(int iParam0)
{
	if (func_154(iParam0))
	{
		return true;
	}
	return false;
}

bool func_53(int iParam0)
{
	func_158(&Local_53);
	PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_Fussar2_Corpse_Area", false, true);
	if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), joaat("WEAPON_KIT_CAMERA"), 0))
	{
		INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("WEAPON_KIT_CAMERA"));
	}
	if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), joaat("WEAPON_KIT_BINOCULARS"), 0))
	{
		INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("WEAPON_KIT_BINOCULARS"));
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FUS2_Intro_Arthur_Drugged_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("FUS2_Intro_Arthur_Drugged_Scene");
	}
	func_159();
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
		func_226(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_749(uParam0, 0f, 0f, 0f);
		func_228(uParam0);
		func_229(uParam0);
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
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	bVar0 = true;
	func_263();
	StringCopy(&cVar2, "1B-Start_BoatNotReady", 64);
	StringCopy(&cVar10, "1B-Start_BoatNotReady", 64);
	__LIB_9__::func_106(1);
	__LIB_5__::func_410(iParam0, 16384);
	__LIB_9__::func_109(iParam0, cVar2);
	__LIB_9__::func_964(iParam0, cVar10);
	__LIB_5__::func_410(iParam0, 8);
	__LIB_9__::func_73(iParam0, 300f);
	__LIB_9__::func_74(iParam0, 350f);
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		StringCopy(&(Local_34[iVar1 /*9*/].f_1), "WORLD_HUMAN_STARE_STOIC", 64);
		Local_34[iVar1 /*9*/] = joaat("WORLD_HUMAN_STARE_STOIC");
		if (!__LIB_2__::func_312(Local_34[iVar1 /*9*/], 1, 0, 0))
		{
		}
		iVar1++;
	}
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_Fussar2_Corpse_Area", true, true);
	if (bVar0)
	{
		PED::_0x9851DE7AEC10B4E1(1321.688f, -7223.703f, 62.1466f, 10f, 1, 0);
	}
	return bVar0;
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
	return func_277(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

bool func_138()
{
	if (func_280(-1, 1))
	{
		Local_53 = { 1321.688f, -7223.703f, 62.1466f };
		Local_53.f_3 = { 1321.688f, -7223.703f, 58.1466f };
		Local_53.f_22 = { 1321.688f, -7223.703f, 60.1466f };
		Local_53.f_7 = Local_14.f_8[0];
		Local_53.f_8 = { 0f, 0f, 51.467f };
		Local_53.f_11 = { 0f, 0f, 0f };
		Local_53.f_14 = 4f;
		PED::SET_PED_CONFIG_FLAG(Local_14.f_8[0], 223, true);
		PED::SET_PED_CONFIG_FLAG(Local_14.f_8[0], 186, false);
		ENTITY::_0x18FF3110CF47115D(Local_14.f_8[0], 7, 0);
		PED::SET_PED_CONFIG_FLAG(Local_14.f_8[0], 38, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_14.f_8[0], 1);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_14.f_8[0], true);
		PED::SET_PED_CONFIG_FLAG(Local_14.f_8[0], 297, false);
		PED::SET_PED_CONFIG_FLAG(Local_14.f_8[0], 130, true);
		PED::SET_PED_CONFIG_FLAG(Local_14.f_8[0], 315, true);
		PED::SET_PED_CONFIG_FLAG(Local_14.f_8[0], 305, true);
		PED::SET_PED_CAN_BE_TARGETTED(Local_14.f_8[0], false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_8[0], joaat("REL_GANG_DUTCHS"));
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Local_14.f_8[0], "mood_dead_1", "FACE_HUMAN@GEN_MALE@BASE");
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_8[0], true);
		__LIB_3__::func_459(Local_14.f_8[0], 0);
		PED::_0x6569F31A01B4C097(Local_14.f_8[0], 4, 0);
		__LIB_1__::func_864(Local_14.f_8[0], 1, 0);
		PHYSICS::ACTIVATE_PHYSICS(Local_14.f_8[0]);
		if (!Local_53.f_25)
		{
			if (func_283(&Local_53))
			{
				PED::_SET_PED_BODY_COMPONENT(Local_14.f_8[0], -300122447);
				PED::_UPDATE_PED_VARIATION(Local_14.f_8[0], false, true, true, true, false);
				Local_53.f_25 = 1;
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_154(int iParam0)
{
	func_294(iParam0);
	func_295();
	func_296();
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	if (iLocal_24 > 1)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 277, true);
	}
	if (iLocal_24 >= 2)
	{
		if (CAM::_0x74F1D22EFA71FAB8())
		{
			CAM::SET_CINEMATIC_MODE_ACTIVE(false);
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 334, true);
	}
	__LIB_4__::func_614();
	if (!INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), joaat("WEAPON_KIT_BINOCULARS"), 0))
	{
		INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), joaat("WEAPON_KIT_BINOCULARS"), 0);
	}
	switch (iLocal_24)
	{
		case 0:
			iLocal_24 = 1;
			break;
		case 1:
			func_298(&Local_53);
			if (__LIB_1__::func_205(Global_35, iLocal_30[0], 1, 0))
			{
				iLocal_25 = 0;
				func_300();
				iLocal_24 = 2;
			}
			break;
		case 2:
			if (func_301())
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_14.f_8[0], 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				__LIB_1__::func_148(&uLocal_80);
				iLocal_24 = 3;
			}
			break;
		case 3:
			func_296();
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, true) != 1)
			{
				func_302(Global_35, Local_14.f_8[0]);
				if (__LIB_1__::func_871(&uLocal_80) > 5000)
				{
					iLocal_24 = 4;
				}
			}
			break;
		case 4:
			if (func_296())
			{
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					func_304();
					__LIB_1__::func_148(&uLocal_86);
					func_305();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
					iLocal_25 = 1;
					iLocal_24 = 5;
				}
			}
			break;
		case 5:
			if (!__LIB_0__::func_27(iLocal_32, 8))
			{
				if (AUDIO::START_AUDIO_SCENE("FUS2_Intro_Arthur_Drugged_Scene"))
				{
					__LIB_1__::func_683(&iLocal_32, 8);
				}
			}
			if (!__LIB_0__::func_27(iLocal_32, 4))
			{
				if (__LIB_1__::func_871(&uLocal_86) > 100)
				{
					CAM::SHAKE_GAMEPLAY_CAM("JOLT_SHAKE", 2f);
					__LIB_1__::func_683(&iLocal_32, 4);
				}
			}
			func_305();
			func_302(Global_35, Local_14.f_8[0]);
			if (func_306())
			{
				GRAPHICS::ANIMPOSTFX_PLAY("PoisonDartPassOut");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_1__::func_148(&uLocal_83);
				PED::_0x406CCF555B04FAD3(Global_35, 1, 1f);
				iLocal_24 = 6;
			}
			break;
		case 6:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			if (__LIB_1__::func_871(&uLocal_83) >= 5000)
			{
				__LIB_3__::func_676(Global_35, 5000, 7000, 0, 0);
				iLocal_24 = 7;
			}
			break;
		case 7:
			if (__LIB_1__::func_871(&uLocal_83) >= 8500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_24 = 8;
			}
			break;
		case 8:
			return true;
	}
	return false;
}

void func_158(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_16))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_16));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_15));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_17));
	}
	if (uParam0->f_6 != 0)
	{
		PHYSICS::DELETE_ROPE(&(uParam0->f_6));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_21));
	}
}

void func_159()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_30[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iLocal_30[iVar0]);
		}
		iVar0++;
	}
}

void func_226(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_382();
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

void func_228(var uParam0)
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
			func_393(iVar1, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_393(iVar3, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_229(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_760(uParam0) };
			func_393(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_263()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_30[0]))
	{
		iLocal_30[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1318.795f, -7225.081f, 55.60172f, 0f, 0f, -31.52841f, 10.44719f, 9.096654f, 6.580655f, "FUS2_INTRO_VOLUME_LEADIN_TRIGGER");
	}
}

int func_277(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
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
	*uParam2 = func_460(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
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

bool func_280(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_6))
	{
		Local_14.f_6 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_6), 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_8[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_8[0] = __LIB_1__::func_545(joaat("A_M_M_UNICORPSE_01"), 1315.539f, -7274.301f, 70.1452f, 51.4672f, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_8[0], "HangPed01");
		__LIB_6__::func_906(Local_14.f_6, Local_14.f_8[0]);
		__LIB_5__::func_510(Local_14.f_8[0], Local_14);
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
	__LIB_0__::func_240(&(Local_14.f_6), 1);
	return true;
}

bool func_283(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
	{
		uParam0->f_15 = OBJECT::CREATE_OBJECT(joaat("P_DETONATOR01X"), *uParam0, true, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_15, true);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_15, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_17))
	{
		uParam0->f_17 = OBJECT::CREATE_OBJECT(joaat("P_NOOSE03X"), uParam0->f_3, true, true, false, false, true);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_17, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
	{
		uParam0->f_21 = OBJECT::CREATE_OBJECT(joaat("P_CRD_CHIPBLUE01X"), uParam0->f_22, true, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_21, true);
		OBJECT::SET_OBJECT_TARGETTABLE(uParam0->f_21, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
	{
		if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(uParam0->f_17))
		{
			OBJECT::_0xB6CBD40F8EA69E8A(uParam0->f_17);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_17, uParam0->f_7, -1, PED::GET_PED_BONE_INDEX(uParam0->f_7, 14284), 0.05f, -0.025f, 0f, 0f, 0f, 0f, 28.4f, 94.3f, 347.4f, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
			if (!PHYSICS::DOES_ROPE_EXIST(uParam0->f_6))
			{
				uParam0->f_6 = PHYSICS::_ADD_ROPE_2(ENTITY::GET_ENTITY_COORDS(uParam0->f_15, true, false), 0f, 0f, 0f, uParam0->f_14, 6, true, -1, -1f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_7, uParam0->f_3, false, false, true, true);
				PHYSICS::ROPE_FORCE_LENGTH(uParam0->f_6, uParam0->f_14);
				PHYSICS::_0x522FA3F490E2F7AC(uParam0->f_6, 1, 1);
				PHYSICS::_0x462FF2A432733A44(uParam0->f_6, uParam0->f_15, uParam0->f_17, 0f, 0f, 0f, 0f, 0f, 0f, 0, "ropeAttach");
				PHYSICS::_0x3C6490D940FF5D0B(uParam0->f_6, 0, "ropeAttach", uParam0->f_14, 0);
				PHYSICS::_0x76BAD9D538BCA1AA(uParam0->f_6, 0f);
				PHYSICS::_0xB40EA9E0D2E2F7F3(uParam0->f_6, 1f);
				PHYSICS::STOP_ROPE_WINDING(uParam0->f_6);
				PHYSICS::_0xF1EA2A881EB7F2CD(uParam0->f_6, 1);
				AUDIO::_0xF092B6030D6FD49C(uParam0->f_6, "ROPE_SETTINGS_DEFAULT");
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
				{
					if (!PED::IS_PED_RAGDOLL(uParam0->f_7))
					{
						PED::SET_PED_TO_RAGDOLL(uParam0->f_7, 0, 0, 0, true, true, false);
					}
				}
				PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 324, true);
				PED::_0x6569F31A01B4C097(uParam0->f_7, 1, 0);
				PED::_0x6569F31A01B4C097(uParam0->f_7, 0, 0);
				return true;
			}
		}
	}
	return false;
}

void func_294(int iParam0)
{
	switch (iLocal_25)
	{
		case 0:
			if (__LIB_2__::func_813(&(iParam0->f_958.f_1771), __LIB_1__::func_344("FUS2_SPOTBODY"), 0, -1, 0, 0))
			{
				iLocal_25 = -1;
			}
			break;
		case 1:
			if (__LIB_2__::func_813(&(iParam0->f_958.f_1771), __LIB_1__::func_344("FUS2_DART"), 0, -1, 0, 0))
			{
				iLocal_25 = -1;
			}
			break;
	}
}

bool func_295()
{
	switch (iLocal_33)
	{
		case 0:
			StringCopy(&Local_89, "fus2_hint_cam", 64);
			StringCopy(&(Local_89.f_8), "FUS2_DART_CAM_HINT", 64);
			Local_89.f_19 = Global_35;
			iLocal_33 = 1;
			break;
		case 1:
			if (!CAM::_0xDD0B7C5AE58F721D(&Local_89))
			{
				CAM::_0x6A4D224FC7643941(&Local_89);
				iLocal_33 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_296()
{
	bool bVar0;
	bVar0 = true;
	switch (iLocal_26)
	{
		case 0:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_28[0]))
			{
				iLocal_28[0] = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@FUS2@IG@fus2_ig15_Poison_Dart@fus2_ig15_Poison_Dart_Arthur", 0, "pbl_ACTION", false, true);
				bVar0 = false;
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_28[0], true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_28[0], true))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_28[0]);
				}
				bVar0 = false;
			}
			if (!__LIB_14__::func_366(iLocal_28[0], "pbl_ACTION"))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_26 = 1;
			}
			break;
		case 1:
			if (bVar0)
			{
				iLocal_26 = 2;
			}
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_28[0], "player_zero", Global_35, 0);
			iLocal_26 = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

void func_298(var uParam0)
{
	if (uParam0->f_25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
		{
			if (PED::IS_PED_RAGDOLL(uParam0->f_7))
			{
				PED::RESET_PED_RAGDOLL_TIMER(uParam0->f_7);
			}
			else
			{
				PED::SET_PED_CAN_RAGDOLL(uParam0->f_7, true);
				PED::SET_PED_TO_RAGDOLL(uParam0->f_7, 10000, 20000, 0, true, true, false);
			}
			PED::SET_PED_RESET_FLAG(uParam0->f_7, 29, true);
		}
	}
}

void func_300()
{
	MISC::_0x3373779BAF7CAF48("MISTY", "misty_guama");
	MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, true, 10f, false);
}

bool func_301()
{
	int iVar0;
	switch (iLocal_27)
	{
		case 0:
			if (!PED::IS_PED_INJURED(Global_35))
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar0))
					{
						iLocal_109 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, true) != 1)
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar0))
						{
							PED::_0x6569F31A01B4C097(iLocal_109, 0, 0);
							PED::_0x6569F31A01B4C097(iLocal_109, 1, 0);
							PED::_0x6569F31A01B4C097(iLocal_109, 6, 0);
							TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iLocal_109, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1f, 1);
						}
						else
						{
							ENTITY::_0x18FF3110CF47115D(iVar0, 1, 0);
							ENTITY::_0x18FF3110CF47115D(iVar0, 2, 0);
							ENTITY::_0x18FF3110CF47115D(iVar0, 3, 0);
							ENTITY::_0x18FF3110CF47115D(iVar0, 7, 0);
							ENTITY::_0x18FF3110CF47115D(iVar0, 12, 0);
						}
						iLocal_27 = 1;
					}
				}
				else
				{
					iLocal_27 = 2;
				}
			}
			break;
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, true) != 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_109) && ENTITY::IS_ENTITY_A_PED(iLocal_109))
				{
					ENTITY::_0x18FF3110CF47115D(iLocal_109, 1, 0);
					ENTITY::_0x18FF3110CF47115D(iLocal_109, 2, 0);
					ENTITY::_0x18FF3110CF47115D(iLocal_109, 3, 0);
					ENTITY::_0x18FF3110CF47115D(iLocal_109, 7, 0);
					ENTITY::_0x18FF3110CF47115D(iLocal_109, 12, 0);
				}
				iLocal_27 = 0;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_302(var uParam0, var uParam1)
{
	struct<23> Var0;
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_3 = uParam1;
	Var0.f_4 = 21030;
	Var0.f_7 = -1;
	Var0.f_19 = 4;
	Var0.f_20 = 4;
	Var0.f_21 = 4;
	Var0.f_22 = 4;
	_NAMESPACE29::_0x66F9EB44342BB4C5(uParam0, &Var0);
}

void func_304()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_28[0], false))
	{
		ANIMSCENE::START_ANIM_SCENE(iLocal_28[0]);
	}
}

void func_305()
{
	if (func_295())
	{
		if (!__LIB_0__::func_27(iLocal_32, 2))
		{
			if (CAM::_0xDD0B7C5AE58F721D(&Local_89) && !CAM::_0x927B810E43E99932(&Local_89))
			{
				CAM::_0xB8B207C34285E978(&Local_89);
			}
			if (CAM::_0x927B810E43E99932(&Local_89))
			{
				CAM::_0x7B0279170961A73F(&Local_89);
				__LIB_1__::func_683(&iLocal_32, 2);
			}
		}
	}
}

bool func_306()
{
	if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_28[0], "player_zero") || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_28[0], "player_zero"))
	{
		return true;
	}
	return false;
}

void func_382()
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
	iVar0 = func_526(6291456, 0);
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

void func_393(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_393(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_393(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_460(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_393(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

int func_526(int iParam0, int iParam1)
{
	var uVar0;
	return func_611(&uVar0, iParam0, iParam1);
}

int func_611(var uParam0, int iParam1, int iParam2)
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
		return func_611(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

