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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 6;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 6;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 6;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 6;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 4;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 3;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	struct<142> Local_73 = { 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&ScriptParam_0);
	}
	while (__LIB_7__::func_453())
	{
		BUILTIN::WAIT(0);
		switch (ScriptParam_0.f_2)
		{
			case 0:
				if (func_3(&ScriptParam_0))
				{
					__LIB_0__::func_612(&ScriptParam_0, 1);
				}
				break;
			case 1:
				__LIB_14__::func_559(&ScriptParam_0);
				__LIB_0__::func_612(&ScriptParam_0, 2);
				break;
			case 2:
				if (__LIB_14__::func_560(&ScriptParam_0) && !__LIB_1__::func_927())
				{
					__LIB_0__::func_612(&ScriptParam_0, 3);
				}
				break;
			case 3:
				if (__LIB_14__::func_538(&ScriptParam_0, 0, 1, 1, 0))
				{
					if (__LIB_14__::func_530(&ScriptParam_0))
					{
						if (__LIB_14__::func_493(&ScriptParam_0))
						{
							__LIB_0__::func_612(&ScriptParam_0, 5);
						}
					}
				}
				break;
			case 5:
				__LIB_14__::func_531(&ScriptParam_0);
				__LIB_0__::func_612(&ScriptParam_0, 6);
				break;
			case 6:
				if (__LIB_14__::func_493(&ScriptParam_0))
				{
					__LIB_0__::func_612(&ScriptParam_0, 4);
				}
				break;
			case 4:
				if (__LIB_0__::func_0(&ScriptParam_0))
				{
					__LIB_0__::func_612(&ScriptParam_0, 7);
				}
				break;
			case 7:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					__LIB_0__::func_612(&ScriptParam_0, 8);
				}
				break;
			case 8:
				if (ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					func_1(&ScriptParam_0);
					return;
				}
				if (ScriptParam_0.f_48)
				{
					if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_56.f_1))
					{
						__LIB_14__::func_537(&ScriptParam_0);
						__LIB_0__::func_11(&ScriptParam_0);
						__LIB_0__::func_612(&ScriptParam_0, 9);
					}
				}
				else if (VOLUME::_DOES_VOLUME_EXIST(__LIB_0__::func_559(__LIB_14__::func_603())))
				{
					if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, __LIB_0__::func_559(__LIB_14__::func_603()), true, 0) || __LIB_0__::func_58(&ScriptParam_0))
					{
						__LIB_14__::func_537(&ScriptParam_0);
						__LIB_0__::func_11(&ScriptParam_0);
						__LIB_0__::func_612(&ScriptParam_0, 9);
					}
				}
				if (func_18(&ScriptParam_0))
				{
					__LIB_0__::func_612(&ScriptParam_0, 9);
				}
				break;
			case 9:
				func_1(&ScriptParam_0);
				break;
			default:
				break;
		}
	}
	func_1(&ScriptParam_0);
}

void func_1(var uParam0)
{
	func_19(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(var uParam0)
{
	__LIB_14__::func_525(uParam0);
	func_21(uParam0);
	func_22(uParam0);
	if (func_23(uParam0))
	{
	}
	else
	{
		return false;
	}
	return true;
}

bool func_18(var uParam0)
{
	if (__LIB_0__::func_296(128, 0, 1))
	{
		return false;
	}
	if (!__LIB_14__::func_524())
	{
		return false;
	}
	if (!__LIB_0__::func_293(45))
	{
		return false;
	}
	else if (__LIB_0__::func_293(45))
	{
	}
	if (Local_73 >= 1)
	{
		if (!__LIB_0__::func_1(uParam0->f_3, 8192))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(Local_73.f_141) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_73.f_141, true, 0))
			{
				__LIB_14__::func_519(uParam0);
			}
		}
	}
	switch (Local_73)
	{
		case 0:
			if (func_49(uParam0))
			{
				__LIB_14__::func_501(1);
			}
			break;
		case 1:
			break;
		case 2:
			break;
		default:
			break;
	}
	if (__LIB_0__::func_6(uParam0->f_5))
	{
		switch (Local_73)
		{
			case 0:
				break;
			case 1:
				if (!__LIB_0__::func_1(uParam0->f_3, 4))
				{
					__LIB_1__::func_581(&(uParam0->f_3), 4);
					__LIB_14__::func_532(&(uParam0->f_5), &(uParam0->f_3));
					__LIB_14__::func_492(uParam0->f_1, &(Local_73.f_127));
					__LIB_14__::func_501(2);
					return false;
				}
				break;
			case 2:
				break;
		}
	}
	return false;
}

void func_19(var uParam0)
{
	func_53(uParam0);
	__LIB_14__::func_502(uParam0);
	__LIB_14__::func_527(uParam0, 0);
	__LIB_14__::func_528(uParam0, 0);
	__LIB_14__::func_541(uParam0);
	__LIB_14__::func_520(uParam0);
	__LIB_14__::func_529(uParam0);
	if (SCRIPTS::IS_THREAD_ACTIVE(*uParam0, false))
	{
		SCRIPTS::TERMINATE_THREAD(*uParam0);
	}
}

