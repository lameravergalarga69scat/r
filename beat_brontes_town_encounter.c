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
	struct<511> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 1125515264, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, -1, 0, 3, 0, 0, 0, -1082130432, 1148844442, 1148844442, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_525 = false;
	struct<7> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, -1 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		bLocal_525 = true;
	}
	if (!bLocal_525)
	{
		func_2(ScriptParam_0);
		func_3(&Local_14);
	}
	while (true)
	{
		switch (Local_14.f_314)
		{
			case 0:
				if (func_4())
				{
					func_5(&Local_14, 1);
				}
				break;
			case 1:
				if (func_6(&Local_14, &ScriptParam_0, 0, 0, 0, 0, 0, 1))
				{
					func_7();
					func_5(&Local_14, 3);
				}
				else if (Local_14.f_160)
				{
					func_1();
				}
				break;
			case 3:
				if (__LIB_3__::func_479(Local_14.f_51, Local_14.f_51.f_3, &(Local_14.f_197), &(Local_14.f_294), 1, 0, -1, 1))
				{
					func_9();
					func_5(&Local_14, 4);
				}
				break;
			case 4:
				if (func_10())
				{
					func_1();
				}
				if (Local_14.f_46)
				{
					if (func_11())
					{
						func_1();
					}
				}
				else if (!Local_14.f_50)
				{
					if (func_12())
					{
						Local_14.f_50 = 1;
					}
				}
				if (func_13())
				{
					func_1();
				}
				break;
			case 6:
				func_14();
				break;
		}
		BUILTIN::WAIT(Local_14.f_158);
	}
}

void func_1()
{
	int iVar0;
	func_15(0);
	__LIB_3__::func_474(&(Local_14.f_505));
	if (((!func_17(&Local_14, 8) && !Local_14.f_46) && !Local_14.f_44) && !Local_14.f_510)
	{
		Local_14.f_45 = 0;
	}
	LAW::_0x362086B911657B1A(PLAYER::PLAYER_ID(), 0);
	iVar0 = 0;
	while (iVar0 < Local_14.f_294)
	{
		if (__LIB_2__::func_1(Local_14.f_294[iVar0], 0, 0))
		{
			if (PED::IS_PED_USING_ANY_SCENARIO(Local_14.f_294[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(Local_14.f_294[iVar0], true, false);
			}
		}
		iVar0++;
	}
	func_5(&Local_14, 6);
}

int func_2(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6)
{
	Local_14.f_3 = __LIB_0__::func_81(&vParam0);
	Local_14.f_161 = __LIB_0__::func_27(vParam0.z, 2);
	Local_14.f_43 = __LIB_0__::func_12();
	Local_14.f_477 = 3;
	Local_14.f_478 = 3;
	func_22();
	__LIB_3__::func_489(&Local_14, 1);
	Local_14.f_313 = __LIB_3__::func_390(Local_14.f_3, 4, 0);
	return 1;
}

void func_3(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (iVar0 == 2)
		{
		}
		else
		{
			uParam0->f_197[iVar0 /*32*/].f_1 = joaat("G_M_M_UNIBRONTEGOONS_01");
			uParam0->f_197[iVar0 /*32*/].f_3 = func_25(uParam0, iVar0);
			StringCopy(&(uParam0->f_197[iVar0 /*32*/].f_23), func_26(uParam0, iVar0), 64);
		}
		iVar0++;
	}
}

bool func_4()
{
	int iVar0;
	switch (Local_14.f_315)
	{
		case 0:
			__LIB_3__::func_284(&(Local_14.f_197));
			__LIB_3__::func_308(&Local_14);
			func_29();
			func_30(&Local_14, 1);
			break;
		case 1:
			iVar0 = 1;
			if (!func_31())
			{
				iVar0 = 0;
			}
			if (!__LIB_3__::func_366(&(Local_14.f_197)))
			{
				iVar0 = 0;
			}
			if (!__LIB_3__::func_308(&Local_14))
			{
				iVar0 = 0;
			}
			return iVar0;
	}
	return false;
}

void func_5(var uParam0, int iParam1)
{
	uParam0->f_314 = iParam1;
}

bool func_6(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || func_33(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_305(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_7()
{
	Local_14.f_322 = Local_14.f_51.f_4;
	switch (Local_14.f_313)
	{
		case 2:
			if (Local_14.f_161)
			{
				func_38(&Local_14, 32);
			}
			Local_14.f_313 = 0;
			break;
		case 3:
			if (Local_14.f_161)
			{
				func_38(&Local_14, 32);
			}
			Local_14.f_313 = 1;
			break;
	}
	if (!func_39(&Local_14))
	{
		if (__LIB_2__::func_410(29) && !__LIB_0__::func_181())
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
			{
				func_38(&Local_14, 32);
			}
		}
	}
	func_42();
	__LIB_4__::func_39(Local_14.f_352[4]);
	func_44(&Local_14);
}

void func_9()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_294[iVar0], 0, 0))
		{
			if (iVar0 < 2)
			{
				__LIB_3__::func_285(Local_14.f_294[iVar0], &Local_14, 0);
			}
			__LIB_1__::func_991(Local_14.f_294[iVar0], 0);
			iVar1 = func_49(&Local_14, iVar0);
			Local_14.f_496[iVar0] = __LIB_2__::func_488(iVar1, Local_14.f_197[iVar0 /*32*/].f_6, Local_14.f_197[iVar0 /*32*/].f_9, 0, -1f, 1);
			TASK::_TASK_USE_SCENARIO_POINT(Local_14.f_294[iVar0], Local_14.f_496[iVar0], func_51(&Local_14, iVar0), -1, false, true, 0, false, -1f, false);
			__LIB_3__::func_176(Local_14.f_294[iVar0], 0);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_294[iVar0], 233, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_14.f_294[iVar0], false, true);
			__LIB_2__::func_272(Local_14.f_294[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_4__::func_158(&Local_14, iVar0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_294[iVar0], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_294[iVar0], 46, true);
		}
		iVar0++;
	}
	func_55(&Local_14, 0, 1, 1);
	func_56(&Local_14, 1);
}

bool func_10()
{
	__LIB_3__::func_931(&Local_14, 3.5f);
	if (!__LIB_3__::func_617(&Local_14, &(Local_14.f_294), Local_14.f_313, 0, 0, 0, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_11()
{
	int iVar0;
	char* sVar1;
	Local_14.f_476 = __LIB_4__::func_159(&Local_14);
	Local_14.f_306 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_14.f_51, Global_36, true);
	func_60();
	func_61();
	iVar0 = -1;
	switch (Local_14.f_317)
	{
		case 0:
			if (Local_14.f_490 == 0f)
			{
				Local_14.f_490 = Local_14.f_98[0];
			}
			__LIB_1__::func_283(&(Local_14.f_324[0 /*3*/]), 0);
			func_63();
			func_64(&Local_14, 1);
			break;
		case 1:
			if (func_65(&iVar0))
			{
				func_64(&Local_14, 2);
			}
			else if (Local_14.f_476 <= 0)
			{
				if (__LIB_2__::func_393(&(Local_14.f_505)))
				{
					func_64(&Local_14, 5);
				}
				else if (__LIB_3__::func_929(&(Local_14.f_505), &(Local_14.f_294), 0, 3, 2f, 0))
				{
					sVar1 = func_68(&Local_14);
					func_69(&Local_14, Global_35, Global_35, sVar1, -1073741824 /* Float: -2f */, 0, 291934926, 0, 1);
					func_64(&Local_14, 5);
				}
			}
			break;
		case 2:
			if (func_70())
			{
				func_64(&Local_14, 7);
			}
			break;
		case 5:
			if (Local_14.f_476 <= 0)
			{
				if (__LIB_2__::func_393(&(Local_14.f_505)))
				{
					if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
					{
						func_64(&Local_14, 7);
					}
					else
					{
						func_64(&Local_14, 6);
					}
				}
				else if (__LIB_3__::func_929(&(Local_14.f_505), &(Local_14.f_294), 0, 3, 1f, 0))
				{
					sVar1 = func_68(&Local_14);
					func_69(&Local_14, Global_35, Global_35, sVar1, -1073741824 /* Float: -2f */, 0, 291934926, 0, 1);
					if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
					{
						func_64(&Local_14, 7);
					}
					else
					{
						func_64(&Local_14, 6);
					}
				}
			}
			break;
		case 6:
			__LIB_1__::func_283(&(Local_14.f_324[6 /*3*/]), 0);
			func_64(&Local_14, 7);
			break;
		case 7:
			__LIB_3__::func_474(&(Local_14.f_505));
			return true;
	}
	return false;
}

bool func_12()
{
	int iVar0;
	func_72();
	switch (Local_14.f_316)
	{
		case 0:
			if (__LIB_0__::func_272(Local_14.f_294[0], 0))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_14.f_294[0], false);
			}
			iVar0 = -1;
			iVar0 = func_74();
			if (func_75(iVar0))
			{
				Local_14.f_489 = 0;
				__LIB_3__::func_487();
				func_77(&Local_14, 1);
			}
			else
			{
				func_78();
			}
			break;
		case 1:
			if (func_79())
			{
				func_77(&Local_14, 3);
			}
			break;
		case 2:
			func_77(&Local_14, 3);
			break;
		case 3:
			__LIB_3__::func_481();
			func_15(1);
			return true;
	}
	return false;
}

bool func_13()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (Local_14.f_46)
	{
		if (__LIB_2__::func_393(&(Local_14.f_505)))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		bVar1 = false;
		bVar2 = false;
	}
	else
	{
		bVar0 = false;
		bVar1 = true;
		bVar2 = true;
	}
	if (__LIB_3__::func_431(&Local_14, &(Local_14.f_294), bVar1, bVar0, bVar2, 0, 0, 1, 0, 0, 0, 0, 0))
	{
		return true;
	}
	return false;
}

void func_14()
{
	int iVar0;
	if (!bLocal_525 || (!__LIB_2__::func_204(0) || CAM::IS_SCREEN_FADED_OUT()))
	{
		iVar0 = 0;
		while (iVar0 < Local_14.f_294)
		{
			if (__LIB_2__::func_1(Local_14.f_294[iVar0], 0, 0))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Local_14.f_294[iVar0]))
				{
					if (!__LIB_1__::func_472(Local_14.f_294[iVar0], 150f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_14.f_294[iVar0], false, true);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_14.f_294[iVar0], true, false);
					}
					return;
				}
				__LIB_3__::func_475(Local_14.f_294[iVar0], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
			}
			iVar0++;
		}
		__LIB_17__::func_851(&Local_14, &(Local_14.f_294), &(Local_14.f_298), 0, Local_14.f_502, Local_14.f_503, 1, 1, 0, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_15(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bVar1 = Local_14.f_5.f_16 != false;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_294[iVar0], 0, 0))
		{
			PED::SET_PED_CONFIG_FLAG(Local_14.f_294[iVar0], 6, !bVar1);
			func_86(iVar0, bParam0);
			__LIB_2__::func_603(&(Local_14.f_294[iVar0]), &(Local_14.f_364[iVar0 /*21*/]), &(Local_14.f_428), 1, 1);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_294[iVar0], 130, false);
		}
		iVar0++;
	}
}

bool func_17(var uParam0, int iParam1)
{
	return (uParam0->f_308 && iParam1) != 0;
}

