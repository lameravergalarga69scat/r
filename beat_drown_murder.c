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
	int iLocal_14[2] = { 0, 0 };
	int iLocal_17 = 0;
	var uLocal_18 = 6;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
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
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	struct<2> Local_67[6];
	struct<8> Local_80 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_88[1];
	struct<193> Local_101 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_294 = 0;
	struct<10> Local_295 = { 0, -89429847, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<32> Local_305[2];
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372[2] = { 0, 0 };
	int iLocal_375 = 0;
	vector3 vLocal_376 = { 0f, 0f, 0f };
	vector3 vLocal_379 = { 0f, 0f, 0f };
	vector3 vLocal_382 = { 0f, 0f, 0f };
	vector3 vLocal_385[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_395 = 0f;
	float fLocal_396 = 0f;
	bool bLocal_397 = false;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404[2] = { 0, 0 };
	int iLocal_407[2] = { 0, 0 };
	var uLocal_410[2] = { 0, 0 };
	var uLocal_413[2] = { 0, 0 };
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	var uLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	struct<23> Local_423 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	struct<21> Local_463[2];
	struct<17> Local_506[2];
	struct<17> Local_541[2];
	int iLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 1112014848;
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
	var uLocal_650 = 9;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 1;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 24;
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
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
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
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = -1082130432;
	var uLocal_762 = -1082130432;
	var uLocal_763 = 1103626240;
	var uLocal_764 = -1067450368;
	var uLocal_765 = 1097859072;
	var uLocal_766 = 1073741824;
	var uLocal_767 = 4000;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 1073741824;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	int iLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = -1;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 1097859072;
	var uLocal_814 = 1000;
	var uLocal_815 = 1067450368;
	var uLocal_816 = 5000;
	var uLocal_817 = 42;
	var uLocal_818 = 1103626240;
	var uLocal_819 = 1077936128;
	var uLocal_820 = 1106247680;
	var uLocal_821 = 1103101952;
	var uLocal_822 = 1097859072;
	var uLocal_823 = 1103626240;
	int iLocal_824 = 0;
	char[] cLocal_825[8] = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	bool bLocal_828 = false;
	bool bLocal_829 = false;
	bool bLocal_830 = false;
	bool bLocal_831 = false;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859[2] = { 0, 0 };
	var uLocal_862[2] = { 0, 0 };
	int iLocal_865 = 0;
	struct<7> Local_866 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_576 = -1;
	cLocal_825 = "DROWN";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_829 = true;
	}
	if (!bLocal_829)
	{
		Local_101.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_101.f_43 = __LIB_0__::func_12();
		Local_101.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		__LIB_3__::func_368(&Local_101, 1);
		func_5();
		func_6();
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_829, 947, 0);
		if (bLocal_829)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_793)
			{
				case 0:
					if (func_9())
					{
						iLocal_793 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_454(&Local_101, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_11(&Local_101, &iLocal_370, &(Local_101.f_51.f_4));
						__LIB_3__::func_455(&Local_101, iLocal_370, 1905);
						func_14(&uLocal_577);
						__LIB_3__::func_618(Local_101.f_51, 15f, 1, 0, 0, 0, 0);
						iLocal_793 = 3;
					}
					else if (Local_101.f_160)
					{
						func_7();
					}
					break;
				case 3:
					if (func_16())
					{
						func_17();
						func_18();
						func_19();
						func_20();
						func_21();
						__LIB_2__::func_659(&(uLocal_859[0]), Local_101.f_51, 1.5f, 0, 0);
						__LIB_3__::func_337(&(uLocal_862[0]), Local_101.f_51, 1.5f);
						__LIB_2__::func_659(&(uLocal_859[1]), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_101.f_51, Local_101.f_51.f_3, -1f, -2.75f, 0f), 1.5f, 0, 0);
						__LIB_3__::func_337(&(uLocal_862[1]), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_101.f_51, Local_101.f_51.f_3, -1f, -2.75f, 0f), 1.5f);
						func_24();
						if (!__LIB_0__::func_86(Local_88[0 /*12*/]))
						{
							__LIB_3__::func_400(Local_101.f_51, &Local_88, 0, 0, 0, -1, 0);
						}
						else if (Local_88[0 /*12*/].f_7 == 0)
						{
						}
						else
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_88[0 /*12*/].f_7);
						}
						iLocal_793 = 4;
					}
					break;
				case 4:
					if (!__LIB_3__::func_466(&Local_101, &uLocal_410, iLocal_17, 0, 1, 0, 1, 0))
					{
						func_7();
					}
					if (!Local_101.f_46)
					{
						__LIB_3__::func_972(&Local_295, &(uLocal_413[0]), 0);
						if (func_29())
						{
							__LIB_1__::func_683(&iLocal_400, 2);
						}
						if (((func_31() || func_32(1056964608 /* Float: 0.5f */)) || __LIB_0__::func_27(iLocal_400, 2)) || __LIB_0__::func_27(iLocal_403, 256))
						{
							__LIB_0__::func_325(&(uLocal_413[0]));
							Local_101.f_46 = 1;
							if (iLocal_794 != 16384)
							{
								iLocal_371 = 6;
							}
							else
							{
								func_35();
								iLocal_371 = 7;
							}
						}
					}
					if (func_36())
					{
						Local_101.f_50 = 1;
						func_7();
					}
					if (__LIB_17__::func_836(&Local_101, &uLocal_410, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0) || func_38())
					{
						func_7();
					}
					break;
			}
			BUILTIN::WAIT(Local_101.f_158);
		}
	}
}

void func_5()
{
	if (__LIB_1__::func_898() == 10)
	{
		iLocal_17 = 1;
	}
	else
	{
		iLocal_17 = 0;
	}
}

void func_6()
{
	__LIB_2__::func_433(&(Local_101.f_5));
	__LIB_2__::func_110(&(Local_101.f_5), 1);
	__LIB_2__::func_662(&(Local_101.f_5), 0);
	__LIB_2__::func_595(&(Local_101.f_5), 10f);
	__LIB_2__::func_906(&(Local_101.f_5), 30);
	__LIB_1__::func_975(&(Local_101.f_5), 10f);
	__LIB_2__::func_111(&(Local_101.f_5), 1);
	__LIB_2__::func_182(&(Local_101.f_5), 0);
	__LIB_2__::func_110(&uLocal_796, 1);
	__LIB_2__::func_104(&uLocal_796, 0);
	__LIB_2__::func_105(&uLocal_796, 0);
	__LIB_2__::func_662(&uLocal_796, 0);
	__LIB_2__::func_595(&uLocal_796, 10f);
}

void func_7()
{
	if ((__LIB_2__::func_1(uLocal_410[1], 0, 1) || __LIB_0__::func_27(iLocal_400, 524288)) || PED::GET_PED_CONFIG_FLAG(uLocal_410[1], 11, true))
	{
		if (__LIB_0__::func_27(iLocal_400, 1024))
		{
			if (__LIB_0__::func_181())
			{
				__LIB_3__::func_666(87, iLocal_17, 3, 0, joaat("CS_JOHNMARSTON"));
			}
			else
			{
				__LIB_3__::func_666(87, iLocal_17, 3, 0, 0);
			}
			__LIB_2__::func_115(106, 1, 0, 0, 12, 0, 0, 1);
			__LIB_2__::func_115(113, 1, 0, 0, 12, 0, 0, 1);
		}
	}
	if (__LIB_0__::func_27(iLocal_402, 32768))
	{
		AUDIO::_0x660A8F876DF1D4F8(39);
	}
	if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uLocal_410[0], 1, 1);
	}
	if (iLocal_827 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(iLocal_827))
		{
			ENTITY::_0xD2B9C78537ED5759(iLocal_827);
		}
	}
	__LIB_3__::func_709(&Local_101, &uLocal_410, &uLocal_413, iLocal_17, iLocal_370, __LIB_3__::func_172(&Local_101), 0, 1, 0, 1);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_833);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_834);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_835);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_836);
	__LIB_3__::func_380(Local_80);
	func_58();
	__LIB_2__::func_353(&(uLocal_859[0]), 1);
	__LIB_2__::func_353(&(uLocal_862[0]), 1);
	__LIB_2__::func_353(&(uLocal_859[1]), 1);
	__LIB_2__::func_353(&(uLocal_862[1]), 1);
	__LIB_1__::func_979(1024);
	STREAMING::REMOVE_PTFX_ASSET();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_9()
{
	switch (iLocal_792)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_101))
			{
				iLocal_422 = __LIB_0__::func_12();
				if (iLocal_422 == -1)
				{
				}
				else
				{
					if (iLocal_422 == 76)
					{
					}
					else if (iLocal_422 == 105)
					{
					}
					func_63();
					__LIB_3__::func_445(&Local_305);
					func_65();
					func_66();
					func_67();
					__LIB_3__::func_314(&Local_88);
					STREAMING::REQUEST_PTFX_ASSET();
					STREAMING::REQUEST_MODEL(joaat("P_WATERTROUGH01X"), false);
					func_69();
					iLocal_792 = 1;
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_791, cLocal_825))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_88))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_305))
			{
				return false;
			}
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_WATERTROUGH01X")))
			{
				return false;
			}
			if (!func_73())
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_11(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 9;
			*uParam2 = 1;
			break;
		case 2:
			*iParam1 = 9;
			*uParam2 = 2;
			break;
		case 3:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 4:
			*iParam1 = 10;
			*uParam2 = 1;
			break;
		case 5:
			*iParam1 = 11;
			*uParam2 = 0;
			break;
		case 6:
			*iParam1 = 11;
			*uParam2 = 1;
			break;
		case 7:
			*iParam1 = 11;
			*uParam2 = 2;
			break;
		case 8:
			*iParam1 = 11;
			*uParam2 = 3;
			break;
	}
}

Vector3 func_12(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 11.01f;
				case 1:
					return 0f, 0f, 20f;
				case 2:
					return 0f, 0f, -144.98f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 24.45f;
				case 1:
					return 0f, 0f, 172f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 15.32f;
				case 1:
					return 0f, 0f, 65.77f;
				case 2:
					return 0f, 0f, -19.73f;
				case 3:
					return 0f, 0f, -16.24f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_14(var uParam0)
{
	uParam0->f_190 = 1;
	uParam0->f_182 = 1;
	if (iLocal_422 == 76)
	{
		if (iLocal_17 == 0)
		{
			StringCopy(&(uParam0->f_34), "RE_DM_VAL_V1_THANKS", 64);
			StringCopy(&(uParam0->f_2), "SCRIPT_RE@DROWN_MURDER@DROWNED", 64);
			StringCopy(&(uParam0->f_10), "LINE01_VICTIM", 64);
		}
	}
	else if (iLocal_422 == 105)
	{
		StringCopy(&(uParam0->f_34), "RE_DM_RHD_V1_THANKS_ALT", 64);
		StringCopy(&(uParam0->f_2), "SCRIPT_RE@DROWN_MURDER@DROWNED", 64);
		StringCopy(&(uParam0->f_10), "LINE03_VICTIM", 64);
	}
	else
	{
		StringCopy(&(uParam0->f_34), "RE_DM_VAL_V2_DROWN_THANKS", 64);
		StringCopy(&(uParam0->f_2), "SCRIPT_RE@DROWN_MURDER@DROWNED", 64);
		StringCopy(&(uParam0->f_10), "LINE02_VICTIM", 64);
	}
	__LIB_3__::func_318(&(uParam0->f_2), &uLocal_18);
	uParam0->f_72 = __LIB_3__::func_687(Local_101.f_3);
}

bool func_16()
{
	switch (iLocal_824)
	{
		case 0:
			iLocal_824 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_479(Local_101.f_51, Local_101.f_51.f_3, &Local_305, &uLocal_410, 0, 0, -1, 1))
			{
				return false;
			}
			Local_80 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_80.f_4, 64, "pblAll", false, true);
			iLocal_824 = 6;
			break;
		case 6:
			if (func_82())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_17()
{
	if (__LIB_2__::func_1(uLocal_410[1], 0, 1))
	{
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_410[1], "Default_Angry");
	}
	if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
	{
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_410[0], "Default_Angry");
	}
}

void func_18()
{
	if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
	{
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_410[0], false);
		__LIB_3__::func_567(uLocal_410[0], 1);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uLocal_410[0], 0, 1);
		PED::SET_PED_CONFIG_FLAG(uLocal_410[0], 245, true);
	}
	if (__LIB_2__::func_1(uLocal_410[1], 0, 1))
	{
		__LIB_4__::func_7(uLocal_410[1], joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		__LIB_4__::func_7(uLocal_410[1], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_410[1], true, 0f);
		PED::ADD_RELATIONSHIP_GROUP("m_relAttacker", &iLocal_865);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_410[1], iLocal_865);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_865, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, joaat("PLAYER"), iLocal_865);
		__LIB_1__::func_991(uLocal_410[1], 0);
		__LIB_3__::func_567(uLocal_410[1], 1);
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_410[1], joaat("WEAPON_UNARMED"), true, 0, false, false);
		PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 249, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 233, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 245, true);
	}
	func_86();
	__LIB_3__::func_285(uLocal_410[0], &Local_101, 0);
	__LIB_3__::func_285(uLocal_410[1], &Local_101, 0);
}

void func_19()
{
	switch (__LIB_1__::func_898())
	{
		case 9:
			break;
		case 11:
			switch (Local_101.f_51.f_4)
			{
				case 0:
					Local_88[0 /*12*/] = { 1435.678f, -1296.653f, 76.32323f };
					break;
			}
			break;
	}
}

void func_20()
{
	VOLUME::_SET_VOLUME_SCALE(Local_101.f_171, 4f, 4f, 3f);
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_101.f_51, vLocal_382, true) > 25f)
	{
		if (iLocal_17 == 0 && (Local_101.f_51.f_4 == 0 || Local_101.f_51.f_4 == 1))
		{
			if (Local_101.f_51.f_4 == 0)
			{
				__LIB_3__::func_594(&uLocal_416, &uLocal_417, -313.654f, 832.029f, 118.494f, 0f, 0f, 9f, 25f, 25f, 25f, 1, 0, 1, 0, 0);
			}
			else
			{
				__LIB_3__::func_594(&uLocal_416, &uLocal_417, Local_101.f_51, 0f, 0f, 20f, 30f, 30f, 30f, 1, 0, 1, 0, 0);
			}
		}
		else
		{
			__LIB_3__::func_594(&uLocal_416, &uLocal_417, Local_101.f_51, 0f, 0f, 0f, 25f, 25f, 25f, 0, 0, 1, 0, 0);
		}
	}
}

