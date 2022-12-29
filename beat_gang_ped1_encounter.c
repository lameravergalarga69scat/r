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
	struct<461> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 1, 0, 1, 0, 1125515264, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, -1, -1, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 1, -1082130432, 1148844442, 1148844442, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0 } ;
	bool bLocal_475 = false;
	struct<7> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, -1 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		bLocal_475 = true;
	}
	if (!bLocal_475)
	{
		func_2(ScriptParam_0);
	}
	while (true)
	{
		switch (Local_14.f_238)
		{
			case 1:
				if (__LIB_3__::func_454(&Local_14, &ScriptParam_0, 0, 0, 0, 0, 0, 1))
				{
					func_4();
					func_5(&Local_14, 0);
				}
				else if (Local_14.f_160)
				{
					func_1();
				}
				break;
			case 0:
				if (func_6())
				{
					func_5(&Local_14, 3);
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
				if (__LIB_3__::func_479(Local_14.f_51, Local_14.f_51.f_3, &(Local_14.f_194), &(Local_14.f_230), 1, 0, -1, 1))
				{
					func_10();
					func_5(&Local_14, 4);
				}
				break;
			case 4:
				if (func_11())
				{
					func_1();
				}
				if (!Local_14.f_438)
				{
					if (func_12())
					{
						Local_14.f_438 = 1;
					}
				}
				if (Local_14.f_46)
				{
					if (func_13())
					{
						func_1();
					}
				}
				else if (!Local_14.f_50)
				{
					if (func_14())
					{
						Local_14.f_50 = 1;
					}
				}
				if (func_15())
				{
					func_1();
				}
				break;
			case 6:
				func_16();
				break;
		}
		BUILTIN::WAIT(Local_14.f_158);
	}
}

void func_1()
{
	__LIB_3__::func_474(&(Local_14.f_409));
	__LIB_4__::func_38(&(Local_14.f_248));
	func_19(0);
	func_20(1);
	if ((!func_21(&Local_14, 16) && !Local_14.f_46) && !Local_14.f_44)
	{
		Local_14.f_45 = 0;
	}
	__LIB_2__::func_601(&(Local_14.f_368), 0);
	if (__LIB_2__::func_1(Local_14.f_230[0], 0, 0))
	{
		if (!func_12())
		{
			PED::DELETE_PED(&(Local_14.f_230[0]));
		}
		else if (!__LIB_1__::func_472(Local_14.f_230[0], 200f, 40f, Local_14.f_98[0], -1082130432 /* Float: -1f */))
		{
			PED::DELETE_PED(&(Local_14.f_230[0]));
		}
	}
	if (__LIB_2__::func_1(Local_14.f_230[0], 0, 0))
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(Local_14.f_230[0]))
		{
			Local_14.f_50 = 1;
		}
		else if (!PED::IS_PED_IN_COMBAT(Local_14.f_230[0], 0))
		{
			func_25();
		}
	}
	if (Local_14.f_238 < 6)
	{
		Local_14.f_238 = 6;
	}
	__LIB_1__::func_979(1024);
}

int func_2(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	Local_14.f_3 = __LIB_0__::func_81(&uParam0);
	Local_14.f_43 = __LIB_0__::func_12();
	Local_14.f_417 = 1;
	Local_14.f_418 = 1;
	switch (__LIB_1__::func_898())
	{
		case 3:
		case 9:
			__LIB_3__::func_352(&Local_14, 0);
			break;
		case 11:
			__LIB_3__::func_352(&Local_14, 2);
			break;
	}
	func_31();
	return 1;
}

void func_4()
{
	int iVar0;
	func_37(&Local_14, &(Local_14.f_450), &(Local_14.f_451));
	__LIB_1__::func_336(&(Local_14.f_248.f_3), 32);
	switch (Local_14.f_450)
	{
		case 9:
			Local_14.f_255 = Local_14.f_451;
			Local_14.f_452 = 0;
			iVar0 = __LIB_11__::func_156(Local_14.f_3, 2097152);
			break;
		case 11:
			Local_14.f_255 = Local_14.f_451 + 3;
			Local_14.f_452 = 2;
			iVar0 = __LIB_11__::func_156(Local_14.f_3, 65536);
			iVar0 = (iVar0 + __LIB_11__::func_156(Local_14.f_3, 8192));
			break;
		case 0:
			Local_14.f_255 = Local_14.f_451 + 7;
			Local_14.f_452 = 2;
			iVar0 = __LIB_11__::func_156(Local_14.f_3, 65536);
			iVar0 = (iVar0 + __LIB_11__::func_156(Local_14.f_3, 8192));
			break;
	}
	Local_14.f_237 = iVar0;
	switch (Local_14.f_237)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (Local_14.f_161)
			{
				__LIB_17__::func_862(func_40(&Local_14));
			}
			break;
		default:
			func_1();
			return;
	}
	func_42();
	__LIB_4__::func_39(Local_14.f_293[4]);
	func_44(&Local_14);
}

void func_5(var uParam0, int iParam1)
{
	uParam0->f_238 = iParam1;
}

bool func_6()
{
	int iVar0;
	switch (Local_14.f_239)
	{
		case 0:
			__LIB_3__::func_284(&(Local_14.f_194));
			__LIB_3__::func_308(&Local_14);
			func_47();
			STREAMING::REQUEST_ANIM_DICT("SCRIPT_COMMON@SHARED_SCENARIOS@STAND@GENERIC@MALE_A@react_look@exit@dismissive");
			func_48(&Local_14, 1);
			break;
		case 1:
			iVar0 = 1;
			if (!func_49())
			{
				iVar0 = 0;
			}
			if (!__LIB_3__::func_366(&(Local_14.f_194)))
			{
				iVar0 = 0;
			}
			if (!__LIB_3__::func_308(&Local_14))
			{
				iVar0 = 0;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("SCRIPT_COMMON@SHARED_SCENARIOS@STAND@GENERIC@MALE_A@react_look@exit@dismissive"))
			{
				iVar0 = 0;
			}
			return iVar0;
	}
	return false;
}

void func_10()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	Local_14.f_460 = __LIB_2__::func_340(3, 0, 0);
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (__LIB_2__::func_1(Local_14.f_230[iVar0], 0, 0))
		{
			__LIB_3__::func_285(Local_14.f_230[iVar0], &Local_14, 0);
			iVar1 = func_56(&Local_14, iVar0);
			bVar2 = func_57(&Local_14, iVar0);
			if (MISC::_IS_STRING_SPACE(bVar2))
			{
				__LIB_4__::func_302(Local_14.f_230[iVar0], iVar1, Local_14.f_194[iVar0 /*32*/].f_6, Local_14.f_194[iVar0 /*32*/].f_9, 0, 1, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				__LIB_4__::func_302(Local_14.f_230[iVar0], iVar1, Local_14.f_194[iVar0 /*32*/].f_6, Local_14.f_194[iVar0 /*32*/].f_9, 0, 1, 0, bVar2, -1082130432 /* Float: -1f */);
			}
			PED::SET_PED_CONFIG_FLAG(Local_14.f_230[iVar0], 233, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_14.f_230[iVar0], false, true);
			if (__LIB_2__::func_443() && (((Local_14.f_255 == 3 || Local_14.f_255 == 6) || Local_14.f_255 == 5) || Local_14.f_255 == 4))
			{
			}
			else
			{
				__LIB_2__::func_272(Local_14.f_230[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			__LIB_2__::func_272(Local_14.f_230[iVar0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_61(&Local_14, iVar0);
		}
		iVar0++;
	}
	PED::SET_PED_CONFIG_FLAG(Local_14.f_230[0], 494, true);
	func_62(&Local_14, &(Local_14.f_246), Local_14.f_247);
	func_63(&Local_14, 1, 1, 1);
}

bool func_11()
{
	float fVar0;
	__LIB_3__::func_931(&Local_14, 2f);
	if (!__LIB_3__::func_617(&Local_14, &(Local_14.f_230), Local_14.f_237, 1, 0, 0, 1, 1))
	{
		return true;
	}
	if (!func_66(&Local_14, 16384))
	{
		if (Local_14.f_98[0] < (60f - 10f))
		{
			func_67(&Local_14, 16384);
		}
	}
	else if (!Local_14.f_46)
	{
		fVar0 = 60f;
		if (Local_14.f_255 == 8)
		{
			fVar0 = 60f;
		}
		if (Local_14.f_98[0] >= fVar0)
		{
			__LIB_1__::func_283(&(Local_14.f_256[11 /*3*/]), 0);
			if ((__LIB_1__::func_472(Local_14.f_230[0], (60f + 30f), -1082130432 /* Float: -1f */, Local_14.f_98[0], -1082130432 /* Float: -1f */) || PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(Local_14.f_230[0], true, false), 60f)) || ENTITY::GET_ENTITY_SPEED(Global_35) < 0.5f)
			{
				__LIB_0__::func_37(&(Local_14.f_256[11 /*3*/]));
			}
			else if (__LIB_1__::func_285(&(Local_14.f_256[11 /*3*/]), 1.5f))
			{
				return true;
			}
		}
		else if (__LIB_0__::func_75(&(Local_14.f_256[11 /*3*/])))
		{
			__LIB_0__::func_37(&(Local_14.f_256[11 /*3*/]));
		}
	}
	if (__LIB_2__::func_1(Local_14.f_230[0], 0, 0))
	{
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 0) && !PED::IS_PED_IN_COMBAT(Local_14.f_230[0], 0))
		{
			return true;
		}
	}
	func_73();
	return false;
}

bool func_12()
{
	if (Local_14.f_438)
	{
		return true;
	}
	if (__LIB_1__::func_472(Local_14.f_230[0], 200f, -1082130432 /* Float: -1f */, Local_14.f_98[0], -1082130432 /* Float: -1f */))
	{
		return true;
	}
	return false;
}

bool func_13()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	Local_14.f_416 = func_74(&Local_14);
	Local_14.f_435 = Local_14.f_234 < 22f;
	func_75();
	func_76();
	func_77();
	func_78();
	Local_14.f_427 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_14.f_51, Global_36, true);
	switch (Local_14.f_241)
	{
		case 0:
			Local_14.f_458 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			Local_14.f_459 = __LIB_0__::func_36();
			func_80();
			Local_14.f_428 = Local_14.f_425;
			Local_14.f_429 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_14.f_51, true);
			if (func_81())
			{
				func_82();
			}
			__LIB_1__::func_283(&(Local_14.f_256[0 /*3*/]), 0);
			func_83(&Local_14, 1);
			break;
		case 1:
			if (Local_14.f_416 <= 0)
			{
				if (__LIB_2__::func_393(&(Local_14.f_409)))
				{
					func_83(&Local_14, 2);
				}
				else if (__LIB_3__::func_929(&(Local_14.f_409), &(Local_14.f_230), 0, 1, 1073741824 /* Float: 2f */, 0))
				{
					iVar1 = __LIB_3__::func_554(__LIB_1__::func_898(), 0, 0, 0);
					iVar2 = __LIB_2__::func_637(&(Local_14.f_409), Local_14.f_458, Local_14.f_459);
					sVar0 = __LIB_2__::func_638(&(Local_14.f_409), iVar1, __LIB_2__::func_155(iVar1, 1), iVar2);
					func_90(&Local_14, Global_35, Global_35, sVar0, -1073741824 /* Float: -2f */, 0, 796868284, 0, 1);
					func_83(&Local_14, 2);
				}
			}
			else if (func_91(&Local_14))
			{
				func_90(&Local_14, Local_14.f_230[0], Global_35, func_92(&Local_14), -1073741824 /* Float: -2f */, 1, 2083444765, 0, 1);
				__LIB_0__::func_325(&(Local_14.f_232[0]));
				TASK::CLEAR_PED_TASKS(Local_14.f_230[0], true, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(Local_14.f_230[0], Global_35, 6, 4194432, -1082130432 /* Float: -1f */, -1, 0);
				func_19(0);
				__LIB_3__::func_475(Local_14.f_230[0], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_14.f_230[0]));
				func_83(&Local_14, 2);
			}
			break;
		case 2:
			if (Local_14.f_416 <= 0)
			{
				func_83(&Local_14, 6);
			}
			break;
		case 6:
			__LIB_3__::func_474(&(Local_14.f_409));
			return true;
	}
	return false;
}

