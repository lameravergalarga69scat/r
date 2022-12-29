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
	struct<516> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 3, 0, 0, 0, 3, 0, 0, 0, 1125515264, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, -1, 0, 3, 0, 0, 0, 0, -1082130432, 1148844442, 1148844442, 1148844442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_530 = false;
	struct<7> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, -1 } ;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		bLocal_530 = true;
	}
	if (!bLocal_530)
	{
		func_2(ScriptParam_0);
	}
	while (true)
	{
		switch (Local_14.f_319)
		{
			case 1:
				if (__LIB_3__::func_454(&Local_14, &ScriptParam_0, 0, 0, 0, 0, 0, 1))
				{
					func_4();
					if (!func_5(&Local_14, 128))
					{
						__LIB_4__::func_31(&Local_14, 0);
					}
				}
				else if (Local_14.f_160)
				{
					func_1();
				}
				break;
			case 0:
				if (func_7())
				{
					__LIB_4__::func_31(&Local_14, 3);
				}
				else if (!__LIB_3__::func_927(BUILTIN::VDIST(Local_14.f_51, Global_36), Local_14.f_3))
				{
					if (__LIB_0__::func_0())
					{
						func_1();
					}
				}
				break;
			case 3:
				if (__LIB_3__::func_479(Local_14.f_51, Local_14.f_51.f_3, &(Local_14.f_197), &(Local_14.f_307), 1, 0, -1, 1))
				{
					func_11();
					iVar0 = CLOCK::GET_CLOCK_HOURS();
					if (iVar0 >= 20 || iVar0 < 5)
					{
						__LIB_3__::func_400(Local_14.f_51, &(Local_14.f_294), 0f, 0, 0, -1, 0);
					}
					__LIB_4__::func_31(&Local_14, 4);
				}
				break;
			case 4:
				if (func_13())
				{
					func_1();
				}
				if (Local_14.f_46)
				{
					if (func_14())
					{
						func_1();
					}
				}
				else if (!Local_14.f_50)
				{
					if (func_15())
					{
						Local_14.f_50 = 1;
					}
				}
				if (func_16())
				{
					__LIB_4__::func_153("REETE_STOP");
					func_1();
				}
				break;
			case 6:
				func_18();
				break;
		}
		BUILTIN::WAIT(Local_14.f_158);
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	func_19(&Local_14, 128);
	func_20(1);
	__LIB_4__::func_38(&(Local_14.f_327));
	func_22(0);
	if ((!func_23(&Local_14, 8) && !Local_14.f_46) && !Local_14.f_44)
	{
		Local_14.f_45 = 0;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_294[iVar0 /*12*/].f_8))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_294[iVar0 /*12*/].f_8));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Local_14.f_307)
	{
		if (__LIB_2__::func_1(Local_14.f_307[iVar1], 0, 0))
		{
			if (PED::IS_PED_USING_ANY_SCENARIO(Local_14.f_307[iVar1]))
			{
				__LIB_2__::func_357(Local_14.f_307[iVar1], Global_36, 5, 1, 1);
				TASK::CLEAR_PED_TASKS(Local_14.f_307[iVar1], true, false);
			}
		}
		iVar1++;
	}
	__LIB_3__::func_474(&(Local_14.f_510));
	__LIB_4__::func_31(&Local_14, 6);
	__LIB_1__::func_979(1024);
}

int func_2(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6)
{
	Local_14.f_3 = __LIB_0__::func_81(&vParam0);
	Local_14.f_161 = __LIB_0__::func_27(vParam0.z, 2);
	Local_14.f_43 = __LIB_0__::func_12();
	Local_14.f_184 = 0;
	Local_14.f_478 = 3;
	Local_14.f_479 = 3;
	Local_14.f_501 = 2;
	func_31(&Local_14, Local_14.f_501);
	func_32();
	__LIB_3__::func_489(&Local_14, 1);
	return 1;
}

void func_4()
{
	bool bVar0;
	int iVar1;
	Local_14.f_326 = Local_14.f_51.f_4;
	Local_14.f_318 = __LIB_3__::func_390(Local_14.f_3, 8, 0);
	__LIB_1__::func_336(&(Local_14.f_327.f_3), 32);
	switch (Local_14.f_326)
	{
		case 6:
			iVar1 = CLOCK::GET_CLOCK_HOURS();
			if (!bVar0)
			{
				if (iVar1 < 21 && iVar1 >= 6)
				{
					func_1();
					return;
				}
			}
			break;
	}
	switch (Local_14.f_318)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (Local_14.f_161)
			{
				__LIB_17__::func_862(2);
			}
			break;
		default:
			if (Local_14.f_161)
			{
				__LIB_11__::func_34(2, 1);
			}
			break;
	}
	switch (Local_14.f_318)
	{
		case 4:
			Local_14.f_318 = 0;
			break;
		case 6:
			Local_14.f_318 = 2;
			break;
		case 5:
			Local_14.f_318 = 1;
			break;
		case 7:
			Local_14.f_318 = 3;
			break;
	}
	func_43();
	__LIB_4__::func_39(Local_14.f_356[4]);
	func_45(&Local_14);
	func_46(&Local_14);
}

bool func_5(var uParam0, int iParam1)
{
	return (uParam0->f_316 && iParam1) != 0;
}

bool func_7()
{
	int iVar0;
	switch (Local_14.f_320)
	{
		case 0:
			__LIB_3__::func_284(&(Local_14.f_197));
			__LIB_3__::func_314(&(Local_14.f_294));
			__LIB_3__::func_308(&Local_14);
			func_50();
			__LIB_4__::func_32(&Local_14, 1);
			break;
		case 1:
			iVar0 = 1;
			if (!func_52())
			{
				iVar0 = 0;
			}
			if (!__LIB_3__::func_366(&(Local_14.f_197)))
			{
				iVar0 = 0;
			}
			if (!__LIB_3__::func_316(&(Local_14.f_294)))
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

void func_11()
{
	int iVar0;
	int iVar1;
	var uVar2;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_307[iVar0], 0, 0))
		{
			__LIB_3__::func_285(Local_14.f_307[iVar0], &Local_14, 0);
			iVar1 = func_59(&Local_14, iVar0);
			Local_14.f_502[iVar0] = __LIB_2__::func_488(iVar1, Local_14.f_197[iVar0 /*32*/].f_6, Local_14.f_197[iVar0 /*32*/].f_9, 0, -1f, 1);
			TASK::_TASK_USE_SCENARIO_POINT(Local_14.f_307[iVar0], Local_14.f_502[iVar0], func_61(&Local_14, iVar0), -1, false, true, 0, false, -1f, false);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_307[iVar0], 233, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_14.f_307[iVar0], false, true);
			__LIB_2__::func_272(Local_14.f_307[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_63(&Local_14, iVar0);
		}
		if (__LIB_2__::func_1(Local_14.f_197[iVar0 /*32*/].f_11, 0, 0))
		{
			uVar2 = __LIB_2__::func_488(joaat("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC"), Local_14.f_197[iVar0 /*32*/].f_15, Local_14.f_197[iVar0 /*32*/].f_18, 0f, -1f, 1);
			TASK::_TASK_USE_SCENARIO_POINT(Local_14.f_197[iVar0 /*32*/].f_11, uVar2, "", -1, true, true, 0, false, -1f, false);
		}
		iVar0++;
	}
	func_64(&Local_14, 0, 1, 1);
	func_65(&Local_14, 1);
}

bool func_13()
{
	__LIB_3__::func_931(&Local_14, 5.5f);
	if (!func_71(&Local_14, &(Local_14.f_307), Local_14.f_318, 0, 0, 0, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_14()
{
	int iVar0;
	char* sVar1;
	Local_14.f_477 = func_72(&Local_14);
	Local_14.f_315 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_14.f_51, Global_36, true);
	func_73();
	func_74();
	func_75();
	iVar0 = -1;
	switch (Local_14.f_322)
	{
		case 0:
			if (Local_14.f_487 == 0f)
			{
				Local_14.f_487 = Local_14.f_98[0];
			}
			__LIB_1__::func_283(&(Local_14.f_331[0 /*3*/]), 0);
			func_77();
			func_78(&Local_14, 1);
			break;
		case 1:
			if (func_79(&iVar0))
			{
				__LIB_4__::func_153("REETE_STOP");
				func_78(&Local_14, 3);
			}
			else if (Local_14.f_477 <= 0)
			{
				if (__LIB_2__::func_393(&(Local_14.f_510)))
				{
					func_78(&Local_14, 6);
				}
				else if (__LIB_3__::func_929(&(Local_14.f_510), &(Local_14.f_307), 0, 3, 1073741824 /* Float: 2f */, 0))
				{
					sVar1 = func_82(&Local_14);
					func_83(&Local_14, Global_35, Global_35, sVar1, -1073741824 /* Float: -2f */, 0, 1808677283, 0, 1);
					func_78(&Local_14, 2);
				}
			}
			break;
		case 3:
			if (func_84())
			{
				__LIB_4__::func_153("REETE_STOP");
				func_78(&Local_14, 6);
			}
			break;
		case 2:
			if (Local_14.f_477 <= 0)
			{
				if (__LIB_2__::func_393(&(Local_14.f_510)))
				{
					__LIB_4__::func_153("REETE_STOP");
					func_78(&Local_14, 6);
				}
				else if (__LIB_3__::func_929(&(Local_14.f_510), &(Local_14.f_307), 0, 3, 2f, 0))
				{
					__LIB_4__::func_153("REETE_STOP");
					sVar1 = func_82(&Local_14);
					func_83(&Local_14, Global_35, Global_35, sVar1, -1073741824 /* Float: -2f */, 0, 1808677283, 0, 1);
					func_78(&Local_14, 6);
				}
			}
			break;
		case 6:
			__LIB_3__::func_474(&(Local_14.f_510));
			__LIB_4__::func_153("REETE_STOP");
			return true;
	}
	return false;
}

bool func_15()
{
	int iVar0;
	func_85();
	switch (Local_14.f_321)
	{
		case 0:
			if (__LIB_0__::func_272(Local_14.f_307[0], 0))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_14.f_307[0], false);
			}
			iVar0 = -1;
			iVar0 = func_87();
			if (func_88(iVar0))
			{
				Local_14.f_515 = 1;
				__LIB_1__::func_148(&(Local_14.f_331[5 /*3*/]));
				__LIB_3__::func_487();
				__LIB_4__::func_33(&Local_14, 1);
			}
			else
			{
				func_92();
			}
			break;
		case 1:
			if (func_93())
			{
				__LIB_4__::func_33(&Local_14, 3);
			}
			break;
		case 2:
			__LIB_4__::func_33(&Local_14, 3);
			break;
		case 3:
			__LIB_3__::func_481();
			func_22(1);
			__LIB_4__::func_153("REETE_FIGHT");
			return true;
	}
	return false;
}

bool func_16()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (__LIB_2__::func_393(&(Local_14.f_510)))
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (Local_14.f_46)
	{
		bVar1 = false;
		bVar2 = false;
	}
	else
	{
		bVar1 = true;
		bVar2 = true;
	}
	if (__LIB_3__::func_431(&Local_14, &(Local_14.f_307), bVar1, bVar0, bVar2, 0, 1, 1, 0, 0, 0, 0, 0))
	{
		return true;
	}
	return false;
}

