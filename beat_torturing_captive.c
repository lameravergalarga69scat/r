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
	vector3 vLocal_14 = { 0f, 0f, 0f };
	vector3 vLocal_17 = { 0f, 0f, 0f };
	vector3 vLocal_20 = { 0f, 0f, 0f };
	vector3 vLocal_23[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_33 = { 0f, 0f, 0f };
	vector3 vLocal_36 = { 0f, 0f, 0f };
	vector3 vLocal_39 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	int iLocal_45 = 0;
	var uLocal_46[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_53[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_60 = 0;
	var uLocal_61[3] = { 0, 0, 0 };
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = -1;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 2;
	var uLocal_75 = 1;
	var uLocal_76 = 1;
	var uLocal_77 = 1;
	var uLocal_78 = 0;
	var uLocal_79 = 1;
	var uLocal_80 = 2;
	var uLocal_81 = 2;
	var uLocal_82 = 3;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 3;
	var uLocal_86 = 1;
	var uLocal_87 = 3;
	var uLocal_88 = 3;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	float fLocal_93 = 0f;
	char* sLocal_94 = NULL;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	char* sLocal_102 = NULL;
	char* sLocal_103 = NULL;
	char* sLocal_104 = NULL;
	struct<193> Local_105 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_298 = 0;
	struct<12> Local_299[2];
	struct<32> Local_324[6];
	struct<2> Local_517[1];
	var uLocal_520 = 1;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	struct<6> Local_529 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	struct<21> Local_537[2];
	struct<17> Local_580[5];
	int iLocal_666 = 0;
	var uLocal_667 = -1;
	var uLocal_668 = 0;
	var uLocal_669 = -1;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = -1;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 1073741824;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 1;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	struct<17> Local_687[5];
	int iLocal_773 = 0;
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	int iLocal_787 = 0;
	int iLocal_788 = 0;
	int iLocal_789 = 0;
	int iLocal_790 = 0;
	var uLocal_791 = 0;
	int iLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794 = 0;
	int iLocal_795 = 0;
	int iLocal_796 = 0;
	float fLocal_797 = 0f;
	float fLocal_798 = 0f;
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	bool bLocal_802 = false;
	bool bLocal_803 = false;
	bool bLocal_804 = false;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	bool bLocal_809 = false;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	bool bLocal_818 = false;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	bool bLocal_831 = false;
	bool bLocal_832 = false;
	bool bLocal_833 = false;
	bool bLocal_834 = false;
	bool bLocal_835 = false;
	bool bLocal_836 = false;
	bool bLocal_837 = false;
	bool bLocal_838 = false;
	bool bLocal_839 = false;
	bool bLocal_840 = false;
	bool bLocal_841 = false;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	int iLocal_846 = 0;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	bool bLocal_851 = false;
	vector3 vLocal_852 = { 0f, 0f, 0f };
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	float fLocal_861 = 0f;
	int iLocal_862 = 0;
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
	var uLocal_884 = 0;
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
	bool bLocal_912 = false;
	bool bLocal_913 = false;
	int iLocal_914 = 0;
	bool bLocal_915 = false;
	bool bLocal_916 = false;
	bool bLocal_917 = false;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	bool bLocal_921 = false;
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
	vLocal_14 = { 2.0871f, 0.2325f, 0f };
	vLocal_17 = { 1.9615f, -1.499f, 0f };
	iLocal_99 = joaat("SC_PROP_HUMAN_TORCH_TORCAP_A");
	iLocal_100 = joaat("SC_PROP_HUMAN_TORCH_TORCAP_B");
	sLocal_101 = "SCRIPT_COMMON_TORCAP_TORCH_MALE_A";
	sLocal_102 = "SCRIPT_COMMON_TORCAP_TORCH_MALE_B";
	sLocal_103 = "PBL_BACK_ENTER";
	sLocal_104 = "PL_CowerLeftLoop";
	iLocal_782 = 1;
	iLocal_787 = -1;
	iLocal_788 = -1;
	iLocal_793 = 10;
	iLocal_794 = -1;
	iLocal_801 = 1;
	bLocal_837 = true;
	vLocal_852 = { 9f, 7f, 10f };
	fLocal_861 = 1f;
	Local_105.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_105.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	__LIB_0__::func_11();
	__LIB_3__::func_368(&Local_105, 1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_851 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_851, 481, 0);
		if (bLocal_851)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_782)
			{
				case 1:
					if (__LIB_3__::func_454(&Local_105, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_8(&Local_105, &uLocal_96, &uLocal_95);
						iLocal_782 = 0;
					}
					else if (Local_105.f_160)
					{
						func_5();
					}
					break;
				case 0:
					if (func_9())
					{
						iLocal_782 = 3;
					}
					break;
				case 3:
					if (func_10())
					{
						__LIB_3__::func_352(&Local_105, 1);
						iLocal_782 = 4;
					}
					break;
				case 4:
					if (!__LIB_3__::func_466(&Local_105, &uLocal_46, 0, 0, 1, 0, 1, 0))
					{
						func_5();
					}
					func_13();
					if (func_14())
					{
						func_5();
					}
					if (__LIB_3__::func_431(&Local_105, &uLocal_46, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_5();
					}
					break;
			}
			BUILTIN::WAIT(Local_105.f_158);
		}
	}
}

void func_5()
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
	{
		AUDIO::STOP_PED_SPEAKING(uLocal_46[0], false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[1]))
	{
		AUDIO::STOP_PED_SPEAKING(uLocal_46[1], false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[2]))
	{
		AUDIO::STOP_PED_SPEAKING(uLocal_46[2], false);
	}
	__LIB_3__::func_475(uLocal_46[0], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
	__LIB_3__::func_475(uLocal_46[1], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
	__LIB_3__::func_475(uLocal_46[2], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
	__LIB_3__::func_475(uLocal_46[3], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
	__LIB_3__::func_475(uLocal_46[4], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
	__LIB_3__::func_475(uLocal_46[5], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
	if (!Local_105.f_45 || __LIB_2__::func_118(uLocal_46[2], 1, 0) > 80f)
	{
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_858))
		{
			PHYSICS::DELETE_ROPE(&iLocal_858);
		}
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_859))
		{
			PHYSICS::DELETE_ROPE(&iLocal_859);
		}
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_860))
		{
			PHYSICS::DELETE_ROPE(&iLocal_860);
		}
	}
	__LIB_3__::func_480(&Local_299);
	__LIB_3__::func_493(&Local_105, &uLocal_46, &iLocal_53, 0, uLocal_96, uLocal_95, 0, 1, 0, 1);
	GRAPHICS::_0x9CF1836C03FB67A2(&(uLocal_61[0]), 1);
	GRAPHICS::_0x9CF1836C03FB67A2(&(uLocal_61[1]), 1);
	GRAPHICS::_0x9CF1836C03FB67A2(&(uLocal_61[2]), 1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_65);
	if (PED::_0x91A5F9CBEBB9D936(iLocal_92))
	{
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_92, true);
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), ENTITY::GET_ENTITY_COORDS(uLocal_46[0], true, false), 5f))
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_914);
	}
	FIRE::REMOVE_SCRIPT_FIRE(iLocal_45);
	__LIB_2__::func_593(&(Local_537[0 /*21*/]), &Local_580);
	__LIB_2__::func_593(&(Local_537[1 /*21*/]), &Local_580);
	__LIB_2__::func_56(uLocal_46[0], 1, 1);
	__LIB_2__::func_56(uLocal_46[1], 1, 1);
	__LIB_2__::func_593(&iLocal_666, &Local_687);
	__LIB_2__::func_56(uLocal_46[2], 1, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_8(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 10;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 10;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 10;
			*uParam2 = 3;
			break;
		case 4:
			*uParam1 = 10;
			*uParam2 = 4;
			break;
	}
}

bool func_9()
{
	switch (iLocal_781)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_105))
			{
				func_31();
				func_32();
				func_33();
				func_34();
				func_35();
				func_36();
				func_37();
				func_38();
				func_39();
				func_40();
				__LIB_4__::func_402(&uLocal_66);
				iLocal_781 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_316(&Local_299))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_520))
			{
				return false;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_94))
			{
				return false;
			}
			if (!AUDIO::_0xD9130842D7226045("RETC_Sounds", 0))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_324))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_10()
{
	switch (iLocal_783)
	{
		case 0:
			iLocal_783 = 2;
			break;
		case 2:
			if (__LIB_3__::func_479(Local_105.f_51, Local_105.f_51.f_3, &Local_324, &uLocal_46, 1, 0, -1, 1))
			{
				func_46();
				func_47();
				iLocal_783 = 3;
			}
			break;
		case 3:
			__LIB_3__::func_400(Local_105.f_51, &Local_299, Local_105.f_51.f_3, 0, 0, -1, 0);
			func_49();
			iLocal_783 = 5;
			break;
		case 5:
			func_50();
			iLocal_783 = 1;
			break;
		case 1:
			if (func_51())
			{
				func_52();
				iLocal_783 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_13()
{
	func_63(&(Local_105.f_5), &uLocal_46, 12f, 0, -1);
	PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(uLocal_46[2]);
	if (bLocal_833 == 0)
	{
		if (ENTITY::IS_ENTITY_DEAD(uLocal_46[2]))
		{
			bLocal_833 = true;
			if (__LIB_2__::func_118(uLocal_46[2], 1, 0) <= 60f)
			{
				__LIB_3__::func_465(4, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, "RE_HONOR_WATCHED_MURDER", uLocal_46[2], 0, 1065353216 /* Float: 1f */, 0);
			}
			else if (Local_105.f_45)
			{
				__LIB_3__::func_465(2, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, "RE_HONOR_IGNORED_VICTIM", uLocal_46[2], 0, 1065353216 /* Float: 1f */, 0);
			}
			__LIB_2__::func_411(&(Local_580[2 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_580[3 /*17*/]), 1, 0);
		}
	}
	func_66();
	func_67();
	func_68();
	func_69();
	func_70();
	__LIB_0__::func_11();
	if (iLocal_773 != 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[2]))
		{
		}
	}
	if (__LIB_2__::func_118(uLocal_46[0], 1, 0) <= 1.5f || __LIB_2__::func_118(uLocal_46[1], 1, 0) <= 1.5f)
	{
		if (func_72() == 0 && iLocal_820 == 0)
		{
			iLocal_820 = 1;
			func_73(7);
		}
	}
	if (__LIB_2__::func_1(uLocal_46[0], 0, 1))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uLocal_46[0], false);
	}
	if (__LIB_2__::func_1(uLocal_46[1], 0, 1))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uLocal_46[1], false);
	}
	if (bLocal_802 == 0)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_33, 2f, 2f, 2f, false, true, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		}
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_46[0], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_46[1], Global_35, 1, 1))
	{
		ENTITY::SET_ENTITY_PROOFS(uLocal_46[0], 0, false);
		ENTITY::SET_ENTITY_PROOFS(uLocal_46[1], 0, false);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_529))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_529, false))
		{
			fLocal_797 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_529);
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_529.f_1))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_529.f_1, false))
		{
			fLocal_798 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_529.f_1);
		}
	}
	func_75();
}

bool func_14()
{
	switch (iLocal_773)
	{
		case 0:
			func_76();
			break;
		case 1:
			func_77();
			break;
		case 2:
			func_78();
			break;
		case 3:
			func_79();
			break;
		case 7:
			func_80();
			break;
		case 4:
			func_81();
			break;
		case 5:
			func_82();
			break;
		case 6:
			func_83();
			break;
		case 9:
			func_84();
			break;
		case 8:
			func_85();
			break;
		case 10:
			func_86();
			break;
		case 11:
			func_87();
			break;
		case 12:
			func_88();
			if (__LIB_2__::func_118(uLocal_46[2], 1, 0) >= 100f)
			{
				PED::SET_PED_KEEP_TASK(uLocal_46[2], true);
				PED::SET_PED_KEEP_TASK(uLocal_46[0], true);
				PED::SET_PED_KEEP_TASK(uLocal_46[1], true);
				PED::SET_PED_KEEP_TASK(uLocal_46[3], true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[2], false);
				Local_105.f_50 = 1;
				Local_105.f_44 = 1;
				return true;
			}
			break;
		case 13:
			func_88();
			func_89();
			if (__LIB_2__::func_118(uLocal_46[2], 1, 0) >= 100f || (bLocal_831 && func_72() == 1))
			{
				Local_105.f_50 = 1;
				Local_105.f_160 = 1;
				PED::SET_PED_KEEP_TASK(uLocal_46[2], true);
				PED::SET_PED_KEEP_TASK(uLocal_46[0], true);
				PED::SET_PED_KEEP_TASK(uLocal_46[1], true);
				PED::SET_PED_KEEP_TASK(uLocal_46[3], true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[0], false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[1], false);
				func_5();
			}
			break;
		case 14:
			func_88();
			func_89();
			func_90();
			if (__LIB_2__::func_118(uLocal_46[2], 1, 0) >= 100f)
			{
				Local_105.f_50 = 1;
				Local_105.f_160 = 1;
				PED::SET_PED_KEEP_TASK(uLocal_46[2], true);
				PED::SET_PED_KEEP_TASK(uLocal_46[0], true);
				PED::SET_PED_KEEP_TASK(uLocal_46[1], true);
				PED::SET_PED_KEEP_TASK(uLocal_46[3], true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[0], false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[1], false);
				func_5();
			}
			break;
	}
	return false;
}

void func_31()
{
	STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_99, 262145, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_100, 262145, 0, 0);
}

