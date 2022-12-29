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
	struct<11> Local_14 = { 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	struct<5> Local_30 = { 0, 0, 0, 0, 0 } ;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = false;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<2907> Local_55 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
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
		if (__LIB_5__::func_203(Local_55))
		{
			__LIB_0__::func_8(&Global_1935630, 32768);
		}
		func_3(&Local_55, 1);
	}
	__LIB_9__::func_918(&uScriptParam_0, &Local_55);
	while (!__LIB_2__::func_27(&Local_55, 1))
	{
		if (__LIB_4__::func_721(&Local_55) != 10)
		{
			if ((__LIB_4__::func_721(&Local_55) == 3 || __LIB_4__::func_721(&Local_55) == 4) && (!__LIB_5__::func_132(&Local_55) || __LIB_0__::func_78(&(Local_55.f_958)) > 0))
			{
				__LIB_9__::func_915(&Local_55, __LIB_2__::func_27(&Local_55, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && __LIB_5__::func_204(&Local_55)) && __LIB_2__::func_27(&Local_55, 65536))
			{
				__LIB_9__::func_915(&Local_55, 1);
			}
		}
		if (__LIB_4__::func_721(&Local_55) >= 3 && __LIB_4__::func_721(&Local_55) <= 7)
		{
			__LIB_9__::func_914(&Local_55);
		}
		if (((((__LIB_4__::func_721(&Local_55) >= 5 && __LIB_4__::func_721(&Local_55) <= 7) && !__LIB_2__::func_27(&Local_55, 4096)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_55.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_55.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_55.f_428.f_444))
		{
			MemCopy(&Var1, {__LIB_4__::func_681(Local_55)}, 4);
			func_13(Var1, &(Local_55.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (__LIB_4__::func_721(&Local_55))
		{
			case 8:
				if (__LIB_17__::func_563(&Local_55))
				{
					__LIB_5__::func_536(&Local_55);
					__LIB_0__::func_0(&Local_55);
					__LIB_4__::func_722(&Local_55, 0);
				}
				else if (!__LIB_5__::func_204(&Local_55))
				{
					if (!__LIB_0__::func_899(&(Local_55.f_2899)))
					{
						__LIB_4__::func_89(&(Local_55.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_55))
					{
						if (__LIB_4__::func_118(&(Local_55.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_55.f_2889, 2097152);
							__LIB_5__::func_174(&Local_55);
							__LIB_5__::func_608(&Local_55);
							__LIB_4__::func_722(&Local_55, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_55, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_55, 536870912);
						}
						__LIB_2__::func_259(&(Local_55.f_2899));
					}
				}
				break;
			case 0:
				if (__LIB_5__::func_204(&Local_55))
				{
					__LIB_0__::func_0(&Local_55);
				}
				if (!__LIB_5__::func_204(&Local_55) || __LIB_2__::func_27(&Local_55, 65536))
				{
					if (func_27(&Local_55))
					{
						__LIB_4__::func_722(&Local_55, 1);
					}
				}
				break;
			case 1:
				if (__LIB_5__::func_204(&Local_55))
				{
					__LIB_0__::func_0(&Local_55);
				}
				if (func_28(&Local_55))
				{
					__LIB_4__::func_722(&Local_55, 2);
				}
				break;
			case 2:
				if (__LIB_5__::func_204(&Local_55))
				{
					__LIB_0__::func_0(&Local_55);
				}
				if (func_29(&Local_55))
				{
					if (!__LIB_5__::func_132(&Local_55) || __LIB_5__::func_204(&Local_55))
					{
						if (!__LIB_0__::func_79(Local_55.f_2889))
						{
							Local_55.f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(Local_55));
						}
						__LIB_1__::func_109(Local_55.f_2889, 4);
						__LIB_5__::func_410(&Local_55, 8192);
					}
					if (__LIB_5__::func_204(&Local_55))
					{
						__LIB_5__::func_175(&Local_55);
						__LIB_4__::func_722(&Local_55, 9);
					}
					else
					{
						__LIB_4__::func_722(&Local_55, 3);
					}
				}
				break;
			case 9:
				if (__LIB_0__::func_0(&Local_55))
				{
					__LIB_0__::func_11(&Local_55);
					__LIB_5__::func_536(&Local_55);
					__LIB_18__::func_298(&Local_55);
					if (!__LIB_2__::func_27(&Local_55, 256))
					{
						__LIB_0__::func_11(&Local_55);
						__LIB_5__::func_227(Local_55);
						func_38(&Local_55);
						__LIB_4__::func_722(&Local_55, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_55, 5);
					}
				}
				break;
			case 3:
				if (!__LIB_2__::func_27(&Local_55, 8192))
				{
					if (__LIB_0__::func_78(&(Local_55.f_958)) == 3)
					{
						__LIB_1__::func_109(Local_55.f_2889, 4);
						__LIB_5__::func_410(&Local_55, 8192);
					}
				}
				func_39(&Local_55);
				if (__LIB_3__::func_919(__LIB_0__::func_80(Global_1835011[Local_55 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&Local_55) || __LIB_5__::func_176(&Local_55, 32768))
				{
					__LIB_0__::func_11(&Local_55);
					__LIB_5__::func_536(&Local_55);
					__LIB_4__::func_722(&Local_55, 4);
					__LIB_4__::func_89(&(Local_55.f_2890), 0);
				}
				else if (__LIB_5__::func_204(&Local_55) && !__LIB_5__::func_203(Local_55))
				{
					if (!__LIB_0__::func_899(&(Local_55.f_2899)))
					{
						__LIB_4__::func_89(&(Local_55.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_55))
					{
						if (__LIB_4__::func_118(&(Local_55.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_55.f_2889, 2097152);
							__LIB_5__::func_174(&Local_55);
							__LIB_5__::func_608(&Local_55);
							__LIB_4__::func_722(&Local_55, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_55, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_55, 536870912);
						}
						__LIB_2__::func_259(&(Local_55.f_2899));
					}
				}
				break;
			case 4:
				func_43(&Local_55);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (func_44(&Local_55) || (__LIB_5__::func_176(&Local_55, 32768) && !__LIB_2__::func_27(&Local_55, 268435456)))
				{
					__LIB_18__::func_298(&Local_55);
					if (!__LIB_2__::func_27(&Local_55, 256))
					{
						__LIB_0__::func_11(&Local_55);
						func_38(&Local_55);
						if (!__LIB_0__::func_1(Global_1935630, 524288) || __LIB_5__::func_176(&Local_55, 524288))
						{
							__LIB_5__::func_227(Local_55);
							__LIB_4__::func_722(&Local_55, 7);
						}
						else
						{
							__LIB_4__::func_722(&Local_55, 6);
						}
					}
					else
					{
						__LIB_5__::func_227(Local_55);
						__LIB_4__::func_722(&Local_55, 5);
					}
				}
				break;
			case 5:
				func_46(&Local_55);
				__LIB_5__::func_526(&Local_55);
				if (__LIB_1__::func_583(&(Local_55.f_2884)) >= __LIB_4__::func_723(&Local_55))
				{
					__LIB_0__::func_11(&Local_55);
					func_38(&Local_55);
					__LIB_2__::func_259(&(Local_55.f_2884));
					if (!__LIB_5__::func_176(&Local_55, 524288))
					{
						__LIB_5__::func_227(Local_55);
						__LIB_4__::func_722(&Local_55, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_55, 6);
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_899(&(Local_55.f_2906)))
				{
					__LIB_4__::func_89(&(Local_55.f_2906), 0);
				}
				if ((__LIB_0__::func_81(&(Local_55.f_428)) == 4 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_55.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_55.f_428.f_444))
				{
					__LIB_5__::func_227(Local_55);
					__LIB_4__::func_722(&Local_55, 7);
				}
				else if (__LIB_1__::func_583(&(Local_55.f_2906)) >= 5f)
				{
					__LIB_5__::func_227(Local_55);
					__LIB_4__::func_722(&Local_55, 7);
				}
				break;
			case 7:
				func_51(&Local_55);
				if (__LIB_9__::func_916(&Local_55))
				{
					__LIB_4__::func_722(&Local_55, 10);
				}
				break;
			case 10:
				if (func_3(&Local_55, 0))
				{
					__LIB_5__::func_410(&Local_55, 1);
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
	__LIB_11__::func_445(iParam0);
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
					__LIB_8__::func_726(uParam4, 4);
					return 0;
				}
				else if (__LIB_4__::func_729(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_437);
				}
				__LIB_8__::func_726(uParam4, 3);
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
				__LIB_2__::func_259(&(uParam4->f_1));
				__LIB_8__::func_726(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_5__::func_412(uParam4);
				if (!__LIB_0__::func_899(&(uParam4->f_1)))
				{
					__LIB_4__::func_89(&(uParam4->f_1), 0);
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
					}
					__LIB_8__::func_726(uParam4, 4);
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
						__LIB_8__::func_726(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_0__::func_266(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
					{
						__LIB_0__::func_87(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					__LIB_0__::func_722(1, 0);
					__LIB_5__::func_603(uParam4, &uParam0);
					__LIB_8__::func_726(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
				}
				__LIB_8__::func_726(uParam4, 4);
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
					__LIB_2__::func_259(&(uParam4->f_1));
					__LIB_0__::func_88(uParam4, 512);
					__LIB_8__::func_726(uParam4, 4);
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
				__LIB_9__::func_919(uParam4);
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
						__LIB_2__::func_259(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_4__::func_733(uParam4, 67108864, 1);
						__LIB_8__::func_726(uParam4, 4);
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
				__LIB_9__::func_919(uParam4);
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
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
						}
						__LIB_8__::func_726(uParam4, 3);
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
			__LIB_8__::func_726(uParam4, 4);
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
	if (!func_137())
	{
		return false;
	}
	if (!func_138(-1, 1))
	{
		return false;
	}
	else if (!__LIB_0__::func_899(&uLocal_42))
	{
		__LIB_4__::func_89(&uLocal_42, 1);
	}
	MISC::_0x2FCD528A397E5C88(Local_30.f_2, 2442122);
	func_139(-1, 1);
	__LIB_0__::func_862(Local_14.f_3[1], 1070256532);
	__LIB_0__::func_862(Local_14.f_3[2], joaat("META_OUTFIT_DEFAULT"));
	__LIB_0__::func_862(Local_14.f_3[4], joaat("META_OUTFIT_DEFAULT"));
	__LIB_0__::func_862(Local_14.f_3[3], joaat("META_OUTFIT_DEFAULT"));
	ANIMSCENE::_0xBC781D24AA11F179(Local_14.f_3[1]);
	ANIMSCENE::_0xBC781D24AA11F179(Local_14.f_3[2]);
	ANIMSCENE::_0xBC781D24AA11F179(Local_14.f_3[4]);
	ANIMSCENE::_0xBC781D24AA11F179(Local_14.f_3[3]);
	ANIMSCENE::_0xBC781D24AA11F179(Local_14.f_3[0]);
	__LIB_4__::func_766(iParam0, Local_14.f_3[1]);
	__LIB_4__::func_766(iParam0, Local_14.f_3[0]);
	__LIB_4__::func_766(iParam0, Local_14.f_3[2]);
	__LIB_4__::func_766(iParam0, Local_14.f_3[4]);
	__LIB_4__::func_766(iParam0, Local_14.f_3[3]);
	DECORATOR::DECOR_SET_INT(Local_14.f_3[2], __LIB_5__::func_393(), -260001281);
	DECORATOR::DECOR_SET_INT(Local_14.f_3[4], __LIB_5__::func_393(), 2126106215);
	DECORATOR::DECOR_SET_INT(Local_14.f_3[3], __LIB_5__::func_393(), -1929155846);
	DECORATOR::DECOR_SET_INT(Local_14.f_3[1], __LIB_5__::func_393(), 1658111565);
	DECORATOR::DECOR_SET_INT(Local_14.f_3[0], __LIB_5__::func_393(), -377721189);
	ENTITY::_0x18FF3110CF47115D(Local_14.f_3[2], 2, 0);
	ENTITY::_0x18FF3110CF47115D(Local_14.f_3[4], 2, 0);
	ENTITY::_0x18FF3110CF47115D(Local_14.f_3[3], 2, 0);
	ENTITY::_0x18FF3110CF47115D(Local_14.f_3[1], 2, 0);
	ENTITY::_0x18FF3110CF47115D(Local_14.f_3[0], 2, 0);
	__LIB_5__::func_183(iParam0, Local_14.f_3[2], 0);
	__LIB_5__::func_183(iParam0, Local_14.f_3[4], 0);
	__LIB_5__::func_183(iParam0, Local_14.f_3[3], 0);
	__LIB_5__::func_183(iParam0, Local_14.f_3[1], 0);
	__LIB_5__::func_183(iParam0, Local_14.f_3[0], 0);
	__LIB_5__::func_183(iParam0, Local_14.f_10[0], 0);
	__LIB_5__::func_183(iParam0, Local_14.f_10[1], 0);
	__LIB_5__::func_183(iParam0, Local_14.f_10[2], 0);
	__LIB_5__::func_183(iParam0, Local_14.f_10[3], 0);
	__LIB_5__::func_183(iParam0, Local_14.f_10[4], 0);
	__LIB_5__::func_410(iParam0, 256);
	__LIB_5__::func_410(iParam0, 2048);
	HUD::_TEXT_DATABASE_REQUEST("MRY1");
	MISC::_SET_WEATHER_TYPE(joaat("OVERCAST"), false, true, true, 30f, false);
	__LIB_0__::func_401(joaat("K_11_P_MARY1_CAMP"));
	Global_43838 = iLocal_41;
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
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
	if (!bLocal_50)
	{
		if (__LIB_8__::func_344(joaat("K_11_P_MARY1_CAMP")))
		{
			GRAPHICS::_0xDFEA23EC90113657(joaat("K_11_P_MARY1_CAMP"));
			bLocal_50 = true;
		}
	}
	func_156();
}

bool func_41(int iParam0)
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_30.f_1, true, 0))
	{
	}
	if (iLocal_35 == 9)
	{
		if (TASK::IS_PED_WALKING(Global_35))
		{
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		return true;
	}
	return false;
}

void func_43(int iParam0)
{
	func_156();
}

bool func_44(int iParam0)
{
	if (iLocal_35 == 9)
	{
		return true;
	}
	return false;
}

void func_46(int iParam0)
{
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
}

void func_51(int iParam0)
{
	__LIB_9__::func_204(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_30), &uLocal_52, 1112014848 /* Float: 50f */, 40f, 25f, 20f, 1f, 0, 1, 0, 1, 1);
}

bool func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	POPULATION::_0x74C2B3DC0B294102(Local_30.f_4);
	POPULATION::_0xA1CFB35069D23C23(Local_30.f_4);
	func_161();
	VOLUME::_DELETE_VOLUME(iLocal_49);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	if (__LIB_2__::func_27(iParam0, 1024) || __LIB_8__::func_617(8))
	{
		iVar0 = 0;
		while (iVar0 < Local_14.f_3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[iVar0]))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_14.f_3[iVar0], true))
				{
					if (__LIB_8__::func_617(8))
					{
					}
				}
			}
			iVar0++;
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_40, false))
		{
			ANIMSCENE::ABORT_ANIM_SCENE(iLocal_40, true);
		}
		if (__LIB_8__::func_617(8))
		{
			func_163(2, "ig1_exit_quick_chelonian");
			func_163(4, "ig1_exit_quick_chelonian2");
			func_163(3, "ig1_exit_quick_chelonian3");
			func_163(1, "ig1_exit_quick_ig_chelonianmaster");
			func_163(0, "ig1_exit_quick_ig_jamie");
		}
	}
	else
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		GRAPHICS::_0xDD0BC0EDCB2162F6(joaat("K_11_P_MARY1_CAMP"));
		iVar1 = 0;
		while (iVar1 < Local_14.f_3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[iVar1]))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_14.f_3[iVar1], true))
				{
					PED::DELETE_PED(&(Local_14.f_3[iVar1]));
				}
			}
			iVar1++;
		}
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
		func_230(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_749(uParam0, 0f, 0f, 0f);
		func_232(uParam0);
		func_233(uParam0);
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
	__LIB_0__::func_803(-1060078174);
	func_268();
	iParam0->f_422 = Local_30.f_1;
	POPULATION::_0x18262CAFEBB5FBE1(Local_30.f_4, 4096, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(Local_30.f_4, 4096, 0, 0, -1, -1, 0);
	iLocal_40 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@mry1@ig@ig_1@ig1_chelonians_in_camp", 0, "IG1_PRAY", false, true);
	iLocal_41 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@mry1@ig@ig_2@ig2_charm", 0, "pl_IG2_charm", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_40);
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_41);
	STREAMING::REQUEST_MODEL(joaat("U_M_M_CHELONIANJUMPER_01"), false);
	STREAMING::REQUEST_MODEL(joaat("U_M_M_CHELONIANJUMPER_02"), false);
	STREAMING::REQUEST_MODEL(joaat("U_M_M_CHELONIANJUMPER_03"), false);
	STREAMING::REQUEST_MODEL(joaat("CS_CHELONIANMASTER"), false);
	STREAMING::REQUEST_MODEL(joaat("CS_JAMIE"), false);
	STREAMING::REQUEST_MODEL(joaat("P_STOOLFOLDING01BX"), false);
	STREAMING::REQUEST_ANIM_DICT("script_story@mry1@ig@ig1");
	return true;
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
	return func_276(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

bool func_137()
{
	if ((!STREAMING::HAS_MODEL_LOADED(joaat("U_M_M_CHELONIANJUMPER_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("U_M_M_CHELONIANJUMPER_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("U_M_M_CHELONIANJUMPER_03")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("CS_CHELONIANMASTER")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("CS_JAMIE")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_STOOLFOLDING01BX")))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_40, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_41, true, false))
	{
		return false;
	}
	if (!ENTITY::_0x6BFBDC46139C45AB(func_279(0, 0)))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("script_story@mry1@ig@ig1"))
	{
		return false;
	}
	return true;
}

bool func_138(int iParam0, bool bParam1)
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
		Local_14.f_3[0] = __LIB_1__::func_545(joaat("CS_JAMIE"), 878.2765f, 1266.353f, 234.4891f, 116.4851f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[0], "Jamie");
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
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_3[1] = __LIB_1__::func_545(joaat("CS_CHELONIANMASTER"), 876.9765f, 1266.128f, 234.3466f, 287.28f, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[1], "ChelonianLeader");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[1]);
		__LIB_5__::func_510(Local_14.f_3[1], Local_14);
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
		Local_14.f_3[2] = __LIB_1__::func_545(joaat("U_M_M_CHELONIANJUMPER_01"), 881.6702f, 1267.74f, 234.6388f, 109.5199f, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[2], "Chelonian1");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[2]);
		__LIB_5__::func_510(Local_14.f_3[2], Local_14);
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
		Local_14.f_3[3] = __LIB_1__::func_545(joaat("U_M_M_CHELONIANJUMPER_03"), 880.06f, 1264.3f, 234.6143f, 4.4f, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[3], "Chelonian3");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[3]);
		__LIB_5__::func_510(Local_14.f_3[3], Local_14);
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
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[4]) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_3[4] = __LIB_1__::func_545(joaat("U_M_M_CHELONIANJUMPER_02"), 882.1874f, 1266.107f, 234.6259f, 97.2f, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[4], "Chelonian2");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[4]);
		__LIB_5__::func_510(Local_14.f_3[4], Local_14);
		if (bParam1)
		{
			if (iParam0 == 4)
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

void func_139(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14.f_9))
	{
		Local_14.f_9 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_10[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_10[0] = OBJECT::CREATE_OBJECT(joaat("P_STOOLFOLDING01BX"), 880.4669f, 1268.647f, 233.4327f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_10[0], -1.7351f, 8.1554f, 164.5777f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_10[0], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_10[0], Local_14);
	__LIB_5__::func_510(Local_14.f_10[0], Local_14.f_9);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_10[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_10[1] = OBJECT::CREATE_OBJECT(joaat("P_STOOLFOLDING01BX"), 881.7306f, 1267.76f, 233.608f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_10[1], -8.1552f, 0.564f, 107.3896f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_10[1], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_10[1], Local_14);
	__LIB_5__::func_510(Local_14.f_10[1], Local_14.f_9);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_10[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_10[2] = OBJECT::CREATE_OBJECT(joaat("P_STOOLFOLDING01BX"), 882.1706f, 1266.099f, 233.5735f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_10[2], 0f, 0f, 80.0005f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_10[2], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_10[2], Local_14);
	__LIB_5__::func_510(Local_14.f_10[2], Local_14.f_9);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_10[3]) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_10[3] = OBJECT::CREATE_OBJECT(joaat("P_STOOLFOLDING01BX"), 881.8179f, 1264.996f, 233.5735f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_10[3], 0f, 0f, 46.0005f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_10[3], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_10[3], Local_14);
	__LIB_5__::func_510(Local_14.f_10[3], Local_14.f_9);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_10[4]) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_10[4] = OBJECT::CREATE_OBJECT(joaat("P_STOOLFOLDING01BX"), 880.0585f, 1264.307f, 233.5735f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_10[4], 0f, 0f, 0.0006f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_10[4], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_10[4], Local_14);
	__LIB_5__::func_510(Local_14.f_10[4], Local_14.f_9);
}

void func_156()
{
	__LIB_9__::func_204(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_30), &uLocal_52, 1112014848 /* Float: 50f */, 40f, 25f, 20f, 1f, 0, 1, 0, 1, 1);
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_30, true, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		__LIB_1__::func_538(0);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		}
		if (!PED::IS_PED_INJURED(Global_35))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 43, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
			}
		}
	}
	if (__LIB_0__::func_899(&uLocal_36))
	{
		if (iLocal_51 != BUILTIN::FLOOR(__LIB_1__::func_583(&uLocal_36)))
		{
			iLocal_51 = BUILTIN::FLOOR(__LIB_1__::func_583(&uLocal_36));
		}
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_30.f_2, true, 0))
	{
		if (iLocal_35 < 8)
		{
			iLocal_35 = 8;
		}
	}
	switch (iLocal_35)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_40, true, false))
			{
				if ((((ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[2]) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[4])) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[3])) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[0])) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[1]))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_40, "Chelonian", Local_14.f_3[2], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_40, "Chelonian2", Local_14.f_3[4], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_40, "Chelonian3", Local_14.f_3[3], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_40, "Jamie", Local_14.f_3[0], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_40, "ChelonianMaster", Local_14.f_3[1], 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_40);
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_40, "IG1_CHANTING");
					iLocal_35 = 1;
				}
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_30.f_3, true, 0))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_40, "IG1_CHANTING"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_40, "IG1_CHANTING", true);
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_40, "IG1_SPEECH");
					iLocal_35 = 3;
				}
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_30, true, 0) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_40, "IG1_SPEECH"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_40, "IG1_SPEECH", true);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_40, "IG1_PRAY");
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_40, "IG1_CHANTING");
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_40, "IG1_WAITING");
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_40, "bool_loop", true, false);
				iLocal_35 = 5;
			}
			break;
		case 4:
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_WAITING", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_CHANTING", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_PRAY", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_SPEECH", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_BASE", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_PRAY", 1) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_CHANTING", 1))
			{
				iLocal_35 = 5;
			}
			break;
		case 5:
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_WAITING", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_CHANTING", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_PRAY", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_SPEECH", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_BASE", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_WAITING", 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_40, "bool_loop", false, false);
				iLocal_35 = 6;
			}
			break;
		case 6:
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_WAITING", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_CHANTING", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_PRAY", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_SPEECH", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_BASE", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_BASE", 1))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_40, "IG1_PRAY");
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_40, "IG1_CHANTING");
				__LIB_4__::func_89(&uLocal_36, 1);
				iLocal_35 = 7;
			}
			break;
		case 7:
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_WAITING", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_CHANTING", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_PRAY", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_SPEECH", 1))
			{
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_40, "IG1_BASE", 1))
			{
			}
			if (__LIB_1__::func_583(&uLocal_36) > 2f)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_40, "IG1_PRAY") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_40, "IG1_CHANTING"))
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_40, "bool_loop", false, false);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_40, "IG1_CHANTING", true);
						__LIB_4__::func_89(&uLocal_36, 1);
						iLocal_35 = 4;
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_40, "bool_loop", false, false);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_40, "IG1_PRAY", true);
						__LIB_4__::func_89(&uLocal_36, 1);
						iLocal_35 = 4;
					}
				}
			}
			break;
		case 8:
			if (AUDIO::_0x1ECC76792F661CF5("MRY1_IG1"))
			{
				if (AUDIO::_0x935DBD96D4A3DA1F("MRY1_IG1", AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("MRY1_IG1")) < 150)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_41, "Chelonian", Local_14.f_3[2], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_41, "Chelonian2", Local_14.f_3[4], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_41, "Chelonian3", Local_14.f_3[3], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_41, "Jamie", Local_14.f_3[0], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_41, "Chelonian_Master", Local_14.f_3[1], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_41, "player", Global_35, 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_41);
					ANIMSCENE::ABORT_ANIM_SCENE(iLocal_40, false);
					iLocal_35 = 9;
				}
			}
			else
			{
				iLocal_35 = 9;
			}
			break;
	}
}

