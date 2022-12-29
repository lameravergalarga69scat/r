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
	struct<2> Local_14 = { 0, 0 } ;
	var uLocal_16 = 4;
	var uLocal_17 = 0;
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
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	struct<10> Var18;
	struct<55> Var28;
	struct<60> Var97;
	bool bVar158;
	vector3 vVar159;
	float fVar162;
	int iVar163;
	int iVar164;
	int iVar165;
	int iVar166;
	int iVar167;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Var28.f_5 = 8;
	Var28.f_14 = -1;
	Var28.f_22 = -1082130432;
	Var28.f_23 = -1;
	Var28.f_34 = 6;
	Var28.f_54.f_4 = 1;
	Var28.f_54.f_5 = 1;
	Var97.f_40 = 10000;
	Var97.f_58 = 1;
	Var97.f_59 = 34;
	bVar158 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1();
	}
	if (((Global_1347343 != -1 && Global_1347343 != 4) || __LIB_0__::func_13(2)) || __LIB_0__::func_6(Global_1347343.f_2))
	{
		func_4();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (bVar158)
	{
		BUILTIN::WAIT(0);
		if (!PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
		}
		bVar158 = !Global_1310720.f_8;
		switch (__LIB_14__::func_224())
		{
			case 1:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					MISC::PAUSE_DEATH_ARREST_RESTART(true);
					__LIB_0__::func_320(2);
				}
				if (Global_1934266.f_59)
				{
					SCRIPTS::REQUEST_SCRIPT("law_arrest");
					AUDIO::_0x6339C1EA3979B5F7("Title_Screen", "Arrest_Fail_Respawn_Scenes");
				}
				Global_1310720.f_11 = 1;
				break;
			case 2:
				if (Global_1934266.f_59)
				{
					Global_1934266.f_62 = func_7();
					Global_1934266.f_63 = __LIB_1__::func_905(__LIB_1__::func_898());
					func_10(Global_1934266.f_62, &(Global_40.f_9.f_7));
					func_11(Global_1934266.f_62, &Var97);
					Global_40.f_9.f_7 = { Var97.f_6 };
					Global_40.f_9.f_13 = 0f;
					Global_40.f_9.f_15 = __LIB_1__::func_447(Global_40.f_9.f_7, 1);
					STREAMING::SET_FOCUS_POS_AND_VEL(Global_40.f_9.f_7, 0f, 0f, 0f);
					STREAMING::_0x387AD749E3B69B70(Global_40.f_9.f_7, 0f, 0f, 0f, 10f, 0);
					MISC::PAUSE_DEATH_ARREST_RESTART(false);
					MISC::IGNORE_NEXT_RESTART(true);
					LAW::_0x55F37F5F3F2475E1();
				}
				else
				{
					LAW::_0x55F37F5F3F2475E1();
					Global_40.f_11956 = 0;
					vVar159 = { Global_36 };
					__LIB_3__::func_618(vVar159, 200f, 1, 0, 0, 0, 0);
				}
				Global_1310720.f_5 = MISC::GET_GAME_TIMER();
				__LIB_0__::func_267(0);
				__LIB_0__::func_320(3);
				break;
			case 3:
				__LIB_0__::func_320(4);
				break;
			case 4:
				if (Global_1934266.f_59)
				{
					__LIB_0__::func_320(5);
				}
				else
				{
					AUDIO::_0xAC84686C06184B0D("TITLE_SCREEN", "DEATH_FAIL_RESPAWN_SCENES");
					__LIB_0__::func_320(5);
				}
				break;
			case 5:
				if (!Global_1934266.f_59)
				{
					if (Global_1310720.f_7)
					{
						Local_14.f_1 = "TITLE_SCREEN_ENTER_OFF_MISSION";
						Local_14 = "DEATH_FAIL_RESPAWN_SOUNDS";
						Global_1935630.f_3 = func_15(&Local_14, "ALERT_PLAYER_DEAD", 0, 1);
					}
					CAM::DO_SCREEN_FADE_OUT(0);
					LAW::_0x062B4A4A3396351D(PLAYER::PLAYER_ID());
					__LIB_15__::func_108();
					__LIB_0__::func_320(6);
				}
				else
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					__LIB_0__::func_320(6);
				}
				break;
			case 6:
				Global_40.f_9.f_15 = __LIB_1__::func_447(Global_40.f_9.f_7, 1);
				__LIB_0__::func_320(7);
				break;
			case 7:
				PED::IS_PED_INJURED(Global_35);
				fVar162 = 0f;
				if (BUILTIN::VDIST(Global_40.f_9.f_7, 0f, 0f, 0f) > 1f)
				{
					Global_40.f_9.f_7.f_2 = (Global_40.f_9.f_7.f_2 + 1f);
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Global_40.f_9.f_7, &fVar162, false))
					{
						Global_40.f_9.f_7.f_2 = fVar162;
					}
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Global_40.f_9.f_7, false, true, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Global_40.f_9.f_13);
				}
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				Global_35 = PLAYER::PLAYER_PED_ID();
				Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
				STREAMING::CLEAR_FOCUS();
				STREAMING::_0x5A8B01199C3E79C3();
				PED::_0x4759CC730F947C81();
				VEHICLE::_0x1FF00DB43026B12F();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				func_17();
				func_18(0);
				func_19();
				func_20();
				__LIB_0__::func_320(8);
				break;
			case 8:
				iVar163 = func_21();
				iVar164 = 0;
				if (10000 + Global_1310720.f_4) < MISC::GET_GAME_TIMER()
				{
					iVar164 = 1;
				}
				if (iVar163 || iVar164)
				{
					__LIB_0__::func_320(9);
				}
				break;
			case 9:
				if (__LIB_0__::func_58())
				{
					iVar1 = -1;
					__LIB_0__::func_320(10);
				}
				else if (Global_1310720)
				{
					__LIB_0__::func_320(11);
				}
				else if (Global_1934266.f_59)
				{
					Global_1934266.f_65 = 0;
					__LIB_0__::func_320(13);
				}
				else
				{
					__LIB_0__::func_320(14);
				}
				break;
			case 11:
				if (func_23(Global_40.f_9.f_15))
				{
					SCRIPTS::REQUEST_SCRIPT("player_camp");
					if (SCRIPTS::HAS_SCRIPT_LOADED("player_camp"))
					{
						Var18 = 1;
						Global_1934266.f_58 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("player_camp", &Var18, 10, 6096);
						SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("player_camp");
						__LIB_0__::func_320(15);
						Global_1310720 = 0;
					}
				}
				break;
			case 10:
				if (func_23(Global_40.f_9.f_15))
				{
					iVar0 = __LIB_7__::func_821(Global_40.f_9.f_15);
					if (iVar1 == -1)
					{
						iVar1 = MISC::GET_GAME_TIMER();
					}
					if (iVar0 != -1)
					{
						if (VOLUME::_DOES_VOLUME_EXIST(Global_1395601.f_5[iVar0 /*28*/].f_23))
						{
							if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1395601.f_5[iVar0 /*28*/].f_24, false))
							{
								SCRIPTS::REQUEST_SCRIPT("property_use_core");
								if (SCRIPTS::HAS_SCRIPT_LOADED("property_use_core"))
								{
									Var28.f_2 = Global_1395601.f_5[iVar0 /*28*/].f_23;
									Var28.f_15 = 1;
									Global_1395601.f_5[iVar0 /*28*/].f_24 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("property_use_core", &Var28, 69, 6096);
									SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("property_use_core");
									__LIB_0__::func_320(15);
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iVar1 + 20000)
						{
							__LIB_0__::func_320(14);
						}
					}
					else
					{
						__LIB_0__::func_320(14);
					}
				}
				break;
			case 14:
				if ((Global_1310720.f_7 && !CAM::IS_SCREEN_FADED_IN()) && _NAMESPACE77::_0x07954320D77F6A3D(Global_1935630.f_3) >= 3)
				{
					CAM::DO_SCREEN_FADE_IN(0);
				}
				iVar167 = 1;
				iVar165 = 0;
				iVar166 = 0;
				if (!__LIB_0__::func_86(vVar159))
				{
					Global_1310720.f_18 = { vVar159 };
					Global_1310720.f_21 = __LIB_1__::func_447(vVar159, 0);
				}
				if (Global_40.f_9.f_11 >= 0)
				{
					iVar167 = 0;
				}
				if (func_26(15) && __LIB_0__::func_382(65536))
				{
					if (func_23(Global_40.f_9.f_15) || (10000 + Global_1310720.f_4) < MISC::GET_GAME_TIMER())
					{
						if (Global_40.f_9.f_10 >= 0)
						{
							Var18 = Global_40.f_9.f_10;
							Global_40.f_9.f_10 = -1;
						}
						else
						{
							func_28(Global_40.f_9.f_7, &iVar165, &iVar166, iVar167, 1, 0, 0, 10f, 50f);
							Var18 = iVar165;
							Global_40.f_9.f_11 = iVar166;
						}
						Var2 = { Var18 };
						StringCopy(&(Var2.f_10), "respawn_dump_body", 32);
						Var2.f_14 = 1024;
						Var2.f_15 = 1;
						__LIB_4__::func_709(Var2, 0);
						__LIB_0__::func_320(15);
					}
				}
				break;
			case 13:
				if (func_23(Global_40.f_9.f_15))
				{
					if (!Global_1934266.f_65)
					{
						if (!STREAMING::_0xCF45DF50C7775F2A())
						{
							STREAMING::_0x387AD749E3B69B70(Global_40.f_9.f_7, BUILTIN::COS((Global_40.f_9.f_13 + 90f)), BUILTIN::SIN((Global_40.f_9.f_13 + 90f)), 0f, 10f, 0);
							Global_1934266.f_64 = MISC::GET_GAME_TIMER();
						}
					}
					Global_1934266.f_65 = 1;
					if ((!STREAMING::_0xCF45DF50C7775F2A() || STREAMING::_0x0909F71B5C070797()) || MISC::GET_GAME_TIMER() >= Global_1934266.f_64 + 30000)
					{
						if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1934266.f_58, false))
						{
							SCRIPTS::REQUEST_SCRIPT("law_arrest");
							if (SCRIPTS::HAS_SCRIPT_LOADED("law_arrest"))
							{
								Global_1934266.f_59 = 0;
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
								if (STREAMING::_0xCF45DF50C7775F2A())
								{
									STREAMING::CLEAR_FOCUS();
									STREAMING::_0x5A8B01199C3E79C3();
								}
								AUDIO::_0x9428447DED71FC7E("Arrest_Fail_Respawn_Scenes");
								CAM::DO_SCREEN_FADE_OUT(0);
								Global_1934266.f_58 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("law_arrest", &Var97, 61, 10000);
								SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("law_arrest");
								__LIB_0__::func_320(15);
							}
						}
					}
				}
				break;
			case 15:
				break;
		}
	}
	func_1();
}

