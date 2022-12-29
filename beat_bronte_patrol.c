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
	struct<587> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 1125515264, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, -1, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, -1 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Local_14.f_566 = 1;
	}
	if (!Local_14.f_566)
	{
		func_1(ScriptParam_0);
		func_2(&Local_14);
		func_3(&Local_14);
	}
	while (true)
	{
		__LIB_2__::func_265(Local_14.f_566, 555, 0);
		if (Local_14.f_566)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (Local_14.f_385)
			{
				case 0:
					if (func_6())
					{
						func_7(&Local_14, 1);
					}
					break;
				case 1:
					if (__LIB_3__::func_454(&Local_14, &ScriptParam_0, 0, 0, 0, 0, 0, 1))
					{
						func_9();
						func_7(&Local_14, 3);
					}
					else if (Local_14.f_160)
					{
						__LIB_1__::func_283(&(Local_14.f_393[5 /*3*/]), 0);
						if (__LIB_1__::func_285(&(Local_14.f_393[5 /*3*/]), 1f))
						{
							func_4();
						}
					}
					break;
				case 3:
					if (__LIB_3__::func_479(Local_14.f_51, Local_14.f_51.f_3, &(Local_14.f_194), &(Local_14.f_348), 1, 0, -1, 1))
					{
						__LIB_3__::func_400(Local_14.f_51, &(Local_14.f_323), 0, 0, 0, -1, 0);
						func_14();
						func_7(&Local_14, 4);
					}
					break;
				case 4:
					if (func_15())
					{
						func_4();
					}
					if (Local_14.f_46)
					{
						if (func_16())
						{
							func_4();
						}
					}
					else if (!Local_14.f_50)
					{
						if (func_17())
						{
							Local_14.f_50 = 1;
						}
					}
					if (func_18())
					{
						func_4();
					}
					break;
			}
			BUILTIN::WAIT(Local_14.f_158);
		}
	}
}

int func_1(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6)
{
	Local_14.f_3 = __LIB_0__::func_81(&vParam0);
	Local_14.f_161 = __LIB_0__::func_27(vParam0.z, 2);
	Local_14.f_43 = __LIB_0__::func_12();
	Local_14.f_555 = 4;
	func_22();
	__LIB_3__::func_489(&Local_14, 1);
	Local_14.f_366 = __LIB_3__::func_390(Local_14.f_3, 2, 0);
	return 1;
}

void func_2(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_194[iVar0 /*32*/].f_1 = joaat("G_M_M_UNIBRONTEGOONS_01");
		uParam0->f_194[iVar0 /*32*/].f_3 = func_25(uParam0, iVar0);
		StringCopy(&(uParam0->f_194[iVar0 /*32*/].f_23), func_26(uParam0, iVar0), 64);
		iVar0++;
	}
}

void func_3(var uParam0)
{
	uParam0->f_323[0 /*12*/].f_7 = joaat("P_LANTERN09X");
	uParam0->f_323[1 /*12*/].f_7 = joaat("P_LANTERN09X");
}

