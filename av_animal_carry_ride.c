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
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = -1;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 1097859072;
	var uLocal_29 = 1000;
	var uLocal_30 = 1067450368;
	var uLocal_31 = 5000;
	var uLocal_32 = 42;
	var uLocal_33 = 1103626240;
	var uLocal_34 = 1077936128;
	var uLocal_35 = 1106247680;
	var uLocal_36 = 1103101952;
	var uLocal_37 = 1097859072;
	var uLocal_38 = 1103626240;
	char* sLocal_39 = NULL;
	char* sLocal_40 = NULL;
	char* sLocal_41 = NULL;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	struct<13> ScriptParam_0 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<504> Var0;
	bool bVar504;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_10 = joaat("DEAD_CARRIABLE_DEER");
	sLocal_41 = "PD_Deer_Shot";
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
	__LIB_2__::func_851(uParam0, 11007, 11085, 12751);
}

void func_14(var uParam0, vector3 vParam1, vector3 vParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_2__::func_853(uParam0, "DEER_CARRY_RIDE", "", vParam1, vParam4);
	iVar0 = joaat("A_M_M_HTLROUGHTRAVELLERS_01");
	iVar1 = __LIB_2__::func_44(joaat("HORSE_CLASS_RIDING"), 1);
	iVar2 = joaat("A_C_DEER_01");
	switch (*uParam0)
	{
		case 38:
			iVar2 = joaat("A_C_DEER_01");
			iVar0 = __LIB_2__::func_900(__LIB_1__::func_898(), 0, 1, 0, 1, 0, 1);
			iLocal_10 = joaat("DEAD_CARRIABLE_DEER");
			sLocal_39 = "CREATURES_MAMMAL@DEER@NORMAL@DEAD";
			sLocal_40 = "dead_right";
			break;
		case 39:
			iVar0 = __LIB_2__::func_900(__LIB_1__::func_898(), 1, 1, 1, 1, 0, 1);
			iVar2 = joaat("A_C_DEER_01");
			iLocal_10 = joaat("DEAD_CARRIABLE_DEER");
			sLocal_39 = "CREATURES_MAMMAL@DEER@NORMAL@DEAD";
			sLocal_40 = "dead_right";
			break;
		case 41:
			iVar0 = __LIB_2__::func_900(__LIB_1__::func_898(), 1, 1, 1, 1, 0, 1);
			iVar2 = joaat("A_C_DUCK_01");
			iLocal_10 = joaat("DEAD_CARRIABLE_DUCK");
			sLocal_39 = "CREATURES_BIRD@DUCK@NORMAL@DEAD";
			sLocal_40 = "dead_left";
			break;
	}
	__LIB_2__::func_902(uParam0, 0, "DCRP_HORSE", iVar1, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, 0f, 0f), vParam4.z, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_902(uParam0, 1, "DCRP_MAN", iVar0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 1.5f, -2f, 0f), (-90f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	__LIB_2__::func_902(uParam0, 2, "DCRP_DEER", iVar2, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 3f, -2f, 0f), (10f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 0);
}

int func_18(var uParam0)
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_39))
	{
		return 0;
	}
	return 1;
}

