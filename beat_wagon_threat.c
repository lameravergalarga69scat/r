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
	vector3 vLocal_15 = { 0f, 0f, 0f };
	vector3 vLocal_18 = { 0f, 0f, 0f };
	vector3 vLocal_21 = { 0f, 0f, 0f };
	char* sLocal_24[9] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_34[4] = { NULL, NULL, NULL, NULL };
	char* sLocal_39[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_53[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_62[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_76 = 0;
	float fLocal_77 = 0f;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	float fLocal_80 = 0f;
	vector3 vLocal_81 = { 0f, 0f, 0f };
	float fLocal_84 = 0f;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = -1;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 2;
	var uLocal_94 = 1;
	var uLocal_95 = 1;
	var uLocal_96 = 1;
	var uLocal_97 = 0;
	var uLocal_98 = 1;
	var uLocal_99 = 2;
	var uLocal_100 = 2;
	var uLocal_101 = 3;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 3;
	var uLocal_105 = 1;
	var uLocal_106 = 3;
	var uLocal_107 = 3;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	struct<7> Local_110 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = -1;
	var uLocal_120 = 0;
	var uLocal_121 = -1;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = -1;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 1073741824;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 1;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<17> Local_139[3];
	int iLocal_191 = 0;
	var uLocal_192 = -1;
	var uLocal_193 = 0;
	var uLocal_194 = -1;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = -1;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 1073741824;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 1;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	struct<17> Local_212[3];
	struct<21> Local_264[2];
	struct<17> Local_307[3];
	struct<193> Local_359 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_552 = 0;
	struct<32> Local_553[6];
	var uLocal_746[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_753[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	var uLocal_763[2] = { 0, 0 };
	bool bLocal_766 = false;
	struct<23> Local_767 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	int iLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794 = 0;
	int iLocal_795 = 0;
	int iLocal_796 = 0;
	int iLocal_797 = 0;
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	int iLocal_802 = 0;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	bool bLocal_831 = false;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	bool bLocal_834 = false;
	bool bLocal_835 = false;
	bool bLocal_836 = false;
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	int iLocal_846 = 0;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	bool bLocal_849 = false;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	bool bLocal_855 = false;
	bool bLocal_856 = false;
	bool bLocal_857 = false;
	bool bLocal_858 = false;
	float fLocal_859 = 0f;
	float fLocal_860 = 0f;
	float fLocal_861 = 0f;
	char* sLocal_862 = NULL;
	char* sLocal_863 = NULL;
	char* sLocal_864 = NULL;
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
	int iLocal_898 = 0;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	var uLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
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
	iLocal_804 = -1;
	iLocal_816 = 999;
	iLocal_817 = 999;
	iLocal_818 = 999;
	iLocal_819 = 999;
	iLocal_823 = 1;
	iLocal_905 = 1;
	Local_359.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	Local_359.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	__LIB_3__::func_368(&Local_359, 1);
	while (true)
	{
		switch (iLocal_905)
		{
			case 1:
				if (func_5(&Local_359, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
				{
					__LIB_4__::func_472(&Local_359, &uLocal_902, &uLocal_822);
					__LIB_3__::func_352(&Local_359, 4);
					iLocal_905 = 0;
				}
				else if (Local_359.f_160)
				{
					func_2();
				}
				break;
			case 0:
				if (func_8())
				{
					func_9();
					iLocal_905 = 3;
				}
				break;
			case 3:
				if (func_10())
				{
					switch (iLocal_14)
					{
						case 0:
							PED::DELETE_PED(&(uLocal_746[3]));
							break;
					}
					if (func_11())
					{
						func_12();
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_76, true);
						iLocal_905 = 4;
					}
				}
				break;
			case 4:
				if (!__LIB_3__::func_466(&Local_359, &uLocal_746, iLocal_14, 0, 0, 0, 1, 0))
				{
					func_2();
				}
				func_14();
				if (func_15())
				{
					func_2();
				}
				if (__LIB_3__::func_431(&Local_359, &uLocal_746, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					func_2();
				}
				break;
		}
		BUILTIN::WAIT(Local_359.f_158);
	}
}

void func_2()
{
	__LIB_3__::func_524(&iLocal_820);
	if (PED::_0x91A5F9CBEBB9D936(iLocal_78))
	{
		PATHFIND::_0xD17672447692478E(iLocal_79, 0);
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_78, true);
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_76);
	__LIB_2__::func_593(&iLocal_191, &Local_139);
	__LIB_2__::func_593(&iLocal_118, &Local_139);
	__LIB_2__::func_593(&(Local_264[0 /*21*/]), &Local_307);
	__LIB_2__::func_593(&(Local_264[1 /*21*/]), &Local_307);
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_746[2]))
	{
		__LIB_2__::func_56(uLocal_746[2], 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_746[3]))
	{
		__LIB_2__::func_56(uLocal_746[3], 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_746[0]))
	{
		PED::_0x24C82EF607105FAA(uLocal_746[0], joaat("AGGRESSIVE"));
		__LIB_2__::func_56(uLocal_746[0], 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_746[1]))
	{
		PED::_0x24C82EF607105FAA(uLocal_746[1], joaat("AGGRESSIVE"));
		__LIB_2__::func_56(uLocal_746[1], 1, 1);
	}
	if (PROPSET::_DOES_PROPSET_EXIST(iLocal_761))
	{
		PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iLocal_761);
	}
	PED::SET_PED_CONFIG_FLAG(uLocal_746[2], 301, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_746[3], 301, true);
	__LIB_3__::func_493(&Local_359, &uLocal_746, &iLocal_753, iLocal_14, uLocal_902, uLocal_822, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_5(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || func_23(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_305(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

bool func_8()
{
	int iVar0;
	switch (iLocal_904)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_359))
			{
				func_29();
				func_30();
				func_31();
				__LIB_0__::func_11();
				__LIB_4__::func_473();
				func_34();
				func_35();
				func_36();
				func_37();
				iLocal_904 = 1;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (Local_553[iVar0 /*32*/].f_1 != 0)
				{
					if (!STREAMING::HAS_MODEL_LOADED(Local_553[iVar0 /*32*/].f_1) && !STREAMING::HAS_MODEL_LOADED(joaat("CHUCKWAGON000X")))
					{
						return false;
					}
				}
				iVar0++;
			}
			if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_760))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_553))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_9()
{
	Local_767 = { 0f, 0f, 0f };
	Local_767.f_3 = uLocal_746[0];
	Local_767.f_8 = 4;
	Local_767.f_4 = 21030;
	Local_767.f_19 = 3;
	Local_767.f_20 = 3;
	Local_767.f_21 = 3;
	Local_767.f_22 = 3;
	Local_767.f_7 = 0;
}

bool func_10()
{
	switch (iLocal_903)
	{
		case 0:
			if (__LIB_3__::func_479(__LIB_3__::func_179(&Local_359), __LIB_3__::func_526(&Local_359), &Local_553, &uLocal_746, 0, 0, -1, 1))
			{
				iLocal_903 = 1;
			}
			break;
		case 1:
			if (!func_42())
			{
				return false;
			}
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_76) && !ENTITY::IS_ENTITY_DEAD(iLocal_76)) && !PROPSET::_DOES_PROPSET_EXIST(iLocal_761))
			{
				PROPSET::_0xD80FAF919A2E56EA(iLocal_76, iLocal_760);
			}
			else
			{
				return false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_76) && !ENTITY::IS_ENTITY_DEAD(iLocal_76))
			{
				func_43();
				func_44();
				func_45();
				func_46();
				func_47();
			}
			else
			{
				return false;
			}
			iLocal_903 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_11()
{
	switch (iLocal_14)
	{
		case 0:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_110, "pbl_Loops"))
			{
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_110, iLocal_76, 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, "pbl_Loops", true);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_110.f_1, "pbl_Loops"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, "pbl_Loops", true);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_110.f_2, "pbl_Loops"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_2, "pbl_Loops", true);
			}
			if (((((ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_110, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_110.f_1, true, false)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_110.f_2, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_110, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_110.f_1, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_110.f_2, false))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_110);
				ANIMSCENE::START_ANIM_SCENE(Local_110.f_1);
				ANIMSCENE::START_ANIM_SCENE(Local_110.f_2);
				return true;
			}
			break;
		case 1:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_110, "pbl_Base"))
			{
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_110, iLocal_76, 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, "pbl_Base", true);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_110.f_1, "pbl_Base"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, "pbl_Base", true);
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_110.f_2, "pbl_Base"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_2, "pbl_Base", true);
			}
			if (((((ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_110, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_110.f_1, true, false)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_110.f_2, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_110, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_110.f_1, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_110.f_2, false))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_110);
				ANIMSCENE::START_ANIM_SCENE(Local_110.f_1);
				ANIMSCENE::START_ANIM_SCENE(Local_110.f_2);
				return true;
			}
			break;
	}
	return false;
}

void func_12()
{
	switch (iLocal_14)
	{
		case 0:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P0");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P2");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P3");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Loops");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Cower");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_Back");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_Right");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_front");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P0");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P2");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P3");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Loops");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_Back");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_Right");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_front");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Back");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Right");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Front");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P0");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P2");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P3");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Loops");
			break;
		case 1:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P0");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P2");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Action_P3");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Loops");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Cower");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_Back_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_Back_Right");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_Right");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_React_front");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P0");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P2");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Action_P3");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Loops");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_Back");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_Right");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_React_front");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Back");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Left");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Right");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Breakout_Front");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P0");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P2");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Action_P3");
			break;
	}
}

void func_14()
{
	func_58();
	func_59();
	func_60();
	if (__LIB_0__::func_665(uLocal_746[0], uLocal_746[4], 1, 1) <= 1f && !PED::IS_PED_ON_MOUNT(uLocal_746[0]))
	{
		AITRANSPORT::_0xBA8818212633500A(uLocal_746[4], 0, 1);
	}
	else
	{
		AITRANSPORT::_0xBA8818212633500A(uLocal_746[4], 0, 0);
	}
	if (__LIB_0__::func_665(uLocal_746[1], uLocal_746[5], 1, 1) <= 1f && !PED::IS_PED_ON_MOUNT(uLocal_746[1]))
	{
		AITRANSPORT::_0xBA8818212633500A(uLocal_746[5], 0, 1);
	}
	else
	{
		AITRANSPORT::_0xBA8818212633500A(uLocal_746[5], 0, 0);
	}
	if (!PED::IS_PED_DEAD_OR_DYING(uLocal_746[0], true) || !PED::IS_PED_DEAD_OR_DYING(uLocal_746[1], true))
	{
		func_62();
	}
	if (!bLocal_858)
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_746[2], Local_110))
		{
			PHYSICS::_0xEAF529446488EB18(iLocal_76);
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_746[2], false))
		{
			PHYSICS::_0x5E981C764DF33117(iLocal_76, 0);
		}
	}
	else
	{
		PHYSICS::_0x5E981C764DF33117(iLocal_76, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_110))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_110, false))
		{
			fLocal_859 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_110);
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_110.f_1))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_110.f_1, false))
		{
			fLocal_860 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_110.f_1);
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_110.f_2))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_110.f_2, false))
		{
			fLocal_861 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_110.f_2);
		}
	}
}

bool func_15()
{
	func_63();
	if (iLocal_792 == 2 || iLocal_792 == 4)
	{
		if (iLocal_830 == 0 || iLocal_829 == 1)
		{
			if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0"))
			{
				if (func_64())
				{
					func_65(4);
				}
			}
			else if (func_66())
			{
				func_65(4);
			}
		}
	}
	switch (iLocal_792)
	{
		case 0:
			func_67();
			break;
		case 1:
			func_68();
			break;
		case 2:
			func_69();
			break;
		case 3:
			func_70();
			break;
		case 5:
			func_71();
			break;
		case 4:
			func_72();
			break;
		case 6:
			func_73();
			break;
		case 8:
			break;
		case 7:
			func_74();
			break;
		case 9:
			func_75();
			break;
		case 11:
			Local_359.f_50 = 1;
			Local_359.f_44 = 1;
			PED::SET_PED_KEEP_TASK(uLocal_746[2], true);
			PED::SET_PED_KEEP_TASK(uLocal_746[3], true);
			PED::SET_PED_KEEP_TASK(uLocal_746[0], true);
			PED::SET_PED_KEEP_TASK(uLocal_746[1], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_746[0], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_746[1], false);
			return true;
		case 10:
			Local_359.f_50 = 1;
			Local_359.f_160 = 1;
			PED::SET_PED_KEEP_TASK(uLocal_746[2], true);
			PED::SET_PED_KEEP_TASK(uLocal_746[3], true);
			PED::SET_PED_KEEP_TASK(uLocal_746[0], true);
			PED::SET_PED_KEEP_TASK(uLocal_746[1], true);
			func_2();
			break;
	}
	return false;
}