void func_21()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_419))
	{
		return;
	}
	if (iLocal_422 == 76)
	{
		iLocal_419 = VOLUME::_CREATE_VOLUME_AGGREGATE();
		VOLUME::_0x39816F6F94F385AD(iLocal_419, -278.0329f, 807.903f, 119.4f, 0f, 0f, -79.7f, 11.40093f, 8.344561f, 10.8f);
		VOLUME::_0x39816F6F94F385AD(iLocal_419, -272.7689f, 809.2057f, 120.423f, 0f, 0f, -79.7f, 8.085273f, 4.505096f, 4.33611f);
		VOLUME::_0x39816F6F94F385AD(iLocal_419, -277.0814f, 800.534f, 119.4f, 0f, 0f, -79.7f, 3.711809f, 7.095345f, 4f);
		vLocal_376 = { VOLUME::_GET_VOLUME_COORDS(iLocal_419) };
	}
	else if (iLocal_422 == 105)
	{
		vLocal_376 = { 1357.908f, -1304.094f, 77.4f };
		iLocal_419 = VOLUME::_CREATE_VOLUME_BOX(vLocal_376, 0f, 0f, -20f, 11.367f, 15.188f, 8.228f);
	}
}

void func_24()
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_80, Local_101.f_51, 0f, 0f, Local_101.f_51.f_3, 2);
	__LIB_3__::func_688(Local_101.f_51, 25f, 0);
	if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_80, "PED_VICTIM", uLocal_410[0], 0);
	}
	if (__LIB_2__::func_1(uLocal_410[1], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_80, "PED_BADGUY", uLocal_410[1], 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_80.f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_80, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_80);
		}
	}
}

bool func_29()
{
	if (!Local_101.f_48)
	{
		return false;
	}
	if (!func_104())
	{
		return false;
	}
	if (Local_101.f_98[1] < 2.25f || (__LIB_2__::func_1(Global_1935630.f_41, 0, 1) && __LIB_0__::func_665(uLocal_410[1], Global_1935630.f_41, 1, 1) < 2.25f))
	{
		return true;
	}
	return false;
}

int func_31()
{
	if (iLocal_837 == 0)
	{
		if (__LIB_3__::func_276(uLocal_410[1], 0, &(Local_101.f_5), &iLocal_794, 0, Local_101.f_98[1]))
		{
			return 1;
		}
	}
	else if (__LIB_3__::func_276(uLocal_410[0], 0, &uLocal_796, &uLocal_795, 0, Local_101.f_98[0]))
	{
		return 1;
	}
	iLocal_837++;
	if (iLocal_837 > 1)
	{
		iLocal_837 = 0;
	}
	return 0;
}

int func_32(float fParam0)
{
	vector3 vVar0;
	if (!Local_101.f_48)
	{
		return 0;
	}
	if (!__LIB_0__::func_27(iLocal_400, 2048))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_80) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false))
		{
			if (Local_101.f_98[1] < fParam0 || Local_101.f_98[0] < fParam0)
			{
				return 1;
			}
			if (iLocal_371 > 1)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (__LIB_2__::func_1(Global_1935630.f_41, 0, 1))
					{
						if (__LIB_0__::func_665(Global_1935630.f_41, uLocal_410[1], 1, 1) < fParam0 || __LIB_0__::func_665(Global_1935630.f_41, uLocal_410[0], 1, 1) < fParam0)
						{
							vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_41, true, false) };
							if (!__LIB_0__::func_86(vVar0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_35()
{
	if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
	{
		TASK::TASK_SMART_FLEE_PED(uLocal_410[0], Global_35, 1000f, -1, 1, 1077936128 /* Float: 3f */, 0);
		PED::SET_PED_KEEP_TASK(uLocal_410[0], true);
	}
	if (!__LIB_0__::func_27(iLocal_400, 2048))
	{
		if (__LIB_2__::func_1(uLocal_410[1], 0, 1))
		{
			TASK::TASK_SMART_FLEE_PED(uLocal_410[1], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			PED::SET_PED_KEEP_TASK(uLocal_410[1], true);
		}
	}
}

bool func_36()
{
	func_108();
	func_109();
	func_110();
	if (iLocal_371 > 1)
	{
		func_111();
	}
	func_112(uLocal_410[1]);
	func_113(uLocal_410[1]);
	func_114();
	func_115();
	func_116();
	if (!Local_101.f_46)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_80) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false))
		{
			func_82();
		}
	}
	switch (iLocal_371)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_80, true, false) && func_117())
			{
				ANIMSCENE::START_ANIM_SCENE(Local_80);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_80, "pblAll", true);
				iLocal_371 = 1;
			}
			break;
		case 1:
			if ((__LIB_3__::func_452(&Local_101, 0.75f, 60f, 20f, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0) || Local_101.f_98[1] < 45f) || Local_101.f_98[0] < 45f)
			{
				AUDIO::_0x0D7FD6A55FD63AEF(39, 3, 0);
				__LIB_1__::func_683(&iLocal_402, 32768);
				if (iLocal_370 == 9 || iLocal_370 == 11)
				{
					func_119();
				}
				else if (iLocal_370 == 10)
				{
					PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 6, true);
				}
				func_120(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), 1114636288 /* Float: 60f */, 1101004800 /* Float: 20f */, 1108082688 /* Float: 35f */, -1082130432 /* Float: -1f */);
				__LIB_3__::func_277(1891783641, Local_101.f_51, 1);
				func_122();
				__LIB_4__::func_277(&Local_295, uLocal_410[0], &(uLocal_413[0]), 0f, 0f, 0f, 1065353216 /* Float: 1f */, 1, 5);
				Local_295.f_9 = "RE_INTER_STRANGER";
				__LIB_1__::func_148(&uLocal_838);
				__LIB_3__::func_164(&(Local_101.f_121));
				iLocal_371 = 2;
			}
			break;
		case 2:
			if (!bLocal_828)
			{
				if (((__LIB_2__::func_1(uLocal_410[0], 0, 1) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0])) && __LIB_3__::func_452(&Local_101, 1f, 50f, 35f, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0)) && !__LIB_3__::func_291(Global_35, 1))
				{
					if (iLocal_422 == 76 && iLocal_17 == 0)
					{
					}
					else
					{
						func_126();
					}
					__LIB_1__::func_148(&uLocal_850);
					__LIB_1__::func_683(&iLocal_400, 1);
					iLocal_371 = 3;
				}
				else if (__LIB_0__::func_265(&uLocal_838) > 6f)
				{
					func_126();
				}
			}
			else
			{
				iLocal_371 = 4;
			}
			break;
		case 3:
			if (iLocal_17 == 1)
			{
				func_128();
				func_129();
				func_130();
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false))
				{
					func_131();
					func_132();
					iLocal_371 = 5;
				}
			}
			else if (iLocal_17 == 0)
			{
				func_133();
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], -647428130))
				{
					__LIB_0__::func_325(&(uLocal_413[0]));
					func_134();
				}
			}
			if (__LIB_0__::func_27(iLocal_400, 1024))
			{
				iLocal_371 = 4;
			}
			break;
		case 4:
			if (__LIB_0__::func_27(iLocal_400, 4096))
			{
				func_132();
				func_131();
				iLocal_371 = 5;
			}
			break;
		case 5:
			if (iLocal_17 == 1)
			{
				func_129();
				func_130();
				func_135(5f, 1);
				if (Local_101.f_98[0] > 40f && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false))
				{
					return true;
				}
			}
			else if (iLocal_17 == 0)
			{
				if (Local_101.f_98[1] > 40f && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false))
				{
					if (__LIB_0__::func_181())
					{
						__LIB_3__::func_666(87, iLocal_17, 3, 0, joaat("CS_JOHNMARSTON"));
					}
					else
					{
						__LIB_3__::func_666(87, iLocal_17, 3, 0, 0);
					}
					return true;
				}
			}
			break;
		case 6:
			Local_101.f_46 = 1;
			iLocal_372[1] = 9;
			iLocal_372[0] = 9;
			__LIB_2__::func_504(uLocal_410[0], 0);
			__LIB_2__::func_504(uLocal_410[1], 0);
			func_137();
			func_138();
			if (__LIB_0__::func_27(iLocal_400, 2))
			{
				if (func_104())
				{
					if (func_139(10f) && !__LIB_0__::func_27(iLocal_400, 1024))
					{
						iLocal_576 = 8;
					}
					else
					{
						func_138();
					}
				}
			}
			else
			{
				func_138();
			}
			if (iLocal_576 != -1)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_80, "action", true, false);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_80, func_140(iLocal_576), true);
			}
			else
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_80, "objTrough", iLocal_826);
			}
			if (__LIB_0__::func_27(iLocal_400, 2048))
			{
				__LIB_1__::func_683(&iLocal_400, 131072);
				iLocal_371 = 9;
			}
			else
			{
				iLocal_371 = 7;
				Jump @1678; //curOff = 1091
				func_141();
				if (__LIB_0__::func_27(iLocal_400, 64))
				{
					if (ENTITY::_0x3EC28DA1FFAC9DDD(uLocal_410[0], Global_35, 1, 1))
					{
						__LIB_3__::func_689(uLocal_410[0]);
					}
					iLocal_371 = 8;
				}
				if (!__LIB_0__::func_27(iLocal_400, 16))
				{
					if (WEAPON::_0xCB690F680A3EA971(Global_35, 4))
					{
						PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 249, false);
						WEAPON::SET_CURRENT_PED_WEAPON(uLocal_410[1], WEAPON::GET_BEST_PED_WEAPON(uLocal_410[1], false, false), false, 0, false, false);
						func_143(uLocal_410[1], 1101004800 /* Float: 20f */, 1103626240 /* Float: 25f */, 1103626240 /* Float: 25f */, -1082130432 /* Float: -1f */);
						__LIB_1__::func_683(&iLocal_400, 16);
					}
				}
				Jump @1678; //curOff = 1245
				func_141();
				if (!TASK::GET_IS_TASK_ACTIVE(uLocal_410[0], 3) || __LIB_0__::func_27(iLocal_400, 262144))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_410[0], 2121492476, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_410[0], 2121492476, true) != 0)
					{
						if (__LIB_0__::func_27(iLocal_400, 65536) || __LIB_2__::func_1(uLocal_410[1], 2, 1))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uLocal_410[0], 0);
							AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_410[0], 0);
							func_132();
							func_144();
							iLocal_371 = 9;
						}
						else
						{
							if (func_145(uLocal_410[0], &(uLocal_413[0]), Global_35, &uLocal_790, &uLocal_577, &Local_101))
							{
								func_132();
								__LIB_0__::func_37(&uLocal_844);
								PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uLocal_410[0], 1, 1);
								__LIB_1__::func_683(&iLocal_400, 256);
								__LIB_1__::func_715(13, 0, 0, "RE_HONOR_SAVED_VICTIM", uLocal_410[0], 0, 1065353216 /* Float: 1f */, 0);
								iLocal_371 = 9;
							}
							Jump @1678; //curOff = 1490
							if (!__LIB_0__::func_27(iLocal_400, 65536))
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_410[0]))
								{
									func_141();
									if (__LIB_3__::func_276(uLocal_410[0], 0, &uLocal_796, &uLocal_795, 0, 0))
									{
										__LIB_1__::func_683(&iLocal_400, 65536);
									}
								}
							}
							if (__LIB_0__::func_75(&uLocal_844))
							{
								if (__LIB_0__::func_265(&uLocal_844) > 0.5f)
								{
									__LIB_2__::func_122(uLocal_410[0], "SCREAM_SHOCKED", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
									__LIB_0__::func_37(&uLocal_844);
								}
							}
							if (Local_101.f_98[0] > 35f)
							{
								if (!__LIB_2__::func_1(uLocal_410[1], 0, 0))
								{
									return true;
								}
								else if (Local_101.f_98[1] > 35f)
								{
									return true;
								}
							}
						}
						return false;
					}
				}
			}
			default:
				break;
	}
}

int func_38()
{
	if (Local_101.f_48)
	{
		if (func_153())
		{
			return 1;
		}
	}
	return 0;
}

void func_58()
{
	__LIB_3__::func_650(&uLocal_416, &uLocal_417);
	__LIB_3__::func_650(&iLocal_418, &uLocal_420);
}

void func_63()
{
	__LIB_3__::func_303(&(Local_305[0 /*32*/].f_22));
	__LIB_3__::func_303(&(Local_305[1 /*32*/].f_22));
	switch (iLocal_422)
	{
		case 76:
			switch (iLocal_17)
			{
				case 0:
					Local_305[0 /*32*/].f_1 = joaat("RE_DROWNMURDER_FEMALES_01");
					Local_305[0 /*32*/] = 5;
					StringCopy(&(Local_305[0 /*32*/].f_23), "0546_A_F_M_Civ_White_15", 64);
					Local_305[0 /*32*/].f_3 = 1056682093;
					Local_305[1 /*32*/].f_1 = joaat("RE_DROWNMURDER_MALES_01");
					Local_305[1 /*32*/] = 22;
					StringCopy(&(Local_305[1 /*32*/].f_23), "0585_A_M_M_Civ_White_09", 64);
					Local_305[1 /*32*/].f_3 = -1645688396;
					break;
			}
			break;
		case 105:
			switch (iLocal_17)
			{
				case 0:
					Local_305[0 /*32*/].f_1 = joaat("RE_DROWNMURDER_FEMALES_01");
					Local_305[0 /*32*/] = 5;
					StringCopy(&(Local_305[0 /*32*/].f_23), "0537_A_F_M_Civ_White_06", 64);
					Local_305[0 /*32*/].f_3 = 311089032;
					Local_305[1 /*32*/].f_1 = joaat("RE_DROWNMURDER_MALES_01");
					Local_305[1 /*32*/] = 22;
					StringCopy(&(Local_305[1 /*32*/].f_23), "0677_A_M_M_RhdTownfolk_02_WHITE_01", 64);
					Local_305[1 /*32*/].f_3 = -806572609;
					break;
			}
			break;
		case 92:
			switch (iLocal_17)
			{
				case 1:
					Local_305[0 /*32*/].f_1 = joaat("RE_DROWNMURDER_FEMALES_01");
					Local_305[0 /*32*/] = 5;
					StringCopy(&(Local_305[0 /*32*/].f_23), "0863_A_F_M_Civ_Poor_White_AVOID_01", 64);
					Local_305[0 /*32*/].f_3 = -555691071;
					Local_305[1 /*32*/].f_1 = joaat("RE_DROWNMURDER_MALES_01");
					Local_305[1 /*32*/] = 22;
					StringCopy(&(Local_305[1 /*32*/].f_23), "0465_A_M_M_ValTownfolk_01_WHITE_01", 64);
					Local_305[1 /*32*/].f_3 = -175048441;
					break;
			}
			break;
	}
}

void func_65()
{
	Local_67[0 /*2*/] = "script_re@drown_murder@drowned";
	Local_67[0 /*2*/].f_1 = "brkout_female_v1_victim";
	__LIB_3__::func_318(Local_67[0 /*2*/], &uLocal_18);
	Local_67[1 /*2*/] = "script_re@drown_murder@escape";
	Local_67[1 /*2*/].f_1 = "brkout_male_attacker";
	__LIB_3__::func_318(Local_67[1 /*2*/], &uLocal_18);
	Local_67[2 /*2*/] = "script_re@drown_murder@drowned";
	Local_67[2 /*2*/].f_1 = "quick_drown_attacker";
	Local_67[3 /*2*/] = "script_re@drown_murder@drowned";
	Local_67[3 /*2*/].f_1 = "quick_drown_victim";
	Local_67[4 /*2*/] = "script_re@drown_murder@drowned";
	Local_67[4 /*2*/].f_1 = "quick_drown_trough";
	__LIB_3__::func_318(Local_67[2 /*2*/], &uLocal_18);
}