bool func_14()
{
	int iVar0;
	int iVar1;
	func_95();
	iVar0 = -1;
	iVar0 = func_96();
	if (Local_14.f_240 > 0)
	{
		if (iVar0 == -1)
		{
			if (__LIB_1__::func_313(&(Local_14.f_256[5 /*3*/]), 2f) && !__LIB_2__::func_341(&(Local_14.f_311[0 /*21*/])))
			{
				func_63(&Local_14, 1, 0, 1);
				func_62(&Local_14, &(Local_14.f_246), Local_14.f_247);
			}
		}
		if (func_66(&Local_14, 1024))
		{
			iVar1 = func_56(&Local_14, 0);
			if (__LIB_3__::func_138(Local_14.f_230[0], iVar1))
			{
				func_100(&Local_14, 1024);
			}
		}
	}
	if (Local_14.f_240 < 7)
	{
		if (func_101() || func_102())
		{
			func_20(1);
			__LIB_2__::func_504(Local_14.f_230[0], 0);
			__LIB_3__::func_930();
			func_105(&Local_14, 7);
		}
	}
	switch (Local_14.f_240)
	{
		case 0:
			if (func_106() || iVar0 != -1)
			{
				func_107();
				func_67(&Local_14, 65536);
				func_108(iVar0);
				func_105(&Local_14, 1);
			}
			else
			{
				func_109();
			}
			break;
		case 1:
			func_110();
			if (func_111())
			{
				func_105(&Local_14, 6);
			}
			else if ((func_112() || iVar0 == 1) || iVar0 == 0)
			{
				func_113(iVar0);
				func_114(iVar0);
				Local_14.f_436 = 1;
				func_105(&Local_14, 2);
			}
			else if (__LIB_2__::func_227(0f, 1, Local_14.f_230[0], 1))
			{
				if (Local_14.f_440)
				{
					Local_14.f_436 = 1;
					__LIB_3__::func_930();
					func_116();
					func_117();
					func_105(&Local_14, 3);
				}
				else if (func_118())
				{
					func_119();
					Local_14.f_436 = 1;
					func_105(&Local_14, 2);
				}
				else if (func_120(iVar0))
				{
					func_121();
				}
			}
			break;
		case 2:
			func_20(0);
			if (func_111())
			{
				func_105(&Local_14, 6);
			}
			else if ((func_112() || iVar0 == 1) || iVar0 == 0)
			{
				func_113(iVar0);
				func_114(iVar0);
			}
			else if (__LIB_2__::func_227(0f, 1, Local_14.f_230[0], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
			{
				if (func_122() || func_66(&Local_14, 1024))
				{
					__LIB_3__::func_930();
					func_123();
				}
				else if (func_124())
				{
					__LIB_3__::func_930();
					func_116();
					func_105(&Local_14, 3);
				}
				else if (func_125())
				{
					__LIB_3__::func_930();
					func_116();
					func_105(&Local_14, 3);
				}
				else if (Local_14.f_425 > 12f)
				{
					func_126();
				}
			}
			break;
		case 3:
			if (func_111())
			{
				func_105(&Local_14, 6);
			}
			else if ((func_112() || iVar0 == 1) || iVar0 == 0)
			{
				func_113(iVar0);
				func_114(iVar0);
			}
			else if (TASK::_0x0C3CB2E600C8977D(Local_14.f_230[0], 0) || ((!PED::IS_PED_USING_ANY_SCENARIO(Local_14.f_230[0]) && __LIB_2__::func_227(0f, 1, Local_14.f_230[0], 1)) && __LIB_2__::func_227(0f, 1, Global_35, 1)))
			{
				if (func_122() || func_66(&Local_14, 1024))
				{
					func_1();
				}
				else
				{
					func_117();
					func_105(&Local_14, 4);
				}
			}
			break;
		case 4:
			if (func_111())
			{
				func_105(&Local_14, 6);
			}
			else if ((func_112() || iVar0 == 1) || iVar0 == 0)
			{
				func_113(iVar0);
				func_114(iVar0);
			}
			else if (func_122() || func_66(&Local_14, 1024))
			{
				func_123();
			}
			else
			{
				func_127();
				if (func_128())
				{
					func_129();
					func_105(&Local_14, 5);
				}
			}
			break;
		case 5:
			func_130();
			if (func_111())
			{
				func_105(&Local_14, 6);
			}
			else if ((func_112() || iVar0 == 1) || iVar0 == 0)
			{
				func_113(iVar0);
				func_114(iVar0);
			}
			else if (func_122() || func_66(&Local_14, 1024))
			{
				func_123();
			}
			else
			{
				func_127();
				if (__LIB_2__::func_227(0f, 1, Local_14.f_230[0], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
				{
					if (func_128())
					{
						func_131();
						func_105(&Local_14, 6);
					}
				}
			}
			break;
		case 6:
			if (__LIB_2__::func_227(0f, 1, Local_14.f_230[0], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
			{
				if (((func_122() || func_132()) || func_66(&Local_14, 1024)) && !func_111())
				{
					func_123();
				}
				else if (func_133(iVar0))
				{
					func_105(&Local_14, 7);
				}
			}
			break;
		case 7:
			func_19(1);
			if (func_134())
			{
				func_135();
				func_105(&Local_14, 8);
			}
			else if (!__LIB_2__::func_1(Local_14.f_230[0], 0, 1))
			{
				func_105(&Local_14, 8);
			}
			break;
		case 8:
			__LIB_3__::func_481();
			func_19(1);
			return true;
	}
	return false;
}

bool func_15()
{
	bool bVar0;
	bool bVar1;
	if (Local_14.f_240 > 0)
	{
		bVar0 = true;
		bVar1 = false;
	}
	else
	{
		bVar0 = false;
		bVar1 = true;
	}
	if (__LIB_3__::func_431(&Local_14, &(Local_14.f_230), bVar0, bVar1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
	{
		return true;
	}
	return false;
}

void func_16()
{
	int iVar0;
	if (!bLocal_475 || (!__LIB_2__::func_204(0) || CAM::IS_SCREEN_FADED_OUT()))
	{
		Local_14.f_50 = 0;
		if (__LIB_2__::func_1(Local_14.f_230[0], 0, 1))
		{
			if (CAM::IS_SCREEN_FADED_OUT() || !__LIB_1__::func_472(Local_14.f_230[0], 200f, 60f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				PED::DELETE_PED(&(Local_14.f_230[0]));
				return;
			}
			if (!PED::IS_PED_USING_ANY_SCENARIO(Local_14.f_230[0]) && !PED::IS_PED_IN_COMBAT(Local_14.f_230[0], 0))
			{
				return;
			}
			if (func_139())
			{
				if (!PED::IS_PED_IN_COMBAT(Local_14.f_230[0], 0))
				{
					if (__LIB_1__::func_372(Local_14.f_230[0], 0) == joaat("WEAPON_MELEE_KNIFE"))
					{
						if (!__LIB_0__::func_163(Local_14.f_230[0], 716706914))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Local_14.f_230[0], joaat("WEAPON_UNARMED"), false, 0, false, false);
							TASK::TASK_SWAP_WEAPON(Local_14.f_230[0], 1, 0, 0, 0);
						}
						return;
					}
				}
			}
			if (!PED::IS_PED_IN_COMBAT(Local_14.f_230[0], 0))
			{
				__LIB_0__::func_325(&(Local_14.f_232[0]));
			}
			PED::SET_PED_CONFIG_FLAG(Local_14.f_230[0], 448, true);
			PED::_0xB8B6430EAD2D2437(Local_14.f_230[0], 993130593);
			Local_14.f_50 = 1;
			PED::SET_PED_KEEP_TASK(Local_14.f_230[0], true);
			__LIB_3__::func_475(Local_14.f_230[0], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
		}
		iVar0 = 0;
		while (iVar0 < Local_14.f_455)
		{
			if (__LIB_1__::func_565(&(Local_14.f_455[iVar0])))
			{
				__LIB_2__::func_353(&(Local_14.f_455[iVar0]), 1);
			}
			iVar0++;
		}
		__LIB_17__::func_851(&Local_14, &(Local_14.f_230), &(Local_14.f_232), Local_14.f_237, Local_14.f_450, Local_14.f_451, 1, 1, 0, 1);
		func_145();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_19(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		func_148(iVar1);
		__LIB_2__::func_603(&(Local_14.f_230[iVar1]), &(Local_14.f_311[iVar1 /*21*/]), &(Local_14.f_333), 1, 1);
		if (__LIB_2__::func_1(Local_14.f_230[iVar1], 0, 0))
		{
			PED::SET_PED_CONFIG_FLAG(Local_14.f_230[iVar1], 130, false);
		}
		if (bParam0)
		{
			PLAYER::_0xA3DB37EDF9A74635(iVar0, Local_14.f_230[iVar1], 3, 1, 1);
			PLAYER::_0xA3DB37EDF9A74635(iVar0, Local_14.f_230[iVar1], 4, 1, 1);
			PLAYER::_0xA3DB37EDF9A74635(iVar0, Local_14.f_230[iVar1], 7, 1, 1);
		}
		else if (func_66(&Local_14, 65536))
		{
			if (__LIB_2__::func_1(Local_14.f_230[iVar1], 0, 0))
			{
				PED::SET_PED_CONFIG_FLAG(Local_14.f_230[iVar1], 413, true);
			}
			PLAYER::_0xA3DB37EDF9A74635(iVar0, Local_14.f_230[iVar1], 7, 1, 1);
		}
		iVar1++;
	}
}

void func_20(bool bParam0)
{
	__LIB_2__::func_408(&(Local_14.f_302), bParam0);
}

bool func_21(var uParam0, int iParam1)
{
	return (uParam0->f_236 && iParam1) != 0;
}

void func_25()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (__LIB_2__::func_1(Local_14.f_230[iVar0], 0, 0))
		{
			iVar1 = func_56(&Local_14, iVar0);
			bVar2 = func_57(&Local_14, iVar0);
			if (MISC::_IS_STRING_SPACE(bVar2))
			{
				__LIB_4__::func_302(Local_14.f_230[iVar0], iVar1, Local_14.f_194[iVar0 /*32*/].f_6, Local_14.f_194[iVar0 /*32*/].f_9, 0, 1, 0, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				__LIB_4__::func_302(Local_14.f_230[iVar0], iVar1, Local_14.f_194[iVar0 /*32*/].f_6, Local_14.f_194[iVar0 /*32*/].f_9, 0, 1, 0, bVar2, -1082130432 /* Float: -1f */);
			}
		}
		iVar0++;
	}
}

void func_31()
{
	__LIB_2__::func_104(&(Local_14.f_5), 0);
	__LIB_2__::func_105(&(Local_14.f_5), 1);
	__LIB_2__::func_50(&(Local_14.f_5), 1);
	__LIB_2__::func_51(&(Local_14.f_5), 1);
	__LIB_2__::func_111(&(Local_14.f_5), 0);
	__LIB_2__::func_110(&(Local_14.f_5), 0);
	__LIB_2__::func_52(&(Local_14.f_5), 1);
	__LIB_2__::func_180(&(Local_14.f_5), 1);
	__LIB_3__::func_482(&(Local_14.f_5), 6f);
	__LIB_2__::func_662(&(Local_14.f_5), 0);
}

void func_37(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
		case 4:
			*uParam1 = 9;
			*uParam2 = 2;
			break;
		case 5:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
		case 7:
			*uParam1 = 11;
			*uParam2 = 2;
			break;
		case 8:
			*uParam1 = 11;
			*uParam2 = 3;
			break;
	}
}

int func_40(var uParam0)
{
	return uParam0->f_177;
}

void func_42()
{
	switch (Local_14.f_255)
	{
		case 0:
			func_188(&Local_14);
			break;
		case 1:
			func_189(&Local_14);
			break;
		case 2:
			func_190(&Local_14);
			break;
		case 3:
			func_191(&Local_14);
			break;
		case 4:
			func_192(&Local_14);
			break;
		case 5:
			func_193(&Local_14);
			break;
		case 6:
			func_194(&Local_14);
			break;
		case 7:
			func_195(&Local_14);
			break;
		case 8:
			func_196(&Local_14);
			break;
	}
}

void func_44(var uParam0)
{
	struct<4> Var0;
	int iVar4;
	iVar4 = 0;
	while (iVar4 <= 0)
	{
		uParam0->f_194[iVar4 /*32*/].f_1 = func_198(uParam0, iVar4);
		uParam0->f_194[iVar4 /*32*/].f_19 = 1;
		uParam0->f_194[iVar4 /*32*/].f_13 = 0;
		StringCopy(&(uParam0->f_194[iVar4 /*32*/].f_23), func_199(uParam0, iVar4), 64);
		uParam0->f_194[iVar4 /*32*/].f_3 = func_200(uParam0, iVar4);
		Var0 = { func_201(uParam0, iVar4) };
		uParam0->f_194[iVar4 /*32*/].f_6 = { Var0 };
		uParam0->f_194[iVar4 /*32*/].f_9 = Var0.f_3;
		iVar4++;
	}
}

void func_47()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = func_205();
	iVar0 = func_56(&Local_14, 0);
	iVar1 = func_206(&Local_14, 0);
	__LIB_2__::func_312(iVar0, iVar2, joaat("G_M_M_UNIDUSTER_01"), iVar1);
}

void func_48(var uParam0, int iParam1)
{
	uParam0->f_239 = iParam1;
}

bool func_49()
{
	int iVar0;
	iVar0 = func_56(&Local_14, 0);
	if (!__LIB_2__::func_313(iVar0))
	{
		return false;
	}
	return true;
}

int func_56(var uParam0, int iParam1)
{
	switch (uParam0->f_255)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
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
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
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
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_SMOKE");
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_57(var uParam0, int iParam1)
{
	switch (uParam0->f_255)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_SMOKE_MALE_C";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D";
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_SMOKE_MALE_C";
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D";
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_61(var uParam0, int iParam1)
{
	if (!__LIB_2__::func_1(uParam0->f_230[iParam1], 0, 0))
	{
		return;
	}
	PED::SET_PED_COMBAT_RANGE(uParam0->f_230[iParam1], 0);
	PED::SET_COMBAT_FLOAT(uParam0->f_230[iParam1], 39, 10f);
	PED::SET_COMBAT_FLOAT(uParam0->f_230[iParam1], 32, 2f);
	PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_230[iParam1], 2);
	PED::SET_COMBAT_FLOAT(uParam0->f_230[iParam1], 7, 1f);
}

void func_62(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	if (uParam0->f_453 > 0)
	{
		if (*uParam1 == 0)
		{
			*uParam1 = 1;
		}
	}
	switch (*uParam1)
	{
		case 0:
			iVar0 = 7;
			sVar2 = "GREET_TOUGH";
			break;
		case 1:
			if (func_226(uParam0))
			{
				iVar0 = 7;
				sVar2 = "GREET_TOUGH";
				*uParam1 = 0;
			}
			else
			{
				iVar0 = 8;
				sVar2 = func_227(uParam0, &iVar4);
			}
			break;
		default:
			iVar0 = 8;
			sVar2 = "";
			break;
	}
	switch (uParam0->f_452)
	{
		case 0:
			switch (uParam0->f_237)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							iVar1 = 10;
							sVar3 = "INSULT_TOUGH_CONV_PART1";
							iVar4 = 3;
							break;
						case 1:
							iVar1 = 10;
							sVar3 = "INSULT_TOUGH_CONV_PART2";
							iVar4 = 3;
							break;
						case 2:
							iVar1 = 10;
							sVar3 = "INSULT_TOUGH_CONV_PART3";
							iVar4 = 3;
							break;
						case 3:
							iVar1 = 10;
							sVar3 = "INSULT_SHOUT_AT_MALE_CONV_PART3";
							iVar4 = 5;
							break;
						default:
							iVar1 = 10;
							sVar3 = "";
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							iVar1 = 10;
							sVar3 = "INSULT_TOUGH_CONV_PART1";
							iVar4 = 15;
							break;
						case 1:
							iVar1 = 10;
							sVar3 = "INSULT_TOUGH_CONV_PART2";
							iVar4 = 15;
							break;
						case 2:
							iVar1 = 10;
							sVar3 = "INSULT_TERRITORY_INTRUDED_CONV_PART2";
							iVar4 = 3;
							break;
						case 3:
							iVar1 = 10;
							sVar3 = "INSULT_TERRITORY_INTRUDED_CONV_PART3";
							iVar4 = 3;
							break;
						default:
							iVar1 = 10;
							sVar3 = "";
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							iVar1 = 10;
							sVar3 = "INSULT_TOUGH_CONV_PART1";
							iVar4 = 17;
							break;
						case 1:
							iVar1 = 10;
							sVar3 = "RANCHER_CRIME_ESCALATE_NEG";
							iVar4 = 3;
							break;
						case 2:
							iVar1 = 10;
							sVar3 = "INSULT_PED_GREET_REJECT_CONV_PART3";
							iVar4 = 5;
							break;
						case 3:
							iVar1 = 10;
							sVar3 = "FIGHT_RESPONSE";
							iVar4 = 8;
							break;
						default:
							iVar1 = 10;
							sVar3 = "";
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							iVar1 = 10;
							sVar3 = "INSULT_VAN_HORN_THUG_CONV_PART1";
							iVar4 = 1;
							break;
						case 1:
							iVar1 = 10;
							sVar3 = "INSULT_VAN_HORN_THUG_CONV_PART2";
							iVar4 = 2;
							break;
						case 2:
							iVar1 = 10;
							sVar3 = "INSULT_VAN_HORN_THUG_CONV_PART2";
							iVar4 = 1;
							break;
						case 3:
							iVar1 = 10;
							sVar3 = "INSULT_VAN_HORN_THUG_CONV_PART3";
							iVar4 = 1;
							break;
						default:
							iVar1 = 10;
							sVar3 = "";
							break;
					}
					break;
			}
			break;
		case 2:
			switch (uParam0->f_237)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							iVar1 = 10;
							sVar3 = "INSULT_TOUGH_CONV_PART1";
							iVar4 = 16;
							break;
						case 1:
							iVar1 = 10;
							sVar3 = "INSULT_TOUGH_CONV_PART2";
							iVar4 = 16;
							break;
						case 2:
							iVar1 = 10;
							sVar3 = "INSULT_TOUGH_CONV_PART3";
							iVar4 = 16;
							break;
						case 3:
							iVar1 = 10;
							sVar3 = "INSULT_LAW_CONV_PART1";
							iVar4 = 5;
							break;
						default:
							iVar1 = 10;
							sVar3 = "";
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							iVar1 = 10;
							sVar3 = "INSULT_MALE_CONV_PART1";
							iVar4 = 14;
							break;
						case 1:
							iVar1 = 10;
							sVar3 = "INSULT_MALE_CONV_PART2";
							iVar4 = 14;
							break;
						case 2:
							iVar1 = 10;
							sVar3 = "INSULT_DISPUTE_INTERVENE_DANGEROUS_NEG";
							iVar4 = 2;
							break;
						case 3:
							iVar1 = 10;
							sVar3 = "INSULT_TERRITORY_INTRUDED_CONV_PART2";
							iVar4 = 6;
							break;
						default:
							iVar1 = 10;
							sVar3 = "";
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							iVar1 = 10;
							sVar3 = "RANCHER_CRIME_MOVE_ALONG_NEG";
							iVar4 = 3;
							break;
						case 1:
							iVar1 = 10;
							sVar3 = "RANCHER_CRIME_ESCALATE_NEG";
							iVar4 = 4;
							break;
						case 2:
							iVar1 = 10;
							sVar3 = "INSULT_DISPUTE_INTERVENE_DANGEROUS_NEG";
							iVar4 = 3;
							break;
						case 3:
							iVar1 = 10;
							sVar3 = "FIGHT_RESPONSE";
							iVar4 = 5;
							break;
						default:
							iVar1 = 10;
							sVar3 = "";
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							iVar1 = 10;
							sVar3 = "INSULT_TOUGH_CONV_PART1";
							iVar4 = 6;
							break;
						case 1:
							iVar1 = 10;
							sVar3 = "INSULT_TERRITORY_INTRUDED_CONV_PART1";
							iVar4 = 1;
							break;
						case 2:
							iVar1 = 10;
							sVar3 = "INSULT_TERRITORY_INTRUDED_CONV_PART3";
							iVar4 = 6;
							break;
						case 3:
							iVar1 = 10;
							sVar3 = "INSULT_TERRITORY_INTRUDED_CONV_PART3";
							iVar4 = 4;
							break;
						default:
							iVar1 = 10;
							sVar3 = "";
							break;
					}
					break;
			}
			break;
	}
	__LIB_2__::func_602(&(uParam0->f_333[0 /*17*/]), __LIB_2__::func_460(iVar0), sVar2, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, iVar4);
	__LIB_2__::func_602(&(uParam0->f_333[1 /*17*/]), __LIB_2__::func_460(iVar1), sVar3, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, iVar4);
	if (func_226(uParam0) && uParam0->f_246 == 0)
	{
		__LIB_2__::func_411(&(uParam0->f_333[0 /*17*/]), 0, 0);
	}
	if (iVar0 == 8)
	{
		uParam0->f_437 = 1;
	}
	else
	{
		uParam0->f_437 = 0;
	}
	__LIB_2__::func_394(&(uParam0->f_311[0 /*21*/]), &(uParam0->f_333[1 /*17*/]));
	func_232(&(uParam0->f_311[0 /*21*/]), &(uParam0->f_333), 1);
}

void func_63(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
	}
	if (bParam1)
	{
		if (!__LIB_1__::func_489(&(uParam0->f_333[0 /*17*/]), 13) && !__LIB_1__::func_489(&(uParam0->f_333[0 /*17*/]), 0))
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_446) && MISC::ARE_STRINGS_EQUAL(uParam0->f_446, "GANG_INTERACT_HOLD_IT")) && uParam0->f_246 > 0)
			{
			}
			else
			{
				__LIB_2__::func_411(&(uParam0->f_333[0 /*17*/]), 1, 0);
			}
		}
		if (bParam3)
		{
			if (!__LIB_1__::func_489(&(uParam0->f_333[1 /*17*/]), 13) && !__LIB_1__::func_489(&(uParam0->f_333[1 /*17*/]), 0))
			{
				__LIB_2__::func_411(&(uParam0->f_333[1 /*17*/]), 1, 0);
			}
		}
	}
	else
	{
		if (__LIB_1__::func_489(&(uParam0->f_333[0 /*17*/]), 0) || bParam2)
		{
			__LIB_2__::func_411(&(uParam0->f_333[0 /*17*/]), 0, 0);
		}
		if (bParam3)
		{
			if (__LIB_1__::func_489(&(uParam0->f_333[1 /*17*/]), 0) || bParam2)
			{
				__LIB_2__::func_411(&(uParam0->f_333[1 /*17*/]), 0, 0);
			}
		}
	}
}

