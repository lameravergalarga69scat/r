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
	struct<625> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 1, 2, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1232348144, 0, 0, 0, 6, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	int iLocal_648 = 0;
	int iLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	int iLocal_653 = 0;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	float fLocal_668 = 0f;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	float fLocal_672 = 0f;
	int iLocal_673 = 0;
	bool bLocal_674 = false;
	bool bLocal_675 = false;
	bool bLocal_676 = false;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	bool bLocal_680 = false;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	int iLocal_688 = 0;
	vector3 vLocal_689 = { 0f, 0f, 0f };
	vector3 vLocal_692 = { 0f, 0f, 0f };
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	int iLocal_698 = 0;
	int iLocal_699 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_641 = joaat("CS_SHERIFFFREEMAN");
	iLocal_653 = -1;
	iLocal_681 = joaat("A_F_M_TUMTOWNFOLK_02");
	iLocal_682 = joaat("A_M_M_TUMTOWNFOLK_01");
	func_1(&(Local_14.f_205));
	func_2(&Local_14);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_3(&Local_14);
	}
	while (true)
	{
		func_4(&Local_14);
		func_5(&Local_14, Local_14);
		switch (Local_14.f_203)
		{
			case 0:
				if (func_6(&Local_14))
				{
					__LIB_17__::func_302(&Local_14, 1);
				}
				break;
			case 1:
				if (func_8(&Local_14))
				{
					__LIB_17__::func_302(&Local_14, 2);
				}
				break;
			case 2:
				if (func_9(&Local_14))
				{
					__LIB_17__::func_302(&Local_14, 3);
				}
				if (Local_14.f_600 && ENTITY::DOES_ENTITY_EXIST(Local_14.f_3))
				{
					if (Local_14.f_202)
					{
						__LIB_17__::func_303(&Local_14);
					}
					if (Local_14.f_599)
					{
						func_11(&Local_14);
					}
					else
					{
						func_12(&Local_14);
					}
				}
				break;
			case 3:
				if (Local_14.f_202)
				{
					__LIB_17__::func_303(&Local_14);
				}
				func_13(&Local_14);
				if ((func_14(&Local_14) || __LIB_16__::func_842(Local_14, Local_14.f_3, 1, 1)) && Local_14.f_622 == 0)
				{
					if (!func_16(&(Local_14.f_205), 8))
					{
						func_17(&(Local_14.f_205), 8, 0);
					}
				}
				else if (func_16(&(Local_14.f_205), 8))
				{
					func_18(&(Local_14.f_205), 8);
				}
				if ((func_16(&(Local_14.f_205), 2) || (Local_14.f_205.f_389 && func_16(&(Local_14.f_205), 1))) || Local_14.f_205.f_385 != 5)
				{
					if (__LIB_16__::func_838(Local_14, Local_14.f_1, &(Local_14.f_3), &(Local_14.f_4), &(Local_14.f_624), 0, 1097859072 /* Float: 15f */, 0))
					{
						__LIB_0__::func_11(&Local_14);
					}
					if (Local_14.f_599)
					{
						func_11(&Local_14);
					}
					else
					{
						func_12(&Local_14);
					}
					func_21(&Local_14);
					__LIB_17__::func_324(&Local_14);
					if (func_23(&Local_14, 1))
					{
						__LIB_17__::func_302(&Local_14, 4);
					}
				}
				else if (func_23(&Local_14, 0))
				{
					__LIB_17__::func_302(&Local_14, 4);
				}
				break;
			case 4:
				func_3(&Local_14);
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_393 = 2899;
	func_25(&(uParam0->f_217));
	func_25(&(uParam0->f_245));
	func_25(&(uParam0->f_273));
	func_25(&(uParam0->f_301));
	func_25(&(uParam0->f_329));
}

void func_2(var uParam0)
{
	func_26();
	func_27();
	uParam0->f_10 = 115;
	__LIB_16__::func_799(&(uParam0->f_601));
	__LIB_4__::func_228(&(Local_14.f_11));
	__LIB_1__::func_393(&(Local_14.f_11), 0);
	__LIB_10__::func_590(&(Local_14.f_11), 0);
	__LIB_1__::func_403(&(Local_14.f_11), 1);
	__LIB_8__::func_731(&(Local_14.f_11), 1);
	__LIB_1__::func_399(&(Local_14.f_11), 0);
	__LIB_1__::func_397(&(Local_14.f_11), 0);
	__LIB_2__::func_619(&(Local_14.f_11), 0);
	__LIB_2__::func_828(&(Local_14.f_11), 1);
	__LIB_1__::func_402(&(Local_14.f_11), 1);
	__LIB_1__::func_413(&(Local_14.f_11), 1);
	__LIB_2__::func_956(&(Local_14.f_11), 1);
	__LIB_2__::func_830(&(Local_14.f_11), 1);
	__LIB_1__::func_406(&(Local_14.f_11), 1);
	__LIB_8__::func_732(&(Local_14.f_11), 1);
	__LIB_2__::func_903(&(Local_14.f_11), 1);
	__LIB_1__::func_404(&(Local_14.f_11), 1);
	__LIB_1__::func_405(&(Local_14.f_11), 1);
	__LIB_1__::func_401(&(Local_14.f_11), 1);
	func_48(&Local_14, 1);
}

void func_3(int iParam0)
{
	func_49(iParam0);
	func_50(&(iParam0->f_205));
	ITEMSET::DESTROY_ITEMSET(iParam0->f_163);
	__LIB_0__::func_172(iParam0->f_161);
	__LIB_0__::func_172(iParam0->f_164);
	__LIB_16__::func_839(&(iParam0->f_601));
	__LIB_16__::func_840(*iParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4(var uParam0)
{
	vector3 vVar0;
	if (Local_14.f_203 == 3)
	{
		if (func_54(&Local_14) <= 15f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
			{
				PED::SET_PED_RESET_FLAG(Local_14.f_3, 49, true);
				PED::SET_PED_RESET_FLAG(Local_14.f_3, 53, true);
			}
		}
		if (((!__LIB_0__::func_27(Local_14.f_193, 2) && __LIB_0__::func_27(Local_14.f_193, 65536)) && func_56(&Local_14) == 1) && (((((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_643, true, 0) && !__LIB_3__::func_291(Global_35, 1)) && func_54(&Local_14) <= 5f) && func_54(&Local_14) > 2.2f) && (!__LIB_0__::func_75(&uLocal_677) || __LIB_0__::func_265(&uLocal_677) >= 16f)) || __LIB_0__::func_27(Local_14.f_193, 1048576)))
		{
			__LIB_17__::func_300(Local_14, &(Local_14.f_3), &(Local_14.f_193), Local_14.f_194);
			__LIB_1__::func_581(&(Local_14.f_193), 2);
			__LIB_1__::func_581(&(Local_14.f_193), 524288);
			__LIB_1__::func_993(&(Local_14.f_193), 1048576);
			__LIB_1__::func_993(&(Local_14.f_193), 65536);
			if (Local_14.f_1 == 2 || bLocal_680)
			{
				__LIB_1__::func_581(&(Local_14.f_193), 2048);
			}
			func_17(&(Local_14.f_205), 4, 0);
		}
	}
	if (bLocal_676)
	{
		__LIB_17__::func_318(&Local_14, 0);
		__LIB_17__::func_311(&Local_14, 0);
		bLocal_676 = false;
		__LIB_1__::func_581(&(Local_14.f_193), 32);
	}
	vVar0 = { __LIB_16__::func_870(Local_14, Local_14.f_1, 0) };
	if (Local_14.f_1 == 1)
	{
		vVar0 = { -5497.847f, -2957.04f, -1.59251f };
	}
	if (__LIB_0__::func_94(Global_35, vVar0, 1) <= 7f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP"), false);
	}
}

void func_5(int iParam0, var uParam1)
{
	if (__LIB_0__::func_58(iParam0))
	{
		func_3(iParam0);
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		func_3(iParam0);
	}
	if (func_69(*iParam0, iParam0->f_1, &(iParam0->f_601), iParam0->f_3))
	{
		iParam0->f_622 = 1;
	}
	if (__LIB_16__::func_830(iParam0))
	{
		if (!__LIB_0__::func_75(&(iParam0->f_7)))
		{
			__LIB_1__::func_283(&(iParam0->f_7), 0);
		}
		else if (__LIB_0__::func_265(&(iParam0->f_7)) > 10f)
		{
			__LIB_0__::func_37(&(iParam0->f_7));
			func_3(iParam0);
		}
	}
	else if (__LIB_0__::func_75(&(iParam0->f_7)))
	{
		__LIB_0__::func_37(&(iParam0->f_7));
	}
}

bool func_6(var uParam0)
{
	if (func_73(uParam0))
	{
		uParam0->f_163 = ITEMSET::CREATE_ITEMSET(true);
		return true;
	}
	return false;
}

bool func_8(var uParam0)
{
	if (func_74(uParam0))
	{
		return true;
	}
	return false;
}

bool func_9(var uParam0)
{
	if (func_75(uParam0))
	{
		return true;
	}
	return false;
}

void func_11(int iParam0)
{
	if (((func_76(iParam0) && ENTITY::DOES_ENTITY_EXIST(Global_35)) && !Global_1935630.f_12) && ((VOLUME::_DOES_VOLUME_EXIST(iParam0->f_161) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_161, true, 0)) || func_77(iParam0)))
	{
		if (func_78(iParam0, iParam0->f_160) > -1)
		{
			if (func_79(iParam0))
			{
				__LIB_16__::func_841(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				__LIB_2__::func_451(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				if (iParam0->f_623)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				}
				__LIB_17__::func_300(*iParam0, &(iParam0->f_3), &(iParam0->f_193), iParam0->f_194);
				__LIB_17__::func_305(iParam0, iParam0->f_160, -1);
				if (!__LIB_17__::func_316(iParam0, 2))
				{
					__LIB_2__::func_344(&(iParam0->f_3));
					__LIB_2__::func_480(&(iParam0->f_41[iParam0->f_160 /*59*/].f_21), 0, 0, 1, 0);
				}
			}
		}
	}
	else
	{
		__LIB_16__::func_841(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
		__LIB_2__::func_344(&(iParam0->f_3));
		__LIB_2__::func_451(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
		__LIB_2__::func_480(&(iParam0->f_41[iParam0->f_160 /*59*/].f_21), 0, 0, 1, 0);
	}
}

void func_12(int iParam0)
{
	if (func_76(iParam0))
	{
		if (func_87(iParam0, iParam0->f_160) > -1)
		{
			if (func_79(iParam0))
			{
				__LIB_16__::func_841(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				__LIB_2__::func_344(&(iParam0->f_3));
				__LIB_2__::func_451(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				__LIB_2__::func_480(&(iParam0->f_41[iParam0->f_160 /*59*/].f_21), 0, 0, 1, 0);
				if (iParam0->f_623)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				}
				__LIB_17__::func_300(*iParam0, &(iParam0->f_3), &(iParam0->f_193), iParam0->f_194);
				__LIB_17__::func_305(iParam0, iParam0->f_160, -1);
			}
		}
	}
	else
	{
		__LIB_16__::func_841(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_3))
		{
			MISC::_0xE98D55C5983F2509(iParam0->f_3);
		}
	}
}

void func_13(var uParam0)
{
	bool bVar0;
	if (__LIB_0__::func_0(uParam0))
	{
		if (uParam0->f_626)
		{
			bVar0 = __LIB_16__::func_844(&(uParam0->f_11), &(uParam0->f_39), &(uParam0->f_3), &(uParam0->f_625), 1101004800 /* Float: 20f */);
		}
		else
		{
			bVar0 = __LIB_10__::func_373(uParam0->f_3, 0, &(uParam0->f_11), &(uParam0->f_39), 0, 0);
		}
		if (bVar0)
		{
			if (func_91(uParam0))
			{
				func_17(&(uParam0->f_205), 2, 1);
			}
		}
	}
}

int func_14(var uParam0)
{
	func_92();
	if (fLocal_668 >= 80f)
	{
		return 1;
	}
	return 0;
}

bool func_16(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_388, iParam1);
}

void func_17(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		uParam0->f_388 = 0;
		__LIB_1__::func_581(&(uParam0->f_388), iParam1);
	}
	else
	{
		__LIB_1__::func_581(&(uParam0->f_388), iParam1);
	}
}

void func_18(var uParam0, int iParam1)
{
	__LIB_1__::func_993(&(uParam0->f_388), iParam1);
}

void func_21(int iParam0)
{
	if (!__LIB_0__::func_58(iParam0) || __LIB_0__::func_1(iParam0->f_193, iParam0->f_195))
	{
		return;
	}
	if (iParam0->f_196 < 2)
	{
		if (__LIB_16__::func_802(&(iParam0->f_3), 249295937))
		{
			__LIB_0__::func_11(iParam0);
			__LIB_0__::func_7(&(iParam0->f_193), iParam0->f_195);
		}
	}
}

bool func_23(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_109(iParam0))
		{
			return true;
		}
	}
	func_110(&(iParam0->f_205));
	return false;
}

