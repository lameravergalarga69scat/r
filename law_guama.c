#region Local Var
	var uLocal_0 = -384354290;
	var uLocal_1 = -384354290;
	var uLocal_2 = -1230516683;
	var uLocal_3 = 0;
	var uLocal_4 = 3;
	var uLocal_5 = -384354290;
	var uLocal_6 = -384354290;
	var uLocal_7 = -1230516683;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 5;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 5;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 4;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = -1082130432;
	var uLocal_40 = 5000;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -384354290;
	var uLocal_48 = -384354290;
	var uLocal_49 = -1230516683;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 5;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 5;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 4;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = -1082130432;
	var uLocal_82 = 5000;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = -384354290;
	var uLocal_90 = -384354290;
	var uLocal_91 = -1230516683;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 5;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 5;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 4;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = -1082130432;
	var uLocal_124 = 5000;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 1;
	var uLocal_133 = -1;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	bool bLocal_136 = false;
	var uScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	uScriptParam_0 = uScriptParam_0;
	func_1(&uLocal_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_2(&uLocal_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if (!__LIB_0__::func_296(0, 0, 1) || Global_1415405.f_5)
		{
			bVar0 = true;
		}
		if (func_4(&uLocal_0))
		{
			func_5(&uLocal_0);
		}
		else if (bVar0)
		{
			if (!bLocal_136)
			{
				if (func_6(&uLocal_0))
				{
					bLocal_136 = true;
				}
			}
			if (Global_1415405.f_4)
			{
				if (!LAW::_0xF46108C50A22B029())
				{
					LAW::_0x7803436E68C32B26();
				}
			}
			else if (LAW::_0xF46108C50A22B029())
			{
				LAW::_0x29CD4896ECB66C12();
			}
			func_5(&uLocal_0);
		}
		else if (bLocal_136)
		{
			if (func_7(&uLocal_0))
			{
				if (LAW::_0xF46108C50A22B029())
				{
					LAW::_0x29CD4896ECB66C12();
				}
				bLocal_136 = false;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0 /*42*/].f_29 = iVar0;
		iVar0++;
	}
}

void func_2(var uParam0)
{
	int iVar0;
	if (LAW::_0xF46108C50A22B029())
	{
		LAW::_0x29CD4896ECB66C12();
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_8(&(uParam0->f_4[iVar0 /*42*/]), uParam0);
		__LIB_3__::func_900(&(uParam0->f_4[iVar0 /*42*/]), 0);
		iVar0++;
	}
	func_10(uParam0);
}

bool func_4(var uParam0)
{
	if (uParam0->f_3 == 4)
	{
		return true;
	}
	return false;
}

void func_5(var uParam0)
{
	switch (uParam0->f_3)
	{
		case 1:
			if (func_16(uParam0))
			{
				func_17(uParam0, 2);
			}
			break;
		case 2:
			func_18(uParam0, 1);
			func_17(uParam0, 3);
			break;
		case 3:
			if (!func_19(uParam0, 0))
			{
				func_17(uParam0, 0);
			}
			break;
		case 4:
			if (!func_19(uParam0, 1))
			{
				func_10(uParam0);
				func_17(uParam0, 0);
			}
			break;
		default:
			break;
	}
}

bool func_6(var uParam0)
{
	if (uParam0->f_3 == 0)
	{
		func_17(uParam0, 1);
		return true;
	}
	return false;
}

bool func_7(var uParam0)
{
	if (uParam0->f_3 == 3)
	{
		func_17(uParam0, 4);
		func_20(uParam0);
		return true;
	}
	return false;
}

void func_8(var uParam0, var uParam1)
{
	if (PED::DOES_GROUP_EXIST(uParam0->f_18))
	{
		PED::REMOVE_GROUP(uParam0->f_18);
	}
	if (__LIB_3__::func_358(uParam0->f_3))
	{
		__LIB_17__::func_742(uParam0->f_3);
		__LIB_10__::func_44(uParam0->f_3);
	}
	func_24(uParam0);
	MISC::CLEAR_BIT(&(uParam1->f_134), uParam0->f_41);
	if (MAP::DOES_BLIP_EXIST(uParam0->f_21))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_21));
	}
	if (__LIB_0__::func_75(&(uParam0->f_36)))
	{
		__LIB_0__::func_37(&(uParam0->f_36));
	}
	if (__LIB_0__::func_75(&(uParam0->f_30)))
	{
		__LIB_0__::func_37(&(uParam0->f_30));
	}
	if (__LIB_0__::func_139(uParam0->f_30.f_3))
	{
		__LIB_1__::func_748(&(uParam0->f_30.f_3), 1, 1);
	}
}

