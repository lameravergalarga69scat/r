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
	var uLocal_12[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<13> ScriptParam_0 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<504> Var0;
	bool bVar504;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_9 = joaat("A_C_CROW_01");
	iLocal_33 = joaat("META_OUTFIT_DEFAULT");
	iLocal_34 = joaat("WORLD_ANIMAL_CROW_EATING_GROUND");
	iLocal_43 = 10;
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
			if (__LIB_2__::func_844(uParam0) && __LIB_0__::func_16(uParam0))
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
	__LIB_2__::func_851(uParam0, 14251, 14260, 14943);
}

void func_14(var uParam0, vector3 vParam1, vector3 vParam4)
{
	int iVar0;
	__LIB_2__::func_853(uParam0, "BIRD_FLEE_SWARM", "", vParam1, vParam4);
	iVar0 = 1;
	switch (*uParam0)
	{
		case 79:
			iLocal_9 = joaat("A_C_BAT_01");
			iLocal_34 = joaat("STAND");
			break;
		case 90:
			iLocal_9 = joaat("A_C_CROW_01");
			iLocal_34 = joaat("WORLD_ANIMAL_CROW_EATING_GROUND");
			break;
		case 91:
		case 92:
			iLocal_9 = joaat("A_C_DUCK_01");
			iLocal_34 = joaat("WORLD_ANIMAL_DUCK_GROUND_RESTING");
			break;
		case 94:
			iLocal_9 = joaat("A_C_GOOSECANADA_01");
			iLocal_34 = joaat("WORLD_ANIMAL_GOOSECANADA_RESTING");
			break;
		case 95:
			iLocal_9 = joaat("A_C_PIGEON");
			iLocal_34 = joaat("WORLD_ANIMAL_PIGEON_EAT_GROUND");
			break;
		case 96:
		case 97:
		case 98:
			iLocal_9 = joaat("A_C_RAVEN_01");
			iLocal_34 = joaat("WORLD_ANIMAL_CROW_EATING_GROUND");
			break;
		case 99:
			if (uParam0->f_489 == 1)
			{
				uParam0->f_494 = 38f;
			}
			iLocal_9 = joaat("A_C_SEAGULL_01");
			iLocal_34 = joaat("WORLD_ANIMAL_SEAGULL_EAT_GROUND");
			break;
		case 100:
			iLocal_9 = joaat("A_C_SONGBIRD_01");
			iLocal_34 = joaat("WORLD_ANIMAL_SPARROW_EATING_GROUND");
			break;
		case 101:
			iLocal_9 = joaat("A_C_SPARROW_01");
			iLocal_34 = joaat("WORLD_ANIMAL_SPARROW_EATING_GROUND");
			break;
		case 93:
		case 163:
			iLocal_9 = joaat("A_C_DUCK_01");
			iLocal_34 = joaat("STAND");
			break;
	}
	if (*uParam0 == 79)
	{
		iLocal_43 = 20;
		__LIB_2__::func_902(uParam0, 0, "BFS_BIRD_1", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, 0f, 0f), (0f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 1, "BFS_BIRD_2", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -1f, 1f, 0f), (35f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 2, "BFS_BIRD_3", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 1f, 1f, 0f), (-45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 3, "BFS_BIRD_4", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 1f, 0f, 0f), (45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 4, "BFS_BIRD_5", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -2f, 0f, 0f), (-25f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 5, "BFS_BIRD_6", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -2f, -1f, 0f), (-35f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 6, "BFS_BIRD_7", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, -2f, 0f), (-45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 7, "BFS_BIRD_8", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 1f, -2f, 0f), (-15f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 8, "BFS_BIRD_9", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, -1f, 0f), (-45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 9, "BFS_BIRD_10", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 1f, -3f, 0f), (50f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 10, "BFS_BIRD_11", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, 0.5f, 0f), (0f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 11, "BFS_BIRD_12", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -2f, 2f, 0f), (35f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 12, "BFS_BIRD_13", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, 2f, 0f), (-45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 13, "BFS_BIRD_14", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, 0f, 0f), (45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 14, "BFS_BIRD_15", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -4f, 0f, 0f), (-100f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 15, "BFS_BIRD_16", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -4f, -2f, 0f), (-135f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 16, "BFS_BIRD_17", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, -4f, 0f), (-145f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 17, "BFS_BIRD_18", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, -4f, 0f), (-15f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 18, "BFS_BIRD_19", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 4f, -2f, 0f), (-45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 19, "BFS_BIRD_20", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, -6f, 0f), (50f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	}
	else if (*uParam0 == 93)
	{
		iLocal_43 = 20;
		__LIB_2__::func_902(uParam0, 0, "BFS_BIRD_1", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, 0f, 0f), (0f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 1, "BFS_BIRD_2", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -1f, 1f, 0f), (35f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 2, "BFS_BIRD_3", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 1f, 1f, 0f), (-45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 3, "BFS_BIRD_4", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 1f, 0f, 0f), (45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 4, "BFS_BIRD_5", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -2f, 0f, 0f), (-25f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 5, "BFS_BIRD_6", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -2f, -1f, 0f), (-35f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 6, "BFS_BIRD_7", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, -2f, 0f), (-45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 7, "BFS_BIRD_8", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 1f, -2f, 0f), (-15f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 8, "BFS_BIRD_9", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, -1f, 0f), (-45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 9, "BFS_BIRD_10", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 1f, -3f, 0f), (50f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 10, "BFS_BIRD_11", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, 0.5f, 0f), (0f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 11, "BFS_BIRD_12", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -2f, 2f, 0f), (35f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 12, "BFS_BIRD_13", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, 2f, 0f), (-45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 13, "BFS_BIRD_14", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, 0f, 0f), (45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 14, "BFS_BIRD_15", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -4f, 0f, 0f), (-50f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 15, "BFS_BIRD_16", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -4f, -2f, 0f), (75f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 16, "BFS_BIRD_17", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, -4f, 0f), (-65f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 17, "BFS_BIRD_18", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, -4f, 0f), (-15f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 18, "BFS_BIRD_19", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 4f, -2f, 0f), (-45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 19, "BFS_BIRD_20", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, -6f, 0f), (50f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	}
	else if (*uParam0 == 99 && uParam0->f_489 == 1)
	{
		iLocal_43 = 5;
		__LIB_2__::func_902(uParam0, 0, "BFS_BIRD_1", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, 0f, 0f), (0f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 1, "BFS_BIRD_2", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -1f, 1f, 0f), (135f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 2, "BFS_BIRD_3", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 1f, 1f, 0f), (-45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 3, "BFS_BIRD_4", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 1f, 0f, 0f), (45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 4, "BFS_BIRD_5", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -2f, 0f, 0f), (-100f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
	}
	else
	{
		if (*uParam0 == 100)
		{
			iLocal_33 = joaat("META_OUTFIT_ANIMAL_SONGBIRDTANAGER");
			iVar0 = 0;
		}
		__LIB_2__::func_902(uParam0, 0, "BFS_BIRD_1", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, 0f, 0f), (0f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 1, "BFS_BIRD_2", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -1f, 1f, 0f), (135f + vParam4.z), iVar0, 1, 1, 1, iLocal_33, 1);
		__LIB_2__::func_902(uParam0, 2, "BFS_BIRD_3", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 1f, 1f, 0f), (-45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 3, "BFS_BIRD_4", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 1f, 0f, 0f), (45f + vParam4.z), iVar0, 1, 1, 1, iLocal_33, 1);
		__LIB_2__::func_902(uParam0, 4, "BFS_BIRD_5", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -2f, 0f, 0f), (-100f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 5, "BFS_BIRD_6", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -2f, -1f, 0f), (-135f + vParam4.z), iVar0, 1, 1, 1, iLocal_33, 1);
		__LIB_2__::func_902(uParam0, 6, "BFS_BIRD_7", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, -2f, 0f), (-145f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 7, "BFS_BIRD_8", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 1f, -2f, 0f), (-15f + vParam4.z), iVar0, 1, 1, 1, iLocal_33, 1);
		__LIB_2__::func_902(uParam0, 8, "BFS_BIRD_9", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, -1f, 0f), (-45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		__LIB_2__::func_902(uParam0, 9, "BFS_BIRD_10", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 1f, -3f, 0f), (50f + vParam4.z), iVar0, 1, 1, 1, iLocal_33, 1);
		if (*uParam0 == 92 || *uParam0 == 98)
		{
			iLocal_43 = 20;
			__LIB_2__::func_902(uParam0, 10, "BFS_BIRD_11", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, 0.5f, 0f), (0f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			__LIB_2__::func_902(uParam0, 11, "BFS_BIRD_12", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -2f, 2f, 0f), (35f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			__LIB_2__::func_902(uParam0, 12, "BFS_BIRD_13", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, 2f, 0f), (-45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			__LIB_2__::func_902(uParam0, 13, "BFS_BIRD_14", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, 0f, 0f), (45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			__LIB_2__::func_902(uParam0, 14, "BFS_BIRD_15", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -4f, 0f, 0f), (-100f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			__LIB_2__::func_902(uParam0, 15, "BFS_BIRD_16", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -4f, -2f, 0f), (-135f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			__LIB_2__::func_902(uParam0, 16, "BFS_BIRD_17", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 0f, -4f, 0f), (-145f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			__LIB_2__::func_902(uParam0, 17, "BFS_BIRD_18", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, -4f, 0f), (-15f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			__LIB_2__::func_902(uParam0, 18, "BFS_BIRD_19", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 4f, -2f, 0f), (-45f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			__LIB_2__::func_902(uParam0, 19, "BFS_BIRD_20", iLocal_9, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, 2f, -6f, 0f), (50f + vParam4.z), 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
	}
}

int func_31(var uParam0)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bVar2 = true;
	switch (iLocal_10)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iLocal_41 /*14*/]))
			{
				if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_12[iLocal_41]))
				{
					if (*uParam0 != 93 && *uParam0 != 163)
					{
						__LIB_3__::func_409(&(uParam0->f_20[iLocal_41 /*14*/].f_5), 1088421888 /* Float: 7f */);
					}
					uLocal_12[iLocal_41] = __LIB_2__::func_944(iLocal_34, uParam0->f_20[iLocal_41 /*14*/].f_5, uParam0->f_20[iLocal_41 /*14*/].f_8, 0, 0, 0);
					TASK::_SET_SCENARIO_POINT_FLAG(uLocal_12[iLocal_41], 23, true);
					TASK::_SET_SCENARIO_POINT_FLAG(uLocal_12[iLocal_41], 25, true);
					if (*uParam0 == 93 || *uParam0 == 163)
					{
						TASK::_SET_SCENARIO_POINT_FLAG(uLocal_12[iLocal_41], 20, true);
						bVar2 = false;
					}
					if (*uParam0 == 79)
					{
						FLOCK::_0xFDB008B3BCF5992F(uParam0->f_20[iLocal_41 /*14*/], 35f, 35f);
					}
					TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_20[iLocal_41 /*14*/], uLocal_12[iLocal_41], 0, 0, false, bVar2, 0, false, -1f, false);
					__LIB_2__::func_857(&(uParam0->f_20[iLocal_41 /*14*/]), 0, 1);
				}
			}
			iLocal_41++;
			if (iLocal_41 >= iLocal_43)
			{
				iLocal_41 = 0;
				iLocal_10 = 1;
			}
			break;
		case 1:
			fVar0 = BUILTIN::VDIST2(Global_36, uParam0->f_20[0 /*14*/].f_5);
			if (__LIB_2__::func_892(uParam0, uParam0->f_493, uParam0->f_494, 4, uParam0->f_495, 1112014848 /* Float: 50f */))
			{
				bVar3 = true;
			}
			else if (fVar0 < 3600f && !__LIB_0__::func_1(uParam0->f_503, 1))
			{
				if (CAM::IS_SPHERE_VISIBLE(uParam0->f_20[0 /*14*/].f_5, 4f))
				{
					if (func_59(uParam0))
					{
						bVar3 = true;
					}
					else
					{
						iVar1 = 0;
						while (iVar1 < iLocal_43)
						{
							if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar1 /*14*/]))
							{
								if (PED::_0x77525BBF433F2CD6(uParam0->f_20[iVar1 /*14*/]))
								{
									bVar3 = true;
								}
								else
								{
									iVar1++;
								}
								if (bVar3)
								{
									__LIB_2__::func_881(*uParam0, 0);
									__LIB_2__::func_890(*uParam0, uParam0->f_483, 0);
									__LIB_1__::func_148(&uLocal_35);
									iLocal_10 = 3;
								}
								Jump @679; //curOff = 519
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[iLocal_41 /*14*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iLocal_41 /*14*/]) && !ENTITY::IS_ENTITY_DEAD(Global_35))
									{
										TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_20[iLocal_41 /*14*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
										PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iLocal_41 /*14*/], 230, true);
									}
								}
								iLocal_41++;
								if (iLocal_41 >= iLocal_43)
								{
									iLocal_41 = 0;
									__LIB_1__::func_148(&uLocal_35);
									iLocal_10 = 4;
								}
								Jump @679; //curOff = 630
								if (*uParam0 == 79)
								{
									if (__LIB_1__::func_285(&uLocal_35, 15f))
									{
										return 1;
									}
								}
								else if (__LIB_1__::func_285(&uLocal_35, 5f))
								{
									return 1;
								}
								return 0;
							}
						}
					}
				}
			}
			default:
				break;
	}
}

