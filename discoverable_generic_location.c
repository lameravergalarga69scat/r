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
	int iLocal_15 = 0;
	int iLocal_16[2] = { 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	bool bLocal_23 = false;
	struct<2> Local_24 = { 0, 0 } ;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 5;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 5;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	struct<13> Local_40 = { 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	struct<5> Local_71 = { 0, 0, 0, 0, -1 } ;
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
	var uLocal_91 = -1;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 2;
	var uLocal_96 = 1;
	var uLocal_97 = 1;
	var uLocal_98 = 1;
	var uLocal_99 = 0;
	var uLocal_100 = 1;
	var uLocal_101 = 2;
	var uLocal_102 = 2;
	var uLocal_103 = 3;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 3;
	var uLocal_107 = 1;
	var uLocal_108 = 3;
	var uLocal_109 = 3;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_70 = ScriptParam_0;
	Local_71.f_1 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&Local_71);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_1(&Local_71);
	}
	while (__LIB_7__::func_453())
	{
		switch (iLocal_69)
		{
			case 0:
				if (func_3(&Local_71))
				{
					iLocal_69 = 1;
					if (Local_71.f_4 != -1)
					{
					}
					else
					{
						Local_71.f_4 = func_4(&Local_71);
					}
				}
				break;
			case 1:
				if (func_5(&Local_71))
				{
					func_6(&Local_71);
				}
				func_7(&Local_71);
				func_8(&Local_71);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_71);
}

void func_1(var uParam0)
{
	func_9(uParam0);
	SCRIPTS::_0xE7282390542F570D(uLocal_70);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(var uParam0)
{
	int iVar0;
	if (Local_71 == 0)
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_1);
		Local_71 = __LIB_7__::func_454(iVar0);
		return false;
	}
	if (__LIB_7__::func_497(Local_71, 4) || Global_40.f_8863.f_156)
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
			if (func_15())
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
		if (!__LIB_7__::func_580(uParam0))
		{
			func_18(uParam0);
			__LIB_0__::func_615(uParam0, 0);
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			if (!__LIB_7__::func_580(uParam0))
			{
				return;
			}
			if ((*uParam0 == -890175011 || *uParam0 == 677950956) || *uParam0 == -321841939)
			{
				if (__LIB_7__::func_581(uParam0))
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
				if ((((__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16)) || *uParam0 == -890175011) || *uParam0 == 677950956) || (*uParam0 == -1761578407 && __LIB_7__::func_581(uParam0)))
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
				func_18(uParam0);
				__LIB_0__::func_615(uParam0, 1);
			}
			else if (__LIB_7__::func_559(uParam0, 0))
			{
				func_28(uParam0);
				if ((__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16)) || (*uParam0 == -1761578407 && __LIB_7__::func_581(uParam0)))
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
			__LIB_7__::func_571(uParam0, uParam0->f_6.f_8, func_29(uParam0), 0);
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				func_18(uParam0);
				__LIB_0__::func_615(uParam0, 1);
			}
			else if (__LIB_7__::func_559(uParam0, 1))
			{
				func_18(uParam0);
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
						func_37(1, -1);
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
					if (!__LIB_0__::func_27(uParam0->f_3, 2))
					{
						__LIB_1__::func_581(&(uParam0->f_3), 2);
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
			else if (__LIB_0__::func_27(uParam0->f_3, 2))
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
			__LIB_7__::func_571(uParam0, uParam0->f_6.f_8, func_29(uParam0), 0);
			if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
			{
				__LIB_7__::func_455(uParam0);
			}
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				func_18(uParam0);
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
				if (__LIB_0__::func_27(uParam0->f_3, 2))
				{
					__LIB_1__::func_993(&(uParam0->f_3), 2);
				}
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					__LIB_7__::func_456(uParam0);
				}
				if ((*uParam0 == -890175011 || *uParam0 == 677950956) || *uParam0 == -321841939)
				{
					func_18(uParam0);
					__LIB_0__::func_615(uParam0, 7);
				}
				else
				{
					__LIB_0__::func_615(uParam0, 6);
				}
			}
			break;
		case 6:
			__LIB_7__::func_571(uParam0, uParam0->f_6.f_8, func_29(uParam0), 0);
			if (__LIB_0__::func_94(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				func_18(uParam0);
				__LIB_0__::func_615(uParam0, 1);
			}
			else if (__LIB_7__::func_559(uParam0, 1))
			{
				func_18(uParam0);
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
	if (!__LIB_0__::func_27(uParam0->f_3, 8))
	{
		if (__LIB_7__::func_457(*uParam0) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2))
		{
			if (func_46(&(uParam0->f_2)))
			{
				iVar0 = 3;
				if (*uParam0 == -849582265 && Global_40.f_11953)
				{
					iVar0 = 4;
				}
				func_47(iVar0, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				__LIB_1__::func_581(&(uParam0->f_3), 8);
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
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (Local_24 > 0 && Local_24 < 13)
	{
	}
	switch (Local_24)
	{
		case 0:
			if (__LIB_0__::func_27(uParam0->f_3, 1))
			{
				__LIB_1__::func_993(&(uParam0->f_3), 1);
			}
			if (((*uParam0 == -544327665 || *uParam0 == 1120968795) || *uParam0 == 1519472817) || *uParam0 == -1859023693)
			{
				if (!__LIB_7__::func_581(uParam0))
				{
					if (!__LIB_0__::func_266(Global_35, func_13(uParam0, uParam0->f_4), 40f, 1, 1))
					{
						return;
					}
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == 308500632 || *uParam0 == 221420861)
			{
				if (!func_49(uParam0))
				{
					return;
				}
			}
			else if (*uParam0 == -1761578407)
			{
				if (uParam0->f_4 == 7)
				{
					__LIB_2__::func_29(1);
				}
				if (!func_49(uParam0))
				{
					return;
				}
				if (!__LIB_0__::func_266(Global_35, func_13(uParam0, uParam0->f_4), 40f, 1, 1))
				{
					return;
				}
				if (!__LIB_7__::func_581(uParam0))
				{
					if (__LIB_7__::func_497(*uParam0, 16))
					{
						func_51(*uParam0, 16);
					}
				}
			}
			else if (*uParam0 == 404434344)
			{
				if (!func_49(uParam0))
				{
					return;
				}
			}
			else if (*uParam0 == -890175011 || *uParam0 == 677950956)
			{
				if (!__LIB_7__::func_581(uParam0))
				{
					if (__LIB_7__::func_497(*uParam0, 16))
					{
						func_51(*uParam0, 16);
					}
				}
				if (!func_49(uParam0))
				{
					return;
				}
			}
			else if (*uParam0 == -1272862985)
			{
				if (__LIB_7__::func_581(uParam0))
				{
					if (!__LIB_7__::func_497(*uParam0, 16))
					{
						__LIB_7__::func_498(*uParam0, 16);
					}
				}
				else if (__LIB_7__::func_497(*uParam0, 16))
				{
					func_51(*uParam0, 16);
				}
			}
			else if (*uParam0 == -321841939)
			{
				if (!__LIB_7__::func_581(uParam0))
				{
					if (!__LIB_7__::func_583())
					{
						if (__LIB_7__::func_497(*uParam0, 16))
						{
							func_51(*uParam0, 16);
						}
					}
				}
			}
			else if (*uParam0 == 74587361)
			{
				if (__LIB_7__::func_530(*uParam0))
				{
					if (__LIB_1__::func_185(59))
					{
						if (!__LIB_0__::func_898(-108307814))
						{
							if (!__LIB_18__::func_39(-108307814))
							{
								__LIB_1__::func_408(-108307814, 1, 0);
							}
						}
					}
					__LIB_7__::func_531(&Local_24, 13, 1);
					return;
				}
			}
			else if (*uParam0 == 1464664327 || *uParam0 == 1347913620)
			{
				if (__LIB_7__::func_530(*uParam0))
				{
					__LIB_7__::func_531(&Local_24, 13, 1);
					return;
				}
			}
			else if (*uParam0 == 2000209669)
			{
				if (uParam0->f_4 == 11)
				{
					if (__LIB_7__::func_581(uParam0))
					{
						if (!__LIB_7__::func_497(*uParam0, 16))
						{
							__LIB_7__::func_498(*uParam0, 16);
						}
						if (!__LIB_7__::func_497(*uParam0, 32))
						{
							__LIB_7__::func_498(*uParam0, 32);
						}
					}
					else
					{
						if (__LIB_7__::func_497(*uParam0, 16))
						{
							func_51(*uParam0, 16);
						}
						if (__LIB_7__::func_497(*uParam0, 32))
						{
							func_51(*uParam0, 32);
						}
					}
				}
				else if (func_58(uParam0, 1))
				{
					if (__LIB_7__::func_581(uParam0))
					{
						if (!__LIB_7__::func_497(*uParam0, 16))
						{
							__LIB_7__::func_498(*uParam0, 16);
						}
						if (!__LIB_7__::func_497(*uParam0, 32))
						{
							__LIB_7__::func_498(*uParam0, 32);
						}
					}
					else
					{
						if (__LIB_7__::func_497(*uParam0, 16))
						{
							func_51(*uParam0, 16);
						}
						if (__LIB_7__::func_497(*uParam0, 32))
						{
							func_51(*uParam0, 32);
						}
					}
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == -1308658310)
			{
				if (__LIB_7__::func_530(*uParam0))
				{
					if (!func_59(uParam0, 0))
					{
						return;
					}
					__LIB_7__::func_531(&Local_24, 13, 1);
				}
				else
				{
					if (!func_59(uParam0, 1))
					{
						return;
					}
					if (!func_49(uParam0))
					{
						return;
					}
				}
			}
			else if (__LIB_7__::func_530(*uParam0))
			{
			}
			func_60(uParam0);
			__LIB_7__::func_531(&Local_24, 1, 1);
			break;
		case 1:
			func_61(uParam0);
			__LIB_7__::func_531(&Local_24, 2, 1);
			break;
		case 2:
			if (!func_62(uParam0) || __LIB_1__::func_927())
			{
				return;
			}
			__LIB_7__::func_531(&Local_24, 3, 1);
			break;
		case 3:
			if (func_64(uParam0))
			{
				__LIB_7__::func_531(&Local_24, 10, 1);
			}
			break;
		case 10:
			if (!*uParam0 == 1535254161)
			{
				if (!__LIB_0__::func_27(uParam0->f_3, 1))
				{
					__LIB_1__::func_581(&(uParam0->f_3), 1);
					if (*uParam0 == -1614148516)
					{
						Global_40.f_8863.f_146++;
					}
				}
			}
			if (*uParam0 == 221420861)
			{
				if (!func_49(uParam0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE(__LIB_7__::func_577(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_66(uParam0);
					__LIB_7__::func_531(&Local_24, 13, 1);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					if (__LIB_0__::func_265(&(Local_24.f_1)) >= 5f)
					{
						MISC::_SET_WEATHER_TYPE(joaat("FOG"), false, true, true, 15f, false);
						fLocal_22 = 0.1f;
						GRAPHICS::USE_PARTICLE_FX_ASSET("scr_discoverables");
						iLocal_20 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_disc_whispering_trees", func_68(uParam0), 0f, 0f, 0f, 1f, false, false, false, false);
						GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_20, "density", fLocal_22, false);
						__LIB_7__::func_531(&Local_24, 11, 1);
					}
				}
				else
				{
					__LIB_1__::func_148(&(Local_24.f_1));
				}
			}
			else if (*uParam0 == 1464664327)
			{
				if ((!__LIB_7__::func_497(*uParam0, 8) && VOLUME::_DOES_VOLUME_EXIST(iLocal_14)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					func_69(uParam0);
				}
				if (func_70(uParam0))
				{
					func_71(uParam0);
					func_66(uParam0);
					__LIB_7__::func_531(&Local_24, 13, 1);
				}
			}
			else if (*uParam0 == -1308658310)
			{
				if (func_72(uParam0))
				{
					func_66(uParam0);
					__LIB_7__::func_531(&Local_24, 13, 1);
				}
			}
			else if (*uParam0 == 2000209669)
			{
				if (uParam0->f_4 == 11)
				{
					if (!__LIB_7__::func_581(uParam0))
					{
						if (__LIB_7__::func_497(*uParam0, 16))
						{
							func_73(uParam0);
							if (((__LIB_0__::func_27(Global_40.f_8863.f_152, 2048) && __LIB_0__::func_27(Global_40.f_8863.f_152, 4096)) && __LIB_0__::func_27(Global_40.f_8863.f_152, 8192)) && __LIB_0__::func_27(Global_40.f_8863.f_152, 16384))
							{
								func_71(uParam0);
							}
							else
							{
								__LIB_7__::func_532(*uParam0);
							}
						}
					}
				}
				else if (!__LIB_7__::func_530(*uParam0))
				{
					if (!__LIB_7__::func_497(*uParam0, 32) && __LIB_7__::func_497(*uParam0, 16))
					{
						__LIB_7__::func_532(*uParam0);
					}
					if (func_75(uParam0))
					{
						if ((((__LIB_0__::func_27(Global_40.f_8863.f_152, 2048) && __LIB_0__::func_27(Global_40.f_8863.f_152, 4096)) && __LIB_0__::func_27(Global_40.f_8863.f_152, 8192)) && __LIB_0__::func_27(Global_40.f_8863.f_152, 16384)) && __LIB_7__::func_497(*uParam0, 16))
						{
							func_71(uParam0);
						}
					}
				}
			}
			else if (*uParam0 == 1347913620)
			{
				if (!__LIB_7__::func_497(*uParam0, 8))
				{
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						func_69(uParam0);
					}
				}
				if (!__LIB_7__::func_497(*uParam0, 32))
				{
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						__LIB_7__::func_532(*uParam0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_28[0]))
				{
					if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 0), 15f, 1, 1))
					{
						TASK::_0xA6A76D666A281F2D(uLocal_28[0], __LIB_7__::func_509(uParam0, 0));
					}
				}
				if (__LIB_3__::func_982())
				{
					if (__LIB_7__::func_495(__LIB_7__::func_509(uParam0, 0)))
					{
						func_71(uParam0);
						func_66(uParam0);
						__LIB_7__::func_531(&Local_24, 13, 1);
					}
				}
			}
			else if (*uParam0 == -834293086)
			{
				if (!__LIB_7__::func_581(uParam0))
				{
					func_73(uParam0);
					func_80(uParam0);
					__LIB_7__::func_532(*uParam0);
				}
				if (!__LIB_7__::func_530(*uParam0))
				{
					if ((__LIB_0__::func_27(Global_40.f_8863.f_153, 1) && __LIB_0__::func_27(Global_40.f_8863.f_153, 2)) && __LIB_0__::func_27(Global_40.f_8863.f_153, 4))
					{
						__LIB_7__::func_498(*uParam0, 2);
					}
				}
				if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
				{
					if (__LIB_0__::func_266(Global_35, TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true), 15f, 1, 1))
					{
						if (!PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "IsWithinHornetsVolume"))
						{
							PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "IsWithinHornetsVolume", true, -1);
						}
					}
					else if (PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "IsWithinHornetsVolume"))
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "IsWithinHornetsVolume", false, -1);
					}
				}
			}
			else if (*uParam0 == 404434344)
			{
				if (func_81(uParam0))
				{
				}
			}
			else if (*uParam0 == -1761578407)
			{
				if ((((((((uParam0->f_4 == 0 || uParam0->f_4 == 1) || uParam0->f_4 == 2) || uParam0->f_4 == 3) || uParam0->f_4 == 4) || uParam0->f_4 == 5) || uParam0->f_4 == 6) || uParam0->f_4 == 7) || uParam0->f_4 == 8)
				{
					if (func_81(uParam0))
					{
					}
				}
			}
			else if (*uParam0 == -890175011)
			{
				if (!__LIB_7__::func_530(*uParam0))
				{
					if (!__LIB_7__::func_581(uParam0))
					{
						if (__LIB_7__::func_497(*uParam0, 16))
						{
							func_73(uParam0);
							func_80(uParam0);
							if ((((__LIB_0__::func_27(Global_40.f_8863.f_154, 2048) && __LIB_0__::func_27(Global_40.f_8863.f_154, 4096)) && __LIB_0__::func_27(Global_40.f_8863.f_154, 8192)) && __LIB_0__::func_27(Global_40.f_8863.f_154, 16384)) && __LIB_0__::func_27(Global_40.f_8863.f_154, 32768))
							{
								func_71(uParam0);
							}
						}
					}
				}
			}
			else if (*uParam0 == 677950956)
			{
				if (!__LIB_7__::func_530(*uParam0))
				{
					if (!__LIB_7__::func_581(uParam0))
					{
						if (__LIB_7__::func_497(*uParam0, 16))
						{
							func_73(uParam0);
							func_80(uParam0);
							if (((((__LIB_0__::func_27(Global_40.f_8863.f_154, 65536) && __LIB_0__::func_27(Global_40.f_8863.f_154, 131072)) && __LIB_0__::func_27(Global_40.f_8863.f_154, 262144)) && __LIB_0__::func_27(Global_40.f_8863.f_154, 524288)) && __LIB_0__::func_27(Global_40.f_8863.f_154, 1048576)) && __LIB_0__::func_27(Global_40.f_8863.f_154, 2097152))
							{
								func_71(uParam0);
							}
						}
					}
				}
			}
			else if (*uParam0 == -1272862985)
			{
				if (!__LIB_7__::func_530(*uParam0))
				{
					if (!__LIB_7__::func_581(uParam0))
					{
						if (__LIB_7__::func_497(*uParam0, 16))
						{
							func_73(uParam0);
							func_80(uParam0);
							if (((__LIB_0__::func_27(Global_40.f_8863.f_152, 262144) && __LIB_0__::func_27(Global_40.f_8863.f_152, 524288)) && __LIB_0__::func_27(Global_40.f_8863.f_152, 1048576)) && __LIB_0__::func_27(Global_40.f_8863.f_152, 2097152))
							{
								func_71(uParam0);
							}
							else
							{
								__LIB_7__::func_532(*uParam0);
							}
						}
					}
				}
			}
			else if (*uParam0 == -321841939)
			{
				func_82(uParam0);
				if (!__LIB_7__::func_530(*uParam0))
				{
					if (!__LIB_7__::func_581(uParam0))
					{
						if (__LIB_7__::func_497(*uParam0, 16))
						{
							func_83(uParam0->f_4);
							func_84(uParam0);
							if (__LIB_7__::func_583())
							{
								func_71(uParam0);
								__LIB_7__::func_531(&Local_24, 11, 1);
							}
							else
							{
								iVar0 = __LIB_7__::func_582();
								__LIB_18__::func_40(-321841939, iVar0, 20);
								__LIB_18__::func_41(MISC::_CREATE_VAR_STRING(2, "DISCO_DC_FOUND", iVar0, 20));
							}
							PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
						}
					}
				}
			}
			else if (*uParam0 == -1614148516)
			{
				if (__LIB_7__::func_497(*uParam0, 16))
				{
					if (!__LIB_7__::func_530(*uParam0))
					{
						func_71(uParam0);
					}
				}
				if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 0), 75f, 1, 1))
				{
					if (__LIB_7__::func_536(uParam0, &iLocal_19, &uLocal_28, 0, 7))
					{
						if (ENTITY::IS_ENTITY_DEAD(uLocal_28[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_28[0], Global_35, 1, 1))
						{
							if (AUDIO::IS_STREAM_PLAYING(uLocal_21))
							{
								AUDIO::STOP_STREAM(uLocal_21);
							}
						}
					}
				}
			}
			else if (*uParam0 == -161804536)
			{
				if (func_89(uParam0))
				{
				}
				if (!__LIB_7__::func_497(*uParam0, 32) && __LIB_7__::func_497(*uParam0, 16))
				{
					__LIB_7__::func_532(*uParam0);
				}
				if (__LIB_7__::func_497(*uParam0, 16) && __LIB_0__::func_27(Global_40.f_8863.f_152, 131072))
				{
					if (!__LIB_7__::func_530(*uParam0))
					{
						func_71(uParam0);
					}
				}
			}
			else if (*uParam0 == 503180747)
			{
				if (func_90(uParam0))
				{
					func_66(uParam0);
					__LIB_7__::func_531(&Local_24, 13, 1);
				}
			}
			else if (((((((((((((((((((((((*uParam0 == -1958832660 || *uParam0 == 247563739) || *uParam0 == 1734766691) || *uParam0 == 1535254161) || *uParam0 == 58958195) || *uParam0 == 308500632) || *uParam0 == 1986618633) || *uParam0 == -986176781) || *uParam0 == -232974724) || *uParam0 == -1053108445) || *uParam0 == -979575591) || *uParam0 == -1609238411) || *uParam0 == 921081956) || *uParam0 == -148407339) || *uParam0 == -1109016944) || *uParam0 == -1646022773) || *uParam0 == -1505275983) || *uParam0 == -1761189332) || *uParam0 == -607940493) || *uParam0 == -1787770845) || *uParam0 == -1891628345) || *uParam0 == -1960242214) || *uParam0 == -1272862985) || *uParam0 == -1243267511)
			{
				if (*uParam0 == 1535254161)
				{
					func_91(uParam0);
				}
				if (*uParam0 == -1243267511)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						uParam0->f_4 = func_4(uParam0);
						uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) };
					}
				}
				if ((*uParam0 == -1109016944 || *uParam0 == -232974724) || *uParam0 == -1960242214)
				{
					if ((!__LIB_7__::func_497(*uParam0, 8) && VOLUME::_DOES_VOLUME_EXIST(iLocal_14)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						func_69(uParam0);
					}
				}
				if (__LIB_7__::func_497(*uParam0, 16))
				{
					if (!__LIB_7__::func_530(*uParam0))
					{
						func_71(uParam0);
					}
				}
			}
			else if (!__LIB_7__::func_530(*uParam0))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					if (((*uParam0 == -544327665 || *uParam0 == 1120968795) || *uParam0 == 1519472817) || *uParam0 == -1859023693)
					{
						func_73(uParam0);
						func_80(uParam0);
						__LIB_7__::func_532(*uParam0);
						if (*uParam0 == -544327665)
						{
							if ((__LIB_0__::func_27(Global_40.f_8863.f_152, 1) && __LIB_0__::func_27(Global_40.f_8863.f_152, 2)) && __LIB_0__::func_27(Global_40.f_8863.f_152, 4))
							{
								__LIB_7__::func_498(*uParam0, 2);
							}
						}
						else if (*uParam0 == 1120968795)
						{
							if (__LIB_0__::func_27(Global_40.f_8863.f_153, 1024) && __LIB_0__::func_27(Global_40.f_8863.f_153, 2048))
							{
								__LIB_7__::func_498(*uParam0, 2);
							}
						}
						else if (*uParam0 == 1519472817)
						{
							if (__LIB_0__::func_27(Global_40.f_8863.f_153, 8388608) && __LIB_0__::func_27(Global_40.f_8863.f_153, 16777216))
							{
								__LIB_7__::func_498(*uParam0, 2);
							}
						}
						else if (*uParam0 == -1859023693)
						{
							if ((((((((((__LIB_0__::func_27(Global_40.f_8863.f_153, 4096) && __LIB_0__::func_27(Global_40.f_8863.f_153, 8192)) && __LIB_0__::func_27(Global_40.f_8863.f_153, 16384)) && __LIB_0__::func_27(Global_40.f_8863.f_153, 32768)) && __LIB_0__::func_27(Global_40.f_8863.f_153, 65536)) && __LIB_0__::func_27(Global_40.f_8863.f_153, 131072)) && __LIB_0__::func_27(Global_40.f_8863.f_153, 262144)) && __LIB_0__::func_27(Global_40.f_8863.f_153, 524288)) && __LIB_0__::func_27(Global_40.f_8863.f_153, 1048576)) && __LIB_0__::func_27(Global_40.f_8863.f_153, 2097152)) && __LIB_0__::func_27(Global_40.f_8863.f_153, 4194304))
							{
								__LIB_7__::func_498(*uParam0, 2);
							}
						}
					}
					else if (*uParam0 == 74587361)
					{
						if (__LIB_1__::func_185(59))
						{
							if (!__LIB_0__::func_898(-108307814))
							{
								func_93(-108307814, 0, 0, 7, 0);
							}
						}
						func_71(uParam0);
					}
					else
					{
						func_71(uParam0);
					}
					func_66(uParam0);
					__LIB_7__::func_531(&Local_24, 13, 1);
				}
			}
			else
			{
				__LIB_7__::func_531(&Local_24, 13, 1);
			}
			break;
		case 11:
			if (*uParam0 == 221420861)
			{
				if (!func_49(uParam0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE(__LIB_7__::func_577(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_66(uParam0);
					__LIB_7__::func_531(&Local_24, 13, 1);
				}
				if (!bLocal_23)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						if (fLocal_22 < 1f)
						{
							if (__LIB_0__::func_265(&(Local_24.f_1)) >= 1f)
							{
								fLocal_22 = (fLocal_22 + 0.1f);
								if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_20))
								{
									GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_20, "density", fLocal_22, false);
								}
								__LIB_1__::func_148(&(Local_24.f_1));
							}
						}
						else
						{
							bLocal_23 = true;
							AUDIO::SET_AMBIENT_ZONE_STATE(__LIB_7__::func_577(uParam0), true, true);
							AUDIO::_0x3743CE6948194349(__LIB_7__::func_577(uParam0), func_68(uParam0), 0f);
						}
					}
				}
				else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					if (__LIB_0__::func_265(&(Local_24.f_1)) >= 5f)
					{
						AUDIO::SET_AMBIENT_ZONE_STATE(__LIB_7__::func_577(uParam0), false, true);
						__LIB_7__::func_531(&Local_24, 12, 1);
					}
					else
					{
						__LIB_1__::func_148(&(Local_24.f_1));
					}
				}
			}
			else if (*uParam0 == -321841939)
			{
				func_82(uParam0);
				if (__LIB_1__::func_499())
				{
					__LIB_7__::func_531(&Local_24, 12, 1);
				}
				else if (__LIB_0__::func_265(&(Local_24.f_1)) > 9f)
				{
					__LIB_7__::func_531(&Local_24, 12, 1);
				}
			}
			break;
		case 12:
			if (*uParam0 == 221420861)
			{
				if (!func_49(uParam0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE(__LIB_7__::func_577(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_66(uParam0);
					__LIB_7__::func_531(&Local_24, 13, 1);
				}
				if (fLocal_22 > 0.1f)
				{
					if (__LIB_0__::func_265(&(Local_24.f_1)) >= 1f)
					{
						fLocal_22 = (fLocal_22 - 0.1f);
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_20))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_20, "density", fLocal_22, false);
						}
						__LIB_1__::func_148(&(Local_24.f_1));
					}
				}
				else
				{
					bLocal_23 = false;
					AUDIO::SET_AMBIENT_ZONE_STATE(__LIB_7__::func_577(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_71(uParam0);
					func_66(uParam0);
					__LIB_7__::func_531(&Local_24, 13, 1);
				}
			}
			else if (*uParam0 == -321841939)
			{
				func_82(uParam0);
				if (!__LIB_1__::func_499())
				{
					iVar1 = __LIB_7__::func_582();
					__LIB_18__::func_40(-321841939, iVar1, 20);
					__LIB_18__::func_41(MISC::_CREATE_VAR_STRING(2, "DISCO_DC_FOUND", iVar1, 20));
					func_71(uParam0);
					func_37(1, -1);
					__LIB_7__::func_531(&Local_24, 13, 1);
				}
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
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_15))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_15);
	}
	if (*uParam0 == 2000209669)
	{
		func_58(uParam0, 0);
	}
	else if (*uParam0 == -834293086)
	{
		if (PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "IsWithinHornetsVolume"))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "IsWithinHornetsVolume", false, -1);
		}
	}
	else if (*uParam0 == 221420861)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	else if (*uParam0 == 1535254161)
	{
		AUDIO::SET_AMBIENT_ZONE_STATE(__LIB_7__::func_577(uParam0), false, true);
	}
	if (*uParam0 == 2000209669)
	{
	}
	else if (*uParam0 == -1614148516)
	{
		if (AUDIO::IS_STREAM_PLAYING(uLocal_21))
		{
			AUDIO::STOP_STREAM(uLocal_21);
		}
	}
	if (!iLocal_19 == 0 && ENTITY::_0x1FF441D7954F8709(iLocal_19))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_19);
	}
	func_66(uParam0);
	__LIB_18__::func_42(&uLocal_28, 1);
	__LIB_7__::func_570(&Local_40, 1);
	func_97(uParam0);
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
				return func_92(uParam0, iParam1);
			}
			break;
		case 870958936:
			return func_101(uParam0, iParam1);
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
			return func_92(uParam0, iParam1);
		case -1272862985:
			return func_92(uParam0, iParam1);
		case -1243267511:
			return func_92(uParam0, iParam1);
		case -321841939:
			return func_92(uParam0, iParam1);
		case -890175011:
			return func_92(uParam0, iParam1);
		case 677950956:
			return func_92(uParam0, iParam1);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_15()
{
	if (func_102() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_18(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_6.f_8))
	{
		__LIB_1__::func_281(&(uParam0->f_6.f_8), 1, 1);
	}
	__LIB_1__::func_148(&(uParam0->f_6.f_5));
	if (__LIB_0__::func_27(uParam0->f_3, 2))
	{
		__LIB_1__::func_993(&(uParam0->f_3), 2);
	}
}