void func_32()
{
	Local_324[0 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
	Local_324[0 /*32*/] = 22;
	Local_324[0 /*32*/].f_3 = -235110358;
	Local_324[1 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
	Local_324[1 /*32*/] = 22;
	Local_324[1 /*32*/].f_3 = 118073924;
	Local_324[2 /*32*/].f_1 = joaat("RE_TORTURINGCAPTIVE_MALES_01");
	Local_324[2 /*32*/] = 4;
	Local_324[2 /*32*/].f_3 = 936013193;
	Local_324[3 /*32*/].f_1 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	Local_324[4 /*32*/].f_1 = __LIB_2__::func_185(1, 0, 1);
	Local_324[5 /*32*/].f_1 = __LIB_2__::func_185(1, 1, 1);
	__LIB_3__::func_445(&Local_324);
}

void func_33()
{
	Local_517[0 /*2*/] = "SCRIPT_RE@TORTURING_CAPTIVE";
	Local_517[0 /*2*/].f_1 = "dia_06_vic";
	__LIB_3__::func_318(Local_517[0 /*2*/], &uLocal_520);
}

void func_34()
{
	STREAMING::REQUEST_MODEL(joaat("W_MELEE_KNIFE02"), false);
}

void func_35()
{
	switch (Local_105.f_51.f_4)
	{
		case 0:
			sLocal_94 = "retc_blood_v0";
			break;
		case 1:
			sLocal_94 = "retc_blood_v1";
			break;
		case 2:
			sLocal_94 = "retc_blood_v2";
			break;
		case 3:
			sLocal_94 = "retc_blood_v3";
			break;
		case 4:
			sLocal_94 = "retc_blood_v4";
			break;
		case 5:
			sLocal_94 = "retc_blood_v5";
			break;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_94);
}

void func_36()
{
	switch (Local_105.f_51.f_4)
	{
		case 0:
			vLocal_33 = { 2572.89f, 1544.5f, 94.87f };
			vLocal_36 = { 0f, 0f, 40f };
			Local_324[0 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_33, vLocal_36.z, vLocal_14) };
			Local_324[0 /*32*/].f_9 = (vLocal_36.z + 103.43f);
			Local_324[1 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_33, vLocal_36.z, vLocal_17) };
			Local_324[1 /*32*/].f_9 = (vLocal_36.z + 24.68f);
			Local_324[2 /*32*/].f_6 = { 2573.2f, 1545.07f, 95.12f };
			Local_324[2 /*32*/].f_9 = -44.32f;
			Local_324[3 /*32*/].f_6 = { 2585.47f, 1576.33f, 95.37f };
			Local_324[3 /*32*/].f_9 = 212.0483f;
			Local_324[4 /*32*/].f_6 = { 2591.77f, 1575.01f, 95.58f };
			Local_324[4 /*32*/].f_9 = 63.32f;
			Local_324[5 /*32*/].f_6 = { 2591.45f, 1577.05f, 95.55f };
			Local_324[5 /*32*/].f_9 = 98.55f;
			vLocal_20 = { 2600.91f, 1545.41f, 91.99f };
			vLocal_23[0 /*3*/] = { 2602.904f, 1736.888f, 87.2552f };
			vLocal_23[2 /*3*/] = { 2587.6f, 1576.58f, 95f };
			vLocal_39 = { 2576.65f, 1545.12f, 94.83f };
			vLocal_42 = { 2572.92f, 1544.52f, 95.1582f };
			break;
		case 1:
			vLocal_33 = { 2570.12f, 1820.47f, 85.89f };
			vLocal_36 = { 0f, 0f, 252.07f };
			Local_324[0 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_33, vLocal_36.z, vLocal_14) };
			Local_324[0 /*32*/].f_9 = (vLocal_36.z + 103.43f);
			Local_324[1 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_33, vLocal_36.z, vLocal_17) };
			Local_324[1 /*32*/].f_9 = (vLocal_36.z + 24.68f);
			Local_324[2 /*32*/].f_6 = { 2569.75f, 1820.414f, 85.8955f };
			Local_324[2 /*32*/].f_9 = 162.07f;
			Local_324[3 /*32*/].f_6 = { 2575.18f, 1768.43f, 94.38f };
			Local_324[3 /*32*/].f_9 = -50.14f;
			Local_324[4 /*32*/].f_6 = { 2579.78f, 1775.68f, 94.09f };
			Local_324[4 /*32*/].f_9 = 170.53f;
			Local_324[5 /*32*/].f_6 = { 2581.71f, 1776.79f, 94.15f };
			Local_324[5 /*32*/].f_9 = -146.15f;
			vLocal_20 = { 2574.88f, 1769.12f, 93.19f };
			vLocal_23[0 /*3*/] = { 2743.25f, 1259.14f, 71.37f };
			vLocal_39 = { 2567.785f, 1818.013f, 86.1814f };
			vLocal_42 = { 2570.15f, 1820.45f, 86.32f };
			break;
		case 2:
			vLocal_33 = { 2388.87f, 1048.04f, 85.35f };
			vLocal_36 = { 0f, 0f, 90f };
			Local_324[0 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_33, vLocal_36.z, vLocal_14) };
			Local_324[0 /*32*/].f_9 = (vLocal_36.z + 103.43f);
			Local_324[1 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_33, vLocal_36.z, vLocal_17) };
			Local_324[1 /*32*/].f_9 = (vLocal_36.z + 24.68f);
			Local_324[2 /*32*/].f_6 = { 2388.8f, 1048.62f, 85.16f };
			Local_324[2 /*32*/].f_9 = 0f;
			Local_324[3 /*32*/].f_6 = { 2415.81f, 1074.07f, 87.85f };
			Local_324[3 /*32*/].f_9 = 177.7f;
			Local_324[4 /*32*/].f_6 = { 2414.72f, 1069.48f, 87.58f };
			Local_324[4 /*32*/].f_9 = -103.01f;
			Local_324[5 /*32*/].f_6 = { 2413.01f, 1070.82f, 87.7f };
			Local_324[5 /*32*/].f_9 = -50.1f;
			vLocal_20 = { 2421.05f, 1056.56f, 86.76f };
			vLocal_23[0 /*3*/] = { 2385.36f, 1056.36f, 84.55f };
			vLocal_23[1 /*3*/] = { 2388.74f, 1050.25f, 84.97f };
			vLocal_39 = { 2391.54f, 1048.82f, 85.37f };
			vLocal_42 = { 2388.875f, 1048.08f, 85.6f };
			break;
		case 3:
			vLocal_33 = { 2746.25f, 1014.96f, 65.5f };
			vLocal_36 = { 0f, 0f, -20.17f };
			Local_324[0 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_33, vLocal_36.z, vLocal_14) };
			Local_324[0 /*32*/].f_9 = (vLocal_36.z + 103.43f);
			Local_324[1 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_33, vLocal_36.z, vLocal_17) };
			Local_324[1 /*32*/].f_9 = (vLocal_36.z + 24.68f);
			Local_324[2 /*32*/].f_6 = { 2746.46f, 1014.9f, 65.5f };
			Local_324[2 /*32*/].f_9 = -110.17f;
			Local_324[3 /*32*/].f_6 = { 2793.02f, 1007.99f, 57.13f };
			Local_324[3 /*32*/].f_9 = 177.7f;
			Local_324[4 /*32*/].f_6 = { 2790.99f, 1011.74f, 59.27f };
			Local_324[4 /*32*/].f_9 = -164.57f;
			Local_324[5 /*32*/].f_6 = { 2793.16f, 1010.41f, 58.75f };
			Local_324[5 /*32*/].f_9 = 139.65f;
			vLocal_20 = { 2791.97f, 1013.82f, 58.71f };
			vLocal_23[0 /*3*/] = { 2746.02f, 1018.98f, 65.7f };
			vLocal_39 = { 2746.65f, 1011.49f, 65.25f };
			vLocal_42 = { 2746.3f, 1014.985f, 65.8f };
			break;
		case 4:
			vLocal_33 = { 2697.282f, 1627.256f, 148.257f };
			vLocal_36 = { 0f, 0f, -24.18f };
			Local_324[0 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_33, vLocal_36.z, vLocal_14) };
			Local_324[0 /*32*/].f_9 = (vLocal_36.z + 103.43f);
			Local_324[1 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_33, vLocal_36.z, vLocal_17) };
			Local_324[1 /*32*/].f_9 = (vLocal_36.z + 24.68f);
			Local_324[2 /*32*/].f_6 = { 2697.75f, 1627.42f, 147.37f };
			Local_324[2 /*32*/].f_9 = -114.18f;
			Local_324[3 /*32*/].f_6 = { 2721.89f, 1619.52f, 153.71f };
			Local_324[3 /*32*/].f_9 = 4.3f;
			Local_324[4 /*32*/].f_6 = { 2719.19f, 1624.82f, 153.52f };
			Local_324[4 /*32*/].f_9 = -137.86f;
			Local_324[5 /*32*/].f_6 = { 2719.38f, 1627.35f, 153.65f };
			Local_324[5 /*32*/].f_9 = -98.05f;
			vLocal_20 = { 2724.23f, 1629.96f, 153.7f };
			vLocal_23[0 /*3*/] = { 2385.36f, 1056.36f, 84.55f };
			vLocal_39 = { 2700.02f, 1628.6f, 148.34f };
			vLocal_42 = { 2697.332f, 1627.266f, 148.53f };
			break;
		case 5:
			vLocal_33 = { 2245.163f, 1473.182f, 94.458f };
			vLocal_36 = { 0f, 0f, 54.82f };
			Local_324[0 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_33, vLocal_36.z, vLocal_14) };
			Local_324[0 /*32*/].f_9 = (vLocal_36.z + 103.43f);
			Local_324[1 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_33, vLocal_36.z, vLocal_17) };
			Local_324[1 /*32*/].f_9 = (vLocal_36.z + 24.68f);
			Local_324[2 /*32*/].f_6 = { 2247.411f, 1463.573f, 94.7936f };
			Local_324[2 /*32*/].f_9 = -35.18f;
			Local_324[3 /*32*/].f_6 = { 2220.767f, 1474.702f, 89.2216f };
			Local_324[3 /*32*/].f_9 = 4.3f;
			Local_324[4 /*32*/].f_6 = { 2228.019f, 1498.496f, 90.938f };
			Local_324[4 /*32*/].f_9 = 180f;
			Local_324[5 /*32*/].f_6 = { 2226.2f, 1497.445f, 90.6387f };
			Local_324[5 /*32*/].f_9 = 180f;
			vLocal_20 = { 2222.31f, 1467.911f, 88.8836f };
			vLocal_23[0 /*3*/] = { 2245.308f, 1472.721f, 94.6981f };
			vLocal_39 = { 2242.583f, 1473.887f, 94.1593f };
			vLocal_42 = { 2245.183f, 1473.224f, 95.176f };
			break;
	}
}

void func_37()
{
	Local_299[0 /*12*/].f_7 = joaat("P_KEROSENECAN02X");
	Local_299[0 /*12*/] = { vLocal_39 };
	Local_299[1 /*12*/].f_7 = joaat("P_TREE_FALLEN_PINE_ROPE01X");
	Local_299[1 /*12*/] = { vLocal_42 };
	__LIB_3__::func_314(&Local_299);
}

void func_38()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { (Local_105.f_51 - 5f), (Local_105.f_51.f_1 - 5f), (Local_105.f_51.f_2 - 5f) };
	vVar3 = { (Local_105.f_51 + 5f), (Local_105.f_51.f_1 + 5f), (Local_105.f_51.f_2 + 5f) };
	vVar6 = { Local_105.f_51, Local_105.f_51.f_1, Local_105.f_51.f_2 };
	fLocal_93 = 20f;
	iLocal_92 = __LIB_4__::func_29(vVar0, vVar3, vVar6, fLocal_93, 0, 0);
}

void func_39()
{
	Local_529.f_4 = "script@beat@wilderness@torturingcaptive@victim";
	Local_529.f_5 = "scenario@randomevent@torturingcaptive@release";
}

void func_40()
{
	__LIB_2__::func_602(&(Local_580[2 /*17*/]), "RE_INTER_POS", func_146(21), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_580[3 /*17*/]), "INTERACT_INTERVENE", func_146(59), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_580[2 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_580[3 /*17*/]), 1, 0);
	__LIB_2__::func_602(&(Local_687[2 /*17*/]), "RE_INTER_POS", func_146(66), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_687[3 /*17*/]), "RE_INTER_ANTAGONIZE", func_146(67), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_687[1 /*17*/]), "RETC_CUT_FREE", "", joaat("INPUT_CONTEXT_Y"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_687[2 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_687[3 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_687[1 /*17*/]), 0, 0);
	__LIB_4__::func_406(&(Local_687[1 /*17*/]), 1);
	__LIB_3__::func_362(&(Local_687[1 /*17*/]), 4f);
}

void func_46()
{
	__LIB_3__::func_566(&(uLocal_46[0]), -235110358);
	__LIB_3__::func_566(&(uLocal_46[1]), 118073924);
	iLocal_60 = OBJECT::CREATE_OBJECT(joaat("W_MELEE_KNIFE02"), 5f, 5f, 5f, true, true, false, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_46[0], Local_324[0 /*32*/].f_6, Local_324[0 /*32*/].f_9, false, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_46[1], Local_324[1 /*32*/].f_6, Local_324[1 /*32*/].f_9, false, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_46[2], Local_324[2 /*32*/].f_6, Local_324[2 /*32*/].f_9, false, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_46[3], Local_324[3 /*32*/].f_6, Local_324[3 /*32*/].f_9, false, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_46[4], Local_324[4 /*32*/].f_6, Local_324[4 /*32*/].f_9, false, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_46[5], Local_324[5 /*32*/].f_6, Local_324[5 /*32*/].f_9, false, false, true);
	__LIB_1__::func_991(uLocal_46[4], joaat("HONOR_EVENT_STEAL_HORSE"));
	__LIB_1__::func_991(uLocal_46[5], joaat("HONOR_EVENT_STEAL_HORSE"));
	if (__LIB_2__::func_1(uLocal_46[4], 0, 0))
	{
		PED::_0xFFA1594703ED27CA(uLocal_46[4], 4);
	}
	if (__LIB_2__::func_1(uLocal_46[5], 0, 0))
	{
		PED::_0xFFA1594703ED27CA(uLocal_46[5], 5);
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_46[0], false, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_46[1], false, true);
	WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_46[0], joaat("WEAPON_MELEE_TORCH"), 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_46[1], joaat("WEAPON_MELEE_TORCH"), 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_46[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 999, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	if (__LIB_0__::func_214(joaat("WEAPON_MELEE_MACHETE")))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_46[1], joaat("WEAPON_MELEE_MACHETE"), 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	}
	else if (__LIB_0__::func_214(joaat("WEAPON_MELEE_KNIFE")))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_46[1], joaat("WEAPON_MELEE_KNIFE"), 1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	}
	PED::SET_PED_COMBAT_MOVEMENT(uLocal_46[0], 1);
	PED::SET_PED_COMBAT_MOVEMENT(uLocal_46[1], 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_46[0], 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_46[1], 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_46[0], 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_46[1], 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_46[0], 0, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_46[1], 0, false);
	PED::SET_PED_SEEING_RANGE(uLocal_46[0], 15f);
	PED::SET_PED_SEEING_RANGE(uLocal_46[1], 15f);
	PED::SET_PED_HEARING_RANGE(uLocal_46[0], 10f);
	PED::SET_PED_HEARING_RANGE(uLocal_46[1], 10f);
	PED::SET_PED_CAN_BE_TARGETTED(uLocal_46[2], false);
	ENTITY::_0x4B436BAC8CBE9B07(uLocal_46[2], 0, 0);
	PED::SET_PED_CONFIG_FLAG(uLocal_46[2], 263, true);
	PED::SET_PED_RESET_FLAG(uLocal_46[2], 49, true);
	PED::_SET_PED_HEADSHOT_DAMAGE_MULTIPLIER(uLocal_46[2], 0f);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_46[2], false, true);
	PED::_0xD103F6DBB5442BE8(uLocal_46[0], 0);
	PED::_0xD103F6DBB5442BE8(uLocal_46[1], 0);
	PED::_0x89F5E7ADECCCB49C(uLocal_46[2], "injured_general");
	__LIB_4__::func_239(uLocal_46[0]);
	__LIB_4__::func_239(uLocal_46[1]);
	__LIB_3__::func_478(&(Local_324[2 /*32*/].f_22));
	PED::SET_PED_CONFIG_FLAG(uLocal_46[2], 146, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_46[2], 113, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_46[0], 6, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_46[1], 6, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_46[0], 113, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_46[1], 113, true);
	__LIB_3__::func_285(uLocal_46[0], &Local_105, 0);
	__LIB_3__::func_285(uLocal_46[1], &Local_105, 0);
	__LIB_3__::func_285(uLocal_46[2], &Local_105, 0);
	__LIB_4__::func_178(uLocal_46[2], 1060320051 /* Float: 0.7f */);
	__LIB_2__::func_133(uLocal_46[0], "0203_G_M_M_UniInbred_03_WHITE_01", 0);
	__LIB_2__::func_133(uLocal_46[1], "0204_G_M_M_UniInbred_03_WHITE_02", 0);
	__LIB_2__::func_133(uLocal_46[2], "1031_S_M_M_CoachTaxiDriver_01_WHITE_03", 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_46[1], true, 15f);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_46[0], true, 15f);
	__LIB_4__::func_405(uLocal_46[2], &uLocal_91, 1, 1);
	PED::SET_PED_WETNESS_HEIGHT(uLocal_46[2], 1f);
	PED::_0xF9CFF5BB70E8A2CB(uLocal_46[2], 1f);
	PED::SET_PED_SWEAT(uLocal_46[2], 1f);
}

void func_47()
{
	__LIB_2__::func_51(&(Local_105.f_5), 1);
	__LIB_2__::func_180(&(Local_105.f_5), 1);
	__LIB_2__::func_110(&(Local_105.f_5), 1);
	__LIB_2__::func_105(&(Local_105.f_5), 1);
	__LIB_2__::func_50(&(Local_105.f_5), 1);
	__LIB_2__::func_634(&(Local_105.f_5), 1);
	__LIB_2__::func_613(&(Local_105.f_5), 1);
	__LIB_3__::func_407(&(Local_105.f_5), 15f);
	__LIB_2__::func_183(&(Local_105.f_5), 1, 0, 0);
	__LIB_2__::func_507(&(Local_105.f_5), 500);
	__LIB_2__::func_23(&(Local_105.f_5), uLocal_46[2], 0);
	__LIB_2__::func_967(&(Local_105.f_5), uLocal_46[0], uLocal_46[4], 1);
	__LIB_2__::func_967(&(Local_105.f_5), uLocal_46[1], uLocal_46[5], 1);
}

void func_49()
{
	Local_105.f_178 = 1;
	FIRE::STOP_ENTITY_FIRE(uLocal_46[2], 0);
	FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uLocal_46[2], true, false), 30f);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_46[3], Local_324[3 /*32*/].f_6, Local_324[3 /*32*/].f_9, false, false, true);
	ENTITY::SET_ENTITY_COORDS(Local_299[0 /*12*/].f_8, vLocal_39, true, false, true, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_299[1 /*12*/].f_8, vLocal_42, (Local_324[2 /*32*/].f_9 - 90f), true, false, true);
	uLocal_61[0] = GRAPHICS::_0xFA50F79257745E74(vLocal_23[0 /*3*/], 10f, 1, 4, 0);
	uLocal_61[1] = GRAPHICS::_0xFA50F79257745E74(vLocal_23[1 /*3*/], 5f, 1, 3, 0);
	uLocal_61[2] = GRAPHICS::_0xFA50F79257745E74(vLocal_23[2 /*3*/], 5f, 1, 60, 0);
	PED::_0xAE6004120C18DF97(uLocal_46[2], 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("INBRED", &iLocal_65);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, joaat("PLAYER"), iLocal_65);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_46[0], joaat("REL_PLAYER_DISLIKE"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_46[1], joaat("REL_PLAYER_DISLIKE"));
	PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_46[2], 827601);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uLocal_46[2], Local_299[1 /*12*/].f_8, false);
	ENTITY::SET_ENTITY_MAX_HEALTH(uLocal_46[2], 1000);
	ENTITY::_SET_ENTITY_HEALTH(uLocal_46[2], 1000, 0);
	__LIB_1__::func_991(uLocal_46[2], 0);
	__LIB_1__::func_991(uLocal_46[0], 0);
	__LIB_1__::func_991(uLocal_46[1], 0);
}

void func_50()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_529))
	{
		Local_529 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_529.f_4, 0, 0, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_529, vLocal_33, vLocal_36, 2);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_529, "Base_Bool", false, false);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_529.f_1))
	{
		Local_529.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_529.f_5, 64, 0, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_529.f_1, vLocal_33, vLocal_36, 2);
	}
	func_174();
	if ((!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_529, true, false) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_529.f_1, true, false)) && (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_529, true) || !ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_529.f_1, true)))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_529);
		ANIMSCENE::LOAD_ANIM_SCENE(Local_529.f_1);
	}
}

bool func_51()
{
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_529, "PBL_BASE"))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_BASE");
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_529.f_1, "PBL_BACK"))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529.f_1, "PBL_BACK");
	}
	if (func_175())
	{
		return true;
	}
	return false;
}

void func_52()
{
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_CALLOUT_01");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_CALLOUT_02");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_CALLOUTS");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_DIA_01");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_DIA_02");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_DIA_03");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_DIA_04");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_DIA_05");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_DIA_06");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_RETURN");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PL_CowerLeftLoop");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PL_CowerRightLoop");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_SHOT");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_ON_FIRE");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529.f_1, "PBL_FRONT");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529.f_1, "PBL_LEFT");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529.f_1, "PBL_BACK");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529.f_1, "PBL_RIGHT");
}

int func_63(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		iParam4 = (*uParam1 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0]))
		{
			if (__LIB_0__::func_665((*uParam1)[iVar0], Global_35, 1, 1) < fParam2)
			{
				if (!*iParam0 & 4 != 0)
				{
					__LIB_2__::func_613(iParam0, 1);
					return 1;
				}
				return 0;
			}
		}
		iVar0++;
	}
	if (*iParam0 & 4 != 0)
	{
		__LIB_2__::func_613(iParam0, 0);
		return 1;
	}
	return 0;
}

void func_66()
{
	if (ANIMSCENE::_0x1F0E401031E20146(Local_529, "PBL_DIA_06"))
	{
		if (fLocal_797 > 0.6f)
		{
			return;
		}
	}
	else if (ANIMSCENE::_0x1F0E401031E20146(Local_529, "PBL_ON_FIRE"))
	{
		if (fLocal_797 > 0.6f)
		{
			return;
		}
	}
	if (!PED::IS_PED_DEAD_OR_DYING(uLocal_46[2], true))
	{
		if (bLocal_802 == 0)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_46[2], Global_35, 1, 1) && !FIRE::IS_ENTITY_ON_FIRE(uLocal_46[2]))
			{
				if (bLocal_831 == 0)
				{
					PED::_0x58F7DB5BD8FA2288(uLocal_46[2]);
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_529, "PBL_SHOT"))
				{
					if (bLocal_831 == 0)
					{
						bLocal_831 = true;
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_529, "Base_Bool", false, false);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_SHOT", true);
						HUD::_0x052D4AC0922AF91A(9, 3);
						PED::SET_PED_KEEP_TASK(uLocal_46[2], true);
					}
				}
			}
		}
	}
}

