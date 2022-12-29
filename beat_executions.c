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
	struct<193> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_207 = 0;
	struct<12> Local_208[2];
	struct<32> Local_233[6];
	struct<8> Local_426 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_434[27] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_462[9] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_472 = NULL;
	char* sLocal_473 = NULL;
	vector3 vLocal_474 = { 0f, 0f, 0f };
	vector3 vLocal_477 = { 0f, 0f, 0f };
	vector3 vLocal_480 = { 0f, 0f, 0f };
	vector3 vLocal_483 = { 0f, 0f, 0f };
	int iLocal_486 = 0;
	bool bLocal_487 = false;
	int iLocal_488 = 0;
	struct<22> Local_489 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_511 = 3;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 1;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	struct<21> Local_525[6];
	struct<17> Local_652[2];
	struct<17> Local_687[2];
	char[] cLocal_722[8] = 0;
	var uLocal_723 = 0;
	int iLocal_724 = 0;
	int iLocal_725 = 0;
	int iLocal_726 = 0;
	int iLocal_727 = 0;
	int iLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = -1;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 1097859072;
	var uLocal_747 = 1000;
	var uLocal_748 = 1067450368;
	var uLocal_749 = 5000;
	var uLocal_750 = 42;
	var uLocal_751 = 1103626240;
	var uLocal_752 = 1077936128;
	var uLocal_753 = 1106247680;
	var uLocal_754 = 1103101952;
	var uLocal_755 = 1097859072;
	var uLocal_756 = 1103626240;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = -1;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 1097859072;
	var uLocal_775 = 1000;
	var uLocal_776 = 1067450368;
	var uLocal_777 = 5000;
	var uLocal_778 = 42;
	var uLocal_779 = 1103626240;
	var uLocal_780 = 1077936128;
	var uLocal_781 = 1106247680;
	var uLocal_782 = 1103101952;
	var uLocal_783 = 1097859072;
	var uLocal_784 = 1103626240;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = -1;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 1097859072;
	var uLocal_803 = 1000;
	var uLocal_804 = 1067450368;
	var uLocal_805 = 5000;
	var uLocal_806 = 42;
	var uLocal_807 = 1103626240;
	var uLocal_808 = 1077936128;
	var uLocal_809 = 1106247680;
	var uLocal_810 = 1103101952;
	var uLocal_811 = 1097859072;
	var uLocal_812 = 1103626240;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	int iLocal_821 = 0;
	bool bLocal_822 = false;
	bool bLocal_823 = false;
	var uLocal_824 = 0;
	bool bLocal_825 = false;
	bool bLocal_826 = false;
	bool bLocal_827 = false;
	bool bLocal_828 = false;
	bool bLocal_829 = false;
	bool bLocal_830 = false;
	bool bLocal_831 = false;
	bool bLocal_832 = false;
	bool bLocal_833 = false;
	bool bLocal_834 = false;
	bool bLocal_835 = false;
	bool bLocal_836 = false;
	int iLocal_837 = 0;
	bool bLocal_838 = false;
	bool bLocal_839 = false;
	bool bLocal_840 = false;
	bool bLocal_841 = false;
	bool bLocal_842 = false;
	int iLocal_843 = 0;
	var uLocal_844 = 0;
	float fLocal_845 = 0f;
	float fLocal_846 = 0f;
	float fLocal_847 = 0f;
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
	int iLocal_884[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_891 = 0;
	int iLocal_892 = 0;
	var uLocal_893[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
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
	sLocal_472 = "IDLE";
	sLocal_473 = "script_re@EXECUTION@IDLE";
	cLocal_722 = "Executions";
	fLocal_847 = 0.65f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_841 = true;
	}
	if (!bLocal_841)
	{
		Local_14.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_14.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		uLocal_723 = uLocal_723;
		__LIB_3__::func_368(&Local_14, 1);
		__LIB_3__::func_302(&(Local_14.f_5), 0);
		__LIB_2__::func_50(&(Local_14.f_5), 1);
		__LIB_2__::func_105(&(Local_14.f_5), 1);
		__LIB_2__::func_51(&(Local_14.f_5), 1);
		__LIB_2__::func_634(&(Local_14.f_5), 1);
		__LIB_2__::func_104(&(Local_14.f_5), 1);
		__LIB_3__::func_387(&(Local_14.f_5), 1);
		__LIB_2__::func_715(&(Local_14.f_5), 1);
		__LIB_2__::func_251(&(Local_14.f_5), 1);
		__LIB_3__::func_230(&(Local_14.f_5), 1);
		__LIB_2__::func_662(&(Local_14.f_5), 1);
		__LIB_2__::func_507(&(Local_14.f_5), 500);
		__LIB_2__::func_698(uLocal_893[3], 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 80f, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
		__LIB_3__::func_302(&uLocal_729, 0);
		__LIB_3__::func_333(&uLocal_729, 1);
		__LIB_3__::func_407(&uLocal_729, 20f);
		__LIB_3__::func_302(&uLocal_757, 0);
		__LIB_2__::func_50(&uLocal_757, 1);
		__LIB_2__::func_52(&uLocal_757, 1);
		__LIB_3__::func_302(&uLocal_785, 0);
		__LIB_2__::func_52(&uLocal_785, 1);
		func_20();
		func_21();
		func_22();
		func_23();
		func_24();
		func_25();
	}
	Local_426 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_426.f_4, 64, "PBL_BASE", false, true);
	while (true)
	{
		__LIB_2__::func_265(bLocal_841, 3208, 0);
		if (bLocal_841)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_726)
			{
				case 0:
					if (func_28())
					{
						iLocal_726 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_454(&Local_14, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						iLocal_821 = __LIB_0__::func_979(Local_14.f_51);
						func_31(&Local_14, &iLocal_821, &(Local_14.f_51.f_4));
						func_32(iLocal_821);
						__LIB_3__::func_352(&Local_14, 2);
						__LIB_2__::func_165(vLocal_474, 20f, 0, 0, 5);
						if (!__LIB_0__::func_86(vLocal_477))
						{
							__LIB_2__::func_165(vLocal_477, 20f, 0, 0, 5);
							if (VOLUME::_DOES_VOLUME_EXIST(iLocal_486))
							{
								func_36(iLocal_486);
							}
						}
						bLocal_826 = true;
						__LIB_3__::func_414(&uLocal_818, Local_14.f_51, 8f, 1, 37, 0);
						if (!__LIB_0__::func_86(vLocal_480))
						{
							__LIB_3__::func_414(&uLocal_819, vLocal_480, 8f, 1, 37, 0);
						}
						__LIB_3__::func_414(&uLocal_820, Local_14.f_51, 5f, 2, 2, 0);
						iLocal_726 = 3;
					}
					else if (Local_14.f_160)
					{
						func_26();
					}
					break;
				case 3:
					if (func_38())
					{
						iLocal_726 = 4;
					}
					break;
				case 4:
					if (!__LIB_3__::func_466(&Local_14, &uLocal_893, iLocal_523, 0, 1, 0, 1, 0))
					{
						func_26();
					}
					if (iLocal_725 >= 5 && !bLocal_822)
					{
						if (func_40(uLocal_893[0], 0, &uLocal_757, &iLocal_728, 0, 0) || func_40(uLocal_893[1], 0, &uLocal_757, &iLocal_728, 0, 0))
						{
							bLocal_822 = true;
							__LIB_2__::func_504(uLocal_893[1], 0);
							__LIB_2__::func_478(uLocal_893[1], Global_35, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_SHOUTED_CLEAR"), 1, 0, 0);
							__LIB_2__::func_526(&Local_687, 0, 0);
							iLocal_725 = 7;
						}
					}
					if (!Local_14.f_46)
					{
						if (PED::IS_PED_ON_MOUNT(Global_35))
						{
							iLocal_901 = PED::GET_MOUNT(Global_35);
							if (iLocal_901 == uLocal_893[4] || iLocal_901 == uLocal_893[5])
							{
								Local_14.f_5.f_10 = uLocal_893[3];
								func_44(0, 0);
							}
						}
						if (func_40(uLocal_893[0], 0, &uLocal_757, &iLocal_728, 0, 0) || func_40(uLocal_893[1], 0, &uLocal_757, &iLocal_728, 0, 0))
						{
							if (!Local_14.f_48)
							{
								__LIB_3__::func_426(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
							}
							func_44(1, 0);
							if (iLocal_725 >= 5)
							{
								__LIB_3__::func_465(4, 0, 0, 0, uLocal_893[1], 0, 1065353216 /* Float: 1f */, 0);
							}
							bLocal_822 = true;
						}
						else if (func_40(uLocal_893[2], 0, &(Local_14.f_5), &iLocal_728, 0, 0) || func_40(uLocal_893[3], 0, &(Local_14.f_5), &iLocal_728, 0, 0))
						{
							if (!Local_14.f_48)
							{
								__LIB_3__::func_426(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
							}
							func_44(0, 0);
						}
						func_47();
					}
					if (func_40(uLocal_893[4], 0, &(Local_14.f_5), &iLocal_728, 0, 0) || func_40(uLocal_893[5], 0, &(Local_14.f_5), &iLocal_728, 0, 0))
					{
						if (iLocal_728 != 64 && iLocal_728 != 8)
						{
							func_48();
							if (iLocal_728 == 2)
							{
								if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[5]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_893[5], false);
								}
								if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[4]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_893[4], false);
								}
							}
							if (!Local_14.f_46)
							{
								func_44(0, 0);
							}
						}
					}
					if (func_49())
					{
						Local_14.f_50 = 1;
						func_26();
					}
					if (__LIB_3__::func_431(&Local_14, &uLocal_893, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						bLocal_841 = true;
					}
					break;
			}
			BUILTIN::WAIT(Local_14.f_158);
		}
	}
}

void func_20()
{
	int iVar0;
	iLocal_821 = __LIB_1__::func_898();
	func_31(&Local_14, &iLocal_821, &(Local_14.f_51.f_4));
	iVar0 = __LIB_3__::func_390(18, 2, 0);
	iLocal_523 = iVar0;
}