void func_21(var uParam0)
{
	uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) };
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

void func_28(var uParam0)
{
	if (!__LIB_0__::func_139(uParam0->f_6.f_8))
	{
		if (*uParam0 == 404434344)
		{
			if (__LIB_7__::func_530(*uParam0))
			{
				uParam0->f_6.f_8 = __LIB_2__::func_512("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = __LIB_2__::func_512("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			}
		}
		else if (*uParam0 == -1761578407)
		{
			if (uParam0->f_4 == 2)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 4))
				{
					uParam0->f_6.f_8 = __LIB_2__::func_512("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
				}
				else
				{
					uParam0->f_6.f_8 = __LIB_2__::func_512("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (__LIB_0__::func_27(Global_40.f_8863.f_154, 8))
				{
					uParam0->f_6.f_8 = __LIB_2__::func_512("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
				}
				else
				{
					uParam0->f_6.f_8 = __LIB_2__::func_512("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				}
			}
			else if (__LIB_7__::func_581(uParam0))
			{
				uParam0->f_6.f_8 = __LIB_2__::func_512("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = __LIB_2__::func_512("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			}
		}
		else if (*uParam0 == 1861313914)
		{
			if (__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16))
			{
				uParam0->f_6.f_8 = __LIB_2__::func_512("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = __LIB_2__::func_512("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("PLAYER_FOCUS_TIMING"), 0, 0);
			}
		}
		else if (*uParam0 == -415839138)
		{
			if (__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16))
			{
				uParam0->f_6.f_8 = __LIB_2__::func_512("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = __LIB_2__::func_512("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("PLAYER_FOCUS_TIMING"), 0, 0);
			}
		}
		else if (__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16))
		{
			uParam0->f_6.f_8 = __LIB_2__::func_512("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			__LIB_1__::func_382(uParam0->f_6.f_8, 0, 1);
		}
		else
		{
			uParam0->f_6.f_8 = __LIB_2__::func_512("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("PLAYER_FOCUS_TIMING"), 0, 0);
		}
		__LIB_1__::func_522(uParam0->f_6.f_8, 13, 1, 1);
		__LIB_7__::func_476(uParam0->f_6.f_8);
	}
}

char* func_29(var uParam0)
{
	if (*uParam0 == 404434344)
	{
		if (__LIB_7__::func_530(*uParam0))
		{
			return "DISCO_GRAVE_AM";
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == -1761578407)
	{
		if (__LIB_7__::func_581(uParam0))
		{
			if (uParam0->f_4 == 0)
			{
				return "DISCO_GRAVE_AM";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISCO_GRAVE_JC";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISCO_GRAVE_HM";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISCO_GRAVE_LS";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISCO_GRAVE_SM";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISCO_GRAVE_DC";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISCO_GRAVE_KD";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISCO_GRAVE_SG";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISCO_GRAVE_EF";
			}
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == -890175011)
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == 677950956)
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == -321841939)
	{
		return "DISCO_DREAM";
	}
	else if (__LIB_7__::func_497(*uParam0, 2) || __LIB_7__::func_497(*uParam0, 16))
	{
		if (*uParam0 == -1958832660)
		{
			return "DISCO_AC";
		}
		else if (*uParam0 == -1300082860)
		{
			return "DISCO_AW";
		}
		else if (*uParam0 == 247563739)
		{
			return "DISCO_ATP";
		}
		else if (*uParam0 == -1287911066)
		{
			return "DISCO_BR";
		}
		else if (*uParam0 == 1861313914)
		{
			return "DISCO_BS";
		}
		else if (*uParam0 == 1734766691)
		{
			return "DISCO_FIRE";
		}
		else if (*uParam0 == 657666087)
		{
			return "DISCO_CW";
		}
		else if (*uParam0 == 1535254161)
		{
			return "DISCO_CWB";
		}
		else if (*uParam0 == 58958195)
		{
			return "DISCO_CA";
		}
		else if (*uParam0 == -1109016944)
		{
			return "DISCO_DT";
		}
		else if (*uParam0 == -780455182)
		{
			return "DISCO_DG";
		}
		else if (*uParam0 == -1636964661)
		{
			return "DISCO_DL";
		}
		else if (*uParam0 == -2009137002)
		{
			return "DISCO_FIC";
		}
		else if (*uParam0 == -1243267511)
		{
			return "DISCO_FT";
		}
		else if (*uParam0 == -1053108445)
		{
			return "DISCO_FLY";
		}
		else if (*uParam0 == -1646022773)
		{
			return "DISCO_FO";
		}
		else if (*uParam0 == 1284679164)
		{
			return "DISCO_FR";
		}
		else if (*uParam0 == 2134589549)
		{
			return "DISCO_FS";
		}
		else if (*uParam0 == -1787770845)
		{
			return "DISCO_GM";
		}
		else if (*uParam0 == -1887999095)
		{
			return "DISCO_GS";
		}
		else if (*uParam0 == 1519228573)
		{
			return "DISCO_HS";
		}
		else if (*uParam0 == 1982045664)
		{
			return "DISCO_HW";
		}
		else if (*uParam0 == 308500632)
		{
			return "DISCO_HT";
		}
		else if (*uParam0 == -849582265)
		{
			return "DISCO_IB";
		}
		else if (*uParam0 == 429544447)
		{
			return "DISCO_JM";
		}
		else if (*uParam0 == -148407339)
		{
			return "DISCO_MA";
		}
		else if (*uParam0 == -415839138)
		{
			return "DISCO_MONK";
		}
		else if (*uParam0 == 1673499939)
		{
			return "DISCO_MH";
		}
		else if (*uParam0 == -709811179)
		{
			return "DISCO_MT";
		}
		else if (*uParam0 == -979575591)
		{
			return "DISCO_OB";
		}
		else if (*uParam0 == -1609238411)
		{
			return "DISCO_OWS";
		}
		else if (*uParam0 == 921081956)
		{
			return "DISCO_ORC";
		}
		else if (*uParam0 == -739986731)
		{
			return "DISCO_PR";
		}
		else if (*uParam0 == 1034793488)
		{
			return "DISCO_PIC";
		}
		else if (*uParam0 == -1614148516)
		{
			return "DISCO_PH";
		}
		else if (*uParam0 == -1761189332)
		{
			return "DISCO_RR";
		}
		else if (*uParam0 == -607940493)
		{
			return "DISCO_SM";
		}
		else if (*uParam0 == 1986618633)
		{
			return "DISCO_SW";
		}
		else if (*uParam0 == -161804536)
		{
			return "DISCO_ST";
		}
		else if (*uParam0 == 2000209669)
		{
			return "DISCO_SS";
		}
		else if (*uParam0 == -232974724)
		{
			return "DISCO_TP";
		}
		else if (*uParam0 == -1272862985)
		{
			return "DISCO_TT";
		}
		else if (*uParam0 == -1891628345)
		{
			return "DISCO_UTE";
		}
		else if (*uParam0 == -1960242214)
		{
			return "DISCO_UCB";
		}
		else if (*uParam0 == -1505275983)
		{
			return "DISCO_WT";
		}
		else if (*uParam0 == -986176781)
		{
			return "DISCO_WB";
		}
		else if (*uParam0 == 373034311)
		{
			return "DISCO_AA";
		}
	}
	else if (((*uParam0 == -986176781 || *uParam0 == 1986618633) || *uParam0 == -1787770845) || *uParam0 == -148407339)
	{
		return "DISCO_BONES";
	}
	else if ((((((*uParam0 == -1958832660 || *uParam0 == 921081956) || *uParam0 == 247563739) || *uParam0 == -232974724) || *uParam0 == -1300082860) || *uParam0 == -979575591) || *uParam0 == 1673499939)
	{
		return "DISCO_STRUCT";
	}
	else if (*uParam0 == -780455182)
	{
		return "DISCO_GRAVE";
	}
	else if (*uParam0 == -2009137002)
	{
		return "DISCO_SCULPT";
	}
	else if ((*uParam0 == -1243267511 || *uParam0 == -1272862985) || *uParam0 == -1505275983)
	{
		return "DISCO_TREE";
	}
	else if (*uParam0 == 1034793488 || *uParam0 == 373034311)
	{
		return "DISCO_PAINT";
	}
	else if ((((((((*uParam0 == -1646022773 || *uParam0 == 1284679164) || *uParam0 == 2134589549) || *uParam0 == -1887999095) || *uParam0 == 1519228573) || *uParam0 == -1287911066) || *uParam0 == -1636964661) || *uParam0 == 429544447) || *uParam0 == -739986731)
	{
		return "DISCO_CORPSE";
	}
	else if ((((((((((*uParam0 == -1109016944 || *uParam0 == 1535254161) || *uParam0 == -849582265) || *uParam0 == -161804536) || *uParam0 == -1891628345) || *uParam0 == -1960242214) || *uParam0 == -607940493) || *uParam0 == 308500632) || *uParam0 == 1734766691) || *uParam0 == -415839138) || *uParam0 == 1982045664)
	{
		return "DISCO_SITE";
	}
	else if (*uParam0 == -1614148516)
	{
		return "DISCO_DEVICE";
	}
	else if ((*uParam0 == -1761189332 || *uParam0 == -1609238411) || *uParam0 == -709811179)
	{
		return "DISCO_ROCK";
	}
	else if ((*uParam0 == 58958195 || *uParam0 == -1053108445) || *uParam0 == 657666087)
	{
		return "DISCO_WRECK";
	}
	else if (*uParam0 == 1861313914)
	{
		if (__LIB_1__::func_185(59))
		{
			return "DISCO_CORPSE";
		}
		else
		{
			return "DISCO_SITE";
		}
	}
	else if (*uParam0 == 2000209669)
	{
		if (uParam0->f_4 == 11)
		{
			return "DISCO_PAINT";
		}
		else
		{
			return "DISCO_SCULPT";
		}
	}
	else
	{
		return "DISCO_UNKNOWN";
	}
	return "";
}

void func_35(var uParam0)
{
	if (func_102() != -1)
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
		func_69(uParam0);
	}
}

void func_36(var uParam0, bool bParam1)
{
	int iVar0;
	if (*uParam0 == -321841939)
	{
		if (bParam1)
		{
			if (__LIB_7__::func_582() < (20 - 1))
			{
				return;
			}
		}
		else if (!__LIB_7__::func_583())
		{
			return;
		}
	}
	if (bParam1)
	{
		iVar0 = __LIB_7__::func_537(*uParam0, func_121(), uParam0->f_4);
	}
	else
	{
		iVar0 = __LIB_7__::func_561(*uParam0, uParam0->f_4);
	}
	if (iVar0 != 0)
	{
		if (bParam1)
		{
			__LIB_1__::func_33(iVar0, 0);
			if (*uParam0 == -890175011)
			{
				if (__LIB_7__::func_578() == (5 - 1))
				{
					if (func_121())
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
		if (func_126())
		{
			Global_1357518 = iVar0;
			if (bParam1 == 1)
			{
				Global_1357519 = { uParam0->f_6.f_2 };
			}
		}
	}
}

void func_37(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		__LIB_0__::func_47(&Global_0, 8);
	}
	if (!__LIB_0__::func_28() || func_102() != -1)
	{
		return;
	}
	__LIB_0__::func_47(&Global_0, 1);
}

void func_41(var uParam0)
{
	uParam0->f_6.f_10.f_21 = 4;
	uParam0->f_6.f_10.f_17 = 4;
	uParam0->f_6.f_10.f_18 = 1;
	uParam0->f_6.f_10.f_23 = 2;
	uParam0->f_6.f_10.f_24 = 2;
	uParam0->f_6.f_10 = { func_92(uParam0, uParam0->f_4) };
}

bool func_46(int iParam0)
{
	struct<7> Var0;
	vector3 vVar7;
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		__LIB_7__::func_465(*iParam0, &Var0);
		if (FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(-1, Var0, Var0.f_3, Var0.f_6) == __LIB_0__::func_57(Global_35))
		{
			return true;
		}
		else if (MISC::IS_BULLET_IN_ANGLED_AREA(Var0, Var0.f_3, Var0.f_6, true))
		{
			vVar7 = { 0f, 0f, 0f };
			if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(Global_35, &vVar7))
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar7, Var0, Var0.f_3, Var0.f_6, false, true))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_47(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_102() != -1)
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
		func_135(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_135(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_49(var uParam0)
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
			if (func_142(19))
			{
				return false;
			}
			break;
		case 221420861:
			if (func_142(29))
			{
				return false;
			}
			break;
		case -1308658310:
			if (func_142(11))
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
			if (__LIB_2__::func_774(19) || func_142(4))
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
			if (!func_15())
			{
				return false;
			}
			break;
	}
	return true;
}

void func_51(int iParam0, int iParam1)
{
	if (!__LIB_7__::func_490(iParam0))
	{
		return;
	}
	Global_40.f_8863[__LIB_7__::func_459(iParam0, 1)] = (Global_40.f_8863[__LIB_7__::func_459(iParam0, 1)] - (Global_40.f_8863[__LIB_7__::func_459(iParam0, 1)] && iParam1));
}

bool func_58(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (func_150(iVar1))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		if (!__LIB_7__::func_538(func_151(iVar1, bVar0), func_13(uParam0, iVar1), bParam1) || !__LIB_7__::func_538(func_151(iVar1, !bVar0), func_13(uParam0, iVar1), !bParam1))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_59(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (!__LIB_7__::func_538(__LIB_7__::func_539(uParam0, 1), __LIB_7__::func_467(uParam0, 2), 0) || !__LIB_7__::func_538(__LIB_7__::func_539(uParam0, 0), __LIB_7__::func_467(uParam0, 2), 0))
			{
				return false;
			}
			break;
		case 1:
			if (!__LIB_7__::func_538(__LIB_7__::func_539(uParam0, 1), __LIB_7__::func_467(uParam0, 2), 1) || !__LIB_7__::func_538(__LIB_7__::func_539(uParam0, 0), __LIB_7__::func_467(uParam0, 2), 1))
			{
				return false;
			}
			break;
		default:
			break;
	}
	return true;
}

void func_60(var uParam0)
{
	func_154(uParam0);
	func_155(uParam0);
	if (((((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == -321841939) || *uParam0 == -890175011) || *uParam0 == 677950956) || *uParam0 == -1272862985)
	{
		func_21(uParam0);
	}
}

void func_61(var uParam0)
{
	__LIB_7__::func_540(&Local_40);
	__LIB_7__::func_512(&uLocal_28);
	if ((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == 2000209669)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_7__::func_560(uParam0, 0, 0, 0)))
		{
			if (STREAMING::DOES_ANIM_DICT_EXIST(__LIB_7__::func_560(uParam0, 0, 0, 0)))
			{
				STREAMING::REQUEST_ANIM_DICT(__LIB_7__::func_560(uParam0, 0, 0, 0));
			}
		}
	}
	if (*uParam0 == -1308658310 || *uParam0 == 221420861)
	{
		STREAMING::REQUEST_PTFX_ASSET();
	}
	if (*uParam0 == 404434344)
	{
		PED::_0xF008E0BA1FE1D644(1);
	}
}

bool func_62(var uParam0)
{
	if (!__LIB_7__::func_541(&Local_40) || !__LIB_7__::func_514(&uLocal_28))
	{
		return false;
	}
	if ((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == 2000209669)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_7__::func_560(uParam0, 0, 0, 0)))
		{
			if (STREAMING::DOES_ANIM_DICT_EXIST(__LIB_7__::func_560(uParam0, 0, 0, 0)))
			{
				if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_7__::func_560(uParam0, 0, 0, 0)))
				{
					return false;
				}
			}
		}
	}
	if (*uParam0 == 2000209669)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_7__::func_542(uParam0)))
		{
			if (!AUDIO::_0xD9130842D7226045(__LIB_7__::func_542(uParam0), 0))
			{
				return false;
			}
		}
	}
	else if (*uParam0 == -1614148516)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_7__::func_542(uParam0)))
		{
			if (!AUDIO::LOAD_STREAM(__LIB_7__::func_543(uParam0, 0), __LIB_7__::func_542(uParam0)))
			{
				return false;
			}
		}
	}
	if (*uParam0 == -1308658310 || *uParam0 == 221420861)
	{
		if (!STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			return false;
		}
	}
	if (*uParam0 == 404434344)
	{
		if (!PED::_0x5C16855277819BBF() == 1)
		{
			return false;
		}
	}
	return true;
}