int func_30(var uParam0)
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_39);
	__LIB_2__::func_887(&uLocal_11, 0);
	__LIB_1__::func_398(&uLocal_11, 1);
	__LIB_1__::func_401(&uLocal_11, 1);
	__LIB_2__::func_828(&uLocal_11, 1);
	__LIB_2__::func_829(&uLocal_11, 1);
	__LIB_2__::func_830(&uLocal_11, 1);
	__LIB_1__::func_402(&uLocal_11, 1);
	__LIB_1__::func_406(&uLocal_11, 1);
	__LIB_2__::func_903(&uLocal_11, 1);
	return 1;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_469[2])
	{
		if (__LIB_2__::func_940(uParam0, &uLocal_11, 1) || PED::_0x77525BBF433F2CD6(uParam0->f_20[1 /*14*/]))
		{
			func_68(uParam0);
			uParam0->f_469[2] = 1;
		}
		if (uParam0->f_469[2] == 1)
		{
			return 1;
		}
	}
	switch (iLocal_9)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
				{
					PED::_0x931B241409216C1F(uParam0->f_20[1 /*14*/], uParam0->f_20[0 /*14*/], 0);
					PED::_0x931B241409216C1F(uParam0->f_20[1 /*14*/], uParam0->f_20[2 /*14*/], 0);
					WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_20[1 /*14*/], true, true);
					__LIB_2__::func_231(uParam0->f_20[1 /*14*/], joaat("WEAPON_REPEATER_CARBINE"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
					WEAPON::_GIVE_WEAPON_TO_PED_2(uParam0->f_20[1 /*14*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 999, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_20[1 /*14*/], joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::_0x14FF0C2545527F9B(uParam0->f_20[0 /*14*/], joaat("WEAPON_REPEATER_CARBINE"), uParam0->f_20[1 /*14*/]);
					PED::_0xD355E2F1BB41087E(uParam0->f_20[1 /*14*/], 7f);
					__LIB_2__::func_857(&(uParam0->f_20[1 /*14*/]), 0, 1);
					__LIB_2__::func_857(&(uParam0->f_20[0 /*14*/]), 0, 1);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_20[1 /*14*/], 297, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_20[1 /*14*/], 130, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_20[1 /*14*/], 146, false);
					if (*uParam0 == 38)
					{
						vLocal_45 = { func_71(uParam0) };
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0->f_20[1 /*14*/], 3, 2, 1);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0->f_20[1 /*14*/], 4, 2, 1);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0->f_20[1 /*14*/], 7, 2, 1);
						PED::APPLY_PED_DAMAGE_PACK(uParam0->f_20[2 /*14*/], sLocal_41, 1f, 1f);
						TASK::TASK_CARRIABLE(uParam0->f_20[2 /*14*/], iLocal_10, uParam0->f_20[0 /*14*/], 0, 0);
						PED::_SET_PED_ON_MOUNT(uParam0->f_20[1 /*14*/], uParam0->f_20[0 /*14*/], -1, true);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[2 /*14*/]))
						{
							PED::SET_PED_CONFIG_FLAG(uParam0->f_20[2 /*14*/], 186, false);
						}
						iLocal_9 = 6;
						return 0;
					}
					else
					{
						__LIB_0__::func_634(&(uParam0->f_20[1 /*14*/].f_5), 50, 10, 0);
						func_73(uParam0->f_20[1 /*14*/], uParam0->f_20[1 /*14*/].f_5, uParam0->f_20[1 /*14*/].f_8, 2, 1073741824 /* Float: 2f */);
						__LIB_1__::func_473(uParam0->f_20[1 /*14*/], joaat("WORLD_HUMAN_CROUCH_INSPECT"), 0, 0, 0, -1082130432 /* Float: -1f */);
						PED::_0xED1C764997A86D5A(uParam0->f_20[1 /*14*/], uParam0->f_20[0 /*14*/]);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[2 /*14*/]))
						{
							__LIB_0__::func_634(&(uParam0->f_20[2 /*14*/].f_5), 50, 10, 0);
							func_73(uParam0->f_20[2 /*14*/], uParam0->f_20[2 /*14*/].f_5, uParam0->f_20[2 /*14*/].f_8, 2, 1073741824 /* Float: 2f */);
							PED::APPLY_PED_DAMAGE_PACK(uParam0->f_20[2 /*14*/], sLocal_41, 1f, 1f);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_20[2 /*14*/], 38, true);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_20[2 /*14*/], 243, true);
							EVENT::_0x9520175B35E2268D(uParam0->f_20[2 /*14*/], 1);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_20[2 /*14*/], 186, false);
							__LIB_2__::func_857(&(uParam0->f_20[2 /*14*/]), 1, 1);
							TASK::TASK_PLAY_ANIM(uParam0->f_20[2 /*14*/], sLocal_39, sLocal_40, 1000f, -1000f, -1, 131072, 0f, false, 0, false, 0, false);
						}
					}
				}
			}
			__LIB_1__::func_148(&uLocal_42);
			iLocal_9 = 1;
			break;
		case 6:
			if (__LIB_2__::func_892(uParam0, uParam0->f_493, uParam0->f_494, 4, uParam0->f_495, 1112014848 /* Float: 50f */))
			{
				WEAPON::_0xB832F1A686B9B810(uParam0->f_20[1 /*14*/], 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_20[1 /*14*/], 0, 0, 0, 0, 0);
				iLocal_9 = 2;
			}
			break;
		case 2:
			if (!PED::IS_PED_ON_MOUNT(uParam0->f_20[1 /*14*/]))
			{
				__LIB_1__::func_148(&uLocal_42);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[2 /*14*/]))
				{
					TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_20[1 /*14*/], uParam0->f_20[2 /*14*/]);
				}
				iLocal_9 = 3;
			}
			break;
		case 3:
			if (!__LIB_0__::func_163(uParam0->f_20[1 /*14*/], 1245594896))
			{
				__LIB_1__::func_148(&uLocal_42);
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_20[1 /*14*/], uParam0->f_20[2 /*14*/], vLocal_45, 1f, 0);
				iLocal_9 = 5;
			}
			break;
		case 5:
			if (!__LIB_0__::func_163(uParam0->f_20[1 /*14*/], -208384378))
			{
				iLocal_9 = 4;
			}
			break;
		case 4:
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0->f_20[1 /*14*/], 3, 2, 0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0->f_20[1 /*14*/], 4, 2, 0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0->f_20[1 /*14*/], 7, 2, 0);
			ENTITY::_0x18FF3110CF47115D(uParam0->f_20[2 /*14*/], 2, 0);
			PED::_0x6569F31A01B4C097(uParam0->f_20[2 /*14*/], 0, 0);
			PED::_0x6569F31A01B4C097(uParam0->f_20[2 /*14*/], 1, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_MOUNT_ANIMAL(0, uParam0->f_20[0 /*14*/], -1, -1, 1f, 1, 0, 0);
			TASK::_TASK_MOVE_IN_TRAFFIC(0, -1082130432 /* Float: -1f */, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_20[1 /*14*/], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			iLocal_9 = 9;
			break;
		case 1:
			if (__LIB_2__::func_892(uParam0, uParam0->f_493, uParam0->f_494, 4, uParam0->f_495, 1112014848 /* Float: 50f */))
			{
				func_68(uParam0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[2 /*14*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, uParam0->f_20[2 /*14*/]);
						TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(0, uParam0->f_20[2 /*14*/], uParam0->f_20[0 /*14*/], 1f);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_20[1 /*14*/], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					}
				}
				iLocal_9 = 7;
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
			{
				if (PED::_GET_CARRIER_AS_MOUNT(uParam0->f_20[2 /*14*/]) == uParam0->f_20[0 /*14*/])
				{
					__LIB_19__::func_91(uParam0->f_20[0 /*14*/], uParam0->f_20[2 /*14*/]);
					TASK::TASK_MOUNT_ANIMAL(uParam0->f_20[1 /*14*/], uParam0->f_20[0 /*14*/], -1, -1, 1f, 1, 0, 0);
					iLocal_9 = 8;
				}
			}
			break;
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
			{
				if (PED::IS_PED_ON_MOUNT(uParam0->f_20[1 /*14*/]))
				{
					TASK::_TASK_MOVE_IN_TRAFFIC(uParam0->f_20[1 /*14*/], -1082130432 /* Float: -1f */, 0, 0);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_20[1 /*14*/], 255, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_20[1 /*14*/], 297, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_20[1 /*14*/], 130, false);
					if (*uParam0 != 38)
					{
						PED::SET_PED_CONFIG_FLAG(uParam0->f_20[2 /*14*/], 517, true);
						PERSISTENCE::_0xE225CEF1901F6108(uParam0->f_20[2 /*14*/], 0);
					}
					PED::SET_PED_KEEP_TASK(uParam0->f_20[1 /*14*/], true);
					iLocal_9 = 9;
				}
			}
			break;
		case 9:
			if (!__LIB_0__::func_75(&uLocal_42))
			{
				__LIB_1__::func_148(&uLocal_42);
			}
			if (__LIB_1__::func_285(&uLocal_42, 5f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_32(var uParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0->f_20[1 /*14*/], 3, 2, 0);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0->f_20[1 /*14*/], 4, 2, 0);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uParam0->f_20[1 /*14*/], 7, 2, 0);
	}
	__LIB_2__::func_858(uParam0, 0, 0, 0);
	return 1;
}

