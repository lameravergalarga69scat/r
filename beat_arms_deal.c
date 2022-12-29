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
	int iLocal_14 = 0;
	struct<4> Local_15[4];
	char* sLocal_32 = NULL;
	char* sLocal_33 = NULL;
	int iLocal_34 = 0;
	int iLocal_35[4] = { 0, 0, 0, 0 };
	var uLocal_40[4] = { 0, 0, 0, 0 };
	var uLocal_45[4] = { 0, 0, 0, 0 };
	int iLocal_50 = 0;
	struct<193> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_244 = 0;
	struct<32> Local_245[4];
	struct<32> Local_374[4];
	struct<12> Local_503[2];
	struct<5> Local_528 = { -1, -1, -1, 0, 0 } ;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 100;
	var uLocal_538 = -1082130432;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 5;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 15;
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
	struct<2> Local_670[15];
	struct<23> Local_701 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	struct<23> Local_726 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751[4] = { 0, 0, 0, 0 };
	var uLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	int iLocal_759 = 0;
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	int iLocal_763 = 0;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	var uLocal_767 = 0;
	int iLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 1176256512;
	struct<2> Local_772 = { 0, 0 } ;
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
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	char[] cLocal_787[8] = 0;
	int iLocal_788[4] = { 0, 0, 0, 0 };
	bool bLocal_793 = false;
	bool bLocal_794 = false;
	int iLocal_795 = 0;
	int iLocal_796 = 0;
	bool bLocal_797 = false;
	int iLocal_798 = 0;
	bool bLocal_799 = false;
	bool bLocal_800 = false;
	int iLocal_801 = 0;
	bool bLocal_802 = false;
	int iLocal_803 = 0;
	bool bLocal_804 = false;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	var uLocal_817[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_828 = 0f;
	float fLocal_829 = 0f;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	int iLocal_834 = 0;
	float fLocal_835 = 0f;
	int iLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = -1;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 1097859072;
	var uLocal_855 = 1000;
	var uLocal_856 = 1067450368;
	var uLocal_857 = 5000;
	var uLocal_858 = 42;
	var uLocal_859 = 1103626240;
	var uLocal_860 = 1077936128;
	var uLocal_861 = 1106247680;
	var uLocal_862 = 1103101952;
	var uLocal_863 = 1097859072;
	var uLocal_864 = 1103626240;
	int iLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = -1;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 1097859072;
	var uLocal_885 = 1000;
	var uLocal_886 = 1067450368;
	var uLocal_887 = 5000;
	var uLocal_888 = 42;
	var uLocal_889 = 1103626240;
	var uLocal_890 = 1077936128;
	var uLocal_891 = 1106247680;
	var uLocal_892 = 1103101952;
	var uLocal_893 = 1097859072;
	var uLocal_894 = 1103626240;
	var uLocal_895[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
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
	int iLocal_935 = 0;
	struct<75> Local_936[4];
	int iLocal_1237[4] = { 0, 0, 0, 0 };
	var uLocal_1242[4] = { 0, 0, 0, 0 };
	int iLocal_1247 = 0;
	int iLocal_1248 = 0;
	int iLocal_1249 = 0;
	int iLocal_1250 = 0;
	int iLocal_1251 = 0;
	int iLocal_1252 = 0;
	int iLocal_1253 = 0;
	var uLocal_1254[4] = { 0, 0, 0, 0 };
	var uLocal_1259[4] = { 0, 0, 0, 0 };
	var uLocal_1264[4] = { 0, 0, 0, 0 };
	var uLocal_1269[4] = { 0, 0, 0, 0 };
	int iLocal_1274 = 0;
	int iLocal_1275 = 0;
	int iLocal_1276 = 0;
	int iLocal_1277 = 0;
	int iLocal_1278 = 0;
	struct<23> Local_1279[4];
	int iLocal_1372 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_32 = "";
	sLocal_33 = "";
	iLocal_759 = 1;
	cLocal_787 = "ARMS";
	iLocal_808 = joaat("PG_RE_ARMSDEAL01X");
	iLocal_809 = joaat("PG_TEAMSTER_WAGON02X_LIGHTUPGRADE1");
	fLocal_828 = 0f;
	fLocal_835 = 5f;
	iLocal_904 = joaat("WAGON02X");
	iLocal_1278 = 6;
	iLocal_1372 = -1;
	Local_51.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_51.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		__LIB_4__::func_116(&Local_51, 1);
		iLocal_14 = __LIB_3__::func_390(Local_51.f_3, 2, 0);
		func_5(&(Local_51.f_5));
		func_6(&uLocal_867);
		if (iLocal_14 == 1)
		{
			__LIB_3__::func_385(&(Local_51.f_5), 1);
			func_8(&(Local_51.f_5), 500);
			__LIB_2__::func_662(&(Local_51.f_5), 1);
		}
	}
	while (true)
	{
		if (bVar0)
		{
			__LIB_2__::func_265(bVar0, 1360, 0);
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_759)
			{
				case 1:
					if (__LIB_3__::func_631(&Local_51, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_13(&Local_51, &iLocal_785, &iLocal_786);
						Local_51.f_51.f_4 = iLocal_786;
						__LIB_3__::func_455(&Local_51, iLocal_785, 2007);
						func_16();
						iLocal_759 = 0;
					}
					else if (Local_51.f_160)
					{
						func_10();
					}
					break;
				case 0:
					if (func_17())
					{
						PROPSET::_REQUEST_PROPSET_2(joaat("PG_RE_ARMSDEAL01X"));
						iLocal_759 = 3;
					}
					break;
				case 3:
					if (func_18())
					{
						if (func_19())
						{
							__LIB_2__::func_659(&(uLocal_895[0]), Local_51.f_51, 6f, 0, 0);
							__LIB_3__::func_337(&(uLocal_895[1]), Local_51.f_51, 4f);
							__LIB_2__::func_659(&(uLocal_895[2]), func_22(iLocal_785, Local_51.f_51.f_4), 2f, 0, 1);
							switch (iLocal_786)
							{
								case 1:
									__LIB_2__::func_659(&(uLocal_895[3]), 1316.457f, -1631.233f, 65.43966f, 1f, 0, 0);
									__LIB_2__::func_659(&(uLocal_895[4]), 1317.823f, -1627.908f, 65.15807f, 1f, 0, 0);
									__LIB_2__::func_659(&(uLocal_895[5]), 1313.625f, -1631.687f, 65.5304f, 1f, 0, 0);
									__LIB_2__::func_659(&(uLocal_895[6]), 1314.432f, -1630.339f, 65.42619f, 1f, 0, 0);
									__LIB_2__::func_659(&(uLocal_895[7]), 1315.583f, -1625.064f, 65.0082f, 1f, 0, 0);
									break;
								case 4:
									__LIB_2__::func_659(&(uLocal_895[3]), 1408.471f, -1706.774f, 66.32634f, 1f, 0, 0);
									__LIB_2__::func_659(&(uLocal_895[4]), 1397.019f, -1701.414f, 66.21142f, 1f, 0, 0);
									__LIB_2__::func_659(&(uLocal_895[5]), 1403.413f, -1700.891f, 65.93549f, 1f, 0, 0);
									__LIB_2__::func_659(&(uLocal_895[6]), 1379.213f, -1685.438f, 66.61638f, 1f, 0, 0);
									break;
							}
							__LIB_3__::func_400(Local_51.f_51, &Local_503, 0f, 1, 0, -1, 0);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_34))
							{
								if (PROPSET::_HAS_PROPSET_LOADED(iLocal_808))
								{
									PROPSET::_ADD_LIGHT_PROPSET_TO_VEHICLE(iLocal_34, iLocal_809);
								}
								if (iLocal_14 != 1)
								{
									if (PROPSET::_HAS_PROPSET_LOADED(iLocal_808) && PROPSET::_HAS_PROPSET_LOADED_2(joaat("PG_RE_ARMSDEAL01X")))
									{
										PROPSET::_0xD80FAF919A2E56EA(iLocal_34, iLocal_808);
									}
								}
							}
							func_24(iLocal_785, iLocal_786);
							func_25(iLocal_785, iLocal_786);
							func_26();
							func_27();
							iLocal_759 = 4;
						}
					}
					break;
				case 4:
					if ((!func_28(512) && __LIB_3__::func_332(Local_51.f_51, 1) < 30f) && iLocal_758 < 4)
					{
						__LIB_3__::func_652(Local_51.f_51, &iLocal_831, -89429847, 0, 0, 0);
						func_31(512);
					}
					if (__LIB_3__::func_365(&Local_51, &iLocal_35, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_51.f_50 = 1;
						func_10();
					}
					if (func_33())
					{
						iVar1 = 0;
						while (iVar1 < 4)
						{
							if (__LIB_2__::func_1(iLocal_35[iVar1], 0, 0))
							{
								__LIB_3__::func_141(iLocal_35[iVar1], 30f, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[iVar1], false);
							}
							iVar1++;
						}
						Local_51.f_50 = 1;
						func_10();
					}
					if (!func_36(&Local_51, &iLocal_35, iLocal_14, 0, 1, 0, 1, 0))
					{
						func_31(-2147483648);
						func_10();
					}
					break;
			}
			BUILTIN::WAIT(Local_51.f_158);
		}
	}
}

void func_5(int iParam0)
{
	__LIB_4__::func_64(iParam0);
	__LIB_3__::func_385(iParam0, 0);
	__LIB_3__::func_388(iParam0, 0);
	__LIB_3__::func_393(iParam0, 1);
	__LIB_2__::func_180(iParam0, 0);
	func_44(iParam0, 0);
}

void func_6(int iParam0)
{
	__LIB_2__::func_432(iParam0);
	__LIB_2__::func_50(iParam0, 0);
	__LIB_3__::func_386(iParam0, 0);
	__LIB_3__::func_393(iParam0, 0);
	__LIB_3__::func_333(iParam0, 1);
	__LIB_2__::func_613(iParam0, 1);
	func_44(iParam0, 0);
}

void func_8(int iParam0, int iParam1)
{
	iParam0->f_18 = iParam1;
}

void func_10()
{
	int iVar0;
	func_52();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[iVar0]))
		{
			if (!Local_51.f_46 && !func_53(iVar0))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[iVar0], joaat("REL_NO_RELATIONSHIP"));
			}
			if (func_28(524288))
			{
				PED::_0xE737D5F14304A2EC(iLocal_35[iVar0], PLAYER::PLAYER_ID(), 120000);
			}
			PED::_0x24C82EF607105FAA(iLocal_35[iVar0], joaat("AGGRESSIVE"));
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_35[iVar0], 6, true);
			__LIB_2__::func_603(&(iLocal_35[iVar0]), &(Local_936[iVar0 /*75*/]), &(Local_936[iVar0 /*75*/].f_21), 1, 1);
		}
		iVar0++;
	}
	func_55();
	func_56();
	func_57();
	if (bLocal_793)
	{
		func_58(1);
	}
	if (!Local_51.f_44)
	{
		Local_51.f_45 = 0;
	}
	__LIB_3__::func_823(&Local_51, &iLocal_35, &uLocal_40, iLocal_14, iLocal_785, iLocal_786, 0, 1, 0, 1);
	__LIB_3__::func_480(&Local_503);
	func_61(&uLocal_45);
	__LIB_3__::func_334(&uLocal_40);
	__LIB_0__::func_325(&iLocal_831);
	__LIB_0__::func_172(iLocal_834);
	__LIB_4__::func_20(&(Local_772.f_1));
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_2__::func_353(&(uLocal_895[iVar0]), 1);
		iVar0++;
	}
	__LIB_3__::func_437(&Local_528);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_13(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 11;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 11;
			*iParam2 = 1;
			break;
		case 2:
			*iParam1 = 11;
			*iParam2 = 2;
			break;
		case 3:
			*iParam1 = 11;
			*iParam2 = 3;
			break;
		case 4:
			*iParam1 = 11;
			*iParam2 = 4;
			break;
		case 5:
			*iParam1 = 11;
			*iParam2 = 5;
			break;
	}
}

Vector3 func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 85.68f;
				case 1:
					return 0f, 0f, -174.24f;
				case 2:
					return 0f, 0f, 98.64f;
				case 3:
					return 0f, 0f, -97.92f;
				case 4:
					return 0f, 0f, 261.02f;
				case 5:
					return 0f, 0f, 10.08f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_16()
{
	PED::_0x9851DE7AEC10B4E1(Local_51.f_51, fLocal_835, 1, 0);
	__LIB_1__::func_572(Local_51.f_51, fLocal_835, 0, 0, 1, 1, 0);
	if (Local_51.f_161)
	{
		MISC::CLEAR_AREA(Local_51.f_51, 30f, 65536);
		PERSISTENCE::_0x9D16896F0DBE78A2(Local_51.f_51, fLocal_835);
	}
}

bool func_17()
{
	switch (iLocal_757)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_51))
			{
				func_76(iLocal_785);
				__LIB_3__::func_445(&Local_245);
				__LIB_3__::func_445(&Local_374);
				func_78();
				__LIB_3__::func_314(&Local_503);
				func_80();
				func_81();
				func_82();
				STREAMING::REQUEST_MODEL(iLocal_904, false);
				PROPSET::_REQUEST_PROPSET(iLocal_808);
				PROPSET::_REQUEST_PROPSET(iLocal_809);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_83(iLocal_785, iLocal_786)))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(func_83(iLocal_785, iLocal_786));
				}
				iLocal_757 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_756, cLocal_787))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_549))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_503))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_245))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_374))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_904))
			{
				return false;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_528.f_1, true, false))
			{
				return false;
			}
			if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_808))
			{
				return false;
			}
			if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_809))
			{
				return false;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_83(iLocal_785, iLocal_786)))
			{
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_83(iLocal_785, iLocal_786)))
				{
					return false;
				}
			}
			return true;
	}
	return false;
}

bool func_18()
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	switch (iLocal_768)
	{
		case 0:
			iLocal_768 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_467(Local_51.f_51, 0f, &Local_245, &iLocal_35, 0, 0, -1, 1))
			{
				return false;
			}
			iLocal_768 = 4;
			break;
		case 4:
			if (Local_374[2 /*32*/].f_1 == 0 || Local_374[3 /*32*/].f_1 == 0)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			vVar0 = { func_14(iLocal_785, iLocal_786) };
			vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_51.f_51, vVar0.z, 0f, 5.15f, 0f) };
			iLocal_34 = __LIB_3__::func_531(iLocal_904, vVar3, vVar0.z, 1, 1, bVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
			{
				__LIB_3__::func_285(iLocal_34, &Local_51, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_34, 0f);
				VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_34, false);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_34, true);
				__LIB_2__::func_19(iLocal_34);
				if (iLocal_14 == 1)
				{
					AITRANSPORT::_0xB7079F4C72896756(Global_35, iLocal_34, 0, 1, -1);
				}
				if (iLocal_14 == 1)
				{
					__LIB_4__::func_108(&iLocal_34, 3);
				}
				else
				{
					__LIB_4__::func_108(&iLocal_34, 1);
				}
				iLocal_768 = 5;
			}
			break;
		case 5:
			if (!__LIB_3__::func_467(Local_51.f_51, 0f, &Local_374, &uLocal_45, 0, 0, -1, 1))
			{
				return false;
			}
			if (((((ENTITY::DOES_ENTITY_EXIST(iLocal_34) && ENTITY::DOES_ENTITY_EXIST(uLocal_45[2])) && ENTITY::DOES_ENTITY_EXIST(uLocal_45[3])) && !ENTITY::IS_ENTITY_DEAD(iLocal_34)) && !ENTITY::IS_ENTITY_DEAD(uLocal_45[2])) && !ENTITY::IS_ENTITY_DEAD(uLocal_45[3]))
			{
				VEHICLE::_0x316CDB5B6E8F4110(uLocal_45[2], iLocal_34, 0);
				VEHICLE::_0x316CDB5B6E8F4110(uLocal_45[3], iLocal_34, 1);
			}
			iLocal_768 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_19()
{
	int iVar0;
	switch (iLocal_760)
	{
		case 0:
			if (PED::ADD_RELATIONSHIP_GROUP("REL_REAMD_LEMOYNE_RAIDERS", &iLocal_765))
			{
			}
			if (PED::ADD_RELATIONSHIP_GROUP("REL_REAMD_DEALERS", &iLocal_766))
			{
			}
			if (PED::ADD_RELATIONSHIP_GROUP("REL_REAMD_JOINT", &uLocal_767))
			{
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_766, iLocal_765);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_766, joaat("REL_PLAYER_LIKE"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_765, iLocal_766);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_765, joaat("REL_PLAYER_LIKE"));
			__LIB_1__::func_649(&iLocal_760, 1);
			break;
		case 1:
			iVar0 = iLocal_816;
			func_94(iVar0);
			iLocal_816++;
			if (iLocal_816 > 3)
			{
				__LIB_1__::func_649(&iLocal_760, 2);
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_45[0]))
			{
				__LIB_3__::func_141(uLocal_45[0], 1088421888 /* Float: 7f */, 0, 0);
				Local_1279[0 /*23*/].f_1[0] = joaat("MONEY_COINSACK");
				Local_1279[0 /*23*/].f_12[0] = 1;
				Local_1279[0 /*23*/] = 1;
				Local_1279[1 /*23*/].f_1[0] = joaat("AMMO_REVOLVER");
				Local_1279[1 /*23*/].f_12[0] = 1;
				Local_1279[1 /*23*/] = 1;
				ENTITY::_0xA88E215CEB0435C0(uLocal_45[0], &(Local_1279[0 /*23*/]), 205298116, 128, 2, 0);
				ENTITY::_0xA88E215CEB0435C0(uLocal_45[0], &(Local_1279[1 /*23*/]), 205298116, 128, 2, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_45[1]))
			{
				__LIB_3__::func_141(uLocal_45[1], 1088421888 /* Float: 7f */, 0, 0);
				Local_1279[2 /*23*/].f_1[0] = joaat("MONEY_ONE_DOLLAR");
				Local_1279[2 /*23*/].f_12[0] = 2;
				Local_1279[2 /*23*/] = 2;
				Local_1279[3 /*23*/].f_1[0] = joaat("PROVISION_NECKLACE");
				Local_1279[3 /*23*/].f_12[0] = 1;
				Local_1279[3 /*23*/] = 1;
				ENTITY::_0xA88E215CEB0435C0(uLocal_45[1], &(Local_1279[2 /*23*/]), 205298116, 128, 2, 0);
				ENTITY::_0xA88E215CEB0435C0(uLocal_45[1], &(Local_1279[3 /*23*/]), 205298116, 128, 2, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_45[2]))
			{
				__LIB_3__::func_141(uLocal_45[2], 1088421888 /* Float: 7f */, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_45[3]))
			{
				__LIB_3__::func_141(uLocal_45[3], 1088421888 /* Float: 7f */, 0, 0);
			}
			__LIB_2__::func_20(&(Local_51.f_5), uLocal_45[0], 0);
			__LIB_2__::func_20(&(Local_51.f_5), uLocal_45[1], 0);
			__LIB_2__::func_20(&(Local_51.f_5), uLocal_45[2], 0);
			__LIB_2__::func_20(&(Local_51.f_5), uLocal_45[3], 0);
			func_98(uLocal_45[0], func_96(0, iLocal_785, iLocal_786), func_97(0, iLocal_785, iLocal_786), 2, 1073741824 /* Float: 2f */);
			func_98(uLocal_45[1], func_96(1, iLocal_785, iLocal_786), func_97(1, iLocal_785, iLocal_786), 2, 1073741824 /* Float: 2f */);
			func_99(&(uLocal_45[0]), 1);
			func_99(&(uLocal_45[1]), 1);
			__LIB_1__::func_649(&iLocal_760, 3);
			break;
		case 3:
			if (__LIB_2__::func_284(2, 0))
			{
				func_101(-2147483648);
			}
			return true;
	}
	return false;
}

Vector3 func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1843.289f, -382.0404f, 42.29816f;
				case 1:
					return 1315.223f, -1643.497f, 65.99081f;
				case 2:
					return 780.0723f, -904.9696f, 50.11354f;
				case 3:
					return 863.2411f, -535.3668f, 88.32434f;
				case 4:
					return 1388.234f, -1699.7f, 66.7458f;
				case 5:
					return 1567.932f, -1164.354f, 44.73336f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_24(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	__LIB_2__::func_106(&(Local_51.f_51), 50, 10, 0);
	vVar0 = { func_14(iParam0, iParam1) };
	vVar3 = { Local_51.f_51 };
	__LIB_2__::func_106(&vVar3, 50, 10, 0);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_528.f_1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_528.f_1, vVar3, vVar0, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_528.f_1, "dealerA", iLocal_35[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_528.f_1, "dealerb", iLocal_35[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_528.f_1, "confeda", iLocal_35[2], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_528.f_1, "confedb", iLocal_35[3], 0);
		if (iLocal_14 == 1)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_528.f_1, "Cash", Local_503[1 /*12*/].f_8, 0);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_528.f_1, "FLAG_LOOP", false, false);
		ANIMSCENE::START_ANIM_SCENE(Local_528.f_1);
	}
}