void func_18()
{
	int iVar0;
	if (!bLocal_530 || (!__LIB_2__::func_204(0) || CAM::IS_SCREEN_FADED_OUT()))
	{
		iVar0 = 0;
		while (iVar0 < Local_14.f_307)
		{
			if (__LIB_2__::func_1(Local_14.f_307[iVar0], 0, 0))
			{
				if (CAM::IS_SCREEN_FADED_OUT() || !__LIB_1__::func_472(Local_14.f_307[iVar0], 200f, 100f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					PED::DELETE_PED(&(Local_14.f_307[iVar0]));
				}
				else if (PED::IS_PED_USING_ANY_SCENARIO(Local_14.f_307[iVar0]))
				{
					if (!__LIB_1__::func_472(Local_14.f_307[iVar0], 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_14.f_307[iVar0], false, true);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_14.f_307[iVar0], true, false);
					}
					return;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_14.f_307)
		{
			if (__LIB_2__::func_1(Local_14.f_307[iVar0], 0, 0))
			{
				if (!PED::IS_PED_IN_COMBAT(Local_14.f_307[iVar0], 0))
				{
					__LIB_3__::func_475(Local_14.f_307[iVar0], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
				}
			}
			iVar0++;
		}
		func_99(&Local_14, &(Local_14.f_307), &(Local_14.f_311), Local_14.f_318, Local_14.f_508, Local_14.f_509, 0, 1, 0, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_316 = (uParam0->f_316 || iParam1);
}

void func_20(bool bParam0)
{
	__LIB_2__::func_408(&(Local_14.f_466), bParam0);
}

void func_22(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_101(iVar0, bParam0);
		__LIB_2__::func_603(&(Local_14.f_307[iVar0]), &(Local_14.f_365[iVar0 /*21*/]), &(Local_14.f_429), 1, 1);
		if (__LIB_2__::func_1(Local_14.f_307[iVar0], 0, 0))
		{
			PED::SET_PED_CONFIG_FLAG(Local_14.f_307[iVar0], 130, false);
		}
		iVar0++;
	}
}

bool func_23(var uParam0, int iParam1)
{
	return (uParam0->f_317 && iParam1) != 0;
}

void func_31(var uParam0, var uParam1)
{
	uParam0->f_177 = uParam1;
}

void func_32()
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
	__LIB_2__::func_595(&(Local_14.f_5), 30f);
}

void func_43()
{
	switch (Local_14.f_326)
	{
		case 0:
			func_143(&Local_14);
			break;
		case 1:
			func_144(&Local_14);
			break;
		case 2:
			func_145(&Local_14);
			break;
		case 3:
			func_146(&Local_14);
			break;
		case 4:
			func_147(&Local_14);
			break;
		case 5:
			func_148(&Local_14);
			break;
		case 6:
			func_149(&Local_14);
			break;
	}
}

void func_45(var uParam0)
{
	struct<4> Var0;
	int iVar4;
	uParam0->f_498 = __LIB_2__::func_284(2, -1);
	if (uParam0->f_498)
	{
	}
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		uParam0->f_197[iVar4 /*32*/].f_1 = func_152(uParam0, iVar4);
		if (uParam0->f_197[iVar4 /*32*/].f_1 == 0)
		{
		}
		else
		{
			StringCopy(&(uParam0->f_197[iVar4 /*32*/].f_23), func_153(uParam0, iVar4), 64);
			uParam0->f_197[iVar4 /*32*/].f_3 = func_154(uParam0, iVar4);
			Var0 = { func_155(uParam0, iVar4) };
			uParam0->f_197[iVar4 /*32*/].f_6 = { Var0 };
			uParam0->f_197[iVar4 /*32*/].f_9 = Var0.f_3;
		}
		iVar4++;
	}
}

void func_46(var uParam0)
{
	struct<4> Var0;
	int iVar4;
	iVar4 = 0;
	while (iVar4 <= 0)
	{
		Var0 = { func_156(uParam0, iVar4) };
		if (!__LIB_0__::func_86(Var0))
		{
			uParam0->f_294[iVar4 /*12*/].f_7 = joaat("P_LANTERN04X");
		}
		uParam0->f_294[iVar4 /*12*/] = { Var0 };
		uParam0->f_294[iVar4 /*12*/].f_3 = Var0.f_3;
		uParam0->f_294[iVar4 /*12*/].f_4 = { 0f, 0f, Var0.f_3 };
		__LIB_1__::func_581(&(uParam0->f_294[iVar4 /*12*/].f_11), 10);
		iVar4++;
	}
}

void func_50()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_4__::func_155();
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (iVar1 == 2)
		{
			if (Local_14.f_318 == 1)
			{
			}
			else
			{
				__LIB_4__::func_34(func_59(&Local_14, iVar1), iVar0, Local_14.f_197[iVar1 /*32*/].f_1, func_162(&Local_14, iVar1));
				iVar1++;
			}
		}
	}
}

bool func_52()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (iVar1 == 2)
		{
			if (Local_14.f_318 == 1)
			{
			}
			else
			{
				if (!__LIB_2__::func_313(func_59(&Local_14, iVar1)))
				{
					iVar0 = 0;
				}
				iVar1++;
			}
			return iVar0;
		}
	}
}

int func_59(var uParam0, int iParam1)
{
	switch (uParam0->f_326)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
				case 1:
					return joaat("WORLD_HUMAN_LEAN_WALL_LEFT");
				case 2:
					return joaat("WORLD_HUMAN_SMOKE");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
				case 1:
					return joaat("WORLD_HUMAN_DRINKING");
				case 2:
					return joaat("WORLD_HUMAN_SMOKE");
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
				case 1:
					return joaat("WORLD_HUMAN_LEAN_WALL_LEFT");
				case 2:
					return joaat("WORLD_HUMAN_SMOKE");
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
				case 1:
					return joaat("WORLD_HUMAN_LEAN_WALL_LEFT");
				case 2:
					return joaat("WORLD_HUMAN_SMOKE");
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
				case 1:
					return joaat("WORLD_HUMAN_SMOKE");
				case 2:
					return joaat("WORLD_HUMAN_SMOKE");
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_SMOKE");
				case 1:
					return joaat("WORLD_HUMAN_SMOKE");
				case 2:
					return joaat("WORLD_HUMAN_DRINKING");
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_SMOKE");
				case 1:
					return joaat("WORLD_HUMAN_SMOKE");
				case 2:
					return joaat("WORLD_HUMAN_SMOKE");
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_61(var uParam0, int iParam1)
{
	switch (uParam0->f_326)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D";
				case 1:
					return "WORLD_HUMAN_LEAN_WALL_LEFT_SMOKING_MALE_C";
				case 2:
					return "WORLD_HUMAN_SMOKE_MALE_A";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D";
				case 1:
					return "WORLD_HUMAN_STAND_DRINK_MALE_A";
				case 2:
					return "WORLD_HUMAN_SMOKE_MALE_A";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D";
				case 1:
					return "WORLD_HUMAN_LEAN_WALL_LEFT_SMOKING_MALE_C";
				case 2:
					return "WORLD_HUMAN_SMOKE_MALE_A";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D";
				case 1:
					return "WORLD_HUMAN_LEAN_WALL_LEFT_SMOKING_MALE_C";
				case 2:
					return "WORLD_HUMAN_SMOKE_MALE_A";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D";
				case 1:
					return "WORLD_HUMAN_SMOKE_MALE_A";
				case 2:
					return "WORLD_HUMAN_SMOKE_MALE_A";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_SMOKE_MALE_C";
				case 1:
					return "WORLD_HUMAN_SMOKE_MALE_A";
				case 2:
					return "WORLD_HUMAN_STAND_DRINK_MALE_A";
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_SMOKE_MALE_C";
				case 1:
					return "WORLD_HUMAN_SMOKE_MALE_A";
				case 2:
					return "WORLD_HUMAN_SMOKE_MALE_A";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_63(var uParam0, int iParam1)
{
	if (!__LIB_2__::func_1(uParam0->f_307[iParam1], 0, 0))
	{
		return;
	}
	PED::SET_PED_COMBAT_RANGE(uParam0->f_307[iParam1], 0);
	PED::SET_COMBAT_FLOAT(uParam0->f_307[iParam1], 39, 10f);
	PED::SET_COMBAT_FLOAT(uParam0->f_307[iParam1], 32, 2f);
	PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_307[iParam1], 2);
	PED::SET_COMBAT_FLOAT(uParam0->f_307[iParam1], 7, 1f);
}

void func_64(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam1)
	{
		if (!__LIB_1__::func_489(&(uParam0->f_429[0 /*17*/]), 13) && !__LIB_1__::func_489(&(uParam0->f_429[0 /*17*/]), 0))
		{
			__LIB_2__::func_411(&(uParam0->f_429[0 /*17*/]), 1, 0);
		}
		if (bParam3)
		{
			if (!__LIB_1__::func_489(&(uParam0->f_429[1 /*17*/]), 13) && !__LIB_1__::func_489(&(uParam0->f_429[1 /*17*/]), 0))
			{
				__LIB_2__::func_411(&(uParam0->f_429[1 /*17*/]), 1, 0);
			}
		}
	}
	else
	{
		if ((!__LIB_1__::func_489(&(uParam0->f_429[0 /*17*/]), 13) && __LIB_1__::func_489(&(uParam0->f_429[0 /*17*/]), 0)) || bParam2)
		{
			__LIB_2__::func_411(&(uParam0->f_429[0 /*17*/]), 0, 0);
		}
		if (bParam3)
		{
			if ((!__LIB_1__::func_489(&(uParam0->f_429[1 /*17*/]), 13) && __LIB_1__::func_489(&(uParam0->f_429[1 /*17*/]), 0)) || bParam2)
			{
				__LIB_2__::func_411(&(uParam0->f_429[1 /*17*/]), 0, 0);
			}
		}
	}
}