void func_22()
{
	__LIB_2__::func_104(&(Local_14.f_5), 0);
	__LIB_2__::func_105(&(Local_14.f_5), 1);
	__LIB_2__::func_50(&(Local_14.f_5), 1);
	__LIB_2__::func_51(&(Local_14.f_5), 1);
	__LIB_2__::func_111(&(Local_14.f_5), 0);
	__LIB_2__::func_110(&(Local_14.f_5), 0);
	__LIB_2__::func_52(&(Local_14.f_5), 1);
	__LIB_2__::func_250(&(Local_14.f_5), 1);
	__LIB_3__::func_482(&(Local_14.f_5), 6f);
	__LIB_2__::func_662(&(Local_14.f_5), 0);
}

int func_25(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = joaat("META_OUTFIT_DEFAULT");
	switch (uParam0->f_313)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1797082499;
					break;
				case 1:
					iVar0 = -1714923637;
					break;
				case 2:
					iVar0 = -946195666;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1819533724;
					break;
				case 1:
					iVar0 = -1271788450;
					break;
			}
			break;
	}
	return iVar0;
}

char* func_26(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_103(uParam0, iParam1);
	return func_104(iVar0);
}

void func_29()
{
	int iVar0;
	int iVar1;
	iVar0 = func_108();
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (iVar1 == 2)
		{
		}
		else
		{
			__LIB_4__::func_34(func_49(&Local_14, iVar1), iVar0, Local_14.f_197[iVar1 /*32*/].f_1, func_109(&Local_14, iVar1));
			iVar1++;
		}
	}
}

void func_30(var uParam0, int iParam1)
{
	uParam0->f_315 = iParam1;
}