void func_66()
{
	switch (iLocal_17)
	{
		case 0:
			Local_80.f_4 = "script@beat@town@drownMurder@drown";
			break;
		case 1:
			Local_80.f_4 = "script@beat@town@drownMurder@fightback";
			break;
	}
}

void func_67()
{
	Local_88[0 /*12*/].f_7 = joaat("P_LANTERN04X");
	__LIB_1__::func_683(&(Local_88[0 /*12*/].f_11), 8);
	__LIB_1__::func_683(&(Local_88[0 /*12*/].f_11), 2);
	Local_88[0 /*12*/].f_10 = 0;
}

void func_69()
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_STARE_STOIC"), 15, 0, 0);
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_STAND_WAITING"), 15, 0, 0);
			break;
		case 105:
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_LEAN_WALL_LEFT"), 15, 0, 0);
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_STAND_WAITING"), 15, 0, 0);
			break;
		case 92:
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_SMOKE"), 15, 0, 0);
			break;
	}
}

bool func_73()
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_STARE_STOIC"), false) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_STAND_WAITING"), false))
			{
				return true;
			}
			else
			{
				func_69();
			}
			break;
		case 105:
			if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_LEAN_WALL_LEFT"), false) && STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_STAND_WAITING"), false))
			{
				return true;
			}
			else
			{
				func_69();
			}
			break;
		case 92:
			if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_SMOKE"), false))
			{
				return true;
			}
			else
			{
				func_69();
			}
			break;
	}
	return false;
}

bool func_82()
{
	int iVar0;
	iVar0 = 1;
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_80, true, false))
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblAll"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblAll");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutBack"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutBack");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutBackV2"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutBackV2");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutFront"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutFront");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutFrontV2"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutFrontV2");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutLeft"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutLeft");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutLeftV2"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutLeftV2");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutRight"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutRight");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblBreakoutRightV2"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblBreakoutRightV2");
			iVar0 = 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_80, "pblQuickKill"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_80, "pblQuickKill");
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_86()
{
	Local_423 = { 0f, 0f, 0f };
	Local_423.f_3 = Global_35;
	Local_423.f_8 = 4;
	Local_423.f_19 = 4;
	Local_423.f_20 = 4;
	Local_423.f_21 = 4;
	Local_423.f_22 = 4;
	Local_423.f_17 = 4;
	Local_423.f_18 = 4;
	Local_423.f_7 = 7000;
}

bool func_104()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_410[0]))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], 243556862))
		{
			if (!__LIB_0__::func_27(iLocal_400, 512))
			{
				PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(uLocal_410[0]);
				PED::SET_PED_WETNESS_HEIGHT(uLocal_410[0], 2f);
				__LIB_1__::func_683(&iLocal_400, 512);
			}
			return true;
		}
	}
	return false;
}

void func_108()
{
	if (Local_101.f_48)
	{
		if (!__LIB_0__::func_75(&uLocal_853))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], 243556862))
			{
				func_283(uLocal_410[0], joaat("EVENT_SHOCKING_BEAT_DISTURBING"), -1f, 15f, 15f, -1082130432 /* Float: -1f */);
				__LIB_1__::func_148(&uLocal_853);
			}
		}
	}
}

void func_109()
{
	if (!Local_101.f_46)
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_400, 32768))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_410[1]) && __LIB_2__::func_1(uLocal_410[0], 0, 1))
		{
			if (!__LIB_0__::func_75(&uLocal_451))
			{
				__LIB_1__::func_148(&uLocal_451);
			}
			else if (__LIB_0__::func_265(&uLocal_451) > 3f)
			{
				if (!__LIB_0__::func_27(iLocal_400, 16384))
				{
					if (__LIB_0__::func_27(iLocal_403, 128))
					{
						if (!__LIB_0__::func_27(iLocal_400, 32768))
						{
							__LIB_1__::func_696(49);
							__LIB_0__::func_37(&uLocal_451);
							__LIB_1__::func_683(&iLocal_400, 32768);
						}
					}
					else if (!__LIB_2__::func_1(uLocal_410[1], 0, 1))
					{
						if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
						{
							if (PED::GET_PED_CONFIG_FLAG(uLocal_410[1], 11, true))
							{
								if (__LIB_1__::func_375(uLocal_410[1], 2000, 0, 0) && !__LIB_0__::func_27(iLocal_400, 32768))
								{
									__LIB_1__::func_696(29);
									__LIB_0__::func_37(&uLocal_451);
									__LIB_1__::func_683(&iLocal_400, 32768);
								}
							}
							else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_410[1], Global_35, 1, 1) && !__LIB_0__::func_27(iLocal_400, 32768))
							{
								__LIB_1__::func_696(49);
								__LIB_0__::func_37(&uLocal_451);
								__LIB_1__::func_683(&iLocal_400, 32768);
							}
							else
							{
								__LIB_0__::func_37(&uLocal_451);
								__LIB_1__::func_683(&iLocal_400, 32768);
							}
						}
						else
						{
							__LIB_0__::func_37(&uLocal_451);
							__LIB_1__::func_683(&iLocal_400, 32768);
						}
					}
				}
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_401, 1))
	{
		if (!__LIB_0__::func_75(&uLocal_451))
		{
			__LIB_1__::func_148(&uLocal_451);
		}
		else if (__LIB_0__::func_265(&uLocal_451) > 2f)
		{
			if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
			{
				__LIB_3__::func_615(uLocal_410[0], 4);
				__LIB_1__::func_683(&iLocal_401, 1);
			}
		}
	}
}

void func_110()
{
	bool bVar0;
	if (!__LIB_0__::func_27(iLocal_400, 32))
	{
		bVar0 = true;
		if (__LIB_2__::func_1(uLocal_410[1], 0, 1))
		{
			if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_410[1], "Default_Angry"))
			{
				PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_410[1], "Default_Angry");
				bVar0 = false;
			}
		}
		if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
		{
			if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_410[0], "Default_Angry"))
			{
				PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_410[0], "Default_Angry");
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			__LIB_1__::func_683(&iLocal_400, 32);
		}
	}
}

void func_111()
{
	if (__LIB_0__::func_27(iLocal_400, 8388608))
	{
		if (!__LIB_0__::func_27(iLocal_401, 2))
		{
			if (__LIB_0__::func_27(iLocal_400, 1024))
			{
				__LIB_1__::func_715(4, 0, 0, "RE_HONOR_WATCHED_MURDER", uLocal_410[0], 0, 1065353216 /* Float: 1f */, 0);
				__LIB_1__::func_683(&iLocal_401, 2);
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_400, 8388608))
	{
		if (!__LIB_0__::func_27(iLocal_401, 8))
		{
			if (__LIB_0__::func_27(iLocal_400, 2048) && iLocal_372[0] >= 7)
			{
				__LIB_1__::func_715(2, 0, 0, "RE_HONOR_WITNESSED_CRIME", uLocal_410[0], 0, 1065353216 /* Float: 1f */, 0);
				__LIB_1__::func_683(&iLocal_401, 8);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_401, 4))
	{
		if (!__LIB_0__::func_27(iLocal_401, 8) && !__LIB_0__::func_27(iLocal_401, 2))
		{
			if (func_287())
			{
				__LIB_1__::func_715(2, 0, 0, "RE_HONOR_IGNORED_VICTIM", uLocal_410[0], 0, 1065353216 /* Float: 1f */, 0);
				__LIB_1__::func_683(&iLocal_401, 4);
			}
		}
	}
}

void func_112(int iParam0)
{
	if (bLocal_830 || iLocal_371 <= 1)
	{
		return;
	}
	if (!__LIB_18__::func_302())
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PED::_IS_PED_HOGTIED(iParam0))
			{
				if (__LIB_3__::func_690(Global_35))
				{
					if (__LIB_3__::func_691(Global_35) == __LIB_0__::func_17(iParam0))
					{
						PED::SET_PED_CONFIG_FLAG(iParam0, 6, false);
						bLocal_830 = true;
					}
				}
			}
		}
	}
}

void func_113(int iParam0)
{
	if (bLocal_831)
	{
		return;
	}
	if (!__LIB_18__::func_302())
	{
		bLocal_831 = true;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			if (__LIB_3__::func_690(Global_35))
			{
				if (__LIB_3__::func_691(Global_35) == __LIB_0__::func_17(iParam0))
				{
					DECORATOR::DECOR_SET_BOOL(iParam0, "bIgnoreLawMissionEntity", true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
					bLocal_831 = true;
				}
			}
		}
	}
}

