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
	struct<9> Local_14 = { 0, 0, 0, 3, 0, 0, 0, 0, 2 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30[2] = { 0, 0 };
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43[3] = { 0, 0, 0 };
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	float fLocal_50 = 0f;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = -1;
	var uLocal_65 = 0;
	var uLocal_66 = -1;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = -1;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 1073741824;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 1;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	struct<17> Local_84[2];
	int iLocal_119 = 0;
	struct<2907> Local_120 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
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
		if (__LIB_5__::func_203(Local_120))
		{
			__LIB_0__::func_8(&Global_1935630, 32768);
		}
		func_3(&Local_120, 1);
	}
	__LIB_5__::func_610(&uScriptParam_0, &Local_120);
	while (!__LIB_2__::func_27(&Local_120, 1))
	{
		if (__LIB_4__::func_721(&Local_120) != 10)
		{
			if ((__LIB_4__::func_721(&Local_120) == 3 || __LIB_4__::func_721(&Local_120) == 4) && (!__LIB_5__::func_132(&Local_120) || __LIB_0__::func_78(&(Local_120.f_958)) > 0))
			{
				__LIB_7__::func_446(&Local_120, __LIB_2__::func_27(&Local_120, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && __LIB_5__::func_204(&Local_120)) && __LIB_2__::func_27(&Local_120, 65536))
			{
				__LIB_7__::func_446(&Local_120, 1);
			}
		}
		if (__LIB_4__::func_721(&Local_120) >= 3 && __LIB_4__::func_721(&Local_120) <= 7)
		{
			__LIB_5__::func_525(&Local_120);
		}
		if (((((__LIB_4__::func_721(&Local_120) >= 5 && __LIB_4__::func_721(&Local_120) <= 7) && !__LIB_2__::func_27(&Local_120, 4096)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_120.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_120.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_120.f_428.f_444))
		{
			MemCopy(&Var1, {__LIB_4__::func_681(Local_120)}, 4);
			func_13(Var1, &(Local_120.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (__LIB_4__::func_721(&Local_120))
		{
			case 8:
				if (__LIB_9__::func_490(&Local_120))
				{
					__LIB_5__::func_536(&Local_120);
					__LIB_0__::func_0(&Local_120);
					__LIB_4__::func_722(&Local_120, 0);
				}
				else if (!__LIB_5__::func_204(&Local_120))
				{
					if (!__LIB_0__::func_75(&(Local_120.f_2899)))
					{
						__LIB_1__::func_283(&(Local_120.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_120))
					{
						if (__LIB_0__::func_264(&(Local_120.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_120.f_2889, 2097152);
							__LIB_5__::func_174(&Local_120);
							__LIB_5__::func_608(&Local_120);
							__LIB_4__::func_722(&Local_120, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_120, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_120, 536870912);
						}
						__LIB_1__::func_148(&(Local_120.f_2899));
					}
				}
				break;
			case 0:
				if (__LIB_5__::func_204(&Local_120))
				{
					__LIB_0__::func_0(&Local_120);
				}
				if (!__LIB_5__::func_204(&Local_120) || __LIB_2__::func_27(&Local_120, 65536))
				{
					if (func_27(&Local_120))
					{
						__LIB_4__::func_722(&Local_120, 1);
					}
				}
				break;
			case 1:
				if (__LIB_5__::func_204(&Local_120))
				{
					__LIB_0__::func_0(&Local_120);
				}
				if (func_28(&Local_120))
				{
					__LIB_4__::func_722(&Local_120, 2);
				}
				break;
			case 2:
				if (__LIB_5__::func_204(&Local_120))
				{
					__LIB_0__::func_0(&Local_120);
				}
				if (func_29(&Local_120))
				{
					if (!__LIB_5__::func_132(&Local_120) || __LIB_5__::func_204(&Local_120))
					{
						if (!__LIB_0__::func_79(Local_120.f_2889))
						{
							Local_120.f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(Local_120));
						}
						__LIB_1__::func_109(Local_120.f_2889, 4);
						__LIB_5__::func_410(&Local_120, 8192);
					}
					if (__LIB_5__::func_204(&Local_120))
					{
						__LIB_5__::func_175(&Local_120);
						__LIB_4__::func_722(&Local_120, 9);
					}
					else
					{
						__LIB_4__::func_722(&Local_120, 3);
					}
				}
				break;
			case 9:
				if (__LIB_0__::func_0(&Local_120))
				{
					__LIB_0__::func_11(&Local_120);
					__LIB_5__::func_536(&Local_120);
					__LIB_11__::func_113(&Local_120);
					if (!__LIB_2__::func_27(&Local_120, 256))
					{
						func_36(&Local_120);
						__LIB_5__::func_227(Local_120);
						func_38(&Local_120);
						__LIB_4__::func_722(&Local_120, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_120, 5);
					}
				}
				break;
			case 3:
				if (!__LIB_2__::func_27(&Local_120, 8192))
				{
					if (__LIB_0__::func_78(&(Local_120.f_958)) == 3)
					{
						__LIB_1__::func_109(Local_120.f_2889, 4);
						__LIB_5__::func_410(&Local_120, 8192);
					}
				}
				func_39(&Local_120);
				if (__LIB_3__::func_919(__LIB_0__::func_80(Global_1835011[Local_120 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&Local_120) || __LIB_5__::func_176(&Local_120, 32768))
				{
					__LIB_0__::func_11(&Local_120);
					__LIB_5__::func_536(&Local_120);
					__LIB_4__::func_722(&Local_120, 4);
					__LIB_1__::func_283(&(Local_120.f_2890), 0);
				}
				else if (__LIB_5__::func_204(&Local_120) && !__LIB_5__::func_203(Local_120))
				{
					if (!__LIB_0__::func_75(&(Local_120.f_2899)))
					{
						__LIB_1__::func_283(&(Local_120.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_120))
					{
						if (__LIB_0__::func_264(&(Local_120.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_120.f_2889, 2097152);
							__LIB_5__::func_174(&Local_120);
							__LIB_5__::func_608(&Local_120);
							__LIB_4__::func_722(&Local_120, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_120, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_120, 536870912);
						}
						__LIB_1__::func_148(&(Local_120.f_2899));
					}
				}
				break;
			case 4:
				func_43(&Local_120);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (func_44(&Local_120) || (__LIB_5__::func_176(&Local_120, 32768) && !__LIB_2__::func_27(&Local_120, 268435456)))
				{
					__LIB_11__::func_113(&Local_120);
					if (!__LIB_2__::func_27(&Local_120, 256))
					{
						func_36(&Local_120);
						func_38(&Local_120);
						if (!__LIB_0__::func_1(Global_1935630, 524288) || __LIB_5__::func_176(&Local_120, 524288))
						{
							__LIB_5__::func_227(Local_120);
							__LIB_4__::func_722(&Local_120, 7);
						}
						else
						{
							__LIB_4__::func_722(&Local_120, 6);
						}
					}
					else
					{
						__LIB_5__::func_227(Local_120);
						__LIB_4__::func_722(&Local_120, 5);
					}
				}
				break;
			case 5:
				__LIB_0__::func_11(&Local_120);
				__LIB_5__::func_526(&Local_120);
				if (__LIB_0__::func_265(&(Local_120.f_2884)) >= __LIB_4__::func_723(&Local_120))
				{
					func_36(&Local_120);
					func_38(&Local_120);
					__LIB_1__::func_148(&(Local_120.f_2884));
					if (!__LIB_5__::func_176(&Local_120, 524288))
					{
						__LIB_5__::func_227(Local_120);
						__LIB_4__::func_722(&Local_120, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_120, 6);
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75(&(Local_120.f_2906)))
				{
					__LIB_1__::func_283(&(Local_120.f_2906), 0);
				}
				if ((__LIB_0__::func_81(&(Local_120.f_428)) == 4 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_120.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_120.f_428.f_444))
				{
					__LIB_5__::func_227(Local_120);
					__LIB_4__::func_722(&Local_120, 7);
				}
				else if (__LIB_0__::func_265(&(Local_120.f_2906)) >= 5f)
				{
					__LIB_5__::func_227(Local_120);
					__LIB_4__::func_722(&Local_120, 7);
				}
				break;
			case 7:
				__LIB_0__::func_11(&Local_120);
				if (__LIB_5__::func_530(&Local_120))
				{
					__LIB_4__::func_722(&Local_120, 10);
				}
				break;
			case 10:
				if (func_3(&Local_120, 0))
				{
					__LIB_5__::func_410(&Local_120, 1);
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
	__LIB_9__::func_389(iParam0);
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
	if (!func_137())
	{
		return false;
	}
	if (!func_138(iParam0))
	{
		return false;
	}
	if (!func_139(iParam0))
	{
		return false;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_48, "pl_base");
	ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_48, "pl_leadin");
	ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_48, "pl_wave1");
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_48, "pl_base"))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_48, "pl_leadin"))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_48, "pl_wave1"))
	{
		return false;
	}
	func_140(-1, 1);
	func_141(iParam0);
	__LIB_2__::func_231(uLocal_43[1], joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	__LIB_2__::func_231(uLocal_43[2], joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	func_143(iParam0);
	func_144();
	uLocal_34 = __LIB_1__::func_391(iLocal_27, 0, 0, 0);
	uLocal_35 = __LIB_1__::func_391(iLocal_29, 0, 0, 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_47);
	func_146();
	fLocal_50 = 0.5f;
	return true;
}

void func_36(int iParam0)
{
	__LIB_1__::func_948(1514359658, 0, 0, 0, 1, 0, 0, 0);
	OBJECT::_0xA93F925F1942E434(1821044729, 0);
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
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_41, 0, 1);
	if (__LIB_0__::func_266(Global_35, func_158(0, 11), 30f, 1, 1))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
		{
			if (WEAPON::_0x705BE297EEBDB95D(iVar0) && PED::IS_PED_SHOOTING(Global_35))
			{
				__LIB_0__::func_267(1);
				LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_LAW_IS_THREATENED"), 0, 0, true);
				return 0;
			}
		}
	}
	if (__LIB_0__::func_393(Global_35, iLocal_28, 0, 1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !__LIB_0__::func_163(Global_35, -828834893))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
			return 0;
		}
	}
	if (__LIB_0__::func_393(Global_35, iLocal_28, 0, 1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Global_35) && !__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			__LIB_0__::func_267(1);
			LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_LAW_IS_THREATENED"), 0, 0, true);
			return 0;
		}
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_33, true, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		if (PED::IS_PED_ON_MOUNT(Global_35) && !__LIB_0__::func_163(Global_35, 501393341))
		{
			TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
		}
	}
	if (!bLocal_40)
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_27, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_28, true, 0))
		{
			__LIB_5__::func_511(3);
			bLocal_40 = true;
		}
	}
	if (!OBJECT::_0x4D8611DFE1126478(1821044729))
	{
		OBJECT::_0xA93F925F1942E434(1821044729, 1);
	}
	if (!bLocal_38)
	{
		if (__LIB_1__::func_205(Global_35, iLocal_28, 1, 0) && !__LIB_1__::func_205(Global_35, iParam0->f_423, 1, 0))
		{
			__LIB_9__::func_72(*iParam0, "UTP1_MCS_1");
			__LIB_0__::func_108(&(iParam0->f_428));
			__LIB_4__::func_750(&(iParam0->f_428));
			__LIB_4__::func_727(iParam0, 8);
			__LIB_4__::func_734(&(iParam0->f_428));
			Global_1835011[*iParam0 /*74*/].f_18 = { func_158(0, 8) };
			bLocal_38 = true;
		}
	}
	else if (!__LIB_1__::func_205(Global_35, iLocal_28, 1, 0))
	{
		__LIB_9__::func_72(*iParam0, "UTP1_INT");
		__LIB_0__::func_108(&(iParam0->f_428));
		__LIB_4__::func_750(&(iParam0->f_428));
		__LIB_4__::func_727(iParam0, 8);
		__LIB_4__::func_734(&(iParam0->f_428));
		Global_1835011[*iParam0 /*74*/].f_18 = { func_158(0, 9) };
		bLocal_38 = false;
	}
	if (__LIB_0__::func_266(Global_35, func_158(0, 11), 5f, 1, 1))
	{
		__LIB_3__::func_815(0, 1065353216 /* Float: 1f */);
	}
	return 0;
}

bool func_41(int iParam0)
{
	if (!bLocal_38)
	{
		if (__LIB_0__::func_266(Global_35, func_158(0, 11), 1f, 1, 1))
		{
			if (__LIB_17__::func_580())
			{
				__LIB_1__::func_148(&uLocal_57);
				return true;
			}
		}
	}
	else
	{
		func_169();
		if (func_170())
		{
			func_171();
			func_172();
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
			return true;
		}
	}
	return false;
}

void func_43(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_43[0]))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_43[1]))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_43[2]))
	{
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_428.f_13[iVar0 /*12*/]))
		{
			if (ITEMSET::IS_ITEMSET_VALID(Global_43616))
			{
				if (ITEMSET::IS_IN_ITEMSET(iParam0->f_428.f_13[iVar0 /*12*/], Global_43616))
				{
				}
			}
		}
		iVar0++;
	}
}