int func_23(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	if (Param4.f_6 > -1)
	{
		*uParam1 = { __LIB_3__::func_153(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_103(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_340(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { __LIB_3__::func_401(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = __LIB_3__::func_240(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (__LIB_0__::func_27(Param4.f_2, 8))
				{
					func_103(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				__LIB_3__::func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (__LIB_3__::func_369(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && __LIB_3__::func_367(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!__LIB_3__::func_170(uParam1))
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (__LIB_3__::func_423(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_103(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_422("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

void func_29()
{
	iLocal_14 = __LIB_3__::func_390(Local_359.f_3, 2, 0);
	switch (iLocal_14)
	{
		case 0:
			bLocal_766 = true;
			break;
		case 1:
			break;
	}
}

void func_30()
{
	Local_553[0 /*32*/].f_1 = joaat("G_M_M_UNIRANCHERS_01");
	Local_553[1 /*32*/].f_1 = joaat("G_M_M_UNIRANCHERS_01");
	Local_553[2 /*32*/].f_1 = joaat("RE_WAGONTHREAT_MALES_01");
	Local_553[3 /*32*/].f_1 = joaat("RE_WAGONTHREAT_FEMALES_01");
	Local_553[4 /*32*/].f_1 = __LIB_2__::func_185(4, 0, 1);
	Local_553[5 /*32*/].f_1 = __LIB_2__::func_185(4, 0, 1);
	switch (iLocal_14)
	{
		case 0:
			Local_553[0 /*32*/].f_3 = 811170588;
			Local_553[1 /*32*/].f_3 = 901285354;
			Local_553[2 /*32*/].f_3 = 618474282;
			break;
		case 1:
			Local_553[0 /*32*/].f_3 = 1668440413;
			Local_553[1 /*32*/].f_3 = 1490832433;
			Local_553[2 /*32*/].f_3 = -221657348;
			Local_553[3 /*32*/].f_3 = 1195126440;
			break;
	}
	__LIB_3__::func_445(&Local_553);
}

void func_31()
{
	iLocal_760 = joaat("PG_RE_WEAPONTHREAT01X");
	PROPSET::_REQUEST_PROPSET(iLocal_760);
	iLocal_762 = joaat("PG_TEAMSTER_CHUCKWAGON002X_LIGHTUPGRADE1");
	PROPSET::_REQUEST_PROPSET(iLocal_762);
}

void func_34()
{
	switch (iLocal_14)
	{
		case 0:
			sLocal_24[0] = "RE_WT_BGV_V1_WARN_A";
			sLocal_24[1] = "RE_WT_BGV_V1_WARN_B";
			sLocal_24[2] = "RE_WT_BGV_V1_WARN_C";
			sLocal_24[3] = "RE_WT_BGV_V1_WARN_D";
			sLocal_24[4] = "RE_WT_BGV_V1_WARN_E";
			sLocal_24[5] = "";
			sLocal_24[6] = "";
			sLocal_24[7] = "";
			sLocal_24[8] = "WARNING";
			sLocal_53[0] = "RE_WT_BGV_V1_ATTACK_A";
			sLocal_53[1] = "PLEAD_HOGTIED";
			sLocal_53[2] = "GENERIC_INSULT_HIGH_MALE";
			sLocal_53[3] = "RE_WT_BGV_V1_ATTACK_D";
			sLocal_53[4] = "RE_WT_BGV_V1_ATTACK_A";
			sLocal_53[5] = "RE_WT_BGV_V1_ATTACK_B";
			sLocal_53[6] = "GENERIC_INSULT_HIGH_MALE";
			sLocal_53[7] = "RE_WT_BGV_V1_ATTACK_D";
			sLocal_34[0] = "RE_WT_BGV_V1_THANK_A";
			sLocal_34[1] = "RE_WT_BGV_V1_THANK_B";
			sLocal_34[2] = "RE_WT_BGV_V1_THANK_C";
			sLocal_34[3] = "RE_WT_BGV_V1_THANK_D";
			sLocal_39[0] = "RE_WT_BGV_V1_AGGRO_A";
			sLocal_39[1] = "RE_WT_BGV_V1_AGGRO_B";
			sLocal_39[2] = "RE_WT_BGV_V1_AGGRO_C";
			sLocal_39[3] = "RE_WT_BGV_V1_AGGRO_D";
			sLocal_39[4] = "RE_WT_BGV_V1_AGGRO_E";
			sLocal_39[5] = "RE_WT_BGV_V1_AGGRO_F";
			sLocal_39[6] = "RE_WT_BGV_V1_AGGRO_G";
			sLocal_62[0] = "RE_WT_BGV_V1_PLAYER_NEG_A0";
			sLocal_62[1] = "RE_WT_BGV_V1_PLAYER_POS_A";
			sLocal_62[2] = "RE_WT_BGV_V1_PLAYER_NEG_A";
			sLocal_62[3] = "RE_WT_BGV_V1_PLAYER_ROB_A";
			sLocal_62[6] = "RE_WT_BGV_V1_PLAYER_POS_B";
			sLocal_62[7] = "RE_WT_BGV_V1_PLAYER_NEG_B";
			sLocal_62[8] = "RE_WT_BGV_V1_PLAYER_ROB_B";
			sLocal_62[4] = "ARRIVAL_COMBAT_NEUTRAL";
			sLocal_62[5] = "WARNING";
			sLocal_62[9] = "RE_WT_BGV_V1_PED_POS_B";
			sLocal_62[10] = "RE_WT_BGV_V1_PED_NEG_B";
			sLocal_62[11] = "LEAVE_ME";
			sLocal_62[12] = "RE_WT_BGV_V1_PLAYER_POS_B_B";
			break;
		case 1:
			sLocal_24[0] = "RE_WT_BGV_V2_WARN_A";
			sLocal_24[1] = "RE_WT_BGV_V2_WARN_B";
			sLocal_24[2] = "RE_WT_BGV_V2_WARN_C";
			sLocal_24[3] = "RE_WT_BGV_V2_WARN_D";
			sLocal_24[4] = "RE_WT_BGV_V2_WARN_E";
			sLocal_24[5] = "";
			sLocal_24[6] = "";
			sLocal_24[7] = "RE_WT_BGV_V2_WARN_H";
			sLocal_24[8] = "WARNING";
			sLocal_53[0] = "RE_WT_BGV_V2_ATTACK_A";
			sLocal_53[1] = "RE_WT_BGV_V2_ATTACK_B";
			sLocal_53[2] = "RE_WT_BGV_V2_ATTACK_C";
			sLocal_53[3] = "RE_WT_BGV_V2_ATTACK_D";
			sLocal_53[4] = "RE_WT_BGV_V2_ATTACK_A";
			sLocal_53[5] = "RE_WT_BGV_V2_ATTACK_B";
			sLocal_53[6] = "RE_WT_BGV_V2_ATTACK_C";
			sLocal_53[7] = "RE_WT_BGV_V2_ATTACK_D";
			sLocal_34[0] = "RE_WT_BGV_V2_THANK_A";
			sLocal_34[1] = "RE_WT_BGV_V2_THANK_B";
			sLocal_34[2] = "RE_WT_BGV_V2_THANK_C";
			sLocal_34[3] = "RE_WT_BGV_V2_THANK_D";
			sLocal_39[0] = "RE_WT_BGV_V2_AGGRO_A";
			sLocal_39[1] = "RE_WT_BGV_V2_AGGRO_B";
			sLocal_39[2] = "RE_WT_BGV_V2_AGGRO_C";
			sLocal_39[3] = "RE_WT_BGV_V2_AGGRO_D";
			sLocal_39[4] = "RE_WT_BGV_V2_AGGRO_E";
			sLocal_39[5] = "RE_WT_BGV_V2_AGGRO_F";
			sLocal_39[6] = "RE_WT_BGV_V2_AGGRO_G";
			sLocal_39[7] = "RE_WT_BGV_V2_AGGRO_H";
			sLocal_39[8] = "RE_WT_BGV_V2_AGGRO_I";
			sLocal_39[9] = "";
			sLocal_39[10] = "RE_WT_BGV_V2_AGGRO_K";
			sLocal_39[11] = "RE_WT_BGV_V2_AGGRO_L";
			sLocal_39[12] = "RE_WT_BGV_V2_AGGRO_M";
			sLocal_62[0] = "RE_WT_BGV_V2_PLAYER_NEG_A0";
			sLocal_62[1] = "RE_WT_BGV_V2_PLAYER_POS_A";
			sLocal_62[2] = "RE_WT_BGV_V2_PLAYER_NEG_A";
			sLocal_62[3] = "RE_WT_BGV_V2_PLAYER_ROB_A";
			sLocal_62[6] = "RE_WT_BGV_V2_PLAYER_POS_B";
			sLocal_62[7] = "RE_WT_BGV_V2_PLAYER_NEG_B";
			sLocal_62[8] = "RE_WT_BGV_V2_PLAYER_ROB_B";
			sLocal_62[4] = "WARNING";
			sLocal_62[5] = "ARRIVAL_COMBAT_TRAP_NEUTRAL";
			sLocal_62[9] = "RE_WT_BGV_V2_PED_POS_B";
			sLocal_62[10] = "RE_WT_BGV_V2_PED_NEG_B";
			sLocal_62[11] = "RE_WT_BGV_V2_PED_ROB_B";
			break;
	}
}

void func_35()
{
	Local_553[0 /*32*/] = 22;
	Local_553[1 /*32*/] = 22;
	Local_553[2 /*32*/] = 4;
	Local_553[3 /*32*/] = 5;
	switch (Local_359.f_51.f_4)
	{
		case 0:
			vLocal_21 = { -2288.66f, -410.42f, 156.67f };
			fLocal_77 = 22.98f;
			vLocal_81 = { -2287.99f, -413.93f, 157.75f };
			fLocal_84 = 16f;
			Local_553[0 /*32*/].f_6 = { -2287.31f, -412.72f, 156.64f };
			Local_553[0 /*32*/].f_9 = 179.5f;
			Local_553[1 /*32*/].f_6 = { -2286.44f, -419.27f, 156.7f };
			Local_553[1 /*32*/].f_9 = 38f;
			Local_553[4 /*32*/].f_6 = { -2284.35f, -417.57f, 156.75f };
			Local_553[4 /*32*/].f_9 = 156.28f;
			if (!bLocal_766)
			{
				Local_553[5 /*32*/].f_6 = { -2286.6f, -404.74f, 157.58f };
				Local_553[5 /*32*/].f_9 = -107.16f;
			}
			else
			{
				Local_553[5 /*32*/].f_6 = { -2292.66f, -399.51f, 157.33f };
				Local_553[5 /*32*/].f_9 = -65.67f;
			}
			vLocal_15 = { -2067.9f, -442.96f, 153.19f };
			vLocal_18 = { -2247.13f, -223.26f, 175.28f };
			break;
		case 1:
			vLocal_21 = { -1880.98f, 382.62f, 114.56f };
			fLocal_77 = 192f;
			vLocal_81 = { -1880.98f, 382.62f, 114.56f };
			fLocal_84 = 192f;
			Local_553[0 /*32*/].f_6 = { -1888.47f, 382.64f, 113.36f };
			Local_553[0 /*32*/].f_9 = 0f;
			Local_553[1 /*32*/].f_6 = { -1886.39f, 380.91f, 113.34f };
			Local_553[1 /*32*/].f_9 = -115.16f;
			if (!bLocal_766)
			{
				Local_553[5 /*32*/].f_6 = { -1884.71f, 374.3f, 114.9f };
				Local_553[5 /*32*/].f_9 = 86.85f;
			}
			else
			{
				Local_553[5 /*32*/].f_6 = { -1878.43f, 369.3f, 115.32f };
				Local_553[5 /*32*/].f_9 = 86.08f;
			}
			Local_553[4 /*32*/].f_6 = { -1888.59f, 388.4f, 113.21f };
			Local_553[4 /*32*/].f_9 = 29.1f;
			vLocal_15 = { -1979.408f, 490.6195f, 116.774f };
			vLocal_18 = { -1711.286f, 395.1502f, 108.0253f };
			break;
		case 2:
			vLocal_21 = { -2660.73f, 216.36f, 152.1f };
			fLocal_77 = 10.98f;
			vLocal_81 = { -2660.73f, 216.36f, 152.1f };
			fLocal_84 = 10.98f;
			Local_553[0 /*32*/].f_6 = { -2646.9f, 208.82f, 152.26f };
			Local_553[0 /*32*/].f_9 = -57.87f;
			Local_553[1 /*32*/].f_6 = { -2660.45f, 212.52f, 152.38f };
			Local_553[1 /*32*/].f_9 = 71.07f;
			if (!bLocal_766)
			{
				Local_553[5 /*32*/].f_6 = { -2657.35f, 223.84f, 151.57f };
				Local_553[5 /*32*/].f_9 = 54.43f;
			}
			else
			{
				Local_553[5 /*32*/].f_6 = { -2661.73f, 228.21f, 152.44f };
				Local_553[5 /*32*/].f_9 = -133.24f;
			}
			Local_553[4 /*32*/].f_6 = { -2654.4f, 208.38f, 153.07f };
			Local_553[4 /*32*/].f_9 = -149.77f;
			vLocal_15 = { -2762.45f, -170.17f, 150.41f };
			vLocal_18 = { -2624.75f, 445.07f, 144.33f };
			break;
		case 3:
			vLocal_21 = { -1630.11f, 306.9f, 103.33f };
			fLocal_77 = 351.19f;
			vLocal_81 = { -1630.11f, 306.9f, 103.33f };
			fLocal_84 = 351.19f;
			Local_553[0 /*32*/].f_6 = { -1624.68f, 247.9f, 104.5f };
			Local_553[0 /*32*/].f_9 = -126.23f;
			Local_553[1 /*32*/].f_6 = { -1624.08f, 242.83f, 104.55f };
			Local_553[1 /*32*/].f_9 = 11.46f;
			if (!bLocal_766)
			{
				Local_553[5 /*32*/].f_6 = { -1628.61f, 316.47f, 104.32f };
				Local_553[5 /*32*/].f_9 = 28.92f;
			}
			else
			{
				Local_553[5 /*32*/].f_6 = { -1623.49f, 310.23f, 104.5f };
				Local_553[5 /*32*/].f_9 = 28.31f;
			}
			Local_553[4 /*32*/].f_6 = { -1626.64f, 297.73f, 104.6f };
			Local_553[4 /*32*/].f_9 = -7.87f;
			vLocal_15 = { -1527.19f, 164.44f, 99.01f };
			vLocal_18 = { -1619.901f, 371.5253f, 103.5383f };
			break;
		case 4:
			vLocal_21 = { -1921.31f, -666.25f, 117.43f };
			fLocal_77 = 186.08f;
			vLocal_81 = { -1921.31f, -666.25f, 117.43f };
			fLocal_84 = 186.08f;
			Local_553[0 /*32*/].f_6 = { -1921.54f, -681.62f, 117.1f };
			Local_553[0 /*32*/].f_9 = -73.99f;
			Local_553[1 /*32*/].f_6 = { -1919.2f, -679.21f, 117.24f };
			Local_553[1 /*32*/].f_9 = 96.49f;
			if (!bLocal_766)
			{
				Local_553[5 /*32*/].f_6 = { -1925.89f, -672.12f, 118.08f };
				Local_553[5 /*32*/].f_9 = 62.86f;
			}
			else
			{
				Local_553[5 /*32*/].f_6 = { -1919.7f, -678.02f, 118.28f };
				Local_553[5 /*32*/].f_9 = 62.15f;
			}
			Local_553[4 /*32*/].f_6 = { -1925.18f, -656.65f, 119.73f };
			Local_553[4 /*32*/].f_9 = -39.69f;
			vLocal_15 = { -1807.05f, -803.64f, 103.43f };
			vLocal_18 = { -1972.71f, -553.17f, 142.9f };
			break;
		case 5:
			vLocal_21 = { -2695.14f, -309.57f, 149.31f };
			fLocal_77 = 47.07f;
			vLocal_81 = { -2695.14f, -309.57f, 149.31f };
			fLocal_84 = 47.07f;
			Local_553[0 /*32*/].f_6 = { -2687.93f, -302.83f, 148.68f };
			Local_553[0 /*32*/].f_9 = -73.99f;
			Local_553[1 /*32*/].f_6 = { -2692.44f, -301.44f, 148.14f };
			Local_553[1 /*32*/].f_9 = 96.49f;
			if (!bLocal_766)
			{
				Local_553[5 /*32*/].f_6 = { -2695.13f, -301.26f, 148.9f };
				Local_553[5 /*32*/].f_9 = -86.79f;
			}
			else
			{
				Local_553[5 /*32*/].f_6 = { -2705.15f, -297.78f, 148.9f };
				Local_553[5 /*32*/].f_9 = -37.33f;
			}
			Local_553[4 /*32*/].f_6 = { -2683.29f, -313.76f, 149.47f };
			Local_553[4 /*32*/].f_9 = -87.82f;
			vLocal_15 = { -2524.796f, -283.6344f, 152.113f };
			vLocal_18 = { -2762.467f, -195.4687f, 148.97f };
			break;
	}
	__LIB_4__::func_1(&(Local_553[0 /*32*/].f_22));
	__LIB_4__::func_1(&(Local_553[1 /*32*/].f_22));
	__LIB_4__::func_1(&(Local_553[4 /*32*/].f_22));
	__LIB_4__::func_1(&(Local_553[5 /*32*/].f_22));
}

void func_36()
{
	switch (iLocal_14)
	{
		case 0:
			Local_110.f_4 = "script@beat@wilderness@wagonthreat@rewth_ig1_searching_man_man";
			Local_110.f_5 = "script@beat@wilderness@wagonthreat@rewth_ig1_searching_man_robber01";
			Local_110.f_6 = "script@beat@wilderness@wagonthreat@rewth_ig1_searching_man_robber02";
			break;
		case 1:
			Local_110.f_4 = "script@beat@wilderness@wagonthreat@rewth_ig1_searching_couple_couple";
			Local_110.f_5 = "script@beat@wilderness@wagonthreat@rewth_ig1_searching_couple_robber01";
			Local_110.f_6 = "script@beat@wilderness@wagonthreat@rewth_ig1_searching_couple_robber02";
			break;
	}
}

void func_37()
{
	__LIB_3__::func_432(&(Local_139[0 /*17*/]), __LIB_2__::func_460(7), sLocal_62[1], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_432(&(Local_139[1 /*17*/]), "INTERACT_INTERVENE", sLocal_62[0], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_432(&(Local_139[2 /*17*/]), "INTERACT_ROB", sLocal_62[3], joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	__LIB_3__::func_158(&(Local_139[2 /*17*/]), 1);
	__LIB_3__::func_432(&(Local_212[0 /*17*/]), __LIB_2__::func_460(7), sLocal_62[1], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_432(&(Local_212[1 /*17*/]), "INTERACT_INTERVENE", sLocal_62[0], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_432(&(Local_212[2 /*17*/]), "INTERACT_ROB", sLocal_62[3], joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	__LIB_3__::func_158(&(Local_212[2 /*17*/]), 1);
	__LIB_3__::func_432(&(Local_307[0 /*17*/]), "RE_INTER_POS", sLocal_62[6], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_432(&(Local_307[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_62[7], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_432(&(Local_307[2 /*17*/]), "INTERACT_ROB", sLocal_62[8], joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_307[1 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_307[0 /*17*/]), 0, 0);
	__LIB_3__::func_158(&(Local_307[2 /*17*/]), 1);
}

bool func_42()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_76))
	{
		return true;
	}
	else
	{
		iLocal_76 = VEHICLE::CREATE_VEHICLE(joaat("CHUCKWAGON000X"), vLocal_21, fLocal_77, true, true, false, false);
		__LIB_4__::func_474(iLocal_76);
	}
	return false;
}

void func_43()
{
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_76, vLocal_21, fLocal_77, true, false, true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_76, 0f);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_746[0], true, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_746[1], true, true);
	__LIB_2__::func_272(uLocal_746[1], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 99, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	__LIB_2__::func_272(uLocal_746[0], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 99, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_746[0], joaat("REL_CRIMINALS"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_746[1], joaat("REL_CRIMINALS"));
	PED::SET_PED_CAN_BE_TARGETTED(uLocal_746[4], false);
	PED::SET_PED_CAN_BE_TARGETTED(uLocal_746[5], false);
	PED::SET_PED_CONFIG_FLAG(uLocal_746[1], 315, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_746[1], 297, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_746[1], 130, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_746[1], 317, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_746[1], 301, false);
	PED::SET_PED_CONFIG_FLAG(uLocal_746[0], 347, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_746[1], 347, true);
	PED::SET_PED_COMBAT_MOVEMENT(uLocal_746[0], 0);
	PED::SET_PED_COMBAT_MOVEMENT(uLocal_746[1], 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_746[0], 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_746[0], 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_746[1], 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_746[1], 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_746[0], 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_746[1], 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_746[0], 46, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_746[1], 46, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_746[0], 0, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_746[1], 0, false);
	__LIB_2__::func_190(uLocal_746[0], 200);
	__LIB_2__::func_190(uLocal_746[1], 200);
	__LIB_2__::func_463(uLocal_746[0], joaat("PROVISION_NECKLACE_PEARL"), 1, 0);
	__LIB_2__::func_463(uLocal_746[1], joaat("PROVISION_NECKLACE_PEARL"), 1, 0);
	__LIB_2__::func_190(uLocal_746[2], 100);
	__LIB_2__::func_463(uLocal_746[2], joaat("PROVISION_GOLDRING"), 1, 0);
	__LIB_1__::func_991(uLocal_746[0], 0);
	__LIB_1__::func_991(uLocal_746[1], 0);
	__LIB_3__::func_478(&(Local_553[2 /*32*/].f_22));
	PED::SET_PED_CONFIG_FLAG(uLocal_746[2], 146, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_746[4], 358, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_746[5], 358, true);
	__LIB_4__::func_405(uLocal_746[4], &(uLocal_763[0]), 1, 1);
	__LIB_4__::func_405(uLocal_746[5], &(uLocal_763[1]), 1, 1);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_746[4], 270352);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_746[5], 270352);
	switch (iLocal_14)
	{
		case 0:
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_746[0], "0713_G_M_M_UniRanchers_01_WHITE_03");
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_746[1], "0714_G_M_M_UniRanchers_01_WHITE_04");
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_746[2], "0595_A_M_M_Civ_White_AVOID_11");
			__LIB_3__::func_285(uLocal_746[2], &Local_359, 0);
			__LIB_3__::func_285(uLocal_746[0], &Local_359, 0);
			__LIB_3__::func_285(uLocal_746[1], &Local_359, 0);
			PED::SET_PED_INTO_VEHICLE(uLocal_746[2], iLocal_76, -1);
			break;
		case 1:
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_746[0], "0711_G_M_M_UniRanchers_01_WHITE_01");
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_746[1], "0712_G_M_M_UniRanchers_01_WHITE_02");
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_746[2], "0927_A_M_M_Civ_Poor_White_AVOID_10");
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_746[3], "REFND_VOLUNTEER");
			__LIB_3__::func_478(&(Local_553[3 /*32*/].f_22));
			PED::SET_PED_CONFIG_FLAG(uLocal_746[3], 146, true);
			PED::SET_PED_INTO_VEHICLE(uLocal_746[2], iLocal_76, -1);
			PED::SET_PED_INTO_VEHICLE(uLocal_746[3], iLocal_76, 0);
			__LIB_3__::func_285(uLocal_746[3], &Local_359, 0);
			__LIB_3__::func_285(uLocal_746[2], &Local_359, 0);
			__LIB_3__::func_285(uLocal_746[0], &Local_359, 0);
			break;
	}
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_746[0], true, 0f);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_746[1], true, 0f);
	__LIB_3__::func_459(uLocal_746[0], 1);
	__LIB_3__::func_459(uLocal_746[1], 1);
}

void func_44()
{
	__LIB_2__::func_51(&(Local_359.f_5), 1);
	__LIB_2__::func_180(&(Local_359.f_5), 1);
	__LIB_2__::func_111(&(Local_359.f_5), 1);
	__LIB_2__::func_110(&(Local_359.f_5), 1);
	__LIB_2__::func_105(&(Local_359.f_5), 1);
	__LIB_2__::func_104(&(Local_359.f_5), 1);
	__LIB_2__::func_50(&(Local_359.f_5), 1);
	__LIB_3__::func_387(&(Local_359.f_5), 0);
	__LIB_2__::func_182(&(Local_359.f_5), 1);
	__LIB_3__::func_999(&(Local_359.f_5), 1);
	__LIB_2__::func_23(&(Local_359.f_5), uLocal_746[2], 0);
	__LIB_2__::func_23(&(Local_359.f_5), uLocal_746[3], 0);
	__LIB_2__::func_967(&(Local_359.f_5), uLocal_746[0], uLocal_746[4], 1);
	__LIB_2__::func_967(&(Local_359.f_5), uLocal_746[1], uLocal_746[5], 1);
}

void func_45()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { (Local_359.f_51 - 15f), (Local_359.f_51.f_1 - 15f), (Local_359.f_51.f_2 - 15f) };
	vVar3 = { (Local_359.f_51 + 15f), (Local_359.f_51.f_1 + 15f), (Local_359.f_51.f_2 + 15f) };
	vVar6 = { Local_359.f_51, Local_359.f_51.f_1, Local_359.f_51.f_2 };
	fLocal_80 = 20f;
	switch (Local_359.f_51.f_4)
	{
		case 0:
			vVar6 = { -2289.91f, -322.24f, 156.1f };
			break;
	}
	iLocal_79 = VOLUME::_CREATE_VOLUME_BOX(vVar6, 0f, 0f, 0f, fLocal_80, fLocal_80, fLocal_80);
	PATHFIND::_0xC1799FAFD2FDF52B(iLocal_79, 0, 0, 0);
	iLocal_78 = __LIB_4__::func_29(vVar0, vVar3, vVar6, fLocal_80, 0, 0);
}

void func_46()
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_76, true, false) };
	switch (iLocal_14)
	{
		case 0:
			Local_110 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_110.f_4, 0, 0, false, true);
			Local_110.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_110.f_5, 64, 0, false, true);
			Local_110.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_110.f_6, 64, 0, false, true);
			MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_76, true, false), &(vLocal_81.f_2), false);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_110, 0f, 0f, 0f, 0f, 0f, 0f, 2);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_110.f_1, vVar0.x, vVar0.y, vLocal_81.z, 0f, 0f, fLocal_84, 2);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_110.f_2, vVar0.x, vVar0.y, vLocal_81.z, 0f, 0f, fLocal_84, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110, "Victim", uLocal_746[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110, "chuckwagon000x", iLocal_76, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110.f_1, "Robber01", uLocal_746[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110.f_2, "Robber02", uLocal_746[1], 0);
			if ((!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_110, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_110.f_1, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_110.f_2, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_110);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_110.f_1);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_110.f_2);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110, "Internal_Loop", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110, "Cower_Bool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110.f_1, "Internal_Loop", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110.f_2, "Internal_Loop", false, false);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Loops");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Loops");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Loops");
			break;
		case 1:
			Local_110 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_110.f_4, 0, 0, false, true);
			Local_110.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_110.f_5, 0, 0, false, true);
			Local_110.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_110.f_6, 64, 0, false, true);
			MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_76, true, false), &(vLocal_81.f_2), false);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_110, 0f, 0f, 0f, 0f, 0f, 0f, 2);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_110.f_1, vVar0.x, vVar0.y, vLocal_81.z, 0f, 0f, fLocal_84, 2);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_110.f_2, vVar0.x, vVar0.y, vLocal_81.z, 0f, 0f, fLocal_84, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110, "Victim", uLocal_746[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110, "Victim_Female", uLocal_746[3], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110, "chuckwagon000x", iLocal_76, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110.f_1, "Robber01", uLocal_746[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110.f_2, "Robber02", uLocal_746[1], 0);
			if ((!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_110, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_110.f_1, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_110.f_2, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_110);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_110.f_1);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_110.f_2);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110, "Internal_Loop", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110, "Cower_Bool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110.f_1, "Internal_Loop", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110.f_2, "Internal_Loop", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110, "BaseBool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110.f_1, "BaseBool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110.f_2, "BaseBool", false, false);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110, "pbl_Base");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_1, "pbl_Base");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_110.f_2, "pbl_Base");
			break;
	}
}