void func_21()
{
	sLocal_434[2] = "RE_EX_SWM_V1_VICTIMA_BEG";
	sLocal_434[3] = "RE_EX_SWM_V1_EXPLAIN";
	sLocal_434[4] = "RE_EX_SWM_V1_KILLED_VICTIMA";
	sLocal_434[5] = "RE_EX_SWM_V1_KILL_VICTIMB";
	sLocal_434[7] = "RE_EX_SWM_V2_KILL_RUNNER";
	sLocal_434[6] = "RE_EX_SWM_V1_VICTIMB_BEG";
	sLocal_434[13] = "RE_EX_SWM_V2_RUN";
	sLocal_434[23] = "RE_EX_SWM_ALL_GREET_RAIDERS";
	if (iLocal_523 == 0)
	{
		sLocal_434[0] = "RE_EX_SWM_V1_INTRO_A";
		sLocal_434[1] = "RE_EX_SWM_V1_INTRO_B";
		sLocal_434[14] = "RE_EX_SWM_V1_MOUTH_SHUT";
		sLocal_434[8] = "RE_EX_SWM_V1_AGGRO";
		sLocal_434[9] = "RE_EX_SWM_V1_AGGRO_FEUD";
		if (__LIB_3__::func_628(0))
		{
			sLocal_434[10] = "RE_EX_SWM_V1_THANK_SICK";
		}
		else
		{
			sLocal_434[10] = "RE_EX_SWM_V1_THANK";
		}
		sLocal_434[12] = "RE_EX_SWM_V1_GO_AWAY";
		sLocal_434[11] = "RE_EX_SWM_V1_KILLED";
		sLocal_434[19] = "RE_EX_SWM_V1_EXIT_KILL";
		sLocal_434[22] = "RE_EX_SWM_V1_GREET_RESPONSE_VIC";
		sLocal_434[24] = "RE_EX_SWM_V1_ANTAGONIZE_RESPONSE_VIC";
		sLocal_434[25] = "RE_EX_SWM_V1_GREET_VIC";
		sLocal_434[26] = "RE_EX_SWM_V1_ANTAGONIZE_VIC";
		sLocal_434[15] = "RE_EX_SWM_V1_ANTAGONIZE_GANG";
		sLocal_434[17] = "RE_EX_SWM_V1_DEFUSE";
		sLocal_434[16] = "RE_EX_SMW_V1_INTERVENE";
	}
	else
	{
		sLocal_434[0] = "RE_EX_SWM_V2_INTRO";
		sLocal_434[14] = "RE_EX_SWM_V2_MOUTH_SHUT";
		sLocal_434[8] = "RE_EX_SWM_V2_AGGRO";
		sLocal_434[9] = "RE_EX_SWM_V2_AGGRO_FEUD";
		sLocal_434[10] = "RE_EX_SWM_V2_THANK";
		sLocal_434[12] = "RE_EX_SWM_V2_GO_AWAY";
		sLocal_434[11] = "RE_EX_SWM_V2_KILLED";
		sLocal_434[20] = "RE_EX_SWM_V2_WHERE_HE_GOING";
		sLocal_434[21] = "RE_EX_SWM_V2_WHERE_YOU_GOING";
		sLocal_434[22] = "RE_EX_SWM_V2_GREET_RESPONSE_VIC";
		sLocal_434[24] = "RE_EX_SWM_V2_ANTAGONIZE_RESPONSE_VIC";
		sLocal_434[15] = "RE_EX_SWM_V2_ANTAGONIZE_GANG";
		sLocal_434[17] = "RE_EX_SWM_V2_DEFUSE";
		sLocal_434[16] = "RE_EX_SMW_V2_INTERVENE";
		sLocal_434[25] = "RE_EX_SWM_V2_GREET_VIC";
		sLocal_434[26] = "RE_EX_SWM_V2_ANTAGONIZE_VIC";
	}
}

void func_22()
{
	Local_233[1 /*32*/].f_1 = joaat("RE_EXECUTIONS_MALES_01");
	Local_233[1 /*32*/] = 4;
	Local_233[1 /*32*/].f_2 = 1;
	if (iLocal_523 == 0)
	{
		StringCopy(&(Local_233[1 /*32*/].f_23), "0283_A_M_M_NbxSlums_01_WHITE_01", 64);
		Local_233[1 /*32*/].f_3 = 1299912038;
	}
	else
	{
		StringCopy(&(Local_233[1 /*32*/].f_23), "0788_A_M_M_LowerSDTownfolk_01_WHITE_01", 64);
		Local_233[1 /*32*/].f_3 = -1656413848;
	}
	__LIB_3__::func_478(&(Local_233[1 /*32*/].f_22));
	Local_233[2 /*32*/].f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
	Local_233[2 /*32*/].f_3 = -1807084761;
	Local_233[2 /*32*/] = 4;
	Local_233[2 /*32*/].f_2 = 1;
	StringCopy(&(Local_233[2 /*32*/].f_23), "0179_G_M_Y_UniExConfeds_01_WHITE_03", 64);
	__LIB_3__::func_478(&(Local_233[2 /*32*/].f_22));
	Local_233[3 /*32*/].f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
	Local_233[3 /*32*/].f_3 = 592917527;
	Local_233[3 /*32*/] = 4;
	Local_233[3 /*32*/].f_2 = 1;
	StringCopy(&(Local_233[3 /*32*/].f_23), "0178_G_M_Y_UniExConfeds_01_WHITE_02", 64);
	__LIB_3__::func_478(&(Local_233[3 /*32*/].f_22));
	Local_233[0 /*32*/].f_1 = joaat("RE_EXECUTIONS_MALES_01");
	Local_233[0 /*32*/] = 4;
	Local_233[0 /*32*/].f_2 = 1;
	if (iLocal_523 == 0)
	{
		StringCopy(&(Local_233[0 /*32*/].f_23), "0918_A_M_M_Civ_Poor_White_AVOID_01", 64);
		Local_233[0 /*32*/].f_3 = 2066870483;
	}
	else
	{
		Local_233[0 /*32*/].f_3 = -1349597701;
	}
	__LIB_3__::func_478(&(Local_233[0 /*32*/].f_22));
	Local_233[4 /*32*/].f_1 = __LIB_2__::func_185(2, 0, 0);
	Local_233[4 /*32*/].f_6 = { -3.88346f, 6.07716f, 1.20606f };
	Local_233[4 /*32*/].f_9 = 94.0907f;
	Local_233[5 /*32*/].f_1 = __LIB_2__::func_185(2, 1, 0);
	Local_233[5 /*32*/].f_6 = { -4.35656f, 4.24896f, 1.24306f };
	Local_233[5 /*32*/].f_9 = 96.2208f;
	if (__LIB_2__::func_117(16))
	{
		Local_208[0 /*12*/].f_7 = joaat("S_INTERACT_LANTERN02X");
		Local_208[1 /*12*/].f_7 = joaat("S_INTERACT_LANTERN02X");
	}
}

void func_23()
{
	Local_426.f_4 = "script@beat@wilderness@execution@mainscene";
	sLocal_462[0] = "PBL_BASE";
	sLocal_462[1] = "PBL_EXIT_QUICK";
	sLocal_462[2] = "PBL_EXIT_RUN_LEFT";
	sLocal_462[3] = "PBL_EXIT_RUN_RIGHT";
	sLocal_462[4] = "PBL_LEFT_ONLY";
	sLocal_462[5] = "PBL_RIGHT_ONLY";
	sLocal_462[6] = "PBL_ACTION";
	sLocal_462[7] = "PBL_BREAKOUT_LEFT";
	sLocal_462[8] = "PBL_BREAKOUT_RIGHT";
}

void func_24()
{
	Local_489.f_3 = Global_35;
	Local_489.f_4 = 21030;
	Local_489.f_8 = 4;
	Local_489.f_19 = 4;
	Local_489.f_21 = 4;
	Local_489.f_17 = 4;
	Local_489.f_18 = 3;
	Local_489.f_7 = 0;
}

void func_25()
{
	__LIB_3__::func_548(&(Local_652[1 /*17*/]), __LIB_2__::func_460(26), 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_548(&(Local_652[0 /*17*/]), "RE_INTER_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_652[1 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_652[0 /*17*/]), 0, 0);
}

void func_26()
{
	int iVar0;
	int iVar1;
	Local_14.f_45 = iLocal_837;
	__LIB_3__::func_380(Local_426);
	__LIB_0__::func_172(iLocal_486);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_907);
	if (bLocal_841 && !Local_14.f_50)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[2]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[4]))
			{
				TASK::TASK_MOUNT_ANIMAL(0, uLocal_893[4], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
			}
			TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1.75f, 8192, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_893[2], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[3]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[5]))
			{
				TASK::TASK_MOUNT_ANIMAL(0, uLocal_893[5], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
			}
			TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1.75f, 8192, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_893[3], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		__LIB_1__::func_864(uLocal_893[0], 1, 0);
		__LIB_1__::func_864(uLocal_893[1], 1, 0);
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_893[iVar1]))
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_893[iVar1], 318, false);
			if (__LIB_2__::func_1(uLocal_893[iVar1], 0, 1))
			{
				__LIB_2__::func_788(&(uLocal_893[iVar1]), 1, 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_893[iVar1], false);
			}
		}
		iVar1++;
	}
	if (bLocal_826)
	{
		__LIB_2__::func_161(vLocal_474, 20f, 5);
		if (!__LIB_0__::func_86(vLocal_477))
		{
			__LIB_2__::func_161(vLocal_477, 20f, 5);
		}
	}
	__LIB_3__::func_493(&Local_14, &uLocal_893, &iLocal_884, iLocal_523, iLocal_821, Local_14.f_51.f_4, 0, 1, 0, 1);
	__LIB_3__::func_264(&Local_14);
	if (Local_14.f_44)
	{
	}
	if (MAP::DOES_BLIP_EXIST(Local_14.f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(Local_14.f_51.f_6));
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_891))
	{
		MAP::REMOVE_BLIP(&iLocal_891);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_892))
	{
		MAP::REMOVE_BLIP(&iLocal_892);
	}
	__LIB_2__::func_353(&uLocal_818, 1);
	__LIB_2__::func_353(&uLocal_819, 1);
	__LIB_2__::func_353(&uLocal_820, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_28()
{
	switch (iLocal_724)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_14))
			{
				__LIB_3__::func_445(&Local_233);
				STREAMING::REQUEST_ANIM_DICT(sLocal_473);
				__LIB_2__::func_312(joaat("WORLD_HUMAN_GUARD_SCOUT"), 15, 0, 0);
				__LIB_3__::func_314(&Local_208);
				iLocal_724 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_723, cLocal_722))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_514))
			{
				return false;
			}
			if (!func_85())
			{
				return false;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_473))
			{
				return false;
			}
			if (!func_86())
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_208))
			{
				return false;
			}
			if (!AUDIO::_0xD9130842D7226045("TRE1_Sounds", 0))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_233))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_31(var uParam0, int iParam1, var uParam2)
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
			*iParam1 = 2;
			*uParam2 = 0;
			break;
		case 4:
			*iParam1 = 2;
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
	}
}

