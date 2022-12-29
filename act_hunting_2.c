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
	struct<642> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0 } ;
	var uLocal_657 = 2;
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
	var uLocal_690 = 2;
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
	var uLocal_723 = 10;
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
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
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
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 2;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
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
	var uLocal_917 = 3;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 1101004800;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(&uScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	__LIB_1__::func_838(&uScriptParam_0, &uLocal_657);
	while (!func_3(&uScriptParam_0))
	{
		__LIB_1__::func_813(&uScriptParam_0, &uLocal_657, __LIB_0__::func_749());
		BUILTIN::WAIT(0);
	}
	func_1(&uScriptParam_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	bVar0 = CAM::_0x139EFB0A71DD9011();
	bVar1 = CAM::_0x7CE9DC58E3E4755F();
	if (uParam0->f_14 != 1 && uParam0->f_14 != 7)
	{
		if (!bVar0 || bVar1)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
		}
	}
	__LIB_1__::func_752();
	func_7(uParam0);
	if (__LIB_0__::func_750(&(uParam0->f_9), 1))
	{
		__LIB_0__::func_745(uParam0->f_2);
	}
	iVar2 = 0;
	while (iVar2 < 27)
	{
		if (__LIB_1__::func_22(iVar2))
		{
			__LIB_1__::func_808(uParam0, iVar2);
		}
		iVar2++;
	}
	__LIB_1__::func_714();
	if (__LIB_1__::func_44(uParam0->f_5))
	{
		switch (uParam0->f_14)
		{
			case 0:
			case 2:
				__LIB_1__::func_645(uParam0->f_5);
				__LIB_1__::func_611(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
			case 7:
				__LIB_1__::func_559(uParam0->f_5, 0, 2);
				__LIB_0__::func_297();
				__LIB_1__::func_140();
				__LIB_1__::func_639(uParam0, 0, 1);
				Global_1391438.f_3 = -1;
				iVar3 = 0;
				while (iVar3 < 10)
				{
					if (Global_40.f_6563.f_274[iVar3 /*20*/].f_1 == uParam0->f_1)
					{
						Global_40.f_6563.f_274[iVar3 /*20*/].f_18 += 50;
					}
					iVar3++;
				}
				break;
			case 1:
				if (!__LIB_0__::func_13(32768))
				{
					func_21(uParam0->f_5, 1, 1, Global_1879514.f_11, 1);
				}
				else
				{
					__LIB_1__::func_809(uParam0->f_5, Global_1879514.f_11);
				}
				__LIB_0__::func_863();
				__LIB_0__::func_297();
				__LIB_1__::func_140();
				Global_1391438.f_3 = -1;
				if (uParam0->f_1 == joaat("HAI_BANK_ROBBERY_01") && UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("CABR01")))
				{
					if (STATS::CHAL_MISSION_IS_GOAL_COMPLETE(joaat("CABR01"), joaat("TIMELIMIT_5_45")))
					{
						UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, joaat("CABR01"), joaat("MISS_CHALL_TIME_5_45"), "MISS_CHALL_TIME_5_45", true, true, false);
					}
					if (STATS::CHAL_MISSION_IS_GOAL_COMPLETE(joaat("CABR01"), joaat("CABR01_CHASENODAMAGE")))
					{
						UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, joaat("CABR01"), joaat("CABR01_CHALL_1"), "CABR01_CHALL_1", true, true, false);
					}
					switch (STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(joaat("CABR01")))
					{
						case 0:
							sVar4 = "TOAST_MEDAL_BRONZE";
							break;
						case 1:
							sVar4 = "TOAST_MEDAL_SILVER";
							break;
						case 2:
							sVar4 = "TOAST_MEDAL_GOLD";
							break;
						default:
							sVar4 = "";
							break;
					}
					if (Global_1879514.f_11)
					{
						sVar4 = "TOAST_MEDAL_BRONZE";
					}
					UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, joaat("CABR01"), MISC::GET_HASH_KEY(sVar4), joaat("HUD_TOASTS"));
					MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), __LIB_1__::func_753());
					UILOG::_UILOG_MARK_MISSION_COMPLETED(joaat("CABR01"));
					UILOG::_0xA31013798FADCADC(3, joaat("CABR01"), 1);
				}
				else
				{
					__LIB_1__::func_639(uParam0, 1, 0);
				}
				if (__LIB_0__::func_13(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					__LIB_6__::func_812();
					__LIB_1__::func_141(0);
				}
				break;
			case 3:
				__LIB_1__::func_645(uParam0->f_5);
				StringCopy(&(uParam0->f_15), "PLAYER_DEAD", 24);
				__LIB_1__::func_611(uParam0->f_5, 2, &(uParam0->f_15), 0, 0, 0);
				break;
			case 6:
				__LIB_1__::func_645(uParam0->f_5);
				StringCopy(&(uParam0->f_15), "PLAYER_ARRESTED", 24);
				__LIB_1__::func_611(uParam0->f_5, 6, &(uParam0->f_15), 0, 0, 0);
				break;
			case 4:
				__LIB_1__::func_645(uParam0->f_5);
				MemCopy(&(uParam0->f_15), {__LIB_0__::func_864(uParam0->f_2)}, 3);
				__LIB_1__::func_611(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
			case 5:
				__LIB_1__::func_645(uParam0->f_5);
				MemCopy(&(uParam0->f_15), {__LIB_0__::func_865(uParam0->f_2)}, 3);
				__LIB_1__::func_611(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
		}
	}
	MISC::_0x1096603B519C905F("");
	if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_43));
	}
	if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
	}
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
	}
	__LIB_0__::func_698(64);
	if (!__LIB_1__::func_628(Global_36))
	{
		__LIB_0__::func_267(1);
		__LIB_1__::func_142(0);
	}
	__LIB_0__::func_8(&Global_1935630, 256);
	__LIB_1__::func_878(uParam0);
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