bool func_66(var uParam0, int iParam1)
{
	return (uParam0->f_235 && iParam1) != 0;
}

void func_67(var uParam0, int iParam1)
{
	uParam0->f_235 = (uParam0->f_235 || iParam1);
}

void func_73()
{
	if (Local_14.f_48)
	{
		if (!func_66(&Local_14, 64))
		{
			if (func_40(&Local_14) == 0)
			{
				__LIB_2__::func_212(99, Global_1310750[99 /*111*/].f_36, 0.75f, 1, 0);
			}
			func_67(&Local_14, 64);
		}
	}
}

int func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (__LIB_2__::func_1(uParam0->f_230[iVar0], 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_75()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (__LIB_2__::func_1(Local_14.f_230[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_14.f_232[iVar0]) || func_66(&Local_14, 32768))
			{
				if (__LIB_2__::func_167(Local_14.f_230[iVar0], 1))
				{
					__LIB_2__::func_73(Local_14.f_230[iVar0], &(Local_14.f_232[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
					if (func_66(&Local_14, 32768))
					{
						func_100(&Local_14, 32768);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_76()
{
	int iVar0;
	bool bVar1;
	if (func_66(&Local_14, 32))
	{
		__LIB_3__::func_473(&(Local_14.f_248));
		return;
	}
	if (func_249(&Local_14))
	{
		bVar1 = (__LIB_0__::func_12() == 105 && __LIB_2__::func_443());
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (__LIB_2__::func_1(Local_14.f_230[iVar0], 0, 0))
			{
				if (bVar1)
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_14.f_230[iVar0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(Local_14.f_230[iVar0], Global_35, 0, 0);
				}
			}
			iVar0++;
		}
		func_67(&Local_14, 32);
	}
}

void func_77()
{
	bool bVar0;
	if (__LIB_1__::func_898() == 11)
	{
		bVar0 = __LIB_3__::func_925(&Local_14, &(Local_14.f_230), 0, 0);
	}
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

void func_78()
{
	if (func_66(&Local_14, 32))
	{
		return;
	}
	if (!func_66(&Local_14, 262144))
	{
		if ((MISC::GET_FRAME_COUNT() % 30) == 0)
		{
			if (func_253(Global_36, 1098907648 /* Float: 16f */))
			{
				PED::SET_PED_CONFIG_FLAG(Local_14.f_230[0], 494, true);
				func_67(&Local_14, 262144);
			}
		}
	}
}

void func_80()
{
	if ((Local_14.f_436 || func_21(&Local_14, 64)) || Local_14.f_398 != -1)
	{
		__LIB_3__::func_485(&(Local_14.f_409));
	}
	else
	{
		__LIB_4__::func_42(&(Local_14.f_409));
	}
}

bool func_81()
{
	if (func_66(&Local_14, 32))
	{
		return false;
	}
	if (func_66(&Local_14, 262144))
	{
		return false;
	}
	if (!__LIB_2__::func_1(Local_14.f_230[0], 0, 1))
	{
		return false;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_14.f_230[0], Global_35, 1, 1))
	{
		return false;
	}
	return true;
}

void func_82()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		PED::SET_PED_CONFIG_FLAG(Local_14.f_230[iVar0], 494, false);
		iVar0++;
	}
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_241 = iParam1;
}

int func_90(var uParam0, int iParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	if (__LIB_2__::func_303(iParam1, iParam2, sParam3, "", fParam4, iParam7, 0, 1, 1, fParam4 >= 0f, bParam5, iParam6, 1, 0, 0) || iParam1 == Global_35)
	{
		uParam0->f_446 = sParam3;
		if (bParam8)
		{
			uParam0->f_445 = iParam1;
			if (uParam0->f_240 >= 1 || func_66(uParam0, 65536))
			{
				func_63(uParam0, 0, 1, 0);
			}
			__LIB_1__::func_148(&(uParam0->f_256[5 /*3*/]));
			__LIB_1__::func_148(&(uParam0->f_256[7 /*3*/]));
		}
		return 1;
	}
	return 0;
}

bool func_91(var uParam0)
{
	int iVar0;
	if ((uParam0->f_427 > func_262(uParam0) && Local_14.f_427 > (uParam0->f_429 + 10f)) && __LIB_2__::func_227(0f, 1, uParam0->f_230[0], 1))
	{
		iVar0 = __LIB_1__::func_372(uParam0->f_230[0], 0);
		if (!__LIB_0__::func_154(iVar0) || !WEAPON::_0x705BE297EEBDB95D(iVar0))
		{
			return true;
		}
	}
	return false;
}

char* func_92(var uParam0)
{
	return "WON_DISPUTE_ESCALATED";
}

void func_95()
{
	Local_14.f_425 = Local_14.f_98[0];
	if (Local_14.f_98[0] <= 30f || Local_14.f_240 > 0)
	{
		switch (Local_14.f_444)
		{
			case 0:
				Local_14.f_234 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_14.f_51, Global_36, true);
				break;
			case 1:
				if (Local_14.f_240 > 0)
				{
					Local_14.f_433 = __LIB_2__::func_157(Local_14.f_293[3], Global_36);
					if (Local_14.f_433)
					{
						__LIB_0__::func_37(&(Local_14.f_256[8 /*3*/]));
					}
				}
				else
				{
					Local_14.f_432 = __LIB_2__::func_157(Local_14.f_293[2], Global_36);
					if (Local_14.f_432)
					{
						__LIB_0__::func_37(&(Local_14.f_256[8 /*3*/]));
					}
				}
				break;
			case 2:
				Local_14.f_431 = __LIB_2__::func_157(Local_14.f_293[1], Global_36);
				break;
			case 3:
				Local_14.f_430 = __LIB_2__::func_157(Local_14.f_293[0], Global_36);
				if (Local_14.f_430)
				{
					if (__LIB_0__::func_33(&(Local_14.f_256[8 /*3*/])))
					{
						__LIB_2__::func_112(&(Local_14.f_256[8 /*3*/]));
					}
					else
					{
						__LIB_1__::func_283(&(Local_14.f_256[8 /*3*/]), 0);
					}
				}
				else if (__LIB_0__::func_75(&(Local_14.f_256[8 /*3*/])))
				{
					__LIB_2__::func_113(&(Local_14.f_256[8 /*3*/]));
				}
				break;
		}
		Local_14.f_444++;
		Local_14.f_444 = (Local_14.f_444 % 4);
		if (Local_14.f_240 < 1)
		{
			if (Local_14.f_425 < 15f)
			{
				if (__LIB_2__::func_1(Local_14.f_230[0], 0, 0))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_14.f_230[0], false);
				}
			}
		}
		else if (__LIB_2__::func_1(Local_14.f_230[0], 0, 0))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_14.f_230[0], true);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_14.f_230[0], true);
		}
	}
}