void func_65(var uParam0, bool bParam1)
{
	int iVar0[2];
	char* sVar3[2];
	int iVar6;
	if (bParam1)
	{
		iVar0[0] = 7;
	}
	else
	{
		iVar0[0] = 8;
	}
	iVar0[1] = 10;
	switch (uParam0->f_318)
	{
		case 0:
			if (bParam1)
			{
				sVar3[0] = "RE_ETE_STD_V1_GREET";
				sVar3[1] = "RE_ETE_STD_V1_GREET_ANT";
			}
			else
			{
				sVar3[0] = "RE_ETE_STD_V1_DEFUSE";
				sVar3[1] = "RE_ETE_STD_V1_ANTAGONIZE";
			}
			break;
		case 1:
			if (bParam1)
			{
				sVar3[0] = "RE_ETE_STD_V2_GREET";
				sVar3[1] = "RE_ETE_STD_V2_GREET_ANT";
			}
			else
			{
				sVar3[0] = "RE_ETE_STD_V2_DEFUSE";
				sVar3[1] = "RE_ETE_STD_V2_ANTAGONIZE";
			}
			break;
		case 2:
			if (bParam1)
			{
				sVar3[0] = "RE_ETE_STD_V3_GREET";
				sVar3[1] = "RE_ETE_STD_V3_GREET_ANT";
			}
			else
			{
				sVar3[0] = "RE_ETE_STD_V3_DEFUSE";
				sVar3[1] = "RE_ETE_STD_V3_ANTAGONIZE";
			}
			break;
		case 3:
			if (bParam1)
			{
				sVar3[0] = "RE_ETE_STD_V4_GREET";
				sVar3[1] = "RE_ETE_STD_V4_GREET_ANT";
			}
			else
			{
				sVar3[0] = "RE_ETE_STD_V4_DEFUSE";
				sVar3[1] = "RE_ETE_STD_V4_ANTAGONIZE";
			}
			break;
	}
	__LIB_3__::func_432(&(uParam0->f_429[0 /*17*/]), __LIB_2__::func_460(iVar0[0]), sVar3[0], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	__LIB_3__::func_432(&(uParam0->f_429[1 /*17*/]), __LIB_2__::func_460(iVar0[1]), sVar3[1], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	uParam0->f_494 = bParam1;
	iVar6 = 0;
	while (iVar6 < uParam0->f_365)
	{
		__LIB_2__::func_394(&(uParam0->f_365[iVar6 /*21*/]), &(uParam0->f_429[1 /*17*/]));
		iVar6++;
	}
}

bool func_71(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_188(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_163(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_3__::func_234(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					__LIB_3__::func_433(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_3__::func_344(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*uParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_1(uParam0->f_307[iVar0], 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_73()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_307[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_14.f_311[iVar0]))
			{
				if (__LIB_3__::func_476(Local_14.f_307[iVar0], 1))
				{
					__LIB_2__::func_73(Local_14.f_307[iVar0], &(Local_14.f_311[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_74()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (func_5(&Local_14, 32))
	{
		__LIB_3__::func_473(&(Local_14.f_327));
		return;
	}
	if (func_198(&Local_14))
	{
		bVar1 = (__LIB_0__::func_12() == 105 && __LIB_2__::func_443());
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_2__::func_1(Local_14.f_307[iVar0], 0, 0))
			{
				if (bVar1)
				{
					if (!bVar2)
					{
						func_83(&Local_14, Local_14.f_307[iVar0], Global_35, "CALLOUT_FORGET_FLEEING_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 0, 1);
						bVar2 = true;
					}
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_14.f_307[iVar0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
					__LIB_0__::func_325(&(Local_14.f_311[iVar0]));
				}
				else
				{
					TASK::TASK_COMBAT_PED(Local_14.f_307[iVar0], Global_35, 0, 0);
				}
			}
			iVar0++;
		}
		func_19(&Local_14, 32);
	}
}

void func_75()
{
	bool bVar0;
	bVar0 = __LIB_3__::func_925(&Local_14, &(Local_14.f_307), 0, 2);
	if (!__LIB_0__::func_73(1024))
	{
		if (bVar0)
		{
			__LIB_2__::func_29(1024);
		}
	}
	else if (!bVar0)
	{
		__LIB_1__::func_979(1024);
	}
}

void func_77()
{
	if (Local_14.f_515 || Local_14.f_464 != -1)
	{
		__LIB_3__::func_485(&(Local_14.f_510));
	}
	else
	{
		__LIB_4__::func_42(&(Local_14.f_510));
	}
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_322 = iParam1;
}

bool func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (!__LIB_1__::func_285(&(Local_14.f_331[0 /*3*/]), 10f))
	{
		return false;
	}
	if (!__LIB_2__::func_227(0f, 1, Local_14.f_500, 1))
	{
		return false;
	}
	if (!func_209(&Local_14))
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_307[iVar1], 0, 0))
		{
			if (__LIB_2__::func_227(0f, 1, Local_14.f_307[iVar1], 1))
			{
				*iParam0 = iVar1;
				func_83(&Local_14, Local_14.f_307[iVar1], Global_35, "CALLOUT_FORGET_FLEEING_NEUTRAL", -1073741824 /* Float: -2f */, 1, 1744022339, 1, 1);
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
				if (__LIB_2__::func_1(Local_14.f_307[iVar1], 0, 0))
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
					if (Local_14.f_307[iVar1] == Local_14.f_500)
					{
						fVar2 = 0f;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					__LIB_3__::func_469(0, Global_35, -1);
					__LIB_1__::func_474(Local_14.f_307[iVar1], &iVar0, fVar2, 0, 1, 1);
				}
				iVar1++;
			}
			return true;
		}
	}
}

char* func_82(var uParam0)
{
	if (__LIB_2__::func_155(2, 1) || __LIB_0__::func_181())
	{
		switch (uParam0->f_318)
		{
			case 0:
				return "RE_ETE_STD_V1_PLYFINAL_FEUD";
			case 1:
				return "RE_ETE_STD_V2_PLYFINAL_FEUD";
			case 2:
				return "RE_ETE_STD_V3_PLYFINAL_FEUD";
			case 3:
				return "RE_ETE_STD_V4_PLYFINAL_FEUD";
			default:
				break;
		}
	}
	else
	{
		switch (uParam0->f_318)
		{
			case 0:
				return "RE_ETE_STD_V1_PLYFINAL";
			case 1:
				return "RE_ETE_STD_V2_PLYFINAL";
			case 2:
				return "RE_ETE_STD_V3_PLYFINAL";
			case 3:
				return "RE_ETE_STD_V4_PLYFINAL";
			default:
				break;
		}
	}
	return "RE_ETE_STD_V1_PLYFINAL";
}

bool func_83(var uParam0, int iParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	if (__LIB_2__::func_303(iParam1, iParam2, sParam3, "", fParam4, iParam7, 0, 1, 1, fParam4 >= 0f, bParam5, iParam6, 1, 0, 0))
	{
		if (iParam1 != iParam2 && iParam2 == Global_35)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_307)
			{
				if (__LIB_2__::func_1(uParam0->f_307[iVar0], 0, 0) && iParam1 != uParam0->f_307[iVar0])
				{
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_307[iVar0], Global_35, 6500, 0, 51, 0);
				}
				iVar0++;
			}
		}
		if (bParam8)
		{
			uParam0->f_500 = iParam1;
			if (uParam0->f_321 >= 1)
			{
				func_64(uParam0, 0, 0, 0);
			}
			__LIB_1__::func_148(&(uParam0->f_331[5 /*3*/]));
			__LIB_1__::func_148(&(uParam0->f_331[6 /*3*/]));
			uParam0->f_480 = 0;
		}
		return true;
	}
	return false;
}

bool func_84()
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
		if (__LIB_2__::func_1(Local_14.f_307[iVar0], 0, 0))
		{
			__LIB_0__::func_325(&(Local_14.f_311[iVar0]));
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
			__LIB_1__::func_474(Local_14.f_307[iVar0], &iVar2, fVar1, 0, 1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_307[iVar0], 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_307[iVar0], 5, true);
			PED::SET_PED_KEEP_TASK(Local_14.f_307[iVar0], true);
		}
		iVar0++;
	}
	Local_14.f_50 = 1;
	return true;
}

void func_85()
{
	switch (Local_14.f_499)
	{
		case 0:
			Local_14.f_315 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_14.f_51, Global_36, true);
			break;
		case 1:
			if (Local_14.f_321 > 0)
			{
				Local_14.f_492 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_14.f_356[3], Global_36);
			}
			else
			{
				Local_14.f_490 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_14.f_356[2], Global_36);
			}
			break;
		case 2:
			Local_14.f_489 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_14.f_356[1], Global_36);
			break;
		case 3:
			Local_14.f_488 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_14.f_356[0], Global_36);
			break;
		case 4:
			Local_14.f_491 = Local_14.f_98[0] < 45f;
			break;
	}
	Local_14.f_499++;
	Local_14.f_499 = (Local_14.f_499 % 5);
	if (!func_5(&Local_14, 1))
	{
		if (func_217())
		{
			func_20(1);
			func_218();
			__LIB_4__::func_33(&Local_14, 3);
		}
	}
}

int func_87()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Local_14.f_48)
	{
		if (Local_14.f_98[0] > (20f + 3f) && Local_14.f_321 < 1)
		{
			return -1;
		}
	}
	iVar2 = 1;
	iVar3 = -1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_307[iVar1]))
		{
		}
		else
		{
			iVar0 = func_220(&(Local_14.f_307[iVar1]), &(Local_14.f_365[iVar1 /*21*/]), 20f, &(Local_14.f_429), &iVar2, 2f, 1, 0, "", 524288 | __LIB_2__::func_340(3, 0, 0), Local_14.f_356[6], 0, 2, 1, Local_14.f_98[iVar1], 0);
			if (__LIB_2__::func_341(&(Local_14.f_365[iVar1 /*21*/])))
			{
				if (!Local_14.f_493)
				{
					if (Local_14.f_465 == -1)
					{
						Local_14.f_465 = iVar1;
					}
					if (Local_14.f_365[iVar1 /*21*/].f_1 == 0)
					{
						if (!__LIB_2__::func_703(&(Local_14.f_429[0 /*17*/]), 0))
						{
							if (Local_14.f_321 >= 1)
							{
								__LIB_2__::func_482(&(Local_14.f_429[0 /*17*/]), 1, 1);
							}
						}
					}
					else if (Local_14.f_365[iVar1 /*21*/].f_1 == 1)
					{
						if (!__LIB_2__::func_703(&(Local_14.f_429[1 /*17*/]), 0) && !Local_14.f_494)
						{
							__LIB_2__::func_592(&(Local_14.f_429), 1, 1);
						}
					}
					__LIB_2__::func_504(Local_14.f_500, 250);
					if (Local_14.f_365[iVar1 /*21*/].f_1 != -1)
					{
						func_64(&Local_14, 0, 0, 1);
						Local_14.f_500 = Global_35;
					}
					__LIB_3__::func_930();
					Local_14.f_493 = 1;
					Local_14.f_495 = 1;
				}
			}
			if (iVar0 != -1)
			{
				iVar3 = iVar0;
				Local_14.f_493 = 0;
				if (iVar3 != -1)
				{
					Local_14.f_464 = iVar3;
				}
			}
		}
		iVar1++;
	}
	return iVar3;
}

bool func_88(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	else if (iParam0 == 1)
	{
		return true;
	}
	if (func_227())
	{
		return false;
	}
	if (Local_14.f_488)
	{
		if (!Local_14.f_490)
		{
			if (!func_228(&Local_14))
			{
				if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_307[0], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_307[1], Global_35, 17)) || ((Local_14.f_318 == 0 || Local_14.f_318 == 2) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_307[2], Global_35, 17)))
				{
					if (__LIB_4__::func_45() && Local_14.f_483 >= 4f)
					{
						return false;
					}
					return true;
				}
			}
			else if (PED::_0x7F9B9791D4CB71F6(Local_14.f_307[0], Global_35, 1, 0) == 1)
			{
				return true;
			}
		}
	}
	else if (Local_14.f_485 < 40f)
	{
		if (!Local_14.f_490 && Local_14.f_483 < (Local_14.f_485 + 2f))
		{
			if (__LIB_4__::func_45() && Local_14.f_483 >= 4f)
			{
				return false;
			}
			if (__LIB_1__::func_285(&(Local_14.f_331[7 /*3*/]), 5f))
			{
				return true;
			}
		}
	}
	return false;
}

void func_92()
{
	if (!Local_14.f_491)
	{
		if (Local_14.f_481 <= 0)
		{
			return;
		}
	}
	if (!func_5(&Local_14, 16))
	{
		if (func_232())
		{
			func_233();
			func_19(&Local_14, 16);
		}
	}
	if (func_227())
	{
		return;
	}
	if (Local_14.f_481 > 0)
	{
		func_234();
	}
	switch (Local_14.f_318)
	{
		case 0:
		case 2:
			func_235();
			break;
		case 1:
		case 3:
			func_236();
			break;
	}
}

bool func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	iVar0 = -1;
	iVar0 = func_87();
	if (iVar0 == -1)
	{
		if (Local_14.f_500 != Global_35 && __LIB_1__::func_285(&(Local_14.f_331[5 /*3*/]), 3f))
		{
			func_65(&Local_14, 0);
			func_64(&Local_14, 1, 0, 1);
			__LIB_0__::func_37(&(Local_14.f_331[5 /*3*/]));
		}
	}
	if (__LIB_2__::func_1(Local_14.f_307[0], 0, 0))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_14.f_307[0], false);
		Local_14.f_483 = Local_14.f_98[0];
		Local_14.f_484 = __LIB_0__::func_94(Local_14.f_307[0], __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */), 1);
	}
	switch (iVar0)
	{
		case 0:
			func_240();
			func_241(&Local_14, 10);
			break;
		case 1:
			func_240();
			if (Local_14.f_324 < 1)
			{
				__LIB_1__::func_148(&(Local_14.f_331[1 /*3*/]));
				func_241(&Local_14, 1);
			}
			else
			{
				func_241(&Local_14, 12);
			}
			break;
	}
	if (Local_14.f_324 > 9)
	{
		func_20(0);
	}
	switch (Local_14.f_324)
	{
		case 0:
			if (func_243() || Local_14.f_464 == 1)
			{
				__LIB_1__::func_283(&(Local_14.f_331[1 /*3*/]), 0);
				__LIB_2__::func_504(Local_14.f_307[0], 0);
				func_241(&Local_14, 1);
			}
			break;
		case 1:
			if (func_244() || Local_14.f_464 == 1)
			{
				func_245();
				Local_14.f_515 = 1;
				__LIB_2__::func_504(Local_14.f_307[1], 0);
				if (__LIB_2__::func_1(Local_14.f_307[2], 0, 0))
				{
					__LIB_2__::func_504(Local_14.f_307[2], 0);
				}
				if (!func_228(&Local_14))
				{
					PED::_0x89F5E7ADECCCB49C(Local_14.f_307[1], "intimidate");
					if (__LIB_2__::func_1(Local_14.f_307[2], 0, 0))
					{
						PED::_0x89F5E7ADECCCB49C(Local_14.f_307[2], "brave");
					}
				}
				func_241(&Local_14, 2);
			}
			break;
		case 2:
			if (func_246())
			{
				if (func_247())
				{
					__LIB_1__::func_148(&(Local_14.f_331[1 /*3*/]));
					func_241(&Local_14, 7);
				}
				else if (Local_14.f_498)
				{
					func_248();
					func_249(&Local_14, 8);
					func_241(&Local_14, 4);
				}
				else
				{
					func_250();
					func_249(&Local_14, 8);
					__LIB_2__::func_360(&(Local_14.f_429[0 /*17*/]), __LIB_2__::func_460(8));
					func_241(&Local_14, 3);
				}
			}
			break;
		case 3:
			func_252();
			if (__LIB_1__::func_285(&(Local_14.f_331[1 /*3*/]), 8f) && !func_227())
			{
				if (func_247())
				{
					__LIB_1__::func_148(&(Local_14.f_331[1 /*3*/]));
					func_241(&Local_14, 7);
				}
				else
				{
					func_253();
					func_241(&Local_14, 9);
				}
				else
				{
					Jump @1574; //curOff = 759
					func_252();
					if (func_254())
					{
						func_255();
						__LIB_2__::func_592(&(Local_14.f_429), 1, 1);
						func_241(&Local_14, 5);
					}
					Jump @1574; //curOff = 795
					func_252();
					if (__LIB_2__::func_227(-6f, 1, Local_14.f_500, 1))
					{
						func_256();
						func_241(&Local_14, 19);
					}
					Jump @1574; //curOff = 833
					if (__LIB_2__::func_227(-4f, 1, 0, 0))
					{
						func_241(&Local_14, 19);
					}
					Jump @1574; //curOff = 859
					if (func_257())
					{
						if (__LIB_2__::func_227(0f, 1, Local_14.f_500, 1))
						{
							iVar2 = 0;
							while (iVar2 <= 2)
							{
								if (__LIB_2__::func_1(Local_14.f_307[iVar2], 0, 0))
								{
									__LIB_2__::func_357(Local_14.f_307[iVar2], Global_36, 5, 1, 2);
									PED::SET_PED_USING_ACTION_MODE(Local_14.f_307[iVar2], true, -1, 0);
									__LIB_3__::func_469(Local_14.f_307[iVar2], Global_35, -1);
								}
								iVar2++;
							}
							sVar3 = func_258(&Local_14, 0, &iVar1);
							func_83(&Local_14, Local_14.f_307[0], Global_35, sVar3, -1073741824 /* Float: -2f */, 1, 1744022339, iVar1, 1);
							__LIB_2__::func_592(&(Local_14.f_429), 1, 1);
							func_241(&Local_14, 8);
						}
					}
					Jump @1574; //curOff = 1038
					if (__LIB_2__::func_227(0f, 1, Local_14.f_500, 1) && __LIB_2__::func_227(-5f, 1, 0, 0))
					{
						func_241(&Local_14, 19);
					}
					Jump @1574; //curOff = 1081
					func_252();
					if (__LIB_1__::func_285(&(Local_14.f_331[1 /*3*/]), 2f))
					{
						__LIB_1__::func_283(&(Local_14.f_331[2 /*3*/]), 0);
						if (__LIB_1__::func_285(&(Local_14.f_331[2 /*3*/]), 5f) && !func_227())
						{
							func_259();
							__LIB_1__::func_148(&(Local_14.f_331[2 /*3*/]));
							func_19(&Local_14, 4);
							func_241(&Local_14, 14);
						}
						else if (func_247())
						{
							__LIB_1__::func_148(&(Local_14.f_331[2 /*3*/]));
							func_19(&Local_14, 4);
							if (Local_14.f_98[0] < Local_14.f_482)
							{
								Local_14.f_482 = (Local_14.f_98[0] - 1f);
							}
							func_241(&Local_14, 16);
						}
					}
					Jump @1574; //curOff = 1241
					func_260();
					func_19(&Local_14, 4);
					func_241(&Local_14, 11);
					Jump @1574; //curOff = 1263
					if (!Local_14.f_496)
					{
						if (__LIB_2__::func_227(-5f, 1, Local_14.f_500, 1))
						{
							func_261();
							Local_14.f_496 = 1;
						}
					}
					if (__LIB_1__::func_285(&(Local_14.f_331[2 /*3*/]), 3f))
					{
						func_241(&Local_14, 16);
					}
					Jump @1574; //curOff = 1328
					__LIB_2__::func_592(&(Local_14.f_429), 1, 1);
					func_241(&Local_14, 19);
					Jump @1574; //curOff = 1350
					if (__LIB_1__::func_285(&(Local_14.f_331[2 /*3*/]), 1.5f))
					{
						__LIB_2__::func_592(&(Local_14.f_429), 1, 1);
						func_241(&Local_14, 19);
					}
					Jump @1574; //curOff = 1392
					if (__LIB_1__::func_285(&(Local_14.f_331[2 /*3*/]), 3f))
					{
						func_241(&Local_14, 16);
					}
					Jump @1574; //curOff = 1419
					if (func_247())
					{
						func_241(&Local_14, 17);
					}
					else if ((__LIB_1__::func_285(&(Local_14.f_331[2 /*3*/]), 10f) && (ENTITY::GET_ENTITY_SPEED(Global_35) < 0.5f || Local_14.f_483 >= Local_14.f_484)) && Local_14.f_483 < 10f)
					{
						__LIB_2__::func_592(&(Local_14.f_429), 1, 1);
						func_241(&Local_14, 19);
					}
					Jump @1574; //curOff = 1530
					if (func_247())
					{
						func_241(&Local_14, 7);
					}
					Jump @1574; //curOff = 1547
					Jump @1574; //curOff = 1550
					if (func_262())
					{
						return true;
					}
					Jump @1574; //curOff = 1564
					return true;
				}
				return false;
			}
			default:
				break;
	}
}