int func_32(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_12[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT(uLocal_12[iVar0]);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[iVar0 /*14*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
			{
			}
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_20[iVar0 /*14*/], true))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_20[iVar0 /*14*/]));
				if (STREAMING::IS_MODEL_VALID(uParam0->f_20[iVar0 /*14*/].f_2))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_20[iVar0 /*14*/].f_2);
				}
			}
			if (!bParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_39))
	{
		VOLUME::_DELETE_VOLUME(iLocal_39);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_11))
	{
		VOLUME::_DELETE_VOLUME(iLocal_11);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_40))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_40);
	}
	if (iLocal_42 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_42);
	}
	return 1;
}

bool func_59(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (MISC::IS_BULLET_IN_AREA(uParam0->f_20[0 /*14*/].f_5, 10f, false))
	{
		if (ITEMSET::IS_ITEMSET_VALID(iLocal_40))
		{
			ITEMSET::DESTROY_ITEMSET(iLocal_40);
			return true;
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_38) > 1000)
	{
		if (!ITEMSET::IS_ITEMSET_VALID(iLocal_40))
		{
			iLocal_40 = ITEMSET::CREATE_ITEMSET(true);
		}
		else
		{
			ITEMSET::_CLEAR_ITEMSET(iLocal_40);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_39))
		{
			if (*uParam0 == 90)
			{
				iLocal_39 = VOLUME::_CREATE_VOLUME_SPHERE(uParam0->f_20[0 /*14*/].f_5, 0f, 0f, 0f, 6f, 6f, 10f);
			}
			else if (*uParam0 == 93)
			{
				iLocal_39 = VOLUME::_CREATE_VOLUME_SPHERE(uParam0->f_20[0 /*14*/].f_5, 0f, 0f, 0f, 20f, 20f, 10f);
			}
			else
			{
				iLocal_39 = VOLUME::_CREATE_VOLUME_SPHERE(uParam0->f_20[0 /*14*/].f_5, 0f, 0f, 0f, 25f, 25f, 10f);
			}
		}
		iVar0 = ENTITY::_0x886171A12F400B89(iLocal_39, iLocal_40, 1);
		iVar2 = 0;
		while (iVar2 < iVar0)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iLocal_40);
			iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar1));
			if (PED::IS_PED_HUMAN(iVar3) || PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar3)))
			{
				ITEMSET::DESTROY_ITEMSET(iLocal_40);
				return true;
			}
			iVar2++;
		}
		iLocal_38 = MISC::GET_GAME_TIMER();
	}
	return false;
}

