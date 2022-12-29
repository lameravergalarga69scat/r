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
	struct<4> Local_14 = { 0, 0, 0, 4 } ;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22[2] = { 0, 0 };
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	bool bLocal_33 = false;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<2907> Local_43 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
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
		if (__LIB_5__::func_203(Local_43))
		{
			__LIB_0__::func_8(&Global_1935630, 32768);
		}
		func_3(&Local_43, 1);
	}
	__LIB_5__::func_610(&uScriptParam_0, &Local_43);
	while (!__LIB_2__::func_27(&Local_43, 1))
	{
		if (__LIB_4__::func_721(&Local_43) != 10)
		{
			if ((__LIB_4__::func_721(&Local_43) == 3 || __LIB_4__::func_721(&Local_43) == 4) && (!__LIB_5__::func_132(&Local_43) || __LIB_0__::func_78(&(Local_43.f_958)) > 0))
			{
				__LIB_7__::func_446(&Local_43, __LIB_2__::func_27(&Local_43, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && __LIB_5__::func_204(&Local_43)) && __LIB_2__::func_27(&Local_43, 65536))
			{
				__LIB_7__::func_446(&Local_43, 1);
			}
		}
		if (__LIB_4__::func_721(&Local_43) >= 3 && __LIB_4__::func_721(&Local_43) <= 7)
		{
			__LIB_5__::func_525(&Local_43);
		}
		if (((((__LIB_4__::func_721(&Local_43) >= 5 && __LIB_4__::func_721(&Local_43) <= 7) && !__LIB_2__::func_27(&Local_43, 4096)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_43.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_43.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_43.f_428.f_444))
		{
			MemCopy(&Var1, {__LIB_4__::func_681(Local_43)}, 4);
			func_13(Var1, &(Local_43.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (__LIB_4__::func_721(&Local_43))
		{
			case 8:
				if (__LIB_5__::func_607(&Local_43))
				{
					__LIB_5__::func_536(&Local_43);
					__LIB_0__::func_0(&Local_43);
					__LIB_4__::func_722(&Local_43, 0);
				}
				else if (!__LIB_5__::func_204(&Local_43))
				{
					if (!__LIB_0__::func_75(&(Local_43.f_2899)))
					{
						__LIB_1__::func_283(&(Local_43.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_43))
					{
						if (__LIB_0__::func_264(&(Local_43.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_43.f_2889, 2097152);
							__LIB_5__::func_174(&Local_43);
							__LIB_5__::func_608(&Local_43);
							__LIB_4__::func_722(&Local_43, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_43, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_43, 536870912);
						}
						__LIB_1__::func_148(&(Local_43.f_2899));
					}
				}
				break;
			case 0:
				if (__LIB_5__::func_204(&Local_43))
				{
					__LIB_0__::func_0(&Local_43);
				}
				if (!__LIB_5__::func_204(&Local_43) || __LIB_2__::func_27(&Local_43, 65536))
				{
					if (func_27(&Local_43))
					{
						__LIB_4__::func_722(&Local_43, 1);
					}
				}
				break;
			case 1:
				if (__LIB_5__::func_204(&Local_43))
				{
					__LIB_0__::func_0(&Local_43);
				}
				if (func_28(&Local_43))
				{
					__LIB_4__::func_722(&Local_43, 2);
				}
				break;
			case 2:
				if (__LIB_5__::func_204(&Local_43))
				{
					__LIB_0__::func_0(&Local_43);
				}
				if (func_29(&Local_43))
				{
					if (!__LIB_5__::func_132(&Local_43) || __LIB_5__::func_204(&Local_43))
					{
						if (!__LIB_0__::func_79(Local_43.f_2889))
						{
							Local_43.f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(Local_43));
						}
						__LIB_1__::func_109(Local_43.f_2889, 4);
						__LIB_5__::func_410(&Local_43, 8192);
					}
					if (__LIB_5__::func_204(&Local_43))
					{
						__LIB_5__::func_175(&Local_43);
						__LIB_4__::func_722(&Local_43, 9);
					}
					else
					{
						__LIB_4__::func_722(&Local_43, 3);
					}
				}
				break;
			case 9:
				if (__LIB_0__::func_0(&Local_43))
				{
					__LIB_0__::func_11(&Local_43);
					__LIB_5__::func_536(&Local_43);
					__LIB_11__::func_113(&Local_43);
					if (!__LIB_2__::func_27(&Local_43, 256))
					{
						__LIB_0__::func_11(&Local_43);
						__LIB_5__::func_227(Local_43);
						func_38(&Local_43);
						__LIB_4__::func_722(&Local_43, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_43, 5);
					}
				}
				break;
			case 3:
				if (!__LIB_2__::func_27(&Local_43, 8192))
				{
					if (__LIB_0__::func_78(&(Local_43.f_958)) == 3)
					{
						__LIB_1__::func_109(Local_43.f_2889, 4);
						__LIB_5__::func_410(&Local_43, 8192);
					}
				}
				func_39(&Local_43);
				if (__LIB_3__::func_919(__LIB_0__::func_80(Global_1835011[Local_43 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&Local_43) || __LIB_5__::func_176(&Local_43, 32768))
				{
					__LIB_0__::func_11(&Local_43);
					__LIB_5__::func_536(&Local_43);
					__LIB_4__::func_722(&Local_43, 4);
					__LIB_1__::func_283(&(Local_43.f_2890), 0);
				}
				else if (__LIB_5__::func_204(&Local_43) && !__LIB_5__::func_203(Local_43))
				{
					if (!__LIB_0__::func_75(&(Local_43.f_2899)))
					{
						__LIB_1__::func_283(&(Local_43.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_43))
					{
						if (__LIB_0__::func_264(&(Local_43.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_43.f_2889, 2097152);
							__LIB_5__::func_174(&Local_43);
							__LIB_5__::func_608(&Local_43);
							__LIB_4__::func_722(&Local_43, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_43, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_43, 536870912);
						}
						__LIB_1__::func_148(&(Local_43.f_2899));
					}
				}
				break;
			case 4:
				func_43(&Local_43);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (__LIB_18__::func_327(&Local_43) || (__LIB_5__::func_176(&Local_43, 32768) && !__LIB_2__::func_27(&Local_43, 268435456)))
				{
					__LIB_11__::func_113(&Local_43);
					if (!__LIB_2__::func_27(&Local_43, 256))
					{
						__LIB_0__::func_11(&Local_43);
						func_38(&Local_43);
						if (!__LIB_0__::func_1(Global_1935630, 524288) || __LIB_5__::func_176(&Local_43, 524288))
						{
							__LIB_5__::func_227(Local_43);
							__LIB_4__::func_722(&Local_43, 7);
						}
						else
						{
							__LIB_4__::func_722(&Local_43, 6);
						}
					}
					else
					{
						__LIB_5__::func_227(Local_43);
						__LIB_4__::func_722(&Local_43, 5);
					}
				}
				break;
			case 5:
				__LIB_0__::func_11(&Local_43);
				__LIB_5__::func_526(&Local_43);
				if (__LIB_0__::func_265(&(Local_43.f_2884)) >= __LIB_4__::func_723(&Local_43))
				{
					__LIB_0__::func_11(&Local_43);
					func_38(&Local_43);
					__LIB_1__::func_148(&(Local_43.f_2884));
					if (!__LIB_5__::func_176(&Local_43, 524288))
					{
						__LIB_5__::func_227(Local_43);
						__LIB_4__::func_722(&Local_43, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_43, 6);
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75(&(Local_43.f_2906)))
				{
					__LIB_1__::func_283(&(Local_43.f_2906), 0);
				}
				if ((__LIB_0__::func_81(&(Local_43.f_428)) == 4 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_43.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_43.f_428.f_444))
				{
					__LIB_5__::func_227(Local_43);
					__LIB_4__::func_722(&Local_43, 7);
				}
				else if (__LIB_0__::func_265(&(Local_43.f_2906)) >= 5f)
				{
					__LIB_5__::func_227(Local_43);
					__LIB_4__::func_722(&Local_43, 7);
				}
				break;
			case 7:
				func_51(&Local_43);
				if (__LIB_5__::func_530(&Local_43))
				{
					__LIB_4__::func_722(&Local_43, 10);
				}
				break;
			case 10:
				if (func_3(&Local_43, 0))
				{
					__LIB_5__::func_410(&Local_43, 1);
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
	char cVar0[64];
	char cVar8[64];
	struct<4> Var16;
	int iVar28;
	__LIB_8__::func_913(&(iParam0->f_428), 17628);
	uLocal_22[0] = __LIB_9__::func_216(iParam0);
	func_141(uLocal_22[0], func_140(0, 0), 2, 1073741824 /* Float: 2f */);
	TASK::TASK_STAND_STILL(uLocal_22[0], -1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_22[0], true);
	__LIB_2__::func_231(uLocal_22[0], joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	__LIB_2__::func_231(uLocal_22[0], joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	func_141(uLocal_22[1], func_140(0, 1), 2, 1073741824 /* Float: 2f */);
	TASK::TASK_STAND_STILL(uLocal_22[1], -1);
	if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_22[1], joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_LENNY"), 0, false))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(uLocal_22[1], joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_LENNY"), true, -142743235);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_22[1], true);
	__LIB_1__::func_948(286519629, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(556568958, 0, 0, 0, 1, 0, 0, 0);
	__LIB_5__::func_609(iParam0, Global_35, 0, 0, 0, 1);
	__LIB_5__::func_609(iParam0, uLocal_22[0], 0, 0, 0, 1);
	__LIB_5__::func_609(iParam0, uLocal_22[1], 0, 0, 0, 1);
	__LIB_0__::func_928(&(iParam0->f_958.f_1771), uLocal_22[0], "DUTCH", 0);
	__LIB_0__::func_928(&(iParam0->f_958.f_1771), uLocal_22[1], "LENNY", 0);
	__LIB_0__::func_566(iLocal_27, 0);
	func_146(iParam0);
	__LIB_5__::func_609(iParam0, Local_14.f_3[0], "A_M_M_MiddleSDTownfolk_01^1", 0, 0, 1);
	__LIB_5__::func_609(iParam0, Local_14.f_3[1], "A_M_M_MiddleSDTownfolk_01^2", 0, 0, 1);
	__LIB_5__::func_609(iParam0, Local_14.f_3[2], "A_M_M_MiddleSDTownfolk_01", 0, 0, 1);
	__LIB_5__::func_609(iParam0, Local_14.f_3[3], "S_M_M_TrainStationWorker_01", 0, 0, 1);
	DECORATOR::DECOR_SET_INT(Local_14.f_3[0], __LIB_5__::func_393(), -1954804603);
	DECORATOR::DECOR_SET_INT(Local_14.f_3[1], __LIB_5__::func_393(), -795699535);
	DECORATOR::DECOR_SET_INT(Local_14.f_3[2], __LIB_5__::func_393(), -623269057);
	DECORATOR::DECOR_SET_INT(Local_14.f_3[3], __LIB_5__::func_393(), joaat("CASHIER"));
	__LIB_5__::func_183(iParam0, Local_14.f_3[0], 0);
	__LIB_5__::func_183(iParam0, Local_14.f_3[1], 0);
	__LIB_5__::func_183(iParam0, Local_14.f_3[2], 0);
	__LIB_5__::func_183(iParam0, Local_14.f_3[3], 0);
	__LIB_4__::func_778(iParam0, 33554432);
	__LIB_5__::func_410(iParam0, 8);
	__LIB_9__::func_73(iParam0, 100f);
	__LIB_9__::func_74(iParam0, 150f);
	__LIB_9__::func_965(iParam0, func_151(), 0);
	__LIB_9__::func_965(iParam0, func_153(), 0);
	__LIB_9__::func_965(iParam0, func_154(), 0);
	StringCopy(&cVar0, func_155(), 64);
	StringCopy(&cVar8, func_153(), 64);
	__LIB_9__::func_964(iParam0, cVar0);
	__LIB_9__::func_109(iParam0, cVar8);
	__LIB_11__::func_327(iParam0, &iVar28);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40))
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar28) && ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iVar28, "P_CRATE15X", &Var16, false, 0, 2)) && !__LIB_0__::func_86(Var16))
		{
			iLocal_40 = OBJECT::CREATE_OBJECT(joaat("P_CRATE15X"), Var16, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_40, Var16.f_3, 2, true);
		}
		else
		{
			iLocal_40 = OBJECT::CREATE_OBJECT(joaat("P_CRATE15X"), 2720.674f, -1354.046f, 45.7f, true, true, false, false, true);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_40, 0f, 0f, 0.870394f, -0.492355f);
		}
		__LIB_5__::func_532(iParam0, iLocal_40, "P_CRATE15X", 0, 0, 1, 0);
		__LIB_5__::func_183(iParam0, iLocal_40, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_41))
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar28) && ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iVar28, "P_CRATECONF01X", &Var16, false, 0, 2)) && !__LIB_0__::func_86(Var16))
		{
			iLocal_41 = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), Var16, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_41, Var16.f_3, 2, true);
		}
		else
		{
			iLocal_41 = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 2720.674f, -1354.046f, 45.498f, true, true, false, false, true);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_41, 0f, 0f, 0.88879f, -0.458315f);
		}
		__LIB_5__::func_532(iParam0, iLocal_41, "P_CRATECONF01X", 0, 0, 1, 0);
		__LIB_5__::func_183(iParam0, iLocal_41, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_42))
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar28) && ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iVar28, "P_CRATEBRAND03X", &Var16, false, 0, 2)) && !__LIB_0__::func_86(Var16))
		{
			iLocal_42 = OBJECT::CREATE_OBJECT(joaat("P_CRATEBRAND03X"), Var16, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_42, Var16.f_3, 2, true);
		}
		else
		{
			iLocal_42 = OBJECT::CREATE_OBJECT(joaat("P_CRATEBRAND03X"), 2720.177f, -1353.141f, 45.495f, true, true, false, false, true);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_42, 0.000439f, 0.002099f, -0.204527f, 0.978859f);
		}
		__LIB_5__::func_532(iParam0, iLocal_42, "P_CRATEBRAND03X", 0, 0, 1, 0);
		__LIB_5__::func_183(iParam0, iLocal_42, 0);
	}
	if (__LIB_0__::func_78(&(iParam0->f_958)) >= 3)
	{
		if (__LIB_2__::func_27(iParam0, 128))
		{
			__LIB_4__::func_727(iParam0, 128);
		}
	}
	else if (!__LIB_2__::func_27(iParam0, 128))
	{
		__LIB_5__::func_410(iParam0, 128);
	}
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