void func_161()
{
	VOLUME::_DELETE_VOLUME(Local_30);
	VOLUME::_DELETE_VOLUME(Local_30.f_1);
	VOLUME::_DELETE_VOLUME(Local_30.f_2);
	VOLUME::_DELETE_VOLUME(Local_30.f_3);
	VOLUME::_DELETE_VOLUME(Local_30.f_4);
}

void func_163(int iParam0, char* sParam1)
{
	int iVar0[1];
	iVar0[0] = joaat("P_STOOLFOLDING01BX");
	TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
	TASK::TASK_PLAY_ANIM(0, "script_story@mry1@ig@ig1", sParam1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
	TASK::TASK_SMART_FLEE_PED(0, Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
	TASK::TASK_PERFORM_SEQUENCE(Local_14.f_3[iParam0], iLocal_48);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_48);
	func_306(Local_14.f_3[iParam0], &iVar0, 0, 1069547520 /* Float: 1.5f */, 0, 1, 0);
}

void func_230(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_378();
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

void func_232(var uParam0)
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
			func_389(iVar1, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_389(iVar3, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_233(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_760(uParam0) };
			func_389(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_268()
{
	Local_30 = VOLUME::_CREATE_VOLUME_CYLINDER(879.8459f, 1265.973f, 237.6527f, 0f, 0f, 0f, 24.31412f, 26.59405f, 7.471896f);
	Local_30.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER(877.7546f, 1266.084f, 235.0531f, 0f, 0f, 0f, 1.740734f, 1.963678f, 1.862875f);
	Local_30.f_2 = VOLUME::_CREATE_VOLUME_CYLINDER(879.8459f, 1265.973f, 237.6527f, 0f, 0f, 0f, 14.04341f, 16.29339f, 6.267085f);
	Local_30.f_3 = VOLUME::_CREATE_VOLUME_CYLINDER(879.8459f, 1265.973f, 237.6527f, 0f, 0f, 0f, 36.8843f, 44.11095f, 8.76118f);
	Local_30.f_4 = VOLUME::_CREATE_VOLUME_CYLINDER(906.474f, 1265.973f, 201.8131f, 0f, 0f, 0f, 95.18893f, 97.19805f, 67.1869f);
}

int func_276(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
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
	*uParam2 = func_458(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
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

Vector3 func_279(int iParam0, int iParam1)
{
	return func_463(iParam0, iParam1);
}

int func_306(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	int iVar4[1];
	int iVar6;
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(vVar1, fParam3);
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, iParam2, bParam5);
		if (bParam6)
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam2, true);
		}
		return 1;
	}
	else
	{
		iVar0 = __LIB_11__::func_95(&iVar4, iParam1, iVar4, vVar1, fParam3);
		if (iVar0 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar0)
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, iVar4[iVar6], bParam5);
				if (bParam6)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar4[iVar6], true);
				}
				iVar6++;
			}
			return 1;
		}
	}
	return 0;
}

