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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = -1;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 1097859072;
	var uLocal_37 = 1000;
	var uLocal_38 = 1067450368;
	var uLocal_39 = 5000;
	var uLocal_40 = 42;
	var uLocal_41 = 1103626240;
	var uLocal_42 = 1077936128;
	var uLocal_43 = 1106247680;
	var uLocal_44 = 1103101952;
	var uLocal_45 = 1097859072;
	var uLocal_46 = 1103626240;
	struct<13> ScriptParam_0 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<504> Var0;
	bool bVar504;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_9 = joaat("A_C_DEER_01");
	iLocal_10 = joaat("A_C_WOLF");
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
	__LIB_2__::func_851(uParam0, 11054, 11118, 11970);
}

void func_14(var uParam0, vector3 vParam1, vector3 vParam4)
{
	__LIB_2__::func_853(uParam0, "WOLVES_EAT_DEER", "", vParam1, vParam4);
	__LIB_2__::func_905(uParam0, 0, "WED1_DEER", iLocal_9, vParam1, vParam4.z, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_905(uParam0, 1, "WED1_WOLF_1", iLocal_10, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0.9f, -0.3f, 0f), (90f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_905(uParam0, 2, "WED1_WOLF_2", iLocal_10, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 3f, 2f, 0f), (135f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_905(uParam0, 3, "WED1_WOLF_3", iLocal_10, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -0.85f, -0.1f, 0f), (-70f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_905(uParam0, 4, "WED1_VULTURE_1", iLocal_11, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -2f, 0f, 23f), (0f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_905(uParam0, 5, "WED1_VULTURE_2", iLocal_11, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, 4f, 28f), (0f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_905(uParam0, 6, "WED1_VULTURE_3", iLocal_11, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, 0f, 25f), (0f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
}

int func_31(var uParam0)
{
	if (!uParam0->f_469[2])
	{
		if (__LIB_2__::func_908(uParam0, &uLocal_19, 0))
		{
			func_64(uParam0);
			__LIB_3__::func_12(uParam0);
			uParam0->f_469[2] = 1;
		}
		if (uParam0->f_469[2] == 1)
		{
			return 1;
		}
	}
	if (!MISC::_0x5170DDA6D63ACAAA(uParam0->f_20[0 /*14*/]))
	{
		MISC::_0x674B90BE1115846D(uParam0->f_20[0 /*14*/], 1);
	}
	switch (iLocal_12)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[0 /*14*/], 186, true);
				TASK::TASK_PLAY_ANIM(uParam0->f_20[0 /*14*/], sLocal_13, sLocal_14, 1000f, -1000f, -1, 131072, 0f, false, 0, false, 0, false);
				PERSISTENCE::_0x3CA5E58C9731A16B(uParam0->f_20[0 /*14*/], iLocal_15);
				PED::_SET_PED_QUALITY(uParam0->f_20[0 /*14*/], 0);
				PED::SET_PED_KEEP_TASK(uParam0->f_20[0 /*14*/], true);
				iLocal_16 = GRAPHICS::_0xFA50F79257745E74(uParam0->f_20[0 /*14*/].f_5, 1f, 1, -1, 0);
				iLocal_17 = GRAPHICS::_0xFA50F79257745E74(uParam0->f_20[0 /*14*/].f_5, 1.5f, 2, -1, 0);
				iLocal_18 = GRAPHICS::_0xFA50F79257745E74(uParam0->f_20[0 /*14*/].f_5, 1.5f, 4, -1, 0);
				__LIB_0__::func_634(&(uParam0->f_20[1 /*14*/].f_5), 50, 10, 0);
				TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_20[1 /*14*/], joaat("WORLD_ANIMAL_WOLF_EATING"), uParam0->f_20[1 /*14*/].f_5, uParam0->f_20[1 /*14*/].f_8, 0, false, true, 0, -1f, false);
				EVENT::_0x9520175B35E2268D(uParam0->f_20[1 /*14*/], 1);
				PED::SET_PED_KEEP_TASK(uParam0->f_20[1 /*14*/], true);
				__LIB_0__::func_634(&(uParam0->f_20[2 /*14*/].f_5), 50, 10, 0);
				TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_20[2 /*14*/], joaat("WORLD_ANIMAL_WOLF_SITTING"), uParam0->f_20[2 /*14*/].f_5, uParam0->f_20[2 /*14*/].f_8, 0, false, true, 0, -1f, false);
				PED::SET_PED_KEEP_TASK(uParam0->f_20[2 /*14*/], true);
				EVENT::_0x9520175B35E2268D(uParam0->f_20[2 /*14*/], 1);
				__LIB_0__::func_634(&(uParam0->f_20[3 /*14*/].f_5), 50, 10, 0);
				TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_20[3 /*14*/], joaat("WORLD_ANIMAL_WOLF_EATING"), uParam0->f_20[3 /*14*/].f_5, uParam0->f_20[3 /*14*/].f_8, 0, false, true, 0, -1f, false);
				PED::SET_PED_KEEP_TASK(uParam0->f_20[3 /*14*/], true);
				EVENT::_0x9520175B35E2268D(uParam0->f_20[3 /*14*/], 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[4 /*14*/]))
			{
				PED::FORCE_PED_MOTION_STATE(uParam0->f_20[4 /*14*/], -1299979036, false, 0, false);
				TASK::TASK_FLYING_CIRCLE(uParam0->f_20[4 /*14*/], 1f, uParam0->f_20[4 /*14*/].f_5, 0f, 15f);
				__LIB_2__::func_857(&(uParam0->f_20[4 /*14*/]), 0, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[5 /*14*/]))
			{
				PED::FORCE_PED_MOTION_STATE(uParam0->f_20[5 /*14*/], -1299979036, false, 0, false);
				TASK::TASK_FLYING_CIRCLE(uParam0->f_20[5 /*14*/], 1f, uParam0->f_20[5 /*14*/].f_5, 0f, 17f);
				__LIB_2__::func_857(&(uParam0->f_20[5 /*14*/]), 0, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[6 /*14*/]))
			{
				PED::FORCE_PED_MOTION_STATE(uParam0->f_20[6 /*14*/], -1299979036, false, 0, false);
				TASK::TASK_FLYING_CIRCLE(uParam0->f_20[6 /*14*/], 1f, uParam0->f_20[6 /*14*/].f_5, 0f, 18f);
				__LIB_2__::func_857(&(uParam0->f_20[6 /*14*/]), 0, 1);
			}
			iLocal_12 = 1;
			break;
		case 1:
			if (__LIB_2__::func_892(uParam0, uParam0->f_493, uParam0->f_494, 4, uParam0->f_495, 1112014848 /* Float: 50f */))
			{
				__LIB_3__::func_12(uParam0);
				func_64(uParam0);
				iLocal_12 = 2;
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_32(var uParam0, var uParam1)
{
	__LIB_2__::func_858(uParam0, 0, 0, 0);
	if (iLocal_16 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&iLocal_16, 1);
	}
	if (iLocal_17 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&iLocal_17, 1);
	}
	if (iLocal_18 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&iLocal_18, 1);
	}
	return 1;
}

void func_64(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
		{
			if (iVar0 > 3)
			{
				TASK::TASK_FLY_AWAY(uParam0->f_20[iVar0 /*14*/], Global_35);
			}
			__LIB_2__::func_857(&(uParam0->f_20[iVar0 /*14*/]), 0, 1);
		}
		iVar0++;
	}
}