void func_67()
{
	vector3 vVar0;
	float fVar3;
	if (ANIMSCENE::_0x1F0E401031E20146(Local_529, "PBL_DIA_06"))
	{
		if (fLocal_797 > 0.6f)
		{
			return;
		}
	}
	if (((__LIB_2__::func_1(uLocal_46[2], 0, 1) && !PED::IS_PED_DEAD_OR_DYING(uLocal_46[2], true)) && bLocal_802 == 0) && iLocal_789 <= 0)
	{
		if (!bLocal_803 && FIRE::IS_ENTITY_ON_FIRE(uLocal_46[2]))
		{
			if (!bLocal_804)
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_46[2], false);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_ON_FIRE", true);
				bLocal_804 = true;
			}
		}
		if (bLocal_804 && ANIMSCENE::_0x1F0E401031E20146(Local_529, "PBL_ON_FIRE"))
		{
			if (fLocal_797 > 0.65f)
			{
				__LIB_1__::func_864(uLocal_46[2], 1, 0);
				if (PHYSICS::DOES_ROPE_EXIST(iLocal_858))
				{
					PHYSICS::DELETE_ROPE(&iLocal_858);
				}
			}
		}
		iLocal_842 = 0;
		if (!bLocal_835 && !bLocal_804)
		{
			if (FIRE::GET_CLOSEST_FIRE_POS(&vVar0, ENTITY::GET_ENTITY_COORDS(uLocal_46[2], true, false)))
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_46[2], true, false), vVar0, true);
				if (fVar3 < 4f)
				{
					iLocal_842 = 1;
					__LIB_1__::func_148(&uLocal_867);
					switch (iLocal_796)
					{
						case 0:
							if (__LIB_2__::func_227(-4f, 1, uLocal_46[2], 1))
							{
								if (func_226(&uLocal_888, uLocal_46[2], PLAYER::PLAYER_PED_ID(), func_146(56), 0.8f, 1))
								{
									func_227(uLocal_46[2], Global_35, 1);
									func_228();
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, sLocal_104, true);
									iLocal_796++;
								}
							}
							break;
						case 1:
							if (__LIB_0__::func_265(&uLocal_903) >= 0.5f)
							{
								if (__LIB_2__::func_227(-4f, 1, uLocal_46[2], 1))
								{
									if (func_226(&uLocal_888, uLocal_46[2], Global_35, func_146(76), 0.8f, 0))
									{
										iLocal_796++;
										__LIB_1__::func_148(&uLocal_903);
									}
								}
							}
							break;
						case 2:
							if (__LIB_0__::func_265(&uLocal_903) >= 2f)
							{
								if (__LIB_2__::func_227(-4f, 1, uLocal_46[2], 1))
								{
									if (func_226(&uLocal_888, uLocal_46[2], Global_35, func_146(77), 1f, 0))
									{
										iLocal_796++;
										__LIB_1__::func_148(&uLocal_903);
									}
								}
							}
							break;
						case 3:
							if (__LIB_0__::func_265(&uLocal_903) >= 1f)
							{
								if (__LIB_2__::func_227(-4f, 1, uLocal_46[2], 1))
								{
									if (func_226(&uLocal_888, uLocal_46[2], Global_35, func_146(78), 0.4f, 0))
									{
										iLocal_796++;
										__LIB_1__::func_148(&uLocal_903);
									}
								}
							}
							break;
						case 4:
							if (__LIB_0__::func_265(&uLocal_903) >= 1f)
							{
								if (__LIB_2__::func_227(-4f, 1, uLocal_46[2], 1))
								{
									if (func_226(&uLocal_888, uLocal_46[2], Global_35, func_146(79), 0.7f, 0))
									{
										iLocal_796++;
										bLocal_835 = true;
									}
								}
							}
							break;
					}
				}
			}
		}
	}
}

void func_68()
{
	if (bLocal_802 == 0)
	{
		if (bLocal_831 == 1)
		{
			func_227(uLocal_46[2], Global_35, 0);
			if (PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_858))
			{
				func_230();
			}
		}
	}
}

void func_69()
{
	int iVar0;
	int iVar1;
	iVar0 = func_232(&(uLocal_46[1]), &(Local_537[0 /*21*/]), 30f, &Local_580, &(Local_105.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 524288, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar1 = func_232(&(uLocal_46[0]), &(Local_537[1 /*21*/]), 30f, &Local_580, &(Local_105.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 524288, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	switch (iLocal_777)
	{
		case 0:
			switch (iLocal_778)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							__LIB_2__::func_411(&(Local_580[2 /*17*/]), 0, 0);
							iLocal_778 = 1;
							break;
						case 3:
							__LIB_2__::func_411(&(Local_580[3 /*17*/]), 0, 0);
							func_73(7);
							iLocal_778 = 2;
							break;
					}
					switch (iVar1)
					{
						case 2:
							__LIB_2__::func_411(&(Local_580[2 /*17*/]), 0, 0);
							iLocal_778 = 1;
							break;
						case 3:
							iLocal_778 = 2;
							__LIB_2__::func_411(&(Local_580[3 /*17*/]), 0, 0);
							__LIB_3__::func_465(11, 0, 0, "RE_HONOR_INTERVENED", uLocal_46[2], 0, 1065353216 /* Float: 1f */, 0);
							func_73(7);
							break;
					}
					break;
				case 1:
					bLocal_841 = true;
					if ((__LIB_2__::func_227(0f, 1, Global_35, 1) && __LIB_2__::func_227(0f, 1, uLocal_46[1], 1)) && __LIB_2__::func_227(0f, 1, uLocal_46[0], 1))
					{
						if (__LIB_2__::func_478(uLocal_46[1], Global_35, func_146(19), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							iLocal_777 = 2;
							iLocal_847 = 1;
							Local_580[2 /*17*/].f_13 = func_146(61);
							Local_580[3 /*17*/].f_13 = func_146(62);
							__LIB_2__::func_360(&(Local_580[2 /*17*/]), "INTERACT_DEFUSE");
							__LIB_2__::func_360(&(Local_580[3 /*17*/]), "INTERACT_INSULT");
							__LIB_2__::func_411(&(Local_580[2 /*17*/]), 1, 0);
							__LIB_2__::func_411(&(Local_580[3 /*17*/]), 1, 0);
							iLocal_778 = 0;
						}
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (__LIB_2__::func_478(uLocal_46[1], Global_35, func_146(65), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_46[0], 0);
							iLocal_778 = 3;
						}
					}
					break;
				case 3:
					func_73(7);
					iLocal_777 = 10;
					break;
			}
			break;
		case 1:
			switch (iLocal_778)
			{
				case 0:
					if (bLocal_841)
					{
						iLocal_777 = 2;
					}
					switch (iVar0)
					{
						case 2:
							iLocal_778 = 1;
							break;
						case 3:
							iLocal_778 = 2;
							break;
					}
					switch (iVar1)
					{
						case 2:
							iLocal_778 = 1;
							break;
						case 3:
							iLocal_778 = 2;
							break;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (__LIB_2__::func_478(uLocal_46[1], Global_35, func_146(64), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							__LIB_1__::func_148(&uLocal_900);
							iLocal_778 = 0;
							iLocal_777 = 4;
							bLocal_837 = false;
						}
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (__LIB_2__::func_478(uLocal_46[1], Global_35, func_146(65), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							__LIB_3__::func_465(11, 0, 0, "RE_HONOR_INTERVENED", uLocal_46[2], 0, 1065353216 /* Float: 1f */, 0);
							bLocal_834 = true;
							func_73(7);
							iLocal_778 = 3;
						}
					}
					break;
				case 3:
					iLocal_777 = 10;
					iLocal_778 = 0;
					break;
			}
			break;
		case 2:
			switch (iLocal_778)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							__LIB_2__::func_411(&(Local_580[2 /*17*/]), 0, 0);
							iLocal_778 = 1;
							break;
						case 3:
							__LIB_2__::func_411(&(Local_580[3 /*17*/]), 0, 0);
							__LIB_3__::func_465(11, 0, 0, "RE_HONOR_INTERVENED", uLocal_46[2], 0, 1065353216 /* Float: 1f */, 0);
							func_73(7);
							iLocal_778 = 2;
							break;
					}
					switch (iVar1)
					{
						case 2:
							__LIB_2__::func_411(&(Local_580[2 /*17*/]), 0, 0);
							iLocal_778 = 1;
							break;
						case 3:
							iLocal_778 = 2;
							__LIB_2__::func_411(&(Local_580[3 /*17*/]), 0, 0);
							__LIB_3__::func_465(11, 0, 0, "RE_HONOR_INTERVENED", uLocal_46[2], 0, 1065353216 /* Float: 1f */, 0);
							func_73(7);
							break;
					}
					break;
				case 1:
					if (iLocal_773 == 5)
					{
						iLocal_786 = 3;
						iLocal_777 = 4;
						iLocal_778 = 0;
						bLocal_837 = false;
					}
					else if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (__LIB_2__::func_478(uLocal_46[1], Global_35, func_146(64), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							iLocal_786 = 3;
							iLocal_778 = 0;
							iLocal_777 = 4;
							bLocal_837 = false;
						}
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (__LIB_2__::func_478(uLocal_46[1], Global_35, func_146(65), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_46[0], 0);
							iLocal_778 = 3;
						}
					}
					break;
				case 3:
					iLocal_777 = 10;
					break;
			}
			break;
		case 4:
			switch (iLocal_778)
			{
				case 0:
					if (__LIB_2__::func_227(0, 1, uLocal_46[1], 1))
					{
						if (!bLocal_837)
						{
							if (!__LIB_2__::func_466(&(Local_580[3 /*17*/]), 1, 0))
							{
								__LIB_3__::func_158(&(Local_580[3 /*17*/]), 0);
								__LIB_2__::func_411(&(Local_580[3 /*17*/]), 1, 0);
								__LIB_1__::func_148(&uLocal_906);
							}
							bLocal_837 = true;
						}
					}
					switch (iVar0)
					{
						case 3:
							iLocal_778 = 2;
							break;
					}
					switch (iVar1)
					{
						case 3:
							iLocal_778 = 2;
							break;
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (__LIB_2__::func_478(uLocal_46[1], Global_35, func_146(65), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							__LIB_3__::func_465(11, 0, 0, "RE_HONOR_INTERVENED", uLocal_46[2], 0, 1065353216 /* Float: 1f */, 0);
							bLocal_834 = true;
							func_73(7);
							iLocal_778 = 3;
						}
					}
					break;
				case 3:
					iLocal_777 = 10;
					iLocal_778 = 0;
					break;
			}
			break;
		case 3:
			switch (iLocal_778)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							iLocal_778 = 1;
							break;
						case 3:
							iLocal_778 = 2;
							break;
					}
					switch (iVar1)
					{
						case 2:
							iLocal_778 = 1;
							break;
						case 3:
							iLocal_778 = 2;
							break;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (__LIB_2__::func_478(uLocal_46[1], Global_35, func_146(30), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							__LIB_3__::func_465(11, 0, 0, "RE_HONOR_INTERVENED", uLocal_46[2], 0, 1065353216 /* Float: 1f */, 0);
							bLocal_834 = true;
							func_73(7);
							iLocal_778 = 3;
						}
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (__LIB_2__::func_478(uLocal_46[1], Global_35, func_146(30), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							__LIB_3__::func_465(11, 0, 0, "RE_HONOR_INTERVENED", uLocal_46[2], 0, 1065353216 /* Float: 1f */, 0);
							bLocal_834 = true;
							func_73(7);
							iLocal_778 = 3;
						}
					}
					break;
				case 3:
					iLocal_777 = 10;
					iLocal_778 = 0;
					break;
			}
			break;
		case 10:
			break;
		case 11:
			break;
	}
}

void func_70()
{
	int iVar0;
	int iVar1;
	if (bLocal_818)
	{
		return;
	}
	if (iLocal_830 == 1)
	{
		if (iLocal_777 == 5)
		{
			if (!bLocal_916)
			{
				bLocal_916 = true;
				__LIB_2__::func_451(&iLocal_666, 0);
			}
			if (bLocal_915)
			{
				bLocal_915 = false;
			}
			iVar1 = __LIB_2__::func_340(2, 2048, 0);
		}
		else
		{
			if (bLocal_916)
			{
				bLocal_916 = false;
			}
			if (!bLocal_915)
			{
				bLocal_915 = true;
				__LIB_2__::func_451(&iLocal_666, 0);
			}
			iVar1 = __LIB_2__::func_340(3, 0, 0);
		}
		iVar0 = func_232(&(uLocal_46[2]), &iLocal_666, 10f, &Local_687, &(Local_105.f_192), 0f, 1, 0, 0, iVar1, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	switch (iVar0)
	{
		case 1:
			bLocal_840 = true;
			iLocal_826 = 1;
			iLocal_777 = 10;
			break;
	}
	switch (iLocal_777)
	{
		case 5:
			if (iLocal_850 == 0)
			{
				if ((__LIB_2__::func_227(0f, 1, Global_35, 1) && __LIB_2__::func_227(0f, 1, uLocal_46[2], 1)) && __LIB_0__::func_264(&uLocal_870) > 2f)
				{
					__LIB_2__::func_411(&(Local_687[2 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_687[3 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_687[1 /*17*/]), 1, 0);
					iLocal_850 = 1;
				}
			}
			switch (iLocal_778)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							__LIB_0__::func_37(&uLocal_888);
							iLocal_828 = 1;
							bLocal_840 = true;
							__LIB_2__::func_411(&(Local_687[3 /*17*/]), 0, 0);
							iLocal_778 = 1;
							break;
						case 3:
							__LIB_0__::func_37(&uLocal_888);
							bLocal_840 = true;
							iLocal_829 = 1;
							__LIB_2__::func_411(&(Local_687[2 /*17*/]), 0, 0);
							iLocal_778 = 2;
							break;
					}
					break;
				case 1:
					__LIB_2__::func_411(&(Local_687[1 /*17*/]), 1, 0);
					if (iLocal_843 == 0)
					{
						if (__LIB_2__::func_227(0f, 1, Global_35, 1) && __LIB_2__::func_227(0f, 1, uLocal_46[2], 1))
						{
							if (__LIB_2__::func_478(uLocal_46[2], Global_35, func_146(68), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_843 = 1;
							}
						}
					}
					else if (__LIB_2__::func_227(-1f, 1, 0, 0))
					{
						__LIB_1__::func_148(&uLocal_867);
						if (__LIB_2__::func_227(0f, 1, Global_35, 1) && __LIB_2__::func_227(0f, 1, uLocal_46[2], 1))
						{
							if (__LIB_2__::func_478(Global_35, uLocal_46[2], func_146(70), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								__LIB_2__::func_411(&(Local_687[1 /*17*/]), 1, 0);
								iLocal_778 = 3;
							}
						}
					}
					break;
				case 2:
					__LIB_2__::func_411(&(Local_687[1 /*17*/]), 1, 0);
					if (iLocal_844 == 0)
					{
						if (__LIB_2__::func_227(0f, 1, Global_35, 1) && __LIB_2__::func_227(0f, 1, uLocal_46[2], 1))
						{
							if (__LIB_2__::func_478(uLocal_46[2], Global_35, func_146(69), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_844 = 1;
							}
						}
					}
					else if (__LIB_2__::func_227(-1f, 1, 0, 0))
					{
						__LIB_1__::func_148(&uLocal_867);
						if (__LIB_2__::func_227(0f, 1, Global_35, 1) && __LIB_2__::func_227(0f, 1, uLocal_46[2], 1))
						{
							if (__LIB_2__::func_478(Global_35, uLocal_46[2], func_146(71), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								__LIB_2__::func_411(&(Local_687[1 /*17*/]), 1, 0);
								iLocal_778 = 3;
							}
						}
					}
					break;
				case 3:
					if (iLocal_828 == 1)
					{
						__LIB_2__::func_411(&(Local_687[3 /*17*/]), 1, 0);
						iLocal_777 = 7;
						iLocal_778 = 0;
					}
					if (iLocal_829 == 1)
					{
						__LIB_2__::func_411(&(Local_687[2 /*17*/]), 1, 0);
						iLocal_777 = 6;
						iLocal_778 = 0;
					}
					break;
			}
			break;
		case 6:
			switch (iLocal_778)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							bLocal_840 = true;
							__LIB_0__::func_37(&uLocal_888);
							iLocal_778 = 1;
							break;
					}
					break;
				case 1:
					if (iLocal_843 == 0)
					{
						if (__LIB_2__::func_227(0f, 1, Global_35, 1))
						{
							if (__LIB_2__::func_478(uLocal_46[2], Global_35, func_146(68), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_843 = 1;
							}
						}
					}
					else if (__LIB_2__::func_227(-1f, 1, 0, 0))
					{
						__LIB_1__::func_148(&uLocal_867);
						if (__LIB_2__::func_227(0f, 1, Global_35, 1))
						{
							if (__LIB_2__::func_478(Global_35, uLocal_46[2], func_146(70), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_778 = 3;
							}
						}
					}
					break;
				case 3:
					__LIB_2__::func_411(&(Local_687[1 /*17*/]), 1, 0);
					iLocal_777 = 8;
					break;
			}
			break;
		case 7:
			switch (iLocal_778)
			{
				case 0:
					switch (iVar0)
					{
						case 3:
							__LIB_0__::func_37(&uLocal_888);
							iLocal_778 = 2;
							break;
					}
					break;
				case 2:
					if (iLocal_844 == 0)
					{
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_46[2], 0);
						if (__LIB_2__::func_227(0f, 1, Global_35, 1))
						{
							if (__LIB_2__::func_478(uLocal_46[2], Global_35, func_146(69), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_844 = 1;
							}
						}
					}
					else if (__LIB_2__::func_227(-1f, 1, 0, 0))
					{
						__LIB_1__::func_148(&uLocal_867);
						if (__LIB_2__::func_227(0f, 1, Global_35, 1))
						{
							if (__LIB_2__::func_478(Global_35, uLocal_46[2], func_146(71), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_778 = 3;
							}
						}
					}
					break;
				case 3:
					__LIB_2__::func_411(&(Local_687[1 /*17*/]), 1, 0);
					iLocal_777 = 8;
					break;
			}
			break;
		case 8:
			break;
		case 9:
			switch (iLocal_778)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							__LIB_2__::func_411(&(Local_687[2 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_687[3 /*17*/]), 0, 0);
							iLocal_778 = 1;
							break;
						case 3:
							__LIB_2__::func_411(&(Local_687[2 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_687[3 /*17*/]), 0, 0);
							iLocal_778 = 2;
							break;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (__LIB_2__::func_478(uLocal_46[2], Global_35, func_146(74), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							bLocal_838 = true;
							iLocal_778 = 3;
						}
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (__LIB_2__::func_478(uLocal_46[2], Global_35, func_146(75), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							bLocal_839 = true;
							iLocal_778 = 3;
						}
					}
					break;
				case 3:
					if (__LIB_2__::func_227(0, 1, uLocal_46[2], 1))
					{
						if (bLocal_838 && !bLocal_839)
						{
							__LIB_2__::func_411(&(Local_687[3 /*17*/]), 1, 0);
						}
						if (bLocal_839 && !bLocal_838)
						{
							__LIB_2__::func_411(&(Local_687[2 /*17*/]), 1, 0);
						}
						__LIB_2__::func_451(&iLocal_666, 0);
						iLocal_778 = 0;
					}
					break;
			}
			break;
	}
}

int func_72()
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (!__LIB_0__::func_272(uLocal_46[iVar1], 75))
		{
			if (ENTITY::_0x808077647856DE62(uLocal_46[iVar1], 1))
			{
				ENTITY::_0x18FF3110CF47115D(uLocal_46[iVar1], 1, 0);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_53[iVar1]))
			{
				MAP::REMOVE_BLIP(&(iLocal_53[iVar1]));
			}
		}
		else
		{
			bVar0 = false;
		}
		iVar1++;
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

void func_73(int iParam0)
{
	iLocal_773 = iParam0;
}

void func_75()
{
	if (__LIB_2__::func_118(uLocal_46[3], 1, 0) <= 40f || __LIB_2__::func_118(uLocal_46[2], 1, 0) <= 40f)
	{
		if (iLocal_801 == 1)
		{
			iLocal_801 = 0;
			func_241();
			func_242();
		}
	}
}

void func_76()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_529, false))
	{
		iLocal_858 = PHYSICS::ADD_ROPE(PED::GET_PED_BONE_COORDS(uLocal_46[2], 37709, 0f, 0f, 0f), 0f, 0f, 0f, 1.5f, 6, 0.5f, 0.5f, 1056964608, false, true, true, 1f, false, 0, true);
		PHYSICS::_0x7A54D82227A139DB(&iLocal_858, 1);
		PHYSICS::_0x522FA3F490E2F7AC(iLocal_858, 0, 1);
		PHYSICS::ATTACH_ENTITIES_TO_ROPE(iLocal_858, uLocal_46[2], uLocal_46[2], 0f, 0f, 0f, 0f, 0f, 0f, fLocal_861, 0, 0, 0, 0, 0, 37709, 7966, 0, 0, 1, 1);
		PHYSICS::_0xFB9153A54AC713E8(iLocal_858, 1);
		AUDIO::_0xF092B6030D6FD49C(iLocal_858, "ROPE_SETTINGS_DEFAULT");
		func_73(1);
	}
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_46[2], true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[2], true);
	func_243();
	func_244();
	func_245();
}

void func_77()
{
	if (__LIB_3__::func_452(&Local_105, 2f, 150f, 80f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[2], true);
		func_247();
		func_248();
		func_249();
		func_250();
		func_251(200, 13);
		func_252();
	}
}

void func_78()
{
	func_248();
	func_247();
	ENTITY::SET_ENTITY_PROOFS(uLocal_46[0], 2, false);
	ENTITY::SET_ENTITY_PROOFS(uLocal_46[1], 2, false);
	Local_105.f_44 = 1;
	if (func_253() == 1 && func_248() == 1)
	{
		__LIB_2__::func_593(&(Local_537[0 /*21*/]), &Local_580);
		__LIB_2__::func_593(&(Local_537[1 /*21*/]), &Local_580);
		__LIB_2__::func_56(uLocal_46[0], 1, 1);
		__LIB_2__::func_56(uLocal_46[1], 1, 1);
		func_73(3);
	}
	func_249();
	if (bLocal_803 == 0)
	{
		if (iLocal_825 == 0)
		{
			func_250();
		}
		else
		{
			func_254();
		}
	}
	else
	{
		func_255();
	}
}

void func_79()
{
	func_249();
	func_256();
	func_257();
	if (__LIB_0__::func_264(&uLocal_876) >= 1f)
	{
		func_73(7);
	}
	if (__LIB_0__::func_665(uLocal_46[0], uLocal_46[1], 1, 1) > 2f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_46[1], 1.5f);
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_46[1], 1f);
	}
	if (__LIB_0__::func_665(uLocal_46[0], uLocal_46[2], 1, 1) > 3f && __LIB_0__::func_665(uLocal_46[1], uLocal_46[2], 1, 1) > 3f)
	{
		ENTITY::SET_ENTITY_PROOFS(uLocal_46[0], 0, false);
		ENTITY::SET_ENTITY_PROOFS(uLocal_46[1], 0, false);
	}
	if (__LIB_2__::func_118(uLocal_46[0], 1, 0) >= 80f || __LIB_2__::func_118(uLocal_46[1], 1, 0) >= 80f)
	{
		func_73(13);
	}
}

void func_80()
{
	float fVar0;
	if (!__LIB_0__::func_75(&uLocal_891))
	{
		__LIB_1__::func_148(&uLocal_891);
	}
	if (iLocal_784 < 6)
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_46[2], 0);
	}
	func_259(uLocal_46[0], Global_35, &uLocal_66, -1, 15, 0);
	func_259(uLocal_46[1], Global_35, &uLocal_66, -1, 15, 0);
	func_259(uLocal_46[2], Global_35, &uLocal_66, -1, 15, 1);
	ENTITY::SET_ENTITY_PROOFS(uLocal_46[0], 0, false);
	ENTITY::SET_ENTITY_PROOFS(uLocal_46[1], 0, false);
	func_88();
	func_260();
	PED::_0x802092B07E3B1EEA(uLocal_46[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
	PED::_0x802092B07E3B1EEA(uLocal_46[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
	Local_105.f_44 = 1;
	PED::_0x58F7DB5BD8FA2288(uLocal_46[0]);
	PED::_0x58F7DB5BD8FA2288(uLocal_46[1]);
	if (__LIB_0__::func_163(uLocal_46[0], 242628503))
	{
		if (WEAPON::_0x07E1C35F0078C3F9(uLocal_46[0], joaat("WEAPON_MELEE_TORCH")) && __LIB_0__::func_265(&uLocal_891) >= 1f)
		{
			WEAPON::_0xCEF4C65DE502D367(uLocal_46[0], 0, 0, 1, 0);
			PED::_0x802092B07E3B1EEA(uLocal_46[0], ENTITY::GET_ENTITY_COORDS(Global_35, false, false), 3);
			iLocal_845 = 1;
		}
		else if (!WEAPON::_0x07E1C35F0078C3F9(uLocal_46[0], joaat("WEAPON_MELEE_TORCH")))
		{
			iLocal_845 = 1;
		}
	}
	if (__LIB_0__::func_163(uLocal_46[1], 242628503))
	{
		if (WEAPON::_0x07E1C35F0078C3F9(uLocal_46[1], joaat("WEAPON_MELEE_TORCH")) && __LIB_0__::func_265(&uLocal_891) >= 1.5f)
		{
			WEAPON::_0xCEF4C65DE502D367(uLocal_46[1], 0, 0, 1, 0);
			PED::_0x802092B07E3B1EEA(uLocal_46[1], ENTITY::GET_ENTITY_COORDS(Global_35, false, false), 3);
			iLocal_846 = 1;
		}
		else
		{
			iLocal_846 = 1;
		}
	}
	if (iLocal_845 == 1)
	{
		if (WEAPON::_0x705BE297EEBDB95D(WEAPON::GET_BEST_PED_WEAPON(uLocal_46[0], false, false)))
		{
			if (func_262(&(uLocal_46[0]), WEAPON::GET_BEST_PED_WEAPON(uLocal_46[0], false, false)))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_46[0], WEAPON::GET_BEST_PED_WEAPON(uLocal_46[0], false, false), false, 0, false, false);
			}
		}
	}
	if (iLocal_846 == 1)
	{
		if (func_262(&(uLocal_46[1]), joaat("WEAPON_MELEE_MACHETE")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_46[1], joaat("WEAPON_MELEE_MACHETE"), false, 0, false, false);
		}
	}
	if ((bLocal_803 == 0 && bLocal_831 == 0) && !(PED::IS_PED_DEAD_OR_DYING(uLocal_46[2], true) || FIRE::IS_ENTITY_ON_FIRE(uLocal_46[2])))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_529, "Base_Bool", false, false);
		if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_529, "Base_Bool") == 0)
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(Local_529, "PBL_BASE"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_BASE", true);
			}
		}
	}
	if (iLocal_823 == 0)
	{
		func_263();
	}
	fVar0 = 0f;
	if (PED::IS_PED_DEAD_OR_DYING(uLocal_46[1], true))
	{
		fVar0 = 0f;
	}
	if ((!PED::IS_PED_DEAD_OR_DYING(uLocal_46[0], true) && __LIB_0__::func_265(&uLocal_891) >= fVar0) && iLocal_799 == 0)
	{
		iLocal_799 = 1;
		if (!MAP::DOES_BLIP_EXIST(iLocal_53[0]))
		{
			iLocal_53[0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_46[0]);
		}
		PED::_0x802092B07E3B1EEA(uLocal_46[1], ENTITY::GET_ENTITY_COORDS(Global_35, false, false), 3);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_855);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_855);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 33554432, 16);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_855);
		TASK::TASK_PERFORM_SEQUENCE(uLocal_46[0], iLocal_855);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_855);
		PED::SET_PED_CONFIG_FLAG(uLocal_46[0], 301, true);
	}
	if (iLocal_800 == 0)
	{
		PED::_0x802092B07E3B1EEA(uLocal_46[1], ENTITY::GET_ENTITY_COORDS(Global_35, false, false), 3);
		iLocal_800 = 1;
		if (!PED::IS_PED_DEAD_OR_DYING(uLocal_46[1], true))
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_53[1]))
			{
				iLocal_53[1] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_46[1]);
			}
		}
		if (func_262(&(uLocal_46[1]), joaat("WEAPON_MELEE_KNIFE")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_46[1], joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
		}
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_856);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_856);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 33554432, 16);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_856);
		TASK::TASK_PERFORM_SEQUENCE(uLocal_46[1], iLocal_856);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_856);
		PED::SET_PED_CONFIG_FLAG(uLocal_46[1], 301, true);
	}
	func_89();
	if (func_72() == 1)
	{
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_858))
		{
			PHYSICS::_0x522FA3F490E2F7AC(iLocal_858, 1, 1);
		}
		if (bLocal_803 == 0 && !ENTITY::IS_ENTITY_DEAD(uLocal_46[2]))
		{
			__LIB_1__::func_148(&uLocal_867);
			__LIB_1__::func_148(&uLocal_903);
			__LIB_1__::func_148(&uLocal_894);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_CALLOUT_01");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_CALLOUT_02");
			__LIB_2__::func_73(uLocal_46[2], &(iLocal_53[2]), -89429847, 580546400, 0, 0);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_53[2], "RE_INTER_STRANGER");
			iLocal_830 = 1;
			__LIB_2__::func_411(&(Local_687[2 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_687[3 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_687[1 /*17*/]), 0, 0);
			Local_687[2 /*17*/].f_13 = func_146(66);
			__LIB_2__::func_360(&(Local_687[2 /*17*/]), "RE_INTER_POS");
			Local_687[3 /*17*/].f_13 = func_146(67);
			__LIB_2__::func_360(&(Local_687[3 /*17*/]), "RE_INTER_ANTAGONIZE");
			Local_687[1 /*17*/].f_13 = "";
			__LIB_2__::func_360(&(Local_687[1 /*17*/]), "RETC_CUT_FREE");
			__LIB_3__::func_621(&(Local_687[1 /*17*/]), 1, 0);
			iLocal_777 = 5;
			iLocal_778 = 0;
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_46[2], true))
			{
				ENTITY::_SET_ENTITY_HEALTH(uLocal_46[2], 30, 0);
			}
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529.f_1, "PBL_FRONT");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529.f_1, "PBL_LEFT");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529.f_1, "PBL_BACK");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529.f_1, "PBL_RIGHT");
			func_266();
			func_73(9);
		}
		else
		{
			func_73(13);
		}
	}
}

