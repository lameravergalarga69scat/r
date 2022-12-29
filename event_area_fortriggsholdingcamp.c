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
	int iLocal_15 = 0;
	struct<691> Local_16 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 9, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 2, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 10, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 26 } ;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = -1;
	var uLocal_717 = 1;
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
	var uLocal_728 = -1;
	var uLocal_729 = 1;
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
	var uLocal_740 = -1;
	var uLocal_741 = 1;
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
	var uLocal_752 = -1;
	var uLocal_753 = 1;
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
	var uLocal_764 = -1;
	var uLocal_765 = 1;
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
	var uLocal_776 = -1;
	var uLocal_777 = 1;
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
	var uLocal_788 = -1;
	var uLocal_789 = 1;
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
	var uLocal_800 = -1;
	var uLocal_801 = 1;
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
	var uLocal_812 = -1;
	var uLocal_813 = 1;
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
	var uLocal_824 = -1;
	var uLocal_825 = 1;
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
	var uLocal_836 = -1;
	var uLocal_837 = 1;
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
	var uLocal_848 = -1;
	var uLocal_849 = 1;
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
	var uLocal_860 = -1;
	var uLocal_861 = 1;
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
	var uLocal_872 = -1;
	var uLocal_873 = 1;
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
	var uLocal_884 = -1;
	var uLocal_885 = 1;
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
	var uLocal_896 = -1;
	var uLocal_897 = 1;
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
	var uLocal_908 = -1;
	var uLocal_909 = 1;
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
	var uLocal_920 = -1;
	var uLocal_921 = 1;
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
	var uLocal_932 = -1;
	var uLocal_933 = 1;
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
	var uLocal_944 = -1;
	var uLocal_945 = 1;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = -1;
	var uLocal_957 = 1;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = -1;
	var uLocal_969 = 1;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = -1;
	var uLocal_981 = 1;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = -1;
	var uLocal_993 = 1;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = -1;
	var uLocal_1005 = 1;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = -1;
	var uLocal_1017 = 1;
	var uLocal_1018 = 0;
	struct<138> Local_1019 = { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 10;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	int iLocal_1170 = 0;
	int iLocal_1171 = 0;
	int iLocal_1172[1] = { 0 };
	var uLocal_1174[1] = { 0 };
	int iLocal_1176[1] = { 0 };
	int iLocal_1178[1] = { 0 };
	var uLocal_1180[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1203[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1226 = 0;
	var uLocal_1227 = 1;
	var uLocal_1228 = 0;
	int iLocal_1229 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Local_1019.f_137 = uScriptParam_0;
	Local_1019.f_136 = 3;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	func_2(Local_1019.f_136);
	if (__LIB_16__::func_219(&Local_1019, 32))
	{
	}
	iLocal_14 = __LIB_0__::func_982(Local_1019.f_136);
	Local_16.f_4 = { -1580.656f, -907.4424f, 83.106f };
	Local_16.f_7 = { -1611.909f, -955.6115f, 83.2929f };
	Local_16.f_10 = { -1515.361f, -871.0674f, 101.3953f };
	func_5(Local_1019.f_136, Local_1019.f_137, &Local_16, &Local_1019, 0, 0);
	if (__LIB_7__::func_907(Local_1019.f_136, 128))
	{
	}
	func_7();
	while (true)
	{
		switch (iLocal_1170)
		{
			case 0:
				if (PED::_0x5C16855277819BBF() < (Local_16.f_1 + Local_16) && !__LIB_7__::func_907(Local_1019.f_136, 524288))
				{
					PED::_0xED9582B3DA8F02B4((Local_16 + Local_16.f_1));
				}
				else if (func_8())
				{
					if (__LIB_16__::func_219(&Local_1019, 32))
					{
						iLocal_1170 = 2;
					}
					else
					{
						iLocal_1170 = 1;
					}
				}
				if (__LIB_8__::func_97(0))
				{
					func_1();
				}
				break;
			case 1:
				func_10(&Local_16);
				func_11(Local_1019.f_136, 1);
				iLocal_1170 = 2;
				if (__LIB_8__::func_97(0))
				{
					func_1();
				}
				break;
			case 2:
				func_12(&Local_1019, &Local_16);
				if (!__LIB_16__::func_219(&Local_1019, 2))
				{
					if (func_13())
					{
						func_1();
					}
				}
				if (__LIB_8__::func_97(0))
				{
					func_1();
				}
				break;
		}
		if (__LIB_16__::func_219(&Local_1019, 1024))
		{
			func_1();
		}
		BUILTIN::WAIT(Local_1019.f_30);
	}
}

void func_1()
{
	func_14(Local_1019.f_136, &Local_16, &Local_1019);
	__LIB_0__::func_25(Local_1019.f_137, 4);
	__LIB_0__::func_25(Local_1019.f_137, 8);
	if (__LIB_7__::func_907(Local_1019.f_136, 128))
	{
		STREAMING::_REQUEST_IMAP(-1680050035);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	iVar0 = __LIB_7__::func_942(iParam0);
	if (!__LIB_0__::func_21(iVar0, 8))
	{
		__LIB_0__::func_24(iVar0, 8);
	}
	TASK::_0x4161648394262FDF(__LIB_7__::func_943(iParam0, __LIB_0__::func_982(iParam0)), 100f);
	__LIB_0__::func_7(&(Global_1392194[iParam0 /*10*/].f_1), 1);
}

void func_5(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	uParam3->f_136 = uParam0;
	uParam3->f_137 = iParam1;
	__LIB_18__::func_929(uParam3, 128);
	__LIB_1__::func_956(iParam1, 1);
	if (bParam5)
	{
		__LIB_4__::func_858(Global_1392194[uParam3->f_136 /*10*/].f_5, 0, 0, 0);
	}
	if (bParam4)
	{
		__LIB_3__::func_378(Global_1392194[uParam3->f_136 /*10*/].f_6, 0);
		__LIB_7__::func_948(Global_1392194[uParam3->f_136 /*10*/].f_6, 0, 0, 1, 1, 0);
	}
	bVar0 = false;
	if (iParam1 == 76)
	{
		__LIB_7__::func_949(&iVar1, &iVar2, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		__LIB_1__::func_902(iParam1, &iVar1, &iVar2, 0, 0);
	}
	iVar3 = iVar1;
	while (iVar3 <= iVar2)
	{
		if (__LIB_0__::func_29(iVar3) && !__LIB_0__::func_117(iVar3, 32))
		{
			if (!bVar0)
			{
				bVar0 = true;
			}
			__LIB_4__::func_193(iVar3);
		}
		iVar3++;
	}
	if (bVar0)
	{
		__LIB_2__::func_750(iParam1, iVar1, iVar2, 1);
	}
	if (!__LIB_16__::func_219(uParam3, 32))
	{
		PERSCHAR::_0xB173599D61FAEB31();
	}
}

int func_7()
{
	switch (iLocal_14)
	{
		case 1:
			Local_16 = 0;
			Local_16.f_1 = 0;
			break;
	}
	return 0;
}

bool func_8()
{
	switch (iLocal_1171)
	{
		case 0:
			__LIB_3__::func_284(&(Local_16.f_15));
			__LIB_3__::func_284(&(Local_16.f_369));
			func_35();
			func_36();
			iLocal_1171 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_366(&(Local_16.f_15)) || !__LIB_3__::func_366(&(Local_16.f_369)))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&(Local_16.f_690)))
			{
				return false;
			}
			if (!func_39())
			{
				return false;
			}
			return true;
	}
	return false;
}

int func_10(int iParam0)
{
	return func_42(__LIB_1__::func_977(), &(iParam0->f_690), 0, 0, 0, -1, 1);
}

void func_11(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	iVar0 = __LIB_7__::func_942(iParam0);
	if (bParam1)
	{
		__LIB_0__::func_24(iVar0, 8);
		__LIB_0__::func_7(&(Global_1392194[iParam0 /*10*/].f_1), 1);
	}
	else
	{
		__LIB_0__::func_25(iVar0, 8);
		__LIB_0__::func_516(&(Global_1392194[iParam0 /*10*/].f_1), 1);
	}
}

int func_12(var uParam0, int iParam1)
{
	if (!Global_1935630.f_12 && __LIB_1__::func_205(Global_35, Global_1392194[uParam0->f_136 /*10*/].f_5, 1, 0))
	{
		if (!__LIB_16__::func_219(uParam0, 64))
		{
			__LIB_18__::func_929(uParam0, 64);
			__LIB_8__::func_365(uParam0->f_136, 1);
			return 1;
		}
	}
	return 0;
}

bool func_13()
{
	func_45();
	func_46();
	switch (iLocal_14)
	{
		case 1:
			return func_47();
		case 2:
			return func_47();
	}
	return false;
}

void func_14(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	__LIB_18__::func_929(uParam2, 128);
	func_11(iParam0, 0);
	__LIB_1__::func_956(uParam2->f_137, 0);
	func_48(uParam2);
	__LIB_8__::func_85(iParam0, 2048);
	func_50(uParam2, 64);
	if (uParam2->f_137 == 76)
	{
		__LIB_7__::func_949(&iVar0, &iVar1, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		__LIB_1__::func_902(uParam2->f_137, &iVar0, &iVar1, 0, 0);
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		PED::SET_PED_KEEP_TASK(__LIB_2__::func_963(iVar2), true);
		iVar2++;
	}
	Global_1898092.f_26.f_7 = iVar0;
	Global_1898092.f_26.f_8 = uParam2->f_29;
	Global_1898092.f_26.f_2 = uParam2->f_136;
	Global_1898092.f_26.f_1 = uParam2->f_137;
	__LIB_7__::func_894(512);
	iVar3 = 0;
	while (iVar3 < 26)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_690[iVar3 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(iParam1->f_690[iVar3 /*12*/].f_8));
		}
		iVar3++;
	}
	if (__LIB_0__::func_139(uParam2->f_32))
	{
		__LIB_1__::func_196(&(uParam2->f_32), 1, 1);
	}
	if (__LIB_0__::func_139(uParam2->f_33))
	{
		__LIB_1__::func_196(&(uParam2->f_33), 1, 1);
	}
	if (__LIB_0__::func_139(uParam2->f_34))
	{
		__LIB_1__::func_196(&(uParam2->f_34), 1, 1);
	}
	if ((*iParam1 + iParam1->f_1) > 0)
	{
		PED::_0x7D4E70A67A651C71((*iParam1 + iParam1->f_1));
	}
	if (__LIB_0__::func_27(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP(), 1))
	{
		__LIB_8__::func_85(uParam2->f_136, 4194304);
	}
	__LIB_1__::func_539();
	if (__LIB_16__::func_219(uParam2, 65536))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		MAP::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
}

