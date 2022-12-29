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
	struct<553> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 1, 2, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1232348144, 0, 0, 0, 4, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_578 = 24;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
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
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 1065353216;
	var uLocal_681 = 1065353216;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 1065353216;
	var uLocal_686 = 1065353216;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 1065353216;
	var uLocal_691 = 1065353216;
	var uLocal_692 = 0;
	var uLocal_693 = 1040187392;
	var uLocal_694 = 1040187392;
	var uLocal_695 = -1;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = -1082130432;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	int iLocal_714 = 0;
	int iLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	int iLocal_725 = 0;
	var uLocal_726 = 0;
	int iLocal_727 = 0;
	var uLocal_728 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_569 = joaat("CS_SUNWORSHIPPER");
	iLocal_725 = -1;
	func_1(&(Local_14.f_205));
	func_2(&Local_14);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_3(&Local_14);
	}
	while (true)
	{
		__LIB_0__::func_11(&Local_14);
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
				if (Local_14.f_528 && ENTITY::DOES_ENTITY_EXIST(Local_14.f_3))
				{
					if (Local_14.f_202)
					{
						__LIB_17__::func_303(&Local_14);
					}
					if (Local_14.f_527)
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
				if ((func_14(&Local_14) || __LIB_16__::func_842(Local_14, Local_14.f_3, 1, 1)) && Local_14.f_550 == 0)
				{
					if (!__LIB_17__::func_314(&(Local_14.f_205), 8))
					{
						func_17(&(Local_14.f_205), 8, 0);
					}
				}
				else if (__LIB_17__::func_314(&(Local_14.f_205), 8))
				{
					func_18(&(Local_14.f_205), 8);
				}
				if ((__LIB_17__::func_314(&(Local_14.f_205), 2) || (Local_14.f_205.f_317 && __LIB_17__::func_314(&(Local_14.f_205), 1))) || Local_14.f_205.f_313 != 5)
				{
					if (__LIB_16__::func_838(Local_14, Local_14.f_1, &(Local_14.f_3), &(Local_14.f_4), &(Local_14.f_552), 0, 1097859072 /* Float: 15f */, 0))
					{
						__LIB_0__::func_11(&Local_14);
					}
					if (Local_14.f_527)
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
	uParam0->f_321 = 2527;
	func_25(&(uParam0->f_145));
	func_25(&(uParam0->f_173));
	func_25(&(uParam0->f_201));
	func_25(&(uParam0->f_229));
	func_25(&(uParam0->f_257));
}

void func_2(var uParam0)
{
	int iVar0;
	func_26();
	func_27();
	__LIB_16__::func_799(&(uParam0->f_529));
	__LIB_1__::func_406(&(Local_14.f_11), 1);
	__LIB_1__::func_398(&(Local_14.f_11), 1);
	__LIB_1__::func_403(&(Local_14.f_11), 1);
	__LIB_8__::func_731(&(Local_14.f_11), 1);
	__LIB_1__::func_393(&(Local_14.f_11), 1);
	__LIB_2__::func_828(&(Local_14.f_11), 1);
	__LIB_1__::func_402(&(Local_14.f_11), 1);
	__LIB_1__::func_401(&(Local_14.f_11), 1);
	__LIB_1__::func_404(&(Local_14.f_11), 1);
	__LIB_1__::func_413(&(Local_14.f_11), 1);
	__LIB_2__::func_956(&(Local_14.f_11), 1);
	__LIB_1__::func_396(&(Local_14.f_11), 1);
	__LIB_8__::func_731(&(Local_14.f_11), 1);
	__LIB_2__::func_830(&(Local_14.f_11), 1);
	__LIB_10__::func_590(&(Local_14.f_11), 0);
	__LIB_1__::func_399(&(Local_14.f_11), 0);
	__LIB_1__::func_397(&(Local_14.f_11), 0);
	__LIB_2__::func_619(&(Local_14.f_11), 0);
	iVar0 = __LIB_11__::func_133(24);
	if (((iVar0 == 2 || iVar0 == 5) || iVar0 == 7) || iVar0 == 10)
	{
		__LIB_2__::func_906(&(Local_14.f_11), 80);
		__LIB_9__::func_262(&(Local_14.f_11), 1);
		__LIB_17__::func_315(&(Local_14.f_11), 1);
	}
	__LIB_4__::func_135(&(Local_14.f_11), 1, 1, 1);
}

void func_3(int iParam0)
{
	func_51(iParam0);
	__LIB_17__::func_304(&(iParam0->f_205));
	ITEMSET::DESTROY_ITEMSET(iParam0->f_163);
	__LIB_0__::func_172(iParam0->f_161);
	__LIB_0__::func_172(iParam0->f_164);
	__LIB_16__::func_839(&(iParam0->f_529));
	__LIB_16__::func_840(*iParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5(var uParam0, var uParam1)
{
	if (__LIB_0__::func_58(uParam0))
	{
		func_3(uParam0);
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		func_3(uParam0);
	}
	if (func_58(*uParam0, uParam0->f_1, &(uParam0->f_529), uParam0->f_3))
	{
		uParam0->f_550 = 1;
	}
	if (func_59(uParam0))
	{
		if (!__LIB_0__::func_75(&(uParam0->f_7)))
		{
			__LIB_1__::func_283(&(uParam0->f_7), 0);
		}
		else if (__LIB_0__::func_265(&(uParam0->f_7)) > 10f)
		{
			__LIB_0__::func_37(&(uParam0->f_7));
			func_3(uParam0);
		}
	}
	else if (__LIB_0__::func_75(&(uParam0->f_7)))
	{
		__LIB_0__::func_37(&(uParam0->f_7));
	}
}

bool func_6(var uParam0)
{
	if (func_64(uParam0))
	{
		uParam0->f_163 = ITEMSET::CREATE_ITEMSET(true);
		return true;
	}
	return false;
}

bool func_8(var uParam0)
{
	if (func_65(uParam0))
	{
		return true;
	}
	return false;
}

bool func_9(var uParam0)
{
	if (func_66(uParam0))
	{
		return true;
	}
	return false;
}

void func_11(int iParam0)
{
	if (((func_67(iParam0) && ENTITY::DOES_ENTITY_EXIST(Global_35)) && !Global_1935630.f_12) && ((VOLUME::_DOES_VOLUME_EXIST(iParam0->f_161) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_161, true, 0)) || __LIB_0__::func_58(iParam0)))
	{
		if (func_69(iParam0, iParam0->f_160) > -1)
		{
			if (func_70(iParam0))
			{
				__LIB_16__::func_841(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				__LIB_2__::func_451(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				if (iParam0->f_551)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				}
				__LIB_16__::func_979(*iParam0, &(iParam0->f_3), &(iParam0->f_193), iParam0->f_194);
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
	if (func_67(iParam0))
	{
		if (func_79(iParam0, iParam0->f_160) > -1)
		{
			if (func_70(iParam0))
			{
				__LIB_16__::func_841(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				__LIB_2__::func_344(&(iParam0->f_3));
				__LIB_2__::func_451(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				__LIB_2__::func_480(&(iParam0->f_41[iParam0->f_160 /*59*/].f_21), 0, 0, 1, 0);
				if (iParam0->f_551)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				}
				__LIB_16__::func_979(*iParam0, &(iParam0->f_3), &(iParam0->f_193), iParam0->f_194);
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
		if (uParam0->f_554)
		{
			bVar0 = __LIB_16__::func_883(&(uParam0->f_11), &(uParam0->f_39), &(uParam0->f_3), &(uParam0->f_553), 1101004800 /* Float: 20f */);
		}
		else
		{
			bVar0 = __LIB_12__::func_465(uParam0->f_3, 0, &(uParam0->f_11), &(uParam0->f_39), 0, 0);
		}
		if (bVar0)
		{
			if (func_83(uParam0))
			{
				func_17(&(uParam0->f_205), 2, 1);
			}
		}
	}
}

int func_14(var uParam0)
{
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_14.f_3, true, false), Global_36) > 125f)
	{
		return 1;
	}
	return 0;
}

void func_17(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		uParam0->f_316 = 0;
		__LIB_1__::func_683(&(uParam0->f_316), iParam1);
	}
	else
	{
		__LIB_1__::func_683(&(uParam0->f_316), iParam1);
	}
}

void func_18(var uParam0, int iParam1)
{
	__LIB_16__::func_980(&(uParam0->f_316), iParam1);
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
			__LIB_1__::func_336(&(iParam0->f_193), iParam0->f_195);
		}
	}
}

bool func_23(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_103(iParam0))
		{
			return true;
		}
	}
	func_104(&(iParam0->f_205));
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
	uParam0->f_23 = 15127;
	uParam0->f_24 = 15136;
	uParam0->f_25 = 15145;
	uParam0->f_20 = 0;
	uParam0->f_21 = 2;
	uParam0->f_22 = 0.95f;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_26()
{
	switch (__LIB_11__::func_133(24))
	{
		case 0:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-2233.602f, -2850.517f, 62.7628f, 0f, 0f, 0f, 100f, 100f, 100f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2233.602f, -2850.517f, 62.7628f, 0f, 0f, 0f, 8f, 8f, 7f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2233.602f, -2850.517f, 62.7628f, 0f, 0f, 0f, (8f * 2f), (8f * 2f), (7f * 2f), "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2233.602f, -2850.517f, 62.7628f, 0f, 0f, 0f, 5f, 5f, 7f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2233.602f, -2850.517f, 62.7628f, 0f, 0f, 0f, 3f, 3f, 7f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 1:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-3198.999f, -2538.554f, 66.5911f, 0f, 0f, 0f, 100f, 100f, 100f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3198.999f, -2538.554f, 66.5911f, 0f, 0f, 0f, 8f, 8f, 7f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3198.999f, -2538.554f, 66.5911f, 0f, 0f, 0f, (8f * 2f), (8f * 2f), (7f * 2f), "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3198.999f, -2538.554f, 66.5911f, 0f, 0f, 0f, 5f, 5f, 7f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3198.999f, -2538.554f, 66.5911f, 0f, 0f, 0f, 3f, 3f, 7f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 2:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-2927.12f, -2860.494f, 85.7312f, 0f, 0f, 0f, 100f, 100f, 100f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2940.116f, -2875.53f, 65.73826f, 0f, 0f, 0f, 70f, 70f, 25f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2927.12f, -2860.494f, 85.7312f, 0f, 0f, 0f, 5f, 5f, 7f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2927.12f, -2860.494f, 85.7312f, 0f, 0f, 0f, 3f, 3f, 7f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 3:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-3267.86f, -3416.677f, 39.5041f, 0f, 0f, 0f, 100f, 100f, 100f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3267.86f, -3416.677f, 39.5041f, 0f, 0f, 0f, 8f, 8f, 2.4f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3267.86f, -3416.677f, 39.5041f, 0f, 0f, 0f, (8f * 2f), (8f * 2f), 2.4f, "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3267.86f, -3416.677f, 39.5041f, 0f, 0f, 0f, 5f, 5f, 7f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3267.86f, -3416.677f, 39.5041f, 0f, 0f, 0f, 3f, 3f, 7f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 4:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-3572.794f, -3565.222f, 33.505f, 0f, 0f, 0f, 100f, 100f, 100f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3572.794f, -3565.222f, 33.505f, 0f, 0f, 0f, 8f, 8f, 7f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3572.794f, -3565.222f, 33.505f, 0f, 0f, 0f, (8f * 2f), (8f * 2f), (7f * 2f), "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3572.794f, -3565.222f, 33.505f, 0f, 0f, 0f, 5f, 5f, 7f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3572.794f, -3565.222f, 33.505f, 0f, 0f, 0f, 3f, 3f, 7f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 5:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-4399.393f, -3606.746f, 48.6452f, 0f, 0f, 0f, 100f, 100f, 100f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4399.393f, -3588.738f, 27.12632f, 0f, 0f, 0f, 40f, 40f, 15f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4399.393f, -3606.746f, 48.6452f, 0f, 0f, 0f, 5f, 5f, 7f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4399.393f, -3606.746f, 48.6452f, 0f, 0f, 0f, 3f, 3f, 7f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 6:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-4988.676f, -4060.992f, 1.0884f, 0f, 0f, 0f, 100f, 100f, 100f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4988.676f, -4060.992f, 1.0884f, 0f, 0f, 0f, 8f, 8f, 7f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4988.676f, -4060.992f, 1.0884f, 0f, 0f, 0f, (8f * 2f), (8f * 2f), (7f * 2f), "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4988.676f, -4060.992f, 1.0884f, 0f, 0f, 0f, 5f, 5f, 7f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4988.676f, -4060.992f, 1.0884f, 0f, 0f, 0f, 3f, 3f, 7f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 7:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-5336.702f, -3535.12f, 5.8226f, 0f, 0f, 0f, 100f, 100f, 100f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5308.675f, -3520.828f, -19.99811f, 0f, 0f, 0f, 40f, 40f, 15f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5336.702f, -3535.12f, 5.8226f, 0f, 0f, 0f, 5f, 5f, 7f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5336.702f, -3535.12f, 5.8226f, 0f, 0f, 0f, 3f, 3f, 7f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 8:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-5374.994f, -4053.294f, -6.2292f, 0f, 0f, 0f, 100f, 100f, 100f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5374.994f, -4053.294f, -6.2292f, 0f, 0f, 0f, 8f, 8f, 7f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5374.994f, -4053.294f, -6.2292f, 0f, 0f, 0f, (8f * 2f), (8f * 2f), (7f * 2f), "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5374.994f, -4053.294f, -6.2292f, 0f, 0f, 0f, 5f, 5f, 7f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5374.994f, -4053.294f, -6.2292f, 0f, 0f, 0f, 3f, 3f, 7f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 9:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-5413.131f, -2606.156f, 2.5597f, 0f, 0f, 0f, 100f, 100f, 100f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5413.131f, -2606.156f, 2.5597f, 0f, 0f, 0f, 8f, 8f, 7f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5413.131f, -2606.156f, 2.5597f, 0f, 0f, 0f, (8f * 2f), (8f * 2f), (7f * 2f), "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5413.131f, -2606.156f, 2.5597f, 0f, 0f, 0f, 5f, 5f, 7f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5413.131f, -2606.156f, 2.5597f, 0f, 0f, 0f, 3f, 3f, 7f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 10:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-4956.249f, -3198.202f, 26.3575f, 0f, 0f, 0f, 100f, 100f, 100f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4917.801f, -3198.158f, 0.631294f, 0f, 0f, 0f, 40f, 40f, 15f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4956.249f, -3198.202f, 26.3575f, 0f, 0f, 0f, 5f, 5f, 7f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4956.249f, -3198.202f, 26.3575f, 0f, 0f, 0f, 3f, 3f, 7f, "SUN_VOL_PED_AVOIDANCE");
			break;
		case 11:
			iLocal_570[0] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-4594.695f, -3045.041f, 6.5776f, 0f, 0f, 0f, 100f, 100f, 100f, "SUN_VOL_RANDOM_EVENT_BLOCKER");
			iLocal_570[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4594.695f, -3045.041f, 6.5776f, 0f, 0f, 0f, 8f, 8f, 7f, "SUN_VOL_SPEECH_RANGE");
			iLocal_570[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4594.695f, -3045.041f, 6.5776f, 0f, 0f, 0f, (8f * 2f), (8f * 2f), (7f * 2f), "SUN_VOL_PLAYER_SPRINTING_SPEECH_RANGE");
			iLocal_570[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4594.695f, -3045.041f, 6.5776f, 0f, 0f, 0f, 5f, 5f, 7f, "SUN_VOL_TALK_RANGE");
			iLocal_570[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4594.695f, -3045.041f, 6.5776f, 0f, 0f, 0f, 3f, 3f, 7f, "SUN_VOL_PED_AVOIDANCE");
			break;
	}
	iLocal_570[5] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 0f, 0f, 0f, 0f, 0f, 0f, 1.85f, 1.85f, 2f);
}

void func_27()
{
	Local_14 = 24;
	Local_14.f_1 = __LIB_11__::func_133(24);
	Local_14.f_2 = __LIB_1__::func_293(Local_14, Local_14.f_1, 9, __LIB_16__::func_790(Local_14));
	Local_14.f_195 = 4;
	Local_14.f_194 = 512;
	Local_14.f_161 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5320.893f, -2604.35f, -11.0865f, 0f, 0f, 0f, 30f, 30f, 8f, "volTalkTrigger");
	iLocal_714 = __LIB_5__::func_297(Local_14.f_2);
	func_111();
	Local_14.f_205.f_321 = 17530;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	__LIB_16__::func_791();
	__LIB_7__::func_448(Local_14.f_2, iLocal_714);
	if (__LIB_0__::func_27(Local_14.f_193, 1024))
	{
		iVar0 = __LIB_11__::func_133(24) + 1;
		__LIB_16__::func_783(24, iVar0);
	}
	iVar1 = 0;
	while (iVar1 < iLocal_570)
	{
		__LIB_0__::func_172(iLocal_570[iVar1]);
		iVar1++;
	}
	if (__LIB_1__::func_565(&uLocal_728))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_728, 0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_726, false);
	if (__LIB_11__::func_133(24) != 1)
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SunWorpshiperBubble");
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_727))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_727);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
	{
		PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3, false);
		__LIB_16__::func_804(Local_14.f_3);
		PED::_0x39A2FC5AF55A52B1(Local_14.f_3, -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_14.f_3));
	}
	return 1;
}