void func_81()
{
	func_249();
	func_267();
	func_247();
	func_268();
	if (func_269())
	{
		func_73(7);
	}
}

void func_82()
{
	iLocal_825 = 1;
	if (__LIB_2__::func_227(-4f, 1, 0, 0))
	{
		func_248();
	}
	func_249();
	func_247();
	func_254();
	func_268();
	func_251(100, 13);
}

void func_83()
{
	func_249();
	func_247();
	func_259(uLocal_46[0], Global_35, &uLocal_66, -1, 15, 0);
	func_259(uLocal_46[1], Global_35, &uLocal_66, -1, 15, 0);
	if (func_270())
	{
		func_73(7);
	}
}

void func_84()
{
	int iVar0;
	func_259(Global_35, uLocal_46[2], &uLocal_66, -1, 5, 0);
	func_259(uLocal_46[2], Global_35, &uLocal_66, -1, 15, 1);
	func_271();
	func_272();
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[2]))
	{
		if (func_273() || func_274())
		{
			PED::FORCE_PED_MOTION_STATE(uLocal_46[2], joaat("MOTIONSTATE_IDLE"), false, 0, false);
			__LIB_3__::func_465(13, 0, 0, "RE_HONOR_SAVED_VICTIM", uLocal_46[2], 0, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_451(&iLocal_666, 0);
			func_73(8);
		}
		func_251(150, 12);
		if (__LIB_0__::func_265(&uLocal_894) >= 3f && bLocal_831 == 0)
		{
			if (iLocal_806 == 0 && iLocal_776 < 1)
			{
				if (__LIB_3__::func_453(uLocal_46[2], 0, &(Local_105.f_5), &iLocal_862, 0, 0))
				{
					if (iLocal_862 == 4)
					{
						if (iLocal_806 == 0)
						{
							if (PHYSICS::DOES_ROPE_EXIST(iLocal_858) && !PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_858))
							{
								if (func_226(&uLocal_888, uLocal_46[2], PLAYER::PLAYER_PED_ID(), func_146(55), 0.8f, 0))
								{
									func_228();
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, sLocal_104, true);
									iLocal_822 = 1;
									iLocal_806 = 1;
								}
							}
						}
					}
				}
			}
			if (__LIB_3__::func_453(uLocal_46[2], 0, &(Local_105.f_5), &iLocal_862, 0, 0))
			{
				if (iLocal_862 == 8)
				{
					if (iLocal_807 == 0)
					{
						__LIB_2__::func_461(0);
						if (func_226(&uLocal_873, uLocal_46[2], PLAYER::PLAYER_PED_ID(), func_146(56), 2.5f, 0))
						{
							func_228();
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, sLocal_104, true);
							iLocal_807 = 1;
							__LIB_1__::func_148(&uLocal_873);
						}
					}
					else if (__LIB_0__::func_264(&uLocal_873) > 5f)
					{
						iLocal_822 = 1;
					}
				}
			}
			else
			{
				__LIB_0__::func_37(&uLocal_873);
			}
			if (!bLocal_840 && !bLocal_802)
			{
				if (__LIB_3__::func_453(uLocal_46[2], 0, &(Local_105.f_5), &iLocal_862, 0, 0))
				{
					if (iLocal_862 == 8)
					{
						__LIB_2__::func_411(&(Local_687[2 /*17*/]), 0, 0);
					}
				}
			}
			func_90();
		}
		if (bLocal_831 || bLocal_809)
		{
			if (bLocal_833 == 0)
			{
				bLocal_833 = true;
				__LIB_3__::func_465(4, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, uLocal_46[2], 0, 1065353216 /* Float: 1f */, 0);
			}
			func_73(14);
			if (!ANIMSCENE::_0x1F0E401031E20146(Local_529, "PBL_SHOT"))
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_46[2], Local_529))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_529, "Base_Bool", false, false);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_SHOT", true);
					PED::SET_PED_KEEP_TASK(uLocal_46[2], true);
				}
			}
			if (WEAPON::_0x9E2D5D6BC97A5F1E(uLocal_46[2], __LIB_3__::func_619(Global_35, 0, 0), 1500) || WEAPON::_0x9E2D5D6BC97A5F1E(uLocal_46[2], __LIB_3__::func_619(Global_35, 1, 0), 1500))
			{
				iVar0 = __LIB_3__::func_619(Global_35, 0, 0);
				if (WEAPON::_IS_WEAPON_MELEE(iVar0))
				{
				}
			}
		}
	}
}

