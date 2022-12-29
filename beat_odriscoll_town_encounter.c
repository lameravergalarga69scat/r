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
	bool bLocal_17 = false;
	bool bLocal_18 = false;
	bool bLocal_19 = false;
	struct<524> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 3, 0, 0, 0, 3, 0, 0, 0, 1125515264, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, -1, 0, 3, 0, 0, -1082130432, 1148844442, 1148844442, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_544 = false;
	struct<7> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, -1 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_4__::func_153("REOTE_STOP");
		func_2();
		bLocal_544 = true;
	}
	if (!bLocal_544)
	{
		func_3(ScriptParam_0);
	}
	while (true)
	{
		switch (Local_20.f_306)
		{
			case 1:
				if (__LIB_3__::func_454(&Local_20, &ScriptParam_0, 0, 0, 0, 0, 0, 1))
				{
					func_5();
					func_6(&Local_20, 0);
				}
				else if (Local_20.f_160)
				{
					func_2();
				}
				break;
			case 0:
				if (func_7())
				{
					func_6(&Local_20, 3);
				}
				break;
			case 3:
				if (__LIB_3__::func_479(Local_20.f_51, Local_20.f_51.f_3, &(Local_20.f_197), &(Local_20.f_294), 1, 0, -1, 1))
				{
					func_9();
					func_6(&Local_20, 4);
				}
				break;
			case 4:
				if (func_10())
				{
					__LIB_4__::func_153("REOTE_STOP");
					func_2();
				}
				func_11();
				__LIB_4__::func_154(&(Local_20.f_449), 0);
				if (Local_20.f_46)
				{
					if (func_13())
					{
						func_2();
					}
				}
				else if (!Local_20.f_50)
				{
					if (func_14())
					{
						Local_20.f_50 = 1;
					}
				}
				if (func_15())
				{
					__LIB_4__::func_153("REOTE_STOP");
					func_2();
				}
				break;
			case 6:
				func_16();
				break;
		}
		BUILTIN::WAIT(Local_20.f_158);
	}
}

void func_2()
{
	int iVar0;
	bool bVar1;
	__LIB_3__::func_474(&(Local_20.f_507));
	__LIB_4__::func_153("REOTE_STOP");
	if (__LIB_1__::func_271(Local_20.f_3))
	{
		__LIB_1__::func_682(Local_20.f_3);
	}
	__LIB_4__::func_38(&(Local_20.f_314));
	if (__LIB_1__::func_86(Local_20.f_3))
	{
		func_22(Local_20.f_3);
	}
	func_23();
	if ((!func_24(&Local_20, 16) && !Local_20.f_46) && !Local_20.f_44)
	{
		Local_20.f_45 = 0;
	}
	__LIB_2__::func_601(&(Local_20.f_449), 0);
	func_26();
	func_27(0);
	Local_20.f_50 = 1;
	iVar0 = 0;
	while (iVar0 < Local_20.f_294)
	{
		bVar1 = __LIB_2__::func_1(Local_20.f_197[iVar0 /*32*/].f_11, 0, 0);
		PED::SET_PED_CONFIG_FLAG(Local_20.f_294[iVar0], 6, false);
		if (bVar1)
		{
			TASK::CLEAR_PED_TASKS(Local_20.f_197[iVar0 /*32*/].f_11, true, false);
		}
		if (__LIB_2__::func_1(Local_20.f_294[iVar0], 0, 0))
		{
			if (bVar1)
			{
				if (!PED::IS_PED_ON_MOUNT(Local_20.f_294[iVar0]))
				{
					TASK::TASK_MOUNT_ANIMAL(Local_20.f_294[iVar0], Local_20.f_197[iVar0 /*32*/].f_11, -1, -1, 1f, 1, 0, 0);
					PED::SET_PED_KEEP_TASK(Local_20.f_294[iVar0], true);
				}
			}
			else if (PED::IS_PED_USING_ANY_SCENARIO(Local_20.f_294[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(Local_20.f_294[iVar0], true, false);
			}
		}
		iVar0++;
	}
	func_6(&Local_20, 6);
}

int func_3(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6)
{
	Local_20.f_3 = __LIB_0__::func_81(&vParam0);
	Local_20.f_161 = __LIB_0__::func_27(vParam0.z, 2);
	Local_20.f_43 = __LIB_0__::func_12();
	Local_20.f_493 = 3;
	Local_20.f_494 = 3;
	__LIB_3__::func_352(&Local_20, 0);
	func_33();
	return 1;
}

void func_5()
{
	int iVar0;
	iVar0 = -1;
	if (Local_20.f_161)
	{
		iVar0 = 100;
	}
	__LIB_1__::func_336(&(Local_20.f_314.f_3), 32);
	Local_20.f_313 = Local_20.f_51.f_4;
	Local_20.f_506 = __LIB_2__::func_284(0, iVar0);
	if (Local_20.f_506)
	{
	}
	if (Local_20.f_161)
	{
		Local_20.f_305 = __LIB_3__::func_390(Local_20.f_3, 4, 0);
	}
	else if (__LIB_3__::func_390(Local_20.f_3, 2, 0) < 1)
	{
		if (Local_20.f_506)
		{
			Local_20.f_305 = 1;
		}
		else
		{
			Local_20.f_305 = 0;
		}
	}
	else if (Local_20.f_506)
	{
		Local_20.f_305 = 3;
	}
	else
	{
		Local_20.f_305 = 2;
	}
	switch (Local_20.f_305)
	{
		case 0:
			if (Local_20.f_161)
			{
				__LIB_17__::func_862(0);
			}
			bLocal_17 = true;
			break;
		case 2:
			if (Local_20.f_161)
			{
				__LIB_17__::func_862(0);
			}
			bLocal_17 = false;
			break;
		case 1:
			if (Local_20.f_161)
			{
				__LIB_11__::func_34(0, 1);
			}
			bLocal_17 = true;
			Local_20.f_305 = 0;
			break;
		case 3:
			if (Local_20.f_161)
			{
				__LIB_11__::func_34(0, 1);
			}
			bLocal_17 = false;
			Local_20.f_305 = 2;
			break;
	}
	func_44();
	func_45(Local_20.f_340[5]);
	func_46();
	func_47(&Local_20);
}

void func_6(var uParam0, int iParam1)
{
	uParam0->f_306 = iParam1;
}

bool func_7()
{
	int iVar0;
	int iVar1;
	switch (Local_20.f_307)
	{
		case 0:
			__LIB_3__::func_284(&(Local_20.f_197));
			__LIB_3__::func_308(&Local_20);
			iVar0 = __LIB_4__::func_155();
			switch (Local_20.f_313)
			{
				case 0:
					__LIB_2__::func_312(joaat("WORLD_HUMAN_DRINKING"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_51(joaat("WORLD_HUMAN_DRINKING")));
					__LIB_2__::func_312(joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_51(joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING")));
					__LIB_2__::func_312(joaat("WORLD_HUMAN_SMOKE"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_51(joaat("WORLD_HUMAN_SMOKE")));
					break;
				case 1:
					__LIB_2__::func_312(joaat("WORLD_HUMAN_DRINKING"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_51(joaat("WORLD_HUMAN_DRINKING")));
					__LIB_2__::func_312(joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_51(joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING")));
					__LIB_2__::func_312(joaat("WORLD_HUMAN_LEAN_POST_RIGHT"), iVar0, joaat("G_M_M_UNIDUSTER_01"), func_51(joaat("WORLD_HUMAN_LEAN_POST_RIGHT")));
					break;
			}
			func_53(&Local_20, 1);
			break;
		case 1:
			iVar1 = 1;
			switch (Local_20.f_313)
			{
				case 0:
					bLocal_18 = true;
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_DRINKING")))
					{
						iVar1 = 0;
					}
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING")))
					{
						iVar1 = 0;
					}
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_SMOKE")))
					{
						iVar1 = 0;
					}
					break;
				case 1:
					bLocal_18 = false;
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_DRINKING")))
					{
						iVar1 = 0;
					}
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING")))
					{
						iVar1 = 0;
					}
					if (!__LIB_2__::func_313(joaat("WORLD_HUMAN_LEAN_POST_RIGHT")))
					{
						iVar1 = 0;
					}
					break;
			}
			if (!__LIB_3__::func_366(&(Local_20.f_197)))
			{
				iVar1 = 0;
			}
			if (!__LIB_3__::func_308(&Local_20))
			{
				iVar1 = 0;
			}
			return iVar1;
	}
	return false;
}

void func_9()
{
	int iVar0;
	int iVar1;
	var uVar2;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_20.f_294[iVar0], 0, 0))
		{
			__LIB_3__::func_285(Local_20.f_294[iVar0], &Local_20, 0);
			iVar1 = func_59(&Local_20, iVar0);
			Local_20.f_517[iVar0] = __LIB_2__::func_488(iVar1, Local_20.f_197[iVar0 /*32*/].f_6, Local_20.f_197[iVar0 /*32*/].f_9, 0, -1f, 1);
			TASK::_TASK_USE_SCENARIO_POINT(Local_20.f_294[iVar0], Local_20.f_517[iVar0], func_61(iVar1), -1, false, true, 0, false, -1f, false);
			PED::SET_PED_CONFIG_FLAG(Local_20.f_294[iVar0], 233, true);
			PED::SET_PED_CONFIG_FLAG(Local_20.f_294[iVar0], 6, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_20.f_294[iVar0], false, true);
			__LIB_2__::func_272(Local_20.f_294[iVar0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_272(Local_20.f_294[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_20.f_294[iVar0], 46, true);
			if (iVar0 == 0)
			{
				__LIB_2__::func_272(Local_20.f_294[iVar0], joaat("WEAPON_REPEATER_CARBINE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			__LIB_4__::func_158(&Local_20, iVar0);
		}
		if (__LIB_2__::func_1(Local_20.f_197[iVar0 /*32*/].f_11, 0, 0))
		{
			switch (Local_20.f_313)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_20.f_197[iVar0 /*32*/].f_11, Local_20.f_197[iVar0 /*32*/].f_15, 1f, -1, false, false, true, false);
							break;
						case 1:
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_20.f_197[iVar0 /*32*/].f_11, Local_20.f_197[iVar0 /*32*/].f_15, 1f, -1, false, false, true, false);
							break;
						case 2:
							break;
					}
					break;
				case 1:
					uVar2 = __LIB_2__::func_488(joaat("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC"), Local_20.f_197[iVar0 /*32*/].f_15, Local_20.f_197[iVar0 /*32*/].f_18, 0f, -1f, 1);
					TASK::_TASK_USE_SCENARIO_POINT(Local_20.f_197[iVar0 /*32*/].f_11, uVar2, "", -1, true, true, 0, false, -1f, false);
					break;
			}
		}
		iVar0++;
	}
	func_64(&Local_20, 0, 1, 1);
	func_65(&Local_20, 1);
}

bool func_10()
{
	__LIB_3__::func_931(&Local_20, 5.5f);
	if (!__LIB_3__::func_466(&Local_20, &(Local_20.f_294), Local_20.f_305, 0, 0, 0, 1, 1))
	{
		return true;
	}
	switch (Local_20.f_515)
	{
		case 0:
			if (func_68())
			{
				return true;
			}
			break;
	}
	Local_20.f_515++;
	Local_20.f_515 = (Local_20.f_515 % 30);
	func_69();
	return false;
}

void func_11()
{
	if (__LIB_1__::func_271(Local_20.f_3))
	{
		if (__LIB_2__::func_410(7) && !Global_16)
		{
			__LIB_1__::func_682(Local_20.f_3);
		}
	}
	if (!Global_16)
	{
		if (__LIB_1__::func_86(Local_20.f_3))
		{
			func_22(Local_20.f_3);
		}
	}
}

bool func_13()
{
	int iVar0;
	char* sVar1;
	Local_20.f_492 = __LIB_4__::func_159(&Local_20);
	Local_20.f_302 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_20.f_51, Global_36, true);
	func_72();
	func_73();
	iVar0 = -1;
	switch (Local_20.f_309)
	{
		case 0:
			if (Local_20.f_505 == 0f)
			{
				Local_20.f_505 = Local_20.f_98[0];
			}
			__LIB_1__::func_283(&(Local_20.f_318[0 /*3*/]), 0);
			func_75();
			func_76(&Local_20, 1);
			break;
		case 1:
			if (func_77(&iVar0))
			{
				__LIB_4__::func_153("REOTE_STOP");
				func_76(&Local_20, 3);
			}
			else if (Local_20.f_492 <= 0)
			{
				if (__LIB_2__::func_393(&(Local_20.f_507)))
				{
					func_76(&Local_20, 2);
				}
				else if (__LIB_3__::func_929(&(Local_20.f_507), &(Local_20.f_294), 0, 3, 0f, 0))
				{
					__LIB_4__::func_153("REOTE_STOP");
					sVar1 = func_80();
					if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
					{
						sVar1 = __LIB_2__::func_638(&(Local_20.f_507), 0, __LIB_2__::func_155(0, 1), 1);
					}
					func_83(&Local_20, Global_35, Global_35, sVar1, -1073741824 /* Float: -2f */, 0, 1808677283, 0, 1);
					func_76(&Local_20, 2);
				}
			}
			break;
		case 3:
			if (func_84())
			{
				__LIB_4__::func_153("REOTE_STOP");
				__LIB_2__::func_601(&(Local_20.f_449), 0);
				func_76(&Local_20, 6);
			}
			break;
		case 2:
			if (Local_20.f_492 <= 0)
			{
				if (__LIB_2__::func_393(&(Local_20.f_507)))
				{
					__LIB_4__::func_153("REOTE_STOP");
					func_76(&Local_20, 6);
				}
				else if (__LIB_3__::func_929(&(Local_20.f_507), &(Local_20.f_294), 0, 3, 0f, 0))
				{
					__LIB_4__::func_153("REOTE_STOP");
					sVar1 = __LIB_2__::func_638(&(Local_20.f_507), 0, __LIB_2__::func_155(0, 1), 1);
					func_83(&Local_20, Global_35, Global_35, sVar1, -1073741824 /* Float: -2f */, 0, 1808677283, 0, 1);
					func_76(&Local_20, 6);
				}
			}
			break;
		case 6:
			__LIB_3__::func_474(&(Local_20.f_507));
			__LIB_4__::func_153("REOTE_STOP");
			func_27(0);
			return true;
	}
	return false;
}

bool func_14()
{
	int iVar0;
	func_85();
	switch (Local_20.f_308)
	{
		case 0:
			if (__LIB_2__::func_1(Local_20.f_294[0], 0, 0))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_20.f_294[0], false);
			}
			iVar0 = -1;
			iVar0 = func_86();
			if (func_87(iVar0))
			{
				__LIB_1__::func_148(&(Local_20.f_318[5 /*3*/]));
				func_89();
				func_90(0);
				func_91(&Local_20, 1);
			}
			else
			{
				func_92();
			}
			break;
		case 1:
			if (func_93())
			{
				func_91(&Local_20, 3);
			}
			break;
		case 2:
			func_91(&Local_20, 3);
			break;
		case 3:
			func_94();
			func_23();
			__LIB_4__::func_153("REOTE_FIGHT");
			return true;
	}
	return false;
}

bool func_15()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (__LIB_2__::func_393(&(Local_20.f_507)))
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (Local_20.f_46)
	{
		bVar1 = false;
		bVar2 = false;
	}
	else
	{
		bVar1 = true;
		bVar2 = true;
	}
	if (__LIB_3__::func_431(&Local_20, &(Local_20.f_294), bVar1, bVar0, bVar2, 0, 1, !Global_1310750[Local_20.f_3 /*111*/].f_46, 0, 0, 0, 0, 0))
	{
		return true;
	}
	return false;
}

void func_16()
{
	int iVar0;
	if (!bLocal_544 || (!__LIB_2__::func_204(0) || CAM::IS_SCREEN_FADED_OUT()))
	{
		iVar0 = 0;
		while (iVar0 < Local_20.f_294)
		{
			if (__LIB_2__::func_1(Local_20.f_294[iVar0], 0, 1))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Local_20.f_294[iVar0]))
				{
					if (!__LIB_1__::func_472(Local_20.f_294[iVar0], 150f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_20.f_294[iVar0], false, true);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_20.f_294[iVar0], true, false);
					}
					return;
				}
			}
			if (__LIB_2__::func_1(Local_20.f_197[iVar0 /*32*/].f_11, 0, 1))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Local_20.f_197[iVar0 /*32*/].f_11))
				{
					if (!__LIB_1__::func_472(Local_20.f_197[iVar0 /*32*/].f_11, 150f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_20.f_197[iVar0 /*32*/].f_11, false, true);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_20.f_197[iVar0 /*32*/].f_11, true, false);
					}
					return;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_20.f_294)
		{
			__LIB_3__::func_475(Local_20.f_294[iVar0], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
			iVar0++;
		}
		__LIB_17__::func_851(&Local_20, &(Local_20.f_294), &(Local_20.f_298), Local_20.f_305, Local_20.f_522, Local_20.f_523, 0, 1, 0, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_22(int iParam0)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_47 = 0;
}

void func_23()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_104(iVar0);
		__LIB_2__::func_593(&(Local_20.f_350[iVar0 /*21*/]), &(Local_20.f_414));
		PED::SET_PED_CONFIG_FLAG(Local_20.f_294[iVar0], 130, false);
		iVar0++;
	}
}

