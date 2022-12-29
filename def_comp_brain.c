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
	var uLocal_102 = 3;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 3;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
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
	var uLocal_122 = -1;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = -1;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	bool bLocal_138 = false;
	bool bLocal_139 = false;
	bool bLocal_140 = false;
	bool bLocal_141 = false;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_14 = uScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(554))
	{
		func_1(&uLocal_14);
	}
	func_2(&uLocal_14, 0);
	while (!func_3(&uLocal_14, &uScriptParam_0))
	{
		BUILTIN::WAIT(0);
	}
	func_1(&uLocal_14);
}

void func_1(var uParam0)
{
	if (__LIB_0__::func_287(*uParam0, 2, 1))
	{
		__LIB_1__::func_31(*uParam0);
	}
	if (__LIB_0__::func_273(*uParam0, 16, 0))
	{
		__LIB_0__::func_176(*uParam0, 16, 1);
		Global_1360165[*uParam0 /*1157*/].f_129 = 0;
		__LIB_0__::func_904(*uParam0, 0);
		__LIB_0__::func_289(*uParam0, 4, 0);
		__LIB_0__::func_745(*uParam0);
		__LIB_0__::func_706(*uParam0);
		__LIB_0__::func_290(*uParam0, 37, 1);
	}
	if (bLocal_138)
	{
	}
	__LIB_0__::func_745(*uParam0);
	__LIB_5__::func_305(*uParam0);
	func_14(uParam0);
	func_15(uParam0);
	__LIB_0__::func_290(*uParam0, 65, 0);
	if (__LIB_0__::func_139(uParam0->f_106))
	{
		__LIB_1__::func_196(&(uParam0->f_106), 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
	{
		if (__LIB_0__::func_866(*uParam0, 0))
		{
			func_19(uParam0);
		}
		__LIB_6__::func_164(*uParam0, 1, 1, 1, 0);
	}
	if (!__LIB_0__::func_211(*uParam0))
	{
		if (bLocal_141)
		{
			__LIB_1__::func_292(*uParam0, 0, 1, 1, 0);
		}
	}
	__LIB_13__::func_556(*uParam0);
	__LIB_0__::func_233(*uParam0);
	__LIB_0__::func_380(uParam0, 134217728);
	__LIB_0__::func_380(uParam0, 536870912);
	__LIB_0__::func_290(*uParam0, 27, 0);
	Global_40.f_4942[*uParam0 /*60*/].f_48 = -15;
	Global_1360165[*uParam0 /*1157*/].f_11 = 0;
	func_2(uParam0, 0);
	__LIB_0__::func_288(*uParam0, 22, 0);
	__LIB_0__::func_290(*uParam0, 24, 0);
	__LIB_0__::func_290(*uParam0, 4, 0);
	__LIB_0__::func_290(*uParam0, 26, 0);
	__LIB_0__::func_290(*uParam0, 1, 0);
	__LIB_0__::func_290(*uParam0, 2, 0);
	__LIB_0__::func_8(&(Global_1359489.f_4), __LIB_0__::func_771(*uParam0));
	Global_1360165[*uParam0 /*1157*/].f_3 = 0;
	Global_1360165[*uParam0 /*1157*/].f_128 = 0;
	__LIB_0__::func_234(*uParam0, 0);
	__LIB_0__::func_213(*uParam0, 32, 0);
	func_31(uParam0);
	__LIB_6__::func_793(*uParam0, joaat("COMMENT_ON_FOOD_GOOD"));
	__LIB_6__::func_793(*uParam0, joaat("COMMENT_ON_FOOD_BAD"));
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == uParam0->f_1)
	{
		return;
	}
	uParam0->f_1 = iParam1;
}

bool func_3(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bVar0 = ENTITY::DOES_ENTITY_EXIST(uParam0->f_5);
	bVar1 = __LIB_0__::func_273(*uParam0, 16, 0);
	bVar2 = func_33(uParam0, &bVar1);
	bLocal_138 = (bVar0 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_5));
	if (!bVar2 && func_34(uParam0))
	{
		return true;
	}
	if (uParam0->f_1 > 0)
	{
		if (!__LIB_7__::func_441(*uParam0))
		{
			func_2(uParam0, 0);
		}
	}
	if (uParam0->f_1 > 1)
	{
		bVar3 = Global_1359489.f_10 == *uParam0;
		if (bVar3)
		{
			func_36(uParam0);
			if (bLocal_138)
			{
				bLocal_139 = PED::IS_PED_GROUP_MEMBER(uParam0->f_5, __LIB_0__::func_110(), 1);
				if (bLocal_139)
				{
					__LIB_0__::func_7(&(Global_1359489.f_4), __LIB_0__::func_771(*uParam0));
				}
				else
				{
					__LIB_0__::func_8(&(Global_1359489.f_4), __LIB_0__::func_771(*uParam0));
				}
			}
			else
			{
				bLocal_139 = false;
			}
			if (!bLocal_139)
			{
				if (__LIB_0__::func_287(*uParam0, 2, 1))
				{
					if (bVar2)
					{
						__LIB_0__::func_290(*uParam0, 2, 1);
					}
					else
					{
						return true;
					}
				}
			}
			if (__LIB_0__::func_287(*uParam0, 44, 1) && !SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[*uParam0 /*1157*/].f_1156, false))
			{
				Global_1360165[*uParam0 /*1157*/].f_1156 = 0;
				__LIB_0__::func_290(*uParam0, 44, 1);
			}
			func_39(uParam0);
		}
		if (func_40(uParam0, &bVar0) || ((!bVar2 && bVar3) && func_41(uParam0)))
		{
			return true;
		}
		func_42(uParam0, &bVar1);
		if (*uParam0 == 20 && iLocal_143 == 6)
		{
			func_43(uParam0);
		}
		if (bVar3)
		{
			uParam0->f_6 = __LIB_0__::func_748(*uParam0, 0);
			if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
			{
				iVar4 = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
				if (iVar4 != Global_1360165[*uParam0 /*1157*/].f_47)
				{
					Global_1360165[*uParam0 /*1157*/].f_47 = iVar4;
					StringCopy(&(Global_1360165[*uParam0 /*1157*/].f_48), PERSCHAR::_0x9C7F95946E304778(uParam0->f_6, Global_1360165[*uParam0 /*1157*/].f_47), 64);
					Global_1360165[*uParam0 /*1157*/].f_56 = 1;
				}
			}
			func_45(uParam0);
			func_46(uParam0, &bVar1);
			if (Global_1360165[*uParam0 /*1157*/].f_142 != -15)
			{
				if (__LIB_3__::func_77(Global_1360165[*uParam0 /*1157*/].f_142))
				{
					Global_1360165[*uParam0 /*1157*/].f_141 = 0;
					Global_1360165[*uParam0 /*1157*/].f_142 = -15;
				}
			}
			if (uParam0->f_1 != 6 && uParam0->f_1 != 7)
			{
				func_48(uParam0);
				func_49(uParam0, &bVar1);
			}
			func_50(uParam0);
			func_51(uParam0);
			if (__LIB_0__::func_287(*uParam0, 13, 1))
			{
				__LIB_7__::func_435(*uParam0);
				__LIB_0__::func_290(*uParam0, 13, 0);
			}
			if (__LIB_1__::func_307(*uParam0, 0, 0))
			{
				__LIB_0__::func_288(*uParam0, 26, 0);
			}
			else
			{
				__LIB_0__::func_290(*uParam0, 26, 0);
			}
			if (uParam0->f_102 == 17)
			{
				__LIB_0__::func_288(*uParam0, 67, 0);
			}
			else
			{
				__LIB_0__::func_290(*uParam0, 67, 0);
			}
		}
		func_54(uParam0, uParam1);
	}
	func_55(uParam0);
	switch (uParam0->f_1)
	{
		case 0:
			if (!__LIB_0__::func_49(*uParam0))
			{
				func_1(uParam0);
			}
			if (!__LIB_7__::func_441(*uParam0))
			{
				__LIB_0__::func_292(*uParam0);
			}
			if (MISC::IS_BIT_SET(uParam1->f_6, 0))
			{
				PED::_0xED9582B3DA8F02B4(2);
			}
			else if (PED::_0x62DE46F061CAA468() <= 1)
			{
				PED::_0xED9582B3DA8F02B4(1);
			}
			else
			{
				PED::_0xED9582B3DA8F02B4(2);
			}
			if (__LIB_9__::func_975(*uParam0) != 0)
			{
				func_59(*uParam0, __LIB_9__::func_975(*uParam0));
			}
			__LIB_7__::func_435(*uParam0);
			if (!__LIB_0__::func_86(uParam1->f_3))
			{
				PERSCHAR::_0x59C7AD6FEA2AC449(Global_1360165[*uParam0 /*1157*/].f_1, uParam1->f_3);
			}
			else
			{
				PERSCHAR::_0xD4B614179BCD0654(Global_1360165[*uParam0 /*1157*/].f_1);
			}
			uParam0->f_6 = __LIB_0__::func_748(*uParam0, 0);
			if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
			{
				Global_1360165[*uParam0 /*1157*/].f_47 = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
				StringCopy(&(Global_1360165[*uParam0 /*1157*/].f_48), PERSCHAR::_0x9C7F95946E304778(uParam0->f_6, Global_1360165[*uParam0 /*1157*/].f_47), 64);
				Global_1360165[*uParam0 /*1157*/].f_56 = 1;
			}
			if (*uParam0 != 12)
			{
				PERSCHAR::_0x2DF89CD2ED1D0BDE(__LIB_0__::func_59(*uParam0), __LIB_1__::func_468(Global_40.f_4942[*uParam1 /*60*/].f_3, *uParam0));
				Global_1360165[*uParam0 /*1157*/].f_63 = Global_40.f_4942[*uParam1 /*60*/].f_3;
			}
			if (*uParam0 == 24 || *uParam0 == 25)
			{
				PERSCHAR::_0x2DF89CD2ED1D0BDE(__LIB_0__::func_59(*uParam0), joaat("META_OUTFIT_DEFAULT"));
				Global_1360165[*uParam0 /*1157*/].f_63 = Global_40.f_4942[*uParam1 /*60*/].f_3;
			}
			func_51(uParam0);
			if (MISC::IS_BIT_SET(uParam1->f_6, 1))
			{
				__LIB_0__::func_288(*uParam0, 44, 0);
				bVar2 = true;
			}
			if (__LIB_1__::func_25(Global_1835011[0 /*74*/].f_1, 1) && __LIB_5__::func_260(*uParam1, -2147483648))
			{
				__LIB_5__::func_414(*uParam1, -2147483648, 0);
			}
			if (uParam1->f_1 != 0)
			{
				if (__LIB_1__::func_201(*uParam1, uParam1->f_1))
				{
					__LIB_1__::func_288(*uParam1, uParam1->f_1, !__LIB_0__::func_272(Global_1360165[*uParam0 /*1157*/], 0));
				}
			}
			else
			{
				__LIB_1__::func_288(*uParam1, Global_40.f_4942[*uParam1 /*60*/].f_3, !__LIB_0__::func_272(Global_1360165[*uParam0 /*1157*/], 0));
			}
			iLocal_143 = __LIB_0__::func_317();
			__LIB_1__::func_148(&(uParam0->f_76));
			__LIB_1__::func_148(&(uParam0->f_79));
			func_71(uParam0);
			func_2(uParam0, 1);
		case 1:
			if (!__LIB_0__::func_272(Global_1360165[*uParam0 /*1157*/], 0))
			{
				if (!PED::_0x5E420FF293EE5472() && __LIB_1__::func_871(&(uParam0->f_76)) < 5000)
				{
					__LIB_1__::func_148(&(uParam0->f_79));
					return false;
				}
				uParam0->f_5 = func_74(*uParam0, MISC::IS_BIT_SET(uParam1->f_6, 2), MISC::IS_BIT_SET(uParam1->f_6, 3), func_73(uParam0, bVar2));
			}
			if (__LIB_0__::func_272(Global_1360165[*uParam0 /*1157*/], 0) && uParam0->f_5 == PERSCHAR::_0x31C70A716CAE1FEE(Global_1360165[*uParam0 /*1157*/].f_1))
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[*uParam0 /*1157*/].f_1))
				{
					if (MISC::IS_BIT_SET(uParam1->f_6, 3))
					{
						if (!MISC::IS_BIT_SET(uParam1->f_6, 4))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[*uParam0 /*1157*/], true);
							MISC::SET_BIT(&(uParam1->f_6), 4);
						}
						return false;
					}
				}
				else if (MISC::IS_BIT_SET(uParam1->f_6, 4))
				{
					PERSCHAR::_0xD4B614179BCD0654(uParam0->f_6);
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[*uParam0 /*1157*/], false);
					MISC::CLEAR_BIT(&(uParam1->f_6), 4);
				}
				Global_1360165[*uParam0 /*1157*/] = uParam0->f_5;
				func_75(uParam0);
				if (MISC::IS_BIT_SET(uParam1->f_6, 0) && __LIB_0__::func_273(*uParam0, 32768, 1))
				{
					__LIB_0__::func_288(*uParam0, 40, 0);
				}
				func_2(uParam0, 2);
			}
			break;
		case 2:
			if (bVar1 || __LIB_0__::func_287(*uParam0, 44, 0))
			{
				func_76(uParam0);
			}
			else if (__LIB_0__::func_866(*uParam0, 0))
			{
				func_77(uParam0);
			}
			else if (func_78(uParam0))
			{
				func_79(uParam0);
			}
			else
			{
				func_80(uParam0, 0);
			}
			break;
		case 3:
			if (__LIB_0__::func_287(*uParam0, 27, 1))
			{
				if (__LIB_13__::func_479(__LIB_0__::func_23(), Global_40.f_4942[*uParam0 /*60*/].f_48))
				{
					__LIB_0__::func_290(*uParam0, 27, 0);
					Global_40.f_4942[*uParam0 /*60*/].f_48 = -15;
				}
			}
			if (func_83(uParam0, 1))
			{
				func_84(uParam0);
			}
			break;
		case 23:
			if (!func_83(uParam0, 0))
			{
				if (!__LIB_0__::func_75(&(uParam0->f_46)))
				{
					__LIB_1__::func_148(&(uParam0->f_46));
				}
				else if (__LIB_0__::func_265(&(uParam0->f_46)) > 30f || __LIB_0__::func_255(Global_35, 0))
				{
					__LIB_0__::func_37(&(uParam0->f_46));
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_5, __LIB_0__::func_110(), 1))
					{
						func_19(uParam0);
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 1, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 3, false);
					__LIB_1__::func_283(&(uParam0->f_67), 1);
					if (__LIB_7__::func_443(uParam0->f_5) || __LIB_1__::func_205(uParam0->f_5, __LIB_0__::func_559(__LIB_0__::func_61()), 1, 0))
					{
						func_80(uParam0, 1);
					}
					else
					{
						func_79(uParam0);
					}
				}
			}
			break;
		case 6:
			if (__LIB_0__::func_296(0, 0, 1))
			{
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
			}
			if (bVar3)
			{
				bVar5 = __LIB_4__::func_802(uParam0, 536870912);
				if (!__LIB_0__::func_75(&(uParam0->f_73)))
				{
					__LIB_1__::func_148(&(uParam0->f_73));
				}
				else if (__LIB_0__::func_265(&(uParam0->f_73)) > 1f)
				{
					if ((((!__LIB_7__::func_439() && !bVar5) && !__LIB_0__::func_287(*uParam0, 63, 0)) && !__LIB_0__::func_481(1)) && PED::_0x947E43F544B6AB34(uParam0->f_5, PLAYER::PLAYER_ID(), 48, 1200))
					{
						__LIB_4__::func_804(uParam0, 536870912);
						bVar5 = true;
					}
					__LIB_1__::func_148(&(uParam0->f_73));
				}
				if (bVar5)
				{
					func_48(uParam0);
				}
			}
			if (!bVar1)
			{
				if (__LIB_0__::func_287(*uParam0, 44, 0))
				{
					return false;
				}
				__LIB_0__::func_204(*uParam0, 16384, 0);
				__LIB_0__::func_47(uParam0, 1);
				__LIB_0__::func_290(*uParam0, 44, 0);
				if (bLocal_138)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_5))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_5, true, true);
					}
					uParam0->f_6 = __LIB_0__::func_748(*uParam0, 0);
					PERSCHAR::_0xE0E65E0D261F7507(uParam0->f_6);
					if (__LIB_0__::func_287(*uParam0, 30, 1))
					{
						if (__LIB_0__::func_866(*uParam0, 0))
						{
							func_19(uParam0);
						}
						__LIB_0__::func_290(*uParam0, 30, 1);
					}
					else
					{
						bLocal_139 = PED::IS_PED_GROUP_MEMBER(uParam0->f_5, __LIB_0__::func_110(), 1);
					}
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 130, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 315, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 301, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5, joaat("REL_GANG_DUTCHS"));
					ENTITY::_SET_ENTITY_HEALTH(uParam0->f_5, PED::GET_PED_MAX_HEALTH(uParam0->f_5), 0);
					if (func_101(uParam0))
					{
						__LIB_0__::func_288(*uParam0, 35, 0);
						__LIB_0__::func_288(*uParam0, 62, 0);
					}
					if (__LIB_0__::func_287(*uParam0, 33, 0))
					{
						func_102(uParam0);
					}
					else if (bLocal_139)
					{
						if (__LIB_0__::func_272(uParam0->f_5, 0))
						{
							PED::SET_PED_KEEP_TASK(uParam0->f_5, false);
						}
						func_77(uParam0);
					}
					else if (func_83(uParam0, 1))
					{
						func_84(uParam0);
					}
					else if (__LIB_0__::func_287(*uParam0, 35, 0))
					{
						POPULATION::_0xF74E134F40192884(uParam0->f_5, 0);
						func_79(uParam0);
					}
					else if (__LIB_7__::func_443(uParam0->f_5) || __LIB_1__::func_205(uParam0->f_5, __LIB_0__::func_559(__LIB_0__::func_61()), 1, 0))
					{
						POPULATION::_0xF74E134F40192884(uParam0->f_5, 1);
						func_103(uParam0);
						if (PED::IS_PED_ON_MOUNT(uParam0->f_5))
						{
							TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_5, 0, 0, 0, 0, 0);
						}
						func_104(uParam0);
					}
					else
					{
						POPULATION::_0xF74E134F40192884(uParam0->f_5, 0);
						func_79(uParam0);
					}
				}
			}
			break;
		case 7:
			if (bVar1)
			{
				func_76(uParam0);
				return false;
			}
			bVar6 = false;
			if (__LIB_0__::func_75(&(Global_1360165[*uParam0 /*1157*/].f_130)) && __LIB_0__::func_264(&(Global_1360165[*uParam0 /*1157*/].f_130)) > Global_1360165[*uParam0 /*1157*/].f_133)
			{
				bVar6 = true;
			}
			else if (__LIB_0__::func_287(*uParam0, 34, 0) && !TASK::_0x9FF5F9B24E870748(uParam0->f_5))
			{
				bVar6 = true;
			}
			else if (__LIB_0__::func_287(*uParam0, 68, 0) && func_106(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 3f, 4, 0))
			{
				bVar6 = true;
			}
			if (bVar6)
			{
				func_15(uParam0);
				PED::SET_PED_KEEP_TASK(uParam0->f_5, false);
				func_104(uParam0);
				return false;
			}
			break;
		case 11:
			if (!__LIB_0__::func_866(*uParam0, 0))
			{
				func_79(uParam0);
				return false;
			}
			func_107(uParam0);
			break;
		case 12:
			func_108(uParam0);
			break;
		case 18:
			func_109(uParam0);
			break;
		case 19:
			func_110(uParam0);
			break;
		default:
			func_104(uParam0);
			break;
	}
	return false;
}