void func_39(int iParam0)
{
	vector3 vVar0[24];
	if (__LIB_0__::func_78(&(iParam0->f_958)) >= 3)
	{
		if (__LIB_2__::func_27(iParam0, 128))
		{
			__LIB_4__::func_727(iParam0, 128);
		}
	}
	else if (!__LIB_2__::func_27(iParam0, 128))
	{
		__LIB_5__::func_410(iParam0, 128);
	}
	if (!bLocal_38)
	{
		if (__LIB_0__::func_48(Global_35, uLocal_22[0], 40f, 1))
		{
			StringCopy(&cVar0, "MOB3_PREBANT", 24);
			if (__LIB_1__::func_104(&(iParam0->f_958.f_1771), cVar0, 0, -1, 0, 0))
			{
				bLocal_38 = true;
			}
		}
	}
	else if ((!bLocal_39 && __LIB_5__::func_259("MOB3_PREBANT")) && __LIB_0__::func_48(Global_35, uLocal_22[0], 15f, 1))
	{
		__LIB_6__::func_900("MOB3_PREBANT", 1, 0);
		bLocal_39 = true;
	}
}

bool func_41(int iParam0)
{
	char cVar0[64];
	char cVar8[64];
	if (__LIB_0__::func_393(Global_35, iLocal_29, 0, 1))
	{
		StringCopy(&cVar8, func_151(), 64);
		__LIB_9__::func_964(iParam0, cVar8);
		__LIB_10__::func_938(iParam0, &cVar8);
		__LIB_4__::func_755(&(iParam0->f_958), 262144);
		__LIB_4__::func_757(&(iParam0->f_958), 131072);
		__LIB_4__::func_727(iParam0, 64);
		bLocal_36 = true;
		return true;
	}
	if (__LIB_0__::func_393(Global_35, iLocal_30, 0, 1) || __LIB_0__::func_393(Global_35, iLocal_31, 0, 1))
	{
		if (__LIB_0__::func_393(Global_35, iLocal_30, 0, 1))
		{
			StringCopy(&cVar8, func_151(), 64);
		}
		else if (__LIB_0__::func_393(Global_35, iLocal_31, 0, 1))
		{
			StringCopy(&cVar8, func_155(), 64);
		}
		__LIB_9__::func_964(iParam0, cVar8);
		__LIB_10__::func_938(iParam0, &cVar8);
		__LIB_4__::func_755(&(iParam0->f_958), 262144);
		__LIB_4__::func_757(&(iParam0->f_958), 131072);
		__LIB_4__::func_727(iParam0, 64);
		bLocal_36 = true;
		return true;
	}
	if (__LIB_5__::func_132(iParam0))
	{
		__LIB_11__::func_355(&(iParam0->f_958), __LIB_5__::func_135(iParam0), iParam0->f_958, 0);
		if (__LIB_5__::func_397(iParam0))
		{
			if (__LIB_0__::func_393(Global_35, iLocal_28, 0, 1))
			{
				StringCopy(&cVar0, func_154(), 64);
			}
			else
			{
				StringCopy(&cVar0, func_153(), 64);
			}
			__LIB_10__::func_938(iParam0, &cVar0);
			return true;
		}
	}
	if (__LIB_2__::func_27(iParam0, 64))
	{
		return false;
	}
	if (((__LIB_11__::func_870(iParam0) && !PED::IS_PED_FALLING(Global_35)) && !PED::_IS_PED_FALLING_2(Global_35)) && !PED::IS_PED_RAGDOLL(Global_35))
	{
		if (__LIB_0__::func_393(Global_35, iLocal_28, 0, 1))
		{
			StringCopy(&cVar0, func_154(), 64);
		}
		else
		{
			StringCopy(&cVar0, func_153(), 64);
		}
		__LIB_10__::func_938(iParam0, &cVar0);
		return true;
	}
	return false;
}