bool func_44(int iParam0)
{
	if (!bLocal_38)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		if (!__LIB_17__::func_580() && __LIB_1__::func_285(&uLocal_57, 2f))
		{
			return true;
		}
	}
	else
	{
		__LIB_17__::func_581(340f, -70f, 70f);
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_48, false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_48, false))
		{
			return true;
		}
	}
	return false;
}

bool func_53(int iParam0)
{
	__LIB_0__::func_484(&uLocal_34, iLocal_27, 0);
	__LIB_0__::func_484(&uLocal_35, iLocal_29, 0);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	MAP::DISPLAY_RADAR(true);
	if (!__LIB_2__::func_27(iParam0, 1024))
	{
		if (__LIB_0__::func_272(iLocal_41, 0))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_41, true, true);
			TASK::TASK_COWER(iLocal_41, -1, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_41, true);
			PED::SET_PED_KEEP_TASK(iLocal_41, true);
			__LIB_5__::func_534(iParam0, 6, iLocal_41, 0, 0, 0, 0);
		}
		__LIB_2__::func_426(&(uLocal_43[0]));
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_43[1], "0979_S_M_M_AmbientLawRural_White_02");
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_43[2], "0981_S_M_M_AmbientLawRural_White_04");
		__LIB_2__::func_788(&(uLocal_43[1]), 1, 0, 1);
		__LIB_2__::func_788(&(uLocal_43[2]), 1, 0, 1);
		__LIB_11__::func_571(472, 0, 0);
	}
	else
	{
		__LIB_2__::func_426(&(uLocal_43[0]));
		__LIB_2__::func_426(&(uLocal_43[1]));
		__LIB_2__::func_426(&(uLocal_43[2]));
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_47))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_47);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_48))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_48);
	}
	__LIB_1__::func_948(902070893, 1, 0, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(1821044729, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(1514359658, 0, 0, 0, 1, 0, 0, 0);
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
		func_248(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_749(uParam0, 0f, 0f, 0f);
		func_250(uParam0);
		func_251(uParam0);
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
	func_282();
	func_283();
	__LIB_1__::func_948(1514359658, 1, 0, 0, 0, 0, 0, 0);
	__LIB_9__::func_72(*iParam0, "UTP1_INT");
	func_284(iParam0, func_158(0, 0));
	__LIB_0__::func_803(1399676951);
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
	return func_293(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

bool func_137()
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("CS_STRSHERIFF_01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("CS_STRDEPUTY_01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("CS_STRDEPUTY_02")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("CS_UNIDUSTERJAIL_01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CHAIR24X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_WOODENCHAIR01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_LETTER01A_X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_PEN01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_DOOR37X")))
	{
		return false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("UTP1AUD"))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_47, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_48, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_48, "pl_leadin"))
	{
		return false;
	}
	STREAMING::_REQUEST_IMAP(joaat("DES_STR_JAIL"));
	if (!STREAMING::_IS_IMAP_ACTIVE(joaat("DES_STR_JAIL")))
	{
		return false;
	}
	STREAMING::_REQUEST_IMAP(joaat("DES_STR_JAIL_EXP"));
	if (!STREAMING::_IS_IMAP_ACTIVE(joaat("DES_STR_JAIL_EXP")))
	{
		return false;
	}
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_36))
	{
		iLocal_36 = OBJECT::GET_RAYFIRE_MAP_OBJECT(func_158(0, 10), 1f, "des_str_jail");
		return false;
	}
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_37))
	{
		iLocal_37 = OBJECT::GET_RAYFIRE_MAP_OBJECT(func_158(0, 10), 1f, "des_str_jail_exp");
		return false;
	}
	OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_36, 2);
	OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_37, 2);
	return true;
}