void func_25(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_2.f_1 = -1;
	uParam0->f_4 = -1;
	uParam0->f_4.f_1 = -1;
	uParam0->f_6 = -1;
	uParam0->f_6.f_1 = -1;
	uParam0->f_8 = -1;
	uParam0->f_8.f_1 = -1;
	uParam0->f_10 = -1;
	uParam0->f_10.f_1 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_23 = 17743;
	uParam0->f_24 = 17752;
	uParam0->f_25 = 17761;
	uParam0->f_20 = 0;
	uParam0->f_21 = 2;
	uParam0->f_22 = 0.95f;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_26()
{
	Local_14 = 22;
	Local_14.f_1 = __LIB_11__::func_133(22);
	func_115();
	Local_14.f_2 = __LIB_1__::func_293(Local_14, Local_14.f_1, 9, __LIB_16__::func_790(Local_14));
	if (Local_14.f_1 == 0)
	{
		Local_14.f_161 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5508.085f, -2932.673f, -2.634242f, 0f, 0f, -49.7522f, 4.560063f, 6.078531f, 5.547368f, "volTalkTrigger");
	}
	else if (Local_14.f_1 == 1)
	{
		Local_14.f_161 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5499.649f, -2953.863f, -2.634242f, 0f, 0f, -70.41862f, 4.560063f, 4.917511f, 5.547368f, "volTalkTrigger");
	}
	else
	{
		Local_14.f_161 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5495.711f, -2942.673f, -2.634242f, 0f, 0f, 36.36764f, 3.194005f, 5.214571f, 5.547368f, "volTalkTrigger");
	}
	Local_14.f_194 = 16384;
	Local_14.f_195 = 4;
	Local_14.f_205.f_393 = 19236;
}

void func_27()
{
	if (Local_14.f_1 == 0)
	{
		iLocal_643 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5508.085f, -2932.673f, -2.634242f, 0f, 0f, -49.7522f, 4.560063f, 6.078531f, 5.547368f, "m_volTrigger");
		iLocal_646 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5510.888f, -2929.929f, -3.760728f, 0f, 0f, 0f, 25.86575f, 23.33263f, 11.63066f, "m_volCalloverArea");
		iLocal_645 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5509.431f, -2932.574f, -2.987233f, 0f, 0f, 0f, 12.01924f, 10.87544f, 11.34509f, "m_volSpeechArea");
		iLocal_644 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5511.153f, -2929.652f, -2.776548f, 0f, 0f, -59.16267f, 2.746939f, 3.634164f, 8.927961f, "m_volStayAway");
		iLocal_642 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-5511.153f, -2929.652f, -2.776548f, 0f, 0f, 0f, 40f, 40f, 40f, "m_volRandomEventBlock");
	}
	else if (Local_14.f_1 == 1)
	{
		iLocal_643 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5499.649f, -2953.863f, -2.634242f, 0f, 0f, -70.41862f, 4.560063f, 4.917511f, 5.547368f, "m_volTrigger");
		iLocal_646 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5510.172f, -2946.772f, -3.760728f, 0f, 0f, 19.2469f, 22.05198f, 26.8289f, 11.63066f, "m_volCalloverArea");
		iLocal_645 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5502.124f, -2949.856f, -2.987233f, 0f, 0f, 6.290838f, 13.62729f, 11.91515f, 11.34509f, "m_volSpeechArea");
		iLocal_644 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5497.959f, -2957.207f, -2.776548f, 0f, 0f, -75.42225f, 1.296526f, 3.066641f, 8.927961f, "m_volStayAway");
		iLocal_642 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-5497.959f, -2957.207f, -2.776548f, 0f, 0f, 0f, 40f, 40f, 40f, "m_volRandomEventBlock");
	}
	else
	{
		iLocal_643 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5495.711f, -2942.673f, -2.634242f, 0f, 0f, 36.36764f, 3.194005f, 5.214571f, 5.547368f, "m_volTrigger");
		iLocal_646 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5505.143f, -2945.473f, -3.760728f, 0f, 0f, 19.2469f, 22.05198f, 26.8289f, 11.63066f, "m_volCalloverArea");
		iLocal_645 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5500.122f, -2945.972f, -2.987233f, 0f, 0f, 122.9969f, 14.78125f, 11.91515f, 11.34509f, "m_volSpeechArea");
		iLocal_644 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5493.419f, -2940.896f, -2.776548f, 0f, 0f, 36.69946f, 1.296526f, 2.754986f, 8.927961f, "m_volStayAway");
		iLocal_642 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-5493.419f, -2940.896f, -2.776548f, 0f, 0f, 0f, 40f, 40f, 40f, "m_volRandomEventBlock");
	}
}

void func_48(int iParam0, int iParam1)
{
	iParam0->f_202 = iParam1;
}

int func_49(int iParam0)
{
	func_124();
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "SheriffBubble");
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_698))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_698);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_699))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_699);
	}
	__LIB_0__::func_172(iLocal_643);
	__LIB_0__::func_172(iLocal_642);
	__LIB_0__::func_172(iLocal_646);
	__LIB_0__::func_172(iLocal_644);
	__LIB_0__::func_172(iLocal_645);
	func_125(0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_3))
	{
		PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, false);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_14.f_3, 0f);
	}
	AUDIO::STOP_PED_SPEAKING(Local_14.f_3, false);
	func_126();
	__LIB_16__::func_804(Local_14.f_3);
	if (__LIB_2__::func_763(348, 0))
	{
		if (__LIB_0__::func_27(Local_14.f_193, 512))
		{
			func_129();
			__LIB_2__::func_753(348, 0, 0, 0, 0);
		}
		else
		{
			__LIB_2__::func_753(348, 0, 1, 0, 0);
		}
	}
	return 1;
}

void func_50(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE((*uParam0)[iVar0 /*36*/]);
		}
		iVar0++;
	}
}

float func_54(int iParam0)
{
	return iParam0->f_201;
}

int func_56(int iParam0)
{
	return iParam0->f_205.f_385;
}