void func_14(var uParam0)
{
	func_119(uParam0);
	__LIB_17__::func_700(uParam0);
}

void func_15(var uParam0)
{
	__LIB_0__::func_37(&(Global_1360165[*uParam0 /*1157*/].f_130));
	Global_1360165[*uParam0 /*1157*/].f_133 = -1f;
	__LIB_0__::func_290(*uParam0, 33, 0);
	__LIB_0__::func_290(*uParam0, 34, 0);
	__LIB_0__::func_290(*uParam0, 12, 0);
	__LIB_0__::func_290(*uParam0, 68, 0);
}

void func_19(var uParam0)
{
	__LIB_1__::func_640(*uParam0);
	bLocal_139 = false;
}

void func_31(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_123))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_123);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 377, false);
	}
}

int func_33(var uParam0, bool bParam1)
{
	if (*bParam1 || __LIB_0__::func_287(*uParam0, 44, 0))
	{
		return 1;
	}
	return 0;
}

bool func_34(var uParam0)
{
	if (bLocal_139)
	{
		return false;
	}
	if (__LIB_0__::func_287(*uParam0, 1, 1))
	{
		return true;
	}
	return false;
}

void func_36(var uParam0)
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) };
	uParam0->f_11 = BUILTIN::VDIST2(Global_1360165[*uParam0 /*1157*/].f_135, vVar0) > 2f;
	Global_1360165[*uParam0 /*1157*/].f_135 = { vVar0 };
	Global_1360165[*uParam0 /*1157*/].f_134 = BUILTIN::VDIST2(Global_1360165[*uParam0 /*1157*/].f_135, Global_36);
}

void func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iLocal_142 = 0;
	if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
	{
		iVar0 = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
		iVar1 = PERSCHAR::_0xEC254C2C9B0F08F1(uParam0->f_6, iVar0);
		if ((((iVar1 == 1932006723 || iVar1 == 1130477742) || (*uParam0 == 10 && iVar1 == joaat("BRAITHWAITES3"))) || (*uParam0 == 19 && iVar1 == joaat("BRAITHWAITES3"))) || PED::_IS_PED_USING_SCENARIO_HASH(uParam0->f_5, joaat("WORLD_HUMAN_RIFLE_PUT_DOWN_LEAN")))
		{
			iVar2 = __LIB_0__::func_399(uParam0->f_5, 0, 0, 0);
			if (__LIB_0__::func_787(iVar2))
			{
				iVar3 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_5, 0));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				iVar2 = __LIB_0__::func_399(uParam0->f_5, 0, 1, 0);
				if (__LIB_0__::func_787(iVar2))
				{
					iVar3 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_5, 1));
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					return;
				}
			}
			iLocal_142 = iVar3;
		}
	}
}

bool func_40(var uParam0, bool bParam1)
{
	if (!*bParam1 || (ENTITY::IS_ENTITY_DEAD(uParam0->f_5) && !__LIB_0__::func_699(*uParam0)))
	{
		return true;
	}
	return false;
}

bool func_41(var uParam0)
{
	float fVar0;
	bool bVar1;
	if (__LIB_0__::func_21(__LIB_0__::func_61(), 8) || __LIB_0__::func_21(__LIB_0__::func_61(), 2))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		fVar0 = 40000f;
	}
	else
	{
		fVar0 = 10000f;
	}
	if (__LIB_0__::func_210(*uParam0) > fVar0)
	{
		if (*uParam0 == Global_1357549.f_1497)
		{
			return false;
		}
		if (bVar1)
		{
			if (!func_141(uParam0->f_5))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_42(var uParam0, bool bParam1)
{
	int iVar0;
	if (!bLocal_138)
	{
		return;
	}
	func_142(uParam0);
	if (iLocal_142 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142) && __LIB_10__::func_624(ENTITY::GET_ENTITY_MODEL(iLocal_142)))
		{
			WEAPON::_0x000FA7A4A8443AF7(iLocal_142);
		}
		else
		{
			iLocal_142 = 0;
		}
	}
	iVar0 = __LIB_0__::func_177(*uParam0);
	if (__LIB_0__::func_272(iVar0, 0))
	{
		if (!__LIB_0__::func_858(*uParam0, 2048))
		{
			ENTITY::_0xC3ABCFBC7D74AFA5(iVar0, 6, 1);
		}
		if (!__LIB_0__::func_858(*uParam0, 4096))
		{
			PED::SET_PED_RESET_FLAG(iVar0, 91, true);
		}
	}
	if (uParam0->f_1 != 6)
	{
		if (*bParam1)
		{
			func_76(uParam0);
			return;
		}
		if ((uParam0->f_1 != 11 && uParam0->f_1 != 18) && uParam0->f_1 != 23)
		{
			if (bLocal_139)
			{
				func_77(uParam0);
				return;
			}
		}
		if (Global_1359489.f_10 == *uParam0)
		{
			func_145(uParam0);
		}
	}
	else
	{
		if (__LIB_0__::func_287(*uParam0, 44, 0))
		{
			if (PED::_0x62DE46F061CAA468() <= 1 && !ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_177(*uParam0)))
			{
				PED::_0xED9582B3DA8F02B4(1);
			}
			else
			{
				PED::_0xED9582B3DA8F02B4(2);
			}
		}
		func_145(uParam0);
	}
}

void func_43(var uParam0)
{
	float fVar0;
	if (bLocal_138)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 333, true);
		if (Global_1359489.f_10 == *uParam0)
		{
			if (Global_1360165[*uParam0 /*1157*/].f_1152 == -1 || Global_1360165[*uParam0 /*1157*/].f_1152 == 3)
			{
				fVar0 = func_146();
				if (uParam0->f_121 != fVar0 || !PED::_0x50F124E6EF188B22(uParam0->f_5))
				{
					uParam0->f_121 = fVar0;
					__LIB_6__::func_991(*uParam0, fVar0);
					PED::_0xE0FE107AB174D64A(uParam0->f_5, 1);
				}
			}
			else if (PED::_0x6FB76442469ABD68(uParam0->f_5) > 0f)
			{
				uParam0->f_121 = (uParam0->f_121 - 0.01f);
				if (uParam0->f_121 > 0f)
				{
					__LIB_6__::func_991(*uParam0, uParam0->f_121);
				}
				else
				{
					uParam0->f_121 = 0f;
					__LIB_4__::func_703(*uParam0);
				}
			}
		}
	}
}

void func_45(var uParam0)
{
	int iVar0;
	iVar0 = func_149(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 2:
			if (__LIB_0__::func_866(*uParam0, 0))
			{
				func_19(uParam0);
			}
			func_150(uParam0);
			break;
		case 16:
			if (!__LIB_6__::func_102(*uParam0))
			{
				__LIB_0__::func_47(uParam0, 6);
			}
			func_150(uParam0);
			break;
		case 21:
			uParam0->f_107 = func_152(uParam0);
			func_153(uParam0);
			__LIB_0__::func_380(uParam0, 4096);
			__LIB_0__::func_47(uParam0, 2048);
			func_150(uParam0);
			break;
		case 22:
			uParam0->f_107 = -1;
			func_153(uParam0);
			__LIB_0__::func_380(uParam0, 2048);
			__LIB_0__::func_47(uParam0, 4096);
			break;
		case 23:
			__LIB_0__::func_380(uParam0, 2048);
			__LIB_0__::func_380(uParam0, 4096);
			func_150(uParam0);
			uParam0->f_107 = -1;
			break;
		case 27:
			if (!__LIB_0__::func_273(*uParam0, 16, 0))
			{
				if (uParam0->f_1 == 3)
				{
					uParam0->f_6 = __LIB_0__::func_748(*uParam0, 0);
					if (uParam0->f_6 != 0 && MISC::_IS_BASE_A_PERSISTENT_CHARACTER(uParam0->f_6))
					{
						PERSCHAR::_0xD4B614179BCD0654(uParam0->f_6);
					}
					func_104(uParam0);
				}
			}
			func_150(uParam0);
			break;
	}
}

void func_46(var uParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	var uVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	if (__LIB_6__::func_102(*uParam0))
	{
		return;
	}
	iVar0 = Global_1360165[*uParam0 /*1157*/].f_70;
	bLocal_141 = __LIB_0__::func_272(iVar0, 0);
	if (bLocal_141)
	{
		if (__LIB_0__::func_287(*uParam0, 38, 1))
		{
			PED::_0x931B241409216C1F(__LIB_0__::func_271(*uParam0), iVar0, 0);
			PED::_0xED1C764997A86D5A(__LIB_0__::func_271(*uParam0), iVar0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 367, true);
			__LIB_0__::func_290(*uParam0, 38, 1);
		}
		fVar1 = 40000f;
		bVar6 = __LIB_10__::func_32(__LIB_0__::func_317(), &vVar2, &uVar5);
		if (!func_155(uParam0))
		{
			if (!__LIB_0__::func_858(*uParam0, 32))
			{
				AITRANSPORT::_0xBA8818212633500A(iVar0, 0, 1);
				__LIB_0__::func_213(*uParam0, 32, 1);
			}
		}
		else if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
			POPULATION::_0xF74E134F40192884(iVar0, 1);
			if (__LIB_0__::func_858(*uParam0, 32))
			{
				AITRANSPORT::_0xBA8818212633500A(iVar0, 0, 0);
				__LIB_0__::func_213(*uParam0, 32, 0);
			}
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			if (((bVar6 && __LIB_1__::func_992(iVar0, vVar2, 1) > 1200f) && !__LIB_0__::func_858(*uParam0, 1024)) && !__LIB_0__::func_211(*uParam0))
			{
				fVar1 = 1200f;
			}
			else if (!TASK::GET_IS_TASK_ACTIVE(iVar0, 7))
			{
				PERSCHAR::_0x631CD2D77FDC0316(__LIB_1__::func_179(*uParam0, 0));
			}
		}
		if (!__LIB_0__::func_858(*uParam0, 1024) && __LIB_1__::func_992(iVar0, vVar2, 1) > fVar1)
		{
			if ((!__LIB_0__::func_211(*uParam0) && !*bParam1) && !(__LIB_0__::func_858(*uParam0, 8) || __LIB_0__::func_858(*uParam0, 512)))
			{
				iVar7 = PED::_GET_RIDER_OF_MOUNT(iVar0, false);
				if (iVar7 == Global_35)
				{
					TASK::TASK_HORSE_ACTION(iVar0, 2, 0, 0);
				}
				else if (iVar7 != uParam0->f_5)
				{
					if (bVar6)
					{
						if (((!__LIB_0__::func_163(iVar0, 713668775) && !TASK::GET_IS_TASK_ACTIVE(iVar0, 7)) && !__LIB_0__::func_163(iVar0, 258748395)) && !__LIB_0__::func_163(iVar0, 1041577989))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar2, 2.5f, -1, 0.25f, 0, 40000f);
						}
					}
				}
			}
		}
		else if ((PED::_GET_RIDER_OF_MOUNT(iVar0, false) == 0 && !__LIB_0__::func_211(*uParam0)) && !(__LIB_0__::func_858(*uParam0, 8) || __LIB_0__::func_858(*uParam0, 512)))
		{
			if (bVar6)
			{
				if (__LIB_1__::func_992(iVar0, vVar2, 1) < fVar1)
				{
					if ((!TASK::GET_IS_TASK_ACTIVE(iVar0, 7) && !__LIB_0__::func_163(iVar0, 258748395)) && !__LIB_0__::func_163(iVar0, 1041577989))
					{
						PERSCHAR::_0x631CD2D77FDC0316(__LIB_1__::func_179(*uParam0, 0));
					}
				}
			}
		}
	}
	if (func_158(*uParam0, 0))
	{
		return;
	}
	if (__LIB_0__::func_65(uParam0, 2))
	{
		if (PED::IS_PED_ON_MOUNT(uParam0->f_5) || __LIB_0__::func_163(uParam0->f_5, 1868526510))
		{
			__LIB_0__::func_380(uParam0, 2);
		}
		bVar8 = func_160(*uParam0);
		if (!bVar8 && (uParam0->f_1 != 6 || __LIB_5__::func_831(2048)))
		{
			__LIB_18__::func_612(*uParam0);
		}
	}
	else if (Global_1360165[*uParam0 /*1157*/].f_70.f_13 > 2)
	{
		__LIB_13__::func_556(*uParam0);
	}
}

void func_48(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_4__::func_802(uParam0, 536870912))
	{
		if (bLocal_138 && __LIB_0__::func_272(Global_35, 0))
		{
			sVar0 = func_163();
			if (__LIB_1__::func_265(uParam0->f_5, sVar0, joaat("SPEECH_PARAMS_STANDARD"), Global_35, 0, 0, uParam0->f_101, 1))
			{
				__LIB_4__::func_803(uParam0, 536870912);
			}
			return;
		}
		else
		{
			__LIB_4__::func_803(uParam0, 536870912);
		}
	}
	if (__LIB_4__::func_802(uParam0, 1073741824 /* Float: 2f */))
	{
		if (bLocal_138 && __LIB_0__::func_272(Global_35, 0))
		{
			sVar0 = func_166();
			if (__LIB_1__::func_265(uParam0->f_5, sVar0, joaat("SPEECH_PARAMS_STANDARD"), Global_35, 0, 0, 0, 1))
			{
				__LIB_4__::func_803(uParam0, 1073741824 /* Float: 2f */);
			}
			return;
		}
		else
		{
			__LIB_4__::func_803(uParam0, 1073741824 /* Float: 2f */);
		}
	}
	if (*uParam0 == 17 && __LIB_7__::func_441(*uParam0))
	{
		if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
		{
			iVar1 = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
			iVar2 = PERSCHAR::_0xEC254C2C9B0F08F1(uParam0->f_6, iVar1);
			if (iVar2 == 1281438538 && PED::_IS_PED_USING_SCENARIO_HASH(uParam0->f_5, joaat("WORLD_HUMAN_DRINK_FLASK")))
			{
				if (!__LIB_4__::func_802(uParam0, -2147483648))
				{
					bVar3 = true;
					if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar4, 0, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar4) && ENTITY::IS_ENTITY_A_PED(iVar4))
						{
							if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4) == uParam0->f_5)
							{
								bVar3 = false;
							}
						}
					}
					if (bVar3)
					{
						if (__LIB_1__::func_265(uParam0->f_5, "FOOD_READY_REMINDER", joaat("SPEECH_PARAMS_SHOUTED_CLEAR"), 0, 1, 0, 0, 1))
						{
							__LIB_4__::func_804(uParam0, -2147483648);
						}
					}
				}
			}
			else if (__LIB_4__::func_802(uParam0, -2147483648))
			{
				__LIB_4__::func_803(uParam0, -2147483648);
			}
		}
	}
}