void func_25(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_34))
	{
		iVar1 = 12;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (iVar0 != 0 && VEHICLE::DOES_EXTRA_EXIST(iLocal_34, iVar0))
			{
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_34, iVar0, true);
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_503[0 /*12*/].f_8))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_503[0 /*12*/].f_8, iLocal_34, 0, Local_503[0 /*12*/], 0f, 0f, Local_503[0 /*12*/].f_3, true, false, true, false, 2, true, true, false);
		}
	}
}

void func_26()
{
	switch (iLocal_14)
	{
		case 1:
			func_108(&uLocal_817, 1f, 1f, 0f, 1f, 1f, 0.5812f, 0.7438f, 1065353216 /* Float: 1f */, 0.8411f, 1065353216 /* Float: 1f */);
			break;
		case 0:
			func_108(&uLocal_817, 0.1f, 0.603f, 0f, 0.457f, 0.883f, 1f, 1f, 0.899f, 1064514355 /* Float: 0.95f */, 0.788f);
			break;
	}
}

void func_27()
{
	VOLUME::_SET_VOLUME_SCALE(Local_51.f_171, 30f, 30f, 6f);
}

bool func_28(int iParam0)
{
	return __LIB_0__::func_27(iLocal_806, iParam0);
}

void func_31(int iParam0)
{
	if (!func_28(iParam0))
	{
		__LIB_1__::func_683(&iLocal_806, iParam0);
	}
}

bool func_33()
{
	vector3 vVar0;
	int iVar3;
	func_114();
	if (iLocal_758 > 1)
	{
		func_115();
		func_116();
		func_117();
		func_118();
		func_119();
		func_120();
		func_121();
		func_122();
		func_123();
		func_124();
		func_125();
		func_126();
		if (!__LIB_13__::func_805(8))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_34, true, false) };
			if (func_128(iLocal_14, vVar0, &uLocal_832, &uLocal_833))
			{
				func_101(8);
			}
		}
	}
	switch (iLocal_758)
	{
		case 0:
			if (func_129())
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_528.f_1, sLocal_32))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_528.f_1, sLocal_32, true);
					__LIB_1__::func_649(&iLocal_758, 1);
				}
			}
			break;
		case 1:
			if (__LIB_3__::func_647(&Local_51, &uLocal_769, 0.5f, 60f, func_131(iLocal_785, iLocal_786), 1500, 1.25f, 1.25f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 0, 0))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_528.f_1, sLocal_33))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_528.f_1, sLocal_33, true);
				}
				func_133(0);
				func_133(1);
				func_133(2);
				func_133(3);
				func_134(&Local_772, iLocal_785, iLocal_786);
				__LIB_3__::func_388(&(Local_51.f_5), 1);
				__LIB_1__::func_649(&iLocal_758, 2);
			}
			break;
		case 2:
			switch (iLocal_813)
			{
				case 0:
					func_135(&(Local_936[0 /*75*/]), &(Local_936[0 /*75*/].f_21), &(uLocal_1242[0]), 0);
					break;
				case 1:
					func_135(&(Local_936[1 /*75*/]), &(Local_936[1 /*75*/].f_21), &(uLocal_1242[1]), 0);
					break;
				case 2:
					func_135(&(Local_936[2 /*75*/]), &(Local_936[2 /*75*/].f_21), &(uLocal_1242[2]), 0);
					break;
				case 3:
					func_135(&(Local_936[3 /*75*/]), &(Local_936[3 /*75*/].f_21), &(uLocal_1242[3]), 0);
					break;
				default:
					if (iLocal_14 == 1)
					{
						func_136(&(Local_936[1 /*75*/].f_21), iLocal_14, 0, 0);
						func_136(&(Local_936[3 /*75*/].f_21), iLocal_14, 0, 0);
						__LIB_2__::func_451(&(Local_936[1 /*75*/]), 0);
						__LIB_2__::func_451(&(Local_936[3 /*75*/]), 0);
						__LIB_2__::func_526(&(Local_936[1 /*75*/].f_21), 1, 0);
						__LIB_2__::func_526(&(Local_936[3 /*75*/].f_21), 1, 0);
					}
					__LIB_1__::func_649(&iLocal_758, 3);
					break;
			}
			iLocal_813++;
			break;
		case 3:
			func_139();
			func_140();
			func_141();
			func_142();
			func_143();
			if (!__LIB_13__::func_805(256))
			{
				if (func_144())
				{
					func_101(256);
				}
			}
			if (!__LIB_13__::func_805(512))
			{
				if (func_145())
				{
					func_101(256);
				}
			}
			if (iLocal_14 == 1 && func_146())
			{
				__LIB_0__::func_325(&iLocal_831);
				func_147(&(Local_51.f_5));
				__LIB_1__::func_649(&iLocal_758, 9);
			}
			else if (func_28(32))
			{
				func_148();
				__LIB_0__::func_325(&iLocal_831);
				func_31(134217728);
				func_31(268435456);
				func_147(&(Local_51.f_5));
				__LIB_1__::func_649(&iLocal_758, 9);
			}
			else if (__LIB_13__::func_805(256) || __LIB_13__::func_805(512))
			{
				__LIB_0__::func_325(&iLocal_831);
				func_149();
				func_150(iLocal_35[1], (35f + 10f), 0);
				func_150(iLocal_35[2], (35f + 10f), 0);
				func_147(&(Local_51.f_5));
				if (func_151())
				{
					func_148();
				}
				__LIB_1__::func_649(&iLocal_758, 12);
			}
			break;
		case 4:
			if (func_152())
			{
				__LIB_1__::func_649(&iLocal_758, 12);
			}
			break;
		case 7:
			func_153();
			func_154(1);
			if (func_155())
			{
				func_150(iLocal_35[2], (35f + 10f), 0);
				func_150(iLocal_35[3], (35f + 10f), 0);
				func_148();
				func_156();
				__LIB_0__::func_325(&iLocal_831);
				__LIB_1__::func_649(&iLocal_758, 8);
			}
			break;
		case 8:
			func_153();
			if (func_157())
			{
				if (__LIB_0__::func_75(&uLocal_923))
				{
					if (__LIB_0__::func_265(&uLocal_923) > 2f)
					{
						func_31(8388608);
						func_160(2097152, 0);
						func_160(2097152, 1);
						func_161(0, 1);
						func_162(&(Local_51.f_5));
						__LIB_1__::func_649(&iLocal_758, 12);
					}
				}
				else
				{
					__LIB_1__::func_148(&uLocal_923);
				}
			}
			break;
		case 9:
			func_153();
			func_154(1);
			if (func_155())
			{
				func_150(iLocal_35[1], (35f + 10f), 0);
				func_150(iLocal_35[2], (35f + 10f), 0);
				func_148();
				func_156();
				__LIB_0__::func_325(&iLocal_831);
				__LIB_1__::func_649(&iLocal_758, 10);
			}
			break;
		case 10:
			func_153();
			func_154(1);
			if (__LIB_13__::func_805(4096) && !__LIB_13__::func_805(8192))
			{
				if (func_164() || func_157())
				{
					Local_51.f_46 = 1;
					func_101(8192);
					__LIB_1__::func_649(&iLocal_758, 9);
				}
			}
			if (!__LIB_13__::func_805(16384))
			{
				if ((ENTITY::IS_ENTITY_DEAD(iLocal_34) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_34, true, false)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_34))
				{
					iVar3 = 0;
					while (iVar3 < 4)
					{
						if (func_165(1073741824 /* Float: 2f */, iVar3))
						{
							func_160(1073741824 /* Float: 2f */, iVar3);
							if (!PED::IS_PED_DEAD_OR_DYING(iLocal_35[iVar3], true))
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_35[iVar3], 100f, 0, 0);
							}
						}
						iVar3++;
					}
					func_101(16384);
					func_166(&iLocal_34);
				}
			}
			if ((!func_28(134217728) || func_164()) && (!func_28(268435456) || func_157()))
			{
				__LIB_1__::func_148(&uLocal_932);
				__LIB_1__::func_649(&iLocal_758, 11);
			}
			break;
		case 11:
			if (!func_28(134217728) || !func_28(268435456))
			{
				__LIB_0__::func_37(&uLocal_932);
				__LIB_1__::func_649(&iLocal_758, 12);
			}
			else if (__LIB_1__::func_313(&uLocal_932, 3f))
			{
				func_169(Global_35, 0, 536870912, -417894478);
				__LIB_1__::func_649(&iLocal_758, 12);
			}
			break;
		case 12:
			if (func_170(&iLocal_806))
			{
				return false;
			}
			if (!Local_51.f_46)
			{
				if (!func_171(1073741824 /* Float: 2f */))
				{
					if (__LIB_0__::func_75(&uLocal_923))
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
						{
							__LIB_1__::func_148(&uLocal_923);
						}
						else if (func_28(262144) || __LIB_3__::func_332(Local_51.f_51, 1) > 45f)
						{
							__LIB_0__::func_37(&uLocal_923);
						}
						else if (__LIB_1__::func_313(&uLocal_923, 3f))
						{
							func_169(Global_35, 0, 1073741824 /* Float: 2f */, -417894478);
						}
					}
					else if (!func_28(262144))
					{
						if (__LIB_3__::func_332(Local_51.f_51, 1) < 45f)
						{
							__LIB_1__::func_148(&uLocal_923);
						}
					}
				}
			}
			if (func_28(33554432))
			{
				if (__LIB_1__::func_59(iLocal_1372))
				{
					if (__LIB_0__::func_75(&uLocal_929))
					{
						if (__LIB_1__::func_871(&uLocal_929) > 7000)
						{
							__LIB_1__::func_96(iLocal_1372, 580546400);
							__LIB_0__::func_37(&uLocal_929);
						}
						else
						{
							return false;
						}
					}
				}
				else if (__LIB_2__::func_343(Global_35, iLocal_34, 0))
				{
					iLocal_1372 = __LIB_7__::func_765(69, 24, __LIB_7__::func_849());
					if (__LIB_1__::func_59(iLocal_1372))
					{
						__LIB_3__::func_559(iLocal_1372, 580546400);
						__LIB_1__::func_148(&uLocal_929);
					}
				}
			}
			else if (!__LIB_13__::func_805(16384))
			{
				if ((__LIB_3__::func_339(18) && func_157()) && func_164())
				{
					if ((ENTITY::IS_ENTITY_DEAD(iLocal_34) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_34, true, false)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_34))
					{
						func_101(16384);
						func_166(&iLocal_34);
					}
					else if (func_180(&iLocal_34))
					{
						__LIB_0__::func_45("RE_AMD_OBJ_HELP", 10000, 0, 0, 0, 1);
						func_31(33554432);
					}
				}
			}
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_34) && !__LIB_13__::func_805(4)) && __LIB_0__::func_94(iLocal_34, Local_51.f_51, 1) > 65f)
			{
				return true;
			}
			else if (__LIB_3__::func_332(Local_51.f_51, 1) > 80f)
			{
				func_182();
				return true;
			}
			break;
	}
	return false;
}

bool func_36(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_317(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_4__::func_65(&(uParam0->f_5));
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
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*iParam1)[0]);
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

void func_44(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 262144);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 262144);
	}
}

void func_52()
{
	if (__LIB_18__::func_203(2, 2))
	{
		return;
	}
	if (func_28(2))
	{
		__LIB_18__::func_204(2, 2);
	}
}

bool func_53(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return false;
		case 3:
			return false;
		default:
			break;
	}
	return false;
}

void func_55()
{
	vector3 vVar0;
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_34) && ENTITY::IS_ENTITY_DEAD(iLocal_34)) && !VOLUME::_DOES_VOLUME_EXIST(iLocal_834))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_34, false, false) };
		__LIB_3__::func_527(&iLocal_834, vVar0, 0f, 0f, 0f, 4f, 4f, 2f, "REAMD_VOL_VEHICLE_AVOID");
		POPULATION::_0xB56D41A694E42E86(iLocal_834, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_834, 0, 0, 0, -1, -1, 0);
	}
}

void func_56()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
	{
		if (__LIB_2__::func_118(iLocal_34, 1, 1) > 150f)
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (__LIB_2__::func_1(iLocal_35[iVar0], 0, 1))
				{
					PED::_0x39A2FC5AF55A52B1(iLocal_35[iVar0], -1);
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_45[iVar0]))
				{
					PED::_0x39A2FC5AF55A52B1(uLocal_45[iVar0], -1);
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_503[iVar0 /*12*/].f_8))
				{
					__LIB_2__::func_919(Local_503[iVar0 /*12*/].f_8, 1, 1);
					OBJECT::DELETE_OBJECT(&(Local_503[iVar0 /*12*/].f_8));
				}
				iVar0++;
			}
			if (PROPSET::_DOES_PROPSET_EXIST(iLocal_830))
			{
				PROPSET::_DELETE_PROPSET(iLocal_830, true, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_34);
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_34, true, false))
		{
			if (PROPSET::_DOES_PROPSET_EXIST(iLocal_830))
			{
				PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iLocal_830);
			}
			if (!Local_51.f_48 || func_28(-2147483648))
			{
				iVar1 = func_211(&iLocal_35);
				if (__LIB_2__::func_1(iLocal_35[iVar1], 0, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_34, -1, -1, 2f, 1, 0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(func_83(iLocal_785, iLocal_786)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_83(iLocal_785, iLocal_786)))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_34, func_83(iLocal_785, iLocal_786), 524311, 0, 2056, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
					}
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_34, 3f, 524295);
					__LIB_1__::func_474(iLocal_35[iVar1], &iVar2, 0, 0, 1, 1);
					func_213(8388608, iVar1);
					PED::SET_PED_KEEP_TASK(iLocal_35[iVar1], true);
				}
				else
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_34);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_34);
				}
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_34);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_34);
			}
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_34);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_34);
		}
	}
}

void func_57()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!Local_51.f_48 || func_28(-2147483648))
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (__LIB_2__::func_1(iLocal_35[iVar2], 0, 1))
			{
				if (!func_165(8388608, iVar2) && !func_165(16777216, iVar2))
				{
					if (!bVar0 && !ENTITY::IS_ENTITY_DEAD(uLocal_45[0]))
					{
						iVar4 = uLocal_45[0];
						bVar0 = true;
					}
					else if (!bVar1 && !ENTITY::IS_ENTITY_DEAD(uLocal_45[1]))
					{
						iVar4 = uLocal_45[1];
						bVar1 = true;
					}
					else
					{
						iVar4 = 0;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar3);
						TASK::TASK_MOUNT_ANIMAL(0, iVar4, -1, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
						TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						__LIB_1__::func_474(iLocal_35[iVar2], &iVar3, 0, 0, 1, 1);
						func_213(16777216, iVar2);
						PED::SET_PED_KEEP_TASK(iLocal_35[iVar2], true);
					}
				}
			}
			iVar2++;
		}
	}
}

void func_58(bool bParam0)
{
	PED::SET_PED_CONFIG_FLAG(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, !bParam0);
}

void func_61(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_3__::func_259((*uParam0)[iVar0], 0);
		iVar0++;
	}
}

void func_76(int iParam0)
{
	Local_245[0 /*32*/] = 22;
	Local_245[1 /*32*/] = 22;
	Local_245[2 /*32*/] = 22;
	Local_245[3 /*32*/] = 22;
	Local_245[0 /*32*/].f_1 = joaat("G_M_M_UNICRIMINALS_01");
	Local_245[1 /*32*/].f_1 = joaat("G_M_M_UNICRIMINALS_01");
	Local_245[2 /*32*/].f_1 = joaat("G_M_O_UNIEXCONFEDS_01");
	Local_245[3 /*32*/].f_1 = joaat("G_M_O_UNIEXCONFEDS_01");
	Local_245[0 /*32*/].f_6 = { -2.5f, 4f, 0f };
	Local_245[1 /*32*/].f_6 = { -3f, 4f, 0f };
	Local_245[2 /*32*/].f_6 = { -2.5f, 3f, 0f };
	Local_245[3 /*32*/].f_6 = { -3f, 3f, 0f };
	__LIB_3__::func_303(&(Local_245[0 /*32*/].f_22));
	__LIB_3__::func_303(&(Local_245[1 /*32*/].f_22));
	__LIB_3__::func_303(&(Local_245[2 /*32*/].f_22));
	__LIB_3__::func_303(&(Local_245[3 /*32*/].f_22));
	switch (iLocal_14)
	{
		case 0:
			StringCopy(&(Local_245[0 /*32*/].f_23), "0920_A_M_M_Civ_Poor_White_AVOID_03", 64);
			StringCopy(&(Local_245[1 /*32*/].f_23), "0926_A_M_M_Civ_Poor_White_AVOID_09", 64);
			StringCopy(&(Local_245[2 /*32*/].f_23), "0177_G_M_Y_UniExConfeds_01_WHITE_01", 64);
			StringCopy(&(Local_245[3 /*32*/].f_23), "0175_G_M_O_UniExConfeds_01_WHITE_02", 64);
			Local_245[0 /*32*/].f_3 = -853749714;
			Local_245[1 /*32*/].f_3 = 2136061081;
			Local_245[2 /*32*/].f_3 = -1701454806;
			Local_245[3 /*32*/].f_3 = -73982421;
			break;
		default:
			StringCopy(&(Local_245[0 /*32*/].f_23), "0923_A_M_M_Civ_Poor_White_AVOID_06", 64);
			StringCopy(&(Local_245[1 /*32*/].f_23), "0907_A_M_M_Civ_Poor_White_AGGRESSIVE_07", 64);
			StringCopy(&(Local_245[2 /*32*/].f_23), "0176_G_M_O_UniExConfeds_01_WHITE_03", 64);
			StringCopy(&(Local_245[3 /*32*/].f_23), "1026_G_M_Y_UniExConfeds_01_WHITE_04", 64);
			Local_245[0 /*32*/].f_3 = -1399124181;
			Local_245[1 /*32*/].f_3 = -556829805;
			Local_245[2 /*32*/].f_3 = 779191267;
			Local_245[3 /*32*/].f_3 = -1666457514;
			break;
	}
	Local_374[0 /*32*/].f_1 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	Local_374[1 /*32*/].f_1 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
	Local_374[2 /*32*/].f_1 = joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT");
	Local_374[3 /*32*/].f_1 = joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL");
	Local_374[0 /*32*/].f_6 = { -4f, 4f, 0f };
	Local_374[1 /*32*/].f_6 = { -3f, 4f, 0f };
	Local_374[2 /*32*/].f_6 = { -2f, 4f, 0f };
	Local_374[3 /*32*/].f_6 = { -1f, 4f, 0f };
	__LIB_3__::func_352(&Local_51, 2);
}

void func_78()
{
	switch (iLocal_14)
	{
		case 1:
			Local_503[1 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
			Local_503[1 /*12*/] = { 0f, 0f, 0f };
			Local_503[1 /*12*/].f_3 = 0f;
			Local_503[1 /*12*/].f_10 = 0;
			Local_503[0 /*12*/].f_7 = joaat("P_TNTARMSWAGON01X");
			Local_503[0 /*12*/] = { 0f, -0.5f, 0.15f };
			Local_503[0 /*12*/].f_3 = 0f;
			Local_503[0 /*12*/].f_10 = 0;
			break;
	}
}

void func_80()
{
	Local_670[0 /*2*/] = "script_re@arms_deal";
	Local_670[0 /*2*/].f_1 = "BREAKOUT_A_PED02";
	Local_670[1 /*2*/] = "script_re@arms_deal";
	Local_670[1 /*2*/].f_1 = "BREAKOUT_B_CON02";
	Local_670[2 /*2*/] = "script_re@arms_deal";
	Local_670[2 /*2*/].f_1 = "ACTION_B_PED02";
	Local_670[3 /*2*/] = "script_re@arms_deal";
	Local_670[3 /*2*/].f_1 = "ACTION_B_CON02";
	Local_670[4 /*2*/] = "script_re@arms_deal";
	Local_670[4 /*2*/].f_1 = "ACTION_C_PED02";
	Local_670[5 /*2*/] = "script_re@arms_deal";
	Local_670[5 /*2*/].f_1 = "ACTION_C_CON02";
	Local_670[6 /*2*/] = "script_re@arms_deal";
	Local_670[6 /*2*/].f_1 = "THANKS_D_PED01";
	Local_670[7 /*2*/] = "script_re@arms_deal";
	Local_670[7 /*2*/].f_1 = "THANKS_B_PED02";
	Local_670[8 /*2*/] = "script_re@arms_deal";
	Local_670[8 /*2*/].f_1 = "THANKS_C_CON01";
	Local_670[9 /*2*/] = "script_re@arms_deal";
	Local_670[9 /*2*/].f_1 = "THANKS_A_CON02";
	__LIB_3__::func_318(Local_670[9 /*2*/], &uLocal_549);
	Local_670[10 /*2*/] = "ai_react@breakouts@gen_male@kneel@bknee_down@generic@quick";
	Local_670[10 /*2*/].f_1 = "breakout_quick_front";
	Local_670[11 /*2*/] = "ai_react@breakouts@gen_male@kneel@bknee_down@generic@quick";
	Local_670[11 /*2*/].f_1 = "breakout_quick_backleft";
	Local_670[12 /*2*/] = "ai_react@breakouts@gen_male@kneel@bknee_down@generic@quick";
	Local_670[12 /*2*/].f_1 = "breakout_quick_backright";
	Local_670[13 /*2*/] = "ai_react@breakouts@gen_male@kneel@bknee_down@generic@quick";
	Local_670[13 /*2*/].f_1 = "breakout_quick_left";
	Local_670[14 /*2*/] = "ai_react@breakouts@gen_male@kneel@bknee_down@generic@quick";
	Local_670[14 /*2*/].f_1 = "breakout_quick_right";
	__LIB_3__::func_318(Local_670[14 /*2*/], &uLocal_549);
}

void func_81()
{
	switch (iLocal_14)
	{
		case 1:
			Local_528.f_4 = "script@beat@wilderness@armsDeal@inspectSuccess";
			sLocal_32 = func_251(0);
			sLocal_33 = func_251(1);
			break;
		case 0:
			Local_528.f_4 = "script@beat@wilderness@armsDeal@ambush";
			sLocal_32 = func_251(4);
			sLocal_33 = func_251(5);
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_528.f_4))
	{
		Local_528.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_528.f_4, 64, 0, false, true);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_528.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_528.f_1);
		}
	}
}