void func_4()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	func_27(0);
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_421[3]))
	{
		PATHFIND::_0x5A4E1A41E3A02AD0(Local_14.f_421[3], 5, 0);
	}
	vVar1 = { __LIB_2__::func_116(5, 1) };
	if (!Local_14.f_46)
	{
		iVar0 = 0;
		while (iVar0 < Local_14.f_348)
		{
			if (__LIB_2__::func_1(Local_14.f_348[iVar0], 0, 1))
			{
				WEAPON::_HIDE_PED_WEAPONS(Local_14.f_348[iVar0], 2, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar4);
				TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vVar1, 35f, 1f, 128, 0);
				TASK::TASK_WANDER_IN_AREA(0, vVar1, 40f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
				__LIB_1__::func_474(Local_14.f_348[iVar0], &iVar4, BUILTIN::TO_FLOAT(iVar0), (IntToFloat(iVar0) + 0.5f), 1, 1);
			}
			iVar0++;
		}
		Local_14.f_50 = 1;
	}
	__LIB_3__::func_474(&(Local_14.f_580));
	__LIB_3__::func_480(&(Local_14.f_323));
	__LIB_3__::func_493(&Local_14, &(Local_14.f_348), &(Local_14.f_353), Local_14.f_366, Local_14.f_570, Local_14.f_571, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6()
{
	int iVar0;
	switch (Local_14.f_386)
	{
		case 0:
			__LIB_3__::func_284(&(Local_14.f_194));
			__LIB_3__::func_314(&(Local_14.f_323));
			__LIB_3__::func_308(&Local_14);
			func_38();
			func_39(&Local_14, 1);
			break;
		case 1:
			iVar0 = 1;
			if (!__LIB_3__::func_366(&(Local_14.f_194)))
			{
				iVar0 = 0;
			}
			if (!__LIB_3__::func_316(&(Local_14.f_323)))
			{
				iVar0 = 0;
			}
			if (!__LIB_3__::func_308(&Local_14))
			{
				iVar0 = 0;
			}
			if (!func_42())
			{
				iVar0 = 0;
			}
			return iVar0;
	}
	return false;
}

void func_7(var uParam0, int iParam1)
{
	uParam0->f_385 = iParam1;
}

void func_9()
{
	Local_14.f_392 = Local_14.f_51.f_4;
	func_48();
	func_49(Local_14.f_421[3]);
	func_50(&Local_14);
	func_51(&Local_14);
}

void func_14()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	sVar2 = func_61(0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(Local_14.f_348[iVar0], 0, 0))
		{
			switch (iVar0)
			{
				case 0:
				case 2:
					__LIB_3__::func_285(Local_14.f_348[iVar0], &Local_14, 0);
					break;
			}
			__LIB_1__::func_991(Local_14.f_348[iVar0], 0);
			iVar1 = func_64(&Local_14, iVar0);
			Local_14.f_575[iVar0] = __LIB_2__::func_488(iVar1, Local_14.f_194[iVar0 /*32*/].f_6, Local_14.f_194[iVar0 /*32*/].f_9, 0, -1f, 1);
			switch (iVar0)
			{
				case 0:
					TASK::TASK_PLAY_ANIM(Local_14.f_348[iVar0], sVar2, "base_peda", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
					break;
				case 1:
					TASK::TASK_PLAY_ANIM(Local_14.f_348[iVar0], sVar2, "base_pedc", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
					break;
				case 2:
					TASK::TASK_PLAY_ANIM(Local_14.f_348[iVar0], sVar2, "base_peda", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
					break;
				case 3:
					TASK::TASK_PLAY_ANIM(Local_14.f_348[iVar0], sVar2, "base_pedc", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
					break;
				default:
					TASK::_TASK_USE_SCENARIO_POINT(Local_14.f_348[iVar0], Local_14.f_575[iVar0], func_66(&Local_14, iVar0), -1, false, true, 0, false, -1f, false);
					break;
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_348[iVar0], 98, true);
			PED::SET_PED_COMBAT_RANGE(Local_14.f_348[iVar0], 0);
			__LIB_3__::func_176(Local_14.f_348[iVar0], 0);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_14.f_348[iVar0], false, true);
			switch (iVar0)
			{
				case 0:
				case 2:
					__LIB_2__::func_272(Local_14.f_348[iVar0], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				case 1:
					__LIB_2__::func_272(Local_14.f_348[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
				default:
					__LIB_2__::func_272(Local_14.f_348[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					break;
			}
			func_69(&Local_14, iVar0);
			__LIB_3__::func_484(&(Local_14.f_5), Local_14.f_348[iVar0], 1, 35f, 90f, 12f);
			__LIB_2__::func_22(&(Local_14.f_5), Local_14.f_348[iVar0]);
		}
		iVar0++;
	}
	func_72(&Local_14, 1);
}

bool func_15()
{
	if (!__LIB_3__::func_617(&Local_14, &(Local_14.f_348), Local_14.f_366, 1, 0, 0, 1, 0))
	{
		return true;
	}
	return false;
}

bool func_16()
{
	char* sVar0;
	int iVar1;
	Local_14.f_554 = func_74(&Local_14);
	func_75();
	func_76();
	switch (Local_14.f_388)
	{
		case 0:
			__LIB_1__::func_283(&(Local_14.f_393[0 /*3*/]), 0);
			func_77();
			__LIB_3__::func_485(&(Local_14.f_580));
			func_79(&Local_14, 1);
			break;
		case 1:
			func_80();
			func_81();
			if (!func_82(&Local_14, 1024))
			{
				if (__LIB_1__::func_285(&(Local_14.f_393[0 /*3*/]), 15f))
				{
					if (!__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 0))
					{
						iVar1 = 0;
						while (iVar1 < Local_14.f_555)
						{
							PED::SET_PED_CONFIG_FLAG(Local_14.f_348[iVar1], 494, true);
							iVar1++;
						}
					}
					func_84(&Local_14, 1024);
				}
			}
			if (Local_14.f_554 <= 0)
			{
				func_79(&Local_14, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_393(&(Local_14.f_580)))
			{
				func_79(&Local_14, 7);
			}
			else if (__LIB_3__::func_929(&(Local_14.f_580), &(Local_14.f_348), 0, 3, 2f, 0))
			{
				sVar0 = func_87(&Local_14);
				func_88(&Local_14, Global_35, Global_35, sVar0, -1073741824 /* Float: -2f */, 0, 291934926, 0, 1);
				func_79(&Local_14, 7);
			}
			break;
		case 7:
			if (!__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_DISTURBANCE"), 0, 0, 0, 0, 0, 0, 0);
			}
			__LIB_3__::func_474(&(Local_14.f_580));
			return true;
	}
	return false;
}

bool func_17()
{
	int iVar0;
	func_89();
	iVar0 = -1;
	iVar0 = func_90();
	if (iVar0 == -1)
	{
		if (__LIB_1__::func_313(&(Local_14.f_393[1 /*3*/]), 2f))
		{
			func_92(&Local_14, 1, 0, 1);
		}
	}
	else if (Local_14.f_387 < 1)
	{
		func_93(&Local_14, 1);
	}
	func_94(Global_1935630.f_40);
	switch (Local_14.f_387)
	{
		case 0:
			if (func_95())
			{
				func_96();
				__LIB_3__::func_487();
				func_72(&Local_14, 0);
				func_93(&Local_14, 1);
			}
			break;
		case 1:
			func_98();
			if (func_99(iVar0))
			{
				AUDIO::PREPARE_MUSIC_EVENT("REBGP_START");
				if (Local_14.f_557 <= 1)
				{
					func_84(&Local_14, 4);
				}
				Local_14.f_572 = { Global_36 };
				if (!Local_14.f_48)
				{
					__LIB_3__::func_426(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
				}
				if (func_101())
				{
					func_93(&Local_14, 2);
				}
			}
			break;
		case 2:
			if (!func_82(&Local_14, 512))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("REBGP_START"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("REBGP_START");
					func_84(&Local_14, 512);
				}
			}
			if (func_102())
			{
				func_93(&Local_14, 3);
			}
			break;
		case 3:
			if (!func_82(&Local_14, 512))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("REBGP_START"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("REBGP_START");
					func_84(&Local_14, 512);
				}
			}
			__LIB_1__::func_283(&(Local_14.f_393[2 /*3*/]), 0);
			if (__LIB_1__::func_285(&(Local_14.f_393[2 /*3*/]), 0.1f) || (func_82(&Local_14, 64) && __LIB_1__::func_285(&(Local_14.f_393[2 /*3*/]), (0.1f / 5f))))
			{
				func_93(&Local_14, 4);
			}
			break;
		case 4:
			func_103();
			func_93(&Local_14, 5);
			break;
		case 5:
			func_75();
			__LIB_3__::func_481();
			func_27(1);
			return true;
	}
	return false;
}

bool func_18()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (Local_14.f_48)
	{
		bVar0 = true;
		bVar1 = false;
	}
	else
	{
		bVar0 = false;
		bVar1 = true;
	}
	if (__LIB_2__::func_393(&(Local_14.f_580)))
	{
		bVar2 = true;
	}
	else
	{
		bVar2 = false;
	}
	if (__LIB_3__::func_431(&Local_14, &(Local_14.f_348), bVar0, bVar2, bVar1, 0, 1, 1, 0, 0, 0, 0, 0))
	{
		return true;
	}
	return false;
}

void func_22()
{
	__LIB_2__::func_104(&(Local_14.f_5), 0);
	__LIB_3__::func_486(&(Local_14.f_5), 1);
	__LIB_2__::func_105(&(Local_14.f_5), 1);
	__LIB_2__::func_50(&(Local_14.f_5), 1);
	__LIB_2__::func_51(&(Local_14.f_5), 1);
	__LIB_2__::func_111(&(Local_14.f_5), 0);
	__LIB_2__::func_110(&(Local_14.f_5), 0);
	__LIB_2__::func_52(&(Local_14.f_5), 1);
	__LIB_2__::func_250(&(Local_14.f_5), 1);
	__LIB_3__::func_482(&(Local_14.f_5), 6f);
	__LIB_2__::func_662(&(Local_14.f_5), 0);
	__LIB_3__::func_407(&(Local_14.f_5), 35f);
}

int func_25(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = joaat("META_OUTFIT_DEFAULT");
	switch (uParam0->f_366)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1052102410;
					break;
				case 1:
					iVar0 = -2074420657;
					break;
				case 2:
					iVar0 = 308949904;
					break;
				case 3:
					iVar0 = 676618084;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1657936016;
					break;
				case 1:
					iVar0 = -1858898606;
					break;
				case 2:
					iVar0 = -1696722136;
					break;
				case 3:
					iVar0 = -905842321;
					break;
			}
			break;
	}
	return iVar0;
}

char* func_26(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_122(uParam0, iParam1);
	return func_123(iVar0);
}

void func_27(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_124(iVar0, bParam0);
		__LIB_3__::func_491(&(Local_14.f_348[iVar0]), &(Local_14.f_428[iVar0 /*21*/]), &(Local_14.f_513), 1, 1);
		iVar0++;
	}
}

void func_38()
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		sVar1 = func_61(iVar0);
		STREAMING::REQUEST_ANIM_DICT(sVar1);
		iVar0++;
	}
}

void func_39(var uParam0, int iParam1)
{
	uParam0->f_386 = iParam1;
}

bool func_42()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		sVar1 = func_61(iVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return iVar2;
}

void func_48()
{
	switch (Local_14.f_392)
	{
		case 0:
			func_166(&Local_14);
			break;
		case 1:
			func_167(&Local_14);
			break;
	}
}

void func_49(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
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
	PED::_0x9851DE7AEC10B4E1(vVar3, fVar6, 1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 10208, 0, 0, -1, -1, 0);
	PATHFIND::_0xB03944057FD735BA(iParam0, 6, 0);
}