bool func_24(var uParam0, int iParam1)
{
	return (uParam0->f_304 && iParam1) != 0;
}

void func_26()
{
	if (Local_20.f_44)
	{
		if (!__LIB_4__::func_156(&Local_20, 128))
		{
			__LIB_2__::func_212(94, Global_1310750[94 /*111*/].f_36, 0.75f, 1, 0);
			__LIB_2__::func_212(94, Global_1310750[94 /*111*/].f_37, 0.75f, 0, 0);
			func_110(&Local_20, 128);
		}
	}
}

void func_27(bool bParam0)
{
	if (!__LIB_4__::func_156(&Local_20, 512))
	{
		if (bParam0)
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
			func_110(&Local_20, 512);
		}
	}
	else if (!bParam0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 514, false);
		func_111(&Local_20, 512);
	}
}

void func_33()
{
	__LIB_2__::func_104(&(Local_20.f_5), 0);
	__LIB_2__::func_105(&(Local_20.f_5), 1);
	__LIB_2__::func_50(&(Local_20.f_5), 1);
	__LIB_2__::func_51(&(Local_20.f_5), 1);
	__LIB_2__::func_111(&(Local_20.f_5), 0);
	__LIB_2__::func_110(&(Local_20.f_5), 0);
	__LIB_2__::func_52(&(Local_20.f_5), 1);
	__LIB_2__::func_180(&(Local_20.f_5), 1);
	__LIB_3__::func_482(&(Local_20.f_5), 6f);
	__LIB_2__::func_662(&(Local_20.f_5), 0);
}

void func_44()
{
	switch (Local_20.f_313)
	{
		case 0:
			func_151(&Local_20);
			break;
		case 1:
			func_152(&Local_20);
			break;
	}
}

void func_45(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	PED::_0x9851DE7AEC10B4E1(Local_20.f_51, 8f, 1, 0);
	__LIB_4__::func_212(iParam0, 1, 0, 0, 0);
	vVar0 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	vVar3 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	if (vVar0.x > vVar0.y)
	{
		fVar6 = vVar0.x;
	}
	else
	{
		fVar6 = vVar0.y;
	}
	FIRE::STOP_FIRE_IN_RANGE(vVar3, fVar6);
	POPULATION::_0xB56D41A694E42E86(iParam0, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 10208, 0, 0, -1, -1, 0);
}

void func_46()
{
	vector3 vVar0;
	vector3 vVar3;
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_20.f_340[7]))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(Local_20.f_340[7]) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(Local_20.f_340[7]) };
	POPULATION::_0xB56D41A694E42E86(Local_20.f_340[7], 10208, 0, 0, -1, -1, 0);
	func_154(&Local_20, joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW"), "fleeArea", vVar0, 600000f, vVar3.x, -1082130432 /* Float: -1f */, 1f);
}