void func_82()
{
	Local_701 = { 0f, 0f, 0f };
	Local_701.f_3 = Global_35;
	Local_701.f_8 = 4;
	Local_701.f_19 = 4;
	Local_701.f_20 = 4;
	Local_701.f_21 = 4;
	Local_701.f_22 = 4;
	Local_701.f_17 = 3;
	Local_701.f_18 = 3;
	Local_701.f_7 = 0;
	Local_726 = { 0f, 0f, 0f };
	Local_726.f_3 = Global_35;
	Local_726.f_8 = 3;
	Local_726.f_19 = 3;
	Local_726.f_20 = 3;
	Local_726.f_21 = 3;
	Local_726.f_22 = 3;
	Local_726.f_17 = 2;
	Local_726.f_18 = 2;
	Local_726.f_7 = 0;
}

char* func_83(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "re_arms_deal_scm_00";
		case 1:
			return "re_arms_deal_scm_01";
		case 2:
			return "re_arms_deal_scm_02";
		case 3:
			return "re_arms_deal_scm_03";
		case 4:
			return "re_arms_deal_scm_04";
		case 5:
			return "re_arms_deal_scm_05";
		default:
			break;
	}
	return "";
}

void func_94(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
	{
		func_256(&(iLocal_35[iParam0]));
		__LIB_1__::func_991(iLocal_35[iParam0], 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_35[iParam0], 277, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_35[iParam0], 6, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_35[iParam0], 250, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_35[iParam0], true, true);
		__LIB_2__::func_272(iLocal_35[iParam0], func_258(iParam0), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		WEAPON::SET_AMMO_IN_CLIP(iLocal_35[iParam0], func_258(iParam0), -1);
		switch (iParam0)
		{
			case 0:
			case 1:
				__LIB_2__::func_23(&(Local_51.f_5), iLocal_35[iParam0], 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[iParam0], iLocal_766);
				break;
			default:
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[iParam0], iLocal_765);
				break;
		}
		if (iParam0 != 1)
		{
			__LIB_3__::func_285(iLocal_35[iParam0], &Local_51, 0);
		}
		if (iParam0 == 2)
		{
			__LIB_2__::func_190(iLocal_35[iParam0], __LIB_3__::func_540(joaat("REWARD_BEAT_LARGE"), 0, -1));
		}
		if (iLocal_14 == 1 && (iParam0 == 3 || iParam0 == 1))
		{
			func_150(iLocal_35[iParam0], (35f + 10f), 1);
		}
	}
}

Vector3 func_96(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 11:
					switch (iParam2)
					{
						case 0:
							return 1849.925f, -372.9819f, 42.48963f;
						case 1:
							return 1313.032f, -1633.066f, 65.66283f;
						case 2:
							return 789.1741f, -895.3729f, 50.49248f;
						case 3:
							return 853.8925f, -540.4401f, 87.58936f;
						case 4:
							return 1375.436f, -1681.776f, 66.682f;
						case 5:
							return 1575.729f, -1165.941f, 44.7604f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 11:
					switch (iParam2)
					{
						case 0:
							return 1851.821f, -372.0927f, 42.44438f;
						case 1:
							return 1311.263f, -1631.586f, 65.56376f;
						case 2:
							return 791.3358f, -893.1277f, 50.59101f;
						case 3:
							return 852.2385f, -542.253f, 87.28247f;
						case 4:
							return 1378.482f, -1684.875f, 66.6328f;
						case 5:
							return 1577.251f, -1167.564f, 44.6889f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_97(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 11:
					switch (iParam2)
					{
						case 0:
							return 88.35f;
						case 1:
							return 168.73f;
						case 2:
							return 91.42f;
						case 3:
							return -84.78f;
						case 4:
							return 322f;
						case 5:
							return 5f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 11:
					switch (iParam2)
					{
						case 0:
							return 76.31f;
						case 1:
							return 162.57f;
						case 2:
							return 89.34f;
						case 3:
							return -92.82f;
						case 4:
							return 333f;
						case 5:
							return 0f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

void func_98(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_98(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_98(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_99(var uParam0, bool bParam1)
{
	if (__LIB_2__::func_1(*uParam0, 0, 0))
	{
		PED::SET_PED_CONFIG_FLAG(*uParam0, 277, bParam1);
	}
}

void func_101(int iParam0)
{
	if (!__LIB_13__::func_805(iParam0))
	{
		__LIB_1__::func_683(&iLocal_807, iParam0);
	}
}

void func_108(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, float fParam9, int iParam10)
{
	(*uParam0)[0] = fParam1;
	(*uParam0)[1] = fParam2;
	(*uParam0)[2] = fParam3;
	(*uParam0)[3] = fParam4;
	(*uParam0)[4] = fParam5;
	(*uParam0)[5] = fParam6;
	(*uParam0)[6] = fParam7;
	(*uParam0)[7] = iParam8;
	(*uParam0)[8] = fParam9;
	(*uParam0)[9] = iParam10;
}

void func_114()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	if (Local_51.f_46)
	{
		bVar2 = func_273();
		if (!func_28(268435456))
		{
			if (__LIB_17__::func_893(&iLocal_35, &(Local_51.f_5), &iLocal_836, &uLocal_811, 2, 3, 1) || (bVar2 && !func_28(8388608)))
			{
				func_275(0, 0, 0, 0);
				func_31(268435456);
				func_101(8192);
				func_276(iLocal_35[2], 67108864, iLocal_35[3], 524288, 0, 0, 0, 0, -1, -1, -1, -1);
				__LIB_1__::func_649(&iLocal_758, 9);
				__LIB_3__::func_237(&(Local_51.f_5), &iLocal_836);
			}
		}
		if (!func_28(134217728))
		{
			if (__LIB_17__::func_893(&iLocal_35, &(Local_51.f_5), &iLocal_836, &uLocal_812, 0, 1, 1) || (bVar2 && func_28(8388608)))
			{
				func_275(0, 0, 0, 0);
				func_31(134217728);
				func_101(8192);
				func_276(iLocal_35[0], 67108864, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1);
				if (!bLocal_794)
				{
					func_278(iLocal_35[1], 1);
					bLocal_800 = true;
				}
				__LIB_1__::func_649(&iLocal_758, 9);
				__LIB_3__::func_237(&(Local_51.f_5), &iLocal_836);
			}
			if (func_279(&iLocal_34))
			{
				func_275(0, 0, 0, 0);
				func_276(iLocal_35[0], 16777216, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1);
				if (!bLocal_794)
				{
					func_278(iLocal_35[1], 1);
					bLocal_799 = true;
				}
				func_31(268435456);
				func_31(134217728);
				func_31(1073741824 /* Float: 2f */);
				func_101(8192);
				__LIB_1__::func_649(&iLocal_758, 9);
				return;
			}
		}
		return;
	}
	if (!func_28(1073741824 /* Float: 2f */))
	{
		if ((iLocal_14 == 1 || __LIB_13__::func_805(256)) || __LIB_13__::func_805(512))
		{
			if (func_279(&iLocal_34))
			{
				Local_51.f_46 = 1;
				func_275(0, 0, 0, 0);
				func_276(iLocal_35[2], 16777216, iLocal_35[3], 16777216, iLocal_35[0], 16777216, 0, 0, -1, -1, -1, -1);
				func_31(268435456);
				func_101(8192);
				if (iLocal_14 != 1)
				{
					func_31(134217728);
				}
				func_31(1073741824 /* Float: 2f */);
				__LIB_1__::func_649(&iLocal_758, 9);
				return;
			}
		}
	}
	if (func_164())
	{
		iVar0 = 2;
		iVar1 = 3;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 3;
	}
	if (func_273() || __LIB_17__::func_893(&iLocal_35, &(Local_51.f_5), &iLocal_836, &uLocal_810, iVar0, iVar1, 1))
	{
		Local_51.f_46 = 1;
		bVar3 = false;
		bVar4 = false;
		if (Local_51.f_5.f_10 == iLocal_35[2] || Local_51.f_5.f_10 == iLocal_35[3])
		{
			bVar3 = true;
		}
		if (func_28(67108864))
		{
			if (iLocal_1248 == 2 || iLocal_1248 == 3)
			{
				bVar3 = true;
			}
		}
		if (iLocal_836 == 1024)
		{
			bVar3 = false;
		}
		func_275(0, 0, 0, 0);
		if (iLocal_14 == 1)
		{
			if (bVar3)
			{
				if (!__LIB_3__::func_643(&Local_51, 0, 40f) || !__LIB_3__::func_643(&Local_51, 1, 40f))
				{
					func_31(268435456);
					func_276(iLocal_35[2], 67108864, iLocal_35[3], 524288, 0, 0, 0, 0, -1, -1, -1, -1);
				}
				else
				{
					bVar4 = true;
				}
			}
			else if (!__LIB_3__::func_643(&Local_51, 2, 40f) || !__LIB_3__::func_643(&Local_51, 3, 40f))
			{
				func_31(134217728);
				func_276(iLocal_35[0], 67108864, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1);
				if (!bLocal_794)
				{
					func_278(iLocal_35[1], 1);
					bLocal_800 = true;
				}
			}
			else
			{
				bVar4 = true;
			}
		}
		else
		{
			bVar4 = true;
			if (func_281(iLocal_35[0]) || func_281(iLocal_35[1]))
			{
				func_276(iLocal_35[2], 67108864, iLocal_35[3], 524288, 0, 0, 0, 0, -1, -1, -1, -1);
				func_31(268435456);
				func_282(&(Local_51.f_5));
				__LIB_3__::func_237(&(Local_51.f_5), &iLocal_836);
				func_148();
				__LIB_1__::func_649(&iLocal_758, 7);
				return;
			}
		}
		if (bVar4)
		{
			func_31(134217728);
			func_31(268435456);
			func_101(8192);
			if (iLocal_836 == 1024)
			{
				func_31(536870912);
				__LIB_2__::func_478(iLocal_35[1], Global_35, func_283(8388608, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else if (bVar3)
			{
				func_276(iLocal_35[2], 67108864, iLocal_35[3], 524288, iLocal_35[0], 67108864, iLocal_35[1], 1048576, -1, -1, -1, -1);
			}
			else
			{
				func_276(iLocal_35[0], 67108864, iLocal_35[2], 67108864, iLocal_35[3], 524288, 0, 0, -1, -1, -1, -1);
				if (!bLocal_794)
				{
					func_278(iLocal_35[1], 1);
				}
			}
		}
		__LIB_3__::func_237(&(Local_51.f_5), &iLocal_836);
		func_147(&(Local_51.f_5));
		__LIB_1__::func_649(&iLocal_758, 9);
	}
	if ((func_28(128) && !ENTITY::IS_ENTITY_DEAD(iLocal_34)) && __LIB_3__::func_332(Local_51.f_51, 1) < 7f)
	{
		Local_51.f_46 = 1;
		func_31(268435456);
		func_31(134217728);
		func_101(8192);
		func_276(iLocal_35[2], 67108864, iLocal_35[3], 524288, 0, 0, 0, 0, -1, -1, -1, -1);
		__LIB_3__::func_237(&(Local_51.f_5), &iLocal_836);
		func_147(&(Local_51.f_5));
		__LIB_1__::func_649(&iLocal_758, 9);
	}
}

void func_115()
{
	float fVar0;
	float fVar1;
	if ((func_28(262144) || func_28(1048576)) || Local_51.f_46)
	{
		return;
	}
	if (iLocal_786 == 4)
	{
		if (__LIB_3__::func_332(Local_51.f_51, 1) > 55f)
		{
			return;
		}
	}
	else if (__LIB_3__::func_332(Local_51.f_51, 1) > 35f)
	{
		return;
	}
	fVar0 = 20f;
	if (!func_28(65536))
	{
		if ((func_28(4096) && __LIB_2__::func_1(iLocal_35[iLocal_1250], 0, 0)) && func_285(iLocal_35[iLocal_1250], iLocal_1250))
		{
			fVar1 = __LIB_3__::func_588(&Local_51, iLocal_1250);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
				func_31(65536);
				func_287(131072);
				func_287(16384);
				func_287(32768);
			}
		}
	}
	if (!func_28(131072))
	{
		if ((func_28(8192) && __LIB_2__::func_1(iLocal_35[iLocal_1251], 0, 0)) && func_285(iLocal_35[iLocal_1251], iLocal_1251))
		{
			fVar1 = __LIB_3__::func_588(&Local_51, iLocal_1251);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
				func_287(65536);
				func_31(131072);
				func_287(16384);
				func_287(32768);
			}
		}
	}
	if (!func_28(16384))
	{
		if ((func_28(1024) && __LIB_2__::func_1(iLocal_35[iLocal_1248], 0, 0)) && func_285(iLocal_35[iLocal_1248], iLocal_1248))
		{
			fVar1 = __LIB_3__::func_588(&Local_51, iLocal_1248);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
				func_287(65536);
				func_287(131072);
				func_31(16384);
				func_287(32768);
			}
		}
	}
	if (!func_28(32768))
	{
		if ((func_28(2048) && __LIB_2__::func_1(iLocal_35[iLocal_1249], 0, 0)) && func_285(iLocal_35[iLocal_1249], iLocal_1249))
		{
			fVar1 = __LIB_3__::func_588(&Local_51, iLocal_1249);
			if (fVar1 < fVar0 || fVar1 == fVar0)
			{
				fVar0 = fVar1;
				func_287(65536);
				func_287(131072);
				func_287(16384);
				func_31(32768);
			}
		}
	}
	if (iLocal_14 == 1)
	{
		if (func_28(2048))
		{
			if (!func_288(iLocal_35[3], iLocal_35[1]))
			{
				func_287(32768);
			}
		}
	}
}

void func_116()
{
	int iVar0;
	if ((!func_28(4096) || ENTITY::IS_ENTITY_DEAD(iLocal_35[iLocal_1250])) || func_165(2097152, iLocal_1250))
	{
		return;
	}
	if (!func_28(262144))
	{
		if (func_289(iLocal_1276) && func_28(65536))
		{
			func_31(262144);
			__LIB_1__::func_649(&iLocal_1276, 9, iLocal_1250);
		}
	}
	if (iLocal_1276 > 0)
	{
		if (func_291(iLocal_1250))
		{
			if (func_165(65536, iLocal_1250))
			{
				func_292(iLocal_1250);
				__LIB_1__::func_649(&iLocal_758, 9);
			}
		}
	}
	switch (iLocal_1276)
	{
		case 0:
			if (func_165(16384, iLocal_1250) || func_165(16384, iLocal_1251))
			{
				func_293(iLocal_1250, 0, 0, 0);
				__LIB_1__::func_649(&iLocal_1276, 10, iLocal_1251);
				return;
			}
			func_294(iLocal_1250, 0, func_28(2097152));
			func_293(iLocal_1250, func_28(2097152), 1, 1);
			__LIB_1__::func_649(&iLocal_1276, 4, iLocal_1250);
			break;
		case 2:
			func_295(iLocal_1250, uLocal_45[0], 0, 1f, 0);
			__LIB_1__::func_649(&iLocal_1276, 4, iLocal_1250);
			break;
		case 4:
			if (PED::IS_PED_ON_MOUNT(iLocal_35[iLocal_1250]))
			{
				__LIB_1__::func_649(&iLocal_1276, 6, iLocal_1250);
			}
			break;
		case 6:
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_35[iLocal_1251], false))
			{
				func_294(iLocal_1250, 0, func_28(2097152));
				func_293(iLocal_1250, 0, 1, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_296(iLocal_785, iLocal_786), 1.75f, -1, 0.25f, 1, 40000f);
				TASK::_TASK_MOVE_IN_TRAFFIC(0, 2f, 0, 0);
				__LIB_1__::func_474(iLocal_35[iLocal_1250], &iVar0, 0, 0, 1, 1);
				iVar0 = 0;
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_STAND_STILL(0, 500);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_296(iLocal_785, iLocal_786), 1.75f, -1, 0.25f, 1, 40000f);
				__LIB_1__::func_474(iLocal_35[iLocal_1251], &iVar0, 0, 0, 1, 1);
				__LIB_1__::func_649(&iLocal_1276, 5, iLocal_1250);
				iLocal_801 = MISC::GET_GAME_TIMER();
			}
			break;
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_801) < 3500)
			{
			}
			else
			{
				if (!PED::DOES_GROUP_EXIST(iLocal_935))
				{
					iLocal_935 = PED::CREATE_GROUP(2);
					PED::SET_GROUP_FORMATION(iLocal_935, 3);
				}
				if (!PED::_0x878B68960C1C2A35(iLocal_35[iLocal_1250], iLocal_935))
				{
					PED::SET_PED_AS_GROUP_LEADER(iLocal_35[iLocal_1250], iLocal_935, false);
				}
				__LIB_1__::func_649(&iLocal_1276, 7, iLocal_1250);
				Jump @769; //curOff = 649
				if ((!func_28(524288) && func_28(262144)) && func_28(131072))
				{
					TASK::TASK_STAND_STILL(iLocal_35[iLocal_1250], -1);
					__LIB_1__::func_649(&iLocal_1276, 8, iLocal_1250);
				}
				Jump @769; //curOff = 714
				if (func_28(524288))
				{
					__LIB_1__::func_649(&iLocal_1276, 2, iLocal_1250);
				}
				Jump @769; //curOff = 739
				if (func_297(iLocal_1250, iLocal_1251))
				{
					__LIB_1__::func_649(&iLocal_1276, 2, iLocal_1250);
				}
			}
			default:
				break;
	}
}

void func_117()
{
	if ((!func_28(8192) || ENTITY::IS_ENTITY_DEAD(iLocal_35[iLocal_1251])) || func_165(2097152, iLocal_1251))
	{
		return;
	}
	if (!func_28(262144))
	{
		if (func_289(iLocal_1277) && func_28(131072))
		{
			func_31(262144);
			__LIB_1__::func_649(&iLocal_1277, 9, iLocal_1251);
		}
	}
	if (iLocal_1277 > 0)
	{
		if (func_291(iLocal_1251))
		{
			if (func_165(65536, iLocal_1251))
			{
				func_292(iLocal_1251);
				__LIB_1__::func_649(&iLocal_758, 9);
			}
		}
	}
	switch (iLocal_1277)
	{
		case 0:
			if (func_165(16384, iLocal_1250) || func_165(16384, iLocal_1251))
			{
				func_293(iLocal_1251, 0, 0, 0);
				__LIB_1__::func_649(&iLocal_1277, 10, iLocal_1251);
				return;
			}
			__LIB_0__::func_325(&(uLocal_40[iLocal_1251]));
			func_294(iLocal_1251, 1, (func_28(2097152) || func_165(131072, iLocal_1251)));
			func_293(iLocal_1251, func_28(2097152), 1, 1);
			__LIB_1__::func_649(&iLocal_1277, 4, iLocal_1251);
			break;
		case 2:
			func_295(iLocal_1251, uLocal_45[1], 0, 1f, 0);
			__LIB_1__::func_649(&iLocal_1277, 4, iLocal_1251);
			break;
		case 4:
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_35[iLocal_1251], false))
			{
				func_294(iLocal_1251, 1, (func_28(2097152) || func_165(131072, iLocal_1251)));
				func_293(iLocal_1251, 0, 1, 1);
				__LIB_1__::func_649(&iLocal_1277, 5, iLocal_1251);
			}
			break;
		case 5:
			if (PED::DOES_GROUP_EXIST(iLocal_935))
			{
				TASK::CLEAR_PED_TASKS(iLocal_35[iLocal_1251], true, false);
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_35[iLocal_1251], iLocal_935);
				PED::SET_PED_CONFIG_FLAG(iLocal_35[iLocal_1251], 279, true);
				__LIB_3__::func_286(iLocal_35[iLocal_1251]);
				__LIB_1__::func_649(&iLocal_1277, 7, iLocal_1251);
			}
			break;
		case 7:
			break;
		case 9:
			if (func_297(iLocal_1251, iLocal_1250))
			{
				__LIB_1__::func_649(&iLocal_1277, 2, iLocal_1251);
			}
			break;
	}
}