void func_1()
{
	__LIB_1__::func_952();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4()
{
	__LIB_0__::func_8(&Global_1935630, 4096);
	Global_40.f_9.f_15 = -1;
	__LIB_0__::func_320(0);
	Global_40.f_9.f_12 = 0;
	Global_1310720.f_4 = 0;
	Global_1310720.f_7 = 0;
	Global_1310720.f_13 = 0;
	Global_1310720.f_14 = 0;
	Global_1310720.f_12 = 0;
	Global_1310720.f_27 = 0;
	Global_1310720.f_28 = 0;
	Global_1310720.f_29 = -1;
	Global_1935630.f_4 = 0;
	Global_1897952.f_40 = 0;
	Global_1310720.f_24 = joaat("WEAPON_UNARMED");
	Global_1310720.f_22 = -1;
	__LIB_1__::func_954(0);
}

int func_7()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_898();
	switch (iVar0)
	{
		case 8:
			iVar1 = 57;
			break;
		case 10:
			iVar1 = 78;
			break;
		case 11:
			if (Global_1894899.f_187 || __LIB_9__::func_19(105))
			{
				iVar1 = 5;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		case 1:
			if (((__LIB_17__::func_511(11) || __LIB_4__::func_60(Global_1835011[11 /*74*/].f_1)) || __LIB_1__::func_44(Global_1835011[11 /*74*/].f_1)) || __LIB_9__::func_19(26))
			{
				iVar1 = 76;
			}
			else
			{
				iVar1 = 26;
			}
			break;
		case 0:
		case 2:
			iVar1 = 5;
			break;
		case 3:
		case 5:
		case 6:
		case 7:
		case 9:
			if (__LIB_9__::func_19(76))
			{
				iVar1 = 78;
			}
			else
			{
				iVar1 = 76;
			}
			break;
		case 4:
		case 12:
			if ((!__LIB_0__::func_28() || Global_1934266.f_56 == 1) || __LIB_1__::func_25(Global_1835011[58 /*74*/].f_1, 1))
			{
				iVar1 = 38;
			}
			else if (((__LIB_17__::func_511(11) || __LIB_4__::func_60(Global_1835011[11 /*74*/].f_1)) || __LIB_1__::func_44(Global_1835011[11 /*74*/].f_1)) || __LIB_9__::func_19(26))
			{
				iVar1 = 76;
			}
			else
			{
				iVar1 = 26;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			iVar1 = 115;
			break;
		default:
			iVar1 = -1;
			break;
	}
	return iVar1;
}

int func_10(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 5:
			*uParam1 = { 2503.741f, -1307.135f, 47.9537f };
			return 1;
		case 26:
			*uParam1 = { -1810.262f, -351.5755f, 160.4386f };
			return 1;
		case 38:
			*uParam1 = { -766.9637f, -1264.285f, 42.9484f };
			return 1;
		case 57:
			*uParam1 = { 2903.666f, 1315.805f, 44.3104f };
			return 1;
		case 76:
			*uParam1 = { -272.4204f, 811.132f, 118.3688f };
			return 1;
		case 78:
			*uParam1 = { 2903.666f, 1315.805f, 44.3104f };
			return 1;
		case 105:
			*uParam1 = { 1355.763f, -1301.361f, 76.7643f };
			return 1;
		case 115:
			*uParam1 = { -5529.573f, -2927.617f, -0.6848f };
			break;
		default:
			*uParam1 = { 2903.666f, 1315.805f, 44.3104f };
			return 1;
	}
	return 0;
}

int func_11(int iParam0, var uParam1)
{
	bool bVar0;
	uParam1->f_58 = 1;
	uParam1->f_59 = 34;
	if (__LIB_1__::func_185(16) && !__LIB_1__::func_185(21))
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	switch (iParam0)
	{
		case 5:
			uParam1->f_3 = { 2503.741f, -1307.135f, 47.9537f };
			uParam1->f_6 = { 2503.741f, -1307.135f, 47.9537f };
			uParam1->f_9 = { 2502.73f, -1309.843f, 50.6283f };
			uParam1->f_12 = { -11.6079f, 0f, -14.2586f };
			uParam1->f_15 = { 2505.388f, -1309.63f, 50.6283f };
			uParam1->f_18 = { -11.6079f, 0f, 21.707f };
			uParam1->f_21 = { 2517.845f, -1306.583f, 47.9532f };
			uParam1->f_24 = { -26.7304f, 0f, 25.2209f };
			if (!__LIB_9__::func_19(5))
			{
				uParam1->f_27 = { 2517.845f, -1306.583f, 47.9532f };
				uParam1->f_30 = { 2517.845f, -1306.583f, 47.9532f };
				uParam1->f_33 = 275.7476f;
			}
			else
			{
				uParam1->f_27 = { 2158.207f, -1334.824f, 41.852f };
				uParam1->f_30 = { 2153.072f, -1332.934f, 42.0877f };
				uParam1->f_33 = 63.3853f;
			}
			uParam1->f_34 = { 2517.845f, -1306.583f, 47.9532f };
			uParam1->f_37 = { 2517.845f, -1306.583f, 47.9532f };
			uParam1->f_2 = -1;
			uParam1->f_60 = 5;
			return 1;
		case 26:
			if (!__LIB_9__::func_19(26))
			{
				uParam1->f_3 = { -1810.262f, -351.5755f, 160.4386f };
				uParam1->f_6 = { -1810.262f, -351.5755f, 160.4386f };
				uParam1->f_9 = { -1810.599f, -353.7559f, 162.963f };
				uParam1->f_12 = { -28.1011f, 0f, -8.544f };
				uParam1->f_15 = { -1812.176f, -352.5742f, 162.963f };
				uParam1->f_18 = { -28.2679f, 0f, -55.9402f };
				uParam1->f_21 = { -1801.609f, -346.8549f, 165.8972f };
				uParam1->f_24 = { -6.9047f, 0f, 128.5486f };
				uParam1->f_27 = { -1803.986f, -351.9818f, 163.1167f };
				uParam1->f_30 = { -1801.529f, -353.1572f, 163.0777f };
				uParam1->f_33 = 243.1584f;
				uParam1->f_34 = { -1809.85f, -349.1629f, 163.6478f };
				uParam1->f_37 = { -1805.275f, -352.656f, 163.1386f };
				uParam1->f_2 = 472;
				uParam1->f_60 = 26;
			}
			else
			{
				uParam1->f_3 = { -272.597f, 810.9159f, 118.3688f };
				uParam1->f_6 = { -272.597f, 810.9159f, 118.3688f };
				uParam1->f_9 = { -273.5943f, 810.2109f, 120.875f };
				uParam1->f_12 = { -33.6383f, 0f, -50.2445f };
				uParam1->f_15 = { -273.971f, 811.4304f, 120.875f };
				uParam1->f_18 = { -33.6383f, 0f, -91.7191f };
				uParam1->f_21 = { -271.6968f, 801.6126f, 120.311f };
				uParam1->f_24 = { -6.6603f, 0f, 84.6681f };
				uParam1->f_27 = { -275.209f, 797.9658f, 117.9365f };
				uParam1->f_30 = { -275.0261f, 795.0437f, 117.7023f };
				uParam1->f_33 = 182.3676f;
				uParam1->f_34 = { -275.8173f, 805.5717f, 118.3864f };
				uParam1->f_37 = { -276.4383f, 800.1778f, 118.4085f };
				uParam1->f_2 = 3;
				uParam1->f_60 = 76;
			}
			return 1;
		case 38:
			uParam1->f_3 = { -766.9637f, -1264.285f, 42.9484f };
			uParam1->f_6 = { -766.9637f, -1264.285f, 42.9484f };
			uParam1->f_9 = { -767.8228f, -1265.614f, 45.4401f };
			uParam1->f_12 = { -40.1575f, 0f, -28.7499f };
			uParam1->f_15 = { -766.1311f, -1265.554f, 45.4401f };
			uParam1->f_18 = { -40.1575f, 0f, 31.4592f };
			uParam1->f_21 = { -756.7747f, -1270.037f, 45.4809f };
			uParam1->f_24 = { -19.0657f, 0f, -96.9653f };
			if (!__LIB_9__::func_19(38))
			{
				uParam1->f_27 = { -754.2406f, -1269.955f, 43.0754f };
				uParam1->f_30 = { -751.5127f, -1270.165f, 42.449f };
				uParam1->f_33 = 265.8834f;
			}
			else
			{
				uParam1->f_27 = { -1058.057f, -1216.424f, 62.3631f };
				uParam1->f_30 = { -1061.885f, -1216.49f, 62.6087f };
				uParam1->f_33 = 96.0826f;
			}
			uParam1->f_34 = { -756.3996f, -1272.202f, 43.1796f };
			uParam1->f_37 = { -754.8086f, -1272.261f, 43.1187f };
			uParam1->f_2 = 509;
			uParam1->f_60 = 38;
			return 1;
		case 57:
			uParam1->f_3 = { 2903.666f, 1315.805f, 44.3104f };
			uParam1->f_6 = { 2903.666f, 1315.805f, 44.3104f };
			uParam1->f_9 = { 2904.578f, 1316.083f, 45.674f };
			uParam1->f_12 = { -27.1441f, 0f, 80.0971f };
			uParam1->f_15 = { 2903.999f, 1314.985f, 45.674f };
			uParam1->f_18 = { -27.1441f, 0f, 34.3462f };
			uParam1->f_21 = { 2950.544f, 1354.832f, 46.5247f };
			uParam1->f_24 = { -19.8757f, 0f, -27.5102f };
			if (!__LIB_9__::func_19(57))
			{
				uParam1->f_27 = { 2912.547f, 1310.123f, 43.6438f };
				uParam1->f_30 = { 2914.968f, 1309.185f, 43.4608f };
				uParam1->f_33 = 246.9621f;
			}
			else
			{
				uParam1->f_27 = { 2820.362f, 1139.3f, 47.8403f };
				uParam1->f_30 = { 2818.865f, 1135.519f, 47.8328f };
				uParam1->f_33 = 158.4311f;
			}
			uParam1->f_34 = { 2955.716f, 1357.495f, 44.1385f };
			uParam1->f_37 = { 2951.752f, 1359.711f, 44.1435f };
			uParam1->f_2 = 382;
			uParam1->f_60 = 78;
			return 1;
		case 76:
			if (!__LIB_9__::func_19(76))
			{
				uParam1->f_3 = { -272.597f, 810.9159f, 118.3688f };
				uParam1->f_6 = { -272.597f, 810.9159f, 118.3688f };
				uParam1->f_9 = { -273.5943f, 810.2109f, 120.875f };
				uParam1->f_12 = { -33.6383f, 0f, -50.2445f };
				uParam1->f_15 = { -273.971f, 811.4304f, 120.875f };
				uParam1->f_18 = { -33.6383f, 0f, -91.7191f };
				uParam1->f_21 = { -271.6968f, 801.6126f, 120.311f };
				uParam1->f_24 = { -6.6603f, 0f, 84.6681f };
				uParam1->f_27 = { -275.209f, 797.9658f, 117.9365f };
				uParam1->f_30 = { -275.0261f, 795.0437f, 117.7023f };
				uParam1->f_33 = 182.3676f;
				uParam1->f_34 = { -275.8173f, 805.5717f, 118.3864f };
				uParam1->f_37 = { -276.4383f, 800.1778f, 118.4085f };
				uParam1->f_2 = 3;
				uParam1->f_60 = 76;
			}
			else
			{
				uParam1->f_3 = { 2903.666f, 1315.805f, 44.3104f };
				uParam1->f_6 = { 2903.666f, 1315.805f, 44.3104f };
				uParam1->f_9 = { 2904.578f, 1316.083f, 45.674f };
				uParam1->f_12 = { -27.1441f, 0f, 80.0971f };
				uParam1->f_15 = { 2903.999f, 1314.985f, 45.674f };
				uParam1->f_18 = { -27.1441f, 0f, 34.3462f };
				uParam1->f_21 = { 2950.544f, 1354.832f, 46.5247f };
				uParam1->f_24 = { -19.8757f, 0f, -27.5102f };
				uParam1->f_27 = { 2912.547f, 1310.123f, 43.6438f };
				uParam1->f_30 = { 2914.968f, 1309.185f, 43.4608f };
				uParam1->f_33 = 246.9621f;
				uParam1->f_34 = { 2955.716f, 1357.495f, 44.1385f };
				uParam1->f_37 = { 2951.752f, 1359.711f, 44.1435f };
				uParam1->f_2 = 382;
				uParam1->f_60 = 78;
			}
			return 1;
		case 78:
			uParam1->f_3 = { 2903.666f, 1315.805f, 44.3104f };
			uParam1->f_6 = { 2903.666f, 1315.805f, 44.3104f };
			uParam1->f_9 = { 2904.578f, 1316.083f, 45.674f };
			uParam1->f_12 = { -27.1441f, 0f, 80.0971f };
			uParam1->f_15 = { 2903.999f, 1314.985f, 45.674f };
			uParam1->f_18 = { -27.1441f, 0f, 34.3462f };
			uParam1->f_21 = { 2950.544f, 1354.832f, 46.5247f };
			uParam1->f_24 = { -19.8757f, 0f, -27.5102f };
			if (!__LIB_9__::func_19(78))
			{
				uParam1->f_27 = { 2912.547f, 1310.123f, 43.6438f };
				uParam1->f_30 = { 2914.968f, 1309.185f, 43.4608f };
				uParam1->f_33 = 246.9621f;
			}
			else
			{
				uParam1->f_27 = { 2820.362f, 1139.3f, 47.8403f };
				uParam1->f_30 = { 2818.865f, 1135.519f, 47.8328f };
				uParam1->f_33 = 158.4311f;
			}
			uParam1->f_34 = { 2955.716f, 1357.495f, 44.1385f };
			uParam1->f_37 = { 2951.752f, 1359.711f, 44.1435f };
			uParam1->f_2 = 382;
			uParam1->f_60 = 78;
			return 1;
		case 105:
			if (!__LIB_9__::func_19(105) && !bVar0)
			{
				uParam1->f_3 = { 1355.763f, -1301.361f, 76.7643f };
				uParam1->f_6 = { 1355.763f, -1301.361f, 76.7643f };
				uParam1->f_9 = { 1357.636f, -1301.202f, 78.6542f };
				uParam1->f_12 = { -28.2134f, 0f, 80.8091f };
				uParam1->f_15 = { 1356.35f, -1303.378f, 78.6542f };
				uParam1->f_18 = { -28.2134f, 0f, 32.6023f };
				uParam1->f_21 = { 1358.598f, -1307.626f, 78.7945f };
				uParam1->f_24 = { -26.9284f, 0f, 160.3281f };
				uParam1->f_27 = { 1356.928f, -1310.358f, 75.9901f };
				uParam1->f_30 = { 1356.312f, -1311.949f, 75.8727f };
				uParam1->f_33 = 157.5328f;
				uParam1->f_34 = { 1340.875f, -1297.587f, 76.3625f };
				uParam1->f_37 = { 1339.913f, -1303.004f, 76.3098f };
				uParam1->f_2 = 70;
				uParam1->f_60 = 105;
			}
			else
			{
				uParam1->f_3 = { 2503.741f, -1307.135f, 47.9537f };
				uParam1->f_6 = { 2503.741f, -1307.135f, 47.9537f };
				uParam1->f_9 = { 2502.73f, -1309.843f, 50.6283f };
				uParam1->f_12 = { -11.6079f, 0f, -14.2586f };
				uParam1->f_15 = { 2505.388f, -1309.63f, 50.6283f };
				uParam1->f_18 = { -11.6079f, 0f, 21.707f };
				uParam1->f_21 = { 2517.845f, -1306.583f, 47.9532f };
				uParam1->f_24 = { -26.7304f, 0f, 25.2209f };
				uParam1->f_27 = { 2517.845f, -1306.583f, 47.9532f };
				uParam1->f_30 = { 2517.845f, -1306.583f, 47.9532f };
				uParam1->f_33 = 275.7476f;
				uParam1->f_34 = { 2517.845f, -1306.583f, 47.9532f };
				uParam1->f_37 = { 2517.845f, -1306.583f, 47.9532f };
				uParam1->f_2 = 256;
				uParam1->f_60 = 5;
			}
			return 1;
		case 115:
			uParam1->f_3 = { -5532.633f, -2924.589f, -0.8993f };
			uParam1->f_6 = { -5529.573f, -2927.617f, -0.6848f };
			uParam1->f_9 = { -5529.9f, -2926.97f, -1.19f };
			uParam1->f_12 = { -2.25f, 0f, -45.756f };
			uParam1->f_15 = { -5529.9f, -2926.97f, -1.19f };
			uParam1->f_18 = { -2.25f, 0f, -45.756f };
			uParam1->f_21 = { -5530.5f, -2941.74f, 0.39f };
			uParam1->f_24 = { -6.155f, 0f, 32.786f };
			uParam1->f_34 = { -5528.508f, -2930.258f, -1.3609f };
			uParam1->f_37 = { -5526.999f, -2933.425f, -1.9664f };
			uParam1->f_27 = { -5526.24f, -2934.047f, -1.9674f };
			uParam1->f_33 = -147.66f;
			uParam1->f_2 = 348;
			uParam1->f_60 = 115;
			return 1;
		default:
			uParam1->f_3 = { 2903.666f, 1315.805f, 44.3104f };
			uParam1->f_6 = { 2903.666f, 1315.805f, 44.3104f };
			uParam1->f_9 = { 2904.578f, 1316.083f, 45.674f };
			uParam1->f_12 = { -27.1441f, 0f, 80.0971f };
			uParam1->f_15 = { 2903.999f, 1314.985f, 45.674f };
			uParam1->f_18 = { -27.1441f, 0f, 34.3462f };
			uParam1->f_21 = { 2950.544f, 1354.832f, 46.5247f };
			uParam1->f_24 = { -19.8757f, 0f, -27.5102f };
			if (!__LIB_9__::func_19(78))
			{
				uParam1->f_27 = { 2912.547f, 1310.123f, 43.6438f };
				uParam1->f_30 = { 2914.968f, 1309.185f, 43.4608f };
				uParam1->f_33 = 246.9621f;
			}
			else
			{
				uParam1->f_27 = { 2820.362f, 1139.3f, 47.8403f };
				uParam1->f_30 = { 2818.865f, 1135.519f, 47.8328f };
				uParam1->f_33 = 158.4311f;
			}
			uParam1->f_34 = { 2955.716f, 1357.495f, 44.1385f };
			uParam1->f_37 = { 2951.752f, 1359.711f, 44.1435f };
			uParam1->f_2 = 382;
			uParam1->f_60 = 78;
			return 1;
	}
	return 0;
}

var func_15(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	var uVar3;
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _NAMESPACE77::_0x815C4065AE6E6071(sParam0, &Var0, iParam3);
	return uVar3;
}

void func_17()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_388())
	{
		if (__LIB_0__::func_291(iVar0) == 3)
		{
			if (__LIB_0__::func_700(iVar0) == 1)
			{
				__LIB_1__::func_150(iVar0, 0);
				__LIB_0__::func_301(1);
			}
			else
			{
				__LIB_1__::func_150(iVar0, 0);
				__LIB_0__::func_301(1);
			}
		}
		iVar0++;
	}
}

