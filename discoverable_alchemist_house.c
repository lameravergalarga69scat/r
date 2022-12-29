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
	struct<6> Local_14 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	struct<5> Local_22 = { 0, 0, 0, 0, -1 } ;
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
	var uLocal_42 = -1;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 2;
	var uLocal_47 = 1;
	var uLocal_48 = 1;
	var uLocal_49 = 1;
	var uLocal_50 = 0;
	var uLocal_51 = 1;
	var uLocal_52 = 2;
	var uLocal_53 = 2;
	var uLocal_54 = 3;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 3;
	var uLocal_58 = 1;
	var uLocal_59 = 3;
	var uLocal_60 = 3;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_21 = ScriptParam_0;
	Local_22.f_1 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&Local_22);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_1(&Local_22);
	}
	while (__LIB_7__::func_453())
	{
		switch (iLocal_20)
		{
			case 0:
				if (func_3(&Local_22))
				{
					iLocal_20 = 1;
					if (Local_22.f_4 != -1)
					{
					}
					else
					{
						Local_22.f_4 = func_4(&Local_22);
					}
				}
				break;
			case 1:
				if (func_5(&Local_22))
				{
					func_6(&Local_22);
				}
				func_7(&Local_22);
				func_8(&Local_22);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_22);
}

void func_1(var uParam0)
{
	func_9(uParam0);
	SCRIPTS::_0xE7282390542F570D(uLocal_21);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(var uParam0)
{
	int iVar0;
	if (Local_22 == 0)
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_1);
		Local_22 = __LIB_7__::func_454(iVar0);
		return false;
	}
	if (__LIB_7__::func_497(Local_22, 4) || Global_40.f_8863.f_156)
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
			if (__LIB_2__::func_410(59))
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
			__LIB_7__::func_571(uParam0, uParam0->f_6.f_8, __LIB_7__::func_576(uParam0), 0);
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
					if (!__LIB_0__::func_1(uParam0->f_3, 2))
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
			__LIB_7__::func_571(uParam0, uParam0->f_6.f_8, __LIB_7__::func_576(uParam0), 0);
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
			__LIB_7__::func_571(uParam0, uParam0->f_6.f_8, __LIB_7__::func_576(uParam0), 0);
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
	switch (Local_14)
	{
		case 0:
			if (__LIB_7__::func_530(func_48()))
			{
				__LIB_1__::func_649(&Local_14, 5);
				return;
			}
			__LIB_1__::func_649(&Local_14, 1);
			break;
		case 1:
			if (__LIB_0__::func_266(Global_35, func_51(1), 100f, 1, 1))
			{
				Local_14.f_1 = OBJECT::GET_RAYFIRE_MAP_OBJECT(func_51(0), 10f, "DES_dis_alchemist");
				if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_14.f_1))
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_14.f_1, 4);
					__LIB_1__::func_649(&Local_14, 2);
				}
			}
			break;
		case 2:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_14.f_1) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_14.f_1) == 5)
			{
				__LIB_1__::func_649(&Local_14, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_266(Global_35, func_51(1), 75f, 1, 1))
			{
				if (!PED::IS_PED_IN_ANY_TRAIN(Global_35) && __LIB_1__::func_374(Global_35, func_51(0), 0))
				{
					__LIB_1__::func_148(&(Local_14.f_2));
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_14.f_1, 6);
					AUDIO::_0x374F0E716BFCDE82("EXPLOSIONS_SCRIPTED_WOODEN_BUILDING", func_51(2));
					Local_14.f_5 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_TERRIFYING_NEW"), func_51(1), 30f, 100f, 150f, -1f, -1f, -1, -1);
					__LIB_1__::func_649(&Local_14, 4);
				}
			}
			break;
		case 4:
			if (__LIB_1__::func_871(&(Local_14.f_2)) > 100)
			{
				if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
				{
					iVar0 = PED::GET_MOUNT(Global_35);
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						PED::_0xBAE08F00021BFFB2(iVar0, 0);
						__LIB_0__::func_401(1635537886);
						__LIB_0__::func_803(-1123615607);
						func_56(uParam0);
						__LIB_1__::func_649(&Local_14, 5);
					}
				}
				else
				{
					__LIB_0__::func_401(1635537886);
					__LIB_0__::func_803(-1123615607);
					func_56(uParam0);
					__LIB_1__::func_649(&Local_14, 5);
				}
			}
			break;
		case 5:
			break;
	}
}