void func_85()
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	func_259(uLocal_46[2], Global_35, &uLocal_66, -1, 15, 0);
	func_259(Global_35, uLocal_46[2], &uLocal_66, -1, 5, 0);
	fVar0 = __LIB_0__::func_665(uLocal_46[2], uLocal_46[4], 1, 1);
	fVar1 = __LIB_0__::func_665(uLocal_46[2], uLocal_46[5], 1, 1);
	iVar2 = 0;
	if (fVar0 >= fVar1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	fVar3 = 1f;
	if (iLocal_822 == 1)
	{
		fVar3 = 1.5f;
	}
	if (func_278())
	{
		TASK::CLEAR_PED_SECONDARY_TASK(uLocal_46[2]);
		PED::SET_PED_CONFIG_FLAG(uLocal_46[2], 355, true);
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[4]) && iVar2 == 1)
		{
			TASK::TASK_MOUNT_ANIMAL(uLocal_46[2], uLocal_46[4], -1, -1, fVar3, 1, 0, 0);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[5]))
		{
			TASK::TASK_MOUNT_ANIMAL(uLocal_46[2], uLocal_46[5], -1, -1, fVar3, 1, 0, 0);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_46[2], vLocal_20, 1f, -1, 0.25f, 4, 40000f);
		}
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_46[2], true);
		iLocal_777 = 9;
		iLocal_778 = 0;
		__LIB_2__::func_411(&(Local_687[2 /*17*/]), 1, 0);
		__LIB_2__::func_411(&(Local_687[3 /*17*/]), 1, 0);
		Local_687[2 /*17*/].f_13 = func_146(72);
		__LIB_2__::func_360(&(Local_687[2 /*17*/]), "RE_INTER_POS");
		Local_687[3 /*17*/].f_13 = func_146(73);
		__LIB_2__::func_360(&(Local_687[3 /*17*/]), "RE_INTER_ANTAGONIZE");
		func_73(10);
	}
	func_279();
	func_251(150, 12);
	func_280();
}

void func_86()
{
	func_280();
	func_251(150, 12);
	func_281();
	func_259(uLocal_46[2], Global_35, &uLocal_66, -1, 7, 0);
	func_259(Global_35, uLocal_46[2], &uLocal_66, -1, 7, 0);
	if (((ENTITY::IS_ENTITY_AT_COORD(uLocal_46[2], vLocal_20, 2f, 2f, 5f, false, true, 0) || PED::IS_PED_ON_MOUNT(uLocal_46[2])) || ENTITY::IS_ENTITY_DEAD(uLocal_46[4])) || ENTITY::IS_ENTITY_DEAD(uLocal_46[5]))
	{
		if (!__LIB_0__::func_163(uLocal_46[2], -1665583462))
		{
			TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_46[2], 3f, 4752, 0);
		}
	}
}

void func_87()
{
	func_251(150, 12);
	func_282();
	if (MAP::DOES_BLIP_EXIST(iLocal_53[2]))
	{
		MAP::REMOVE_BLIP(&(iLocal_53[2]));
	}
	if (!PED::IS_PED_FLEEING(uLocal_46[2]) && !__LIB_2__::func_65(uLocal_46[2], Global_35))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_46[2], Global_35, 3, 0, -1f, -1, 0);
	}
	if (PED::IS_PED_DEAD_OR_DYING(uLocal_46[2], true))
	{
		func_73(12);
	}
}

void func_88()
{
	if (bLocal_803 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[2]))
		{
			if (fLocal_797 >= 0.65f)
			{
				ENTITY::SET_ENTITY_PROOFS(uLocal_46[2], 0, false);
				if (!PED::IS_PED_DEAD_OR_DYING(uLocal_46[2], true))
				{
					ENTITY::_SET_ENTITY_HEALTH(uLocal_46[2], 30, 0);
				}
				__LIB_1__::func_864(uLocal_46[2], 1, 0);
			}
		}
	}
}

void func_89()
{
	if (!bLocal_917)
	{
		if (ANIMSCENE::_0x9AAE3C1148A09BCA(Local_529))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[2], false);
		}
	}
}

void func_90()
{
	vector3 vVar0;
	if (iLocal_808 == 0)
	{
		if (func_284())
		{
			iLocal_822 = 1;
			func_228();
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, sLocal_104, true);
			iLocal_808 = 1;
		}
	}
	else if (!bLocal_921)
	{
		bLocal_921 = func_226(&uLocal_888, uLocal_46[2], PLAYER::PLAYER_PED_ID(), func_146(58), 0.8f, 0);
	}
	if (bLocal_809 == 0)
	{
		if (func_285())
		{
			__LIB_3__::func_319(Local_529);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_46[2], false);
			__LIB_1__::func_864(uLocal_46[2], 0, 0);
			vVar0 = { ENTITY::GET_ENTITY_COORDS(uLocal_46[2], true, false) };
			PED::SET_PED_TO_RAGDOLL_WITH_FALL(uLocal_46[2], 1000, 3000, 4, 0f, 0f, -1f, (vVar0.z - 1f), vVar0, vVar0);
			bLocal_809 = true;
			bLocal_831 = true;
			func_73(11);
			if (bLocal_833 == 0)
			{
				bLocal_833 = true;
				__LIB_3__::func_465(4, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, uLocal_46[2], 0, 1065353216 /* Float: 1f */, 0);
			}
		}
	}
}

char* func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_TC_RKR_V1_OCONVO_A";
		case 1:
			return "RE_TC_RKR_V1_OCONVO_B";
		case 2:
			return "RE_TC_RKR_V1_OCONVO_C";
		case 3:
			return "RE_TC_RKR_V1_OCONVO_D";
		case 4:
			return "RE_TC_RKR_V1_OCONVO_E";
		case 5:
			return "RE_TC_RKR_V1_OCONVO_F";
		case 6:
			return "RE_TC_RKR_V1_OCONVO_G";
		case 7:
			return "RE_TC_RKR_V1_OCONVO_H";
		case 8:
			return "RE_TC_RKR_V1_OCONVO_I_B";
		case 9:
			return "RE_TC_RKR_V1_OCONVO_J";
		case 10:
			return "RE_TC_RKR_V1_OCONVO_K";
		case 11:
			return "RE_TC_RKR_V1_OCONVO_L";
		case 12:
			return "RE_TC_RKR_V1_OCONVO_M";
		case 13:
			return "RE_TC_RKR_V1_OCONVO_N";
		case 14:
			return "RE_TC_RKR_V1_THANK_A";
		case 15:
			return "RE_TC_RKR_V1_THANK_B";
		case 16:
			return "RE_TC_RKR_V1_THANK_C";
		case 17:
			return "RE_TC_RKR_V1_THANK_D";
		case 18:
			return "WHATS_YOUR_PROBLEM";
		case 19:
			return "RE_TC_RKR_V1_WARNING_A";
		case 20:
			return "RE_TC_RKR_V1_WARNING_B";
		case 26:
			return "RE_TC_RKR_V1_ATTACKED_A";
		case 27:
			return "PLEAD_HOGTIED";
		case 28:
			return "RE_TC_RKR_V1_ATTACKED_C";
		case 29:
			return "OPENS_FIRE";
		case 30:
			return "CALLOUT_JUST_KILL_EM_NEUTRAL";
		case 31:
			return "RE_TC_RKR_V1_ATTACKED_B";
		case 32:
			return "GANG_TAUNT_GEN";
		case 33:
			return "PLEAD_HOGTIED";
		case 34:
			return "GENERIC_INSULT_HIGH_MALE";
		case 35:
			return "RE_TC_RKR_V1_ATTACKED_D";
		case 36:
			return "GANG_TAUNT_GEN";
		case 37:
			return "RE_TC_RKR_V1_COWARD_A";
		case 38:
			return "RE_TC_RKR_V1_COWARD_B";
		case 39:
			return "RE_TC_RKR_V1_HELP_A";
		case 40:
			return "RE_TC_RKR_V1_HELP_B";
		case 41:
			return "RE_TC_RKR_V1_HELP_C";
		case 42:
			return "RE_TC_RKR_V1_HELP_D";
		case 43:
			return "RE_TC_RKR_V1_HELP_E";
		case 44:
			return "VICTIMIZED_REACT";
		case 21:
			return "RE_TV_RKR_V1_INTRO_ANTAGONIZE";
		case 22:
			return "RE_TC_RKR_V1_WARNING_FEUD";
		case 23:
			return "RE_TC_RKR_V1_PLAYER_CLOSE_A";
		case 24:
			return "RE_TC_RKR_V1_PLAYER_CLOSE_B";
		case 25:
			return "RE_TC_RKR_V1_PLAYER_CLOSE_C";
		case 45:
			return "RE_TC_RKR_V1_PLAYER_CLOSE_FEUD";
		case 46:
			return "RE_TC_RKR_V1_LEAVE";
		case 47:
			return "FINAL_WARNING";
		case 48:
			return "PLAYER_AIMING_NOBODY";
		case 50:
			return "RE_TC_RKR_V1_COWARD_A";
		case 49:
			return "RE_TC_RKR_V1_COWARD_B";
		case 51:
			return "RE_TC_RKR_V1_AGGRO_A";
		case 52:
			return "RE_TC_RKR_V1_AGGRO_B";
		case 53:
			return "RE_TC_RKR_V1_AGGRO_C";
		case 54:
			return "RE_TC_RKR_V1_AGGRO_D";
		case 55:
			return "RE_TC_RKR_V1_AGGRO_E";
		case 56:
			return "PLEAD";
		case 57:
			return "RE_TC_RKR_V1_FIRE";
		case 58:
			return "RE_TC_RKR_V1_AGGRO_G";
		case 59:
			return "RE_TC_RKR_V1_NEGATIVE_PLAYER_A0";
		case 60:
			return "RE_TC_RKR_V1_NEGATIVE_PLAYER_A1";
		case 61:
			return "RE_TC_RKR_V1_POSITIVE_PLAYER_A";
		case 62:
			return "RE_TC_RKR_V1_NEGATIVE_PLAYER_A";
		case 63:
			return "RE_TC_RKR_V1_ROB_PLAYER_A";
		case 64:
			return "HEADS_UP_GANG_TERRITORY";
		case 65:
			return "TAUNT_GEN_LOCATION";
		case 66:
			return "RE_TC_RKR_V1_POSITIVE_PLAYER_B";
		case 67:
			return "RE_TC_RKR_V1_NEGATIVE_PLAYER_B";
		case 68:
			return "RE_TC_RKR_V1_POSITIVE_CAPTIVE_B";
		case 69:
			return "RE_TC_RKR_V1_NEGATIVE_CAPTIVE_B";
		case 70:
			return "RE_TC_RKR_V1_POSITIVE_PLAYER_B_B";
		case 71:
			return "RE_TC_RKR_V1_NEGATIVE_PLAYER_B_B";
		case 72:
			return "RE_TC_RKR_V1_POSITIVE_PLAYER_C";
		case 73:
			return "RE_TC_RKR_V1_NEGATIVE_PLAYER_C";
		case 74:
			return "RE_TC_RKR_V1_POSITIVE_CAPTIVE_C";
		case 75:
			return "RE_TC_RKR_V1_NEGATIVE_CAPTIVE_C";
		case 76:
			return "SCARED_HELP";
		case 77:
			return "GENERIC_FRIGHTENED_MED";
		case 78:
			return "PANIC_HELP";
		case 79:
			return "PANIC_HELP";
		default:
			break;
	}
	return "";
}

void func_174()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_529, "Victim", uLocal_46[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_529.f_1, "Victim", uLocal_46[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_529.f_1, "player", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_529.f_1, "Knife", iLocal_60, 0);
}

bool func_175()
{
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_529, "PBL_BASE") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_529.f_1, "PBL_BACK"))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_BASE", true);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529.f_1, "PBL_BACK", true);
		return true;
	}
	return false;
}

bool func_226(var uParam0, int iParam1, int iParam2, char* sParam3, float fParam4, int iParam5)
{
	if (!__LIB_0__::func_75(uParam0))
	{
		__LIB_1__::func_148(uParam0);
	}
	else if (__LIB_0__::func_265(uParam0) > fParam4)
	{
		__LIB_2__::func_478(iParam1, iParam2, sParam3, 0, -1082130432 /* Float: -1f */, iParam5, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_0__::func_37(uParam0);
		return true;
	}
	return false;
}

int func_227(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam1) * FtoV((ENTITY::GET_ENTITY_SPEED(iParam1) * 0f)) };
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar9 = { vVar3 - vVar0 };
	fVar12 = __LIB_1__::func_507(vVar6, vVar9);
	fVar13 = 0.707f;
	if (MISC::ABSF(fVar12) > fVar13)
	{
		if (fVar12 > 0f)
		{
			iLocal_97 = 0;
		}
		else if (__LIB_0__::func_195(vVar0, vVar0 + vVar6, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)))
		{
			iLocal_97 = 1;
		}
		else
		{
			iLocal_97 = 2;
		}
	}
	else if (__LIB_0__::func_195(vVar0, vVar0 + vVar6, vVar3))
	{
		iLocal_97 = 3;
	}
	else
	{
		iLocal_97 = 4;
	}
	if (iParam2 == 1)
	{
	}
	return iLocal_97;
}

void func_228()
{
	switch (func_227(uLocal_46[2], Global_35, 1))
	{
		case 0:
			sLocal_104 = "PL_CowerLeftLoop";
			break;
		case 2:
			sLocal_104 = "PL_CowerRightLoop";
			break;
		case 1:
			sLocal_104 = "PL_CowerLeftLoop";
			break;
		case 3:
			sLocal_104 = "PL_CowerLeftLoop";
			break;
		case 4:
			sLocal_104 = "PL_CowerRightLoop";
			break;
	}
}

void func_230()
{
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uLocal_46[2], 209);
	ENTITY::SET_ENTITY_PROOFS(uLocal_46[2], 0, false);
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_46[2], false);
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_529, "Victim", uLocal_46[2]);
	PED::SET_PED_TO_RAGDOLL(uLocal_46[2], 1000, 4000, 0, false, true, false);
	bLocal_802 = true;
	func_419();
}

int func_232(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_421(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_241()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_94, &iVar0);
	GRAPHICS::_0x41F88A85A579A61D(0.5f);
	iVar1 = 0;
	while (iVar1 <= iVar0)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_94, iVar1, &vVar2);
		GRAPHICS::_0xDD9DC1AB63D513CE(vVar2);
		iVar1++;
	}
	GRAPHICS::_0x812C1563185C6FB2();
}

void func_242()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_46[3]))
	{
		GRAPHICS::_CREATE_BLOOD_POOLS_FROM_PED(uLocal_46[3], 2f, 2.2f, 1f);
	}
}

void func_243()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_529, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_529, false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_529);
	}
}

void func_244()
{
	var uVar0;
	var uVar1;
	if (!__LIB_0__::func_163(uLocal_46[0], -76381094))
	{
		__LIB_2__::func_106(&(Local_324[0 /*32*/].f_6), 1, 10, 0);
		uVar0 = TASK::CREATE_SCENARIO_POINT(iLocal_99, Local_324[0 /*32*/].f_6, Local_324[0 /*32*/].f_9, 0, 0, 1);
		TASK::_TASK_USE_SCENARIO_POINT(uLocal_46[0], uVar0, sLocal_101, 0, false, true, 0, false, -1f, false);
	}
	if (!__LIB_0__::func_163(uLocal_46[1], -76381094))
	{
		__LIB_2__::func_106(&(Local_324[1 /*32*/].f_6), 1, 10, 0);
		uVar1 = TASK::CREATE_SCENARIO_POINT(iLocal_100, Local_324[1 /*32*/].f_6, Local_324[1 /*32*/].f_9, 0, 0, 1);
		TASK::_TASK_USE_SCENARIO_POINT(uLocal_46[1], uVar1, sLocal_102, 0, false, true, 0, false, -1f, false);
	}
}

void func_245()
{
	if (!__LIB_0__::func_163(uLocal_46[3], -2017877118) && !ENTITY::IS_ENTITY_DEAD(uLocal_46[3]))
	{
		__LIB_1__::func_864(uLocal_46[3], 0, 0);
	}
}

void func_247()
{
	if (__LIB_0__::func_75(&uLocal_918))
	{
		if (!__LIB_1__::func_285(&uLocal_918, 3f))
		{
			return;
		}
	}
	__LIB_3__::func_524(&iLocal_914);
	if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), ENTITY::GET_ENTITY_COORDS(uLocal_46[0], true, false), 5f))
	{
		iLocal_914 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), uLocal_46[0], 0f, 60f, 80f, 15f, -1f, 180f, false, false, -1, -1);
		__LIB_1__::func_148(&uLocal_918);
	}
}