bool func_31()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (iVar1 == 2)
		{
		}
		else
		{
			if (!__LIB_2__::func_313(func_49(&Local_14, iVar1)))
			{
				iVar0 = 0;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_33(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	if (Param4.f_6 > -1)
	{
		*uParam1 = { __LIB_3__::func_153(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_114(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_340(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { __LIB_3__::func_401(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = __LIB_3__::func_240(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (__LIB_0__::func_27(Param4.f_2, 8))
				{
					func_114(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				__LIB_3__::func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (__LIB_3__::func_421(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && __LIB_3__::func_367(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!__LIB_3__::func_170(uParam1))
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (__LIB_3__::func_423(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_114(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_422("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

void func_38(var uParam0, int iParam1)
{
	uParam0->f_307 = (uParam0->f_307 || iParam1);
}

bool func_39(var uParam0)
{
	return func_133(uParam0, 32);
}

void func_42()
{
	switch (Local_14.f_322)
	{
		case 0:
			func_136(&Local_14);
			break;
		case 1:
			func_137(&Local_14);
			break;
		case 2:
			func_138(&Local_14);
			break;
	}
}

void func_44(var uParam0)
{
	struct<4> Var0;
	int iVar4;
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (iVar4 == 2)
		{
		}
		else
		{
			Var0 = { func_140(uParam0, iVar4) };
			uParam0->f_197[iVar4 /*32*/].f_6 = { Var0 };
			uParam0->f_197[iVar4 /*32*/].f_9 = Var0.f_3;
			__LIB_3__::func_478(&(uParam0->f_197[iVar4 /*32*/].f_22));
		}
		iVar4++;
	}
}

int func_49(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
		case 1:
			return joaat("WORLD_HUMAN_SMOKE");
		case 2:
			return joaat("WORLD_HUMAN_STARE_STOIC");
		default:
			break;
	}
	return 0;
}

char* func_51(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D";
		case 1:
			return "WORLD_HUMAN_SMOKE_MALE_C";
		case 2:
			return "WORLD_HUMAN_STARE_STOIC_MALE_A";
		default:
			break;
	}
	return "";
}

void func_55(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam1)
	{
		if (!__LIB_1__::func_489(&(uParam0->f_428[0 /*17*/]), 13) && !__LIB_1__::func_489(&(uParam0->f_428[0 /*17*/]), 0))
		{
			__LIB_2__::func_411(&(uParam0->f_428[0 /*17*/]), 1, 0);
		}
		if (bParam3)
		{
			if (!__LIB_1__::func_489(&(uParam0->f_428[1 /*17*/]), 13) && !__LIB_1__::func_489(&(uParam0->f_428[1 /*17*/]), 0))
			{
				__LIB_2__::func_411(&(uParam0->f_428[1 /*17*/]), 1, 0);
			}
		}
	}
	else
	{
		if ((!__LIB_1__::func_489(&(uParam0->f_428[0 /*17*/]), 13) && __LIB_1__::func_489(&(uParam0->f_428[0 /*17*/]), 0)) || bParam2)
		{
			__LIB_2__::func_411(&(uParam0->f_428[0 /*17*/]), 0, 0);
		}
		if (bParam3)
		{
			if ((!__LIB_1__::func_489(&(uParam0->f_428[1 /*17*/]), 13) && __LIB_1__::func_489(&(uParam0->f_428[1 /*17*/]), 0)) || bParam2)
			{
				__LIB_2__::func_411(&(uParam0->f_428[1 /*17*/]), 0, 0);
			}
		}
	}
}

void func_56(var uParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		__LIB_2__::func_602(&(uParam0->f_428[0 /*17*/]), __LIB_2__::func_460(7), func_156(uParam0, 26), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
		__LIB_2__::func_602(&(uParam0->f_428[1 /*17*/]), __LIB_2__::func_460(10), func_156(uParam0, 29), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	}
	else
	{
		__LIB_2__::func_602(&(uParam0->f_428[0 /*17*/]), __LIB_2__::func_460(8), func_156(uParam0, 27), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
		__LIB_2__::func_602(&(uParam0->f_428[1 /*17*/]), __LIB_2__::func_460(10), func_156(uParam0, 28), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_364)
	{
		__LIB_2__::func_394(&(uParam0->f_364[iVar0 /*21*/]), &(uParam0->f_428[1 /*17*/]));
		iVar0++;
	}
}

void func_60()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_294[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_14.f_298[iVar0]))
			{
				if (__LIB_3__::func_476(Local_14.f_294[iVar0], 1))
				{
					__LIB_2__::func_73(Local_14.f_294[iVar0], &(Local_14.f_298[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_61()
{
	int iVar0;
	if (func_133(&Local_14, 8))
	{
		return;
	}
	if (func_170(&Local_14))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_2__::func_1(Local_14.f_294[iVar0], 0, 0))
			{
				__LIB_2__::func_357(Local_14.f_294[iVar0], Global_36, 3, 0, 3);
				TASK::TASK_COMBAT_PED(Local_14.f_294[iVar0], Global_35, 0, 0);
				PED::SET_PED_CONFIG_FLAG(Local_14.f_294[iVar0], 6, false);
				PED::SET_PED_CONFIG_FLAG(Local_14.f_294[iVar0], 494, true);
			}
			iVar0++;
		}
		func_38(&Local_14, 8);
	}
}

void func_63()
{
	if (Local_14.f_510 || Local_14.f_463 != -1)
	{
		__LIB_3__::func_485(&(Local_14.f_505));
	}
	else
	{
		__LIB_4__::func_42(&(Local_14.f_505));
	}
}

void func_64(var uParam0, int iParam1)
{
	uParam0->f_317 = iParam1;
}

bool func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (!__LIB_1__::func_285(&(Local_14.f_324[0 /*3*/]), 10f))
	{
		return false;
	}
	if (!__LIB_2__::func_227(-3f, 1, 0, 0))
	{
		return false;
	}
	if (!func_178(&Local_14))
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_294[iVar1], 0, 0))
		{
			if (__LIB_2__::func_227(0f, 1, Local_14.f_294[iVar1], 1))
			{
				*iParam0 = iVar1;
				func_69(&Local_14, Local_14.f_294[iVar1], Global_35, func_156(&Local_14, 20), -1073741824 /* Float: -2f */, 1, 1744022339, 0, 1);
			}
			else
			{
				iVar1++;
			}
			if (*iParam0 == -1)
			{
				return false;
			}
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				if (__LIB_2__::func_1(Local_14.f_294[iVar1], 0, 0))
				{
					switch (iVar1)
					{
						case 0:
							fVar2 = 1f;
							break;
						case 1:
							fVar2 = 1.5f;
							break;
						case 2:
							fVar2 = 2f;
							break;
					}
					if (Local_14.f_294[iVar1] == Local_14.f_494)
					{
						fVar2 = 0f;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					__LIB_3__::func_469(0, Global_35, -1);
					__LIB_1__::func_474(Local_14.f_294[iVar1], &iVar0, fVar2, 0, 1, 1);
				}
				iVar1++;
			}
			return true;
		}
	}
}

char* func_68(var uParam0)
{
	if (__LIB_2__::func_410(29))
	{
		switch (uParam0->f_313)
		{
			case 0:
				return "RE_BTE_STD_V1_PLYFINAL_FEUD";
			case 1:
				if (__LIB_2__::func_410(31) && !__LIB_0__::func_181())
				{
					return "RE_BTE_STD_V2_PLYFINAL_FEUD_ALT";
				}
				return "RE_BTE_STD_V2_PLYFINAL_FEUD";
		}
	}
	else
	{
		switch (uParam0->f_313)
		{
			case 0:
				return "RE_BTE_STD_V1_PLYFINAL";
			case 1:
				return "RE_BTE_STD_V2_PLYFINAL";
			default:
				break;
		}
	}
	return "RE_BTE_STD_V1_PLYFINAL";
}

int func_69(var uParam0, int iParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	if (__LIB_2__::func_303(iParam1, iParam2, sParam3, "", fParam4, iParam7, 0, 1, 1, fParam4 >= 0f, bParam5, iParam6, 1, 0, 0))
	{
		if (bParam8)
		{
			uParam0->f_494 = iParam1;
			if (uParam0->f_316 >= 1 && uParam0->f_321 != 6)
			{
				func_55(uParam0, 0, 0, 1);
			}
			__LIB_1__::func_148(&(uParam0->f_324[5 /*3*/]));
		}
		return 1;
	}
	return 0;
}

bool func_70()
{
	int iVar0;
	float fVar1;
	int iVar2;
	if (!__LIB_2__::func_227(-5f, 1, 0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_294[iVar0], 0, 0))
		{
			__LIB_0__::func_325(&(Local_14.f_298[iVar0]));
			switch (iVar0)
			{
				case 0:
					fVar1 = 0f;
					break;
				case 1:
					fVar1 = 1.5f;
					break;
				case 2:
					fVar1 = 2f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 553092, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_1__::func_474(Local_14.f_294[iVar0], &iVar2, fVar1, 0, 1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_294[iVar0], 5, true);
			PED::SET_PED_KEEP_TASK(Local_14.f_294[iVar0], true);
		}
		iVar0++;
	}
	Local_14.f_50 = 1;
	return true;
}

void func_72()
{
	switch (Local_14.f_493)
	{
		case 0:
			Local_14.f_306 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_14.f_51, Global_36, true);
			break;
		case 1:
			if (Local_14.f_316 > 0)
			{
				Local_14.f_487 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_14.f_352[3], Global_36);
			}
			else
			{
				Local_14.f_485 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_14.f_352[2], Global_36);
			}
			break;
		case 2:
			Local_14.f_484 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_14.f_352[1], Global_36);
			break;
		case 3:
			Local_14.f_483 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_14.f_352[0], Global_36);
			break;
		case 4:
			Local_14.f_486 = __LIB_2__::func_157(Local_14.f_352[6], Global_36);
			break;
	}
	Local_14.f_493++;
	Local_14.f_493 = (Local_14.f_493 % 5);
	if (!func_133(&Local_14, 1))
	{
		if (func_188())
		{
			func_189();
			func_77(&Local_14, 3);
		}
	}
}

int func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Local_14.f_48)
	{
		if (Local_14.f_98[0] > (20f + 3f) && Local_14.f_316 < 1)
		{
			return -1;
		}
	}
	iVar2 = 1;
	iVar3 = -1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_294[iVar1]))
		{
		}
		else
		{
			iVar0 = func_192(&(Local_14.f_294[iVar1]), &(Local_14.f_364[iVar1 /*21*/]), 20f, &(Local_14.f_428), &iVar2, 3f, 1, 0, "", 524288 | __LIB_2__::func_340(3, 0, 0), Local_14.f_352[5], 0, 2, 1, Local_14.f_98[iVar1], 0);
			if (__LIB_2__::func_341(&(Local_14.f_364[iVar1 /*21*/])))
			{
				if (!Local_14.f_488)
				{
					if (Local_14.f_464 == -1)
					{
						Local_14.f_464 = iVar1;
					}
					if (Local_14.f_364[iVar1 /*21*/].f_1 == 0)
					{
						if (!__LIB_2__::func_703(&(Local_14.f_428[0 /*17*/]), 0))
						{
							if (Local_14.f_316 >= 1)
							{
								__LIB_2__::func_482(&(Local_14.f_428[0 /*17*/]), 1, 1);
							}
						}
					}
					else if (Local_14.f_364[iVar1 /*21*/].f_1 == 1)
					{
						if (!Local_14.f_489)
						{
							if (!__LIB_2__::func_703(&(Local_14.f_428[1 /*17*/]), 0))
							{
								__LIB_2__::func_592(&(Local_14.f_428), 1, 1);
							}
						}
					}
					if (Local_14.f_364[iVar1 /*21*/].f_1 != -1)
					{
						func_55(&Local_14, 0, 0, 1);
					}
					__LIB_3__::func_930();
					__LIB_2__::func_504(Local_14.f_494, 250);
					Local_14.f_494 = Global_35;
					__LIB_1__::func_148(&(Local_14.f_324[5 /*3*/]));
					Local_14.f_488 = 1;
					Local_14.f_492 = 1;
				}
			}
			if (iVar0 != -1)
			{
				iVar3 = iVar0;
				if (iVar3 != -1)
				{
					Local_14.f_463 = iVar3;
				}
				Local_14.f_488 = 0;
			}
		}
		iVar1++;
	}
	return iVar3;
}

bool func_75(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	else if (iParam0 == 1)
	{
		if (func_17(&Local_14, 1))
		{
			func_38(&Local_14, 16);
			return false;
		}
		return true;
	}
	if (func_199())
	{
		return false;
	}
	if (Local_14.f_483)
	{
		if (!Local_14.f_485)
		{
			if ((__LIB_2__::func_1(Local_14.f_294[0], 0, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_294[0], Global_35, 17)) || (__LIB_2__::func_1(Local_14.f_294[1], 0, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_294[1], Global_35, 17)))
			{
				if (__LIB_4__::func_45() && Local_14.f_481 >= 4f)
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

void func_77(var uParam0, int iParam1)
{
	uParam0->f_316 = iParam1;
}

void func_78()
{
	if (!Local_14.f_486)
	{
		if (Local_14.f_318 <= 0)
		{
			return;
		}
	}
	func_202();
	if (Local_14.f_318 > 1)
	{
		if (!Local_14.f_48)
		{
			__LIB_3__::func_426(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
		}
	}
	if (func_199())
	{
		return;
	}
	if (func_17(&Local_14, 1))
	{
		if (Local_14.f_484)
		{
			return;
		}
	}
	if (func_133(&Local_14, 4))
	{
		if (Local_14.f_479 != 0)
		{
			if ((__LIB_0__::func_485() - Local_14.f_479) <= 12000)
			{
				return;
			}
		}
	}
	switch (Local_14.f_313)
	{
		case 0:
			func_204();
			break;
		case 1:
			func_205();
			break;
	}
}

bool func_79()
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar0 = func_74();
	if (iVar0 == -1)
	{
		if ((Local_14.f_494 == Global_35 && __LIB_1__::func_285(&(Local_14.f_324[5 /*3*/]), 6f)) || (Local_14.f_494 != Global_35 && __LIB_1__::func_285(&(Local_14.f_324[5 /*3*/]), 2f)))
		{
			func_56(&Local_14, 0);
			func_55(&Local_14, 1, 0, 1);
			__LIB_0__::func_37(&(Local_14.f_324[5 /*3*/]));
		}
	}
	if (__LIB_2__::func_1(Local_14.f_294[0], 0, 0))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_14.f_294[0], false);
		Local_14.f_481 = Local_14.f_98[0];
		Local_14.f_482 = __LIB_0__::func_94(Local_14.f_294[0], __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */), 1);
	}
	if (__LIB_2__::func_1(Local_14.f_294[1], 0, 0))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_14.f_294[1], false);
	}
	if (__LIB_2__::func_1(Local_14.f_294[2], 0, 0))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_14.f_294[2], false);
	}
	switch (iVar0)
	{
		case 0:
			func_209();
			__LIB_4__::func_32(&Local_14, 10);
			break;
		case 1:
			func_209();
			__LIB_4__::func_32(&Local_14, 12);
			if (Local_14.f_320 < 1)
			{
				__LIB_1__::func_148(&(Local_14.f_324[1 /*3*/]));
				__LIB_4__::func_32(&Local_14, 1);
			}
			else
			{
				__LIB_4__::func_32(&Local_14, 12);
			}
			break;
	}
	if (Local_14.f_320 > 3 && Local_14.f_321 < 3)
	{
		func_212();
	}
	switch (Local_14.f_320)
	{
		case 0:
			__LIB_1__::func_283(&(Local_14.f_324[1 /*3*/]), 0);
			__LIB_2__::func_504(Local_14.f_294[0], 0);
			__LIB_4__::func_32(&Local_14, 1);
			break;
		case 1:
			if (func_213() || (Local_14.f_463 == 1 && !TASK::_0x916B8E075ABC8B4E(Local_14.f_294[0], 1)))
			{
				func_214();
				Local_14.f_510 = 1;
				__LIB_2__::func_504(Local_14.f_294[1], 0);
				if (__LIB_2__::func_1(Local_14.f_294[2], 0, 0))
				{
					__LIB_2__::func_504(Local_14.f_294[2], 0);
				}
				PED::_0x89F5E7ADECCCB49C(Local_14.f_294[1], "intimidate");
				if (__LIB_2__::func_1(Local_14.f_294[2], 0, 0))
				{
					PED::_0x89F5E7ADECCCB49C(Local_14.f_294[2], "brave");
				}
				__LIB_4__::func_32(&Local_14, 2);
			}
			break;
		case 2:
			if (func_215())
			{
				if (func_216())
				{
					__LIB_1__::func_148(&(Local_14.f_324[1 /*3*/]));
					__LIB_4__::func_32(&Local_14, 7);
				}
				else if (func_39(&Local_14))
				{
					func_217();
					func_218(&Local_14, 8);
					__LIB_4__::func_32(&Local_14, 4);
				}
				else
				{
					func_219();
					func_218(&Local_14, 8);
					__LIB_4__::func_32(&Local_14, 3);
				}
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_14.f_324[1 /*3*/]), 4f) && !func_199())
			{
				if (func_216())
				{
					__LIB_1__::func_148(&(Local_14.f_324[1 /*3*/]));
					__LIB_4__::func_32(&Local_14, 7);
				}
				else
				{
					func_220();
					__LIB_4__::func_32(&Local_14, 9);
				}
				else
				{
					Jump @1638; //curOff = 829
					if (func_221())
					{
						func_222();
						__LIB_2__::func_592(&(Local_14.f_428), 1, 1);
						__LIB_4__::func_32(&Local_14, 5);
					}
					Jump @1638; //curOff = 861
					if (__LIB_2__::func_227(-3f, 1, 0, 0) && !func_199())
					{
						__LIB_4__::func_32(&Local_14, 19);
					}
					Jump @1638; //curOff = 897
					if (func_223())
					{
						if (__LIB_2__::func_227(0, 1, Local_14.f_494, 1) && !func_199())
						{
							iVar1 = 0;
							while (iVar1 <= 2)
							{
								if (__LIB_2__::func_1(Local_14.f_294[iVar1], 0, 0))
								{
									__LIB_2__::func_357(Local_14.f_294[iVar1], Global_36, 5, 1, 2);
									PED::SET_PED_USING_ACTION_MODE(Local_14.f_294[iVar1], true, -1, 0);
									__LIB_3__::func_469(Local_14.f_294[iVar1], Global_35, -1);
								}
								iVar1++;
							}
							func_69(&Local_14, Local_14.f_294[0], Global_35, func_156(&Local_14, 24), -1073741824 /* Float: -2f */, 1, 1744022339, 0, 1);
							__LIB_2__::func_592(&(Local_14.f_428), 1, 1);
							__LIB_4__::func_32(&Local_14, 8);
						}
					}
					Jump @1638; //curOff = 1080
					if (__LIB_2__::func_227(-5f, 1, 0, 0) && !func_199())
					{
						__LIB_4__::func_32(&Local_14, 19);
					}
					Jump @1638; //curOff = 1116
					if (__LIB_1__::func_285(&(Local_14.f_324[1 /*3*/]), 2f))
					{
						__LIB_1__::func_283(&(Local_14.f_324[2 /*3*/]), 0);
						if (func_216())
						{
							__LIB_1__::func_148(&(Local_14.f_324[2 /*3*/]));
							func_38(&Local_14, 2);
							if (Local_14.f_98[0] < Local_14.f_480)
							{
								Local_14.f_480 = (Local_14.f_98[0] - 1f);
							}
							__LIB_4__::func_32(&Local_14, 16);
						}
						else if (__LIB_1__::func_285(&(Local_14.f_324[2 /*3*/]), 5f) && !func_199())
						{
							func_224();
							__LIB_1__::func_148(&(Local_14.f_324[2 /*3*/]));
							func_38(&Local_14, 2);
							__LIB_4__::func_32(&Local_14, 14);
						}
					}
					Jump @1638; //curOff = 1272
					func_225();
					func_38(&Local_14, 2);
					__LIB_4__::func_32(&Local_14, 11);
					Jump @1638; //curOff = 1294
					if (__LIB_1__::func_285(&(Local_14.f_324[2 /*3*/]), 3f))
					{
						__LIB_1__::func_148(&(Local_14.f_324[2 /*3*/]));
						__LIB_4__::func_32(&Local_14, 16);
					}
					Jump @1638; //curOff = 1333
					if (!func_199())
					{
						__LIB_2__::func_592(&(Local_14.f_428), 1, 1);
						__LIB_4__::func_32(&Local_14, 19);
					}
					Jump @1638; //curOff = 1363
					if (__LIB_1__::func_285(&(Local_14.f_324[2 /*3*/]), 1.5f) && !func_199())
					{
						__LIB_2__::func_592(&(Local_14.f_428), 1, 1);
						__LIB_4__::func_32(&Local_14, 19);
					}
					Jump @1638; //curOff = 1415
					if (__LIB_1__::func_285(&(Local_14.f_324[2 /*3*/]), 4f))
					{
						__LIB_4__::func_32(&Local_14, 16);
					}
					Jump @1638; //curOff = 1442
					if (func_216())
					{
						__LIB_4__::func_32(&Local_14, 17);
					}
					else if (__LIB_1__::func_285(&(Local_14.f_324[2 /*3*/]), 4f) && !func_226())
					{
						if (!func_199())
						{
							if (PED::IS_PED_FACING_PED(Global_35, Local_14.f_294[0], 50f))
							{
								__LIB_2__::func_592(&(Local_14.f_428), 1, 1);
								__LIB_4__::func_32(&Local_14, 19);
							}
							else
							{
								__LIB_1__::func_283(&(Local_14.f_324[7 /*3*/]), 0);
								if (__LIB_1__::func_285(&(Local_14.f_324[2 /*3*/]), 10f))
								{
									__LIB_2__::func_592(&(Local_14.f_428), 1, 1);
									__LIB_4__::func_32(&Local_14, 19);
								}
							}
						}
					}
					Jump @1638; //curOff = 1594
					if (func_216())
					{
						__LIB_4__::func_32(&Local_14, 7);
					}
					Jump @1638; //curOff = 1611
					Jump @1638; //curOff = 1614
					if (func_227())
					{
						return true;
					}
					Jump @1638; //curOff = 1628
					return true;
				}
				return false;
			}
			default:
				break;
	}
}

