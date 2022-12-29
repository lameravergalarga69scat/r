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
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_47[4] = { 0, 0, 0, 0 };
	var uLocal_52[2] = { 0, 0 };
	int iLocal_55[4] = { 0, 0, 0, 0 };
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 5;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 5;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	struct<5> Local_81 = { 0, 0, 0, 0, -1 } ;
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
	var uLocal_101 = -1;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 2;
	var uLocal_106 = 1;
	var uLocal_107 = 1;
	var uLocal_108 = 1;
	var uLocal_109 = 0;
	var uLocal_110 = 1;
	var uLocal_111 = 2;
	var uLocal_112 = 2;
	var uLocal_113 = 3;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 3;
	var uLocal_117 = 1;
	var uLocal_118 = 3;
	var uLocal_119 = 3;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_80 = ScriptParam_0;
	Local_81.f_1 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&Local_81);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_1(&Local_81);
	}
	while (__LIB_7__::func_453())
	{
		switch (iLocal_79)
		{
			case 0:
				if (func_3(&Local_81))
				{
					iLocal_79 = 1;
					if (Local_81.f_4 != -1)
					{
					}
					else
					{
						Local_81.f_4 = func_4(&Local_81);
					}
				}
				break;
			case 1:
				if (func_5(&Local_81))
				{
					func_6(&Local_81);
				}
				func_7(&Local_81);
				func_8(&Local_81);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_81);
}

void func_1(var uParam0)
{
	func_9(uParam0);
	SCRIPTS::_0xE7282390542F570D(uLocal_80);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(var uParam0)
{
	int iVar0;
	if (Local_81 == 0)
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_1);
		Local_81 = __LIB_7__::func_454(iVar0);
		return false;
	}
	if (__LIB_7__::func_497(Local_81, 4) || Global_40.f_8863.f_156)
	{
		func_1(uParam0);
		return false;
	}
	__LIB_7__::func_488(uParam0);
	return true;
}

int func_4(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar2 = -1;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (*uParam0 == -544327665)
	{
		iVar1 = 3;
	}
	else if (*uParam0 == 1120968795)
	{
		iVar1 = 2;
	}
	else if (*uParam0 == -834293086)
	{
		iVar1 = 10;
	}
	else if (*uParam0 == 1519472817)
	{
		iVar1 = 2;
	}
	else if (*uParam0 == -1859023693)
	{
		iVar1 = 11;
	}
	else if (*uParam0 == 2000209669)
	{
		iVar1 = 12;
	}
	else if (*uParam0 == -1761578407)
	{
		iVar1 = 11;
	}
	else if (*uParam0 == -1243267511)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == -1272862985)
	{
		iVar1 = 4;
	}
	else if (*uParam0 == 1535254161)
	{
		iVar1 = 4;
	}
	else if (*uParam0 == 870958936)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == 513110082)
	{
		iVar1 = 3;
	}
	else if (*uParam0 == -321841939)
	{
		iVar1 = 20;
	}
	else if (*uParam0 == -890175011)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == 677950956)
	{
		iVar1 = 6;
	}
	else if (*uParam0 == 503180747)
	{
		iVar1 = 2;
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iVar2 == -1)
		{
			iVar2 = iVar0;
			fVar3 = __LIB_0__::func_94(Global_35, func_13(uParam0, iVar0), 1);
		}
		else if (fVar3 > __LIB_0__::func_94(Global_35, func_13(uParam0, iVar0), 1))
		{
			iVar2 = iVar0;
			fVar3 = __LIB_0__::func_94(Global_35, func_13(uParam0, iVar0), 1);
		}
		iVar0++;
	}
	return iVar2;
}

bool func_5(var uParam0)
{
	switch (*uParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761578407:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -890175011:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -321841939:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 373034311:
		case 404434344:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return true;
		case 677950956:
			if (__LIB_0__::func_181())
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1861313914:
			if (__LIB_1__::func_185(59))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_6(var uParam0)
{
	if (uParam0->f_5 > 0 && uParam0->f_5 < 7)
	{
		if (!__LIB_7__::func_473(uParam0))
		{
			__LIB_7__::func_485(uParam0);
			__LIB_0__::func_615(uParam0, 0);
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			if (!__LIB_7__::func_473(uParam0))
			{
				return;
			}
			if ((*uParam0 == -890175011 || *uParam0 == 677950956) || *uParam0 == -321841939)
			{
				if (__LIB_7__::func_474(uParam0))
				{
					__LIB_0__::func_615(uParam0, 7);
				}
			}
			func_21(uParam0);
			if (__LIB_0__::func_86(uParam0->f_6.f_2))
			{
				__LIB_0__::func_615(uParam0, 7);
				return;
			}
			__LIB_0__::func_615(uParam0, 1);
			break;
		case 1:
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) <= uParam0->f_6)
			{
				__LIB_0__::func_37(&(uParam0->f_6.f_5));
				if ((((__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16)) || *uParam0 == -890175011) || *uParam0 == 677950956) || (*uParam0 == -1761578407 && __LIB_7__::func_474(uParam0)))
				{
					__LIB_0__::func_615(uParam0, 3);
				}
				else
				{
					__LIB_0__::func_615(uParam0, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_75(&(uParam0->f_6.f_5)))
			{
				PAD::SET_PAD_SHAKE(0, 150, 100);
				__LIB_1__::func_148(&(uParam0->f_6.f_5));
			}
			else if (__LIB_1__::func_871(&(uParam0->f_6.f_5)) > 300)
			{
				PAD::SET_PAD_SHAKE(0, 150, 100);
				__LIB_0__::func_615(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				__LIB_7__::func_485(uParam0);
				__LIB_0__::func_615(uParam0, 1);
			}
			else if (__LIB_7__::func_559(uParam0, 0))
			{
				__LIB_7__::func_572(uParam0);
				if ((__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16)) || (*uParam0 == -1761578407 && __LIB_7__::func_474(uParam0)))
				{
					__LIB_0__::func_615(uParam0, 6);
				}
				else
				{
					__LIB_0__::func_615(uParam0, 4);
				}
			}
			break;
		case 4:
			__LIB_7__::func_529(uParam0, uParam0->f_6.f_8, __LIB_7__::func_573(uParam0), 0);
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				__LIB_7__::func_485(uParam0);
				__LIB_0__::func_615(uParam0, 1);
			}
			else if (__LIB_7__::func_559(uParam0, 1))
			{
				__LIB_7__::func_485(uParam0);
				__LIB_0__::func_615(uParam0, 3);
			}
			else if (__LIB_7__::func_475(uParam0))
			{
				if (!__LIB_7__::func_497(*uParam0, 16))
				{
					__LIB_7__::func_498(*uParam0, 16);
					if (__LIB_0__::func_139(uParam0->f_6.f_8))
					{
						__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
					}
					func_35(uParam0);
					func_36(uParam0, 1);
					if (!*uParam0 == -321841939)
					{
						__LIB_0__::func_703(1, -1);
					}
				}
				else if (__LIB_0__::func_139(uParam0->f_6.f_8))
				{
					__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
				}
				__LIB_1__::func_148(&(uParam0->f_6.f_5));
				__LIB_0__::func_615(uParam0, 5);
			}
			else if (__LIB_0__::func_486(uParam0->f_6.f_8, 1) > 0f)
			{
				if (!__LIB_7__::func_497(*uParam0, 16))
				{
					if (!__LIB_0__::func_1(uParam0->f_3, 2))
					{
						__LIB_1__::func_683(&(uParam0->f_3), 2);
						if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
						{
							func_41(uParam0);
						}
					}
					if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
					{
						CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
						__LIB_7__::func_455(uParam0);
					}
				}
			}
			else if (__LIB_0__::func_1(uParam0->f_3, 2))
			{
				__LIB_1__::func_993(&(uParam0->f_3), 2);
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
			}
			break;
		case 5:
			if (*uParam0 == -890175011 || *uParam0 == 677950956)
			{
				CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
			}
			__LIB_7__::func_529(uParam0, uParam0->f_6.f_8, __LIB_7__::func_573(uParam0), 0);
			if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
			{
				__LIB_7__::func_455(uParam0);
			}
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				__LIB_7__::func_485(uParam0);
				__LIB_0__::func_615(uParam0, 1);
			}
			else if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_Y")))
			{
			}
			else if (__LIB_1__::func_871(&(uParam0->f_6.f_5)) >= 2000)
			{
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
				if (__LIB_0__::func_1(uParam0->f_3, 2))
				{
					__LIB_1__::func_993(&(uParam0->f_3), 2);
				}
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					__LIB_7__::func_456(uParam0);
				}
				if ((*uParam0 == -890175011 || *uParam0 == 677950956) || *uParam0 == -321841939)
				{
					__LIB_7__::func_485(uParam0);
					__LIB_0__::func_615(uParam0, 7);
				}
				else
				{
					__LIB_0__::func_615(uParam0, 6);
				}
			}
			break;
		case 6:
			__LIB_7__::func_529(uParam0, uParam0->f_6.f_8, __LIB_7__::func_573(uParam0), 0);
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				__LIB_7__::func_485(uParam0);
				__LIB_0__::func_615(uParam0, 1);
			}
			else if (__LIB_7__::func_559(uParam0, 1))
			{
				__LIB_7__::func_485(uParam0);
				__LIB_0__::func_615(uParam0, 3);
			}
			break;
		case 7:
			break;
	}
}

void func_7(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_1(uParam0->f_3, 8))
	{
		if (__LIB_7__::func_457(*uParam0) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2))
		{
			if (__LIB_7__::func_489(&(uParam0->f_2)))
			{
				iVar0 = 3;
				if (*uParam0 == -849582265 && Global_40.f_11953)
				{
					iVar0 = 4;
				}
				__LIB_8__::func_960(iVar0, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				__LIB_1__::func_683(&(uParam0->f_3), 8);
				if (*uParam0 == -849582265)
				{
					Global_40.f_11953 = 1;
				}
			}
		}
	}
}