bool func_3(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 187, true);
	}
	if (uParam0->f_13 > 1 || (!__LIB_0__::func_272(Global_35, 0) && uParam0->f_13 > 0))
	{
		if ((__LIB_0__::func_752(uParam0->f_14) || func_39(uParam0)) || __LIB_1__::func_23(uParam0))
		{
			if (!CAM::_0x139EFB0A71DD9011())
			{
				__LIB_1__::func_193(1, 1);
				__LIB_1__::func_814(&uLocal_657);
			}
			if (!__LIB_0__::func_752(uParam0->f_14) || CAM::_0x7CE9DC58E3E4755F())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				return true;
			}
		}
		if (func_39(uParam0) || __LIB_1__::func_23(uParam0))
		{
			__LIB_0__::func_7(&(Global_1347343.f_11), 262144);
		}
	}
	if (uParam0->f_13 > 1)
	{
		__LIB_1__::func_754(uParam0);
		func_45(uParam0);
	}
	switch (uParam0->f_13)
	{
		case 0:
			if (!uParam0->f_12)
			{
				uParam0->f_12 = __LIB_1__::func_143(uParam0);
				return false;
			}
			if (__LIB_0__::func_750(&(Global_1391438.f_5), 128) || __LIB_0__::func_750(&(uParam0->f_9), 896))
			{
				__LIB_0__::func_63(&(Global_1391438.f_5), 128, 0);
				uParam0->f_13 = 1;
			}
			break;
		case 1:
			if (func_49(uParam0))
			{
				COMPANION::_0xA079FF7CFB9AC8BD(__LIB_0__::func_110(), 4);
				__LIB_1__::func_639(uParam0, 0, 0);
				uParam0->f_13 = 4;
			}
			break;
		case 4:
			if (__LIB_18__::func_181(uParam0))
			{
				iVar0 = __LIB_0__::func_753(*uParam0);
				Global_40.f_7039[__LIB_0__::func_754(iVar0, 1) /*2*/] = 1;
				uParam0->f_14 = 1;
				uParam0->f_13 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_7(var uParam0)
{
	int iVar0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	if (PED::_0x62DE46F061CAA468() > 0)
	{
		PED::_0x7D4E70A67A651C71(PED::_0x62DE46F061CAA468());
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[0]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 297, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 315, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 130, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 331, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 330, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 279, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 167, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 512, false);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 473, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 474, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 475, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 258, false);
	PED::_0x949B2F9ED2917F5D(Global_35, 3);
	PED::_0x949B2F9ED2917F5D(Global_35, 4);
	PED::_0x949B2F9ED2917F5D(Global_35, 1);
	PED::_0x949B2F9ED2917F5D(Global_35, 23);
	PED::_0x949B2F9ED2917F5D(Global_35, 24);
	PED::_0xEAE3B5B019C8D23F(Global_35, 1);
	PED::_0xEAE3B5B019C8D23F(Global_35, 32);
	PED::_0xEAE3B5B019C8D23F(Global_35, 8);
	PED::_0xEAE3B5B019C8D23F(Global_35, 16);
	PED::_0xEAE3B5B019C8D23F(Global_35, 4);
	PED::_0xEAE3B5B019C8D23F(Global_35, 128);
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[2]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[2], 136, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[17]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 159, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 225, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 297, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 130, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 315, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 351, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 21, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 302, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 360, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 317, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 359, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 213, false);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 6, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[18]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[18], 301, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[19]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[19], 301, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[13]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[13], 186, false);
	}
	if (__LIB_1__::func_22(uParam0->f_2))
	{
		__LIB_0__::func_705(uParam0->f_2, 0);
		__LIB_1__::func_774(uParam0->f_2, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[1]))
	{
		__LIB_1__::func_463(Local_15.f_307[1], uParam0->f_2, 1, 0, 0);
	}
	__LIB_3__::func_142(Local_15.f_53[7]);
	PATHFIND::_0xD17672447692478E(Local_15.f_53[19], 0);
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_53[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(Local_15.f_53[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 16;
	while (iVar0 <= 17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar0]))
		{
			__LIB_0__::func_490(&(Local_15.f_307[iVar0]), 1);
		}
		iVar0++;
	}
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar0]))
		{
			__LIB_0__::func_490(&(Local_15.f_307[iVar0]), 1);
		}
		iVar0++;
	}
	iVar0 = 10;
	while (iVar0 <= 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar0]))
		{
			if (iVar0 == 13)
			{
				PED::SET_PED_CONFIG_FLAG(Local_15.f_307[iVar0], 186, false);
			}
			__LIB_0__::func_490(&(Local_15.f_307[iVar0]), 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_466[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(Local_15.f_466[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 40)
	{
		Local_15.f_204[iVar0] = 0;
		iVar0++;
	}
	__LIB_2__::func_506(Local_15.f_418, func_66(Local_15.f_418));
	__LIB_2__::func_506(Local_15.f_419, func_66(Local_15.f_419));
	__LIB_10__::func_26(&(Local_15.f_421));
	if (Local_15.f_423 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(Local_15.f_423), 1);
		Local_15.f_423 = -1;
	}
	if (Local_15.f_424 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(Local_15.f_424), 1);
		Local_15.f_424 = -1;
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	__LIB_0__::func_804(1410198831);
	__LIB_1__::func_721(7);
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_LOCKBOX_LRG_LOCKED", true);
	STREAMING::_0x9F348DE670423460(func_71(0));
	STREAMING::_0x9F348DE670423460(func_71(1));
	STREAMING::_0x9F348DE670423460(func_71(2));
	STREAMING::_0x9F348DE670423460(func_71(3));
}

void func_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_746(iParam0) == 4)
	{
		__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam3)
			{
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		__LIB_0__::func_267(1);
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	bVar1 = __LIB_0__::func_2() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		__LIB_1__::func_421(0, 2);
		if (!bVar1 && bParam1)
		{
			__LIB_1__::func_755();
		}
	}
	else
	{
		__LIB_1__::func_142(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		__LIB_0__::func_870(iParam0);
	}
	else
	{
		Var2 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!__LIB_0__::func_13(32768))
		{
			Var4 = { __LIB_0__::func_14(joaat("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && __LIB_0__::func_291(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (__LIB_0__::func_76(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((__LIB_0__::func_76(iParam0) != 95 && __LIB_0__::func_76(iParam0) != 82) && !__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		__LIB_1__::func_641(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_1__::func_642(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		iVar9 = __LIB_1__::func_145(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_1__::func_629(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = __LIB_0__::func_308(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_300(1);
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				__LIB_0__::func_747(45, 0, 1);
				break;
			case 8:
				iVar10 = __LIB_0__::func_310(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (__LIB_0__::func_311(__LIB_0__::func_76(iParam0)))
				{
					__LIB_1__::func_715(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 2:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 6:
				__LIB_0__::func_747(__LIB_0__::func_312(__LIB_0__::func_872(iParam0)), 0, 1);
				break;
			case 5:
				__LIB_0__::func_747(120, 0, 1);
				break;
		}
	}
	__LIB_1__::func_144(iParam0, 1);
	__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
	__LIB_1__::func_470(iParam0);
	if ((!__LIB_0__::func_291(iParam0) == 0 && bParam1) && __LIB_0__::func_2() == -1)
	{
		iVar12 = __LIB_1__::func_24(iParam0);
		if (iVar12 != -1)
		{
			__LIB_0__::func_867(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = __LIB_1__::func_194();
			if (iVar12 != -1)
			{
				__LIB_0__::func_867(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (__LIB_0__::func_76(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
			case 8:
				if (__LIB_0__::func_76(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
		}
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		if (bParam3)
		{
			__LIB_1__::func_242(iParam0, 6);
		}
		else
		{
			__LIB_1__::func_242(iParam0, 5);
		}
		__LIB_1__::func_470(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						__LIB_0__::func_873();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_139(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_139(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_139(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_139(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_139(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_139(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_139(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_139(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_139(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_139(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_139(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_139(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_139(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_141();
						func_142(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						__LIB_1__::func_101();
						__LIB_0__::func_874();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(__LIB_1__::func_464(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_139(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							__LIB_1__::func_240(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							__LIB_1__::func_240(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						__LIB_1__::func_630(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_21(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[21 /*49*/].f_3)), iVar14);
						}
						break;
					case 20:
						__LIB_0__::func_875();
						break;
					case 26:
						__LIB_0__::func_876();
						break;
					case 17:
						__LIB_1__::func_810(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!__LIB_0__::func_878(joaat("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = __LIB_0__::func_23();
							__LIB_1__::func_446(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							__LIB_1__::func_612(joaat("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						__LIB_0__::func_879();
						break;
					case 37:
						__LIB_0__::func_880();
						if (__LIB_0__::func_26())
						{
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), iVar14);
						}
						break;
					case 38:
						__LIB_0__::func_881();
						break;
					case 43:
						__LIB_0__::func_882();
						break;
					case 44:
						if (!__LIB_1__::func_25(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_21(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[82 /*49*/].f_3)), iVar14);
						}
						if (!__LIB_1__::func_25(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_21(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[83 /*49*/].f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						__LIB_0__::func_883();
						break;
					case 59:
						__LIB_0__::func_884();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						__LIB_0__::func_885();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						__LIB_0__::func_886();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SURV_ROOT"), true);
							__LIB_1__::func_240(451, 0);
						}
						if (!__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_05")))
						{
							if (__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_04")))
							{
								iVar16 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (__LIB_0__::func_315(4))
						{
							if (!__LIB_1__::func_707(joaat("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_139(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_1__::func_146(89200);
						__LIB_1__::func_146(2300);
						__LIB_1__::func_146(2300);
						break;
					case 68:
						__LIB_0__::func_887();
						break;
					case 76:
						if (Global_1425247.f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[108 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[69 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[70 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[7 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[22 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[23 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[65 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[7 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[8 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[36 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[48 /*74*/].f_8)), iVar14);
						__LIB_0__::func_888();
						__LIB_1__::func_146(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_1__::func_146(-6000);
						}
						break;
					case 70:
						__LIB_1__::func_146(23400);
						__LIB_1__::func_146(1900);
						__LIB_1__::func_146(-15000);
						break;
					case 71:
						__LIB_1__::func_146(-5500);
						break;
				}
				break;
			case 8:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444 /* GXTEntry: "Penelope Braithwaite" */);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DORKINS"));
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calderón" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hernández" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548 /* GXTEntry: "Billy Midnight" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082 /* GXTEntry: "Black Belle" */);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767 /* GXTEntry: "Slim Grant" */);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465 /* GXTEntry: "Mr. Black" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187 /* GXTEntry: "Mr. White" */);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DOCTOR"));
						break;
					case 58:
						__LIB_0__::func_889();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171 /* GXTEntry: "Lilly Millet" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						__LIB_0__::func_890();
						break;
					case 66:
						__LIB_0__::func_891();
						__LIB_1__::func_599();
						break;
					case 67:
						if (!__LIB_0__::func_892(6))
						{
							__LIB_0__::func_893(6);
						}
						if (!__LIB_0__::func_892(3))
						{
							__LIB_0__::func_893(3);
						}
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_RINGMASTER"));
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833 /* GXTEntry: "Mary Linton" */);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MASON"));
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131 /* GXTEntry: "Bertram" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117 /* GXTEntry: "Magnifico" */);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WARVET"));
						break;
					case 9:
						if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(46500);
						}
						break;
				}
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						switch (__LIB_0__::func_872(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		__LIB_0__::func_894(iParam0);
		func_179();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_1__::func_777(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_1__::func_777(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_1__::func_777(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_1__::func_777(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_1__::func_777(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_1__::func_777(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_1__::func_777(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_1__::func_777(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_1__::func_777(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_1__::func_777(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_139(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_1__::func_777(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_1__::func_777(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_1__::func_777(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_1__::func_777(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_1__::func_777(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 536870912))
				{
					__LIB_0__::func_896(11, 1);
				}
				switch (__LIB_0__::func_76(iParam0))
				{
					case 109:
						__LIB_1__::func_777(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_1__::func_777(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_1__::func_777(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_1__::func_777(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_1__::func_777(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!__LIB_0__::func_291(iParam0) == 0)
			{
				if (__LIB_0__::func_299(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						__LIB_1__::func_790(__LIB_1__::func_613(Global_1879514.f_1));
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			__LIB_0__::func_703(bParam2, iVar20);
		}
	}
	__LIB_0__::func_301(1);
	if ((bVar13 || __LIB_1__::func_195()) && (__LIB_0__::func_700(iParam0) == 1 || __LIB_0__::func_700(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

bool func_39(var uParam0)
{
	if (__LIB_0__::func_27(Local_15.f_631, 8192))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_ABND", 24);
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_FAIL");
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_15.f_307[2]) || PED::IS_PED_FATALLY_INJURED(Local_15.f_307[2]))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_KPLH", 24);
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_FAIL");
		return true;
	}
	if ((ENTITY::_0x88AD6CC10D8D35B2(Local_15.f_307[1]) && ENTITY::IS_ENTITY_DEAD(Local_15.f_307[1])) || PED::IS_PED_FATALLY_INJURED(Local_15.f_307[1]))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_KCPH", 24);
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_FAIL");
		return true;
	}
	if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_WPL", 24);
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_FAIL");
		return true;
	}
	if (__LIB_0__::func_27(Local_15.f_631, 65536))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_KLDB", 24);
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_FAIL");
		return true;
	}
	if (__LIB_0__::func_27(Local_15.f_631, 2097152))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_DSPLT", 24);
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_FAIL");
		return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15.f_307[0], Global_35, 1, 1))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_AGRC", 24);
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_FAIL");
		return true;
	}
	return false;
}

int func_45(var uParam0)
{
	if (Local_15 < 10)
	{
		func_224();
		func_225();
		func_226();
		func_227(uParam0);
		func_228(uParam0);
		func_229();
		ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 15, 1);
		if (func_230())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_375))
			{
				ENTITY::_0xC3ABCFBC7D74AFA5(Local_15.f_375, 12, 1);
			}
			if (PED::GET_PED_CONFIG_FLAG(Local_15.f_307[2], 136, true))
			{
				PED::SET_PED_CONFIG_FLAG(Local_15.f_307[2], 136, false);
			}
		}
		if (Local_15.f_568)
		{
			func_231();
		}
		if (__LIB_1__::func_587(0))
		{
			PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), Local_15.f_307[2]);
		}
	}
	switch (Local_15)
	{
		case 0:
			if (!__LIB_0__::func_272(Local_15.f_307[0], 0))
			{
				return 0;
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_15.f_307[1]))
			{
				return 0;
			}
			func_233(0, 0);
			__LIB_6__::func_813(uParam0, func_234(0), func_234(1), 0, 1);
			func_236(1, 1);
			break;
		case 1:
			if (func_237(uParam0))
			{
				func_236(2, 1);
			}
			break;
		case 2:
			if (func_238(uParam0))
			{
				func_236(3, 1);
			}
			break;
		case 3:
			if (func_239(uParam0))
			{
				func_236(4, 1);
			}
			break;
		case 4:
			PED::SET_PED_RESET_FLAG(Local_15.f_307[0], 179, true);
			func_240();
			if (func_241(uParam0))
			{
				func_236(5, 1);
			}
			break;
		case 5:
			func_242(&(Local_15.f_421), 877.5134f, 418.416f, 110.7355f, "scr_campfire_distance_smoke_sma");
			func_240();
			if (func_243(uParam0))
			{
				func_236(6, 1);
			}
			break;
		case 6:
			func_242(&(Local_15.f_421), 877.5134f, 418.416f, 110.7355f, "scr_campfire_distance_smoke_sma");
			func_240();
			if (func_244(uParam0))
			{
				func_236(7, 1);
			}
			break;
		case 7:
			PED::SET_PED_RESET_FLAG(Local_15.f_307[0], 179, true);
			ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 0, 1);
			func_240();
			func_242(&(Local_15.f_421), 877.5134f, 418.416f, 110.7355f, "scr_campfire_distance_smoke_sma");
			if (func_245(uParam0))
			{
				func_236(8, 1);
			}
			break;
		case 8:
			PED::SET_PED_RESET_FLAG(Local_15.f_307[0], 179, true);
			ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 0, 1);
			func_242(&(Local_15.f_421), 877.5134f, 418.416f, 110.7355f, "scr_campfire_distance_smoke_sma");
			func_246();
			if (func_247(uParam0))
			{
				func_236(9, 1);
			}
			break;
		case 9:
			func_242(&(Local_15.f_421), 877.5134f, 418.416f, 110.7355f, "scr_campfire_distance_smoke_sma");
			if (__LIB_0__::func_94(Local_15.f_307[17], 872.5671f, 417.5553f, 110.7346f, 1) > 2f)
			{
				__LIB_3__::func_865(Local_15.f_307[17], &(Local_15.f_632), 0f, 0f, 0.5f, 0, 1106247680 /* Float: 30f */, 20f, -1, 1000, 1000, 0.5f, 1, 1, 1084227584 /* Float: 5f */);
			}
			if (func_249(uParam0))
			{
				func_236(10, 1);
			}
			break;
		case 10:
			__LIB_6__::func_813(uParam0, func_234(8), func_234(8), 8, 8);
			uParam0->f_14 = 1;
			uParam0->f_13 = 6;
			func_236(11, 1);
			break;
		case 11:
			return 1;
	}
	return 0;
}

bool func_49(var uParam0)
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_51(&(uParam0->f_3), __LIB_0__::func_771(iVar0)))
		{
			if (__LIB_0__::func_903(iVar0))
			{
				if (!__LIB_1__::func_22(iVar0))
				{
					func_254(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					return false;
				}
				if (((!__LIB_0__::func_866(iVar0, 0) && uParam0->f_1 != joaat("HAI_FIVE_FINGER_FILLET_01")) && uParam0->f_1 != joaat("HAI_FIVE_FINGER_FILLET_02")) && uParam0->f_1 != joaat("HAI_DOMINOES_01"))
				{
					__LIB_1__::func_551(iVar0, 0);
					AUDIO::STOP_PED_SPEAKING(__LIB_0__::func_271(iVar0), true);
				}
			}
			else if (!__LIB_1__::func_22(iVar0))
			{
				func_254(iVar0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return false;
			}
		}
		iVar0++;
	}
	if (!func_256(uParam0))
	{
		return false;
	}
	__LIB_0__::func_772(uParam0);
	if (__LIB_0__::func_750(&(uParam0->f_9), 128))
	{
		if (!func_258(uParam0))
		{
			return false;
		}
	}
	sVar1 = __LIB_0__::func_758(uParam0->f_1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		MISC::_0x1096603B519C905F(sVar1);
	}
	if (__LIB_0__::func_704())
	{
		__LIB_1__::func_716(1);
	}
	__LIB_0__::func_326(64);
	__LIB_0__::func_267(1);
	__LIB_0__::func_7(&Global_1935630, 256);
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	}
	if (!__LIB_0__::func_13(32768))
	{
		func_262(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35));
	}
	return true;
}

char[] func_66(int iParam0)
{
	if (iParam0 == Local_15.f_418)
	{
		return "script@common@cnv_camp@cachr@hunt02@ig1_confront@hunt02_ig1";
	}
	else if (iParam0 == Local_15.f_419)
	{
		return "script@common@cnv_camp@cachr@hunt02@ig2_let_go@action";
	}
	return "";
}

char* func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@MOUNTED@INTIMIDATION@LOCO@ATTACKER";
		case 1:
			return "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@MOUNTED@INTIMIDATION@LOCO@VICTIM";
		case 2:
			return "CLIPSET@MECH_MELEE@UNARMED@_MALE@_AMBIENT@_HEALTHY@INTIMIDATION@ON_KNEES@_STREAMED";
		case 3:
			return "CLIPSET@MECH_GRAPPLE@UNARMED@_MALE@_AMBIENT@_HEALTHY@MOUNTED@INTIMIDATION@ON_KNEES@_BASE";
		default:
			break;
	}
	return "";
}

bool func_139(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
		return false;
	}
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return false;
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
				func_139(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_5__::func_391(28);
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
			if (!__LIB_1__::func_842(iParam0, &iVar0, iParam5))
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
				return false;
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
						func_139(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_139(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_139(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_139(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_139(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_139(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_816(iParam0);
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
				func_139(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_5__::func_391(24);
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
					func_139(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_139(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			return false;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_1__::func_825(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_9__::func_309(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_6__::func_187(iParam0);
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
				func_139(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
	return true;
}

void func_141()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_433();
	func_434();
	func_435();
	func_436();
	func_437();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_440(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		__LIB_1__::func_798(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(__LIB_1__::func_710(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	__LIB_0__::func_921(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
				{
					__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
		{
			__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946804.f_1378.f_1[iVar1 /*3*/] = { Global_1946804.f_1616.f_1[iVar1 /*3*/] };
		iVar1++;
	}
}

void func_179()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575.f_4)
	{
		return;
	}
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return;
	}
	else if ((__LIB_0__::func_296(0, 0, 1) || __LIB_0__::func_383()) || __LIB_1__::func_195())
	{
		return;
	}
	iVar0 = __LIB_1__::func_194();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_481(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		__LIB_1__::func_103(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		__LIB_0__::func_703(0, -1);
	}
	if (iVar2 > 0)
	{
		__LIB_0__::func_45("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_385(1, 0);
	Global_1956575.f_4 = 1;
}

void func_224()
{
	if (Local_15.f_10 == -1)
	{
		return;
	}
	if (__LIB_0__::func_27(Local_15.f_631, 32768) && Local_15.f_10 != 8)
	{
		return;
	}
	if (!Local_15.f_246)
	{
		if (Local_15.f_204[Local_15.f_10])
		{
			return;
		}
		if (__LIB_0__::func_481(1))
		{
			return;
		}
	}
	switch (Local_15.f_10)
	{
		case 0:
			func_521(0, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 1:
			func_521(1, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 2:
			func_521(2, Global_35, Local_15.f_307[0], 1, 0);
			break;
		case 3:
			func_521(3, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 4:
			func_521(4, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 5:
			func_521(5, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 6:
			func_521(6, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 7:
			func_521(7, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 8:
			func_521(8, Local_15.f_307[0], Global_35, 0, 1);
			break;
		case 9:
			func_521(9, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 10:
			func_521(10, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 11:
			func_521(11, Global_35, Local_15.f_307[0], 1, 0);
			break;
		case 12:
			func_521(12, Global_35, Local_15.f_307[0], 1, 0);
			break;
		case 13:
			func_521(13, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 14:
			func_521(14, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 15:
			func_521(15, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 16:
			func_521(16, Global_35, Local_15.f_307[0], 1, 0);
			break;
		case 17:
			func_521(17, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 18:
			func_521(18, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 19:
			func_521(19, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 20:
			func_521(20, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 21:
			func_521(21, Global_35, Local_15.f_307[0], 1, 0);
			break;
		case 22:
			func_521(22, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 23:
			func_521(23, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 24:
			func_521(24, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 25:
			func_521(25, Global_35, Local_15.f_307[0], 1, 0);
			break;
		case 26:
			func_521(26, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 27:
			func_521(27, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 28:
			func_521(28, Global_35, Local_15.f_307[0], 1, 0);
			break;
		case 29:
			func_521(29, Global_35, Local_15.f_307[17], 1, 0);
			break;
		case 30:
			func_521(30, Global_35, Local_15.f_307[17], 1, 0);
			break;
		case 31:
			func_521(31, Global_35, Local_15.f_307[17], 1, 0);
			break;
		case 32:
			func_521(32, Local_15.f_307[17], Global_35, 1, 0);
			break;
		case 33:
			func_521(33, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 34:
			func_521(34, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 35:
			func_521(35, Global_35, Local_15.f_307[17], 1, 0);
			break;
		case 36:
			func_521(36, Local_15.f_307[0], Global_35, 1, 0);
			break;
		case 37:
			func_521(37, Global_35, Local_15.f_307[0], 1, 0);
			break;
		case 38:
			func_521(38, Global_35, Local_15.f_307[0], 1, 0);
			break;
		case 39:
			func_521(39, Global_35, Local_15.f_307[0], 1, 0);
			break;
		case 40:
			func_521(40, Global_35, Local_15.f_307[0], 1, 0);
			break;
		case -1:
			break;
	}
}

void func_225()
{
	switch (Local_15.f_11)
	{
		case 0:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_1__::func_422("H2_OBJ_KILLBUF", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case 1:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_1__::func_422("H2_OBJ_SKINBUF", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case 2:
			__LIB_1__::func_422("H2_OBJ_STWHID", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_523(-1);
			break;
		case 3:
			__LIB_1__::func_422("H2_OBJ_MNTFLW", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_523(-1);
			break;
		case 4:
			__LIB_1__::func_422("H2_OBJ_FOLLOW", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_523(-1);
			break;
		case 5:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_1__::func_422("H2_OBJ_SEARCH", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case 6:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_1__::func_422("H2_OBJ_FNDCMP", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case 7:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_1__::func_422("H2_OBJ_INT", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case 8:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_1__::func_422("H2_OBJ_LOOT", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_523(-1);
			}
			break;
		case -1:
			break;
	}
}

void func_226()
{
	if (!MAP::DOES_BLIP_EXIST(Local_15.f_18) || MAP::GET_BLIP_FROM_ENTITY(Local_15.f_307[0]) == 0)
	{
		Local_15.f_18 = __LIB_1__::func_863(Local_15.f_307[0], joaat("BLIP_STYLE_COMPANION"), 1, 1);
	}
}

void func_227(var uParam0)
{
	if (__LIB_0__::func_27(Local_15.f_631, 1048576))
	{
		return;
	}
	if (__LIB_0__::func_94(Global_35, func_525(), 1) > func_526())
	{
		__LIB_1__::func_283(&(Local_15.f_93), 0);
		if (!__LIB_0__::func_27(Local_15.f_631, 4096))
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422(func_527(), 7500, 0, 1, 0, 0, -1, -1, 0);
			__LIB_1__::func_683(&(Local_15.f_631), 4096);
		}
		if (__LIB_1__::func_285(&(Local_15.f_93), 7f))
		{
			StringCopy(&(uParam0->f_15), "H2_FL_ABND", 24);
			uParam0->f_14 = 5;
			__LIB_1__::func_683(&(Local_15.f_631), 8192);
		}
	}
	else if (__LIB_0__::func_27(Local_15.f_631, 4096))
	{
		__LIB_0__::func_37(&(Local_15.f_93));
		__LIB_1__::func_681(&(Local_15.f_631), 4096);
		__LIB_1__::func_324(func_531());
		if (Local_15.f_12 == 2)
		{
			func_523(2);
		}
	}
}

void func_228(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_27(Local_15.f_631, 64))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (vVar0.z >= 117.4391f)
	{
		__LIB_1__::func_283(&(Local_15.f_99), 0);
		if (!__LIB_0__::func_27(Local_15.f_631, 1048576))
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("H2_OBJ_RTCHA", 7500, 0, 1, 0, 0, -1, -1, 0);
			__LIB_1__::func_683(&(Local_15.f_631), 1048576);
		}
	}
	if (__LIB_1__::func_285(&(Local_15.f_99), 3f))
	{
		StringCopy(&(uParam0->f_15), "H2_FL_ABND", 24);
		uParam0->f_14 = 5;
		__LIB_1__::func_683(&(Local_15.f_631), 8192);
	}
}

void func_229()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_376))
	{
		if (func_533() && !__LIB_0__::func_27(Local_15.f_631, 32768))
		{
			__LIB_3__::func_732(0);
			func_233(8, 0);
			__LIB_1__::func_683(&(Local_15.f_631), 32768);
			return;
		}
		else if ((func_535() && !__LIB_0__::func_27(Local_15.f_631, 16384)) && !__LIB_0__::func_27(Local_15.f_631, 32768))
		{
			func_233(8, 0);
			__LIB_1__::func_683(&(Local_15.f_631), 16384);
		}
	}
	if (__LIB_0__::func_27(Local_15.f_631, 32768) && !__LIB_0__::func_481(1))
	{
		__LIB_1__::func_283(&(Local_15.f_96), 0);
	}
	if (__LIB_1__::func_285(&(Local_15.f_96), 2f) && __LIB_0__::func_27(Local_15.f_631, 32768))
	{
		__LIB_1__::func_683(&(Local_15.f_631), 65536);
	}
}

bool func_230()
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	if (PED::_0x608BC6A6AACD5036(&Var0, Local_15.f_307[2], 4, 0))
	{
		iVar5 = Var0.f_3;
		iVar4 = ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iVar5, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar5) && iVar4 == joaat("CARRIABLE_XL_BUFFALO_SKIN"))
		{
			return true;
		}
	}
	return false;
}

void func_231()
{
	int iVar0;
	var uVar1;
	iVar0 = 0;
	while (iVar0 < 33)
	{
		if (!__LIB_0__::func_139(Local_15.f_432[iVar0]) && (__LIB_0__::func_48(Global_35, Local_15.f_466[iVar0], 3.5f, 1) && !Local_15.f_500[iVar0]))
		{
			Local_15.f_432[iVar0] = __LIB_1__::func_877("INSPECT", joaat("INPUT_CONTEXT_Y"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			HUD::_UIPROMPT_SET_GROUP(func_538(Local_15.f_432[iVar0]), 1892922820, 0);
		}
		if (__LIB_0__::func_48(Global_35, Local_15.f_466[iVar0], 3.5f, 1) && !__LIB_1__::func_499())
		{
			if (Local_15.f_500[iVar0])
			{
				__LIB_1__::func_221(Local_15.f_432[iVar0], 0, 1);
				__LIB_1__::func_683(&uVar1, 8);
				HUD::_UIPROMPT_SET_VISIBLE(func_538(Local_15.f_432[iVar0]), false);
			}
			else
			{
				if (__LIB_0__::func_567(Local_15.f_432[iVar0], 1) && !Local_15.f_500[iVar0])
				{
					func_233(func_542(iVar0), 1);
					Local_15.f_500[iVar0] = 1;
				}
				if (__LIB_0__::func_481(1))
				{
					__LIB_1__::func_221(Local_15.f_432[iVar0], 0, 1);
				}
				else
				{
					__LIB_1__::func_221(Local_15.f_432[iVar0], 1, 1);
				}
				__LIB_1__::func_681(&uVar1, 8);
				HUD::_UIPROMPT_SET_VISIBLE(func_538(Local_15.f_432[iVar0]), true);
			}
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1892922820, "INTERACT_DEAD_BUFFALO_ILO_PROMPT", 1, 0, uVar1, 0);
		}
		else if (__LIB_0__::func_139(Local_15.f_432[iVar0]))
		{
			__LIB_1__::func_221(Local_15.f_432[iVar0], 0, 1);
			__LIB_1__::func_382(Local_15.f_432[iVar0], 0, 1);
		}
		iVar0++;
	}
}

void func_233(int iParam0, int iParam1)
{
	if (Local_15.f_10 != iParam0)
	{
		Local_15.f_10 = iParam0;
	}
	Local_15.f_246 = iParam1;
}

struct<4> func_234(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			if (Local_15.f_411 == 71)
			{
				Var0 = { func_545(0, 0) };
				Var0.f_3 = func_546(0, 0);
			}
			else
			{
				Var0 = { func_545(1, 0) };
				Var0.f_3 = func_546(1, 0);
			}
			break;
		case 1:
			if (Local_15.f_411 == 71)
			{
				Var0 = { func_545(2, 0) };
				Var0.f_3 = func_546(2, 0);
			}
			else
			{
				Var0 = { func_545(3, 0) };
				Var0.f_3 = func_546(3, 0);
			}
			break;
		case 2:
			if (Local_15.f_411 == 71)
			{
				Var0 = { func_545(4, 0) };
				Var0.f_3 = func_546(4, 0);
			}
			else
			{
				Var0 = { func_545(5, 0) };
				Var0.f_3 = func_546(5, 0);
			}
			break;
		case 3:
			if (Local_15.f_411 == 71)
			{
				Var0 = { func_545(6, 0) };
				Var0.f_3 = func_546(6, 0);
			}
			else
			{
				Var0 = { func_545(7, 0) };
				Var0.f_3 = func_546(7, 0);
			}
			break;
		case 4:
			Var0 = { func_545(8, 0) };
			Var0.f_3 = func_546(8, 0);
			break;
		case 5:
			Var0 = { func_545(9, 0) };
			Var0.f_3 = func_546(9, 0);
			break;
		case 6:
			Var0 = { func_545(10, 0) };
			Var0.f_3 = func_546(10, 0);
			break;
		case 7:
			Var0 = { func_545(11, 0) };
			Var0.f_3 = func_546(11, 0);
			break;
		case 8:
			Var0 = { func_545(12, 0) };
			Var0.f_3 = func_546(12, 0);
			break;
	}
	return Var0;
}

void func_236(int iParam0, bool bParam1)
{
	if (Local_15 != iParam0)
	{
		Local_15 = iParam0;
	}
	func_548(bParam1);
}

bool func_237(var uParam0)
{
	int iVar0;
	switch (Local_15.f_1)
	{
		case 0:
			func_549(uParam0, 2);
			func_551(func_550(0), func_550(1), 1092616192 /* Float: 10f */, 5f, 10f, 0, 1);
			func_553(func_552(0));
			func_554(10, 999);
			func_555(0, 1);
			TASK::TASK_STAND_STILL(Local_15.f_307[2], -1);
			TASK::TASK_STAND_STILL(Local_15.f_307[1], -1);
			__LIB_6__::func_813(uParam0, func_234(1), func_234(2), 1, 2);
			if (__LIB_0__::func_399(Local_15.f_307[0], 1, 2, 0) != joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"))
			{
				__LIB_1__::func_766(Local_15.f_307[0], joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"), 0, 0, 2, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_START");
			func_558(1, 1);
			break;
		case 1:
			func_559(uParam0, 1);
			func_560(uParam0, 1107820544 /* Float: 34f */, 1, 1086324736 /* Float: 6f */, 0);
			if (!__LIB_0__::func_27(Local_15.f_631, 128))
			{
				func_561();
			}
			if (!__LIB_0__::func_27(Local_15.f_631, 256))
			{
				func_562();
			}
			if (Local_15.f_391 >= 4)
			{
				func_233(1, 0);
				if ((Local_15.f_411 == 98 && Local_15.f_204[1]) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_15.f_307[0]) >= 55)
				{
					func_233(2, 0);
				}
			}
			if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_15.f_307[0]) >= 113 && Local_15.f_411 == 71)
			{
				func_233(3, 0);
			}
			else if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_15.f_307[0]) >= 290 && Local_15.f_411 == 98)
			{
				func_233(4, 0);
			}
			if (Local_15.f_411 == 71)
			{
				iVar0 = 169;
			}
			else
			{
				iVar0 = 361;
			}
			if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_15.f_307[0]) >= iVar0 && __LIB_0__::func_665(Global_35, Local_15.f_307[0], 1, 1) < 20f)
			{
				func_233(5, 0);
				if (!Local_15.f_641)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_BISON");
					Local_15.f_641 = 1;
				}
			}
			__LIB_1__::func_694(Global_35, Local_15.f_401, 0, 20f, 10f, 6f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			if (Local_15.f_391 == 7)
			{
				__LIB_6__::func_813(uParam0, func_234(2), func_234(3), 2, 3);
				func_558(2, 1);
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_238(var uParam0)
{
	float fVar0;
	var uVar1;
	switch (Local_15.f_2)
	{
		case 0:
			func_233(6, 0);
			__LIB_1__::func_283(&(Local_15.f_84), 0);
			if (__LIB_1__::func_285(&(Local_15.f_84), 8.75f))
			{
				__LIB_0__::func_37(&(Local_15.f_84));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_523(0);
				if (!Local_15.f_273[0])
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_15.f_307[0], Local_15.f_307[3], 0f, 0f, -5f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
					Local_15.f_273[0] = 1;
				}
				func_565(1, 1);
			}
			else
			{
				__LIB_3__::func_460(Global_35, &(Local_15.f_630), 2113, 0, 0, 5f, 100, 0, 0);
			}
			break;
		case 1:
			if (__LIB_0__::func_270() && !Local_15.f_102)
			{
				func_568(uParam0, 1);
				func_568(uParam0, 2);
				func_549(uParam0, 4);
				Local_15.f_102 = 1;
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
			func_569();
			func_570();
			__LIB_1__::func_283(&(Local_15.f_84), 0);
			if (Local_15.f_411 == 71)
			{
				fVar0 = 1.75f;
			}
			else
			{
				fVar0 = 2.75f;
			}
			if (__LIB_1__::func_285(&(Local_15.f_84), fVar0) && !__LIB_0__::func_27(Local_15.f_631, 131072))
			{
				__LIB_1__::func_683(&(Local_15.f_631), 131072);
			}
			if (__LIB_0__::func_27(Local_15.f_631, 131072))
			{
				func_571();
			}
			if (func_572())
			{
				func_568(uParam0, 4);
				__LIB_1__::func_324("H2_OBJ_SKINBUF");
				func_565(2, 1);
			}
			break;
		case 2:
			func_571();
			if (!__LIB_0__::func_481(1))
			{
				__LIB_1__::func_283(&(Local_15.f_75), 0);
			}
			if ((__LIB_1__::func_285(&(Local_15.f_75), 3f) && !__LIB_0__::func_481(1)) && !Local_15.f_102)
			{
				__LIB_0__::func_37(&(Local_15.f_75));
				func_523(1);
				Local_15.f_102 = 1;
			}
			if (func_573())
			{
				if (!Local_15.f_273[0])
				{
					func_574(0, 1, 1);
					TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_307[1], 20000, -1, 2f, 1, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, __LIB_9__::func_776(Local_15.f_376, Local_15.f_307[0], 10f), 2f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_15.f_376, -1, -1f, -1f, -1f);
					func_576(0, 1, 0, 0, 1);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_15.f_376))
			{
				if ((!ENTITY::_0x8DE41E9902E85756(Local_15.f_376) && !PED::_0x3AEC4A410ECAF30D(Local_15.f_376)) && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar1, Local_15.f_376, 0, Global_35) == 0)
				{
					__LIB_1__::func_683(&(Local_15.f_631), 2097152);
				}
			}
			if (func_577())
			{
				func_578();
				if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_375) && PED::_IS_PED_CARRYING(Global_35))
				{
					Local_15.f_375 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_15.f_307[0], Global_35, 0f, -6f, 0f, 1f, -1, 15f, 1, 1, 0, 1, 1);
					Local_15.f_273[0] = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_375))
				{
					func_233(10, 0);
					PED::SET_PED_CONFIG_FLAG(Local_15.f_307[2], 136, true);
					AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_BIRDS");
					__LIB_1__::func_324("H2_OBJ_STWHID");
					func_565(3, 1);
				}
			}
			else
			{
				if ((__LIB_0__::func_665(Global_35, Local_15.f_307[0], 1, 1) < 20f && !func_579()) && !__LIB_0__::func_27(Local_15.f_631, 32768))
				{
					func_233(7, 0);
					__LIB_1__::func_283(&(Local_15.f_84), 0);
					if (!Local_15.f_641)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_SKIN");
						Local_15.f_641 = 1;
					}
				}
				if ((__LIB_1__::func_285(&(Local_15.f_84), 4f) && !func_579()) && !__LIB_0__::func_27(Local_15.f_631, 32768))
				{
					func_233(9, 0);
				}
				if (func_579())
				{
					if (!Local_15.f_273[2] && __LIB_0__::func_665(Local_15.f_307[2], Global_35, 1, 1) < 3.5f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_15.f_307[2], __LIB_9__::func_776(Local_15.f_376, Local_15.f_307[2], 5f), 1f, 20000, 0.25f, 0, 40000f);
						Local_15.f_273[2] = 1;
					}
				}
				func_569();
			}
			break;
		case 3:
			func_549(uParam0, 2);
			if (!__LIB_0__::func_27(Local_15.f_631, 512))
			{
				func_580();
			}
			if (!__LIB_0__::func_481(1) && !Local_15.f_102)
			{
				func_523(2);
				Local_15.f_102 = 1;
			}
			ENTITY::_0x18FF3110CF47115D(Local_15.f_375, 4, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_375) && __LIB_1__::func_869(Global_35))
			{
				__LIB_0__::func_37(&(Local_15.f_75));
				__LIB_0__::func_37(&(Local_15.f_84));
				ENTITY::_0x18FF3110CF47115D(Local_15.f_375, 4, 1);
				func_523(-1);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				PED::SET_PED_CONFIG_FLAG(Local_15.f_307[2], 136, false);
				func_233(11, 0);
				func_549(uParam0, 2);
				__LIB_1__::func_324("H2_OBJ_MNTFLW");
				func_565(5, 1);
			}
			else if (__LIB_0__::func_94(Local_15.f_307[0], func_550(3), 1) < 30f)
			{
				func_233(13, 0);
				func_565(6, 1);
			}
			break;
		case 5:
			if (!__LIB_0__::func_481(1) && __LIB_3__::func_649(Local_15.f_307[2], Local_15.f_375))
			{
				__LIB_1__::func_283(&(Local_15.f_75), 0);
			}
			if ((__LIB_1__::func_285(&(Local_15.f_75), 6f) && !__LIB_0__::func_481(1)) && !Local_15.f_102)
			{
				__LIB_0__::func_37(&(Local_15.f_75));
				func_523(3);
				Local_15.f_102 = 1;
			}
			if (__LIB_0__::func_394(Global_35, Local_15.f_307[2], 0))
			{
				__LIB_0__::func_37(&(Local_15.f_75));
				func_568(uParam0, 2);
				func_549(uParam0, 1);
				func_233(12, 0);
				func_565(6, 1);
			}
			else if (__LIB_0__::func_94(Local_15.f_307[0], func_550(3), 1) < 30f)
			{
				func_233(13, 0);
				func_565(6, 1);
			}
			break;
		case 6:
			func_560(uParam0, 25f, 0, 1086324736 /* Float: 6f */, 1);
			if (!__LIB_0__::func_27(Local_15.f_631, 512))
			{
				func_580();
			}
			if (!PED::DOES_GROUP_EXIST(Local_15.f_420))
			{
				Local_15.f_420 = PED::CREATE_GROUP(0);
				PED::SET_GROUP_FORMATION(Local_15.f_420, 3);
				PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 279, true);
				PED::SET_PED_AS_GROUP_LEADER(Local_15.f_307[0], Local_15.f_420, false);
				PED::_0x0E9E95FDEDCC9D35(Global_35, 0, 0);
			}
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), Local_15.f_307[0], -2f, 0f, 1, 2, 0);
			if (__LIB_0__::func_94(Global_35, func_550(3), 1) < 15f)
			{
				func_584();
			}
			if (func_585(uParam0) && __LIB_0__::func_94(Global_35, func_550(3), 1) < 15f)
			{
				func_233(14, 0);
				func_565(7, 1);
			}
			break;
		case 7:
			func_586(uParam0);
			func_587(1);
			__LIB_16__::func_464(&(Local_15.f_307[0]));
			if (Local_15.f_411 == 71)
			{
				Local_15.f_377 = 10;
			}
			else
			{
				Local_15.f_377 = 12;
			}
			if (!Local_15.f_273[0])
			{
				func_574(0, 1, 1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_15.f_307[Local_15.f_377], 5500, -1f, -1f, -1f);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_550(5), 0.101f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
				func_576(0, 1, 0, 0, 1);
			}
			if (!__LIB_0__::func_481(1))
			{
				func_565(8, 1);
			}
			break;
		case 8:
			func_586(uParam0);
			if (func_589())
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_15.f_375) && !__LIB_3__::func_649(Local_15.f_307[2], Local_15.f_375)) && !__LIB_1__::func_869(Global_35))
				{
					if (!Local_15.f_273[0])
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15.f_307[0], Global_35, -1, -1f, -1f, -1f);
					}
					func_565(9, 1);
				}
				else
				{
					func_523(-1);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					func_565(10, 1);
				}
			}
			break;
		case 9:
			func_586(uParam0);
			func_233(15, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_375) && (__LIB_3__::func_649(Local_15.f_307[2], Local_15.f_375) || __LIB_1__::func_869(Global_35)))
			{
				func_523(-1);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				func_565(10, 1);
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_239(var uParam0)
{
	int iVar0;
	switch (Local_15.f_3)
	{
		case 0:
			__LIB_6__::func_813(uParam0, func_234(3), func_234(4), 3, 4);
			func_551(func_550(5), func_550(6), 1092616192 /* Float: 10f */, 20f, 20f, 1, 1);
			func_553(func_552(1));
			func_554(10, 999);
			func_555(0, 1);
			func_587(1);
			func_590(1, 1);
			break;
		case 1:
			func_559(uParam0, 1);
			func_560(uParam0, 1107820544 /* Float: 34f */, 1, 8f, 0);
			if (Local_15.f_411 == 71)
			{
				iVar0 = 27;
			}
			else
			{
				iVar0 = 5;
			}
			if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_15.f_307[0]) >= iVar0)
			{
				func_233(16, 0);
			}
			if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_15.f_307[0]) >= 88 && Local_15.f_411 == 71)
			{
				func_587(0);
				func_233(17, 0);
			}
			else if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_15.f_307[0]) >= 126 && Local_15.f_411 == 98)
			{
				func_587(0);
				func_233(18, 0);
			}
			__LIB_1__::func_694(Global_35, func_550(6), 0, 30f, 20f, 10f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			if (Local_15.f_391 == 7)
			{
				__LIB_6__::func_813(uParam0, func_234(4), func_234(5), 4, 5);
				func_590(2, 1);
			}
			break;
		case 2:
			func_587(1);
			func_233(19, 0);
			func_549(uParam0, 1);
			func_590(3, 1);
			break;
		case 3:
			return true;
	}
	return false;
}

void func_240()
{
	var uVar0;
	if ((!__LIB_0__::func_139(Local_15.f_267) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_53[8], true, 0)) && !PED::IS_PED_ON_MOUNT(Global_35))
	{
		Local_15.f_267 = __LIB_1__::func_877("INSPECT", joaat("INPUT_CONTEXT_Y"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		HUD::_UIPROMPT_SET_GROUP(func_538(Local_15.f_267), 925736033, 0);
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_53[8], true, 0) && !PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Local_15.f_429)
		{
			__LIB_1__::func_221(Local_15.f_267, 0, 1);
			__LIB_1__::func_683(&uVar0, 8);
			HUD::_UIPROMPT_SET_VISIBLE(func_538(Local_15.f_267), false);
		}
		else
		{
			__LIB_1__::func_221(Local_15.f_267, 1, 1);
			__LIB_1__::func_681(&uVar0, 8);
			HUD::_UIPROMPT_SET_VISIBLE(func_538(Local_15.f_267), true);
		}
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 925736033, "H2_UC_TITLE_CAMP_FIRE", uVar0);
	}
	else if (__LIB_0__::func_139(Local_15.f_267))
	{
		__LIB_1__::func_221(Local_15.f_267, 0, 1);
		__LIB_1__::func_382(Local_15.f_267, 0, 1);
	}
}

bool func_241(var uParam0)
{
	switch (Local_15.f_4)
	{
		case 0:
			func_549(uParam0, 1);
			if (!Local_15.f_273[0])
			{
				func_574(0, 1, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_550(6), 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_550(4), 1f, -1, 0.25f, 0, 40000f);
				TASK::_TASK_USE_SCENARIO_POINT(0, Local_15.f_621, 0, 0, true, false, 0, false, -1f, false);
				func_576(0, 1, 0, 0, 1);
			}
			__LIB_1__::func_694(Global_35, func_550(6), 1, 30f, 20f, 15f, 10f, 1, 1, 1, 0);
			if (!__LIB_0__::func_481(1))
			{
				func_568(uParam0, 1);
				func_568(uParam0, 2);
				func_549(uParam0, 5);
				func_523(5);
				AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_CAMP");
				func_591(1, 1);
			}
			break;
		case 1:
			if (PED::_IS_PED_USING_SCENARIO_POINT(Local_15.f_307[0], Local_15.f_621))
			{
				__LIB_1__::func_283(&(Local_15.f_84), 0);
			}
			if (__LIB_1__::func_285(&(Local_15.f_84), 3f) || __LIB_0__::func_567(Local_15.f_267, 1))
			{
				if (!Local_15.f_273[0])
				{
					func_574(0, 1, 1);
					TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_307[1], -1, -1, 1f, 1, 0, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					func_576(0, 1, 0, 0, 1);
				}
				Local_15.f_105 = 1;
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_53[8], true, 0))
			{
				Local_15.f_425 = 1;
			}
			if (__LIB_0__::func_567(Local_15.f_267, 1) && !Local_15.f_429)
			{
				func_568(uParam0, 5);
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, func_592(), 0, 3500, true, false, 0, false, -1f, false);
				TASK::TASK_LOOK_AT_COORD(Global_35, 482.4894f, 288.3185f, 110.1799f, 5000, 0, 51, 0);
				Local_15.f_429 = 1;
			}
			else if (__LIB_0__::func_394(Local_15.f_307[0], Local_15.f_307[1], 0) && Local_15.f_105)
			{
				func_233(20, 0);
			}
			if (Local_15.f_429 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, -76381094, true) == 8)
			{
				func_549(uParam0, 2);
				func_523(3);
				func_591(2, 1);
			}
			break;
		case 2:
			if (__LIB_0__::func_394(Global_35, Local_15.f_307[2], 0))
			{
				func_568(uParam0, 2);
				func_549(uParam0, 1);
			}
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_53[8], true, 0))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			}
			if (__LIB_0__::func_665(Global_35, Local_15.f_307[0], 1, 1) < 15f)
			{
				func_233(21, 0);
			}
			if ((__LIB_0__::func_394(Local_15.f_307[0], Local_15.f_307[1], 0) && Local_15.f_204[21]) && !__LIB_0__::func_481(1))
			{
				func_591(3, 1);
			}
			break;
		case 3:
			func_591(4, 1);
			break;
		case 4:
			return true;
	}
	return false;
}

int func_242(var uParam0, vector3 vParam1, char* sParam4)
{
	if (__LIB_0__::func_27(uParam0->f_1, 1))
	{
		return 1;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_DISTANCE_SMOKE")))
	{
		if (!__LIB_0__::func_27(uParam0->f_1, 8))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
				*uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sParam4, vParam1, 0f, 0f, 0f, 1f, false, false, false, false);
				__LIB_0__::func_7(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

bool func_243(var uParam0)
{
	switch (Local_15.f_5)
	{
		case 0:
			__LIB_6__::func_813(uParam0, func_234(5), func_234(6), 5, 6);
			func_551(func_550(7), func_550(8), 1092616192 /* Float: 10f */, 15f, 15f, 0, 1);
			func_553(func_552(2));
			func_554(10, 999);
			func_555(0, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_LOOKOUT");
			func_594(1, 1);
			break;
		case 1:
			func_559(uParam0, 1);
			func_560(uParam0, 1107820544 /* Float: 34f */, 1, 1086324736 /* Float: 6f */, 0);
			if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_15.f_307[0]) >= 5)
			{
				func_233(22, 0);
			}
			if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_15.f_307[0]) >= 35)
			{
				func_233(23, 0);
			}
			__LIB_1__::func_694(Global_35, Local_15.f_401, 0, 15f, 10f, 6f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			if (Local_15.f_391 == 7)
			{
				func_587(1);
				func_594(2, 1);
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_244(var uParam0)
{
	switch (Local_15.f_6)
	{
		case 0:
			__LIB_6__::func_813(uParam0, func_234(6), func_234(8), 6, 8);
			__LIB_1__::func_694(Global_35, func_550(8), 0, 15f, 10f, 6f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			__LIB_1__::func_694(Global_35, 549.0963f, 261.3567f, 121.7802f, 0, 15f, 10f, 6f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			func_549(uParam0, 1);
			func_233(23, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[16]))
			{
				Local_15.f_307[16] = __LIB_1__::func_545(func_595(1), func_596(16), func_597(16), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				__LIB_1__::func_991(Local_15.f_307[16], 0);
				WEAPON::REMOVE_ALL_PED_WEAPONS(Local_15.f_307[16], true, true);
				Local_15.f_378 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, ENTITY::GET_ENTITY_COORDS(Local_15.f_307[16], true, false), true, 1f);
				WEAPON::_GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(&(Local_15.f_378), Local_15.f_307[16], 752097756, false);
				return false;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[17]))
			{
				Local_15.f_307[17] = __LIB_1__::func_545(func_595(1), func_596(17), func_597(17), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				__LIB_0__::func_928(&(Local_15.f_106), Local_15.f_307[17], "HUNHC_HUNTER2", 0);
				__LIB_1__::func_991(Local_15.f_307[17], 0);
				return false;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[18]))
			{
				Local_15.f_307[18] = __LIB_1__::func_545(func_595(2), func_596(18), func_597(18), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				return false;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[19]))
			{
				Local_15.f_307[19] = __LIB_1__::func_545(func_595(3), func_596(19), func_597(19), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				return false;
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_307[16], true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_307[17], true);
				PED::SET_PED_CONFIG_FLAG(Local_15.f_307[16], 6, true);
				PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 6, true);
				if (func_600(&(Local_15.f_418), func_66(Local_15.f_418), 0, 1))
				{
					func_601(Local_15.f_418);
					func_602(1, 1);
				}
				else
				{
					return false;
				}
			}
			break;
		case 1:
			__LIB_1__::func_694(Global_35, func_550(8), 0, 15f, 10f, 6f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			__LIB_1__::func_694(Global_35, 549.0963f, 261.3567f, 121.7802f, 0, 15f, 10f, 6f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			if (!func_603(Local_15.f_418, 1, func_66(Local_15.f_418)))
			{
				return false;
			}
			if (!func_603(Local_15.f_418, 2, func_66(Local_15.f_418)))
			{
				return false;
			}
			STREAMING::_0x03DDBF2D73799F9E(func_71(0));
			if (!STREAMING::_0x85B8F04555AB49B8(func_71(0)))
			{
				return false;
			}
			STREAMING::_0x03DDBF2D73799F9E(func_71(1));
			if (!STREAMING::_0x85B8F04555AB49B8(func_71(1)))
			{
				return false;
			}
			STREAMING::_0x03DDBF2D73799F9E(func_71(2));
			if (!STREAMING::_0x85B8F04555AB49B8(func_71(2)))
			{
				return false;
			}
			STREAMING::_0x03DDBF2D73799F9E(func_71(3));
			if (!STREAMING::_0x85B8F04555AB49B8(func_71(3)))
			{
				return false;
			}
			PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_KNEES"), Local_15.f_307[17]);
			if (!PED::_0x854BC9B1A1CCD034(joaat("INTIMIDATED_ON_KNEES"), Local_15.f_307[17]))
			{
				return false;
			}
			func_602(2, 1);
			break;
		case 2:
			__LIB_1__::func_694(Global_35, func_550(8), 0, 15f, 10f, 6f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			__LIB_1__::func_694(Global_35, 549.0963f, 261.3567f, 121.7802f, 0, 15f, 10f, 6f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			if (!__LIB_0__::func_481(1))
			{
				__LIB_1__::func_324("H2_OBJ_FNDCMP");
				func_602(3, 1);
			}
			break;
		case 3:
			func_568(uParam0, 1);
			func_568(uParam0, 2);
			if (PED::GET_PED_CONFIG_FLAG(Local_15.f_307[0], 167, true))
			{
				PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 167, false);
			}
			if (!__LIB_0__::func_481(1))
			{
				__LIB_1__::func_283(&(Local_15.f_75), 0);
			}
			if (func_604(877.5134f, 418.416f, 116.7355f, 17.5f, 20f))
			{
				__LIB_0__::func_37(&(Local_15.f_87));
			}
			else
			{
				__LIB_1__::func_283(&(Local_15.f_87), 0);
			}
			if (__LIB_1__::func_285(&(Local_15.f_87), 2.5f))
			{
				__LIB_0__::func_37(&(Local_15.f_87));
				func_233(24, 0);
				CAM::SET_GAMEPLAY_COORD_HINT(func_545(13, 2), 2000, 2000, 2000, 0);
				func_587(0);
				func_602(4, 1);
			}
			else
			{
				if (func_604(877.5134f, 418.416f, 116.7355f, 17.5f, 20f))
				{
					__LIB_1__::func_283(&(Local_15.f_84), 0);
					__LIB_0__::func_37(&(Local_15.f_75));
				}
				else
				{
					__LIB_0__::func_37(&(Local_15.f_84));
				}
				if (__LIB_1__::func_285(&(Local_15.f_84), 1.5f))
				{
					__LIB_0__::func_37(&(Local_15.f_84));
					func_233(25, 0);
					CAM::SET_GAMEPLAY_COORD_HINT(func_545(13, 2), 2000, 2000, 2000, 0);
					func_587(0);
					func_602(4, 1);
				}
			}
			__LIB_3__::func_460(Global_35, &(Local_15.f_630), 2113, 0, 0, 5f, 100, 0, 0);
			break;
		case 4:
			__LIB_1__::func_283(&(Local_15.f_84), 0);
			if (__LIB_1__::func_285(&(Local_15.f_84), 4f))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_0__::func_37(&(Local_15.f_84));
				func_549(uParam0, 1);
				func_602(6, 1);
			}
			else
			{
				__LIB_3__::func_460(Global_35, &(Local_15.f_630), 2113, 0, 0, 5f, 100, 0, 0);
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_245(var uParam0)
{
	switch (Local_15.f_7)
	{
		case 0:
			__LIB_6__::func_813(uParam0, func_234(6), func_234(8), 6, 8);
			func_551(func_550(9), func_550(10), 1092616192 /* Float: 10f */, 15f, 15f, 0, 0);
			func_553(func_552(3));
			func_554(0, 999);
			func_555(0, 1);
			func_605(1, 1);
			break;
		case 1:
			func_559(uParam0, 1);
			func_560(uParam0, 1107820544 /* Float: 34f */, 1, 1086324736 /* Float: 6f */, 0);
			func_606(75f);
			if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_15.f_307[0]) >= 35)
			{
				func_233(26, 0);
			}
			if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_15.f_307[0]) >= 131 && __LIB_0__::func_394(Local_15.f_307[0], Local_15.f_307[1], 0))
			{
				func_233(27, 0);
				if (!__LIB_0__::func_27(Local_15.f_631, 64))
				{
					__LIB_1__::func_683(&(Local_15.f_631), 64);
				}
			}
			__LIB_1__::func_694(Global_35, Local_15.f_401, 0, 25f, 17f, 8f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			if (__LIB_0__::func_94(Local_15.f_307[0], Local_15.f_401, 1) < 3f)
			{
				func_587(1);
				func_605(2, 1);
			}
			break;
		case 2:
			__LIB_1__::func_694(Global_35, func_550(10), 0, 22f, 18f, 8f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			if (__LIB_0__::func_94(Global_35, func_550(10), 1) < 8f)
			{
				if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) && TASK::GET_SCRIPT_TASK_STATUS(Global_35, 501393341, true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_15.f_307[0], 501393341, true) != 1)
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_53[20], true, 0))
				{
					func_246();
				}
			}
			if (func_607(uParam0))
			{
				TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_LOCKBOX_LRG_LOCKED", false);
				if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
				}
				func_606(20f);
				func_605(3, 1);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_246()
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER_TRANSITION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_OPEN_JOURNAL"), false);
	__LIB_1__::func_538(0);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	PED::SET_PED_RESET_FLAG(Global_35, 2, true);
	PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_53[17], true, 0))
	{
		if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) && TASK::GET_SCRIPT_TASK_STATUS(Global_35, 501393341, true) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_15.f_307[0], 501393341, true) != 1)
		{
			TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(Local_15.f_307[2], 136, true);
		}
	}
}

bool func_247(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LEAD_ANIMAL"), false);
	switch (Local_15.f_8)
	{
		case 0:
			if (!Local_15.f_273[0])
			{
				TASK::TASK_ENTER_ANIM_SCENE(Local_15.f_307[0], Local_15.f_418, "CharlesSmith", func_609(1), 1.5f, 1, 11, 20000, -1082130432 /* Float: -1f */);
				Local_15.f_273[0] = 1;
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_15.f_418, "GenStoryMale"))
			{
				TASK::_TASK_INTIMIDATED_2(Local_15.f_307[17], Global_35, 1, 1, 1, 1, 0, 0, 0);
				PED::_0x2208438012482A1A(Local_15.f_307[17], false, false);
				if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_307[16]))
				{
					__LIB_1__::func_864(Local_15.f_307[16], 1, 1);
				}
				PED::SET_PED_CONFIG_FLAG(Local_15.f_307[18], 301, true);
				PED::SET_PED_CONFIG_FLAG(Local_15.f_307[19], 301, true);
				func_611(1, 1);
				VOLUME::_DELETE_VOLUME(Local_15.f_53[18]);
			}
			break;
		case 1:
			func_568(uParam0, 1);
			func_549(uParam0, 3);
			if (__LIB_0__::func_272(Global_35, 0))
			{
				PED::_0xFC3DB99C8144CD81(Global_35, Local_15.f_53[11], 0, 0, 0);
			}
			TASK::TASK_STAND_STILL(Local_15.f_307[0], -1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			Local_15.f_273[32] = 0;
			func_611(2, 1);
			break;
		case 2:
			if (!Local_15.f_273[32])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
				Local_15.f_273[32] = 1;
			}
			if (!PED::_0x57779B55B83E2BEA(Local_15.f_307[17]))
			{
				TASK::_TASK_INTIMIDATED_2(Local_15.f_307[17], Global_35, 1, 1, 1, 0, 0, 0, 0);
			}
			if (!Local_15.f_273[0])
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15.f_307[0], Local_15.f_307[17], -1, -1f, -1f, -1f);
				Local_15.f_273[0] = 1;
			}
			if (!__LIB_0__::func_481(1))
			{
				__LIB_1__::func_283(&(Local_15.f_84), 0);
			}
			if ((__LIB_1__::func_285(&(Local_15.f_84), 1f) && !__LIB_0__::func_481(1)) && !Local_15.f_105)
			{
				__LIB_0__::func_37(&(Local_15.f_84));
				func_233(28, 0);
				func_611(3, 1);
			}
			break;
		case 3:
			if (func_600(&(Local_15.f_419), func_66(Local_15.f_419), 1, 1))
			{
				func_601(Local_15.f_419);
				func_611(4, 1);
			}
			else
			{
				return false;
			}
			break;
		case 4:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_1__::func_283(&(Local_15.f_75), 0);
			}
			if ((__LIB_1__::func_285(&(Local_15.f_75), 6f) && !__LIB_0__::func_481(1)) && !Local_15.f_102)
			{
				__LIB_0__::func_37(&(Local_15.f_75));
				if (!__LIB_0__::func_27(Local_15.f_631, 16))
				{
					func_523(7);
				}
				Local_15.f_102 = 1;
			}
			if (func_612())
			{
				func_568(uParam0, 3);
				PED::SET_PED_CONFIG_FLAG(Local_15.f_307[18], 301, false);
				PED::SET_PED_CONFIG_FLAG(Local_15.f_307[19], 301, false);
				if (VOLUME::_0x666C2F53ABEFC952(Local_15.f_53[17]) != 5)
				{
					VOLUME::_0xFD010A2154B40676(Local_15.f_53[17], joaat("REL_NO_RELATIONSHIP"));
				}
				__LIB_18__::func_227(joaat("P_BOXLRGLEATHER01X"), 874.567f, 417.295f, 110.864f, 0.15f, 0f, 0.03f, 0f, 0f, 0f, &(Local_15.f_629), joaat("DOCUMENT_PAMPHLET_POISON_THROWING_KNIFE"), 1, 0, 0, joaat("P_CS_RT_ENVELOPE01X"));
				PED::_0x949B2F9ED2917F5D(Global_35, 3);
				PED::_0x949B2F9ED2917F5D(Global_35, 4);
				PED::_0x949B2F9ED2917F5D(Global_35, 1);
				PED::_0x949B2F9ED2917F5D(Global_35, 23);
				PED::_0x949B2F9ED2917F5D(Global_35, 24);
				func_611(5, 1);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_249(var uParam0)
{
	float fVar0;
	switch (Local_15.f_9)
	{
		case 0:
			if (Local_15.f_250)
			{
				fVar0 = 2.75f;
			}
			else
			{
				fVar0 = 4.75f;
			}
			__LIB_1__::func_283(&(Local_15.f_90), 0);
			if (__LIB_1__::func_285(&(Local_15.f_90), fVar0))
			{
				if (!Local_15.f_273[0])
				{
					func_574(0, 1, 1);
					TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_307[1], 20000, -1, 1.5f, 1, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 724.6437f, 402.9194f, 107.0357f, 2f, -1, 0.25f, 1048580, 40000f);
					TASK::TASK_STAND_STILL(0, -1);
					func_576(0, 1, 0, 0, 1);
				}
				if (!__LIB_0__::func_481(1))
				{
					func_549(uParam0, 6);
					TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_LOCKBOX_LRG_LOCKED", true);
					func_523(8);
					func_620(1, 1);
				}
			}
			break;
		case 1:
			if (__LIB_1__::func_707(joaat("DOCUMENT_PAMPHLET_POISON_THROWING_KNIFE"), 1, 0))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_15.f_307[0]) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_15.f_307[1]))
				{
					if (!__LIB_0__::func_394(Local_15.f_307[0], Local_15.f_307[1], 0))
					{
						PED::_SET_PED_ON_MOUNT(Local_15.f_307[0], Local_15.f_307[1], -1, true);
					}
					ENTITY::SET_ENTITY_COORDS(Local_15.f_307[0], 724.6437f, 402.9194f, 107.0357f, true, false, true, true);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_STOP");
				func_620(2, 1);
			}
			break;
		case 2:
			return true;
	}
	return false;
}

int func_254(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (__LIB_0__::func_287(iParam0, 2, 1))
			{
				__LIB_0__::func_290(iParam0, 2, 1);
			}
			if (__LIB_0__::func_273(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						__LIB_0__::func_288(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						__LIB_1__::func_774(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						__LIB_0__::func_712(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!__LIB_0__::func_287(iParam0, 44, 0))
			{
				__LIB_0__::func_288(iParam0, 44, 0);
			}
			if (func_624(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				__LIB_0__::func_201(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			__LIB_0__::func_290(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			__LIB_0__::func_707(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				__LIB_1__::func_296(iParam0, 0, 0, 1);
			}
			__LIB_0__::func_290(iParam0, 33, 1);
			__LIB_0__::func_290(iParam0, 34, 1);
			__LIB_0__::func_290(iParam0, 29, 1);
			if (!__LIB_0__::func_86(vVar0) && bParam7)
			{
				__LIB_0__::func_201(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_0__::func_712(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_626(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (__LIB_1__::func_201(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_1__::func_288(iParam0, iParam13, 0);
						__LIB_1__::func_558(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (__LIB_0__::func_287(iParam0, 25, 0))
						{
							__LIB_0__::func_290(iParam0, 25, 0);
						}
						__LIB_0__::func_288(iParam0, 66, 0);
						__LIB_0__::func_201(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					__LIB_0__::func_201(iParam0, 5);
				}
				__LIB_0__::func_288(iParam0, 28, 1);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				__LIB_0__::func_201(iParam0, 6);
			}
			break;
		case 6:
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					__LIB_1__::func_30(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					__LIB_0__::func_202(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			__LIB_0__::func_201(iParam0, 7);
		case 7:
			__LIB_0__::func_707(iParam0, bParam9, bParam15, 0);
			__LIB_0__::func_289(iParam0, 4, bParam11);
			__LIB_0__::func_706(iParam0);
			if (bParam20)
			{
				if (__LIB_0__::func_203(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			__LIB_1__::func_799(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			__LIB_0__::func_201(iParam0, 0);
			__LIB_0__::func_204(iParam0, 16, 1);
			__LIB_0__::func_290(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

bool func_256(var uParam0)
{
	int iVar0;
	struct<11> Var1;
	var uVar12;
	struct<11> Var13;
	func_549(uParam0, 2);
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1888801[71 /*35*/].f_3, uParam0->f_37))
	{
		Local_15.f_411 = 71;
		Local_15.f_396 = 100;
	}
	else if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1888801[98 /*35*/].f_3, uParam0->f_37))
	{
		Local_15.f_411 = 98;
		Local_15.f_396 = 58;
	}
	else
	{
		Local_15.f_411 = -1;
		return false;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(func_552(0));
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_552(0)))
	{
		return false;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(func_552(1));
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_552(1)))
	{
		return false;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(func_552(2));
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_552(2)))
	{
		return false;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(func_552(3));
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_552(3)))
	{
		return false;
	}
	STREAMING::REQUEST_MODEL(func_595(0), false);
	STREAMING::REQUEST_MODEL(func_595(4), false);
	STREAMING::REQUEST_MODEL(func_595(5), false);
	STREAMING::REQUEST_MODEL(func_595(1), false);
	STREAMING::REQUEST_MODEL(func_595(2), false);
	STREAMING::REQUEST_MODEL(func_595(3), false);
	STREAMING::REQUEST_MODEL(joaat("SCRIPTEDBALL"), false);
	if (!STREAMING::HAS_MODEL_LOADED(func_595(0)))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_595(1)))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_595(4)))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_595(5)))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_595(2)))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_595(3)))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("SCRIPTEDBALL")))
	{
		return false;
	}
	__LIB_0__::func_803(1410198831);
	STREAMING::_REQUEST_IMAP(joaat("HRT_CAMP_HUNTING2"));
	GRAPHICS::_0xDFEA23EC90113657(joaat("HRT_CAMP_HUNTING2"));
	if (!STREAMING::_IS_IMAP_ACTIVE(joaat("HRT_CAMP_HUNTING2")))
	{
		return false;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_15.f_621))
	{
		Local_15.f_621 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_CROUCH_INSPECT"), 481.24f, 266.5857f, 110.1667f, 0f, 0, -1f, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_15.f_622[0]))
	{
		Local_15.f_622[0] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), 481.3692f, 288.3472f, 110.1164f, -90.72f, 0, 5f, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_15.f_622[1]))
	{
		Local_15.f_622[1] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), 482.6278f, 287.5677f, 110.1579f, 26.96f, 0, 5f, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_15.f_622[2]))
	{
		Local_15.f_622[2] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), 481.9943f, 289.3294f, 110.1512f, -164.81f, 0, 5f, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_15.f_622[3]))
	{
		Local_15.f_622[3] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), 483.3066f, 288.7596f, 110.2767f, 117.97f, 0, 5f, 0);
	}
	iVar0 = 5;
	while (iVar0 <= 20)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_15.f_53[iVar0]))
		{
			Var1 = { func_638(iVar0) };
			Local_15.f_53[iVar0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var1, Var1.f_1, Var1.f_4, Var1.f_7, Var1.f_10);
			if (iVar0 == 14)
			{
				POPULATION::_0x18262CAFEBB5FBE1(Local_15.f_53[iVar0], 0, 0, joaat("SPECIES_DEER"), -1, -1, 0);
			}
			if (iVar0 == 16)
			{
				PED::_0x4C39C95AE5DB1329(Local_15.f_53[iVar0], 0, 15);
			}
			if (iVar0 == 7)
			{
				PED::_0x4C39C95AE5DB1329(Local_15.f_53[iVar0], 0, 15);
				POPULATION::_0x18262CAFEBB5FBE1(Local_15.f_53[iVar0], 0, 0, 0, -1, -1, 0);
				__LIB_3__::func_710(Local_15.f_53[7], 16);
				__LIB_3__::func_241(Local_15.f_53[iVar0], 1);
			}
			if (iVar0 == 17)
			{
				if (VOLUME::_0x666C2F53ABEFC952(Local_15.f_53[iVar0]) != 21)
				{
					VOLUME::_0xFD010A2154B40676(Local_15.f_53[iVar0], joaat("REL_GANG_DUTCHS"));
				}
			}
			if (iVar0 == 18)
			{
				Local_15.f_53[iVar0] = VOLUME::_0x0EB78C2B156635B1(Var1, Var1.f_1, Var1.f_4, Var1.f_7);
			}
			if (iVar0 == 19)
			{
				PATHFIND::_0xC1799FAFD2FDF52B(Local_15.f_53[iVar0], 0, 0, 0);
			}
			return false;
		}
		iVar0++;
	}
	if (Local_15.f_411 == 71)
	{
		Local_15.f_602[0 /*3*/] = { 145.176f, 227.0798f, 112.549f };
		Local_15.f_602[1 /*3*/] = { 128.4882f, 244.1535f, 113.4112f };
		Local_15.f_602[2 /*3*/] = { 134.161f, 268.1133f, 111.3971f };
		Local_15.f_602[3 /*3*/] = { 168.4228f, 269.3983f, 109.9575f };
		Local_15.f_602[4 /*3*/] = { 177.1105f, 250.2016f, 108.8893f };
		Local_15.f_602[5 /*3*/] = { 167.1574f, 230.7074f, 108.942f };
	}
	else
	{
		Local_15.f_602[0 /*3*/] = { 185.722f, -45.01549f, 105.3866f };
		Local_15.f_602[1 /*3*/] = { 204.197f, -6.08444f, 103.2539f };
		Local_15.f_602[2 /*3*/] = { 241.1845f, -6.06027f, 103.3211f };
		Local_15.f_602[3 /*3*/] = { 259.7549f, -45.01028f, 105.2906f };
		Local_15.f_602[4 /*3*/] = { 241.1736f, -84.01103f, 106.2882f };
		Local_15.f_602[5 /*3*/] = { 204.7602f, -84.17793f, 107.4515f };
		Local_15.f_423 = GRAPHICS::_0xFA50F79257745E74(307.144f, 31.118f, 103.143f, 10f, 1, -1, 0);
		Local_15.f_424 = GRAPHICS::_0xFA50F79257745E74(279.307f, 16.567f, 106.724f, 4f, 1, -1, 0);
	}
	Local_15.f_307[32] = Global_35;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[0]))
	{
		if (!__LIB_1__::func_22(uParam0->f_2))
		{
			func_254(7, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		else
		{
			Local_15.f_307[0] = __LIB_0__::func_271(uParam0->f_2);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[1]))
	{
		Local_15.f_307[1] = func_641(uParam0->f_2, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		return false;
	}
	PED::SET_PED_RESET_FLAG(Local_15.f_307[0], 185, true);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[2]))
	{
		Var13.f_10 = 7;
		Var13 = 1;
		Var13.f_1 = 1;
		Var13.f_2 = 0;
		Var13.f_3 = 1;
		Var13.f_4 = 1;
		Var13.f_6 = { func_596(2) };
		Var13.f_9 = func_597(2);
		Local_15.f_307[2] = __LIB_1__::func_854(&uVar12, &Var13);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[1]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_307[1], true);
		TASK::TASK_STAND_STILL(Local_15.f_307[1], -1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_307[0], true);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 297, true);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 315, true);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 130, true);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 331, true);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 330, true);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 512, true);
		if (PED::_GET_PED_META_OUTFIT_HASH(Local_15.f_307[0]) != joaat("META_OUTFIT_COOL_WEATHER"))
		{
			PED::_SET_PED_BODY_COMPONENT(Local_15.f_307[0], joaat("META_OUTFIT_COOL_WEATHER"));
			PED::_UPDATE_PED_VARIATION(Local_15.f_307[0], false, true, true, true, false);
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 473, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 474, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 475, true);
	PED::_0xED9582B3DA8F02B4(33);
	__LIB_0__::func_63(&(uParam0->f_9), 256, 1);
	__LIB_0__::func_928(&(Local_15.f_106), Global_35, "ARTHUR", 0);
	__LIB_0__::func_928(&(Local_15.f_106), Local_15.f_307[0], __LIB_0__::func_781(7), 0);
	AUDIO::STOP_PED_SPEAKING(__LIB_0__::func_271(uParam0->f_2), true);
	__LIB_0__::func_63(&(uParam0->f_9), 16, 0);
	__LIB_0__::func_63(&(uParam0->f_10), 4, 1);
	__LIB_0__::func_63(&(uParam0->f_10), 8, 1);
	__LIB_0__::func_63(&(uParam0->f_10), 16, 1);
	__LIB_0__::func_63(&(uParam0->f_10), 2, 1);
	__LIB_0__::func_63(&(uParam0->f_10), 1, 1);
	__LIB_1__::func_766(Local_15.f_307[0], joaat("WEAPON_MELEE_KNIFE"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), false, true, true, 45f, false);
	PED::SET_PED_CONFIG_FLAG(Local_15.f_307[2], 136, false);
	func_643(0);
	func_606(100f);
	func_233(-1, 0);
	func_523(-1);
	return true;
}

bool func_258(var uParam0)
{
	if (__LIB_0__::func_1(Global_1935630, 2048))
	{
		return false;
	}
	if (func_644(uParam0))
	{
		CAM::DO_SCREEN_FADE_IN(500);
		__LIB_1__::func_164(0);
		HUD::DISPLAY_HUD(true);
		MAP::DISPLAY_RADAR(true);
		return true;
	}
	return false;
}

int func_262(vector3 vParam0, float fParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		__LIB_1__::func_837(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_651(0, 0);
		if (__LIB_0__::func_154(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			__LIB_0__::func_713(1, 0);
		}
	}
	else
	{
		__LIB_0__::func_713(1, 0);
	}
	__LIB_0__::func_305(0);
	__LIB_1__::func_617(0, vParam0, fParam3);
	return 1;
}

void func_433()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_813(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			__LIB_1__::func_851();
		}
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	__LIB_1__::func_116();
	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("NBD1")) >= 2)
	{
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
	{
		return;
	}
	func_813(1);
}

void func_434()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_139(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_435()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_816(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_816(1);
}

void func_436()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_816(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	__LIB_1__::func_616(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_816(1);
}

void func_437()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_139(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(1))
			{
				__LIB_0__::func_368(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_139(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(2))
			{
				__LIB_0__::func_368(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !__LIB_0__::func_458(4))
		{
			__LIB_0__::func_368(4);
		}
		if (__LIB_0__::func_458(0))
		{
			__LIB_0__::func_459(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_440(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_440(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
			}
		}
		if (__LIB_0__::func_458(1))
		{
			__LIB_0__::func_459(1);
		}
		if (__LIB_0__::func_458(2))
		{
			__LIB_0__::func_459(2);
		}
		if (__LIB_0__::func_458(4))
		{
			__LIB_0__::func_459(4);
		}
		if (!__LIB_0__::func_458(0))
		{
			__LIB_0__::func_368(0);
		}
	}
}

int func_440(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_440(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

int func_481(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_63(iVar0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	__LIB_0__::func_794(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (__LIB_0__::func_192(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { __LIB_1__::func_615(iVar0, 0, 1) };
	iVar10 = __LIB_1__::func_119(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_862(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_139(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

void func_521(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	if (__LIB_1__::func_742(&(Local_15.f_106), func_893(iParam0), iParam1, iParam2, 0, 0, 1, 1))
	{
		Local_15.f_204[iParam0] = iParam3;
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (!bParam4 || (bParam4 && bVar0))
	{
		func_233(-1, 0);
	}
}

void func_523(int iParam0)
{
	if (Local_15.f_11 != iParam0)
	{
		Local_15.f_11 = iParam0;
		if (iParam0 != -1)
		{
			Local_15.f_12 = Local_15.f_11;
		}
	}
}

Vector3 func_525()
{
	switch (Local_15.f_628)
	{
		case 0:
			return ENTITY::GET_ENTITY_COORDS(Local_15.f_307[0], true, false);
		case 1:
			if (Local_15.f_411 == 71)
			{
				return 152.0808f, 250.6083f, 107.8168f;
			}
			else
			{
				return 222.6963f, -45.03358f, 107.8168f;
			}
			break;
		case 2:
			return 481.967f, 290.271f, 111.3091f;
		case 3:
			return ENTITY::GET_ENTITY_COORDS(Local_15.f_307[17], true, false);
		case 4:
			return func_545(13, 2);
	}
	return ENTITY::GET_ENTITY_COORDS(Local_15.f_307[0], true, false);
}

float func_526()
{
	return Local_15.f_627;
}

char* func_527()
{
	switch (Local_15.f_628)
	{
		case 0:
			return "H2_OBJ_RTCHA";
		case 1:
			return "H2_OBJ_RTBIS";
		case 2:
			return "H2_OBJ_RTABCP";
		case 3:
			return "H2_OBJ_RTP";
		case 4:
			return "H2_OBJ_RTPCP";
	}
	return "H2_OBJ_RTCHA";
}

char* func_531()
{
	switch (Local_15.f_12)
	{
		case 0:
			return "H2_OBJ_KILLBUF";
		case 1:
			return "H2_OBJ_SKINBUF";
		case 2:
			return "H2_OBJ_STWHID";
		case 3:
			return "H2_OBJ_MNTFLW";
		case 4:
			return "H2_OBJ_FOLLOW";
		case 5:
			return "H2_OBJ_SEARCH";
		case 6:
			return "H2_OBJ_FNDCMP";
		case 7:
			return "H2_OBJ_INT";
		case 8:
			return "H2_OBJ_LOOT";
	}
	return "";
}

bool func_533()
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar0]) && Local_15.f_307[iVar0] != Local_15.f_376) && ENTITY::IS_ENTITY_DEAD(Local_15.f_307[iVar0])) || TASK::IS_PED_IN_WRITHE(Local_15.f_307[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_535()
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar0]) && ENTITY::DOES_ENTITY_EXIST(Local_15.f_376)) && Local_15.f_307[iVar0] != Local_15.f_376) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_15.f_307[iVar0], Global_35, 1, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_538(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_17(uParam0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		return 0;
	}
	return Global_1945938[iVar0 /*18*/].f_3;
}

int func_542(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 37;
		case 11:
			return 38;
		case 12:
			return 39;
		case 13:
			return 40;
	}
	return -1;
}

Vector3 func_545(int iParam0, int iParam1)
{
	return func_905(iParam0, iParam1);
}

float func_546(int iParam0, int iParam1)
{
	return func_906(iParam0, iParam1);
}

void func_548(bool bParam0)
{
	if (bParam0)
	{
		Local_15.f_273[0] = 0;
	}
	Local_15.f_105 = 0;
	Local_15.f_102 = 0;
	Local_15.f_104 = 0;
	Local_15.f_103 = 0;
	Local_15.f_641 = 0;
	__LIB_0__::func_37(&(Local_15.f_84));
	__LIB_0__::func_37(&(Local_15.f_75));
	__LIB_0__::func_37(&(Local_15.f_81));
	__LIB_0__::func_37(&(Local_15.f_78));
	__LIB_0__::func_37(&(Local_15.f_90));
}

void func_549(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			__LIB_0__::func_900(uParam0->f_2);
			__LIB_1__::func_324("H2_OBJ_FOLLOW");
			func_643(0);
			func_606(100f);
			break;
		case 2:
			if (!__LIB_1__::func_587(7))
			{
				__LIB_1__::func_718(7);
			}
			__LIB_1__::func_643();
			if ((Local_15 == 2 && Local_15.f_2 == 3) || __LIB_0__::func_27(Local_15.f_631, 524288))
			{
				func_643(0);
				func_606(100f);
			}
			else
			{
				__LIB_1__::func_324("H2_OBJ_MNTFLW");
			}
			break;
		case 3:
			Local_15.f_17 = __LIB_1__::func_863(Local_15.f_307[17], 408396114, 1, 1);
			__LIB_1__::func_324("H2_OBJ_INT");
			func_643(3);
			func_606(20f);
			break;
		case 4:
			if (Local_15.f_411 == 71)
			{
				Local_15.f_17 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, 152.0808f, 250.6083f, 107.8168f, 85f);
			}
			else
			{
				Local_15.f_17 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, 222.6963f, -45.03358f, 107.8168f, 115f);
			}
			__LIB_1__::func_324("H2_OBJ_KILLBUF");
			func_643(1);
			func_606(200f);
			break;
		case 5:
			Local_15.f_17 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, 481.967f, 290.271f, 111.3091f, 15f);
			__LIB_1__::func_324("H2_OBJ_SEARCH");
			func_643(2);
			func_606(100f);
			break;
		case 6:
			Local_15.f_17 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, func_545(13, 2), 15f);
			__LIB_1__::func_324("H2_OBJ_LOOT");
			func_643(4);
			func_606(100f);
			break;
	}
}

Vector3 func_550(int iParam0)
{
	switch (Local_15.f_411)
	{
		case 71:
			switch (iParam0)
			{
				case 0:
					return func_545(23, 0);
				case 1:
					return func_545(23, 1);
				case 2:
					return func_545(23, 2);
				case 3:
					return func_545(23, 3);
				case 4:
					return func_545(23, 4);
				case 5:
					return func_545(23, 5);
				case 6:
					return func_545(23, 6);
				case 7:
					return func_545(23, 7);
				case 8:
					return func_545(23, 8);
				case 9:
					return func_545(23, 14);
				case 10:
					return func_545(23, 15);
				case 11:
					return func_545(23, 9);
				case 12:
					return func_545(23, 10);
				case 13:
					return func_545(23, 11);
				case 14:
					return func_545(23, 12);
				case 15:
					return func_545(23, 13);
				default:
					break;
			}
			break;
		case 98:
			switch (iParam0)
			{
				case 0:
					return func_545(24, 0);
				case 1:
					return func_545(24, 1);
				case 2:
					return func_545(24, 2);
				case 3:
					return func_545(24, 3);
				case 4:
					return func_545(24, 4);
				case 5:
					return func_545(24, 5);
				case 6:
					return func_545(24, 6);
				case 7:
					return func_545(24, 7);
				case 8:
					return func_545(24, 8);
				case 9:
					return func_545(24, 14);
				case 10:
					return func_545(24, 15);
				case 11:
					return func_545(24, 9);
				case 12:
					return func_545(24, 10);
				case 13:
					return func_545(24, 11);
				case 14:
					return func_545(24, 12);
				case 15:
					return func_545(24, 13);
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_551(vector3 vParam0, vector3 vParam3, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10)
{
	Local_15.f_398 = { vParam0 };
	Local_15.f_401 = { vParam3 };
	Local_15.f_406 = iParam6;
	Local_15.f_404 = fParam7;
	Local_15.f_405 = fParam8;
	Local_15.f_407 = iParam9;
	Local_15.f_409 = iParam10;
}

char* func_552(int iParam0)
{
	switch (Local_15.f_411)
	{
		case 71:
			switch (iParam0)
			{
				case 0:
					return "hunt02_ride_to_buffalo_herd";
				case 1:
					return "hunt02_ride_to_dead_buffalo_1";
				case 2:
					return "hunt02_ride_to_vantage_point";
				case 3:
					return "hunt02_ride_to_hunters";
				default:
					break;
			}
			break;
		case 98:
			switch (iParam0)
			{
				case 0:
					return "hunt02_ride_to_buffalo_herd_clm";
				case 1:
					return "hunt02_ride_to_dead_buffalo_1_clm";
				case 2:
					return "hunt02_ride_to_vantage_point";
				case 3:
					return "hunt02_ride_to_hunters";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_553(char* sParam0)
{
	Local_15.f_397 = sParam0;
}

void func_554(int iParam0, int iParam1)
{
	Local_15.f_393 = iParam0;
	Local_15.f_394 = iParam1;
}

void func_555(int iParam0, bool bParam1)
{
	if (Local_15.f_391 != iParam0)
	{
		Local_15.f_392 = Local_15.f_391;
		Local_15.f_391 = iParam0;
	}
	if (bParam1)
	{
		Local_15.f_273[0] = 0;
	}
}

void func_558(int iParam0, bool bParam1)
{
	if (Local_15.f_1 != iParam0)
	{
		Local_15.f_1 = iParam0;
	}
	func_548(bParam1);
}

int func_559(var uParam0, bool bParam1)
{
	if (__LIB_0__::func_394(Global_35, Local_15.f_307[2], 0) && Local_15.f_410 != 1)
	{
		func_568(uParam0, 2);
		func_549(uParam0, 1);
		Local_15.f_410 = 1;
	}
	else if (!__LIB_0__::func_394(Global_35, Local_15.f_307[2], 0) && Local_15.f_410 != 2)
	{
		func_568(uParam0, 1);
		func_549(uParam0, 2);
		Local_15.f_410 = 2;
	}
	switch (Local_15.f_391)
	{
		case 0:
			func_555(1, 1);
			break;
		case 1:
			if (!__LIB_0__::func_394(Local_15.f_307[0], Local_15.f_307[1], 0))
			{
				if (!Local_15.f_273[1])
				{
					TASK::CLEAR_PED_TASKS(Local_15.f_307[1], true, false);
					TASK::TASK_STAND_STILL(Local_15.f_307[1], -1);
					Local_15.f_273[1] = 1;
				}
				if (!__LIB_0__::func_163(Local_15.f_307[0], 1868526510))
				{
					TASK::CLEAR_PED_TASKS(Local_15.f_307[0], true, false);
					TASK::TASK_MOUNT_ANIMAL(Local_15.f_307[0], Local_15.f_307[1], 20000, -1, 1.5f, 131072, 0, 0);
					Local_15.f_273[0] = 1;
				}
			}
			else if (Local_15.f_392 == 5)
			{
				func_555(4, 1);
			}
			else
			{
				func_555(2, 1);
			}
			break;
		case 2:
			if (__LIB_0__::func_394(Local_15.f_307[0], Local_15.f_307[1], 0))
			{
				if (!Local_15.f_273[0])
				{
					func_574(0, 1, 1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_15.f_398, 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					func_576(0, 1, 0, 0, 1);
				}
				func_555(3, 1);
			}
			else
			{
				func_555(1, 1);
			}
			break;
		case 3:
			__LIB_1__::func_694(Global_35, ENTITY::GET_ENTITY_COORDS(Local_15.f_307[0], true, false), 0, 30f, 20f, 10f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			if (__LIB_0__::func_94(Global_35, Local_15.f_398, 1) >= Local_15.f_406 && __LIB_0__::func_665(Global_35, Local_15.f_307[0], 1, 1) >= 10f)
			{
				if (!Local_15.f_273[0])
				{
					func_574(0, 1, 1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_15.f_398, 1.25f, -1, 0.25f, 0, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					func_576(0, 1, 0, 0, 1);
				}
			}
			else if ((__LIB_0__::func_394(Global_35, Local_15.f_307[2], 0) && __LIB_0__::func_94(Global_35, Local_15.f_398, 1) < Local_15.f_406) && __LIB_0__::func_94(Local_15.f_307[0], Local_15.f_398, 1) < 10f)
			{
				func_555(4, 1);
			}
			break;
		case 4:
			if (__LIB_0__::func_866(uParam0->f_2, 0))
			{
				__LIB_1__::func_640(uParam0->f_2);
			}
			else
			{
				if (!PED::DOES_GROUP_EXIST(Local_15.f_420))
				{
					Local_15.f_420 = PED::CREATE_GROUP(0);
					PED::SET_GROUP_FORMATION(Local_15.f_420, 5);
					PED::ADD_CUSTOM_FORMATION_LOCATION(Local_15.f_420, 0f, -5f, 0f, 0);
					PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 279, true);
					PED::SET_PED_AS_GROUP_LEADER(Local_15.f_307[0], Local_15.f_420, false);
				}
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), Local_15.f_307[0], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 1);
				if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Local_15.f_397, ENTITY::GET_ENTITY_COORDS(Local_15.f_307[0], true, false), &(Local_15.f_395)))
				{
					if (!Local_15.f_273[0])
					{
						if (Local_15.f_407)
						{
							func_574(0, 1, 1);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, Local_15.f_397, Local_15.f_395, 25866, -1, 0, Local_15.f_409, -1);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
							func_576(0, 1, 0, 0, 1);
						}
						else
						{
							func_574(0, 1, 1);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, Local_15.f_397, Local_15.f_395, 25864, -1, 0, Local_15.f_409, -1);
							TASK::TASK_STAND_STILL(0, -1);
							func_576(0, 1, 0, 0, 1);
							Local_15.f_273[0] = 1;
						}
					}
					func_555(5, 1);
				}
			}
			break;
		case 5:
			if (!__LIB_0__::func_394(Local_15.f_307[0], Local_15.f_307[1], 0))
			{
				func_555(1, 1);
			}
			if ((MISC::ARE_STRINGS_EQUAL(Local_15.f_397, func_552(0)) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_15.f_307[0]) >= Local_15.f_396) && !Local_15.f_408)
			{
				PED::SET_GROUP_FORMATION(Local_15.f_420, 3);
				Local_15.f_408 = 1;
			}
			if ((MISC::ARE_STRINGS_EQUAL(Local_15.f_397, func_552(3)) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_15.f_307[0], 0)) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_15.f_307[0]) >= 131)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2.5f);
				TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(Local_15.f_307[0], 0);
				func_914(Local_15.f_307[0], Local_15.f_393, Local_15.f_394);
			}
			else if (((MISC::ARE_STRINGS_EQUAL(Local_15.f_397, func_552(1)) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_15.f_307[0], 0)) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_15.f_307[0]) >= 115) && Local_15.f_411 == 98)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				func_915(Local_15.f_307[0], Local_15.f_393, Local_15.f_394, 1.5f, 1.001f);
			}
			else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_15.f_307[0], 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.75f);
				func_915(Local_15.f_307[0], Local_15.f_393, Local_15.f_394, 1071644672 /* Float: 1.75f */, 1067450368 /* Float: 1.25f */);
			}
			if (__LIB_0__::func_94(Global_35, Local_15.f_401, 1) < Local_15.f_405 && __LIB_0__::func_665(Global_35, Local_15.f_307[0], 1, 1) < Local_15.f_404)
			{
				func_555(6, 1);
			}
			break;
		case 6:
			if (PED::GET_PED_CONFIG_FLAG(Local_15.f_307[0], 167, true) && Local_15 <= 4)
			{
				PED::SET_PED_CONFIG_FLAG(Local_15.f_307[0], 167, false);
			}
			if (bParam1)
			{
				func_916();
			}
			func_555(7, 1);
			break;
		case 7:
			return 1;
	}
	return 0;
}

void func_560(var uParam0, float fParam1, bool bParam2, float fParam3, int iParam4)
{
	if (func_917() && iParam4)
	{
		func_586(uParam0);
	}
	else
	{
		func_918();
		func_919(fParam1, bParam2, fParam3);
	}
}

bool func_561()
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_27(Local_15.f_631, 128))
	{
		return true;
	}
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar0]))
		{
			iVar1 = iVar0;
			Local_15.f_307[iVar0] = __LIB_1__::func_545(func_595(0), func_596(iVar1), func_597(iVar1), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_307[iVar0], true);
			TASK::TASK_ANIMAL_UNALERTED(Local_15.f_307[iVar0], -1, Local_15.f_53[5], 0, 0);
			PED::SET_PED_CONFIG_FLAG(Local_15.f_307[iVar0], 297, true);
			return false;
		}
		iVar0++;
	}
	__LIB_1__::func_683(&(Local_15.f_631), 128);
	return true;
}

bool func_562()
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_27(Local_15.f_631, 256))
	{
		return true;
	}
	iVar0 = 10;
	while (iVar0 <= 15)
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar0]) && !(iVar1 == 13 && __LIB_0__::func_27(Local_15.f_631, 1024)))
		{
			Local_15.f_307[iVar0] = __LIB_1__::func_545(func_595(0), func_596(iVar1), func_597(iVar1), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			if (iVar1 == 10)
			{
				__LIB_0__::func_862(Local_15.f_307[iVar0], -1989505391);
			}
			else if (iVar1 == 11)
			{
				__LIB_0__::func_862(Local_15.f_307[iVar0], -1275599965);
			}
			else if (iVar1 == 12)
			{
				__LIB_0__::func_862(Local_15.f_307[iVar0], -1514322130);
			}
			else if (iVar1 == 13)
			{
				__LIB_1__::func_683(&(Local_15.f_631), 1024);
			}
			__LIB_3__::func_459(Local_15.f_307[iVar0], 0);
			ENTITY::FREEZE_ENTITY_POSITION(Local_15.f_307[iVar0], true);
			ENTITY::SET_ENTITY_COLLISION(Local_15.f_307[iVar0], false, false);
			ENTITY::SET_ENTITY_VISIBLE(Local_15.f_307[iVar0], false);
			if (iVar0 <= 13)
			{
				Local_15.f_466[iVar0] = OBJECT::CREATE_OBJECT(joaat("SCRIPTEDBALL"), ENTITY::GET_ENTITY_COORDS(Local_15.f_307[iVar0], true, false), true, true, false, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_15.f_466[iVar0], Local_15.f_307[iVar0], PED::GET_PED_BONE_INDEX(Local_15.f_307[iVar0], 21030), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_15.f_466[iVar0], true);
				ENTITY::SET_ENTITY_COLLISION(Local_15.f_466[iVar0], false, false);
				ENTITY::SET_ENTITY_VISIBLE(Local_15.f_466[iVar0], false);
			}
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_307[iVar0]))
		{
			__LIB_1__::func_864(Local_15.f_307[iVar0], 1, 0);
			return false;
		}
		else if (!Local_15.f_534[iVar1])
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_15.f_307[iVar0], func_596(iVar1), func_597(iVar1), true, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_15.f_307[iVar0], false);
			ENTITY::SET_ENTITY_COLLISION(Local_15.f_307[iVar0], true, false);
			ENTITY::SET_ENTITY_VISIBLE(Local_15.f_307[iVar0], true);
			if (iVar1 == 13)
			{
				PED::SET_PED_CONFIG_FLAG(Local_15.f_307[iVar0], 186, true);
				PERSISTENCE::_0xF5622FA6ACFCA7DB(Local_15.f_307[iVar0], 36);
			}
			Local_15.f_534[iVar1] = 1;
		}
		iVar0++;
	}
	__LIB_1__::func_683(&(Local_15.f_631), 256);
	return true;
}

void func_565(int iParam0, bool bParam1)
{
	if (Local_15.f_2 != iParam0)
	{
		Local_15.f_2 = iParam0;
	}
	func_548(bParam1);
}

void func_568(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			__LIB_0__::func_745(uParam0->f_2);
			break;
		case 2:
			if (__LIB_1__::func_587(7))
			{
				__LIB_1__::func_721(7);
			}
			__LIB_1__::func_643();
			break;
		case 3:
			__LIB_0__::func_325(&(Local_15.f_17));
			break;
		case 4:
			__LIB_0__::func_325(&(Local_15.f_17));
			break;
		case 5:
			__LIB_0__::func_325(&(Local_15.f_17));
			break;
		case 6:
			__LIB_0__::func_325(&(Local_15.f_17));
			break;
	}
}

void func_569()
{
	int iVar0;
	int iVar1;
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar1]) || !ENTITY::IS_ENTITY_DEAD(Local_15.f_307[iVar1]))
		{
		}
		else if (!MAP::DOES_BLIP_EXIST(Local_15.f_19[iVar1]))
		{
			Local_15.f_19[iVar1] = __LIB_1__::func_863(Local_15.f_307[iVar1], joaat("BLIP_STYLE_PICKUP_ANIMAL"), 0, 1);
			MAP::_BLIP_SET_MODIFIER(Local_15.f_19[iVar1], -401963276);
		}
		iVar0++;
	}
}

void func_570()
{
	int iVar0;
	int iVar1;
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar0]))
		{
			if (ENTITY::GET_ENTITY_SPEED(Local_15.f_307[iVar0]) > 0.1f)
			{
				if (!__LIB_0__::func_75(&(Local_15.f_569[iVar1 /*3*/])))
				{
					__LIB_1__::func_148(&(Local_15.f_569[iVar1 /*3*/]));
				}
				if (__LIB_0__::func_265(&(Local_15.f_569[iVar1 /*3*/])) > 3f)
				{
					MAP::_TRIGGER_SONAR_BLIP_2(729220490, Local_15.f_307[iVar0]);
					__LIB_1__::func_148(&(Local_15.f_569[iVar1 /*3*/]));
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_571()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 3;
	while (iVar1 <= 9)
	{
		iVar0 = iVar1;
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar1]))
		{
			func_929(iVar0, iVar2);
			iVar2++;
		}
		iVar1++;
	}
}

bool func_572()
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar0]))
		{
			if (__LIB_0__::func_255(Local_15.f_307[iVar0], 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_573()
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar0]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_15.f_307[iVar0]))
			{
				Local_15.f_376 = Local_15.f_307[iVar0];
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_574(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (TASK::_0x9FF5F9B24E870748(Local_15.f_307[iParam0]))
		{
			TASK::CLEAR_PED_TASKS(Local_15.f_307[iParam0], bParam2, false);
		}
	}
	TASK::CLEAR_SEQUENCE_TASK(&(Local_15.f_341[iParam0]));
	TASK::OPEN_SEQUENCE_TASK(&(Local_15.f_341[iParam0]));
}