void func_50(var uParam0)
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 20 || iVar0 < 5)
	{
		uParam0->f_323[0 /*12*/].f_7 = joaat("P_LANTERN09X");
		uParam0->f_323[0 /*12*/].f_10 = 0;
		uParam0->f_323[1 /*12*/].f_10 = 0;
		__LIB_1__::func_581(&(uParam0->f_323[0 /*12*/].f_11), 73);
		__LIB_1__::func_581(&(uParam0->f_323[1 /*12*/].f_11), 73);
		switch (uParam0->f_392)
		{
			case 0:
				uParam0->f_323[0 /*12*/] = { 2311.849f, -1072.24f, 44.2232f };
				uParam0->f_323[1 /*12*/].f_7 = 0;
				break;
			case 1:
				uParam0->f_323[0 /*12*/] = { 2300.315f, -1386.712f, 44.36626f };
				uParam0->f_323[1 /*12*/] = { 2307.003f, -1370.081f, 44.53476f };
				uParam0->f_323[1 /*12*/].f_7 = joaat("P_LANTERN09X");
				break;
		}
	}
	else
	{
		uParam0->f_323[0 /*12*/].f_7 = 0;
		uParam0->f_323[1 /*12*/].f_7 = 0;
	}
}

void func_51(var uParam0)
{
	struct<4> Var0;
	int iVar4;
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		uParam0->f_194[iVar4 /*32*/].f_1 = joaat("G_M_M_UNIBRONTEGOONS_01");
		uParam0->f_194[iVar4 /*32*/].f_3 = func_25(uParam0, iVar4);
		StringCopy(&(uParam0->f_194[iVar4 /*32*/].f_23), func_26(uParam0, iVar4), 64);
		Var0 = { func_169(uParam0, iVar4) };
		uParam0->f_194[iVar4 /*32*/].f_6 = { Var0 };
		uParam0->f_194[iVar4 /*32*/].f_9 = Var0.f_3;
		iVar4++;
	}
}

char* func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_proc@robberies@bridge@odriscoll@bridge_block";
		default:
			break;
	}
	return "";
}

int func_64(var uParam0, int iParam1)
{
	switch (uParam0->f_392)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_GUARD");
				case 1:
					return joaat("WORLD_HUMAN_STERNGUY_IDLES");
				case 2:
					return joaat("WORLD_HUMAN_GUARD_LEAN_WALL");
				case 3:
					return joaat("WORLD_HUMAN_LEAN_WALL_DRINKING_RIGHT");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("WORLD_HUMAN_GUARD");
				case 1:
					return joaat("WORLD_HUMAN_STERNGUY_IDLES");
				case 2:
					return joaat("WORLD_HUMAN_GUARD_LEAN_WALL");
				case 3:
					return joaat("WORLD_HUMAN_LEAN_WALL_DRINKING_RIGHT");
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_66(var uParam0, int iParam1)
{
	switch (uParam0->f_392)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_GUARD_NO_RIFLE";
				case 1:
					return "WORLD_HUMAN_STERNGUY_IDLES_MALE_A";
				case 2:
					return "WORLD_HUMAN_GUARD_LEAN_WALL_MALE_E";
				case 3:
					return "WORLD_HUMAN_LEAN_WALL_RIGHT_DRINKING_MALE_A";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "WORLD_HUMAN_GUARD_NO_RIFLE";
				case 1:
					return "WORLD_HUMAN_STERNGUY_IDLES_MALE_A";
				case 2:
					return "WORLD_HUMAN_GUARD_LEAN_WALL_MALE_E";
				case 3:
					return "WORLD_HUMAN_LEAN_WALL_RIGHT_DRINKING_MALE_A";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_69(var uParam0, int iParam1)
{
	PED::SET_PED_COMBAT_RANGE(uParam0->f_348[iParam1], 0);
	PED::SET_COMBAT_FLOAT(uParam0->f_348[iParam1], 39, 10f);
	PED::SET_COMBAT_FLOAT(uParam0->f_348[iParam1], 32, 2f);
	PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_348[iParam1], 2);
}

void func_72(var uParam0, int iParam1)
{
	__LIB_2__::func_602(&(uParam0->f_513[0 /*17*/]), __LIB_2__::func_460(7), func_188(uParam0, 18), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(uParam0->f_513[1 /*17*/]), __LIB_2__::func_460(10), func_188(uParam0, 19), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

int func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_2__::func_1(uParam0->f_348[iVar0], 0, 1))
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
	if (!__LIB_1__::func_285(&(Local_14.f_393[7 /*3*/]), 5f))
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) < 8f)
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_197(iVar0))
				{
					PED::SET_PED_RESET_FLAG(Local_14.f_348[iVar0], 27, true);
				}
				iVar0++;
			}
		}
	}
}

void func_76()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_198(&Local_14, iVar0))
		{
			if (!func_199(&Local_14, iVar0, 1))
			{
				if (__LIB_3__::func_476(Local_14.f_348[iVar0], 1))
				{
					__LIB_2__::func_73(Local_14.f_348[iVar0], &(Local_14.f_353[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
					func_202(&Local_14, iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_77()
{
	int iVar0;
	if (func_82(&Local_14, 4))
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (__LIB_2__::func_1(Local_14.f_348[iVar0], 0, 0))
			{
				PED::_0xFC3DB99C8144CD81(Local_14.f_348[iVar0], Local_14.f_421[2], 0, 0, 0);
				PED::SET_PED_COMBAT_MOVEMENT(Local_14.f_348[iVar0], 2);
			}
			iVar0++;
		}
		iVar0 = 2;
		while (iVar0 <= 3)
		{
			if (__LIB_2__::func_1(Local_14.f_348[iVar0], 0, 0))
			{
				if (Local_14.f_392 == 0 && iVar0 == 3)
				{
				}
				else
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_14.f_348[iVar0], Local_14.f_194[iVar0 /*32*/].f_6, 2f, 0, 0, 0);
				}
				PED::SET_PED_COMBAT_MOVEMENT(Local_14.f_348[iVar0], 2);
			}
			iVar0++;
		}
	}
}

void func_79(var uParam0, int iParam1)
{
	uParam0->f_388 = iParam1;
}

void func_80()
{
	int iVar0;
	int iVar1;
	if (!func_82(&Local_14, 16))
	{
		if (__LIB_1__::func_285(&(Local_14.f_393[0 /*3*/]), 6f))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (__LIB_2__::func_1(Local_14.f_348[iVar0], 0, 0))
				{
					__LIB_1__::func_733(Local_14.f_348[iVar0]);
				}
				iVar0++;
			}
			func_84(&Local_14, 16);
		}
	}
	if (!func_82(&Local_14, 256))
	{
		if (__LIB_1__::func_285(&(Local_14.f_393[0 /*3*/]), 5f))
		{
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (__LIB_2__::func_1(Local_14.f_348[iVar1], 0, 0))
				{
					__LIB_1__::func_733(Local_14.f_348[iVar1]);
				}
				iVar1++;
			}
			func_84(&Local_14, 256);
		}
	}
}