void func_49(var uParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	struct<4> Var16;
	vector3 vVar20;
	float fVar23;
	vector3 vVar24;
	float fVar27;
	bool bVar28;
	vector3 vVar29;
	vector3 vVar32;
	vector3 vVar35;
	if (*bParam1 || func_167(*uParam0))
	{
		if (!__LIB_5__::func_831(2048))
		{
			return;
		}
	}
	if (uParam0->f_102 == 1 || uParam0->f_102 == 2)
	{
		return;
	}
	if (uParam0->f_103 != uParam0->f_102 && uParam0->f_103 != 0)
	{
		if (uParam0->f_102 != 25)
		{
			__LIB_0__::func_712(*uParam0, 0, "received new task");
		}
		__LIB_0__::func_37(&(uParam0->f_46));
	}
	uParam0->f_103 = uParam0->f_102;
	if (uParam0->f_102 != 9)
	{
		__LIB_0__::func_380(uParam0, 2);
	}
	switch (uParam0->f_102)
	{
		case 25:
			break;
		case 1:
		case 3:
			if (!PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
			{
				if (!func_169(uParam0, 1351865802))
				{
					if (TASK::_0xBD70108D01875299(uParam0->f_105) > 0)
					{
						TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(uParam0->f_5, uParam0->f_105, 1, 1, 1);
						func_170(uParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
			{
				if (!func_169(uParam0, 1351865802))
				{
					if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(uParam0->f_105))
					{
						if (TASK::_0xBD70108D01875299(uParam0->f_105) > 0)
						{
							TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(uParam0->f_5, uParam0->f_105, 0, 0, 1);
						}
					}
				}
			}
			break;
		case 4:
			if (!func_169(uParam0, 923520851))
			{
				vVar5 = { __LIB_2__::func_116(__LIB_0__::func_61(), 1) };
				fVar8 = 0f;
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar5, &fVar8, false))
				{
					vVar5.f_2 = fVar8;
				}
				TASK::TASK_WANDER_IN_AREA(uParam0->f_5, vVar5, 40f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			}
			break;
		case 5:
			if (!func_169(uParam0, -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_5, Global_35, -1, -1f, -1f, -1f);
			}
			break;
		case 6:
			if (!func_169(uParam0, 713668775))
			{
				vVar9 = { func_172(*uParam0) };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vVar9, 1f, -1, 3f, 0, 40000f);
			}
			break;
		case 7:
			if (!func_169(uParam0, 713668775))
			{
				vVar12 = { func_172(*uParam0) };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vVar12, 2f, -1, 3f, 0, 40000f);
			}
			break;
		case 17:
			if (__LIB_4__::func_740(uParam0->f_5))
			{
				return;
			}
			if (__LIB_0__::func_287(*uParam0, 35, 1))
			{
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 52, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 201, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 228, true);
			}
			if (__LIB_0__::func_210(*uParam0) > 10000f || ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_5, __LIB_0__::func_559(5), true, 0))
			{
				fVar15 = 3f;
			}
			else if (__LIB_0__::func_210(*uParam0) > 5625f)
			{
				fVar15 = 2f;
			}
			else
			{
				fVar15 = 1f;
			}
			if (fVar15 < 3f)
			{
				if (__LIB_0__::func_287(*uParam0, 35, 1))
				{
					fVar15 = 3f;
				}
				else if ((__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1) || PED::IS_PED_IN_COMBAT(Global_35, 0)) || PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
				{
					fVar15 = 2f;
				}
			}
			bVar0 = PED::IS_PED_ON_MOUNT(uParam0->f_5);
			__LIB_1__::func_822(&vVar2, &uVar1);
			if (!bVar0 && BUILTIN::VDIST2(Global_1360165[*uParam0 /*1157*/].f_135, vVar2) > 562500f)
			{
				bVar0 = true;
			}
			if (PED::IS_PED_IN_COMBAT(Global_35, 0) && PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
			{
				if (!func_169(uParam0, -2117564886))
				{
					TASK::TASK_COMBAT_HATED_TARGETS(uParam0->f_5, -1f);
				}
			}
			else if (((!func_169(uParam0, -1665583462) && bVar0) || (!func_169(uParam0, -1672495956) && !bVar0)) || fVar15 != uParam0->f_104)
			{
				uParam0->f_104 = fVar15;
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 113, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 230, false);
				if (bVar0)
				{
					TASK::_TASK_MOVE_IN_TRAFFIC_2(uParam0->f_5, vVar2, 1073741824 /* Float: 2f */, fVar15, 4096, 0);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(uParam0->f_5, vVar2, fVar15, -1, (0.25f * 2f), 5242885, Var16, 40000f);
				}
			}
			break;
		case 18:
			if (!func_169(uParam0, 2106541073))
			{
				vVar20 = { __LIB_2__::func_116(__LIB_0__::func_61(), 1) };
				vVar20 = { vVar20 - ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) };
				vVar20 = { __LIB_0__::func_173(vVar20) };
				vVar20 = { vVar20 * Vector(50f, 50f, 50f) };
				vVar20 = { vVar20 + ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) };
				if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar20, &(vVar20.f_2), false))
				{
					vVar20.f_2 = (vVar20.z + 99f);
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar20, &(vVar20.f_2), false);
				}
				TASK::TASK_GO_STRAIGHT_TO_COORD(uParam0->f_5, vVar20, 2f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
			}
			break;
		case 19:
			if (__LIB_0__::func_210(*uParam0) > 10000f)
			{
				fVar23 = 3f;
			}
			else if (__LIB_0__::func_210(*uParam0) > 5625f)
			{
				fVar23 = 2f;
			}
			else
			{
				fVar23 = 1f;
			}
			if (!func_169(uParam0, 713668775) || fVar23 != uParam0->f_104)
			{
				__LIB_1__::func_822(&vVar2, &uVar1);
				vVar24 = { vVar2 };
				__LIB_2__::func_106(&vVar24, 50, 10, 0);
				uParam0->f_104 = fVar23;
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vVar24, fVar23, -1, 3f, 37, 40000f);
			}
			break;
		case 9:
			if (__LIB_0__::func_287(*uParam0, 35, 1))
			{
				if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, true);
				}
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 52, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 201, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 228, true);
			}
			if (__LIB_13__::func_481(*uParam0) || func_169(uParam0, 1868526510))
			{
				return;
			}
			if (__LIB_6__::func_102(*uParam0))
			{
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_5, true))
			{
				if (!func_169(uParam0, -828834893))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_5, 0, 0);
				}
				return;
			}
			if (__LIB_0__::func_210(*uParam0) > 2500f)
			{
				__LIB_18__::func_34(*uParam0, 1);
			}
			if (__LIB_0__::func_287(*uParam0, 35, 1))
			{
				fVar27 = 3f;
			}
			else if (((PED::IS_PED_IN_COMBAT(Global_35, 0) || PED::IS_PED_IN_COMBAT(uParam0->f_5, 0)) || __LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1)) || (ENTITY::DOES_ENTITY_EXIST(Global_1360165[*uParam0 /*1157*/].f_70) && __LIB_1__::func_348(uParam0->f_5, Global_1360165[*uParam0 /*1157*/].f_70) > 15f))
			{
				fVar27 = 2f;
			}
			else
			{
				fVar27 = 1f;
			}
			bVar28 = ENTITY::IS_ENTITY_DEAD(Global_1360165[*uParam0 /*1157*/].f_70);
			if ((!bVar28 && (__LIB_13__::func_555(*uParam0, 1120403456 /* Float: 100f */) && !__LIB_7__::func_436(*uParam0))) || __LIB_5__::func_831(512))
			{
				__LIB_0__::func_380(uParam0, 2);
				TASK::CLEAR_PED_TASKS(__LIB_0__::func_177(*uParam0), true, false);
				if (!PED::_0x5102307CE88798EB(uParam0->f_5))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_5);
				}
				if (!PED::IS_TRACKED_PED_VISIBLE(uParam0->f_5))
				{
					func_183(uParam0, 1, "Out of sight - quick mount horse");
				}
				PED::_0x3088634CF8C819CF(uParam0->f_5);
				if (PED::IS_PED_RAGDOLL(__LIB_0__::func_177(*uParam0)))
				{
					return;
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(__LIB_0__::func_177(*uParam0), true);
				if (__LIB_1__::func_16(Global_1360165[*uParam0 /*1157*/].f_70))
				{
					__LIB_4__::func_804(uParam0, 8);
				}
				TASK::TASK_MOUNT_ANIMAL(uParam0->f_5, __LIB_0__::func_177(*uParam0), -1, -1, fVar27, 1, 0, 0);
			}
			else if (!bVar28)
			{
				if (!__LIB_0__::func_163(uParam0->f_5, 1227113341))
				{
					TASK::TASK_GO_TO_ENTITY(uParam0->f_5, Global_1360165[*uParam0 /*1157*/].f_70, 20000, 0.5f, fVar27, 2f, 0);
				}
			}
			else
			{
				if (!__LIB_0__::func_65(uParam0, 2))
				{
					__LIB_0__::func_47(uParam0, 2);
				}
				if ((__LIB_0__::func_287(*uParam0, 35, 1) && !__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1)) || __LIB_0__::func_287(*uParam0, 62, 1))
				{
					if (!__LIB_0__::func_163(uParam0->f_5, 518218985))
					{
						TASK::_TASK_FLEE_FROM_PED(uParam0->f_5, Global_35, 0f, 0f, 0f, 200f, 20000, 0, 2f, 0);
					}
				}
				else if (((PED::IS_PED_IN_COMBAT(Global_35, 0) || PED::IS_PED_IN_COMBAT(uParam0->f_5, 0)) || __LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1)) && PED::_0x5407B7288D0478B7(Global_35, 8) > 0)
				{
					if (!__LIB_0__::func_163(uParam0->f_5, 1120685857))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
						PED::REGISTER_HATED_TARGETS_AROUND_PED(uParam0->f_5, 60f);
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(uParam0->f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 60f, 0, 20);
					}
				}
				else if (!__LIB_0__::func_163(uParam0->f_5, 923520851))
				{
					TASK::TASK_WANDER_IN_AREA(uParam0->f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 15f, 0f, 1f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
				}
			}
			break;
		case 10:
			if (!__LIB_5__::func_831(134217728))
			{
				if (!__LIB_0__::func_75(&(uParam0->f_46)))
				{
					uParam0->f_83 = MISC::GET_RANDOM_INT_IN_RANGE(750, 3000);
					__LIB_1__::func_283(&(uParam0->f_46), 1);
				}
				if (__LIB_1__::func_871(&(uParam0->f_46)) > uParam0->f_83)
				{
					if (!func_169(uParam0, 501393341))
					{
						if (__LIB_13__::func_481(*uParam0))
						{
							if (TASK::IS_PED_STILL(uParam0->f_5))
							{
								TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_5, 1, 0, 0, 0, 0);
								if (__LIB_1__::func_16(Global_1360165[*uParam0 /*1157*/].f_70))
								{
									__LIB_13__::func_554(*uParam0);
									if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[*uParam0 /*1157*/].f_123))
									{
										func_186(*uParam0, Global_1360165[*uParam0 /*1157*/].f_123, 0, 0, 1);
									}
								}
							}
							else if (!func_169(uParam0, -982327190))
							{
								TASK::TASK_STAND_STILL(uParam0->f_5, 1000);
							}
						}
					}
				}
			}
			break;
		case 11:
			if (__LIB_1__::func_992(uParam0->f_5, uParam0->f_8, 1) > 4f)
			{
				if (!func_169(uParam0, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, uParam0->f_8, 1f, -1, 0.25f, 0, 40000f);
				}
			}
			else if (!func_169(uParam0, 501393341))
			{
				if (__LIB_13__::func_481(*uParam0))
				{
					if (TASK::IS_PED_STILL(uParam0->f_5))
					{
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_5, 1, 0, 0, 0, 0);
					}
					else if (!func_169(uParam0, -982327190))
					{
						TASK::TASK_STAND_STILL(uParam0->f_5, 1000);
					}
				}
			}
			break;
		case 12:
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_5, PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()), 0))
				{
					func_187(uParam0);
				}
			}
			break;
		case 16:
			if (!func_169(uParam0, -982327190))
			{
				TASK::TASK_STAND_STILL(uParam0->f_5, -1);
			}
			break;
		case 14:
			if (func_188(*uParam0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_5, joaat("WEAPON_UNARMED"), true, 0, false, false);
			}
			break;
		case 20:
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_109))
			{
				if (!PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_5, uParam0->f_109))
				{
					vVar29 = { func_189(uParam0->f_108) };
					if (__LIB_1__::func_992(uParam0->f_5, vVar29, 1) > 9f)
					{
						if (!func_169(uParam0, 713668775))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vVar29, func_190(uParam0->f_107), -1, 0.25f, 0, 40000f);
						}
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_5, uParam0->f_109, 0, 0, true, false, 0, false, -1f, false);
					}
				}
			}
			break;
		case 21:
			vVar32 = { func_189(uParam0->f_108) };
			if (__LIB_1__::func_992(uParam0->f_5, vVar32, 1) > 4f)
			{
				if (!func_169(uParam0, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vVar32, 1f, -1, 0.25f, 0, 40000f);
				}
			}
			else if (!func_169(uParam0, 1464580341))
			{
				vVar35 = { func_191(uParam0->f_108) };
				TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_5, vVar35, 1000);
			}
			break;
		case 22:
			if (!func_169(uParam0, -2015108952))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET_XY(uParam0->f_5, Global_35, -1, 1f, 1f, 2f, 1f, false);
			}
			break;
		case 23:
			if (!func_169(uParam0, 1695144541))
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(Global_1359489.f_62))
				{
					Global_1359489.f_62 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0f, 0f, 0f, 15f, 15f, 15f);
				}
				TASK::TASK_COMPANION_AMBIENT(uParam0->f_5, Global_1359489.f_62);
			}
			break;
		case 26:
			if (!func_169(uParam0, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
			{
				TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(uParam0->f_5, Global_35, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
			}
			break;
		case 27:
			if (!((bLocal_139 || __LIB_0__::func_163(uParam0->f_5, 1120685857)) || __LIB_0__::func_163(uParam0->f_5, 474215631)))
			{
				if (!__LIB_0__::func_287(*uParam0, 3, 1) || __LIB_5__::func_943(*uParam0))
				{
					if (__LIB_1__::func_287())
					{
						func_187(uParam0);
					}
					else if (!__LIB_0__::func_163(uParam0->f_5, 1120685857))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(uParam0->f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 300f, 0, 20);
					}
				}
				else if (!__LIB_0__::func_163(uParam0->f_5, 474215631))
				{
					TASK::TASK_COWER(uParam0->f_5, -1, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
				}
			}
			break;
	}
}

void func_50(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_0__::func_287(*uParam0, 66, 0))
	{
		__LIB_0__::func_290(*uParam0, 66, 0);
		uParam0->f_7 = 0;
	}
	switch (uParam0->f_7)
	{
		case 0:
			if (bLocal_140)
			{
				bLocal_140 = false;
			}
			bVar0 = __LIB_0__::func_287(*uParam0, 25, 0);
			if (__LIB_0__::func_317() != 0 && __LIB_0__::func_317() != 4)
			{
				bVar1 = __LIB_0__::func_287(*uParam0, 65, 0);
				if ((((((Global_1360165[*uParam0 /*1157*/].f_56 || bVar1) && Global_40.f_4942[*uParam0 /*60*/].f_59 == 0) && !bVar0) && !__LIB_0__::func_287(*uParam0, 28, 0)) && !(__LIB_0__::func_699(*uParam0) || __LIB_0__::func_287(*uParam0, 44, 1))) && __LIB_1__::func_307(*uParam0, 1, 0))
				{
					if ((((((__LIB_0__::func_959(*uParam0, 0) && uParam0->f_1 != 7) && *uParam0 != Global_1357549.f_1497) && !(__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1) || __LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))) && !__LIB_0__::func_287(*uParam0, 17, 1)) && !bVar1) && !func_196(uParam0))
					{
						iVar2 = __LIB_3__::func_37(*uParam0, __LIB_0__::func_317());
					}
					else
					{
						iVar2 = __LIB_1__::func_291(*uParam0, __LIB_0__::func_317(), 1, 1);
					}
					bLocal_140 = true;
					if (__LIB_0__::func_52(iVar2) && __LIB_1__::func_201(*uParam0, iVar2))
					{
						if (iVar2 != Global_40.f_4942[*uParam0 /*60*/].f_3)
						{
							__LIB_1__::func_288(*uParam0, iVar2, 0);
						}
					}
				}
			}
			if (__LIB_0__::func_287(*uParam0, 8, 1) || Global_1360165[*uParam0 /*1157*/].f_57)
			{
				if (__LIB_0__::func_272(uParam0->f_5, 256))
				{
					PED::_UPDATE_PED_VARIATION(uParam0->f_5, false, true, true, true, false);
					__LIB_0__::func_290(*uParam0, 8, 0);
					Global_1360165[*uParam0 /*1157*/].f_57 = 0;
				}
			}
			if (Global_1360165[*uParam0 /*1157*/].f_63 != Global_40.f_4942[*uParam0 /*60*/].f_3 || bVar0)
			{
				uParam0->f_7 = 3;
			}
			else
			{
				Global_1360165[*uParam0 /*1157*/].f_56 = 0;
			}
			break;
		case 3:
			bVar0 = (__LIB_0__::func_287(*uParam0, 25, 0) || __LIB_0__::func_287(*uParam0, 65, 0));
			if ((bLocal_140 && !bVar0) && ((__LIB_0__::func_287(*uParam0, 28, 1) || __LIB_0__::func_699(*uParam0)) || __LIB_0__::func_287(*uParam0, 44, 1)))
			{
				__LIB_0__::func_37(&(uParam0->f_70));
				uParam0->f_7 = 0;
				bLocal_140 = false;
				return;
			}
			if (bVar0)
			{
				bVar3 = true;
			}
			if (!bVar3 && CAM::IS_SCREEN_FADED_OUT())
			{
				bVar3 = true;
			}
			if (!bVar3)
			{
				if (!__LIB_1__::func_472(uParam0->f_5, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					iVar4 = func_201(uParam0);
					if (!__LIB_0__::func_75(&(uParam0->f_70)))
					{
						__LIB_1__::func_283(&(uParam0->f_70), 0);
					}
					else if (__LIB_1__::func_871(&(uParam0->f_70)) >= iVar4)
					{
						bVar3 = true;
					}
				}
				else if (__LIB_0__::func_75(&(uParam0->f_70)))
				{
					__LIB_0__::func_37(&(uParam0->f_70));
					bVar3 = false;
				}
			}
			if (bVar3 && !PED::_0xA0BC8FAED8CFEB3C(uParam0->f_5))
			{
				bVar3 = false;
			}
			if (bVar3)
			{
				Global_1360165[*uParam0 /*1157*/].f_63 = Global_40.f_4942[*uParam0 /*60*/].f_3;
				if (__LIB_0__::func_959(*uParam0, 0))
				{
					if (*uParam0 != 18)
					{
						__LIB_5__::func_509(uParam0->f_5, 0, 0);
						__LIB_0__::func_288(*uParam0, 8, 0);
					}
					__LIB_0__::func_47(uParam0, 134217728);
				}
				__LIB_1__::func_558(*uParam0, uParam0->f_5, Global_1360165[*uParam0 /*1157*/].f_63, 0);
				func_204(uParam0);
				__LIB_0__::func_37(&(uParam0->f_70));
				__LIB_0__::func_290(*uParam0, 25, 0);
				__LIB_0__::func_290(*uParam0, 65, 0);
				uParam0->f_7 = 4;
			}
			break;
		case 4:
			Global_1360165[*uParam0 /*1157*/].f_56 = 0;
			uParam0->f_7 = 0;
			break;
	}
}

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	iVar0 = PERSCHAR::_0xE4C51A8A3BD1664C(uParam0->f_6);
	func_205(*uParam0, iVar0);
	func_206(*uParam0, iVar0);
	if (Global_1360165[*uParam0 /*1157*/].f_1152 != -1)
	{
		if (__LIB_5__::func_771(Global_1360165[*uParam0 /*1157*/].f_1153))
		{
			if (__LIB_6__::func_683(__LIB_0__::func_23(), Global_1360165[*uParam0 /*1157*/].f_1153))
			{
				Global_1360165[*uParam0 /*1157*/].f_1152 = -1;
				Global_1360165[*uParam0 /*1157*/].f_1153 = -15;
			}
			else if (iVar0 != Global_1360165[*uParam0 /*1157*/].f_1152)
			{
				func_209(uParam0, Global_1360165[*uParam0 /*1157*/].f_1152, Global_1360165[*uParam0 /*1157*/].f_1153, 1);
			}
		}
		else
		{
			Global_1360165[*uParam0 /*1157*/].f_1152 = -1;
			Global_1360165[*uParam0 /*1157*/].f_1153 = -15;
		}
		return;
	}
	iVar1 = __LIB_16__::func_318(*uParam0);
	if (Global_40.f_4942[*uParam0 /*60*/].f_42 != -1 || Global_40.f_4942[*uParam0 /*60*/].f_44 != -1)
	{
		iVar3 = 0;
		while (iVar3 < 60)
		{
			if (Global_40.f_4283.f_6[iVar3 /*5*/].f_4 == iVar1)
			{
				iVar2 = __LIB_16__::func_319(Global_40.f_4283.f_6[iVar3 /*5*/]);
				if (iVar2 == Global_40.f_4942[*uParam0 /*60*/].f_42)
				{
					bVar4 = true;
				}
				if (iVar2 == Global_40.f_4942[*uParam0 /*60*/].f_44)
				{
					bVar5 = true;
				}
			}
			iVar3++;
		}
	}
	if (bVar4)
	{
		if (__LIB_5__::func_771(Global_40.f_4942[*uParam0 /*60*/].f_43))
		{
			if (__LIB_6__::func_683(__LIB_0__::func_23(), Global_40.f_4942[*uParam0 /*60*/].f_43))
			{
				Global_40.f_4942[*uParam0 /*60*/].f_42 = -1;
				Global_40.f_4942[*uParam0 /*60*/].f_43 = -15;
			}
			else if (iVar0 != Global_40.f_4942[*uParam0 /*60*/].f_42)
			{
				func_209(uParam0, Global_40.f_4942[*uParam0 /*60*/].f_42, Global_40.f_4942[*uParam0 /*60*/].f_43, 0);
			}
		}
		else
		{
			Global_40.f_4942[*uParam0 /*60*/].f_42 = -1;
			Global_40.f_4942[*uParam0 /*60*/].f_43 = -15;
		}
		return;
	}
	else if (__LIB_5__::func_771(Global_40.f_4942[*uParam0 /*60*/].f_43))
	{
		PERSCHAR::_0xD95D777F828B2BBB(uParam0->f_6);
		Global_40.f_4942[*uParam0 /*60*/].f_42 = -1;
		Global_40.f_4942[*uParam0 /*60*/].f_43 = -15;
	}
	if (bVar5)
	{
		if (iVar0 != Global_40.f_4942[*uParam0 /*60*/].f_44)
		{
			PERSCHAR::_0x8AE4EFA464DAE42D(uParam0->f_6, Global_40.f_4942[*uParam0 /*60*/].f_44);
		}
	}
	else
	{
		iVar6 = __LIB_0__::func_317();
		if ((((iVar0 != 0 && iVar6 != 0) && iVar6 != 6) || (iVar0 != 5 && iVar6 == 0)) || (iVar0 != 6 && iVar6 == 6))
		{
			iVar7 = 0;
			if (*uParam0 != 24 && *uParam0 != 25)
			{
				if (iVar6 == 0)
				{
					iVar7 = 5;
					if (*uParam0 == 10)
					{
						iVar7 = 7;
					}
				}
				else if (iVar6 == 6)
				{
					iVar7 = 6;
				}
			}
			Global_40.f_4942[*uParam0 /*60*/].f_44 = iVar7;
			PERSCHAR::_0x8AE4EFA464DAE42D(uParam0->f_6, iVar7);
		}
	}
}