bool func_64(var uParam0)
{
	if (*uParam0 == -1761578407 || *uParam0 == 404434344)
	{
		if (*uParam0 == 404434344)
		{
			__LIB_7__::func_558(&Local_40, __LIB_7__::func_494(uParam0, 0), __LIB_7__::func_554(uParam0, 0), 0, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_40.f_1[0]))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_40.f_1[0], joaat("REL_PLAYER_ALLY"));
			}
		}
		else if (uParam0->f_4 == 6)
		{
			uLocal_64 = GRAPHICS::_0xFA50F79257745E74(__LIB_7__::func_467(uParam0, 0), 1f, 1, -1, 0);
		}
	}
	else if (*uParam0 == 1464664327)
	{
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_15))
		{
			iLocal_15 = func_169(func_167(uParam0, 0), func_101(uParam0, 0), func_168(uParam0, 0), 0, 0, 0);
		}
	}
	else if (*uParam0 == -161804536)
	{
		if (!__LIB_0__::func_27(Global_40.f_8863.f_152, 131072))
		{
			if (!__LIB_7__::func_506(&uLocal_28, __LIB_7__::func_467(uParam0, 1), __LIB_7__::func_505(uParam0, 1), 1))
			{
				return false;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_28[1]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_28[1], true);
			}
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_15))
			{
				iLocal_15 = func_169(func_167(uParam0, 0), func_101(uParam0, 0), func_168(uParam0, 0), 0, 0, 0);
				TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_15, false);
			}
		}
	}
	else if (*uParam0 == 2000209669)
	{
		if (!__LIB_7__::func_530(*uParam0))
		{
			if (!func_172(uParam0))
			{
				return false;
			}
		}
	}
	else if (*uParam0 == 1347913620 || *uParam0 == -1308658310)
	{
		if (!__LIB_7__::func_506(&uLocal_28, __LIB_7__::func_467(uParam0, 0), __LIB_7__::func_505(uParam0, 0), 0))
		{
			return false;
		}
	}
	else if (*uParam0 == -1891628345)
	{
		uLocal_64 = GRAPHICS::_0xFA50F79257745E74(__LIB_7__::func_467(uParam0, 0), 9f, 1, -1, 0);
	}
	else if (*uParam0 == -1614148516)
	{
		uLocal_21 = AUDIO::_0x0556C784FA056628(__LIB_7__::func_543(uParam0, 0), __LIB_7__::func_542(uParam0));
		AUDIO::PLAY_STREAM_FROM_POSITION(__LIB_7__::func_467(uParam0, 0), uLocal_21);
		__LIB_1__::func_408(1221801385, 1, 0);
	}
	else if (*uParam0 == -321841939)
	{
		PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
	}
	if (*uParam0 == 404434344 && __LIB_7__::func_484())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_40.f_1[0]))
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(Local_40.f_1[0]))
			{
				return false;
			}
			__LIB_0__::func_862(Local_40.f_1[0], func_173(uParam0, 0));
		}
	}
	return true;
}

void func_66(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_3, 1))
	{
		__LIB_1__::func_993(&(uParam0->f_3), 1);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14))
	{
		VOLUME::_DELETE_VOLUME(iLocal_14);
	}
	if (*uParam0 == 1464664327 || *uParam0 == 2000209669)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_15))
		{
			TASK::_DELETE_SCENARIO_POINT(iLocal_15);
		}
	}
	else if (*uParam0 == -1761578407 && uParam0->f_4 == 7)
	{
		__LIB_1__::func_979(1);
	}
	__LIB_1__::func_281(&iLocal_63, 1, 1);
	if (CAM::DOES_CAM_EXIST(iLocal_16[0]))
	{
		CAM::DESTROY_CAM(iLocal_16[0], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_20))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_20, false);
	}
}

Vector3 func_68(var uParam0)
{
	vector3 vVar0;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
	{
		vVar0 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true) };
		return vVar0;
	}
	return 0f, 0f, 0f;
}

void func_69(var uParam0)
{
	if (func_102() != -1)
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

bool func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	switch (iLocal_65)
	{
		case 0:
			func_178(1, 1);
			break;
		case 1:
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_15))
			{
				if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_15) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
				{
					STREAMING::_0x513F8AA5BF2F17CF(func_101(uParam0, 0), 20f, 0);
					func_178(2, 1);
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_66) <= 7.5f)
			{
				if (__LIB_0__::func_265(&uLocal_66) >= 3.5f)
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(4000);
					}
				}
			}
			else
			{
				func_178(3, 1);
			}
			break;
		case 3:
			if (func_179(uParam0))
			{
				iVar0 = 1;
			}
			if (STREAMING::_0x0909F71B5C070797())
			{
				iVar1 = 1;
			}
			if (((iVar0 && iVar1) && __LIB_0__::func_265(&uLocal_66) >= 1f) || __LIB_0__::func_265(&uLocal_66) >= 10f)
			{
				STREAMING::_0x5A8B01199C3E79C3();
				func_180(Global_35, func_101(uParam0, 1), func_168(uParam0, 1), 2, 1073741824 /* Float: 2f */);
				func_178(4, 1);
			}
			break;
		case 4:
			__LIB_1__::func_473(Global_35, func_167(uParam0, 1), 3000, 0, 0, -1082130432 /* Float: -1f */);
			func_178(6, 1);
			break;
		case 6:
			if ((TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && __LIB_0__::func_265(&uLocal_66) >= 1f) || __LIB_0__::func_265(&uLocal_66) >= 5f)
			{
				CAM::DO_SCREEN_FADE_IN(4000);
				func_178(12, 1);
			}
			break;
		case 12:
			return true;
	}
	return false;
}