void func_114()
{
	int iVar0;
	bool bVar1;
	if (__LIB_0__::func_94(uLocal_410[1], Local_101.f_51, 1) < 1.5f)
	{
		if (__LIB_2__::func_1(uLocal_410[1], 0, 1))
		{
			PED::SET_PED_RESET_FLAG(uLocal_410[1], 47, true);
		}
	}
	func_293();
	func_294();
	switch (iLocal_372[1])
	{
		case 0:
			iLocal_372[1] = 1;
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_400, 1))
			{
				if (iLocal_17 == 1)
				{
					iLocal_372[1] = 2;
				}
				else
				{
					PED::_0x89F5E7ADECCCB49C(uLocal_410[1], "Angry");
					iLocal_372[1] = 3;
				}
			}
			else if (bLocal_828)
			{
				iLocal_372[1] = 4;
			}
			break;
		case 2:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false))
			{
				iLocal_372[1] = 7;
			}
			if (__LIB_0__::func_27(iLocal_400, 1024))
			{
				iLocal_372[1] = 4;
			}
			break;
		case 3:
			func_295();
			func_296();
			if (__LIB_0__::func_27(iLocal_400, 1024))
			{
				iLocal_372[1] = 4;
			}
			break;
		case 4:
			func_295();
			func_296();
			if (!TASK::GET_IS_TASK_ACTIVE(uLocal_410[1], 3) || (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false) && ANIMSCENE::_0x005E6F28DD7ED58D(Local_80, "PED_BADGUY")))
			{
				__LIB_1__::func_683(&iLocal_400, 4096);
				func_297(uLocal_410[1], 1f, 1, 1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_410[1], joaat("REL_CIVMALE"));
				iLocal_372[1] = 7;
			}
			break;
		case 7:
			func_295();
			if (iLocal_17 == 1)
			{
			}
			else if (iLocal_17 == 0)
			{
				func_296();
				if (!__LIB_0__::func_27(iLocal_403, 128))
				{
					if (__LIB_0__::func_27(iLocal_400, 16777216))
					{
						__LIB_1__::func_683(&iLocal_400, 33554432);
						func_298();
						Local_101.f_46 = 1;
						iLocal_372[1] = 9;
					}
				}
				else
				{
					iLocal_372[1] = 8;
				}
				func_298();
			}
			break;
		case 8:
			func_298();
			break;
		case 6:
			break;
		case 9:
			if (__LIB_0__::func_27(iLocal_400, 2048))
			{
				if (__LIB_2__::func_1(uLocal_410[1], 0, 1))
				{
					__LIB_1__::func_864(uLocal_410[1], 1, 0);
					__LIB_1__::func_683(&iLocal_400, 16384);
				}
				__LIB_0__::func_325(&(uLocal_413[1]));
			}
			else if (__LIB_2__::func_1(uLocal_410[1], 0, 1))
			{
				func_300();
				if (iLocal_576 == -1)
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[1], -1))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_80, "PED_BADGUY", uLocal_410[1]);
					}
					if (__LIB_0__::func_27(iLocal_403, 256) || __LIB_0__::func_27(iLocal_400, 16777216))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_410[1], 93, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_410[1], 92, true);
						PED::_0x8ACC0506743A8A5C(uLocal_410[1], joaat("SITUATIONNORMAL"), 1, -1082130432 /* Float: -1f */);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					PED::REGISTER_TARGET(uLocal_410[1], Global_35, 1);
					if (__LIB_0__::func_27(iLocal_400, 16777216) || __LIB_0__::func_27(iLocal_403, 256))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(uLocal_410[1], joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
						if ((__LIB_0__::func_27(iLocal_400, 16777216) && Local_101.f_98[1] > 5f) && !__LIB_0__::func_27(iLocal_403, 256))
						{
							TASK::TASK_REACT(0, Global_35, Global_36, "Default_Angry", 1f, 0, 4);
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Global_35, 0f, 0.5f, 0f, 1f, 4000, 1f, 1, 1, 0, 0, 1);
						}
						else
						{
							TASK::TASK_REACT(0, Global_35, Global_36, "Default_Angry", 3f, 0, 4);
						}
						TASK::TASK_SWAP_WEAPON(0, 1, 1, 0, 0);
						TASK::TASK_COMBAT_PED(0, Global_35, 1048576, 4096);
					}
					else if (WEAPON::_0xCB690F680A3EA971(Global_35, 4))
					{
						TASK::TASK_COMBAT_PED(0, Global_35, 16384, 16);
					}
					else
					{
						TASK::TASK_REACT(0, Global_35, Global_36, "Default_Angry", 1.5f, 0, 4);
						TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
					}
					__LIB_1__::func_474(uLocal_410[1], &iVar0, 0, 0, 1, 1);
					PED::SET_PED_KEEP_TASK(uLocal_410[1], true);
					__LIB_2__::func_73(uLocal_410[1], &(uLocal_413[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					iLocal_372[1] = 14;
				}
				else
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_410[1], 0);
					iLocal_372[1] = 10;
				}
			}
			else
			{
				iLocal_372[1] = 14;
			}
			break;
		case 10:
			func_300();
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[1], -1))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[1], Local_80))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_80, "PED_BADGUY", uLocal_410[1]);
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				PED::REGISTER_TARGET(uLocal_410[1], Global_35, 1);
				if (__LIB_0__::func_27(iLocal_403, 256))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_410[1], 93, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_410[1], 92, true);
					PED::_0x8ACC0506743A8A5C(uLocal_410[1], joaat("SITUATIONNORMAL"), 1, -1082130432 /* Float: -1f */);
					TASK::TASK_COMBAT_PED(0, Global_35, 68157440, 4096);
				}
				else
				{
					TASK::TASK_COMBAT_PED(0, Global_35, 16384, 16);
				}
				__LIB_1__::func_474(uLocal_410[1], &iVar0, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(uLocal_410[1], true);
				__LIB_2__::func_73(uLocal_410[1], &(uLocal_413[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				iLocal_372[1] = 14;
			}
			break;
		case 11:
			break;
		case 12:
			break;
		case 14:
			if (Local_101.f_46)
			{
				func_300();
				func_303();
			}
			if (__LIB_0__::func_12() == 105)
			{
				bVar1 = __LIB_3__::func_925(&Local_101, &uLocal_410, 1, 1);
				if (!__LIB_0__::func_73(1024))
				{
					if (bVar1)
					{
						__LIB_2__::func_29(1024);
					}
				}
				else if (!bVar1)
				{
					__LIB_1__::func_979(1024);
				}
			}
			func_307();
			func_298();
			break;
		case 15:
			break;
	}
}

void func_115()
{
	func_308();
	switch (iLocal_372[0])
	{
		case 0:
			iLocal_372[0] = 1;
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_400, 1))
			{
				if (iLocal_17 == 0)
				{
					iLocal_372[0] = 3;
				}
				else
				{
					iLocal_372[0] = 2;
				}
			}
			else if (bLocal_828)
			{
				iLocal_372[0] = 4;
			}
			break;
		case 2:
			if (func_309())
			{
				PED::FORCE_PED_MOTION_STATE(uLocal_410[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
				func_310(uLocal_410[0], joaat("EVENT_SHOCKING_BEAT_SURPRISING"), 1097859072 /* Float: 15f */, 1101004800 /* Float: 20f */, 1101004800 /* Float: 20f */, -1082130432 /* Float: -1f */);
				func_297(uLocal_410[0], 2f, 1, bLocal_397, uLocal_410[1], 0);
				__LIB_0__::func_325(&(uLocal_413[0]));
				__LIB_1__::func_148(&uLocal_850);
				iLocal_372[0] = 7;
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], 428295725))
			{
			}
			if (__LIB_0__::func_27(iLocal_400, 1024))
			{
				iLocal_372[0] = 4;
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], -647428130))
			{
				__LIB_0__::func_325(&(uLocal_413[0]));
				func_134();
			}
			if (__LIB_0__::func_27(iLocal_400, 1024))
			{
				iLocal_372[0] = 4;
			}
			break;
		case 4:
			break;
		case 5:
			break;
		case 7:
			if (iLocal_17 == 1)
			{
				PED::_0x89F5E7ADECCCB49C(uLocal_410[0], "Angry");
				iLocal_372[0] = 14;
			}
			else if (iLocal_17 == 0)
			{
				iLocal_372[0] = 14;
			}
			break;
		case 9:
			if (iLocal_576 == -1)
			{
				if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], -218438047))
					{
						if (!PED::IS_PED_RUNNING_RAGDOLL_TASK(uLocal_410[0]))
						{
							if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[0], -1))
							{
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_80, "PED_VICTIM", uLocal_410[0]);
							}
							PED::SET_PED_TO_RAGDOLL(uLocal_410[0], 1500, 4000, 0, false, false, false);
						}
					}
					else if (!PED::IS_PED_RUNNING_RAGDOLL_TASK(uLocal_410[0]))
					{
						if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[0], -1))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_80, "PED_VICTIM", uLocal_410[0]);
						}
						if (func_311())
						{
							iLocal_372[0] = 11;
						}
					}
				}
			}
			else
			{
				iLocal_372[0] = 10;
			}
			break;
		case 10:
			if (__LIB_0__::func_27(iLocal_400, 8))
			{
				func_312();
			}
			else if (iLocal_576 == -1)
			{
				if (__LIB_2__::func_1(uLocal_410[0], 0, 1) && !__LIB_0__::func_27(iLocal_400, 1024))
				{
					if (!__LIB_2__::func_1(uLocal_410[1], 0, 1))
					{
						iLocal_372[0] = 11;
					}
					else
					{
						func_311();
						iLocal_372[0] = 11;
					}
				}
			}
			else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[0], -1))
			{
				if (__LIB_2__::func_1(uLocal_410[0], 0, 1) && !__LIB_0__::func_27(iLocal_400, 1024))
				{
					if (!__LIB_2__::func_1(uLocal_410[1], 0, 1))
					{
						iLocal_372[0] = 11;
					}
					else if (func_311())
					{
						iLocal_372[0] = 11;
					}
				}
			}
			else
			{
				if (__LIB_2__::func_1(uLocal_410[1], 0, 1))
				{
					PED::SET_PED_RESET_FLAG(uLocal_410[0], 36, true);
					PED::SET_PED_RESET_FLAG(uLocal_410[0], 31, true);
				}
				func_313();
				if (__LIB_0__::func_27(iLocal_402, 1024))
				{
					__LIB_3__::func_699(&(uLocal_410[0]), 0, Global_35, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 11:
			if (!__LIB_0__::func_27(iLocal_400, 65536))
			{
				if (__LIB_2__::func_1(uLocal_410[0], 0, 1) && !__LIB_0__::func_27(iLocal_400, 1024))
				{
					func_315();
					if (!__LIB_2__::func_1(uLocal_410[1], 0, 1))
					{
						if (((!__LIB_0__::func_27(iLocal_400, 2048) && Local_101.f_98[0] < 20f) && !__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1)) && !func_316())
						{
							if (!__LIB_0__::func_27(iLocal_400, 64))
							{
								if (!__LIB_0__::func_75(&uLocal_841))
								{
									__LIB_1__::func_283(&uLocal_841, 0);
								}
								PED::_0x89F5E7ADECCCB49C(uLocal_410[0], "Nervous");
								__LIB_1__::func_683(&iLocal_400, 64);
								iLocal_372[0] = 12;
							}
							else
							{
								iLocal_372[0] = 12;
							}
						}
						else
						{
							if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
							{
								__LIB_3__::func_707(__LIB_3__::func_687(87), 1);
							}
							func_132();
							iLocal_372[0] = 14;
						}
					}
				}
			}
			else if (func_311())
			{
				if (__LIB_0__::func_27(iLocal_400, 64) && !__LIB_0__::func_27(iLocal_400, 65536))
				{
					iLocal_371 = 8;
				}
				else
				{
					func_144();
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_410[0], 518218985, true) != 1)
					{
						TASK::TASK_SMART_FLEE_PED(uLocal_410[0], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
					}
					iLocal_372[0] = 16;
					iLocal_371 = 9;
				}
			}
			break;
		case 12:
			if (__LIB_0__::func_27(iLocal_400, 65536))
			{
				if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
				{
					TASK::TASK_SMART_FLEE_PED(uLocal_410[0], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
					PED::SET_PED_KEEP_TASK(uLocal_410[0], true);
					iLocal_372[0] = 14;
				}
			}
			else if (__LIB_0__::func_27(iLocal_400, 256))
			{
				__LIB_2__::func_303(Global_35, uLocal_410[0], func_319(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1506116031, 1, 0, 0);
				__LIB_3__::func_689(uLocal_410[0]);
				PED::_0x89F5E7ADECCCB49C(uLocal_410[0], "Nervous");
				func_297(uLocal_410[0], 2f, 1, 1, 0, 0);
				func_321();
				iLocal_372[0] = 14;
			}
			break;
		case 13:
			break;
		case 14:
			if (!__LIB_0__::func_27(iLocal_400, 65536))
			{
				if (__LIB_3__::func_276(uLocal_410[0], 0, &uLocal_796, &uLocal_795, 0, Local_101.f_98[0]))
				{
					TASK::TASK_SMART_FLEE_PED(uLocal_410[0], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
					__LIB_1__::func_683(&iLocal_400, 65536);
					iLocal_372[0] = 16;
				}
				else
				{
					if (!Local_101.f_46)
					{
						if (iLocal_17 == 1)
						{
							if (__LIB_0__::func_265(&uLocal_850) > 1f)
							{
								func_135(5f, 1);
							}
							func_322();
						}
					}
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_421))
					{
						if (PED::_IS_PED_USING_SCENARIO_POINT(uLocal_410[0], iLocal_421))
						{
							if (!__LIB_0__::func_75(&uLocal_457))
							{
								__LIB_1__::func_148(&uLocal_457);
							}
							else if (__LIB_0__::func_265(&uLocal_457) > 30f)
							{
								func_323(uLocal_410[0], &(Local_463[0 /*21*/]), &Local_541, 1);
								iLocal_372[0] = 15;
							}
						}
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_410[0], 518218985, true) != 1)
			{
				TASK::TASK_SMART_FLEE_PED(uLocal_410[0], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
				iLocal_372[0] = 16;
			}
			break;
		case 15:
			break;
		case 16:
			func_324();
			break;
	}
}

void func_116()
{
	if (__LIB_0__::func_27(iLocal_400, 268435456) || iLocal_371 <= 2)
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_400, 134217728))
	{
		if (__LIB_0__::func_27(iLocal_400, 1024))
		{
			func_325();
			__LIB_1__::func_683(&iLocal_400, 134217728);
		}
		else
		{
			func_326();
		}
	}
	else
	{
		func_326();
	}
}

bool func_117()
{
	if (!__LIB_0__::func_27(iLocal_400, 4))
	{
		switch (iLocal_398)
		{
			case 0:
				iLocal_827 = ENTITY::_0x6F3068258A499E52(joaat("P_WATERTROUGH01X"), Local_101.f_51, 9);
				iLocal_398++;
				break;
			case 1:
				if (ENTITY::_0x1FF441D7954F8709(iLocal_827))
				{
					iLocal_826 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_827));
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_80, "objTrough", iLocal_826, 0);
					__LIB_1__::func_683(&iLocal_400, 4);
					return true;
				}
				break;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_119()
{
	PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 6, true);
	__LIB_3__::func_696(&(uLocal_410[1]), 0);
	func_325();
	__LIB_1__::func_683(&iLocal_401, 32);
}

void func_120(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	iLocal_834 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam0, uLocal_410[1], fParam1, fParam2, fParam3, fParam4, 7f, 180f, false, false, -1, -1);
}

void func_122()
{
	if (__LIB_0__::func_27(iLocal_402, 512))
	{
		return;
	}
	if (!func_104())
	{
		if (iLocal_422 == 76)
		{
			if (iLocal_17 == 0)
			{
				__LIB_2__::func_303(uLocal_410[0], 0, "RE_DM_VAL_V1_WIFE_CALLOUT_B", "", 75f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			}
		}
		else if (iLocal_422 == 105)
		{
			__LIB_2__::func_122(uLocal_410[0], "RE_DM_RHD_V1_WIFE_CALLOUT_A", 1744022339, 0, 1, &(Local_305[0 /*32*/].f_23), 2, 1);
		}
		else if (iLocal_422 == 92)
		{
			__LIB_2__::func_303(uLocal_410[0], 0, "PANIC_HELP", "", 75f, 1, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		}
		__LIB_1__::func_683(&iLocal_402, 512);
	}
	else
	{
		if (iLocal_422 == 76)
		{
			if (iLocal_17 == 0)
			{
			}
		}
		else if (iLocal_422 == 105)
		{
		}
		else if (iLocal_422 == 92)
		{
			__LIB_2__::func_303(uLocal_410[0], 0, "PANIC_HELP", "", 75f, 1, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		}
		__LIB_1__::func_683(&iLocal_402, 512);
	}
}

void func_126()
{
	if (__LIB_0__::func_27(iLocal_402, 4))
	{
		return;
	}
	if (iLocal_17 == 0)
	{
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0]))
		{
			__LIB_2__::func_303(uLocal_410[0], uLocal_410[1], func_331("DEFENSIVE"), "", 75f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			__LIB_3__::func_277(1891783641, Local_101.f_51, 1);
			__LIB_1__::func_683(&iLocal_402, 4);
		}
	}
	else if (iLocal_17 == 1)
	{
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0]))
		{
			__LIB_2__::func_303(uLocal_410[0], uLocal_410[1], func_331("HELP"), "", 75f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			__LIB_3__::func_277(1891783641, Local_101.f_51, 1);
			__LIB_1__::func_148(&uLocal_838);
			__LIB_1__::func_683(&iLocal_402, 4);
		}
	}
}