int func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!Local_14.f_48)
	{
		if (Local_14.f_98[0] > (15f + 3f) && Local_14.f_240 <= 0)
		{
			return -1;
		}
	}
	iVar2 = 1;
	iVar3 = -1;
	iVar0 = func_268(&(Local_14.f_230[iVar1]), &(Local_14.f_311[iVar1 /*21*/]), 15f, &(Local_14.f_333), &iVar2, 3f, 2, 0, "", Local_14.f_460, 0, 0, 2, 1, Local_14.f_98[0], 0);
	if (__LIB_2__::func_341(&(Local_14.f_311[iVar1 /*21*/])) && !__LIB_2__::func_227(0f, 1, Global_35, 1))
	{
		if (Local_14.f_419 == 0)
		{
			if (Local_14.f_399 == -1)
			{
				Local_14.f_399 = iVar1;
			}
			if (Local_14.f_311[iVar1 /*21*/].f_1 == 0)
			{
				if (Local_14.f_246 >= 1 || Local_14.f_437)
				{
					__LIB_2__::func_482(&(Local_14.f_333[0 /*17*/]), 1, 1);
				}
			}
			else if (Local_14.f_311[iVar1 /*21*/].f_1 == 1)
			{
				if (Local_14.f_247 >= 3)
				{
					__LIB_2__::func_482(&(Local_14.f_333[1 /*17*/]), 1, 1);
				}
			}
			if (Local_14.f_311[iVar1 /*21*/].f_1 != -1)
			{
				if (!Local_14.f_48)
				{
					__LIB_3__::func_426(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
				}
				__LIB_3__::func_930();
				Local_14.f_419 = MISC::GET_FRAME_COUNT();
				Local_14.f_442 = 1;
				__LIB_2__::func_504(Local_14.f_230[0], 1000);
			}
		}
	}
	if (iVar0 != -1)
	{
		iVar3 = iVar0;
		if (iVar3 != -1)
		{
			Local_14.f_398 = iVar3;
			switch (iVar3)
			{
				case 0:
					Local_14.f_246++;
					break;
				case 1:
					if (Local_14.f_247 == 3)
					{
						Local_14.f_439 = 1;
					}
					Local_14.f_247++;
					Local_14.f_453++;
					iVar4 = __LIB_1__::func_372(Local_14.f_230[0], 0);
					if (__LIB_0__::func_154(iVar4))
					{
						if (WEAPON::_0x705BE297EEBDB95D(iVar4) || iVar4 == joaat("WEAPON_MELEE_KNIFE"))
						{
							Local_14.f_454++;
						}
					}
					break;
			}
			Local_14.f_419 = 0;
		}
	}
	return iVar3;
}

void func_100(var uParam0, int iParam1)
{
	uParam0->f_235 = (uParam0->f_235 - (uParam0->f_235 && iParam1));
}

bool func_101()
{
	bool bVar0;
	if (__LIB_3__::func_492(Local_14.f_230[0], 0, &(Local_14.f_5), &(Local_14.f_5.f_16), 0, Local_14.f_98[0]))
	{
		if (Local_14.f_5.f_16 == 8192)
		{
			if (!__LIB_3__::func_477(Global_35, Local_14.f_230[0]))
			{
				bVar0 = true;
			}
			else if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_230[0], Global_35, 17))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_1();
				return false;
			}
		}
		__LIB_3__::func_470(&(Local_14.f_248), Local_14.f_5.f_16);
		return true;
	}
	return false;
}

bool func_102()
{
	if (Local_14.f_240 > 0)
	{
		if (__LIB_2__::func_364(Local_14.f_230[0], 0, 0, 0))
		{
			if (PLAYER::_0xE956C2340A76272E(PLAYER::PLAYER_ID()) > 0.25f)
			{
				return true;
			}
		}
	}
	return false;
}

void func_105(var uParam0, int iParam1)
{
	uParam0->f_240 = iParam1;
}

bool func_106()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	if ((!Local_14.f_431 || Local_14.f_432) || (Local_14.f_442 && __LIB_2__::func_341(&(Local_14.f_311[0 /*21*/]))))
	{
		return false;
	}
	if (func_66(&Local_14, 16))
	{
		PED::SET_PED_RESET_FLAG(Local_14.f_230[0], 42, true);
		__LIB_1__::func_283(&(Local_14.f_256[9 /*3*/]), 0);
		bVar0 = __LIB_1__::func_285(&(Local_14.f_256[9 /*3*/]), 1f);
		bVar1 = PED::_0x06087579E7AA85A9(Local_14.f_230[0], Global_35, -1f, 20f, 30f, -1f);
		if (bVar1)
		{
			__LIB_1__::func_283(&(Local_14.f_256[10 /*3*/]), 0);
		}
		if (bVar0 || (bVar1 && __LIB_1__::func_285(&(Local_14.f_256[10 /*3*/]), 0.25f)))
		{
			bVar2 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_230[0], Global_35, 17);
			bVar3 = func_274();
			if (bVar2 && (bVar3 || Local_14.f_255 == 8))
			{
				if (func_275() && Local_14.f_425 >= 3f)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_107()
{
	__LIB_2__::func_104(&(Local_14.f_5), 1);
	__LIB_2__::func_105(&(Local_14.f_5), 1);
	__LIB_2__::func_50(&(Local_14.f_5), 1);
	__LIB_2__::func_51(&(Local_14.f_5), 1);
	__LIB_2__::func_111(&(Local_14.f_5), 1);
	__LIB_2__::func_52(&(Local_14.f_5), 1);
	__LIB_2__::func_180(&(Local_14.f_5), 1);
	__LIB_2__::func_662(&(Local_14.f_5), 1);
	__LIB_2__::func_507(&(Local_14.f_5), 250);
}

void func_108(int iParam0)
{
	if (!func_112())
	{
		func_90(&Local_14, Local_14.f_230[0], Global_35, func_277(&Local_14), -1073741824 /* Float: -2f */, 1, 2083444765, func_278(&Local_14), 1);
		__LIB_2__::func_315(1891783641, Local_14.f_230[0], 1);
	}
	else
	{
		Local_14.f_445 = Local_14.f_230[0];
		__LIB_1__::func_148(&(Local_14.f_256[5 /*3*/]));
		__LIB_1__::func_148(&(Local_14.f_256[7 /*3*/]));
	}
	func_280(&Local_14, 0, Global_35, 1, 2, 20f, 0);
	Local_14.f_424 = Local_14.f_425;
	if (func_281())
	{
		if (Local_14.f_246 < 1)
		{
			Local_14.f_246++;
		}
	}
}

void func_109()
{
	if (!func_66(&Local_14, 16))
	{
		if (func_282())
		{
			func_283();
			func_67(&Local_14, 16);
		}
	}
}

void func_110()
{
	vector3 vVar0;
	float fVar3;
	fVar3 = (Local_14.f_98[0] + 15f);
	__LIB_4__::func_162(&(Local_14.f_310), &(Local_14.f_302), Local_14.f_230[0], vVar0, 0, 4000, 1500, 1000, 1, 0, 1, fVar3);
}

bool func_111()
{
	if (Local_14.f_454 >= 1)
	{
		return true;
	}
	if (Local_14.f_453 >= 2)
	{
		return true;
	}
	if (Local_14.f_439)
	{
		return true;
	}
	return false;
}

bool func_112()
{
	int iVar0;
	if (!Local_14.f_442)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (__LIB_2__::func_341(&(Local_14.f_311[iVar0 /*21*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_113(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!func_66(&Local_14, 2048))
		{
			func_280(&Local_14, 0, Global_35, 2, 1, 3.5f, 1);
			if (!PED::IS_PED_USING_ANY_SCENARIO(Local_14.f_230[0]))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_14.f_230[0], Global_35, -1, -1f, -1f, -1f);
			}
			if (Local_14.f_440)
			{
				Local_14.f_441 = 1;
			}
			Local_14.f_440 = 1;
			func_285(&Local_14, joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), "antagFirst", Global_35, 10f, 10f, -1082130432 /* Float: -1f */, 6f);
			func_67(&Local_14, 2048);
		}
	}
}

void func_114(int iParam0)
{
	if (iParam0 == 0 && Local_14.f_246 == 2)
	{
		if (!func_66(&Local_14, 4096))
		{
			func_280(&Local_14, 0, Global_35, 1, 1, 3.5f, 1);
			if (!PED::IS_PED_USING_ANY_SCENARIO(Local_14.f_230[0]))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_14.f_230[0], Global_35, -1, -1f, -1f, -1f);
			}
			Local_14.f_420 = MISC::GET_FRAME_COUNT();
			Local_14.f_421 = __LIB_0__::func_485();
			if (Local_14.f_440)
			{
				Local_14.f_441 = 1;
			}
			Local_14.f_440 = 1;
			func_67(&Local_14, 4096);
		}
	}
}

void func_116()
{
	func_289(0, 1);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_14.f_230[0], Global_35, -1, -1f, -1f, -1f);
	func_285(&Local_14, joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), "closeConfront", Local_14.f_230[0], 10f, 10f, 5f, 6f);
}

void func_117()
{
	func_90(&Local_14, Local_14.f_230[0], Global_35, func_290(&Local_14), -1073741824 /* Float: -2f */, 1, 2083444765, 0, 1);
	if (Local_14.f_247 < 2)
	{
		Local_14.f_247 = 2;
	}
	Local_14.f_423 = 2;
}

bool func_118()
{
	if (func_112())
	{
		return false;
	}
	if (((Local_14.f_425 <= (Local_14.f_424 - 3f) || Local_14.f_425 <= 6f) && !Local_14.f_432) && !Local_14.f_433)
	{
		if (__LIB_1__::func_285(&(Local_14.f_256[7 /*3*/]), 5.5f) || Local_14.f_425 <= 6f)
		{
			if (PED::IS_PED_FACING_PED(Global_35, Local_14.f_230[0], 50f))
			{
				return true;
			}
		}
	}
	return false;
}