void func_71(var uParam0)
{
	if (!__LIB_7__::func_530(*uParam0))
	{
		__LIB_7__::func_556(*uParam0);
		func_69(uParam0);
	}
}

bool func_72(var uParam0)
{
	if (iLocal_65 > 0 && iLocal_65 < 12)
	{
		if (!func_49(uParam0))
		{
			func_178(12, 1);
		}
	}
	switch (iLocal_65)
	{
		case 0:
			func_178(1, 1);
			break;
		case 1:
			if (__LIB_0__::func_94(Global_35, __LIB_7__::func_467(uParam0, 0), 1) <= 1.6f)
			{
				__LIB_1__::func_281(&iLocal_63, 1, 1);
				func_178(2, 1);
			}
			break;
		case 2:
			if (__LIB_0__::func_94(Global_35, __LIB_7__::func_467(uParam0, 0), 1) > (1.6f + 1f))
			{
				__LIB_1__::func_281(&iLocal_63, 1, 1);
				func_178(1, 1);
			}
			else if (func_183(uParam0, 0))
			{
				iLocal_63 = __LIB_2__::func_512("GENERIC_USE", joaat("INPUT_CONTEXT_X"), Global_35, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_7__::func_476(iLocal_63);
				func_178(3, 1);
			}
			break;
		case 3:
			__LIB_7__::func_571(uParam0, iLocal_63, "PLUNGER", 0);
			if (__LIB_0__::func_94(Global_35, __LIB_7__::func_467(uParam0, 0), 1) > (1.6f + 1f))
			{
				__LIB_1__::func_281(&iLocal_63, 1, 1);
				func_178(1, 1);
			}
			else if (func_183(uParam0, 1))
			{
				__LIB_1__::func_281(&iLocal_63, 1, 1);
				func_178(2, 1);
			}
			else if (__LIB_0__::func_139(iLocal_63) && __LIB_0__::func_567(iLocal_63, 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -2334.563f, 102.6577f, 221.5343f, 1f, 20000, 0.1f, 0, 164.0882f);
				__LIB_1__::func_281(&iLocal_63, 1, 1);
				func_178(5, 1);
			}
			break;
		case 5:
			if (__LIB_0__::func_265(&uLocal_66) >= 1f)
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_16[0]))
				{
					iLocal_16[0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -2333.38f, 102.69f, 223.21f, -6.197f, -0.63f, 55.514f, 65f, false, 2);
					CAM::SET_CAM_FOV(iLocal_16[0], 37.84929f);
				}
				if (!CAM::DOES_CAM_EXIST(iLocal_16[1]))
				{
					iLocal_16[1] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -2334.52f, 104.21f, 223.47f, -7.584f, -0.74f, 59.195f, 65f, false, 2);
					CAM::SET_CAM_FOV(iLocal_16[1], 37.84929f);
				}
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				func_180(Global_35, -2334.563f, 102.6577f, 221.5343f, 164.0882f, 2, 1073741824 /* Float: 2f */);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-98.7994f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-11.5912f, 1f);
				if (CAM::DOES_CAM_EXIST(iLocal_16[0]))
				{
					CAM::SET_CAM_ACTIVE(iLocal_16[0], true);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 2000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(iLocal_16[1]))
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_16[1], iLocal_16[0], 10000, 1, 1);
				}
				func_178(7, 1);
			}
			break;
		case 7:
			if (__LIB_0__::func_265(&uLocal_66) >= 1.2f)
			{
				FIRE::ADD_EXPLOSION_WITH_USER_VFX(__LIB_7__::func_467(uParam0, 1), 26, -1037168003, 1f, true, false, 1f);
				if (CAM::DOES_CAM_EXIST(iLocal_16[0]))
				{
					CAM::SHAKE_CAM(iLocal_16[0], "SMALL_EXPLOSION_SHAKE", 0.5f);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_16[1]))
				{
					CAM::SHAKE_CAM(iLocal_16[1], "SMALL_EXPLOSION_SHAKE", 1f);
				}
				func_178(8, 1);
			}
			break;
		case 8:
			if (func_59(uParam0, 0) && __LIB_0__::func_265(&uLocal_66) >= 1f)
			{
				if (CAM::DOES_CAM_EXIST(iLocal_16[1]))
				{
					CAM::SHAKE_CAM(iLocal_16[1], "SMALL_EXPLOSION_SHAKE", 0.5f);
				}
				PAD::SET_PAD_SHAKE(0, 1500, 150);
				func_178(9, 1);
			}
			break;
		case 9:
			if (__LIB_0__::func_265(&uLocal_66) >= 0.5f)
			{
				func_178(10, 1);
			}
			break;
		case 10:
			if (__LIB_0__::func_265(&uLocal_66) >= 0.5f)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 2000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(iLocal_16[0]))
				{
					CAM::SET_CAM_ACTIVE(iLocal_16[0], false);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_16[1]))
				{
					CAM::SET_CAM_ACTIVE(iLocal_16[1], false);
				}
				func_71(uParam0);
				func_178(12, 1);
			}
			break;
		case 12:
			return true;
	}
	return false;
}

void func_73(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (*uParam0)
	{
		case -544327665:
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
			else
			{
				return;
			}
			break;
		case -834293086:
			if (uParam0->f_4 == 0)
			{
				iVar1 = 1;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar1 = 2;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar1 = 4;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar1 = 8;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar1 = 16;
			}
			else if (uParam0->f_4 == 5)
			{
				iVar1 = 32;
			}
			else if (uParam0->f_4 == 6)
			{
				iVar1 = 64;
			}
			else if (uParam0->f_4 == 7)
			{
				iVar1 = 128;
			}
			else if (uParam0->f_4 == 8)
			{
				iVar1 = 256;
			}
			else if (uParam0->f_4 == 9)
			{
				iVar1 = 512;
			}
			else
			{
				return;
			}
			break;
		case 1120968795:
			if (uParam0->f_4 == 0)
			{
				iVar1 = 1024;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar1 = 2048;
			}
			else
			{
				return;
			}
			break;
		case 1519472817:
			if (uParam0->f_4 == 0)
			{
				iVar1 = 8388608;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar1 = 16777216;
			}
			else
			{
				return;
			}
			break;
		case -1859023693:
			if (uParam0->f_4 == 0)
			{
				iVar1 = 4096;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar1 = 8192;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar1 = 16384;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar1 = 32768;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar1 = 65536;
			}
			else if (uParam0->f_4 == 5)
			{
				iVar1 = 131072;
			}
			else if (uParam0->f_4 == 6)
			{
				iVar1 = 262144;
			}
			else if (uParam0->f_4 == 7)
			{
				iVar1 = 524288;
			}
			else if (uParam0->f_4 == 8)
			{
				iVar1 = 1048576;
			}
			else if (uParam0->f_4 == 9)
			{
				iVar1 = 2097152;
			}
			else if (uParam0->f_4 == 10)
			{
				iVar1 = 4194304;
			}
			else
			{
				return;
			}
			break;
		case 2000209669:
			if (uParam0->f_4 == 0)
			{
				iVar0 = 8;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar0 = 16;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar0 = 32;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar0 = 64;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar0 = 128;
			}
			else if (uParam0->f_4 == 5)
			{
				iVar0 = 256;
			}
			else if (uParam0->f_4 == 6)
			{
				iVar0 = 512;
			}
			else if (uParam0->f_4 == 7)
			{
				iVar0 = 1024;
			}
			else if (uParam0->f_4 == 8)
			{
				iVar0 = 2048;
			}
			else if (uParam0->f_4 == 9)
			{
				iVar0 = 4096;
			}
			else if (uParam0->f_4 == 10)
			{
				iVar0 = 8192;
			}
			else if (uParam0->f_4 == 11)
			{
				iVar0 = 16384;
			}
			else
			{
				return;
			}
			break;
		case -1272862985:
			if (uParam0->f_4 == 0)
			{
				iVar0 = 262144;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar0 = 524288;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar0 = 1048576;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar0 = 2097152;
			}
			else
			{
				return;
			}
			break;
		case 404434344:
			iVar2 = 1;
			break;
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				iVar2 = 1;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar2 = 2;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar2 = 4;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar2 = 8;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar2 = 16;
			}
			else if (uParam0->f_4 == 5)
			{
				iVar2 = 32;
			}
			else if (uParam0->f_4 == 6)
			{
				iVar2 = 64;
			}
			else if (uParam0->f_4 == 7)
			{
				iVar2 = 128;
			}
			else if (uParam0->f_4 == 8)
			{
				iVar2 = 256;
			}
			else if (uParam0->f_4 == 9)
			{
				iVar2 = 512;
			}
			else if (uParam0->f_4 == 10)
			{
				iVar2 = 1024;
			}
			else
			{
				return;
			}
			break;
		case -890175011:
			if (uParam0->f_4 == 0)
			{
				iVar2 = 2048;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar2 = 4096;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar2 = 8192;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar2 = 16384;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar2 = 32768;
			}
			else
			{
				return;
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				iVar2 = 65536;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar2 = 131072;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar2 = 262144;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar2 = 524288;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar2 = 1048576;
			}
			else if (uParam0->f_4 == 5)
			{
				iVar2 = 2097152;
			}
			else
			{
				return;
			}
			break;
		default:
			break;
	}
	if (((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == -890175011) || *uParam0 == 677950956)
	{
		if (!__LIB_0__::func_27(Global_40.f_8863.f_154, iVar2))
		{
			__LIB_1__::func_581(&(Global_40.f_8863.f_154), iVar2);
		}
	}
	else if (((*uParam0 == -834293086 || *uParam0 == 1120968795) || *uParam0 == 1519472817) || *uParam0 == -1859023693)
	{
		if (!__LIB_0__::func_27(Global_40.f_8863.f_153, iVar1))
		{
			__LIB_1__::func_581(&(Global_40.f_8863.f_153), iVar1);
		}
	}
	else if (!__LIB_0__::func_27(Global_40.f_8863.f_152, iVar0))
	{
		__LIB_1__::func_581(&(Global_40.f_8863.f_152), iVar0);
	}
}

bool func_75(var uParam0)
{
	if (iLocal_65 > 0)
	{
	}
	switch (iLocal_65)
	{
		case 0:
			func_178(1, 1);
			break;
		case 1:
			if (!__LIB_0__::func_27(Global_40.f_8863.f_152, 1024))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					uParam0->f_4 = func_4(uParam0);
					if (__LIB_0__::func_266(Global_35, func_13(uParam0, uParam0->f_4), 1.4f, 1, 1) && __LIB_1__::func_374(Global_35, func_13(uParam0, uParam0->f_4), 0.5f))
					{
						func_178(2, 1);
					}
				}
			}
			else
			{
				func_178(9, 1);
			}
			break;
		case 2:
			__LIB_1__::func_281(&iLocal_63, 1, 1);
			uParam0->f_4 = func_4(uParam0);
			if (((!uParam0->f_4 == 7 && !uParam0->f_4 == 8) && !uParam0->f_4 == 9) && !uParam0->f_4 == 10)
			{
				if (__LIB_7__::func_555(Global_35, func_13(uParam0, uParam0->f_4), (func_187(uParam0, uParam0->f_4) + 55f), 1065353216 /* Float: 1f */))
				{
					bLocal_23 = false;
					if (__LIB_7__::func_581(uParam0))
					{
						iLocal_63 = __LIB_1__::func_282("DISCO_PUSH", joaat("INPUT_CONTEXT_Y"), func_13(uParam0, uParam0->f_4), 2f, 2, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
					}
					func_178(4, 1);
				}
				else
				{
					bLocal_23 = true;
					if (!__LIB_7__::func_581(uParam0))
					{
						iLocal_63 = __LIB_1__::func_282("DISCO_PUSH", joaat("INPUT_CONTEXT_Y"), func_13(uParam0, uParam0->f_4), 2f, 2, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
					}
					func_178(3, 1);
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_266(Global_35, func_13(uParam0, uParam0->f_4), 1.4f, 1, 1) || !__LIB_1__::func_374(Global_35, func_13(uParam0, uParam0->f_4), 0.5f))
			{
				__LIB_1__::func_281(&iLocal_63, 1, 1);
				func_178(1, 1);
			}
			else if (__LIB_7__::func_555(Global_35, func_13(uParam0, uParam0->f_4), (func_187(uParam0, uParam0->f_4) + 55f), 1065353216 /* Float: 1f */))
			{
				__LIB_1__::func_281(&iLocal_63, 1, 1);
				func_178(2, 1);
			}
			else if (__LIB_0__::func_139(iLocal_63))
			{
				if (__LIB_0__::func_567(iLocal_63, 1))
				{
					__LIB_1__::func_281(&iLocal_63, 1, 1);
					if (__LIB_7__::func_555(Global_35, func_13(uParam0, uParam0->f_4), (func_187(uParam0, uParam0->f_4) + 55f), 1065353216 /* Float: 1f */))
					{
						func_190(uParam0, uParam0->f_4);
					}
					else
					{
						func_73(uParam0);
					}
					func_191(uParam0);
					func_178(5, 1);
				}
			}
			break;
		case 4:
			if (!__LIB_0__::func_266(Global_35, func_13(uParam0, uParam0->f_4), 1.4f, 1, 1) || !__LIB_1__::func_374(Global_35, func_13(uParam0, uParam0->f_4), 0.5f))
			{
				__LIB_1__::func_281(&iLocal_63, 1, 1);
				func_178(1, 1);
			}
			else if (!__LIB_7__::func_555(Global_35, func_13(uParam0, uParam0->f_4), (func_187(uParam0, uParam0->f_4) + 55f), 1065353216 /* Float: 1f */))
			{
				__LIB_1__::func_281(&iLocal_63, 1, 1);
				func_178(2, 1);
			}
			else if (__LIB_0__::func_139(iLocal_63))
			{
				if (__LIB_0__::func_567(iLocal_63, 1))
				{
					__LIB_1__::func_281(&iLocal_63, 1, 1);
					if (__LIB_7__::func_555(Global_35, func_13(uParam0, uParam0->f_4), (func_187(uParam0, uParam0->f_4) + 55f), 1065353216 /* Float: 1f */))
					{
						func_190(uParam0, uParam0->f_4);
					}
					else
					{
						func_73(uParam0);
					}
					func_191(uParam0);
					func_178(5, 1);
				}
			}
			break;
		case 5:
			if (__LIB_0__::func_265(&uLocal_66) >= 9f)
			{
				func_178(7, 1);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) == 8)
			{
				func_178(7, 1);
			}
			break;
		case 7:
			if (!__LIB_0__::func_27(Global_40.f_8863.f_152, 1024))
			{
				if ((((((__LIB_0__::func_27(Global_40.f_8863.f_152, 8) && __LIB_0__::func_27(Global_40.f_8863.f_152, 16)) && !__LIB_0__::func_27(Global_40.f_8863.f_152, 32)) && __LIB_0__::func_27(Global_40.f_8863.f_152, 64)) && !__LIB_0__::func_27(Global_40.f_8863.f_152, 128)) && __LIB_0__::func_27(Global_40.f_8863.f_152, 256)) && !__LIB_0__::func_27(Global_40.f_8863.f_152, 512))
				{
					__LIB_1__::func_581(&(Global_40.f_8863.f_152), 1024);
				}
			}
			if (__LIB_1__::func_871(&uLocal_66) >= 1000)
			{
				AUDIO::_PLAY_SOUND_FROM_POSITION(__LIB_7__::func_543(uParam0, 0), __LIB_7__::func_460(uParam0, uParam0->f_4), __LIB_7__::func_542(uParam0), false, 0, false, 0);
				func_178(8, 1);
			}
			break;
		case 8:
			if (__LIB_1__::func_871(&uLocal_66) >= 400)
			{
				if (func_58(uParam0, 1))
				{
					if (__LIB_0__::func_27(Global_40.f_8863.f_152, 1024))
					{
						AUDIO::_PLAY_SOUND_FROM_POSITION(__LIB_7__::func_543(uParam0, 1), __LIB_7__::func_460(uParam0, 7), __LIB_7__::func_542(uParam0), false, 0, false, 0);
						func_178(9, 1);
					}
					else
					{
						func_178(2, 1);
					}
				}
			}
			break;
		case 9:
			func_192(100f);
			func_172(uParam0);
			func_178(10, 1);
			break;
		case 10:
			if ((__LIB_0__::func_27(Global_40.f_8863.f_152, 2048) && __LIB_0__::func_27(Global_40.f_8863.f_152, 4096)) && __LIB_0__::func_27(Global_40.f_8863.f_152, 8192))
			{
				func_178(12, 1);
			}
			else if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 0), 5f, 1, 1))
			{
				if (__LIB_3__::func_982())
				{
					if (!__LIB_0__::func_27(Global_40.f_8863.f_152, 2048))
					{
						if (func_194(&(uLocal_28[0]), __LIB_7__::func_544(uParam0, 0)))
						{
							__LIB_1__::func_581(&(Global_40.f_8863.f_152), 2048);
						}
					}
					if (!__LIB_0__::func_27(Global_40.f_8863.f_152, 4096))
					{
						if (func_194(&(uLocal_28[1]), __LIB_7__::func_544(uParam0, 1)))
						{
							__LIB_1__::func_581(&(Global_40.f_8863.f_152), 4096);
						}
					}
					if (!__LIB_0__::func_27(Global_40.f_8863.f_152, 8192))
					{
						if (func_194(&(uLocal_28[2]), __LIB_7__::func_544(uParam0, 2)))
						{
							__LIB_1__::func_581(&(Global_40.f_8863.f_152), 8192);
						}
					}
				}
			}
			break;
		case 12:
			return true;
	}
	return false;
}