void func_47()
{
	int iVar0;
	int iVar1;
	iVar0 = 10;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (iVar1 != 0 && VEHICLE::DOES_EXTRA_EXIST(iLocal_76, iVar1))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_76, iVar1, true);
		}
		iVar1++;
	}
}

void func_58()
{
	if (func_189() == 0)
	{
		if ((((__LIB_3__::func_453(uLocal_746[2], 0, &(Local_359.f_5), &iLocal_906, 0, 0) || __LIB_3__::func_453(uLocal_746[3], 0, &(Local_359.f_5), &iLocal_906, 0, 0)) || func_60()) || FIRE::IS_ENTITY_ON_FIRE(iLocal_76)) || func_191())
		{
			if (iLocal_906 != 256 || (!__LIB_2__::func_1(uLocal_746[0], 0, 1) && !__LIB_2__::func_1(uLocal_746[1], 0, 1)))
			{
				if (iLocal_792 != 5)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uLocal_746[2]);
					TASK::CLEAR_PED_SECONDARY_TASK(uLocal_746[3]);
					bLocal_858 = true;
				}
				else if (iLocal_906 == 2 || FIRE::IS_ENTITY_ON_FIRE(iLocal_76))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uLocal_746[2]);
					TASK::CLEAR_PED_SECONDARY_TASK(uLocal_746[3]);
					bLocal_858 = true;
				}
			}
		}
	}
	if (bLocal_858)
	{
		func_192();
	}
}