void func_47(var uParam0)
{
	struct<4> Var0;
	int iVar4;
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (uParam0->f_305 == 2 || uParam0->f_305 == 3)
		{
			if (iVar4 == 2)
			{
			}
			else
			{
				uParam0->f_197[iVar4 /*32*/].f_1 = joaat("G_M_M_UNIDUSTER_01");
				uParam0->f_197[iVar4 /*32*/].f_19 = 1;
				uParam0->f_197[iVar4 /*32*/].f_13 = 0;
				uParam0->f_197[iVar4 /*32*/].f_12 = __LIB_2__::func_185(0, iVar4, 0);
				StringCopy(&(uParam0->f_197[iVar4 /*32*/].f_23), func_156(iVar4), 64);
				uParam0->f_197[iVar4 /*32*/].f_3 = func_157(uParam0, iVar4);
				Var0 = { func_158(uParam0, iVar4) };
				uParam0->f_197[iVar4 /*32*/].f_6 = { Var0 };
				uParam0->f_197[iVar4 /*32*/].f_9 = Var0.f_3;
				Var0 = { func_159(uParam0, iVar4) };
				uParam0->f_197[iVar4 /*32*/].f_15 = { Var0 };
				uParam0->f_197[iVar4 /*32*/].f_18 = Var0.f_3;
			}
			iVar4++;
		}
	}
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_DRINKING"):
			return joaat("WORLD_HUMAN_STAND_DRINK_MALE_A");
		case joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING"):
			return joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_MALE_D");
		case joaat("WORLD_HUMAN_SMOKE"):
			return joaat("WORLD_HUMAN_SMOKE_MALE_C");
		case joaat("WORLD_HUMAN_LEAN_POST_RIGHT"):
			return joaat("WORLD_HUMAN_LEAN_POST_RIGHT_MALE_A");
		default:
			break;
	}
	return 0;
}

void func_53(var uParam0, int iParam1)
{
	uParam0->f_307 = iParam1;
}

int func_59(var uParam0, int iParam1)
{
	switch (uParam0->f_313)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_DRINKING");
				case 1:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING");
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
					return joaat("WORLD_HUMAN_DRINKING");
				case 1:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING");
				case 2:
					return joaat("WORLD_HUMAN_LEAN_POST_RIGHT");
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_61(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_DRINKING"):
			return "WORLD_HUMAN_STAND_DRINK_MALE_A";
		case joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING"):
			return "WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_MALE_D";
		case joaat("WORLD_HUMAN_SMOKE"):
			return "WORLD_HUMAN_SMOKE_MALE_C";
		case joaat("WORLD_HUMAN_LEAN_POST_RIGHT"):
			return "WORLD_HUMAN_LEAN_POST_RIGHT_MALE_A";
		default:
			break;
	}
	return "";
}

void func_64(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam1)
	{
		if (!__LIB_1__::func_489(&(uParam0->f_414[0 /*17*/]), 13) && !__LIB_1__::func_489(&(uParam0->f_414[0 /*17*/]), 0))
		{
			__LIB_2__::func_411(&(uParam0->f_414[0 /*17*/]), 1, 0);
		}
		if (bParam3)
		{
			if (!__LIB_1__::func_489(&(uParam0->f_414[1 /*17*/]), 13) && !__LIB_1__::func_489(&(uParam0->f_414[1 /*17*/]), 0))
			{
				__LIB_2__::func_411(&(uParam0->f_414[1 /*17*/]), 1, 0);
			}
		}
	}
	else
	{
		if ((!__LIB_1__::func_489(&(uParam0->f_414[0 /*17*/]), 13) && __LIB_1__::func_489(&(uParam0->f_414[0 /*17*/]), 0)) || bParam2)
		{
			__LIB_2__::func_411(&(uParam0->f_414[0 /*17*/]), 0, 0);
		}
		if (bParam3)
		{
			if ((!__LIB_1__::func_489(&(uParam0->f_414[1 /*17*/]), 13) && __LIB_1__::func_489(&(uParam0->f_414[1 /*17*/]), 0)) || bParam2)
			{
				__LIB_2__::func_411(&(uParam0->f_414[1 /*17*/]), 0, 0);
			}
		}
	}
}