void func_54(var uParam0, var uParam1)
{
	if (__LIB_0__::func_287(*uParam0, 40, 0))
	{
		if (bLocal_141)
		{
			if (!__LIB_0__::func_211(*uParam0))
			{
				PERSCHAR::_0xD4B614179BCD0654(Global_1360165[*uParam0 /*1157*/].f_126);
			}
			__LIB_0__::func_234(*uParam0, 0);
			__LIB_0__::func_290(*uParam0, 40, 0);
		}
		else
		{
			func_214(*uParam0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, MISC::IS_BIT_SET(uParam1->f_6, 3));
		}
	}
}

void func_55(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	if (__LIB_1__::func_533(65536))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_123))
		{
			func_31(uParam0);
		}
		return;
	}
	if (!bLocal_138)
	{
		return;
	}
	bVar0 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_123);
	bVar1 = ((uParam0->f_1 == 3 || uParam0->f_1 == 7) || (__LIB_0__::func_287(*uParam0, 45, 1) && !__LIB_0__::func_287(*uParam0, 46, 1)));
	bVar2 = PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 344, true);
	bVar3 = PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 56, true);
	bVar4 = PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 57, true);
	bVar5 = PED::_0x84D0BF2B21862059(uParam0->f_5);
	if (bVar1 && !bVar2)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 344, true);
	}
	else if (!bVar1 && bVar2)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 344, false);
	}
	if (bVar1 && !bVar3)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 56, true);
	}
	else if (!bVar1 && bVar3)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 56, false);
	}
	if (bVar1 && !bVar4)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 57, true);
	}
	else if (!bVar1 && bVar4)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 57, false);
	}
	if (bVar0)
	{
		if (bVar1)
		{
			vVar6 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_123) };
			bVar9 = vVar6.x < (1.4f - 0.05f);
			bVar10 = (vVar6.y > (0.5f - 0.05f) && vVar6.y < (0.5f + 0.05f));
			bVar11 = PED::IS_PED_ON_MOUNT(Global_35);
			if (bVar9 && bVar11)
			{
				VOLUME::_SET_VOLUME_SCALE(uParam0->f_123, 1.4f, 1.4f, 2f);
			}
			else if (!bVar9 && !bVar11)
			{
				VOLUME::_SET_VOLUME_SCALE(uParam0->f_123, 0.2f, 0.2f, 2f);
			}
			if (bVar10 && !bVar5)
			{
				if (bVar11)
				{
					VOLUME::_SET_VOLUME_SCALE(uParam0->f_123, 1.4f, 1.4f, 2f);
				}
				else
				{
					VOLUME::_SET_VOLUME_SCALE(uParam0->f_123, 0.2f, 0.2f, 2f);
				}
			}
			else if ((!bVar10 && bVar5) && !bVar11)
			{
				VOLUME::_SET_VOLUME_SCALE(uParam0->f_123, 0.2f, 0.5f, 2f);
			}
		}
		else
		{
			func_31(uParam0);
		}
	}
	else if (bVar1)
	{
		uParam0->f_123 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 0f, 0f, 0f, 0.2f, 0.2f, 2f);
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_123))
		{
			PED::_0x7C00CFC48A782DC0(uParam0->f_123, uParam0->f_5, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
	}
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_748(iParam0, 0);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iParam0)) && !ENTITY::_0x88AD6CC10D8D35B2(__LIB_0__::func_271(iParam0)))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(__LIB_0__::func_271(iParam0), true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar0);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_6 != iParam1 || Global_40.f_4942[iParam0 /*60*/].f_3 == 0)
	{
		__LIB_1__::func_288(iParam0, __LIB_1__::func_291(iParam0, Global_40.f_4283, 1, 1), 1);
	}
	Global_40.f_4942[iParam0 /*60*/].f_6 = iParam1;
	PERSCHAR::_0x8BC555034A5A5E8C(__LIB_0__::func_59(iParam0), Global_40.f_4942[iParam0 /*60*/].f_6);
	return 1;
}

void func_71(var uParam0)
{
	if (__LIB_0__::func_317() == 8)
	{
		func_229(uParam0, 1);
	}
	else if (__LIB_5__::func_941() >= 75f)
	{
		func_229(uParam0, 1);
	}
	else if (__LIB_1__::func_198(joaat("CSTAG_PLAYER_DONATED_FOOD"), 1))
	{
		if (__LIB_5__::func_941() <= 25f)
		{
			switch (*uParam0)
			{
				case 3:
				case 4:
				case 6:
				case 9:
				case 18:
				case 19:
				case 20:
					func_229(uParam0, __LIB_1__::func_985());
					break;
				default:
					func_229(uParam0, 1);
					break;
			}
		}
		else
		{
			func_229(uParam0, 1);
		}
	}
	else if (__LIB_5__::func_941() <= 25f)
	{
		func_229(uParam0, 0);
	}
	else
	{
		func_232(uParam0, 1);
		func_232(uParam0, 0);
	}
}

bool func_73(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return false;
	}
	else if (__LIB_1__::func_871(&(uParam0->f_79)) > 5000)
	{
		if (CAM::IS_SCREEN_FADED_OUT() && __LIB_1__::func_871(&(uParam0->f_79)) < 10000)
		{
			return true;
		}
		return false;
	}
	return true;
}

int func_74(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	if ((!bParam2 && !Global_1359489.f_12) || (bParam2 && Global_1359489.f_13 < 8))
	{
		if (bParam2 && bParam3)
		{
			if (!TASK::_0xF97F462779B31786(func_235(Global_40.f_4283)))
			{
				return 0;
			}
		}
		if (PERSCHAR::_0xEB98B38CA60742D7(Global_1360165[iParam0 /*1157*/].f_1))
		{
			PERSCHAR::_0x49A8C2CD97815215(Global_1360165[iParam0 /*1157*/].f_1);
		}
		iVar0 = PERSCHAR::_0x31C70A716CAE1FEE(Global_1360165[iParam0 /*1157*/].f_1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			Global_1360165[iParam0 /*1157*/] = iVar0;
			Global_1359489.f_12 = 1;
		}
		else if (bParam2)
		{
			Global_1360165[iParam0 /*1157*/] = PERSCHAR::_0x08FC896D2CB31FCC(Global_1360165[iParam0 /*1157*/].f_1, bParam1);
			Global_1359489.f_13++;
		}
		else
		{
			Global_1360165[iParam0 /*1157*/] = PERSCHAR::_0x0CADC3A977997472(Global_1360165[iParam0 /*1157*/].f_1, bParam1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			return 0;
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, false);
			}
			ENTITY::_SET_ENTITY_SOMETHING(Global_1360165[iParam0 /*1157*/], true);
			PERSCHAR::_0xD4B614179BCD0654(Global_1360165[iParam0 /*1157*/].f_1);
		}
		PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		if (__LIB_0__::func_203(Global_1360165[iParam0 /*1157*/]))
		{
		}
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_75(var uParam0)
{
	bool bVar0;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
	{
	}
	else
	{
		if (!__LIB_0__::func_699(*uParam0))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_5))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 171, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_5, true, true);
			}
			POPULATION::_0xF74E134F40192884(uParam0->f_5, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5, joaat("REL_GANG_DUTCHS"));
			ENTITY::_SET_ENTITY_SOMETHING(uParam0->f_5, true);
		}
		if (*uParam0 != 12)
		{
			__LIB_9__::func_86(uParam0->f_5, 0);
		}
		else
		{
			__LIB_9__::func_86(uParam0->f_5, 2);
		}
		if (!__LIB_0__::func_287(*uParam0, 7, 1))
		{
			if (((((((((((*uParam0 == 14 || *uParam0 == 13) || *uParam0 == 21) || *uParam0 == 16) || *uParam0 == 19) || *uParam0 == 18) || *uParam0 == 17) || *uParam0 == 22) || *uParam0 == 4) || *uParam0 == 20) || *uParam0 == 15) || (*uParam0 == 11 && !__LIB_1__::func_25(Global_1347702[134 /*49*/].f_15, 1)))
			{
				__LIB_0__::func_288(*uParam0, 3, 0);
			}
		}
		if (!__LIB_0__::func_287(*uParam0, 19, 1))
		{
			__LIB_1__::func_27(*uParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		}
		__LIB_0__::func_290(*uParam0, 64, 1);
		switch (*uParam0)
		{
			case 14:
				AUDIO::DISABLE_PED_PAIN_AUDIO(uParam0->f_5, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 17, true);
				break;
			case 11:
				if (!__LIB_1__::func_25(Global_1347702[66 /*49*/].f_15, 1))
				{
					PED::_0x24C82EF607105FAA(uParam0->f_5, joaat("AVOID"));
				}
				if (!__LIB_1__::func_25(Global_1347702[134 /*49*/].f_15, 1) && !__LIB_0__::func_287(*uParam0, 7, 1))
				{
					WEAPON::_0x899A04AFCC725D04(uParam0->f_5, joaat("LOADOUT_DEFAULT"));
				}
				else
				{
					WEAPON::_0x899A04AFCC725D04(uParam0->f_5, joaat("LO_SADIE"));
				}
				if (__LIB_0__::func_293(45))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "SADIE_ADLER_ES");
				}
				break;
			case 13:
				if (__LIB_0__::func_293(45))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "ABIGAIL_ES");
				}
				break;
			case 7:
				if (__LIB_0__::func_293(45))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "CHARLES_SMITH_ES");
					WEAPON::_0x899A04AFCC725D04(uParam0->f_5, joaat("LO_CHARLES_ES"));
				}
				break;
			case 4:
				if (__LIB_0__::func_293(45))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "UNCLE_ES");
				}
				break;
			case 5:
				if (__LIB_1__::func_187(67))
				{
					AUDIO::_0xD47D47EFBF103FB8(uParam0->f_5, 4);
				}
				else
				{
					AUDIO::_0xD47D47EFBF103FB8(uParam0->f_5, 3);
				}
				break;
			case 10:
				if (!__LIB_1__::func_187(63))
				{
					PED::_0x24C82EF607105FAA(uParam0->f_5, joaat("KIERANTIEDUP"));
					WEAPON::_0x899A04AFCC725D04(uParam0->f_5, joaat("LOADOUT_DEFAULT"));
				}
				break;
			case 24:
			case 25:
				WEAPON::_0x899A04AFCC725D04(uParam0->f_5, joaat("LO_AGRO_PED"));
				break;
			case 0:
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 116, true);
				break;
			case 12:
				if (__LIB_0__::func_181())
				{
					PERSCHAR::_0x63AA2B8EB087886A(__LIB_0__::func_59(12), MISC::GET_HASH_KEY("COMP_RUFUS"));
				}
				else
				{
					PERSCHAR::_0x63AA2B8EB087886A(__LIB_0__::func_59(12), MISC::GET_HASH_KEY("COMP_CAIN"));
				}
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 523, true);
				break;
		}
		bLocal_139 = PED::IS_PED_GROUP_MEMBER(uParam0->f_5, __LIB_0__::func_110(), 1);
		PED::_0xE9E06EA514A69061(uParam0->f_5, joaat("COMPANION"));
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_5, true);
	}
	if (*uParam0 == 12)
	{
		__LIB_0__::func_288(*uParam0, 5, 0);
	}
	func_242(*uParam0);
	func_243(*uParam0, Global_1360165[*uParam0 /*1157*/].f_138, Global_1360165[*uParam0 /*1157*/].f_139, 1);
	if (uParam0->f_1 == 11)
	{
		uParam0->f_99 = MISC::GET_GAME_TIMER();
	}
	if (*uParam0 < 6)
	{
		uParam0->f_15 = 0;
	}
	else if (*uParam0 < 12)
	{
		uParam0->f_15 = 1;
	}
	else if (*uParam0 < 17)
	{
		uParam0->f_15 = 2;
	}
	else
	{
		uParam0->f_15 = 3;
	}
	bVar0 = __LIB_0__::func_317() == 6;
	func_244(uParam0, bVar0);
	Global_1360165[*uParam0 /*1157*/].f_134 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), Global_36);
	func_245(uParam0);
	__LIB_1__::func_283(&(uParam0->f_12), 0);
	Global_1360165[*uParam0 /*1157*/].f_70.f_14.f_12 = 1;
	__LIB_0__::func_290(*uParam0, 22, 0);
	__LIB_0__::func_290(*uParam0, 65, 0);
	Global_1360165[*uParam0 /*1157*/].f_70.f_12 = 0;
	PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 343, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 515, true);
	__LIB_1__::func_296(*uParam0, __LIB_0__::func_287(*uParam0, 60, 1), __LIB_0__::func_287(*uParam0, 61, 1), 1);
}

