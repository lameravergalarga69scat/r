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
	char[] cLocal_14[8] = 0;
	int iLocal_15 = 0;
	char* sLocal_16 = NULL;
	int iLocal_17[4] = { 0, 0, 0, 0 };
	int iLocal_22 = 0;
	bool bLocal_23 = false;
	int iLocal_24 = 0;
	vector3 vLocal_25 = { 0f, 0f, 0f };
	vector3 vLocal_28 = { 0f, 0f, 0f };
	vector3 vLocal_31 = { 0f, 0f, 0f };
	vector3 vLocal_34 = { 0f, 0f, 0f };
	float fLocal_37 = 0f;
	struct<193> Local_38 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_231 = 0;
	struct<8> Local_232 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<22> Local_240 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_262 = 3;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	struct<17> Local_270 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 1;
	var uLocal_300 = 0;
	struct<21> Local_301[2];
	struct<17> Local_344[3];
	int iLocal_396 = 0;
	char* sLocal_397[47] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_445 = NULL;
	char* sLocal_446[26] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_473 = 0;
	var uLocal_474 = 0;
	int iLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 1112014848;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
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
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 9;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 1;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 24;
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
	var uLocal_660 = -1082130432;
	var uLocal_661 = -1082130432;
	var uLocal_662 = 1103626240;
	var uLocal_663 = -1067450368;
	var uLocal_664 = 1097859072;
	var uLocal_665 = 1073741824;
	var uLocal_666 = 4000;
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
	var uLocal_688 = 1073741824;
	int iLocal_689 = 0;
	var uLocal_690 = 0;
	int iLocal_691 = 0;
	int iLocal_692 = 0;
	int iLocal_693 = 0;
	struct<32> Local_694[2];
	var uLocal_759 = 0;
	var uLocal_760 = 1;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 1;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
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
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 1080033280;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 1;
	int iLocal_795 = 0;
	bool bLocal_796 = false;
	bool bLocal_797 = false;
	bool bLocal_798 = false;
	bool bLocal_799 = false;
	bool bLocal_800 = false;
	bool bLocal_801 = false;
	bool bLocal_802 = false;
	bool bLocal_803 = false;
	bool bLocal_804 = false;
	bool bLocal_805 = false;
	var uLocal_806 = 0;
	bool bLocal_807 = false;
	bool bLocal_808 = false;
	bool bLocal_809 = false;
	bool bLocal_810 = false;
	bool bLocal_811 = false;
	bool bLocal_812 = false;
	bool bLocal_813 = false;
	bool bLocal_814 = false;
	bool bLocal_815 = false;
	bool bLocal_816 = false;
	bool bLocal_817 = false;
	bool bLocal_818 = false;
	bool bLocal_819 = false;
	bool bLocal_820 = false;
	bool bLocal_821 = false;
	bool bLocal_822 = false;
	bool bLocal_823 = false;
	bool bLocal_824 = false;
	bool bLocal_825 = false;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	var uLocal_830 = 0;
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	float fLocal_839 = 0f;
	float fLocal_840 = 0f;
	int iLocal_841[2] = { 0, 0 };
	var uLocal_844[2] = { 0, 0 };
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	var uLocal_852 = 1;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = -1;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 1097859072;
	var uLocal_876 = 1000;
	var uLocal_877 = 1067450368;
	var uLocal_878 = 5000;
	var uLocal_879 = 42;
	var uLocal_880 = 1103626240;
	var uLocal_881 = 1077936128;
	var uLocal_882 = 1106247680;
	var uLocal_883 = 1103101952;
	var uLocal_884 = 1097859072;
	var uLocal_885 = 1103626240;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = -1;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 1097859072;
	var uLocal_904 = 1000;
	var uLocal_905 = 1067450368;
	var uLocal_906 = 5000;
	var uLocal_907 = 42;
	var uLocal_908 = 1103626240;
	var uLocal_909 = 1077936128;
	var uLocal_910 = 1106247680;
	var uLocal_911 = 1103101952;
	var uLocal_912 = 1097859072;
	var uLocal_913 = 1103626240;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	vector3 vLocal_947 = { 0f, 0f, 0f };
	vector3 vLocal_950 = { 0f, 0f, 0f };
	vector3 vLocal_953 = { 0f, 0f, 0f };
	vector3 vLocal_956 = { 0f, 0f, 0f };
	int iLocal_959 = 0;
	int iLocal_960 = 0;
	char* sLocal_961 = NULL;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_14 = "BEAR";
	iLocal_15 = joaat("PG_BEARTRAP01X");
	sLocal_16 = "BEAR_TRAP_Sounds";
	sLocal_445 = "SCRIPT_RE@BEAR_TRAP";
	iLocal_689 = 2;
	iLocal_693 = 1;
	iLocal_832 = 43;
	fLocal_839 = 40f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_3__::func_429(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP(), 106);
		bLocal_825 = true;
	}
	if (!bLocal_825)
	{
		Local_38.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		func_3();
		func_4();
		func_5();
		Local_38.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		__LIB_3__::func_420(&Local_38, 1);
		__LIB_3__::func_302(&(Local_38.f_5), 0);
		__LIB_2__::func_52(&(Local_38.f_5), 1);
		__LIB_2__::func_50(&(Local_38.f_5), 1);
		__LIB_2__::func_51(&(Local_38.f_5), 1);
		__LIB_2__::func_105(&(Local_38.f_5), 1);
		__LIB_2__::func_104(&(Local_38.f_5), 1);
		__LIB_2__::func_634(&(Local_38.f_5), 1);
		__LIB_2__::func_180(&(Local_38.f_5), 1);
		__LIB_2__::func_110(&(Local_38.f_5), 1);
		__LIB_3__::func_302(&uLocal_858, 0);
		__LIB_2__::func_50(&uLocal_858, 1);
		__LIB_2__::func_52(&uLocal_858, 1);
		__LIB_3__::func_302(&uLocal_886, 0);
		__LIB_2__::func_613(&uLocal_886, 1);
		__LIB_3__::func_333(&uLocal_886, 1);
		__LIB_3__::func_407(&uLocal_886, 30f);
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_825, 2914, 0);
		if (bLocal_825)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_693)
			{
				case 1:
					if (__LIB_3__::func_454(&Local_38, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						iLocal_268 = __LIB_0__::func_979(Local_38.f_51);
						func_24(&Local_38, &iLocal_268, &(Local_38.f_51.f_4));
						vLocal_28 = { func_25(iLocal_268, Local_38.f_51.f_4) };
						Local_38.f_51.f_3 = vLocal_28.z;
						if (iLocal_268 != 1)
						{
						}
						else
						{
							iVar0 = __LIB_0__::func_120(882);
							if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(__LIB_2__::func_963(882)))
								{
									__LIB_3__::func_229(882);
									PERSCHAR::_0xFCC6DB8DBE709BC8(iVar0);
								}
							}
						}
						func_29(&Local_694);
						func_30();
						func_31(&uLocal_476);
						func_32(iLocal_268, Local_38.f_51.f_4);
						if (Local_38.f_161)
						{
							MISC::CLEAR_AREA(Local_38.f_51, 10f, 2097664);
						}
						__LIB_3__::func_414(&uLocal_963, Local_38.f_51, 2.5f, 2, 2, 0);
						__LIB_3__::func_414(&uLocal_962, Local_38.f_51, 2.5f, 1, 61, 0);
						iLocal_856 = VOLUME::_CREATE_VOLUME_SPHERE(Local_38.f_51, 0f, 0f, 0f, 80f, 80f, 80f);
						POPULATION::_0xB56D41A694E42E86(iLocal_856, 2232543, 16384, 0, -1, -1, 2);
						POPULATION::_0x18262CAFEBB5FBE1(iLocal_856, 2232543, 16384, 0, -1, -1, 2);
						iLocal_693 = 2;
					}
					else if (Local_38.f_160)
					{
						func_20();
					}
					break;
				case 2:
					if (func_34())
					{
						if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_15))
						{
							PROPSET::_REQUEST_PROPSET(iLocal_15);
						}
						else
						{
							func_35();
							iLocal_693 = 3;
						}
					}
					break;
				case 3:
					if (!func_36())
					{
					}
					else if (!func_37())
					{
					}
					else if (!func_38())
					{
					}
					else
					{
						if (func_39())
						{
							func_40();
							VOLUME::_SET_VOLUME_SCALE(Local_38.f_174, 80f, 80f, 20f);
							iLocal_693 = 4;
						}
						Jump @1927; //curOff = 760
						if (!__LIB_3__::func_645(&Local_38, &iLocal_841, iLocal_396, 1, 0, 0, 1, 0))
						{
							func_20();
						}
						if (__LIB_2__::func_1(iLocal_841[0], 0, 1))
						{
							_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_841[0], &Local_240);
						}
						if (__LIB_2__::func_901(iLocal_841[0], Global_35) && !__LIB_0__::func_27(iLocal_829, 8192))
						{
							__LIB_3__::func_609(7, 1);
							__LIB_3__::func_666(Local_38.f_3, iLocal_22, 2, 0, 0);
							bLocal_814 = true;
							Local_38.f_44 = 1;
							__LIB_1__::func_683(&iLocal_829, 8192);
							if (bLocal_799)
							{
								__LIB_1__::func_715(4, joaat("HONOR_EVENT_CRUEL_DEATH"), 0, 0, iLocal_841[0], 0, 1065353216 /* Float: 1f */, 0);
							}
							iLocal_692 = 17;
						}
						if (!bLocal_813 && ENTITY::DOES_ENTITY_EXIST(iLocal_841[1]))
						{
							if (__LIB_3__::func_276(iLocal_841[1], 0, &uLocal_858, &iLocal_857, 1, 0) || PED::_IS_PED_LASSOED(iLocal_841[1]))
							{
								bLocal_813 = true;
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_841[1], false);
								__LIB_2__::func_122(iLocal_841[0], "SICK_BASTARD", -1824788778, Global_35, 1, 0, 0, 1);
								if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_841[0], -1))
								{
									TASK::CLEAR_PED_TASKS(iLocal_841[0], true, false);
									TASK::CLEAR_PED_SECONDARY_TASK(iLocal_841[0]);
									func_51();
								}
							}
						}
						bLocal_807 = false;
						if (!Local_38.f_46)
						{
							if (__LIB_3__::func_276(iLocal_841[0], 0, &(Local_38.f_5), &iLocal_857, 0, 0))
							{
								if (!__LIB_0__::func_75(&uLocal_941))
								{
									__LIB_2__::func_526(&Local_344, 0, 0);
								}
								else
								{
									__LIB_2__::func_411(&(Local_344[1 /*17*/]), 0, 0);
								}
								if (func_55())
								{
									Local_38.f_46 = 1;
									if (!bLocal_799)
									{
										if (!ENTITY::IS_ENTITY_DEAD(iLocal_841[0]))
										{
											func_56();
										}
										__LIB_1__::func_715(3, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, iLocal_841[0], 0, 1065353216 /* Float: 1f */, 0);
									}
									else
									{
										if (!ENTITY::IS_ENTITY_DEAD(iLocal_841[0]))
										{
											TASK::_TASK_FLEE_FROM_PED(iLocal_841[0], Global_35, 0f, 0f, 0f, 100000f, -1, 0, 1f, 0);
											if (PED::_IS_PED_LASSOED(iLocal_841[0]) || PED::_IS_PED_HOGTIED(iLocal_841[0]))
											{
												__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[43], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
												__LIB_1__::func_148(&uLocal_938);
												iLocal_832 = 44;
											}
											else
											{
												__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[13], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
											}
											__LIB_1__::func_683(&iLocal_829, 4096);
											PED::SET_PED_CONFIG_FLAG(iLocal_841[0], 169, false);
										}
										__LIB_3__::func_380(Local_232);
									}
									iLocal_692 = 17;
								}
								else if (func_60())
								{
									bLocal_807 = true;
									__LIB_1__::func_148(&uLocal_920);
									if (iLocal_857 == 8192)
									{
										__LIB_2__::func_110(&(Local_38.f_5), 1);
									}
									if (bLocal_796 || iLocal_692 == 8)
									{
										if (!__LIB_0__::func_27(iLocal_829, 2048) && __LIB_2__::func_227(0, 1, iLocal_841[0], 1))
										{
											__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[14], "", -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
											__LIB_1__::func_683(&iLocal_829, 2048);
										}
									}
									else if (bLocal_799)
									{
										if (!__LIB_0__::func_27(iLocal_829, 4096))
										{
											__LIB_1__::func_683(&iLocal_829, 4096);
											if (PED::_IS_PED_LASSOED(iLocal_841[0]) || PED::_IS_PED_HOGTIED(iLocal_841[0]))
											{
												__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[43], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
												__LIB_1__::func_148(&uLocal_938);
												iLocal_832 = 44;
											}
											else
											{
												__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[13], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
											}
											func_62();
											iLocal_692 = 11;
										}
									}
									else if (!__LIB_0__::func_27(iLocal_829, 2) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_841[0], Local_232))
									{
										__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[15], "", -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
										__LIB_1__::func_683(&iLocal_829, 2);
										func_63();
										iLocal_692 = 11;
									}
								}
							}
						}
						if (__LIB_2__::func_1(iLocal_841[0], 0, 1))
						{
							if (iLocal_692 < 12)
							{
								PED::SET_PED_RESET_FLAG(iLocal_841[0], 36, true);
								PED::SET_PED_RESET_FLAG(iLocal_841[0], 31, true);
								PED::SET_PED_RESET_FLAG(iLocal_841[0], 88, true);
								PED::SET_PED_RESET_FLAG(iLocal_841[0], 91, true);
							}
						}
						func_64();
						if (func_65())
						{
							Local_38.f_50 = 1;
							func_20();
						}
						if (__LIB_3__::func_365(&Local_38, &iLocal_841, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0))
						{
							bLocal_825 = true;
						}
					}
					BUILTIN::WAIT(Local_38.f_158);
					default:
						break;
			}
		}
	}
}

void func_3()
{
	Local_232.f_4 = "script@beat@bearTrap@beartrap_all";
	Local_232.f_5 = "script@beat@bearTrap@beartrap_futile";
}