void func_32(int iParam0)
{
	Local_233[1 /*32*/].f_6 = { Local_14.f_51 };
	Local_233[2 /*32*/].f_6 = { Local_14.f_51 };
	Local_233[3 /*32*/].f_6 = { Local_14.f_51 };
	Local_233[0 /*32*/].f_6 = { Local_14.f_51 };
	switch (iParam0)
	{
		case 11:
			switch (Local_14.f_51.f_4)
			{
				case 0:
					vLocal_474 = { 1496.818f, -1046.918f, 50.81212f };
					vLocal_477 = { 1591.608f, -1069.623f, 39.85f };
					iLocal_524 = 1;
					Local_233[4 /*32*/].f_6 = { 1554.675f, -1057.763f, 43.036f };
					Local_233[4 /*32*/].f_9 = 124.46f;
					Local_233[5 /*32*/].f_6 = { 1551.62f, -1057.031f, 43.3163f };
					Local_233[5 /*32*/].f_9 = 90.03f;
					Local_233[3 /*32*/].f_6 = { 1551.051f, -1050.752f, 44.4026f };
					Local_233[3 /*32*/].f_9 = -78.45f;
					iLocal_486 = VOLUME::_CREATE_VOLUME_BOX(1569.208f, -974.2819f, 43.64882f, 0f, 0f, 11.00736f, 47.09936f, 379.6051f, 11.52516f);
					break;
				case 1:
					vLocal_474 = { 1616.561f, -654.8908f, 44.1787f };
					vLocal_477 = { 1667.039f, -667.4047f, 40.43334f };
					iLocal_524 = 0;
					Local_233[4 /*32*/].f_6 = { 1676.747f, -643.3904f, 42.84343f };
					Local_233[4 /*32*/].f_9 = -75.63f;
					Local_233[5 /*32*/].f_6 = { 1670.807f, -642.6371f, 42.41985f };
					Local_233[5 /*32*/].f_9 = -75.63f;
					Local_233[3 /*32*/].f_6 = { 1665.766f, -643.4434f, 42.32386f };
					Local_233[3 /*32*/].f_9 = -12.35f;
					iLocal_486 = VOLUME::_CREATE_VOLUME_BOX(1673.491f, -668.6485f, 47.12703f, 0f, 0f, 8.25f, 79.53418f, 41.11226f, 14.86971f);
					break;
			}
			break;
		case 0:
			switch (Local_14.f_51.f_4)
			{
				case 0:
					vLocal_474 = { 2012.309f, -1482.866f, 42.12437f };
					vLocal_477 = { 2134.174f, -1448.317f, 39.2394f };
					vLocal_480 = { 2088.293f, -1376f, 42.4435f };
					iLocal_524 = 0;
					Local_233[4 /*32*/].f_6 = { 2077.929f, -1499.348f, 40.5437f };
					Local_233[4 /*32*/].f_9 = 90.83f;
					Local_233[5 /*32*/].f_6 = { 2075.404f, -1496.35f, 40.53075f };
					Local_233[5 /*32*/].f_9 = 64.55f;
					Local_233[3 /*32*/].f_6 = { 2077.052f, -1504.177f, 40.6768f };
					Local_233[3 /*32*/].f_9 = -115.5f;
					iLocal_486 = VOLUME::_CREATE_VOLUME_BOX(2124.861f, -1485.126f, 40.86142f, 0f, 0f, -4.979704f, 46.82238f, 71.7672f, 9.666168f);
					break;
				case 1:
					vLocal_474 = { 1946.623f, -1628.336f, 40.55261f };
					iLocal_524 = 1;
					Local_233[4 /*32*/].f_6 = { 1947.794f, -1632.182f, 40.50011f };
					Local_233[4 /*32*/].f_9 = -10.96f;
					Local_233[5 /*32*/].f_6 = { 1948.552f, -1633.973f, 40.49999f };
					Local_233[5 /*32*/].f_9 = -30.41f;
					Local_233[3 /*32*/].f_6 = { 1956.042f, -1638.622f, 40.5867f };
					Local_233[3 /*32*/].f_9 = 185.1147f;
					break;
				case 2:
					vLocal_474 = { 2070.323f, -1233.496f, 40.87349f };
					vLocal_480 = { Local_14.f_51 };
					iLocal_524 = 0;
					Local_233[4 /*32*/].f_6 = { 2113.467f, -1214.153f, 40.63488f };
					Local_233[4 /*32*/].f_9 = 95.2996f;
					Local_233[5 /*32*/].f_6 = { 2106.857f, -1220.615f, 41.1969f };
					Local_233[5 /*32*/].f_9 = 98.4885f;
					Local_233[3 /*32*/].f_6 = { 2115.864f, -1219.097f, 40.7619f };
					Local_233[3 /*32*/].f_9 = -85.582f;
					break;
			}
			break;
		case 2:
			switch (Local_14.f_51.f_4)
			{
				case 0:
					vLocal_474 = { 2725.192f, 82.1049f, 49.608f };
					vLocal_477 = { 2830.592f, 77.7042f, 38.9209f };
					iLocal_524 = 0;
					Local_233[5 /*32*/].f_6 = { 2816.474f, 60.4035f, 45.9099f };
					Local_233[5 /*32*/].f_9 = 98.3f;
					Local_233[4 /*32*/].f_6 = { 2811.874f, 62.2273f, 46.5865f };
					Local_233[4 /*32*/].f_9 = 90f;
					Local_233[3 /*32*/].f_6 = { 2822.082f, 59.5239f, 44.574f };
					Local_233[3 /*32*/].f_9 = 307.7961f;
					vLocal_483 = { 2959.834f, 504.9991f, 44.7689f };
					iLocal_486 = VOLUME::_CREATE_VOLUME_BOX(2835.997f, 76.19143f, 42.61654f, 0f, 0f, 36.51506f, 18.58307f, 108.0403f, 7.858337f);
					bLocal_487 = true;
					iLocal_488 = 1;
					break;
				case 1:
					vLocal_474 = { 2637.999f, -552.2529f, 41.7883f };
					vLocal_477 = { 2636.124f, -591.0876f, 42.1544f };
					iLocal_524 = 0;
					Local_233[4 /*32*/].f_6 = { 2684.563f, -570.5827f, 40.5801f };
					Local_233[4 /*32*/].f_9 = 28.3f;
					Local_233[5 /*32*/].f_6 = { 2681.761f, -571.3168f, 40.9211f };
					Local_233[5 /*32*/].f_9 = 80f;
					Local_233[3 /*32*/].f_6 = { 2677.699f, -576.6469f, 41.2382f };
					Local_233[3 /*32*/].f_9 = -105f;
					iLocal_486 = VOLUME::_CREATE_VOLUME_BOX(2686.22f, -581.4628f, 41.23904f, 0f, 0f, -7.249999f, 41.90339f, 55.43217f, 13.66168f);
					bLocal_487 = true;
					iLocal_488 = 1;
					break;
				case 2:
					vLocal_474 = { 2608.91f, -113.528f, 44.3773f };
					vLocal_477 = { 2542.846f, -245.3204f, 41.4327f };
					iLocal_524 = 0;
					Local_233[4 /*32*/].f_6 = { 2642.108f, -217.3999f, 43.9729f };
					Local_233[4 /*32*/].f_9 = -5.3f;
					Local_233[5 /*32*/].f_6 = { 2643.292f, -215.3242f, 43.8639f };
					Local_233[5 /*32*/].f_9 = 30f;
					Local_233[3 /*32*/].f_6 = { 2631.2f, -214.0325f, 43.555f };
					Local_233[3 /*32*/].f_9 = 0f;
					iLocal_486 = VOLUME::_CREATE_VOLUME_BOX(2778.821f, -296.9896f, 49.68966f, 0f, 0f, -27.75f, 119.5313f, 175.5721f, 18.16137f);
					bLocal_487 = true;
					iLocal_488 = 1;
					break;
			}
			break;
	}
}

void func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar4 = ENTITY::_0x886171A12F400B89(iParam0, iVar0, 2);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar0);
		iVar2 = iVar1;
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
				if (!ENTITY::IS_ENTITY_OCCLUDED(iVar2))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iVar2))
					{
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(&iVar2);
			}
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