void func_118()
{
	int iVar0;
	if ((!func_28(1024) || ENTITY::IS_ENTITY_DEAD(iLocal_35[iLocal_1248])) || (func_165(2097152, iLocal_1248) && !func_165(4194304, iLocal_1248)))
	{
		return;
	}
	if (!func_28(262144))
	{
		if (func_299(iLocal_1274) && func_28(16384))
		{
			__LIB_1__::func_683(&iLocal_806, 262144);
			__LIB_1__::func_649(&iLocal_1274, 9, iLocal_1248);
		}
	}
	if (iLocal_1274 > 0)
	{
		if (func_291(iLocal_1248))
		{
			if (func_165(65536, iLocal_1248))
			{
				func_292(iLocal_1248);
				__LIB_1__::func_649(&iLocal_758, 9);
			}
		}
	}
	switch (iLocal_1274)
	{
		case 0:
			if (func_165(16384, iLocal_1248) || func_165(16384, iLocal_1249))
			{
				func_293(iLocal_1248, 0, 0, 0);
				__LIB_1__::func_649(&iLocal_1274, 13, iLocal_1248);
				return;
			}
			func_294(iLocal_1248, 2, func_28(4194304));
			func_293(iLocal_1248, func_28(4194304), 1, 1);
			if (func_28(8388608) && __LIB_3__::func_332(Local_51.f_51, 1) < 35f)
			{
				if (iLocal_1248 == 1)
				{
					iLocal_1278 = 7;
				}
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_35[iLocal_1248], Local_670[iLocal_1278 /*2*/], Local_670[iLocal_1278 /*2*/].f_1, Global_35, -1, 4f, -4f, 67125760, 0f, false, false, -1f, "UpperbodyFixup_filter", 65538, -1f);
				__LIB_1__::func_649(&iLocal_1274, 2, iLocal_1248);
			}
			else
			{
				__LIB_1__::func_649(&iLocal_1274, 3, iLocal_1248);
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_35[iLocal_1248], Local_670[iLocal_1278 /*2*/], Local_670[iLocal_1278 /*2*/].f_1, 1))
			{
				__LIB_1__::func_649(&iLocal_1274, 3, iLocal_1248);
			}
			break;
		case 3:
			if (iLocal_1248 == 0)
			{
				__LIB_2__::func_478(iLocal_35[0], iLocal_35[iLocal_1249], func_283(32768, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_301(32768);
			}
			if ((iLocal_1248 == 2 && !func_171(4096)) && func_28(32))
			{
				__LIB_2__::func_478(iLocal_35[2], 0, func_283(4096, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				func_301(4096);
			}
			func_302(iLocal_35[iLocal_1248], -1, 131072);
			__LIB_1__::func_649(&iLocal_1274, 4, iLocal_1248);
			break;
		case 4:
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_34) && PED::IS_PED_IN_VEHICLE(iLocal_35[iLocal_1248], iLocal_34, false)) && __LIB_6__::func_693(iLocal_35[iLocal_1248], iLocal_34, -1))
			{
				__LIB_1__::func_649(&iLocal_1274, 6, iLocal_1248);
			}
			if (!__LIB_0__::func_163(iLocal_35[iLocal_1248], 242628503) && !__LIB_0__::func_163(iLocal_35[iLocal_1248], -1794415470))
			{
				func_302(iLocal_35[iLocal_1248], -1, 131072);
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_34) && (((!func_28(2048) || !ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_1249])) || ENTITY::IS_ENTITY_DEAD(iLocal_35[iLocal_1249])) || PED::IS_PED_IN_VEHICLE(iLocal_35[iLocal_1249], iLocal_34, false)))
			{
				func_294(iLocal_1248, 2, func_28(4194304));
				func_293(iLocal_1248, 0, 1, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_83(iLocal_785, iLocal_786)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_83(iLocal_785, iLocal_786)))
				{
					func_101(64);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_34, func_83(iLocal_785, iLocal_786), 524311, 0, 3080, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
				}
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_34, 3f, 524295);
				__LIB_1__::func_474(iLocal_35[iLocal_1248], &iVar0, 0, 0, 1, 1);
				__LIB_1__::func_649(&iLocal_1274, 7, iLocal_1248);
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_34))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_34, 0))
				{
					if (__LIB_0__::func_94(iLocal_34, func_305(iLocal_785, iLocal_786), 1) < 5f)
					{
						func_101(128);
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_35[iLocal_1248], iLocal_34, 3f, 524295);
						__LIB_1__::func_649(&iLocal_1274, 10, iLocal_1248);
					}
				}
			}
			if (__LIB_1__::func_348(Global_35, iLocal_35[iLocal_1248]) < 15f)
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_35[iLocal_1248], &Local_726);
			}
			if (VEHICLE::_0xA9E185D498B9AC67(iLocal_34, Global_35) || VEHICLE::_0xA9E185D498B9AC67(iLocal_34, Global_1935630.f_40))
			{
				if (!func_171(262144))
				{
					func_169(iLocal_35[iLocal_1248], Global_35, 262144, 291934926);
				}
			}
			break;
		case 8:
			if (func_28(524288))
			{
				__LIB_1__::func_649(&iLocal_1274, 3, iLocal_1248);
			}
			break;
		case 9:
			if (func_297(iLocal_1248, iLocal_1249))
			{
				__LIB_1__::func_649(&iLocal_1274, 3, iLocal_1248);
			}
			break;
		case 10:
			break;
		case 11:
			if (ENTITY::IS_ENTITY_DEAD(iLocal_34) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_34, false, false))
			{
				func_307(iLocal_1248, iLocal_788[iLocal_1248]);
				func_160(4194304, iLocal_1248);
				__LIB_1__::func_649(&iLocal_1274, 13, iLocal_1248);
			}
			else if (!__LIB_13__::func_805(128) && __LIB_2__::func_343(iLocal_35[iLocal_1248], iLocal_34, 1))
			{
				func_101(64);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_34, func_83(iLocal_785, iLocal_786), 0, 0, 2056, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_34, 3f, 524295);
				__LIB_1__::func_474(iLocal_35[iLocal_1248], &iVar0, 0, 0, 1, 1);
				__LIB_1__::func_649(&iLocal_1274, 12, iLocal_1248);
				PED::SET_PED_KEEP_TASK(iLocal_35[iLocal_1248], true);
				bLocal_802 = true;
			}
			else
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_35[iLocal_1248], 6, true);
				func_307(iLocal_1248, iLocal_788[iLocal_1248]);
				func_160(4194304, iLocal_1248);
				PED::SET_PED_KEEP_TASK(iLocal_35[iLocal_1248], true);
				__LIB_1__::func_649(&iLocal_1274, 13, iLocal_1248);
			}
			break;
		case 12:
			if (ENTITY::IS_ENTITY_DEAD(iLocal_34) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_34, false, false))
			{
				func_307(iLocal_1248, iLocal_788[iLocal_1248]);
				func_160(4194304, iLocal_1248);
				__LIB_1__::func_649(&iLocal_1274, 13, iLocal_1248);
			}
			else
			{
				if (bLocal_802)
				{
					if (__LIB_1__::func_372(iLocal_35[iLocal_1248], 0) == joaat("WEAPON_UNARMED"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_35[iLocal_1248], func_258(iLocal_1248), false, 0, false, false);
					}
					TASK::TASK_COMBAT_HATED_TARGETS(iLocal_35[iLocal_1248], -1f);
				}
				if (__LIB_13__::func_805(64))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_34, 0))
					{
						TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_34, 5f);
						if (__LIB_0__::func_94(iLocal_34, func_305(iLocal_785, iLocal_786), 1) < 10f)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_35[iLocal_1248], 6, true);
							func_307(iLocal_1248, iLocal_788[iLocal_1248]);
							func_160(4194304, iLocal_1248);
							PED::SET_PED_KEEP_TASK(iLocal_35[iLocal_1248], true);
							__LIB_1__::func_649(&iLocal_1274, 10, iLocal_1248);
						}
					}
				}
				else
				{
					func_307(iLocal_1248, iLocal_788[iLocal_1248]);
					func_160(4194304, iLocal_1248);
					__LIB_1__::func_649(&iLocal_1274, 13, iLocal_1248);
				}
			}
			break;
	}
}

void func_119()
{
	int iVar0;
	if ((!func_28(2048) || ENTITY::IS_ENTITY_DEAD(iLocal_35[iLocal_1249])) || func_165(2097152, iLocal_1249))
	{
		return;
	}
	if ((func_28(1024) && ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_1248])) && ENTITY::IS_ENTITY_DEAD(iLocal_35[iLocal_1248]))
	{
		func_309(iLocal_1249, 0, 1.5f, 0);
		func_287(2048);
	}
	if (!func_28(262144))
	{
		if (func_310(iLocal_1275) && func_28(32768))
		{
			func_31(262144);
			__LIB_1__::func_649(&iLocal_1275, 9, iLocal_1249);
		}
	}
	if (iLocal_1275 > 0)
	{
		if (func_291(iLocal_1249))
		{
			if (func_165(65536, iLocal_1249))
			{
				func_292(iLocal_1249);
				__LIB_1__::func_649(&iLocal_758, 9);
			}
		}
	}
	switch (iLocal_1275)
	{
		case 0:
			if (func_165(16384, iLocal_1248) || func_165(16384, iLocal_1249))
			{
				func_293(iLocal_1249, 0, 0, 0);
				__LIB_1__::func_649(&iLocal_1275, 13, iLocal_1249);
				return;
			}
			__LIB_0__::func_325(&(uLocal_40[iLocal_1249]));
			func_294(iLocal_1249, 3, (func_28(4194304) || func_165(131072, iLocal_1249)));
			func_293(iLocal_1249, func_28(4194304), 1, 1);
			__LIB_1__::func_649(&iLocal_1275, 3, iLocal_1249);
			break;
		case 3:
			func_302(iLocal_35[iLocal_1249], 0, 262144);
			PED::SET_PED_KEEP_TASK(iLocal_35[iLocal_1249], true);
			__LIB_1__::func_649(&iLocal_1275, 4, iLocal_1249);
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_34) && PED::IS_PED_IN_VEHICLE(iLocal_35[iLocal_1249], iLocal_34, false))
			{
				func_294(iLocal_1249, 3, (func_28(4194304) || func_165(131072, iLocal_1249)));
				func_293(iLocal_1249, 0, 1, 1);
				__LIB_1__::func_649(&iLocal_1275, 6, iLocal_1249);
			}
			if (!__LIB_0__::func_163(iLocal_35[iLocal_1249], 242628503) && !__LIB_0__::func_163(iLocal_35[iLocal_1249], -1794415470))
			{
				func_302(iLocal_35[iLocal_1249], 0, 262144);
			}
			break;
		case 6:
			if (__LIB_1__::func_348(Global_35, iLocal_35[iLocal_1249]) < 15f)
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_35[iLocal_1249], &Local_726);
			}
			else if (__LIB_0__::func_163(iLocal_35[iLocal_1249], 242628503))
			{
				TASK::CLEAR_PED_TASKS(iLocal_35[iLocal_1249], true, false);
			}
			if (VEHICLE::_0xA9E185D498B9AC67(iLocal_34, Global_35) || VEHICLE::_0xA9E185D498B9AC67(iLocal_34, Global_1935630.f_40))
			{
				if (!__LIB_0__::func_163(iLocal_35[iLocal_1249], 242628503))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (__LIB_1__::func_372(iLocal_35[iLocal_1249], 0) == joaat("WEAPON_UNARMED"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_35[iLocal_1249], func_258(iLocal_1249), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					}
					TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
					__LIB_1__::func_474(iLocal_35[iLocal_1249], &iVar0, 0, 0, 1, 1);
				}
			}
			break;
		case 9:
			if (func_297(iLocal_1249, iLocal_1248))
			{
				__LIB_1__::func_649(&iLocal_1275, 3, iLocal_1249);
			}
			break;
	}
}

void func_120()
{
	if (__LIB_2__::func_136(Global_35, 0))
	{
		func_312(&Local_936);
	}
	else
	{
		func_313(&Local_936);
	}
}

void func_121()
{
	int iVar0;
	if (!bLocal_794)
	{
		return;
	}
	if (__LIB_2__::func_136(Global_35, 0))
	{
		return;
	}
	bLocal_794 = false;
	if (__LIB_2__::func_1(iLocal_795, 0, 1))
	{
		if (bLocal_797)
		{
			bLocal_797 = false;
			__LIB_2__::func_122(iLocal_35[iLocal_798], func_314(iLocal_14, iLocal_798, 0, bLocal_800, bLocal_799), 1744022339, 0, 1, &(Local_245[iLocal_798 /*32*/].f_23), func_315(iLocal_14, iLocal_798, 0, bLocal_800, bLocal_799), 1);
			bLocal_800 = false;
			bLocal_799 = false;
		}
		else
		{
			switch (iLocal_798)
			{
				case 2:
					switch (iLocal_796)
					{
						case 1024:
							iVar0 = 1;
							break;
						case 2048:
							iVar0 = 2;
							break;
					}
					break;
				case 3:
					switch (iLocal_796)
					{
						case 1024:
							iVar0 = 1;
							break;
						case 2048:
							iVar0 = 2;
							break;
					}
					break;
			}
			__LIB_2__::func_478(iLocal_795, Global_35, func_283(iLocal_796, 2), 0, -1082130432 /* Float: -1f */, iVar0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

void func_122()
{
	func_317(0);
	func_317(1);
	func_317(2);
	func_317(3);
}

void func_123()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34))
	{
		if (!bLocal_793)
		{
			func_58(0);
			bLocal_793 = true;
		}
	}
	if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false) == iLocal_34)
	{
		if (bLocal_793)
		{
			func_58(1);
			bLocal_793 = false;
		}
	}
	else if (bLocal_793)
	{
		if (__LIB_3__::func_332(Local_51.f_51, 1) >= 30f)
		{
			func_58(1);
			bLocal_793 = false;
		}
	}
	else if (__LIB_3__::func_332(Local_51.f_51, 1) < 30f)
	{
		func_58(0);
		bLocal_793 = true;
	}
}

void func_124()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[iVar0]))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_35[iVar0]))
		{
			return;
		}
		if (PED::_IS_PED_HOGTIED(iLocal_35[iVar0]))
		{
			__LIB_2__::func_788(&(iLocal_35[iVar0]), 1, 1, 1);
			iLocal_35[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_125()
{
	int iVar0;
	int iVar1;
	if (Local_51.f_46)
	{
		return;
	}
	if (bLocal_804)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_803) > 3000)
		{
			Local_51.f_46 = 1;
			func_275(500, 350, 600, 200);
			func_31(134217728);
			func_31(268435456);
			func_101(8192);
			__LIB_1__::func_649(&iLocal_758, 9);
			func_276(iLocal_35[2], 1024, iLocal_35[3], 1024, 0, 0, 0, 0, 3, 2, -1, -1);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
	{
		VEHICLE::_0xA19447D83294E29F(iLocal_34, &iVar0, &iVar1);
		if (iVar0 != iVar1)
		{
			bLocal_804 = true;
			iLocal_803 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_126()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_51.f_46)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_45[iVar0]))
		{
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uLocal_45[iVar0]) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_45[iVar0], Global_35, 1, 1))
		{
		}
		else
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_45[iVar0], Global_35, 1, 1))
			{
				iVar1 = Global_35;
			}
			else
			{
				iVar1 = PED::GET_PED_SOURCE_OF_DEATH(uLocal_45[iVar0]);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
				}
				else
				{
					iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
					if (Global_35 == iVar2 || Global_1935630.f_40 == iVar2)
					{
						Local_51.f_46 = 1;
						func_275(400, 200, 600, 500);
						func_31(134217728);
						func_31(268435456);
						func_101(8192);
						func_276(iLocal_35[2], 2048, iLocal_35[3], 2048, 0, 0, 0, 0, 3, 2, -1, -1);
						__LIB_1__::func_649(&iLocal_758, 9);
					}
				}
				iVar0++;
			}
		}
	}
}

bool func_128(int iParam0, vector3 vParam1, var uParam4, var uParam5)
{
	int iVar0;
	if (iParam0 == 1)
	{
		return true;
	}
	if (__LIB_0__::func_86(vParam1))
	{
		return false;
	}
	else if (TASK::_DOES_SCENARIO_POINT_EXIST(*uParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
		{
			iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(*uParam4);
			func_319(joaat("P_TRUNK06X"), vParam1, &iVar0, *uParam5, joaat("RANSACK_ATTACHED_CHEST_MEDIUM"));
			__LIB_3__::func_882(joaat("P_TRUNK06X"), vParam1, &iVar0, joaat("AMMO_REPEATER_AMMOBOX"), 24, *uParam5, joaat("RANSACK_ATTACHED_CHEST_MEDIUM"), 0);
			__LIB_3__::func_882(joaat("P_TRUNK06X"), vParam1, &iVar0, joaat("AMMO_REVOLVER_AMMOBOX"), 18, *uParam5, joaat("RANSACK_ATTACHED_CHEST_MEDIUM"), 0);
			return true;
		}
		else
		{
			*uParam4 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(*uParam5);
		}
	}
	else
	{
		*uParam5 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vParam1, joaat("RANSACK_ATTACHED_CHEST_MEDIUM"), 5f, 1, false);
	}
	return false;
}

bool func_129()
{
	switch (iLocal_763)
	{
		case 0:
			iLocal_763 = 1;
			break;
		case 1:
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_528.f_1, true, false))
			{
				return false;
			}
			else
			{
				iLocal_763 = 2;
			}
			break;
		case 2:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_32))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_528.f_1, sLocal_32);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_33))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_528.f_1, sLocal_33);
			}
			iLocal_763 = 3;
			break;
		case 3:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_32) && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_528.f_1, sLocal_32))
			{
				return false;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_33) && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_528.f_1, sLocal_33))
			{
				return false;
			}
			iLocal_763 = 4;
			break;
		case 4:
			return true;
	}
	return false;
}

float func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 45f;
				case 1:
					return 45f;
				case 2:
					return 45f;
				case 3:
					return 55f;
				case 4:
					return 45f;
				case 5:
					return 55f;
				default:
					break;
			}
			break;
	}
	return 45f;
}

void func_133(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
	{
		PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_35[iParam0], "Default_Curious");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_35[iParam0], "Default_Shocked");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_35[iParam0], "Default_Angry");
		if (func_53(iParam0) && iLocal_14 == 1)
		{
			PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_35[iParam0], "Default_Panic");
		}
	}
}

void func_134(var uParam0, int iParam1, int iParam2)
{
	__LIB_3__::func_899(uParam0, func_324(), "", func_325(iParam1, iParam2, Local_51.f_51), 0, func_326(), func_327(iParam1, iParam2), func_327(iParam1, iParam2), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0);
}

void func_135(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	__LIB_2__::func_602(uParam1[0 /*17*/], __LIB_2__::func_460(7), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam1[1 /*17*/], __LIB_2__::func_460(10), 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_451(uParam0, 0);
	__LIB_2__::func_526(uParam1, bParam3, 0);
	*uParam2 = __LIB_2__::func_340(1, 0, 0) | 64 | 128;
}

void func_136(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	if (iParam1 == 1)
	{
		sVar0 = "RE_AMD_LWL_V2_GREET_DEFUSE";
		if (bParam3)
		{
			sVar0 = "RE_AMD_LWL_V1_GREET_DEFUSE";
		}
		func_332(uParam0, bParam2, sVar0, "RE_AMD_LWL_V2_GREET_POS", "RE_AMD_LWL_V2_GREET_NEG", 0);
	}
	else
	{
		func_332(uParam0, bParam2, "RE_AMD_LWL_V1_GREET_DEFUSE", "RE_AMD_LWL_V1_GREET_POS", "RE_AMD_LWL_V1_GREET_NEG", 0);
	}
}

void func_139()
{
	if (!Local_51.f_46)
	{
		switch (iLocal_14)
		{
			case 1:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[2]))
				{
					switch (iLocal_814)
					{
						case 0:
							if (func_334(iLocal_35[0], iLocal_35[2], 1, 291934926))
							{
								__LIB_2__::func_315(1891783641, iLocal_35[0], 1);
								iLocal_814++;
							}
							break;
						case 1:
							if (func_334(iLocal_35[2], iLocal_35[0], 2, 291934926))
							{
								PED::_0xF9CBD46433E36713(Global_35, iLocal_35[2], 0f, 0f, 0f, 10f, 40f, 100f, 100f, "ARMS_DEAL");
								__LIB_2__::func_315(1891783641, iLocal_35[2], 1);
								iLocal_814++;
							}
							break;
						case 2:
							if (func_334(iLocal_35[0], iLocal_35[2], 4, 291934926))
							{
								__LIB_2__::func_315(1891783641, iLocal_35[2], 1);
								iLocal_814++;
							}
							break;
						case 3:
							if (func_334(iLocal_35[2], iLocal_35[0], 8, 291934926))
							{
								iLocal_814++;
							}
							break;
						case 4:
							if (func_334(iLocal_35[0], iLocal_35[2], 16, 291934926))
							{
								iLocal_814++;
							}
							break;
						case 5:
							if (func_334(iLocal_35[2], iLocal_35[0], 32, 291934926))
							{
								iLocal_814++;
							}
							break;
					}
				}
				break;
			case 0:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[2]))
				{
					switch (iLocal_814)
					{
						case 0:
							if (func_334(iLocal_35[0], iLocal_35[2], 1, 1744022339))
							{
								__LIB_2__::func_315(1891783641, iLocal_35[0], 1);
								iLocal_814++;
							}
							break;
						case 1:
							if (func_334(iLocal_35[2], iLocal_35[0], 64, 1744022339))
							{
								__LIB_2__::func_315(1891783641, iLocal_35[2], 1);
								iLocal_814++;
							}
							break;
						case 2:
							if (func_334(iLocal_35[2], iLocal_35[0], 128, 1744022339))
							{
								__LIB_2__::func_315(1891783641, iLocal_35[2], 1);
								iLocal_814++;
							}
							break;
						case 3:
							if (func_334(iLocal_35[3], iLocal_35[0], 512, 1744022339))
							{
								__LIB_2__::func_315(1891783641, iLocal_35[3], 1);
								iLocal_814++;
							}
							break;
						case 4:
							if (func_334(iLocal_35[3], iLocal_35[0], 16384, 1744022339))
							{
								iLocal_814++;
							}
							break;
						case 5:
							if (func_334(iLocal_35[1], iLocal_35[2], 8192, 1744022339))
							{
								iLocal_814++;
							}
							break;
						case 6:
							if (func_334(iLocal_35[2], iLocal_35[3], 32768, 291934926))
							{
								iLocal_814++;
							}
							break;
					}
				}
				break;
		}
	}
}