void func_10(var uParam0)
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_2);
}

bool func_16(var uParam0)
{
	STREAMING::REQUEST_MODEL(*uParam0, false);
	STREAMING::REQUEST_MODEL(uParam0->f_1, false);
	STREAMING::REQUEST_MODEL(uParam0->f_2, false);
	if ((!STREAMING::HAS_MODEL_LOADED(*uParam0) || !STREAMING::HAS_MODEL_LOADED(uParam0->f_1)) || !STREAMING::HAS_MODEL_LOADED(uParam0->f_2))
	{
		return false;
	}
	return true;
}

void func_17(var uParam0, int iParam1)
{
	if (iParam1 == 4)
	{
		func_18(uParam0, 12);
	}
	uParam0->f_3 = iParam1;
}

void func_18(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_3__::func_900(&(uParam0->f_4[iVar0 /*42*/]), iParam1);
		iVar0++;
	}
}

bool func_19(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_31(&(uParam0->f_4[iVar0 /*42*/]), uParam0);
		iVar0++;
	}
	if (!bParam1)
	{
		if (func_32(uParam0, 0))
		{
			return false;
		}
	}
	else if (func_33(uParam0))
	{
		return false;
	}
	return true;
}

void func_20(var uParam0)
{
	__LIB_1__::func_345();
}

void func_24(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iVar0]))
		{
			__LIB_0__::func_490(&(uParam0->f_5[iVar0]), 0);
		}
		iVar0++;
	}
}

