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
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	char* sLocal_13 = NULL;
	char* sLocal_14 = NULL;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = -1;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 1097859072;
	var uLocal_39 = 1000;
	var uLocal_40 = 1067450368;
	var uLocal_41 = 5000;
	var uLocal_42 = 42;
	var uLocal_43 = 1103626240;
	var uLocal_44 = 1077936128;
	var uLocal_45 = 1106247680;
	var uLocal_46 = 1103101952;
	var uLocal_47 = 1097859072;
	var uLocal_48 = 1103626240;
	int iLocal_49 = 0;
	struct<13> ScriptParam_0 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<504> Var0;
	bool bVar504;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_9 = joaat("A_M_M_UNICORPSE_01");
	iLocal_10 = joaat("A_C_RAT_01");
	iLocal_11 = joaat("A_C_VULTURE_01");
	sLocal_13 = "CREATURES_MAMMAL@DEER@NORMAL@DEAD";
	sLocal_14 = "dead_left";
	iLocal_15 = MISC::GET_RANDOM_INT_IN_RANGE(60, 71);
	Var0.f_1 = -1;
	Var0.f_3.f_9 = 3;
	Var0.f_20 = 25;
	Var0.f_20.f_1.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_9 = 1;
	Var0.f_20.f_1.f_10 = 1;
	Var0.f_20.f_1.f_11 = 1;
	Var0.f_20.f_1.f_12 = 1;
	Var0.f_20.f_1.f_13 = 1;
	Var0.f_20.f_1.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_372 = 10;
	Var0.f_372.f_1.f_7 = 1;
	Var0.f_372.f_1.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_8.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_8.f_8.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_7 = 1;
	Var0.f_469 = 10;
	Var0.f_482 = -1;
	Var0.f_493 = 1056964608;
	Var0.f_494 = 1119092736;
	Var0.f_495 = 1112014848;
	Var0.f_502 = 1259902591;
	Var0 = ScriptParam_0;
	Var0.f_1 = ScriptParam_0.f_11;
	Var0.f_483 = { ScriptParam_0.f_1 };
	Var0.f_486 = { ScriptParam_0.f_4 };
	Var0.f_489 = ScriptParam_0.f_7;
	Var0.f_20[0 /*14*/] = ScriptParam_0.f_8;
	Var0.f_453 = ScriptParam_0.f_9;
	Var0.f_500 = ScriptParam_0.f_10;
	Var0.f_503 = ScriptParam_0.f_12;
	func_1(&Var0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Stack.Push(&Var0);
		Stack.Push(1);
		Call_Loc(Var0.f_467);
		__LIB_2__::func_860(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar504 = false;
	while (!bVar504)
	{
		if (func_3(&Var0))
		{
			bVar504 = true;
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	func_4(uParam0);
}

bool func_3(var uParam0)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	if (uParam0->f_464 > 0 && uParam0->f_464 < 8)
	{
		if (uParam0->f_499)
		{
			uParam0->f_464 = 8;
		}
		else if (__LIB_2__::func_888(uParam0))
		{
			uParam0->f_464 = 8;
		}
	}
	switch (uParam0->f_464)
	{
		case 0:
			if (__LIB_0__::func_86(uParam0->f_483))
			{
				if ((MISC::GET_GAME_TIMER() - uParam0->f_481) > 1000)
				{
					iVar1 = 0;
					uParam0->f_482 = __LIB_2__::func_898(*uParam0, &iVar1, 1, 0, 0);
					if (uParam0->f_482 != -1)
					{
						uParam0->f_483 = { Global_1415419.f_2996[uParam0->f_482 /*7*/] };
						uParam0->f_486 = { Global_1415419.f_2996[uParam0->f_482 /*7*/].f_3 };
						uParam0->f_489 = Global_1415419.f_2996[uParam0->f_482 /*7*/].f_6;
						bVar0 = true;
					}
					else
					{
						uParam0->f_480++;
						uParam0->f_481 = MISC::GET_GAME_TIMER();
						if (uParam0->f_480 > 1)
						{
							__LIB_0__::func_8(&(Global_1415419.f_19[*uParam0 /*12*/].f_11), 1);
							uParam0->f_464 = 8;
						}
					}
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				__LIB_2__::func_891(*uParam0, uParam0->f_483, uParam0->f_1);
				TELEMETRY::_0x3145044F3990D321(__LIB_2__::func_841(*uParam0), uParam0->f_489, uParam0->f_483, uParam0->f_20[0 /*14*/], uParam0->f_453);
				fVar2 = __LIB_2__::func_861(*uParam0);
				if (fVar2 > 0f)
				{
					uParam0->f_496 = __LIB_2__::func_862(uParam0->f_483, fVar2, "AMB_VIG", 1, 0, 8, 0, -1082130432 /* Float: -1f */);
				}
				func_14(uParam0, uParam0->f_483, uParam0->f_486);
				if (Global_1415419.f_9758 != 0)
				{
					uParam0->f_18 = 1;
				}
				if (Global_1415419.f_19[*uParam0 /*12*/].f_6 != 4)
				{
					uParam0->f_497 = VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_483, 0f, 0f, 0f, __LIB_2__::func_842(uParam0));
					POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_497, 0, 0, 0, -1, -1, 0);
					uParam0->f_498 = VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_483, 0f, 0f, 0f, 15f, 15f, 10f);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_498, 224, 0, 0, -1, -1, 14);
					POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_498, 224, 0, 0, -1, -1, 0);
				}
				uParam0->f_464 = 1;
			}
			break;
		case 1:
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_465);
			if (StackVal)
			{
				uParam0->f_464 = 2;
			}
			break;
		case 2:
			if (__LIB_2__::func_843(uParam0))
			{
				uParam0->f_464 = 3;
			}
			break;
		case 3:
			if (__LIB_2__::func_844(uParam0) && __LIB_2__::func_984(uParam0))
			{
				uParam0->f_464 = 5;
			}
			else
			{
				return false;
			}
			break;
		case 5:
			if (__LIB_2__::func_879(uParam0))
			{
				__LIB_2__::func_884(uParam0);
				if (__LIB_2__::func_845(*uParam0))
				{
					__LIB_1__::func_572(uParam0->f_483, 6f, 1, 1, 0, 0, 0);
				}
				uParam0->f_464 = 4;
			}
			else
			{
				return false;
			}
			break;
		case 4:
			if ((__LIB_2__::func_846(uParam0) && __LIB_2__::func_883(uParam0)) && __LIB_2__::func_847(uParam0))
			{
				__LIB_2__::func_848(uParam0);
				uParam0->f_464 = 6;
			}
			else
			{
				return false;
			}
			break;
		case 6:
			__LIB_2__::func_849(uParam0);
			if (__LIB_0__::func_0(uParam0))
			{
				__LIB_2__::func_850(uParam0);
				uParam0->f_464 = 7;
			}
			break;
		case 7:
			__LIB_2__::func_849(uParam0);
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_466);
			if (StackVal)
			{
				if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_496))
				{
					VOLUME::_0xFDFECC6EE4491E11(uParam0->f_496);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_497))
				{
					POPULATION::_0xA1CFB35069D23C23(uParam0->f_497);
					__LIB_0__::func_172(uParam0->f_497);
				}
				uParam0->f_464 = 8;
			}
			break;
		case 8:
			Stack.Push(uParam0);
			Stack.Push(0);
			Call_Loc(uParam0->f_467);
			if (StackVal)
			{
				__LIB_2__::func_860(uParam0);
				uParam0->f_464 = 9;
			}
			break;
		case 9:
			return true;
	}
	return false;
}