void func_43(int iParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	if (!bLocal_34)
	{
		__LIB_5__::func_511(1);
		bLocal_34 = true;
	}
}

void func_51(int iParam0)
{
	if (__LIB_0__::func_91() && bLocal_36)
	{
		if (!bLocal_37)
		{
			ENTITY::CREATE_MODEL_HIDE(2718.728f, -1352.078f, 45.527f, 1f, joaat("P_CRATE08X"), true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_40, Vector(45.7f, -1354.046f, 2720.674f) - Vector(0f, -1.387f, 1.339f), false, true, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_40, 0f, 0f, 0.870394f, -0.492355f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_41, Vector(45.498f, -1354.046f, 2720.674f) - Vector(0f, -1.387f, 1.339f), false, true, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_41, 0f, 0f, 0.88879f, -0.458315f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_42))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_42, Vector(45.495f, -1353.141f, 2720.177f) - Vector(0f, -1.387f, 1.339f), false, true, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_42, 0.000439f, 0.002099f, -0.204527f, 0.978859f);
			}
			bLocal_37 = true;
		}
	}
}

bool func_53(int iParam0)
{
	__LIB_0__::func_484(&uLocal_32, iLocal_25, 0);
	if (!__LIB_5__::func_397(iParam0))
	{
		__LIB_0__::func_490(&(Local_14.f_3[3]), 0);
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
		func_253(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_749(uParam0, 0f, 0f, 0f);
		func_255(uParam0);
		func_256(uParam0);
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
	bVar0 = true;
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_25))
	{
		iLocal_25 = VOLUME::_CREATE_VOLUME_BOX(2737.573f, -1375.112f, 47.00983f, 0f, 0f, -64.82526f, 39.94735f, 22.67228f, 3.992332f);
		uLocal_32 = __LIB_1__::func_391(iLocal_25, 30f, 0, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_28))
	{
		iLocal_28 = VOLUME::_CREATE_VOLUME_BOX(2716.632f, -1346.616f, 46.7829f, 0f, 0f, 45f, 6.839418f, 9.471648f, 3.659361f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_29))
	{
		iLocal_29 = VOLUME::_CREATE_VOLUME_BOX(2721.316f, -1346.702f, 46.57302f, 0f, 0f, 45f, 0.681471f, 2.580389f, 2.316361f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_30))
	{
		iLocal_30 = VOLUME::_CREATE_VOLUME_BOX(2725.38f, -1355.849f, 52.65077f, 0f, 0f, 45f, 7.251991f, 12.81482f, 1.959805f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_31))
	{
		iLocal_31 = VOLUME::_CREATE_VOLUME_BOX(2718.563f, -1349.032f, 52.65077f, 0f, 0f, 45.00001f, 7.251991f, 6.533468f, 1.959805f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_27))
	{
		iLocal_27 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Station Clear");
		VOLUME::_0xBCE668AAF83608BE(iLocal_27, 2733.284f, -1398.097f, 45.4614f, 0f, 0f, 0f, 1f, 1f, 3f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_27, 2741.316f, -1398.186f, 45.3701f, 0f, 0f, 0f, 1f, 1f, 3f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_27, 2740.058f, -1395.354f, 45.2835f, 0f, 0f, 0f, 1f, 1f, 3f);
	}
	if (!__LIB_0__::func_272(uLocal_22[1], 0))
	{
		func_291(iParam0, 9, &(uLocal_22[1]), 0, 1, 0, 0, 0, 0, -922193456, 0, 0, 0);
		bVar0 = false;
	}
	if (!bLocal_33)
	{
		STREAMING::REQUEST_MODEL(joaat("MSP_MOB3_FEMALES_01"), false);
		STREAMING::REQUEST_MODEL(joaat("MSP_MOB3_MALES_01"), false);
		STREAMING::REQUEST_MODEL(joaat("P_CRATE15X"), false);
		STREAMING::REQUEST_MODEL(joaat("P_CRATECONF01X"), false);
		STREAMING::REQUEST_MODEL(joaat("P_CRATEBRAND03X"), false);
		bLocal_33 = true;
	}
	if ((((!STREAMING::HAS_MODEL_LOADED(joaat("MSP_MOB3_FEMALES_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("MSP_MOB3_MALES_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("P_CRATE15X"))) || !STREAMING::HAS_MODEL_LOADED(joaat("P_CRATECONF01X"))) || !STREAMING::HAS_MODEL_LOADED(joaat("P_CRATEBRAND03X")))
	{
		bVar0 = false;
	}
	else if (!func_292(-1, 1))
	{
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_26))
	{
		iLocal_26 = VOLUME::_CREATE_VOLUME_BOX(2727.853f, -1357.258f, 45.37f, 0f, 0f, -44.53838f, 31.58766f, 7.808591f, 8.208012f);
		__LIB_9__::func_917(iParam0, iLocal_26);
	}
	if (bVar0)
	{
		__LIB_5__::func_410(iParam0, 16777216);
	}
	if (__LIB_0__::func_78(&(iParam0->f_958)) >= 3)
	{
		if (__LIB_2__::func_27(iParam0, 128))
		{
			__LIB_4__::func_727(iParam0, 128);
		}
	}
	else if (!__LIB_2__::func_27(iParam0, 128))
	{
		__LIB_5__::func_410(iParam0, 128);
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
	return func_291(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

void func_137(var uParam0)
{
	if (!bLocal_35)
	{
		func_141(Local_14.f_3[0], func_302(0, 0), 2, 1073741824 /* Float: 2f */);
		func_141(Local_14.f_3[1], func_302(0, 1), 2, 1073741824 /* Float: 2f */);
		func_141(Local_14.f_3[2], func_302(0, 2), 2, 1073741824 /* Float: 2f */);
		func_141(Local_14.f_3[3], func_302(0, 3), 2, 1073741824 /* Float: 2f */);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_3[3], false);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_14.f_3[3], false);
		ENTITY::SET_ENTITY_VISIBLE(Local_14.f_3[3], true);
		ENTITY::SET_ENTITY_COLLISION(Local_14.f_3[3], true, false);
		AUDIO::STOP_PED_SPEAKING(Local_14.f_3[3], false);
		*uParam0 = *uParam0;
		bLocal_35 = true;
	}
}

struct<4> func_140(int iParam0, int iParam1)
{
	return func_304(iParam0, iParam1);
}

void func_141(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_305(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_146(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_3[iVar0]))
		{
			if (iVar0 == 3)
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_3[iVar0], true);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_14.f_3[iVar0], true);
				ENTITY::SET_ENTITY_VISIBLE(Local_14.f_3[iVar0], false);
				ENTITY::SET_ENTITY_COLLISION(Local_14.f_3[iVar0], false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3[iVar0], true);
				AUDIO::STOP_PED_SPEAKING(Local_14.f_3[iVar0], true);
				PED::_SET_PED_BODY_COMPONENT(Local_14.f_3[iVar0], 469249943);
				PED::_UPDATE_PED_VARIATION(Local_14.f_3[iVar0], false, true, true, true, false);
				DECORATOR::DECOR_SET_INT(Local_14.f_3[iVar0], __LIB_5__::func_393(), joaat("CASHIER"));
			}
			else if (iVar0 == 0)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_14.f_3[iVar0], 2733.284f, -1398.097f, 45.4614f, 1f, -1, false, false, true, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3[iVar0], false);
				PED::SET_PED_CONFIG_FLAG(Local_14.f_3[iVar0], 130, false);
				PED::_SET_PED_BODY_COMPONENT(Local_14.f_3[iVar0], -1345974820);
				PED::_UPDATE_PED_VARIATION(Local_14.f_3[iVar0], false, true, true, true, false);
				DECORATOR::DECOR_SET_INT(Local_14.f_3[iVar0], __LIB_5__::func_393(), -1954804603);
			}
			else if (iVar0 == 1)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_14.f_3[iVar0], 2741.316f, -1398.186f, 45.3701f, 1f, -1, false, false, true, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3[iVar0], false);
				PED::SET_PED_CONFIG_FLAG(Local_14.f_3[iVar0], 130, false);
				PED::_SET_PED_BODY_COMPONENT(Local_14.f_3[iVar0], -1345974820);
				PED::_UPDATE_PED_VARIATION(Local_14.f_3[iVar0], false, true, true, true, false);
				DECORATOR::DECOR_SET_INT(Local_14.f_3[iVar0], __LIB_5__::func_393(), -795699535);
			}
			else if (iVar0 == 2)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_14.f_3[iVar0], 2740.058f, -1395.354f, 45.2835f, 1f, -1, false, false, true, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3[iVar0], false);
				PED::SET_PED_CONFIG_FLAG(Local_14.f_3[iVar0], 130, false);
				PED::_SET_PED_BODY_COMPONENT(Local_14.f_3[iVar0], -1650890369);
				PED::_UPDATE_PED_VARIATION(Local_14.f_3[iVar0], false, true, true, true, false);
				DECORATOR::DECOR_SET_INT(Local_14.f_3[iVar0], __LIB_5__::func_393(), -623269057);
			}
			__LIB_4__::func_766(iParam0, Local_14.f_3[iVar0]);
		}
		iVar0++;
	}
}