void func_119()
{
	func_90(&Local_14, Local_14.f_230[0], Global_35, func_291(&Local_14), -1073741824 /* Float: -2f */, 1, 2083444765, func_292(&Local_14), 1);
	func_280(&Local_14, 0, Global_35, 1, 2, -1f, 0);
	func_285(&Local_14, joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), "tauntSecond", Local_14.f_230[0], 10f, 10f, -1082130432 /* Float: -1f */, 6f);
	if (!Local_14.f_48)
	{
		__LIB_3__::func_426(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
	}
	Local_14.f_424 = Local_14.f_425;
	if (Local_14.f_246 < 1)
	{
		Local_14.f_246++;
	}
}

bool func_120(int iParam0)
{
	float fVar0;
	if (Local_14.f_432 || Local_14.f_433)
	{
		return false;
	}
	if (func_21(&Local_14, 64))
	{
		return false;
	}
	if (func_112())
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	fVar0 = 9.5f;
	if (!func_281())
	{
		fVar0 = 7f;
	}
	if (__LIB_1__::func_285(&(Local_14.f_256[7 /*3*/]), fVar0))
	{
		if (Local_14.f_425 <= (Local_14.f_424 + 2f))
		{
			if (ENTITY::GET_ENTITY_SPEED(Global_35) < 2f)
			{
				return true;
			}
		}
	}
	return false;
}

void func_121()
{
	func_90(&Local_14, Local_14.f_230[0], Global_35, func_293(&Local_14), -1073741824 /* Float: -2f */, 1, 2083444765, 0, 1);
	__LIB_2__::func_315(1891783641, Local_14.f_230[0], 1);
	func_280(&Local_14, 0, Global_35, 1, 2, -1f, 0);
	func_285(&Local_14, joaat("EVENT_SHOCKING_BEAT_INTERESTING_NEW"), "tauntFollowup", Local_14.f_230[0], 10f, 10f, 5f, 6f);
	func_294(&Local_14, 64);
	Local_14.f_424 = Local_14.f_425;
	if (!Local_14.f_48)
	{
		if (__LIB_2__::func_0(Local_14.f_230[0], 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */))
		{
			__LIB_3__::func_426(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
		}
	}
	if (Local_14.f_246 < 1)
	{
		Local_14.f_246++;
	}
}

bool func_122()
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_14.f_230[0], false, false) };
	if (Local_14.f_425 > (Local_14.f_424 + 3f))
	{
		if (Local_14.f_426 >= Local_14.f_425 && Local_14.f_425 > 7.5f)
		{
			return true;
		}
	}
	else if ((Local_14.f_426 > (Local_14.f_425 + 1f) && (Local_14.f_425 > 7.5f || Local_14.f_234 > (7.5f + 1.5f))) && ENTITY::GET_ENTITY_SPEED(Global_35) > 1.5f)
	{
		return true;
	}
	if (Local_14.f_433)
	{
		return true;
	}
	return false;
}

void func_123()
{
	func_126();
	switch (Local_14.f_253)
	{
		case 0:
			if (PED::IS_PED_USING_ANY_SCENARIO(Local_14.f_230[0]))
			{
				func_296(&Local_14, 4);
			}
			else
			{
				if (!func_66(&Local_14, 1024))
				{
					func_67(&Local_14, 1024);
				}
				if (__LIB_0__::func_154(__LIB_1__::func_372(Local_14.f_230[0], 0)))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_14.f_230[0], joaat("WEAPON_UNARMED"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(Local_14.f_230[0], 1, 1, 0, 0);
					func_296(&Local_14, 1);
				}
				else
				{
					func_296(&Local_14, 3);
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_154(__LIB_1__::func_372(Local_14.f_230[0], 0)) && !__LIB_0__::func_154(__LIB_1__::func_372(Local_14.f_230[0], 1)))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("SCRIPT_COMMON@SHARED_SCENARIOS@STAND@GENERIC@MALE_A@react_look@exit@dismissive"))
				{
					TASK::TASK_PLAY_ANIM(Local_14.f_230[0], "SCRIPT_COMMON@SHARED_SCENARIOS@STAND@GENERIC@MALE_A@react_look@exit@dismissive", "front_exit", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
					func_296(&Local_14, 2);
				}
				else
				{
					func_296(&Local_14, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_163(Local_14.f_230[0], -2017877118))
			{
				func_25();
				func_296(&Local_14, 3);
			}
			break;
		case 3:
			if (!PED::IS_PED_USING_ANY_SCENARIO(Local_14.f_230[0]))
			{
				if (!__LIB_0__::func_163(Local_14.f_230[0], -1098463898))
				{
					func_25();
				}
			}
			else
			{
				func_296(&Local_14, 4);
			}
			break;
		case 4:
			if (!PED::IS_PED_USING_ANY_SCENARIO(Local_14.f_230[0]))
			{
				func_296(&Local_14, 0);
			}
			break;
	}
	__LIB_0__::func_325(&(Local_14.f_232[0]));
	if (TASK::_0x916B8E075ABC8B4E(Local_14.f_230[0], 1))
	{
		func_297(&Local_14, 0, 1);
	}
}

bool func_124()
{
	if (func_112())
	{
		return false;
	}
	if (Local_14.f_440)
	{
		return true;
	}
	if (((Local_14.f_425 <= Local_14.f_424 && func_298()) && !Local_14.f_432) && !Local_14.f_433)
	{
		if (PED::IS_PED_FACING_PED(Global_35, Local_14.f_230[0], 50f))
		{
			return true;
		}
	}
	return false;
}

bool func_125()
{
	if (Local_14.f_432 || Local_14.f_433)
	{
		return false;
	}
	if (Local_14.f_425 >= (Local_14.f_424 + 4f))
	{
		return false;
	}
	if (func_21(&Local_14, 256))
	{
		return false;
	}
	if (__LIB_2__::func_227(2f, 1, 0, 0))
	{
		return true;
	}
	return false;
}

void func_126()
{
	func_299();
}

void func_127()
{
	if (func_112())
	{
		return;
	}
	if ((func_298() && !func_66(&Local_14, 512)) && (ENTITY::GET_ENTITY_SPEED(Global_35) < 1f || PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(Local_14.f_230[0], true, true), 60f)))
	{
		func_300();
		func_67(&Local_14, 512);
	}
}

bool func_128()
{
	if (func_112())
	{
		return false;
	}
	if ((((!func_132() && !Local_14.f_432) && !Local_14.f_433) && __LIB_1__::func_285(&(Local_14.f_256[7 /*3*/]), 6f)) && !func_122())
	{
		if (Local_14.f_421 == 0)
		{
			return true;
		}
		if ((__LIB_0__::func_485() - Local_14.f_421) > 7000)
		{
			return true;
		}
	}
	return false;
}

void func_129()
{
	func_90(&Local_14, Local_14.f_230[0], Global_35, func_301(&Local_14), -1073741824 /* Float: -2f */, 1, 2083444765, 0, 1);
	Local_14.f_423 = 3;
	if (Local_14.f_247 < 3)
	{
		Local_14.f_247 = 3;
	}
	func_285(&Local_14, joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), "leaveFirst", Local_14.f_230[0], 10f, 10f, 5f, 6f);
}

void func_130()
{
	if (func_66(&Local_14, 1024))
	{
		return;
	}
	switch (Local_14.f_254)
	{
		case 0:
			break;
		case 1:
			if (!PED::IS_PED_USING_ANY_SCENARIO(Local_14.f_230[0]) && __LIB_2__::func_227(0f, 1, Global_35, 1))
			{
				TASK::TASK_CONFRONT(Local_14.f_230[0], Global_35, 2);
				__LIB_1__::func_336(&(Local_14.f_248.f_3), 2);
				__LIB_2__::func_73(Local_14.f_230[0], &(Local_14.f_232[0]), joaat("BLIP_STYLE_ENEMY"), 749968775, 0, 0);
				MAP::_BLIP_SET_MODIFIER(Local_14.f_232[0], 749968775);
				func_67(&Local_14, 32768);
				func_302(&Local_14, 3);
			}
			break;
		case 2:
			if (__LIB_1__::func_372(Local_14.f_230[0], 0) == joaat("WEAPON_MELEE_KNIFE") && __LIB_2__::func_227(0f, 1, Global_35, 1))
			{
				TASK::TASK_CONFRONT(0, Global_35, 20);
				__LIB_1__::func_336(&(Local_14.f_248.f_3), 2);
				__LIB_2__::func_73(Local_14.f_230[0], &(Local_14.f_232[0]), joaat("BLIP_STYLE_ENEMY"), 749968775, 0, 0);
				MAP::_BLIP_SET_MODIFIER(Local_14.f_232[0], 749968775);
				func_67(&Local_14, 32768);
				func_302(&Local_14, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_163(Local_14.f_230[0], joaat("SCRIPT_TASK_CONFRONT")))
			{
				func_285(&Local_14, joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), "shove", Local_14.f_230[0], 10f, 10f, 5f, 6f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_14.f_230[0], Global_35, -1, -1f, -1f, -1f);
				func_302(&Local_14, 4);
			}
			break;
		case 4:
			break;
		case 5:
			break;
	}
}

void func_131()
{
	func_90(&Local_14, Local_14.f_230[0], Global_35, func_303(&Local_14), -1073741824 /* Float: -2f */, 1, 2083444765, 0, 1);
	func_285(&Local_14, joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), "leaveSecond", Local_14.f_230[0], 10f, 10f, 5f, 6f);
}

bool func_132()
{
	if ((Local_14.f_234 > 7.5f && Local_14.f_425 > 7.5f) && Local_14.f_426 >= Local_14.f_425)
	{
		return true;
	}
	return false;
}

bool func_133(int iParam0)
{
	if (func_112())
	{
		return false;
	}
	if (iParam0 == 1 || func_111())
	{
		Local_14.f_443 = 1;
		return true;
	}
	if (((!func_132() && !Local_14.f_432) && !Local_14.f_433) && __LIB_1__::func_285(&(Local_14.f_256[7 /*3*/]), 6f))
	{
		Local_14.f_443 = 1;
		return true;
	}
	return false;
}

bool func_134()
{
	if (__LIB_2__::func_1(Local_14.f_230[0], 0, 1))
	{
		if (PED::IS_PED_RAGDOLL(Local_14.f_230[0]))
		{
			return false;
		}
		if (PED::IS_PED_PERFORMING_MELEE_ACTION(Local_14.f_230[0], 32768, 0))
		{
			return false;
		}
		return true;
	}
	return false;
}

void func_135()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	char* sVar9;
	bVar1 = func_304();
	iVar2 = 0;
	iVar3 = 0;
	if (!bVar1)
	{
		iVar2 = 68157440;
		iVar3 = 4096;
	}
	bVar4 = func_139();
	bVar5 = __LIB_1__::func_372(Local_14.f_230[0], 0) == joaat("WEAPON_MELEE_KNIFE");
	if (Local_14.f_443)
	{
		__LIB_2__::func_357(Local_14.f_230[0], Global_36, 3, 0, 2);
	}
	else
	{
		__LIB_2__::func_357(Local_14.f_230[0], Global_36, 3, 0, 3);
	}
	iVar7 = __LIB_1__::func_372(Global_35, 0);
	bVar6 = (__LIB_0__::func_237(iVar7) || WEAPON::_0x705BE297EEBDB95D(iVar7));
	if ((bVar4 && !bVar6) && !func_102())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Local_14.f_230[0], joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
	}
	if (func_102())
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(Local_14.f_230[0], &iVar0, 0, 0, 1, 1);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (bVar4)
		{
			if (!bVar5 && !bVar6)
			{
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			}
		}
		else if (((Global_1935630.f_40 == 0 && !bVar5) && ENTITY::GET_ENTITY_SPEED(Global_35) < 3f) && !bVar1)
		{
			TASK::TASK_CONFRONT(0, Global_35, 2);
		}
		TASK::TASK_COMBAT_PED(0, Global_35, iVar2, iVar3);
		__LIB_1__::func_474(Local_14.f_230[0], &iVar0, 0, 0, 1, 1);
	}
	if (Local_14.f_5.f_16 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Local_14.f_230[0], 6, true);
	}
	func_285(&Local_14, joaat("EVENT_SHOCKING_BEAT_INTERESTING_NEW"), "meleeFight", Local_14.f_230[0], 10f, 10f, 5f, 6f);
	__LIB_2__::func_73(Local_14.f_230[0], &(Local_14.f_232[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
	if (bVar1 || func_249(&Local_14))
	{
		if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_14.f_230[0], Global_35, 1, 1) && !PED::IS_PED_RAGDOLL(Local_14.f_230[0]))
		{
			sVar9 = func_308(&Local_14, 0, &iVar8);
			func_90(&Local_14, Local_14.f_230[0], Global_35, sVar9, -1073741824 /* Float: -2f */, 1, 2083444765, iVar8, 1);
		}
	}
	else if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_14.f_230[0], Global_35, 1, 1) && !PED::IS_PED_RAGDOLL(Local_14.f_230[0]))
	{
		sVar9 = func_308(&Local_14, 0, &iVar8);
		func_90(&Local_14, Local_14.f_230[0], Global_35, sVar9, -1073741824 /* Float: -2f */, 1, 2083444765, iVar8, 1);
	}
}