void func_8(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (iLocal_62 > 0 && iLocal_62 < 13)
	{
	}
	switch (iLocal_62)
	{
		case 0:
			if (__LIB_0__::func_1(uParam0->f_3, 1))
			{
				__LIB_1__::func_993(&(uParam0->f_3), 1);
			}
			if (*uParam0 == 870958936 || *uParam0 == 513110082)
			{
				if (__LIB_7__::func_530(*uParam0))
				{
					if (__LIB_7__::func_474(uParam0))
					{
						__LIB_7__::func_531(&iLocal_62, 13, 1);
						return;
					}
					__LIB_7__::func_531(&iLocal_62, 13, 1);
					return;
				}
			}
			else if (*uParam0 == 1284679164 || *uParam0 == -1494823099)
			{
				if (*uParam0 == 1284679164)
				{
					if (!func_52(__LIB_7__::func_539(uParam0, 0), func_51(uParam0, uParam0->f_4), 1))
					{
						return;
					}
					if (__LIB_7__::func_530(*uParam0))
					{
						__LIB_7__::func_531(&iLocal_62, 13, 1);
						return;
					}
				}
				else if (*uParam0 == -1494823099)
				{
					if (__LIB_7__::func_530(*uParam0))
					{
						__LIB_7__::func_531(&iLocal_62, 13, 1);
						return;
					}
					if (!func_52(__LIB_7__::func_539(uParam0, 0), __LIB_7__::func_467(uParam0, 0), 1))
					{
						return;
					}
				}
			}
			else if (*uParam0 == 118535038)
			{
				if (!func_54(uParam0))
				{
					return;
				}
				if (__LIB_7__::func_530(*uParam0))
				{
					__LIB_1__::func_408(1766284049, 1, 0);
					__LIB_7__::func_531(&iLocal_62, 13, 1);
					return;
				}
			}
			else
			{
				if (__LIB_7__::func_530(*uParam0))
				{
					__LIB_7__::func_531(&iLocal_62, 13, 1);
					return;
				}
				if (*uParam0 == 373034311)
				{
					if (!__LIB_7__::func_530(-321841939))
					{
						if (__LIB_7__::func_496() >= 20)
						{
							if (!__LIB_7__::func_530(-321841939))
							{
								__LIB_7__::func_556(-321841939);
							}
						}
						return;
					}
				}
				else if (*uParam0 == 464413478)
				{
					if (!__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 1), 75f, 1, 1))
					{
						return;
					}
				}
				else if (*uParam0 == 1187689415)
				{
					func_59();
				}
				else if (*uParam0 == -261997819)
				{
					if (!func_60())
					{
						return;
					}
				}
			}
			func_61(uParam0);
			__LIB_7__::func_531(&iLocal_62, 1, 1);
			break;
		case 1:
			func_62(uParam0);
			__LIB_7__::func_531(&iLocal_62, 2, 1);
			break;
		case 2:
			if (!func_63(uParam0) || __LIB_1__::func_927())
			{
				return;
			}
			__LIB_7__::func_531(&iLocal_62, 3, 1);
			break;
		case 3:
			if (func_65(uParam0))
			{
				__LIB_7__::func_531(&iLocal_62, 10, 1);
			}
			break;
		case 10:
			if (!__LIB_0__::func_1(uParam0->f_3, 1))
			{
				__LIB_1__::func_683(&(uParam0->f_3), 1);
			}
			if (*uParam0 == -1427565340)
			{
				if (!iLocal_55[0])
				{
					if (ENTITY::IS_ENTITY_DEAD(uLocal_66[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_66[0], Global_35, 1, 1))
					{
						if (__LIB_7__::func_506(&uLocal_66, __LIB_7__::func_467(uParam0, 1), __LIB_7__::func_505(uParam0, 1), 1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
							{
								ENTITY::SET_ENTITY_VELOCITY(uLocal_66[1], 0f, 0f, 0.25f);
								iLocal_55[0] = 1;
							}
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
				{
					if (!iLocal_55[1])
					{
						if (ENTITY::GET_ENTITY_SPEED(uLocal_66[1]) > 0.2f)
						{
							iLocal_55[1] = 1;
						}
					}
					else if (ENTITY::GET_ENTITY_SPEED(uLocal_66[1]) < 0.01f)
					{
						ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[1], true);
						TASK::_0x78B4567E18B54480(uLocal_66[1]);
						iLocal_55[1] = 0;
						__LIB_7__::func_531(&iLocal_62, 11, 1);
					}
				}
			}
			else if (*uParam0 == 464413478)
			{
				if (!iLocal_55[0])
				{
					if (ENTITY::IS_ENTITY_DEAD(uLocal_66[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_66[0], Global_35, 1, 1))
					{
						iLocal_55[0] = 1;
					}
				}
				else if (!iLocal_55[1])
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
					{
						if (ENTITY::GET_ENTITY_SPEED(uLocal_66[1]) > 0.1f)
						{
							iLocal_55[1] = 1;
						}
					}
				}
				else if (!iLocal_55[2])
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
					{
						if (ENTITY::GET_ENTITY_SPEED(uLocal_66[1]) < 0.1f)
						{
							iLocal_55[2] = 1;
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[1], true);
							TASK::_0x78B4567E18B54480(uLocal_66[1]);
						}
					}
				}
				if (iLocal_55[2])
				{
					if (!__LIB_7__::func_530(*uParam0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[1]) && PED::_GET_CARRIER_AS_PED(uLocal_66[1]) == Global_35)
						{
							func_68(uParam0);
							func_69(uParam0);
							__LIB_7__::func_531(&iLocal_62, 13, 1);
						}
						else if (__LIB_3__::func_982())
						{
							if (__LIB_7__::func_495(joaat("PROVISION_GOLD_NUGGET")))
							{
								func_68(uParam0);
								func_69(uParam0);
								__LIB_7__::func_531(&iLocal_62, 13, 1);
							}
						}
					}
				}
			}
			else if (*uParam0 == 733338689)
			{
				if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 32))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && PED::_GET_CARRIER_AS_PED(uLocal_66[0]) == Global_35)
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 32);
						func_73(__LIB_7__::func_507(uParam0), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
				}
				if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 64))
				{
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
					{
						if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_47[0]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							__LIB_7__::func_531(&iLocal_62, 11, 1);
						}
					}
				}
				if (__LIB_0__::func_1(Global_40.f_8863.f_149, 32) && __LIB_0__::func_1(Global_40.f_8863.f_149, 64))
				{
					func_68(uParam0);
					func_69(uParam0);
					__LIB_7__::func_531(&iLocal_62, 13, 1);
				}
			}
			else if ((*uParam0 == -261997819 || *uParam0 == -599506500) || *uParam0 == 1424723727)
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_16[0]) && OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_16[0]))
				{
					func_68(uParam0);
					if (!__LIB_0__::func_214(__LIB_7__::func_510(uParam0, uParam0->f_4)))
					{
						__LIB_0__::func_915(__LIB_7__::func_510(uParam0, uParam0->f_4));
					}
					func_73(__LIB_7__::func_510(uParam0, uParam0->f_4), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					func_69(uParam0);
					__LIB_7__::func_531(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == 1187689415)
			{
				if (!__LIB_7__::func_497(*uParam0, 32))
				{
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						__LIB_7__::func_532(*uParam0);
					}
				}
				iVar0 = 0;
				while (iVar0 <= (30 - 1))
				{
					if (!func_78(iVar0))
					{
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_16[iVar0]) && OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_16[iVar0]))
						{
							func_79(iVar0);
							func_80(uParam0);
						}
					}
					iVar0++;
				}
				if (func_81())
				{
					func_68(uParam0);
					func_69(uParam0);
					__LIB_7__::func_531(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == 870958936 || *uParam0 == 2072029413)
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
				{
					if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_47[0]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						__LIB_7__::func_531(&iLocal_62, 11, 1);
					}
				}
			}
			else if (*uParam0 == 2135153015)
			{
				if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 1024))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && PED::_GET_CARRIER_AS_PED(uLocal_66[0]) == Global_35)
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 1024);
						func_73(__LIB_7__::func_507(uParam0), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[0]) && !TASK::_IS_SCENARIO_POINT_ACTIVE(iLocal_47[0]))
						{
							TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_47[0], true);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
				{
					if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 1), 15f, 1, 1))
					{
						TASK::_0xA6A76D666A281F2D(uLocal_66[1], __LIB_7__::func_509(uParam0, 0));
					}
				}
				if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 2048))
				{
					if (__LIB_3__::func_982())
					{
						if (__LIB_7__::func_495(__LIB_7__::func_509(uParam0, 0)))
						{
							__LIB_1__::func_683(&(Global_40.f_8863.f_149), 2048);
						}
					}
				}
				if (__LIB_0__::func_1(Global_40.f_8863.f_149, 2048) && __LIB_0__::func_1(Global_40.f_8863.f_149, 1024))
				{
					func_68(uParam0);
					func_69(uParam0);
					__LIB_7__::func_531(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == 513110082)
			{
				if (uParam0->f_4 == 2)
				{
					iVar1 = 3;
					while (iVar1 <= 7)
					{
						if (!func_83(uParam0, iVar1))
						{
							if (__LIB_3__::func_982())
							{
								if (__LIB_7__::func_495(__LIB_7__::func_509(uParam0, iVar1)))
								{
									func_84(uParam0, iVar1);
								}
							}
						}
						iVar1++;
					}
					if (!func_83(uParam0, 2))
					{
						if (!iLocal_55[3])
						{
							if (__LIB_0__::func_266(Global_35, __LIB_7__::func_503(uParam0, 0), 15f, 1, 1))
							{
								if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
								{
									iLocal_47[0] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(func_86(uParam0, 2), func_87(uParam0, 0), 1f, 0, false);
									if (OBJECT::DOES_PICKUP_EXIST(iLocal_16[0]))
									{
										OBJECT::BLOCK_PICKUP_FROM_PLAYER_COLLECTION(iLocal_16[0], 1);
									}
								}
								else if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_47[0]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
								{
									iLocal_55[3] = 1;
									if (OBJECT::DOES_PICKUP_EXIST(iLocal_16[0]))
									{
										OBJECT::BLOCK_PICKUP_FROM_PLAYER_COLLECTION(iLocal_16[0], 0);
									}
								}
							}
						}
						else if (OBJECT::DOES_PICKUP_EXIST(iLocal_16[0]) && OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_16[0]))
						{
							func_84(uParam0, 2);
							if (!__LIB_0__::func_214(__LIB_7__::func_510(uParam0, 0)))
							{
								__LIB_0__::func_915(__LIB_7__::func_510(uParam0, 0));
							}
							func_73(__LIB_7__::func_510(uParam0, 0), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
							func_73(func_88(uParam0), WEAPON::_GET_WEAPON_CLIP_SIZE(__LIB_7__::func_510(uParam0, 0)) * 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						}
					}
					if ((((((((__LIB_0__::func_1(Global_40.f_8863.f_150, 1) && __LIB_0__::func_1(Global_40.f_8863.f_150, 2)) && __LIB_0__::func_1(Global_40.f_8863.f_150, 8)) && __LIB_0__::func_1(Global_40.f_8863.f_150, 16)) && __LIB_0__::func_1(Global_40.f_8863.f_150, 32)) && __LIB_0__::func_1(Global_40.f_8863.f_150, 64)) && __LIB_0__::func_1(Global_40.f_8863.f_150, 128)) && __LIB_0__::func_1(Global_40.f_8863.f_150, 4)) && !__LIB_3__::func_982())
					{
						func_68(uParam0);
						func_69(uParam0);
						__LIB_7__::func_531(&iLocal_62, 13, 1);
					}
					else if ((((((__LIB_0__::func_1(Global_40.f_8863.f_150, 8) && __LIB_0__::func_1(Global_40.f_8863.f_150, 16)) && __LIB_0__::func_1(Global_40.f_8863.f_150, 32)) && __LIB_0__::func_1(Global_40.f_8863.f_150, 64)) && __LIB_0__::func_1(Global_40.f_8863.f_150, 128)) && __LIB_0__::func_1(Global_40.f_8863.f_150, 4)) && !__LIB_3__::func_982())
					{
						__LIB_7__::func_532(*uParam0);
						func_69(uParam0);
						__LIB_7__::func_531(&iLocal_62, 13, 1);
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
				{
					if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 0), 15f, 1, 1))
					{
						if (uParam0->f_4 == 0)
						{
							if (__LIB_0__::func_1(Global_40.f_8863.f_150, 2))
							{
								TASK::_0xA6A76D666A281F2D(uLocal_66[0], __LIB_7__::func_509(uParam0, 1));
							}
							else
							{
								TASK::_0xA6A76D666A281F2D(uLocal_66[0], __LIB_7__::func_509(uParam0, 0));
							}
						}
						else if (uParam0->f_4 == 1)
						{
							if (__LIB_0__::func_1(Global_40.f_8863.f_150, 1))
							{
								TASK::_0xA6A76D666A281F2D(uLocal_66[0], __LIB_7__::func_509(uParam0, 1));
							}
							else
							{
								TASK::_0xA6A76D666A281F2D(uLocal_66[0], __LIB_7__::func_509(uParam0, 0));
							}
						}
						if (__LIB_3__::func_982())
						{
							if (__LIB_7__::func_495(__LIB_7__::func_509(uParam0, 0)) || __LIB_7__::func_495(__LIB_7__::func_509(uParam0, 1)))
							{
								if (uParam0->f_4 == 0)
								{
									func_84(uParam0, 0);
								}
								else if (uParam0->f_4 == 1)
								{
									func_84(uParam0, 1);
								}
								func_80(uParam0);
								__LIB_7__::func_532(*uParam0);
								if (uParam0->f_4 == 0)
								{
									if (__LIB_0__::func_1(Global_40.f_8863.f_150, 2))
									{
										if (__LIB_1__::func_707(__LIB_7__::func_509(uParam0, 0), 1, 0))
										{
											func_90(__LIB_7__::func_509(uParam0, 0), 1, 1, -142743235, 0);
										}
									}
								}
								else if (uParam0->f_4 == 1)
								{
									if (__LIB_0__::func_1(Global_40.f_8863.f_150, 1))
									{
										if (__LIB_1__::func_707(__LIB_7__::func_509(uParam0, 0), 1, 0))
										{
											func_90(__LIB_7__::func_509(uParam0, 0), 1, 1, -142743235, 0);
										}
									}
								}
							}
						}
						else if (__LIB_0__::func_1(Global_40.f_8863.f_150, 1) && __LIB_0__::func_1(Global_40.f_8863.f_150, 2))
						{
							if (__LIB_1__::func_707(__LIB_7__::func_509(uParam0, 1), 1, 0))
							{
								func_90(__LIB_7__::func_509(uParam0, 1), 1, 1, -142743235, 0);
							}
							func_73(__LIB_7__::func_509(uParam0, 2), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
							func_69(uParam0);
							__LIB_7__::func_531(&iLocal_62, 13, 1);
						}
					}
				}
			}
			else if (*uParam0 == 247563739)
			{
				if (__LIB_0__::func_1(Global_40.f_8863.f_150, 256))
				{
					if (__LIB_7__::func_497(*uParam0, 16))
					{
						func_68(uParam0);
						func_69(uParam0);
						__LIB_7__::func_531(&iLocal_62, 13, 1);
					}
				}
				else
				{
					if ((!__LIB_7__::func_497(*uParam0, 8) && VOLUME::_DOES_VOLUME_EXIST(iLocal_14)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						func_91(uParam0);
					}
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
					{
						if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_47[0]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							__LIB_7__::func_531(&iLocal_62, 11, 1);
						}
					}
				}
			}
			else if (*uParam0 == 1284679164)
			{
				if (!__LIB_7__::func_497(*uParam0, 32) && __LIB_7__::func_497(*uParam0, 16))
				{
					__LIB_7__::func_532(*uParam0);
				}
				if (((__LIB_0__::func_1(Global_40.f_8863.f_149, 131072) && __LIB_0__::func_1(Global_40.f_8863.f_149, 262144)) && __LIB_0__::func_1(Global_40.f_8863.f_149, 524288)) && __LIB_0__::func_1(Global_40.f_8863.f_149, 1048576))
				{
					if (__LIB_7__::func_497(*uParam0, 16))
					{
						func_68(uParam0);
						func_69(uParam0);
						__LIB_7__::func_531(&iLocal_62, 13, 1);
					}
				}
				else
				{
					iVar2 = 0;
					while (iVar2 <= 3)
					{
						if (!func_83(uParam0, iVar2))
						{
							if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[iVar2]))
							{
								func_92(uParam0, &(iLocal_47[iVar2]), &uLocal_66, iVar2);
								if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_47[iVar2]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
								{
									func_84(uParam0, iVar2);
									__LIB_7__::func_531(&iLocal_62, 11, 1);
								}
							}
						}
						iVar2++;
					}
				}
			}
			else if (*uParam0 == -1859413640)
			{
				iVar3 = 0;
				while (iVar3 <= 1)
				{
					if (!func_83(uParam0, iVar3))
					{
						if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 0), 15f, 1, 1))
						{
							if (__LIB_3__::func_982())
							{
								if (__LIB_7__::func_495(__LIB_7__::func_544(uParam0, iVar3)))
								{
									func_84(uParam0, iVar3);
									__LIB_8__::func_960(0, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
								}
							}
						}
					}
					iVar3++;
				}
				if ((__LIB_0__::func_1(Global_40.f_8863.f_149, 134217728) && __LIB_0__::func_1(Global_40.f_8863.f_149, 67108864)) && !__LIB_3__::func_982())
				{
					func_68(uParam0);
					func_69(uParam0);
					__LIB_7__::func_531(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == 373034311)
			{
				if (!__LIB_0__::func_1(Global_40.f_8863.f_148, 2097152))
				{
					if (__LIB_7__::func_497(*uParam0, 16))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_148), 2097152);
						__LIB_7__::func_506(&uLocal_66, __LIB_7__::func_467(uParam0, 0), __LIB_7__::func_505(uParam0, 0), 0);
					}
				}
				else if (!iLocal_55[3])
				{
					if (__LIB_3__::func_982())
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && __LIB_7__::func_495(__LIB_7__::func_544(uParam0, 0)))
						{
							iLocal_55[3] = 1;
						}
					}
				}
				else if (!__LIB_3__::func_982())
				{
					Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.5f);
					__LIB_0__::func_430();
					__LIB_7__::func_531(&iLocal_62, 11, 1);
				}
			}
			else if (*uParam0 == -1061274876)
			{
				iVar4 = 0;
				while (iVar4 <= 4)
				{
					if (!func_83(uParam0, iVar4))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[iVar4]))
						{
							if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 0), 15f, 1, 1))
							{
								TASK::_0xA6A76D666A281F2D(uLocal_66[iVar4], __LIB_7__::func_509(uParam0, iVar4));
							}
						}
						if (__LIB_3__::func_982())
						{
							if (__LIB_7__::func_495(__LIB_7__::func_509(uParam0, iVar4)))
							{
								func_84(uParam0, iVar4);
							}
						}
					}
					iVar4++;
				}
				if (((((__LIB_0__::func_1(Global_40.f_8863.f_149, 4096) && __LIB_0__::func_1(Global_40.f_8863.f_149, 8192)) && __LIB_0__::func_1(Global_40.f_8863.f_149, 16384)) && __LIB_0__::func_1(Global_40.f_8863.f_149, 32768)) && __LIB_0__::func_1(Global_40.f_8863.f_149, 65536)) && !__LIB_3__::func_982())
				{
					func_68(uParam0);
					func_69(uParam0);
					__LIB_7__::func_531(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == 118535038)
			{
				iVar5 = 0;
				while (iVar5 <= 2)
				{
					if (!func_83(uParam0, iVar5))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[iVar5]))
						{
							if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 0), 15f, 1, 1))
							{
								TASK::_0xA6A76D666A281F2D(uLocal_66[iVar5], __LIB_7__::func_509(uParam0, iVar5));
							}
						}
						if (__LIB_3__::func_982())
						{
							if (__LIB_7__::func_495(__LIB_7__::func_509(uParam0, iVar5)))
							{
								func_84(uParam0, iVar5);
							}
						}
					}
					iVar5++;
				}
				if (((__LIB_0__::func_1(Global_40.f_8863.f_149, 128) && __LIB_0__::func_1(Global_40.f_8863.f_149, 256)) && __LIB_0__::func_1(Global_40.f_8863.f_149, 512)) && !__LIB_3__::func_982())
				{
					func_68(uParam0);
					func_69(uParam0);
					__LIB_7__::func_531(&iLocal_62, 13, 1);
				}
			}
			else if (((*uParam0 == -357364973 || *uParam0 == -1481450947) || *uParam0 == -657632) || *uParam0 == 435290930)
			{
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					func_68(uParam0);
					func_69(uParam0);
					__LIB_7__::func_531(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == -1494823099)
			{
				if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 2097152))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
					{
						if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 0), 5f, 1, 1))
						{
							TASK::_0xA6A76D666A281F2D(uLocal_66[0], __LIB_7__::func_508(uParam0, 0));
						}
					}
					if (__LIB_3__::func_982())
					{
						if (__LIB_7__::func_495(__LIB_7__::func_508(uParam0, 0)))
						{
							__LIB_1__::func_683(&(Global_40.f_8863.f_149), 2097152);
						}
					}
				}
				if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 4194304))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
					{
						if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 1), 5f, 1, 1))
						{
							TASK::_0xA6A76D666A281F2D(uLocal_66[1], __LIB_7__::func_508(uParam0, 1));
						}
					}
					if (__LIB_3__::func_982())
					{
						if (__LIB_7__::func_495(__LIB_7__::func_508(uParam0, 1)))
						{
							__LIB_1__::func_683(&(Global_40.f_8863.f_149), 4194304);
						}
					}
				}
				if ((__LIB_0__::func_1(Global_40.f_8863.f_149, 2097152) && __LIB_0__::func_1(Global_40.f_8863.f_149, 4194304)) && !__LIB_3__::func_982())
				{
					func_68(uParam0);
					func_69(uParam0);
					__LIB_7__::func_531(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == -780455182)
			{
				if (!__LIB_7__::func_497(*uParam0, 32) && __LIB_7__::func_497(*uParam0, 16))
				{
					__LIB_7__::func_532(*uParam0);
				}
				if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 16777216))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
					{
						if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 0), 15f, 1, 1))
						{
							TASK::_0xA6A76D666A281F2D(uLocal_66[0], __LIB_7__::func_509(uParam0, 0));
						}
						if (__LIB_3__::func_982())
						{
							if (__LIB_7__::func_495(__LIB_7__::func_509(uParam0, 0)))
							{
								__LIB_1__::func_683(&(Global_40.f_8863.f_149), 16777216);
							}
						}
					}
				}
				if ((__LIB_0__::func_1(Global_40.f_8863.f_149, 16777216) && __LIB_7__::func_497(*uParam0, 16)) && !__LIB_3__::func_982())
				{
					func_68(uParam0);
					func_69(uParam0);
					__LIB_7__::func_531(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == -709811179)
			{
				if (!__LIB_7__::func_497(*uParam0, 32) && __LIB_7__::func_497(*uParam0, 16))
				{
					__LIB_7__::func_532(*uParam0);
				}
				if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 33554432))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
					{
						if (__LIB_3__::func_982())
						{
							if (__LIB_7__::func_495(__LIB_7__::func_508(uParam0, 0)))
							{
								__LIB_1__::func_683(&(Global_40.f_8863.f_149), 33554432);
							}
						}
					}
				}
				if ((__LIB_0__::func_1(Global_40.f_8863.f_149, 33554432) && __LIB_7__::func_497(*uParam0, 16)) && !__LIB_3__::func_982())
				{
					func_68(uParam0);
					func_69(uParam0);
					__LIB_7__::func_531(&iLocal_62, 13, 1);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && PED::_GET_CARRIER_AS_PED(uLocal_66[0]) == Global_35)
			{
				func_73(__LIB_7__::func_507(uParam0), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_68(uParam0);
				func_69(uParam0);
				__LIB_7__::func_531(&iLocal_62, 13, 1);
			}
			break;
		case 11:
			if (*uParam0 == -1427565340)
			{
				if (!__LIB_7__::func_530(*uParam0))
				{
					if (__LIB_3__::func_982())
					{
						if (__LIB_7__::func_495(__LIB_7__::func_544(uParam0, 1)))
						{
							iLocal_55[3] = 1;
						}
					}
					if (iLocal_55[3] && !__LIB_3__::func_982())
					{
						func_68(uParam0);
						func_69(uParam0);
						__LIB_7__::func_531(&iLocal_62, 13, 1);
					}
				}
			}
			else if (*uParam0 == 247563739)
			{
				if (!__LIB_7__::func_497(*uParam0, 32) && __LIB_7__::func_497(*uParam0, 16))
				{
					__LIB_7__::func_532(*uParam0);
				}
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
				{
					if (!__LIB_0__::func_1(Global_40.f_8863.f_150, 256))
					{
						if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_47[0]))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, MISC::GET_HASH_KEY("ObjectExchange")))
							{
								__LIB_1__::func_683(&(Global_40.f_8863.f_150), 256);
								__LIB_1__::func_616(1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
							}
						}
					}
					else if (((TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[0]) && !PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_47[0])) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0)) && __LIB_7__::func_497(*uParam0, 16))
					{
						func_68(uParam0);
						func_69(uParam0);
						__LIB_7__::func_531(&iLocal_62, 13, 1);
					}
				}
			}
			else if (*uParam0 == 1284679164)
			{
				iVar6 = 0;
				while (iVar6 <= 0)
				{
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[iVar6]))
					{
						if ((!PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_47[iVar6]) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0)) && !TASK::_0xEC7E480FF8BD0BED(Global_35))
						{
							if ((((__LIB_7__::func_497(*uParam0, 16) && __LIB_0__::func_1(Global_40.f_8863.f_149, 131072)) && __LIB_0__::func_1(Global_40.f_8863.f_149, 262144)) && __LIB_0__::func_1(Global_40.f_8863.f_149, 524288)) && __LIB_0__::func_1(Global_40.f_8863.f_149, 1048576))
							{
								func_68(uParam0);
								func_69(uParam0);
								__LIB_7__::func_531(&iLocal_62, 13, 1);
							}
							else
							{
								__LIB_7__::func_531(&iLocal_62, 10, 1);
							}
						}
					}
					iVar6++;
				}
			}
			else if (*uParam0 == 2072029413)
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
				{
					if (!PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_47[0]) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						func_68(uParam0);
						if (!__LIB_0__::func_214(__LIB_7__::func_510(uParam0, uParam0->f_4)))
						{
							__LIB_0__::func_915(__LIB_7__::func_510(uParam0, uParam0->f_4));
						}
						func_73(__LIB_7__::func_510(uParam0, uParam0->f_4), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						func_69(uParam0);
						__LIB_7__::func_531(&iLocal_62, 13, 1);
					}
				}
			}
			else if (*uParam0 == 870958936)
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
				{
					if (!PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_47[0]) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						func_97(uParam0);
						func_80(uParam0);
						__LIB_7__::func_532(*uParam0);
						if ((((__LIB_0__::func_1(Global_40.f_8863.f_149, 1) && __LIB_0__::func_1(Global_40.f_8863.f_149, 2)) && __LIB_0__::func_1(Global_40.f_8863.f_149, 4)) && __LIB_0__::func_1(Global_40.f_8863.f_149, 8)) && __LIB_0__::func_1(Global_40.f_8863.f_149, 16))
						{
							__LIB_7__::func_498(*uParam0, 2);
						}
						if (!__LIB_0__::func_214(__LIB_7__::func_510(uParam0, uParam0->f_4)))
						{
							__LIB_0__::func_915(__LIB_7__::func_510(uParam0, uParam0->f_4));
						}
						func_73(__LIB_7__::func_510(uParam0, uParam0->f_4), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						func_69(uParam0);
						__LIB_7__::func_531(&iLocal_62, 13, 1);
					}
				}
			}
			else if (*uParam0 == 733338689)
			{
				if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 32))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && PED::_GET_CARRIER_AS_PED(uLocal_66[0]) == Global_35)
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 32);
						func_73(__LIB_7__::func_507(uParam0), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
				}
				if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 64))
				{
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
					{
						if (!PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_47[0]) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							__LIB_1__::func_683(&(Global_40.f_8863.f_149), 64);
							if (!__LIB_0__::func_214(__LIB_7__::func_510(uParam0, uParam0->f_4)))
							{
								__LIB_0__::func_915(__LIB_7__::func_510(uParam0, uParam0->f_4));
							}
							func_73(__LIB_7__::func_510(uParam0, uParam0->f_4), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
					}
				}
				if (__LIB_0__::func_1(Global_40.f_8863.f_149, 32) && __LIB_0__::func_1(Global_40.f_8863.f_149, 64))
				{
					func_68(uParam0);
					func_69(uParam0);
					__LIB_7__::func_531(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == 373034311)
			{
				func_68(uParam0);
				iVar7 = __LIB_7__::func_477();
				__LIB_18__::func_40(-321841939, iVar7, 20);
				__LIB_18__::func_41(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE"));
				__LIB_0__::func_703(1, -1);
				func_69(uParam0);
				__LIB_7__::func_531(&iLocal_62, 13, 1);
			}
			break;
		case 13:
			break;
		default:
			break;
	}
}

void func_9(var uParam0)
{
	int iVar0;
	func_69(uParam0);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14))
	{
		VOLUME::_DELETE_VOLUME(iLocal_14);
	}
	iVar0 = 0;
	while (iVar0 <= (30 - 1))
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_16[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_16[iVar0]);
		}
		iVar0++;
	}
	if (*uParam0 == 1284679164)
	{
		func_52(__LIB_7__::func_539(uParam0, 0), func_51(uParam0, uParam0->f_4), 0);
	}
	else if (*uParam0 == -1494823099)
	{
		func_52(__LIB_7__::func_539(uParam0, 0), __LIB_7__::func_467(uParam0, 0), 0);
	}
	if (*uParam0 == 464413478 || *uParam0 == -1494823099)
	{
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (!uLocal_52[iVar0] == 0 && ENTITY::_0x1FF441D7954F8709(uLocal_52[iVar0]))
			{
				ENTITY::_0xD2B9C78537ED5759(uLocal_52[iVar0]);
			}
			iVar0++;
		}
	}
	__LIB_18__::func_42(&uLocal_66, 1);
	func_102(uParam0);
}

