#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	var uLocal_2 = 0;
	char[] cLocal_3[8] = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	vector3 vLocal_11 = { 0f, 0f, 0f };
	vector3 vLocal_14 = { 0f, 0f, 0f };
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
#endregion
void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_8__::func_981(iVar0, 16384);
		iVar0++;
	}
	if (iLocal_18 != -1)
	{
		__LIB_17__::func_513(iLocal_18);
		__LIB_8__::func_981(iLocal_18, 1024);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	return 1;
}

int func_2()
{
	int iVar0;
	if (func_5())
	{
		__LIB_17__::func_551(6);
	}
	switch (iLocal_0)
	{
		case 0:
			iLocal_1 = __LIB_0__::func_12();
			if (!func_8(iLocal_1))
			{
				__LIB_17__::func_551(6);
				return 0;
			}
			iLocal_18 = __LIB_17__::func_552(iLocal_1);
			__LIB_13__::func_707(iLocal_18);
			__LIB_0__::func_714(iLocal_18, 1024);
			__LIB_8__::func_981(iLocal_18, 2);
			if (func_12(iLocal_1, &uLocal_2, &cLocal_3, &vLocal_11, &uLocal_17, &iLocal_20))
			{
				CAM::DO_SCREEN_FADE_OUT(500);
				__LIB_17__::func_551(1);
			}
			else
			{
				__LIB_17__::func_551(6);
				return 0;
			}
			break;
		case 1:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return 0;
			}
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_19))
			{
				iLocal_19 = TASK::CREATE_SCENARIO_POINT(uLocal_2, vLocal_11, uLocal_17, 0, 0, 0);
				TASK::_SET_SCENARIO_POINT_FLAG(iLocal_19, 23, true);
				TASK::_SET_SCENARIO_POINT_FLAG(iLocal_19, 25, true);
				return 0;
			}
			if (!__LIB_0__::func_163(Global_35, -76381094))
			{
				MISC::CLEAR_AREA(vLocal_11, 2f, 2442122);
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_19, &cLocal_3, 0, false, true, 0, false, -1f, false);
			}
			else
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < 8)
				{
					if (iVar0 != iLocal_18)
					{
						__LIB_11__::func_118(iVar0);
						__LIB_0__::func_714(iVar0, 16384);
					}
					iVar0++;
				}
				CLOCK::SET_CLOCK_TIME(iLocal_20, 0, 0);
				__LIB_0__::func_568(vLocal_11, 150f, 0);
				PED::_0x4759CC730F947C81();
				__LIB_17__::func_551(2);
			}
			break;
		case 2:
			if (PED::_0x0EE3F0D7FECCC54F())
			{
				__LIB_17__::func_551(3);
			}
			break;
		case 3:
			vLocal_14 = { func_16(iLocal_1) };
			if (__LIB_0__::func_86(vLocal_14))
			{
				__LIB_17__::func_551(6);
				return 0;
			}
			if (!VEHICLE::_0xC29996A337BDD099(Global_1425371[iLocal_18 /*373*/].f_1))
			{
				__LIB_17__::func_551(6);
				return 0;
			}
			VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_18 /*373*/].f_1, vLocal_14, func_18(iLocal_1));
			iLocal_21 = MISC::GET_GAME_TIMER() + 15000;
			__LIB_17__::func_551(4);
			break;
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(VEHICLE::_0x6E585A616ABB8401(Global_1425371[iLocal_18 /*373*/].f_1)))
			{
				if (iLocal_21 > MISC::GET_GAME_TIMER())
				{
					VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_18 /*373*/].f_1, vLocal_14, func_18(iLocal_1));
					return 0;
				}
			}
			VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_18 /*373*/].f_1, 4f);
			VEHICLE::_0x34BCF6209B9668A7(Global_1425371[iLocal_18 /*373*/].f_1, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_19(iLocal_1), 1f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			__LIB_17__::func_553(joaat("DOCUMENT_TRAIN_TICKET"), 1, -142743235, 0, 0);
			__LIB_17__::func_551(5);
			break;
		case 5:
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_19))
			{
				if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_19))
				{
					return 0;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::_0x6E585A616ABB8401(Global_1425371[iLocal_18 /*373*/].f_1)))
			{
				return 0;
			}
			__LIB_17__::func_551(6);
			break;
		case 6:
			return func_1();
	}
	return 0;
}

