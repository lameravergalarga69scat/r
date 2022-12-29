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
	vector3 vLocal_14[10] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_45 = 4;
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
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	struct<2> Local_78[21];
	struct<12> Local_121[1];
	struct<32> Local_134[2];
	bool bLocal_199 = false;
	int iLocal_200 = 0;
	float fLocal_201 = 0f;
	struct<23> Local_202 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	float fLocal_227 = 0f;
	int iLocal_228 = 0;
	struct<193> Local_229 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_422 = 0;
	struct<5> Local_423 = { 0, 0, 0, 0, 0 } ;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	int iLocal_431 = 0;
	char[] cLocal_432[8] = 0;
	char* sLocal_433 = NULL;
	struct<4> Local_434 = { 0, 0, 0, 0 } ;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	char* sLocal_448 = NULL;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	struct<21> Local_452[1];
	struct<17> Local_474[2];
	struct<24> Local_509 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	int iLocal_543 = 0;
	vector3 vLocal_544 = { 0f, 0f, 0f };
	var uLocal_547 = 1;
	var uLocal_548 = 0;
	var uLocal_549 = 1112014848;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
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
	var uLocal_621 = 9;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 1;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 24;
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
	var uLocal_732 = -1082130432;
	var uLocal_733 = -1082130432;
	var uLocal_734 = 1103626240;
	var uLocal_735 = -1067450368;
	var uLocal_736 = 1097859072;
	var uLocal_737 = 1073741824;
	var uLocal_738 = 4000;
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
	var uLocal_760 = 1073741824;
	var uLocal_761[2] = { 0, 0 };
	var uLocal_764[2] = { 0, 0 };
	var uLocal_767 = 0;
	int iLocal_768 = 0;
	int iLocal_769 = 0;
	int iLocal_770 = 0;
	int iLocal_771 = 0;
	int iLocal_772 = 0;
	struct<12> Local_773[1];
	int iLocal_786 = 0;
	int iLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	int iLocal_846 = 0;
	bool bLocal_847 = false;
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	int iLocal_862 = 0;
	int iLocal_863 = 0;
	int iLocal_864 = 0;
	bool bLocal_865 = false;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	int iLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	int iLocal_871 = 0;
	vector3 vLocal_872 = { 0f, 0f, 0f };
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	float fLocal_877 = 0f;
	float fLocal_878 = 0f;
	float fLocal_879 = 0f;
	float fLocal_880 = 0f;
	float fLocal_881 = 0f;
	float fLocal_882 = 0f;
	float fLocal_883 = 0f;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_201 = 8f;
	fLocal_227 = 4.5f;
	cLocal_432 = "Beat People In Need Snake Bite";
	iLocal_450 = 16;
	iLocal_842 = 1;
	iLocal_855 = 1;
	vLocal_872 = { 20f, 20f, 20f };
	fLocal_877 = 40f;
	fLocal_878 = 40f;
	fLocal_879 = 0.25f;
	fLocal_880 = 2f;
	fLocal_881 = 6f;
	fLocal_882 = 5f;
	fLocal_883 = 3f;
	Local_229.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_865 = true;
	}
	if (!bLocal_865)
	{
		Local_229.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		Local_229.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		uLocal_767 = uLocal_767;
		__LIB_3__::func_368(&Local_229, 1);
		func_4(Local_229.f_3);
		func_5();
		func_6();
		func_7();
		func_8(&uLocal_547, Local_229.f_3);
		func_9();
		func_10();
		__LIB_2__::func_433(&(Local_229.f_5));
		__LIB_2__::func_104(&(Local_229.f_5), 0);
		if (__LIB_4__::func_18())
		{
			__LIB_1__::func_683(&iLocal_446, 16384);
		}
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_865, 2025, 0);
		if (bLocal_865)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_770)
			{
				case 0:
					if (func_17())
					{
						iLocal_770 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_454(&Local_229, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_19(&Local_229, &iLocal_787, &(Local_229.f_51.f_4));
						__LIB_3__::func_455(&Local_229, iLocal_787, 3119);
						__LIB_4__::func_975(&iLocal_871, Local_229.f_51, 0f, 0f, 0f, vLocal_872, "Restriction");
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_871))
						{
							POPULATION::_0x18262CAFEBB5FBE1(iLocal_871, 0, 0, 0, -1, -1, 0);
							POPULATION::_0xB56D41A694E42E86(iLocal_871, 0, 0, 0, -1, -1, 0);
						}
						iLocal_770 = 3;
					}
					else if (Local_229.f_160)
					{
						func_15();
					}
					break;
				case 3:
					if (func_23())
					{
						func_24();
						func_25();
						iLocal_770 = 4;
					}
					break;
				case 4:
					bVar0 = true;
					if (!__LIB_3__::func_617(&Local_229, &uLocal_761, iLocal_228, 0, 1, 0, 1, 0))
					{
						func_15();
					}
					if (!__LIB_2__::func_1(uLocal_761[1], 0, 1) && !__LIB_0__::func_75(&uLocal_830))
					{
						__LIB_1__::func_283(&uLocal_830, 0);
					}
					if (iLocal_842 == 1)
					{
						if (__LIB_2__::func_901(uLocal_761[1], Global_35))
						{
							if (!__LIB_0__::func_27(iLocal_446, 128))
							{
								__LIB_3__::func_459(uLocal_761[1], 0);
							}
							iLocal_842 = 0;
							if (((iLocal_228 == 0 && iLocal_447 < 9) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0])) && __LIB_0__::func_665(Global_35, uLocal_761[0], 1, 1) < 15f)
							{
								__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("SHOT_SNAKE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
						}
					}
					if (iLocal_864 == 0)
					{
						if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1) && !__LIB_0__::func_27(iLocal_446, 128))
						{
							iLocal_864 = 1;
							iLocal_769 = 11;
						}
					}
					if (!Local_229.f_46)
					{
						if (__LIB_4__::func_209(uLocal_761[0], 0, &(Local_229.f_5), &iLocal_786, 0, 0) || PED::IS_PED_RAGDOLL(uLocal_761[0]))
						{
							if ((__LIB_1__::func_996(uLocal_761[1], 1, 1, 1, 0) || __LIB_4__::func_207(uLocal_761[1], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0)) && __LIB_0__::func_264(&uLocal_830) < 6f)
							{
								if (iLocal_786 == 256 || iLocal_786 == 4)
								{
									bVar0 = false;
								}
							}
							if (((((((bVar0 && ((iLocal_786 == 8 || iLocal_786 == 16) || iLocal_786 == 4)) && (((((iLocal_862 == 1 && !ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "STAND_2_SIT", 1)) && !ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "give_meds_n", 1)) && !ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "give_meds_l", 1)) && !ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "give_meds_r", 1)) && !ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "SUCK_VENOM", 1))) || PED::IS_PED_RAGDOLL(uLocal_761[0])) || PED::_IS_PED_HOGTIED(uLocal_761[0])) || PED::_IS_PED_LASSOED(uLocal_761[0])) || (bVar0 && iLocal_786 == 2)) || PED::IS_PED_IN_COMBAT(Global_35, 0))
							{
								if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
								}
								ENTITY::DETACH_ENTITY(Local_121[0 /*12*/].f_8, true, true);
								PHYSICS::ACTIVATE_PHYSICS(Local_121[0 /*12*/].f_8);
								if (__LIB_2__::func_1(uLocal_761[0], 0, 1))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(uLocal_761[0]);
								}
								Local_229.f_44 = 1;
								iLocal_769 = 11;
								Local_229.f_46 = 1;
								if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_761[0], Local_423))
								{
									__LIB_2__::func_480(&Local_474, 1, 1, 1, 0);
									__LIB_2__::func_593(&(Local_452[0 /*21*/]), &Local_474);
									__LIB_2__::func_451(&(Local_452[0 /*21*/]), 0);
									iLocal_855 = 0;
								}
							}
						}
					}
					__LIB_4__::func_208(&uLocal_884, &uLocal_788, 8f, 1);
					if (func_45())
					{
						Local_229.f_50 = 1;
						func_15();
					}
					if (__LIB_3__::func_431(&Local_229, &uLocal_761, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0) || !__LIB_2__::func_1(uLocal_761[0], 0, 0))
					{
						Local_229.f_50 = 1;
						func_15();
					}
					break;
			}
			BUILTIN::WAIT(Local_229.f_158);
		}
	}
}

void func_4(var uParam0)
{
	if (bLocal_199 == 1)
	{
		iLocal_228 = 0;
		if (__LIB_0__::func_181())
		{
			fLocal_201 = 9.07f;
		}
		else
		{
			fLocal_201 = 6.668f;
		}
	}
	else if (__LIB_3__::func_564(45, 6) == 0)
	{
		iLocal_228 = 0;
		if (__LIB_0__::func_181())
		{
			fLocal_201 = 8.621f;
		}
		else
		{
			fLocal_201 = 8.244f;
		}
	}
	else
	{
		iLocal_228 = 1;
		if (__LIB_0__::func_181())
		{
			fLocal_201 = 8.754f;
		}
		else
		{
			fLocal_201 = 8.25f;
		}
	}
	if (__LIB_4__::func_18())
	{
		iLocal_431 = 1;
		iLocal_431 = iLocal_431;
	}
	else
	{
		iLocal_431 = 0;
	}
}

void func_5()
{
	Local_121[0 /*12*/].f_7 = joaat("S_INV_MEDICINE01X");
}

void func_6()
{
	Local_423.f_4 = "script@beat@wilderness@snakeBite@snakebite";
}

void func_7()
{
	Local_134[0 /*32*/].f_6 = { 0f, 0f, 0f };
	Local_134[0 /*32*/].f_9 = 0f;
}

void func_8(var uParam0, int iParam1)
{
	StringCopy(&((uParam0[0 /*213*/])->f_34), "", 64);
	StringCopy(&((uParam0[0 /*213*/])->f_42), "", 64);
	StringCopy(&((uParam0[0 /*213*/])->f_54), "", 64);
	(uParam0[0 /*213*/])->f_76 = 1;
	(uParam0[0 /*213*/])->f_71 = 1;
	(uParam0[0 /*213*/])->f_72 = __LIB_3__::func_687(iParam1);
	(uParam0[0 /*213*/])->f_78 = 0;
}

void func_9()
{
	Local_202 = { 0f, 0f, 0f };
	Local_202.f_3 = Global_35;
	Local_202.f_8 = 4;
	Local_202.f_4 = 21030;
	Local_202.f_21 = 4;
	Local_202.f_22 = 4;
	Local_202.f_19 = 3;
	Local_202.f_20 = 4;
	Local_202.f_17 = 0;
	Local_202.f_18 = 0;
	Local_202.f_7 = 0;
}

void func_10()
{
	switch (__LIB_1__::func_898())
	{
		case 9:
			switch (Local_229.f_51.f_4)
			{
				case 0:
					break;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
			}
			break;
		case 11:
			switch (Local_229.f_51.f_4)
			{
				case 0:
					break;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
			}
			break;
	}
}