Vector3 func_13(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -544327665:
			if (iParam1 == 0)
			{
				return 500.882f, 80.003f, 139.28f;
			}
			else if (iParam1 == 1)
			{
				return 759.079f, -1133.282f, 55.059f;
			}
			else if (iParam1 == 2)
			{
				return -3667.897f, -2805.515f, -7.129f;
			}
			break;
		case 1120968795:
			if (iParam1 == 0)
			{
				return -1521.811f, 519.1222f, 101.6756f;
			}
			else if (iParam1 == 1)
			{
				return 2417.936f, 853.4788f, 72.5143f;
			}
			break;
		case -834293086:
			if (iParam1 == 0)
			{
				return 1747.022f, -267.8047f, 73.0826f;
			}
			else if (iParam1 == 1)
			{
				return 1978.289f, -60.4567f, 59.4946f;
			}
			else if (iParam1 == 2)
			{
				return 640.8188f, -1062.613f, 48.0237f;
			}
			else if (iParam1 == 3)
			{
				return 839.6257f, -1174.002f, 54.9616f;
			}
			else if (iParam1 == 4)
			{
				return 1917.611f, 10.6206f, 77.6881f;
			}
			else if (iParam1 == 5)
			{
				return -85.5144f, 76.4358f, 93.2066f;
			}
			else if (iParam1 == 6)
			{
				return 76.4646f, 854.9302f, 207.8816f;
			}
			else if (iParam1 == 7)
			{
				return 1871.215f, 643.5952f, 119.9651f;
			}
			else if (iParam1 == 8)
			{
				return 2572.759f, 690.9401f, 83.9642f;
			}
			else if (iParam1 == 9)
			{
				return 2264.918f, 934.7651f, 81.1843f;
			}
			break;
		case -1859023693:
			if (iParam1 == 0)
			{
				return 525.7659f, 373.9645f, 107.9581f;
			}
			else if (iParam1 == 1)
			{
				return 610.1569f, -142.2089f, 146.4651f;
			}
			else if (iParam1 == 2)
			{
				return 1253.233f, 40.0713f, 94.2498f;
			}
			else if (iParam1 == 3)
			{
				return 886.287f, 470.977f, 103.937f;
			}
			else if (iParam1 == 4)
			{
				return 370.7786f, 1072.15f, 190.1675f;
			}
			else if (iParam1 == 5)
			{
				return -3575.866f, -2199.067f, -13.415f;
			}
			else if (iParam1 == 6)
			{
				return -5159.03f, -3162.67f, -18.5954f;
			}
			else if (iParam1 == 7)
			{
				return -3970.804f, -3027.692f, -12.9605f;
			}
			else if (iParam1 == 8)
			{
				return -3242.678f, -3077.875f, -0.5597f;
			}
			else if (iParam1 == 9)
			{
				return -3686.284f, -3258.813f, -4.4117f;
			}
			else if (iParam1 == 10)
			{
				return 795.2883f, 1013.304f, 118.3968f;
			}
			break;
		case 1519472817:
			if (iParam1 == 0)
			{
				return -2519.475f, 820.6946f, 146.4494f;
			}
			else if (iParam1 == 1)
			{
				return -1349.727f, -923.9958f, 69.342f;
			}
			break;
		case 2000209669:
			return __LIB_7__::func_460(uParam0, iParam1);
		case -1761578407:
		case 404434344:
			if (iParam1 == 9)
			{
				return -762.4968f, -1910.661f, 50.4933f;
			}
			else if (iParam1 == 10)
			{
				return -1738.282f, -995.4295f, 113.6716f;
			}
			else
			{
				return func_51(uParam0, iParam1);
			}
			break;
		case 870958936:
			return func_86(uParam0, iParam1);
		case 513110082:
			if (iParam1 == 0)
			{
				return -2531.5f, 1174.4f, 225.9f;
			}
			else if (iParam1 == 1)
			{
				return 3026.4f, 1778f, 84.2f;
			}
			else if (iParam1 == 2)
			{
				return -4389.58f, -2166.55f, 50.81f;
			}
			break;
		case 503180747:
			if (iParam1 == 0)
			{
				return 2325.978f, 1070.32f, 44.9401f;
			}
			else if (iParam1 == 1)
			{
				return -2698.656f, 697.2829f, 162.889f;
			}
			break;
		case 1535254161:
			return func_51(uParam0, iParam1);
		case -1272862985:
			return func_51(uParam0, iParam1);
		case -1243267511:
			return func_51(uParam0, iParam1);
		case -321841939:
			return func_51(uParam0, iParam1);
		case -890175011:
			return func_51(uParam0, iParam1);
		case 677950956:
			return func_51(uParam0, iParam1);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_21(var uParam0)
{
	uParam0->f_6.f_2 = { func_51(uParam0, uParam0->f_4) };
	uParam0->f_6.f_1 = 5f;
	uParam0->f_6 = 10f;
	switch (*uParam0)
	{
		case 1535254161:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			__LIB_7__::func_491(uParam0);
			break;
		case -1958832660:
		case -1109016944:
			uParam0->f_6 = 48f;
			uParam0->f_6.f_1 = 24f;
			break;
		case -1960242214:
		case -1300082860:
		case -161804536:
		case 657666087:
		case 1673499939:
		case 1734766691:
			uParam0->f_6 = 30f;
			uParam0->f_6.f_1 = 15f;
			break;
		case -1891628345:
		case -986176781:
		case -849582265:
		case 247563739:
		case 1982045664:
		case 1986618633:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			break;
		case -1646022773:
		case 1284679164:
		case 2000209669:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
			break;
		case -1614148516:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
			break;
		case -1243267511:
			uParam0->f_6 = 10f;
			__LIB_7__::func_491(uParam0);
			break;
		case -607940493:
			uParam0->f_6 = 30f;
			__LIB_7__::func_491(uParam0);
			break;
		case -321841939:
			uParam0->f_6 = 10f;
			break;
		case -1761578407:
		case 404434344:
			uParam0->f_6 = 10f;
			__LIB_7__::func_491(uParam0);
			break;
		case -890175011:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
			if (((uParam0->f_4 == 0 || uParam0->f_4 == 1) || uParam0->f_4 == 3) || uParam0->f_4 == 4)
			{
				__LIB_7__::func_491(uParam0);
			}
			break;
		case 677950956:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
			{
				__LIB_7__::func_491(uParam0);
			}
			break;
		default:
			uParam0->f_6 = 10f;
			uParam0->f_6.f_1 = 5f;
			break;
	}
}

void func_35(var uParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (*uParam0 == -321841939)
	{
		if (__LIB_7__::func_461(uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(uParam0->f_4))
			{
				MAP::_0xD8C7162AB2E2AF45(__LIB_7__::func_461(uParam0->f_4));
			}
			__LIB_7__::func_498(*uParam0, 8);
		}
	}
	else
	{
		if (__LIB_7__::func_462(*uParam0, uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(__LIB_7__::func_462(*uParam0, uParam0->f_4)))
			{
				MAP::_0xD8C7162AB2E2AF45(__LIB_7__::func_462(*uParam0, uParam0->f_4));
			}
			__LIB_7__::func_498(*uParam0, 8);
		}
		func_91(uParam0);
	}
}

void func_36(var uParam0, bool bParam1)
{
	int iVar0;
	if (*uParam0 == -321841939)
	{
		if (bParam1)
		{
			if (__LIB_7__::func_477() < (20 - 1))
			{
				return;
			}
		}
		else if (!__LIB_7__::func_478())
		{
			return;
		}
	}
	if (bParam1)
	{
		iVar0 = __LIB_7__::func_463(*uParam0, __LIB_0__::func_113(), uParam0->f_4);
	}
	else
	{
		iVar0 = __LIB_7__::func_487(*uParam0, uParam0->f_4);
	}
	if (iVar0 != 0)
	{
		if (bParam1)
		{
			__LIB_1__::func_33(iVar0, 0);
			if (*uParam0 == -890175011)
			{
				if (__LIB_7__::func_464() == (5 - 1))
				{
					if (__LIB_0__::func_113())
					{
						__LIB_1__::func_33(joaat("JOURNAL_TOWN_SECRET_VAMPMAP_AR"), 0);
						iVar0 = joaat("JOURNAL_TOWN_SECRET_VAMPMAP_AR");
					}
					else
					{
						__LIB_1__::func_33(joaat("JOURNAL_TOWN_SECRET_VAMPMAP_JN"), 0);
						iVar0 = joaat("JOURNAL_TOWN_SECRET_VAMPMAP_JN");
					}
				}
			}
		}
		if (func_131())
		{
			Global_1357518 = iVar0;
			if (bParam1 == 1)
			{
				Global_1357519 = { uParam0->f_6.f_2 };
			}
		}
	}
}

void func_41(var uParam0)
{
	uParam0->f_6.f_10.f_21 = 4;
	uParam0->f_6.f_10.f_17 = 4;
	uParam0->f_6.f_10.f_18 = 1;
	uParam0->f_6.f_10.f_23 = 2;
	uParam0->f_6.f_10.f_24 = 2;
	uParam0->f_6.f_10 = { func_51(uParam0, uParam0->f_4) };
}

Vector3 func_51(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -780455182:
			return __LIB_7__::func_467(uParam0, 1);
		case -1614148516:
			return __LIB_7__::func_467(uParam0, 0);
		case 2134589549:
			return __LIB_7__::func_467(uParam0, 0);
		case 373034311:
			return __LIB_7__::func_467(uParam0, 0);
		case -1887999095:
		case -1636964661:
		case -1287911066:
		case -415839138:
		case 429544447:
		case 1519228573:
		case 1982045664:
			return __LIB_7__::func_494(uParam0, 0);
		case -1300082860:
			return 365.725f, -15.4104f, 110.5399f;
		case -1958832660:
			return 1591.863f, -1845.292f, 65.196f;
		case 247563739:
			return 2450.049f, 2104.19f, 173.9434f;
		case 1861313914:
			return 894.6589f, -1969.363f, 44.554f;
		case 1734766691:
			return -270.2353f, 114.9477f, 62.751f;
		case 58958195:
			return -2565.258f, 756.6277f, 153.3524f;
		case 308500632:
			return -2664.789f, 690.7282f, 185.3162f;
		case -739986731:
			return -2904.952f, -254.2731f, 186.965f;
		case 1986618633:
			return -4688.022f, -3419.115f, 17.2107f;
		case -986176781:
			return -2774.109f, -431.3145f, 174.3467f;
		case -232974724:
			return 189.6525f, -414.4084f, 87.8956f;
		case -1053108445:
			return -4346.388f, -2604.249f, -1.1693f;
		case 1673499939:
			return 2476.001f, 1997.824f, 167.269f;
		case -709811179:
			return 2291.568f, 2080.932f, 200.7657f;
		case -979575591:
			return -2937.443f, -138.5504f, 199.3164f;
		case -1609238411:
			return 3220.522f, 1463.278f, 52.9448f;
		case 921081956:
			return 2417.172f, -738.7664f, 42.3038f;
		case -148407339:
			return -1732.145f, 2191.086f, 293.2867f;
		case -1109016944:
			return 1733.116f, -424.945f, 48.4327f;
		case -1646022773:
			return 2148.987f, 1918.443f, 194.4452f;
		case 1284679164:
			return 2782.746f, 536.9514f, 72.1612f;
		case -1505275983:
			return 947.541f, 238.4814f, 127.5118f;
		case -1761189332:
			return 703.7369f, 427.9747f, 108.3372f;
		case -2009137002:
			return 1260.331f, 1296.422f, 217.8313f;
		case -1787770845:
			return -1915.618f, -30.6525f, 287.4662f;
		case -161804536:
			return 2388.642f, 1690.187f, 95.5056f;
		case -1891628345:
			return -2694.149f, -1499.7f, 150.6036f;
		case -1960242214:
			return 749.9653f, 1825.082f, 240.1131f;
		case 1034793488:
			return 1705.885f, -1006.939f, 43.8407f;
		case -849582265:
			return -2588.29f, -93.565f, 167.61f;
		case 657666087:
			return -1749.065f, -1624.292f, 90.1441f;
		case -607940493:
			return 2698.995f, 410.8617f, 77.4735f;
		case 2000209669:
			if (iParam1 == 11)
			{
				return __LIB_7__::func_460(uParam0, 11);
			}
			else
			{
				return __LIB_7__::func_460(uParam0, 7);
			}
			break;
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 2135.355f, 1069.851f, 122.7836f;
				case 1:
					return 2150.689f, 1124.094f, 130.4564f;
				case 2:
					return 2210.914f, 1134.496f, 141.0999f;
				case 3:
					return 2251.706f, 1198.574f, 121.7253f;
				default:
					break;
			}
			Jump @2418; //curOff = 1102
			switch (iParam1)
			{
				case 0:
					return -2693.879f, -402.3976f, 148.1729f;
				case 1:
					return -2687.993f, -402.3363f, 148.3894f;
				case 2:
					return -2686.917f, -410.486f, 148.4376f;
				case 3:
					return -2694.168f, -412.4018f, 148.8531f;
				case 4:
					return -2697.285f, -408.3287f, 149.3549f;
				default:
					break;
			}
			Jump @2418; //curOff = 1236
			switch (iParam1)
			{
				case 0:
					return 1478.761f, -1831.449f, 52.0191f;
				case 1:
					return 1487.726f, -1822.523f, 53.4034f;
				case 2:
					return 1501.093f, -1813.105f, 53.2804f;
				case 3:
					return 1520.822f, -1805.398f, 52.6965f;
				default:
					break;
			}
			Jump @2418; //curOff = 1346
			switch (iParam1)
			{
				case 0:
					return -941.5482f, 1011.45f, 198.416f;
				case 1:
					return -490.2726f, 1355.536f, 205.7345f;
				case 2:
					return 299.3675f, 1795.301f, 197.5344f;
				case 3:
					return 1884.704f, 1927.334f, 249.5903f;
				case 4:
					return 2549.506f, 1624.281f, 93.5729f;
				case 5:
					return 2489.881f, 1375.156f, 107.1609f;
				case 6:
					return 2657.062f, 1286.715f, 117.8777f;
				case 7:
					return 2577.385f, 1161.844f, 158.058f;
				case 8:
					return 2342.925f, 844.4003f, 82.3675f;
				case 9:
					return 1698.323f, 719.6797f, 125.0664f;
				case 10:
					return 1986.145f, -208.0823f, 51.4904f;
				case 11:
					return 1263.596f, 528.7397f, 88.8471f;
				case 12:
					return 1626.372f, -0.4718f, 87.7166f;
				case 13:
					return 1562.581f, -219.7309f, 84.4919f;
				case 14:
					return 111.1142f, 639.3316f, 125.9073f;
				case 15:
					return -20.3564f, 217.8298f, 109.194f;
				case 16:
					return 714.7566f, 22.1708f, 154.0224f;
				case 17:
					return -547.9435f, 557.9953f, 104.2689f;
				case 18:
					return -540.1378f, 256.6357f, 44.7136f;
				case 19:
					return -525.3924f, -277.1231f, 62.9066f;
				default:
					break;
			}
			Jump @2418; //curOff = 1840
			return 794.4265f, 1777.108f, 281.0706f;
			if (iParam1 == 0)
			{
				return 794.4265f, 1777.108f, 281.0706f;
			}
			else if (iParam1 == 1)
			{
				return -1277.741f, 2895.727f, 386.2982f;
			}
			else if (iParam1 == 2)
			{
				return 2577.433f, -627.2448f, 42.97695f;
			}
			else if (iParam1 == 3)
			{
				return 2579.389f, -627.8698f, 42.96334f;
			}
			else if (iParam1 == 4)
			{
				return 672.4651f, -974.1768f, 54.4574f;
			}
			else if (iParam1 == 5)
			{
				return -1307.091f, 2468.892f, 309.8042f;
			}
			else if (iParam1 == 6)
			{
				return 1735.903f, -1893.929f, 45.189f;
			}
			else if (iParam1 == 7)
			{
				return 2157.916f, 795.1056f, 156.5394f;
			}
			else if (iParam1 == 8)
			{
				return 514.147f, 1932.534f, 200.2069f;
			}
			Jump @2418; //curOff = 2102
			switch (iParam1)
			{
				case 0:
					return 2826.679f, -1323.043f, 46.43373f;
				case 1:
					return 2736.732f, -1339.335f, 46.65415f;
				case 2:
					return 2698.488f, -1306.194f, 49.48277f;
				case 3:
					return 2773.848f, -1182.319f, 48.53596f;
				case 4:
					return 2820.003f, -1230.709f, 47.52145f;
				default:
					break;
			}
			Jump @2418; //curOff = 2236
			switch (iParam1)
			{
				case 0:
					return -834.465f, -1365.791f, 48.5643f;
				case 1:
					return -781.2938f, -1320.024f, 44.8353f;
				case 2:
					return -729.9185f, -1219.616f, 41.4298f;
				case 3:
					return -773.6366f, -1354.466f, 44.1805f;
				case 4:
					return -756.8423f, -1276.124f, 49.337f;
				case 5:
					return -816.6586f, -1310.757f, 43.2499f;
				default:
					break;
			}
			Jump @2418; //curOff = 2394
			return -353.4487f, -133.7923f, 46.4927f;
			return 0f, 0f, 0f;
		}