void func_35()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_67(iVar0) != 0 && TXD::_DOES_STREAMED_TXD_EXIST(func_67(iVar0)))
		{
			TXD::_REQUEST_STREAMED_TXD(func_67(iVar0), false);
		}
		iVar0++;
	}
}

void func_36()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		uLocal_1180[iVar0] = ENTITY::_0x6F3068258A499E52(func_68(), func_69(iVar0), 11);
		iVar0++;
	}
}

bool func_39()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if ((func_67(iVar0) != 0 && TXD::_DOES_STREAMED_TXD_EXIST(func_67(iVar0))) && !TXD::_HAS_STREAMED_TXD_LOADED(func_67(iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_42(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;
	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *iParam3)
	{
		iParam7 = (*iParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && ENTITY::DOES_ENTITY_EXIST((iParam3[iVar0 /*12*/])->f_8))
		{
		}
		else if ((iParam3[iVar0 /*12*/])->f_7 != 0 && !__LIB_0__::func_1((iParam3[iVar0 /*12*/])->f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED((iParam3[iVar0 /*12*/])->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((iParam3[iVar0 /*12*/])->f_9 != -1)
				{
					iVar8 = (iParam3[iVar0 /*12*/])->f_9;
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((iParam3[iVar8 /*12*/])->f_8, *(iParam3[iVar0 /*12*/])) };
					if (__LIB_0__::func_1((iParam3[iVar0 /*12*/])->f_11, 64))
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY((iParam3[iVar0 /*12*/])->f_8, (iParam3[iVar8 /*12*/])->f_8, 0, *(iParam3[iVar0 /*12*/]), (iParam3[iVar0 /*12*/])->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!__LIB_0__::func_1((iParam3[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam4, *(iParam3[iVar0 /*12*/])) };
					}
					else
					{
						vVar5 = { *(iParam3[iVar0 /*12*/]) };
					}
					if (!__LIB_0__::func_1((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						__LIB_3__::func_338(&vVar5, (iParam3[iVar0 /*12*/])->f_10);
					}
					if (__LIB_0__::func_1((iParam3[iVar0 /*12*/])->f_11, 64))
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (__LIB_0__::func_86((iParam3[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0f, 0f, (iParam3[iVar0 /*12*/])->f_3 };
					}
					else
					{
						vVar1 = { (iParam3[iVar0 /*12*/])->f_4 };
					}
					if (__LIB_0__::func_1((iParam3[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = __LIB_2__::func_709((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION((iParam3[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!__LIB_0__::func_1((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						if ((iParam3[iVar0 /*12*/])->f_10)
						{
							ENTITY::_0x9587913B9E772D29((iParam3[iVar0 /*12*/])->f_8, 0);
						}
					}
				}
				if (__LIB_0__::func_1((iParam3[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION((iParam3[iVar0 /*12*/])->f_8, true);
				}
				if (__LIB_0__::func_1((iParam3[iVar0 /*12*/])->f_11, 32))
				{
					ENTITY::SET_ENTITY_VISIBLE((iParam3[iVar0 /*12*/])->f_8, false);
				}
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((iParam3[iVar0 /*12*/])->f_8, 1);
					PHYSICS::ACTIVATE_PHYSICS((iParam3[iVar0 /*12*/])->f_8);
				}
				ENTITY::_0xA91E6CF94404E8C9((iParam3[iVar0 /*12*/])->f_8);
				vVar9 = { ENTITY::GET_ENTITY_COORDS((iParam3[iVar0 /*12*/])->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_45()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_79(iVar0);
		iVar0++;
	}
}

void func_46()
{
	int iVar0;
	iVar0 = iLocal_1226;
	func_80(iVar0);
	iLocal_1226++;
	if (iLocal_1226 >= 22)
	{
		iLocal_1226 = 0;
	}
}

int func_47()
{
	switch (iLocal_15)
	{
		case 0:
			iLocal_15 = 2;
			break;
		case 1:
			break;
		case 2:
			if (!__LIB_7__::func_907(Local_1019.f_136, 4))
			{
				__LIB_8__::func_85(Local_1019.f_136, 4);
			}
			break;
	}
	return 0;
}

void func_48(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[uParam0->f_136 /*10*/].f_6))
	{
		VOLUME::_0x6D5F9E69BA1BE783(Global_1392194[uParam0->f_136 /*10*/].f_6);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[uParam0->f_136 /*10*/].f_5))
	{
		VOLUME::_0x6D5F9E69BA1BE783(Global_1392194[uParam0->f_136 /*10*/].f_5);
	}
}

void func_50(var uParam0, int iParam1)
{
	if (!__LIB_16__::func_219(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_29 = (uParam0->f_29 - (uParam0->f_29 && iParam1));
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("UI_LETTER_SCHOOLCAMP");
		default:
			break;
	}
	return 0;
}

int func_68()
{
	return joaat("P_GRAVESTONE05X");
}

Vector3 func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1591.45f, -961.26f, 83.56f;
		case 1:
			return -1588.148f, -961.1604f, 83.8354f;
		case 2:
			return -1583.645f, -965.8244f, 83.53769f;
		case 3:
			return -1591.035f, -964.1617f, 83.24468f;
		case 4:
			return -1593.423f, -964.8287f, 82.98044f;
		case 5:
			return -1590.374f, -967.1642f, 82.86821f;
		case 6:
			return -1587.637f, -968.1431f, 82.89729f;
		case 7:
			return -1588.376f, -969.8889f, 82.52043f;
		case 8:
			return -1583.825f, -971.7471f, 82.64739f;
		case 9:
			return -1592.214f, -970.4421f, 82.05986f;
		case 10:
			return -1589.137f, -972.6917f, 82.04012f;
		case 11:
			return -1595.49f, -974.5676f, 80.81168f;
		case 12:
			return -1591.419f, -974.6935f, 81.2154f;
		case 13:
			return -1587.635f, -975.4163f, 81.6049f;
		case 14:
			return -1583.813f, -976.0167f, 81.81734f;
		case 15:
			return -1588.93f, -978.4485f, 80.66884f;
		case 16:
			return -1593.119f, -978.5884f, 80.02465f;
		case 17:
			return -1597.469f, -980.7254f, 78.69843f;
		case 18:
			return -1586.581f, -982.3893f, 79.88297f;
		case 19:
			return -1592.984f, -982.5919f, 78.92359f;
		case 20:
			return -1589.804f, -984.6898f, 78.73491f;
		case 21:
			return -1596.487f, -984.4014f, 77.89627f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_79(int iParam0)
{
	switch (iLocal_1172[iParam0])
	{
		case 0:
			if (__LIB_7__::func_908(Local_1019.f_136, __LIB_8__::func_585(iParam0)))
			{
				func_101(iParam0, 3);
			}
			else if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_1174[iParam0]))
			{
				uLocal_1174[iParam0] = TASK::CREATE_SCENARIO_POINT(func_102(iParam0), func_103(iParam0), func_104(iParam0), 0, 0, 0);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1176[iParam0]))
			{
				iLocal_1176[iParam0] = TASK::_GET_SCENARIO_POINT_ENTITY(uLocal_1174[iParam0], "PrimaryItem");
			}
			else
			{
				func_101(iParam0, 1);
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1176[iParam0]))
			{
				if (func_105(iParam0) != 0)
				{
					if (!DECORATOR::DECOR_EXIST_ON(iLocal_1176[iParam0], "letter_item"))
					{
						DECORATOR::DECOR_SET_INT(iLocal_1176[iParam0], "letter_item", func_105(iParam0));
					}
				}
				if (ENTITY::IS_ENTITY_AN_OBJECT(iLocal_1176[iParam0]))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1178[iParam0]))
					{
						iLocal_1178[iParam0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iLocal_1176[iParam0]);
					}
					else
					{
						if (func_105(iParam0) != 0)
						{
							TASK::_0xA6A76D666A281F2D(iLocal_1178[iParam0], func_105(iParam0));
						}
						if (func_67(iParam0) != 0)
						{
							OBJECT::_SET_APPLY_OBJECT_TXD(iLocal_1178[iParam0], func_67(iParam0), 0, 0);
						}
						func_101(iParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_463(func_105(iParam0), 1, 0))
			{
				__LIB_8__::func_82(Local_1019.f_136, __LIB_8__::func_585(iParam0));
				func_101(iParam0, 3);
			}
			break;
		case 3:
			break;
	}
	return 0;
}

void func_80(int iParam0)
{
	float fVar0;
	int iVar1;
	if (__LIB_0__::func_86(func_69(iParam0)))
	{
		return;
	}
	if (MISC::_0x8F4F050054005C27(&uLocal_1227, iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1203[iParam0]))
	{
		if (!ENTITY::_0x1FF441D7954F8709(uLocal_1180[iParam0]))
		{
			return;
		}
		iLocal_1203[iParam0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_1180[iParam0]));
		if (OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(iLocal_1203[iParam0], true) < 1f || FIRE::_0xA4454592DCF7C992(iLocal_1203[iParam0]))
		{
			MISC::_0xE84AAC1B22A73E99(&uLocal_1227, iParam0);
		}
		return;
	}
	fVar0 = OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(iLocal_1203[iParam0], true);
	if (fVar0 >= 1f && !FIRE::_0xA4454592DCF7C992(iLocal_1203[iParam0]))
	{
		return;
	}
	if (!ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_1203[iParam0], Global_35, 1, 1))
	{
		return;
	}
	MISC::_0xE84AAC1B22A73E99(&uLocal_1227, iParam0);
	iLocal_1229++;
	if (iLocal_1229 == 1)
	{
		iVar1 = 0;
	}
	else if ((iLocal_1229 == 3 || iLocal_1229 == 6) || iLocal_1229 == 22)
	{
		iVar1 = 1;
	}
	else
	{
		return;
	}
	__LIB_4__::func_268(iVar1, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
}

void func_101(int iParam0, int iParam1)
{
	iLocal_1172[iParam0] = iParam1;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("WORLD_PLAYER_INSPECT_LETTER_50CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
		default:
			break;
	}
	return 0;
}

Vector3 func_103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1574.754f, -924.731f, 83.607f;
		default:
			break;
	}
	return __LIB_1__::func_977();
}

float func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 94.405f;
		default:
			break;
	}
	return 0f;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NATIVE_AMERICAN_JOURNAL");
		default:
			break;
	}
	return 0;
}