bool func_138(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_43[0]))
	{
		if (__LIB_8__::func_783(472))
		{
			func_297(0, 1);
			uLocal_43[0] = Local_14.f_3[0];
			TASK::TASK_STAND_STILL(uLocal_43[0], -1);
			__LIB_5__::func_183(iParam0, uLocal_43[0], 0);
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_43[1]))
	{
		func_297(1, 1);
		uLocal_43[1] = Local_14.f_3[1];
		TASK::TASK_STAND_STILL(uLocal_43[1], -1);
		__LIB_5__::func_183(iParam0, uLocal_43[1], 0);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_43[2]))
	{
		func_297(2, 1);
		uLocal_43[2] = Local_14.f_3[2];
		TASK::TASK_STAND_STILL(uLocal_43[2], -1);
		__LIB_5__::func_183(iParam0, uLocal_43[2], 0);
		return false;
	}
	return true;
}

bool func_139(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_41))
	{
		iLocal_41 = __LIB_9__::func_216(iParam0);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_42))
	{
		iLocal_42 = __LIB_1__::func_545(joaat("CS_UNIDUSTERJAIL_01"), func_158(0, 4), 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_42, true);
		__LIB_5__::func_183(iParam0, iLocal_42, 0);
		__LIB_11__::func_46(iParam0, iLocal_42, 1);
		return false;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_41) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_42))
	{
		return false;
	}
	PED::_SET_PED_BODY_COMPONENT(iLocal_41, -309158751);
	PED::_UPDATE_PED_VARIATION(iLocal_41, false, true, true, true, false);
	func_303(iLocal_41, func_302(0, 0), 2, 1073741824 /* Float: 2f */);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_41, true);
	return true;
}