bool func_52(char* sParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam1);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			if (bParam4)
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, 0);
			}
			else
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, true);
			}
			return true;
		}
	}
	return false;
}

bool func_54(var uParam0)
{
	switch (*uParam0)
	{
		case 404434344:
			if (!__LIB_7__::func_483() && !__LIB_7__::func_484())
			{
				if (!__LIB_7__::func_483())
				{
				}
				if (!__LIB_7__::func_484())
				{
				}
				return false;
			}
			else if (__LIB_2__::func_774(77))
			{
				return false;
			}
			else if (__LIB_7__::func_511() != 0)
			{
				return false;
			}
			break;
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				if (!__LIB_7__::func_483() && !__LIB_7__::func_484())
				{
					if (!__LIB_7__::func_483())
					{
					}
					if (!__LIB_7__::func_484())
					{
					}
					return false;
				}
			}
			else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (!__LIB_0__::func_898(8924991) && !__LIB_0__::func_898(665676602))
				{
					if (!__LIB_0__::func_898(8924991))
					{
					}
					if (!__LIB_0__::func_898(665676602))
					{
					}
					return false;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (!__LIB_0__::func_898(1488286867))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (!__LIB_0__::func_898(651395116))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (!__LIB_0__::func_898(-1241340344))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (!__LIB_0__::func_898(409602249))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 5)
			{
			}
			else if (uParam0->f_4 == 1)
			{
			}
			break;
		case -2108030724:
			if (!__LIB_1__::func_185(26))
			{
				return false;
			}
			break;
		case -1887999095:
			if (!__LIB_1__::func_185(21))
			{
				return false;
			}
			break;
		case -1240932004:
			if (!__LIB_1__::func_185(77))
			{
				return false;
			}
			break;
		case 118535038:
			if (!__LIB_1__::func_185(12))
			{
				return false;
			}
			break;
		case -2008558277:
			if (__LIB_1__::func_200(19))
			{
				return false;
			}
			break;
		case 221420861:
			if (__LIB_1__::func_200(29))
			{
				return false;
			}
			break;
		case -1308658310:
			if (__LIB_1__::func_200(11))
			{
				return false;
			}
			break;
		case 308500632:
			if (!Global_40.f_11623[20 /*8*/] > 0)
			{
				return false;
			}
			break;
		case 1861313914:
			if (__LIB_2__::func_774(19) || __LIB_1__::func_200(4))
			{
				return false;
			}
			break;
		case 1982045664:
			if (__LIB_2__::func_774(66))
			{
				return false;
			}
			break;
		case 677950956:
			if (!__LIB_0__::func_181())
			{
				return false;
			}
			break;
	}
	return true;
}