void func_18(bool bParam0)
{
	if ((!__LIB_1__::func_25(__LIB_5__::func_436(4), 1) || __LIB_1__::func_44(__LIB_5__::func_436(33))) || __LIB_1__::func_44(__LIB_5__::func_436(34)))
	{
		return;
	}
	func_52(bParam0);
	func_53(bParam0);
	func_54(0);
}

void func_19()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bVar0 = __LIB_0__::func_28();
	bVar1 = false;
	if (bVar0 && !__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (__LIB_1__::func_128(5))
		{
			__LIB_1__::func_779(5, 0);
			__LIB_11__::func_455(0, 0);
			__LIB_0__::func_837(0, 1);
			if (__LIB_0__::func_479() == 5)
			{
				__LIB_0__::func_149(0);
				__LIB_0__::func_148(0);
			}
			__LIB_1__::func_778(5);
			return;
		}
	}
	if (!Global_1310720.f_7)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < 7)
	{
		func_63(iVar2);
		func_64(iVar2);
		func_65(iVar2);
		iVar2++;
	}
	iVar2 = -1;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		bVar3 = false;
		if (iVar2 == 0 || iVar2 == 1)
		{
			bVar3 = true;
		}
		if (!bVar3)
		{
		}
		else
		{
			bVar4 = false;
			if (iVar2 == 0)
			{
				bVar4 = true;
			}
			else if ((iVar2 == 1 && __LIB_0__::func_815(0) == 0) && __LIB_0__::func_815(5) == 0)
			{
				bVar4 = true;
			}
			if (__LIB_1__::func_53(iVar2))
			{
				iVar5 = __LIB_14__::func_226(iVar2);
				if (iVar5 + 10000 > Global_1310720.f_16)
				{
					func_69(iVar2, 0);
					__LIB_14__::func_227(iVar2, -1f);
					__LIB_14__::func_228(iVar2, 0);
					__LIB_14__::func_229(iVar2);
				}
				else
				{
					__LIB_1__::func_54(iVar2);
					func_74(iVar2);
					if (bVar4)
					{
						__LIB_11__::func_456(5, 0);
						__LIB_11__::func_457(5, -15);
						__LIB_14__::func_229(5);
					}
				}
			}
			if ((__LIB_0__::func_815(iVar2) == 0 && __LIB_0__::func_815(5) == 1) && __LIB_0__::func_832(5) == 1)
			{
				if (func_78(5) + 10000 > Global_1310720.f_16)
				{
					__LIB_1__::func_779(5, iVar2);
					__LIB_0__::func_837(iVar2, 1);
					if (iVar2 == 0 && __LIB_0__::func_479() == 5)
					{
						__LIB_0__::func_149(0);
						__LIB_0__::func_148(0);
					}
					__LIB_1__::func_778(5);
				}
			}
		}
		iVar2++;
	}
}

