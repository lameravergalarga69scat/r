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
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24[3] = { 0, 0, 0 };
	var uLocal_28[3] = { 0, 0, 0 };
	int iLocal_32[3] = { 0, 0, 0 };
	vector3 vLocal_36[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_46[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<6> ScriptParam_0 = { -1, -1, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2268> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_17 = 10;
	Var0.f_18 = 30;
	Var0.f_19 = 80;
	Var0.f_20 = 120;
	Var0.f_33 = 2;
	Var0.f_36 = 6;
	Var0.f_36.f_1.f_1 = -1;
	Var0.f_36.f_1.f_5.f_1 = -1;
	Var0.f_36.f_1.f_5.f_5.f_1 = -1;
	Var0.f_36.f_1.f_5.f_5.f_5.f_1 = -1;
	Var0.f_36.f_1.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_36.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_67 = 3;
	Var0.f_73 = 15;
	Var0.f_107 = 14;
	Var0.f_107.f_1.f_2 = -1;
	Var0.f_107.f_1.f_7 = -1;
	Var0.f_107.f_1.f_8.f_7 = -1;
	Var0.f_107.f_1.f_8.f_9 = 3;
	Var0.f_107.f_1.f_32.f_1 = 1;
	Var0.f_107.f_1.f_32.f_10 = 1;
	Var0.f_107.f_1.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_32.f_14 = 1;
	Var0.f_107.f_1.f_32.f_15 = -1;
	Var0.f_107.f_1.f_32.f_16 = 3;
	Var0.f_107.f_1.f_32.f_36 = -1;
	Var0.f_107.f_1.f_32.f_39 = 30;
	Var0.f_107.f_1.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_1711 = 17;
	Var0.f_1967 = 2;
	Var0.f_1984 = 30;
	Var0.f_2015 = 30;
	Var0.f_2047 = -1;
	Var0.f_2048 = -1;
	Var0.f_2050 = -1;
	Var0.f_2051 = 30;
	Var0.f_2051.f_1 = -1;
	Var0.f_2051.f_1.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2236 = 1;
	Var0.f_2252 = 1082130432;
	Var0.f_2253 = 1097859072;
	Var0.f_2254 = 1084227584;
	Var0.f_2255 = 1065353216;
	Var0.f_2256 = 1120403456;
	Var0.f_2257 = 1084227584;
	Var0.f_2258 = 1097859072;
	Var0.f_2259 = 1073741824;
	Var0.f_2260 = 1092616192;
	Var0.f_2261 = 1120403456;
	Var0.f_2263 = 1090519040;
	Var0.f_2264 = 1103626240;
	Var0.f_2266 = 60;
	if (!Global_1327590.f_11465[ScriptParam_0 /*10*/])
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (!Var0.f_2267)
		{
			func_1(&Var0);
			__LIB_7__::func_105(&Var0);
			__LIB_0__::func_0(&Var0);
		}
		__LIB_6__::func_935(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	__LIB_7__::func_102(&Var0, ScriptParam_0);
	__LIB_6__::func_936(&Var0, 1);
	while (func_7(&Var0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		ENTITY::_0xD2B9C78537ED5759(uLocal_28[iVar0]);
		iVar0++;
	}
	return true;
}

bool func_7(var uParam0)
{
	if (__LIB_7__::func_114(uParam0))
	{
		if (__LIB_6__::func_949(uParam0) < 6)
		{
			__LIB_7__::func_17(__LIB_4__::func_576(uParam0), 30);
			__LIB_6__::func_936(uParam0, 6);
		}
	}
	switch (__LIB_6__::func_949(uParam0))
	{
		case 1:
			if (func_34(uParam0))
			{
				__LIB_6__::func_936(uParam0, 2);
			}
			else
			{
				__LIB_6__::func_950(uParam0);
			}
			break;
		case 2:
			if (func_36(uParam0))
			{
				if (__LIB_7__::func_109(uParam0))
				{
					__LIB_6__::func_936(uParam0, 3);
				}
				else
				{
					__LIB_6__::func_950(uParam0);
				}
			}
			break;
		case 3:
			if (__LIB_7__::func_110(uParam0))
			{
				if (__LIB_7__::func_141(uParam0))
				{
					__LIB_6__::func_936(uParam0, 4);
				}
				else
				{
					__LIB_6__::func_950(uParam0);
				}
			}
			break;
		case 4:
			if (__LIB_7__::func_103(uParam0))
			{
				if (__LIB_7__::func_136(uParam0))
				{
					__LIB_6__::func_936(uParam0, 5);
				}
				else
				{
					__LIB_6__::func_950(uParam0);
				}
			}
			break;
		case 5:
			if (__LIB_7__::func_128(uParam0))
			{
				__LIB_6__::func_936(uParam0, 6);
			}
			break;
		case 6:
			if (func_43(uParam0))
			{
				uParam0->f_2267 = 1;
				__LIB_6__::func_936(uParam0, 7);
			}
			break;
		case 7:
			if (__LIB_6__::func_951(uParam0))
			{
				__LIB_6__::func_935(uParam0);
				__LIB_6__::func_936(uParam0, 0);
				return false;
			}
			if (__LIB_7__::func_44(uParam0))
			{
				__LIB_6__::func_935(uParam0);
				__LIB_6__::func_936(uParam0, 0);
				return false;
			}
			break;
	}
	return true;
}

bool func_34(var uParam0)
{
	if (!func_72(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_104(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_36(var uParam0)
{
	if (!func_75(uParam0))
	{
		return false;
	}
	if (!func_76(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_43(var uParam0)
{
	if (!func_1(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_105(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_72(var uParam0)
{
	switch (__LIB_0__::func_78(uParam0))
	{
		case 1:
			__LIB_7__::func_45(uParam0, 154, 0, 0, 0);
			break;
		case 2:
			__LIB_7__::func_45(uParam0, 85, 0, 0, 0);
			break;
		default:
			return false;
	}
	iLocal_15 = __LIB_7__::func_48(uParam0, 3, 0);
	iLocal_16 = __LIB_7__::func_48(uParam0, 8, 0);
	iLocal_17 = __LIB_7__::func_48(uParam0, 9, 0);
	__LIB_7__::func_47(uParam0, -0.4266f, -0.9593f, 0.5026f, -22.5144f, 1.2f, 1.2f, 3f, joaat("VOLBOX"), joaat("APMS_COMP_BILL"), 1, 1, 1);
	__LIB_7__::func_47(uParam0, -1.1439f, 0.6703f, 0.5028f, -125.6407f, 1.2f, 1.2f, 3f, joaat("VOLBOX"), joaat("APMS_COMP_SEAN"), 1, 1, 1);
	__LIB_7__::func_47(uParam0, 0.5733f, 1.1645f, 0.4966f, 155.6634f, 1.2f, 1.2f, 3f, joaat("VOLBOX"), joaat("APMS_COMP_LENNY"), 1, 1, 1);
	iLocal_19 = __LIB_7__::func_142(uParam0, joaat("P_CHAIR_BARREL04B"), -0.584518f, -1.37169f, -0.000602722f, 0, 1, 0, 1);
	iLocal_20 = __LIB_7__::func_142(uParam0, joaat("S_CRATESEAT03X"), -1.28888f, 0.763515f, -0.000335693f, 0, 1, 0, 1);
	iLocal_21 = __LIB_7__::func_142(uParam0, joaat("P_CHAIR_CRATE15X"), 0.636307f, 1.3249f, -0.00391388f, 0, 1, 0, 1);
	iLocal_22 = __LIB_7__::func_142(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "BOTTLE", 0, 0, 1);
	iLocal_23 = __LIB_7__::func_142(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "BOTTLE^2", 0, 0, 1);
	__LIB_7__::func_142(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "BOTTLE^1", 0, 0, 1);
	__LIB_6__::func_959(uParam0, "script@vignette@bill_13@base", 1, 1, 0, 0);
	iLocal_18 = __LIB_6__::func_959(uParam0, "script@vignette@bill_13@action", 0, 0, 1, 0);
	__LIB_7__::func_146(uParam0, "CBL13AU");
	__LIB_7__::func_149(uParam0, joaat("COMP_BLLCNV13"), joaat("PLAYER_BLLCNV13"));
	__LIB_7__::func_150(uParam0, iLocal_18, -1, 0.97f);
	__LIB_7__::func_107(uParam0, iLocal_15, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_D", iLocal_19, 0);
	__LIB_7__::func_107(uParam0, iLocal_16, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_D", iLocal_20, 0);
	__LIB_7__::func_107(uParam0, iLocal_17, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_A", iLocal_21, 0);
	__LIB_7__::func_127(uParam0, iLocal_15, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_D", iLocal_19, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
	__LIB_7__::func_139(uParam0, iLocal_15, iLocal_22, "p_bottleJD01x_ph_r_hand", 0, 0);
	__LIB_7__::func_147(uParam0, iLocal_15, 2, 0, 30, 0, 0);
	__LIB_7__::func_151(uParam0, iLocal_15, 1, -1);
	__LIB_7__::func_127(uParam0, iLocal_16, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_D", iLocal_20, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
	__LIB_7__::func_139(uParam0, iLocal_16, iLocal_23, "p_bottleJD01x_ph_r_hand", 0, 0);
	__LIB_7__::func_151(uParam0, iLocal_17, 1, -1);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), 1, 0, 0);
	return true;
}

bool func_75(var uParam0)
{
	if (!func_169(__LIB_0__::func_78(uParam0)))
	{
		return false;
	}
	return STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), false);
}

bool func_76(var uParam0)
{
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	if (!func_170(uParam0))
	{
		return false;
	}
	return true;
}

bool func_169(int iParam0)
{
	int iVar0;
	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					vLocal_36[0 /*3*/] = { -138.13f, -26.17f, 95.08f };
					vLocal_46[0 /*3*/] = { -138.2f, -26.4f, 95.08f };
					vLocal_36[1 /*3*/] = { -140.06f, -26.73f, 95.09f };
					vLocal_46[1 /*3*/] = { -139.82f, -26.92f, 95.09f };
					vLocal_36[2 /*3*/] = { -139.35f, -28.86f, 95.09f };
					vLocal_46[2 /*3*/] = { -139.25f, -28.56f, 95.09f };
					break;
				case 2:
					vLocal_36[0 /*3*/] = { 664.63f, -1266.26f, 42.86f };
					vLocal_46[0 /*3*/] = { 664.4f, -1266.35f, 42.86f };
					vLocal_36[1 /*3*/] = { 662.98f, -1265.13f, 42.86f };
					vLocal_46[1 /*3*/] = { 662.98f, -1265.43f, 42.86f };
					vLocal_36[2 /*3*/] = { 661.77f, -1267.03f, 42.86f };
					vLocal_46[2 /*3*/] = { 662.1f, -1266.9f, 42.86f };
					break;
			}
			iLocal_32[0] = joaat("P_CHAIR_CRATE15X");
			iLocal_32[1] = joaat("S_CRATESEAT03X");
			iLocal_32[2] = joaat("P_CHAIR_BARREL04B");
			iVar0 = 0;
			while (iVar0 < 3)
			{
				STREAMING::REQUEST_MODEL(iLocal_32[iVar0], false);
				iVar0++;
			}
			iLocal_14 = 1;
		case 1:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_24[iVar0]))
				{
					if (uLocal_28[iVar0] == 0)
					{
						uLocal_28[iVar0] = ENTITY::_0x6F3068258A499E52(iLocal_32[iVar0], vLocal_36[iVar0 /*3*/], 15);
					}
					else if (ENTITY::_0x1FF441D7954F8709(uLocal_28[iVar0]))
					{
						iLocal_24[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_28[iVar0]));
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_24[iVar0]))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_24[iVar0], vLocal_46[iVar0 /*3*/], true, false, true, true);
						}
					}
					return false;
				}
				iVar0++;
			}
			iLocal_14 = 2;
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_24[iVar0]));
				iVar0++;
			}
			iLocal_14 = 3;
		case 3:
			return true;
	}
	return false;
}

bool func_170(var uParam0)
{
	switch (uParam0->f_2245)
	{
		case 0:
			if (uParam0->f_21 || func_257(uParam0))
			{
				__LIB_6__::func_976(uParam0, 1);
				__LIB_7__::func_6(uParam0, uParam0->f_18);
				uParam0->f_2245 = 1;
			}
			break;
		case 1:
			if (__LIB_7__::func_20(uParam0))
			{
				uParam0->f_2245 = 2;
			}
			break;
		case 2:
			if (__LIB_6__::func_977(uParam0))
			{
				uParam0->f_2245 = 3;
			}
			break;
		case 3:
			if (__LIB_6__::func_978(uParam0))
			{
				uParam0->f_2245 = 4;
			}
			break;
		case 4:
			if (__LIB_6__::func_979(uParam0))
			{
				uParam0->f_2245 = 5;
			}
			break;
		case 5:
			if (__LIB_6__::func_980(uParam0))
			{
				uParam0->f_2245 = 6;
			}
			break;
		case 6:
			if (__LIB_7__::func_59(uParam0))
			{
				uParam0->f_2245 = 7;
			}
			break;
		case 7:
			if (__LIB_7__::func_60(uParam0))
			{
				uParam0->f_2245 = 8;
			}
			break;
		case 8:
			if (__LIB_7__::func_36(uParam0))
			{
				uParam0->f_2245 = 9;
			}
			break;
		case 9:
			if (__LIB_6__::func_981(uParam0))
			{
				uParam0->f_2245 = 10;
			}
			break;
		case 10:
			if (func_257(uParam0))
			{
				uParam0->f_2245 = 11;
			}
			break;
		case 11:
			return true;
	}
	return false;
}

bool func_257(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (__LIB_1__::func_22(uParam0->f_107[iVar1 /*113*/].f_1))
		{
		}
		else
		{
			if (__LIB_0__::func_31(uParam0->f_107[iVar1 /*113*/].f_7))
			{
				if (__LIB_0__::func_212(uParam0->f_107[iVar1 /*113*/].f_7) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar1 /*113*/].f_5))
				{
				}
				else
				{
					uParam0->f_107[iVar1 /*113*/].f_5 = func_325(uParam0->f_107[iVar1 /*113*/].f_7, 1, 1, 0, 0, 1, 1, uParam0->f_107[iVar1 /*113*/].f_6, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					return false;
					if (uParam0->f_107[iVar1 /*113*/].f_102 || uParam0->f_107[iVar1 /*113*/].f_103)
					{
						if (!__LIB_0__::func_31(uParam0->f_107[iVar1 /*113*/].f_1))
						{
							if (uParam0->f_107[iVar1 /*113*/].f_103)
							{
								uParam0->f_107[iVar1 /*113*/].f_1 = __LIB_7__::func_82(uParam0, 1, 1);
							}
							else
							{
								uParam0->f_107[iVar1 /*113*/].f_1 = __LIB_7__::func_82(uParam0, 1, 0);
							}
						}
						if (!__LIB_0__::func_31(uParam0->f_107[iVar1 /*113*/].f_1))
						{
							if (uParam0->f_107[iVar1 /*113*/].f_103)
							{
								Jump @330; //curOff = 280
							}
							else
							{
								return false;
							}
						}
					}
					if (!func_327(uParam0, iVar1, uParam0->f_107[iVar1 /*113*/].f_1))
					{
						if (!uParam0->f_21)
						{
							return false;
						}
						else
						{
							iVar0 = 0;
						}
					}
				}
				iVar1++;
				return iVar0;
			}
		}
	}
}

int func_325(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_352(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

bool func_327(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_31(iParam2))
	{
		return true;
	}
	if (__LIB_0__::func_699(iParam2))
	{
		return false;
	}
	iVar0 = __LIB_6__::func_955(uParam0->f_7);
	if (!__LIB_1__::func_302(iParam2, iVar0))
	{
		__LIB_7__::func_23(iParam2, iVar0, uParam0->f_3, -1);
		return false;
	}
	iVar1 = func_362(iParam2, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	uParam0->f_107[iParam1 /*113*/].f_5 = iVar1;
	POPULATION::_0xF74E134F40192884(iVar1, 1);
	__LIB_0__::func_288(iParam2, 45, 1);
	return true;
}

int func_352(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_383(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
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

int func_362(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
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
				func_394(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

int func_383(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				if (!__LIB_3__::func_119(iParam0, vVar0, iParam6, iParam10))
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
				func_394(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

void func_394(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_394(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_394(iVar2, vParam1, fParam4, iParam5, iParam6);
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