void func_99(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 0))
			{
				__LIB_4__::func_43((*uParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, uParam1[iVar0]))
				{
					__LIB_2__::func_32(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_288((*uParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_3__::func_468(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		func_188(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_276(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_277(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_101(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (__LIB_2__::func_1(Local_14.f_307[iParam0], 0, 0))
	{
		PED::_0x58F7DB5BD8FA2288(Local_14.f_307[iParam0]);
		PED::_0x58F7DB5BD8FA2288(Local_14.f_307[iParam0]);
		if (bParam1)
		{
			PLAYER::_0xA3DB37EDF9A74635(iVar0, Local_14.f_307[iParam0], 3, 1, 1);
			PLAYER::_0xA3DB37EDF9A74635(iVar0, Local_14.f_307[iParam0], 4, 1, 1);
			PLAYER::_0xA3DB37EDF9A74635(iVar0, Local_14.f_307[iParam0], 7, 1, 1);
		}
	}
}

void func_143(var uParam0)
{
	uParam0->f_356[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volAvoidance");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[4], 2359.092f, -1421.56f, 45.33163f, 0f, 0f, -1.99997f, 6.585349f, 12.54345f, 3.426f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[4], 2350.49f, -1408.312f, 45.33163f, 0f, 0f, 71.00001f, 3.489247f, 7.811243f, 3.425777f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[4], 2355.655f, -1412.669f, 45.33163f, 0f, 0f, 30.00001f, 3.489247f, 7.811243f, 3.425777f);
	uParam0->f_356[5] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(2355.992f, -1421.836f, 41.3914f, 0f, 0f, 19.99999f, 55f, 55f, 55f, "volRestriction");
	uParam0->f_356[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2355.992f, -1421.836f, 41.3914f, 0f, 0f, 70.00002f, 8f, 8f, 6f, "volTrigger");
	uParam0->f_356[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2355.885f, -1421.8f, 41.34521f, 0f, 0f, 70f, 11f, 11f, 6f, "volTriggerHeadLook");
	uParam0->f_356[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volILO");
	VOLUME::_0xBCE668AAF83608BE(uParam0->f_356[6], 2366.74f, -1422.255f, 44.43055f, 0f, 0f, -91.5616f, 20.04471f, 11.15886f, 3f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[6], 2361.172f, -1422.089f, 46.04272f, 0f, 0f, -91.5616f, 40.08969f, 10.93277f, 3f);
	uParam0->f_356[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[2], 2349.426f, -1426.544f, 48.04359f, 0f, 0f, 177.8593f, 11.45307f, 20.56424f, 8.5f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[2], 2349.077f, -1416.859f, 48.04359f, 0f, 0f, -149.5772f, 11.45307f, 5.932232f, 8.5f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[2], 2346.184f, -1412.446f, 48.04359f, 0f, 0f, -18.75681f, 11.45307f, 5.932232f, 8.5f);
	uParam0->f_356[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volLeaveSpecial");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[3], 2349.426f, -1426.544f, 48.04359f, 0f, 0f, 177.8593f, 11.45307f, 20.56424f, 8.5f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[3], 2349.077f, -1416.859f, 48.04359f, 0f, 0f, -149.5772f, 11.45307f, 5.932232f, 8.5f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[3], 2346.184f, -1412.446f, 48.04359f, 0f, 0f, -18.75681f, 11.45307f, 5.932232f, 8.5f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[3], 2348.596f, -1410.837f, 48.04359f, 0f, 0f, 87.00005f, 11.45307f, 14.97555f, 8.5f);
	uParam0->f_356[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volGunfire");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 2346.184f, -1412.446f, 48.04359f, 0f, 0f, -18.75681f, 11.45307f, 5.932232f, 8.5f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 2349.426f, -1426.544f, 48.04359f, 0f, 0f, 177.8593f, 11.45307f, 20.56424f, 8.5f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 2349.077f, -1416.859f, 48.04359f, 0f, 0f, -149.5772f, 11.45307f, 5.932232f, 8.5f);
}

void func_144(var uParam0)
{
	uParam0->f_356[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2481.615f, -1490.187f, 45.33163f, 0f, 0f, 97.44884f, 8f, 23.84871f, 3.425777f, "volAvoidance");
	uParam0->f_356[5] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(2481.61f, -1489.811f, 46.47475f, 0f, 0f, 19.99999f, 60f, 60f, 60f, "volRestriction");
	uParam0->f_356[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2481.61f, -1489.811f, 46.47475f, 0f, 0f, 70.00002f, 8f, 8f, 1.872454f, "volTrigger");
	uParam0->f_356[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2481.61f, -1489.811f, 46.47475f, 0f, 0f, 70.00002f, 11f, 11f, 1.872454f, "volTriggerHeadLook");
	uParam0->f_356[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volILO");
	VOLUME::_0xBCE668AAF83608BE(uParam0->f_356[6], 2480.174f, -1481.284f, 44.43055f, 0f, 0f, 9.70794f, 19.37479f, 11.04326f, 3f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[6], 2480.816f, -1486.419f, 46.04272f, 0f, 0f, 17.70794f, 43.03735f, 6.898358f, 3f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[6], 2481.224f, -1486.839f, 46.04272f, 0f, 0f, 3.707942f, 43.03735f, 6.898358f, 3f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[6], 2481.311f, -1487.413f, 46.04272f, 0f, 0f, 8.707941f, 43.03735f, 6.898358f, 3f);
	uParam0->f_356[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[2], 2490.426f, -1495.638f, 41.33596f, 0f, 0f, 97.43935f, 11.45307f, 22.11825f, 18.28401f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[2], 2469.827f, -1499.94f, 41.33596f, 0f, 0f, 106.4393f, 11.45307f, 22.11825f, 18.28401f);
	uParam0->f_356[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volLeaveSpecial");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[3], 2490.426f, -1495.638f, 41.33596f, 0f, 0f, 97.43935f, 11.45307f, 22.11825f, 18.28401f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[3], 2469.827f, -1499.94f, 41.33596f, 0f, 0f, 106.4393f, 11.45307f, 22.11825f, 18.28401f);
	uParam0->f_356[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volGunfire");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 2481.456f, -1496.809f, 34.73368f, 0f, 0f, 97.43935f, 43.96677f, 61.59657f, 18.28401f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 2460.604f, -1492.015f, 47.15677f, 0f, 0f, 106.4393f, 1.472394f, 2.960552f, 3.341793f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 2461.642f, -1456.285f, 47.15677f, 0f, 0f, 154.926f, 9.894988f, 4.656751f, 8.947354f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 2470.778f, -1459.601f, 47.15677f, 0f, 0f, 163.926f, 9.894988f, 4.656751f, 8.947354f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 2480.23f, -1461.705f, 47.15677f, 0f, 0f, 169.926f, 9.894988f, 4.656751f, 8.947354f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 2480.802f, -1449.137f, 47.15677f, 0f, 0f, 89.43931f, 28.63529f, 9.029835f, 8.947354f);
}

void func_145(var uParam0)
{
	uParam0->f_356[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2437.916f, -1475.945f, 45.33163f, 0f, 0f, 87.44884f, 6.535769f, 15.7648f, 3.425777f, "volAvoidance");
	uParam0->f_356[5] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(2439f, -1477.2f, 45.4f, 0f, 0f, 19.99999f, 60f, 60f, 60f, "volRestriction");
	uParam0->f_356[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2439f, -1477.2f, 45.4f, 0f, 0f, 70.00002f, 9f, 9f, 1.872454f, "volTrigger");
	uParam0->f_356[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2439f, -1477.2f, 45.4f, 0f, 0f, 70.00002f, 13f, 13f, 1.872454f, "volTriggerHeadLook");
	uParam0->f_356[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volILO");
	VOLUME::_0xBCE668AAF83608BE(uParam0->f_356[6], 2439.329f, -1468.278f, 44.43055f, 0f, 0f, -2f, 20.57613f, 10.42412f, 3f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[6], 2439.075f, -1475.143f, 46.04272f, 0f, 0f, -1.999999f, 41.91213f, 6.898358f, 3f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[6], 2439.193f, -1471.767f, 46.04272f, 0f, 0f, -1.999999f, 41.10165f, 6.898358f, 3f);
	uParam0->f_356[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[2], 2435.491f, -1484.325f, 41.33596f, 0f, 0f, 88f, 11.45307f, 18.38813f, 18.28401f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[2], 2450.682f, -1486.405f, 41.33596f, 0f, 0f, 74.89835f, 11.45307f, 15.18096f, 18.28401f);
	uParam0->f_356[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volLeaveSpecial");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[3], 2435.491f, -1485.995f, 41.33596f, 0f, 0f, 88f, 11.45307f, 18.38813f, 18.28401f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[3], 2450.682f, -1488.076f, 41.33596f, 0f, 0f, 74.89835f, 11.45307f, 15.18096f, 18.28401f);
}

void func_146(var uParam0)
{
	uParam0->f_356[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2802.931f, -1227.268f, 48.132f, 0f, 0f, 87.44884f, 8.066474f, 5.352324f, 3.425777f, "volAvoidance");
	uParam0->f_356[5] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(2802.931f, -1227.268f, 48.132f, 0f, 0f, 19.99999f, 50f, 50f, 50f, "volRestriction");
	uParam0->f_356[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2802.931f, -1227.268f, 48.132f, 0f, 0f, 70.00002f, 8f, 8f, 1.872454f, "volTrigger");
	uParam0->f_356[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2802.931f, -1227.268f, 48.132f, 0f, 0f, 70.00002f, 13f, 13f, 1.872454f, "volTriggerHeadLook");
	uParam0->f_356[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volILO");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[6], 2809.939f, -1227.461f, 47.80409f, 0f, 0f, 4f, 15.74124f, 26.98112f, 5.627087f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[6], 2806.535f, -1240.933f, 47.80409f, 0f, 0f, -16f, 15.74124f, 26.98112f, 5.627087f);
	uParam0->f_356[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[2], 2792.503f, -1223.224f, 48.132f, 0f, 0f, 93f, 11.45307f, 18.38813f, 18.28401f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[2], 2796.437f, -1227.087f, 48.132f, 0f, 0f, 157.2016f, 11.45307f, 1.967644f, 18.28401f);
	uParam0->f_356[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2792.322f, -1226.895f, 48.132f, 0f, 0f, 87.99999f, 16.17267f, 18.38813f, 18.28401f, "volLeaveSpecial");
	uParam0->f_356[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volGunfire");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 2796.437f, -1227.087f, 48.132f, 0f, 0f, 157.2016f, 11.45307f, 1.967644f, 18.28401f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 2792.503f, -1223.224f, 48.132f, 0f, 0f, 93f, 11.45307f, 18.38813f, 18.28401f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 2821.741f, -1234.392f, 48.132f, 0f, 0f, 145f, 9.506063f, 4.220686f, 18.28401f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 2817.688f, -1231.57f, 48.132f, 0f, 0f, 175f, 1.49644f, 4.220686f, 18.28401f);
}

void func_147(var uParam0)
{
	uParam0->f_356[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1352.548f, -1262.52f, 77.80156f, 0f, 0f, 70.44884f, 9.486065f, 23.98369f, 3.425777f, "volAvoidance");
	uParam0->f_356[5] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1351.49f, -1259.158f, 78.13533f, 0f, 0f, 0f, 60f, 60f, 60f, "volRestriction");
	uParam0->f_356[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1351.49f, -1259.158f, 78.13533f, 0f, 0f, 70.00003f, 10f, 10f, 2.5f, "volTrigger");
	uParam0->f_356[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1351.49f, -1259.158f, 78.13533f, 0f, 0f, 70.00003f, 13f, 13f, 2.5f, "volTriggerHeadLook");
	uParam0->f_356[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volILO");
	VOLUME::_0xBCE668AAF83608BE(uParam0->f_356[6], 1352.894f, -1254.122f, 78.49686f, 0f, 0f, -21.38857f, 18.16649f, 9.36652f, 3.187529f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[6], 1351.046f, -1258.798f, 79.04047f, 0f, 0f, -21.38857f, 36.50782f, 6.898358f, 5.363967f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[6], 1345.281f, -1262.595f, 77.55599f, 0f, 0f, -20f, 8.649118f, 6.691235f, 5f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[6], 1359.496f, -1267.865f, 77.55599f, 0f, 0f, -23f, 10.62437f, 7.700585f, 5f);
	uParam0->f_356[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[2], 1355.305f, -1269.654f, 74.33895f, 0f, 0f, 68.00002f, 11.45307f, 18.38813f, 18.28401f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[2], 1345.839f, -1275.037f, 74.33895f, 0f, 0f, 137.8984f, 11.45307f, 15.18096f, 18.28401f);
	uParam0->f_356[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volLeaveSpecial");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[3], 1353.735f, -1273.54f, 74.37292f, 0f, 0f, 68.00002f, 11.45307f, 18.38813f, 18.28401f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[3], 1345.123f, -1277.858f, 74.37292f, 0f, 0f, 137.8984f, 11.45307f, 15.18096f, 18.28401f);
	uParam0->f_356[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1347.519f, -1268.598f, 79.04047f, 0f, 0f, -21.38857f, 38.28065f, 13.52188f, 11.8531f, "volGunfire");
}

void func_148(var uParam0)
{
	uParam0->f_356[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1295.354f, -1344.131f, 78.13533f, 0f, 0f, 70.00003f, 8f, 8f, 2.5f, "volAvoidance");
	uParam0->f_356[5] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1295.354f, -1344.131f, 78.13533f, 0f, 0f, 0f, 38f, 38f, 38f, "volRestriction");
	uParam0->f_356[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1295.354f, -1344.131f, 78.13533f, 0f, 0f, 70.00003f, 16f, 16f, 2.5f, "volTrigger");
	uParam0->f_356[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1295.354f, -1344.131f, 78.13533f, 0f, 0f, 70.00003f, 20f, 20f, 2.5f, "volTriggerHeadLook");
	uParam0->f_356[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1295.354f, -1344.131f, 78.13533f, 0f, 0f, -21.38857f, 20f, 20f, 4f, "volILO");
	uParam0->f_356[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1308.615f, -1352.026f, 74.33895f, 0f, 0f, 162f, 11.45307f, 20.38813f, 18.28401f, "volDontApproach");
	uParam0->f_356[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1308.615f, -1352.026f, 74.33895f, 0f, 0f, 162f, 11.45307f, 20.38813f, 18.28401f, "volLeaveSpecial");
	uParam0->f_356[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volGunfire");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 1312.336f, -1353.235f, 74.33895f, 0f, 0f, 162f, 18.46553f, 19.81668f, 25.11803f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 1313.737f, -1357.91f, 74.33895f, 0f, 0f, 142f, 18.46553f, 19.81668f, 25.11803f);
}

void func_149(var uParam0)
{
	uParam0->f_356[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1392.874f, -1310.944f, 78.13533f, 0f, 0f, 70.00003f, 11f, 11f, 2.5f, "volAvoidance");
	uParam0->f_356[5] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1392.874f, -1310.944f, 78.13533f, 0f, 0f, 0f, 60f, 60f, 60f, "volRestriction");
	uParam0->f_356[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1392.874f, -1310.944f, 78.13533f, 0f, 0f, 70.00003f, 10.5f, 10.5f, 2.5f, "volTrigger");
	uParam0->f_356[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1392.874f, -1310.944f, 78.13533f, 0f, 0f, 70.00003f, 14.5f, 14.5f, 2.5f, "volTriggerHeadLook");
	uParam0->f_356[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volILO");
	VOLUME::_0xBCE668AAF83608BE(uParam0->f_356[6], 1392.874f, -1310.944f, 78.13533f, 0f, 0f, 70.00003f, 20f, 20f, 2.5f);
	uParam0->f_356[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volGunfire");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 1391.794f, -1329.702f, 79.33273f, 0f, 0f, 17.03527f, 2.0198f, 3.554839f, 3.033877f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 1390.177f, -1303.995f, 79.33273f, 0f, 0f, -26.96474f, 1.628754f, 4.196584f, 1.933624f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 1380.052f, -1313.042f, 79.33273f, 0f, 0f, 49.03527f, 2.696761f, 4.196584f, 1.933624f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 1382.822f, -1304.423f, 78.6823f, 0f, 0f, 40.03526f, 1.274845f, 3.864339f, 3.111284f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 1405.018f, -1302.858f, 79.2057f, 0f, 0f, 12.03527f, 0.595659f, 3.952965f, 4.058104f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 1399.541f, -1304.149f, 79.2057f, 0f, 0f, 12.03527f, 1.131549f, 3.204172f, 4.058104f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 1387.898f, -1324.363f, 79.33273f, 0f, 0f, 65.03527f, 1.505351f, 4.265281f, 3.033877f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 1391.817f, -1310.087f, 78.26695f, 0f, 0f, -0.96473f, 1.567469f, 2.648976f, 4.058104f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_356[7], 1379.425f, -1290.664f, 78.6823f, 0f, 0f, -21.96474f, 13.81176f, 17.83206f, 10.94466f);
}

int func_152(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	switch (uParam0->f_318)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("G_M_O_UNIEXCONFEDS_01");
					break;
				case 1:
					iVar0 = joaat("G_M_Y_UNIEXCONFEDS_01");
					break;
				case 2:
					iVar0 = joaat("G_M_Y_UNIEXCONFEDS_01");
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("G_M_Y_UNIEXCONFEDS_01");
					break;
				case 1:
					iVar0 = joaat("G_M_Y_UNIEXCONFEDS_01");
					break;
				case 2:
					iVar0 = joaat("G_M_Y_UNIEXCONFEDS_01");
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("G_M_Y_UNIEXCONFEDS_01");
					break;
				case 1:
					iVar0 = joaat("G_M_Y_UNIEXCONFEDS_01");
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("G_M_O_UNIEXCONFEDS_01");
					break;
				case 1:
					iVar0 = joaat("G_M_O_UNIEXCONFEDS_01");
					break;
			}
			break;
	}
	return iVar0;
}

char* func_153(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_322(uParam0, iParam1);
	return func_323(iVar0);
}

int func_154(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = joaat("META_OUTFIT_DEFAULT");
	switch (uParam0->f_318)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = 790809979;
					break;
				case 1:
					iVar0 = 735252120;
					break;
				case 2:
					iVar0 = -279341646;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1230995956;
					break;
				case 1:
					iVar0 = 314268789;
					break;
				case 2:
					iVar0 = 8501250;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1029007840;
					break;
				case 1:
					iVar0 = 1568403945;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1720302664;
					break;
				case 1:
					iVar0 = 8501250;
					break;
			}
			break;
	}
	return iVar0;
}

struct<4> func_155(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_326)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2356.004f, -1421.75f, 44.5329f };
					Var0.f_3 = -95f;
					break;
				case 1:
					Var0 = { 2356.25f, -1422.886f, 44.533f };
					Var0.f_3 = -1.6f;
					break;
				case 2:
					Var0 = { 2355.959f, -1420.457f, 44.5334f };
					Var0.f_3 = -129f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2481.68f, -1490.227f, 44.96912f };
					Var0.f_3 = 10.2f;
					break;
				case 1:
					Var0 = { 2480.134f, -1490.089f, 44.96912f };
					Var0.f_3 = 297.25f;
					break;
				case 2:
					Var0 = { 2482.749f, -1489.998f, 44.96912f };
					Var0.f_3 = 60.85f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2439.29f, -1478.1f, 44.83062f };
					Var0.f_3 = -2.26f;
					break;
				case 1:
					Var0 = { 2440.452f, -1477.94f, 44.84072f };
					Var0.f_3 = 87.82f;
					break;
				case 2:
					Var0 = { 2438.028f, -1478.036f, 44.80439f };
					Var0.f_3 = -42.69f;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2802.52f, -1227.159f, 46.77555f };
					Var0.f_3 = -93.51f;
					break;
				case 1:
					Var0 = { 2802.73f, -1228.408f, 46.77374f };
					Var0.f_3 = -12.4f;
					break;
				case 2:
					Var0 = { 2802.828f, -1226.211f, 46.77777f };
					Var0.f_3 = -134.6f;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1349.99f, -1261.375f, 77.202f };
					Var0.f_3 = -20.68f;
					break;
				case 1:
					Var0 = { 1351.294f, -1261.448f, 77.2f };
					Var0.f_3 = 33.3f;
					break;
				case 2:
					Var0 = { 1348.989f, -1261f, 77.161f };
					Var0.f_3 = -64.16f;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1295.69f, -1344.375f, 76.402f };
					Var0.f_3 = 22.92f;
					break;
				case 1:
					Var0 = { 1296.59f, -1343.375f, 76.402f };
					Var0.f_3 = 81.52f;
					break;
				case 2:
					Var0 = { 1294.49f, -1344.075f, 76.402f };
					Var0.f_3 = -56.08f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1393f, -1310.775f, 76.702f };
					Var0.f_3 = 271.8f;
					break;
				case 1:
					Var0 = { 1393.29f, -1312.075f, 76.65f };
					Var0.f_3 = 330.1f;
					break;
				case 2:
					Var0 = { 1393.29f, -1309.375f, 76.702f };
					Var0.f_3 = 220.9f;
					break;
			}
			break;
	}
	return Var0;
}

struct<4> func_156(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_326)
	{
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1390.67f, -1312.948f, 76.61274f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1346.76f, -1260.17f, 77.18041f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1293.51f, -1345.959f, 76.44407f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2357.074f, -1424.344f, 44.53337f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2484.045f, -1490.389f, 45.97003f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2441.725f, -1478.613f, 45.61953f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					Var0 = { 0f, 0f, 0f };
					Var0.f_3 = 0f;
					break;
			}
			break;
	}
	return Var0;
}

int func_162(var uParam0, int iParam1)
{
	switch (uParam0->f_326)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL_MALE_D");
				case 1:
					return joaat("WORLD_HUMAN_LEAN_WALL_LEFT_SMOKING_MALE_C");
				case 2:
					return joaat("WORLD_HUMAN_SMOKE_MALE_A");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL_MALE_D");
				case 1:
					return joaat("WORLD_HUMAN_STAND_DRINK_MALE_A");
				case 2:
					return joaat("WORLD_HUMAN_SMOKE_MALE_A");
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL_MALE_D");
				case 1:
					return joaat("WORLD_HUMAN_LEAN_WALL_LEFT_SMOKING_MALE_C");
				case 2:
					return joaat("WORLD_HUMAN_SMOKE_MALE_A");
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL_MALE_D");
				case 1:
					return joaat("WORLD_HUMAN_LEAN_WALL_LEFT_SMOKING_MALE_C");
				case 2:
					return joaat("WORLD_HUMAN_SMOKE_MALE_A");
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL_MALE_D");
				case 1:
					return joaat("WORLD_HUMAN_SMOKE_MALE_A");
				case 2:
					return joaat("WORLD_HUMAN_SMOKE_MALE_A");
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_SMOKE_MALE_C");
				case 1:
					return joaat("WORLD_HUMAN_SMOKE_MALE_A");
				case 2:
					return joaat("WORLD_HUMAN_STAND_DRINK_MALE_A");
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_SMOKE_MALE_C");
				case 1:
					return joaat("WORLD_HUMAN_SMOKE_MALE_A");
				case 2:
					return joaat("WORLD_HUMAN_SMOKE_MALE_A");
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_188(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_3__::func_179(uParam0) };
	iVar3 = func_276(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

bool func_198(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_356[7]))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_356[7], Global_36))
		{
			__LIB_3__::func_472(&(uParam0->f_307), 0, (uParam0->f_307 - 1), 0);
			return true;
		}
	}
	if (uParam0->f_486 == 0f)
	{
		if (__LIB_0__::func_12() == 105)
		{
			if (__LIB_2__::func_443())
			{
				uParam0->f_486 = uParam0->f_98[0];
			}
		}
	}
	return __LIB_4__::func_161(&(uParam0->f_327), uParam0, &(uParam0->f_307), uParam0->f_486);
}

bool func_209(var uParam0)
{
	if (uParam0->f_487 <= 0f)
	{
		return false;
	}
	if ((uParam0->f_315 > func_406(uParam0) && uParam0->f_315 > (uParam0->f_487 + 10f)) && __LIB_2__::func_227(0f, 1, uParam0->f_307[0], 1))
	{
		return true;
	}
	return false;
}

bool func_217()
{
	bool bVar0;
	if (func_408(&Local_14, &(Local_14.f_197), &(Local_14.f_307), 0, &(Local_14.f_5.f_16), 0, 2, 1))
	{
		if (Local_14.f_5.f_16 == 8192)
		{
			if (!__LIB_3__::func_477(Global_35, Local_14.f_307[0]))
			{
				bVar0 = true;
			}
			else if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_307[0], Global_35, 17) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_307[1], Global_35, 17))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_1();
				return false;
			}
		}
		__LIB_3__::func_470(&(Local_14.f_327), Local_14.f_5.f_16);
		return true;
	}
	if (func_5(&Local_14, 64))
	{
		return true;
	}
	return false;
}