bool func_69(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((__LIB_0__::func_64(0) == 1 || __LIB_0__::func_64(0) == 2) || __LIB_0__::func_64(0) == 8) || __LIB_0__::func_1(Global_1935630, 2048))
			{
				__LIB_1__::func_581(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (__LIB_0__::func_64(0) == 11)
			{
				__LIB_1__::func_581(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (__LIB_0__::func_64(0) == 6)
			{
				__LIB_1__::func_581(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				__LIB_1__::func_581(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(__LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && __LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = __LIB_0__::func_23();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (__LIB_0__::func_41(iVar2) > __LIB_0__::func_41(iVar1))
				{
					if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 || __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
					{
						__LIB_1__::func_581(uParam2, 32);
					}
				}
				else if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 && __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
				{
					__LIB_1__::func_581(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((__LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || __LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || __LIB_9__::func_990(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || __LIB_9__::func_990(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!__LIB_16__::func_784(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						__LIB_1__::func_581(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_150(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || __LIB_16__::func_858(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!__LIB_0__::func_75(&(uParam2->f_13)))
					{
						__LIB_0__::func_268(&(uParam2->f_13), 0f);
					}
					else if (__LIB_1__::func_871(&(uParam2->f_13)) >= uParam2->f_16)
					{
						__LIB_0__::func_37(&(uParam2->f_13));
						__LIB_1__::func_581(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (__LIB_0__::func_75(&(uParam2->f_13)))
					{
						__LIB_0__::func_37(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (__LIB_2__::func_7())
			{
				__LIB_1__::func_581(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (__LIB_16__::func_785())
			{
				__LIB_1__::func_581(uParam2, 2048);
			}
		}
		if (__LIB_0__::func_1(Global_1935630, 16384) || Global_1430231.f_4)
		{
			__LIB_1__::func_581(uParam2, 128);
		}
		if (__LIB_8__::func_747(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			__LIB_1__::func_581(uParam2, 256);
		}
	}
	if ((((((((((__LIB_0__::func_27(*uParam2, 2) || __LIB_0__::func_27(*uParam2, 4)) || __LIB_0__::func_27(*uParam2, 8)) || __LIB_0__::func_27(*uParam2, 16)) || __LIB_0__::func_27(*uParam2, 32)) || __LIB_0__::func_27(*uParam2, 64)) || __LIB_0__::func_27(*uParam2, 128)) || __LIB_0__::func_27(*uParam2, 256)) || __LIB_0__::func_27(*uParam2, 512)) || __LIB_0__::func_27(*uParam2, 1024)) || __LIB_0__::func_27(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_73(var uParam0)
{
	HUD::_TEXT_DATABASE_REQUEST("SPSOT");
	HUD::_TEXT_DATABASE_REQUEST("SPDEF");
	HUD::_TEXT_DATABASE_REQUEST("SPSOTAU");
	STREAMING::REQUEST_MODEL(iLocal_641, false);
	STREAMING::REQUEST_MODEL(iLocal_681, false);
	STREAMING::REQUEST_MODEL(iLocal_682, false);
	__LIB_2__::func_261(iLocal_642, "SP_Sheriff_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	POPULATION::_0xB56D41A694E42E86(iLocal_644, 2500607, 0, 0, -1, -1, 10);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_644, 0, 0, 0, -1, -1, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_FAN"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_SMOKE"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_STARE_STOIC"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_STAND_WAITING"), 15, 0, 0);
	PED::_0xED9582B3DA8F02B4(3);
	return true;
}

bool func_74(var uParam0)
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SPSOT"))
	{
		return false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SPDEF"))
	{
		return false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SPSOTAU"))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_641))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_681))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_682))
	{
		return false;
	}
	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_FAN"), false))
	{
		return false;
	}
	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_SMOKE"), false))
	{
		return false;
	}
	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_STARE_STOIC"), false))
	{
		return false;
	}
	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_STAND_WAITING"), false))
	{
		return false;
	}
	if (PED::_0x5C16855277819BBF() != 3)
	{
		return false;
	}
	return true;
}

bool func_75(var uParam0)
{
	vector3 vVar0;
	int iVar4;
	vVar0 = { __LIB_16__::func_870(Local_14, Local_14.f_1, 0) };
	if (!__LIB_0__::func_27(Local_14.f_193, 2097152))
	{
		if (func_162(&(Local_14.f_3), 348, vVar0, 0, 1320127128))
		{
			__LIB_16__::func_792(Local_14.f_3, 22);
			ENTITY::SET_ENTITY_HEADING(Local_14.f_3, vVar0.f_3);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_3, 5, true);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_14.f_3, 512, true);
			PED::_0xE1B3BE07D3AADDED(Local_14.f_3, 4, 1);
			__LIB_1__::func_581(&(Local_14.f_193), 2097152);
			Local_14.f_599 = 1;
			Local_14.f_600 = 1;
			__LIB_17__::func_318(&Local_14, 0);
			__LIB_17__::func_322(&Local_14, 0, 0, "SPD_UC_GRT", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0);
			__LIB_17__::func_322(&Local_14, 0, 1, "SPD_UC_ANT", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0);
			__LIB_19__::func_6(&Local_14, 0, __LIB_2__::func_340(3, 0, 0), 0);
			__LIB_17__::func_317(&Local_14, 0, 0);
			if (Local_14.f_1 == 0)
			{
				__LIB_17__::func_322(&Local_14, 1, 0, "SPSOT_YES", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0);
				__LIB_17__::func_322(&Local_14, 1, 1, "SPSOT_NO", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0);
			}
			else if (Local_14.f_1 == 1)
			{
				__LIB_17__::func_322(&Local_14, 1, 0, "SPSOT_NOT_JOKE", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0);
				__LIB_17__::func_322(&Local_14, 1, 1, "SPSOT_ARE_JOKE", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0);
			}
			__LIB_17__::func_317(&Local_14, 1, 0);
			__LIB_1__::func_581(&(Local_14.f_193), 32);
			__LIB_1__::func_581(&(Local_14.f_193), 33554432);
		}
	}
	else if (!__LIB_0__::func_27(Local_14.f_193, 4194304))
	{
		if (Local_14.f_1 == 1)
		{
			vVar0 = { -5497.847f, -2957.04f, -1.59251f };
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_14.f_3, true, true);
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, 120000, 0.25f, 0, 40000f);
		TASK::TASK_ACHIEVE_HEADING(0, vVar0.f_3, 0);
		__LIB_1__::func_474(Local_14.f_3, &iVar4, 0, 0, 1, 1);
		__LIB_1__::func_581(&(Local_14.f_193), 4194304);
	}
	else if (!__LIB_0__::func_27(Local_14.f_193, 8388608))
	{
		if (Local_14.f_1 == 1)
		{
			vVar0 = { -5497.847f, -2957.04f, -1.59251f };
		}
		if (__LIB_0__::func_94(Local_14.f_3, vVar0, 1) <= 13f && MISC::IS_POSITION_OCCUPIED(vVar0, 0.5f, false, true, true, false, false, Local_14.f_3, true))
		{
			if (!__LIB_0__::func_75(&uLocal_695))
			{
				__LIB_1__::func_148(&uLocal_695);
			}
		}
		else if (__LIB_0__::func_75(&uLocal_695))
		{
			__LIB_0__::func_37(&uLocal_695);
		}
		if (__LIB_10__::func_373(Local_14.f_3, 0, &(Local_14.f_11), &(Local_14.f_39), 0, 0) || __LIB_0__::func_264(&uLocal_695) >= 6f)
		{
			__LIB_16__::func_789(22);
			__LIB_17__::func_302(&Local_14, 4);
			return false;
		}
		if (!__LIB_0__::func_163(Local_14.f_3, 242628503))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Local_14.f_3, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(Local_14.f_3, 1, 0, 0, 0);
			__LIB_1__::func_581(&(Local_14.f_193), 8388608);
		}
	}
	else if (!__LIB_0__::func_27(Local_14.f_193, 16777216))
	{
		if (__LIB_10__::func_373(Local_14.f_3, 0, &(Local_14.f_11), &(Local_14.f_39), 0, 0))
		{
			__LIB_16__::func_789(22);
			__LIB_17__::func_302(&Local_14, 4);
			return false;
		}
		if (!__LIB_0__::func_163(Local_14.f_3, 716706914))
		{
			__LIB_1__::func_581(&(Local_14.f_193), 16777216);
		}
	}
	if (__LIB_0__::func_27(Local_14.f_193, 16777216))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_3, "special_ped_group", 0f);
		AUDIO::STOP_PED_SPEAKING(Local_14.f_3, true);
		PED::_0x86F0B6730C32AC14(Local_14.f_3, 1);
		PED::_0xEF371232BC6053E1(Local_14.f_3);
		PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, true);
		func_171();
		func_118(&(Local_14.f_205.f_217), func_172(5), __LIB_16__::func_807(59), &(Local_14.f_205.f_245));
		func_174(&(Local_14.f_205), 1, 1);
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_14.f_3, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "SheriffBubble");
		return true;
	}
	return false;
}

bool func_76(int iParam0)
{
	if (__LIB_0__::func_27(Local_14.f_193, 32))
	{
		return true;
	}
	return false;
}

bool func_77(int iParam0)
{
	if (func_54(iParam0) <= 15f)
	{
		return true;
	}
	return false;
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return iVar0;
	}
	iVar1 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_162))
	{
		iVar1 = iParam0->f_162;
	}
	iVar0 = func_175(&(iParam0->f_3), &(iParam0->f_41[iParam1 /*59*/]), 15f, &(iParam0->f_41[iParam1 /*59*/].f_21), 0f, 2, iParam0->f_41[iParam1 /*59*/].f_57, iVar1, iParam0->f_41[iParam1 /*59*/].f_56, 0, 0, 2, -1082130432 /* Float: -1f */);
	if (func_176(iParam0))
	{
		__LIB_16__::func_841(&(iParam0->f_41[iParam1 /*59*/]), 1);
		if (iVar0 > -1)
		{
			iParam0->f_41[iParam1 /*59*/].f_58 = iVar0;
		}
		return iParam0->f_41[iParam1 /*59*/].f_58;
	}
	else
	{
		__LIB_16__::func_841(&(iParam0->f_41[iParam1 /*59*/]), 0);
	}
	return iVar0;
}

bool func_79(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_27(Local_14.f_193, 524288))
	{
		if (__LIB_17__::func_319(iParam0, 0, &iVar0))
		{
			__LIB_1__::func_581(&(Local_14.f_193), 524288);
			__LIB_1__::func_581(&(Local_14.f_193), 1048576);
			if (Local_14.f_1 == 2)
			{
				__LIB_1__::func_581(&(Local_14.f_193), 2048);
			}
			func_178(iVar0);
		}
	}
	else if (Local_14.f_1 != 2)
	{
		if (__LIB_17__::func_319(iParam0, 1, &iVar0))
		{
			if (iVar0 == 0)
			{
				__LIB_1__::func_581(&(Local_14.f_193), 64);
			}
			else if (iVar0 == 1)
			{
				__LIB_1__::func_581(&(Local_14.f_193), 128);
			}
			bLocal_676 = true;
		}
	}
	return true;
}

int func_87(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return iVar0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return iVar0;
	}
	iVar1 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_162))
	{
		iVar1 = iParam0->f_162;
	}
	if ((VOLUME::_DOES_VOLUME_EXIST(iParam0->f_161) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_161, true, 0)) || func_77(iParam0))
	{
		__LIB_16__::func_841(&(iParam0->f_41[iParam1 /*59*/]), 1);
		iVar0 = func_175(&(iParam0->f_3), &(iParam0->f_41[iParam1 /*59*/]), 15f, &(iParam0->f_41[iParam1 /*59*/].f_21), 0f, 3, iParam0->f_41[iParam1 /*59*/].f_57, iVar1, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
		if (iVar0 > -1)
		{
			iParam0->f_41[iParam1 /*59*/].f_58 = iVar0;
		}
		return iParam0->f_41[iParam1 /*59*/].f_58;
	}
	else
	{
		__LIB_16__::func_841(&(iParam0->f_41[iParam1 /*59*/]), 0);
	}
	return iVar0;
}

bool func_91(var uParam0)
{
	__LIB_16__::func_789(22);
	func_125(0);
	return true;
}

void func_92()
{
	if (ENTITY::IS_ENTITY_DEAD(Local_14.f_3) && ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_665))
	{
		__LIB_0__::func_268(&uLocal_665, 0f);
	}
	else if (__LIB_1__::func_871(&uLocal_665) >= 1000)
	{
		fLocal_668 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_14.f_3, true, false), __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()), true);
		__LIB_0__::func_37(&uLocal_665);
	}
}

bool func_109(int iParam0)
{
	bool bVar0;
	__LIB_16__::func_854(Local_14.f_3, &(Local_14.f_193), 1024, 22, 0);
	func_221();
	func_222();
	bVar0 = __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 0, 1);
	if (((func_16(&(Local_14.f_205), 2) || func_56(&Local_14) == 4) || __LIB_0__::func_27(Local_14.f_193, 512)) || bVar0)
	{
		__LIB_1__::func_581(&(Local_14.f_193), 512);
		return true;
	}
	if (__LIB_0__::func_27(Local_14.f_193, 8192))
	{
		return true;
	}
	if (iLocal_647 < 2 && iLocal_653 != func_223(&Local_14))
	{
		if (__LIB_16__::func_802(&(Local_14.f_3), 249295937))
		{
			iLocal_653 = func_223(&Local_14);
			iLocal_647++;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3) || ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
	{
		return true;
	}
	if (!__LIB_0__::func_75(&uLocal_659))
	{
		__LIB_1__::func_148(&uLocal_659);
	}
	if (Local_14.f_622 && __LIB_16__::func_809(&(Local_14.f_601)))
	{
		return true;
	}
	return false;
}

void func_110(var uParam0)
{
	switch (uParam0->f_385)
	{
		case 1:
			if (func_225(uParam0, &(uParam0->f_217), uParam0->f_385))
			{
				if (func_16(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_329));
					Stack.Push(uParam0->f_217.f_6);
					Stack.Push(uParam0->f_217.f_6.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 4, 1);
				}
				else if (uParam0->f_389 && func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_273));
					Stack.Push(uParam0->f_217.f_4);
					Stack.Push(uParam0->f_217.f_4.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 2, 1);
				}
				else if (func_16(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_357));
					Stack.Push(uParam0->f_217.f_10);
					Stack.Push(uParam0->f_217.f_10.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 5, 0);
				}
				else if (func_16(uParam0, 4))
				{
					Stack.Push(&(uParam0->f_301));
					Stack.Push(uParam0->f_217.f_8);
					Stack.Push(uParam0->f_217.f_8.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 3, 1);
				}
				else if (func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_273));
					Stack.Push(uParam0->f_217.f_4);
					Stack.Push(uParam0->f_217.f_4.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 2, 1);
				}
				else
				{
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 1, 1);
				}
			}
			break;
		case 2:
			if (func_225(uParam0, &(uParam0->f_273), uParam0->f_385))
			{
				if (!uParam0->f_389)
				{
					if (func_16(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_329));
						Stack.Push(uParam0->f_273.f_6);
						Stack.Push(uParam0->f_273.f_6.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
						if (func_226(uParam0->f_273.f_2))
						{
							Stack.Push(&(uParam0->f_217));
							Stack.Push(uParam0->f_273.f_2);
							Stack.Push(uParam0->f_273.f_2.f_1);
							Stack.Push(&(uParam0->f_245));
							Call_Loc(uParam0->f_393);
						}
						func_174(uParam0, 4, 1);
					}
					else if (func_16(uParam0, 8))
					{
						Stack.Push(&(uParam0->f_357));
						Stack.Push(uParam0->f_273.f_10);
						Stack.Push(uParam0->f_273.f_10.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
						if (func_226(uParam0->f_273.f_2))
						{
							Stack.Push(&(uParam0->f_217));
							Stack.Push(uParam0->f_273.f_2);
							Stack.Push(uParam0->f_273.f_2.f_1);
							Stack.Push(&(uParam0->f_245));
							Call_Loc(uParam0->f_393);
						}
						func_174(uParam0, 5, 0);
					}
					else if (func_16(uParam0, 4))
					{
						Stack.Push(&(uParam0->f_301));
						Stack.Push(uParam0->f_273.f_8);
						Stack.Push(uParam0->f_273.f_8.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
						if (func_226(uParam0->f_273.f_2))
						{
							Stack.Push(&(uParam0->f_217));
							Stack.Push(uParam0->f_273.f_2);
							Stack.Push(uParam0->f_273.f_2.f_1);
							Stack.Push(&(uParam0->f_245));
							Call_Loc(uParam0->f_393);
						}
						func_174(uParam0, 3, 1);
					}
					else
					{
						if (func_226(uParam0->f_273.f_2))
						{
							Stack.Push(&(uParam0->f_217));
							Stack.Push(uParam0->f_273.f_2);
							Stack.Push(uParam0->f_273.f_2.f_1);
							Stack.Push(&(uParam0->f_245));
							Call_Loc(uParam0->f_393);
						}
						func_174(uParam0, 1, 1);
					}
				}
				else if (uParam0->f_390)
				{
					if (uParam0->f_391)
					{
						func_174(uParam0, 6, 1);
					}
					else
					{
						func_174(uParam0, 0, 1);
					}
				}
				else
				{
					if (func_226(uParam0->f_273.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_273.f_2);
						Stack.Push(uParam0->f_273.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 1, 1);
				}
			}
			break;
		case 3:
			if (func_225(uParam0, &(uParam0->f_301), uParam0->f_385))
			{
				if (func_16(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_329));
					Stack.Push(uParam0->f_301.f_6);
					Stack.Push(uParam0->f_301.f_6.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					if (func_226(uParam0->f_301.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_301.f_2);
						Stack.Push(uParam0->f_301.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 4, 1);
				}
				else if (uParam0->f_389 && func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_273));
					Stack.Push(uParam0->f_301.f_4);
					Stack.Push(uParam0->f_301.f_4.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					if (func_226(uParam0->f_301.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_301.f_2);
						Stack.Push(uParam0->f_301.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 2, 1);
				}
				else if (func_16(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_357));
					Stack.Push(uParam0->f_301.f_10);
					Stack.Push(uParam0->f_301.f_10.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					if (func_226(uParam0->f_301.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_301.f_2);
						Stack.Push(uParam0->f_301.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 5, 0);
				}
				else if (func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_273));
					Stack.Push(uParam0->f_301.f_4);
					Stack.Push(uParam0->f_301.f_4.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					if (func_226(uParam0->f_301.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_301.f_2);
						Stack.Push(uParam0->f_301.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 2, 1);
				}
				else
				{
					if (func_226(uParam0->f_301.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_301.f_2);
						Stack.Push(uParam0->f_301.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 1, 1);
				}
			}
			break;
		case 4:
			if (func_225(uParam0, &(uParam0->f_329), uParam0->f_385))
			{
				if (uParam0->f_391)
				{
					func_174(uParam0, 6, 1);
				}
				else
				{
					func_174(uParam0, 0, 1);
				}
			}
			break;
		case 5:
			if (!uParam0->f_392)
			{
				if (func_225(uParam0, &(uParam0->f_357), uParam0->f_385))
				{
					uParam0->f_392 = 1;
					if (func_16(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_329));
						Stack.Push(uParam0->f_357.f_6);
						Stack.Push(uParam0->f_357.f_6.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
						uParam0->f_392 = 0;
						func_174(uParam0, 4, 0);
					}
					else if (uParam0->f_389 && func_16(uParam0, 1))
					{
						Stack.Push(&(uParam0->f_273));
						Stack.Push(uParam0->f_357.f_4);
						Stack.Push(uParam0->f_357.f_4.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
						uParam0->f_392 = 0;
						func_174(uParam0, 2, 0);
					}
					else if (func_16(uParam0, 8))
					{
					}
					else
					{
						uParam0->f_392 = 0;
						func_174(uParam0, 1, 0);
					}
				}
			}
			else if (func_16(uParam0, 2))
			{
				Stack.Push(&(uParam0->f_329));
				Stack.Push(uParam0->f_357.f_6);
				Stack.Push(uParam0->f_357.f_6.f_1);
				Stack.Push(&(uParam0->f_245));
				Call_Loc(uParam0->f_393);
				uParam0->f_392 = 0;
				func_174(uParam0, 4, 0);
			}
			else if (uParam0->f_389 && func_16(uParam0, 1))
			{
				Stack.Push(&(uParam0->f_273));
				Stack.Push(uParam0->f_357.f_4);
				Stack.Push(uParam0->f_357.f_4.f_1);
				Stack.Push(&(uParam0->f_245));
				Call_Loc(uParam0->f_393);
				uParam0->f_392 = 0;
				func_174(uParam0, 2, 0);
			}
			else if (func_16(uParam0, 8))
			{
			}
			else
			{
				uParam0->f_392 = 0;
				func_174(uParam0, 1, 0);
			}
			break;
		case 6:
			func_227(uParam0);
			func_174(uParam0, 0, 1);
			break;
		case 0:
			break;
	}
}

void func_115()
{
	vector3 vVar0;
	vector3 vVar3;
	if (Local_14.f_1 == 0)
	{
		vVar0 = { -5511.039f, -2929.552f, -3.278f };
		vVar3 = { 0f, 0f, -131.907f };
	}
	else if (Local_14.f_1 == 1)
	{
		vVar0 = { -5497.666f, -2957.426f, -1.708f };
		vVar3 = { 0f, 0f, 12.912f };
	}
	else
	{
		vVar0 = { -5493.435f, -2940.703f, -1.471f };
		vVar3 = { 0f, 0f, 124.069f };
	}
	__LIB_16__::func_810(&(Local_14.f_205[0 /*36*/]), "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_1@ig_1", vVar0, vVar3, "pl_IG1_Enjoy_Your_Day", 0, 0, 0, 0, 0);
	__LIB_16__::func_810(&(Local_14.f_205[1 /*36*/]), "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_2@ig2", vVar0, vVar3, "Pl_IG1_Loop01", 0, 0, 0, 0, 0);
	__LIB_16__::func_810(&(Local_14.f_205[2 /*36*/]), "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_3@ig_3", vVar0, vVar3, "pl_IG3_Remember_People", 0, 0, 0, 0, 0);
	__LIB_16__::func_810(&(Local_14.f_205[3 /*36*/]), "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_4@ig_4", vVar0, vVar3, "pl_IG4_Get_The", 0, 0, 0, 0, 0);
	__LIB_16__::func_810(&(Local_14.f_205[4 /*36*/]), "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_5@ig5", vVar0, vVar3, "Pl_IG6_Loop01", 0, 0, 0, 0, 0);
	__LIB_16__::func_810(&(Local_14.f_205[5 /*36*/]), "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_6@ig6", vVar0, vVar3, "pl_IG6_Aim_2_Stand", 0, 0, 0, 0, 0);
}

int func_118(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_172(iParam1);
	iVar1 = func_234(iParam2);
	func_25(uParam0);
	switch (iVar0)
	{
		case 0:
			switch (iVar1)
			{
				case 0:
					func_235(uParam0, "pl_IG1_Welcome_To_Tumbleweed", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(7), 0, "", 0, "b_breakout", 0, "s_IG1_Welcome_To_Tumbleweed", "s_IG1_Idle_Loop", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					__LIB_16__::func_793(uParam0, 39054);
					__LIB_16__::func_811(uParam0, 39148);
					break;
				case 1:
					func_235(uParam0, "pl_IG1_People_Please_Obey", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(7), 0, "", 0, "b_breakout", 0, "s_IG1_People_Please_Obey", "s_IG1_Idle_Loop", 2, 1064514355 /* Float: 0.95f */);
					func_240();
					break;
				case 2:
					func_235(uParam0, "pl_IG1_Enjoy_Your_Day", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(7), 0, "", 0, "b_breakout", 0, "s_IG1_Enjoy_Your_Day", "s_IG1_Idle_Loop", 2, 1064514355 /* Float: 0.95f */);
					func_240();
					break;
				case 3:
					func_235(uParam0, "pl_IG1_Enjoy_Your_Time", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(7), 0, "", 0, "b_breakout", 0, "s_IG1_Enjoy_Your_Time", "s_IG1_Idle_Loop", 2, 1064514355 /* Float: 0.95f */);
					func_240();
					break;
				case 4:
					func_235(uParam0, "pl_IG1_All_Of_You", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "s_IG1_All_Of_You", "s_IG1_Idle_Loop", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					__LIB_16__::func_811(uParam0, 39826);
					break;
				case 5:
					func_235(uParam0, "pl_IG1_This_Is_A_Law", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "s_IG1_This_Is_A_Law", "s_IG1_Idle_Loop", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					__LIB_16__::func_811(uParam0, 39826);
					break;
				case 6:
					func_235(uParam0, "pl_IG1_I_Hope_Youre_All", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "s_IG1_I_Hope_Youre_All", "s_IG1_Idle_Loop", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					func_242();
					break;
			}
			break;
		case 1:
			switch (iVar1)
			{
				case 7:
					func_235(uParam0, "Pl_IG1_Loop01", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(7), 0, "", 0, "b_breakout", 0, "S_IG1_Loop01", "S_IG1_Loop01", 3, 0.25f);
					func_124();
					__LIB_16__::func_811(uParam0, 39995);
					break;
				case 8:
					func_235(uParam0, "Pl_IG6_Loop01", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(7), 0, "", 0, "b_breakout", 0, "S_IG6_Loop01", "S_IG6_Loop01", 3, 0.25f);
					func_124();
					__LIB_16__::func_811(uParam0, 39995);
					break;
				case 9:
					func_235(uParam0, "Pl_IG1_Loop01", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(7), 0, "", 0, "b_breakout", 0, "S_IG1_Loop01", "S_IG1_Loop01", 3, 0.75f);
					func_124();
					__LIB_16__::func_794(uParam0, 40698);
					__LIB_16__::func_793(uParam0, 40737);
					__LIB_16__::func_811(uParam0, 39995);
					break;
				case 10:
					func_235(uParam0, "Pl_IG6_Loop01", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(7), 0, "", 0, "b_breakout", 0, "S_IG6_Loop01", "S_IG6_Loop01", 3, 0.75f);
					func_124();
					__LIB_16__::func_794(uParam0, 40698);
					__LIB_16__::func_793(uParam0, 40737);
					__LIB_16__::func_811(uParam0, 39995);
					break;
				case 11:
					func_235(uParam0, "Pl_IG1_Loop01", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG1_Loop01", "S_IG1_Loop01", 3, 0.25f);
					func_124();
					__LIB_16__::func_793(uParam0, 40849);
					break;
				case 12:
					func_235(uParam0, "Pl_IG1_Loop01", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(7), 0, "", 0, "b_breakout", 0, "S_IG1_Loop01", "S_IG1_Loop01", 3, 0.25f);
					func_124();
					__LIB_16__::func_811(uParam0, 39148);
					break;
				case 13:
					func_235(uParam0, "Pl_IG2_You_Tough_Guy", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(14), 0, "", 0, "b_breakout", 0, "S_IG2_You_Tough_Guy", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					__LIB_16__::func_793(uParam0, 40922);
					break;
				case 14:
					func_235(uParam0, "Pl_IG2_Here_In_Tumbleweed", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(15), 0, "", 0, "b_breakout", 0, "S_IG2_Here_In_Tumbleweed", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_793(uParam0, 40922);
					break;
				case 15:
					func_235(uParam0, "pl_IG2_Question", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(17), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG2_Question_Wait_Idle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_793(uParam0, 41003);
					__LIB_16__::func_811(uParam0, 41038);
					break;
				case 16:
					func_235(uParam0, "Pl_IG2_Positive_Response", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG2_Positive_Response", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					break;
				case 17:
					func_235(uParam0, "Pl_IG2_Negative_Response", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG2_Negative_Response", "S_IG2_Negative_Response", 3, 0.92f);
					__LIB_16__::func_811(uParam0, 41380);
					break;
				case 18:
					func_235(uParam0, "Pl_IG2_You_Walk_Away", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG2_You_Walk_Away", "S_IG6_Loop01", 2, 1064514355 /* Float: 0.95f */);
					break;
				case 19:
					func_235(uParam0, "Pl_IG2_We_Are_A_Law", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG2_We_Are_A_Law", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					__LIB_16__::func_811(uParam0, 39826);
					break;
				case 20:
					func_235(uParam0, "Pl_IG2_Together_We_Can", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG2_Together_We_Can", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					__LIB_16__::func_811(uParam0, 39826);
					break;
				case 21:
					func_235(uParam0, "Pl_IG2_God_Expects", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG2_God_Expects", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					func_242();
					__LIB_16__::func_811(uParam0, 39826);
					break;
				case 22:
					func_235(uParam0, "Pl_IG2_This_Shall_Be", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG2_This_Shall_Be", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					__LIB_16__::func_811(uParam0, 39826);
					break;
				case 23:
					func_235(uParam0, "Pl_IG2_I_Am_Watching_You", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG2_I_Am_Watching_You", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					break;
			}
			break;
		case 2:
			switch (iVar1)
			{
				case 24:
					func_235(uParam0, "pl_IG3_My_Authority_Is", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "s_IG3_My_Authority_Is", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_242();
					func_124();
					__LIB_16__::func_793(uParam0, 40922);
					break;
				case 25:
					func_235(uParam0, "pl_IG3_Remember_People", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(7), 0, "", 0, "b_breakout", 0, "s_IG3_Remember_People", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_240();
					break;
				case 26:
					func_235(uParam0, "pl_IG3_This_Is_A_law", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(7), 0, "", 0, "b_breakout", 0, "s_IG3_This_Is_A_law", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_240();
					break;
				case 27:
					func_235(uParam0, "pl_IG3_Let_Me_Tell_You", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "s_IG3_Let_Me_Tell_You", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					__LIB_16__::func_811(uParam0, 39826);
					break;
				case 28:
					func_235(uParam0, "pl_IG3_I_Am_Not", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "s_IG3_I_Am_Not", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					__LIB_16__::func_811(uParam0, 39826);
					break;
				case 29:
					func_235(uParam0, "pl_IG3_Anyone_And_I", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "s_IG3_Anyone_And_I", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					func_242();
					break;
				case 30:
					func_235(uParam0, "pl_IG3_Whatever_The_Health", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(2), __LIB_16__::func_807(31), 0, "", 0, "b_breakout", 0, "s_IG3_Whatever_The_Health", "S_IG6_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 31:
					func_235(uParam0, "pl_IG3_Do_Not_Push", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "s_IG3_Do_Not_Push", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case 32:
					func_235(uParam0, "pl_IG4_No_Lingering", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "s_IG4_No_Lingering", "s_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					__LIB_16__::func_811(uParam0, 41535);
					break;
				case 33:
					func_235(uParam0, "pl_IG4_Get_The", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "s_IG4_Get_The", "s_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					__LIB_16__::func_811(uParam0, 41535);
					break;
				case 34:
					func_235(uParam0, "pl_IG4_Your_Starting", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "s_IG4_Your_Starting", "s_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					__LIB_16__::func_811(uParam0, 41535);
					break;
				case 35:
					func_235(uParam0, "pl_IG4_Dont_Take", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "s_IG4_Dont_Take", "s_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					__LIB_16__::func_811(uParam0, 41535);
					break;
				case 36:
					func_235(uParam0, "pl_IG4_What_Are_You", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "s_IG4_What_Are_You", "s_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					__LIB_16__::func_811(uParam0, 41535);
					break;
			}
			break;
		case 4:
			switch (iVar1)
			{
				case 37:
					func_235(uParam0, "Pl_IG6_Loop01", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(4), __LIB_16__::func_807(37), 0, "", 0, "b_breakout", 0, "S_IG6_Loop01", "S_IG6_Loop01", 3, 0.25f);
					func_124();
					__LIB_16__::func_811(uParam0, 39995);
					break;
				case 38:
					func_235(uParam0, "Pl_IG6_Loop01", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(4), __LIB_16__::func_807(37), 0, "", 0, "b_breakout", 0, "S_IG6_Loop01", "S_IG6_Loop01", 3, 0.75f);
					func_124();
					__LIB_16__::func_794(uParam0, 40698);
					__LIB_16__::func_793(uParam0, 40737);
					__LIB_16__::func_811(uParam0, 39995);
					break;
				case 39:
					func_235(uParam0, "Pl_IG5_Hey_You", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 40:
					func_235(uParam0, "Pl_IG5_Im_Watching_You_Tough_Guy", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 41:
					func_235(uParam0, "Pl_IG5_Im_Watching_You", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 42:
					func_235(uParam0, "Pl_IG5_I_Never_Sleep", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 43:
					func_235(uParam0, "Pl_IG5_Hey_You_Dont", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 44:
					func_235(uParam0, "Pl_IG5_As_Far_As", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 45:
					func_235(uParam0, "Pl_IG5_You_Your_Back", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 46:
					func_235(uParam0, "Pl_IG5_If_Youve_Come", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 47:
					func_235(uParam0, "Pl_IG5_I_Will_Give_You", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 48:
					func_235(uParam0, "Pl_IG5_Get_The_Hell", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 49:
					func_235(uParam0, "Pl_IG5_You_Get_Now", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 50:
					func_235(uParam0, "Pl_IG5_My_Reputation", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
			}
			break;
		case 5:
			switch (iVar1)
			{
				case 51:
					func_235(uParam0, "pl_IG6_Your_Dead", func_172(iVar0), __LIB_16__::func_807(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_Your_Dead", "s_IG6_Your_Dead", 3, 1064514355 /* Float: 0.95f */);
					func_124();
					__LIB_16__::func_811(uParam0, 41560);
					break;
				case 52:
					func_235(uParam0, "pl_IG6_I_Will_Strike", func_172(iVar0), __LIB_16__::func_807(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_I_Will_Strike", "s_IG6_I_Will_Strike", 3, 1064514355 /* Float: 0.95f */);
					func_124();
					__LIB_16__::func_811(uParam0, 41560);
					break;
				case 53:
					func_235(uParam0, "pl_IG6_Now_Youll_Pay", func_172(iVar0), __LIB_16__::func_807(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_Now_Youll_Pay", "s_IG6_Now_Youll_Pay", 3, 1064514355 /* Float: 0.95f */);
					func_124();
					__LIB_16__::func_811(uParam0, 41560);
					break;
				case 54:
					func_235(uParam0, "pl_IG6_Your_Mine_Now", func_172(iVar0), __LIB_16__::func_807(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_Your_Mine_Now", "s_IG6_Your_Mine_Now", 3, 1064514355 /* Float: 0.95f */);
					func_124();
					__LIB_16__::func_811(uParam0, 41560);
					break;
				case 55:
					func_235(uParam0, "pl_IG6_You_Come_At", func_172(iVar0), __LIB_16__::func_807(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_You_Come_At", "s_IG6_You_Come_At", 3, 1064514355 /* Float: 0.95f */);
					func_124();
					__LIB_16__::func_811(uParam0, 41560);
					break;
				case 56:
					func_235(uParam0, "pl_IG6_Aim_2_Stand", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(7), 0, "", 0, "b_breakout", 0, "s_IG6_Aim_2_Stand", "s_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 57:
					func_235(uParam0, "pl_IG6_Rifle_Up_2_Two_Hands", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(8), 0, "", 0, "b_breakout", 0, "s_IG6_Rifle_Up_2_Two_Hands", "s_IG6_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 58:
					func_235(uParam0, "pl_IG6_Stand_2_Aim", func_172(iVar0), __LIB_16__::func_807(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_Stand_2_Aim", "s_IG6_Stand_2_Aim", 3, 1064514355 /* Float: 0.95f */);
					break;
				case 59:
					func_235(uParam0, "pl_IG6_Two_Hands_2_Rifle", func_172(iVar0), __LIB_16__::func_807(iVar1), func_172(1), __LIB_16__::func_807(7), 0, "", 0, "b_breakout", 0, "s_IG6_Two_Hands_2_Rifle", "s_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					__LIB_16__::func_811(uParam0, 41596);
					break;
			}
			break;
	}
	if (func_226(iParam1) && __LIB_16__::func_812(iParam2))
	{
		if (iVar0 != 5)
		{
			__LIB_16__::func_813(uParam0, func_172(1), __LIB_16__::func_807(7));
			if (!__LIB_0__::func_27(Local_14.f_193, 2))
			{
				iVar2 = func_257();
				if (iVar2 > 0)
				{
					bLocal_680 = true;
					func_258(uParam0, iVar2);
				}
				else if (Local_14.f_1 == 0)
				{
					bLocal_680 = false;
					__LIB_16__::func_814(uParam0, func_172(0), __LIB_16__::func_807(0));
				}
				else if (Local_14.f_1 == 1)
				{
					bLocal_680 = false;
					__LIB_16__::func_814(uParam0, func_172(1), __LIB_16__::func_807(13));
				}
				else
				{
					bLocal_680 = false;
					__LIB_16__::func_814(uParam0, func_172(2), __LIB_16__::func_807(24));
				}
			}
			if ((iVar1 == 0 || (iVar1 >= 13 && iVar1 <= 14)) || iVar1 == 24)
			{
				__LIB_17__::func_176(uParam0, func_172(1), __LIB_16__::func_807(18));
			}
		}
	}
	return 0;
}

void func_124()
{
	__LIB_3__::func_524(&iLocal_673);
}

void func_125(bool bParam0)
{
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_683))
		{
			__LIB_17__::func_20(&iLocal_683, bParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_684))
		{
			__LIB_17__::func_20(&iLocal_684, bParam0);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_683))
		{
			if (!TASK::_0xBEDBE39B5FD98FD6(iLocal_683) && !PED::_0x77525BBF433F2CD6(iLocal_683))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(iLocal_683, -1082130432 /* Float: -1f */, 0, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_683, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_683);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_684))
		{
			if (!TASK::_0xBEDBE39B5FD98FD6(iLocal_684) && !PED::_0x77525BBF433F2CD6(iLocal_684))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(iLocal_684, -1082130432 /* Float: -1f */, 0, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_684, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_684);
		}
		func_263();
	}
}

void func_126()
{
	__LIB_2__::func_603(&(Local_14.f_3), &(Local_14.f_41[0 /*59*/]), &(Local_14.f_41[0 /*59*/].f_21), 1, 1);
	__LIB_2__::func_603(&(Local_14.f_3), &(Local_14.f_41[1 /*59*/]), &(Local_14.f_41[1 /*59*/].f_21), 1, 1);
}

void func_129()
{
	int iVar0;
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "SheriffBubble");
	PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_14.f_3, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	PED::SET_PED_KEEP_TASK(Local_14.f_3, true);
}

bool func_150(var uParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_281(iParam1, vVar3, iParam3))
	{
		return true;
	}
	return false;
}

bool func_162(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (__LIB_0__::func_120(iParam1) == 0)
	{
		return false;
	}
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		*uParam0 = __LIB_2__::func_965(iParam1, 1, 0, 0, 1, 1);
	}
	else
	{
		if (iParam6 != 1320127128)
		{
			__LIB_0__::func_862(*uParam0, iParam6);
		}
		if (bParam5)
		{
			PERSCHAR::_0x59C7AD6FEA2AC449(__LIB_0__::func_120(iParam1), vParam2);
		}
		return true;
	}
	return false;
}

void func_171()
{
	__LIB_17__::func_179(&(Local_14.f_205[0 /*36*/]), Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	__LIB_17__::func_179(&(Local_14.f_205[1 /*36*/]), Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "ARTHUR", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	__LIB_17__::func_179(&(Local_14.f_205[2 /*36*/]), Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	__LIB_17__::func_179(&(Local_14.f_205[3 /*36*/]), Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	__LIB_17__::func_179(&(Local_14.f_205[4 /*36*/]), Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	__LIB_17__::func_179(&(Local_14.f_205[5 /*36*/]), Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

int func_172(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 6)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

void func_174(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_385 = iParam1;
	func_292(uParam0, 0, 1);
	if (bParam2)
	{
		func_293(uParam0);
	}
}

int func_175(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_4__::func_231(*uParam0, iParam1, uParam3))
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
						return func_175(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

bool func_176(int iParam0)
{
	if (!(VOLUME::_DOES_VOLUME_EXIST(iParam0->f_161) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_161, true, 0)))
	{
		__LIB_19__::func_404(&Local_14, 0, 0);
		return false;
	}
	if (((((((__LIB_0__::func_27(Local_14.f_193, 32) && __LIB_0__::func_27(Local_14.f_193, 65536)) && !__LIB_0__::func_27(Local_14.f_193, 64)) && !__LIB_0__::func_27(Local_14.f_193, 128)) && !__LIB_0__::func_27(Local_14.f_193, 2048)) && (__LIB_0__::func_27(Local_14.f_193, 524288) || func_54(&Local_14) > 2.2f)) && !func_150(&(Local_14.f_3), &iLocal_698, 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */)) && !__LIB_16__::func_856(&(Local_14.f_3), &iLocal_699, 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */))
	{
		__LIB_19__::func_404(&Local_14, 0, 1);
		return true;
	}
	else
	{
		__LIB_19__::func_404(&Local_14, 0, 0);
	}
	return false;
}

void func_178(int iParam0)
{
	if (iParam0 == 0)
	{
		if (__LIB_0__::func_181())
		{
			__LIB_5__::func_469(Global_35, "GREET_GENERAL", -417894478, Local_14.f_3, 1, 0, 0, 1);
		}
		else
		{
			__LIB_5__::func_469(Global_35, "GREET_GENERAL", -417894478, Local_14.f_3, 1, 0, 0, 1);
		}
	}
	else if (iParam0 == 1)
	{
		if (__LIB_0__::func_181())
		{
			if (Local_14.f_1 == 0)
			{
				__LIB_5__::func_469(Global_35, "INSULT_MALE_CONV_PART1", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 2, 1);
			}
			else if (Local_14.f_1 == 1)
			{
				__LIB_5__::func_469(Global_35, "INSULT_MALE_CONV_PART1", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 10, 1);
			}
			else if (Local_14.f_1 == 2)
			{
				__LIB_5__::func_469(Global_35, "INSULT_MALE_CONV_PART1", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 20, 1);
			}
		}
		else
		{
			__LIB_5__::func_469(Global_35, "INSULT_MALE_CONV_PART2", -417894478, Local_14.f_3, 1, 0, 7, 1);
		}
	}
}

int func_221()
{
	struct<6> Var0;
	struct<6> Var6;
	if (iLocal_688 >= 2)
	{
		return 1;
	}
	if (iLocal_688 == 0)
	{
		if (func_365())
		{
			Var0 = { func_366(1) };
			vLocal_689 = { Var0.f_1 };
			PED::SET_PED_CONFIG_FLAG(iLocal_683, 130, false);
			TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_683, Var0, Var0.f_1, Var0.f_4, BUILTIN::FLOOR((Var0.f_5 * 1000f)), true, false, 0, -1f, false);
			__LIB_1__::func_148(&uLocal_685);
			iLocal_688++;
		}
	}
	else if (__LIB_0__::func_75(&uLocal_685) && __LIB_0__::func_265(&uLocal_685) >= 5f)
	{
		if (func_367())
		{
			__LIB_0__::func_37(&uLocal_685);
			Var6 = { func_366(0) };
			vLocal_692 = { Var6.f_1 };
			PED::SET_PED_CONFIG_FLAG(iLocal_684, 130, false);
			TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_684, Var6, Var6.f_1, Var6.f_4, BUILTIN::FLOOR((Var6.f_5 * 1000f)), true, false, 0, -1f, false);
			iLocal_688++;
		}
	}
	return 0;
}

void func_222()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_683))
	{
		if (((__LIB_0__::func_266(iLocal_683, vLocal_689, 9f, 1, 1) && !TASK::_0xBEDBE39B5FD98FD6(iLocal_683)) && !PED::_0x77525BBF433F2CD6(iLocal_683)) && __LIB_16__::func_856(&(Local_14.f_3), &iLocal_699, 2.5f, 2.5f))
		{
			TASK::CLEAR_PED_TASKS(iLocal_683, true, false);
			TASK::_TASK_MOVE_IN_TRAFFIC(iLocal_683, -1082130432 /* Float: -1f */, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_683, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_683);
		}
		else if (((!__LIB_0__::func_163(iLocal_683, -1098463898) || TASK::_0xBEDBE39B5FD98FD6(iLocal_683)) || PED::_0x77525BBF433F2CD6(iLocal_683)) || __LIB_0__::func_266(iLocal_683, vLocal_689, 1.5f, 1, 1))
		{
			PED::SET_PED_KEEP_TASK(iLocal_683, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_683);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_684))
	{
		if (((__LIB_0__::func_266(iLocal_684, vLocal_692, 9f, 1, 1) && !TASK::_0xBEDBE39B5FD98FD6(iLocal_684)) && !PED::_0x77525BBF433F2CD6(iLocal_684)) && __LIB_16__::func_856(&(Local_14.f_3), &iLocal_699, 2.5f, 2.5f))
		{
			TASK::CLEAR_PED_TASKS(iLocal_684, true, false);
			TASK::_TASK_MOVE_IN_TRAFFIC(iLocal_684, -1082130432 /* Float: -1f */, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_684, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_684);
		}
		else if (((!__LIB_0__::func_163(iLocal_684, -1098463898) || TASK::_0xBEDBE39B5FD98FD6(iLocal_684)) || PED::_0x77525BBF433F2CD6(iLocal_684)) || __LIB_0__::func_266(iLocal_684, vLocal_692, 1.5f, 1, 1))
		{
			PED::SET_PED_KEEP_TASK(iLocal_684, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_684);
		}
	}
}

int func_223(int iParam0)
{
	switch (iParam0->f_205.f_385)
	{
		case 1:
			return iParam0->f_205.f_217.f_1;
		case 2:
			return iParam0->f_205.f_273.f_1;
		case 3:
			return iParam0->f_205.f_301.f_1;
		case 4:
			return iParam0->f_205.f_329.f_1;
	}
	return -1;
}

bool func_225(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_386)
	{
		case 0:
			func_292(uParam0, func_369(uParam0, uParam1), 1);
			break;
		case 1:
			func_292(uParam0, func_370(uParam0, uParam1), 1);
			break;
		case 2:
			func_292(uParam0, func_371(uParam0, uParam1), 1);
			break;
		case 3:
			if (func_372(uParam0, uParam1))
			{
				func_292(uParam0, 4, 1);
			}
			break;
		case 4:
			if (!func_373(uParam0, 2))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_389 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_23);
				if (StackVal || StackVal)
				{
					func_374(uParam0, 2);
				}
			}
			else
			{
				func_292(uParam0, 5, 1);
			}
			break;
		case 5:
			if (!func_373(uParam0, 4))
			{
				if (func_375(uParam0, uParam1, iParam2))
				{
					func_374(uParam0, 4);
				}
			}
			if (!func_373(uParam0, 8))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_389 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_24);
				if (StackVal || StackVal)
				{
					func_374(uParam0, 8);
				}
			}
			if (func_373(uParam0, 4) && func_373(uParam0, 8))
			{
				func_292(uParam0, 6, 1);
			}
			break;
		case 6:
			if (!func_373(uParam0, 16))
			{
				if (func_376(uParam0, uParam1))
				{
					func_374(uParam0, 16);
				}
			}
			if (!func_373(uParam0, 32))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_389 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_25);
				if (StackVal || StackVal)
				{
					func_374(uParam0, 32);
				}
			}
			if (func_373(uParam0, 16) && func_373(uParam0, 32))
			{
				func_292(uParam0, 0, 1);
				return true;
			}
			break;
	}
	return false;
}

bool func_226(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 6)
	{
		return false;
	}
	return true;
}

void func_227(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED((*uParam0)[iVar0 /*36*/], false))
		{
			ANIMSCENE::ABORT_ANIM_SCENE((*uParam0)[iVar0 /*36*/], false);
		}
		iVar0++;
	}
}

int func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 60)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

void func_235(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, char* sParam12, int iParam13, int iParam14)
{
	func_25(uParam0);
	uParam0->f_12 = sParam1;
	*uParam0 = iParam2;
	uParam0->f_1 = iParam3;
	uParam0->f_2 = iParam4;
	uParam0->f_2.f_1 = iParam5;
	uParam0->f_13 = iParam6;
	uParam0->f_14 = sParam7;
	uParam0->f_15 = iParam8;
	uParam0->f_16 = sParam9;
	uParam0->f_17 = iParam10;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		uParam0->f_18 = "s_base";
	}
	else
	{
		uParam0->f_18 = sParam11;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
	{
		uParam0->f_19 = "s_base_end";
	}
	else
	{
		uParam0->f_19 = sParam12;
	}
	uParam0->f_20 = 0;
	uParam0->f_21 = iParam13;
	uParam0->f_22 = iParam14;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

int func_236(var uParam0)
{
	if (func_373(&(Local_14.f_205), 4))
	{
		__LIB_1__::func_993(&(Local_14.f_193), 32);
		return 1;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_643, true, 0))
	{
		func_17(&(Local_14.f_205), 1, 0);
		__LIB_1__::func_581(&(Local_14.f_193), 2048);
		func_242();
		return 1;
	}
	return 0;
}

int func_238(var uParam0)
{
	if (!__LIB_0__::func_27(Local_14.f_193, 2048))
	{
		__LIB_17__::func_318(&Local_14, 1);
	}
	if (!__LIB_0__::func_27(Local_14.f_193, 2048))
	{
		__LIB_1__::func_581(&(Local_14.f_193), 32);
		__LIB_1__::func_581(&(Local_14.f_193), 65536);
	}
	if (!__LIB_0__::func_75(&uLocal_650))
	{
		__LIB_1__::func_148(&uLocal_650);
		return 0;
	}
	if (!__LIB_0__::func_27(Local_14.f_193, 2048))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_643, true, 0))
		{
			__LIB_16__::func_820(uParam0, func_172(1), __LIB_16__::func_807(18));
			__LIB_1__::func_581(&(Local_14.f_193), 2048);
			__LIB_1__::func_993(&(Local_14.f_193), 32);
			bLocal_676 = true;
			func_242();
			return 1;
		}
		else if (__LIB_0__::func_27(Local_14.f_193, 64))
		{
			__LIB_16__::func_820(uParam0, func_172(1), __LIB_16__::func_807(7));
			__LIB_1__::func_581(&(Local_14.f_193), 2048);
			func_242();
			if (__LIB_0__::func_181())
			{
				__LIB_5__::func_469(Global_35, "GOT_MY_EYE_ON_YOU_POS", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 3, 1);
			}
			else
			{
				__LIB_5__::func_469(Global_35, "PLAYER_SURRENDER_AGAIN_NEAR", -417894478, Local_14.f_3, 1, "ARTHUR", 4, 1);
			}
			__LIB_1__::func_993(&(Local_14.f_193), 32);
			bLocal_676 = true;
		}
		else if (__LIB_0__::func_27(Local_14.f_193, 128))
		{
			__LIB_16__::func_820(uParam0, func_172(3), __LIB_16__::func_807(35));
			__LIB_1__::func_581(&(Local_14.f_193), 2048);
			func_242();
			if (__LIB_0__::func_181())
			{
				__LIB_5__::func_469(Global_35, "GOT_MY_EYE_ON_YOU_NEG", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 2, 1);
			}
			else
			{
				__LIB_5__::func_469(Global_35, "BUMP_MALE", -417894478, Local_14.f_3, 1, "ARTHUR", 7, 1);
			}
			__LIB_1__::func_993(&(Local_14.f_193), 32);
			bLocal_676 = true;
		}
		else if (__LIB_0__::func_265(&uLocal_650) >= 8f)
		{
			__LIB_1__::func_993(&(Local_14.f_193), 32);
			bLocal_676 = true;
			__LIB_16__::func_820(uParam0, func_172(3), __LIB_16__::func_807(35));
			__LIB_1__::func_581(&(Local_14.f_193), 2048);
			func_242();
			if (__LIB_0__::func_181())
			{
				__LIB_5__::func_469(Global_35, "GOT_MY_EYE_ON_YOU_NEG", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 2, 1);
			}
			else
			{
				__LIB_5__::func_469(Global_35, "BUMP_MALE", -417894478, Local_14.f_3, 1, "ARTHUR", 7, 1);
			}
		}
	}
	else if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
	{
		return 1;
	}
	return 0;
}

void func_240()
{
	if ((iLocal_673 == 0 && ENTITY::DOES_ENTITY_EXIST(Local_14.f_3)) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
	{
		iLocal_673 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INTERESTING_NEW"), Local_14.f_3, 0f, 30f, 30f, -1f, -1f, 180f, false, false, 4, -1);
	}
}

int func_241(var uParam0)
{
	if (func_385())
	{
		__LIB_16__::func_820(uParam0, func_172(1), __LIB_16__::func_807(11));
		return 1;
	}
	if (func_386(uParam0, 1))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_645, true, 0))
	{
		__LIB_16__::func_820(uParam0, func_172(1), __LIB_16__::func_807(9));
	}
	return 1;
}

void func_242()
{
	if (!__LIB_0__::func_27(Local_14.f_193, 131072))
	{
		if (Local_14.f_1 == 0)
		{
			__LIB_16__::func_783(22, 1);
		}
		else if (Local_14.f_1 == 1)
		{
			__LIB_16__::func_783(22, 2);
		}
		else
		{
			__LIB_16__::func_783(22, 12);
		}
		__LIB_1__::func_581(&(Local_14.f_193), 131072);
		__LIB_16__::func_827(22);
	}
}

int func_243(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_16(&(Local_14.f_205), 4))
	{
		return 1;
	}
	if (((Local_14.f_622 && __LIB_16__::func_825(&(Local_14.f_601))) && !__LIB_16__::func_809(&(Local_14.f_601))) && !func_16(&(Local_14.f_205), 4))
	{
		__LIB_1__::func_581(&(Local_14.f_193), 8192);
		__LIB_16__::func_820(uParam0, func_172(-1), __LIB_16__::func_807(-1));
		func_390(-1);
		return 1;
	}
	if (func_385())
	{
		__LIB_16__::func_820(uParam0, func_172(1), __LIB_16__::func_807(11));
		func_390(11);
		return 1;
	}
	if (!__LIB_0__::func_27(Local_14.f_193, 8) && !(func_54(&Local_14) <= 2.2f && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_643, true, 0)))
	{
		func_391(iLocal_654, &iVar0, &iVar1);
		if (iVar0 == -1 || iVar1 == -1)
		{
			func_242();
			__LIB_1__::func_581(&(Local_14.f_193), 8);
		}
		else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_645, true, 0) && !__LIB_3__::func_291(Global_35, 1))
		{
			__LIB_16__::func_820(uParam0, func_172(iVar0), __LIB_16__::func_807(iVar1));
			func_390(iVar1);
			return 1;
		}
	}
	if (__LIB_0__::func_27(Local_14.f_193, 2) && __LIB_0__::func_27(Local_14.f_193, 8))
	{
		if (!__LIB_0__::func_75(&uLocal_662))
		{
			__LIB_1__::func_148(&uLocal_662);
		}
		if (__LIB_1__::func_313(&uLocal_662, 56f))
		{
			__LIB_1__::func_581(&(Local_14.f_193), 8192);
			__LIB_16__::func_820(uParam0, func_172(-1), __LIB_16__::func_807(-1));
			func_390(-1);
			func_242();
			return 1;
		}
	}
	if (func_386(uParam0, 0))
	{
		func_390(func_234(uParam0->f_2.f_1));
		return 1;
	}
	if (!__LIB_0__::func_27(Local_14.f_193, 8) && func_54(&Local_14) > 2.2f)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 100);
		if ((iVar2 >= 35 && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_646, true, 0)) && !__LIB_3__::func_291(Global_35, 1))
		{
			iVar2 = __LIB_9__::func_844(0, 4, iLocal_648);
			iLocal_648 = iVar2;
			switch (iVar2)
			{
				case 0:
					__LIB_16__::func_820(uParam0, func_172(0), __LIB_16__::func_807(1));
					func_390(1);
					return 1;
				case 1:
					__LIB_16__::func_820(uParam0, func_172(0), __LIB_16__::func_807(2));
					func_390(2);
					return 1;
				case 2:
					__LIB_16__::func_820(uParam0, func_172(0), __LIB_16__::func_807(3));
					func_390(3);
					return 1;
				case 3:
					__LIB_16__::func_820(uParam0, func_172(2), __LIB_16__::func_807(25));
					func_390(25);
					return 1;
				case 4:
					__LIB_16__::func_820(uParam0, func_172(2), __LIB_16__::func_807(26));
					func_390(26);
					return 1;
			}
		}
	}
	return 0;
}

int func_244(var uParam0)
{
	func_394(1);
	__LIB_0__::func_37(&uLocal_669);
	func_395();
	return 1;
}

int func_246(var uParam0)
{
	if (!__LIB_0__::func_75(&uLocal_669))
	{
		__LIB_1__::func_148(&uLocal_669);
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
	{
		return 0;
	}
	if ((func_396(&Local_14) && (__LIB_0__::func_265(&uLocal_669) >= fLocal_672 && func_397())) || func_398(&Local_14))
	{
		__LIB_0__::func_37(&uLocal_669);
		return 1;
	}
	return 0;
}

int func_247(var uParam0)
{
	if (!bLocal_675 && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3))
	{
		bLocal_674 = true;
		func_399();
		bLocal_675 = true;
	}
	else if (bLocal_675 && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3))
	{
		bLocal_675 = false;
		return 1;
	}
	return 0;
}

int func_248(var uParam0)
{
	if (Local_14.f_205.f_386 == 5)
	{
		if (func_373(&(Local_14.f_205), 4))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_643, true, 0))
	{
		func_17(&(Local_14.f_205), 1, 0);
		__LIB_1__::func_581(&(Local_14.f_193), 2048);
		func_242();
		return 1;
	}
	return 0;
}

int func_249(var uParam0)
{
	if (func_373(&(Local_14.f_205), 4))
	{
		__LIB_1__::func_993(&(Local_14.f_193), 32);
		return 1;
	}
	return 0;
}

int func_250(var uParam0)
{
	if (!__LIB_0__::func_27(Local_14.f_193, 2048))
	{
		__LIB_17__::func_318(&Local_14, 1);
		__LIB_1__::func_581(&(Local_14.f_193), 32);
		__LIB_1__::func_581(&(Local_14.f_193), 65536);
	}
	if (!__LIB_0__::func_75(&uLocal_650))
	{
		__LIB_1__::func_148(&uLocal_650);
		return 0;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_643, true, 0))
	{
		__LIB_16__::func_820(uParam0, func_172(1), __LIB_16__::func_807(18));
		__LIB_1__::func_581(&(Local_14.f_193), 2048);
		__LIB_1__::func_993(&(Local_14.f_193), 32);
		bLocal_676 = true;
		func_242();
		return 1;
	}
	else if (__LIB_0__::func_27(Local_14.f_193, 64))
	{
		__LIB_16__::func_820(uParam0, func_172(1), __LIB_16__::func_807(16));
		__LIB_1__::func_581(&(Local_14.f_193), 2048);
		__LIB_1__::func_993(&(Local_14.f_193), 32);
		bLocal_676 = true;
		func_242();
		return 1;
	}
	else if (__LIB_0__::func_27(Local_14.f_193, 128))
	{
		__LIB_16__::func_820(uParam0, func_172(1), __LIB_16__::func_807(17));
		__LIB_1__::func_581(&(Local_14.f_193), 2048);
		__LIB_1__::func_993(&(Local_14.f_193), 32);
		bLocal_676 = true;
		func_242();
		return 1;
	}
	else if (__LIB_0__::func_265(&uLocal_650) >= 8f)
	{
		__LIB_1__::func_993(&(Local_14.f_193), 32);
		bLocal_676 = true;
		__LIB_16__::func_820(uParam0, func_172(1), __LIB_16__::func_807(16));
		__LIB_1__::func_581(&(Local_14.f_193), 2048);
		func_242();
		return 1;
	}
	return 0;
}

int func_251(var uParam0)
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar0)
	{
		case 0:
			__LIB_16__::func_820(uParam0, func_172(5), __LIB_16__::func_807(51));
			break;
		case 1:
			__LIB_16__::func_820(uParam0, func_172(5), __LIB_16__::func_807(52));
			break;
		case 2:
			__LIB_16__::func_820(uParam0, func_172(5), __LIB_16__::func_807(53));
			break;
		case 3:
			__LIB_16__::func_820(uParam0, func_172(5), __LIB_16__::func_807(54));
			break;
		case 4:
			__LIB_16__::func_820(uParam0, func_172(5), __LIB_16__::func_807(55));
			break;
	}
	return 1;
}

int func_252(var uParam0)
{
	if (iLocal_655 >= 3)
	{
		return func_251(uParam0);
	}
	return 1;
}

int func_253(var uParam0)
{
	__LIB_1__::func_581(&(Local_14.f_193), 512);
	__LIB_16__::func_820(uParam0, func_172(-1), __LIB_16__::func_807(-1));
	return 1;
}

int func_254(var uParam0)
{
	if (__LIB_0__::func_27(Local_14.f_193, 33554432))
	{
		func_243(uParam0);
		__LIB_1__::func_993(&(Local_14.f_193), 33554432);
	}
	return 1;
}

int func_257()
{
	int iVar0;
	int iVar1;
	struct<9> Var2;
	int iVar19;
	iVar0 = 1200;
	iVar19 = 0;
	while (iVar19 < 24)
	{
		if (LAW::_0xB527099D1E1EED49(PLAYER::PLAYER_ID(), iVar19, &Var2))
		{
			if (__LIB_5__::func_235(115, 1, 1) != Var2.f_7)
			{
			}
			else
			{
				if (Var2.f_8 < iVar0)
				{
					if (LAW::_0xDAEFDFDB2AEECE37(Var2, 0) == 2)
					{
						iVar1 += 3;
					}
					else if (LAW::_0xDAEFDFDB2AEECE37(Var2, 0) == 1)
					{
						iVar1 += 2;
					}
					else
					{
						iVar1++;
					}
				}
				Jump @115; //curOff = 108
				iVar19 = 24;
			}
			iVar19++;
			if (iVar1 >= 6)
			{
				return 3;
			}
			else if (iVar1 >= 4)
			{
				return 2;
			}
			else if (iVar1 >= 2)
			{
				return 1;
			}
			return 0;
		}
	}
}

int func_258(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iParam1)
	{
		case 1:
			iVar1 = __LIB_0__::func_23();
			iVar2 = __LIB_0__::func_41(iVar1);
			if (iVar2 <= 5 || iVar2 >= 22)
			{
				__LIB_16__::func_814(uParam0, func_172(4), __LIB_16__::func_807(42));
			}
			else
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				switch (iVar0)
				{
					case 0:
						__LIB_16__::func_814(uParam0, func_172(4), __LIB_16__::func_807(39));
						break;
					case 1:
						__LIB_16__::func_814(uParam0, func_172(4), __LIB_16__::func_807(40));
						break;
					case 2:
						__LIB_16__::func_814(uParam0, func_172(4), __LIB_16__::func_807(41));
						break;
				}
			}
			break;
		case 2:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					__LIB_16__::func_814(uParam0, func_172(4), __LIB_16__::func_807(43));
					break;
				case 1:
					__LIB_16__::func_814(uParam0, func_172(4), __LIB_16__::func_807(44));
					break;
				case 2:
					__LIB_16__::func_814(uParam0, func_172(4), __LIB_16__::func_807(45));
					break;
				case 3:
					__LIB_16__::func_814(uParam0, func_172(4), __LIB_16__::func_807(46));
					break;
			}
			break;
		case 3:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					__LIB_16__::func_814(uParam0, func_172(4), __LIB_16__::func_807(47));
					break;
				case 1:
					__LIB_16__::func_814(uParam0, func_172(4), __LIB_16__::func_807(48));
					break;
				case 2:
					__LIB_16__::func_814(uParam0, func_172(4), __LIB_16__::func_807(49));
					break;
				case 3:
					__LIB_16__::func_814(uParam0, func_172(4), __LIB_16__::func_807(50));
					break;
			}
			break;
	}
	return 1;
}

void func_263()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	vVar7 = { __LIB_16__::func_870(Local_14, Local_14.f_1, 0) };
	iVar4 = ENTITY::_0x59B57C4B06531E1E(vVar7, 8f, iVar0, 1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar0);
		iVar2 = iVar1;
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			if ((((PED::IS_PED_HUMAN(iVar2) && !PED::IS_PED_A_PLAYER(iVar2)) && iVar2 != Local_14.f_3) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, true)) && ((((PED::_IS_PED_USING_SCENARIO_HASH(iVar2, joaat("WORLD_HUMAN_FAN")) || PED::_IS_PED_USING_SCENARIO_HASH(iVar2, joaat("WORLD_HUMAN_SMOKE"))) || PED::_IS_PED_USING_SCENARIO_HASH(iVar2, joaat("WORLD_HUMAN_STARE_STOIC"))) || PED::_IS_PED_USING_SCENARIO_HASH(iVar2, joaat("WORLD_HUMAN_STAND_WAITING"))) || __LIB_0__::func_163(iVar2, -1098463898)))
			{
				if (!TASK::_0xBEDBE39B5FD98FD6(iVar2) && !PED::_0x77525BBF433F2CD6(iVar2))
				{
					TASK::_TASK_MOVE_IN_TRAFFIC(iVar2, -1082130432 /* Float: -1f */, 0, 0);
					iVar6++;
				}
			}
			iVar5++;
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

bool func_281(int iParam0, vector3 vParam1, float fParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*iParam0))
	{
		*iParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, *iParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*iParam0);
		return true;
	}
	ITEMSET::_CLEAR_ITEMSET(*iParam0);
	return false;
}

void func_292(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_386 = iParam1;
	if (bParam2)
	{
		func_421(uParam0);
	}
}

void func_293(var uParam0)
{
	uParam0->f_388 = 0;
}

bool func_365()
{
	vector3 vVar0;
	var uVar3;
	vVar0 = { func_464() };
	if (!__LIB_0__::func_86(vVar0))
	{
		func_465(&iLocal_683, iLocal_682, &uVar3, vVar0, 0f, 1, 0, 1);
		return true;
	}
	return false;
}

struct<6> func_366(bool bParam0)
{
	struct<6> Var0;
	if (bParam0)
	{
		if (Local_14.f_1 == 0)
		{
			Var0 = joaat("WORLD_HUMAN_SMOKE");
			Var0.f_1 = { -5508.813f, -2931.202f, -3.165f };
			Var0.f_4 = 41.901f;
			Var0.f_5 = 120f;
		}
		else if (Local_14.f_1 == 1)
		{
			Var0 = joaat("WORLD_HUMAN_STARE_STOIC");
			Var0.f_1 = { -5494.188f, -2953.978f, -2.872f };
			Var0.f_4 = 154.544f;
			Var0.f_5 = 120f;
		}
		else
		{
			Var0 = joaat("WORLD_HUMAN_STARE_STOIC");
			Var0.f_1 = { -5496.852f, -2939.842f, -2.247f };
			Var0.f_4 = -78.588f;
			Var0.f_5 = 120f;
		}
	}
	else if (Local_14.f_1 == 0)
	{
		Var0 = joaat("WORLD_HUMAN_FAN");
		Var0.f_1 = { -5511.769f, -2931.98f, -3.242f };
		Var0.f_4 = -1.995f;
		Var0.f_5 = 100f;
	}
	else if (Local_14.f_1 == 1)
	{
		Var0 = joaat("WORLD_HUMAN_STAND_WAITING");
		Var0.f_1 = { -5496.233f, -2954.071f, -2.819f };
		Var0.f_4 = 167.403f;
		Var0.f_5 = 100f;
	}
	else
	{
		Var0 = joaat("WORLD_HUMAN_FAN");
		Var0.f_1 = { -5495.7f, -2941.675f, -2.211f };
		Var0.f_4 = -48.996f;
		Var0.f_5 = 100f;
	}
	return Var0;
}

bool func_367()
{
	vector3 vVar0;
	var uVar3;
	vVar0 = { func_466() };
	if (!__LIB_0__::func_86(vVar0))
	{
		func_465(&iLocal_684, iLocal_681, &uVar3, vVar0, 0f, 2, 0, 1);
		return true;
	}
	return false;
}

int func_369(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	uParam1->f_27 = 0;
	if (func_468(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_469(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
		{
			__LIB_16__::func_821(uParam0[iVar1 /*36*/], uParam1->f_12);
		}
		else
		{
			__LIB_16__::func_821(uParam0[iVar1 /*36*/], 0);
		}
		return 2;
	}
	return 1;
}

int func_370(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	if (func_468(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_469(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED((*uParam0)[iVar1 /*36*/], false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED((*uParam0)[iVar1 /*36*/], false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar1 /*36*/], uParam1->f_12);
		}
		else
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar1 /*36*/], (uParam0[iVar1 /*36*/])->f_2);
		}
	}
	return 2;
}

int func_371(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	if (func_468(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_469(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false))
	{
		__LIB_16__::func_822(uParam0[iVar1 /*36*/]);
		return 3;
	}
	return 4;
}

bool func_372(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	if (func_468(uParam0, uParam1, 0))
	{
		return true;
	}
	uVar0 = *uParam1;
	if (!func_469(uVar0, &iVar1))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar1 /*36*/], true))
	{
		__LIB_16__::func_823(uParam0[iVar1 /*36*/]);
		return true;
	}
	return false;
}

bool func_373(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_387, iParam1);
}

void func_374(var uParam0, int iParam1)
{
	__LIB_1__::func_581(&(uParam0->f_387), iParam1);
}

bool func_375(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	uVar0 = *uParam1;
	if (func_468(uParam0, uParam1, 0))
	{
		return true;
	}
	if (!func_469(uVar0, &iVar1))
	{
		return true;
	}
	if (uParam1->f_20 >= 5)
	{
		if (func_16(uParam0, 2) && iParam2 != 4)
		{
			func_473(uParam0, uParam1);
			return true;
		}
		else if ((uParam0->f_389 && func_16(uParam0, 1)) && iParam2 != 2)
		{
			func_473(uParam0, uParam1);
			return true;
		}
		if (iParam2 != 5)
		{
			if ((!uParam0->f_389 && func_16(uParam0, 1)) && iParam2 != 2)
			{
				func_473(uParam0, uParam1);
				return true;
			}
			if (func_16(uParam0, 4) && iParam2 != 3)
			{
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING((uParam0[iVar1 /*36*/])->f_3))
				{
					func_473(uParam0, uParam1);
					return true;
				}
			}
		}
	}
	switch (uParam1->f_20)
	{
		case 0:
			if ((uParam0[iVar1 /*36*/])->f_32)
			{
				uParam1->f_20 = 1;
			}
			else
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED((*uParam0)[iVar1 /*36*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE((*uParam0)[iVar1 /*36*/]);
				}
				uParam1->f_20 = 2;
			}
			return false;
		case 1:
			if (__LIB_4__::func_273(Global_35, (*uParam0)[iVar1 /*36*/], (uParam0[iVar1 /*36*/])->f_33, uParam1->f_12, &((uParam0[iVar1 /*36*/])->f_34), 1065353216 /* Float: 1f */, 1, 0, 1))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED((*uParam0)[iVar1 /*36*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE((*uParam0)[iVar1 /*36*/]);
				}
				else
				{
					uParam1->f_20 = 2;
				}
			}
			return false;
		case 2:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547((*uParam0)[iVar1 /*36*/], uParam1->f_12) && !ANIMSCENE::_0x0DF57F86FE71DBE5((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE((*uParam0)[iVar1 /*36*/], uParam1->f_12);
			}
			uParam1->f_20 = 3;
			return false;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				uParam1->f_20 = 4;
			}
			return false;
		case 4:
			if (!ANIMSCENE::_0x1F0E401031E20146((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_12, true);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_14))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_14, uParam1->f_13, false);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_16, uParam1->f_15, false);
				}
			}
			uParam1->f_20 = 5;
			return false;
		case 5:
			func_473(uParam0, uParam1);
			uParam1->f_20 = 6;
			return false;
		case 6:
			if (iParam2 != 5)
			{
				switch (uParam1->f_21)
				{
					case 0:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1))
						{
							return true;
						}
						break;
					case 1:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 2:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1))
						{
							return true;
						}
						break;
					case 3:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 4:
						if (ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1) || ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1))
						{
							return true;
						}
						break;
					case 5:
						if ((ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_19, 1) || ANIMSCENE::_0x8D81E7824B7753F7((*uParam0)[iVar1 /*36*/], uParam1->f_18, 1)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED((*uParam0)[iVar1 /*36*/], false) || ANIMSCENE::_0x34A0671BE613D3D0((*uParam0)[iVar1 /*36*/]))
				{
					return true;
				}
			}
			else if (!func_16(uParam0, 8))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_376(var uParam0, var uParam1)
{
	__LIB_16__::func_824(uParam1, &(uParam0->f_245));
	return true;
}

bool func_385()
{
	if (!bLocal_674)
	{
		if (func_54(&Local_14) <= 15f && PED::IS_PED_FACING_PED(Local_14.f_3, Global_35, 120f))
		{
			if (__LIB_11__::func_3())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_386(var uParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_643, true, 0) && !__LIB_3__::func_291(Global_35, 1))
	{
		if ((__LIB_0__::func_27(Local_14.f_193, 2) && __LIB_0__::func_27(Local_14.f_193, 8)) || func_54(&Local_14) <= 2.2f)
		{
			if (func_54(&Local_14) <= 2.2f || __LIB_0__::func_27(Local_14.f_193, 32768))
			{
				fVar0 = 0f;
			}
			else
			{
				fVar0 = 7f;
			}
			if (!__LIB_0__::func_75(&uLocal_656))
			{
				__LIB_1__::func_148(&uLocal_656);
			}
			if (__LIB_1__::func_313(&uLocal_656, fVar0) || bParam1)
			{
				if (bParam1)
				{
					__LIB_0__::func_37(&uLocal_656);
				}
				iVar1 = __LIB_9__::func_844(0, 5, iLocal_649);
				iLocal_649 = iVar1;
				switch (iVar1)
				{
					case 0:
						__LIB_16__::func_820(uParam0, func_172(3), __LIB_16__::func_807(32));
						break;
					case 1:
						__LIB_16__::func_820(uParam0, func_172(3), __LIB_16__::func_807(33));
						break;
					case 2:
						__LIB_16__::func_820(uParam0, func_172(3), __LIB_16__::func_807(34));
						break;
					case 3:
						__LIB_16__::func_820(uParam0, func_172(3), __LIB_16__::func_807(35));
						break;
					case 4:
						__LIB_16__::func_820(uParam0, func_172(3), __LIB_16__::func_807(36));
						break;
				}
				if (fVar0 == 0f)
				{
					iLocal_655++;
				}
				__LIB_1__::func_148(&uLocal_677);
				return true;
			}
		}
	}
	return false;
}

void func_390(int iParam0)
{
	if ((iParam0 != 9 && iParam0 != 10) && iParam0 != 38)
	{
		func_394(0);
	}
}

void func_391(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = -1;
	*iParam2 = -1;
	if (Local_14.f_1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				*iParam1 = 0;
				*iParam2 = 4;
				break;
			case 1:
				*iParam1 = 0;
				*iParam2 = 5;
				break;
			case 2:
				*iParam1 = 0;
				*iParam2 = 6;
				break;
		}
	}
	else if (Local_14.f_1 == 1)
	{
		switch (iParam0)
		{
			case 0:
				*iParam1 = 1;
				*iParam2 = 19;
				break;
			case 1:
				*iParam1 = 1;
				*iParam2 = 20;
				break;
			case 2:
				*iParam1 = 1;
				*iParam2 = 21;
				break;
			case 3:
				*iParam1 = 1;
				*iParam2 = 22;
				break;
			case 4:
				*iParam1 = 1;
				*iParam2 = 23;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*iParam1 = 2;
				*iParam2 = 27;
				break;
			case 1:
				*iParam1 = 2;
				*iParam2 = 28;
				break;
			case 2:
				*iParam1 = 2;
				*iParam2 = 29;
				break;
		}
	}
}

void func_394(bool bParam0)
{
	if (!bParam0)
	{
		__LIB_1__::func_993(&(Local_14.f_193), 65536);
	}
	else
	{
		__LIB_1__::func_581(&(Local_14.f_193), 65536);
	}
}

void func_395()
{
	fLocal_672 = MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 30f);
}

bool func_396(var uParam0)
{
	if (uParam0->f_205.f_386 == 5)
	{
		if (func_373(&(uParam0->f_205), 4))
		{
			return true;
		}
	}
	return false;
}

bool func_397()
{
	float fVar0;
	if (MISC::ARE_STRINGS_EQUAL(Local_14.f_205.f_217.f_12, "Pl_IG1_Loop01"))
	{
		if (func_483(&Local_14))
		{
			fVar0 = func_484(&Local_14);
			if (fVar0 < 0.8188f)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

bool func_398(var uParam0)
{
	if (((func_16(&(uParam0->f_205), 2) || func_16(&(uParam0->f_205), 4)) || func_16(&(uParam0->f_205), 1)) || func_16(&(uParam0->f_205), 8))
	{
		return true;
	}
	return false;
}

void func_399()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar0 = __LIB_0__::func_309(iVar0, 1, 2);
	__LIB_5__::func_469(Local_14.f_3, "GUN", -417894478, Global_35, 1, "TWD_Sheriff", iVar0, 1);
}

void func_421(var uParam0)
{
	uParam0->f_387 = 0;
}

Vector3 func_464()
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		vVar1 = { func_512(iVar0) };
		if (!CAM::IS_SPHERE_VISIBLE(vVar1, 1.5f))
		{
			return vVar1;
		}
		iVar0++;
	}
	return 0f, 0f, 0f;
}

int func_465(int iParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (*uParam2)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	if (!bParam8)
	{
		*iParam0 = __LIB_8__::func_931(iParam1, vParam3, fParam6, 0, 1, bParam7, 1, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		*iParam0 = __LIB_8__::func_931(iParam1, vParam3, fParam6, 0, 1, bParam7, 1, 1, bParam9, 1, 1, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*uParam2 = 1;
		return 1;
	}
	return 0;
}

Vector3 func_466()
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		vVar1 = { func_514(iVar0) };
		if (!CAM::IS_SPHERE_VISIBLE(vVar1, 1.5f))
		{
			return vVar1;
		}
		iVar0++;
	}
	return 0f, 0f, 0f;
}

bool func_468(var uParam0, var uParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	uVar0 = *uParam1;
	if (bParam2)
	{
		if (func_16(uParam0, 2))
		{
			return true;
		}
		if (func_16(uParam0, 1))
		{
			return true;
		}
	}
	if (!func_469(uVar0, &iVar1))
	{
		return true;
	}
	if ((uParam0[iVar1 /*36*/])->f_35)
	{
		return true;
	}
	if (uParam1->f_26 == 1)
	{
		return true;
	}
	else if (uParam1->f_26 == 2)
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
	{
		uParam1->f_26 = 1;
		return true;
	}
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar1 /*36*/], true)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false))
	{
		if (!ANIMSCENE::_0xA9016536015DE29D((*uParam0)[iVar1 /*36*/], uParam1->f_12))
		{
			uParam1->f_26 = 1;
			return true;
		}
		else
		{
			uParam1->f_26 = 2;
			return false;
		}
	}
	return false;
}

bool func_469(int iParam0, int iParam1)
{
	if (func_226(iParam0))
	{
		*iParam1 = iParam0;
		return true;
	}
	return false;
}

int func_473(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = uParam0->f_245.f_1;
	iVar1 = uParam1->f_1;
	iVar2 = uParam0->f_245;
	iVar3 = *uParam1;
	if (iVar2 != iVar3)
	{
		return func_515(uParam0, iVar2, &(uParam1->f_27));
	}
	if (iVar0 != iVar1)
	{
		return func_516(uParam0);
	}
	return 1;
}

bool func_483(var uParam0)
{
	int iVar0;
	iVar0 = -1;
	if (func_521(uParam0, &iVar0, 1))
	{
		return ANIMSCENE::_0x1F0E401031E20146(iVar0, func_522(uParam0));
	}
	return false;
}

float func_484(var uParam0)
{
	int iVar0;
	switch (uParam0->f_205.f_385)
	{
		case 1:
			iVar0 = uParam0->f_205[uParam0->f_205.f_217 /*36*/];
			break;
		case 2:
			iVar0 = uParam0->f_205[uParam0->f_205.f_273 /*36*/];
			break;
		case 3:
			iVar0 = uParam0->f_205[uParam0->f_205.f_301 /*36*/];
			break;
		case 4:
			iVar0 = uParam0->f_205[uParam0->f_205.f_329 /*36*/];
			break;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return 0f;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar0, true, false))
	{
		return 0f;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false))
	{
		return ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iVar0);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iVar0, false))
	{
		return 1f;
	}
	return 0f;
}