void func_81()
{
	int iVar0;
	int iVar1;
	if (Local_14.f_586 && !func_204(&Local_14, 1))
	{
		if (__LIB_1__::func_285(&(Local_14.f_393[0 /*3*/]), 1f))
		{
			iVar1 = 0;
			while (iVar1 < Local_14.f_555)
			{
				if (__LIB_2__::func_227(0f, 1, Local_14.f_348[iVar1], 1))
				{
					if (func_88(&Local_14, Local_14.f_348[iVar1], Global_35, func_206(&Local_14, iVar1), 70f, 1, 1744022339, 0, 1))
					{
						func_207(&Local_14, 1);
					}
					else
					{
						iVar1++;
					}
					return;
					if (!func_204(&Local_14, 2))
					{
						if (__LIB_2__::func_227(0, 1, 0, 0))
						{
							iVar0 = __LIB_17__::func_861(&(Local_14.f_348), 1, 0, -1, 0, 60f);
							if (__LIB_2__::func_1(iVar0, 0, 0) && __LIB_2__::func_227(0f, 1, iVar0, 1))
							{
								if (func_88(&Local_14, iVar0, Global_35, func_188(&Local_14, 15), 60f, 1, 1744022339, 0, 1))
								{
									func_207(&Local_14, 2);
								}
							}
						}
					}
					else if (!func_204(&Local_14, 4))
					{
						if (__LIB_2__::func_227(2f, 1, 0, 0))
						{
							iVar0 = __LIB_17__::func_861(&(Local_14.f_348), 1, 0, -1, 0, 60f);
							if (__LIB_2__::func_1(iVar0, 0, 0) && __LIB_2__::func_227(0f, 1, iVar0, 1))
							{
								if (func_88(&Local_14, iVar0, Global_35, func_188(&Local_14, 16), 60f, 1, 1744022339, 0, 1))
								{
									func_207(&Local_14, 4);
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_82(var uParam0, int iParam1)
{
	return (uParam0->f_359 && iParam1) != 0;
}

void func_84(var uParam0, int iParam1)
{
	uParam0->f_359 = (uParam0->f_359 || iParam1);
}

char* func_87(var uParam0)
{
	switch (uParam0->f_366)
	{
		case 0:
			return "RE_BGP_STD_V1_PLY_FINAL";
		case 1:
			return "RE_BGP_STD_V2_PLY_FINAL";
		default:
			break;
	}
	return "RE_BGP_STD_V1_PLY_FINAL";
}

bool func_88(var uParam0, int iParam1, int iParam2, char* sParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	if (__LIB_2__::func_303(iParam1, iParam2, sParam3, "", fParam4, iParam7, 0, 1, 1, fParam4 >= 0f, bParam5, iParam6, 1, 0, 0))
	{
		if (bParam8)
		{
			uParam0->f_568 = iParam1;
			if (uParam0->f_387 >= 1)
			{
				func_92(uParam0, 0, 0, 0);
			}
			__LIB_1__::func_148(&(uParam0->f_393[1 /*3*/]));
		}
		return true;
	}
	return false;
}

void func_89()
{
	int iVar0;
	switch (Local_14.f_567)
	{
		case 0:
			Local_14.f_358 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_14.f_51, Global_36, true);
			break;
		case 1:
			Local_14.f_558 = (Local_14.f_98[0] < 60f || Local_14.f_98[2] < 60f);
			break;
		case 2:
			if (Local_14.f_558)
			{
				Local_14.f_560 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_14.f_421[1], Global_36);
			}
			else
			{
				Local_14.f_560 = 0;
			}
			break;
		case 3:
			if (Local_14.f_558)
			{
				Local_14.f_559 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_14.f_421[0], Global_36);
			}
			else
			{
				Local_14.f_559 = 0;
			}
			break;
	}
	Local_14.f_567++;
	Local_14.f_567 = (Local_14.f_567 % 4);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_14.f_561[iVar0] = __LIB_2__::func_1(Local_14.f_348[iVar0], 0, 0);
		if (Local_14.f_561[iVar0])
		{
			PED::SET_PED_RESET_FLAG(Local_14.f_348[iVar0], 42, true);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_14.f_348[iVar0], false);
		}
		iVar0++;
	}
	if (!func_82(&Local_14, 1))
	{
		if (func_215())
		{
			func_216();
			func_93(&Local_14, 5);
		}
	}
}

int func_90()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = 1;
	iVar3 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_348[iVar1]))
		{
		}
		else
		{
			iVar0 = func_218(&(Local_14.f_348[iVar1]), &(Local_14.f_428[iVar1 /*21*/]), 50f, &(Local_14.f_513), &iVar2, 2f, 2, 0, "", 524288 | __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (__LIB_2__::func_341(&(Local_14.f_428[iVar1 /*21*/])))
			{
				if (!Local_14.f_585)
				{
					if (Local_14.f_549 == -1)
					{
						Local_14.f_549 = iVar1;
					}
					if (Local_14.f_428[iVar1 /*21*/].f_1 == 0)
					{
						__LIB_2__::func_592(&(Local_14.f_513), 1, 1);
					}
					else if (Local_14.f_428[iVar1 /*21*/].f_1 == 1)
					{
						__LIB_2__::func_592(&(Local_14.f_513), 1, 1);
					}
					__LIB_2__::func_504(Local_14.f_568, 250);
					if (Local_14.f_428[iVar1 /*21*/].f_1 != -1)
					{
						func_92(&Local_14, 0, 0, 1);
					}
					Local_14.f_585 = 1;
				}
			}
			if (iVar0 != -1)
			{
				Local_14.f_585 = 0;
				iVar3 = iVar0;
				if (iVar3 != -1)
				{
					Local_14.f_548 = iVar3;
				}
			}
		}
		iVar1++;
	}
	return iVar3;
}

void func_92(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam1)
	{
		if ((!__LIB_1__::func_489(&(uParam0->f_513[0 /*17*/]), 4) && !__LIB_1__::func_489(&(uParam0->f_513[0 /*17*/]), 0)) && !__LIB_1__::func_489(&(uParam0->f_513[0 /*17*/]), 13))
		{
			__LIB_2__::func_411(&(uParam0->f_513[0 /*17*/]), 1, 0);
		}
		if (bParam3)
		{
			if ((!__LIB_1__::func_489(&(uParam0->f_513[1 /*17*/]), 4) && !__LIB_1__::func_489(&(uParam0->f_513[1 /*17*/]), 0)) && !__LIB_1__::func_489(&(uParam0->f_513[1 /*17*/]), 13))
			{
				__LIB_2__::func_411(&(uParam0->f_513[1 /*17*/]), 1, 0);
			}
		}
	}
	else
	{
		if (((!__LIB_1__::func_489(&(uParam0->f_513[0 /*17*/]), 4) && __LIB_1__::func_489(&(uParam0->f_513[0 /*17*/]), 0)) && __LIB_1__::func_489(&(uParam0->f_513[0 /*17*/]), 13)) || bParam2)
		{
			__LIB_2__::func_411(&(uParam0->f_513[0 /*17*/]), 0, 0);
		}
		if (bParam3)
		{
			if (((!__LIB_1__::func_489(&(uParam0->f_513[1 /*17*/]), 4) && __LIB_1__::func_489(&(uParam0->f_513[1 /*17*/]), 0)) && __LIB_1__::func_489(&(uParam0->f_513[1 /*17*/]), 13)) || bParam2)
			{
				__LIB_2__::func_411(&(uParam0->f_513[1 /*17*/]), 0, 0);
			}
		}
	}
}

void func_93(var uParam0, int iParam1)
{
	uParam0->f_387 = iParam1;
}

void func_94(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_225())
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
	}
	else if (func_226())
	{
		if (func_82(&Local_14, 128))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 2.001f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 2f);
		}
	}
}

bool func_95()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_1__::func_472(Local_14.f_348[iVar0], 90f, 50f, Local_14.f_98[iVar0], -1082130432 /* Float: -1f */))
		{
			return true;
		}
		iVar0++;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_14.f_51, false) < 70f)
	{
		return true;
	}
	return false;
}

void func_96()
{
	if (__LIB_0__::func_94(Local_14.f_348[0], Global_36, 1) < __LIB_0__::func_94(Local_14.f_348[2], Global_36, 1))
	{
		func_84(&Local_14, 8);
	}
	else
	{
		func_229(&Local_14, 8);
	}
}