void func_86(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (__LIB_2__::func_1(Local_14.f_294[iParam0], 0, 0))
	{
		PED::_0x58F7DB5BD8FA2288(Local_14.f_294[iParam0]);
		PED::_0x58F7DB5BD8FA2288(Local_14.f_294[iParam0]);
		if (bParam1)
		{
			PLAYER::_0xA3DB37EDF9A74635(iVar0, Local_14.f_294[iParam0], 3, 1, 1);
			PLAYER::_0xA3DB37EDF9A74635(iVar0, Local_14.f_294[iParam0], 4, 1, 1);
			PLAYER::_0xA3DB37EDF9A74635(iVar0, Local_14.f_294[iParam0], 7, 1, 1);
		}
	}
}

int func_103(var uParam0, int iParam1)
{
	switch (uParam0->f_313)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 2;
				case 2:
					return 2;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 0;
				default:
					break;
			}
			return 2;
	}
	return -1;
}

char* func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BRONTE_GOON_1";
		case 1:
			return "BRONTE_GOON_2";
		case 2:
			return "BRONTE_GOON_3";
		default:
			break;
	}
	return "";
}

var func_108()
{
	var uVar0;
	__LIB_1__::func_336(&uVar0, 97);
	__LIB_1__::func_336(&uVar0, 1664);
	return uVar0;
}

int func_109(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return joaat("WORLD_HUMAN_LEAN_BACK_WALL_MALE_D");
		case 1:
			return joaat("WORLD_HUMAN_SMOKE_MALE_C");
		case 2:
			return joaat("WORLD_HUMAN_STARE_STOIC_MALE_A");
		default:
			break;
	}
	return 0;
}

