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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19[5] = { 0, 0, 0, 0, 0 };
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	struct<10> Local_27[5];
	vector3 vLocal_78 = { 0f, 0f, 0f };
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = -1;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90[3] = { 0, 0, 0 };
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	struct<10> Local_101 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_111 = 7;
	struct<2907> Local_112 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
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
		if (__LIB_5__::func_203(Local_112))
		{
			__LIB_0__::func_8(&Global_1935630, 32768);
		}
		func_3(&Local_112, 1);
	}
	__LIB_5__::func_610(&uScriptParam_0, &Local_112);
	while (!__LIB_2__::func_27(&Local_112, 1))
	{
		if (__LIB_4__::func_721(&Local_112) != 10)
		{
			if ((__LIB_4__::func_721(&Local_112) == 3 || __LIB_4__::func_721(&Local_112) == 4) && (!__LIB_5__::func_132(&Local_112) || __LIB_0__::func_78(&(Local_112.f_958)) > 0))
			{
				__LIB_7__::func_446(&Local_112, __LIB_2__::func_27(&Local_112, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && __LIB_5__::func_204(&Local_112)) && __LIB_2__::func_27(&Local_112, 65536))
			{
				__LIB_7__::func_446(&Local_112, 1);
			}
		}
		if (__LIB_4__::func_721(&Local_112) >= 3 && __LIB_4__::func_721(&Local_112) <= 7)
		{
			__LIB_5__::func_525(&Local_112);
		}
		if (((((__LIB_4__::func_721(&Local_112) >= 5 && __LIB_4__::func_721(&Local_112) <= 7) && !__LIB_2__::func_27(&Local_112, 4096)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_112.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_112.f_428.f_444))
		{
			MemCopy(&Var1, {__LIB_4__::func_681(Local_112)}, 4);
			func_13(Var1, &(Local_112.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (__LIB_4__::func_721(&Local_112))
		{
			case 8:
				if (__LIB_5__::func_607(&Local_112))
				{
					__LIB_5__::func_536(&Local_112);
					__LIB_0__::func_0(&Local_112);
					__LIB_4__::func_722(&Local_112, 0);
				}
				else if (!__LIB_5__::func_204(&Local_112))
				{
					if (!__LIB_0__::func_75(&(Local_112.f_2899)))
					{
						__LIB_1__::func_283(&(Local_112.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_112))
					{
						if (__LIB_0__::func_264(&(Local_112.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_112.f_2889, 2097152);
							__LIB_5__::func_174(&Local_112);
							__LIB_5__::func_608(&Local_112);
							__LIB_4__::func_722(&Local_112, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_112, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_112, 536870912);
						}
						__LIB_1__::func_148(&(Local_112.f_2899));
					}
				}
				break;
			case 0:
				if (__LIB_5__::func_204(&Local_112))
				{
					__LIB_0__::func_0(&Local_112);
				}
				if (!__LIB_5__::func_204(&Local_112) || __LIB_2__::func_27(&Local_112, 65536))
				{
					if (func_27(&Local_112))
					{
						__LIB_4__::func_722(&Local_112, 1);
					}
				}
				break;
			case 1:
				if (__LIB_5__::func_204(&Local_112))
				{
					__LIB_0__::func_0(&Local_112);
				}
				if (func_28(&Local_112))
				{
					__LIB_4__::func_722(&Local_112, 2);
				}
				break;
			case 2:
				if (__LIB_5__::func_204(&Local_112))
				{
					__LIB_0__::func_0(&Local_112);
				}
				if (func_29(&Local_112))
				{
					if (!__LIB_5__::func_132(&Local_112) || __LIB_5__::func_204(&Local_112))
					{
						if (!__LIB_0__::func_79(Local_112.f_2889))
						{
							Local_112.f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(Local_112));
						}
						__LIB_1__::func_109(Local_112.f_2889, 4);
						__LIB_5__::func_410(&Local_112, 8192);
					}
					if (__LIB_5__::func_204(&Local_112))
					{
						__LIB_5__::func_175(&Local_112);
						__LIB_4__::func_722(&Local_112, 9);
					}
					else
					{
						__LIB_4__::func_722(&Local_112, 3);
					}
				}
				break;
			case 9:
				if (__LIB_0__::func_0(&Local_112))
				{
					__LIB_0__::func_11(&Local_112);
					__LIB_5__::func_536(&Local_112);
					__LIB_11__::func_815(&Local_112);
					if (!__LIB_2__::func_27(&Local_112, 256))
					{
						func_36(&Local_112);
						__LIB_5__::func_227(Local_112);
						func_38(&Local_112);
						__LIB_4__::func_722(&Local_112, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_112, 5);
					}
				}
				break;
			case 3:
				if (!__LIB_2__::func_27(&Local_112, 8192))
				{
					if (__LIB_0__::func_78(&(Local_112.f_958)) == 3)
					{
						__LIB_1__::func_109(Local_112.f_2889, 4);
						__LIB_5__::func_410(&Local_112, 8192);
					}
				}
				__LIB_0__::func_11(&Local_112);
				if (__LIB_3__::func_919(__LIB_0__::func_80(Global_1835011[Local_112 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&Local_112) || __LIB_5__::func_176(&Local_112, 32768))
				{
					__LIB_0__::func_11(&Local_112);
					__LIB_5__::func_536(&Local_112);
					__LIB_4__::func_722(&Local_112, 4);
					__LIB_1__::func_283(&(Local_112.f_2890), 0);
				}
				else if (__LIB_5__::func_204(&Local_112) && !__LIB_5__::func_203(Local_112))
				{
					if (!__LIB_0__::func_75(&(Local_112.f_2899)))
					{
						__LIB_1__::func_283(&(Local_112.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_112))
					{
						if (__LIB_0__::func_264(&(Local_112.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_112.f_2889, 2097152);
							__LIB_5__::func_174(&Local_112);
							__LIB_5__::func_608(&Local_112);
							__LIB_4__::func_722(&Local_112, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_112, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_112, 536870912);
						}
						__LIB_1__::func_148(&(Local_112.f_2899));
					}
				}
				break;
			case 4:
				func_43(&Local_112);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (func_44(&Local_112) || (__LIB_5__::func_176(&Local_112, 32768) && !__LIB_2__::func_27(&Local_112, 268435456)))
				{
					__LIB_11__::func_815(&Local_112);
					if (!__LIB_2__::func_27(&Local_112, 256))
					{
						func_36(&Local_112);
						func_38(&Local_112);
						if (!__LIB_0__::func_1(Global_1935630, 524288) || __LIB_5__::func_176(&Local_112, 524288))
						{
							__LIB_5__::func_227(Local_112);
							__LIB_4__::func_722(&Local_112, 7);
						}
						else
						{
							__LIB_4__::func_722(&Local_112, 6);
						}
					}
					else
					{
						__LIB_5__::func_227(Local_112);
						__LIB_4__::func_722(&Local_112, 5);
					}
				}
				break;
			case 5:
				__LIB_0__::func_11(&Local_112);
				__LIB_5__::func_526(&Local_112);
				if (__LIB_0__::func_265(&(Local_112.f_2884)) >= __LIB_4__::func_723(&Local_112))
				{
					func_36(&Local_112);
					func_38(&Local_112);
					__LIB_1__::func_148(&(Local_112.f_2884));
					if (!__LIB_5__::func_176(&Local_112, 524288))
					{
						__LIB_5__::func_227(Local_112);
						__LIB_4__::func_722(&Local_112, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_112, 6);
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75(&(Local_112.f_2906)))
				{
					__LIB_1__::func_283(&(Local_112.f_2906), 0);
				}
				if ((__LIB_0__::func_81(&(Local_112.f_428)) == 4 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_112.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_112.f_428.f_444))
				{
					__LIB_5__::func_227(Local_112);
					__LIB_4__::func_722(&Local_112, 7);
				}
				else if (__LIB_0__::func_265(&(Local_112.f_2906)) >= 5f)
				{
					__LIB_5__::func_227(Local_112);
					__LIB_4__::func_722(&Local_112, 7);
				}
				break;
			case 7:
				__LIB_0__::func_11(&Local_112);
				if (__LIB_5__::func_530(&Local_112))
				{
					__LIB_4__::func_722(&Local_112, 10);
				}
				break;
			case 10:
				if (func_3(&Local_112, 0))
				{
					__LIB_5__::func_410(&Local_112, 1);
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
	if (!__LIB_0__::func_0(iParam0) && !bParam1)
	{
		return false;
	}
	__LIB_5__::func_217(iParam0);
	__LIB_5__::func_205(iParam0);
	__LIB_11__::func_656(iParam0);
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
	__LIB_5__::func_609(iParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0, 0, 1);
	func_137(iParam0);
	__LIB_5__::func_609(iParam0, Local_27[0 /*10*/], "Horse_01^1", 0, 0, 1);
	__LIB_5__::func_609(iParam0, Local_27[1 /*10*/], "Horse_01^3", 0, 0, 1);
	__LIB_5__::func_609(iParam0, Local_27[2 /*10*/], "Horse_01^5", 0, 0, 1);
	__LIB_5__::func_609(iParam0, Local_27[3 /*10*/], "Horse_01^2", 0, 0, 1);
	__LIB_5__::func_609(iParam0, Local_27[4 /*10*/], "Horse_01^4", 0, 0, 1);
	if (!__LIB_1__::func_187(120) && !__LIB_1__::func_200(120))
	{
		__LIB_4__::func_753(&(iParam0->f_428), 10f);
		__LIB_4__::func_754(&(iParam0->f_428), 15f);
	}
	else
	{
		__LIB_4__::func_753(&(iParam0->f_428), 40f);
		__LIB_4__::func_754(&(iParam0->f_428), 50f);
	}
	return true;
}

void func_36(int iParam0)
{
	int iVar0;
	__LIB_6__::func_357();
	__LIB_2__::func_145(vLocal_78.x, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_19[2]))
	{
		ENTITY::SET_ENTITY_PROOFS(iLocal_19[2], 0, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(vLocal_78.x))
	{
		ENTITY::SET_ENTITY_PROOFS(vLocal_78.x, 0, false);
	}
	iVar0 = 0;
	while (iVar0 <= (Local_27 - 1))
	{
		switch (iVar0)
		{
			case 0:
				if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar0 /*10*/]))
				{
					__LIB_1__::func_463(Local_27[iVar0 /*10*/], 0, 1, 0, 0);
				}
				__LIB_11__::func_814(0, 43, 0);
				break;
			case 1:
				if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar0 /*10*/]))
				{
					__LIB_1__::func_463(Local_27[iVar0 /*10*/], 3, 1, 0, 0);
				}
				break;
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar0 /*10*/]))
				{
					__LIB_1__::func_463(Local_27[iVar0 /*10*/], 2, 1, 0, 0);
				}
				break;
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar0 /*10*/]))
				{
					__LIB_1__::func_463(Local_27[iVar0 /*10*/], 6, 1, 0, 0);
				}
				break;
			case 4:
				if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar0 /*10*/]))
				{
					__LIB_1__::func_463(Local_27[iVar0 /*10*/], 9, 1, 0, 0);
				}
				break;
		}
		iVar0++;
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

bool func_41(int iParam0)
{
	if (__LIB_5__::func_132(iParam0))
	{
		__LIB_19__::func_423(&(iParam0->f_958), __LIB_5__::func_135(iParam0), iParam0->f_958, 0);
	}
	if (__LIB_1__::func_205(PLAYER::PLAYER_PED_ID(), iParam0->f_422, 1, 0))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
		return true;
	}
	return false;
}