void func_20()
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		bVar0 = false;
		if (iVar1 == 6)
		{
			bVar0 = true;
		}
		__LIB_5__::func_593(iVar1, bVar0);
		iVar1++;
	}
	if (__LIB_0__::func_988())
	{
		__LIB_0__::func_989();
	}
}

int func_21()
{
	if (__LIB_11__::func_458())
	{
		return 0;
	}
	return 1;
}

bool func_23(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return true;
	}
	if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1888801[iParam0 /*35*/].f_3, Global_36))
	{
		return true;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1888801[iParam0 /*35*/].f_23)))
	{
		return true;
	}
	if (__LIB_5__::func_864(iParam0) != -1)
	{
		if (__LIB_0__::func_61() != iParam0)
		{
			return true;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("GENERIC_GHOSTTOWN")) > 0)
	{
		return true;
	}
	return __LIB_1__::func_220(iParam0);
}

bool func_26(int iParam0)
{
	if (!__LIB_0__::func_66(iParam0))
	{
		return false;
	}
	return Global_1914270[iParam0] != 0;
}

Vector3 func_28(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_87(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_87(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_52(bool bParam0)
{
	bool bVar0;
	if (Global_40.f_7748.f_1 < 9)
	{
		if (__LIB_1__::func_426(Global_40.f_7748.f_5, 1))
		{
			if (Global_40.f_7748.f_1 <= 9)
			{
				if (Global_40.f_7748.f_1 < 9)
				{
					bVar0 = true;
				}
				else if (__LIB_4__::func_631())
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (bParam0)
				{
					func_110();
				}
				else
				{
					func_111();
				}
			}
		}
	}
	if (bVar0)
	{
		__LIB_5__::func_801(9, 0, 0, 0, 0);
	}
}

void func_53(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	iVar0 = 0;
	while (iVar0 < Global_40.f_7731)
	{
		if (Global_40.f_7731[iVar0 /*5*/] < 10)
		{
			if (__LIB_1__::func_426(Global_40.f_7731[iVar0 /*5*/].f_3, 1))
			{
				if (Global_40.f_7731[iVar0 /*5*/] <= 10)
				{
					if (Global_40.f_7731[iVar0 /*5*/] < 7)
					{
						bVar1 = true;
					}
					else if (__LIB_4__::func_630(iVar0))
					{
						bVar1 = true;
					}
					else
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (bParam0)
					{
						func_114(iVar0);
					}
					else
					{
						func_115(iVar0, 0);
					}
					bVar2 = true;
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		__LIB_5__::func_801(10, 0, 0, 0, 0);
		__LIB_5__::func_801(7, 0, 0, 0, 0);
	}
}

void func_54(bool bParam0)
{
	if (__LIB_7__::func_790() && (bParam0 || __LIB_1__::func_426(Global_40.f_7748, 1)))
	{
		Global_40.f_7748.f_3 = 0;
		if (bParam0)
		{
			Global_40.f_7748 = __LIB_0__::func_23();
		}
		else
		{
			__LIB_1__::func_240(492, 1);
		}
		__LIB_5__::func_801(9, 0, 0, 0, 0);
	}
}

void func_63(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	__LIB_1__::func_2(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
}

void func_64(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	__LIB_0__::func_498(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
}

void func_65(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	__LIB_0__::func_499(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
}

void func_69(int iParam0, int iParam1)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_420 = iParam1;
}

void func_74(int iParam0)
{
	int iVar0;
	bool bVar1;
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	__LIB_0__::func_798(iParam0);
	if (__LIB_3__::func_829(56))
	{
		__LIB_4__::func_861(56);
	}
	if (__LIB_1__::func_262(56))
	{
		__LIB_5__::func_781(56);
	}
	if (__LIB_3__::func_829(57))
	{
		__LIB_4__::func_861(57);
	}
	if (__LIB_1__::func_262(57))
	{
		__LIB_5__::func_781(57);
	}
	bVar1 = false;
	if (iParam0 == 0)
	{
		bVar1 = true;
	}
	else if ((iParam0 == 1 && __LIB_0__::func_815(0) == 0) && __LIB_0__::func_815(5) == 0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_143(iParam0, 1);
	}
	else
	{
		__LIB_18__::func_340(iParam0, 0);
	}
}

int func_78(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_12;
}

Vector3 func_87(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	fVar2 = 9999999f;
	__LIB_1__::func_456(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (__LIB_0__::func_479() == 0 && !__LIB_0__::func_795(0))
		{
			bVar14 = true;
		}
	}
	if (!__LIB_0__::func_720(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = __LIB_1__::func_699();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!__LIB_1__::func_120(Global_1310720.f_21))
	{
		bParam10 = bParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { __LIB_0__::func_953(iVar0, iVar1) };
			bVar11 = __LIB_0__::func_954(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (func_163(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}
}

void func_110()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	__LIB_9__::func_92(Global_40.f_7748.f_5, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	iVar3 = (iVar3 + (365 * iVar5));
	iVar3 = (iVar3 + (30 * iVar4));
	iVar2 = (iVar2 + (24 * iVar3));
	if (iVar2 > 168)
	{
		iVar2 = 168;
	}
	while (iVar2 > iVar6)
	{
		func_195(Global_40.f_7748.f_1, &iVar7, &iVar6, 0);
		iVar6 = (iVar6 + (24 * iVar7));
		iVar2 = (iVar2 - iVar6);
		func_111();
	}
}

void func_111()
{
	int iVar0;
	if (Global_40.f_7748.f_1 >= 9)
	{
		__LIB_8__::func_987();
		return;
	}
	iVar0 = Global_40.f_7748.f_1 + 1;
	func_197(iVar0, 0);
	if (__LIB_4__::func_631())
	{
		if (Global_40.f_7748.f_1 >= 9)
		{
			__LIB_8__::func_987();
		}
		else
		{
			__LIB_8__::func_988();
		}
	}
	__LIB_8__::func_998();
}

void func_114(int iParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	__LIB_9__::func_92(Global_40.f_7731[iParam0 /*5*/].f_3, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	iVar3 = (iVar3 + (365 * iVar5));
	iVar3 = (iVar3 + (30 * iVar4));
	iVar2 = (iVar2 + (24 * iVar3));
	if (iVar2 > 168)
	{
		iVar2 = 168;
	}
	while (iVar2 > iVar6)
	{
		func_202(iParam0, &iVar7, &iVar6, 0);
		iVar6 = (iVar6 + (24 * iVar7));
		iVar2 = (iVar2 - iVar6);
		func_115(iParam0, 0);
	}
}

void func_115(int iParam0, bool bParam1)
{
	int iVar0;
	if (Global_40.f_7731[iParam0 /*5*/] >= 10)
	{
		__LIB_8__::func_994(iParam0);
		return;
	}
	if (!bParam1)
	{
		if (Global_40.f_7731[iParam0 /*5*/] >= 7 && !__LIB_4__::func_630(iParam0))
		{
			return;
		}
	}
	iVar0 = Global_40.f_7731[iParam0 /*5*/] + 1;
	__LIB_8__::func_999(iVar0);
	func_205(iParam0, iVar0, 0);
	if (__LIB_4__::func_630(iParam0))
	{
		if (Global_40.f_7731[iParam0 /*5*/] >= 7)
		{
			__LIB_8__::func_994(iParam0);
		}
		else
		{
			__LIB_8__::func_995(iParam0);
		}
	}
	__LIB_9__::func_0();
}

void func_143(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return;
	}
	iVar1 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = false;
	if (iVar1 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar0))
	{
		bVar3 = true;
	}
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	__LIB_0__::func_798(iParam0);
	__LIB_0__::func_798(5);
	if (__LIB_1__::func_105(5))
	{
		__LIB_18__::func_340(5, 0);
	}
	__LIB_1__::func_778(5);
	__LIB_1__::func_779(5, iParam0);
	__LIB_0__::func_837(5, 1);
	__LIB_11__::func_455(5, iParam1);
	if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
	}
	if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
	{
		PLAYER::_0x227B06324234FB09(iVar0, 0);
	}
	if (bVar2)
	{
		if (bVar3)
		{
			PED::_0x6569F31A01B4C097(iVar1, 0, 1);
			PED::_0x6569F31A01B4C097(iVar1, 1, 1);
			DECORATOR::_DECOR_SET_STRING(iVar1, "loot_long_custom_anim_data_set", "DEAD_HORSE_SADDLE_SWAP_LONG_LOOT_ANIM_DATA");
		}
	}
	if (iParam1 == 2)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
	}
	if (bVar3)
	{
		if (__LIB_0__::func_86(vVar4))
		{
			__LIB_0__::func_149(-1);
			__LIB_0__::func_148(3);
			__LIB_0__::func_150(0f, 0f, 0f);
			__LIB_9__::func_23(-15);
		}
		else
		{
			__LIB_0__::func_149(5);
			__LIB_0__::func_148(0);
			__LIB_0__::func_150(vVar4);
			__LIB_9__::func_23(__LIB_0__::func_23());
		}
	}
	__LIB_18__::func_777(iParam0);
	__LIB_6__::func_412(iParam0);
	__LIB_1__::func_778(iParam0);
	__LIB_1__::func_643();
}

bool func_163(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	if (bParam5)
	{
		if (__LIB_0__::func_562(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || __LIB_1__::func_128(5))
	{
		if (__LIB_0__::func_978(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = __LIB_0__::func_979(vParam0);
	if (bParam6)
	{
		iVar1 = __LIB_1__::func_447(vParam0, 1);
		if (__LIB_0__::func_730(iVar1) || __LIB_0__::func_980(iVar0, 1))
		{
			return false;
		}
	}
	if (!__LIB_17__::func_456(iParam3, iParam4))
	{
		return false;
	}
	if (!__LIB_1__::func_689())
	{
		if (__LIB_0__::func_981(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam8))
	{
		if (!__LIB_1__::func_129(iVar0))
		{
			return false;
		}
		if (Global_1310720.f_23 >= 3)
		{
			if (Global_1310720.f_21 != -1)
			{
				if (Global_1310720.f_21 == __LIB_1__::func_447(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!__LIB_1__::func_460(iParam3, iParam4))
	{
		return false;
	}
	if (__LIB_0__::func_982(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!__LIB_0__::func_563(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (__LIB_0__::func_28())
	{
		if (VOLUME::_DOES_VOLUME_EXIST(bParam8))
		{
			if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_252(vParam0, iParam10) || func_253(vParam0, iParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return false;
		}
	}
	return true;
}

void func_195(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 2;
			*iParam2 = 0;
			break;
		case 1:
			*uParam1 = 2;
			*iParam2 = 0;
			break;
		case 2:
			*uParam1 = 4;
			*iParam2 = 0;
			break;
		case 3:
			*uParam1 = 8;
			*iParam2 = 0;
			break;
		case 4:
			*uParam1 = 12;
			*iParam2 = 0;
			break;
		case 5:
			*uParam1 = 20;
			*iParam2 = 0;
			break;
		case 6:
			*uParam1 = 20;
			*iParam2 = 0;
			break;
		case 7:
			*uParam1 = 32;
			*iParam2 = 0;
			break;
		case 8:
			*uParam1 = 32;
			*iParam2 = 0;
			break;
		case 9:
			*uParam1 = 52;
			*iParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_277(uParam1, iParam2, &uVar0, &uVar1, 0, __LIB_8__::func_989());
	}
}

void func_197(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_4__::func_664(iParam0))
	{
		return;
	}
	if (Global_40.f_7748.f_1 == iParam0)
	{
		return;
	}
	Global_40.f_7748.f_1 = iParam0;
	if (!bParam1)
	{
		Global_40.f_7748.f_5 = __LIB_0__::func_23();
		bVar2 = (Global_40.f_7748.f_1 < 9 && __LIB_4__::func_631());
		func_195(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		__LIB_1__::func_446(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_202(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	switch (Global_40.f_7731[iParam0 /*5*/])
	{
		case 0:
			*uParam1 = 2;
			*iParam2 = 0;
			break;
		case 1:
			*uParam1 = 2;
			*iParam2 = 0;
			break;
		case 2:
			*uParam1 = 4;
			*iParam2 = 0;
			break;
		case 3:
			*uParam1 = 8;
			*iParam2 = 0;
			break;
		case 4:
			*uParam1 = 12;
			*iParam2 = 0;
			break;
		case 5:
			*uParam1 = 20;
			*iParam2 = 0;
			break;
		case 6:
			*uParam1 = 20;
			*iParam2 = 0;
			break;
		case 7:
			*uParam1 = 32;
			*iParam2 = 0;
			break;
		case 8:
			*uParam1 = 32;
			*iParam2 = 0;
			break;
		case 9:
			*uParam1 = 52;
			*iParam2 = 0;
			break;
		case 10:
			*uParam1 = 52;
			*iParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_277(uParam1, iParam2, &uVar0, &uVar1, 0, __LIB_4__::func_670(iParam0));
	}
}

void func_205(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_4__::func_661(iParam0))
	{
		return;
	}
	if (!__LIB_4__::func_662(iParam1))
	{
		return;
	}
	if (Global_40.f_7731[iParam0 /*5*/] == iParam1)
	{
		return;
	}
	Global_40.f_7731[iParam0 /*5*/] = iParam1;
	if (!bParam2)
	{
		bVar2 = (Global_40.f_7731[iParam0 /*5*/] < 7 && __LIB_4__::func_630(iParam0));
		Global_40.f_7731[iParam0 /*5*/].f_3 = __LIB_0__::func_23();
		func_202(iParam0, &iVar0, &iVar1, bVar2);
		__LIB_1__::func_446(&(Global_40.f_7731[iParam0 /*5*/].f_3), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

int func_252(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_1898329)
	{
		if (!__LIB_0__::func_6(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch (Global_1898346[iVar0 /*6*/].f_3)
			{
				case 1:
					iVar1 = Global_1898346[iVar0 /*6*/].f_4;
					if (BUILTIN::VDIST(func_334(iVar1), vParam0) < func_336(__LIB_0__::func_626(iVar1) == 0f, iParam3, __LIB_0__::func_626(iVar1)))
					{
						return 1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_253(vector3 vParam0, float fParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (__LIB_0__::func_627(iVar0, 0))
		{
			if (BUILTIN::VDIST(func_338(iVar0), vParam0) < fParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_277(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	fVar3 = BUILTIN::TO_FLOAT(iParam5);
	iVar0 = __LIB_4__::func_674(BUILTIN::TO_FLOAT(*uParam0), fVar3);
	iVar1 = __LIB_4__::func_675(BUILTIN::TO_FLOAT(*iParam1), fVar3);
	iVar2 = __LIB_4__::func_675(BUILTIN::TO_FLOAT(*uParam2), fVar3);
	*uParam0 = (*uParam0 / iParam5);
	*iParam1 = (*iParam1 / iParam5);
	*uParam2 = (*uParam2 / iParam5);
	*uParam3 = (*uParam3 / iParam5);
	*iParam1 = (*iParam1 + iVar0);
	*uParam2 = (*uParam2 + iVar1);
	*uParam3 = (*uParam3 + iVar2);
	if (bParam4)
	{
		*uParam3 = (*uParam3 * -1);
		*uParam2 = (*uParam2 * -1);
		*iParam1 = (*iParam1 * -1);
		*uParam0 = (*uParam0 * -1);
	}
}

Vector3 func_334(int iParam0)
{
	return func_374(iParam0);
}

float func_336(bool bParam0, int iParam1, float fParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return fParam2;
}

Vector3 func_338(int iParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_5(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_375(iParam0, &vVar0))
	{
		Global_1347702[iParam0 /*49*/].f_24 = { vVar0 };
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

Vector3 func_374(int iParam0)
{
	if (__LIB_1__::func_43(iParam0))
	{
		return func_417(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

bool func_375(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_418(Global_1347702[iParam0 /*49*/].f_15) != 0)
		{
			Global_1347702[iParam0 /*49*/].f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if (Global_1347702[iParam0 /*49*/].f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

Vector3 func_417(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
			Jump @71; //curOff = 47
			return 2544.982f, -1187.344f, 52.3104f;
			return Global_1835011[iParam0 /*74*/].f_18;
		}
int func_418(int iParam0)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return -1;
	}
	return __LIB_0__::func_386(iParam0);
}