bool func_38()
{
	struct<13> Var0;
	int iVar23;
	switch (iLocal_908)
	{
		case 0:
			iLocal_908 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_467(Local_14.f_51, 0f, &Local_233, &uLocal_893, 1, 0, -1, 1))
			{
				return false;
			}
			Var0.f_1 = 10;
			Var0.f_12 = 10;
			Var0 = 1;
			Var0.f_12[0] = 1;
			iVar23 = 0;
			while (iVar23 < 6)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_893[iVar23]))
				{
					if (iVar23 <= 1)
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[iVar23]))
						{
							PED::SET_PED_CONFIG_FLAG(uLocal_893[iVar23], 138, true);
							PED::SET_PED_CONFIG_FLAG(uLocal_893[iVar23], 318, true);
						}
						if (iVar23 == 0)
						{
							Var0.f_1[0] = joaat("CONSUMABLE_CHEWING_TOBACCO_USED");
						}
						else
						{
							Var0.f_1[0] = joaat("CONSUMABLE_TONIC_USED");
						}
						ENTITY::_0xA88E215CEB0435C0(uLocal_893[iVar23], &Var0, 536905469, 2, 3, 0);
						TASK::_0x12990818C1D35886(uLocal_893[iVar23], 0, 1065353216 /* Float: 1f */);
					}
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_893[iVar23], 1);
				}
				iVar23++;
			}
			if (Local_208[0 /*12*/].f_7 != 0)
			{
				Local_208[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_208[0 /*12*/].f_7, Local_14.f_51, true, true, false, false, true);
				Local_208[1 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_208[1 /*12*/].f_7, Local_14.f_51, true, true, false, false, true);
				if (ENTITY::DOES_ENTITY_EXIST(Local_208[0 /*12*/].f_8))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_208[0 /*12*/].f_8, uLocal_893[4], PED::GET_PED_BONE_INDEX(uLocal_893[4], 62111), -0.32f, 0.05f, -0.22f, 0f, 53f, 0f, false, false, false, false, 2, true, true, false);
					ENTITY::SET_ENTITY_LOD_DIST(Local_208[0 /*12*/].f_8, 150);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_208[1 /*12*/].f_8))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_208[1 /*12*/].f_8, uLocal_893[5], PED::GET_PED_BONE_INDEX(uLocal_893[5], 62111), -0.32f, 0.05f, -0.22f, 0f, 53f, 0f, false, false, false, false, 2, true, true, false);
					ENTITY::SET_ENTITY_LOD_DIST(Local_208[1 /*12*/].f_8, 150);
				}
			}
			__LIB_3__::func_455(&Local_14, iLocal_821, 19828);
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_893[0]))
			{
				__LIB_3__::func_873(uLocal_893[0], 28);
				ENTITY::_0x8C03CD6B5E0E85E8(uLocal_893[0], joaat("PRISONER_POOR"));
				PED::SET_PED_CONFIG_FLAG(uLocal_893[0], 265, false);
				TASK::SET_PED_PATH_MAY_ENTER_WATER(uLocal_893[0], false);
				TASK::_0x9DE63896B176EA94(uLocal_893[0], 0);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uLocal_893[0], true, 1f);
				PED::SET_PED_CONFIG_FLAG(uLocal_893[0], 388, true);
				PED::SET_PED_CONFIG_FLAG(uLocal_893[0], 317, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_893[1]))
			{
				__LIB_3__::func_873(uLocal_893[1], 28);
				ENTITY::_0x8C03CD6B5E0E85E8(uLocal_893[1], joaat("PRISONER_POOR"));
				PED::SET_PED_CONFIG_FLAG(uLocal_893[1], 265, false);
				TASK::_0x9DE63896B176EA94(uLocal_893[1], 1);
				PED::SET_PED_CONFIG_FLAG(uLocal_893[1], 388, true);
				__LIB_3__::func_285(uLocal_893[1], &Local_14, 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_893[1], 317, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_893[2]))
			{
				__LIB_3__::func_873(uLocal_893[2], 28);
				ENTITY::_0x8C03CD6B5E0E85E8(uLocal_893[2], joaat("GUNHOLDER_AVERAGE"));
				__LIB_3__::func_285(uLocal_893[2], &Local_14, 0);
				PED::SET_PED_HEARING_RANGE(uLocal_893[2], 14f);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_893[2], true, 0f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_893[3]))
			{
				__LIB_3__::func_873(uLocal_893[3], 28);
				ENTITY::_0x8C03CD6B5E0E85E8(uLocal_893[3], joaat("GUNHOLDER_AVERAGE"));
				PED::SET_PED_HEARING_RANGE(uLocal_893[3], 14f);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_893[3], 38, true);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_893[3], true, 0f);
				__LIB_3__::func_285(uLocal_893[3], &Local_14, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_893[4]))
			{
				PED::_0x931B241409216C1F(uLocal_893[2], uLocal_893[4], 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_893[4], 284, true);
				__LIB_2__::func_967(&(Local_14.f_5), uLocal_893[2], uLocal_893[4], 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_893[5]))
			{
				PED::_0x931B241409216C1F(uLocal_893[3], uLocal_893[5], 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_893[5], 284, true);
				__LIB_2__::func_967(&(Local_14.f_5), uLocal_893[3], uLocal_893[5], 0);
			}
			PED::ADD_RELATIONSHIP_GROUP("REL_REEX_RAIDERS", &iLocal_906);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_COP"), iLocal_906);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_906, joaat("REL_COP"));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_893[2], iLocal_906);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_893[3], iLocal_906);
			bLocal_832 = false;
			iLocal_908 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

int func_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return 1;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_198(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_3__::func_668(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_44(bool bParam0, bool bParam1)
{
	char* sVar0;
	Local_14.f_46 = 1;
	Local_14.f_44 = 1;
	__LIB_3__::func_462(&Local_652, 1);
	func_144(bParam1);
	if ((ENTITY::IS_ENTITY_DEAD(Local_14.f_5.f_10) || Local_14.f_5.f_10 != uLocal_893[2]) || Local_14.f_5.f_10 != uLocal_893[3])
	{
		Local_14.f_5.f_10 = func_145();
	}
	if (!bParam0)
	{
		if (Local_14.f_5.f_10 == uLocal_893[2])
		{
			sVar0 = "FIGHT_RESPONSE";
		}
		else if (Local_14.f_5.f_10 == uLocal_893[3])
		{
			sVar0 = "ARRIVAL_COMBAT_NEUTRAL";
		}
	}
	else
	{
		sVar0 = sLocal_434[8];
	}
	__LIB_2__::func_478(Local_14.f_5.f_10, Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -1050591818, 1, 0, 0);
	func_146(bParam1);
	__LIB_0__::func_325(&(iLocal_884[1]));
	__LIB_3__::func_166(&Local_14);
	iLocal_725 = 4;
}

void func_47()
{
	vector3 vVar0;
	vector3 vVar3;
	func_162();
	if ((((iLocal_725 == 1 || iLocal_725 == 7) || iLocal_725 == 4) || bLocal_830) || __LIB_0__::func_75(&uLocal_869))
	{
		return;
	}
	if (iLocal_727 == 1)
	{
		return;
	}
	PED::SET_PED_RESET_FLAG(uLocal_893[3], 42, true);
	if (__LIB_3__::func_549(uLocal_893[3], &uLocal_729, &iLocal_728, 0) || __LIB_1__::func_313(&uLocal_878, 2f))
	{
		if (!bLocal_823 && !bLocal_832)
		{
			if (__LIB_2__::func_1(uLocal_893[3], 0, 1))
			{
				PED::_0x9238A3D970BBB0A9(uLocal_893[3], 1963457635);
				PED::_0x9238A3D970BBB0A9(uLocal_893[2], 1963457635);
				PED::_0x9A4AC116CC1EEE14(uLocal_893[3]);
				PED::_0x9A4AC116CC1EEE14(uLocal_893[2]);
				bLocal_823 = true;
				AUDIO::STOP_PED_SPEAKING(uLocal_893[3], true);
				__LIB_1__::func_148(&uLocal_848);
				__LIB_1__::func_148(&uLocal_851);
				fLocal_845 = __LIB_0__::func_665(Global_35, uLocal_893[3], 0, 1);
				PED::_0x802092B07E3B1EEA(uLocal_893[3], Global_36, 3);
				TASK::CLEAR_PED_TASKS(uLocal_893[3], true, false);
				vVar0 = { __LIB_0__::func_173(Global_36 - Local_233[3 /*32*/].f_6) };
				vVar3 = { Local_233[3 /*32*/].f_6 + vVar0 * Vector(4f, 4f, 4f) };
				__LIB_2__::func_106(&vVar3, 15, 10, 0);
				PED::_0x8ACC0506743A8A5C(uLocal_893[3], joaat("INVESTIGATORCHALLENGE_COMBATSTART"), 1, -1082130432 /* Float: -1f */);
				if (__LIB_0__::func_665(Global_35, uLocal_893[3], 0, 1) < (4f + 2.5f))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_893[3], Global_35, -1, false, 1);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_905);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 5000, false, 1);
					if (__LIB_3__::func_874(ENTITY::GET_ENTITY_COORDS(uLocal_893[3], true, false), Global_36, ENTITY::GET_ENTITY_COORDS(uLocal_893[2], true, false), 3f))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_14.f_51, Local_14.f_51.f_3, 0.8858f, -1.2716f, -1.0494f), Global_35, 0.8f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					}
					else
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, vVar3, Global_35, 0.8f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					}
					TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_905);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_893[3], iLocal_905);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_905);
					bLocal_835 = true;
				}
				__LIB_3__::func_544(&(Local_525[2 /*21*/]), 0);
				__LIB_3__::func_544(&(Local_525[3 /*21*/]), 0);
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[1]))
				{
					__LIB_2__::func_360(&(Local_652[0 /*17*/]), "RE_INTER_DEFUSE");
				}
				__LIB_2__::func_411(&(Local_652[0 /*17*/]), 1, 0);
				__LIB_1__::func_471(&(Local_652[0 /*17*/]), 8);
				if (iLocal_523 == 1)
				{
					__LIB_1__::func_148(&uLocal_863);
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_884[3]))
				{
					__LIB_2__::func_73(uLocal_893[3], &(iLocal_884[3]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				}
			}
			iLocal_727 = 1;
		}
		else if (!bLocal_836 && TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_893[3], 0))
		{
			if (!Local_14.f_46)
			{
				func_44(0, 0);
			}
		}
	}
}

void func_48()
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_905);
	TASK::TASK_SMART_FLEE_COORD(0, Local_14.f_51, 15f, 3000, false, 1077936128);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_905);
	if (__LIB_2__::func_1(uLocal_893[4], 0, 1) && PED::_IS_MOUNT_SEAT_FREE(uLocal_893[4], -1))
	{
		if (!PED::IS_PED_FLEEING(uLocal_893[4]) && !__LIB_0__::func_163(uLocal_893[4], 242628503))
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_893[4], iLocal_905, 0.2f, 0.8f);
		}
	}
	if (__LIB_2__::func_1(uLocal_893[5], 0, 1) && PED::_IS_MOUNT_SEAT_FREE(uLocal_893[5], -1))
	{
		if (!PED::IS_PED_FLEEING(uLocal_893[5]) && !__LIB_0__::func_163(uLocal_893[5], 242628503))
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_893[5], iLocal_905, 0.2f, 0.8f);
		}
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_905);
}

