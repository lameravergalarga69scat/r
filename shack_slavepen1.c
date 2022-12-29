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
	struct<6> Local_73 = { 0, 0, 0, 0, 0, 0 } ;
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
				__LIB_19__::func_349(&ScriptParam_0);
				__LIB_0__::func_612(&ScriptParam_0, 2);
				break;
			case 2:
				if (__LIB_19__::func_350(&ScriptParam_0) && !__LIB_1__::func_927())
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
				if (func_12(&ScriptParam_0))
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
				else if (VOLUME::_DOES_VOLUME_EXIST(__LIB_0__::func_559(__LIB_16__::func_768())))
				{
					if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, __LIB_0__::func_559(__LIB_16__::func_768()), true, 0) || __LIB_0__::func_58(&ScriptParam_0))
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

bool func_12(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_3, 4))
	{
		if (!__LIB_0__::func_1(Local_73.f_4, 1))
		{
			if (__LIB_0__::func_266(Global_35, __LIB_14__::func_499(uParam0, 0), 75f, 1, 1))
			{
				__LIB_14__::func_512(&(uParam0->f_29[0]), 0, 0);
				if (func_44(uParam0, &(Local_73.f_5), 0, 7))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_29[0]))
					{
						if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_41[0]))
						{
							uParam0->f_41[0] = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(uParam0->f_29[0], joaat("PROP_PLAYER_LOOT_FLOORBOARD_P_CS_PHOTO_5X7"), 0f, 0f, 0f, 0, 0, 0, 1);
							return true;
						}
					}
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
		if (!__LIB_0__::func_1(Local_73.f_4, 2))
		{
		}
	}
	return false;
}

bool func_18(var uParam0)
{
	if (Local_73 > 0 && Local_73 < 2)
	{
	}
	switch (Local_73)
	{
		case 0:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				__LIB_7__::func_531(&Local_73, 1, 1);
			}
			else
			{
				__LIB_7__::func_531(&Local_73, 2, 1);
			}
			break;
		case 1:
			if (!__LIB_0__::func_1(uParam0->f_3, 8192))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_46) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_46, true, 0))
				{
					__LIB_14__::func_519(uParam0);
				}
			}
			if (!__LIB_0__::func_1(Local_73.f_4, 1))
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_41[0]))
				{
					if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, uParam0->f_41[0]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, MISC::GET_HASH_KEY("ObjectExchange")))
						{
							__LIB_1__::func_581(&(Local_73.f_4), 1);
							__LIB_14__::func_600(&(uParam0->f_5), &(Local_73.f_4));
							func_51(joaat("DOCUMENT_SHACK_SLAVE_PEN_PHOTO"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
					}
				}
			}
			if (!__LIB_0__::func_1(Local_73.f_4, 2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_29[1]))
				{
					if (__LIB_0__::func_266(Global_35, __LIB_14__::func_499(uParam0, 1), 5f, 1, 1))
					{
						TASK::_0xA6A76D666A281F2D(uParam0->f_29[1], joaat("DOCUMENT_DISCO_SLAVE_NEWSCLIP"));
					}
				}
				if (__LIB_7__::func_495(joaat("DOCUMENT_DISCO_SLAVE_NEWSCLIP")))
				{
					__LIB_1__::func_581(&(Local_73.f_4), 2);
					__LIB_14__::func_600(&(uParam0->f_5), &(Local_73.f_4));
				}
			}
			if (__LIB_0__::func_1(Local_73.f_4, 1) && __LIB_0__::func_1(Local_73.f_4, 2))
			{
				__LIB_7__::func_531(&Local_73, 2, 1);
			}
			break;
		case 2:
			if (!__LIB_0__::func_1(uParam0->f_3, 128))
			{
				__LIB_1__::func_581(&(uParam0->f_3), 128);
				__LIB_14__::func_532(&(uParam0->f_5), &(uParam0->f_3));
			}
			break;
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
						if ((((((!__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 2) && !__LIB_0__::func_296(128, 0, 1)) && !__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 1, 1)) && !__LIB_2__::func_84()) && !__LIB_1__::func_988(20)) && !__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 4)) && !__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 8))
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
	if (!__LIB_0__::func_1(uParam0->f_3, 4))
	{
	}
	Local_73.f_4 = __LIB_5__::func_297(uParam0->f_5);
	return true;
}