void func_59()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (30 - 1))
	{
		if (iVar0 == 0)
		{
			iVar1 = 1;
		}
		else if (iVar0 == 1)
		{
			iVar1 = 2;
		}
		else if (iVar0 == 2)
		{
			iVar1 = 4;
		}
		else if (iVar0 == 3)
		{
			iVar1 = 8;
		}
		else if (iVar0 == 4)
		{
			iVar1 = 16;
		}
		else if (iVar0 == 5)
		{
			iVar1 = 32;
		}
		else if (iVar0 == 6)
		{
			iVar1 = 64;
		}
		else if (iVar0 == 7)
		{
			iVar1 = 128;
		}
		else if (iVar0 == 8)
		{
			iVar1 = 256;
		}
		else if (iVar0 == 9)
		{
			iVar1 = 512;
		}
		else if (iVar0 == 10)
		{
			iVar1 = 1024;
		}
		else if (iVar0 == 11)
		{
			iVar1 = 2048;
		}
		else if (iVar0 == 12)
		{
			iVar1 = 4096;
		}
		else if (iVar0 == 13)
		{
			iVar1 = 8192;
		}
		else if (iVar0 == 14)
		{
			iVar1 = 16384;
		}
		else if (iVar0 == 15)
		{
			iVar1 = 32768;
		}
		else if (iVar0 == 16)
		{
			iVar1 = 65536;
		}
		else if (iVar0 == 17)
		{
			iVar1 = 131072;
		}
		else if (iVar0 == 18)
		{
			iVar1 = 262144;
		}
		else if (iVar0 == 19)
		{
			iVar1 = 524288;
		}
		else if (iVar0 == 20)
		{
			iVar1 = 1048576;
		}
		else if (iVar0 == 21)
		{
			iVar1 = 2097152;
		}
		else if (iVar0 == 22)
		{
			iVar1 = 4194304;
		}
		else if (iVar0 == 23)
		{
			iVar1 = 8388608;
		}
		else if (iVar0 == 24)
		{
			iVar1 = 16777216;
		}
		else if (iVar0 == 25)
		{
			iVar1 = 33554432;
		}
		else if (iVar0 == 26)
		{
			iVar1 = 67108864;
		}
		else if (iVar0 == 27)
		{
			iVar1 = 134217728;
		}
		else if (iVar0 == 28)
		{
			iVar1 = 268435456;
		}
		else if (iVar0 == 29)
		{
			iVar1 = 536870912;
		}
		if (__LIB_0__::func_1(Global_40.f_8863.f_151, iVar1))
		{
		}
		iVar0++;
	}
}

bool func_60()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_HATCHET"));
}

void func_61(var uParam0)
{
	func_156(uParam0);
	func_157(uParam0);
}

void func_62(var uParam0)
{
	int iVar0;
	__LIB_7__::func_512(&uLocal_66);
	if (((((((((*uParam0 == -763376358 || *uParam0 == 1801731633) || *uParam0 == 1490223565) || *uParam0 == 733338689) || *uParam0 == 1124200691) || *uParam0 == -1420566543) || *uParam0 == -1208846034) || *uParam0 == 1048086072) || *uParam0 == 939555152) || *uParam0 == 2135153015)
	{
		uLocal_15 = __LIB_18__::func_36(uParam0);
	}
	if (*uParam0 == 1284679164 || *uParam0 == -780455182)
	{
		iVar0 = 0;
		while (iVar0 <= (4 - 1))
		{
			if (!__LIB_7__::func_513(uParam0, iVar0) == -1)
			{
				if (TXD::_DOES_STREAMED_TXD_EXIST(__LIB_7__::func_513(uParam0, iVar0)))
				{
					TXD::_REQUEST_STREAMED_TXD(__LIB_7__::func_513(uParam0, iVar0), false);
				}
			}
			iVar0++;
		}
	}
}