bool func_5()
{
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return true;
	}
	return false;
}

bool func_8(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return true;
		case 23:
			return true;
		case 28:
			return true;
		case 69:
			return true;
		case 75:
			return true;
		case 76:
			return true;
		case 78:
			return true;
		case 105:
			return true;
		default:
			break;
	}
	return false;
}

bool func_12(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5)
{
	switch (iParam0)
	{
		case 5:
			*uParam1 = joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC");
			StringCopy(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { 2682.599f, -1458.432f, 45.757f };
			*uParam4 = -155f;
			*iParam5 = 20;
			return true;
		case 23:
			*uParam1 = joaat("WORLD_HUMAN_LEAN_RAILING");
			StringCopy(sParam2, "WORLD_HUMAN_LEAN_RAILING_MALE_C", 64);
			*uParam3 = { -1099.38f, -578.48f, 81.4f };
			*uParam4 = 138.954f;
			*iParam5 = 11;
			return true;
		case 28:
			*uParam1 = joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC");
			StringCopy(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { -1304.61f, 402.07f, 94.88f };
			*uParam4 = -155f;
			*iParam5 = 16;
			return true;
		case 69:
			*uParam1 = joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC");
			StringCopy(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { 1520.34f, 437.09f, 90.18f };
			*uParam4 = -90f;
			*iParam5 = 8;
			return true;
		case 75:
			*uParam1 = joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC");
			StringCopy(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { -346.205f, -368.456f, 87.519f };
			*uParam4 = -65.272f;
			*iParam5 = 22;
			return true;
		case 76:
			*uParam1 = joaat("WORLD_HUMAN_LEAN_BACK_WALL");
			StringCopy(sParam2, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D", 64);
			*uParam3 = { -167.44f, 638.81f, 113.03f };
			*uParam4 = -126.192f;
			*iParam5 = 6;
			return true;
		case 78:
			*uParam1 = joaat("WORLD_HUMAN_LEAN_BACK_WALL");
			StringCopy(sParam2, "WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_MALE_D", 64);
			*uParam3 = { 2941.49f, 1274.77f, 43.64f };
			*uParam4 = 156.696f;
			*iParam5 = 14;
			return true;
		case 105:
			*uParam1 = joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC");
			StringCopy(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { 1214.081f, -1293.024f, 76.372f };
			*uParam4 = 90.766f;
			*iParam5 = 2;
			return true;
		default:
			break;
	}
	return false;
}

Vector3 func_16(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 2613.5f, -1477.1f, 45.1f;
		case 23:
			return -1154.2f, -535.7f, 86.4f;
		case 28:
			return -1276.9f, 486.7f, 92.7f;
		case 69:
			return 1529.7f, 530.7f, 89.4f;
		case 75:
			return -353f, -356.1f, 86.4f;
		case 76:
			return -200.5f, 562.7f, 112.8f;
		case 78:
			return 2886.5f, 1213.8f, 44.1f;
		case 105:
			return 1192.5f, -1277.5f, 75.6f;
	}
	return 0f, 0f, 0f;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 23:
		case 28:
		case 75:
		case 76:
		case 78:
		case 105:
			return 0;
		case 69:
			return 1;
	}
	return 0;
}

float func_19(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -67.5789f;
		case 23:
			return -80.0869f;
		case 28:
			return -61.4596f;
		case 69:
			return 0.5378f;
		case 75:
			return 138.6132f;
		case 76:
			return -85f;
		case 78:
			return 13.9649f;
		case 105:
			return -10f;
	}
	return 0f;
}