void func_98()
{
	int iVar0;
	int iVar1;
	if (func_231())
	{
		return;
	}
	if (func_82(&Local_14, 8))
	{
		iVar0 = 0;
		iVar1 = 1;
	}
	else
	{
		iVar0 = 2;
		iVar1 = 3;
	}
	switch (Local_14.f_389)
	{
		case 0:
			if (Local_14.f_558)
			{
				if (func_88(&Local_14, Local_14.f_348[iVar0], Local_14.f_348[iVar1], func_188(&Local_14, 0), 80f, 1, 291934926, 0, 1))
				{
					if (!Local_14.f_48)
					{
						__LIB_3__::func_426(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
					}
					__LIB_2__::func_315(1891783641, Local_14.f_348[iVar1], 1);
					func_233();
					func_234(&Local_14, 1);
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0f, 1, Local_14.f_568, 1))
			{
				if (func_235())
				{
					func_88(&Local_14, Local_14.f_348[iVar1], Local_14.f_348[iVar0], func_188(&Local_14, 1), 80f, 1, 291934926, 0, 1);
					func_234(&Local_14, 2);
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_227(0f, 1, Local_14.f_568, 1))
			{
				if (func_235())
				{
					func_88(&Local_14, Local_14.f_348[iVar0], Local_14.f_348[iVar1], func_188(&Local_14, 2), 80f, 1, 291934926, 0, 1);
					func_234(&Local_14, 3);
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_227(0f, 1, Local_14.f_568, 1))
			{
				if (func_235())
				{
					func_88(&Local_14, Local_14.f_348[iVar1], Local_14.f_348[iVar0], func_188(&Local_14, 3), 80f, 1, 291934926, 0, 1);
					func_234(&Local_14, 4);
				}
			}
			break;
		case 4:
			if (__LIB_2__::func_227(0f, 1, Local_14.f_568, 1))
			{
				if (func_235())
				{
					func_88(&Local_14, Local_14.f_348[iVar0], Local_14.f_348[iVar1], func_188(&Local_14, 4), 80f, 1, 291934926, 0, 1);
					func_234(&Local_14, 5);
				}
			}
			break;
		case 5:
			if (__LIB_2__::func_227(0f, 1, Local_14.f_568, 1))
			{
				if (func_235())
				{
					func_88(&Local_14, Local_14.f_348[iVar1], Local_14.f_348[iVar0], func_188(&Local_14, 5), 80f, 1, 291934926, 0, 1);
					func_234(&Local_14, 6);
				}
			}
			break;
		case 6:
			if (__LIB_2__::func_227(0f, 1, Local_14.f_568, 1))
			{
				if (func_235())
				{
					func_88(&Local_14, Local_14.f_348[iVar0], Local_14.f_348[iVar1], func_188(&Local_14, 6), 80f, 1, 291934926, 0, 1);
					func_234(&Local_14, 7);
				}
			}
			break;
		case 7:
			break;
	}
}

bool func_99(int iParam0)
{
	int iVar0;
	if (iParam0 == 0)
	{
		iVar0 = func_236(0, 0);
		Local_14.f_557 = Local_14.f_556;
		return true;
	}
	else if (iParam0 == 1)
	{
		iVar0 = func_236(0, 0);
		Local_14.f_557 = Local_14.f_556;
		func_84(&Local_14, 2);
		return false;
	}
	if (func_231())
	{
		return false;
	}
	if (Local_14.f_560 && func_237())
	{
		iVar0 = func_236(0, 1);
		if (iVar0 >= 0)
		{
			Local_14.f_556 = iVar0;
			Local_14.f_557 = Local_14.f_556;
			return true;
		}
	}
	else if (Local_14.f_559)
	{
		if (func_238())
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_348[Local_14.f_556], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_14.f_348[Local_14.f_556], 17))
			{
				Local_14.f_557 = Local_14.f_556;
				return true;
			}
		}
	}
	return false;
}

bool func_101()
{
	return true;
	if (Local_14.f_549 != -1)
	{
		return true;
	}
	return false;
}

bool func_102()
{
	struct<4> Var0;
	int iVar4;
	char* sVar5;
	vector3 vVar6;
	char* sVar9;
	if (Local_14.f_557 < 0)
	{
		return false;
	}
	if (Local_14.f_390 > 3)
	{
		if (!func_82(&Local_14, 128))
		{
			if (__LIB_2__::func_157(Local_14.f_421[5], Global_36))
			{
				func_84(&Local_14, 128);
			}
		}
	}
	switch (Local_14.f_390)
	{
		case 0:
			if (func_82(&Local_14, 4))
			{
				Local_14.f_550 = 0;
				Local_14.f_551 = 1;
				Local_14.f_552 = 2;
				Local_14.f_553 = 3;
			}
			else
			{
				Local_14.f_550 = 2;
				Local_14.f_551 = 3;
				Local_14.f_552 = 0;
				Local_14.f_553 = 1;
			}
			func_246(&Local_14, 1);
			break;
		case 1:
			PED::_0x06D26A96CA1BCA75(Global_1935630.f_40, 3, 0.5f, 0);
			if (Local_14.f_568 != Local_14.f_348[Local_14.f_550])
			{
				__LIB_2__::func_504(Local_14.f_568, 250);
			}
			func_88(&Local_14, Local_14.f_348[Local_14.f_550], Global_35, func_188(&Local_14, 11), 80f, 1, 1744022339, 0, 1);
			Var0 = { func_247(&Local_14, Local_14.f_550) };
			sVar5 = func_61(0);
			TASK::TASK_PLAY_ANIM(Local_14.f_348[Local_14.f_550], sVar5, "INITIAL_ENCOUNTER_UPPER_PEDA", 8f, -8f, -1, 67108880, 0f, false, 65536, false, 0, false);
			func_248(&Local_14, Local_14.f_551, Global_35, 3, 1, 15f, 1);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var0, 1.5f, 20000, 0.25f, 2048, Var0.f_3);
			__LIB_2__::func_45(0, Global_35, -1);
			__LIB_1__::func_474(Local_14.f_348[Local_14.f_550], &iVar4, 0, 0, 1, 1);
			Var0 = { func_247(&Local_14, Local_14.f_551) };
			func_248(&Local_14, Local_14.f_551, Global_35, 3, 1, 15f, 1);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var0, 1f, 20000, 0.25f, 2048, Var0.f_3);
			__LIB_2__::func_45(0, Global_35, -1);
			__LIB_1__::func_474(Local_14.f_348[Local_14.f_551], &iVar4, 0.75f, 0, 1, 1);
			__LIB_1__::func_283(&(Local_14.f_393[4 /*3*/]), 0);
			func_246(&Local_14, 2);
			break;
		case 2:
			if (__LIB_1__::func_285(&(Local_14.f_393[4 /*3*/]), 1f))
			{
				func_248(&Local_14, Local_14.f_552, Global_35, 2, 1, 3f, 1);
				func_248(&Local_14, Local_14.f_553, Global_35, 2, 1, 3f, 1);
				func_84(&Local_14, 32);
				func_246(&Local_14, 3);
			}
			break;
		case 3:
			if (func_82(&Local_14, 32))
			{
				if (__LIB_1__::func_285(&(Local_14.f_393[4 /*3*/]), 1.75f))
				{
					vVar6 = { func_250(&Local_14, Local_14.f_552) };
					func_248(&Local_14, Local_14.f_552, Global_35, 2, 1, 10f, 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar6, 1f, -1, 0.25f, 0, 40000f);
					__LIB_2__::func_45(0, Global_35, -1);
					__LIB_1__::func_474(Local_14.f_348[Local_14.f_552], &iVar4, 0f, 0, 1, 1);
					vVar6 = { func_250(&Local_14, Local_14.f_553) };
					func_248(&Local_14, Local_14.f_553, Global_35, 2, 1, 10f, 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar6, 1f, -1, 0.25f, 0, 40000f);
					__LIB_2__::func_45(0, Global_35, -1);
					__LIB_1__::func_474(Local_14.f_348[Local_14.f_553], &iVar4, 0.75f, 0, 1, 1);
					func_229(&Local_14, 32);
				}
			}
			if (__LIB_1__::func_285(&(Local_14.f_393[4 /*3*/]), 3f) && !func_204(&Local_14, 8))
			{
				if (!func_231())
				{
					sVar9 = func_251(&Local_14);
					func_88(&Local_14, Global_35, Global_35, sVar9, -1073741824 /* Float: -2f */, 0, 291934926, 0, 1);
				}
				func_207(&Local_14, 8);
			}
			else if (__LIB_1__::func_285(&(Local_14.f_393[4 /*3*/]), 4f))
			{
				func_246(&Local_14, 4);
			}
			else if (__LIB_2__::func_157(Local_14.f_421[5], Global_36))
			{
				func_229(&Local_14, 32);
				func_84(&Local_14, 64);
				func_246(&Local_14, 4);
			}
			break;
		case 4:
			TASK::TASK_AIM_GUN_AT_ENTITY(Local_14.f_348[Local_14.f_550], Global_35, -1, false, 1);
			func_88(&Local_14, Local_14.f_348[Local_14.f_551], Global_35, func_188(&Local_14, 12), 80f, 1, 1744022339, 0, 1);
			func_84(&Local_14, 64);
			func_246(&Local_14, 5);
			break;
		case 5:
			func_246(&Local_14, 6);
			break;
		case 6:
			return true;
	}
	return false;
}