bool func_63(var uParam0)
{
	int iVar0;
	if (!__LIB_7__::func_514(&uLocal_66))
	{
		return false;
	}
	if (((((((((*uParam0 == -763376358 || *uParam0 == 1801731633) || *uParam0 == 1490223565) || *uParam0 == 733338689) || *uParam0 == 1124200691) || *uParam0 == -1420566543) || *uParam0 == -1208846034) || *uParam0 == 1048086072) || *uParam0 == 939555152) || *uParam0 == 2135153015)
	{
		if (!__LIB_7__::func_515(&uLocal_15))
		{
			return false;
		}
	}
	if (*uParam0 == 1284679164 || *uParam0 == -780455182)
	{
		iVar0 = 0;
		while (iVar0 <= (4 - 1))
		{
			if (!__LIB_7__::func_513(uParam0, iVar0) == -1)
			{
				if (TXD::_DOES_STREAMED_TXD_EXIST(__LIB_7__::func_513(uParam0, iVar0)) && !TXD::_HAS_STREAMED_TXD_LOADED(__LIB_7__::func_513(uParam0, iVar0)))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_65(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (*uParam0 == -1427565340 || *uParam0 == 464413478)
	{
		if (*uParam0 == 464413478)
		{
			if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 0), 75f, 1, 1))
			{
				if (func_164(uParam0, &(uLocal_52[0]), &uLocal_66, 0, 11))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
					{
						if (!__LIB_7__::func_506(&uLocal_66, __LIB_7__::func_467(uParam0, 1), __LIB_7__::func_505(uParam0, 1), 1))
						{
							return false;
						}
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_66[1], uLocal_66[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uLocal_66[0], "disWiskeyTreeBottle1"), 0f, 0f, -0.265f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							TASK::_0x78B4567E18B54480(uLocal_66[1]);
							if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), uLocal_66[1]))
							{
								PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), uLocal_66[1], 0);
								PLAYER::_0x6ECFC621A168424C(uLocal_66[1], uLocal_66[1], 0, 0);
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
			else
			{
				return false;
			}
		}
		else if (!__LIB_7__::func_506(&uLocal_66, __LIB_7__::func_467(uParam0, 0), __LIB_7__::func_505(uParam0, 0), 0))
		{
			return false;
		}
	}
	else if (*uParam0 == -1494823099)
	{
		if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 0), 75f, 1, 1))
		{
			if (func_164(uParam0, &(uLocal_52[0]), &uLocal_66, 0, 7))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
				{
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 2097152))
					{
					}
					else
					{
						__LIB_7__::func_520(&uLocal_66, 1, 0);
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
		else
		{
			return false;
		}
		if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 1), 75f, 1, 1))
		{
			if (func_164(uParam0, &(uLocal_52[1]), &uLocal_66, 1, 7))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
				{
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 4194304))
					{
					}
					else
					{
						__LIB_7__::func_520(&uLocal_66, 1, 1);
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
		else
		{
			return false;
		}
	}
	else if (*uParam0 == 247563739)
	{
		if (!__LIB_0__::func_1(Global_40.f_8863.f_150, 256))
		{
			if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 0), 75f, 1, 1))
			{
				if (func_164(uParam0, &(uLocal_52[0]), &uLocal_66, 0, 11))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
					{
						if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
						{
							iLocal_47[0] = __LIB_9__::func_763(uLocal_66[0], func_87(uParam0, 0), 0f, 0f, 0f, 0, 0, 0, 1);
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
			else
			{
				return false;
			}
		}
	}
	else if (((((((((*uParam0 == -763376358 || *uParam0 == 1801731633) || *uParam0 == 1490223565) || *uParam0 == 733338689) || *uParam0 == 1124200691) || *uParam0 == -1420566543) || *uParam0 == -1208846034) || *uParam0 == 1048086072) || *uParam0 == 939555152) || *uParam0 == 2135153015)
	{
		if (*uParam0 == 733338689)
		{
			if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 32))
			{
				if (!__LIB_18__::func_38(uParam0, &uLocal_66))
				{
					return false;
				}
			}
			if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 64))
			{
				if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
				{
					iLocal_47[0] = func_169(func_87(uParam0, uParam0->f_4), func_86(uParam0, uParam0->f_4), func_168(uParam0, uParam0->f_4), 0, 0, 0);
				}
			}
		}
		else if (*uParam0 == 2135153015)
		{
			if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 1024))
			{
				if (!__LIB_18__::func_38(uParam0, &uLocal_66))
				{
					return false;
				}
			}
			if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 2048))
			{
				if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
				{
					iLocal_47[0] = func_169(func_87(uParam0, uParam0->f_4), func_86(uParam0, uParam0->f_4), func_168(uParam0, uParam0->f_4), 0, 0, 0);
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 1024))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_47[0], false);
					}
				}
				if (!__LIB_7__::func_506(&uLocal_66, __LIB_7__::func_467(uParam0, 1), __LIB_7__::func_505(uParam0, 1), 1))
				{
					return false;
				}
			}
		}
		else if (!__LIB_18__::func_38(uParam0, &uLocal_66))
		{
			return false;
		}
	}
	else if ((*uParam0 == -261997819 || *uParam0 == -599506500) || *uParam0 == 1424723727)
	{
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_16[0]))
		{
			__LIB_1__::func_683(&iLocal_60, 2);
			iLocal_16[0] = OBJECT::CREATE_PICKUP_ROTATE(__LIB_7__::func_502(uParam0, uParam0->f_4), __LIB_7__::func_503(uParam0, uParam0->f_4), __LIB_7__::func_504(uParam0, uParam0->f_4), iLocal_60, -1, 0, true, 0, 0, 0f, 0);
		}
	}
	else if (*uParam0 == 1187689415)
	{
		if (!func_172(uParam0, &iLocal_16, &uLocal_78, 0))
		{
			return false;
		}
	}
	else if (*uParam0 == 513110082)
	{
		if (uParam0->f_4 == 2)
		{
			iVar0 = 2;
			while (iVar0 <= 7)
			{
				if (!func_83(uParam0, iVar0))
				{
					if (iVar0 == 2)
					{
						if (!OBJECT::DOES_PICKUP_EXIST(iLocal_16[0]))
						{
							__LIB_1__::func_683(&iLocal_60, 2);
							iLocal_16[0] = OBJECT::CREATE_PICKUP_ROTATE(__LIB_7__::func_502(uParam0, 0), __LIB_7__::func_503(uParam0, 0), __LIB_7__::func_504(uParam0, 0), iLocal_60, -1, 0, true, 0, 0, 0f, 0);
						}
					}
					else
					{
						if (iVar0 == 3)
						{
							iVar1 = 0;
						}
						else if (iVar0 == 4)
						{
							iVar1 = 1;
						}
						else if (iVar0 == 5)
						{
							iVar1 = 2;
						}
						else if (iVar0 == 6)
						{
							iVar1 = 3;
						}
						else if (iVar0 == 7)
						{
							iVar1 = 4;
						}
						if (!__LIB_7__::func_506(&uLocal_66, __LIB_7__::func_467(uParam0, iVar1), __LIB_7__::func_505(uParam0, iVar1), iVar1))
						{
							return false;
						}
					}
				}
				iVar0++;
			}
		}
		else if (!__LIB_7__::func_506(&uLocal_66, __LIB_7__::func_467(uParam0, 0), __LIB_7__::func_505(uParam0, 0), 0))
		{
			return false;
		}
	}
	else if (*uParam0 == 870958936 || *uParam0 == 2072029413)
	{
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
		{
			iLocal_47[0] = func_169(func_87(uParam0, uParam0->f_4), func_86(uParam0, uParam0->f_4), func_168(uParam0, uParam0->f_4), 0, 0, 0);
		}
	}
	else if (*uParam0 == 1284679164)
	{
	}
	else if (*uParam0 == 373034311)
	{
		if (__LIB_0__::func_1(Global_40.f_8863.f_148, 2097152))
		{
			if (!__LIB_7__::func_506(&uLocal_66, __LIB_7__::func_467(uParam0, 0), __LIB_7__::func_505(uParam0, 0), 0))
			{
				return false;
			}
		}
	}
	else if (*uParam0 == -1061274876)
	{
		iVar2 = 0;
		while (iVar2 <= 4)
		{
			if (!func_83(uParam0, iVar2))
			{
				if (!__LIB_7__::func_506(&uLocal_66, __LIB_7__::func_467(uParam0, iVar2), __LIB_7__::func_505(uParam0, iVar2), iVar2))
				{
					return false;
				}
			}
			iVar2++;
		}
	}
	else if (*uParam0 == 118535038)
	{
		iVar3 = 0;
		while (iVar3 <= 2)
		{
			if (!func_83(uParam0, iVar3))
			{
				if (!__LIB_7__::func_506(&uLocal_66, __LIB_7__::func_467(uParam0, iVar3), __LIB_7__::func_505(uParam0, iVar3), iVar3))
				{
					return false;
				}
			}
			iVar3++;
		}
	}
	else if (*uParam0 == -1859413640)
	{
		iVar4 = 0;
		while (iVar4 <= 1)
		{
			if (!func_83(uParam0, iVar4))
			{
				if (!__LIB_7__::func_506(&uLocal_66, __LIB_7__::func_467(uParam0, iVar4), __LIB_7__::func_505(uParam0, iVar4), iVar4))
				{
					return false;
				}
			}
			iVar4++;
		}
	}
	else if (!__LIB_18__::func_37(uParam0, &uLocal_66))
	{
		return false;
	}
	if (*uParam0 == -1859413640 || *uParam0 == -1427565340)
	{
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
		{
			iLocal_47[0] = func_169(func_87(uParam0, uParam0->f_4), func_86(uParam0, uParam0->f_4), func_168(uParam0, uParam0->f_4), 0, 0, 0);
		}
	}
	else if (*uParam0 == 1284679164)
	{
		iVar5 = 0;
		while (iVar5 <= (4 - 1))
		{
			if (!func_83(uParam0, iVar5))
			{
				if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_47[iVar5]))
				{
					iLocal_47[iVar5] = func_174(uParam0, iVar5);
				}
			}
			iVar5++;
		}
	}
	if ((*uParam0 == 1335921989 || *uParam0 == -709811179) || *uParam0 == -780455182)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[0], true);
			if (!*uParam0 == -780455182)
			{
				TASK::_0x78B4567E18B54480(uLocal_66[0]);
			}
			if (*uParam0 == -780455182)
			{
				if (!__LIB_7__::func_513(uParam0, 0) == -1)
				{
					if (TXD::_DOES_STREAMED_TXD_EXIST(__LIB_7__::func_513(uParam0, 0)))
					{
						OBJECT::_SET_APPLY_OBJECT_TXD(uLocal_66[0], __LIB_7__::func_513(uParam0, 0), 0, 0);
					}
				}
			}
		}
	}
	else if (*uParam0 == 513110082)
	{
		if (uParam0->f_4 == 2)
		{
			iVar6 = 0;
			while (iVar6 <= 4)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[iVar6]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[iVar6], true);
					TASK::_0x78B4567E18B54480(uLocal_66[iVar6]);
				}
				iVar6++;
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[0], true);
			TASK::_0x78B4567E18B54480(uLocal_66[0]);
		}
	}
	else if (*uParam0 == 373034311)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[0], true);
			TASK::_0x78B4567E18B54480(uLocal_66[0]);
		}
	}
	else if (*uParam0 == -1061274876)
	{
		iVar7 = 0;
		while (iVar7 <= 4)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[iVar7]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[iVar7], true);
				TASK::_0x78B4567E18B54480(uLocal_66[iVar7]);
			}
			iVar7++;
		}
	}
	else if (((((((((*uParam0 == -763376358 || *uParam0 == 1801731633) || *uParam0 == 1490223565) || *uParam0 == 733338689) || *uParam0 == 1124200691) || *uParam0 == -1420566543) || *uParam0 == -1208846034) || *uParam0 == 1048086072) || *uParam0 == 939555152) || *uParam0 == 2135153015)
	{
		__LIB_7__::func_516(&uLocal_15);
		if ((((*uParam0 == -763376358 || *uParam0 == 1801731633) || *uParam0 == 1490223565) || *uParam0 == 733338689) || *uParam0 == 2135153015)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
			{
				if (((*uParam0 == -763376358 || *uParam0 == 1801731633) || *uParam0 == 1490223565) || *uParam0 == 733338689)
				{
					MISC::_0xF63FA29D4A9ACA86(uLocal_66[0], __LIB_7__::func_517(uParam0));
				}
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[0], true);
			}
			if (*uParam0 == 2135153015)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[1], true);
					TASK::_0x78B4567E18B54480(uLocal_66[1]);
				}
			}
		}
	}
	else if (*uParam0 == -1427565340)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
		{
		}
	}
	else if (*uParam0 == -1859413640)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[0], true);
			TASK::_0x78B4567E18B54480(uLocal_66[0]);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[1], true);
			TASK::_0x78B4567E18B54480(uLocal_66[1]);
		}
	}
	return true;
}

void func_68(var uParam0)
{
	if (!__LIB_7__::func_530(*uParam0))
	{
		__LIB_7__::func_556(*uParam0);
		func_91(uParam0);
	}
}

void func_69(var uParam0)
{
	func_177(&iLocal_47);
	if (*uParam0 == 464413478)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[1]) && PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), uLocal_66[1]))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), uLocal_66[1]);
		}
	}
}

int func_73(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
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
				func_73(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			if (!__LIB_1__::func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
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
			__LIB_1__::func_846(iParam0);
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
						func_73(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_73(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_73(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_73(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_73(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_73(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_73(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_73(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_73(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_73(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

bool func_78(int iParam0)
{
	int iVar0;
	if (iParam0 == 0)
	{
		iVar0 = 1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 2;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 4;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 8;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 16;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 32;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 64;
	}
	else if (iParam0 == 7)
	{
		iVar0 = 128;
	}
	else if (iParam0 == 8)
	{
		iVar0 = 256;
	}
	else if (iParam0 == 9)
	{
		iVar0 = 512;
	}
	else if (iParam0 == 10)
	{
		iVar0 = 1024;
	}
	else if (iParam0 == 11)
	{
		iVar0 = 2048;
	}
	else if (iParam0 == 12)
	{
		iVar0 = 4096;
	}
	else if (iParam0 == 13)
	{
		iVar0 = 8192;
	}
	else if (iParam0 == 14)
	{
		iVar0 = 16384;
	}
	else if (iParam0 == 15)
	{
		iVar0 = 32768;
	}
	else if (iParam0 == 16)
	{
		iVar0 = 65536;
	}
	else if (iParam0 == 17)
	{
		iVar0 = 131072;
	}
	else if (iParam0 == 18)
	{
		iVar0 = 262144;
	}
	else if (iParam0 == 19)
	{
		iVar0 = 524288;
	}
	else if (iParam0 == 20)
	{
		iVar0 = 1048576;
	}
	else if (iParam0 == 21)
	{
		iVar0 = 2097152;
	}
	else if (iParam0 == 22)
	{
		iVar0 = 4194304;
	}
	else if (iParam0 == 23)
	{
		iVar0 = 8388608;
	}
	else if (iParam0 == 24)
	{
		iVar0 = 16777216;
	}
	else if (iParam0 == 25)
	{
		iVar0 = 33554432;
	}
	else if (iParam0 == 26)
	{
		iVar0 = 67108864;
	}
	else if (iParam0 == 27)
	{
		iVar0 = 134217728;
	}
	else if (iParam0 == 28)
	{
		iVar0 = 268435456;
	}
	else if (iParam0 == 29)
	{
		iVar0 = 536870912;
	}
	if (__LIB_0__::func_1(Global_40.f_8863.f_151, iVar0))
	{
		return true;
	}
	return false;
}

void func_79(int iParam0)
{
	int iVar0;
	if (iParam0 == 0)
	{
		iVar0 = 1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 2;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 4;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 8;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 16;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 32;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 64;
	}
	else if (iParam0 == 7)
	{
		iVar0 = 128;
	}
	else if (iParam0 == 8)
	{
		iVar0 = 256;
	}
	else if (iParam0 == 9)
	{
		iVar0 = 512;
	}
	else if (iParam0 == 10)
	{
		iVar0 = 1024;
	}
	else if (iParam0 == 11)
	{
		iVar0 = 2048;
	}
	else if (iParam0 == 12)
	{
		iVar0 = 4096;
	}
	else if (iParam0 == 13)
	{
		iVar0 = 8192;
	}
	else if (iParam0 == 14)
	{
		iVar0 = 16384;
	}
	else if (iParam0 == 15)
	{
		iVar0 = 32768;
	}
	else if (iParam0 == 16)
	{
		iVar0 = 65536;
	}
	else if (iParam0 == 17)
	{
		iVar0 = 131072;
	}
	else if (iParam0 == 18)
	{
		iVar0 = 262144;
	}
	else if (iParam0 == 19)
	{
		iVar0 = 524288;
	}
	else if (iParam0 == 20)
	{
		iVar0 = 1048576;
	}
	else if (iParam0 == 21)
	{
		iVar0 = 2097152;
	}
	else if (iParam0 == 22)
	{
		iVar0 = 4194304;
	}
	else if (iParam0 == 23)
	{
		iVar0 = 8388608;
	}
	else if (iParam0 == 24)
	{
		iVar0 = 16777216;
	}
	else if (iParam0 == 25)
	{
		iVar0 = 33554432;
	}
	else if (iParam0 == 26)
	{
		iVar0 = 67108864;
	}
	else if (iParam0 == 27)
	{
		iVar0 = 134217728;
	}
	else if (iParam0 == 28)
	{
		iVar0 = 268435456;
	}
	else if (iParam0 == 29)
	{
		iVar0 = 536870912;
	}
	else
	{
		return;
	}
	if (!__LIB_0__::func_1(Global_40.f_8863.f_151, iVar0))
	{
		__LIB_1__::func_683(&(Global_40.f_8863.f_151), iVar0);
	}
}

void func_80(var uParam0)
{
	int iVar0;
	int iVar1;
	switch (*uParam0)
	{
		case 870958936:
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 1))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 2))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 4))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 8))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 16))
			{
			}
			break;
		case 513110082:
			if (__LIB_0__::func_1(Global_40.f_8863.f_150, 1))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_150, 2))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_150, 4))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_150, 8))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_150, 16))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_150, 32))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_150, 64))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_150, 128))
			{
			}
			break;
		case -1061274876:
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 4096))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 8192))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 16384))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 32768))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 65536))
			{
			}
			break;
		case 1284679164:
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 131072))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 262144))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 524288))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 1048576))
			{
			}
			break;
		case 1187689415:
			iVar0 = 0;
			while (iVar0 <= (30 - 1))
			{
				if (iVar0 == 0)
				{
					iVar1 = 1;
				}
				else if (iVar0 == 1)
				{
					iVar1 = 2;
				}
				else if (iVar0 == 2)
				{
					iVar1 = 4;
				}
				else if (iVar0 == 3)
				{
					iVar1 = 8;
				}
				else if (iVar0 == 4)
				{
					iVar1 = 16;
				}
				else if (iVar0 == 5)
				{
					iVar1 = 32;
				}
				else if (iVar0 == 6)
				{
					iVar1 = 64;
				}
				else if (iVar0 == 7)
				{
					iVar1 = 128;
				}
				else if (iVar0 == 8)
				{
					iVar1 = 256;
				}
				else if (iVar0 == 9)
				{
					iVar1 = 512;
				}
				else if (iVar0 == 10)
				{
					iVar1 = 1024;
				}
				else if (iVar0 == 11)
				{
					iVar1 = 2048;
				}
				else if (iVar0 == 12)
				{
					iVar1 = 4096;
				}
				else if (iVar0 == 13)
				{
					iVar1 = 8192;
				}
				else if (iVar0 == 14)
				{
					iVar1 = 16384;
				}
				else if (iVar0 == 15)
				{
					iVar1 = 32768;
				}
				else if (iVar0 == 16)
				{
					iVar1 = 65536;
				}
				else if (iVar0 == 17)
				{
					iVar1 = 131072;
				}
				else if (iVar0 == 18)
				{
					iVar1 = 262144;
				}
				else if (iVar0 == 19)
				{
					iVar1 = 524288;
				}
				else if (iVar0 == 20)
				{
					iVar1 = 1048576;
				}
				else if (iVar0 == 21)
				{
					iVar1 = 2097152;
				}
				else if (iVar0 == 22)
				{
					iVar1 = 4194304;
				}
				else if (iVar0 == 23)
				{
					iVar1 = 8388608;
				}
				else if (iVar0 == 24)
				{
					iVar1 = 16777216;
				}
				else if (iVar0 == 25)
				{
					iVar1 = 33554432;
				}
				else if (iVar0 == 26)
				{
					iVar1 = 67108864;
				}
				else if (iVar0 == 27)
				{
					iVar1 = 134217728;
				}
				else if (iVar0 == 28)
				{
					iVar1 = 268435456;
				}
				else if (iVar0 == 29)
				{
					iVar1 = 536870912;
				}
				if (__LIB_0__::func_1(Global_40.f_8863.f_151, iVar1))
				{
				}
				iVar0++;
			}
			break;
		case 118535038:
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 128))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 256))
			{
			}
			if (__LIB_0__::func_1(Global_40.f_8863.f_149, 512))
			{
			}
			break;
		default:
			break;
	}
}