void func_378()
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
			func_517(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_518(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_517(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

void func_389(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_389(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_389(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_458(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
						__LIB_9__::func_203(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
			if (func_567(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
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
				func_389(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
			func_574(iParam0, Global_1360165[iParam0 /*1157*/]);
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

Vector3 func_463(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 878.2765f, 1266.353f, 234.4891f;
				case 1:
					return 876.9765f, 1266.128f, 234.3466f;
				case 2:
					return 881.6702f, 1267.74f, 234.6388f;
				case 3:
					return 880.06f, 1264.3f, 234.6143f;
				case 4:
					return 882.1874f, 1266.107f, 234.6259f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_517(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
		func_606(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
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

int func_518(int iParam0, int iParam1)
{
	var uVar0;
	return func_609(&uVar0, iParam0, iParam1);
}

bool func_567(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
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
					iParam4 = func_638(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (__LIB_0__::func_702(Global_1360165[iParam0 /*1157*/].f_4.f_2) || __LIB_1__::func_44(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_638(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_639(Global_1360165[iParam0 /*1157*/].f_63))
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

void func_574(int iParam0, int iParam1)
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
				func_517(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_517(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

int func_606(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { __LIB_2__::func_3(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_667((386 + iVar28), 1);
			if (__LIB_1__::func_542(iParam0, &Var0, iVar5, 0))
			{
				if (__LIB_1__::func_429(iParam0, &Var6, iVar5))
				{
					Var29 = { __LIB_0__::func_429(iParam0, Var0, iVar5, 0) };
					func_668(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
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

int func_609(var uParam0, int iParam1, int iParam2)
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
		return func_609(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_638(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
					Jump @1187; //curOff = 374
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					Jump @1187; //curOff = 410
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					Jump @1187; //curOff = 446
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
					Jump @1187; //curOff = 523
					iVar1[0] = -268604689;
					Jump @1187; //curOff = 536
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					Jump @1187; //curOff = 562
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					Jump @1187; //curOff = 608
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					Jump @1187; //curOff = 644
					iVar1[0] = -268604689;
					Jump @1187; //curOff = 657
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					Jump @1187; //curOff = 683
					if (__LIB_1__::func_25(Global_1347702[63 /*49*/].f_15, 1) || __LIB_1__::func_44(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					Jump @1187; //curOff = 747
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					Jump @1187; //curOff = 773
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					Jump @1187; //curOff = 809
					iVar1[0] = -268604689;
					Jump @1187; //curOff = 822
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					Jump @1187; //curOff = 848
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					Jump @1187; //curOff = 874
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
					Jump @1187; //curOff = 935
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
					Jump @1187; //curOff = 1021
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					Jump @1187; //curOff = 1047
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					Jump @1187; //curOff = 1073
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					Jump @1187; //curOff = 1099
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					Jump @1187; //curOff = 1135
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					Jump @1187; //curOff = 1171
					iVar1[0] = -268604689;
					Jump @3417; //curOff = 1187
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
					Jump @3417; //curOff = 2242
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
					Jump @3417; //curOff = 2316
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
					Jump @3417; //curOff = 3089
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
					Jump @3417; //curOff = 3252
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
bool func_639(int iParam0)
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

int func_667(int iParam0, int iParam1)
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
			return 1043717005;
			return 142663787;
			return 1718143051;
			return -6605744;
			return 953047564;
			return 769706682;
			return 1635590003;
			return -2047978619;
			return -586319254;
			return 249896112;
			return -1060513333;
			return 1317351007;
			return -500478573;
			return -806573802;
			return -1109949204;
			return -740156546;
			return -684532710;
			return 1158805436;
			return -559473670;
			return -797147251;
			return -382216265;
			return 1419177114;
			return 1704297235;
			return -1139016418;
			return 897705377;
			return 17961769;
			return 205582207;
			return 900740963;
			return -1369589344;
			return -1695823795;
			return -41453074;
			return 539767227;
			return 1210490314;
			return -399684751;
			return 2138893455;
			return -1617010487;
			return -832377028;
			return -428040245;
			return 1279288897;
			return -594897905;
			return -1360459240;
			return 1838428396;
			return -1467846997;
			return -490610263;
			return -1885413079;
			return 708884155;
			return -134459952;
			return -1912136700;
			return -1268031552;
			return 1177953227;
			return 2130805296;
			return 38093490;
			return -269153218;
			return -1995068011;
			return -164284834;
			return 1446463345;
			return 1501315823;
			return -750379482;
			return -929560937;
			return 608323241;
			return 1030796013;
			return 1915057434;
			return -1582276476;
			return 692059311;
			return 2062839241;
			return -1884531872;
			return -866434534;
			return -1252192421;
			return 1243288963;
			return -1953772189;
			return 754411745;
			return 545309006;
			return -1089810811;
			return 1957869400;
			return -241412332;
			return -1548010959;
			return 550150488;
			return 946565453;
			return 434443248;
			return -1709914938;
			return 366686112;
			return -1370063350;
			return 2126829550;
			return 226552910;
			return 721193431;
			return -315672460;
			return 623544501;
			return 259556714;
			return -2125361825;
			return 1078230356;
			return 1885364811;
			return 1630382737;
			return 1738245512;
			return 1540262216;
			return 1016871472;
			return 13829069;
			return 737051352;
			return 1734614610;
			return -208715295;
			return 1435062936;
			return 1483055553;
			return 380335002;
			return -1079385677;
			return 676610411;
			return 2145419552;
			return 657238733;
			return 1850579281;
			return -1923957384;
			return -1142828108;
			return -1400618531;
			return -1433857135;
			return 209987206;
			return 1686943047;
			return -59178517;
			return 2134884601;
			return 651707517;
			return -633788535;
			return 116394463;
			return -1196973875;
			return 801752086;
			return 184475332;
			return -1880922659;
			return -898138634;
			return -2107418444;
			return -679970099;
			return -1531392549;
			return 1612483376;
			return 463930900;
			return -632148238;
			return 55303249;
			return 2108322089;
			return -1358896714;
			return 74475632;
			return -28710953;
			return -1791599168;
			return 1605938169;
			return 1255242276;
			return 636467727;
			return -1567688525;
			return -77886679;
			return -1057900679;
			return -1960888134;
			return -1719717295;
			return -1779244911;
			return -670540863;
			return 223362311;
			return 1150824567;
			return 974471191;
			return 1989683968;
			return 254804477;
			return 192057609;
			return 1553957817;
			return 2099829015;
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
			return -1948423372;
			return 981083654;
			return 1283289876;
			return -606884489;
			return -100418572;
			return 663645231;
			return 1442217033;
			return 1410986244;
			return 847409839;
			return 923926911;
			return 109995826;
			return -747412737;
			return 1114341727;
			return -539456939;
			return 45887121;
			return 913271624;
			return -1652812715;
			return -1791365775;
			return -979299941;
			return 713062001;
			return -575045963;
			return 1852965262;
			return -1398836354;
			return -1829885298;
			return -1773850357;
			return -564258009;
			return 2016532685;
			return -1070563798;
			return -1619221343;
			return -345571691;
			return 544288390;
			return 159578294;
			return -76852849;
			return 1110295244;
			return 2104563477;
			return 1947827651;
			return -933072766;
			return 2104388648;
			return -1677140601;
			return -2133097881;
			return -826678792;
			return -513522325;
			return 1970588249;
			return -2080032591;
			return 1758847745;
			return 895010282;
			return -511891179;
			return -1207567168;
			return -1315407613;
			return 1786352060;
			return -833319691;
			return 1591329969;
			return 2123222014;
			return -1578397674;
			return 1473261684;
			return -241855024;
			return 12999093;
			return -6796437;
			return -268116367;
			return -636470867;
			return 1737668280;
			return 892807236;
			return -733247890;
			return 24047176;
			return -1561999014;
			return -2052774042;
			return joaat("SLOTID_HORSE_BEDROLL");
			return joaat("SLOTID_HORSE_BLANKET");
			return joaat("SLOTID_HORSE_CANTLE");
			return joaat("SLOTID_HORSE_FENDER");
			return joaat("SLOTID_HORSE_HORN");
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
bool func_668(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (__LIB_0__::func_257(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!__LIB_0__::func_464(*uParam1, &Var0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!__LIB_0__::func_708(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(__LIB_0__::func_162(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