void func_218()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	__LIB_2__::func_504(Local_14.f_307[0], 0);
	func_22(1);
	if (!func_23(&Local_14, 4))
	{
		sVar1 = func_411(&Local_14, iVar0, &iVar2);
		func_83(&Local_14, Local_14.f_307[0], Global_35, sVar1, -1073741824 /* Float: -2f */, 1, 1744022339, iVar2, 1);
		func_249(&Local_14, 4);
	}
	if (!Local_14.f_48)
	{
		__LIB_3__::func_426(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
	}
	func_19(&Local_14, 1);
	iVar3 = 68157440;
	iVar4 = 4096;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_307[iVar0], 0, 1))
		{
			if (iVar0 != 0)
			{
				__LIB_2__::func_504(Local_14.f_307[iVar0], 0);
			}
			if (!func_23(&Local_14, 4))
			{
				sVar1 = func_411(&Local_14, iVar0, &iVar2);
				func_83(&Local_14, Local_14.f_307[iVar0], Global_35, sVar1, -1073741824 /* Float: -2f */, 1, 1744022339, iVar2, 1);
				func_249(&Local_14, 4);
			}
			__LIB_2__::func_73(Local_14.f_307[iVar0], &(Local_14.f_311[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			__LIB_2__::func_357(Local_14.f_307[iVar0], Global_36, 3, 0, 3);
			switch (iVar0)
			{
				case 0:
					fVar5 = 0f;
					break;
				case 1:
					fVar5 = 0.3f;
					break;
				case 2:
					fVar5 = 0.4f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar6);
			TASK::TASK_COMBAT_PED(0, Global_35, iVar3, iVar4);
			__LIB_1__::func_474(Local_14.f_307[iVar0], &iVar6, fVar5, 0, 1, 1);
		}
		iVar0++;
	}
}

int func_220(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_413(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

bool func_227()
{
	int iVar0;
	if (!Local_14.f_495)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_341(&(Local_14.f_365[iVar0 /*21*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_228(var uParam0)
{
	return uParam0->f_323 >= 8;
}

bool func_232()
{
	if ((Local_14.f_489 && !Local_14.f_490) && !__LIB_3__::func_291(Global_35, 1))
	{
		return true;
	}
	if (func_227())
	{
		return true;
	}
	return false;
}

void func_233()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_307[iVar0], 0, 0))
		{
			func_420(&Local_14, iVar0, Global_35, 1, 2, 8000f, 1);
		}
		iVar0++;
	}
	Local_14.f_485 = Local_14.f_483;
	__LIB_1__::func_283(&(Local_14.f_331[7 /*3*/]), 0);
}

void func_234()
{
	int iVar0;
	iVar0 = 0;
	switch (Local_14.f_318)
	{
		case 0:
		case 2:
			switch (Local_14.f_481)
			{
				case 1:
					switch (Local_14.f_480)
					{
						case 0:
							if (__LIB_1__::func_285(&(Local_14.f_331[6 /*3*/]), 0.3f))
							{
								iVar0 = 1891783641;
							}
							break;
					}
					break;
				case 2:
					switch (Local_14.f_480)
					{
						case 0:
							if (__LIB_1__::func_285(&(Local_14.f_331[6 /*3*/]), 1f))
							{
								iVar0 = 1891783641;
							}
							break;
						case 1:
							if (__LIB_1__::func_285(&(Local_14.f_331[6 /*3*/]), 6f))
							{
								iVar0 = 1891783641;
							}
							break;
					}
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					switch (Local_14.f_480)
					{
						case 0:
							if (__LIB_1__::func_285(&(Local_14.f_331[6 /*3*/]), 3f))
							{
								iVar0 = 1891783641;
							}
							break;
					}
					break;
				case 6:
					break;
				case 7:
					switch (Local_14.f_480)
					{
						case 0:
							if (__LIB_1__::func_285(&(Local_14.f_331[6 /*3*/]), 1f))
							{
								iVar0 = 1891783641;
							}
							break;
					}
					break;
			}
			break;
		case 1:
		case 3:
			switch (Local_14.f_481)
			{
				case 1:
					switch (Local_14.f_480)
					{
						case 0:
							if (__LIB_1__::func_285(&(Local_14.f_331[6 /*3*/]), 0.3f))
							{
								iVar0 = 1891783641;
							}
							break;
					}
					break;
				case 2:
					break;
				case 3:
					switch (Local_14.f_480)
					{
						case 0:
							if (__LIB_1__::func_285(&(Local_14.f_331[6 /*3*/]), 0.7f))
							{
								iVar0 = 1891783641;
							}
							break;
					}
					break;
				case 4:
					switch (Local_14.f_480)
					{
						case 0:
							if (__LIB_1__::func_285(&(Local_14.f_331[6 /*3*/]), 1f))
							{
								iVar0 = 1891783641;
							}
							break;
					}
					break;
				case 5:
					switch (Local_14.f_480)
					{
						case 0:
							if (__LIB_1__::func_285(&(Local_14.f_331[6 /*3*/]), 0.3f))
							{
								iVar0 = 1891783641;
							}
							break;
						case 1:
							if (__LIB_1__::func_285(&(Local_14.f_331[6 /*3*/]), 4f))
							{
								iVar0 = 1891783641;
							}
							break;
					}
					break;
				case 6:
					break;
				case 7:
					switch (Local_14.f_480)
					{
						case 0:
							if (__LIB_1__::func_285(&(Local_14.f_331[6 /*3*/]), 0.5f))
							{
								iVar0 = 1891783641;
							}
							break;
					}
					break;
			}
			break;
	}
	if (iVar0 != 0)
	{
		Local_14.f_480++;
	}
}

void func_235()
{
	switch (Local_14.f_323)
	{
		case 0:
			if (Local_14.f_491)
			{
				func_83(&Local_14, Local_14.f_307[0], Local_14.f_307[0], "CHAT_PEDTYPE_DIALOG", 45f, 1, 291934926, 1, 1);
				Local_14.f_481++;
				func_421(&Local_14, 1);
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0, 1, Local_14.f_500, 1) && __LIB_2__::func_227(-1.5f, 1, 0, 0))
			{
				func_83(&Local_14, Local_14.f_307[1], Local_14.f_307[0], "CHAT_PEDTYPE_DIALOG", 45f, 1, 291934926, 3, 1);
				Local_14.f_481++;
				func_421(&Local_14, 2);
			}
			break;
		case 2:
			if (((__LIB_2__::func_227(0, 1, Local_14.f_500, 1) && __LIB_2__::func_227(0, 1, Local_14.f_307[0], 1)) && (Local_14.f_318 == 1 || __LIB_2__::func_227(0, 1, Local_14.f_307[2], 1))) && __LIB_2__::func_227(1f, 1, 0, 0))
			{
				if (func_83(&Local_14, Local_14.f_307[0], Local_14.f_307[1], "CHAT_PATROL", 45f, 1, 291934926, 3, 1))
				{
					Local_14.f_481++;
					func_421(&Local_14, 3);
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_227(0, 1, Local_14.f_500, 1) && __LIB_2__::func_227(-3f, 1, 0, 0))
			{
				func_83(&Local_14, Local_14.f_307[1], Local_14.f_307[0], "CHAT_PATROL_SUPPORT_RESPONSE", 45f, 1, 291934926, 1, 1);
				Local_14.f_481++;
				func_421(&Local_14, 4);
			}
			break;
		case 4:
			if (__LIB_2__::func_227(0, 1, Local_14.f_500, 1) && __LIB_2__::func_227(-3f, 1, 0, 0))
			{
				func_83(&Local_14, Local_14.f_307[0], Local_14.f_307[1], "CHAT_PATROL", 45f, 1, 291934926, 2, 1);
				Local_14.f_481++;
				func_421(&Local_14, 5);
			}
			break;
		case 5:
			if (__LIB_2__::func_227(0, 1, Local_14.f_500, 1) && __LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (__LIB_2__::func_1(Local_14.f_307[2], 0, 0))
				{
					func_83(&Local_14, Local_14.f_307[2], Local_14.f_307[1], "CHAT_PEDTYPE_DIALOG", 45f, 1, 291934926, 4, 1);
					Local_14.f_481++;
				}
				func_421(&Local_14, 6);
			}
			break;
		case 6:
			if (__LIB_2__::func_227(8f, 1, 0, 0))
			{
				func_83(&Local_14, Local_14.f_307[1], Global_35, "GOODBYE_PEDTYPE_CUSTOM", -1073741824 /* Float: -2f */, 1, 1744022339, 2, 1);
				Local_14.f_481++;
				func_421(&Local_14, 8);
			}
			break;
		case 8:
			if (func_422())
			{
				func_423();
				func_421(&Local_14, 9);
			}
			break;
		case 9:
			break;
		case 10:
			break;
	}
}

void func_236()
{
	switch (Local_14.f_323)
	{
		case 0:
			if (Local_14.f_491)
			{
				func_83(&Local_14, Local_14.f_307[0], Local_14.f_307[0], "CHAT_PEDTYPE_DIALOG", 45f, 1, 291934926, 1, 1);
				Local_14.f_481++;
				func_421(&Local_14, 1);
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0, 1, Local_14.f_500, 1) && __LIB_2__::func_227(-2.5f, 1, 0, 0))
			{
				func_83(&Local_14, Local_14.f_307[0], Local_14.f_307[1], "CHAT_PEDTYPE_DIALOG", 45f, 1, 291934926, 2, 1);
				Local_14.f_481++;
				func_421(&Local_14, 2);
			}
			break;
		case 2:
			if ((__LIB_2__::func_227(0, 1, Local_14.f_500, 1) && __LIB_2__::func_227(0, 1, Local_14.f_307[0], 1)) && __LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (func_83(&Local_14, Local_14.f_307[1], Local_14.f_307[0], "CHAT_PEDTYPE_DIALOG_RESPONSE", 45f, 1, 291934926, 0, 1))
				{
					Local_14.f_481++;
					func_421(&Local_14, 3);
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_227(0, 1, Local_14.f_500, 1) && __LIB_2__::func_227(-1f, 1, 0, 0))
			{
				func_83(&Local_14, Local_14.f_307[1], Local_14.f_307[0], "CHAT_PEDTYPE_DIALOG", 45f, 1, 291934926, 2, 1);
				Local_14.f_481++;
				func_421(&Local_14, 4);
			}
			break;
		case 4:
			if (__LIB_2__::func_227(0, 1, Local_14.f_500, 1) && __LIB_2__::func_227(1f, 1, 0, 0))
			{
				func_83(&Local_14, Local_14.f_307[1], Local_14.f_307[0], "CHAT_PEDTYPE_DIALOG", 45f, 1, 291934926, 3, 1);
				Local_14.f_481++;
				func_421(&Local_14, 5);
			}
			break;
		case 5:
			if (__LIB_2__::func_227(0, 1, Local_14.f_500, 1) && __LIB_2__::func_227(1f, 1, 0, 0))
			{
				func_83(&Local_14, Local_14.f_307[0], Local_14.f_307[1], "CHAT_PEDTYPE_DIALOG_RESPONSE", 45f, 1, 291934926, 0, 1);
				Local_14.f_481++;
				func_421(&Local_14, 6);
			}
			break;
		case 6:
			if (__LIB_2__::func_227(8f, 1, 0, 0))
			{
				func_83(&Local_14, Local_14.f_307[1], Global_35, "GOODBYE_PEDTYPE_CUSTOM", -1073741824 /* Float: -2f */, 1, 1744022339, 0, 1);
				Local_14.f_481++;
				func_421(&Local_14, 8);
			}
			break;
		case 8:
			if (func_422())
			{
				func_423();
				func_421(&Local_14, 9);
			}
			break;
		case 9:
			break;
		case 10:
			break;
	}
}

void func_240()
{
	__LIB_1__::func_148(&(Local_14.f_331[2 /*3*/]));
}

void func_241(var uParam0, int iParam1)
{
	uParam0->f_324 = iParam1;
}

bool func_243()
{
	if (Local_14.f_498)
	{
		if (!func_23(&Local_14, 16) || __LIB_2__::func_227(0f, 1, Local_14.f_307[0], 1))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_244()
{
	if (__LIB_1__::func_285(&(Local_14.f_331[1 /*3*/]), 0.25f) || (func_23(&Local_14, 16) && !func_227()))
	{
		return true;
	}
	return false;
}

void func_245()
{
	int iVar0;
	func_425(0, 1);
	if (!func_228(&Local_14) || Local_14.f_498)
	{
		__LIB_3__::func_469(Local_14.f_307[0], Global_35, -1);
	}
	Local_14.f_482 = Local_14.f_483;
	__LIB_4__::func_153("REETE_START");
	switch (Local_14.f_318)
	{
		case 0:
			func_83(&Local_14, Local_14.f_307[0], Global_35, "GANG_INTERACT_STOP_RIGHT_THERE", -1073741824 /* Float: -2f */, 1, 291934926, 1, 1);
			break;
		case 1:
			func_83(&Local_14, Local_14.f_307[0], Global_35, "GANG_INTERACT_STOP_RIGHT_THERE", -1073741824 /* Float: -2f */, 1, 291934926, 2, 1);
			break;
		case 2:
			func_83(&Local_14, Local_14.f_307[0], Global_35, "GENERIC_INSULT_MED_MALE", -1073741824 /* Float: -2f */, 1, 291934926, 0, 1);
			break;
		case 3:
			func_83(&Local_14, Local_14.f_307[0], Global_35, "GENERIC_INSULT_MED_MALE", -1073741824 /* Float: -2f */, 1, 291934926, 0, 1);
			break;
	}
	if (__LIB_2__::func_431(Local_14.f_307[1], __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */), 0f) == 1)
	{
		__LIB_2__::func_357(Local_14.f_307[1], Global_36, 5, 0, 1);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		__LIB_3__::func_469(0, Global_35, -1);
		__LIB_1__::func_474(Local_14.f_307[1], &iVar0, 0f, 0, 1, 1);
	}
	if (Local_14.f_464 == -1)
	{
		__LIB_2__::func_315(1891783641, Local_14.f_500, 1);
	}
}

bool func_246()
{
	if (((__LIB_1__::func_285(&(Local_14.f_331[1 /*3*/]), 0.5f) && __LIB_2__::func_227(0, 1, Local_14.f_307[0], 1)) && __LIB_2__::func_227(-3.5f, 1, 0, 0)) && !func_227())
	{
		return true;
	}
	return false;
}

bool func_247()
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_14.f_307[0], false, false) };
	if (Local_14.f_483 > (Local_14.f_482 + 3f))
	{
		if (Local_14.f_484 >= (Local_14.f_483 + 1f) && Local_14.f_483 > 9f)
		{
			return true;
		}
	}
	else if ((Local_14.f_484 > (Local_14.f_483 + 1f) && Local_14.f_483 > 9f) && ENTITY::GET_ENTITY_SPEED(Global_35) > 1.5f)
	{
		return true;
	}
	if (Local_14.f_492)
	{
		return true;
	}
	return false;
}

void func_248()
{
	int iVar0;
	__LIB_1__::func_148(&(Local_14.f_331[1 /*3*/]));
	func_83(&Local_14, Local_14.f_307[1], Global_35, "GANG_INTERACT_CHAT_FAMILIAR_FACE", 70f, 1, 1744022339, 1, 1);
	Local_14.f_482 = Local_14.f_483;
	func_425(1, 1);
	__LIB_3__::func_469(Local_14.f_307[1], Global_35, -1);
	if (__LIB_2__::func_1(Local_14.f_307[2], 0, 0))
	{
		func_425(2, 1);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		__LIB_3__::func_469(0, Global_35, -1);
		__LIB_1__::func_474(Local_14.f_307[2], &iVar0, 1.5f, 0, 1, 1);
	}
}

void func_249(var uParam0, int iParam1)
{
	uParam0->f_317 = (uParam0->f_317 || iParam1);
}

void func_250()
{
	int iVar0;
	vector3 vVar1;
	__LIB_1__::func_148(&(Local_14.f_331[1 /*3*/]));
	switch (Local_14.f_318)
	{
		case 0:
		case 2:
			func_83(&Local_14, Local_14.f_307[1], Global_35, "HEADS_UP_TOWN", 70f, 1, 1744022339, 1, 1);
			break;
		case 1:
		case 3:
			func_83(&Local_14, Local_14.f_307[1], Global_35, "HEADS_UP_TOWN", 70f, 1, 1744022339, 2, 1);
			break;
	}
	Local_14.f_482 = Local_14.f_483;
	if (!func_228(&Local_14))
	{
		func_425(1, 1);
		switch (Local_14.f_326)
		{
			case 0:
				vVar1 = { 0f, 0f, 0f };
				break;
			case 2:
				vVar1 = { 0f, 0f, 0f };
				break;
			case 1:
				vVar1 = { 0f, 0f, 0f };
				break;
			case 3:
				vVar1 = { 0f, 0f, 0f };
				break;
			case 4:
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_14.f_197[1 /*32*/].f_6, Local_14.f_197[1 /*32*/].f_9, 0.5f, 1f, 0f) };
				break;
			case 5:
			case 6:
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_14.f_197[1 /*32*/].f_6, Local_14.f_197[1 /*32*/].f_9, 1.3f, 0.1f, 0f) };
				break;
		}
		if (!__LIB_0__::func_86(vVar1))
		{
			__LIB_2__::func_106(&vVar1, 50, 10, 0);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (!__LIB_0__::func_86(vVar1))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 20000, 0.25f, 0, 40000f);
		}
		__LIB_2__::func_45(0, Global_35, 0);
		__LIB_3__::func_469(0, Global_35, -1);
		__LIB_1__::func_474(Local_14.f_307[1], &iVar0, 0.25f, 0, 1, 1);
		if (__LIB_2__::func_1(Local_14.f_307[2], 0, 0))
		{
			func_425(2, 1);
			vVar1 = { 0f, 0f, 0f };
			switch (Local_14.f_326)
			{
				case 0:
					vVar1 = { 0f, 0f, 0f };
					break;
				case 2:
					vVar1 = { 0f, 0f, 0f };
					break;
				case 1:
					vVar1 = { 0f, 0f, 0f };
					break;
				case 3:
					vVar1 = { 0f, 0f, 0f };
					break;
				case 4:
					vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_14.f_197[2 /*32*/].f_6, Local_14.f_197[2 /*32*/].f_9, -0.5f, 1.25f, 0f) };
					break;
				case 5:
				case 6:
					vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_14.f_197[2 /*32*/].f_6, Local_14.f_197[2 /*32*/].f_9, -1f, 0.1f, 0f) };
					break;
			}
			if (!__LIB_0__::func_86(vVar1))
			{
				__LIB_2__::func_106(&vVar1, 50, 10, 0);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!__LIB_0__::func_86(vVar1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 20000, 0.25f, 0, 40000f);
			}
			__LIB_2__::func_45(0, Global_35, 0);
			__LIB_3__::func_469(0, Global_35, -1);
			__LIB_1__::func_474(Local_14.f_307[2], &iVar0, 1.25f, 0, 1, 1);
		}
	}
}