void func_114(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (__LIB_1__::func_85(iParam0, 32))
	{
		if (func_258(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_259(Global_35, &(uParam1->f_12)) };
				if (!__LIB_0__::func_86(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		__LIB_3__::func_261(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = __LIB_3__::func_292(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, __LIB_0__::func_93());
		if (__LIB_0__::func_1(Global_1310750[iParam0 /*111*/], 33554432))
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (__LIB_1__::func_85(iParam0, 1))
		{
			__LIB_2__::func_119(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	__LIB_3__::func_293(iParam0);
}

bool func_133(var uParam0, int iParam1)
{
	return (uParam0->f_307 && iParam1) != 0;
}

void func_136(var uParam0)
{
	uParam0->f_352[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2724.219f, -1122.143f, 50.2615f, 0f, 0f, 3E-05f, 11f, 20f, 4.887449f, "volAvoidance");
	uParam0->f_352[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volConvo");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[6], 2730.453f, -1107.336f, 56.0519f, 0f, 0f, 0f, 40.82754f, 30.25936f, 20f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[6], 2730.453f, -1126.049f, 56.0519f, 0f, 0f, -26f, 22.02122f, 20f, 20f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[6], 2707.766f, -1118.968f, 56.0519f, 0f, 0f, 0f, 25.64285f, 22.61014f, 20f);
	uParam0->f_352[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2723.415f, -1116.225f, 45.59632f, 0f, 0f, 70.00002f, 5f, 5f, 6f, "volTrigger");
	uParam0->f_352[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerHeadLook");
	VOLUME::_0xBCE668AAF83608BE(uParam0->f_352[1], 2723.309f, -1116.19f, 45.55014f, 0f, 0f, 70.00001f, 10f, 10f, 6f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[1], 2723.601f, -1110.132f, 49.47496f, 0f, 0f, -89.56159f, 11.2629f, 19.798f, 5.078019f);
	uParam0->f_352[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volILO");
	VOLUME::_0xBCE668AAF83608BE(uParam0->f_352[5], 2724.321f, -1113.358f, 49.22493f, 0f, 0f, -89.5616f, 9.627975f, 5.9384f, 3f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[5], 2723.388f, -1119.734f, 49.47496f, 0f, 0f, -89.5616f, 20f, 6.898358f, 5.078019f);
	uParam0->f_352[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[2], 2724.275f, -1126.422f, 58.40616f, 0f, 0f, -179.1407f, 21.66109f, 26.83335f, 13.29723f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[2], 2726.387f, -1126.811f, 54.8882f, 0f, 0f, 179.4228f, 11.45307f, 5.932232f, 17.23789f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[2], 2731.789f, -1116.34f, 51.50388f, 0f, 0f, 21.24319f, 11.45307f, 5.932232f, 8.5f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[2], 2716.494f, -1115.955f, 51.50388f, 0f, 0f, 155.243f, 11.45307f, 5.932232f, 8.5f);
	uParam0->f_352[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volApproachFront");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[7], 2723.115f, -1111.744f, 49.69563f, 0f, 0f, 30f, 4.073626f, 6.616278f, 4f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[7], 2724.167f, -1111.922f, 49.69563f, 0f, 0f, 0f, 2.509245f, 8.787599f, 4f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[7], 2725.278f, -1111.832f, 49.69563f, 0f, 0f, -30f, 4.073626f, 6.616278f, 4f);
	uParam0->f_352[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2724.167f, -1122.846f, 49.69563f, 0f, 0f, 0f, 8.167468f, 13.11081f, 4f, "volApproachBack");
	uParam0->f_352[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2730.826f, -1115.035f, 49.69563f, 0f, 0f, -30f, 8.80829f, 6.616278f, 4f, "volApproachLeft");
	uParam0->f_352[10] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2717.332f, -1115.082f, 49.69563f, 0f, 0f, 30f, 9.282722f, 6.616278f, 4f, "volApproachRight");
}

void func_137(var uParam0)
{
	uParam0->f_352[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAvoidance");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[4], 2855.417f, -1247.723f, 46.62268f, 0f, 0f, -39.99997f, 5.713907f, 10.95722f, 4.887449f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[4], 2860.6f, -1240.746f, 46.62268f, 0f, 0f, -18.6535f, 3.987673f, 8.482767f, 4.887449f);
	uParam0->f_352[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volConvo");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[6], 2867.995f, -1236.519f, 44.34315f, 0f, 0f, 72f, 43.69263f, 22.15478f, 20f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[6], 2852.334f, -1246.337f, 52.13451f, 0f, 0f, -38.77201f, 46.53672f, 7.945285f, 20f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[6], 2848.533f, -1271.458f, 43.36314f, 0f, 0f, 142f, 19.9548f, 44.64382f, 20f);
	VOLUME::_0xBCE668AAF83608BE(uParam0->f_352[6], 2854.057f, -1245.707f, 56.80352f, 0f, 0f, 0f, 22f, 22f, 7f);
	uParam0->f_352[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTrigger");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[0], 2856.34f, -1245.849f, 46.58746f, 0f, 0f, 52.00004f, 5f, 5f, 6f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[0], 2859.577f, -1245.463f, 46.58746f, 0f, 0f, 160f, 5f, 8.37202f, 6f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[0], 2858.77f, -1248.35f, 46.58746f, 0f, 0f, 169f, 3.671783f, 3.851203f, 6f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[0], 2857.791f, -1247.763f, 46.58746f, 0f, 0f, 61.42893f, 5f, 4.506442f, 6f);
	uParam0->f_352[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerHeadLook");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[1], 2855.907f, -1250.222f, 46.7739f, 0f, 0f, -127.5616f, 11.2629f, 19.798f, 5.078019f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[1], 2856.671f, -1255.089f, 46.7739f, 0f, 0f, -128.5325f, 14.70917f, 12.6653f, 5.078019f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[1], 2864.171f, -1242.669f, 46.7739f, 0f, 0f, -111.5616f, 14.70917f, 12.6653f, 5.078019f);
	uParam0->f_352[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volILO");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[5], 2855.907f, -1250.222f, 46.7739f, 0f, 0f, -127.5616f, 11.2629f, 19.798f, 5.078019f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[5], 2856.671f, -1255.089f, 46.7739f, 0f, 0f, -128.5325f, 14.70917f, 12.6653f, 5.078019f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[5], 2864.171f, -1242.669f, 46.7739f, 0f, 0f, -111.5616f, 14.70917f, 12.6653f, 5.078019f);
	uParam0->f_352[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[2], 2844.961f, -1257.396f, 53.14001f, 0f, 0f, 143.0062f, 11.21725f, 18.96621f, 6.856109f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[2], 2861.41f, -1236.64f, 52.31823f, 0f, 0f, -110.0775f, 18.83708f, 2.723047f, 6.856f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[2], 2848.455f, -1243.473f, 52.59271f, 0f, 0f, -39.75681f, 11.45307f, 9.21846f, 6.178172f);
	uParam0->f_352[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2853.778f, -1245.155f, 47.8924f, 0f, 0f, 13f, 8f, 8f, 6f, "volApproachBack");
	uParam0->f_352[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2855.583f, -1252.889f, 47.16468f, 0f, 0f, 13f, 8f, 8f, 4f, "volApproachLeft");
	uParam0->f_352[10] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2860.123f, -1240.328f, 47.16468f, 0f, 0f, 13f, 8f, 8f, 4f, "volApproachRight");
	uParam0->f_352[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2862.507f, -1247.603f, 47.16468f, 0f, 0f, 13f, 8f, 8f, 4f, "volApproachFront");
}

void func_138(var uParam0)
{
	uParam0->f_352[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2877.243f, -1179.624f, 46.62268f, 0f, 0f, -84.99996f, 5.713907f, 8.534966f, 4.887449f, "volAvoidance");
	uParam0->f_352[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volConvo");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[6], 2861.167f, -1173.702f, 44.34315f, 0f, 0f, 5f, 43.69263f, 15.155f, 20f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[6], 2872.65f, -1156.144f, 52.13451f, 0f, 0f, 93.228f, 33.35594f, 20.42583f, 20f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[6], 2902.247f, -1175.197f, 52.13451f, 0f, 0f, 93.228f, 45.0603f, 20.42583f, 20f);
	VOLUME::_0xBCE668AAF83608BE(uParam0->f_352[6], 2876.031f, -1181.058f, 53.39517f, 0f, 0f, 5f, 32f, 32f, 12f);
	uParam0->f_352[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2875.791f, -1178.811f, 46.58746f, 0f, 0f, 5f, 9.15876f, 7.532627f, 6f, "volTrigger");
	uParam0->f_352[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerHeadLook");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[1], 2864.476f, -1182.937f, 46.7739f, 0f, 0f, -154.5325f, 14.70917f, 6.479576f, 5.078019f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[1], 2874.832f, -1176.53f, 46.7739f, 0f, 0f, -86.5616f, 11.60422f, 28.84268f, 5.078019f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[1], 2872.175f, -1171.098f, 46.7739f, 0f, 0f, -86.5616f, 11.60422f, 24.11824f, 5.078019f);
	uParam0->f_352[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volILO");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[5], 2880.81f, -1173.213f, 48.83348f, 0f, 0f, 94.5f, 17.21666f, 16.11885f, 8.5f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[5], 2864.736f, -1181.29f, 48.2109f, 0f, 0f, -140.8162f, 30.05095f, 15.2654f, 6.856f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[5], 2885.178f, -1173.551f, 48.211f, 0f, 0f, 17.39286f, 11.45307f, 15.91235f, 6.856f);
	uParam0->f_352[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[2], 2882.173f, -1190.536f, 48.83348f, 0f, 0f, 94.5f, 17.21666f, 16.11885f, 8.5f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[2], 2872.934f, -1191.348f, 48.2109f, 0f, 0f, -140.8162f, 11.79427f, 13.38941f, 6.856f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[2], 2892.759f, -1185.206f, 48.211f, 0f, 0f, 17.39286f, 11.45307f, 9.21846f, 6.856f);
	uParam0->f_352[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volLeaveSpecial");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[3], 2882.173f, -1190.536f, 48.83348f, 0f, 0f, 94.5f, 17.21666f, 16.11885f, 8.5f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[3], 2872.934f, -1191.348f, 48.2109f, 0f, 0f, -140.8162f, 11.79427f, 13.38941f, 6.856f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_352[3], 2892.759f, -1185.206f, 48.211f, 0f, 0f, 17.39286f, 11.45307f, 9.21846f, 6.856f);
	uParam0->f_352[10] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2870.55f, -1182.989f, 46.71526f, 0f, 0f, 141.0548f, 8f, 8f, 4f, "volApproachRight");
	uParam0->f_352[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2876.843f, -1187.822f, 46.71558f, 0f, 0f, 141.0548f, 8f, 8f, 4f, "volApproachBack");
	uParam0->f_352[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2875.522f, -1176.802f, 46.71526f, 0f, 0f, 141.0548f, 8f, 8f, 4f, "volApproachFront");
	uParam0->f_352[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2881.709f, -1181.771f, 46.71526f, 0f, 0f, 141.0548f, 8f, 8f, 4f, "volApproachLeft");
}

struct<4> func_140(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_322)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2723.325f, -1116.1f, 48.65145f };
					Var0.f_3 = -88.86f;
					break;
				case 1:
					Var0 = { 2724.84f, -1116.28f, 48.6f };
					Var0.f_3 = 89.2f;
					break;
				case 2:
					Var0 = { 2723.322f, -1117.461f, 48.65305f };
					Var0.f_3 = -60.92f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2858f, -1245f, 45.356f };
					Var0.f_3 = -116.41f;
					break;
				case 1:
					Var0 = { 2858.326f, -1246.372f, 45.37535f };
					Var0.f_3 = 10.13f;
					break;
				case 2:
					Var0 = { 2859.103f, -1244.574f, 45.33826f };
					Var0.f_3 = 134.04f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2876.045f, -1181.909f, 45.06219f };
					Var0.f_3 = 4.31f;
					break;
				case 1:
					Var0 = { 2877.111f, -1180.621f, 45.06049f };
					Var0.f_3 = 130.92f;
					break;
				case 2:
					Var0 = { 2875.101f, -1180.646f, 45.05346f };
					Var0.f_3 = -141.71f;
					break;
			}
			break;
	}
	return Var0;
}

char* func_156(var uParam0, int iParam1)
{
	switch (uParam0->f_313)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "RE_BTE_STD_V1_BANTER_A";
				case 1:
					return "RE_BTE_STD_V1_BANTER_B";
				case 2:
					return "RE_BTE_STD_V1_BANTER_C";
				case 3:
					return "RE_BTE_STD_V1_BANTER_D";
				case 4:
					return "RE_BTE_STD_V1_BANTER_E";
				case 5:
					return "RE_BTE_STD_V1_BANTER_F";
				case 6:
					return "RE_BTE_STD_V1_BANTER_END";
				case 7:
					return "RE_BTE_STD_V1_POST_BANTER_A";
				case 8:
					return "RE_BTE_STD_V1_POST_BANTER_B";
				case 9:
					return "RE_BTE_STD_V1_POST_BANTER_C";
				case 10:
					return "RE_BTE_STD_V1_POST_BANTER_END";
				case 11:
					return "RE_BTE_STD_V1_IDENTIFY";
				case 12:
					if (func_39(uParam0))
					{
						return "RE_BTE_STD_V1_IDENTIFY2FEUD";
					}
					return "RE_BTE_STD_V1_IDENTIFY2";
				case 13:
					return "RE_BTE_STD_V1_IDENTIFY3FEUD";
				case 14:
					return "RE_BTE_STD_V1_NOTICE";
				case 15:
					return "RE_BTE_STD_V1_INTIMIDATE";
				case 16:
					return "RE_BTE_STD_V1_WARN";
				case 17:
					return "RE_BTE_STD_V1_WARN_ESC";
				case 18:
					return "RE_BTE_STD_V1_WARN_DEFUSE";
				case 19:
					return "RE_BTE_STD_V1_WARN_COMBAT";
				case 20:
					return "RE_BTE_STD_V1_PLAYER_LEAVING";
				case 21:
					return "RE_BTE_STD_V1_FORGET_HIM";
				case 22:
					return "RE_BTE_STD_V1_AGGRO_GUN";
				case 23:
					return "RE_BTE_STD_V1_AGGRO_MELEE";
				case 24:
					return "RE_BTE_STD_V1_RETURN";
				case 25:
					return "RE_BTE_STD_V1_FLEE";
				case 26:
					return "RE_BTE_STD_V1_GREET";
				case 27:
					return "RE_BTE_STD_V1_DEFUSE";
				case 28:
					return "RE_BTE_STD_V1_ANTAGONIZE";
				case 29:
					return "RE_BTE_STD_V1_GREET_ANT";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "RE_BTE_STD_V2_BANTER_A";
				case 1:
					return "RE_BTE_STD_V2_BANTER_B";
				case 2:
					return "RE_BTE_STD_V2_BANTER_C";
				case 3:
					return "RE_BTE_STD_V2_BANTER_D";
				case 4:
					return "RE_BTE_STD_V2_BANTER_E";
				case 5:
					return "RE_BTE_STD_V2_BANTER_F";
				case 6:
					return "RE_BTE_STD_V2_BANTER_END";
				case 7:
					return "RE_BTE_STD_V2_POST_BANTER_A";
				case 8:
					return "RE_BTE_STD_V2_POST_BANTER_B";
				case 9:
					return "RE_BTE_STD_V2_POST_BANTER_C";
				case 10:
					return "RE_BTE_STD_V2_POST_BANTER_END";
				case 11:
					return "RE_BTE_STD_V2_IDENTIFY";
				case 12:
					if (func_39(uParam0))
					{
						return "RE_BTE_STD_V2_IDENTIFY2FEUD";
					}
					return "RE_BTE_STD_V2_IDENTIFY2";
				case 13:
					return "RE_BTE_STD_V2_IDENTIFY3FEUD";
				case 14:
					return "RE_BTE_STD_V2_NOTICE";
				case 15:
					return "RE_BTE_STD_V2_INTIMIDATE";
				case 16:
					return "RE_BTE_STD_V2_WARN";
				case 17:
					return "RE_BTE_STD_V2_WARN_ESC";
				case 18:
					return "RE_BTE_STD_V2_WARN_DEFUSE";
				case 19:
					return "RE_BTE_STD_V2_WARN_COMBAT";
				case 20:
					return "RE_BTE_STD_V2_PLAYER_LEAVING";
				case 21:
					return "RE_BTE_STD_V2_FORGET_HIM";
				case 22:
					return "RE_BTE_STD_V2_AGGRO_GUN";
				case 23:
					return "RE_BTE_STD_V2_AGGRO_MELEE";
				case 24:
					return "RE_BTE_STD_V2_RETURN";
				case 25:
					return "RE_BTE_STD_V2_FLEE";
				case 26:
					return "RE_BTE_STD_V2_GREET";
				case 27:
					return "RE_BTE_STD_V2_DEFUSE";
				case 28:
					return "RE_BTE_STD_V2_ANTAGONIZE";
				case 29:
					return "RE_BTE_STD_V2_GREET_ANT";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_170(var uParam0)
{
	return __LIB_4__::func_161(&(uParam0->f_302), uParam0, &(uParam0->f_294), 0);
}

bool func_178(var uParam0)
{
	if (uParam0->f_490 <= 0f)
	{
		return false;
	}
	if (uParam0->f_306 > func_359(uParam0) && uParam0->f_306 > (uParam0->f_490 + 10f))
	{
		return true;
	}
	return false;
}

bool func_188()
{
	bool bVar0;
	if (__LIB_17__::func_831(&Local_14, &(Local_14.f_197), &(Local_14.f_294), 0, &(Local_14.f_5.f_16), 0, 1, 1))
	{
		if (Local_14.f_5.f_16 == 8192)
		{
			if (!__LIB_3__::func_477(Global_35, Local_14.f_294[0]))
			{
				bVar0 = true;
			}
			else if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_294[0], Global_35, 17) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_294[1], Global_35, 17))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_1();
				return false;
			}
		}
		return true;
	}
	if (func_133(&Local_14, 16))
	{
		return true;
	}
	return false;
}

void func_189()
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_38(&Local_14, 1);
	iVar1 = 68157440;
	iVar2 = 4096;
	if (!Local_14.f_48)
	{
		__LIB_3__::func_426(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_294[iVar0], 0, 1))
		{
			if (!func_17(&Local_14, 4))
			{
				if (Local_14.f_494 != Local_14.f_294[iVar0])
				{
					__LIB_2__::func_504(Local_14.f_494, 250);
				}
				func_69(&Local_14, Local_14.f_294[iVar0], Global_35, func_363(&Local_14, iVar0), -1073741824 /* Float: -2f */, 1, 1744022339, 0, 1);
				func_218(&Local_14, 4);
			}
			__LIB_2__::func_73(Local_14.f_294[iVar0], &(Local_14.f_298[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			__LIB_2__::func_357(Local_14.f_294[iVar0], Global_36, 3, 0, 3);
			TASK::TASK_COMBAT_PED(Local_14.f_294[iVar0], Global_35, iVar1, iVar2);
		}
		iVar0++;
	}
}

int func_192(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_365(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_2__::func_588(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!__LIB_0__::func_474(558))
				{
					__LIB_1__::func_240(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_199()
{
	int iVar0;
	if (!Local_14.f_492)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_341(&(Local_14.f_364[iVar0 /*21*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_202()
{
	float fVar0;
	if (!func_133(&Local_14, 4))
	{
		if (func_369())
		{
			func_370();
			Local_14.f_479 = __LIB_0__::func_485();
			func_38(&Local_14, 4);
		}
	}
	else if (!func_17(&Local_14, 1))
	{
		if (func_39(&Local_14))
		{
			fVar0 = -4f;
		}
		else
		{
			fVar0 = -3.5f;
		}
		if (__LIB_2__::func_227(fVar0, 1, 0, 0))
		{
			if (Local_14.f_504 != -1)
			{
				__LIB_2__::func_315(1891783641, Local_14.f_294[Local_14.f_504], 1);
				if (func_39(&Local_14))
				{
					func_372();
				}
				func_69(&Local_14, Local_14.f_294[Local_14.f_504], Global_35, func_156(&Local_14, 12), -1073741824 /* Float: -2f */, 1, 291934926, 0, 1);
				func_218(&Local_14, 1);
			}
		}
	}
	else if (!func_17(&Local_14, 2))
	{
		if (Local_14.f_484)
		{
			if (func_39(&Local_14))
			{
				if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_2__::func_227(0f, 1, Local_14.f_294[Local_14.f_504], 1))
				{
					func_69(&Local_14, Local_14.f_294[Local_14.f_504], Global_35, func_156(&Local_14, 13), -1073741824 /* Float: -2f */, 1, 1744022339, 0, 1);
					func_218(&Local_14, 2);
					func_218(&Local_14, 4);
					func_38(&Local_14, 16);
				}
			}
		}
	}
}

void func_204()
{
	switch (Local_14.f_318)
	{
		case 0:
			if (Local_14.f_486)
			{
				func_69(&Local_14, Local_14.f_294[1], Local_14.f_294[0], func_156(&Local_14, 0), 42f, 1, 291934926, 0, 1);
				func_373(&Local_14, 1);
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0f, 1, Local_14.f_494, 1))
			{
				if (func_374())
				{
					func_69(&Local_14, Local_14.f_294[0], Local_14.f_294[1], func_156(&Local_14, 1), 42f, 1, 291934926, 0, 1);
					func_373(&Local_14, 2);
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1))
			{
				if (func_374())
				{
					func_69(&Local_14, Local_14.f_294[1], Local_14.f_294[0], func_156(&Local_14, 2), 42f, 1, 291934926, 0, 1);
					func_373(&Local_14, 3);
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[0], Local_14.f_294[1], func_156(&Local_14, 3), 42f, 1, 291934926, 0, 1);
				func_373(&Local_14, 4);
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[1], Local_14.f_294[0], func_156(&Local_14, 4), 42f, 1, 291934926, 0, 1);
				func_373(&Local_14, 5);
			}
			break;
		case 5:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[0], Local_14.f_294[1], func_156(&Local_14, 5), 42f, 1, 291934926, 0, 1);
				func_373(&Local_14, 6);
			}
			break;
		case 6:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[0], Local_14.f_294[1], func_156(&Local_14, 6), -1073741824 /* Float: -2f */, 1, 1744022339, 0, 1);
				func_373(&Local_14, 7);
			}
			break;
		case 7:
			break;
		case 8:
			break;
	}
}

void func_205()
{
	switch (Local_14.f_318)
	{
		case 0:
			if (Local_14.f_486)
			{
				func_69(&Local_14, Local_14.f_294[1], Local_14.f_294[0], func_156(&Local_14, 0), 42f, 1, 291934926, 0, 1);
				func_373(&Local_14, 1);
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[0], Local_14.f_294[1], func_156(&Local_14, 1), 42f, 1, 291934926, 0, 1);
				func_373(&Local_14, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[1], Local_14.f_294[0], func_156(&Local_14, 2), 42f, 1, 291934926, 0, 1);
				func_373(&Local_14, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[0], Local_14.f_294[1], func_156(&Local_14, 3), 42f, 1, 291934926, 0, 1);
				func_373(&Local_14, 4);
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[1], Local_14.f_294[0], func_156(&Local_14, 4), 42f, 1, 291934926, 0, 1);
				func_373(&Local_14, 5);
			}
			break;
		case 5:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[0], Local_14.f_294[1], func_156(&Local_14, 5), 42f, 1, 291934926, 0, 1);
				func_373(&Local_14, 6);
			}
			break;
		case 6:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[0], Local_14.f_294[1], func_156(&Local_14, 6), -1073741824 /* Float: -2f */, 1, 1744022339, 0, 1);
				func_373(&Local_14, 7);
			}
			break;
		case 7:
			break;
		case 8:
			break;
	}
}