void func_80(var uParam0)
{
	switch (*uParam0)
	{
		case -544327665:
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 1))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 2))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 4))
			{
			}
			break;
		case 1120968795:
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 1024))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 2048))
			{
			}
			break;
		case 1519472817:
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 8388608))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 16777216))
			{
			}
			break;
		case -1859023693:
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 4096))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 8192))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 16384))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 32768))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 65536))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 131072))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 262144))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 524288))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 1048576))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 2097152))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 4194304))
			{
			}
			break;
		case -834293086:
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 1))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 2))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 4))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 8))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 16))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 32))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 64))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 128))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 256))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_153, 512))
			{
			}
			break;
		case 2000209669:
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 8))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 16))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 32))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 64))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 128))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 256))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 512))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 1024))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 2048))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 4096))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 8192))
			{
			}
			break;
		case 404434344:
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 1))
			{
			}
			break;
		case -1761578407:
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 1))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 2))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 4))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 8))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 16))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 32))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 64))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 128))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 256))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 512))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 1024))
			{
			}
			break;
		case -890175011:
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 2048))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 4096))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 8192))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 16384))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 32768))
			{
			}
			break;
		case 677950956:
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 65536))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 131072))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 262144))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 524288))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 1048576))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 1048576))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_154, 2097152))
			{
			}
			break;
		case -1272862985:
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 262144))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 524288))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 1048576))
			{
			}
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 2097152))
			{
			}
			break;
		default:
			break;
	}
}

bool func_81(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iLocal_65 >= 0 && iLocal_65 <= 12)
	{
		if (*uParam0 == 404434344)
		{
			uParam0->f_4 = 0;
			uParam0->f_6.f_2 = { func_92(uParam0, 0) };
		}
		else if (*uParam0 == -1761578407)
		{
			if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					uParam0->f_4 = func_4(uParam0);
					uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) };
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6.f_9))
					{
						VOLUME::_DELETE_VOLUME(uParam0->f_6.f_9);
					}
					if (uParam0->f_4 == 2)
					{
						uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2576.871f, -628.9302f, 42.2934f, 0f, 0f, -110.7924f, 2.5f, 1.61286f, 5f, __LIB_7__::func_468(uParam0));
					}
					else if (uParam0->f_4 == 3)
					{
						uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2578.758f, -629.6465f, 42.2934f, 0f, 0f, -110.7924f, 2.5f, 1.61286f, 5f, __LIB_7__::func_468(uParam0));
					}
				}
			}
		}
	}
	switch (iLocal_65)
	{
		case 0:
			if (*uParam0 == 404434344)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_40.f_1[0]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(Local_40.f_1[0]);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_40.f_1[0], true);
					ENTITY::SET_ENTITY_PROOFS(Local_40.f_1[0], 6, false);
				}
				func_178(1, 1);
			}
			else if (__LIB_0__::func_139(uParam0->f_6.f_8) && __LIB_0__::func_486(uParam0->f_6.f_8, 1) <= 0f)
			{
				func_178(1, 1);
			}
			break;
		case 1:
			if (*uParam0 == 404434344)
			{
				if (__LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 35f, 1, 1))
				{
					if ((!ENTITY::IS_ENTITY_DEAD(Local_40.f_1[0]) && ENTITY::IS_ENTITY_VISIBLE(Local_40.f_1[0])) || __LIB_0__::func_266(Global_35, __LIB_7__::func_494(uParam0, 0), 15f, 1, 1))
					{
						if (__LIB_7__::func_484())
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_40.f_1[0], true);
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_ANIMAL_FLEE(0, Global_35, -1);
							TASK::TASK_SMART_FLEE_PED(0, Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(Local_40.f_1[0], iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_40.f_1[0], false);
							TASK::TASK_FLY_AWAY(Local_40.f_1[0], Global_35);
						}
						func_178(3, 1);
					}
				}
			}
			else if (__LIB_0__::func_27(uParam0->f_3, 2))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_92(uParam0, uParam0->f_4), 1000);
				TASK::TASK_PLAY_ANIM(0, __LIB_7__::func_560(uParam0, 0, 0, 0), __LIB_7__::func_560(uParam0, 0, 1, 0), 4f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				func_178(6, 1);
			}
			break;
		case 3:
			if (*uParam0 == 404434344)
			{
				if (!bLocal_23)
				{
					if (!__LIB_0__::func_48(Global_35, Local_40.f_1[0], 90f, 1))
					{
						bLocal_23 = true;
						if (!ENTITY::IS_ENTITY_DEAD(Local_40.f_1[0]))
						{
							__LIB_0__::func_490(&(Local_40.f_1[0]), 1);
						}
					}
				}
			}
			if (__LIB_0__::func_27(uParam0->f_3, 2))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_92(uParam0, uParam0->f_4), 1000);
				TASK::TASK_PLAY_ANIM(0, __LIB_7__::func_560(uParam0, 0, 0, 0), __LIB_7__::func_560(uParam0, 0, 1, 0), 4f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				func_178(6, 1);
			}
			break;
		case 6:
			CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), true);
			if (!__LIB_7__::func_581(uParam0))
			{
				if (__LIB_7__::func_475(uParam0))
				{
					if (uParam0->f_4 == 2)
					{
						if (!__LIB_0__::func_27(Global_40.f_8863.f_154, 4))
						{
							func_73(uParam0);
							func_80(uParam0);
							func_198(uParam0, 1);
						}
					}
					else if (uParam0->f_4 == 3)
					{
						if (!__LIB_0__::func_27(Global_40.f_8863.f_154, 8))
						{
							func_73(uParam0);
							func_80(uParam0);
							func_198(uParam0, 1);
						}
					}
					else
					{
						func_73(uParam0);
						func_80(uParam0);
						func_198(uParam0, 1);
						if (*uParam0 == 404434344)
						{
							if (!__LIB_7__::func_497(*uParam0, 2))
							{
								__LIB_7__::func_498(*uParam0, 2);
							}
						}
					}
					if ((((((((__LIB_0__::func_27(Global_40.f_8863.f_154, 1) && __LIB_0__::func_27(Global_40.f_8863.f_154, 2)) && __LIB_0__::func_27(Global_40.f_8863.f_154, 4)) && __LIB_0__::func_27(Global_40.f_8863.f_154, 8)) && __LIB_0__::func_27(Global_40.f_8863.f_154, 16)) && __LIB_0__::func_27(Global_40.f_8863.f_154, 32)) && __LIB_0__::func_27(Global_40.f_8863.f_154, 64)) && __LIB_0__::func_27(Global_40.f_8863.f_154, 128)) && __LIB_0__::func_27(Global_40.f_8863.f_154, 256))
					{
						if (*uParam0 == 404434344)
						{
							if (!__LIB_7__::func_530(-1761578407))
							{
								__LIB_7__::func_556(-1761578407);
							}
						}
						else
						{
							func_71(uParam0);
							if (!__LIB_7__::func_497(404434344, 2))
							{
								__LIB_7__::func_498(404434344, 2);
							}
						}
					}
				}
			}
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_Y")))
			{
				if (!__LIB_0__::func_27(uParam0->f_3, 4))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, __LIB_7__::func_560(uParam0, 0, 0, 0), __LIB_7__::func_560(uParam0, 0, 1, 0), 1))
					{
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, __LIB_7__::func_560(uParam0, 0, 0, 0), __LIB_7__::func_560(uParam0, 0, 1, 0)) >= 0.8f)
						{
							__LIB_1__::func_581(&(uParam0->f_3), 4);
							TASK::TASK_PLAY_ANIM(Global_35, __LIB_7__::func_560(uParam0, 0, 0, 0), "loop", 2f, -4f, -1, 67108880, 0f, false, 65536, false, 0, false);
						}
					}
				}
			}
			else if (!__LIB_7__::func_581(uParam0))
			{
				if (!__LIB_0__::func_27(uParam0->f_3, 2) && __LIB_0__::func_486(uParam0->f_6.f_8, 1) <= 0f)
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
					func_178(0, 1);
				}
			}
			else if (!__LIB_0__::func_27(uParam0->f_3, 4))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, __LIB_7__::func_560(uParam0, 0, 0, 0), __LIB_7__::func_560(uParam0, 0, 1, 0), 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, __LIB_7__::func_560(uParam0, 0, 0, 0), __LIB_7__::func_560(uParam0, 0, 1, 0)) >= 0.8f)
					{
						__LIB_1__::func_581(&(uParam0->f_3), 4);
						TASK::TASK_PLAY_ANIM(Global_35, __LIB_7__::func_560(uParam0, 0, 0, 0), "loop", 2f, -4f, -1, 67108880, 0f, false, 65536, false, 0, false);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, __LIB_7__::func_560(uParam0, 0, 0, 0), "loop", 1))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, __LIB_7__::func_560(uParam0, 0, 0, 0), "loop") >= 0.02f)
				{
					TASK::TASK_PLAY_ANIM(Global_35, __LIB_7__::func_560(uParam0, 0, 0, 0), "outro", 4f, -8f, -1, 67108880, 0f, false, 65536, false, 0, false);
					func_178(7, 1);
				}
			}
			break;
		case 7:
			if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, __LIB_7__::func_560(uParam0, 0, 0, 0), "outro") < 0.8f)
				{
					PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				}
			}
			if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, __LIB_7__::func_560(uParam0, 0, 0, 0), "outro") >= 0.98f)
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
				if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, __LIB_7__::func_560(uParam0, 0, 0, 0), "outro") < 0.8f)
					{
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
					}
				}
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, __LIB_7__::func_560(uParam0, 0, 0, 0), "outro") >= 0.98f)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
					if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
					{
						if (__LIB_0__::func_27(Global_40.f_8863.f_154, 4) && __LIB_0__::func_27(Global_40.f_8863.f_154, 8))
						{
							func_178(12, 1);
						}
						else
						{
							if (__LIB_7__::func_497(*uParam0, 16))
							{
								func_51(*uParam0, 16);
							}
							if (__LIB_0__::func_27(uParam0->f_3, 4))
							{
								__LIB_1__::func_993(&(uParam0->f_3), 4);
							}
							func_178(0, 1);
						}
					}
					else
					{
						func_178(12, 1);
					}
				}
			}
			break;
		case 12:
			return true;
	}
	return false;
}

int func_82(var uParam0)
{
	if (__LIB_7__::func_581(uParam0))
	{
		return 0;
	}
	if (iLocal_65 > 0 && iLocal_65 < 12)
	{
	}
	switch (iLocal_65)
	{
		case 0:
			func_178(1, 1);
			break;
		case 1:
			if (func_199(&iLocal_14, &uLocal_28))
			{
				func_178(6, 1);
			}
			break;
		case 6:
			if (func_46(&iLocal_14))
			{
				func_47(3, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				func_178(12, 1);
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_83(int iParam0)
{
	int iVar0;
	if (iParam0 == 0)
	{
		iVar0 = 2;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 4;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 8;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 16;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 32;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 64;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 128;
	}
	else if (iParam0 == 7)
	{
		iVar0 = 256;
	}
	else if (iParam0 == 8)
	{
		iVar0 = 512;
	}
	else if (iParam0 == 9)
	{
		iVar0 = 1024;
	}
	else if (iParam0 == 10)
	{
		iVar0 = 2048;
	}
	else if (iParam0 == 11)
	{
		iVar0 = 4096;
	}
	else if (iParam0 == 12)
	{
		iVar0 = 8192;
	}
	else if (iParam0 == 13)
	{
		iVar0 = 16384;
	}
	else if (iParam0 == 14)
	{
		iVar0 = 32768;
	}
	else if (iParam0 == 15)
	{
		iVar0 = 65536;
	}
	else if (iParam0 == 16)
	{
		iVar0 = 131072;
	}
	else if (iParam0 == 17)
	{
		iVar0 = 262144;
	}
	else if (iParam0 == 18)
	{
		iVar0 = 524288;
	}
	else if (iParam0 == 19)
	{
		iVar0 = 1048576;
	}
	else
	{
		return;
	}
	if (!__LIB_0__::func_27(Global_40.f_8863.f_148, iVar0))
	{
		__LIB_1__::func_581(&(Global_40.f_8863.f_148), iVar0);
	}
}

void func_84(var uParam0)
{
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 2))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 4))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 8))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 16))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 32))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 64))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 128))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 256))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 512))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 1024))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 2048))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 4096))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 8192))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 16384))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 32768))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 65536))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 131072))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 262144))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 524288))
	{
	}
	if (__LIB_0__::func_27(Global_40.f_8863.f_148, 1048576))
	{
	}
}

bool func_89(var uParam0)
{
	switch (iLocal_65)
	{
		case 0:
			if (__LIB_0__::func_27(Global_40.f_8863.f_152, 131072))
			{
				func_178(12, 1);
			}
			else
			{
				func_178(1, 1);
			}
			break;
		case 1:
			if (__LIB_0__::func_266(Global_35, __LIB_7__::func_467(uParam0, 0), 75f, 1, 1))
			{
				if (!bLocal_23)
				{
					if (__LIB_7__::func_536(uParam0, &iLocal_19, &uLocal_28, 0, 7))
					{
						bLocal_23 = true;
					}
				}
				else if (ENTITY::IS_ENTITY_DEAD(uLocal_28[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_28[0], Global_35, 1, 1))
				{
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_15) && !TASK::_IS_SCENARIO_POINT_ACTIVE(iLocal_15))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_15, true);
					}
					func_178(2, 1);
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_982())
			{
				if (__LIB_7__::func_495(__LIB_7__::func_508(uParam0, 0)))
				{
					func_178(3, 1);
				}
			}
			break;
		case 3:
			if (!__LIB_3__::func_982())
			{
				__LIB_1__::func_581(&(Global_40.f_8863.f_152), 131072);
				func_178(12, 1);
			}
			break;
		case 12:
			return true;
	}
	return false;
}

bool func_90(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
	{
		if (!__LIB_1__::func_927())
		{
			__LIB_1__::func_864(Global_35, 0, 0);
			return true;
		}
	}
	return false;
}

int func_91(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
	{
		uParam0->f_4 = func_4(uParam0);
		uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) };
		if (__LIB_0__::func_266(Global_35, uParam0->f_6.f_2, 10f, 1, 1))
		{
			if (!__LIB_0__::func_27(uParam0->f_3, 1))
			{
				__LIB_1__::func_581(&(uParam0->f_3), 1);
			}
		}
	}
	switch (iLocal_65)
	{
		case 0:
			if ((!__LIB_7__::func_569(uParam0) || !__LIB_7__::func_575(uParam0)) || func_213(uParam0))
			{
				return 0;
			}
			func_178(2, 1);
			break;
		case 2:
			AUDIO::SET_AMBIENT_ZONE_STATE(__LIB_7__::func_577(uParam0), true, true);
			func_178(1, 1);
			break;
		case 1:
			if ((!__LIB_7__::func_569(uParam0) || !__LIB_7__::func_575(uParam0)) || func_213(uParam0))
			{
				func_178(7, 1);
				return 0;
			}
			break;
		case 7:
			AUDIO::SET_AMBIENT_ZONE_STATE(__LIB_7__::func_577(uParam0), false, true);
			func_178(0, 1);
			break;
		case 12:
			return 1;
	}
	return 0;
}

Vector3 func_92(var uParam0, int iParam1)
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
void func_93(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	uVar0 = __LIB_0__::func_23();
	__LIB_2__::func_670(&uVar0, 0, iParam1, iParam2, iParam3, iParam4, 0, 0);
	iVar1 = -1;
	if (__LIB_4__::func_312(iParam0, &iVar1))
	{
		if (__LIB_4__::func_132(iVar1) == iParam0)
		{
			__LIB_4__::func_133(iVar1, iParam0);
			func_218(iVar1, uVar0);
			return;
		}
	}
	else if (iVar1 > -1)
	{
		__LIB_4__::func_133(iVar1, iParam0);
		func_218(iVar1, uVar0);
		return;
	}
}