bool func_58(int iParam0, int iParam1, var uParam2, var uParam3)
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
				__LIB_1__::func_683(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (__LIB_0__::func_64(0) == 11)
			{
				__LIB_1__::func_683(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (__LIB_0__::func_64(0) == 6)
			{
				__LIB_1__::func_683(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				__LIB_1__::func_683(uParam2, 16);
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
						__LIB_1__::func_683(uParam2, 32);
					}
				}
				else if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 && __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
				{
					__LIB_1__::func_683(uParam2, 32);
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
					if (((__LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || __LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || __LIB_14__::func_432(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || __LIB_14__::func_432(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!__LIB_16__::func_784(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						__LIB_1__::func_683(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (__LIB_16__::func_934(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_127(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!__LIB_0__::func_75(&(uParam2->f_13)))
					{
						__LIB_0__::func_268(&(uParam2->f_13), 0f);
					}
					else if (__LIB_1__::func_871(&(uParam2->f_13)) >= uParam2->f_16)
					{
						__LIB_0__::func_37(&(uParam2->f_13));
						__LIB_1__::func_683(uParam2, 512);
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
				__LIB_1__::func_683(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (__LIB_16__::func_785())
			{
				__LIB_1__::func_683(uParam2, 2048);
			}
		}
		if (__LIB_0__::func_1(Global_1935630, 16384) || Global_1430231.f_4)
		{
			__LIB_1__::func_683(uParam2, 128);
		}
		if (__LIB_8__::func_747(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			__LIB_1__::func_683(uParam2, 256);
		}
	}
	if ((((((((((__LIB_0__::func_27(*uParam2, 2) || __LIB_0__::func_27(*uParam2, 4)) || __LIB_0__::func_27(*uParam2, 8)) || __LIB_0__::func_27(*uParam2, 16)) || __LIB_0__::func_27(*uParam2, 32)) || __LIB_0__::func_27(*uParam2, 64)) || __LIB_0__::func_27(*uParam2, 128)) || __LIB_0__::func_27(*uParam2, 256)) || __LIB_0__::func_27(*uParam2, 512)) || __LIB_0__::func_27(*uParam2, 1024)) || __LIB_0__::func_27(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_59(var uParam0)
{
	if ((func_131(uParam0) || (__LIB_0__::func_27(uParam0->f_40, 1) && !__LIB_0__::func_393(Global_35, Global_1396257[*uParam0 /*638*/][uParam0->f_1 /*48*/].f_47, 0, 1))) || (__LIB_0__::func_20(uParam0->f_10) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, __LIB_0__::func_559(uParam0->f_10), true, 0)))
	{
		return true;
	}
	return false;
}

bool func_64(var uParam0)
{
	HUD::_TEXT_DATABASE_REQUEST("SPSNWAU");
	HUD::_TEXT_DATABASE_REQUEST("SPDEF");
	STREAMING::REQUEST_MODEL(iLocal_569, false);
	__LIB_2__::func_261(iLocal_570[0], "SP_SUNScientist_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	POPULATION::_0xB56D41A694E42E86(iLocal_570[4], 2500607, 0, 0, -1, -1, 10);
	uLocal_726 = __LIB_1__::func_391(iLocal_570[4], 0, 0, 0);
	PED::_0xED9582B3DA8F02B4(1);
	return true;
}

bool func_65(var uParam0)
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SPSNWAU") || !HUD::_TEXT_DATABASE_HAS_LOADED("SPDEF"))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_569))
	{
		return false;
	}
	if (PED::_0x5C16855277819BBF() != 1)
	{
		return false;
	}
	return true;
}

bool func_66(var uParam0)
{
	var uVar0;
	vector3 vVar1;
	int iVar5;
	vVar1 = { func_142() };
	if (__LIB_17__::func_323(&(Local_14.f_3), iLocal_569, &uVar0, vVar1, vVar1.f_3, 0, 0, 1))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_3, joaat("REL_NO_RELATIONSHIP"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3, true);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_14.f_3, 1024, false);
		PED::_0xAE6004120C18DF97(Local_14.f_3, 0, 0);
		PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, true);
		iVar5 = __LIB_11__::func_133(24);
		if (((iVar5 == 2 || iVar5 == 5) || iVar5 == 7) || iVar5 == 10)
		{
			PED::SET_PED_HIGHLY_PERCEPTIVE(uParam0->f_3, true);
			PED::SET_PED_SEEING_RANGE(uParam0->f_3, 100f);
			PED::SET_PED_HEARING_RANGE(uParam0->f_3, 80f);
			PED::SET_PED_ID_RANGE(uParam0->f_3, 100f);
		}
		func_144();
		__LIB_19__::func_403(&(Local_14.f_205), 1, 1);
		__LIB_0__::func_928(&uLocal_578, Global_35, "JOHN", 0);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_205[0 /*36*/], "b_PlayerArthur", false, false);
		__LIB_0__::func_928(&uLocal_578, Local_14.f_3, "SUN_WORSHIPPER", 0);
		func_147();
		PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), Local_14.f_3, "SPECIAL_PED_LIGHTWEIGHT_1_0", 0f, 0f, 0f, 0, "SunWorpshiperBubble");
		func_111();
		__LIB_16__::func_792(Local_14.f_3, 24);
		if (iVar5 == 3)
		{
			if (!__LIB_1__::func_565(&uLocal_728))
			{
				uLocal_728 = GRAPHICS::_0xFA50F79257745E74(-3269.813f, -3419.548f, 39.72579f, 2.5f, 1, -1, 0);
			}
		}
		else if (!__LIB_1__::func_565(&uLocal_728))
		{
			uLocal_728 = GRAPHICS::_0xFA50F79257745E74(vVar1, 1.5f, 1, -1, 0);
		}
		Local_14.f_527 = 1;
		__LIB_1__::func_683(&(Local_14.f_193), 256);
		__LIB_17__::func_322(&Local_14, 0, 0, "SPD_UC_GRT", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0);
		__LIB_17__::func_322(&Local_14, 0, 1, "SPD_UC_ANT", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0);
		__LIB_17__::func_322(&Local_14, 1, 0, "SPD_UC_TALK", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0);
		__LIB_19__::func_6(&Local_14, 0, __LIB_2__::func_340(3, 0, 0), 0);
		__LIB_19__::func_6(&Local_14, 1, __LIB_2__::func_340(3, 0, 0), 0);
		__LIB_1__::func_683(&(Local_14.f_197), 2);
		__LIB_17__::func_317(&Local_14, 0, 0);
		__LIB_17__::func_317(&Local_14, 1, 0);
		__LIB_17__::func_318(&Local_14, 0);
		PED::_0x7C00CFC48A782DC0(Local_14.f_161, Local_14.f_3, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		PED::_0x7C00CFC48A782DC0(iLocal_570[5], Local_14.f_3, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		VOLUME::_0x5B23DFF8E0948BB2(iLocal_570[5], 0);
		VOLUME::_0xBE551C2CC421185D(iLocal_570[5], 1);
		return true;
	}
	return false;
}

bool func_67(int iParam0)
{
	if (__LIB_0__::func_27(Local_14.f_193, 256))
	{
		return true;
	}
	return false;
}

int func_69(int iParam0, int iParam1)
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
	iVar0 = func_154(&(iParam0->f_3), &(iParam0->f_41[iParam1 /*59*/]), 15f, &(iParam0->f_41[iParam1 /*59*/].f_21), 0f, 2, iParam0->f_41[iParam1 /*59*/].f_57, iVar1, iParam0->f_41[iParam1 /*59*/].f_56, 0, 0, 2, -1082130432 /* Float: -1f */);
	if (func_155(iParam0))
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

bool func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_17__::func_306(iParam0);
	if (__LIB_17__::func_319(iParam0, iVar1, &iVar0))
	{
		if (iVar1 == 0)
		{
			if (iVar0 == 0)
			{
				__LIB_1__::func_683(&(Local_14.f_193), 8);
			}
			else
			{
				__LIB_1__::func_683(&(Local_14.f_193), 16);
			}
		}
		else if (iVar1 == 1)
		{
			if (iVar0 == 0)
			{
				__LIB_1__::func_683(&(Local_14.f_193), 128);
			}
		}
	}
	return true;
}

int func_79(int iParam0, int iParam1)
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
	if ((VOLUME::_DOES_VOLUME_EXIST(iParam0->f_161) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_161, true, 0)) || __LIB_0__::func_58(iParam0))
	{
		__LIB_16__::func_841(&(iParam0->f_41[iParam1 /*59*/]), 1);
		iVar0 = func_154(&(iParam0->f_3), &(iParam0->f_41[iParam1 /*59*/]), 15f, &(iParam0->f_41[iParam1 /*59*/].f_21), 0f, 3, iParam0->f_41[iParam1 /*59*/].f_57, iVar1, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
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

bool func_83(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_714, 1))
	{
		__LIB_1__::func_683(&iLocal_714, 1);
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SunWorpshiperBubble");
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
	{
		__LIB_1__::func_727(Local_14.f_3, 1);
	}
	return true;
}

bool func_103(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3) || ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
	{
		return true;
	}
	__LIB_16__::func_971(Local_14.f_3, &(Local_14.f_193), 65536, 24, 0);
	if (__LIB_17__::func_314(&(Local_14.f_205), 2) || func_204(&Local_14) == 4)
	{
		if (PED::IS_PED_FALLING(Local_14.f_3) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_14.f_3) > 3f)
		{
			__LIB_1__::func_864(Local_14.f_3, 0, 0);
		}
		if (!__LIB_0__::func_27(Local_14.f_193, 2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3, false);
				__LIB_16__::func_804(Local_14.f_3);
			}
			if (__LIB_11__::func_133(24) == 1)
			{
				func_206(Local_14.f_3, 10, 500);
			}
			__LIB_1__::func_683(&(Local_14.f_193), 2);
		}
	}
	func_207();
	func_208();
	__LIB_17__::func_47(Local_14.f_3, &(Local_14.f_193), 2048, 4096, 8192, "SPECIAL_PED_10_NO_LOCK", "SPECIAL_PED_GENERIC_INTERACT_FOCUS", "SunWorpshiperBubble", "SunWorpshiperConvo");
	__LIB_16__::func_859(Local_14.f_193, 16384, 1, 1);
	if (__LIB_0__::func_27(Local_14.f_193, 64))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
		{
			__LIB_1__::func_727(Local_14.f_3, 1);
		}
		return true;
	}
	if (((Local_14.f_550 && __LIB_16__::func_809(&(Local_14.f_529))) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3)) && !AUDIO::_0x54B187F111D9C6F8(Local_14.f_3, 0))
	{
		return true;
	}
	return false;
}

void func_104(var uParam0)
{
	switch (uParam0->f_313)
	{
		case 1:
			if (func_212(uParam0, &(uParam0->f_145), uParam0->f_313))
			{
				if (__LIB_17__::func_314(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_257));
					Stack.Push(uParam0->f_145.f_6);
					Stack.Push(uParam0->f_145.f_6.f_1);
					Stack.Push(&(uParam0->f_173));
					Call_Loc(uParam0->f_321);
					Stack.Push(&(uParam0->f_145));
					Stack.Push(uParam0->f_145.f_2);
					Stack.Push(uParam0->f_145.f_2.f_1);
					Stack.Push(&(uParam0->f_173));
					Call_Loc(uParam0->f_321);
					__LIB_19__::func_403(uParam0, 4, 1);
				}
				else if (uParam0->f_317 && __LIB_17__::func_314(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_201));
					Stack.Push(uParam0->f_145.f_4);
					Stack.Push(uParam0->f_145.f_4.f_1);
					Stack.Push(&(uParam0->f_173));
					Call_Loc(uParam0->f_321);
					Stack.Push(&(uParam0->f_145));
					Stack.Push(uParam0->f_145.f_2);
					Stack.Push(uParam0->f_145.f_2.f_1);
					Stack.Push(&(uParam0->f_173));
					Call_Loc(uParam0->f_321);
					__LIB_19__::func_403(uParam0, 2, 1);
				}
				else if (__LIB_17__::func_314(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_285));
					Stack.Push(uParam0->f_145.f_10);
					Stack.Push(uParam0->f_145.f_10.f_1);
					Stack.Push(&(uParam0->f_173));
					Call_Loc(uParam0->f_321);
					Stack.Push(&(uParam0->f_145));
					Stack.Push(uParam0->f_145.f_2);
					Stack.Push(uParam0->f_145.f_2.f_1);
					Stack.Push(&(uParam0->f_173));
					Call_Loc(uParam0->f_321);
					__LIB_19__::func_403(uParam0, 5, 0);
				}
				else if (__LIB_17__::func_314(uParam0, 4))
				{
					Stack.Push(&(uParam0->f_229));
					Stack.Push(uParam0->f_145.f_8);
					Stack.Push(uParam0->f_145.f_8.f_1);
					Stack.Push(&(uParam0->f_173));
					Call_Loc(uParam0->f_321);
					Stack.Push(&(uParam0->f_145));
					Stack.Push(uParam0->f_145.f_2);
					Stack.Push(uParam0->f_145.f_2.f_1);
					Stack.Push(&(uParam0->f_173));
					Call_Loc(uParam0->f_321);
					__LIB_19__::func_403(uParam0, 3, 1);
				}
				else if (__LIB_17__::func_314(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_201));
					Stack.Push(uParam0->f_145.f_4);
					Stack.Push(uParam0->f_145.f_4.f_1);
					Stack.Push(&(uParam0->f_173));
					Call_Loc(uParam0->f_321);
					Stack.Push(&(uParam0->f_145));
					Stack.Push(uParam0->f_145.f_2);
					Stack.Push(uParam0->f_145.f_2.f_1);
					Stack.Push(&(uParam0->f_173));
					Call_Loc(uParam0->f_321);
					__LIB_19__::func_403(uParam0, 2, 1);
				}
				else
				{
					Stack.Push(&(uParam0->f_145));
					Stack.Push(uParam0->f_145.f_2);
					Stack.Push(uParam0->f_145.f_2.f_1);
					Stack.Push(&(uParam0->f_173));
					Call_Loc(uParam0->f_321);
					__LIB_19__::func_403(uParam0, 1, 1);
				}
			}
			break;
		case 2:
			if (func_212(uParam0, &(uParam0->f_201), uParam0->f_313))
			{
				if (!uParam0->f_317)
				{
					if (__LIB_17__::func_314(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_257));
						Stack.Push(uParam0->f_201.f_6);
						Stack.Push(uParam0->f_201.f_6.f_1);
						Stack.Push(&(uParam0->f_173));
						Call_Loc(uParam0->f_321);
						if (__LIB_17__::func_307(uParam0->f_201.f_2))
						{
							Stack.Push(&(uParam0->f_145));
							Stack.Push(uParam0->f_201.f_2);
							Stack.Push(uParam0->f_201.f_2.f_1);
							Stack.Push(&(uParam0->f_173));
							Call_Loc(uParam0->f_321);
						}
						__LIB_19__::func_403(uParam0, 4, 1);
					}
					else if (__LIB_17__::func_314(uParam0, 8))
					{
						Stack.Push(&(uParam0->f_285));
						Stack.Push(uParam0->f_201.f_10);
						Stack.Push(uParam0->f_201.f_10.f_1);
						Stack.Push(&(uParam0->f_173));
						Call_Loc(uParam0->f_321);
						if (__LIB_17__::func_307(uParam0->f_201.f_2))
						{
							Stack.Push(&(uParam0->f_145));
							Stack.Push(uParam0->f_201.f_2);
							Stack.Push(uParam0->f_201.f_2.f_1);
							Stack.Push(&(uParam0->f_173));
							Call_Loc(uParam0->f_321);
						}
						__LIB_19__::func_403(uParam0, 5, 0);
					}
					else if (__LIB_17__::func_314(uParam0, 4))
					{
						Stack.Push(&(uParam0->f_229));
						Stack.Push(uParam0->f_201.f_8);
						Stack.Push(uParam0->f_201.f_8.f_1);
						Stack.Push(&(uParam0->f_173));
						Call_Loc(uParam0->f_321);
						if (__LIB_17__::func_307(uParam0->f_201.f_2))
						{
							Stack.Push(&(uParam0->f_145));
							Stack.Push(uParam0->f_201.f_2);
							Stack.Push(uParam0->f_201.f_2.f_1);
							Stack.Push(&(uParam0->f_173));
							Call_Loc(uParam0->f_321);
						}
						__LIB_19__::func_403(uParam0, 3, 1);
					}
					else
					{
						if (__LIB_17__::func_307(uParam0->f_201.f_2))
						{
							Stack.Push(&(uParam0->f_145));
							Stack.Push(uParam0->f_201.f_2);
							Stack.Push(uParam0->f_201.f_2.f_1);
							Stack.Push(&(uParam0->f_173));
							Call_Loc(uParam0->f_321);
						}
						__LIB_19__::func_403(uParam0, 1, 1);
					}
				}
				else if (uParam0->f_318)
				{
					if (uParam0->f_319)
					{
						__LIB_19__::func_403(uParam0, 6, 1);
					}
					else
					{
						__LIB_19__::func_403(uParam0, 0, 1);
					}
				}
				else
				{
					if (__LIB_17__::func_307(uParam0->f_201.f_2))
					{
						Stack.Push(&(uParam0->f_145));
						Stack.Push(uParam0->f_201.f_2);
						Stack.Push(uParam0->f_201.f_2.f_1);
						Stack.Push(&(uParam0->f_173));
						Call_Loc(uParam0->f_321);
					}
					__LIB_19__::func_403(uParam0, 1, 1);
				}
			}
			break;
		case 3:
			if (func_212(uParam0, &(uParam0->f_229), uParam0->f_313))
			{
				if (__LIB_17__::func_314(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_257));
					Stack.Push(uParam0->f_229.f_6);
					Stack.Push(uParam0->f_229.f_6.f_1);
					Stack.Push(&(uParam0->f_173));
					Call_Loc(uParam0->f_321);
					if (__LIB_17__::func_307(uParam0->f_229.f_2))
					{
						Stack.Push(&(uParam0->f_145));
						Stack.Push(uParam0->f_229.f_2);
						Stack.Push(uParam0->f_229.f_2.f_1);
						Stack.Push(&(uParam0->f_173));
						Call_Loc(uParam0->f_321);
					}
					__LIB_19__::func_403(uParam0, 4, 1);
				}
				else if (uParam0->f_317 && __LIB_17__::func_314(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_201));
					Stack.Push(uParam0->f_229.f_4);
					Stack.Push(uParam0->f_229.f_4.f_1);
					Stack.Push(&(uParam0->f_173));
					Call_Loc(uParam0->f_321);
					if (__LIB_17__::func_307(uParam0->f_229.f_2))
					{
						Stack.Push(&(uParam0->f_145));
						Stack.Push(uParam0->f_229.f_2);
						Stack.Push(uParam0->f_229.f_2.f_1);
						Stack.Push(&(uParam0->f_173));
						Call_Loc(uParam0->f_321);
					}
					__LIB_19__::func_403(uParam0, 2, 1);
				}
				else if (__LIB_17__::func_314(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_285));
					Stack.Push(uParam0->f_229.f_10);
					Stack.Push(uParam0->f_229.f_10.f_1);
					Stack.Push(&(uParam0->f_173));
					Call_Loc(uParam0->f_321);
					if (__LIB_17__::func_307(uParam0->f_229.f_2))
					{
						Stack.Push(&(uParam0->f_145));
						Stack.Push(uParam0->f_229.f_2);
						Stack.Push(uParam0->f_229.f_2.f_1);
						Stack.Push(&(uParam0->f_173));
						Call_Loc(uParam0->f_321);
					}
					__LIB_19__::func_403(uParam0, 5, 0);
				}
				else if (__LIB_17__::func_314(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_201));
					Stack.Push(uParam0->f_229.f_4);
					Stack.Push(uParam0->f_229.f_4.f_1);
					Stack.Push(&(uParam0->f_173));
					Call_Loc(uParam0->f_321);
					if (__LIB_17__::func_307(uParam0->f_229.f_2))
					{
						Stack.Push(&(uParam0->f_145));
						Stack.Push(uParam0->f_229.f_2);
						Stack.Push(uParam0->f_229.f_2.f_1);
						Stack.Push(&(uParam0->f_173));
						Call_Loc(uParam0->f_321);
					}
					__LIB_19__::func_403(uParam0, 2, 1);
				}
				else
				{
					if (__LIB_17__::func_307(uParam0->f_229.f_2))
					{
						Stack.Push(&(uParam0->f_145));
						Stack.Push(uParam0->f_229.f_2);
						Stack.Push(uParam0->f_229.f_2.f_1);
						Stack.Push(&(uParam0->f_173));
						Call_Loc(uParam0->f_321);
					}
					__LIB_19__::func_403(uParam0, 1, 1);
				}
			}
			break;
		case 4:
			if (func_212(uParam0, &(uParam0->f_257), uParam0->f_313))
			{
				if (uParam0->f_319)
				{
					__LIB_19__::func_403(uParam0, 6, 1);
				}
				else
				{
					__LIB_19__::func_403(uParam0, 0, 1);
				}
			}
			break;
		case 5:
			if (!uParam0->f_320)
			{
				if (func_212(uParam0, &(uParam0->f_285), uParam0->f_313))
				{
					uParam0->f_320 = 1;
					if (__LIB_17__::func_314(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_257));
						Stack.Push(uParam0->f_285.f_6);
						Stack.Push(uParam0->f_285.f_6.f_1);
						Stack.Push(&(uParam0->f_173));
						Call_Loc(uParam0->f_321);
						uParam0->f_320 = 0;
						__LIB_19__::func_403(uParam0, 4, 0);
					}
					else if (uParam0->f_317 && __LIB_17__::func_314(uParam0, 1))
					{
						Stack.Push(&(uParam0->f_201));
						Stack.Push(uParam0->f_285.f_4);
						Stack.Push(uParam0->f_285.f_4.f_1);
						Stack.Push(&(uParam0->f_173));
						Call_Loc(uParam0->f_321);
						uParam0->f_320 = 0;
						__LIB_19__::func_403(uParam0, 2, 0);
					}
					else if (__LIB_17__::func_314(uParam0, 8))
					{
					}
					else
					{
						uParam0->f_320 = 0;
						__LIB_19__::func_403(uParam0, 1, 0);
					}
				}
			}
			else if (__LIB_17__::func_314(uParam0, 2))
			{
				Stack.Push(&(uParam0->f_257));
				Stack.Push(uParam0->f_285.f_6);
				Stack.Push(uParam0->f_285.f_6.f_1);
				Stack.Push(&(uParam0->f_173));
				Call_Loc(uParam0->f_321);
				uParam0->f_320 = 0;
				__LIB_19__::func_403(uParam0, 4, 0);
			}
			else if (uParam0->f_317 && __LIB_17__::func_314(uParam0, 1))
			{
				Stack.Push(&(uParam0->f_201));
				Stack.Push(uParam0->f_285.f_4);
				Stack.Push(uParam0->f_285.f_4.f_1);
				Stack.Push(&(uParam0->f_173));
				Call_Loc(uParam0->f_321);
				uParam0->f_320 = 0;
				__LIB_19__::func_403(uParam0, 2, 0);
			}
			else if (__LIB_17__::func_314(uParam0, 8))
			{
			}
			else
			{
				uParam0->f_320 = 0;
				__LIB_19__::func_403(uParam0, 1, 0);
			}
			break;
		case 6:
			__LIB_17__::func_308(uParam0);
			__LIB_19__::func_403(uParam0, 0, 1);
			break;
		case 0:
			break;
	}
}