bool func_81()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (30 - 1))
	{
		if (iVar0 == 0)
		{
			iVar1 = 1;
		}
		else if (iVar0 == 1)
		{
			iVar1 = 2;
		}
		else if (iVar0 == 2)
		{
			iVar1 = 4;
		}
		else if (iVar0 == 3)
		{
			iVar1 = 8;
		}
		else if (iVar0 == 4)
		{
			iVar1 = 16;
		}
		else if (iVar0 == 5)
		{
			iVar1 = 32;
		}
		else if (iVar0 == 6)
		{
			iVar1 = 64;
		}
		else if (iVar0 == 7)
		{
			iVar1 = 128;
		}
		else if (iVar0 == 8)
		{
			iVar1 = 256;
		}
		else if (iVar0 == 9)
		{
			iVar1 = 512;
		}
		else if (iVar0 == 10)
		{
			iVar1 = 1024;
		}
		else if (iVar0 == 11)
		{
			iVar1 = 2048;
		}
		else if (iVar0 == 12)
		{
			iVar1 = 4096;
		}
		else if (iVar0 == 13)
		{
			iVar1 = 8192;
		}
		else if (iVar0 == 14)
		{
			iVar1 = 16384;
		}
		else if (iVar0 == 15)
		{
			iVar1 = 32768;
		}
		else if (iVar0 == 16)
		{
			iVar1 = 65536;
		}
		else if (iVar0 == 17)
		{
			iVar1 = 131072;
		}
		else if (iVar0 == 18)
		{
			iVar1 = 262144;
		}
		else if (iVar0 == 19)
		{
			iVar1 = 524288;
		}
		else if (iVar0 == 20)
		{
			iVar1 = 1048576;
		}
		else if (iVar0 == 21)
		{
			iVar1 = 2097152;
		}
		else if (iVar0 == 22)
		{
			iVar1 = 4194304;
		}
		else if (iVar0 == 23)
		{
			iVar1 = 8388608;
		}
		else if (iVar0 == 24)
		{
			iVar1 = 16777216;
		}
		else if (iVar0 == 25)
		{
			iVar1 = 33554432;
		}
		else if (iVar0 == 26)
		{
			iVar1 = 67108864;
		}
		else if (iVar0 == 27)
		{
			iVar1 = 134217728;
		}
		else if (iVar0 == 28)
		{
			iVar1 = 268435456;
		}
		else if (iVar0 == 29)
		{
			iVar1 = 536870912;
		}
		if (!__LIB_0__::func_1(Global_40.f_8863.f_151, iVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_83(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 4096))
					{
						return true;
					}
					break;
				case 1:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 8192))
					{
						return true;
					}
					break;
				case 2:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 16384))
					{
						return true;
					}
					break;
				case 3:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 32768))
					{
						return true;
					}
					break;
				case 4:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 65536))
					{
						return true;
					}
					break;
				default:
					break;
			}
			break;
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 131072))
					{
						return true;
					}
					break;
				case 1:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 262144))
					{
						return true;
					}
					break;
				case 2:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 524288))
					{
						return true;
					}
					break;
				case 3:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 1048576))
					{
						return true;
					}
					break;
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 128))
					{
						return true;
					}
					break;
				case 1:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 256))
					{
						return true;
					}
					break;
				case 2:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 512))
					{
						return true;
					}
					break;
				default:
					break;
			}
			break;
		case 870958936:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 1))
					{
						return true;
					}
					break;
				case 1:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 2))
					{
						return true;
					}
					break;
				case 2:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 4))
					{
						return true;
					}
					break;
				case 3:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 8))
					{
						return true;
					}
					break;
				case 4:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 16))
					{
						return true;
					}
					break;
				default:
					break;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_1(Global_40.f_8863.f_150, 1))
					{
						return true;
					}
					break;
				case 1:
					if (__LIB_0__::func_1(Global_40.f_8863.f_150, 2))
					{
						return true;
					}
					break;
				case 2:
					if (__LIB_0__::func_1(Global_40.f_8863.f_150, 4))
					{
						return true;
					}
					break;
				case 3:
					if (__LIB_0__::func_1(Global_40.f_8863.f_150, 8))
					{
						return true;
					}
					break;
				case 4:
					if (__LIB_0__::func_1(Global_40.f_8863.f_150, 16))
					{
						return true;
					}
					break;
				case 5:
					if (__LIB_0__::func_1(Global_40.f_8863.f_150, 32))
					{
						return true;
					}
					break;
				case 6:
					if (__LIB_0__::func_1(Global_40.f_8863.f_150, 64))
					{
						return true;
					}
					break;
				case 7:
					if (__LIB_0__::func_1(Global_40.f_8863.f_150, 128))
					{
						return true;
					}
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 134217728))
					{
						return true;
					}
					break;
				case 1:
					if (__LIB_0__::func_1(Global_40.f_8863.f_149, 67108864))
					{
						return true;
					}
					break;
			}
			break;
		default:
			break;
	}
	return false;
}

int func_84(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 4096))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 4096);
					}
					break;
				case 1:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 8192))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 8192);
					}
					break;
				case 2:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 16384))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 16384);
					}
					break;
				case 3:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 32768))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 32768);
					}
					break;
				case 4:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 65536))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 65536);
					}
					break;
				default:
					break;
			}
			break;
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 131072))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 131072);
					}
					break;
				case 1:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 262144))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 262144);
					}
					break;
				case 2:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 524288))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 524288);
					}
					break;
				case 3:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 1048576))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 1048576);
					}
					break;
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 128))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 128);
					}
					break;
				case 1:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 256))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 256);
					}
					break;
				case 2:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 512))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 512);
					}
					break;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_150, 1))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_150), 1);
					}
					break;
				case 1:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_150, 2))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_150), 2);
					}
					break;
				case 2:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_150, 4))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_150), 4);
					}
					break;
				case 3:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_150, 8))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_150), 8);
					}
					break;
				case 4:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_150, 16))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_150), 16);
					}
					break;
				case 5:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_150, 32))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_150), 32);
					}
					break;
				case 6:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_150, 64))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_150), 64);
					}
					break;
				case 7:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_150, 128))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_150), 128);
					}
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 134217728))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 134217728);
					}
					break;
				case 1:
					if (!__LIB_0__::func_1(Global_40.f_8863.f_149, 67108864))
					{
						__LIB_1__::func_683(&(Global_40.f_8863.f_149), 67108864);
					}
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

Vector3 func_86(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1859413640:
			return 2195.23f, -554.23f, 40.86f;
		case -1481450947:
			return 1268.257f, -387.328f, 88.459f;
		case -1427565340:
			return 2255.135f, -754.127f, 41.793f;
		case -1887999095:
			return 1772.964f, -1359.736f, 44.18f;
		case 2000209669:
			return 830.53f, 1923.9f, 258.33f;
		case -161804536:
			return 2385.593f, 1696.987f, 94.94f;
		case 733338689:
			return 2388.11f, 1688.02f, 94.66f;
		case 2135153015:
			return -161.88f, 1734.6f, 169.73f;
		case 2072029413:
			return 808.47f, 2300.12f, 250.82f;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1182.68f, 2036.35f, 322.98f;
				case 1:
					return 1227.191f, 2007.389f, 319.3389f;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -2532.075f, 1173.143f, 224.93f;
				case 1:
					return 3028.165f, 1781.019f, 83.127f;
				case 2:
					return -4394.824f, -2159.366f, 47.3844f;
				default:
					break;
			}
			Jump @652; //curOff = 402
			switch (iParam1)
			{
				case 0:
					return 2783.187f, 532.9774f, 70.28662f;
				case 1:
					return 2783.885f, 534.9501f, 70.2896f;
				case 2:
					return 2784.209f, 532.77f, 70.28524f;
				case 3:
					return 2782.702f, 535.7864f, 70.28931f;
				default:
					break;
			}
			Jump @652; //curOff = 512
			switch (iParam1)
			{
				case 0:
					return -1518.81f, 533.46f, 101.45f;
				case 1:
					return 1251.4f, 1165.7f, 149.09f;
				case 2:
					return -150.285f, 1498.717f, 114.935f;
				case 3:
					return 2939.35f, 1422.56f, 44.58f;
				case 4:
					return 1973.787f, 1192.337f, 170.517f;
				default:
					break;
			}
			return 0f, 0f, 0f;
		}
int func_87(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1859413640:
			return joaat("RANSACK_VOLUME_NARROW_0M5_0M5_2M0");
		case -2008558277:
			return joaat("WORLD_ANIMAL_BAT_HANGING");
		case -1481450947:
			return joaat("RANSACK_REACH_OVER_VOLUME_NARROW_0M5_0M5_2M0");
		case -1427565340:
			return joaat("RANSACK_REACH_OVER_VOLUME_0M8_0M5_2M0");
		case -1887999095:
			return joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
		case 2000209669:
			return joaat("RANSACK_STRANGE_STATUES_STASH");
		case -161804536:
			return joaat("RANSACK_VOLUME_0M8_0M5_2M0");
		case 733338689:
			return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_VIKING");
		case 2072029413:
			return joaat("WORLD_PLAYER_PICKUP_WEAPON_THROWN_TOMAHAWK_ANCIENT");
		case 247563739:
			return joaat("PROP_PLAYER_LNS_FLOOR_STASH");
		case -35775921:
			return joaat("RANSACK_REACH_OVER_CENTERED_GROUND_PICKUP");
		case 2135153015:
			return joaat("RANSACK_REACH_OVER_GENERIC_LETTER_PROMPT_0M5_0M5_2M0");
		case 513110082:
			return joaat("RANSACK_ATTACHED_CHEST_MEDIUM_OPEN_ONLY");
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_PLAYER_DRINK_WITCHES_BREW");
				case 1:
					return joaat("WORLD_PLAYER_SLEEP_GROUND");
			}
			break;
		case 1284679164:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
				default:
					break;
			}
			break;
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_DOUBLE_BIT");
				case 1:
					return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_HEWING");
				case 2:
					return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_HUNTER");
				case 3:
					return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
				case 4:
					return joaat("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
				default:
					break;
			}
			return 0;
		}
int func_88(var uParam0)
{
	switch (*uParam0)
	{
		case 1187689415:
			return joaat("AMMO_ARROW");
		case 513110082:
			return joaat("AMMO_REVOLVER");
		default:
			break;
	}
	return 0;
}

int func_90(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = __LIB_0__::func_937(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) < 0)
		{
			func_90(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

void func_91(var uParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (__LIB_7__::func_471(*uParam0) != 0)
	{
		if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(__LIB_7__::func_471(*uParam0)))
		{
			MAP::_0xD8C7162AB2E2AF45(__LIB_7__::func_471(*uParam0));
		}
		__LIB_7__::func_498(*uParam0, 8);
	}
}

void func_92(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (__LIB_0__::func_266(Global_35, func_86(uParam0, uParam0->f_4), 15f, 1, 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iParam3]))
		{
			(*uParam2)[iParam3] = __LIB_14__::func_536(uParam1, "PrimaryItem");
		}
		else if (!DECORATOR::DECOR_EXIST_ON((*uParam2)[iParam3], "letter_item"))
		{
			if (!__LIB_7__::func_513(uParam0, iParam3) == -1)
			{
				if (TXD::_DOES_STREAMED_TXD_EXIST(__LIB_7__::func_513(uParam0, iParam3)))
				{
					OBJECT::_SET_APPLY_OBJECT_TXD((*uParam2)[iParam3], __LIB_7__::func_513(uParam0, iParam3), 0, 0);
				}
			}
			if (*uParam0 == 1284679164)
			{
				if (iParam3 == 0)
				{
					iVar0 = joaat("DOCUMENT_NOTE_FRANKENSTEIN_1");
				}
				else if (iParam3 == 1)
				{
					iVar0 = joaat("DOCUMENT_NOTE_FRANKENSTEIN_2");
				}
				else if (iParam3 == 2)
				{
					iVar0 = joaat("DOCUMENT_NOTE_FRANKENSTEIN_3");
				}
				else if (iParam3 == 3)
				{
					iVar0 = joaat("DOCUMENT_NOTE_FRANKENSTEIN_4");
				}
			}
			else if (*uParam0 == -1887999095)
			{
				iVar0 = joaat("DOCUMENT_DISCO_GRAYS_SECRET_LETTER");
			}
			DECORATOR::DECOR_SET_INT((*uParam2)[iParam3], "letter_item", iVar0);
		}
	}
}