bool func_49()
{
	int iVar0;
	int iVar1;
	func_176();
	func_177();
	func_178();
	func_179();
	func_180();
	func_181();
	func_182();
	if (__LIB_1__::func_313(&uLocal_875, 2f))
	{
		__LIB_2__::func_105(&uLocal_757, 1);
		__LIB_2__::func_51(&uLocal_757, 1);
	}
	CAM::_0xE2BB2D6A9FE2ECDE(1);
	if (iLocal_725 < 4 && __LIB_1__::func_992(Global_35, Local_14.f_51, 1) < 6400f)
	{
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	switch (iLocal_725)
	{
		case 0:
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_893[2], true, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_893[3], true, true);
			__LIB_2__::func_231(uLocal_893[2], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_893[2], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, true, false);
			__LIB_2__::func_231(uLocal_893[3], joaat("WEAPON_REPEATER_CARBINE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_893[3], joaat("WEAPON_REPEATER_CARBINE"), false, 0, true, false);
			PED::_0x9238A3D970BBB0A9(uLocal_893[2], -820192119);
			PED::_0x9238A3D970BBB0A9(uLocal_893[3], -820192119);
			func_185();
			iLocal_907 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), Local_14.f_51, 0f, 85f, 85f, -1f, -1f, -1, -1);
			iLocal_725 = 1;
			break;
		case 1:
			if (__LIB_9__::func_662(Local_14.f_51, &uLocal_813, &uLocal_844, &uLocal_824, 1f, 100f, 0, 0, 100f))
			{
				__LIB_3__::func_426(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
				__LIB_1__::func_473(uLocal_893[3], joaat("WORLD_HUMAN_GUARD_SCOUT"), -1, 0, joaat("WORLD_HUMAN_GUARD_SCOUT_MALE_C"), -1082130432 /* Float: -1f */);
				TASK::TASK_PLAY_ANIM(uLocal_893[3], sLocal_473, sLocal_472, 8f, -8f, -1, 67108881, 0f, false, 2, false, 0, false);
				__LIB_1__::func_283(&uLocal_860, 0);
				iLocal_725 = 2;
			}
			break;
		case 2:
			func_189();
			if (__LIB_3__::func_452(&Local_14, 1f, 70f, 45f, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				__LIB_2__::func_73(uLocal_893[1], &(iLocal_884[1]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
				if (iLocal_523 == 0)
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_426, sLocal_462[6], true);
				}
				else if (iLocal_524 == 0)
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_426, sLocal_462[2], true);
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_426, sLocal_462[3], true);
				}
				__LIB_2__::func_315(1515458263, uLocal_893[3], 1);
				iLocal_837 = 1;
				iLocal_725 = 3;
			}
			break;
		case 3:
			if (!bLocal_839 && ENTITY::IS_ENTITY_DEAD(uLocal_893[1]))
			{
				if (PED::IS_TRACKED_PED_VISIBLE(uLocal_893[1]))
				{
					__LIB_3__::func_465(2, 0, 0, "HONOR_EVENT_WATCHED_DEATH", uLocal_893[1], 0, 1065353216 /* Float: 1f */, 0);
				}
				__LIB_2__::func_360(&(Local_652[1 /*17*/]), "RE_INTER_ANTAGONIZE");
				bLocal_839 = true;
			}
			func_192();
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_426, "Main") && ENTITY::IS_ENTITY_DEAD(uLocal_893[1]))
			{
				func_193();
				__LIB_2__::func_411(&(Local_652[0 /*17*/]), 0, 0);
				iLocal_725 = 7;
			}
			break;
		case 4:
			func_194();
			if (func_195())
			{
				iLocal_900 = func_196();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_900))
				{
					__LIB_3__::func_465(13, 0, 0, 0, uLocal_893[1], 0, 1065353216 /* Float: 1f */, 0);
					__LIB_1__::func_148(&uLocal_866);
					func_197();
				}
				func_198();
				__LIB_1__::func_148(&uLocal_875);
				iLocal_725 = 7;
			}
			else if (!bLocal_842)
			{
				if (func_199())
				{
					func_200();
					bLocal_842 = true;
				}
			}
			break;
		case 7:
			if (__LIB_2__::func_227(0, 1, uLocal_893[3], 1) && __LIB_1__::func_313(&uLocal_878, 2f))
			{
				__LIB_2__::func_478(uLocal_893[3], Global_35, "HEADS_UP_GANG_TERRITORY", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -1050591818, 1, 0, 0);
			}
			iVar0 = func_203(&(uLocal_893[1]), &(Local_525[1 /*21*/]), 15f, &Local_687, &(Local_14.f_192), 1f, 1, 0, 0, __LIB_2__::func_340(1, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (iVar0 == 0)
			{
				__LIB_2__::func_478(Global_35, uLocal_893[1], sLocal_434[25], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_526(&Local_687, 0, 0);
				__LIB_1__::func_148(&uLocal_872);
			}
			else if (iVar0 == 1)
			{
				__LIB_2__::func_478(Global_35, uLocal_893[1], sLocal_434[26], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_526(&Local_687, 0, 0);
				bLocal_838 = true;
				__LIB_1__::func_148(&uLocal_872);
			}
			if (__LIB_1__::func_313(&uLocal_872, 3f))
			{
				if (bLocal_838)
				{
					__LIB_2__::func_478(uLocal_893[1], Global_35, sLocal_434[24], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_893[1], Global_35, sLocal_434[22], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			if ((((!bLocal_825 && !__LIB_0__::func_75(&uLocal_878)) && __LIB_2__::func_227(0, 1, uLocal_893[2], 1)) && __LIB_2__::func_227(0, 1, uLocal_893[3], 1)) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				if ((__LIB_0__::func_75(&uLocal_854) == __LIB_1__::func_285(&uLocal_854, 6.5f) && !__LIB_0__::func_75(&uLocal_869)) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(uLocal_893[3], true))
				{
					__LIB_2__::func_478(uLocal_893[3], Global_35, sLocal_434[11], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1050591818, 1, 0, 0);
					bLocal_825 = true;
				}
			}
			func_205();
			if (__LIB_1__::func_313(&uLocal_866, 1.5f))
			{
				if (iLocal_900 != 0 && __LIB_0__::func_665(Global_35, iLocal_900, 1, 1) < 50f)
				{
					__LIB_2__::func_478(iLocal_900, Global_35, sLocal_434[10], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1050591818, 1, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Global_36, 2, 524288, -1082130432 /* Float: -1f */, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar1);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_900, iVar1);
					TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_900, Global_35, 3000, 0, 51, 1);
				}
			}
			if ((__LIB_2__::func_1(uLocal_893[0], 0, 1) && __LIB_2__::func_1(iLocal_902, 0, 1)) && !PED::IS_PED_ON_MOUNT(uLocal_893[0]))
			{
				if (!__LIB_0__::func_163(uLocal_893[0], -1665583462) && PED::_0x77525BBF433F2CD6(iLocal_902))
				{
					TASK::_TASK_MOVE_IN_TRAFFIC_2(uLocal_893[0], __LIB_2__::func_116(__LIB_4__::func_25(ENTITY::GET_ENTITY_COORDS(uLocal_893[0], true, false)), 1), 1073741824 /* Float: 2f */, 2f, 0, 0);
				}
			}
			if ((__LIB_2__::func_1(uLocal_893[1], 0, 1) && __LIB_2__::func_1(iLocal_903, 0, 1)) && !PED::IS_PED_ON_MOUNT(uLocal_893[1]))
			{
				if (!__LIB_0__::func_163(uLocal_893[1], -1665583462) && PED::_0x77525BBF433F2CD6(iLocal_903))
				{
					TASK::_TASK_MOVE_IN_TRAFFIC_2(uLocal_893[1], __LIB_2__::func_116(__LIB_4__::func_25(ENTITY::GET_ENTITY_COORDS(uLocal_893[1], true, false)), 1), 1073741824 /* Float: 2f */, 2f, 0, 0);
				}
			}
			if (func_208())
			{
				Local_14.f_44 = 1;
				return true;
			}
			if (bLocal_822)
			{
				func_209();
				return true;
			}
			break;
	}
	return false;
}

bool func_85()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_426, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_426, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_426);
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_86()
{
	bool bVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_426, sLocal_462[iVar1]))
		{
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_426, sLocal_462[iVar1]))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_426, sLocal_462[iVar1]);
			}
			bVar0 = true;
		}
		iVar1++;
	}
	return !bVar0;
}

Vector3 func_99(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -41.04f;
				case 1:
					return 0f, 0f, 227.52f;
				case 2:
					return 0f, 0f, 12.96f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -12.24f;
				case 1:
					return 0f, 0f, -54f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -33.12f;
				case 1:
					return 0f, 0f, -135.36f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_144(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_2__::func_1(uLocal_893[2], 0, 1))
	{
		if (!bParam0)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_426, "Main", uLocal_893[2]);
		}
		if (!MAP::DOES_BLIP_EXIST(iLocal_884[2]))
		{
			iLocal_884[2] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_893[2]);
		}
		if ((iLocal_523 == 0 && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[2], -298258515)) && !bParam0)
		{
			TASK::TASK_COMBAT_PED(uLocal_893[2], Global_35, 16384, 0);
		}
		else if (__LIB_3__::func_547(uLocal_893[2], Global_35, 0f) == 1 && !bParam0)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!PED::IS_PED_RAGDOLL(uLocal_893[2]))
			{
				TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "TaskCombat_Panic", 0.5f, 0, 4);
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_893[2], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[2], -358939665) || bParam0)
		{
			if (bParam0)
			{
				__LIB_1__::func_148(&uLocal_881);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_AIM_AT_ENTITY(0, Global_35, 250, 1, 1);
				TASK::TASK_COMBAT_PED(0, Global_35, 100663296, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_893[2], iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			}
		}
		else
		{
			TASK::TASK_COMBAT_PED(uLocal_893[2], Global_35, 16384, 0);
		}
	}
	if (__LIB_2__::func_1(uLocal_893[3], 0, 1))
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_884[3]))
		{
			iLocal_884[3] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_893[3]);
		}
		if ((__LIB_0__::func_163(uLocal_893[3], 242628503) && bLocal_835) || __LIB_0__::func_163(uLocal_893[3], -1073489615))
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_905);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_905);
			TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, 1000, joaat("FIRING_PATTERN_SINGLE_SHOT"), 1);
			TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_905);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_893[3], iLocal_905, 1.3f, 1.3f);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			if (!PED::IS_PED_RAGDOLL(uLocal_893[3]))
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_893[3], 0))
				{
					PED::_0x802092B07E3B1EEA(uLocal_893[3], Global_36, 3);
					TASK::CLEAR_PED_TASKS(uLocal_893[3], true, false);
				}
				else
				{
					TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "TaskCombat_Panic", 0.5f, 0, 4);
				}
			}
			TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar2);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_893[3], iVar2);
			TASK::CLEAR_SEQUENCE_TASK(&iVar2);
		}
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_905);
}