void func_65(var uParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		if (bLocal_18)
		{
			__LIB_2__::func_602(&(uParam0->f_414[0 /*17*/]), __LIB_2__::func_460(7), "RE_ODT_VAL_V1_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_2__::func_602(&(uParam0->f_414[0 /*17*/]), __LIB_2__::func_460(7), "RE_ODT_VAL_V2_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
		}
	}
	else if (bLocal_18)
	{
		__LIB_2__::func_602(&(uParam0->f_414[0 /*17*/]), __LIB_2__::func_460(8), "RE_ODT_VAL_V1_DEFUSE", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	}
	else
	{
		__LIB_2__::func_602(&(uParam0->f_414[0 /*17*/]), __LIB_2__::func_460(8), "RE_ODT_VAL_V2_DEFUSE", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	}
	if (bLocal_18)
	{
		__LIB_2__::func_602(&(uParam0->f_414[1 /*17*/]), __LIB_2__::func_460(10), "RE_ODT_VAL_V1_GREET_ANT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	}
	else
	{
		__LIB_2__::func_602(&(uParam0->f_414[1 /*17*/]), __LIB_2__::func_460(10), "RE_ODT_VAL_V2_GREET_ANT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_350)
	{
		__LIB_2__::func_394(&(uParam0->f_350[iVar0 /*21*/]), &(uParam0->f_414[1 /*17*/]));
		iVar0++;
	}
}

bool func_68()
{
	int iVar0;
	switch (Local_20.f_313)
	{
		case 0:
			if (__LIB_0__::func_699(1) && !__LIB_0__::func_892(1))
			{
				if (!Local_20.f_48)
				{
					iVar0 = CLOCK::GET_CLOCK_HOURS();
					if (iVar0 > 20 || iVar0 < 5)
					{
						if (__LIB_3__::func_751(14))
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

void func_69()
{
	if (Local_20.f_48)
	{
		if (!__LIB_4__::func_156(&Local_20, 64))
		{
			__LIB_2__::func_212(94, Global_1310750[94 /*111*/].f_36, 0.75f, 1, 0);
			func_110(&Local_20, 64);
		}
	}
}

void func_72()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_20.f_294[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_20.f_298[iVar0]))
			{
				if (__LIB_3__::func_476(Local_20.f_294[iVar0], 1))
				{
					__LIB_2__::func_73(Local_20.f_294[iVar0], &(Local_20.f_298[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_73()
{
	int iVar0;
	if (__LIB_4__::func_156(&Local_20, 32))
	{
		__LIB_3__::func_473(&(Local_20.f_314));
		return;
	}
	if (func_195(&Local_20))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (__LIB_2__::func_1(Local_20.f_294[iVar0], 0, 0))
			{
				TASK::TASK_COMBAT_PED(Local_20.f_294[iVar0], Global_35, 0, 0);
			}
			if (__LIB_2__::func_1(Local_20.f_294[iVar0], 0, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_20.f_294[iVar0], false);
			}
			iVar0++;
		}
		func_110(&Local_20, 32);
	}
}

void func_75()
{
	if (Local_20.f_513 || Local_20.f_479 != -1)
	{
		__LIB_3__::func_485(&(Local_20.f_507));
	}
	else
	{
		__LIB_4__::func_42(&(Local_20.f_507));
	}
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_309 = iParam1;
}

bool func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (!__LIB_1__::func_285(&(Local_20.f_318[0 /*3*/]), 10f))
	{
		return false;
	}
	if (!__LIB_2__::func_227(0f, 1, Local_20.f_516, 1))
	{
		return false;
	}
	if (!func_201(&Local_20))
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (__LIB_2__::func_1(Local_20.f_294[iVar1], 0, 0))
		{
			if (__LIB_2__::func_227(0f, 1, Local_20.f_294[iVar1], 1))
			{
				*iParam0 = iVar1;
				func_83(&Local_20, Local_20.f_294[iVar1], Global_35, "CALLOUT_FORGET_FLEEING_NEUTRAL", -1073741824 /* Float: -2f */, 1, 1744022339, 1, 1);
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
				if (__LIB_2__::func_1(Local_20.f_294[iVar1], 0, 0))
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
					if (Local_20.f_294[iVar1] == Local_20.f_516)
					{
						fVar2 = 0f;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					__LIB_1__::func_474(Local_20.f_294[iVar1], &iVar0, fVar2, 0, 1, 1);
				}
				iVar1++;
			}
			return true;
		}
	}
}

char* func_80()
{
	switch (Local_20.f_305)
	{
		case 0:
			return "RE_ODT_VAL_V1_PLYFINAL";
		case 1:
			return "RE_ODT_VAL_V1_PLYFINAL_FEUD";
		case 2:
			return "RE_ODT_VAL_V2_PLYFINAL";
		case 3:
			return "RE_ODT_VAL_V2_PLYFINAL_FEUD";
		default:
			break;
	}
	return "";
}

bool func_83(var uParam0, int iParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	if (__LIB_2__::func_303(iParam1, iParam2, sParam3, "", fParam4, iParam7, 0, 1, 1, fParam4 >= 0f, bParam5, iParam6, 1, 0, 0))
	{
		if (bParam8)
		{
			uParam0->f_516 = iParam1;
			if (uParam0->f_308 >= 1)
			{
				func_64(uParam0, 0, 0, 0);
			}
			__LIB_1__::func_148(&(uParam0->f_318[5 /*3*/]));
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
		if (__LIB_2__::func_1(Local_20.f_294[iVar0], 0, 0))
		{
			__LIB_0__::func_325(&(Local_20.f_298[iVar0]));
			switch (iVar0)
			{
				case 0:
					fVar1 = 0f;
					break;
				case 1:
					fVar1 = 0.5f;
					break;
				case 2:
					fVar1 = 0.7f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 553092, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_1__::func_474(Local_20.f_294[iVar0], &iVar2, fVar1, 0, 1, 1);
			PED::SET_PED_KEEP_TASK(Local_20.f_294[iVar0], true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_20.f_294[iVar0], 5, true);
		}
		iVar0++;
	}
	Local_20.f_50 = 1;
	return true;
}

void func_85()
{
	switch (Local_20.f_514)
	{
		case 0:
			Local_20.f_302 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_20.f_51, Global_36, true);
			break;
		case 1:
			if (Local_20.f_308 > 0)
			{
				Local_20.f_502 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_20.f_340[3], Global_36);
				if (Local_20.f_502)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(Local_20.f_340[4]))
					{
						if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_20.f_340[4], Global_36))
						{
							Local_20.f_502 = 0;
						}
					}
				}
			}
			else
			{
				Local_20.f_500 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_20.f_340[2], Global_36);
			}
			break;
		case 2:
			Local_20.f_499 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_20.f_340[1], Global_36);
			break;
		case 3:
			Local_20.f_498 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_20.f_340[0], Global_36);
			break;
		case 4:
			Local_20.f_501 = Local_20.f_98[0] < 30f;
			break;
	}
	Local_20.f_514++;
	Local_20.f_514 = (Local_20.f_514 % 5);
	if (!__LIB_4__::func_156(&Local_20, 1))
	{
		if (func_210())
		{
			func_90(1);
			func_211();
			func_91(&Local_20, 3);
		}
	}
}

int func_86()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar3 = 1;
	iVar4 = -1;
	iVar5 = 524288 | __LIB_2__::func_340(3, 0, 0);
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Local_20.f_98[iVar1] > 20f)
		{
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(Local_20.f_294[iVar1]))
		{
		}
		else
		{
			iVar0 = func_213(&(Local_20.f_294[iVar1]), &(Local_20.f_350[iVar1 /*21*/]), 20f, &(Local_20.f_414), &iVar3, 3f, 1, 0, "", iVar5, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (__LIB_2__::func_341(&(Local_20.f_350[iVar1 /*21*/])))
			{
				if (Local_20.f_480 == -1)
				{
					Local_20.f_480 = iVar1;
				}
				if (Local_20.f_350[iVar1 /*21*/].f_1 == 0)
				{
					if (!__LIB_2__::func_703(&(Local_20.f_414[0 /*17*/]), 0))
					{
						if (Local_20.f_308 >= 1)
						{
							__LIB_2__::func_482(&(Local_20.f_414[0 /*17*/]), 1, 1);
						}
					}
				}
				else if (Local_20.f_350[iVar1 /*21*/].f_1 == 1)
				{
					if (!__LIB_2__::func_703(&(Local_20.f_414[1 /*17*/]), 0))
					{
						__LIB_2__::func_482(&(Local_20.f_414[1 /*17*/]), 1, 1);
					}
				}
				if (Local_20.f_350[iVar1 /*21*/].f_1 != -1)
				{
					if (!Local_20.f_503)
					{
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (__LIB_2__::func_1(Local_20.f_294[iVar2], 0, 0))
							{
								__LIB_2__::func_504(Local_20.f_294[iVar2], iVar2 + 500);
							}
							iVar2++;
						}
						func_218();
						Local_20.f_503 = 1;
					}
					func_64(&Local_20, 0, 0, 1);
					Local_20.f_516 = Global_35;
				}
			}
			if (iVar0 != -1)
			{
				iVar4 = iVar0;
				if (iVar4 != -1)
				{
					Local_20.f_479 = iVar4;
				}
			}
		}
		iVar1++;
	}
	if (iVar4 != -1)
	{
		Local_20.f_503 = 0;
	}
	return iVar4;
}

bool func_87(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	else if (iParam0 == 1)
	{
		func_110(&Local_20, 256);
		return false;
	}
	if (func_219())
	{
		return false;
	}
	if (Local_20.f_498)
	{
		if (!Local_20.f_500)
		{
			if (!func_220(&Local_20))
			{
				if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_20.f_294[0], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_20.f_294[1], Global_35, 17)) || (__LIB_2__::func_1(Local_20.f_294[2], 0, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_20.f_294[2], Global_35, 17)))
				{
					if (func_221() && Local_20.f_496 >= 4f)
					{
						return false;
					}
					return true;
				}
			}
			else if (PED::_0x7F9B9791D4CB71F6(Local_20.f_294[0], Global_35, 1, 0) == 1)
			{
				return true;
			}
		}
	}
	if (__LIB_0__::func_265(&uLocal_14) > 15f && !Local_20.f_498)
	{
		if (Local_20.f_499 && !Local_20.f_500)
		{
			if (func_221() && Local_20.f_496 >= 4f)
			{
				return false;
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void func_89()
{
	__LIB_2__::func_104(&(Local_20.f_5), 1);
	__LIB_2__::func_105(&(Local_20.f_5), 1);
	__LIB_2__::func_50(&(Local_20.f_5), 1);
	__LIB_2__::func_51(&(Local_20.f_5), 1);
	__LIB_2__::func_111(&(Local_20.f_5), 1);
	__LIB_2__::func_52(&(Local_20.f_5), 1);
	__LIB_2__::func_180(&(Local_20.f_5), 1);
	__LIB_2__::func_662(&(Local_20.f_5), 1);
	__LIB_2__::func_507(&(Local_20.f_5), 250);
}

void func_90(bool bParam0)
{
	__LIB_2__::func_408(&(Local_20.f_481), bParam0);
}

void func_91(var uParam0, int iParam1)
{
	uParam0->f_308 = iParam1;
}

void func_92()
{
	if (!__LIB_4__::func_156(&Local_20, 16))
	{
		if (func_226())
		{
			func_227();
			func_110(&Local_20, 16);
		}
	}
	else if (!func_24(&Local_20, 32) && Local_20.f_506)
	{
		if (func_228() && !__LIB_2__::func_136(Global_35, 0))
		{
			if (!func_24(&Local_20, 32))
			{
				__LIB_2__::func_504(Local_20.f_294[0], 0);
				__LIB_2__::func_504(Local_20.f_294[1], 500);
				if (__LIB_2__::func_1(Local_20.f_294[2], 0, 0))
				{
					__LIB_2__::func_504(Local_20.f_294[2], 800);
				}
				__LIB_2__::func_315(1891783641, Local_20.f_294[0], 1);
				__LIB_4__::func_153("REOTE_START");
				if (bLocal_17)
				{
					func_83(&Local_20, Local_20.f_294[0], Global_35, "GANG_INTERACT_HOLD_IT", -1073741824 /* Float: -2f */, 1, 1744022339, 3, 1);
				}
				else
				{
					func_83(&Local_20, Local_20.f_294[0], Global_35, "GANG_INTERACT_HOLD_IT", -1073741824 /* Float: -2f */, 1, 1744022339, 2, 1);
				}
				__LIB_2__::func_360(&(Local_20.f_414[0 /*17*/]), __LIB_2__::func_460(7));
				Local_20.f_414[0 /*17*/].f_13 = "RE_ODT_VAL_V1_CALLOVER_POS_RESP";
				__LIB_1__::func_148(&uLocal_14);
				func_232(&Local_20, 32);
				return;
			}
		}
	}
	else if (Local_20.f_506)
	{
		func_233();
		return;
	}
	if (!Local_20.f_44)
	{
		if (Local_20.f_310 > 2)
		{
			if (Local_20.f_98[0] < (30f / 3f))
			{
				func_218();
			}
		}
	}
	switch (Local_20.f_310)
	{
		case 0:
			if (!__LIB_0__::func_75(&(Local_20.f_318[4 /*3*/])))
			{
				if (Local_20.f_501)
				{
					func_27(1);
					__LIB_1__::func_283(&(Local_20.f_318[4 /*3*/]), 0);
				}
			}
			else if (__LIB_1__::func_285(&(Local_20.f_318[4 /*3*/]), 0.25f))
			{
				if (bLocal_17)
				{
					func_83(&Local_20, Local_20.f_294[1], Local_20.f_294[0], "CHAT_PEDTYPE_DIALOG", 30f, 1, 291934926, 1, 1);
				}
				else
				{
					func_83(&Local_20, Local_20.f_294[1], Local_20.f_294[0], "CHAT_PEDTYPE_DIALOG", 30f, 1, 291934926, 2, 1);
				}
				func_234(&Local_20, 1);
			}
			break;
		case 1:
			if ((__LIB_2__::func_227(0, 1, Local_20.f_516, 1) && __LIB_2__::func_227(-1.5f, 1, 0, 0)) && !__LIB_2__::func_136(Local_20.f_294[1], 0))
			{
				if (bLocal_17)
				{
					func_83(&Local_20, Local_20.f_294[1], Local_20.f_294[0], "CHAT_PEDTYPE_DIALOG", 30f, 1, 291934926, 3, 1);
				}
				else
				{
					func_83(&Local_20, Local_20.f_294[1], Local_20.f_294[0], "CHAT_PEDTYPE_DIALOG", 30f, 1, 291934926, 4, 1);
				}
				func_234(&Local_20, 2);
			}
			break;
		case 2:
			if (!func_24(&Local_20, 4))
			{
				if (__LIB_2__::func_227(0, 1, Local_20.f_516, 1) && !__LIB_2__::func_136(Local_20.f_294[1], 0))
				{
					func_83(&Local_20, Local_20.f_294[0], Local_20.f_294[1], "AMBUSH_BRP_V2_LAUGH_A", 30f, 1, 291934926, 0, 0);
					if (__LIB_2__::func_1(Local_20.f_294[2], 0, 0))
					{
						func_83(&Local_20, Local_20.f_294[2], Local_20.f_294[1], "AMBUSH_BRP_LAUGH_A", 30f, 1, 291934926, 0, 0);
					}
					func_232(&Local_20, 4);
				}
			}
			if (((__LIB_2__::func_227(0, 1, Local_20.f_516, 1) && __LIB_2__::func_227(0, 1, Local_20.f_294[0], 1)) && (__LIB_2__::func_1(Local_20.f_294[2], 0, 0) && __LIB_2__::func_227(0, 1, Local_20.f_294[2], 1))) && __LIB_2__::func_227(1f, 1, 0, 0))
			{
				if (bLocal_17)
				{
					if (func_83(&Local_20, Local_20.f_294[0], Local_20.f_294[1], "CHAT_PEDTYPE_DIALOG", 30f, 1, 291934926, 3, 1))
					{
						func_234(&Local_20, 3);
					}
				}
				else if (func_83(&Local_20, Local_20.f_294[0], Local_20.f_294[1], "CHAT_PEDTYPE_DIALOG", 30f, 1, 291934926, 4, 1))
				{
					func_234(&Local_20, 3);
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_227(0, 1, Local_20.f_516, 1) && __LIB_2__::func_227(-3f, 1, 0, 0))
			{
				if (bLocal_17)
				{
					func_83(&Local_20, Local_20.f_294[1], Local_20.f_294[0], "SORRY_TO_HEAR_THAT", 30f, 1, 291934926, 2, 1);
				}
				else
				{
					func_83(&Local_20, Local_20.f_294[1], Local_20.f_294[0], "SORRY_TO_HEAR_THAT", 30f, 1, 291934926, 1, 1);
				}
				func_234(&Local_20, 4);
			}
			break;
		case 4:
			if (__LIB_2__::func_227(0, 1, Local_20.f_516, 1) && __LIB_2__::func_227(-3f, 1, 0, 0))
			{
				if (bLocal_17)
				{
					func_83(&Local_20, Local_20.f_294[0], Local_20.f_294[1], "DISMISSIVE_REACT", 30f, 1, 291934926, 2, 1);
				}
				else
				{
					func_83(&Local_20, Local_20.f_294[0], Local_20.f_294[1], "DISMISSIVE_REACT", 30f, 1, 291934926, 1, 1);
				}
				func_234(&Local_20, 5);
			}
			break;
		case 5:
			if (__LIB_2__::func_227(0, 1, Local_20.f_516, 1) && __LIB_2__::func_227(-4f, 1, 0, 0))
			{
				func_83(&Local_20, Local_20.f_294[0], Local_20.f_294[1], "CHAT_PEDTYPE_DIALOG", 30f, 1, 291934926, 2, 1);
				func_234(&Local_20, 6);
			}
			break;
		case 6:
			if (__LIB_2__::func_227(8f, 1, 0, 0))
			{
				if (bLocal_17)
				{
					func_83(&Local_20, Local_20.f_294[1], Global_35, "GOODBYE_GANG_CUSTOM", -1073741824 /* Float: -2f */, 1, 1744022339, 2, 1);
				}
				else
				{
					func_83(&Local_20, Local_20.f_294[1], Global_35, "GOODBYE_GANG_CUSTOM", -1073741824 /* Float: -2f */, 1, 1744022339, 1, 1);
				}
				func_235(1, 1.5f);
				if (__LIB_2__::func_1(Local_20.f_294[1], 0, 0))
				{
					func_235(2, 4.5f);
				}
				func_235(0, 7.75f);
				func_234(&Local_20, 8);
			}
			break;
		case 8:
			if (func_236())
			{
				func_237();
				func_234(&Local_20, 9);
			}
			break;
		case 9:
			break;
		case 10:
			break;
	}
}

bool func_93()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar0 = -1;
	iVar0 = func_86();
	if (iVar0 == -1)
	{
		if (Local_20.f_516 != Global_35 && __LIB_1__::func_285(&(Local_20.f_318[5 /*3*/]), 3f))
		{
			func_65(&Local_20, 0);
			func_218();
			func_64(&Local_20, 1, 0, 1);
			__LIB_0__::func_37(&(Local_20.f_318[5 /*3*/]));
		}
	}
	if (__LIB_2__::func_1(Local_20.f_294[0], 0, 0))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_20.f_294[0], false);
		Local_20.f_496 = Local_20.f_98[0];
		Local_20.f_497 = __LIB_0__::func_94(Local_20.f_294[0], __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */), 1);
	}
	switch (iVar0)
	{
		case 0:
			if (!bLocal_19)
			{
				func_240();
				func_241(&Local_20, 9);
			}
			break;
		case 1:
			func_242();
			func_241(&Local_20, 11);
			break;
	}
	if (func_243())
	{
		func_244();
	}
	switch (Local_20.f_311)
	{
		case 0:
			if (func_245())
			{
				__LIB_1__::func_283(&(Local_20.f_318[1 /*3*/]), 0);
				__LIB_2__::func_504(Local_20.f_294[0], 0);
				func_241(&Local_20, 1);
			}
			break;
		case 1:
			if (func_246())
			{
				func_247();
				Local_20.f_513 = 1;
				if (Local_20.f_506)
				{
					bLocal_19 = true;
				}
				__LIB_2__::func_504(Local_20.f_294[1], 0);
				if (__LIB_2__::func_1(Local_20.f_294[2], 0, 0))
				{
					__LIB_2__::func_504(Local_20.f_294[2], 0);
				}
				if (!func_220(&Local_20))
				{
					PED::_0x89F5E7ADECCCB49C(Local_20.f_294[1], "intimidate");
					if (__LIB_2__::func_1(Local_20.f_294[2], 0, 0))
					{
						PED::_0x89F5E7ADECCCB49C(Local_20.f_294[2], "brave");
					}
				}
				func_241(&Local_20, 2);
			}
			break;
		case 2:
			if (func_248())
			{
				if (func_249())
				{
					__LIB_1__::func_148(&(Local_20.f_318[1 /*3*/]));
					func_241(&Local_20, 6);
				}
				else if (Local_20.f_506)
				{
					func_250();
					func_232(&Local_20, 16);
					func_241(&Local_20, 4);
				}
				else
				{
					func_251();
					func_232(&Local_20, 16);
					if (!func_220(&Local_20))
					{
						__LIB_2__::func_360(&(Local_20.f_414[0 /*17*/]), __LIB_2__::func_460(8));
						func_241(&Local_20, 3);
					}
					else
					{
						func_241(&Local_20, 6);
						func_252(&Local_20, 5);
					}
				}
			}
			break;
		case 3:
			if (__LIB_1__::func_285(&(Local_20.f_318[1 /*3*/]), 8f) && !func_219())
			{
				if (func_249())
				{
					__LIB_1__::func_148(&(Local_20.f_318[1 /*3*/]));
					func_241(&Local_20, 6);
				}
				else
				{
					func_253();
					func_241(&Local_20, 8);
				}
				else
				{
					Jump @1675; //curOff = 736
					if (func_254())
					{
						func_255();
						__LIB_2__::func_592(&(Local_20.f_414), 1, 1);
						func_241(&Local_20, 5);
					}
					Jump @1675; //curOff = 768
					if (__LIB_2__::func_227(-4f, 1, 0, 0))
					{
						func_241(&Local_20, 18);
					}
					Jump @1675; //curOff = 794
					__LIB_1__::func_283(&(Local_20.f_318[6 /*3*/]), 0);
					if (func_257())
					{
						__LIB_2__::func_357(Local_20.f_294[0], Global_36, 5, 1, 2);
						__LIB_2__::func_357(Local_20.f_294[1], Global_36, 5, 1, 2);
						if (__LIB_2__::func_1(Local_20.f_294[2], 0, 0))
						{
							__LIB_2__::func_357(Local_20.f_294[2], Global_36, 5, 1, 2);
						}
						PED::SET_PED_USING_ACTION_MODE(Local_20.f_294[0], true, -1, 0);
						PED::SET_PED_USING_ACTION_MODE(Local_20.f_294[1], true, -1, 0);
						if (__LIB_2__::func_1(Local_20.f_294[2], 0, 0))
						{
							PED::SET_PED_USING_ACTION_MODE(Local_20.f_294[2], true, -1, 0);
						}
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_20.f_294[0], Global_35, -1, 3f, 0.3f, 0.52f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_20.f_294[1], Global_35, -1, 3f, 0.3f, 0.52f);
						if (__LIB_2__::func_1(Local_20.f_294[2], 0, 0))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_20.f_294[2], Global_35, -1, 3f, 0.3f, 0.52f);
						}
						sVar2 = func_259(&Local_20, 0, &iVar1);
						func_83(&Local_20, Local_20.f_294[0], Global_35, sVar2, -1073741824 /* Float: -2f */, 1, 1744022339, iVar1, 1);
						__LIB_2__::func_592(&(Local_20.f_414), 1, 1);
						func_241(&Local_20, 7);
					}
					Jump @1675; //curOff = 1117
					if (__LIB_2__::func_227(-3f, 1, 0, 0))
					{
						func_241(&Local_20, 18);
					}
					Jump @1675; //curOff = 1143
					if (__LIB_1__::func_285(&(Local_20.f_318[1 /*3*/]), 2f))
					{
						__LIB_1__::func_283(&(Local_20.f_318[2 /*3*/]), 0);
						if (__LIB_1__::func_285(&(Local_20.f_318[2 /*3*/]), 5f) && !func_219())
						{
							func_260();
							__LIB_1__::func_148(&(Local_20.f_318[2 /*3*/]));
							func_110(&Local_20, 4);
							func_241(&Local_20, 13);
						}
						else if (func_249())
						{
							__LIB_1__::func_148(&(Local_20.f_318[2 /*3*/]));
							func_110(&Local_20, 4);
							if (Local_20.f_98[0] < Local_20.f_495)
							{
								Local_20.f_495 = (Local_20.f_98[0] - 1f);
							}
							func_241(&Local_20, 15);
						}
					}
					Jump @1675; //curOff = 1299
					func_261();
					func_110(&Local_20, 4);
					func_241(&Local_20, 10);
					Jump @1675; //curOff = 1321
					if (__LIB_2__::func_227(-5f, 1, Local_20.f_516, 1))
					{
						if (bLocal_17)
						{
							func_83(&Local_20, Local_20.f_294[0], Global_35, "GANG_HOLD_IT_SUPPORT", -1073741824 /* Float: -2f */, 1, 1744022339, 1, 1);
						}
						else
						{
							func_83(&Local_20, Local_20.f_294[0], Global_35, "GANG_HOLD_IT_SUPPORT", -1073741824 /* Float: -2f */, 1, 1744022339, 2, 1);
						}
					}
					if (__LIB_1__::func_285(&(Local_20.f_318[2 /*3*/]), 3f))
					{
						func_241(&Local_20, 15);
					}
					Jump @1675; //curOff = 1445
					__LIB_2__::func_592(&(Local_20.f_414), 1, 1);
					func_241(&Local_20, 18);
					Jump @1675; //curOff = 1467
					if (__LIB_1__::func_285(&(Local_20.f_318[2 /*3*/]), 1.5f))
					{
						__LIB_2__::func_592(&(Local_20.f_414), 1, 1);
						func_241(&Local_20, 18);
					}
					Jump @1675; //curOff = 1509
					if (__LIB_1__::func_285(&(Local_20.f_318[2 /*3*/]), 3f))
					{
						func_241(&Local_20, 15);
					}
					Jump @1675; //curOff = 1536
					if (func_249())
					{
						func_241(&Local_20, 16);
					}
					else if (__LIB_1__::func_285(&(Local_20.f_318[2 /*3*/]), 10f) && (ENTITY::GET_ENTITY_SPEED(Global_35) < 0.5f || Local_20.f_496 >= Local_20.f_497))
					{
						__LIB_2__::func_592(&(Local_20.f_414), 1, 1);
						func_241(&Local_20, 18);
					}
					Jump @1675; //curOff = 1631
					if (func_249())
					{
						func_241(&Local_20, 6);
					}
					Jump @1675; //curOff = 1648
					Jump @1675; //curOff = 1651
					if (func_262())
					{
						return true;
					}
					Jump @1675; //curOff = 1665
					return true;
				}
				return false;
			}
			default:
				break;
	}
}