void func_4()
{
	sLocal_446[0] = "pblCalloverFront";
	sLocal_446[1] = "pblCalloverLeft";
	sLocal_446[2] = "pblCalloverRight";
	sLocal_446[3] = "pblCowerL";
	sLocal_446[4] = "pblCowerR";
	sLocal_446[5] = "pblEnter";
	sLocal_446[6] = "pblPainIdles";
	sLocal_446[7] = "pblPainLoop";
	sLocal_446[8] = "pblWaitForDisarm";
	sLocal_446[9] = "pbldeath_nohelp";
	sLocal_446[10] = "pblfail";
	sLocal_446[11] = "pblrecover";
	sLocal_446[12] = "pblsuccess";
	sLocal_446[13] = "pblrecover_cower_l";
	sLocal_446[14] = "pblrecover_cower_r";
	sLocal_446[15] = "PB_GIVE_WHISKY_BACK_R";
	sLocal_446[16] = "PB_GIVE_WHISKY_FL";
	sLocal_446[17] = "PB_GIVE_WHISKY_FR";
	sLocal_446[18] = "PB_GIVE_WHISKY_L";
	sLocal_446[19] = "PB_GIVE_WHISKY_R";
	sLocal_446[20] = "PB_ILO_L_NEG";
	sLocal_446[21] = "PB_ILO_L_POS";
	sLocal_446[22] = "PB_ILO_N_NEG";
	sLocal_446[23] = "PB_ILO_N_POS";
	sLocal_446[24] = "PB_ILO_R_NEG";
	sLocal_446[25] = "PB_ILO_R_POS";
}

void func_5()
{
	Local_240 = { 0f, 0f, 0f };
	Local_240.f_3 = Global_35;
	Local_240.f_8 = 4;
	Local_240.f_19 = 4;
	Local_240.f_21 = 4;
	Local_240.f_17 = 0;
	Local_240.f_18 = 0;
	Local_240.f_7 = 0;
	__LIB_1__::func_683(&(Local_240.f_5), 1);
}

void func_20()
{
	int iVar0;
	PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_959);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_856))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_856);
		POPULATION::_0xA1CFB35069D23C23(iLocal_856);
		__LIB_0__::func_172(iLocal_856);
	}
	if (CAM::_0x927B810E43E99932(&Local_270))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_270);
	}
	if (CAM::_0xDD0B7C5AE58F721D(&Local_270))
	{
		CAM::_0x798BE43C9393632B(&Local_270);
	}
	if (iLocal_268 == 1)
	{
		iVar0 = __LIB_0__::func_120(882);
		if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(iVar0);
		}
	}
	Local_38.f_45 = bLocal_812;
	if (__LIB_2__::func_1(iLocal_841[0], 0, 1))
	{
		__LIB_2__::func_426(&(iLocal_841[0]));
	}
	if (__LIB_2__::func_1(iLocal_841[1], 0, 1))
	{
		__LIB_2__::func_788(&(iLocal_841[1]), 1, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_269))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_269);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_848))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_848);
	}
	func_80();
	__LIB_4__::func_128(&Local_38, &iLocal_841, &uLocal_844, iLocal_396, iLocal_268, Local_38.f_51.f_4, 0, 1, 0, 1);
	func_82(&uLocal_852);
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (bLocal_808)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
	}
	if (PROPSET::_DOES_PROPSET_EXIST(iLocal_24))
	{
		PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iLocal_24);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_847))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_847);
	}
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iLocal_795))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iLocal_795);
	}
	__LIB_2__::func_353(&uLocal_962, 1);
	__LIB_2__::func_353(&uLocal_963, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_24(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 1;
			*uParam2 = 1;
			break;
		case 2:
			*iParam1 = 1;
			*uParam2 = 2;
			break;
		case 3:
			*iParam1 = 1;
			*uParam2 = 3;
			break;
		case 4:
			*iParam1 = 1;
			*uParam2 = 4;
			break;
		case 5:
			*iParam1 = 1;
			*uParam2 = 5;
			break;
		case 6:
			*iParam1 = 6;
			*uParam2 = 0;
			break;
		case 7:
			*iParam1 = 6;
			*uParam2 = 1;
			break;
		case 8:
			*iParam1 = 6;
			*uParam2 = 2;
			break;
		case 9:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 10:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 11:
			*iParam1 = 10;
			*uParam2 = 1;
			break;
		case 12:
			*iParam1 = 10;
			*uParam2 = 2;
			break;
		case 13:
			*iParam1 = 10;
			*uParam2 = 3;
			break;
		case 14:
			*iParam1 = 10;
			*uParam2 = 4;
			break;
		case 15:
			*iParam1 = 10;
			*uParam2 = 5;
			break;
		case 16:
			*iParam1 = 10;
			*uParam2 = 6;
			break;
	}
}

Vector3 func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 215.28f;
				case 1:
					return 0f, 0f, -17.28f;
				case 2:
					return 0f, 0f, 132.48f;
				case 3:
					return 0f, 0f, 136.08f;
				case 4:
					return 0f, 0f, -123.84f;
				case 5:
					return 0f, 0f, 80.64f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 207.36f;
				case 1:
					return 0f, 0f, 253.44f;
				case 2:
					return 0f, 0f, -162f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 97.92f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -52.56f;
				case 1:
					return 0f, 0f, 360f;
				case 2:
					return 0f, 0f, -7.2f;
				case 3:
					return 0f, 0f, -1.44f;
				case 4:
					return 0f, 0f, 161.28f;
				case 5:
					return 0f, 0f, -138.24f;
				case 6:
					return 0f, 0f, 138.24f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_29(var uParam0)
{
	(uParam0[0 /*32*/])->f_6 = { 0f, 0f, 0f };
	(uParam0[0 /*32*/])->f_9 = 0f;
	switch (iLocal_268)
	{
		case 1:
			switch (Local_38.f_51.f_4)
			{
				case 0:
					vLocal_34 = { -1689.585f, 280.2082f, 106.9181f };
					vLocal_31 = { -1689.675f, 282.4063f, 107.9084f };
					fLocal_37 = 0f;
					break;
				case 1:
					vLocal_34 = { -1591.994f, -604.4056f, 136.317f };
					vLocal_31 = { -1590.189f, -606.1403f, 137.2582f };
					fLocal_37 = -135f;
					break;
				case 2:
					vLocal_34 = { -1064.158f, -225.5395f, 86.4148f };
					vLocal_31 = { -1064.284f, -223.8799f, 87.26277f };
					fLocal_37 = 0f;
					break;
				case 3:
					vLocal_34 = { -1402.968f, 113.6236f, 85.58607f };
					vLocal_31 = { -1405.393f, 113.6748f, 87.00221f };
					fLocal_37 = 90f;
					break;
				case 4:
					vLocal_34 = { -2048.921f, -382.4517f, 162.6849f };
					vLocal_31 = { -2051.438f, -384.5531f, 164.6482f };
					fLocal_37 = 130f;
					break;
				case 5:
					vLocal_34 = { -2027.102f, -501.7839f, 149.5552f };
					vLocal_31 = { -2029.879f, -501.9784f, 151.0055f };
					fLocal_37 = 90f;
					break;
			}
			break;
		case 6:
			switch (Local_38.f_51.f_4)
			{
				case 0:
					vLocal_34 = { 1888.59f, 1529.468f, 189.6893f };
					vLocal_31 = { 1888.354f, 1527.556f, 190.7007f };
					fLocal_37 = 180f;
					break;
				case 1:
					vLocal_34 = { 1766.175f, 1634.556f, 174.7864f };
					vLocal_31 = { 1767.866f, 1634.164f, 175.6365f };
					fLocal_37 = -90f;
					break;
				case 2:
					vLocal_34 = { 617.9554f, 1904.912f, 203.8815f };
					vLocal_31 = { 618.243f, 1906.589f, 205.0052f };
					fLocal_37 = 0f;
					break;
			}
			break;
		case 10:
			switch (Local_38.f_51.f_4)
			{
				case 0:
					vLocal_34 = { 2715.824f, 561.0865f, 83.11494f };
					vLocal_31 = { 2715.829f, 563.8691f, 84.57591f };
					fLocal_37 = 0f;
					break;
				case 1:
					vLocal_34 = { 2428.024f, 1701.987f, 96.61082f };
					vLocal_31 = { 2430.585f, 1702.021f, 97.8499f };
					fLocal_37 = -90f;
					break;
				case 2:
					vLocal_34 = { 2686.311f, 655.1634f, 75.1515f };
					vLocal_31 = { 2684.14f, 655.8288f, 76.65003f };
					fLocal_37 = 90f;
					break;
				case 3:
					vLocal_34 = { 2288.685f, 1659.1f, 86.19006f };
					vLocal_31 = { 2290.834f, 1658.85f, 87.17131f };
					fLocal_37 = -90f;
					break;
				case 4:
					vLocal_34 = { 2378.831f, 1082.009f, 84.6937f };
					vLocal_31 = { 2379.347f, 1083.828f, 86.6047f };
					fLocal_37 = -10f;
					break;
				case 5:
					vLocal_34 = { 2754.755f, 1012.546f, 62.8131f };
					vLocal_31 = { 2754.51f, 1010.44f, 63.6449f };
					fLocal_37 = 180f;
					break;
				case 6:
					vLocal_34 = { 2020.869f, 77.0349f, 75.6485f };
					vLocal_31 = { 2019.594f, 75.9112f, 75.8667f };
					fLocal_37 = 140f;
					break;
			}
			break;
	}
}

void func_30()
{
	int iVar0;
	switch (iLocal_268)
	{
		case 6:
		case 10:
			iLocal_22 = 0;
			sLocal_397[4] = "RE_BT_FTH_V1_PAIN";
			sLocal_397[34] = "RE_BT_FTH_MID_PAIN_IDLE_A";
			sLocal_397[36] = "RE_BT_FTH_MID_PAIN_IDLE_B";
			sLocal_397[38] = "RE_BT_FTH_MID_PAIN_IDLE_C";
			sLocal_397[5] = "RE_BT_FTH_V1_CALLOVER";
			sLocal_397[6] = "RE_BT_FTH_V1_HELP";
			sLocal_397[7] = "RE_BT_FTH_V1_CROUCH";
			sLocal_397[8] = "RE_BT_FTH_V1_BAG_WARN";
			sLocal_397[9] = "RE_BT_FTH_V1_BAG_STOLE";
			sLocal_397[0] = "RE_BT_FTH_V1_THANKS_A";
			sLocal_397[2] = "RE_BT_FTH_V1_THANKS_A";
			sLocal_397[3] = "RE_BT_FTH_V1_THANKS_STOLE_A";
			sLocal_397[10] = "RE_BT_FTH_V1_WELCOME_BAG";
			sLocal_397[11] = "RE_BT_FTH_V1_WELCOME";
			sLocal_397[1] = "RE_BT_FTH_V1_THANKS_B";
			sLocal_397[12] = "RE_BT_FTH_V1_DIES";
			sLocal_397[13] = "RE_BT_FTH_V1_AGGRO_SAVED";
			sLocal_397[14] = "RE_BT_FTH_V1_AGGRO_FAILED";
			sLocal_397[15] = "RE_BT_FTH_V1_AGGRO";
			sLocal_397[16] = "RE_BT_FTH_V1_LOOSEN";
			sLocal_397[17] = "RE_BT_FTH_V1_STRUGGLE";
			sLocal_397[18] = "RE_BT_FTH_V1_TRAP_OPEN";
			sLocal_397[19] = "RE_BT_FTH_V1_LOST_LEG_FAIL";
			sLocal_397[20] = "RE_BT_FTH_V1_LOST_LEG_NO_HELP_A";
			sLocal_397[21] = "RE_BT_FTH_V1_STEAL_HORSE";
			sLocal_397[22] = "RE_BT_FTH_V1_KILL_HORSE";
			sLocal_397[23] = "RE_BT_FTH_V1_GREET_IN_TRAP";
			sLocal_397[24] = "RE_BT_FTH_V1_GREET_IN_TRAP_RESPONSE";
			sLocal_397[25] = "RE_BT_FTH_V1_ANTAGONIZE_IN_TRAP";
			sLocal_397[26] = "RE_BT_FTH_V1_ANTAGONIZE_IN_TRAP_RESPONSE";
			sLocal_397[27] = "RE_BT_FTH_V1_ANTAGONIZE_SAVED";
			sLocal_397[28] = "RE_BT_FTH_V1_ANTAGONIZE_SAVED_RESPONSE";
			sLocal_397[29] = "RE_BT_FTH_V1_GIVE_WHISKEY";
			sLocal_397[30] = "RE_BT_FTH_V1_SAVED_IDLE_A";
			sLocal_397[31] = "RE_BT_FTH_V1_SAVED_IDLE_B";
			sLocal_397[32] = "RE_BT_FTH_V1_SAVED_IDLE_C";
			sLocal_397[33] = "RE_BT_FTH_V1_SAVED_IDLE_TO_PLYR_A";
			sLocal_397[35] = "RE_BT_FTH_V1_PAIN_IDLE_A";
			sLocal_397[37] = "RE_BT_FTH_V1_PAIN_IDLE_B";
			sLocal_397[39] = "RE_BT_FTH_V1_PAIN_IDLE_E";
			sLocal_397[40] = "RE_BT_FTH_V1_PAIN_IDLE_D";
			sLocal_397[41] = "RE_BT_FTH_V1_POST_POS_ILO";
			sLocal_397[42] = "RE_BT_FTH_V1_POST_POS_ILO_RSP";
			sLocal_397[43] = "RE_BT_FTH_V1_HOGTIE";
			sLocal_397[44] = "RE_BT_FTH_V1_HOGTIE_B";
			sLocal_397[45] = "RE_BT_FTH_V1_HOGTIE_C";
			sLocal_397[46] = "RELIEVED_REACT";
			break;
		case 1:
		default:
			iLocal_22 = 1;
			sLocal_397[4] = "RE_BT_MTN_V1_PAIN";
			sLocal_397[34] = "RE_BT_FTH_MID_PAIN_IDLE_A";
			sLocal_397[36] = "RE_BT_FTH_MID_PAIN_IDLE_B";
			sLocal_397[38] = "RE_BT_FTH_MID_PAIN_IDLE_C";
			sLocal_397[5] = "RE_BT_MTN_V1_CALLOVER";
			sLocal_397[6] = "RE_BT_MTN_V1_HELP";
			sLocal_397[7] = "RE_BT_MTN_V1_CROUCH";
			sLocal_397[8] = "RE_BT_MTN_V1_BAG_WARN";
			sLocal_397[9] = "RE_BT_MTN_V1_BAG_STOLE";
			sLocal_397[0] = "RE_BT_MTN_V1_THANKS";
			sLocal_397[2] = "RE_BT_MTN_V1_THANKS_STOLE_A";
			sLocal_397[3] = "RE_BT_MTN_V1_THANKS_STOLE_B";
			sLocal_397[10] = "RE_BT_MTN_V1_WELCOME_BAG";
			sLocal_397[11] = "RE_BT_MTN_V1_WELCOME";
			sLocal_397[1] = "RE_BT_MTN_V1_SIT";
			sLocal_397[12] = "RE_BT_MTN_V1_DIES";
			sLocal_397[13] = "RE_BT_MTN_V1_AGGRO_SAVED";
			sLocal_397[14] = "RE_BT_MTN_V1_AGGRO_FAILED";
			sLocal_397[15] = "RE_BT_MTN_V1_AGGRO";
			sLocal_397[16] = "RE_BT_MTN_V1_LOOSEN";
			sLocal_397[17] = "RE_BT_MTN_V1_STRUGGLE";
			sLocal_397[18] = "RE_BT_MTN_V1_TRAP_OPEN";
			sLocal_397[19] = "RE_BT_MTN_V1_LOST_LEG_FAIL";
			sLocal_397[20] = "RE_BT_MTN_V1_LOST_LEG_NO_HELP";
			sLocal_397[21] = "RE_BT_MTN_V1_STEAL_HORSE";
			sLocal_397[22] = "INTIMIDATED_AGAIN_ROB";
			sLocal_397[23] = "RE_BT_MTN_V1_GREET_IN_TRAP";
			sLocal_397[24] = "RE_BT_MTN_V1_GREET_IN_TRAP_RESPONSE";
			sLocal_397[25] = "RE_BT_MTN_V1_ANTAGONIZE_IN_TRAP";
			sLocal_397[26] = "RE_BT_MTN_V1_ANTAGONIZE_IN_TRAP_RESPONSE";
			sLocal_397[27] = "RE_BT_MTN_V1_ANTAGONIZE_SAVED";
			sLocal_397[28] = "RE_BT_MTN_V1_ANTAGONIZE_SAVED_RESPONSE";
			sLocal_397[29] = "RE_BT_MTN_V1_GIVE_WHISKEY";
			sLocal_397[30] = "RE_BT_MTN_V1_SAVED_IDLE_A";
			sLocal_397[31] = "RE_BT_MTN_V1_SAVED_IDLE_B";
			sLocal_397[32] = "RE_BT_MTN_V1_SAVED_IDLE_TO_PLYR_A";
			sLocal_397[33] = "RE_BT_MTN_V1_SAVED_IDLE_TO_PLYR_B";
			sLocal_397[35] = "RE_BT_MTN_V1_PAIN_IDLE_A";
			sLocal_397[37] = "RE_BT_MTN_V1_PAIN_IDLE_B";
			sLocal_397[39] = "RE_BT_MTN_V1_PAIN_IDLE_C";
			sLocal_397[40] = "RE_BT_MTN_V1_PAIN_IDLE_D";
			sLocal_397[41] = "RE_BT_MTN_V1_POST_POS_ILO";
			sLocal_397[42] = "RE_BT_MTN_V1_POST_POS_ILO_RSP";
			sLocal_397[43] = "RE_BT_MTN_V1_HOGTIE";
			sLocal_397[44] = "RE_BT_MTN_V1_HOGTIE_B";
			sLocal_397[45] = "RE_BT_MTN_V1_HOGTIE_C";
			sLocal_397[46] = "IGNORING_YOU";
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iLocal_17[iVar0] = MISC::GET_HASH_KEY(sLocal_397[iVar0]);
		iVar0++;
	}
}