void func_128()
{
	bool bVar0;
	if (iLocal_371 > 1)
	{
		if (!Local_101.f_44)
		{
			if (iLocal_832 > 2)
			{
				if (PED::_0x7F9B9791D4CB71F6(uLocal_410[1], Global_35, true, 0) == 1 || PED::_0x7F9B9791D4CB71F6(uLocal_410[0], Global_35, true, 0) == 1)
				{
					func_132();
				}
			}
		}
		switch (iLocal_832)
		{
			case 0:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(15)))
				{
					if (__LIB_0__::func_265(&uLocal_850) > 1.5f)
					{
						__LIB_2__::func_303(uLocal_410[1], uLocal_410[0], func_331("BERATE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						__LIB_1__::func_681(&iLocal_402, 64);
						__LIB_1__::func_148(&uLocal_850);
						iLocal_832++;
					}
				}
				if (__LIB_0__::func_27(iLocal_402, 2))
				{
					if ((!func_104() && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0])) && !__LIB_0__::func_27(iLocal_402, 64))
					{
						__LIB_2__::func_122(uLocal_410[0], "SCREAM_TERROR", joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
						__LIB_1__::func_683(&iLocal_400, 64);
					}
				}
				else if (func_104())
				{
				}
				else if (!__LIB_0__::func_27(iLocal_402, 1))
				{
					if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_410[0]))
					{
						__LIB_2__::func_122(uLocal_410[0], "SCREAM_SHOCKED", 1744022339, 0, 1, 0, 0, 1);
						__LIB_1__::func_683(&iLocal_402, 1);
					}
				}
				break;
			case 1:
				if (__LIB_0__::func_27(iLocal_402, 128) && __LIB_0__::func_27(iLocal_402, 64))
				{
					iLocal_832++;
				}
				else
				{
					if (!__LIB_0__::func_27(iLocal_402, 128))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(1)) && __LIB_0__::func_27(iLocal_402, 64))
						{
							__LIB_2__::func_303(uLocal_410[1], uLocal_410[0], func_331("ANGRY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_402, 128);
						}
					}
					if (iLocal_370 == 9)
					{
						if (func_104())
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], func_334(28)))
							{
								bVar0 = false;
							}
							else
							{
								bVar0 = true;
							}
						}
					}
					else if (func_104())
					{
						bVar0 = true;
					}
					if (bVar0)
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0]) && !ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], func_334(28)))
						{
						}
					}
					else if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0]) && !__LIB_0__::func_27(iLocal_402, 64))
					{
						__LIB_3__::func_277(1891783641, Local_101.f_51, 1);
						__LIB_2__::func_303(uLocal_410[0], uLocal_410[1], func_331("STOP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_402, 64);
					}
				}
				break;
			case 2:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], func_334(16)) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_80) < 0.1f)
				{
					__LIB_2__::func_303(uLocal_410[0], uLocal_410[1], func_331("STRUGGLE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_80, "action", true, false);
					iLocal_832++;
				}
				break;
			case 3:
				if (!__LIB_0__::func_27(iLocal_402, 32))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], joaat("ONKNEES")) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], joaat("HEADBUTT")))
					{
						__LIB_2__::func_303(uLocal_410[0], uLocal_410[1], func_331("SCREAM"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_402, 32);
					}
				}
				if ((!__LIB_0__::func_27(iLocal_402, 8192) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_80) > 0.248558f)
				{
					__LIB_3__::func_277(1891783641, Local_101.f_51, 1);
					__LIB_1__::func_683(&iLocal_402, 8192);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], joaat("HEADBUTT")))
				{
					__LIB_1__::func_683(&iLocal_400, 2048);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(3)))
				{
					__LIB_2__::func_303(uLocal_410[1], uLocal_410[0], func_331("AGONY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], func_334(4)))
				{
					__LIB_2__::func_303(uLocal_410[0], uLocal_410[1], func_331("HEADBUTT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(5)))
				{
					__LIB_2__::func_303(uLocal_410[1], uLocal_410[0], func_331("PAIN_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(6)))
				{
					__LIB_2__::func_303(uLocal_410[1], uLocal_410[0], func_331("PAIN_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], func_334(7)))
				{
					__LIB_2__::func_303(uLocal_410[0], uLocal_410[1], func_331("STOMP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				break;
		}
	}
}

int func_129()
{
	if (__LIB_0__::func_27(iLocal_400, 2048))
	{
		return 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], 1270344867))
	{
		__LIB_1__::func_683(&iLocal_400, 2048);
		return 1;
	}
	return 0;
}

void func_130()
{
	if (__LIB_0__::func_27(iLocal_400, 67108864))
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_400, 2048))
	{
		PED::APPLY_PED_DAMAGE_PACK(uLocal_410[1], "PD_Blood_Spray_Front_att", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(uLocal_410[1], "PD_Burst_lip", 0f, 1f);
		PED::APPLY_PED_DAMAGE_PACK(uLocal_410[1], "PD_Nose_cut", 0f, 1f);
		__LIB_1__::func_683(&iLocal_400, 67108864);
	}
}

void func_131()
{
	__LIB_2__::func_595(&(Local_101.f_5), 15f);
	__LIB_2__::func_595(&uLocal_796, 15f);
}

void func_132()
{
	if (!Local_101.f_44)
	{
		Local_101.f_44 = 1;
		if (__LIB_1__::func_898() == 9)
		{
			if (iLocal_17 == 1)
			{
				__LIB_3__::func_537(87, iLocal_17, 7);
			}
		}
	}
}

void func_133()
{
	if (Local_101.f_46)
	{
		return;
	}
	switch (iLocal_832)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_80) > 0.192647f)
			{
				__LIB_3__::func_277(1891783641, Local_101.f_51, 1);
				iLocal_832++;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_80) > 0.35701f)
			{
				__LIB_3__::func_277(1891783641, Local_101.f_51, 1);
				iLocal_832++;
			}
			break;
		case 2:
			break;
	}
	if (!__LIB_0__::func_27(iLocal_402, 2))
	{
		__LIB_1__::func_148(&uLocal_847);
		__LIB_1__::func_683(&iLocal_402, 2);
	}
	else
	{
		if (!__LIB_0__::func_27(iLocal_400, 2097152))
		{
			if (__LIB_0__::func_265(&uLocal_847) > 0.75f || (__LIB_2__::func_227(0, 1, uLocal_410[1], 1) && __LIB_2__::func_227(0, 1, uLocal_410[0], 1)))
			{
				__LIB_2__::func_303(uLocal_410[1], uLocal_410[0], func_331("ACCUSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_3__::func_277(1891783641, Local_101.f_51, 1);
				__LIB_1__::func_148(&uLocal_847);
				__LIB_1__::func_683(&iLocal_400, 2097152);
			}
		}
		else if (!__LIB_0__::func_27(iLocal_400, 4194304))
		{
			if (__LIB_0__::func_265(&uLocal_847) > 0.5f || (__LIB_2__::func_227(0, 1, uLocal_410[1], 1) && __LIB_2__::func_227(0, 1, uLocal_410[0], 1)))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_80, "action", true, false);
				__LIB_1__::func_683(&iLocal_400, 4194304);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], func_334(14)))
		{
			__LIB_2__::func_303(uLocal_410[0], uLocal_410[1], func_331("LET_GO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(15)))
		{
			__LIB_2__::func_303(uLocal_410[1], uLocal_410[0], func_331("BERATE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], func_334(16)))
		{
			__LIB_2__::func_303(uLocal_410[0], uLocal_410[1], func_331("STRUGGLE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(17)))
		{
			__LIB_2__::func_303(uLocal_410[1], uLocal_410[0], func_331("MOCK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(26)))
		{
			__LIB_2__::func_303(uLocal_410[1], uLocal_410[0], func_331("DROWNING_A_01"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(27)))
		{
			__LIB_2__::func_303(uLocal_410[1], uLocal_410[0], func_331("DROWNING_B_01"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], func_334(18)))
		{
			__LIB_2__::func_303(uLocal_410[1], Global_35, func_331("DROWNED"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (!__LIB_0__::func_27(iLocal_400, 1024))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], 707255528))
			{
				func_134();
			}
		}
	}
}

void func_134()
{
	if (!__LIB_0__::func_27(iLocal_400, 1024))
	{
		__LIB_2__::func_111(&(Local_101.f_5), 0);
		__LIB_2__::func_182(&(Local_101.f_5), 1);
		__LIB_4__::func_142(uLocal_410[0], 1, 0);
		__LIB_3__::func_461(87, 2, 1);
		__LIB_1__::func_683(&iLocal_400, 1024);
	}
}

void func_135(float fParam0, int iParam1)
{
	if (__LIB_0__::func_27(iLocal_402, 256))
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_402, 8))
	{
		if (__LIB_0__::func_94(Global_35, Local_101.f_51, 1) < 10f)
		{
			if (__LIB_2__::func_227(-3f, 1, uLocal_410[0], 1))
			{
				if (__LIB_2__::func_215(uLocal_410[0], Global_35, 1, fParam0, 0) || ((Local_101.f_98[0] < fParam0 && iParam1 == 0) && !ENTITY::IS_ENTITY_OCCLUDED(uLocal_410[0])))
				{
					__LIB_2__::func_303(uLocal_410[0], Global_35, func_331("HANG_AROUND"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_402, 8);
				}
			}
		}
	}
}

void func_137()
{
	if (iLocal_834 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_834);
	}
}

void func_138()
{
	int iVar0;
	if (func_338())
	{
		iVar0 = __LIB_3__::func_112(uLocal_410[1], Global_35, 1060437492 /* Float: 0.707f */);
		if (func_104())
		{
			switch (iVar0)
			{
				case 0:
					iLocal_576 = 1;
					break;
				case 1:
					iLocal_576 = 3;
					break;
				case 3:
					iLocal_576 = 5;
					break;
				case 2:
					iLocal_576 = 7;
					break;
			}
		}
		else
		{
			switch (iVar0)
			{
				case 0:
					iLocal_576 = 0;
					break;
				case 1:
					iLocal_576 = 2;
					break;
				case 3:
					iLocal_576 = 4;
					break;
				case 2:
					iLocal_576 = 6;
					break;
			}
		}
	}
	else if (!__LIB_2__::func_1(uLocal_410[0], 0, 1))
	{
		if (__LIB_2__::func_1(uLocal_410[1], 0, 1))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], 1350074909))
			{
				iVar0 = __LIB_3__::func_112(uLocal_410[1], Global_35, 1060437492 /* Float: 0.707f */);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[1], -1299051536))
				{
					switch (iVar0)
					{
						case 0:
							iLocal_576 = 1;
							break;
						case 1:
							iLocal_576 = 3;
							break;
						case 3:
							iLocal_576 = 5;
							break;
						case 2:
							iLocal_576 = 7;
							break;
					}
				}
				else
				{
					switch (iVar0)
					{
						case 0:
							iLocal_576 = 0;
							break;
						case 1:
							iLocal_576 = 2;
							break;
						case 3:
							iLocal_576 = 4;
							break;
						case 2:
							iLocal_576 = 6;
							break;
					}
				}
			}
		}
	}
	else
	{
		iLocal_576 = -1;
	}
	if (iLocal_576 == 8)
	{
		__LIB_1__::func_683(&iLocal_400, 8);
	}
}

bool func_139(float fParam0)
{
	if (__LIB_0__::func_75(&uLocal_853))
	{
		if (__LIB_0__::func_265(&uLocal_853) >= fParam0)
		{
			return true;
		}
	}
	return false;
}

char* func_140(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
		case 0:
			return "pblBreakoutFront";
		case 1:
			return "pblBreakoutFrontV2";
		case 2:
			return "pblBreakoutBack";
		case 3:
			return "pblBreakoutBackV2";
		case 4:
			return "pblBreakoutRight";
		case 5:
			return "pblBreakoutRightV2";
		case 6:
			return "pblBreakoutLeft";
		case 7:
			return "pblBreakoutLeftV2";
		case 8:
			return "pblQuickKill";
		default:
			break;
	}
	return "invalid playlist";
}

void func_141()
{
	if (__LIB_0__::func_27(iLocal_400, 65536))
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_400, 262144))
	{
		if (__LIB_3__::func_276(uLocal_410[0], 0, &uLocal_796, &uLocal_795, 0, 0))
		{
			__LIB_1__::func_683(&iLocal_400, 65536);
		}
	}
	else if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
	{
		if (func_340())
		{
			if ((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], Local_67[0 /*2*/], "brkout_female_v1_victim", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_410[0], Local_67[0 /*2*/], "brkout_female_v1_victim") > 0.91f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], Local_67[0 /*2*/], "brkout_female_v2_victim", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_410[0], Local_67[0 /*2*/], "brkout_female_v2_victim") > 0.91f))
			{
				func_321();
			}
		}
		else if (__LIB_1__::func_313(&uLocal_841, 2.5f))
		{
			__LIB_2__::func_182(&uLocal_796, 1);
			func_321();
		}
	}
}

void func_143(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	func_137();
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_835);
	iLocal_833 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), iParam0, fParam1, fParam2, fParam3, fParam4, 7f, 180f, false, false, -1, -1);
}

void func_144()
{
	if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0]))
	{
		if (iLocal_422 == 76)
		{
			__LIB_2__::func_303(uLocal_410[0], Global_35, "RE_DM_VAL_V1_AGGRO_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, -500314840, 1, 0, 0);
		}
		else if (iLocal_422 == 92)
		{
			__LIB_2__::func_303(uLocal_410[0], Global_35, "PANIC_HELP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, -500314840, 1, 0, 0);
		}
		else if (iLocal_422 == 105)
		{
			__LIB_2__::func_303(uLocal_410[0], Global_35, "RE_DM_RHD_V1_AGGRO_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, -500314840, 1, 0, 0);
		}
		__LIB_1__::func_683(&iLocal_402, 16384);
	}
}

bool func_145(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_342(iParam0, iParam1, iParam2, uParam3, uParam4))
	{
		return true;
	}
	else if (*uParam3 > 2 && uParam5->f_44 == 0)
	{
		uParam5->f_44 = 1;
	}
	return false;
}

bool func_153()
{
	if (__LIB_0__::func_12() != iLocal_422)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_101.f_51, true) > 200f)
		{
			return true;
		}
	}
	return false;
}

void func_283(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_834);
	iLocal_835 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam1, iParam0, fParam2, fParam3, fParam4, fParam5, 7f, 180f, false, false, -1, -1);
}

bool func_287()
{
	if (!__LIB_0__::func_27(iLocal_400, 536870912))
	{
		if (__LIB_0__::func_27(iLocal_400, 1))
		{
			if (!__LIB_0__::func_27(iLocal_400, 2048) && !__LIB_0__::func_27(iLocal_400, 1024))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(uLocal_410[0]))
				{
					fLocal_396 = Local_101.f_98[0];
					__LIB_1__::func_148(&uLocal_448);
					__LIB_1__::func_683(&iLocal_400, 536870912);
				}
			}
		}
	}
	else if (!Local_101.f_46)
	{
		if (__LIB_0__::func_265(&uLocal_448) > 10f)
		{
			if (Local_101.f_98[0] > (fLocal_396 + 25f))
			{
				return true;
			}
		}
	}
	return false;
}

void func_293()
{
	if (!__LIB_0__::func_27(iLocal_400, 524288))
	{
		if (__LIB_3__::func_287())
		{
			__LIB_1__::func_683(&iLocal_400, 524288);
		}
	}
}