void func_94()
{
	Local_20.f_46 = 1;
}

void func_104(int iParam0)
{
	if (__LIB_2__::func_1(Local_20.f_294[iParam0], 0, 0))
	{
		PED::_0x58F7DB5BD8FA2288(Local_20.f_294[iParam0]);
		PED::_0x58F7DB5BD8FA2288(Local_20.f_294[iParam0]);
	}
}

void func_110(var uParam0, int iParam1)
{
	uParam0->f_303 = (uParam0->f_303 || iParam1);
}

void func_111(var uParam0, int iParam1)
{
	uParam0->f_303 = (uParam0->f_303 - (uParam0->f_303 && iParam1));
}

void func_151(var uParam0)
{
	uParam0->f_340[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-248.2427f, 767.3851f, 117.6962f, 0f, 0f, 19.99999f, 8.021376f, 8.25f, 3.425777f, "volAvoidance");
	uParam0->f_340[6] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-247.8584f, 767.5251f, 117.6962f, 0f, 0f, 19.99999f, 30f, 30f, 30f, "volRestriction");
	uParam0->f_340[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-246.2095f, 767.4208f, 113.6538f, 0f, 0f, 20f, 5f, 5f, 6f, "volTrigger");
	uParam0->f_340[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-246.2095f, 767.4208f, 113.6538f, 0f, 0f, 20f, 10f, 10f, 6f, "volTriggerHeadLook");
	uParam0->f_340[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_340[2], -242.9469f, 769.7524f, 123.7568f, 0f, 0f, 19.99999f, 11.45307f, 16.76284f, 7.591751f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_340[2], -241.0029f, 771.5858f, 119.4122f, 0f, 0f, 19.99999f, 9.933021f, 16.76284f, 7.591751f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_340[2], -236.938f, 767.4852f, 119.4122f, 0f, 0f, 19.99999f, 9.933021f, 16.76284f, 7.591751f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_340[2], -250.194f, 768.1154f, 117.1701f, 0f, 0f, 20.19496f, 3.404439f, 6f, 2.507046f);
	uParam0->f_340[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-241.5406f, 769.8246f, 118.458f, 0f, 0f, 20f, 7f, 8.25f, 3f, "volLeaveSpecial");
	uParam0->f_340[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-242.9411f, 765.8042f, 118.1909f, 0f, 0f, 19.99999f, 2f, 1.709049f, 2.361003f, "volLeaveExclude");
	uParam0->f_340[7] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-248.9315f, 766.938f, 117.5334f, 0f, 0f, 20f, 5.5f, 5.5f, 2f, "volFleeArea");
	uParam0->f_340[8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volBlockPlayer");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_340[8], -247.8475f, 762.4009f, 117.2236f, 0f, 0f, 19f, 8f, 8f, 5f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_340[8], -243.4058f, 761.7926f, 117.2236f, 0f, 0f, 62.91573f, 3.794674f, 3.895276f, 5f);
}