void func_15()
{
	if (iLocal_447 < 2)
	{
		Local_229.f_45 = 0;
		__LIB_3__::func_252(&Local_229);
	}
	else if (!__LIB_0__::func_27(iLocal_446, 1024) && __LIB_0__::func_27(iLocal_446, 128))
	{
		switch (iLocal_787)
		{
			case 0:
			case 2:
			case 11:
				MISC::_0xCC3EDC5614B03F61(74);
				break;
		}
	}
	__LIB_0__::func_172(iLocal_868);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_871))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_871);
		POPULATION::_0xA1CFB35069D23C23(iLocal_871);
		VOLUME::_DELETE_VOLUME(iLocal_871);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_761[0]))
	{
		ENTITY::_0x18FF3110CF47115D(uLocal_761[0], 2, 1);
		ENTITY::_0x18FF3110CF47115D(uLocal_761[0], 0, 1);
	}
	if (iLocal_849 == 1)
	{
		iLocal_849 = 0;
		MAP::DISPLAY_RADAR(true);
	}
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_867))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_867);
	}
	__LIB_0__::func_172(iLocal_867);
	__LIB_2__::func_353(&uLocal_542, 1);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_875);
	__LIB_2__::func_353(&uLocal_869, 1);
	__LIB_2__::func_353(&uLocal_870, 1);
	__LIB_0__::func_325(&(uLocal_764[0]));
	func_66();
	if (Local_229.f_48 == 0)
	{
		if (__LIB_2__::func_1(uLocal_761[0], 0, 0))
		{
			PED::_0x4FD80C3DD84B817B(uLocal_761[0]);
			PED::_0x58F7DB5BD8FA2288(uLocal_761[0]);
			TASK::_TASK_MOVE_IN_TRAFFIC_3(uLocal_761[0], Global_35, 1f, 128, 0);
			PED::SET_PED_KEEP_TASK(uLocal_761[0], true);
			__LIB_4__::func_63(uLocal_761[0], 75);
			PED::_0x39A2FC5AF55A52B1(uLocal_761[0], -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_761[0]));
			Local_229.f_50 = 1;
		}
	}
	__LIB_3__::func_493(&Local_229, &uLocal_761, &uLocal_764, iLocal_228, iLocal_787, Local_229.f_51.f_4, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_17()
{
	int iVar0;
	switch (iLocal_768)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_229))
			{
				func_71();
				func_4(Local_229.f_3);
				func_72();
				STREAMING::REQUEST_MODEL(Local_121[0 /*12*/].f_7, false);
				func_73();
				iLocal_768 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_767, cLocal_432))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_45))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_121))
			{
				return false;
			}
			if (!AUDIO::_0xD9130842D7226045("RESB_Sounds", 0))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_134[iVar0 /*32*/].f_1))
				{
					return false;
				}
				iVar0++;
			}
			if (!__LIB_3__::func_449(&Local_134))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_19(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 0;
			*uParam2 = 1;
			break;
		case 2:
			*iParam1 = 0;
			*uParam2 = 2;
			break;
		case 3:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 4:
			*iParam1 = 9;
			*uParam2 = 1;
			break;
		case 5:
			*iParam1 = 9;
			*uParam2 = 2;
			break;
		case 6:
			*iParam1 = 9;
			*uParam2 = 3;
			break;
		case 7:
			*iParam1 = 9;
			*uParam2 = 4;
			break;
		case 8:
			*iParam1 = 9;
			*uParam2 = 5;
			break;
		case 9:
			*iParam1 = 9;
			*uParam2 = 6;
			break;
		case 10:
			*iParam1 = 11;
			*uParam2 = 0;
			break;
		case 11:
			*iParam1 = 11;
			*uParam2 = 1;
			break;
		case 12:
			*iParam1 = 11;
			*uParam2 = 2;
			break;
		case 13:
			*iParam1 = 11;
			*uParam2 = 3;
			break;
		case 14:
			*iParam1 = 11;
			*uParam2 = 4;
			break;
	}
}

Vector3 func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					return 0f, 0f, -92.16f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -70.03f;
				case 1:
					return 0f, 0f, 54.73f;
				case 2:
					return 0f, 0f, 157.3297f;
				case 3:
					return 0f, 0f, -208.07f;
				case 4:
					return 0f, 0f, 90.09f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_23()
{
	switch (iLocal_771)
	{
		case 0:
			if (__LIB_3__::func_479(__LIB_3__::func_179(&Local_229), __LIB_3__::func_526(&Local_229), &Local_134, &uLocal_761, 0, 0, -1, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_24()
{
	vector3 vVar0;
	if (__LIB_2__::func_1(uLocal_761[0], 0, 1))
	{
		ENTITY::SET_ENTITY_COORDS(uLocal_761[0], Local_229.f_51, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(uLocal_761[0], Local_229.f_51.f_3);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_761[0], true, true);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_761[0], true);
		__LIB_3__::func_579(uLocal_761[0]);
		__LIB_2__::func_190(uLocal_761[0], __LIB_4__::func_211(joaat("REWARD_BEAT_SMALL"), 0, -1));
		PED::_0x89F5E7ADECCCB49C(uLocal_761[0], "INJURED_RIGHT_LEG");
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_134[0 /*32*/].f_23)))
		{
			__LIB_2__::func_133(uLocal_761[0], &(Local_134[0 /*32*/].f_23), 0);
		}
		__LIB_4__::func_63(uLocal_761[0], 20);
		ENTITY::_0x18FF3110CF47115D(uLocal_761[0], 0, 0);
		ENTITY::_0x18FF3110CF47115D(uLocal_761[0], 2, 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_761[0], Global_35, -1, -1f, -1f, -1f);
		TASK::_0x82ED59F095056550(uLocal_761[0], 30f);
		TASK::_0x5B68D0007D9C92EB(uLocal_761[0], 30f);
	}
	vVar0 = { Local_229.f_51 + Vector(5f, 8f, 0f) };
	__LIB_2__::func_106(&vVar0, 50, 10, 0);
	if (__LIB_2__::func_1(uLocal_761[1], 0, 1))
	{
		ENTITY::SET_ENTITY_COORDS(uLocal_761[1], vVar0, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(uLocal_761[1], Local_229.f_51.f_3);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_761[1], false);
	}
	__LIB_2__::func_344(&(uLocal_761[1]));
	iLocal_451 = 0;
	PED::SET_PED_CONFIG_FLAG(uLocal_761[1], 217, true);
	iLocal_875 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DISTURBING"), uLocal_761[0], 0f, fLocal_877, fLocal_878, -1f, -1f, 180f, false, false, -1, -1);
	__LIB_3__::func_285(uLocal_761[0], &Local_229, 0);
}

void func_25()
{
	vector3 vVar0;
	Local_423 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_423.f_4, 64, "PB_STAND_2_SIT", false, true);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_423))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(uLocal_761[0], true, false) };
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_423, vVar0, 0f, 0f, Local_134[0 /*32*/].f_9, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_423, "victim", uLocal_761[0], 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_423.f_4))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_423, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_423);
		}
	}
	Local_121[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_121[0 /*12*/].f_7, Local_229.f_51 + Vector(-1f, 0f, 0f), true, true, false, false, true);
}

char* func_34(char* sParam0)
{
	int iVar0;
	if (iLocal_228 == 0)
	{
		iVar0 = 1;
	}
	else if (iLocal_228 == 1)
	{
		iVar0 = 2;
	}
	if (bLocal_199 == 1)
	{
		return __LIB_3__::func_394("SB", "PLN", sParam0, iVar0);
	}
	else
	{
		return __LIB_3__::func_394("SB", "LWL", sParam0, iVar0);
	}
	return "INVALID";
}