void func_59()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar0 = func_194(&(uLocal_746[0]), &iLocal_118, 50f, &Local_139, &(Local_359.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar1 = func_194(&(uLocal_746[1]), &iLocal_191, 50f, &Local_212, &(Local_359.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar2 = func_194(&(uLocal_746[2]), &(Local_264[0 /*21*/]), 30f, &Local_307, &(Local_359.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_746[3]))
	{
		iVar3 = func_194(&(uLocal_746[3]), &(Local_264[1 /*21*/]), 30f, &Local_307, &(Local_359.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	if (iLocal_792 != 5 && !bLocal_858)
	{
		switch (iLocal_795)
		{
			case 0:
				switch (iLocal_796)
				{
					case 0:
						__LIB_3__::func_158(&(Local_139[0 /*17*/]), 0);
						__LIB_2__::func_411(&(Local_139[0 /*17*/]), 0, 0);
						__LIB_3__::func_158(&(Local_212[0 /*17*/]), 0);
						__LIB_2__::func_411(&(Local_212[0 /*17*/]), 0, 0);
						switch (iVar0)
						{
							case 1:
								__LIB_3__::func_465(10, joaat("HONOR_EVENT_INTERVENED"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
								iLocal_853 = 1;
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[0], 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[1], 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
								iLocal_796 = 2;
								break;
						}
						switch (iVar1)
						{
							case 1:
								__LIB_3__::func_465(10, joaat("HONOR_EVENT_INTERVENED"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
								iLocal_853 = 1;
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[0], 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[1], 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
								iLocal_796 = 2;
								break;
						}
						break;
					case 2:
						__LIB_2__::func_411(&(Local_139[1 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_212[1 /*17*/]), 0, 0);
						func_196();
						if (!__LIB_2__::func_136(Global_35, 0))
						{
							if (bLocal_766)
							{
								__LIB_2__::func_303(uLocal_746[2], Global_35, "RE_WT_BGV_B1_PED_NEG_ILO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_65(5);
							iLocal_796 = 4;
						}
						break;
					case 4:
						iLocal_796 = 0;
						break;
				}
				break;
			case 1:
				switch (iLocal_796)
				{
					case 0:
						if (!__LIB_2__::func_136(uLocal_746[0], 0) && !__LIB_2__::func_136(uLocal_746[1], 0))
						{
							__LIB_2__::func_411(&(Local_139[0 /*17*/]), 1, 0);
							__LIB_2__::func_411(&(Local_139[1 /*17*/]), 1, 0);
							__LIB_2__::func_411(&(Local_139[2 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_212[0 /*17*/]), 1, 0);
							__LIB_2__::func_411(&(Local_212[1 /*17*/]), 1, 0);
							__LIB_2__::func_411(&(Local_212[2 /*17*/]), 0, 0);
							switch (iVar0)
							{
								case 0:
									__LIB_2__::func_411(&(Local_139[0 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_139[1 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_139[2 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_212[0 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_212[1 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_212[2 /*17*/]), 0, 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[0], 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[1], 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
									iLocal_796 = 1;
									break;
								case 1:
									__LIB_2__::func_411(&(Local_139[0 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_139[1 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_139[2 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_212[0 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_212[1 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_212[2 /*17*/]), 0, 0);
									iLocal_853 = 1;
									__LIB_3__::func_465(10, joaat("HONOR_EVENT_INTERVENED"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[0], 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[1], 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
									iLocal_796 = 2;
									break;
							}
							switch (iVar1)
							{
								case 0:
									__LIB_2__::func_411(&(Local_139[0 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_139[1 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_139[2 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_212[0 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_212[1 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_212[2 /*17*/]), 0, 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[0], 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[1], 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
									iLocal_796 = 1;
									break;
								case 1:
									__LIB_2__::func_411(&(Local_139[0 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_139[1 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_139[2 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_212[0 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_212[1 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_212[2 /*17*/]), 0, 0);
									iLocal_853 = 1;
									__LIB_3__::func_465(10, joaat("HONOR_EVENT_INTERVENED"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[0], 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[1], 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
									AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
									iLocal_796 = 2;
									break;
							}
						}
						else
						{
							__LIB_2__::func_411(&(Local_139[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_139[1 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_139[2 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_212[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_212[1 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_212[2 /*17*/]), 0, 0);
						}
						break;
					case 1:
						if (!__LIB_2__::func_136(Global_35, 0))
						{
							func_199();
							if (bLocal_766)
							{
								if (func_200(uLocal_746[1], Global_35, sLocal_62[4], 0f, 0))
								{
									iLocal_795 = 4;
									iLocal_796 = 0;
								}
							}
							else if (func_200(uLocal_746[1], Global_35, sLocal_62[4], 0f, 2))
							{
								iLocal_795 = 4;
								iLocal_796 = 0;
							}
						}
						break;
					case 2:
						if (!__LIB_2__::func_136(Global_35, 0))
						{
							func_199();
							if (bLocal_766)
							{
								if (func_200(uLocal_746[1], Global_35, sLocal_62[5], 0f, 1))
								{
									iLocal_851 = 1;
									func_65(5);
									iLocal_796 = 4;
								}
							}
							else if (func_200(uLocal_746[1], Global_35, sLocal_62[5], 0f, 1))
							{
								iLocal_851 = 1;
								func_65(5);
								iLocal_796 = 4;
							}
						}
						break;
					case 4:
						func_199();
						iLocal_795 = 4;
						iLocal_796 = 0;
						break;
				}
				break;
			case 2:
				switch (iLocal_796)
				{
					case 0:
						switch (iVar2)
						{
							case 0:
								__LIB_2__::func_411(&(Local_307[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[1 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[2 /*17*/]), 0, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
								iLocal_796 = 1;
								break;
							case 1:
								__LIB_2__::func_411(&(Local_307[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[1 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[2 /*17*/]), 0, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
								iLocal_796 = 2;
								break;
							case 2:
								__LIB_2__::func_411(&(Local_307[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[1 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[2 /*17*/]), 0, 0);
								__LIB_3__::func_465(3, 0, 0, "RE_HONOR_ROB", uLocal_746[2], 0, 1065353216 /* Float: 1f */, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
								iLocal_796 = 3;
								break;
						}
						switch (iVar3)
						{
							case 0:
								__LIB_2__::func_411(&(Local_307[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[1 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[2 /*17*/]), 0, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
								iLocal_796 = 1;
								break;
							case 1:
								__LIB_2__::func_411(&(Local_307[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[1 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[2 /*17*/]), 0, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
								iLocal_796 = 2;
								break;
							case 2:
								__LIB_2__::func_411(&(Local_307[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[1 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[2 /*17*/]), 0, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
								__LIB_3__::func_465(3, 0, 0, "RE_HONOR_ROB", uLocal_746[2], 0, 1065353216 /* Float: 1f */, 0);
								iLocal_796 = 3;
								break;
						}
						break;
					case 1:
						if (!__LIB_2__::func_136(Global_35, 0))
						{
							if (!bLocal_855)
							{
								if (!__LIB_2__::func_136(Global_35, 0))
								{
									__LIB_2__::func_303(uLocal_746[2], Global_35, sLocal_62[9], "", -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
									if (bLocal_766)
									{
										bLocal_855 = true;
									}
									else
									{
										iLocal_796 = 4;
									}
								}
							}
							else if (!__LIB_2__::func_136(uLocal_746[2], 0))
							{
								__LIB_2__::func_303(Global_35, uLocal_746[2], sLocal_62[12], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_796 = 4;
							}
						}
						break;
					case 2:
						if (!__LIB_2__::func_136(Global_35, 0))
						{
							if (func_200(uLocal_746[2], Global_35, sLocal_62[10], 0f, 0))
							{
								__LIB_2__::func_411(&(Local_307[2 /*17*/]), 1, 0);
								iLocal_796 = 0;
								iLocal_795 = 3;
							}
						}
						break;
					case 3:
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
						if (!__LIB_2__::func_136(Global_35, 0))
						{
							if (bLocal_766)
							{
								if (func_200(uLocal_746[2], Global_35, sLocal_62[11], 0f, 0))
								{
									iLocal_852 = 1;
									bLocal_858 = true;
									iLocal_796 = 4;
								}
							}
							else if (func_200(uLocal_746[3], Global_35, sLocal_62[11], 0f, 0))
							{
								iLocal_852 = 1;
								bLocal_858 = true;
								iLocal_796 = 4;
							}
						}
						break;
					case 4:
						break;
				}
				break;
			case 3:
				switch (iLocal_796)
				{
					case 0:
						switch (iVar2)
						{
							case 2:
								__LIB_2__::func_411(&(Local_307[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[1 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[2 /*17*/]), 0, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
								__LIB_3__::func_465(3, 0, 0, "RE_HONOR_ROB", uLocal_746[2], 0, 1065353216 /* Float: 1f */, 0);
								iLocal_796 = 3;
								break;
						}
						switch (iVar3)
						{
							case 2:
								__LIB_2__::func_411(&(Local_307[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[1 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_307[2 /*17*/]), 0, 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
								AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
								__LIB_3__::func_465(3, 0, 0, "RE_HONOR_ROB", uLocal_746[2], 0, 1065353216 /* Float: 1f */, 0);
								iLocal_796 = 3;
								break;
						}
						break;
					case 3:
						if (!__LIB_2__::func_136(Global_35, 0))
						{
							if (bLocal_766)
							{
								if (func_200(uLocal_746[2], Global_35, sLocal_62[11], 0f, 0))
								{
									iLocal_852 = 1;
									bLocal_858 = true;
									iLocal_796 = 4;
								}
							}
							else if (func_200(uLocal_746[3], Global_35, sLocal_62[11], 0f, 0))
							{
								iLocal_852 = 1;
								bLocal_858 = true;
								iLocal_796 = 4;
							}
						}
						break;
					case 4:
						break;
				}
				break;
			case 4:
				break;
			case 5:
				break;
		}
	}
}

bool func_60()
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	switch (iLocal_797)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_76))
			{
				if (__LIB_4__::func_475(&iLocal_76))
				{
					iLocal_797 = 1;
				}
			}
			break;
		case 1:
			VEHICLE::_0xA19447D83294E29F(iLocal_76, &iVar0, &iVar1);
			if (iVar1 < 2)
			{
				iLocal_797 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_62()
{
	if (Local_359.f_46 == 0)
	{
		if ((((__LIB_4__::func_52(&uLocal_746, &(Local_359.f_5), &iLocal_906, &uLocal_821, 0, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_746[4], Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_746[5], Global_35, 1, 1)) || __LIB_2__::func_118(uLocal_746[1], 1, 1) <= 1f) || bLocal_858)
		{
			__LIB_3__::func_237(&(Local_359.f_5), &iLocal_906);
			Local_359.f_46 = 1;
			func_65(5);
			return true;
		}
	}
	return false;
}

void func_63()
{
	if (!Local_359.f_46)
	{
		if (iLocal_792 >= 4)
		{
			if (!bLocal_834)
			{
				if (bLocal_835)
				{
					__LIB_3__::func_465(2, 0, 0, "Ignored Victim", 0, 0, 1065353216 /* Float: 1f */, 0);
					bLocal_834 = true;
				}
				else if (__LIB_0__::func_94(Global_35, Local_359.f_51, 1) < 25f)
				{
					if ((bLocal_766 && !bLocal_858) && !__LIB_2__::func_1(uLocal_746[2], 0, 1))
					{
						__LIB_3__::func_465(2, 0, 0, "Watched Murder", 0, 0, 1065353216 /* Float: 1f */, 0);
						bLocal_834 = true;
					}
				}
			}
		}
		else if (!bLocal_766)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_746[2]))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_746[2], &Local_767);
				if (__LIB_2__::func_136(uLocal_746[0], 0))
				{
					Local_767.f_3 = uLocal_746[0];
				}
				else if (__LIB_2__::func_136(uLocal_746[1], 0))
				{
					Local_767.f_3 = uLocal_746[1];
				}
			}
		}
	}
}

bool func_64()
{
	func_206();
	switch (iLocal_807)
	{
		case 0:
			if (fLocal_859 >= 0.56f)
			{
				iLocal_807++;
			}
			break;
		case 1:
			if (fLocal_859 >= 0.63f)
			{
				iLocal_807++;
			}
			break;
		case 2:
			if (fLocal_859 >= 0.72f)
			{
				iLocal_807++;
			}
			break;
		case 3:
			if (fLocal_859 >= 0.74f)
			{
				iLocal_807++;
			}
			break;
		case 4:
			if (fLocal_859 >= 0.77f)
			{
				iLocal_829 = 1;
				iLocal_807++;
			}
			break;
		case 5:
			if (fLocal_859 >= 0.82f)
			{
				iLocal_807++;
			}
			break;
		case 6:
			if (fLocal_859 >= 0.89f)
			{
				iLocal_807++;
			}
			break;
		case 7:
			iLocal_807++;
			return true;
	}
	return false;
}

void func_65(int iParam0)
{
	iLocal_792 = iParam0;
}

bool func_66()
{
	func_206();
	switch (iLocal_813)
	{
		case 0:
			if (fLocal_859 >= 0.25f)
			{
				iLocal_813++;
			}
			break;
		case 1:
			if (fLocal_859 >= 0.39f)
			{
				iLocal_813++;
			}
			break;
		case 2:
			if (fLocal_859 >= 0.4f)
			{
				iLocal_813++;
			}
			break;
		case 3:
			if (fLocal_859 >= 0.51f)
			{
				iLocal_829 = 1;
				iLocal_813++;
			}
			break;
		case 4:
			if (fLocal_859 >= 0.62f)
			{
				iLocal_813++;
			}
			break;
		case 5:
			if (fLocal_859 >= 0.75f)
			{
				iLocal_813++;
			}
			break;
		case 6:
			iLocal_813++;
			return true;
	}
	return false;
}

void func_67()
{
	if (Local_359.f_182 == 0)
	{
		if (__LIB_0__::func_665(Global_35, uLocal_746[0], 1, 1) < 100f)
		{
			AUDIO::_PLAY_SOUND_FROM_POSITION("distant_gunshots", Local_359.f_51, "TRE1_Sounds", false, 0, true, 0);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_110, "Wagon", iLocal_76);
			__LIB_3__::func_209(&Local_359, uLocal_746[0], 1);
		}
	}
	if (__LIB_3__::func_452(&Local_359, 1f, 80f, 45f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, "pbl_Action_P0", true);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, "pbl_Action_P0", true);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_2, "pbl_Action_P0", true);
		iLocal_820 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), uLocal_746[0], 0f, 50f, 50f, 15f, -1f, 180f, false, false, -1, -1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_76, false);
		func_65(1);
	}
}

void func_68()
{
	func_209();
	func_210();
	func_211();
	if (iLocal_830 == 1 || bLocal_849)
	{
		switch (iLocal_14)
		{
			case 0:
				func_212();
				func_213();
				break;
			case 1:
				func_214();
				func_215();
				break;
		}
	}
	if (iLocal_830 == 0)
	{
		switch (iLocal_14)
		{
			case 0:
				if (iLocal_846 == 1)
				{
					func_216();
				}
				else
				{
					func_217();
				}
				break;
			case 1:
				if (iLocal_846 == 1)
				{
					func_218();
				}
				else
				{
					func_219();
				}
				break;
		}
		if (iLocal_828 == 1)
		{
			switch (iLocal_14)
			{
				case 0:
					func_65(2);
					break;
				case 1:
					func_65(3);
					break;
			}
		}
	}
}

void func_69()
{
	func_210();
	func_209();
	func_211();
	if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0"))
	{
		if (fLocal_860 >= 0.58f)
		{
			iLocal_848 = 1;
		}
	}
	if (PED::IS_PED_DEAD_OR_DYING(uLocal_746[2], true) || iLocal_829 == 1)
	{
		__LIB_2__::func_411(&(Local_139[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_139[1 /*17*/]), 0, 0);
		__LIB_2__::func_360(&(Local_139[0 /*17*/]), "RE_INTER_POS");
		__LIB_2__::func_360(&(Local_139[1 /*17*/]), "RE_INTER_ANTAGONIZE");
		__LIB_2__::func_411(&(Local_212[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_212[1 /*17*/]), 0, 0);
		__LIB_2__::func_360(&(Local_212[0 /*17*/]), "RE_INTER_POS");
		__LIB_2__::func_360(&(Local_212[1 /*17*/]), "RE_INTER_ANTAGONIZE");
		if (iLocal_795 != 4)
		{
			iLocal_795 = 4;
		}
	}
	if (iLocal_830 == 1)
	{
		bLocal_849 = true;
	}
	if (bLocal_849 == 1)
	{
		if (!PED::IS_PED_DEAD_OR_DYING(uLocal_746[2], true))
		{
			func_221();
		}
		else
		{
			func_222();
		}
	}
	func_65(4);
}

void func_70()
{
	func_209();
	func_210();
	func_211();
	if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0"))
	{
		if (fLocal_860 >= 0.58f)
		{
			iLocal_848 = 1;
		}
	}
	if (iLocal_830 == 1)
	{
		bLocal_849 = true;
	}
	if (bLocal_849 == 1)
	{
		if (iLocal_824 == 0)
		{
			func_221();
		}
		else
		{
			func_222();
		}
	}
	if (iLocal_824 == 1)
	{
		__LIB_2__::func_411(&(Local_139[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_139[1 /*17*/]), 0, 0);
		__LIB_2__::func_360(&(Local_139[0 /*17*/]), "RE_INTER_POS");
		__LIB_2__::func_360(&(Local_139[1 /*17*/]), "RE_INTER_ANTAGONIZE");
		__LIB_2__::func_411(&(Local_212[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_212[1 /*17*/]), 0, 0);
		__LIB_2__::func_360(&(Local_212[0 /*17*/]), "RE_INTER_POS");
		__LIB_2__::func_360(&(Local_212[1 /*17*/]), "RE_INTER_ANTAGONIZE");
		if (iLocal_795 != 4)
		{
			iLocal_795 = 4;
		}
	}
	if (iLocal_830 == 0)
	{
		if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0"))
		{
			if (func_223())
			{
				func_65(4);
			}
		}
		else if (func_224())
		{
			func_65(4);
		}
	}
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_746[0], Local_110.f_1) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_746[1], Local_110.f_2))
	{
		func_65(4);
	}
}

void func_71()
{
	int iVar0;
	int iVar1;
	func_225();
	func_226();
	func_58();
	func_196();
	Local_359.f_44 = 1;
	__LIB_2__::func_603(&(uLocal_746[0]), &iLocal_118, &Local_139, 1, 1);
	__LIB_2__::func_603(&(uLocal_746[1]), &iLocal_191, &Local_212, 1, 1);
	if (func_228())
	{
		if (!PED::IS_PED_ON_MOUNT(uLocal_746[0]))
		{
			if (!__LIB_0__::func_163(uLocal_746[4], 242628503))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_746[4], iVar0, 3f, 3f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
		}
	}
	if (func_230())
	{
		if (!PED::IS_PED_ON_MOUNT(uLocal_746[1]))
		{
			if (!__LIB_0__::func_163(uLocal_746[5], 242628503))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_746[5], iVar1, 2f, 2f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			}
		}
	}
	switch (iLocal_14)
	{
		case 0:
			func_231();
			break;
		case 1:
			if (iLocal_833 == 0)
			{
				func_232();
			}
			break;
	}
	if (func_233())
	{
		AITRANSPORT::_0xBA8818212633500A(uLocal_746[4], 0, 0);
		AITRANSPORT::_0xBA8818212633500A(uLocal_746[5], 0, 0);
		if (ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_76, 0)) && ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_76, 1)))
		{
			func_65(9);
		}
		switch (iLocal_14)
		{
			case 0:
				if (!PED::IS_PED_DEAD_OR_DYING(uLocal_746[2], true))
				{
					if (!__LIB_0__::func_75(&uLocal_865))
					{
						__LIB_1__::func_148(&uLocal_865);
					}
					else if ((!__LIB_2__::func_136(Global_35, 0) && !__LIB_2__::func_136(uLocal_746[2], 0)) && __LIB_0__::func_265(&uLocal_865) > 4f)
					{
						__LIB_2__::func_303(uLocal_746[2], Global_35, sLocal_34[0], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110, "Cower_Bool", true, false);
						__LIB_3__::func_465(13, 0, 0, "Saved Victim", 0, 0, 1065353216 /* Float: 1f */, 0);
						bLocal_836 = true;
						iLocal_817 = ENTITY::GET_ENTITY_HEALTH(uLocal_746[0]);
						iLocal_816 = ENTITY::GET_ENTITY_HEALTH(uLocal_746[0]);
						iLocal_819 = ENTITY::GET_ENTITY_HEALTH(uLocal_746[1]);
						iLocal_818 = ENTITY::GET_ENTITY_HEALTH(uLocal_746[1]);
						iLocal_795 = 2;
						iLocal_796 = 0;
						__LIB_1__::func_148(&uLocal_865);
						func_65(6);
					}
				}
				else
				{
					func_65(9);
				}
				break;
			case 1:
				if ((!PED::IS_PED_DEAD_OR_DYING(uLocal_746[2], true) && !PED::IS_PED_DEAD_OR_DYING(uLocal_746[3], true)) && iLocal_824 == 0)
				{
					if (!__LIB_0__::func_75(&uLocal_865))
					{
						__LIB_1__::func_148(&uLocal_865);
					}
					else if ((!__LIB_2__::func_136(Global_35, 0) && !__LIB_2__::func_136(uLocal_746[2], 0)) && __LIB_0__::func_265(&uLocal_865) > 3f)
					{
						__LIB_2__::func_303(uLocal_746[2], Global_35, sLocal_34[0], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_110, "Cower_Bool", true, false);
						bLocal_836 = true;
						__LIB_3__::func_465(13, 0, 0, "Saved Victim", 0, 0, 1065353216 /* Float: 1f */, 0);
						iLocal_817 = ENTITY::GET_ENTITY_HEALTH(uLocal_746[0]);
						iLocal_816 = ENTITY::GET_ENTITY_HEALTH(uLocal_746[0]);
						iLocal_819 = ENTITY::GET_ENTITY_HEALTH(uLocal_746[1]);
						iLocal_818 = ENTITY::GET_ENTITY_HEALTH(uLocal_746[1]);
						iLocal_795 = 2;
						iLocal_796 = 0;
						func_65(6);
					}
				}
				else
				{
					PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[2], 2048, false);
					PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[3], 2048, false);
					PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[2], 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[3], 65536, true);
					func_65(9);
				}
				break;
		}
	}
	if (iLocal_824 == 1)
	{
		if (!__LIB_0__::func_163(uLocal_746[3], 518218985))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_746[3], uLocal_746[1], 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		if (!__LIB_0__::func_163(uLocal_746[2], 518218985))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_746[2], uLocal_746[1], 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
	}
	if (func_237() || func_60())
	{
		if (!__LIB_0__::func_163(uLocal_746[3], 242628503))
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_899);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_899);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, uLocal_746[1], 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_899);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_746[3], iLocal_899);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_899);
		}
		if (!__LIB_0__::func_163(uLocal_746[2], 242628503))
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_898);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_898);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, uLocal_746[1], 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_898);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_746[2], iLocal_898, 0.5f, 0.5f);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_898);
		}
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[3], 2, false);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[3], 65536, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[3], 2048, false);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[2], 2, false);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[2], 65536, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[2], 2048, false);
	}
	switch (iLocal_14)
	{
		case 1:
			if (PED::IS_PED_DEAD_OR_DYING(uLocal_746[2], true) && iLocal_832 == 0)
			{
				iLocal_832 = 1;
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[3], 2, false);
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[3], 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[3], 2048, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_746[3], uLocal_746[1], 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[2], 2, false);
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[2], 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[2], 2048, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_746[2], uLocal_746[1], 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			if (PED::IS_PED_DEAD_OR_DYING(uLocal_746[3], true) && iLocal_832 == 0)
			{
				iLocal_832 = 1;
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[2], 2, false);
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[2], 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[2], 2048, false);
				TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_746[2], uLocal_746[1], 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			break;
	}
}

void func_72()
{
	func_222();
	func_209();
	func_211();
	Local_359.f_44 = 1;
	if (iLocal_830 == 1)
	{
		func_238();
	}
	switch (iLocal_798)
	{
		case 0:
			iLocal_798 = 1;
			break;
		case 1:
			iLocal_798 = 2;
			break;
		case 2:
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_746[0]))
	{
		func_239(uLocal_746[0], Global_35, &uLocal_85, -1, 10);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_746[1]))
	{
		func_239(uLocal_746[1], Global_35, &uLocal_85, -1, 10);
	}
	if (func_240())
	{
		__LIB_2__::func_593(&iLocal_118, &Local_139);
		PED::_0x24C82EF607105FAA(uLocal_746[0], joaat("AGGRESSIVE"));
		__LIB_2__::func_56(uLocal_746[0], 1, 1);
		__LIB_2__::func_593(&iLocal_191, &Local_212);
		PED::_0x24C82EF607105FAA(uLocal_746[1], joaat("AGGRESSIVE"));
		__LIB_2__::func_56(uLocal_746[1], 1, 1);
		__LIB_4__::func_405(uLocal_746[4], &(uLocal_763[0]), 0, 0);
		__LIB_4__::func_405(uLocal_746[5], &(uLocal_763[1]), 0, 0);
		__LIB_3__::func_524(&iLocal_820);
	}
	switch (iLocal_14)
	{
		case 0:
			if ((ENTITY::IS_ENTITY_AT_COORD(uLocal_746[0], vLocal_15, 2f, 2f, 2f, false, true, 0) || (__LIB_2__::func_118(uLocal_746[0], 1, 1) >= 100f && __LIB_2__::func_118(uLocal_746[1], 1, 1) >= 100f)) || (PED::IS_PED_DEAD_OR_DYING(uLocal_746[0], true) && PED::IS_PED_DEAD_OR_DYING(uLocal_746[1], true)))
			{
				func_65(11);
			}
			break;
		case 1:
			func_58();
			break;
	}
}

void func_73()
{
	if (bLocal_858)
	{
		return;
	}
	func_241();
	if (!__LIB_0__::func_75(&uLocal_874))
	{
		__LIB_1__::func_148(&uLocal_874);
	}
	if (__LIB_0__::func_264(&uLocal_865) >= 3f || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_746[2], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_746[3], Global_35, 1, 1)))
	{
		func_58();
	}
	if (func_243())
	{
		switch (iLocal_14)
		{
			case 0:
				if (fLocal_859 >= 0.99f && iLocal_823 == 1)
				{
					iLocal_823 = 0;
				}
				if (iLocal_823 == 0)
				{
					func_244();
				}
				break;
			case 1:
				if (fLocal_859 >= 0.99f && iLocal_823 == 1)
				{
					iLocal_823 = 0;
				}
				if (iLocal_823 == 0)
				{
					func_245();
				}
				break;
		}
	}
	if (__LIB_0__::func_264(&uLocal_874) >= 8f)
	{
		TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(uLocal_746[2], iLocal_76, vLocal_18, 3f, 2621463, 6, 3f, 5f, 0);
		__LIB_3__::func_158(&(Local_307[2 /*17*/]), 0);
		__LIB_3__::func_158(&(Local_307[0 /*17*/]), 0);
		__LIB_3__::func_158(&(Local_307[1 /*17*/]), 0);
		__LIB_2__::func_411(&(Local_307[2 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_307[0 /*17*/]), 1, 0);
		__LIB_2__::func_411(&(Local_307[1 /*17*/]), 1, 0);
		func_65(7);
	}
}

void func_74()
{
	if (func_246())
	{
		func_247();
	}
	func_241();
	if (MAP::DOES_BLIP_EXIST(iLocal_753[2]))
	{
		MAP::REMOVE_BLIP(&(iLocal_753[2]));
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_753[3]))
	{
		MAP::REMOVE_BLIP(&(iLocal_753[3]));
	}
	if (!PED::IS_PED_DEAD_OR_DYING(uLocal_746[2], true) || !PED::IS_PED_DEAD_OR_DYING(uLocal_746[3], true))
	{
		func_58();
	}
}

void func_75()
{
	func_58();
}

void func_103(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (__LIB_1__::func_85(iParam0, 32))
	{
		if (func_272(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_273(Global_35, &(uParam1->f_12)) };
				if (!__LIB_0__::func_86(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		__LIB_3__::func_261(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = __LIB_3__::func_292(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, __LIB_0__::func_93());
		if (__LIB_0__::func_1(Global_1310750[iParam0 /*111*/], 33554432))
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (__LIB_1__::func_85(iParam0, 1))
		{
			__LIB_2__::func_119(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	__LIB_3__::func_293(iParam0);
}

int func_189()
{
	if (!PED::_IS_PED_HOGTIED(uLocal_746[0]) && !PED::_IS_PED_HOGTIED(uLocal_746[1]))
	{
		return 0;
	}
	if (PED::_IS_PED_HOGTIED(uLocal_746[0]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_746[0], Global_35, 1, 1))
		{
			iLocal_817 = ENTITY::GET_ENTITY_HEALTH(uLocal_746[0]);
		}
		if (iLocal_817 < iLocal_816)
		{
			switch (iLocal_14)
			{
				case 0:
					if (iLocal_854 == 0)
					{
						__LIB_2__::func_461(0);
						if (func_200(uLocal_746[2], Global_35, sLocal_39[6], 0.8f, 0))
						{
							iLocal_854 = 1;
							iLocal_816 = iLocal_817;
						}
					}
					break;
				case 1:
					if (iLocal_854 == 0)
					{
						__LIB_2__::func_461(0);
						if (func_200(uLocal_746[3], Global_35, sLocal_39[12], 0.8f, 0))
						{
							iLocal_854 = 1;
							iLocal_816 = iLocal_817;
						}
					}
					break;
			}
			return 1;
		}
	}
	if (PED::_IS_PED_HOGTIED(uLocal_746[1]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_746[1], Global_35, 1, 1))
		{
			iLocal_819 = ENTITY::GET_ENTITY_HEALTH(uLocal_746[1]);
		}
		if (iLocal_819 < iLocal_818)
		{
			switch (iLocal_14)
			{
				case 0:
					if (iLocal_854 == 0)
					{
						__LIB_2__::func_461(0);
						if (func_200(uLocal_746[2], Global_35, sLocal_39[6], 0.8f, 0))
						{
							iLocal_854 = 1;
							iLocal_818 = iLocal_819;
						}
					}
					break;
				case 1:
					if (iLocal_854 == 0)
					{
						__LIB_2__::func_461(0);
						if (func_200(uLocal_746[3], Global_35, sLocal_39[12], 0.8f, 0))
						{
							iLocal_854 = 1;
							iLocal_818 = iLocal_819;
						}
					}
					break;
			}
			return 1;
		}
	}
	return 0;
}

bool func_191()
{
	if (PED::_IS_PED_LASSOED(uLocal_746[2]) || (iLocal_14 == 1 && PED::_IS_PED_LASSOED(uLocal_746[3])))
	{
		return true;
	}
	return false;
}

void func_192()
{
	__LIB_2__::func_411(&(Local_307[0 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_307[1 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_307[2 /*17*/]), 1, 0);
	switch (iLocal_799)
	{
		case 0:
			bLocal_858 = true;
			if (MAP::DOES_BLIP_EXIST(iLocal_753[2]))
			{
				MAP::REMOVE_BLIP(&(iLocal_753[2]));
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_753[3]))
			{
				MAP::REMOVE_BLIP(&(iLocal_753[3]));
			}
			PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[3], 2048, false);
			PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[2], 2048, false);
			__LIB_2__::func_461(0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
			iLocal_799 = 1;
			break;
		case 1:
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_899);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_899);
			if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_746[3], false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			}
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_899);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_746[3], iLocal_899);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_899);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_898);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_898);
			if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_746[2], false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			}
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_898);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_746[2], iLocal_898, 0.5f, 0.5f);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_898);
			if (bLocal_836)
			{
				__LIB_3__::func_465(4, 0, 0, "Cruel Killing", 0, 0, 1065353216 /* Float: 1f */, 0);
			}
			__LIB_2__::func_593(&(Local_264[0 /*21*/]), &Local_307);
			__LIB_2__::func_593(&(Local_264[1 /*21*/]), &Local_307);
			__LIB_3__::func_158(&(Local_307[0 /*17*/]), 1);
			__LIB_3__::func_158(&(Local_307[1 /*17*/]), 1);
			__LIB_3__::func_158(&(Local_307[2 /*17*/]), 1);
			iLocal_799 = 2;
			break;
		case 2:
			if (((func_408() || func_246()) || func_237()) || func_60())
			{
				if (!__LIB_0__::func_75(&uLocal_883))
				{
					__LIB_1__::func_148(&uLocal_883);
					PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[3], 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[3], 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[3], 2048, false);
				}
			}
			if (__LIB_0__::func_264(&uLocal_883) >= 1.2f)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[2], 2, false);
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[2], 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[2], 2048, false);
			}
			if (ENTITY::IS_ENTITY_DEAD(uLocal_746[2]))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[3], 2048, false);
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_746[3], 65536, true);
			}
			if (iLocal_14 == 0)
			{
				func_409();
			}
			else
			{
				func_410();
			}
			break;
	}
}

int func_194(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_412(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_196()
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_746[0]))
	{
		func_239(uLocal_746[0], Global_35, &uLocal_85, -1, 60);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_746[1]))
	{
		func_239(uLocal_746[1], Global_35, &uLocal_85, -1, 60);
	}
}

void func_199()
{
	PED::_0xE737D5F14304A2EC(uLocal_746[0], PLAYER::PLAYER_ID(), 120000);
	PED::_0xE737D5F14304A2EC(uLocal_746[1], PLAYER::PLAYER_ID(), 120000);
	PED::_0xE737D5F14304A2EC(uLocal_746[2], PLAYER::PLAYER_ID(), 120000);
	if (__LIB_2__::func_1(uLocal_746[3], 0, 1))
	{
		PED::_0xE737D5F14304A2EC(uLocal_746[3], PLAYER::PLAYER_ID(), 120000);
	}
}

bool func_200(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4)
{
	if (!__LIB_0__::func_75(&uLocal_871))
	{
		__LIB_1__::func_148(&uLocal_871);
	}
	else if (__LIB_0__::func_264(&uLocal_871) > fParam3)
	{
		__LIB_2__::func_303(iParam0, iParam1, sParam2, "", -1082130432 /* Float: -1f */, iParam4, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_0__::func_37(&uLocal_871);
		return true;
	}
	return false;
}

void func_206()
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_746[2]))
	{
		if (bLocal_766)
		{
			func_239(uLocal_746[2], uLocal_746[1], &uLocal_85, -1, 10);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_746[3]))
	{
		func_239(uLocal_746[3], uLocal_746[1], &uLocal_85, -1, 10);
	}
}

void func_209()
{
	float fVar0;
	float fVar1;
	fVar1 = 3f;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35));
		if (fVar0 <= 1f)
		{
			fVar1 = 1f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 1.5f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 2f;
		}
		else
		{
			fVar1 = 3f;
		}
	}
	else
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35);
		if (fVar0 <= 1f)
		{
			fVar1 = 1f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 1.5f;
		}
		else
		{
			fVar1 = 3f;
		}
	}
	if (iLocal_827 == 1)
	{
		if (!__LIB_0__::func_75(&uLocal_877) && ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_746[1], true, false), 13f, 20f, 3f, false, true, 0))
		{
			__LIB_1__::func_148(&uLocal_877);
			bLocal_831 = true;
		}
		if (__LIB_0__::func_264(&uLocal_877) >= fVar1)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_746[1], true, false), 13f, 20f, 3f, false, true, 0) && bLocal_831 == 1)
			{
				iLocal_830 = 1;
			}
			else
			{
				bLocal_831 = false;
				iLocal_830 = 0;
				__LIB_0__::func_37(&uLocal_877);
			}
		}
	}
	if (func_422() && !ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_746[1], true, false), 13f, 23f, 3f, false, true, 0))
	{
		bLocal_831 = false;
		iLocal_830 = 0;
		__LIB_0__::func_37(&uLocal_877);
	}
}

int func_210()
{
	if (!PED::IS_PED_INJURED(uLocal_746[0]) || (!PED::IS_PED_INJURED(uLocal_746[1]) && !func_62()))
	{
		if ((__LIB_0__::func_665(uLocal_746[0], PLAYER::PLAYER_PED_ID(), 1, 1) <= 25f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uLocal_746[0], PLAYER::PLAYER_PED_ID(), 17)) || (__LIB_0__::func_665(uLocal_746[1], PLAYER::PLAYER_PED_ID(), 1, 1) <= 25f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uLocal_746[1], PLAYER::PLAYER_PED_ID(), 17)))
		{
			iLocal_827 = 1;
			return 1;
		}
	}
	return 0;
}