void func_152(var uParam0)
{
	uParam0->f_340[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-331.1804f, 751.8225f, 117.0386f, 0f, 0f, 8.99999f, 10.89209f, 12.67523f, 3.425777f, "volAvoidance");
	uParam0->f_340[6] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-332.3898f, 749.4594f, 117.6962f, 0f, 0f, 19.99999f, 30f, 30f, 30f, "volRestriction");
	uParam0->f_340[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-330.2261f, 747.9407f, 113.6538f, 0f, 0f, 19.99999f, 5f, 5f, 6f, "volTrigger");
	uParam0->f_340[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-331.584f, 747.3034f, 114.2691f, 0f, 0f, 19.99999f, 12f, 12f, 6f, "volTriggerHeadLook");
	uParam0->f_340[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_340[2], -323.1758f, 748.6038f, 113.8471f, 0f, 0f, 5.99999f, 10.79356f, 2.058728f, 7.591751f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_340[2], -326.7075f, 759.5689f, 119.4122f, 0f, 0f, 9.999989f, 8f, 8f, 7.591751f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_340[2], -333.807f, 760.5758f, 119.4122f, 0f, 0f, 100f, 5f, 6f, 7.591751f);
	uParam0->f_340[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-333.0937f, 763.015f, 117.5578f, 0f, 0f, 39.88562f, 7f, 8.25f, 4.536247f, "volLeaveSpecial");
}

void func_154(var uParam0, int iParam1, char[4] cParam2, vector3 vParam3, float fParam6, float fParam7, int iParam8, float fParam9)
{
	__LIB_2__::func_663(&(uParam0->f_462));
	uParam0->f_462 = iParam1;
	uParam0->f_462.f_8 = fParam7;
	uParam0->f_462.f_6 = fParam6;
	uParam0->f_462.f_11 = iParam8;
	uParam0->f_462.f_7 = fParam7;
	uParam0->f_462.f_3 = { vParam3 };
	uParam0->f_462.f_9 = fParam9;
	__LIB_2__::func_668(&(uParam0->f_449), &(uParam0->f_462), cParam2);
}

char* func_156(int iParam0)
{
	int iVar0;
	iVar0 = func_324(iParam0);
	return func_325(iVar0);
}

int func_157(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = joaat("META_OUTFIT_DEFAULT");
	switch (uParam0->f_305)
	{
		case 0:
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1196306368;
					break;
				case 1:
					iVar0 = -948974859;
					break;
				case 2:
					iVar0 = -1138903983;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1737912400;
					break;
				case 1:
					iVar0 = -1411705908;
					break;
			}
			break;
	}
	return iVar0;
}

struct<4> func_158(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_313)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { -247.12f, 766.405f, 117.1226f };
					Var0.f_3 = 291.712f;
					break;
				case 1:
					Var0 = { -245.446f, 767.982f, 117.1776f };
					Var0.f_3 = 132.851f;
					break;
				case 2:
					Var0 = { -244.6729f, 766.3258f, 117.217f };
					Var0.f_3 = 84.056f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { -330.915f, 747.5577f, 115.9863f };
					Var0.f_3 = 290.7728f;
					break;
				case 1:
					Var0 = { -329.061f, 748.4161f, 116.0185f };
					Var0.f_3 = 127.3459f;
					break;
				case 2:
					Var0 = { -328.53f, 746.858f, 116.035f };
					Var0.f_3 = 48.571f;
					break;
			}
			break;
	}
	return Var0;
}

struct<4> func_159(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_313)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { -250.0299f, 765.6484f, 116.4527f };
					Var0.f_3 = -71.288f;
					break;
				case 1:
					Var0 = { -250.7125f, 767.7352f, 116.4848f };
					Var0.f_3 = -69.149f;
					break;
				case 2:
					Var0 = { -251.3497f, 769.8052f, 116.49f };
					Var0.f_3 = -75.944f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 2:
					Var0 = { -331.7126f, 752.2195f, 115.9961f };
					Var0.f_3 = 277.0134f;
					break;
				case 0:
					Var0 = { -331.2302f, 750.8293f, 115.9932f };
					Var0.f_3 = 270.6285f;
					break;
				case 1:
					Var0 = { -332.5f, 756.9849f, 115.9331f };
					Var0.f_3 = -43.93f;
					break;
			}
			break;
	}
	return Var0;
}

bool func_195(var uParam0)
{
	return __LIB_4__::func_161(&(uParam0->f_314), uParam0, &(uParam0->f_294), 0);
}

bool func_201(var uParam0)
{
	if (uParam0->f_505 <= 0f)
	{
		return false;
	}
	if (uParam0->f_302 > func_404(uParam0) && uParam0->f_302 > (uParam0->f_505 + 10f))
	{
		return true;
	}
	return false;
}

bool func_210()
{
	if (__LIB_4__::func_285(&(Local_20.f_294), &(Local_20.f_5), &(Local_20.f_5.f_16), &(Local_20.f_491), 0, 2, 1))
	{
		if (Local_20.f_5.f_16 == 8192)
		{
			if (Local_20.f_500 || Local_20.f_502)
			{
				return false;
			}
		}
		__LIB_3__::func_470(&(Local_20.f_314), Local_20.f_5.f_16);
		return true;
	}
	if (__LIB_4__::func_156(&Local_20, 256))
	{
		return true;
	}
	return false;
}

void func_211()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	__LIB_2__::func_504(Local_20.f_294[0], 0);
	if (!func_24(&Local_20, 8))
	{
		sVar1 = func_408(&Local_20, iVar0, &iVar2);
		func_83(&Local_20, Local_20.f_294[0], Global_35, sVar1, -1073741824 /* Float: -2f */, 1, 1744022339, iVar2, 1);
		func_232(&Local_20, 8);
	}
	func_110(&Local_20, 1);
	if (!Local_20.f_48)
	{
		__LIB_3__::func_426(&Local_20, &(Local_20.f_48), Local_20.f_3, &(Local_20.f_51.f_6));
	}
	iVar3 = 68157440;
	iVar4 = 4096;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_20.f_294[iVar0], 0, 1))
		{
			if (iVar0 != 0)
			{
				__LIB_2__::func_504(Local_20.f_294[iVar0], 0);
			}
			if (!func_24(&Local_20, 8))
			{
				sVar1 = func_408(&Local_20, iVar0, &iVar2);
				func_83(&Local_20, Local_20.f_294[iVar0], Global_35, sVar1, -1073741824 /* Float: -2f */, 1, 1744022339, iVar2, 1);
				func_232(&Local_20, 8);
			}
			__LIB_2__::func_73(Local_20.f_294[iVar0], &(Local_20.f_298[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			__LIB_2__::func_357(Local_20.f_294[iVar0], Global_36, 3, 1, 1);
			TASK::TASK_COMBAT_PED(Local_20.f_294[iVar0], Global_35, iVar3, iVar4);
		}
		iVar0++;
	}
}

int func_213(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_410(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_218()
{
	if (!Local_20.f_48)
	{
		__LIB_3__::func_426(&Local_20, &(Local_20.f_48), Local_20.f_3, &(Local_20.f_51.f_6));
	}
	if (!Local_20.f_44)
	{
		Local_20.f_44 = 1;
	}
}

bool func_219()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_341(&(Local_20.f_350[iVar0 /*21*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_220(var uParam0)
{
	return uParam0->f_310 >= 8;
}

bool func_221()
{
	int iVar0;
	return __LIB_3__::func_263(&(Local_20.f_194), iVar0, 1084227584 /* Float: 5f */, 0, 0);
}

bool func_226()
{
	if ((Local_20.f_499 && !Local_20.f_500) && !__LIB_3__::func_291(Global_35, 1))
	{
		return true;
	}
	return false;
}

void func_227()
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_20.f_294[iVar0], 0, 0))
		{
			bVar1 = true;
			if (Local_20.f_313 == 1)
			{
				if (iVar0 == 2)
				{
					bVar1 = false;
				}
			}
			func_419(&Local_20, iVar0, Global_35, 1, 2, 8000f, bVar1);
		}
		iVar0++;
	}
}