void func_31(var uParam0)
{
	uParam0->f_190 = 5000;
	uParam0->f_78 = 0;
	uParam0->f_76 = 1;
	uParam0->f_182 = 1;
}

void func_32(int iParam0, int iParam1)
{
	if (!Local_38.f_161)
	{
		if (iParam0 == 9 && iParam1 == 0)
		{
			func_20();
		}
	}
}

bool func_34()
{
	switch (iLocal_691)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_38))
			{
				func_99(&Local_694);
				__LIB_3__::func_284(&Local_694);
				func_101();
				func_102();
				PROPSET::_REQUEST_PROPSET(iLocal_15);
				STREAMING::REQUEST_ANIM_DICT(sLocal_445);
				if (bLocal_23)
				{
					STREAMING::REQUEST_MODEL(iLocal_266, false);
				}
				iLocal_691 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_690, cLocal_14))
			{
				return false;
			}
			if (!CAM::_0xDD0B7C5AE58F721D(&Local_270))
			{
				return false;
			}
			if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_15))
			{
				return false;
			}
			if (!AUDIO::_0xD9130842D7226045(sLocal_16, 0))
			{
				return false;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_445))
			{
				return false;
			}
			if (bLocal_23 && !STREAMING::HAS_MODEL_LOADED(iLocal_266))
			{
				return false;
			}
			if (!__LIB_3__::func_366(&Local_694))
			{
				return false;
			}
			else if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iLocal_795))
			{
				iLocal_795 = PED::_REQUEST_METAPED_OUTFIT(Local_694[0 /*32*/].f_1, iLocal_267);
				return false;
			}
			else if (!PED::_0x610438375E5D1801(iLocal_795))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_35()
{
	func_105();
}

bool func_36()
{
	if (!PROPSET::_IS_PROPSET_VALID(iLocal_24))
	{
		return false;
	}
	if (!func_106())
	{
		return false;
	}
	iLocal_847 = func_107(iLocal_265, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_847))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_847, false, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_847, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_847, true);
		vLocal_950 = { ENTITY::GET_ENTITY_COORDS(iLocal_847, false, false) };
		vLocal_953 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iLocal_847) };
		return true;
	}
	return false;
}

bool func_37()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_851))
	{
		return true;
	}
	if (func_108(&iLocal_851, joaat("P_LANTERN09X")))
	{
		OBJECT::_0x7FCD49388BC9B775(iLocal_851, 0);
		return true;
	}
	return false;
}

bool func_38()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_841[0]))
	{
		iLocal_841[0] = __LIB_3__::func_422(Local_694[0 /*32*/].f_1, &(Local_694[0 /*32*/]), Local_38.f_51 + Local_694[0 /*32*/].f_6, Local_694[0 /*32*/].f_9, 1, 0, 1, 0, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_841[0], 138, true);
		PED::_0xAE6004120C18DF97(iLocal_841[0], 0, 0);
		ENTITY::_0x18FF3110CF47115D(iLocal_841[0], 0, 0);
		__LIB_3__::func_285(iLocal_841[0], &Local_38, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_841[0], joaat("REL_NO_RELATIONSHIP"));
		PED::_0x89F5E7ADECCCB49C(iLocal_841[0], "INJURED_LEFT_LEG");
		PED::SET_PED_CONFIG_FLAG(iLocal_841[0], 169, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_841[0], 1, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_841[0], 430, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_841[0], 448, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_841[0], true, 30f);
		Local_270.f_16 = iLocal_841[0];
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_841[1]))
	{
		iLocal_841[1] = __LIB_1__::func_545(Local_694[1 /*32*/].f_1, vLocal_34, Local_694[0 /*32*/].f_9, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_841[0]))
		{
			PED::_0x931B241409216C1F(iLocal_841[0], iLocal_841[1], 0);
		}
		return true;
	}
	return false;
}

bool func_39()
{
	Local_232 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_232.f_4, 64, sLocal_446[7], false, true);
	Local_232.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_232.f_5, 0, sLocal_446[5], false, true);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_232, vLocal_950, vLocal_953, 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_232.f_1, vLocal_950, vLocal_953, 2);
	if (__LIB_2__::func_1(iLocal_841[0], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_232, "pedVictim", iLocal_841[0], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_847))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_232, "TRAP", iLocal_847, 0);
	}
	PED::_0xE1AADD0055D76603(iLocal_841[0], iLocal_847, PED::GET_PED_BONE_INDEX(iLocal_841[0], 55120), -1, ENTITY::GET_ENTITY_COORDS(iLocal_847, true, false), -1f, 1, 0, 0);
	PED::_0x6569F31A01B4C097(iLocal_841[0], 13, 1);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_232);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_232.f_1);
	return true;
}

void func_40()
{
	uLocal_854 = __LIB_3__::func_408(joaat("PROP_HITCHINGTREE"), vLocal_34, fLocal_37, 0, 0, 0);
	PHYSICS::_0x06AADE17334F7A40(iLocal_841[1], vLocal_31);
	TASK::_TASK_USE_SCENARIO_POINT(iLocal_841[1], uLocal_854, 0, 0, false, true, 0, false, -1f, false);
}

void func_51()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (__LIB_2__::func_1(iLocal_841[1], 0, 1))
	{
		if (__LIB_0__::func_27(iLocal_829, 2) || __LIB_0__::func_27(iLocal_829, 4096))
		{
			TASK::TASK_MOUNT_ANIMAL(0, iLocal_841[1], -1, -1, 1f, 8388608, 0, 0);
		}
		else
		{
			TASK::TASK_MOUNT_ANIMAL(0, iLocal_841[1], -1, -1, 1f, 1, 0, 0);
		}
	}
	TASK::_TASK_FLEE_FROM_PED(0, Global_35, 0f, 0f, 0f, 100000f, -1, 128, 2f, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_841[0], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	PED::SET_PED_CONFIG_FLAG(iLocal_841[0], 430, false);
}

bool func_55()
{
	if ((iLocal_857 == 2 || iLocal_857 == 1) || iLocal_857 == 16)
	{
		return true;
	}
	return false;
}

void func_56()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_841[0]))
	{
		if (!bLocal_799)
		{
			ENTITY::_0x18FF3110CF47115D(iLocal_841[0], 7, 0);
		}
		__LIB_1__::func_864(iLocal_841[0], 0, 0);
		bLocal_814 = true;
	}
}

bool func_60()
{
	if ((((((iLocal_857 == 8 || iLocal_857 == 4) || iLocal_857 == 256) || iLocal_857 == 16) || iLocal_857 == 256) || iLocal_857 == 8192) || iLocal_857 == 16384)
	{
		return true;
	}
	return false;
}

void func_62()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_841[0], -708661514))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_232, "pedVictim", iLocal_841[0]);
		PED::SET_PED_TO_RAGDOLL(iLocal_841[0], 1000, 1000, 0, false, false, false);
		TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_841[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, iLocal_841[1]);
		return;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(Local_232, "Exit", 1))
	{
		return;
	}
	if (__LIB_3__::func_419(iLocal_841[0], Global_35))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[14], true);
	}
	else
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[13], true);
	}
	__LIB_3__::func_157(&(Local_344[0 /*17*/]), "RE_INTER_DEFUSE", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_344[0 /*17*/]), 1, 0);
	__LIB_1__::func_148(&uLocal_941);
	bLocal_811 = true;
	__LIB_0__::func_37(&uLocal_920);
	__LIB_0__::func_37(&uLocal_926);
}

void func_63()
{
	if (__LIB_3__::func_419(iLocal_841[0], Global_35))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[4], true);
	}
	else
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[3], true);
	}
	__LIB_0__::func_37(&uLocal_920);
	__LIB_0__::func_37(&uLocal_917);
	if (__LIB_0__::func_75(&uLocal_914))
	{
		__LIB_2__::func_113(&uLocal_914);
	}
	fLocal_839 = 15f;
}

void func_64()
{
	if (iLocal_692 > 4 && bLocal_808)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1662606675))
		{
			if (CAM::_0x927B810E43E99932(&Local_270))
			{
				CAM::_0x0A5A4F1979ABB40E(&Local_270);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("INTERRUPT")))
		{
			if (CAM::_0x927B810E43E99932(&Local_270))
			{
				CAM::_0x0A5A4F1979ABB40E(&Local_270);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
			bLocal_808 = false;
		}
	}
}