void func_576(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4)
{
	__LIB_1__::func_474(Local_15.f_307[iParam0], &(Local_15.f_341[iParam0]), fParam2, fParam3, bParam4, 1);
	if (bParam1)
	{
		Local_15.f_273[iParam0] = 1;
	}
}

bool func_577()
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar0]))
		{
			if (__LIB_3__::func_578(Local_15.f_307[iVar0]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_578()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		iVar1 = iVar0;
		__LIB_0__::func_325(&(Local_15.f_19[iVar1]));
		iVar0++;
	}
}

bool func_579()
{
	return (Global_36560 == 2 || Global_36560 == 3);
}

int func_580()
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_27(Local_15.f_631, 512))
	{
		return 1;
	}
	iVar0 = 20;
	while (iVar0 <= 31)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar0]))
		{
			iVar1 = iVar0;
			Local_15.f_307[iVar0] = __LIB_1__::func_545(func_595(4), func_596(iVar1), func_597(iVar1), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_307[iVar0], true);
			return 0;
		}
		iVar0++;
	}
	__LIB_1__::func_683(&(Local_15.f_631), 512);
	return 1;
}

void func_584()
{
	int iVar0;
	int iVar1;
	iVar1 = 20;
	while (iVar1 <= 31)
	{
		iVar0 = iVar1;
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar1]))
		{
			if (!Local_15.f_273[iVar0])
			{
				TASK::TASK_FLY_AWAY(Local_15.f_307[iVar1], Global_35);
			}
		}
		iVar1++;
	}
}