void func_97(var uParam0)
{
	int iVar0;
	switch (*uParam0)
	{
		case 870958936:
			if (uParam0->f_4 == 0)
			{
				iVar0 = 1;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar0 = 2;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar0 = 4;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar0 = 8;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar0 = 16;
			}
			else
			{
				return;
			}
			break;
		default:
			break;
	}
	if (!__LIB_0__::func_1(Global_40.f_8863.f_149, iVar0))
	{
		__LIB_1__::func_683(&(Global_40.f_8863.f_149), iVar0);
	}
}

void func_102(var uParam0)
{
	int iVar0;
	__LIB_7__::func_521(&uLocal_66);
	if (*uParam0 == 1284679164 || *uParam0 == -780455182)
	{
		iVar0 = 0;
		while (iVar0 <= (4 - 1))
		{
			if (!__LIB_7__::func_513(uParam0, iVar0) == -1)
			{
				if (TXD::_DOES_STREAMED_TXD_EXIST(__LIB_7__::func_513(uParam0, iVar0)))
				{
					TXD::_SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(__LIB_7__::func_513(uParam0, iVar0));
				}
			}
			iVar0++;
		}
	}
}

bool func_131()
{
	int iVar0;
	if (!__LIB_1__::func_707(joaat("DOCUMENT_PLAYER_JOURNAL"), 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	if (!__LIB_7__::func_481(16))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return false;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || __LIB_0__::func_491(Global_35, 1369124074))
	{
		return false;
	}
	if ((((((PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_X")) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_Y"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_A"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_B"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_LT"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_RT"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CONTEXT_ACTION")))
	{
		return false;
	}
	iVar0 = joaat("DOCUMENT_PLAYER_JOURNAL");
	if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), iVar0, 0))
	{
		return false;
	}
	Global_36620 = MISC::GET_GAME_TIMER() + 1000;
	__LIB_7__::func_451();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iVar0, 1928812891, 1, 0, -1082130432 /* Float: -1f */);
	return true;
}

void func_156(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar3 = { 0f, 0f, 0f };
	if (((*uParam0 == -1427565340 || *uParam0 == -657632) || *uParam0 == 2135153015) || *uParam0 == -709811179)
	{
		vVar6.x = (2f * 2f);
		vVar6.f_1 = (2f * 2f);
		vVar6.f_2 = 3f;
	}
	else
	{
		vVar6.x = 2f;
		vVar6.f_1 = 2f;
		vVar6.f_2 = 3f;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
	{
		vVar0 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true) };
	}
	if (*uParam0 == 247563739)
	{
		vVar0 = { 2449.782f, 2098.213f, 172.2724f };
		vVar3 = { 0f, 0f, -45.764f };
		vVar6 = { 3.445997f, 4.034004f, 5.6249f };
	}
	if (!__LIB_0__::func_86(vVar0))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_14))
		{
			if (*uParam0 == 247563739)
			{
				iLocal_14 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_316(uParam0));
			}
			else
			{
				iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_316(uParam0));
			}
		}
	}
}

void func_157(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		uLocal_66.f_6[iVar0] = 0;
		iVar0++;
	}
	switch (*uParam0)
	{
		case -1427565340:
			uLocal_66.f_6[0] = joaat("S_URNDISCOVERABLE01X");
			uLocal_66.f_6[1] = joaat("S_SHRUNKENHEAD01X");
			break;
		case -1859413640:
			uLocal_66.f_6[0] = joaat("S_INV_WHISKEY01X");
			uLocal_66.f_6[1] = joaat("P_APPLE01X");
			break;
		case -780455182:
			uLocal_66.f_6[0] = joaat("P_CS_NEWSCLIP01X");
			break;
		case 1335921989:
			uLocal_66.f_6[0] = joaat("P_FOLDEDBILLSSMALL01X");
			break;
		case 2135153015:
			uLocal_66.f_6[1] = joaat("P_CS_RT_ENVELOPE01X");
			break;
		case -709811179:
			uLocal_66.f_6[0] = joaat("S_METEORITESHARD01X");
			break;
		case -1061274876:
			uLocal_66.f_6[0] = joaat("P_CS_RT_ENVELOPE01X");
			uLocal_66.f_6[1] = joaat("P_CS_RT_ENVELOPE01X");
			uLocal_66.f_6[2] = joaat("P_CS_RT_ENVELOPE01X");
			uLocal_66.f_6[3] = joaat("P_CS_RT_ENVELOPE01X");
			uLocal_66.f_6[4] = joaat("P_CS_RT_ENVELOPE01X");
			break;
		case 513110082:
			switch (uParam0->f_4)
			{
				case 0:
					uLocal_66.f_6[0] = joaat("P_CS_RT_ENVELOPE01X");
					break;
				case 1:
					uLocal_66.f_6[0] = joaat("P_CS_RT_ENVELOPE01X");
					break;
				case 2:
					uLocal_66.f_6[0] = joaat("P_CS_PHOTONUDIE01X_4X6");
					uLocal_66.f_6[1] = joaat("P_CS_PHOTONUDIE02X_4X6");
					uLocal_66.f_6[2] = joaat("P_CS_PHOTONUDIE03X_4X6");
					uLocal_66.f_6[3] = joaat("P_CS_PHOTONUDIE04X_4X6");
					uLocal_66.f_6[4] = joaat("P_CS_PHOTONUDIE05X_4X6");
					break;
			}
			break;
		case 464413478:
			uLocal_66.f_6[0] = joaat("P_DISWISKEYTREEBOTTLEWIND01X");
			uLocal_66.f_6[1] = joaat("P_GOLDNUGGET01X");
			break;
		case 373034311:
			uLocal_66.f_6[0] = joaat("P_ANCIENTARROWHEAD02X");
			break;
		case 1284679164:
			uLocal_66.f_6[0] = joaat("P_CS_LETTER03X");
			uLocal_66.f_6[1] = joaat("P_CS_LETTER03X");
			uLocal_66.f_6[2] = joaat("P_CS_LETTER03X");
			uLocal_66.f_6[3] = joaat("P_CS_LETTER03X");
			break;
		case -1494823099:
			uLocal_66.f_6[0] = joaat("S_JEWLERYBOX_SM_PLAIN01X");
			uLocal_66.f_6[1] = joaat("S_JEWLERYBOX_LRG_PLAIN01X");
			break;
		case 118535038:
			uLocal_66.f_6[0] = joaat("P_CS_NEWSCLIP01X");
			uLocal_66.f_6[1] = joaat("P_CS_NEWSCLIP01X");
			uLocal_66.f_6[2] = joaat("P_CS_RT_ENVELOPE01X");
			break;
		case 247563739:
			uLocal_66.f_6[0] = joaat("P_LNNHOUSE_STASH02");
			break;
		case -1481450947:
		case -1420566543:
		case -1208846034:
		case -763376358:
		case -599506500:
		case -357364973:
		case -261997819:
		case -657632:
		case 435290930:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1424723727:
		case 1490223565:
		case 1801731633:
		case 2072029413:
			break;
		default:
			break;
	}
}

bool func_164(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (*uParam1 == 0)
	{
		*uParam1 = ENTITY::_0x6F3068258A499E52(uParam2->f_6[iParam3], __LIB_7__::func_467(uParam0, iParam3), iParam4);
	}
	else if (ENTITY::_0x1FF441D7954F8709(*uParam1) && !ENTITY::DOES_ENTITY_EXIST((*uParam2)[iParam3]))
	{
		(*uParam2)[iParam3] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(*uParam1));
		if (!ENTITY::IS_ENTITY_DEAD((*uParam2)[iParam3]))
		{
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iParam3]))
	{
		return true;
	}
	return false;
}

float func_168(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1859413640:
			return -162.606f;
		case -1481450947:
			return 0f;
		case -1427565340:
			return -49.4f;
		case -1887999095:
			return 40f;
		case 2000209669:
			return -13f;
		case -161804536:
			return -160f;
		case 733338689:
			return -5.848f;
		case 2072029413:
			return -155.926f;
		case 2135153015:
			return 3.97f;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 80.219f;
				case 1:
					return 103.5514f;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -173f;
				case 1:
					return 0f;
				case 2:
					return 0f;
				default:
					break;
			}
			Jump @410; //curOff = 250
			switch (iParam1)
			{
				case 0:
					return 108.929f;
				case 1:
					return -98.32f;
				case 2:
					return -76.119f;
				case 3:
					return -156.164f;
				default:
					break;
			}
			Jump @410; //curOff = 320
			switch (iParam1)
			{
				case 0:
					return -156f;
				case 1:
					return -156f;
				case 2:
					return 20f;
				case 3:
					return -142.537f;
				case 4:
					return 30f;
				default:
					break;
			}
			return 0f;
		}
var func_169(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, fParam4, iParam5, iParam6, iParam7);
}

bool func_172(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	if (bParam3)
	{
		while (iLocal_61 < 30)
		{
			if (!func_78(iLocal_61))
			{
				if (!OBJECT::DOES_PICKUP_EXIST((*iParam1)[iLocal_61]))
				{
					if (!__LIB_0__::func_86(__LIB_7__::func_503(uParam0, iLocal_61)))
					{
						__LIB_1__::func_683(&iLocal_60, 2);
						(*iParam1)[iLocal_61] = OBJECT::CREATE_PICKUP_ROTATE(__LIB_7__::func_502(uParam0, uParam0->f_4), __LIB_7__::func_503(uParam0, iLocal_61), __LIB_7__::func_504(uParam0, iLocal_61), iLocal_60, -1, 0, true, 0, 0, 0f, 0);
					}
				}
			}
			iLocal_61++;
		}
		__LIB_0__::func_19(uParam2, 2);
		return true;
	}
	else
	{
		switch (*uParam2)
		{
			case 0:
				__LIB_0__::func_19(uParam2, 1);
				break;
			case 1:
				if (iLocal_61 < 30)
				{
					if (!func_78(iLocal_61))
					{
						if (!OBJECT::DOES_PICKUP_EXIST((*iParam1)[iLocal_61]))
						{
							if (!__LIB_0__::func_86(__LIB_7__::func_503(uParam0, iLocal_61)))
							{
								__LIB_1__::func_683(&iLocal_60, 2);
								(*iParam1)[iLocal_61] = OBJECT::CREATE_PICKUP_ROTATE(__LIB_7__::func_502(uParam0, uParam0->f_4), __LIB_7__::func_503(uParam0, iLocal_61), __LIB_7__::func_504(uParam0, iLocal_61), iLocal_60, -1, 0, true, 0, 0, 0f, 0);
							}
						}
					}
					iLocal_61++;
				}
				else
				{
					__LIB_0__::func_19(uParam2, 2);
				}
				break;
			case 2:
				return true;
		}
	}
	return false;
}

int func_174(var uParam0, int iParam1)
{
	int iVar0;
	if (!func_87(uParam0, iParam1) == 0)
	{
		iVar0 = func_169(func_87(uParam0, iParam1), func_86(uParam0, iParam1), func_168(uParam0, iParam1), 0, 0, 0);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

void func_177(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST((*iParam0)[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

char* func_316(var uParam0)
{
	switch (*uParam0)
	{
		case -1481450947:
			return "DISC_VOL_ABANDONED_WELL";
		case -1427565340:
			return "DISC_VOL_ANCIENT_URN";
		case -763376358:
			return "DISC_VOL_ANIMAL_MASK";
		case 1801731633:
			return "DISC_VOL_CAT_MASK";
		case 1490223565:
			return "DISC_VOL_RAM_MASK";
		case -261997819:
			return "DISC_VOL_ANCIENT_CLUB";
		case 2072029413:
			return "DISC_VOL_ANCIENT_TOMAHAWK";
		case 733338689:
			return "DISC_VOL_VIKING_GEAR";
		case 1124200691:
			return "DISC_VOL_CIVIL_WAR_HAT";
		case -1859413640:
			return "DISC_VOL_SHRINE_FOR_WIFE";
		case -599506500:
			return "DISC_VOL_CIVIL_WAR_SWORD";
		case 1424723727:
			return "DISC_VOL_PIRATE_SWORD";
		case 435290930:
			return "DISC_VOL_BIRD_NEST";
		case -1420566543:
			return "DISC_VOL_SCARECROW_1";
		case -1208846034:
			return "DISC_VOL_SCARECROW_2";
		case 1048086072:
			return "DISC_VOL_SCARECROW_3";
		case 939555152:
			return "DISC_VOL_SCARECROW_4";
		case 1187689415:
			return "DISC_VOL_WAGON_CIRCLE";
		case -657632:
			return "DISC_VOL_RAILROAD_GRAVESTONE";
		case 1284679164:
			return "DISC_VOL_FRANKEN_BOOK";
		case -357364973:
			return "DISC_VOL_PIRATE_RUM";
		case -780455182:
			return "DISC_VOL_DEFACED_GRAVE";
		case -1494823099:
			return "DISC_VOL_BLACK_FLOWER";
		case -1061274876:
			return "DISC_VOL_MAIL_WAGON";
		case 1335921989:
			return "DISC_VOL_BANK_STAGECOACH";
		case 2135153015:
			return "DISC_VOL_BOOTS_NOTE";
		case -709811179:
			return "DISC_VOL_METEORITE";
		case 464413478:
			return "DISC_VOL_WHISKEY_TREE";
		case 373034311:
			return "DISC_VOL_ANCIENT_ARROWS";
		case 118535038:
			return "DISC_VOL_MICAH_CAMP";
		case 247563739:
			return "DISC_VOL_ABANDON_TRADING_POST";
		case 870958936:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_AXE_IN_TREE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_AXE_IN_TREE_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_AXE_IN_TREE_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_AXE_IN_TREE_4";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_AXE_IN_TREE_5";
			}
			break;
		case 513110082:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_TREASURE_MAP_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_TREASURE_MAP_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_TREASURE_MAP_REWARD";
			}
			break;
		default:
			break;
	}
	return "";
}