void func_31(var uParam0, var uParam1)
{
	bool bVar0;
	switch (uParam0->f_20)
	{
		case 1:
			if (func_42(uParam0, uParam1, 0))
			{
				__LIB_3__::func_900(uParam0, 4);
			}
			break;
		case 4:
			if (func_43(uParam0))
			{
				__LIB_3__::func_900(uParam0, 5);
			}
			break;
		case 5:
			if (func_44(uParam0))
			{
				__LIB_3__::func_900(uParam0, 10);
			}
			else if (func_45(uParam0))
			{
				func_46(uParam0);
				uParam0->f_23 = MISC::GET_GAME_TIMER();
				__LIB_3__::func_900(uParam0, 6);
			}
			else if (!func_47(uParam0))
			{
				__LIB_3__::func_900(uParam0, 4);
			}
			break;
		case 6:
			if (!func_48(uParam0) || MISC::GET_GAME_TIMER() > uParam0->f_23 + 10000)
			{
				func_49(uParam0);
				__LIB_3__::func_900(uParam0, 4);
			}
			break;
		case 7:
			if (!func_50(uParam0) || MISC::GET_GAME_TIMER() > uParam0->f_24 + 30000)
			{
				func_51(uParam0);
				__LIB_3__::func_900(uParam0, 4);
			}
			break;
		case 8:
			uParam0->f_27 = MISC::GET_GAME_TIMER();
			if (!func_52(uParam0->f_3))
			{
				__LIB_3__::func_900(uParam0, 4);
			}
			break;
		case 9:
			break;
		case 10:
			if (func_42(uParam0, uParam1, 1))
			{
				__LIB_3__::func_900(uParam0, 4);
			}
			break;
		case 11:
			func_8(uParam0, uParam1);
			__LIB_3__::func_900(uParam0, 1);
			break;
		case 12:
			func_8(uParam0, uParam1);
			__LIB_3__::func_900(uParam0, 0);
			break;
		default:
			break;
	}
	if (uParam0->f_20 != 0)
	{
		if ((uParam0->f_20 != 11 && uParam0->f_20 != 1) && uParam0->f_20 != 12)
		{
			func_53(uParam0->f_3);
			func_54(uParam0);
			if (!func_55(uParam0))
			{
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				MISC::CLEAR_BIT(&(uParam1->f_134), uParam0->f_41);
				__LIB_3__::func_900(uParam0, 11);
			}
			else if (func_56(uParam0))
			{
				__LIB_3__::func_900(uParam0, 11);
			}
			else if (uParam0->f_20 != 8)
			{
				if (func_52(uParam0->f_3))
				{
					__LIB_3__::func_900(uParam0, 8);
				}
				else if ((uParam1->f_132 && !uParam0->f_39) && !__LIB_2__::func_65(Global_35, 0))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (!bVar0)
	{
		func_58(uParam0);
		if (uParam1->f_132 && uParam0->f_39)
		{
			func_59(uParam0);
		}
	}
	else
	{
		func_60(uParam0);
	}
}

bool func_32(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_55(&(uParam0->f_4[iVar0 /*42*/])) || uParam0->f_4[iVar0 /*42*/].f_20 != iParam1)
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_33(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_4[iVar0 /*42*/].f_20 != 0)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_42(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	iVar0 = MISC::GET_GAME_TIMER();
	if ((uParam0->f_25 > 0 && iVar0 < (uParam0->f_25 + 120000)) || iVar0 < uParam0->f_26 + 5000)
	{
		return false;
	}
	if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
	}
	uParam0->f_26 = iVar0;
	if (!__LIB_3__::func_358(uParam0->f_3))
	{
		uParam0->f_3 = { __LIB_3__::func_355() };
	}
	if (!PED::DOES_GROUP_EXIST(uParam0->f_18))
	{
		uParam0->f_18 = PED::CREATE_GROUP(0);
		PED::SET_GROUP_FORMATION(uParam0->f_18, uParam0->f_19);
	}
	iVar13 = uParam0->f_2;
	if (bParam2)
	{
		if (PED::DOES_GROUP_EXIST(uParam0->f_18))
		{
			iVar11 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
			if (!ENTITY::IS_ENTITY_DEAD(iVar11))
			{
				vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar11, false, false) };
				fVar5 = ENTITY::GET_ENTITY_HEADING(iVar11);
				bVar15 = true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else if (!func_64(&iVar1, &vVar2, &fVar5, uParam1))
	{
		return false;
	}
	else
	{
		uParam0->f_39 = 0;
	}
	if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) < 30f)
	{
		return false;
	}
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_21))
	{
		uParam0->f_21 = MAP::_BLIP_ADD_FOR_COORD(408396114, vVar2);
	}
	iVar16 = 0;
	while (iVar16 < 5)
	{
		bVar14 = false;
		if (bParam2)
		{
			iVar10 = __LIB_4__::func_956(uParam0->f_3, iVar16);
			if (!ENTITY::IS_ENTITY_DEAD(iVar10))
			{
				bVar14 = true;
			}
		}
		if (!bVar14)
		{
			if (iVar16 == 0 && !bVar15)
			{
				iVar12 = *uParam0;
			}
			else
			{
				iVar12 = uParam0->f_1;
			}
			vVar6 = { vVar2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f)) };
			fVar5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
			iVar9 = __LIB_1__::func_545(iVar12, vVar6, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) <= 50)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iVar16]))
				{
					__LIB_2__::func_788(&(uParam0->f_5[iVar16]), 1, 0, 1);
				}
				uParam0->f_5[iVar16] = __LIB_1__::func_545(iVar13, vVar6, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				PED::_SET_PED_ON_MOUNT(iVar9, uParam0->f_5[iVar16], -1, true);
			}
			__LIB_4__::func_999(uParam0->f_3, iVar9);
			PED::SET_PED_CONFIG_FLAG(iVar9, 279, true);
			if (iVar16 == 0 && !bVar15)
			{
				PED::SET_PED_AS_GROUP_LEADER(__LIB_4__::func_956(uParam0->f_3, iVar16), uParam0->f_18, false);
			}
			else
			{
				PED::SET_PED_AS_GROUP_MEMBER(__LIB_4__::func_956(uParam0->f_3, iVar16), uParam0->f_18);
			}
			PED::_0xA8A95CECB1906EA2(uParam0->f_18, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar9, 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar9, 5, true);
			PED::SET_PED_CONFIG_FLAG(iVar9, 49, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar9, 39, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar9, 14, true);
			PED::SET_PED_SEEING_RANGE(iVar9, 17f);
			PED::SET_PED_ID_RANGE(iVar9, 17f);
		}
		iVar16++;
	}
	if (!bParam2)
	{
		uParam0->f_41 = iVar1;
		MISC::SET_BIT(&(uParam1->f_134), iVar1);
	}
	if (uParam1->f_132)
	{
		if (__LIB_0__::func_75(&(uParam0->f_36)))
		{
			__LIB_0__::func_37(&(uParam0->f_36));
		}
		func_68(uParam0);
	}
	return true;
}