bool func_248()
{
	func_259(uLocal_46[0], uLocal_46[2], &uLocal_66, -1, 15, 0);
	func_259(uLocal_46[1], uLocal_46[2], &uLocal_66, -1, 15, 0);
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_529, "PBL_BASE"))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529, "PBL_BASE");
	}
	func_428();
	switch (iLocal_784)
	{
		case 0:
			if ((__LIB_2__::func_227(-4f, 1, 0, 0) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_529, "PBL_BASE")) && ANIMSCENE::_0x1F0E401031E20146(Local_529, "PBL_BASE"))
			{
				if (__LIB_2__::func_478(uLocal_46[2], uLocal_46[1], func_146(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0))
				{
					__LIB_2__::func_315(1891783641, uLocal_46[2], 1);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_BASE", true);
					iLocal_784++;
					__LIB_1__::func_148(&uLocal_897);
					iLocal_793 = 2;
				}
			}
			break;
		case 1:
			if ((TASK::_0x02EBBB3989B7E695(uLocal_46[0]) && TASK::_0x02EBBB3989B7E695(uLocal_46[1])) && __LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (func_430("RETORCAP_LINE03", "RETORCAP_LINE03"))
				{
					if (__LIB_2__::func_478(uLocal_46[0], uLocal_46[2], func_146(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0) && __LIB_2__::func_478(uLocal_46[2], uLocal_46[0], func_146(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						func_431();
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_DIA_03", true);
						__LIB_2__::func_315(1891783641, uLocal_46[2], 1);
						__LIB_1__::func_148(&uLocal_897);
						iLocal_793 = 5;
						iLocal_784++;
					}
				}
			}
			break;
		case 2:
			if (__LIB_5__::func_746(uLocal_46[0], "RETORCAP_LINE03", 1068708659 /* Float: 1.4f */, 0) || __LIB_5__::func_746(uLocal_46[1], "RETORCAP_LINE03", 1068708659 /* Float: 1.4f */, 0))
			{
				iLocal_784++;
			}
			break;
		case 3:
			if ((((!__LIB_5__::func_746(uLocal_46[0], "RETORCAP_LINE03", 1068708659 /* Float: 1.4f */, 0) && !__LIB_5__::func_746(uLocal_46[1], "RETORCAP_LINE03", 1068708659 /* Float: 1.4f */, 0)) && TASK::_0x02EBBB3989B7E695(uLocal_46[0])) && TASK::_0x02EBBB3989B7E695(uLocal_46[1])) && __LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (func_430("RETORCAP_LINE04", "RETORCAP_LINE04"))
				{
					if (__LIB_2__::func_478(uLocal_46[0], uLocal_46[2], func_146(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_DIA_04", true);
						__LIB_1__::func_148(&uLocal_897);
						iLocal_793 = 6;
						func_431();
						iLocal_784++;
					}
				}
			}
			break;
		case 4:
			if (__LIB_5__::func_746(uLocal_46[0], "RETORCAP_LINE04", 1068708659 /* Float: 1.4f */, 0) || __LIB_5__::func_746(uLocal_46[1], "RETORCAP_LINE04", 1068708659 /* Float: 1.4f */, 0))
			{
				iLocal_784++;
			}
			break;
		case 5:
			if (!__LIB_5__::func_746(uLocal_46[0], "RETORCAP_LINE04", 1068708659 /* Float: 1.4f */, 0))
			{
				if (!__LIB_5__::func_746(uLocal_46[1], "RETORCAP_LINE04", 1068708659 /* Float: 1.4f */, 0))
				{
					if (TASK::_0x02EBBB3989B7E695(uLocal_46[0]))
					{
						if (TASK::_0x02EBBB3989B7E695(uLocal_46[1]))
						{
							if (__LIB_2__::func_227(-4f, 1, 0, 0))
							{
								if (func_430("RETORCAP_LINE05", "RETORCAP_LINE05"))
								{
									if (__LIB_2__::func_478(uLocal_46[0], uLocal_46[2], func_146(8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
									{
										ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_DIA_05", true);
										func_431();
										iLocal_784++;
									}
								}
							}
						}
					}
				}
			}
			break;
		case 6:
			if (__LIB_5__::func_746(uLocal_46[0], "RETORCAP_LINE05", 1068708659 /* Float: 1.4f */, 0) || __LIB_5__::func_746(uLocal_46[1], "RETORCAP_LINE05", 1068708659 /* Float: 1.4f */, 0))
			{
				iLocal_784++;
			}
			break;
		case 7:
			if ((((!__LIB_5__::func_746(uLocal_46[0], "RETORCAP_LINE05", 1068708659 /* Float: 1.4f */, 0) && !__LIB_5__::func_746(uLocal_46[1], "RETORCAP_LINE05", 1068708659 /* Float: 1.4f */, 0)) && TASK::_0x02EBBB3989B7E695(uLocal_46[0])) && TASK::_0x02EBBB3989B7E695(uLocal_46[1])) && __LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (func_430("RETORCAP_LINE06", "RETORCAP_LINE06"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_DIA_06", true);
					iLocal_824 = 1;
					iLocal_784++;
					iLocal_777 = 10;
					func_431();
					__LIB_2__::func_411(&(Local_580[3 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_580[2 /*17*/]), 0, 0);
					func_73(2);
				}
			}
			break;
		case 8:
			if (__LIB_5__::func_746(uLocal_46[0], "RETORCAP_LINE06", 1068708659 /* Float: 1.4f */, 0) && __LIB_5__::func_746(uLocal_46[1], "RETORCAP_LINE06", 1068708659 /* Float: 1.4f */, 0))
			{
				iLocal_784++;
			}
			break;
		case 9:
			if (__LIB_2__::func_227(5f, 1, 0, 0))
			{
				iLocal_784++;
			}
			break;
		case 10:
			if (__LIB_2__::func_227(5f, 1, 0, 0))
			{
				iLocal_784++;
			}
			break;
		case 11:
			if (!__LIB_5__::func_746(uLocal_46[0], "RETORCAP_LINE06", 1068708659 /* Float: 1.4f */, 0))
			{
				if (!__LIB_0__::func_163(uLocal_46[0], 242628503))
				{
					PED::FORCE_PED_MOTION_STATE(uLocal_46[0], joaat("MOTIONSTATE_IDLE"), false, 0, false);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_855);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_855);
					TASK::TASK_MOUNT_ANIMAL(0, uLocal_46[4], -1, -1, 1f, 1, 0, 0);
					TASK::_TASK_MOVE_IN_TRAFFIC(0, -1082130432 /* Float: -1f */, 1024, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_855);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_46[0], iLocal_855);
				}
			}
			if (!__LIB_5__::func_746(uLocal_46[1], "RETORCAP_LINE06", 1068708659 /* Float: 1.4f */, 0))
			{
				if (!__LIB_0__::func_163(uLocal_46[1], 242628503))
				{
					PED::FORCE_PED_MOTION_STATE(uLocal_46[1], joaat("MOTIONSTATE_IDLE"), false, 0, false);
					WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_46[1], joaat("WEAPON_MELEE_TORCH"), 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_856);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_856);
					TASK::TASK_MOUNT_ANIMAL(0, uLocal_46[5], -1, -1, 1f, 1, 0, 0);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_46[0], -2f, -2f, 0f, 1.5f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_856);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_46[1], iLocal_856, 0.5f, 0.5f);
				}
			}
			if (!__LIB_5__::func_746(uLocal_46[0], "RETORCAP_LINE06", 1068708659 /* Float: 1.4f */, 0) && !__LIB_5__::func_746(uLocal_46[1], "RETORCAP_LINE06", 1068708659 /* Float: 1.4f */, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_249()
{
	bool bVar0;
	bVar0 = false;
	if (__LIB_4__::func_52(&uLocal_46, &(Local_105.f_5), &iLocal_862, &uLocal_791, 0, 1, 1))
	{
		bVar0 = true;
	}
	else if (func_434())
	{
		bVar0 = true;
	}
	else if (func_435())
	{
		bVar0 = true;
	}
	if (iLocal_862 == 4)
	{
		if (!__LIB_0__::func_75(&uLocal_909))
		{
			__LIB_1__::func_283(&uLocal_909, 0);
		}
	}
	if (bVar0)
	{
		if (!__LIB_0__::func_75(&uLocal_909) || __LIB_0__::func_264(&uLocal_909) > 0.25f)
		{
			if (Local_105.f_46 == 0)
			{
				__LIB_1__::func_148(&uLocal_876);
				__LIB_2__::func_461(0);
				PED::_0x58F7DB5BD8FA2288(uLocal_46[0]);
				PED::_0x58F7DB5BD8FA2288(uLocal_46[1]);
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_46[0], 0);
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_46[1], 0);
				if (bLocal_803 == 0)
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_46[2], 0);
				}
				if (!PED::IS_PED_INJURED(uLocal_46[2]))
				{
					__LIB_3__::func_465(11, 0, 0, "RE_HONOR_INTERVENED", uLocal_46[2], 0, 1065353216 /* Float: 1f */, 0);
				}
				func_73(7);
				Local_105.f_46 = 1;
			}
		}
		return 1;
	}
	return 0;
}

int func_250()
{
	bool bVar0;
	bVar0 = false;
	if (PED::_GET_PED_CROUCH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		vLocal_852 = { 0f, 0f, 0f };
		PED::SET_PED_SEEING_RANGE(uLocal_46[0], 10f);
		PED::SET_PED_SEEING_RANGE(uLocal_46[1], 10f);
	}
	else
	{
		vLocal_852 = { 7f, 7f, 10f };
		PED::SET_PED_SEEING_RANGE(uLocal_46[0], 15f);
		PED::SET_PED_SEEING_RANGE(uLocal_46[1], 15f);
	}
	if (__LIB_0__::func_665(uLocal_46[0], PLAYER::PLAYER_PED_ID(), 1, 1) <= 12f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_46[0], PLAYER::PLAYER_PED_ID(), 17))
	{
		if (bVar0 == 0)
		{
			bVar0 = true;
		}
	}
	if (__LIB_0__::func_665(uLocal_46[1], PLAYER::PLAYER_PED_ID(), 1, 1) <= 12f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_46[1], PLAYER::PLAYER_PED_ID(), 17))
	{
		if (bVar0 == 0)
		{
			bVar0 = true;
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_46[0], true, false), vLocal_852, false, true, 0))
	{
		if (PED::_0x7F9B9791D4CB71F6(uLocal_46[0], Global_35, 0, 0) == 1)
		{
			if (bVar0 == 0)
			{
				bVar0 = true;
			}
		}
	}
	if (bLocal_841)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if ((__LIB_3__::func_496(uLocal_46[0], "safeReact", 1067030938 /* Float: 1.2f */) && __LIB_3__::func_496(uLocal_46[1], "safeReact", 1067030938 /* Float: 1.2f */)) || fLocal_797 > 0.99f)
		{
			Local_105.f_44 = 1;
			if (bLocal_803 == 0 && iLocal_824 == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_529, "Base_Bool", false, false);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_BASE", true);
			}
			func_73(4);
			return 1;
		}
	}
	return 0;
}

void func_251(int iParam0, int iParam1)
{
	if (__LIB_2__::func_118(uLocal_46[2], 1, 0) > IntToFloat(iParam0))
	{
		iLocal_773 = iParam1;
	}
}

void func_252()
{
	if (!bLocal_836)
	{
		if (((__LIB_3__::func_146(joaat("HIGHPRESSURE")) || __LIB_3__::func_146(joaat("CLOUDS"))) || __LIB_3__::func_146(joaat("SUNNY"))) || __LIB_3__::func_146(joaat("OVERCAST")))
		{
			MISC::_SET_WEATHER_TYPE(joaat("FOG"), false, true, true, 10f, false);
			bLocal_836 = true;
		}
	}
}

int func_253()
{
	switch (iLocal_789)
	{
		case 0:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_46[0], 435790525))
			{
				WEAPON::_0xCEF4C65DE502D367(uLocal_46[0], 0, 0, 1, 0);
				PED::_0x802092B07E3B1EEA(uLocal_46[0], ENTITY::GET_ENTITY_COORDS(Global_35, false, false), 3);
				__LIB_2__::func_315(1515458263, uLocal_46[2], 1);
				iLocal_845 = 1;
				iLocal_789++;
			}
			break;
		case 1:
			if (!FIRE::IS_ENTITY_ON_FIRE(uLocal_46[2]))
			{
				FIRE::START_ENTITY_FIRE(uLocal_46[2], 0, PED::GET_PED_BONE_INDEX(uLocal_46[2], 53081), 4);
				iLocal_45 = FIRE::START_SCRIPT_FIRE(ENTITY::GET_ENTITY_COORDS(uLocal_46[2], true, false) - Vector(1f, 0f, 0f), 1, 0f, false, 0, -1f, 6);
				bLocal_803 = true;
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_46[2], false);
				ENTITY::SET_ENTITY_PROOFS(uLocal_46[2], 2, false);
				iLocal_789++;
				__LIB_3__::func_158(&(Local_580[2 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_580[3 /*17*/]), 0);
				iLocal_777 = 3;
				iLocal_778 = 0;
				__LIB_2__::func_411(&(Local_580[2 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_580[3 /*17*/]), 0, 0);
				Local_580[2 /*17*/].f_13 = func_146(21);
				__LIB_2__::func_360(&(Local_580[2 /*17*/]), "RE_INTER_POS");
				Local_580[3 /*17*/].f_13 = func_146(60);
				__LIB_2__::func_360(&(Local_580[3 /*17*/]), "RE_INTER_ANTAGONIZE");
				return 1;
			}
			break;
		case 2:
			if (iLocal_848 == 0)
			{
				if (fLocal_797 >= 0.3f)
				{
					__LIB_2__::func_411(&(Local_580[2 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_580[3 /*17*/]), 1, 0);
					iLocal_848 = 1;
				}
			}
			if (fLocal_797 >= 0.65f)
			{
				if (__LIB_2__::func_1(uLocal_46[2], 0, 1))
				{
					ENTITY::SET_ENTITY_PROOFS(uLocal_46[2], 0, false);
					if (!PED::IS_PED_DEAD_OR_DYING(uLocal_46[2], true))
					{
						ENTITY::_SET_ENTITY_HEALTH(uLocal_46[2], 30, 0);
					}
					__LIB_1__::func_864(uLocal_46[2], 1, 0);
					func_419();
					if (PHYSICS::DOES_ROPE_EXIST(iLocal_858))
					{
						PHYSICS::DELETE_ROPE(&iLocal_858);
					}
				}
			}
			if (func_248())
			{
				__LIB_1__::func_148(&uLocal_882);
				iLocal_789++;
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&uLocal_882) >= 5f)
			{
				if (FIRE::IS_ENTITY_ON_FIRE(uLocal_46[2]))
				{
					FIRE::STOP_ENTITY_FIRE(uLocal_46[2], 0);
				}
				FIRE::REMOVE_SCRIPT_FIRE(iLocal_45);
				iLocal_789++;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

int func_254()
{
	bool bVar0;
	bVar0 = false;
	if (PED::_GET_PED_CROUCH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		vLocal_852 = { 0f, 0f, 0f };
		PED::SET_PED_SEEING_RANGE(uLocal_46[0], 10f);
		PED::SET_PED_SEEING_RANGE(uLocal_46[1], 10f);
	}
	else
	{
		vLocal_852 = { 7f, 7f, 10f };
		PED::SET_PED_SEEING_RANGE(uLocal_46[0], 15f);
		PED::SET_PED_SEEING_RANGE(uLocal_46[1], 15f);
	}
	if (__LIB_0__::func_665(uLocal_46[0], PLAYER::PLAYER_PED_ID(), 1, 1) <= 12f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_46[0], PLAYER::PLAYER_PED_ID(), 17))
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_665(uLocal_46[1], PLAYER::PLAYER_PED_ID(), 1, 1) <= 12f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_46[1], PLAYER::PLAYER_PED_ID(), 17))
	{
		bVar0 = true;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_46[0], true, false), vLocal_852, false, true, 0))
	{
		if (PED::_0x7F9B9791D4CB71F6(uLocal_46[0], Global_35, 0, 0) == 1)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		Local_105.f_44 = 1;
		if (__LIB_0__::func_265(&uLocal_864) >= 3f && !func_438())
		{
			PED::_0x802092B07E3B1EEA(uLocal_46[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			PED::_0x802092B07E3B1EEA(uLocal_46[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			if (bLocal_803 == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_529, "Base_Bool", false, false);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_BASE", true);
			}
			func_73(6);
		}
		return 1;
	}
	return 0;
}

int func_255()
{
	bool bVar0;
	bVar0 = false;
	if (PED::_GET_PED_CROUCH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		vLocal_852 = { 0f, 0f, 0f };
		PED::SET_PED_SEEING_RANGE(uLocal_46[0], 10f);
		PED::SET_PED_SEEING_RANGE(uLocal_46[1], 10f);
	}
	else
	{
		vLocal_852 = { 7f, 7f, 10f };
		PED::SET_PED_SEEING_RANGE(uLocal_46[0], 15f);
		PED::SET_PED_SEEING_RANGE(uLocal_46[1], 15f);
	}
	if (__LIB_0__::func_665(uLocal_46[0], PLAYER::PLAYER_PED_ID(), 1, 1) <= 12f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_46[0], PLAYER::PLAYER_PED_ID(), 17))
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_665(uLocal_46[1], PLAYER::PLAYER_PED_ID(), 1, 1) <= 12f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_46[1], PLAYER::PLAYER_PED_ID(), 17))
	{
		bVar0 = true;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_46[0], true, false), vLocal_852, false, true, 0))
	{
		if (PED::_0x7F9B9791D4CB71F6(uLocal_46[0], Global_35, 0, 0) == 1)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		Local_105.f_44 = 1;
		if (!func_438())
		{
			PED::_0x802092B07E3B1EEA(uLocal_46[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			PED::_0x802092B07E3B1EEA(uLocal_46[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			if (bLocal_803 == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_529, "Base_Bool", false, false);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_BASE", true);
			}
			func_73(6);
		}
		return 1;
	}
	return 0;
}

int func_256()
{
	bool bVar0;
	bVar0 = false;
	func_259(uLocal_46[0], Global_35, &uLocal_66, -1, 15, 0);
	func_259(uLocal_46[1], Global_35, &uLocal_66, -1, 15, 0);
	if (PED::_GET_PED_CROUCH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		vLocal_852 = { 0f, 0f, 0f };
		PED::SET_PED_SEEING_RANGE(uLocal_46[0], 4f);
		PED::SET_PED_SEEING_RANGE(uLocal_46[1], 4f);
	}
	else
	{
		vLocal_852 = { 7f, 7f, 10f };
		PED::SET_PED_SEEING_RANGE(uLocal_46[0], 15f);
		PED::SET_PED_SEEING_RANGE(uLocal_46[1], 15f);
	}
	if (__LIB_0__::func_665(uLocal_46[0], PLAYER::PLAYER_PED_ID(), 1, 1) <= 12f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_46[0], PLAYER::PLAYER_PED_ID(), 17))
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_665(uLocal_46[1], PLAYER::PLAYER_PED_ID(), 1, 1) <= 12f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_46[1], PLAYER::PLAYER_PED_ID(), 17))
	{
		bVar0 = true;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_46[0], true, false), vLocal_852, false, true, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_439();
		return 1;
	}
	return 0;
}

int func_257()
{
	switch (iLocal_795)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (func_226(&uLocal_888, uLocal_46[0], PLAYER::PLAYER_PED_ID(), func_146(46), 1f, 0))
				{
					iLocal_795++;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(1f, 1, 0, 0))
			{
				if (__LIB_2__::func_478(uLocal_46[1], PLAYER::PLAYER_PED_ID(), func_146(46), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_795 = 2;
				}
			}
			break;
		case 2:
			iLocal_795++;
			return 1;
	}
	return 0;
}

void func_259(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	if (iParam5 == 1)
	{
		uParam2->f_17 = 0;
		uParam2->f_18 = 0;
	}
	else
	{
		uParam2->f_17 = 4;
		uParam2->f_18 = 4;
	}
	if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) <= IntToFloat(iParam4))
	{
		TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, iParam3, 2108, 51, 1);
	}
	else
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

void func_260()
{
	if (__LIB_2__::func_118(uLocal_46[0], 1, 0) >= 25f || PED::IS_PED_DEAD_OR_DYING(uLocal_46[2], true))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(uLocal_46[0], false);
		PED::REMOVE_PED_DEFENSIVE_AREA(uLocal_46[1], false);
	}
}

bool func_262(var uParam0, int iParam1)
{
	int iVar0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &iVar0, true, 0, false))
	{
		if (iVar0 == iParam1)
		{
			return true;
		}
	}
	return false;
}