void func_103()
{
	bool bVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	bool bVar4;
	func_75();
	if (func_82(&Local_14, 64))
	{
		bVar0 = true;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		bVar4 = false;
		if (func_198(&Local_14, iVar1))
		{
			if (!bVar0)
			{
				if (!func_204(&Local_14, 1))
				{
					if (Local_14.f_348[iVar1] != Local_14.f_568)
					{
						__LIB_2__::func_504(Local_14.f_348[iVar1], 250);
					}
					func_88(&Local_14, Local_14.f_348[iVar1], Global_35, func_188(&Local_14, 14), -1073741824 /* Float: -2f */, 1, 1744022339, 0, 1);
					func_207(&Local_14, 1);
				}
			}
			if (func_82(&Local_14, 4))
			{
				switch (iVar1)
				{
					case 0:
						fVar2 = 0f;
						break;
					case 1:
						fVar2 = 0.25f;
						break;
					case 2:
						bVar4 = true;
						fVar2 = 0.25f;
						break;
					case 3:
						bVar4 = true;
						fVar2 = 0.5f;
						break;
				}
			}
			else
			{
				switch (iVar1)
				{
					case 0:
						bVar4 = true;
						fVar2 = 0.25f;
						break;
					case 1:
						bVar4 = true;
						fVar2 = 0.5f;
						break;
					case 2:
						fVar2 = 0f;
						break;
					case 3:
						fVar2 = 0.25f;
						break;
				}
			}
			if (func_82(&Local_14, 64))
			{
				bVar4 = false;
			}
			__LIB_2__::func_357(Local_14.f_348[iVar1], Global_36, 3, 0, 2);
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			if (bVar4)
			{
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_14.f_348[iVar1], &iVar3, fVar2, 0, 1, 1);
			__LIB_1__::func_283(&(Local_14.f_393[7 /*3*/]), 0);
		}
		iVar1++;
	}
}

int func_122(var uParam0, int iParam1)
{
	switch (uParam0->f_366)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 0;
				case 3:
					return 1;
				default:
					break;
			}
			Jump @137; //curOff = 79
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 0;
				case 2:
					return 2;
				case 3:
					return 0;
				default:
					break;
			}
			return 1;
			return -1;
		}
char* func_123(int iParam0)
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

void func_124(int iParam0, bool bParam1)
{
	var uVar0;
	if (__LIB_2__::func_1(Local_14.f_348[iParam0], 0, 0))
	{
		PED::_0x58F7DB5BD8FA2288(Local_14.f_348[iParam0]);
		PED::_0x58F7DB5BD8FA2288(Local_14.f_348[iParam0]);
		if (bParam1)
		{
			PLAYER::_0xA3DB37EDF9A74635(uVar0, Local_14.f_348[iParam0], 3, 1, 1);
			PLAYER::_0xA3DB37EDF9A74635(uVar0, Local_14.f_348[iParam0], 4, 1, 1);
			PLAYER::_0xA3DB37EDF9A74635(uVar0, Local_14.f_348[iParam0], 7, 1, 1);
		}
	}
}