void func_140()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_528.f_1) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_528.f_1, false))
	{
		fLocal_829 = -1f;
		return;
	}
	fLocal_829 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_528.f_1);
}

void func_141()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[iVar0]))
		{
			func_336(iVar0);
			if (func_165(2, iVar0) || (func_28(1) && iLocal_1252 == iVar0))
			{
			}
			else if (func_337(iVar0, "ENDSINWALK", 1))
			{
				func_338(iVar0, 1);
				func_213(2, iVar0);
			}
		}
		iVar0++;
	}
	switch (iLocal_14)
	{
		case 1:
			if (func_28(1) && iLocal_1252 == 3)
			{
			}
			else if (func_339(iLocal_35[3], "ENDSINSTAND") && !func_165(2, 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				PED::FORCE_PED_MOTION_STATE(0, joaat("MOTIONSTATE_IDLE"), false, 0, false);
				TASK::TASK_STAND_STILL(0, 250);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_34, -1, 0, 1f, 262145, 0);
				__LIB_1__::func_474(iLocal_35[3], &iVar1, 0, 0, 1, 1);
				func_31(2048);
				func_213(32, 3);
				iLocal_1249 = 3;
				func_213(1, 3);
				func_213(2, 3);
			}
			if (func_337(2, "cashGrab", 134217728))
			{
			}
			else if (func_337(2, "cashExchange", 268435456))
			{
				__LIB_2__::func_190(iLocal_35[2], __LIB_3__::func_540(joaat("REWARD_BEAT_SMALL"), 0, -1));
				__LIB_2__::func_190(iLocal_35[0], __LIB_3__::func_540(joaat("REWARD_BEAT_LARGE"), 0, -1));
			}
			else if (func_337(0, "cashDrop", 536870912))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_503[1 /*12*/].f_8))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, "Cash", Local_503[1 /*12*/].f_8);
					OBJECT::DELETE_OBJECT(&(Local_503[1 /*12*/].f_8));
				}
				func_31(16);
			}
			break;
		case 0:
			if (!func_28(256))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_35[0], -1145714767))
				{
					func_31(256);
					func_340(&iLocal_765, &iLocal_766, 1, 0, 0);
				}
			}
			if (func_337(2, "fireGun", 67108864))
			{
				__LIB_2__::func_315(1066055203, iLocal_35[2], 1);
			}
			if (func_337(3, "fireGun", 67108864))
			{
				func_154(0);
				__LIB_2__::func_315(1066055203, iLocal_35[3], 1);
			}
			break;
	}
}

void func_142()
{
	float fVar0;
	bool bVar1;
	if (iLocal_14 == 0 && !func_165(2, 3))
	{
		if (func_341(9))
		{
			if (__LIB_2__::func_215(iLocal_35[2], Global_35, 0, 20f, 0) || __LIB_2__::func_215(iLocal_35[3], Global_35, 0, 20f, 0))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[3]), iLocal_35[3]);
				iLocal_1249 = 3;
				func_31(2048);
				func_31(32768);
				func_213(32, 3);
				func_213(2, 3);
			}
		}
	}
	if (!func_28(32) && iLocal_14 != 1)
	{
		if ((func_341(1) && iLocal_14 == 0) || (func_341(8) && iLocal_14 == 1))
		{
			return;
		}
		fVar0 = __LIB_3__::func_332(Local_51.f_51, 1);
		bVar1 = false;
		if (fVar0 < 3f)
		{
			bVar1 = true;
		}
		else if (fVar0 < 7f)
		{
			if (__LIB_0__::func_75(&uLocal_926))
			{
				if (__LIB_1__::func_871(&uLocal_926) > 2000)
				{
					bVar1 = true;
					__LIB_0__::func_37(&uLocal_926);
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_926);
			}
		}
		else if (__LIB_0__::func_75(&uLocal_926))
		{
			__LIB_0__::func_37(&uLocal_926);
		}
		if (bVar1)
		{
			func_31(32);
			func_101(4096);
			__LIB_2__::func_461(0);
			__LIB_2__::func_478(iLocal_35[2], iLocal_35[0], func_283(4194304, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

void func_143()
{
	if (iLocal_14 == 1)
	{
		return;
	}
	if (!iLocal_788[3])
	{
		iLocal_788[3] = 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_35[2], joaat("GUNEQUIPPED")) && !iLocal_788[2])
	{
		iLocal_788[2] = 1;
	}
}

bool func_144()
{
	if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_528.f_1) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_528.f_1, false)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_528.f_1, false))
	{
		return true;
	}
	return false;
}

bool func_145()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_2__::func_1(iLocal_35[iVar0], 0, 1))
		{
			if (!func_165(2, iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_146()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	if (((Local_51.f_46 || __LIB_13__::func_805(256)) || __LIB_13__::func_805(512)) || func_165(2, iLocal_1252))
	{
		return false;
	}
	fVar2 = __LIB_3__::func_332(Local_51.f_51, 1);
	if (func_291(1))
	{
		if (func_165(8192, 1))
		{
			if (iLocal_761 < 1)
			{
				func_345(1, 0, 3);
				__LIB_1__::func_649(&iLocal_761, 2);
			}
			else if (func_165(131072, 1) && !func_165(524288, 1))
			{
				func_136(&(Local_936[1 /*75*/].f_21), iLocal_14, 1, 0);
				func_293(1, 0, 1, 1);
				func_213(524288, 1);
			}
		}
		else if (func_165(65536, 1))
		{
			__LIB_1__::func_649(&iLocal_761, 7);
		}
	}
	if (func_291(3))
	{
		if (func_165(8192, 3))
		{
			if (iLocal_761 < 1)
			{
				func_345(3, 1, 0);
				__LIB_1__::func_649(&iLocal_761, 2);
			}
			else if (func_165(131072, 3) && !func_165(524288, 3))
			{
				func_136(&(Local_936[3 /*75*/].f_21), iLocal_14, 1, 0);
				func_293(3, 0, 1, 1);
				func_213(524288, 3);
			}
		}
		else if (func_165(65536, 3))
		{
			__LIB_1__::func_649(&iLocal_761, 7);
		}
	}
	switch (iLocal_761)
	{
		case 0:
			if (fVar2 < 16f)
			{
				iLocal_815++;
				if (iLocal_815 > 3)
				{
					iLocal_815 = 0;
				}
				if (__LIB_4__::func_102(iLocal_35[iLocal_815], &uLocal_867, &uLocal_866, 0))
				{
					if (func_341(8))
					{
						__LIB_1__::func_649(&iLocal_761, 8);
					}
					else
					{
						func_348(&uLocal_837);
						__LIB_1__::func_649(&iLocal_761, 1);
					}
				}
			}
			break;
		case 1:
			func_148();
			fVar0 = __LIB_3__::func_588(&Local_51, 1);
			fVar1 = __LIB_3__::func_588(&Local_51, 3);
			if (fVar1 < fVar0)
			{
				func_345(3, 1, 0);
			}
			else
			{
				func_345(1, 0, 3);
			}
			__LIB_1__::func_649(&iLocal_761, 2);
			break;
		case 2:
			if (__LIB_13__::func_805(-2147483648))
			{
				func_345(3, 1, 0);
				__LIB_1__::func_649(&iLocal_761, 7);
				return false;
			}
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[iLocal_1252]), iLocal_35[iLocal_1252]);
			TASK::CLEAR_PED_TASKS(iLocal_35[iLocal_1252], true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1000, -1f, -1f, -1f);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_670[iLocal_50 /*2*/], Local_670[iLocal_50 /*2*/].f_1, Global_35, -1, 4f, -4f, 67125760, 0f, false, false, -1f, "UpperbodyFixup_filter", 65538, -1f);
			__LIB_1__::func_474(iLocal_35[iLocal_1252], &iVar4, 0, 0, 1, 1);
			fLocal_828 = __LIB_3__::func_588(&Local_51, iLocal_1252);
			__LIB_1__::func_148(&uLocal_905);
			func_31(1);
			__LIB_0__::func_325(&iLocal_831);
			func_213(131072, iLocal_1252);
			func_160(8192, iLocal_1252);
			if (func_53(iLocal_1252))
			{
				func_294(iLocal_1252, 1, 0);
			}
			else
			{
				func_294(iLocal_1252, 3, 0);
			}
			func_293(iLocal_1252, 0, 1, 0);
			__LIB_1__::func_649(&iLocal_761, 3);
			break;
		case 3:
			if (__LIB_0__::func_27(iLocal_805, 65536))
			{
				if ((!__LIB_13__::func_805(2048) && !func_165(16384, iLocal_1252)) && __LIB_0__::func_265(&uLocal_911) > 2f)
				{
					if (func_53(iLocal_1252))
					{
						func_294(iLocal_1252, 1, 1);
					}
					else
					{
						func_294(iLocal_1252, 3, 1);
					}
					func_293(iLocal_1252, 1, 1, 0);
					func_101(2048);
				}
			}
			else if (func_339(iLocal_35[iLocal_1252], "RE_AD_WARN"))
			{
				__LIB_1__::func_148(&uLocal_911);
				__LIB_2__::func_478(iLocal_35[iLocal_1252], Global_35, func_283(65536, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				__LIB_2__::func_73(iLocal_35[iLocal_1252], &(uLocal_40[iLocal_1252]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				__LIB_1__::func_683(&iLocal_805, 65536);
			}
			if (fVar2 < 3.5f || __LIB_3__::func_464(iLocal_35[iLocal_1252], 0, &uLocal_837, &iLocal_865, 0, 0))
			{
				__LIB_1__::func_649(&iLocal_761, 7);
			}
			if (fLocal_828 != 0f)
			{
				if (fVar2 > (fLocal_828 + 10f))
				{
					__LIB_1__::func_649(&iLocal_761, 6);
				}
				else if (func_165(524288, iLocal_1252) && fVar2 > (fLocal_828 + 1f))
				{
					__LIB_1__::func_649(&iLocal_761, 6);
				}
			}
			if (__LIB_0__::func_265(&uLocal_905) > 4f && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_35[iLocal_1252], Local_670[iLocal_50 /*2*/], Local_670[iLocal_50 /*2*/].f_1, 1))
			{
				__LIB_1__::func_649(&iLocal_761, 4);
			}
			if (func_28(16))
			{
				__LIB_1__::func_649(&iLocal_758, 4);
			}
			break;
		case 4:
			fVar3 = __LIB_0__::func_251(__LIB_3__::func_588(&Local_51, iLocal_1252), 0f, 8f);
			PED::_0x8ACC0506743A8A5C(iLocal_35[iLocal_1252], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			if ((iLocal_1252 == 3 && !func_352(iLocal_35[iLocal_1252])) || (iLocal_1252 == 1 && func_352(iLocal_35[iLocal_1252])))
			{
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, (fVar3 * 0.95f), (fVar3 * 0.95f), 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_353(iLocal_785, iLocal_786, iLocal_1252), Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
			}
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
			__LIB_1__::func_474(iLocal_35[iLocal_1252], &iVar4, 0, 0, 1, 1);
			iLocal_788[iLocal_1252] = 1;
			__LIB_1__::func_148(&uLocal_905);
			__LIB_1__::func_649(&iLocal_761, 5);
			break;
		case 5:
			if (fVar2 < 3.5f || __LIB_3__::func_464(iLocal_35[iLocal_1252], 0, &uLocal_837, &iLocal_865, 0, 0))
			{
				__LIB_1__::func_649(&iLocal_761, 7);
			}
			if (fLocal_828 != 0f)
			{
				if (fVar2 > (fLocal_828 + 10f))
				{
					__LIB_1__::func_649(&iLocal_761, 6);
				}
				else if (func_165(524288, iLocal_1252) && fVar2 > (fLocal_828 + 1f))
				{
					__LIB_1__::func_649(&iLocal_761, 6);
				}
			}
			if (__LIB_0__::func_265(&uLocal_905) > 5f)
			{
				if (!func_341(5) || func_341(6))
				{
					__LIB_1__::func_649(&iLocal_761, 7);
				}
			}
			if (func_28(16))
			{
				__LIB_1__::func_649(&iLocal_758, 4);
			}
			break;
		case 6:
			if (__LIB_2__::func_1(iLocal_35[iLocal_1252], 0, 1) && __LIB_2__::func_1(iLocal_35[iLocal_1253], 0, 1))
			{
				iLocal_788[iLocal_1252] = 0;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_35[iLocal_1252], iLocal_35[iLocal_1253], 0, -1f, -1f, -1f);
				__LIB_1__::func_649(&iLocal_761, 8);
				PED::_0x78815FC52832B690(iLocal_35[iLocal_1252], 1);
			}
			break;
		case 7:
			func_354(&uLocal_1254);
			func_31(134217728);
			func_31(268435456);
			Local_51.f_46 = 1;
			func_31(64);
			__LIB_1__::func_148(&uLocal_905);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_35[0], 700);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_35[2], 700);
			if (iLocal_865 == 1024)
			{
				func_31(536870912);
				__LIB_2__::func_478(iLocal_35[1], Global_35, func_283(8388608, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else if (__LIB_13__::func_805(-2147483648))
			{
				__LIB_2__::func_478(iLocal_35[iLocal_1252], Global_35, func_283(134217728, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_278(iLocal_35[iLocal_1252], iLocal_1252);
			}
			return true;
		case 8:
			if (fVar2 < 3.5f)
			{
				__LIB_1__::func_649(&iLocal_761, 7);
			}
			if (func_28(1))
			{
				if (fVar2 < 9f)
				{
					__LIB_1__::func_649(&iLocal_761, 7);
				}
			}
			break;
	}
	return false;
}

void func_147(int iParam0)
{
	__LIB_4__::func_64(iParam0);
	__LIB_3__::func_385(iParam0, 1);
	func_8(iParam0, 500);
	__LIB_3__::func_388(iParam0, 1);
	__LIB_3__::func_393(iParam0, 0);
	__LIB_2__::func_180(iParam0, 0);
	__LIB_3__::func_232(iParam0, 1);
	__LIB_4__::func_82(iParam0, 8000);
	func_44(iParam0, 0);
}

void func_148()
{
	Local_51.f_44 = 1;
	Local_51.f_45 = 1;
	if (!__LIB_18__::func_203(2, 2))
	{
		if (__LIB_1__::func_509(iLocal_35[2]) == 2 || __LIB_1__::func_509(iLocal_35[3]) == 2)
		{
			func_31(2);
		}
	}
}

void func_149()
{
	if (iLocal_1252 == 3)
	{
		func_358(3, 0, 1065353216 /* Float: 1f */, 0, 0);
	}
	else if (iLocal_1252 == 1)
	{
		func_359(1, 0, 1065353216 /* Float: 1f */, 0);
	}
}

void func_150(int iParam0, float fParam1, bool bParam2)
{
	if (__LIB_2__::func_1(iParam0, 0, 0))
	{
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, bParam2, fParam1);
	}
}

bool func_151()
{
	if (__LIB_3__::func_332(Local_51.f_51, 1) > 30f)
	{
		return false;
	}
	return true;
}

bool func_152()
{
	float fVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_1252]))
	{
		return false;
	}
	if (iLocal_762 < 10)
	{
		if (func_291(1))
		{
			if (func_165(65536, 1))
			{
				__LIB_1__::func_649(&iLocal_762, 10);
			}
		}
		if (func_291(3))
		{
			if (func_165(65536, 3))
			{
				__LIB_1__::func_649(&iLocal_762, 10);
			}
		}
	}
	switch (iLocal_762)
	{
		case 0:
			func_31(1048576);
			func_31(128);
			func_136(&(Local_936[1 /*75*/].f_21), iLocal_14, 1, 1);
			func_293(1, 1, 1, 0);
			func_136(&(Local_936[3 /*75*/].f_21), iLocal_14, 1, 1);
			func_293(3, 1, 1, 0);
			func_361(iLocal_1252, &iLocal_35, &uLocal_1269, &uLocal_1259);
			func_31(64);
			__LIB_1__::func_649(&iLocal_762, 1);
			break;
		case 1:
			__LIB_2__::func_461(0);
			__LIB_1__::func_148(&uLocal_911);
			func_169(iLocal_35[uLocal_1269[0]], Global_35, 2097152, 1744022339);
			if (func_362(iLocal_35[uLocal_1269[0]], Local_528.f_1))
			{
				func_213(2, uLocal_1269[0]);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[uLocal_1269[0]]), iLocal_35[uLocal_1269[0]]);
			}
			func_363(iLocal_35[uLocal_1269[0]], func_258(uLocal_1269[0]), 0);
			__LIB_1__::func_148(&uLocal_914);
			__LIB_1__::func_649(&iLocal_762, 2);
			break;
		case 2:
			if (__LIB_1__::func_871(&uLocal_914) > 250)
			{
				if (func_362(iLocal_35[uLocal_1269[1]], Local_528.f_1))
				{
					func_213(2, uLocal_1269[1]);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[uLocal_1269[1]]), iLocal_35[uLocal_1269[1]]);
				}
				func_363(iLocal_35[uLocal_1269[1]], func_258(uLocal_1269[1]), 1);
				__LIB_1__::func_148(&uLocal_914);
				__LIB_1__::func_649(&iLocal_762, 3);
			}
			break;
		case 3:
			if (__LIB_1__::func_871(&uLocal_914) > 450)
			{
				if (func_362(iLocal_35[uLocal_1269[2]], Local_528.f_1))
				{
					func_213(2, uLocal_1269[2]);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[uLocal_1269[2]]), iLocal_35[uLocal_1269[2]]);
				}
				func_363(iLocal_35[uLocal_1269[2]], func_258(uLocal_1269[2]), 1);
				__LIB_1__::func_148(&uLocal_914);
				__LIB_1__::func_649(&iLocal_762, 4);
			}
			break;
		case 4:
			if (__LIB_1__::func_871(&uLocal_914) > 450)
			{
				if (func_362(iLocal_35[uLocal_1269[3]], Local_528.f_1))
				{
					func_213(2, uLocal_1269[3]);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[uLocal_1269[3]]), iLocal_35[uLocal_1269[3]]);
				}
				func_363(iLocal_35[uLocal_1269[3]], func_258(uLocal_1269[3]), 1);
				__LIB_0__::func_37(&uLocal_914);
				__LIB_1__::func_148(&uLocal_917);
				__LIB_1__::func_649(&iLocal_762, 5);
			}
			break;
		case 5:
			fVar0 = __LIB_3__::func_588(&Local_51, iLocal_1252);
			if (fVar0 > 15f)
			{
				__LIB_1__::func_649(&iLocal_762, 6);
			}
			else if (((__LIB_0__::func_265(&uLocal_917) > 2f && fVar0 < 7f) || (__LIB_0__::func_265(&uLocal_917) > 5f && fVar0 < 15f)) || __LIB_3__::func_643(&Local_51, iLocal_1252, 5f))
			{
				func_275(0, 0, 0, 0);
				func_169(iLocal_35[3], Global_35, 524288, 291934926);
				__LIB_1__::func_649(&iLocal_762, 10);
			}
			break;
		case 6:
			if (__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				__LIB_1__::func_148(&uLocal_914);
				func_309(2, 0, 1065353216 /* Float: 1f */, 0);
				__LIB_1__::func_649(&iLocal_762, 7);
			}
			break;
		case 7:
			if (__LIB_1__::func_871(&uLocal_914) > 300)
			{
				__LIB_1__::func_148(&uLocal_914);
				func_358(3, 0, 1065353216 /* Float: 1f */, 0, 0);
				__LIB_1__::func_649(&iLocal_762, 8);
			}
			break;
		case 8:
			if (__LIB_1__::func_871(&uLocal_914) > 400)
			{
				__LIB_1__::func_148(&uLocal_914);
				func_365(0, 0, 1065353216 /* Float: 1f */, 0);
				if (!__LIB_0__::func_27(iLocal_805, 16))
				{
					func_169(iLocal_35[0], iLocal_35[2], 16, 291934926);
				}
				__LIB_1__::func_649(&iLocal_762, 9);
			}
			break;
		case 9:
			if (__LIB_1__::func_871(&uLocal_914) > 450)
			{
				__LIB_0__::func_37(&uLocal_914);
				func_359(1, 0, 1065353216 /* Float: 1f */, 0);
				__LIB_1__::func_649(&iLocal_762, 11);
			}
			break;
		case 10:
			__LIB_0__::func_325(&iLocal_831);
			func_354(&uLocal_1254);
			func_31(134217728);
			func_31(268435456);
			func_147(&(Local_51.f_5));
			__LIB_1__::func_649(&iLocal_758, 9);
			break;
		case 11:
			return true;
	}
	return false;
}