void func_76(var uParam0)
{
	if (__LIB_0__::func_65(uParam0, 65536))
	{
		if (bLocal_139)
		{
			if (!__LIB_5__::func_831(2048))
			{
				__LIB_1__::func_462(*uParam0);
			}
		}
	}
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, false);
	}
	func_2(uParam0, 6);
}

void func_77(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
	}
	__LIB_1__::func_296(*uParam0, 1, 0, 1);
	if (!bLocal_139)
	{
		func_187(uParam0);
	}
	func_2(uParam0, 11);
}

bool func_78(var uParam0)
{
	if (Global_1357549.f_1497 == *uParam0)
	{
		return false;
	}
	if (__LIB_7__::func_443(uParam0->f_5))
	{
		return false;
	}
	if (TASK::GET_IS_TASK_ACTIVE(uParam0->f_5, 7))
	{
		return false;
	}
	if (__LIB_0__::func_210(*uParam0) > 10000f)
	{
		return false;
	}
	return true;
}

void func_79(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
	}
	__LIB_1__::func_296(*uParam0, 1, 0, 1);
	__LIB_0__::func_37(&(uParam0->f_34));
	uParam0->f_98 = -1;
	if (__LIB_0__::func_287(*uParam0, 35, 1) && !__LIB_0__::func_287(*uParam0, 62, 1))
	{
		__LIB_4__::func_804(uParam0, 536870912);
		func_248(uParam0);
		__LIB_1__::func_175(*uParam0, 1);
		if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, true);
		}
	}
	func_2(uParam0, 12);
}

void func_80(var uParam0, bool bParam1)
{
	__LIB_0__::func_706(*uParam0);
	if (bParam1)
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_5, -1))
		{
			func_183(uParam0, 0, "Move to available");
		}
	}
	__LIB_0__::func_707(*uParam0, 1, 1, 0);
	if (__LIB_0__::func_287(*uParam0, 64, 1))
	{
		__LIB_0__::func_288(*uParam0, 52, 1);
		__LIB_0__::func_288(*uParam0, 51, 1);
		__LIB_0__::func_290(*uParam0, 64, 1);
	}
	__LIB_1__::func_30(*uParam0);
	if (bLocal_138)
	{
		TASK::_0xDF94844D474F31E5(uParam0->f_5);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
		PED::SET_PED_KEEP_TASK(uParam0->f_5, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 230, false);
		PED::_0x935CF6E42BAF7F4D(uParam0->f_5);
		PED::_0x58F7DB5BD8FA2288(uParam0->f_5);
	}
	__LIB_1__::func_296(*uParam0, 1, 1, 1);
	func_252(uParam0, uParam0->f_102 == 17);
	func_170(uParam0, 25);
	func_2(uParam0, 3);
}

bool func_83(var uParam0, bool bParam1)
{
	if (Global_1357549.f_1614 && __LIB_18__::func_605(*uParam0, 0))
	{
		if (Global_1360165[*uParam0 /*1157*/].f_134 < 10000f && !__LIB_2__::func_765(2, 0))
		{
			return true;
		}
	}
	if (__LIB_2__::func_776())
	{
		return false;
	}
	if (__LIB_0__::func_255(Global_35, 0))
	{
		return false;
	}
	if ((!Global_1935630.f_24 && PED::_0x5407B7288D0478B7(Global_35, 8) <= 0) || PED::_0x5407B7288D0478B7(Global_35, 268435456) > 0)
	{
		return false;
	}
	if (PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if ((__LIB_0__::func_287(*uParam0, 35, 1) && !__LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 0, 1)) || __LIB_0__::func_287(*uParam0, 62, 1))
	{
		return false;
	}
	if (bParam1)
	{
		if (__LIB_0__::func_210(*uParam0) > 900f)
		{
			return false;
		}
		if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uParam0->f_5, Global_35, 17))
		{
			return false;
		}
	}
	if (__LIB_0__::func_75(&(uParam0->f_67)))
	{
		if (__LIB_0__::func_265(&(uParam0->f_67)) < 10f)
		{
			return false;
		}
		else
		{
			__LIB_0__::func_37(&(uParam0->f_67));
		}
	}
	return true;
}

void func_84(var uParam0)
{
	if (__LIB_1__::func_205(uParam0->f_5, __LIB_0__::func_559(__LIB_0__::func_61()), 1, 0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 3, true);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
	PED::_0x8B1E8E35A6E814EA(uParam0->f_5, joaat("NOTACKLING"), -1082130432 /* Float: -1f */);
	__LIB_1__::func_296(*uParam0, 1, 0, 1);
	__LIB_4__::func_804(uParam0, 1073741824 /* Float: 2f */);
	func_170(uParam0, 27);
	func_2(uParam0, 23);
}

bool func_101(var uParam0)
{
	if (__LIB_0__::func_12() == 105)
	{
		if (*uParam0 == 0 || *uParam0 == 3)
		{
			if (__LIB_4__::func_60(__LIB_5__::func_436(17)) || __LIB_2__::func_378())
			{
				return true;
			}
		}
	}
	return false;
}

void func_102(var uParam0)
{
	__LIB_1__::func_296(*uParam0, 1, 0, 1);
	func_2(uParam0, 7);
}

void func_103(var uParam0)
{
	var uVar0;
	if (iLocal_143 != __LIB_0__::func_317())
	{
		iLocal_143 = __LIB_0__::func_317();
		func_272(*uParam0, &uVar0, 60);
	}
}

void func_104(var uParam0)
{
	uParam0->f_98 = -1;
	__LIB_0__::func_380(uParam0, 8192);
	__LIB_0__::func_290(*uParam0, 35, 1);
	__LIB_0__::func_290(*uParam0, 62, 1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, false);
	}
	func_2(uParam0, 2);
}

bool func_106(vector3 vParam0, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	int iVar5[4];
	if (__LIB_0__::func_86(vParam0))
	{
		return false;
	}
	uVar0 = 4;
	iVar5[0] = 16384;
	iVar5[1] = iParam4;
	return VOLUME::_0x51E52C9687FCDEEC(vParam0, iParam3, &uVar0, &iVar5, uParam5);
}

void func_107(var uParam0)
{
	if (!__LIB_0__::func_65(uParam0, 2048))
	{
		if (func_273(uParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
			{
				uParam0->f_107 = func_274(uParam0->f_120);
				func_275(uParam0->f_5, uParam0->f_120);
				__LIB_0__::func_47(uParam0, 2048);
				__LIB_0__::func_47(uParam0, 131072);
			}
		}
	}
	if (__LIB_0__::func_65(uParam0, 2048))
	{
		func_276(uParam0);
	}
	else if (__LIB_0__::func_65(uParam0, 4096))
	{
		func_277(uParam0);
	}
}

void func_108(var uParam0)
{
	bool bVar0;
	bool bVar1;
	if (!bLocal_138)
	{
		return;
	}
	if (func_278(uParam0) || (!__LIB_13__::func_481(*uParam0) && __LIB_7__::func_443(uParam0->f_5)))
	{
		if (func_188(*uParam0))
		{
			func_170(uParam0, 14);
		}
		else if (bLocal_139)
		{
			func_77(uParam0);
		}
		else if (__LIB_13__::func_481(*uParam0))
		{
			func_170(uParam0, 10);
		}
		else
		{
			POPULATION::_0xF74E134F40192884(uParam0->f_5, 1);
			func_104(uParam0);
		}
	}
	else
	{
		if (func_83(uParam0, 1))
		{
			if (__LIB_0__::func_287(*uParam0, 3, 1))
			{
				__LIB_0__::func_288(*uParam0, 35, 0);
				__LIB_0__::func_288(*uParam0, 62, 0);
			}
			else
			{
				func_84(uParam0);
				return;
			}
		}
		bVar0 = __LIB_0__::func_287(*uParam0, 35, 1);
		if (!bVar0)
		{
			if (func_279(uParam0))
			{
				__LIB_0__::func_288(*uParam0, 35, 0);
				__LIB_0__::func_288(*uParam0, 62, 0);
				bVar0 = true;
			}
		}
		if (!__LIB_0__::func_163(uParam0->f_5, -1665583462))
		{
			bVar1 = false;
			if (!func_280(uParam0->f_5))
			{
				if (!__LIB_13__::func_481(*uParam0))
				{
					if (!ENTITY::IS_ENTITY_IN_WATER(uParam0->f_5))
					{
						if (!__LIB_13__::func_549(uParam0->f_5))
						{
							bVar1 = true;
						}
					}
				}
			}
			if (bVar1)
			{
				if (((__LIB_0__::func_317() == 4 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(uParam0->f_5) != 0) || (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_5, __LIB_0__::func_559(5), true, 0) && !bLocal_141)) || BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), __LIB_1__::func_546(__LIB_0__::func_317())) < ((__LIB_1__::func_496() * __LIB_1__::func_496()) + 25f))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (bVar0)
				{
					if (!__LIB_13__::func_555(*uParam0, 400f) || __LIB_7__::func_436(*uParam0))
					{
						bVar1 = false;
					}
				}
			}
			if (!__LIB_0__::func_163(uParam0->f_5, 713668775) && !__LIB_0__::func_163(uParam0->f_5, -1665583462))
			{
				if ((!bVar1 || !func_282(uParam0)) || __LIB_0__::func_287(*uParam0, 6, 1))
				{
					if (__LIB_0__::func_75(&(uParam0->f_34)))
					{
						__LIB_0__::func_37(&(uParam0->f_34));
					}
					func_170(uParam0, 17);
					__LIB_1__::func_462(*uParam0);
				}
				else
				{
					if (!__LIB_0__::func_75(&(uParam0->f_34)))
					{
						__LIB_1__::func_283(&(uParam0->f_34), 1);
					}
					if (__LIB_1__::func_871(&(uParam0->f_34)) < 120000)
					{
						func_170(uParam0, 9);
						__LIB_1__::func_462(*uParam0);
					}
					else
					{
						__LIB_18__::func_613(*uParam0);
						func_170(uParam0, 17);
					}
				}
			}
		}
	}
}

void func_109(var uParam0)
{
	bool bVar0;
	if (!PED::IS_PED_ON_FOOT(Global_35))
	{
		return;
	}
	bVar0 = false;
	if (uParam0->f_120 > -1)
	{
		if (func_284(uParam0->f_108))
		{
			bVar0 = true;
		}
		else if (func_285(uParam0->f_5, uParam0->f_120))
		{
			func_286(uParam0->f_108, uParam0->f_120, uParam0->f_5);
		}
	}
	else
	{
		bVar0 = func_284(uParam0->f_108);
	}
	if (bVar0)
	{
		if (__LIB_13__::func_481(*uParam0))
		{
			if (func_287(uParam0->f_120) == 1)
			{
				func_170(uParam0, 21);
			}
			else
			{
				if (__LIB_0__::func_86(uParam0->f_8))
				{
					if (__LIB_0__::func_65(uParam0, 131072))
					{
						uParam0->f_8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) };
						__LIB_0__::func_380(uParam0, 131072);
					}
					else
					{
						uParam0->f_8 = { func_288(uParam0->f_108) };
					}
				}
				func_170(uParam0, 11);
			}
		}
		else
		{
			if (uParam0->f_109 == 0)
			{
				uParam0->f_109 = func_289(uParam0->f_108);
			}
			func_170(uParam0, 20);
		}
	}
	else
	{
		func_170(uParam0, 12);
	}
	if (__LIB_0__::func_210(*uParam0) > uParam0->f_114)
	{
		__LIB_0__::func_380(uParam0, 2048);
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		__LIB_0__::func_380(uParam0, 2048);
	}
	if (!__LIB_0__::func_65(uParam0, 2048))
	{
		func_183(uParam0, 0, "Leaving watch mode...");
		func_290(uParam0);
	}
}

void func_110(var uParam0)
{
	if (!PED::IS_PED_ON_FOOT(Global_35))
	{
		return;
	}
	if (__LIB_13__::func_481(*uParam0))
	{
		func_170(uParam0, 10);
	}
	else
	{
		func_170(uParam0, 2);
	}
	if (!TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(uParam0->f_105) || __LIB_0__::func_210(*uParam0) > uParam0->f_114)
	{
		__LIB_0__::func_380(uParam0, 4096);
	}
	if (!__LIB_0__::func_65(uParam0, 4096))
	{
		func_290(uParam0);
	}
}

void func_119(var uParam0)
{
	uParam0->f_3 = 0;
}

bool func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	iVar0 = __LIB_0__::func_61();
	if (__LIB_0__::func_20(iVar0))
	{
		iVar1 = __LIB_0__::func_559(iVar0);
		if (VOLUME::_DOES_VOLUME_EXIST(iVar1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_142(var uParam0)
{
	if (uParam0->f_1 != 6 && !__LIB_5__::func_831(8388608))
	{
		if (PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 503, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 503, false);
		}
	}
	if (__LIB_5__::func_831(8388608) && !PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 503, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 503, true);
	}
	if (__LIB_7__::func_37(-1))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
	}
	if (Global_1360165[*uParam0 /*1157*/].f_1152 == 3)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 333, true);
	}
	if (__LIB_5__::func_771(Global_40.f_6563.f_475))
	{
		if (__LIB_1__::func_426(Global_40.f_6563.f_475, 1))
		{
			Global_40.f_6563.f_475 = -15;
		}
		else
		{
			PED::_0x633F83B301C87994(uParam0->f_5, 131);
		}
	}
	if (uParam0->f_1 == 6 || __LIB_0__::func_210(*uParam0) < 625f)
	{
		func_309(uParam0);
		func_310(uParam0);
	}
	if (__LIB_0__::func_858(*uParam0, 32))
	{
		if (!__LIB_0__::func_65(uParam0, 1073741824 /* Float: 2f */))
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_ENTER")))
			{
				if ((((__LIB_1__::func_992(Global_1360165[*uParam0 /*1157*/].f_70, Global_36, 1) < 4f && __LIB_7__::func_437(Global_35, Global_1360165[*uParam0 /*1157*/].f_70, 0)) && __LIB_1__::func_992(__LIB_0__::func_398(7), Global_36, 1) > 4f) && PED::_GET_RIDER_OF_MOUNT(Global_1360165[*uParam0 /*1157*/].f_70, true) == 0) && !PED::IS_PED_ON_MOUNT(Global_35))
				{
					__LIB_1__::func_424(40, MISC::GET_HASH_KEY(__LIB_1__::func_464(*uParam0, 0)), 1);
					__LIB_0__::func_47(uParam0, 1073741824 /* Float: 2f */);
				}
			}
		}
	}
	if (func_315(*uParam0))
	{
		if (func_316(*uParam0))
		{
			if (!__LIB_0__::func_163(Global_1360165[*uParam0 /*1157*/].f_70, 1041577989))
			{
				TASK::TASK_HORSE_ACTION(Global_1360165[*uParam0 /*1157*/].f_70, 2, 0, 0);
			}
			func_318(38, MISC::GET_HASH_KEY(__LIB_0__::func_853(*uParam0, 0)), MISC::GET_HASH_KEY(__LIB_1__::func_464(*uParam0, 0)), 1);
		}
		else if (!__LIB_0__::func_65(uParam0, 536870912))
		{
			func_318(39, MISC::GET_HASH_KEY(__LIB_0__::func_853(*uParam0, 0)), MISC::GET_HASH_KEY(__LIB_1__::func_464(*uParam0, 0)), 1);
			__LIB_0__::func_47(uParam0, 536870912);
		}
	}
}

void func_145(var uParam0)
{
	__LIB_0__::func_289(*uParam0, 2, bLocal_139);
	__LIB_6__::func_919(*uParam0);
}

float func_146()
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 < 4 || iVar0 > 19)
	{
		return 0.8f;
	}
	else if (iVar0 > 17)
	{
		return 0.7f;
	}
	else if (iVar0 > 12)
	{
		return 0.5f;
	}
	return 0.3f;
}

int func_149(var uParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "companion_manager_command"))
	{
		return DECORATOR::DECOR_GET_INT(uParam0->f_5, "companion_manager_command");
	}
	return 0;
}

void func_150(var uParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "companion_manager_command"))
	{
		DECORATOR::DECOR_REMOVE(uParam0->f_5, "companion_manager_command");
	}
}

int func_152(var uParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "companion_manager_watch_mode"))
	{
		return DECORATOR::DECOR_GET_INT(uParam0->f_5, "companion_manager_watch_mode");
	}
	return -1;
}

void func_153(var uParam0)
{
	DECORATOR::DECOR_REMOVE(uParam0->f_5, "companion_manager_watch_mode");
}

bool func_155(var uParam0)
{
	if (__LIB_0__::func_858(*uParam0, 1024))
	{
		return true;
	}
	return false;
}