void func_140(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14.f_7))
	{
		Local_14.f_7 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_8[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_8[0] = OBJECT::CREATE_OBJECT(joaat("P_CS_LETTER01A_X"), -1811.359f, -354.4061f, 164.4462f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_8[0], 0f, 0f, 54.4556f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_8[0], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_8[0], Local_14);
	__LIB_5__::func_510(Local_14.f_8[0], Local_14.f_7);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_8[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_8[1] = OBJECT::CREATE_OBJECT(joaat("P_PEN01X"), -1811.359f, -354.4061f, 164.4462f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_8[1], 0f, 0f, 54.4556f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_8[1], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_8[1], Local_14);
	__LIB_5__::func_510(Local_14.f_8[1], Local_14.f_7);
}

void func_141(int iParam0)
{
	__LIB_5__::func_532(iParam0, Local_14.f_8[0], 0, 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, Local_14.f_8[1], 0, 0, 0, 1, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_47, "p_cs_letter01a_x", Local_14.f_8[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_47, "p_pen01x", Local_14.f_8[1], 0);
}

void func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	__LIB_5__::func_609(iParam0, Global_35, 0, 0, 0, 1);
	__LIB_5__::func_609(iParam0, uLocal_43[0], "StrSheriff_01", 0, 0, 1);
	__LIB_5__::func_609(iParam0, uLocal_43[1], 0, 0, 0, 1);
	__LIB_5__::func_609(iParam0, uLocal_43[2], 0, 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_41, 0, 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_42, 0, 0, 0, 1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = __LIB_4__::func_770(&(iParam0->f_428), uLocal_43[iVar0]);
		if (iVar1 != -1)
		{
			__LIB_0__::func_143(&(iParam0->f_428.f_13[iVar1 /*12*/]), 8);
		}
		iVar0++;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_47, "strsheriff_01", uLocal_43[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_47, "strdeputy_01", uLocal_43[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_47, "strdeputy_02", uLocal_43[2], 0);
}

void func_144()
{
	__LIB_4__::func_389(1821044729, 1, 0);
	OBJECT::_0xA93F925F1942E434(1821044729, 1);
}

void func_146()
{
	if (!__LIB_0__::func_272(iLocal_41, 0))
	{
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_48, false))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_48, __LIB_0__::func_731(iLocal_41), iLocal_41, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_48, __LIB_0__::func_731(Global_35), Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(iLocal_48);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_48, "pl_base", true);
	}
}

Vector3 func_158(int iParam0, int iParam1)
{
	return func_329(iParam0, iParam1);
}

void func_169()
{
	if (__LIB_17__::func_582(Global_35, &uLocal_30))
	{
		__LIB_1__::func_283(&uLocal_51, 0);
		if (__LIB_1__::func_285(&uLocal_51, fLocal_50))
		{
			func_335();
			__LIB_1__::func_148(&uLocal_51);
			fLocal_50 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 20f);
		}
	}
	else
	{
		__LIB_0__::func_37(&uLocal_51);
	}
}