bool func_228()
{
	if (func_226())
	{
		if (Local_20.f_506)
		{
			if (ENTITY::GET_ENTITY_SPEED(Global_35) < 7f)
			{
				if (func_221() && Local_20.f_496 >= 4f)
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

void func_232(var uParam0, int iParam1)
{
	uParam0->f_304 = (uParam0->f_304 || iParam1);
}

void func_233()
{
	vector3 vVar0;
	float fVar3;
	fVar3 = (Local_20.f_98[0] + 15f);
	__LIB_4__::func_162(&(Local_20.f_489), &(Local_20.f_481), Local_20.f_294[0], vVar0, 0, 4000, 1500, 1000, 1, 0, 1, fVar3);
}

void func_234(var uParam0, int iParam1)
{
	uParam0->f_310 = iParam1;
}

void func_235(int iParam0, float fParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	PED::_0x58F7DB5BD8FA2288(Local_20.f_294[iParam0]);
	PED::_0x935CF6E42BAF7F4D(Local_20.f_294[iParam0]);
	__LIB_0__::func_325(&(Local_20.f_298[iParam0]));
	if (__LIB_2__::func_1(Local_20.f_197[iParam0 /*32*/].f_11, 0, 0))
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_20.f_197[iParam0 /*32*/].f_11, 0f, -2f, 0f) };
		fVar4 = (ENTITY::GET_ENTITY_HEADING(Local_20.f_197[iParam0 /*32*/].f_11) + 180f);
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (__LIB_2__::func_1(Local_20.f_197[iParam0 /*32*/].f_11, 0, 0))
	{
		TASK::TASK_MOUNT_ANIMAL(0, Local_20.f_197[iParam0 /*32*/].f_11, -1, -1, 1f, 1, 0, 0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 0.101f, -1, 0.25f, 0, fVar4);
	}
	TASK::TASK_STAND_STILL(0, -1);
	__LIB_1__::func_474(Local_20.f_294[iParam0], &iVar0, fParam1, 0, 1, 1);
}

bool func_236()
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_20.f_294[iVar0], 0, 0))
		{
			if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Local_20.f_294[iVar0], true))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_237()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar1 = func_421();
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (__LIB_2__::func_1(Local_20.f_294[iVar0], 0, 0))
		{
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 16:
							fVar3 = 0f;
							break;
						case 36:
							fVar3 = 1.75f;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 16:
							fVar3 = 1f;
							break;
						case 36:
							fVar3 = 1f;
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 16:
							fVar3 = 1.75f;
							break;
						case 36:
							fVar3 = 0f;
							break;
					}
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, __LIB_2__::func_116(iVar1, 1), 15f, 2.5f, 0, 0);
			__LIB_1__::func_474(Local_20.f_294[iVar0], &iVar2, fVar3, 0, 1, 1);
		}
		iVar0++;
	}
	Local_20.f_50 = 1;
}

void func_240()
{
	__LIB_1__::func_148(&(Local_20.f_318[2 /*3*/]));
	func_83(&Local_20, Global_35, Local_20.f_294[0], "D3BEE9FF_01", 50f, 1, 1744022339, 0, 1);
}

void func_241(var uParam0, int iParam1)
{
	uParam0->f_311 = iParam1;
}

void func_242()
{
	__LIB_1__::func_148(&(Local_20.f_318[2 /*3*/]));
	func_83(&Local_20, Global_35, Local_20.f_294[0], "5238CC48_0", 50f, 1, 1744022339, 0, 1);
}

bool func_243()
{
	if (Local_20.f_313 != 0)
	{
		return false;
	}
	if (Local_20.f_506)
	{
		if (Local_20.f_311 <= 1)
		{
			return false;
		}
	}
	else if (Local_20.f_311 < 0)
	{
		return false;
	}
	if (Local_20.f_311 >= 6)
	{
		return false;
	}
	return true;
}

void func_244()
{
	int iVar0;
	if (Local_20.f_313 == 0)
	{
		if (__LIB_2__::func_1(Local_20.f_294[2], 0, 0))
		{
			if (!__LIB_4__::func_156(&Local_20, 8192))
			{
				if (__LIB_2__::func_157(Local_20.f_340[8], Global_36))
				{
					__LIB_2__::func_357(Local_20.f_294[2], Global_36, 1, 1, 2);
					PED::FORCE_PED_MOTION_STATE(Local_20.f_294[2], joaat("MOTIONSTATE_WALK"), false, 0, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -244.4002f, 765.3864f, 117.1474f, 1f, 20000, 1193033728 /* Float: 40000f */, 0.25f, 0);
					__LIB_2__::func_45(0, Global_35, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, 0.3f, 0.52f);
					__LIB_1__::func_474(Local_20.f_294[2], &iVar0, 0, 0, 1, 1);
					func_110(&Local_20, 8192);
				}
			}
			else if (!__LIB_4__::func_156(&Local_20, 16384))
			{
				PED::SET_PED_RESET_FLAG(Local_20.f_294[2], 12, true);
				if (ENTITY::IS_ENTITY_AT_COORD(Local_20.f_294[2], -244.4002f, 765.3864f, 117.1474f, 0.3f, 0.3f, 3f, false, true, 0))
				{
					func_110(&Local_20, 16384);
				}
			}
		}
	}
}

bool func_245()
{
	if (Local_20.f_506)
	{
		if (!func_24(&Local_20, 32) || __LIB_2__::func_227(0f, 1, Local_20.f_294[0], 1))
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

bool func_246()
{
	if (__LIB_1__::func_285(&(Local_20.f_318[1 /*3*/]), 0.25f) || ((!Local_20.f_506 || func_24(&Local_20, 32)) && !func_219()))
	{
		return true;
	}
	return false;
}

void func_247()
{
	int iVar0;
	func_426(0, 1);
	if (!func_220(&Local_20) || Local_20.f_506)
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_20.f_294[0], Global_35, -1, -1f, 0.3f, 0.52f);
	}
	Local_20.f_495 = Local_20.f_496;
	__LIB_4__::func_153("REOTE_START");
	if (!Local_20.f_506)
	{
		if (bLocal_17)
		{
			func_83(&Local_20, Local_20.f_294[0], Global_35, "GANG_INTERACT_CHAT_TOWN", -1073741824 /* Float: -2f */, 1, 291934926, 1, 1);
		}
		else
		{
			func_83(&Local_20, Local_20.f_294[0], Global_35, "GANG_INTERACT_CHAT_TOWN", -1073741824 /* Float: -2f */, 1, 291934926, 2, 1);
		}
	}
	else if (bLocal_17)
	{
		func_83(&Local_20, Local_20.f_294[0], Global_35, "CALLOUT_RED_HANDED_MALE", -1073741824 /* Float: -2f */, 1, 291934926, 2, 1);
	}
	else
	{
		func_83(&Local_20, Local_20.f_294[0], Global_35, "CALLOUT_RED_HANDED_MALE", -1073741824 /* Float: -2f */, 1, 291934926, 1, 1);
	}
	__LIB_2__::func_315(1891783641, Local_20.f_294[0], 1);
	if (Local_20.f_313 == 0)
	{
		if (__LIB_2__::func_1(Local_20.f_294[2], 0, 0))
		{
			func_244();
			if (!__LIB_4__::func_156(&Local_20, 8192))
			{
				__LIB_2__::func_357(Local_20.f_294[2], Global_36, 6, 1, 2);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				__LIB_2__::func_45(0, Global_35, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, 0.3f, 0.52f);
				__LIB_1__::func_474(Local_20.f_294[2], &iVar0, 0, 0, 1, 1);
			}
		}
	}
}

bool func_248()
{
	if (((((__LIB_1__::func_285(&(Local_20.f_318[1 /*3*/]), 0.5f) && !TASK::_0x0C3CB2E600C8977D(Local_20.f_294[0], 1)) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_20.f_294[0], 1)) && __LIB_2__::func_227(0, 1, Local_20.f_294[0], 1)) && __LIB_2__::func_227(-2f, 1, 0, 0)) && !func_219())
	{
		return true;
	}
	return false;
}

bool func_249()
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_20.f_294[0], false, false) };
	if (Local_20.f_496 > (Local_20.f_495 + 3f))
	{
		if (Local_20.f_497 >= Local_20.f_496 && Local_20.f_496 > 7.5f)
		{
			return true;
		}
	}
	else if ((Local_20.f_497 > (Local_20.f_496 + 1f) && Local_20.f_496 > 7.5f) && ENTITY::GET_ENTITY_SPEED(Global_35) > 1.5f)
	{
		return true;
	}
	if (Local_20.f_502)
	{
		return true;
	}
	return false;
}

void func_250()
{
	__LIB_1__::func_148(&(Local_20.f_318[1 /*3*/]));
	if (bLocal_17)
	{
		func_83(&Local_20, Local_20.f_294[1], Global_35, "HEADS_UP_STORY_MEMORY_RDST2", 70f, 1, 291934926, 1, 1);
	}
	else
	{
		func_83(&Local_20, Local_20.f_294[1], Global_35, "HEADS_UP_STORY_MEMORY_RDST2", 70f, 1, 291934926, 2, 1);
	}
	__LIB_2__::func_482(&(Local_20.f_414[0 /*17*/]), 1, 1);
	Local_20.f_495 = Local_20.f_496;
	func_426(1, 1);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_20.f_294[1], Global_35, -1, -1f, 0.3f, 0.52f);
	if (!__LIB_4__::func_156(&Local_20, 8192))
	{
		if (__LIB_2__::func_1(Local_20.f_294[2], 0, 0))
		{
			if (!Local_20.f_506)
			{
				func_426(2, 1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_20.f_294[2], Global_35, -1, -1f, 0.3f, 0.52f);
			}
		}
	}
}

