bool func_0(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, Global_35, 0, 0))
	{
		return false;
	}
	if (!ENTITY::_0x3EC28DA1FFAC9DDD(*iParam0, Global_35, 0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_272(*iParam0, 75))
	{
		return true;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 0, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(*iParam0, iVar0, 250))
		{
			return true;
		}
	}
	iVar0 = __LIB_0__::func_153(Global_35, 1, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(*iParam0, iVar0, 250))
		{
			return true;
		}
	}
	return false;
}

bool func_1(int iParam0, var uParam1)
{
	if (!PED::IS_PED_FLEEING(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_2(int iParam0)
{
	if (((iParam0->f_16 == 3 || iParam0->f_16 == 1) || iParam0->f_16 == 6) || iParam0->f_16 == 5)
	{
		return true;
	}
	return false;
}

float func_3(int iParam0)
{
	switch (iParam0->f_16)
	{
		case 1:
		case 3:
			return 180f;
		case 5:
		case 6:
			return 120f;
		default:
			break;
	}
	return 90f;
}

int func_4(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 2;
		case 9:
			return 2;
		case 7:
			return 2;
		case 0:
			return 3;
		case 3:
			return 4;
		default:
			break;
	}
	return 0;
}

bool func_5()
{
	return VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[11 /*446*/].f_25);
}

bool func_6(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x6F1F0B17109309DA(*uParam0, sParam1);
}

void func_7(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	if (!bParam6)
	{
		*uParam1 = Global_40.f_9096[iParam0 /*12*/].f_3;
	}
	iVar0 = ((((iParam2 * 86400) + iParam3 * 3600) + iParam4 * 60) + iParam5);
	if ((*uParam1 + iVar0) < 0)
	{
		*uParam1 = 0;
	}
	else
	{
		*uParam1 = (*uParam1 + iVar0);
	}
}

float func_8(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 0f;
	}
	return ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*uParam0);
}

void func_9(var uParam0, Vector3* vParam1, Vector3* vParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(*uParam0, vParam1, vParam2, 2);
}

bool func_10(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x1F0E401031E20146(*uParam0, sParam1);
}

char[] func_11(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return "PB_PRE_BRKOUT_BACK";
				case 0:
					return "PB_PRE_BRKOUT_N";
				case 3:
					return "PB_PRE_BRKOUT_L";
				case 2:
					return "PB_PRE_BRKOUT_R";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					return "PB_SAW_BRKOUT_A_BACK";
				case 0:
					return "PB_SAW_BRKOUT_A_N";
				case 3:
					return "PB_SAW_BRKOUT_A_L";
				case 2:
					return "PB_SAW_BRKOUT_A_R";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					return "PB_SAW_B_BRKOUT_BACK";
				case 0:
					return "PB_SAW_B_BRKOUT_N";
				case 3:
					return "PB_SAW_B_BRKOUT_L";
				case 2:
					return "PB_SAW_B_BRKOUT_R";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_12(int* iParam0, int iParam1)
{
	iParam0->f_14 = iParam1;
}

Vector3 func_13(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1420.942f, -208.586f, 101.032f;
				case 1:
					return -1438.671f, -232.235f, 100.8f;
				case 2:
					return -1341.562f, -241.489f, 102.385f;
				case 3:
					return -1357.351f, -210.654f, 100.106f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1471.529f, -213.686f, 106.224f;
				case 1:
					return -1458.017f, -203.588f, 104.849f;
				case 2:
					return -1341.562f, -241.489f, 102.385f;
				case 3:
					return -1357.351f, -210.654f, 100.106f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1471.529f, -213.686f, 106.224f;
				case 1:
					return -1458.017f, -203.588f, 104.849f;
				case 2:
					return -1341.562f, -241.489f, 102.385f;
				case 3:
					return -1357.351f, -210.654f, 100.106f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_14(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1.325f, 0.462f, 0.828f;
				case 1:
					return -3.665f, -3.93f, -126.538f;
				case 2:
					return 0.108f, 4.907f, 65.588f;
				case 3:
					return -1.141f, -1.304f, 121.306f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2.356f, -4.206f, -176.376f;
				case 1:
					return 0.695f, 11.828f, 47.142f;
				case 2:
					return 0.108f, 4.907f, 65.588f;
				case 3:
					return -1.141f, -1.304f, 121.306f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 2.356f, -4.206f, -176.376f;
				case 1:
					return 0.695f, 11.828f, 47.142f;
				case 2:
					return 0.108f, 4.907f, 65.588f;
				case 3:
					return -1.141f, -1.304f, 121.306f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_15(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, vParam1, vParam4, 2);
}

void func_16(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam0);
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16;
		case 1:
			return 32;
		case 2:
			return 64;
		case 3:
			return 128;
		default:
			break;
	}
	return 0;
}

int func_18()
{
	return joaat("EA_WORLD_HUMAN_TREE_CHOP_NEW");
}

void func_19(int iParam0)
{
	iLocal_102 = (iLocal_102 - (iLocal_102 && iParam0));
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16777216;
		case 1:
			return 33554432;
		case 2:
			return 67108864;
		case 3:
			return 134217728;
		default:
			break;
	}
	return 0;
}

void func_21(int iParam0)
{
	int iVar0;
	if (DECORATOR::DECOR_EXIST_ON(*iParam0, "interactNeg"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(*iParam0, "interactNeg");
	}
	if (iVar0 > 0)
	{
		PED::SET_PED_CONFIG_FLAG(*iParam0, 330, true);
	}
}

char* func_22()
{
	return "INSULT_RESPONSE";
}

var func_23()
{
	char cVar0[32];
	char cVar4[32];
	StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
	StringConCat(&cVar4, "_PART", 32);
	MISC::_INT_TO_STRING(1, "%d", &cVar0);
	StringConCat(&cVar4, &cVar0, 32);
	return __LIB_1__::func_569(cVar4);
}

bool func_24(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return ANIMSCENE::GET_ANIM_SCENE_BOOL(*uParam0, sParam1);
	}
	return false;
}

Vector3 func_25()
{
	return -1402.82f, -270.8668f, 98.5585f;
}

int func_26(var uParam0, char[4] cParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 0;
	}
	return ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, cParam1);
}

char* func_27()
{
	return "desk_loop_book";
}

char* func_28()
{
	return "script_proc@event_area@appleseed@foreman_stage2";
}

bool func_29(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_75[iParam0]))
	{
		return VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_75[iParam0], Global_36);
	}
	return false;
}

Vector3 func_30()
{
	return -1391.3f, -271.25f, 98.57f;
}

Vector3 func_31()
{
	return -1392.7f, -269.93f, 98.65f;
}

float func_32()
{
	return -270.6f;
}

Vector3 func_33(var uParam0, char* sParam1, char* sParam2)
{
	vector3 vVar0;
	bool bVar12;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(*uParam0, sParam1, &vVar0, bVar12, sParam2, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

bool func_34(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, &(uParam0->f_1)))
	{
	}
	else
	{
		return true;
	}
	return false;
}

Vector3 func_35()
{
	return -1397.791f, -214.2272f, 101.3653f;
}

Vector3 func_36()
{
	return -1406.475f, -213.2691f, 101.3333f;
}

Vector3 func_37()
{
	return -1398.998f, -208.266f, 101.8822f;
}

void func_38(int iParam0)
{
	var uVar0[1];
	uVar0[0] = Global_35;
	PED::_0x34EDDD59364AD74A(*iParam0, &uVar0);
}

int func_39()
{
	return joaat("PROP_HUMAN_SEAT_CHAIR");
}

int func_40()
{
	return joaat("U_M_M_BIVFOREMAN_01");
}

int func_41()
{
	return joaat("PROP_HUMAN_SEAT_CHAIR_GENERIC_MALE_A");
}

Vector3 func_42()
{
	return -1399.903f, -211.2283f, 102.3423f;
}

int func_43()
{
	return joaat("WORLD_HUMAN_LEAN_POST_RIGHT_HAND_PLANTED");
}

int func_44()
{
	return joaat("WORLD_HUMAN_LEAN_POST_RIGHT_HAND_PLANTED_MALE_B");
}

Vector3 func_45()
{
	return -1402.626f, -207.791f, 101.897f;
}

char* func_46()
{
	return "PROP_HUMAN_SEAT_CHAIR_GENERIC_MALE_A";
}

char* func_47()
{
	return "WORLD_HUMAN_LEAN_POST_RIGHT_HAND_PLANTED_MALE_B";
}

void func_48(int iParam0, int iParam1, int iParam2)
{
	struct<23> Var0;
	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	Var0.f_17 = 4;
	Var0.f_18 = 4;
	Var0.f_19 = 4;
	Var0.f_20 = 4;
	Var0.f_21 = 4;
	Var0.f_22 = 4;
	__LIB_1__::func_683(&(Var0.f_5), 1);
	Var0.f_13 = 3;
	Var0.f_7 = iParam1;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam0, &Var0);
	}
}

void func_49()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
}

void func_50(int iParam0)
{
	if (iParam0 >= 25 || iParam0 <= -1)
	{
		return;
	}
	Global_20710[iParam0 /*45*/].f_1 = 0;
}

Vector3 func_51(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1447.046f, -248.2112f, 101.8532f;
				case 1:
					return -1421.375f, -191.8643f, 100.0484f;
				case 2:
					return -1468.509f, -186.8103f, 104.7422f;
				case 3:
					return -1454.64f, -225.2065f, 103.411f;
				case 4:
					return -1428.337f, -197.121f, 100.9558f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return -1462.903f, -174.4467f, 105.4205f;
				case 2:
					return -1457.676f, -251.4121f, 104.5611f;
				case 3:
					return -1409.899f, -284.2626f, 100.9278f;
				case 4:
					return -1409.899f, -284.2626f, 100.9278f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1413.63f, -293.9522f, 102.1136f;
				case 1:
					return -1518.762f, -234.9279f, 116.6115f;
				case 2:
					return -1468.601f, -126.4598f, 117.0678f;
				case 3:
					return -1514.415f, -203.4755f, 110.9043f;
				case 4:
					return -1413.63f, -293.9522f, 102.1136f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_52(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 203.3771f;
				case 1:
					return 6.516163f;
				case 2:
					return 306.3405f;
				case 3:
					return 179.3372f;
				case 4:
					return 33.71f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return 25.43246f;
				case 2:
					return 165.157f;
				case 3:
					return 164.2261f;
				case 4:
					return 164.2261f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 348.4004f;
				case 1:
					return 278.6f;
				case 2:
					return 105.1105f;
				case 3:
					return 341.899f;
				case 4:
					return 348.4004f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_53(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam3, sParam2, false, true);
}

void func_54(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("EVENTAREA_APPLESEEDTIMBER");
		case 1:
			return joaat("EVENTAREA_CASTORSPOND");
		case 2:
			return joaat("EVENTAREA_CENTRALUNION");
		default:
			break;
	}
	return 0;
}

Vector3 func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1400f, -200f, 0f;
		case 1:
			return -440f, 500f, 0f;
		case 2:
			return 2100f, 770f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_57(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, iParam2);
	if (iVar4 == 3 || iVar4 == 4)
	{
		return uVar0;
	}
	return 0;
}

bool func_58(var uParam0, char[4] cParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, cParam1))
	{
		return true;
	}
	return false;
}

void func_59(var uParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, sParam1, bParam2, false);
}

bool func_60(var uParam0, char[4] cParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, cParam1);
}

int func_61(var uParam0, char[4] cParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 0;
	}
	return ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, cParam1);
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1073741824 /* Float: 2f */;
		case 1:
			return -2147483648;
		default:
			break;
	}
	return 0;
}

void func_63(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = PED::_0x62DE46F061CAA468();
	if (iParam0 > iVar0)
	{
		iParam0 = iVar0;
	}
	PED::_0x7D4E70A67A651C71(iParam0);
	iParam1->f_3 = (iParam1->f_3 - iParam0);
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1048576;
		case 1:
			return 2097152;
		case 2:
			return 4194304;
		case 3:
			return 8388608;
		default:
			break;
	}
	return 0;
}

char* func_65()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			return "LOG_WARN01";
		case 1:
			return "LOG_WARN02";
		case 2:
			return "LOG_WARN03";
		case 3:
			return "LOG_WARN04";
		default:
			break;
	}
	return "LOG_WARN01";
}

void func_66()
{
	int iVar0;
	iVar0 = PED::_GET_LAST_MOUNT(Global_35);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (__LIB_1__::func_205(iVar0, iLocal_75[4], 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
		}
		else if (__LIB_1__::func_205(iVar0, iLocal_75[10], 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		else if (__LIB_1__::func_205(iVar0, iLocal_75[9], 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.501f);
		}
	}
}

float func_67()
{
	return Global_1935436.f_9;
}

Vector3 func_68(var uParam0, char* sParam1, char* sParam2)
{
	struct<4> Var0;
	bool bVar12;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(*uParam0, sParam1, &Var0, bVar12, sParam2, 2))
	{
		return Var0.f_3;
	}
	return 0f, 0f, 0f;
}

void func_69(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
		PED::_0x20C5459379D75C1C(*iParam0, "LOG_WRK_ACC_OBS");
		PED::_0xA3C53CDE922BC78B(*iParam0, "LOG_WRK_ACC_OBS");
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(*iParam0, 178, true);
		PED::_0x20C5459379D75C1C(*iParam0, "");
		PED::_0xA3C53CDE922BC78B(*iParam0, "");
	}
	PED::_0x8AF46E5159A5B620(*iParam0, 291934926);
	__LIB_2__::func_56(*iParam0, 1, 1);
}

bool func_70(int iParam0)
{
	switch (iParam0)
	{
		case 810:
		case 811:
		case 812:
		case 813:
			return true;
	}
	return false;
}

Vector3 func_71(int iParam0)
{
	vector3 vVar0[24];
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "LCMP_IG_NIACT1", 24);
			break;
		case 1:
			StringCopy(&cVar0, "LCMP_IG_NIBA", 24);
			break;
		case 2:
			StringCopy(&cVar0, "LCMP_IG_NOG", 24);
			break;
		case 3:
			StringCopy(&cVar0, "LCMP_IG_NOTI", 24);
			break;
		case 4:
			StringCopy(&cVar0, "LCMP_IG_NIACTB", 24);
			break;
		case 5:
			StringCopy(&cVar0, "LCMP_IG_NICL", 24);
			break;
		case 6:
			StringCopy(&cVar0, "LCMP_IG_NIACT2", 24);
			break;
		case 7:
			StringCopy(&cVar0, "LCMP_IG_NIFM", 24);
			break;
		case 8:
			StringCopy(&cVar0, "LCMP_IG_NOSEE", 24);
			break;
		case 9:
			StringCopy(&cVar0, "LCMP_IG_NOAIN", 24);
			break;
		case 10:
			StringCopy(&cVar0, "LCMP_IG_NI2N", 24);
			break;
		case 11:
			StringCopy(&cVar0, "LCMP_IG_NIFN", 24);
			break;
		case 12:
			StringCopy(&cVar0, "LCMP_IG_NI2N", 24);
			break;
		case 13:
			StringCopy(&cVar0, "LCMP_IG_NIFN", 24);
			break;
	}
	return cVar0;
}

char* func_72()
{
	switch (iLocal_103)
	{
		case 0:
			return "LCMPF_IG1_R";
		case 1:
			return "LCMPF_IG1_ALTR";
		case 2:
			return "LCMP_ANGR_2";
		default:
			break;
	}
	return "";
}

int func_73()
{
	return joaat("PROP_HUMAN_SEAT_CHAIR_WHITTLE_MALE_C");
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 10:
			return 32768;
		case 11:
			return 65536;
		case 12:
			return 131072;
		case 13:
			return 262144;
	}
	return 0;
}

int func_75(int iParam0, int iParam1)
{
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 1:
				return 1028223611;
			case 2:
				return 730222325;
			case 3:
				return -597970767;
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 0;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 810:
			return 0;
		case 811:
			return 1;
		case 812:
			return 2;
		case 813:
			return 3;
		default:
			break;
	}
	return -1;
}

Vector3 func_78(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1420.47f, -237.82f, 99.06f;
	}
	if (iParam0 == 1)
	{
		return -1419.73f, -237.87f, 99.02f;
	}
	if (iParam0 == 2)
	{
		return -1419.2f, -237.95f, 98.99f;
	}
	if (iParam0 == 3)
	{
		return -1418.34f, -238.03f, 98.95f;
	}
	return 0f, 0f, 0f;
}

bool func_79(int iParam0)
{
	if (__LIB_1__::func_376(iParam0))
	{
		return false;
	}
	return true;
}

int func_80(int iParam0)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 5 + 1;
		case 1:
			return 5 + 1;
		case 2:
			return 4 + 1;
		case 3:
			return 2 + 1;
	}
	return -1;
}

char* func_81()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
		case default:
			return "Default_Shocked";
		case 1:
			return "Default_Scared";
			return "";
			default:
				break;
	}
}

void func_82(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	if (__LIB_7__::func_908(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_5 = (Global_40.f_9096[iParam0 /*12*/].f_5 || iParam1);
}

void func_83(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	if (!__LIB_7__::func_908(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_5 = (Global_40.f_9096[iParam0 /*12*/].f_5 - (Global_40.f_9096[iParam0 /*12*/].f_5 && iParam1));
}

void func_84(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(iParam0->f_1), 131072);
	}
	else
	{
		__LIB_1__::func_336(&(iParam0->f_1), 131072);
	}
}

void func_85(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	if (__LIB_7__::func_907(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_4 = (Global_40.f_9096[iParam0 /*12*/].f_4 || iParam1);
}

bool func_86()
{
	if (!__LIB_3__::func_188(Local_15[0 /*28*/].f_11) || !__LIB_3__::func_188(Local_15[1 /*28*/].f_11))
	{
		return false;
	}
	return true;
}

void func_87()
{
	if ((VOLUME::_DOES_VOLUME_EXIST(iLocal_75[0]) && __LIB_1__::func_205(Global_35, iLocal_75[0], 1, 0)) && !PED::IS_PED_ON_MOUNT(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	}
}

bool func_88(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(iParam0->f_17, iParam1);
}

void func_89(int iParam0, int iParam1)
{
	__LIB_0__::func_516(&(iParam0->f_17), iParam1);
}

bool func_90()
{
	return __LIB_0__::func_73(64);
}

void func_91(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_29(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_120(iParam0);
	__LIB_7__::func_899(iParam0);
	PERSCHAR::_0x7B204F88F6C3D287(iVar0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(iVar0);
}

void func_92(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 131072);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 131072);
	}
}

void func_93(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	if (!__LIB_7__::func_907(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_4 = (Global_40.f_9096[iParam0 /*12*/].f_4 - (Global_40.f_9096[iParam0 /*12*/].f_4 && iParam1));
}

bool func_94(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_3__::func_332(uParam0->f_4, 1) > 120f)
	{
		iVar0 = 1;
	}
	else if (__LIB_3__::func_332(uParam0->f_4, 1) > 65f && !CAM::IS_SPHERE_VISIBLE(uParam0->f_4, 4f))
	{
		iVar0 = 1;
	}
	else if (uParam0->f_25)
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_95(char* sParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	var uVar1[8];
	int iVar10;
	var uVar11;
	int iVar12;
	iVar0 = *sParam0;
	if (iVar0 > 8)
	{
		return;
	}
	__LIB_7__::func_900(&uVar1, iVar0, 1);
	if (bParam3)
	{
		uVar11 = uVar1[0];
		iVar10 = 0;
		while (iVar10 < iVar0)
		{
			if (uVar1[iVar10] == 0)
			{
				uVar1[0] = uVar1[iVar10];
				uVar1[iVar10] = uVar11;
			}
			iVar10++;
		}
	}
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 < 4)
	{
		iVar12 = uVar1[iVar10];
		uParam2->f_2[iVar10] = (*sParam0)[iVar12];
		uParam2->f_7[iVar10] = (*iParam1)[iVar12];
		iVar10++;
	}
}

void func_96(int* iParam0)
{
	if (iParam0->f_19 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_624(Global_35)))
		{
			iParam0->f_19 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DISTURBING"), Global_35, 999f, 5f, 5f, -1f, -1f, 180f, false, false, -1, -1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_624(Global_35)))
	{
		EVENT::REMOVE_SHOCKING_EVENT(iParam0->f_19);
	}
}

bool func_97(bool bParam0)
{
	if (bParam0)
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	if (!__LIB_1__::func_205(Global_35, Global_1898092.f_26.f_5, 1, 0))
	{
		return true;
	}
	if (__LIB_0__::func_625(Global_1898092.f_26.f_2) && __LIB_7__::func_908(Global_1898092.f_26.f_2, 33554432))
	{
		return true;
	}
	return false;
}

void func_98(var uParam0)
{
	__LIB_1__::func_683(uParam0, 4);
}

void func_99(var uParam0)
{
	__LIB_1__::func_683(uParam0, 64);
}

void func_100(var uParam0)
{
	__LIB_1__::func_683(uParam0, 8);
}

void func_101(var uParam0)
{
	__LIB_1__::func_683(uParam0, 128);
}

void func_102(var uParam0)
{
	__LIB_1__::func_683(uParam0, 1);
}

var func_103(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		sParam0 = "ROB_TOAST_BODY";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "ROB_TOAST_BODY";
	}
	if (iParam2 == -1)
	{
		iParam2 = joaat("ELEMENTS_STAMPS_ICONS");
	}
	if (iParam3 == -1)
	{
		iParam3 = joaat("STAMP_CASH");
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		sParam5 = "INPUT_FEED_INTERACT_GENERIC";
	}
	if (iParam6 == -1)
	{
		iParam6 = joaat("SP_NOTIFICATIONS");
	}
	if (!bParam14)
	{
		return __LIB_7__::func_380(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	return __LIB_7__::func_902(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
}

bool func_104(int iParam0)
{
	return __LIB_7__::func_908(iParam0, 1);
}

int func_105(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_576(iParam0, 6);
	return iVar0;
}

int func_106(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_576(iParam0, 7);
	return iVar0;
}

void func_107(int iParam0, bool bParam1)
{
	__LIB_7__::func_904(&iParam0, !bParam1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, bParam1);
	AUDIO::STOP_PED_SPEAKING(iParam0, bParam1);
}

int func_108(char[4] cParam0, char* sParam1, int iParam2)
{
	vector3 vVar0[24];
	int iVar3;
	StringCopy(&cVar0, sParam1, 24);
	if (iParam2 > 0)
	{
		iVar3 = 1;
	}
	if (AUDIO::_0xD89504D9D7D5057D(sParam1))
	{
		return 1;
	}
	else if (__LIB_1__::func_104(cParam0, cVar0, iVar3, iParam2, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_109(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	bVar0 = true;
	if (bParam1 && iLocal_98 == 1)
	{
		bVar0 = false;
	}
	if (bVar0 && __LIB_1__::func_205(*iParam0, iLocal_75[0], 1, 0))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_75[0], 1, 0))
		{
			return true;
		}
	}
	else if (__LIB_0__::func_665(Global_35, *iParam0, 1, 1) < __LIB_0__::func_514(bParam1, 18f, 12.5f) && (!bParam2 || PED::IS_PED_FACING_PED(*iParam0, Global_35, 165f)))
	{
		return true;
	}
	return false;
}

void func_110(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	if (iParam1 >= *uParam0 || iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 >= *uParam0 || iParam2 < iParam1)
	{
		iParam2 = (*uParam0 - 1);
	}
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		if (__LIB_7__::func_906(uParam0[iVar1], iParam3, iParam4, iParam5, 0, bParam6, 0, 0))
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		__LIB_6__::func_675();
	}
}

void func_111(char* sParam0, bool bParam1)
{
	__LIB_5__::func_239(sParam0, bParam1, 0);
}

Vector3 func_112(vector3 vParam0, float fParam3, bool bParam4)
{
	float fVar0;
	vector3 vVar1;
	if (bParam4)
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f);
	}
	else
	{
		fVar0 = 0f;
	}
	vVar1 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), fVar0 };
	return vParam0 + __LIB_3__::func_803(vVar1, fParam3);
}

bool func_113(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0]))
		{
			if (__LIB_0__::func_232((*uParam1)[iVar0], iParam0, 1) < 225f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_114(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, uParam6, uParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam18);
	}
}

bool func_115(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_39))
	{
		return true;
	}
	if (__LIB_2__::func_118(iParam0->f_40, 1, 1) < iParam0->f_42)
	{
		return false;
	}
	if (__LIB_1__::func_205(Global_35, iParam0->f_39, 1, 0))
	{
		return true;
	}
	if (!__LIB_1__::func_205(iParam0->f_40, iParam0->f_39, 1, 0))
	{
		return false;
	}
	return true;
}

void func_116(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if ((*iParam6 % iParam7) == 0)
	{
		iVar0 = iParam3;
		while (iVar0 <= iParam4)
		{
			if (!__LIB_0__::func_117(iVar0, 32))
			{
				iVar1 = __LIB_2__::func_963(iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					if (PED::IS_PED_HUMAN(iVar1))
					{
						(*uParam0)[iVar2] = iVar1;
						(*uParam1)[iVar2] = __LIB_2__::func_118(iVar1, 1, 0);
						iVar2++;
						if (bParam9)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
							PED::SET_PED_CONFIG_FLAG(iVar1, 288, true);
						}
						else
						{
							PED::SET_PED_CONFIG_FLAG(iVar1, 288, false);
						}
						if (!DECORATOR::DECOR_EXIST_ON(iVar1, "bScriptedILO"))
						{
							PED::SET_PED_CONFIG_FLAG(iVar1, 130, false);
						}
						PED::SET_PED_CONFIG_FLAG(iVar1, 374, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 178, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 146, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 246, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 297, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 171, true);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iVar1, 7, 0, 1);
						__LIB_2__::func_23(uParam2, iVar1, 0);
						if (fParam8 >= 0f)
						{
							PED::SET_PED_SEEING_RANGE(iVar1, fParam8);
						}
					}
					else
					{
						__LIB_2__::func_20(uParam2, iVar1, 0);
					}
				}
			}
			iVar0++;
		}
		iVar3 = iVar2;
		while (iVar3 <= (*uParam0 - 1))
		{
			(*uParam0)[iVar2] = 0;
			iVar3++;
		}
		*iParam5 = iVar2;
		*iParam6 = 0;
	}
	*iParam6++;
}

void func_117(var uParam0, int iParam1, float fParam2, float fParam3)
{
	int iVar0;
	if (__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 1, 1))
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1392194[uParam0->f_136 /*10*/].f_6;
	}
	if (__LIB_1__::func_205(Global_35, iParam1, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, fParam2);
	}
	iVar0 = PED::_GET_LAST_MOUNT(Global_35);
	if (__LIB_1__::func_205(iVar0, iParam1, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, fParam3);
	}
}

bool func_118(int iParam0, int iParam1, float fParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)
{
	if (__LIB_7__::func_912(*iParam0, iParam1, fParam2, iParam3, sParam4, bParam5, 106) && (iParam6 == 0 || ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, iParam6)))
	{
		return true;
	}
	return false;
}

int func_119(bool bParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	vVar0 = { __LIB_3__::func_448(iParam1) };
	vVar3 = { __LIB_3__::func_448(iParam2) };
	return __LIB_7__::func_905(bParam0, vVar0, vVar3, iParam2);
}

int func_120(bool bParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { __LIB_3__::func_448(iParam1) };
	return __LIB_7__::func_905(bParam0, vVar0, vParam2, 0);
}

Vector3 func_121(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0[24];
	int iVar3;
	StringCopy(&cVar0, "PB_", 24);
	switch (iParam1)
	{
		case 0:
			StringConCat(&cVar0, "PRE_", 24);
			break;
		case 1:
			StringConCat(&cVar0, "SAW_A_", 24);
			break;
		case 2:
			StringConCat(&cVar0, "SAW_B_", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			return cVar0;
	}
	StringConCat(&cVar0, "ILO_", 24);
	if (bParam2)
	{
		StringConCat(&cVar0, "NEG_", 24);
	}
	else
	{
		StringConCat(&cVar0, "POS_", 24);
	}
	iVar3 = __LIB_3__::func_112(*iParam0, Global_35, 1060437492 /* Float: 0.707f */);
	switch (iVar3)
	{
		case 0:
			StringConCat(&cVar0, "N", 24);
			break;
		case 3:
			StringConCat(&cVar0, "L", 24);
			break;
		case 2:
			StringConCat(&cVar0, "R", 24);
			break;
		case 1:
			StringConCat(&cVar0, "BACK", 24);
			break;
	}
	return cVar0;
}

int func_122(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				__LIB_1__::func_223(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_123(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	__LIB_2__::func_965(iParam0, 0, 0, 0, 1, 1);
	iVar0 = __LIB_2__::func_963(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 178, !bParam1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 168, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 259, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 297, bParam2);
		PERSCHAR::_0x6759BEE6762E140B(__LIB_0__::func_120(iParam0));
		if (!bParam1)
		{
			__LIB_2__::func_56(iVar0, 1, 1);
		}
	}
	else
	{
		return false;
	}
	return true;
}

void func_124(int iParam0, bool bParam1)
{
	int iVar0;
	if (__LIB_2__::func_763(iParam0, 0))
	{
		iVar0 = __LIB_2__::func_963(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 234, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 259, true);
		}
		__LIB_2__::func_753(iParam0, 0, 1, 0, 0);
		PERSCHAR::_0x6759BEE6762E140B(__LIB_0__::func_120(iParam0));
		if (bParam1)
		{
			__LIB_2__::func_56(iVar0, 1, 1);
		}
	}
}

bool func_125(int iParam0)
{
	return __LIB_0__::func_746(iParam0) == 7;
}

int func_126()
{
	int iVar0;
	if (__LIB_7__::func_908(1, 2) && iLocal_98 > 1)
	{
		iVar0 = __LIB_3__::func_970(joaat("EA_APPLESEED_WAGON_DEFAULT_COST"));
	}
	else if (iLocal_98 == 1)
	{
		iVar0 = __LIB_3__::func_970(joaat("EA_APPLESEED_SUPPLIES_INITIAL_VALUE"));
	}
	return iVar0;
}

bool func_127(int iParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return __LIB_7__::func_633(iParam0);
	}
	if (__LIB_7__::func_634(iParam0, iParam1))
	{
		return false;
	}
	return __LIB_7__::func_680(iParam0, iParam1);
}

int func_128(int iParam0)
{
	return __LIB_3__::func_400(__LIB_1__::func_977(), &(iParam0->f_690), 0, 0, 0, -1, 1);
}

void func_129(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_32))
	{
		__LIB_1__::func_748(&(uParam0->f_32), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_33))
	{
		__LIB_1__::func_748(&(uParam0->f_33), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_34))
	{
		__LIB_1__::func_748(&(uParam0->f_34), 1, 1);
	}
}

void func_130(int* iParam0, int* iParam1, var uParam2)
{
	__LIB_4__::func_356(iParam0, iParam1, uParam2, 1, 1);
	__LIB_2__::func_480(uParam2, 0, 1, 1, 1);
	if (DECORATOR::DECOR_EXIST_ON(*iParam0, "bScriptedILO"))
	{
		DECORATOR::DECOR_REMOVE(*iParam0, "bScriptedILO");
	}
	iParam0->f_14 = 0;
	iParam0->f_15 = -1;
}

void func_131(int iParam0, int iParam1)
{
	if (__LIB_7__::func_924(iParam0, iParam1))
	{
		return;
	}
	iParam0->f_29 = (iParam0->f_29 || iParam1);
}

void func_132(int iParam0, int iParam1)
{
	if (!__LIB_7__::func_924(iParam0, iParam1))
	{
		return;
	}
	iParam0->f_29 = (iParam0->f_29 - (iParam0->f_29 && iParam1));
}

float func_133()
{
	if ((iLocal_98 == 1 && __LIB_7__::func_923(512)) && !__LIB_7__::func_923(262144))
	{
		return 1f;
	}
	return 2f;
}

float func_134()
{
	if ((iLocal_98 == 1 && __LIB_7__::func_923(512)) && !__LIB_7__::func_923(262144))
	{
		return 1f;
	}
	return 1.75f;
}

void func_135()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_75[16]))
	{
		if (__LIB_7__::func_923(64))
		{
			iLocal_75[16] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1390.451f, -274.8033f, 102.3449f, 0f, 0f, 0f, 4.622575f, 4.933644f, 4.047438f, "Appleseed - volRoadBlocking");
		}
		else if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
		{
			iLocal_75[16] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1430.557f, -357.1499f, 111.7085f, 0f, 0f, 0f, 7.102352f, 6.564137f, 4.575559f, "Appleseed - volRoadBlocking");
		}
	}
}

void func_136(int iParam0)
{
	int iVar0;
	iVar0 = PED::_0x62DE46F061CAA468();
	if (iParam0->f_3 > iVar0)
	{
		iParam0->f_3 = iVar0;
	}
	PED::_0x7D4E70A67A651C71(iParam0->f_3);
	iParam0->f_3 = 0;
}

bool func_137(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(joaat("META_HORSE_SADDLE_ONLY"), iVar0))
	{
		return false;
	}
	iVar1 = joaat("META_HORSE_SADDLE_ONLY");
	if (PED::_0x98082246107A6ACF(iParam0, iVar1))
	{
		return true;
	}
	return false;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (iLocal_98 == 2)
			{
				return 0;
			}
			else if (iLocal_98 == 3)
			{
				return 0;
			}
			break;
		case 2:
			if (__LIB_7__::func_923(64))
			{
				return 2;
			}
			else if (iLocal_98 == 3)
			{
				return 2;
			}
			break;
		case 3:
			if (__LIB_7__::func_923(64))
			{
				return 3;
			}
			else if (iLocal_98 == 3)
			{
				return 3;
			}
			break;
		case 1:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return iParam0;
	}
	return -1;
}

bool func_139(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_7__::func_939(1024);
		case 1:
			return __LIB_7__::func_939(2048);
		case 2:
			return __LIB_7__::func_939(4096);
		case 3:
			return __LIB_7__::func_939(8192);
		case 4:
			return __LIB_7__::func_939(16384);
		default:
			break;
	}
	return false;
}

bool func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_7__::func_939(32768);
		case 1:
			return __LIB_7__::func_939(65536);
		case 2:
			return __LIB_7__::func_939(131072);
		case 3:
			return __LIB_7__::func_939(262144);
		case 4:
			return __LIB_7__::func_939(524288);
		default:
			break;
	}
	return false;
}

float func_141(int iParam0)
{
	if (__LIB_7__::func_923(64) && iParam0 == 0)
	{
		return 0.592049f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 0.705277f;
				case 1:
					return 0.592049f;
				case 2:
					return 0.592049f;
				case 3:
					return 0.705277f;
				case 4:
					return 0.592049f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0.592049f;
				case 1:
					return 0.592049f;
				case 2:
					return 0.705277f;
				case 3:
					return 0.705277f;
				case 4:
					return 0.705277f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0.592049f;
				case 1:
					return 0.705277f;
				case 2:
					return 0.555339f;
				case 3:
					return 0.592049f;
				case 4:
					return 0.592049f;
				default:
					break;
			}
			break;
	}
	return -1f;
}

float func_142(int iParam0)
{
	if (__LIB_7__::func_923(64) && iParam0 == 0)
	{
		return 0.696462f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 0.792988f;
				case 1:
					return 0.696462f;
				case 2:
					return 0.696462f;
				case 3:
					return 0.792988f;
				case 4:
					return 0.696462f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0.696462f;
				case 1:
					return 0.696462f;
				case 2:
					return 0.792988f;
				case 3:
					return 0.792988f;
				case 4:
					return 0.792988f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0.696462f;
				case 1:
					return 0.792988f;
				case 2:
					return 0.674548f;
				case 3:
					return 0.696462f;
				case 4:
					return 0.696462f;
				default:
					break;
			}
			break;
	}
	return -1f;
}

Vector3 func_143(int iParam0)
{
	if (__LIB_7__::func_923(64) && iParam0 == 0)
	{
		return -1387.583f, -272.6812f, 98.8f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1458.54f, -256.597f, 105.987f;
				case 1:
					return -1415.835f, -186.908f, 99.722f;
				case 2:
					return -1456.845f, -196.8082f, 104.6f;
				case 3:
					return -1468.877f, -228.5962f, 106.9087f;
				case 4:
					return -1419.583f, -199.3359f, 100.7483f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1387.583f, -272.6812f, 98.8f;
				case 1:
					return -1450.445f, -165.3257f, 106.4f;
				case 2:
					return -1472.47f, -253.4789f, 109.4271f;
				case 3:
					return -1424.774f, -283.7422f, 105.2652f;
				case 4:
					return -1424.774f, -283.7422f, 105.2652f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1402.2f, -292.7f, 102.7f;
				case 1:
					return -1514.524f, -243.7657f, 118.7613f;
				case 2:
					return -1453.848f, -127.2335f, 107.7073f;
				case 3:
					return -1502.6f, -203.7f, 111f;
				case 4:
					return -1402.2f, -292.7f, 102.7f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_144(int iParam0)
{
	if (__LIB_7__::func_923(64) && iParam0 == 0)
	{
		return -1402.82f, -270.8668f, 98.5505f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1446.31f, -249.5183f, 101.6165f;
				case 1:
					return -1421.7f, -190.4f, 99.7097f;
				case 2:
					return -1467.4f, -185.8f, 104.3577f;
				case 3:
					return -1454.5f, -226.7f, 102.8009f;
				case 4:
					return -1429.321f, -195.9762f, 100.5673f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1402.82f, -270.8668f, 98.5505f;
				case 1:
					return -1463.685f, -173.1668f, 106.0101f;
				case 2:
					return -1457.906f, -252.8943f, 104.7849f;
				case 3:
					return -1410.153f, -285.7408f, 100.6772f;
				case 4:
					return -1410.153f, -285.7408f, 100.6772f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1413.484f, -292.4594f, 101.7033f;
				case 1:
					return -1517.31f, -234.5498f, 115.9662f;
				case 2:
					return -1470f, -127f, 118f;
				case 3:
					return -1514.101f, -202.0088f, 110.2915f;
				case 4:
					return -1413.484f, -292.4594f, 101.7033f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_145()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("P_CS_CEDARLOG01X");
		case 1:
			return joaat("P_CS_CEDARLOG03X");
		default:
			break;
	}
	return joaat("P_CS_CEDARLOG03X");
}

Vector3 func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1330.243f, -215.0619f, 101.4806f;
		case 1:
			return -1331.525f, -215.6111f, 101.4806f;
		case 2:
			return -1332.405f, -216.0306f, 101.4806f;
		case 3:
			return -1333.802f, -208.2314f, 101.4832f;
		case 4:
			return -1334.693f, -208.649f, 101.4832f;
		case 5:
			return -1335.645f, -209.0838f, 101.4832f;
		case 6:
			return -1337.773f, -199.2836f, 101.4557f;
		case 7:
			return -1338.676f, -199.7524f, 101.4558f;
		case 8:
			return -1339.435f, -200.1282f, 101.4558f;
		case 9:
			return -1341.268f, -192.0703f, 101.4249f;
		case 10:
			return -1342.342f, -192.6443f, 101.425f;
		case 11:
			return -1343.02f, -192.9443f, 101.4249f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_147(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!__LIB_8__::func_6(uParam0, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, iParam1, 0);
}

void func_148(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (!__LIB_8__::func_6(uParam0, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, iParam1, 0);
}

void func_149(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			__LIB_7__::func_926(32768);
			return;
		case 1:
			__LIB_7__::func_926(65536);
			return;
		case 2:
			__LIB_7__::func_926(131072);
			return;
		case 3:
			__LIB_7__::func_926(262144);
			return;
		case 4:
			__LIB_7__::func_926(524288);
			return;
	}
}

float func_150(int iParam0)
{
	vector3 vVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return -1f;
	}
	vVar0 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	if (MISC::ABSF((vVar0.x - vVar0.y)) > 0.01f)
	{
		return vVar0.x;
	}
	return vVar0.x;
}

int func_151(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 0;
	}
	StringCopy(&(uParam0->f_1), sParam1, 24);
	return __LIB_8__::func_26(uParam0, &(uParam0->f_1));
}

void func_152(int* iParam0, var uParam1, int iParam2)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	*iParam0 = MAP::_0xA6EF0C54A3443E70(iParam2, uParam1);
}

bool func_153(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*iParam0)[iVar0], Global_35, 1, 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_154(int iParam0)
{
	int iVar0;
	if (__LIB_7__::func_923(64) && iParam0 == 0)
	{
		iVar0 = joaat("DES_TREEFALL_ACCIDENT");
		return iVar0;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
				case 1:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
				case 2:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
				case 3:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
				case 4:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					iVar0 = joaat("DES_TREEFALL_ACCIDENT");
					break;
				case 1:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
				case 2:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
				case 3:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
				case 4:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
				case 1:
					iVar0 = joaat("DES_TREEFALL_UP15");
					break;
				case 2:
					iVar0 = joaat("DES_TREEFALL_DOWN15");
					break;
				case 3:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
				case 4:
					iVar0 = joaat("DES_TREEFALL_FLAT");
					break;
			}
			break;
	}
	return iVar0;
}

char* func_155(int iParam0)
{
	if (__LIB_7__::func_923(64) && iParam0 == 0)
	{
		return "DES_treefall_accident";
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_up15";
				case 1:
					return "DES_treefall_flat";
				case 2:
					return "DES_treefall_flat";
				case 3:
					return "DES_treefall_up15";
				case 4:
					return "DES_treefall_flat";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_accident";
				case 1:
					return "DES_treefall_flat";
				case 2:
					return "DES_treefall_up15";
				case 3:
					return "DES_treefall_up15";
				case 4:
					return "DES_treefall_up15";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_flat";
				case 1:
					return "DES_treefall_up15";
				case 2:
					return "DES_treefall_down15";
				case 3:
					return "DES_treefall_flat";
				case 4:
					return "DES_treefall_flat";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			__LIB_7__::func_926(1024);
			return;
		case 1:
			__LIB_7__::func_926(2048);
			return;
		case 2:
			__LIB_7__::func_926(4096);
			return;
		case 3:
			__LIB_7__::func_926(8192);
			return;
		case 4:
			__LIB_7__::func_926(16384);
			return;
	}
}

Vector3 func_157(int iParam0)
{
	if (__LIB_7__::func_923(64) && iParam0 == 0)
	{
		return 0f, 0f, 79.04118f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -15f, 0f, -60.62425f;
				case 1:
					return 0f, 0f, 102.5155f;
				case 2:
					return 0f, 0f, 42.34158f;
				case 3:
					return -15f, 0f, -84.66344f;
				case 4:
					return 0f, 0f, 60.87f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 79.04118f;
				case 1:
					return 0f, 0f, 121.4344f;
				case 2:
					return -15f, 0f, -98.84385f;
				case 3:
					return -15f, 0f, -99.77609f;
				case 4:
					return -15f, 0f, -99.77609f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 84.4f;
				case 1:
					return -15f, 0f, 14.6f;
				case 2:
					return 15f, 0f, -158.89f;
				case 3:
					return 0f, 0f, 77.9f;
				case 4:
					return 0f, 0f, 84.4f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_158(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					if (__LIB_7__::func_923(64))
					{
						iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1390.31f, -272.9292f, 100.524f, -80.4691f, 83.58102f, -92.52708f, 1.284743f, 0.828f, 12.42189f, "volTreeKill 0");
					}
					else
					{
						iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1455.782f, -255.1657f, 106.2708f, 176.1422f, 74.22754f, -157.1033f, 1.284743f, 0.828f, 11.23116f, "volTreeKill 0");
					}
					break;
				case 1:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1408.708f, -186.5688f, 101.067f, 76.65434f, 86.72099f, -88.83711f, 1.284743f, 0.828f, 12.79663f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1458.914f, -194.3228f, 105.2989f, -89.76711f, 89.07716f, -136.2797f, 1.284743f, 0.828f, 11.93199f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1465.396f, -227.6279f, 107.1113f, -173.9405f, 77.34332f, -173.0002f, 1.284743f, 0.828f, 10.89174f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1417.96f, -200.7522f, 101.8687f, 116.2321f, 86.72099f, -88.83711f, 1.284743f, 0.828f, 10.74282f, "volTreeKill 1");
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1390.31f, -272.9292f, 100.524f, -80.4691f, 83.58102f, -92.52708f, 1.284743f, 0.828f, 12.42189f, "volTreeKill 0");
					break;
				case 1:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1453.148f, -166.5273f, 107.2447f, 77.26909f, 87.1385f, -72.74516f, 1.284743f, 0.828f, 11.9518f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1468.958f, -251.1458f, 108.5803f, -163.4203f, 76.80013f, -175.8395f, 1.284743f, 0.828f, 11.48762f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1421.089f, -284.0165f, 104.972f, -160.3766f, 74.96647f, -172.5704f, 1.284743f, 0.828f, 11.23799f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1421.089f, -284.0165f, 104.972f, -160.3766f, 74.96647f, -172.5704f, 1.284743f, 0.828f, 11.23799f, "volTreeKill 3");
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1402.123f, -292.1445f, 102.0348f, -0.864238f, -86.31268f, 0f, 1.926056f, 1f, 10.36427f, "volTreeKill 0");
					break;
				case 1:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1513.435f, -244.4112f, 120.048f, 76.4277f, 4.506001f, 14.70511f, 1.139303f, 2.028264f, 10.8445f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1473.797f, -116.0985f, 116.5509f, 78.37471f, 4.515922f, 12.70869f, 2.082363f, 2.176558f, 10.8445f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1503.689f, -203.0762f, 110.4443f, 173.4138f, -89.01738f, -180f, 2.334879f, 1f, 10.34734f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1402.123f, -292.1445f, 102.0348f, -0.864238f, -86.31268f, 0f, 1.926056f, 1f, 10.36427f, "volTreeKill 0");
					break;
			}
			break;
	}
}

void func_159(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_7__::func_934(iParam0);
	}
	else
	{
		__LIB_7__::func_965(iParam0);
	}
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		case 1:
			return 8;
		default:
			break;
	}
	return -1;
}

char* func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "POSE_";
		case 1:
			return "FOREMAN_";
		default:
			break;
	}
	return "";
}

char* func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PED01";
		case 1:
			return "PED02";
		default:
			break;
	}
	return "";
}

char* func_163(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DROP_LOOP";
		case 1:
			return "DROP_LOOP";
		default:
			break;
	}
	return "";
}

char* func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LIFT_LOOP";
		case 1:
			return "idle_loop";
		default:
			break;
	}
	return "";
}

void func_165(int iParam0, float fParam1, int iParam2)
{
	__LIB_1__::func_336(iParam0, 1);
	iParam0->f_9 = fParam1;
	iParam0->f_10 = iParam2;
}

bool func_166(int iParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar0]) && iParam0 != (*iParam1)[iVar0])
		{
			if (__LIB_0__::func_665(iParam0, (*iParam1)[iVar0], 1, 1) < fParam3)
			{
				*uParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_167(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_7__::func_922(iParam0);
	}
	else
	{
		__LIB_7__::func_941(iParam0);
	}
}

void func_168(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_7__::func_932(iParam0);
	}
	else
	{
		__LIB_7__::func_928(iParam0);
	}
}

bool func_169()
{
	if (__LIB_7__::func_923(256))
	{
		if (!__LIB_4__::func_434(-1901305252))
		{
			return false;
		}
	}
	return true;
}

void func_170(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	iVar0 = __LIB_7__::func_942(iParam0);
	if (bParam1)
	{
		__LIB_0__::func_24(iVar0, 8);
		__LIB_1__::func_336(&(Global_1392194[iParam0 /*10*/].f_1), 1);
	}
	else
	{
		__LIB_0__::func_25(iVar0, 8);
		__LIB_0__::func_516(&(Global_1392194[iParam0 /*10*/].f_1), 1);
	}
}

bool func_171()
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(__LIB_7__::func_953()))
	{
		return false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(__LIB_7__::func_954()))
	{
		return false;
	}
	return true;
}

void func_172(int iParam0, int iParam1, int* iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = -89429847;
	if (iParam5 == 0 || iParam5 == Global_35)
	{
		iParam5 = Global_35;
		iVar0 = joaat("BLIP_STYLE_ENEMY");
	}
	bParam3 = (bParam3 || __LIB_7__::func_924(iParam0, 4096));
	if (WEAPON::_0xCB690F680A3EA971(iParam1, 4))
	{
		bParam3 = false;
	}
	__LIB_3__::func_608(iParam1);
	__LIB_0__::func_325(iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		PED::_0xFC3DB99C8144CD81(iParam1, Global_1392194[iParam0->f_136 /*10*/].f_5, 0, false, 0);
		PED::SET_PED_CONFIG_FLAG(iParam1, 146, false);
		PED::SET_PED_CONFIG_FLAG(iParam1, 246, true);
		PED::SET_PED_CONFIG_FLAG(iParam1, 178, true);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, true);
		if (bParam3)
		{
			PED::_0xEEED8FAFEC331A70(iParam1, ENTITY::GET_ENTITY_COORDS(iParam5, true, false), 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, joaat("REL_PLAYER_DISLIKE"));
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, iParam5, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam1, iVar1, 0.1f, 0.75f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			PED::SET_PED_KEEP_TASK(iParam1, true);
		}
		else
		{
			if (iParam5 == Global_35)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, joaat("REL_PLAYER_ENEMY"));
			}
			PED::_0x802092B07E3B1EEA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam5, true, false), 3);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 71, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 31, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, true);
			__LIB_2__::func_73(iParam1, iParam2, iVar0, 580546400, 0, 0);
			if (__LIB_7__::func_966(iParam1))
			{
				iParam4 = __LIB_7__::func_967(iParam1);
			}
			if (PED::IS_PED_HUMAN(iParam1))
			{
				bVar2 = __LIB_0__::func_153(iParam1, 0, 1, 0) != iParam4;
				if (bVar2)
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam1, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			if (__LIB_0__::func_154(iParam4))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iParam4, true, 0, false, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (PED::IS_PED_HUMAN(iParam1))
			{
				if (__LIB_0__::func_154(iParam4))
				{
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				}
				if (!PED::IS_PED_USING_ANY_SCENARIO(iParam1) && bVar2)
				{
					TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, __LIB_7__::func_968(), 0.5f, 0, 4);
				}
				if (!bVar2 && PED::GET_PED_CONFIG_FLAG(iParam1, 12, true))
				{
					TASK::_0x2416EC2F31F75266(0, iParam5, 0, 0, 0);
				}
			}
			TASK::TASK_COMBAT_PED(0, iParam5, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam1, iVar1, 0.1f, 0.75f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
	}
}

void func_173(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	__LIB_7__::func_980(iParam0, Global_40.f_9096[iParam0 /*12*/].f_10, iParam1, iParam2, uParam3, uParam4);
}

void func_174(int iParam0)
{
	*iParam0 = 4;
	if (__LIB_7__::func_923(64))
	{
		iParam0->f_15[0 /*32*/].f_6 = { -1413.793f, -240.7767f, 98.87817f };
		iParam0->f_15[0 /*32*/].f_9 = 251.3227f;
		iParam0->f_15[0 /*32*/].f_1 = __LIB_7__::func_981();
		iParam0->f_15[0 /*32*/].f_3 = 1842387010;
		iParam0->f_15[1 /*32*/].f_6 = { -1403.043f, -243.4083f, 99.37144f };
		iParam0->f_15[1 /*32*/].f_9 = 214.3414f;
		iParam0->f_15[1 /*32*/].f_1 = __LIB_7__::func_981();
		iParam0->f_15[2 /*32*/].f_6 = { -1407.91f, -252.1218f, 99.3026f };
		iParam0->f_15[2 /*32*/].f_9 = 354.953f;
		iParam0->f_15[2 /*32*/].f_21 = 0;
		iParam0->f_15[2 /*32*/].f_1 = __LIB_7__::func_981();
		iParam0->f_15[3 /*32*/].f_6 = { -1415.464f, -251.052f, 100.0263f };
		iParam0->f_15[3 /*32*/].f_9 = 323.5956f;
		iParam0->f_15[3 /*32*/].f_21 = 1;
		iParam0->f_15[3 /*32*/].f_1 = __LIB_7__::func_981();
	}
	iParam0->f_1 = 0;
	if (__LIB_7__::func_923(16384))
	{
		iParam0->f_1++;
	}
	if (iLocal_98 == 1 && __LIB_7__::func_923(131072))
	{
		Local_15[0 /*28*/].f_4 = { -1376.811f, -220.7483f, 100.515f };
		Local_15[0 /*28*/].f_10 = -22.2f;
	}
	else
	{
		Local_15[0 /*28*/].f_4 = { -1261.942f, -304.2063f, 97.9132f };
		Local_15[0 /*28*/].f_10 = 59.8051f;
	}
	if (__LIB_7__::func_923(32768))
	{
		Local_15[0 /*28*/].f_11 = joaat("LOGWAGON");
		if (iLocal_98 == 1 && !__LIB_7__::func_923(131072))
		{
			Local_15[0 /*28*/].f_12 = "LOG_WAGON01A";
		}
		iLocal_14 += 2;
	}
	Local_15[0 /*28*/] = { -1372.528f, -209.3416f, 100.5443f };
	Local_15[0 /*28*/].f_3 = 349.7721f;
	Local_15[0 /*28*/].f_23 = 0;
	Local_15[0 /*28*/].f_22 = 0;
	Local_15[0 /*28*/].f_7 = { -1381.927f, -210.7938f, 102.3367f };
	iParam0->f_15[4 /*32*/].f_6 = { -1416.878f, -211.8701f, 104.7347f };
	iParam0->f_15[4 /*32*/].f_9 = 309.938f;
	if (__LIB_7__::func_923(32768))
	{
		*iParam0++;
		iParam0->f_15[4 /*32*/].f_1 = __LIB_7__::func_981();
	}
	else
	{
		iParam0->f_15[4 /*32*/].f_1 = 0;
	}
}

void func_175(int iParam0, float fParam1, bool bParam2)
{
	iParam0->f_22 = fParam1;
	if (bParam2)
	{
		__LIB_7__::func_982(iParam0, fParam1);
	}
}

void func_176(int iParam0)
{
	Global_40.f_9096[iParam0 /*12*/].f_9 = -1;
	Global_40.f_9096[iParam0 /*12*/].f_10 = -1;
	__LIB_8__::func_83(iParam0, 32768);
}

void func_177()
{
	STREAMING::REQUEST_COLLISION_AT_COORD(__LIB_7__::func_989());
}

bool func_178()
{
	if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
	{
		return ENTITY::_0x6BFBDC46139C45AB(__LIB_7__::func_989());
	}
	return true;
}

int func_179()
{
	if (__LIB_2__::func_117(64))
	{
		return iLocal_203;
	}
	return iLocal_204;
}

void func_180(int iParam0, bool bParam1)
{
	if (bParam1 || __LIB_7__::func_907(iParam0, 8192))
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, __LIB_7__::func_991(iParam0)))
		{
			return;
		}
		UILOG::_UILOG_REMOVE_ENTRY(3, __LIB_7__::func_991(iParam0));
		__LIB_8__::func_93(iParam0, 8192);
	}
}

void func_181(int iParam0)
{
	if (!__LIB_7__::func_907(iParam0, 8192))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, __LIB_7__::func_991(iParam0), __LIB_7__::func_943(iParam0, __LIB_0__::func_982(iParam0)), __LIB_7__::func_992(iParam0), __LIB_7__::func_993(iParam0), 0);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, __LIB_7__::func_991(iParam0), __LIB_7__::func_994(iParam0), __LIB_7__::func_995());
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, __LIB_7__::func_991(iParam0), __LIB_7__::func_996(iParam0), __LIB_7__::func_997());
		__LIB_8__::func_85(iParam0, 8192);
	}
}

char* func_182(int iParam0, int iParam1)
{
	if (__LIB_8__::func_88(iParam0, 16))
	{
		switch (iParam0->f_1)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return "LCMP_AGGRO1";
					case 1:
						return "LCMP_AGGRO2";
					default:
						break;
				}
				break;
			default:
				switch (iParam1)
				{
					case 0:
						return "LCMP_AGGRO3";
					case 1:
						return "LCMP_AGGRO4";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0->f_16)
		{
			case 1:
				switch (iParam1)
				{
					case 0:
						return "LCMP_BODY1";
					case 1:
						return "LCMP_BODY2";
					default:
						break;
				}
				break;
			case 7:
				switch (iParam0->f_1)
				{
					case 0:
					case 1:
						switch (iParam1)
						{
							case 0:
								return "LCMP_STEAL1";
							case 1:
								return "LCMP_STEAL2";
							default:
								break;
						}
						break;
					default:
						switch (iParam1)
						{
							case 0:
								return "LCMP_STEAL3";
							case 1:
								return "LCMP_STEAL4";
							default:
								break;
						}
						break;
				}
				break;
		}
	}
	return "";
}

void func_183(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (!__LIB_8__::func_6(uParam0, sParam2))
	{
		return;
	}
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam0, sParam2, iParam1);
}

void func_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	__LIB_8__::func_7(iParam0, &(Global_40.f_9096[iParam0 /*12*/].f_10), iParam1, iParam2, iParam3, iParam4, bParam5);
}

bool func_185(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (__LIB_7__::func_966(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (bParam2)
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	if (!PED::IS_PED_MALE(iParam0))
	{
		return false;
	}
	fVar1 = __LIB_2__::func_118(iParam0, 1, 1);
	if (fVar1 < 30f)
	{
		fVar0 = 1f;
	}
	else if (fVar1 < 75f)
	{
		fVar0 = 0.7f;
	}
	else if (fVar1 < 150f)
	{
		fVar0 = 0.5f;
	}
	else
	{
		fVar0 = 0.3f;
	}
	fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar2 <= fVar0)
	{
		return true;
	}
	return false;
}

var func_186(int* iParam0, int iParam1)
{
	char cVar0[32];
	if (iParam1 == 1)
	{
		if (iParam0->f_16 == 8 && __LIB_1__::func_985())
		{
			switch (iParam0->f_1)
			{
				case 1:
					return "WHATS_GOING_ON";
				case 2:
					return "GENERIC_CURSE_MED";
				case 3:
				default:
					break;
			}
			return "GENERIC_CURSE_HIGH";
		}
		else
		{
			switch (iParam0->f_1)
			{
				case 1:
					return "GENERIC_SHOCKED_DISBELIEF";
				case 2:
					return "GENERIC_CURSE_MED";
				case 3:
				default:
					break;
			}
			return "GENERIC_CURSE_HIGH";
		}
	}
	if (__LIB_8__::func_88(iParam0, 16))
	{
		StringCopy(&cVar0, "GET_LOST", 32);
	}
	else
	{
		switch (iParam0->f_16)
		{
			case -1:
			case default:
				StringCopy(&cVar0, "PLAYER_ACTING_WEIRD", 32);
				break;
			case 1:
				StringCopy(&cVar0, "GENERIC_ANGRY_REACTION", 32);
				break;
			case 2:
				StringCopy(&cVar0, "PLEAD_HOGTIED", 32);
				break;
			case 3:
				switch (iParam0->f_1)
				{
					case 1:
						StringCopy(&cVar0, "PLAYER_ACTING_WEIRD", 32);
						break;
					case 2:
					default:
						StringCopy(&cVar0, "GENERIC_ANGRY_REACTION", 32);
						break;
				}
				break;
			case 4:
				StringCopy(&cVar0, "WHATS_YOUR_PROBLEM", 32);
				break;
			case 6:
				StringCopy(&cVar0, "PLAYER_AIMING_NOBODY", 32);
				break;
			case 5:
				StringCopy(&cVar0, "GUN", 32);
				break;
			case 8:
				switch (iParam0->f_1)
				{
					case 1:
					case default:
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								StringCopy(&cVar0, "WHATS_YOUR_PROBLEM", 32);
								break;
							case 1:
								StringCopy(&cVar0, "STOP_THAT", 32);
								break;
						}
						break;
					case 2:
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								StringCopy(&cVar0, "CUT_THAT_OUT", 32);
								break;
							case 1:
								StringCopy(&cVar0, "SHAME_ON_YOU", 32);
								break;
							case 2:
								StringCopy(&cVar0, "GENERIC_ANTISOCIAL_MALE_EVENT_COMMENT", 32);
								break;
						}
						break;
					case 3:
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
						{
							case 0:
								StringCopy(&cVar0, "FINAL_WARNING", 32);
								break;
							case 1:
								StringCopy(&cVar0, "GUARD_FINAL_WARNING", 32);
								break;
							case 2:
								StringCopy(&cVar0, "WARNED_ALREADY", 32);
								break;
							case 3:
								StringCopy(&cVar0, "GUARD_WARNED_ALREADY", 32);
								break;
							case 4:
								StringCopy(&cVar0, "GUARD_WARNING", 32);
								break;
						}
						break;
				}
				break;
			case 7:
				switch (iParam0->f_1)
				{
					case 1:
					case default:
						StringCopy(&cVar0, "STOP_THAT", 32);
						break;
					case 2:
						StringCopy(&cVar0, "CUT_THAT_OUT", 32);
						break;
					case 3:
						StringCopy(&cVar0, "CHALLENGE_THREATEN", 32);
						break;
				}
				break;
		}
	}
	return __LIB_1__::func_569(cVar0);
}

void func_187()
{
	if (__LIB_7__::func_923(64))
	{
		OBJECT::SET_FORCE_OBJECT_THIS_FRAME(__LIB_8__::func_25(), 10f);
	}
}

void func_188(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	__LIB_8__::func_53(uParam0, sParam1, sParam2, iParam3);
	__LIB_8__::func_54(uParam0);
}

bool func_189(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = __LIB_0__::func_485();
	}
	else if (__LIB_0__::func_485() - iParam1->f_4) > __LIB_2__::func_97(iParam1)
	{
		return __LIB_7__::func_962(iParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return false;
}

bool func_190(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_8__::func_57(iParam0, 4, iParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		*iParam1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		return true;
	}
	iVar1 = __LIB_8__::func_57(iParam0, 5, iParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*iParam1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		return true;
	}
	return false;
}

void func_191(var uParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (!__LIB_8__::func_58(uParam0, sParam1))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, sParam1, bParam2);
}

void func_192(var uParam0, char* sParam1)
{
	__LIB_8__::func_59(uParam0, sParam1, 1);
}

int func_193(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!__LIB_1__::func_902(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return __LIB_1__::func_690(iParam0, uVar0, iVar1, bParam2);
}

char* func_194(int* iParam0)
{
	char cVar0[32];
	char cVar4[32];
	switch (iParam0->f_15)
	{
		case 0:
			if (__LIB_8__::func_88(iParam0, 16))
			{
				return "DEFUSE_LEFT_PROPERTY_KEEP_GOING";
			}
			switch (iParam0->f_16)
			{
				case 0:
					return "DEFUSE_ARGUMENT";
				default:
					break;
			}
			return "DEFUSE_ARGUMENT_TOUGH";
		case 1:
			if (__LIB_8__::func_88(iParam0, 16))
			{
				return "KEEP_GOING_ANTAGONZIZE_RESPONSE";
			}
			switch (iParam0->f_16)
			{
				case 0:
					StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
					StringConCat(&cVar4, "_PART", 32);
					MISC::_INT_TO_STRING(1, "%d", &cVar0);
					StringConCat(&cVar4, &cVar0, 32);
					return __LIB_1__::func_569(cVar4);
				case 8:
					return "LAW_LOW_SEVERITY_ANTAGONIZE";
			}
			return "LAW_LOW_SEVERITY_ANTAGONIZE";
	}
	return "DEFUSE_ARGUMENT_TOUGH";
}

char* func_195(int* iParam0)
{
	switch (iParam0->f_15)
	{
		case 0:
			if (__LIB_8__::func_88(iParam0, 16))
			{
				return "GUARD_PLAYER_LOITERING";
			}
			switch (iParam0->f_16)
			{
				case 0:
					return "DEFUSE_RESPONSE";
				case 8:
					return "WON_DISPUTE";
				default:
					break;
			}
			return "DEFUSE_RESPONSE";
		case 1:
			if (__LIB_8__::func_88(iParam0, 16))
			{
				return "GUARD_PLAYER_LOITERING";
			}
			switch (iParam0->f_16)
			{
				case 0:
					return "DEFUSE_RESPONSE";
				case 8:
					return "WON_DISPUTE_ESCALATED_ARMED";
				default:
					break;
			}
			return "DEFUSE_RESPONSE";
	}
	return "DEFUSE_RESPONSE";
}

void func_196(var uParam0, char* sParam1)
{
	__LIB_8__::func_59(uParam0, sParam1, 0);
}

int func_197(float fParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;
	if (Global_1935630.f_12)
	{
		return 1;
	}
	if (!PED::_0x50F124E6EF188B22(Global_35))
	{
		return 1;
	}
	fVar0 = __LIB_8__::func_67();
	if (fVar0 <= fParam0)
	{
		return 1;
	}
	if (bParam2)
	{
		if (fParam0 < 0.5f)
		{
			__LIB_3__::func_180(0);
		}
		else
		{
			__LIB_3__::func_180(1);
		}
		return 1;
	}
	if (fParam0 < 0.5f)
	{
		__LIB_3__::func_180(0);
	}
	else
	{
		__LIB_3__::func_180(1);
	}
	return 0;
}

void func_198(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_1__::func_918(iParam0))
	{
		return;
	}
	iVar0 = __LIB_8__::func_74(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	__LIB_0__::func_516(&(Global_1914319.f_3[iParam0 /*446*/].f_8), iVar0);
}

void func_199(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_1__::func_918(iParam0))
	{
		return;
	}
	iVar0 = __LIB_8__::func_74(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	__LIB_1__::func_336(&(Global_1914319.f_3[iParam0 /*446*/].f_8), iVar0);
}

float func_200(var uParam0, char* sParam1, char* sParam2)
{
	vector3 vVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 40000f;
	}
	vVar0 = { __LIB_8__::func_68(uParam0, sParam1, sParam2) };
	if (!__LIB_0__::func_86(vVar0))
	{
		return vVar0.z;
	}
	return 40000f;
}

void func_201(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < __LIB_8__::func_80(iParam0))
	{
		iVar1 = __LIB_8__::func_75(iParam0, iVar0);
		if (iVar1 != 0 && MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar1))
		{
			MAP::_MAP_DISCOVERY_SET_ENABLED(iVar1);
		}
		iVar0++;
	}
}

Vector3 func_202(vector3 vParam0, vector3 vParam3, vector3 vParam6, var uParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { __LIB_1__::func_367(vParam0, vParam3, uParam9) };
	vVar3 = { __LIB_1__::func_367(vParam3, vParam6, uParam9) };
	return __LIB_1__::func_367(vVar0, vVar3, uParam9);
}

void func_203(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	iVar0 = __LIB_7__::func_942(iParam0);
	if (!__LIB_0__::func_21(iVar0, 8))
	{
		__LIB_0__::func_24(iVar0, 8);
	}
	TASK::_0x4161648394262FDF(__LIB_7__::func_943(iParam0, __LIB_0__::func_982(iParam0)), 100f);
	__LIB_1__::func_336(&(Global_1392194[iParam0 /*10*/].f_1), 1);
}

bool func_204()
{
	float fVar0;
	if (__LIB_2__::func_117(16))
	{
		return false;
	}
	if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
	{
		return false;
	}
	if (iLocal_98 > 3)
	{
		return false;
	}
	if (iLocal_98 == 1)
	{
		return true;
	}
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	return fVar0 < 0.4f;
}

bool func_205()
{
	float fVar0;
	if (__LIB_2__::func_117(16))
	{
		return false;
	}
	else if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
	{
		return false;
	}
	else if (iLocal_98 > 3)
	{
		return false;
	}
	else if (iLocal_98 == 2 && !__LIB_7__::func_923(131072))
	{
		return true;
	}
	else if (iLocal_98 >= 2)
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		return fVar0 < 0.33f;
	}
	return false;
}

void func_206(int* iParam0, var uParam1, bool bParam2)
{
	__LIB_0__::func_37(&(iParam0->f_6));
	iParam0->f_5 = -1;
	__LIB_8__::func_89(iParam0, 1);
	__LIB_8__::func_89(iParam0, 4);
	__LIB_8__::func_89(iParam0, 32);
	__LIB_8__::func_89(iParam0, 128);
	__LIB_8__::func_89(iParam0, 64);
	__LIB_8__::func_89(iParam0, 8);
	__LIB_8__::func_89(iParam0, 256);
	__LIB_8__::func_89(iParam0, 512);
	iParam0->f_13 = 0;
	iParam0->f_18 = 0;
	if (!bParam2)
	{
		*iParam0 = 0;
		StringCopy(&(iParam0->f_20[0 /*4*/]), "", 32);
		StringCopy(&(iParam0->f_20[1 /*4*/]), "", 32);
		iParam0->f_16 = -1;
	}
	if (iParam0->f_19 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iParam0->f_19);
	}
	iParam0->f_2 = 0;
	uParam1->f_4 = 0;
}

void func_207(int iParam0)
{
	__LIB_2__::func_571(iParam0, &(iParam0->f_28));
	__LIB_3__::func_748(iParam0, 1);
	__LIB_3__::func_230(iParam0, 0);
	__LIB_2__::func_613(iParam0, 0);
	__LIB_3__::func_391(iParam0, 0);
	__LIB_8__::func_84(iParam0, 0);
}

void func_208()
{
	vector3 vVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_75[16]))
	{
		if (!__LIB_7__::func_929(4194304) && !__LIB_7__::func_897(2048))
		{
			vVar0 = { VOLUME::_GET_VOLUME_SCALE(iLocal_75[16]) };
			__LIB_2__::func_165(VOLUME::_GET_VOLUME_COORDS(iLocal_75[16]), __LIB_0__::func_649(vVar0.x, vVar0.y), 0, 0, 4);
			PATHFIND::_0xB03944057FD735BA(iLocal_75[16], 4, 0);
			__LIB_7__::func_932(4194304);
		}
	}
}

void func_209()
{
	vector3 vVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_75[16]))
	{
		if (__LIB_7__::func_929(4194304))
		{
			vVar0 = { VOLUME::_GET_VOLUME_SCALE(iLocal_75[16]) };
			__LIB_2__::func_161(VOLUME::_GET_VOLUME_COORDS(iLocal_75[16]), __LIB_0__::func_649(vVar0.x, vVar0.y), 4);
			PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_75[16], 4, 0);
		}
	}
}

int func_210()
{
	int iVar0;
	int iVar1;
	iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (__LIB_2__::func_366(Global_35))
		{
			iVar1 = __LIB_8__::func_105(Global_35);
		}
		else if (__LIB_1__::func_869(Global_35))
		{
			iVar1 = __LIB_8__::func_106(Global_35);
		}
		else if (__LIB_2__::func_365(Global_35))
		{
			iVar1 = __LIB_3__::func_989(Global_35);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return iVar0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return iVar0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	return iVar0;
}

void func_211()
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		vVar1 = { __LIB_8__::func_71(iVar0) };
		__LIB_8__::func_111(&vVar1, 0);
		iVar0++;
	}
}

Vector3 func_212(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	vector3 vVar8;
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	fVar6 = (__LIB_0__::func_649(vVar3.x, __LIB_0__::func_649(vVar3.y, vVar3.z)) / 2f);
	iVar7 = 0;
	while (iVar7 < iParam1)
	{
		if (!bParam2)
		{
			vVar8 = { __LIB_7__::func_913(vVar0, fVar6) };
		}
		else
		{
			vVar8 = { __LIB_8__::func_112(vVar0, fVar6, iParam3) };
		}
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0, vVar8))
		{
			return vVar8;
		}
		iVar7++;
	}
	return vVar0;
}

bool func_213(var uParam0, int iParam1, int iParam2)
{
	if (!__LIB_2__::func_1(iParam1, 0, 1))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bNoticePlayer"))
	{
		return false;
	}
	if (!__LIB_8__::func_79(iParam1))
	{
		return false;
	}
	if (__LIB_0__::func_665(iParam1, Global_35, 1, 1) > uParam0->f_32)
	{
		return false;
	}
	if (__LIB_1__::func_248(iParam1, iParam2))
	{
		return false;
	}
	if (__LIB_8__::func_113(iParam1, &(uParam0->f_12)))
	{
		return false;
	}
	return true;
}

Vector3 func_214(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	vector3 vVar0[24];
	int iVar3;
	StringCopy(&cVar0, sParam1, 24);
	switch (iParam3)
	{
		case 0:
			StringConCat(&cVar0, "A_", 24);
			break;
		case 1:
			StringConCat(&cVar0, "B_", 24);
			break;
		case 2:
			StringConCat(&cVar0, "C_", 24);
			break;
		case 3:
			StringConCat(&cVar0, "D_", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			return cVar0;
	}
	if (bParam4)
	{
		StringConCat(&cVar0, "NEG_", 24);
	}
	else
	{
		StringConCat(&cVar0, "POS_", 24);
	}
	iVar3 = __LIB_3__::func_112(*iParam0, Global_35, 1060437492 /* Float: 0.707f */);
	switch (iVar3)
	{
		case 0:
			StringConCat(&cVar0, "N_", 24);
			break;
		case 3:
			StringConCat(&cVar0, "L_", 24);
			break;
		case 2:
			StringConCat(&cVar0, "R_", 24);
			break;
		case 1:
			iVar3 = __LIB_3__::func_112(*iParam0, Global_35, 1f);
			switch (iVar3)
			{
				case 3:
					StringConCat(&cVar0, "L_", 24);
					break;
				case 2:
					StringConCat(&cVar0, "R_", 24);
					break;
			}
			break;
	}
	StringConCat(&cVar0, sParam2, 24);
	return cVar0;
}

bool func_215(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_296(30336, 1, 1) && !__LIB_8__::func_90())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (__LIB_3__::func_291(Global_35, 0))
	{
		iVar0 = 0;
	}
	if (__LIB_2__::func_84() && __LIB_5__::func_657() == 27)
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_216()
{
	int iVar0;
	float fVar1;
	bool bVar2;
	if (__LIB_7__::func_923(64))
	{
		return false;
	}
	else if (__LIB_2__::func_117(64) && (iLocal_98 == 2 || (iLocal_98 == 3 && __LIB_7__::func_923(262144))))
	{
		iVar0 = __LIB_7__::func_914(__LIB_7__::func_930(), 0);
		if (__LIB_0__::func_34(iVar0) && MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::_0x1E8A921112891651(Global_1425371[iVar0 /*373*/].f_1), __LIB_7__::func_930(), true) < 350f)
		{
			return false;
		}
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		bVar2 = fVar1 < 1f;
		if (bVar2)
		{
			return true;
		}
	}
	return false;
}

void func_217(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_923(iParam0->f_9[0]))
	{
		return;
	}
	iVar1 = iParam0->f_9[0];
	__LIB_1__::func_446(&iVar1, 0, iParam0->f_4, 0, 0, 0, 0, 0);
	if (__LIB_1__::func_426(iVar1, 1))
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_3)
		{
			if (iVar0 < (iParam0->f_3 - 1))
			{
				iParam0->f_9[iVar0] = iParam0->f_9[iVar0 + 1];
			}
			else
			{
				iParam0->f_9[iVar0] = -15;
			}
			iVar0++;
		}
		iParam0->f_1 = (iParam0->f_1 - 1);
		if (iParam0->f_1 <= 0)
		{
			iParam0->f_1 = 0;
			__LIB_8__::func_89(iParam0, 16);
			iParam0->f_4 = 30;
		}
	}
}

bool func_218(int iParam0)
{
	return __LIB_8__::func_123(iParam0, 0, 1);
}

bool func_219(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam3))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam3);
			if (!PED::_0x5102307CE88798EB(iVar1))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
			}
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				fVar2 = __LIB_3__::func_441(iParam10);
				if (fVar2 < 0f)
				{
					if (PED::IS_TRACKED_PED_VISIBLE(iVar1))
					{
						bVar0 = true;
					}
				}
				else if (PED::_0x164CECC59E70DF86(iVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = __LIB_8__::func_119(bParam4, PLAYER::PLAYER_PED_ID(), iParam3);
		}
	}
	else
	{
		bVar0 = __LIB_8__::func_120(bParam4, PLAYER::PLAYER_PED_ID(), vParam0);
	}
	if (bVar0)
	{
		*bParam6 = 1;
		if (*iParam5 != 0f)
		{
		}
		if (*iParam5 <= 0f)
		{
			*iParam5 = __LIB_0__::func_36();
		}
		else if ((__LIB_0__::func_36() - *iParam5) > bParam7)
		{
			*iParam5 = 0f;
			return true;
		}
	}
	else if (*bParam4 == 2 && bParam4->f_4)
	{
		if (!bParam9)
		{
			*iParam5 = 0f;
		}
	}
	else
	{
		*bParam6 = 1;
	}
	return false;
}

int func_220(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = __LIB_8__::func_4(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar1 = __LIB_7__::func_964(iParam0, iVar0, iParam1);
		__LIB_8__::func_123(iVar1, 1, 1);
		iVar0++;
	}
	return iVar0;
}

void func_221(int iParam0, bool bParam1)
{
	if (*iParam0 != 3)
	{
		if (!__LIB_2__::func_1(iParam0->f_40, 0, 1))
		{
			*iParam0 = 3;
		}
	}
	switch (*iParam0)
	{
		case 0:
			__LIB_8__::func_114(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_39))
			{
				iParam0->f_39 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, 5f, 5f, 5f);
			}
			*iParam0 = 1;
			break;
		case 1:
			if (__LIB_8__::func_115(iParam0))
			{
				if (bParam1)
				{
					TASK::CLEAR_PED_TASKS(iParam0->f_40, true, false);
				}
				__LIB_8__::func_114(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
				__LIB_2__::func_966(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				*iParam0 = 2;
			}
			break;
		case 2:
			__LIB_2__::func_966(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (!__LIB_8__::func_115(iParam0))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_40, Global_35, -1, -1f, -1f, -1f);
				*iParam0 = 1;
			}
			break;
		case 3:
			break;
	}
}

bool func_222(int iParam0)
{
	if (__LIB_0__::func_599(iParam0) && __LIB_1__::func_707(iParam0, 1, 0))
	{
		return true;
	}
	else if (__LIB_0__::func_600(iParam0) && __LIB_6__::func_518(iParam0))
	{
		return true;
	}
	return false;
}

void func_223(bool bParam0)
{
	int iVar0;
	iVar0 = 11;
	if (!__LIB_8__::func_5())
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iVar0 /*446*/].f_25))
	{
		if (bParam0)
		{
			VOLUME::_DELETE_VOLUME(Global_1914319.f_3[iVar0 /*446*/].f_25);
		}
		else
		{
			Global_1914319.f_3[iVar0 /*446*/].f_25 = 0;
		}
	}
	Global_1914319.f_3[iVar0 /*446*/].f_23 = 0;
	__LIB_2__::func_772(11);
	__LIB_4__::func_932(101, 0);
	__LIB_1__::func_943(11, 4);
}

bool func_224(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	Var0.f_9 = -1591664384;
	iVar17 = 0;
	if (!__LIB_0__::func_446("ALL", &iVar14, &iVar15, iParam1, 0))
	{
		return false;
	}
	iVar16 = 0;
	while (iVar16 < iVar15)
	{
		if (__LIB_0__::func_236(&Var0, iVar16, iVar14, iVar15))
		{
			if (Var0.f_4 != 0)
			{
				if (__LIB_8__::func_127(Var0.f_4, iParam0))
				{
					iVar17 = 1;
				}
				else
				{
					iVar16++;
				}
				__LIB_0__::func_238(iVar14);
				return iVar17;
			}
		}
	}
}

void func_225(vector3 vParam0, float fParam3, vector3 vParam4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (__LIB_0__::func_51(&(fParam3->f_3), 1))
	{
		__LIB_4__::func_498(fParam3);
		if (__LIB_1__::func_378(vParam0, iParam8, 2.5f, fParam12, 1084227584 /* Float: 5f */))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_4__::func_97(vParam0, fParam3, iParam8))
	{
		if (__LIB_0__::func_51(&(fParam3->f_3), 128))
		{
			__LIB_3__::func_518(fParam3, vParam0, iParam7, iParam10);
		}
		CAM::SET_GAMEPLAY_COORD_HINT(vParam0 + vParam4, iParam9, iParam10, iParam11, 0);
		if (!__LIB_0__::func_51(&(fParam3->f_3), 128))
		{
			__LIB_3__::func_518(fParam3, vParam0, iParam7, iParam10);
		}
	}
}

bool func_226(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	if (__LIB_7__::func_924(iParam1, 32))
	{
		return false;
	}
	if (*bParam4)
	{
		return false;
	}
	if (PED::_0x5C16855277819BBF() >= *iParam0)
	{
		if (*iParam5 < *iParam0)
		{
			if (iParam0->f_15[*iParam5 /*32*/].f_1 != 0)
			{
				(*iParam2)[*iParam5] = __LIB_3__::func_403(iParam0->f_15[*iParam5 /*32*/].f_1, &(iParam0->f_15[*iParam5 /*32*/]), iParam0->f_15[*iParam5 /*32*/].f_6, iParam0->f_15[*iParam5 /*32*/].f_9, 1, 0, 1, 0, 1);
			}
			*iParam5++;
			*bParam4 = 1;
			return false;
		}
	}
	else
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_2)
	{
		if (iParam0->f_304[iVar0 /*32*/].f_1 != 0)
		{
			(*iParam3)[iVar0] = VEHICLE::CREATE_VEHICLE(iParam0->f_304[iVar0 /*32*/].f_1, iParam0->f_304[iVar0 /*32*/].f_6, iParam0->f_304[iVar0 /*32*/].f_9, true, true, false, false);
			(*iParam3)[0] = (*iParam3)[0];
		}
		iVar0++;
	}
	return true;
}

void func_227(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (__LIB_1__::func_750(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (__LIB_0__::func_91())
	{
		iVar1 = 0;
	}
	__LIB_3__::func_418(iParam0, iVar1);
}

void func_228()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		__LIB_6__::func_700();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_1__::func_825(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_1__::func_825(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_229(var uParam0)
{
	int iVar0;
	iVar0 = PED::_0x62DE46F061CAA468();
	if (uParam0->f_3 > iVar0)
	{
		uParam0->f_3 = iVar0;
	}
	PED::_0x7D4E70A67A651C71(uParam0->f_3);
	uParam0->f_3 = 0;
}

bool func_230()
{
	if (iLocal_98 != 3)
	{
		return false;
	}
	if (__LIB_7__::func_923(262144))
	{
		return false;
	}
	return false;
}

void func_231()
{
	int iVar0;
	bool bVar1;
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!__LIB_8__::func_140(iVar0))
		{
			bVar1 = false;
		}
		else
		{
			iVar0++;
		}
	}
	if (bVar1)
	{
		__LIB_7__::func_926(512);
	}
}

bool func_232()
{
	if (__LIB_7__::func_923(16))
	{
		return true;
	}
	switch (iLocal_98)
	{
		case 3:
			break;
	}
	return false;
}

bool func_233()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_8__::func_139(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_234(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	if ((iParam0 % iParam2) == 0)
	{
		iVar7 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
		iVar8 = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
		MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
		bVar4 = (__LIB_7__::func_893(iVar7) || __LIB_7__::func_945(iVar7));
		bVar5 = (__LIB_7__::func_893(iVar8) || __LIB_7__::func_945(iVar8));
		if (bVar4 && bVar5)
		{
			if (!__LIB_7__::func_924(iParam1, 256))
			{
				bVar6 = true;
			}
			__LIB_8__::func_131(iParam1, 256);
		}
		else if (bVar4)
		{
			if (__LIB_7__::func_946(iVar7) || __LIB_7__::func_947(iVar7))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= (1f - fVar3))
			{
				if (__LIB_7__::func_924(iParam1, 256))
				{
					bVar6 = true;
				}
				__LIB_8__::func_132(iParam1, 256);
			}
		}
		else if (bVar5)
		{
			if (__LIB_7__::func_946(iVar8) || __LIB_7__::func_947(iVar8))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= fVar3)
			{
				if (!__LIB_7__::func_924(iParam1, 256))
				{
					bVar6 = true;
				}
				__LIB_8__::func_131(iParam1, 256);
			}
		}
		else
		{
			if (__LIB_7__::func_924(iParam1, 256))
			{
				bVar6 = true;
			}
			__LIB_8__::func_132(iParam1, 256);
		}
		if (bVar6)
		{
		}
		return bVar6;
	}
	return false;
}

void func_235(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		__LIB_8__::func_131(iParam0, iParam1);
	}
	else
	{
		__LIB_8__::func_132(iParam0, iParam1);
	}
}

bool func_236(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam0->f_136 == 1)
	{
		__LIB_7__::func_949(&iVar1, &iVar2, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		__LIB_1__::func_902(iParam0->f_137, &iVar1, &iVar2, 1, 0);
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (!__LIB_0__::func_29(iVar0))
		{
		}
		else if (__LIB_0__::func_117(iVar0, 32))
		{
		}
		else
		{
			iVar3 = __LIB_2__::func_963(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
			}
			else if (!DECORATOR::DECOR_EXIST_ON(iVar3, "bPedAlreadyCounted"))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					if (__LIB_1__::func_333(iParam0, iVar3))
					{
						DECORATOR::DECOR_SET_BOOL(iVar3, "bPedAlreadyCounted", true);
						*uParam3++;
						if (!__LIB_7__::func_924(iParam0, 32768))
						{
							__LIB_8__::func_131(iParam0, 32768);
						}
					}
				}
				else if (!__LIB_7__::func_924(iParam0, 32768))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar3, Global_35, 1, 1))
					{
						__LIB_8__::func_131(iParam0, 32768);
					}
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam5) && !DECORATOR::DECOR_EXIST_ON(iParam5, "bPedAlreadyCounted"))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (__LIB_1__::func_333(iParam0, iParam5))
			{
				DECORATOR::DECOR_SET_BOOL(iParam5, "bPedAlreadyCounted", true);
				*uParam3++;
				if (!__LIB_7__::func_924(iParam0, 32768))
				{
					__LIB_8__::func_131(iParam0, 32768);
				}
			}
		}
		else if (!__LIB_7__::func_924(iParam0, 32768))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam5, Global_35, 1, 1))
			{
				__LIB_8__::func_131(iParam0, 32768);
			}
		}
	}
	iVar4 = 0;
	while (iVar4 < *iParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar4]) && !DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar4], "bPedAlreadyCounted"))
		{
			if (ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar4]))
			{
				if (__LIB_1__::func_333(iParam0, (*iParam1)[iVar4]))
				{
					DECORATOR::DECOR_SET_BOOL((*iParam1)[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!__LIB_7__::func_924(iParam0, 32768))
					{
						__LIB_8__::func_131(iParam0, 32768);
					}
				}
			}
			else if (!__LIB_7__::func_924(iParam0, 32768))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*iParam1)[iVar4], Global_35, 1, 1))
				{
					__LIB_8__::func_131(iParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < *iParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam2)[iVar4]) && !DECORATOR::DECOR_EXIST_ON((*iParam2)[iVar4], "bPedAlreadyCounted"))
		{
			if (ENTITY::IS_ENTITY_DEAD((*iParam2)[iVar4]))
			{
				if (__LIB_1__::func_333(iParam0, (*iParam2)[iVar4]))
				{
					DECORATOR::DECOR_SET_BOOL((*iParam2)[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!__LIB_7__::func_924(iParam0, 32768))
					{
						__LIB_8__::func_131(iParam0, 32768);
					}
				}
			}
			else if (!__LIB_7__::func_924(iParam0, 32768))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*iParam2)[iVar4], Global_35, 1, 1))
				{
					__LIB_8__::func_131(iParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	if (*uParam3 >= iParam4)
	{
		return true;
	}
	return false;
}

void func_237(int iParam0)
{
	__LIB_8__::func_174(iParam0);
	if (__LIB_7__::func_923(64))
	{
		iParam0->f_15[1 /*32*/].f_6 = { -1403.043f, -243.4083f, 99.37144f };
		iParam0->f_15[1 /*32*/].f_9 = 214.3414f;
		iParam0->f_15[1 /*32*/].f_1 = __LIB_7__::func_981();
	}
	Local_15[1 /*28*/].f_4 = { -1377.5f, -200.4f, 102.6f };
	Local_15[1 /*28*/].f_10 = 77.9f;
	if (__LIB_7__::func_923(65536))
	{
		Local_15[1 /*28*/].f_11 = joaat("LOGWAGON");
		iLocal_14 += 2;
	}
	Local_15[1 /*28*/] = { -1400.617f, -124.2774f, 96.3551f };
	Local_15[1 /*28*/].f_3 = 89f;
	Local_15[1 /*28*/].f_23 = 1;
	Local_15[1 /*28*/].f_25 = 1;
	if (__LIB_7__::func_923(65536))
	{
		Local_15[1 /*28*/].f_12 = "LOG_WAGON02C";
	}
	if (__LIB_7__::func_923(32768))
	{
		Local_15[0 /*28*/].f_12 = "LOG_WAGON01B";
	}
	Local_15[0 /*28*/] = { -1373.148f, -219.672f, 99.51241f };
	iParam0->f_15[5 /*32*/].f_6 = { -1376f, -197.6f, 102.1f };
	iParam0->f_15[5 /*32*/].f_9 = 55.8f;
	if (__LIB_7__::func_923(65536))
	{
		*iParam0++;
		iParam0->f_15[5 /*32*/].f_1 = __LIB_7__::func_981();
	}
	else
	{
		iParam0->f_15[5 /*32*/].f_1 = 0;
	}
}

int func_238(int iParam0)
{
	float fVar0;
	int iVar1;
	fVar0 = __LIB_3__::func_332(__LIB_8__::func_143(iParam0), 1);
	if (fVar0 <= 15f)
	{
		return 255;
	}
	iVar1 = BUILTIN::CEIL(((-4.25f * (fVar0 - 15f)) + 255f));
	return iVar1;
}

void func_239(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		__LIB_7__::func_932(-2147483648);
		__LIB_8__::func_168(134217728, bParam1);
	}
	else
	{
		__LIB_7__::func_928(-2147483648);
		__LIB_8__::func_168(134217728, bParam1);
	}
}

void func_240(var uParam0, bool bParam1, bool bParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (__LIB_8__::func_58(uParam0, &(uParam0->f_1)))
	{
		__LIB_8__::func_191(uParam0, &(uParam0->f_1), bParam2);
		if (bParam1)
		{
			__LIB_8__::func_192(uParam0, &(uParam0->f_4));
		}
	}
}

bool func_241(int iParam0, int iParam1)
{
	if (__LIB_8__::func_139(iParam0))
	{
		return false;
	}
	if (!__LIB_2__::func_1(*iParam1, 0, 1))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(*iParam1, "bChopDown"))
	{
		return false;
	}
	return true;
}

bool func_242(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	if (Global_40.f_9096[iParam0 /*12*/].f_10 < 0)
	{
		return false;
	}
	if (__LIB_7__::func_907(iParam0, 4194304))
	{
		return false;
	}
	__LIB_8__::func_173(iParam0, &iVar0, &iVar1, &uVar2, &uVar3);
	if (iVar0 < 2 || iVar1 < 23)
	{
		return false;
	}
	return true;
}

void func_243()
{
	int iVar0;
	struct<21> Var1;
	char* sVar30;
	int iVar31;
	if (!__LIB_7__::func_933(268435456))
	{
		if (__LIB_7__::func_933(134217728) || (MISC::GET_FRAME_COUNT() % 9) == 0)
		{
			__LIB_7__::func_934(134217728);
			iVar0 = (MISC::GET_FRAME_COUNT() % 9);
			Var1.f_3 = 3;
			Var1.f_4 = 30;
			Var1.f_5 = -1;
			Var1.f_9 = 3;
			Var1.f_15 = -1;
			Var1.f_16 = -1;
			Var1.f_20 = 2;
			Var1.f_16 = iVar0;
			iVar31 = 0;
			while (iVar31 < 2)
			{
				sVar30 = __LIB_8__::func_182(&Var1, iVar31);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar30))
				{
					AUDIO::_0xEF51242E35242B47(sVar30);
				}
				iVar31++;
			}
			if (iVar0 == 8)
			{
				__LIB_7__::func_934(268435456);
			}
		}
	}
}

void func_244(int iParam0, int iParam1)
{
	Global_40.f_9096[iParam0 /*12*/].f_9 = Global_40.f_9096[iParam0 /*12*/];
	Global_40.f_9096[iParam0 /*12*/].f_10 = Global_40.f_9096[iParam0 /*12*/].f_3;
	__LIB_8__::func_184(iParam0, iParam1, 0, 0, 0, 1);
	__LIB_8__::func_82(iParam0, 32768);
	__LIB_8__::func_83(iParam0, 16777216);
	__LIB_8__::func_93(iParam0, 4194304);
}

void func_245(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, __LIB_7__::func_991(iParam0), iParam1, sParam2, bParam3, false, false);
	if (bParam4)
	{
		__LIB_8__::func_103(__LIB_7__::func_998(iParam0), sParam2, __LIB_7__::func_995(), __LIB_7__::func_994(iParam0), joaat("PLAYER_MENU"), 0, -1, -2, 0, 0, 0, 0, 1, 1, 0);
	}
}

int func_246(int iParam0, bool bParam1)
{
	return __LIB_8__::func_193(iParam0, Global_1894899.f_2, bParam1);
}

void func_247()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_7__::func_929(8388608) && VOLUME::_DOES_VOLUME_EXIST(iLocal_75[4]))
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(false);
		ITEMSET::_CLEAR_ITEMSET(iVar0);
		iVar1 = ENTITY::_0x886171A12F400B89(iLocal_75[4], iVar0, 2);
		if (iVar1 > 0)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return;
		}
		ITEMSET::_CLEAR_ITEMSET(iVar0);
		iVar1 = ENTITY::_0x886171A12F400B89(iLocal_75[4], iVar0, 1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
			if (__LIB_0__::func_125(iVar3))
			{
				ITEMSET::DESTROY_ITEMSET(iVar0);
				return;
			}
			iVar2++;
		}
		__LIB_7__::func_932(8388608);
		__LIB_8__::func_208();
		ITEMSET::DESTROY_ITEMSET(iVar0);
	}
}

void func_248(int iParam0, int iParam1)
{
	int iVar0;
	__LIB_8__::func_201(iParam0);
	iVar0 = __LIB_8__::func_75(iParam0, iParam1);
	if (iVar0 != 0 && !MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar0))
	{
		MAP::_0xD8C7162AB2E2AF45(iVar0);
	}
}

int func_249(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				__LIB_2__::func_575(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_250(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (iParam2 == Global_1945938[iVar0 /*18*/].f_10 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		__LIB_2__::func_575(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, bParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_251(int iParam0)
{
	__LIB_4__::func_64(iParam0);
	__LIB_8__::func_175(iParam0, 10f, 1);
	__LIB_3__::func_386(iParam0, 1);
	__LIB_4__::func_202(iParam0, 1);
	__LIB_7__::func_909(iParam0, 1);
	__LIB_3__::func_393(iParam0, 1);
	__LIB_2__::func_181(iParam0, 0);
	__LIB_4__::func_203(iParam0, 0);
	__LIB_3__::func_392(iParam0, 1);
	__LIB_3__::func_230(iParam0, 1);
	__LIB_3__::func_385(iParam0, 1);
	__LIB_2__::func_180(iParam0, 1);
	__LIB_2__::func_715(iParam0, 1);
	__LIB_3__::func_232(iParam0, 1);
	__LIB_7__::func_895(iParam0, 1.25f);
	__LIB_3__::func_620(iParam0, 1);
	__LIB_2__::func_182(iParam0, 1);
	__LIB_3__::func_387(iParam0, 1);
	__LIB_8__::func_92(iParam0, 1);
}

void func_252()
{
	if (__LIB_7__::func_929(8388608))
	{
		if (__LIB_7__::func_897(1024))
		{
			__LIB_8__::func_208();
		}
		else
		{
			__LIB_8__::func_209();
		}
	}
}

void func_253(int iParam0)
{
	if (!__LIB_0__::func_625(iParam0->f_136))
	{
		return;
	}
	__LIB_8__::func_85(iParam0->f_136, 128);
	__LIB_8__::func_82(iParam0->f_136, 65536);
	__LIB_8__::func_131(iParam0, 128);
	__LIB_0__::func_747(30, 0, 1);
}

bool func_254(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!__LIB_0__::func_75(&(uParam1->f_133)))
	{
		__LIB_1__::func_148(&(uParam1->f_133));
	}
	else if (__LIB_1__::func_871(&(uParam1->f_133)) > iParam2)
	{
		__LIB_0__::func_37(&(uParam1->f_133));
		if (__LIB_2__::func_763(iParam0, 0))
		{
			__LIB_8__::func_124(iParam0, bParam3);
			return true;
		}
	}
	return false;
}

void func_255(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iParam3->f_136 = uParam0;
	iParam3->f_137 = iParam1;
	__LIB_8__::func_131(iParam3, 128);
	__LIB_1__::func_956(iParam1, 1);
	if (bParam5)
	{
		__LIB_4__::func_858(Global_1392194[iParam3->f_136 /*10*/].f_5, 0, 0, 0);
	}
	if (bParam4)
	{
		__LIB_3__::func_378(Global_1392194[iParam3->f_136 /*10*/].f_6, 0);
		__LIB_7__::func_948(Global_1392194[iParam3->f_136 /*10*/].f_6, 0, 0, 1, 1, 0);
	}
	bVar0 = false;
	if (iParam1 == 76)
	{
		__LIB_7__::func_949(&iVar1, &iVar2, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		__LIB_1__::func_902(iParam1, &iVar1, &iVar2, 0, 0);
	}
	iVar3 = iVar1;
	while (iVar3 <= iVar2)
	{
		if (__LIB_0__::func_29(iVar3) && !__LIB_0__::func_117(iVar3, 32))
		{
			if (!bVar0)
			{
				bVar0 = true;
			}
			__LIB_4__::func_193(iVar3);
		}
		iVar3++;
	}
	if (bVar0)
	{
		__LIB_2__::func_750(iParam1, iVar1, iVar2, 1);
	}
	if (!__LIB_7__::func_924(iParam3, 32))
	{
		PERSCHAR::_0xB173599D61FAEB31();
	}
}

bool func_256(int iParam0, var uParam1, int iParam2, bool bParam3, float fParam4, bool bParam5, float fParam6, bool bParam7, float fParam8, float fParam9)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (__LIB_0__::func_232(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam8 * fParam8))
	{
		*iParam2 = 0f;
		return true;
	}
	if (fParam6 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > fParam6)
		{
			return false;
		}
	}
	if (__LIB_3__::func_893(iParam0, bParam5))
	{
		if (__LIB_8__::func_219(vVar0, iParam0, uParam1, iParam2, bParam3, fParam4, bParam5, bParam7, fParam9))
		{
			return true;
		}
	}
	else if (!bParam7)
	{
		*iParam2 = 0f;
	}
	return false;
}

bool func_257(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (__LIB_7__::func_929(-2147483648))
	{
		return false;
	}
	if (__LIB_0__::func_481(1))
	{
		return false;
	}
	if (!__LIB_2__::func_227(-3.5f, 1, *iParam0, 1))
	{
		return false;
	}
	return true;
}

void func_258()
{
	if (__LIB_7__::func_929(32))
	{
		__LIB_8__::func_223(0);
		__LIB_1__::func_943(11, 128);
		__LIB_7__::func_928(32);
	}
}

bool func_259(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_198(iParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, iParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_8__::func_189(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_260()
{
	__LIB_7__::func_919();
	if (iLocal_98 < 4 && !__LIB_7__::func_923(256))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1498945676, true);
	}
	switch (iLocal_98)
	{
		case 1:
			if (!__LIB_7__::func_924(&Local_1529, 32))
			{
				if (!__LIB_7__::func_924(&Local_1529, 2))
				{
					iLocal_200 = 1480157862;
					iLocal_201 = -1619191432;
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1173617900, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1480157862, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(638507460, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(529482239, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2061234582, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1619191432, true);
					if (__LIB_7__::func_923(262144))
					{
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1428772759, true);
					}
				}
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1033154098, true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2146274232, true);
			break;
		case 2:
			if (!__LIB_7__::func_924(&Local_1529, 32))
			{
				if (!__LIB_7__::func_924(&Local_1529, 2))
				{
					iLocal_200 = 1254150069;
					iLocal_201 = 378017637;
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1173617900, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1254150069, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1991616213, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1368197280, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-614511582, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(515502019, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1668640329, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(378017637, true);
				}
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-92203186, true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1850986699, true);
			break;
		case 3:
			if (!__LIB_7__::func_924(&Local_1529, 32))
			{
				if (!__LIB_7__::func_924(&Local_1529, 2))
				{
					if (__LIB_7__::func_923(262144))
					{
						iLocal_200 = 874422897;
						iLocal_201 = 1663347996;
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1173617900, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(874422897, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1991616213, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-419045977, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(515502019, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-508527824, true);
					}
					else
					{
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2077381882, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-681889807, true);
						iLocal_200 = 2077381882;
						iLocal_201 = 1663347996;
					}
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(223107846, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1368197280, true);
				}
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-595414142, true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-465906603, true);
			break;
		case 4:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1712141152, true);
			break;
		case 5:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1887892244, true);
			break;
	}
	TASK::_0x9C8F42A5D1859DC1(Global_1392194[Local_1529.f_136 /*10*/].f_5);
}

void func_261()
{
	if (__LIB_7__::func_924(&Local_1529, 32))
	{
		iLocal_75[0] = VOLUME::_CREATE_VOLUME_BOX(-1398.447f, -246.3103f, 99.12786f, 0f, 0f, 0f, 5.212102f, 3.640974f, 2.867354f);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_75[0], 2304, 0, 0, -1, -1, 0);
	}
	else if (iLocal_98 == 2 || iLocal_98 == 3)
	{
		iLocal_75[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Appleseed - volHorseCorral");
		VOLUME::_0x39816F6F94F385AD(iLocal_75[5], -1421.619f, -210.3775f, 102.9679f, 0f, 0f, -5.245227f, 18.54972f, 14.82578f, 5.569002f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_75[5], -1412.1f, -211.0359f, 103.0456f, 0f, 0f, -4.751498f, 3.586998f, 6.617523f, 2.783914f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_75[5], -1430.657f, -209.2033f, 103.0456f, 0f, 0f, -4.751498f, 3.586998f, 7.686718f, 2.783914f);
		iLocal_75[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1416.509f, -217.112f, 102.5954f, 0f, 0f, 0f, 7.971181f, 2.465843f, 4.154411f, "Appleseed - volCorralDoors");
		POPULATION::_0xB56D41A694E42E86(iLocal_75[11], 256, 0, joaat("SPECIES_HORSE"), -1, -1, 2);
	}
}

void func_262()
{
	int iVar0;
	if (__LIB_7__::func_939(512))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::_0x1FF441D7954F8709(uLocal_396[iVar0]))
		{
			ENTITY::_0xD2B9C78537ED5759(uLocal_396[iVar0]);
		}
		iVar0++;
	}
}

bool func_263()
{
	return (iLocal_517 == 0 || iLocal_517 == 1);
}

void func_264(var uParam0, int iParam1)
{
	if ((iLocal_203 % 5) != 0)
	{
		return;
	}
}

bool func_265(int iParam0)
{
	return __LIB_0__::func_27(Global_40.f_9096[Local_1529.f_136 /*12*/].f_6, __LIB_0__::func_771(iParam0));
}

void func_266()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[5 /*12*/].f_8))
	{
		if (!ENTITY::_IS_ENTITY_FROZEN(Local_526.f_690[5 /*12*/].f_8))
		{
			if (!__LIB_7__::func_929(65536))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_526.f_690[5 /*12*/].f_8, true);
			}
		}
		else if (__LIB_7__::func_929(65536))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_526.f_690[5 /*12*/].f_8, false);
			PHYSICS::ACTIVATE_PHYSICS(Local_526.f_690[5 /*12*/].f_8);
		}
	}
}

int func_267()
{
	switch (iLocal_517)
	{
		case 2:
		case 3:
			return joaat("EAFOR_A_L");
		case 0:
			return joaat("EAFOR_GOOD_TO_SEE");
		case 1:
			return joaat("EAFOR_MORE_TIME");
	}
	return 0;
}

char* func_268()
{
	switch (iLocal_517)
	{
		case 2:
		case 3:
			return "EAFOR_A_L";
		case 0:
			return "EAFOR_GOOD_TO_SEE";
		case 1:
			return "EAFOR_MORE_TIME";
	}
	return "";
}

char* func_269(bool bParam0)
{
	if (iLocal_517 == 2)
	{
		if (bParam0)
		{
			return "action_02_fm";
		}
		else
		{
			return "action_01b_fm";
		}
	}
	else if (iLocal_517 == 3)
	{
		return "clockwork_fm";
	}
	return "";
}

bool func_270(int iParam0)
{
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_390[iParam0]))
	{
		return false;
	}
	return OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_390[iParam0]) == 5;
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		iVar0 = *iParam0;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		iVar0 = *iParam1;
	}
	else
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -137640087))
	{
		iLocal_409[iParam2] = 0;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1300850144))
	{
		iLocal_409[iParam2] = 1;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1011860333))
	{
		iLocal_409[iParam2] = 2;
	}
	else
	{
		iLocal_409[iParam2] = -1;
	}
}

void func_272(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_1__::func_484(Local_251[iParam0 /*52*/][iParam1 /*17*/].f_6, sParam2, 0);
	Local_251[iParam0 /*52*/][iParam1 /*17*/].f_5 = sParam2;
}

bool func_273()
{
	if (((__LIB_7__::func_907(Local_1529.f_136, 524288) || __LIB_7__::func_907(Local_1529.f_136, 2097152)) || __LIB_7__::func_907(Local_1529.f_136, 1048576)) || iLocal_98 > 3)
	{
		return true;
	}
	return false;
}

bool func_274()
{
	if (iLocal_98 == 1 && !__LIB_7__::func_908(Local_1529.f_136, 1024))
	{
		return true;
	}
	return false;
}

bool func_275()
{
	if (__LIB_7__::func_923(16))
	{
		return true;
	}
	switch (iLocal_98)
	{
		case 3:
			if (__LIB_7__::func_908(Local_1529.f_136, 256) && !__LIB_7__::func_907(Local_1529.f_136, 128))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_276()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	if (__LIB_7__::func_924(&Local_1529, 256))
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers_Shelter";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman_Shelter";
	}
	else if (iLocal_98 == 3 && !__LIB_7__::func_923(262144))
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers_Stalled";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman";
	}
	else
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman";
	}
	iVar2 = 810;
	while (iVar2 <= 833)
	{
		if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iVar2)) && !MISC::ARE_STRINGS_EQUAL(PERSCHAR::_0xCEB40B678E403759(__LIB_0__::func_118(iVar2)), sVar0))
		{
			PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(iVar2), sVar0);
			iVar3 = __LIB_2__::func_963(iVar2);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar3) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar3, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar3))
			{
				TASK::TASK_PERSISTENT_CHARACTER(iVar3);
			}
		}
		iVar2++;
	}
	iVar2 = Local_1529.f_138;
	if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iVar2)) && !MISC::ARE_STRINGS_EQUAL(PERSCHAR::_0xCEB40B678E403759(__LIB_0__::func_118(iVar2)), sVar0))
	{
		PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(iVar2), sVar1);
	}
}

void func_277(int iParam0, int iParam1, int* iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = -89429847;
	if (iParam5 == 0 || iParam5 == Global_35)
	{
		iParam5 = Global_35;
		iVar0 = joaat("BLIP_STYLE_ENEMY");
	}
	bParam3 = (bParam3 || __LIB_7__::func_924(iParam0, 4096));
	if (WEAPON::_0xCB690F680A3EA971(iParam1, 4))
	{
		bParam3 = false;
	}
	__LIB_3__::func_608(iParam1);
	__LIB_0__::func_325(iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		PED::_0xFC3DB99C8144CD81(iParam1, Global_1392194[iParam0->f_136 /*10*/].f_5, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(iParam1, 146, false);
		PED::SET_PED_CONFIG_FLAG(iParam1, 246, true);
		PED::SET_PED_CONFIG_FLAG(iParam1, 178, true);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, true);
		if (bParam3)
		{
			PED::_0xEEED8FAFEC331A70(iParam1, ENTITY::GET_ENTITY_COORDS(iParam5, true, false), 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, joaat("REL_PLAYER_DISLIKE"));
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, iParam5, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam1, iVar1, 0.1f, 0.75f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			PED::SET_PED_KEEP_TASK(iParam1, true);
		}
		else
		{
			if (iParam5 == Global_35)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, joaat("REL_PLAYER_ENEMY"));
			}
			PED::_0x802092B07E3B1EEA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam5, true, false), 3);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 71, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 31, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, true);
			__LIB_2__::func_73(iParam1, iParam2, iVar0, 580546400, 0, 0);
			if (__LIB_7__::func_966(iParam1))
			{
				iParam4 = __LIB_7__::func_967(iParam1);
			}
			if (PED::IS_PED_HUMAN(iParam1))
			{
				bVar2 = __LIB_0__::func_153(iParam1, 0, 1, 0) != iParam4;
				if (bVar2)
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam1, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			if (__LIB_0__::func_154(iParam4))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iParam4, true, 0, false, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (PED::IS_PED_HUMAN(iParam1))
			{
				if (__LIB_0__::func_154(iParam4))
				{
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				}
				if (!PED::IS_PED_USING_ANY_SCENARIO(iParam1) && bVar2)
				{
					TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, __LIB_7__::func_968(), 0.5f, 0, 4);
				}
				if (!bVar2 && PED::GET_PED_CONFIG_FLAG(iParam1, 12, true))
				{
					TASK::_0x2416EC2F31F75266(0, iParam5, 0, 0, 0);
				}
			}
			TASK::TASK_COMBAT_PED(0, iParam5, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam1, iVar1, 0.1f, 0.75f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
	}
}

void func_278()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_202)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(Local_1529.f_140[iVar0]) && !__LIB_0__::func_163(Local_1529.f_140[iVar0], 518218985)) && !TASK::GET_IS_TASK_ACTIVE(Local_1529.f_140[iVar0], 3))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_1529.f_140[iVar0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		iVar0++;
	}
}

bool func_279()
{
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_412[2 /*7*/]) || __LIB_7__::func_972(&(Local_412[2 /*7*/]))) || __LIB_7__::func_973(&(Local_412[2 /*7*/]), "COWER_R_LOOP")) || __LIB_7__::func_973(&(Local_412[2 /*7*/]), "COWER_L_LOOP"))
	{
		return true;
	}
	return false;
}

bool func_280()
{
	float fVar0;
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_390[0]))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(Local_526.f_690[24 /*12*/].f_8))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_526.f_690[24 /*12*/].f_8, true);
		}
		if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_526.f_690[24 /*12*/].f_8))
		{
			ENTITY::SET_ENTITY_COLLISION(Local_526.f_690[24 /*12*/].f_8, true, false);
		}
		return false;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(Local_526.f_690[24 /*12*/].f_8))
	{
		fVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_390[0]);
		if (fVar0 > 0.9625f || OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_390[0]) == 10)
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_526.f_690[24 /*12*/].f_8, true);
			ENTITY::SET_ENTITY_COLLISION(Local_526.f_690[24 /*12*/].f_8, true, false);
			__LIB_0__::func_401(991016631);
		}
	}
	else if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_526.f_690[24 /*12*/].f_8))
	{
		fVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(iLocal_390[0]);
		if (fVar0 > 0.997f)
		{
			ENTITY::SET_ENTITY_COLLISION(Local_526.f_690[24 /*12*/].f_8, true, false);
			__LIB_0__::func_400(joaat("DES_TREEFALL_ACCIDENT"));
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_281()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = __LIB_1__::func_985();
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (iVar1 == 0 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.75f)
	{
		iVar1 = 1;
	}
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_1529.f_136, 4))
	{
		bVar0 = false;
		iVar1 = 2;
	}
	if (bVar0)
	{
		iVar2 = 1;
	}
	iVar3 = iVar2;
	while (iVar3 <= 3)
	{
		if (iVar4 >= iVar1)
		{
			return;
		}
		iVar4++;
		__LIB_1__::func_336(&iLocal_524, __LIB_0__::func_771(iVar3));
		iVar3 += 2;
	}
}

void func_282(bool bParam0)
{
	PED::SET_PED_RESET_FLAG(Global_35, 5, !bParam0);
	__LIB_3__::func_386(&Local_1529, bParam0);
	__LIB_3__::func_393(&Local_1529, bParam0);
}

bool func_283()
{
	if (!__LIB_3__::func_316(&(Local_526.f_690)))
	{
		return false;
	}
	return true;
}

bool func_284()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_412[iVar1 /*7*/]))
		{
			if (!__LIB_7__::func_990(&(Local_412[iVar1 /*7*/])))
			{
				iVar0 = 0;
			}
			else
			{
				iVar1++;
			}
			return iVar0;
		}
	}
}

int func_285()
{
	if (__LIB_2__::func_117(64))
	{
		return iLocal_200;
	}
	return iLocal_201;
}

bool func_286()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_7__::func_963(&(Local_412[6 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(6))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(6, iVar0, 0));
			if (iVar1 == Local_1529.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (__LIB_7__::func_963(&(Local_412[3 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(3))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(3, iVar0, 0));
			if (iVar1 == Local_1529.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (__LIB_7__::func_963(&(Local_412[7 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(7))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(7, iVar0, 0));
			if (iVar1 == Local_1529.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	if (__LIB_7__::func_963(&(Local_412[8 /*7*/])))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_8__::func_4(8))
		{
			iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(8, iVar0, 0));
			if (iVar1 == Local_1529.f_10)
			{
				return true;
			}
			iVar0++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar3 = (9 + iVar2);
		if (__LIB_7__::func_963(&(Local_412[iVar3 /*7*/])))
		{
			iVar4 = iVar2 * 2;
			iVar0 = 0;
			while (iVar0 < __LIB_8__::func_4(9))
			{
				iVar1 = __LIB_2__::func_963(__LIB_7__::func_964(9, iVar0, iVar4));
				if (iVar1 == Local_1529.f_10)
				{
					return true;
				}
				iVar0++;
			}
		}
		iVar2++;
	}
	return false;
}

void func_287(int iParam0)
{
	if (iLocal_202 < 10)
	{
		if (!__LIB_1__::func_248(*iParam0, &(Local_1529.f_140)))
		{
			Local_1529.f_140[iLocal_202] = *iParam0;
			iLocal_202++;
		}
	}
}

void func_288()
{
	if (!__LIB_7__::func_907(Local_1529.f_136, 4))
	{
		if (__LIB_7__::func_929(65536))
		{
			__LIB_8__::func_85(Local_1529.f_136, 4);
		}
	}
}

void func_289(int iParam0)
{
	__LIB_1__::func_336(&(Global_40.f_9096[Local_1529.f_136 /*12*/].f_6), __LIB_0__::func_771(iParam0));
}

void func_290()
{
	__LIB_8__::func_234(5, &Local_1529, 5);
	if (__LIB_7__::func_923(64))
	{
		iLocal_517 = 2;
	}
	else if (__LIB_7__::func_924(&Local_1529, 256))
	{
		iLocal_517 = 2;
	}
	else if (__LIB_1__::func_985())
	{
		iLocal_517 = 0;
	}
	else
	{
		iLocal_517 = 2;
	}
}

bool func_291()
{
	if (__LIB_7__::func_923(32))
	{
		return true;
	}
	if (__LIB_7__::func_908(1, 2))
	{
		return true;
	}
	if (!__LIB_7__::func_923(262144))
	{
		return true;
	}
	if (__LIB_7__::func_923(4096))
	{
		return true;
	}
	if (__LIB_2__::func_763(Local_1529.f_138, 0))
	{
		return true;
	}
	return false;
}

void func_292(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam1, -137640087))
	{
		iVar0 = 0;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam1, -1300850144))
	{
		iVar0 = 1;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam1, -1011860333))
	{
		iVar0 = 2;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar1 == iVar0)
		{
			if (!__LIB_8__::func_58(&(Local_412[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2)) && !__LIB_8__::func_60(&(Local_412[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2)))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					__LIB_8__::func_26(&(Local_412[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2));
					iVar2++;
				}
			}
		}
		else if (__LIB_8__::func_58(&(Local_412[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2)))
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				__LIB_8__::func_61(&(Local_412[(9 + iParam0) /*7*/]), __LIB_8__::func_11(iVar1, iVar2));
				iVar2++;
			}
		}
		iVar1++;
	}
}

int func_293(int iParam0)
{
	if ((!__LIB_7__::func_923(64) && __LIB_7__::func_907(Local_1529.f_136, 536870912)) && iParam0 == __LIB_7__::func_920())
	{
		iParam0 = 4;
	}
	else if ((iLocal_98 == 1 && iParam0 == 1) && __LIB_7__::func_923(262144))
	{
		iParam0 = 4;
	}
	return iParam0;
}

int func_294(int iParam0)
{
	if (!__LIB_7__::func_933(4096))
	{
		__LIB_8__::func_159(4096, STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_7__::func_956(), 15, __LIB_2__::func_929(Local_1529.f_138), __LIB_8__::func_73()));
	}
	return 1;
}

bool func_295(int iParam0, bool bParam1)
{
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_390[iParam0]))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	if (__LIB_7__::func_923(64))
	{
		return true;
	}
	if (!__LIB_0__::func_75(&(vLocal_490[0 /*3*/])))
	{
		return false;
	}
	if (__LIB_1__::func_871(&(vLocal_490[0 /*3*/])) <= 5000)
	{
		return false;
	}
	return true;
}

bool func_296()
{
	float fVar0;
	if (!__LIB_2__::func_117(64))
	{
		return false;
	}
	if (__LIB_7__::func_923(1048576))
	{
		return false;
	}
	if (!__LIB_7__::func_908(Local_1529.f_136, 512))
	{
		if (iLocal_98 == 2 && !__LIB_7__::func_907(Local_1529.f_136, 64))
		{
			if (__LIB_7__::func_907(Local_1529.f_136, 128))
			{
				return true;
			}
			else
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				if (fVar0 < 1f)
				{
					return true;
				}
			}
		}
		if (iLocal_98 == 1 && __LIB_7__::func_907(Local_1529.f_136, 128))
		{
			return true;
		}
	}
	return false;
}

bool func_297()
{
	if (iLocal_524 <= 0)
	{
		return false;
	}
	if (iLocal_98 == 1 && !__LIB_7__::func_907(Local_1529.f_136, 4))
	{
		return true;
	}
	if (!__LIB_2__::func_117(64))
	{
		return false;
	}
	if (iLocal_98 > 3 || (iLocal_98 == 3 && !__LIB_7__::func_907(Local_1529.f_136, 128)))
	{
		return false;
	}
	return true;
}

void func_298()
{
	__LIB_8__::func_168(65536, __LIB_1__::func_205(Global_35, Global_1392194[Local_1529.f_136 /*10*/].f_6, 1, 0));
}

bool func_299()
{
	if (!__LIB_3__::func_366(&(Local_526.f_15)) || !__LIB_3__::func_366(&(Local_526.f_369)))
	{
		return false;
	}
	if (!__LIB_3__::func_366(&(Local_526.f_304)))
	{
		return false;
	}
	return true;
}

void func_300(int iParam0, bool bParam1)
{
	__LIB_8__::func_174(iParam0);
	__LIB_8__::func_237(iParam0);
	if (__LIB_7__::func_907(0, 128))
	{
		if (__LIB_7__::func_923(65536))
		{
			Local_15[1 /*28*/].f_12 = "LOG_WAGON02C";
		}
		if (__LIB_7__::func_923(32768))
		{
			Local_15[0 /*28*/].f_12 = "LOG_WAGON01C";
		}
	}
	else
	{
		iParam0->f_15[0 /*32*/].f_6 = { -1389.931f, -265.0812f, 98.29932f };
		iParam0->f_15[0 /*32*/].f_9 = -161.23f;
		iParam0->f_15[0 /*32*/].f_1 = __LIB_7__::func_981();
		iParam0->f_15[1 /*32*/].f_6 = { -1431.474f, -269.5809f, 102.2202f };
		iParam0->f_15[1 /*32*/].f_9 = -148.66f;
		iParam0->f_15[1 /*32*/].f_1 = __LIB_7__::func_981();
		if (!bParam1)
		{
			iParam0->f_15[2 /*32*/].f_6 = { -1444.14f, -359.7078f, 114.5595f };
			iParam0->f_15[2 /*32*/].f_9 = 49.7f;
			iParam0->f_15[2 /*32*/].f_21 = 1;
			iParam0->f_15[2 /*32*/].f_1 = __LIB_7__::func_981();
			iParam0->f_15[2 /*32*/].f_3 = -1149853461;
			__LIB_8__::func_98(&(iParam0->f_15[2 /*32*/].f_22));
			__LIB_8__::func_99(&(iParam0->f_15[2 /*32*/].f_22));
			__LIB_8__::func_100(&(iParam0->f_15[2 /*32*/].f_22));
			__LIB_8__::func_101(&(iParam0->f_15[2 /*32*/].f_22));
			__LIB_8__::func_102(&(iParam0->f_15[2 /*32*/].f_22));
			iParam0->f_15[3 /*32*/].f_6 = { -1444.485f, -357.8756f, 114.8794f };
			iParam0->f_15[3 /*32*/].f_9 = -145.8f;
			iParam0->f_15[3 /*32*/].f_21 = 1;
			iParam0->f_15[3 /*32*/].f_1 = __LIB_7__::func_981();
			iParam0->f_15[3 /*32*/].f_3 = 307318431;
			__LIB_8__::func_98(&(iParam0->f_15[3 /*32*/].f_22));
			__LIB_8__::func_99(&(iParam0->f_15[3 /*32*/].f_22));
			__LIB_8__::func_100(&(iParam0->f_15[3 /*32*/].f_22));
			__LIB_8__::func_101(&(iParam0->f_15[3 /*32*/].f_22));
			__LIB_8__::func_102(&(iParam0->f_15[3 /*32*/].f_22));
		}
		else
		{
			iParam0->f_15[2 /*32*/].f_1 = 0;
			iParam0->f_15[2 /*32*/].f_6 = { -1444.14f, -359.7078f, 114.5595f };
			iParam0->f_15[3 /*32*/].f_1 = 0;
			iParam0->f_15[3 /*32*/].f_6 = { -1444.485f, -357.8756f, 114.8794f };
		}
		iParam0->f_369[0 /*32*/].f_6 = { -1468.629f, -379.8213f, 125.2618f };
		iParam0->f_369[0 /*32*/].f_9 = -45.42f;
		iParam0->f_369[0 /*32*/].f_1 = joaat("A_C_WOLF");
		iParam0->f_369[1 /*32*/].f_6 = { -1459.213f, -380.2958f, 122.0884f };
		iParam0->f_369[1 /*32*/].f_9 = -6.39f;
		iParam0->f_369[1 /*32*/].f_1 = joaat("A_C_WOLF");
		iParam0->f_369[2 /*32*/].f_6 = { -1449.054f, -341.1028f, 118.9559f };
		iParam0->f_369[2 /*32*/].f_9 = -124.44f;
		iParam0->f_369[2 /*32*/].f_1 = joaat("A_C_WOLF");
		*iParam0 = 4;
		iParam0->f_1 = 3;
		Local_15[1 /*28*/].f_11 = 0;
		Local_15[0 /*28*/].f_11 = 0;
		iParam0->f_15[5 /*32*/].f_1 = 0;
		iParam0->f_15[4 /*32*/].f_1 = 0;
	}
}

void func_301()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_7__::func_910(__LIB_8__::func_143(iVar0), 0);
		iLocal_390[iVar0] = 0;
		iVar0++;
	}
}

void func_302()
{
	if (ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1529.f_138)))
	{
		return;
	}
	if (!__LIB_7__::func_963(&(Local_412[0 /*7*/])))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(__LIB_2__::func_963(Local_1529.f_138), joaat("STANDING")))
	{
		return;
	}
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(Local_1529.f_138), Local_526.f_690[25 /*12*/].f_8, false);
	__LIB_8__::func_191(&(Local_412[0 /*7*/]), "PBL_FOREMAN_STAGE2_COMBAT", 1);
	__LIB_8__::func_192(&(Local_412[0 /*7*/]), "bBreakInternalLoop");
	__LIB_7__::func_922(1024);
}

void func_303()
{
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1529.f_138)) && __LIB_7__::func_963(&(Local_412[1 /*7*/])))
	{
		if (!ENTITY::HAS_ANIM_EVENT_FIRED(__LIB_2__::func_963(Local_1529.f_138), joaat("STANDING")))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(Local_1529.f_138), Local_526.f_690[25 /*12*/].f_8, false);
			__LIB_8__::func_191(&(Local_412[1 /*7*/]), "PBL_COMBAT", 1);
			__LIB_8__::func_192(&(Local_412[1 /*7*/]), "bBreakInternalLoop");
			__LIB_7__::func_922(1024);
		}
		else
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(__LIB_2__::func_963(Local_1529.f_138), Local_526.f_690[5 /*12*/].f_8, false);
			__LIB_7__::func_952(&(Local_412[1 /*7*/]));
		}
	}
	if (__LIB_7__::func_963(&(Local_412[3 /*7*/])))
	{
		__LIB_7__::func_952(&(Local_412[3 /*7*/]));
		PHYSICS::ACTIVATE_PHYSICS(Local_526.f_690[7 /*12*/].f_8);
	}
	if (__LIB_7__::func_963(&(Local_412[0 /*7*/])))
	{
		__LIB_7__::func_952(&(Local_412[0 /*7*/]));
	}
}

void func_304(int iParam0)
{
	switch (iLocal_518)
	{
		case 0:
			if (iLocal_98 == 1 || ENTITY::DOES_ENTITY_EXIST(Local_526.f_690[12 /*12*/].f_8))
			{
				if (__LIB_2__::func_117(64))
				{
					iLocal_518 = 2;
				}
				else
				{
					iLocal_518 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_117(64))
			{
				if (iLocal_98 != 1)
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Whistle_Long", ENTITY::GET_ENTITY_COORDS(Local_526.f_690[12 /*12*/].f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_518 = 2;
			}
			break;
		case 2:
			if (!__LIB_2__::func_117(64))
			{
				if (iLocal_98 == 1)
				{
					__LIB_3__::func_154(&(Local_1529.f_35), "LCMP_FMN_EOS", *iParam0, Global_35, 0, 0, 1, 0);
				}
				else
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Whistle_Harmonic", ENTITY::GET_ENTITY_COORDS(Local_526.f_690[12 /*12*/].f_8, true, false), "Steam_Donkey_Sounds", false, 0, true, 0);
				}
				iLocal_518 = 1;
			}
			break;
		case 3:
			break;
	}
}

bool func_305(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[0]))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1935630.f_34[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1935630.f_34[0], true))
	{
		return true;
	}
	iVar0 = __LIB_8__::func_246(Global_1935630.f_34[0], 0);
	if (__LIB_0__::func_29(iVar0))
	{
		if (uParam0->f_136 == 1)
		{
			__LIB_7__::func_949(&iVar1, &iVar2, 0);
		}
		else
		{
			__LIB_1__::func_902(uParam0->f_137, &iVar1, &iVar2, 0, 0);
		}
		if (iVar0 >= iVar1 && iVar0 <= iVar2)
		{
			return true;
		}
	}
	return false;
}

void func_306(int iParam0, int iParam1)
{
	float fVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!__LIB_7__::func_939(__LIB_8__::func_64(iParam1)))
	{
		if (PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()) || PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			__LIB_7__::func_926(__LIB_8__::func_64(iParam1));
		}
	}
	else if (!(PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()) || PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX())))
	{
		fVar0 = __LIB_0__::func_265(&(vLocal_490[0 /*3*/]));
		if ((60f - fVar0) < 15f)
		{
			if (fVar0 >= 60f)
			{
				fVar0 = (60f - 15f);
			}
			else
			{
				fVar0 = (fVar0 - 15f);
			}
			__LIB_0__::func_268(&(vLocal_490[0 /*3*/]), fVar0);
		}
		__LIB_8__::func_19(__LIB_8__::func_64(iParam1));
	}
}

int func_307(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	switch (iLocal_517)
	{
		case 2:
		case 3:
			return joaat("EAFOR_A_L");
		case 0:
		case 1:
			vVar1 = { __LIB_2__::func_114(Global_35, 2f) };
			iVar0 = __LIB_2__::func_431(*iParam0, vVar1, 1060437492 /* Float: 0.707f */);
			switch (iVar0)
			{
				case 0:
					return joaat("EAFOR_A_F");
				case 2:
					return joaat("EAFOR_A_R_ANGRY");
				case 3:
					return joaat("EAFOR_A_L_ANGRY");
			}
			break;
	}
	return 0;
}

bool func_308(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && __LIB_1__::func_679(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (__LIB_8__::func_246(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_309(int iParam0)
{
	int iVar0;
	if (Global_40.f_9096[iParam0 /*12*/].f_9 == -1)
	{
		return false;
	}
	if (Global_40.f_9096[iParam0 /*12*/].f_10 < 0)
	{
		return false;
	}
	if (__LIB_7__::func_907(iParam0, 524288))
	{
		return false;
	}
	if (!__LIB_7__::func_908(iParam0, 16777216))
	{
		__LIB_8__::func_244(iParam0, 2);
		return true;
	}
	iVar0 = (Global_40.f_9096[iParam0 /*12*/] - Global_40.f_9096[iParam0 /*12*/].f_9);
	if (iVar0 >= 2)
	{
		if (__LIB_7__::func_908(iParam0, 32768))
		{
			__LIB_8__::func_83(iParam0, 32768);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_7__::func_944(iParam0))
	{
		if (__LIB_7__::func_908(iParam0, 32768))
		{
			__LIB_8__::func_83(iParam0, 32768);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_7__::func_908(iParam0, 32768))
	{
		__LIB_8__::func_83(iParam0, 32768);
	}
	return true;
}

void func_310(bool bParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_982(0);
	if (__LIB_7__::func_907(0, 128))
	{
		if (iVar0 != 1 || __LIB_7__::func_907(0, 16777216))
		{
			__LIB_8__::func_180(0, 0);
		}
	}
	else
	{
		if (iVar0 > 3)
		{
			__LIB_8__::func_180(0, 0);
		}
		if (__LIB_7__::func_908(0, 32768))
		{
			__LIB_8__::func_180(0, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 1:
					if (__LIB_7__::func_908(0, 4) && __LIB_7__::func_907(0, 16777216))
					{
						__LIB_8__::func_180(0, 0);
					}
					else if (__LIB_7__::func_908(0, 1024))
					{
						if (bParam0 || !__LIB_7__::func_907(0, 268435456))
						{
							__LIB_8__::func_181(0);
							__LIB_8__::func_245(0, 0, "LOG_JOURN01", 0, !bParam0);
							__LIB_8__::func_85(0, 268435456);
						}
					}
					else
					{
						__LIB_8__::func_180(0, 0);
					}
					break;
				case 2:
					__LIB_8__::func_180(0, 0);
					break;
				case 3:
					if (__LIB_7__::func_908(0, 8))
					{
						__LIB_8__::func_180(0, 0);
					}
					else if (__LIB_7__::func_908(0, 256))
					{
						if (bParam0 || !__LIB_7__::func_907(0, 268435456))
						{
							__LIB_8__::func_181(0);
							__LIB_8__::func_245(0, 0, "LOG_JOURN02", 0, !bParam0);
							__LIB_8__::func_85(0, 268435456);
						}
					}
					else
					{
						__LIB_8__::func_180(0, 0);
					}
					break;
				default:
					__LIB_8__::func_180(0, 0);
					break;
			}
		}
	}
}

int func_311(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, float fParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bParam7 = (bParam7 || __LIB_7__::func_924(iParam0, 4096));
	iVar2 = 0;
	while (iVar2 < *iParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar2]))
		{
			if (!__LIB_1__::func_248((*iParam1)[iVar2], &(iParam0->f_140)))
			{
				PED::SET_PED_CONFIG_FLAG((*iParam1)[iVar2], 146, false);
				PED::SET_PED_CONFIG_FLAG((*iParam1)[iVar2], 277, false);
				PED::SET_PED_CONFIG_FLAG((*iParam1)[iVar2], 178, true);
				PED::SET_PED_CAN_BE_TARGETTED((*iParam1)[iVar2], true);
				iVar3 = __LIB_8__::func_246((*iParam1)[iVar2], 0);
				if (__LIB_0__::func_29(iVar3))
				{
					__LIB_8__::func_123(iVar3, 1, 1);
				}
				PED::_0xFC3DB99C8144CD81((*iParam1)[iVar2], Global_1392194[iParam0->f_136 /*10*/].f_5, 0, 0, 0);
				if (__LIB_8__::func_185((*iParam1)[iVar2], (iParam5 == -1 || iVar1 < iParam5), (bParam8 || bParam7)))
				{
					if (bParam6)
					{
						PED::_0x802092B07E3B1EEA((*iParam1)[iVar2], Global_36, 3);
						TASK::CLEAR_PED_TASKS((*iParam1)[iVar2], true, false);
					}
					PED::_0x802092B07E3B1EEA((*iParam1)[iVar2], Global_36, 3);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam1)[iVar2], joaat("REL_PLAYER_ENEMY"));
					__LIB_2__::func_73((*iParam1)[iVar2], uParam2[iVar2], joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 71, true);
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 31, true);
					if (__LIB_7__::func_966((*iParam1)[iVar2]))
					{
						iVar4 = __LIB_7__::func_967((*iParam1)[iVar2]);
					}
					if (PED::IS_PED_HUMAN((*iParam1)[iVar2]))
					{
						if (__LIB_7__::func_969(iParam1[iVar2], iVar4, (bParam8 || bParam7)))
						{
							WEAPON::_GIVE_WEAPON_TO_PED_2((*iParam1)[iVar2], iParam3, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (__LIB_0__::func_154(iVar4))
							{
								WEAPON::SET_CURRENT_PED_WEAPON((*iParam1)[iVar2], iVar4, true, 0, false, false);
							}
						}
						PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 46, false);
					}
					else
					{
						PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar2], 46, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (PED::IS_PED_HUMAN((*iParam1)[iVar2]))
					{
						if (__LIB_0__::func_154(iVar4))
						{
							TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE((*iParam1)[iVar2], true))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						}
						else if (iParam4 != 0)
						{
						}
						else if (!__LIB_7__::func_966((*iParam1)[iVar2]))
						{
							TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, __LIB_7__::func_968(), 0.5f, 0, 4);
						}
					}
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE((*iParam1)[iVar2], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iVar1++;
				}
				else
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam1)[iVar2], joaat("REL_PLAYER_DISLIKE"));
					if (bParam6)
					{
						PED::_0x802092B07E3B1EEA((*iParam1)[iVar2], Global_36, 3);
						TASK::CLEAR_PED_TASKS((*iParam1)[iVar2], true, false);
					}
					else
					{
						PED::_0xEEED8FAFEC331A70((*iParam1)[iVar2], Global_36, 1);
					}
					PED::SET_PED_FLEE_ATTRIBUTES((*iParam1)[iVar2], 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES((*iParam1)[iVar2], 1048576, false);
					PED::SET_PED_FLEE_ATTRIBUTES((*iParam1)[iVar2], 65536, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (PED::IS_PED_IN_ANY_VEHICLE((*iParam1)[iVar2], true))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4160);
						TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 1, -1082130432 /* Float: -1f */, -1, 0);
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE((*iParam1)[iVar2], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_PED_KEEP_TASK((*iParam1)[iVar2], true);
					__LIB_7__::func_970(iParam1[iVar2], iParam9, fParam10);
				}
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam1)[iVar2], true);
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_312(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, float fParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (iParam5 > 0)
	{
		PED::_0xF008E0BA1FE1D644(iParam5);
	}
	else
	{
		return iParam5;
	}
	bParam8 = (bParam8 || __LIB_7__::func_924(iParam0, 4096));
	if (iParam0->f_136 == 1)
	{
		__LIB_7__::func_949(&iVar4, &iVar5, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		__LIB_1__::func_902(iParam0->f_137, &iVar4, &iVar5, 1, 0);
	}
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!__LIB_0__::func_29(iVar3))
		{
		}
		else if (iVar3 == iParam0->f_138)
		{
		}
		else if (__LIB_0__::func_117(iVar3, 32))
		{
		}
		else
		{
			iVar6 = __LIB_2__::func_963(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(iVar6) && !__LIB_1__::func_248(iVar6, &(iParam0->f_140)))
			{
				(*uParam1)[iVar0] = iVar6;
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar6))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar6, true, false);
				}
				PED::SET_PED_CONFIG_FLAG(iVar6, 146, false);
				PED::SET_PED_CONFIG_FLAG(iVar6, 246, true);
				PED::SET_PED_CONFIG_FLAG(iVar6, 178, true);
				PED::SET_PED_CAN_BE_TARGETTED(iVar6, true);
				__LIB_8__::func_123(iVar3, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iVar6, 277, false);
				PED::_0xFC3DB99C8144CD81(iVar6, Global_1392194[iParam0->f_136 /*10*/].f_5, 0, 0, 0);
				if ((__LIB_8__::func_185(iVar6, (iParam3 == -1 || iVar1 < iParam3), (bParam9 || bParam8)) || iVar3 == 808) || iVar3 == 809)
				{
					PED::_0x802092B07E3B1EEA(iVar6, Global_36, 3);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar6, joaat("REL_PLAYER_ENEMY"));
					__LIB_2__::func_73(iVar6, uParam2[iVar0], joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 71, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 31, true);
					if (__LIB_7__::func_966(iVar6))
					{
						iVar7 = __LIB_7__::func_967(iVar6);
					}
					if (PED::IS_PED_HUMAN(iVar6))
					{
						if (__LIB_7__::func_969(&iVar6, iVar7, (bParam9 || bParam8)))
						{
							WEAPON::_GIVE_WEAPON_TO_PED_2(iVar6, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (__LIB_0__::func_154(iVar7))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar6, iVar7, true, 0, false, false);
							}
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 46, false);
					}
					else
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 46, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					if (__LIB_0__::func_154(iVar7))
					{
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					}
					if (PED::IS_PED_HUMAN(iVar6) && !__LIB_7__::func_966(iVar6))
					{
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, __LIB_7__::func_968(), 0.5f, 0, 4);
					}
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iVar6, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					iVar1++;
				}
				else
				{
					PED::_0xEEED8FAFEC331A70(iVar6, Global_36, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar6, joaat("REL_PLAYER_DISLIKE"));
					if ((bParam7 || __LIB_2__::func_118(iVar6, 1, 1) < 15f) || __LIB_1__::func_985())
					{
						TASK::CLEAR_PED_TASKS(iVar6, true, false);
						PED::SET_PED_CONFIG_FLAG(iVar6, 178, false);
						TASK::_TASK_SMART_FLEE_STYLE_PED(iVar6, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar6, true);
						__LIB_7__::func_970(&iVar6, iParam10, fParam11);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, __LIB_7__::func_968(), 0.5f, 0, 4);
						TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 1500, 0, 1, 1);
						TASK::TASK_COWER(0, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(iVar6, iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						DECORATOR::DECOR_SET_BOOL(iVar6, "bCowering", true);
					}
				}
				iVar0++;
			}
		}
		iVar3++;
	}
	return iVar1;
}

void func_313()
{
	if (__LIB_8__::func_232() && (MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (__LIB_8__::func_215(Local_1529.f_136))
		{
			__LIB_7__::func_922(128);
		}
	}
}

void func_314(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = __LIB_8__::func_55(iParam0);
	if (iVar0 != 0 && __LIB_7__::func_908(iParam0, 1))
	{
		vVar1 = { __LIB_8__::func_56(iParam0) };
		if (iParam1 < 1)
		{
			iParam1 = __LIB_0__::func_982(iParam0);
		}
		__LIB_8__::func_248(iParam0, iParam1);
		iParam1 = (iParam1 - 1);
		if (__LIB_7__::func_908(iParam0, 67108864))
		{
			MAP::_0xE057FEA9A22EB3EE(iVar0);
		}
		MAP::_0x1392105DA88BBFFB(iVar0, vVar1.x, vVar1.y, 0, iParam1);
		__LIB_8__::func_82(iParam0, 67108864);
	}
}

void func_315(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	iVar0 = __LIB_7__::func_964(iParam0, iParam1, iParam2);
	if (!bParam3)
	{
		__LIB_8__::func_124(iVar0, 1);
		__LIB_8__::func_63(1, &Local_526);
	}
}

void func_316(char* sParam0, bool bParam1)
{
	StringCopy(&cLocal_386, sParam0, 32);
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_386))
		{
			__LIB_1__::func_422(&cLocal_386, 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

void func_317(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_2__::func_411(&(Local_251[iParam0 /*52*/][iParam1 /*17*/]), bParam2, 0);
}

void func_318(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_3__::func_158(&(Local_251[iParam0 /*52*/][iParam1 /*17*/]), bParam2);
}

void func_319(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	__LIB_8__::func_131(iParam2, 128);
	__LIB_8__::func_170(iParam0, 0);
	__LIB_1__::func_956(iParam2->f_137, 0);
	__LIB_7__::func_983(iParam2);
	__LIB_8__::func_85(iParam0, 2048);
	__LIB_8__::func_132(iParam2, 64);
	if (iParam2->f_137 == 76)
	{
		__LIB_7__::func_949(&uVar0, &iVar1, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		__LIB_1__::func_902(iParam2->f_137, &uVar0, &iVar1, 0, 0);
	}
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		PED::SET_PED_KEEP_TASK(__LIB_2__::func_963(iVar2), true);
		iVar2++;
	}
	Global_1898092.f_26.f_7 = uVar0;
	Global_1898092.f_26.f_8 = iParam2->f_29;
	Global_1898092.f_26.f_2 = iParam2->f_136;
	Global_1898092.f_26.f_1 = iParam2->f_137;
	__LIB_7__::func_894(512);
	iVar3 = 0;
	while (iVar3 < 26)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_690[iVar3 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(uParam1->f_690[iVar3 /*12*/].f_8));
		}
		iVar3++;
	}
	if (__LIB_0__::func_139(iParam2->f_32))
	{
		__LIB_1__::func_748(&(iParam2->f_32), 1, 1);
	}
	if (__LIB_0__::func_139(iParam2->f_33))
	{
		__LIB_1__::func_748(&(iParam2->f_33), 1, 1);
	}
	if (__LIB_0__::func_139(iParam2->f_34))
	{
		__LIB_1__::func_748(&(iParam2->f_34), 1, 1);
	}
	if ((*uParam1 + uParam1->f_1) > 0)
	{
		PED::_0x7D4E70A67A651C71((*uParam1 + uParam1->f_1));
	}
	if (__LIB_0__::func_27(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP(), 1))
	{
		__LIB_8__::func_85(iParam2->f_136, 4194304);
	}
	__LIB_1__::func_539();
	if (__LIB_7__::func_924(iParam2, 65536))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		MAP::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
}

void func_320(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	__LIB_2__::func_602(&(Local_251[iParam0 /*52*/][0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_251[iParam0 /*52*/][1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_251[iParam0 /*52*/][2 /*17*/]), __LIB_2__::func_460(12), "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
}

bool func_321(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && !DECORATOR::DECOR_EXIST_ON(*iParam0, "bChopDown"))
	{
		if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(*iParam0) != __LIB_8__::func_18())
		{
			return false;
		}
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(*iParam0, 0))
		{
			return false;
		}
		bVar0 = __LIB_7__::func_923(524288);
		if (iParam3 == __LIB_7__::func_920() && __LIB_7__::func_907(Local_1529.f_136, 1073741824 /* Float: 2f */))
		{
			__LIB_8__::func_167(524288, bVar0);
			__LIB_8__::func_19(256);
			return true;
		}
		if (__LIB_7__::func_923(64) && !__LIB_8__::func_140(0))
		{
			return false;
		}
		if (__LIB_7__::func_939(__LIB_8__::func_64(iParam3)))
		{
			return false;
		}
		if (__LIB_0__::func_75(&(vLocal_490[0 /*3*/])))
		{
			fVar1 = __LIB_0__::func_265(&(vLocal_490[0 /*3*/]));
			if (__LIB_7__::func_939(256))
			{
				fVar2 = 90f;
			}
			else if (__LIB_2__::func_118(*iParam0, 1, 1) < 5f)
			{
				fVar2 = 7.5f;
			}
			else if (!__LIB_8__::func_233())
			{
				fVar2 = 15f;
			}
			else
			{
				fVar2 = 60f;
			}
			if (fVar1 < fVar2)
			{
				return false;
			}
		}
		if (__LIB_7__::func_923(32))
		{
			return false;
		}
		else if (__LIB_7__::func_923(64) && iParam3 == 0)
		{
			return false;
		}
		else if (((iLocal_98 == 1 && iParam3 == 1) && !__LIB_7__::func_929(4096)) && !__LIB_7__::func_923(262144))
		{
			return false;
		}
		if (__LIB_7__::func_907(Local_1529.f_136, 536870912) && iParam3 == __LIB_7__::func_920())
		{
			return false;
		}
		if (__LIB_8__::func_256(*iParam0, uParam1, iParam2, &bVar0, 1f, 45f, 0f, 0, 25f, 1))
		{
			__LIB_8__::func_167(524288, bVar0);
			__LIB_8__::func_19(256);
			return true;
		}
		__LIB_8__::func_167(524288, bVar0);
	}
	return false;
}

bool func_322(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	switch (uParam0->f_17)
	{
		case 0:
			if (uParam0->f_25 >= *iParam1)
			{
				uParam0->f_25 = 0;
			}
			if (uParam0->f_24 >= uParam0->f_26 || uParam0->f_23 >= uParam0->f_26)
			{
				uParam0->f_17 = 4;
				return false;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23]))
			{
				uParam0->f_17 = 4;
				return false;
			}
			if (uParam0->f_23 < uParam0->f_26 && uParam0->f_24 < uParam0->f_26)
			{
				if (__LIB_8__::func_213(uParam0, (*iParam1)[uParam0->f_25], uParam2))
				{
					if ((ENTITY::IS_ENTITY_ON_SCREEN((*iParam1)[uParam0->f_25]) && !ENTITY::IS_ENTITY_OCCLUDED((*iParam1)[uParam0->f_25])) && PED::_0x7F9B9791D4CB71F6(Global_35, (*iParam1)[uParam0->f_25], false, 0) == 1)
					{
						uParam0->f_31 = (*iParam1)[uParam0->f_25];
						uParam0->f_17 = 1;
					}
					else
					{
						uParam0->f_25++;
						Jump @1215; //curOff = 254
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_31) && __LIB_2__::func_215(uParam0->f_31, Global_35, 0, uParam0->f_32, 0))
						{
							__LIB_3__::func_896(&(uParam0->f_18));
							vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_31, true, false) };
							if (!uParam0->f_7[uParam0->f_24])
							{
								TASK::TASK_LOOK_AT_ENTITY(uParam0->f_31, Global_35, 7500, 48, 41, 0);
								if (__LIB_0__::func_27(uParam0->f_34, 8))
								{
									TASK::_0xE7FA07624574B79A(uParam0->f_31, Global_35, 2, 1, 100f, 1, 0, 0, 0);
									__LIB_1__::func_336(&(uParam0->f_34), 16);
								}
								else if (!__LIB_0__::func_27(uParam0->f_34, 4) && !PED::_0x84D0BF2B21862059(uParam0->f_31))
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(*uParam0))
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1f, -1f, -1f);
										TASK::TASK_ACHIEVE_HEADING(0, 90f, 0);
										TASK::TASK_PLAY_ANIM(0, *uParam0, uParam0->f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23]))
									{
										uParam0->f_30 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(uParam0->f_31, false);
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										if (__LIB_0__::func_94(uParam0->f_31, Global_36, 0) > 12f)
										{
											TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Global_35, 0f, 0f, 0f, 1f, 1000, 5f, 1, 1, 0, 0, 1);
										}
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1f, -1f, -1f);
										if (bParam3)
										{
											if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_30))
											{
												TASK::_TASK_USE_SCENARIO_POINT(0, uParam0->f_30, 0, 0, true, false, 0, false, -1f, false);
											}
											else
											{
												TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar1, 30f, 0, false, false, false, false);
											}
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									else
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1f, -1f, -1f);
										if (bParam3)
										{
											TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar1, 30f, 0, false, false, false, false);
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
								}
							}
							DECORATOR::DECOR_SET_BOOL(uParam0->f_31, "bNoticePlayer", false);
							uParam0->f_17 = 2;
						}
						else if (uParam0->f_18.f_4)
						{
							__LIB_3__::func_896(&(uParam0->f_18));
							uParam0->f_17 = 0;
						}
						if (uParam0->f_17 == 0)
						{
							uParam0->f_31 = 0;
							if (uParam0->f_25 == (*iParam1 - 1))
							{
								uParam0->f_25 = 0;
							}
							else
							{
								uParam0->f_25++;
							}
						}
						Jump @1215; //curOff = 885
						if (__LIB_0__::func_27(uParam0->f_34, 1))
						{
							__LIB_2__::func_461(0);
						}
						__LIB_4__::func_279(&(uParam0->f_31), 2000, Global_35, 0, 0, 0, 0, 1);
						if ((!__LIB_0__::func_270() && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23])) && __LIB_2__::func_227(0, 1, uParam0->f_31, 1))
						{
							if (__LIB_0__::func_27(uParam0->f_34, 2))
							{
							}
							else
							{
								if (bParam4 && uParam0->f_23 == 0)
								{
									uParam0->f_23++;
								}
								__LIB_2__::func_478(uParam0->f_31, Global_35, uParam0->f_2[uParam0->f_23], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							uParam0->f_23++;
							uParam0->f_17 = 3;
							__LIB_1__::func_148(&(uParam0->f_27));
							return true;
						}
						Jump @1215; //curOff = 1078
						if ((__LIB_0__::func_27(uParam0->f_34, 16) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_31)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_31))
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_31, 1, 0);
							__LIB_0__::func_516(&(uParam0->f_34), 16);
						}
						if (__LIB_1__::func_285(&(uParam0->f_27), uParam0->f_33))
						{
							iVar4 = __LIB_8__::func_246(uParam0->f_31, 0);
							if ((bParam3 && iVar4 != -1) && __LIB_2__::func_763(iVar4, 0))
							{
								__LIB_2__::func_753(iVar4, 0, 1, 0, 0);
							}
							uParam0->f_17 = 0;
						}
					}
					return false;
				}
			}
			default:
				break;
	}
}

int func_323(var uParam0, var uParam1, var uParam2, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	if (bParam6)
	{
		if (!uParam2->f_27)
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false) && !VEHICLE::IS_VEHICLE_STOPPED(*uParam0)) && !ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(*uParam0, 2f, -1, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				TASK::CLEAR_PED_TASKS(*uParam1, true, false);
			}
			uParam2->f_27 = 1;
		}
		return 0;
	}
	else if (uParam2->f_27)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(*uParam1, *uParam0, *uParam2, 4f, 0, 0, 67633207, 5f, 10f);
		}
		uParam2->f_27 = 0;
	}
	switch (uParam2->f_15)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				if (__LIB_8__::func_94(uParam2))
				{
					*uParam0 = VEHICLE::CREATE_VEHICLE(uParam2->f_11, uParam2->f_4, uParam2->f_10, false, true, false, false);
					if (__LIB_2__::func_1(*uParam1, 0, 1))
					{
						PED::SET_PED_INTO_VEHICLE(*uParam1, *uParam0, -1);
						DECORATOR::DECOR_SET_BOOL(*uParam1, "bNoticePlayer", true);
					}
					uParam2->f_15 = 1;
				}
			}
			break;
		case 1:
			if (!bParam4 && (__LIB_8__::func_256(*uParam0, &(uParam2->f_16), &(uParam2->f_21), &(uParam2->f_24), 3f, fParam3, 20f, 0, 1092616192 /* Float: 10f */, 1) || !uParam2->f_22))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(*uParam1, *uParam0, *uParam2, 4f, 0, 0, 67633207, 5f, 20f);
				}
				if (uParam2->f_23)
				{
					if ((!uParam2->f_26 && __LIB_2__::func_227(0, 0, 0, 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_12))
					{
						__LIB_2__::func_478(*uParam1, Global_35, uParam2->f_12, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 1, 1, 291934926, 1, 0, 0);
						uParam2->f_26 = 1;
					}
				}
				uParam2->f_15 = 2;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1) && TASK::GET_SCRIPT_TASK_STATUS(*uParam1, -1817882002, true) == 8)
			{
				if (uParam2->f_23)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(*uParam1, *uParam0, 5f, 524295);
						uParam2->f_15 = 4;
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
				{
					if (!VEHICLE::IS_VEHICLE_STOPPED(*uParam0))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(*uParam0, 2f, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_GO_TO_COORD_ANY_MEANS(0, uParam2->f_7, 1f, 0, false, 524419, -1f);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(*uParam1, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					uParam2->f_15 = 3;
				}
			}
			break;
		case 3:
			if (!bParam4 && TASK::GET_SCRIPT_TASK_STATUS(*uParam1, 242628503, true) == 8)
			{
				if ((!uParam2->f_26 && __LIB_2__::func_227(0, 0, 0, 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_12))
				{
					__LIB_2__::func_478(*uParam1, Global_35, uParam2->f_12, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 1, 1, 291934926, 1, 0, 0);
					uParam2->f_26 = 1;
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_STAND_STILL(0, 2000);
				if (!MISC::IS_STRING_NULL(uParam2->f_13))
				{
					TASK::TASK_PLAY_ANIM(0, uParam2->f_13, uParam2->f_14, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
				}
				else if (iParam5 != 0)
				{
					TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(0, iParam5, 0, 0, 0);
				}
				else
				{
					TASK::TASK_WANDER_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), 20f, 10f, 60f, 1);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam1, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				uParam2->f_15 = 4;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

int func_324(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*iParam3 < iParam4 || *iParam3 > iParam5)
	{
		*iParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_8__::func_259((*iParam0)[*iParam3], 0, iParam1, uParam2, 0, 0))
		{
			return 1;
		}
		*iParam3++;
		if (*iParam3 > iParam5)
		{
			*iParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

void func_325(int iParam0)
{
	int iVar0;
	if (__LIB_7__::func_929(65536))
	{
		if (!__LIB_2__::func_763(Local_1529.f_138, 0))
		{
			__LIB_8__::func_123(Local_1529.f_138, 1, 1);
		}
		if (!__LIB_7__::func_933(2097152))
		{
			__LIB_7__::func_934(2097152);
			PED::_0xAAB050DA48B57978(*iParam0, "Default_Angry", Global_35, -1, 4);
			if (iLocal_103 == 3)
			{
				__LIB_7__::func_934(1048576);
			}
		}
		if (__LIB_0__::func_75(&(vLocal_490[3 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_490[3 /*3*/]));
		}
		if (__LIB_2__::func_227(-3.5f, 1, 0, 0) && !__LIB_0__::func_75(&(vLocal_490[5 /*3*/])))
		{
			__LIB_1__::func_148(&(vLocal_490[5 /*3*/]));
		}
		if (__LIB_1__::func_313(&(vLocal_490[5 /*3*/]), 10f))
		{
			__LIB_3__::func_154(&(Local_1529.f_35), __LIB_8__::func_72(), *iParam0, Global_35, 0, 0, 1, 1);
			TASK::CLEAR_PED_TASKS(*iParam0, true, false);
			switch (iLocal_103)
			{
				case 1:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
					TASK::TASK_CONFRONT(0, Global_35, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 5000, -1f, -1f, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
					TASK::_TASK_PERFORM_SEQUENCE_2(*iParam0, iLocal_193, 2f, 7.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
					Local_104 = 0;
					break;
				case 2:
					iVar0 = __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam0, iVar0, 99, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, iVar0, false, 0, false, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_193);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_193);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_193);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_193);
					Local_104 = 0;
					break;
				case 3:
					__LIB_7__::func_934(1048576);
					break;
			}
			iLocal_103++;
		}
	}
	else
	{
		if (__LIB_0__::func_75(&(vLocal_490[5 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_490[5 /*3*/]));
		}
		if (__LIB_7__::func_933(2097152))
		{
			if (!__LIB_0__::func_75(&(vLocal_490[3 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_490[3 /*3*/]));
			}
			if (__LIB_1__::func_313(&(vLocal_490[3 /*3*/]), 15f))
			{
				if (iLocal_103 == 3)
				{
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
					PED::_0x935CF6E42BAF7F4D(*iParam0);
					__LIB_8__::func_124(Local_1529.f_138, 1);
					__LIB_2__::func_451(&(Local_208[0 /*21*/]), 0);
				}
				__LIB_7__::func_965(2097152);
			}
		}
	}
	if (__LIB_7__::func_933(2097152))
	{
		if (!__LIB_0__::func_163(*iParam0, 242628503))
		{
			__LIB_8__::func_221(&Local_104, 0);
		}
	}
}

bool func_326(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_921(iParam0) == 4 && __LIB_8__::func_224(iParam0, -1162387149))
	{
		return true;
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar2 = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar2);
		if (ITEMSET::IS_ITEMSET_VALID(iVar2))
		{
			iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
				}
				else
				{
					iVar1 = __LIB_6__::func_140(iVar0);
					if (__LIB_8__::func_127(iVar1, iParam0))
					{
						ITEMSET::DESTROY_ITEMSET(iVar2);
						return true;
					}
				}
				iVar4++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar2);
		}
	}
	return __LIB_8__::func_224(iParam0, 1084182731);
}

int func_327(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 1))
		{
			if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar0], "bCowering"))
			{
				if ((__LIB_8__::func_259((*uParam0)[iVar0], 0, iParam1, &(iParam1->f_28), 0, 0) || __LIB_4__::func_102((*uParam0)[iVar0], iParam1, &(iParam1->f_28), 0)) || __LIB_0__::func_665((*uParam0)[iVar0], Global_35, 1, 1) < 8f)
				{
					if (iParam1->f_28 != 32 || __LIB_7__::func_971(uParam0[iVar0], iParam1, 1097859072 /* Float: 15f */))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam0)[iVar0], joaat("REL_PLAYER_DISLIKE"));
						TASK::_TASK_SMART_FLEE_STYLE_PED((*uParam0)[iVar0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
						DECORATOR::DECOR_REMOVE((*uParam0)[iVar0], "bCowering");
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_328(bool bParam0)
{
	if (__LIB_7__::func_933(512) || bParam0)
	{
		if (__LIB_2__::func_1(iLocal_525, 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_525, 136, false);
			__LIB_2__::func_145(iLocal_525, 0);
		}
		__LIB_7__::func_965(512);
	}
}

int func_329(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ENTITY::GET_ENTITY_ATTACHED_TO(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_330(int iParam0, int iParam1)
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar0, true, 0, false);
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

void func_331(int iParam0)
{
	iLocal_27 = iParam0;
}

bool func_332(int iParam0)
{
	return __LIB_0__::func_27(iLocal_15, iParam0);
}

int func_333(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!__LIB_1__::func_902(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return __LIB_1__::func_690(iParam0, iVar0, iVar1, bParam2);
}

var func_334(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		sParam0 = "ROB_TOAST_BODY";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "ROB_TOAST_BODY";
	}
	if (iParam2 == -1)
	{
		iParam2 = joaat("ELEMENTS_STAMPS_ICONS");
	}
	if (iParam3 == -1)
	{
		iParam3 = joaat("STAMP_CASH");
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		sParam5 = "INPUT_FEED_INTERACT_GENERIC";
	}
	if (iParam6 == -1)
	{
		iParam6 = joaat("SP_NOTIFICATIONS");
	}
	if (!bParam14)
	{
		return __LIB_0__::func_425(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	return __LIB_7__::func_902(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
}

void func_335(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> Var10;
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + __LIB_0__::func_839(iParam0));
	sVar4 = __LIB_1__::func_569(__LIB_0__::func_653(iVar3, iParam2));
	sVar6 = __LIB_0__::func_654(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, __LIB_0__::func_655(iParam0));
	iVar8 = __LIB_0__::func_656(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = __LIB_0__::func_657(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	__LIB_0__::func_425(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", __LIB_0__::func_658(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

int func_336(char[4] cParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	int iVar3;
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2) && (__LIB_0__::func_665(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam2, iParam3, 7000, 0, 51, 0);
			if (__LIB_0__::func_665(iParam2, iParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		__LIB_1__::func_148(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (__LIB_1__::func_568(sParam1))
			{
				return 1;
			}
		}
		else if (__LIB_1__::func_104(cParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_337(int iParam0)
{
	if (iParam0 <= -1)
	{
		return;
	}
	__LIB_3__::func_860(iParam0);
	__LIB_3__::func_155(21);
}

int func_338(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, float fParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (iParam5 > 0)
	{
		PED::_0xF008E0BA1FE1D644(iParam5);
	}
	else
	{
		return iParam5;
	}
	bParam8 = (bParam8 || __LIB_7__::func_924(iParam0, 4096));
	if (iParam0->f_136 == 1)
	{
		__LIB_7__::func_949(&iVar4, &iVar5, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		__LIB_1__::func_902(iParam0->f_137, &iVar4, &iVar5, 1, 0);
	}
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!__LIB_0__::func_29(iVar3))
		{
		}
		else if (iVar3 == iParam0->f_138)
		{
		}
		else if (__LIB_0__::func_117(iVar3, 32))
		{
		}
		else
		{
			iVar6 = __LIB_2__::func_963(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(iVar6) && !__LIB_1__::func_248(iVar6, &(iParam0->f_140)))
			{
				(*iParam1)[iVar0] = iVar6;
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar6))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar6, true, false);
				}
				PED::SET_PED_CONFIG_FLAG(iVar6, 146, false);
				PED::SET_PED_CONFIG_FLAG(iVar6, 246, true);
				PED::SET_PED_CONFIG_FLAG(iVar6, 178, true);
				PED::SET_PED_CAN_BE_TARGETTED(iVar6, true);
				__LIB_8__::func_123(iVar3, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iVar6, 277, false);
				PED::_0xFC3DB99C8144CD81(iVar6, Global_1392194[iParam0->f_136 /*10*/].f_5, 0, false, 0);
				if ((__LIB_8__::func_185(iVar6, (iParam3 == -1 || iVar1 < iParam3), (bParam9 || bParam8)) || iVar3 == 808) || iVar3 == 809)
				{
					PED::_0x802092B07E3B1EEA(iVar6, Global_36, 3);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar6, joaat("REL_PLAYER_ENEMY"));
					__LIB_2__::func_73(iVar6, uParam2[iVar0], joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 71, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 31, true);
					if (__LIB_7__::func_966(iVar6))
					{
						iVar7 = __LIB_7__::func_967(iVar6);
					}
					if (PED::IS_PED_HUMAN(iVar6))
					{
						if (__LIB_7__::func_969(&iVar6, iVar7, (bParam9 || bParam8)))
						{
							WEAPON::_GIVE_WEAPON_TO_PED_2(iVar6, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (__LIB_0__::func_154(iVar7))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar6, iVar7, true, 0, false, false);
							}
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 46, false);
					}
					else
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 46, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					if (__LIB_0__::func_154(iVar7))
					{
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					}
					if (PED::IS_PED_HUMAN(iVar6) && !__LIB_7__::func_966(iVar6))
					{
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, __LIB_7__::func_968(), 0.5f, 0, 4);
					}
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iVar6, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					iVar1++;
				}
				else
				{
					PED::_0xEEED8FAFEC331A70(iVar6, Global_36, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar6, joaat("REL_PLAYER_DISLIKE"));
					if ((bParam7 || __LIB_2__::func_118(iVar6, 1, 1) < 15f) || __LIB_1__::func_985())
					{
						TASK::CLEAR_PED_TASKS(iVar6, true, false);
						PED::SET_PED_CONFIG_FLAG(iVar6, 178, false);
						TASK::_TASK_SMART_FLEE_STYLE_PED(iVar6, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar6, true);
						__LIB_7__::func_970(&iVar6, iParam10, fParam11);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, __LIB_7__::func_968(), 0.5f, 0, 4);
						TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 1500, 0, 1, 1);
						TASK::TASK_COWER(0, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(iVar6, iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						DECORATOR::DECOR_SET_BOOL(iVar6, "bCowering", true);
					}
				}
				iVar0++;
			}
		}
		iVar3++;
	}
	return iVar1;
}

void func_339(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	__LIB_8__::func_131(iParam2, 128);
	__LIB_8__::func_170(iParam0, 0);
	__LIB_1__::func_956(iParam2->f_137, 0);
	__LIB_7__::func_983(iParam2);
	__LIB_8__::func_85(iParam0, 2048);
	__LIB_8__::func_132(iParam2, 64);
	if (iParam2->f_137 == 76)
	{
		__LIB_7__::func_949(&iVar0, &iVar1, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		__LIB_1__::func_902(iParam2->f_137, &iVar0, &iVar1, 0, 0);
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		PED::SET_PED_KEEP_TASK(__LIB_2__::func_963(iVar2), true);
		iVar2++;
	}
	Global_1898092.f_26.f_7 = iVar0;
	Global_1898092.f_26.f_8 = iParam2->f_29;
	Global_1898092.f_26.f_2 = iParam2->f_136;
	Global_1898092.f_26.f_1 = iParam2->f_137;
	__LIB_7__::func_894(512);
	iVar3 = 0;
	while (iVar3 < 26)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_690[iVar3 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(iParam1->f_690[iVar3 /*12*/].f_8));
		}
		iVar3++;
	}
	if (__LIB_0__::func_139(iParam2->f_32))
	{
		__LIB_1__::func_748(&(iParam2->f_32), 1, 1);
	}
	if (__LIB_0__::func_139(iParam2->f_33))
	{
		__LIB_1__::func_748(&(iParam2->f_33), 1, 1);
	}
	if (__LIB_0__::func_139(iParam2->f_34))
	{
		__LIB_1__::func_748(&(iParam2->f_34), 1, 1);
	}
	if ((*iParam1 + iParam1->f_1) > 0)
	{
		PED::_0x7D4E70A67A651C71((*iParam1 + iParam1->f_1));
	}
	if (__LIB_0__::func_27(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP(), 1))
	{
		__LIB_8__::func_85(iParam2->f_136, 4194304);
	}
	__LIB_1__::func_539();
	if (__LIB_7__::func_924(iParam2, 65536))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		MAP::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
}

bool func_340(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_2__::func_523(iParam1, uParam2, 0);
		iVar5 = __LIB_3__::func_159(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			return true;
		}
		__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_3__::func_101(iParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*iParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_341(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			__LIB_3__::func_160(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_342(int iParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	var uVar1;
	struct<11> Var2;
	int iVar13;
	if (!__LIB_0__::func_71(iParam0))
	{
		if (bParam11)
		{
			iVar0 = __LIB_0__::func_398(7);
		}
		else
		{
			iVar0 = PED::_GET_LAST_MOUNT(iParam0);
		}
		if (!__LIB_0__::func_272(iVar0, 1) || (!(VOLUME::_DOES_VOLUME_EXIST(iParam5) && __LIB_1__::func_205(iVar0, iParam5, 1, 0)) && __LIB_0__::func_665(iParam0, iVar0, 1, 1) > fParam6))
		{
			return true;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (__LIB_1__::func_16(iVar0) && __LIB_0__::func_402(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*iParam1 = __LIB_2__::func_338(&uVar1, &Var2);
				if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
				{
					*iParam1 = iVar0;
				}
			}
			else
			{
				*iParam1 = iVar0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			return true;
		}
		if (__LIB_0__::func_272(*iParam1, 1))
		{
			if (!(__LIB_0__::func_163(*iParam1, 518218985) || __LIB_0__::func_163(*iParam1, 713668775)))
			{
				TASK::CLEAR_PED_TASKS(*iParam1, true, false);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				FLOCK::_0xFF1E339CE40EAAAF(*iParam1, 0);
				POPULATION::_0xF74E134F40192884(*iParam1, 2);
				if (!__LIB_0__::func_86(vParam2))
				{
					bParam8 = false;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, vParam2, fParam12, -1, 0.25f, 0, 40000f);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iParam5))
				{
					POPULATION::_0xB56D41A694E42E86(iParam5, 2048, 0, 0, -1, -1, 2);
					if (bParam8)
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam1, VOLUME::_GET_VOLUME_COORDS(iParam5), iParam7, iVar13, fParam6, 6000, 0);
					}
				}
				if (!bParam8 && __LIB_0__::func_86(vParam2))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return false;
}

bool func_343(int iParam0)
{
	return (iLocal_16 && iParam0) != 0;
}

bool func_344(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	return STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(iParam0, Global_36);
}

void func_345(int iParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iVar0 = PLAYER::_0x0139637A3BFF8B6D(*iParam0, &iVar1);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), iVar1, iVar0);
	}
}

bool func_346(int iParam0)
{
	return (iLocal_19 && iParam0) != 0;
}

int func_347(int iParam0)
{
	int iVar0;
	iVar0 = (0 + iParam0);
	return iVar0;
}

bool func_348(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return true;
	}
	return false;
}

bool func_349(var uParam0)
{
	return *uParam0 == 1;
}

bool func_350(var uParam0)
{
	return *uParam0 == 2;
}

bool func_351(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, bool bParam8)
{
	vector3 vVar0;
	if (!bParam8)
	{
		vParam3.f_2 = (vParam3.z - (0.5f * fParam7));
	}
	vVar0 = { vParam0 - vParam3 };
	if (vVar0.z < 0f || vVar0.z > fParam7)
	{
		return false;
	}
	return ((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= (fParam6 * fParam6);
}

void func_352(int iParam0, char* sParam1)
{
	int iVar0;
	if (!__LIB_0__::func_29(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_118(iParam0);
	if (!__LIB_0__::func_30(iVar0))
	{
		return;
	}
	if (!MISC::ARE_STRINGS_EQUAL(PERSCHAR::_0xCEB40B678E403759(iVar0), sParam1))
	{
		PERSCHAR::_0x187D65F3AEC5D679(iVar0, sParam1);
	}
}

Vector3 func_353(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = BUILTIN::SIN(vParam0.z);
	fVar1 = BUILTIN::COS(vParam0.z);
	fVar2 = BUILTIN::SIN(vParam0.x);
	fVar3 = BUILTIN::COS(vParam0.x);
	return __LIB_0__::func_173((-fVar3 * fVar0), (fVar3 * fVar1), fVar2);
}

void func_354(var uParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	uParam0->f_217 = { vParam1 };
	uParam0->f_220 = fParam4;
	if (__LIB_0__::func_86(vParam1))
	{
		__LIB_1__::func_477(uParam0, 2048, 1);
	}
	else
	{
		__LIB_0__::func_88(uParam0, 2048);
		if (bParam5)
		{
			__LIB_0__::func_88(uParam0, -2147483648);
		}
	}
}

bool func_355(var uParam0)
{
	return __LIB_8__::func_24(uParam0, &(uParam0->f_4));
}

bool func_356(bool bParam0, bool bParam1)
{
	if (!__LIB_0__::func_139(Global_43801))
	{
		Global_43801 = __LIB_4__::func_450("CUTSCENE_SKIP", joaat("INPUT_SKIP_CUTSCENE"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("LONG_TIMED_EVENT"), 0);
		Global_1945938[Global_43801 /*18*/].f_16 = Global_23[3];
		__LIB_1__::func_382(Global_43801, 0, 1);
		__LIB_0__::func_633(Global_43801, 6, 1);
		if (bParam1)
		{
			__LIB_0__::func_633(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!__LIB_0__::func_572(Global_43801, 0))
		{
			__LIB_1__::func_221(Global_43801, 1, 1);
		}
		if (__LIB_0__::func_486(Global_43801, 1) != 0f && bParam0)
		{
			__LIB_1__::func_382(Global_43801, 1, 1);
		}
		else
		{
			__LIB_1__::func_382(Global_43801, 0, 1);
		}
		return __LIB_0__::func_567(Global_43801, 1);
	}
	return false;
}

void func_357(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if ((*iParam6 % iParam7) == 0)
	{
		iVar0 = iParam3;
		while (iVar0 <= iParam4)
		{
			if (!__LIB_0__::func_117(iVar0, 32))
			{
				iVar1 = __LIB_2__::func_963(iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					if (PED::IS_PED_HUMAN(iVar1))
					{
						(*iParam0)[iVar2] = iVar1;
						(*uParam1)[iVar2] = __LIB_2__::func_118(iVar1, 1, 0);
						iVar2++;
						if (bParam9)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
							PED::SET_PED_CONFIG_FLAG(iVar1, 288, true);
						}
						else
						{
							PED::SET_PED_CONFIG_FLAG(iVar1, 288, false);
						}
						if (!DECORATOR::DECOR_EXIST_ON(iVar1, "bScriptedILO"))
						{
							PED::SET_PED_CONFIG_FLAG(iVar1, 130, false);
						}
						PED::SET_PED_CONFIG_FLAG(iVar1, 374, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 178, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 146, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 246, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 297, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 171, true);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iVar1, 7, 0, 1);
						__LIB_2__::func_23(uParam2, iVar1, 0);
						if (fParam8 >= 0f)
						{
							PED::SET_PED_SEEING_RANGE(iVar1, fParam8);
						}
					}
					else
					{
						__LIB_2__::func_20(uParam2, iVar1, 0);
					}
				}
			}
			iVar0++;
		}
		iVar3 = iVar2;
		while (iVar3 <= (*iParam0 - 1))
		{
			(*iParam0)[iVar2] = 0;
			iVar3++;
		}
		*iParam5 = iVar2;
		*iParam6 = 0;
	}
	*iParam6++;
}

void func_358(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, __LIB_7__::func_991(iParam0), iParam1, sParam2, bParam3, false, false);
	if (bParam4)
	{
		__LIB_8__::func_334(__LIB_7__::func_998(iParam0), sParam2, __LIB_7__::func_995(), __LIB_7__::func_994(iParam0), joaat("PLAYER_MENU"), 0, -1, -2, 0, 0, 0, 0, 1, 1, 0);
	}
}

void func_359(var uParam0)
{
	__LIB_8__::func_192(uParam0, &(uParam0->f_4));
}

void func_360(var uParam0)
{
	__LIB_8__::func_196(uParam0, &(uParam0->f_4));
}

void func_361(var uParam0)
{
	if (uParam0->f_3)
	{
		switch (*uParam0)
		{
			case 0:
				GRAPHICS::ANIMPOSTFX_STOP("MissionChoice");
				break;
			case 1:
				if (uParam0->f_2 != 0)
				{
					if (uParam0->f_2 != 3 && uParam0->f_1 == 0)
					{
						GRAPHICS::ANIMPOSTFX_STOP("MissionChoice");
						GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorChoiceGood");
					}
					else
					{
						GRAPHICS::_0xC5CB91D65852ED7E("MissionChoice");
					}
				}
				break;
			case 2:
				if (uParam0->f_2 != 0)
				{
					if (uParam0->f_2 != 2 && uParam0->f_1 == 0)
					{
						GRAPHICS::ANIMPOSTFX_STOP("MissionChoice");
						GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorChoiceBad");
					}
					else
					{
						GRAPHICS::_0xC5CB91D65852ED7E("MissionChoice");
					}
				}
				break;
		}
		if (__LIB_0__::func_139(uParam0->f_5))
		{
			__LIB_1__::func_748(&(uParam0->f_5), 1, 1);
		}
		if (__LIB_0__::func_139(uParam0->f_6))
		{
			__LIB_1__::func_748(&(uParam0->f_6), 1, 1);
		}
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_9 = 0;
		uParam0->f_11 = 0;
		uParam0->f_12 = 0;
		uParam0->f_10 = 0;
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_7 = "";
		uParam0->f_8 = "";
		uParam0->f_3 = 0;
		uParam0->f_4 = 0;
		uParam0->f_13 = -1;
		uParam0->f_2 = 0;
		HUD::_UIPROMPT_CLEAR_HORIZONTAL_ORIENTATION(uParam0->f_15);
		uParam0->f_15 = -1;
		AUDIO::_0x9428447DED71FC7E("player_decision_moment_scenes");
	}
}

int func_362(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	return __LIB_7__::func_917(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5);
}

int func_363(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *iParam0) && iVar4 < iParam2)
			{
				if (__LIB_8__::func_308(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!__LIB_1__::func_248(iVar2, iParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*iParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

void func_364(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !__LIB_0__::func_293(31))
	{
		return;
	}
	iVar0 = __LIB_0__::func_963(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = __LIB_0__::func_963(iParam0);
	if (__LIB_0__::func_594(iParam0) && __LIB_0__::func_595(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = __LIB_0__::func_995(fVar1, fParam1);
			if (fParam1 > IntToFloat(__LIB_0__::func_996(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						__LIB_1__::func_240(__LIB_0__::func_596(iParam0), 0);
					}
					__LIB_8__::func_335(iParam0, iVar2, iVar3);
					__LIB_0__::func_597(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

void func_365(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_8__::func_104(iParam0))
	{
		iVar0 = __LIB_7__::func_942(iParam0);
		__LIB_8__::func_82(iParam0, 1);
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				__LIB_2__::func_758(iVar0, 0);
				break;
			case 1:
				MAP::_0xD8C7162AB2E2AF45(-238119963);
				break;
		}
		if (bParam1)
		{
			__LIB_8__::func_314(iParam0, 0);
		}
	}
}

void func_366(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP8_ABIGAIL2X1_1"), iParam1);
			break;
		case 18:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_4"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_GT_BRAITHWAITES_1"), iParam1);
			break;
		case 20:
			__LIB_3__::func_904(joaat("JOURNAL_GT_BRAITHWAITES_2"), iParam1);
			break;
		case 2:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_4"), iParam1);
			break;
		case 23:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_3"), iParam1);
			__LIB_3__::func_755(1);
			break;
		case 16:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_2_TXT"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_3_TXT"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_4"), iParam1);
			break;
		case 59:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_2"), iParam1);
			if (__LIB_0__::func_343(146))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_TREASURE2_JN"), iParam1);
			}
			__LIB_3__::func_755(1);
			break;
		case 76:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP9_FINALE2_1"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9A"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_10B"), iParam1);
			}
			break;
		case 44:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG1_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG1_3"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4B"), iParam1);
			break;
		case 46:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG3_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG3_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_GANG3_4"), iParam1);
			break;
		case 17:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_3"), iParam1);
			break;
		case 19:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_GT_GRAYS_2"), iParam1);
			break;
		case 21:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_2"), iParam1);
			__LIB_3__::func_755(0);
			break;
		case 15:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1B"), iParam1);
			break;
		case 33:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_4"), iParam1);
			break;
		case 34:
			__LIB_3__::func_904(joaat("JOURNAL_GT_INDUSTRY_3"), iParam1);
			break;
		case 64:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP8_LARAMIE1_1"), iParam1);
			break;
		case 60:
			__LIB_3__::func_904(joaat("JOURNAL_CHAP8_PRONGHORN"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP8_MARSTON1_2"), iParam1);
			break;
		case 73:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP9_MARSTON6_1"), iParam1);
			break;
		case 74:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP9_MARSTON7_1"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_4A"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_5B"), iParam1);
			}
			break;
		case 8:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MARY1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MARY1_3"), iParam1);
			break;
		case 36:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MARY3_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2"), iParam1);
			if (Global_1357515 == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2B"), iParam1);
			}
			break;
		case 27:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB1_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB1_3"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB1_4"), iParam1);
			break;
		case 28:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB2_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB2_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB2_3"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB2_4"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_GT_MOB_2"), iParam1);
			break;
		case 29:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB3_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB3_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_GT_MOB_3"), iParam1);
			break;
		case 31:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB5_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB5_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB5_3"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MOB5_4"), iParam1);
			break;
		case 4:
			__LIB_3__::func_904(joaat("JOURNAL_CHAP2_HORSESHOE"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_3"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_5"), iParam1);
			__LIB_3__::func_755(0);
			break;
		case 6:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2"), iParam1);
			if (Global_1357515 == -1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_A"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_B"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_C"), iParam1);
			}
			break;
		case 25:
			__LIB_3__::func_904(joaat("JOURNAL_GT_MUDTOWN_3B"), iParam1);
			break;
		case 24:
			if (Global_1357515 == -1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_GT_MUDTWON_5_5000"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_GT_MUDTWON_5_7500"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_GT_MUDTWON_5_10000"), iParam1);
			}
			break;
		case 48:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_1"), iParam1);
			if (Global_1357515 == -1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2A"), iParam1);
			}
			if (__LIB_1__::func_151(51))
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2B"), iParam1);
			}
			break;
		case 49:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_1"), iParam1);
			if (Global_1357515 == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2B"), iParam1);
			}
			else if (Global_1357515 == 2)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2C"), iParam1);
			}
			break;
		case 58:
			__LIB_3__::func_904(joaat("JOURNAL_GT_NATIVE_3"), iParam1);
			break;
		case 50:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON1_1"), iParam1);
			break;
		case 52:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2B"), iParam1);
			if (bParam2 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A2"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3B"), iParam1);
			}
			break;
		case 32:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_ODRISCOLL4_1"), iParam1);
			break;
		case 47:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_MARY4_1"), iParam1);
			break;
		case 69:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP9_SADIE2_1"), iParam1);
			if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_2B"), iParam1);
			}
			break;
		case 70:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP9_SADIE3"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_7A"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8B"), iParam1);
			}
			break;
		case 71:
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8A"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9B"), iParam1);
			}
			break;
		case 37:
			__LIB_3__::func_904(joaat("JOURNAL_GT_SAINT_DENIS_1"), iParam1);
			break;
		case 9:
			if (Global_1357515 == -1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1B"), iParam1);
			}
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_2"), iParam1);
			break;
		case 13:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_3"), iParam1);
			break;
		case 53:
			__LIB_3__::func_904(joaat("JOURNAL_GT_CORNWALL_1"), iParam1);
			break;
		case 54:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY1_1"), iParam1);
			break;
		case 56:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_3"), iParam1);
			break;
		case 57:
			__LIB_3__::func_904(joaat("JOURNAL_GT_TRAIN_ROBBERY_4"), iParam1);
			break;
		case 22:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_2"), iParam1);
			break;
		case 12:
			__LIB_3__::func_904(joaat("JOURNAL_GT_UTOPIA_2"), iParam1);
			break;
		case 0:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_3"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_5"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_6"), iParam1);
			break;
		case 1:
			__LIB_3__::func_755(1);
			break;
		case 3:
			if (__LIB_0__::func_26())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4")))
				{
					__LIB_3__::func_904(joaat("JOURNAL_GT_WINTER_4_SE"), iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4_SE")))
			{
				__LIB_3__::func_904(joaat("JOURNAL_GT_WINTER_4"), iParam1);
			}
			break;
		default:
			break;
	}
}

void func_367(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_3"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_4"), iParam1);
			break;
		case 1:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL2X2_1"), iParam1);
			break;
		case 2:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL3_1"), iParam1);
			break;
		case 9:
			__LIB_3__::func_904(joaat("JOURNAL_CHAP9_BEECHERSHOPE"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP9_BEECHERS1X3_1"), iParam1);
			if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1A"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1B"), iParam1);
			}
			break;
		case 22:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_CALDERON1X1_1"), iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_CALLOWAY_1_AR"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_CALLOWAY_2_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_CALLOWAY_1_JN"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_CALLOWAY_2_JN"), iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_CALLOWAY_3_1_AR"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_CALLOWAY_3_2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(26))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_CALLOWAY_3_JN_B1"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_CALLOWAY_3_JN_B2"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_CALLOWAY_3_JN_A"), iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_AR"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_AR"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_AR"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_AR"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_AR"), iParam1);
				}
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_2_JN"), iParam1);
				if (Global_1357515 == -1)
				{
					__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_JN"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_JN"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_JN"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_JN"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_JN"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_JN"), iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_JN"), iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_JN"), iParam1);
			}
			break;
		case 37:
			__LIB_3__::func_904(joaat("JOURNAL_GT_COACH_ROB_RSC"), iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_CRKPT1_1_AR"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_CRKPT1_2_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_CRKPT1_1_JN"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_CRKPT1_1_JN_B"), iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_CRKPT2_1_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_CRKPT2_1_JN"), iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_CRKPT3_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(54))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_CRKPT3_1B_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_CRKPT3_1A_JN"), iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_CIG1_1_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_CIG1_1_JN"), iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_DINO1_1_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_DINO1_1_JN"), iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_DINO2_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(39))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_DINO2_1_B_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_DINO2_1_A_JN"), iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (__LIB_0__::func_895(Global_1835011[33 /*74*/].f_1) == 1)
				{
					__LIB_3__::func_904(joaat("JOURNAL_RC_EXOTIC1_1B_AR_A"), iParam1);
				}
				else
				{
					__LIB_3__::func_904(joaat("JOURNAL_RC_EXOTIC1_1A_AR_A"), iParam1);
				}
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_EXOTIC1_1_JN"), iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_EXOTIC3_1_AR_A"), iParam1);
			}
			else if (__LIB_0__::func_343(43))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_EXOTIC3_1_JN_B"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_EXOTIC3_1_JN_A"), iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_FISH1_1_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_FISH1_1_JN"), iParam1);
			}
			break;
		case 42:
			if (__LIB_0__::func_343(41))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_FISH2_1_JN_B"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_FISH2_1_JN_A"), iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_ROCKCARV1_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_ROCKCARV1_JN"), iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_ROCKCARV2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(49))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_ROCKCARV2_JN_B"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_ROCKCARV2_JN_B2"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_ROCKCARV2_JN_A"), iParam1);
			}
			break;
		case 51:
			__LIB_3__::func_904(joaat("JOURNAL_RC_TAX1_1_JN"), iParam1);
			break;
		case 58:
			if (__LIB_1__::func_25(Global_1347702[23 /*49*/].f_15, 1))
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1B"), iParam1);
			}
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_3"), iParam1);
			break;
		case 59:
			__LIB_3__::func_904(joaat("JOURNAL_CHAP2_DOWNES1_1"), iParam1);
			break;
		case 62:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_DOWNES2_1"), iParam1);
			break;
		case 63:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_ODRISCOLL2_2B"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_GT_ODRISCOLL_2"), iParam1);
			break;
		case 65:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_3"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_4"), iParam1);
			break;
		case 66:
			__LIB_3__::func_904(joaat("JOURNAL_CHAP3_CLEMENS"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_3"), iParam1);
			__LIB_3__::func_755(1);
			break;
		case 67:
			__LIB_3__::func_904(joaat("JOURNAL_CHAP4_SHADYBELLE"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_2"), iParam1);
			break;
		case 68:
			__LIB_3__::func_904(joaat("JOURNAL_CHAP6_BEAVERHOLLOW"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2B"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_3"), iParam1);
			__LIB_3__::func_755(0);
			break;
		case 70:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_EDITHDOWNE2_1"), iParam1);
			break;
		case 71:
			__LIB_3__::func_904(joaat("JOURNAL_RC_MILLER1_JN"), iParam1);
			break;
		case 73:
			__LIB_3__::func_904(joaat("JOURNAL_RC_MILLER3_JN"), iParam1);
			break;
		case 75:
			__LIB_3__::func_904(joaat("JOURNAL_RC_MILLER4_JN"), iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_FMA1_1_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_FMA1_1_JN"), iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_FMA3_1_AR"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_FMA3_2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(78))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_FMA3_2_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_FMA3_1_JN"), iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_FMA4_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(79))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_FMA4_2_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_FMA4_1_JN"), iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_GUNSLINGER1_1_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_GUNSLINGER1_1_JN"), iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_GUNSLINGER2_1_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_GUNSLINGER2_1_JN"), iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_GUNSLINGER3_1_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_GUNSLINGER3_1_JN"), iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_GUNSLINGER5_1_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_GUNSLINGER5_1_JN"), iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_HKK1_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_HKK1_JN"), iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_HKK4_AR"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_HKK4B_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_HKK4_A_JN"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_HKK4_A2_JN"), iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_HKK5_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_HKK5_JN"), iParam1);
			}
			break;
		case 94:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_1"), iParam1);
			if (Global_1357515 == -1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2A"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2B"), iParam1);
			}
			__LIB_3__::func_904(joaat("JOURNAL_GT_HOME_ROB"), iParam1);
			break;
		case 99:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_MARY3X1_1"), iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MASON1_1_AR"), iParam1);
				if (Global_1357515 == -1)
				{
					__LIB_3__::func_904(joaat("JOURNAL_RC_MASON1_2_AR_B"), iParam1);
				}
				else
				{
					__LIB_3__::func_904(joaat("JOURNAL_RC_MASON1_2_AR_A"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MASON1_1B_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MASON1_1A_JN"), iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MASON2_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(101))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MASON2_1B_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MASON2_1A_JN"), iParam1);
			}
			break;
		case 103:
			__LIB_3__::func_904(joaat("JOURNAL_RC_MASON3_1_AR"), iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MASON4_1_AR"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_MASON4_2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(103))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MASON4_1B_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MASON4_1A_JN"), iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MASON5_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(104))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MASON5_1B_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MASON5_1A_JN"), iParam1);
			}
			break;
		case 108:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_MONROE_1"), iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MAYOR1_AR"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_MAYOR1_AR_B"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MAYOR1_JN"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_MAYOR1B_JN"), iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MAYOR2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(109))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MAYOR2B_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MAYOR2A_JN"), iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 0)
				{
					__LIB_3__::func_904(joaat("JOURNAL_RC_MAYOR3A_AR"), iParam1);
				}
				else
				{
					__LIB_3__::func_904(joaat("JOURNAL_RC_MAYOR3B_AR"), iParam1);
				}
			}
			else if (__LIB_0__::func_343(110))
			{
				if (Global_1357515 == 0)
				{
					__LIB_3__::func_904(joaat("JOURNAL_RC_MAYOR3C_JN"), iParam1);
				}
				else
				{
					__LIB_3__::func_904(joaat("JOURNAL_RC_MAYOR3D_JN"), iParam1);
					__LIB_3__::func_904(joaat("JOURNAL_RC_MAYOR3D_2_JN"), iParam1);
				}
			}
			else if (Global_1357515 == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MAYOR3A_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_MAYOR3B_JN"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_MAYOR3B_2_JN"), iParam1);
			}
			break;
		case 115:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_1"), iParam1);
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_2"), iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_ODDF1_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_ODDF1_JN"), iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_ODDF2_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_ODDF2_JN"), iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_OHBRO1_1_AR"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_OHBRO1_2_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_OHBRO1_1_JN"), iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_OHBRO2_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(117))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_OHBRO2_1B_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_OHBRO2_1A_JN"), iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_OHBRO3_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(118))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_OHBRO3_2B_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_OHBRO3_2A_JN"), iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_PW1_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_PW1_JN"), iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_PW3_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(121))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_PW3B_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_PW3A_JN"), iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_PW4_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(122))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_PW4B_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_PW4A_JN"), iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_PW5_AR"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_PW5B_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_PW5_JN"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_PW5B_JN"), iParam1);
			}
			break;
		case 127:
			__LIB_3__::func_904(joaat("JOURNAL_RC_RTL1_AR"), iParam1);
			break;
		case 129:
			__LIB_3__::func_904(joaat("JOURNAL_RC_RTL3_AR"), iParam1);
			break;
		case 131:
			__LIB_3__::func_904(joaat("JOURNAL_RC_RTL5_AR"), iParam1);
			break;
		case 133:
			__LIB_3__::func_904(joaat("JOURNAL_RC_RTL7_AR"), iParam1);
			break;
		case 134:
			__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP3_SADIE1_1"), iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					__LIB_3__::func_904(joaat("JOURNAL_RC_KILLER4A_AR"), iParam1);
				}
				else
				{
					__LIB_3__::func_904(joaat("JOURNAL_RC_KILLER4B_AR"), iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER1_AR")) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER2_AR"))) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER3_AR")))
			{
				if (Global_1357515 == -1)
				{
					__LIB_3__::func_904(joaat("JOURNAL_RC_KILLER4A_JN"), iParam1);
				}
				else
				{
					__LIB_3__::func_904(joaat("JOURNAL_RC_KILLER4B_JN"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_KILLER4C_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_KILLER4D_JN"), iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_SLVC1_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_SLVC1_JN"), iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_SLVC2_AR"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_SLVC3A_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(136))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_SLVC2B_JN"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_SLVC3C_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_SLVC2A_JN"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_RC_SLVC3A_JN"), iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3A"), iParam1);
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3B"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3C"), iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 1)
				{
					__LIB_3__::func_904(joaat("JOURNAL_RC_TREASURE1A_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					__LIB_3__::func_904(joaat("JOURNAL_RC_TREASURE1B_AR"), iParam1);
				}
			}
			else if (Global_1357515 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_TREASURE1A_JN"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_TREASURE1B_JN"), iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_WARVET1_AR"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_WARVET1_JN"), iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_WARVET2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(147))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_WARVET2B_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_WARVET2A_JN"), iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_WARVET3_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(148))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_WARVET3B_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_WARVET3A_JN"), iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_WARVET4_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(149))
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_WARVET4B_JN"), iParam1);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RC_WARVET4A_JN"), iParam1);
			}
			break;
		default:
			break;
	}
}

void func_368()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		__LIB_4__::func_9();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_1__::func_825(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_1__::func_825(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_369()
{
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2104553981, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1302594744, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1889808927, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1197006729, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1312423920, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(461198205, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-975072085, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1227004918, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1524907897, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-401577020, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1579987, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-685820122, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1884117487, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1637006458, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1165885976, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-632511363, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-130631158, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1186144424, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1838235148, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-828491182, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(330482790, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1103995043, false);
}

void func_370(int iParam0)
{
	iLocal_16 = (iLocal_16 || iParam0);
}

void func_371(int iParam0)
{
	iLocal_17 = (iLocal_17 - (iLocal_17 && iParam0));
}

bool func_372(int iParam0)
{
	return (iLocal_17 && iParam0) != 0;
}

void func_373(int iParam0)
{
	iLocal_17 = (iLocal_17 || iParam0);
}

bool func_374(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, true, true))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_NEG")))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (DECORATOR::DECOR_EXIST_ON(iVar1, "interactNeg"))
				{
					iVar2 = DECORATOR::DECOR_GET_INT(iVar1, "interactNeg");
				}
				iVar2++;
				*iParam0++;
				DECORATOR::DECOR_SET_INT(iVar1, "interactNeg", iVar2);
				if (iVar2 >= iParam1)
				{
					PED::SET_PED_CONFIG_FLAG(iVar1, 330, true);
				}
				return true;
			}
		}
	}
	return false;
}

void func_375()
{
	PLAYER::_0xC6366A585659D15C(PLAYER::GET_PLAYER_INDEX(), "");
	PLAYER::_0x98CD760DE43B612E(PLAYER::GET_PLAYER_INDEX(), "");
	PLAYER::_0xC177C827CEFC0AA4(PLAYER::GET_PLAYER_INDEX(), "");
	PLAYER::_0xBD96185264DDAAEA(PLAYER::GET_PLAYER_INDEX(), "");
	PED::_0x8AF46E5159A5B620(Global_35, 0);
}

void func_376(int iParam0)
{
	iLocal_18 = (iLocal_18 || iParam0);
}

bool func_377(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(*iParam0, 11, false))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	return true;
}

int func_378()
{
	return joaat("WORLD_HUMAN_THIEF_SEARCHING_TREE");
}

bool func_379(int iParam0)
{
	return (iLocal_18 && iParam0) != 0;
}

void func_380(int iParam0)
{
	iLocal_16 = (iLocal_16 - (iLocal_16 && iParam0));
}

void func_381(int iParam0)
{
	iLocal_15 = (iLocal_15 || iParam0);
}

void func_382(int iParam0)
{
	iLocal_15 = (iLocal_15 - (iLocal_15 && iParam0));
}

char* func_383()
{
	switch (iLocal_14)
	{
		case 1:
			return "EventAreas/CentralUnion/RCAMP_Foreman_stage1";
		case 2:
			return "EventAreas/CentralUnion/RCAMP_Foreman_stage2";
		case 3:
			return "EventAreas/CentralUnion/RCAMP_Foreman_stage3";
	}
	return "";
}

int func_384(int iParam0)
{
	switch (iLocal_14)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 835;
				case 1:
					return 838;
				case 2:
					return 842;
				case 3:
					return 846;
				case 4:
					return 850;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 835;
				case 1:
					return 838;
				case 2:
					return 842;
				case 3:
					return 846;
				case 4:
					return 850;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 835;
				case 1:
					return 838;
				case 2:
					return 841;
				case 3:
					return 844;
				case 4:
					return 847;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_385(int iParam0)
{
	switch (iLocal_14)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 837;
				case 1:
					return 841;
				case 2:
					return 845;
				case 3:
					return 849;
				case 4:
					return 853;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 837;
				case 1:
					return 841;
				case 2:
					return 845;
				case 3:
					return 849;
				case 4:
					return 853;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 837;
				case 1:
					return 840;
				case 2:
					return 843;
				case 3:
					return 846;
				case 4:
					return 849;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_386(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "bOnBreak") && DECORATOR::DECOR_GET_BOOL(iParam0, "bOnBreak"))
	{
		return true;
	}
	return false;
}

void func_387()
{
	AUDIO::_0x531A78D6BF27014B("Central_Union_Railroad_Camp_Sounds");
}

char* func_388()
{
	return "TRACKS";
}

char* func_389()
{
	return "RCMPAUD";
}

bool func_390()
{
	return AUDIO::_0xD9130842D7226045("Central_Union_Railroad_Camp_Sounds", 0);
}

void func_391()
{
	switch (iLocal_14)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

Vector3 func_392()
{
	return 2204.943f, 641.5062f, 95.6109f;
}

Vector3 func_393()
{
	return 1945.817f, 948.7132f, 115.6541f;
}

Vector3 func_394()
{
	switch (iLocal_14)
	{
		case 1:
			return 2202.957f, 639.7081f, 95.81098f;
		case 2:
			return 2182.353f, 778.0294f, 106.1807f;
		case 3:
			return 1944.878f, 948.011f, 115.262f;
		default:
			break;
	}
	return 2202.158f, 639.5539f, 96.1934f;
}

Vector3 func_395()
{
	return 2177.45f, 879.17f, 112.71f;
}

void func_396(int iParam0)
{
	iLocal_18 = (iLocal_18 - (iLocal_18 && iParam0));
}

void func_397(int iParam0)
{
	iLocal_19 = (iLocal_19 || iParam0);
}

bool func_398()
{
	if (iLocal_14 == 2)
	{
		return false;
	}
	return true;
}

int func_399(int iParam0)
{
	int iVar0;
	iVar0 = (5 + iParam0);
	return iVar0;
}

int func_400(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = (iParam0 + iParam1 * 5);
	return iVar0;
}

void func_401(int iParam0)
{
	iLocal_19 = (iLocal_19 - (iLocal_19 && iParam0));
}

Vector3 func_402()
{
	return 0f, 0f, 154.04f;
}

char* func_403(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (iLocal_14 == 1)
			{
				return "PBL_idle";
			}
			else if (iLocal_14 == 2)
			{
				return "PBL_goons_flee";
			}
			else if (iLocal_14 == 3)
			{
				return "PBL_MAIN";
			}
			break;
		case 1:
			if (iLocal_14 == 1)
			{
				return "PBL_return_no_luck";
			}
			break;
		case 2:
			if (iLocal_14 == 1)
			{
				return "PBL_get_money_face_tree";
			}
			else if (iLocal_14 == 2)
			{
				return "PBL_proposition";
			}
			break;
		case 3:
			if (iLocal_14 == 1)
			{
				return "BEG_A";
			}
			break;
		case 4:
			return "pl_ILO";
		case 5:
			return "PBL_ENTER";
	}
	return "";
}

Vector3 func_404(int iParam0, int iParam1, bool bParam2)
{
	switch (iLocal_14)
	{
		case 1:
			if (!bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 2224.7f, 668.49f, 94.38f;
							case 1:
								return 2224.5f, 668.93f, 94.44f;
							case 2:
								return 2224.32f, 669.36f, 94.5f;
							case 3:
								return 2224.11f, 669.86f, 94.58f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 2226.41f, 669.62f, 94.42f;
							case 1:
								return 2226.6f, 669.19f, 94.35f;
							case 2:
								return 2226.81f, 668.71f, 94.28f;
							case 3:
								return 2227f, 668.28f, 94.21f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 2222.03f, 674.89f, 95.3f;
							case 1:
								return 2221.85f, 675.36f, 95.37f;
							case 2:
								return 2221.67f, 675.84f, 95.44f;
							case 3:
								return 2221.5f, 676.29f, 95.5f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 2223.07f, 677.82f, 95.63f;
							case 1:
								return 2223.25f, 677.35f, 95.56f;
							case 2:
								return 2223.42f, 676.9f, 95.49f;
							case 3:
								return 2223.59f, 676.45f, 95.43f;
							default:
								break;
						}
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 2208.25f, 715.87f, 100.58f;
							case 1:
								return 2208.11f, 716.37f, 100.64f;
							case 2:
								return 2207.96f, 716.89f, 100.7f;
							case 3:
								return 2207.82f, 717.36f, 100.75f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 2209.38f, 719.23f, 100.89f;
							case 1:
								return 2209.51f, 718.75f, 100.83f;
							case 2:
								return 2209.65f, 718.27f, 100.78f;
							case 3:
								return 2209.78f, 717.8f, 100.73f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 2207.82f, 717.36f, 100.75f;
							case 1:
								return 2206.17f, 723.05f, 101.36f;
							case 2:
								return 2206.04f, 723.53f, 101.41f;
							case 3:
								return 2205.91f, 724.01f, 101.46f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 2207.76f, 724.89f, 101.5f;
							case 1:
								return 2207.88f, 724.43f, 101.45f;
							case 2:
								return 2208.02f, 723.94f, 101.4f;
							case 3:
								return 2208.15f, 723.47f, 101.35f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 2:
			if (bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 2184.33f, 858.84f, 111.37f;
							case 1:
								return 2184.21f, 859.3f, 111.4f;
							case 2:
								return 2184.08f, 859.79f, 111.43f;
							case 3:
								return 2183.96f, 860.25f, 111.47f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 2185.94f, 860.67f, 111.45f;
							case 1:
								return 2186.07f, 860.19f, 111.42f;
							case 2:
								return 2186.2f, 859.7f, 111.39f;
							case 3:
								return 2186.33f, 859.22f, 111.35f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 2182.63f, 864.45f, 111.76f;
							case 1:
								return 2182.48f, 864.9f, 111.79f;
							case 2:
								return 2182.33f, 865.38f, 111.83f;
							case 3:
								return 2182.18f, 865.84f, 111.86f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 2183.96f, 866.86f, 111.88f;
							case 1:
								return 2183.96f, 866.86f, 111.88f;
							case 2:
								return 2184.28f, 865.93f, 111.82f;
							case 3:
								return 2184.44f, 865.45f, 111.78f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return 1927.83f, 925.46f, 115.88f;
						case 1:
							return 1927.37f, 925.29f, 115.87f;
						case 2:
							return 1926.9f, 925.11f, 115.86f;
						case 3:
							return 1926.44f, 924.94f, 115.84f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return 1926.33f, 927.06f, 115.85f;
						case 1:
							return 1926.79f, 927.23f, 115.86f;
						case 2:
							return 1927.24f, 927.39f, 115.88f;
						case 3:
							return 1927.7f, 927.56f, 115.89f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return 1920.91f, 922.81f, 115.68f;
						case 1:
							return 1920.45f, 922.63f, 115.66f;
						case 2:
							return 1919.97f, 922.45f, 115.65f;
						case 3:
							return 1919.52f, 922.27f, 115.63f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 1919.35f, 924.38f, 115.65f;
						case 1:
							return 1919.83f, 924.56f, 115.66f;
						case 2:
							return 1920.29f, 924.74f, 115.68f;
						case 3:
							return 1920.73f, 924.91f, 115.69f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_405(int iParam0, int iParam1, bool bParam2)
{
	switch (iLocal_14)
	{
		case 1:
			if (!bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 8.1f, -20.32f, 19.92f;
							case 1:
								return 8.1f, -20.32f, 19.92f;
							case 2:
								return 8.1f, -20.32f, 19.92f;
							case 3:
								return 8.1f, -20.32f, 19.92f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return -8.42f, -20.31f, -153.25f;
							case 1:
								return -8.42f, -20.31f, -153.25f;
							case 2:
								return -8.42f, -20.31f, -153.25f;
							case 3:
								return -8.42f, -20.31f, -153.25f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 8.09f, -19.97f, 17.75f;
							case 1:
								return 8.09f, -19.97f, 17.75f;
							case 2:
								return 8.09f, -19.97f, 17.75f;
							case 3:
								return 8.09f, -19.97f, 17.75f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return -8.41f, -20.68f, -156.23f;
							case 1:
								return -8.41f, -20.68f, -156.23f;
							case 2:
								return -8.41f, -20.68f, -156.23f;
							case 3:
								return -8.41f, -20.68f, -156.23f;
							default:
								break;
						}
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 6.45f, -19.67f, 13.6f;
							case 1:
								return 6.45f, -19.67f, 13.6f;
							case 2:
								return 6.45f, -19.67f, 13.6f;
							case 3:
								return 6.45f, -19.67f, 13.6f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return -6.31f, -20.07f, -162.03f;
							case 1:
								return -6.31f, -20.07f, -162.03f;
							case 2:
								return -6.31f, -20.07f, -162.03f;
							case 3:
								return -6.31f, -20.07f, -162.03f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 6.45f, -19.67f, 13.6f;
							case 1:
								return 6.45f, -19.67f, 13.6f;
							case 2:
								return 6.45f, -19.67f, 13.6f;
							case 3:
								return 6.45f, -19.67f, 13.6f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return -6.21f, -20.07f, -162.67f;
							case 1:
								return -6.21f, -20.07f, -162.67f;
							case 2:
								return -6.21f, -20.07f, -162.67f;
							case 3:
								return -6.21f, -20.07f, -162.67f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 2:
			if (bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 4.13f, -20.5f, 13.36f;
							case 1:
								return 4.13f, -20.5f, 13.36f;
							case 2:
								return 4.13f, -20.5f, 13.36f;
							case 3:
								return 4.13f, -20.5f, 13.36f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return -4.21f, -19.4f, -164.05f;
							case 1:
								return -4.21f, -19.4f, -164.05f;
							case 2:
								return -4.21f, -19.4f, -164.05f;
							case 3:
								return -4.21f, -19.4f, -164.05f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 4.09f, -20.76f, 16.73f;
							case 1:
								return 4.09f, -20.76f, 16.73f;
							case 2:
								return 4.09f, -20.76f, 16.73f;
							case 3:
								return 4.09f, -20.76f, 16.73f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return -3.94f, -19.13f, -160.12f;
							case 1:
								return -3.94f, -19.13f, -160.12f;
							case 2:
								return -3.94f, -19.13f, -160.12f;
							case 3:
								return -3.94f, -19.13f, -160.12f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return -1.67f, -20.05f, 110.69f;
						case 1:
							return -1.67f, -20.05f, 110.69f;
						case 2:
							return -1.67f, -20.05f, 110.69f;
						case 3:
							return -1.67f, -20.05f, 110.69f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return 1.46f, -20.16f, -70.63f;
						case 1:
							return 1.46f, -20.16f, -70.63f;
						case 2:
							return 1.46f, -20.16f, -70.63f;
						case 3:
							return 1.46f, -20.16f, -70.63f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return -1.99f, -20.04f, 111.69f;
						case 1:
							return -1.99f, -20.04f, 111.69f;
						case 2:
							return -1.99f, -20.04f, 111.69f;
						case 3:
							return -1.99f, -20.04f, 111.69f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 1.78f, -20.16f, -69.74f;
						case 1:
							return 1.78f, -20.16f, -69.74f;
						case 2:
							return 1.78f, -20.16f, -69.74f;
						case 3:
							return 1.78f, -20.16f, -69.74f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_406(int iParam0)
{
	return (iLocal_15 && iParam0) != 0;
}

Vector3 func_407()
{
	return 1915.212f, 921.5867f, 115.5382f;
}

int func_408()
{
	return joaat("P_CHAIR06X");
}

int func_409()
{
	return joaat("P_CHAIR05X");
}

Vector3 func_410()
{
	return 2203.07f, 637.9951f, 95.83443f;
}

float func_411()
{
	return 168.32f;
}

Vector3 func_412()
{
	return 2178.137f, 877.66f, 112.5392f;
}

Vector3 func_413(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		if (bParam1)
		{
			return 2182.52f, 776.33f, 106.18f;
		}
		else
		{
			return 2182.52f, 776.33f, 106.18f;
		}
	}
	return 2182.18f, 776.54f, 106.17f;
}

float func_414(bool bParam0)
{
	if (!bParam0)
	{
		return 171.79f;
	}
	return -59.3f;
}

float func_415()
{
	return 58.8f;
}

int func_416(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		return joaat("SC_BOUNTY_HUNTER_SHERIFF");
	}
	if (bParam1)
	{
		return joaat("PROP_HUMAN_SEAT_CHAIR_PORCH");
	}
	return joaat("PROP_HUMAN_SEAT_BENCH_PORCH");
}

bool func_417(int iParam0)
{
	switch (iParam0)
	{
		case 835:
		case 836:
		case 837:
			return true;
		default:
			break;
	}
	return false;
}

void func_418(var uParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (!__LIB_8__::func_348(uParam0, sParam1))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, sParam1, bParam2);
}

int func_419(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 0;
	}
	return ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, sParam1);
}

char[] func_420()
{
	return "RCMP_HANG";
}

char* func_421(bool bParam0)
{
	if (!bParam0)
	{
		return "TRACKS_FM_UNK";
	}
	return "TRACKS_BLIP_FM";
}

void func_422(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	vector3 vVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		if (iParam1 < 0)
		{
			if (!bParam5)
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iParam0, vVar0, 1.5f, bParam3, bParam6, false, false, false);
			}
			else
			{
				TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(iParam0, vVar0, 1.5f, bParam3, false, false, false);
			}
		}
		else
		{
			TASK::TASK_PLAY_ANIM(iParam0, (*uParam2)[iParam1 /*2*/], (uParam2[iParam1 /*2*/])->f_1, 8f, -8f, bParam3, iParam4, 0f, false, 0, false, 0, false);
		}
	}
}

Vector3 func_423()
{
	return 2259.499f, 784.637f, 94.989f;
}

Vector3 func_424()
{
	return 2202.818f, 638.3447f, 95.81f;
}

float func_425()
{
	return -57.54f;
}

Vector3 func_426()
{
	return 2202.952f, 638.4139f, 96.3099f;
}

float func_427()
{
	return 122.46f;
}

void func_428(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		PED::_0xC163DAC52AC975D3(*uParam0, 0);
		PED::_0xC163DAC52AC975D3(*uParam0, 6);
		PED::_0xC163DAC52AC975D3(*uParam0, 1);
		PED::_0xC163DAC52AC975D3(*uParam0, 4);
		PED::_0xC163DAC52AC975D3(*uParam0, 5);
	}
	else
	{
		PED::_0xBBF6D1D07C02D00A(*uParam0, 0);
		PED::_0xBBF6D1D07C02D00A(*uParam0, 6);
		PED::_0xBBF6D1D07C02D00A(*uParam0, 1);
		PED::_0xBBF6D1D07C02D00A(*uParam0, 4);
		PED::_0xBBF6D1D07C02D00A(*uParam0, 5);
	}
}

int func_429(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		return joaat("SCRIPT_COMMON_SHERIFF_SIT_WRITING");
	}
	if (bParam1)
	{
		return joaat("PROP_HUMAN_SEAT_CHAIR_PORCH_SMOKING_MALE_B");
	}
	return joaat("PROP_HUMAN_SEAT_BENCH_PORCH_SMOKING_MALE_A");
}

Vector3 func_430()
{
	return 2206.506f, 642.7476f, 95.51965f;
}

struct<4> func_431()
{
	char cVar0[32];
	StringCopy(&cVar0, "RCMP_INT", 32);
	return cVar0;
}

Vector3 func_432(var uParam0, char* sParam1, char* sParam2)
{
	struct<7> Var0;
	bool bVar12;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(*uParam0, sParam1, &Var0, bVar12, sParam2, 2))
	{
		return Var0.f_6;
	}
	return 0f, 0f, 0f;
}

float func_433(var uParam0, char* sParam1, char* sParam2)
{
	struct<10> Var0;
	bool bVar12;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 40000f;
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(*uParam0, sParam1, &Var0, bVar12, sParam2, 2))
	{
		return Var0.f_9.f_2;
	}
	return 40000f;
}

char[] func_434(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BEG_B";
		case 1:
			return "BEG_C";
		default:
			break;
	}
	return "BEG_A";
}

int func_435(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 0;
	}
	return ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, sParam1);
}

char[] func_436(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RCMP_INT_LO_B";
		case 1:
			return "RCMP_INT_LO_C";
		default:
			break;
	}
	return "RCMP_INT_LO_A";
}

Vector3 func_437(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2210.748f, 696.9096f, 97.3888f;
		case 1:
			return 2221.975f, 702.6529f, 92.6824f;
		case 2:
			return 2231.502f, 719.36f, 91.5693f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_438()
{
	return 2259.779f, 786.6265f, 96.2632f;
}

float func_439()
{
	return 179.39f;
}

void func_440(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 256;
	iParam0->f_4 = 0;
	__LIB_0__::func_37(&(iParam0->f_5));
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_11 = { 0f, 0f, 0f };
	iParam0->f_14 = { 0f, 0f, 0f };
	iParam0->f_17 = 0.25f;
	iParam0->f_18 = 0.25f;
	iParam0->f_19 = 40000f;
	iParam0->f_20 = 10f;
	iParam0->f_21 = 1f;
	iParam0->f_22 = 0f;
	iParam0->f_23 = 0;
	iParam0->f_25 = 0;
	StringCopy(&(iParam0->f_30), "", 24);
	StringCopy(&(iParam0->f_26), "", 32);
}

int func_441()
{
	return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
}

int func_442()
{
	return joaat("WORLD_HUMAN_LEAN_BACK_WALL_MALE_D");
}

Vector3 func_443(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		return 2182.512f, 776.3961f, 106.6537f;
	}
	if (!bParam1)
	{
		return 2182.512f, 776.396f, 106.6537f;
	}
	return 2182.194f, 776.54f, 106.6718f;
}

float func_444(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		return -8.21f;
	}
	if (!bParam1)
	{
		return -8.21f;
	}
	return 120.57f;
}

char* func_445(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		return "SCRIPT_COMMON_SHERIFF_SIT_WRITING";
	}
	if (bParam1)
	{
		return "PROP_HUMAN_SEAT_CHAIR_PORCH_SMOKING_MALE_B";
	}
	return "PROP_HUMAN_SEAT_BENCH_PORCH_SMOKING_MALE_A";
}

char* func_446(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (!bParam1)
			{
				return "RCMP_F01CS";
			}
			else
			{
				return "RCMP_F01MS";
			}
			break;
		case 1:
			return "RCMP_F01CSB";
		case 2:
			return "RCMP_F01CSC";
	}
	return "RCMP_F01CS";
}

Vector3 func_447(bool bParam0)
{
	if (!bParam0)
	{
		return 2184.668f, 778.6125f, 107.1735f;
	}
	return 2186.378f, 779.5057f, 106.1256f;
}

Vector3 func_448()
{
	return 2186.492f, 879.1049f, 113.4622f;
}

Vector3 func_449()
{
	return 1.6621f, 0f, 92.7695f;
}

float func_450()
{
	return 30.0251f;
}

bool func_451(var uParam0)
{
	if (uParam0->f_1458)
	{
		return false;
	}
	return uParam0->f_1457;
}

void func_452(var uParam0, var uParam1)
{
	VOLUME::_SET_VOLUME_COORDS(*uParam0, VOLUME::_GET_VOLUME_COORDS(*uParam1));
	VOLUME::_SET_VOLUME_ROTATION(*uParam0, VOLUME::_GET_VOLUME_ROTATION(*uParam1));
	VOLUME::_SET_VOLUME_SCALE(*uParam0, VOLUME::_GET_VOLUME_SCALE(*uParam1));
}

struct<4> func_453()
{
	char cVar0[32];
	StringCopy(&cVar0, "RCMP_MCS1", 32);
	return cVar0;
}

bool func_454()
{
	if (((__LIB_0__::func_163(Global_35, 242628503) || __LIB_0__::func_163(Global_35, 501393341)) || __LIB_0__::func_163(Global_35, 1553520516)) || __LIB_0__::func_163(Global_35, 1920417248))
	{
		return true;
	}
	return false;
}

bool func_455(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (!__LIB_8__::func_6(uParam0, sParam1))
	{
		return false;
	}
	return ANIMSCENE::_0xB89FCFF19DAFFF28(*uParam0, sParam1);
}

Vector3 func_456(int iParam0, int iParam1, bool bParam2)
{
	switch (iLocal_14)
	{
		case 1:
			if (!bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 2225.502f, 669.187f, 94.464f;
							case 1:
								return 2225.31f, 669.622f, 94.527f;
							case 2:
								return 2225.123f, 670.053f, 94.59f;
							case 3:
								return 2224.915f, 670.549f, 94.662f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 2225.624f, 668.897f, 94.412f;
							case 1:
								return 2225.808f, 668.47f, 94.347f;
							case 2:
								return 2226.021f, 667.989f, 94.274f;
							case 3:
								return 2226.212f, 667.557f, 94.208f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 2222.858f, 675.553f, 95.383f;
							case 1:
								return 2222.681f, 676.026f, 95.45f;
							case 2:
								return 2222.503f, 676.502f, 95.518f;
							case 3:
								return 2222.33f, 676.95f, 95.582f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 2222.25f, 677.139f, 95.63f;
							case 1:
								return 2222.429f, 676.668f, 95.56f;
							case 2:
								return 2222.6f, 676.218f, 95.494f;
							case 3:
								return 2222.767f, 675.777f, 95.429f;
							default:
								break;
						}
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 2209.132f, 716.466f, 100.647f;
							case 1:
								return 2208.99f, 716.968f, 100.702f;
							case 2:
								return 2208.843f, 717.489f, 100.76f;
							case 3:
								return 2208.704f, 717.954f, 100.812f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 2208.496f, 718.627f, 100.887f;
							case 1:
								return 2208.633f, 718.144f, 100.835f;
							case 2:
								return 2208.769f, 717.67f, 100.784f;
							case 3:
								return 2208.902f, 717.199f, 100.733f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 2207.189f, 723.161f, 101.376f;
							case 1:
								return 2207.062f, 723.635f, 101.426f;
							case 2:
								return 2206.935f, 724.109f, 101.476f;
							case 3:
								return 2206.799f, 724.595f, 101.527f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 2206.875f, 724.285f, 101.499f;
							case 1:
								return 2207.003f, 723.829f, 101.451f;
							case 2:
								return 2207.139f, 723.344f, 101.4f;
							case 3:
								return 2207.271f, 722.874f, 101.35f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 2:
			if (bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 2185.225f, 859.421f, 111.432f;
							case 1:
								return 2185.104f, 859.88f, 111.464f;
							case 2:
								return 2184.975f, 860.368f, 111.498f;
							case 3:
								return 2184.854f, 860.828f, 111.53f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return 2185.041f, 860.089f, 111.454f;
							case 1:
								return 2185.174f, 859.612f, 111.42f;
							case 2:
								return 2185.306f, 859.122f, 111.385f;
							case 3:
								return 2185.435f, 858.643f, 111.351f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 2183.488f, 865.083f, 111.83f;
							case 1:
								return 2183.341f, 865.531f, 111.862f;
							case 2:
								return 2183.182f, 866.017f, 111.896f;
							case 3:
								return 2183.034f, 866.468f, 111.928f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return 2183.111f, 866.215f, 111.877f;
							case 1:
								return 2183.27f, 865.744f, 111.845f;
							case 2:
								return 2183.425f, 865.284f, 111.813f;
							case 3:
								return 2183.587f, 864.803f, 111.78f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return 1927.164f, 926.295f, 115.909f;
						case 1:
							return 1926.702f, 926.126f, 115.896f;
						case 2:
							return 1926.234f, 925.948f, 115.882f;
						case 3:
							return 1925.776f, 925.771f, 115.869f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return 1926.986f, 926.225f, 115.895f;
						case 1:
							return 1927.449f, 926.392f, 115.907f;
						case 2:
							return 1927.905f, 926.557f, 115.919f;
						case 3:
							return 1928.362f, 926.722f, 115.931f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return 1920.228f, 923.628f, 115.703f;
						case 1:
							return 1919.773f, 923.453f, 115.687f;
						case 2:
							return 1919.295f, 923.269f, 115.67f;
						case 3:
							return 1918.841f, 923.095f, 115.654f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 1920.023f, 923.551f, 115.694f;
						case 1:
							return 1920.503f, 923.734f, 115.709f;
						case 2:
							return 1920.962f, 923.915f, 115.723f;
						case 3:
							return 1921.403f, 924.09f, 115.737f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_457(int iParam0, int iParam1, bool bParam2)
{
	switch (iLocal_14)
	{
		case 1:
			if (!bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 7.589f, -0.505f, 22.677f;
							case 1:
								return 7.589f, -0.505f, 22.677f;
							case 2:
								return 7.589f, -0.505f, 22.677f;
							case 3:
								return 7.589f, -0.505f, 22.677f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return -7.897f, -0.505f, -156.123f;
							case 1:
								return -7.897f, -0.505f, -156.123f;
							case 2:
								return -7.897f, -0.505f, -156.123f;
							case 3:
								return -7.897f, -0.505f, -156.123f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 7.604f, -0.149f, 20.509f;
							case 1:
								return 7.604f, -0.149f, 20.509f;
							case 2:
								return 7.604f, -0.149f, 20.509f;
							case 3:
								return 7.604f, -0.149f, 20.509f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return -7.865f, -0.875f, -159.095f;
							case 1:
								return -7.865f, -0.875f, -159.095f;
							case 2:
								return -7.865f, -0.875f, -159.095f;
							case 3:
								return -7.865f, -0.875f, -159.095f;
							default:
								break;
						}
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 6.072f, 0.209f, 15.798f;
							case 1:
								return 6.072f, 0.209f, 15.798f;
							case 2:
								return 6.072f, 0.209f, 15.798f;
							case 3:
								return 6.072f, 0.209f, 15.798f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return -5.928f, -0.181f, -164.189f;
							case 1:
								return -5.928f, -0.181f, -164.189f;
							case 2:
								return -5.928f, -0.181f, -164.189f;
							case 3:
								return -5.928f, -0.181f, -164.189f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 5.772f, 0.209f, 14.998f;
							case 1:
								return 5.772f, 0.209f, 14.998f;
							case 2:
								return 5.772f, 0.209f, 14.998f;
							case 3:
								return 5.772f, 0.209f, 14.998f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return -5.828f, -0.181f, -164.289f;
							case 1:
								return -5.828f, -0.181f, -164.289f;
							case 2:
								return -5.828f, -0.181f, -164.289f;
							case 3:
								return -5.828f, -0.181f, -164.289f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 2:
			if (bParam2)
			{
				switch (iParam0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 3.872f, -0.552f, 14.773f;
							case 1:
								return 3.872f, -0.552f, 14.773f;
							case 2:
								return 3.872f, -0.552f, 14.773f;
							case 3:
								return 3.872f, -0.552f, 14.773f;
							default:
								break;
						}
						break;
					case 1:
						switch (iParam1)
						{
							case 0:
								return -3.972f, 0.554f, -165.492f;
							case 1:
								return -3.972f, 0.554f, -165.492f;
							case 2:
								return -3.972f, 0.554f, -165.492f;
							case 3:
								return -3.972f, 0.554f, -165.492f;
							default:
								break;
						}
						break;
					case 2:
						switch (iParam1)
						{
							case 0:
								return 3.826f, -0.811f, 18.124f;
							case 1:
								return 3.826f, -0.811f, 18.124f;
							case 2:
								return 3.826f, -0.811f, 18.124f;
							case 3:
								return 3.826f, -0.811f, 18.124f;
							default:
								break;
						}
						break;
					case 3:
						switch (iParam1)
						{
							case 0:
								return -3.725f, 0.825f, -161.464f;
							case 1:
								return -3.725f, 0.825f, -161.464f;
							case 2:
								return -3.725f, 0.825f, -161.464f;
							case 3:
								return -3.725f, 0.825f, -161.464f;
							default:
								break;
						}
						break;
				}
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return -1.573f, -0.053f, 110.113f;
						case 1:
							return -1.573f, -0.053f, 110.113f;
						case 2:
							return -1.573f, -0.053f, 110.113f;
						case 3:
							return -1.573f, -0.053f, 110.113f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return 1.372f, -0.171f, -70.133f;
						case 1:
							return 1.372f, -0.171f, -70.133f;
						case 2:
							return 1.372f, -0.171f, -70.133f;
						case 3:
							return 1.372f, -0.171f, -70.133f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return -1.873f, -0.053f, 111.013f;
						case 1:
							return -1.873f, -0.053f, 111.013f;
						case 2:
							return -1.873f, -0.053f, 111.013f;
						case 3:
							return -1.873f, -0.053f, 111.013f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 1.672f, -0.171f, -69.133f;
						case 1:
							return 1.672f, -0.171f, -69.133f;
						case 2:
							return 1.672f, -0.171f, -69.133f;
						case 3:
							return 1.672f, -0.171f, -69.133f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_458(vector3 vParam0, float fParam3)
{
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam3, 0f, 2.25f, 0f);
}

int func_459(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 838;
		case 1:
			return 839;
		case 2:
			return 840;
		case 3:
			return 841;
		default:
			break;
	}
	return -1;
}

void func_460(int iParam0, char* sParam1, char* sParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_GO_STRAIGHT_TO_COORD(0, vParam3, 1f, -1, fParam6, 1056964608 /* Float: 0.5f */, 0);
	TASK::TASK_PLAY_ANIM(0, sParam2, sParam1, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

int func_461()
{
	int iVar0;
	int iVar1;
	iVar0 = PED::_GET_LASSO_TARGET(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar0 = PED::_0xD0B7AEB56229D317(Global_35);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		if (ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
		}
	}
	return iVar0;
}

void func_462(var uParam0, int iParam1)
{
	uParam0->f_1352 = (uParam0->f_1352 || iParam1);
}

char* func_463()
{
	return "RCMP_INT";
}

char* func_464()
{
	return "RCMP_MCS1";
}

Vector3 func_465()
{
	return 2274.985f, 813.6608f, 93.29452f;
}

Vector3 func_466(bool bParam0)
{
	if (!bParam0)
	{
		return 2205.322f, 640.3705f, 96.742f;
	}
	return 2206.434f, 640.9165f, 95.59111f;
}

void func_467(var uParam0, bool bParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_PAUSED(*uParam0, bParam1);
}

Vector3 func_468()
{
	switch (iLocal_14)
	{
		case 1:
			return 2202.477f, 639.3932f, 95.81949f;
		case 2:
			return 2181.999f, 777.5085f, 106.1755f;
		default:
			break;
	}
	return __LIB_1__::func_977();
}

void func_469(var uParam0, int iParam1)
{
	uParam0->f_1371 = iParam1;
}

bool func_470(var uParam0, int iParam1)
{
	return (uParam0->f_1352 && iParam1) != 0;
}

bool func_471(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_163[iVar0 /*18*/].f_17 == 1 && uParam0->f_163[iVar0 /*18*/].f_2 == 4) && uParam0->f_163[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_472(var uParam0, int iParam1)
{
	return (uParam0->f_1354.f_1 && iParam1) != 0;
}

void func_473(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1609))
	{
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_1609);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_1609);
			if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar2))
			{
				PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_474(var uParam0, int iParam1)
{
	return (uParam0->f_1353 && iParam1) != 0;
}

void func_475(var uParam0)
{
	uParam0->f_1353 = 0;
}

bool func_476(var uParam0)
{
	if (uParam0->f_1372 >= 0)
	{
		if (__LIB_0__::func_94(Global_35, uParam0->f_704[uParam0->f_1372 /*41*/].f_1, 0) < uParam0->f_704[uParam0->f_1372 /*41*/].f_14)
		{
			return true;
		}
		else if (uParam0->f_704[uParam0->f_1372 /*41*/].f_14 >= uParam0->f_704[uParam0->f_1372 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_477(var uParam0)
{
	if (uParam0->f_1372 >= 0)
	{
		if (__LIB_0__::func_94(Global_35, uParam0->f_704[uParam0->f_1372 /*41*/].f_1, 0) < uParam0->f_704[uParam0->f_1372 /*41*/].f_15)
		{
			return true;
		}
		else if (uParam0->f_704[uParam0->f_1372 /*41*/].f_15 >= uParam0->f_704[uParam0->f_1372 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_478(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_163[iVar0 /*18*/].f_17 == 2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_479(var uParam0, int iParam1)
{
	vector3 vVar0[2];
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	switch (uParam0->f_704[iParam1 /*41*/])
	{
		case 0:
			vVar7 = { uParam0->f_704[iParam1 /*41*/].f_4 - uParam0->f_704[iParam1 /*41*/].f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { __LIB_0__::func_173(vVar10) * Vector(2f, 2f, 2f) };
			vVar0[0 /*3*/] = { uParam0->f_704[iParam1 /*41*/].f_1 + uParam0->f_704[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			vVar0[1 /*3*/] = { uParam0->f_704[iParam1 /*41*/].f_1 + uParam0->f_704[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[1 /*3*/], &(vVar0[1 /*3*/].f_2), false);
			if (!__LIB_0__::func_86(vVar0[0 /*3*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[0 /*3*/], uParam0->f_704[iParam1 /*41*/].f_7, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[1 /*3*/], uParam0->f_704[iParam1 /*41*/].f_7, true))
				{
					return vVar0[1 /*3*/];
				}
				else
				{
					return vVar0[0 /*3*/];
				}
			}
			break;
		case 1:
			fVar13 = 0f;
			if (uParam0->f_704[iParam1 /*41*/].f_13 < uParam0->f_704[iParam1 /*41*/].f_12)
			{
				fVar13 = ((uParam0->f_704[iParam1 /*41*/].f_12 + (uParam0->f_704[iParam1 /*41*/].f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = ((uParam0->f_704[iParam1 /*41*/].f_12 + uParam0->f_704[iParam1 /*41*/].f_13) / 2f);
			}
			vVar0[0 /*3*/] = { uParam0->f_704[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(fVar13) * (uParam0->f_704[iParam1 /*41*/].f_11 + 5f)), (BUILTIN::SIN(fVar13) * (uParam0->f_704[iParam1 /*41*/].f_11 + 5f))) };
			vVar0[0 /*3*/].f_2 = (vVar0[0 /*3*/].f_2 + 10f);
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			if (!__LIB_0__::func_86(vVar0[0 /*3*/]))
			{
				return vVar0[0 /*3*/];
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_480(var uParam0, int iParam1)
{
	uParam0->f_1352 = (uParam0->f_1352 - (uParam0->f_1352 && iParam1));
}

char* func_481(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case default:
			return "PBL_REACT_F";
		case 1:
			return "PBL_REACT_B";
		case 3:
			return "PBL_REACT_L";
		case 2:
			return "PBL_REACT_R";
			return "";
			default:
				break;
	}
}

char* func_482()
{
	return "PBL_BASE";
}

char* func_483()
{
	return "TRACKS_BLIP_THF";
}

Vector3 func_484()
{
	return 2203.104f, 641.0013f, 96.8093f;
}

float func_485()
{
	return -146.86f;
}

void func_486(var uParam0, int iParam1)
{
	uParam0->f_1354.f_1 = (uParam0->f_1354.f_1 || iParam1);
}

void func_487(var uParam0, int iParam1)
{
	uParam0->f_1353 = (uParam0->f_1353 || iParam1);
}

void func_488(var uParam0, int iParam1)
{
	uParam0->f_1353 = (uParam0->f_1353 - (uParam0->f_1353 && iParam1));
}

void func_489(var uParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		uParam0->f_704[iParam1 /*41*/].f_28 = 1;
		uParam0->f_1372 = iParam1;
		uParam0->f_1376 = iParam1;
		Global_43805 = iParam1;
		uParam0->f_1457 = 1;
	}
}

void func_490(var uParam0, int iParam1)
{
	uParam0->f_1354.f_1 = (uParam0->f_1354.f_1 - (uParam0->f_1354.f_1 && iParam1));
}

int func_491(var uParam0)
{
	if (uParam0->f_1373 < 0 || uParam0->f_163[uParam0->f_1373 /*18*/].f_4 < 0)
	{
		return -1;
	}
	return uParam0->f_1210[uParam0->f_163[uParam0->f_1373 /*18*/].f_4 /*10*/].f_8;
}

bool func_492(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (8 == uParam0->f_163[iVar0 /*18*/].f_2 && uParam0->f_163[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_493(var uParam0, char* sParam1)
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_704[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_704[iVar0 /*41*/].f_22)) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_704[iVar0 /*41*/].f_22), sParam1)) && __LIB_0__::func_164(&(uParam0->f_704[iVar0 /*41*/]), 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_494(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_163[iParam1 /*18*/].f_17 == 0 && __LIB_0__::func_78(uParam0) == 3)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if (uParam0->f_163[iParam1 /*18*/].f_17 == 2 && __LIB_0__::func_78(uParam0) == 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if ((uParam0->f_163[iParam1 /*18*/].f_17 == 1 && __LIB_0__::func_78(uParam0) > 3) && __LIB_0__::func_78(uParam0) < 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	return false;
}

bool func_495(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_163[iVar0 /*18*/] == iParam1)
		{
			if (__LIB_0__::func_84(&(uParam0->f_163[iVar0 /*18*/]), 4))
			{
				return true;
			}
			if (uParam0->f_163[iVar0 /*18*/].f_2 == 11)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_496(var uParam0)
{
	int iVar0;
	struct<16> Var1;
	struct<18> Var17;
	struct<41> Var35;
	struct<10> Var76;
	struct<22> Var86;
	Var1.f_15 = 1;
	Var17 = -1;
	Var17.f_2 = 1;
	Var17.f_12 = 1065353216;
	Var17.f_15 = 1065353216;
	Var17.f_16 = 1;
	Var86.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uParam0->f_3[iVar0 /*13*/] = 0;
		iVar0++;
	}
	uParam0->f_147 = { Var1 };
	StringCopy(&(uParam0->f_147), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_163)
	{
		uParam0->f_163[iVar0 /*18*/] = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1210)
	{
		uParam0->f_1210[iVar0 /*10*/] = { Var76 };
		iVar0++;
	}
	uParam0->f_1371 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_704)
	{
		uParam0->f_704[iVar0 /*41*/] = { Var35 };
		uParam0->f_1033[iVar0 /*22*/] = { Var86 };
		iVar0++;
	}
	uParam0->f_1372 = -1;
	uParam0->f_1453 = { Global_36 };
	uParam0->f_1456 = 0;
	uParam0->f_1457 = 0;
	uParam0->f_1376 = -1;
	uParam0->f_1377 = -1f;
	uParam0->f_1352 = 0;
	uParam0->f_1354 = 0;
	uParam0->f_1354.f_1 = 0;
	uParam0->f_1591 = 0;
	if (CAM::_0x927B810E43E99932(&(uParam0->f_1380)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1380));
	}
}

void func_497(var uParam0, int iParam1)
{
	uParam0->f_1577.f_1 = 0;
	uParam0->f_1577.f_3 = iParam1;
}

bool func_498(var uParam0, int iParam1)
{
	bool bVar0;
	uParam0->f_1577.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1577.f_1), &(uParam0->f_1577));
	return bVar0;
}

bool func_499(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	uParam0->f_1577.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_INT(iParam2, &(uParam0->f_1577));
	return bVar0;
}

bool func_500(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	uParam0->f_1577.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_FLOAT(uParam2, &(uParam0->f_1577));
	return uVar0;
}

bool func_501(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	uParam0->f_1577.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_STRING(uParam2, &(uParam0->f_1577));
	return uVar0;
}

bool func_502(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	uParam0->f_1577.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_BOOL(bParam2, &(uParam0->f_1577));
	return uVar0;
}

var func_503(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	uParam0->f_1577.f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &(uParam0->f_1577));
	return uVar0;
}

bool func_504(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (((uParam0->f_163[iVar0 /*18*/].f_2 == 9 && uParam0->f_163[iVar0 /*18*/].f_4 == iParam1) && !__LIB_0__::func_129(&(uParam0->f_1210[iParam1 /*10*/]), 32)) && ((uParam0->f_163[iVar0 /*18*/].f_1 == 0 && !__LIB_0__::func_84(&(uParam0->f_163[iVar0 /*18*/]), 512)) || __LIB_0__::func_84(&(uParam0->f_163[iVar0 /*18*/]), 1)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_505(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_0__::func_172(uParam0->f_1321[iVar0 /*15*/].f_12);
		iVar0++;
	}
}

void func_506(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1321[iVar0 /*15*/].f_11)
		{
			__LIB_0__::func_172(uParam0->f_1321[iVar0 /*15*/].f_12);
			switch (uParam0->f_1321[iVar0 /*15*/].f_9)
			{
				case 0:
					uParam0->f_1321[iVar0 /*15*/].f_12 = VOLUME::_CREATE_VOLUME_BOX(uParam0->f_1321[iVar0 /*15*/], uParam0->f_1321[iVar0 /*15*/].f_6, uParam0->f_1321[iVar0 /*15*/].f_3);
					PATHFIND::_0x19C7567D2F2287D6(uParam0->f_1321[iVar0 /*15*/].f_12, 15);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_1321[iVar0 /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
				case 1:
					uParam0->f_1321[iVar0 /*15*/].f_12 = VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_1321[iVar0 /*15*/], uParam0->f_1321[iVar0 /*15*/].f_6, uParam0->f_1321[iVar0 /*15*/].f_3);
					PATHFIND::_0x19C7567D2F2287D6(uParam0->f_1321[iVar0 /*15*/].f_12, 15);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_1321[iVar0 /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
				default:
					break;
					break;
			}
		}
		iVar0++;
	}
}

void func_507(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, float fParam9)
{
	float fVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(iParam2))
		{
			FIRE::STOP_ENTITY_FIRE(iParam2, 0);
		}
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam2, true);
		if (PED::IS_PED_ON_MOUNT(iParam2))
		{
			iVar1 = PED::GET_MOUNT(iParam2);
			PED::_REMOVE_PED_FROM_MOUNT(iParam2, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iVar1, iParam2, 1, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
		}
		if (!__LIB_3__::func_761(uParam1, 32) && (!__LIB_3__::func_761(uParam1, 524288) || iParam2 == *uParam1))
		{
			if (!__LIB_0__::func_86(vParam3))
			{
				fVar0 = __LIB_0__::func_152(vParam3, vParam6, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam2, vParam3, 1f, 20000, 0.5f, 64, fVar0);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD(iParam2, vParam6, 0);
			}
		}
		if (iParam2 != Global_35)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam2, true);
		}
	}
}

Vector3 func_508(var uParam0, int iParam1)
{
	int iVar0;
	if (uParam0->f_163[iParam1 /*18*/].f_3 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_163[iParam1 /*18*/].f_3 == uParam0->f_3[iVar0 /*13*/].f_3)
			{
				if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) != Global_35)
				{
					return ENTITY::GET_ENTITY_COORDS(uParam0->f_3[iVar0 /*13*/].f_2, true, false);
				}
			}
			iVar0++;
		}
	}
	return 0f, 0f, 0f;
}

bool func_509(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam0->f_136 == 1)
	{
		__LIB_7__::func_949(&iVar1, &iVar2, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		__LIB_1__::func_902(iParam0->f_137, &iVar1, &iVar2, 1, 0);
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (!__LIB_0__::func_29(iVar0))
		{
		}
		else if (__LIB_0__::func_117(iVar0, 32))
		{
		}
		else
		{
			iVar3 = __LIB_2__::func_963(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
			}
			else if (!DECORATOR::DECOR_EXIST_ON(iVar3, "bPedAlreadyCounted"))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					if (__LIB_1__::func_333(iParam0, iVar3))
					{
						DECORATOR::DECOR_SET_BOOL(iVar3, "bPedAlreadyCounted", true);
						*uParam3++;
						if (!__LIB_7__::func_924(iParam0, 32768))
						{
							__LIB_8__::func_131(iParam0, 32768);
						}
					}
				}
				else if (!__LIB_7__::func_924(iParam0, 32768))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar3, Global_35, 1, 1))
					{
						__LIB_8__::func_131(iParam0, 32768);
					}
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam5) && !DECORATOR::DECOR_EXIST_ON(iParam5, "bPedAlreadyCounted"))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (__LIB_1__::func_333(iParam0, iParam5))
			{
				DECORATOR::DECOR_SET_BOOL(iParam5, "bPedAlreadyCounted", true);
				*uParam3++;
				if (!__LIB_7__::func_924(iParam0, 32768))
				{
					__LIB_8__::func_131(iParam0, 32768);
				}
			}
		}
		else if (!__LIB_7__::func_924(iParam0, 32768))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam5, Global_35, 1, 1))
			{
				__LIB_8__::func_131(iParam0, 32768);
			}
		}
	}
	iVar4 = 0;
	while (iVar4 < *iParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar4]) && !DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar4], "bPedAlreadyCounted"))
		{
			if (ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar4]))
			{
				if (__LIB_1__::func_333(iParam0, (*iParam1)[iVar4]))
				{
					DECORATOR::DECOR_SET_BOOL((*iParam1)[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!__LIB_7__::func_924(iParam0, 32768))
					{
						__LIB_8__::func_131(iParam0, 32768);
					}
				}
			}
			else if (!__LIB_7__::func_924(iParam0, 32768))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*iParam1)[iVar4], Global_35, 1, 1))
				{
					__LIB_8__::func_131(iParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < *uParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar4]) && !DECORATOR::DECOR_EXIST_ON((*uParam2)[iVar4], "bPedAlreadyCounted"))
		{
			if (ENTITY::IS_ENTITY_DEAD((*uParam2)[iVar4]))
			{
				if (__LIB_1__::func_333(iParam0, (*uParam2)[iVar4]))
				{
					DECORATOR::DECOR_SET_BOOL((*uParam2)[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!__LIB_7__::func_924(iParam0, 32768))
					{
						__LIB_8__::func_131(iParam0, 32768);
					}
				}
			}
			else if (!__LIB_7__::func_924(iParam0, 32768))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*uParam2)[iVar4], Global_35, 1, 1))
				{
					__LIB_8__::func_131(iParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	if (*uParam3 >= iParam4)
	{
		return true;
	}
	return false;
}

char* func_510(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_8__::func_88(iParam0, 16))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		switch (iVar0)
		{
			case 0:
			case default:
				switch (iParam1)
				{
					case 0:
						return "RCMP_AGGRO1";
					case 1:
					default:
						break;
				}
				return "RCMP_AGGRO2";
			case 1:
				switch (iParam1)
				{
					case 0:
						return "RCMP_AGGRO3";
					case 1:
					default:
						break;
				}
				return "RCMP_AGGRO4";
		}
	}
	else
	{
		switch (iParam0->f_16)
		{
			case 4:
			case default:
				switch (iParam1)
				{
					case 0:
						return "RCMP_ATK1";
					case 1:
					default:
						break;
				}
				return "RCMP_ATK2";
			case 5:
			case 6:
				switch (iParam1)
				{
					case 0:
						return "RCMP_AIMPED1";
					case 1:
					default:
						break;
				}
				return "RCMP_AIMPED2";
			case 1:
				switch (iParam1)
				{
					case 0:
						return "RCMP_BODY1";
					case 1:
					default:
						break;
				}
				return "RCMP_BODY2";
			case 2:
				switch (iParam1)
				{
					case 0:
						return "RCMP_WHOGTIE1";
					case 1:
					default:
						break;
				}
				return "RCMP_WHOGTIE2";
			case 3:
				switch (iParam1)
				{
					case 0:
						return "RCMP_DYNAMITE1";
					case 1:
					default:
						break;
				}
				return "RCMP_DYNAMITE2";
			case 7:
				switch (iParam1)
				{
					case 0:
						switch (iParam0->f_1)
						{
							case 0:
							case 1:
								return "RCMP_STEAL1A";
							default:
								break;
						}
						return "RCMP_STEAL1B";
					case 1:
						switch (iParam0->f_1)
						{
							case 0:
							case 1:
								return "RCMP_STEAL2A";
							default:
								break;
						}
						return "RCMP_STEAL2B";
				}
				break;
		}
	}
	return "RCMP_ATK2";
}

void func_511()
{
	if (__LIB_8__::func_88(&Local_2145, 16))
	{
		Local_2145.f_1 = Local_2145.f_3;
	}
}

void func_512()
{
	__LIB_3__::func_228(Global_35, &(Global_1347400.f_46));
}

void func_513(var uParam0, float fParam1, float fParam2)
{
	if (fParam1 < 0f)
	{
		fParam1 = __LIB_2__::func_118(*uParam0, 1, 1);
	}
	if (fParam1 < fParam2)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
	}
}

bool func_514(int iParam0, vector3 vParam1, float fParam4)
{
	if (__LIB_0__::func_86(vParam1))
	{
		return (!__LIB_2__::func_1(iParam0, 0, 1) || __LIB_2__::func_118(iParam0, 0, 1) > fParam4);
	}
	return (!__LIB_2__::func_1(iParam0, 0, 1) || __LIB_0__::func_94(iParam0, vParam1, 0) > fParam4);
}

void func_515(var uParam0, int iParam1)
{
	uParam0->f_150 = iParam1;
	__LIB_1__::func_736(uParam0, 4);
}

void func_516(var uParam0)
{
	__LIB_0__::func_200(&(uParam0->f_1592));
}

int func_517(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_163[iVar0 /*18*/].f_17 == 2 && __LIB_0__::func_84(&(uParam0->f_163[iVar0 /*18*/]), 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_518(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((((!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && !__LIB_0__::func_125(uParam0->f_3[iVar0 /*13*/].f_2)) && __LIB_0__::func_154(uParam0->f_3[iVar0 /*13*/].f_10)) && !__LIB_4__::func_649(uParam0->f_3[iVar0 /*13*/].f_1))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 0, false))
				{
					if (__LIB_0__::func_237(uParam0->f_3[iVar0 /*13*/].f_10))
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 7, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(uParam0->f_3[iVar0 /*13*/].f_10))
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 2, true, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
				if (uParam0->f_3[iVar0 /*13*/].f_11)
				{
					if (__LIB_0__::func_399(iVar1, 0, 0, 0) != uParam0->f_3[iVar0 /*13*/].f_10)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, true, 0, false, false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_519(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_3[iVar0 /*13*/].f_12)
		{
			__LIB_4__::func_653(&(uParam0->f_3[iVar0 /*13*/]));
		}
		iVar0++;
	}
}

void func_520(var uParam0, var uParam1)
{
	if (__LIB_3__::func_761(uParam0, 4))
	{
		if (__LIB_0__::func_239(uParam1, 8388608))
		{
			if (__LIB_3__::func_786(uParam1))
			{
				__LIB_3__::func_787(uParam1->f_3);
				__LIB_3__::func_741(__LIB_3__::func_805(uParam1, uParam0), -1, 0, 0, 1);
			}
		}
		if (!__LIB_0__::func_239(uParam1, 8388608))
		{
			MISC::SET_TIME_SCALE(0.25f);
			__LIB_0__::func_240(uParam1, 8388608);
			__LIB_3__::func_834(3);
			__LIB_3__::func_787(uParam1->f_3);
			__LIB_3__::func_741(__LIB_3__::func_805(uParam1, uParam0), -1, 0, 0, 1);
		}
		else
		{
			switch (uParam1->f_3)
			{
				case 0:
					if (__LIB_0__::func_239(uParam1, 1048576))
					{
						uParam1->f_3++;
						__LIB_3__::func_787(uParam1->f_3);
						__LIB_3__::func_741(__LIB_3__::func_805(uParam1, uParam0), -1, 0, 0, 1);
					}
					if (__LIB_0__::func_239(uParam1, 16))
					{
						MISC::SET_TIME_SCALE(1f);
						uParam1->f_3++;
						__LIB_3__::func_787(uParam1->f_3);
						__LIB_3__::func_741(__LIB_3__::func_805(uParam1, uParam0), -1, 0, 0, 1);
					}
					break;
				case 1:
					if (__LIB_0__::func_239(uParam1, 16))
					{
						MISC::SET_TIME_SCALE(1f);
						uParam1->f_3++;
						uParam1->f_25 = __LIB_0__::func_45("DUEL_HELP_SHOWDOWN", 10000, 0, 0, 0, 1);
						__LIB_3__::func_787(uParam1->f_3);
						__LIB_3__::func_741(__LIB_3__::func_805(uParam1, uParam0), -1, 0, 0, 1);
					}
					break;
				case 2:
					if (__LIB_3__::func_774(uParam1) > 0)
					{
						__LIB_1__::func_336(&(Global_40.f_9145), 1);
						__LIB_1__::func_390(__LIB_3__::func_805(uParam1, uParam0), 1);
						__LIB_0__::func_769();
						__LIB_3__::func_760();
						uParam1->f_3++;
					}
					break;
			}
		}
	}
}

void func_521(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (uParam0->f_3[iVar0 /*13*/].f_1 != 0)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3[iVar0 /*13*/].f_4)))
			{
				__LIB_0__::func_928(&(uParam0->f_1459), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), &(uParam0->f_3[iVar0 /*13*/].f_4), 0);
			}
		}
		iVar0++;
	}
}

void func_522(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 103)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1577, iVar0, __LIB_4__::func_667(iVar0));
		iVar0++;
	}
}

bool func_523(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_1609))
	{
		uParam0->f_1609 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			if (((__LIB_4__::func_649(iParam1) && !uParam0->f_3[iVar0 /*13*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) == Global_35)
			{
				iParam1 = ENTITY::GET_ENTITY_MODEL(Global_35);
			}
			if (ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2) == iParam1)
			{
				if (!uParam0->f_3[iVar0 /*13*/])
				{
					uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
					*iParam2 = iVar0;
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1609))
					{
						ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1609);
					}
					return true;
				}
			}
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, __LIB_0__::func_140(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1609))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1609);
						}
						return true;
					}
				}
			}
			if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0->f_3[iVar0 /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, __LIB_0__::func_231(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1609))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1609);
						}
						return true;
					}
				}
			}
		}
		else if (STREAMING::IS_MODEL_VALID(iParam1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9)) && MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[iVar0 /*13*/].f_9, "^"))
		{
			if ((ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && STREAMING::IS_MODEL_A_PED(iParam1)) && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_0__::func_140(iParam1)))
			{
				if (MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[iVar0 /*13*/].f_9, __LIB_0__::func_140(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1609))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1609);
						}
						return true;
					}
				}
			}
			if ((ENTITY::IS_ENTITY_AN_OBJECT(uParam0->f_3[iVar0 /*13*/].f_2) && STREAMING::_0x274EE1B90CFA669E(iParam1)) && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_0__::func_231(iParam1)))
			{
				if (MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[iVar0 /*13*/].f_9, __LIB_0__::func_231(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1609))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1609);
						}
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_524(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar12;
	int iVar13;
	iVar12 = 0;
	while (iVar12 < 30)
	{
		if (((uParam0->f_163[iVar12 /*18*/].f_17 == 1 && uParam0->f_163[iVar12 /*18*/].f_2 == 9) && uParam0->f_163[iVar12 /*18*/].f_4 >= 0) && uParam0->f_163[iVar12 /*18*/] == iParam1)
		{
			iVar13 = uParam0->f_1210[uParam0->f_163[iVar12 /*18*/].f_4 /*10*/].f_8;
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar13) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar13, true, false)) && ANIMSCENE::_0x6F1F0B17109309DA(iVar13, __LIB_0__::func_731(Global_35)))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iVar13, __LIB_0__::func_731(Global_35), &vVar0, false, 0, 2))
				{
					if (!__LIB_0__::func_86(vVar0))
					{
						return true;
					}
				}
			}
		}
		iVar12++;
	}
	return false;
}

void func_525(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, var uParam7)
{
	var uVar0;
	var uVar7;
	int iVar14;
	float fVar15;
	__LIB_4__::func_672(&uVar0, 0f, Global_36 - Vector(1f, 0f, 0f), (-2f * BUILTIN::SIN(ENTITY::GET_ENTITY_HEADING(Global_35))), (2f * BUILTIN::COS(ENTITY::GET_ENTITY_HEADING(Global_35))), 0f);
	__LIB_4__::func_672(&uVar7, 1f, vParam3, (-2f * BUILTIN::SIN(fParam6)), (2f * BUILTIN::COS(fParam6)), 0f);
	if (MISC::ABSF(uParam0->f_704[iParam1 /*41*/].f_12) == MISC::ABSF(uParam0->f_704[iParam1 /*41*/].f_13))
	{
		if (MISC::ABSF(uParam0->f_704[iParam1 /*41*/].f_12) >= 90f)
		{
			fVar15 = 180f;
		}
		else
		{
			fVar15 = 90f;
		}
	}
	else
	{
		fVar15 = (uParam0->f_704[iParam1 /*41*/].f_12 - uParam0->f_704[iParam1 /*41*/].f_13);
		if (fVar15 >= 180f)
		{
			fVar15 = (fVar15 - 360f);
		}
		else if (fVar15 <= -180f)
		{
			fVar15 = (fVar15 + 360f);
		}
		fVar15 = (fVar15 / 2f);
		if (uParam0->f_704[iParam1 /*41*/].f_12 < uParam0->f_704[iParam1 /*41*/].f_13)
		{
			fVar15 = (uParam0->f_704[iParam1 /*41*/].f_12 + MISC::ABSF(fVar15));
		}
		else
		{
			fVar15 = (uParam0->f_704[iParam1 /*41*/].f_13 + MISC::ABSF(fVar15));
		}
		if (fVar15 >= 180f)
		{
			fVar15 = (fVar15 - 360f);
		}
		else if (fVar15 <= -180f)
		{
			fVar15 = (fVar15 + 360f);
		}
	}
	*uParam7 = { uParam0->f_704[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(fVar15) * (uParam0->f_704[iParam1 /*41*/].f_11 / 2f)), (BUILTIN::SIN(fVar15) * (uParam0->f_704[iParam1 /*41*/].f_11 / 2f))) };
	iVar14 = 0;
	while (iVar14 < 5)
	{
		*(uParam2[iVar14 /*3*/]) = { __LIB_4__::func_792(Global_36, *uParam7, vParam3, (IntToFloat(iVar14 + 1) / BUILTIN::TO_FLOAT(5))) };
		iVar14++;
	}
}

bool func_526(var uParam0, var uParam1)
{
	if ((__LIB_3__::func_856(uParam0, uParam1, 0) || __LIB_3__::func_788(uParam0, uParam1, 0)) || __LIB_3__::func_789(uParam0, uParam1, 0))
	{
		return true;
	}
	return false;
}

int func_527()
{
	int iVar0[3];
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	iVar0[0] = 835;
	iVar0[1] = 836;
	iVar0[2] = 837;
	fVar5 = 999f;
	iVar6 = -1;
	iLocal_2178 = 0;
	while (iLocal_2178 < 3)
	{
		iVar7 = __LIB_2__::func_963(iVar0[iLocal_2178]);
		fVar4 = __LIB_2__::func_118(iVar7, 1, 1);
		if (fVar4 < fVar5)
		{
			iVar6 = iVar0[iLocal_2178];
			fVar5 = fVar4;
		}
		iLocal_2178++;
	}
	return iVar6;
}

void func_528(int iParam0)
{
	__LIB_3__::func_237(iParam0, &(iParam0->f_28));
	__LIB_3__::func_748(iParam0, 1);
	__LIB_3__::func_230(iParam0, 0);
	__LIB_2__::func_613(iParam0, 0);
	__LIB_3__::func_391(iParam0, 0);
	__LIB_8__::func_84(iParam0, 0);
}

void func_529(var uParam0, var uParam1, int iParam2)
{
	uParam1->f_57 = iParam2;
	__LIB_3__::func_848(*uParam0, iParam2);
}

void func_530(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	__LIB_1__::func_148(&(uParam0->f_1557));
}

void func_531(var uParam0, var uParam1)
{
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(Global_35, 0);
	if (__LIB_0__::func_239(uParam1, 4194304))
	{
		__LIB_1__::func_864(Global_35, 0, 0);
	}
	else if (__LIB_3__::func_854(uParam0, uParam1, 0))
	{
		if (__LIB_3__::func_761(uParam0, 524288))
		{
			__LIB_1__::func_864(Global_35, 0, 0);
		}
		else
		{
			PED::EXPLODE_PED_HEAD(Global_35, joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"));
		}
	}
	else if (__LIB_3__::func_836(uParam0, uParam1))
	{
		__LIB_1__::func_864(Global_35, 0, 0);
	}
}

int func_532(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, float fParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (iParam5 > 0)
	{
		PED::_0xF008E0BA1FE1D644(iParam5);
	}
	else
	{
		return iParam5;
	}
	bParam8 = (bParam8 || __LIB_7__::func_924(iParam0, 4096));
	if (iParam0->f_136 == 1)
	{
		__LIB_7__::func_949(&iVar4, &iVar5, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		__LIB_1__::func_902(iParam0->f_137, &iVar4, &iVar5, 1, 0);
	}
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!__LIB_0__::func_29(iVar3))
		{
		}
		else if (iVar3 == iParam0->f_138)
		{
		}
		else if (__LIB_0__::func_117(iVar3, 32))
		{
		}
		else
		{
			iVar6 = __LIB_2__::func_963(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(iVar6) && !__LIB_1__::func_248(iVar6, &(iParam0->f_140)))
			{
				(*iParam1)[iVar0] = iVar6;
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar6))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar6, true, false);
				}
				PED::SET_PED_CONFIG_FLAG(iVar6, 146, false);
				PED::SET_PED_CONFIG_FLAG(iVar6, 246, true);
				PED::SET_PED_CONFIG_FLAG(iVar6, 178, true);
				PED::SET_PED_CAN_BE_TARGETTED(iVar6, true);
				__LIB_8__::func_123(iVar3, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iVar6, 277, false);
				PED::_0xFC3DB99C8144CD81(iVar6, Global_1392194[iParam0->f_136 /*10*/].f_5, 0, 0, 0);
				if ((__LIB_8__::func_185(iVar6, (iParam3 == -1 || iVar1 < iParam3), (bParam9 || bParam8)) || iVar3 == 808) || iVar3 == 809)
				{
					PED::_0x802092B07E3B1EEA(iVar6, Global_36, 3);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar6, joaat("REL_PLAYER_ENEMY"));
					__LIB_2__::func_73(iVar6, uParam2[iVar0], joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 71, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 31, true);
					if (__LIB_7__::func_966(iVar6))
					{
						iVar7 = __LIB_7__::func_967(iVar6);
					}
					if (PED::IS_PED_HUMAN(iVar6))
					{
						if (__LIB_7__::func_969(&iVar6, iVar7, (bParam9 || bParam8)))
						{
							WEAPON::_GIVE_WEAPON_TO_PED_2(iVar6, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (__LIB_0__::func_154(iVar7))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar6, iVar7, true, 0, false, false);
							}
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 46, false);
					}
					else
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 46, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					if (__LIB_0__::func_154(iVar7))
					{
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					}
					if (PED::IS_PED_HUMAN(iVar6) && !__LIB_7__::func_966(iVar6))
					{
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, __LIB_7__::func_968(), 0.5f, 0, 4);
					}
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iVar6, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					iVar1++;
				}
				else
				{
					PED::_0xEEED8FAFEC331A70(iVar6, Global_36, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar6, joaat("REL_PLAYER_DISLIKE"));
					if ((bParam7 || __LIB_2__::func_118(iVar6, 1, 1) < 15f) || __LIB_1__::func_985())
					{
						TASK::CLEAR_PED_TASKS(iVar6, true, false);
						PED::SET_PED_CONFIG_FLAG(iVar6, 178, false);
						TASK::_TASK_SMART_FLEE_STYLE_PED(iVar6, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar6, true);
						__LIB_7__::func_970(&iVar6, iParam10, fParam11);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, __LIB_7__::func_968(), 0.5f, 0, 4);
						TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 1500, 0, 1, 1);
						TASK::TASK_COWER(0, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(iVar6, iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						DECORATOR::DECOR_SET_BOOL(iVar6, "bCowering", true);
					}
				}
				iVar0++;
			}
		}
		iVar3++;
	}
	return iVar1;
}

bool func_533(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	switch (uParam0->f_17)
	{
		case 0:
			if (uParam0->f_25 >= *iParam1)
			{
				uParam0->f_25 = 0;
			}
			if (uParam0->f_24 >= uParam0->f_26 || uParam0->f_23 >= uParam0->f_26)
			{
				uParam0->f_17 = 4;
				return false;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23]))
			{
				uParam0->f_17 = 4;
				return false;
			}
			if (uParam0->f_23 < uParam0->f_26 && uParam0->f_24 < uParam0->f_26)
			{
				if (__LIB_8__::func_213(uParam0, (*iParam1)[uParam0->f_25], uParam2))
				{
					if ((ENTITY::IS_ENTITY_ON_SCREEN((*iParam1)[uParam0->f_25]) && !ENTITY::IS_ENTITY_OCCLUDED((*iParam1)[uParam0->f_25])) && PED::_0x7F9B9791D4CB71F6(Global_35, (*iParam1)[uParam0->f_25], false, 0) == 1)
					{
						uParam0->f_31 = (*iParam1)[uParam0->f_25];
						uParam0->f_17 = 1;
					}
					else
					{
						uParam0->f_25++;
						Jump @1215; //curOff = 254
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_31) && __LIB_2__::func_215(uParam0->f_31, Global_35, 0, uParam0->f_32, 0))
						{
							__LIB_3__::func_896(&(uParam0->f_18));
							vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_31, true, false) };
							if (!uParam0->f_7[uParam0->f_24])
							{
								TASK::TASK_LOOK_AT_ENTITY(uParam0->f_31, Global_35, 7500, 48, 41, 0);
								if (__LIB_0__::func_27(uParam0->f_34, 8))
								{
									TASK::_0xE7FA07624574B79A(uParam0->f_31, Global_35, 2, 1, 100f, 1, 0, 0, 0);
									__LIB_1__::func_336(&(uParam0->f_34), 16);
								}
								else if (!__LIB_0__::func_27(uParam0->f_34, 4) && !PED::_0x84D0BF2B21862059(uParam0->f_31))
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(*uParam0))
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1f, -1f, -1f);
										TASK::TASK_ACHIEVE_HEADING(0, 90f, 0);
										TASK::TASK_PLAY_ANIM(0, *uParam0, uParam0->f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23]))
									{
										uParam0->f_30 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(uParam0->f_31, false);
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										if (__LIB_0__::func_94(uParam0->f_31, Global_36, 0) > 12f)
										{
											TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Global_35, 0f, 0f, 0f, 1f, 1000, 5f, 1, 1, 0, 0, 1);
										}
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1f, -1f, -1f);
										if (bParam3)
										{
											if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_30))
											{
												TASK::_TASK_USE_SCENARIO_POINT(0, uParam0->f_30, 0, 0, true, false, 0, false, -1f, false);
											}
											else
											{
												TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar1, 30f, 0, false, false, false, false);
											}
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									else
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1f, -1f, -1f);
										if (bParam3)
										{
											TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar1, 30f, 0, false, false, false, false);
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
								}
							}
							DECORATOR::DECOR_SET_BOOL(uParam0->f_31, "bNoticePlayer", false);
							uParam0->f_17 = 2;
						}
						else if (uParam0->f_18.f_4)
						{
							__LIB_3__::func_896(&(uParam0->f_18));
							uParam0->f_17 = 0;
						}
						if (uParam0->f_17 == 0)
						{
							uParam0->f_31 = 0;
							if (uParam0->f_25 == (*iParam1 - 1))
							{
								uParam0->f_25 = 0;
							}
							else
							{
								uParam0->f_25++;
							}
						}
						Jump @1215; //curOff = 885
						if (__LIB_0__::func_27(uParam0->f_34, 1))
						{
							__LIB_2__::func_461(0);
						}
						__LIB_4__::func_279(&(uParam0->f_31), 2000, Global_35, 0, 0, 0, 0, 1);
						if ((!__LIB_0__::func_270() && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[uParam0->f_23])) && __LIB_2__::func_227(0, 1, uParam0->f_31, 1))
						{
							if (__LIB_0__::func_27(uParam0->f_34, 2))
							{
							}
							else
							{
								if (bParam4 && uParam0->f_23 == 0)
								{
									uParam0->f_23++;
								}
								__LIB_2__::func_303(uParam0->f_31, Global_35, uParam0->f_2[uParam0->f_23], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							uParam0->f_23++;
							uParam0->f_17 = 3;
							__LIB_1__::func_148(&(uParam0->f_27));
							return true;
						}
						Jump @1215; //curOff = 1078
						if ((__LIB_0__::func_27(uParam0->f_34, 16) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_31)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_31))
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_31, 1, 0);
							__LIB_0__::func_516(&(uParam0->f_34), 16);
						}
						if (__LIB_1__::func_285(&(uParam0->f_27), uParam0->f_33))
						{
							iVar4 = __LIB_8__::func_246(uParam0->f_31, 0);
							if ((bParam3 && iVar4 != -1) && __LIB_2__::func_763(iVar4, 0))
							{
								__LIB_2__::func_753(iVar4, 0, 1, 0, 0);
							}
							uParam0->f_17 = 0;
						}
					}
					return false;
				}
			}
			default:
				break;
	}
}

void func_534(char* sParam0, bool bParam1)
{
	StringCopy(&cLocal_2184, sParam0, 24);
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2184))
		{
			__LIB_1__::func_422(&cLocal_2184, 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

int func_535(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, float fParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bParam6 = (bParam6 || __LIB_7__::func_924(iParam0, 4096));
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar0]))
		{
			iVar3 = __LIB_8__::func_246((*iParam1)[iVar0], 0);
			if (__LIB_0__::func_29(iVar3))
			{
				__LIB_8__::func_123(iVar3, 1, 1);
			}
			PED::SET_PED_CONFIG_FLAG((*iParam1)[iVar0], 146, !bParam5);
			PED::SET_PED_CONFIG_FLAG((*iParam1)[iVar0], 246, true);
			PED::SET_PED_CONFIG_FLAG((*iParam1)[iVar0], 178, true);
			PED::SET_PED_CAN_BE_TARGETTED((*iParam1)[iVar0], true);
			if (__LIB_8__::func_185((*iParam1)[iVar0], (iParam2 == -1 || iVar1 < iParam2), (bParam7 || bParam6)))
			{
				PED::_0x802092B07E3B1EEA((*iParam1)[iVar0], Global_36, 3);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam1)[iVar0], joaat("REL_PLAYER_ENEMY"));
				MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), (*iParam1)[iVar0]);
				PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar0], 58, true);
				PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar0], 5, true);
				PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar0], 71, true);
				PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar0], 31, true);
				if (__LIB_7__::func_966((*iParam1)[iVar0]))
				{
					iVar4 = __LIB_7__::func_967((*iParam1)[iVar0]);
				}
				if (PED::IS_PED_HUMAN((*iParam1)[iVar0]))
				{
					if (__LIB_7__::func_969(iParam1[iVar0], iVar4, (bParam7 || bParam6)))
					{
						WEAPON::_GIVE_WEAPON_TO_PED_2((*iParam1)[iVar0], iParam3, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
						if (__LIB_0__::func_154(iVar4))
						{
							WEAPON::SET_CURRENT_PED_WEAPON((*iParam1)[iVar0], iVar4, true, 0, false, false);
						}
					}
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar0], 46, false);
				}
				else
				{
					PED::SET_PED_COMBAT_ATTRIBUTES((*iParam1)[iVar0], 46, true);
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				if (PED::IS_PED_HUMAN((*iParam1)[iVar0]))
				{
					if (__LIB_0__::func_154(iVar4))
					{
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					}
					if (!bParam8 && !__LIB_7__::func_966((*iParam1)[iVar0]))
					{
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, __LIB_7__::func_968(), 0.5f, 0, 4);
					}
				}
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE((*iParam1)[iVar0], iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				iVar1++;
			}
			else
			{
				PED::_0xEEED8FAFEC331A70((*iParam1)[iVar0], Global_36, 1);
				TASK::_TASK_SMART_FLEE_STYLE_PED((*iParam1)[iVar0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
				PED::SET_PED_KEEP_TASK((*iParam1)[iVar0], true);
				__LIB_7__::func_970(iParam1[iVar0], iParam9, fParam10);
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_536(var uParam0, var uParam1)
{
	if (__LIB_3__::func_764(uParam1))
	{
		return 1;
	}
	if (!__LIB_0__::func_75(&(uParam1->f_26)))
	{
		__LIB_1__::func_283(&(uParam1->f_26), 0);
	}
	switch (uParam1->f_59)
	{
		case 0:
			__LIB_3__::func_845(uParam0, uParam1, 0);
			if (__LIB_0__::func_27(uParam0->f_88, 2))
			{
				if (CAM::DOES_CAM_EXIST(uParam1->f_20[0]))
				{
					CAM::DETACH_CAM(uParam1->f_20[0]);
					CAM::SET_CAM_ACTIVE(uParam1->f_20[0], false);
				}
				if (CAM::DOES_CAM_EXIST(uParam1->f_20[2]))
				{
					CAM::SET_CAM_ACTIVE(uParam1->f_20[2], true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				MAP::DISPLAY_RADAR(false);
				__LIB_3__::func_816(uParam1, 3);
			}
			else
			{
				__LIB_3__::func_846(uParam0, uParam1);
				__LIB_3__::func_816(uParam1, 1);
			}
			break;
		case 1:
			__LIB_0__::func_11("DCS: INTRO START TO INTRO END");
			if (CAM::DOES_CAM_EXIST(uParam1->f_20[1]))
			{
				CAM::SET_CAM_ACTIVE(uParam1->f_20[1], true);
			}
			CAM::RENDER_SCRIPT_CAMS(true, true, uParam0->f_84, true, false, 0);
			__LIB_3__::func_816(uParam1, 2);
			break;
		case 2:
			__LIB_0__::func_11("DCS: INTRO START TO INTRO END");
			if (!CAM::DOES_CAM_EXIST(uParam1->f_20[1]) || !CAM::IS_CAM_INTERPOLATING(uParam1->f_20[1]))
			{
				__LIB_0__::func_11("DCS: INTRO END TO DUEL");
				if (CAM::DOES_CAM_EXIST(uParam1->f_20[2]))
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam1->f_20[2], uParam1->f_20[1], uParam0->f_85, 1, 1);
				}
				__LIB_3__::func_816(uParam1, 3);
			}
			break;
		case 3:
			__LIB_0__::func_11("DCS: INTRO END TO DUEL");
			if ((!CAM::DOES_CAM_EXIST(uParam1->f_20[2]) || !CAM::IS_CAM_INTERPOLATING(uParam1->f_20[2])) && (!CAM::DOES_CAM_EXIST(uParam1->f_20[0]) || !CAM::IS_CAM_INTERPOLATING(uParam1->f_20[0])))
			{
				if (!__LIB_0__::func_27(uParam0->f_88, 1024))
				{
					__LIB_0__::func_11();
				}
				__LIB_0__::func_37(&(uParam1->f_26));
				__LIB_3__::func_816(uParam1, 4);
				__LIB_1__::func_539();
				__LIB_0__::func_11("DCS: DUEL");
				return 1;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

void func_537(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;
	if (__LIB_0__::func_139(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		__LIB_1__::func_748(&(iParam1->f_6), 0, 1);
	}
	if (!__LIB_0__::func_139(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (__LIB_1__::func_502(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = __LIB_8__::func_122(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (__LIB_0__::func_139(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					__LIB_2__::func_369(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					__LIB_1__::func_522(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						__LIB_1__::func_523(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						__LIB_1__::func_483(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					__LIB_1__::func_522(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					__LIB_1__::func_221(iParam1->f_6, 0, 1);
				}
				else
				{
					__LIB_1__::func_221(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

bool func_538(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_198(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_4__::func_23(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_8__::func_189(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_539(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = __LIB_8__::func_363(iParam0, iParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

bool func_540(int iParam0, var uParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, float fParam6, float fParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < *iParam0)
	{
		if (__LIB_3__::func_892(iVar2, bParam5))
		{
			if (__LIB_8__::func_256((*iParam0)[iVar2], uParam1, iParam2, &bVar1, fParam3, bParam4, fParam6, 1, fParam7, 1))
			{
				return true;
			}
			else if (bVar1)
			{
				bVar0 = true;
			}
		}
		iVar2++;
	}
	if (!bVar0)
	{
		*iParam2 = 0f;
	}
	return false;
}

void func_541(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_156, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_156)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_213, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	if ((__LIB_1__::func_540(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_156))
	{
		if (!__LIB_0__::func_1(uParam0->f_213, 128))
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
	if (__LIB_0__::func_1(uParam0->f_213, 512))
	{
		bVar2 = true;
	}
	if (__LIB_5__::func_579(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_156);
		__LIB_3__::func_120();
	}
}

void func_542(int iParam0)
{
	int iVar0;
	float fVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = __LIB_0__::func_525(iParam0);
	fVar1 = __LIB_1__::func_181(iParam0);
	if ((Global_1347477.f_117 || !__LIB_0__::func_293(31)) || !__LIB_0__::func_962(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (__LIB_0__::func_963(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477.f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	__LIB_8__::func_364(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(6, __LIB_0__::func_526(iParam0), fVar1), "itemtype_textures", __LIB_0__::func_527(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_543(var uParam0, int iParam1)
{
	var uVar0;
	if (__LIB_4__::func_641())
	{
		return true;
	}
	if (__LIB_1__::func_750(&uVar0))
	{
		return true;
	}
	if ((__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 0, 0)) && !__LIB_0__::func_274(&(uParam0->f_704[iParam1 /*41*/]), 16)) && !__LIB_0__::func_274(&(uParam0->f_704[iParam1 /*41*/]), 64))
	{
		return true;
	}
	return false;
}

bool func_544(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	if (__LIB_7__::func_924(iParam1, 32))
	{
		return false;
	}
	if (*bParam4)
	{
		return false;
	}
	if (PED::_0x5C16855277819BBF() >= *iParam0)
	{
		if (*iParam5 < *iParam0)
		{
			if (iParam0->f_15[*iParam5 /*32*/].f_1 != 0)
			{
				(*iParam2)[*iParam5] = __LIB_3__::func_870(iParam0->f_15[*iParam5 /*32*/].f_1, &(iParam0->f_15[*iParam5 /*32*/]), iParam0->f_15[*iParam5 /*32*/].f_6, iParam0->f_15[*iParam5 /*32*/].f_9, 1, 0, 1, 0, 1);
			}
			*iParam5++;
			*bParam4 = 1;
			return false;
		}
	}
	else
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_2)
	{
		if (iParam0->f_304[iVar0 /*32*/].f_1 != 0)
		{
			(*uParam3)[iVar0] = VEHICLE::CREATE_VEHICLE(iParam0->f_304[iVar0 /*32*/].f_1, iParam0->f_304[iVar0 /*32*/].f_6, iParam0->f_304[iVar0 /*32*/].f_9, true, true, false, false);
			(*uParam3)[0] = (*uParam3)[0];
		}
		iVar0++;
	}
	return true;
}

void func_545(bool bParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_982(2);
	if (__LIB_7__::func_907(2, 128))
	{
		__LIB_8__::func_180(2, 0);
	}
	else
	{
		if (iVar0 > 3)
		{
			__LIB_8__::func_180(2, 0);
		}
		if (__LIB_7__::func_908(2, 32768) && !__LIB_1__::func_707(joaat("DOCUMENT_HOMESTEAD_DEED"), 1, 0))
		{
			__LIB_8__::func_180(2, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 1:
					if (__LIB_7__::func_908(2, 64))
					{
						__LIB_8__::func_180(2, 0);
					}
					else if (__LIB_7__::func_908(2, 256))
					{
						if (bParam0 || !__LIB_7__::func_907(2, 268435456))
						{
							__LIB_8__::func_181(2);
							__LIB_8__::func_358(2, 0, "TRACKS_JOURN01", 0, !bParam0);
							__LIB_8__::func_85(2, 268435456);
						}
					}
					else
					{
						__LIB_8__::func_180(2, 0);
					}
					break;
				case 2:
					if (__LIB_7__::func_907(2, 262144))
					{
						__LIB_8__::func_180(2, 0);
					}
					else if (__LIB_7__::func_908(2, 4))
					{
						if (bParam0 || !__LIB_7__::func_907(2, 268435456))
						{
							__LIB_8__::func_181(2);
							__LIB_8__::func_358(2, 0, "TRACKS_JOURN02", 0, !bParam0);
							__LIB_8__::func_85(2, 268435456);
						}
					}
					else
					{
						__LIB_8__::func_180(2, 0);
					}
					break;
				default:
					__LIB_8__::func_180(2, 0);
					break;
			}
		}
	}
}

int func_546(int iParam0, int iParam1)
{
	if (!Global_1935630.f_12 && __LIB_1__::func_205(Global_35, Global_1392194[iParam0->f_136 /*10*/].f_5, 1, 0))
	{
		if (!__LIB_7__::func_924(iParam0, 64))
		{
			__LIB_8__::func_131(iParam0, 64);
			__LIB_8__::func_365(iParam0->f_136, 1);
			return 1;
		}
	}
	return 0;
}

bool func_547()
{
	if (__LIB_7__::func_907(2, 262144))
	{
		return true;
	}
	if (__LIB_7__::func_908(2, 128) && !__LIB_1__::func_707(joaat("DOCUMENT_HOMESTEAD_DEED"), 1, 0))
	{
		return true;
	}
	return false;
}

bool func_548()
{
	return __LIB_1__::func_707(joaat("DOCUMENT_HOMESTEAD_DEED"), 1, 0);
}

void func_549(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (__LIB_4__::func_637(&(uParam0->f_1321[iParam1 /*15*/])))
	{
		case 0:
			if (!bParam3)
			{
				return;
			}
			if (!__LIB_0__::func_1(uParam0->f_1321[iParam1 /*15*/].f_10, 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1591)))
				{
					__LIB_5__::func_386(uParam0->f_1591, 0);
					__LIB_4__::func_666(&(uParam0->f_1321[iParam1 /*15*/]), 2);
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_1(uParam0->f_1321[iParam1 /*15*/].f_10, 256))
			{
				if (!__LIB_4__::func_795())
				{
					__LIB_4__::func_666(&(uParam0->f_1321[iParam1 /*15*/]), 0);
				}
			}
			else
			{
				__LIB_4__::func_666(&(uParam0->f_1321[iParam1 /*15*/]), 0);
			}
			break;
		case 2:
			if (!__LIB_4__::func_790())
			{
				__LIB_4__::func_666(&(uParam0->f_1321[iParam1 /*15*/]), 0);
			}
			break;
	}
}

void func_550()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_1__::func_825(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(1);
	__LIB_8__::func_335(1, iVar0, 0);
}

void func_551()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_1__::func_825(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(2);
	__LIB_8__::func_335(2, iVar0, 0);
}

void func_552()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_1__::func_825(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(0);
	__LIB_8__::func_335(0, iVar0, 0);
}

bool func_553(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1) && !__LIB_0__::func_27(iParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(iParam0->f_1, 179, true);
	}
	switch (*iParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1))
			{
				__LIB_1__::func_148(&(iParam0->f_5));
				if (PED::IS_PED_A_PLAYER(iParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0->f_3, false);
					if (__LIB_0__::func_27(iParam0->f_23, 2048))
					{
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
					}
				}
				if (iParam0->f_24 == 0)
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				if (!__LIB_0__::func_27(iParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iParam0->f_1);
				}
				if (!__LIB_0__::func_27(iParam0->f_23, 2))
				{
					iParam0->f_2 = PED::_GET_LAST_MOUNT(iParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_2) && __LIB_0__::func_71(iParam0->f_1))
					{
						__LIB_3__::func_622(iParam0->f_1);
						iVar0 = __LIB_2__::func_431(iParam0->f_1, iParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(iParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5f, -1, false);
						iVar3 = __LIB_2__::func_431(iParam0->f_1, iParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(iParam0->f_1, 0, iVar4);
					}
					else
					{
						__LIB_1__::func_336(&(iParam0->f_23), 2);
					}
				}
				if (__LIB_0__::func_86(iParam0->f_14))
				{
					iParam0->f_14 = { iParam0->f_8 };
				}
				__LIB_1__::func_649(iParam0, 1, iParam1);
			}
			else
			{
				__LIB_1__::func_649(iParam0, 6, iParam1);
			}
			break;
		case 1:
			if (__LIB_4__::func_249(iParam0, iParam1))
			{
				__LIB_1__::func_148(&(iParam0->f_5));
				if (!__LIB_4__::func_255(iParam0, iParam1))
				{
					__LIB_4__::func_69();
				}
				__LIB_1__::func_649(iParam0, 2, iParam1);
			}
			break;
		case 2:
			if (__LIB_4__::func_255(iParam0, iParam1))
			{
				__LIB_1__::func_148(&(iParam0->f_5));
				if (!__LIB_0__::func_27(iParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(iParam0->f_1, 1, __LIB_0__::func_27(iParam0->f_23, 512), 0, 0);
				}
				__LIB_1__::func_649(iParam0, 3, iParam1);
			}
			break;
		case 3:
			if (__LIB_4__::func_250(iParam0, iParam1))
			{
				__LIB_1__::func_148(&(iParam0->f_5));
				if (!PED::_IS_PED_CARRYING(iParam0->f_1))
				{
					__LIB_1__::func_336(&(iParam0->f_23), 256);
				}
				if (__LIB_0__::func_27(iParam0->f_23, 4096) && !PED::_IS_PED_CARRYING(iParam0->f_1))
				{
					__LIB_1__::func_336(&(iParam0->f_23), 256);
					iVar6 = PED::_GET_LAST_MOUNT(iParam0->f_1);
					if (__LIB_0__::func_665(iVar6, iParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = __LIB_3__::func_661(iVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0->f_1, iVar5);
					}
				}
				else if (!__LIB_0__::func_27(iParam0->f_23, 256))
				{
					iVar5 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iParam0->f_1, iVar5, iParam0->f_14, iParam0->f_21, iParam0->f_4);
				}
				__LIB_1__::func_649(iParam0, 4, iParam1);
			}
			break;
		case 4:
			if (__LIB_4__::func_251(iParam0, iParam1))
			{
				__LIB_1__::func_148(&(iParam0->f_5));
				if (__LIB_0__::func_27(iParam0->f_23, 8192))
				{
					if (__LIB_0__::func_27(iParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(iParam0->f_1, iParam0->f_25, &(iParam0->f_30), &(iParam0->f_26), iParam0->f_21, 0, iVar7, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					if (!__LIB_0__::func_86(iParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!__LIB_0__::func_27(iParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!__LIB_0__::func_86(iParam0->f_11))
					{
						if (__LIB_0__::func_27(iParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, iParam0->f_11, iParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(iParam0->f_23, 128), 20000, -1), iParam0->f_19, iParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_11, iParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(iParam0->f_23, 128), 20000, -1), iParam0->f_17, iVar8, iParam0->f_19);
						}
					}
					if (__LIB_0__::func_27(iParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, iParam0->f_8, iParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(iParam0->f_23, 128), 20000, -1), iParam0->f_19, iParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_8, iParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(iParam0->f_23, 128), 20000, -1), iParam0->f_17, iVar8, iParam0->f_19);
					}
					if (__LIB_0__::func_27(iParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, iParam0->f_19, 0);
					}
					__LIB_1__::func_474(iParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				__LIB_1__::func_649(iParam0, 5, iParam1);
			}
			break;
		case 5:
			if (__LIB_0__::func_27(iParam0->f_23, 8192))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(iParam0->f_25, &(iParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!__LIB_0__::func_27(iParam0->f_23, 1))
			{
				iParam0->f_19 = ENTITY::GET_ENTITY_HEADING(iParam0->f_1);
			}
			if (!__LIB_0__::func_27(iParam0->f_23, 128) && __LIB_1__::func_313(&(iParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!__LIB_0__::func_27(iParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((__LIB_0__::func_86(iParam0->f_11) || !__LIB_0__::func_163(iParam0->f_1, 242628503)) || TASK::GET_SEQUENCE_PROGRESS(iParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (__LIB_3__::func_625(iParam0->f_1, iParam0->f_8, iParam0->f_19, iParam0->f_18, iParam0->f_20, __LIB_0__::func_27(iParam0->f_23, 8)) && (!__LIB_0__::func_27(iParam0->f_23, 64) || MISC::ABSF(__LIB_3__::func_592(iParam0->f_1, iParam0->f_8)) < iParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (__LIB_0__::func_27(iParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(iParam0->f_1, iParam0->f_8, 0);
				}
				__LIB_0__::func_37(&(iParam0->f_5));
				__LIB_1__::func_649(iParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_554(int iParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	var uVar1;
	struct<11> Var2;
	int iVar13;
	if (!__LIB_0__::func_71(iParam0))
	{
		if (bParam11)
		{
			iVar0 = __LIB_0__::func_398(7);
		}
		else
		{
			iVar0 = PED::_GET_LAST_MOUNT(iParam0);
		}
		if (!__LIB_0__::func_272(iVar0, 1) || (!(VOLUME::_DOES_VOLUME_EXIST(iParam5) && __LIB_1__::func_205(iVar0, iParam5, 1, 0)) && __LIB_0__::func_665(iParam0, iVar0, 1, 1) > fParam6))
		{
			return true;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (__LIB_1__::func_16(iVar0) && __LIB_0__::func_402(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*iParam1 = __LIB_4__::func_720(&uVar1, &Var2);
				if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
				{
					*iParam1 = iVar0;
				}
			}
			else
			{
				*iParam1 = iVar0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			return true;
		}
		if (__LIB_0__::func_272(*iParam1, 1))
		{
			if (!(__LIB_0__::func_163(*iParam1, 518218985) || __LIB_0__::func_163(*iParam1, 713668775)))
			{
				TASK::CLEAR_PED_TASKS(*iParam1, true, false);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				FLOCK::_0xFF1E339CE40EAAAF(*iParam1, 0);
				POPULATION::_0xF74E134F40192884(*iParam1, 2);
				if (!__LIB_0__::func_86(vParam2))
				{
					bParam8 = false;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, vParam2, fParam12, -1, 0.25f, 0, 40000f);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iParam5))
				{
					POPULATION::_0xB56D41A694E42E86(iParam5, 2048, 0, 0, -1, -1, 2);
					if (bParam8)
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam1, VOLUME::_GET_VOLUME_COORDS(iParam5), iParam7, iVar13, fParam6, 6000, 0);
					}
				}
				if (!bParam8 && __LIB_0__::func_86(vParam2))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return false;
}

int func_555()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<11> Var3;
	int iVar14;
	int iVar15;
	iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (__LIB_2__::func_366(Global_35))
		{
			iVar1 = __LIB_8__::func_105(Global_35);
		}
		else if (__LIB_1__::func_869(Global_35))
		{
			iVar1 = __LIB_8__::func_106(Global_35);
		}
		else if (__LIB_2__::func_365(Global_35))
		{
			iVar1 = __LIB_3__::func_989(Global_35);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		Var3.f_10 = 7;
		iVar14 = __LIB_4__::func_720(&iVar2, &Var3);
		if (iVar2 == 2 && ENTITY::DOES_ENTITY_EXIST(iVar14))
		{
			iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar14);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar15 = PED::_GET_LAST_MOUNT(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar15))
		{
			iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar15);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return iVar0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return iVar0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (!PED::IS_PED_HUMAN(iVar0))
	{
		return 0;
	}
	return iVar0;
}

void func_556(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			__LIB_1__::func_240(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			__LIB_1__::func_240(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (__LIB_0__::func_181())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!__LIB_1__::func_707(iVar0, 1, 0))
					{
						__LIB_1__::func_825(iVar0, 1, 752097756);
					}
					__LIB_1__::func_775(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					__LIB_1__::func_825(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					__LIB_1__::func_825(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			__LIB_8__::func_228();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

bool func_557()
{
	if (iLocal_14 != 1)
	{
		return true;
	}
	if (__LIB_8__::func_343(8))
	{
		return true;
	}
	if (__LIB_8__::func_372(65536))
	{
		return true;
	}
	return false;
}

bool func_558()
{
	if (iLocal_14 != 1)
	{
		return true;
	}
	if (__LIB_8__::func_343(8))
	{
		return true;
	}
	if (__LIB_8__::func_343(256))
	{
		return true;
	}
	if (__LIB_8__::func_372(8388608))
	{
		return true;
	}
	return false;
}

int func_559(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_8__::func_400(1, iParam1);
		case 1:
			return __LIB_8__::func_400(2, iParam1);
		case 2:
			return __LIB_8__::func_400(3, iParam1);
		case 3:
			return __LIB_8__::func_400(4, iParam1);
		default:
			break;
	}
	return __LIB_8__::func_400(6, iParam1);
}

void func_560()
{
	if (((__LIB_8__::func_379(2048) || __LIB_8__::func_379(4096)) || __LIB_8__::func_379(4194304)) || __LIB_8__::func_346(131072))
	{
		return;
	}
	if (__LIB_8__::func_372(2097152))
	{
	}
}

bool func_561(int iParam0)
{
	int iVar0;
	if (!__LIB_8__::func_406(16))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iParam0 == __LIB_8__::func_459(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_562(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 0;
	}
	StringCopy(&(uParam0->f_1), sParam1, 24);
	return __LIB_8__::func_419(uParam0, &(uParam0->f_1));
}

void func_563(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_8__::func_370(iParam0);
	}
	else
	{
		__LIB_8__::func_380(iParam0);
	}
}

void func_564(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_8__::func_373(iParam0);
	}
	else
	{
		__LIB_8__::func_371(iParam0);
	}
}

void func_565(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_8__::func_381(iParam0);
	}
	else
	{
		__LIB_8__::func_382(iParam0);
	}
}

bool func_566()
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(__LIB_8__::func_388()))
	{
		return false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(__LIB_8__::func_389()))
	{
		return false;
	}
	return true;
}

void func_567()
{
	OBJECT::SET_FORCE_OBJECT_THIS_FRAME(__LIB_8__::func_394(), 5f);
	if (iLocal_14 == 2 && !__LIB_8__::func_343(8))
	{
		OBJECT::SET_FORCE_OBJECT_THIS_FRAME(__LIB_8__::func_395(), 5f);
	}
}

void func_568(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_8__::func_376(iParam0);
	}
	else
	{
		__LIB_8__::func_396(iParam0);
	}
}

void func_569(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_8__::func_397(iParam0);
	}
	else
	{
		__LIB_8__::func_401(iParam0);
	}
}

void func_570()
{
	STREAMING::REQUEST_COLLISION_AT_COORD(__LIB_8__::func_395());
}

bool func_571()
{
	if (iLocal_14 == 2 && !__LIB_8__::func_343(8))
	{
		return ENTITY::_0x6BFBDC46139C45AB(__LIB_8__::func_395());
	}
	return true;
}

bool func_572(var uParam0)
{
	return __LIB_8__::func_461() == *uParam0;
}

void func_573()
{
	if (__LIB_8__::func_454())
	{
		__LIB_8__::func_370(536870912);
	}
}

int func_574(int iParam0, bool bParam1)
{
	return __LIB_8__::func_333(iParam0, Global_1894899.f_2, bParam1);
}

void func_575(var uParam0, bool bParam1, bool bParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (__LIB_8__::func_348(uParam0, &(uParam0->f_1)))
	{
		__LIB_8__::func_418(uParam0, &(uParam0->f_1), bParam2);
		if (bParam1)
		{
			__LIB_8__::func_192(uParam0, &(uParam0->f_4));
		}
	}
}

int func_576(int iParam0)
{
	int iVar0;
	bool bVar1;
	bVar1 = __LIB_2__::func_118(*iParam0, 1, 1) >= 10f;
	if (bVar1)
	{
		iVar0 = joaat("RRFOR_STG2_COHIGH");
	}
	else
	{
		iVar0 = joaat("RRFOR_STG2_COLOW");
	}
	return __LIB_4__::func_115(*iParam0, iVar0, 0.1f, __LIB_8__::func_429(0, 0), __LIB_0__::func_196(bVar1, "RRFOR_STG2_COHIGH", "RRFOR_STG2_COLOW"), 0, 106);
}

void func_577(float fParam0)
{
	fParam0->f_132 = 1;
	*fParam0 = -3.5f;
	if (__LIB_8__::func_548())
	{
		fParam0->f_1 = "RCMP_F01S";
	}
	else
	{
		fParam0->f_1 = "RCMP_F01CS";
		fParam0->f_3 = "RCMP_F01AS";
	}
}

bool func_578(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_75(&(iParam1->f_13)))
	{
		fVar12 = __LIB_0__::func_265(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_3__::func_161(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_480(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_2__::func_526(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_2__::func_523(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_1__::func_148(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_2__::func_526(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

void func_579(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	__LIB_8__::func_542(48);
	__LIB_0__::func_703(0, -1);
}

void func_580(int iParam0)
{
	int iVar0;
	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			__LIB_8__::func_542(48);
		}
	}
}

void func_581(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (__LIB_7__::func_907(2, 128))
	{
	}
	__LIB_8__::func_369();
	if (__LIB_7__::func_907(2, 524288))
	{
	}
	else
	{
		switch (iVar0)
		{
			case 1:
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1838235148, true);
				if (!__LIB_7__::func_907(2, 134217728))
				{
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1312423920, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1889808927, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1302594744, true);
				}
				else
				{
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1197006729, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(461198205, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2104553981, true);
				}
				break;
			case 2:
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-828491182, true);
				if (!__LIB_8__::func_547() || !__LIB_7__::func_907(2, 134217728))
				{
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-401577020, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1186144424, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1227004918, true);
				}
				else
				{
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1524907897, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1579987, true);
				}
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-975072085, true);
				break;
			case 3:
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1103995043, true);
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-632511363, true);
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1165885976, true);
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-130631158, true);
				break;
			case 4:
				__LIB_8__::func_369();
				break;
		}
	}
}

void func_582(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_1__::func_154(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				__LIB_1__::func_240(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				__LIB_1__::func_240(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				__LIB_1__::func_240(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				__LIB_1__::func_240(400, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 412399755))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				__LIB_1__::func_240(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				__LIB_1__::func_240(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				__LIB_1__::func_240(401, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 709057512))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				__LIB_1__::func_240(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				__LIB_1__::func_240(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				__LIB_1__::func_240(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				__LIB_1__::func_240(398, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1478961327))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_8__::func_542(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				__LIB_1__::func_240(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				__LIB_1__::func_240(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				__LIB_1__::func_240(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				__LIB_1__::func_240(406, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1238404098))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				__LIB_1__::func_240(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				__LIB_1__::func_240(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				__LIB_1__::func_240(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				__LIB_1__::func_240(403, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1160548794))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_583(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (__LIB_1__::func_771(0))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(2))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(4))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(16))
			{
				if (iVar0 == 1)
				{
					__LIB_8__::func_550();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					__LIB_8__::func_550();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (__LIB_1__::func_771(1))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(3))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(7))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(1))
			{
				if (iVar0 == 1)
				{
					__LIB_8__::func_551();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					__LIB_8__::func_551();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (__LIB_1__::func_771(5))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(6))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(8))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(4))
			{
				if (iVar0 == 1)
				{
					__LIB_8__::func_552();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					__LIB_8__::func_552();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

void func_584(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			__LIB_1__::func_240(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			__LIB_1__::func_240(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (__LIB_0__::func_181())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!__LIB_1__::func_707(iVar0, 1, 0))
					{
						__LIB_1__::func_825(iVar0, 1, 752097756);
					}
					__LIB_1__::func_775(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					__LIB_1__::func_825(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					__LIB_1__::func_825(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			__LIB_8__::func_368();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

int func_585(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_586(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		if (ENTITY::_0xA7E51B53309EAC97(*bParam0))
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*bParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(bParam0);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(*bParam0) && PED::IS_PED_IN_ANY_VEHICLE(*bParam0, true))
			{
			}
			PED::DELETE_PED(bParam0);
		}
	}
}

int func_587(char[4] cParam0)
{
	if (__LIB_6__::func_872(cParam0, 8388608))
	{
		return 2;
	}
	if (__LIB_6__::func_872(cParam0, 4194304))
	{
		return 4;
	}
	if (__LIB_6__::func_872(cParam0, 4))
	{
		return 1;
	}
	if (__LIB_6__::func_875(cParam0, 1) && __LIB_0__::func_13(32768))
	{
		return 3;
	}
	return 0;
}

bool func_588(bool bParam0, int iParam1)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(bParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_589(bool bParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

void func_590(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

void func_591(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (PED::IS_PED_IN_GROUP(bParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(bParam0);
		}
		PED::SET_PED_CAN_RAGDOLL(bParam0, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, true);
	}
}

bool func_592(int iParam0)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

bool func_593(int iParam0)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_594(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_3[iVar0 /*13*/].f_2 == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_595(var uParam0, bool bParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = bParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = bParam1;
			StringCopy(&((uParam0[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

bool func_596(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return false;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(bParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(bParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_597(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(bParam0, joaat("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

void func_598(char[4] cParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(cParam0->f_5411))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(cParam0->f_5411))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(cParam0->f_5411, true, true);
		}
		if ((bParam1 && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(cParam0->f_5411, -1)) && !__LIB_6__::func_872(cParam0, 32768))
		{
			TASK::CLEAR_PED_TASKS(cParam0->f_5411, true, false);
		}
		if (!__LIB_0__::func_2() == 0)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(cParam0->f_5411, joaat("REL_GANG_DUTCHS"));
		}
		else
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(cParam0->f_5411, PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(PLAYER::PLAYER_PED_ID()));
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(cParam0->f_5411, false);
		}
		if (PED::GET_PED_CONFIG_FLAG(cParam0->f_5411, 136, true))
		{
			PED::SET_PED_CONFIG_FLAG(cParam0->f_5411, 136, false);
		}
	}
}

float func_599(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false), bParam2);
}

void func_600(int iParam0, int iParam1)
{
	if (Global_1900073.f_179[iParam0] != iParam1)
	{
		Global_1900073.f_179[iParam0] = iParam1;
	}
}

bool func_601(bool bParam0, int iParam1)
{
	int iVar0;
	if (bParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (__LIB_0__::func_27(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (__LIB_0__::func_27(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (__LIB_0__::func_27(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (__LIB_0__::func_27(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (__LIB_0__::func_27(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (__LIB_0__::func_27(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(bParam0))
		{
			return false;
		}
	}
	if (__LIB_0__::func_27(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (__LIB_0__::func_27(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(bParam0))
		{
			return false;
		}
	}
	return true;
}

void func_602(char* sParam0, int iParam1)
{
	int iVar0[1];
	if (CAM::_0xDD0B7C5AE58F721D(sParam0) && !CAM::_0x927B810E43E99932(sParam0))
	{
		CAM::_0xB8B207C34285E978(sParam0);
		iVar0[0] = iParam1;
		CAM::_0xFEB8646818294C75(sParam0, &iVar0);
	}
}

void func_603(bool bParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(bParam0, false);
	PED::_0x9E66708B2B41F14A(bParam0, -1);
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(bParam0);
	}
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		PED::SET_PED_CONFIG_FLAG(bParam0, 43, false);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(bParam0, PLAYER::PLAYER_ID(), 6);
	}
}

void func_604(bool bParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(bParam0, false);
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
		}
		PED::SET_PED_CONFIG_FLAG(bParam0, 43, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}
	PED::_0x9E66708B2B41F14A(bParam0, -1);
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(bParam0, PLAYER::PLAYER_ID(), 6);
	}
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(bParam0);
	}
}

bool func_605(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(bParam0, iParam1, bParam2, iParam3);
}

bool func_606(bool bParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam1) && !ENTITY::IS_ENTITY_DEAD(bParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(bParam0, true) && PED::GET_MOUNT(bParam0) == bParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(bParam0) && PED::GET_MOUNT(bParam0) == bParam1);
			}
		}
	}
	return false;
}

int func_607(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_17(*iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
		{
			HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(bParam1), 0);
			return 1;
		}
	}
	return 0;
}

bool func_608(int iParam0)
{
	if (Global_1900073.f_147[iParam0] == 1)
	{
		if (Global_1900073.f_26[iParam0 /*30*/] >= 2 && Global_1900073.f_26[iParam0 /*30*/] != 9)
		{
			return true;
		}
	}
	return false;
}

int func_609(int iParam0)
{
	return Global_40.f_11184[iParam0];
}

bool func_610(int iParam0)
{
	return Global_1900073.f_26[iParam0 /*30*/] == 4;
}

int func_611(int iParam0)
{
	return Global_1900073.f_215[iParam0];
}

int func_612(var uParam0, bool bParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_613(var uParam0, bool bParam1)
{
	struct<12> Var0;
	int iVar12;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 65)
	{
		if (uParam0->f_13[iVar12 /*12*/] == bParam1)
		{
			uParam0->f_13[iVar12 /*12*/] = { Var0 };
			return;
		}
		iVar12++;
	}
}

bool func_614(bool bParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_615(var uParam0, char* sParam1)
{
	return MISC::_DOES_STRING_EXIST_IN_STRING(&(uParam0->f_800), sParam1);
}

bool func_616(char[4] cParam0)
{
	if (__LIB_6__::func_872(cParam0, 4) && !__LIB_0__::func_91())
	{
		return true;
	}
	return false;
}

bool func_617(int iParam0)
{
	return Global_1835011[iParam0 /*74*/].f_63 & 64512 != 0;
}

int func_618(char[4] cParam0)
{
	return cParam0->f_599;
}

float func_619(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

bool func_620(bool bParam0, int iParam1)
{
	int iVar0;
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_621(bool bParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(bParam0);
	__LIB_0__::func_325(&iVar0);
}

bool func_622(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		default:
			return false;
	}
	return true;
}

int func_623(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2120502580:
			return 5;
		case -1784359682:
			return 1;
		case -518918701:
			return 3;
		case 820723243:
			return 0;
		case 977356591:
			return 4;
		case 1461274691:
			return 6;
		case 1710500858:
			return 2;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_624(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return false;
		default:
			break;
	}
	return false;
}

float func_625(int iParam0)
{
	return Global_1900073.f_169[iParam0];
}

float func_626(int iParam0)
{
	return Global_1900073.f_26[iParam0 /*30*/].f_4;
}

bool func_627(int iParam0)
{
	return __LIB_1__::func_672(iParam0, 16);
}

bool func_628(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(bParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_629(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(bParam0, joaat("HORSE_MANES"), 0, false);
	PED::_0xDF631E4BCE1B1FC4(bParam0, joaat("HORSE_TAILS"), 0, false);
}

void func_630(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(bParam0, joaat("HORSE_BLANKETS"), 0, false);
	PED::_0xDF631E4BCE1B1FC4(bParam0, joaat("HORSE_SADDLES"), 0, false);
	PED::_0xDF631E4BCE1B1FC4(bParam0, joaat("SADDLE_HORNS"), 0, false);
	PED::_0xDF631E4BCE1B1FC4(bParam0, joaat("SADDLE_STIRRUPS"), 0, false);
	PED::_0xDF631E4BCE1B1FC4(bParam0, joaat("HORSE_BEDROLLS"), 0, false);
	PED::_0xDF631E4BCE1B1FC4(bParam0, joaat("HORSE_SADDLEBAGS"), 0, false);
}

int func_631(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(bParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_SET_PED_BODY_COMPONENT(bParam0, iParam1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, true, true, true, true, false);
	}
	return 1;
}

void func_632(char[4] cParam0)
{
	if (__LIB_6__::func_872(cParam0, 1024))
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_8266);
	}
}

bool func_633(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == bParam1) && __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_634(char[4] cParam0)
{
	if (__LIB_6__::func_872(cParam0, 131072))
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_8267);
		if (StackVal)
		{
			return true;
		}
		return false;
	}
	else
	{
		Stack.Push(!__LIB_4__::func_584(&(cParam0->f_7375), 4));
		Stack.Push(&(cParam0->f_7375));
		Call_Loc(cParam0->f_7375.f_798);
		if (StackVal || StackVal)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_635(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == bParam1)
		{
			__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), iParam2);
		}
		iVar0++;
	}
}

void func_636(bool bParam0, bool bParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!PED::IS_PED_A_PLAYER(bParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	PED::_0xAAC0EE3B4999ABB5(bParam0, bParam1);
	PED::_0xF634E2892220EF34(bParam0, iParam2);
}

int func_637(var uParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
	{
		return 0;
	}
	if (bParam2 == 1)
	{
		if (!ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_804, sParam1))
		{
			bParam2 = false;
		}
	}
	return ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_804, sParam1, bParam2);
}

void func_638(char[4] cParam0, int iParam1)
{
	__LIB_4__::func_550(&(cParam0->f_7375), iParam1, 1);
}

int func_639(char[4] cParam0)
{
	switch (__LIB_6__::func_864(cParam0))
	{
		case 0:
			return joaat("CHAL_CTX_CHECKPOINT_1");
		case 1:
			return joaat("CHAL_CTX_CHECKPOINT_2");
		case 2:
			return joaat("CHAL_CTX_CHECKPOINT_3");
		case 3:
			return joaat("CHAL_CTX_CHECKPOINT_4");
		case 4:
			return joaat("CHAL_CTX_CHECKPOINT_5");
		case 5:
			return joaat("CHAL_CTX_CHECKPOINT_6");
		case 6:
			return joaat("CHAL_CTX_CHECKPOINT_7");
		case 7:
			return joaat("CHAL_CTX_CHECKPOINT_8");
		case 8:
			return joaat("CHAL_CTX_CHECKPOINT_9");
		case 9:
			return joaat("CHAL_CTX_CHECKPOINT_10");
		case 10:
			return joaat("CHAL_CTX_CHECKPOINT_11");
		case 11:
			return joaat("CHAL_CTX_CHECKPOINT_12");
		case 12:
			return joaat("CHAL_CTX_CHECKPOINT_13");
		case 13:
			return joaat("CHAL_CTX_CHECKPOINT_14");
		case 14:
			return joaat("CHAL_CTX_CHECKPOINT_15");
		case 15:
			return joaat("CHAL_CTX_CHECKPOINT_16");
		case 16:
			return joaat("CHAL_CTX_CHECKPOINT_17");
		case 17:
			return joaat("CHAL_CTX_CHECKPOINT_18");
		case 18:
			return joaat("CHAL_CTX_CHECKPOINT_19");
		case 19:
			return joaat("CHAL_CTX_CHECKPOINT_20");
		case 20:
			return joaat("CHAL_CTX_CHECKPOINT_21");
		case 21:
			return joaat("CHAL_CTX_CHECKPOINT_22");
		case 22:
			return joaat("CHAL_CTX_CHECKPOINT_23");
		case 23:
			return joaat("CHAL_CTX_CHECKPOINT_24");
		case 24:
			return joaat("CHAL_CTX_CHECKPOINT_25");
	}
	return 0;
}

bool func_640(bool bParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (!PED::IS_PED_INJURED(bParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(bParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_641()
{
	if (AUDIO::_0xFE5C6177064BD390(1))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 189, true);
	}
}

bool func_642(char[4] cParam0, int iParam1)
{
	return __LIB_0__::func_27(cParam0->f_606, iParam1);
}

int func_643(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("TSTAG_NO_TAGS");
		case 1:
			return 508286680;
		case 2:
			return -115118166;
		case 3:
			return 1274330613;
		case 4:
			return -1993529370;
		default:
			break;
	}
	return joaat("TSTAG_NO_TAGS");
}

int func_644(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("TSTAG_NO_TAGS");
		case 1:
			return 1843135693;
		case 2:
			return -1403291038;
		case 3:
			return -1066004925;
		case 4:
			return 1598344177;
		default:
			break;
	}
	return joaat("TSTAG_NO_TAGS");
}

struct<2> func_645(char[4] cParam0)
{
	if (!__LIB_3__::func_358(cParam0->f_5421))
	{
	}
	return cParam0->f_5421;
}

bool func_646(struct<2> Param0, bool bParam2)
{
	if (!__LIB_3__::func_358(Param0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		return false;
	}
	return ITEMSET::IS_IN_ITEMSET(bParam2, Param0);
}

void func_647(bool bParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	PED::_SET_PED_COMPONENT_ENABLED(bParam0, iVar0, false, false, false);
}

void func_648(char[4] cParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (__LIB_6__::func_872(cParam0, 2048))
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_8265);
	}
	fVar4 = 5f;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (!ENTITY::IS_ENTITY_DEAD(cParam0->f_5423[iVar0 /*65*/]))
		{
			FIRE::STOP_ENTITY_FIRE(cParam0->f_5423[iVar0 /*65*/], 0);
			vVar1 = { ENTITY::GET_ENTITY_COORDS(cParam0->f_5423[iVar0 /*65*/], true, false) };
			if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar1, fVar4) > 0)
			{
				FIRE::STOP_FIRE_IN_RANGE(vVar1, fVar4);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(cParam0->f_5423[iVar0 /*65*/].f_1))
		{
			FIRE::STOP_ENTITY_FIRE(cParam0->f_5423[iVar0 /*65*/].f_1, 0);
			vVar1 = { ENTITY::GET_ENTITY_COORDS(cParam0->f_5423[iVar0 /*65*/].f_1, true, false) };
			if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar1, fVar4) > 0)
			{
				FIRE::STOP_FIRE_IN_RANGE(vVar1, fVar4);
			}
		}
		iVar0++;
	}
}

bool func_649(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	if (iVar0 == joaat("REL_WILD_ANIMAL") || iVar0 == joaat("REL_WILD_ANIMAL_PREDATOR"))
	{
		return true;
	}
	return false;
}

bool func_650(char[4] cParam0)
{
	return __LIB_6__::func_872(cParam0, 4);
}

void func_651(bool bParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

bool func_652(char[4] cParam0)
{
	return cParam0->f_606 != 0;
}

void func_653(char[4] cParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_13146)))
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(&(cParam0->f_13146));
		UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
	}
}

void func_654(char[4] cParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_13162)))
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(&(cParam0->f_13162));
		UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
	}
}

int func_655(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return -1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(bParam0))
	{
		case joaat("CS_DUTCH"):
			return 0;
		case joaat("CS_JOHNMARSTON"):
			return 1;
		case joaat("CS_JAVIERESCUELLA"):
			return 2;
		case joaat("CS_BILLWILLIAMSON"):
			return 3;
		case joaat("CS_UNCLE"):
			return 4;
		case joaat("CS_HOSEAMATTHEWS"):
			return 5;
		case joaat("CS_MICAHBELL"):
			return 6;
		case joaat("CS_CHARLESSMITH"):
			return 7;
		case joaat("CS_SEAN"):
			return 8;
		case joaat("CS_LENNY"):
			return 9;
		case joaat("CS_JOSIAHTRELAWNY"):
			return 23;
		case joaat("CS_JACKMARSTON_TEEN"):
		case joaat("CS_JACKMARSTON"):
			return 14;
		case joaat("CS_ABIGAILROBERTS"):
			return 13;
		case joaat("CS_MRSADLER"):
			return 11;
		case joaat("CS_EAGLEFLIES"):
			return 26;
		case joaat("CS_HERCULE"):
			return 28;
		case joaat("CS_LEON"):
			return 30;
		case joaat("CS_BAPTISTE"):
			return 29;
		case joaat("CS_RAINSFALL"):
			return 31;
		case joaat("CS_PAYTAH"):
			return 35;
		case joaat("CS_CAPTAINMONROE"):
			return 32;
		case joaat("CS_ARCHIBALDJAMESON"):
			return 33;
		case joaat("CS_LEIGHGRAY"):
			return 34;
		case joaat("CS_TOMDICKENS"):
			return 41;
		case joaat("CS_MRPEARSON"):
			return 17;
		case joaat("CS_KIERAN"):
			return 10;
		case joaat("CS_MARYBETH"):
			return 15;
		case joaat("CS_MOLLYOSHEA"):
			return 16;
		case joaat("CS_LEOSTRAUSS"):
			return 18;
		case joaat("CS_SUSANGRIMSHAW"):
			return 19;
		case joaat("CS_KAREN"):
			return 20;
		case joaat("CS_REVSWANSON"):
			return 21;
		case joaat("CS_TILLY"):
			return 22;
	}
	return -1;
}

bool func_656(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(bParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(bParam0);
		}
	}
	return true;
}

int func_657(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar1 /*13*/].f_2))
			{
				if (ENTITY::GET_ENTITY_MODEL(bParam1) == ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar1 /*13*/].f_2))
				{
					iVar0++;
					if (bParam1 == uParam0->f_3[iVar1 /*13*/].f_2)
					{
						return iVar0;
					}
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_658(char[4] cParam0)
{
	__LIB_4__::func_520(&(cParam0->f_13121));
}

bool func_659(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_12;
}

void func_660(char[4] cParam0)
{
	if (!__LIB_3__::func_358(cParam0->f_5421))
	{
		cParam0->f_5421 = { __LIB_3__::func_355() };
	}
}

void func_661(char[4] cParam0, float fParam1)
{
	__LIB_4__::func_527(&(cParam0->f_7375), fParam1);
}

void func_662(char[4] cParam0, float fParam1)
{
	__LIB_4__::func_528(&(cParam0->f_7375), fParam1);
}

int func_663(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_10;
}

int func_664(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_9;
}

void func_665(char[4] cParam0, int iParam1)
{
	__LIB_0__::func_88(&(cParam0->f_7375), iParam1);
}

void func_666(int iParam0)
{
	if (!__LIB_1__::func_662(iParam0))
	{
		__LIB_1__::func_683(&(Global_1900073.f_1), iParam0);
	}
}

bool func_667(char[4] cParam0)
{
	if (!__LIB_0__::func_86(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			__LIB_6__::func_890(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			__LIB_6__::func_890(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			__LIB_6__::func_890(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			__LIB_6__::func_890(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			__LIB_6__::func_890(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			__LIB_6__::func_890(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			__LIB_6__::func_890(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			__LIB_6__::func_890(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			__LIB_6__::func_890(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			__LIB_6__::func_890(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			__LIB_6__::func_890(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			__LIB_6__::func_890(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			__LIB_6__::func_890(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			__LIB_6__::func_890(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			__LIB_6__::func_890(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			__LIB_6__::func_890(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			__LIB_6__::func_890(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			__LIB_6__::func_890(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			__LIB_6__::func_890(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			__LIB_6__::func_890(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			__LIB_6__::func_890(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			__LIB_6__::func_890(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			__LIB_6__::func_890(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			__LIB_6__::func_890(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			__LIB_6__::func_890(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			__LIB_6__::func_890(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			__LIB_6__::func_890(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			__LIB_6__::func_890(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			__LIB_6__::func_890(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			__LIB_6__::func_890(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			__LIB_6__::func_890(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			__LIB_6__::func_890(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			__LIB_6__::func_890(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !__LIB_0__::func_86(cParam0->f_5417);
}

void func_668(char[4] cParam0)
{
	var uVar0;
	if (!__LIB_6__::func_872(cParam0, 524288))
	{
		MemCopy(&uVar0, {__LIB_0__::func_631(cParam0->f_607)}, 8);
		__LIB_4__::func_561(&uVar0, 15000, 0, 0, 0, 1);
		__LIB_6__::func_869(cParam0, 524288);
	}
}

int func_669(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_21;
}

void func_670(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_10 = iParam2;
	BUILTIN::SETTIMERA(0);
}

bool func_671(char[4] cParam0)
{
	return __LIB_4__::func_566(&(cParam0->f_7375));
}

void func_672(char[4] cParam0)
{
	char cVar0[64];
	if (((!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12) || PED::IS_PED_FATALLY_INJURED(Global_35)) || ENTITY::GET_ENTITY_HEALTH(Global_35) <= 0)
	{
		if (__LIB_0__::func_0(cParam0))
		{
			__LIB_6__::func_886(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			__LIB_6__::func_892(cParam0, cVar0);
			__LIB_6__::func_879(cParam0, 2);
		}
	}
}

void func_673(char[4] cParam0)
{
	char cVar0[64];
	if ((CAM::IS_SCREEN_FADED_OUT() && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
	{
		if (__LIB_0__::func_0(cParam0))
		{
			__LIB_6__::func_886(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			__LIB_6__::func_892(cParam0, cVar0);
			__LIB_6__::func_879(cParam0, 2);
		}
	}
}

void func_674(int iParam0, int iParam1)
{
	if (__LIB_1__::func_672(iParam0, iParam1))
	{
		__LIB_1__::func_681(&(Global_1900073.f_2[iParam0]), iParam1);
	}
}

void func_675(int iParam0)
{
	if (__LIB_1__::func_662(iParam0))
	{
		__LIB_1__::func_681(&(Global_1900073.f_1), iParam0);
	}
}

bool func_676(char[4] cParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((__LIB_5__::func_31(&(cParam0->f_5423[iVar0 /*65*/])) && ENTITY::IS_ENTITY_AN_OBJECT(cParam0->f_5423[iVar0 /*65*/])) && ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(cParam0->f_5423[iVar0 /*65*/]) != iParam1) && ENTITY::GET_ENTITY_MODEL(cParam0->f_5423[iVar0 /*65*/]) == ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_677(int iParam0)
{
	float fVar0;
	float fVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return iParam0;
	}
	if (Global_1347477.f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3++;
	if (Global_1347477.f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477.f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = __LIB_5__::func_439(MISC::ABSF(fVar1) < 1f, __LIB_5__::func_439(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

char* func_678(bool bParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return "";
	}
	if (bParam0 == Global_35)
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
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	return __LIB_0__::func_140(iVar0);
}

void func_679(char[4] cParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_5__::func_24(iParam1);
	if (__LIB_4__::func_976(iVar0))
	{
		cParam0->f_1[iVar0 /*22*/].f_9 = iParam2;
	}
}

void func_680(char[4] cParam0, int iParam1)
{
	cParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_12 = 1;
}

void func_681(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_24(iParam2);
	if (!__LIB_4__::func_976(iVar0))
	{
		return;
	}
	iVar1 = __LIB_4__::func_564(iParam3);
	if (!__LIB_4__::func_565(iVar1))
	{
		return;
	}
	cParam0->f_1[iVar0 /*22*/][iVar1] = *iParam1;
	MISC::SET_BIT(&(cParam0->f_1[iVar0 /*22*/].f_17), iVar1);
}

void func_682(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_13 = { cParam2 };
}

void func_683(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_21 = iParam2;
}

bool func_684(char* sParam0)
{
	return __LIB_6__::func_894(sParam0);
}

void func_685(char[4] cParam0, int iParam1, int iParam2)
{
	__LIB_1__::func_681(&(cParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_11), iParam2);
	if (iParam2 == 8388608)
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
}

void func_686(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = __LIB_0__::func_158(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = __LIB_0__::func_861(iParam4);
		}
		else if (iParam4 != Global_1946804.f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_PED_COMPONENT_CATEGORY(iParam4, PED::_GET_METAPED_TYPE(bParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::_0xDF631E4BCE1B1FC4(bParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::_SET_PED_COMPONENT_DISABLED(bParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0);
			}
			iVar0++;
		}
	}
}

void func_687()
{
	bool bVar0;
	bVar0 = __LIB_0__::func_147();
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&bVar0);
	__LIB_0__::func_509(0);
}

struct<4> func_688(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_13;
}

void func_689(char[4] cParam0)
{
	__LIB_0__::func_108(&(cParam0->f_7375));
}

void func_690(char[4] cParam0)
{
	int iVar0;
	bool bVar1;
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
	{
		return;
	}
	iVar0 = (ITEMSET::GET_ITEMSET_SIZE(Global_43616) - 1);
	while (iVar0 >= 0)
	{
		bVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43616));
		if (ENTITY::DOES_ENTITY_EXIST(bVar1))
		{
			if (DECORATOR::DECOR_EXIST_ON(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43616), __LIB_4__::func_567()))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(bVar1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar1, true, true);
				}
				ENTITY::DELETE_ENTITY(&bVar1);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

bool func_691(char[4] cParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_24(iParam1);
	if (!__LIB_4__::func_976(iVar0))
	{
		return false;
	}
	iVar1 = __LIB_4__::func_564(iParam2);
	if (!__LIB_4__::func_565(iVar1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(cParam0->f_1[iVar0 /*22*/].f_17, iVar1);
}

bool func_692(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return __LIB_1__::func_241(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_693(int iParam0, bool bParam1, bool bParam2)
{
	if (__LIB_2__::func_173(iParam0, bParam1, bParam2, 1))
	{
		return true;
	}
	return false;
}

int func_694(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			iVar0 = __LIB_7__::func_666(iVar1);
		}
	}
	return iVar0;
}

void func_695(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_672(iParam0, iParam1))
	{
		__LIB_1__::func_683(&(Global_1900073.f_2[iParam0]), iParam1);
	}
}

void func_696(char[4] cParam0)
{
	__LIB_4__::func_625(&(cParam0->f_7375));
}

struct<8> func_697(char[4] cParam0)
{
	struct<8> Var0;
	int iVar8;
	struct<8> Var9;
	MemCopy(&Var0, {__LIB_4__::func_742(cParam0->f_607)}, 8);
	iVar8 = __LIB_5__::func_24(__LIB_6__::func_864(cParam0));
	Var9 = { Var0 };
	if (iVar8 >= 0)
	{
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar8, 64);
	}
	return Var9;
}

void func_698(char[4] cParam0, int iParam1)
{
	__LIB_6__::func_868(cParam0, 64);
	__LIB_1__::func_683(&(cParam0->f_606), iParam1);
}

void func_699(char[4] cParam0, int iParam1)
{
	__LIB_6__::func_868(cParam0, 64);
	__LIB_1__::func_681(&(cParam0->f_606), iParam1);
}

void func_700(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	if (__LIB_0__::func_699(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1357549.f_3[4]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(bParam0, Global_1357549.f_3[4], true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 909522);
}

bool func_701(char[4] cParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (!__LIB_5__::func_31(&(cParam0->f_5423[iVar0 /*65*/])))
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_702(bool bParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	return __LIB_0__::func_195(vVar0, vVar3, vParam1);
}

void func_703(char[4] cParam0, bool bParam1)
{
	struct<7> Var0;
	Var0 = __LIB_0__::func_299(__LIB_3__::func_918(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = __LIB_5__::func_24(__LIB_6__::func_864(cParam0));
	Var0.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = __LIB_0__::func_398(0);
	if (bParam1)
	{
		Var0.f_3 = 5;
	}
	else
	{
		Var0.f_3 = __LIB_6__::func_863(cParam0);
	}
	TELEMETRY::_TELEMETRY_MISSION_OVER(&(Global_1835011[cParam0->f_607 /*74*/].f_8), &Var0);
}

void func_704(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(cParam0->f_5423[iVar0 /*65*/])))
		{
			if (!ENTITY::IS_ENTITY_DEAD(cParam0->f_5423[iVar0 /*65*/]))
			{
				if (ENTITY::IS_ENTITY_A_PED(cParam0->f_5423[iVar0 /*65*/]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(cParam0->f_5423[iVar0 /*65*/]), false, true);
				}
			}
		}
		iVar0++;
	}
	if (__LIB_3__::func_358(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_4__::func_955(cParam0->f_5421))
		{
			iVar1 = __LIB_4__::func_956(cParam0->f_5421, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), false, true);
				}
			}
			iVar0++;
		}
	}
}

bool func_705(char[4] cParam0, int iParam1, int iParam2)
{
	return __LIB_0__::func_27(cParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_11, iParam2);
}

void func_706(char[4] cParam0)
{
	__LIB_5__::func_35(&(cParam0->f_638));
	__LIB_5__::func_36(&(cParam0->f_819));
	__LIB_5__::func_37(&(cParam0->f_1020));
	__LIB_5__::func_38(&(cParam0->f_1081));
	__LIB_5__::func_39(&(cParam0->f_1126));
	__LIB_5__::func_40(&(cParam0->f_5147));
	__LIB_4__::func_526(&(cParam0->f_1124));
	__LIB_5__::func_41(&(cParam0->f_5188));
	__LIB_5__::func_42(&(cParam0->f_5239));
	__LIB_5__::func_43(&(cParam0->f_5249));
	__LIB_5__::func_44(&(cParam0->f_5265));
	__LIB_5__::func_43(&(cParam0->f_5286));
}

void func_707(char[4] cParam0, int iParam1, int iParam2)
{
	__LIB_1__::func_683(&(cParam0->f_1[__LIB_5__::func_24(iParam1) /*22*/].f_11), iParam2);
}

void func_708(char[4] cParam0, char[4] cParam1, int iParam2)
{
	int iVar0;
	if (__LIB_6__::func_872(cParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_5__::func_434(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_5__::func_461(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0 /*3*/] = cParam1;
	cParam0->f_1020[iVar0 /*3*/].f_2 = (cParam0->f_1020[iVar0 /*3*/].f_2 || iParam2);
}

void func_709(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (__LIB_6__::func_872(cParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_4__::func_967(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_5__::func_462(&(cParam0->f_819));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_819[iVar0 /*5*/] = cParam1;
	cParam0->f_819[iVar0 /*5*/].f_4 = (cParam0->f_819[iVar0 /*5*/].f_4 || iParam2);
	cParam0->f_819[iVar0 /*5*/].f_1 = iParam3;
	cParam0->f_819[iVar0 /*5*/].f_2 = iParam4;
}

void func_710(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (!__LIB_0__::func_296(0, 0, 1) || bParam0)
	{
		iVar0 = __LIB_0__::func_786();
		iVar1 = __LIB_0__::func_416(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = __LIB_5__::func_439(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = __LIB_5__::func_439(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnWithHonor");
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 1, fVar3);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 2, fVar2);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 3, fVar4);
	}
	else
	{
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
	}
}

bool func_711(char[4] cParam0, char* sParam1, bool bParam2)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, sParam1, 24);
	if (__LIB_1__::func_104(&(cParam0->f_5310), cVar0, 0, -1, bParam2, 0))
	{
		return true;
	}
	return false;
}

void func_712(char[4] cParam0)
{
	if (__LIB_0__::func_84(&(cParam0->f_7375), 128) || __LIB_0__::func_84(&(cParam0->f_7375), 256))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(cParam0->f_7375.f_804);
		}
		__LIB_5__::func_67(&(cParam0->f_7375));
		__LIB_4__::func_550(&(cParam0->f_7375), 128, 1);
		__LIB_4__::func_550(&(cParam0->f_7375), 256, 1);
		__LIB_4__::func_550(&(cParam0->f_7375), 4096, 1);
	}
}

void func_713(char[4] cParam0)
{
	__LIB_5__::func_69(&(cParam0->f_7375));
}

bool func_714(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_2__::func_824(iParam0))
	{
		return false;
	}
	if (!__LIB_3__::func_746(iParam1))
	{
		return false;
	}
	if (bParam2)
	{
		return __LIB_4__::func_843(iParam0, iParam1);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_715(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			iVar0 = __LIB_0__::func_76(iParam0);
			if (__LIB_5__::func_247(iVar0, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				if ((__LIB_4__::func_844(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((__LIB_4__::func_844(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if (Global_1835011[iVar0 /*74*/].f_28 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(Global_1835011[iVar0 /*74*/].f_27, iVar2);
				if (!__LIB_5__::func_542(iVar0))
				{
					MAP::_BLIP_SET_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, -1986290853);
				}
				if (__LIB_3__::func_740(&(Global_1835011[iVar0 /*74*/]), 2))
				{
					MAP::_BLIP_SET_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, 724623647);
				}
				Global_1835011[iVar0 /*74*/].f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = __LIB_0__::func_76(iParam0);
			if (__LIB_5__::func_242(iVar1, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				switch (__LIB_4__::func_824(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					case 2103462781:
						iVar2 = -1032930804;
						break;
					case -1485222547:
						iVar2 = 13700166;
						break;
					case 1673015813:
						iVar2 = -592708248;
						break;
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = __LIB_4__::func_824(iVar1);
			}
			if (Global_1347702[iVar1 /*49*/].f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(Global_1347702[iVar1 /*49*/].f_37, iVar2);
				__LIB_4__::func_825(iVar1);
				Global_1347702[iVar1 /*49*/].f_38 = iVar2;
			}
			break;
	}
}

int func_716(int iParam0)
{
	int iVar0;
	if (__LIB_7__::func_678(iParam0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = __LIB_0__::func_398(__LIB_0__::func_97(0));
			}
		}
		else
		{
			iVar0 = PED::_GET_LAST_MOUNT(__LIB_7__::func_644());
		}
	}
	else if (__LIB_0__::func_2() == -1)
	{
		iVar0 = __LIB_0__::func_398(0);
	}
	else
	{
		iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}
	return iVar0;
}

void func_717(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if ((STREAMING::IS_MODEL_VALID(cParam0->f_8269.f_2484[iVar0]) && cParam0->f_8269.f_2484[iVar0] == ENTITY::GET_ENTITY_MODEL(iParam1)) || (__LIB_4__::func_649(cParam0->f_8269.f_2484[iVar0]) && __LIB_4__::func_649(ENTITY::GET_ENTITY_MODEL(iParam1))))
			{
				if (__LIB_5__::func_94(sParam2, iVar0))
				{
					if (bParam3)
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1, sParam2, 0f);
					}
					else
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam1, 0f);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_718(char[4] cParam0, int iParam1)
{
	__LIB_5__::func_568(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_719(char[4] cParam0, int iParam1, int iParam2)
{
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	__LIB_6__::func_910(&(Global_1835011[cParam0->f_607 /*74*/].f_22), iParam1, iParam2);
}

void func_720(char[4] cParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_693(__LIB_3__::func_918(cParam0->f_607));
	if (__LIB_0__::func_318(iVar0))
	{
		__LIB_4__::func_997(iVar0, iParam1);
	}
}

int func_721(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_2__::func_824(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			__LIB_4__::func_713(iParam0, &(Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/]));
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_722(char[4] cParam0)
{
	__LIB_1__::func_193(!__LIB_6__::func_861(cParam0, 32), 1);
	__LIB_6__::func_860(cParam0, 32);
}

void func_723(char[4] cParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = 0;
	if (__LIB_6__::func_882(cParam0))
	{
		fVar1 = BUILTIN::TO_FLOAT((LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX()) - Global_2621440[0 /*12066*/].f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(50, 200)) / 1000f));
			iVar0 = (iVar0 + BUILTIN::ROUND((fVar1 * fVar2)));
		}
	}
	__LIB_2__::func_590(iVar0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
}

int func_724(vector3 vParam0, bool bParam3)
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
					if (BUILTIN::VDIST(__LIB_1__::func_469(iVar1), vParam0) < __LIB_5__::func_439(__LIB_0__::func_626(iVar1) == 0f, bParam3, __LIB_0__::func_626(iVar1)))
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

void func_725(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	__LIB_0__::func_304(0);
	__LIB_5__::func_390(__LIB_3__::func_918(cParam0->f_607), Var0, Var4, __LIB_5__::func_24(iParam9), __LIB_5__::func_24(iParam10));
}

void func_726(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	__LIB_2__::func_259(&(uParam0->f_1));
}

bool func_727(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_0__::func_899(fParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_4__::func_89(fParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_1__::func_561(fParam4);
	}
	if (__LIB_0__::func_899(fParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (__LIB_1__::func_583(fParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return true;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return false;
}

void func_728(var uParam0, int iParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	__LIB_5__::func_217(uParam0);
	__LIB_5__::func_205(uParam0);
	__LIB_5__::func_208(uParam0, iParam1, 0);
	__LIB_5__::func_418(uParam0, iParam1);
	__LIB_5__::func_426(*uParam0, iParam1);
}

void func_729(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	__LIB_5__::func_532(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
}

void func_730(int iParam0)
{
	Global_1327590.f_10.f_10 = iParam0;
}

void func_731(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_8(&(uParam0->f_1), 524288);
	}
	else
	{
		__LIB_0__::func_7(&(uParam0->f_1), 524288);
	}
}

void func_732(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 262144);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 262144);
	}
}

void func_733(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar4 = 0;
	__LIB_1__::func_266(&iVar0, vParam1, 0f, 0f, 0f, iParam4, iParam4, iParam4);
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar0))
	{
		return;
	}
	iVar5 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar5))
	{
		iVar2 = ENTITY::_0x886171A12F400B89(iVar0, iVar5, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar5));
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (__LIB_4__::func_893(iParam0, ENTITY::GET_ENTITY_MODEL(iVar1)))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar1))
					{
						if ((__LIB_0__::func_2() != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) || __LIB_0__::func_2() == -1)
						{
							iVar4++;
							if (iParam5 == 1 && ENTITY::IS_ENTITY_UPRIGHT(iVar1, 90f))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
							}
							else
							{
								ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, true);
							}
						}
					}
				}
			}
			iVar3++;
		}
		ITEMSET::_CLEAR_ITEMSET(iVar5);
		ITEMSET::DESTROY_ITEMSET(iVar5);
	}
	if (iVar4 > 0)
	{
	}
	__LIB_0__::func_172(iVar0);
}

int func_734(int iParam0, int iParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	if (iParam1 == 0 || CAM::IS_SCREEN_FADED_IN())
	{
		return 1;
	}
	return 0;
}

void func_735(int iParam0)
{
	if (Global_1900325.f_23 != iParam0)
	{
		Global_1900325.f_23 = iParam0;
	}
}

char* func_736(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		return "mini_games@fivefingerfillet_launch";
	}
	else if (iParam1 == 1)
	{
		return "mini_games@fivefingerfillet_female";
	}
	return "mini_games@fivefingerfillet";
}

void func_737()
{
	STREAMING::_0x4EDDD9E9CA5AF985(joaat("WORLD_CAMP_JAVIER_KNIFE"));
}

void func_738(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	Global_1900325 = uParam0;
	Global_1900325.f_1 = uParam1;
	Global_1900325.f_2 = uParam2;
	Global_1900325.f_3 = uParam3;
	Global_1900325.f_4 = uParam4;
}

void func_739(vector3 vParam0, var uParam3)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	int iVar5;
	float fVar6;
	Global_1900325.f_5 = { vParam0 };
	Global_1900325.f_8 = uParam3;
	vVar0 = { Global_1900325.f_5 };
	vVar0.f_2 = (vVar0.z + 0.1f);
	iVar5 = MISC::_0xBBE5B63EFFB08E68(vVar0, 17, &(vVar0.f_2), &uVar3, &uVar4);
	if (iVar5 == 1)
	{
		fVar6 = (Global_1900325.f_5.f_2 - vVar0.z);
		if (fVar6 > 0.1f || fVar6 < -0.1f)
		{
		}
		else
		{
			Global_1900325.f_5.f_2 = vVar0.z;
		}
	}
}

bool func_740(int iParam0)
{
	return Global_1899528.f_61.f_4 != -1;
}

int func_741(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 3;
		case 0:
			return 1;
		case 6:
			return 7;
		case 1:
			switch (iParam1)
			{
				case 5:
					return 9;
				case 38:
					return 8;
				case 69:
					return 10;
				case 71:
					return 2;
				case 98:
					return 9;
				case 9:
					return 8;
				default:
					break;
			}
			return 2;
		case 3:
			switch (iParam1)
			{
				case 26:
					return 12;
				case 92:
					return 11;
				default:
					break;
			}
			return 4;
		case 4:
			return 5;
		case 5:
			return 6;
		default:
			break;
	}
	return 0;
}

void func_742(char* sParam0)
{
	vector3 vVar0;
	int iVar3;
	Global_1900325.f_16[0] = (Global_1900325.f_8 - 90f);
	Global_1900325.f_16[1] = (Global_1900325.f_8 + 90f);
	vVar0 = { Global_1900325.f_5 };
	vVar0.f_2 = (vVar0.z - 0.8f);
	iVar3 = 0;
	while (iVar3 < 2)
	{
		Global_1900325.f_9[iVar3 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam0, "idle_01", vVar0, 0f, 0f, Global_1900325.f_16[iVar3], 0f, 2) };
		Global_1900325.f_9[iVar3 /*3*/].f_2 = vVar0.z;
		iVar3++;
	}
	if (Global_1900325.f_1 == 1)
	{
		Global_1900325.f_34 = 1;
	}
	else
	{
		Global_1900325.f_34 = 0;
	}
	Global_1900325.f_37 = 1;
}

int func_743(int iParam0)
{
	int iVar0;
	if (iParam0 < 0 || iParam0 > 3)
	{
		iParam0 = 0;
	}
	if (Global_1900325.f_4 == 76)
	{
		if (iParam0 == 0)
		{
			iVar0 = 50;
		}
		else if (iParam0 == 1)
		{
			iVar0 = 100;
		}
		else if (iParam0 == 2)
		{
			iVar0 = 200;
		}
		else
		{
			iVar0 = 400;
		}
	}
	else if (Global_1900325.f_4 == 26)
	{
		if (iParam0 == 0)
		{
			iVar0 = 75;
		}
		else if (iParam0 == 1)
		{
			iVar0 = 150;
		}
		else if (iParam0 == 2)
		{
			iVar0 = 300;
		}
		else
		{
			iVar0 = 600;
		}
	}
	else if (Global_1900325.f_4 == 92)
	{
		if (iParam0 == 0)
		{
			iVar0 = 100;
		}
		else if (iParam0 == 1)
		{
			iVar0 = 200;
		}
		else if (iParam0 == 2)
		{
			iVar0 = 400;
		}
		else
		{
			iVar0 = 800;
		}
	}
	else if (iParam0 == 0)
	{
		iVar0 = 10;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 20;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 40;
	}
	else
	{
		iVar0 = 80;
	}
	return iVar0;
}

bool func_744()
{
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_CAMP_JAVIER_KNIFE"), 9, 0, 0);
	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_CAMP_JAVIER_KNIFE"), false))
	{
		return false;
	}
	return true;
}

int func_745(var uParam0)
{
	return uParam0->f_98;
}

void func_746(int iParam0)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("WORLD_CAMP_JAVIER_KNIFE")))
	{
		return;
	}
	vVar0 = { Global_1900325.f_9[Global_1900325.f_34 /*3*/] };
	vVar0 = { vVar0 + Global_1900325.f_19 };
	TASK::CLEAR_PED_TASKS(iParam0, true, false);
	TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, joaat("WORLD_CAMP_JAVIER_KNIFE"), vVar0, Global_1900325.f_16[Global_1900325.f_34], -1, false, true, 0, 0f, false);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::_0x2208438012482A1A(iParam0, false, false);
}

bool func_747(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(*uParam0, iParam1);
}

bool func_748(var uParam0)
{
	return (uParam0->f_4 == 1 && uParam0->f_2 == 1);
}

bool func_749(var uParam0)
{
	if (uParam0->f_23 == 0 || uParam0->f_22 == 0)
	{
		return false;
	}
	return uParam0->f_23 == uParam0->f_22;
}

bool func_750(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return ENTITY::_0xBA2A089E60ED1163(uParam1, iParam0, joaat("CURRENCY_CASH"), 0, 0);
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money"))
	{
		return false;
	}
	*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_money");
	return true;
}

bool func_751(var uParam0, int iParam1)
{
	char* sVar0;
	sVar0 = __LIB_7__::func_751(uParam0, iParam1);
	return NETWORK::_0xE2C3CEC3C0903A00(sVar0);
}

void func_752(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MELEE_GRAPPLE"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_QUICK_USE_ITEM"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_QUICK_SELECT_INSPECT"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_OPEN_JOURNAL"), false);
		if (iParam0 != 5)
		{
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_DYNAMIC_SCENARIO"), false);
		}
	}
	if (__LIB_4__::func_867(iParam0) || iParam0 == 4)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 2, true);
		PED::SET_PED_RESET_FLAG(Global_35, 219, true);
		PED::SET_PED_RESET_FLAG(Global_35, 220, true);
		PED::SET_PED_RESET_FLAG(Global_35, 187, true);
		PED::SET_PED_RESET_FLAG(Global_35, 129, true);
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		PED::SET_PED_RESET_FLAG(Global_35, 247, true);
		PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		PED::SET_PED_RESET_FLAG(Global_35, 237, true);
	}
}

void func_753(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (bParam2 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, 11, iParam1);
}

void func_754(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_0xA520C7B05FA4EB2A(Global_1945938[iVar0 /*18*/].f_3, iParam1);
}

void func_755(var uParam0)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_105(1);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	UIFEED::_0xDD1232B332CBB9E7(2, 1, 0);
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!Global_1935630.f_12)
	{
		if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		}
	}
	__LIB_4__::func_517(1);
	HUD::_HIDE_HUD_COMPONENT(372886907);
	if (__LIB_0__::func_2() == -1)
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(10000);
	}
	__LIB_4__::func_896(0);
	iVar0 = __LIB_0__::func_298(0);
	if (__LIB_0__::func_6(iVar0))
	{
		iVar1 = __LIB_0__::func_700(iVar0);
		if (iVar1 == 4)
		{
			MISC::_0x1096603B519C905F(__LIB_7__::func_762(uParam0->f_1, __LIB_0__::func_2() != -1));
		}
	}
	__LIB_0__::func_267(0);
	ENTITY::_0x18FF3110CF47115D(Global_35, 9, 0);
	__LIB_7__::func_723();
	AUDIO::START_AUDIO_SCENE(__LIB_7__::func_724(uParam0->f_1));
}

int func_756(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	uVar0 = 3;
	iVar4 = 0;
	__LIB_7__::func_711(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return 0;
	}
	iVar5 = iParam3;
	iVar7 = 0;
	while (iVar7 < iParam3)
	{
		iVar6 = (*uParam2)[iVar7];
		if (!__LIB_4__::func_891(&uVar0, iVar6))
		{
			iVar5 = (iVar5 - 1);
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if ((*uParam2)[iVar8] == iVar6)
				{
					iVar5 = (iVar5 - 1);
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam3)
		{
			iVar6 = (*uParam2)[iVar7];
			if (__LIB_4__::func_891(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam3)
				{
					if ((*uParam2)[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return 0;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (__LIB_4__::func_891(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam3)
			{
				if ((*uParam2)[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*uParam4 = iVar6;
					return 1;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return 0;
}

void func_757(var uParam0)
{
	if (__LIB_0__::func_139(*uParam0))
	{
		__LIB_1__::func_748(uParam0, 1, 0);
	}
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0f;
	uParam0->f_5 = 1;
}

void func_758(int iParam0, char* sParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	__LIB_2__::func_522(iParam0, sParam1, 0, 1, 1);
	AUDIO::PLAY_SOUND_FRONTEND("MONEY", "HUD_DOMINOS_SOUNDSET", true, 0);
}

int func_759(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar12;
	iVar0 = 0;
	vVar2 = -1;
	vVar2.f_1 = -1;
	vVar2.f_2 = -1;
	iVar1 = 0;
	while (iVar1 < 33)
	{
		if (__LIB_7__::func_731(iVar1, &vVar2, 1) && vVar2.y == iParam0)
		{
			iVar12 = __LIB_1__::func_317(iParam0, iVar1);
			if (__LIB_0__::func_6(iVar12))
			{
				iVar0 = (iVar0 + __LIB_7__::func_763(iVar12));
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_760()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(Local_14))
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Local_14);
		iVar2 = MISC::_GET_ENTITY_FROM_ITEM(iVar1);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::_0x88AD6CC10D8D35B2(iVar2)) && !ENTITY::_0xA7E51B53309EAC97(iVar2))
		{
			ENTITY::DELETE_ENTITY(&iVar2);
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(Local_14);
}

bool func_761()
{
	return Global_1347400.f_76;
}

void func_762(var uParam0, int iParam1)
{
	uParam0->f_13105 = iParam1;
}

void func_763(int* iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_764()
{
	Global_1357549 = 0;
	__LIB_0__::func_326(1);
}

void func_765(int iParam0)
{
	Global_1347400.f_76 = iParam0;
}

int func_766(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar0 /*3*/]))
		{
			if (MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0 /*3*/], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_767(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
}

void func_768(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		return;
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(Local_14);
	if (uParam0->f_13179 == -1 || uParam0->f_13179 > (iVar0 - 1))
	{
		uParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = uParam0->f_13179;
	while (iVar1 >= 0)
	{
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_14));
		if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			ITEMSET::REMOVE_FROM_ITEMSET(iVar3, Local_14);
		}
		iVar2++;
		if (iVar2 > 5)
		{
		}
		else
		{
			iVar1 = (iVar1 + -1);
		}
	}
	uParam0->f_13179 = (iVar1 - 1);
	if (iVar1 <= 0)
	{
		uParam0->f_13179 = (ITEMSET::GET_ITEMSET_SIZE(Local_14) - 1);
	}
}

void func_769(int iParam0)
{
	Global_36616 = (Global_36616 || __LIB_0__::func_347(iParam0));
}

void func_770()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_DOWN_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LEFT_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_RIGHT_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UP_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_DOWN_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LEFT_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_RIGHT_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UP_ONLY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
}

void func_771(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 130, bParam1);
			PED::SET_PED_CONFIG_FLAG(iVar0, 315, bParam1);
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, bParam3);
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 359, false);
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0);
			OBJECT::_0xA22712E8471AA08E(iVar1, 0, 0);
		}
		if (iParam2 == 1)
		{
			MISC::_0xE98D55C5983F2509(iParam0);
		}
	}
}

var func_772(int iParam0, vector3 vParam1, float fParam4, float fParam5, int iParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, fParam4, fParam5, iParam6, iParam7);
}

bool func_773(var uParam0, int iParam1)
{
	return __LIB_0__::func_84(&(uParam0->f_7375), iParam1);
}

void func_774(int iParam0, char* sParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 658540077, true) != 1)
			{
				if (iParam2 == 0)
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam0, sParam1, 0, 46, -1, 0, 0, -1);
				}
				else
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam0, sParam1, 0, iParam2, -1, 0, 0, -1);
				}
			}
		}
	}
}

int func_775(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = MAP::_0xA6EF0C54A3443E70(iParam0, iParam1);
	if (bParam2)
	{
		MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
	}
	return iVar0;
}

void func_776(int iParam0, int iParam1)
{
	float fVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		fVar0 = (((BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) - 100f) / (BUILTIN::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) * 100f);
		PED::SET_PED_MAX_HEALTH(iParam0, iParam1);
		ENTITY::_SET_ENTITY_HEALTH(iParam0, BUILTIN::ROUND((((fVar0 / 100f) * (BUILTIN::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) + 100f)), 0);
	}
}

int func_777(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	int iVar0;
	iVar0 = MAP::_BLIP_ADD_FOR_RADIUS(iParam0, vParam1, fParam4);
	if (bParam5)
	{
		MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
	}
	return iVar0;
}

int func_778(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam0, iParam1);
	if (bParam2)
	{
		MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
	}
	return iVar0;
}

bool func_779(int iParam0)
{
	return (Global_40.f_9052.f_21 && iParam0) != 0;
}

bool func_780(vector3 vParam0, var uParam3)
{
	return AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(vParam0, uParam3);
}

void func_781()
{
	MISC::SET_BIT(&(Global_1934765.f_301), 1);
	__LIB_4__::func_343();
}

void func_782(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_2__::func_426(iParam0);
	}
	else
	{
		__LIB_2__::func_788(iParam0, 1, 0, 1);
	}
}

bool func_783(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_29(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_30(__LIB_0__::func_118(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(__LIB_0__::func_120(iParam0))))
		{
			return true;
		}
	}
	iVar0 = PERSCHAR::_0x31C70A716CAE1FEE(__LIB_0__::func_120(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	PERSCHAR::_0x7B204F88F6C3D287(__LIB_0__::func_120(iParam0));
	return true;
}

int func_784(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_0__::func_20(iParam0))
	{
		return 0;
	}
	if (!__LIB_1__::func_902(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!__LIB_5__::func_458((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_785(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 45)
	{
		iVar1 = __LIB_5__::func_277(iVar0);
		if (__LIB_0__::func_144(iVar1, 0))
		{
			if ((*uParam1)[iVar0] > 0)
			{
				if (bParam2)
				{
					WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(iParam0, iVar1, (*uParam1)[iVar0], 752097756);
				}
				else
				{
					WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(iParam0, iVar1, ((*uParam1)[iVar0] - WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, iVar1)), 752097756);
				}
			}
		}
		iVar0++;
	}
}

int func_786(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!__LIB_0__::func_132(uParam0[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_787(var uParam0, char[4] cParam1)
{
	__LIB_4__::func_980(&(uParam0->f_7375), cParam1);
}

void func_788(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_4__::func_552(&(uParam0->f_7375), iParam1);
	if (iVar0 != -1)
	{
		__LIB_0__::func_143(&(uParam0->f_7375.f_13[iVar0 /*12*/]), iParam2);
	}
}

bool func_789(var uParam0)
{
	return __LIB_5__::func_448(&(uParam0->f_7375), 1);
}

void func_790()
{
	__LIB_0__::func_840(Global_35, &(Global_1347400.f_46));
}

bool func_791(int iParam0)
{
	if (!__LIB_6__::func_990(iParam0))
	{
		return false;
	}
	return Global_32074.f_4[iParam0 /*4*/].f_3;
}

void func_792(var uParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (!__LIB_5__::func_459(iParam3, __LIB_4__::func_939(uParam0)) && !__LIB_5__::func_459(iParam3, __LIB_5__::func_475(uParam0)))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam2))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(cParam1))
	{
		return;
	}
	iVar0 = __LIB_4__::func_968(&(uParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_5__::func_460(&(uParam0->f_1126));
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam2))
	{
		*uParam2 = ANIMSCENE::_CREATE_ANIM_SCENE(cParam1, iParam4, sParam5, false, true);
	}
	uParam0->f_1126[iVar0 /*67*/].f_1 = *uParam2;
	uParam0->f_1126[iVar0 /*67*/] = cParam1;
	uParam0->f_1126[iVar0 /*67*/].f_3 = (uParam0->f_1126[iVar0 /*67*/].f_3 || iParam3);
	uParam0->f_1126[iVar0 /*67*/].f_65 = iParam6;
	uParam0->f_1126[iVar0 /*67*/].f_66 = bParam7;
	if (!bParam7)
	{
		__LIB_0__::func_7(&(uParam0->f_1126[iVar0 /*67*/].f_2), 4);
	}
}

void func_793(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (__LIB_4__::func_948(uParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_5__::func_549(&(uParam0->f_5188), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_5__::func_557(&(uParam0->f_5188));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_5188[iVar0 /*5*/] = iParam1;
	uParam0->f_5188[iVar0 /*5*/].f_1 = iParam3;
	uParam0->f_5188[iVar0 /*5*/].f_2 = iParam4;
	uParam0->f_5188[iVar0 /*5*/].f_4 = (uParam0->f_5188[iVar0 /*5*/].f_4 || iParam2);
}

void func_794(int iParam0, bool bParam1)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_1__::func_936(iParam0, 131072);
	}
	else
	{
		__LIB_1__::func_937(iParam0, 131072);
	}
	__LIB_1__::func_946(iParam0);
}

void func_795(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	__LIB_5__::func_553(iParam1, bParam2);
	if (bParam3 && __LIB_5__::func_281(uParam0, iParam1, &uVar0))
	{
		if (bParam2)
		{
			if (!__LIB_5__::func_558(uParam0, iParam1, 32))
			{
				__LIB_5__::func_572(uParam0, iParam1, 32);
			}
		}
		else if (__LIB_5__::func_558(uParam0, iParam1, 32))
		{
			__LIB_5__::func_571(uParam0, iParam1, 32);
		}
	}
}

void func_796(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8)
{
	if (!uParam0->f_3)
	{
		uParam0->f_13 = sParam7;
		uParam0->f_14 = iParam8;
		if (uParam0->f_13 != -1)
		{
			uParam0->f_7 = MISC::_CREATE_VAR_STRING(2, sParam1, sParam7);
		}
		else
		{
			uParam0->f_7 = sParam1;
		}
		uParam0->f_8 = sParam2;
		uParam0->f_5 = __LIB_1__::func_746(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
		uParam0->f_6 = __LIB_1__::func_746(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
		if (uParam0->f_14 < uParam0->f_13)
		{
			__LIB_5__::func_793(uParam0->f_5, 1);
		}
		__LIB_1__::func_522(uParam0->f_5, 17, 1, 1);
		__LIB_1__::func_522(uParam0->f_6, 17, 1, 1);
		__LIB_0__::func_633(uParam0->f_5, 6, 1);
		__LIB_0__::func_633(uParam0->f_6, 6, 1);
		*uParam0 = 0;
		uParam0->f_1 = iParam4;
		uParam0->f_10 = iParam3;
		if (iParam5 == 0)
		{
			uParam0->f_11 = MISC::GET_GAME_TIMER();
			uParam0->f_9 = MISC::GET_GAME_TIMER() + 10000;
			uParam0->f_12 = 0;
		}
		else
		{
			uParam0->f_11 = MISC::GET_GAME_TIMER();
			uParam0->f_9 = (MISC::GET_GAME_TIMER() + BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam5) / 2f)));
			uParam0->f_12 = iParam5;
		}
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_2 = iParam6;
		uParam0->f_4 = 0;
		uParam0->f_15 = HUD::_UIPROMPT_SET_REGISTER_HORIZONTAL_ORIENTATION();
		uParam0->f_3 = 1;
		if (uParam0->f_2 != 0)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("MissionChoice");
		}
		AUDIO::_0x6339C1EA3979B5F7("make_decision", "player_decision_moment_scenes");
	}
}

void func_797(int iParam0, var uParam1)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false);
	if ((iVar0 != joaat("WEAPON_UNARMED") && !__LIB_0__::func_491(iParam0, 716706914)) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 716706914, true) != 6)
	{
		if ((PED::IS_PED_SHOOTING(iParam0) || PED::IS_PED_IN_COMBAT(iParam0, 0)) || PED::IS_PED_SHOOTING(Global_35))
		{
			if (__LIB_0__::func_75(uParam1))
			{
				__LIB_0__::func_37(uParam1);
			}
		}
		else if (!__LIB_0__::func_75(uParam1))
		{
			__LIB_1__::func_148(uParam1);
		}
		else if (__LIB_0__::func_265(uParam1) >= 1.5f)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), false, 1, false, false);
			TASK::TASK_SWAP_WEAPON(iParam0, 0, 1, 0, 0);
			__LIB_1__::func_148(uParam1);
		}
	}
}

bool func_798(int iParam0, float fParam1, float fParam2, float fParam3)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	float fVar11;
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		fVar0 = __LIB_0__::func_665(Global_35, iParam0, 1, 1);
		if (fVar0 < (fParam3 * fParam3) && fVar0 > 0.25f)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, false))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
				vVar4 = { __LIB_1__::func_384(0) };
				vVar7 = { __LIB_0__::func_173(vVar1 - CAM::GET_GAMEPLAY_CAM_COORD()) };
				fVar10 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar7.x, vVar7.y, vVar4.x, vVar4.y));
				fVar11 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar7.y, vVar7.z, vVar4.y, vVar4.z));
				if (fVar10 < fParam1)
				{
					if (fVar11 < fParam2)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_799(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (__LIB_5__::func_31(&(uParam0->f_5423[iVar0 /*65*/])))
		{
			iVar1 = uParam0->f_5423[iVar0 /*65*/];
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam2 != iVar1)
			{
				if (bParam1)
				{
					__LIB_5__::func_571(uParam0, iVar1, 4096);
					if (__LIB_5__::func_558(uParam0, iVar1, 1024))
					{
						iVar2 = MAP::GET_BLIP_FROM_ENTITY(iVar1);
						if (MAP::DOES_BLIP_EXIST(iVar2))
						{
							MAP::_BLIP_SET_MODIFIER(iVar2, -546708623);
							MAP::_BLIP_SET_MODIFIER(iVar2, 231194138);
						}
					}
				}
				else
				{
					__LIB_5__::func_572(uParam0, iVar1, 4096);
					if (__LIB_5__::func_558(uParam0, iVar1, 1024))
					{
						iVar3 = MAP::GET_BLIP_FROM_ENTITY(iVar1);
						if (MAP::DOES_BLIP_EXIST(iVar3))
						{
							MAP::_BLIP_REMOVE_MODIFIER(iVar3, -546708623);
							MAP::_BLIP_REMOVE_MODIFIER(iVar3, 231194138);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_800(var uParam0, int iParam1)
{
	__LIB_5__::func_568(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1);
}

void func_801(var uParam0)
{
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8388608))
	{
		if (__LIB_5__::func_576(uParam0))
		{
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			__LIB_5__::func_112();
		}
		else
		{
			HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
			__LIB_5__::func_301(uParam0, __LIB_4__::func_939(uParam0), 8388608);
		}
	}
}

bool func_802(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	if (*uParam0 == 0)
	{
		if (!__LIB_0__::func_139(uParam0->f_5) || !__LIB_0__::func_139(uParam0->f_6))
		{
			return false;
		}
		if ((HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1945938[uParam0->f_5 /*18*/].f_3) && __LIB_0__::func_567(uParam0->f_5, 1)) || __LIB_1__::func_732(uParam0->f_5, 1))
		{
			if (__LIB_1__::func_530(uParam0->f_5, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 1;
			return true;
		}
		if ((HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1945938[uParam0->f_6 /*18*/].f_3) && __LIB_0__::func_567(uParam0->f_6, 1)) || __LIB_1__::func_732(uParam0->f_6, 1))
		{
			if (__LIB_1__::func_530(uParam0->f_6, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 2;
			return true;
		}
		iVar0 = MISC::GET_GAME_TIMER();
		if (iVar0 > uParam0->f_9)
		{
			if (uParam0->f_1 == 1 || (uParam0->f_1 == 0 && uParam0->f_10 > 0))
			{
				if (!HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1945938[uParam0->f_5 /*18*/].f_3))
				{
					fVar2 = __LIB_0__::func_486(uParam0->f_6, 1);
					fVar3 = __LIB_0__::func_486(uParam0->f_5, 1);
					if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
					{
						__LIB_1__::func_748(&(uParam0->f_5), 1, 1);
						if (uParam0->f_12 > 0)
						{
							iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
							uParam0->f_5 = __LIB_1__::func_746(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, iVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						else
						{
							uParam0->f_5 = __LIB_1__::func_746(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						__LIB_1__::func_748(&(uParam0->f_6), 1, 1);
						uParam0->f_6 = __LIB_1__::func_746(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						if (uParam0->f_14 < uParam0->f_13)
						{
							__LIB_5__::func_793(uParam0->f_5, 1);
						}
						__LIB_0__::func_633(uParam0->f_5, 6, 1);
						__LIB_0__::func_633(uParam0->f_6, 6, 1);
						__LIB_1__::func_522(uParam0->f_5, 17, 1, 1);
						__LIB_1__::func_522(uParam0->f_6, 17, 1, 1);
					}
					else
					{
						uParam0->f_16 = fVar2;
						uParam0->f_17 = fVar3;
					}
				}
			}
			else if (!HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1945938[uParam0->f_6 /*18*/].f_3))
			{
				fVar2 = __LIB_0__::func_486(uParam0->f_5, 1);
				fVar3 = __LIB_0__::func_486(uParam0->f_6, 1);
				if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
				{
					__LIB_1__::func_748(&(uParam0->f_6), 1, 1);
					if (uParam0->f_12 > 0)
					{
						iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
						uParam0->f_6 = __LIB_1__::func_746(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, iVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					else
					{
						uParam0->f_6 = __LIB_1__::func_746(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					__LIB_1__::func_748(&(uParam0->f_5), 1, 1);
					uParam0->f_5 = __LIB_1__::func_746(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					if (uParam0->f_14 < uParam0->f_13)
					{
						__LIB_5__::func_793(uParam0->f_5, 1);
					}
					__LIB_0__::func_633(uParam0->f_5, 6, 1);
					__LIB_0__::func_633(uParam0->f_6, 6, 1);
					__LIB_1__::func_522(uParam0->f_5, 17, 1, 1);
					__LIB_1__::func_522(uParam0->f_6, 17, 1, 1);
				}
				else
				{
					uParam0->f_16 = fVar2;
					uParam0->f_17 = fVar3;
				}
			}
		}
		return false;
	}
	return true;
}

bool func_803(var uParam0, float fParam1)
{
	if (!__LIB_0__::func_75(uParam0))
	{
		__LIB_1__::func_283(uParam0, 0);
		return false;
	}
	if (__LIB_0__::func_265(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_804(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_4__::func_562(uParam0, 512))
	{
		return;
	}
	if (__LIB_0__::func_264(&(uParam0->f_2262)) < 2f)
	{
		return;
	}
	if (__LIB_5__::func_579(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_4__::func_532(uParam0, 524288);
	}
}

void func_805(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_804, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_804)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	if ((__LIB_4__::func_988(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_804, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_804))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
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
	if (__LIB_0__::func_1(uParam0->f_861, 512))
	{
		bVar2 = true;
	}
	if (__LIB_5__::func_579(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_804);
		__LIB_3__::func_120();
	}
}

void func_806(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	__LIB_5__::func_580(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	__LIB_5__::func_118(&(uParam0->f_10792), iParam1, sParam2, bParam6);
}

void func_807(bool bParam0, float fParam1)
{
	MISC::CLEAR_BIT(&(Global_1934765.f_301), 1);
	__LIB_5__::func_581(bParam0, fParam1);
}

bool func_808(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (bParam2 && __LIB_4__::func_505(&(uParam0->f_8269)))
	{
		if (!__LIB_5__::func_331(uParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {__LIB_4__::func_542(uParam0->f_607)}, 3);
			if (__LIB_5__::func_498(&(uParam0->f_8269), &cVar1, 0, __LIB_5__::func_24(iParam1), 1, 0))
			{
				if (__LIB_4__::func_506(&(uParam0->f_8269)))
				{
					__LIB_5__::func_282(&(uParam0->f_8269));
				}
				__LIB_5__::func_334(uParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!__LIB_5__::func_574(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_809(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (Global_1946804.f_2535.f_1 >= 5)
	{
		return 0;
	}
	if (!__LIB_6__::func_378(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = __LIB_6__::func_112(iParam0);
	return __LIB_6__::func_531(iParam1, iVar0, bParam2, 1);
}

void func_810(int iParam0)
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
	__LIB_0__::func_782(iParam0, 64);
	__LIB_1__::func_643();
}

void func_811(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = __LIB_7__::func_835(iParam0, fParam1, 1);
	}
	__LIB_7__::func_847(iParam0, (__LIB_6__::func_851(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

int func_812(var uParam0, int iParam1)
{
	int iVar0;
	if (__LIB_4__::func_577(uParam0, 4))
	{
		return 1;
	}
	switch (iParam1)
	{
		case 1:
			HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
			HUD::_DISPLAY_HUD_COMPONENT(474191950);
			break;
		default:
			if (__LIB_4__::func_682())
			{
				if (!__LIB_4__::func_562(uParam0, 524288))
				{
					HUD::_HIDE_HUD_COMPONENT(-1679307491);
				}
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
			}
			break;
	}
	if (__LIB_4__::func_682())
	{
		__LIB_4__::func_563(uParam0, 512);
		__LIB_4__::func_612(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (__LIB_0__::func_164(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, __LIB_0__::func_165(uParam0->f_1406[uParam0->f_2074 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	__LIB_4__::func_782();
	__LIB_5__::func_122(uParam0, 1, 0);
	__LIB_5__::func_0(uParam0);
	if (__LIB_4__::func_562(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	__LIB_4__::func_612(uParam0, 4);
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2265))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_2265);
	}
	if (__LIB_4__::func_577(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(__LIB_0__::func_166()))
	{
		CAM::_0x798BE43C9393632B(__LIB_0__::func_166());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1735[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1735[iVar0 /*22*/].f_2), __LIB_0__::func_166())) && CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1735[iVar0 /*22*/].f_2)))
		{
			if (uParam0->f_1735[iVar0 /*22*/].f_21)
			{
				CAM::_0x798BE43C9393632B(&(uParam0->f_1735[iVar0 /*22*/].f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (__LIB_4__::func_562(uParam0, 524288) || iParam1 == 1)
	{
		__LIB_3__::func_120();
	}
	if (__LIB_4__::func_577(uParam0, 16))
	{
		if (__LIB_0__::func_81(uParam0) == 0)
		{
			if (CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
			{
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_2082));
		}
	}
	__LIB_4__::func_613();
	if (__LIB_4__::func_577(uParam0, 32))
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2291))
	{
		if (!__LIB_4__::func_562(uParam0, 8192))
		{
			if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_2291) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_2291, 50f);
			}
		}
		if (VEHICLE::_0x404527BC03DA0E6C(uParam0->f_2291))
		{
			VEHICLE::_0x7C06330BFDDA182E(uParam0->f_2291);
		}
	}
	__LIB_5__::func_63(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_2311))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_2311);
	}
	return 1;
}

void func_813(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_71(Global_35))
	{
		return;
	}
	if (__LIB_4__::func_626(uParam1, 512))
	{
		if (ENTITY::IS_ENTITY_A_PED(*uParam1) && !__LIB_0__::func_125(*uParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !__LIB_0__::func_71(iVar0))
			{
				bVar1 = PED::_0x947E43F544B6AB34(iVar0, PLAYER::GET_PLAYER_INDEX(), 10, __LIB_5__::func_87(uParam1, 512));
				if (!bVar1)
				{
					bVar1 = (PED::_0x947E43F544B6AB34(iVar0, PLAYER::GET_PLAYER_INDEX(), 11, __LIB_5__::func_87(uParam1, 512)) && (__LIB_0__::func_71(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)));
				}
				if (bVar1)
				{
					if (__LIB_4__::func_627(uParam1, 512) <= 0 || !__LIB_5__::func_319(uParam1, 512))
					{
						__LIB_5__::func_320(uParam1, 512);
					}
					if (__LIB_5__::func_88(uParam1) || __LIB_5__::func_321(uParam1, 512))
					{
						__LIB_5__::func_589(uParam0, __LIB_5__::func_365(uParam1->f_9, uParam1->f_4), 1, 0);
					}
				}
			}
		}
	}
}

void func_814(var uParam0, var uParam1, int iParam2)
{
	struct<2> Var0;
	struct<8> Var6;
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		return;
	}
	if (__LIB_4__::func_626(uParam1, 16))
	{
		if (SCRIPTS::GET_EVENT_DATA(0, iParam2, &Var0, 6))
		{
			if (((((ENTITY::DOES_ENTITY_EXIST(*uParam1) && ENTITY::DOES_ENTITY_EXIST(Var0.f_1)) && (Var0.f_1 == *uParam1 || (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) && Var0.f_1 == uParam1->f_1))) && ENTITY::IS_ENTITY_A_PED(Var0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == Global_35) && (__LIB_5__::func_88(uParam1) || !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1)))
			{
				if (uParam1->f_9 == 14)
				{
					__LIB_4__::func_935(uParam0, 64);
				}
				Var6 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
				if (Var0.f_1 == uParam1->f_1 && !ENTITY::IS_ENTITY_A_VEHICLE(uParam1->f_1))
				{
					Var6 = { __LIB_5__::func_367(uParam1->f_9, uParam1->f_4) };
				}
				__LIB_5__::func_589(uParam0, Var6, 1, 0);
			}
		}
	}
}

void func_815(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	struct<8> Var9;
	struct<8> Var17;
	if (SCRIPTS::GET_EVENT_DATA(0, iParam2, &vVar0, 9))
	{
		if (((ENTITY::DOES_ENTITY_EXIST(vVar0.x) && (vVar0.x == *uParam1 || (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) && vVar0.x == uParam1->f_1))) && ENTITY::IS_ENTITY_A_PED(vVar0.y)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y) == Global_35)
		{
			if (__LIB_4__::func_626(uParam1, 8) && (__LIB_5__::func_4(vVar0.z) || vVar0.z == joaat("WEAPON_FIRE")))
			{
				if (__LIB_4__::func_627(uParam1, 8) <= 0 || !__LIB_5__::func_319(uParam1, 8))
				{
					__LIB_5__::func_320(uParam1, 8);
					PED::_0xD67B6F3BCF81BA47(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1), 128);
				}
				if (__LIB_5__::func_88(uParam1) || __LIB_5__::func_321(uParam1, 8))
				{
					if (uParam1->f_9 == 14)
					{
						__LIB_4__::func_935(uParam0, 64);
					}
					Var9 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
					if (vVar0.x == uParam1->f_1 && !ENTITY::IS_ENTITY_A_VEHICLE(uParam1->f_1))
					{
						Var9 = { __LIB_5__::func_367(uParam1->f_9, uParam1->f_4) };
					}
					__LIB_5__::func_589(uParam0, Var9, 1, 0);
				}
				return;
			}
			if (__LIB_4__::func_626(uParam1, 4) && __LIB_0__::func_154(vVar0.z))
			{
				if (__LIB_4__::func_627(uParam1, 4) <= 0 || !__LIB_5__::func_319(uParam1, 4))
				{
					__LIB_5__::func_320(uParam1, 4);
				}
				if (__LIB_5__::func_88(uParam1) || __LIB_5__::func_321(uParam1, 4))
				{
					Var17 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
					if (vVar0.x == uParam1->f_1 && !ENTITY::IS_ENTITY_A_VEHICLE(uParam1->f_1))
					{
						Var17 = { __LIB_5__::func_367(uParam1->f_9, uParam1->f_4) };
					}
					__LIB_5__::func_589(uParam0, Var17, 1, 0);
				}
			}
		}
	}
}

void func_816(var uParam0, var uParam1)
{
	vector3 vVar0;
	struct<8> Var3;
	struct<8> Var11;
	struct<8> Var19;
	struct<8> Var27;
	if (uParam1->f_9 == 14 && !ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_THROWN_MOLOTOV"), 5f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_THROWN_DYNAMITE"), 5f, true))
		{
			__LIB_4__::func_935(uParam0, 64);
			Var3 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
			__LIB_5__::func_589(uParam0, Var3, 1, 0);
		}
		else if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_BOW"), 8f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_BOW_IMPROVED"), 8f, true)) && WEAPON::_IS_WEAPON_BOW(Global_1935630.f_44)) && WEAPON::_0x7E7B19A4355FEE13(Global_35, WEAPON::_0x6CA484C9A7377E4F(Global_35, 1)) == joaat("AMMO_ARROW_DYNAMITE"))
		{
			__LIB_4__::func_935(uParam0, 64);
			Var11 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
			__LIB_5__::func_589(uParam0, Var11, 1, 0);
		}
		else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, vVar0, 8f))
		{
			__LIB_4__::func_935(uParam0, 64);
			Var19 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
			__LIB_5__::func_589(uParam0, Var19, 1, 0);
		}
		else if (__LIB_4__::func_626(uParam1, -2147483648) && !__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1), 207))
		{
			__LIB_4__::func_935(uParam0, 64);
			Var27 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
			__LIB_5__::func_589(uParam0, Var27, 1, 0);
		}
	}
}

int func_817(var uParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[32] cParam10, int iParam18, float fParam19, bool bParam20, bool bParam21)
{
	bool bVar0;
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!__LIB_0__::func_266(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iParam1, true, false), fParam19, 1, 1))
	{
		__LIB_5__::func_589(uParam0, cParam10, 1, 0);
		return 1;
	}
	else
	{
		bVar0 = true;
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_0__::func_17(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) != iParam1)
				{
					bVar0 = false;
				}
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
		{
			if (__LIB_0__::func_17(Global_1935630.f_40) != iParam1)
			{
				bVar0 = false;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!bVar0)
		{
			if (!__LIB_5__::func_443(uParam0, iParam18))
			{
				__LIB_5__::func_578(uParam0, &cParam2, bParam20);
				__LIB_5__::func_470(uParam0, iParam18);
				uParam0->f_5304 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
			}
			return 1;
		}
		else if (__LIB_5__::func_443(uParam0, iParam18))
		{
			__LIB_5__::func_471(uParam0, iParam18);
			if (!__LIB_5__::func_445(uParam0))
			{
				if (bParam21)
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_5__::func_446(uParam0);
				}
			}
			else
			{
				__LIB_5__::func_447(uParam0);
			}
		}
	}
	return 0;
}

int func_818(var uParam0, vector3 vParam1, char* sParam4, char* sParam5, int iParam6, float fParam7, float fParam8, bool bParam9, bool bParam10)
{
	char cVar0[64];
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
	{
		return 0;
	}
	if (!__LIB_0__::func_266(PLAYER::PLAYER_PED_ID(), vParam1, fParam8, 1, 1))
	{
		StringCopy(&cVar0, sParam5, 64);
		__LIB_5__::func_589(uParam0, cVar0, 1, 0);
		return 1;
	}
	else if (!__LIB_0__::func_266(PLAYER::PLAYER_PED_ID(), vParam1, fParam7, 1, 1))
	{
		if (!__LIB_5__::func_443(uParam0, iParam6))
		{
			__LIB_5__::func_578(uParam0, sParam4, bParam9);
			__LIB_5__::func_470(uParam0, iParam6);
		}
		return 1;
	}
	else if (__LIB_5__::func_443(uParam0, iParam6))
	{
		__LIB_5__::func_471(uParam0, iParam6);
		if (!__LIB_5__::func_445(uParam0))
		{
			if (bParam10)
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_5__::func_446(uParam0);
			}
		}
		else
		{
			__LIB_5__::func_447(uParam0);
		}
	}
	return 0;
}

int func_819(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		__LIB_2__::func_899(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam2 = 2;
								__LIB_2__::func_831(iParam0, uParam1, *uParam2);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 4;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 256;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (__LIB_6__::func_913(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 131072;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (__LIB_4__::func_138(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 262144;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_820(int iParam0)
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
	__LIB_0__::func_783(iParam0, 64);
	__LIB_1__::func_643();
}

int func_821(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (!__LIB_6__::func_113(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = __LIB_6__::func_112(iParam1);
	return __LIB_6__::func_532(iParam0, iVar0, bParam2, bParam2);
}

void func_822(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	bool bVar9;
	switch (__LIB_5__::func_381(&iVar0))
	{
		case 1:
			__LIB_5__::func_589(uParam0, Var1, 1, 0);
			break;
		case 3:
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_13178))
			{
				uParam0->f_13178 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
			}
			if (__LIB_0__::func_6(iVar0) && iVar0 == __LIB_3__::func_918(uParam0->f_607))
			{
				bVar9 = true;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_13178, bVar9);
			break;
	}
}

bool func_823(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	if (__LIB_4__::func_626(uParam1, 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) || ENTITY::IS_ENTITY_DEAD(*uParam1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
			}
			if (uParam1->f_9 == 14)
			{
				__LIB_4__::func_935(uParam0, 64);
			}
			else if (ENTITY::IS_ENTITY_A_PED(*uParam1) && __LIB_4__::func_531(uParam1, 32))
			{
				CAM::_0x6E969927CF632608(1);
				CAM::_0xE3639DB78B3B5400(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1));
				bVar0 = true;
			}
			__LIB_5__::func_589(uParam0, __LIB_5__::func_361(uParam1->f_9, uParam1->f_4), !bVar0, 0);
			return true;
		}
		if (uParam1->f_9 == 40)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1);
			if ((PED::_0xB655DB7582AEC805(iVar1) || TASK::IS_PED_IN_WRITHE(iVar1)) && !__LIB_5__::func_128())
			{
				__LIB_5__::func_589(uParam0, __LIB_5__::func_362(uParam1->f_9), 1, 0);
				return true;
			}
		}
		if (__LIB_5__::func_3(uParam1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) || ENTITY::IS_ENTITY_DEAD(uParam1->f_1))
			{
				if (__LIB_0__::func_27(uParam1->f_64, 16))
				{
					__LIB_5__::func_589(uParam0, __LIB_5__::func_363(uParam1->f_9, uParam1->f_4), 1, 0);
					return true;
				}
				else if (__LIB_0__::func_27(uParam1->f_64, 8))
				{
					__LIB_5__::func_589(uParam0, __LIB_5__::func_364(uParam1->f_9, uParam1->f_4), 1, 0);
					return true;
				}
			}
			else if (__LIB_0__::func_27(uParam1->f_64, 8))
			{
				if (__LIB_3__::func_320(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_1)) < 1)
				{
					__LIB_5__::func_589(uParam0, __LIB_5__::func_364(uParam1->f_9, uParam1->f_4), 1, 0);
					return true;
				}
			}
		}
	}
	return false;
}

void func_824(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return;
	}
	if (!__LIB_1__::func_22(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (__LIB_4__::func_938(uParam0) != 0 && __LIB_0__::func_81(uParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		__LIB_5__::func_573(uParam0, iParam2);
		__LIB_0__::func_130(iParam2);
	}
	__LIB_0__::func_745(iParam1);
	__LIB_0__::func_904(iParam1, 0);
	__LIB_1__::func_774(iParam1, 0, bParam4, bParam5, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

bool func_825(int iParam0, bool bParam1)
{
	iParam0->f_2902 = bParam1;
	if (!__LIB_0__::func_0(iParam0) && !bParam1)
	{
		return false;
	}
	__LIB_5__::func_217(iParam0);
	__LIB_5__::func_205(iParam0);
	__LIB_5__::func_611(iParam0);
	__LIB_5__::func_224(iParam0);
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

bool func_826(var uParam0)
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xAB0D553FE20A6E25(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	POPULATION::_0xF45E46DEECF7DF6E(10240, 0, 0, -1, -1);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	return uParam0->f_607 == uParam0->f_607;
}

void func_827(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(bParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(bParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(bParam0, 488, bParam1);
	}
}

void func_828(int iParam0)
{
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(iParam0))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iParam0);
	}
}

void func_829(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(__LIB_8__::func_593(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(__LIB_8__::func_593(iParam0), 204, false);
	}
}

void func_830(var uParam0)
{
	switch (__LIB_4__::func_979(uParam0))
	{
		case 0:
			break;
	}
}

void func_831(int iParam0)
{
	bool bVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	bVar0 = __LIB_8__::func_593(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	PED::_0x406CCF555B04FAD3(bVar0, 0, 0f);
}

int func_832(int iParam0)
{
	bool bVar0;
	if (!__LIB_0__::func_29(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_30(__LIB_0__::func_118(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(__LIB_0__::func_120(iParam0))))
		{
			return 1;
		}
	}
	bVar0 = PERSCHAR::_0x31C70A716CAE1FEE(__LIB_0__::func_120(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
		}
	}
	PERSCHAR::_0x7B204F88F6C3D287(__LIB_0__::func_120(iParam0));
	return 1;
}

void func_833(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*iParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam4) * 127f));
	*iParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam5) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam6) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam7) * 127f));
}

void func_834(int iParam0, bool bParam1, char* sParam2)
{
	bool bVar0;
	bVar0 = __LIB_8__::func_593(iParam0);
	if (!__LIB_0__::func_31(iParam0) || ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return;
	}
	PED::_0xF1C03A5352243A30(bVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar0, false, true);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(bVar0, true, false);
	}
}

bool func_835(var uParam0)
{
	if (uParam0->f_2074 >= 0)
	{
		if (__LIB_8__::func_619(Global_35, uParam0->f_1406[uParam0->f_2074 /*41*/].f_1, 0) < uParam0->f_1406[uParam0->f_2074 /*41*/].f_14)
		{
			return true;
		}
		else if (uParam0->f_1406[uParam0->f_2074 /*41*/].f_14 >= uParam0->f_1406[uParam0->f_2074 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_836(var uParam0)
{
	if (uParam0->f_2074 >= 0)
	{
		if (__LIB_8__::func_619(Global_35, uParam0->f_1406[uParam0->f_2074 /*41*/].f_1, 0) < uParam0->f_1406[uParam0->f_2074 /*41*/].f_15)
		{
			return true;
		}
		else if (uParam0->f_1406[uParam0->f_2074 /*41*/].f_15 >= uParam0->f_1406[uParam0->f_2074 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_837(int iParam0)
{
	if (Global_40.f_7729 == iParam0)
	{
		return true;
	}
	return false;
}

int func_838(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vVar1 = { vParam0 + vParam3 / Vector(2f, 2f, 2f) };
	vVar4 = { vParam3 - vParam0 };
	vVar4 = { MISC::ABSF(vVar4.x), MISC::ABSF(vVar4.y), MISC::ABSF(vVar4.z) };
	iVar0 = VOLUME::_CREATE_VOLUME_BOX(vVar1, vParam6, vVar4);
	return iVar0;
}

void func_839(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		__LIB_8__::func_651(bParam1);
	}
}

float func_840(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
	}
	return __LIB_0__::func_62(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
}

void func_841(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		case 3:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(bParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.75f)));
			break;
		default:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(bParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.1f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)));
			break;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(bParam1, 16, iVar0);
}

bool func_842(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request_name");
	if (!__LIB_8__::func_588(bParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_843(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1) || ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return;
	}
	if (PED::_IS_METAPED_USING_COMPONENT(bParam1, joaat("WEARABLE_MASKS")))
	{
		PED::_SET_PED_COMPONENT_DISABLED(bParam1, joaat("WEARABLE_MASKS"), 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(bParam1, 494009478))
	{
		PED::_SET_PED_COMPONENT_DISABLED(bParam1, 494009478, 1);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1 > 0 && __LIB_8__::func_588(bParam1, 860729266))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4096 > 0 && __LIB_8__::func_588(bParam1, 879715242))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 128 > 0 && __LIB_8__::func_588(bParam1, 1606325429))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 256 > 0 && __LIB_8__::func_588(bParam1, 1743550585))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 512 > 0 && __LIB_8__::func_588(bParam1, 1064646155))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1024 > 0 && __LIB_8__::func_588(bParam1, -536694793))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2048 > 0 && __LIB_8__::func_588(bParam1, -1304053509))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & -2147483648 > 0 && __LIB_8__::func_588(bParam1, 718939204))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 65536 > 0 && __LIB_8__::func_588(bParam1, -972364774))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16384 > 0 && __LIB_8__::func_588(bParam1, -1100875244))
	{
		if (PED::_IS_METAPED_USING_COMPONENT(bParam1, -134124598))
		{
			PED::_SET_PED_COMPONENT_DISABLED(bParam1, -134124598, 1);
		}
		if (PED::_IS_METAPED_USING_COMPONENT(bParam1, 2071466316))
		{
			PED::_SET_PED_COMPONENT_DISABLED(bParam1, 2071466316, 1);
		}
		PED::_SET_PED_BODY_COMPONENT(bParam1, -1100875244);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 262144 > 0 && __LIB_8__::func_588(bParam1, 1153596794))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 524288 > 0 && __LIB_8__::func_588(bParam1, 1016389820))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1048576 > 0 && __LIB_8__::func_588(bParam1, -726966617))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2097152 > 0 && __LIB_8__::func_588(bParam1, 1365901568))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 32768 > 0 && __LIB_8__::func_588(bParam1, -1658942149))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 131072 > 0 && __LIB_8__::func_588(bParam1, -1980913856))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4194304 > 0 && __LIB_8__::func_588(bParam1, 491764525))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8388608 > 0 && __LIB_8__::func_588(bParam1, -76015264))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16777216 > 0 && __LIB_8__::func_588(bParam1, 622113465))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 33554432 > 0 && __LIB_8__::func_588(bParam1, 781533162))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 67108864 > 0 && __LIB_8__::func_588(bParam1, -271415321))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 134217728 > 0 && __LIB_8__::func_588(bParam1, -1683207356))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 268435456 > 0 && __LIB_8__::func_588(bParam1, -254794762))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 536870912 > 0 && __LIB_8__::func_588(bParam1, 609066278))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1073741824 > 0 && __LIB_8__::func_588(bParam1, -1712783565))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8192 > 0 && __LIB_8__::func_588(bParam1, 1544915253))
	{
		PED::_SET_PED_BODY_COMPONENT(bParam1, 1544915253);
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_57 = 1;
	}
}

void func_844(struct<2> Param0, bool bParam2)
{
	if (!__LIB_3__::func_358(Param0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		return;
	}
	if (!__LIB_8__::func_646(Param0, bParam2))
	{
		ITEMSET::ADD_TO_ITEMSET(bParam2, Param0);
	}
}

void func_845(bool bParam0)
{
	PED::_0xE3144B932DFDFF65(bParam0, 0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(bParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

void func_846(bool bParam0, float fParam1, bool bParam2)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		fParam1 = __LIB_0__::func_251(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(bParam0, bParam2))));
		ENTITY::_SET_ENTITY_HEALTH(bParam0, iVar0, 0);
	}
}

bool func_847(int iParam0)
{
	if (__LIB_0__::func_31(iParam0))
	{
		if (__LIB_8__::func_601(Global_1360165[iParam0 /*1157*/], 0))
		{
			return true;
		}
	}
	return false;
}

bool func_848(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = __LIB_8__::func_619(bParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(bParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(bParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(bParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(bParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_849(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_GET_RIDER_OF_MOUNT(bParam0, false) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 0f);
	if (__LIB_8__::func_640(bParam0, 1041577989))
	{
		return false;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bParam0)))
	{
		return true;
	}
	return false;
}

bool func_850(bool bParam0, int iParam1)
{
	float fVar0;
	if (!__LIB_8__::func_640(bParam0, 1041577989))
	{
		return true;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(bParam0, 1041577989);
	if (__LIB_0__::func_27(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (__LIB_0__::func_27(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (__LIB_0__::func_27(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_851(bool bParam0, var uParam1, var uParam2, var uParam3)
{
	struct<23> Var0;
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_3 = uParam1;
	Var0.f_4 = 14283;
	Var0.f_14 = uParam2;
	Var0.f_15 = uParam3;
	_NAMESPACE29::_0x66F9EB44342BB4C5(bParam0, &Var0);
}

bool func_852(int iParam0, bool bParam1)
{
	bool bVar0;
	bVar0 = __LIB_8__::func_593(iParam0);
	if (bParam1)
	{
		if (!__LIB_8__::func_601(bVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(bVar0, __LIB_0__::func_110(), 1);
}

void func_853(bool bParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	PED::_SET_PED_COMPONENT_DISABLED(bParam0, joaat("HATS"), 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

void func_854(bool bParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(bParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

int func_855(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	__LIB_2__::func_998(iParam0, &uVar1, &uVar2, &uVar0, &uVar3);
	uVar4 = PED::_0x6B89FAA36FC909A3(uParam1, iParam0, uVar0, uVar1);
	return uVar4;
}

void func_856(int iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_31(iParam0))
	{
		iVar0 = 0;
		iVar1 = 0;
		switch (iParam0)
		{
			case 2:
				__LIB_0__::func_495(&iVar0, 1);
				break;
			case 14:
				__LIB_0__::func_495(&iVar0, 8);
				__LIB_0__::func_495(&iVar1, 4);
				__LIB_0__::func_495(&iVar1, 5);
				__LIB_0__::func_495(&iVar1, 0);
				break;
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				__LIB_0__::func_495(&iVar0, 8);
				__LIB_0__::func_495(&iVar0, 5);
				__LIB_0__::func_495(&iVar1, 4);
				__LIB_0__::func_495(&iVar1, 0);
				break;
		}
		COMPANION::_0xDEB369F6AD168C58(__LIB_8__::func_593(iParam0), iVar0);
		COMPANION::_0x1740E3DEE0AE4D27(__LIB_8__::func_593(iParam0), iVar1);
	}
}

void func_857(var uParam0, vector3 vParam1, float fParam4)
{
	struct<4> Var0;
	Var0 = { vParam1 };
	Var0.f_3 = fParam4;
	__LIB_4__::func_954(uParam0, Var0);
}

void func_858(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return;
	}
	if (__LIB_8__::func_595(uParam0, bParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(bParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(bParam1, bParam3);
			}
		}
	}
}

bool func_859(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(uParam0->f_5423[iVar0 /*65*/])))
		{
			if (uParam0->f_5423[iVar0 /*65*/] == bParam1)
			{
				*iParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_860(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return false;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return false;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!__LIB_3__::func_651(iParam1))
	{
		return false;
	}
	bVar0 = __LIB_4__::func_559(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
	*iParam0 = NETWORK::PED_TO_NET(bVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		if (bParam9)
		{
			WEAPON::_0x899A04AFCC725D04(bVar0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (bParam10)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(bVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*iParam0, true);
		}
		return true;
	}
	return false;
}

float func_861(var uParam0)
{
	return __LIB_5__::func_51(&(uParam0->f_603));
}

void func_862(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	bool bVar7;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	bVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = __LIB_0__::func_574(iVar6);
		if (!PED::_0x608BC6A6AACD5036(&Var2, bVar0, iVar1, 0))
		{
		}
		else
		{
			bVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(bVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar7) && !ENTITY::_0x88AD6CC10D8D35B2(bVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar7, true, true);
				}
				ENTITY::_DELETE_CARRIABLE(&bVar7);
			}
		}
		iVar6++;
	}
}

void func_863(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam1)
	{
		__LIB_4__::func_866(iParam0, bParam2, bParam3);
	}
	else
	{
		__LIB_1__::func_951(iParam0);
	}
}

bool func_864(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(bParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (__LIB_0__::func_62(ENTITY::GET_ENTITY_COORDS(bParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_865(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 10;
	if (__LIB_0__::func_555(1108822547, 6))
	{
		if (bParam2)
		{
			__LIB_8__::func_686(bParam0, iVar0, __LIB_0__::func_2() != -1, 0, 0);
			__LIB_0__::func_556(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(bParam0, Global_1946804.f_2776.f_1, Global_1946804.f_2776.f_3[0], Global_1946804.f_2776.f_3[1], Global_1946804.f_2776.f_3[2], Global_1946804.f_2776.f_8, Global_1946804.f_2776.f_9, Global_1946804.f_2776.f_10, Global_1946804.f_2776.f_11);
		__LIB_0__::func_550(1108822547, 1, 6);
	}
	Global_1946804.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
}

void func_866(int iParam0)
{
	if (__LIB_0__::func_31(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_8__::func_593(iParam0)))
		{
			__LIB_0__::func_204(iParam0, 67108864, 1);
			__LIB_0__::func_290(iParam0, 19, 1);
		}
	}
}

int func_867(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, __LIB_4__::func_611()))
	{
		return DECORATOR::DECOR_GET_INT(iParam0, __LIB_4__::func_611());
	}
	return -1;
}

int func_868(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_3__::func_358(uParam0->f_5421))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_955(uParam0->f_5421))
	{
		iVar1 = __LIB_4__::func_956(uParam0->f_5421, iVar0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1)) && DECORATOR::DECOR_EXIST_ON(iVar1, __LIB_4__::func_611()))
		{
			iVar2 = DECORATOR::DECOR_GET_INT(iVar1, __LIB_4__::func_611());
			if (iVar2 == iParam1)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_869(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(bParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, true, true);
	}
	if (bParam2 && (!__LIB_0__::func_91() || !ANIMSCENE::_0x6F1F0B17109309DA(Global_43800, __LIB_8__::func_678(bParam0))))
	{
		if (PED::IS_PED_ON_MOUNT(bParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(bParam0, true, false);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(bParam0, false, true);
		if (!Global_1935630.f_12)
		{
			if (bParam1)
			{
				ENTITY::FREEZE_ENTITY_POSITION(bParam0, true);
			}
		}
		PED::FORCE_PED_MOTION_STATE(bParam0, joaat("MOTIONSTATE_IDLE"), true, 0, false);
		PED::_SET_PED_CROUCH_MOVEMENT(bParam0, false, 0, false);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, joaat("REL_GANG_DUTCHS"));
	ENTITY::_SET_ENTITY_HEALTH(bParam0, ENTITY::GET_ENTITY_MAX_HEALTH(bParam0, false), 0);
	if (bParam3)
	{
		__LIB_8__::func_628(bParam0);
	}
}

void func_870(bool bParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	__LIB_8__::func_647(bParam0, *uParam1);
	__LIB_8__::func_647(bParam0, uParam1->f_1);
}

void func_871(bool bParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	__LIB_8__::func_647(bParam0, *uParam1);
	__LIB_8__::func_647(bParam0, uParam1->f_1);
	__LIB_8__::func_647(bParam0, uParam1->f_2);
	__LIB_8__::func_647(bParam0, uParam1->f_3);
	__LIB_8__::func_647(bParam0, uParam1->f_4);
	__LIB_8__::func_647(bParam0, uParam1->f_5);
}

void func_872(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_8__::func_601(__LIB_8__::func_593(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(__LIB_8__::func_593(iVar0), __LIB_0__::func_110(), 1))
			{
				__LIB_0__::func_111(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

bool func_873(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (uParam0->f_2075 < 0)
	{
		return true;
	}
	switch (uParam0->f_865[uParam0->f_2075 /*18*/].f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) == 8)
			{
				return true;
			}
			else if (__LIB_5__::func_51(&(uParam0->f_2262)) >= 15f)
			{
				__LIB_4__::func_532(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_2158)
			{
				if (__LIB_5__::func_51(&(uParam0->f_2262)) >= 15f)
				{
					__LIB_4__::func_532(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(__LIB_4__::func_620(uParam0)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(__LIB_4__::func_620(uParam0), false))
				{
					uParam0->f_2158 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(__LIB_4__::func_620(uParam0));
				bVar1 = ANIMSCENE::_IS_ANIM_SCENE_FINISHED(__LIB_4__::func_620(uParam0), false);
				bVar2 = ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(__LIB_4__::func_620(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return __LIB_5__::func_51(&(uParam0->f_2262)) >= 15f;
	}
	return false;
}

void func_874(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bVar0 = __LIB_8__::func_592(iParam0);
	if (!PED::_IS_PED_CARRYING(bVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(bVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		bVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(bVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(bVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar3, true, true);
			}
			ENTITY::_DELETE_CARRIABLE(&bVar3);
		}
		iVar2++;
	}
}

void func_875(int iParam0, char* sParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (AUDIO::_0xD89504D9D7D5057D(sParam1))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false);
		if (!PED::IS_PED_IN_COMBAT(iParam0, 0) && (iVar0 == joaat("WEAPON_UNARMED") || !bParam2))
		{
			if (AUDIO::_0xF01C570E0A0A1E67(sParam1))
			{
				AUDIO::RESTART_SCRIPTED_CONVERSATION(sParam1);
			}
		}
		else if (!AUDIO::_0xF01C570E0A0A1E67(sParam1))
		{
			AUDIO::PAUSE_SCRIPTED_CONVERSATION(sParam1, false, true, true, true);
		}
	}
	if (bParam3)
	{
		__LIB_8__::func_641();
	}
}

void func_876(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (uParam0->f_2078 < 0)
	{
		return;
	}
	if ((uParam0->f_2289 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_2291)) && VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_2291))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			bVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_2291, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(bVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(bVar1) || __LIB_8__::func_619(bVar2, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1) < __LIB_8__::func_619(bVar1, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1))
				{
					bVar1 = bVar2;
				}
			}
			iVar0++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(bVar1))
		{
			return;
		}
		if (!__LIB_4__::func_562(uParam0, 8192))
		{
			if (__LIB_8__::func_619(bVar1, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1) <= (uParam0->f_1406[uParam0->f_2078 /*41*/].f_17 + 5f) || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_2265, uParam0->f_2269))
			{
				if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_2291) != 5f)
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_2291, 5f);
				}
			}
			else if ((!__LIB_1__::func_533(512) || __LIB_4__::func_635(2)) && VEHICLE::_0xC6D7DDC843176701(uParam0->f_2291) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_2291, 50f);
			}
		}
	}
}

int func_877(var uParam0, int iParam1)
{
	if (uParam0->f_865[iParam1 /*18*/].f_1 > uParam0->f_2073)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_865[iParam1 /*18*/].f_3 /*13*/].f_2))
	{
	}
	if (uParam0->f_2073 < 0 || uParam0->f_2073 > 6)
	{
		return 0;
	}
	if (uParam0->f_865[iParam1 /*18*/].f_1 == 0)
	{
		return 1;
	}
	if (uParam0->f_865[iParam1 /*18*/].f_17 == 2 && __LIB_0__::func_78(uParam0) == 9)
	{
		return 1;
	}
	if (!__LIB_4__::func_562(uParam0, 4096) && uParam0->f_2286)
	{
		return 0;
	}
	if (Global_1430231.f_4)
	{
		return 0;
	}
	if (uParam0->f_865[iParam1 /*18*/] != uParam0->f_2074)
	{
		return 0;
	}
	if (__LIB_0__::func_78(uParam0) > 3 && uParam0->f_865[iParam1 /*18*/] != uParam0->f_2074)
	{
		return 0;
	}
	if ((((__LIB_0__::func_78(uParam0) > 3 && uParam0->f_865[iParam1 /*18*/].f_17 == 1) && __LIB_4__::func_576(uParam0) != 11) && __LIB_4__::func_575(uParam0, uParam0->f_2074)) && uParam0->f_865[iParam1 /*18*/].f_2 != 4)
	{
		return 0;
	}
	if ((uParam0->f_865[iParam1 /*18*/].f_2 == 9 && uParam0->f_865[iParam1 /*18*/].f_4 >= 0) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1912[uParam0->f_865[iParam1 /*18*/].f_4 /*10*/].f_8))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1912[uParam0->f_865[iParam1 /*18*/].f_4 /*10*/].f_8, true, false))
		{
			return 0;
		}
		else if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_1912[uParam0->f_865[iParam1 /*18*/].f_4 /*10*/].f_8, __LIB_8__::func_678(Global_35)))
		{
			if (__LIB_0__::func_129(&(uParam0->f_1912[uParam0->f_865[iParam1 /*18*/].f_4 /*10*/]), 4))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 1))
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_129(&(uParam0->f_1912[uParam0->f_865[iParam1 /*18*/].f_4 /*10*/]), 8))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_878(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((((!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && !__LIB_8__::func_614(uParam0->f_3[iVar0 /*13*/].f_2)) && __LIB_0__::func_154(uParam0->f_3[iVar0 /*13*/].f_10)) && !__LIB_4__::func_649(uParam0->f_3[iVar0 /*13*/].f_1))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 0, false))
				{
					if (__LIB_0__::func_237(uParam0->f_3[iVar0 /*13*/].f_10))
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 7, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(uParam0->f_3[iVar0 /*13*/].f_10))
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 2, true, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
				if (uParam0->f_3[iVar0 /*13*/].f_11)
				{
					if (__LIB_0__::func_399(iVar1, 0, 0, 0) != uParam0->f_3[iVar0 /*13*/].f_10)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, true, 0, false, false);
					}
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_879(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;
	MemCopy(&uVar0, {__LIB_4__::func_606(uParam0)}, 8);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_805))
	{
		uParam0->f_805 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_800), 0, 0, false, true);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_805, false))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_805, __LIB_8__::func_678(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_805, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_805);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

bool func_880(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;
	if (__LIB_0__::func_797(iParam1) && !__LIB_1__::func_52(iParam1))
	{
		bVar0 = __LIB_0__::func_398(iParam1);
	}
	else
	{
		return false;
	}
	__LIB_0__::func_576(uParam3);
	iVar5 = __LIB_0__::func_574(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, bVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
	{
		return false;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*iParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*iParam0);
	return true;
}

bool func_881(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_858(iParam0, 256))
	{
		return true;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!__LIB_8__::func_601(bParam1, iVar0))
	{
		return false;
	}
	PED::_SET_PED_BODY_COMPONENT(bParam1, __LIB_0__::func_859(iParam0));
	PED::_UPDATE_PED_VARIATION(bParam1, false, true, true, true, false);
	__LIB_0__::func_213(iParam0, 256, 1);
	return true;
}

void func_882(bool bParam0)
{
	if (__LIB_8__::func_656(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(bParam0))
	{
		FIRE::STOP_ENTITY_FIRE(bParam0, 0);
		ENTITY::_SET_ENTITY_HEALTH(bParam0, ENTITY::GET_ENTITY_MAX_HEALTH(bParam0, false), 0);
	}
}

void func_883(bool bParam0)
{
	if (__LIB_8__::func_656(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 0, false);
}

void func_884(bool bParam0)
{
	if (__LIB_8__::func_656(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, false);
}

void func_885(bool bParam0)
{
	if (__LIB_8__::func_656(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, true);
}

void func_886(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fParam1);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), fParam1);
		}
	}
	if (!__LIB_0__::func_27(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	if (!__LIB_0__::func_27(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (!__LIB_0__::func_27(iParam0, 16))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	}
	if (!__LIB_0__::func_27(iParam0, 128))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	}
	if (!__LIB_0__::func_27(iParam0, 512))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
	if (!__LIB_0__::func_27(iParam0, 64))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	}
	if (!(__LIB_3__::func_751(17) && __LIB_8__::func_619(Global_35, Global_1835011[17 /*74*/].f_18, 0) < 10f))
	{
		if (!__LIB_0__::func_27(iParam0, 2048))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		}
	}
	if (!__LIB_0__::func_27(iParam0, 4096))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!__LIB_0__::func_27(iParam0, 1024))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		}
		if (!__LIB_0__::func_27(iParam0, 8))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 33, true);
		if (!__LIB_0__::func_27(iParam0, 32))
		{
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			}
		}
	}
}

bool func_887(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return true;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (__LIB_0__::func_293(45))
			{
				return true;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (__LIB_0__::func_293(45))
			{
				return 2;
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_888(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar12;
	int iVar13;
	iVar12 = 0;
	while (iVar12 < 30)
	{
		if (((uParam0->f_865[iVar12 /*18*/].f_17 == 1 && uParam0->f_865[iVar12 /*18*/].f_2 == 9) && uParam0->f_865[iVar12 /*18*/].f_4 >= 0) && uParam0->f_865[iVar12 /*18*/] == iParam1)
		{
			iVar13 = uParam0->f_1912[uParam0->f_865[iVar12 /*18*/].f_4 /*10*/].f_8;
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar13) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar13, true, false)) && ANIMSCENE::_0x6F1F0B17109309DA(iVar13, __LIB_8__::func_678(Global_35)))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iVar13, __LIB_8__::func_678(Global_35), &vVar0, false, 0, 2))
				{
					if (!__LIB_0__::func_86(vVar0))
					{
						return true;
					}
				}
			}
		}
		iVar12++;
	}
	return false;
}

void func_889(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_0__::func_697(__LIB_0__::func_241());
	if (*uParam0)
	{
		__LIB_0__::func_689(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, __LIB_0__::func_2() != -1, iParam2);
	*uParam0 = 1;
}

void func_890(int iParam0)
{
	__LIB_4__::func_193(iParam0);
	__LIB_0__::func_121(iParam0, 32);
}

void func_891(var uParam0, char[4] cParam1, int iParam2)
{
	int iVar0;
	if (__LIB_4__::func_948(uParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_8__::func_766(&(uParam0->f_1081), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_8__::func_786(&(uParam0->f_1081));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_1081[iVar0 /*3*/] = cParam1;
	uParam0->f_1081[iVar0 /*3*/].f_2 = (uParam0->f_1081[iVar0 /*3*/].f_2 || iParam2);
}

void func_892(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (__LIB_4__::func_531(uParam0, 32768))
	{
		return;
	}
	bVar0 = __LIB_4__::func_531(uParam0, 1024);
	if (__LIB_4__::func_531(uParam0, 128) || bVar0)
	{
		if (__LIB_4__::func_531(uParam0, 4096))
		{
			if (!__LIB_4__::func_531(uParam0, 2048))
			{
				iVar1 = MAP::GET_BLIP_FROM_ENTITY(*uParam0);
				if (MAP::DOES_BLIP_EXIST(iVar1))
				{
					MAP::_BLIP_SET_MODIFIER(iVar1, -1186550032);
				}
				__LIB_5__::func_72(uParam0, 2048);
				return;
			}
		}
		else if (__LIB_4__::func_531(uParam0, 2048))
		{
			iVar2 = MAP::GET_BLIP_FROM_ENTITY(*uParam0);
			if (MAP::DOES_BLIP_EXIST(iVar2))
			{
				MAP::_BLIP_REMOVE_MODIFIER(iVar2, -1186550032);
			}
			__LIB_5__::func_73(uParam0, 2048);
		}
		if (__LIB_4__::func_531(uParam0, 512))
		{
			if (__LIB_0__::func_31(uParam0->f_10))
			{
				if (__LIB_8__::func_596(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!__LIB_4__::func_57(uParam0->f_10))
					{
						__LIB_0__::func_904(uParam0->f_10, 1);
						__LIB_4__::func_705(uParam0->f_10, 0);
					}
				}
				else if ((__LIB_4__::func_57(uParam0->f_10) && !bVar0) && !__LIB_4__::func_531(uParam0, 16384))
				{
					__LIB_0__::func_904(uParam0->f_10, 0);
					__LIB_4__::func_705(uParam0->f_10, 1);
				}
			}
		}
		else if (!MAP::DOES_BLIP_EXIST(uParam0->f_8))
		{
			if (!MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(*uParam0)))
			{
				if (__LIB_8__::func_596(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), *uParam0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_4))
					{
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(*uParam0)) && uParam0->f_8 != MAP::GET_BLIP_FROM_ENTITY(*uParam0)) || !__LIB_8__::func_596(Global_35, *uParam0, 150f, 1))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_8));
		}
	}
	else if (__LIB_4__::func_531(uParam0, 512))
	{
		if (__LIB_0__::func_31(uParam0->f_10))
		{
			if (__LIB_4__::func_57(uParam0->f_10))
			{
				__LIB_0__::func_904(uParam0->f_10, 0);
				__LIB_4__::func_705(uParam0->f_10, 1);
			}
		}
	}
	else if (MAP::DOES_BLIP_EXIST(uParam0->f_8))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_8));
	}
}

void func_893(var uParam0)
{
	if (!__LIB_0__::func_2() == 0 || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		__LIB_5__::func_107(&(uParam0->f_603));
	}
}

bool func_894(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!MISC::IS_BIT_SET(Global_1934765.f_301, 0))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(Global_1934765.f_301, 1))
	{
		return false;
	}
	if (iParam0 == 15)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		MISC::_0x243CEDE8F916B994();
		return false;
	}
	iVar0 = __LIB_4__::func_347(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = __LIB_4__::func_348(iVar1, 1);
		if (iVar2 == 0 || iVar2 == -1439599467)
		{
		}
		else if (MISC::IS_BIT_SET(Global_1934765.f_302[iVar0], iVar1))
		{
			MISC::_0xD3F943B88F55376A(iVar2);
		}
		else
		{
			MISC::_0x2916B30DC6C41179(iVar2);
		}
		iVar1++;
	}
	return __LIB_5__::func_313(iParam0, bParam1, fParam2);
}

int func_895(vector3 vParam0, bool bParam3)
{
	if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
		if (bParam3)
		{
			__LIB_2__::func_614(vParam0);
		}
		__LIB_3__::func_595(vParam0);
		return 1;
	}
	return 0;
}

bool func_896()
{
	if (__LIB_5__::func_297(Global_1835011[59 /*74*/].f_1) == 1)
	{
		return true;
	}
	return false;
}

void func_897(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	iVar0 = uParam0->f_2078;
	if (iVar0 >= 0 && !__LIB_4__::func_579(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1406[iVar0 /*41*/].f_1, true) <= uParam0->f_1406[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_2082 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1735[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_2082), __LIB_1__::func_569(uParam0->f_1735[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_2082), __LIB_0__::func_166(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1735[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_2082.f_8), __LIB_1__::func_569(uParam0->f_1735[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_2082.f_8), __LIB_4__::func_616(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_2082)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_2082.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !uParam0->f_1735[iVar0 /*22*/])
		{
			if (!__LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 8))
			{
				if (!__LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 8))
				{
					__LIB_4__::func_706(&iVar19, uParam0->f_1735[iVar0 /*22*/].f_1);
					__LIB_4__::func_707(&(uParam0->f_2294), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_1406[iVar0 /*41*/].f_1 };
				iVar24 = -1;
				if (uParam0->f_1735[iVar0 /*22*/].f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 65)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar25 /*13*/].f_2))
						{
							if (uParam0->f_1735[iVar0 /*22*/].f_20 == uParam0->f_3[iVar25 /*13*/].f_3)
							{
								iVar23 = uParam0->f_3[iVar25 /*13*/].f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (__LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1735[iVar0 /*22*/].f_20 /*13*/].f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_2292) || iVar26 != uParam0->f_2292))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_2082));
											__LIB_4__::func_612(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1735[iVar0 /*22*/].f_18 != 0f || uParam0->f_1735[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_3__::func_978(Global_35, iVar23, 1), uParam0->f_1735[iVar0 /*22*/].f_18, 0f, uParam0->f_1735[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1735[iVar0 /*22*/].f_18 != 0f || uParam0->f_1735[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_0__::func_152(Global_36, uParam0->f_1406[iVar0 /*41*/].f_1, 1), uParam0->f_1735[iVar0 /*22*/].f_18, 0f, uParam0->f_1735[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_1406[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_1406[iVar0 /*41*/].f_14;
							bVar29 = __LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 2);
							bVar30 = (__LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = __LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_2082));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									__LIB_0__::func_489(0, 0);
								}
								bVar32 = true;
								__LIB_4__::func_612(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_2082), 4))
							{
								bVar32 = (bVar32 || uParam0->f_2098.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_2098.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_2098.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_2098.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_2098.f_22 != bVar30);
								uParam0->f_2098.f_16 = iVar23;
								uParam0->f_2098.f_17 = { vVar20 };
								uParam0->f_2098.f_20 = fVar27;
								uParam0->f_2098.f_21 = fVar28;
								uParam0->f_2098.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_2098 = { uParam0->f_2082 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_2098));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_2082), 9))
							{
								bVar32 = (bVar32 || uParam0->f_2121.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_2121.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || uParam0->f_2121.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_2121.f_21 != bVar30);
								uParam0->f_2121.f_16 = iVar23;
								uParam0->f_2121.f_17 = { vVar20 };
								uParam0->f_2121.f_20 = !bVar31;
								uParam0->f_2121.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_2121 = { uParam0->f_2082 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_2121));
								}
							}
							Jump @1466; //curOff = 1420
							if (CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_2082));
							}
							StringCopy(&(uParam0->f_2082), "", 64);
							StringCopy(&(uParam0->f_2082.f_8), "", 64);
							__LIB_4__::func_617(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

void func_898(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	__LIB_5__::func_107(&(uParam0->f_1));
}

void func_899(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	__LIB_5__::func_107(&(uParam0->f_2259));
}

bool func_900(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bVar0 = false;
	if ((iParam3 == 4 || iParam3 == 5) || iParam3 == 6)
	{
		bVar0 = true;
	}
	switch (iParam1)
	{
		case 0:
			return ((iParam3 == 3 && (__LIB_0__::func_91() || Global_16)) || (iParam3 == 2 && __LIB_4__::func_948(uParam0, 4)));
		case 14:
			return (!__LIB_0__::func_91() && (Global_16 || CAM::IS_GAMEPLAY_HINT_ACTIVE()));
		case 1:
			return ((!__LIB_0__::func_91() && !CAM::IS_GAMEPLAY_HINT_ACTIVE()) && bVar0);
		case 2:
			return (!__LIB_5__::func_276(uParam0) && bVar0);
		case 4:
			return ((__LIB_5__::func_276(uParam0) || __LIB_5__::func_331(uParam0, iParam2, 1073741824 /* Float: 2f */)) && bVar0);
		case 3:
			return iParam3 == 7;
		case 5:
			return __LIB_4__::func_971(uParam0) == bParam4;
		case 6:
			return __LIB_4__::func_979(uParam0) == bParam4;
		case 11:
			return __LIB_4__::func_937(uParam0, 2097152);
		case 12:
			return __LIB_5__::func_331(uParam0, iParam2, 8388608);
		case 13:
			return (!__LIB_5__::func_331(uParam0, iParam2, 8388608) && bVar0);
	}
	return false;
}

void func_901(int iParam0, bool bParam1)
{
	if (bParam1 || !__LIB_2__::func_618(iParam0))
	{
		__LIB_5__::func_107(iParam0);
	}
}

void func_902(var uParam0, vector3 vParam1, float fParam4)
{
	if (__LIB_4__::func_948(uParam0, 33554432))
	{
		return;
	}
	if (__LIB_4__::func_948(uParam0, 4096))
	{
		return;
	}
	if (__LIB_0__::func_86(vParam1))
	{
		return;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam1)))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(vParam1));
		__LIB_4__::func_945(uParam0, 8);
	}
	__LIB_4__::func_945(uParam0, 4096);
	PED::_0x4759CC730F947C81();
	VEHICLE::_0x1FF00DB43026B12F();
	PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam1, fParam4, false, true, true, false);
	CAM::DO_SCREEN_FADE_OUT(0);
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
	__LIB_5__::func_107(&(uParam0->f_603));
}

void func_903(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	bVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(bVar0) || PED::IS_PED_INJURED(bVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(bVar0))
	{
		return;
	}
	if (__LIB_0__::func_818(iParam0, 64))
	{
		__LIB_0__::func_798(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(bVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = __LIB_0__::func_293(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		}
		if (bVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::_BLIP_ADD_FOR_ENTITY(-515518185, bVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("BLIP_SADDLE"), true);
				__LIB_1__::func_457(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630.f_40 == bVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && bVar4)
	{
		__LIB_0__::func_798(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (__LIB_0__::func_819(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			{
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::_BLIP_ADD_FOR_ENTITY(iVar5, bVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		__LIB_1__::func_458(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (__LIB_0__::func_818(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(bVar0);
	bVar10 = false;
	iVar11 = __LIB_0__::func_820(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == bVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(bVar0, true, false) };
	fVar15 = __LIB_0__::func_636(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > __LIB_1__::func_136(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			iVar17 = -401963276;
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(bVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			iVar17 = -1380599892;
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			iVar17 = 1313031610;
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			iVar17 = -1012863186;
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		__LIB_0__::func_637(Global_1900383[iParam0 /*45*/].f_26);
		__LIB_0__::func_638(Global_1900383[iParam0 /*45*/].f_26);
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == bVar0 && bVar3) && !bVar9)
	{
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	if (__LIB_8__::func_597(bVar0) && !bVar9)
	{
		if (iVar5 == joaat("BLIP_STYLE_PLAYER_HORSE"))
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar20);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 561559387);
		MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, -201249929);
	}
	iVar21 = __LIB_0__::func_819(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_4");
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(bVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(bVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(bVar0, iVar22);
	}
}

void func_904(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	if (bParam4)
	{
		__LIB_0__::func_155(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = bParam3;
	__LIB_1__::func_171(Var0);
}

void func_905(var uParam0, int iParam1)
{
	__LIB_6__::func_909(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1, __LIB_5__::func_280(uParam0, iParam1));
}

void func_906(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return;
	}
	if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((bParam5 < 0f || bParam6 < 0f) || bParam7 < 0f) || bParam8 < 0f)
	{
		return;
	}
	if (((((!bParam5 > bParam6 || !bParam5 > bParam7) || !bParam5 > bParam8) || !bParam6 > bParam7) || !bParam6 > bParam8) || !bParam7 > bParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(bParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(bParam0, false);
	}
	bVar3 = __LIB_8__::func_619(bParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((__LIB_1__::func_38() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam6 && bVar3 > bParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (bParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (bParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (bVar3 <= bParam8)
		{
			if (bParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !__LIB_8__::func_620(bParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(bParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_8__::func_620(bParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(bParam0, 0, iParam12);
			}
		}
	}
}

void func_907(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (__LIB_3__::func_358(__LIB_4__::func_998(uParam0)))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_4__::func_955(__LIB_4__::func_998(uParam0)))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_5421));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				__LIB_5__::func_360(uParam0, iVar1, sParam1, bParam2);
			}
			iVar0++;
		}
	}
}

int func_908(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (__LIB_1__::func_25(Global_1347702[63 /*49*/].f_15, 1) || __LIB_1__::func_44(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (__LIB_0__::func_252(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (__LIB_0__::func_273(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (__LIB_1__::func_25(Global_1347702[134 /*49*/].f_15, 1) || __LIB_1__::func_44(Global_1347702[134 /*49*/].f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (__LIB_1__::func_25(Global_1835011[38 /*74*/].f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (__LIB_1__::func_198(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !__LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(__LIB_8__::func_593(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (iVar1[iVar10] == Global_40.f_4942[iParam0 /*60*/].f_3)
			{
				bVar9 = true;
				iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = iVar1[iVar11];
	}
	if (!__LIB_1__::func_201(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
	}
	return iVar8;
}

bool func_909(var uParam0)
{
	bool bVar0;
	bVar0 = (PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_TELEPORT_ACTIVE());
	if (__LIB_5__::func_51(&(uParam0->f_603)) >= uParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			PLAYER::STOP_PLAYER_TELEPORT();
		}
		if ((__LIB_0__::func_13(32768) && __LIB_4__::func_545()) && __LIB_5__::func_51(&(uParam0->f_603)) < (uParam0->f_13144 + 10f))
		{
			return false;
		}
		if (__LIB_4__::func_948(uParam0, 8) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_1__::func_469(uParam0->f_607))))
		{
			INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_1__::func_469(uParam0->f_607)));
			__LIB_4__::func_958(uParam0, 8);
		}
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		__LIB_0__::func_489(0, 0);
		__LIB_4__::func_958(uParam0, 4096);
		return true;
	}
	return false;
}

bool func_910(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	char[] cVar9[8];
	iVar0 = 1;
	if (!__LIB_5__::func_347(__LIB_4__::func_941(uParam0), __LIB_4__::func_948(uParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { __LIB_5__::func_300(__LIB_4__::func_941(uParam0)) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
	{
		if (!__LIB_5__::func_464(__LIB_4__::func_941(uParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!__LIB_8__::func_808(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		iVar0 = 0;
	}
	if (__LIB_4__::func_948(uParam0, 4) && !PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {__LIB_4__::func_542(uParam0->f_607)}, 3);
	if (!__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		if (!__LIB_5__::func_341(&(uParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_911(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (Global_1360165[iParam0 /*1157*/].f_12 == 0 || __LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
	{
		if (MAP::DOES_BLIP_EXIST(*uParam1))
		{
			__LIB_5__::func_305(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = __LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 512);
	if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 256))
	{
		iVar1 = __LIB_0__::func_761(-1739349092);
	}
	if (!MAP::DOES_BLIP_EXIST(*uParam1))
	{
		*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), __LIB_8__::func_593(iParam0));
	}
	if (MAP::DOES_BLIP_EXIST(*uParam1))
	{
		if (iVar0 != 0)
		{
			MAP::_BLIP_SET_MODIFIER(*uParam1, iVar0);
			if (iVar0 == -546708623)
			{
				MAP::_BLIP_SET_MODIFIER(*uParam1, 231194138);
			}
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(*uParam1, iVar0);
		}
		if (bVar2 && !__LIB_0__::func_296(0, 0, 1))
		{
			MAP::_BLIP_SET_STYLE(*uParam1, -1944754404);
			if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 1024))
			{
				MAP::_BLIP_SET_MODIFIER(*uParam1, -46775694);
			}
			if (__LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 2048))
			{
				MAP::_BLIP_SET_MODIFIER(*uParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			MAP::SET_BLIP_SPRITE(*uParam1, iVar1, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1360165[iParam0 /*1157*/].f_14)) && __LIB_0__::func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 8))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, &(Global_1360165[iParam0 /*1157*/].f_14));
		}
		else
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, __LIB_1__::func_464(iParam0, 0));
		}
	}
}

int func_912(var uParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_78(uParam0) < 3)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0 /*18*/].f_2 == 9 && uParam0->f_475[iVar0 /*18*/].f_1 == 0) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1522[uParam0->f_475[iVar0 /*18*/].f_4 /*10*/].f_8))
		{
			*iParam1 = uParam0->f_1522[uParam0->f_475[iVar0 /*18*/].f_4 /*10*/].f_8;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_913(var uParam0, int iParam1)
{
	uParam0->f_436 = iParam1;
	__LIB_6__::func_923(uParam0, 1);
}

void func_914(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_475[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_5__::func_523(uParam0, iParam2, iParam1);
			break;
		case 4:
			__LIB_5__::func_612(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_0__::func_265(&(uParam0->f_1872)) >= IntToFloat((uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_5__::func_213(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_2__::func_813(&(uParam0->f_1771), uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_475[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1685 = iParam1;
			break;
	}
}

int func_915(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	struct<11> Var1;
	Var1.f_10 = 7;
	Var1 = iParam4;
	Var1.f_1 = iParam5;
	Var1.f_2 = iParam6;
	Var1.f_3 = iParam7;
	Var1.f_4 = iParam8;
	Var1.f_6 = { vParam0 };
	Var1.f_9 = fParam3;
	return __LIB_5__::func_615(&uVar0, &Var1);
}

int func_916(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1415419.f_9721[iVar0 /*8*/] == iParam0 && Global_1415419.f_9721[iVar0 /*8*/].f_2 == 1)
		{
			Global_1415419.f_9721[iVar0 /*8*/].f_7 = 1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_917(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		VEHICLE::SET_TRAIN_SPEED(iParam0, fParam1);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iParam0, fParam1);
	}
}

void func_918(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < VEHICLE::_0x635423D55CA84FC8(iParam1))
		{
			iVar1 = VEHICLE::GET_TRAIN_CARRIAGE(iParam0, iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				ENTITY::_0x6C31B06E91518269(iVar1, iParam2);
			}
			iVar0++;
		}
	}
}

bool func_919(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < VEHICLE::_0x635423D55CA84FC8(iParam1))
		{
			iVar2 = VEHICLE::GET_TRAIN_CARRIAGE(iParam0, iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (ENTITY::_0xC2E71D7E0A7B4C89(iVar2))
				{
					iVar1 = 1;
				}
				else
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

void func_920(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_804);
	}
}

bool func_921(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;
	uParam0->f_2279.f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &(uParam0->f_2279));
	return bVar0;
}

int func_922(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_0__::func_20(iParam0))
	{
		return 0;
	}
	if (!__LIB_1__::func_902(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!__LIB_8__::func_783((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_923(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_902(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		__LIB_0__::func_123(iVar0, 32);
		iVar0++;
	}
}

bool func_924(int iParam0)
{
	return __LIB_3__::func_128(iParam0, &(Global_1946804.f_1949));
}

bool func_925(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (uParam1->f_1 == 0)
	{
		return false;
	}
	if (!__LIB_0__::func_51(uParam1, 2))
	{
		iVar1 = PED::_GET_METAPED_TYPE(iParam0);
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (uParam1->f_1.f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				uParam1->f_135[uParam1->f_134 /*2*/] = PED::_0xF6D9E1F3560CBF8E(iVar1, uParam1->f_1.f_1[iVar0 /*3*/], 0, false, 0);
				uParam1->f_135[uParam1->f_134 /*2*/].f_1 = iVar0;
				uParam1->f_134++;
			}
			iVar0++;
		}
		__LIB_0__::func_7(uParam1, 2);
	}
	return __LIB_3__::func_128(iParam0, uParam1);
}

void func_926(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_902(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		__LIB_0__::func_121(iVar0, 32);
		iVar0++;
	}
}

void func_927(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = VEHICLE::_0x635423D55CA84FC8(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = VEHICLE::_0x8DF5F6A19F99F0D5(iParam1, iVar1);
		__LIB_5__::func_338(uParam0, iVar2, iParam2);
		iVar1++;
	}
}

bool func_928(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_0__::func_132(uParam0[iVar0 /*67*/]))
		{
			if (__LIB_4__::func_688((uParam0[iVar0 /*67*/])->f_3, iParam1))
			{
				if ((uParam0[iVar0 /*67*/])->f_65 > 0f || __LIB_0__::func_1((uParam0[iVar0 /*67*/])->f_2, 4))
				{
					if (!__LIB_4__::func_793(uParam0[iVar0 /*67*/]))
					{
						iVar1 = 0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_929(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_4__::func_688((uParam0[iVar0 /*3*/])->f_2, iParam12))
		{
			__LIB_4__::func_995(&((uParam0[iVar0 /*3*/])->f_2), iParam12);
			if (__LIB_5__::func_312(&((uParam0[iVar0 /*3*/])->f_2), iParam13))
			{
				__LIB_4__::func_589(uParam0[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (__LIB_4__::func_688((uParam1[iVar0 /*5*/])->f_4, iParam12))
		{
			__LIB_4__::func_995(&((uParam1[iVar0 /*5*/])->f_4), iParam12);
			if (__LIB_5__::func_312(&((uParam1[iVar0 /*5*/])->f_4), iParam13))
			{
				__LIB_4__::func_590(uParam1[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (__LIB_4__::func_688((uParam2[iVar0 /*3*/])->f_2, iParam12))
		{
			__LIB_4__::func_995(&((uParam2[iVar0 /*3*/])->f_2), iParam12);
			if (__LIB_5__::func_312(&((uParam2[iVar0 /*3*/])->f_2), iParam13))
			{
				__LIB_4__::func_591(uParam2[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (__LIB_4__::func_688((uParam3[iVar0 /*3*/])->f_2, iParam12))
		{
			__LIB_4__::func_995(&((uParam3[iVar0 /*3*/])->f_2), iParam12);
			if (__LIB_5__::func_312(&((uParam3[iVar0 /*3*/])->f_2), iParam13))
			{
				__LIB_4__::func_592(uParam3[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	if (__LIB_4__::func_688(uParam4->f_1, iParam12))
	{
		__LIB_4__::func_995(&(uParam4->f_1), iParam12);
		if (__LIB_5__::func_312(&(uParam4->f_1), iParam13))
		{
			__LIB_4__::func_593(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (__LIB_4__::func_688((uParam5[iVar0 /*67*/])->f_3, iParam12))
		{
			__LIB_4__::func_995(&((uParam5[iVar0 /*67*/])->f_3), iParam12);
			if (__LIB_5__::func_312(&((uParam5[iVar0 /*67*/])->f_3), iParam13))
			{
				__LIB_4__::func_594(uParam5[iVar0 /*67*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (__LIB_4__::func_688((uParam6[iVar0 /*4*/])->f_3, iParam12))
		{
			__LIB_4__::func_995(&((uParam6[iVar0 /*4*/])->f_3), iParam12);
			if (__LIB_5__::func_312(&((uParam6[iVar0 /*4*/])->f_3), iParam13))
			{
				__LIB_4__::func_595(uParam6[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (__LIB_4__::func_688((uParam7[iVar0 /*5*/])->f_4, iParam12))
		{
			__LIB_4__::func_995(&((uParam7[iVar0 /*5*/])->f_4), iParam12);
			if (__LIB_5__::func_312(&((uParam7[iVar0 /*5*/])->f_4), iParam13))
			{
				__LIB_4__::func_596(uParam7[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (__LIB_4__::func_688((uParam8[iVar0 /*3*/])->f_2, iParam12))
		{
			__LIB_4__::func_995(&((uParam8[iVar0 /*3*/])->f_2), iParam12);
			if (__LIB_5__::func_312(&((uParam8[iVar0 /*3*/])->f_2), iParam13))
			{
				__LIB_4__::func_597(uParam8[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (__LIB_4__::func_688((uParam9[iVar0 /*3*/])->f_2, iParam12))
		{
			__LIB_4__::func_995(&((uParam9[iVar0 /*3*/])->f_2), iParam12);
			if (__LIB_5__::func_312(&((uParam9[iVar0 /*3*/])->f_2), iParam13))
			{
				__LIB_4__::func_598(uParam9[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (__LIB_4__::func_688((uParam10[iVar0 /*4*/])->f_3, iParam12))
		{
			__LIB_4__::func_995(&((uParam10[iVar0 /*4*/])->f_3), iParam12);
			if (__LIB_5__::func_312(&((uParam10[iVar0 /*4*/])->f_3), iParam13))
			{
				__LIB_4__::func_599(uParam10[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (__LIB_4__::func_688((uParam11[iVar0 /*3*/])->f_2, iParam12))
		{
			__LIB_4__::func_995(&((uParam11[iVar0 /*3*/])->f_2), iParam12);
			if (__LIB_5__::func_312(&((uParam11[iVar0 /*3*/])->f_2), iParam13))
			{
				__LIB_4__::func_600(uParam11[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

bool func_930(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
		uParam0->f_871++;
		if (uParam0->f_871 < 10)
		{
			return (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304));
		}
		uParam0->f_871 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	__LIB_5__::func_68(uParam0, sParam1);
	if (!__LIB_0__::func_84(uParam0, 64))
	{
		if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam0)))
		{
			__LIB_0__::func_88(uParam0, 64);
		}
		else
		{
			vVar0 = { __LIB_5__::func_84(uParam0) };
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
		if ((fVar3 >= __LIB_4__::func_569(uParam0) && !bParam2) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
		{
			if (uParam0->f_889)
			{
				__LIB_1__::func_436();
				uParam0->f_889 = 0;
			}
			__LIB_4__::func_570(uParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_804);
			}
			__LIB_5__::func_67(uParam0);
			__LIB_4__::func_550(uParam0, 128, 1);
			__LIB_4__::func_550(uParam0, 256, 1);
			__LIB_4__::func_550(uParam0, 4096, 1);
			__LIB_4__::func_550(uParam0, 32768, 1);
			__LIB_4__::func_550(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= __LIB_4__::func_547(uParam0) || bParam2)
	{
		if (!__LIB_0__::func_84(uParam0, 128))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
			{
				if (__LIB_4__::func_547(uParam0) >= __LIB_4__::func_569(uParam0))
				{
				}
				Var4 = { __LIB_4__::func_571(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					__LIB_5__::func_69(uParam0);
				}
				Var4 = { __LIB_4__::func_571(uParam0) };
				iVar12 = 256;
				if (!__LIB_0__::func_84(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_804 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_800), iVar12, &Var4, false, true);
				__LIB_1__::func_737(uParam0, 0, 0, 0, 0);
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
		__LIB_5__::func_350(uParam0);
		if (!uParam0->f_889)
		{
			if (__LIB_0__::func_95())
			{
				__LIB_1__::func_36(4096);
				uParam0->f_889 = 1;
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_804, true, false))
		{
			bVar13 = true;
			Var15 = { __LIB_5__::func_65(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_822[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_822[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_822[iVar14 /*9*/].f_8)
						{
							uParam0->f_822[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_804, &(uParam0->f_822[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, &(uParam0->f_822[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!__LIB_0__::func_84(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_804, &Var15))
				{
					if (!__LIB_0__::func_84(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_804, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_804, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_804, &Var15);
						}
						__LIB_0__::func_88(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, &Var15))
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
			__LIB_4__::func_550(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

int func_931(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	__LIB_3__::func_864(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_932(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[10];
	int iVar14;
	int iVar15;
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	iVar1 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	iVar2 = Global_40.f_4283;
	if (__LIB_7__::func_595(ENTITY::GET_ENTITY_MODEL(iVar0), iVar2))
	{
		iVar1 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL");
	}
	else
	{
		__LIB_8__::func_855(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), &uVar3);
		iVar15 = 0;
		while (iVar15 < 10)
		{
			if (!__LIB_0__::func_144(uVar3[iVar15], 0))
			{
			}
			else if (!__LIB_5__::func_796(uVar3[iVar15]))
			{
			}
			else
			{
				iVar14 = __LIB_7__::func_651(uVar3[iVar15], iVar2);
				if (__LIB_7__::func_596(iVar14, iVar1))
				{
					iVar1 = iVar14;
				}
			}
			iVar15++;
		}
	}
	__LIB_7__::func_597(&iVar1);
	if (__LIB_7__::func_596(iVar1, Global_1357549.f_1492))
	{
		Global_1357549.f_1492 = iVar1;
	}
}

int func_933(bool bParam0, var uParam1, bool bParam2, bool bParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	iVar1 = -1;
	fVar2 = 1E+09f;
	if ((Global_1415419.f_19[bParam0 /*12*/].f_8 != -1 && Global_1415419.f_19[bParam0 /*12*/].f_9 < 960) && Global_1415419.f_19[bParam0 /*12*/].f_9 >= Global_1415419.f_19[bParam0 /*12*/].f_8)
	{
		bVar3 = __LIB_7__::func_527(bParam0);
		bVar3 = (bVar3 * bVar3);
		bVar4 = __LIB_7__::func_528(bParam0);
		bVar4 = (bVar4 * bVar4);
		iVar0 = Global_1415419.f_19[bParam0 /*12*/].f_8;
		while (iVar0 <= Global_1415419.f_19[bParam0 /*12*/].f_9)
		{
			*uParam1++;
			if (!__LIB_7__::func_525(bParam0, Global_1415419.f_2996[iVar0 /*7*/]))
			{
			}
			else
			{
				fVar6 = BUILTIN::VDIST2(Global_36, Global_1415419.f_2996[iVar0 /*7*/]);
				if (bParam2 && bParam0 != 34)
				{
					iVar5 = __LIB_2__::func_431(Global_35, Global_1415419.f_2996[iVar0 /*7*/], 1060437492 /* Float: 0.707f */);
					if (iVar5 == 1)
					{
					}
					else if (fVar6 < fVar2)
					{
						if (__LIB_7__::func_533(Global_1415419.f_2996[iVar0 /*7*/], fVar6, (bParam0 <= 33 || bParam0 == 72), fParam4, bVar3, bVar4, bParam0))
						{
							iVar1 = iVar0;
							fVar2 = fVar6;
							if (bParam3)
							{
							}
							else
							{
								iVar0++;
							}
							return iVar1;
						}
					}
				}
			}
		}
	}
}

void func_934(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	__LIB_8__::func_889(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_935(var uParam0, int iParam1)
{
	__LIB_4__::func_796(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1);
}

void func_936(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_8__::func_574(iParam0, 0);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_1__::func_690(iParam0, 0, (954 - 1), 1);
	}
	if (iVar0 == -1)
	{
		return;
	}
	__LIB_2__::func_753(iVar0, bParam1, 1, 0, 0);
}

bool func_937(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return true;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_13109)))
	{
		__LIB_1__::func_283(&(uParam0->f_13109), 0);
	}
	else if (__LIB_0__::func_265(&(uParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (__LIB_3__::func_358(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < __LIB_4__::func_955(uParam0->f_5421))
		{
			iVar2 = __LIB_4__::func_956(uParam0->f_5421, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar3 = __LIB_4__::func_956(uParam0->f_5421, iVar1);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3) && !PED::_0xA0BC8FAED8CFEB3C(iVar3))
					{
						iVar0 = 0;
					}
				}
				else if ((!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_VEHICLE(iVar2)) && VEHICLE::_IS_DRAFT_VEHICLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2)))
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 6)
					{
						iVar5 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2), iVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar5))
						{
							if (!PED::_0xA0BC8FAED8CFEB3C(iVar5))
							{
								iVar0 = 0;
							}
						}
						iVar4++;
					}
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_938(var uParam0, char* sParam1, var uParam2)
{
	struct<8> Var0;
	char cVar8[32];
	if (__LIB_4__::func_951(uParam2, 1))
	{
		__LIB_5__::func_1(&(uParam2->f_7375));
	}
	__LIB_5__::func_272(uParam2);
	if (!__LIB_0__::func_84(uParam0, 301989888))
	{
		__LIB_5__::func_317(uParam0, &(uParam2->f_10792));
	}
	if (__LIB_0__::func_81(uParam0) == 2 && (__LIB_0__::func_1(uParam0->f_860, 16384) || __LIB_0__::func_84(uParam0, 268435456)))
	{
		Var0 = { __LIB_5__::func_65(uParam0) };
		__LIB_4__::func_980(uParam0, &Var0);
	}
	__LIB_5__::func_492(uParam0, sParam1);
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
	__LIB_1__::func_737(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	__LIB_4__::func_621(uParam0, cVar8);
	__LIB_0__::func_722(1, 0);
	__LIB_4__::func_570(uParam0);
	if (__LIB_0__::func_103() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, __LIB_0__::func_731(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_4__::func_584(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_796);
	}
	__LIB_5__::func_318(uParam0);
	__LIB_5__::func_83(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_804);
	Global_43800 = uParam0->f_804;
	StringCopy(&Global_43802, sParam1, 24);
}

bool func_939(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = __LIB_0__::func_421(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (__LIB_1__::func_707(iVar2, 1, 0) || __LIB_0__::func_530(__LIB_0__::func_529(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_426(__LIB_0__::func_421(iVar0))), __LIB_0__::func_426(__LIB_0__::func_421(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = __LIB_0__::func_942() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = __LIB_0__::func_965() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = __LIB_1__::func_35(iParam3, __LIB_0__::func_532(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (__LIB_1__::func_764(iVar2) - iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
				else
				{
					bVar1 = __LIB_1__::func_764(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (__LIB_1__::func_764(iVar2) + iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
			}
			else
			{
				bVar1 = __LIB_1__::func_764(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_534(iVar2)), __LIB_0__::func_534(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (__LIB_0__::func_314(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_535(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), __LIB_0__::func_535(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = __LIB_0__::func_438() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = __LIB_0__::func_528() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = __LIB_1__::func_35(iParam3, __LIB_0__::func_532(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (__LIB_1__::func_764(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = __LIB_8__::func_222(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = __LIB_8__::func_222(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_1__::func_72(iVar2)), __LIB_1__::func_72(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_940(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (__LIB_8__::func_222(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_8__::func_222(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_8__::func_222(iVar0))
		{
			*sParam2++;
		}
		if (__LIB_8__::func_222(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (__LIB_8__::func_222(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_8__::func_222(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_8__::func_222(iVar0))
		{
			*sParam2++;
		}
		if (__LIB_8__::func_222(iVar1))
		{
			*sParam2++;
		}
		if (__LIB_8__::func_222(iVar0) && __LIB_8__::func_222(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (__LIB_8__::func_222(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_8__::func_222(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_8__::func_222(iVar0))
		{
			*sParam2++;
		}
		if (__LIB_8__::func_222(iVar1))
		{
			*sParam2++;
		}
		if (__LIB_8__::func_222(iVar2))
		{
			*sParam2++;
		}
		if ((__LIB_8__::func_222(iVar0) && __LIB_8__::func_222(iVar1)) && __LIB_8__::func_222(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (__LIB_8__::func_222(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_8__::func_222(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_8__::func_222(iVar0))
		{
			*sParam2++;
		}
		if (__LIB_8__::func_222(iVar1))
		{
			*sParam2++;
		}
		if (__LIB_8__::func_222(iVar2))
		{
			*sParam2++;
		}
		if (__LIB_8__::func_222(iVar3))
		{
			*sParam2++;
		}
		if (((__LIB_8__::func_222(iVar0) && __LIB_8__::func_222(iVar1)) && __LIB_8__::func_222(iVar2)) && __LIB_8__::func_222(iVar3))
		{
			return true;
		}
	}
	return false;
}

int func_941(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return __LIB_8__::func_809(iParam0, iParam1, bParam2, bParam3);
}

void func_942(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_5__::func_129(&(uParam0->f_861), uParam0->f_872);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_5__::func_85(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_5__::func_67(uParam0);
	__LIB_4__::func_622(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_4__::func_977(uParam0, 4);
	__LIB_5__::func_69(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_4__::func_570(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_804))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_804);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_861, 128));
	if (!__LIB_0__::func_1(uParam0->f_861, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_943(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = __LIB_0__::func_449(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_0__::func_191();
	if (bParam5)
	{
		if (!__LIB_1__::func_713(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (__LIB_0__::func_156(32768) && Global_1946804.f_1378.f_1[10 /*3*/] != Global_1946804.f_57[10 /*11*/])
	{
		__LIB_0__::func_945();
	}
	__LIB_4__::func_714(iVar3, 1, 1, 1, 1, 1);
	__LIB_1__::func_452(31, 0, 0, 0, 0);
	__LIB_1__::func_36(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			__LIB_1__::func_452(2, iVar1, 2, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		__LIB_1__::func_550(&(Global_1946804.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_944(int iParam0, int iParam1, bool bParam2)
{
	__LIB_8__::func_821(iParam0, iParam1, bParam2, 1);
}

void func_945(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (__LIB_1__::func_22(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			__LIB_8__::func_824(uParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_946(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (VOLUME::_DOES_VOLUME_EXIST((*uParam0)[iVar0]))
		{
			VOLUME::_DELETE_VOLUME((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_947(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	__LIB_7__::func_688(iParam0);
	iVar0 = -1;
	if (!__LIB_6__::func_791(iParam0, iParam1, &iVar0, 1, iParam2, iParam3))
	{
		return 0;
	}
	if (!__LIB_6__::func_816(iParam0, iParam1))
	{
	}
	return 1;
}

bool func_948(var uParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return false;
	}
	return true;
}

bool func_949(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (Global_1391438.f_1)
	{
		return true;
	}
	uParam0->f_98++;
	if (uParam0->f_98 < 10)
	{
		return false;
	}
	uParam0->f_98 = 0;
	if (__LIB_0__::func_296(0, 1, 1) && !__LIB_1__::func_44(uParam0->f_10))
	{
		return true;
	}
	if (bParam4)
	{
		if ((__LIB_0__::func_699(*uParam0) && !__LIB_3__::func_93(*uParam0, Global_1391438.f_206[0], 0)) && !__LIB_3__::func_93(*uParam0, Global_1391438.f_206[1], 0))
		{
			return true;
		}
	}
	if (__LIB_0__::func_592() != 1)
	{
		return true;
	}
	if (__LIB_0__::func_287(*uParam0, 29, 1))
	{
		return true;
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return true;
	}
	if (bParam2)
	{
		if (!__LIB_0__::func_272(__LIB_0__::func_271(*uParam0), 0))
		{
			*uParam1 = 1;
		}
	}
	if (uParam0->f_9 == joaat("HAI_FIVE_FINGER_FILLET_01") || uParam0->f_9 == joaat("HAI_FIVE_FINGER_FILLET_02"))
	{
		if (__LIB_0__::func_492(1) < 10)
		{
			return true;
		}
	}
	if (__LIB_0__::func_272(uParam0->f_1, 0) && PED::_0x331550B212014B92(uParam0->f_1, Global_35))
	{
		return true;
	}
	if (__LIB_0__::func_190())
	{
		return true;
	}
	if (bParam3)
	{
		if (__LIB_0__::func_12() != __LIB_0__::func_61())
		{
			*uParam1 = 1;
		}
		if (!__LIB_0__::func_86(uParam0->f_14) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_14, true) > 200f)
		{
			*uParam1 = 1;
		}
	}
	if (((!__LIB_6__::func_734(&(uParam0->f_78)) && !uParam0->f_78.f_15) && !__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1)) && !__LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
	{
		__LIB_0__::func_11("Time window expired for ", 0, 1);
		__LIB_0__::func_11(" - Cancelling launch.", 1, 0);
		*uParam1 = 0;
		return true;
	}
	if (bParam5)
	{
		if (!__LIB_0__::func_86(uParam0->f_14))
		{
			if (__LIB_1__::func_261(uParam0->f_14, 6f, 4, 1))
			{
				__LIB_0__::func_11("A lock volume now blocks ", 0, 1);
				__LIB_0__::func_11(" - Cancelling launch.", 1, 0);
				*uParam1 = 0;
				return true;
			}
		}
	}
	if (*uParam1)
	{
		return true;
	}
	return false;
}

void func_950(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_271(*uParam0);
	if (__LIB_0__::func_272(iVar0, 0))
	{
		__LIB_3__::func_157(&(sParam1->f_534[0 /*17*/]), __LIB_1__::func_246(uParam0->f_8), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_6__::func_736(&(sParam1->f_473), &(sParam1->f_534), 0, Global_1391438.f_308[uParam0->f_12], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_471(&(sParam1->f_473), 15);
		sParam1->f_552.f_3 = Global_35;
		sParam1->f_552.f_8 = 4;
		sParam1->f_552.f_19 = 4;
		sParam1->f_552.f_21 = 4;
		sParam1->f_552.f_17 = 4;
		sParam1->f_552.f_18 = 4;
		sParam1->f_552.f_7 = 0;
		PED::SET_PED_CONFIG_FLAG(iVar0, 259, true);
		if (sParam1->f_472 != -1)
		{
			__LIB_8__::func_947(*uParam0, sParam1->f_472, 0, 0);
		}
	}
}

bool func_951(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 14);
}

bool func_952(int iParam0)
{
	return iParam0 == 0;
}

int func_953()
{
	return Global_1391438.f_414.f_1;
}

bool func_954()
{
	return Global_1935496.f_11;
}

bool func_955(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if ((((((((((((iParam0 == joaat("UPGRADE_FSH_BAIT_WORM") || iParam0 == joaat("UPGRADE_FSH_BAIT_BREAD")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CORN")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CHEESE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CRICKET")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CRAYFISH")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_RIVER")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_SWAMP")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP")) || iParam0 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		return true;
	}
	return false;
}

bool func_956(int iParam0)
{
	int iVar0;
	if (Global_1935496.f_72.f_41 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= Global_1935496.f_72.f_41)
	{
		if (Global_1935496.f_72[iVar0 /*2*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_957(var uParam0, int iParam1)
{
	return __LIB_0__::func_1(*uParam0, iParam1);
}

void func_958(int iParam0, bool bParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7)
{
	if (!__LIB_0__::func_35(iParam0) && !bParam7)
	{
		return;
	}
	if (Global_1310750.f_16071 != -1 && !bParam6)
	{
		return;
	}
	__LIB_1__::func_924();
	if (iParam5 == -1)
	{
		iParam5 = PLAYER::PLAYER_ID();
	}
	Global_1310750.f_16103 = { vParam2 };
	Global_1327479 = iParam0;
	Global_1327479.f_1 = iParam5;
	Global_1327479.f_10 = __LIB_3__::func_240(iParam0, vParam2);
	__LIB_1__::func_674(0);
	__LIB_0__::func_77(0, 0, 1);
	if (bParam1)
	{
		Global_1310750.f_16077 = 0;
		Global_1310750.f_16071 = -1;
		Global_1310750.f_16075 = 1;
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
		__LIB_2__::func_777(8);
		__LIB_2__::func_778(Global_36, 1137180672 /* Float: 400f */);
	}
	if (bParam7)
	{
		Global_1310750.f_16076 = 1;
	}
}

int func_959(int iParam0, bool bParam1)
{
	struct<5> Var0;
	Var0 = { __LIB_1__::func_615(iParam0, 0, 0) };
	return __LIB_0__::func_936(iParam0, &Var0, 0, bParam1);
}

void func_960(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if ((Global_36616 && __LIB_0__::func_347(iParam1)) != 0)
	{
		return;
	}
	iVar0 = __LIB_0__::func_348(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		__LIB_7__::func_500(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			__LIB_0__::func_349(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			__LIB_7__::func_500(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_961(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_316(__LIB_0__::func_317(), iParam0);
	return __LIB_1__::func_268(iVar0) > 0;
}

void func_962(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_7__::func_686(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_7__::func_686(iParam1, 1);
		__LIB_3__::func_871(iParam0);
	}
}

void func_963(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			__LIB_4__::func_49(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

int func_964(var uParam0, var uParam1)
{
	var uVar0;
	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

int func_965(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 38:
			return 1;
		case 0:
			return 5;
		case 6:
		case 42:
			return 3;
		case 9:
		case 10:
		case 37:
			return 4;
		case 1:
		case 2:
		case 36:
			return 2;
		case 41:
			return 2;
		case 40:
			return 1;
		case 13:
			return 2;
		case 14:
			return 3;
		case 16:
			return 2;
		case 11:
			return 6;
		case 17:
		case 39:
			return 5;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 21:
			return 4;
		case 27:
			return 2;
		case 33:
			return 2;
		case 43:
			return 4;
		default:
			break;
	}
	return 1;
}

var func_966(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_967(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_40.f_7857[iVar1];
	MISC::CLEAR_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

int func_968(int iParam0)
{
	if (!__LIB_2__::func_15(iParam0, 0))
	{
		return 2;
	}
	switch (iParam0)
	{
		case 0:
			return joaat("DISCOVERABLE_NAME_ODRISCOLL");
		case 2:
			return 1230354436 /* GXTEntry: "Lemoyne Raider" */;
		case 1:
			return -392391548 /* GXTEntry: "Murfree Brood" */;
		case 3:
			return -1141178522 /* GXTEntry: "Skinner Brother" */;
		case 4:
			return 1203887108 /* GXTEntry: "Hired Gun" */;
		case 5:
			return joaat("DISCOVERABLE_NAME_DEL_LOBO");
		default:
			break;
	}
	return 2;
}

Vector3 func_969(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 261.4119f, 168.1394f, 97.095f;
				case 1:
					return -71.9f, 314.6f, 108.1f;
				case 2:
					return -247.9203f, 499.8062f, 94.8408f;
				case 3:
					return -265.6117f, -258.6254f, 91.1275f;
				case 4:
					return 947.9633f, 392.5947f, 110.4447f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
		case 36:
			switch (iParam1)
			{
				case 0:
					return 37.4f, 576f, 130.9528f;
				case 1:
					return 82.3596f, 414.8434f, 126.6896f;
				default:
					break;
			}
			break;
		case 3:
		case 4:
		case 38:
			switch (iParam1)
			{
				case 0:
					return -99.1603f, 295.7463f, 102.7589f;
				default:
					break;
			}
			break;
		case 6:
		case 42:
			switch (iParam1)
			{
				case 0:
					return -605.1606f, 415.9453f, 95.278f;
				case 1:
					return 647.687f, -566.0206f, 73.8882f;
				case 2:
					return 156.9574f, 589.7143f, 124.4553f;
				default:
					break;
			}
			break;
		case 5:
		case 35:
			switch (iParam1)
			{
				case 0:
					return -1110.081f, 126.4462f, 55.3198f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1735.511f, 57.3352f, 154.7623f;
				default:
					break;
			}
			break;
		case 41:
			switch (iParam1)
			{
				case 0:
					return -1735.511f, 57.3352f, 154.7623f;
				case 1:
					return 839.995f, -692.6373f, 66.1221f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -511.2764f, -324.3151f, 65.11539f;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					return -511.2764f, -324.3151f, 65.11539f;
				default:
					break;
			}
			break;
		case 9:
		case 10:
		case 37:
			switch (iParam1)
			{
				case 0:
					return 340.1664f, 224.1398f, 101.5865f;
				case 1:
					return -368.3074f, 115.4362f, 40.7802f;
				case 2:
					return -1061.945f, -445.6989f, 80.26047f;
				case 3:
					return -1283.033f, 16.5433f, 53.7479f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1633.234f, -672.1511f, 43.5035f;
				case 1:
					return 925.174f, -1145.063f, 53.314f;
				case 2:
					return 1426.139f, -1437.182f, 78.244f;
				case 3:
					return 1480.597f, -1043.651f, 54.8389f;
				case 4:
					return 2156.54f, -1319.13f, 41.4469f;
				case 5:
					return 1321.881f, -1679.864f, 66.872f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 1497.896f, -719.2251f, 47.15442f;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 1633.234f, -672.1511f, 43.5035f;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 925.6f, -1145f, 53f;
				case 1:
					return 1485.047f, -1042.127f, 52.9948f;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1717.905f, -2066.761f, 42.9164f;
				case 1:
					return 1475.829f, -2229.839f, 42.6941f;
				case 2:
					return 2153.501f, -1302.344f, 42.1521f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 1240.883f, -859.2491f, 69.91452f;
				case 1:
					return 991.1385f, -889.2033f, 70.3542f;
				default:
					break;
			}
			break;
		case 17:
		case 39:
			switch (iParam1)
			{
				case 0:
					return 2139.084f, -1322.471f, 41.6526f;
				case 1:
					return 2162.225f, -960.3032f, 41.7974f;
				case 2:
					return 1153.882f, -1502.448f, 52.6003f;
				case 3:
					return 1490.574f, -1001.085f, 48.9639f;
				case 4:
					return 1659.413f, -1597.443f, 55.4104f;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 2427.188f, 1043.388f, 86.5726f;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 2427.188f, 1043.388f, 86.5726f;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return 2355.17f, 1680.76f, 95.341f;
				case 1:
					return 2606.643f, 1809.042f, 91.94587f;
				case 2:
					return 2627.776f, 1314.441f, 113.6464f;
				case 3:
					return 2853.661f, 869.5517f, 49.258f;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 2466.44f, 1326.504f, 108.6252f;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					return 2737.724f, 836.7189f, 83.38937f;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return 2814.25f, 445.3571f, 63.1659f;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return -2361.181f, -1483.392f, 140.8987f;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					return -1554.11f, -1211.528f, 73.6863f;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					return -1298.058f, -1248.784f, 81.8463f;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return -1424.421f, -956.7158f, 61.702f;
				default:
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					return -2089.884f, -1624.694f, 132.9787f;
				case 1:
					return -2169.37f, -1187.876f, 132.733f;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					return -2285.194f, -414.9127f, 156.6726f;
				default:
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					return -2285.194f, -414.9127f, 156.6726f;
				default:
					break;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 0:
					return -3285.6f, -2630.4f, 4.9f;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return -5233.051f, -2902.402f, 1.486f;
				default:
					break;
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 0:
					return -3827.842f, -2983.152f, -7.33933f;
				case 1:
					return -4181.152f, -2308.259f, 0.004f;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 0:
					return 1903.304f, 1642.989f, 170.1826f;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 0:
					return 2386.82f, 751.7125f, 66.2341f;
				case 1:
					return 2678.968f, 268.3763f, 62.3124f;
				case 2:
					return 1904.455f, 498.3759f, 122.2237f;
				case 3:
					return 2832.23f, 927.7681f, 47.4658f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_970(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 34);
}

void func_971(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return;
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 = (Global_40.f_358[iParam0 /*12*/].f_5 - (Global_40.f_358[iParam0 /*12*/].f_5 && iParam1));
		return;
	}
	Global_1058888.f_42266[iParam0 /*12*/].f_5 = (Global_1058888.f_42266[iParam0 /*12*/].f_5 - (Global_1058888.f_42266[iParam0 /*12*/].f_5 && iParam1));
}

void func_972(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_973(int iParam0)
{
	var uVar0;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569.f_5.f_1))
	{
		return;
	}
	uVar0 = Global_1955569.f_5.f_2[iParam0 /*36*/];
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uVar0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1955569.f_5.f_1, uVar0);
}

bool func_974()
{
	return Global_1425247.f_53;
}

void func_975(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	__LIB_0__::func_307(iParam0, iParam1);
}

void func_976(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYAMBARINO"), iParam1);
			break;
		case 1:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYNEWHANOVER"), iParam1);
			break;
		case 2:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYLEMOYNE"), iParam1);
			break;
		case 3:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYWESTELIZABETH"), iParam1);
			break;
		case 4:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYNEWAUSTIN"), iParam1);
			break;
		default:
			break;
	}
}

int func_977(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("STATE_LEMOYNE");
		case 3:
			return joaat("STATE_WEST_ELIZABETH");
		case 1:
			return joaat("STATE_NEW_HANOVER");
		case 0:
			return joaat("STATE_AMBARINO");
		case 4:
			return joaat("STATE_NEW_AUSTIN");
		case 5:
			return joaat("STATE_GUARMA");
		default:
			break;
	}
	return 0;
}

int func_978(int iParam0)
{
	int iVar0;
	iVar0 = 5;
	while (iVar0 >= 1)
	{
		if (iParam0 >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(iVar0))
		{
			return iVar0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

char* func_979(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LBS_AMBARINO_BOUNTY";
		case 1:
			return "LBS_NEW_HANOVER_BOUNTY";
		case 2:
			return "LBS_LEMOYNE_BOUNTY";
		case 3:
			return "LBS_W_ELIZABETH_BOUNTY";
		case 4:
			return "LBS_NEW_AUSTIN_BOUNTY";
		case 5:
			return "LBS_GUARMA_BOUNTY";
		default:
			break;
	}
	return "LBS_INVALID_BOUNTY";
}

void func_980(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return;
	}
	Global_17504.f_42[iParam0 /*8*/].f_7 = !bParam1;
}

void func_981(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_34(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] - (Global_40.f_11029[iParam0 /*5*/] && iParam1));
}

void func_982(int iParam0)
{
	if (!__LIB_2__::func_824(iParam0))
	{
		return;
	}
	if (!__LIB_2__::func_960(iParam0))
	{
	}
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_4 = 0;
}

int func_983(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_3__::func_654(iParam0, 1);
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar1 = __LIB_3__::func_654(__LIB_8__::func_643(iVar3), 1);
		iVar2 = __LIB_3__::func_654(__LIB_8__::func_644(iVar3), 1);
		if (iVar0 >= iVar1)
		{
			if (iVar0 <= iVar2)
			{
				return iVar3;
			}
		}
		iVar3++;
	}
	return 0;
}

void func_984(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_932(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 = (Global_40.f_358[iParam0 /*12*/].f_5 || iParam1);
		return;
	}
	Global_1058888.f_42266[iParam0 /*12*/].f_5 = (Global_1058888.f_42266[iParam0 /*12*/].f_5 || iParam1);
}

void func_985(int iParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
	{
		__LIB_4__::func_181(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/]));
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1))
	{
		__LIB_4__::func_181(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/].f_1));
	}
}

void func_986(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;
	if (!__LIB_0__::func_607(uParam0))
	{
		return;
	}
	if (Global_1224424 < 20)
	{
		Global_1224424++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1224424.f_1[iVar0 /*22*/] = { Global_1224424.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 10;
	Var1.f_7.f_14 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1224424.f_1[(Global_1224424 - 1) /*22*/] = { Var1 };
}

void func_987()
{
	bool bVar0;
	bVar0 = __LIB_4__::func_631();
	Global_40.f_7748.f_6 = 0;
	if (bVar0 && !__LIB_4__::func_631())
	{
		__LIB_4__::func_663(14);
	}
}

void func_988()
{
	bool bVar0;
	bVar0 = __LIB_4__::func_631();
	Global_40.f_7748.f_6 = (Global_40.f_7748.f_6 - 1);
	if (bVar0 && !__LIB_4__::func_631())
	{
		__LIB_4__::func_663(14);
	}
}

int func_989()
{
	if (__LIB_4__::func_676(8))
	{
		return 8;
	}
	else if (__LIB_4__::func_676(4))
	{
		return 4;
	}
	else if (__LIB_4__::func_676(2))
	{
		return 2;
	}
	return 1;
}

bool func_990(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	iVar0 = __LIB_5__::func_538(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (__LIB_3__::func_743(iVar1, &iVar0))
		{
			iVar2 = __LIB_0__::func_271(__LIB_4__::func_543(iParam0));
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
			}
			else
			{
				if (bParam1 && __LIB_0__::func_287(iVar1, 67, 1))
				{
					return true;
				}
				if (bParam2 && __LIB_0__::func_287(iVar1, 47, 1))
				{
					return true;
				}
				if (!PED::_0x5102307CE88798EB(iVar2))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(iVar2);
				}
				if (PED::IS_TRACKED_PED_VISIBLE(iVar2))
				{
					return true;
				}
			}
		}
		iVar1++;
	}
	return false;
}

void func_991(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_5__::func_538(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (__LIB_3__::func_743(iVar1, &iVar0))
		{
			iVar2 = __LIB_0__::func_271(__LIB_4__::func_543(iParam0));
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
			}
			else if (PED::_0x5102307CE88798EB(iVar2))
			{
				PED::_0x3088634CF8C819CF(iVar2);
			}
		}
		iVar1++;
	}
}

void func_992(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1347702[iParam0 /*49*/].f_41))
	{
		__LIB_1__::func_544(Global_1347702[iParam0 /*49*/].f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			PATHFIND::_0xD17672447692478E(Global_1347702[iParam0 /*49*/].f_41, 0);
		}
		VOLUME::_DELETE_VOLUME(Global_1347702[iParam0 /*49*/].f_41);
	}
}

void func_993(int iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_4__::func_814(iParam0, &iVar1, &iVar0))
	{
		if (__LIB_8__::func_714(iVar1, iVar0, 1))
		{
			__LIB_8__::func_721(iVar1, iVar0);
		}
	}
}

void func_994(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_4__::func_630(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = 0;
	if (bVar0 && !__LIB_4__::func_630(iParam0))
	{
		__LIB_1__::func_240(490, 1);
		__LIB_4__::func_660(iParam0, 0);
	}
}

void func_995(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_4__::func_630(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = (Global_40.f_7731[iParam0 /*5*/].f_4 - 1);
	if (bVar0 && !__LIB_4__::func_630(iParam0))
	{
		__LIB_1__::func_240(490, 1);
		__LIB_4__::func_660(iParam0, 0);
	}
}

void func_996()
{
	Global_1898164.f_164 = __LIB_0__::func_296(0, 1, 0);
}

int func_997(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_933(Global_1347702[iParam0 /*49*/].f_48);
	__LIB_1__::func_446(&iVar0, 0, 0, Global_1347702[iParam0 /*49*/].f_47, 0, 0, 0, 0);
	return iVar0;
}

void func_998()
{
	int iVar0;
	if (__LIB_4__::func_665() >= 7)
	{
		iVar0 = __LIB_0__::func_23();
		__LIB_1__::func_446(&iVar0, 0, 0, 0, 2, 0, 0, 0);
		DECORATOR::DECOR_SET_INT(Global_35, "hairLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "hairShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "hairLong");
	}
}

void func_999(int iParam0)
{
	if (iParam0 >= 7)
	{
		__LIB_1__::func_240(489, 0);
	}
	if ((iParam0 >= 4 && Global_1897952.f_41 != 8) && __LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		__LIB_1__::func_240(493, 0);
	}
}