void func_21(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!func_66(uParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_22(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		uParam0->f_22[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	switch (uParam0->f_1)
	{
		case 32768:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				uParam0->f_4 = 3;
				uParam0->f_6[0] = joaat("SHACK_ONTHERUN_MALES_01");
				uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[2] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_22[0] = joaat("P_CS_SHACKLELEG01X");
			}
			else if (!__LIB_0__::func_1(uParam0->f_3, 8))
			{
				if (!func_67(-1282804314))
				{
					uParam0->f_4 = 3;
					uParam0->f_6[0] = joaat("SHACK_ONTHERUN_MALES_01");
					uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
					uParam0->f_6[2] = joaat("A_M_M_UNICORPSE_01");
				}
				else
				{
					uParam0->f_4 = 2;
					uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
					uParam0->f_6[2] = joaat("A_M_M_UNICORPSE_01");
				}
			}
			break;
		case 131072:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("U_M_Y_SHACKSTARVINGKID_01");
				uParam0->f_6[1] = joaat("U_M_Y_SHACKSTARVINGKID_01");
				uParam0->f_22[0] = joaat("P_CS_RT_ENVELOPE01X");
			}
			else
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("U_M_Y_SHACKSTARVINGKID_01");
				uParam0->f_6[1] = joaat("U_M_Y_SHACKSTARVINGKID_01");
			}
			break;
		case 8192:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					if (!__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 4) || !__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 8))
					{
						uParam0->f_4 = 0;
						if ((((((!__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 2) && !__LIB_0__::func_296(128, 0, 1)) && !__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 1, 1)) && !__LIB_2__::func_84()) && !__LIB_1__::func_988(20)) && !__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 4)) && !__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 8))
						{
							uParam0->f_4 += 2;
							uParam0->f_6[0] = joaat("SHACK_MISSINGHUSBAND_MALES_01");
							uParam0->f_6[4] = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
						}
						if (!__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 4))
						{
							uParam0->f_4 += 3;
							uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
							uParam0->f_6[2] = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
							uParam0->f_6[3] = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
						}
						if (!__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 8))
						{
							uParam0->f_22[1] = joaat("P_CS_RT_ENVELOPE01X");
						}
					}
				}
				else if (!__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 1))
				{
					uParam0->f_22[0] = joaat("P_CS_RT_ENVELOPE01X");
				}
			}
			else if (!__LIB_0__::func_1(uParam0->f_3, 8))
			{
				uParam0->f_22[0] = joaat("P_CS_RT_ENVELOPE01X");
			}
			break;
		case 4096:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				uParam0->f_4 = 5;
				uParam0->f_6[0] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[1] = joaat("A_F_M_UNICORPSE_01");
				uParam0->f_6[2] = joaat("A_F_M_UNICORPSE_01");
				uParam0->f_6[3] = joaat("A_C_CROW_01");
				uParam0->f_6[4] = joaat("A_C_CROW_01");
			}
			else if (__LIB_14__::func_522(uParam0, 1126694912 /* Float: 168f */))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[1] = joaat("A_F_M_UNICORPSE_01");
			}
			break;
		case 256:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				uParam0->f_4 = 5;
				uParam0->f_6[0] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[2] = joaat("A_C_CROW_01");
				uParam0->f_6[3] = joaat("A_C_CROW_01");
				uParam0->f_6[4] = joaat("A_C_CROW_01");
			}
			break;
		case 64:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				uParam0->f_4 = 6;
				uParam0->f_6[0] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[2] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[3] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[4] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[5] = joaat("A_M_M_UNICORPSE_01");
			}
			break;
		case 16:
			uParam0->f_4 = 1;
			uParam0->f_6[0] = joaat("A_F_M_UNICORPSE_01");
			break;
		case 512:
			uParam0->f_4 = 5;
			uParam0->f_6[0] = joaat("A_M_M_UNICORPSE_01");
			uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
			uParam0->f_6[2] = joaat("A_F_M_UNICORPSE_01");
			uParam0->f_6[3] = joaat("A_F_M_UNICORPSE_01");
			uParam0->f_6[4] = joaat("A_M_Y_UNICORPSE_01");
			break;
		case 32:
			if (__LIB_14__::func_522(uParam0, 1126694912 /* Float: 168f */))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
			}
			break;
		case 16384:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				uParam0->f_4 = 3;
				uParam0->f_6[0] = joaat("A_M_M_UNICORPSE_01");
			}
			break;
		case 65536:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				uParam0->f_22[0] = joaat("P_LNNHOUSE_STASH02");
				if (!__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 2))
				{
					uParam0->f_22[1] = joaat("P_CS_RT_ENVELOPE01X");
				}
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 262144:
			break;
		default:
			break;
	}
}