bool func_65()
{
	struct<13> Var0;
	vector3 vVar23;
	int iVar26;
	func_183();
	func_184();
	func_185();
	func_186();
	func_187();
	func_188();
	func_189();
	func_190();
	func_191();
	func_192();
	func_193();
	func_194();
	func_195();
	__LIB_0__::func_11();
	if (iLocal_692 < 11)
	{
		if ((!bLocal_799 && !ENTITY::IS_ENTITY_DEAD(iLocal_841[0])) && ((PED::IS_PED_RAGDOLL(iLocal_841[0]) || FIRE::IS_ENTITY_ON_FIRE(iLocal_841[0])) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_841[0], true, false), 2f)))
		{
			func_56();
			iLocal_692 = 16;
		}
	}
	else if ((!bLocal_799 && !ENTITY::IS_ENTITY_DEAD(iLocal_841[0])) && (FIRE::IS_ENTITY_ON_FIRE(iLocal_841[0]) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_841[0], true, false), 2f)))
	{
		func_56();
		__LIB_3__::func_380(Local_232);
		iLocal_692 = 16;
	}
	if (iLocal_692 > 1)
	{
		func_197();
	}
	switch (iLocal_692)
	{
		case 0:
			if (func_198())
			{
				PED::APPLY_PED_DAMAGE_PACK(iLocal_841[0], "PD_Bear_Trap_Victim", 0f, 1f);
				ANIMSCENE::START_ANIM_SCENE(Local_232);
				func_199(&Local_38, Local_38.f_51, 70f, 15f, 2, 0, 3f, 0);
				vLocal_947 = { Local_38.f_51 + Vector(0f, -2f, 0f) };
				__LIB_3__::func_409(&vLocal_947, 1088421888 /* Float: 7f */);
				Var0.f_1 = 10;
				Var0.f_12 = 10;
				Var0 = 1;
				Var0.f_1[0] = joaat("CONSUMABLE_POTENT_PREDATOR_BAIT");
				Var0.f_12[0] = 1;
				ENTITY::_0xA88E215CEB0435C0(iLocal_841[0], &Var0, 536905469, 2, 3, 0);
				ENTITY::_0x18FF3110CF47115D(iLocal_841[0], 7, 0);
				iLocal_692 = 1;
			}
			break;
		case 1:
			if (!bLocal_804)
			{
				func_201();
				bLocal_804 = true;
			}
			else if (!bLocal_805 && func_202())
			{
				bLocal_805 = true;
			}
			func_204(&(iLocal_841[0]), &(Local_301[0 /*21*/]), 30f, &Local_344, &(Local_38.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (bLocal_805 && __LIB_9__::func_662(Local_38.f_51, &uLocal_833, &uLocal_838, &uLocal_806, 1f, 80f, 0, 0, 80f))
			{
				__LIB_2__::func_478(iLocal_841[0], 0, func_206(0), 0, 150f, 0, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
				__LIB_3__::func_415(&Local_38, iLocal_841[0], ENTITY::GET_ENTITY_COORDS(iLocal_841[0], true, false), 100);
				__LIB_3__::func_277(1515458263, Local_38.f_51, 1);
				vVar23 = { vLocal_950 + Vector(0.5f, 0f, 0f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(vVar23, &(vVar23.f_2), false);
				GRAPHICS::_ADD_BLOOD_POOL_2(vVar23, 0.4f, 0.7f, 0.00025f, true, NaNf, true);
				iLocal_959 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DISTURBING"), iLocal_841[0], -1f, 70f, 70f, -1f, -1f, 180f, false, false, -1, -1);
				__LIB_3__::func_164(&(Local_38.f_121));
				__LIB_1__::func_148(&uLocal_914);
				__LIB_3__::func_426(&Local_38, &(Local_38.f_48), Local_38.f_3, &(Local_38.f_51.f_6));
				iLocal_960 = 34;
				iLocal_692 = 2;
			}
			break;
		case 2:
			func_204(&(iLocal_841[0]), &(Local_301[0 /*21*/]), 30f, &Local_344, &(Local_38.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (iLocal_396 == 0)
			{
				if (!__LIB_2__::func_136(iLocal_841[0], 0))
				{
					if (__LIB_2__::func_118(iLocal_841[0], 0, 1) < 30f)
					{
						if (__LIB_3__::func_549(iLocal_841[0], &uLocal_886, &iLocal_857, 0))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_232, "bAction", true, false);
							iLocal_475 = __LIB_3__::func_112(iLocal_841[0], Global_35, 1060437492 /* Float: 0.707f */);
							switch (iLocal_475)
							{
								case 3:
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[1], true);
									break;
								case 2:
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[2], true);
									break;
								case 0:
								case 1:
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[0], true);
									break;
							}
							__LIB_3__::func_277(46165686, Local_38.f_51, 1);
							EVENT::REMOVE_SHOCKING_EVENT(iLocal_959);
							iLocal_959 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DISTURBING"), iLocal_841[0], -1f, 70f, 70f, -1f, -1f, 180f, false, false, -1, -1);
							__LIB_2__::func_73(iLocal_841[0], &(uLocal_844[0]), -89429847, -1440522869, 0, 0);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_844[0], "RE_INTER_STRANGER");
							__LIB_2__::func_478(iLocal_841[0], Global_35, func_206(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_148(&uLocal_914);
							__LIB_1__::func_148(&uLocal_917);
							bLocal_812 = true;
							Local_38.f_44 = 1;
							func_213();
							iLocal_692 = 3;
						}
					}
					else if (__LIB_2__::func_227(0, 1, iLocal_841[0], 1))
					{
						if (iLocal_960 <= 40)
						{
							__LIB_1__::func_148(&uLocal_914);
							__LIB_2__::func_478(iLocal_841[0], 0, sLocal_397[iLocal_960], 0, 120f, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
							__LIB_3__::func_277(1515458263, Local_38.f_51, 1);
							iLocal_960++;
						}
						else
						{
							func_214();
						}
					}
				}
			}
			break;
		case 3:
			func_215(&uLocal_914);
			func_216();
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_232))
			{
				if (__LIB_0__::func_75(&uLocal_914))
				{
					__LIB_2__::func_113(&uLocal_914);
				}
				if (__LIB_0__::func_75(&uLocal_917))
				{
					__LIB_2__::func_113(&uLocal_917);
				}
				iLocal_692 = 4;
			}
			else if (__LIB_0__::func_265(&uLocal_917) > fLocal_839 && __LIB_2__::func_227(0, 1, iLocal_841[0], 1))
			{
				func_214();
			}
			break;
		case 4:
			if (__LIB_2__::func_1(iLocal_841[0], 0, 1))
			{
				if (bLocal_799)
				{
					func_218();
					PAD::SET_PAD_SHAKE(0, 500, 256);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[12], true);
					AUDIO::_PLAY_SOUND_FROM_ENTITY("OPEN", Global_35, sLocal_16, false, 0, 0);
					PED::_0x735662994E60A710(iLocal_841[0], 0);
					__LIB_1__::func_148(&uLocal_923);
					PED::SET_PED_CONFIG_FLAG(iLocal_841[0], 1, false);
					PED::_0xAE6004120C18DF97(iLocal_841[0], 0, 1);
					ENTITY::_0x18FF3110CF47115D(iLocal_841[0], 0, 1);
					__LIB_2__::func_526(&Local_344, 0, 0);
					func_219();
					iLocal_692 = 12;
				}
				else if (bLocal_800 || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("BRANCH")))
				{
					func_218();
					func_220();
				}
				else
				{
					func_221();
				}
			}
			break;
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_841[0]))
			{
				MISC::_0xAB26DEEE120FD3FD(iLocal_841[0], 0);
			}
			if (bLocal_801)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232.f_1, sLocal_446[12], true);
				PED::_0x5A1A929C8B729B4A(iLocal_841[0]);
				ENTITY::_0x18FF3110CF47115D(iLocal_841[0], 7, 1);
				iLocal_692 = 16;
			}
			else if (bLocal_800 || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("BRANCH")))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232.f_1, sLocal_446[10], true);
				iLocal_692 = 16;
			}
			else
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
					iLocal_692 = 16;
				}
				func_221();
			}
			break;
		case 6:
			__LIB_1__::func_471(&(Local_344[2 /*17*/]), 9);
			func_222();
			if (__LIB_2__::func_227(-3f, 1, 0, 0) && !__LIB_2__::func_136(iLocal_841[0], 1))
			{
				if (__LIB_0__::func_27(iLocal_829, 65536) && !__LIB_0__::func_27(iLocal_829, 262144))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(Local_232, sLocal_446[3]) && !ANIMSCENE::_0x1F0E401031E20146(Local_232, sLocal_446[4]))
					{
						__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[24], 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (__LIB_0__::func_27(iLocal_829, 32768) && !__LIB_0__::func_27(iLocal_829, 131072))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(Local_232, sLocal_446[3]) && !ANIMSCENE::_0x1F0E401031E20146(Local_232, sLocal_446[4]))
					{
						if (Local_694[0 /*32*/].f_3 == -563885195)
						{
							__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[26], 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[26], 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				switch (__LIB_3__::func_112(iLocal_841[0], Global_35, 1060437492 /* Float: 0.707f */))
				{
					case 3:
						func_223(3);
						break;
					case 0:
						func_223(0);
						break;
					case 2:
						func_223(2);
						break;
					case 1:
					default:
						switch (__LIB_3__::func_112(iLocal_841[0], Global_35, 1f))
						{
							case 3:
								func_223(3);
								break;
							case 2:
							default:
								func_223(2);
								break;
						}
						break;
				}
				iLocal_692 = 7;
			}
			break;
		case 7:
			func_222();
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_232, "idle", 1))
			{
				__LIB_2__::func_411(&(Local_344[2 /*17*/]), 1, 0);
				if (!__LIB_0__::func_27(iLocal_829, 131072))
				{
					__LIB_2__::func_411(&(Local_344[1 /*17*/]), 1, 0);
				}
				__LIB_1__::func_148(&uLocal_917);
				fLocal_839 = 15f;
				iLocal_692 = 3;
			}
			break;
		case 8:
			func_224();
			if (ENTITY::IS_ENTITY_DEAD(iLocal_841[0]))
			{
				iLocal_692 = 17;
			}
			break;
		case 9:
			func_224();
			iLocal_692 = 10;
			break;
		case 10:
			func_224();
			PED::SET_PED_KEEP_TASK(iLocal_841[0], true);
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_232, false))
			{
				iLocal_692 = 17;
			}
			break;
		case 11:
			if (__LIB_2__::func_1(iLocal_841[0], 0, 1))
			{
				func_225();
				func_226();
			}
			else
			{
				iLocal_692 = 17;
			}
			break;
		case 12:
			func_227();
			if (__LIB_2__::func_227(0, 1, iLocal_841[0], 1))
			{
				iLocal_692 = 13;
			}
			break;
		case 13:
			func_227();
			if (func_228(iLocal_841[0], &(uLocal_844[0]), Global_35, &iLocal_689, &uLocal_476, &Local_38))
			{
				__LIB_3__::func_666(Local_38.f_3, iLocal_22, 1, 0, 0);
				if (iLocal_22 == 0)
				{
					iVar26 = 3;
				}
				else
				{
					iVar26 = 4;
				}
				if (!__LIB_0__::func_181())
				{
					__LIB_3__::func_461(4, iVar26, 1);
				}
				else
				{
					__LIB_3__::func_461(4, iVar26, 2);
				}
				__LIB_1__::func_148(&uLocal_926);
				iLocal_692 = 16;
			}
			break;
		case 14:
			func_227();
			if (func_230() || !__LIB_0__::func_163(Global_35, 242628503))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_232, "player", Global_35, 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_961, true);
				__LIB_2__::func_360(&(Local_344[0 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_411(&(Local_344[0 /*17*/]), 0, 0);
				iLocal_692 = 15;
			}
			break;
		case 15:
			func_227();
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1538937319))
			{
				__LIB_1__::func_698(joaat("CONSUMABLE_WHISKEY"), 1, -1387038764, 0, 0);
				__LIB_1__::func_715(12, 0, 0, "HONOR_EVENT_STRANGER_HELPED", iLocal_841[0], 0, 1065353216 /* Float: 1f */, 0);
			}
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
			{
				iLocal_848 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_232, "whiskey", true);
				OBJECT::_0xFFB99FFD17F65889(iLocal_848, 0f);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
				bLocal_808 = false;
				iLocal_692 = 16;
			}
			break;
		case 16:
			if (!bLocal_815)
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_232, "Recover_loop", 1))
				{
					if (__LIB_1__::func_707(joaat("CONSUMABLE_WHISKEY"), 1, 0) && !__LIB_0__::func_27(iLocal_829, 2097152))
					{
						__LIB_2__::func_411(&(Local_344[0 /*17*/]), 1, 0);
						bLocal_815 = true;
					}
				}
			}
			if (!Local_38.f_46)
			{
				func_227();
			}
			if (bLocal_822 && !bLocal_823)
			{
				if (__LIB_2__::func_227(0, 1, iLocal_841[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
				{
					__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[42], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_823 = true;
				}
			}
			func_235();
			if (!__LIB_0__::func_27(iLocal_829, 1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_841[0], Global_35, 1, 1))
				{
					if (!__LIB_2__::func_1(iLocal_841[0], 0, 1))
					{
						__LIB_3__::func_666(Local_38.f_3, iLocal_22, 4, 0, 0);
						__LIB_1__::func_683(&iLocal_829, 1);
					}
				}
			}
			if (__LIB_2__::func_1(iLocal_841[0], 0, 1))
			{
				if (PED::IS_PED_FLEEING(iLocal_841[0]))
				{
					Local_38.f_50 = 1;
					PED::SET_PED_CONFIG_FLAG(iLocal_841[0], 169, false);
					iLocal_692 = 17;
				}
				if (__LIB_2__::func_118(iLocal_841[0], 1, 1) > 80f)
				{
					Local_38.f_50 = 1;
					iLocal_692 = 17;
				}
				else if (__LIB_2__::func_118(iLocal_841[0], 1, 1) < 10f)
				{
					if (!__LIB_0__::func_27(iLocal_829, 16384))
					{
						if ((__LIB_1__::func_285(&uLocal_926, 20f) && __LIB_2__::func_227(0, 1, iLocal_841[0], 1)) && ANIMSCENE::_0x8D81E7824B7753F7(Local_232, "Recover_loop", 1))
						{
							switch (iLocal_831)
							{
								case 0:
									__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[30], 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_841[0], Global_35, 3000, 0, 51, 0);
									__LIB_1__::func_148(&uLocal_926);
									iLocal_831++;
									break;
								case 1:
									__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[31], 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_841[0], Global_35, 3000, 0, 51, 0);
									__LIB_1__::func_148(&uLocal_926);
									iLocal_831++;
									break;
								case 2:
									__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[32], 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_841[0], Global_35, 3000, 0, 51, 0);
									__LIB_1__::func_148(&uLocal_926);
									iLocal_831++;
									break;
								case 3:
									__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[33], 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_841[0], Global_35, 3000, 0, 51, 0);
									__LIB_1__::func_148(&uLocal_926);
									if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_232, false))
									{
										ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_232, "recover_bool", true, false);
										bLocal_811 = true;
										__LIB_2__::func_360(&(Local_344[0 /*17*/]), "RE_INTER_POS");
										Local_344[0 /*17*/].f_13 = sLocal_397[41];
										__LIB_2__::func_411(&(Local_344[0 /*17*/]), 1, 0);
										__LIB_1__::func_471(&(Local_344[0 /*17*/]), 8);
										bLocal_821 = true;
									}
									iLocal_831++;
									break;
							}
						}
					}
				}
			}
			break;
		case 17:
			func_224();
			func_204(&(iLocal_841[0]), &(Local_301[0 /*21*/]), 15f, &Local_344, &(Local_38.f_192), 1f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (bLocal_797 || __LIB_1__::func_992(Global_35, Local_38.f_51, 1) > 2500f)
			{
				if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
				{
					iLocal_692 = 18;
				}
			}
			break;
		case 18:
			if (__LIB_0__::func_232(Global_35, iLocal_841[0], 1) > 6400f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_841[0]))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_80()
{
	if (__LIB_0__::func_139(Local_38.f_162))
	{
		__LIB_1__::func_748(&(Local_38.f_162), 1, 1);
	}
	if (__LIB_0__::func_139(Local_38.f_163))
	{
		__LIB_1__::func_748(&(Local_38.f_163), 1, 1);
	}
	if (__LIB_0__::func_139(Local_38.f_164))
	{
		__LIB_1__::func_748(&(Local_38.f_164), 1, 1);
	}
	if (__LIB_0__::func_139(Local_38.f_165))
	{
		__LIB_1__::func_748(&(Local_38.f_165), 1, 1);
	}
}