void func_68(var uParam0)
{
	if (!uParam0->f_469[0])
	{
		__LIB_2__::func_881(*uParam0, 0);
		uParam0->f_469[0] = 1;
	}
	if (!uParam0->f_469[1])
	{
		__LIB_2__::func_890(*uParam0, uParam0->f_483, 0);
		uParam0->f_469[1] = 1;
	}
}

Vector3 func_71(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4[2];
	int iVar11;
	float fVar12;
	vVar0 = { 0f, 0f, 0f };
	fVar3 = 1E+11f;
	vVar4[0 /*3*/] = { -337.345f, 762.408f, 115.521f };
	vVar4[1 /*3*/] = { 1301.376f, -1281.298f, 74.8749f };
	iVar11 = 0;
	while (iVar11 < vVar4.x)
	{
		if (!__LIB_0__::func_86(vVar4[iVar11 /*3*/]))
		{
			fVar12 = BUILTIN::VDIST2(uParam0->f_483, vVar4[iVar11 /*3*/]);
			if (fVar12 < fVar3)
			{
				fVar3 = fVar12;
				vVar0 = { vVar4[iVar11 /*3*/] };
			}
		}
		iVar11++;
	}
	return vVar0;
}

void func_73(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_73(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_73(iVar2, vParam1, fParam4, iParam5, iParam6);
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