void func_294()
{
	if (!Local_101.f_48)
	{
		return;
	}
	if ((iLocal_371 <= 0 || __LIB_0__::func_27(iLocal_403, 64)) || __LIB_0__::func_27(iLocal_403, 2048))
	{
		return;
	}
	if (((Local_101.f_46 || __LIB_0__::func_27(iLocal_403, 8)) || __LIB_0__::func_27(iLocal_403, 256)) || !__LIB_2__::func_1(uLocal_410[1], 0, 1))
	{
		if (!__LIB_0__::func_27(iLocal_403, 64))
		{
			__LIB_2__::func_593(&(Local_463[1 /*21*/]), &Local_506);
			__LIB_1__::func_683(&iLocal_403, 64);
		}
		return;
	}
	if (iLocal_14[1] > 0)
	{
		iLocal_407[1] = func_497(&(uLocal_410[1]), &(Local_463[1 /*21*/]), 20f, &Local_506, &(Local_101.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
	}
	if (!__LIB_0__::func_27(iLocal_400, 1024) && !__LIB_0__::func_27(iLocal_400, 2048))
	{
		switch (iLocal_14[1])
		{
			case 0:
				__LIB_2__::func_602(&(Local_506[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_506[1 /*17*/]), __LIB_2__::func_460(26), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_506[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_506[1 /*17*/]), 1, 0);
				iLocal_14[1] = 1;
				break;
			case 1:
				switch (iLocal_407[1])
				{
					case 0:
						break;
					case 1:
						__LIB_2__::func_303(Global_35, uLocal_410[1], func_331("AIM"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						__LIB_2__::func_411(&(Local_506[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_506[1 /*17*/]), 0, 0);
						__LIB_1__::func_148(&uLocal_454);
						if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
						{
							__LIB_1__::func_715(12, joaat("HONOR_EVENT_INTERVENED"), 0, "RE_HONOR_INTERVENED", uLocal_410[0], 0, 1065353216 /* Float: 1f */, 0);
						}
						iLocal_14[1] = 3;
						break;
				}
				break;
			case 3:
				if (__LIB_0__::func_265(&uLocal_454) > 1f && func_501())
				{
					__LIB_1__::func_683(&iLocal_403, 256);
					iLocal_14[1] = 4;
				}
				break;
			case 4:
				break;
		}
	}
	else if (iLocal_17 == 0)
	{
		if (__LIB_0__::func_27(iLocal_400, 1024))
		{
			if (!__LIB_0__::func_27(iLocal_403, 1))
			{
				if (!__LIB_3__::func_383(PLAYER::PLAYER_ID(), &(uLocal_410[1])))
				{
					iLocal_404[1] = 0;
					__LIB_2__::func_593(&(Local_463[1 /*21*/]), &Local_506);
					__LIB_2__::func_602(&(Local_506[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(&(Local_506[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					__LIB_2__::func_411(&(Local_506[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_506[1 /*17*/]), 1, 0);
					__LIB_1__::func_683(&iLocal_403, 1);
				}
				else
				{
					if (__LIB_2__::func_466(&(Local_506[0 /*17*/]), 1, 0))
					{
						__LIB_2__::func_411(&(Local_506[0 /*17*/]), 0, 0);
					}
					if (__LIB_2__::func_466(&(Local_506[1 /*17*/]), 1, 0))
					{
						__LIB_2__::func_411(&(Local_506[1 /*17*/]), 0, 0);
					}
				}
			}
			else
			{
				switch (iLocal_404[1])
				{
					case 0:
						switch (iLocal_407[1])
						{
							case 0:
								break;
							case 1:
								__LIB_2__::func_303(Global_35, uLocal_410[1], func_331("INSULT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1506116031, 1, 0, 0);
								__LIB_2__::func_411(&(Local_506[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_506[1 /*17*/]), 0, 0);
								__LIB_1__::func_148(&uLocal_454);
								if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
								{
									__LIB_1__::func_715(12, joaat("HONOR_EVENT_INTERVENED"), 0, "RE_HONOR_INTERVENED", uLocal_410[0], 0, 1065353216 /* Float: 1f */, 0);
								}
								__LIB_1__::func_683(&iLocal_403, 128);
								iLocal_404[1]++;
								break;
						}
						break;
					case 1:
						if (__LIB_0__::func_265(&uLocal_454) > 2.5f)
						{
							__LIB_1__::func_683(&iLocal_403, 256);
						}
						break;
					case 5:
						break;
				}
			}
		}
	}
	else if (__LIB_0__::func_27(iLocal_400, 2048))
	{
		if (!__LIB_0__::func_27(iLocal_403, 8))
		{
			__LIB_2__::func_593(&(Local_463[1 /*21*/]), &Local_506);
			__LIB_1__::func_683(&iLocal_403, 8);
		}
	}
}

int func_295()
{
	if (__LIB_0__::func_27(iLocal_400, 8388608))
	{
		return 1;
	}
	if (__LIB_0__::func_27(iLocal_400, 1024))
	{
		if (__LIB_2__::func_269(uLocal_410[0], 25f))
		{
			__LIB_1__::func_683(&iLocal_400, 8388608);
			return 1;
		}
	}
	else if (__LIB_0__::func_27(iLocal_400, 2048) && iLocal_372[0] >= 7)
	{
		__LIB_1__::func_683(&iLocal_400, 8388608);
		return 1;
	}
	return 0;
}

int func_296()
{
	if (__LIB_0__::func_27(iLocal_400, 16777216))
	{
		return 1;
	}
	if (__LIB_0__::func_27(iLocal_400, 8388608))
	{
		if (__LIB_0__::func_94(uLocal_410[1], Local_101.f_51, 1) < 25f)
		{
			if ((__LIB_2__::func_215(uLocal_410[1], Global_35, 1, 15f, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[1], Local_67[2 /*2*/], "action_attacker", 1)) && !__LIB_3__::func_291(Global_35, 1))
			{
				__LIB_1__::func_683(&iLocal_400, 16777216);
				return 1;
			}
		}
	}
	return 0;
}

void func_297(int iParam0, float fParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	if (PED::IS_PED_MALE(iParam0))
	{
		func_505(1);
	}
	else
	{
		func_505(0);
	}
	func_506();
	bParam3 = bLocal_397;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam5 && iParam0 == uLocal_410[0])
	{
		TASK::TASK_REACT(0, uLocal_410[1], ENTITY::GET_ENTITY_COORDS(uLocal_410[1], true, false), "Default_Angry", 2.5f, 0, 4);
	}
	if (!__LIB_0__::func_86(vLocal_385[0 /*3*/]))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_385[0 /*3*/], fParam1, -1, 2.5f, 4194305, 40000f);
	}
	if (!__LIB_0__::func_86(vLocal_385[1 /*3*/]))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_385[1 /*3*/], fParam1, -1, 3f, 1, 40000f);
	}
	if (!__LIB_0__::func_86(vLocal_385[2 /*3*/]))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_385[2 /*3*/], fParam1, -1, 1.5f, 1, 40000f);
	}
	if (bParam3)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_379, fParam1, -1, 10f, 4, 40000f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_382, 1f, 30000, 1.5f, 0, 40000f);
		if (iLocal_375 != -1)
		{
			iLocal_421 = __LIB_2__::func_488(iLocal_375, vLocal_382, fLocal_395, 0, -1f, 0);
			TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_421, 0, -1, true, false, 0, false, -1f, false);
		}
		else
		{
			TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_382, 10f, 0, false, true, false, false);
		}
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
	}
	else
	{
		if (iParam4 != 0)
		{
			TASK::TASK_SMART_FLEE_PED(0, iParam4, 500f, -1, 385, 2f, 0);
		}
		else
		{
			TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 500f, -1, 385, 2f);
		}
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
	}
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, bParam2);
	PED::_0x2208438012482A1A(iParam0, false, false);
}

void func_298()
{
	if (!__LIB_0__::func_27(iLocal_400, 1048576))
	{
		if (__LIB_3__::func_697(Global_35) == uLocal_410[1])
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 6, false);
			__LIB_1__::func_683(&iLocal_400, 1048576);
		}
	}
}

void func_300()
{
	float fVar0;
	if (Local_101.f_46)
	{
		if (__LIB_2__::func_1(uLocal_410[1], 0, 1))
		{
			if (!__LIB_0__::func_75(&uLocal_844))
			{
				__LIB_1__::func_148(&uLocal_844);
			}
			else if (!__LIB_0__::func_27(iLocal_402, 16))
			{
				fVar0 = __LIB_0__::func_265(&uLocal_844);
				if (fVar0 > 1f)
				{
					if ((__LIB_2__::func_1(uLocal_410[0], 0, 1) || __LIB_0__::func_27(iLocal_400, 8)) || __LIB_0__::func_27(iLocal_400, 16777216))
					{
						if (func_509(fVar0))
						{
							if (iLocal_17 == 0)
							{
								if (iLocal_422 == 105)
								{
									__LIB_2__::func_303(uLocal_410[1], Global_35, "OPENS_FIRE", "", 70f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
								}
								else
								{
									__LIB_2__::func_303(uLocal_410[1], Global_35, "CHALLENGE_THREATEN_ARMED", "", 70f, 2, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
								}
							}
							else
							{
								__LIB_2__::func_303(uLocal_410[1], Global_35, "GENERIC_INSULT_MED_MALE", "", 70f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							}
							__LIB_3__::func_567(uLocal_410[1], 0);
							_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_410[1], &Local_423);
							__LIB_1__::func_683(&iLocal_402, 16);
						}
					}
					else
					{
						if (!PED::_IS_PED_LASSOED(uLocal_410[1]))
						{
							if (iLocal_422 == 105)
							{
								if ((__LIB_0__::func_27(iLocal_403, 256) && __LIB_0__::func_27(iLocal_400, 8388608)) && !__LIB_2__::func_1(uLocal_410[0], 0, 1))
								{
									__LIB_2__::func_303(uLocal_410[1], Global_35, "RE_DM_RHD_V1_POST_AGGRO_RESP", "", 70f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
								}
								else
								{
									__LIB_2__::func_303(uLocal_410[1], Global_35, "OPENS_FIRE", "", 70f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
								}
							}
							else if (((iLocal_422 == 76 && __LIB_0__::func_27(iLocal_403, 256)) && __LIB_0__::func_27(iLocal_400, 8388608)) && !__LIB_2__::func_1(uLocal_410[0], 0, 1))
							{
								__LIB_2__::func_303(uLocal_410[1], Global_35, "RE_DM_VAL_V1_POST_AGGRO_RESP", "", 70f, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_303(uLocal_410[1], Global_35, "CHALLENGE_THREATEN_ARMED", "", 70f, 2, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							}
						}
						else
						{
							__LIB_2__::func_303(uLocal_410[1], 0, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_SHOUTED_CLEAR"), 1, 0, 0);
						}
						__LIB_3__::func_567(uLocal_410[1], 0);
						_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_410[1], &Local_423);
						__LIB_1__::func_683(&iLocal_402, 16);
					}
				}
			}
		}
	}
}

void func_303()
{
	if (!__LIB_0__::func_27(iLocal_400, 8192))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_419))
		{
			if (__LIB_1__::func_205(Global_35, iLocal_419, 1, 0) && __LIB_2__::func_227(0, 1, uLocal_410[1], 1))
			{
				if (!PED::_IS_PED_HOGTIED(uLocal_410[1]) && !__LIB_0__::func_27(iLocal_402, 65536))
				{
					if (iLocal_422 == 76)
					{
						__LIB_2__::func_303(uLocal_410[1], Global_35, "STORM_OFF", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_422 == 105)
					{
						__LIB_2__::func_303(uLocal_410[1], Global_35, "STORM_OFF", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&iLocal_402, 65536);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_410[1], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_1__::func_683(&iLocal_400, 8192);
			}
		}
	}
	else if (func_510(iLocal_419, vLocal_376) > 50f && PED::_0x7F9B9791D4CB71F6(uLocal_410[1], Global_35, false, 0) == 1)
	{
		TASK::TASK_COMBAT_PED(uLocal_410[1], Global_35, 0, 0);
		__LIB_1__::func_681(&iLocal_400, 8192);
	}
}

void func_307()
{
	if (!__LIB_0__::func_27(iLocal_402, 4096))
	{
		if (!__LIB_0__::func_27(iLocal_402, 2048))
		{
			if ((__LIB_3__::func_998(Global_35, 0) == __LIB_0__::func_17(uLocal_410[1]) || __LIB_3__::func_998(Global_35, 1) == __LIB_0__::func_17(uLocal_410[1])) || __LIB_3__::func_998(Global_35, 2) == __LIB_0__::func_17(uLocal_410[1]))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_410[1]) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[1]))
				{
					__LIB_1__::func_683(&iLocal_402, 2048);
				}
			}
		}
		else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_410[1]) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[1]))
		{
			if ((__LIB_3__::func_998(Global_35, 0) == __LIB_0__::func_17(uLocal_410[1]) || __LIB_3__::func_998(Global_35, 1) == __LIB_0__::func_17(uLocal_410[1])) || __LIB_3__::func_998(Global_35, 2) == __LIB_0__::func_17(uLocal_410[1]))
			{
				iLocal_399++;
				if (iLocal_399 > 60)
				{
					if (iLocal_422 == 105)
					{
						__LIB_2__::func_303(uLocal_410[1], Global_35, "POST_THEFT", "", -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_410[1], Global_35, "POST_THEFT", "", -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&iLocal_402, 4096);
				}
			}
		}
	}
}

void func_308()
{
	if (!Local_101.f_48)
	{
		return;
	}
	if ((iLocal_371 <= 0 || __LIB_0__::func_27(iLocal_403, 16)) || __LIB_0__::func_27(iLocal_403, 2048))
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_400, 65536) || !__LIB_2__::func_1(uLocal_410[0], 0, 1))
	{
		if (!__LIB_0__::func_27(iLocal_403, 16))
		{
			__LIB_2__::func_593(&(Local_463[0 /*21*/]), &Local_541);
			__LIB_1__::func_683(&iLocal_403, 16);
		}
		return;
	}
	if (iLocal_14[0] > 0)
	{
		iLocal_407[0] = func_497(&(uLocal_410[0]), &(Local_463[0 /*21*/]), 20f, &Local_541, &(Local_101.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
	}
	if ((!__LIB_0__::func_27(iLocal_400, 1024) && !__LIB_0__::func_27(iLocal_400, 2048)) && !Local_101.f_46)
	{
		switch (iLocal_14[0])
		{
			case 0:
				__LIB_2__::func_602(&(Local_541[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_541[1 /*17*/]), __LIB_2__::func_460(26), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_541[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_541[1 /*17*/]), 1, 0);
				iLocal_14[0] = 1;
				break;
			case 1:
				if (!__LIB_0__::func_27(iLocal_400, 2048))
				{
					switch (iLocal_407[0])
					{
						case 0:
							break;
						case 1:
							__LIB_2__::func_303(Global_35, uLocal_410[0], func_331("AIM"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_148(&uLocal_454);
							__LIB_1__::func_715(12, joaat("HONOR_EVENT_INTERVENED"), 0, "RE_HONOR_INTERVENED", uLocal_410[0], 0, 1065353216 /* Float: 1f */, 0);
							iLocal_14[0] = 3;
							break;
					}
				}
				break;
			case 3:
				if (__LIB_0__::func_265(&uLocal_454) > 1f)
				{
					__LIB_1__::func_683(&iLocal_403, 256);
					iLocal_14[0] = 4;
				}
				break;
			case 4:
				break;
			case 7:
				break;
		}
	}
	else if (!Local_101.f_46)
	{
		if (!__LIB_0__::func_27(iLocal_403, 2))
		{
			if (!__LIB_3__::func_383(PLAYER::PLAYER_ID(), &(uLocal_410[0])))
			{
				iLocal_404[0] = 0;
				__LIB_2__::func_593(&(Local_463[0 /*21*/]), &Local_541);
				__LIB_2__::func_602(&(Local_541[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_541[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_541[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_541[1 /*17*/]), 0, 0);
				__LIB_1__::func_683(&iLocal_403, 2);
			}
			else
			{
				if (__LIB_2__::func_466(&(Local_541[0 /*17*/]), 1, 0))
				{
					__LIB_2__::func_411(&(Local_541[0 /*17*/]), 0, 0);
				}
				if (__LIB_2__::func_466(&(Local_541[1 /*17*/]), 1, 0))
				{
					__LIB_2__::func_411(&(Local_541[1 /*17*/]), 0, 0);
				}
			}
		}
		else
		{
			switch (iLocal_404[0])
			{
				case 0:
					if (!__LIB_2__::func_1(uLocal_410[1], 0, 1))
					{
						__LIB_2__::func_411(&(Local_541[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_541[1 /*17*/]), 1, 0);
						iLocal_404[0]++;
					}
					break;
				case 1:
					switch (iLocal_407[0])
					{
						case 0:
							__LIB_2__::func_303(Global_35, uLocal_410[0], func_331("GRT_POS_WOMAN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_2__::func_411(&(Local_541[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_541[1 /*17*/]), 0, 0);
							__LIB_1__::func_148(&uLocal_454);
							__LIB_1__::func_683(&iLocal_403, 512);
							iLocal_404[0]++;
							break;
						case 1:
							__LIB_2__::func_303(Global_35, uLocal_410[0], func_331("GRT_NEG_WOMAN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_2__::func_411(&(Local_541[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_541[1 /*17*/]), 0, 0);
							__LIB_1__::func_148(&uLocal_454);
							__LIB_1__::func_683(&iLocal_403, 1024);
							iLocal_404[0]++;
							break;
					}
					break;
				case 2:
					if ((__LIB_0__::func_265(&uLocal_454) > 1f && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_410[0]))
					{
						if (iLocal_422 == 76 && __LIB_0__::func_27(iLocal_403, 512))
						{
							__LIB_2__::func_303(uLocal_410[0], Global_35, "PLAYER_LOITERING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_303(uLocal_410[0], Global_35, "GET_AWAY_FROM_ME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						}
						iLocal_404[0]++;
					}
					break;
				case 3:
					break;
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_27(iLocal_403, 4))
		{
			if (!__LIB_3__::func_383(PLAYER::PLAYER_ID(), &(uLocal_410[0])))
			{
				__LIB_2__::func_593(&(Local_463[0 /*21*/]), &Local_541);
				__LIB_2__::func_602(&(Local_541[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_541[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_541[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_541[1 /*17*/]), 0, 0);
				iLocal_404[0] = 0;
				__LIB_1__::func_683(&iLocal_403, 4);
			}
			else
			{
				if (__LIB_2__::func_466(&(Local_541[0 /*17*/]), 1, 0))
				{
					__LIB_2__::func_411(&(Local_541[0 /*17*/]), 0, 0);
				}
				if (__LIB_2__::func_466(&(Local_541[1 /*17*/]), 1, 0))
				{
					__LIB_2__::func_411(&(Local_541[1 /*17*/]), 0, 0);
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_403, 4))
		{
			switch (iLocal_404[0])
			{
				case 0:
					if (func_340())
					{
						if (!__LIB_2__::func_466(&(Local_541[0 /*17*/]), 1, 0))
						{
							__LIB_2__::func_411(&(Local_541[0 /*17*/]), 1, 0);
						}
						if (__LIB_2__::func_466(&(Local_541[1 /*17*/]), 1, 0))
						{
							__LIB_2__::func_411(&(Local_541[1 /*17*/]), 0, 0);
						}
						iLocal_404[0]++;
					}
					else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[0], -1))
					{
						if (__LIB_2__::func_466(&(Local_541[0 /*17*/]), 1, 0))
						{
							__LIB_2__::func_411(&(Local_541[0 /*17*/]), 0, 0);
						}
						if (__LIB_2__::func_466(&(Local_541[1 /*17*/]), 1, 0))
						{
							__LIB_2__::func_411(&(Local_541[1 /*17*/]), 0, 0);
						}
						iLocal_404[0]++;
					}
					break;
				case 1:
					if (!__LIB_0__::func_27(iLocal_403, 32))
					{
						if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_410[0], -1))
						{
							if (__LIB_2__::func_466(&(Local_541[0 /*17*/]), 1, 0))
							{
								__LIB_2__::func_411(&(Local_541[0 /*17*/]), 0, 0);
							}
							if (__LIB_2__::func_466(&(Local_541[1 /*17*/]), 1, 0))
							{
								__LIB_2__::func_411(&(Local_541[1 /*17*/]), 0, 0);
							}
						}
						else
						{
							switch (iLocal_407[0])
							{
								case 0:
									__LIB_2__::func_303(Global_35, uLocal_410[0], func_331("GRT_POS_ASK_IF_OK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
									__LIB_2__::func_411(&(Local_541[0 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_541[1 /*17*/]), 0, 0);
									__LIB_1__::func_683(&iLocal_403, 32);
									break;
								case 1:
									break;
							}
						}
					}
					break;
				case 2:
					switch (iLocal_407[0])
					{
						case 0:
							break;
						case 1:
							break;
					}
					break;
				case 3:
					if (__LIB_0__::func_265(&uLocal_454) > 1f && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
					{
						if (!ENTITY::IS_ENTITY_OCCLUDED(uLocal_410[0]))
						{
							if (iLocal_422 == 76)
							{
								__LIB_2__::func_303(uLocal_410[0], Global_35, "RE_FM_VAL_V1_GRT_POS_WOMAN_SAVED_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							else if (iLocal_422 == 105)
							{
								__LIB_2__::func_303(uLocal_410[0], Global_35, "RE_FM_RHD_V1_GRT_POS_WOMAN_SAVED_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_303(uLocal_410[0], Global_35, "RELIEVED_REACT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
						}
						iLocal_404[0]++;
					}
					break;
				case 4:
					break;
			}
		}
	}
}

bool func_309()
{
	if (!TASK::GET_IS_TASK_ACTIVE(uLocal_410[0], 3))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false) && ANIMSCENE::_0x005E6F28DD7ED58D(Local_80, "PED_VICTIM"))
	{
		return true;
	}
	return false;
}

void func_310(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	iLocal_836 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam1, iParam0, fParam2, fParam3, fParam4, fParam5, -1f, 180f, false, false, -1, -1);
}

bool func_311()
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(uLocal_410[0]) || __LIB_0__::func_27(iLocal_400, 128))
	{
		return true;
	}
	if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
	{
		if (__LIB_0__::func_27(iLocal_400, 1024))
		{
			__LIB_0__::func_325(&(uLocal_413[0]));
			__LIB_1__::func_864(uLocal_410[0], 1, 0);
			return true;
		}
	}
	if (!__LIB_0__::func_27(iLocal_402, 256))
	{
		if (!func_104())
		{
			__LIB_1__::func_683(&iLocal_402, 256);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], -1894130223))
	{
		return false;
	}
	else if (!PED::IS_PED_RAGDOLL(uLocal_410[0]))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (__LIB_2__::func_1(uLocal_410[1], 0, 1) && !__LIB_0__::func_27(iLocal_400, 2048))
		{
			TASK::TASK_SMART_FLEE_PED(0, uLocal_410[1], (20f / 2f), 7000, 1, 2f, 0);
			TASK::TASK_COWER(0, 6000, uLocal_410[1], 0);
			TASK::TASK_SMART_FLEE_COORD(0, Local_101.f_51, 200f, -1, true, 2f);
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 200f, -1, 0, 2f, 0);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			__LIB_1__::func_683(&iLocal_400, 1073741824 /* Float: 2f */);
		}
		else if (!__LIB_0__::func_27(iLocal_400, 65536) && !__LIB_0__::func_27(iLocal_400, 131072))
		{
			__LIB_1__::func_683(&iLocal_400, 64);
			__LIB_1__::func_681(&iLocal_400, 65536);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
		}
		else
		{
			if ((__LIB_0__::func_27(iLocal_400, 131072) && !func_104()) && __LIB_2__::func_227(0, 1, uLocal_410[0], 1))
			{
				__LIB_2__::func_122(uLocal_410[0], "SCREAM_TERROR", 1744022339, 0, 1, 0, 0, 1);
			}
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
		}
		__LIB_1__::func_474(uLocal_410[0], &iVar0, 0, 0, 1, 1);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uLocal_410[0], true);
		PED::SET_PED_KEEP_TASK(uLocal_410[0], true);
		__LIB_1__::func_683(&iLocal_400, 128);
		return true;
	}
	return false;
}

void func_312()
{
	if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
	{
		if (PED::IS_PED_RAGDOLL(uLocal_410[0]) || !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], Local_67[3 /*2*/], Local_67[3 /*2*/].f_1, 1))
		{
			__LIB_0__::func_325(&(uLocal_413[0]));
			__LIB_1__::func_864(uLocal_410[0], 1, 0);
		}
	}
}

void func_313()
{
	if (__LIB_0__::func_27(iLocal_402, 1024))
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_856))
	{
		__LIB_1__::func_148(&uLocal_856);
	}
	else if ((__LIB_0__::func_265(&uLocal_856) > 1.5f || iLocal_422 == 105) || iLocal_422 == 76)
	{
		switch (iLocal_422)
		{
			case 76:
				__LIB_2__::func_303(uLocal_410[0], Global_35, "RE_DM_VAL_V1_RECOVER_B", 0, -1082130432 /* Float: -1f */, 3, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				break;
			case 105:
				__LIB_2__::func_303(uLocal_410[0], Global_35, "RE_DM_RHD_V1_RECOVER_A", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				break;
			case 92:
				__LIB_2__::func_303(uLocal_410[0], Global_35, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				break;
		}
		__LIB_1__::func_683(&iLocal_402, 1024);
	}
}

void func_315()
{
	int iVar0;
	if (!__LIB_0__::func_27(iLocal_400, -2147483648))
	{
		if (__LIB_0__::func_27(iLocal_400, 1073741824 /* Float: 2f */))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_410[0], 242628503, true) == 1)
			{
				iVar0 = TASK::GET_SEQUENCE_PROGRESS(uLocal_410[0]);
				if (iVar0 >= 2)
				{
					__LIB_1__::func_683(&iLocal_400, -2147483648);
				}
			}
		}
	}
}

bool func_316()
{
	if (__LIB_0__::func_27(iLocal_400, -2147483648))
	{
		return true;
	}
	return false;
}

char* func_319()
{
	if (iLocal_422 == 76)
	{
		return "RE_DM_VAL_V1_PLAYER";
	}
	if (iLocal_422 == 105)
	{
		return "RE_DM_RHD_V1_PLAYER";
	}
	return "RE_DM_VAL_V2_DROWN_PLAYER";
}

void func_321()
{
	if (!__LIB_0__::func_27(iLocal_400, 262144))
	{
		__LIB_2__::func_105(&uLocal_796, 1);
		__LIB_2__::func_104(&uLocal_796, 1);
		__LIB_1__::func_683(&iLocal_400, 262144);
	}
}

void func_322()
{
	if (iLocal_17 == 1 && !Local_101.f_46)
	{
		if (__LIB_0__::func_86(Local_866.f_6))
		{
			ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_80, "PED_VICTIM", &Local_866, true, "pblAll", 2);
		}
		else if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_80, "PED_VICTIM"))
		{
			if (__LIB_0__::func_94(uLocal_410[0], Local_866.f_6, 1) < 3f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_410[0], 1.5f);
			}
		}
	}
}

void func_323(int iParam0, int* iParam1, var uParam2, bool bParam3)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		__LIB_2__::func_480(uParam2, 1, 1, 1, 0);
		__LIB_2__::func_593(iParam1, uParam2);
		__LIB_2__::func_451(iParam1, 0);
		PED::_0xE737D5F14304A2EC(iParam0, PLAYER::GET_PLAYER_INDEX(), 120000);
		if (iParam0 == uLocal_410[1])
		{
			PED::_0x24C82EF607105FAA(uLocal_410[1], joaat("AGGRESSIVE"));
		}
		else if (iParam0 == uLocal_410[0])
		{
			PED::_0x24C82EF607105FAA(uLocal_410[0], joaat("AVOID"));
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, !bParam3);
		__LIB_3__::func_141(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
		__LIB_3__::func_650(&iLocal_418, &uLocal_420);
		__LIB_1__::func_683(&iLocal_403, 2048);
	}
}

void func_324()
{
	if (__LIB_0__::func_27(iLocal_400, 65536))
	{
		if (!__LIB_0__::func_27(iLocal_402, 16384))
		{
			if (!__LIB_0__::func_75(&uLocal_460))
			{
				__LIB_1__::func_148(&uLocal_460);
			}
			else if (__LIB_0__::func_265(&uLocal_460) > 1f && __LIB_2__::func_227(0, 1, uLocal_410[0], 1))
			{
				func_144();
			}
		}
	}
}

void func_325()
{
	if (__LIB_0__::func_27(iLocal_400, 1024))
	{
		if (__LIB_0__::func_181())
		{
			__LIB_17__::func_837("REDM_GRT_J2", 1, 1);
		}
		else
		{
			__LIB_17__::func_837("REDM_GRT_A2", 1, 1);
		}
	}
	else if (__LIB_0__::func_181())
	{
		__LIB_17__::func_837("REDM_GRT_J1", 1, 1);
	}
	else
	{
		__LIB_17__::func_837("REDM_GRT_A1", 1, 1);
	}
}

void func_326()
{
	if (__LIB_0__::func_27(iLocal_401, 32))
	{
		if (!__LIB_0__::func_27(iLocal_400, 268435456))
		{
			if (func_153())
			{
				func_519();
				__LIB_1__::func_683(&iLocal_400, 268435456);
			}
		}
	}
}

char* func_331(char* sParam0)
{
	char cVar0[64];
	var uVar8;
	StringCopy(&cVar0, "RE_DM_", 64);
	if (iLocal_422 == 76)
	{
		StringConCat(&cVar0, "VAL_", 64);
	}
	else if (iLocal_422 == 105)
	{
		StringConCat(&cVar0, "RHD_", 64);
	}
	else if (iLocal_422 == 92)
	{
		StringConCat(&cVar0, "VAL_", 64);
	}
	if (iLocal_17 == 0)
	{
		StringConCat(&cVar0, "V1_", 64);
	}
	else if (iLocal_17 == 1)
	{
		StringConCat(&cVar0, "V2_", 64);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringConCat(&cVar0, sParam0, 64);
	}
	uVar8 = __LIB_1__::func_569(cVar0);
	return uVar8;
}

int func_334(int iParam0)
{
	switch (iLocal_422)
	{
		case 76:
			switch (iLocal_17)
			{
				case 0:
					switch (iParam0)
					{
						case 13:
							return 234475003;
						case 15:
							return 1194892292;
						case 17:
							return -1604552848;
						case 18:
							return -189454566;
						case 14:
							return 230997717;
						case 16:
							return -212649225;
						case 19:
							return -189454566;
					}
					break;
			}
			break;
		case 105:
			switch (iLocal_17)
			{
				case 0:
					switch (iParam0)
					{
						case 13:
							return -526512643;
						case 15:
							return -1306145892;
						case 17:
							return 201003381;
						case 26:
							return joaat("RE_DM_RHD_V1_DROWNING_A_01");
						case 27:
							return joaat("RE_DM_RHD_V1_DROWNING_B_01");
						case 18:
							return 2080523210;
						case 19:
							return -189454566;
						case 14:
							return -184699597;
						case 16:
							return 2146050495;
					}
					break;
			}
			break;
		case 92:
			switch (iLocal_17)
			{
				case 1:
					switch (iParam0)
					{
						case 15:
							return -146115896;
						case 1:
							return 1991258338;
						case 16:
							return 1017184366;
						case 3:
							return 2065234346;
						case 5:
							return 50580232;
						case 6:
							return -440627078;
						case 2:
							return -1960230997;
						case 4:
							return 1991705139;
						case 7:
							return -380506787;
						case 28:
							return -1652129750;
					}
					break;
			}
			break;
	}
	return -1;
}

bool func_338()
{
	if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
	{
		if ((ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_410[0], joaat("ONKNEES")) || func_340()) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], "script_re@drown_murder@escape", "drown_dunk_loop_victim", 1))
		{
			return true;
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], "script_re@drown_murder@escape", "drown_dunk_loop_victim", 1))
		{
			return true;
		}
	}
	return false;
}