int func_43(int iParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	func_159(iParam0);
	return 0;
}

bool func_44(int iParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	if (__LIB_1__::func_205(PLAYER::PLAYER_PED_ID(), iLocal_98, 1, 0))
	{
		iLocal_16 = 1;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(vLocal_78.x) || !ENTITY::DOES_ENTITY_EXIST(iLocal_19[2])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_25)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_26)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_19[0]))
	{
		if (!__LIB_2__::func_27(iParam0, 268435456))
		{
			__LIB_5__::func_410(iParam0, 268435456);
		}
		if (__LIB_5__::func_132(iParam0))
		{
			__LIB_19__::func_423(&(iParam0->f_958), __LIB_5__::func_135(iParam0), iParam0->f_958, 0);
		}
		return false;
	}
	else if (iLocal_16 || func_160(&iLocal_18, 1500))
	{
		if (__LIB_2__::func_27(iParam0, 268435456))
		{
			__LIB_4__::func_727(iParam0, 268435456);
		}
		if (__LIB_5__::func_132(iParam0))
		{
			__LIB_19__::func_423(&(iParam0->f_958), __LIB_5__::func_135(iParam0), iParam0->f_958, 0);
		}
		__LIB_5__::func_419(&(iParam0->f_958), iParam0->f_958);
		return true;
	}
	return false;
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
		func_231(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_749(uParam0, 0f, 0f, 0f);
		func_233(uParam0);
		func_234(uParam0);
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
	if (!bLocal_15)
	{
		PED::_0xF008E0BA1FE1D644(1);
		bLocal_15 = true;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_422))
	{
		iParam0->f_422 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1358.635f, 2424.286f, 306.818f, 0f, 0f, 71f, 2f, 3.5f, 6f, "OD1_LOCKED_IN");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_97))
	{
		__LIB_3__::func_557(&iLocal_97, -1346.745f, 2416.628f, 306.5384f, 0f, 0f, -116f, 12f, 9f, 6f, "intro_od1_volume");
		__LIB_6__::func_158(1, 1, iLocal_97);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_98))
	{
		iLocal_98 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1359.34f, 2424.614f, 306.818f, 0f, 0f, 71f, 1.5f, 3.5f, 6f, "intro_od1_opening_door");
	}
	__LIB_5__::func_410(iParam0, 2048);
	__LIB_9__::func_75(iParam0);
	__LIB_8__::func_913(&(iParam0->f_428), 31881);
	STREAMING::REQUEST_MODEL(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), false);
	if (((((func_272(iParam0, &(iLocal_19[1]), 3, -1358.935f, 2427.214f, 306.9091f, 1) && func_272(iParam0, &(iLocal_19[3]), 6, -1360.131f, 2426.982f, 306.9091f, 1)) && func_272(iParam0, &(iLocal_19[4]), 9, -1357.891f, 2426.687f, 306.9091f, 1)) && func_273()) && func_274(iParam0)) && STREAMING::HAS_MODEL_LOADED(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT")))
	{
		uLocal_99 = __LIB_1__::func_391(iLocal_97, 0, 0, 0);
		uLocal_99 = uLocal_99;
		__LIB_1__::func_948(-2111960098, 0, 0f, 0, 0, 0f, 1, 0);
		__LIB_1__::func_948(-6656809, 0, 0f, 0, 0, 0f, 1, 0);
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
	return func_282(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

void func_137(int iParam0)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;
	__LIB_3__::func_618(-1358.935f, 2427.214f, 306.9091f, 20f, 1, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 <= (iLocal_19 - 1))
	{
		if (!PED::IS_PED_INJURED(iLocal_19[iVar0]))
		{
			switch (iVar0)
			{
				case 0:
					break;
				case 1:
					vVar2 = { -1358.935f, 2427.214f, 306.9091f };
					fVar1 = 244.093f;
					iVar5 = joaat("WEAPON_RIFLE_BOLTACTION_BILL");
					break;
				case 2:
					break;
				case 3:
					vVar2 = { -1360.131f, 2426.982f, 306.9091f };
					fVar1 = 256.6654f;
					iVar5 = joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH");
					break;
				case 4:
					vVar2 = { -1357.891f, 2426.687f, 306.9091f };
					fVar1 = 344.2751f;
					iVar5 = joaat("WEAPON_REPEATER_CARBINE");
					break;
			}
			switch (iVar0)
			{
				case 0:
					break;
				case 1:
				case 3:
				case 4:
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_19[iVar0], true, true);
					ENTITY::SET_ENTITY_COORDS(iLocal_19[iVar0], vVar2, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_19[iVar0], fVar1);
					func_286(iLocal_19[iVar0], iVar5, -1, 0, 0);
					__LIB_4__::func_787(iLocal_19[iVar0], 0, 1, 0);
					PED::_0x2208438012482A1A(iLocal_19[iVar0], false, false);
					func_288(iLocal_19[iVar0]);
					break;
				case 2:
					break;
			}
			__LIB_5__::func_609(iParam0, iLocal_19[iVar0], 0, 0, 0, 1);
		}
		iVar0++;
	}
}

void func_159(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!bLocal_14)
	{
		if (func_345())
		{
			if (!PED::IS_PED_INJURED(vLocal_78.x))
			{
				ENTITY::_SET_ENTITY_HEALTH(vLocal_78.x, 150, 0);
				ENTITY::SET_ENTITY_PROOFS(vLocal_78.x, 127, false);
				func_346(&vLocal_78);
				__LIB_5__::func_609(iParam0, vLocal_78.x, "Horse_01", 0, 0, 1);
				bLocal_14 = true;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_19[2]))
	{
		vVar0 = { -1369.2f, 2429.3f, 307.6f };
		if (func_272(iParam0, &(iLocal_19[2]), 2, vVar0, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_19[2], true, false), vVar0, true) > 100f)
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_19[2], vVar0, true, false, true, true);
			}
			__LIB_4__::func_787(iLocal_19[2], 0, 0, 0);
			func_288(iLocal_19[2]);
			__LIB_5__::func_609(iParam0, iLocal_19[2], 0, 0, 0, 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
		if (__LIB_0__::func_699(17) && !__LIB_1__::func_22(17))
		{
			iLocal_25 = __LIB_0__::func_271(17);
			__LIB_5__::func_609(iParam0, iLocal_25, 0, 0, 0, 1);
		}
		else if (func_272(iParam0, &iLocal_25, 17, -1370.2f, 2430.3f, 307.6f, 0))
		{
			__LIB_4__::func_787(iLocal_25, 0, 0, 0);
			func_288(iLocal_25);
			__LIB_5__::func_609(iParam0, iLocal_25, 0, 0, 0, 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_26))
	{
		if (__LIB_0__::func_699(7) && !__LIB_1__::func_22(7))
		{
			iLocal_26 = __LIB_0__::func_271(7);
			__LIB_5__::func_609(iParam0, iLocal_26, 0, 0, 0, 1);
		}
		else if (func_272(iParam0, &iLocal_26, 7, -1369.133f, 2428.851f, 306.8244f, 0))
		{
			__LIB_4__::func_787(iLocal_26, 0, 0, 0);
			func_288(iLocal_26);
			__LIB_5__::func_609(iParam0, iLocal_26, 0, 0, 0, 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_19[0]))
	{
		vVar3 = { -1368.2f, 2429.3f, 307.6f };
		if (func_272(iParam0, &(iLocal_19[0]), 0, vVar3, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_19[0], true, false), vVar3, true) > 100f)
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_19[0], vVar3, true, false, true, true);
			}
			__LIB_4__::func_787(iLocal_19[0], 0, 0, 0);
			func_288(iLocal_19[0]);
			__LIB_5__::func_609(iParam0, iLocal_19[0], 0, 0, 0, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(vLocal_78.x))
	{
		vLocal_78.f_2 = { ENTITY::GET_ENTITY_COORDS(vLocal_78.x, true, false) };
	}
}