int func_145()
{
	int iVar0;
	iVar0 = 2;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(uLocal_893[iVar0], 0, 1))
		{
			return uLocal_893[iVar0];
		}
		iVar0++;
	}
	return 0;
}

void func_146(bool bParam0)
{
	int iVar0;
	if (bLocal_827 || __LIB_0__::func_163(uLocal_893[1], 518218985))
	{
		return;
	}
	if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_426, "ACTION", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_426, "BASE", 1)) || ((ANIMSCENE::_0x8D81E7824B7753F7(Local_426, "EXIT_RUN_LEFT", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_426, "EXIT_RUN_RIGHT", 1)) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[1], joaat("SAFETOBREAKOUT"))))
	{
		if (bParam0)
		{
			return;
		}
		if (iLocal_524 == 0)
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_426, sLocal_462[7], true);
		}
		else
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_426, sLocal_462[8], true);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_905);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(uLocal_893[2], false, false), 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_905);
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (__LIB_2__::func_1(uLocal_893[iVar0], 0, 1))
			{
				TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_893[iVar0], iLocal_905, 0.2f, 0.8f);
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[3]))
				{
					TASK::_0x3923EC958249657D(uLocal_893[iVar0], uLocal_893[3], -1082130432 /* Float: -1f */);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[2]))
				{
					TASK::_0x3923EC958249657D(uLocal_893[iVar0], uLocal_893[2], -1082130432 /* Float: -1f */);
				}
				TASK::_0x3923EC958249657D(uLocal_893[iVar0], Global_35, -1082130432 /* Float: -1f */);
			}
			iVar0++;
		}
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_905);
	}
	bLocal_827 = true;
}

void func_162()
{
	float fVar0;
	if (iLocal_725 > 4 || iLocal_727 == 1)
	{
		__LIB_2__::func_613(&uLocal_729, 0);
		bLocal_829 = false;
		return;
	}
	if (bLocal_829)
	{
		fVar0 = __LIB_0__::func_232(Global_35, uLocal_893[3], 0);
		if (fVar0 >= 900f)
		{
			__LIB_2__::func_613(&uLocal_729, 0);
			bLocal_829 = false;
		}
	}
	else
	{
		fVar0 = __LIB_0__::func_232(Global_35, uLocal_893[3], 0);
		if (fVar0 < 900f)
		{
			__LIB_2__::func_613(&uLocal_729, 1);
			bLocal_829 = true;
		}
	}
}

void func_176()
{
	if (__LIB_0__::func_71(uLocal_893[2]) && !PED::_0x0455546F23FF08E4(iLocal_904))
	{
		iLocal_904 = PED::CREATE_GROUP(0);
		PED::SET_PED_AS_GROUP_LEADER(uLocal_893[2], iLocal_904, false);
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[3]))
		{
			PED::SET_PED_AS_GROUP_MEMBER(uLocal_893[3], iLocal_904);
		}
	}
}

void func_177()
{
	if (iLocal_725 == 4 || __LIB_0__::func_75(&uLocal_869))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[2]))
		{
			PED::SET_PED_RESET_FLAG(uLocal_893[2], 290, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[1]))
		{
			PED::SET_PED_RESET_FLAG(uLocal_893[1], 290, true);
		}
		return;
	}
	if (iLocal_523 == 0)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[2], -885844059))
		{
			__LIB_2__::func_478(uLocal_893[2], 0, sLocal_434[0], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[2], -613074903))
		{
			__LIB_2__::func_478(uLocal_893[2], 0, sLocal_434[1], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[2], 757468110))
		{
			__LIB_2__::func_478(uLocal_893[2], 0, sLocal_434[19], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
		}
	}
	else
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[2], -885844059))
		{
			__LIB_2__::func_478(uLocal_893[2], 0, "GANG_INTERACT_STAY_THERE", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[2], 1625688006))
		{
			__LIB_2__::func_478(uLocal_893[2], 0, "HEADS_UP_WILDERNESS", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[2], 743672357))
		{
			__LIB_2__::func_478(uLocal_893[2], 0, sLocal_434[0], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[1], 1121717968))
		{
			__LIB_2__::func_478(uLocal_893[1], 0, sLocal_434[13], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[2], -1979109932))
		{
			__LIB_2__::func_478(uLocal_893[2], 0, sLocal_434[20], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[2], 1067011384))
		{
			__LIB_2__::func_478(uLocal_893[2], 0, sLocal_434[21], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[2], -495865323))
		{
			__LIB_2__::func_478(uLocal_893[2], 0, sLocal_434[7], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
		}
	}
}

void func_178()
{
	if (!bLocal_840)
	{
		if (bLocal_823)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(uLocal_893[3]);
			bLocal_840 = true;
		}
	}
	switch (iLocal_727)
	{
		case 0:
			break;
		case 1:
			func_386();
			if (iLocal_523 == 1)
			{
				if (!Local_14.f_46 && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_426, false))
				{
					if (__LIB_1__::func_285(&uLocal_863, 2.5f) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[2], -298258515))
					{
						if (iLocal_524 == 0)
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_426, sLocal_462[4], true);
						}
						else
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_426, sLocal_462[5], true);
						}
					}
				}
			}
			else if (__LIB_1__::func_313(&uLocal_851, 5f) && __LIB_2__::func_227(0, 1, uLocal_893[3], 1))
			{
				__LIB_2__::func_478(uLocal_893[3], Global_35, "GET_LOST", 0, -1082130432 /* Float: -1f */, 3, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
			}
			break;
	}
}

void func_179()
{
	float fVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_893[3]))
	{
		return;
	}
	fVar0 = fLocal_846;
	fLocal_846 = __LIB_0__::func_665(Global_35, uLocal_893[3], 0, 1);
	if (fLocal_846 > fVar0)
	{
		bLocal_836 = true;
	}
	else
	{
		bLocal_836 = false;
	}
}

void func_180()
{
	if (!bLocal_833 && ENTITY::IS_ENTITY_DEAD(uLocal_893[0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_426, false))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_426, "Vic_01", uLocal_893[0]);
			bLocal_833 = true;
		}
	}
	if (!bLocal_834 && ENTITY::IS_ENTITY_DEAD(uLocal_893[1]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_426, false))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_426, "Vic_02", uLocal_893[1]);
			bLocal_834 = true;
		}
	}
}

void func_181()
{
	int iVar0;
	int iVar1;
	if (iLocal_725 == 4)
	{
		return;
	}
	iVar0 = func_203(&(uLocal_893[2]), &(Local_525[2 /*21*/]), 35f, &Local_652, &(Local_14.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iVar0 == -1)
	{
		iVar0 = func_203(&(uLocal_893[3]), &(Local_525[3 /*21*/]), 35f, &Local_652, &(Local_14.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	if (!__LIB_0__::func_75(&uLocal_869))
	{
		if (iVar0 == 1)
		{
			if (!bLocal_839)
			{
				__LIB_2__::func_478(Global_35, 0, sLocal_434[16], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1050591818, 1, 0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[3]))
				{
					PED::_0x463803429297117C(uLocal_893[3], Global_36, 1, 0);
					TASK::CLEAR_PED_TASKS(uLocal_893[3], true, false);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_893[3], Global_35, 4000, 0, 51, 1);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_893[3], Global_35, -1, -1f, -1f, -1f);
				}
			}
			else
			{
				__LIB_2__::func_478(Global_35, 0, sLocal_434[15], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1050591818, 1, 0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[3]))
				{
					TASK::TASK_LOOK_AT_ENTITY(uLocal_893[3], Global_35, 4000, 0, 51, 1);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_893[3], Global_35, -1, -1f, -1f, -1f);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[2]))
				{
					TASK::TASK_LOOK_AT_ENTITY(uLocal_893[2], Global_35, 4000, 0, 51, 1);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iVar1);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_893[2], iVar1, 0.25f, 0.25f);
					TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				}
			}
			__LIB_1__::func_148(&uLocal_869);
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[3]))
			{
				__LIB_2__::func_504(uLocal_893[3], 230);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[2]))
			{
				__LIB_2__::func_504(uLocal_893[2], 180);
			}
			__LIB_2__::func_411(&(Local_652[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_652[1 /*17*/]), 0, 0);
			Local_14.f_44 = 1;
			PED::_0x9238A3D970BBB0A9(uLocal_893[3], 1963457635);
			PED::_0x9238A3D970BBB0A9(uLocal_893[2], 1963457635);
			PED::_0x9A4AC116CC1EEE14(uLocal_893[3]);
			PED::_0x9A4AC116CC1EEE14(uLocal_893[2]);
		}
		else if (iVar0 == 0)
		{
			__LIB_1__::func_148(&uLocal_848);
			__LIB_2__::func_478(Global_35, 0, sLocal_434[17], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1050591818, 1, 0, 0);
			__LIB_2__::func_411(&(Local_652[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_652[1 /*17*/]), 1, 0);
		}
	}
	else if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_1__::func_313(&uLocal_869, 2.5f))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[1]))
		{
			__LIB_3__::func_465(11, joaat("HONOR_EVENT_INTERVENED"), 0, 0, uLocal_893[1], 0, 1065353216 /* Float: 1f */, 0);
		}
		func_44(0, 0);
	}
}