bool func_43(var uParam0)
{
	int iVar0;
	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		TASK::_TASK_MOVE_IN_TRAFFIC(iVar0, 1f, 4, 0);
	}
	return true;
}

bool func_44(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 < (uParam0->f_27 + 90000) || iVar0 < uParam0->f_28 + 5000)
	{
		return false;
	}
	uParam0->f_28 = iVar0;
	if (__LIB_4__::func_955(uParam0->f_3) < 5)
	{
		iVar1 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !Global_1935630.f_12)
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) >= 60f)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_45(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_296(0, 0, 1) || !Global_1415405.f_4)
	{
		return false;
	}
	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	iVar1 = MISC::GET_GAME_TIMER();
	if (iVar1 < uParam0->f_22 + 10000)
	{
		return false;
	}
	uParam0->f_22 = iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !Global_1935630.f_12)
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) <= 30f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iVar0, Global_35, 3423))
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) <= 40)
			{
				return true;
			}
		}
	}
	return false;
}

int func_46(var uParam0)
{
	int iVar0;
	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !Global_1935630.f_12)
	{
		TASK::TASK_GOTO_ENTITY_OFFSET(iVar0, Global_35, -1, 15f, 0f, 1f, 2);
		return 1;
	}
	return 0;
}

bool func_47(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1665583462, true);
		if (iVar1 == 0 || iVar1 == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_48(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, -2015108952, true);
		if (iVar1 == 0 || iVar1 == 1)
		{
			return true;
		}
	}
	return false;
}

void func_49(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, -2015108952, true);
		if (iVar1 != 7 && iVar1 != 8)
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
		}
	}
}

bool func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_4__::func_955(uParam0->f_3);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = __LIB_4__::func_956(uParam0->f_3, iVar2);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar3 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 923520851, true);
			if (iVar3 == 0 || iVar3 == 1)
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_4__::func_955(uParam0->f_3);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = __LIB_4__::func_956(uParam0->f_3, iVar2);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar3 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 923520851, true);
			if (iVar3 != 7 && iVar3 != 8)
			{
				TASK::CLEAR_PED_TASKS(iVar1, true, false);
			}
		}
		iVar2++;
	}
}

bool func_52(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_3__::func_358(Param0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_955(Param0))
	{
		iVar1 = __LIB_4__::func_956(Param0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					if (PED::IS_PED_IN_COMBAT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), 0))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_53(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_3__::func_358(Param0))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	iVar1 = 0;
	while (iVar1 < __LIB_4__::func_955(Param0))
	{
		iVar2 = __LIB_4__::func_956(Param0, iVar1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					ITEMSET::ADD_TO_ITEMSET(iVar2, iVar0);
					ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0);
		ITEMSET::REMOVE_FROM_ITEMSET(iVar3, Param0);
		iVar1++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_54(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (PED::DOES_GROUP_EXIST(uParam0->f_18) && PED::_0x0455546F23FF08E4(uParam0->f_18))
	{
		iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::GET_GROUP_SIZE(uParam0->f_18, &iVar1, &iVar2);
			if (iVar2 > 0)
			{
				iVar3 = PED::GET_PED_AS_GROUP_MEMBER(uParam0->f_18, MISC::GET_RANDOM_INT_IN_RANGE(0, (iVar1 + iVar2)));
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_AS_GROUP_LEADER(iVar3, uParam0->f_18, false);
				}
			}
		}
	}
}