void func_166(var uParam0)
{
	uParam0->f_421[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTrigger");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[0], 2312.807f, -1078.171f, 47.56464f, 0f, 0f, -39.49999f, 58.443f, 10f, 10f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[0], 2342.389f, -1093.449f, 47.56464f, 0f, 0f, -37.73335f, 56.83058f, 24.69781f, 10f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[0], 2332.459f, -1103.127f, 47.56464f, 0f, 0f, -73.49999f, 45.89593f, 30f, 10f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[0], 2361.539f, -1133.814f, 47.56464f, 0f, 0f, -17.49999f, 21.44458f, 16.36973f, 10f);
	VOLUME::_0xBCE668AAF83608BE(uParam0->f_421[0], 2355.729f, -1129.588f, 48.54838f, 0f, 0f, 0f, 11.76178f, 10.44054f, 4f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[0], 2349.566f, -1114.564f, 47.56464f, 0f, 0f, -0.49999f, 49.34935f, 30f, 10f);
	uParam0->f_421[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerVisible");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[1], 2338.431f, -1106.453f, 47.56464f, 0f, 0f, -51.68449f, 52.74072f, 14.27081f, 10f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[1], 2305.148f, -1071.858f, 47.56464f, 0f, 0f, -39.49999f, 69.74976f, 10f, 10f);
	VOLUME::_0xBCE668AAF83608BE(uParam0->f_421[1], 2351.354f, -1119.938f, 48.54838f, 0f, 0f, -48.37985f, 10.732f, 14f, 4f);
	uParam0->f_421[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDefFront");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[2], 2322.07f, -1085.831f, 47.56464f, 0f, 0f, -39.73335f, 17.50985f, 14.10912f, 10f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[2], 2313.1f, -1078.376f, 47.56464f, 0f, 0f, -39.73335f, 17.50985f, 7.566683f, 10f);
	uParam0->f_421[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2329.23f, -1097.172f, 47.15971f, 0f, 0f, 41f, 20f, 50f, 12f, "volAvoidance");
	uParam0->f_421[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSlow");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[4], 2334.999f, -1103.343f, 47.48337f, 0f, 0f, -51.00003f, 58.59045f, 15.31601f, 10f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[4], 2283.636f, -1054.591f, 46.87788f, 0f, 0f, -40.00001f, 105.4065f, 10.28277f, 10f);
	VOLUME::_0xBCE668AAF83608BE(uParam0->f_421[4], 2357.123f, -1126.431f, 48.54838f, 0f, 0f, 0f, 14f, 14f, 4f);
	uParam0->f_421[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2329.205f, -1096.953f, 47.15971f, 0f, 0f, 51f, 39.59178f, 50f, 12f, "volBlowBy");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[5], 2316.861f, -1086.958f, 47.15971f, 0f, 0f, 51f, 39.59178f, 17.2684f, 12f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[5], 2328.876f, -1097.38f, 47.15971f, 0f, 0f, 44f, 39.59178f, 17.2684f, 12f);
}

void func_167(var uParam0)
{
	uParam0->f_421[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTrigger");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[0], 2316.875f, -1378.005f, 47.56464f, 0f, 0f, -19.68449f, 80.95252f, 35.07186f, 10f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[0], 2258.094f, -1364.083f, 48.58889f, 0f, 0f, -20f, 69.74976f, 10f, 10f);
	VOLUME::_0xBCE668AAF83608BE(uParam0->f_421[0], 2291.919f, -1374.558f, 45.38844f, 0f, 0f, -19.37987f, 18.28374f, 22f, 4f);
	uParam0->f_421[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volTriggerVisible");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[1], 2307.143f, -1381.603f, 47.56464f, 0f, 0f, -19.68449f, 80.453f, 22.46294f, 10f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[1], 2238.582f, -1356.982f, 48.58889f, 0f, 0f, -20f, 69.74976f, 10f, 10f);
	VOLUME::_0xBCE668AAF83608BE(uParam0->f_421[1], 2289.651f, -1380.33f, 45.38844f, 0f, 0f, -48.37987f, 17f, 17f, 4f);
	uParam0->f_421[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volDefFront");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[2], 2284.776f, -1373.868f, 47.56464f, 0f, 0f, -19.53728f, 17.50985f, 14.10912f, 10f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[2], 2278.266f, -1371.44f, 47.56464f, 0f, 0f, -20.53728f, 17.50985f, 8.010964f, 10f);
	uParam0->f_421[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2281.151f, -1373.353f, 49.48773f, 0f, 0f, 71f, 20f, 60f, 12f, "volAvoidance");
	uParam0->f_421[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSlow");
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[4], 2329.867f, -1389.884f, 47.48337f, 0f, 0f, -17.12348f, 58.59045f, 21.45372f, 10f);
	VOLUME::_0x39816F6F94F385AD(uParam0->f_421[4], 2255.153f, -1363.08f, 48.68617f, 0f, 0f, -20.43752f, 105.4065f, 10.28277f, 10f);
	VOLUME::_0xBCE668AAF83608BE(uParam0->f_421[4], 2284.014f, -1389.639f, 48.04036f, 0f, 0f, 21.5625f, 18f, 18f, 4f);
	uParam0->f_421[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2287.854f, -1373.682f, 47.15971f, 0f, 0f, 69.24442f, 39.59178f, 28.07003f, 12f, "volBlowBy");
}

struct<4> func_169(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_392)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2315.827f, -1075.963f, 42.71067f };
					Var0.f_3 = 138.86f;
					break;
				case 1:
					Var0 = { 2311.086f, -1081.724f, 42.70592f };
					Var0.f_3 = -25.07f;
					break;
				case 2:
					Var0 = { 2330.4f, -1107.79f, 44.75495f };
					Var0.f_3 = -56.63f;
					break;
				case 3:
					Var0 = { 2339.03f, -1099.052f, 44.74467f };
					Var0.f_3 = 141.01f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2258.196f, -1360.045f, 44.27966f };
					Var0.f_3 = 154.4f;
					break;
				case 1:
					Var0 = { 2255.569f, -1367.273f, 44.27966f };
					Var0.f_3 = -17.33f;
					break;
				case 2:
					Var0 = { 2299.844f, -1385.016f, 44.44345f };
					Var0.f_3 = -7.5f;
					break;
				case 3:
					Var0 = { 2305.349f, -1369.646f, 44.51112f };
					Var0.f_3 = 142.61f;
					break;
			}
			break;
	}
	return Var0;
}

char* func_188(var uParam0, int iParam1)
{
	switch (uParam0->f_366)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "RE_BGP_STD_V1_BANTER_A";
				case 1:
					return "RE_BGP_STD_V1_BANTER_B";
				case 2:
					return "RE_BGP_STD_V1_BANTER_C";
				case 3:
					return "RE_BGP_STD_V1_BANTER2_A";
				case 4:
					return "RE_BGP_STD_V1_BANTER2_B";
				case 5:
					return "RE_BGP_STD_V1_BANTER2_C";
				case 6:
					return "RE_BGP_STD_V1_BANTER3_C";
				case 7:
					return "RE_BGP_STD_V1_WHAT_WAS_THAT_A";
				case 8:
					return "RE_BGP_STD_V1_WHAT_WAS_THAT_B";
				case 9:
					return "RE_BGP_STD_V1_MUST_BE_NOTHING_A";
				case 10:
					return "RE_BGP_STD_V1_MUST_BE_NOTHING_B";
				case 11:
					return "RE_BGP_STD_V1_STOP_THERE";
				case 12:
					return "RE_BGP_STD_V1_RECOGNIZE";
				case 13:
					return "RE_BGP_STD_V1_HERE_HE_IS";
				case 14:
					return "RE_BGP_STD_V1_ATTACK";
				case 15:
					return "RE_BGP_STD_V1_TAUNT1";
				case 16:
					return "RE_BGP_STD_V1_TAUNT2";
				case 17:
					return "RE_BGP_STD_V1_FLEE";
				case 18:
					return "RE_BGP_STD_V1_ILO_GREET";
				case 19:
					return "RE_BGP_STD_V1_ILO_ANTAGONIZE";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "RE_BGP_STD_V2_BANTER_A";
				case 1:
					return "RE_BGP_STD_V2_BANTER_B";
				case 2:
					return "RE_BGP_STD_V2_BANTER_C";
				case 3:
					return "RE_BGP_STD_V2_BANTER2_A";
				case 4:
					return "RE_BGP_STD_V2_BANTER2_B";
				case 5:
					return "RE_BGP_STD_V2_BANTER2_C";
				case 6:
					return "RE_BGP_STD_V2_BANTER3_C";
				case 7:
					return "RE_BGP_STD_V2_WHAT_WAS_THAT_A";
				case 8:
					return "RE_BGP_STD_V2_WHAT_WAS_THAT_B";
				case 9:
					return "RE_BGP_STD_V2_MUST_BE_NOTHING_A";
				case 10:
					return "RE_BGP_STD_V2_MUST_BE_NOTHING_B";
				case 11:
					return "RE_BGP_STD_V2_STOP_THERE";
				case 12:
					return "RE_BGP_STD_V2_RECOGNIZE";
				case 13:
					return "RE_BGP_STD_V2_HERE_HE_IS";
				case 14:
					return "RE_BGP_STD_V2_ATTACK";
				case 15:
					return "RE_BGP_STD_V2_TAUNT1";
				case 16:
					return "RE_BGP_STD_V2_TAUNT2";
				case 17:
					return "RE_BGP_STD_V2_FLEE";
				case 18:
					return "RE_BGP_STD_V2_ILO_GREET";
				case 19:
					return "RE_BGP_STD_V2_ILO_ANTAGONIZE";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_197(int iParam0)
{
	float fVar0;
	if (!__LIB_2__::func_1(Local_14.f_348[iParam0], 0, 0))
	{
		return false;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_14.f_348[iParam0]))
	{
		return false;
	}
	switch (Local_14.f_366)
	{
		case 0:
			if (func_82(&Local_14, 4))
			{
				switch (iParam0)
				{
					case 0:
						fVar0 = 3f;
						break;
					case 1:
						fVar0 = 3.5f;
						break;
					case 2:
						fVar0 = 3f;
						break;
					case 3:
						fVar0 = 3.9f;
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						fVar0 = 3f;
						break;
					case 1:
						fVar0 = 3.9f;
						break;
					case 2:
						fVar0 = 3f;
						break;
					case 3:
						fVar0 = 3.5f;
						break;
				}
			}
			break;
		case 1:
			if (func_82(&Local_14, 4))
			{
				switch (iParam0)
				{
					case 0:
						fVar0 = 0.7f;
						break;
					case 1:
						fVar0 = 0.8f;
						break;
					case 2:
						fVar0 = 0.7f;
						break;
					case 3:
						fVar0 = 1f;
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						fVar0 = 0.7f;
						break;
					case 1:
						fVar0 = 1f;
						break;
					case 2:
						fVar0 = 0.7f;
						break;
					case 3:
						fVar0 = 0.8f;
						break;
				}
			}
			break;
	}
	if (__LIB_1__::func_285(&(Local_14.f_393[7 /*3*/]), fVar0))
	{
		return false;
	}
	return true;
}

bool func_198(var uParam0, int iParam1)
{
	return uParam0->f_561[iParam1];
}

bool func_199(var uParam0, int iParam1, int iParam2)
{
	return (uParam0->f_361[iParam1] && iParam2) != 0;
}

void func_202(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_361[iParam1] = (uParam0->f_361[iParam1] || iParam2);
}

bool func_204(var uParam0, int iParam1)
{
	return (uParam0->f_360 && iParam1) != 0;
}

char* func_206(var uParam0, int iParam1)
{
	return func_188(uParam0, 14);
}

void func_207(var uParam0, int iParam1)
{
	uParam0->f_360 = (uParam0->f_360 || iParam1);
}

bool func_215()
{
	if (__LIB_17__::func_831(&Local_14, &(Local_14.f_194), &(Local_14.f_348), 0, &(Local_14.f_5.f_16), 0, 3, 1))
	{
		if (Local_14.f_5.f_16 == 8192)
		{
			return false;
		}
		return true;
	}
	if (func_82(&Local_14, 2))
	{
		return true;
	}
	return false;
}

void func_216()
{
	int iVar0;
	__LIB_2__::func_504(Local_14.f_348[0], 0);
	func_84(&Local_14, 1);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_198(&Local_14, iVar0))
		{
			if (iVar0 != 0)
			{
				__LIB_2__::func_504(Local_14.f_348[iVar0], 0);
			}
			if (!func_204(&Local_14, 1))
			{
				Local_14.f_586 = 1;
			}
			TASK::CLEAR_PED_SECONDARY_TASK(Local_14.f_348[iVar0]);
			__LIB_2__::func_73(Local_14.f_348[iVar0], &(Local_14.f_353[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			__LIB_2__::func_357(Local_14.f_348[iVar0], Global_36, 3, 1, 1);
			TASK::TASK_COMBAT_PED(Local_14.f_348[iVar0], Global_35, 0, 0);
		}
		iVar0++;
	}
	__LIB_2__::func_462(&(Local_14.f_393[7 /*3*/]), 10f, 0);
}

int func_218(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_374(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

bool func_225()
{
	return func_82(&Local_14, 32);
}

bool func_226()
{
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_14.f_421[4], Global_36))
	{
		return true;
	}
	return false;
}

void func_229(var uParam0, int iParam1)
{
	uParam0->f_359 = (uParam0->f_359 - (uParam0->f_359 && iParam1));
}

bool func_231()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_2__::func_341(&(Local_14.f_428[iVar0 /*21*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_233()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_198(&Local_14, iVar0))
		{
			__LIB_2__::func_73(Local_14.f_348[iVar0], &(Local_14.f_353[iVar0]), joaat("BLIP_STYLE_ENEMY"), -662251075, 0, 0);
		}
		iVar0++;
	}
}

void func_234(var uParam0, int iParam1)
{
	uParam0->f_389 = iParam1;
}

bool func_235()
{
	__LIB_1__::func_283(&(Local_14.f_393[8 /*3*/]), 0);
	if (__LIB_1__::func_285(&(Local_14.f_393[8 /*3*/]), 1.5f))
	{
		__LIB_0__::func_37(&(Local_14.f_393[8 /*3*/]));
		return true;
	}
	return false;
}

int func_236(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar1 = -1;
	fVar2 = 999999.9f;
	fVar3 = fVar2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_198(&Local_14, iVar0) && (!bParam0 || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_14.f_348[iVar0], Global_35, 17)))
		{
			if (bParam1 || __LIB_2__::func_227(0f, 1, Local_14.f_348[iVar0], 1))
			{
				fVar2 = Local_14.f_98[iVar0];
				if (fVar2 < fVar3)
				{
					iVar1 = iVar0;
					fVar3 = fVar2;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_237()
{
	if (Global_1935630.f_40 == 0)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 5f)
		{
			return 1;
		}
	}
	else if (ENTITY::GET_ENTITY_SPEED(Global_35) > 4f)
	{
		return 1;
	}
	return 0;
}

bool func_238()
{
	int iVar0;
	if (__LIB_3__::func_956(Local_14.f_348[Local_14.f_556], &(Local_14.f_5), &(Local_14.f_5.f_16), Local_14.f_98[Local_14.f_556]))
	{
		return true;
	}
	Local_14.f_556++;
	if (Local_14.f_366 == 0)
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 2;
	}
	if (Local_14.f_556 > iVar0)
	{
		Local_14.f_556 = 0;
	}
	return false;
}