bool func_585(var uParam0)
{
	switch (Local_15.f_14)
	{
		case 0:
			if (!Local_15.f_273[0])
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_15.f_307[0], func_550(3), 1.5f, -1, 0.25f, 0, 40000f);
				Local_15.f_273[0] = 1;
			}
			if (__LIB_0__::func_94(Local_15.f_307[0], func_550(3), 1) < 3f)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15.f_307[0], Local_15.f_307[10], -1, -1f, -1f, -1f);
				func_935(2, 1);
			}
			else if (__LIB_0__::func_665(Local_15.f_307[0], Global_35, 1, 1) > 20f)
			{
				func_935(1, 1);
			}
			break;
		case 1:
			if (!Local_15.f_273[0])
			{
				TASK::CLEAR_PED_TASKS(Local_15.f_307[0], true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15.f_307[0], Global_35, -1, -1f, -1f, -1f);
				Local_15.f_273[0] = 1;
			}
			if (__LIB_0__::func_94(Local_15.f_307[0], func_550(3), 1) < 3f)
			{
				func_935(2, 1);
			}
			else if (__LIB_0__::func_665(Local_15.f_307[0], Global_35, 1, 1) < 15f)
			{
				func_935(0, 1);
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_586(var uParam0)
{
	if (func_230())
	{
		if (__LIB_0__::func_27(Local_15.f_631, 524288))
		{
			ENTITY::_0x18FF3110CF47115D(Local_15.f_375, 4, 1);
			func_523(-1);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			PED::SET_PED_CONFIG_FLAG(Local_15.f_307[2], 136, false);
			func_565(5, 1);
			__LIB_1__::func_681(&(Local_15.f_631), 524288);
		}
	}
	else if (!__LIB_0__::func_27(Local_15.f_631, 524288))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_375) && ENTITY::_0x61914209C36EFDDB(Local_15.f_375) == 8)
		{
			return;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_375) && ENTITY::_0x61914209C36EFDDB(Local_15.f_375) == 7)
		{
			return;
		}
		ENTITY::_0x18FF3110CF47115D(Local_15.f_375, 4, 0);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[2], 136, true);
		func_523(2);
		func_568(uParam0, 1);
		func_549(uParam0, 2);
		__LIB_1__::func_683(&(Local_15.f_631), 524288);
	}
}