bool func_45()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	func_151();
	func_152();
	func_153();
	func_154();
	func_155();
	func_156();
	func_157();
	if (__LIB_2__::func_1(uLocal_761[0], 0, 1))
	{
		PED::SET_PED_RESET_FLAG(uLocal_761[0], 134, true);
	}
	switch (iLocal_769)
	{
		case 0:
			if (__LIB_2__::func_1(uLocal_761[0], 0, 1))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_761[0], Global_35, -1, -1f, -1f, -1f);
			}
			vVar0 = { ENTITY::GET_ENTITY_COORDS(uLocal_761[0], true, false) };
			fVar6 = ENTITY::GET_ENTITY_HEADING(uLocal_761[0]);
			vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar6, 0f, 2f, 0f) };
			__LIB_3__::func_337(&uLocal_869, vVar3, 2f);
			__LIB_2__::func_659(&uLocal_870, vVar3, 5f, 0, 0);
			func_160();
			iLocal_769 = 1;
			break;
		case 1:
			func_161();
			if (__LIB_3__::func_452(&Local_229, 1f, 80f, 55f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				iLocal_769 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_264(&uLocal_833) > 1f && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				func_163();
				__LIB_0__::func_37(&uLocal_833);
			}
			func_164();
			if (iLocal_843 == 1)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_423, "PB_IDLE"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_423, "PB_IDLE", true);
					iLocal_769 = 5;
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_423, "PB_IDLE");
				}
			}
			break;
		case 5:
			func_165();
			if (func_166())
			{
				if (__LIB_1__::func_750(&uVar7))
				{
					if (func_168())
					{
					}
				}
				if (iLocal_863 == 1)
				{
					fVar8 = (fLocal_201 - fLocal_883);
					if (func_169(&Local_509, 106) && ((__LIB_0__::func_27(iLocal_446, 524288) && (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || __LIB_0__::func_264(&uLocal_839) > fVar8)) || __LIB_0__::func_27(iLocal_446, 1048576)))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_423, "player", Global_35, 0);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_423, sLocal_448, true);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_423, "pain_bool", true, false);
						__LIB_2__::func_360(&(Local_474[0 /*17*/]), "RE_INTER_POS");
						__LIB_2__::func_360(&(Local_474[1 /*17*/]), "RE_INTER_ANTAGONIZE");
						__LIB_2__::func_451(&(Local_452[0 /*21*/]), 0);
						__LIB_2__::func_104(&(Local_229.f_5), 1);
						__LIB_2__::func_105(&(Local_229.f_5), 1);
						if (__LIB_0__::func_27(iLocal_446, 524288))
						{
							iLocal_769 = 6;
						}
						else if (__LIB_0__::func_27(iLocal_446, 1048576))
						{
							if (iLocal_228 == 0)
							{
								__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("TAKE_MEDICINE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							else if (iLocal_228 == 1)
							{
								__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("TAKE_MEDICINE_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							ENTITY::PLAY_ENTITY_ANIM(Local_121[0 /*12*/].f_8, Local_78[iLocal_450 /*2*/].f_1, Local_78[iLocal_450 /*2*/], 0.125f, false, true, false, 0f, 0);
							iLocal_769 = 7;
						}
					}
				}
			}
			break;
		case 6:
			func_165();
			if (!ANIMSCENE::_0x1F0E401031E20146(Local_423, sLocal_448))
			{
				if (func_172(sLocal_448))
				{
				}
			}
			else
			{
				if ((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_423) || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_423, "player")) && __LIB_0__::func_27(iLocal_446, 4096))
				{
					if (iLocal_849 == 1)
					{
						iLocal_849 = 0;
						MAP::DISPLAY_RADAR(true);
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_423, "player", Global_35);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					}
				}
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "thank_you_suck", 1))
				{
					iLocal_449 = 2;
					if (__LIB_0__::func_27(iLocal_446, 128))
					{
						iLocal_769 = 14;
					}
				}
			}
			break;
		case 7:
			func_165();
			if (!ANIMSCENE::_0x1F0E401031E20146(Local_423, sLocal_448))
			{
				if (func_172(sLocal_448))
				{
				}
			}
			else
			{
				if ((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_423) || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_423, "player")) && __LIB_0__::func_27(iLocal_446, 2048))
				{
					if (iLocal_849 == 1)
					{
						iLocal_849 = 0;
						MAP::DISPLAY_RADAR(true);
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_423, "player", Global_35);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					}
				}
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "thank_you_suck", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "thank_you_meds", 1))
				{
					iLocal_449 = 2;
					if (__LIB_0__::func_27(iLocal_446, 128))
					{
						iLocal_769 = 14;
					}
				}
			}
			break;
		case 11:
			if (__LIB_0__::func_104())
			{
				__LIB_0__::func_105(1);
			}
			__LIB_4__::func_258(&uLocal_884, &uLocal_788);
			if (!MISC::IS_STRING_NULL(sLocal_433))
			{
				__LIB_1__::func_390(sLocal_433, 1);
			}
			if (((((PED::IS_PED_RAGDOLL(uLocal_761[0]) || PED::_IS_PED_HOGTIED(uLocal_761[0])) || PED::_IS_PED_LASSOED(uLocal_761[0])) || PED::_0x3BDFCF25B58B0415(uLocal_761[0])) || PED::IS_PED_IN_MELEE_COMBAT(uLocal_761[0])) || iLocal_786 == 2)
			{
				if (iLocal_449 == 1)
				{
					iLocal_449 = 0;
				}
				else if (iLocal_449 == 2)
				{
					iLocal_449 = 3;
				}
				__LIB_0__::func_172(iLocal_868);
				__LIB_2__::func_360(&(Local_474[0 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_474[1 /*17*/]), "RE_INTER_ANTAGONIZE");
				__LIB_2__::func_411(&(Local_474[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_474[1 /*17*/]), 0, 0);
				__LIB_2__::func_451(&(Local_452[0 /*21*/]), 0);
				func_179(&(uLocal_761[0]), &(Local_452[0 /*21*/]), 0.1f, &Local_474, &(Local_229.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
				iLocal_855 = 0;
			}
			if (__LIB_2__::func_1(uLocal_761[0], 0, 1))
			{
				switch (iLocal_449)
				{
					case 0:
						if (!__LIB_0__::func_27(iLocal_446, 8388608))
						{
							__LIB_2__::func_461(0);
							if (iLocal_228 == 0)
							{
								__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("AGGRO_PRE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							else if (iLocal_228 == 1)
							{
								__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("AGGRO_PRE_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_1__::func_683(&iLocal_446, 8388608);
						}
						TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_761[0], Global_35, 5, 128, -1082130432 /* Float: -1f */, -1, 0);
						__LIB_1__::func_283(&uLocal_806, 0);
						iLocal_769 = 15;
						break;
					case 1:
						if (func_172("PB_COWER"))
						{
							if (!__LIB_0__::func_27(iLocal_446, 8388608))
							{
								__LIB_2__::func_461(0);
								if (iLocal_228 == 0)
								{
									__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("AGGRO_PRE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
								}
								else if (iLocal_228 == 1)
								{
									__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("AGGRO_PRE_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
								}
								__LIB_1__::func_683(&iLocal_446, 8388608);
							}
							func_181();
							iLocal_772 = 2;
							iLocal_846 = 1;
							iLocal_769 = 12;
						}
						break;
					case 2:
						if (!__LIB_0__::func_27(iLocal_446, 536870912))
						{
							__LIB_2__::func_461(0);
							if (iLocal_228 == 0)
							{
								__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("AGGRO_POST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							else if (iLocal_228 == 1)
							{
								__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("AGGRO_POST_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_1__::func_683(&iLocal_446, 536870912);
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], -613578514) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], 930507293))
						{
							ANIMSCENE::SET_ANIM_SCENE_RATE(Local_423, 1.35f);
						}
						else if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_761[0], Local_423))
						{
							if (ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "thank_you_meds", 1))
							{
								TASK::TASK_PLAY_ANIM(uLocal_761[0], Local_78[12 /*2*/], Local_78[12 /*2*/].f_1, 8f, -4f, -1, 0, 0.456f, false, 0, false, 0, false);
								ENTITY::_SET_ENTITY_ANIM_SPEED(uLocal_761[0], Local_78[12 /*2*/], Local_78[12 /*2*/].f_1, 1.35f);
							}
							else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "thank_you_suck", 1))
							{
								TASK::TASK_PLAY_ANIM(uLocal_761[0], Local_78[13 /*2*/], Local_78[13 /*2*/].f_1, 8f, -4f, -1, 0, 0.446f, false, 0, false, 0, false);
								ENTITY::_SET_ENTITY_ANIM_SPEED(uLocal_761[0], Local_78[13 /*2*/], Local_78[13 /*2*/].f_1, 1.35f);
							}
						}
						if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_761[0], Local_423))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_761[0], Local_78[12 /*2*/], Local_78[12 /*2*/].f_1, 1))
							{
								ENTITY::_SET_ENTITY_ANIM_SPEED(uLocal_761[0], Local_78[12 /*2*/], Local_78[12 /*2*/].f_1, 1.35f);
							}
							else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_761[0], Local_78[13 /*2*/], Local_78[13 /*2*/].f_1, 1))
							{
								ENTITY::_SET_ENTITY_ANIM_SPEED(uLocal_761[0], Local_78[13 /*2*/], Local_78[13 /*2*/].f_1, 1.35f);
							}
						}
						if (!__LIB_0__::func_163(uLocal_761[0], 1435919172) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_761[0], Local_423))
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_761[0], 1.5f);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_543);
							TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 128, -1082130432 /* Float: -1f */, -1, 0);
							__LIB_1__::func_474(uLocal_761[0], &iLocal_543, 0, 0, 1, 1);
							iLocal_769 = 15;
						}
						break;
					case 3:
						if (!__LIB_0__::func_27(iLocal_446, 536870912))
						{
							__LIB_2__::func_461(0);
							if (iLocal_228 == 0)
							{
								__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("AGGRO_POST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							else if (iLocal_228 == 1)
							{
								__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("AGGRO_POST_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							__LIB_1__::func_683(&iLocal_446, 536870912);
						}
						__LIB_2__::func_411(&(Local_474[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_474[1 /*17*/]), 0, 0);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_761[0], 1.5f);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_543);
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 2f, 0, 4);
						TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 384, -1082130432 /* Float: -1f */, -1, 0);
						__LIB_1__::func_474(uLocal_761[0], &iLocal_543, 0, 0, 1, 1);
						iLocal_769 = 15;
						break;
				}
				if (!__LIB_0__::func_75(&uLocal_791))
				{
					__LIB_1__::func_283(&uLocal_791, 0);
				}
			}
			else
			{
				iLocal_769 = 15;
			}
			break;
		case 12:
			if (PED::_IS_PED_HOGTIED(uLocal_761[0]) || PED::_IS_PED_LASSOED(uLocal_761[0]))
			{
				Local_229.f_46 = 1;
				iLocal_855 = 0;
				__LIB_2__::func_480(&Local_474, 1, 1, 1, 0);
				__LIB_2__::func_593(&(Local_452[0 /*21*/]), &Local_474);
				__LIB_2__::func_451(&(Local_452[0 /*21*/]), 0);
				iLocal_769 = 11;
				return false;
			}
			iLocal_856 = 1;
			fVar9 = 15f;
			if ((__LIB_0__::func_27(iLocal_446, 4194304) || iLocal_848 == 1) || __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1))
			{
				fVar9 = 7f;
			}
			if (__LIB_0__::func_264(&uLocal_791) > fVar9 || __LIB_0__::func_27(iLocal_446, 4194304))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_423, "COWER_BOOL", true, false);
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "pain_idle", 1) && func_172("PB_FEEL_COLD"))
				{
					__LIB_1__::func_683(&iLocal_446, 2097152);
					__LIB_0__::func_37(&uLocal_800);
					iLocal_447 = 10;
					iLocal_769 = 3;
					iLocal_846 = 0;
					__LIB_2__::func_411(&(Local_474[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_474[1 /*17*/]), 0, 0);
				}
				return false;
			}
			if (bLocal_847 && !__LIB_0__::func_27(iLocal_446, 33554432))
			{
				if (__LIB_2__::func_227(-5f, 1, 0, 0))
				{
					__LIB_1__::func_683(&iLocal_446, 33554432);
				}
			}
			if (!__LIB_0__::func_27(iLocal_446, 4194304) && iLocal_848 == 0)
			{
				if (!__LIB_0__::func_75(&uLocal_803))
				{
					__LIB_1__::func_283(&uLocal_803, 0);
					func_181();
				}
				if (PED::GET_PED_RESET_FLAG(Global_35, 0) == 1 || __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1))
				{
					__LIB_1__::func_148(&uLocal_803);
				}
				else if (__LIB_1__::func_313(&uLocal_803, 4f) || (__LIB_0__::func_27(iLocal_446, 16777216) && __LIB_1__::func_313(&uLocal_803, 2f)))
				{
					__LIB_0__::func_37(&uLocal_803);
					__LIB_0__::func_37(&uLocal_791);
					WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
					if (iLocal_857 == 0)
					{
						iLocal_447 = 5;
					}
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_423, "COWER_BOOL", true, false);
					Local_229.f_46 = 0;
					iLocal_772 = 1;
					__LIB_2__::func_360(&(Local_474[0 /*17*/]), "SNAKE_SUCK");
					__LIB_2__::func_360(&(Local_474[1 /*17*/]), "SNAKE_MED");
					__LIB_2__::func_411(&(Local_474[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_474[1 /*17*/]), 0, 0);
					__LIB_3__::func_621(&(Local_474[0 /*17*/]), 1, 0);
					__LIB_3__::func_621(&(Local_474[1 /*17*/]), 1, 0);
					__LIB_2__::func_462(&uLocal_833, -1f, 0);
					iLocal_846 = 0;
					iLocal_769 = 3;
					__LIB_1__::func_683(&iLocal_446, 4194304);
				}
			}
			break;
		case 14:
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_423) || ANIMSCENE::_0xB89FCFF19DAFFF28(Local_423, "player"))
			{
				if (iLocal_849 == 1)
				{
					iLocal_849 = 0;
					MAP::DISPLAY_RADAR(true);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_423, "player", Global_35);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
			}
			if (__LIB_2__::func_1(uLocal_761[0], 0, 1))
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_761[0], Local_423))
				{
					iLocal_449 = 3;
					if (__LIB_2__::func_1(uLocal_761[0], 0, 1))
					{
						vVar10 = { -250.1652f, 789.0698f, 117.9146f };
						if (bLocal_199 == 1)
						{
							vVar10 = { -250.1652f, 789.0698f, 117.9146f };
						}
						else
						{
							vVar10 = { 1274.799f, -1279.981f, 73.8674f };
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_543);
						TASK::TASK_STAND_STILL(0, 1500);
						TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vVar10, 1073741824 /* Float: 2f */, 1f, 128, 0);
						TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						__LIB_1__::func_474(uLocal_761[0], &iLocal_543, 0, 0, 1, 1);
						PED::_0x39A2FC5AF55A52B1(uLocal_761[0], -1);
						ENTITY::DETACH_ENTITY(Local_121[0 /*12*/].f_8, true, true);
						PHYSICS::ACTIVATE_PHYSICS(Local_121[0 /*12*/].f_8);
						PED::SET_PED_KEEP_TASK(uLocal_761[0], true);
						iLocal_451 = 3;
					}
					Local_229.f_44 = 1;
					__LIB_3__::func_459(uLocal_761[1], 1);
					iLocal_769 = 15;
				}
			}
			else
			{
				Local_229.f_44 = 1;
				__LIB_3__::func_459(uLocal_761[1], 1);
				iLocal_769 = 15;
			}
			break;
		case 15:
			if (Local_229.f_46 == 1)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_761[0], 1f);
			}
			if ((((__LIB_2__::func_1(uLocal_761[0], 0, 1) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && __LIB_0__::func_75(&uLocal_818)) && iLocal_859 == 1)
			{
				if (__LIB_1__::func_313(&uLocal_818, fLocal_881))
				{
					if (Local_229.f_46 == 0)
					{
						func_187();
					}
					else
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_761[0], false);
						EVENT::REMOVE_SHOCKING_EVENT(iLocal_875);
					}
				}
			}
			func_188();
			if (!__LIB_0__::func_27(iLocal_446, 4096) && !__LIB_0__::func_27(iLocal_446, 2048))
			{
				if (PED::_IS_PED_HOGTIED(uLocal_761[0]) || PED::_IS_PED_LASSOED(uLocal_761[0]))
				{
					if (iLocal_855 == 1)
					{
						iLocal_855 = 0;
						__LIB_2__::func_480(&Local_474, 1, 1, 1, 0);
						__LIB_2__::func_593(&(Local_452[0 /*21*/]), &Local_474);
						__LIB_2__::func_451(&(Local_452[0 /*21*/]), 0);
					}
					if (!__LIB_0__::func_75(&uLocal_806))
					{
						__LIB_1__::func_283(&uLocal_806, 0);
					}
				}
			}
			if (__LIB_0__::func_27(iLocal_446, 64))
			{
				TASK::SET_ANIM_RATE(uLocal_761[0], 0.75f, 0, false);
			}
			if (__LIB_0__::func_264(&uLocal_806) > 7.1f)
			{
				if (((PED::_IS_PED_HOGTIED(uLocal_761[0]) || PED::_IS_PED_LASSOED(uLocal_761[0])) || PED::_0x3BDFCF25B58B0415(uLocal_761[0])) || PED::IS_PED_IN_MELEE_COMBAT(uLocal_761[0]))
				{
					if (iLocal_855 == 1)
					{
						iLocal_855 = 0;
						__LIB_2__::func_480(&Local_474, 1, 1, 1, 0);
						__LIB_2__::func_593(&(Local_452[0 /*21*/]), &Local_474);
						__LIB_2__::func_451(&(Local_452[0 /*21*/]), 0);
					}
					if (!PED::_IS_PED_HOGTYING(Global_35))
					{
						__LIB_1__::func_683(&iLocal_446, 512);
					}
					else
					{
						__LIB_0__::func_268(&uLocal_806, -2f);
					}
				}
				else if (!__LIB_0__::func_27(iLocal_446, 64))
				{
					__LIB_1__::func_683(&iLocal_446, 64);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_543);
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 5, 0, -1082130432 /* Float: -1f */, 2000, 0);
					TASK::TASK_STAND_STILL(0, 1000);
					TASK::TASK_PLAY_ANIM(0, Local_78[19 /*2*/], Local_78[19 /*2*/].f_1, 2f, -4f, -1, 0, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_ANIM(0, Local_78[20 /*2*/], Local_78[20 /*2*/].f_1, 4f, -4f, -1, 131072, 0f, false, 0, false, 0, false);
					__LIB_1__::func_474(uLocal_761[0], &iLocal_543, 0, 0, 1, 1);
				}
			}
			else if (__LIB_0__::func_264(&uLocal_806) > 7f)
			{
				if (!__LIB_0__::func_27(iLocal_446, 32))
				{
					if (iLocal_228 == 0)
					{
						__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("SO_COLD"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_228 == 1)
					{
						__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("SO_COLD_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&iLocal_446, 32);
				}
			}
			else if (__LIB_0__::func_264(&uLocal_806) > 6f)
			{
				AUDIO::STOP_PED_SPEAKING(uLocal_761[0], true);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_761[0], 0.25f);
			}
			else if (__LIB_0__::func_264(&uLocal_806) > 3f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_761[0], 0.5f);
			}
			if ((__LIB_0__::func_27(iLocal_446, 32) && !__LIB_0__::func_27(iLocal_446, 256)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0]))
			{
				if (bLocal_199)
				{
					iVar13 = 1;
				}
				else
				{
					iVar13 = 3;
				}
				if (iVar13 == 3)
				{
					__LIB_2__::func_478(uLocal_761[0], Global_35, "RE_SB_LWL_V1_SUCK_EXIT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_761[0], Global_35, "RE_SB_PLN_V1_SUCK_EXIT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_683(&iLocal_446, 256);
			}
			if (!__LIB_0__::func_27(iLocal_446, 512))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_761[0], Local_78[19 /*2*/], Local_78[19 /*2*/].f_1, 1))
				{
					__LIB_1__::func_683(&iLocal_446, 512);
				}
			}
			iVar14 = 0;
			if (__LIB_0__::func_27(iLocal_446, 512))
			{
				if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_761[0], Local_78[19 /*2*/], Local_78[19 /*2*/].f_1, 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_761[0], Local_78[20 /*2*/], Local_78[20 /*2*/].f_1, 1)) || PED::IS_PED_RAGDOLL(uLocal_761[0]))
				{
					iVar14 = 1;
				}
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_761[0], Local_78[20 /*2*/], Local_78[20 /*2*/].f_1, 1))
			{
				ENTITY::_SET_ENTITY_ANIM_SPEED(uLocal_761[0], Local_78[20 /*2*/], Local_78[20 /*2*/].f_1, 0.5f);
			}
			if (((((__LIB_2__::func_1(uLocal_761[0], 0, 1) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], -296934116)) || (__LIB_0__::func_264(&uLocal_806) > 7f && PED::IS_PED_RAGDOLL(uLocal_761[0]))) || iVar14 == 1) && !__LIB_13__::func_183(Global_35)) && !__LIB_1__::func_358(Global_35, uLocal_761[0]))
			{
				iLocal_451 = 1;
				__LIB_1__::func_991(uLocal_761[0], 0);
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_761[0], Global_35, 1, 1))
				{
					__LIB_3__::func_465(4, 0, 0, "RE_HONOR_CRUEL_KILLING", uLocal_761[0], 0, 1065353216 /* Float: 1f */, 0);
				}
				else
				{
					__LIB_3__::func_465(2, 0, 0, "RE_HONOR_WATCHED_DEATH", uLocal_761[0], 0, 1065353216 /* Float: 1f */, 0);
				}
				__LIB_1__::func_864(uLocal_761[0], 1, 0);
				__LIB_0__::func_172(iLocal_868);
				if (bLocal_199)
				{
					iVar15 = 1;
				}
				else
				{
					iVar15 = 3;
				}
				if (iVar15 == 3)
				{
					__LIB_3__::func_666(Local_229.f_3, 2, 2, 0, 0);
				}
				else if (iVar15 == 1)
				{
					__LIB_3__::func_666(Local_229.f_3, 0, 2, 0, 0);
				}
			}
			if (!__LIB_2__::func_1(uLocal_761[0], 0, 0))
			{
				return true;
			}
			break;
	}
	func_196();
	return false;
}

