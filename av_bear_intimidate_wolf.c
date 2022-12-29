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
	int iLocal_13 = 0;
	var uLocal_14[3] = { 0, 0, 0 };
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	struct<23> Local_49 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	bool bLocal_74 = false;
	int iLocal_75 = 0;
	struct<13> ScriptParam_0 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<504> Var0;
	bool bVar504;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_9 = joaat("A_C_BEAR_01");
	iLocal_10 = joaat("WORLD_ANIMAL_BEAR_EAT_CARCASS");
	iLocal_12 = MISC::GET_RANDOM_INT_IN_RANGE(60, 71);
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
			if (__LIB_2__::func_844(uParam0) && func_18(uParam0))
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
	__LIB_2__::func_851(uParam0, 10978, 11166, 13226);
}

void func_14(var uParam0, vector3 vParam1, vector3 vParam4)
{
	__LIB_2__::func_853(uParam0, "BEAR_INTIMIDATE_WOLF", "", vParam1, vParam4);
	__LIB_2__::func_902(uParam0, 0, "BIW_BEAR", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, 0f, 0f), (0f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_902(uParam0, 1, "BIW_WOLF", joaat("A_C_WOLF"), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 16f, 20f, 0f), (vParam4.z + 135f), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_902(uParam0, 2, "BIW_DEER", joaat("A_C_DEER_01"), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -0.5f, 1f, 0f), (vParam4.z - 90f), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
}

int func_18(var uParam0)
{
	if ((((((((!STREAMING::HAS_ANIM_DICT_LOADED("creatures_mammal@bear@action@canter") || !STREAMING::HAS_ANIM_DICT_LOADED("creatures_mammal@bear@action@canter@bluff")) || !STREAMING::HAS_ANIM_DICT_LOADED("creatures_mammal@bear@action_standing@transition@action_to_standing")) || !STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_MAMMAL@BEAR@ACTION_STANDING@IDLE@IDLE_VARIATION@ROAR")) || !STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_MAMMAL@BEAR@ACTION_STANDING@TRANSITION@STANDING_TO_IDLE")) || !STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_MAMMAL@DEER@NORMAL@DEAD")) || !STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_MAMMAL@BEAR@ACTION@IDLE@IDLE_VARIATION@ACTION_IDLE_A")) || !STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_MAMMAL@BEAR@ACTION@IDLE")) || !STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_MAMMAL@BEAR@ACTION@IDLE@IDLE_VARIATION@ACTION_IDLE_C"))
	{
		return 0;
	}
	return __LIB_2__::func_907(uParam0, uParam0->f_20[2 /*14*/].f_5);
}

int func_30(var uParam0)
{
	STREAMING::REQUEST_ANIM_DICT("CREATURES_MAMMAL@DEER@NORMAL@DEAD");
	STREAMING::REQUEST_ANIM_DICT("creatures_mammal@bear@action@canter");
	STREAMING::REQUEST_ANIM_DICT("creatures_mammal@bear@action@canter@bluff");
	STREAMING::REQUEST_ANIM_DICT("creatures_mammal@bear@action_standing@transition@action_to_standing");
	STREAMING::REQUEST_ANIM_DICT("CREATURES_MAMMAL@BEAR@ACTION_STANDING@IDLE@IDLE_VARIATION@ROAR");
	STREAMING::REQUEST_ANIM_DICT("CREATURES_MAMMAL@BEAR@ACTION_STANDING@TRANSITION@STANDING_TO_IDLE");
	STREAMING::REQUEST_ANIM_DICT("CREATURES_MAMMAL@BEAR@ACTION@IDLE@IDLE_VARIATION@ACTION_IDLE_A");
	STREAMING::REQUEST_ANIM_DICT("CREATURES_MAMMAL@BEAR@ACTION@IDLE@IDLE_VARIATION@ACTION_IDLE_C");
	STREAMING::REQUEST_ANIM_DICT("CREATURES_MAMMAL@BEAR@ACTION@IDLE");
	__LIB_2__::func_887(&uLocal_21, 0);
	__LIB_1__::func_398(&uLocal_21, 1);
	__LIB_1__::func_401(&uLocal_21, 1);
	__LIB_2__::func_828(&uLocal_21, 1);
	__LIB_2__::func_829(&uLocal_21, 1);
	__LIB_1__::func_397(&uLocal_21, 1);
	__LIB_2__::func_830(&uLocal_21, 1);
	__LIB_2__::func_906(&uLocal_21, 55);
	Local_49 = { 0f, 0f, 0f };
	Local_49.f_8 = 4;
	Local_49.f_4 = 21030;
	Local_49.f_21 = 3;
	Local_49.f_22 = 3;
	Local_49.f_19 = 3;
	Local_49.f_20 = 2;
	Local_49.f_17 = 4;
	Local_49.f_18 = 0;
	Local_49.f_7 = -1;
	return 1;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_469[2])
	{
		if (__LIB_2__::func_908(uParam0, &uLocal_21, 0))
		{
			uParam0->f_469[2] = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
		{
			if (__LIB_0__::func_232(uParam0->f_20[1 /*14*/], Global_35, 1) < 625f)
			{
				uParam0->f_469[2] = 1;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
		{
			if (__LIB_0__::func_232(uParam0->f_20[0 /*14*/], Global_35, 1) < 625f)
			{
				uParam0->f_469[2] = 1;
			}
		}
		if (uParam0->f_469[2])
		{
			if (!uParam0->f_469[1])
			{
				__LIB_2__::func_881(*uParam0, 1);
				uParam0->f_469[1] = 1;
			}
			if (!uParam0->f_469[0])
			{
				__LIB_2__::func_890(*uParam0, uParam0->f_483, 1);
				uParam0->f_469[0] = 1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_20[1 /*14*/], Global_35, 3, 256, -1082130432 /* Float: -1f */, -1, 0);
				PED::_0x58F7DB5BD8FA2288(uParam0->f_20[1 /*14*/]);
				__LIB_2__::func_857(&(uParam0->f_20[1 /*14*/]), 0, 1);
				PED::SET_PED_KEEP_TASK(uParam0->f_20[1 /*14*/], true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
			{
				if (__LIB_0__::func_232(Global_35, uParam0->f_20[0 /*14*/], 1) < 1000f)
				{
					PED::_0x802092B07E3B1EEA(uParam0->f_20[0 /*14*/], Global_36, 0);
					TASK::TASK_COMBAT_PED(uParam0->f_20[0 /*14*/], Global_35, 0, 0);
				}
				else
				{
					PED::_0xEEED8FAFEC331A70(uParam0->f_20[0 /*14*/], Global_36, 0);
					TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_20[0 /*14*/], Global_35, 3, 256, -1082130432 /* Float: -1f */, -1, 0);
				}
				PED::SET_PED_KEEP_TASK(uParam0->f_20[0 /*14*/], true);
			}
			return 1;
		}
	}
	if (!uParam0->f_469[0])
	{
		if (iLocal_11 > 2 && iLocal_11 < 7)
		{
			if (__LIB_2__::func_889(uParam0, 4f, 90f, 4, joaat("ACTION"), 0))
			{
				__LIB_2__::func_890(*uParam0, uParam0->f_483, 1);
				uParam0->f_469[0] = 1;
			}
		}
	}
	if (__LIB_0__::func_272(uParam0->f_20[0 /*14*/], 0))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_20[0 /*14*/], 1, 1);
	}
	switch (iLocal_11)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
			{
				__LIB_0__::func_634(&(uParam0->f_20[0 /*14*/].f_5), 50, 10, 0);
				TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_20[0 /*14*/], iLocal_10, uParam0->f_20[0 /*14*/].f_5, uParam0->f_20[0 /*14*/].f_8, 0, false, true, 0, -1f, false);
				__LIB_2__::func_857(&(uParam0->f_20[0 /*14*/]), 1, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
			{
				__LIB_0__::func_634(&(uParam0->f_20[1 /*14*/].f_5), 50, 10, 0);
				TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_20[1 /*14*/], joaat("STAND"), uParam0->f_20[1 /*14*/].f_5, uParam0->f_20[1 /*14*/].f_8, 0, false, true, 0, -1f, false);
				PED::_0x89F5E7ADECCCB49C(uParam0->f_20[1 /*14*/], "action");
				__LIB_2__::func_857(&(uParam0->f_20[1 /*14*/]), 1, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[2 /*14*/]))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[2 /*14*/], 186, true);
				MISC::_0x674B90BE1115846D(uParam0->f_20[2 /*14*/], 1);
				PED::_SET_PED_QUALITY(uParam0->f_20[2 /*14*/], 0);
				TASK::TASK_PLAY_ANIM(uParam0->f_20[2 /*14*/], "CREATURES_MAMMAL@DEER@NORMAL@DEAD", "dead_left", 1000f, -1000f, -1, 131072, 0f, false, 0, false, 0, false);
				PERSISTENCE::_0x3CA5E58C9731A16B(uParam0->f_20[2 /*14*/], iLocal_12);
				PED::SET_PED_KEEP_TASK(uParam0->f_20[2 /*14*/], true);
			}
			iLocal_75 = VOLUME::_CREATE_VOLUME_SPHERE(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_483, uParam0->f_486.f_2, 8f, 10f, 0f), 0f, 0f, 0f, 20f, 20f, 20f);
			POPULATION::_0xB56D41A694E42E86(iLocal_75, 2016, 16384, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_75, 2016, 16384, 0, -1, -1, 0);
			iLocal_13 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), uParam0->f_483, -1f, -1f, -1f, -1f, -1f, -1, -1);
			iLocal_11 = 1;
			break;
		case 1:
			if (__LIB_2__::func_892(uParam0, uParam0->f_493, uParam0->f_494, 4, uParam0->f_495, 1112014848 /* Float: 50f */))
			{
				if (!uParam0->f_469[1])
				{
					__LIB_2__::func_881(*uParam0, 1);
					uParam0->f_469[1] = 1;
				}
				TASK::TASK_GO_TO_ENTITY(uParam0->f_20[1 /*14*/], uParam0->f_20[0 /*14*/], -1, 15f, 1f, 2f, 0);
				__LIB_1__::func_148(&uLocal_18);
				iLocal_11 = 2;
			}
			break;
		case 2:
			if (__LIB_1__::func_285(&uLocal_18, 8f))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_20[1 /*14*/], true, false);
					TASK::_0xE7FA07624574B79A(uParam0->f_20[0 /*14*/], uParam0->f_20[1 /*14*/], 3, 2, 1.5f, 1, 0, 0, 0);
					if (iLocal_13 != 0)
					{
						EVENT::REMOVE_SHOCKING_EVENT(iLocal_13);
					}
					iLocal_13 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), uParam0->f_483, -1f, -1f, -1f, -1f, -1f, -1, -1);
					__LIB_1__::func_148(&uLocal_18);
					iLocal_11 = 3;
				}
			}
			break;
		case 3:
			if (!bLocal_74)
			{
				if (__LIB_1__::func_285(&uLocal_18, 1.5f))
				{
					AUDIO::PLAY_ANIMAL_VOCALIZATION(uParam0->f_20[0 /*14*/], "TOUGH", false);
					bLocal_74 = true;
				}
			}
			if (__LIB_1__::func_285(&uLocal_18, 5f))
			{
				TASK::TASK_GO_TO_ENTITY(uParam0->f_20[1 /*14*/], uParam0->f_20[0 /*14*/], -1, 12f, 1f, 2f, 0);
				__LIB_1__::func_148(&uLocal_18);
				iLocal_11 = 4;
			}
			break;
		case 4:
			if (!__LIB_0__::func_163(uParam0->f_20[1 /*14*/], 1227113341))
			{
				if (__LIB_1__::func_285(&uLocal_18, 4.5f))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_20[0 /*14*/], 7.5f, 11f, 0f), 2f, -1, 0.25f, 8192, 40000f);
					TASK::TASK_PLAY_ANIM(0, "CREATURES_MAMMAL@BEAR@ACTION@IDLE@IDLE_VARIATION@ACTION_IDLE_A", "idle", 4f, -8f, -1, 0, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_ANIM(0, "CREATURES_MAMMAL@BEAR@ACTION@IDLE@IDLE_VARIATION@ACTION_IDLE_C", "idle", 4f, -8f, -1, 0, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_ANIM(0, "CREATURES_MAMMAL@BEAR@ACTION@IDLE", "idle", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_ANIM(0, "creatures_mammal@bear@action_standing@transition@action_to_standing", "idle_transition", 4f, -8f, -1, 0, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_ANIM(0, "CREATURES_MAMMAL@BEAR@ACTION_STANDING@IDLE@IDLE_VARIATION@ROAR", "idle", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_ANIM(0, "CREATURES_MAMMAL@BEAR@ACTION_STANDING@TRANSITION@STANDING_TO_IDLE", "idle_transition", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
					TASK::TASK_START_SCENARIO_AT_POSITION(0, iLocal_10, uParam0->f_20[0 /*14*/].f_5, uParam0->f_20[0 /*14*/].f_8, 0, true, false, 0, -1f, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_20[0 /*14*/], iVar0);
					PED::SET_PED_KEEP_TASK(uParam0->f_20[0 /*14*/], true);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					Local_49.f_3 = uParam0->f_20[1 /*14*/];
					Local_49.f_7 = 0;
					__LIB_1__::func_148(&uLocal_18);
					iLocal_11 = 6;
				}
			}
			break;
		case 6:
			if (__LIB_0__::func_232(uParam0->f_20[0 /*14*/], uParam0->f_20[1 /*14*/], 1) <= 121f)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_20[2 /*14*/].f_5, uParam0->f_20[2 /*14*/].f_8, -21.25f, 18.75f, 1f), 1.501f, -1, uParam0->f_20[1 /*14*/].f_8, 1056964608 /* Float: 0.5f */, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_20[0 /*14*/], -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_20[1 /*14*/], iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				iLocal_11 = 5;
			}
			break;
		case 5:
			if (__LIB_0__::func_272(uParam0->f_20[0 /*14*/], 0))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(uParam0->f_20[0 /*14*/], &Local_49);
			}
			if (__LIB_1__::func_285(&uLocal_18, 11f))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_20[1 /*14*/], uParam0->f_20[0 /*14*/], 8000, 0, 51, 0);
				PED::_0x58F7DB5BD8FA2288(uParam0->f_20[1 /*14*/]);
				TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_20[1 /*14*/], uParam0->f_20[0 /*14*/], 0, 256, -1082130432 /* Float: -1f */, -1, 0);
				PED::SET_PED_KEEP_TASK(uParam0->f_20[1 /*14*/], true);
				__LIB_1__::func_148(&uLocal_18);
				iLocal_11 = 7;
			}
			break;
		case 7:
			if (__LIB_1__::func_285(&uLocal_18, 40f))
			{
				iLocal_11 = 8;
			}
			break;
		case 8:
			return 1;
	}
	return 0;
}

int func_32(var uParam0, var uParam1)
{
	int iVar0;
	__LIB_2__::func_858(uParam0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_14[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT(uLocal_14[iVar0]);
		}
		iVar0++;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_75))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_75);
		POPULATION::_0xA1CFB35069D23C23(iLocal_75);
		VOLUME::_DELETE_VOLUME(iLocal_75);
	}
	if (iLocal_13 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_13);
	}
	return 1;
}