void func_587(int iParam0)
{
	Local_15.f_568 = iParam0;
}

bool func_589()
{
	int iVar0;
	iVar0 = 20;
	while (iVar0 <= 31)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar0]))
		{
			PED::DELETE_PED(&(Local_15.f_307[iVar0]));
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_590(int iParam0, bool bParam1)
{
	if (Local_15.f_3 != iParam0)
	{
		Local_15.f_3 = iParam0;
	}
	func_548(bParam1);
}

void func_591(int iParam0, bool bParam1)
{
	if (Local_15.f_4 != iParam0)
	{
		Local_15.f_4 = iParam0;
	}
	func_548(bParam1);
}

var func_592()
{
	var uVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	uVar0 = Local_15.f_622[0];
	fVar1 = -1f;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		fVar2 = __LIB_0__::func_94(Global_35, TASK::_GET_SCENARIO_POINT_COORDS(Local_15.f_622[iVar3], true), 1);
		if (fVar2 < fVar1 || fVar1 == -1f)
		{
			uVar0 = Local_15.f_622[iVar3];
			fVar1 = fVar2;
		}
		iVar3++;
	}
	return uVar0;
}

void func_594(int iParam0, bool bParam1)
{
	if (Local_15.f_5 != iParam0)
	{
		Local_15.f_5 = iParam0;
	}
	func_548(bParam1);
}

int func_595(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("A_C_BUFFALO_01");
		case 1:
			return joaat("A_M_M_HTLSURVIVALIST_01");
		case 2:
			return joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY");
		case 3:
			return joaat("A_C_HORSE_APPALOOSA_BLANKET");
		case 4:
			return joaat("A_C_CROW_01");
		case 5:
			return joaat("P_CS_PELT_XLARGE_BUFFALO");
		default:
			break;
	}
	return 0;
}

Vector3 func_596(int iParam0)
{
	switch (Local_15.f_411)
	{
		case 71:
			switch (iParam0)
			{
				case 0:
					return func_545(0, 2);
				case 1:
					return func_545(0, 3);
				case 2:
					return func_545(0, 1);
				case 3:
					return func_545(14, 0);
				case 4:
					return func_545(14, 1);
				case 5:
					return func_545(14, 2);
				case 6:
					return func_545(14, 3);
				case 7:
					return func_545(14, 4);
				case 8:
					return func_545(14, 5);
				case 9:
					return func_545(14, 6);
				case 10:
					return func_545(16, 0);
				case 11:
					return func_545(16, 1);
				case 12:
					return func_545(16, 2);
				case 13:
					return func_545(18, 0);
				case 14:
					return func_545(20, 0);
				case 15:
					return func_545(20, 1);
				case 20:
					return func_545(21, 0);
				case 21:
					return func_545(21, 1);
				case 22:
					return func_545(21, 2);
				case 23:
					return func_545(21, 3);
				case 24:
					return func_545(21, 4);
				case 25:
					return func_545(21, 5);
				case 26:
					return func_545(21, 6);
				case 27:
					return func_545(21, 7);
				case 28:
					return func_545(21, 8);
				case 29:
					return func_545(21, 9);
				case 30:
					return func_545(21, 10);
				case 31:
					return func_545(21, 11);
				case 16:
					return func_545(13, 0);
				case 17:
					return func_545(13, 1);
				case 18:
					return func_545(13, 4);
				case 19:
					return func_545(13, 5);
				default:
					break;
			}
			break;
		case 98:
			switch (iParam0)
			{
				case 0:
					return func_545(1, 2);
				case 1:
					return func_545(1, 3);
				case 2:
					return func_545(1, 1);
				case 3:
					return func_545(15, 0);
				case 4:
					return func_545(15, 1);
				case 5:
					return func_545(15, 2);
				case 6:
					return func_545(15, 3);
				case 7:
					return func_545(15, 4);
				case 8:
					return func_545(15, 5);
				case 9:
					return func_545(15, 6);
				case 10:
					return func_545(17, 0);
				case 11:
					return func_545(17, 1);
				case 12:
					return func_545(17, 2);
				case 13:
					return func_545(19, 0);
				case 14:
					return func_545(20, 0);
				case 15:
					return func_545(20, 1);
				case 20:
					return func_545(22, 0);
				case 21:
					return func_545(22, 1);
				case 22:
					return func_545(22, 2);
				case 23:
					return func_545(22, 3);
				case 24:
					return func_545(22, 4);
				case 25:
					return func_545(22, 5);
				case 26:
					return func_545(22, 6);
				case 27:
					return func_545(22, 7);
				case 28:
					return func_545(22, 8);
				case 29:
					return func_545(22, 9);
				case 30:
					return func_545(22, 10);
				case 31:
					return func_545(22, 11);
				case 16:
					return func_545(13, 0);
				case 17:
					return func_545(13, 1);
				case 18:
					return func_545(13, 4);
				case 19:
					return func_545(13, 5);
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_597(int iParam0)
{
	switch (Local_15.f_411)
	{
		case 71:
			switch (iParam0)
			{
				case 0:
					return func_546(0, 2);
				case 1:
					return func_546(0, 3);
				case 2:
					return func_546(0, 1);
				case 3:
					return func_546(14, 0);
				case 4:
					return func_546(14, 1);
				case 5:
					return func_546(14, 2);
				case 6:
					return func_546(14, 3);
				case 7:
					return func_546(14, 4);
				case 8:
					return func_546(14, 5);
				case 9:
					return func_546(14, 6);
				case 10:
					return func_546(16, 0);
				case 11:
					return func_546(16, 1);
				case 12:
					return func_546(16, 2);
				case 13:
					return func_546(18, 0);
				case 14:
					return func_546(20, 0);
				case 15:
					return func_546(20, 1);
				case 20:
					return func_546(21, 0);
				case 21:
					return func_546(21, 1);
				case 22:
					return func_546(21, 2);
				case 23:
					return func_546(21, 3);
				case 24:
					return func_546(21, 4);
				case 25:
					return func_546(21, 5);
				case 26:
					return func_546(21, 6);
				case 27:
					return func_546(21, 7);
				case 28:
					return func_546(21, 8);
				case 29:
					return func_546(21, 9);
				case 30:
					return func_546(21, 10);
				case 31:
					return func_546(21, 11);
				case 16:
					return func_546(13, 0);
				case 17:
					return func_546(13, 1);
				case 18:
					return func_546(13, 4);
				case 19:
					return func_546(13, 5);
				default:
					break;
			}
			break;
		case 98:
			switch (iParam0)
			{
				case 0:
					return func_546(1, 2);
				case 1:
					return func_546(1, 3);
				case 2:
					return func_546(1, 1);
				case 3:
					return func_546(15, 0);
				case 4:
					return func_546(15, 1);
				case 5:
					return func_546(15, 2);
				case 6:
					return func_546(15, 3);
				case 7:
					return func_546(15, 4);
				case 8:
					return func_546(15, 5);
				case 9:
					return func_546(15, 6);
				case 10:
					return func_546(17, 0);
				case 11:
					return func_546(17, 1);
				case 12:
					return func_546(17, 2);
				case 13:
					return func_546(19, 0);
				case 14:
					return func_546(20, 0);
				case 15:
					return func_546(20, 1);
				case 20:
					return func_546(22, 0);
				case 21:
					return func_546(22, 1);
				case 22:
					return func_546(22, 2);
				case 23:
					return func_546(22, 3);
				case 24:
					return func_546(22, 4);
				case 25:
					return func_546(22, 5);
				case 26:
					return func_546(22, 6);
				case 27:
					return func_546(22, 7);
				case 28:
					return func_546(22, 8);
				case 29:
					return func_546(22, 9);
				case 30:
					return func_546(22, 10);
				case 31:
					return func_546(22, 11);
				case 16:
					return func_546(13, 0);
				case 17:
					return func_546(13, 1);
				case 18:
					return func_546(13, 4);
				case 19:
					return func_546(13, 5);
				default:
					break;
			}
			break;
	}
	return 0f;
}

bool func_600(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		Local_15.f_417 = 0;
		return true;
	}
	if (!Local_15.f_417 && !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (bParam3)
		{
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, func_609(iParam2), false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		Local_15.f_417 = 1;
	}
	return false;
}

void func_601(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	if (iParam0 == Local_15.f_418)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "CharlesSmith", Local_15.f_307[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "GenStoryMale1", Local_15.f_307[16], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "GenStoryMale", Local_15.f_307[17], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "ARTHUR", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "REVOLVER", Local_15.f_378, 0);
		__LIB_2__::func_594(iParam0, func_66(iParam0));
	}
	else if (iParam0 == Local_15.f_419)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "GenStoryMale", Local_15.f_307[17], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "ARTHUR", Global_35, 0);
	}
}