bool func_170()
{
	vector3 vVar0;
	float fVar3;
	var uVar4;
	if (bLocal_39)
	{
		return true;
	}
	vVar0 = { -1814.309f, -355.8114f, 161.8394f };
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_33, true, 0))
	{
		return false;
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		fVar3 = __LIB_0__::func_152(Global_36, vVar0, 1);
		if (MISC::ABSF((fVar3 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 195, true);
	}
	if (__LIB_0__::func_266(Global_35, vVar0, 4f, 1, 1) && iLocal_49 < 2)
	{
		__LIB_1__::func_283(&uLocal_54, 0);
		if (__LIB_1__::func_285(&uLocal_54, 5f) && PED::IS_PED_ON_FOOT(Global_35))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_41, 297, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_41, 130, false);
			MISC::_0xE98D55C5983F2509(iLocal_41);
			__LIB_17__::func_584(iLocal_33, -1804.193f, -367.624f, 160.6708f, 1094713344 /* Float: 12f */);
			iLocal_26 = 0;
			iLocal_49 = 2;
		}
	}
	else
	{
		__LIB_0__::func_37(&uLocal_54);
	}
	ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_48, "ARTHUR", &uVar4, true, "pl_leadin", 2);
	if (iLocal_49 >= 2)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		__LIB_0__::func_573();
		__LIB_4__::func_614();
		if (__LIB_0__::func_102())
		{
			__LIB_1__::func_26(1);
		}
	}
	switch (iLocal_49)
	{
		case 0:
			if (!__LIB_1__::func_502(&(Local_84[0 /*17*/])))
			{
				__LIB_3__::func_157(&(Local_84[0 /*17*/]), "INTERACT_GREET", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_3__::func_157(&(Local_84[1 /*17*/]), "INTERACT_INSULT", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			}
			else
			{
				iLocal_49++;
			}
			break;
		case 1:
			iLocal_119 = func_342(&iLocal_41, &iLocal_63, 4f, &Local_84, 0.25f, 3, 1, 0, -2147448550, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (iLocal_119 == 0 || iLocal_119 == 1)
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_41, 297, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_41, 130, false);
				MISC::_0xE98D55C5983F2509(iLocal_41);
				__LIB_17__::func_584(iLocal_33, -1804.193f, -367.624f, 160.6708f, 1094713344 /* Float: 12f */);
				iLocal_26 = 0;
				iLocal_49++;
			}
			else if ((MISC::GET_FRAME_COUNT() % 30) == 0)
			{
			}
			break;
		case 2:
			if (func_343(Global_35, 0f, 0f, 0f))
			{
				iLocal_25 = 0;
				func_344();
				iLocal_49++;
			}
			break;
		case 3:
			if (func_345(Global_35, 1))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4992, false);
				}
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_48, "ARTHUR", "pl_leadin", 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
				iLocal_49++;
			}
			break;
		case 4:
			if (__LIB_0__::func_163(Global_35, 1369124074))
			{
				iLocal_49++;
			}
			break;
		case 5:
			__LIB_17__::func_581(340f, -70f, 70f);
			if (ANIMSCENE::_0x337F1CC8EE895601(iLocal_48, "ARTHUR"))
			{
				bLocal_39 = true;
				return true;
			}
			break;
	}
	return false;
}