void func_263()
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	func_272();
	if (bLocal_834 == 0)
	{
		uVar0[0] = uLocal_46[0];
		uVar0[1] = uLocal_46[1];
		iVar3 = 0;
		while (iVar3 < 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar3]))
			{
				__LIB_3__::func_453(uVar0[iVar3], 0, &(Local_105.f_5), &iLocal_862, 0, 0);
				if (PED::_IS_PED_HOGTIED(uLocal_46[0]) || PED::_IS_PED_LASSOED(uLocal_46[0]))
				{
					if (iLocal_810 == 0)
					{
						iLocal_810 = 1;
						iLocal_787 = 1;
					}
				}
				if (PED::_IS_PED_HOGTIED(uLocal_46[1]) || PED::_IS_PED_LASSOED(uLocal_46[1]))
				{
					if (iLocal_811 == 0)
					{
						iLocal_811 = 1;
						iLocal_787 = 1;
					}
				}
				if (iLocal_862 == 8)
				{
					if (iLocal_812 == 0)
					{
						iLocal_812 = 1;
						iLocal_787 = 3;
					}
				}
				if (iLocal_862 == 16)
				{
					if (iLocal_813 == 0)
					{
						iLocal_787 = 5;
						iLocal_813 = 1;
					}
				}
				if (((iLocal_862 == 4 || iLocal_862 == 256) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uVar0[iVar3], Global_35, 1, 1)) || func_434())
				{
					if (iLocal_813 == 0)
					{
						iLocal_813 = 1;
						iLocal_787 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(uVar0[iVar3], 500) || PED::_0xD0B7AEB56229D317(Global_35) == uVar0[iVar3])
				{
					if (iLocal_814 == 0)
					{
						iLocal_814 = 1;
						iLocal_787 = 2;
					}
				}
				if (iLocal_787 != 3)
				{
					if (iLocal_827 == 1)
					{
						if (iLocal_815 == 0)
						{
							iLocal_815 = 1;
							iLocal_787 = 4;
						}
					}
				}
				switch (iLocal_787)
				{
					case 0:
						iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
						if (iVar4 < 2 && !ENTITY::IS_ENTITY_DEAD(uLocal_46[1]))
						{
							if (func_226(&uLocal_888, uLocal_46[1], Global_35, func_146(26), 1.8f, 0))
							{
								iLocal_787 = -1;
								bLocal_834 = true;
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
						{
							if (func_226(&uLocal_888, uLocal_46[0], Global_35, func_146(32), 1.8f, 0))
							{
								iLocal_787 = -1;
								bLocal_834 = true;
							}
						}
						break;
					case 1:
						if (uVar0[iVar3] == uLocal_46[1])
						{
							if (func_226(&uLocal_888, uVar0[iVar3], Global_35, func_146(27), 0.8f, 0))
							{
								iLocal_787 = -1;
								bLocal_834 = true;
							}
						}
						else if (uVar0[iVar3] == uLocal_46[0])
						{
							if (func_226(&uLocal_888, uVar0[iVar3], Global_35, func_146(33), 0.8f, 0))
							{
								iLocal_787 = -1;
								bLocal_834 = true;
							}
						}
						break;
					case 2:
						if (uVar0[iVar3] == uLocal_46[1])
						{
							if (func_226(&uLocal_888, uVar0[iVar3], Global_35, func_146(28), 0.8f, 0))
							{
								iLocal_787 = -1;
								bLocal_834 = true;
							}
						}
						else if (uVar0[iVar3] == uLocal_46[0])
						{
							if (func_226(&uLocal_888, uVar0[iVar3], Global_35, func_146(34), 0.8f, 0))
							{
								iLocal_787 = -1;
								bLocal_834 = true;
							}
						}
						break;
					case 3:
						if (uVar0[iVar3] == uLocal_46[1])
						{
							if (func_226(&uLocal_888, uVar0[iVar3], Global_35, func_146(29), 0.8f, 0))
							{
								iLocal_787 = -1;
								bLocal_834 = true;
							}
						}
						else if (uVar0[iVar3] == uLocal_46[0])
						{
							if (func_226(&uLocal_888, uVar0[iVar3], Global_35, func_146(35), 0.8f, 0))
							{
								iLocal_787 = -1;
								bLocal_834 = true;
							}
						}
						break;
					case 4:
						if (uVar0[iVar3] == uLocal_46[1])
						{
							if (func_226(&uLocal_888, uVar0[iVar3], Global_35, func_146(30), 1.8f, 0))
							{
								iLocal_787 = -1;
								bLocal_834 = true;
							}
						}
						else if (uVar0[iVar3] == uLocal_46[0])
						{
							if (func_226(&uLocal_888, uVar0[iVar3], Global_35, func_146(36), 1.8f, 0))
							{
								iLocal_787 = -1;
								bLocal_834 = true;
							}
						}
						break;
					case 5:
						if (__LIB_1__::func_985())
						{
							if (__LIB_2__::func_478(uLocal_46[1], PLAYER::PLAYER_PED_ID(), func_146(57), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
							}
						}
						else if (func_226(&uLocal_888, uLocal_46[0], PLAYER::PLAYER_PED_ID(), func_146(57), 1f, 0))
						{
						}
						iLocal_787 = -1;
						bLocal_834 = true;
						break;
				}
			}
			iVar3++;
		}
	}
}

void func_266()
{
	bLocal_917 = true;
}

void func_267()
{
	switch (iLocal_775)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_885);
			iLocal_775 = 1;
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_885) >= 0f && __LIB_0__::func_265(&uLocal_885) < 0.2f)
			{
				if (bLocal_803 == 0 && iLocal_824 == 0)
				{
					TASK::_0xE7FA07624574B79A(uLocal_46[0], PLAYER::PLAYER_PED_ID(), 2, 2, 5f, 1, 0, 0, 0);
				}
				else
				{
					func_259(uLocal_46[0], PLAYER::PLAYER_PED_ID(), &uLocal_66, -1, 15, 0);
				}
			}
			if (__LIB_0__::func_265(&uLocal_885) >= 0.6f && __LIB_0__::func_265(&uLocal_885) < 0.8f)
			{
				if (bLocal_803 == 0)
				{
					TASK::_0xE7FA07624574B79A(uLocal_46[1], PLAYER::PLAYER_PED_ID(), 3, 2, 5f, 1, 0, 0, 0);
				}
				else
				{
					func_259(uLocal_46[1], PLAYER::PLAYER_PED_ID(), &uLocal_66, -1, 15, 0);
				}
			}
			if (__LIB_0__::func_265(&uLocal_885) >= 5f)
			{
				iLocal_775 = 0;
			}
			break;
	}
	if (bLocal_803 == 1)
	{
		if (!__LIB_5__::func_746(uLocal_46[0], "RETORCAP_LINE06", 1068708659 /* Float: 1.4f */, 0))
		{
			if (!__LIB_0__::func_163(uLocal_46[0], 242628503))
			{
				PED::FORCE_PED_MOTION_STATE(uLocal_46[0], joaat("MOTIONSTATE_WALK"), false, 0, false);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_855);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_855);
				TASK::TASK_MOUNT_ANIMAL(0, uLocal_46[4], 20000, -1, 1f, 1, 0, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC(0, -1082130432 /* Float: -1f */, 1024, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_855);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_46[0], iLocal_855);
			}
		}
		if (!__LIB_5__::func_746(uLocal_46[1], "RETORCAP_LINE06", 1068708659 /* Float: 1.4f */, 0))
		{
			if (!__LIB_0__::func_163(uLocal_46[1], 242628503))
			{
				PED::FORCE_PED_MOTION_STATE(uLocal_46[1], joaat("MOTIONSTATE_WALK"), false, 0, false);
				WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_46[1], joaat("WEAPON_MELEE_TORCH"), 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_856);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_856);
				TASK::TASK_MOUNT_ANIMAL(0, uLocal_46[5], 20000, -1, 1f, 1, 0, 0);
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_46[0], -2f, -2f, 0f, 1.5f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_856);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_46[1], iLocal_856);
			}
		}
	}
}

void func_268()
{
	if (iLocal_824 == 1)
	{
		func_253();
	}
}

bool func_269()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	switch (iLocal_786)
	{
		case 0:
			iLocal_827 = 1;
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_46[0], 0);
			__LIB_2__::func_411(&(Local_580[2 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_580[3 /*17*/]), 0, 0);
			if (iLocal_784 < 6)
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_46[2], 0);
			}
			if (iLocal_794 == -1)
			{
				iLocal_794 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			}
			if (iLocal_794 < 50)
			{
				iLocal_786 = 1;
			}
			else if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (__LIB_4__::func_207(uLocal_46[1], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0))
				{
					if (func_226(&uLocal_888, uLocal_46[1], PLAYER::PLAYER_PED_ID(), func_146(48), 1f, 0))
					{
						iLocal_778 = 0;
						iLocal_777 = 1;
						__LIB_3__::func_158(&(Local_580[2 /*17*/]), 0);
						__LIB_2__::func_411(&(Local_580[2 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_580[3 /*17*/]), 1, 0);
						Local_580[2 /*17*/].f_13 = func_146(61);
						__LIB_2__::func_360(&(Local_580[2 /*17*/]), "INTERACT_DEFUSE");
						Local_580[3 /*17*/].f_13 = func_146(62);
						iLocal_786 = 2;
					}
				}
				else if (iLocal_847 == 1 || func_226(&uLocal_888, uLocal_46[1], PLAYER::PLAYER_PED_ID(), func_146(20), 0f, 0))
				{
					if (iLocal_847 == 0)
					{
					}
					iLocal_778 = 0;
					iLocal_777 = 1;
					__LIB_3__::func_158(&(Local_580[2 /*17*/]), 0);
					__LIB_2__::func_411(&(Local_580[2 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_580[3 /*17*/]), 1, 0);
					Local_580[2 /*17*/].f_13 = func_146(61);
					__LIB_2__::func_360(&(Local_580[2 /*17*/]), "INTERACT_DEFUSE");
					Local_580[3 /*17*/].f_13 = func_146(62);
					iLocal_786 = 2;
				}
			}
			break;
		case 1:
			PED::SET_PED_RESET_FLAG(uLocal_46[0], 290, true);
			PED::SET_PED_RESET_FLAG(uLocal_46[1], 290, true);
			if (__LIB_4__::func_207(uLocal_46[1], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0))
			{
				if (__LIB_2__::func_227(-4f, 1, 0, 0))
				{
					if (func_226(&uLocal_888, uLocal_46[1], PLAYER::PLAYER_PED_ID(), func_146(48), 1f, 0))
					{
						iLocal_786++;
					}
				}
			}
			else if (bLocal_841 == 0 || !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if (__LIB_2__::func_227(-4f, 1, 0, 0))
				{
					if (func_226(&uLocal_888, uLocal_46[1], PLAYER::PLAYER_PED_ID(), func_146(19), 1f, 0))
					{
						iLocal_786++;
					}
				}
			}
			break;
		case 2:
			if (iLocal_849 == 0)
			{
				iLocal_778 = 0;
				iLocal_777 = 1;
				__LIB_3__::func_158(&(Local_580[2 /*17*/]), 0);
				__LIB_2__::func_411(&(Local_580[2 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_580[3 /*17*/]), 1, 0);
				Local_580[2 /*17*/].f_13 = func_146(61);
				__LIB_2__::func_360(&(Local_580[2 /*17*/]), "INTERACT_DEFUSE");
				Local_580[3 /*17*/].f_13 = func_146(62);
				iLocal_849 = 1;
			}
			if (__LIB_2__::func_227(0f, 1, Global_35, 1) && __LIB_2__::func_227(0f, 1, uLocal_46[1], 1))
			{
				if (func_226(&uLocal_888, uLocal_46[1], PLAYER::PLAYER_PED_ID(), func_146(47), 2f, 0))
				{
					iLocal_786++;
				}
			}
			break;
		case 3:
			iLocal_794 = -1;
			if ((!func_438() || __LIB_2__::func_118(uLocal_46[2], 1, 0) <= 4f) && __LIB_2__::func_118(uLocal_46[2], 1, 0) < 35f)
			{
				if ((!__LIB_3__::func_572(PLAYER::PLAYER_ID(), uLocal_46[1], &(Local_537[0 /*21*/])) && __LIB_3__::func_572(PLAYER::PLAYER_ID(), uLocal_46[0], &(Local_537[1 /*21*/]))) || __LIB_2__::func_227(-2f, 1, 0, 0))
				{
					if (__LIB_2__::func_227(-3f, 1, 0, 0))
					{
						if (__LIB_0__::func_265(&uLocal_906) >= 3f || !__LIB_0__::func_75(&uLocal_906))
						{
							__LIB_2__::func_478(uLocal_46[1], Global_35, func_146(30), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_786++;
							__LIB_1__::func_148(&uLocal_876);
							return true;
						}
					}
				}
			}
			else
			{
				if (!__LIB_0__::func_75(&uLocal_879))
				{
					__LIB_1__::func_148(&uLocal_879);
				}
				if (bLocal_803 == 0)
				{
					if (!PED::IS_PED_DEAD_OR_DYING(uLocal_46[2], true))
					{
						if (__LIB_0__::func_265(&uLocal_879) >= 3f)
						{
							iVar0 = __LIB_4__::func_408(uLocal_46[1], "RETORCAP_RETURN", 1f, 0, 0);
							iVar1 = __LIB_4__::func_408(uLocal_46[0], "RETORCAP_RETURN", 1f, 0, 1);
							if (iVar0 && iVar1)
							{
								if (__LIB_2__::func_478(uLocal_46[0], PLAYER::PLAYER_PED_ID(), func_146(25), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_RETURN", true);
									iLocal_784 = 5;
									iLocal_786 = 0;
									__LIB_1__::func_148(&uLocal_864);
									func_73(5);
								}
							}
						}
					}
				}
				if (bLocal_803 == 1)
				{
					iLocal_786 = 0;
					__LIB_1__::func_148(&uLocal_864);
					iLocal_777 = 3;
					iLocal_778 = 0;
					__LIB_2__::func_411(&(Local_580[2 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_580[3 /*17*/]), 0, 0);
					Local_580[2 /*17*/].f_13 = func_146(21);
					__LIB_2__::func_360(&(Local_580[2 /*17*/]), "RE_INTER_POS");
					Local_580[3 /*17*/].f_13 = func_146(60);
					__LIB_2__::func_360(&(Local_580[3 /*17*/]), "RE_INTER_ANTAGONIZE");
				}
			}
			break;
	}
	return false;
}

bool func_270()
{
	switch (iLocal_786)
	{
		case 0:
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_46[0], 0);
			if (iLocal_784 < 6)
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_46[2], 0);
			}
			if (iLocal_794 == -1)
			{
				iLocal_794 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			}
			if (iLocal_794 < 50)
			{
				iLocal_786 = 2;
			}
			else if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (func_226(&uLocal_888, uLocal_46[1], PLAYER::PLAYER_PED_ID(), func_146(22), 1f, 0))
				{
					iLocal_786++;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-5f, 1, uLocal_46[1], 1))
			{
				if (__LIB_2__::func_478(uLocal_46[1], PLAYER::PLAYER_PED_ID(), func_146(23), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_786 = 4;
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, uLocal_46[0], 1))
			{
				if (func_226(&uLocal_888, uLocal_46[0], PLAYER::PLAYER_PED_ID(), func_146(45), 1f, 0))
				{
					iLocal_786++;
				}
			}
			break;
		case 3:
			func_226(&uLocal_888, uLocal_46[1], PLAYER::PLAYER_PED_ID(), func_146(45), 0f, 0);
			iLocal_786++;
			break;
		case 4:
			iLocal_786++;
			bLocal_834 = true;
			__LIB_1__::func_148(&uLocal_876);
			return true;
	}
	return false;
}

void func_271()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_857 = PED::GET_MOUNT(Global_35);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_46[2]) && ENTITY::DOES_ENTITY_EXIST(iLocal_857))
	{
		if (__LIB_0__::func_94(iLocal_857, vLocal_33, 1) <= 4f)
		{
			if (!PED::IS_PED_ON_MOUNT(Global_35) && iLocal_857 != 0)
			{
				if (!__LIB_0__::func_163(iLocal_857, 518218985))
				{
					TASK::_TASK_FLEE_FROM_PED(iLocal_857, uLocal_46[2], 0f, 0f, 0f, 5f, 5000, 256, 1f, 0);
				}
			}
		}
	}
}

void func_272()
{
	if (iLocal_810 == 0 && bLocal_834)
	{
		if (PED::_IS_PED_HOGTIED(uLocal_46[0]))
		{
			if (__LIB_2__::func_227(1f, 1, 0, 0))
			{
				if (ENTITY::IS_ENTITY_DEAD(uLocal_46[1]))
				{
					if (func_226(&uLocal_888, uLocal_46[0], Global_35, func_146(31), 0.8f, 0))
					{
						iLocal_810 = 1;
					}
				}
			}
		}
	}
}