void func_97(var uParam0)
{
	__LIB_7__::func_566(&Local_40);
	__LIB_7__::func_521(&uLocal_28);
	if ((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == 2000209669)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_7__::func_560(uParam0, 0, 0, 0)))
		{
			if (STREAMING::DOES_ANIM_DICT_EXIST(__LIB_7__::func_560(uParam0, 0, 0, 0)))
			{
				STREAMING::REMOVE_ANIM_DICT(__LIB_7__::func_560(uParam0, 0, 0, 0));
			}
		}
	}
	if (*uParam0 == 2000209669)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_7__::func_542(uParam0)))
		{
			AUDIO::_0x531A78D6BF27014B(__LIB_7__::func_542(uParam0));
		}
	}
	if (*uParam0 == -1308658310 || *uParam0 == 221420861)
	{
		STREAMING::REMOVE_PTFX_ASSET();
	}
	if (*uParam0 == -1891628345 || (*uParam0 == -1761578407 && uParam0->f_4 == 6))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_64, 0);
	}
}

Vector3 func_101(var uParam0, int iParam1)
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
int func_102()
{
	return Global_1572887.f_12;
}

bool func_121()
{
	if (func_102() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_126()
{
	int iVar0;
	if (!func_238(joaat("DOCUMENT_PLAYER_JOURNAL"), 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	if (!__LIB_7__::func_589(16))
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
	if (INVENTORY::_0x3D10D7179D7034AF(func_240(0), iVar0, 0))
	{
		return false;
	}
	Global_36620 = MISC::GET_GAME_TIMER() + 1000;
	__LIB_7__::func_451();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iVar0, 1928812891, 1, 0, -1082130432 /* Float: -1f */);
	return true;
}

void func_135(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;
	iVar0 = __LIB_0__::func_786();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_243(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (__LIB_0__::func_293(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_15())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = __LIB_0__::func_309(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = __LIB_0__::func_786();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = __LIB_0__::func_416(iVar1);
		__LIB_1__::func_454(__LIB_0__::func_417(), 0, 4000);
		__LIB_3__::func_363(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		__LIB_1__::func_427(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > __LIB_0__::func_348(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < __LIB_0__::func_348(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { __LIB_0__::func_14(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		__LIB_0__::func_896(10, 1);
	}
}

bool func_142(int iParam0)
{
	if (func_102() != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_5(iParam0))
	{
		return false;
	}
	return __LIB_1__::func_44(Global_1347702[iParam0 /*49*/].f_15);
}

bool func_150(int iParam0)
{
	if (iParam0 == 0)
	{
		if (__LIB_0__::func_27(Global_40.f_8863.f_152, 8))
		{
			return true;
		}
	}
	else if (iParam0 == 1)
	{
		if (__LIB_0__::func_27(Global_40.f_8863.f_152, 16))
		{
			return true;
		}
	}
	else if (iParam0 == 2)
	{
		if (__LIB_0__::func_27(Global_40.f_8863.f_152, 32))
		{
			return true;
		}
	}
	else if (iParam0 == 3)
	{
		if (__LIB_0__::func_27(Global_40.f_8863.f_152, 64))
		{
			return true;
		}
	}
	else if (iParam0 == 4)
	{
		if (__LIB_0__::func_27(Global_40.f_8863.f_152, 128))
		{
			return true;
		}
	}
	else if (iParam0 == 5)
	{
		if (__LIB_0__::func_27(Global_40.f_8863.f_152, 256))
		{
			return true;
		}
	}
	else if (iParam0 == 6)
	{
		if (__LIB_0__::func_27(Global_40.f_8863.f_152, 512))
		{
			return true;
		}
	}
	else if (iParam0 == 7)
	{
		if (__LIB_0__::func_27(Global_40.f_8863.f_152, 1024))
		{
			return true;
		}
	}
	else if (iParam0 == 11)
	{
		if (__LIB_0__::func_27(Global_40.f_8863.f_152, 16384))
		{
			return true;
		}
	}
	return false;
}

char* func_151(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "dis_grz_button_2_on";
			}
			else
			{
				return "dis_grz_button_2_off";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "dis_grz_button_3_on";
			}
			else
			{
				return "dis_grz_button_3_off";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "dis_grz_button_4_on";
			}
			else
			{
				return "dis_grz_button_4_off";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "dis_grz_button_5_on";
			}
			else
			{
				return "dis_grz_button_5_off";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "dis_grz_button_6_on";
			}
			else
			{
				return "dis_grz_button_6_off";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "dis_grz_button_7_on";
			}
			else
			{
				return "dis_grz_button_7_off";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "dis_grz_button_8_on";
			}
			else
			{
				return "dis_grz_button_8_off";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "dis_grz_lid_open";
			}
			else
			{
				return "dis_grz_lid_closed";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_154(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_14))
	{
		if ((((((*uParam0 == -544327665 || *uParam0 == -1761578407) || *uParam0 == 404434344) || *uParam0 == 1519472817) || *uParam0 == -890175011) || *uParam0 == 677950956) || *uParam0 == -1272862985)
		{
			vVar0 = { func_13(uParam0, uParam0->f_4) };
		}
		else if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
		{
			vVar0 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true) };
		}
		if (__LIB_0__::func_86(vVar0))
		{
		}
		if (((((((((((((((((*uParam0 == 1464664327 || *uParam0 == -232974724) || *uParam0 == 2000209669) || *uParam0 == -1761578407) || *uParam0 == 404434344) || *uParam0 == -890175011) || *uParam0 == 677950956) || *uParam0 == -1614148516) || *uParam0 == 503180747) || *uParam0 == -409986722) || *uParam0 == -2019711818) || *uParam0 == 683269210) || *uParam0 == 1347913620) || *uParam0 == -919236330) || *uParam0 == -1272862985) || *uParam0 == -607940493) || *uParam0 == 1535254161) || *uParam0 == 230001763)
		{
			if (*uParam0 == 1464664327)
			{
				vVar0 = { 1183.872f, 2035.43f, 324.3338f };
				vVar3 = { 0f, 0f, -45.764f };
				vVar6 = { 7.547398f, 4.034004f, 5.6249f };
			}
			else if (*uParam0 == -232974724)
			{
				vVar0 = { 191.2143f, -412.4497f, 86.6615f };
				vVar3 = { 0f, 0f, -31.00864f };
				vVar6 = { 4.507977f, 5.159722f, 5f };
			}
			else if (*uParam0 == 2000209669)
			{
				vVar0 = { 830.6414f, 1924.297f, 259.5716f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 4f, 4f, 4f };
			}
			else if (*uParam0 == -1614148516)
			{
				vVar0 = { 2309.656f, -334.2829f, 42.88904f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 10.73793f, 10.12531f, 10f };
			}
			else if (*uParam0 == -409986722)
			{
				vVar0 = { 1985.943f, -1896.122f, 40.6398f };
				vVar3 = { 0f, 0f, 12.50924f };
				vVar6 = { 6.360533f, 7.521983f, 10f };
			}
			else if (*uParam0 == -2019711818)
			{
				vVar0 = { 47.4897f, 1712.436f, 127.2594f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 13.81293f, 22.37569f, 19.81484f };
			}
			else if (*uParam0 == 683269210)
			{
				vVar0 = { -5576.82f, -2583.934f, -9.5414f };
				vVar3 = { 0f, 0f, 30.53407f };
				vVar6 = { 11.12445f, 7.156734f, 20.90556f };
			}
			else if (*uParam0 == 1347913620)
			{
				vVar0 = { 2452.989f, 291.1053f, 69.5017f };
				vVar3 = { 0f, 0f, 86.66475f };
				vVar6 = { 28.75424f, 25.43092f, 20.90556f };
			}
			else if (*uParam0 == -919236330)
			{
				vVar0 = { -3831.608f, -3004.712f, -7.892179f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 25f, 25f, 6f };
			}
			else if (*uParam0 == -607940493)
			{
				vVar0 = { 2704.939f, 435.9636f, 91.37785f };
				vVar3 = { 0f, 0f, -54.20028f };
				vVar6 = { 3.346154f, 3.339972f, 8.648747f };
			}
			else if (*uParam0 == 1535254161)
			{
				vVar0 = { 1503.231f, -1819.476f, 56.89473f };
				vVar3 = { 0f, 0f, 31.7625f };
				vVar6 = { 44.60546f, 27.38259f, 6f };
			}
			else if (*uParam0 == 230001763)
			{
				vVar0 = { 2133.283f, 145.452f, 75.745f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 6f, 6f, 6f };
			}
			else if (*uParam0 == -1761578407 || *uParam0 == 404434344)
			{
				if (uParam0->f_4 == 9)
				{
					vVar0 = { 895.55f, -1968.068f, 43.71555f };
				}
				else if (uParam0->f_4 == 10)
				{
					vVar0 = { 895.55f, -1968.068f, 43.71555f };
				}
				else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
				{
					vVar0 = { 2577.819f, -629.2898f, 42.2934f };
					vVar3 = { 0f, 0f, -110.7924f };
					vVar6 = { 3.5f, 5.840896f, 5f };
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == -890175011)
			{
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 3f, 3f, 3f };
				if (uParam0->f_4 == 0)
				{
				}
				else if (uParam0->f_4 == 1)
				{
				}
				else if (uParam0->f_4 == 2)
				{
				}
				else if (uParam0->f_4 == 3)
				{
				}
				else if (uParam0->f_4 == 4)
				{
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == 677950956)
			{
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 3f, 3f, 3f };
				if (uParam0->f_4 == 0)
				{
				}
				else if (uParam0->f_4 == 1)
				{
				}
				else if (uParam0->f_4 == 2)
				{
				}
				else if (uParam0->f_4 == 3)
				{
				}
				else if (uParam0->f_4 == 4)
				{
				}
				else if (uParam0->f_4 == 5)
				{
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == 503180747)
			{
				if (uParam0->f_4 == 0)
				{
					vVar0 = { 2325.978f, 1070.32f, 44.9401f };
					vVar3 = { 0f, 0f, 0f };
					vVar6 = { 8.229425f, 7.256244f, 7.642096f };
				}
				else if (uParam0->f_4 == 1)
				{
					vVar0 = { -2698.656f, 697.2829f, 162.889f };
					vVar3 = { 0f, 0f, 42.54451f };
					vVar6 = { 33.55475f, 29.02702f, 6f };
				}
			}
			else if (*uParam0 == -1272862985)
			{
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 6f, 6f, 6f };
			}
			if ((((((((*uParam0 == 2000209669 || *uParam0 == -890175011) || *uParam0 == 677950956) || *uParam0 == 503180747) || *uParam0 == -2019711818) || *uParam0 == -919236330) || *uParam0 == -1272862985) || *uParam0 == 1535254161) || *uParam0 == 230001763)
			{
				iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_256(uParam0));
			}
			else
			{
				iLocal_14 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_256(uParam0));
			}
		}
		else
		{
			if (*uParam0 == -321841939)
			{
				vVar0 = { func_92(uParam0, uParam0->f_4) };
				if (uParam0->f_4 == 4 || uParam0->f_4 == 19)
				{
					vVar6 = { 3f, 3f, 5f };
				}
				else if (uParam0->f_4 == 5)
				{
					vVar6 = { 3f, 3f, 7f };
				}
				else
				{
					vVar6 = { 5f, 5f, 5f };
				}
			}
			else if (*uParam0 == -1084929085 || *uParam0 == 330993088)
			{
				vVar6.x = (3f * 6f);
				vVar6.f_1 = (3f * 6f);
				vVar6.f_2 = 6f;
			}
			else if ((*uParam0 == -1891628345 || *uParam0 == 1505050944) || *uParam0 == -1243267511)
			{
				vVar6.x = (2f * 6f);
				vVar6.f_1 = (2f * 6f);
				vVar6.f_2 = 6f;
			}
			else if (*uParam0 == 221420861)
			{
				vVar6.x = (5f * 6f);
				vVar6.f_1 = (5f * 6f);
				vVar6.f_2 = (5f * 6f);
			}
			else if (*uParam0 == -1109016944)
			{
				vVar6.x = (10f * 6f);
				vVar6.f_1 = (10f * 6f);
				vVar6.f_2 = (3f * 6f);
			}
			else
			{
				vVar6.x = 6f;
				vVar6.f_1 = 6f;
				vVar6.f_2 = 6f;
			}
			iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_256(uParam0));
		}
	}
}

void func_155(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		uLocal_28.f_6[iVar0] = 0;
		iVar0++;
	}
	switch (*uParam0)
	{
		case 2000209669:
			uLocal_28.f_6[0] = joaat("S_PICKUP_GOLDBAR01X");
			uLocal_28.f_6[1] = joaat("S_PICKUP_GOLDBAR01X");
			uLocal_28.f_6[2] = joaat("S_PICKUP_GOLDBAR01X");
			break;
		case -321841939:
			uLocal_28.f_6[0] = joaat("P_DISDREAMCATCHERWIND01X");
			uLocal_28.f_6[1] = joaat("P_DISDREAMCATCHERWIND02X");
			uLocal_28.f_6[2] = joaat("P_DISDREAMCATCHERWIND03X");
			uLocal_28.f_6[3] = joaat("P_DISDREAMCATCHERWIND04X");
			uLocal_28.f_6[4] = joaat("P_DISDREAMCATCHERWIND05X");
			break;
		case 1347913620:
			uLocal_28.f_6[0] = joaat("P_CS_RT_ENVELOPE01X");
			break;
		case -1308658310:
			uLocal_28.f_6[0] = joaat("P_CS_DETONATOR01X");
			break;
		case -1614148516:
			uLocal_28.f_6[0] = joaat("P_PHONOGRAPH01X");
			break;
		case -161804536:
			uLocal_28.f_6[0] = joaat("P_HUMANSKULL02X");
			uLocal_28.f_6[1] = joaat("S_COMBVIKINGANCIENT01X");
			break;
		case 404434344:
			if (uParam0->f_4 == 0)
			{
				if (__LIB_7__::func_483())
				{
					Local_40.f_12[0] = joaat("A_C_EAGLE_01");
				}
				else if (__LIB_7__::func_484())
				{
					Local_40.f_12[0] = joaat("A_C_COYOTE_01");
				}
			}
			break;
		default:
			break;
	}
}

int func_167(var uParam0, int iParam1)
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
int func_169(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, fParam4, iParam5, iParam6, iParam7);
}

bool func_172(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_27(Global_40.f_8863.f_152, 1024))
	{
		if (!__LIB_0__::func_27(Global_40.f_8863.f_152, 2048))
		{
			if (!__LIB_7__::func_506(&uLocal_28, __LIB_7__::func_467(uParam0, 0), __LIB_7__::func_505(uParam0, 0), 0))
			{
				return false;
			}
		}
		if (!__LIB_0__::func_27(Global_40.f_8863.f_152, 4096))
		{
			if (!__LIB_7__::func_506(&uLocal_28, __LIB_7__::func_467(uParam0, 1), __LIB_7__::func_505(uParam0, 1), 1))
			{
				return false;
			}
		}
		if (!__LIB_0__::func_27(Global_40.f_8863.f_152, 8192))
		{
			if (!__LIB_7__::func_506(&uLocal_28, __LIB_7__::func_467(uParam0, 2), __LIB_7__::func_505(uParam0, 2), 2))
			{
				return false;
			}
		}
		if ((!__LIB_0__::func_27(Global_40.f_8863.f_152, 2048) || !__LIB_0__::func_27(Global_40.f_8863.f_152, 4096)) || !__LIB_0__::func_27(Global_40.f_8863.f_152, 8192))
		{
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_15))
			{
				iLocal_15 = func_169(func_167(uParam0, 0), func_101(uParam0, 0), func_168(uParam0, 0), 0, 0, 0);
			}
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_28[iVar0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_28[iVar0], true);
			}
			iVar0++;
		}
	}
	return true;
}

int func_173(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 404434344:
			switch (iParam1)
			{
				case 0:
					return joaat("META_OUTFIT_ANIMAL_SPIRIT_COYOTE_A");
				default:
					break;
			}
			break;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

void func_178(int iParam0, bool bParam1)
{
	iLocal_65 = iParam0;
	if (bParam1)
	{
		__LIB_1__::func_148(&uLocal_66);
	}
}

bool func_179(var uParam0)
{
	int iVar0;
	var uVar1;
	struct<11> Var2;
	Var2.f_10 = 7;
	Var2 = 1;
	Var2.f_1 = 1;
	Var2.f_2 = 0;
	Var2.f_6 = { __LIB_7__::func_494(uParam0, 0) };
	Var2.f_9 = __LIB_7__::func_554(uParam0, 0);
	iVar0 = func_262(&uVar1, &Var2);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_180(iVar0, __LIB_7__::func_494(uParam0, 0), __LIB_7__::func_554(uParam0, 0), 2, 1073741824 /* Float: 2f */);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
		TASK::TASK_STAND_STILL(iVar0, -1);
		return true;
	}
	return false;
}