void func_82(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (CAM::DOES_CAM_EXIST((*uParam0)[iVar0]))
		{
			CAM::DESTROY_CAM((*uParam0)[iVar0], false);
		}
		iVar0++;
	}
}

void func_99(var uParam0)
{
	(uParam0[0 /*32*/])->f_1 = joaat("RE_BEARTRAP_MALES_01");
	(uParam0[1 /*32*/])->f_1 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	switch (iLocal_268)
	{
		case 6:
		case 10:
			(uParam0[0 /*32*/])->f_3 = -1113893282;
			StringCopy(&((uParam0[0 /*32*/])->f_23), "LOST_HUNTER", 64);
			iLocal_267 = -1376650763;
			break;
		case 1:
		default:
			(uParam0[0 /*32*/])->f_3 = -563885195;
			StringCopy(&((uParam0[0 /*32*/])->f_23), "MOUNTAIN_BEAR_HUNTER", 64);
			iLocal_267 = -758478976;
			break;
	}
	__LIB_3__::func_303(&((uParam0[0 /*32*/])->f_22));
}

void func_101()
{
	iLocal_265 = joaat("S_BEARTRAPANIMATED01X");
	iLocal_266 = joaat("S_INV_COUGARFANGTRINKET01X");
	if (bLocal_23)
	{
		iLocal_15 = joaat("PG_BEARTRAP02X");
	}
}

void func_102()
{
	StringCopy(&Local_270, "beartrap_orbit_cam", 64);
	StringCopy(&(Local_270.f_8), "BEARTRAP_ORBIT_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(&Local_270);
}

void func_105()
{
	vLocal_25 = { Local_38.f_51 };
	__LIB_3__::func_409(&vLocal_25, 1088421888 /* Float: 7f */);
	__LIB_4__::func_2(&iLocal_24, iLocal_15, Local_38.f_51, 0, Local_38.f_51.f_3, 1150681088 /* Float: 1200f */, 0, 1);
}

bool func_106()
{
	if (PROPSET::_IS_PROPSET_VALID(iLocal_24))
	{
		if (bLocal_23)
		{
			if (!func_108(&iLocal_269, iLocal_266))
			{
				return false;
			}
			else
			{
				TASK::_0x78B4567E18B54480(iLocal_269);
			}
		}
		else
		{
			if (!func_108(&iLocal_849, joaat("S_INV_XPRES_RIFLEAMMO01X")))
			{
				return false;
			}
			else
			{
				TASK::_0x78B4567E18B54480(iLocal_849);
			}
			if (!func_108(&iLocal_850, joaat("S_INV_XPRES_PSTAMMO01X")))
			{
				return false;
			}
			else
			{
				TASK::_0x78B4567E18B54480(iLocal_850);
			}
		}
		return true;
	}
	return false;
}

int func_107(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iLocal_24, iVar0, iParam0, false, false);
	if (iVar1 == 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
		return 0;
	}
	iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iParam1, iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar2);
}

bool func_108(int iParam0, int iParam1)
{
	*iParam0 = func_107(iParam1, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	return true;
}

void func_183()
{
	if (iLocal_692 < 12)
	{
		if (iLocal_692 >= 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 187, true);
			}
		}
		if (__LIB_0__::func_665(Global_35, iLocal_841[0], 0, 1) <= 5f)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		}
	}
}

void func_184()
{
	int iVar0;
	if (iLocal_692 < 12)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if ((!ENTITY::IS_ENTITY_DEAD(iVar0) && __LIB_0__::func_665(iLocal_841[0], iVar0, 0, 1) < 8f) && !__LIB_0__::func_163(iVar0, 518218985))
			{
				TASK::TASK_SMART_FLEE_PED(iVar0, iLocal_841[0], 10f, -1, 256, 1f, 0);
			}
		}
	}
}

void func_185()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_232, false))
	{
		if (!bLocal_810)
		{
			if ((!ANIMSCENE::_0x8D81E7824B7753F7(Local_232, "idle", 1) && !bLocal_814) || PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (!bLocal_814)
				{
					__LIB_2__::func_411(&(Local_344[2 /*17*/]), 0, 0);
					bLocal_810 = true;
				}
			}
		}
		else if (!PED::IS_PED_ON_MOUNT(Global_35) && (ANIMSCENE::_0x8D81E7824B7753F7(Local_232, "idle", 1) || bLocal_814))
		{
			if (__LIB_0__::func_665(Global_35, iLocal_841[0], 1, 1) <= 4f)
			{
				__LIB_2__::func_411(&(Local_344[2 /*17*/]), 1, 0);
				bLocal_810 = false;
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_841[0], joaat("COWER_EXIT")))
		{
			__LIB_1__::func_148(&uLocal_917);
			if (!__LIB_0__::func_75(&uLocal_914))
			{
				__LIB_1__::func_283(&uLocal_914, 0);
			}
			else if (__LIB_0__::func_33(&uLocal_914))
			{
				__LIB_2__::func_112(&uLocal_914);
			}
		}
	}
}

void func_186()
{
	if (!bLocal_811)
	{
		return;
	}
	if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_841[0], 1))
	{
		if (__LIB_1__::func_313(&uLocal_944, 1.5f))
		{
			__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[46], 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if ((!bLocal_818 && PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iLocal_841[0], 1000)) && __LIB_2__::func_227(0, 1, iLocal_841[0], 1))
	{
		if (iLocal_268 == 10 || iLocal_268 == 6)
		{
			__LIB_2__::func_478(iLocal_841[0], Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(iLocal_841[0], Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		bLocal_818 = true;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_232))
	{
		if (((((((ANIMSCENE::_0x1F0E401031E20146(Local_232, sLocal_446[13]) || ANIMSCENE::_0x1F0E401031E20146(Local_232, sLocal_446[14])) || ANIMSCENE::_0x1F0E401031E20146(Local_232, sLocal_446[12])) || ANIMSCENE::_0x1F0E401031E20146(Local_232, sLocal_446[15])) || ANIMSCENE::_0x1F0E401031E20146(Local_232, sLocal_446[16])) || ANIMSCENE::_0x1F0E401031E20146(Local_232, sLocal_446[17])) || ANIMSCENE::_0x1F0E401031E20146(Local_232, sLocal_446[18])) || ANIMSCENE::_0x1F0E401031E20146(Local_232, sLocal_446[19]))
		{
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_232, "pedVictim"))
			{
				if (Local_38.f_46)
				{
					func_51();
				}
				else
				{
					func_411();
				}
			}
		}
	}
}

void func_187()
{
	if (bLocal_809 || !bLocal_814)
	{
		return;
	}
	if (!bLocal_808)
	{
		if (((((!PED::_IS_PED_CARRYING(Global_35) && !TASK::_0xEC7E480FF8BD0BED(Global_35)) && !__LIB_3__::func_417(Global_35)) && !__LIB_2__::func_365(Global_35)) && !__LIB_1__::func_869(Global_35)) && !__LIB_2__::func_366(Global_35))
		{
			if (func_416(&uLocal_759, &(Local_38.f_162), "BEAR_INTERACT", 0f, 0f, 0f, iLocal_847, joaat("INPUT_CONTEXT_Y"), 3f, 1, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_841[0]))
				{
					MISC::_0xAB26DEEE120FD3FD(iLocal_841[0], 0);
				}
				bLocal_808 = true;
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_855);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				TASK::TASK_ENTER_ANIM_SCENE(0, Local_232.f_1, "player", sLocal_446[5], 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_855);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_855);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_855);
				__LIB_0__::func_37(&uLocal_914);
			}
		}
		else
		{
			__LIB_1__::func_748(&(Local_38.f_162), 1, 1);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_841[0]))
		{
			MISC::_0xAB26DEEE120FD3FD(iLocal_841[0], 0);
		}
		if (func_230() || !__LIB_0__::func_163(Global_35, 242628503))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_232.f_1, "player", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_232.f_1, "TRAP", iLocal_847, 0);
			ANIMSCENE::START_ANIM_SCENE(Local_232.f_1);
			iLocal_692 = 5;
			bLocal_809 = true;
		}
	}
}

void func_188()
{
	if (__LIB_0__::func_27(iLocal_829, 16384) || bLocal_796)
	{
		return;
	}
	if (__LIB_0__::func_394(Global_35, iLocal_841[1], 1) && __LIB_3__::func_549(iLocal_841[0], &uLocal_886, &iLocal_857, 0))
	{
		if (__LIB_0__::func_27(iLocal_829, 2) || __LIB_0__::func_27(iLocal_829, 4096))
		{
			__LIB_2__::func_122(iLocal_841[0], sLocal_397[22], -1824788778, 0, 1, &(Local_694[0 /*32*/].f_23), 1, 1);
		}
		else
		{
			__LIB_2__::func_122(iLocal_841[0], sLocal_397[21], -1824788778, 0, 1, &(Local_694[0 /*32*/].f_23), 1, 1);
		}
		__LIB_1__::func_683(&iLocal_829, 16384);
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_232, false) && bLocal_799)
		{
			iLocal_831 = 5;
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_232, "recover_bool", true, false);
			bLocal_811 = true;
			__LIB_2__::func_360(&(Local_344[0 /*17*/]), "RE_INTER_POS");
			__LIB_2__::func_411(&(Local_344[0 /*17*/]), 0, 0);
		}
	}
}

void func_189()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_232, false))
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_935))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_232, "whiskey"))
		{
			__LIB_1__::func_148(&uLocal_935);
		}
	}
	else if (__LIB_1__::func_313(&uLocal_935, 0.5f))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_848))
		{
			OBJECT::_0xFFB99FFD17F65889(iLocal_848, 1f);
		}
	}
}

void func_190()
{
	if (__LIB_2__::func_136(iLocal_841[0], 0))
	{
		if (!bLocal_799)
		{
			__LIB_1__::func_471(&(Local_344[0 /*17*/]), 9);
		}
		__LIB_1__::func_471(&(Local_344[1 /*17*/]), 9);
	}
}

void func_191()
{
	int iVar0;
	if (bLocal_799)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_841[0], joaat("SWAP")))
		{
			func_418(1);
			iVar0 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_232, "Tourniquet", false);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
		}
	}
}

void func_192()
{
	bool bVar0;
	if (iLocal_832 > 45)
	{
		return;
	}
	if (PED::_IS_PED_HOGTIED(iLocal_841[0]))
	{
		if (!__LIB_0__::func_75(&uLocal_938))
		{
			__LIB_1__::func_148(&uLocal_938);
			bVar0 = true;
		}
		if (__LIB_2__::func_227(0, 1, iLocal_841[0], 1))
		{
			if (__LIB_1__::func_285(&uLocal_938, 10f) || bVar0)
			{
				if (__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[iLocal_832], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					__LIB_1__::func_148(&uLocal_938);
					iLocal_832++;
				}
			}
		}
	}
}

void func_193()
{
	if (bLocal_824)
	{
		return;
	}
	if ((PED::_0xBA208A8D6399A3AC(iLocal_841[0], 10) || PED::_0xBA208A8D6399A3AC(iLocal_841[0], 9)) || PED::_0xBA208A8D6399A3AC(iLocal_841[0], 11))
	{
		PED::_0x5A1A929C8B729B4A(iLocal_841[0]);
		ENTITY::_0x18FF3110CF47115D(iLocal_841[0], 7, 1);
		bLocal_824 = true;
	}
}

void func_194()
{
	if (!CAM::_0x927B810E43E99932(&Local_270))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 71936841))
		{
			CAM::_0xB8B207C34285E978(&Local_270);
		}
	}
}

void func_195()
{
	if (__LIB_1__::func_313(&uLocal_941, 7f))
	{
		__LIB_2__::func_411(&(Local_344[0 /*17*/]), 0, 0);
	}
}

void func_197()
{
	if (!bLocal_797)
	{
		if (func_419())
		{
			bLocal_797 = true;
			Local_38.f_44 = 1;
		}
	}
	else if (!bLocal_798)
	{
		if (__LIB_2__::func_1(iLocal_841[0], 0, 1))
		{
			if (!bLocal_799)
			{
				if (__LIB_2__::func_227(0, 1, iLocal_841[0], 1))
				{
					if (!bLocal_796)
					{
						__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[8], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_715(1, joaat("HONOR_EVENT_THEFT"), 0, 0, iLocal_841[0], 0, 1065353216 /* Float: 1f */, 0);
					}
					bLocal_798 = true;
				}
			}
		}
		else if (!bLocal_799)
		{
			__LIB_1__::func_715(1, joaat("HONOR_EVENT_THEFT"), 0, 0, iLocal_841[0], 0, 1065353216 /* Float: 1f */, 0);
			bLocal_798 = true;
		}
	}
}

bool func_198()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_232, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_232.f_1, true, false))
	{
		return false;
	}
	return true;
}

void func_199(var uParam0, vector3 vParam1, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, float fParam9)
{
	float fVar0;
	fVar0 = 35f;
	if (__LIB_1__::func_923())
	{
		fVar0 = 30f;
	}
	func_420(iParam6, vParam1 + Vector(2f, 0f, 0f), fParam4, fParam5, fParam9, iParam7, 1073741824 /* Float: 2f */, fParam8, fVar0, 3, 1, 1);
	uParam0->f_170 = 1;
}

void func_201()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 26)
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_232, sLocal_446[iVar0]);
		iVar0++;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_232.f_1, sLocal_446[12]);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_232.f_1, sLocal_446[10]);
}

bool func_202()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_232, sLocal_446[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_232.f_1, sLocal_446[12]))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_232.f_1, sLocal_446[10]))
	{
		return false;
	}
	return true;
}