bool func_23(var uParam0)
{
	Local_73.f_141 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1576.822f, 248.9314f, 110.429f, 0f, 0f, 0f, 57.18792f, 57.49307f, 21.60371f, "BeechersA_Discovery");
	return true;
}

bool func_49(var uParam0)
{
	struct<12> Var0;
	Var0 = { func_94(0) };
	if (!__LIB_14__::func_511(&(Local_73.f_99[0 /*12*/]), Var0.f_1, Var0.f_2, Var0.f_5, Var0.f_8, Var0.f_11))
	{
		return false;
	}
	return true;
}

void func_53(var uParam0)
{
	func_99(uParam0);
}

bool func_66(var uParam0, int iParam1)
{
	if (!__LIB_14__::func_516(uParam0, iParam1) == 0 && !TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_41[iParam1]))
	{
		uParam0->f_41[iParam1] = TASK::CREATE_SCENARIO_POINT(__LIB_14__::func_516(uParam0, iParam1), func_107(uParam0, iParam1), func_108(uParam0, iParam1), func_109(uParam0, iParam1), 0, 0);
	}
	return true;
}

bool func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_110(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

struct<12> func_94(int iParam0)
{
	struct<12> Var0;
	switch (iParam0)
	{
		case 0:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { -1622.022f, 234.903f, 106.062f };
			Var0.f_5 = { 0f, 0f, 4f };
			Var0.f_8 = { 3f, 3f, 3.5f };
			Var0.f_11 = "BeechersASign";
			break;
		default:
			break;
	}
	if (__LIB_0__::func_86(Var0.f_2))
	{
	}
	return Var0;
}

void func_99(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_6(uParam0->f_5) && (__LIB_0__::func_702(uParam0->f_5) || __LIB_1__::func_44(uParam0->f_5)))
	{
		func_126(uParam0->f_5, 0, 2);
	}
	if (__LIB_0__::func_1(Global_1935630, 128))
	{
		__LIB_0__::func_8(&Global_1935630, 128);
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		__LIB_7__::func_458(&(Local_73.f_99[iVar0 /*12*/]));
		iVar0++;
	}
	__LIB_9__::func_710(&(Local_73.f_134));
	__LIB_0__::func_172(Local_73.f_141);
}

Vector3 func_107(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 16:
			return 1984.534f, 1192.017f, 170.403f;
		case 2048:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				default:
					break;
			}
			Jump @255; //curOff = 182
			switch (iParam1)
			{
				case 0:
					return 1189.531f, -103.881f, 94.897f;
				default:
					break;
			}
			Jump @255; //curOff = 220
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			Jump @255; //curOff = 246
			return 0f, 0f, 0f;
		}
float func_108(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 16:
			return -110f;
		case 2048:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				default:
					break;
			}
			Jump @213; //curOff = 156
			switch (iParam1)
			{
				case 0:
					return 0f;
				default:
					break;
			}
			Jump @213; //curOff = 180
			switch (iParam1)
			{
				case 0:
					return 0f;
				default:
					break;
			}
			Jump @213; //curOff = 204
			return 0f;
		}
float func_109(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 16:
			break;
		case 262144:
			switch (iParam1)
			{
				case 0:
					return 3f;
				default:
					break;
			}
			Jump @150; //curOff = 141
			return 0f;
		}
int func_110(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 348;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 313;
		case 1250636944:
			return 259;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 315;
		case 1306158345:
			return 202;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 332;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
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

void func_126(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	if (!__LIB_0__::func_6(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!__LIB_1__::func_44(iParam0) && !__LIB_0__::func_702(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (__LIB_0__::func_299(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !__LIB_1__::func_44(iParam0))
	{
		iParam2 = -1;
	}
	if (__LIB_0__::func_291(iParam0) == 3 || (__LIB_0__::func_291(iParam0) == 1 && STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0))))
	{
		__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iParam2);
		if ((!__LIB_0__::func_6(Global_1572864.f_8) && !__LIB_0__::func_296(0, 1, 0)) && !__LIB_0__::func_1(Global_1935630, 32768))
		{
			iVar0 = __LIB_1__::func_24(iParam0);
			if (iVar0 != -1)
			{
				__LIB_0__::func_867(0);
			}
			else if (__LIB_0__::func_700(iParam0) == 8)
			{
				iVar0 = __LIB_1__::func_194();
				if (iVar0 != -1)
				{
					__LIB_0__::func_867(0);
				}
			}
		}
	}
	__LIB_1__::func_242(iParam0, 0);
	if (__LIB_0__::func_298(0) == iParam0)
	{
		__LIB_0__::func_267(1);
		func_149(0);
		__LIB_0__::func_301(1);
	}
	__LIB_1__::func_144(iParam0, 1);
	__LIB_1__::func_470(iParam0);
}

int func_149(bool bParam0)
{
	if (!bParam0 && func_67(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