char* func_151()
{
	if (__LIB_1__::func_185(34))
	{
		return "7-EnterBack_AfterInd3_MultiStart";
	}
	return "5-EnterBack_BeforeInd3_MultiStart";
}

char* func_153()
{
	if (__LIB_1__::func_185(34))
	{
		return "4-EnterFront_AfterInd3_NormalStart";
	}
	return "2-EnterFront_BeforeInd3_NormalStart";
}

char* func_154()
{
	if (__LIB_1__::func_185(34))
	{
		return "8-EnterBack_AfterInd3_NormalStart";
	}
	return "6-EnterBack_BeforeInd3_NormalStart";
}

char* func_155()
{
	if (__LIB_1__::func_185(34))
	{
		return "3-EnterFront_AfterInd3_MultiStart";
	}
	return "1-EnterFront_BeforeInd3_MultiStart";
}

void func_253(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_438();
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

void func_255(var uParam0)
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
			func_305(iVar1, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_305(iVar3, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_256(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_760(uParam0) };
			func_305(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_291(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
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
	vVar0 = { iParam5, iParam6, iParam7 };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { __LIB_1__::func_469(*iParam0) };
	}
	if (!__LIB_0__::func_287(iParam1, 28, 1))
	{
		__LIB_0__::func_288(iParam1, 28, 1);
	}
	*uParam2 = func_497(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
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

bool func_292(int iParam0, bool bParam1)
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
		Local_14.f_3[0] = __LIB_1__::func_545(joaat("MSP_MOB3_MALES_01"), 2734.155f, -1397.665f, 46.1831f, 211.9747f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[0], "CUSTOMER01Intro");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[0]);
		__LIB_5__::func_510(Local_14.f_3[0], Local_14);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_3[0], joaat("REL_CIVMALE"));
		__LIB_2__::func_231(Local_14.f_3[0], joaat("WEAPON_UNARMED"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3[0], true);
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
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_3[1] = __LIB_1__::func_545(joaat("MSP_MOB3_FEMALES_01"), 2744.33f, -1397.482f, 46.1831f, 353.558f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[1], "CUSTOMER02Intro");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[1]);
		__LIB_5__::func_510(Local_14.f_3[1], Local_14);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_3[1], joaat("REL_CIVMALE"));
		__LIB_2__::func_231(Local_14.f_3[1], joaat("WEAPON_UNARMED"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3[1], true);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_3[2] = __LIB_1__::func_545(joaat("MSP_MOB3_MALES_01"), 2738.873f, -1397.504f, 46.1863f, 27.9751f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[2], "CUSTOMER03Intro");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[2]);
		__LIB_5__::func_510(Local_14.f_3[2], Local_14);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_3[2], joaat("REL_CIVMALE"));
		__LIB_2__::func_231(Local_14.f_3[2], joaat("WEAPON_UNARMED"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3[2], true);
		if (bParam1)
		{
			if (iParam0 == 2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[3]) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_3[3] = __LIB_1__::func_545(joaat("MSP_MOB3_MALES_01"), 2748.026f, -1396.552f, 46.1831f, 30.0073f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[3], "Cashier");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[3]);
		__LIB_5__::func_510(Local_14.f_3[3], Local_14);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_3[3], joaat("REL_CIVMALE"));
		__LIB_2__::func_231(Local_14.f_3[3], joaat("WEAPON_UNARMED"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3[3], true);
		if (bParam1)
		{
			if (iParam0 == 3)
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

struct<4> func_302(int iParam0, int iParam1)
{
	return func_523(iParam0, iParam1);
}

struct<4> func_304(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_524(iParam0, iParam1) };
	Var0.f_3 = func_525(iParam0, iParam1);
	return Var0;
}

void func_305(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_305(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_305(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_438()
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
	iVar0 = func_628(6291456, 0);
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

int func_497(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
			if (func_665(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
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
				func_305(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

struct<4> func_523(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_680(iParam0, iParam1) };
	Var0.f_3 = func_681(iParam0, iParam1);
	return Var0;
}

Vector3 func_524(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2735.796f, -1364.175f, 45.464f;
				case 1:
					return 2736.452f, -1365.63f, 45.464f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_525(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 275.04f;
				case 1:
					return 349.92f;
			}
			break;
	}
	return 0f;
}

int func_628(int iParam0, int iParam1)
{
	var uVar0;
	return func_761(&uVar0, iParam0, iParam1);
}

bool func_665(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("DEF_COMP_BRAIN"));
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				return false;
			}
			if (Global_1359489.f_9 != -1)
			{
				return false;
			}
			Global_1359489.f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_783(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (__LIB_0__::func_702(Global_1360165[iParam0 /*1157*/].f_4.f_2) || __LIB_1__::func_44(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_783(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_784(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!__LIB_0__::func_959(iParam0, 0))
					{
						__LIB_0__::func_288(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { __LIB_0__::func_229(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) };
			if (!bParam6)
			{
				__LIB_0__::func_290(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!__LIB_0__::func_272(__LIB_0__::func_271(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
				{
					return false;
				}
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

Vector3 func_680(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2734.155f, -1397.665f, 46.1831f;
				case 1:
					return 2744.33f, -1397.482f, 46.1831f;
				case 2:
					return 2738.873f, -1397.504f, 46.1863f;
				case 3:
					return 2748.026f, -1396.552f, 46.1831f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_681(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 211.9747f;
				case 1:
					return 353.558f;
				case 2:
					return 27.9751f;
				case 3:
					return 30.0073f;
			}
			break;
	}
	return 0f;
}

int func_761(var uParam0, int iParam1, int iParam2)
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
		return func_761(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_783(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (__LIB_1__::func_25(Global_1347702[63 /*49*/].f_15, 1) || __LIB_1__::func_44(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (__LIB_0__::func_252(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (__LIB_0__::func_273(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					Jump @1185; //curOff = 1169
					iVar1[0] = -268604689;
					Jump @3415; //curOff = 1185
					switch (iParam0)
					{
						case 0:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 1:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 2:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar1[3] = 283037683;
							iVar7 = 4;
							break;
						case 3:
							if (__LIB_0__::func_252(iVar0, 9, 11))
							{
								iVar1[0] = 283037683;
							}
							else
							{
								iVar1[0] = -922193456;
								iVar1[1] = -2040275819;
								iVar1[2] = -1114682645;
								iVar1[3] = -1414977761;
								iVar7 = 4;
							}
							if (!bParam2)
							{
								iVar1[0] = -922193456;
							}
							break;
						case 4:
							iVar1[0] = -922193456;
							break;
						case 5:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 6:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar1[3] = 283037683;
							iVar7 = 4;
							break;
						case 7:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar1[3] = 283037683;
							iVar7 = 4;
							break;
						case 8:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = 283037683;
							iVar1[3] = 1744281750;
							iVar7 = 4;
							break;
						case 9:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar1[3] = 283037683;
							iVar1[4] = 1744281750;
							iVar7 = 5;
							break;
						case 10:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 11:
							if (__LIB_1__::func_25(Global_1347702[134 /*49*/].f_15, 1) || __LIB_1__::func_44(Global_1347702[134 /*49*/].f_15))
							{
								iVar1[0] = -2040275819;
								iVar1[1] = 1205492208;
								iVar7 = 2;
							}
							else
							{
								iVar1[0] = -922193456;
							}
							break;
						case 13:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = 283037683;
							iVar1[3] = 1744281750;
							iVar7 = 4;
							break;
						case 14:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 15:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 16:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 17:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 18:
							iVar1[0] = -922193456;
							break;
						case 19:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 20:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 21:
							iVar1[0] = -922193456;
							iVar1[1] = 1744281750;
							iVar7 = 2;
							break;
						case 22:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 23:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = 1744281750;
							iVar7 = 3;
							break;
						case 26:
							iVar1[0] = -268604689;
							break;
						default:
							iVar1[0] = -922193456;
							break;
					}
					Jump @3415; //curOff = 2240
					switch (iParam0)
					{
						case 2:
							if (__LIB_1__::func_25(Global_1835011[38 /*74*/].f_1, 1))
							{
								iVar1[0] = -1559986688;
							}
							else
							{
								iVar1[0] = -1874208704;
							}
							break;
						default:
							iVar1[0] = 1593315648;
							break;
					}
					Jump @3415; //curOff = 2314
					switch (iParam0)
					{
						case 0:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 1:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 2:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar1[3] = 283037683;
							iVar7 = 4;
							break;
						case 3:
							if (__LIB_0__::func_252(iVar0, 9, 11))
							{
								iVar1[0] = 283037683;
							}
							else
							{
								iVar1[0] = -922193456;
								iVar1[1] = -2040275819;
								iVar1[2] = -1114682645;
								iVar1[3] = -1414977761;
								iVar7 = 4;
							}
							if (!bParam2)
							{
								iVar1[0] = -922193456;
							}
							break;
						case 4:
							iVar1[0] = -922193456;
							break;
						case 6:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar1[3] = 283037683;
							iVar7 = 4;
							break;
						case 7:
							iVar1[0] = 1295334688;
							iVar7 = 1;
							break;
						case 11:
							iVar1[0] = -2051275045;
							break;
						case 13:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = 283037683;
							iVar1[3] = 1744281750;
							iVar7 = 4;
							break;
						case 14:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 15:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 16:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 17:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 18:
							iVar1[0] = -922193456;
							break;
						case 19:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 20:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar7 = 2;
							break;
						case 21:
							iVar1[0] = -922193456;
							iVar1[1] = 1744281750;
							iVar7 = 2;
							break;
						case 22:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = -1114682645;
							iVar7 = 3;
							break;
						case 23:
							iVar1[0] = -922193456;
							iVar1[1] = -2040275819;
							iVar1[2] = 1744281750;
							iVar7 = 3;
							break;
						case 26:
							iVar1[0] = -268604689;
							break;
						default:
							iVar1[0] = -922193456;
							break;
					}
					Jump @3415; //curOff = 3087
					switch (iParam0)
					{
						case 13:
							iVar1[0] = -1341683964;
							iVar1[1] = 876797088;
							iVar7 = 2;
							break;
						case 14:
							iVar1[0] = -426171916;
							iVar1[1] = 1484386316;
							iVar1[2] = 1254970547;
							iVar7 = 3;
							break;
						case 4:
							if (__LIB_1__::func_198(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !__LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1))
							{
								iVar1[0] = -1155031950;
							}
							else
							{
								iVar1[0] = -1341683964;
							}
							break;
						default:
							iVar1[0] = -1341683964;
							break;
					}
					Jump @3415; //curOff = 3250
					switch (iParam0)
					{
						case 13:
							iVar1[0] = -1341683964;
							iVar1[1] = 876797088;
							iVar1[2] = 1484386316;
							iVar7 = 3;
							break;
						case 14:
							iVar1[0] = -1092189504;
							iVar1[1] = 80515440;
							iVar7 = 2;
							break;
						case 4:
							iVar1[0] = -1341683964;
							iVar1[1] = 867156718;
							iVar7 = 2;
							break;
						case 7:
							iVar1[0] = -1341683964;
							iVar1[1] = 1484386316;
							iVar7 = 2;
							break;
						default:
							iVar1[0] = -1341683964;
							break;
					}
					if (bParam3 && ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iParam0)))
					{
						iVar10 = 0;
						while (iVar10 < iVar7)
						{
							if (iVar1[iVar10] == Global_40.f_4942[iParam0 /*60*/].f_3)
							{
								bVar9 = true;
								iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
							}
							iVar10++;
						}
					}
					if (!bVar9)
					{
						iVar11 = 0;
						if (iVar7 > 0 && bParam2)
						{
							iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
						}
						iVar8 = iVar1[iVar11];
					}
					if (!__LIB_1__::func_201(iParam0, iVar8))
					{
						iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
					}
					return iVar8;
				}
bool func_784(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