void func_66()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_773[iVar0 /*12*/].f_8))
		{
			ENTITY::DETACH_ENTITY(Local_773[iVar0 /*12*/].f_8, true, true);
		}
		iVar0++;
	}
}

void func_71()
{
	switch (__LIB_1__::func_898())
	{
		case 3:
		case 4:
		case 9:
		case 10:
			if (iLocal_228 == 0)
			{
				Local_134[0 /*32*/].f_1 = joaat("RE_SNAKEBITE_MALES_01");
				Local_134[0 /*32*/] = 4;
				Local_134[0 /*32*/].f_3 = -1353111441;
				StringCopy(&(Local_134[0 /*32*/].f_23), "0935_A_M_M_Civ_White_AVOID_05", 64);
				fLocal_227 = 4f;
			}
			else if (iLocal_228 == 1)
			{
				Local_134[0 /*32*/].f_1 = joaat("RE_SNAKEBITE_MALES_01");
				Local_134[0 /*32*/] = 4;
				Local_134[0 /*32*/].f_3 = -1353111441;
				StringCopy(&(Local_134[0 /*32*/].f_23), "0935_A_M_M_Civ_White_AVOID_05", 64);
				fLocal_227 = 4f;
			}
			bLocal_199 = true;
			break;
		case 0:
		case 2:
		case 11:
			if (iLocal_228 == 0)
			{
				Local_134[0 /*32*/].f_1 = joaat("RE_SNAKEBITE_MALES_01");
				Local_134[0 /*32*/] = 4;
				Local_134[0 /*32*/].f_3 = 767108389;
				StringCopy(&(Local_134[0 /*32*/].f_23), "0889_A_M_M_Civ_Poor_Black_AVOID_04", 64);
				fLocal_227 = 2f;
			}
			else if (iLocal_228 == 1)
			{
				Local_134[0 /*32*/].f_1 = joaat("RE_SNAKEBITE_MALES_01");
				Local_134[0 /*32*/] = 4;
				Local_134[0 /*32*/].f_3 = 767108389;
				StringCopy(&(Local_134[0 /*32*/].f_23), "0889_A_M_M_Civ_Poor_Black_AVOID_04", 64);
				fLocal_227 = 4f;
			}
			bLocal_199 = false;
			break;
	}
	Local_134[1 /*32*/].f_1 = joaat("A_C_SNAKE_01");
	Local_134[1 /*32*/] = 28;
	__LIB_3__::func_303(&(Local_134[0 /*32*/].f_22));
	__LIB_3__::func_303(&(Local_134[1 /*32*/].f_22));
}

void func_72()
{
	__LIB_3__::func_445(&Local_134);
}

void func_73()
{
	Local_78[0 /*2*/] = "script_re@snake_bite@ig_bitten";
	Local_78[0 /*2*/].f_1 = "standing_idle_enter_victim";
	Local_78[1 /*2*/] = "script_re@snake_bite@ig_bitten";
	Local_78[1 /*2*/].f_1 = "standing_idle_wave_victim";
	Local_78[3 /*2*/] = "script_re@snake_bite@ig_bitten";
	Local_78[3 /*2*/].f_1 = "pain_idle_enter_victim";
	Local_78[4 /*2*/] = "script_re@snake_bite@ig_bitten";
	Local_78[4 /*2*/].f_1 = "pain_idle_base_victim";
	Local_78[5 /*2*/] = "script_re@snake_bite@ig_bitten";
	Local_78[5 /*2*/].f_1 = "callover_l_victim";
	Local_78[6 /*2*/] = "script_re@snake_bite@ig_bitten";
	Local_78[6 /*2*/].f_1 = "callover_r_victim";
	Local_78[7 /*2*/] = "script_re@snake_bite@ig_bitten";
	Local_78[7 /*2*/].f_1 = "callover_n_victim";
	Local_78[8 /*2*/] = "script_re@snake_bite@ig_bitten";
	Local_78[8 /*2*/].f_1 = "dead_victim";
	Local_78[9 /*2*/] = "script_re@snake_bite@ig_bitten";
	Local_78[9 /*2*/].f_1 = "cower_enter";
	Local_78[10 /*2*/] = "script_re@snake_bite@ig_bitten";
	Local_78[10 /*2*/].f_1 = "cower_idle";
	Local_78[11 /*2*/] = "script_re@snake_bite@ig_bitten";
	Local_78[11 /*2*/].f_1 = "cower_exit";
	Local_78[12 /*2*/] = "script_re@snake_bite@PLAYER_HANDS_MEDS";
	Local_78[12 /*2*/].f_1 = "MED_THANK_YOU_VICTIM";
	Local_78[13 /*2*/] = "script_re@snake_bite@PLAYER_SUCKS_VENOM";
	Local_78[13 /*2*/].f_1 = "SUCK_THANK_YOU_VICTIM";
	Local_78[14 /*2*/] = "script_re@snake_bite@PLAYER_SUCKS_VENOM";
	Local_78[14 /*2*/].f_1 = "PAIN_NONSYNC_IDLE_VICTIM";
	Local_78[15 /*2*/] = "script_re@snake_bite@PLAYER_SUCKS_VENOM";
	Local_78[15 /*2*/].f_1 = "PAIN_NONSYNC_IDLE_VICTIM";
	Local_78[16 /*2*/] = "script_re@snake_bite@PLAYER_HANDS_MEDS";
	Local_78[16 /*2*/].f_1 = "hand_meds_l_meds";
	Local_78[17 /*2*/] = "script_re@snake_bite@PLAYER_HANDS_MEDS";
	Local_78[17 /*2*/].f_1 = "hand_meds_n_meds";
	Local_78[18 /*2*/] = "script_re@snake_bite@PLAYER_HANDS_MEDS";
	Local_78[18 /*2*/].f_1 = "hand_meds_r_meds";
	Local_78[19 /*2*/] = "amb_misc@world_human_vomit_kneel@male_a@stand_enter";
	Local_78[19 /*2*/].f_1 = "enter_back_lf";
	Local_78[20 /*2*/] = "script_re@snake_bite@ig_bitten";
	Local_78[20 /*2*/].f_1 = "FLEE_DEAD_VICTIM";
	__LIB_3__::func_318(Local_78[0 /*2*/], &uLocal_45);
	__LIB_3__::func_318(Local_78[12 /*2*/], &uLocal_45);
	__LIB_3__::func_318(Local_78[13 /*2*/], &uLocal_45);
	__LIB_3__::func_318(Local_78[19 /*2*/], &uLocal_45);
}

void func_151()
{
	if (!__LIB_0__::func_27(iLocal_446, 1024))
	{
		if (!__LIB_2__::func_1(uLocal_761[0], 0, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_761[0], Global_35, 1, 1))
		{
			switch (iLocal_787)
			{
				case 0:
				case 2:
				case 11:
					__LIB_3__::func_666(Local_229.f_3, 2, 2, 0, 0);
					break;
				case 4:
				case 9:
					__LIB_3__::func_666(Local_229.f_3, 0, 2, 0, 0);
					break;
			}
			__LIB_1__::func_683(&iLocal_446, 1024);
		}
	}
}

void func_152()
{
	switch (iLocal_451)
	{
		case 0:
			PED::_0x8B3B71C80A29A4BB(uLocal_761[0], joaat("MOODINJUREDMILD"), 6);
			break;
		case 1:
			PED::_0x8B3B71C80A29A4BB(uLocal_761[0], joaat("MOODDEAD"), 6);
			break;
		case 2:
			PED::_0x8B3B71C80A29A4BB(uLocal_761[0], joaat("MOODTIRED"), 6);
			break;
		case 3:
			PED::_0x8B3B71C80A29A4BB(uLocal_761[0], joaat("MOODNORMAL"), 6);
			break;
	}
}