void func_211()
{
	if (__LIB_0__::func_394(Global_35, uLocal_746[4], 0) || __LIB_0__::func_394(Global_35, uLocal_746[5], 0))
	{
		func_65(5);
	}
}

void func_212()
{
	func_241();
	func_196();
	if (iLocal_853 == 1)
	{
		return;
	}
	switch (iLocal_802)
	{
		case 0:
			__LIB_2__::func_461(0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[0], 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[1], 0);
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_746[0], Global_35, sLocal_24[0], "", 50f, 0, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
				TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_746[1], Global_35, -1, false, 4);
				func_199();
				iLocal_795 = 1;
				__LIB_3__::func_158(&(Local_139[0 /*17*/]), 0);
				__LIB_2__::func_411(&(Local_139[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_139[1 /*17*/]), 1, 0);
				__LIB_3__::func_158(&(Local_212[0 /*17*/]), 0);
				__LIB_2__::func_411(&(Local_212[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_212[1 /*17*/]), 1, 0);
				Local_139[0 /*17*/].f_13 = sLocal_62[1];
				__LIB_2__::func_360(&(Local_139[0 /*17*/]), "INTERACT_DEFUSE");
				__LIB_2__::func_360(&(Local_212[0 /*17*/]), "INTERACT_DEFUSE");
				__LIB_1__::func_148(&uLocal_886);
				iLocal_802++;
			}
			break;
		case 1:
			if (!__LIB_2__::func_136(uLocal_746[0], 0) && __LIB_0__::func_265(&uLocal_886) > 2f)
			{
				__LIB_2__::func_303(uLocal_746[2], Global_35, "RE_WT_BGV_V1_WARN_E", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_802++;
			}
			break;
		case 2:
			if ((((__LIB_2__::func_227(-4f, 1, uLocal_746[0], 1) && __LIB_2__::func_227(-4f, 1, uLocal_746[1], 1)) && __LIB_2__::func_227(-4f, 1, uLocal_746[2], 1)) && !func_422()) || iLocal_848 == 1)
			{
				if (!__LIB_2__::func_136(Global_35, 0))
				{
					__LIB_2__::func_303(uLocal_746[1], uLocal_746[0], sLocal_24[3], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_411(&(Local_139[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_139[1 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_212[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_212[1 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_307[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_307[1 /*17*/]), 0, 0);
					iLocal_851 = 1;
					bLocal_849 = true;
					iLocal_802++;
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4f, 1, uLocal_746[1], 1))
			{
				iLocal_802++;
				func_65(5);
			}
			break;
	}
}

void func_213()
{
	if (iLocal_847 == 0)
	{
		iLocal_847 = 1;
		func_425(uLocal_746[2], Global_35);
		func_426();
		iLocal_846 = 1;
		__LIB_1__::func_148(&uLocal_880);
	}
	if (!ANIMSCENE::_0x1F0E401031E20146(Local_110, sLocal_864) && iLocal_829 == 0)
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, sLocal_864, true);
	}
	if (!ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, sLocal_863) && __LIB_0__::func_264(&uLocal_880) >= 1.5f)
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, sLocal_863, true);
	}
}

void func_214()
{
	func_241();
	func_196();
	if (iLocal_853 == 1)
	{
		return;
	}
	switch (iLocal_803)
	{
		case 0:
			__LIB_2__::func_461(0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[0], 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[1], 0);
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_746[0], Global_35, sLocal_24[0], "", 50f, 0, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
				TASK::TASK_AIM_AT_ENTITY(uLocal_746[1], Global_35, -1, 0, 0);
				TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_746[1], Global_35, -1, false, 4);
				func_199();
				iLocal_795 = 1;
				__LIB_3__::func_158(&(Local_139[0 /*17*/]), 0);
				__LIB_2__::func_411(&(Local_139[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_139[1 /*17*/]), 1, 0);
				__LIB_3__::func_158(&(Local_212[0 /*17*/]), 0);
				__LIB_2__::func_411(&(Local_212[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_212[1 /*17*/]), 1, 0);
				Local_139[0 /*17*/].f_13 = sLocal_62[1];
				__LIB_2__::func_360(&(Local_139[0 /*17*/]), "INTERACT_DEFUSE");
				__LIB_2__::func_360(&(Local_212[0 /*17*/]), "INTERACT_DEFUSE");
				__LIB_1__::func_148(&uLocal_886);
				iLocal_803++;
			}
			break;
		case 1:
			if (!__LIB_2__::func_136(uLocal_746[0], 0) && __LIB_0__::func_265(&uLocal_886) > 2f)
			{
				__LIB_2__::func_303(uLocal_746[3], Global_35, sLocal_24[1], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_803++;
			}
			break;
		case 2:
			if ((((__LIB_2__::func_227(-4f, 1, uLocal_746[0], 1) && __LIB_2__::func_227(-4f, 1, uLocal_746[1], 1)) && __LIB_2__::func_227(-4f, 1, uLocal_746[3], 1)) && !func_422()) || iLocal_848 == 1)
			{
				if (!__LIB_2__::func_136(Global_35, 0))
				{
					__LIB_2__::func_303(uLocal_746[1], uLocal_746[0], sLocal_24[3], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_411(&(Local_139[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_139[1 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_212[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_212[1 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_307[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_307[1 /*17*/]), 0, 0);
					iLocal_851 = 1;
					bLocal_849 = true;
					iLocal_803++;
					func_65(5);
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4f, 1, uLocal_746[1], 1))
			{
				iLocal_802++;
				func_65(5);
			}
			break;
	}
}

void func_215()
{
	if (iLocal_824 == 0)
	{
		if (iLocal_847 == 0)
		{
			iLocal_847 = 1;
			func_425(uLocal_746[2], Global_35);
			func_426();
			iLocal_846 = 1;
			__LIB_1__::func_148(&uLocal_880);
		}
		if (!ANIMSCENE::_0x1F0E401031E20146(Local_110, sLocal_864))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, sLocal_864, true);
		}
		if (!ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, sLocal_863) && __LIB_0__::func_264(&uLocal_880) >= 1.5f)
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, sLocal_863, true);
		}
	}
}

void func_216()
{
	float fVar0;
	vector3 vVar1;
	int iVar4;
	switch (iLocal_794)
	{
		case 0:
			fVar0 = __LIB_3__::func_656(uLocal_746[1], Local_110.f_2, "Robber02", "pbl_Action_P3", 0);
			vVar1 = { __LIB_3__::func_508(uLocal_746[1], Local_110.f_2, "Robber02", "pbl_Action_P3", 0) };
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 20000, 0.25f, 0, fVar0);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, uLocal_746[2], 2000, false, 1);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, uLocal_746[2], 1000, true, 1);
			TASK::CLOSE_SEQUENCE_TASK(iVar4);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_746[1], iVar4);
			__LIB_2__::func_411(&(Local_139[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_139[1 /*17*/]), 1, 0);
			__LIB_2__::func_360(&(Local_139[0 /*17*/]), "RE_INTER_POS");
			__LIB_2__::func_360(&(Local_139[1 /*17*/]), "RE_INTER_ANTAGONIZE");
			__LIB_2__::func_411(&(Local_212[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_212[1 /*17*/]), 1, 0);
			__LIB_2__::func_360(&(Local_212[0 /*17*/]), "RE_INTER_POS");
			__LIB_2__::func_360(&(Local_212[1 /*17*/]), "RE_INTER_ANTAGONIZE");
			iLocal_794 = 1;
			break;
		case 1:
			if (TASK::GET_SEQUENCE_PROGRESS(uLocal_746[1]) >= 2)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110.f_2, "Robber02", uLocal_746[1], 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, "pbl_Action_P3", true);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, "pbl_Action_P3", true);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_2, "pbl_Action_P3", false);
				bLocal_835 = true;
				iLocal_794 = 2;
			}
			break;
		case 2:
			func_65(2);
			break;
	}
}

