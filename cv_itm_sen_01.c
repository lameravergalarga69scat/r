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
	bool bLocal_16 = false;
	bool bLocal_17 = false;
	vector3 vLocal_18 = { 0f, 0f, 0f };
	int iLocal_21 = 0;
	int iLocal_22[4] = { 0, 0, 0, 0 };
	int iLocal_27[4] = { 0, 0, 0, 0 };
	char* sLocal_32[4] = { NULL, NULL, NULL, NULL };
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	char* sLocal_39 = NULL;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<10> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_52 = NULL;
	bool bLocal_53 = false;
	struct<6> ScriptParam_0 = { -1, -1, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2268> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_38 = joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS");
	sLocal_39 = "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_D";
	sLocal_52 = "CCSEN_ITM_CNV_1";
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
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sLocal_52);
	if (PROPSET::_DOES_PROPSET_EXIST(iLocal_21))
	{
		PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iLocal_21);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (STREAMING::IS_MODEL_VALID(iLocal_27[iVar0]))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_27[iVar0]);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_22[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_22[iVar0]));
		}
		iVar0++;
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sLocal_52);
	__LIB_1__::func_281(&iLocal_40, 1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_952(uParam0, iLocal_15)))
	{
		MISC::_0xE98D55C5983F2509(__LIB_6__::func_952(uParam0, iLocal_15));
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
			if (func_36(uParam0))
			{
				__LIB_6__::func_936(uParam0, 2);
			}
			else
			{
				__LIB_6__::func_950(uParam0);
			}
			break;
		case 2:
			if (func_38(uParam0))
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
				if (func_41(uParam0))
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
			if (func_42(uParam0))
			{
				if (func_43(uParam0))
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
			if (func_44(uParam0))
			{
				__LIB_6__::func_936(uParam0, 6);
			}
			break;
		case 6:
			if (func_45(uParam0))
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
			if (func_47(uParam0))
			{
				__LIB_6__::func_935(uParam0);
				__LIB_6__::func_936(uParam0, 0);
				return false;
			}
			break;
	}
	return true;
}