void func_153()
{
	if (iLocal_769 != 15)
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_761[0], &Local_202);
	}
	if (!__LIB_2__::func_1(uLocal_761[0], 0, 1))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], joaat("CALLOUT")))
	{
		if (!__LIB_0__::func_27(iLocal_446, 67108864))
		{
			__LIB_2__::func_315(1891783641, uLocal_761[0], 1);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], joaat("BIT")))
	{
		if (iLocal_228 == 0)
		{
			__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("BIT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
		}
		else if (iLocal_228 == 1)
		{
			__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("BIT_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
		}
		if (!MAP::DOES_BLIP_EXIST(uLocal_764[0]))
		{
			__LIB_2__::func_73(uLocal_761[0], &(uLocal_764[0]), -89429847, 1679075994, 0, "RE_INTER_STRANGER");
		}
		__LIB_0__::func_37(&uLocal_794);
		__LIB_2__::func_411(&(Local_474[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_474[1 /*17*/]), 0, 0);
		__LIB_2__::func_315(1891783641, uLocal_761[0], 1);
		iLocal_862 = 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], 1793058114))
	{
		iLocal_851 = 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], joaat("MED_OR_SUCK")))
	{
		if (iLocal_228 == 0)
		{
			__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("MED_OR_SUCK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
		}
		else if (iLocal_228 == 1)
		{
			__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("MED_OR_SUCK_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
		}
		iLocal_857 = 1;
		__LIB_1__::func_283(&uLocal_809, 0);
	}
	if (__LIB_1__::func_313(&uLocal_809, 2f))
	{
		iLocal_850 = 1;
		if (iLocal_769 != 12)
		{
			func_163();
			iLocal_844 = 1;
			iLocal_772 = 1;
			iLocal_845 = 0;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], joaat("PLEASE")))
	{
		if (iLocal_228 == 0)
		{
			__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("PLEASE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
		}
		else if (iLocal_228 == 1)
		{
			__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("HELP_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], joaat("POISON")))
	{
		if (iLocal_228 == 0)
		{
			__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("POISON"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
		}
		else if (iLocal_228 == 1)
		{
			__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("WORSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], joaat("HELP")))
	{
		if (iLocal_228 == 0)
		{
			__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("HELP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
		}
		else if (iLocal_228 == 1)
		{
			__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("HELP_AGAIN_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], joaat("SO_COLD")))
	{
		if (iLocal_228 == 0)
		{
			__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("SO_COLD"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, -417894478, 1, 0, 0);
		}
		else if (iLocal_228 == 1)
		{
			__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("SO_COLD_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, -417894478, 1, 0, 0);
		}
		__LIB_1__::func_683(&iLocal_446, 32);
		__LIB_3__::func_609(6, 1);
		iLocal_451 = 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], 1308597187) && bLocal_199 == 1)
	{
		if (iLocal_228 == 0)
		{
			if (__LIB_0__::func_665(Global_35, uLocal_761[0], 1, 1) < 15f)
			{
				__LIB_2__::func_478(Global_35, uLocal_761[0], func_34("DAMNSTRAIGHT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], -773426672) && bLocal_199 == 0)
	{
		if (iLocal_228 == 0)
		{
			if (__LIB_0__::func_665(Global_35, uLocal_761[0], 1, 1) < 15f)
			{
				if (__LIB_0__::func_113())
				{
					__LIB_2__::func_478(Global_35, uLocal_761[0], "RE_SB_PLN_V1_DAMNSTRAIGHT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(Global_35, uLocal_761[0], func_34("DAMNSTRAIGHT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], 949960576) && bLocal_199 == 0)
	{
		if (iLocal_228 == 1)
		{
			if (__LIB_0__::func_665(Global_35, uLocal_761[0], 1, 1) < 15f)
			{
				__LIB_2__::func_478(Global_35, uLocal_761[0], func_34("DAMNSTRAIGHT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], joaat("REPAY")) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], -1109726894))
	{
		if (iLocal_228 == 0)
		{
			__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("REPAY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
		}
		else if (iLocal_228 == 1)
		{
			__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("TWICE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
		}
		__LIB_1__::func_283(&uLocal_818, 0);
		switch (iLocal_787)
		{
			case 4:
			case 9:
				fLocal_881 = 1f;
				break;
			case 0:
			case 2:
			case 11:
				fLocal_881 = 1f;
				break;
		}
		__LIB_0__::func_325(&(uLocal_764[0]));
		__LIB_3__::func_459(uLocal_761[1], 1);
		__LIB_1__::func_683(&iLocal_446, 128);
		__LIB_3__::func_609(6, 3);
	}
	if (__LIB_0__::func_75(&uLocal_818))
	{
		if (!__LIB_0__::func_27(iLocal_446, 65536))
		{
			if ((__LIB_0__::func_264(&uLocal_818) > 2f && Local_229.f_46 == 0) && __LIB_2__::func_1(uLocal_761[0], 0, 1))
			{
				__LIB_3__::func_465(14, 0, 0, "RE_HONOR_SAVED_VICTIM", uLocal_761[0], 0, 1065353216 /* Float: 1f */, 0);
				__LIB_1__::func_683(&iLocal_446, 65536);
				__LIB_3__::func_615(uLocal_761[0], 4);
			}
		}
	}
	if (iLocal_859 == 0 && __LIB_0__::func_27(iLocal_446, 16))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0]))
		{
			iLocal_859 = 1;
			if (Local_229.f_46 == 0)
			{
				if (__LIB_0__::func_665(Global_35, uLocal_761[0], 1, 1) < 15f)
				{
					__LIB_2__::func_478(Global_35, uLocal_761[0], func_34("PLY_HELP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], 851636721))
	{
	}
	if ((ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], joaat("BACK_TOWN")) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], -1674863001)) && !__LIB_0__::func_27(iLocal_446, 8192))
	{
		__LIB_1__::func_683(&iLocal_446, 8192);
	}
	if ((((__LIB_0__::func_27(iLocal_446, 8192) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && Local_229.f_46 == 0) && !__LIB_0__::func_27(iLocal_446, 16))
	{
		if (iLocal_853 == 0 && iLocal_854 == 0)
		{
			if (iLocal_228 == 0)
			{
				__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("BACK_TOWN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else if (iLocal_228 == 1)
			{
				__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("BACK_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			__LIB_1__::func_683(&iLocal_446, 16);
		}
		if (__LIB_2__::func_1(uLocal_761[1], 0, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_761[1], false);
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_761[1], Global_35, 0, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
	}
	if (!__LIB_0__::func_27(iLocal_446, -2147483648) && Local_229.f_46 == 0)
	{
		if (iLocal_853 == 1)
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				__LIB_1__::func_683(&iLocal_446, -2147483648);
				if (bLocal_199 == 1)
				{
					__LIB_2__::func_478(uLocal_761[0], Global_35, "RE_SB_PLN_V1_THANKS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
				}
				else if (iLocal_228 == 0)
				{
					__LIB_2__::func_478(uLocal_761[0], Global_35, "RELIEVED_REACT", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_761[0], Global_35, "RELIEVED_REACT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
				}
			}
		}
		if (iLocal_854 == 1)
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0]) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				__LIB_1__::func_683(&iLocal_446, -2147483648);
				if (bLocal_199 == 1)
				{
					__LIB_2__::func_478(uLocal_761[0], Global_35, "WHATS_YOUR_PROBLEM", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
				}
				else if (iLocal_228 == 0)
				{
					__LIB_2__::func_478(uLocal_761[0], Global_35, "RELIEVED_REACT", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_761[0], Global_35, "DEFUSE_RESPONSE", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
				}
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_423) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_423))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
		{
			if (__LIB_2__::func_591(joaat("CONSUMABLE_MEDICINE"), 1, 0))
			{
				func_338(joaat("CONSUMABLE_MEDICINE"), 1, 0, -142743235, 0);
			}
			else if (__LIB_2__::func_591(joaat("CONSUMABLE_POTENT_MEDICINE"), 1, 0))
			{
				func_338(joaat("CONSUMABLE_POTENT_MEDICINE"), 1, 0, -142743235, 0);
			}
			else if (__LIB_2__::func_591(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 1, 0))
			{
				func_338(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 1, 0, -142743235, 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			__LIB_3__::func_459(uLocal_761[1], 1);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -89767615))
		{
			ENTITY::DETACH_ENTITY(Local_121[0 /*12*/].f_8, false, true);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_121[0 /*12*/].f_8, Global_35, 0, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 0, 2, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1665596480))
		{
			ENTITY::DETACH_ENTITY(Local_121[0 /*12*/].f_8, false, true);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_121[0 /*12*/].f_8, Global_35, 0, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 0, 2, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], -1248092990))
		{
			ENTITY::DETACH_ENTITY(Local_121[0 /*12*/].f_8, false, true);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_121[0 /*12*/].f_8, uLocal_761[0], 0, PED::GET_PED_BONE_INDEX(uLocal_761[0], 37709), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 0, 2, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], 623606756))
		{
			ENTITY::DETACH_ENTITY(Local_121[0 /*12*/].f_8, false, true);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_121[0 /*12*/].f_8, uLocal_761[0], 0, PED::GET_PED_BONE_INDEX(uLocal_761[0], 7966), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 0, 2, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
		}
		if (bLocal_199 == 1)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], -1122249922))
			{
				__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("SUCK_BASE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], 2005033117))
			{
				__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("SUCK_ENTER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
		else if (iLocal_228 == 0)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], 1600188188))
			{
				__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("SUCK_BASE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], 660448859))
			{
				__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("SUCK_ENTER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
		else
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], 156309635))
			{
				__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("SUCK_A"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], 413546285))
			{
				__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("SUCK_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], 90641453))
		{
			ENTITY::DETACH_ENTITY(Local_121[0 /*12*/].f_8, true, true);
			PHYSICS::ACTIVATE_PHYSICS(Local_121[0 /*12*/].f_8);
			iLocal_451 = 2;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], -865996517))
	{
		if (__LIB_2__::func_1(uLocal_761[0], 0, 1))
		{
		}
	}
}

void func_154()
{
	if (!__LIB_0__::func_163(uLocal_761[1], 518218985))
	{
		if (__LIB_0__::func_665(uLocal_761[1], uLocal_761[0], 1, 1) < 7f)
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_761[1], uLocal_761[0], 0, 0, 8f, -1, 0);
			TASK::_0x3923EC958249657D(uLocal_761[1], Global_35, -1082130432 /* Float: -1f */);
		}
	}
	if (!__LIB_0__::func_27(iLocal_446, 268435456))
	{
		if (__LIB_2__::func_1(uLocal_761[1], 0, 1))
		{
			if (__LIB_0__::func_665(uLocal_761[1], Global_35, 1, 1) < 5f || Local_229.f_46 == 1)
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_761[1], Global_35, 0, 0, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_1__::func_683(&iLocal_446, 268435456);
			}
		}
	}
}

void func_155()
{
	if (__LIB_1__::func_313(&uLocal_812, fLocal_880))
	{
		__LIB_2__::func_315(1891783641, uLocal_761[0], 1);
	}
}

void func_156()
{
	int iVar0;
	if (bLocal_199)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 3;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_423) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_423))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], joaat("OBJECTEXCHANGE")))
		{
			if (!__LIB_0__::func_27(iLocal_446, 2048))
			{
				if (iVar0 == 3)
				{
					__LIB_3__::func_666(Local_229.f_3, 2, 6, 0, 0);
					if (!__LIB_0__::func_181())
					{
						__LIB_3__::func_461(45, 4, 1);
					}
					else
					{
						__LIB_3__::func_461(45, 4, 2);
					}
					if (iLocal_228 == 0)
					{
						__LIB_3__::func_461(45, 6, 1);
					}
					else if (iLocal_228 == 1)
					{
						__LIB_3__::func_461(45, 6, 1);
					}
				}
				else if (iVar0 == 1)
				{
					if (!__LIB_0__::func_181())
					{
						__LIB_3__::func_461(45, 3, 1);
					}
					else
					{
						__LIB_3__::func_461(45, 3, 2);
					}
					__LIB_3__::func_666(Local_229.f_3, 0, 6, 0, 0);
					__LIB_3__::func_461(45, 5, 1);
				}
				__LIB_3__::func_459(uLocal_761[1], 1);
				__LIB_1__::func_683(&iLocal_446, 2048);
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_761[0]))
				{
					ENTITY::_0x18FF3110CF47115D(uLocal_761[0], 2, 1);
					ENTITY::_0x18FF3110CF47115D(uLocal_761[0], 0, 1);
				}
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -523549587))
		{
			__LIB_2__::func_504(uLocal_761[0], 300);
			if (!__LIB_0__::func_27(iLocal_446, 4096) && !__LIB_0__::func_27(iLocal_446, 2048))
			{
				if (iVar0 == 3)
				{
					__LIB_3__::func_666(Local_229.f_3, 2, 5, 0, 0);
					if (iLocal_228 == 0)
					{
						__LIB_3__::func_461(45, 6, 1);
					}
					else if (iLocal_228 == 1)
					{
						__LIB_3__::func_461(45, 6, 1);
					}
					if (!__LIB_0__::func_181())
					{
						__LIB_3__::func_461(45, 4, 1);
					}
					else
					{
						__LIB_3__::func_461(45, 4, 2);
					}
				}
				else if (iVar0 == 1)
				{
					__LIB_3__::func_666(Local_229.f_3, 0, 5, 0, 0);
					__LIB_3__::func_461(45, 5, 1);
					if (!__LIB_0__::func_181())
					{
						__LIB_3__::func_461(45, 3, 1);
					}
					else
					{
						__LIB_3__::func_461(45, 3, 2);
					}
				}
				if (iLocal_228 == 0)
				{
					__LIB_2__::func_478(Global_35, uLocal_761[0], func_34("PLY_BETWEEN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else if (iLocal_228 == 1)
				{
					__LIB_2__::func_478(Global_35, uLocal_761[0], func_34("PLY_LAST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_451 = 2;
				__LIB_3__::func_459(uLocal_761[1], 1);
				__LIB_1__::func_683(&iLocal_446, 4096);
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_761[0]))
				{
					ENTITY::_0x18FF3110CF47115D(uLocal_761[0], 2, 1);
					ENTITY::_0x18FF3110CF47115D(uLocal_761[0], 0, 1);
				}
			}
		}
	}
}

void func_157()
{
	if (Local_229.f_46 == 1 || Local_229.f_44 == 1)
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_866))
	{
		if ((__LIB_0__::func_27(iLocal_446, 32768) && !__LIB_1__::func_205(uLocal_761[0], iLocal_866, 1, 0)) && iLocal_861 == 0)
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_761[0], Global_35, -1, -1f, -1f, -1f);
			iLocal_861 = 1;
		}
	}
}

void func_160()
{
	iLocal_845 = 1;
	if (iLocal_858 == 0)
	{
		__LIB_3__::func_157(&(Local_474[0 /*17*/]), "RE_INTER_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_3__::func_157(&(Local_474[1 /*17*/]), "RE_INTER_ANTAGONIZE", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		iLocal_858 = 1;
	}
	__LIB_2__::func_360(&(Local_474[0 /*17*/]), "RE_INTER_POS");
	__LIB_2__::func_360(&(Local_474[1 /*17*/]), "RE_INTER_ANTAGONIZE");
	__LIB_4__::func_406(&(Local_474[0 /*17*/]), 0);
	__LIB_4__::func_406(&(Local_474[1 /*17*/]), 0);
	__LIB_2__::func_411(&(Local_474[0 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_474[1 /*17*/]), 1, 0);
}

void func_161()
{
	if (!__LIB_0__::func_27(iLocal_446, 32768))
	{
		if (__LIB_2__::func_118(uLocal_761[0], 1, 1) < 80f)
		{
			if (__LIB_2__::func_1(uLocal_761[0], 0, 1))
			{
				__LIB_2__::func_122(uLocal_761[0], "SCREAM_TERROR", 1744022339, Global_35, 1, 0, 0, 1);
			}
			__LIB_2__::func_315(1515458263, uLocal_761[0], 1);
			func_344();
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_761[0], vLocal_544, 1f, -1, 0.9f, 5, 40000f);
			__LIB_1__::func_283(&uLocal_827, 0);
			__LIB_1__::func_683(&iLocal_446, 32768);
		}
	}
}

void func_163()
{
	if (iLocal_850 == 0)
	{
		return;
	}
	if (__LIB_0__::func_665(Global_35, uLocal_761[0], 1, 1) > 7f)
	{
		__LIB_2__::func_411(&(Local_474[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_474[1 /*17*/]), 0, 0);
		iLocal_860 = 0;
	}
	else
	{
		iLocal_860 = 1;
	}
	__LIB_2__::func_360(&(Local_474[0 /*17*/]), "SNAKE_SUCK");
	__LIB_2__::func_360(&(Local_474[1 /*17*/]), "SNAKE_MED");
	func_345();
	__LIB_2__::func_451(&(Local_452[0 /*21*/]), 0);
}

int func_164()
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	float fVar8;
	var uVar9;
	vector3 vVar10;
	int iVar13;
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_423, "COWER_BOOL", false, false);
	if (ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "thank_you_meds", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "thank_you_suck", 1))
	{
		if (!__LIB_0__::func_27(iLocal_446, 8))
		{
			__LIB_1__::func_683(&iLocal_446, 8);
		}
	}
	if (__LIB_0__::func_27(iLocal_446, 8) || !__LIB_2__::func_1(uLocal_761[0], 0, 1))
	{
		return 0;
	}
	if (iLocal_846 == 1)
	{
		return 0;
	}
	fVar3 = ENTITY::GET_ENTITY_HEADING(uLocal_761[0]);
	switch (iLocal_447)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_761[0], vLocal_544, 2f, 2f, 2f, false, true, 0))
			{
				if (!__LIB_0__::func_163(uLocal_761[0], -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_761[0], Global_35, -1, -1f, -1f, -1f);
				}
			}
			vVar0 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
			if (((__LIB_0__::func_94(uLocal_761[0], vVar0, 1) < 25f && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_423)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_423, false)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0]))
			{
				__LIB_1__::func_283(&uLocal_797, 0);
				__LIB_1__::func_283(&uLocal_794, 0);
				func_347();
				__LIB_1__::func_683(&iLocal_446, 67108864);
				func_348();
				iLocal_447++;
			}
			else if (__LIB_0__::func_27(iLocal_446, 32768) && __LIB_0__::func_264(&uLocal_827) > 2f)
			{
				if (!__LIB_0__::func_27(iLocal_446, 1073741824 /* Float: 2f */))
				{
					__LIB_2__::func_122(uLocal_761[0], "PANIC_HELP", 1744022339, Global_35, 1, &(Local_134[0 /*32*/].f_23), 2, 1);
					__LIB_2__::func_315(1891783641, uLocal_761[0], 1);
					__LIB_1__::func_683(&iLocal_446, 1073741824 /* Float: 2f */);
					__LIB_1__::func_148(&uLocal_827);
				}
				else
				{
					__LIB_2__::func_122(uLocal_761[0], "PANIC_HELP", 1744022339, Global_35, 1, &(Local_134[0 /*32*/].f_23), 1, 1);
					__LIB_2__::func_315(1891783641, uLocal_761[0], 1);
					__LIB_0__::func_37(&uLocal_827);
				}
			}
			break;
		case 1:
			func_349();
			if (iLocal_852 == 0)
			{
				fVar4 = __LIB_0__::func_665(Global_35, uLocal_761[0], 1, 1);
				if (fVar4 < 15f)
				{
					iLocal_852 = 1;
				}
			}
			if (__LIB_0__::func_264(&uLocal_797) >= fLocal_227 && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0]))
			{
				__LIB_0__::func_37(&uLocal_797);
				if (iLocal_852 == 0)
				{
					TASK::TASK_PLAY_ANIM(uLocal_761[0], Local_78[1 /*2*/], Local_78[1 /*2*/].f_1, 2f, -4f, -1, 67109392, 0f, false, 1245184, false, "UpperbodyFixup_filter", false);
				}
			}
			if (((ENTITY::IS_ENTITY_AT_COORD(uLocal_761[0], vLocal_544, 2f, 2f, 2f, false, true, 0) || (iLocal_852 == 1 && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0]))) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_761[0], Local_78[1 /*2*/], Local_78[1 /*2*/].f_1, 1)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if (__LIB_0__::func_75(&uLocal_797))
				{
					__LIB_0__::func_37(&uLocal_797);
				}
				if (!__LIB_0__::func_75(&uLocal_824))
				{
					TASK::TASK_STAND_STILL(uLocal_761[0], 10000);
					__LIB_1__::func_283(&uLocal_824, 0);
				}
				if (__LIB_1__::func_313(&uLocal_824, 2f))
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(uLocal_761[0], true, false) };
					fVar8 = ENTITY::GET_ENTITY_HEADING(uLocal_761[0]);
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar5, &uVar9, true))
					{
						vVar5.f_2 = uVar9;
					}
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_423, vVar5, 0f, 0f, fVar8, 2);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_423, "victim", uLocal_761[0], 0);
					iLocal_868 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), vVar5, 0f, 0f, 0f, 1f, 1f, 5f);
					ANIMSCENE::START_ANIM_SCENE(Local_423);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_423, "stand_bool", true, false);
					iLocal_449 = 1;
					if (iLocal_876 == 0 && ENTITY::IS_ENTITY_AT_COORD(uLocal_761[0], vLocal_544, 2f, 2f, 2f, false, true, 0))
					{
						iLocal_876 = 1;
					}
					Local_229.f_44 = 1;
					if (!__LIB_0__::func_181())
					{
						if (bLocal_199 == 1)
						{
							__LIB_3__::func_461(45, 5, 1);
						}
						else
						{
							__LIB_3__::func_461(45, 6, 1);
						}
					}
					if (!MAP::DOES_BLIP_EXIST(uLocal_764[0]))
					{
						__LIB_2__::func_73(uLocal_761[0], &(uLocal_764[0]), -89429847, 1679075994, 0, "RE_INTER_STRANGER");
					}
					iLocal_447++;
				}
			}
			else if (__LIB_0__::func_75(&uLocal_821))
			{
			}
			break;
		case 2:
			func_349();
			if (!__LIB_0__::func_27(iLocal_446, 1))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_761[0], 1631365526))
				{
					__LIB_1__::func_683(&iLocal_446, 1);
					vVar10 = { ENTITY::GET_ENTITY_COORDS(uLocal_761[0], true, false) };
					if (!__LIB_0__::func_86(vVar10))
					{
						VOLUME::_SET_VOLUME_COORDS(iLocal_868, vVar10);
					}
					iLocal_447++;
				}
			}
			break;
		case 3:
			func_349();
			vVar0 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "pain_idle", 1))
			{
				if (!__LIB_0__::func_75(&uLocal_800))
				{
					__LIB_1__::func_283(&uLocal_800, 0);
				}
				if ((((__LIB_0__::func_264(&uLocal_800) > 0.5f && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && (iLocal_876 >= 3 || ENTITY::IS_ENTITY_AT_COORD(uLocal_761[0], vLocal_544, 2f, 2f, 2f, false, true, 0))) || iLocal_850 == 1)
				{
					__LIB_0__::func_37(&uLocal_800);
					iLocal_447++;
					fLocal_879 = 0.25f;
				}
			}
			break;
		case 4:
			iLocal_447++;
			fLocal_879 = 0.25f;
			break;
		case 5:
			if (iLocal_856 == 1)
			{
				if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "pain_idle", 1) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (!__LIB_0__::func_75(&uLocal_800))
					{
						__LIB_1__::func_283(&uLocal_800, 0);
					}
					if ((!__LIB_0__::func_27(iLocal_446, 8) && __LIB_0__::func_264(&uLocal_800) > fLocal_879) && func_172("PB_NEED_MED_SUCK"))
					{
						__LIB_0__::func_37(&uLocal_800);
						iLocal_447++;
						fLocal_879 = 0.25f;
					}
				}
			}
			else
			{
				iLocal_447++;
			}
			break;
		case 6:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "pain_idle", 1) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0]))
			{
				if (!__LIB_0__::func_75(&uLocal_800))
				{
					__LIB_1__::func_283(&uLocal_800, 0);
				}
				if ((!__LIB_0__::func_27(iLocal_446, 8) && __LIB_0__::func_264(&uLocal_800) > fLocal_879) && func_172("PB_DONT_WANNA_DIE"))
				{
					__LIB_0__::func_37(&uLocal_800);
					iLocal_447++;
					fLocal_879 = 0.25f;
				}
			}
			break;
		case 7:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "pain_idle", 1) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0]))
			{
				if (!__LIB_0__::func_75(&uLocal_800))
				{
					__LIB_1__::func_283(&uLocal_800, 0);
				}
				if ((!__LIB_0__::func_27(iLocal_446, 8) && __LIB_0__::func_264(&uLocal_800) > fLocal_879) && func_172("PB_POISON"))
				{
					__LIB_0__::func_37(&uLocal_800);
					iLocal_447++;
					fLocal_879 = 0.25f;
				}
			}
			break;
		case 8:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "pain_idle", 1) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0]))
			{
				if (!__LIB_0__::func_75(&uLocal_800))
				{
					__LIB_1__::func_283(&uLocal_800, 0);
				}
				if ((!__LIB_0__::func_27(iLocal_446, 8) && __LIB_0__::func_264(&uLocal_800) > fLocal_879) && func_172("PB_LOVE_OF_GOD"))
				{
					__LIB_0__::func_37(&uLocal_800);
					iLocal_447++;
					fLocal_879 = 0.25f;
				}
			}
			break;
		case 9:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "pain_idle", 1))
			{
				if (!__LIB_0__::func_75(&uLocal_800))
				{
					__LIB_1__::func_283(&uLocal_800, 0);
				}
				if ((!__LIB_0__::func_27(iLocal_446, 8) && __LIB_0__::func_264(&uLocal_800) > fLocal_879) && func_172("PB_FEEL_COLD"))
				{
					__LIB_1__::func_683(&iLocal_446, 2097152);
					__LIB_0__::func_37(&uLocal_800);
					iLocal_447++;
					fLocal_879 = 0.25f;
					__LIB_2__::func_411(&(Local_474[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_474[1 /*17*/]), 0, 0);
					__LIB_2__::func_344(&(uLocal_761[0]));
					__LIB_2__::func_451(&(Local_452[0 /*21*/]), 0);
					PED::SET_PED_CONFIG_FLAG(uLocal_761[0], 301, true);
					__LIB_2__::func_105(&(Local_229.f_5), 0);
					__LIB_2__::func_104(&(Local_229.f_5), 0);
					__LIB_2__::func_51(&(Local_229.f_5), 0);
				}
			}
			break;
		case 10:
			if (MAP::DOES_BLIP_EXIST(uLocal_764[0]))
			{
				__LIB_0__::func_325(&(uLocal_764[0]));
			}
			iLocal_447++;
			break;
		case 11:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_423, "Death", 1))
			{
				if (__LIB_0__::func_665(Global_35, uLocal_761[0], 1, 1) < 45f || (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_761[0]) && __LIB_0__::func_665(Global_35, uLocal_761[0], 1, 1) < 75f))
				{
					__LIB_3__::func_465(2, 0, 0, "RE_HONOR_IGNORED_VICTIM", uLocal_761[0], 0, 1065353216 /* Float: 1f */, 0);
				}
				if (bLocal_199)
				{
					iVar13 = 1;
				}
				else
				{
					iVar13 = 3;
				}
				if (iVar13 == 3)
				{
					__LIB_3__::func_666(Local_229.f_3, 2, 2, 0, 0);
				}
				else if (iVar13 == 1)
				{
					__LIB_3__::func_666(Local_229.f_3, 0, 2, 0, 0);
				}
				__LIB_3__::func_459(uLocal_761[1], 1);
				iLocal_447++;
			}
			break;
		case 12:
			break;
	}
	return 0;
}