void func_182()
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_313(&uLocal_881, 1.2f))
	{
		if ((ANIMSCENE::_0x8D81E7824B7753F7(Local_426, "ACTION", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_426, "BASE", 1)) || ((ANIMSCENE::_0x8D81E7824B7753F7(Local_426, "EXIT_RUN_LEFT", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_426, "EXIT_RUN_RIGHT", 1)) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[1], joaat("SAFETOBREAKOUT"))))
		{
			if (iLocal_524 == 0)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_426, sLocal_462[7], true);
			}
			else
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_426, sLocal_462[8], true);
			}
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_905);
			TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(uLocal_893[2], false, false), 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_905);
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (__LIB_2__::func_1(uLocal_893[iVar0], 0, 1))
				{
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_893[iVar0], iLocal_905, 0.2f, 0.8f);
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[3]))
					{
						TASK::_0x3923EC958249657D(uLocal_893[iVar0], uLocal_893[3], -1082130432 /* Float: -1f */);
					}
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[2]))
					{
						TASK::_0x3923EC958249657D(uLocal_893[iVar0], uLocal_893[2], -1082130432 /* Float: -1f */);
					}
					TASK::_0x3923EC958249657D(uLocal_893[iVar0], Global_35, -1082130432 /* Float: -1f */);
				}
				iVar0++;
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_905);
		}
		__LIB_2__::func_504(uLocal_893[2], 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		PED::_0x8ACC0506743A8A5C(uLocal_893[2], joaat("INVESTIGATORCHALLENGE_COMBATSTART"), 1, -1082130432 /* Float: -1f */);
		TASK::TASK_AIM_AT_ENTITY(0, Global_35, 1200, 1, 1);
		TASK::TASK_COMBAT_PED(0, Global_35, 100663296, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(uLocal_893[2], iVar1);
	}
}

void func_185()
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_426, Local_14.f_51, 0f, 0f, Local_14.f_51.f_3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_426, "Main", uLocal_893[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_426, "Vic_01", uLocal_893[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_426, "Vic_02", uLocal_893[1], 0);
	ANIMSCENE::START_ANIM_SCENE(Local_426);
}

void func_189()
{
	if (__LIB_1__::func_285(&uLocal_860, fLocal_847))
	{
		if (iLocal_843 == 0)
		{
			if (iLocal_523 == 0)
			{
				__LIB_2__::func_478(uLocal_893[0], 0, "GENERIC_FRIGHTENED_HIGH", 0, 300f, 1, 0, 1, 1, 1, 1, 1744022339, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(uLocal_893[1], 0, "PANIC_HELP", 0, 300f, 1, 0, 1, 1, 1, 1, 1744022339, 1, 0, 0);
			}
			__LIB_2__::func_315(1715123483, uLocal_893[1], 1);
			__LIB_3__::func_415(&Local_14, uLocal_893[3], ENTITY::GET_ENTITY_COORDS(uLocal_893[1], true, false), 150);
			__LIB_1__::func_148(&uLocal_860);
			__LIB_3__::func_684(Local_14.f_51);
			fLocal_847 = 3.5f;
			iLocal_843++;
		}
		else if (iLocal_843 < 3)
		{
			if (!PED::IS_TRACKED_PED_VISIBLE(uLocal_893[3]))
			{
				__LIB_1__::func_148(&uLocal_860);
				__LIB_2__::func_315(1066055203, uLocal_893[3], 1);
				__LIB_3__::func_415(&Local_14, uLocal_893[3], ENTITY::GET_ENTITY_COORDS(uLocal_893[3], true, false), 150);
				PED::_0x4C57F27D1554E6B0(uLocal_893[3], 0f, 0f, 0f, 0, 0f, 0, -1082130432 /* Float: -1f */);
				if (iLocal_843 == 2)
				{
					fLocal_847 = 0.82f;
				}
				iLocal_843++;
			}
		}
	}
}

void func_192()
{
	if (bLocal_830 || !__LIB_2__::func_1(uLocal_893[3], 0, 1))
	{
		return;
	}
	if (__LIB_2__::func_1(uLocal_893[1], 0, 1) && ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_893[1], 1488152799))
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(uLocal_893[3]))
		{
			TASK::_0xE7FA07624574B79A(uLocal_893[3], uLocal_893[1], 3, 2, 2000f, 1, 0, 0, 0);
		}
		bLocal_830 = true;
	}
}

void func_193()
{
	int iVar0;
	if (__LIB_0__::func_75(&uLocal_869))
	{
		return;
	}
	iVar0 = 2;
	while (iVar0 <= 5)
	{
		if (!__LIB_2__::func_1(uLocal_893[iVar0], 0, 1))
		{
			func_44(0, 0);
			return;
		}
		iVar0++;
	}
	if (bLocal_826)
	{
		__LIB_2__::func_161(vLocal_474, 20f, 5);
		bLocal_826 = false;
	}
	__LIB_0__::func_325(&(iLocal_884[3]));
	__LIB_2__::func_360(&(Local_652[0 /*17*/]), "RE_INTER_POS");
	if (bLocal_487)
	{
		TASK::_0x9DE63896B176EA94(uLocal_893[3], 0);
		TASK::_0x9DE63896B176EA94(uLocal_893[2], 0);
		TASK::_0x9DE63896B176EA94(uLocal_893[5], 0);
		TASK::_0x9DE63896B176EA94(uLocal_893[4], 0);
	}
	if (iLocal_821 == 0)
	{
		TASK::_0x12990818C1D35886(uLocal_893[3], 0, 1065353216 /* Float: 1f */);
		TASK::_0x12990818C1D35886(uLocal_893[2], 0, 1065353216 /* Float: 1f */);
		TASK::_0x12990818C1D35886(uLocal_893[5], 0, 1065353216 /* Float: 1f */);
		TASK::_0x12990818C1D35886(uLocal_893[4], 0, 1065353216 /* Float: 1f */);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uLocal_893[3], false, 1f);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uLocal_893[2], false, 1f);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uLocal_893[5], false, 1f);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uLocal_893[4], false, 1f);
	}
	TASK::OPEN_SEQUENCE_TASK(&iLocal_905);
	TASK::TASK_MOUNT_ANIMAL(0, uLocal_893[4], -1, -1, 1f, 1, 0, 0);
	TASK::TASK_STAND_STILL(0, 1200);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_474, 1.75f, -1, 0.25f, 1, 40000f);
	TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1.75f, 8192, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_905);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_893[2], iLocal_905);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_905);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_905);
	TASK::TASK_MOUNT_ANIMAL(0, uLocal_893[5], -1, -1, 1.5f, 1, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_905);
	if (iLocal_523 == 1 && bLocal_823)
	{
		TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_893[3], iLocal_905, 2.2f, 2.2f);
	}
	else
	{
		TASK::TASK_PERFORM_SEQUENCE(uLocal_893[3], iLocal_905);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_905);
	PED::SET_PED_KEEP_TASK(uLocal_893[2], true);
	PED::SET_PED_KEEP_TASK(uLocal_893[3], true);
	TASK::CLEAR_PED_SECONDARY_TASK(uLocal_893[3]);
	__LIB_1__::func_148(&uLocal_857);
	Local_14.f_50 = 1;
}

void func_194()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(uLocal_893[iVar0]) && ANIMSCENE::_0x005E6F28DD7ED58D(Local_426, func_395(iVar0))) && !__LIB_0__::func_163(uLocal_893[iVar0], 518218985))
		{
			if (iVar0 == 1)
			{
				if (__LIB_2__::func_227(0, 1, uLocal_893[1], 1))
				{
					__LIB_2__::func_478(uLocal_893[1], 0, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -1050591818, 1, 0, 0);
				}
			}
			if (bLocal_827)
			{
				if (iVar0 == 0)
				{
					TASK::_TASK_FLEE_FROM_COORD(uLocal_893[iVar0], ENTITY::GET_ENTITY_COORDS(uLocal_893[2], false, false), 0f, 0f, 0f, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
				}
				else
				{
					TASK::_TASK_FLEE_FROM_COORD(uLocal_893[iVar0], ENTITY::GET_ENTITY_COORDS(uLocal_893[2], false, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_893[iVar0], 0f, 20f, 0f), 10000f, -1, 1280, 1077936128 /* Float: 3f */, 0);
				}
			}
			else
			{
				TASK::_TASK_FLEE_FROM_COORD(uLocal_893[iVar0], ENTITY::GET_ENTITY_COORDS(uLocal_893[2], false, false), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_893[iVar0], 0f, 20f, 0f), 10000f, -1, 1280, 1077936128 /* Float: 3f */, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[3]))
			{
				TASK::_0x3923EC958249657D(uLocal_893[iVar0], uLocal_893[3], -1082130432 /* Float: -1f */);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[2]))
			{
				TASK::_0x3923EC958249657D(uLocal_893[iVar0], uLocal_893[2], -1082130432 /* Float: -1f */);
			}
			TASK::_0x3923EC958249657D(uLocal_893[iVar0], Global_35, -1082130432 /* Float: -1f */);
			PED::FORCE_PED_MOTION_STATE(uLocal_893[iVar0], joaat("MOTIONSTATE_SPRINT"), false, 0, false);
		}
		iVar0++;
	}
}

bool func_195()
{
	if (__LIB_2__::func_1(uLocal_893[2], 0, 1) || __LIB_2__::func_1(uLocal_893[3], 0, 1))
	{
		return false;
	}
	return true;
}

int func_196()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_2__::func_1(uLocal_893[iVar0], 0, 1))
		{
			return uLocal_893[iVar0];
		}
		iVar0++;
	}
	return 0;
}