int func_273()
{
	switch (iLocal_774)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_46[2], true, false), 4f, 4f, 2f, false, true, 1))
			{
				if (iLocal_826 == 1)
				{
					PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
					iLocal_774 = 1;
				}
			}
			if (((((((iLocal_806 == 0 && iLocal_807 == 0) && iLocal_808 == 0) && bLocal_804 == 0) && bLocal_802 == 0) && iLocal_842 == 0) && iLocal_778 != 1) && iLocal_778 != 2)
			{
				switch (iLocal_790)
				{
					case 0:
						if ((__LIB_0__::func_265(&uLocal_867) >= 3f && bLocal_831 == 0) && __LIB_2__::func_227(0f, 1, Global_35, 1))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_CALLOUT_01", true);
							__LIB_1__::func_148(&uLocal_867);
							__LIB_1__::func_148(&uLocal_870);
							iLocal_790++;
						}
						break;
					case 1:
						if (__LIB_0__::func_265(&uLocal_867) >= 8f)
						{
							if (__LIB_1__::func_348(uLocal_46[2], PLAYER::PLAYER_PED_ID()) > 12f)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529, "PBL_CALLOUT_02", true);
								__LIB_1__::func_148(&uLocal_867);
							}
							iLocal_790++;
						}
						break;
					case 2:
						if (__LIB_0__::func_265(&uLocal_867) >= 12f)
						{
							if (__LIB_2__::func_227(-4f, 1, uLocal_46[2], 1))
							{
								if (__LIB_2__::func_478(uLocal_46[2], Global_35, func_146(41), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
								{
									iLocal_790++;
									__LIB_1__::func_148(&uLocal_867);
								}
							}
						}
						break;
					case 3:
						if (__LIB_0__::func_265(&uLocal_867) >= 9f)
						{
							if (__LIB_2__::func_227(-4f, 1, uLocal_46[2], 1))
							{
								if (__LIB_2__::func_478(uLocal_46[2], Global_35, func_146(42), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
								{
									iLocal_790++;
									__LIB_1__::func_148(&uLocal_867);
								}
							}
						}
						break;
					case 4:
						if (__LIB_0__::func_265(&uLocal_867) >= 12f)
						{
							if (__LIB_2__::func_227(-4f, 1, uLocal_46[2], 1))
							{
								if (__LIB_2__::func_478(uLocal_46[2], Global_35, func_146(44), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
								{
									iLocal_821 = 1;
									__LIB_1__::func_148(&uLocal_867);
									iLocal_790++;
								}
							}
						}
						break;
					case 5:
						if (__LIB_0__::func_265(&uLocal_867) >= 5f)
						{
							if (__LIB_2__::func_227(-4f, 1, uLocal_46[2], 1))
							{
								if (__LIB_2__::func_478(uLocal_46[2], Global_35, func_146(43), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
								{
									iLocal_821 = 1;
									iLocal_790++;
								}
							}
						}
						break;
				}
			}
			break;
		case 1:
			HUD::_0xC9CAEAEEC1256E54(724769646);
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_529.f_1, true, false))
			{
				if (__LIB_9__::func_775(Global_35, Local_529.f_1, "player", func_445(), &uLocal_863, 1.5f, 1, 1, 1))
				{
					__LIB_2__::func_411(&(Local_687[1 /*17*/]), 0, 0);
					__LIB_2__::func_451(&iLocal_666, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_46[2], false);
					if (!PED::IS_PED_DEAD_OR_DYING(uLocal_46[2], true))
					{
						ENTITY::_SET_ENTITY_HEALTH(uLocal_46[2], 30, 0);
					}
					iLocal_777 = 9;
					iLocal_778 = 0;
					bLocal_915 = true;
					func_447();
					iLocal_774 = 2;
				}
			}
			break;
		case 2:
			HUD::_0xC9CAEAEEC1256E54(724769646);
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_529.f_1, false))
			{
				if (__LIB_3__::func_496(Global_35, "cut_rope", 1067030938 /* Float: 1.2f */))
				{
					if (!PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_858) && PHYSICS::DOES_ROPE_EXIST(iLocal_858))
					{
						bLocal_802 = true;
						func_419();
						PHYSICS::_0x4CFA2B7FAE115ECB(&iLocal_858, &iLocal_859, &iLocal_860, (fLocal_861 / 2f), (fLocal_861 / 2f), 1056964608 /* Float: 0.5f */, -1);
					}
				}
				if (__LIB_3__::func_496(uLocal_46[2], "delete_rope", 1067030938 /* Float: 1.2f */))
				{
					if (PHYSICS::DOES_ROPE_EXIST(iLocal_858))
					{
						PHYSICS::DELETE_ROPE(&iLocal_858);
					}
					if (PHYSICS::DOES_ROPE_EXIST(iLocal_859))
					{
						PHYSICS::DELETE_ROPE(&iLocal_859);
					}
					if (PHYSICS::DOES_ROPE_EXIST(iLocal_860))
					{
						PHYSICS::DELETE_ROPE(&iLocal_860);
					}
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_529.f_1) >= 0.55f)
			{
				PED::_0xAE6004120C18DF97(uLocal_46[2], 0, 1);
				bLocal_802 = true;
				func_419();
			}
			if (fLocal_798 >= 0.7f)
			{
				OBJECT::DELETE_OBJECT(&iLocal_60);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_529.f_1, false))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_274()
{
	switch (iLocal_776)
	{
		case 0:
			func_227(uLocal_46[2], Global_35, 0);
			if ((((PHYSICS::DOES_ROPE_EXIST(iLocal_858) == 0 || PHYSICS::_0x79C2BEC82CFD7F7F(iLocal_858)) && bLocal_831 == 0) && iLocal_97 != 0) && bLocal_802 == 0)
			{
				iLocal_776 = 1;
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_46[2], 0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_529.f_1, "PBL_SHOT_ROPE");
				bLocal_802 = true;
				iLocal_777 = 9;
				iLocal_778 = 0;
				bLocal_915 = true;
				__LIB_2__::func_451(&iLocal_666, 0);
				__LIB_2__::func_411(&(Local_687[2 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_687[3 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_687[1 /*17*/]), 0, 0);
				__LIB_3__::func_158(&(Local_687[1 /*17*/]), 1);
			}
			break;
		case 1:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_529.f_1, "PBL_SHOT_ROPE"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529.f_1, "PBL_SHOT_ROPE", true);
				if (!PED::IS_PED_DEAD_OR_DYING(uLocal_46[2], true))
				{
					ENTITY::SET_ENTITY_PROOFS(uLocal_46[2], 0, false);
					ENTITY::_SET_ENTITY_HEALTH(uLocal_46[2], 30, 0);
				}
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_46[2], false);
				func_419();
				iLocal_776 = 2;
			}
			break;
		case 2:
			func_447();
			if (__LIB_3__::func_496(uLocal_46[2], "delete_rope", 1067030938 /* Float: 1.2f */))
			{
				PHYSICS::DELETE_CHILD_ROPE(iLocal_858);
			}
			if (fLocal_798 >= 0.7f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_278()
{
	switch (iLocal_785)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (iLocal_822 == 0)
				{
					if (iLocal_821 == 0)
					{
						if (__LIB_2__::func_478(uLocal_46[2], PLAYER::PLAYER_PED_ID(), func_146(14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							iLocal_785++;
						}
					}
					else if (__LIB_2__::func_478(uLocal_46[2], PLAYER::PLAYER_PED_ID(), func_146(16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						iLocal_785++;
					}
				}
				else if (__LIB_2__::func_478(uLocal_46[2], PLAYER::PLAYER_PED_ID(), func_146(18), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					MAP::REMOVE_BLIP(&(iLocal_53[2]));
					iLocal_785 = 2;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (iLocal_821 == 0)
				{
					if (__LIB_2__::func_478(uLocal_46[2], PLAYER::PLAYER_PED_ID(), func_146(15), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						iLocal_785++;
						MAP::REMOVE_BLIP(&(iLocal_53[2]));
					}
				}
				else if (__LIB_2__::func_478(uLocal_46[2], PLAYER::PLAYER_PED_ID(), func_146(17), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					MAP::REMOVE_BLIP(&(iLocal_53[2]));
					iLocal_785++;
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_279()
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_46[2]))
	{
		if (!PED::IS_PED_DEAD_OR_DYING(uLocal_46[0], true) || !PED::IS_PED_DEAD_OR_DYING(uLocal_46[1], true))
		{
			if (iLocal_773 != 7)
			{
				func_73(7);
			}
		}
		else
		{
			func_73(13);
		}
	}
}

int func_280()
{
	if (__LIB_3__::func_453(uLocal_46[2], 0, &(Local_105.f_5), &iLocal_862, 0, 0))
	{
		if (bLocal_802 == 1 && iLocal_805 == 0)
		{
			iLocal_805 = 1;
			__LIB_2__::func_461(0);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_46[2], false);
			if (!bLocal_833)
			{
				if (iLocal_862 == 2)
				{
					bLocal_833 = true;
				}
			}
			if (!bLocal_832)
			{
				if (((iLocal_862 == 8 || iLocal_862 == 4) || iLocal_862 == 2048) || iLocal_862 == 16)
				{
					bLocal_832 = true;
				}
			}
		}
	}
	if (iLocal_805 == 1)
	{
		PED::SET_PED_KEEP_TASK(uLocal_46[2], true);
		TASK::CLEAR_PED_SECONDARY_TASK(uLocal_46[2]);
		TASK::TASK_SMART_FLEE_PED(uLocal_46[2], PLAYER::PLAYER_PED_ID(), 999f, -1, 64, 1077936128 /* Float: 3f */, uLocal_46[4]);
		__LIB_2__::func_451(&iLocal_666, 0);
		__LIB_2__::func_593(&iLocal_666, &Local_687);
		__LIB_2__::func_344(&(uLocal_46[2]));
		func_73(11);
		return 1;
	}
	return 0;
}

void func_281()
{
	switch (iLocal_779)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(uLocal_46[4]) && ENTITY::IS_ENTITY_DEAD(uLocal_46[5]))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_46[2], 2f, 4752, 0);
				iLocal_779 = 4;
				return;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[4]) && PED::GET_MOUNT(Global_35) != uLocal_46[4])
			{
				TASK::TASK_MOUNT_ANIMAL(uLocal_46[2], uLocal_46[4], -1, -1, 2f, 1, 0, 0);
				iLocal_779 = 2;
			}
			else
			{
				iLocal_779 = 1;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_DEAD(uLocal_46[4]) && ENTITY::IS_ENTITY_DEAD(uLocal_46[5]))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_46[2], 2f, 4752, 0);
				iLocal_779 = 4;
				return;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[5]) && PED::GET_MOUNT(Global_35) != uLocal_46[5])
			{
				TASK::TASK_MOUNT_ANIMAL(uLocal_46[2], uLocal_46[5], -1, -1, 2f, 1, 0, 0);
				iLocal_779 = 3;
			}
			else
			{
				iLocal_779 = 0;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(uLocal_46[4]) || PED::GET_MOUNT(Global_35) == uLocal_46[4])
			{
				iLocal_779 = 1;
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_DEAD(uLocal_46[5]) || PED::GET_MOUNT(Global_35) == uLocal_46[5])
			{
				iLocal_779 = 0;
			}
			break;
	}
}

void func_282()
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[2]))
	{
		__LIB_3__::func_453(uLocal_46[2], 0, &(Local_105.f_5), &iLocal_862, 0, 0);
		if (!bLocal_833)
		{
			if (iLocal_862 == 2)
			{
				bLocal_833 = true;
			}
		}
		if (!bLocal_832)
		{
			if (((iLocal_862 == 8 || iLocal_862 == 4) || iLocal_862 == 2048) || iLocal_862 == 16)
			{
				bLocal_832 = true;
			}
		}
		if (PED::_IS_PED_HOGTIED(uLocal_46[2]) || PED::_IS_PED_LASSOED(uLocal_46[2]))
		{
			if (iLocal_816 == 0)
			{
				iLocal_816 = 1;
				iLocal_788 = 1;
			}
		}
		if ((iLocal_862 == 8 || iLocal_862 == 4) || iLocal_862 == 256)
		{
			if (iLocal_817 == 0)
			{
				iLocal_817 = 1;
				iLocal_788 = 3;
			}
		}
		if (iLocal_862 == 2)
		{
			if (bLocal_818 == 0)
			{
				bLocal_818 = true;
				iLocal_788 = 0;
			}
		}
		if (PED::_0x29FCE825613FEFCA(uLocal_46[2], 500) || PED::_0xD0B7AEB56229D317(Global_35) == uLocal_46[2])
		{
			if (iLocal_819 == 0)
			{
				iLocal_819 = 1;
				iLocal_788 = 2;
			}
		}
		if (iLocal_862 == 16)
		{
			iLocal_788 = 4;
		}
		switch (iLocal_788)
		{
			case 0:
				__LIB_2__::func_461(0);
				if (func_226(&uLocal_888, uLocal_46[2], Global_35, func_146(51), 0.8f, 0))
				{
					iLocal_788 = -1;
				}
				break;
			case 1:
				if (func_226(&uLocal_888, uLocal_46[2], Global_35, func_146(52), 0.8f, 0))
				{
					iLocal_788 = -1;
				}
				break;
			case 2:
				if (func_226(&uLocal_888, uLocal_46[2], Global_35, func_146(53), 0.8f, 0))
				{
					iLocal_788 = -1;
				}
				break;
			case 3:
				if (func_226(&uLocal_888, uLocal_46[2], Global_35, func_146(54), 0.8f, 0))
				{
					iLocal_788 = -1;
				}
				break;
			case 4:
				switch (iLocal_796)
				{
					case 0:
						if (func_226(&uLocal_888, uLocal_46[2], Global_35, func_146(76), 0.8f, 0))
						{
							iLocal_788 = -1;
							iLocal_796++;
						}
						break;
					case 1:
						if (func_226(&uLocal_888, uLocal_46[2], Global_35, func_146(77), 1f, 0))
						{
							iLocal_788 = -1;
							iLocal_796++;
						}
						break;
					case 2:
						if (func_226(&uLocal_888, uLocal_46[2], Global_35, func_146(78), 0.4f, 0))
						{
							iLocal_788 = -1;
							iLocal_796++;
						}
						break;
					case 3:
						if (func_226(&uLocal_888, uLocal_46[2], Global_35, func_146(79), 0.7f, 0))
						{
							iLocal_788 = -1;
							iLocal_796++;
						}
						break;
				}
				break;
		}
	}
}

bool func_284()
{
	float fVar0;
	fVar0 = __LIB_2__::func_118(uLocal_46[2], 1, 0);
	if (PED::IS_PED_PLANTING_BOMB(Global_35))
	{
		if (fVar0 <= 7f)
		{
			return true;
		}
	}
	if (func_480())
	{
		if (fVar0 <= 7f || (__LIB_2__::func_0(uLocal_46[2], 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */) && (__LIB_2__::func_470() || __LIB_2__::func_364(uLocal_46[2], 0, 0, 0))))
		{
			return true;
		}
	}
	return false;
}

bool func_285()
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(uLocal_46[2], false, false) };
	if (((((FIRE::IS_EXPLOSION_IN_SPHERE(25, vVar0, 7f) || FIRE::IS_EXPLOSION_IN_SPHERE(31, vVar0, 7f)) || FIRE::IS_EXPLOSION_IN_SPHERE(27, vVar0, 7f)) || FIRE::IS_EXPLOSION_IN_SPHERE(26, vVar0, 7f)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, vVar0, 7f)) || FIRE::IS_EXPLOSION_IN_SPHERE(29, vVar0, 7f))
	{
		return true;
	}
	return false;
}

void func_419()
{
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uLocal_46[2], 209);
	__LIB_4__::func_405(uLocal_46[2], &uLocal_91, 0, 0);
}

int func_421(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_421(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_428()
{
	if (__LIB_0__::func_264(&uLocal_897) >= IntToFloat(iLocal_793))
	{
		__LIB_2__::func_315(1891783641, uLocal_46[2], 1);
		__LIB_0__::func_37(&uLocal_897);
	}
}

bool func_430(char* sParam0, char* sParam1)
{
	if (!bLocal_912)
	{
		bLocal_912 = __LIB_4__::func_408(uLocal_46[0], sParam0, 1f, 0, 1);
	}
	if (!bLocal_913)
	{
		bLocal_913 = __LIB_4__::func_408(uLocal_46[1], sParam1, 1f, 0, 1);
	}
	if (bLocal_912 && bLocal_913)
	{
		return true;
	}
	return false;
}

void func_431()
{
	bLocal_912 = false;
	bLocal_913 = false;
}

bool func_434()
{
	switch (iLocal_780)
	{
		case 0:
			if (__LIB_0__::func_394(Global_35, uLocal_46[4], 1) || __LIB_0__::func_394(Global_35, uLocal_46[5], 1))
			{
				iLocal_780 = 1;
			}
			break;
		case 1:
			TASK::TASK_HORSE_ACTION(PED::GET_MOUNT(Global_35), 2, Global_35, 0);
			AUDIO::PLAY_ANIMAL_VOCALIZATION(PED::GET_MOUNT(Global_35), "FEAR", false);
			iLocal_780 = 2;
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_435()
{
	if (((ENTITY::IS_ENTITY_DEAD(uLocal_46[4]) && WEAPON::_IS_WEAPON_BOW(PED::GET_PED_CAUSE_OF_DEATH(uLocal_46[4]))) && WEAPON::_IS_WEAPON_MELEE(PED::GET_PED_CAUSE_OF_DEATH(uLocal_46[4]))) || ((ENTITY::IS_ENTITY_DEAD(uLocal_46[5]) && WEAPON::_IS_WEAPON_BOW(PED::GET_PED_CAUSE_OF_DEATH(uLocal_46[5]))) && WEAPON::_IS_WEAPON_MELEE(PED::GET_PED_CAUSE_OF_DEATH(uLocal_46[5]))))
	{
		return true;
	}
	return false;
}

bool func_438()
{
	if ((!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_46[0], 80f) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_46[1], 80f)) && ENTITY::GET_ENTITY_SPEED(Global_35) >= 0.1f)
	{
		return true;
	}
	return false;
}

void func_439()
{
	switch (iLocal_792)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (__LIB_2__::func_478(uLocal_46[0], PLAYER::PLAYER_PED_ID(), func_146(22), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_792++;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0f, 1, 0, 0))
			{
				if (__LIB_2__::func_478(uLocal_46[1], PLAYER::PLAYER_PED_ID(), func_146(23), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					__LIB_1__::func_148(&uLocal_876);
					iLocal_792++;
				}
			}
			break;
	}
}

char* func_445()
{
	sLocal_103 = "";
	switch (func_227(uLocal_46[2], Global_35, 1))
	{
		case 0:
			sLocal_103 = "PBL_FRONT";
			break;
		case 1:
		case 2:
			sLocal_103 = "PBL_BACK";
			break;
		case 3:
			sLocal_103 = "PBL_LEFT";
			break;
		case 4:
			sLocal_103 = "PBL_RIGHT";
			break;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_529.f_1, sLocal_103, true);
	return sLocal_103;
}

void func_447()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_529.f_1, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_529.f_1, false))
		{
			ANIMSCENE::START_ANIM_SCENE(Local_529.f_1);
		}
	}
}

bool func_480()
{
	int iVar0;
	iVar0 = __LIB_0__::func_153(Global_35, 0, 1, 0);
	switch (iVar0)
	{
		case joaat("WEAPON_THROWN_DYNAMITE"):
		case joaat("WEAPON_THROWN_MOLOTOV"):
			return true;
		default:
			break;
	}
	return false;
}