void func_180(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_180(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_180(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_183(var uParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (bParam1)
	{
		if (!__LIB_15__::func_24())
		{
			return true;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			return true;
		}
		if (__LIB_0__::func_94(Global_35, __LIB_7__::func_467(uParam0, 0), 1) > (1.6f + 1f) || !__LIB_1__::func_374(Global_35, __LIB_7__::func_467(uParam0, 0), 0))
		{
			return true;
		}
	}
	else
	{
		if (!__LIB_15__::func_24())
		{
			return false;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			return false;
		}
		if (__LIB_0__::func_94(Global_35, __LIB_7__::func_467(uParam0, 0), 1) <= 1.6f && __LIB_1__::func_374(Global_35, __LIB_7__::func_467(uParam0, 0), 0))
		{
			return true;
		}
	}
	return false;
}

float func_187(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_266(uParam0, iParam1) };
	return vVar0.z;
}

void func_190(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (*uParam0)
	{
		case -544327665:
			if (iParam1 == 0)
			{
				iVar0 = 1;
			}
			else if (iParam1 == 1)
			{
				iVar0 = 2;
			}
			else if (iParam1 == 2)
			{
				iVar0 = 4;
			}
			else
			{
				return;
			}
			break;
		case -834293086:
			if (iParam1 == 0)
			{
				iVar1 = 1;
			}
			else if (iParam1 == 1)
			{
				iVar1 = 2;
			}
			else if (iParam1 == 2)
			{
				iVar1 = 4;
			}
			else if (iParam1 == 3)
			{
				iVar1 = 8;
			}
			else if (iParam1 == 4)
			{
				iVar1 = 16;
			}
			else if (iParam1 == 5)
			{
				iVar1 = 32;
			}
			else if (iParam1 == 6)
			{
				iVar1 = 64;
			}
			else if (iParam1 == 7)
			{
				iVar1 = 128;
			}
			else if (iParam1 == 8)
			{
				iVar1 = 256;
			}
			else if (iParam1 == 9)
			{
				iVar1 = 512;
			}
			else
			{
				return;
			}
			break;
		case 1120968795:
			if (iParam1 == 0)
			{
				iVar1 = 1024;
			}
			else if (iParam1 == 1)
			{
				iVar1 = 2048;
			}
			else
			{
				return;
			}
			break;
		case 1519472817:
			if (iParam1 == 0)
			{
				iVar1 = 8388608;
			}
			else if (iParam1 == 1)
			{
				iVar1 = 16777216;
			}
			else
			{
				return;
			}
			break;
		case -1859023693:
			if (iParam1 == 0)
			{
				iVar1 = 4096;
			}
			else if (iParam1 == 1)
			{
				iVar1 = 8192;
			}
			else if (iParam1 == 2)
			{
				iVar1 = 16384;
			}
			else if (iParam1 == 3)
			{
				iVar1 = 32768;
			}
			else if (iParam1 == 4)
			{
				iVar1 = 65536;
			}
			else if (iParam1 == 5)
			{
				iVar1 = 131072;
			}
			else if (iParam1 == 6)
			{
				iVar1 = 262144;
			}
			else if (iParam1 == 7)
			{
				iVar1 = 524288;
			}
			else if (iParam1 == 8)
			{
				iVar1 = 1048576;
			}
			else if (iParam1 == 9)
			{
				iVar1 = 2097152;
			}
			else if (iParam1 == 10)
			{
				iVar1 = 4194304;
			}
			else
			{
				return;
			}
			break;
		case 2000209669:
			if (iParam1 == 0)
			{
				iVar0 = 8;
			}
			else if (iParam1 == 1)
			{
				iVar0 = 16;
			}
			else if (iParam1 == 2)
			{
				iVar0 = 32;
			}
			else if (iParam1 == 3)
			{
				iVar0 = 64;
			}
			else if (iParam1 == 4)
			{
				iVar0 = 128;
			}
			else if (iParam1 == 5)
			{
				iVar0 = 256;
			}
			else if (iParam1 == 6)
			{
				iVar0 = 512;
			}
			else if (iParam1 == 7)
			{
				iVar0 = 1024;
			}
			else if (iParam1 == 8)
			{
				iVar0 = 2048;
			}
			else if (iParam1 == 9)
			{
				iVar0 = 4096;
			}
			else if (iParam1 == 10)
			{
				iVar0 = 8192;
			}
			else
			{
				return;
			}
			break;
		case -1272862985:
			if (iParam1 == 0)
			{
				iVar0 = 262144;
			}
			else if (iParam1 == 1)
			{
				iVar0 = 524288;
			}
			else if (iParam1 == 2)
			{
				iVar0 = 1048576;
			}
			else if (iParam1 == 3)
			{
				iVar0 = 2097152;
			}
			else
			{
				return;
			}
			break;
		case -1761578407:
			if (iParam1 == 0)
			{
				iVar2 = 1;
			}
			else if (iParam1 == 1)
			{
				iVar2 = 2;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar2 = 4;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar2 = 8;
			}
			else if (iParam1 == 4)
			{
				iVar2 = 16;
			}
			else if (iParam1 == 5)
			{
				iVar2 = 32;
			}
			else if (iParam1 == 6)
			{
				iVar2 = 64;
			}
			else if (iParam1 == 7)
			{
				iVar2 = 128;
			}
			else if (iParam1 == 8)
			{
				iVar2 = 256;
			}
			else if (iParam1 == 9)
			{
				iVar2 = 512;
			}
			else if (iParam1 == 10)
			{
				iVar2 = 1024;
			}
			else
			{
				return;
			}
			break;
		case -890175011:
			if (iParam1 == 0)
			{
				iVar2 = 2048;
			}
			else if (iParam1 == 1)
			{
				iVar2 = 4096;
			}
			else if (iParam1 == 2)
			{
				iVar2 = 8192;
			}
			else if (iParam1 == 3)
			{
				iVar2 = 16384;
			}
			else if (iParam1 == 4)
			{
				iVar2 = 32768;
			}
			else
			{
				return;
			}
			break;
		case 677950956:
			if (iParam1 == 0)
			{
				iVar2 = 65536;
			}
			else if (iParam1 == 1)
			{
				iVar2 = 131072;
			}
			else if (iParam1 == 2)
			{
				iVar2 = 262144;
			}
			else if (iParam1 == 3)
			{
				iVar2 = 524288;
			}
			else if (iParam1 == 4)
			{
				iVar2 = 1048576;
			}
			else if (iParam1 == 5)
			{
				iVar2 = 2097152;
			}
			else
			{
				return;
			}
			break;
		default:
			break;
	}
	if ((*uParam0 == -1761578407 || *uParam0 == -890175011) || *uParam0 == 677950956)
	{
		if (__LIB_0__::func_27(Global_40.f_8863.f_154, iVar2))
		{
			__LIB_1__::func_993(&(Global_40.f_8863.f_154), iVar2);
		}
	}
	else if (((*uParam0 == -834293086 || *uParam0 == 1120968795) || *uParam0 == 1519472817) || *uParam0 == -1859023693)
	{
		if (__LIB_0__::func_27(Global_40.f_8863.f_153, iVar1))
		{
			__LIB_1__::func_993(&(Global_40.f_8863.f_153), iVar1);
		}
	}
	else if (__LIB_0__::func_27(Global_40.f_8863.f_152, iVar0))
	{
		__LIB_1__::func_993(&(Global_40.f_8863.f_152), iVar0);
	}
}

void func_191(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	struct<4> Var4;
	int iVar8;
	if (bLocal_23)
	{
		fVar3 = (func_187(uParam0, uParam0->f_4) + 145f);
	}
	else
	{
		fVar3 = (func_187(uParam0, uParam0->f_4) + 325f);
	}
	Var4 = (fVar3 + 180f);
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_13(uParam0, uParam0->f_4), fVar3, 0f, 0.82f, 0f) };
	TASK::OPEN_SEQUENCE_TASK(&iVar8);
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
	TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, vVar0, 1f, 20000, 0.09f, 0, Var4, (fVar3 + 180f));
	TASK::TASK_PLAY_ANIM(0, __LIB_7__::func_560(uParam0, 0, 0, 0), __LIB_7__::func_560(uParam0, 0, 1, 0), 8f, -8f, -1, 24, 0f, false, 0, false, 0, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar8);
	TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar8);
	TASK::CLEAR_SEQUENCE_TASK(&iVar8);
}

void func_192(float fParam0)
{
	if (__LIB_0__::func_247(1) < fParam0)
	{
		func_270(1, fParam0, 0);
	}
	if (__LIB_0__::func_247(2) < fParam0)
	{
		func_270(2, fParam0, 0);
	}
	if (__LIB_0__::func_247(0) < fParam0)
	{
		func_270(0, fParam0, 0);
	}
}

bool func_194(var uParam0, int iParam1)
{
	struct<6> Var0;
	int iVar10;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		iVar10 = 0;
		while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar10) == -1730772208)
			{
				if (SCRIPTS::GET_EVENT_DATA(0, iVar10, &Var0, 10))
				{
					if (((Var0.f_2 == iParam1 && Var0.f_5 == 1) && ENTITY::DOES_ENTITY_EXIST(Var0.f_1)) && Var0.f_1 == *uParam0)
					{
						return true;
					}
				}
			}
			iVar10++;
		}
	}
	return false;
}

void func_198(var uParam0, int iParam1)
{
	if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("SP_ACHIEVEMENTS"), joaat("ACH_RESPECT")))
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_271(uParam0), iParam1);
	}
}

bool func_199(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		return false;
	}
	iVar0 = func_272(uParam1, &(uParam1->f_6), *iParam0, 5);
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar1]))
			{
				if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), (*uParam1)[iVar1]))
				{
					PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), (*uParam1)[iVar1], 0);
					PLAYER::_0x6ECFC621A168424C((*uParam1)[iVar1], (*uParam1)[iVar1], 0, 0);
				}
			}
			iVar1++;
		}
		return true;
	}
	return false;
}

bool func_213(var uParam0)
{
	switch (*uParam0)
	{
		case 1535254161:
			if (__LIB_0__::func_296(127, 0, 1))
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

void func_218(int iParam0, var uParam1)
{
	Global_40.f_297[iParam0 + 30] = uParam1;
}

bool func_238(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("AMMO"))
	{
		if (!func_297(iParam0, 1))
		{
			return false;
		}
	}
	return func_298(iParam0, 0, bParam2) >= iParam1;
}

int func_240(bool bParam0)
{
	if (func_102() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_243(int iParam0)
{
	float fVar0;
	float fVar1;
	if (func_102() != -1)
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
	fVar1 = __LIB_0__::func_514(MISC::ABSF(fVar1) < 1f, __LIB_0__::func_514(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

char* func_256(var uParam0)
{
	switch (*uParam0)
	{
		case -1084929085:
			return "DISC_VOL_BOAT_IN_TREE";
		case -490142739:
			return "DISC_VOL_STUFFED_GORILLA";
		case 1464664327:
			return "DISC_VOL_WITCHES_CAULDRON";
		case 74587361:
			return "DISC_VOL_LOVE_MESSAGE";
		case 221420861:
			return "DISC_VOL_WHISPERING_TREES";
		case 1535254161:
			return "DISC_VOL_CIV_BATTLEFIELD";
		case 683269210:
			return "DISC_VOL_ABANDONED_MISSION";
		case -30872859:
			return "DISC_VOL_SUN_DIAL";
		case -1891628345:
			return "DISC_VOL_UTE_WICKIUP";
		case 1505050944:
			return "DISC_VOL_DESERT_SKELETONS";
		case 330993088:
			return "DISC_VOL_OLD_RR_CAMP";
		case 2000209669:
			return "DISC_VOL_STRANGE_STATUES";
		case -1882503209:
			return "DISC_VOL_ABD_FURNITURE";
		case 1734766691:
			return "DISC_VOL_BRUSH_FIRE";
		case 1347913620:
			return "DISC_VOL_CIV_WAR_FORT";
		case 58958195:
			return "DISC_VOL_CRASHED_AIRSHIP";
		case -2019711818:
			return "DISC_VOL_DERAILED_TRAIN";
		case -1283611369:
			return "DISC_VOL_DESERT_WAGON";
		case -919236330:
			return "DISC_VOL_DESERTED_FARM";
		case -1243267511:
			return "DISC_VOL_FACE_TREES";
		case 918206817:
			return "DISC_VOL_FIRE_TOWER";
		case -1053108445:
			return "DISC_VOL_FLY_MACHINE";
		case -1646022773:
			return "DISC_VOL_FOSSIL_MAN";
		case -1787770845:
			return "DISC_VOL_GIANT_REMAINS";
		case -409986722:
			return "DISC_VOL_GRAVESTONE_TREE";
		case -148407339:
			return "DISC_VOL_MAMMOTH";
		case -979575591:
			return "DISC_VOL_OBELISK";
		case 230001763:
			return "DISC_VOL_GRAVESTONES";
		case -1609238411:
			return "DISC_VOL_OLD_SCRIPT";
		case 921081956:
			return "DISC_VOL_ONE_ROOM_CHURCH";
		case 173549940:
			return "DISC_VOL_PILE_OF_SKULLS";
		case -1686810506:
			return "DISC_VOL_POTS_TREE";
		case -1923503631:
			return "DISC_VOL_ROPE_BRIDGE";
		case -607940493:
			return "DISC_VOL_SERPENT_MOUND";
		case 1986618633:
			return "DISC_VOL_SPERM_WHALE";
		case -1960242214:
			return "DISC_VOL_UTOPIAN_COLONY";
		case -986176781:
			return "DISC_VOL_WHALE_BONE";
		case -1848895400:
			return "DISC_VOL_QUARRY";
		case -161804536:
			return "DISC_VOL_STONEHENGE";
		case 1833243216:
			return "DISC_VOL_MOUNTAIN_CLIMB";
		case 1154568952:
			return "DISC_VOL_SWAMP_FACTORY";
		case 1431862613:
			return "DISC_VOL_EARLY_SETTLERS";
		case -1958832660:
			return "DISC_VOL_ABANDON_CHURCH";
		case -232974724:
			return "DISC_VOL_TRADING_POST";
		case -1109016944:
			return "DISC_VOL_GHOST_TOWN";
		case 308500632:
			return "DISC_VOL_HIDDEN_TUNNEL";
		case -1505275983:
			return "DISC_VOL_WARPED_TREE";
		case -1761189332:
			return "DISC_VOL_REGISTER_ROCK";
		case -1614148516:
			return "DISC_VOL_PHONOGRAPH";
		case -1308658310:
			return "DISC_VOL_POWDER_KEG";
		case 1519472817:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_BROKEN_BRIDGE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_BROKEN_BRIDGE_2";
			}
			break;
		case -1859023693:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_BROKEN_WAGON_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_BROKEN_WAGON_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_BROKEN_WAGON_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_BROKEN_WAGON_4";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_BROKEN_WAGON_5";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_BROKEN_WAGON_6";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISC_VOL_BROKEN_WAGON_7";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISC_VOL_BROKEN_WAGON_8";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISC_VOL_BROKEN_WAGON_9";
			}
			else if (uParam0->f_4 == 9)
			{
				return "DISC_VOL_BROKEN_WAGON_10";
			}
			else if (uParam0->f_4 == 10)
			{
				return "DISC_VOL_BROKEN_WAGON_11";
			}
			break;
		case -544327665:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_OLD_FIREPIT_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_OLD_FIREPIT_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_OLD_FIREPIT_3";
			}
			break;
		case 1120968795:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_OLD_FIREPLACE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_OLD_FIREPLACE_2";
			}
			break;
		case -834293086:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_HORNETS_NEST_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_HORNETS_NEST_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_HORNETS_NEST_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_HORNETS_NEST_4";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_HORNETS_NEST_5";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_HORNETS_NEST_6";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISC_VOL_HORNETS_NEST_7";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISC_VOL_HORNETS_NEST_8";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISC_VOL_HORNETS_NEST_9";
			}
			else if (uParam0->f_4 == 9)
			{
				return "DISC_VOL_HORNETS_NEST_10";
			}
			break;
		case 404434344:
			return "DISC_VOL_GRAVE_ARTHUR";
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_GRAVE_ARTHUR";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_GRAVE_JENNY";
			}
			else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				return "DISC_VOL_GRAVE_HOSEA_LENNY";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_GRAVE_SEAN";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_GRAVE_DAVEY";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISC_VOL_GRAVE_KIERAN";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISC_VOL_GRAVE_SUSAN";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISC_VOL_GRAVE_EAGLE";
			}
			else if (uParam0->f_4 == 9)
			{
				return "DISC_VOL_GRAVE_1";
			}
			else if (uParam0->f_4 == 10)
			{
				return "DISC_VOL_GRAVE_2";
			}
			break;
		case -321841939:
			if (uParam0->f_4 == 0)
			{
				return "DISCO_DREAMCATCHERS_01";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISCO_DREAMCATCHERS_02";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISCO_DREAMCATCHERS_03";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISCO_DREAMCATCHERS_04";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISCO_DREAMCATCHERS_05";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISCO_DREAMCATCHERS_06";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISCO_DREAMCATCHERS_07";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISCO_DREAMCATCHERS_08";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISCO_DREAMCATCHERS_09";
			}
			else if (uParam0->f_4 == 9)
			{
				return "DISCO_DREAMCATCHERS_10";
			}
			else if (uParam0->f_4 == 10)
			{
				return "DISCO_DREAMCATCHERS_11";
			}
			else if (uParam0->f_4 == 11)
			{
				return "DISCO_DREAMCATCHERS_12";
			}
			else if (uParam0->f_4 == 12)
			{
				return "DISCO_DREAMCATCHERS_13";
			}
			else if (uParam0->f_4 == 13)
			{
				return "DISCO_DREAMCATCHERS_14";
			}
			else if (uParam0->f_4 == 14)
			{
				return "DISCO_DREAMCATCHERS_15";
			}
			else if (uParam0->f_4 == 15)
			{
				return "DISCO_DREAMCATCHERS_16";
			}
			else if (uParam0->f_4 == 16)
			{
				return "DISCO_DREAMCATCHERS_17";
			}
			else if (uParam0->f_4 == 17)
			{
				return "DISCO_DREAMCATCHERS_18";
			}
			else if (uParam0->f_4 == 18)
			{
				return "DISCO_DREAMCATCHERS_19";
			}
			else if (uParam0->f_4 == 19)
			{
				return "DISCO_DREAMCATCHERS_20";
			}
			break;
		case -890175011:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_VAMPIRE_CLUE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_VAMPIRE_CLUE_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_VAMPIRE_CLUE_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_VAMPIRE_CLUE_4";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_VAMPIRE_CLUE_5";
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_AZTEC_CLUE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_AZTEC_CLUE_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_AZTEC_CLUE_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_AZTEC_CLUE_4";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_AZTEC_CLUE_5";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_AZTEC_CLUE_6";
			}
			break;
		case 503180747:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_KILL_ZONE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_KILL_ZONE_2";
			}
			break;
		case -1272862985:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_TRAIL_TREES_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_TRAIL_TREES_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_TRAIL_TREES_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_TRAIL_TREES_4";
			}
			break;
	}
	return "";
}