bool func_36(var uParam0)
{
	if (!func_76(uParam0))
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

bool func_38(var uParam0)
{
	if (!func_79(uParam0))
	{
		return false;
	}
	if (!func_80(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_41(var uParam0)
{
	if (!func_88(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_111(uParam0))
	{
		return false;
	}
	if (!func_90(uParam0))
	{
		return false;
	}
	return true;
}

bool func_42(var uParam0)
{
	if (!func_91(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_92(uParam0))
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
	if (!func_94(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_112(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_44(var uParam0)
{
	if (!func_97(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_126(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_45(var uParam0)
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

bool func_47(var uParam0)
{
	if (!func_100(uParam0))
	{
		return false;
	}
	if (!__LIB_6__::func_954(uParam0))
	{
		return false;
	}
	return true;
}

bool func_76(var uParam0)
{
	__LIB_7__::func_116(uParam0, -142.169f, -44.28f, 94.534f, -0.776f, -1.451f, 139.069f);
	__LIB_7__::func_146(uParam0, "CSNI1AU");
	iLocal_15 = __LIB_7__::func_48(uParam0, 8, 0);
	__LIB_7__::func_46(uParam0, -1.1125f, 2.7375f, 0f, 80f, 3f, 3f, 1.5f, joaat("VOLCYLINDER"), 1);
	__LIB_7__::func_47(uParam0, -1.2625f, 2.3375f, 0.5445f, 80f, 2f, 2f, 1.5f, joaat("VOLCYLINDER"), -1, 1, 1, 1);
	Local_42 = { __LIB_7__::func_160(uParam0, -0.0875f, 2.67f, 0.564f, 46.75f, 7.6775f, 0.875f, 0.37f) };
	iLocal_14 = __LIB_6__::func_959(uParam0, "script@vignette@ITM@sean_item_1@action", 0, 0, 0, 1);
	__LIB_7__::func_172(uParam0, iLocal_15, 1);
	__LIB_7__::func_151(uParam0, iLocal_15, 2, -1);
	__LIB_7__::func_147(uParam0, iLocal_15, 4, 2, 0, 0, 0);
	iLocal_27[0] = joaat("P_CHAIR06X");
	iLocal_27[1] = joaat("P_BOTTLEJD01X");
	iLocal_27[2] = joaat("P_BOTTLE03X");
	iLocal_27[3] = joaat("P_CS_MOLOTOV_CLOTH");
	sLocal_32[0] = "CHAIR";
	sLocal_32[1] = "BOTTLEJD";
	sLocal_32[2] = "BOTTLE03";
	sLocal_32[3] = "CLOTH";
	STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_38, 1, 0, MISC::GET_HASH_KEY(sLocal_39));
	func_163();
	vLocal_18 = { __LIB_6__::func_972(uParam0, -1.26846f, 2.92052f, -0.0928986f) };
	return true;
}

bool func_79(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	if (!bLocal_17)
	{
		if (!CAM::IS_SPHERE_VISIBLE(vLocal_18, 1.4f))
		{
			MISC::CLEAR_AREA(vLocal_18, 1f, 2097152);
			bLocal_17 = true;
		}
		return false;
	}
	if (!func_172())
	{
		return false;
	}
	if (!bLocal_16)
	{
		if (!CAM::IS_SPHERE_VISIBLE(vLocal_18, 1.4f))
		{
			vVar0 = { __LIB_6__::func_972(uParam0, -1.318f, 2.9918f, -0.0536f) };
			fVar3 = __LIB_6__::func_973(uParam0, 74.90251f);
			iLocal_21 = PROPSET::_CREATE_PROPSET_2(joaat("PG_SCENARIO_MOLOTOVMAKE"), vVar0, 0, fVar3, 1200f, false, true);
			bLocal_16 = true;
		}
	}
	return bLocal_16;
}

bool func_80(var uParam0)
{
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	if (!func_174(uParam0))
	{
		return false;
	}
	return true;
}

bool func_88(var uParam0)
{
	if (func_180(uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_22[0], -143.669f, -46.5495f, 94.4451f, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_22[0], 29.12f);
		iLocal_37 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iLocal_22[0], iLocal_38, 0f, -0.07f, 0.5f, -180f, 0, 0, 0);
		TASK::_SET_SCENARIO_POINT_FLAG(iLocal_37, 23, true);
		TASK::_SET_SCENARIO_POINT_FLAG(iLocal_37, 25, true);
	}
	return true;
}

bool func_90(var uParam0)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_37) && ENTITY::DOES_ENTITY_EXIST(__LIB_6__::func_952(uParam0, iLocal_15)))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_22[1]))
		{
			PED::_0x2B02DB082258625F(__LIB_6__::func_952(uParam0, iLocal_15), iLocal_22[1], "p_bottleJD01x_ph_r_hand", iLocal_38, 0, 1);
		}
		TASK::_TASK_USE_SCENARIO_POINT(__LIB_6__::func_952(uParam0, iLocal_15), iLocal_37, sLocal_39, 0, false, true, 0, false, -1f, false);
	}
	return true;
}

bool func_91(var uParam0)
{
	if (!__LIB_7__::func_163(uParam0, Local_42, 1, 0))
	{
		__LIB_1__::func_281(&iLocal_40, 1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_952(uParam0, iLocal_15)))
		{
			MISC::_0xE98D55C5983F2509(__LIB_6__::func_952(uParam0, iLocal_15));
		}
		bLocal_53 = false;
		return false;
	}
	if (!bLocal_53)
	{
		MISC::_0x870708A6E147A9AD(__LIB_6__::func_952(uParam0, iLocal_15), "", 6f, 0, 0, 0, 0, 0, 0, -1);
		bLocal_53 = true;
	}
	iLocal_41 = 0;
	PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iLocal_41, 0, 0);
	if (iLocal_41 == 0)
	{
		__LIB_1__::func_281(&iLocal_40, 1, 1);
		return false;
	}
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_41) != __LIB_6__::func_952(uParam0, iLocal_15))
	{
		__LIB_1__::func_281(&iLocal_40, 1, 1);
		return false;
	}
	if (!__LIB_0__::func_139(iLocal_40))
	{
		iLocal_40 = func_199("INTERACT_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), __LIB_6__::func_952(uParam0, iLocal_15), 3, 0, 0, 0, 0, 6f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		__LIB_4__::func_12(iLocal_40, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(__LIB_6__::func_952(uParam0, iLocal_15)), 0, 1);
	}
	if (__LIB_1__::func_732(iLocal_40, 1))
	{
		iLocal_22[1] = PED::_0x4D0D2E3D8BC000EB(__LIB_6__::func_952(uParam0, iLocal_15), "p_bottleJD01x_ph_r_hand", 1);
		__LIB_6__::func_986(iLocal_22[1], uParam0->f_1984[iLocal_14], sLocal_32[1]);
		return true;
	}
	return false;
}

bool func_94(var uParam0)
{
	__LIB_7__::func_99(uParam0, iLocal_14, 1);
	__LIB_1__::func_281(&iLocal_40, 1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_952(uParam0, iLocal_15)))
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), __LIB_6__::func_952(uParam0, iLocal_15), sLocal_52, 0f, 0f, 0f, 0, sLocal_52);
		MISC::_0xE98D55C5983F2509(__LIB_6__::func_952(uParam0, iLocal_15));
	}
	return true;
}