int func_204(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_422(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

char* func_206(int iParam0)
{
	var uVar0;
	if (iLocal_396 == 0)
	{
		if (iParam0 == 0)
		{
			uVar0 = sLocal_397[4];
		}
		else if (iParam0 == 1)
		{
			uVar0 = sLocal_397[5];
		}
		else if (iParam0 == 2)
		{
			uVar0 = sLocal_397[6];
		}
		else if (iParam0 == 3)
		{
			uVar0 = sLocal_397[6];
		}
	}
	return uVar0;
}

void func_213()
{
	__LIB_3__::func_157(&(Local_344[0 /*17*/]), "RE_INTER_POS", sLocal_397[23], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_344[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_397[25], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_344[2 /*17*/]), "BEAR_INTERACT", 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	__LIB_1__::func_471(&(Local_344[2 /*17*/]), 20);
	__LIB_2__::func_411(&(Local_344[0 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_344[1 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_344[2 /*17*/]), 0, 0);
	__LIB_1__::func_471(&(Local_344[2 /*17*/]), 5);
}

void func_214()
{
	if (bLocal_819)
	{
		return;
	}
	if (bLocal_812)
	{
		__LIB_3__::func_609(7, 1);
	}
	if (__LIB_2__::func_1(iLocal_841[0], 0, 1))
	{
		ENTITY::_0x18FF3110CF47115D(iLocal_841[0], 7, 0);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[9], true);
	}
	bLocal_814 = true;
	if (bLocal_808)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
	}
	__LIB_2__::func_526(&Local_344, 0, 0);
	__LIB_3__::func_158(&(Local_344[2 /*17*/]), 1);
	iLocal_692 = 8;
}

void func_215(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_841[0]) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_841[0], Local_232))
	{
		return;
	}
	if (__LIB_0__::func_75(uParam0) && !__LIB_0__::func_33(uParam0))
	{
		if (__LIB_2__::func_227(0, 1, iLocal_841[0], 1))
		{
			switch (iLocal_827)
			{
				case 0:
					if (iLocal_396 == 0)
					{
						if (__LIB_0__::func_265(uParam0) >= 14f)
						{
							__LIB_2__::func_478(iLocal_841[0], Global_35, func_206(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_148(uParam0);
							iLocal_827++;
						}
					}
					else
					{
						iLocal_827++;
					}
					break;
				case 1:
					if (iLocal_396 == 0)
					{
						if (__LIB_0__::func_265(uParam0) >= 18f)
						{
							__LIB_2__::func_478(iLocal_841[0], Global_35, func_206(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_827++;
						}
					}
					else
					{
						iLocal_827++;
					}
					break;
			}
		}
	}
}

void func_216()
{
	bool bVar0;
	if (bLocal_809)
	{
		return;
	}
	bVar0 = func_222();
	if (!bLocal_817)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_232, "idle", 1))
		{
			if ((((__LIB_0__::func_665(Global_35, iLocal_841[0], 1, 1) <= 4f && !PED::IS_PED_ON_MOUNT(Global_35)) && !PED::_IS_PED_CARRYING(Global_35)) && !TASK::_0xEC7E480FF8BD0BED(Global_35)) && !__LIB_3__::func_417(Global_35))
			{
				__LIB_2__::func_411(&(Local_344[2 /*17*/]), 1, 0);
				bLocal_810 = false;
			}
			bLocal_817 = true;
			__LIB_2__::func_451(&(Local_301[0 /*21*/]), 0);
		}
	}
	else if ((((__LIB_0__::func_665(Global_35, iLocal_841[0], 1, 1) > 4f || PED::IS_PED_ON_MOUNT(Global_35)) || PED::_IS_PED_CARRYING(Global_35)) || TASK::_0xEC7E480FF8BD0BED(Global_35)) || __LIB_3__::func_417(Global_35))
	{
		if (__LIB_2__::func_466(&(Local_344[2 /*17*/]), 1, 0))
		{
			__LIB_2__::func_411(&(Local_344[2 /*17*/]), 0, 0);
			bLocal_810 = true;
		}
	}
	else if (!__LIB_2__::func_466(&(Local_344[2 /*17*/]), 1, 0))
	{
		__LIB_2__::func_411(&(Local_344[2 /*17*/]), 1, 0);
		bLocal_810 = false;
	}
	if (!bLocal_808)
	{
		if (bVar0)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			bLocal_808 = true;
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_855);
			TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			TASK::TASK_ENTER_ANIM_SCENE(0, Local_232, "player", sLocal_446[5], 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_855);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_855);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_855);
			__LIB_3__::func_158(&(Local_344[2 /*17*/]), 1);
			__LIB_0__::func_37(&uLocal_914);
			bLocal_819 = true;
		}
	}
	else if (func_230() || !__LIB_0__::func_163(Global_35, 242628503))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_232, "player", Global_35, 0);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[5], true);
		bLocal_809 = true;
	}
}

void func_218()
{
	PAD::SET_PAD_SHAKE(0, 500, 256);
	__LIB_0__::func_325(&(uLocal_844[0]));
}

void func_219()
{
	if (__LIB_1__::func_707(joaat("CONSUMABLE_WHISKEY"), 1, 0))
	{
		__LIB_3__::func_157(&(Local_344[0 /*17*/]), "BEAR_GIVE_WHISKEY", sLocal_397[29], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_2__::func_411(&(Local_344[0 /*17*/]), 0, 0);
		__LIB_1__::func_471(&(Local_344[0 /*17*/]), 20);
	}
	else
	{
		__LIB_2__::func_411(&(Local_344[0 /*17*/]), 0, 0);
	}
	__LIB_3__::func_157(&(Local_344[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_397[27], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_344[1 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_344[1 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_344[2 /*17*/]), 0, 0);
}

void func_220()
{
	bLocal_796 = true;
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[10], true);
	iLocal_692 = 9;
}

void func_221()
{
	switch (iLocal_473)
	{
		case 0:
			iLocal_473 = 1;
			break;
		case 1:
			if (bLocal_814)
			{
				func_436();
			}
			else
			{
				func_437();
			}
			break;
		case 2:
			bLocal_796 = true;
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			return;
		case 3:
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			return;
	}
}

int func_222()
{
	int iVar0;
	if ((bLocal_817 && !bLocal_800) && !bLocal_799)
	{
		if ((PED::_IS_PED_CARRYING(Global_35) || TASK::_0xEC7E480FF8BD0BED(Global_35)) || __LIB_3__::func_417(Global_35))
		{
			__LIB_1__::func_471(&(Local_344[2 /*17*/]), 9);
		}
		iVar0 = func_204(&(iLocal_841[0]), &(Local_301[0 /*21*/]), 30f, &Local_344, &(Local_38.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(2, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	else
	{
		iVar0 = func_204(&(iLocal_841[0]), &(Local_301[0 /*21*/]), 30f, &Local_344, &(Local_38.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	if (iVar0 == 0)
	{
		__LIB_1__::func_683(&iLocal_829, 65536);
		__LIB_2__::func_411(&(Local_344[2 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_344[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_344[1 /*17*/]), 0, 0);
		__LIB_0__::func_37(&uLocal_917);
		iLocal_692 = 6;
	}
	else if (iVar0 == 1)
	{
		__LIB_1__::func_683(&iLocal_829, 32768);
		__LIB_2__::func_411(&(Local_344[2 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_344[1 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_344[0 /*17*/]), 0, 0);
		__LIB_0__::func_37(&uLocal_917);
		iLocal_692 = 6;
	}
	else if (iVar0 == 2)
	{
		__LIB_2__::func_411(&(Local_344[2 /*17*/]), 0, 0);
		return 1;
	}
	return 0;
}

void func_223(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			if (__LIB_0__::func_27(iLocal_829, 65536) && !__LIB_0__::func_27(iLocal_829, 262144))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[21], true);
				__LIB_1__::func_683(&iLocal_829, 262144);
			}
			else if (__LIB_0__::func_27(iLocal_829, 32768) && !__LIB_0__::func_27(iLocal_829, 131072))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[20], true);
				__LIB_1__::func_683(&iLocal_829, 131072);
			}
			break;
		case 2:
			if (__LIB_0__::func_27(iLocal_829, 65536) && !__LIB_0__::func_27(iLocal_829, 262144))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[25], true);
				__LIB_1__::func_683(&iLocal_829, 262144);
			}
			else if (__LIB_0__::func_27(iLocal_829, 32768) && !__LIB_0__::func_27(iLocal_829, 131072))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[24], true);
				__LIB_1__::func_683(&iLocal_829, 131072);
			}
			break;
		case 0:
			if (__LIB_0__::func_27(iLocal_829, 65536) && !__LIB_0__::func_27(iLocal_829, 262144))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[23], true);
				__LIB_1__::func_683(&iLocal_829, 262144);
			}
			else if (__LIB_0__::func_27(iLocal_829, 32768) && !__LIB_0__::func_27(iLocal_829, 131072))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_232, sLocal_446[22], true);
				__LIB_1__::func_683(&iLocal_829, 131072);
			}
			break;
	}
}

void func_224()
{
	if (!bLocal_812)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_841[0]) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_841[0], -1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_841[0], 2142373243))
		{
			if (bLocal_819)
			{
				__LIB_1__::func_715(2, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, iLocal_841[0], 0, 1065353216 /* Float: 1f */, 0);
			}
			else if (__LIB_0__::func_232(Global_35, iLocal_841[0], 1) < 225f || PED::IS_TRACKED_PED_VISIBLE(iLocal_841[0]))
			{
				__LIB_1__::func_715(4, 0, 0, "HONOR_EVENT_WATCHED_DEATH", iLocal_841[0], 0, 1065353216 /* Float: 1f */, 0);
			}
		}
	}
}

void func_225()
{
	if (func_204(&(iLocal_841[0]), &(Local_301[0 /*21*/]), 15f, &Local_344, &(Local_38.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0) == 0)
	{
		__LIB_2__::func_478(Global_35, iLocal_841[0], "ROUGH_TRAVELLER_ESCALATE_POS", 0, -1082130432 /* Float: -1f */, 5, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_1__::func_148(&uLocal_944);
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(Local_232, "cower_recover_l_loop", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_232, "cower_recover_r_loop", 1))
	{
		if (!bLocal_820)
		{
			__LIB_1__::func_715(2, joaat("HONOR_EVENT_SCARE"), 0, 0, iLocal_841[0], 0, 1065353216 /* Float: 1f */, 0);
			bLocal_820 = true;
		}
		if (!bLocal_807)
		{
			if (!__LIB_0__::func_75(&uLocal_920))
			{
				__LIB_1__::func_148(&uLocal_920);
			}
		}
		else if (__LIB_0__::func_75(&uLocal_920))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_232, "recover_cower_l_bool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_232, "recover_cower_r_bool", false, false);
			__LIB_0__::func_37(&uLocal_920);
		}
		if (!bLocal_807)
		{
			if (__LIB_1__::func_313(&uLocal_920, 4f))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_232, "recover_cower_l_bool", true, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_232, "recover_cower_r_bool", true, false);
			}
		}
	}
}

void func_226()
{
	if (ANIMSCENE::_0x8D81E7824B7753F7(Local_232, "cower_l_loop", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_232, "cower_r_loop", 1))
	{
		if (!bLocal_820)
		{
			__LIB_1__::func_715(2, joaat("HONOR_EVENT_SCARE"), 0, 0, iLocal_841[0], 0, 1065353216 /* Float: 1f */, 0);
			bLocal_820 = true;
		}
		if (!bLocal_807)
		{
			if (!__LIB_0__::func_75(&uLocal_920))
			{
				__LIB_1__::func_148(&uLocal_920);
			}
		}
		else if (__LIB_0__::func_75(&uLocal_920))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_232, "cower_l_bool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_232, "cower_r_bool", false, false);
			__LIB_0__::func_37(&uLocal_920);
		}
		if (!bLocal_807)
		{
			if (__LIB_1__::func_313(&uLocal_920, 4f))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_232, "cower_l_bool", true, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_232, "cower_r_bool", true, false);
				__LIB_1__::func_148(&uLocal_917);
				iLocal_692 = 3;
			}
		}
	}
}

void func_227()
{
	int iVar0;
	if ((((PED::IS_PED_ON_MOUNT(Global_35) || PED::_IS_PED_CARRYING(Global_35)) || TASK::_0xEC7E480FF8BD0BED(Global_35)) || __LIB_3__::func_417(Global_35)) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		__LIB_1__::func_471(&(Local_344[0 /*17*/]), 9);
	}
	iVar0 = func_204(&(iLocal_841[0]), &(Local_301[0 /*21*/]), 15f, &Local_344, &(Local_38.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iVar0 == 0)
	{
		if (!bLocal_821)
		{
			__LIB_1__::func_683(&iLocal_829, 2097152);
			__LIB_2__::func_411(&(Local_344[1 /*17*/]), 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			bLocal_808 = true;
			func_438();
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_855);
			TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			TASK::TASK_ENTER_ANIM_SCENE(0, Local_232, "player", sLocal_961, 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_855);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_855);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_855);
			iLocal_692 = 14;
		}
		else
		{
			bLocal_822 = true;
		}
	}
	else if (iVar0 == 1)
	{
		__LIB_1__::func_683(&iLocal_829, 524288);
		__LIB_2__::func_411(&(Local_344[1 /*17*/]), 0, 0);
		if (!__LIB_0__::func_27(iLocal_829, 2097152) && __LIB_1__::func_707(joaat("CONSUMABLE_WHISKEY"), 1, 0))
		{
			__LIB_2__::func_411(&(Local_344[0 /*17*/]), 1, 0);
		}
		else
		{
			__LIB_2__::func_411(&(Local_344[0 /*17*/]), 0, 0);
		}
	}
	if (__LIB_0__::func_27(iLocal_829, 524288) && !__LIB_0__::func_27(iLocal_829, 1048576))
	{
		if (__LIB_2__::func_227(-3f, 1, 0, 0))
		{
			if (__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[28], 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
			{
				__LIB_1__::func_683(&iLocal_829, 1048576);
			}
		}
	}
}

bool func_228(int iParam0, int* iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	if (func_439(iParam0, iParam1, iParam2, iParam3, uParam4))
	{
		return true;
	}
	else if (*iParam3 > 2 && uParam5->f_44 == 0)
	{
		uParam5->f_44 = 1;
	}
	return false;
}