void func_171()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_48, false))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_48, "pl_leadin", true);
	}
}

void func_172()
{
	if (__LIB_17__::func_583(&uLocal_43, 0))
	{
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_43[0], func_158(0, 1), 1f, 0, true, false, true, false);
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_43[1], func_158(0, 2), 1f, 0, true, false, true, false);
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_43[2], func_158(0, 3), 1f, 0, true, false, true, false);
	}
}

void func_248(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_428();
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

void func_250(var uParam0)
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
			func_439(iVar1, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_439(iVar3, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_251(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_760(uParam0) };
			func_439(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_282()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_27))
	{
		__LIB_3__::func_557(&iLocal_27, -1805.354f, -353.0859f, 163.15f, 0f, 0f, 65.119f, 16.44836f, 19.15174f, 10f, "utp1_intro_blocking");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_28))
	{
		__LIB_3__::func_557(&iLocal_28, -1812.762f, -359.5283f, 163.0517f, 0f, 0f, 40.89381f, 10.82757f, 24.3779f, 7.587945f, "utp1_mcs_trigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_29))
	{
		__LIB_3__::func_557(&iLocal_29, -1814.113f, -359.8008f, 161.4632f, 0f, 0f, 1.103073f, 12.24317f, 11.89774f, 7.783409f, "utp1_mcs_blocking");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_30[0]))
	{
		__LIB_3__::func_557(&(uLocal_30[0]), -1814.309f, -355.8114f, 161.8394f, 0f, 0f, -25.86975f, 3.000784f, 5.45737f, 1.206776f, "utp1_mcs1_leadin_0");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_30[1]))
	{
		__LIB_3__::func_557(&(uLocal_30[1]), -1813.314f, -359.3986f, 161.8394f, 0f, 0f, 58.50481f, 2.62802f, 4.697586f, 1.206776f, "utp1_mcs1_leadin_1");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_33))
	{
		__LIB_3__::func_557(&iLocal_33, -1815.495f, -359.2792f, 162.0097f, 0f, 0f, 155.5356f, 10.50229f, 6.536135f, 3.89862f, "MicahCallsPlayer");
	}
}