void func_153()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[iVar0]))
		{
			func_336(iVar0);
		}
		iVar0++;
	}
}

void func_154(bool bParam0)
{
	int iVar0;
	if (func_28(8))
	{
		return;
	}
	if (bParam0)
	{
		if ((((__LIB_2__::func_1(iLocal_35[0], 0, 0) && __LIB_9__::func_365(iLocal_35[0])) || (__LIB_2__::func_1(iLocal_35[1], 0, 0) && __LIB_9__::func_365(iLocal_35[1]))) || (__LIB_2__::func_1(iLocal_35[2], 0, 0) && __LIB_9__::func_365(iLocal_35[2]))) || (__LIB_2__::func_1(iLocal_35[3], 0, 0) && __LIB_9__::func_365(iLocal_35[3])))
		{
			return;
		}
	}
	if (__LIB_2__::func_1(uLocal_45[0], 0, 1))
	{
		TASK::CLEAR_PED_TASKS(uLocal_45[0], true, false);
		if (PED::_GET_RIDER_OF_MOUNT(uLocal_45[0], true) == 0)
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(uLocal_45[0], Local_51.f_51, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		else
		{
			TASK::TASK_HORSE_ACTION(uLocal_45[0], 5, iLocal_34, 0);
		}
		PED::SET_PED_KEEP_TASK(uLocal_45[0], true);
	}
	if (__LIB_2__::func_1(uLocal_45[1], 0, 1))
	{
		TASK::CLEAR_PED_TASKS(uLocal_45[1], true, false);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (PED::_GET_RIDER_OF_MOUNT(uLocal_45[1], true) == 0)
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Local_51.f_51, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		else
		{
			TASK::TASK_HORSE_ACTION(0, 5, iLocal_34, 0);
		}
		__LIB_1__::func_474(uLocal_45[1], &iVar0, 0.2f, 0.25f, 1, 1);
		PED::SET_PED_KEEP_TASK(uLocal_45[1], true);
	}
	__LIB_1__::func_683(&iLocal_806, 8);
}

bool func_155()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_528.f_1) || __LIB_13__::func_805(512))
	{
		func_367();
		if (func_28(8388608))
		{
			func_340(&iLocal_765, &iLocal_766, 1, func_28(268435456), func_28(134217728));
		}
		else if (iLocal_14 == 1)
		{
			func_368(&iLocal_35, &uLocal_767);
		}
		else
		{
			func_340(&iLocal_765, &iLocal_766, 1, func_28(268435456), func_28(134217728));
		}
		return true;
	}
	switch (iLocal_764)
	{
		case 0:
			func_367();
			if (func_28(8388608))
			{
				func_340(&iLocal_765, &iLocal_766, 1, func_28(268435456), func_28(134217728));
			}
			else if (iLocal_14 == 1)
			{
				func_368(&iLocal_35, &uLocal_767);
			}
			else if (__LIB_13__::func_805(4096))
			{
				func_340(&iLocal_765, &iLocal_766, 1, 0, 0);
			}
			else
			{
				func_340(&iLocal_765, &iLocal_766, 1, func_28(268435456), func_28(134217728));
			}
			func_354(&uLocal_1254);
			func_369();
			func_361(iLocal_1252, &iLocal_35, &uLocal_1269, &uLocal_1259);
			func_370(&uLocal_1269, &uLocal_1264);
			__LIB_1__::func_649(&iLocal_764, 1);
			break;
		case 1:
			func_337(uLocal_1269[0], "onKneesBreakout", 33554432);
			if (!func_165(8, uLocal_1269[0]))
			{
				func_372(uLocal_1269[0], uLocal_1259[0], uLocal_1264[0], 50);
				func_213(2, uLocal_1269[0]);
			}
			__LIB_1__::func_148(&uLocal_914);
			__LIB_1__::func_649(&iLocal_764, 2);
			break;
		case 2:
			func_337(uLocal_1269[1], "onKneesBreakout", 33554432);
			if ((__LIB_1__::func_871(&uLocal_914) > uLocal_1254[1] || !__LIB_2__::func_1(iLocal_35[uLocal_1269[1]], 0, 1)) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_35[uLocal_1269[1]], Local_528.f_1))
			{
				if (!func_165(8, uLocal_1269[1]))
				{
					func_372(uLocal_1269[1], uLocal_1259[1], uLocal_1264[1], 100);
					func_213(2, uLocal_1269[1]);
				}
				__LIB_1__::func_148(&uLocal_914);
				__LIB_1__::func_649(&iLocal_764, 3);
			}
			break;
		case 3:
			func_337(uLocal_1269[2], "onKneesBreakout", 33554432);
			if ((__LIB_1__::func_871(&uLocal_914) > uLocal_1254[2] || !__LIB_2__::func_1(iLocal_35[uLocal_1269[2]], 0, 1)) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_35[uLocal_1269[2]], Local_528.f_1))
			{
				if (!func_165(8, uLocal_1269[2]))
				{
					func_372(uLocal_1269[2], uLocal_1259[2], uLocal_1264[2], 150);
					func_213(2, uLocal_1269[2]);
				}
				__LIB_1__::func_148(&uLocal_914);
				__LIB_1__::func_649(&iLocal_764, 4);
			}
			break;
		case 4:
			func_337(uLocal_1269[3], "onKneesBreakout", 33554432);
			if ((__LIB_1__::func_871(&uLocal_914) > uLocal_1254[3] || !__LIB_2__::func_1(iLocal_35[uLocal_1269[3]], 0, 1)) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_35[uLocal_1269[3]], Local_528.f_1))
			{
				if (!func_165(8, uLocal_1269[3]))
				{
					func_372(uLocal_1269[3], uLocal_1259[3], uLocal_1264[3], 200);
					func_213(2, uLocal_1269[3]);
				}
				__LIB_0__::func_37(&uLocal_914);
				__LIB_1__::func_649(&iLocal_764, 6);
			}
			break;
		case 5:
			__LIB_3__::func_319(Local_528.f_1);
			break;
		case 6:
			return true;
	}
	return false;
}

void func_156()
{
	if (func_28(268435456))
	{
		func_340(&iLocal_765, &iLocal_766, 0, 1, 0);
		if (!func_165(2097152, 2) && !func_165(8, 2))
		{
			func_213(2097152, 2);
			__LIB_2__::func_73(iLocal_35[2], &(uLocal_40[2]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			if (func_374(2))
			{
				func_213(1073741824 /* Float: 2f */, 2);
				func_375(2, &(uLocal_40[2]));
			}
			else
			{
				func_307(2, iLocal_788[2]);
			}
		}
		if (!func_165(2097152, 3) && !func_165(8, 3))
		{
			func_213(2097152, 3);
			__LIB_2__::func_73(iLocal_35[3], &(uLocal_40[3]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			if (func_374(3))
			{
				func_213(1073741824 /* Float: 2f */, 3);
				func_375(3, &(uLocal_40[3]));
			}
			else
			{
				func_307(3, iLocal_788[3]);
			}
		}
		if ((!MAP::DOES_BLIP_EXIST(uLocal_40[2]) && ENTITY::DOES_ENTITY_EXIST(iLocal_35[2])) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[2]))
		{
			__LIB_2__::func_73(iLocal_35[2], &(uLocal_40[2]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
		}
		if ((!MAP::DOES_BLIP_EXIST(uLocal_40[3]) && ENTITY::DOES_ENTITY_EXIST(iLocal_35[3])) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[3]))
		{
			__LIB_2__::func_73(iLocal_35[3], &(uLocal_40[3]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
		}
	}
	if (func_28(134217728))
	{
		func_340(&iLocal_765, &iLocal_766, 0, 0, 1);
		if (!func_165(2097152, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[0]))
		{
			func_213(2097152, 0);
			__LIB_2__::func_73(iLocal_35[0], &(uLocal_40[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			if (func_374(0))
			{
				func_213(1073741824 /* Float: 2f */, 0);
				func_375(0, &(uLocal_40[0]));
			}
			else
			{
				func_307(0, iLocal_788[0]);
			}
		}
		if (!func_165(2097152, 1) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[1]))
		{
			func_213(2097152, 1);
			__LIB_2__::func_73(iLocal_35[1], &(uLocal_40[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			if (func_374(1))
			{
				func_213(1073741824 /* Float: 2f */, 1);
				func_375(1, &(uLocal_40[1]));
			}
			else
			{
				func_307(1, iLocal_788[1]);
			}
		}
		if ((!MAP::DOES_BLIP_EXIST(uLocal_40[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_35[0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[0]))
		{
			__LIB_2__::func_73(iLocal_35[0], &(uLocal_40[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
		}
		if ((!MAP::DOES_BLIP_EXIST(uLocal_40[1]) && ENTITY::DOES_ENTITY_EXIST(iLocal_35[1])) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[1]))
		{
			__LIB_2__::func_73(iLocal_35[1], &(uLocal_40[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
		}
	}
}

bool func_157()
{
	if (!__LIB_2__::func_1(iLocal_35[2], 0, 1) && !__LIB_2__::func_1(iLocal_35[3], 0, 1))
	{
		return true;
	}
	if (func_165(8, 2) && func_165(8, 3))
	{
		return true;
	}
	return false;
}

void func_160(int iParam0, int iParam1)
{
	if (func_165(iParam0, iParam1))
	{
		__LIB_1__::func_681(&(uLocal_751[iParam1]), iParam0);
	}
}

void func_161(int iParam0, int iParam1)
{
	if (__LIB_2__::func_1(iLocal_35[iParam0], 0, 1))
	{
		func_309(iParam0, 0, 1065353216 /* Float: 1f */, 0);
		func_358(iParam1, 0, 1065353216 /* Float: 1f */, 0, 1);
	}
	else
	{
		func_309(iParam1, 0, 1065353216 /* Float: 1f */, 0);
	}
}

void func_162(int iParam0)
{
	__LIB_4__::func_64(iParam0);
	__LIB_3__::func_385(iParam0, 1);
	func_8(iParam0, 1500);
	__LIB_3__::func_388(iParam0, 1);
	__LIB_3__::func_386(iParam0, 1);
	__LIB_3__::func_393(iParam0, 0);
	__LIB_2__::func_180(iParam0, 0);
	func_44(iParam0, 0);
}

bool func_164()
{
	if (!__LIB_2__::func_1(iLocal_35[0], 0, 1) && !__LIB_2__::func_1(iLocal_35[1], 0, 1))
	{
		return true;
	}
	if (func_165(8, 0) && func_165(8, 1))
	{
		return true;
	}
	return false;
}

bool func_165(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(uLocal_751[iParam1], iParam0);
}

void func_166(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		DECORATOR::DECOR_REMOVE(*iParam0, "wagonFenceValue");
	}
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	__LIB_2__::func_478(iParam0, iParam1, func_283(iParam2, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, iParam3, 1, 0, 0);
	func_301(iParam2);
}

bool func_170(int iParam0)
{
	if (!__LIB_0__::func_27(*iParam0, 4))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
		{
			if (__LIB_3__::func_320(iLocal_34) == 0)
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_34))
				{
					__LIB_4__::func_184(iLocal_34);
					__LIB_1__::func_683(iParam0, 4);
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

bool func_171(int iParam0)
{
	return __LIB_0__::func_27(iLocal_805, iParam0);
}

bool func_180(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return false;
	}
	if (Global_1430231.f_4)
	{
		return false;
	}
	if (__LIB_7__::func_850(iVar0))
	{
		__LIB_4__::func_108(iParam0, __LIB_9__::func_321(iVar0));
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(*iParam0, "wagonFenceValue") && DECORATOR::DECOR_GET_INT(*iParam0, "wagonFenceValue") != 0)
	{
		return true;
	}
	return false;
}

void func_182()
{
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_34) && __LIB_2__::func_1(iLocal_35[iLocal_1248], 0, 1)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[iLocal_1248], -258271821, true) != 1)
	{
		TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_35[iLocal_1248], iLocal_34, 3f, 524295);
	}
}

int func_211(int iParam0)
{
	if (__LIB_2__::func_1((*iParam0)[2], 0, 1))
	{
		return 2;
	}
	else if (__LIB_2__::func_1((*iParam0)[3], 0, 1))
	{
		return 3;
	}
	else if (__LIB_2__::func_1((*iParam0)[0], 0, 1))
	{
		return 0;
	}
	else if (__LIB_2__::func_1((*iParam0)[1], 0, 1))
	{
		return 1;
	}
	return 2;
}

void func_213(int iParam0, int iParam1)
{
	if (!func_165(iParam0, iParam1))
	{
		__LIB_1__::func_683(&(uLocal_751[iParam1]), iParam0);
	}
}

char* func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pblSuccessMain";
		case 1:
			return "pblSuccessSkip";
		case 2:
			return "pblAmbushDealers";
		case 3:
			return "pblAmbushDealersSkip";
		case 4:
			return "pblAmbushConfeds";
		case 5:
			return "pblAmbushConfedsSkip";
		case 6:
			return "pblActionB";
		case 7:
			return "pblActionB";
		case 8:
			return "pblActionC";
		case 9:
			return "pblActionC";
		default:
			break;
	}
	return "INVALID PBL";
}

void func_256(var uParam0)
{
	if (!__LIB_2__::func_1(*uParam0, 0, 0))
	{
		return;
	}
	PED::_0x8ACC0506743A8A5C(*uParam0, joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
}

int func_258(int iParam0)
{
	if (iParam0 == 3)
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	return joaat("WEAPON_REVOLVER_CATTLEMAN");
}

bool func_273()
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_34))
	{
		return false;
	}
	if (func_28(1024) && (iLocal_1274 == 7 || iLocal_1274 == 10))
	{
		if (VEHICLE::_0xA9E185D498B9AC67(iLocal_34, Global_35) || VEHICLE::_0xA9E185D498B9AC67(iLocal_34, Global_1935630.f_40))
		{
			if (!__LIB_0__::func_75(&uLocal_920))
			{
				__LIB_1__::func_148(&uLocal_920);
			}
			else if (__LIB_0__::func_33(&uLocal_920))
			{
				__LIB_2__::func_112(&uLocal_920);
			}
			else if (__LIB_0__::func_265(&uLocal_920) > 6f)
			{
				func_31(67108864);
				return true;
			}
		}
		else if (__LIB_0__::func_75(&uLocal_920) && !__LIB_0__::func_33(&uLocal_920))
		{
			__LIB_2__::func_113(&uLocal_920);
		}
	}
	return false;
}

void func_275(int iParam0, int iParam1, int iParam2, int iParam3)
{
	__LIB_2__::func_461(0);
	__LIB_2__::func_504(iLocal_35[0], iParam0);
	__LIB_2__::func_504(iLocal_35[1], iParam1);
	__LIB_2__::func_504(iLocal_35[2], iParam2);
	__LIB_2__::func_504(iLocal_35[3], iParam3);
}

void func_276(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bLocal_794)
	{
	}
	if (__LIB_2__::func_1(iParam2, 0, 1) && iParam3 != 0)
	{
		if (func_171(iParam3))
		{
			return;
		}
		bLocal_794 = true;
		iLocal_795 = iParam2;
		iLocal_796 = iParam3;
		if (iParam9 != -1)
		{
			iLocal_798 = iParam9;
		}
	}
	else if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		if (func_171(iParam1))
		{
			return;
		}
		bLocal_794 = true;
		iLocal_795 = iParam0;
		iLocal_796 = iParam1;
		if (iParam8 != -1)
		{
			iLocal_798 = iParam8;
		}
	}
	else if (__LIB_2__::func_1(iParam6, 0, 1) && iParam7 != 0)
	{
		if (func_171(iParam7))
		{
			return;
		}
		bLocal_794 = true;
		iLocal_795 = iParam6;
		iLocal_796 = iParam7;
		if (iParam11 != -1)
		{
			iLocal_798 = iParam11;
		}
	}
	else if (__LIB_2__::func_1(iParam4, 0, 1) && iParam5 != 0)
	{
		if (func_171(iParam5))
		{
			return;
		}
		bLocal_794 = true;
		iLocal_795 = iParam4;
		iLocal_796 = iParam5;
		if (iParam10 != -1)
		{
			iLocal_798 = iParam10;
		}
	}
}

void func_278(int iParam0, int iParam1)
{
	if (bLocal_797)
	{
	}
	if (bLocal_794)
	{
		return;
	}
	bLocal_797 = true;
	bLocal_794 = true;
	iLocal_795 = iParam0;
	iLocal_798 = iParam1;
}

bool func_279(int iParam0)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, *iParam0, false))
	{
		return true;
	}
	if (AITRANSPORT::_0x619E63980BFC0096(Global_35, *iParam0, 0))
	{
		iVar0 = PED::GET_SEAT_PED_IS_TRYING_TO_ENTER(Global_35);
		switch (iVar0)
		{
			case -1:
				return true;
			case 0:
				return true;
			default:
				break;
		}
	}
	else
	{
		return PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, *iParam0);
	}
	return false;
}

int func_281(int iParam0)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, -1145714767))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_282(int iParam0)
{
	__LIB_4__::func_64(iParam0);
	__LIB_3__::func_385(iParam0, 1);
	func_8(iParam0, 1500);
	__LIB_3__::func_388(iParam0, 0);
	__LIB_3__::func_386(iParam0, 0);
	__LIB_3__::func_393(iParam0, 0);
	__LIB_2__::func_180(iParam0, 0);
	func_44(iParam0, 0);
}

char* func_283(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return __LIB_3__::func_394("AMD", "LWL", "CHECK", func_496(iLocal_14));
		case 2:
			return __LIB_3__::func_394("AMD", "LWL", "MANAGE", func_496(iLocal_14));
		case 4:
			return __LIB_3__::func_394("AMD", "LWL", "DONT_ASK", func_496(iLocal_14));
		case 8:
			return __LIB_3__::func_394("AMD", "LWL", "AGREED", func_496(iLocal_14));
		case 16:
			return __LIB_3__::func_394("AMD", "LWL", "FELLERS", func_496(iLocal_14));
		case 32:
			return __LIB_3__::func_394("AMD", "LWL", "CRIMES", func_496(iLocal_14));
		case 64:
			return __LIB_3__::func_394("AMD", "LWL", "DISAPPOINTED", func_496(iLocal_14));
		case 128:
			return __LIB_3__::func_394("AMD", "LWL", "CRAP", func_496(iLocal_14));
		case 512:
			return __LIB_3__::func_394("AMD", "LWL", "HANDS_UP", func_496(iLocal_14));
		case 1024:
			return "PROPERTY_STOLEN";
		case 2048:
			switch (iParam1)
			{
				case 2:
					return "ARRIVAL_COMBAT_RAID_MALE";
				case 3:
					return "CALLOUT_JUST_KILL_EM_MALE";
				default:
					break;
			}
			break;
		case 4096:
			return __LIB_3__::func_394("AMD", "LWL", "MOURN", func_496(iLocal_14));
		case 8192:
			return __LIB_3__::func_394("AMD", "LWL", "MOURN", func_496(iLocal_14));
		case 16384:
			return __LIB_3__::func_394("AMD", "LWL", "BED", func_496(iLocal_14));
		case 32768:
			return __LIB_3__::func_394("AMD", "LWL", "FLEE", func_496(iLocal_14));
		case 65536:
			return __LIB_3__::func_394("AMD", "LWL", "WARN", func_496(iLocal_14));
		case 131072:
			return __LIB_3__::func_394("AMD", "LWL", "THREATEN", func_496(iLocal_14));
		case 262144:
			return "BLOCKED_GENERIC";
		case 524288:
			return __LIB_3__::func_394("AMD", "LWL", "AGGRO", func_496(iLocal_14));
		case 1048576:
			return __LIB_3__::func_394("AMD", "LWL", "AGGRO", func_496(iLocal_14));
		case 2097152:
			return __LIB_3__::func_394("AMD", "LWL", "WARN_AGGRO", func_496(iLocal_14));
		case 4194304:
			return __LIB_3__::func_394("AMD", "LWL", "GUNFIGHT_EARLY", func_496(iLocal_14));
		case 8388608:
			return __LIB_3__::func_394("AMD", "LWL", "AGGRO_MOUNT", func_496(iLocal_14));
		case 16777216:
			return __LIB_3__::func_394("AMD", "LWL", "AGGRO_WAGON", func_496(iLocal_14));
		case 33554432:
			return __LIB_3__::func_394("AMD", "LWL", "AGGRO_STEAL", func_496(iLocal_14));
		case 67108864:
			return __LIB_3__::func_394("AMD", "LWL", "AGGRO_POST_SHOOTOUT", func_496(iLocal_14));
		case 134217728:
			return __LIB_3__::func_394("AMD", "LWL", "FEUD", func_496(iLocal_14));
		case 256:
			return __LIB_3__::func_394("AMD", "LWL", "RIP", func_496(iLocal_14));
		case 268435456:
			return __LIB_3__::func_394("AMD", "LWL", "EXIT_WAGON", func_496(iLocal_14));
		case 536870912:
			return __LIB_3__::func_394("AMD", "LWL", "PLYFINAL_KILLED", func_496(iLocal_14));
		case 1073741824:
			return __LIB_3__::func_394("AMD", "LWL", "PLYFINAL_WATCHED", func_496(iLocal_14));
	}
	return "INVALID DIALOGUE STRING";
}

bool func_285(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return false;
	}
	if (!__LIB_2__::func_215(iParam0, Global_35, 0, 20f, 0))
	{
		return false;
	}
	if (PED::_0x2DD4E0E26DFAD97D(iParam0, Global_35, 1110704128 /* Float: 45f */))
	{
		return false;
	}
	if (!PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		return false;
	}
	return true;
}

void func_287(int iParam0)
{
	if (func_28(iParam0))
	{
		__LIB_1__::func_681(&iLocal_806, iParam0);
	}
}

bool func_288(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return false;
	}
	else if (!__LIB_2__::func_1(iParam1, 0, 1))
	{
		return true;
	}
	if (__LIB_2__::func_118(iParam0, 1, 1) < __LIB_2__::func_118(iParam1, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_289(int iParam0)
{
	if (Local_51.f_46)
	{
		return false;
	}
	else if (__LIB_13__::func_805(32768))
	{
		return false;
	}
	else if ((iParam0 > 0 && iParam0 != 9) && iParam0 != 10)
	{
		return true;
	}
	return false;
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_499(iParam0, &(Local_936[iParam0 /*75*/]));
		case 1:
			return func_499(iParam0, &(Local_936[iParam0 /*75*/]));
		case 2:
			return func_499(iParam0, &(Local_936[iParam0 /*75*/]));
		case 3:
			return func_499(iParam0, &(Local_936[iParam0 /*75*/]));
		default:
			break;
	}
	return 0;
}

void func_292(int iParam0)
{
	if (func_53(iParam0))
	{
		func_31(134217728);
	}
	else
	{
		func_31(268435456);
	}
}

void func_293(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	Local_15[iParam0 /*4*/][0] = bParam1;
	Local_15[iParam0 /*4*/][1] = iParam2;
	Local_15[iParam0 /*4*/][2] = iParam3;
}

void func_294(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	if (func_165(524288, 1) || func_165(524288, 3))
	{
		bVar0 = true;
	}
	switch (iParam1)
	{
		case 0:
			func_500(&(Local_936[iParam0 /*75*/].f_21), bParam2, bVar0);
			break;
		case 1:
			func_501(&(Local_936[iParam0 /*75*/].f_21), bParam2, bVar0);
			break;
		case 2:
			func_502(&(Local_936[iParam0 /*75*/].f_21), iLocal_14, bParam2, bVar0);
			break;
		case 3:
			func_503(&(Local_936[iParam0 /*75*/].f_21), iLocal_14, bParam2, bVar0);
			break;
	}
}

void func_295(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_528.f_1) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_528.f_1, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[iParam0]), iLocal_35[iParam0]);
	}
	if (bParam2)
	{
		PED::FORCE_PED_MOTION_STATE(iLocal_35[iParam0], joaat("MOTIONSTATE_WALK"), false, 0, false);
	}
	if (__LIB_2__::func_1(iParam1, 0, 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (bParam4)
		{
			TASK::TASK_REACT(0, Global_35, Global_36, "Default_Panic", uLocal_1259[iParam0], 0, 4);
		}
		TASK::TASK_MOUNT_ANIMAL(0, iParam1, -1, -1, iParam3, 1, 0, 0);
		__LIB_1__::func_474(iLocal_35[iParam0], &iVar0, 0, 0, 1, 1);
	}
	else
	{
		__LIB_3__::func_535(iLocal_35[iParam0], 2, Global_35, 0);
	}
	PED::SET_PED_KEEP_TASK(iLocal_35[iParam0], true);
}