bool func_139()
{
	switch (Local_14.f_452)
	{
		case 2:
			return true;
	}
	return false;
}

void func_145()
{
	if (Local_14.f_44)
	{
		if (!func_66(&Local_14, 128))
		{
			if (func_40(&Local_14) == 0)
			{
				__LIB_2__::func_212(99, Global_1310750[99 /*111*/].f_36, 0.75f, 1, 0);
				__LIB_2__::func_212(99, Global_1310750[99 /*111*/].f_37, 0.75f, 0, 0);
			}
			func_67(&Local_14, 128);
		}
	}
}

void func_148(int iParam0)
{
	if (__LIB_2__::func_1(Local_14.f_230[iParam0], 0, 0))
	{
		PED::_0x58F7DB5BD8FA2288(Local_14.f_230[iParam0]);
		PED::_0x58F7DB5BD8FA2288(Local_14.f_230[iParam0]);
	}
}

void func_188(var uParam0)
{
	uParam0->f_293[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-330.52f, 708.927f, 115.657f, 0f, 0f, 8.99999f, 4.269793f, 1.253f, 3.425777f, "volAvoidance");
	uParam0->f_293[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-330.4928f, 709.1863f, 116.1676f, 0f, 0f, 9.999986f, 4f, 4f, 3f, "volTrigger");
	uParam0->f_293[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-330.4928f, 709.1863f, 116.1676f, 0f, 0f, 9.999986f, 13f, 13f, 3f, "volTriggerHeadLook");
	uParam0->f_293[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-348.3862f, 699.1019f, 117.5578f, 0f, 0f, 14.88562f, 9.546879f, 17.60531f, 10.4889f, "volDontApproach");
	uParam0->f_293[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-348.3862f, 699.1019f, 117.5578f, 0f, 0f, 14.88562f, 9.546879f, 17.60531f, 10.4889f, "volLeaveSpecial");
	uParam0->f_293[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-334.3801f, 703.6895f, 115.657f, 0f, 0f, 27.56927f, 8.758552f, 7.432656f, 5.425777f, "volForceGunfire");
}

void func_189(var uParam0)
{
	uParam0->f_293[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-211.1373f, 641.0121f, 112.6869f, 0f, 0f, 44.99998f, 2.269793f, 1.253f, 3.425777f, "volAvoidance");
	uParam0->f_293[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-210.8904f, 641.0791f, 113.7f, 0f, 0f, 9.999986f, 4f, 4f, 3f, "volTrigger");
	uParam0->f_293[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-210.8904f, 641.0791f, 113.7f, 0f, 0f, 9.999987f, 10f, 10f, 3f, "volTriggerHeadLook");
	uParam0->f_293[7] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volForceGunfire");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_293[7], -211.8035f, 644.1504f, 112.6869f, 0f, 0f, 2.362045f, 1.436645f, 4.495128f, 3.425777f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_293[7], -212.4206f, 643.9699f, 112.6869f, 0f, 0f, 16.30075f, 1.436645f, 4.495128f, 3.425777f);
}

void func_190(var uParam0)
{
	uParam0->f_293[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-249.0685f, 733.8885f, 117.1664f, 0f, 0f, 18.59891f, 2.09787f, 1.253f, 3.425777f, "volAvoidance");
	uParam0->f_293[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-248.8496f, 733.0479f, 116.739f, 0f, 0f, 9.999984f, 3f, 3f, 3.931592f, "volTrigger");
	uParam0->f_293[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-248.8496f, 733.0479f, 116.739f, 0f, 0f, 9.999986f, 10f, 10f, 3.931592f, "volTriggerHeadLook");
	uParam0->f_293[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_293[2], -258.678f, 735.6104f, 118.5831f, 0f, 0f, 20.13437f, 8.462885f, 8.062346f, 3.132319f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_293[2], -247.5568f, 741.0378f, 117.7419f, 0f, 0f, 7.957971f, 18.87138f, 6.253144f, 7.21429f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_293[2], -260.3084f, 731.0588f, 117.7419f, 0f, 0f, 20.13437f, 8.462885f, 4.201533f, 3.132319f);
	uParam0->f_293[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-249.9602f, 736.5627f, 117.1664f, 0f, 0f, 20.5989f, 2.09787f, 3.899763f, 3.425777f, "volForceGunfire");
	uParam0->f_293[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-279.9724f, 780.2538f, 118.5831f, 0f, 0f, -0.11438f, 8.462885f, 8.062346f, 3.132319f, "volLeaveSpecial");
}

void func_191(var uParam0)
{
	uParam0->f_293[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1326.308f, -1220.034f, 79.691f, 0f, 0f, -20f, 3f, 3f, 3.425777f, "volAvoidance");
	uParam0->f_293[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1326.386f, -1220.335f, 79.85357f, 0f, 0f, 9.999983f, 4f, 4f, 3f, "volTrigger");
	uParam0->f_293[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1326.383f, -1220.335f, 79.85357f, 0f, 0f, 9.999986f, 12f, 12f, 3f, "volTriggerHeadLook");
	uParam0->f_293[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1326.535f, -1213.045f, 80.70041f, 0f, 0f, 84.00001f, 8.045038f, 24.97653f, 8.250907f, "volDontApproach");
}

void func_192(var uParam0)
{
	uParam0->f_293[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1365.989f, -1343.667f, 78.42731f, 0f, 0f, -9.100684f, 3.3f, 3.3f, 3.425777f, "volAvoidance");
	uParam0->f_293[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1365.452f, -1343.594f, 77.98632f, 0f, 0f, -10.69129f, 4f, 4f, 2.5f, "volTrigger");
	uParam0->f_293[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1365.452f, -1343.594f, 77.98632f, 0f, 0f, -10.69129f, 10f, 10f, 2.5f, "volTriggerHeadLook");
	uParam0->f_293[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDontApproach");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_293[2], 1358.369f, -1344.132f, 78.57729f, 0f, 0f, -13.21507f, 10.79185f, 21.54843f, 3.132319f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_293[2], 1358.369f, -1344.132f, 78.57729f, 0f, 0f, -13.21507f, 10.79185f, 21.54843f, 3.132319f);
	uParam0->f_293[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volLeaveSpecial");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_293[3], 1358.369f, -1344.132f, 78.57729f, 0f, 0f, -13.21507f, 10.79185f, 21.54843f, 3.132319f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_293[3], 1358.369f, -1344.132f, 78.57729f, 0f, 0f, -13.21507f, 10.79185f, 21.54843f, 3.132319f);
	uParam0->f_293[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1359.736f, -1344.453f, 78.57729f, 0f, 0f, -15.21507f, 7.779215f, 21.54843f, 3.132319f, "volForceGunfire");
	uParam0->f_293[5] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1365.17f, -1343.496f, 77.17604f, 0f, 0f, 0f, 0.6f, 0.6f, 0.6f, "vegModCull1");
	func_362(&(uParam0->f_455[0]), uParam0->f_293[5], 1);
}

void func_193(var uParam0)
{
	uParam0->f_293[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1273f, -1282.2f, 74.4f, 0f, 0f, 41f, 3.3f, 3.3f, 3.425777f, "volAvoidance");
	uParam0->f_293[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1273f, -1282.2f, 74.4f, 0f, 0f, 5.409392f, 4f, 4f, 2.5f, "volTrigger");
	uParam0->f_293[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1273f, -1282.2f, 74.4f, 0f, 0f, 5.409392f, 12f, 12f, 2.5f, "volTriggerHeadLook");
	uParam0->f_293[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1267.648f, -1289.597f, 75.48565f, 0f, 0f, 63.87444f, 10.79185f, 26.05049f, 3.132319f, "volDontApproach");
	uParam0->f_293[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1270.938f, -1283.992f, 74.4f, 0f, 0f, 41f, 4.006106f, 1.735619f, 3.425777f, "volForceGunfire");
}

void func_194(var uParam0)
{
	uParam0->f_293[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1357.921f, -1379.876f, 78.42731f, 0f, 0f, -11f, 2.196033f, 2.525718f, 3.425777f, "volAvoidance");
	uParam0->f_293[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1358.083f, -1379.683f, 78.90412f, 0f, 0f, 5.409392f, 4f, 4f, 2.5f, "volTrigger");
	uParam0->f_293[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1358.083f, -1379.683f, 78.90412f, 0f, 0f, 5.409392f, 10f, 10f, 2.5f, "volTriggerHeadLook");
	uParam0->f_293[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1347.825f, -1376.159f, 80.01695f, 0f, 0f, -9.763009f, 10.79185f, 26.05049f, 4.363551f, "volDontApproach");
	uParam0->f_293[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1347.825f, -1376.159f, 80.01695f, 0f, 0f, -9.763009f, 10.79185f, 26.05049f, 4.363551f, "volLeaveSpecial");
}

void func_195(var uParam0)
{
	uParam0->f_293[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2593.043f, -1206.832f, 52.31036f, 0f, 0f, -1f, 2.196033f, 2.525718f, 3.425777f, "volAvoidance");
	uParam0->f_293[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2592.527f, -1207.364f, 52.31036f, 0f, 0f, 5.409392f, 4f, 4f, 2.5f, "volTrigger");
	uParam0->f_293[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2592.527f, -1207.364f, 52.31036f, 0f, 0f, 5.409392f, 8f, 8f, 2.5f, "volTriggerHeadLook");
	uParam0->f_293[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2586.793f, -1207.387f, 52.31036f, 0f, 0f, 0.236991f, 10.79185f, 26.05049f, 4.363551f, "volDontApproach");
	uParam0->f_293[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2586.113f, -1207.39f, 52.31036f, 0f, 0f, 0.236991f, 10.79185f, 26.05049f, 4.363551f, "volLeaveSpecial");
}

void func_196(var uParam0)
{
	uParam0->f_293[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2380.935f, -1353.67f, 44.7382f, 0f, 0f, -1f, 2.196033f, 2.525718f, 3.425777f, "volAvoidance");
	uParam0->f_293[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2379.945f, -1353.45f, 44.738f, 0f, 0f, -26.41367f, 5.5f, 5.5f, 2.5f, "volTrigger");
	uParam0->f_293[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2379.945f, -1353.45f, 44.738f, 0f, 0f, -26.41367f, 12f, 12f, 2.5f, "volTriggerHeadLook");
	uParam0->f_293[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2387.09f, -1354.793f, 44.9089f, 0f, 0f, -28.013f, 10.792f, 33.20794f, 4.364f, "volDontApproach");
	uParam0->f_293[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2387.09f, -1354.793f, 44.9089f, 0f, 0f, -28.013f, 10.792f, 33.20794f, 4.364f, "volLeaveSpecial");
}

int func_198(var uParam0, int iParam1)
{
	switch (uParam0->f_452)
	{
		case 0:
			return joaat("G_M_M_UNIDUSTER_01");
		case 2:
			switch (uParam0->f_237)
			{
				case 0:
					return joaat("G_M_O_UNIEXCONFEDS_01");
				case 1:
					return joaat("G_M_O_UNIEXCONFEDS_01");
				case 2:
					return joaat("G_M_Y_UNIEXCONFEDS_01");
				case 3:
					return joaat("G_M_Y_UNIEXCONFEDS_01");
			}
			break;
	}
	return 0;
}

char* func_199(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_363(uParam0, iParam1);
	return func_364(iVar0);
}

int func_200(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = joaat("META_OUTFIT_DEFAULT");
	switch (uParam0->f_452)
	{
		case 0:
			switch (uParam0->f_237)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							iVar0 = 1378133831;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							iVar0 = 1794758897;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							iVar0 = 2104655330;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							iVar0 = 1958866025;
							break;
					}
					break;
			}
			break;
		case 2:
			switch (uParam0->f_237)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							iVar0 = 1378133831;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							iVar0 = 1794758897;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							iVar0 = 2104655330;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							iVar0 = 1958866025;
							break;
					}
					break;
			}
			break;
	}
	return iVar0;
}

struct<4> func_201(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_255)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { -331.92f, 708.627f, 115.857f };
					Var0.f_3 = -25.41f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { -211.45f, 641.15f, 112f };
					Var0.f_3 = 205.21f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -249.1f, 734.25f, 115.95f };
					Var0.f_3 = 200.56f;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1325.94f, -1219.936f, 78.6504f };
					Var0.f_3 = 180.2283f;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1365.15f, -1343.6f, 77.05f };
					Var0.f_3 = 255.2f;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1272.8f, -1282.05f, 74.4f };
					Var0.f_3 = 323.4f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1358.1f, -1379.7f, 78.5f };
					Var0.f_3 = 270f;
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2592.527f, -1207.364f, 52.31036f };
					Var0.f_3 = -90f;
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2380.885f, -1353.64f, 44.7382f };
					Var0.f_3 = 60f;
					break;
			}
			break;
	}
	return Var0;
}