void func_283()
{
	STREAMING::REQUEST_MODEL(joaat("CS_STRSHERIFF_01"), false);
	STREAMING::REQUEST_MODEL(joaat("CS_STRDEPUTY_01"), false);
	STREAMING::REQUEST_MODEL(joaat("CS_STRDEPUTY_02"), false);
	STREAMING::REQUEST_MODEL(joaat("CS_UNIDUSTERJAIL_01"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CHAIR24X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_WOODENCHAIR01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_LETTER01A_X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_PEN01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_DOOR37X"), false);
	HUD::_TEXT_DATABASE_REQUEST("UTP1AUD");
	iLocal_47 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@utp1@leadin@int@base", 0, 0, false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_47);
	iLocal_48 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@utp1@LEADIN@MCS_1@Leadin_Playlists", 0, 0, false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_48);
	ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_48, "pl_leadin");
}

void func_284(int iParam0, vector3 vParam1)
{
	iParam0->f_2903 = { vParam1 };
}

int func_293(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
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
	*uParam2 = func_506(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
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

int func_297(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_1))
	{
		Local_14.f_1 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_1), 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_3[0] = __LIB_1__::func_545(joaat("CS_STRSHERIFF_01"), -1812.515f, -353.4188f, 164.6478f, 250.2173f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[0], "Sheriff");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[0]);
		__LIB_5__::func_510(Local_14.f_3[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_3[1] = __LIB_1__::func_545(joaat("CS_STRDEPUTY_01"), -1810.138f, -351.8336f, 164.6926f, 240.8248f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[1], "Deputy01");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[1]);
		__LIB_5__::func_510(Local_14.f_3[1], Local_14);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_3[2] = __LIB_1__::func_545(joaat("CS_STRDEPUTY_02"), -1809.937f, -349.1655f, 164.6926f, 240.8237f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[2], "Deputy02");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[2]);
		__LIB_5__::func_510(Local_14.f_3[2], Local_14);
		if (bParam1)
		{
			if (iParam0 == 2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_1), 1);
	return 1;
}

