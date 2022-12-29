#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	var uLocal_7 = 24;
	var uLocal_8 = 0;
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
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
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
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	struct<4> Local_111 = { 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	iLocal_3 = joaat("U_M_M_BHT_BENEDICTALLBRIGHT");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_111);
	}
	func_2(&Local_111, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_111))
	{
		__LIB_5__::func_233(&Local_111);
		switch (__LIB_0__::func_57(Local_111))
		{
			case 0:
				if (func_6(&Local_111))
				{
					__LIB_0__::func_19(&Local_111, 1);
				}
				break;
			case 1:
				if (func_8(&Local_111))
				{
					__LIB_0__::func_19(&Local_111, 2);
				}
				break;
			case 2:
				if (func_9(&Local_111))
				{
					__LIB_0__::func_19(&Local_111, 3);
				}
				break;
			case 3:
				func_1(&Local_111);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_111);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_1__::func_752();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_31(iVar1) && __LIB_0__::func_699(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (__LIB_1__::func_22(iVar1))
				{
					__LIB_1__::func_774(iVar1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (__LIB_4__::func_802(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
		__LIB_4__::func_803(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		__LIB_4__::func_804(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		__LIB_4__::func_804(uParam0, 2);
	}
	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

bool func_6(var uParam0)
{
	if ((!func_21(uParam0) || !func_22(uParam0)) || !func_23())
	{
		return false;
	}
	func_24();
	__LIB_10__::func_131(iLocal_3, 76, 1);
	__LIB_10__::func_55(iLocal_3, 76);
	func_27();
	return true;
}

int func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return 0;
	}
	return func_28(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!func_30(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_11(var uParam0)
{
	__LIB_2__::func_753(3, 0, 1, 0, 0);
	__LIB_2__::func_426(&iLocal_109);
	__LIB_2__::func_426(&iLocal_110);
}

void func_19(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
	}
	PED::_0xED9582B3DA8F02B4(1);
}

bool func_21(var uParam0)
{
	if (!__LIB_0__::func_272(iLocal_108, 0))
	{
		iLocal_108 = ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_2, "U_M_M_ValSheriff_01", false);
		return false;
	}
	if (!__LIB_0__::func_122(3))
	{
		__LIB_0__::func_124(3);
	}
	if (!__LIB_0__::func_117(3, 1))
	{
		__LIB_0__::func_123(3, 1);
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_108))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_108, true, true);
	}
	__LIB_0__::func_928(&uLocal_7, iLocal_108, "VAL_Sheriff", 1);
	return true;
}

bool func_22(var uParam0)
{
	if (!__LIB_0__::func_272(iLocal_109, 0))
	{
		iLocal_109 = ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_2, "u_m_m_bht_benedictallbright", false);
		return false;
	}
	return true;
}

bool func_23()
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	__LIB_0__::func_928(&uLocal_7, Global_35, "ARTHUR", 1);
	return true;
}

void func_24()
{
	__LIB_4__::func_272(76, 1);
	__LIB_5__::func_54(76, 1);
}

void func_27()
{
	__LIB_3__::func_152(99);
	func_64(99);
	if (__LIB_3__::func_657(99) < 2)
	{
		__LIB_8__::func_958(99, 1, -249.417f, 764.93f, 116.441f, -1, 0, 1);
		__LIB_5__::func_234("spd_thomasdowne1", 523);
	}
}

int func_28(var uParam0)
{
	if (!func_68())
	{
		return 0;
	}
	if (__LIB_0__::func_272(iLocal_108, 0))
	{
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_108, -276.0093f, 810.7167f, 118.3755f, 0.5f, 0, false, false, false, false);
	}
	return 1;
}

bool func_30(var uParam0)
{
	func_69();
	return __LIB_0__::func_12() != 76;
}

void func_64(int iParam0)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_47 = 1;
}

bool func_68()
{
	__LIB_2__::func_426(&iLocal_109);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_110))
	{
		iLocal_110 = __LIB_13__::func_67(76, iLocal_3);
		return false;
	}
	__LIB_1__::func_532(Global_1835011[7 /*74*/].f_1, 1);
	__LIB_13__::func_324(iLocal_3, 76, 2);
	LAW::_0x73BAD7B2F2DB50DE(PLAYER::GET_PLAYER_INDEX(), __LIB_5__::func_235(76, 1, 1));
	return true;
}

void func_69()
{
	if (__LIB_0__::func_272(iLocal_108, 0))
	{
		switch (iLocal_6)
		{
			case 0:
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_108, -1) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_108, 1))
				{
					iLocal_6 = 1;
				}
				break;
			case 1:
				if (!AUDIO::_0xA2CAC9DEF0195E6F(0))
				{
					if (func_114())
					{
						__LIB_1__::func_283(&uLocal_105, 0);
						if (__LIB_0__::func_264(&uLocal_105) > 4.5f)
						{
							if (__LIB_5__::func_544(&uLocal_7, func_116(), iLocal_108, iLocal_110, 0, 0, 1, 1))
							{
								__LIB_0__::func_37(&uLocal_105);
								iLocal_4++;
								if (iLocal_4 > 1)
								{
									func_118(3);
									iLocal_5 = 1;
									iLocal_6 = 2;
								}
								else
								{
									iLocal_6 = 3;
								}
							}
						}
					}
					else
					{
						__LIB_0__::func_37(&uLocal_105);
					}
				}
				else
				{
					__LIB_0__::func_37(&uLocal_105);
				}
				break;
			case 2:
				if (!AUDIO::_0xA2CAC9DEF0195E6F(0))
				{
					if (func_114())
					{
						__LIB_1__::func_283(&uLocal_105, 0);
						if (__LIB_0__::func_264(&uLocal_105) > 4.5f)
						{
							if (__LIB_5__::func_544(&uLocal_7, "BOU1_SH_AFTERCS", iLocal_108, iLocal_110, 0, 0, 1, 1))
							{
								__LIB_0__::func_37(&uLocal_105);
								iLocal_6 = 3;
							}
						}
					}
					else
					{
						__LIB_0__::func_37(&uLocal_105);
					}
				}
				else
				{
					__LIB_0__::func_37(&uLocal_105);
				}
				break;
			case 3:
				__LIB_1__::func_283(&uLocal_105, 0);
				if (__LIB_0__::func_264(&uLocal_105) > 8f)
				{
					__LIB_0__::func_37(&uLocal_105);
					if (iLocal_5 == 1)
					{
						iLocal_6 = 2;
					}
					else
					{
						iLocal_6 = 1;
					}
				}
				break;
			case 4:
				break;
		}
	}
}

bool func_114()
{
	if (__LIB_0__::func_272(iLocal_108, 0) && __LIB_0__::func_272(Global_35, 0))
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_108) && __LIB_0__::func_48(Global_35, iLocal_108, 2.5f, 1))
		{
			return true;
		}
	}
	return false;
}

char* func_116()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			return "BOU1_SH_CELL1";
		case 1:
			return "BOU1_SH_CELL2";
		case 2:
			return "BOU1_SH_CELL3";
		case 3:
			return "BOU1_SH_CELL4";
		default:
			break;
	}
	return "";
}

void func_118(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_30(__LIB_0__::func_118(iParam0)))
	{
		iVar0 = __LIB_0__::func_120(iParam0);
		if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			if (!PERSCHAR::_0xEB98B38CA60742D7(iVar0))
			{
				PERSCHAR::_0x631CD2D77FDC0316(iVar0);
			}
		}
	}
}