bool func_340()
{
	if (__LIB_2__::func_1(uLocal_410[0], 0, 1))
	{
		if ((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], Local_67[0 /*2*/], "brkout_female_v1_victim", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], Local_67[0 /*2*/], "brkout_female_v2_victim", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_410[0], Local_67[0 /*2*/], "brkout_female_quick_victim", 1))
		{
			return true;
		}
	}
	return false;
}

bool func_342(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return true;
	}
	else if (!__LIB_2__::func_1(iParam2, 0, 1))
	{
		return true;
	}
	switch (*uParam3)
	{
		case 0:
			uParam4->f_183 = __LIB_0__::func_665(iParam0, iParam2, 0, 1);
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam2, -1, 0, 51, 0);
			if (!(__LIB_1__::func_472(iParam0, uParam4->f_188, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_0__::func_665(iParam0, iParam2, 1, 1) < 2f) && !uParam4->f_79)
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iParam0, iParam2, 0f, 6f, 0.5f, uParam4->f_212, -1, 0.1f, 1, 1, 0, 0, 1);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam2, 0, -1f, -1f, -1f);
			}
			if (uParam4->f_180)
			{
				if (__LIB_0__::func_232(iParam0, iParam2, 1) >= 16f)
				{
					TASK::TASK_GO_TO_ENTITY(iParam0, iParam2, 20000, 0.5f, uParam4->f_212, 2f, 0);
					__LIB_1__::func_148(&(uParam4->f_191));
				}
				else
				{
					uParam4->f_180 = 0;
					uParam4->f_79 = 1;
				}
			}
			*uParam3 = 1;
			break;
		case 1:
			if (__LIB_0__::func_665(iParam0, iParam2, 0, 1) > (uParam4->f_183 + uParam4->f_1))
			{
				TASK::TASK_SMART_FLEE_PED(iParam0, iParam2, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
				return true;
			}
			else if ((!uParam4->f_180 && (__LIB_0__::func_665(iParam0, iParam2, 1, 1) < uParam4->f_188 || uParam4->f_79)) || (uParam4->f_180 && (__LIB_1__::func_313(&(uParam4->f_191), uParam4->f_189) || __LIB_0__::func_232(iParam0, iParam2, 1) < 16f)))
			{
				if (((uParam4->f_180 || __LIB_1__::func_472(iParam0, uParam4->f_188, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) || uParam4->f_77) || (uParam4->f_79 && (uParam4->f_77 || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))))
				{
					if (uParam4->f_80)
					{
						TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam2, &(uParam4->f_62), &(uParam4->f_66), uParam4->f_184, uParam4->f_185, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
					}
					else
					{
						__LIB_3__::func_210(iParam0, &(uParam4->f_181), -1, !uParam4->f_77);
					}
					*uParam3 = 2;
				}
			}
			break;
		case 2:
			if ((uParam4->f_76 || uParam4->f_79) || ((__LIB_2__::func_215(iParam0, iParam2, 0, uParam4->f_188, 0) && (uParam4->f_80 || __LIB_3__::func_210(iParam0, &(uParam4->f_181), -1, !uParam4->f_77))) || uParam4->f_180))
			{
				if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2)))
					{
						if (uParam4->f_80 || uParam4->f_180)
						{
							TASK::TASK_PLAY_ANIM(iParam0, &(uParam4->f_2), &(uParam4->f_10), 1.5f, -1.5f, -1, 24, 0f, false, 0, false, 0, false);
						}
						else
						{
							TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 67108880, 0f, false, false, -1f, 0, 65536, -1f);
						}
					}
					*uParam4 = MISC::GET_GAME_TIMER();
					if (uParam4->f_194)
					{
						MemCopy(&(uParam4->f_34), {uParam4->f_199}, 8);
					}
					__LIB_3__::func_912(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_34), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					func_534(uParam4);
					if (uParam4->f_194 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_204)))
					{
						*uParam3 = 4;
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_42)))
					{
						*uParam3 = 3;
					}
					else
					{
						*uParam3 = 5;
					}
				}
			}
			else if (!__LIB_2__::func_1(iParam0, 0, 1))
			{
				return true;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2)))
				{
					if (uParam4->f_80)
					{
						TASK::TASK_PLAY_ANIM(iParam0, &(uParam4->f_2), &(uParam4->f_10), 4f, -4f, -1, 24, 0f, false, 0, false, 0, false);
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_26)))
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_18), &(uParam4->f_26), iParam2, -1, 4f, -4f, 16, 0f, false, false, -1f, 0, 0, -1f);
					}
					else
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 16, 0f, false, false, -1f, 0, 0, -1f);
					}
				}
				__LIB_3__::func_912(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_42), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
				*uParam3 = 5;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182))
			{
				if (__LIB_3__::func_273(&(uParam4->f_203), &(uParam4->f_204), 0f, 0f, 0f, iParam0, joaat("INPUT_CONTEXT_B"), 10f, 0f, 0, 1, 0, 0, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					MemCopy(&(uParam4->f_54), {uParam4->f_195}, 8);
					*uParam3 = 5;
				}
				else if ((MISC::GET_GAME_TIMER() - *uParam4) > 18000)
				{
					__LIB_1__::func_748(&(uParam4->f_203), 1, 1);
					uParam4->f_194 = 0;
					*uParam3 = 6;
				}
			}
			break;
		case 5:
			if ((__LIB_2__::func_227(uParam4->f_187, 1, iParam0, uParam4->f_182) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0))
			{
				if (!MISC::IS_STRING_NULL(&(uParam4->f_54)))
				{
					*uParam4 = MISC::GET_GAME_TIMER();
					__LIB_3__::func_912(uParam4->f_179, &(uParam4->f_81), iParam2, iParam0, &(uParam4->f_54), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					*uParam3 = 6;
				}
				else
				{
					if (uParam4->f_75 != 0)
					{
						__LIB_1__::func_616(uParam4->f_75, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
					}
					else if (uParam4->f_70 != 0)
					{
						__LIB_1__::func_797(uParam4->f_70, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
					}
					*uParam3 = 6;
				}
			}
			break;
		case 6:
			if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182) || (uParam4->f_190 > 0 && (MISC::GET_GAME_TIMER() - *uParam4) > uParam4->f_190))
			{
				if (MAP::DOES_BLIP_EXIST(*iParam1))
				{
					MAP::REMOVE_BLIP(iParam1);
				}
				if (uParam4->f_78)
				{
					TASK::TASK_WANDER_STANDARD(iParam0, 40000f, 0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_208)))
				{
					__LIB_0__::func_45(&(uParam4->f_208), 10000, 0, 0, 0, 1);
				}
				*uParam3 = 7;
				return true;
			}
			break;
		case 7:
			return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		TASK::TASK_SMART_FLEE_PED(iParam0, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
		return true;
	}
	return false;
}