void func_602(int iParam0, bool bParam1)
{
	if (Local_15.f_6 != iParam0)
	{
		Local_15.f_6 = iParam0;
	}
	func_548(bParam1);
}

bool func_603(int iParam0, int iParam1, char[4] cParam2)
{
	char* sVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	sVar0 = func_609(iParam1);
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sVar0) || !ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sVar0))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sVar0);
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sVar0))
	{
		return false;
	}
	return true;
}

bool func_604(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	vVar0 = { vParam0 };
	vVar3 = { __LIB_1__::func_384(0) };
	vVar6 = { __LIB_0__::func_173(vVar0 - CAM::GET_GAMEPLAY_CAM_COORD()) };
	fVar9 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar6.x, vVar6.y, vVar3.x, vVar3.y));
	fVar10 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar6.y, vVar6.z, vVar3.y, vVar3.z));
	if (fVar9 < fParam3)
	{
		if (fVar10 < fParam4)
		{
			return true;
		}
	}
	return false;
}

void func_605(int iParam0, bool bParam1)
{
	if (Local_15.f_7 != iParam0)
	{
		Local_15.f_7 = iParam0;
	}
	func_548(bParam1);
}

void func_606(float fParam0)
{
	Local_15.f_627 = fParam0;
}

bool func_607(var uParam0)
{
	switch (Local_15.f_13)
	{
		case 0:
			if (!Local_15.f_273[0] && TASK::IS_PED_STILL(Local_15.f_307[0]))
			{
				func_574(0, 1, 1);
				TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
				TASK::TASK_STAND_STILL(0, -1);
				func_576(0, 1, 0, 0, 1);
				if (!Local_15.f_641)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_ARRIVE");
					Local_15.f_641 = 1;
				}
			}
			if (__LIB_0__::func_665(Global_35, Local_15.f_307[0], 1, 1) < 25f && !__LIB_0__::func_394(Local_15.f_307[0], Local_15.f_307[1], 0))
			{
				func_940(2, 1);
			}
			break;
		case 2:
			return true;
	}
	return false;
}

char* func_609(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Loop";
		case 1:
			return "pl_Action";
		case 2:
			return "pl_breakout";
		default:
			break;
	}
	return "";
}

void func_611(int iParam0, bool bParam1)
{
	if (Local_15.f_8 != iParam0)
	{
		Local_15.f_8 = iParam0;
	}
	func_548(bParam1);
}

bool func_612()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (Local_15.f_247 < 5)
	{
		PED::_0xB8DE69D9473B7593(Global_35, 3);
		PED::_0xB8DE69D9473B7593(Global_35, 4);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_15.f_307[17], 512, true);
		TASK::_0x41D1331AFAD5A091(Local_15.f_307[17], 1, 0);
		TASK::_0x41D1331AFAD5A091(Local_15.f_307[17], 2, 0);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_CHOKE"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_BREAKOUT"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), true);
	PAD::_SET_CONTROL_CONTEXT(5, joaat("MINIGAMEINTERROGATION"));
	switch (Local_15.f_247)
	{
		case 0:
			__LIB_1__::func_733(Local_15.f_307[17]);
			PED::_0xB8DE69D9473B7593(Global_35, 3);
			PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 159, true);
			PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 225, true);
			PLAYER::_0x585CE159DB46FADB(PLAYER::PLAYER_ID(), 0f);
			PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 297, false);
			PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 130, true);
			PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 315, true);
			PED::_0xB8DE69D9473B7593(Global_35, 1);
			__LIB_1__::func_148(&(Local_15.f_252));
			func_943(1);
			break;
		case 1:
			PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 351, false);
			func_944();
			if (__LIB_17__::func_710(Global_35))
			{
				func_233(29, 0);
				func_943(2);
			}
			break;
		case 2:
			PED::_0x789DABD18E9024DB(Global_35, 29, 0);
			PED::_0x789DABD18E9024DB(Local_15.f_307[17], 29, 0);
			if (!__LIB_0__::func_75(&(Local_15.f_258)))
			{
				__LIB_1__::func_148(&(Local_15.f_258));
			}
			else if (__LIB_3__::func_135(&(Local_15.f_258)) > 15000)
			{
				if (__LIB_0__::func_139(Local_15.f_269))
				{
					__LIB_1__::func_221(Local_15.f_269, 0, 1);
				}
				__LIB_0__::func_37(&(Local_15.f_258));
				func_943(3);
			}
			if (!__LIB_0__::func_481(1))
			{
				if (__LIB_0__::func_139(Local_15.f_269))
				{
					__LIB_1__::func_382(Local_15.f_269, 1, 0);
					__LIB_1__::func_221(Local_15.f_269, 1, 1);
					if (__LIB_1__::func_732(Local_15.f_269, 1) && !Local_15.f_249)
					{
						PED::_0x789DABD18E9024DB(Global_35, 32, 0);
						Local_15.f_249 = 1;
					}
					if (Local_15.f_249)
					{
						__LIB_0__::func_37(&(Local_15.f_258));
						Local_15.f_249 = 0;
						func_943(3);
					}
				}
				else if (!__LIB_0__::func_139(Local_15.f_269))
				{
					Local_15.f_269 = __LIB_4__::func_864("H2_UC_BEAT", joaat("INPUT_INTERROGATE_BEAT"), 1, 0, 1, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_1__::func_382(Local_15.f_269, 1, 0);
					func_949(&(Local_15.f_269), Local_15.f_307[17]);
				}
			}
			break;
		case 3:
			Local_15.f_248++;
			if (__LIB_0__::func_139(Local_15.f_269))
			{
				__LIB_1__::func_221(Local_15.f_269, 0, 1);
			}
			if (Local_15.f_248 == 1)
			{
				func_233(30, 0);
			}
			else if (Local_15.f_248 == 2)
			{
				func_233(31, 0);
			}
			func_943(4);
			break;
		case 4:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_0__::func_37(&(Local_15.f_84));
				func_943(2);
			}
			else
			{
				__LIB_1__::func_283(&(Local_15.f_84), 0);
				if (__LIB_1__::func_285(&(Local_15.f_84), 2.5f))
				{
					if (__LIB_0__::func_139(Local_15.f_269))
					{
						__LIB_1__::func_221(Local_15.f_269, 0, 1);
					}
				}
				else if (__LIB_0__::func_139(Local_15.f_269))
				{
					__LIB_1__::func_221(Local_15.f_269, 1, 1);
					__LIB_1__::func_382(Local_15.f_269, 1, 0);
					if (__LIB_1__::func_514(Local_15.f_269, 1))
					{
						PED::_0x789DABD18E9024DB(Global_35, 32, 0);
					}
				}
			}
			if (Local_15.f_248 >= 2)
			{
				if (!__LIB_0__::func_481(1))
				{
					func_943(5);
				}
			}
			break;
		case 5:
			PED::_0x949B2F9ED2917F5D(Global_35, 1);
			PED::REMOVE_PED_DEFENSIVE_AREA(Global_35, false);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_15.f_307[17], false);
			if (__LIB_0__::func_139(Local_15.f_269))
			{
				__LIB_1__::func_748(&(Local_15.f_269), 1, 1);
			}
			if (!__LIB_0__::func_139(Local_15.f_270))
			{
				Local_15.f_270 = __LIB_4__::func_864("H2_UC_KILL", joaat("INPUT_INTERROGATE_KILL"), 1, 0, 1, 4, 500, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				func_949(&(Local_15.f_270), Local_15.f_307[17]);
			}
			if (!__LIB_0__::func_139(Local_15.f_271))
			{
				Local_15.f_271 = __LIB_4__::func_864("H2_UC_RELEASE", joaat("INPUT_INTERROGATE_RELEASE"), 1, 0, 1, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				func_949(&(Local_15.f_271), Local_15.f_307[17]);
			}
			__LIB_1__::func_748(&(Local_15.f_272), 1, 1);
			__LIB_1__::func_221(Local_15.f_270, 1, 1);
			__LIB_1__::func_382(Local_15.f_270, 1, 1);
			__LIB_1__::func_221(Local_15.f_271, 1, 1);
			__LIB_1__::func_382(Local_15.f_271, 1, 1);
			PED::_0xEAE3B5B019C8D23F(Global_35, 8);
			PED::_0x949B2F9ED2917F5D(Global_35, 3);
			PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 21, true);
			TASK::TASK_CLEAR_LOOK_AT(Local_15.f_307[17]);
			ENTITY::FREEZE_ENTITY_POSITION(Local_15.f_307[17], false);
			PLAYER::_0x585CE159DB46FADB(PLAYER::PLAYER_ID(), -1f);
			__LIB_1__::func_148(&(Local_15.f_252));
			func_233(32, 0);
			func_943(6);
			break;
		case 6:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_1__::func_283(&(Local_15.f_84), 0);
			}
			if (__LIB_0__::func_567(Local_15.f_270, 1) || ENTITY::IS_ENTITY_DEAD(Local_15.f_307[17]))
			{
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_CHOKE"), true);
				PED::_0xEAE3B5B019C8D23F(Global_35, 8);
				PED::_0x789DABD18E9024DB(Global_35, 128, 0);
				__LIB_1__::func_748(&(Local_15.f_271), 1, 1);
				__LIB_1__::func_748(&(Local_15.f_270), 1, 1);
				PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 302, true);
				func_943(7);
			}
			else if (__LIB_1__::func_514(Local_15.f_271, 1))
			{
				__LIB_1__::func_715(12, 0, 1, 0, Local_15.f_307[17], 0, 1065353216 /* Float: 1f */, 0);
				__LIB_1__::func_748(&(Local_15.f_271), 1, 1);
				__LIB_1__::func_748(&(Local_15.f_270), 1, 1);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_15.f_419, ENTITY::GET_ENTITY_COORDS(Local_15.f_307[17], true, false), ENTITY::GET_ENTITY_ROTATION(Local_15.f_307[17], 2), 2);
				func_951(Local_15.f_419, 1, func_66(Local_15.f_419));
				__LIB_2__::func_594(Local_15.f_419, func_66(Local_15.f_419));
				func_943(9);
			}
			else if (__LIB_1__::func_285(&(Local_15.f_84), 4f))
			{
				func_233(33, 0);
			}
			break;
		case 7:
			Local_15.f_250 = 1;
			PED::REMOVE_PED_DEFENSIVE_AREA(Global_35, false);
			PED::_0xB8DE69D9473B7593(Global_35, 1);
			__LIB_0__::func_37(&(Local_15.f_84));
			func_233(35, 0);
			func_943(8);
			break;
		case 8:
			if (!PED::_0x0E99E3BF11BB6367(Global_35))
			{
				__LIB_0__::func_37(&(Local_15.f_84));
				func_943(11);
			}
			else
			{
				__LIB_1__::func_283(&(Local_15.f_84), 0);
				if (__LIB_1__::func_285(&(Local_15.f_84), 2f))
				{
					PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 302, false);
				}
				if (!__LIB_0__::func_75(&(Local_15.f_261)))
				{
					__LIB_1__::func_148(&(Local_15.f_261));
				}
				else if (__LIB_3__::func_135(&(Local_15.f_261)) > 10000)
				{
					func_943(10);
				}
			}
			break;
		case 9:
			if (!__LIB_0__::func_27(Local_15.f_631, 262144))
			{
				TASK::_0x2E1D6D87346BB7D2(Local_15.f_307[17], Global_35, 0, 0);
				__LIB_1__::func_683(&(Local_15.f_631), 262144);
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_15.f_419) > 0.95f)
			{
				func_943(10);
			}
			break;
		case 10:
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_15.f_307[17], 17, true);
			PED::_0xEAE3B5B019C8D23F(Global_35, 1);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_BREAKOUT"), true);
			PED::_0x949B2F9ED2917F5D(Global_35, 23);
			PED::_0x949B2F9ED2917F5D(Global_35, 24);
			PED::REMOVE_PED_DEFENSIVE_AREA(Global_35, false);
			if (!PED::_0x3BDFCF25B58B0415(Local_15.f_307[17]) && !PED::IS_PED_RAGDOLL(Local_15.f_307[17]))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_15.f_307[17], joaat("REL_CIVMALE"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_307[17], true);
				PED::_0x89F5E7ADECCCB49C(Local_15.f_307[17], "panic");
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_15.f_307[17], 17, true);
				if (!Local_15.f_273[17])
				{
					TASK::_TASK_FLEE_FROM_PED(Local_15.f_307[17], Global_35, 855.5391f, 425.6304f, 107.9169f, 10000f, -1, 1024, 1077936128 /* Float: 3f */, 0);
					Local_15.f_273[17] = 1;
				}
				__LIB_1__::func_148(&(Local_15.f_264));
				func_943(11);
			}
			break;
		case 11:
			if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_15.f_307[17])) < 20f)
			{
				PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 21, true);
			}
			if (__LIB_3__::func_135(&(Local_15.f_264)) > 10000)
			{
				if (__LIB_0__::func_272(Local_15.f_307[17], 0) && __LIB_0__::func_665(Global_35, Local_15.f_307[17], 1, 1) < 30f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_15.f_307[17], 518218985, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_15.f_307[17], 518218985, true) != 0)
					{
						TASK::_TASK_FLEE_FROM_PED(Local_15.f_307[17], Global_35, 855.5391f, 425.6304f, 107.9169f, 10000f, -1, 1024, 1077936128 /* Float: 3f */, 0);
					}
				}
			}
			if (PED::IS_PED_USING_ACTION_MODE(Global_35))
			{
				PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
			}
			__LIB_9__::func_889();
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 258, false);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), true);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			MAP::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			func_943(12);
			break;
		case 12:
			func_643(4);
			func_606(100f);
			if (!Local_15.f_273[0])
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15.f_307[0], Global_35, -1, -1f, -1f, -1f);
				Local_15.f_273[0] = 1;
			}
			if (Local_15.f_250)
			{
				func_233(36, 0);
			}
			else
			{
				func_233(34, 0);
			}
			return true;
	}
	return false;
}

void func_620(int iParam0, bool bParam1)
{
	if (Local_15.f_9 != iParam0)
	{
		Local_15.f_9 = iParam0;
	}
	if (bParam1)
	{
		Local_15.f_273[0] = 0;
	}
}