void func_111()
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	switch (__LIB_11__::func_133(24))
	{
		case 0:
			vVar0 = { -2233.602f, -2850.517f, 62.7628f };
			vVar3 = { 0f, 0f, 208.7791f };
			break;
		case 1:
			vVar0 = { -3198.999f, -2538.554f, 66.5911f };
			vVar3 = { 0f, 0f, 292.1099f };
			break;
		case 2:
			vVar0 = { -2927.12f, -2860.494f, 85.7312f };
			vVar3 = { 0f, 0f, 123.2795f };
			break;
		case 3:
			vVar0 = { -3267.86f, -3416.677f, 39.5041f };
			vVar3 = { 0f, 0f, 332.5893f };
			break;
		case 4:
			vVar0 = { -3572.794f, -3565.222f, 33.505f };
			vVar3 = { 0f, 0f, 260.2986f };
			break;
		case 5:
			vVar0 = { -4399.393f, -3606.746f, 48.6452f };
			vVar3 = { 0f, 0f, 348.5519f };
			break;
		case 6:
			vVar0 = { -4988.676f, -4060.992f, 1.0884f };
			vVar3 = { 0f, 0f, 163.9257f };
			break;
		case 7:
			vVar0 = { -5336.702f, -3535.12f, 5.8226f };
			vVar3 = { 0f, 0f, 306.198f };
			break;
		case 8:
			vVar0 = { -5374.994f, -4053.294f, -6.2292f };
			vVar3 = { 0f, 0f, 170.3096f };
			break;
		case 9:
			vVar0 = { -5413.131f, -2606.156f, 2.5597f };
			vVar3 = { 0f, 0f, 255.0981f };
			break;
		case 10:
			vVar0 = { -4956.249f, -3198.202f, 26.3575f };
			vVar3 = { 0f, 0f, 292.8281f };
			break;
		case 11:
			vVar0 = { -4594.695f, -3045.041f, 6.5776f };
			vVar3 = { 0f, 0f, 4.7478f };
			break;
	}
	if (!__LIB_0__::func_27(iLocal_714, 1) || __LIB_0__::func_27(iLocal_714, 2))
	{
		switch (__LIB_11__::func_133(24))
		{
			case 0:
				__LIB_16__::func_810(&(Local_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_1@pdsnw_ig1_walk_talk", vVar0, vVar3, "pl_IG4_PDSNW_WnT_Idle01", 32, 0, 0, 0, 0);
				break;
			case 1:
				__LIB_16__::func_810(&(Local_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_8@pdsnw_ig8_laying_down", vVar0, vVar3, "Pl_IG8_PDSNW_LayingDown_Enter", 64, 0, 0, 0, 0);
				break;
			case 2:
				__LIB_16__::func_810(&(Local_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_11@pdsnw_ig11_callout_above", vVar0, vVar3, "pl_IG13_PDSNW_StandingIdle", 0, 0, 0, 0, 0);
				break;
			case 3:
				__LIB_16__::func_810(&(Local_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_2@pdsnw_ig2_walk_talk", vVar0, vVar3, "pl_IG2_PDSNW_WnT_OhHowYaDoin", 32, 0, 0, 0, 0);
				break;
			case 4:
				__LIB_16__::func_810(&(Local_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_3@pdsnw_ig3_walk_talk", vVar0, vVar3, "Pl_IG3_PDSNW_WnT_YouKnowAmerica", 32, 0, 0, 0, 0);
				break;
			case 5:
				__LIB_16__::func_810(&(Local_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_11@pdsnw_ig11_callout_above", vVar0, vVar3, "pl_IG13_PDSNW_StandingIdle", 0, 0, 0, 0, 0);
				break;
			case 6:
				__LIB_16__::func_810(&(Local_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_4@pdsnw_ig4_walk_talk", vVar0, vVar3, "Pl_IG4_PDSNW_WnT_HeyYouFoundWhat", 32, 0, 0, 0, 0);
				break;
			case 7:
				__LIB_16__::func_810(&(Local_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_11@pdsnw_ig11_callout_above", vVar0, vVar3, "pl_IG13_PDSNW_StandingIdle", 0, 0, 0, 0, 0);
				break;
			case 8:
				__LIB_16__::func_810(&(Local_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_5@pdsnw_ig5_walk_talk", vVar0, vVar3, "Pl_IG5_PDSNW_WnT_UKnowWhatIBlame", 32, 0, 0, 0, 0);
				break;
			case 9:
				__LIB_16__::func_810(&(Local_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_6@pdsnw_ig6_walk_talk", vVar0, vVar3, "Pl_IG6_PDSNW_WnT_IfThisIsnt", 32, 0, 0, 0, 0);
				break;
			case 10:
				__LIB_16__::func_810(&(Local_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_11@pdsnw_ig11_callout_above", vVar0, vVar3, "pl_IG13_PDSNW_StandingIdle", 0, 0, 0, 0, 0);
				break;
			case 11:
				__LIB_16__::func_810(&(Local_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_7@pdsnw_ig7_walk_talk", vVar0, vVar3, "Pl_IG7_PDSNW_WnT_LifeIsWarmth", 32, 0, 0, 0, 0);
				break;
		}
	}
	else
	{
		__LIB_16__::func_810(&(Local_14.f_205[0 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_9@ig9_pdsnw_wnt_prevaggro", vVar0, vVar3, "Pl_IG9_PDSNW_WnT_PrevAggro", 0, 0, 0, 0, 0);
	}
	__LIB_16__::func_810(&(Local_14.f_205[1 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_12@pdsnw_ig12_aggros", vVar0, vVar3, "pl_IG13_PDSNW_StandingIdle", 0, 0, 0, 0, 0);
	__LIB_16__::func_810(&(Local_14.f_205[2 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_10@pdsnw_ig10_prev_aggro", vVar0, vVar3, "Pl_IG10_PDSNW_PrevAggro01", 0, 0, 0, 0, 0);
	__LIB_16__::func_810(&(Local_14.f_205[3 /*36*/]), "script@specialped@pdsnw_sun_worshipper@ig@ig_13@pdsnw_ig13_linger", vVar0, vVar3, "pl_IG13_PDSNW_StandingIdle", 0, 0, 0, 0, 0);
}

int func_112(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_17__::func_309(iParam1);
	iVar1 = func_223(iParam2);
	func_25(uParam0);
	switch (iVar0)
	{
		case 0:
			switch (iVar1)
			{
				case 0:
					func_226(uParam0, "pl_IG4_PDSNW_WnT_Idle01", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(0), __LIB_17__::func_309(0), __LIB_16__::func_807(1), 0, "", 0, "", 0, "S_IG4_PDSNW_WnT_Idle01", "S_IG4_PDSNW_WnT_Idle01", 5, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 36376);
					__LIB_16__::func_793(uParam0, 36399);
					__LIB_16__::func_811(uParam0, 36736);
					break;
				case 1:
					func_226(uParam0, "Pl_IG1_PDSNW_wnT_HeyWhatYouDoin", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(2), 0, "", 0, "", 0, "S_IG1_PDSNW_wnT_HeyWhatYouDoin", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 37059);
					__LIB_16__::func_793(uParam0, 37068);
					__LIB_16__::func_811(uParam0, 37490);
					break;
				case 2:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(0), __LIB_17__::func_309(3), __LIB_16__::func_807(45), 0, "", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 5, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_811(uParam0, 37714);
					break;
				case 3:
					func_226(uParam0, "pl_IG4_PDSNW_WnT_Idle01", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(3), __LIB_17__::func_309(0), __LIB_16__::func_807(4), 0, "b_breakout", 0, "", 0, "S_IG4_PDSNW_WnT_Idle01", "S_IG4_PDSNW_WnT_Idle01", 4, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 36376);
					__LIB_16__::func_793(uParam0, 36399);
					__LIB_16__::func_811(uParam0, 36736);
					break;
				case 4:
					func_226(uParam0, "pl_IG2_PDSNW_WnT_OhHowYaDoin", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(5), 0, "b_breakout", 0, "", 0, "s_IG2_PDSNW_WnT_OhHowYaDoin", "", 1, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 37059);
					__LIB_16__::func_793(uParam0, 37068);
					__LIB_16__::func_811(uParam0, 37490);
					break;
				case 5:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(3), __LIB_17__::func_309(3), __LIB_16__::func_807(45), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 5, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_811(uParam0, 37714);
					break;
				case 6:
					func_226(uParam0, "pl_IG4_PDSNW_WnT_Idle01", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(6), __LIB_17__::func_309(0), __LIB_16__::func_807(7), 0, "b_breakout", 0, "", 0, "S_IG4_PDSNW_WnT_Idle01", "S_IG4_PDSNW_WnT_Idle01", 4, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 36376);
					__LIB_16__::func_793(uParam0, 36399);
					__LIB_16__::func_811(uParam0, 36736);
					break;
				case 7:
					func_226(uParam0, "Pl_IG3_PDSNW_WnT_YouKnowAmerica", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(8), 0, "b_breakout", 0, "", 0, "S_IG3_PDSNW_WnT_YouKnowAmerica", "", 1, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 37059);
					__LIB_16__::func_793(uParam0, 37068);
					__LIB_16__::func_811(uParam0, 37490);
					break;
				case 8:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(3), __LIB_17__::func_309(3), __LIB_16__::func_807(45), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 5, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_811(uParam0, 37714);
					break;
				case 9:
					func_226(uParam0, "pl_IG4_PDSNW_WnT_Idle01", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(9), __LIB_17__::func_309(0), __LIB_16__::func_807(10), 0, "b_breakout", 0, "", 0, "S_IG4_PDSNW_WnT_Idle01", "S_IG4_PDSNW_WnT_Idle01", 4, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 36376);
					__LIB_16__::func_793(uParam0, 36399);
					__LIB_16__::func_811(uParam0, 36736);
					break;
				case 10:
					func_226(uParam0, "Pl_IG4_PDSNW_WnT_HeyYouFoundWhat", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(11), 0, "b_breakout", 0, "", 0, "s_IG4_PDSNW_WnT_HeyYouFoundWhat", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 37059);
					__LIB_16__::func_793(uParam0, 37068);
					__LIB_16__::func_811(uParam0, 37490);
					break;
				case 11:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(9), __LIB_17__::func_309(3), __LIB_16__::func_807(45), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 5, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_811(uParam0, 37714);
					break;
				case 12:
					func_226(uParam0, "pl_IG4_PDSNW_WnT_Idle01", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(12), __LIB_17__::func_309(0), __LIB_16__::func_807(13), 0, "b_breakout", 0, "", 0, "S_IG4_PDSNW_WnT_Idle01", "S_IG4_PDSNW_WnT_Idle01", 4, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 36376);
					__LIB_16__::func_793(uParam0, 36399);
					__LIB_16__::func_811(uParam0, 36736);
					break;
				case 13:
					func_226(uParam0, "Pl_IG5_PDSNW_WnT_UKnowWhatIBlame", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(14), 0, "b_breakout", 0, "", 0, "", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 37059);
					__LIB_16__::func_793(uParam0, 37068);
					__LIB_16__::func_811(uParam0, 37490);
					break;
				case 14:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(12), __LIB_17__::func_309(3), __LIB_16__::func_807(45), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 4, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_811(uParam0, 37714);
					break;
				case 15:
					func_226(uParam0, "pl_IG4_PDSNW_WnT_Idle01", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(15), __LIB_17__::func_309(0), __LIB_16__::func_807(16), 0, "b_breakout", 0, "", 0, "S_IG4_PDSNW_WnT_Idle01", "S_IG4_PDSNW_WnT_Idle01", 4, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 36376);
					__LIB_16__::func_793(uParam0, 36399);
					__LIB_16__::func_811(uParam0, 36736);
					break;
				case 16:
					func_226(uParam0, "Pl_IG6_PDSNW_WnT_IfThisIsnt", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(17), 0, "b_breakout", 0, "", 0, "S_IG13_PDSNW_StandingIdle", "S_IG13_PDSNW_StandingIdle", 4, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 37059);
					__LIB_16__::func_793(uParam0, 37068);
					__LIB_16__::func_811(uParam0, 37490);
					break;
				case 17:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(15), __LIB_17__::func_309(3), __LIB_16__::func_807(45), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 5, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_811(uParam0, 37714);
					break;
				case 18:
					func_226(uParam0, "pl_IG4_PDSNW_WnT_Idle01", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(18), __LIB_17__::func_309(0), __LIB_16__::func_807(19), 0, "b_breakout", 0, "", 0, "S_IG4_PDSNW_WnT_Idle01", "S_IG4_PDSNW_WnT_Idle01", 4, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 36376);
					__LIB_16__::func_793(uParam0, 36399);
					__LIB_16__::func_811(uParam0, 36736);
					break;
				case 19:
					func_226(uParam0, "Pl_IG7_PDSNW_WnT_LifeIsWarmth", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(20), 0, "b_breakout", 0, "", 0, "", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 37059);
					__LIB_16__::func_793(uParam0, 37068);
					__LIB_16__::func_811(uParam0, 37490);
					break;
				case 20:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(18), __LIB_17__::func_309(3), __LIB_16__::func_807(45), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 5, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_811(uParam0, 37714);
					break;
				case 22:
					func_226(uParam0, "Pl_IG8_PDSNW_LayingDown_Enter", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(22), __LIB_17__::func_309(0), __LIB_16__::func_807(23), 0, "b_breakout", 0, "", 0, "S_IG8_PDSNW_LayingDown_Enter", "S_IG8_PDSNW_LayingDown_Idle01", 5, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 36376);
					__LIB_16__::func_793(uParam0, 36399);
					__LIB_16__::func_811(uParam0, 36736);
					break;
				case 23:
					switch (__LIB_3__::func_112(Local_14.f_3, Global_35, 1060437492 /* Float: 0.707f */))
					{
						case 0:
							func_226(uParam0, "Pl_IG8_PDSNW_LayingDown_OhHelloRT", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(24), 0, "b_breakout", 0, "", 0, "S_IG8_PDSNW_LayingDown_OhHelloFT", "S_IG8_PDSNW_LayingDown_SitIdle", 2, 1064514355 /* Float: 0.95f */);
							break;
						case 2:
							func_226(uParam0, "Pl_IG8_PDSNW_LayingDown_OhHelloRT", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(24), 0, "b_breakout", 0, "", 0, "S_IG8_PDSNW_LayingDown_OhHelloRT", "S_IG8_PDSNW_LayingDown_SitIdle", 2, 1064514355 /* Float: 0.95f */);
							break;
						case 3:
							func_226(uParam0, "Pl_IG8_PDSNW_LayingDown_OhHelloRT", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(24), 0, "b_breakout", 0, "", 0, "S_IG8_PDSNW_LayingDown_OhHelloLT", "S_IG8_PDSNW_LayingDown_SitIdle", 2, 1064514355 /* Float: 0.95f */);
							break;
						case 1:
							func_226(uParam0, "Pl_IG8_PDSNW_LayingDown_OhHelloRT", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(24), 0, "b_breakout", 0, "", 0, "S_IG8_PDSNW_LayingDown_OhHelloBK", "S_IG8_PDSNW_LayingDown_SitIdle", 2, 1064514355 /* Float: 0.95f */);
							break;
					}
					__LIB_16__::func_794(uParam0, 37059);
					__LIB_16__::func_793(uParam0, 37068);
					__LIB_16__::func_811(uParam0, 37490);
					break;
				case 24:
					func_226(uParam0, "Pl_IG8_PDSNW_LayingDown_Brutal", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(25), 0, "b_breakout", 0, "", 0, "S_IG8_PDSNW_LayingDown_Brutal", "S_IG8_PDSNW_LayingDown_Idle02", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 38137);
					__LIB_16__::func_793(uParam0, 38146);
					__LIB_16__::func_811(uParam0, 38333);
					break;
				case 25:
					func_226(uParam0, "Pl_IG8_PDSNW_LayingDown_Idle01", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), -1, -1, 0, "", 0, "", 0, "", "", 3, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 38342);
					__LIB_16__::func_793(uParam0, 38351);
					__LIB_16__::func_811(uParam0, 37714);
					break;
				case 26:
					func_226(uParam0, "", -1, -1, __LIB_17__::func_309(0), __LIB_16__::func_807(27), 0, "", 0, "", 0, "", "", 4, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 36376);
					__LIB_16__::func_793(uParam0, 36399);
					__LIB_16__::func_811(uParam0, 36736);
					break;
				case 27:
					func_226(uParam0, "Pl_IG9_PDSNW_WnT_PrevAggro", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(28), 1, "b_breakout", 0, "", 0, "", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 37059);
					__LIB_16__::func_793(uParam0, 37068);
					__LIB_16__::func_811(uParam0, 37490);
					break;
				case 28:
					func_226(uParam0, "", -1, -1, -1, -1, 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_811(uParam0, 37714);
					break;
				case 33:
					switch (__LIB_11__::func_133(24))
					{
						case 2:
							func_226(uParam0, "pl_IG4_PDSNW_Idle01", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(0), __LIB_17__::func_309(0), __LIB_16__::func_807(34), 0, "b_breakout", 0, "", 0, "s_IG4_PDSNW_Idle01", "s_IG4_PDSNW_Idle01", 5, 1064514355 /* Float: 0.95f */);
							break;
						case 5:
							func_226(uParam0, "pl_IG4_PDSNW_Idle01", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(0), __LIB_17__::func_309(0), __LIB_16__::func_807(35), 0, "b_breakout", 0, "", 0, "s_IG4_PDSNW_Idle01", "s_IG4_PDSNW_Idle01", 5, 1064514355 /* Float: 0.95f */);
							break;
						case 7:
							func_226(uParam0, "pl_IG4_PDSNW_Idle01", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(0), __LIB_17__::func_309(0), __LIB_16__::func_807(36), 0, "b_breakout", 0, "", 0, "s_IG4_PDSNW_Idle01", "s_IG4_PDSNW_Idle01", 5, 1064514355 /* Float: 0.95f */);
							break;
						case 10:
							func_226(uParam0, "pl_IG4_PDSNW_Idle01", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(0), __LIB_17__::func_309(0), __LIB_16__::func_807(37), 0, "b_breakout", 0, "", 0, "s_IG4_PDSNW_Idle01", "s_IG4_PDSNW_Idle01", 5, 1064514355 /* Float: 0.95f */);
							break;
					}
					__LIB_16__::func_794(uParam0, 36376);
					__LIB_16__::func_793(uParam0, 36399);
					__LIB_16__::func_811(uParam0, 36736);
					break;
				case 34:
					func_226(uParam0, "pl_IG11_PDSNW_CalloutAbove01", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(38), 1, "b_breakout", 0, "", 0, "s_IG11_PDSNW_CalloutAbove01", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 37059);
					__LIB_16__::func_793(uParam0, 37068);
					__LIB_16__::func_811(uParam0, 37490);
					break;
				case 35:
					func_226(uParam0, "pl_IG11_PDSNW_CalloutAbove02", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(38), 1, "b_breakout", 0, "", 0, "s_IG11_PDSNW_CalloutAbove02", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 37059);
					__LIB_16__::func_793(uParam0, 37068);
					__LIB_16__::func_811(uParam0, 37490);
					break;
				case 36:
					func_226(uParam0, "pl_IG11_PDSNW_CalloutAbove03", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(38), 1, "b_breakout", 0, "", 0, "s_IG11_PDSNW_CalloutAbove03", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 37059);
					__LIB_16__::func_793(uParam0, 37068);
					__LIB_16__::func_811(uParam0, 37490);
					break;
				case 37:
					func_226(uParam0, "pl_IG11_PDSNW_CalloutAbove04", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(0), __LIB_16__::func_807(38), 1, "b_breakout", 0, "", 0, "s_IG11_PDSNW_CalloutAbove04", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 37059);
					__LIB_16__::func_793(uParam0, 37068);
					__LIB_16__::func_811(uParam0, 37490);
					break;
				case 38:
					func_226(uParam0, "", -1, -1, -1, -1, 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 38342);
					__LIB_16__::func_793(uParam0, 38351);
					__LIB_16__::func_811(uParam0, 37714);
					break;
			}
			break;
		case 1:
			switch (iVar1)
			{
				case 39:
					func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", __LIB_17__::func_309(1), __LIB_16__::func_807(39), __LIB_17__::func_309(1), __LIB_16__::func_807(40), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 5, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 36376);
					__LIB_16__::func_793(uParam0, 36399);
					__LIB_16__::func_811(uParam0, 36736);
					break;
				case 40:
					func_226(uParam0, "pl_IG12_PDSNW_Aggros_StopIveDone", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(1), __LIB_16__::func_807(44), 1, "b_breakout", 0, "", 0, "s_IG12_PDSNW_Aggros_StopIveDone", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 38500);
					__LIB_16__::func_793(uParam0, 38524);
					__LIB_16__::func_811(uParam0, 38685);
					break;
				case 41:
					func_226(uParam0, "pl_IG12_PDSNW_Aggros_WhyWouldYou", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(1), __LIB_16__::func_807(44), 1, "b_breakout", 0, "", 0, "s_IG12_PDSNW_Aggros_WhyWouldYou", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 38500);
					__LIB_16__::func_793(uParam0, 38524);
					__LIB_16__::func_811(uParam0, 38685);
					break;
				case 42:
					func_226(uParam0, "pl_IG12_PDSNW_Aggros_StayOutOfThe", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(1), __LIB_16__::func_807(44), 1, "b_breakout", 0, "", 0, "s_IG12_PDSNW_Aggros_StayOutOfThe", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 38500);
					__LIB_16__::func_793(uParam0, 38524);
					__LIB_16__::func_811(uParam0, 38685);
					break;
				case 43:
					func_226(uParam0, "", -1, -1, -1, -1, 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 38500);
					__LIB_16__::func_793(uParam0, 38524);
					__LIB_16__::func_811(uParam0, 38685);
					break;
				case 44:
					func_226(uParam0, "", -1, -1, __LIB_17__::func_309(3), __LIB_16__::func_807(45), 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 38342);
					__LIB_16__::func_793(uParam0, 38351);
					__LIB_16__::func_811(uParam0, 37714);
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case 45:
					switch (__LIB_11__::func_133(24))
					{
						case 0:
						case 11:
							func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", __LIB_17__::func_309(3), __LIB_16__::func_807(45), __LIB_17__::func_309(3), __LIB_16__::func_807(46), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 4, 1064514355 /* Float: 0.95f */);
							__LIB_16__::func_794(uParam0, 38694);
							__LIB_16__::func_793(uParam0, 38703);
							__LIB_16__::func_811(uParam0, 38712);
							break;
						case 3:
						case 9:
							func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", __LIB_17__::func_309(3), __LIB_16__::func_807(45), __LIB_17__::func_309(3), __LIB_16__::func_807(47), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 4, 1064514355 /* Float: 0.95f */);
							__LIB_16__::func_794(uParam0, 38694);
							__LIB_16__::func_793(uParam0, 38703);
							__LIB_16__::func_811(uParam0, 38712);
							break;
						case 4:
						case 8:
							func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", __LIB_17__::func_309(3), __LIB_16__::func_807(45), __LIB_17__::func_309(3), __LIB_16__::func_807(48), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 4, 1064514355 /* Float: 0.95f */);
							__LIB_16__::func_794(uParam0, 38694);
							__LIB_16__::func_793(uParam0, 38703);
							__LIB_16__::func_811(uParam0, 38712);
							break;
						case 6:
							func_226(uParam0, "pl_IG13_PDSNW_StandingIdle", __LIB_17__::func_309(3), __LIB_16__::func_807(45), __LIB_17__::func_309(3), __LIB_16__::func_807(49), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_StandingIdle", "s_IG13_PDSNW_StandingIdle", 4, 1064514355 /* Float: 0.95f */);
							__LIB_16__::func_794(uParam0, 38694);
							__LIB_16__::func_793(uParam0, 38703);
							__LIB_16__::func_811(uParam0, 38712);
							break;
					}
					break;
				case 46:
					func_226(uParam0, "pl_IG13_PDSNW_LINGER_GoMyFriend", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(3), __LIB_16__::func_807(50), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_LINGER_GoMyFriend", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 38694);
					__LIB_16__::func_793(uParam0, 38703);
					__LIB_16__::func_811(uParam0, 38712);
					break;
				case 47:
					func_226(uParam0, "pl_IG13_PDSNW_LINGER_NowIMustBe", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(3), __LIB_16__::func_807(50), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_LINGER_NowIMustBe", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 38694);
					__LIB_16__::func_793(uParam0, 38703);
					__LIB_16__::func_811(uParam0, 38712);
					break;
				case 48:
					func_226(uParam0, "pl_IG13_PDSNW_LINGER_NowPlease", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(3), __LIB_16__::func_807(50), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_LINGER_NowPlease", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 38694);
					__LIB_16__::func_793(uParam0, 38703);
					__LIB_16__::func_811(uParam0, 38712);
					break;
				case 49:
					func_226(uParam0, "pl_IG13_PDSNW_LINGER_WellIfYou", __LIB_17__::func_309(iVar0), __LIB_16__::func_807(iVar1), __LIB_17__::func_309(3), __LIB_16__::func_807(50), 0, "b_breakout", 0, "", 0, "s_IG13_PDSNW_LINGER_WellIfYou", "s_IG13_PDSNW_StandingIdle", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 38694);
					__LIB_16__::func_793(uParam0, 38703);
					__LIB_16__::func_811(uParam0, 38712);
					break;
				case 50:
					func_226(uParam0, "", -1, -1, -1, -1, 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					__LIB_16__::func_794(uParam0, 38342);
					__LIB_16__::func_793(uParam0, 38351);
					__LIB_16__::func_811(uParam0, 37714);
					break;
			}
			break;
	}
	iVar3 = __LIB_11__::func_133(24);
	switch (iVar3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar2 = 43;
			break;
	}
	__LIB_16__::func_813(uParam0, __LIB_17__::func_309(3), __LIB_16__::func_807(45));
	__LIB_17__::func_53(uParam0, __LIB_17__::func_309(1), __LIB_16__::func_807(iVar2));
	return 0;
}

int func_127(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!__LIB_16__::func_833(iParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_0xB56D41A694E42E86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_0x18262CAFEBB5FBE1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		if (!__LIB_0__::func_255(iVar1, 0))
		{
			__LIB_16__::func_796(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return 1;
	}
	return 0;
}

bool func_131(var uParam0)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	float fVar5;
	iVar0 = __LIB_11__::func_133(24);
	if (!__LIB_0__::func_393(Global_35, Global_1396257[24 /*638*/][iVar0 /*48*/].f_47, 0, 1))
	{
		fVar1 = (__LIB_8__::func_150(Global_1396257[24 /*638*/][iVar0 /*48*/].f_47) + 25f);
		vVar2 = { VOLUME::_GET_VOLUME_COORDS(Global_1396257[24 /*638*/][iVar0 /*48*/].f_47) };
		fVar5 = __LIB_0__::func_94(Global_35, vVar2, 0);
		if (fVar5 >= fVar1)
		{
			return true;
		}
	}
	return false;
}

struct<4> func_142()
{
	struct<4> Var0;
	switch (__LIB_11__::func_133(24))
	{
		case 0:
			Var0 = { -2233.602f, -2850.517f, 62.7628f };
			Var0.f_3 = 208.7791f;
			break;
		case 1:
			Var0 = { -3198.999f, -2538.554f, 66.5911f };
			Var0.f_3 = 292.1099f;
			break;
		case 2:
			Var0 = { -2927.12f, -2860.494f, 85.7312f };
			Var0.f_3 = 123.2795f;
			break;
		case 3:
			Var0 = { -3267.86f, -3416.677f, 39.5041f };
			Var0.f_3 = 332.5893f;
			break;
		case 4:
			Var0 = { -3572.794f, -3565.222f, 33.505f };
			Var0.f_3 = 260.2986f;
			break;
		case 5:
			Var0 = { -4399.393f, -3606.746f, 48.6452f };
			Var0.f_3 = 348.5519f;
			break;
		case 6:
			Var0 = { -4988.676f, -4060.992f, 1.0884f };
			Var0.f_3 = 163.9257f;
			break;
		case 7:
			Var0 = { -5336.702f, -3535.12f, 5.8226f };
			Var0.f_3 = 306.198f;
			break;
		case 8:
			Var0 = { -5374.994f, -4053.294f, -5.2292f };
			Var0.f_3 = 170.3096f;
			break;
		case 9:
			Var0 = { -5413.131f, -2606.156f, 2.5597f };
			Var0.f_3 = 255.0981f;
			break;
		case 10:
			Var0 = { -4956.249f, -3198.202f, 26.3575f };
			Var0.f_3 = 292.8281f;
			break;
		case 11:
			Var0 = { -4594.695f, -3045.041f, 6.5776f };
			Var0.f_3 = 4.7478f;
			break;
	}
	return Var0;
}

void func_144()
{
	if (!__LIB_0__::func_27(iLocal_714, 1) || __LIB_0__::func_27(iLocal_714, 2))
	{
		switch (__LIB_11__::func_133(24))
		{
			case 0:
				func_112(&(Local_14.f_205.f_145), __LIB_17__::func_309(0), __LIB_16__::func_807(0), &(Local_14.f_205.f_173));
				break;
			case 3:
				func_112(&(Local_14.f_205.f_145), __LIB_17__::func_309(0), __LIB_16__::func_807(3), &(Local_14.f_205.f_173));
				break;
			case 4:
				func_112(&(Local_14.f_205.f_145), __LIB_17__::func_309(0), __LIB_16__::func_807(6), &(Local_14.f_205.f_173));
				break;
			case 6:
				func_112(&(Local_14.f_205.f_145), __LIB_17__::func_309(0), __LIB_16__::func_807(9), &(Local_14.f_205.f_173));
				break;
			case 8:
				func_112(&(Local_14.f_205.f_145), __LIB_17__::func_309(0), __LIB_16__::func_807(12), &(Local_14.f_205.f_173));
				break;
			case 9:
				func_112(&(Local_14.f_205.f_145), __LIB_17__::func_309(0), __LIB_16__::func_807(15), &(Local_14.f_205.f_173));
				break;
			case 11:
				func_112(&(Local_14.f_205.f_145), __LIB_17__::func_309(0), __LIB_16__::func_807(18), &(Local_14.f_205.f_173));
				break;
			case 1:
				func_112(&(Local_14.f_205.f_145), __LIB_17__::func_309(0), __LIB_16__::func_807(22), &(Local_14.f_205.f_173));
				break;
			case 2:
				func_112(&(Local_14.f_205.f_145), __LIB_17__::func_309(0), __LIB_16__::func_807(33), &(Local_14.f_205.f_173));
				break;
			case 5:
				func_112(&(Local_14.f_205.f_145), __LIB_17__::func_309(0), __LIB_16__::func_807(33), &(Local_14.f_205.f_173));
				break;
			case 7:
				func_112(&(Local_14.f_205.f_145), __LIB_17__::func_309(0), __LIB_16__::func_807(33), &(Local_14.f_205.f_173));
				break;
			case 10:
				func_112(&(Local_14.f_205.f_145), __LIB_17__::func_309(0), __LIB_16__::func_807(33), &(Local_14.f_205.f_173));
				break;
		}
	}
	else
	{
		func_112(&(Local_14.f_205.f_145), __LIB_17__::func_309(0), __LIB_16__::func_807(26), &(Local_14.f_205.f_173));
	}
}

void func_147()
{
	func_268(&(Local_14.f_205[0 /*36*/]), Local_14.f_3, "IG_SUNWORSHIPPER", Global_35, "player_three", "player_zero", 0, "", 0, "", 0, "", 0, "", 0, 0, 0, 0);
	func_268(&(Local_14.f_205[1 /*36*/]), Local_14.f_3, "IG_SUNWORSHIPPER", Global_35, "player_three", "player_zero", 0, "", 0, "", 0, "", 0, "", 0, 0, 0, 0);
	func_268(&(Local_14.f_205[2 /*36*/]), Local_14.f_3, "IG_SUNWORSHIPPER", Global_35, "player_three", "player_zero", 0, "", 0, "", 0, "", 0, "", 0, 0, 0, 0);
	func_268(&(Local_14.f_205[3 /*36*/]), Local_14.f_3, "IG_SUNWORSHIPPER", Global_35, "player_three", "player_zero", 0, "", 0, "", 0, "", 0, "", 0, 0, 0, 0);
}

int func_154(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_154(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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

bool func_155(int iParam0)
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_161) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_161, true, 0))
	{
		return false;
	}
	iVar0 = __LIB_17__::func_306(iParam0);
	if (iVar0 == 0)
	{
		if ((__LIB_0__::func_27(Local_14.f_193, 8) || __LIB_0__::func_27(Local_14.f_193, 16)) || __LIB_0__::func_27(Local_14.f_193, 128))
		{
			__LIB_19__::func_404(&Local_14, 0, 0);
			return false;
		}
		else
		{
			__LIB_19__::func_404(&Local_14, 0, 1);
			return true;
		}
	}
	if (__LIB_0__::func_27(Local_14.f_193, 128) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3))
	{
		__LIB_19__::func_404(&Local_14, 1, 0);
		return false;
	}
	__LIB_19__::func_404(&Local_14, 1, 1);
	return true;
}

int func_204(int iParam0)
{
	return iParam0->f_205.f_313;
}

void func_206(int iParam0, int iParam1, int iParam2)
{
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::SET_PED_TO_RAGDOLL(iParam0, iParam1, iParam2, 1, false, false, false);
}

void func_207()
{
	__LIB_16__::func_806(&(Local_14.f_3), &uLocal_717, joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 80f, -1f);
}

void func_208()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar0 = iLocal_725;
	if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(Local_14.f_3, true, false)) > 20f)
	{
		return;
	}
	if (__LIB_0__::func_27(Local_14.f_193, 1024))
	{
		iVar2 = __LIB_1__::func_372(Global_35, 0);
		if (WEAPON::_0x705BE297EEBDB95D(iVar2))
		{
			iVar0 = 13;
		}
	}
	if (iLocal_725 == iVar0 || iVar0 == -1)
	{
		return;
	}
	sVar1 = func_344(iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3))
	{
		__LIB_16__::func_866(Local_14.f_3, sVar1, 291934926, Global_35, 0, "SUN_WORSHIPPER", func_345(iVar0), 1);
	}
	iLocal_725 = iVar0;
}

bool func_212(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_314)
	{
		case 0:
			__LIB_19__::func_7(uParam0, __LIB_19__::func_544(uParam0, uParam1), 1);
			break;
		case 1:
			__LIB_19__::func_7(uParam0, __LIB_19__::func_545(uParam0, uParam1), 1);
			break;
		case 2:
			__LIB_19__::func_7(uParam0, __LIB_19__::func_546(uParam0, uParam1), 1);
			break;
		case 3:
			if (__LIB_19__::func_547(uParam0, uParam1))
			{
				__LIB_19__::func_7(uParam0, 4, 1);
			}
			break;
		case 4:
			if (!__LIB_17__::func_312(uParam0, 2))
			{
				Stack.Push(((iParam2 == 5 || (__LIB_17__::func_314(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_317 && __LIB_17__::func_314(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_23);
				if (StackVal || StackVal)
				{
					func_354(uParam0, 2);
				}
			}
			else
			{
				__LIB_19__::func_7(uParam0, 5, 1);
			}
			break;
		case 5:
			if (!__LIB_17__::func_312(uParam0, 4))
			{
				if (__LIB_19__::func_612(uParam0, uParam1, iParam2))
				{
					func_354(uParam0, 4);
				}
			}
			if (!__LIB_17__::func_312(uParam0, 8))
			{
				Stack.Push(((iParam2 == 5 || (__LIB_17__::func_314(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_317 && __LIB_17__::func_314(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_24);
				if (StackVal || StackVal)
				{
					func_354(uParam0, 8);
				}
			}
			if (__LIB_17__::func_312(uParam0, 4) && __LIB_17__::func_312(uParam0, 8))
			{
				__LIB_19__::func_7(uParam0, 6, 1);
			}
			break;
		case 6:
			if (!__LIB_17__::func_312(uParam0, 16))
			{
				if (__LIB_17__::func_320(uParam0, uParam1))
				{
					func_354(uParam0, 16);
				}
			}
			if (!__LIB_17__::func_312(uParam0, 32))
			{
				Stack.Push(((iParam2 == 5 || (__LIB_17__::func_314(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_317 && __LIB_17__::func_314(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_25);
				if (StackVal || StackVal)
				{
					func_354(uParam0, 32);
				}
			}
			if (__LIB_17__::func_312(uParam0, 16) && __LIB_17__::func_312(uParam0, 32))
			{
				__LIB_19__::func_7(uParam0, 0, 1);
				return true;
			}
			break;
	}
	return false;
}

int func_223(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 51)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

void func_226(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, char* sParam12, int iParam13, int iParam14)
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

int func_229(var uParam0)
{
	struct<2> Var0;
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
	{
		return 0;
	}
	if (func_363(uParam0))
	{
		return 1;
	}
	if (__LIB_0__::func_27(iLocal_714, 1) && !__LIB_0__::func_27(iLocal_714, 2))
	{
		__LIB_1__::func_683(&iLocal_714, 2);
	}
	if (__LIB_0__::func_48(Global_35, Local_14.f_3, func_364(), 1) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_570[1], true, 0))
	{
		__LIB_1__::func_683(&(Local_14.f_193), 32768);
		return 1;
	}
	if ((VOLUME::_DOES_VOLUME_EXIST(iLocal_570[2]) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_570[2], true, 0)) && ENTITY::GET_ENTITY_SPEED(Global_35) >= 6.5f)
	{
		__LIB_1__::func_683(&(Local_14.f_193), 32768);
		return 1;
	}
	if (__LIB_0__::func_27(Local_14.f_193, 8))
	{
		__LIB_16__::func_866(Global_35, "GREET_MALE", -417894478, Local_14.f_3, 1, 0, 0, 1);
		__LIB_1__::func_683(&(Local_14.f_193), 32768);
		return 1;
	}
	if (__LIB_0__::func_27(Local_14.f_193, 16))
	{
		Var0 = { func_365() };
		__LIB_16__::func_866(Global_35, Var0, -417894478, Local_14.f_3, 0, 0, Var0.f_1, 1);
		__LIB_1__::func_683(&(Local_14.f_193), 32768);
		return 1;
	}
	return 0;
}

int func_231(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (func_363(uParam0))
	{
		return 1;
	}
	iVar0 = __LIB_11__::func_133(24);
	if (((iVar0 != 2 && iVar0 != 5) && iVar0 != 7) && iVar0 != 10)
	{
		iVar1 = __LIB_1__::func_372(Global_35, 0);
		iVar2 = __LIB_1__::func_372(Global_35, 1);
		if (iVar1 != joaat("WEAPON_UNARMED") || iVar2 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
		}
	}
	if (__LIB_11__::func_133(24) == 1)
	{
		__LIB_16__::func_980(&(Local_14.f_193), 256);
		__LIB_1__::func_683(&(Local_14.f_193), 4096);
		__LIB_1__::func_683(&(Local_14.f_193), 2048);
		__LIB_1__::func_683(&(Local_14.f_193), 16384);
		if (!__LIB_0__::func_163(Global_35, 242628503))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, -3196.577f, -2537.936f, 66.851f, 1f, 20000, (ENTITY::GET_ENTITY_HEADING(Local_14.f_3) - 180f), 0.5f, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_14.f_3, 0, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
		}
	}
	else
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SunWorpshiperBubble");
	}
	__LIB_1__::func_683(&(Local_14.f_193), 8);
	return 1;
}

int func_234(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_11__::func_133(24);
	if (iVar0 != 1)
	{
		__LIB_2__::func_966(Local_14.f_3, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		func_368();
	}
	else if (__LIB_1__::func_375(Local_14.f_3, 1000, 0, 0))
	{
		func_206(Local_14.f_3, 10, 5000);
	}
	if (__LIB_17__::func_312(&(Local_14.f_205), 4))
	{
		__LIB_1__::func_683(&(Local_14.f_193), 1024);
		return 1;
	}
	if (!__LIB_17__::func_109())
	{
		return 0;
	}
	if (iVar0 == 1)
	{
		__LIB_1__::func_725();
		func_127(&(Local_14.f_3), &(iLocal_570[6]), &iLocal_727, 0.5f, 10f, 2048);
	}
	if (((((((iVar0 == 0 || iVar0 == 3) || iVar0 == 4) || iVar0 == 6) || iVar0 == 8) || iVar0 == 9) || iVar0 == 11) && ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_3, -1254226615))
	{
		__LIB_16__::func_931(Local_14.f_3, Global_35, &uLocal_676, 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
	}
	if ((((iVar0 == 2 || iVar0 == 5) || iVar0 == 7) || iVar0 == 10) && AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3))
	{
		func_372(&(Local_14.f_3), &uLocal_718, &uLocal_722, &uLocal_716, 4, 0, 4000, 0);
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		__LIB_16__::func_866(Local_14.f_3, "PLAYER_AIMING_NOBODY", 1744022339, Global_35, 0, "SUN_WORSHIPPER", 1, 1);
		return 1;
	}
	return 0;
}

int func_235(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_11__::func_133(24);
	if ((((((iVar0 == 0 || iVar0 == 3) || iVar0 == 4) || iVar0 == 6) || iVar0 == 8) || iVar0 == 9) || iVar0 == 11)
	{
		func_373();
	}
	else if (iVar0 == 10)
	{
		func_374(Local_14.f_3, -4975.164f, -3205.659f, 11.1994f);
		if (__LIB_0__::func_163(Local_14.f_3, 2106541073))
		{
			__LIB_1__::func_392(&(Local_14.f_11), 1);
			__LIB_1__::func_393(&(Local_14.f_11), 1);
			__LIB_10__::func_590(&(Local_14.f_11), 0);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 230, true);
			__LIB_1__::func_727(Local_14.f_3, 1);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
	{
		__LIB_1__::func_727(Local_14.f_3, 1);
	}
	return 1;
}

int func_236(var uParam0)
{
	vector3 vVar0;
	bool bVar4;
	int iVar5;
	vVar0 = { func_142() };
	iVar5 = __LIB_11__::func_133(24);
	bVar4 = __LIB_9__::func_429(Local_14.f_3, vVar0, 2f, 1, 1);
	if (((Local_14.f_550 && __LIB_16__::func_825(&(Local_14.f_529))) && !__LIB_16__::func_809(&(Local_14.f_529))) && !__LIB_17__::func_314(&(Local_14.f_205), 4))
	{
		__LIB_1__::func_683(&(Local_14.f_193), 64);
		return 1;
	}
	if (iVar5 != 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
		{
			__LIB_1__::func_727(Local_14.f_3, 0);
		}
		if (!bVar4)
		{
			if ((((((iVar5 == 0 || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 8) || iVar5 == 9) || iVar5 == 11)
			{
				func_373();
			}
		}
	}
	if (((bVar4 && ((((((iVar5 == 0 || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 8) || iVar5 == 9) || iVar5 == 11)) && !PED::IS_PED_RAGDOLL(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3))
	{
		return 1;
	}
	else if (((iVar5 == 2 || iVar5 == 5) || iVar5 == 7) || iVar5 == 10)
	{
		__LIB_1__::func_683(&(Local_14.f_193), 64);
		return 1;
	}
	return 0;
}

int func_239(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_11__::func_133(24);
	if (__LIB_17__::func_312(&(Local_14.f_205), 4) && iVar0 != 1)
	{
		return 1;
	}
	if (iVar0 == 1)
	{
		if (__LIB_1__::func_375(Local_14.f_3, 1000, 0, 0))
		{
			func_206(Local_14.f_3, 10, 5000);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_3, joaat("BACKTOIDLE")))
		{
			__LIB_17__::func_318(&Local_14, 0);
			__LIB_16__::func_980(&(Local_14.f_193), 4096);
			__LIB_16__::func_980(&(Local_14.f_193), 2048);
			__LIB_16__::func_980(&(Local_14.f_193), 16384);
			__LIB_1__::func_683(&(Local_14.f_193), 256);
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SunWorpshiperBubble");
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SunWorpshiperConvo");
		}
		__LIB_1__::func_725();
	}
	if (__LIB_0__::func_27(Local_14.f_193, 2))
	{
		return 1;
	}
	return 0;
}

int func_242(var uParam0)
{
	int iVar0;
	if (((Local_14.f_550 && __LIB_16__::func_825(&(Local_14.f_529))) && !__LIB_16__::func_809(&(Local_14.f_529))) && !__LIB_17__::func_314(&(Local_14.f_205), 4))
	{
		__LIB_16__::func_820(uParam0, __LIB_17__::func_309(0), __LIB_16__::func_807(2));
		return 1;
	}
	iVar0 = __LIB_11__::func_133(24);
	func_380();
	if (((iVar0 == 2 || iVar0 == 5) || iVar0 == 7) || iVar0 == 10)
	{
		return 1;
	}
	if (iVar0 != 1)
	{
		func_368();
		func_381();
	}
	return 0;
}

int func_243(var uParam0)
{
	if (PED::IS_PED_RAGDOLL(Local_14.f_3))
	{
		return 0;
	}
	return 1;
}

int func_244(var uParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	if (!__LIB_0__::func_27(Local_14.f_193, 32))
	{
		__LIB_16__::func_980(&(Local_14.f_193), 256);
		__LIB_1__::func_683(&(Local_14.f_193), 32);
		if (uParam0->f_6.f_1 == __LIB_16__::func_807(43))
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 10);
			iVar1 = iVar0;
			sVar2 = func_344(iVar1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(Local_14.f_3, 0);
				__LIB_16__::func_866(Local_14.f_3, sVar2, 1744022339, Global_35, 1, "SUN_WORSHIPPER", func_345(iVar1), 1);
			}
		}
		__LIB_16__::func_789(24);
		__LIB_4__::func_268(1, 0, 0, "", Local_14.f_3, 0, 1065353216 /* Float: 1f */, 0);
		func_383();
	}
	return 1;
}

void func_268(var uParam0, var uParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	if (uParam0->f_35)
	{
		return;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_4 = sParam2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		uParam0->f_5 = iParam3;
		if (__LIB_0__::func_181())
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				uParam0->f_6 = "JOHN";
			}
			else
			{
				uParam0->f_6 = sParam4;
			}
			uParam0->f_23 = 0;
			uParam0->f_24 = 0;
		}
		else
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				uParam0->f_6 = "ARTHUR";
			}
			else
			{
				uParam0->f_6 = sParam5;
			}
			uParam0->f_23 = 1;
			uParam0->f_24 = "b_PlayerArthur";
		}
	}
	uParam0->f_7 = iParam6;
	uParam0->f_8 = sParam7;
	uParam0->f_9 = iParam8;
	uParam0->f_10 = sParam9;
	uParam0->f_11 = iParam10;
	uParam0->f_12 = sParam11;
	uParam0->f_13 = iParam12;
	uParam0->f_14 = sParam13;
	uParam0->f_15 = iParam14;
	uParam0->f_16 = iParam15;
	uParam0->f_17 = iParam16;
	uParam0->f_18 = iParam17;
}

char* func_344(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return "PLAYER_STILL_HANGING";
		case 4:
			return "GUN_RUN";
		case 5:
		case 11:
			return "PLEAD";
		case 6:
			return "INTIMIDATED_GEN";
		case 12:
			return "GREET_PLAYER_MASK";
		case 13:
			return "PLAYER_WEAPON_EQUIPPED";
		case 14:
			return "PLAYER_LASSO_SWINGING";
		case 7:
			return "PANIC_HELP";
		case 8:
			return "SCARED_HELP";
		case 9:
			return "GENERIC_ANGRY_SHOUT";
		default:
			break;
	}
	return "";
}

int func_345(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
		case 14:
			return 1;
		case 1:
		case 5:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_354(var uParam0, int iParam1)
{
	__LIB_1__::func_683(&(uParam0->f_315), iParam1);
}

bool func_363(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_11__::func_133(24);
	if (__LIB_0__::func_27(Local_14.f_193, 131072))
	{
		return true;
	}
	if (iVar0 != 1)
	{
		if (((Local_14.f_550 && __LIB_16__::func_825(&(Local_14.f_529))) && !__LIB_16__::func_809(&(Local_14.f_529))) && !__LIB_17__::func_314(&(Local_14.f_205), 4))
		{
			__LIB_16__::func_820(uParam0, __LIB_17__::func_309(3), __LIB_16__::func_807(50));
			__LIB_1__::func_683(&(Local_14.f_193), 131072);
			return true;
		}
	}
	else if (((Local_14.f_550 && __LIB_16__::func_825(&(Local_14.f_529))) && !__LIB_16__::func_809(&(Local_14.f_529))) && !__LIB_17__::func_314(&(Local_14.f_205), 4))
	{
		func_206(Local_14.f_3, 10, 500);
		__LIB_16__::func_820(uParam0, __LIB_17__::func_309(3), __LIB_16__::func_807(50));
		__LIB_1__::func_683(&(Local_14.f_193), 131072);
		return true;
	}
	return false;
}

float func_364()
{
	float fVar0;
	switch (__LIB_11__::func_133(24))
	{
		case 0:
			fVar0 = 8f;
			break;
		case 1:
			fVar0 = 8f;
			break;
		case 2:
			fVar0 = 30f;
			break;
		case 3:
			fVar0 = 2f;
			break;
		case 4:
			fVar0 = 8f;
			break;
		case 5:
			fVar0 = 30f;
			break;
		case 6:
			fVar0 = 8f;
			break;
		case 7:
			fVar0 = 30f;
			break;
		case 8:
			fVar0 = 8f;
			break;
		case 9:
			fVar0 = 8f;
			break;
		case 10:
			fVar0 = 30f;
			break;
		case 11:
			fVar0 = 8f;
			break;
	}
	if (ENTITY::GET_ENTITY_SPEED(Global_35) >= 6.5f)
	{
		fVar0 = (fVar0 * 2f);
	}
	return fVar0;
}

struct<2> func_365()
{
	struct<2> Var0;
	switch (__LIB_11__::func_133(24))
	{
		case 0:
			Var0 = "INSULT_MALE_CONV_PART1";
			Var0.f_1 = 5;
			break;
		case 1:
			Var0 = "INSULT_MALE_CONV_PART1";
			Var0.f_1 = 6;
			break;
		case 3:
			Var0 = "INSULT_MALE_CONV_PART1";
			Var0.f_1 = 8;
			break;
		case 4:
			Var0 = "INSULT_MALE_CONV_PART1";
			Var0.f_1 = 2;
			break;
		case 6:
			Var0 = "INSULT_MET_EARLIER_CONV_PART1";
			Var0.f_1 = 1;
			break;
		case 8:
			Var0 = "INSULT_MET_EARLIER_CONV_PART1";
			Var0.f_1 = 2;
			break;
		case 9:
			Var0 = "INSULT_MET_EARLIER_CONV_PART1";
			Var0.f_1 = 4;
			break;
		case 11:
			Var0 = "INSULT_MET_EARLIER_CONV_PART1";
			Var0.f_1 = 5;
			break;
		default:
			Var0 = "INSULT_MALE_CONV_PART1";
			Var0.f_1 = 9;
			break;
	}
	return Var0;
}

void func_368()
{
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (__LIB_0__::func_665(Global_35, Local_14.f_3, 1, 1) > 10f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_3, 1.5f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_3, 1f);
		}
	}
	else if (__LIB_0__::func_665(Global_35, Local_14.f_3, 1, 1) > 10f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_3, 2f);
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_3, 1.5f);
	}
}

int func_372(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return 0;
	}
	if (*uParam1)
	{
		if (!__LIB_0__::func_75(uParam2))
		{
			__LIB_0__::func_268(uParam2, 0f);
			return 0;
		}
		else if (__LIB_1__::func_871(uParam2) > iParam6)
		{
			__LIB_0__::func_37(uParam2);
			*uParam3++;
			*uParam1 = 0;
			return 0;
		}
		else
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		if (fParam7 == 0f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
			{
				return 0;
			}
			fParam7 = __LIB_0__::func_665(*uParam0, Global_35, 1, 1);
		}
		if (iParam5 == 0)
		{
			if (fParam7 >= 0f && fParam7 < 10f)
			{
				iParam5 = 249295937;
			}
			else if (fParam7 >= 10f && fParam7 < 20f)
			{
				iParam5 = 1715123483;
			}
			else if (fParam7 >= 20f && fParam7 < 30f)
			{
				iParam5 = 1891783641;
			}
			else if (fParam7 >= 30f && fParam7 < 50f)
			{
				iParam5 = joaat("SONAR_OVERHEARD_BEAT_BIG");
			}
			else
			{
				iParam5 = 1515458263;
			}
		}
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_2(iParam5, *uParam0);
		*uParam1 = 1;
		return 1;
	}
	return 0;
}

void func_373()
{
	struct<4> Var0;
	Var0 = { func_142() };
	if (!__LIB_0__::func_163(Local_14.f_3, 713668775))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_14.f_3, Var0, 1f, -1, 0.5f, 0, Var0.f_3);
	}
	PED::SET_PED_KEEP_TASK(Local_14.f_3, true);
}

void func_374(int iParam0, vector3 vParam1)
{
	if (!__LIB_0__::func_163(iParam0, 2106541073))
	{
		TASK::TASK_GO_STRAIGHT_TO_COORD(iParam0, vParam1, 1f, -1, 40000f, 0.5f, 0);
	}
}

void func_380()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	iVar0 = iLocal_725;
	if (!__LIB_0__::func_75(&uLocal_719))
	{
		__LIB_17__::func_321(&uLocal_719, 0);
	}
	if (iLocal_715 <= 0)
	{
		iLocal_715 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 20001);
	}
	if (__LIB_19__::func_406(&uLocal_719, iLocal_715))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_570[2]))
		{
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_570[2], true, 0))
			{
				return;
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_570[1], true, 0))
		{
			return;
		}
		iVar3 = __LIB_1__::func_372(Global_35, 0);
		if (WEAPON::_0x705BE297EEBDB95D(iVar3))
		{
			iVar0 = 13;
		}
		else
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			iVar0 = iVar1;
		}
		if (iLocal_725 == iVar0 || iVar0 == -1)
		{
			return;
		}
		sVar2 = func_344(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3))
		{
			__LIB_16__::func_866(Local_14.f_3, sVar2, 291934926, Global_35, 0, "SUN_WORSHIPPER", func_345(iVar0), 1);
		}
		iLocal_725 = iVar0;
		iLocal_715 = 0;
	}
}

void func_381()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	sVar0 = "script_special_ped@pdsnw_sun_worshipper@ig@ig_4";
	sVar1 = "ig4_pdsnw_standtoidle01_ig_sunworshipper";
	sVar2 = "ig4_pdsnw_standtoidle01_ig_sunworshipper_face";
	sVar3 = "ig4_pdsnw_wnt_idle01_ig_sunworshipper";
	sVar4 = "ig4_pdsnw_wnt_idle01_ig_sunworshipper_face";
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_3, sVar0, sVar3, 1))
	{
		return;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		return;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_3, sVar0, sVar1, 1))
	{
		TASK::TASK_PLAY_ANIM(Local_14.f_3, sVar0, sVar1, 4f, -8f, -1, 1042, 0f, false, 0, false, 0, false);
		TASK::TASK_PLAY_ANIM(Local_14.f_3, sVar0, sVar2, 4f, -8f, -1, 1, 0f, false, 0, false, 0, false);
	}
	if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_14.f_3, sVar0, sVar1, 1))
	{
		TASK::TASK_PLAY_ANIM(Local_14.f_3, sVar0, sVar3, 4f, -2f, -1, 2065, 0f, false, 0, false, 0, false);
		TASK::TASK_PLAY_ANIM(Local_14.f_3, sVar0, sVar4, 4f, -8f, -1, 1, 0f, false, 0, false, 0, false);
	}
}

void func_383()
{
	if (!__LIB_0__::func_163(Local_14.f_3, 518218985) && !PED::_0x77525BBF433F2CD6(Local_14.f_3))
	{
		PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, false);
		TASK::TASK_SMART_FLEE_PED(Local_14.f_3, Global_35, 6000f, -1, 0, 1077936128 /* Float: 3f */, 0);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_3, 17, true);
	PED::SET_PED_KEEP_TASK(Local_14.f_3, true);
}