var func_205()
{
	var uVar0;
	__LIB_1__::func_336(&uVar0, 1);
	__LIB_1__::func_336(&uVar0, 112);
	__LIB_1__::func_336(&uVar0, 1664);
	__LIB_1__::func_336(&uVar0, 393216);
	return uVar0;
}

int func_206(var uParam0, int iParam1)
{
	switch (uParam0->f_255)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL_MALE_D");
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL_MALE_D");
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_SMOKE_MALE_C");
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL_MALE_D");
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL_MALE_D");
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_SMOKE_MALE_C");
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL_MALE_D");
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_LEAN_BACK_WALL_MALE_D");
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_226(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_446))
	{
		return false;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0->f_446, "GANG_INTERACT_HOLD_IT"))
	{
		return true;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0->f_446, "GREET_SHOUTED"))
	{
		return true;
	}
	if (MISC::ARE_STRINGS_EQUAL(uParam0->f_446, "GANG_INTERACT_CHAT"))
	{
		return true;
	}
	return false;
}

char* func_227(var uParam0, int iParam1)
{
	switch (uParam0->f_452)
	{
		case 0:
			switch (uParam0->f_237)
			{
				case 0:
					switch (uParam0->f_423)
					{
						case 1:
							*iParam1 = 3;
							return "DEFUSE_ON_PROPERTY";
						case 2:
							*iParam1 = 1;
							return "DEFUSE_LEFT_PROPERTY";
						case 3:
							*iParam1 = 3;
							return "DEFUSE_LEFT_PROPERTY_KEEP_GOING";
						default:
							*iParam1 = 3;
							return "DEFUSE_ON_PROPERTY";
					}
					break;
				case 1:
					switch (uParam0->f_423)
					{
						case 1:
							*iParam1 = 2;
							return "DEFUSE_ON_PROPERTY";
						case 2:
							*iParam1 = 5;
							return "DEFUSE_LEFT_PROPERTY";
						case 3:
							*iParam1 = 2;
							return "DEFUSE_LEFT_PROPERTY_KEEP_GOING";
						default:
							*iParam1 = 2;
							return "DEFUSE_ON_PROPERTY";
					}
					break;
				case 2:
					switch (uParam0->f_423)
					{
						case 1:
							*iParam1 = 4;
							return "RANCHER_PLAYER_IS_SUSPICIOUS_POS";
						case 2:
							*iParam1 = 2;
							return "RANCHER_CRIME_ESCALATE_POS";
						case 3:
							*iParam1 = 3;
							return "RANCHER_CRIME_ESCALATE_POS";
						default:
							*iParam1 = 4;
							return "RANCHER_PLAYER_IS_SUSPICIOUS_POS";
					}
					break;
				case 3:
					switch (uParam0->f_423)
					{
						case 1:
							*iParam1 = 1;
							return "RANCHER_PLAYER_IS_SUSPICIOUS_POS";
						case 2:
							*iParam1 = 2;
							return "DEFUSE_LEFT_PROPERTY";
						case 3:
							*iParam1 = 5;
							return "DEFUSE_LEFT_PROPERTY_KEEP_GOING";
						default:
							*iParam1 = 1;
							return "RANCHER_PLAYER_IS_SUSPICIOUS_POS";
					}
					break;
			}
			break;
		case 2:
			switch (uParam0->f_237)
			{
				case 0:
					switch (uParam0->f_423)
					{
						case 1:
							*iParam1 = 4;
							return "DEFUSE_ON_PROPERTY";
						case 2:
							*iParam1 = 2;
							return "DEFUSE_ON_PROPERTY";
						case 3:
							*iParam1 = 5;
							return "DEFUSE_LEFT_PROPERTY_KEEP_GOING";
						default:
							*iParam1 = 4;
							return "DEFUSE_ON_PROPERTY";
					}
					break;
				case 1:
					switch (uParam0->f_423)
					{
						case 1:
							*iParam1 = 1;
							return "DEFUSE_ON_PROPERTY";
						case 2:
							*iParam1 = 1;
							return "DEFUSE_WEAPON_TOUGH";
						case 3:
							*iParam1 = 5;
							return "DEFUSE_LEFT_PROPERTY";
						default:
							*iParam1 = 1;
							return "DEFUSE_ON_PROPERTY";
					}
					break;
				case 2:
					switch (uParam0->f_423)
					{
						case 1:
							*iParam1 = 4;
							return "RANCHER_CRIME_ESCALATE_POS";
						case 2:
							*iParam1 = 2;
							return "RANCHER_CRIME_FINAL_WARNING_POS";
						case 3:
							*iParam1 = 1;
							return "RANCHER_CRIME_FINAL_WARNING_POS";
						default:
							*iParam1 = 4;
							return "RANCHER_CRIME_ESCALATE_POS";
					}
					break;
				case 3:
					switch (uParam0->f_423)
					{
						case 1:
							*iParam1 = 3;
							return "RANCHER_PLAYER_IS_SUSPICIOUS_POS";
						case 2:
							*iParam1 = 5;
							return "RANCHER_CRIME_DEFUSE_POS";
						case 3:
							*iParam1 = 3;
							return "DEFUSE_LEFT_PROPERTY_KEEP_GOING";
						default:
							*iParam1 = 3;
							return "RANCHER_PLAYER_IS_SUSPICIOUS_POS";
					}
					break;
			}
			break;
	}
	return "";
}

void func_232(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_407(uParam0, uParam1, iVar0, bParam2);
		iVar0++;
	}
}

bool func_249(var uParam0)
{
	if (__LIB_2__::func_443() && (((uParam0->f_255 == 3 || uParam0->f_255 == 6) || uParam0->f_255 == 5) || uParam0->f_255 == 4))
	{
		return false;
	}
	return func_439(&(uParam0->f_248), uParam0, &(uParam0->f_230), 0);
}

bool func_253(vector3 vParam0, int iParam3)
{
	var uVar0[20];
	var uVar21[1];
	int iVar23;
	int iVar24;
	vector3 vVar25;
	int iVar28;
	uVar21[0] = Local_14.f_230[0];
	iVar23 = __LIB_16__::func_963(&uVar0, &uVar21, 20, vParam0, iParam3, 1, 0, 0, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
	iVar24 = 0;
	while (iVar24 < iVar23)
	{
		if (__LIB_2__::func_1(uVar0[iVar24], 0, 1))
		{
			iVar28 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uVar0[iVar24]);
			if (iVar28 == joaat("REL_COP"))
			{
				vVar25 = { ENTITY::GET_ENTITY_COORDS(uVar0[iVar24], false, false) };
				return true;
			}
		}
		iVar24++;
	}
	return false;
}

float func_262(var uParam0)
{
	return 35f;
}

int func_268(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_445(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

int func_274()
{
	if (Local_14.f_425 < 7f)
	{
		return 1;
	}
	if (Global_1935630.f_40 == 0)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) < 5.5f)
		{
			return 1;
		}
	}
	else if (ENTITY::GET_ENTITY_SPEED(Global_35) < 10f)
	{
		return 1;
	}
	return 0;
}

bool func_275()
{
	int iVar0;
	return __LIB_3__::func_263(&(Local_14.f_227), iVar0, 1084227584 /* Float: 5f */, 0, 0);
}