void func_252()
{
	vector3 vVar0;
	float fVar3;
	fVar3 = (Local_14.f_98[0] + 15f);
	__LIB_4__::func_162(&(Local_14.f_474), &(Local_14.f_466), Local_14.f_307[0], vVar0, 0, 4000, 1500, 1000, 1, 0, 1, fVar3);
}

void func_253()
{
	__LIB_1__::func_148(&(Local_14.f_331[1 /*3*/]));
	switch (Local_14.f_318)
	{
		case 0:
		case 2:
			func_83(&Local_14, Local_14.f_307[0], Global_35, "HEADS_UP_THREATEN", 70f, 1, 1808677283, 1, 1);
			break;
		case 1:
		case 3:
			func_83(&Local_14, Local_14.f_307[0], Global_35, "HEADS_UP_THREATEN", 70f, 1, 1808677283, 2, 1);
			break;
	}
	__LIB_2__::func_272(Local_14.f_307[0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_14.f_307[0], joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(Local_14.f_307[0], 1, 1, 0, 0);
	__LIB_3__::func_930();
}

bool func_254()
{
	if ((__LIB_2__::func_227(0, 1, Local_14.f_307[1], 1) && __LIB_2__::func_227(0, 1, Local_14.f_307[0], 1)) && !func_227())
	{
		__LIB_3__::func_930();
		return true;
	}
	return false;
}

void func_255()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	__LIB_1__::func_148(&(Local_14.f_331[1 /*3*/]));
	iVar1 = 0;
	if (__LIB_2__::func_1(Local_14.f_307[2], 0, 0))
	{
		iVar2 = 2;
	}
	else
	{
		iVar2 = 1;
	}
	sVar0 = func_430(&Local_14, iVar2, &iVar1);
	func_83(&Local_14, Local_14.f_307[iVar2], Global_35, sVar0, 70f, 1, 1744022339, iVar1, 1);
	iVar4 = 68157440;
	iVar5 = 4096;
	func_101(2, 1);
	if (__LIB_2__::func_1(Local_14.f_307[2], 0, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		TASK::TASK_CONFRONT(0, Global_35, 2);
		TASK::TASK_COMBAT_PED(0, Global_35, iVar4, iVar5);
		__LIB_1__::func_474(Local_14.f_307[2], &iVar3, 6f, 0, 1, 1);
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar3);
	TASK::TASK_CONFRONT(0, Global_35, 2);
	TASK::TASK_COMBAT_PED(0, Global_35, iVar4, iVar5);
	__LIB_1__::func_474(Local_14.f_307[1], &iVar3, 3f, 0, 1, 1);
	__LIB_1__::func_336(&(Local_14.f_327.f_3), 2);
	__LIB_2__::func_272(Local_14.f_307[0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_14.f_307[0], joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(Local_14.f_307[0], 1, 1, 0, 0);
	PED::SET_PED_USING_ACTION_MODE(Local_14.f_307[0], true, -1, 0);
	if (__LIB_2__::func_1(Local_14.f_307[2], 0, 0))
	{
		PED::SET_PED_USING_ACTION_MODE(Local_14.f_307[2], true, -1, 0);
	}
}

void func_256()
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_1__::func_148(&(Local_14.f_331[1 /*3*/]));
	func_83(&Local_14, Local_14.f_307[0], Global_35, "ITS_MALE_EXTREME_RECOGNIZE", -1073741824 /* Float: -2f */, 1, 1744022339, 0, 1);
	func_249(&Local_14, 4);
	func_101(0, 1);
	iVar0 = 68157440;
	iVar1 = 4096;
	TASK::OPEN_SEQUENCE_TASK(&iVar2);
	TASK::TASK_CONFRONT(0, Global_35, 2);
	TASK::TASK_COMBAT_PED(0, Global_35, iVar0, iVar1);
	__LIB_1__::func_474(Local_14.f_307[0], &iVar2, 2f, 0, 1, 1);
	__LIB_1__::func_336(&(Local_14.f_327.f_3), 2);
}

bool func_257()
{
	switch (Local_14.f_325)
	{
		case 0:
			func_431(&Local_14, 1);
			break;
		case 1:
			if (__LIB_2__::func_227(0f, 1, Local_14.f_500, 1))
			{
				if (!Local_14.f_492 || func_23(&Local_14, 8))
				{
					if (Local_14.f_464 != 0)
					{
						func_83(&Local_14, Local_14.f_307[1], Global_35, "WON_DISPUTE_ESCALATED", -1073741824 /* Float: -2f */, 1, 1744022339, 1, 1);
					}
					__LIB_3__::func_469(Local_14.f_307[1], Global_35, -1);
					if (__LIB_2__::func_1(Local_14.f_307[2], 0, 0))
					{
						__LIB_3__::func_469(Local_14.f_307[2], Global_35, -1);
					}
					__LIB_3__::func_469(Local_14.f_307[0], Global_35, -1);
				}
				func_431(&Local_14, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_227(0f, 1, Local_14.f_500, 1))
			{
				__LIB_4__::func_153("REETE_STOP");
				if (Local_14.f_464 != 0 && Local_14.f_484 > Local_14.f_483)
				{
					func_83(&Local_14, Local_14.f_307[0], Global_35, "CALLOUT_FORGET_FLEEING_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 1, 1);
				}
				func_431(&Local_14, 3);
			}
			break;
		case 3:
			if (func_432())
			{
				return true;
			}
			if (__LIB_2__::func_227(0f, 1, Local_14.f_500, 1))
			{
				func_433(1, 1.5f);
				if (__LIB_2__::func_1(Local_14.f_307[2], 0, 0))
				{
					func_433(2, 2.5f);
				}
				func_433(0, 4.75f);
				func_431(&Local_14, 5);
			}
			break;
		case 5:
			if (func_432())
			{
				return true;
			}
			if (func_422())
			{
				func_423();
				func_431(&Local_14, 6);
			}
			break;
		case 6:
			if (func_432())
			{
				return true;
			}
			break;
		case 7:
			break;
	}
	return false;
}

char* func_258(var uParam0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = 1;
			return "HEADS_UP_BAD_MEMORY";
		case 1:
		case 2:
			*uParam2 = 2;
			return "HEADS_UP_BAD_MEMORY";
		default:
			break;
	}
	return "HEADS_UP_BAD_MEMORY";
}

void func_259()
{
	int iVar0;
	__LIB_1__::func_148(&(Local_14.f_331[2 /*3*/]));
	switch (Local_14.f_318)
	{
		case 0:
		case 2:
			func_83(&Local_14, Local_14.f_307[1], Global_35, "CHALLENGE_THREATEN_ARMED", 50f, 1, 1744022339, 3, 1);
			break;
		case 1:
		case 3:
			func_83(&Local_14, Local_14.f_307[1], Global_35, "CHALLENGE_THREATEN_ARMED", 50f, 1, 1744022339, 1, 1);
			break;
	}
	__LIB_2__::func_482(&(Local_14.f_429[0 /*17*/]), 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (!PED::IS_PED_ON_MOUNT(Global_35) && Local_14.f_98[1] < 6f)
	{
		TASK::TASK_CONFRONT(0, Global_35, 2);
	}
	__LIB_3__::func_469(0, Global_35, -1);
	__LIB_1__::func_474(Local_14.f_307[1], &iVar0, 0, 0, 1, 1);
	__LIB_1__::func_336(&(Local_14.f_327.f_3), 2);
}

void func_260()
{
	__LIB_1__::func_148(&(Local_14.f_331[2 /*3*/]));
	func_83(&Local_14, Local_14.f_307[1], Global_35, "GET_LOST", 50f, 1, 1744022339, 3, 1);
}

void func_261()
{
	char* sVar0;
	int iVar1;
	switch (Local_14.f_318)
	{
		case 0:
			sVar0 = "GANG_APPROACH_SUPPORT";
			iVar1 = 1;
			break;
		case 2:
			return;
		case 1:
		case 3:
			sVar0 = "SUPPORT_GENERAL";
			iVar1 = 4;
			break;
	}
	func_83(&Local_14, Local_14.f_307[0], Global_35, sVar0, 50f, 1, 1744022339, iVar1, 1);
}

bool func_262()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	func_22(1);
	if (!func_23(&Local_14, 4))
	{
		iVar4 = 0;
		sVar0 = func_411(&Local_14, 1, &iVar4);
		func_83(&Local_14, Local_14.f_307[1], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar4, 1);
	}
	iVar5 = 68157440;
	iVar6 = 4096;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_307[iVar1], 0, 0))
		{
			__LIB_2__::func_73(Local_14.f_307[iVar1], &(Local_14.f_311[iVar1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			__LIB_2__::func_357(Local_14.f_307[iVar1], Global_36, 3, 1, 1);
			switch (iVar1)
			{
				case 0:
					fVar3 = 0f;
					break;
				case 1:
					fVar3 = 0.35f;
					break;
				case 2:
					fVar3 = 0.8f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			if (PED::IS_PED_ON_MOUNT(Local_14.f_307[iVar1]))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, iVar5, iVar6);
			__LIB_1__::func_474(Local_14.f_307[iVar1], &iVar2, fVar3, 0, 1, 1);
		}
		iVar1++;
	}
	return true;
}

int func_276(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
				Jump @5429; //curOff = 4879
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
				Jump @5429; //curOff = 4926
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
				Jump @5429; //curOff = 4973
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
				Jump @5429; //curOff = 5020
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
				Jump @5429; //curOff = 5066
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
				Jump @5429; //curOff = 5155
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
				Jump @5429; //curOff = 5188
				return 1487351956;
				Jump @5429; //curOff = 5199
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
				Jump @5429; //curOff = 5274
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
				Jump @5429; //curOff = 5321
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
				Jump @5429; //curOff = 5368
				return -689015496;
				Jump @5429; //curOff = 5379
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
			}
			else
			{
				switch (iParam0)
				{
					case 119:
						return 1996937952;
				}
			}
			return 1968536545;
		}
void func_277(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (__LIB_0__::func_2() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_322(var uParam0, int iParam1)
{
	switch (uParam0->f_318)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 3;
				case 2:
					if (uParam0->f_498)
					{
						return 4;
					}
					return 3;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 4;
				case 1:
					return 5;
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			return 3;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				default:
					break;
			}
			break;
	}
	return -1;
}

char* func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0174_G_M_O_UniExConfeds_01_WHITE_01";
		case 1:
			return "0175_G_M_O_UniExConfeds_01_WHITE_02";
		case 2:
			return "0176_G_M_O_UniExConfeds_01_WHITE_03";
		case 3:
			return "0177_G_M_Y_UniExConfeds_01_WHITE_01";
		case 4:
			return "0178_G_M_Y_UniExConfeds_01_WHITE_02";
		case 5:
			return "0179_G_M_Y_UniExConfeds_01_WHITE_03";
		case 6:
			return "1026_G_M_Y_UniExConfeds_01_WHITE_04";
		default:
			break;
	}
	return "";
}

float func_406(var uParam0)
{
	switch (uParam0->f_326)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 120f;
	}
	return 80f;
}