bool func_624(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("DEF_COMP_BRAIN"));
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				return false;
			}
			if (Global_1359489.f_9 != -1)
			{
				return false;
			}
			Global_1359489.f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_966(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (__LIB_0__::func_702(Global_1360165[iParam0 /*1157*/].f_4.f_2) || __LIB_1__::func_44(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_966(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_967(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!__LIB_0__::func_959(iParam0, 0))
					{
						__LIB_0__::func_288(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { __LIB_0__::func_229(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) };
			if (!bParam6)
			{
				__LIB_0__::func_290(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!__LIB_0__::func_272(__LIB_0__::func_271(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
				{
					return false;
				}
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_626(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_626(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_626(iVar2, vParam1, fParam4, iParam5, iParam6);
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

struct<11> func_638(int iParam0)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 5:
			if (Local_15.f_411 == 71)
			{
				Var0.f_1 = { 199.4699f, 237.2025f, 107.8168f };
				Var0.f_4 = { 0f, 0f, 0f };
				Var0.f_7 = { 25f, 25f, 50f };
				Var0 = joaat("VOLCYLINDER");
				Var0.f_10 = "H2_BUFFALO_HERD_SCENARIO";
			}
			else
			{
				Var0.f_1 = { 220.7429f, -43.6f, 103.0256f };
				Var0.f_4 = { 0f, 0f, 0f };
				Var0.f_7 = { 25f, 25f, 50f };
				Var0 = joaat("VOLCYLINDER");
				Var0.f_10 = "H2_BUFFALO_HERD_SCENARIO";
			}
			break;
		case 4:
			Var0.f_1 = { 211.1375f, 235.2025f, 108.6283f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 80f, 80f, 80f };
			Var0 = joaat("VOLSPHERE");
			Var0.f_10 = "H2_BUFFALO_HERD_OBJECTIVE";
			break;
		case 6:
			Var0.f_1 = { 834.0534f, 425.7491f, 98.3052f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 40f, 40f, 40f };
			Var0 = joaat("VOLSPHERE");
			Var0.f_10 = "H2_INVESTIGATE_HUNTERS_CAMP_OBJECTIVE";
			break;
		case 7:
			Var0.f_1 = { 481.967f, 290.271f, 111.3091f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 6f, 6f, 5f };
			Var0 = joaat("VOLSPHERE");
			Var0.f_10 = "H2_ABANDONED_CAMPSITE";
			break;
		case 8:
			Var0.f_1 = { 482.2845f, 288.3228f, 110.3084f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 2f, 2f, 2f };
			Var0 = joaat("VOLSPHERE");
			Var0.f_10 = "H2_ABANDONED_CAMPSITE_FIRE";
			break;
		case 9:
			Var0.f_1 = { 874.907f, 419.01f, 112.5354f };
			Var0.f_4 = { 0f, 0f, -15.99999f };
			Var0.f_7 = { 2f, 1.5f, 2f };
			Var0 = joaat("VOLSPHERE");
			Var0.f_10 = "H2_INTERROGATION_INTIMIDATE";
			break;
		case 10:
			Var0.f_1 = { 876.0905f, 419.555f, 111.54f };
			Var0.f_4 = { 0f, 0f, -18f };
			Var0.f_7 = { 10f, 8f, 3f };
			Var0 = joaat("VOLBOX");
			Var0.f_10 = "H2_INTERROGATION_FIGHT_AREA";
			break;
		case 11:
			Var0.f_1 = { 875.6318f, 419.5912f, 111.8789f };
			Var0.f_4 = { 0f, 0f, -18f };
			Var0.f_7 = { 13.5f, 10f, 5f };
			Var0 = joaat("VOLBOX");
			Var0.f_10 = "H2_INTERROGATION_CAMPSITE";
			break;
		case 12:
			Var0.f_1 = { 874.7702f, 416.9062f, 111.2359f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.5f, 1.5f, 1.5f };
			Var0 = joaat("VOLSPHERE");
			Var0.f_10 = "H2_ABANDONED_CAMPSITE_FIRE";
			break;
		case 13:
			Var0.f_1 = { 879.6409f, 415.9319f, 110.8872f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.5f, 1.5f, 1.5f };
			Var0 = joaat("VOLSPHERE");
			Var0.f_10 = "H2_ABANDONED_CAMPSITE_FIRE";
			break;
		case 14:
			if (Local_15.f_411 == 71)
			{
				Var0.f_1 = { 152.0808f, 250.6083f, 107.8168f };
				Var0.f_4 = { 0f, 0f, 0f };
				Var0.f_7 = { 75f, 75f, 75f };
				Var0 = joaat("VOLCYLINDER");
				Var0.f_10 = "H2_BUFFALO_FLEE_BOUNDS";
			}
			else
			{
				Var0.f_1 = { 222.6963f, -45.03358f, 107.8168f };
				Var0.f_4 = { 0f, 0f, 0f };
				Var0.f_7 = { 75f, 90f, 75f };
				Var0 = joaat("VOLCYLINDER");
				Var0.f_10 = "H2_BUFFALO_FLEE_BOUNDS";
			}
			break;
		case 15:
			if (Local_15.f_411 == 71)
			{
				Var0.f_1 = { 152.0808f, 250.6083f, 107.8168f };
				Var0.f_4 = { 0f, 0f, 0f };
				Var0.f_7 = { 35f, 35f, 75f };
				Var0 = joaat("VOLCYLINDER");
				Var0.f_10 = "H2_BUFFALO_FLEE_INNER_BOUNDS";
			}
			else
			{
				Var0.f_1 = { 222.6963f, -45.03358f, 107.8168f };
				Var0.f_4 = { 0f, 0f, 0f };
				Var0.f_7 = { 44f, 55f, 75f };
				Var0 = joaat("VOLCYLINDER");
				Var0.f_10 = "H2_BUFFALO_FLEE_INNER_BOUNDS";
			}
			break;
		case 16:
			Var0.f_1 = { 87.72281f, -305.6749f, 105.9662f };
			Var0.f_4 = { 0f, 0f, 26.03327f };
			Var0.f_7 = { 42.17675f, 16.06581f, 18.90086f };
			Var0 = joaat("VOLBOX");
			Var0.f_10 = "H2_BUFFALO_SCENARIO_BLOCKING";
			break;
		case 17:
			Var0.f_1 = { 882.888f, 414.049f, 111.559f };
			Var0.f_4 = { 0f, 0f, 61.87479f };
			Var0.f_7 = { 7.326179f, 16.99286f, 2.598f };
			Var0 = joaat("VOLCYLINDER");
			Var0.f_10 = "H2_HUNTERS_CAMP";
			break;
		case 18:
			Var0.f_1 = { 875.8608f, 416.024f, 110.5497f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 4.687f, 5.732334f, 5.220385f };
			Var0 = joaat("VOLSPHERE");
			Var0.f_10 = "H2_ANTI_GRIEF";
			break;
		case 19:
			Var0.f_1 = { 731.61f, 403.968f, 108.999f };
			Var0.f_4 = { 0f, 0f, -33.529f };
			Var0.f_7 = { 43.621f, 14.508f, 23.829f };
			Var0 = joaat("VOLBOX");
			Var0.f_10 = "H2_BLOCK_TRAFFIC";
			break;
		case 20:
			Var0.f_1 = { 877.3221f, 416.4137f, 110.6165f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 10f, 10f, 10f };
			Var0 = joaat("VOLSPHERE");
			Var0.f_10 = "H2_WALK_ZONE";
			break;
	}
	return Var0;
}

int func_641(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_990(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

void func_643(int iParam0)
{
	Local_15.f_628 = iParam0;
}

bool func_644(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			return func_1019(uParam0);
		case 1:
			return func_1020(uParam0);
		case 2:
			return func_1021(uParam0);
		case 3:
			return func_1022(uParam0);
		case 4:
			return func_1023(uParam0);
		case 5:
			return func_1024(uParam0);
		case 6:
			return func_1025(uParam0);
		case 8:
			return func_1026(uParam0);
		default:
			break;
	}
	return false;
}

int func_651(int iParam0, int iParam1)
{
	var uVar0;
	return func_1030(&uVar0, iParam0, iParam1);
}

void func_813(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_139(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1159(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_142(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_440(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1164(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		__LIB_1__::func_178(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (__LIB_0__::func_809(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				__LIB_0__::func_810(iVar6, iVar7);
				__LIB_0__::func_811(iVar6, iVar8);
				__LIB_0__::func_812(iVar6, iVar9);
				__LIB_0__::func_813(iVar6, 0);
				if (__LIB_1__::func_127(iVar6))
				{
					__LIB_1__::func_608(iVar6);
				}
				iVar10 = __LIB_0__::func_553(iVar8);
				__LIB_1__::func_820(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

void func_816(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_139(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_139(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_440(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_440(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_440(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_440(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_440(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_440(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_440(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_440(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_440(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_440(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_440(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		__LIB_1__::func_178(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (__LIB_0__::func_809(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				__LIB_0__::func_810(iVar0, iVar1);
				__LIB_0__::func_811(iVar0, iVar2);
				__LIB_0__::func_812(iVar0, iVar3);
				__LIB_0__::func_813(iVar0, 0);
				if (__LIB_1__::func_127(iVar0))
				{
					__LIB_1__::func_608(iVar0);
				}
				iVar4 = __LIB_0__::func_553(iVar2);
				__LIB_1__::func_820(iVar0, iVar4);
			}
			iVar0++;
		}
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

int func_862(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	if (__LIB_0__::func_192(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar49 = (iVar49 + Var0[iVar32 /*2*/].f_1);
					Jump @229; //curOff = 201
				}
				else if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = __LIB_0__::func_372(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = __LIB_0__::func_374(iVar62, iVar61);
					if (__LIB_0__::func_144(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_862(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_862(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

char* func_893(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HUNHC_W_HORSES";
		case 1:
			return "HUNHC_H_GTBUFH";
		case 2:
			return "HUNHC_H_GTBUFHC";
		case 3:
			return "HUNHC_H_TRNHIL";
		case 4:
			return "HUNHC_H_UPHIL";
		case 5:
			return "HUNHC_H_FDBUFH";
		case 6:
			return "HUNHC_H_KLBUF";
		case 7:
			return "HUNHC_H_KLDBUF";
		case 8:
			return "HUNHC_H_KLDMORE";
		case 9:
			return "HUNHC_H_KLDSKIN";
		case 10:
			return "HUNHC_H_STWSKN";
		case 11:
			return "HUNHC_H_MOUNT";
		case 12:
			return "HUNHC_H_GTDBF1";
		case 13:
			return "HUNHC_H_DBFOF";
		case 14:
			return "HUNHC_H_FDDBF1";
		case 15:
			return "HUNHC_H_STSKN2";
		case 16:
			return "HUNHC_H_ACDB";
		case 17:
			return "HUNHC_H_GTDBF2";
		case 18:
			return "HUNHC_H_CPDBF2";
		case 19:
			return "HUNHC_H_FDDBF2";
		case 20:
			return "HUNHC_H_INVCMP";
		case 21:
			return "HUNHC_H_INSCMP";
		case 22:
			return "HUNHC_H_GTVP";
		case 23:
			return "HUNHC_H_USEBIN";
		case 24:
			return "HUNHC_H_CFDHTR";
		case 25:
			return "HUNHC_H_FDHNTRB";
		case 26:
			return "HUNHC_H_RIDE3";
		case 27:
			return "HUNHC_H_GTDBF3";
		case 28:
			return "HUNHC_H_SINTER";
		case 29:
			return "HUNHC_H_INTGRAP";
		case 30:
			return "HUNHC_H_INT1";
		case 31:
			return "HUNHC_H_INT2";
		case 32:
			return "HUNHC_H_PLEAD";
		case 33:
			return "HUNHC_H_HESI";
		case 34:
			return "HUNHC_H_RHNTR";
		case 35:
			return "HUNHC_H_KHNTR";
		case 36:
			return "HUNHC_H_RKHNTR";
		case 37:
			return "HUNHC_H_ILO1";
		case 38:
			return "HUNHC_H_ILO2";
		case 39:
			return "HUNHC_H_ILO3";
		case 40:
			return "HUNHC_H_ILO4";
		default:
			break;
	}
	return "FAIL";
}

Vector3 func_905(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -122.581f, -17.1254f, 95.19936f;
				case 1:
					return -113.665f, -14.36413f, 94.87081f;
				case 2:
					return -121.66f, -18.94263f, 95.13306f;
				case 3:
					return -115.2778f, -19.0228f, 95.9452f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 670.3842f, -1233.139f, 43.07296f;
				case 1:
					return 674.999f, -1224.58f, 44.7383f;
				case 2:
					return 673.5741f, -1232.07f, 43.07864f;
				case 3:
					return 676.9256f, -1224.274f, 44.8312f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -101.5966f, -16.33828f, 94.81773f;
				case 1:
					return -101.5966f, -16.33828f, 94.81773f;
				case 2:
					return -100.6834f, -14.1793f, 94.7808f;
				case 3:
					return -100.6834f, -14.1793f, 94.7808f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 683.6268f, -1218.095f, 44.16968f;
				case 1:
					return 683.6268f, -1218.095f, 44.16968f;
				case 2:
					return 687.719f, -1218.133f, 44.0056f;
				case 3:
					return 687.719f, -1218.133f, 44.0056f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 168.5965f, 150.4489f, 106.5041f;
				case 1:
					return 168.5965f, 150.4489f, 106.5041f;
				case 2:
					return 167.1152f, 152.858f, 106.7173f;
				case 3:
					return 167.1152f, 152.858f, 106.7173f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 179.5197f, -157.5251f, 123.0903f;
				case 1:
					return 179.5197f, -157.5251f, 123.0903f;
				case 2:
					return 178.6639f, -153.4914f, 122.3531f;
				case 3:
					return 178.6639f, -153.4914f, 122.3531f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 242.389f, 266.1133f, 110.7915f;
				case 1:
					return 242.389f, 266.1133f, 110.7915f;
				case 2:
					return 248.2498f, 264.1946f, 110.4886f;
				case 3:
					return 248.2498f, 264.1946f, 110.4886f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 319.0359f, 41.87469f, 103.6572f;
				case 1:
					return 319.0359f, 41.87469f, 103.6572f;
				case 2:
					return 326.1948f, 41.9511f, 104.7216f;
				case 3:
					return 326.1948f, 41.9511f, 104.7216f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 477.4301f, 275.8051f, 109.2231f;
				case 1:
					return 477.4301f, 275.8051f, 109.2231f;
				case 2:
					return 472.3394f, 264.7003f, 108.8237f;
				case 3:
					return 472.3394f, 264.7003f, 108.8237f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 492.5731f, 273.5615f, 111.3733f;
				case 1:
					return 492.5731f, 273.5615f, 111.3733f;
				case 2:
					return 490.8317f, 270.2218f, 111.4397f;
				case 3:
					return 490.8317f, 270.2218f, 111.4397f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 546.9625f, 258.6458f, 122.0631f;
				case 1:
					return 546.9625f, 258.6458f, 122.0631f;
				case 2:
					return 551.101f, 256.4676f, 122.5745f;
				case 3:
					return 551.101f, 256.4676f, 122.5745f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 877.7465f, 429.9292f, 108.4409f;
				case 1:
					return 877.7465f, 429.9292f, 108.4409f;
				case 2:
					return 863.5469f, 435.0107f, 107.4219f;
				case 3:
					return 863.7894f, 433.9954f, 107.4723f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 876.3172f, 430.5025f, 108.2827f;
				case 1:
					return 876.3172f, 430.5025f, 108.2827f;
				case 2:
					return 740.5225f, 405.2042f, 107.3568f;
				case 3:
					return 740.5225f, 405.2042f, 107.3568f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 879.9218f, 417.4037f, 110.9864f;
				case 1:
					return 877.8125f, 415.7369f, 110.9854f;
				case 2:
					return 877.5112f, 418.6115f, 110.7355f;
				case 3:
					return 877.8423f, 417.3157f, 110.7355f;
				case 4:
					return 890.8992f, 413.8267f, 111.3929f;
				case 5:
					return 892.6528f, 411.8692f, 111.6884f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 200.8233f, 212.801f, 105.2354f;
				case 1:
					return 201.5914f, 219.5695f, 105.7812f;
				case 2:
					return 199.7568f, 247.3961f, 109.3396f;
				case 3:
					return 222.618f, 235.96f, 107.6534f;
				case 4:
					return 209.6187f, 230.3011f, 107.046f;
				case 5:
					return 193.6756f, 258.1225f, 110.8945f;
				case 6:
					return 197.1006f, 240.038f, 108.1054f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 206.9542f, -50.45773f, 102.3624f;
				case 1:
					return 229.0917f, -46.56033f, 102.424f;
				case 2:
					return 227.4282f, -63.88778f, 103.5263f;
				case 3:
					return 216.1743f, -44.8363f, 102.0222f;
				case 4:
					return 230.2881f, -54.75324f, 102.8313f;
				case 5:
					return 218.8404f, -50.79625f, 102.1828f;
				case 6:
					return 212.1506f, -62.30327f, 103.1725f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 234.5126f, 283.4317f, 113.0459f;
				case 1:
					return 235.6469f, 275.7166f, 111.4847f;
				case 2:
					return 232.1606f, 279.5172f, 112.7984f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 310.9577f, 32.64224f, 102.6278f;
				case 1:
					return 312.5332f, 36.6715f, 102.6382f;
				case 2:
					return 313.8952f, 31.71089f, 102.8905f;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 480.8819f, 268.4863f, 110.0004f;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 480.8819f, 268.4863f, 110.0004f;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 774.7648f, 442.438f, 107.6398f;
				case 1:
					return 787.1072f, 437.6128f, 107.5499f;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return 233.0002f, 285.2737f, 113.3952f;
				case 1:
					return 235.8823f, 283.284f, 113.4f;
				case 2:
					return 234.961f, 284.3966f, 114f;
				case 3:
					return 230.9694f, 278.9281f, 113.6f;
				case 4:
					return 230.5357f, 279.2979f, 113.3f;
				case 5:
					return 231.6362f, 278.559f, 113.6582f;
				case 6:
					return 232.4644f, 277.9564f, 113.3f;
				case 7:
					return 231.137f, 277.8002f, 112.5005f;
				case 8:
					return 236.232f, 276.3539f, 112.5152f;
				case 9:
					return 235.6478f, 277.4405f, 112.6f;
				case 10:
					return 236.4762f, 276.5728f, 112.529f;
				case 11:
					return 236.4675f, 276.3362f, 112.4997f;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					return 312.2484f, 31.20295f, 102.6971f;
				case 1:
					return 311.5687f, 33.1148f, 102.6355f;
				case 2:
					return 310.5108f, 30.46827f, 102.7071f;
				case 3:
					return 312.0246f, 35.2594f, 102.6233f;
				case 4:
					return 312.4923f, 36.46946f, 103.6376f;
				case 5:
					return 312.1295f, 38.06013f, 102.5915f;
				case 6:
					return 313.9547f, 36.43743f, 102.7937f;
				case 7:
					return 313.7129f, 31.19553f, 103.8698f;
				case 8:
					return 315.1893f, 31.0117f, 103.1352f;
				case 9:
					return 313.4042f, 32.30215f, 102.8071f;
				case 10:
					return 315.2585f, 32.92007f, 104.0954f;
				case 11:
					return 313.8231f, 33.48209f, 102.8413f;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return -100.6834f, -14.1793f, 94.7808f;
				case 1:
					return 167.0929f, 152.627f, 106.6808f;
				case 2:
					return 233.5006f, 283.1071f, 113.1437f;
				case 3:
					return 231.6538f, 272.7318f, 111.6893f;
				case 4:
					return 481.24f, 266.5857f, 110.1667f;
				case 5:
					return 248.2498f, 264.1946f, 110.4886f;
				case 6:
					return 479.0672f, 264.3814f, 109.9224f;
				case 7:
					return 488.4434f, 262.0597f, 111.7182f;
				case 8:
					return 551.101f, 256.4676f, 122.5745f;
				case 9:
					return 837.4268f, 434.9742f, 105.7771f;
				case 10:
					return 837.4268f, 434.9742f, 105.7771f;
				case 11:
					return 873.2532f, 423.602f, 110.32f;
				case 12:
					return 888.8951f, 418.931f, 111.1013f;
				case 13:
					return 869.7977f, 433.5178f, 107.9178f;
				case 14:
					return 551.1479f, 256.7391f, 122.5428f;
				case 15:
					return 871.2734f, 432.1152f, 108.1834f;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return 687.6514f, -1218.162f, 44.00638f;
				case 1:
					return 179.2317f, -153.1012f, 122.2384f;
				case 2:
					return 313.6121f, 7.63785f, 102.8128f;
				case 3:
					return 307.9275f, 37.76335f, 102.697f;
				case 4:
					return 481.24f, 266.5857f, 110.1667f;
				case 5:
					return 326.1948f, 41.9511f, 104.7216f;
				case 6:
					return 483.8795f, 265.322f, 110.7037f;
				case 7:
					return 488.4434f, 262.0597f, 111.7182f;
				case 8:
					return 551.101f, 256.4676f, 122.5745f;
				case 9:
					return 837.4268f, 434.9742f, 105.7771f;
				case 10:
					return 837.4268f, 434.9742f, 105.7771f;
				case 11:
					return 873.2532f, 423.602f, 110.32f;
				case 12:
					return 888.8951f, 418.931f, 111.1013f;
				case 13:
					return 869.7977f, 433.5178f, 107.9178f;
				case 14:
					return 551.1479f, 256.7391f, 122.5428f;
				case 15:
					return 871.2734f, 432.1152f, 108.1834f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_906(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 247f;
				case 1:
					return 64.28f;
				case 2:
					return 247f;
				case 3:
					return 81.8196f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -30.6f;
				case 1:
					return 190f;
				case 2:
					return -40.4f;
				case 3:
					return 190f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -53.43f;
				case 1:
					return -53.43f;
				case 2:
					return -63.1f;
				case 3:
					return -63.1f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -70.45f;
				case 1:
					return -70.45f;
				case 2:
					return -51.49f;
				case 3:
					return -51.49f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -21.02f;
				case 1:
					return -21.02f;
				case 2:
					return -23.34f;
				case 3:
					return -23.34f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -27.29f;
				case 1:
					return -27.29f;
				case 2:
					return -27.12f;
				case 3:
					return -27.12f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -119.51f;
				case 1:
					return -119.51f;
				case 2:
					return -120.07f;
				case 3:
					return -120.07f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -89.38f;
				case 1:
					return -89.38f;
				case 2:
					return -90f;
				case 3:
					return -90f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -63.55f;
				case 1:
					return -63.55f;
				case 2:
					return -44.01f;
				case 3:
					return -44.01f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -178.89f;
				case 1:
					return -178.89f;
				case 2:
					return -164.21f;
				case 3:
					return -164.21f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -57.92f;
				case 1:
					return -57.92f;
				case 2:
					return -56.76f;
				case 3:
					return -56.76f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -101.41f;
				case 1:
					return -85.74f;
				case 2:
					return -72.13f;
				case 3:
					return -91.87f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 28.24f;
				case 1:
					return 28.24f;
				case 2:
					return 90.82f;
				case 3:
					return 90.82f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 64.14f;
				case 1:
					return -0.13f;
				case 2:
					return -144.92f;
				case 3:
					return 193.487f;
				case 4:
					return 90.959f;
				case 5:
					return 75.949f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 105.0156f;
				case 1:
					return 20.16f;
				case 2:
					return 252.72f;
				case 3:
					return 59.04f;
				case 4:
					return 304.56f;
				case 5:
					return 200.16f;
				case 6:
					return 351.1063f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 105.0156f;
				case 1:
					return 20.16f;
				case 2:
					return 252.72f;
				case 3:
					return 59.04f;
				case 4:
					return 304.56f;
				case 5:
					return 200.16f;
				case 6:
					return 351.1063f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 235.44f;
				case 1:
					return 220.9129f;
				case 2:
					return 50.4f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return -161.8f;
				case 1:
					return -26.43f;
				case 2:
					return -39.1f;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return -89.69f;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return -89.69f;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 90.84f;
				case 1:
					return 293.757f;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return -95.44f;
				case 1:
					return -135.74f;
				case 2:
					return -51.77f;
				case 3:
					return 29.21f;
				case 4:
					return 143.2f;
				case 5:
					return -35.44f;
				case 6:
					return 96.14f;
				case 7:
					return -32.75f;
				case 8:
					return 67.45f;
				case 9:
					return 37.79f;
				case 10:
					return -30.92f;
				case 11:
					return 78.14f;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					return 88.57f;
				case 1:
					return 34.53f;
				case 2:
					return -49.31f;
				case 3:
					return -28.08f;
				case 4:
					return -127.21f;
				case 5:
					return 43.61f;
				case 6:
					return 64.25f;
				case 7:
					return 160.85f;
				case 8:
					return 39.56f;
				case 9:
					return -54.4f;
				case 10:
					return 61.34f;
				case 11:
					return -153.08f;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return 105.84f;
				case 1:
					return 347.04f;
				case 2:
					return 299.3952f;
				case 3:
					return 93.19f;
				case 4:
					return -6.48f;
				case 5:
					return 67.5757f;
				case 6:
					return 67.5757f;
				case 7:
					return -164.21f;
				case 8:
					return 67.5757f;
				case 9:
					return 93.19f;
				case 10:
					return 93.19f;
				case 11:
					return 67.3217f;
				case 12:
					return 67.5757f;
				case 13:
					return 208.4413f;
				case 14:
					return 67.5757f;
				case 15:
					return -99.14f;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return 105.84f;
				case 1:
					return 347.04f;
				case 2:
					return 299.3952f;
				case 3:
					return -36.73f;
				case 4:
					return -6.48f;
				case 5:
					return 67.5757f;
				case 6:
					return -12.6f;
				case 7:
					return -164.21f;
				case 8:
					return 67.5757f;
				case 9:
					return 93.19f;
				case 10:
					return 93.19f;
				case 11:
					return 67.3217f;
				case 12:
					return 67.5757f;
				case 13:
					return 208.4413f;
				case 14:
					return -27.91f;
				case 15:
					return -99.14f;
			}
			break;
	}
	return 0f;
}

void func_914(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return;
	}
	iVar0 = __LIB_1__::func_875(iParam0);
	bVar1 = true;
	if (iVar0 < iParam1)
	{
		bVar1 = false;
	}
	if (iVar0 > iParam2)
	{
		bVar1 = false;
	}
	fVar2 = __LIB_0__::func_665(Global_35, iParam0, 1, 1);
	if (fVar2 > 20f)
	{
		bVar1 = false;
	}
	if (fVar2 > 30f)
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, 1.75f, 0, -1082130432 /* Float: -1f */, 0);
	}
	else if (bVar1)
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, 3f, 0, -1082130432 /* Float: -1f */, 0);
	}
	else
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, 2.5f, 0, -1082130432 /* Float: -1f */, 0);
	}
}

void func_915(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return;
	}
	iVar0 = __LIB_1__::func_875(iParam0);
	bVar1 = true;
	if (iVar0 < iParam1)
	{
		bVar1 = false;
	}
	if (iVar0 > iParam2)
	{
		bVar1 = false;
	}
	fVar2 = __LIB_0__::func_665(Global_35, iParam0, 1, 1);
	if (fVar2 > 20f)
	{
		bVar1 = false;
	}
	if (bVar1)
	{
		__LIB_6__::func_713(iParam0, fParam3, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 20f, 30f, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
	}
	else
	{
		__LIB_6__::func_713(iParam0, fParam4, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 20f, 30f, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
	}
}

void func_916()
{
	PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), Local_15.f_307[0]);
	if (PED::IS_PED_GROUP_MEMBER(Local_15.f_307[0], __LIB_0__::func_110(), 1))
	{
		__LIB_1__::func_640(7);
	}
}

int func_917()
{
	if (Local_15 >= 3 || (Local_15 == 2 && Local_15.f_2 >= 3))
	{
		return 1;
	}
	return 0;
}

void func_918()
{
	float fVar0;
	if (Local_15.f_391 <= 3 && Local_15 == 1)
	{
		fVar0 = 9f;
	}
	else if (Local_15.f_391 <= 3)
	{
		fVar0 = 6f;
	}
	else
	{
		fVar0 = 3f;
	}
	if (!__LIB_0__::func_394(Global_35, Local_15.f_307[2], 0))
	{
		if (__LIB_0__::func_394(Local_15.f_307[0], Local_15.f_307[1], 0))
		{
			__LIB_1__::func_283(&(Local_15.f_78), 0);
		}
		if (__LIB_1__::func_285(&(Local_15.f_78), fVar0) && !Local_15.f_103)
		{
			__LIB_0__::func_37(&(Local_15.f_78));
			func_523(3);
			Local_15.f_103 = 1;
		}
	}
	else
	{
		__LIB_0__::func_37(&(Local_15.f_78));
		Local_15.f_103 = 0;
	}
}

void func_919(float fParam0, bool bParam1, float fParam2)
{
	if (__LIB_0__::func_27(Local_15.f_631, 1048576))
	{
		return;
	}
	if (__LIB_0__::func_394(Global_35, Local_15.f_307[2], 0))
	{
		if (__LIB_0__::func_665(Global_35, Local_15.f_307[0], 1, 1) >= fParam0 || (((bParam1 && Local_15.f_391 < 4) && __LIB_0__::func_394(Local_15.f_307[0], Local_15.f_307[1], 0)) && __LIB_0__::func_94(Local_15.f_307[0], Local_15.f_398, 1) < Local_15.f_406))
		{
			__LIB_1__::func_283(&(Local_15.f_81), 0);
			if (__LIB_1__::func_285(&(Local_15.f_81), fParam2) && !Local_15.f_104)
			{
				__LIB_0__::func_37(&(Local_15.f_81));
				func_523(4);
				Local_15.f_104 = 1;
			}
		}
		else
		{
			__LIB_0__::func_37(&(Local_15.f_81));
			Local_15.f_104 = 0;
		}
	}
	else
	{
		__LIB_0__::func_37(&(Local_15.f_81));
		Local_15.f_104 = 0;
	}
}

void func_929(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	switch (Local_15.f_591[iParam1])
	{
		case 0:
			if (!Local_15.f_273[iParam0])
			{
				fVar0 = __LIB_0__::func_665(Global_35, Local_15.f_307[iParam0], 1, 1);
				fVar1 = __LIB_0__::func_665(Local_15.f_307[0], Local_15.f_307[iParam0], 1, 1);
				if (fVar0 <= fVar1)
				{
					uVar2 = Global_35;
				}
				else
				{
					uVar2 = Local_15.f_307[0];
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(Local_15.f_307[iParam0], uVar2, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_307[iParam0], true);
				if (Local_15.f_411 == 71)
				{
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 221.952f, 284.9495f, 115.0796f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 225.8707f, 277.5257f, 113.3502f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 229.4665f, 268.6213f, 111.7853f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 185.5722f, 316.6935f, 117.6952f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 192.271f, 313.4504f, 117.3464f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 199.1266f, 308.683f, 116.8148f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 206.3362f, 302.603f, 116.6264f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 211.787f, 294.5841f, 116.0735f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 216.5363f, 285.7721f, 115.2834f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 219.6203f, 278.4529f, 114.0722f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 222.559f, 272.166f, 112.7907f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 224.1677f, 265.703f, 111.7983f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 227.1058f, 255.6099f, 110.1196f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 231.3904f, 244.4538f, 108.2712f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 233.539f, 232.5551f, 106.4247f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 230.9275f, 218.565f, 104.552f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 221.9434f, 208.5514f, 103.8962f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 208.5521f, 200.72f, 104.3427f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 226.0142f, 261.1942f, 111.0221f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 225.5112f, 261.2996f, 111.0603f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 229.6621f, 250.0518f, 109.1628f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 232.8613f, 238.6351f, 107.4128f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 232.9552f, 225.2942f, 105.4044f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 226.8885f, 213.0155f, 104.2036f, -1082130432 /* Float: -1f */);
					TASK::_0xE8F1A5B4CED3725A(Local_15.f_307[iParam0], 215.4174f, 204.2863f, 103.814f, -1082130432 /* Float: -1f */);
				}
				Local_15.f_273[iParam0] = 1;
			}
			if (func_572())
			{
				TASK::CLEAR_PED_TASKS(Local_15.f_307[iParam0], true, false);
				Local_15.f_273[iParam0] = 0;
				func_1226(iParam1, 2);
			}
			else if (!ENTITY::IS_ENTITY_IN_VOLUME(Local_15.f_307[iParam0], Local_15.f_53[14], true, 0))
			{
				TASK::CLEAR_PED_TASKS(Local_15.f_307[iParam0], true, false);
				Local_15.f_273[iParam0] = 0;
				func_1226(iParam1, 1);
			}
			break;
		case 1:
			if (!Local_15.f_273[iParam0])
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_15.f_307[iParam0], func_1227(), 3f, -1, 0.25f, 1048580, 40000f);
				Local_15.f_273[iParam0] = 1;
			}
			if (func_572())
			{
				TASK::CLEAR_PED_TASKS(Local_15.f_307[iParam0], true, false);
				Local_15.f_273[iParam0] = 0;
				func_1226(iParam1, 2);
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(Local_15.f_307[iParam0], Local_15.f_53[15], true, 0))
			{
				TASK::CLEAR_PED_TASKS(Local_15.f_307[iParam0], true, false);
				Local_15.f_273[iParam0] = 0;
				func_1226(iParam1, 0);
			}
			break;
		case 2:
			if (!Local_15.f_273[iParam0])
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(Local_15.f_307[iParam0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
				Local_15.f_273[iParam0] = 1;
				func_1226(iParam1, 3);
			}
			break;
		case 3:
			break;
	}
}

void func_935(int iParam0, bool bParam1)
{
	if (Local_15.f_14 != iParam0)
	{
		Local_15.f_14 = iParam0;
	}
	if (bParam1)
	{
		Local_15.f_273[0] = 0;
	}
}

void func_940(int iParam0, bool bParam1)
{
	if (Local_15.f_13 != iParam0)
	{
		Local_15.f_13 = iParam0;
	}
	if (bParam1)
	{
		Local_15.f_273[0] = 0;
	}
}

void func_943(int iParam0)
{
	if (Local_15.f_247 != iParam0)
	{
		Local_15.f_247 = iParam0;
	}
}

int func_944()
{
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_15.f_307[17], 35, 0, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 35, 0, 0);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	PED::_0xB8DE69D9473B7593(Global_35, 1);
	if (!__LIB_0__::func_27(Local_15.f_631, 16))
	{
		PED::_0x789DABD18E9024DB(Global_35, 4, 0);
		if (!__LIB_0__::func_27(Local_15.f_631, 32))
		{
			if (PED::_0x753B15AD0FD6F3E3(Global_35) == 0)
			{
				if (MISC::_0x870708A6E147A9AD(Local_15.f_307[17], "H2_ILO_POACHER", 5f, 5f, 260, 0, 0, 0, 0, -1))
				{
					PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 297, true);
					PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 360, true);
					PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 317, true);
					PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 359, true);
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(Local_15.f_307[17], joaat("H2_ILO_POACHER"));
					__LIB_1__::func_683(&(Local_15.f_631), 32);
				}
			}
		}
		if (__LIB_17__::func_714(Local_15.f_307[17]))
		{
			if (!__LIB_0__::func_139(Local_15.f_272))
			{
				Local_15.f_272 = __LIB_4__::func_864("H2_UC_INTRRGT", joaat("INPUT_CONTEXT_Y"), 1, 0, 1, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				func_949(&(Local_15.f_272), Local_15.f_307[17]);
				__LIB_1__::func_522(Local_15.f_272, 14, 1, 1);
				__LIB_1__::func_382(Local_15.f_272, 1, 0);
				Local_15.f_273[32] = 0;
			}
			else
			{
				PED::_0x57F35552E771BE9D(Global_35, 1);
				if (__LIB_1__::func_514(Local_15.f_272, 1))
				{
					__LIB_1__::func_382(Local_15.f_272, 0, 0);
					__LIB_1__::func_221(Local_15.f_272, 0, 1);
					__LIB_1__::func_748(&(Local_15.f_272), 1, 1);
					PED::_0xEAE3B5B019C8D23F(Global_35, 4);
					PED::_0x789DABD18E9024DB(Global_35, 25, 0);
					PED::_0x789DABD18E9024DB(Local_15.f_307[17], 29, 0);
					PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 213, true);
					PED::_0xB8DE69D9473B7593(Global_35, 23);
					PED::_0xB8DE69D9473B7593(Global_35, 24);
					if (!Local_15.f_273[32])
					{
						TASK::TASK_GRAPPLE(Global_35, Local_15.f_307[17], joaat("AR_GRAPPLE_MOUNT_FROM_FRONT"), 0, 1f, 0, 0);
						Local_15.f_273[32] = 1;
					}
					PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 351, false);
					__LIB_1__::func_683(&(Local_15.f_631), 16);
					return 1;
				}
				else if (__LIB_0__::func_665(Global_35, Local_15.f_307[17], 1, 1) < 4f)
				{
					__LIB_1__::func_221(Local_15.f_272, 1, 1);
				}
				else
				{
					__LIB_1__::func_221(Local_15.f_272, 0, 1);
				}
			}
		}
		else
		{
			PED::_0x7C10221CE718AA72(Global_35, 1);
			__LIB_1__::func_748(&(Local_15.f_272), 1, 1);
		}
	}
	else
	{
		PED::_0x789DABD18E9024DB(Global_35, 25, 0);
		PED::_0x789DABD18E9024DB(Local_15.f_307[17], 25, 0);
		PED::SET_PED_CONFIG_FLAG(Local_15.f_307[17], 213, true);
		MISC::_0xE98D55C5983F2509(Local_15.f_307[17]);
		__LIB_1__::func_681(&(Local_15.f_631), 32);
		__LIB_1__::func_748(&(Local_15.f_272), 1, 1);
		if (__LIB_0__::func_27(Local_15.f_631, 16))
		{
			return 1;
		}
	}
	return 0;
}

int func_949(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_17(*uParam0);
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), 0);
		return 1;
	}
	return 0;
}

void func_951(int iParam0, int iParam1, char[4] cParam2)
{
	char* sVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	sVar0 = func_609(iParam1);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sVar0, true);
}

int func_966(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (__LIB_1__::func_25(Global_1347702[63 /*49*/].f_15, 1) || __LIB_1__::func_44(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (__LIB_0__::func_252(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (__LIB_0__::func_273(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			Jump @3420; //curOff = 1190
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (__LIB_1__::func_25(Global_1347702[134 /*49*/].f_15, 1) || __LIB_1__::func_44(Global_1347702[134 /*49*/].f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			Jump @3420; //curOff = 2245
			switch (iParam0)
			{
				case 2:
					if (__LIB_1__::func_25(Global_1835011[38 /*74*/].f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			Jump @3420; //curOff = 2319
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			Jump @3420; //curOff = 3092
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (__LIB_1__::func_198(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !__LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			Jump @3420; //curOff = 3255
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			if (bParam3 && ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iParam0)))
			{
				iVar10 = 0;
				while (iVar10 < iVar7)
				{
					if (iVar1[iVar10] == Global_40.f_4942[iParam0 /*60*/].f_3)
					{
						bVar9 = true;
						iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
					}
					iVar10++;
				}
			}
			if (!bVar9)
			{
				iVar11 = 0;
				if (iVar7 > 0 && bParam2)
				{
					iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
				}
				iVar8 = iVar1[iVar11];
			}
			if (!__LIB_1__::func_201(iParam0, iVar8))
			{
				iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
			}
			return iVar8;
		}
bool func_967(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

int func_990(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam1))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_177(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !__LIB_0__::func_272(iVar0, 0)) || (bParam3 && !__LIB_0__::func_212(iParam1)))
	{
		if (bParam2)
		{
			if (__LIB_0__::func_725(iParam1, 1) != 0)
			{
				iVar0 = func_1257(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_272(iVar0, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		__LIB_0__::func_834(iParam1, iVar0);
		__LIB_1__::func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

int func_1019(var uParam0)
{
	if (!func_561())
	{
		return 0;
	}
	if (!func_562())
	{
		return 0;
	}
	func_1292(uParam0, 0);
	func_1293();
	if (Local_15.f_411 == 71)
	{
		func_1295(uParam0, func_1294(0, 0), func_1294(0, 2), func_1294(0, 1), func_1294(0, 3));
	}
	else
	{
		func_1295(uParam0, func_1294(1, 0), func_1294(1, 2), func_1294(1, 1), func_1294(1, 3));
	}
	uParam0->f_13 = 2;
	func_236(0, 1);
	func_1296();
	Local_15.f_410 = 0;
	func_1297();
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_6__::func_813(uParam0, func_234(0), func_234(1), 0, 1);
	AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_RESTART_1");
	return 1;
}

int func_1020(var uParam0)
{
	if (!func_561())
	{
		return 0;
	}
	if (!func_562())
	{
		return 0;
	}
	func_1292(uParam0, 1);
	func_1293();
	if (Local_15.f_411 == 71)
	{
		func_1295(uParam0, func_1294(2, 0), func_1294(2, 2), func_1294(2, 1), func_1294(2, 3));
	}
	else
	{
		func_1295(uParam0, func_1294(3, 0), func_1294(3, 2), func_1294(3, 1), func_1294(3, 3));
	}
	uParam0->f_13 = 2;
	func_236(1, 1);
	func_1296();
	Local_15.f_410 = 0;
	func_1297();
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_6__::func_813(uParam0, func_234(1), func_234(2), 1, 2);
	AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_RESTART_2");
	return 1;
}

int func_1021(var uParam0)
{
	if (!func_561())
	{
		return 0;
	}
	if (!func_562())
	{
		return 0;
	}
	func_1292(uParam0, 1);
	func_1293();
	if (Local_15.f_411 == 71)
	{
		func_1295(uParam0, func_1294(4, 0), func_1294(4, 2), func_1294(4, 1), func_1294(4, 3));
	}
	else
	{
		func_1295(uParam0, func_1294(5, 0), func_1294(5, 2), func_1294(5, 1), func_1294(5, 3));
	}
	func_236(2, 1);
	func_1296();
	Local_15.f_410 = 0;
	TASK::TASK_STAND_STILL(Local_15.f_307[0], -1);
	func_1297();
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_6__::func_813(uParam0, func_234(2), func_234(3), 2, 3);
	AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_RESTART_4");
	return 1;
}

int func_1022(var uParam0)
{
	if (!func_562())
	{
		return 0;
	}
	if (!func_1298())
	{
		return 0;
	}
	func_1292(uParam0, 1);
	func_1293();
	if (Local_15.f_411 == 71)
	{
		func_1295(uParam0, func_1294(6, 0), func_1294(6, 2), func_1294(6, 1), func_1294(6, 3));
	}
	else
	{
		func_1295(uParam0, func_1294(7, 0), func_1294(7, 2), func_1294(7, 1), func_1294(7, 3));
	}
	func_236(3, 1);
	func_1296();
	Local_15.f_410 = 0;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_1__::func_681(&(Local_15.f_631), 2048);
	__LIB_6__::func_813(uParam0, func_234(3), func_234(4), 3, 4);
	AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_RESTART_5");
	return 1;
}

int func_1023(var uParam0)
{
	if (!func_562())
	{
		return 0;
	}
	if (!func_1298())
	{
		return 0;
	}
	func_1292(uParam0, 1);
	func_1293();
	func_1295(uParam0, func_1294(8, 0), func_1294(8, 2), func_1294(8, 1), func_1294(8, 3));
	func_236(3, 1);
	func_590(2, 1);
	func_1296();
	func_568(uParam0, 2);
	func_549(uParam0, 1);
	Local_15.f_410 = 1;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_1__::func_681(&(Local_15.f_631), 2048);
	__LIB_6__::func_813(uParam0, func_234(4), func_234(5), 4, 5);
	AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_RESTART_6");
	return 1;
}

int func_1024(var uParam0)
{
	if (!func_562())
	{
		return 0;
	}
	if (!func_1298())
	{
		return 0;
	}
	func_1292(uParam0, 1);
	func_1293();
	func_1295(uParam0, func_1294(9, 0), func_1294(9, 2), func_1294(9, 1), func_1294(9, 3));
	func_236(5, 1);
	func_1296();
	Local_15.f_410 = 0;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_1__::func_681(&(Local_15.f_631), 2048);
	__LIB_6__::func_813(uParam0, func_234(5), func_234(6), 5, 6);
	AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_RESTART_7");
	return 1;
}

int func_1025(var uParam0)
{
	if (!func_562())
	{
		return 0;
	}
	if (!func_1298())
	{
		return 0;
	}
	func_1292(uParam0, 1);
	func_1293();
	func_1295(uParam0, func_1294(10, 0), func_1294(10, 2), func_1294(10, 1), func_1294(10, 3));
	func_236(6, 1);
	func_1296();
	Local_15.f_410 = 0;
	TASK::TASK_STAND_STILL(Local_15.f_307[0], -1);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_1__::func_681(&(Local_15.f_631), 2048);
	__LIB_6__::func_813(uParam0, func_234(6), func_234(8), 6, 8);
	AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_RESTART_7");
	return 1;
}

int func_1026(var uParam0)
{
	if (!func_1298())
	{
		return 0;
	}
	func_1292(uParam0, 1);
	func_1295(uParam0, func_1294(12, 0), func_1294(12, 2), func_1294(12, 1), func_1294(12, 3));
	uParam0->f_13 = 2;
	func_236(10, 1);
	Local_15.f_410 = 0;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_1__::func_681(&(Local_15.f_631), 2048);
	if (!__LIB_1__::func_707(joaat("DOCUMENT_PAMPHLET_POISON_THROWING_KNIFE"), 1, 0))
	{
		func_139(joaat("DOCUMENT_PAMPHLET_POISON_THROWING_KNIFE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	return 1;
}

int func_1030(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = __LIB_0__::func_27(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!__LIB_0__::func_27(iParam1, 512) && __LIB_1__::func_280(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_IS_WEAPON_ONE_HANDED(Var4.f_4) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 32))) && (!WEAPON::_IS_WEAPON_PISTOL(Var4.f_4) || !__LIB_0__::func_27(iParam1, 16777216))) && (!WEAPON::_IS_WEAPON_REVOLVER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 33554432)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	if (__LIB_0__::func_154(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1030(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1159(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;
	func_440(iParam0, 1, 1, -142743235, 1);
	iVar34 = __LIB_1__::func_415(iParam0, &uVar18);
	__LIB_1__::func_82(iParam0, &uVar18, &iVar34, 1);
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	__LIB_0__::func_827(iParam0, &(Global_26796.f_627.f_121.f_20));
	__LIB_1__::func_798(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_440(uVar18[iVar36], 1, 1, -142743235, 1);
		switch (__LIB_0__::func_357(uVar18[iVar36]))
		{
			case -2061583405:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		__LIB_1__::func_798(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(__LIB_1__::func_710(uVar18[iVar36]), 1);
		iVar36++;
	}
	__LIB_0__::func_608(&(Global_1946804.f_1616));
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == __LIB_0__::func_780(iVar0[iVar36], iVar35))
			{
				__LIB_1__::func_798(__LIB_0__::func_998(iVar35), 1, 1);
				__LIB_0__::func_999(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!__LIB_0__::func_65(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946804.f_1497.f_1[iVar37 /*3*/] = { Global_1946804.f_1616.f_1[iVar37 /*3*/] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_1946804.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
	{
		if (!__LIB_0__::func_609(8))
		{
			if (__LIB_0__::func_241() == -2125499975)
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					__LIB_0__::func_828(Global_40.f_7729, 4096);
					__LIB_0__::func_806(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					__LIB_1__::func_811(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_26796.f_627.f_1.f_1.f_1[iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	Global_1946804.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946804.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946804.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946804.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946804.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946804.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946804.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946804.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946804.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946804.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946804.f_1616.f_1[iVar36 /*3*/] };
		iVar36++;
	}
}

void func_1164(struct<6> Param0)
{
	if (!func_1375(Param0.f_4, 1))
	{
	}
	if (!func_1375(Param0, 1))
	{
	}
	if (!func_1375(Param0.f_2, 1))
	{
	}
	if (!func_1375(Param0.f_5, 1))
	{
	}
	if (!func_1375(Param0.f_3, 1))
	{
	}
	if (!func_1375(Param0.f_1, 1))
	{
	}
}

void func_1226(int iParam0, int iParam1)
{
	Local_15.f_591[iParam0] = iParam1;
}

Vector3 func_1227()
{
	return Local_15.f_602[MISC::GET_RANDOM_INT_IN_RANGE(0, 6) /*3*/];
}

int func_1257(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = __LIB_1__::func_179(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x31C70A716CAE1FEE(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			else
			{
				if (!__LIB_0__::func_851(iParam0) && __LIB_0__::func_852(iParam0, &uVar4))
				{
					PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_725(iParam0, 1), &uVar4);
				}
				__LIB_0__::func_213(iParam0, 256, 0);
				__LIB_0__::func_234(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return __LIB_0__::func_749();
				}
				if (bParam2 && !__LIB_0__::func_86(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!__LIB_1__::func_626(iParam0, vVar0, iParam6, iParam10))
				{
					return __LIB_0__::func_749();
				}
				if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_0x31C70A716CAE1FEE(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					__LIB_0__::func_234(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/].f_124))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (bParam7)
			{
				if (!__LIB_1__::func_411(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return __LIB_0__::func_749();
				}
			}
			if ((bParam2 && !__LIB_0__::func_86(vVar0)) && !__LIB_0__::func_175(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_626(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (__LIB_0__::func_287(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				__LIB_0__::func_288(iParam0, 39, 1);
				__LIB_0__::func_213(iParam0, 8, 1);
				__LIB_0__::func_213(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			__LIB_1__::func_547(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = __LIB_0__::func_853(iParam0, __LIB_0__::func_181());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(__LIB_0__::func_725(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			__LIB_0__::func_290(iParam0, 40, 0);
			__LIB_0__::func_213(iParam0, 32, 0);
			__LIB_0__::func_234(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return __LIB_0__::func_749();
}

void func_1292(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			if (__LIB_0__::func_272(Local_15.f_307[2], 0))
			{
				PED::_SET_PED_ON_MOUNT(Global_35, Local_15.f_307[2], -1, true);
			}
		}
		if (__LIB_0__::func_272(Local_15.f_307[0], 0))
		{
			if (__LIB_0__::func_272(Local_15.f_307[1], 0))
			{
				PED::_SET_PED_ON_MOUNT(Local_15.f_307[0], Local_15.f_307[1], -1, true);
			}
		}
	}
	else
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			if (PED::GET_MOUNT(Global_35) != 0)
			{
				PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
			}
		}
		if (__LIB_0__::func_272(Local_15.f_307[0], 0))
		{
			if (PED::GET_MOUNT(Local_15.f_307[0]) != 0)
			{
				PED::_REMOVE_PED_FROM_MOUNT(Local_15.f_307[0], true, false);
			}
		}
	}
}

void func_1293()
{
	if (__LIB_0__::func_399(Local_15.f_307[0], 1, 2, 0) != joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"))
	{
		__LIB_1__::func_766(Local_15.f_307[0], joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"), 0, 0, 2, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
}

struct<4> func_1294(int iParam0, int iParam1)
{
	return func_1445(iParam0, iParam1);
}

void func_1295(var uParam0, struct<4> Param1, struct<4> Param5, struct<4> Param9, struct<4> Param13)
{
	func_1446(Global_35, Param1, 2, 1073741824 /* Float: 2f */);
	func_1446(Local_15.f_307[0], Param5, 2, 1073741824 /* Float: 2f */);
	func_1446(Local_15.f_307[2], Param9, 2, 1073741824 /* Float: 2f */);
	func_1446(Local_15.f_307[1], Param13, 2, 1073741824 /* Float: 2f */);
}

void func_1296()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 41)
	{
		Local_15.f_204[iVar0] = 0;
		iVar0++;
	}
}

void func_1297()
{
	struct<4> Var0;
	int iVar4;
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_375))
	{
		ENTITY::DELETE_ENTITY(&(Local_15.f_375));
	}
	if (PED::_0x608BC6A6AACD5036(&Var0, Local_15.f_307[2], 4, 0))
	{
		iVar4 = Var0.f_3;
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, true, true);
			ENTITY::DELETE_ENTITY(&iVar4);
		}
	}
}

bool func_1298()
{
	int iVar0;
	if (func_1447() && !__LIB_0__::func_27(Local_15.f_631, 2048))
	{
		func_1297();
		__LIB_1__::func_683(&(Local_15.f_631), 2048);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_375))
	{
		Local_15.f_375 = OBJECT::CREATE_OBJECT(func_595(5), ENTITY::GET_ENTITY_COORDS(Local_15.f_307[2], true, false), false, true, false, false, true);
		return false;
	}
	if (!TASK::_0x0CCFE72B43C9CF96(Local_15.f_375))
	{
		iVar0 = ENTITY::_GET_OPTIMAL_CARRY_CONFIG(Local_15.f_375, 0);
		TASK::TASK_CARRIABLE(Local_15.f_375, iVar0, Local_15.f_307[2], __LIB_16__::func_36(4), 0);
		return false;
	}
	if (ENTITY::_0x61914209C36EFDDB(Local_15.f_375) != 7)
	{
		return false;
	}
	return true;
}

bool func_1375(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_703(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { __LIB_1__::func_124() };
	Var14 = { __LIB_0__::func_429(iParam0, Var10, iVar9, 0) };
	if (__LIB_1__::func_556(Var14, iParam1))
	{
		if (__LIB_0__::func_847(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_1375(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1375(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1375(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1375(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

struct<4> func_1445(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_905(iParam0, iParam1) };
	Var0.f_3 = func_906(iParam0, iParam1);
	return Var0;
}

void func_1446(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_626(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

bool func_1447()
{
	struct<4> Var0;
	int iVar4;
	if (PED::_0x608BC6A6AACD5036(&Var0, Local_15.f_307[2], 4, 0))
	{
		iVar4 = Var0.f_3;
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			return true;
		}
	}
	return false;
}