void func_4(var uParam0)
{
	__LIB_2__::func_851(uParam0, 11265, 11322, 12158);
}

void func_14(var uParam0, vector3 vParam1, vector3 vParam4)
{
	__LIB_2__::func_853(uParam0, "RATS_EAT_DEER", "", vParam1, vParam4);
	iLocal_9 = joaat("A_M_M_UNICORPSE_01");
	sLocal_13 = "AI_DAMAGE@DEAD@BASE";
	sLocal_14 = "Dead_D";
	__LIB_2__::func_902(uParam0, 0, "RE1_DEER", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, 0f, 0f), (0f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_902(uParam0, 1, "RE1_RAT_1", iLocal_10, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0.329f, -0.23f, 0f), (15f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_902(uParam0, 2, "RE1_RAT_2", iLocal_10, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0.51f, 0.309f, 0f), (87f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_902(uParam0, 3, "RE1_RAT_3", iLocal_10, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0.51f, 0.04f, 0f), (98f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_902(uParam0, 4, "RE1_RAT_4", iLocal_10, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0.15f, 0.745f, 0f), (115f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_902(uParam0, 5, "RE1_RAT_5", iLocal_10, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -0.265f, 0.84f, 0f), (230f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_902(uParam0, 6, "RE1_RAT_6", iLocal_10, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -0.342f, 0.128f, 0f), (-90f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_902(uParam0, 7, "RE1_RAT_7", iLocal_10, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -0.63f, 0.77f, 0f), (-90f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_902(uParam0, 8, "RE1_VULTURE_1", iLocal_11, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, 0f, 25f), (0f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_902(uParam0, 9, "RE1_VULTURE_2", iLocal_11, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -2f, 0f, 23f), (0f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
}

int func_30(var uParam0)
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_13);
	__LIB_2__::func_887(&uLocal_21, 0);
	__LIB_1__::func_398(&uLocal_21, 1);
	__LIB_1__::func_401(&uLocal_21, 1);
	__LIB_2__::func_828(&uLocal_21, 1);
	__LIB_2__::func_829(&uLocal_21, 1);
	__LIB_2__::func_830(&uLocal_21, 1);
	return 1;
}

int func_31(var uParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	switch (iLocal_12)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
			{
				iLocal_19 = GRAPHICS::_0xFA50F79257745E74(uParam0->f_20[0 /*14*/].f_5, 1f, 1, 36, 0);
				iLocal_20 = GRAPHICS::_0xFA50F79257745E74(uParam0->f_20[0 /*14*/].f_5, 1.5f, 2, -1, 0);
				iVar0 = 1;
				while (iVar0 <= 7)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
					{
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_20[iVar0 /*14*/], uParam0->f_20[0 /*14*/], false);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_20[0 /*14*/], uParam0->f_20[iVar0 /*14*/], false);
						__LIB_0__::func_634(&(uParam0->f_20[iVar0 /*14*/].f_5), 50, 10, 0);
						TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_20[iVar0 /*14*/], joaat("WORLD_ANIMAL_RAT_EATING"), uParam0->f_20[iVar0 /*14*/].f_5, uParam0->f_20[iVar0 /*14*/].f_8, 0, false, true, 0, -1f, false);
						__LIB_2__::func_857(&(uParam0->f_20[iVar0 /*14*/]), 1, 1);
					}
					iVar0++;
				}
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[0 /*14*/], 186, true);
				TASK::TASK_PLAY_ANIM(uParam0->f_20[0 /*14*/], sLocal_13, sLocal_14, 1000f, -1000f, -1, 131072, 0f, false, 0, false, 0, false);
				PERSISTENCE::_0x3CA5E58C9731A16B(uParam0->f_20[0 /*14*/], iLocal_15);
				PED::SET_PED_KEEP_TASK(uParam0->f_20[0 /*14*/], true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[8 /*14*/]))
			{
				TASK::TASK_FLYING_CIRCLE(uParam0->f_20[8 /*14*/], 1f, uParam0->f_20[8 /*14*/].f_5, 0f, 15f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[9 /*14*/]))
			{
				TASK::TASK_FLYING_CIRCLE(uParam0->f_20[9 /*14*/], 1f, uParam0->f_20[9 /*14*/].f_5, 0f, 17f);
			}
			iLocal_12 = 1;
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[0 /*14*/]) && ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
			{
				if (!MISC::_0x5170DDA6D63ACAAA(uParam0->f_20[0 /*14*/]))
				{
					MISC::_0x674B90BE1115846D(uParam0->f_20[0 /*14*/], 1);
				}
				else if (__LIB_2__::func_892(uParam0, 1065353216 /* Float: 1f */, 10f, 5, 1109393408 /* Float: 40f */, 1112014848 /* Float: 50f */))
				{
					bVar1 = true;
				}
				else
				{
					iVar0 = 0;
					while (iVar0 < 10)
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
						{
							if (__LIB_2__::func_904(uParam0->f_20[iVar0 /*14*/], 0, &uLocal_21, &uVar2, 0, 0))
							{
								bVar1 = true;
							}
							else
							{
								iVar0++;
							}
							if (bVar1)
							{
								uParam0->f_469[0] = 1;
								__LIB_2__::func_881(*uParam0, 1);
								__LIB_2__::func_890(*uParam0, uParam0->f_483, 1);
								iLocal_12 = 2;
							}
							Jump @832; //curOff = 629
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[iLocal_49 /*14*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iLocal_49 /*14*/]) && !ENTITY::IS_ENTITY_DEAD(Global_35))
								{
									__LIB_2__::func_857(&(uParam0->f_20[iLocal_49 /*14*/]), 0, 1);
									if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[0 /*14*/]))
									{
										ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_20[iLocal_49 /*14*/], uParam0->f_20[0 /*14*/], false);
									}
									TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_20[iLocal_49 /*14*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
									PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iLocal_49 /*14*/], 230, true);
								}
								if (*uParam0 != 198)
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_20[iLocal_49 /*14*/]));
								}
							}
							iLocal_49++;
							if (iLocal_49 >= 10)
							{
								iLocal_49 = 0;
								__LIB_1__::func_148(&uLocal_16);
								iLocal_12 = 3;
							}
							Jump @832; //curOff = 808
							if (__LIB_1__::func_285(&uLocal_16, 15f))
							{
								return 1;
							}
							return 0;
						}
					}
				}
			}
			default:
				break;
	}
}

int func_32(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[iVar0 /*14*/]))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_20[iVar0 /*14*/], true))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
				{
				}
				if (!uParam0->f_469[0] && iVar0 == 0)
				{
					PED::DELETE_PED(&(uParam0->f_20[iVar0 /*14*/]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_20[iVar0 /*14*/]));
				}
				if (STREAMING::IS_MODEL_VALID(uParam0->f_20[iVar0 /*14*/].f_2))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_20[iVar0 /*14*/].f_2);
				}
			}
		}
		iVar0++;
	}
	STREAMING::REMOVE_ANIM_DICT(sLocal_13);
	if (iLocal_19 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&iLocal_19, 1);
	}
	if (iLocal_20 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&iLocal_20, 1);
	}
	return 1;
}