void func_197()
{
	int iVar0;
	int iVar1;
	if (bLocal_826)
	{
		__LIB_2__::func_161(vLocal_474, 20f, 5);
	}
	if (__LIB_2__::func_1(uLocal_893[0], 0, 1))
	{
		iVar0 = func_396(uLocal_893[0]);
		PED::_0x89F5E7ADECCCB49C(uLocal_893[0], "scared");
		func_397(uLocal_893[0], iVar0);
		if (__LIB_2__::func_1(uLocal_893[1], 0, 1))
		{
			iVar1 = func_398(iVar0);
			PED::_0x89F5E7ADECCCB49C(uLocal_893[1], "scared");
			func_397(uLocal_893[1], iVar1);
		}
	}
	else if (__LIB_2__::func_1(uLocal_893[1], 0, 1))
	{
		iVar0 = func_396(uLocal_893[1]);
		PED::_0x89F5E7ADECCCB49C(uLocal_893[1], "scared");
		func_397(uLocal_893[1], iVar0);
	}
}

void func_198()
{
	__LIB_3__::func_548(&(Local_687[0 /*17*/]), "RE_INTER_POS", sLocal_434[25], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_548(&(Local_687[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_434[26], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_462(&Local_687, 0);
	__LIB_2__::func_526(&Local_687, 1, 0);
}

bool func_199()
{
	int iVar0;
	int iVar1;
	if (__LIB_2__::func_443())
	{
		iVar0 = __LIB_0__::func_12();
		if (iVar0 == 105 || iVar0 == 95)
		{
			return true;
		}
	}
	iVar1 = 2;
	while (iVar1 <= 3)
	{
		if (__LIB_0__::func_232(Global_35, uLocal_893[iVar1], 1) < 4900f)
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_200()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 2;
	while (iVar0 <= 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_893[iVar0]))
		{
			iVar2 = PED::GET_MOUNT(uLocal_893[iVar0]);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !PED::IS_PED_ON_MOUNT(uLocal_893[iVar0]))
			{
				TASK::TASK_MOUNT_ANIMAL(0, iVar2, 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
			}
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_893[iVar0], Global_35, 3, 384, -1082130432 /* Float: -1f */, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_893[iVar0], iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_893[iVar0], false);
			__LIB_0__::func_325(&(iLocal_884[iVar0]));
		}
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_906, joaat("PLAYER"));
}

int func_203(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_403(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_0__::func_11(iParam1, uParam3, uParam0);
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

void func_205()
{
	if (__LIB_0__::func_75(&uLocal_869))
	{
		return;
	}
	if (bLocal_828)
	{
		if (__LIB_2__::func_1(uLocal_893[3], 0, 1) && __LIB_0__::func_665(Global_35, uLocal_893[3], 0, 1) < 20f)
		{
			_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_893[3], &Local_489);
		}
		return;
	}
	if ((__LIB_2__::func_227(0, 1, uLocal_893[3], 1) && __LIB_2__::func_227(0, 1, Global_35, 1)) && (!PED::IS_PED_ON_MOUNT(uLocal_893[2]) || __LIB_0__::func_396(uLocal_893[2])))
	{
		if (((__LIB_2__::func_1(uLocal_893[2], 0, 1) && __LIB_2__::func_215(uLocal_893[2], Global_35, 1, 20f, 0)) || (__LIB_2__::func_1(uLocal_893[3], 0, 1) && __LIB_2__::func_215(uLocal_893[3], Global_35, 1, 20f, 0))) && !func_410())
		{
			__LIB_2__::func_478(uLocal_893[2], Global_35, sLocal_434[14], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			__LIB_1__::func_148(&uLocal_854);
			PED::_0x9238A3D970BBB0A9(uLocal_893[3], 1963457635);
			PED::_0x9238A3D970BBB0A9(uLocal_893[2], 1963457635);
			PED::_0x9A4AC116CC1EEE14(uLocal_893[3]);
			PED::_0x9A4AC116CC1EEE14(uLocal_893[2]);
			PED::_0x8ACC0506743A8A5C(uLocal_893[2], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			if (__LIB_2__::func_1(uLocal_893[4], 0, 1))
			{
				if (!__LIB_0__::func_394(uLocal_893[2], uLocal_893[4], 0))
				{
					TASK::CLEAR_PED_TASKS(uLocal_893[2], true, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_905);
					TASK::TASK_AIM_AT_ENTITY(0, Global_35, 5000, 0, 0);
					TASK::TASK_MOUNT_ANIMAL(0, uLocal_893[4], -1, -1, 1f, 1, 0, 0);
					TASK::_TASK_MOVE_IN_TRAFFIC_2(0, __LIB_2__::func_116(__LIB_4__::func_25(ENTITY::GET_ENTITY_COORDS(uLocal_893[4], true, false)), 1), 1073741824 /* Float: 2f */, 2.001f, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_905);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_893[2], iLocal_905);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_905);
				}
			}
			bLocal_828 = true;
		}
	}
}

bool func_208()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_1(uLocal_893[iVar0], 0, 1))
		{
			if (__LIB_0__::func_232(Global_35, uLocal_893[iVar0], 0) < 22500f)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_209()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_2__::func_1(uLocal_893[iVar0], 0, 1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_893[iVar0], false, true);
			TASK::TASK_SMART_FLEE_PED(uLocal_893[iVar0], Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			PED::SET_PED_KEEP_TASK(uLocal_893[iVar0], true);
		}
		iVar0++;
	}
}

void func_386()
{
	float fVar0;
	vector3 vVar1;
	if (iLocal_725 == 7 || iLocal_725 == 4)
	{
		return;
	}
	if (!bLocal_831 && __LIB_1__::func_285(&uLocal_848, 1.5f))
	{
		__LIB_2__::func_478(uLocal_893[3], Global_35, sLocal_434[12], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1050591818, 1, 0, 0);
		bLocal_831 = true;
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_893[3], 1f);
	fVar0 = __LIB_0__::func_665(Global_35, uLocal_893[3], 0, 1);
	if (((!func_540() && fVar0 < 2.5f) || __LIB_0__::func_665(Global_35, uLocal_893[2], 0, 1) < 2.5f) || __LIB_1__::func_313(&uLocal_848, 10f))
	{
		if (!bLocal_836)
		{
			if (!Local_14.f_46)
			{
				Local_14.f_5.f_10 = uLocal_893[3];
				func_44(0, 1);
			}
		}
	}
	else if (fVar0 > (fLocal_845 + 3f))
	{
		__LIB_2__::func_360(&(Local_652[0 /*17*/]), "RE_INTER_POS");
		if (__LIB_2__::func_1(uLocal_893[3], 0, 1) && !__LIB_3__::func_138(uLocal_893[3], joaat("WORLD_HUMAN_GUARD_SCOUT")))
		{
			vVar1 = { Local_233[3 /*32*/].f_6 + Vector(1f, 0f, 0f) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &(vVar1.f_2), true);
			TASK::CLEAR_PED_TASKS(uLocal_893[3], true, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_905);
			__LIB_2__::func_915(0, joaat("WORLD_HUMAN_GUARD_SCOUT"), vVar1, Local_233[3 /*32*/].f_9, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_905);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_893[3], iLocal_905, 0.8f, 0.8f);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_905);
			__LIB_0__::func_325(&(iLocal_884[3]));
			bLocal_835 = false;
		}
		iLocal_727 = 0;
	}
}

char* func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Vic_01";
		case 1:
			return "Vic_02";
		case 2:
			return "Main";
	}
	return "NULL";
}

int func_396(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	fVar1 = 1E+07f;
	iVar2 = 0;
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		iVar0 = 4;
		while (iVar0 <= 5)
		{
			if (__LIB_2__::func_1(uLocal_893[iVar0], 0, 1))
			{
				fVar3 = __LIB_0__::func_665(uLocal_893[iVar0], iParam0, 0, 1);
				if (fVar3 < fVar1)
				{
					fVar1 = fVar3;
					iVar2 = uLocal_893[iVar0];
				}
			}
			iVar0++;
		}
	}
	return iVar2;
}

void func_397(int iParam0, int iParam1)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_905);
		if ((__LIB_2__::func_1(iParam1, 0, 1) && __LIB_0__::func_665(iParam0, iParam1, 0, 1) < 30f) && !PED::_0x77525BBF433F2CD6(iParam1))
		{
			TASK::TASK_MOUNT_ANIMAL(0, iParam1, -1, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, __LIB_2__::func_116(__LIB_4__::func_25(ENTITY::GET_ENTITY_COORDS(iParam0, true, false)), 1), 1073741824 /* Float: 2f */, 2.001f, 0, 0);
			if (iParam0 == uLocal_893[0])
			{
				iLocal_902 = iParam1;
			}
			else
			{
				iLocal_903 = iParam1;
			}
		}
		else
		{
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, __LIB_2__::func_116(__LIB_4__::func_25(ENTITY::GET_ENTITY_COORDS(iParam0, true, false)), 1), 1073741824 /* Float: 2f */, 2f, 0, 0);
		}
		TASK::CLOSE_SEQUENCE_TASK(iLocal_905);
		TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iLocal_905, 0f, 1.5f);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_905);
	}
}

int func_398(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	if (iParam0 != uLocal_893[4] && __LIB_2__::func_1(uLocal_893[4], 0, 1))
	{
		iVar0 = uLocal_893[4];
	}
	else if (__LIB_2__::func_1(uLocal_893[5], 0, 1))
	{
		iVar0 = uLocal_893[5];
	}
	return iVar0;
}

int func_403(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_17__::func_843(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_19__::func_98(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_403(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_19__::func_99(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_17__::func_848(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_17__::func_844(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_3__::func_876(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				break;
			case 2:
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			__LIB_17__::func_845(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_410()
{
	if (__LIB_0__::func_163(uLocal_893[2], 1868526510) && __LIB_0__::func_665(uLocal_893[2], uLocal_893[4], 0, 1) < 2.5f)
	{
		return true;
	}
	return false;
}

bool func_540()
{
	if (((bLocal_823 && iLocal_727 == 1) && __LIB_0__::func_163(uLocal_893[3], 242628503)) && TASK::GET_SEQUENCE_PROGRESS(uLocal_893[3]) == 0)
	{
		return true;
	}
	return false;
}