bool func_230()
{
	if (__LIB_0__::func_94(Global_35, vLocal_956, 0) <= 0.125f && MISC::ABSF((ENTITY::GET_ENTITY_HEADING(Global_35) - fLocal_840)) < 5f)
	{
		return true;
	}
	return false;
}

void func_235()
{
	if (bLocal_797)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_841[0], iLocal_17[2]))
		{
			__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[2], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_841[0], iLocal_17[3]))
		{
			__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[3], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	else
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_841[0], iLocal_17[0]))
		{
			__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[0], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_841[0], iLocal_17[1]))
		{
			__LIB_2__::func_478(iLocal_841[0], Global_35, sLocal_397[1], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

void func_411()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (__LIB_2__::func_1(iLocal_841[1], 0, 1))
	{
		if (__LIB_0__::func_27(iLocal_829, 2) || __LIB_0__::func_27(iLocal_829, 4096))
		{
			TASK::TASK_MOUNT_ANIMAL(0, iLocal_841[1], -1, -1, 1f, 8388608, 0, 0);
		}
		else
		{
			TASK::TASK_MOUNT_ANIMAL(0, iLocal_841[1], -1, -1, 1f, 1, 0, 0);
		}
	}
	TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1.75f, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_841[0], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	PED::SET_PED_CONFIG_FLAG(iLocal_841[0], 430, false);
}

bool func_416(var uParam0, var uParam1, char* sParam2, vector3 vParam3, int iParam6, int iParam7, float fParam8, float fParam9, int iParam10)
{
	switch (*uParam0)
	{
		case 0:
			if (!__LIB_0__::func_139(*uParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam6))
				{
					*uParam1 = __LIB_3__::func_511(sParam2, iParam7, iParam6, uParam0->f_1, fParam9, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					__LIB_2__::func_450(*uParam1, fParam8, 1);
				}
				else if (iParam10 != 0)
				{
					*uParam1 = __LIB_3__::func_512(sParam2, iParam7, iParam10, uParam0->f_1, fParam9, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
				else
				{
					*uParam1 = __LIB_1__::func_282(sParam2, iParam7, vParam3, fParam8, uParam0->f_1, fParam9, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
				if (uParam0->f_4 != 0)
				{
					uParam0->f_6 = __LIB_0__::func_776(uParam0->f_4);
					if (__LIB_1__::func_614(uParam0->f_4, 0, 0) < uParam0->f_5)
					{
						__LIB_1__::func_221(*uParam1, 0, 1);
					}
				}
				if (uParam0->f_7 != 0f)
				{
					__LIB_1__::func_483(*uParam1, sParam2, BUILTIN::CEIL(MISC::ABSF(uParam0->f_7)), 1);
				}
				else if (uParam0->f_6 != 0)
				{
					__LIB_5__::func_776(*uParam1, sParam2, uParam0->f_6, 1);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
				{
				}
				return false;
			}
			if (uParam0->f_7 != 0f)
			{
				if (BUILTIN::CEIL(MISC::ABSF(uParam0->f_7)) > __LIB_0__::func_492(1))
				{
					__LIB_1__::func_221(*uParam1, 0, 1);
				}
			}
			if (uParam0->f_3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iParam6))
				{
					if (__LIB_0__::func_139(*uParam1))
					{
						__LIB_1__::func_748(uParam1, 1, 1);
						return false;
					}
				}
			}
			if (__LIB_1__::func_732(*uParam1, 1))
			{
				__LIB_1__::func_748(uParam1, 1, 1);
				*uParam0 = 1;
			}
			break;
		case 1:
			if (uParam0->f_8)
			{
				if (func_580(&(uParam0->f_9), &(uParam0->f_10)))
				{
					func_581(uParam0);
					*uParam0 = 2;
				}
			}
			else
			{
				func_581(uParam0);
				*uParam0 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_418(bool bParam0)
{
	bool bVar0;
	if (!__LIB_4__::func_385(&(iLocal_841[0])))
	{
		bVar0 = true;
	}
	if (bParam0)
	{
		PED::_SET_PED_BODY_COMPONENT(iLocal_841[0], iLocal_267);
	}
	PED::_UPDATE_PED_VARIATION(iLocal_841[0], false, true, true, true, false);
	if (bVar0)
	{
		__LIB_0__::func_169(iLocal_841[0], 0, 1);
	}
}

bool func_419()
{
	int iVar0;
	struct<6> Var1;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0) == -1730772208)
		{
			if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &Var1, 10))
			{
				if (Var1.f_5 == 1)
				{
					if ((Var1.f_1 == iLocal_849 || Var1.f_1 == iLocal_850) || Var1.f_1 == iLocal_269)
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_420(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, var uParam12, var uParam13)
{
	struct<18> Var0;
	int iVar18;
	if (Global_1359489.f_63.f_297 >= 3)
	{
		return;
	}
	iVar18 = 0;
	while (iVar18 < 3)
	{
		if (!Global_1359489.f_63.f_242[iVar18 /*18*/].f_15)
		{
			Var0 = iParam0;
			Var0.f_2 = { vParam1 };
			Var0.f_5 = (fParam4 * fParam4);
			Var0.f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			Var0.f_15 = 1;
			Var0.f_6 = iParam5;
			Var0.f_7 = iParam11;
			Var0.f_8 = 0;
			Var0.f_13 = iParam6;
			Var0.f_14 = fParam7;
			Var0.f_10 = fParam8;
			Var0.f_11 = iParam9;
			Var0.f_12 = iParam10;
			Var0.f_9 = uParam12;
			Var0.f_17 = uParam13;
			Global_1359489.f_63.f_242[iVar18 /*18*/] = { Var0 };
			Global_1359489.f_63.f_297++;
			return;
		}
		iVar18++;
	}
}

int func_422(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (func_584(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_422(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					func_589(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (func_591(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_19__::func_444(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_591(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_589(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

void func_436()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -815394180))
	{
		__LIB_1__::func_148(&uLocal_929);
		bLocal_802 = true;
	}
	if (bLocal_802)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_CONTEXT_A")) && __LIB_0__::func_139(Local_38.f_163))
		{
			iLocal_828++;
			__LIB_1__::func_148(&uLocal_932);
		}
		switch (iLocal_826)
		{
			case 0:
				if (!__LIB_0__::func_139(Local_38.f_163))
				{
					Local_38.f_163 = __LIB_1__::func_746("BEAR_PRY_TRAP", joaat("INPUT_CONTEXT_A"), 9, 0, 0, 10, 4f, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
				uLocal_964 = __LIB_0__::func_45("BEAR_TRAPHELP2", 10000, 0, 0, 0, 1);
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_232.f_1, "FAIL", 1) || __LIB_1__::func_313(&uLocal_929, 4.5f))
				{
					iLocal_473 = 2;
					iLocal_826 = 2;
					func_80();
					bLocal_800 = true;
				}
				if (iLocal_828 >= 1)
				{
					iLocal_826 = 1;
					__LIB_1__::func_148(&uLocal_929);
				}
				break;
			case 1:
				if (__LIB_1__::func_313(&uLocal_929, 3f))
				{
					bLocal_803 = true;
				}
				if (__LIB_4__::func_442(Local_38.f_163, 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_232.f_1, "FAIL", 1))
				{
					if (bLocal_803 || iLocal_828 > 1)
					{
						UIFEED::_0x2F901291EF177B02(uLocal_964, 0);
						func_80();
						iLocal_473 = 2;
						iLocal_826 = 2;
						bLocal_800 = true;
					}
				}
				else if (__LIB_0__::func_567(Local_38.f_163, 1))
				{
					__LIB_0__::func_105(1);
					UIFEED::_0x2F901291EF177B02(uLocal_964, 0);
					func_80();
					iLocal_826 = 2;
					bLocal_801 = true;
				}
				__LIB_13__::func_585();
				break;
			case 2:
				break;
		}
	}
}

void func_437()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -815394180))
	{
		__LIB_1__::func_148(&uLocal_929);
		bLocal_802 = true;
	}
	if (bLocal_802)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_CONTEXT_ACTION")) && __LIB_0__::func_139(Local_38.f_163))
		{
			iLocal_828++;
			__LIB_1__::func_148(&uLocal_932);
		}
		switch (iLocal_826)
		{
			case 0:
				if (!__LIB_0__::func_139(Local_38.f_163))
				{
					Local_38.f_163 = __LIB_1__::func_746("BEAR_PRY_TRAP", joaat("INPUT_CONTEXT_ACTION"), 12, 0, 0, 10, 0.15f, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_17__::func_740(Local_38.f_163, 0.08f, 0.15f, 1f, 1);
				}
				uLocal_964 = __LIB_0__::func_45("BEAR_TRAPHELP2", 10000, 0, 0, 0, 1);
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_232, "FAIL", 1) || __LIB_1__::func_313(&uLocal_929, 4.5f))
				{
					func_619();
				}
				if (iLocal_828 >= 1)
				{
					__LIB_17__::func_740(Local_38.f_163, 0.08f, 0.15f, 1f, 1);
					iLocal_826 = 1;
					__LIB_1__::func_148(&uLocal_929);
				}
				break;
			case 1:
				if (__LIB_1__::func_313(&uLocal_929, 3f))
				{
					bLocal_803 = true;
				}
				if (!bLocal_816 && __LIB_0__::func_486(Local_38.f_163, 1) >= 0.4f)
				{
					__LIB_17__::func_740(Local_38.f_163, 0.08f, 0.3f, 1f, 1);
					bLocal_816 = true;
				}
				if (__LIB_4__::func_442(Local_38.f_163, 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_232, "FAIL", 1))
				{
					if (bLocal_803)
					{
						func_619();
					}
				}
				else if (__LIB_0__::func_567(Local_38.f_163, 1))
				{
					__LIB_0__::func_105(1);
					iLocal_826 = 2;
					func_80();
					bLocal_799 = true;
					PED::_0x6569F31A01B4C097(iLocal_841[0], 13, 0);
					__LIB_1__::func_991(iLocal_841[0], 0);
					PED::_0xD355E2F1BB41087E(iLocal_841[0], __LIB_2__::func_93(&(Local_38.f_5)));
					MISC::_0xE98D55C5983F2509(iLocal_841[0]);
					UIFEED::_0x2F901291EF177B02(uLocal_964, 0);
					EVENT::REMOVE_SHOCKING_EVENT(iLocal_959);
					__LIB_3__::func_609(7, 3);
					PED::_0x5A1A929C8B729B4A(iLocal_841[0]);
					ENTITY::_0x18FF3110CF47115D(iLocal_841[0], 7, 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_841[0], 233, true);
					__LIB_1__::func_696(29);
					__LIB_1__::func_715(13, 0, 0, "HONOR_EVENT_STRANGER_HELPED", iLocal_841[0], 0, 1065353216 /* Float: 1f */, 0);
				}
				__LIB_13__::func_585();
				break;
			case 2:
				break;
		}
	}
}

void func_438()
{
	switch (__LIB_3__::func_112(iLocal_841[0], Global_35, 1060437492 /* Float: 0.707f */))
	{
		case 0:
			switch (__LIB_3__::func_112(iLocal_841[0], Global_35, 1f))
			{
				case 3:
					sLocal_961 = sLocal_446[16];
					break;
				case 2:
					sLocal_961 = sLocal_446[17];
					break;
			}
			break;
		case 3:
			sLocal_961 = sLocal_446[18];
			break;
		case 2:
			sLocal_961 = sLocal_446[19];
			break;
		case 1:
			switch (__LIB_3__::func_112(iLocal_841[0], Global_35, 1f))
			{
				case 3:
					sLocal_961 = sLocal_446[18];
					break;
				case 2:
					sLocal_961 = sLocal_446[15];
					break;
			}
			break;
	}
}

bool func_439(int iParam0, int* iParam1, int iParam2, int iParam3, var uParam4)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return true;
	}
	else if (!__LIB_2__::func_1(iParam2, 0, 1))
	{
		return true;
	}
	switch (*iParam3)
	{
		case 0:
			uParam4->f_183 = __LIB_0__::func_665(iParam0, iParam2, 0, 1);
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam2, -1, 0, 51, 0);
			if (!(__LIB_1__::func_472(iParam0, uParam4->f_188, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_0__::func_665(iParam0, iParam2, 1, 1) < 2f) && !uParam4->f_79)
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iParam0, iParam2, 0f, 6f, 0.5f, uParam4->f_212, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
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
			*iParam3 = 1;
			break;
		case 1:
			if (__LIB_0__::func_665(iParam0, iParam2, 0, 1) > (uParam4->f_183 + uParam4->f_1))
			{
				TASK::TASK_SMART_FLEE_PED(iParam0, iParam2, 1000f, -1, 0, 3f, 0);
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
					*iParam3 = 2;
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
					__LIB_3__::func_265(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_34), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					func_627(uParam4);
					if (uParam4->f_194 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_204)))
					{
						*iParam3 = 4;
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_42)))
					{
						*iParam3 = 3;
					}
					else
					{
						*iParam3 = 5;
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
				__LIB_3__::func_265(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_42), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
				*iParam3 = 5;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182))
			{
				if (func_628(&(uParam4->f_203), &(uParam4->f_204), 0f, 0f, 0f, iParam0, joaat("INPUT_CONTEXT_B"), 10f, 0f, 0, 1, 0, 0, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					MemCopy(&(uParam4->f_54), {uParam4->f_195}, 8);
					*iParam3 = 5;
				}
				else if ((MISC::GET_GAME_TIMER() - *uParam4) > 18000)
				{
					__LIB_1__::func_748(&(uParam4->f_203), 1, 1);
					uParam4->f_194 = 0;
					*iParam3 = 6;
				}
			}
			break;
		case 5:
			if ((__LIB_2__::func_227(uParam4->f_187, 1, iParam0, uParam4->f_182) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0))
			{
				if (!MISC::IS_STRING_NULL(&(uParam4->f_54)))
				{
					*uParam4 = MISC::GET_GAME_TIMER();
					__LIB_3__::func_265(uParam4->f_179, &(uParam4->f_81), iParam2, iParam0, &(uParam4->f_54), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					*iParam3 = 6;
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
					*iParam3 = 6;
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
				*iParam3 = 7;
				return true;
			}
			break;
		case 7:
			return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		TASK::TASK_SMART_FLEE_PED(iParam0, Global_35, 1000f, -1, 0, 3f, 0);
		return true;
	}
	return false;
}

bool func_580(var uParam0, var uParam1)
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	vector3 vVar5;
	float fVar8;
	switch (*uParam0)
	{
		case 0:
			*uParam1 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
			CAM::SET_CAM_FOV(*uParam1, uParam1->f_11);
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1))
			{
				*uParam1 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				CAM::ATTACH_CAM_TO_ENTITY(*uParam1, uParam1->f_1, uParam1->f_8, true);
				CAM::POINT_CAM_AT_ENTITY(*uParam1, uParam1->f_1, uParam1->f_12, true);
				vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_2) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0.x, vVar0.y, (vVar0.z + 3f), &uVar3, false);
				vVar0.f_2 = uVar3;
				vVar5 = { vVar0 };
				fVar8 = ((ENTITY::GET_ENTITY_HEADING(uParam1->f_1) + 180f) + uParam1->f_23);
			}
			else
			{
				CAM::SET_CAM_COORD(*uParam1, uParam1->f_8);
				CAM::SET_CAM_ROT(*uParam1, uParam1->f_12, 2);
				vVar5 = { uParam1->f_2 };
				fVar8 = uParam1->f_5.f_2;
			}
			CAM::SET_CAM_FOV(*uParam1, uParam1->f_11);
			if (uParam1->f_24)
			{
				iVar4 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam1->f_17, 4, 0, false, true);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar4, vVar0, 0f, 0f, (ENTITY::GET_ENTITY_HEADING(uParam1->f_1) + 180f), 2);
				WEAPON::SET_CURRENT_PED_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1), joaat("WEAPON_UNARMED"), true, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar4, "target", ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1), 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar4, "player", Global_35, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(iVar4);
			}
			else
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vVar5, fVar8, true, false, true);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					TASK::TASK_PLAY_ANIM(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1), uParam1->f_17, uParam1->f_16, 1000f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				}
				TASK::TASK_PLAY_ANIM(Global_35, uParam1->f_17, uParam1->f_15, 1000f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				PED::_0x2208438012482A1A(Global_35, true, false);
			}
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			__LIB_1__::func_148(&(uParam1->f_19));
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
			{
				__LIB_2__::func_478(Global_35, Global_35, uParam1->f_18, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			*uParam0 = 1;
			break;
		case 1:
			if (__LIB_1__::func_313(&(uParam1->f_19), uParam1->f_22))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(*uParam1, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				*uParam0 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_581(var uParam0)
{
	if (uParam0->f_7 < 0f)
	{
		__LIB_1__::func_432(BUILTIN::CEIL(MISC::ABSF(uParam0->f_7)), 0, 0, 1, 1);
	}
	else
	{
		__LIB_1__::func_616(BUILTIN::CEIL(MISC::ABSF(uParam0->f_7)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	}
	if (uParam0->f_4 != 0 && uParam0->f_35)
	{
		func_688(uParam0->f_4, uParam0->f_5, 0, -142743235, 0);
	}
}

bool func_584(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_2__::func_523(iParam1, uParam2, 0);
		iVar5 = __LIB_19__::func_150(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_2__::func_388(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*uParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_589(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			__LIB_19__::func_151(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_591(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_75(&(iParam1->f_13)))
	{
		fVar12 = __LIB_0__::func_265(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_19__::func_152(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_480(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_2__::func_526(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_2__::func_523(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_1__::func_148(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_2__::func_526(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

void func_619()
{
	iLocal_473 = 2;
	iLocal_826 = 2;
	func_80();
	bLocal_800 = true;
	MISC::_0xE98D55C5983F2509(iLocal_841[0]);
	UIFEED::_0x2F901291EF177B02(uLocal_964, 0);
	ENTITY::_0x18FF3110CF47115D(iLocal_841[0], 7, 0);
	__LIB_3__::func_609(7, 2);
}

void func_627(var uParam0)
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
		func_728(uParam0->f_74, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

bool func_628(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;
	if (!__LIB_0__::func_139(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = __LIB_3__::func_511(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0, 0);
			__LIB_2__::func_450(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = __LIB_3__::func_512(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		else
		{
			if (__LIB_0__::func_86(vParam2))
			{
				return false;
			}
			*uParam0 = __LIB_1__::func_282(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			__LIB_1__::func_483(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > __LIB_0__::func_492(1))
			{
				__LIB_1__::func_221(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			__LIB_1__::func_382(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (__LIB_0__::func_572(*uParam0, 0))
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				__LIB_1__::func_221(*uParam0, 0, 1);
			}
		}
		else if (!PED::_IS_PED_CARRYING(Global_35))
		{
			__LIB_1__::func_221(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > __LIB_0__::func_492(1))
		{
			__LIB_1__::func_221(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (__LIB_0__::func_139(*uParam0))
			{
				__LIB_1__::func_748(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && __LIB_1__::func_732(*uParam0, 1)) || (bParam17 && __LIB_0__::func_567(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				__LIB_1__::func_432(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				__LIB_1__::func_616(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
		}
		__LIB_1__::func_748(uParam0, 1, 1);
		return true;
	}
	return false;
}

int func_688(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
	iVar3 = __LIB_0__::func_937(iParam0, 1);
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
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) < 0)
		{
			func_688(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
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
	func_772(iParam0, iParam1);
	return 1;
}

int func_728(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
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
				func_728(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_19__::func_402(28);
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
			if (!__LIB_1__::func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
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
			func_831(iParam0);
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
			func_833(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_4__::func_130(iParam0, 0, 0, 0);
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
						func_728(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_728(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_728(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_728(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_728(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_728(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_728(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_19__::func_402(24);
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
					func_728(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_728(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_19__::func_542(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_19__::func_637(iParam0);
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
				func_728(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_772(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			func_882(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_4__::func_130(iParam0, iParam1, 1, 0);
		}
	}
}

void func_831(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			__LIB_3__::func_428(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			func_950(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_3__::func_428(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_3__::func_428(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_3__::func_428(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_3__::func_428(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_833(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_1__::func_154(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				__LIB_1__::func_240(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				__LIB_1__::func_240(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				__LIB_1__::func_240(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				__LIB_1__::func_240(400, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 412399755))
		{
			func_951(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				__LIB_1__::func_240(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				__LIB_1__::func_240(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				__LIB_1__::func_240(401, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 709057512))
		{
			func_951(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				__LIB_1__::func_240(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				__LIB_1__::func_240(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				__LIB_1__::func_240(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				__LIB_1__::func_240(398, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1478961327))
		{
			func_951(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_1__::func_696(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				__LIB_1__::func_240(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				__LIB_1__::func_240(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				__LIB_1__::func_240(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				__LIB_1__::func_240(406, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1238404098))
		{
			func_951(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				__LIB_1__::func_240(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				__LIB_1__::func_240(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				__LIB_1__::func_240(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				__LIB_1__::func_240(403, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1160548794))
		{
			func_951(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_882(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_154(43))
		{
			if (__LIB_0__::func_192(iParam0, 412399755))
			{
				func_951(joaat("EXOTIC_STAGE_01"));
				if (__LIB_0__::func_944() == 0)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (__LIB_1__::func_154(44))
		{
			if (__LIB_0__::func_192(iParam0, 709057512))
			{
				func_951(joaat("EXOTIC_STAGE_02"));
				if (__LIB_0__::func_944() == 1)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (__LIB_0__::func_192(iParam0, -1478961327))
			{
				func_951(joaat("EXOTIC_STAGE_03"));
				if (__LIB_0__::func_944() == 2)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (__LIB_0__::func_192(iParam0, -1238404098))
			{
				func_951(joaat("EXOTIC_STAGE_04"));
				if (__LIB_0__::func_944() == 3)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (__LIB_0__::func_192(iParam0, 1160548794))
			{
				func_951(joaat("EXOTIC_STAGE_05"));
				if (__LIB_0__::func_944() == 4)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_950(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			__LIB_0__::func_803(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case 2016141805:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_803(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case 1010885152:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_803(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case -502324015:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_803(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			__LIB_0__::func_804(-538889627);
			__LIB_0__::func_804(-538880323);
			__LIB_0__::func_804(-1056767524);
			__LIB_0__::func_803(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			__LIB_1__::func_73();
			__LIB_0__::func_803(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			__LIB_1__::func_74();
			__LIB_0__::func_803(iParam0);
			break;
		case 2019386373:
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(2019386373);
			break;
		case -664252410:
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(-664252410);
			break;
		case 2109952320:
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_803(2109952320);
			break;
		case -1674179981:
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1674179981);
			break;
		case -1835851517:
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1835851517);
			break;
		case -1838352012:
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_803(-1838352012);
			break;
		case -1717960576:
			__LIB_0__::func_804(210001842);
			__LIB_0__::func_803(-1717960576);
			break;
		case 210001842:
			__LIB_0__::func_804(-1717960576);
			__LIB_0__::func_803(210001842);
			break;
		case -150493654:
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-150493654);
			break;
		case -1271608261:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-1271608261);
			break;
		case 1846061697:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(1846061697);
			break;
		case -1145519186:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_803(-1145519186);
			break;
		case 1766284049:
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(1766284049);
			break;
		case 280705402:
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(280705402);
			break;
		case 1926308480:
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_803(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				__LIB_0__::func_804(439465264);
				__LIB_0__::func_803(1609506757);
			}
			else
			{
				__LIB_0__::func_804(1609506757);
				__LIB_0__::func_804(439465264);
			}
			break;
		case 439465264:
			if (__LIB_0__::func_898(1609506757))
			{
				if (bParam1)
				{
					__LIB_0__::func_803(439465264);
				}
				else
				{
					__LIB_0__::func_804(439465264);
				}
			}
			break;
		case 1822001510:
			__LIB_0__::func_804(-1612662716);
			__LIB_0__::func_803(1822001510);
			break;
		case -1612662716:
			__LIB_0__::func_804(1822001510);
			__LIB_0__::func_803(-1612662716);
			break;
		case 1306158345:
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1306158345);
			break;
		case 1952610440:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1952610440);
			break;
		case -223469678:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-223469678);
			break;
		case -404698347:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-404698347);
			Jump @2851; //curOff = 1525
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_803(1517904467);
			Jump @2851; //curOff = 1573
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1376646519);
			Jump @2851; //curOff = 1621
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(931649776);
			Jump @2851; //curOff = 1669
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(-434590080);
			Jump @2851; //curOff = 1717
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1743048395);
			Jump @2851; //curOff = 1765
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_803(449774763);
			Jump @2851; //curOff = 1813
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(-1414537028);
			Jump @2851; //curOff = 1852
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(38162571);
			Jump @2851; //curOff = 1891
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(1350391819);
			Jump @2851; //curOff = 1930
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_803(54073871);
			Jump @2851; //curOff = 1969
			__LIB_0__::func_803(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			Jump @2851; //curOff = 2008
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_803(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			Jump @2851; //curOff = 2047
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_803(52706132);
			__LIB_0__::func_804(-259123672);
			Jump @2851; //curOff = 2086
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_803(-259123672);
			Jump @2851; //curOff = 2125
			__LIB_0__::func_803(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			Jump @2851; //curOff = 2164
			__LIB_0__::func_803(-1925798111);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			Jump @2851; //curOff = 2203
			__LIB_0__::func_803(420709909);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(1703426636);
			Jump @2851; //curOff = 2242
			__LIB_0__::func_803(1703426636);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			Jump @2851; //curOff = 2281
			__LIB_0__::func_803(-1223121209);
			__LIB_0__::func_804(630808005);
			Jump @2851; //curOff = 2302
			__LIB_0__::func_803(630808005);
			__LIB_0__::func_804(-1223121209);
			Jump @2851; //curOff = 2323
			__LIB_0__::func_803(1453909576);
			__LIB_0__::func_804(1643531967);
			Jump @2851; //curOff = 2344
			__LIB_0__::func_803(1643531967);
			__LIB_0__::func_804(1453909576);
			Jump @2851; //curOff = 2365
			__LIB_0__::func_803(0);
			__LIB_0__::func_804(473295046);
			__LIB_0__::func_804(-1738165526);
			Jump @2851; //curOff = 2391
			__LIB_0__::func_803(473295046);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(-1738165526);
			Jump @2851; //curOff = 2417
			__LIB_0__::func_803(-1738165526);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(473295046);
			Jump @2851; //curOff = 2443
			__LIB_0__::func_803(932909855);
			__LIB_0__::func_804(2051822093);
			Jump @2851; //curOff = 2464
			__LIB_0__::func_803(2051822093);
			__LIB_0__::func_804(932909855);
			Jump @2851; //curOff = 2485
			__LIB_0__::func_803(405586984);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			Jump @2851; //curOff = 2524
			__LIB_0__::func_803(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			Jump @2851; //curOff = 2563
			__LIB_0__::func_803(-959357075);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-1311865656);
			Jump @2851; //curOff = 2602
			__LIB_0__::func_803(-1311865656);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(405586984);
			Jump @2851; //curOff = 2641
			if (bParam1)
			{
				__LIB_0__::func_803(-524145696);
			}
			else
			{
				__LIB_0__::func_804(-524145696);
			}
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(282809459);
			Jump @2851; //curOff = 2688
			__LIB_0__::func_803(282809459);
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(-524145696);
			Jump @2851; //curOff = 2718
			__LIB_0__::func_803(1626481264);
			__LIB_0__::func_804(-524145696);
			__LIB_0__::func_804(282809459);
			Jump @2851; //curOff = 2748
			if (bParam1)
			{
				__LIB_0__::func_803(885203519);
			}
			else
			{
				__LIB_0__::func_804(885203519);
			}
			Jump @2851; //curOff = 2777
			if (bParam1)
			{
				__LIB_0__::func_803(-1080627546);
			}
			else
			{
				__LIB_0__::func_804(-1080627546);
			}
			Jump @2851; //curOff = 2806
			if (bParam1)
			{
				if (!__LIB_0__::func_898(iParam0))
				{
					__LIB_0__::func_803(iParam0);
				}
			}
			else if (__LIB_0__::func_898(iParam0))
			{
				__LIB_0__::func_804(iParam0);
			}
		}
void func_951(int iParam0)
{
	if (!__LIB_0__::func_448(iParam0))
	{
		__LIB_0__::func_549(__LIB_0__::func_548(iParam0));
	}
}