Vector3 func_512(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -5511.963f, -2916.757f, -2.75131f;
		case 1:
			return -5509.715f, -2909.147f, 0.6699f;
		case 2:
			return -5488.088f, -2935.998f, -1.40398f;
		case 3:
			return -5482.864f, -2934.063f, -1.3961f;
		case 4:
			return -5532.449f, -2927.814f, -2.36092f;
		case 5:
			return -5526.629f, -2927.384f, -2.36093f;
		case 6:
			return -5483.338f, -2959.907f, -2.68245f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_514(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -5511.963f, -2916.757f, -2.75131f;
		case 1:
			return -5509.715f, -2909.147f, 0.6699f;
		case 2:
			return -5488.088f, -2935.998f, -1.40398f;
		case 3:
			return -5482.864f, -2934.063f, -1.3961f;
		case 4:
			return -5489.375f, -2909.036f, -2.15232f;
		case 5:
			return -5530.926f, -2964.578f, -2.25008f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_515(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	if (*uParam2)
	{
		return 1;
	}
	if (!func_469(iParam1, &iVar0))
	{
		return 0;
	}
	if ((uParam0[iVar0 /*36*/])->f_35)
	{
		*uParam2 = 1;
		return 1;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]) && (ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar0 /*36*/], true) || ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar0 /*36*/], true, false)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0[iVar0 /*36*/])->f_2))
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar0 /*36*/], (uParam0[iVar0 /*36*/])->f_2);
			*uParam2 = 1;
		}
		else
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar0 /*36*/], 0);
			*uParam2 = 1;
		}
	}
	return 1;
}