void func_217()
{
	func_206();
	switch (iLocal_800)
	{
		case 0:
			if (fLocal_859 >= 0.02f)
			{
				__LIB_2__::func_315(1515458263, uLocal_746[2], 1);
				iLocal_800++;
			}
			break;
		case 1:
			if (fLocal_859 >= 0.12f)
			{
				__LIB_2__::func_315(1515458263, uLocal_746[1], 1);
				iLocal_800++;
			}
			break;
		case 2:
			if (fLocal_859 >= 0.23f)
			{
				iLocal_800++;
			}
			break;
		case 3:
			if (fLocal_859 >= 0.31f)
			{
				iLocal_800++;
			}
			break;
		case 4:
			if (fLocal_859 >= 0.39f)
			{
				iLocal_800++;
			}
			break;
		case 5:
			if (fLocal_859 >= 0.47f)
			{
				iLocal_800++;
				iLocal_828 = 1;
			}
			break;
	}
}

void func_218()
{
	float fVar0;
	vector3 vVar1;
	int iVar4;
	switch (iLocal_794)
	{
		case 0:
			fVar0 = __LIB_3__::func_656(uLocal_746[1], Local_110.f_2, "Robber02", "pbl_Action_P3", 0);
			vVar1 = { __LIB_3__::func_508(uLocal_746[1], Local_110.f_2, "Robber02", "pbl_Action_P3", 0) };
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 20000, 0.25f, 0, fVar0);
			TASK::TASK_STAND_STILL(0, -1);
			TASK::CLOSE_SEQUENCE_TASK(iVar4);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_746[1], iVar4);
			__LIB_2__::func_411(&(Local_139[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_139[1 /*17*/]), 1, 0);
			__LIB_2__::func_360(&(Local_139[0 /*17*/]), "RE_INTER_POS");
			if (!bLocal_831)
			{
				__LIB_2__::func_360(&(Local_139[1 /*17*/]), "INTERACT_INTERVENE");
			}
			else
			{
				__LIB_2__::func_360(&(Local_139[1 /*17*/]), "RE_INTER_ANTAGONIZE");
			}
			__LIB_2__::func_411(&(Local_212[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_212[1 /*17*/]), 1, 0);
			__LIB_2__::func_360(&(Local_212[0 /*17*/]), "RE_INTER_POS");
			if (!bLocal_831)
			{
				__LIB_2__::func_360(&(Local_212[1 /*17*/]), "INTERACT_INTERVENE");
			}
			else
			{
				__LIB_2__::func_360(&(Local_212[1 /*17*/]), "RE_INTER_ANTAGONIZE");
			}
			iLocal_794 = 1;
			break;
		case 1:
			if (TASK::IS_PED_STILL(uLocal_746[1]) && TASK::GET_SEQUENCE_PROGRESS(uLocal_746[1]) >= 1)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, "pbl_Action_P3", true);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, "pbl_Action_P3", true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_110.f_2, "Robber02", uLocal_746[1], 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_2, "pbl_Action_P3", false);
				iLocal_794 = 2;
				bLocal_835 = true;
			}
			break;
		case 2:
			func_65(3);
			break;
	}
}

void func_219()
{
	func_206();
	switch (iLocal_801)
	{
		case 0:
			if (fLocal_859 >= 0.05f)
			{
				__LIB_2__::func_315(1515458263, uLocal_746[3], 1);
				iLocal_801++;
			}
			break;
		case 1:
			if (fLocal_859 >= 0.15f)
			{
				__LIB_2__::func_315(1515458263, uLocal_746[1], 1);
				iLocal_801++;
			}
			break;
		case 2:
			if (fLocal_859 >= 0.2f)
			{
				iLocal_801++;
			}
			break;
		case 3:
			if (fLocal_859 >= 0.36f)
			{
				iLocal_801++;
			}
			break;
		case 4:
			if (fLocal_859 >= 0.42f)
			{
				iLocal_801++;
			}
			break;
		case 5:
			if (fLocal_859 >= 0.54f)
			{
				iLocal_801++;
				iLocal_828 = 1;
			}
			break;
	}
}