Vector3 func_296(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1883.499f, -353.6361f, 42.99891f;
				case 1:
					return 1323.799f, -1621.197f, 65.34177f;
				case 2:
					return 803.399f, -868.0172f, 52.29998f;
				case 3:
					return 822.8569f, -565.3245f, 80.48996f;
				case 4:
					return 1345.24f, -1757.963f, 69.7615f;
				case 5:
					return 1556.001f, -1115.632f, 42.5987f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_297(int iParam0, int iParam1)
{
	if (func_28(1048576))
	{
		return false;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
	{
		return false;
	}
	else if (!func_28(262144))
	{
		return false;
	}
	switch (iLocal_1247)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_34) && AITRANSPORT::_0x619E63980BFC0096(iLocal_35[iParam0], iLocal_34, 1))
			{
			}
			else if (PED::IS_PED_ON_MOUNT(iLocal_35[iParam0]) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_35[iParam0], true))
			{
			}
			else
			{
				func_148();
				__LIB_1__::func_148(&uLocal_908);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_35[iParam0], false))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_35[iParam0], Global_35, 2000, -1f, -1f, -1f);
				}
				func_505(iLocal_35[iParam0]);
				__LIB_1__::func_649(&iLocal_1247, 1);
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
			{
				func_334(iLocal_35[iParam0], Global_35, 131072, 291934926);
			}
			if ((!__LIB_0__::func_163(iLocal_35[iParam0], 242628503) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_35[iParam0], joaat("ENDSINSTAND"))) || __LIB_0__::func_265(&uLocal_908) > 7.5f)
			{
				if (iParam0 == iLocal_1250)
				{
					func_31(2097152);
					func_294(iParam0, 0, 1);
					if ((func_28(8192) && __LIB_2__::func_1(iLocal_35[iLocal_1251], 0, 1)) && iLocal_1277 < 5)
					{
						func_294(iLocal_1251, 1, 1);
						func_293(iLocal_1251, 1, 1, 1);
					}
				}
				else if (iParam0 == iLocal_1251)
				{
					func_31(2097152);
					func_294(iParam0, 1, 1);
					if ((func_28(4096) && __LIB_2__::func_1(iLocal_35[iLocal_1250], 0, 1)) && iLocal_1277 < 7)
					{
						func_294(iLocal_1250, 0, 1);
						func_293(iLocal_1250, 1, 1, 1);
					}
				}
				else if (iParam0 == iLocal_1248)
				{
					func_31(4194304);
					func_294(iParam0, 2, 1);
					if ((func_28(2048) && __LIB_2__::func_1(iLocal_35[iLocal_1249], 0, 1)) && iLocal_1275 < 6)
					{
						func_294(iLocal_1249, 3, 1);
						func_293(iLocal_1249, 1, 1, 1);
					}
				}
				else
				{
					func_31(4194304);
					func_294(iParam0, 3, 1);
					if ((func_28(1024) && __LIB_2__::func_1(iLocal_35[iLocal_1248], 0, 1)) && iLocal_1274 < 7)
					{
						func_294(iLocal_1248, 2, 1);
						func_293(iLocal_1248, 1, 1, 1);
					}
				}
				if (!func_165(16384, iParam0))
				{
					func_293(iParam0, 1, 1, 1);
				}
				__LIB_1__::func_649(&iLocal_1247, 2);
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
			{
				func_334(iLocal_35[iParam0], Global_35, 131072, 291934926);
			}
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_35[iParam0], &Local_701);
			if ((iParam1 != iParam0 && !ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam1])) && func_165(2, iParam1))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_35[iParam1], &Local_726);
			}
			__LIB_1__::func_148(&uLocal_911);
			if ((__LIB_0__::func_27(iLocal_805, 131072) && __LIB_2__::func_227(-3f, 1, 0, 0)) || __LIB_0__::func_265(&uLocal_908) > 4f)
			{
				__LIB_3__::func_541(&(Local_51.f_5), &iLocal_836);
				__LIB_1__::func_148(&uLocal_908);
				__LIB_1__::func_649(&iLocal_1247, 3);
			}
			break;
		case 3:
			if (!__LIB_3__::func_643(&Local_51, iParam0, 2f))
			{
				func_31(524288);
				__LIB_0__::func_37(&uLocal_908);
				__LIB_1__::func_649(&iLocal_1247, 7);
			}
			else if (__LIB_0__::func_265(&uLocal_908) > 6f)
			{
				__LIB_3__::func_541(&(Local_51.f_5), &iLocal_836);
				func_505(iLocal_35[iParam0]);
				__LIB_2__::func_478(iLocal_35[iParam0], Global_35, func_283(2097152, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				__LIB_1__::func_649(&iLocal_1247, 4);
			}
			break;
		case 4:
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_35[iParam0], &Local_701);
			if ((iParam1 != iParam0 && !ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam1])) && func_165(2, iParam1))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_35[iParam1], &Local_726);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_35[iParam0], joaat("ENDSINSTAND")) || __LIB_2__::func_227(5f, 1, 0, 0))
			{
				__LIB_1__::func_148(&uLocal_908);
				__LIB_1__::func_649(&iLocal_1247, 5);
			}
			break;
		case 5:
			if (!__LIB_3__::func_643(&Local_51, iParam0, 2f))
			{
				func_31(524288);
				__LIB_0__::func_37(&uLocal_908);
				__LIB_1__::func_649(&iLocal_1247, 7);
			}
			else if (__LIB_0__::func_265(&uLocal_908) > 4f)
			{
				Local_51.f_46 = 1;
				if (func_53(iParam0))
				{
					func_31(134217728);
				}
				else
				{
					func_31(268435456);
				}
				__LIB_1__::func_649(&iLocal_758, 9);
				__LIB_1__::func_649(&iLocal_1247, 6);
			}
			break;
		case 6:
			break;
		case 7:
			return true;
	}
	return false;
}

bool func_299(int iParam0)
{
	if (Local_51.f_46)
	{
		return false;
	}
	else if (__LIB_13__::func_805(32768))
	{
		return false;
	}
	else if (iParam0 > 0)
	{
		if (iParam0 < 6)
		{
			return true;
		}
		else if (!func_28(2048))
		{
			if ((((iParam0 != 9 && iParam0 != 13) && iParam0 != 10) && iParam0 != 11) && iParam0 != 12)
			{
				return true;
			}
		}
	}
	return false;
}

void func_301(int iParam0)
{
	if (!func_171(iParam0))
	{
		__LIB_1__::func_683(&iLocal_805, iParam0);
	}
}

void func_302(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	if (!__LIB_2__::func_343(iParam0, iLocal_34, 1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503, true) != 1)
		{
			TASK::TASK_ENTER_VEHICLE(iParam0, iLocal_34, -1, iParam1, 1.5f, iParam2, 0);
		}
	}
}

Vector3 func_305(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1813.695f, -446.8831f, 41.97974f;
				case 1:
					return 1343.588f, -1643.199f, 65.68797f;
				case 2:
					return 810.393f, -941.4841f, 51.06862f;
				case 3:
					return 829.9801f, -564.2598f, 81.84518f;
				case 4:
					return 1477.644f, -1698.715f, 61.6944f;
				case 5:
					return 1494.094f, -1042.356f, 50.65789f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_307(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_2__::func_1(iLocal_35[iParam0], 0, 0))
	{
		return;
	}
	func_508(&(iLocal_35[iParam0]));
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam1)
	{
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 75f, 33554432, 0);
	}
	else
	{
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 75f, 0, 0);
	}
	__LIB_1__::func_474(iLocal_35[iParam0], &iVar0, 0, 0, 1, 1);
}

void func_309(int iParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (__LIB_2__::func_1(iLocal_35[iParam0], 0, 1))
	{
		func_509(iParam0, -1, bParam1, fParam2, 0, 131073, bParam3, 0);
		func_31(1024);
		func_213(32, iParam0);
		iLocal_1248 = iParam0;
	}
}

bool func_310(int iParam0)
{
	if (Local_51.f_46)
	{
		return false;
	}
	else if (__LIB_13__::func_805(32768))
	{
		return false;
	}
	else if ((iParam0 > 0 && iParam0 != 9) && iParam0 != 13)
	{
		return true;
	}
	return false;
}

void func_312(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			__LIB_2__::func_411(&((uParam0[iVar0 /*75*/])->f_21[iVar1 /*17*/]), 0, 0);
			iVar1++;
		}
		iVar0++;
	}
}

void func_313(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		func_510(&((uParam0[iVar0 /*75*/])->f_21), iVar1);
		iVar0++;
	}
}

char* func_314(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	switch (iParam0)
	{
		case 1:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return "RESPONSE_IDLING";
					case 1:
						return "SCARED_COMMUNICATE";
					case 2:
						return "HEADS_UP_WILDERNESS";
					case 3:
						return "HEADS_UP_WILDERNESS";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "OPENS_FIRE";
					case 1:
						return "OPENS_FIRE";
					case 2:
						return "OPENS_FIRE";
					case 3:
						return "OPENS_FIRE";
					default:
						break;
				}
			}
			break;
		default:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return "LEAVE_NOW";
					case 1:
						return "MELEE_AGGRO_TRANSITION";
					case 2:
						return "HEADS_UP_THREATEN";
					case 3:
						return "HEADS_UP_CONFRONT";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "FIGHT_RESPONSE";
					case 2:
						return "OPENS_FIRE";
					case 3:
						return "OPENS_FIRE";
					case 1:
						if (bParam4)
						{
							return "GENERIC_ANGRY_REACTION";
						}
						else if (bParam3)
						{
							return "GENERIC_INSULT_HIGH_MALE";
						}
						else
						{
							return "FIGHT";
						}
						break;
				}
			}
			break;
	}
	return "OPENS_FIRE";
}

int func_315(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	switch (iParam0)
	{
		case 1:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return 1;
					case 1:
						return 1;
					case 2:
						return 2;
					case 3:
						return 1;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 2;
					case 1:
						return 2;
					case 2:
						return 2;
					case 3:
						return 1;
					default:
						break;
				}
			}
			break;
		default:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return 1;
					case 1:
						return 1;
					case 2:
						return 1;
					case 3:
						return 1;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 2;
					case 2:
						return 2;
					case 3:
						return 2;
					case 1:
						if (bParam4)
						{
							return 2;
						}
						else if (bParam3)
						{
							return 1;
						}
						else
						{
							return 1;
						}
						break;
				}
			}
			break;
	}
	return 0;
}

void func_317(int iParam0)
{
	if (func_165(1048576, iParam0))
	{
		return;
	}
	iLocal_1237[iParam0] = func_512(&(iLocal_35[iParam0]), &(Local_936[iParam0 /*75*/]), 30f, &(Local_936[iParam0 /*75*/].f_21), &(Local_51.f_192), 0f, 1, 0, 0, uLocal_1242[iParam0], 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
}

void func_319(int iParam0, vector3 vParam1, int iParam4, var uParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = __LIB_3__::func_326(iParam0, vParam1, uParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		__LIB_3__::func_579(*iParam4);
	}
}

int func_324()
{
	switch (iLocal_14)
	{
		case 0:
			return joaat("EVENT_SHOCKING_BEAT_DANGEROUS");
		default:
			break;
	}
	return joaat("EVENT_SHOCKING_BEAT_DISTURBING");
	return joaat("EVENT_SHOCKING_BEAT_DANGEROUS");
}

Vector3 func_325(int iParam0, int iParam1, vector3 vParam2)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1852.195f, -384.1873f, 41.85531f;
				case 2:
					return 781.9018f, -906.9106f, 50.12431f;
				case 4:
					return 1389.215f, -1694.26f, 66.361f;
				default:
					break;
			}
			break;
	}
	return vParam2;
}

float func_326()
{
	switch (iLocal_14)
	{
		case 0:
			return 23f;
		case 1:
			return 35f;
		default:
			break;
	}
	return -1f;
}

float func_327(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 30f;
				case 1:
					return 35f;
				case 2:
					return 35f;
				case 3:
					return 15f;
				case 4:
					return 30f;
				default:
					break;
			}
			break;
	}
	return 15f;
}

void func_332(var uParam0, bool bParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	if (bParam1)
	{
		__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(8), sParam2, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	}
	else
	{
		__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(7), sParam3, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		__LIB_2__::func_602(uParam0[2 /*17*/], __LIB_2__::func_460(12), sParam5, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 0, 0);
	}
	__LIB_2__::func_602(uParam0[1 /*17*/], __LIB_2__::func_460(10), sParam4, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
}

bool func_334(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, func_527(iParam2)))
	{
		__LIB_2__::func_478(iParam0, iParam1, func_283(iParam2, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, iParam3, 1, 0, 0);
		func_301(iParam2);
		return true;
	}
	return false;
}

void func_336(int iParam0)
{
	int iVar0;
	iVar0 = func_528(iParam0);
	if (func_165(8, iParam0))
	{
		if (func_337(iParam0, "onGround", 16))
		{
			__LIB_1__::func_864(iLocal_35[iParam0], 1, 0);
		}
	}
	else if (iVar0 != iParam0 && func_337(iVar0, "fireGun", 4))
	{
		func_213(8, iParam0);
	}
}

bool func_337(int iParam0, char* sParam1, int iParam2)
{
	if (func_165(iParam2, iParam0))
	{
		return false;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_35[iParam0], MISC::GET_HASH_KEY(sParam1)))
	{
		func_213(iParam2, iParam0);
		return true;
	}
	return false;
}

void func_338(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]) || func_165(2, iParam0))
	{
		return;
	}
	switch (iLocal_14)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					func_365(0, bParam1, 1065353216 /* Float: 1f */, 0);
					if (func_28(1) && iLocal_1252 == 1)
					{
						func_213(2, 1);
						func_359(1, 0, 1065353216 /* Float: 1f */, 0);
					}
					break;
				case 1:
					func_359(1, bParam1, 1065353216 /* Float: 1f */, 0);
					break;
				case 2:
					func_309(2, bParam1, 1065353216 /* Float: 1f */, 0);
					if (func_28(1) && iLocal_1252 == 3)
					{
						func_213(2, 3);
						func_358(3, 0, 1065353216 /* Float: 1f */, 0, 0);
					}
					break;
				case 3:
					func_358(3, 0, 1065353216 /* Float: 1f */, 0, 0);
					break;
			}
			break;
		case 0:
			switch (iParam0)
			{
				case 2:
					func_309(2, bParam1, 1065353216 /* Float: 1f */, 0);
					break;
				case 3:
					func_358(3, bParam1, 1065353216 /* Float: 1f */, 0, 0);
					break;
			}
			break;
	}
}

bool func_339(int iParam0, char* sParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	return ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, MISC::GET_HASH_KEY(sParam1));
}

void func_340(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam2)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, *iParam1, *iParam0);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, *iParam0, *iParam1);
	}
	if (bParam4)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, *iParam1, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, *iParam1, joaat("REL_PLAYER_LIKE"));
	}
	if (bParam3)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, *iParam0, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, *iParam0, joaat("REL_PLAYER_LIKE"));
	}
}

bool func_341(int iParam0)
{
	if (fLocal_829 == -1f)
	{
		return false;
	}
	else if (fLocal_829 > uLocal_817[iParam0])
	{
		return true;
	}
	return false;
}

char* func_343(int iParam0)
{
	if (iParam0 == iLocal_35[0])
	{
		return "dealerA";
	}
	if (iParam0 == iLocal_35[1])
	{
		return "dealerb";
	}
	if (iParam0 == iLocal_35[2])
	{
		return "confeda";
	}
	if (iParam0 == iLocal_35[3])
	{
		return "confedb";
	}
	return "INVALID PED";
}

void func_345(int iParam0, int iParam1, int iParam2)
{
	iLocal_1252 = iParam0;
	iLocal_50 = iParam1;
	iLocal_1253 = iParam2;
}

void func_348(int iParam0)
{
	__LIB_4__::func_64(iParam0);
	__LIB_3__::func_385(iParam0, 1);
	func_8(iParam0, 250);
	func_44(iParam0, 0);
}

bool func_352(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34) || !__LIB_2__::func_1(iParam0, 0, 0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_34, 0f, 10f, 0f) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	if (__LIB_0__::func_195(Global_36, vVar3, vVar0))
	{
		return true;
	}
	return false;
}

Vector3 func_353(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam2)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							return 1849.682f, -382.4103f, 42.2056f;
						case 1:
							return 1313.553f, -1637.015f, 65.96715f;
						case 2:
							return 784.8195f, -907.0717f, 50.172f;
						case 3:
							return 857.6899f, -535.2601f, 87.88438f;
						case 4:
							return 1383.435f, -1695.935f, 66.69115f;
						case 5:
							return 1572.125f, -1169.729f, 44.98163f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 1848.532f, -379.2958f, 42.28083f;
						case 1:
							return 1311.495f, -1638.225f, 66.04156f;
						case 2:
							return 784.6487f, -902.4513f, 50.2746f;
						case 3:
							return 858.7761f, -538.0076f, 87.85596f;
						case 4:
							return 1382.318f, -1700.524f, 66.80943f;
						case 5:
							return 1572.125f, -1169.729f, 44.98163f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_354(var uParam0)
{
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 300;
	(*uParam0)[2] = 600;
	(*uParam0)[3] = 900;
}