bool func_44(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (*uParam1 == 0)
	{
		*uParam1 = ENTITY::_0x6F3068258A499E52(uParam0->f_22[iParam2], __LIB_14__::func_499(uParam0, iParam2), iParam3);
	}
	else if (ENTITY::_0x1FF441D7954F8709(*uParam1) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[iParam2]))
	{
		uParam0->f_29[iParam2] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(*uParam1));
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_29[iParam2]))
		{
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[iParam2]))
	{
		return true;
	}
	return false;
}

int func_51(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (!__LIB_3__::func_917(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (__LIB_1__::func_614(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = __LIB_1__::func_756(iVar6) + 1;
			__LIB_1__::func_757(iVar5);
			if (__LIB_1__::func_154(38))
			{
				__LIB_1__::func_240(483, 0);
			}
			else
			{
				__LIB_1__::func_240(482, 0);
			}
			if (iVar7 == __LIB_0__::func_353(iVar6))
			{
				func_51(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_450(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_1__::func_450(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if ((!__LIB_0__::func_192(iParam0, 866047851) && !__LIB_0__::func_192(iParam0, -1979000645)) && !__LIB_0__::func_192(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (__LIB_0__::func_774(iParam0, 8388608) && !__LIB_0__::func_293(28))
	{
		__LIB_7__::func_501(28);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_192(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (__LIB_0__::func_357(iParam0) == -1447088266)
			{
				iVar1 = __LIB_0__::func_775(__LIB_0__::func_914(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iParam0);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
		{
			if (!__LIB_3__::func_915(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_3__::func_708(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			__LIB_1__::func_833(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, 2000026003))
		{
			__LIB_1__::func_632(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -103750053))
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (__LIB_0__::func_192(iParam0, -121341956) && !__LIB_0__::func_192(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					__LIB_1__::func_240(498, 0);
				}
			}
			if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
			{
				__LIB_1__::func_796(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -136654233))
		{
			if (__LIB_0__::func_192(iParam0, -1021472396))
			{
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1466706512) && __LIB_0__::func_192(iParam0, 1147021565))
		{
			__LIB_1__::func_240(484, 0);
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565) && __LIB_0__::func_192(iParam0, -524514947))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 554195525))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 589988438))
		{
			if (__LIB_1__::func_709())
			{
				__LIB_1__::func_797(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_843(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_1__::func_844(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_1__::func_845(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			func_142(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (__LIB_0__::func_192(iParam0, 1841149704))
		{
			__LIB_0__::func_359();
		}
		else if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_1__::func_847(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_1__::func_858(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return 0;
			}
			__LIB_1__::func_824(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_51(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_51(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_51(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_51(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_51(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_51(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_601(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1399091007))
		{
			__LIB_0__::func_917(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_51(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				__LIB_7__::func_501(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				__LIB_1__::func_240(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				__LIB_0__::func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				__LIB_0__::func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				__LIB_0__::func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				__LIB_1__::func_244();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				__LIB_1__::func_240(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				__LIB_1__::func_240(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_51(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_51(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				__LIB_1__::func_240(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				__LIB_1__::func_240(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_3__::func_427(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_7__::func_685(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_9__::func_8(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (__LIB_0__::func_708(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_51(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			__LIB_1__::func_451(iVar2, 0);
		}
	}
	Var35 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	__LIB_1__::func_602(iParam0);
	if (fParam6 > 0f)
	{
		if (__LIB_0__::func_192(iParam0, -839724752))
		{
			__LIB_1__::func_157(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_3__::func_868(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_53(var uParam0)
{
	if (!Local_73.f_5 == 0 && ENTITY::_0x1FF441D7954F8709(Local_73.f_5))
	{
		ENTITY::_0xD2B9C78537ED5759(Local_73.f_5);
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(__LIB_14__::func_599(uParam0)))
	{
		TXD::_SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(__LIB_14__::func_599(uParam0));
	}
}

bool func_66(var uParam0, int iParam1)
{
	if (!__LIB_14__::func_516(uParam0, iParam1) == 0 && !TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_41[iParam1]))
	{
		uParam0->f_41[iParam1] = TASK::CREATE_SCENARIO_POINT(__LIB_14__::func_516(uParam0, iParam1), func_186(uParam0, iParam1), func_187(uParam0, iParam1), func_188(uParam0, iParam1), 0, 0);
	}
	return true;
}

bool func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_189(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

void func_142(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			func_276(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

Vector3 func_186(var uParam0, int iParam1)
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
float func_187(var uParam0, int iParam1)
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
float func_188(var uParam0, int iParam1)
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
int func_189(int iParam0, int iParam1)
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

void func_276(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_423(1497516462);
			func_424(2016141805);
			func_424(1010885152);
			func_424(-502324015);
			break;
		case 2016141805:
			func_424(1497516462);
			func_423(2016141805);
			func_424(1010885152);
			func_424(-502324015);
			break;
		case 1010885152:
			func_424(1497516462);
			func_424(2016141805);
			func_423(1010885152);
			func_424(-502324015);
			break;
		case -502324015:
			func_424(1497516462);
			func_424(2016141805);
			func_424(1010885152);
			func_423(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_424(-538889627);
			func_424(-538880323);
			func_424(-1056767524);
			func_423(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_425();
			func_423(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_426();
			func_423(iParam0);
			break;
		case 2019386373:
			func_424(-664252410);
			func_424(2109952320);
			func_423(2019386373);
			break;
		case -664252410:
			func_424(2019386373);
			func_424(2109952320);
			func_423(-664252410);
			break;
		case 2109952320:
			func_424(2019386373);
			func_424(-664252410);
			func_423(2109952320);
			break;
		case -1674179981:
			func_424(-1835851517);
			func_424(-1838352012);
			func_423(-1674179981);
			break;
		case -1835851517:
			func_424(-1674179981);
			func_424(-1838352012);
			func_423(-1835851517);
			break;
		case -1838352012:
			func_424(-1674179981);
			func_424(-1835851517);
			func_423(-1838352012);
			break;
		case -1717960576:
			func_424(210001842);
			func_423(-1717960576);
			break;
		case 210001842:
			func_424(-1717960576);
			func_423(210001842);
			break;
		case -150493654:
			func_424(-1271608261);
			func_424(1846061697);
			func_424(-1145519186);
			func_423(-150493654);
			break;
		case -1271608261:
			func_424(-150493654);
			func_424(1846061697);
			func_424(-1145519186);
			func_423(-1271608261);
			break;
		case 1846061697:
			func_424(-150493654);
			func_424(-1271608261);
			func_424(-1145519186);
			func_423(1846061697);
			break;
		case -1145519186:
			func_424(-150493654);
			func_424(-1271608261);
			func_424(1846061697);
			func_423(-1145519186);
			break;
		case 1766284049:
			func_424(280705402);
			func_424(1926308480);
			func_423(1766284049);
			break;
		case 280705402:
			func_424(1766284049);
			func_424(1926308480);
			func_423(280705402);
			break;
		case 1926308480:
			func_424(1766284049);
			func_424(280705402);
			func_423(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_424(439465264);
				func_423(1609506757);
			}
			else
			{
				func_424(1609506757);
				func_424(439465264);
			}
			break;
		case 439465264:
			if (func_67(1609506757))
			{
				if (bParam1)
				{
					func_423(439465264);
				}
				else
				{
					func_424(439465264);
				}
			}
			break;
		case 1822001510:
			func_424(-1612662716);
			func_423(1822001510);
			break;
		case -1612662716:
			func_424(1822001510);
			func_423(-1612662716);
			break;
		case 1306158345:
			func_424(1952610440);
			func_424(-223469678);
			func_424(-404698347);
			func_424(1517904467);
			func_423(1306158345);
			break;
		case 1952610440:
			func_424(1306158345);
			func_424(-223469678);
			func_424(-404698347);
			func_424(1517904467);
			func_423(1952610440);
			break;
		case -223469678:
			func_424(1306158345);
			func_424(1952610440);
			func_424(-404698347);
			func_424(1517904467);
			func_423(-223469678);
			break;
		case -404698347:
			func_424(1306158345);
			func_424(1952610440);
			func_424(-223469678);
			func_424(1517904467);
			func_423(-404698347);
			break;
		case 1517904467:
			func_424(1306158345);
			func_424(1952610440);
			func_424(-223469678);
			func_424(-404698347);
			func_423(1517904467);
			break;
		case 1376646519:
			func_424(931649776);
			func_424(-434590080);
			func_424(1743048395);
			func_424(449774763);
			func_423(1376646519);
			break;
		case 931649776:
			func_424(1376646519);
			func_424(-434590080);
			func_424(1743048395);
			func_424(449774763);
			func_423(931649776);
			break;
		case -434590080:
			func_424(1376646519);
			func_424(931649776);
			func_424(1743048395);
			func_424(449774763);
			func_423(-434590080);
			break;
		case 1743048395:
			func_424(1376646519);
			func_424(931649776);
			func_424(-434590080);
			func_424(449774763);
			func_423(1743048395);
			break;
		case 449774763:
			func_424(1376646519);
			func_424(931649776);
			func_424(-434590080);
			func_424(1743048395);
			func_423(449774763);
			break;
		case -1414537028:
			func_424(38162571);
			func_424(1350391819);
			func_424(54073871);
			func_423(-1414537028);
			break;
		case 38162571:
			func_424(-1414537028);
			func_424(1350391819);
			func_424(54073871);
			func_423(38162571);
			break;
		case 1350391819:
			func_424(-1414537028);
			func_424(38162571);
			func_424(54073871);
			func_423(1350391819);
			break;
		case 54073871:
			func_424(-1414537028);
			func_424(38162571);
			func_424(1350391819);
			func_423(54073871);
			break;
		case 198200492:
			func_423(198200492);
			func_424(-1124061431);
			func_424(52706132);
			func_424(-259123672);
			break;
		case -1124061431:
			func_424(198200492);
			func_423(-1124061431);
			func_424(52706132);
			func_424(-259123672);
			break;
		case 52706132:
			func_424(198200492);
			func_424(-1124061431);
			func_423(52706132);
			func_424(-259123672);
			break;
		case -259123672:
			func_424(198200492);
			func_424(-1124061431);
			func_424(52706132);
			func_423(-259123672);
			break;
		case -919512195:
			func_423(-919512195);
			func_424(-1925798111);
			func_424(420709909);
			func_424(1703426636);
			break;
		case -1925798111:
			func_423(-1925798111);
			func_424(-919512195);
			func_424(420709909);
			func_424(1703426636);
			break;
		case 420709909:
			func_423(420709909);
			func_424(-919512195);
			func_424(-1925798111);
			func_424(1703426636);
			break;
		case 1703426636:
			func_423(1703426636);
			func_424(-919512195);
			func_424(-1925798111);
			func_424(420709909);
			break;
		case -1223121209:
			func_423(-1223121209);
			func_424(630808005);
			break;
		case 630808005:
			func_423(630808005);
			func_424(-1223121209);
			break;
		case 1453909576:
			func_423(1453909576);
			func_424(1643531967);
			break;
		case 1643531967:
			func_423(1643531967);
			func_424(1453909576);
			break;
		case 0:
			func_423(0);
			func_424(473295046);
			func_424(-1738165526);
			break;
		case 473295046:
			func_423(473295046);
			func_424(0);
			func_424(-1738165526);
			break;
		case -1738165526:
			func_423(-1738165526);
			func_424(0);
			func_424(473295046);
			break;
		case 932909855:
			func_423(932909855);
			func_424(2051822093);
			break;
		case 2051822093:
			func_423(2051822093);
			func_424(932909855);
			break;
		case 405586984:
			func_423(405586984);
			func_424(1509509592);
			func_424(-959357075);
			func_424(-1311865656);
			break;
		case 1509509592:
			func_423(1509509592);
			func_424(405586984);
			func_424(-959357075);
			func_424(-1311865656);
			break;
		case -959357075:
			func_423(-959357075);
			func_424(1509509592);
			func_424(405586984);
			func_424(-1311865656);
			break;
		case -1311865656:
			func_423(-1311865656);
			func_424(1509509592);
			func_424(-959357075);
			func_424(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_423(-524145696);
			}
			else
			{
				func_424(-524145696);
			}
			func_424(1626481264);
			func_424(282809459);
			break;
		case 282809459:
			func_423(282809459);
			func_424(1626481264);
			func_424(-524145696);
			break;
		case 1626481264:
			func_423(1626481264);
			func_424(-524145696);
			func_424(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_423(885203519);
			}
			else
			{
				func_424(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_423(-1080627546);
			}
			else
			{
				func_424(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_67(iParam0))
				{
					func_423(iParam0);
				}
			}
			else if (func_67(iParam0))
			{
				func_424(iParam0);
			}
			break;
	}
}

void func_423(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_189(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40567.f_46 = 1;
			MISC::SET_BIT(&(Global_1058888.f_40567.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::SET_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
		MISC::SET_BIT(&(Global_1058888.f_40567[iVar1]), iVar2);
	}
	Global_1934765 = 0;
}

void func_424(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_189(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40567.f_46 = 1;
			MISC::CLEAR_BIT(&(Global_1058888.f_40567.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_425()
{
	func_424(-939420910);
	func_424(-1187950766);
	func_424(356365161);
	func_424(753127042);
	func_424(-2038424081);
	func_424(1884271742);
	func_424(459290420);
}

void func_426()
{
	func_424(704802028);
	func_424(588987611);
	func_424(2008888900);
	func_424(1649996811);
	func_424(227918160);
	func_424(168171957);
	func_424(1193080109);
	func_424(-491981251);
	func_424(-639037538);
	func_424(-618620429);
}