int func_160(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - *iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_231(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_425();
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

void func_233(var uParam0)
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
			func_436(iVar1, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_436(iVar3, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_234(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_760(uParam0) };
			func_436(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_270(var uParam0)
{
	__LIB_3__::func_618(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 10000f, 1, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(vLocal_78.x))
	{
		if (!PED::IS_PED_INJURED(vLocal_78.x))
		{
		}
	}
}

bool func_272(int iParam0, int iParam1, int iParam2, vector3 vParam3, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (func_282(iParam0, iParam2, iParam1, 0, bParam6, vParam3.x, vParam3.y, vParam3.z, 0, 0, 0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_273()
{
	int iVar0;
	STREAMING::REQUEST_MODEL(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), false);
	if (iLocal_17 < Local_27)
	{
		iVar0 = iLocal_17;
		if (STREAMING::HAS_MODEL_LOADED(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT")))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_27[iVar0 /*10*/]))
			{
				switch (iVar0)
				{
					case 0:
						Local_27[iVar0 /*10*/].f_2 = { -1342.912f, 2397.188f, 306.86f };
						Local_27[iVar0 /*10*/].f_5 = 67.9362f;
						if (func_480(0, &(Local_27[iVar0 /*10*/]), Local_27[iVar0 /*10*/].f_2, Local_27[iVar0 /*10*/].f_5, 1))
						{
							__LIB_2__::func_915(Local_27[iVar0 /*10*/], joaat("WORLD_ANIMAL_HORSE_GRAZING"), Local_27[iVar0 /*10*/].f_2, Local_27[iVar0 /*10*/].f_5, 0, 0, 1, 0, -1082130432 /* Float: -1f */);
							iLocal_17++;
						}
						else
						{
							return false;
						}
						break;
					case 1:
						Local_27[iVar0 /*10*/].f_2 = { -1341.653f, 2400.151f, 305.9834f };
						Local_27[iVar0 /*10*/].f_5 = 72.9207f;
						if (func_480(3, &(Local_27[iVar0 /*10*/]), Local_27[iVar0 /*10*/].f_2, Local_27[iVar0 /*10*/].f_5, 1))
						{
							__LIB_2__::func_915(Local_27[iVar0 /*10*/], joaat("WORLD_ANIMAL_HORSE_GRAZING"), Local_27[iVar0 /*10*/].f_2, Local_27[iVar0 /*10*/].f_5, 0, 0, 1, 0, -1082130432 /* Float: -1f */);
							iLocal_17++;
						}
						else
						{
							return false;
						}
						break;
					case 2:
						Local_27[iVar0 /*10*/].f_2 = { -1339.752f, 2403.761f, 305.9834f };
						Local_27[iVar0 /*10*/].f_5 = 56.7724f;
						if (func_480(2, &(Local_27[iVar0 /*10*/]), Local_27[iVar0 /*10*/].f_2, Local_27[iVar0 /*10*/].f_5, 1))
						{
							__LIB_2__::func_915(Local_27[iVar0 /*10*/], joaat("WORLD_ANIMAL_HORSE_GRAZING"), Local_27[iVar0 /*10*/].f_2, Local_27[iVar0 /*10*/].f_5, 0, 0, 1, 0, -1082130432 /* Float: -1f */);
							iLocal_17++;
						}
						else
						{
							return false;
						}
						break;
					case 3:
						Local_27[iVar0 /*10*/].f_2 = { -1334.789f, 2397.888f, 306.0885f };
						Local_27[iVar0 /*10*/].f_5 = 244.776f;
						if (func_480(6, &(Local_27[iVar0 /*10*/]), Local_27[iVar0 /*10*/].f_2, Local_27[iVar0 /*10*/].f_5, 1))
						{
							__LIB_2__::func_915(Local_27[iVar0 /*10*/], joaat("WORLD_ANIMAL_HORSE_GRAZING"), Local_27[iVar0 /*10*/].f_2, Local_27[iVar0 /*10*/].f_5, 0, 0, 1, 0, -1082130432 /* Float: -1f */);
							iLocal_17++;
						}
						else
						{
							return false;
						}
						break;
					case 4:
						Local_27[iVar0 /*10*/].f_2 = { -1339.546f, 2399.89f, 306.86f };
						Local_27[iVar0 /*10*/].f_5 = 34.6f;
						if (func_480(9, &(Local_27[iVar0 /*10*/]), Local_27[iVar0 /*10*/].f_2, Local_27[iVar0 /*10*/].f_5, 1))
						{
							__LIB_2__::func_915(Local_27[iVar0 /*10*/], joaat("WORLD_ANIMAL_HORSE_GRAZING"), Local_27[iVar0 /*10*/].f_2, Local_27[iVar0 /*10*/].f_5, 0, 0, 1, 0, -1082130432 /* Float: -1f */);
							iLocal_17++;
						}
						else
						{
							return false;
						}
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_27[iVar0 /*10*/]))
				{
					if (!PED::IS_PED_INJURED(Local_27[iVar0 /*10*/]))
					{
						func_346(&(Local_27[iVar0 /*10*/]));
					}
				}
			}
		}
	}
	if (iLocal_17 < Local_27)
	{
		return false;
	}
	return true;
}

bool func_274(int iParam0)
{
	int iVar0;
	STREAMING::REQUEST_MODEL(joaat("P_BOTTLEJD01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CHAIR05X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CIGARETTE01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CIGARETTE_CS01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_LOGHALF02X"), false);
	STREAMING::REQUEST_MODEL(WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_REPEATER_CARBINE")), false);
	STREAMING::REQUEST_MODEL(WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_RIFLE_BOLTACTION")), false);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_88))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_BOTTLEJD01X")))
		{
			iLocal_88 = OBJECT::CREATE_OBJECT(joaat("P_BOTTLEJD01X"), -1359.6f, 2425f, 305.6f, true, true, false, false, true);
			__LIB_5__::func_532(iParam0, iLocal_88, "p_bottleJD01x", 0, 0, 1, 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_89))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_CHAIR05X")))
		{
			iLocal_89 = OBJECT::CREATE_OBJECT(joaat("P_CHAIR05X"), -1359.6f, 2425f, 305.6f, true, true, false, false, true);
			__LIB_5__::func_532(iParam0, iLocal_89, "p_chair05x^2", 0, 0, 1, 0);
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_90 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_90[iVar0]))
		{
			switch (iVar0)
			{
				case 0:
					if (STREAMING::HAS_MODEL_LOADED(joaat("P_CIGARETTE01X")))
					{
						iLocal_90[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_CIGARETTE01X"), -1359.6f, 2425f, 305.6f, true, true, false, false, true);
						__LIB_5__::func_532(iParam0, iLocal_90[iVar0], "p_cigarette01x", 0, 0, 1, 0);
					}
					break;
				case 1:
					if (STREAMING::HAS_MODEL_LOADED(joaat("P_CIGARETTE01X")))
					{
						iLocal_90[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_CIGARETTE01X"), -1359.6f, 2425f, 305.6f, true, true, false, false, true);
						__LIB_5__::func_532(iParam0, iLocal_90[iVar0], "p_cigarette01x^1", 0, 0, 1, 0);
					}
					break;
				case 2:
					if (STREAMING::HAS_MODEL_LOADED(joaat("P_CIGARETTE_CS01X")))
					{
						iLocal_90[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_CIGARETTE_CS01X"), -1359.6f, 2425f, 305.6f, true, true, false, false, true);
						__LIB_5__::func_532(iParam0, iLocal_90[iVar0], "p_cigarette_cs01x", 0, 0, 1, 0);
					}
					break;
			}
		}
		iVar0++;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_94))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_LOGHALF02X")))
		{
			iLocal_94 = OBJECT::CREATE_OBJECT(joaat("P_LOGHALF02X"), -1359.6f, 2425f, 305.6f, true, true, false, false, true);
			__LIB_5__::func_532(iParam0, iLocal_94, "p_logHalf02x", 0, 0, 1, 0);
		}
	}
	if (STREAMING::HAS_MODEL_LOADED(WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_REPEATER_CARBINE"))))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_96))
		{
			iLocal_96 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_REPEATER_CARBINE"), 10, -1359.6f, 2425f, 305.6f, false, 1f);
			__LIB_5__::func_532(iParam0, iLocal_96, "w_repeater_carbine01", 0, 0, 1, 0);
		}
	}
	if (STREAMING::HAS_MODEL_LOADED(WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_RIFLE_BOLTACTION"))))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_95))
		{
			iLocal_95 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_RIFLE_BOLTACTION"), 10, -1359.6f, 2425f, 305.6f, false, 1f);
			__LIB_5__::func_532(iParam0, iLocal_95, "w_rifle_boltaction01", 0, 0, 1, 0);
		}
	}
	if (((((((ENTITY::DOES_ENTITY_EXIST(iLocal_88) && ENTITY::DOES_ENTITY_EXIST(iLocal_89)) && ENTITY::DOES_ENTITY_EXIST(iLocal_90[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_90[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_90[2])) && ENTITY::DOES_ENTITY_EXIST(iLocal_94)) && ENTITY::DOES_ENTITY_EXIST(iLocal_96)) && ENTITY::DOES_ENTITY_EXIST(iLocal_95))
	{
		return true;
	}
	return false;
}

bool func_282(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
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
	*iParam2 = func_510(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
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
		__LIB_1__::func_296(iParam1, 0, 0, 1);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

void func_286(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0, true))
	{
		if (iParam2 == -1)
		{
			if (__LIB_0__::func_216(iParam1))
			{
				WEAPON::SET_PED_INFINITE_AMMO(iParam0, true, iParam1);
			}
		}
		else
		{
			WEAPON::SET_PED_AMMO(iParam0, iParam1, iParam2);
		}
		if (bParam3)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, bParam4, 0, false, false);
		}
	}
	else if (__LIB_0__::func_214(iParam1))
	{
		if (bParam4)
		{
			iVar0 |= 1;
		}
		if (!bParam4)
		{
			iVar0 |= 4;
		}
		__LIB_2__::func_272(iParam0, iParam1, iParam2, iVar0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	}
	else if (iParam2 == -1)
	{
		if (bParam3)
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iParam1, 10, bParam4, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		}
		else
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iParam1, 10, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		}
		if (__LIB_0__::func_216(iParam1))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, true, iParam1);
		}
	}
	else if (bParam3)
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iParam1, iParam2, bParam4, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	}
	else
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iParam1, iParam2, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	}
}

void func_288(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 233, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, false, 0f);
			PED::SET_PED_CONFIG_FLAG(iParam0, 286, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			PED::SET_PED_CAN_RAGDOLL(iParam0, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 128);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 35, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 24, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 77, true);
		}
	}
}

bool func_345()
{
	Local_101 = 1;
	Local_101.f_1 = 1;
	Local_101.f_2 = 0;
	Local_101.f_6 = { -1361.905f, 2445.691f, 307.3077f };
	Local_101.f_9 = 239.5503f;
	if (!ENTITY::DOES_ENTITY_EXIST(vLocal_78.x))
	{
		vLocal_78.x = __LIB_9__::func_840(&uLocal_100, &Local_101);
		if (ENTITY::DOES_ENTITY_EXIST(vLocal_78.x))
		{
			if (!PED::IS_PED_INJURED(vLocal_78.x))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1346.97f, 2416.1f, 300.2458f, ENTITY::GET_ENTITY_COORDS(vLocal_78.x, true, false), true) > 100f)
				{
					ENTITY::SET_ENTITY_COORDS(vLocal_78.x, Local_101.f_6, true, false, true, true);
				}
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_346(int iParam0)
{
	if (iParam0->f_6 != -1)
	{
		ENTITY::SET_ENTITY_MAX_HEALTH(*iParam0, iParam0->f_6);
		ENTITY::_SET_ENTITY_HEALTH(*iParam0, iParam0->f_6, 0);
	}
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, false, 0f);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 263, true);
	PED::SET_PED_KEEP_TASK(*iParam0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 186, false);
	POPULATION::_0xF74E134F40192884(*iParam0, 2);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam0, 48, true);
	PED::_0x2EB75FB86C41F026(*iParam0, 3, 0);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 284, true);
	PED::SET_PED_NAME_DEBUG(*iParam0, &(iParam0->f_7));
	iParam0->f_9 = 1;
}