void func_165()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar0 = PED::_GET_LAST_MOUNT(Global_35);
		if (__LIB_0__::func_665(uLocal_761[0], iVar0, 1, 1) < 6f)
		{
			if (!__LIB_0__::func_27(iLocal_446, 2))
			{
				__LIB_1__::func_683(&iLocal_446, 2);
				vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_761[0], 7f, 0f, 0f) };
				vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_761[0], -7f, 0f, 0f) };
				vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_761[0], 0f, 7f, 0f) };
				vVar10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_761[0], 0f, -7f, 0f) };
				vVar13 = { vVar1 };
				fVar16 = __LIB_0__::func_94(iVar0, vVar1, 1);
				fVar17 = __LIB_0__::func_94(iVar0, vVar4, 1);
				fVar18 = __LIB_0__::func_94(iVar0, vVar7, 1);
				fVar19 = __LIB_0__::func_94(iVar0, vVar10, 1);
				fVar20 = fVar16;
				if (fVar17 < fVar20)
				{
					vVar13 = { vVar4 };
					fVar20 = fVar17;
				}
				if (fVar18 < fVar20)
				{
					vVar13 = { vVar7 };
					fVar20 = fVar18;
				}
				if (fVar19 < fVar20)
				{
					vVar13 = { vVar10 };
					fVar20 = fVar19;
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar13, 1f, -1, 1f, 0, 40000f);
			}
		}
		else if (__LIB_0__::func_665(uLocal_761[0], iVar0, 1, 1) > 5.5f && !__LIB_0__::func_27(iLocal_446, 4))
		{
			__LIB_1__::func_683(&iLocal_446, 4);
		}
	}
}