bool func_158(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_271(iParam0);
	if (bParam1)
	{
		if (__LIB_0__::func_272(iVar0, 0))
		{
			return false;
		}
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 156, true))
	{
		return true;
	}
	return false;
}

int func_160(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	if (__LIB_0__::func_858(iParam0, 128))
	{
		__LIB_18__::func_613(iParam0);
		__LIB_0__::func_213(iParam0, 128, 0);
	}
	iVar0 = __LIB_0__::func_177(iParam0);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_13)
	{
		case 2:
			if (__LIB_0__::func_287(iParam0, 42, 1))
			{
				__LIB_0__::func_290(iParam0, 42, 1);
				bVar1 = false;
				bVar2 = __LIB_7__::func_436(iParam0);
				if (__LIB_0__::func_272(iVar0, 0))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					if (!bVar2)
					{
						vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
						vVar6 = { ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/], true, false) };
						fVar9 = BUILTIN::VDIST2(vVar3, vVar6);
						if (fVar9 < (8f * 8f))
						{
							return 1;
						}
						else if (fVar9 > 2500f)
						{
							Global_1360165[iParam0 /*1157*/].f_70.f_13 = 6;
						}
						else
						{
							Global_1360165[iParam0 /*1157*/].f_70.f_13 = 7;
						}
					}
					else if (PED::_GET_RIDER_OF_MOUNT(iVar0, false) == Global_35)
					{
						if (!__LIB_1__::func_16(iVar0))
						{
							Global_1360165[iParam0 /*1157*/].f_123 = iVar0;
						}
						if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(7)))
						{
							__LIB_7__::func_442(iParam0, __LIB_0__::func_398(7), 0, 0);
						}
						else
						{
							__LIB_13__::func_554(iParam0);
							__LIB_0__::func_288(iParam0, 40, 1);
							Global_1360165[iParam0 /*1157*/].f_70.f_13 = 4;
						}
					}
					else
					{
						__LIB_0__::func_288(iParam0, 40, 1);
						Global_1360165[iParam0 /*1157*/].f_70.f_13 = 4;
					}
				}
				else
				{
					__LIB_0__::func_288(iParam0, 40, 1);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 4;
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_272(iVar0, 0))
			{
				__LIB_0__::func_213(iParam0, 64, 1);
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 6;
			}
			else
			{
				iVar0 = func_214(iParam0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_14.f_12 = 1;
				if (func_321(&(Global_1360165[iParam0 /*1157*/].f_70.f_14), Global_36, Global_1900383[0 /*45*/].f_38, 0, 1065353216 /* Float: 1f */))
				{
					ENTITY::SET_ENTITY_COORDS(iVar0, Global_1360165[iParam0 /*1157*/].f_70.f_14.f_3.f_3, true, false, true, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 7;
				}
				else if (Global_1360165[iParam0 /*1157*/].f_70.f_14.f_1)
				{
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
				}
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
				if (!__LIB_13__::func_555(iParam0, 1120403456 /* Float: 100f */))
				{
					TASK::TASK_GO_TO_WHISTLE(iVar0, Global_1360165[iParam0 /*1157*/], 0);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 8;
				}
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
			}
			break;
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (__LIB_13__::func_555(iParam0, 1120403456 /* Float: 100f */))
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
					return 1;
				}
				else if (!__LIB_0__::func_163(iVar0, 2043986356))
				{
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
				}
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
			}
			break;
	}
	return 0;
}

char* func_163()
{
	int iVar0;
	char* sVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			sVar1 = "COMPANION_FIGHT_EARLY_FLEE";
			break;
		case 1:
			sVar1 = "WHATS_YOUR_PROBLEM";
			break;
		case 2:
			sVar1 = "COMPANION_FIGHT_EARLY_REACTION";
			break;
		default:
			sVar1 = "COMPANION_FIGHT_EARLY_CALLOUT";
			break;
	}
	return sVar1;
}

char* func_166()
{
	int iVar0;
	char* sVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			sVar1 = "ALLY_TAUNT_ENEMY";
			break;
		case 1:
			sVar1 = "GENERIC_CURSE_HIGH";
			break;
		case 2:
			sVar1 = "ALLY_UNDER_FIRE_NEAR";
			break;
		default:
			sVar1 = "GENERIC_CURSE_MED";
			break;
	}
	return sVar1;
}

bool func_167(int iParam0)
{
	return __LIB_0__::func_287(iParam0, 33, 1);
}

bool func_169(var uParam0, int iParam1)
{
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_5, iParam1, true) == 1)
	{
		return true;
	}
	return false;
}

void func_170(var uParam0, int iParam1)
{
	if (iParam1 == uParam0->f_102)
	{
		return;
	}
	uParam0->f_102 = iParam1;
}

Vector3 func_172(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	__LIB_1__::func_822(&vVar0, &uVar3);
	return vVar0 + func_324(iParam0);
}

void func_183(var uParam0, bool bParam1, char* sParam2)
{
	uParam0->f_103 = uParam0->f_102;
	func_170(uParam0, 0);
	__LIB_0__::func_712(*uParam0, bParam1, sParam2);
}

int func_186(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
	}
	bVar0 = false;
	if (func_330(iParam1) == iParam0)
	{
	}
	else
	{
		__LIB_7__::func_442(iParam0, iParam1, bParam3, 0);
		bVar0 = true;
	}
	if (bParam2)
	{
		if (!__LIB_0__::func_211(iParam0))
		{
			if (!func_331(iParam0, bParam4, 1, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	if (!bVar0)
	{
		__LIB_1__::func_547(iParam1, iParam0);
	}
	return 1;
}

void func_187(var uParam0)
{
	__LIB_1__::func_551(*uParam0, 0);
	bLocal_139 = true;
}

bool func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, true, 0, false))
			{
				if ((iVar1 != joaat("OBJECT_1") && iVar1 != joaat("OBJECT_2")) && iVar1 != joaat("WEAPON_UNARMED"))
				{
					return true;
				}
			}
		}
	}
	return false;
}

Vector3 func_189(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0f, 0f, 0f;
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		return 0f, 0f, 0f;
	}
	return Global_1359489.f_63[iParam0 /*24*/].f_4;
}

float func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1f;
		case 2:
			return 2f;
	}
	return 1f;
}

Vector3 func_191(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0f, 0f, 0f;
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		return 0f, 0f, 0f;
	}
	return Global_1359489.f_63[iParam0 /*24*/].f_7;
}

bool func_196(var uParam0)
{
	switch (*uParam0)
	{
		case 7:
			if (__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1) && !__LIB_1__::func_25(Global_1835011[59 /*74*/].f_1, 1))
			{
				return true;
			}
			break;
		case 4:
			if (__LIB_1__::func_198(joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"), 1))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_201(var uParam0)
{
	float fVar0;
	float fVar1;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_5, 0) || !uParam0->f_11)
	{
		fVar0 = 12500f;
	}
	else
	{
		fVar0 = 7500f;
	}
	fVar1 = BUILTIN::SQRT(__LIB_0__::func_94(uParam0->f_5, Global_36, 1));
	fVar0 = (fVar0 / fVar1);
	return BUILTIN::ROUND(fVar0);
}

void func_204(var uParam0)
{
	switch (*uParam0)
	{
		case 7:
			if (Global_40.f_4942[*uParam0 /*60*/].f_3 == -1341683964 || Global_40.f_4942[*uParam0 /*60*/].f_3 == 1484386316)
			{
				__LIB_5__::func_414(*uParam0, 8388608, 1);
			}
			break;
		case 14:
			if (Global_40.f_4942[*uParam0 /*60*/].f_3 == -1341683964)
			{
				__LIB_5__::func_414(*uParam0, 16777216, 1);
			}
			else if (Global_40.f_4942[*uParam0 /*60*/].f_3 == 1484386316 || Global_40.f_4942[*uParam0 /*60*/].f_3 == 1254970547)
			{
				__LIB_5__::func_414(*uParam0, 16777216, 0);
				__LIB_0__::func_494(*uParam0, uParam0->f_5, 1);
				PED::_0xA2F8B3B5FEDFC100(Global_1360165[*uParam0 /*1157*/], 622113465);
			}
			break;
		case 4:
			if (__LIB_0__::func_293(45))
			{
				if (__LIB_1__::func_198(joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"), 1))
				{
					__LIB_5__::func_414(*uParam0, 8192, 1);
				}
				else
				{
					__LIB_5__::func_414(*uParam0, 8192, 0);
					__LIB_0__::func_494(*uParam0, uParam0->f_5, 1);
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[*uParam0 /*1157*/], 1544915253);
				}
				if (Global_40.f_4942[*uParam0 /*60*/].f_3 == -1341683964 || Global_40.f_4942[*uParam0 /*60*/].f_3 == 867156718)
				{
					__LIB_5__::func_414(*uParam0, 67108864, 1);
				}
				else
				{
					__LIB_5__::func_414(*uParam0, 67108864, 0);
					__LIB_0__::func_494(*uParam0, uParam0->f_5, 1);
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[*uParam0 /*1157*/], -271415321);
				}
			}
			break;
	}
}

void func_205(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	if (iParam1 == 4 && !(__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1) || __LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1)))
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		iVar1 = CLOCK::GET_CLOCK_MINUTES();
		if ((iVar0 >= 22 || iVar0 < 5) || (iVar0 == 5 && iVar1 <= 59))
		{
			iVar2 = __LIB_0__::func_23();
			if (iVar0 >= 22)
			{
				__LIB_1__::func_446(&iVar2, 0, 0, 0, 1, 0, 0, 1);
			}
			__LIB_0__::func_467(&iVar2, 6);
			__LIB_0__::func_468(&iVar2, 0);
			func_344(iVar2, &uVar3, &iVar4, &iVar5, &uVar6, &uVar7, &uVar8);
			if (iVar4 > 0 || iVar5 > 0)
			{
				__LIB_7__::func_22(iParam0, 0, iVar4, iVar5, 0, 0, 1);
			}
		}
	}
}

void func_206(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (iParam1 == 6 || iParam1 == 5)
	{
		iVar0 = __LIB_0__::func_317();
		iVar1 = __LIB_16__::func_320(iParam0);
		bVar2 = false;
		bVar3 = false;
		if (iVar0 != 6 && iParam1 == 6)
		{
			if (iVar1 == 6)
			{
				bVar3 = true;
			}
			bVar2 = true;
		}
		else if (iVar0 != 0 && iParam1 == 5)
		{
			if (iVar1 == 5)
			{
				bVar3 = true;
			}
			bVar2 = true;
		}
		if (bVar2)
		{
			__LIB_7__::func_22(iParam0, 0, 0, 0, 0, bVar3, 0);
		}
	}
}

void func_209(var uParam0, var uParam1, int iParam2, int iParam3)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	func_348(Global_1899515, iParam2, &uVar0, &uVar1, &uVar2, &iVar3, &uVar4, &uVar5);
	iVar6 = __LIB_0__::func_42(iParam2);
	iVar7 = __LIB_0__::func_41(iParam2);
	if ((iVar6 == __LIB_0__::func_42(Global_1899515) && iVar7 == __LIB_0__::func_41(Global_1899515)) && iVar3 == 0)
	{
		return;
	}
	PERSCHAR::_0xA4DCB3F0DD7488BD(uParam0->f_6, uParam1, iVar7, iVar6, iVar3);
}

int func_214(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_352(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, bParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

void func_229(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_8__::func_947(*uParam0, joaat("COMMENT_ON_FOOD_GOOD"), 0, 0);
		__LIB_17__::func_391(uParam0, 2);
		func_232(uParam0, 0);
	}
	else
	{
		__LIB_8__::func_947(*uParam0, joaat("COMMENT_ON_FOOD_BAD"), 0, 0);
		__LIB_17__::func_391(uParam0, 1);
		func_232(uParam0, 1);
	}
}

void func_232(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_6__::func_793(*uParam0, joaat("COMMENT_ON_FOOD_GOOD"));
		func_360(uParam0, 2);
	}
	else
	{
		__LIB_6__::func_793(*uParam0, joaat("COMMENT_ON_FOOD_BAD"));
		func_360(uParam0, 1);
	}
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -1092196885;
		case 6:
			return 837806200;
		case 0:
			return 1670677840;
		case 2:
			return -945092648;
		case 1:
			return -437500449;
		case 4:
			return -1701309802;
		case 3:
			return -1644068043;
		case 7:
			return -1904006265;
		case 8:
			return 1047384062;
		default:
			break;
	}
	return 0;
}

void func_242(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	vVar0 = { Global_40.f_4942[iParam0 /*60*/].f_8 };
	if (__LIB_0__::func_30(vVar0.x))
	{
		iVar3 = vVar0.y;
		if (iVar3 != -15 && __LIB_3__::func_77(iVar3))
		{
			__LIB_6__::func_793(iParam0, vVar0.x);
		}
		else if (vVar0.z)
		{
		}
		else if (__LIB_6__::func_816(iParam0, vVar0.x))
		{
		}
	}
	iVar4 = 0;
	while (iVar4 < 10)
	{
		vVar0 = { Global_40.f_4942[iParam0 /*60*/].f_11[iVar4 /*3*/] };
		if (__LIB_0__::func_30(vVar0.x))
		{
			iVar5 = vVar0.y;
			if (iVar5 != -15 && __LIB_3__::func_77(iVar5))
			{
				__LIB_6__::func_793(iParam0, vVar0.x);
			}
			else if (vVar0.z)
			{
			}
			else if (__LIB_6__::func_816(iParam0, vVar0.x))
			{
			}
		}
		iVar4++;
	}
}

void func_243(int iParam0, var uParam1, float fParam2, bool bParam3)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	if (!__LIB_0__::func_272(iVar0, 0))
	{
		return;
	}
	PED::_0x85F500F4E24CA43E(iVar0, uParam1);
	if (bParam3)
	{
		PED::_0x9B9B9FA0EA283E3D(iVar0, uParam1);
	}
	PED::_0xEC60D1D225BC50AA(iVar0, fParam2);
}

