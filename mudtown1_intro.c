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
	struct<8> Local_14 = { 0, 0, 0, 1, 0, 0, 0, 5 } ;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 5;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 1;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 6;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	bool bLocal_49 = false;
	int iLocal_50 = 0;
	struct<6> Local_51[21];
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	vector3 vLocal_182 = { 0f, 0f, 0f };
	float fLocal_185 = 0f;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	bool bLocal_191 = false;
	bool bLocal_192 = false;
	struct<2907> Local_193 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
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
	iLocal_186 = joaat("PG_MISSION_MUD1_WAGON02X");
	iLocal_187 = joaat("PG_MISSION_MUD1_WAGON01X");
	iLocal_188 = joaat("PG_MISSION_MUD1_WAGON03X");
	iLocal_189 = joaat("PG_MIS_MUD1_WAGON02X");
	iLocal_190 = joaat("PG_MISSION_MUD1_JACKWAGON01X");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (__LIB_5__::func_203(Local_193))
		{
			__LIB_0__::func_8(&Global_1935630, 32768);
		}
		func_3(&Local_193, 1);
	}
	__LIB_5__::func_610(&uScriptParam_0, &Local_193);
	while (!__LIB_2__::func_27(&Local_193, 1))
	{
		if (__LIB_4__::func_721(&Local_193) != 10)
		{
			if ((__LIB_4__::func_721(&Local_193) == 3 || __LIB_4__::func_721(&Local_193) == 4) && (!__LIB_5__::func_132(&Local_193) || __LIB_0__::func_78(&(Local_193.f_958)) > 0))
			{
				func_9(&Local_193, __LIB_2__::func_27(&Local_193, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && __LIB_5__::func_204(&Local_193)) && __LIB_2__::func_27(&Local_193, 65536))
			{
				func_9(&Local_193, 1);
			}
		}
		if (__LIB_4__::func_721(&Local_193) >= 3 && __LIB_4__::func_721(&Local_193) <= 7)
		{
			__LIB_5__::func_525(&Local_193);
		}
		if (((((__LIB_4__::func_721(&Local_193) >= 5 && __LIB_4__::func_721(&Local_193) <= 7) && !__LIB_2__::func_27(&Local_193, 4096)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_193.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_193.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_193.f_428.f_444))
		{
			MemCopy(&Var1, {__LIB_4__::func_681(Local_193)}, 4);
			func_13(Var1, &(Local_193.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (__LIB_4__::func_721(&Local_193))
		{
			case 8:
				if (__LIB_9__::func_490(&Local_193))
				{
					__LIB_5__::func_536(&Local_193);
					__LIB_0__::func_0(&Local_193);
					__LIB_4__::func_722(&Local_193, 0);
				}
				else if (!__LIB_5__::func_204(&Local_193))
				{
					if (!__LIB_0__::func_75(&(Local_193.f_2899)))
					{
						__LIB_1__::func_283(&(Local_193.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_193))
					{
						if (__LIB_0__::func_264(&(Local_193.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_193.f_2889, 2097152);
							__LIB_5__::func_174(&Local_193);
							__LIB_5__::func_608(&Local_193);
							__LIB_4__::func_722(&Local_193, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_193, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_193, 536870912);
						}
						__LIB_1__::func_148(&(Local_193.f_2899));
					}
				}
				break;
			case 0:
				if (__LIB_5__::func_204(&Local_193))
				{
					__LIB_0__::func_0(&Local_193);
				}
				if (!__LIB_5__::func_204(&Local_193) || __LIB_2__::func_27(&Local_193, 65536))
				{
					if (func_27(&Local_193))
					{
						__LIB_4__::func_722(&Local_193, 1);
					}
				}
				break;
			case 1:
				if (__LIB_5__::func_204(&Local_193))
				{
					__LIB_0__::func_0(&Local_193);
				}
				if (func_28(&Local_193))
				{
					__LIB_4__::func_722(&Local_193, 2);
				}
				break;
			case 2:
				if (__LIB_5__::func_204(&Local_193))
				{
					__LIB_0__::func_0(&Local_193);
				}
				if (func_29(&Local_193))
				{
					if (!__LIB_5__::func_132(&Local_193) || __LIB_5__::func_204(&Local_193))
					{
						if (!__LIB_0__::func_79(Local_193.f_2889))
						{
							Local_193.f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(Local_193));
						}
						__LIB_1__::func_109(Local_193.f_2889, 4);
						__LIB_5__::func_410(&Local_193, 8192);
					}
					if (__LIB_5__::func_204(&Local_193))
					{
						__LIB_5__::func_175(&Local_193);
						__LIB_4__::func_722(&Local_193, 9);
					}
					else
					{
						__LIB_4__::func_722(&Local_193, 3);
					}
				}
				break;
			case 9:
				if (__LIB_0__::func_0(&Local_193))
				{
					__LIB_0__::func_11(&Local_193);
					__LIB_5__::func_536(&Local_193);
					__LIB_6__::func_926(&Local_193);
					if (!__LIB_2__::func_27(&Local_193, 256))
					{
						func_36(&Local_193);
						__LIB_5__::func_227(Local_193);
						func_38(&Local_193);
						__LIB_4__::func_722(&Local_193, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_193, 5);
					}
				}
				break;
			case 3:
				if (!__LIB_2__::func_27(&Local_193, 8192))
				{
					if (__LIB_0__::func_78(&(Local_193.f_958)) == 3)
					{
						__LIB_1__::func_109(Local_193.f_2889, 4);
						__LIB_5__::func_410(&Local_193, 8192);
					}
				}
				__LIB_0__::func_11(&Local_193);
				if (__LIB_3__::func_919(__LIB_0__::func_80(Global_1835011[Local_193 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&Local_193) || __LIB_5__::func_176(&Local_193, 32768))
				{
					__LIB_0__::func_11(&Local_193);
					__LIB_5__::func_536(&Local_193);
					__LIB_4__::func_722(&Local_193, 4);
					__LIB_1__::func_283(&(Local_193.f_2890), 0);
				}
				else if (__LIB_5__::func_204(&Local_193) && !__LIB_5__::func_203(Local_193))
				{
					if (!__LIB_0__::func_75(&(Local_193.f_2899)))
					{
						__LIB_1__::func_283(&(Local_193.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_193))
					{
						if (__LIB_0__::func_264(&(Local_193.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_193.f_2889, 2097152);
							__LIB_5__::func_174(&Local_193);
							__LIB_5__::func_608(&Local_193);
							__LIB_4__::func_722(&Local_193, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_193, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_193, 536870912);
						}
						__LIB_1__::func_148(&(Local_193.f_2899));
					}
				}
				break;
			case 4:
				__LIB_0__::func_11(&Local_193);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (func_44(&Local_193) || (__LIB_5__::func_176(&Local_193, 32768) && !__LIB_2__::func_27(&Local_193, 268435456)))
				{
					__LIB_6__::func_926(&Local_193);
					if (!__LIB_2__::func_27(&Local_193, 256))
					{
						func_36(&Local_193);
						func_38(&Local_193);
						if (!__LIB_0__::func_1(Global_1935630, 524288) || __LIB_5__::func_176(&Local_193, 524288))
						{
							__LIB_5__::func_227(Local_193);
							__LIB_4__::func_722(&Local_193, 7);
						}
						else
						{
							__LIB_4__::func_722(&Local_193, 6);
						}
					}
					else
					{
						__LIB_5__::func_227(Local_193);
						__LIB_4__::func_722(&Local_193, 5);
					}
				}
				break;
			case 5:
				__LIB_0__::func_11(&Local_193);
				func_47(&Local_193);
				if (__LIB_0__::func_265(&(Local_193.f_2884)) >= __LIB_4__::func_723(&Local_193))
				{
					func_36(&Local_193);
					func_38(&Local_193);
					__LIB_1__::func_148(&(Local_193.f_2884));
					if (!__LIB_5__::func_176(&Local_193, 524288))
					{
						__LIB_5__::func_227(Local_193);
						__LIB_4__::func_722(&Local_193, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_193, 6);
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75(&(Local_193.f_2906)))
				{
					__LIB_1__::func_283(&(Local_193.f_2906), 0);
				}
				if ((__LIB_0__::func_81(&(Local_193.f_428)) == 4 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_193.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_193.f_428.f_444))
				{
					__LIB_5__::func_227(Local_193);
					__LIB_4__::func_722(&Local_193, 7);
				}
				else if (__LIB_0__::func_265(&(Local_193.f_2906)) >= 5f)
				{
					__LIB_5__::func_227(Local_193);
					__LIB_4__::func_722(&Local_193, 7);
				}
				break;
			case 7:
				__LIB_0__::func_11(&Local_193);
				if (__LIB_5__::func_530(&Local_193))
				{
					__LIB_4__::func_722(&Local_193, 10);
				}
				break;
			case 10:
				if (func_3(&Local_193, 0))
				{
					__LIB_5__::func_410(&Local_193, 1);
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
	func_57(iParam0);
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

void func_9(int iParam0, bool bParam1)
{
	vector3 vVar0[24];
	if (!CAM::IS_SCREEN_FADED_OUT() && !__LIB_2__::func_27(iParam0, 4))
	{
		if (__LIB_0__::func_265(&(iParam0->f_2896)) <= 0.5f)
		{
			return;
		}
		__LIB_1__::func_148(&(iParam0->f_2896));
		if ((__LIB_0__::func_296(0, 0, 1) && !__LIB_2__::func_27(iParam0, 65536)) && !__LIB_3__::func_919(iParam0->f_2889, 1024))
		{
			return;
		}
	}
	if (__LIB_2__::func_27(iParam0, 128))
	{
		return;
	}
	if (__LIB_2__::func_27(iParam0, 134217728))
	{
		if (!__LIB_2__::func_27(iParam0, 16777216))
		{
			__LIB_4__::func_778(iParam0, 16);
			if (__LIB_5__::func_132(iParam0))
			{
				__LIB_6__::func_924(iParam0);
			}
			__LIB_5__::func_410(iParam0, 16777216);
		}
		cVar0 = { __LIB_4__::func_681(*iParam0) };
		if (func_77(&(iParam0->f_428), &cVar0, bParam1, 0))
		{
			if (!__LIB_3__::func_919(iParam0->f_2889, 128))
			{
				__LIB_1__::func_109(iParam0->f_2889, 128);
			}
		}
		else if (__LIB_3__::func_919(iParam0->f_2889, 128))
		{
			__LIB_4__::func_728(iParam0->f_2889, 128);
		}
	}
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
		func_84(uParam4);
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
					func_85(uParam4, &uParam0);
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
				if (func_77(uParam4, &uParam0, 1, 1))
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
					func_85(uParam4, &uParam0);
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
				func_84(uParam4);
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
			vVar3 = { func_125(&(iParam0->f_428)) };
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
	func_130(iParam0);
	func_131(iParam0, Global_35, 0, 0, 0, 1);
	__LIB_5__::func_604(iParam0);
	__LIB_5__::func_182(iParam0);
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
	func_137();
	func_9(iParam0, 1);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	if ((!__LIB_2__::func_774(3) && __LIB_1__::func_185(3)) && !__LIB_6__::func_110())
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (__LIB_0__::func_31(Local_51[iVar0 /*6*/]))
			{
				__LIB_5__::func_414(Local_51[iVar0 /*6*/], 1, 0);
			}
			iVar0++;
		}
		func_142();
		__LIB_6__::func_158(1, 1, 0);
		CLOCK::SET_CLOCK_TIME(7, 0, 0);
		CLOCK::PAUSE_CLOCK(true, 0);
		MISC::_0x3373779BAF7CAF48("snowclearing", "snowclearing_mud1");
		MISC::_SET_WEATHER_TYPE(joaat("SNOWCLEARING"), true, true, false, 0f, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("WAGON02X"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("WAGON04X"));
		return true;
	}
	return false;
}

int func_36(int iParam0)
{
	__LIB_2__::func_145(iLocal_178, 0);
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
	func_137();
	return __LIB_9__::func_489(iParam0, 256);
}

bool func_44(int iParam0)
{
	func_137();
	if (__LIB_9__::func_489(iParam0, 256))
	{
		__LIB_0__::func_8(&Global_1935630, 1048576);
		return true;
	}
	return false;
}

void func_47(int iParam0)
{
	if ((!__LIB_2__::func_27(iParam0, 33554432) && !__LIB_5__::func_176(iParam0, 524288)) && !__LIB_5__::func_176(iParam0, 32768))
	{
		if (func_155(&(iParam0->f_958)))
		{
			__LIB_5__::func_218(&(iParam0->f_958), 0, 0);
			__LIB_5__::func_410(iParam0, 33554432);
		}
	}
}

bool func_53(int iParam0)
{
	__LIB_2__::func_145(iLocal_178, 0);
	return true;
}

void func_57(int iParam0)
{
	func_161(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

bool func_77(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;
	if (bParam3)
	{
		uParam0->f_511++;
		if (uParam0->f_511 < 10)
		{
			return (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304));
		}
		uParam0->f_511 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	__LIB_4__::func_779(uParam0, sParam1);
	if (!__LIB_0__::func_84(uParam0, 64))
	{
		if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam0)))
		{
			__LIB_0__::func_88(uParam0, 64);
		}
		else
		{
			vVar0 = { func_125(uParam0) };
			if (!__LIB_0__::func_86(vVar0))
			{
				__LIB_0__::func_487(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = __LIB_0__::func_94(Global_35, __LIB_0__::func_85(uParam0), 1);
	if (__LIB_0__::func_84(uParam0, 128) || __LIB_0__::func_84(uParam0, 256))
	{
		if ((fVar3 >= __LIB_4__::func_743(uParam0) && !bParam2) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				__LIB_1__::func_436();
				uParam0->f_529 = 0;
			}
			__LIB_4__::func_744(uParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
			}
			__LIB_5__::func_186(uParam0);
			__LIB_4__::func_733(uParam0, 128, 1);
			__LIB_4__::func_733(uParam0, 256, 1);
			__LIB_4__::func_733(uParam0, 4096, 1);
			__LIB_4__::func_733(uParam0, 32768, 1);
			__LIB_4__::func_733(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= __LIB_4__::func_745(uParam0) || bParam2)
	{
		if (!__LIB_0__::func_84(uParam0, 128))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				if (__LIB_4__::func_745(uParam0) >= __LIB_4__::func_743(uParam0))
				{
				}
				Var4 = { __LIB_4__::func_746(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					__LIB_5__::func_187(uParam0);
				}
				Var4 = { __LIB_4__::func_746(uParam0) };
				iVar12 = 256;
				if (!__LIB_0__::func_84(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_444 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), iVar12, &Var4, false, true);
				__LIB_1__::func_414(uParam0, 0, 0, 0, 0);
				__LIB_0__::func_88(uParam0, 128);
			}
		}
	}
	if (__LIB_0__::func_84(uParam0, 128))
	{
		if (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304))
		{
			return true;
		}
		__LIB_5__::func_412(uParam0);
		if (!uParam0->f_529)
		{
			if (__LIB_0__::func_95())
			{
				__LIB_1__::func_36(4096);
				uParam0->f_529 = 1;
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		{
			bVar13 = true;
			Var15 = { __LIB_5__::func_185(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_462[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_462[iVar14 /*9*/].f_8)
						{
							uParam0->f_462[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_444, &(uParam0->f_462[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &(uParam0->f_462[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!__LIB_0__::func_84(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, &Var15))
				{
					if (!__LIB_0__::func_84(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_444, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_444, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_444, &Var15);
						}
						__LIB_0__::func_88(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			__LIB_0__::func_88(uParam0, 256);
			__LIB_4__::func_733(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_84(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_444, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_444)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_501, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	if ((__LIB_4__::func_781(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, func_201(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_444, func_201(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_444))
	{
		if (!__LIB_0__::func_1(uParam0->f_501, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_269(iVar1))
		{
			if (__LIB_0__::func_572(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (__LIB_0__::func_1(uParam0->f_501, 512))
	{
		bVar2 = true;
	}
	if (__LIB_4__::func_711(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_444);
		__LIB_3__::func_120();
	}
}

void func_85(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];
	if (__LIB_0__::func_81(uParam0) == 2 && (__LIB_0__::func_1(uParam0->f_500, 16384) || __LIB_0__::func_84(uParam0, 268435456)))
	{
		Var0 = { __LIB_5__::func_185(uParam0) };
		__LIB_5__::func_136(uParam0, &Var0);
	}
	__LIB_5__::func_513(uParam0, sParam1);
	if (__LIB_0__::func_84(uParam0, 131072))
	{
		__LIB_0__::func_99(uParam0, 0);
	}
	if (__LIB_0__::func_100())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		__LIB_0__::func_101();
	}
	if (__LIB_0__::func_102())
	{
		__LIB_1__::func_26(1);
	}
	__LIB_1__::func_414(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	__LIB_4__::func_747(uParam0, cVar8);
	__LIB_0__::func_722(1, 0);
	__LIB_4__::func_744(uParam0);
	if (__LIB_0__::func_103() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, func_201(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_4__::func_729(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_436);
	}
	__LIB_5__::func_398(uParam0);
	__LIB_5__::func_188(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_444);
	Global_43800 = uParam0->f_444;
	StringCopy(&Global_43802, sParam1, 24);
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
		func_224(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_749(uParam0, 0f, 0f, 0f);
		func_226(uParam0);
		func_227(uParam0);
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

Vector3 func_125(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;
	MemCopy(&uVar0, {__LIB_4__::func_752(uParam0)}, 8);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_445))
	{
		uParam0->f_445 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), 0, 0, false, true);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_445, false))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_445, func_201(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_445, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_445);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

bool func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar14;
	uLocal_48 = uLocal_48;
	func_137();
	iVar0 = 1;
	STREAMING::REQUEST_MODEL(joaat("WAGON02X"), false);
	STREAMING::REQUEST_MODEL(joaat("WAGON04X"), false);
	if ((!STREAMING::HAS_MODEL_LOADED(joaat("WAGON02X")) || !STREAMING::HAS_MODEL_LOADED(joaat("WAGON04X"))) || !func_261())
	{
		return false;
	}
	else
	{
		if (!__LIB_11__::func_385(-1, 1))
		{
			return false;
		}
		func_263(iParam0, Local_14.f_7[1], "wagon02x", 0, 0, 1, 0);
		func_263(iParam0, Local_14.f_7[2], "wagon04x^4", 0, 0, 1, 0);
		func_263(iParam0, Local_14.f_7[0], "WAGON04x^3", 0, 0, 1, 0);
		func_263(iParam0, Local_14.f_7[4], "WAGON04x^2", 0, 0, 1, 0);
		func_263(iParam0, Local_14.f_7[3], "WAGON04x^1", 0, 0, 1, 0);
		if (!bLocal_192)
		{
			func_264(Local_14.f_7[1]);
			func_264(Local_14.f_7[2]);
			func_264(Local_14.f_7[0]);
			func_264(Local_14.f_7[4]);
			func_264(Local_14.f_7[3]);
			VEHICLE::SET_VEHICLE_EXTRA(Local_14.f_7[1], 4, false);
			VEHICLE::SET_VEHICLE_EXTRA(Local_14.f_7[2], 4, false);
			VEHICLE::SET_VEHICLE_EXTRA(Local_14.f_7[3], 3, false);
			VEHICLE::SET_VEHICLE_EXTRA(Local_14.f_7[4], 3, false);
			VEHICLE::SET_VEHICLE_EXTRA(Local_14.f_7[0], 2, false);
			bLocal_192 = true;
		}
		func_265();
		__LIB_9__::func_75(iParam0);
	}
	func_9(iParam0, 1);
	if (!bLocal_49)
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_50))
		{
			iLocal_50 = ANIMSCENE::_CREATE_ANIM_SCENE("cutscene@mud1_int", 0, "Multistart", false, true);
			func_267();
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iLocal_50, false))
		{
			iVar1 = 0;
			while (iVar1 < 21)
			{
				if (__LIB_0__::func_31(Local_51[iVar1 /*6*/]))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_50, func_269(__LIB_9__::func_975(Local_51[iVar1 /*6*/])), &Var2, true, "Multistart", 2))
					{
						Local_51[iVar1 /*6*/].f_1 = { Var2 };
						Local_51[iVar1 /*6*/].f_4 = Var2.f_3.f_2;
					}
					else
					{
						Local_51[iVar1 /*6*/].f_1 = { Global_1835011[4 /*74*/].f_18 };
						Local_51[iVar1 /*6*/].f_4 = 0f;
					}
				}
				iVar1++;
			}
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_50);
			bLocal_49 = true;
		}
		iVar0 = 0;
	}
	else
	{
		iVar14 = 0;
		while (iVar14 < 21)
		{
			if (__LIB_0__::func_31(Local_51[iVar14 /*6*/]))
			{
				if (!func_270(iParam0, Local_51[iVar14 /*6*/], &(Local_51[iVar14 /*6*/].f_5), 0, 1, Local_51[iVar14 /*6*/].f_1, Local_51[iVar14 /*6*/].f_1.f_1, Local_51[iVar14 /*6*/].f_1.f_2, Local_51[iVar14 /*6*/].f_4, 0, 0, 0, 0))
				{
					iVar0 = 0;
				}
			}
			iVar14++;
		}
	}
	if (__LIB_0__::func_86(vLocal_182))
	{
		vLocal_182 = { -1320.907f, 2423.085f, 308.4177f };
		fLocal_185 = 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_178))
	{
		iLocal_178 = __LIB_8__::func_915(vLocal_182, fLocal_185, 1, 1, 1, 1, 1);
		iVar0 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_180))
	{
		iLocal_180 = func_272(9, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar0 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_179))
	{
		iLocal_179 = func_272(2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar0 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_181))
	{
		iLocal_181 = func_272(6, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_180, true);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_179, true);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_181, true);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_180, false);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_179, false);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_181, false);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_180, -1358.423f, 2400.464f, 306.8054f, 150.6399f, true, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_179, -1358.617f, 2398.149f, 306.7387f, 148.6956f, true, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_181, -1358.423f, 2400.464f, 306.8054f, 150.6399f, true, false, true);
	func_263(iParam0, iLocal_179, "Horse_01", 0, 0, 1, 0);
	func_263(iParam0, iLocal_181, "Horse_01^1", 0, 0, 1, 0);
	func_263(iParam0, iLocal_180, "Horse_01^2", 0, 0, 1, 0);
	func_263(iParam0, iLocal_178, "Horse_01^7", 0, 0, 1, 0);
	return iVar0;
}

void func_130(int iParam0)
{
	func_161(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

void func_131(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_263(iParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
}

bool func_134(var uParam0)
{
	return func_277(&(uParam0->f_8), &(uParam0->f_24), &(uParam0->f_35), &(uParam0->f_51), &(uParam0->f_55), &(uParam0->f_57), &(uParam0->f_393), &(uParam0->f_398), &(uParam0->f_404), &(uParam0->f_408), &(uParam0->f_412), &(uParam0->f_417), -1);
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
	return func_270(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

void func_137()
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xBA0980B5C0A11924(0f);
	PED::_0xAB0D553FE20A6E25(0f);
	PED::_0xC0258742B034DFAF(0f);
	POPULATION::_0xF45E46DEECF7DF6E(10208, 0, 0, -1, -1);
	__LIB_5__::func_521(0f);
}

void func_142()
{
	if (!__LIB_9__::func_467())
	{
		return;
	}
	func_292();
}

bool func_155(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0 /*18*/].f_17 == 0 && uParam0->f_475[iVar0 /*18*/].f_2 == 9) && uParam0->f_475[iVar0 /*18*/].f_4 >= 0)
		{
			iVar1 = uParam0->f_1522[uParam0->f_475[iVar0 /*18*/].f_4 /*10*/].f_8;
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar1) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar1, true, false))
			{
				iVar2 = 0;
				while (iVar2 < 35)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar2 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar2 /*13*/].f_2))
					{
						Var3 = { func_312(uParam0, uParam0->f_3[iVar2 /*13*/].f_2) };
						if (ANIMSCENE::_0x6F1F0B17109309DA(iVar1, &Var3))
						{
							if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_3[iVar2 /*13*/].f_2, iVar1) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_3[iVar2 /*13*/].f_2, -1))
							{
								return true;
							}
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_161(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_0__::func_131(uParam0[iVar0 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam0[iVar0 /*3*/])->f_2, iParam12))
			{
				__LIB_0__::func_275(uParam0[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (__LIB_0__::func_132(uParam1[iVar0 /*5*/]))
		{
			if (__LIB_4__::func_688((uParam1[iVar0 /*5*/])->f_4, iParam12))
			{
				__LIB_0__::func_276(uParam1[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (__LIB_0__::func_132(uParam2[iVar0 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam2[iVar0 /*3*/])->f_2, iParam12))
			{
				__LIB_0__::func_277(uParam2[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (__LIB_0__::func_132(uParam3[iVar0 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam3[iVar0 /*3*/])->f_2, iParam12))
			{
				__LIB_4__::func_689(uParam3[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	if (__LIB_4__::func_688(uParam4->f_1, iParam12))
	{
		__LIB_4__::func_690(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (__LIB_0__::func_132(uParam5[iVar0 /*67*/]))
		{
			if (__LIB_4__::func_688((uParam5[iVar0 /*67*/])->f_3, iParam12))
			{
				func_331(uParam5[iVar0 /*67*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (__LIB_0__::func_132(uParam5[iVar0 /*67*/]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (__LIB_0__::func_132(&((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/])))
				{
					if (__LIB_4__::func_688((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/].f_2, iParam12))
					{
						__LIB_0__::func_278(&((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/]), (uParam5[iVar0 /*67*/])->f_1);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (__LIB_0__::func_131(uParam6[iVar0 /*4*/]))
		{
			if (__LIB_4__::func_688((uParam6[iVar0 /*4*/])->f_3, iParam12))
			{
				__LIB_0__::func_279(uParam6[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (__LIB_0__::func_131(uParam7[iVar0 /*5*/]))
		{
			if (__LIB_4__::func_688((uParam7[iVar0 /*5*/])->f_4, iParam12))
			{
				__LIB_0__::func_280(uParam7[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (__LIB_0__::func_132(uParam8[iVar0 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam8[iVar0 /*3*/])->f_2, iParam12))
			{
				__LIB_0__::func_281(uParam8[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (__LIB_0__::func_282(uParam9[iVar0 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam9[iVar0 /*3*/])->f_2, iParam12))
			{
				__LIB_0__::func_283(uParam9[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (__LIB_0__::func_132(uParam10[iVar0 /*4*/]))
		{
			if (__LIB_4__::func_688((uParam10[iVar0 /*4*/])->f_3, iParam12))
			{
				__LIB_0__::func_284(uParam10[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (__LIB_0__::func_132(uParam11[iVar0 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam11[iVar0 /*3*/])->f_2, iParam12))
			{
				__LIB_0__::func_285(uParam11[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

char* func_201(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("PLAYER_THREE"))
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_269(iVar0);
}

void func_224(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_385();
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

void func_226(var uParam0)
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
			func_396(iVar1, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_396(iVar3, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_227(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_760(uParam0) };
			func_396(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_261()
{
	if (!bLocal_191)
	{
		if (!PROPSET::_REQUEST_PROPSET(iLocal_190))
		{
			return false;
		}
		if (!PROPSET::_REQUEST_PROPSET(iLocal_188))
		{
			return false;
		}
		if (!PROPSET::_REQUEST_PROPSET(iLocal_186))
		{
			return false;
		}
		if (!PROPSET::_REQUEST_PROPSET(iLocal_187))
		{
			return false;
		}
		if (!PROPSET::_REQUEST_PROPSET(iLocal_189))
		{
			return false;
		}
		bLocal_191 = true;
	}
	if ((((PROPSET::_HAS_PROPSET_LOADED(iLocal_188) && PROPSET::_HAS_PROPSET_LOADED(iLocal_186)) && PROPSET::_HAS_PROPSET_LOADED(iLocal_187)) && PROPSET::_HAS_PROPSET_LOADED(iLocal_189)) && PROPSET::_HAS_PROPSET_LOADED(iLocal_190))
	{
		return true;
	}
	return false;
}

void func_263(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_450(&(iParam0->f_428), iParam1, sParam2, iParam3, iParam4, bParam6);
	func_451(iParam0, iParam1, sParam2);
	if (bParam5)
	{
		__LIB_4__::func_766(iParam0, iParam1);
	}
}

void func_264(int iParam0)
{
	VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
	VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, true);
	VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
	VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
	VEHICLE::SET_VEHICLE_EXTRA(iParam0, 5, true);
	VEHICLE::SET_VEHICLE_EXTRA(iParam0, 6, true);
	VEHICLE::SET_VEHICLE_EXTRA(iParam0, 7, true);
	VEHICLE::SET_VEHICLE_EXTRA(iParam0, 8, true);
	VEHICLE::SET_VEHICLE_EXTRA(iParam0, 9, true);
	VEHICLE::SET_VEHICLE_EXTRA(iParam0, 10, true);
	VEHICLE::SET_VEHICLE_EXTRA(iParam0, 11, true);
	VEHICLE::SET_VEHICLE_EXTRA(iParam0, 12, true);
	VEHICLE::SET_VEHICLE_EXTRA(iParam0, 13, true);
	VEHICLE::SET_VEHICLE_EXTRA(iParam0, 14, true);
}

void func_265()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7[1]) && !__LIB_4__::func_257(Local_14.f_7[1]))
	{
		if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(Local_14.f_7[1]))
		{
			PROPSET::_0xD80FAF919A2E56EA(Local_14.f_7[1], iLocal_189);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7[2]) && !__LIB_4__::func_257(Local_14.f_7[2]))
	{
		if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(Local_14.f_7[2]))
		{
			PROPSET::_0xD80FAF919A2E56EA(Local_14.f_7[2], iLocal_190);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7[3]) && !__LIB_4__::func_257(Local_14.f_7[3]))
	{
		if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(Local_14.f_7[3]))
		{
			PROPSET::_0xD80FAF919A2E56EA(Local_14.f_7[3], iLocal_186);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7[4]) && !__LIB_4__::func_257(Local_14.f_7[4]))
	{
		if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(Local_14.f_7[4]))
		{
			PROPSET::_0xD80FAF919A2E56EA(Local_14.f_7[4], iLocal_187);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7[0]) && !__LIB_4__::func_257(Local_14.f_7[0]))
	{
		if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(Local_14.f_7[0]))
		{
			PROPSET::_0xD80FAF919A2E56EA(Local_14.f_7[0], iLocal_188);
		}
	}
}

void func_267()
{
	Local_51[0 /*6*/] = 13;
	Local_51[1 /*6*/] = 3;
	Local_51[2 /*6*/] = 7;
	Local_51[3 /*6*/] = 5;
	Local_51[4 /*6*/] = 2;
	Local_51[5 /*6*/] = 1;
	Local_51[6 /*6*/] = 10;
	Local_51[7 /*6*/] = 18;
	Local_51[8 /*6*/] = 15;
	Local_51[9 /*6*/] = 6;
	Local_51[10 /*6*/] = 17;
	Local_51[11 /*6*/] = 21;
	Local_51[12 /*6*/] = 19;
	Local_51[13 /*6*/] = 0;
	Local_51[14 /*6*/] = 20;
	Local_51[15 /*6*/] = 9;
	Local_51[16 /*6*/] = 4;
	Local_51[17 /*6*/] = 11;
	Local_51[18 /*6*/] = 16;
	Local_51[19 /*6*/] = 14;
	Local_51[20 /*6*/] = 22;
	PED::_0xF008E0BA1FE1D644(22);
}

char* func_269(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return "Arthur";
		case joaat("CS_ABE"):
			return "Abe";
		case joaat("CS_EDMUNDLOWRY"):
			return "EdmundLowry";
		case joaat("CS_ABERDEENPIGFARMER"):
			return "ABERDEENPIGFARMER";
		case joaat("CS_ABERDEENSISTER"):
			return "ABERDEENSISTER";
		case joaat("CS_ABIGAILROBERTS"):
			return "AbigailRoberts";
		case joaat("CS_ALBERTMASON"):
			return "AlbertMason";
		case joaat("CS_ARCHIEDOWN"):
			return "ArchieDown";
		case joaat("CS_BAPTISTE"):
			return "Baptiste";
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
			return "BartholomewBraithwaite";
		case joaat("CS_BEATENUPCAPTAIN"):
			return "CS_BEATENUPCAPTAIN";
		case joaat("CS_BEAUGRAY"):
			return "BeauGray";
		case joaat("CS_PENELOPEBRAITHWAITE"):
			return "PenelopeBraithwaite";
		case joaat("CS_BILLWILLIAMSON"):
			return "BillWilliamson";
		case joaat("CS_BRAITHWAITESERVANT"):
			return "BraithwaiteServant";
		case joaat("CS_CATHERINEBRAITHWAITE"):
			return "CatherineBraithwaite";
		case joaat("CS_CHARLESSMITH"):
			return "CharlesSmith";
		case joaat("CS_CIGCARDGUY"):
			return "CS_CIGCARDGUY";
		case joaat("CS_DINOBONESLADY"):
			return "CS_DINOBONESLADY";
		case joaat("CS_CLEET"):
			return "Cleet";
		case joaat("CS_COLMODRISCOLL"):
			return "ColmODriscoll";
		case joaat("CS_CREOLEGUY"):
			return "CreoleGuy";
		case joaat("CS_SDDOCTOR_01"):
			return "SDDoctor_01";
		case joaat("CS_DALEMARONEY"):
			return "DaleMaroney";
		case joaat("CS_DUTCH"):
			return "Dutch";
		case joaat("CS_EDITHDOWN"):
			return "EdithDown";
		case joaat("CS_FUSSAR"):
			return "Fussar";
		case joaat("CS_FISHCOLLECTOR"):
			return "cs_fishcollector";
		case joaat("CS_BRONTE"):
			return "Bronte";
		case joaat("CS_GUIDOMARTELLI"):
			return "GuidoMartelli";
		case joaat("U_M_M_NBXBRONTEGOON_01"):
			return "U_M_M_NBXBRONTEGOON_01";
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			return "G_M_M_UNIBRONTEGOONS_01";
		case joaat("CS_GARETHBRAITHWAITE"):
			return "GarethBraithwaite";
		case joaat("CS_GENSTORYFEMALE"):
			return "GenStoryFemale";
		case joaat("CS_GENSTORYMALE"):
			return "GenStoryMale";
		case joaat("CS_LEON"):
			return "Leon";
		case joaat("CS_GERALDBRAITHWAITE"):
			return "GeraldBraithwaite";
		case joaat("CS_HOSEAMATTHEWS"):
			return "HoseaMatthews";
		case joaat("CS_JACKMARSTON"):
			return "JackMarston";
		case joaat("CS_JACKMARSTON_TEEN"):
			return "JackMarston_Teen";
		case joaat("CS_JAMIE"):
			return "Jamie";
		case joaat("CS_JAVIERESCUELLA"):
			return "JavierEscuella";
		case joaat("CS_JIMCALLOWAY"):
			return "JimCalloway";
		case joaat("CS_JOE"):
			return "Joe";
		case joaat("CS_JOHNMARSTON"):
			return "JohnMarston";
		case joaat("CS_JOHNWEATHERS"):
			return "CS_JOHNWEATHERS";
		case joaat("CS_JOSIAHTRELAWNY"):
			return "JosiahTrelawny";
		case joaat("CS_KAREN"):
			return "Karen";
		case joaat("CS_MRSADLER"):
			return "MrsAdler";
		case joaat("CS_KIERAN"):
			return "Kieran";
		case joaat("CS_LEOSTRAUSS"):
			return "LeoStrauss";
		case joaat("CS_LONDONDERRYSON"):
			return "LondonderrySon";
		case joaat("CS_MARYBETH"):
			return "MaryBeth";
		case joaat("CS_MARYLINTON"):
			return "MaryLinton";
		case joaat("CS_MICAHBELL"):
			return "MicahBell";
		case joaat("CS_MOLLYOSHEA"):
			return "MollyOshea";
		case joaat("CS_MRLINTON"):
			return "CS_MrLinton";
		case joaat("CS_MRPEARSON"):
			return "MrPearson";
		case joaat("CS_MRSLONDONDERRY"):
			return "MrsLondonderry";
		case joaat("CS_MUD2BIGGUY"):
			return "Mud2BigGuy";
		case joaat("CS_PROFESSORBELL"):
			return "ProfessorBell";
		case joaat("CS_REVSWANSON"):
			return "RevSwanson";
		case joaat("CS_SAMARITAN"):
			return "CS_Samaritan";
		case joaat("CS_STRDEPUTY_01"):
			return "StrDeputy_01";
		case joaat("CS_STRDEPUTY_02"):
			return "StrDeputy_02";
		case joaat("CS_STRSHERIFF_01"):
		case joaat("U_M_M_STRSHERRIFF_01"):
			return "StrSheriff_01";
		case joaat("CS_SUSANGRIMSHAW"):
			return "SusanGrimshaw";
		case joaat("CS_TAVISHGRAY"):
			return "TavishGray";
			Jump @2949; //curOff = 1797
			return "TheodoreLevin";
			Jump @2949; //curOff = 1807
			return "ThomasDown";
			Jump @2949; //curOff = 1817
			return "Tilly";
			Jump @2949; //curOff = 1827
			return "Uncle";
			Jump @2949; //curOff = 1837
			return "G_M_M_UniCriminals_01";
			Jump @2949; //curOff = 1847
			return "G_M_M_UNIDUSTER_01";
			Jump @2949; //curOff = 1857
			return "CS_VALSHERIFF";
			Jump @2949; //curOff = 1867
			return "S_M_M_MARSHALLSRURAL_01";
			Jump @2949; //curOff = 1877
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
			Jump @2949; //curOff = 1887
			return "Sean";
			Jump @2949; //curOff = 1897
			return "Lenny";
			Jump @2949; //curOff = 1907
			return "Hercule";
			Jump @2949; //curOff = 1917
			return "CreoleCaptain";
			Jump @2949; //curOff = 1927
			return "U_M_M_CREOLECAPTAIN_01";
			Jump @2949; //curOff = 1937
			return "RingMaster";
			Jump @2949; //curOff = 1947
			return "U_M_M_VALBARTENDER_01";
			Jump @2949; //curOff = 1957
			return "A_M_M_EMRFARMHAND_01";
			Jump @2949; //curOff = 1967
			return "A_M_M_GriSurvivalist_01";
			Jump @2949; //curOff = 1977
			return "LillyMillet";
			Jump @2949; //curOff = 1987
			return "A_F_M_STRTOWNFOLK_01";
			Jump @2949; //curOff = 1997
			return "A_M_M_STRTOWNFOLK_01";
			Jump @2949; //curOff = 2007
			return "S_M_M_STRLUMBERJACK_01";
			Jump @2949; //curOff = 2017
			return "G_M_M_UniCriminals_02";
			Jump @2949; //curOff = 2027
			return "G_M_M_UNICORNWALLGOONS_01";
			Jump @2949; //curOff = 2037
			return "A_M_M_NBXUPPERCLASS_01";
			Jump @2949; //curOff = 2047
			return "A_F_M_NBXUPPERCLASS_01";
			Jump @2949; //curOff = 2057
			return "A_M_M_VALFARMER_01";
			Jump @2949; //curOff = 2067
			return "A_M_M_VALTOWNFOLK_01";
			Jump @2949; //curOff = 2077
			return "A_M_M_VALTOWNFOLK_02";
			Jump @2949; //curOff = 2087
			return "A_F_M_VALTOWNFOLK_01";
			Jump @2949; //curOff = 2097
			return "U_M_M_NBXBARTENDER_01";
			Jump @2949; //curOff = 2107
			return "NBXExecuted";
			Jump @2949; //curOff = 2117
			return "RHODEPUTY_01";
			Jump @2949; //curOff = 2127
			return "RHDSHERIFF_01";
			Jump @2949; //curOff = 2137
			return "LeighGray";
			Jump @2949; //curOff = 2147
			return "Horse_01";
			Jump @2949; //curOff = 2156
			return "U_M_M_StrGenStoreOwner_01";
			Jump @2949; //curOff = 2166
			return "TomDickens";
			Jump @2949; //curOff = 2176
			return "DavidGeddes";
			Jump @2949; //curOff = 2186
			return "ANSEL_ATHERTON";
			Jump @2949; //curOff = 2196
			return "CS_Wrobel";
			Jump @2949; //curOff = 2206
			return "COW";
			Jump @2949; //curOff = 2216
			return "BULL";
			Jump @2949; //curOff = 2226
			return "ALBERTCAKEESQUIRE";
			Jump @2949; //curOff = 2236
			return "U_M_O_BLWGENERALSTOREOWNER_01";
			Jump @2949; //curOff = 2246
			return "A_C_DOGCATAHOULACUR_01";
			Jump @2949; //curOff = 2256
			return "A_C_DOGRUFUS_01";
			Jump @2949; //curOff = 2266
			return "A_C_DOGLION_01";
			Jump @2949; //curOff = 2276
			return "Handler";
			Jump @2949; //curOff = 2286
			return "VALAUCTIONBOSS_01";
			Jump @2949; //curOff = 2296
			return "NbxReceptionist_01";
			Jump @2949; //curOff = 2306
			return "U_M_M_BiVForeman_01";
			Jump @2949; //curOff = 2316
			return "U_M_M_RACFOREMAN_01";
			Jump @2949; //curOff = 2326
			return "CHAINPRISONER_01";
			Jump @2949; //curOff = 2336
			return "CHAINPRISONER_02";
			Jump @2949; //curOff = 2346
			return "U_M_M_ValPokerPlayer_01";
			Jump @2949; //curOff = 2356
			return "U_M_M_ValPokerPlayer_02";
			Jump @2949; //curOff = 2366
			return "DUNCANGEDDES";
			Jump @2949; //curOff = 2376
			return "ANGUSGEDDES";
			Jump @2949; //curOff = 2386
			return "EvelynMiller";
			Jump @2949; //curOff = 2396
			return "SISTERCALDERON";
			Jump @2949; //curOff = 2406
			return "EDGARROSS";
			Jump @2949; //curOff = 2416
			return "U_M_M_GriSurvivalist_01";
			Jump @2949; //curOff = 2426
			return "U_F_M_RKSHOMESTEADTENANT_01";
			Jump @2949; //curOff = 2436
			return "U_F_M_RKSHOMESTEADTENANT_01";
			Jump @2949; //curOff = 2446
			return "U_M_M_BHT_STRAWBERRYDUEL";
			Jump @2949; //curOff = 2456
			return "StationWorker";
			Jump @2949; //curOff = 2466
			return "LEVISIMON";
			Jump @2949; //curOff = 2476
			return "S_M_M_GULFUSSARS_01";
			Jump @2949; //curOff = 2486
			return "A_C_DONKEY_01";
			Jump @2949; //curOff = 2496
			return "S_M_M_ISPWORKER_01";
			Jump @2949; //curOff = 2506
			return "S_M_M_ISPWORKER_02";
			Jump @2949; //curOff = 2516
			return "U_M_O_ValBartender_01";
			Jump @2949; //curOff = 2526
			return "U_M_M_NBXBARTENDER_02";
			Jump @2949; //curOff = 2536
			return "CS_UNIDUSTERJAIL_01";
			Jump @2949; //curOff = 2546
			return "A_M_M_RHDTOWNFOLK_01";
			Jump @2949; //curOff = 2556
			return "U_M_M_UNIBOUNTYHUNTER_01";
			Jump @2949; //curOff = 2566
			return "U_M_M_UNIBOUNTYHUNTER_02";
			Jump @2949; //curOff = 2576
			return "BrotherDorkins";
			Jump @2949; //curOff = 2586
			return "G_M_M_UniBraithwaites_01";
			Jump @2949; //curOff = 2596
			return "A_M_M_GAMHIGHSOCIETY_01";
			Jump @2949; //curOff = 2606
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
			Jump @2949; //curOff = 2616
			return "EagleFlies";
			Jump @2949; //curOff = 2626
			return "CS_RAINSFALL";
			Jump @2949; //curOff = 2636
			return "A_M_M_WapWarriors_01";
			Jump @2949; //curOff = 2646
			return "A_M_Y_NBXSTREETKIDS_01";
			Jump @2949; //curOff = 2656
			return "U_M_M_BHT_SHACKESCAPE";
			Jump @2949; //curOff = 2666
			return "A_M_M_HTLROUGHTRAVELLERS_01";
			Jump @2949; //curOff = 2676
			return "LemiuxAssistant";
			Jump @2949; //curOff = 2686
			return "p_keys01x";
			Jump @2949; //curOff = 2696
			return "CS_BALLOONOPERATOR";
			Jump @2949; //curOff = 2706
			return "Worker1";
			Jump @2949; //curOff = 2716
			return "U_M_M_BHT_MINEFOREMAN";
			Jump @2949; //curOff = 2726
			return "A_M_M_NbxSlums_01";
			Jump @2949; //curOff = 2736
			return "U_M_M_NBXPRIEST_01";
			Jump @2949; //curOff = 2746
			return "A_C_BEAR_01";
			Jump @2949; //curOff = 2756
			return "MARSHALL_THURWELL";
			Jump @2949; //curOff = 2766
			return "CS_FAMOUSGUNSLINGER_02";
			Jump @2949; //curOff = 2776
			return "cs_sd_streetkid_01";
			Jump @2949; //curOff = 2786
			return "cs_sd_streetkid_02";
			Jump @2949; //curOff = 2796
			return "ObediahHinton";
			Jump @2949; //curOff = 2806
			return "PoisonWellShaman";
			Jump @2949; //curOff = 2816
			return "A_M_M_EMRFARMHAND_01";
			Jump @2949; //curOff = 2826
			return "u_m_m_bht_benedictallbright";
			Jump @2949; //curOff = 2836
			return "Jules";
			Jump @2949; //curOff = 2846
			return "MRDEVON";
			Jump @2949; //curOff = 2856
			return "MRWAYNE";
			Jump @2949; //curOff = 2866
			return "PAYTAH";
			Jump @2949; //curOff = 2876
			return "CS_VALDEPUTY_01";
			Jump @2949; //curOff = 2886
			return "MES_SADIE5_MALES_01^1";
			Jump @2949; //curOff = 2896
			return "A_M_M_NBXDOCKWORKERS_01";
			Jump @2949; //curOff = 2906
			return "U_M_M_VALSHERIFF_01";
			Jump @2949; //curOff = 2916
			return "S_M_M_BANKCLERK_01";
			Jump @2949; //curOff = 2926
			return "U_M_M_NBXBRONTEASC_01";
			Jump @2949; //curOff = 2936
			return "P_C_HORSE_01";
			return "";
		}
bool func_270(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
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
			return false;
		}
		__LIB_4__::func_766(iParam0, *uParam2);
		__LIB_4__::func_768(iParam0, *uParam2);
		func_460(*uParam2, bParam3, bParam4, 0);
		if (bParam4)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam2, true);
			if (!__LIB_0__::func_163(*uParam2, -982327190))
			{
				TASK::TASK_STAND_STILL(*uParam2, -1);
			}
		}
		func_263(iParam0, *uParam2, 0, 0, 0, 1, 0);
		__LIB_1__::func_296(iParam1, 0, 0, 1);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

int func_272(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_464(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

int func_277(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (__LIB_0__::func_131(uParam0[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam0[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_693(uParam0[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		if (__LIB_0__::func_132(uParam1[iVar1 /*5*/]))
		{
			if (__LIB_4__::func_688((uParam1[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!__LIB_4__::func_694(uParam1[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		if (__LIB_0__::func_132(uParam2[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam2[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_695(uParam2[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		if (__LIB_0__::func_132(uParam3[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam3[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_689(uParam3[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (__LIB_4__::func_688(uParam4->f_1, iParam12))
	{
		if (!__LIB_4__::func_690(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (__LIB_0__::func_132(uParam5[iVar1 /*67*/]))
		{
			if (__LIB_4__::func_688((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (__LIB_0__::func_286(uParam5[iVar1 /*67*/]))
				{
					if (!func_470(uParam5[iVar1 /*67*/]))
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (__LIB_0__::func_132(uParam5[iVar1 /*67*/]))
		{
			if (__LIB_4__::func_688((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (__LIB_0__::func_286(uParam5[iVar1 /*67*/]))
				{
					if (func_470(uParam5[iVar1 /*67*/]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (__LIB_0__::func_132(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/])))
							{
								if (!__LIB_4__::func_696(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/]), (uParam5[iVar1 /*67*/])->f_1))
								{
									iVar0 = 0;
								}
							}
							iVar2++;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam6)
	{
		if (__LIB_0__::func_131(uParam6[iVar1 /*4*/]))
		{
			if (__LIB_4__::func_688((uParam6[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!__LIB_4__::func_697(uParam6[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam7)
	{
		if (__LIB_0__::func_131(uParam7[iVar1 /*5*/]))
		{
			if (__LIB_4__::func_688((uParam7[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!__LIB_4__::func_698(uParam7[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam8)
	{
		if (__LIB_0__::func_132(uParam8[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam8[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_699(uParam8[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam9)
	{
		if (__LIB_0__::func_282(uParam9[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam9[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_700(uParam9[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (__LIB_0__::func_132(uParam10[iVar1 /*4*/]))
		{
			if (__LIB_4__::func_688((uParam10[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!__LIB_4__::func_701(uParam10[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam11)
	{
		if (__LIB_0__::func_132(uParam11[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam11[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_702(uParam11[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_292()
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (__LIB_1__::func_549(81053684, &iVar1))
	{
		if (__LIB_9__::func_465(iVar1))
		{
			func_483(81053684);
			bVar0 = true;
		}
	}
	if (__LIB_1__::func_549(-525676072, &iVar1))
	{
		if (__LIB_9__::func_465(iVar1))
		{
			func_483(-525676072);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		PED::_0xC494C76A34266E82(Global_35, 13);
	}
}

struct<8> func_312(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		StringCopy(&cVar0, func_489(iParam1), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
		{
			iVar8 = __LIB_0__::func_174(uParam0, iParam1);
			if (iVar8 > 0)
			{
				StringConCat(&cVar0, "^", 64);
				StringIntConCat(&cVar0, iVar8, 64);
			}
		}
	}
	return cVar0;
}

void func_331(var uParam0)
{
	char* sVar0;
	if (!__LIB_0__::func_1(uParam0->f_2, 1))
	{
		if (__LIB_0__::func_286(uParam0))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
			{
				sVar0 = func_269(ENTITY::GET_ENTITY_MODEL(Global_35));
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1, sVar0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1, "player_zero") && __LIB_0__::func_113())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1, "player_three") && __LIB_0__::func_181())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_three", Global_35, 0);
				}
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
				__LIB_0__::func_7(&(uParam0->f_2), 1);
			}
		}
	}
}

void func_385()
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
	iVar0 = func_533(6291456, 0);
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

void func_396(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_396(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_396(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_450(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_489(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = __LIB_4__::func_770(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = __LIB_4__::func_771(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			__LIB_4__::func_772(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = __LIB_4__::func_773(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2, 64);
		uParam0->f_13[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_13[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
		else
		{
			__LIB_0__::func_159(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
	}
}

void func_451(int iParam0, int iParam1, char* sParam2)
{
	func_579(&(iParam0->f_958), iParam1, sParam2, 0);
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
				func_396(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

void func_460(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	if (bParam2 && (!__LIB_0__::func_91() || !ANIMSCENE::_0x6F1F0B17109309DA(Global_43800, func_201(iParam0))))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(iParam0, true, false);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
		if (!Global_1935630.f_12)
		{
			if (bParam1)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
			}
		}
		PED::FORCE_PED_MOTION_STATE(iParam0, joaat("MOTIONSTATE_IDLE"), true, 0, false);
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS"));
	ENTITY::_SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, false), 0);
	if (bParam3)
	{
		__LIB_0__::func_203(iParam0);
	}
}

int func_464(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_621(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
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

bool func_470(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_2, 2))
	{
		return true;
	}
	if (!__LIB_0__::func_1(uParam0->f_2, 1))
	{
		func_331(uParam0);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1, true, false))
	{
		__LIB_0__::func_7(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

void func_483(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_161(__LIB_0__::func_997(iParam0), 1);
	if (iVar0 == 39)
	{
		return;
	}
	__LIB_6__::func_752(Global_1946804.f_57[iVar0 /*11*/], 8);
	__LIB_1__::func_452(26, 0, 0, 0, 0);
}

char* func_489(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_201(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return __LIB_0__::func_743(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return __LIB_0__::func_209(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_533(int iParam0, int iParam1)
{
	var uVar0;
	return func_649(&uVar0, iParam0, iParam1);
}

void func_579(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	struct<11> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	__LIB_0__::func_224(uParam0);
	iVar0 = __LIB_0__::func_225(uParam0, iParam1);
	if (bParam3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			sParam2 = func_489(iParam1);
		}
		iVar0 = __LIB_0__::func_226(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = __LIB_0__::func_227(uParam0);
		}
		else
		{
			Var1.f_10 = joaat("WEAPON_UNARMED");
			MISC::_COPY_MEMORY(&(uParam0->f_3[iVar0 /*13*/]), &Var1, 13);
		}
	}
	else if (iVar0 != -1)
	{
	}
	else
	{
		iVar0 = __LIB_0__::func_227(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_3[iVar0 /*13*/].f_2 = iParam1;
	uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
	{
		uParam0->f_3[iVar0 /*13*/].f_9 = sParam2;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, sParam2))
		{
		}
		uParam0->f_3[iVar0 /*13*/].f_9 = sParam2;
	}
	__LIB_4__::func_757(uParam0, 2);
}

int func_621(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				func_396(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

int func_649(var uParam0, int iParam1, int iParam2)
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
		return func_649(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