bool func_166()
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_446, 524288))
	{
		if (!__LIB_0__::func_27(iLocal_446, 131072))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_423, "PB_SUCK");
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_423, "player", &Local_434, true, "PB_SUCK", 2))
			{
				__LIB_1__::func_683(&iLocal_446, 131072);
				func_351(Local_434, Local_434.f_3.f_2);
				sLocal_448 = "PB_SUCK";
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (__LIB_0__::func_27(iLocal_446, 1048576))
	{
		if (!__LIB_0__::func_27(iLocal_446, 262144))
		{
			iVar0 = __LIB_3__::func_547(uLocal_761[0], Global_35, 1060437492 /* Float: 0.707f */);
			if (iVar0 == 0)
			{
				sLocal_448 = "PB_GIVE_MEDS_N";
				iLocal_450 = 17;
			}
			else if (iVar0 == 2)
			{
				sLocal_448 = "PB_GIVE_MEDS_R";
				iLocal_450 = 18;
			}
			else if (iVar0 == 3 || iVar0 == 1)
			{
				sLocal_448 = "PB_GIVE_MEDS_L";
				iLocal_450 = 16;
			}
			else
			{
				return false;
			}
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_423, sLocal_448);
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_423, "player", &Local_434, true, sLocal_448, 2))
			{
				__LIB_1__::func_683(&iLocal_446, 262144);
				func_351(Local_434, Local_434.f_3.f_2);
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_168()
{
	int iVar0;
	if (!__LIB_1__::func_516())
	{
		return false;
	}
	if (!__LIB_1__::func_610(&iVar0))
	{
		return false;
	}
	if (!__LIB_4__::func_210(iVar0))
	{
		return false;
	}
	return __LIB_3__::func_630(iVar0, 0);
}

bool func_169(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !__LIB_0__::func_27(uParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (PED::IS_PED_A_PLAYER(uParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, uParam0->f_3, false);
					if (__LIB_0__::func_27(uParam0->f_23, 2048))
					{
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				if (!__LIB_0__::func_27(uParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1);
				}
				if (!__LIB_0__::func_27(uParam0->f_23, 2))
				{
					uParam0->f_2 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && __LIB_0__::func_71(uParam0->f_1))
					{
						__LIB_3__::func_622(uParam0->f_1);
						iVar0 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5f, -1, false);
						iVar3 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_1, 0, iVar4);
					}
					else
					{
						__LIB_1__::func_336(&(uParam0->f_23), 2);
					}
				}
				if (__LIB_0__::func_86(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				__LIB_0__::func_19(uParam0, 1, iParam1);
			}
			else
			{
				__LIB_0__::func_19(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (__LIB_3__::func_663(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!__LIB_3__::func_670(uParam0, iParam1))
				{
					func_168();
				}
				__LIB_0__::func_19(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (__LIB_3__::func_670(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!__LIB_0__::func_27(uParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, __LIB_0__::func_27(uParam0->f_23, 512), 0, 0);
				}
				__LIB_0__::func_19(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (__LIB_3__::func_664(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_1__::func_336(&(uParam0->f_23), 256);
				}
				if (__LIB_0__::func_27(uParam0->f_23, 4096) && !PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_1__::func_336(&(uParam0->f_23), 256);
					iVar6 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (__LIB_0__::func_665(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = __LIB_3__::func_661(iVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_1, iVar5);
					}
				}
				else if (!__LIB_0__::func_27(uParam0->f_23, 256))
				{
					iVar5 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(uParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				__LIB_0__::func_19(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (__LIB_3__::func_665(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (__LIB_0__::func_27(uParam0->f_23, 8192))
				{
					if (__LIB_0__::func_27(uParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, 0, iVar7, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!__LIB_0__::func_27(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
						if (__LIB_0__::func_27(uParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (__LIB_0__::func_27(uParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (__LIB_0__::func_27(uParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_19, 0);
					}
					__LIB_1__::func_474(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				__LIB_0__::func_19(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (__LIB_0__::func_27(uParam0->f_23, 8192))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!__LIB_0__::func_27(uParam0->f_23, 1))
			{
				uParam0->f_19 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
			}
			if (!__LIB_0__::func_27(uParam0->f_23, 128) && __LIB_1__::func_313(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!__LIB_0__::func_27(uParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((__LIB_0__::func_86(uParam0->f_11) || !__LIB_0__::func_163(uParam0->f_1, 242628503)) || TASK::GET_SEQUENCE_PROGRESS(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (__LIB_3__::func_625(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, __LIB_0__::func_27(uParam0->f_23, 8)) && (!__LIB_0__::func_27(uParam0->f_23, 64) || MISC::ABSF(__LIB_3__::func_592(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (__LIB_0__::func_27(uParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_1, uParam0->f_8, 0);
				}
				__LIB_0__::func_37(&(uParam0->f_5));
				__LIB_0__::func_19(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_172(char* sParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_423))
	{
		if (ANIMSCENE::_0xA9016536015DE29D(Local_423, sParam0))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_423, sParam0))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_423, sParam0, true);
				return true;
			}
			else
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_423, sParam0);
			}
		}
	}
	return false;
}

int func_179(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_376(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_3__::func_156(iParam1, uParam3, uParam0);
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

void func_181()
{
	if (!__LIB_0__::func_27(iLocal_446, 4194304))
	{
		__LIB_2__::func_360(&(Local_474[0 /*17*/]), "RE_INTER_DEFUSE");
		__LIB_2__::func_360(&(Local_474[1 /*17*/]), "RE_INTER_ANTAGONIZE");
		__LIB_2__::func_411(&(Local_474[0 /*17*/]), 1, 0);
		__LIB_2__::func_411(&(Local_474[1 /*17*/]), 1, 0);
	}
	else
	{
		__LIB_2__::func_411(&(Local_474[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_474[1 /*17*/]), 0, 0);
	}
	__LIB_4__::func_406(&(Local_474[0 /*17*/]), 0);
	__LIB_4__::func_406(&(Local_474[1 /*17*/]), 0);
}

void func_187()
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_761[0], false);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_875);
	iLocal_772 = 3;
	__LIB_2__::func_411(&(Local_474[0 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_474[1 /*17*/]), 1, 0);
}

void func_188()
{
	if (__LIB_0__::func_665(uLocal_761[0], Global_35, 1, 1) > 80f && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_761[0]))
	{
		PED::_0x39A2FC5AF55A52B1(uLocal_761[0], -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_761[0]));
	}
}

void func_196()
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if ((iLocal_845 == 0 && iLocal_844 == 0) || iLocal_855 == 0)
	{
		return;
	}
	if (__LIB_0__::func_264(&uLocal_836) > 0f)
	{
		if (!__LIB_1__::func_750(&uVar0))
		{
			__LIB_0__::func_37(&uLocal_836);
			__LIB_2__::func_478(Global_35, uLocal_761[0], func_34("PLY_START_SUCK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			iLocal_863 = 1;
			__LIB_1__::func_283(&uLocal_839, 0);
		}
	}
	iVar1 = -1;
	switch (iLocal_772)
	{
		case 0:
			iVar1 = func_179(&(uLocal_761[0]), &(Local_452[0 /*21*/]), 30f, &Local_474, &(Local_229.f_192), 0f, 1, 0, 0, 328, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			iVar2 = 0;
			if (iVar1 == 0)
			{
				if (iLocal_851 == 0)
				{
					__LIB_2__::func_478(Global_35, uLocal_761[0], func_34("INITIAL_ILO_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_852 = 1;
					iVar2 = 1;
				}
			}
			else if (iVar1 == 1)
			{
				if (iLocal_851 == 0)
				{
					__LIB_2__::func_478(Global_35, uLocal_761[0], func_34("INITIAL_ILO_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_852 = 1;
					iVar2 = 1;
				}
			}
			if (iVar2 == 1)
			{
				__LIB_2__::func_411(&(Local_474[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_474[1 /*17*/]), 0, 0);
			}
			break;
		case 1:
			if (iLocal_843 == 0 && !__LIB_0__::func_75(&uLocal_833))
			{
				if (__LIB_0__::func_665(Global_35, uLocal_761[0], 1, 1) > 7f)
				{
					if (iLocal_860 == 1)
					{
						iLocal_860 = 0;
						__LIB_2__::func_411(&(Local_474[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_474[1 /*17*/]), 0, 0);
					}
				}
				else if (iLocal_860 == 0)
				{
					iLocal_860 = 1;
					__LIB_2__::func_360(&(Local_474[0 /*17*/]), "SNAKE_SUCK");
					__LIB_2__::func_360(&(Local_474[1 /*17*/]), "SNAKE_MED");
					__LIB_3__::func_621(&(Local_474[0 /*17*/]), 1, 0);
					__LIB_3__::func_621(&(Local_474[1 /*17*/]), 1, 0);
					func_345();
				}
			}
			iVar1 = func_179(&(uLocal_761[0]), &(Local_452[0 /*21*/]), 30f, &Local_474, &(Local_229.f_192), 0f, 1, 0, 0, 472, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (iVar1 == 0)
			{
				__LIB_4__::func_63(uLocal_761[0], 75);
				__LIB_2__::func_461(0);
				if (__LIB_1__::func_750(&uVar3))
				{
					if (func_168())
					{
					}
				}
				__LIB_1__::func_283(&uLocal_836, 0);
				iLocal_843 = 1;
				__LIB_1__::func_683(&iLocal_446, 524288);
				__LIB_1__::func_683(&iLocal_446, 8);
			}
			else if (iVar1 == 1)
			{
				__LIB_4__::func_63(uLocal_761[0], 75);
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(Global_35, uLocal_761[0], func_34("PLY_MEDICINE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				iLocal_843 = 1;
				__LIB_1__::func_683(&iLocal_446, 1048576);
				__LIB_1__::func_683(&iLocal_446, 8);
				iLocal_863 = 1;
			}
			if (iLocal_843 == 1)
			{
				if (PATHFIND::_0xDE0EA444735C1368(iLocal_867))
				{
					PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_867);
				}
				__LIB_0__::func_172(iLocal_867);
				__LIB_0__::func_172(iLocal_868);
				__LIB_2__::func_411(&(Local_474[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_474[1 /*17*/]), 0, 0);
				__LIB_2__::func_451(&(Local_452[0 /*21*/]), 0);
				iLocal_772 = 3;
			}
			break;
		case 2:
			iVar1 = func_179(&(uLocal_761[0]), &(Local_452[0 /*21*/]), 15f, &Local_474, &(Local_229.f_192), 0f, 1, 0, 0, 344, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (iVar1 == 0)
			{
				__LIB_2__::func_478(Global_35, uLocal_761[0], func_34("ILO_COWER_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				bLocal_847 = true;
				__LIB_1__::func_683(&iLocal_446, 16777216);
				WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
			}
			else if (iVar1 == 1)
			{
				__LIB_2__::func_478(Global_35, uLocal_761[0], func_34("ILO_COWER_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				bLocal_847 = true;
				iLocal_848 = 1;
				__LIB_1__::func_148(&uLocal_803);
			}
			if (bLocal_847 == 1)
			{
				__LIB_2__::func_411(&(Local_474[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_474[1 /*17*/]), 0, 0);
			}
			break;
		case 3:
			iVar1 = func_179(&(uLocal_761[0]), &(Local_452[0 /*21*/]), 15f, &Local_474, &(Local_229.f_192), 0f, 1, 0, 0, 328, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (iVar1 == 0)
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(Global_35, uLocal_761[0], func_34("ILO_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				iLocal_853 = 1;
				__LIB_2__::func_411(&(Local_474[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_474[1 /*17*/]), 0, 0);
			}
			else if (iVar1 == 1)
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_478(Global_35, uLocal_761[0], func_34("ILO_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				iLocal_854 = 1;
				__LIB_2__::func_411(&(Local_474[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_474[1 /*17*/]), 0, 0);
			}
			break;
	}
}

int func_338(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = __LIB_2__::func_465(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_2__::func_591(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_2__::func_528(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_2__::func_528(iParam0, 0, 0) - iParam1) < 0)
		{
			func_338(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!__LIB_2__::func_481(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_4__::func_105(iParam0, iParam1);
	return 1;
}

void func_344()
{
	switch (iLocal_787)
	{
		case 9:
			switch (Local_229.f_51.f_4)
			{
				case 0:
					vLocal_544 = { -270.9999f, -256.0141f, 91.28944f };
					break;
				case 1:
					vLocal_544 = { 312.2753f, 726.3979f, 147.8297f };
					break;
				case 2:
					vLocal_544 = { 557.7414f, 895.7377f, 145.9982f };
					break;
				case 3:
					vLocal_544 = { -384.3376f, 147.3829f, 41.5964f };
					break;
				case 4:
					vLocal_544 = { 467.1197f, 179.4214f, 112.5273f };
					break;
				case 5:
					vLocal_544 = { 1107.911f, -46.8371f, 85.1289f };
					break;
				case 6:
					vLocal_544 = { 3.5189f, -455.3443f, 73.2753f };
					break;
				default:
					vLocal_544 = { Local_229.f_51 };
					break;
			}
			break;
		case 11:
			switch (Local_229.f_51.f_4)
			{
				case 0:
					vLocal_544 = { 1417.5f, -340.6807f, 86.854f };
					break;
				case 1:
					vLocal_544 = { 1077.256f, -419.2272f, 89.9737f };
					break;
				case 2:
					vLocal_544 = { 1644.445f, -228.8705f, 75.7174f };
					break;
				case 3:
					vLocal_544 = { 1677.336f, -1736.238f, 53.0783f };
					break;
				case 4:
					vLocal_544 = { 1212.78f, -2144.13f, 53.5087f };
					break;
				default:
					vLocal_544 = { Local_229.f_51 };
					break;
			}
			break;
		case 0:
			switch (Local_229.f_51.f_4)
			{
				case 0:
					vLocal_544 = { 1670.216f, -1121.628f, 40.59002f };
					break;
				case 1:
					vLocal_544 = { 1656.779f, -771.4388f, 41.0013f };
					break;
				case 2:
					vLocal_544 = { 2042.433f, -403.7518f, 41.6769f };
					break;
				default:
					vLocal_544 = { Local_229.f_51 };
					break;
			}
			break;
	}
}

void func_345()
{
	if (iLocal_860 == 0)
	{
		return;
	}
	__LIB_2__::func_411(&(Local_474[0 /*17*/]), 1, 0);
	if ((__LIB_2__::func_591(joaat("CONSUMABLE_MEDICINE"), 1, 0) || __LIB_2__::func_591(joaat("CONSUMABLE_POTENT_MEDICINE"), 1, 0)) || __LIB_2__::func_591(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 1, 0))
	{
		__LIB_2__::func_411(&(Local_474[1 /*17*/]), 1, 0);
	}
	else
	{
		__LIB_2__::func_411(&(Local_474[1 /*17*/]), 0, 0);
	}
	__LIB_4__::func_406(&(Local_474[0 /*17*/]), 1);
	__LIB_4__::func_406(&(Local_474[1 /*17*/]), 1);
}

void func_347()
{
	switch (iLocal_787)
	{
		case 4:
		case 9:
			if (iLocal_228 == 0)
			{
				__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("CALLOUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				fLocal_880 = 4f;
				__LIB_2__::func_315(1891783641, uLocal_761[0], 1);
			}
			break;
		case 0:
		case 2:
		case 11:
			if (iLocal_228 == 0)
			{
				__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("CALLOUT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				fLocal_880 = 2f;
			}
			else if (iLocal_228 == 1)
			{
				__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("CALLOUT_AGAIN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				fLocal_880 = 4f;
				__LIB_2__::func_315(1891783641, uLocal_761[0], 1);
			}
			break;
	}
	__LIB_1__::func_283(&uLocal_812, 0);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_423, "stand_bool", false, false);
}

void func_348()
{
	int iVar0;
	if (iLocal_200 > 0)
	{
		iLocal_867 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("NavBlocker");
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_867))
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 <= (iLocal_200 - 1))
			{
				VOLUME::_0xBCE668AAF83608BE(iLocal_867, vLocal_14[iVar0 /*3*/], 0f, 0f, 0f, 1.5f, 1.5f, 5f);
				iVar0++;
			}
			PATHFIND::_0x19C7567D2F2287D6(iLocal_867, 7);
		}
	}
}

void func_349()
{
	if ((((((AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_761[0]) || iLocal_851 == 1) || iLocal_862 == 1) || __LIB_0__::func_75(&uLocal_824)) || __LIB_0__::func_75(&uLocal_797)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_761[0], Local_78[1 /*2*/], Local_78[1 /*2*/].f_1, 1)) || ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_423, false))
	{
		return;
	}
	if (__LIB_1__::func_313(&uLocal_821, fLocal_882))
	{
	}
	switch (iLocal_876)
	{
		case 0:
			if (__LIB_0__::func_264(&uLocal_794) > 5f)
			{
				switch (iLocal_787)
				{
					case 4:
					case 9:
						if (iLocal_228 == 0)
						{
							__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("CALLOUT_POSSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							fLocal_880 = 4f;
							fLocal_882 = 4f;
						}
						break;
					case 0:
					case 2:
					case 11:
						if (iLocal_228 == 0)
						{
							__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("CALLOUT_POSSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							fLocal_880 = 3f;
						}
						else if (iLocal_228 == 1)
						{
							__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("CALLOUT_POSSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							fLocal_880 = 3f;
						}
						fLocal_882 = 2f;
						break;
				}
				__LIB_1__::func_148(&uLocal_794);
				__LIB_1__::func_283(&uLocal_821, 0);
				__LIB_1__::func_283(&uLocal_812, 0);
				iLocal_876++;
			}
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_794) > 6f)
			{
				switch (iLocal_787)
				{
					case 4:
					case 9:
						if (iLocal_228 == 0)
						{
							__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("CALLOUT2"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							fLocal_880 = 0.5f;
						}
						break;
					case 0:
					case 2:
					case 11:
						if (iLocal_228 == 0)
						{
							__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("CALLOUT2"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							fLocal_880 = 2f;
						}
						else if (iLocal_228 == 1)
						{
							__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("CALLOUT_AGAIN2"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							fLocal_880 = 0.5f;
						}
						break;
				}
				__LIB_1__::func_148(&uLocal_794);
				__LIB_1__::func_283(&uLocal_812, 0);
				iLocal_876++;
			}
			break;
		case 2:
			if (__LIB_0__::func_264(&uLocal_794) > 9f)
			{
				switch (iLocal_787)
				{
					case 4:
					case 9:
						if (iLocal_228 == 0)
						{
							__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("CALLOUT_POSSE2"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							fLocal_880 = 0.5f;
						}
						break;
					case 0:
					case 2:
					case 11:
						if (iLocal_228 == 0)
						{
							__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("CALLOUT_POSSE2"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							fLocal_880 = 0.5f;
						}
						else if (iLocal_228 == 1)
						{
							__LIB_2__::func_478(uLocal_761[0], Global_35, func_34("CALLOUT_POSSE_AGAIN2"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							fLocal_880 = 0.5f;
						}
						break;
				}
				__LIB_1__::func_148(&uLocal_794);
				__LIB_1__::func_283(&uLocal_812, 0);
				iLocal_876++;
			}
			break;
		case 3:
			break;
	}
}

void func_351(vector3 vParam0, var uParam3)
{
	vParam0 = { vParam0.x, vParam0.y, (vParam0.z - 1f) };
	__LIB_3__::func_623(&Local_509);
	Local_509.f_1 = Global_35;
	Local_509.f_8 = { vParam0 };
	Local_509.f_19 = uParam3;
	Local_509.f_18 = 0f;
	__LIB_1__::func_336(&(Local_509.f_23), 1024);
	__LIB_1__::func_336(&(Local_509.f_23), 1);
	Local_509.f_4 = 1;
	Local_509.f_14 = { Global_36 };
	func_169(&Local_509, 106);
	iLocal_849 = 1;
}

int func_376(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_376(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