void func_244(var uParam0, bool bParam1)
{
	switch (*uParam0)
	{
		case 20:
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("JAVIER"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("GRIMSHAW"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("JAVIER"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("GRIMSHAW"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("MICAH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("DUTCH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("BILL"), 2, bParam1);
			break;
		case 13:
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("MICAH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("BILL"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("JAVIER"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("JOE"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("MICAH"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("CLEET"), 1, bParam1);
			break;
		case 7:
			MISC::_0x0358B8A41916C613(joaat("CHARLES"), joaat("MICAH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("CHARLES"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("CHARLES"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("CHARLES"), joaat("BILL"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("CHARLES"), joaat("JOE"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("CHARLES"), joaat("MICAH"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("CHARLES"), joaat("CLEET"), 1, bParam1);
			break;
		case 0:
			MISC::_0x0358B8A41916C613(joaat("DUTCH"), joaat("ABIGAIL"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("DUTCH"), joaat("JOHN"), 2, bParam1);
			break;
		case 19:
			MISC::_0x0358B8A41916C613(joaat("GRIMSHAW"), joaat("KAREN"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("GRIMSHAW"), joaat("KAREN"), 1, bParam1);
			break;
		case 14:
			MISC::_0x0358B8A41916C613(joaat("JACK"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JACK"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JACK"), joaat("JOE"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JACK"), joaat("CLEET"), 1, bParam1);
			break;
		case 2:
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("ABIGAIL"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("JOHN"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("SADIE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("JACK"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("CHARLES"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("ABIGAIL"), 1, bParam1);
			break;
		case 1:
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("MICAH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("BILL"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("DUTCH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("DUTCH"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("MICAH"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JOHN"), joaat("BILL"), 1, bParam1);
			break;
		case 15:
			MISC::_0x0358B8A41916C613(joaat("MARYBETH"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("MARYBETH"), joaat("MICAH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("MARYBETH"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("MARYBETH"), joaat("CLEET"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("MARYBETH"), joaat("MICAH"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("MARYBETH"), joaat("JOE"), 1, bParam1);
			break;
		case 11:
			MISC::_0x0358B8A41916C613(joaat("SADIE"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("SADIE"), joaat("MICAH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("SADIE"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("SADIE"), joaat("CLEET"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("SADIE"), joaat("MICAH"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("SADIE"), joaat("JOE"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("SADIE"), joaat("BILL"), 1, bParam1);
			break;
		case 22:
			MISC::_0x0358B8A41916C613(joaat("TILLY"), joaat("CLEET"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("TILLY"), joaat("MICAH"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("TILLY"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("TILLY"), joaat("CLEET"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("TILLY"), joaat("MICAH"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("TILLY"), joaat("JOE"), 1, bParam1);
			break;
		case 3:
		case 4:
		case 6:
		case 17:
		case 18:
		case 21:
		case 23:
			break;
	}
}

void func_245(var uParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
}

void func_248(var uParam0)
{
	if (Global_1359489.f_673 == -1)
	{
		Global_1359489.f_673 = MISC::GET_RANDOM_INT_IN_RANGE(1, 9);
	}
	uParam0->f_101 = Global_1359489.f_673;
	Global_1359489.f_673++;
	if (Global_1359489.f_673 > 8)
	{
		Global_1359489.f_673 = 1;
	}
}

void func_252(var uParam0, bool bParam1)
{
	if (!TASK::GET_IS_TASK_ACTIVE(uParam0->f_5, 7) && !__LIB_0__::func_163(uParam0->f_5, 258748395))
	{
		if (bParam1)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_5, true, false);
		}
		PERSCHAR::_0x631CD2D77FDC0316(__LIB_0__::func_748(*uParam0, 0));
	}
}

bool func_272(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[64];
	char cVar16[64];
	char* sVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	Var0 = Global_1357549.f_576;
	iVar5 = __LIB_3__::func_61(iParam0);
	iVar6 = -1651099034;
	iVar7 = iVar5;
	iVar26 = __LIB_0__::func_61();
	iVar28 = __LIB_0__::func_317();
	iVar29 = __LIB_0__::func_59(iParam0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		iParam2 = 60;
	}
	iVar30 = *uParam1;
	iVar31 = (iVar30 + iParam2);
	if (iVar31 >= 60)
	{
		iVar31 = 59;
	}
	*uParam1 = iVar30;
	while (*uParam1 <= iVar31)
	{
		if (Global_40.f_4283.f_6[*uParam1 /*5*/] == 176656832)
		{
			return true;
		}
		iVar32 = __LIB_18__::func_933(Global_40.f_4283.f_6[*uParam1 /*5*/]);
		Global_1357549.f_578 = __LIB_16__::func_278(Global_40.f_4283.f_6[*uParam1 /*5*/], &iVar32);
		Var0.f_1 = Global_1357549.f_578;
		iVar27 = __LIB_16__::func_393(Global_40.f_4283.f_6[*uParam1 /*5*/]);
		if (iVar27 != iVar28)
		{
		}
		else
		{
			iVar25 = __LIB_1__::func_953(iVar27);
			if (iVar25 == -1)
			{
				iVar25 = iVar26;
			}
			sVar24 = __LIB_16__::func_279(iVar25);
			Var0.f_3 = iVar7;
			if (__LIB_1__::func_64(Var0, iVar6, &cVar8, 0))
			{
				StringCopy(&cVar16, sVar24, 64);
				StringConCat(&cVar16, "/", 64);
				StringConCat(&cVar16, &cVar8, 64);
				Global_40.f_4942[iParam0 /*60*/].f_51 = { cVar16 };
				if (!__LIB_0__::func_287(iParam0, 17, 1))
				{
					PERSCHAR::_0x187D65F3AEC5D679(iVar29, &(Global_40.f_4942[iParam0 /*60*/].f_51));
				}
				Global_1360165[iParam0 /*1157*/].f_47 = 0;
				Global_1360165[iParam0 /*1157*/].f_56 = 1;
				return true;
			}
		}
		*uParam1++;
	}
	return *uParam1 >= 60;
}

bool func_273(var uParam0)
{
	int iVar0;
	if (uParam0->f_120 > -1)
	{
		if (func_388(uParam0->f_5, uParam0->f_120))
		{
			if (func_389(&(uParam0->f_115), uParam0->f_5, uParam0->f_120))
			{
				return true;
			}
		}
		else
		{
			uParam0->f_120 = -1;
		}
	}
	else
	{
		iVar0 = func_390(uParam0->f_5);
		if (iVar0 > -1)
		{
			uParam0->f_120 = iVar0;
			__LIB_4__::func_416(&(uParam0->f_115));
		}
	}
	return false;
}

int func_274(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return -1;
	}
	if (!Global_1359489.f_63.f_242[iParam0 /*18*/].f_15)
	{
		return -1;
	}
	return Global_1359489.f_63.f_242[iParam0 /*18*/];
}

void func_275(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	if (iParam1 < 0 || iParam1 >= 3)
	{
		return;
	}
	if (!Global_1359489.f_63.f_242[iParam1 /*18*/].f_15)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!Global_1359489.f_63.f_242[iParam1 /*18*/].f_16)
	{
		vVar0 = { Global_1359489.f_63.f_242[iParam1 /*18*/].f_2 };
		iVar3 = Global_1359489.f_63.f_242[iParam1 /*18*/];
		iVar4 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_7;
		uVar5 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_9;
		uVar6 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_12;
		uVar7 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_17;
		func_392(iVar3, iVar4, uVar5, 0f, 0f, 0f, vVar0, 1069547520 /* Float: 1.5f */, 1075838976 /* Float: 2.5f */, 1056964608 /* Float: 0.5f */, uVar6, iParam1, 0, uVar7);
		Global_1359489.f_63.f_242[iParam1 /*18*/].f_16 = 1;
		Global_1359489.f_63.f_242[iParam1 /*18*/].f_8++;
	}
	else
	{
		Global_1359489.f_63.f_242[iParam1 /*18*/].f_8++;
	}
}

void func_276(var uParam0)
{
	vector3 vVar0;
	func_393(uParam0);
	__LIB_1__::func_296(*uParam0, 1, 0, 1);
	if (bLocal_138)
	{
		vVar0 = { func_191(uParam0->f_120) };
		if (!__LIB_0__::func_86(vVar0))
		{
			TASK::TASK_LOOK_AT_COORD(uParam0->f_5, vVar0, 10000, 0, 51, 0);
		}
	}
	if (func_394(uParam0->f_108))
	{
		uParam0->f_110 = { func_395(uParam0->f_108) };
		__LIB_1__::func_283(&(uParam0->f_19), 1);
		__LIB_4__::func_804(uParam0, 32768);
	}
	uParam0->f_114 = func_396(uParam0->f_108);
	uParam0->f_109 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	func_2(uParam0, 18);
}

void func_277(var uParam0)
{
	if (bLocal_138)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
	}
	uParam0->f_105 = -1650437862;
	func_2(uParam0, 19);
}

bool func_278(var uParam0)
{
	vector3 vVar0;
	var uVar3;
	__LIB_1__::func_822(&vVar0, &uVar3);
	if (__LIB_0__::func_94(uParam0->f_5, vVar0, 1) < 6.5f)
	{
		return true;
	}
	return false;
}

bool func_279(var uParam0)
{
	vector3 vVar0;
	if (PED::_0x29FCE825613FEFCA(uParam0->f_5, 1000))
	{
		return true;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) };
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, vVar0, 7.5f))
	{
		return true;
	}
	if (MISC::IS_BULLET_IN_AREA(vVar0, 3f, true))
	{
		return true;
	}
	return false;
}

bool func_280(int iParam0)
{
	return __LIB_5__::func_895(iParam0, 4);
}

bool func_282(var uParam0)
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar4;
	if (__LIB_13__::func_549(uParam0->f_5))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1360165[*uParam0 /*1157*/].f_70) || (!__LIB_5__::func_831(512) && !(__LIB_13__::func_555(*uParam0, 400f) && !__LIB_7__::func_436(*uParam0))))
	{
		__LIB_1__::func_822(&vVar0, &uVar3);
		vVar4 = { vVar0 };
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), vVar4) < IntToFloat(func_398(__LIB_0__::func_317())))
		{
			return false;
		}
	}
	return true;
}

bool func_284(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return false;
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		return false;
	}
	return Global_1359489.f_63[iParam0 /*24*/].f_15;
}

bool func_285(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 3)
	{
		return false;
	}
	if (!Global_1359489.f_63.f_242[iParam1 /*18*/].f_15)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(iParam0))
	{
		if (Global_1359489.f_63.f_242[iParam1 /*18*/].f_14 != 0 && Global_1359489.f_63.f_242[iParam1 /*18*/].f_14 != 1)
		{
			return false;
		}
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(__LIB_2__::func_825(iParam0)) <= Global_1359489.f_63.f_242[iParam1 /*18*/].f_11)
		{
			return true;
		}
	}
	else
	{
		if (Global_1359489.f_63.f_242[iParam1 /*18*/].f_13 != 0 && Global_1359489.f_63.f_242[iParam1 /*18*/].f_13 != 1)
		{
			return false;
		}
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0) <= Global_1359489.f_63.f_242[iParam1 /*18*/].f_10)
		{
			return true;
		}
	}
	return false;
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	int iVar7;
	vector3 vVar8;
	vector3 vVar11;
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 3)
	{
		return;
	}
	if (!Global_1359489.f_63.f_242[iParam1 /*18*/].f_15)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	if (Global_1359489.f_63[iParam0 /*24*/].f_15 || Global_1359489.f_63[iParam0 /*24*/].f_18)
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam2, true, false) };
	vVar3 = { Global_1359489.f_63[iParam0 /*24*/].f_7 };
	uVar6 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_6;
	iVar7 = Global_1359489.f_63[iParam0 /*24*/].f_1;
	vVar8 = { func_400(iParam1, iParam0, vVar0, vVar3, uVar6) };
	vVar11 = { __LIB_0__::func_173(vVar3 - vVar8) };
	Global_1359489.f_63[iParam0 /*24*/].f_4 = { vVar8 };
	Global_1359489.f_63[iParam0 /*24*/].f_10 = __LIB_3__::func_745(MISC::GET_HEADING_FROM_VECTOR_2D(vVar11.x, vVar11.y));
	Global_1359489.f_63[iParam0 /*24*/].f_3 = __LIB_3__::func_801(iVar7);
	Global_1359489.f_63[iParam0 /*24*/].f_18 = 1;
}

int func_287(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return -1;
	}
	if (!Global_1359489.f_63.f_242[iParam0 /*18*/].f_15)
	{
		return -1;
	}
	return Global_1359489.f_63.f_242[iParam0 /*18*/].f_14;
}

Vector3 func_288(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { __LIB_0__::func_173(Global_1359489.f_63[iParam0 /*24*/].f_4 - Global_1359489.f_63[iParam0 /*24*/].f_7) };
	vVar3 = { Global_1359489.f_63[iParam0 /*24*/].f_4 + Vector(5f, 5f, 5f) * vVar0 };
	fVar6 = 0f;
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &fVar6, false))
	{
		vVar3.f_2 = fVar6;
	}
	return vVar3;
}

int func_289(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0;
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		return 0;
	}
	return Global_1359489.f_63[iParam0 /*24*/].f_23;
}

void func_290(var uParam0)
{
	if (uParam0->f_1 == 18 || uParam0->f_1 == 19)
	{
		if (uParam0->f_108 > -1)
		{
			func_403(uParam0->f_108);
		}
		uParam0->f_108 = -1;
		uParam0->f_120 = -1;
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_109 = 0;
		__LIB_0__::func_380(uParam0, 131072);
		__LIB_4__::func_803(uParam0, 32768);
	}
	if (bLocal_139)
	{
		func_77(uParam0);
	}
	else if (__LIB_7__::func_443(uParam0->f_5))
	{
		func_104(uParam0);
	}
	else
	{
		func_79(uParam0);
	}
}

void func_309(var uParam0)
{
	if (__LIB_5__::func_831(128))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 62, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 63, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 49, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
	}
	if (__LIB_0__::func_287(*uParam0, 50, 0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 62, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 63, true);
	}
	if (__LIB_0__::func_287(*uParam0, 48, 0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
	}
	if ((__LIB_2__::func_776() || __LIB_0__::func_287(*uParam0, 49, 0)) || __LIB_5__::func_846() == 0)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 49, true);
	}
	if (__LIB_5__::func_831(4194304))
	{
		PED::_0xEC60D1D225BC50AA(uParam0->f_5, 0f);
		__LIB_0__::func_288(*uParam0, 59, 1);
	}
	else if (__LIB_0__::func_287(*uParam0, 59, 1))
	{
		PED::_0xEC60D1D225BC50AA(uParam0->f_5, Global_1360165[*uParam0 /*1157*/].f_139);
		__LIB_0__::func_290(*uParam0, 59, 1);
	}
	if (__LIB_0__::func_287(*uParam0, 56, 0))
	{
		if (__LIB_0__::func_75(&(Global_1359489.f_40)) && __LIB_0__::func_265(&(Global_1359489.f_40)) < 120f)
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
		}
		else
		{
			__LIB_0__::func_290(*uParam0, 56, 1);
		}
	}
	if (__LIB_0__::func_287(*uParam0, 57, 0))
	{
		if (__LIB_0__::func_75(&(Global_1359489.f_43)) && __LIB_0__::func_265(&(Global_1359489.f_43)) < 10f)
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
		}
		else
		{
			__LIB_0__::func_290(*uParam0, 57, 1);
		}
	}
}

void func_310(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	if (PED::_0x947E43F544B6AB34(uParam0->f_5, PLAYER::PLAYER_ID(), 34, 60000))
	{
		PED::_0xEBD49472BCCF7642(uParam0->f_5, PLAYER::PLAYER_ID());
		PED::_0x19173C3F15367B54(uParam0->f_5, PLAYER::PLAYER_ID(), 60000);
		PED::_0x5708EDD71B50C008(uParam0->f_5, PLAYER::PLAYER_ID(), 60000);
	}
	bVar0 = __LIB_0__::func_287(*uParam0, 53, 0);
	bVar1 = __LIB_0__::func_287(*uParam0, 52, 0);
	bVar2 = __LIB_0__::func_287(*uParam0, 55, 0);
	bVar3 = __LIB_0__::func_287(*uParam0, 51, 0);
	bVar4 = __LIB_5__::func_831(64);
	bVar5 = __LIB_5__::func_831(1024);
	bVar6 = __LIB_0__::func_287(*uParam0, 54, 0);
	bVar7 = ((*uParam0 == 16 && __LIB_0__::func_272(__LIB_0__::func_271(0), 0)) && __LIB_0__::func_232(uParam0->f_5, __LIB_0__::func_271(0), 1) < 64f);
	bVar8 = PED::_IS_PED_USING_SCENARIO_HASH(uParam0->f_5, joaat("WORLD_HUMAN_PEE"));
	bVar9 = false;
	if (__LIB_0__::func_287(*uParam0, 58, 0))
	{
		if (__LIB_0__::func_75(&(Global_1359489.f_46)) && __LIB_0__::func_265(&(Global_1359489.f_46)) < 600f)
		{
			bVar9 = true;
		}
		else
		{
			__LIB_0__::func_290(*uParam0, 58, 1);
			__LIB_0__::func_37(&(Global_1359489.f_46));
		}
	}
	if (bVar8)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
		if (!bVar0)
		{
			__LIB_0__::func_288(*uParam0, 53, 1);
			bVar0 = true;
		}
	}
	if (bVar0 && !bVar8)
	{
		__LIB_0__::func_290(*uParam0, 53, 1);
		bVar0 = false;
	}
	if (bVar1 || bVar0)
	{
		if (bVar2)
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 53, true);
		}
		else if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 413, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 413, true);
		}
	}
	if ((!bVar1 && !bVar0) && PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 413, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 413, false);
	}
	if (bVar5 && !PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 331, true);
	}
	if (((((bVar3 || bVar4) || bVar9) || bVar5) || bVar7) || bVar0)
	{
		if (bVar6)
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 185, true);
		}
		else if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 330, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 330, true);
		}
	}
	if ((((((!bVar3 && !bVar4) && !bVar9) && !bVar5) && !bVar7) && !bVar0) && PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 330, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 330, false);
	}
	if (!bVar5 && PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 331, false);
	}
}

bool func_315(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
	{
		iVar0 = PED::_GET_RIDER_OF_MOUNT(__LIB_0__::func_177(iParam0), false);
		if (iVar0 == Global_35)
		{
			return true;
		}
	}
	return false;
}

bool func_316(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return !func_420(1);
		case 6:
			return !func_420(2);
		case 7:
			return !func_420(4);
		default:
			break;
	}
	return false;
}

void func_318(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_378(iParam0, &iVar0, &iVar1);
	if (!__LIB_1__::func_102(iParam0, iVar0, iVar1, bParam3))
	{
		return;
	}
	if (!__LIB_0__::func_447(iParam0, 1024))
	{
		return;
	}
	__LIB_0__::func_379(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	Global_1905944.f_22[iParam0 /*9*/].f_3[1 /*2*/] = iParam2;
	Global_1905944.f_22[iParam0 /*9*/].f_3[1 /*2*/].f_1 = 2;
}

bool func_321(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	float fVar7;
	vector3 vVar8;
	bool bVar11;
	var uVar12;
	iVar6 = 12;
	if (__LIB_0__::func_86(vParam4))
	{
		vVar8 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		fVar7 = vVar8.z;
	}
	else
	{
		fVar7 = __LIB_0__::func_152(vParam4, vParam1, 1);
	}
	fVar7 = (fVar7 + ((BUILTIN::TO_FLOAT(uParam0->f_2) * 10f) * __LIB_0__::func_514((uParam0->f_2 % 2) == 0, 1f, -1f)));
	vVar0 = { vParam1 + Vector(0f, -BUILTIN::COS(fVar7), BUILTIN::SIN(fVar7)) * FtoV(((80f + 40f) * 0.5f)) * Vector(fParam8, fParam8, fParam8) };
	if (uParam0->f_2 > 3)
	{
		iVar6 = 13;
	}
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			__LIB_12__::func_220(uParam0, 0f, 0f, 0f);
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			__LIB_0__::func_19(uParam0, 1);
			break;
		case 1:
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar0, &vVar3, 1, 3f, 0f))
			{
				if (__LIB_12__::func_228(vVar3, vParam1, 0, 0))
				{
					__LIB_12__::func_220(uParam0, vVar3);
					if (uParam0->f_12)
					{
						__LIB_0__::func_19(uParam0, 3);
					}
					else
					{
						__LIB_0__::func_19(uParam0, 4);
					}
				}
				else
				{
					__LIB_0__::func_19(uParam0, 2);
				}
			}
			else
			{
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 2:
			bVar11 = false;
			if (__LIB_12__::func_233(vVar0, &(uParam0->f_3), &bVar11, iVar6, 0, 1127481344 /* Float: 180f */, 1101004800 /* Float: 20f */, -1138501878 /* Float: -0.01f */, -1138501878 /* Float: -0.01f */, 0))
			{
				if (__LIB_12__::func_228(__LIB_12__::func_210(uParam0), vParam1, 1, 1))
				{
					if (uParam0->f_12)
					{
						__LIB_0__::func_19(uParam0, 3);
					}
					else
					{
						__LIB_0__::func_19(uParam0, 4);
					}
				}
				else
				{
					__LIB_0__::func_19(uParam0, 5);
				}
			}
			else if (bVar11)
			{
				__LIB_0__::func_19(uParam0, 5);
			}
			break;
		case 3:
			if (uParam0->f_13 == 0)
			{
				uParam0->f_13 = PATHFIND::_0x348F211CA2404039(iParam7, __LIB_12__::func_210(uParam0), vParam1, 23);
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						__LIB_0__::func_19(uParam0, 5);
					}
				}
			}
			else
			{
				switch (PATHFIND::_0x3A0F82F6EE2291C8(uParam0->f_13))
				{
					case 2:
						break;
					case 0:
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						__LIB_0__::func_19(uParam0, 5);
						break;
					case 1:
						uVar12 = PATHFIND::_0xF61CFEDEAB627BFA(uParam0->f_13);
						if (__LIB_0__::func_1(uVar12, 2) && iVar6 != 13)
						{
							__LIB_0__::func_19(uParam0, 5);
						}
						else
						{
							__LIB_0__::func_19(uParam0, 4);
						}
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						break;
				}
			}
			break;
		case 4:
			uParam0->f_2 = 0;
			__LIB_2__::func_106(&(uParam0->f_3.f_3), 1, 1, 0);
			__LIB_0__::func_19(uParam0, 0);
			return true;
		case 5:
			uParam0->f_2++;
			if (uParam0->f_2 > 12)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
			__LIB_0__::func_19(uParam0, 0);
			break;
	}
	return false;
}