bool func_408(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	if (*uParam0 < iParam5 || *uParam0 > iParam6)
	{
		*uParam0 = iParam5;
	}
	iVar0 = 0;
	while (iVar0 < iParam7)
	{
		if (__LIB_4__::func_51((*uParam2)[*uParam0], iParam3, &(uParam0->f_5), uParam4, 0, uParam0->f_98[*uParam0]))
		{
			return true;
		}
		*uParam0++;
		if (*uParam0 > iParam6)
		{
			*uParam0 = iParam5;
		}
		iVar0++;
	}
	return false;
}

char* func_411(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			if (func_198(uParam0))
			{
				*iParam2 = 2;
				return "OPENS_FIRE";
			}
			else
			{
				*iParam2 = 2;
				return "MELEE_BRING_IT_ON";
			}
			break;
		case 1:
		case 2:
			if (func_198(uParam0))
			{
				*iParam2 = 2;
				return "OPENS_FIRE";
			}
			else
			{
				*iParam2 = 2;
				return "FIGHT";
			}
			break;
	}
	if (func_198(uParam0))
	{
		return "OPENS_FIRE";
	}
	return "FIGHT";
}

int func_413(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_4__::func_163(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_413(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_4__::func_164(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_4__::func_165(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_4__::func_166(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_4__::func_165(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_4__::func_164(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

void func_420(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, bool bParam6)
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
		TASK::_0xE7FA07624574B79A(uParam0->f_307[iParam1], iParam2, iParam3, iParam4, fParam5, 1, 0, 0, 0);
	}
	TASK::TASK_LOOK_AT_ENTITY(uParam0->f_307[iParam1], iParam2, BUILTIN::FLOOR(fParam5), 0, 51, 0);
	__LIB_2__::func_281(&Var0, iParam2, 0, -1, 3, 3, 2, 1, 0, 0, 0, 0);
	_NAMESPACE29::_0x66F9EB44342BB4C5(uParam0->f_307[iParam1], &Var0);
}

void func_421(var uParam0, int iParam1)
{
	uParam0->f_323 = iParam1;
}

bool func_422()
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_307[iVar0], 0, 0))
		{
			if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Local_14.f_307[iVar0], true))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_423()
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_14.f_307[iVar0], 0, 0))
		{
			switch (iVar0)
			{
				case 0:
					fVar2 = 0f;
					break;
				case 1:
					fVar2 = 1f;
					break;
				case 2:
					fVar2 = 1.75f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, __LIB_2__::func_116(9, 1), 15f, 2.5f, 0, 0);
			__LIB_1__::func_474(Local_14.f_307[iVar0], &iVar1, fVar2, 0, 1, 1);
		}
		iVar0++;
	}
	Local_14.f_50 = 1;
}