bool func_55(var uParam0)
{
	int iVar0;
	int iVar1;
	PED::GET_GROUP_SIZE(uParam0->f_18, &iVar1, &iVar0);
	if ((((!__LIB_3__::func_358(uParam0->f_3) || __LIB_4__::func_955(uParam0->f_3) == 0) || !PED::DOES_GROUP_EXIST(uParam0->f_18)) || !PED::_0x0455546F23FF08E4(uParam0->f_18)) || (iVar0 == 0 && iVar1 == 0))
	{
		return false;
	}
	return true;
}

bool func_56(var uParam0)
{
	if (!func_52(uParam0->f_3) && func_69(uParam0))
	{
		return true;
	}
	return false;
}

void func_58(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_30.f_3))
	{
		__LIB_1__::func_748(&(uParam0->f_30.f_3), 1, 1);
		__LIB_1__::func_345();
	}
}

void func_59(var uParam0)
{
	int iVar0;
	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if ((!ENTITY::IS_ENTITY_DEAD(iVar0) && !Global_1935630.f_12) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) < 100f)
	{
		if (__LIB_0__::func_75(&(uParam0->f_36)))
		{
			__LIB_2__::func_113(&(uParam0->f_36));
		}
	}
	else if (!__LIB_0__::func_75(&(uParam0->f_36)))
	{
		__LIB_1__::func_283(&(uParam0->f_36), 0);
	}
	else if (__LIB_0__::func_33(&(uParam0->f_36)))
	{
		__LIB_2__::func_112(&(uParam0->f_36));
	}
	if (__LIB_1__::func_871(&(uParam0->f_36)) >= 30000)
	{
		__LIB_0__::func_37(&(uParam0->f_36));
		uParam0->f_39 = 0;
		func_68(uParam0);
	}
}

void func_60(var uParam0)
{
	int iVar0;
	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if (__LIB_0__::func_139(uParam0->f_30.f_3))
	{
		if (__LIB_1__::func_530(uParam0->f_30.f_3, 1))
		{
			uParam0->f_39 = 1;
			if (!__LIB_0__::func_75(&(uParam0->f_30)))
			{
				__LIB_1__::func_283(&(uParam0->f_30), 0);
			}
			else if (__LIB_0__::func_33(&(uParam0->f_30)))
			{
				__LIB_2__::func_112(&(uParam0->f_30));
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				__LIB_14__::func_212(iVar0, joaat("INPUT_FOCUS_CAM"));
			}
		}
	}
	if (__LIB_1__::func_871(&(uParam0->f_30)) >= uParam0->f_30.f_5)
	{
		__LIB_0__::func_37(&(uParam0->f_30));
		func_58(uParam0);
	}
}

bool func_64(var uParam0, var uParam1, float fParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_79();
	if (func_80(iVar0, &iVar1, &iVar2))
	{
		iVar3 = func_81(uParam3->f_134, (iVar2 - iVar1), 2, BUILTIN::SHIFT_LEFT(1, iVar1));
		*uParam0 = iVar3;
		if (func_82(*uParam0, uParam1, fParam2))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), *uParam1) >= 30f)
			{
				return true;
			}
		}
	}
	return false;
}

void func_68(var uParam0)
{
	int iVar0;
	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !__LIB_0__::func_139(uParam0->f_30.f_3))
	{
		uParam0->f_30.f_3 = __LIB_2__::func_403("GUAMA_PATROL_HINT", joaat("INPUT_FOCUS_CAM"), iVar0, 1, 0, 1, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		uParam0->f_30.f_4 = 50f;
		__LIB_2__::func_450(uParam0->f_30.f_3, uParam0->f_30.f_4, 1);
		if (__LIB_0__::func_75(&(uParam0->f_30)))
		{
			__LIB_0__::func_37(&(uParam0->f_30));
		}
	}
}