char* func_277(var uParam0)
{
	switch (uParam0->f_452)
	{
		case 0:
			switch (uParam0->f_237)
			{
				case 0:
					return "GANG_INTERACT_APPROACH_TERRITORY";
				case 1:
					return "GANG_INTERACT_HOLD_IT";
				case 2:
					return "GANG_HOLD_IT_SUPPORT";
				case 3:
					return "GREET_SHOUTED";
				default:
					break;
			}
			break;
		case 2:
			switch (uParam0->f_237)
			{
				case 0:
					return "GANG_INTERACT_APPROACH_TERRITORY";
				case 1:
					return "GANG_INTERACT_HOLD_IT";
				case 2:
					return "GANG_INTERACT_CHAT_WARNING";
				case 3:
					return "GANG_INTERACT_CHAT";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_278(var uParam0)
{
	switch (uParam0->f_452)
	{
		case 0:
			switch (uParam0->f_237)
			{
				case 2:
					return 2;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_280(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, bool bParam6)
{
	struct<23> Var0;
	int iVar25;
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
		TASK::_0xE7FA07624574B79A(uParam0->f_230[iParam1], iParam2, iParam3, iParam4, fParam5, 1, 0, 0, 0);
	}
	iVar25 = BUILTIN::FLOOR(fParam5) * 1000;
	if (fParam5 < 0f)
	{
		iVar25 = -1;
	}
	TASK::TASK_LOOK_AT_ENTITY(uParam0->f_230[iParam1], iParam2, iVar25, 0, 51, 0);
	__LIB_2__::func_281(&Var0, iParam2, 0, -1, 3, 3, 2, 1, 0, 0, 0, 0);
	_NAMESPACE29::_0x66F9EB44342BB4C5(uParam0->f_230[iParam1], &Var0);
}

bool func_281()
{
	switch (Local_14.f_452)
	{
		case 2:
			switch (Local_14.f_237)
			{
				case 1:
				case 3:
					return false;
			}
			break;
		case 0:
			switch (Local_14.f_237)
			{
				case 1:
				case 3:
					return false;
				default:
					break;
			}
			break;
	}
	return true;
}

bool func_282()
{
	if (((Local_14.f_431 && !Local_14.f_432) && !__LIB_3__::func_291(Global_35, 1)) && !PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	if (Local_14.f_442)
	{
		if (__LIB_2__::func_341(&(Local_14.f_311[0 /*21*/])))
		{
			return true;
		}
	}
	return false;
}

void func_283()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (__LIB_2__::func_1(Local_14.f_230[iVar0], 0, 0))
		{
			func_280(&Local_14, iVar0, Global_35, 1, 2, 8000f, 1);
		}
		iVar0++;
	}
}

void func_285(var uParam0, int iParam1, char[4] cParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)
{
	__LIB_2__::func_663(&(uParam0->f_381));
	uParam0->f_381 = iParam1;
	uParam0->f_381.f_8 = fParam5;
	uParam0->f_381.f_6 = fParam4;
	uParam0->f_381.f_11 = iParam6;
	uParam0->f_381.f_7 = fParam5;
	uParam0->f_381.f_1 = uParam3;
	uParam0->f_381.f_9 = fParam7;
	__LIB_2__::func_668(&(uParam0->f_368), &(uParam0->f_381), cParam2);
}

void func_289(int iParam0, int iParam1)
{
	PED::_0xAAB050DA48B57978(Local_14.f_230[iParam0], "Default_Brave", Global_35, -1, 4);
	PED::_0xEEED8FAFEC331A70(Local_14.f_230[iParam0], Global_36, iParam1);
}

char* func_290(var uParam0)
{
	switch (uParam0->f_452)
	{
		case 0:
			switch (uParam0->f_237)
			{
				case 0:
					return "WHATS_YOUR_PROBLEM";
				case 1:
					return "HEADS_UP_TOWN";
				case 2:
					return "GENERIC_INSULT_MED_NEUTRAL";
				case 3:
					return "GANG_INTERACT_CHAT_RECOGNIZE_YOU";
			}
			break;
		case 2:
			switch (uParam0->f_237)
			{
				case 0:
					return "GANG_INTERACT_CHAT_BIG_WARNING_TOWN";
				case 1:
					return "HEADS_UP_GANG_TERRITORY";
				case 2:
					return "WARNING";
				case 3:
					return "GANG_INTERACT_CHAT_FAMILIAR_FACE";
			}
			break;
	}
	return "";
}

char* func_291(var uParam0)
{
	switch (uParam0->f_452)
	{
		case 0:
			switch (uParam0->f_237)
			{
				case 0:
					return "GANG_INTERACT_CHAT_BIG_WARNING_TOWN";
				case 1:
					return "GANG_HOLD_IT_SUPPORT";
				case 2:
					return "GANG_INTERACT_CHAT_BIG_WARNING";
				case 3:
					return "GANG_INTERACT_CHAT_BEEN_OUT_TOO_LONG";
				default:
					break;
			}
			break;
		case 2:
			switch (uParam0->f_237)
			{
				case 0:
					return "GANG_INTERACT_CHAT_WARNING";
				case 1:
					return "GANG_INTERACT_CHAT_TOWN";
				case 2:
					return "GANG_INTERACT_CHAT_BIG_WARNING";
				case 3:
					return "GANG_INTERACT_APPROACH";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_292(var uParam0)
{
	switch (uParam0->f_452)
	{
		case 0:
			switch (uParam0->f_237)
			{
				case 1:
					return 2;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_293(var uParam0)
{
	switch (uParam0->f_452)
	{
		case 0:
			switch (uParam0->f_237)
			{
				case 0:
					return "GANG_INTERACT_CHAT_WARNING";
				case 1:
					return "GANG_INTERACT_APPROACH_TERRITORY";
				case 2:
					return "GANG_INTERACT_CHAT_WARNING_TOWN";
				case 3:
					return "GANG_INTERACT_CHAT";
				default:
					break;
			}
			break;
		case 2:
			switch (uParam0->f_237)
			{
				case 0:
					return "GANG_INTERACT_APPROACH_TOWN";
				case 1:
					return "GANG_INTERACT_CHAT";
				case 2:
					return "GENERIC_INSULT_MED_MALE";
				case 3:
					return "GANG_INTERACT_CHAT_BEEN_OUT_TOO_LONG";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_294(var uParam0, int iParam1)
{
	uParam0->f_236 = (uParam0->f_236 || iParam1);
}

void func_296(var uParam0, int iParam1)
{
	uParam0->f_253 = iParam1;
}

void func_297(var uParam0, int iParam1, int iParam2)
{
	TASK::_0x541E5B41DCA45828(uParam0->f_230[iParam1], iParam2, 0);
	_NAMESPACE29::_0x0EABF182FBB63D72(uParam0->f_230[iParam1], 6, 1);
	TASK::TASK_CLEAR_LOOK_AT(uParam0->f_230[iParam1]);
}

bool func_298()
{
	if (!Local_14.f_430)
	{
		return false;
	}
	if (Local_14.f_453 > 0 || __LIB_1__::func_285(&(Local_14.f_256[8 /*3*/]), func_489()))
	{
		return true;
	}
	return false;
}

void func_299()
{
	if (!func_21(&Local_14, 128) && (Local_14.f_240 > 2 || Local_14.f_453 > 0))
	{
		func_90(&Local_14, Local_14.f_230[0], Global_35, func_490(&Local_14), -1073741824 /* Float: -2f */, 1, 2083444765, 0, 1);
		func_294(&Local_14, 128);
	}
}

void func_300()
{
	if (Local_14.f_254 < 1)
	{
		__LIB_2__::func_45(Local_14.f_230[0], Global_35, -1);
		func_302(&Local_14, 1);
		func_130();
	}
}

char* func_301(var uParam0)
{
	switch (uParam0->f_452)
	{
		case 0:
			switch (uParam0->f_237)
			{
				case 0:
					return "GET_LOST";
				case 1:
					return "LEAVE_NOW";
				case 2:
					return "CHALLENGE_THREATEN";
				case 3:
					return "HEADS_UP_TOWN";
			}
			break;
		case 2:
			switch (uParam0->f_237)
			{
				case 0:
					return "GET_LOST";
				case 1:
					return "GANG_INTERACT_CHAT_BIG_WARNING";
				case 2:
					return "CHALLENGE_THREATEN";
				case 3:
					return "HEADS_UP_TOWN";
			}
			break;
	}
	return "GET_LOST";
}

void func_302(var uParam0, int iParam1)
{
	uParam0->f_254 = iParam1;
}

char* func_303(var uParam0)
{
	switch (uParam0->f_452)
	{
		case 0:
			switch (uParam0->f_237)
			{
				case 0:
					return "CHALLENGE_THREATEN";
				case 1:
					return "GANG_INTERACT_THREATEN";
				case 2:
					return "MELEE_BRING_IT_ON";
				case 3:
					return "GANG_INTERACT_COMPLY";
			}
			break;
		case 2:
			switch (uParam0->f_237)
			{
				case 0:
					return "LEAVE_NOW";
				case 1:
					return "LEAVE_NOW";
				case 2:
					return "MELEE_BRING_IT_ON";
				case 3:
					return "LEAVE_NOW";
			}
			break;
	}
	return "LEAVE_NOW";
}

int func_304()
{
	vector3 vVar0;
	if (__LIB_0__::func_12() == 105 && __LIB_2__::func_443())
	{
		return 0;
	}
	if (__LIB_2__::func_157(Local_14.f_293[7], Global_36))
	{
		return 1;
	}
	if (__LIB_2__::func_157(Local_14.f_293[7], __LIB_2__::func_114(Global_35, 0.5f)))
	{
		return 1;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_230[0], Global_35, 17))
	{
		return 1;
	}
	if (Global_1935630.f_40 == 0)
	{
		if (Local_14.f_98[0] > 6f)
		{
			return 1;
		}
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_14.f_230[0], true, false) };
		if (MISC::ABSF((vVar0.z - Global_36.f_2)) > 0.5f)
		{
			return 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
		{
			return 1;
		}
	}
	else if (Local_14.f_98[0] > 5f)
	{
		return 1;
	}
	return 0;
}

char* func_308(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	if (func_249(uParam0))
	{
		switch (uParam0->f_452)
		{
			case 0:
				switch (uParam0->f_237)
				{
					case 0:
						return "OPENS_FIRE";
					case 1:
						return "OPENS_FIRE";
					case 2:
						return "OPENS_FIRE";
					case 3:
						return "OPENS_FIRE";
				}
				break;
			case 2:
				switch (uParam0->f_237)
				{
					case 0:
						return "OPENS_FIRE";
					case 1:
						return "OPENS_FIRE";
					case 2:
						return "OPENS_FIRE";
					case 3:
						return "OPENS_FIRE";
				}
				break;
		}
	}
	else
	{
		switch (uParam0->f_452)
		{
			case 0:
				switch (uParam0->f_237)
				{
					case 0:
						return "FIGHT";
					case 1:
						return "FIGHT";
					case 2:
						return "FIGHT_RESPONSE";
					case 3:
						return "FIGHT";
				}
				break;
			case 2:
				switch (uParam0->f_237)
				{
					case 0:
						return "FIGHT";
					case 1:
						return "FIGHT";
					case 2:
						return "FIGHT_RESPONSE";
					case 3:
						return "FIGHT";
				}
				break;
		}
	}
	return "FIGHT";
}

void func_362(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam1) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(iParam1) };
	uVar6 = vVar3.x;
	__LIB_3__::func_924(uParam0, vVar0, uVar6, 0, iParam2);
}

int func_363(var uParam0, int iParam1)
{
	switch (uParam0->f_255)
	{
		case 0:
		case 1:
		case 2:
			switch (uParam0->f_237)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return 8;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return 5;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 7;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			switch (uParam0->f_237)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return 10;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return 11;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return 12;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 13;
						default:
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

char* func_364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0356_G_M_M_UniDuster_01_WHITE_02";
		case 1:
			return "0358_G_M_M_UniDuster_02_WHITE_02";
		case 2:
			return "0362_G_M_M_UniDuster_03_WHITE_02";
		case 3:
			return "0361_G_M_M_UniDuster_03_WHITE_01";
		case 4:
			return "0355_G_M_M_UniDuster_01_WHITE_01";
		case 5:
			return "0357_G_M_M_UniDuster_02_WHITE_01";
		case 6:
			return "0359_G_M_M_UniDuster_02_IRISH_01";
		case 7:
			return "0360_G_M_M_UniDuster_03_IRISH_01";
		case 8:
			return "1018_G_M_M_UniDuster_01_IRISH_01";
		case 9:
			return "0174_G_M_O_UniExConfeds_01_WHITE_01";
		case 10:
			return "0175_G_M_O_UniExConfeds_01_WHITE_02";
		case 11:
			return "0176_G_M_O_UniExConfeds_01_WHITE_03";
		case 12:
			return "0177_G_M_Y_UniExConfeds_01_WHITE_01";
		case 13:
			return "0178_G_M_Y_UniExConfeds_01_WHITE_02";
		case 14:
			return "0179_G_M_Y_UniExConfeds_01_WHITE_03";
		case 15:
			return "1026_G_M_Y_UniExConfeds_01_WHITE_04";
		default:
			break;
	}
	return "";
}

void func_407(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 > -1 && iParam2 < *uParam1)
	{
		if (bParam3)
		{
			MISC::SET_BIT(uParam1[iParam2 /*17*/], 16);
		}
		else
		{
			if (uParam0->f_9)
			{
				uParam0->f_9 = 0;
				if (uParam0->f_2 == 2)
				{
					if (!__LIB_0__::func_75(&(uParam0->f_18)))
					{
						__LIB_1__::func_148(&(uParam0->f_18));
					}
				}
			}
			MISC::CLEAR_BIT(uParam1[iParam2 /*17*/], 16);
		}
	}
}

int func_439(var uParam0, var uParam1, var uParam2, float fParam3)
{
	if (func_574(uParam0, uParam1->f_5.f_16, uParam2, &(uParam1->f_98), 0, -1, fParam3))
	{
		return 1;
	}
	return 0;
}

int func_445(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_445(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

float func_489()
{
	switch (Local_14.f_452)
	{
		case 2:
			return 3.25f;
		default:
			break;
	}
	return 4f;
}

char* func_490(var uParam0)
{
	return "PEDTYPE_WON_DISPUTE";
}

bool func_574(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, float fParam6)
{
	bool bVar0;
	int iVar1[6];
	int iVar8[6];
	int iVar15;
	float fVar16;
	float fVar17;
	vector3 vVar18;
	int iVar21;
	bool bVar22;
	float fVar23;
	bool bVar24;
	bool bVar25;
	if (__LIB_0__::func_27(uParam0->f_3, 16))
	{
		return true;
	}
	bVar0 = false;
	if (PED::_0x285D36C5C72B0569(Global_35) < 1f || (__LIB_0__::func_154(Global_1935630.f_44) && WEAPON::_0x705BE297EEBDB95D(Global_1935630.f_44)))
	{
		bVar0 = true;
	}
	switch (iParam1)
	{
		case 1:
		case 4:
		case 8:
		case 16:
		case 64:
		case 4096:
			bVar0 = true;
			break;
	}
	__LIB_3__::func_470(uParam0, iParam1);
	__LIB_1__::func_283(uParam0, 0);
	if (iParam5 < iParam4)
	{
		iParam5 = (*uParam2 - 1);
	}
	fVar16 = Global_36.f_2;
	if ((((((PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 8000) || WEAPON::_0x9E2D5D6BC97A5F1E(Global_35, joaat("WEAPON_UNARMED"), 8000)) || WEAPON::_0x9E2D5D6BC97A5F1E(Global_35, joaat("WEAPON_MELEE_KNIFE"), 8000)) || PED::_0x3BDFCF25B58B0415(Global_35)) || PED::_0x0E99E3BF11BB6367(Global_35)) || __LIB_2__::func_1(PED::GET_PEDS_JACKER(Global_35), 0, 1)) || PED::GET_JACK_TARGET(Global_35) != 0)
	{
		__LIB_1__::func_148(uParam0);
	}
	iVar21 = 1;
	bVar22 = __LIB_3__::func_471();
	iVar15 = iParam4;
	while (iVar15 <= iParam5)
	{
		if (__LIB_2__::func_1((*uParam2)[iVar15], 0, 0))
		{
			if (PED::_GET_LASSO_TARGET(Global_35) == (*uParam2)[iVar15] || PED::_IS_PED_HOGTIED((*uParam2)[iVar15]))
			{
				bVar0 = true;
			}
			fVar23 = __LIB_0__::func_94((*uParam2)[iVar15], Global_36, 1);
			if (fVar23 >= (10f + fParam6))
			{
				iVar1[iVar15] = 1;
			}
			vVar18 = { ENTITY::GET_ENTITY_COORDS((*uParam2)[iVar15], true, false) };
			fVar17 = vVar18.z;
			if (!bVar22 && MISC::ABSF((fVar17 - fVar16)) > 0.75f)
			{
				iVar8[iVar15] = 1;
			}
			iVar21 = 0;
		}
		else
		{
			iVar1[iVar15] = 1;
			iVar8[iVar15] = 1;
		}
		iVar15++;
	}
	if (iVar21 == 1)
	{
		return false;
	}
	bVar24 = true;
	bVar25 = true;
	iVar15 = iParam4;
	while (iVar15 <= iParam5)
	{
		if (!iVar1[iVar15])
		{
			bVar24 = false;
		}
		if (!iVar8[iVar15])
		{
			bVar25 = false;
		}
		iVar15++;
	}
	if (bVar24)
	{
		bVar0 = true;
	}
	if (bVar25)
	{
		bVar0 = true;
	}
	if ((__LIB_0__::func_163(Global_35, 1868526510) || __LIB_0__::func_163(Global_35, 1870523043)) || __LIB_0__::func_163(Global_35, -1794415470))
	{
		bVar0 = true;
	}
	if (__LIB_1__::func_285(uParam0, 8f))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (__LIB_0__::func_27(uParam0->f_3, 1) || !__LIB_0__::func_27(uParam0->f_3, 32))
		{
			__LIB_3__::func_472(uParam2, iParam4, iParam5, 1);
		}
		else
		{
			__LIB_3__::func_472(uParam2, iParam4, iParam5, 0);
			LAW::_0x362086B911657B1A(PLAYER::PLAYER_ID(), 1);
			__LIB_1__::func_336(&(uParam0->f_3), 4);
			__LIB_3__::func_473(uParam0);
		}
		__LIB_1__::func_336(&(uParam0->f_3), 16);
		return true;
	}
	return false;
}