bool func_97(var uParam0)
{
	if (__LIB_7__::func_272(__LIB_6__::func_952(uParam0, iLocal_15), -1457502635))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sLocal_52);
		__LIB_7__::func_393(18, 8, 1);
	}
	if (__LIB_7__::func_74(uParam0, iLocal_15))
	{
		PED::_0x2B02DB082258625F(__LIB_6__::func_952(uParam0, iLocal_15), iLocal_22[1], "p_bottleJD01x_ph_r_hand", iLocal_38, sLocal_39, 1);
		TASK::_TASK_USE_SCENARIO_POINT(__LIB_6__::func_952(uParam0, iLocal_15), iLocal_37, sLocal_39, 0, false, true, 0, false, -1f, false);
		PED::_0x2208438012482A1A(__LIB_6__::func_952(uParam0, iLocal_15), false, false);
		__LIB_1__::func_774(8, 0, 0, 0, 55f, 1, 1, 0, 0, 0, 0);
	}
	return true;
}

bool func_100(var uParam0)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_37))
	{
		if (!ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_952(uParam0, iLocal_15)))
		{
			if (PED::_IS_PED_USING_SCENARIO_POINT(__LIB_6__::func_952(uParam0, iLocal_15), iLocal_37))
			{
				return false;
			}
			else
			{
				TASK::_DELETE_SCENARIO_POINT(iLocal_37);
			}
		}
	}
	return true;
}

void func_163()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		STREAMING::REQUEST_MODEL(iLocal_27[iVar0], false);
		iVar0++;
	}
}

bool func_172()
{
	int iVar0;
	if (!PROPSET::_HAS_PROPSET_LOADED_2(joaat("PG_SCENARIO_MOLOTOVMAKE")))
	{
		PROPSET::_REQUEST_PROPSET_2(joaat("PG_SCENARIO_MOLOTOVMAKE"));
		return false;
	}
	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_38, false))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!STREAMING::IS_MODEL_VALID(iLocal_27[iVar0]))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(iLocal_27[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_174(var uParam0)
{
	switch (uParam0->f_2245)
	{
		case 0:
			if (uParam0->f_21 || func_266(uParam0))
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
			if (func_266(uParam0))
			{
				uParam0->f_2245 = 11;
			}
			break;
		case 11:
			return true;
	}
	return false;
}

bool func_180(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_22[iVar0] = func_287(iLocal_21, iLocal_27[iVar0], 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_22[iVar0]))
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < uParam0->f_1984)
			{
				if (iVar0 == 1)
				{
				}
				else if (!__LIB_7__::func_61(uParam0, iVar1))
				{
				}
				else
				{
					__LIB_6__::func_986(iLocal_22[iVar0], uParam0->f_1984[iVar1], sLocal_32[iVar0]);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return true;
}

int func_199(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945938[iVar0 /*18*/].f_11 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @142; //curOff = 129
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				__LIB_1__::func_578(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_266(var uParam0)
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
					uParam0->f_107[iVar1 /*113*/].f_5 = func_348(uParam0->f_107[iVar1 /*113*/].f_7, 1, 1, 0, 0, 1, 1, uParam0->f_107[iVar1 /*113*/].f_6, 0, 0, 0, 0, 0, 0, 0, 0, 0);
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
					if (!func_350(uParam0, iVar1, uParam0->f_107[iVar1 /*113*/].f_1))
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

int func_287(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iParam0, iVar0, uParam1, false, false);
	if (iVar1 == 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
		return 0;
	}
	iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iParam2, iVar0);
	iVar3 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar2);
	if (ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
	}
	return iVar3;
}

int func_348(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_396(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

bool func_350(var uParam0, int iParam1, int iParam2)
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
	iVar1 = func_406(iParam2, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	uParam0->f_107[iParam1 /*113*/].f_5 = iVar1;
	POPULATION::_0xF74E134F40192884(iVar1, 1);
	__LIB_0__::func_288(iParam2, 45, 1);
	return true;
}

int func_396(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_443(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
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

int func_406(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_453(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

int func_443(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				func_453(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

void func_453(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_453(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_453(iVar2, vParam1, fParam4, iParam5, iParam6);
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