void func_209()
{
	__LIB_1__::func_148(&(Local_14.f_324[2 /*3*/]));
}

void func_212()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_294[iVar0], 0, 0))
		{
			if (func_376(&Local_14, iVar0, 1) && !func_376(&Local_14, iVar0, 2))
			{
				if (__LIB_0__::func_94(Local_14.f_294[iVar0], Local_14.f_197[iVar0 /*32*/].f_6, 1) > 4f && __LIB_0__::func_94(Local_14.f_294[iVar0], __LIB_2__::func_114(Global_35, 2.5f), 1) > 5.5f)
				{
					__LIB_3__::func_469(Local_14.f_294[iVar0], Global_35, -1);
					func_377(&Local_14, iVar0, 2);
				}
			}
		}
		iVar0++;
	}
}

bool func_213()
{
	if (((__LIB_1__::func_285(&(Local_14.f_324[1 /*3*/]), 0.25f) || func_17(&Local_14, 16)) && !func_199()) && !TASK::_0x916B8E075ABC8B4E(Local_14.f_294[0], 1))
	{
		return true;
	}
	return false;
}

void func_214()
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	Local_14.f_480 = Local_14.f_481;
	if (!func_17(&Local_14, 1) || !func_39(&Local_14))
	{
		func_69(&Local_14, Local_14.f_294[0], Global_35, func_156(&Local_14, 14), -1073741824 /* Float: -2f */, 1, 291934926, 0, 1);
	}
	Local_14.f_510 = 1;
	if (__LIB_2__::func_1(Local_14.f_294[0], 0, 0))
	{
		func_378(0, 1);
		func_379(&Local_14, 0, &vVar0, &uVar3);
		vVar0 = { 0f, 0f, 0f };
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		if (!__LIB_0__::func_86(vVar0))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar0, 1f, 20000, uVar3, 0.25f, 0);
		}
		__LIB_2__::func_45(0, Global_35, 0);
		__LIB_3__::func_469(0, Global_35, -1);
		__LIB_1__::func_474(Local_14.f_294[0], &iVar4, 0f, 0, 1, 1);
	}
}

bool func_215()
{
	if ((__LIB_1__::func_285(&(Local_14.f_324[1 /*3*/]), 0.5f) && __LIB_2__::func_227(-3.5f, 1, 0, 0)) && !func_199())
	{
		return true;
	}
	return false;
}

bool func_216()
{
	if (Local_14.f_481 > (Local_14.f_480 + 3f))
	{
		if (Local_14.f_482 >= (Local_14.f_481 + 1f) && Local_14.f_481 > 7f)
		{
			return true;
		}
	}
	else if ((Local_14.f_482 > (Local_14.f_481 + 1f) && Local_14.f_481 > 7f) && ENTITY::GET_ENTITY_SPEED(Global_35) > 1.5f)
	{
		return true;
	}
	if (Local_14.f_487)
	{
		return true;
	}
	return false;
}

void func_217()
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	__LIB_1__::func_148(&(Local_14.f_324[1 /*3*/]));
	if (!func_17(&Local_14, 1))
	{
		func_69(&Local_14, Local_14.f_294[1], Global_35, func_156(&Local_14, 12), 70f, 1, 1744022339, 0, 1);
	}
	Local_14.f_480 = Local_14.f_481;
	func_378(1, 1);
	func_379(&Local_14, 1, &vVar1, &uVar4);
	vVar1 = { 0f, 0f, 0f };
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (!__LIB_0__::func_86(vVar1))
	{
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar1, 1f, 20000, uVar4, 0.25f, 0);
	}
	__LIB_2__::func_45(0, Global_35, 0);
	__LIB_3__::func_469(0, Global_35, -1);
	__LIB_1__::func_474(Local_14.f_294[1], &iVar0, 0f, 0, 1, 1);
	if (__LIB_2__::func_1(Local_14.f_294[2], 0, 0))
	{
		func_378(2, 1);
		func_379(&Local_14, 2, &vVar1, &uVar4);
		vVar1 = { 0f, 0f, 0f };
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (!__LIB_0__::func_86(vVar1))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar1, 1f, 20000, uVar4, 0.25f, 0);
		}
		__LIB_2__::func_45(0, Global_35, 0);
		__LIB_3__::func_469(0, Global_35, -1);
		__LIB_1__::func_474(Local_14.f_294[2], &iVar0, 0.25f, 0, 1, 1);
	}
}

void func_218(var uParam0, int iParam1)
{
	uParam0->f_308 = (uParam0->f_308 || iParam1);
}

void func_219()
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	__LIB_1__::func_148(&(Local_14.f_324[1 /*3*/]));
	func_69(&Local_14, Local_14.f_294[0], Global_35, func_156(&Local_14, 15), 70f, 1, 1744022339, 0, 1);
	Local_14.f_480 = Local_14.f_481;
	if (__LIB_2__::func_1(Local_14.f_294[1], 0, 0))
	{
		func_378(1, 1);
		func_379(&Local_14, 1, &vVar1, &uVar4);
		vVar1 = { 0f, 0f, 0f };
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (!__LIB_0__::func_86(vVar1))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar1, 1f, 20000, uVar4, 0.25f, 0);
		}
		__LIB_2__::func_45(0, Global_35, 0);
		__LIB_3__::func_469(0, Global_35, -1);
		__LIB_1__::func_474(Local_14.f_294[1], &iVar0, 0f, 0, 1, 1);
	}
	if (__LIB_2__::func_1(Local_14.f_294[2], 0, 0))
	{
		func_378(2, 1);
		func_379(&Local_14, 2, &vVar1, &uVar4);
		vVar1 = { 0f, 0f, 0f };
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (!__LIB_0__::func_86(vVar1))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar1, 1f, 20000, uVar4, 0.25f, 0);
		}
		__LIB_2__::func_45(0, Global_35, 0);
		__LIB_3__::func_469(0, Global_35, -1);
		__LIB_1__::func_474(Local_14.f_294[2], &iVar0, 0.25f, 0, 1, 1);
	}
}