Vector3 func_324(int iParam0)
{
	vector3 vVar0[3];
	int iVar10;
	vVar0[0 /*3*/] = { 0f, 0f, 0f };
	vVar0[1 /*3*/] = { 0f, -4.5f, 0f };
	vVar0[2 /*3*/] = { 3.5f, 2.5f, 0f };
	iVar10 = 0;
	while (iVar10 < __LIB_1__::func_149(1))
	{
		if (Global_1359489[iVar10] == iParam0)
		{
			return vVar0[iVar10 /*3*/];
		}
		iVar10++;
	}
	return 0f, 0f, 0f;
}

int func_330(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	if (__LIB_0__::func_272(iParam0, 0))
	{
		iVar1 = PED::_0xF103823FFE72BB49(iParam0);
		iVar0 = __LIB_4__::func_656(iVar1);
	}
	return iVar0;
}

bool func_331(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	vector3 vVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_177(iParam0);
	if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_70, 0))
	{
		if (!__LIB_0__::func_211(iParam0))
		{
			if (bParam2)
			{
				if (!__LIB_1__::func_411(iParam0, iVar0, 1))
				{
					return false;
				}
			}
			else if (!__LIB_1__::func_535(iParam0, iVar0))
			{
				return false;
			}
			if (Global_1360165[iParam0 /*1157*/].f_70.f_11 != SCRIPTS::GET_ID_OF_THIS_THREAD())
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
				}
				POPULATION::_0xF74E134F40192884(iVar0, 0);
				__LIB_0__::func_288(iParam0, 39, 1);
				__LIB_0__::func_213(iParam0, 8, 1);
				__LIB_0__::func_213(iParam0, 64, 0);
				__LIB_1__::func_434(iParam0, 0, 0, 1);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			vVar1.x = iParam3;
			vVar1.f_1 = iParam4;
			vVar1.f_2 = iParam5;
			if (!__LIB_0__::func_86(vVar1) && bParam7)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iVar0))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
						{
							TASK::CLEAR_PED_TASKS(iVar0, true, false);
						}
						else
						{
							ENTITY::DETACH_ENTITY(iVar0, true, true);
						}
					}
					func_435(iVar0, vVar1, iParam6, 2, 1073741824 /* Float: 2f */);
					return true;
				}
				else
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0) && !TASK::_0x0C3CB2E600C8977D(iVar0, 1))
					{
						TASK::CLEAR_PED_TASKS(iVar0, true, false);
					}
					return false;
				}
			}
			return true;
		}
		else if (bParam1)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
			__LIB_0__::func_288(iParam0, 39, 1);
			__LIB_0__::func_213(iParam0, 8, 1);
			__LIB_0__::func_213(iParam0, 64, 0);
			__LIB_1__::func_434(iParam0, 0, 0, 1);
			Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return true;
		}
	}
	return false;
}

void func_344(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)
{
	func_348(__LIB_0__::func_23(), iParam0, uParam1, iParam2, iParam3, iParam4, uParam5, uParam6);
}

void func_348(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_1__::func_110(iParam0, iParam1, 1))
	{
		iVar0 = __LIB_0__::func_39(iParam1);
		iVar1 = __LIB_0__::func_710(iParam0);
		iVar2 = (__LIB_0__::func_710(iParam0) - __LIB_0__::func_710(iParam1));
		iVar3 = (__LIB_0__::func_39(iParam0) - __LIB_0__::func_39(iParam1));
		iVar4 = (__LIB_0__::func_40(iParam0) - __LIB_0__::func_40(iParam1));
		iVar5 = (__LIB_0__::func_41(iParam0) - __LIB_0__::func_41(iParam1));
		iVar6 = (__LIB_0__::func_42(iParam0) - __LIB_0__::func_42(iParam1));
		iVar7 = (__LIB_0__::func_43(iParam0) - __LIB_0__::func_43(iParam1));
	}
	else
	{
		iVar0 = __LIB_0__::func_39(iParam0);
		iVar1 = __LIB_0__::func_710(iParam1);
		iVar2 = (__LIB_0__::func_710(iParam1) - __LIB_0__::func_710(iParam0));
		iVar3 = (__LIB_0__::func_39(iParam1) - __LIB_0__::func_39(iParam0));
		iVar4 = (__LIB_0__::func_40(iParam1) - __LIB_0__::func_40(iParam0));
		iVar5 = (__LIB_0__::func_41(iParam1) - __LIB_0__::func_41(iParam0));
		iVar6 = (__LIB_0__::func_42(iParam1) - __LIB_0__::func_42(iParam0));
		iVar7 = (__LIB_0__::func_43(iParam1) - __LIB_0__::func_43(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + __LIB_0__::func_44(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(__LIB_0__::func_70(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

int func_352(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam1))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_177(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !__LIB_0__::func_272(iVar0, 0)) || (bParam3 && !__LIB_0__::func_212(iParam1)))
	{
		if (bParam2)
		{
			if (__LIB_0__::func_725(iParam1, 1) != 0)
			{
				iVar0 = func_448(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, bParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_272(iVar0, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		__LIB_0__::func_834(iParam1, iVar0);
		__LIB_1__::func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

void func_360(var uParam0, int iParam1)
{
	uParam0->f_4 = (uParam0->f_4 - (uParam0->f_4 && iParam1));
}

bool func_388(int iParam0, int iParam1)
{
	vector3 vVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		return func_469(vVar0, iParam1);
	}
	return false;
}

bool func_389(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 3)
	{
		return false;
	}
	if (!Global_1359489.f_63.f_242[iParam2 /*18*/].f_15)
	{
		return false;
	}
	if (__LIB_9__::func_673(uParam0, iParam1, Global_1359489.f_63.f_242[iParam2 /*18*/].f_2))
	{
		return true;
	}
	return false;
}

int func_390(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (Global_1359489.f_63.f_242[iVar3 /*18*/].f_15)
		{
			if (Global_1359489.f_63.f_242[iVar3 /*18*/].f_8 < Global_1359489.f_63.f_242[iVar3 /*18*/].f_7)
			{
				if (Global_1359489.f_63.f_242[iVar3 /*18*/].f_14 != 3)
				{
					if (func_469(vVar0, iVar3))
					{
						return iVar3;
					}
				}
			}
		}
		iVar3++;
	}
	return -1;
}

void func_392(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, var uParam10, int iParam11, int iParam12, var uParam13, bool bParam14, var uParam15)
{
	vector3 vVar0[3];
	vector3 vVar10[3];
	int iVar20;
	int iVar21;
	int iVar22;
	char cVar23[32];
	int iVar27;
	if (iParam0 <= -1)
	{
		return;
	}
	if (bParam14)
	{
		iVar20 = __LIB_3__::func_799(iParam0, iParam1);
		__LIB_7__::func_440(&vVar0, &vVar10, iVar20, vParam3, vParam6, iParam9, uParam10, iParam11);
	}
	iVar21 = iParam2;
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar23, "", 32);
		iVar27 = 0;
		if (iVar21 > 0)
		{
			StringCopy(&cVar23, __LIB_3__::func_800(iParam0, 3), 32);
			iVar21 = (iVar21 - 1);
			iVar27 = 1;
		}
		func_474(iParam0, __LIB_3__::func_801(iParam0), iVar27, bParam14, &cVar23, vVar0[iVar22 /*3*/], vVar10[iVar22 /*3*/], vParam6, iVar22, 0, -1082130432 /* Float: -1f */, iParam12, uParam13, uParam15);
		iVar22++;
	}
}

int func_393(var uParam0)
{
	int iVar0;
	int iVar1;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (PED::GET_PED_AS_GROUP_MEMBER(__LIB_0__::func_110(), iVar1) == uParam0->f_5)
			{
				uParam0->f_108 = iVar1;
				return 1;
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_394(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 10)
	{
		return false;
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		return false;
	}
	return Global_1359489.f_63[iParam0 /*24*/].f_16;
}

struct<4> func_395(int iParam0)
{
	char cVar0[32];
	char cVar4[32];
	if (iParam0 < 0 || iParam0 > 10)
	{
		StringCopy(&cVar0, "ERR", 32);
		return cVar0;
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		StringCopy(&cVar4, "ERR", 32);
		return cVar4;
	}
	return Global_1359489.f_63[iParam0 /*24*/].f_19;
}

float func_396(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0f;
	}
	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		return 0f;
	}
	return Global_1359489.f_63[iParam0 /*24*/].f_13;
}

int func_398(int iParam0)
{
	int iVar0;
	iVar0 = 250;
	switch (iParam0)
	{
		case 0:
			iVar0 = 100;
			break;
		case 1:
			iVar0 = 150;
			break;
		case 2:
			iVar0 = 150;
			break;
		case 3:
			iVar0 = 200;
			break;
		case 5:
			iVar0 = 100;
			break;
		case 6:
			iVar0 = 100;
			break;
		case 7:
			iVar0 = 200;
			break;
		case 8:
			iVar0 = 200;
			break;
	}
	return (iVar0 * iVar0);
}

Vector3 func_400(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, float fParam8)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	int iVar9;
	float fVar10;
	fVar0 = BUILTIN::VDIST(vParam2, vParam5);
	vVar1 = { vParam2 };
	vVar4 = { vParam2 - vParam5 };
	vVar4.f_2 = 0f;
	vVar4 = { __LIB_0__::func_173(vVar4) };
	if (fVar0 > fParam8)
	{
		vVar1 = { vParam5 + Vector(fParam8, fParam8, fParam8) * vVar4 };
	}
	fVar7 = 1f;
	fVar8 = __LIB_3__::func_804((fVar7 / fParam8));
	iVar9 = 0;
	while (iVar9 < 5)
	{
		fVar10 = (fParam8 * __LIB_3__::func_745(func_476(iParam0, iParam1, vParam5, vVar4)));
		if (fVar10 < fVar7)
		{
			vVar1 = { __LIB_7__::func_857(vParam5, vVar1, fVar8) };
		}
		else
		{
			return vVar1;
		}
		iVar9++;
	}
	return vVar1;
}

void func_403(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	Global_1359489.f_63[iParam0 /*24*/] = 4;
}

bool func_420(int iParam0)
{
	return (Global_1391410 && iParam0) != 0;
}

void func_435(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_435(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_435(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_448(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = __LIB_1__::func_179(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x31C70A716CAE1FEE(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			else
			{
				if (!__LIB_0__::func_851(iParam0) && __LIB_0__::func_852(iParam0, &uVar4))
				{
					PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_725(iParam0, 1), &uVar4);
				}
				__LIB_0__::func_213(iParam0, 256, 0);
				__LIB_0__::func_234(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return __LIB_0__::func_749();
				}
				if (bParam2 && !__LIB_0__::func_86(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!func_503(iParam0, vVar0, iParam6, bParam10))
				{
					return __LIB_0__::func_749();
				}
				if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_0x31C70A716CAE1FEE(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					__LIB_0__::func_234(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/].f_124))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (bParam7)
			{
				if (!__LIB_1__::func_411(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return __LIB_0__::func_749();
				}
			}
			if ((bParam2 && !__LIB_0__::func_86(vVar0)) && !__LIB_0__::func_175(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_435(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (__LIB_0__::func_287(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				__LIB_0__::func_288(iParam0, 39, 1);
				__LIB_0__::func_213(iParam0, 8, 1);
				__LIB_0__::func_213(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			__LIB_1__::func_547(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = __LIB_0__::func_853(iParam0, __LIB_0__::func_181());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(__LIB_0__::func_725(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			__LIB_0__::func_290(iParam0, 40, 0);
			__LIB_0__::func_213(iParam0, 32, 0);
			__LIB_0__::func_234(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return __LIB_0__::func_749();
}

bool func_469(vector3 vParam0, int iParam3)
{
	if (iParam3 < 0 || iParam3 >= 3)
	{
		return false;
	}
	if (!Global_1359489.f_63.f_242[iParam3 /*18*/].f_15)
	{
		return false;
	}
	if (BUILTIN::VDIST2(vParam0, Global_1359489.f_63.f_242[iParam3 /*18*/].f_2) < Global_1359489.f_63.f_242[iParam3 /*18*/].f_5)
	{
		return true;
	}
	return false;
}

void func_474(int iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, vector3 vParam5, struct<2> Param8, int iParam10, vector3 vParam11, int iParam14, int iParam15, int iParam16, float fParam17, var uParam18, var uParam19)
{
	struct<24> Var0;
	if (Global_1359489.f_63.f_241 >= 10)
	{
		return;
	}
	if (bParam3)
	{
		Var0.f_10 = __LIB_3__::func_745(MISC::GET_HEADING_FROM_VECTOR_2D(Param8, Param8.f_1));
		Var0 = 1;
	}
	else
	{
		Var0.f_23 = 0;
		Var0.f_10 = 0f;
		Var0 = 2;
	}
	Var0.f_3 = uParam1;
	Var0.f_4 = { vParam5 };
	Var0.f_7 = { vParam11 };
	Var0.f_11 = iParam15;
	Var0.f_12 = iParam16;
	Var0.f_13 = (fParam17 * fParam17);
	Var0.f_1 = iParam0;
	Var0.f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Var0.f_14 = uParam18;
	Var0.f_15 = bParam3;
	Var0.f_16 = iParam2;
	StringCopy(&(Var0.f_19), sParam4, 32);
	Var0.f_17 = uParam19;
	Global_1359489.f_63[iParam14 /*24*/] = { Var0 };
	if (Global_1359489.f_63[iParam14 /*24*/].f_15)
	{
		__LIB_18__::func_35(&(Global_1359489.f_63[iParam14 /*24*/]));
	}
}

float func_476(int iParam0, int iParam1, vector3 vParam2, struct<2> Param5, var uParam7)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	fVar0 = 999999f;
	iVar1 = 0;
	while (iVar1 < Global_1359489.f_63.f_241)
	{
		if ((Global_1359489.f_63[iVar1 /*24*/].f_14 == iParam0 && (Global_1359489.f_63[iVar1 /*24*/].f_15 || Global_1359489.f_63[iVar1 /*24*/].f_18)) && iVar1 != iParam1)
		{
			vVar2 = { __LIB_0__::func_173(Global_1359489.f_63[iVar1 /*24*/].f_4 - vParam2) };
			fVar5 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Param5, Param5.f_1, vVar2.x, vVar2.y);
			if (fVar5 < fVar0)
			{
				fVar0 = fVar5;
			}
		}
		iVar1++;
	}
	return fVar0;
}

bool func_503(int iParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if ((!bParam5 && !Global_1359489.f_12) || (bParam5 && Global_1359489.f_13 < 8))
	{
		if (Global_1360165[iParam0 /*1157*/].f_125 <= 300)
		{
			if (PERSCHAR::_0xEB98B38CA60742D7(Global_1360165[iParam0 /*1157*/].f_126))
			{
				PERSCHAR::_0x49A8C2CD97815215(Global_1360165[iParam0 /*1157*/].f_126);
			}
			if (bParam5)
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x08FC896D2CB31FCC(Global_1360165[iParam0 /*1157*/].f_126, false);
				Global_1359489.f_13++;
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x0CADC3A977997472(Global_1360165[iParam0 /*1157*/].f_126, false);
			}
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_126);
			Global_1360165[iParam0 /*1157*/].f_125++;
		}
		else
		{
			iVar0 = PERSCHAR::_0xA00DF706C60173D1(__LIB_0__::func_725(iParam0, 1));
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				Global_1360165[iParam0 /*1157*/].f_124 = __LIB_1__::func_545(iVar0, vParam1, iParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				PERSCHAR::_0x7B204F88F6C3D287(Global_1360165[iParam0 /*1157*/].f_126);
			}
		}
		if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			return false;
		}
		Global_1359489.f_12 = 1;
		__LIB_0__::func_213(iParam0, 256, 0);
	}
	else
	{
		return false;
	}
	return true;
}