int func_497(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_635(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_2__::func_588(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
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

bool func_501()
{
	if ((iLocal_17 == 1 && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_80, false)) && ANIMSCENE::_0x8D81E7824B7753F7(Local_80, "action", 1))
	{
		return false;
	}
	return true;
}

void func_505(bool bParam0)
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			switch (iLocal_17)
			{
				case 0:
					bLocal_397 = true;
					vLocal_379 = { -307.4005f, 797.8436f, 117.947f };
					if (bParam0)
					{
						vLocal_382 = { -304.634f, 811.7f, 120.976f };
						fLocal_395 = 112.808f;
						iLocal_375 = joaat("WORLD_HUMAN_STARE_STOIC");
					}
					else
					{
						vLocal_382 = { -304.825f, 811.922f, 120.976f };
						fLocal_395 = -164.278f;
						iLocal_375 = joaat("WORLD_HUMAN_STAND_WAITING");
					}
					break;
				case 1:
					switch (Local_101.f_51.f_4)
					{
						case 0:
							vLocal_385[0 /*3*/] = { -305.9674f, 825.1412f, 118.3967f };
							vLocal_385[1 /*3*/] = { -302.6452f, 814.72f, 117.4108f };
							vLocal_379 = { -307.4005f, 797.8436f, 117.947f };
							bLocal_397 = true;
							vLocal_382 = { -304.825f, 811.922f, 120.976f };
							fLocal_395 = -164.278f;
							iLocal_375 = joaat("WORLD_HUMAN_STAND_WAITING");
							break;
						case 1:
							vLocal_385[1 /*3*/] = { -225.7226f, 763.439f, 116.2204f };
							vLocal_379 = { -307.4005f, 797.8436f, 117.947f };
							bLocal_397 = true;
							vLocal_382 = { -304.825f, 811.922f, 120.976f };
							fLocal_395 = -164.278f;
							iLocal_375 = joaat("WORLD_HUMAN_STAND_WAITING");
							break;
						case 2:
							vLocal_385[0 /*3*/] = { -275.3085f, 641.9633f, 112.379f };
							vLocal_385[1 /*3*/] = { -230.2025f, 687.0725f, 112.3302f };
							vLocal_379 = { -307.4005f, 797.8436f, 117.947f };
							bLocal_397 = true;
							vLocal_382 = { -304.825f, 811.922f, 120.976f };
							fLocal_395 = -164.278f;
							iLocal_375 = joaat("WORLD_HUMAN_STAND_WAITING");
							break;
					}
					break;
			}
			break;
		case 105:
			vLocal_379 = { 1353.808f, -1377.04f, 79.50304f };
			bLocal_397 = true;
			if (bParam0)
			{
				vLocal_382 = { 1348.383f, -1377.68f, 83.289f };
				fLocal_395 = -10.462f;
				iLocal_375 = joaat("WORLD_HUMAN_LEAN_WALL_LEFT");
			}
			else
			{
				vLocal_382 = { 1348.618f, -1376.747f, 83.289f };
				fLocal_395 = 158.583f;
				iLocal_375 = joaat("WORLD_HUMAN_STAND_WAITING");
			}
			break;
		case 92:
			vLocal_379 = { 2952.098f, 523.3885f, 44.46711f };
			vLocal_382 = { 2941.216f, 522.585f, 44.331f };
			fLocal_395 = 164.833f;
			bLocal_397 = true;
			switch (Local_101.f_51.f_4)
			{
				case 0:
					vLocal_385[0 /*3*/] = { 2970.667f, 462.3464f, 48.38306f };
					iLocal_375 = joaat("WORLD_HUMAN_SMOKE");
					break;
				case 1:
					break;
			}
			break;
	}
}

void func_506()
{
	if (!__LIB_0__::func_86(vLocal_382))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_418))
		{
			if (!CAM::IS_SPHERE_VISIBLE(vLocal_382, 1f))
			{
				__LIB_3__::func_618(vLocal_382, 0.5f, 1, 0, 0, 0, 0);
			}
			__LIB_3__::func_594(&iLocal_418, &uLocal_420, vLocal_382, 0f, 0f, 0f, 0.5f, 0.5f, 0.5f, 0, 0, 1, 0, 0);
		}
	}
}

bool func_509(float fParam0)
{
	if (!__LIB_0__::func_27(iLocal_400, 16777216))
	{
		return true;
	}
	else if (fParam0 > 4f)
	{
		return true;
	}
	else if ((Local_101.f_98[1] < 4f && __LIB_2__::func_123(uLocal_410[1], Global_35, 0)) && fParam0 > 2f)
	{
		return true;
	}
	return false;
}

float func_510(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;
	vector3 vVar30;
	float fVar33[4];
	int iVar38;
	int iVar39;
	float fVar40;
	float fVar41;
	vector3 vVar42;
	vector3 vVar45;
	vector3 vVar48;
	float fVar51;
	float fVar52;
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0, vParam1))
	{
		return 0f;
	}
	iVar39 = -1;
	fVar40 = 9999999f;
	vVar42 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar45 = { VOLUME::_GET_VOLUME_ROTATION(iParam0) };
	vVar48 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	fVar51 = (vVar48.x / 2f);
	fVar52 = (vVar48.y / 2f);
	vVar15.x = fVar51;
	vVar15.f_1 = fVar52;
	vVar18.x = -fVar51;
	vVar18.f_1 = -fVar52;
	vVar12 = { -fVar51, fVar52, 0f };
	vVar21 = { fVar51, -fVar52, 0f };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar42, vVar45.z, vVar12) };
	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar42, vVar45.z, vVar15) };
	vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar42, vVar45.z, vVar18) };
	vVar9 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar42, vVar45.z, vVar21) };
	fVar33[0] = BUILTIN::VDIST2(vVar0, vParam1);
	fVar33[1] = BUILTIN::VDIST2(vVar3, vParam1);
	fVar33[2] = BUILTIN::VDIST2(vVar6, vParam1);
	fVar33[3] = BUILTIN::VDIST2(vVar9, vParam1);
	iVar38 = 0;
	while (iVar38 <= 3)
	{
		if (fVar33[iVar38] < fVar40)
		{
			iVar39 = iVar38;
			fVar40 = fVar33[iVar38];
		}
		iVar38++;
	}
	vVar0.f_2 = vParam1.z;
	vVar3.f_2 = vParam1.z;
	vVar6.f_2 = vParam1.z;
	vVar9.f_2 = vParam1.z;
	if (iVar39 > -1)
	{
		switch (iVar39)
		{
			case 0:
				vVar24 = { vVar0 };
				vVar27 = { vVar3 };
				vVar30 = { vVar6 };
				break;
			case 1:
				vVar24 = { vVar3 };
				vVar27 = { vVar0 };
				vVar30 = { vVar9 };
				break;
			case 2:
				vVar24 = { vVar6 };
				vVar27 = { vVar0 };
				vVar30 = { vVar9 };
				break;
			case 3:
				vVar24 = { vVar9 };
				vVar27 = { vVar6 };
				vVar30 = { vVar3 };
				break;
		}
	}
	fVar41 = __LIB_0__::func_646(__LIB_3__::func_693(vVar24, vVar27, vParam1, 0), __LIB_3__::func_693(vVar24, vVar30, vParam1, 0));
	return fVar41;
}

void func_519()
{
	__LIB_10__::func_135();
	func_664(&(uLocal_410[1]));
	PED::SET_PED_CONFIG_FLAG(uLocal_410[1], 6, false);
}

void func_534(var uParam0)
{
	int iVar0;
	if (uParam0->f_75 != 0)
	{
		__LIB_1__::func_616(uParam0->f_75, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	}
	else if (uParam0->f_70 != 0)
	{
		__LIB_1__::func_797(uParam0->f_70, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
	}
	if (__LIB_0__::func_144(uParam0->f_74, 0))
	{
		func_674(uParam0->f_74, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (uParam0->f_72 != 0)
	{
		if (uParam0->f_71)
		{
			iVar0 = (__LIB_3__::func_256() + uParam0->f_72);
			__LIB_3__::func_216(iVar0);
		}
		else
		{
			__LIB_3__::func_707(uParam0->f_72, 1);
		}
	}
	if (uParam0->f_73 != 9)
	{
		__LIB_1__::func_715(uParam0->f_73, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	}
}

int func_635(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_3__::func_269(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_635(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_3__::func_270(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_3__::func_272(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_270(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

int func_664(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		PED::SET_PED_CONFIG_FLAG(*uParam0, 186, true);
		DECORATOR::DECOR_SET_BOOL(*uParam0, "bDeadOrAlive", true);
		if (DECORATOR::DECOR_EXIST_ON(*uParam0, "bDeadOrAlive"))
		{
			DECORATOR::DECOR_REMOVE(*uParam0, "bDeadOrAlive");
		}
		if (DECORATOR::DECOR_EXIST_ON(*uParam0, "bIsCriminal"))
		{
			DECORATOR::DECOR_REMOVE(*uParam0, "bIsCriminal");
		}
		return 1;
	}
	return 0;
}

int func_674(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!__LIB_3__::func_917(iParam0, iParam1, bParam2, iParam5))
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
				func_674(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_19__::func_100(28);
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
			if (!__LIB_3__::func_915(iParam0, iParam5, &bParam2, bParam3, bParam4))
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
						func_674(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_674(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_674(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_674(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_674(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_674(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_674(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_19__::func_100(24);
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
					func_674(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_674(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_19__::func_102(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_19__::func_434(iParam0);
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
				func_674(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
		__LIB_3__::func_868(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