void func_221()
{
	switch (iLocal_14)
	{
		case 0:
			switch (iLocal_812)
			{
				case 0:
					__LIB_2__::func_461(0);
					if (__LIB_2__::func_1(uLocal_746[2], 0, 1))
					{
						__LIB_2__::func_303(uLocal_746[2], Global_35, sLocal_24[4], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_425(uLocal_746[2], Global_35);
					}
					func_426();
					if (!ANIMSCENE::_0x1F0E401031E20146(Local_110, sLocal_864))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, sLocal_864, true);
					}
					TASK::TASK_AIM_AT_ENTITY(uLocal_746[1], Global_35, -1, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_746[1], Global_35, -1, false, 3);
					iLocal_795 = 4;
					iLocal_796 = 0;
					iLocal_812++;
					break;
				case 1:
					if (iLocal_846 == 1)
					{
						if (__LIB_2__::func_227(-5f, 1, 0, 0))
						{
							__LIB_2__::func_303(uLocal_746[1], Global_35, sLocal_24[5], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_812 = 4;
						}
					}
					else
					{
						iLocal_812++;
					}
					break;
				case 2:
					if (__LIB_2__::func_227(-5f, 1, 0, 0))
					{
						__LIB_2__::func_303(uLocal_746[1], Global_35, sLocal_24[6], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_812++;
					}
					break;
				case 3:
					if (__LIB_2__::func_227(-5f, 1, 0, 0))
					{
						__LIB_2__::func_303(uLocal_746[1], Global_35, sLocal_24[7], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_812++;
					}
					break;
				case 4:
					if (func_200(uLocal_746[2], Global_35, "", 1f, 0))
					{
						iLocal_851 = 1;
						func_65(5);
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_812)
			{
				case 0:
					__LIB_2__::func_461(0);
					if (__LIB_2__::func_1(uLocal_746[3], 0, 1))
					{
						__LIB_2__::func_303(uLocal_746[3], Global_35, sLocal_24[4], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_795 = 4;
					iLocal_796 = 0;
					func_425(uLocal_746[2], Global_35);
					func_426();
					if (!ANIMSCENE::_0x1F0E401031E20146(Local_110, sLocal_864))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, sLocal_864, true);
					}
					TASK::TASK_AIM_AT_ENTITY(uLocal_746[1], Global_35, -1, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_746[1], Global_35, -1, false, 3);
					iLocal_812++;
					break;
				case 1:
					if (iLocal_846 == 1)
					{
						if (__LIB_2__::func_227(-5f, 1, 0, 0))
						{
							__LIB_2__::func_303(uLocal_746[1], Global_35, sLocal_24[5], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_812 = 4;
						}
					}
					else
					{
						iLocal_812++;
					}
					break;
				case 2:
					if (__LIB_2__::func_227(-5f, 1, 0, 0))
					{
						__LIB_2__::func_303(uLocal_746[1], Global_35, sLocal_24[6], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_812++;
					}
					break;
				case 3:
					if (__LIB_2__::func_227(-5f, 1, 0, 0))
					{
						__LIB_2__::func_303(uLocal_746[1], Global_35, sLocal_24[7], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_812++;
					}
					break;
				case 4:
					if (func_200(uLocal_746[2], Global_35, "", 1f, 0))
					{
						iLocal_851 = 1;
						func_65(5);
					}
					break;
			}
			break;
	}
}

int func_222()
{
	if ((__LIB_0__::func_665(uLocal_746[0], PLAYER::PLAYER_PED_ID(), 1, 1) <= 10f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uLocal_746[0], PLAYER::PLAYER_PED_ID(), 17)) || (__LIB_0__::func_665(uLocal_746[1], PLAYER::PLAYER_PED_ID(), 1, 1) <= 10f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uLocal_746[1], PLAYER::PLAYER_PED_ID(), 17)))
	{
		if (iLocal_825 == 0)
		{
			__LIB_2__::func_461(0);
			__LIB_2__::func_303(uLocal_746[0], Global_35, sLocal_24[4], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_825 = 1;
			return 1;
		}
	}
	if (iLocal_825 == 1)
	{
		return 1;
	}
	return 0;
}

bool func_223()
{
	func_206();
	switch (iLocal_808)
	{
		case 0:
			if (fLocal_859 >= 0.61f)
			{
				iLocal_808++;
				iLocal_813++;
			}
			break;
		case 1:
			if (fLocal_859 >= 0.75f)
			{
				iLocal_808++;
				iLocal_813++;
			}
			break;
		case 2:
			if (fLocal_859 >= 0.87f)
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(uLocal_746[2], iLocal_76, vLocal_18, 3f, 524311, 6, 3f, 5f, 0);
				iLocal_824 = 1;
				iLocal_808++;
				iLocal_813++;
			}
			break;
		case 3:
			if (fLocal_859 >= 0.5f)
			{
				iLocal_833 = 1;
				iLocal_808++;
				iLocal_813++;
			}
			break;
		case 4:
			if (fLocal_860 >= 0.82f)
			{
				iLocal_808++;
				iLocal_813++;
			}
			break;
		case 5:
			if (fLocal_860 >= 0.85f)
			{
				iLocal_808++;
				iLocal_813++;
			}
			break;
		case 6:
			if (fLocal_860 >= 0.95f)
			{
				iLocal_808++;
				iLocal_813++;
			}
			break;
		case 7:
			iLocal_808++;
			return true;
	}
	return false;
}

bool func_224()
{
	func_206();
	switch (iLocal_813)
	{
		case 0:
			if (fLocal_859 >= 0.1f)
			{
				iLocal_813++;
			}
			break;
		case 1:
			if (fLocal_859 >= 0.4f)
			{
				iLocal_813++;
			}
			break;
		case 2:
			if (fLocal_859 >= 0.6f)
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(uLocal_746[2], iLocal_76, vLocal_18, 3f, 524311, 6, 3f, 5f, 0);
				iLocal_824 = 1;
				iLocal_813++;
			}
			break;
		case 3:
			if (fLocal_859 >= 0.76f)
			{
				iLocal_833 = 1;
				iLocal_813++;
			}
			break;
		case 4:
			if (fLocal_860 >= 0.66f)
			{
				iLocal_813++;
			}
			break;
		case 5:
			if (fLocal_860 >= 0.76f)
			{
				iLocal_813++;
			}
			break;
		case 6:
			if (fLocal_860 >= 0.9f)
			{
				iLocal_813++;
			}
			break;
		case 7:
			iLocal_813++;
			return true;
	}
	return false;
}

void func_225()
{
	var uVar0[2];
	int iVar3;
	if (iLocal_851 == 0)
	{
		uVar0[0] = uLocal_746[0];
		uVar0[1] = uLocal_746[1];
		iVar3 = 0;
		while (iVar3 < 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar3]))
			{
				__LIB_3__::func_453(uVar0[iVar3], 0, &(Local_359.f_5), &iLocal_906, 0, 0);
				if (PED::_IS_PED_HOGTIED(uVar0[iVar3]) || PED::_IS_PED_LASSOED(uVar0[iVar3]))
				{
					if (iLocal_837 == 0)
					{
						iLocal_837 = 1;
						iLocal_804 = 1;
					}
				}
				if (iLocal_906 == 8)
				{
					if (iLocal_838 == 0)
					{
						iLocal_838 = 1;
						iLocal_804 = 3;
					}
				}
				if ((((((iLocal_906 == 4 || iLocal_906 == 0) || iLocal_906 == 8192) || iLocal_906 == 16) || iLocal_906 == 256) || iLocal_906 == 1) || iLocal_906 == 2)
				{
					if (iLocal_839 == 0)
					{
						iLocal_839 = 1;
						iLocal_804 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(uVar0[iVar3], 500) || PED::_0xD0B7AEB56229D317(Global_35) == uVar0[iVar3])
				{
					if (iLocal_840 == 0)
					{
						iLocal_840 = 1;
						iLocal_804 = 2;
					}
				}
				switch (iLocal_14)
				{
					case 0:
						if (ENTITY::IS_ENTITY_DEAD(uLocal_746[2]))
						{
							iLocal_804 = 0;
						}
						break;
					case 1:
						if (iLocal_824 == 1)
						{
							iLocal_804 = 0;
						}
						break;
				}
				switch (iLocal_804)
				{
					case 0:
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[2], 0);
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_746[3], 0);
						if (func_200(uVar0[iVar3], Global_35, sLocal_53[0], 0.8f, 0))
						{
							iLocal_804 = -1;
							iLocal_851 = 1;
						}
						break;
					case 1:
						if (func_200(uVar0[iVar3], Global_35, sLocal_53[1], 0.8f, 0))
						{
							iLocal_804 = -1;
							iLocal_851 = 1;
						}
						break;
					case 2:
						if (func_200(uVar0[iVar3], Global_35, sLocal_53[2], 0.8f, 0))
						{
							iLocal_804 = -1;
							iLocal_851 = 1;
						}
						break;
					case 3:
						if (func_200(uVar0[iVar3], Global_35, sLocal_53[3], 0.8f, 0))
						{
							iLocal_804 = -1;
							iLocal_851 = 1;
						}
						break;
				}
			}
			iVar3++;
		}
	}
}

void func_226()
{
	func_196();
	if (ENTITY::IS_ENTITY_AT_COORD(uLocal_746[0], vLocal_21 + Vector(1f, -1f, 0f), 1f, 1f, 1f, false, true, 0) || PED::IS_PED_ON_VEHICLE(uLocal_746[0], false))
	{
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_746[0], 0);
	}
	else
	{
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_746[0], 2);
	}
	if (!PED::IS_PED_DEAD_OR_DYING(uLocal_746[0], true))
	{
		if ((!MAP::DOES_BLIP_EXIST(iLocal_753[0]) && func_228()) && func_430())
		{
			iLocal_753[0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_746[0]);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_901);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_901);
			if ((((iLocal_906 == 256 || iLocal_906 == 4) || iLocal_906 == 16) || iLocal_906 == 1) || iLocal_906 == 2)
			{
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 16793600, 0);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 16777216, 0);
			}
			if (PED::IS_PED_ON_MOUNT(uLocal_746[0]) || __LIB_0__::func_491(uLocal_746[0], 1868526510))
			{
				__LIB_1__::func_474(uLocal_746[0], &iLocal_901, 1f, 1f, 1, 1);
			}
			else
			{
				__LIB_1__::func_474(uLocal_746[0], &iLocal_901, 0, 0, 1, 1);
			}
		}
	}
	if (!PED::IS_PED_DEAD_OR_DYING(uLocal_746[1], true))
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_753[1]) && func_230())
		{
			iLocal_753[1] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_746[1]);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_900);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_900);
			if ((((iLocal_906 == 256 || iLocal_906 == 4) || iLocal_906 == 16) || iLocal_906 == 1) || iLocal_906 == 2)
			{
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 16793600, 0);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 16777216, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_900);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_746[1], iLocal_900);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_900);
		}
	}
}

bool func_228()
{
	switch (iLocal_14)
	{
		case 0:
			if (fLocal_859 <= 0.85f || fLocal_859 >= 0.99f)
			{
				return true;
			}
			break;
		case 1:
			if (fLocal_859 <= 0.9f || fLocal_859 >= 0.99f)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_230()
{
	switch (iLocal_14)
	{
		case 0:
			if (fLocal_859 <= 0.94f || fLocal_859 >= 0.99f)
			{
				return true;
			}
			break;
		case 1:
			if (fLocal_859 <= 0.96f || fLocal_859 >= 0.99f)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_231()
{
	float fVar0;
	if (!__LIB_0__::func_75(&uLocal_868))
	{
		__LIB_1__::func_148(&uLocal_868);
	}
	fVar0 = 1f;
	if ((((iLocal_906 == 256 || iLocal_906 == 4) || iLocal_906 == 16) || iLocal_906 == 1) || iLocal_906 == 2)
	{
		fVar0 = 0.7f;
	}
	else
	{
		fVar0 = 1.2f;
	}
	if (__LIB_0__::func_264(&uLocal_868) >= fVar0)
	{
		if (((!ANIMSCENE::_0x1F0E401031E20146(Local_110, "pbl_Cower") && !ENTITY::IS_ENTITY_DEAD(uLocal_746[2])) && iLocal_829 == 0) && !bLocal_858)
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, "pbl_Cower", true);
		}
	}
	if (ANIMSCENE::_0x1F0E401031E20146(Local_110, "pbl_Cower"))
	{
		switch (iLocal_815)
		{
			case 0:
				if (__LIB_0__::func_264(&uLocal_868) > 3f)
				{
					if (!__LIB_2__::func_1(uLocal_746[0], 0, 1) || !__LIB_2__::func_1(uLocal_746[1], 0, 1))
					{
						__LIB_2__::func_303(uLocal_746[2], Global_35, "RE_WT_BGV_V1_ONE_DEAD", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_815++;
					}
				}
				break;
			case 1:
				if (!__LIB_2__::func_1(uLocal_746[0], 0, 1) && !__LIB_2__::func_1(uLocal_746[1], 0, 1))
				{
					if (!__LIB_0__::func_75(&uLocal_895))
					{
						__LIB_1__::func_148(&uLocal_895);
					}
					else if (__LIB_0__::func_265(&uLocal_895) > 2f && !__LIB_2__::func_136(uLocal_746[2], 0))
					{
						__LIB_2__::func_303(uLocal_746[2], Global_35, "RE_WT_BGV_V1_ALL_DEAD", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_815++;
					}
				}
				break;
			case 2:
				break;
			case 3:
				break;
		}
	}
}

void func_232()
{
	float fVar0;
	if (iLocal_824 == 0)
	{
		if (!__LIB_0__::func_75(&uLocal_868))
		{
			__LIB_1__::func_148(&uLocal_868);
		}
		fVar0 = 1f;
		if ((((iLocal_906 == 256 || iLocal_906 == 4) || iLocal_906 == 16) || iLocal_906 == 1) || iLocal_906 == 2)
		{
			fVar0 = 0.7f;
		}
		else
		{
			fVar0 = 1.2f;
		}
		if (__LIB_0__::func_264(&uLocal_868) >= fVar0)
		{
			if (((!ANIMSCENE::_0x1F0E401031E20146(Local_110, "pbl_Cower") && !ENTITY::IS_ENTITY_DEAD(uLocal_746[2])) && iLocal_832 == 0) && !bLocal_858)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110, "pbl_Cower", true);
			}
		}
	}
}

bool func_233()
{
	if ((PED::IS_PED_DEAD_OR_DYING(uLocal_746[0], true) || PED::IS_PED_FATALLY_INJURED(uLocal_746[0])) && (PED::IS_PED_DEAD_OR_DYING(uLocal_746[1], true) || PED::IS_PED_FATALLY_INJURED(uLocal_746[1])))
	{
		MAP::REMOVE_BLIP(&(iLocal_753[0]));
		MAP::REMOVE_BLIP(&(iLocal_753[1]));
		return true;
	}
	if ((PED::IS_PED_DEAD_OR_DYING(uLocal_746[0], true) || PED::IS_PED_FATALLY_INJURED(uLocal_746[0])) && PED::_IS_PED_HOGTIED(uLocal_746[1]))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_746[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		MAP::REMOVE_BLIP(&(iLocal_753[0]));
		MAP::REMOVE_BLIP(&(iLocal_753[1]));
		return true;
	}
	if ((PED::IS_PED_DEAD_OR_DYING(uLocal_746[1], true) || PED::IS_PED_FATALLY_INJURED(uLocal_746[1])) && PED::_IS_PED_HOGTIED(uLocal_746[0]))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_746[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		MAP::REMOVE_BLIP(&(iLocal_753[0]));
		MAP::REMOVE_BLIP(&(iLocal_753[1]));
		return true;
	}
	if (PED::_IS_PED_HOGTIED(uLocal_746[0]) && PED::_IS_PED_HOGTIED(uLocal_746[1]))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_746[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_746[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		MAP::REMOVE_BLIP(&(iLocal_753[0]));
		MAP::REMOVE_BLIP(&(iLocal_753[1]));
		return true;
	}
	return false;
	return false;
}

bool func_237()
{
	if (ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_76, 0)) && ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_76, 1)))
	{
		return true;
	}
	return false;
}

void func_238()
{
	switch (iLocal_814)
	{
		case 0:
			if (iLocal_825 == 0)
			{
				if (__LIB_2__::func_227(-4f, 1, 0, 0))
				{
					__LIB_2__::func_303(uLocal_746[1], Global_35, sLocal_24[4], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_814++;
				}
			}
			else
			{
				iLocal_814++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-2f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_746[1], Global_35, sLocal_24[8], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_814++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(0f, 1, 0, 0) && !func_422())
			{
				iLocal_814++;
				func_65(5);
			}
			break;
	}
}

void func_239(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) <= IntToFloat(iParam4))
	{
		TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, -1, 2048, 51, 1);
	}
	else
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

bool func_240()
{
	float fVar0;
	float fVar1;
	if (iLocal_14 == 0)
	{
		fVar0 = 0.79f;
		fVar1 = 0.87f;
	}
	else
	{
		fVar0 = 0.88f;
		fVar1 = 0.89f;
	}
	if (!bLocal_856)
	{
		if (fLocal_859 > fVar0 || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_110, false))
		{
			PED::FORCE_PED_MOTION_STATE(uLocal_746[0], joaat("MOTIONSTATE_WALK"), false, 0, false);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_901);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_901);
			TASK::TASK_MOUNT_ANIMAL(0, uLocal_746[4], -1, -1, 1f, 1, 0, 0);
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_15, 2f, 1.2f, 528, 0);
			TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.2f, 528, 0);
			__LIB_1__::func_474(uLocal_746[0], &iLocal_901, 0, 0, 1, 1);
			bLocal_856 = true;
		}
	}
	if (!bLocal_857)
	{
		if (fLocal_859 > fVar1 || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_110, false))
		{
			PED::FORCE_PED_MOTION_STATE(uLocal_746[1], joaat("MOTIONSTATE_WALK"), false, 0, false);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_900);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_900);
			TASK::TASK_MOUNT_ANIMAL(0, uLocal_746[5], -1, -1, 1f, 1, 0, 0);
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_15, 2f, 1.2f, 528, 0);
			TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.2f, 528, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_900);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_746[1], iLocal_900);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_900);
			bLocal_857 = true;
		}
	}
	if (bLocal_857 && bLocal_856)
	{
		return true;
	}
	return false;
}