void func_425()
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
	iVar0 = func_613(6291456, 0);
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

void func_436(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_436(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_436(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_480(int iParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	*uParam1 = func_653(iParam0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
		{
			__LIB_3__::func_618(vParam2, 5f, 1, 0, 0, 0, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam1, true, true);
			func_436(*uParam1, vParam2, fParam5, 2, 1073741824 /* Float: 2f */);
			if (bParam6)
			{
				TASK::TASK_STAND_STILL(*uParam1, -1);
			}
			return true;
		}
	}
	return false;
}

int func_510(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_436(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

int func_613(int iParam0, int iParam1)
{
	var uVar0;
	return func_773(&uVar0, iParam0, iParam1);
}

int func_653(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_797(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

int func_773(var uParam0, int iParam1, int iParam2)
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
		return func_773(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_797(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam1))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_177(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !__LIB_0__::func_272(iVar0, 0)) || (bParam3 && !__LIB_0__::func_212(iParam1)))
	{
		if (bParam2)
		{
			if (__LIB_0__::func_725(iParam1, 1) != 0)
			{
				iVar0 = func_928(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_272(iVar0, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		__LIB_0__::func_834(iParam1, iVar0);
		__LIB_1__::func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

int func_928(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = __LIB_1__::func_179(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x31C70A716CAE1FEE(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			else
			{
				if (!__LIB_0__::func_851(iParam0) && __LIB_0__::func_852(iParam0, &uVar4))
				{
					PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_725(iParam0, 1), &uVar4);
				}
				__LIB_0__::func_213(iParam0, 256, 0);
				__LIB_0__::func_234(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return __LIB_0__::func_749();
				}
				if (bParam2 && !__LIB_0__::func_86(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!__LIB_1__::func_626(iParam0, vVar0, fParam6, iParam10))
				{
					return __LIB_0__::func_749();
				}
				if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_0x31C70A716CAE1FEE(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					__LIB_0__::func_234(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/].f_124))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (bParam7)
			{
				if (!__LIB_1__::func_411(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return __LIB_0__::func_749();
				}
			}
			if ((bParam2 && !__LIB_0__::func_86(vVar0)) && !__LIB_0__::func_175(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_436(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (__LIB_0__::func_287(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				__LIB_0__::func_288(iParam0, 39, 1);
				__LIB_0__::func_213(iParam0, 8, 1);
				__LIB_0__::func_213(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			__LIB_1__::func_547(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = __LIB_0__::func_853(iParam0, __LIB_0__::func_181());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(__LIB_0__::func_725(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			__LIB_0__::func_290(iParam0, 40, 0);
			__LIB_0__::func_213(iParam0, 32, 0);
			__LIB_0__::func_234(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return __LIB_0__::func_749();
}