void func_9(var uParam0)
{
	__LIB_4__::func_20(&(Local_14.f_5));
	__LIB_0__::func_400(1635537886);
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
				return func_62(uParam0, iParam1);
			}
			break;
		case 870958936:
			return func_63(uParam0, iParam1);
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
			return func_62(uParam0, iParam1);
		case -1272862985:
			return func_62(uParam0, iParam1);
		case -1243267511:
			return func_62(uParam0, iParam1);
		case -321841939:
			return func_62(uParam0, iParam1);
		case -890175011:
			return func_62(uParam0, iParam1);
		case 677950956:
			return func_62(uParam0, iParam1);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_15()
{
	if (func_64() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_21(var uParam0)
{
	uParam0->f_6.f_2 = { func_62(uParam0, uParam0->f_4) };
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
	if (func_64() != -1)
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
		func_82(uParam0);
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
		iVar0 = __LIB_7__::func_463(*uParam0, func_85(), uParam0->f_4);
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
					if (func_85())
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
		if (func_90())
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
	if (!__LIB_0__::func_28() || func_64() != -1)
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
	uParam0->f_6.f_10 = { func_62(uParam0, uParam0->f_4) };
}

void func_47(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_64() != -1)
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
		func_99(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_99(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_48()
{
	return 233600584;
}

Vector3 func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -5093.442f, -2524.077f, -8.55588f;
		case 1:
			return -5094.269f, -2522.523f, -11.11167f;
		case 2:
			return -5094.521f, -2523.178f, -6.38495f;
		default:
			break;
	}
	return -5094.269f, -2522.523f, -11.11167f;
}

void func_56(var uParam0)
{
	if (!__LIB_7__::func_530(*uParam0))
	{
		__LIB_7__::func_556(*uParam0);
		func_82(uParam0);
	}
}

Vector3 func_62(var uParam0, int iParam1)
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
Vector3 func_63(var uParam0, int iParam1)
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
int func_64()
{
	return Global_1572887.f_12;
}

void func_82(var uParam0)
{
	if (func_64() != -1)
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

bool func_85()
{
	if (func_64() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_90()
{
	int iVar0;
	if (!func_125(joaat("DOCUMENT_PLAYER_JOURNAL"), 1, 0))
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
	if (INVENTORY::_0x3D10D7179D7034AF(func_127(0), iVar0, 0))
	{
		return false;
	}
	Global_36620 = MISC::GET_GAME_TIMER() + 1000;
	__LIB_7__::func_451();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iVar0, 1928812891, 1, 0, -1082130432 /* Float: -1f */);
	return true;
}

void func_99(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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
			iParam0 = func_130(iParam0);
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
		__LIB_3__::func_720(10, 1);
	}
}

bool func_125(int iParam0, int iParam1, bool bParam2)
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
		if (!func_160(iParam0, 1))
		{
			return false;
		}
	}
	return func_161(iParam0, 0, bParam2) >= iParam1;
}

int func_127(bool bParam0)
{
	if (func_64() == -1)
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

int func_130(int iParam0)
{
	float fVar0;
	float fVar1;
	if (func_64() != -1)
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

bool func_160(int iParam0, int iParam1)
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
	if (func_184("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
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

int func_161(int iParam0, bool bParam1, bool bParam2)
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
		return func_188(iParam0, 0);
	}
	uVar2 = INVENTORY::_0xE787F05DFC977BDE(func_127(bParam2), iParam0, 0);
	return uVar2;
}

bool func_184(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_127(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_188(int iParam0, bool bParam1)
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
		__LIB_0__::func_524(&Var0, func_194(0));
	}
	if (!func_196(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	__LIB_0__::func_238(iVar14);
	return uVar15;
}

struct<4> func_194(bool bParam0)
{
	int iVar0;
	iVar0 = func_127(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224215))
		{
			Global_1224215 = { func_200(923904168, func_199(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224223))
		{
			Global_1224223 = { func_200(923904168, func_199(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_200(923904168, func_199(bParam0), -740156546, 0);
}

bool func_196(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_127(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<4> func_199(bool bParam0)
{
	return func_200(joaat("CHARACTER"), __LIB_0__::func_217(), -1591664384, bParam0);
}

struct<4> func_200(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_127(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