void func_241()
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_746[2]))
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_746[3]) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_746[2]))
		{
			func_239(uLocal_746[2], Global_35, &uLocal_85, -1, 10);
		}
		else
		{
			func_239(uLocal_746[2], Global_35, &uLocal_85, -1, 5);
		}
	}
	if (!__LIB_0__::func_75(&uLocal_892))
	{
		__LIB_1__::func_148(&uLocal_892);
	}
	else if (__LIB_0__::func_265(&uLocal_892) > 1f)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_746[3]))
		{
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_746[3]) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_746[2]))
			{
				func_239(uLocal_746[3], Global_35, &uLocal_85, -1, 10);
			}
			else
			{
				func_239(uLocal_746[3], Global_35, &uLocal_85, -1, 5);
			}
		}
	}
}

bool func_243()
{
	switch (iLocal_14)
	{
		case 0:
			if (__LIB_0__::func_665(uLocal_746[2], PLAYER::PLAYER_PED_ID(), 1, 1) <= 30f)
			{
				func_241();
				iLocal_826 = 1;
				return true;
			}
			if (iLocal_826 == 1)
			{
				return true;
			}
			break;
		case 1:
			if (__LIB_0__::func_665(uLocal_746[2], PLAYER::PLAYER_PED_ID(), 1, 1) <= 30f || __LIB_0__::func_665(uLocal_746[3], PLAYER::PLAYER_PED_ID(), 1, 1) <= 30f)
			{
				func_241();
				iLocal_826 = 1;
				return true;
			}
			if (iLocal_826 == 1)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_244()
{
	func_241();
	switch (iLocal_805)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (__LIB_2__::func_303(uLocal_746[2], Global_35, sLocal_34[1], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_805++;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(uLocal_746[2], iLocal_76, vLocal_18, 3f, 524311, 6, 3f, 5f, 0);
				__LIB_3__::func_158(&(Local_307[2 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_307[0 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_307[1 /*17*/]), 0);
				__LIB_2__::func_411(&(Local_307[2 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_307[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_307[1 /*17*/]), 1, 0);
				iLocal_805++;
			}
			break;
	}
}

void func_245()
{
	func_241();
	switch (iLocal_806)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (__LIB_2__::func_303(uLocal_746[3], Global_35, sLocal_34[1], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_806++;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(uLocal_746[2], iLocal_76, vLocal_18, 3f, 524311, 6, 3f, 5f, 0);
				iLocal_806++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				__LIB_3__::func_158(&(Local_307[2 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_307[1 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_307[0 /*17*/]), 0);
				__LIB_2__::func_411(&(Local_307[2 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_307[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_307[1 /*17*/]), 1, 0);
				func_65(7);
			}
			break;
	}
}

bool func_246()
{
	if (PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, iLocal_76))
	{
		return true;
	}
	return false;
}

void func_247()
{
	switch (iLocal_811)
	{
		case 0:
			if (!__LIB_0__::func_75(&uLocal_889))
			{
				__LIB_1__::func_148(&uLocal_889);
			}
			else if (__LIB_0__::func_265(&uLocal_889) > 2f)
			{
				__LIB_2__::func_303(uLocal_746[2], Global_35, sLocal_39[4], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_889);
				iLocal_811++;
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_889) > 6f)
			{
				__LIB_2__::func_303(uLocal_746[2], Global_35, sLocal_39[5], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_889);
				iLocal_811++;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_889) > 6f)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(uLocal_746[2]);
				TASK::CLEAR_PED_SECONDARY_TASK(uLocal_746[3]);
				bLocal_858 = true;
				iLocal_811++;
			}
			break;
	}
}

bool func_272(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*(uParam2[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*(uParam2[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*(uParam2[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*(uParam2[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*(uParam2[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*(uParam2[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*(uParam2[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*(uParam2[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 4:
					*(uParam2[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*(uParam2[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 5:
					*(uParam2[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*(uParam2[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*(uParam2[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*(uParam2[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*(uParam2[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*(uParam2[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*(uParam2[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*(uParam2[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*(uParam2[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*(uParam2[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 11:
					*(uParam2[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*(uParam2[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*(uParam2[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*(uParam2[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*(uParam2[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*(uParam2[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*(uParam2[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*(uParam2[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*(uParam2[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*(uParam2[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*(uParam2[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*(uParam2[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*(uParam2[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*(uParam2[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*(uParam2[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*(uParam2[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*(uParam2[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*(uParam2[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*(uParam2[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 20:
					*(uParam2[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*(uParam2[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*(uParam2[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 21:
					*(uParam2[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*(uParam2[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*(uParam2[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 22:
					*(uParam2[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*(uParam2[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(uParam2[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*(uParam2[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*(uParam2[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @3681; //curOff = 3234
					*(uParam2[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*(uParam2[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @3681; //curOff = 3345
					*(uParam2[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*(uParam2[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @3681; //curOff = 3456
					*(uParam2[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*(uParam2[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @3681; //curOff = 3567
					*(uParam2[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*(uParam2[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @7742; //curOff = 3681
					switch (iParam1)
					{
						case 0:
							*(uParam2[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
							*(uParam2[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 1:
							*(uParam2[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
							*(uParam2[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 2:
							*(uParam2[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
							*(uParam2[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 12:
							*(uParam2[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
							*(uParam2[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 13:
							*(uParam2[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
							*(uParam2[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 14:
							*(uParam2[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
							*(uParam2[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 26:
							*(uParam2[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
							*(uParam2[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 27:
							*(uParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
							*(uParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 28:
							*(uParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
							*(uParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 29:
							*(uParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
							*(uParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 30:
							*(uParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
							*(uParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					Jump @7742; //curOff = 4979
					switch (iParam1)
					{
						case 5:
							*(uParam2[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
							*(uParam2[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 6:
							*(uParam2[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
							*(uParam2[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 7:
							*(uParam2[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
							*(uParam2[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 8:
							*(uParam2[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
							*(uParam2[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					Jump @7742; //curOff = 5458
					switch (iParam1)
					{
						case 0:
							*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
							*(uParam2[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 1:
							*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
							*(uParam2[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 3:
							*(uParam2[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
							*(uParam2[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 6:
							*(uParam2[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
							*(uParam2[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
							*(uParam2[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					Jump @7742; //curOff = 5949
					switch (iParam1)
					{
						case 6:
							*(uParam2[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
							*(uParam2[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 7:
							*(uParam2[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
							*(uParam2[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 15:
							*(uParam2[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
							*(uParam2[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 16:
							*(uParam2[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
							*(uParam2[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 17:
							*(uParam2[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
							*(uParam2[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 18:
							*(uParam2[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
							*(uParam2[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 19:
							*(uParam2[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
							*(uParam2[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 24:
							*(uParam2[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
							*(uParam2[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 25:
							*(uParam2[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
							*(uParam2[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
							*(uParam2[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 28:
							*(uParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
							*(uParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 29:
							*(uParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
							*(uParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 30:
							*(uParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
							*(uParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
							*(uParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 31:
							*(uParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
							*(uParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 32:
							*(uParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
							*(uParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 33:
							*(uParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
							*(uParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					return false;
				}
Vector3 func_273(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!__LIB_0__::func_86(*(uParam1[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *(uParam1[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *(uParam1[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(uParam1[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

bool func_408()
{
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_76, false))
	{
		return true;
	}
	return false;
}

void func_409()
{
	if (iLocal_852 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_746[2]))
		{
			__LIB_3__::func_453(uLocal_746[2], 0, &(Local_359.f_5), &iLocal_906, 0, 0);
			if (PED::_IS_PED_HOGTIED(uLocal_746[2]) || PED::_IS_PED_LASSOED(uLocal_746[2]))
			{
				if (iLocal_841 == 0)
				{
					iLocal_841 = 1;
					iLocal_809 = 1;
				}
			}
			if (iLocal_906 == 8)
			{
				if (iLocal_842 == 0)
				{
					iLocal_842 = 1;
					iLocal_809 = 3;
				}
			}
			if ((((iLocal_906 == 4 || iLocal_906 == 256) || iLocal_906 == 1) || iLocal_906 == 8192) || iLocal_906 == 2)
			{
				if (iLocal_843 == 0)
				{
					iLocal_843 = 1;
					iLocal_809 = 0;
				}
			}
			if (PED::_0x29FCE825613FEFCA(uLocal_746[2], 500) || PED::_0xD0B7AEB56229D317(Global_35) == uLocal_746[2])
			{
				if (iLocal_844 == 0)
				{
					iLocal_844 = 1;
					iLocal_809 = 2;
				}
			}
		}
		switch (iLocal_809)
		{
			case 0:
				if (func_200(uLocal_746[2], Global_35, sLocal_39[0], 0.8f, 0))
				{
					iLocal_809 = -1;
					iLocal_852 = 1;
				}
				break;
			case 1:
				if (func_200(uLocal_746[2], Global_35, sLocal_39[1], 0.8f, 0))
				{
					iLocal_809 = -1;
					iLocal_852 = 1;
				}
				break;
			case 2:
				if (func_200(uLocal_746[2], Global_35, sLocal_39[2], 0.8f, 0))
				{
					iLocal_809 = -1;
					iLocal_852 = 1;
				}
				break;
			case 3:
				if (func_200(uLocal_746[2], Global_35, sLocal_39[3], 0.8f, 0))
				{
					iLocal_809 = -1;
					iLocal_852 = 1;
				}
				break;
		}
	}
}

void func_410()
{
	var uVar0[2];
	int iVar3;
	if (iLocal_852 == 0)
	{
		uVar0[0] = uLocal_746[2];
		uVar0[1] = uLocal_746[3];
		iVar3 = 0;
		while (iVar3 < 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar3]))
			{
				__LIB_3__::func_453(uVar0[iVar3], 0, &(Local_359.f_5), &iLocal_906, 0, 0);
				if (PED::_IS_PED_HOGTIED(uVar0[iVar3]) || PED::_IS_PED_LASSOED(uVar0[iVar3]))
				{
					if (iLocal_841 == 0)
					{
						iLocal_841 = 1;
						iLocal_810 = 1;
					}
				}
				if (iLocal_906 == 8)
				{
					if (iLocal_842 == 0)
					{
						iLocal_842 = 1;
						iLocal_810 = 3;
					}
				}
				if ((((iLocal_906 == 4 || iLocal_906 == 256) || iLocal_906 == 1) || iLocal_906 == 8192) || iLocal_906 == 2)
				{
					if (iLocal_843 == 0)
					{
						iLocal_843 = 1;
						iLocal_810 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(uVar0[iVar3], 500) || PED::_0xD0B7AEB56229D317(Global_35) == uVar0[iVar3])
				{
					if (iLocal_844 == 0)
					{
						iLocal_844 = 1;
						iLocal_810 = 2;
					}
				}
				switch (iLocal_810)
				{
					case 0:
						if (func_200(uVar0[iVar3], Global_35, sLocal_39[0], 0.8f, 0))
						{
							iLocal_810 = -1;
							iLocal_852 = 1;
						}
						break;
					case 1:
						if (func_200(uVar0[iVar3], Global_35, sLocal_39[1], 0.8f, 0))
						{
							iLocal_810 = -1;
							iLocal_852 = 1;
						}
						break;
					case 2:
						if (func_200(uVar0[iVar3], Global_35, sLocal_39[2], 0.8f, 0))
						{
							iLocal_810 = -1;
							iLocal_852 = 1;
						}
						break;
					case 3:
						if (func_200(uVar0[iVar3], Global_35, sLocal_39[3], 0.8f, 0))
						{
							iLocal_810 = -1;
							iLocal_852 = 1;
						}
						break;
				}
			}
			iVar3++;
		}
	}
}

int func_412(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_412(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

bool func_422()
{
	if ((!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_746[0], 80f) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_746[1], 80f)) && ENTITY::GET_ENTITY_SPEED(Global_35) >= 0.1f)
	{
		return true;
	}
	return false;
}

void func_425(int iParam0, int iParam1)
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
			iLocal_793 = 0;
		}
		else if (__LIB_0__::func_195(vVar0, vVar0 + vVar6, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)))
		{
			iLocal_793 = 1;
		}
		else
		{
			iLocal_793 = 2;
		}
	}
	else if (__LIB_0__::func_195(vVar0, vVar0 + vVar6, vVar3))
	{
		iLocal_793 = 3;
	}
	else
	{
		iLocal_793 = 4;
	}
}

void func_426()
{
	switch (iLocal_793)
	{
		case 0:
			sLocal_863 = "pbl_React_front";
			sLocal_864 = "pbl_React_front";
			break;
		case 2:
			sLocal_863 = "pbl_React_Back";
			if (iLocal_14 == 0)
			{
				sLocal_864 = "pbl_React_Back";
			}
			else
			{
				sLocal_864 = "pbl_React_Back_Left";
			}
			break;
		case 1:
			sLocal_863 = "pbl_React_Back";
			if (iLocal_14 == 0)
			{
				sLocal_864 = "pbl_React_Back";
			}
			else
			{
				sLocal_864 = "pbl_React_Back_Right";
			}
			break;
		case 3:
			sLocal_863 = "pbl_React_Left";
			sLocal_864 = "pbl_React_Left";
			break;
		case 4:
			sLocal_863 = "pbl_React_Right";
			sLocal_864 = "pbl_React_Right";
			break;
	}
}

bool func_430()
{
	switch (iLocal_14)
	{
		case 0:
			func_425(uLocal_746[0], Global_35);
			func_572();
			if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0"))
			{
				if (fLocal_860 >= 0.59f && fLocal_860 <= 0.65f)
				{
					return false;
				}
				else if (fLocal_860 > 0.65f)
				{
					return true;
				}
				else
				{
					iLocal_845 = 1;
				}
			}
			if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P3"))
			{
				if (fLocal_860 <= 0.26f)
				{
					return false;
				}
				else if (fLocal_860 > 0.26f)
				{
					return true;
				}
				else
				{
					iLocal_845 = 1;
				}
			}
			if (!ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0") && !ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P3"))
			{
				iLocal_845 = 1;
			}
			if (iLocal_845 == 1)
			{
				if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, sLocal_862))
				{
					iLocal_850 = 1;
				}
				if (iLocal_850 == 1)
				{
					if (fLocal_860 >= 0.98f)
					{
						return true;
					}
				}
				if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_746[0], Global_35, 1, 1))
				{
					if (iLocal_850 == 0)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, sLocal_862, true);
					}
				}
				else
				{
					return true;
				}
			}
			break;
		case 1:
			func_425(uLocal_746[0], Global_35);
			func_572();
			if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0"))
			{
				if (fLocal_860 >= 0.59f && fLocal_860 <= 0.65f)
				{
					return false;
				}
				else if (fLocal_860 > 0.65f)
				{
					return true;
				}
				else
				{
					iLocal_845 = 1;
				}
			}
			if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P3"))
			{
				if (fLocal_860 <= 0.26f)
				{
					return false;
				}
				else if (fLocal_860 > 0.26f)
				{
					return true;
				}
				else
				{
					iLocal_845 = 1;
				}
			}
			if (!ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P0") && !ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, "pbl_Action_P3"))
			{
				iLocal_845 = 1;
			}
			if (iLocal_845 == 1)
			{
				if (ANIMSCENE::_0x1F0E401031E20146(Local_110.f_1, sLocal_862))
				{
					iLocal_850 = 1;
				}
				if (iLocal_850 == 1)
				{
					if (fLocal_860 >= 0.98f)
					{
						return true;
					}
				}
				if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_746[0], Global_35, 1, 1))
				{
					if (iLocal_850 == 0)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_110.f_1, sLocal_862, true);
					}
				}
				else
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_572()
{
	switch (iLocal_793)
	{
		case 0:
			sLocal_862 = "pbl_Breakout_Front";
			break;
		case 2:
			sLocal_862 = "pbl_Breakout_Back";
			break;
		case 1:
			sLocal_862 = "pbl_Breakout_Back";
			break;
		case 3:
			sLocal_862 = "pbl_Breakout_Left";
			break;
		case 4:
			sLocal_862 = "pbl_Breakout_Right";
			break;
	}
}