void func_358(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (__LIB_2__::func_1(iLocal_35[iParam0], 0, 1))
	{
		func_509(iParam0, 0, bParam1, fParam2, 0, 262145, bParam3, bParam4);
		func_31(2048);
		func_213(32, iParam0);
		iLocal_1249 = iParam0;
	}
}

void func_359(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (__LIB_2__::func_1(iLocal_35[iParam0], 0, 1))
	{
		func_295(iParam0, uLocal_45[1], bParam1, iParam2, bParam3);
		func_31(8192);
		func_213(32, iParam0);
		iLocal_1251 = iParam0;
	}
}

void func_361(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	(*uParam3)[0] = 0.5f;
	(*uParam3)[1] = 0.5f;
	(*uParam3)[2] = 0.5f;
	(*uParam3)[3] = 0.5f;
	iVar1 = 0;
	fVar3 = 9999f;
	switch (iParam0)
	{
		case 1:
			(*uParam2)[0] = 1;
			if (__LIB_2__::func_118((*iParam1)[0], 1, 1) < __LIB_2__::func_118((*iParam1)[2], 1, 1))
			{
				(*uParam2)[1] = 0;
				(*uParam2)[2] = 2;
			}
			else
			{
				(*uParam2)[1] = 2;
				(*uParam2)[2] = 0;
			}
			(*uParam2)[3] = 3;
			break;
		case 3:
			(*uParam2)[0] = 3;
			if (__LIB_2__::func_118((*iParam1)[0], 1, 1) < __LIB_2__::func_118((*iParam1)[2], 1, 1))
			{
				(*uParam2)[1] = 0;
				(*uParam2)[2] = 2;
			}
			else
			{
				(*uParam2)[1] = 2;
				(*uParam2)[2] = 0;
			}
			(*uParam2)[3] = 1;
			break;
		default:
			iVar0 = 0;
			while (iVar0 < *iParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar0]))
				{
					fVar2 = __LIB_2__::func_118((*iParam1)[iVar0], 1, 1);
					if (fVar2 < fVar3)
					{
						fVar3 = fVar2;
						iVar1 = iVar0;
					}
				}
				iVar0++;
			}
			iVar4 = iVar1;
			(*uParam2)[0] = iVar4;
			switch (iVar4)
			{
				case 0:
					if (__LIB_2__::func_118((*iParam1)[1], 1, 1) < __LIB_2__::func_118((*iParam1)[3], 1, 1))
					{
						(*uParam2)[1] = 1;
						(*uParam2)[2] = 3;
					}
					else
					{
						(*uParam2)[1] = 3;
						(*uParam2)[2] = 1;
					}
					(*uParam2)[3] = 2;
					break;
				case 1:
					if (__LIB_2__::func_118((*iParam1)[0], 1, 1) < __LIB_2__::func_118((*iParam1)[2], 1, 1))
					{
						(*uParam2)[1] = 0;
						(*uParam2)[2] = 2;
					}
					else
					{
						(*uParam2)[1] = 2;
						(*uParam2)[2] = 0;
					}
					(*uParam2)[3] = 3;
					break;
				case 2:
					if (__LIB_2__::func_118((*iParam1)[1], 1, 1) < __LIB_2__::func_118((*iParam1)[3], 1, 1))
					{
						(*uParam2)[1] = 1;
						(*uParam2)[2] = 3;
					}
					else
					{
						(*uParam2)[1] = 3;
						(*uParam2)[2] = 1;
					}
					(*uParam2)[3] = 0;
					break;
				case 3:
					if (__LIB_2__::func_118((*iParam1)[0], 1, 1) < __LIB_2__::func_118((*iParam1)[2], 1, 1))
					{
						(*uParam2)[1] = 0;
						(*uParam2)[2] = 2;
					}
					else
					{
						(*uParam2)[1] = 2;
						(*uParam2)[2] = 0;
					}
					(*uParam2)[3] = 1;
					break;
			}
			break;
	}
}

bool func_362(int iParam0, int iParam1)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam1, true, false) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1, false))
	{
		return false;
	}
	return ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, iParam1);
}

void func_363(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, false, 0, false, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam2)
	{
		TASK::TASK_REACT(0, Global_35, Global_36, "Default_Curious", 0.7f, 0, 4);
	}
	if (__LIB_1__::func_372(iParam0, 0) == joaat("WEAPON_UNARMED"))
	{
		TASK::TASK_SWAP_WEAPON(0, 1, 1, 0, 0);
	}
	TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_365(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (__LIB_2__::func_1(iLocal_35[iParam0], 0, 1))
	{
		func_295(iParam0, uLocal_45[0], bParam1, iParam2, bParam3);
		func_31(4096);
		func_213(32, iParam0);
		iLocal_1250 = iParam0;
	}
}

void func_367()
{
	func_566(0);
	func_566(1);
	func_566(2);
	func_566(3);
}

void func_368(int iParam0, var uParam1)
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam0)[0], *uParam1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam0)[1], *uParam1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam0)[2], *uParam1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam0)[3], *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, *uParam1, joaat("PLAYER"));
}

void func_369()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_528.f_1) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_528.f_1, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_503[1 /*12*/].f_8))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, "Cash", Local_503[1 /*12*/].f_8);
		}
	}
}

void func_370(var uParam0, var uParam1)
{
	(*uParam1)[(*uParam0)[0]] = "Default_Shocked";
	(*uParam1)[(*uParam0)[1]] = "Default_Shocked";
	(*uParam1)[(*uParam0)[2]] = "Default_Angry";
	(*uParam1)[(*uParam0)[3]] = "Default_Angry";
}

void func_372(int iParam0, float fParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_528.f_1))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_567(iParam0), iLocal_35[iParam0]);
	}
	if (__LIB_2__::func_215(iLocal_35[iParam0], Global_35, 0, 35f, 1))
	{
		func_213(2048, iParam0);
	}
	bVar0 = func_28(268435456);
	if (func_53(iParam0))
	{
		bVar0 = func_28(134217728);
	}
	bVar1 = func_568();
	bVar2 = func_569();
	func_213(2097152, iParam0);
	func_256(&(iLocal_35[iParam0]));
	func_570(iParam0, &(uLocal_40[iParam0]), 100f, iParam2, iLocal_788[iParam0], bVar0, func_28(64), iParam3, 1, fParam1, func_165(33554432, iParam0), (bVar1 && bVar2), bVar2);
}

bool func_374(int iParam0)
{
	if (!func_28(1024) || iLocal_1248 != iParam0)
	{
		return false;
	}
	else if ((ENTITY::IS_ENTITY_DEAD(iLocal_34) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_34, true, false)) || !PED::IS_PED_IN_VEHICLE(iLocal_35[iParam0], iLocal_34, true))
	{
		return false;
	}
	else if (PED::IS_PED_ON_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false))
	{
		return false;
	}
	func_213(4194304, iParam0);
	__LIB_1__::func_649(&iLocal_1274, 11, iLocal_1248);
	return true;
}

void func_375(int iParam0, int* iParam1)
{
	if (!__LIB_2__::func_1(iLocal_35[iParam0], 0, 1))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(*iParam1))
	{
		__LIB_2__::func_73(iLocal_35[iParam0], iParam1, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[iParam0], -2117564886, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[iParam0], -2117564886, true) == 0)
	{
		return;
	}
	if (__LIB_1__::func_372(iLocal_35[iParam0], 0) == joaat("WEAPON_UNARMED"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_35[iParam0], func_258(iParam0), false, 0, false, false);
	}
	TASK::TASK_COMBAT_HATED_TARGETS(iLocal_35[iParam0], -1f);
}

int func_496(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		default:
			break;
	}
	return 2;
	return -1;
}

int func_499(int iParam0, int* iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]) || func_165(65536, iParam0))
	{
		return 0;
	}
	if (func_165(8192, iParam0))
	{
		if (!__LIB_2__::func_136(Global_35, 0))
		{
			func_160(8192, iParam0);
			func_213(32768, iParam0);
			func_293(iParam0, 0, 1, 1);
		}
		return 1;
	}
	else if (func_165(16384, iParam0))
	{
		if (!__LIB_2__::func_136(Global_35, 0))
		{
			__LIB_2__::func_122(iLocal_35[iParam0], func_314(iLocal_14, iParam0, 0, 0, 0), 1744022339, 0, 1, &(Local_245[iParam0 /*32*/].f_23), func_315(iLocal_14, iParam0, 0, 0, 0), 1);
			func_213(65536, iParam0);
		}
		return 1;
	}
	else if (__LIB_2__::func_456(iParam1) && iLocal_1237[iParam0] != -1)
	{
		switch (iLocal_1237[iParam0])
		{
			case 0:
				func_213(8192, iParam0);
				break;
			case 1:
			case 2:
				func_101(4);
				func_101(32768);
				func_213(16384, iParam0);
				break;
		}
		if (!Local_51.f_44)
		{
			func_148();
		}
		func_293(iParam0, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_500(var uParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	sVar0 = "RE_AMD_LWL_V2_GREET_DEFUSE";
	if (bParam2)
	{
		sVar0 = "RE_AMD_LWL_V1_GREET_DEFUSE";
	}
	func_332(uParam0, bParam1, sVar0, "RE_AMD_LWL_V2_GREET_DEALER_POS", "RE_AMD_LWL_V2_GREET_DEALER_NEG", "RE_AMD_LWL_V2_ROB_DEALERS");
}

void func_501(var uParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	sVar0 = "RE_AMD_LWL_V2_GREET_DEFUSE";
	if (bParam2)
	{
		sVar0 = "RE_AMD_LWL_V1_GREET_DEFUSE";
	}
	func_332(uParam0, bParam1, sVar0, "RE_AMD_LWL_V2_GREET_DEALER_POS", "RE_AMD_LWL_V2_GREET_DEALER_NEG", "RE_AMD_LWL_V2_ROB_DEALERS");
}

void func_502(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	switch (iParam1)
	{
		case 1:
			if (bParam3)
			{
				sVar0 = "RE_AMD_LWL_V1_GREET_DEFUSE";
			}
			else
			{
				sVar0 = "RE_AMD_LWL_V2_GREET_DEFUSE";
			}
			func_332(uParam0, bParam2, sVar0, "RE_AMD_LWL_V2_GREET_RAIDER_POS", "RE_AMD_LWL_V2_GREET_RAIDER_NEG", "RE_AMD_LWL_V2_ROB_RAIDERS");
			break;
		default:
			if (__LIB_0__::func_181())
			{
				func_332(uParam0, bParam2, "RE_AMD_LWL_V1_GREET_DEFUSE", "RE_AMD_LWL_V1_GREET_POS", "RE_AMD_LWL_V1_GREET_NEG", "RE_AMD_LWL_V1_ROB_RAIDERS");
			}
			else
			{
				func_332(uParam0, bParam2, "RE_AMD_LWL_V1_GREET_DEFUSE", "RE_AMD_LWL_V1_GREET_POS", "RE_AMD_LWL_V2_GREET_RAIDER_NEG", "RE_AMD_LWL_V1_ROB_RAIDERS");
			}
			break;
	}
}

void func_503(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	switch (iParam1)
	{
		case 1:
			if (bParam3)
			{
				sVar0 = "RE_AMD_LWL_V1_GREET_DEFUSE";
			}
			else
			{
				sVar0 = "RE_AMD_LWL_V2_GREET_DEFUSE";
			}
			func_332(uParam0, bParam2, sVar0, "RE_AMD_LWL_V2_GREET_RAIDER_POS", "RE_AMD_LWL_V2_GREET_RAIDER_NEG", "RE_AMD_LWL_V2_ROB_RAIDERS");
			break;
		default:
			func_332(uParam0, bParam2, "RE_AMD_LWL_V1_GREET_DEFUSE", "RE_AMD_LWL_V1_GREET_POS", "RE_AMD_LWL_V2_GREET_RAIDER_NEG", "RE_AMD_LWL_V1_ROB_RAIDERS");
			break;
	}
}

void func_505(int iParam0)
{
	char* sVar0;
	char* sVar1;
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	sVar0 = Local_670[0 /*2*/];
	sVar1 = Local_670[0 /*2*/].f_1;
	if (iParam0 == iLocal_35[3])
	{
		sVar0 = Local_670[1 /*2*/];
		sVar1 = Local_670[1 /*2*/].f_1;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_34) && __LIB_3__::func_330(iParam0, iLocal_34, 0)) && __LIB_3__::func_640(iParam0, iLocal_34) == -1)
	{
		TASK::TASK_PLAY_ANIM(iParam0, sVar0, sVar1, 4f, -4f, -1, 67108880, 0f, false, 65536, false, "UpperBodyNoArms_filter", false);
	}
	else
	{
		TASK::TASK_PLAY_ANIM(iParam0, sVar0, sVar1, 4f, -4f, -1, 67108880, 0f, false, 65536, false, "UpperbodyFixup_filter", false);
	}
}

void func_508(var uParam0)
{
	if (!__LIB_2__::func_1(*uParam0, 0, 0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*uParam0, 170, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 340, true);
	PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 512, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 28, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 54, true);
}

void func_509(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;
	int iVar3;
	if (ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_34) && PED::IS_PED_IN_VEHICLE(iLocal_35[iParam0], iLocal_34, false))
	{
		return;
	}
	else
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_35[iParam0], -1))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[iParam0]), iLocal_35[iParam0]);
		}
		if (bParam2)
		{
			PED::FORCE_PED_MOTION_STATE(iLocal_35[iParam0], joaat("MOTIONSTATE_WALK"), false, 0, false);
		}
		func_664(&(iLocal_35[iParam0]));
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_34))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			if (bParam6)
			{
				TASK::TASK_REACT(0, Global_35, Global_36, "Default_Panic", uLocal_1259[iParam0], 0, 4);
			}
			if (iParam4 > 0)
			{
				TASK::TASK_STAND_STILL(0, iParam4);
			}
			vVar0 = { func_665(iParam5, bParam7) };
			if (!__LIB_0__::func_86(vVar0))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar0, 1f, -1, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 1);
			}
			TASK::TASK_ENTER_VEHICLE(0, iLocal_34, -1, iParam1, fParam3, iParam5, 0);
			__LIB_1__::func_474(iLocal_35[iParam0], &iVar3, 0, 0, 1, 1);
			PED::SET_PED_KEEP_TASK(iLocal_35[iParam0], true);
		}
	}
}

void func_510(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = iVar0;
		if (__LIB_4__::func_388(uParam0[iVar1 /*17*/], 1, 0) != Local_15[iParam1 /*4*/][iVar1])
		{
			__LIB_2__::func_411(uParam0[iVar1 /*17*/], Local_15[iParam1 /*4*/][iVar1], 0);
		}
		iVar0++;
	}
}

int func_512(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_668(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

int func_527(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 790744141;
		case 2:
			return 149614342;
		case 4:
			return -559356470;
		case 8:
			return 1852049024;
		case 16:
			return 1809661801;
		case 32:
			return -1897899944;
		case 64:
			return 2022786542;
		case 128:
			return 141905997;
		case 512:
			return -267673205;
		case 1024:
			return -2040233953;
		case 2048:
			return 1043694409;
		case 4096:
			return -114482302;
		case 8192:
			return -1095289676;
		case 16384:
			return -161854579;
		case 32768:
			return -114482302;
		case 65536:
			return joaat("RE_AD_WARN");
		case 131072:
			return joaat("RE_AD_WARN");
		case 524288:
			return 1468736574;
		case 1048576:
			return 1468736574;
		case 2097152:
			return -120771809;
		case 4194304:
			return 591173485;
		case 8388608:
			return 1787256768;
		case 16777216:
			return -256271136;
		case 33554432:
			return 1613587293;
		case 67108864:
			return -852328799;
		case 134217728:
			return 2015887348;
		default:
			break;
	}
	return -1;
}

int func_528(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 2;
				case 0:
					return 3;
				default:
					break;
			}
			break;
	}
	return iParam0;
}

void func_566(int iParam0)
{
	__LIB_2__::func_480(&(Local_936[iParam0 /*75*/].f_21), 0, 0, 1, 0);
	func_160(8192, iParam0);
	func_160(16384, iParam0);
	func_160(32768, iParam0);
	func_160(65536, iParam0);
}

char* func_567(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dealerA";
		case 1:
			return "dealerb";
		case 2:
			return "confeda";
		case 3:
			return "confedb";
		default:
			break;
	}
	return "INVALID ENTITY";
}

int func_568()
{
	if (__LIB_13__::func_805(4096))
	{
		return 0;
	}
	if (iLocal_14 != 1)
	{
		return 0;
	}
	return 1;
}

bool func_569()
{
	return ((__LIB_0__::func_154(Global_1935630.f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46)) && PED::_0x285D36C5C72B0569(Global_35) < 2f);
}

void func_570(int iParam0, int* iParam1, float fParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_2__::func_1(iLocal_35[iParam0], 0, 0))
	{
		return;
	}
	func_508(&(iLocal_35[iParam0]));
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_35[iParam0], false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(iLocal_35[iParam0]), -1) == iLocal_35[iParam0])
	{
		func_375(iParam0, iParam1);
		func_213(1073741824 /* Float: 2f */, iParam0);
		return;
	}
	if (bParam5)
	{
		__LIB_2__::func_73(iLocal_35[iParam0], iParam1, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
	func_99(&(iLocal_35[iParam0]), 0);
	iVar0 = 0;
	if (!bParam8)
	{
		iVar0 |= 16384;
	}
	if (bParam4)
	{
		iVar0 |= 33554432;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	if (bParam10)
	{
		switch (__LIB_3__::func_112(iLocal_35[iParam0], Global_35, 1060437492 /* Float: 0.707f */))
		{
			case 0:
				iVar2 = 10;
				break;
			case 2:
				iVar2 = 14;
				break;
			case 3:
				iVar2 = 13;
				break;
			case 1:
				switch (__LIB_3__::func_112(iLocal_35[iParam0], Global_35, 1f))
				{
					case 3:
						iVar2 = 11;
						break;
					default:
						iVar2 = 12;
						break;
				}
				break;
		}
		TASK::TASK_PLAY_ANIM(0, Local_670[iVar2 /*2*/], Local_670[iVar2 /*2*/].f_1, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	}
	if (!bParam4)
	{
		if (bParam11)
		{
			TASK::TASK_REACT(0, Global_35, Global_36, iParam3, fParam9, 0, 4);
		}
		else if (bParam12)
		{
			TASK::TASK_REACT(0, func_719(iParam0), func_720(func_719(iParam0)), iParam3, fParam9, 0, 4);
		}
	}
	if (bParam6 && iParam7 > -1)
	{
		if (__LIB_1__::func_372(iLocal_35[iParam0], 0) == joaat("WEAPON_UNARMED"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_35[iParam0], func_258(iParam0), false, 0, false, false);
		}
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, iParam7, bParam4, 1);
	}
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam2, iVar0, 0);
	__LIB_1__::func_474(iLocal_35[iParam0], &iVar1, 0, 0, 1, 1);
}

void func_664(var uParam0)
{
	if (!__LIB_2__::func_1(*uParam0, 0, 0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*uParam0, 252, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 255, true);
}

Vector3 func_665(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_27(iParam0, 131072))
	{
		return func_770();
	}
	if (__LIB_0__::func_27(iParam0, 262144))
	{
		return func_771(bParam1);
	}
	return 0f, 0f, 0f;
}

int func_668(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_668(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

int func_719(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return iLocal_35[2];
		case 1:
			return iLocal_35[3];
		case 2:
			return iLocal_35[0];
		case 3:
			return iLocal_35[1];
		default:
			break;
	}
	return 0;
}

Vector3 func_720(int iParam0)
{
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_HEADING(iParam0), 0f, 1f, 0f);
}

Vector3 func_770()
{
	switch (iLocal_786)
	{
		case 0:
			return 1840.723f, -383.8766f, 42.28694f;
		case 1:
			return 1317.383f, -1645.26f, 65.98895f;
		case 2:
			return 777.8688f, -907.4637f, 50.04131f;
		case 3:
			return 865.792f, -533.5311f, 88.01648f;
		case 4:
			return 1391.055f, -1697.967f, 66.39729f;
		case 5:
			return 1565.515f, -1162.214f, 44.4227f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_771(bool bParam0)
{
	if (bParam0)
	{
		switch (iLocal_786)
		{
			case 0:
				return 1844.086f, -379.4138f, 42.30054f;
			case 1:
				return 1313.056f, -1642.984f, 65.99541f;
			case 2:
				return 779.8592f, -902.8204f, 50.11404f;
			case 3:
				return 862.6526f, -537.3989f, 88.02016f;
			case 4:
				return 1386.838f, -1701.266f, 66.62038f;
			case 5:
				return 1571.346f, -1163.179f, 44.60621f;
			default:
				break;
		}
	}
	switch (iLocal_786)
	{
		case 0:
			return 1841.088f, -379.9351f, 42.30015f;
		case 1:
			return 1313.127f, -1645.996f, 65.99552f;
		case 2:
			return 777.3195f, -903.2181f, 50.04406f;
		case 3:
			return 865.1678f, -537.7794f, 87.93773f;
		case 4:
			return 1390.038f, -1701.856f, 66.50535f;
		case 5:
			return 1569.393f, -1161.886f, 44.47321f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