void func_425(int iParam0, int iParam1)
{
	PED::_0xAAB050DA48B57978(Local_14.f_307[iParam0], "Default_Brave", Global_35, -1, 4);
	PED::_0xEEED8FAFEC331A70(Local_14.f_307[iParam0], Global_36, iParam1);
}

char* func_430(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = func_322(uParam0, iParam1);
	*iParam2 = 1;
	switch (iVar0)
	{
		case 1:
			return "HEADS_UP_STORY_MEMORY_RXCF1";
		case 3:
			return "HEADS_UP_STORY_MEMORY_SAD1";
		case 4:
			return "HEADS_UP_STORY_MEMORY_RDTC2";
		case 6:
			return "HEADS_UP_STORY_MEMORY_RXCF1";
		default:
			break;
	}
	return "HEADS_UP_STORY_MEMORY_RXCF1";
}

void func_431(var uParam0, int iParam1)
{
	uParam0->f_325 = iParam1;
}

bool func_432()
{
	if ((Local_14.f_483 < (Local_14.f_482 + 2f) && !func_247()) && (Local_14.f_484 < (Local_14.f_483 - 0.5f) || PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(Local_14.f_307[0], false, false), 30f)))
	{
		if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_307[0], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_307[1], Global_35, 17)) || ((Local_14.f_318 == 0 || Local_14.f_318 == 2) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_307[2], Global_35, 17)))
		{
			return true;
		}
	}
	return false;
}

void func_433(int iParam0, float fParam1)
{
	int iVar0;
	PED::_0x58F7DB5BD8FA2288(Local_14.f_307[iParam0]);
	PED::_0x935CF6E42BAF7F4D(Local_14.f_307[iParam0]);
	__LIB_0__::func_325(&(Local_14.f_311[iParam0]));
	if (!PED::_IS_PED_USING_SCENARIO_POINT(Local_14.f_307[iParam0], Local_14.f_502[iParam0]))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::_TASK_USE_SCENARIO_POINT(0, Local_14.f_502[iParam0], 0, -1, true, false, 0, false, -1f, false);
		__LIB_1__::func_474(Local_14.f_307[iParam0], &iVar0, fParam1, 0, 1, 1);
	}
}