int func_516(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0->f_245;
	if (uParam0->f_245.f_27)
	{
		return 1;
	}
	if (func_469(iVar0, &iVar1))
	{
		if (__LIB_16__::func_829(uParam0[iVar1 /*36*/], uParam0->f_245.f_12) || uParam0->f_245.f_26 == 1)
		{
			uParam0->f_245.f_27 = 1;
			return 1;
		}
	}
	return 0;
}

bool func_521(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_205.f_385)
	{
		case 1:
			*iParam1 = uParam0->f_205[uParam0->f_205.f_217 /*36*/];
			break;
		case 2:
			*iParam1 = uParam0->f_205[uParam0->f_205.f_273 /*36*/];
			break;
		case 3:
			*iParam1 = uParam0->f_205[uParam0->f_205.f_301 /*36*/];
			break;
		case 4:
			*iParam1 = uParam0->f_205[uParam0->f_205.f_329 /*36*/];
			break;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam1))
	{
		*iParam1 = -1;
		return false;
	}
	if (bParam2 && ((!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam1, true, false) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam1, false)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*iParam1, false)))
	{
		*iParam1 = -1;
		return false;
	}
	return true;
}

char* func_522(var uParam0)
{
	switch (uParam0->f_205.f_385)
	{
		case 1:
			return uParam0->f_205.f_217.f_12;
		case 2:
			return uParam0->f_205.f_273.f_12;
		case 3:
			return uParam0->f_205.f_301.f_12;
		case 4:
			return uParam0->f_205.f_329.f_12;
	}
	return "";
}