void func_246(var uParam0, int iParam1)
{
	uParam0->f_390 = iParam1;
}

struct<4> func_247(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (uParam0->f_392)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2313.451f, -1076.312f, 42.69354f };
					Var0.f_3 = 56.98f;
					break;
				case 1:
					Var0 = { 2311.588f, -1079.664f, 42.70388f };
					Var0.f_3 = 40.7f;
					break;
				case 2:
					Var0 = { 2332.646f, -1106.381f, 44.61731f };
					Var0.f_3 = -124.68f;
					break;
				case 3:
					Var0 = { 2338.659f, -1101.311f, 44.6178f };
					Var0.f_3 = -168.96f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2256.53f, -1361.906f, 44.27966f };
					Var0.f_3 = 78.66f;
					break;
				case 1:
					Var0 = { 2255.093f, -1364.864f, 44.27966f };
					Var0.f_3 = 39.69f;
					break;
				case 2:
					Var0 = { 2301.404f, -1383.007f, 44.61842f };
					Var0.f_3 = -86.33f;
					break;
				case 3:
					Var0 = { 2305.593f, -1371.574f, 44.52848f };
					Var0.f_3 = -126.63f;
					break;
			}
			break;
	}
	return Var0;
}

void func_248(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, bool bParam6)
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
		TASK::_0xE7FA07624574B79A(uParam0->f_348[iParam1], iParam2, iParam3, iParam4, fParam5, 1, 0, 0, 0);
	}
	TASK::TASK_LOOK_AT_ENTITY(uParam0->f_348[iParam1], iParam2, BUILTIN::FLOOR(fParam5) * 1000, 0, 51, 0);
	__LIB_2__::func_281(&Var0, iParam2, 0, -1, 3, 3, 2, 1, 0, 0, 0, 0);
	_NAMESPACE29::_0x66F9EB44342BB4C5(uParam0->f_348[iParam1], &Var0);
}

Vector3 func_250(var uParam0, int iParam1)
{
	switch (uParam0->f_392)
	{
		case 0:
			switch (iParam1)
			{
				case 3:
					return 2332.295f, -1093.086f, 44.01952f;
				case 2:
					return 2328.254f, -1101.55f, 43.95088f;
				case 0:
					return 2320.704f, -1083.009f, 42.85385f;
				case 1:
					return 2316.64f, -1084.587f, 42.75856f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 3:
					return 2300.2f, -1373.322f, 44.48066f;
				case 2:
					return 2295.77f, -1380.201f, 44.54015f;
				case 0:
					return 2282.666f, -1370.164f, 44.53268f;
				case 1:
					return 2280.903f, -1373.741f, 44.51231f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

char* func_251(var uParam0)
{
	switch (uParam0->f_366)
	{
		case 0:
			return "RE_BGP_STD_V1_RECOGNIZED";
		case 1:
			return "RE_BGP_STD_V2_RECOGNIZED";
		default:
			break;
	}
	return "RE_BGP_STD_V1_RECOGNIZED";
}

int func_374(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_374(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