struct<4> func_302(int iParam0, int iParam1)
{
	return func_518(iParam0, iParam1);
}

void func_303(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_439(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

Vector3 func_329(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1814.2f, -355.52f, 160.4482f;
				case 1:
					return -1811.918f, -354.1687f, 164.0978f;
				case 2:
					return -1808.337f, -353.0742f, 164.0971f;
				case 3:
					return -1806.914f, -348.0163f, 164.1479f;
				case 4:
					return -1812.143f, -356.3072f, 160.466f;
				case 5:
					return -1806.298f, -351.1466f, 164.8978f;
				case 6:
					return -1811.941f, -354.215f, 163.68f;
				case 7:
					return -1806.911f, -348.029f, 163.68f;
				case 8:
					return -1814.471f, -356.0551f, 161.7829f;
				case 9:
					return -1804.762f, -351.7945f, 163.1185f;
				case 10:
					return -1814.709f, -355.8573f, 162.3465f;
				case 11:
					return -1806.751f, -350.766f, 164.6073f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_335()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_48, false))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_48, "pl_wave1", true);
	}
}

int func_342(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0));
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_1__::func_148(&(iParam1->f_13));
		}
		if (__LIB_4__::func_231(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_10__::func_887(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_342(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_1__::func_480(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*iParam0, 317, true))
						{
							__LIB_1__::func_488(*iParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*iParam0, 0, 1);
					}
				}
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_8__::func_963(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_10__::func_888(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									__LIB_1__::func_490(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					__LIB_2__::func_361(iParam1, uParam3, fVar8);
					if (__LIB_2__::func_589(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (__LIB_6__::func_743(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_10__::func_888(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
					}
					__LIB_1__::func_491(iParam1, 1);
				}
				__LIB_2__::func_361(iParam1, uParam3, fVar8);
				if (__LIB_6__::func_743(iParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			__LIB_2__::func_593(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_343(int iParam0, vector3 vParam1)
{
	int iVar0;
	switch (iLocal_26)
	{
		case 0:
			iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iLocal_26 = 3;
			}
			else
			{
				if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
				{
					vParam1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
				}
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iParam0, iVar0, vParam1, 1f, 0);
				iLocal_26 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_163(iParam0, -208384378))
			{
				iLocal_26 = 2;
			}
			break;
		case 2:
			if (!__LIB_0__::func_163(iParam0, -208384378))
			{
				iLocal_26 = 3;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_344()
{
	TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_41, -1, 0, 51, 0);
	if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	}
}

bool func_345(int iParam0, bool bParam1)
{
	switch (iLocal_25)
	{
		case 0:
			if (__LIB_17__::func_572(iParam0))
			{
				iLocal_25 = 3;
			}
			else
			{
				WEAPON::_0x94A3C1B804D291EC(iParam0, 1, 0, 1, 0);
				__LIB_1__::func_283(&uLocal_60, 0);
				iLocal_25 = 1;
			}
			break;
		case 1:
			if (bParam1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4992, false);
			}
			iLocal_25 = 2;
			break;
		case 2:
			if (__LIB_1__::func_285(&uLocal_60, 1.5f))
			{
				iLocal_25 = 3;
				__LIB_0__::func_37(&uLocal_60);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_428()
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
	iVar0 = func_604(6291456, 0);
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

void func_439(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_439(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_439(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_506(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_439(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

struct<4> func_518(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_329(iParam0, iParam1) };
	Var0.f_3 = func_669(iParam0, iParam1);
	return Var0;
}

int func_604(int iParam0, int iParam1)
{
	var uVar0;
	return func_717(&uVar0, iParam0, iParam1);
}

float func_669(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 153.34f;
				case 1:
					return 246.7679f;
				case 2:
					return 67.8701f;
				case 3:
					return 133.4862f;
				case 4:
					return -22.426f;
				case 5:
					return 249.4862f;
				case 6:
					return 110f;
				case 7:
					return 319.4862f;
				case 8:
					return 0f;
				case 9:
					return 0f;
				case 10:
					return 0f;
				case 11:
					return -26f;
			}
			break;
	}
	return 0f;
}

int func_717(var uParam0, int iParam1, int iParam2)
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
		return func_717(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