void func_220()
{
	int iVar0;
	__LIB_1__::func_148(&(Local_14.f_324[1 /*3*/]));
	if (Local_14.f_313 == 1 || Local_14.f_313 == 3)
	{
		func_69(&Local_14, Local_14.f_294[0], Global_35, func_156(&Local_14, 16), 70f, 1, 1808677283, 0, 1);
	}
	else
	{
		func_69(&Local_14, Local_14.f_294[1], Global_35, func_156(&Local_14, 16), 70f, 1, 1808677283, 0, 1);
	}
	__LIB_2__::func_272(Local_14.f_294[0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_14.f_294[0], joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(Local_14.f_294[0], 1, 1, 0, 0);
	if (__LIB_2__::func_1(Local_14.f_294[1], 0, 1))
	{
		if (Local_14.f_98[1] < 6f)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_CONFRONT(0, Global_35, 2);
			__LIB_3__::func_469(0, Global_35, -1);
			__LIB_1__::func_474(Local_14.f_294[1], &iVar0, 1f, 0, 1, 1);
			func_377(&Local_14, 1, 1);
		}
	}
	__LIB_3__::func_930();
}

bool func_221()
{
	if (__LIB_2__::func_227(-2f, 1, 0, 0) && !func_199())
	{
		__LIB_3__::func_930();
		return true;
	}
	return false;
}

void func_222()
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_1__::func_148(&(Local_14.f_324[1 /*3*/]));
	func_69(&Local_14, Local_14.f_294[0], Global_35, func_156(&Local_14, 13), 70f, 1, 1744022339, 0, 1);
	func_218(&Local_14, 4);
	iVar1 = 68157440;
	iVar2 = 4096;
	if (__LIB_2__::func_1(Local_14.f_294[2], 0, 0))
	{
		func_86(2, 1);
		__LIB_2__::func_357(Local_14.f_294[2], Global_36, 3, 0, 2);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_CONFRONT(0, Global_35, 2);
		TASK::TASK_COMBAT_PED(0, Global_35, iVar1, iVar2);
		__LIB_1__::func_474(Local_14.f_294[2], &iVar0, 3f, 0, 1, 1);
	}
	func_86(1, 1);
	__LIB_2__::func_357(Local_14.f_294[1], Global_36, 3, 0, 2);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_CONFRONT(0, Global_35, 2);
	TASK::TASK_COMBAT_PED(0, Global_35, iVar1, iVar2);
	__LIB_1__::func_474(Local_14.f_294[1], &iVar0, 2f, 0, 1, 1);
	__LIB_2__::func_272(Local_14.f_294[0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_14.f_294[0], joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(Local_14.f_294[0], 1, 1, 0, 0);
	func_86(0, 1);
	PED::SET_PED_USING_ACTION_MODE(Local_14.f_294[0], true, -1, 0);
	if (__LIB_2__::func_1(Local_14.f_294[2], 0, 0))
	{
		PED::SET_PED_USING_ACTION_MODE(Local_14.f_294[2], true, -1, 0);
	}
}

bool func_223()
{
	switch (Local_14.f_321)
	{
		case 0:
			__LIB_4__::func_33(&Local_14, 1);
			break;
		case 1:
			__LIB_2__::func_482(&(Local_14.f_428[0 /*17*/]), 1, 1);
			if (!Local_14.f_487 || func_17(&Local_14, 8))
			{
				func_69(&Local_14, Local_14.f_294[1], Global_35, func_156(&Local_14, 20), -1073741824 /* Float: -2f */, 1, 1744022339, 0, 1);
				__LIB_3__::func_469(Local_14.f_294[1], Global_35, -1);
				if (__LIB_2__::func_1(Local_14.f_294[2], 0, 0))
				{
					__LIB_3__::func_469(Local_14.f_294[2], Global_35, -1);
				}
				__LIB_3__::func_469(Local_14.f_294[0], Global_35, -1);
			}
			__LIB_4__::func_33(&Local_14, 2);
			break;
		case 2:
			if (func_382())
			{
				return true;
			}
			if (__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				func_383(1, 0f);
				if (__LIB_2__::func_1(Local_14.f_294[2], 0, 0))
				{
					func_383(2, 1.75f);
				}
				func_383(0, 1f);
				if (Local_14.f_463 != 0 && Local_14.f_482 > Local_14.f_481)
				{
					func_69(&Local_14, Local_14.f_294[0], Global_35, func_156(&Local_14, 21), -1073741824 /* Float: -2f */, 1, 1744022339, 0, 1);
				}
				__LIB_4__::func_33(&Local_14, 3);
			}
			break;
		case 3:
			if (func_382())
			{
				return true;
			}
			if (__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				__LIB_4__::func_33(&Local_14, 5);
			}
			break;
		case 5:
			if (func_382())
			{
				return true;
			}
			__LIB_4__::func_33(&Local_14, 6);
			break;
		case 6:
			func_384();
			if (func_382())
			{
				return true;
			}
			break;
		case 7:
			break;
	}
	return false;
}

void func_224()
{
	int iVar0;
	__LIB_1__::func_148(&(Local_14.f_324[2 /*3*/]));
	if (Local_14.f_313 == 0 || Local_14.f_313 == 2)
	{
		func_69(&Local_14, Local_14.f_294[0], Global_35, func_156(&Local_14, 17), 50f, 1, 1744022339, 0, 1);
	}
	else
	{
		func_69(&Local_14, Local_14.f_294[1], Global_35, func_156(&Local_14, 17), 50f, 1, 1744022339, 0, 1);
	}
	__LIB_2__::func_482(&(Local_14.f_428[0 /*17*/]), 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (!func_376(&Local_14, 1, 1))
	{
		TASK::TASK_CONFRONT(0, Global_35, 2);
	}
	__LIB_3__::func_469(0, Global_35, -1);
	__LIB_1__::func_474(Local_14.f_294[1], &iVar0, 0, 0, 1, 1);
}

void func_225()
{
	int iVar0;
	bool bVar1;
	__LIB_1__::func_148(&(Local_14.f_324[2 /*3*/]));
	switch (Local_14.f_313)
	{
		case 0:
		case 2:
			func_69(&Local_14, Local_14.f_294[0], Global_35, func_156(&Local_14, 18), 50f, 1, 1744022339, 0, 1);
			break;
		case 1:
		case 3:
			func_69(&Local_14, Local_14.f_294[1], Global_35, func_156(&Local_14, 18), 50f, 1, 1744022339, 0, 1);
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_294[iVar0], 0, 1))
		{
			if (iVar0 == 0)
			{
				bVar1 = false;
			}
			else
			{
				bVar1 = true;
			}
			func_385(&Local_14, iVar0, Global_35, 2, 1, 4f, bVar1);
		}
		iVar0++;
	}
}

bool func_226()
{
	if (Local_14.f_482 >= (Local_14.f_481 + 0.3f) && Local_14.f_481 > (7f - 4f))
	{
		return true;
	}
	if (Local_14.f_487)
	{
		return true;
	}
	return false;
}

bool func_227()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	if (!func_17(&Local_14, 4))
	{
		func_69(&Local_14, Local_14.f_294[1], Global_35, func_156(&Local_14, 19), -1073741824 /* Float: -2f */, 1, 1744022339, 0, 1);
	}
	iVar3 = 68157440;
	iVar4 = 4096;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_294[iVar0], 0, 0))
		{
			__LIB_2__::func_73(Local_14.f_294[iVar0], &(Local_14.f_298[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			if (iVar0 == 0)
			{
				__LIB_2__::func_357(Local_14.f_294[iVar0], Global_36, 3, 0, 0);
			}
			else
			{
				__LIB_2__::func_357(Local_14.f_294[iVar0], Global_36, 3, 0, 2);
			}
			switch (iVar0)
			{
				case 0:
					fVar2 = 0f;
					break;
				case 1:
					fVar2 = 0.35f;
					break;
				case 2:
					fVar2 = 0.8f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (PED::IS_PED_ON_MOUNT(Local_14.f_294[iVar0]))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, iVar3, iVar4);
			__LIB_1__::func_474(Local_14.f_294[iVar0], &iVar1, fVar2, 0, 1, 1);
		}
		iVar0++;
	}
	return true;
}

bool func_258(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*(uParam2[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*(uParam2[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*(uParam2[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*(uParam2[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*(uParam2[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*(uParam2[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*(uParam2[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*(uParam2[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 4:
					*(uParam2[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*(uParam2[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 5:
					*(uParam2[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*(uParam2[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*(uParam2[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*(uParam2[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*(uParam2[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*(uParam2[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*(uParam2[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*(uParam2[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*(uParam2[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*(uParam2[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 11:
					*(uParam2[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*(uParam2[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*(uParam2[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*(uParam2[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*(uParam2[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*(uParam2[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*(uParam2[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*(uParam2[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*(uParam2[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*(uParam2[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*(uParam2[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*(uParam2[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*(uParam2[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*(uParam2[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*(uParam2[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*(uParam2[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*(uParam2[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*(uParam2[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*(uParam2[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 20:
					*(uParam2[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*(uParam2[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*(uParam2[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 21:
					*(uParam2[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*(uParam2[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*(uParam2[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 22:
					*(uParam2[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*(uParam2[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(uParam2[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*(uParam2[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*(uParam2[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @3680; //curOff = 3233
					*(uParam2[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*(uParam2[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @3680; //curOff = 3344
					*(uParam2[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*(uParam2[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @3680; //curOff = 3455
					*(uParam2[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*(uParam2[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @3680; //curOff = 3566
					*(uParam2[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*(uParam2[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @7741; //curOff = 3680
					switch (iParam1)
					{
						case 0:
							*(uParam2[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
							*(uParam2[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 1:
							*(uParam2[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
							*(uParam2[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 2:
							*(uParam2[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
							*(uParam2[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 12:
							*(uParam2[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
							*(uParam2[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 13:
							*(uParam2[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
							*(uParam2[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 14:
							*(uParam2[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
							*(uParam2[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 26:
							*(uParam2[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
							*(uParam2[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 27:
							*(uParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
							*(uParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 28:
							*(uParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
							*(uParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 29:
							*(uParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
							*(uParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 30:
							*(uParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
							*(uParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					Jump @7741; //curOff = 4978
					switch (iParam1)
					{
						case 5:
							*(uParam2[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
							*(uParam2[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 6:
							*(uParam2[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
							*(uParam2[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 7:
							*(uParam2[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
							*(uParam2[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 8:
							*(uParam2[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
							*(uParam2[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					Jump @7741; //curOff = 5457
					switch (iParam1)
					{
						case 0:
							*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
							*(uParam2[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 1:
							*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
							*(uParam2[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 3:
							*(uParam2[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
							*(uParam2[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 6:
							*(uParam2[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
							*(uParam2[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
							*(uParam2[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					Jump @7741; //curOff = 5948
					switch (iParam1)
					{
						case 6:
							*(uParam2[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
							*(uParam2[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 7:
							*(uParam2[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
							*(uParam2[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 15:
							*(uParam2[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
							*(uParam2[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 16:
							*(uParam2[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
							*(uParam2[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 17:
							*(uParam2[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
							*(uParam2[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 18:
							*(uParam2[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
							*(uParam2[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 19:
							*(uParam2[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
							*(uParam2[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 24:
							*(uParam2[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
							*(uParam2[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 25:
							*(uParam2[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
							*(uParam2[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
							*(uParam2[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 28:
							*(uParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
							*(uParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 29:
							*(uParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
							*(uParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 30:
							*(uParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
							*(uParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
							*(uParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 31:
							*(uParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
							*(uParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 32:
							*(uParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
							*(uParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 33:
							*(uParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
							*(uParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					return false;
				}
Vector3 func_259(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!__LIB_0__::func_86(*(uParam1[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *(uParam1[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *(uParam1[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(uParam1[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

float func_359(var uParam0)
{
	return 65f;
}

char* func_363(var uParam0, int iParam1)
{
	if (func_170(uParam0))
	{
		return func_156(uParam0, 22);
	}
	return func_156(uParam0, 23);
}

int func_365(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_1__::func_148(&(iParam1->f_13));
		}
		if (__LIB_2__::func_525(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_3__::func_374(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_365(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_2__::func_344(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							__LIB_1__::func_488(*uParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*uParam0, 0, 1);
					}
				}
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_375(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									__LIB_1__::func_490(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					__LIB_2__::func_361(iParam1, uParam3, fVar8);
					if (__LIB_2__::func_589(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_377(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_375(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
					}
					__LIB_1__::func_491(iParam1, 1);
				}
				__LIB_2__::func_361(iParam1, uParam3, fVar8);
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			__LIB_2__::func_593(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_369()
{
	if (Local_14.f_484 && !__LIB_3__::func_291(Global_35, 1))
	{
		Local_14.f_504 = func_502();
		if (Local_14.f_504 != -1)
		{
			return true;
		}
	}
	if (func_199())
	{
		Local_14.f_504 = func_502();
		if (Local_14.f_504 == -1)
		{
			Local_14.f_504 = 0;
		}
		return true;
	}
	return false;
}

void func_370()
{
	int iVar0;
	bool bVar1;
	if (Local_14.f_504 != -1)
	{
		__LIB_2__::func_315(1891783641, Local_14.f_294[Local_14.f_504], 1);
		func_69(&Local_14, Local_14.f_294[Local_14.f_504], Global_35, func_156(&Local_14, 11), -1073741824 /* Float: -2f */, 1, 1744022339, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_294[iVar0], 0, 0))
		{
			if (iVar0 == 0)
			{
				bVar1 = false;
			}
			else
			{
				bVar1 = true;
			}
			if (Local_14.f_504 == iVar0)
			{
				func_385(&Local_14, iVar0, Global_35, 1, 1, 0.5f, bVar1);
			}
			else
			{
				func_385(&Local_14, iVar0, Global_35, 1, 2, 6f, bVar1);
			}
		}
		iVar0++;
	}
}

void func_372()
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	if (__LIB_2__::func_1(Local_14.f_294[1], 0, 0))
	{
		func_378(1, 1);
		func_379(&Local_14, 1, &vVar1, &uVar4);
		vVar1 = { 0f, 0f, 0f };
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (!__LIB_0__::func_86(vVar1))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar1, 1f, 20000, uVar4, 0.25f, 0);
		}
		__LIB_2__::func_45(0, Global_35, 0);
		__LIB_3__::func_469(0, Global_35, -1);
		__LIB_1__::func_474(Local_14.f_294[1], &iVar0, 0f, 0, 1, 1);
	}
	if (__LIB_2__::func_1(Local_14.f_294[2], 0, 0))
	{
		func_378(2, 1);
		func_379(&Local_14, 2, &vVar1, &uVar4);
		vVar1 = { 0f, 0f, 0f };
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (!__LIB_0__::func_86(vVar1))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar1, 1f, 20000, uVar4, 0.25f, 0);
		}
		__LIB_2__::func_45(0, Global_35, 0);
		__LIB_3__::func_469(0, Global_35, -1);
		__LIB_1__::func_474(Local_14.f_294[2], &iVar0, 0.25f, 0, 1, 1);
	}
}

void func_373(var uParam0, int iParam1)
{
	uParam0->f_318 = iParam1;
}

bool func_374()
{
	__LIB_1__::func_283(&(Local_14.f_324[8 /*3*/]), 0);
	if (__LIB_1__::func_285(&(Local_14.f_324[8 /*3*/]), 1f))
	{
		__LIB_0__::func_37(&(Local_14.f_324[8 /*3*/]));
		return true;
	}
	return false;
}

bool func_376(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_309[iParam1] && iParam2) != 0;
}

void func_377(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_309[iParam1] = (uParam0->f_309[iParam1] || iParam2);
}

void func_378(int iParam0, int iParam1)
{
	PED::_0xAAB050DA48B57978(Local_14.f_294[iParam0], "Default_Brave", Global_35, -1, 4);
	PED::_0xEEED8FAFEC331A70(Local_14.f_294[iParam0], Global_36, iParam1);
}

void func_379(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (__LIB_2__::func_157(uParam0->f_352[7], Global_36))
	{
		uParam0->f_323 = 0;
	}
	else if (__LIB_2__::func_157(uParam0->f_352[8], Global_36))
	{
		uParam0->f_323 = 1;
	}
	else if (__LIB_2__::func_157(uParam0->f_352[9], Global_36))
	{
		uParam0->f_323 = 2;
	}
	else if (__LIB_2__::func_157(uParam0->f_352[10], Global_36))
	{
		uParam0->f_323 = 3;
	}
	switch (uParam0->f_322)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (uParam0->f_323)
					{
						case -1:
						case 0:
						case 1:
							*uParam2 = { 0f, 0f, 0f };
							break;
						case 2:
							*uParam2 = { 2723.595f, -1113.862f, 48.62926f };
							break;
						case 3:
							*uParam2 = { 2722.928f, -1114.857f, 48.63488f };
							break;
					}
					break;
				case 1:
					*uParam2 = { 2725.103f, -1115.423f, 48.60228f };
					switch (uParam0->f_323)
					{
						case -1:
						case 0:
							*uParam2 = { 2725.103f, -1115.423f, 48.60228f };
							break;
						case 1:
							*uParam2 = { 0f, 0f, 0f };
							break;
						case 2:
							*uParam2 = { 2725.103f, -1115.423f, 48.60228f };
							break;
						case 3:
							*uParam2 = { 2724.887f, -1113.939f, 48.49548f };
							break;
					}
					break;
				case 2:
					*uParam2 = { 2724.128f, -1117.233f, 48.62149f };
					switch (uParam0->f_323)
					{
						case -1:
						case 0:
							*uParam2 = { 2724.128f, -1117.233f, 48.62149f };
							break;
						case 1:
							*uParam2 = { 0f, 0f, 0f };
							break;
						case 2:
							*uParam2 = { 2723.531f, -1115.958f, 48.69f };
							break;
						case 3:
							*uParam2 = { 2724.947f, -1116.012f, 48.55069f };
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (uParam0->f_323)
					{
						case -1:
						case 0:
							*uParam2 = { 2857.576f, -1245.13f, 45.35545f };
							break;
						case 1:
							*uParam2 = { 2856.956f, -1245.97f, 45.37487f };
							break;
						case 2:
							*uParam2 = { 2856.956f, -1245.97f, 45.37487f };
							break;
						case 3:
							*uParam2 = { 2858.637f, -1244.799f, 45.33804f };
							break;
					}
					break;
				case 1:
					switch (uParam0->f_323)
					{
						case -1:
						case 0:
							*uParam2 = { 2856.996f, -1247.022f, 45.37594f };
							break;
						case 1:
							*uParam2 = { 2856.864f, -1247.356f, 45.3756f };
							break;
						case 2:
							*uParam2 = { 0f, 0f, 0f };
							break;
						case 3:
							*uParam2 = { 2858.673f, -1246.372f, 45.36736f };
							break;
					}
					break;
				case 2:
					switch (uParam0->f_323)
					{
						case -1:
						case 0:
							*uParam2 = { 2859.235f, -1244.575f, 45.3329f };
							break;
						case 1:
							*uParam2 = { 2858.389f, -1246.883f, 45.37799f };
							break;
						case 2:
							*uParam2 = { 2858.897f, -1245.543f, 45.34706f };
							break;
						case 3:
							*uParam2 = { 0f, 0f, 0f };
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (uParam0->f_323)
					{
						case -1:
						case 0:
						case 1:
							*uParam2 = { 0f, 0f, 0f };
							break;
						case 2:
							*uParam2 = { 2877.022f, -1181.422f, 45.0595f };
							break;
						case 3:
							*uParam2 = { 2875.013f, -1181.746f, 45.06255f };
							break;
					}
					break;
				case 1:
					switch (uParam0->f_323)
					{
						case -1:
						case 0:
						case 1:
							*uParam2 = { 0f, 0f, 0f };
							break;
						case 2:
							*uParam2 = { 0f, 0f, 0f };
							break;
						case 3:
							*uParam2 = { 2876.214f, -1179.532f, 45.05967f };
							break;
					}
					break;
				case 2:
					switch (uParam0->f_323)
					{
						case -1:
						case 0:
						case 1:
							*uParam2 = { 0f, 0f, 0f };
							break;
						case 2:
							*uParam2 = { 2875.561f, -1179.483f, 45.06771f };
							break;
						case 3:
							*uParam2 = { 0f, 0f, 0f };
							break;
					}
					break;
			}
			break;
	}
	*uParam3 = __LIB_0__::func_152(*uParam2, Global_36, 1);
	__LIB_2__::func_106(uParam2, 1, 10, 0);
}

bool func_382()
{
	if ((Local_14.f_481 < (Local_14.f_480 + 2f) && !func_226()) && (Local_14.f_482 < (Local_14.f_481 - 0.5f) || PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(Local_14.f_294[0], false, false), 30f)))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_294[0], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_294[1], Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

void func_383(int iParam0, float fParam1)
{
	int iVar0;
	PED::_0x58F7DB5BD8FA2288(Local_14.f_294[iParam0]);
	PED::_0x935CF6E42BAF7F4D(Local_14.f_294[iParam0]);
	__LIB_0__::func_325(&(Local_14.f_298[iParam0]));
	if (!PED::_IS_PED_USING_SCENARIO_POINT(Local_14.f_294[iParam0], Local_14.f_496[iParam0]))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_14.f_197[iParam0 /*32*/].f_6, 1f, -1, 2f, 0, 40000f);
		TASK::_TASK_USE_SCENARIO_POINT(0, Local_14.f_496[iParam0], func_51(&Local_14, iParam0), -1, true, false, 0, false, -1f, false);
		__LIB_1__::func_474(Local_14.f_294[iParam0], &iVar0, fParam1, 0, 1, 1);
	}
}

void func_384()
{
	if (func_199())
	{
		return;
	}
	switch (Local_14.f_313)
	{
		case 0:
			func_504();
			break;
		case 1:
			func_505();
			break;
	}
}

void func_385(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, bool bParam6)
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
	if (bParam6)
	{
		TASK::_0xE7FA07624574B79A(uParam0->f_294[iParam1], iParam2, iParam3, iParam4, fParam5, 1, 0, 0, 0);
	}
	TASK::TASK_LOOK_AT_ENTITY(uParam0->f_294[iParam1], iParam2, BUILTIN::FLOOR((fParam5 * 1000f)), 0, 51, 0);
	__LIB_2__::func_281(&Var0, iParam2, 0, -1, 3, 3, 2, 1, 0, 0, 0, 0);
	_NAMESPACE29::_0x66F9EB44342BB4C5(uParam0->f_294[iParam1], &Var0);
}

int func_502()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_294[iVar0], 0, 0))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_294[iVar0], Global_35, 17))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_504()
{
	switch (Local_14.f_319)
	{
		case 0:
			__LIB_1__::func_283(&(Local_14.f_324[4 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_14.f_324[4 /*3*/]), 5f) && __LIB_2__::func_227(-7f, 1, Local_14.f_494, 1))
			{
				func_69(&Local_14, Local_14.f_294[0], Local_14.f_294[1], func_156(&Local_14, 7), 42f, 1, -417894478, 0, 1);
				__LIB_4__::func_31(&Local_14, 1);
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[0], Local_14.f_294[1], func_156(&Local_14, 8), 42f, 1, -417894478, 0, 1);
				__LIB_4__::func_31(&Local_14, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[1], Local_14.f_294[0], func_156(&Local_14, 9), 42f, 1, -417894478, 0, 1);
				__LIB_4__::func_31(&Local_14, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[0], Local_14.f_294[1], func_156(&Local_14, 10), 42f, 1, -417894478, 0, 1);
				__LIB_4__::func_31(&Local_14, 4);
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				__LIB_4__::func_31(&Local_14, 6);
			}
			break;
		case 5:
			break;
		case 6:
			break;
	}
}

void func_505()
{
	switch (Local_14.f_319)
	{
		case 0:
			__LIB_1__::func_283(&(Local_14.f_324[4 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_14.f_324[4 /*3*/]), 5f) && __LIB_2__::func_227(0f, 1, Local_14.f_494, 1))
			{
				func_69(&Local_14, Local_14.f_294[0], Local_14.f_294[1], func_156(&Local_14, 7), 42f, 1, -417894478, 0, 1);
				__LIB_4__::func_31(&Local_14, 1);
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[0], Local_14.f_294[1], func_156(&Local_14, 8), 42f, 1, -417894478, 0, 1);
				__LIB_4__::func_31(&Local_14, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[1], Local_14.f_294[0], func_156(&Local_14, 9), 42f, 1, -417894478, 0, 1);
				__LIB_4__::func_31(&Local_14, 3);
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				func_69(&Local_14, Local_14.f_294[0], Local_14.f_294[1], func_156(&Local_14, 10), 42f, 1, -417894478, 0, 1);
				__LIB_4__::func_31(&Local_14, 4);
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-7f, 1, Local_14.f_494, 1) && func_374())
			{
				__LIB_4__::func_31(&Local_14, 6);
			}
			break;
		case 5:
			break;
		case 6:
			break;
	}
}