bool func_69(var uParam0)
{
	int iVar0;
	if (__LIB_3__::func_358(uParam0->f_3) && !Global_1935630.f_12)
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_87(uParam0->f_3, Global_35));
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) >= 300f && ENTITY::IS_ENTITY_OCCLUDED(iVar0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_79()
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;
	vector3 vVar7;
	float fVar10;
	iVar0 = __LIB_0__::func_12();
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = -1;
	fVar2 = 999999.9f;
	vVar3 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	if (__LIB_0__::func_86(vVar3))
	{
		return -1;
	}
	iVar6 = 57;
	iVar6 = 0;
	while (iVar6 < 61)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iVar6 /*35*/].f_3))
		{
			vVar7 = { 0f, 0f, 0f };
			vVar7 = { VOLUME::_GET_VOLUME_COORDS(Global_1888801[iVar6 /*35*/].f_3) };
			fVar10 = BUILTIN::VDIST2(vVar3, vVar7);
			if (fVar10 < fVar2)
			{
				iVar1 = iVar6;
				fVar2 = fVar10;
			}
		}
		iVar6++;
	}
	if (iVar1 == 57)
	{
		iVar1 = 57;
	}
	else if (iVar1 == 61)
	{
		iVar1 = 61;
	}
	return iVar1;
}

bool func_80(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 57:
			*iParam1 = 8;
			*iParam2 = 13;
			return true;
		case 59:
			*iParam1 = 0;
			*iParam2 = 2;
			return true;
		case 60:
		case 61:
			*iParam1 = 3;
			*iParam2 = 7;
			return true;
	}
	return false;
}

int func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[32];
	if (iParam1 > 32)
	{
	}
	iVar1 = __LIB_3__::func_147(iParam3);
	if (iParam2 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar1, iParam1);
		return iVar0;
	}
	iVar2 = iVar1;
	while (iVar2 <= ((iVar1 + iParam1) - 1))
	{
		if ((iParam2 == 1 && MISC::IS_BIT_SET(iParam0, iVar2)) || (iParam2 == 2 && !MISC::IS_BIT_SET(iParam0, iVar2)))
		{
			iVar4[iVar3] = iVar2;
			iVar3++;
		}
		iVar2++;
	}
	if (iVar3 == 0)
	{
		return -1;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3);
	return iVar4[iVar0];
}

bool func_82(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 3787.718f, -3954.145f, 41.288f };
			*fParam2 = 354.6375f;
			return true;
		case 1:
			*uParam1 = { 3882.98f, -3730.864f, 43.6833f };
			*fParam2 = 116.3379f;
			return true;
		case 3:
			*uParam1 = { 3972.921f, -3874.57f, 65.7122f };
			*fParam2 = 123.0235f;
			return true;
		case 4:
			*uParam1 = { 3998.875f, -3721.019f, 67.4743f };
			*fParam2 = 206.3015f;
			return true;
		case 5:
			*uParam1 = { 4136.172f, -3683.906f, 156.7324f };
			*fParam2 = 85.041f;
			return true;
		case 6:
			*uParam1 = { 4228.889f, -3659.802f, 172.7372f };
			*fParam2 = 17.8561f;
			return true;
		case 8:
			*uParam1 = { 3856.555f, -3577.237f, 53.4467f };
			*fParam2 = 167.0775f;
			return true;
		case 9:
			*uParam1 = { 4070.433f, -3437.857f, 86.5179f };
			*fParam2 = 357.3192f;
			return true;
		case 10:
			*uParam1 = { 3904.904f, -3224.065f, 45.5342f };
			*fParam2 = 195.7186f;
			return true;
		case 11:
			*uParam1 = { 3853.244f, -3476.826f, 44.6443f };
			*fParam2 = 59.1071f;
			return true;
		case 12:
			*uParam1 = { 3989.41f, -3338.172f, 64.3645f };
			*fParam2 = 85.9682f;
			return true;
	}
	return false;
}

int func_87(struct<2> Param0, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_3__::func_358(Param0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < __LIB_4__::func_955(Param0))
	{
		iVar2 = __LIB_4__::func_956(Param0, iVar1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (iVar1 == 0 || __LIB_0__::func_665(iVar2, iParam2, 1, 1) < __LIB_0__::func_665(iVar0, iParam2, 1, 1))
				{
					iVar0 = iVar2;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