void func_251()
{
	__LIB_1__::func_148(&(Local_20.f_318[1 /*3*/]));
	if (bLocal_17)
	{
		func_83(&Local_20, Local_20.f_294[0], Global_35, "HEADS_UP_TOWN", 70f, 1, 1744022339, 2, 1);
	}
	else
	{
		func_83(&Local_20, Local_20.f_294[0], Global_35, "HEADS_UP_TOWN", 70f, 1, 1744022339, 1, 1);
	}
	Local_20.f_495 = Local_20.f_496;
	if (!func_220(&Local_20))
	{
		func_426(1, 1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_20.f_294[1], Global_35, -1, -1f, 0.3f, 0.52f);
		if (!__LIB_4__::func_156(&Local_20, 8192))
		{
			if (__LIB_2__::func_1(Local_20.f_294[2], 0, 0))
			{
				func_426(2, 1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_20.f_294[2], Global_35, -1, -1f, 0.3f, 0.52f);
			}
		}
	}
}

void func_252(var uParam0, int iParam1)
{
	uParam0->f_312 = iParam1;
}

void func_253()
{
	__LIB_1__::func_148(&(Local_20.f_318[1 /*3*/]));
	if (bLocal_17)
	{
		func_83(&Local_20, Local_20.f_294[1], Global_35, "GET_LOST", 70f, 1, 1808677283, 4, 1);
	}
	else
	{
		func_83(&Local_20, Local_20.f_294[1], Global_35, "GET_LOST", 70f, 1, 1808677283, 3, 1);
	}
	func_218();
}

bool func_254()
{
	if ((__LIB_2__::func_227(0, 1, Local_20.f_294[1], 1) && __LIB_2__::func_227(0, 1, Local_20.f_294[0], 1)) && !func_219())
	{
		func_218();
		return true;
	}
	return false;
}

void func_255()
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_1__::func_148(&(Local_20.f_318[1 /*3*/]));
	func_83(&Local_20, Local_20.f_294[1], Global_35, "ITS_MALE_EXTREME_RECOGNIZE", 70f, 1, 1744022339, 1, 1);
	func_232(&Local_20, 8);
	func_104(1);
	iVar1 = 68157440;
	iVar2 = 4096;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_CONFRONT(0, Global_35, 2);
	TASK::TASK_COMBAT_PED(0, Global_35, iVar1, iVar2);
	__LIB_1__::func_474(Local_20.f_294[1], &iVar0, 1f, 0, 1, 1);
	__LIB_1__::func_336(&(Local_20.f_314.f_3), 2);
	PED::SET_PED_USING_ACTION_MODE(Local_20.f_294[0], true, -1, 0);
	if (__LIB_2__::func_1(Local_20.f_294[2], 0, 0))
	{
		PED::SET_PED_USING_ACTION_MODE(Local_20.f_294[2], true, -1, 0);
	}
}

bool func_257()
{
	switch (Local_20.f_312)
	{
		case 0:
			func_252(&Local_20, 1);
			break;
		case 1:
			if (!Local_20.f_502 || func_24(&Local_20, 16))
			{
				func_83(&Local_20, Local_20.f_294[0], Global_35, "WON_DISPUTE_ESCALATED", -1073741824 /* Float: -2f */, 1, 1744022339, 1, 1);
			}
			func_252(&Local_20, 2);
			break;
		case 2:
			if (__LIB_2__::func_227(0f, 1, Local_20.f_516, 1))
			{
				if (bLocal_17)
				{
					func_83(&Local_20, Local_20.f_294[1], Global_35, "CALLOUT_FORGET_FLEEING_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 1, 1);
				}
				else
				{
					func_83(&Local_20, Local_20.f_294[1], Global_35, "CALLOUT_FORGET_FLEEING_MALE", -1073741824 /* Float: -2f */, 1, 1744022339, 0, 1);
				}
				__LIB_4__::func_153("REOTE_STOP");
				func_252(&Local_20, 3);
			}
			break;
		case 3:
			if (func_427())
			{
				return true;
			}
			if (__LIB_2__::func_227(0f, 1, Local_20.f_516, 1))
			{
				func_83(&Local_20, Local_20.f_294[1], Global_35, "GOODBYE_GANG_CUSTOM", -1073741824 /* Float: -2f */, 1, 1744022339, 2, 1);
				func_235(1, 1.5f);
				if (__LIB_2__::func_1(Local_20.f_294[2], 0, 0))
				{
					func_235(2, 4.5f);
				}
				func_235(0, 7.75f);
				func_252(&Local_20, 5);
			}
			break;
		case 5:
			if (func_427())
			{
				return true;
			}
			if (func_236())
			{
				func_237();
				func_252(&Local_20, 6);
			}
			break;
		case 6:
			if (func_427())
			{
				return true;
			}
			break;
		case 7:
			break;
	}
	return false;
}

char* func_259(var uParam0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 0:
			if (!__LIB_1__::func_285(&(uParam0->f_318[6 /*3*/]), 7f))
			{
				*uParam2 = 2;
				return "HEADS_UP_BAD_MEMORY";
			}
			*uParam2 = 1;
			return "HEADS_UP_BAD_MEMORY";
		case 1:
		case 2:
			*uParam2 = 1;
			return "HEADS_UP_BAD_MEMORY";
		default:
			break;
	}
	return "HEADS_UP_BAD_MEMORY";
}

void func_260()
{
	int iVar0;
	__LIB_1__::func_148(&(Local_20.f_318[2 /*3*/]));
	if (bLocal_17)
	{
		func_83(&Local_20, Local_20.f_294[1], Global_35, "FINAL_WARNING", 50f, 1, 1744022339, 2, 1);
	}
	else
	{
		func_83(&Local_20, Local_20.f_294[1], Global_35, "FINAL_WARNING", 50f, 1, 1744022339, 1, 1);
	}
	__LIB_2__::func_482(&(Local_20.f_414[0 /*17*/]), 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_CONFRONT(0, Global_35, 2);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, 0.3f, 0.52f);
	__LIB_1__::func_474(Local_20.f_294[1], &iVar0, 0, 0, 1, 1);
	__LIB_1__::func_336(&(Local_20.f_314.f_3), 2);
}

void func_261()
{
	__LIB_1__::func_148(&(Local_20.f_318[2 /*3*/]));
	if (bLocal_17)
	{
		func_83(&Local_20, Local_20.f_294[1], Global_35, "GET_LOST", 50f, 1, 1744022339, 1, 1);
	}
	else
	{
		func_83(&Local_20, Local_20.f_294[1], Global_35, "GET_LOST", 50f, 1, 1744022339, 0, 1);
	}
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
	iVar4 = 0;
	sVar0 = func_408(&Local_20, 1, &iVar4);
	func_83(&Local_20, Local_20.f_294[1], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar4, 1);
	iVar5 = 68157440;
	iVar6 = 4096;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (__LIB_2__::func_1(Local_20.f_294[iVar1], 0, 0))
		{
			__LIB_2__::func_73(Local_20.f_294[iVar1], &(Local_20.f_298[iVar1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			__LIB_2__::func_357(Local_20.f_294[iVar1], Global_36, 3, 1, 1);
			switch (iVar1)
			{
				case 0:
					fVar3 = 0f;
					break;
				case 1:
					fVar3 = 0.35f;
					break;
				case 2:
					fVar3 = 0.6f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			if (PED::IS_PED_ON_MOUNT(Local_20.f_294[iVar1]))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, iVar5, iVar6);
			__LIB_1__::func_474(Local_20.f_294[iVar1], &iVar2, fVar3, 0, 1, 1);
		}
		iVar1++;
	}
	return true;
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_325(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0360_G_M_M_UniDuster_03_IRISH_01";
		case 1:
			return "0361_G_M_M_UniDuster_03_WHITE_01";
		default:
			break;
	}
	return "";
}

float func_404(var uParam0)
{
	return 60f;
}

char* func_408(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			if (func_195(uParam0))
			{
				*iParam2 = 1;
				return "OPENS_FIRE";
			}
			else
			{
				*iParam2 = 1;
				return "FIGHT";
			}
			break;
		case 1:
		case 2:
			if (func_195(uParam0))
			{
				*iParam2 = 1;
				return "OPENS_FIRE";
			}
			else
			{
				*iParam2 = 1;
				return "FIGHT";
			}
			break;
	}
	if (func_195(uParam0))
	{
		*iParam2 = 1;
		return "OPENS_FIRE";
	}
	return "FIGHT";
}

int func_410(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_410(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_419(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, bool bParam6)
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
	TASK::TASK_LOOK_AT_ENTITY(uParam0->f_294[iParam1], iParam2, BUILTIN::FLOOR(fParam5), 0, 51, 0);
	__LIB_2__::func_281(&Var0, iParam2, 0, -1, 3, 3, 2, 1, 0, 0, 0, 0);
	_NAMESPACE29::_0x66F9EB44342BB4C5(uParam0->f_294[iParam1], &Var0);
}

int func_421()
{
	int iVar0;
	float fVar1;
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, __LIB_2__::func_116(36, 0), false);
	if (fVar1 < __LIB_0__::func_94(Local_20.f_294[0], __LIB_2__::func_116(36, 0), 0))
	{
		iVar0 = 16;
	}
	else
	{
		iVar0 = 36;
	}
	return iVar0;
}

void func_426(int iParam0, int iParam1)
{
	PED::_0xAAB050DA48B57978(Local_20.f_294[iParam0], "Default_Brave", Global_35, -1, 4);
	PED::_0xEEED8FAFEC331A70(Local_20.f_294[iParam0], Global_36, iParam1);
}

bool func_427()
{
	if (Local_20.f_496 < (Local_20.f_495 + 2f) && !func_249())
	{
		if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_20.f_294[0], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_20.f_294[1], Global_35, 17)) || (__LIB_2__::func_1(Local_20.f_294[2], 0, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_20.f_294[2], Global_35, 17)))
		{
			return true;
		}
	}
	return false;
}