int func_262(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;
	uParam1->f_10 = __LIB_0__::func_97(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (__LIB_0__::func_86(uParam1->f_6))
		{
		}
	}
	bVar0 = __LIB_0__::func_28();
	if (*uParam1)
	{
		if (bVar0 && !__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (__LIB_1__::func_105(5))
			{
				__LIB_1__::func_162(5);
				func_318(5);
				__LIB_0__::func_149(0);
				__LIB_0__::func_148(0);
			}
		}
	}
	if (__LIB_0__::func_979(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[37 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				__LIB_1__::func_54(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!__LIB_1__::func_105(0) && __LIB_1__::func_105(1))
			{
				func_327(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (__LIB_0__::func_988())
			{
				__LIB_0__::func_989();
			}
			__LIB_0__::func_149(0);
			__LIB_0__::func_148(0);
			__LIB_0__::func_150(uParam1->f_6);
		}
	}
	if (!__LIB_0__::func_797(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((__LIB_0__::func_821(uParam1->f_10) == 0 || __LIB_0__::func_809(uParam1->f_10) == 0) || __LIB_0__::func_815(uParam1->f_10) == 0)
			{
				func_334(uParam1->f_10);
			}
			__LIB_1__::func_106(uParam1->f_10);
			__LIB_0__::func_822(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!__LIB_0__::func_86(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (__LIB_1__::func_107(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { func_338(uParam1->f_10) };
			Var10 = { func_339() };
			__LIB_2__::func_299(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!__LIB_0__::func_823(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		__LIB_0__::func_824(uParam1->f_10);
		if (uParam1->f_2 && !__LIB_0__::func_86(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	__LIB_1__::func_108(uParam1->f_10);
	if (__LIB_0__::func_823(uParam1->f_10))
	{
		iVar16 = __LIB_0__::func_825(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

Vector3 func_266(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 2000209669:
			if (iParam1 == 0)
			{
				return 0f, 0f, 102.86f;
			}
			else if (iParam1 == 1)
			{
				return 0f, 0f, -102.86f;
			}
			else if (iParam1 == 2)
			{
				return 0f, 0f, 51.43f;
			}
			else if (iParam1 == 3)
			{
				return 0f, 0f, 0f;
			}
			else if (iParam1 == 4)
			{
				return 0f, 0f, 154.29f;
			}
			else if (iParam1 == 5)
			{
				return 0f, 0f, -154.29f;
			}
			else if (iParam1 == 6)
			{
				return 0f, 0f, -51.43f;
			}
			else if (iParam1 == 7)
			{
				return 0f, 0f, -135f;
			}
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_270(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	if (func_102() != -1)
	{
		return;
	}
	if (!__LIB_0__::func_293(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = __LIB_0__::func_198(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, __LIB_3__::func_130(iParam0), iVar0);
	__LIB_7__::func_557(__LIB_0__::func_657(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= __LIB_3__::func_131(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_350(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_350(__LIB_3__::func_132(iParam0), 1);
	}
	sVar1 = __LIB_3__::func_133(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

int func_271(var uParam0)
{
	switch (*uParam0)
	{
		case 404434344:
			return joaat("ACH_RESPECT_ARTHUR");
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				return joaat("ACH_RESPECT_ARTHUR");
			}
			else if (uParam0->f_4 == 1)
			{
				return joaat("ACH_RESPECT_JENNY");
			}
			else if (uParam0->f_4 == 2)
			{
				return joaat("ACH_RESPECT_HORSEA");
			}
			else if (uParam0->f_4 == 3)
			{
				return joaat("ACH_RESPECT_LENNY");
			}
			else if (uParam0->f_4 == 4)
			{
				return joaat("ACH_RESPECT_SEAN");
			}
			else if (uParam0->f_4 == 5)
			{
				return joaat("ACH_RESPECT_DAVEY");
			}
			else if (uParam0->f_4 == 6)
			{
				return joaat("ACH_RESPECT_KIERAN");
			}
			else if (uParam0->f_4 == 7)
			{
				return joaat("ACH_RESPECT_SUSAN");
			}
			else if (uParam0->f_4 == 8)
			{
				return joaat("ACH_RESPECT_EAGLE_FLIES");
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_272(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(uParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *uParam1)
			{
				if ((*uParam1)[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == (*uParam1)[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

bool func_297(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = __LIB_2__::func_465(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_368("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				__LIB_0__::func_238(iVar1);
				return true;
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	return false;
}

int func_298(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = __LIB_2__::func_465(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_372(iParam0, 0);
	}
	uVar2 = INVENTORY::_0xE787F05DFC977BDE(func_240(bParam2), iParam0, 0);
	return uVar2;
}

void func_318(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(&(Global_40.f_1095.f_1[iParam0 /*436*/]), "", 64);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	__LIB_0__::func_497(&Var0);
	func_384(iParam0, Var0);
	__LIB_1__::func_2(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	__LIB_0__::func_498(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	__LIB_0__::func_499(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	__LIB_0__::func_500(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		__LIB_0__::func_501(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		__LIB_0__::func_502(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	__LIB_0__::func_503(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	__LIB_0__::func_504(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	__LIB_0__::func_505(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_22 = 0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_31 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_34 = 0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
}

void func_327(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	__LIB_0__::func_798(iParam0);
	__LIB_0__::func_798(iParam0);
	__LIB_0__::func_507(iParam0, iParam1);
	__LIB_0__::func_508(iParam0, iParam1);
	func_398(iParam0, iParam1);
	iVar1 = __LIB_0__::func_398(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			__LIB_1__::func_177(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	iVar3 = __LIB_0__::func_398(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			__LIB_1__::func_177(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = PLAYER::_0x227B06324234FB09(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar3)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	func_400();
}

void func_334(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_403(&uVar0, &uVar1, &uVar2);
	__LIB_2__::func_99(iParam0, uVar0);
	__LIB_2__::func_100(iParam0, uVar1);
	__LIB_2__::func_101(iParam0, uVar2);
	__LIB_0__::func_837(iParam0, 1);
	func_408(iParam0, 1);
}

struct<2> func_338(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_411(iParam0, &uVar2))
	{
	}
	if (!func_412(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_339()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	if (func_413(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_413(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_413(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_413(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_413(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_413(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_350(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_378(iParam0, &iVar0, &iVar1);
	if (!func_421(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	__LIB_0__::func_379(iVar0, iVar1);
}

bool func_368(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_240(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_372(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { __LIB_0__::func_523(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		__LIB_0__::func_524(&Var0, func_428(0));
	}
	if (!func_430(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	__LIB_0__::func_238(iVar14);
	return uVar15;
}

void func_384(int iParam0, struct<2> Param1)
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
	if (!func_436(iParam0, Param1))
	{
	}
	if (!func_437(iParam0, Param1.f_1))
	{
	}
}

int func_398(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_439(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_439(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = __LIB_0__::func_577(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_441(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_442(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_400()
{
	if (__LIB_0__::func_797(0))
	{
		func_447(0);
	}
	if (__LIB_0__::func_797(1))
	{
		func_447(1);
	}
	if (__LIB_0__::func_797(5))
	{
		func_447(5);
	}
	if (__LIB_0__::func_797(6))
	{
		__LIB_0__::func_798(6);
	}
}

int func_403(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (__LIB_0__::func_28())
	{
		if (func_121())
		{
			bVar0 = false;
			if (!__LIB_1__::func_25(Global_1835011[15 /*74*/].f_1, 1) && !__LIB_0__::func_293(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = __LIB_0__::func_579();
				*iParam1 = __LIB_0__::func_580();
				*uParam2 = __LIB_0__::func_16();
				return 1;
			}
			else
			{
				*uParam0 = __LIB_0__::func_581();
				*iParam1 = __LIB_0__::func_582();
				*uParam2 = __LIB_0__::func_16();
				return 1;
			}
		}
		else if (func_15())
		{
			if (!__LIB_1__::func_25(Global_1835011[60 /*74*/].f_1, 1))
			{
				*uParam0 = __LIB_0__::func_583();
				*iParam1 = __LIB_0__::func_584();
				*uParam2 = __LIB_0__::func_585();
				return 1;
			}
			else
			{
				*uParam0 = __LIB_0__::func_581();
				*iParam1 = __LIB_0__::func_582();
				*uParam2 = __LIB_0__::func_16();
				return 1;
			}
		}
	}
	else if (func_121())
	{
		*uParam0 = __LIB_0__::func_586();
		*iParam1 = __LIB_0__::func_587();
		*uParam2 = __LIB_0__::func_16();
		return 1;
	}
	else if (func_15())
	{
		*uParam0 = __LIB_0__::func_588();
		*iParam1 = __LIB_0__::func_589();
		*uParam2 = __LIB_0__::func_16();
		return 1;
	}
	return 0;
}

void func_408(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_821(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_403(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	__LIB_1__::func_17(iParam1);
	iVar5 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar7;
	PED::_0xA69899995997A63B(iVar5, iVar7);
}

bool func_411(int iParam0, var uParam1)
{
	struct<4> Var0;
	Var0.f_9 = -1591664384;
	if (!func_439(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_467(Var0, joaat("SLOTID_HORSE_MANE"), 0);
	if (!__LIB_0__::func_144(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_412(int iParam0, var uParam1)
{
	struct<4> Var0;
	Var0.f_9 = -1591664384;
	if (!func_439(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_467(Var0, joaat("SLOTID_HORSE_TAIL"), 0);
	if (!__LIB_0__::func_144(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_413(int iParam0, var uParam1)
{
	struct<4> Var0;
	if (!__LIB_1__::func_131(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_469() };
	*uParam1 = func_467(Var0, iParam0, 0);
	if (!__LIB_0__::func_144(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_421(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_472(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_473(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_792(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !__LIB_0__::func_447(iParam0, 1)) || __LIB_0__::func_13(32768))
	{
		if (!__LIB_0__::func_447(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!__LIB_0__::func_463())
	{
		return false;
	}
	return true;
}

struct<4> func_428(bool bParam0)
{
	int iVar0;
	iVar0 = func_240(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224215))
		{
			Global_1224215 = { func_479(923904168, func_478(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224223))
		{
			Global_1224223 = { func_479(923904168, func_478(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_479(923904168, func_478(bParam0), -740156546, 0);
}

bool func_430(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_240(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_436(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	Var0.f_9 = -1591664384;
	if (!func_439(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_479(iParam1, Var0, joaat("SLOTID_HORSE_MANE"), 0) };
	return func_480(Var29, 1);
}

bool func_437(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	Var0.f_9 = -1591664384;
	if (!func_439(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_479(iParam1, Var0, joaat("SLOTID_HORSE_TAIL"), 0) };
	return func_480(Var29, 1);
}

bool func_439(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;
	if (!func_481(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_478(0) };
	if (!func_482(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_483(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

bool func_441(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;
	if (!func_484(bParam10))
	{
		return func_485(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_486(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (__LIB_0__::func_639(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_240(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_480(Var14, 1))
		{
		}
	}
	return true;
}

bool func_442(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;
	if (!func_484(bParam9))
	{
		return func_488(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return false;
	}
	if (__LIB_0__::func_639(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_486(Param0, &Var0, bParam9, 1) || !func_486(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (__LIB_0__::func_639(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_240(0);
	if (!INVENTORY::_0xF2753D691BCDA314(iVar28, &Param0, &Param4))
	{
		return false;
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return true;
}

void func_447(int iParam0)
{
	int iVar0;
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
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
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
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
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
		if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::_BLIP_ADD_FOR_ENTITY(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("BLIP_SADDLE"), true);
				func_490(&(Global_1900383[iParam0 /*45*/].f_27));
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
		if (Global_1935630.f_40 == iVar0)
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
		Global_1900383[iParam0 /*45*/].f_26 = MAP::_BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_492(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
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
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = __LIB_0__::func_820(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
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
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(iVar0, true);
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
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	if (__LIB_0__::func_126(iVar0) && !bVar9)
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
		MAP::_0x44813684F72B563C(iVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

int func_467(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;
	Var0.f_9 = -1591664384;
	if (func_500(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

struct<4> func_469()
{
	struct<4> Var0;
	Var0 = { func_478(0) };
	return func_479(856287005, Var0, -218846335, 0);
}

bool func_472(int iParam0, int iParam1)
{
	if (func_102() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_473(int iParam0)
{
	if (func_102() != -1)
	{
		if (__LIB_0__::func_447(iParam0, 4))
		{
			return false;
		}
	}
	else if (__LIB_0__::func_447(iParam0, 2))
	{
		return false;
	}
	return true;
}

struct<4> func_478(bool bParam0)
{
	return func_479(joaat("CHARACTER"), __LIB_0__::func_217(), -1591664384, bParam0);
}

struct<4> func_479(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_240(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_480(struct<4> Param0, int iParam4)
{
	struct<11> Var0;
	if (!func_484(0))
	{
		return func_504(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_486(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_240(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_481(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_0__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_478(0) };
	if (func_505(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_482(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;
	iVar0 = func_240(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_483(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_240(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_484(bool bParam0)
{
	if (func_102() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_240(bParam0));
}

int func_485(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<12> Var0;
	int iVar14;
	int iVar15;
	struct<16> Var16;
	int iVar32;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_486(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (__LIB_0__::func_639(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_506(Var0.f_4, Param4, iParam8, 0);
	iVar15 = INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { __LIB_0__::func_662(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = __LIB_1__::func_190(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

bool func_486(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_240(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_488(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	struct<16> Var28;
	struct<16> Var44;
	int iVar60;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	if (__LIB_0__::func_639(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_486(Param0, &Var0, 1, 0) || !func_486(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (__LIB_0__::func_639(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { __LIB_0__::func_662(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { __LIB_0__::func_662(&Var14) };
	Var44.f_4 = { Var0.f_5 };
	Var44.f_11 = Var0.f_9;
	Var44.f_10 = (Var0.f_10 || iParam8);
	iVar60 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar60, joaat("BASKET"), 1168099063))
		{
			if (UNK_0x3745C002F5A21C45(iVar60, &Var28, 16) && UNK_0x3745C002F5A21C45(iVar60, &Var44, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar60))
				{
					__LIB_1__::func_19(iVar60, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar60 = __LIB_1__::func_190(1168099063, &Var28, 0);
		iVar60 = __LIB_1__::func_190(1168099063, &Var44, 0);
	}
	return iVar60;
}

void func_490(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, __LIB_0__::func_666(__LIB_1__::func_191(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_121())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_15();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

void func_492(var uParam0, bool bParam1)
{
	char* sVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, __LIB_0__::func_666(__LIB_1__::func_191(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_121())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_15())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

bool func_500(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_240(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_486(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_504(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;
	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_486(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = __LIB_0__::func_356(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_514(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = __LIB_1__::func_188(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var44 = { func_516(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = __LIB_1__::func_189(joaat("UPDATE"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { __LIB_0__::func_662(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = __LIB_1__::func_190(joaat("UPDATE"), &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_505(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_240(bParam2), uParam0, iParam1);
}

int func_506(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_479(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_240(bParam6), &Var0, 0);
	return uVar4;
}

struct<28> func_514(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<28> Var0;
	struct<29> Var28;
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_240(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { __LIB_0__::func_662(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

struct<17> func_516(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<17> Var0;
	struct<15> Var17;
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_240(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { __LIB_0__::func_662(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

