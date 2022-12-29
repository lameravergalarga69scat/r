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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	float fLocal_20[12] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	char[] cLocal_33[8] = 0;
	var uLocal_34 = 1;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	struct<193> Local_43 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_236 = 0;
	struct<32> Local_237[12];
	struct<12> Local_622[12];
	struct<2> Local_767[1];
	struct<6> Local_770 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	struct<23> Local_778 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	int iLocal_806[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	var uLocal_823[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_836[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	struct<10> Local_853 = { 0, -89429847, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_863[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_876 = false;
	bool bLocal_877 = false;
	float fLocal_878 = 0f;
	var uLocal_879 = 0;
	int iLocal_880 = 0;
	int iLocal_881 = 0;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885[3] = { 0, 0, 0 };
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	int iLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	vector3 vLocal_895 = { 0f, 0f, 0f };
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907[4] = { 0, 0, 0, 0 };
	var uLocal_912[4] = { 0, 0, 0, 0 };
	int iLocal_917 = 0;
	int iLocal_918 = 0;
	var uLocal_919 = -1;
	var uLocal_920 = 0;
	var uLocal_921 = -1;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = -1;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 1073741824;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 1;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	struct<17> Local_939[2];
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	int iLocal_979 = 0;
	int iLocal_980 = 0;
	int iLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	int iLocal_984 = 0;
	vector3 vLocal_985 = { 0f, 0f, 0f };
	vector3 vLocal_988 = { 0f, 0f, 0f };
	vector3 vLocal_991 = { 0f, 0f, 0f };
	vector3 vLocal_994 = { 0f, 0f, 0f };
	int iLocal_997 = 0;
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
	cLocal_33 = "RALLY";
	fLocal_878 = 35f;
	vLocal_985 = { 50f, 50f, 50f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_3__::func_429(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP(), 106);
		bLocal_877 = true;
	}
	if (!bLocal_877)
	{
		Local_43.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_43.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		func_4(&Local_939);
		__LIB_3__::func_368(&Local_43, 1);
		__LIB_3__::func_570(&(Local_43.f_5), 1);
		__LIB_2__::func_110(&(Local_43.f_5), 1);
		__LIB_3__::func_230(&(Local_43.f_5), 1);
		__LIB_2__::func_715(&(Local_43.f_5), 1);
		__LIB_2__::func_634(&(Local_43.f_5), 1);
		__LIB_4__::func_22(&(Local_43.f_5), (25f * 2f), 1);
		__LIB_3__::func_620(&(Local_43.f_5), 0);
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_877, 1857, 0);
		if (bLocal_877)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_822)
			{
				case 0:
					if (func_15())
					{
						iLocal_822 = 1;
					}
					break;
				case 1:
					if (__LIB_4__::func_422(&Local_43, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_17(&Local_43, &uLocal_890, &uLocal_889);
						VOLUME::_SET_VOLUME_SCALE(Local_43.f_171, 40f, 40f, 15f);
						__LIB_2__::func_43(Local_43.f_171, 0, 0, 0, 0);
						Local_43.f_51.f_3 = func_19();
						Local_622[0 /*12*/].f_3 = Local_43.f_51.f_3;
						__LIB_3__::func_618(Local_43.f_51, 20f, 1, 0, 0, 0, 0);
						__LIB_3__::func_594(&uLocal_974, &uLocal_982, Local_43.f_51, 0f, 0f, 0f, vLocal_985, 0, 0, 1, 0, 0);
						__LIB_3__::func_594(&uLocal_975, &uLocal_983, vLocal_991, 0f, 0f, 0f, 2f, 2f, 2f, 0, 0, 1, 0, 0);
						__LIB_3__::func_558(&iLocal_978, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_43.f_51, Local_43.f_51.f_3, 0.7041f, 0.3098f, 0.04f), 0f, 0f, 0f, 1.891f, 1.831f, 3.92f, "m_volTorchHandoff");
						__LIB_3__::func_558(&iLocal_980, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_43.f_51, Local_43.f_51.f_3, 0.4f, 3.33f, -0.74f), 0f, 0f, 0f, 2.5f, 2.714f, 4.84f, "m_volHorseAggro");
						func_23();
						iLocal_822 = 3;
					}
					else if (Local_43.f_160)
					{
						func_13();
					}
					break;
				case 3:
					if (func_24())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_622[0 /*12*/].f_8))
						{
							__LIB_3__::func_558(&iLocal_979, ENTITY::GET_ENTITY_COORDS(Local_622[0 /*12*/].f_8, true, false), 0f, 0f, 0f, 3.5f, 3.5f, 3.5f, "m_volCrossFire");
							OBJECT::_MARK_OBJECT_FOR_DELETION(Local_622[0 /*12*/].f_8);
							__LIB_3__::func_285(Local_622[0 /*12*/].f_8, &Local_43, 0);
							ENTITY::FREEZE_ENTITY_POSITION(Local_622[0 /*12*/].f_8, true);
						}
						func_26();
						func_27();
						func_28();
						__LIB_3__::func_337(&(uLocal_907[0]), vLocal_988, 1.5f);
						__LIB_3__::func_337(&(uLocal_907[1]), vLocal_991, 1.5f);
						__LIB_3__::func_337(&(uLocal_907[2]), ENTITY::GET_ENTITY_COORDS(uLocal_823[11], true, false), 1.5f);
						__LIB_3__::func_337(&(uLocal_907[3]), ENTITY::GET_ENTITY_COORDS(uLocal_823[2], true, false), 1.5f);
						__LIB_2__::func_659(&(uLocal_912[0]), vLocal_988, 1.5f, 1, 0);
						__LIB_2__::func_659(&(uLocal_912[1]), vLocal_991, 1.5f, 1, 0);
						__LIB_2__::func_659(&(uLocal_912[2]), ENTITY::GET_ENTITY_COORDS(uLocal_823[11], true, false), 1.5f, 1, 0);
						__LIB_2__::func_659(&(uLocal_912[3]), ENTITY::GET_ENTITY_COORDS(uLocal_823[2], true, false), 1.5f, 1, 0);
						iLocal_822 = 4;
					}
					break;
				case 4:
					if (!func_31(&Local_43, &uLocal_823, 0, 0, 1, 0, 1, 0))
					{
						func_13();
					}
					if (!Local_43.f_46)
					{
						if (func_32() || func_33())
						{
							Local_43.f_46 = 1;
							if (iLocal_891 != 1024)
							{
								__LIB_3__::func_707(__LIB_3__::func_687(Local_43.f_3), 1);
							}
							if (Local_43.f_5.f_10 != 0)
							{
								__LIB_3__::func_465(11, 0, 0, "RE_HONOR_JUSTICE_SERVED", Local_43.f_5.f_10, 0, 1065353216 /* Float: 1f */, 0);
							}
							else
							{
								__LIB_3__::func_465(11, 0, 0, "RE_HONOR_JUSTICE_SERVED", uLocal_823[1], 0, 1065353216 /* Float: 1f */, 0);
							}
							if (!__LIB_0__::func_27(iLocal_880, 8) && !__LIB_0__::func_27(iLocal_880, 2097152))
							{
								AUDIO::_PLAY_SOUND_FROM_POSITION("Rally_Panic", Local_43.f_51, "REKR_Sounds", false, 0, true, 0);
								__LIB_2__::func_504(uLocal_823[8], 0);
								__LIB_2__::func_504(uLocal_823[9], 0);
								__LIB_2__::func_504(uLocal_823[10], 0);
								__LIB_2__::func_504(uLocal_823[11], 0);
								func_39(0);
							}
							PED::_0x4FD80C3DD84B817B(uLocal_823[1]);
							PED::_0x58F7DB5BD8FA2288(uLocal_823[1]);
							if (iLocal_806[1] < 7)
							{
								if (AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_823[1]))
								{
									__LIB_2__::func_504(uLocal_823[1], 250);
								}
							}
							if (AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_823[0]) && !FIRE::IS_ENTITY_ON_FIRE(uLocal_823[0]))
							{
								__LIB_2__::func_504(uLocal_823[0], 250);
							}
							if (!__LIB_0__::func_27(iLocal_880, 2048))
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_770.f_1))
								{
									if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_770.f_1, false))
									{
										ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_770.f_1, "objCross", Local_622[0 /*12*/].f_8);
									}
								}
							}
							__LIB_0__::func_172(iLocal_976);
							__LIB_3__::func_166(&Local_43);
							if (iLocal_821 == 6)
							{
							}
							else
							{
								iLocal_821 = 6;
							}
						}
					}
					if (func_42())
					{
						Local_43.f_50 = 1;
						func_13();
					}
					if (__LIB_0__::func_27(iLocal_880, 2048))
					{
						if (__LIB_3__::func_431(&Local_43, &uLocal_823, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
						{
							func_13();
						}
					}
					else if (!Local_43.f_46)
					{
						if (__LIB_3__::func_431(&Local_43, &uLocal_823, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
						{
							func_13();
						}
					}
					else if (__LIB_3__::func_431(&Local_43, &uLocal_823, 1, bLocal_876, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_13();
					}
					break;
			}
			BUILTIN::WAIT(Local_43.f_158);
		}
	}
}

void func_4(var uParam0)
{
	__LIB_2__::func_602(uParam0[0 /*17*/], "RE_INTER_POS", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam0[1 /*17*/], "RE_INTER_NEG", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_13()
{
	AUDIO::_0x531A78D6BF27014B("REKR_Sounds");
	func_51();
	func_52(1);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_823[0]))
	{
		func_53();
		__LIB_2__::func_353(&(uLocal_907[0]), 1);
		__LIB_2__::func_353(&(uLocal_907[1]), 1);
		__LIB_2__::func_353(&(uLocal_907[2]), 1);
		__LIB_2__::func_353(&(uLocal_907[3]), 1);
		__LIB_2__::func_353(&(uLocal_912[0]), 1);
		__LIB_2__::func_353(&(uLocal_912[1]), 1);
		__LIB_2__::func_353(&(uLocal_912[2]), 1);
		__LIB_2__::func_353(&(uLocal_912[3]), 1);
		if (__LIB_2__::func_1(uLocal_823[0], 0, 1))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(uLocal_823[0]))
			{
				ENTITY::DETACH_ENTITY(uLocal_823[0], true, true);
			}
		}
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_984))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_984);
		STREAMING::_0x4EDDD9E9CA5AF985(joaat("WORLD_HUMAN_SIT_GROUND"));
	}
	if (iLocal_822 < 4)
	{
		func_56();
	}
	else if (!__LIB_3__::func_463(joaat("DOCUMENT_NOTE_RALLY"), 1, 0))
	{
		if (Local_43.f_46 || __LIB_0__::func_27(iLocal_880, 2048))
		{
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_RALLY"), 300000);
		}
	}
	__LIB_3__::func_166(&Local_43);
	__LIB_3__::func_524(&iLocal_883);
	__LIB_3__::func_525(&uLocal_974, &uLocal_982);
	__LIB_0__::func_172(iLocal_976);
	__LIB_0__::func_172(iLocal_977);
	__LIB_0__::func_172(iLocal_981);
	if (!Local_43.f_48)
	{
		func_56();
		if (__LIB_0__::func_94(Global_35, Local_43.f_51, 1) > 80f)
		{
			func_61();
		}
		else
		{
			__LIB_4__::func_284(&uLocal_823, 1);
			__LIB_4__::func_282(&uLocal_823, 1);
			func_64(1);
			Local_43.f_50 = 1;
		}
	}
	func_65(&Local_43, &uLocal_823, &uLocal_836, 0, uLocal_890, uLocal_889, 0, 1, 0, 1);
	func_66(0);
	STREAMING::REMOVE_PTFX_ASSET();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_15()
{
	switch (iLocal_820)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_43))
			{
				func_69();
				func_70();
				func_71();
				func_72();
				func_73();
				func_74();
				__LIB_3__::func_314(&Local_622);
				STREAMING::REQUEST_PTFX_ASSET();
				__LIB_2__::func_312(joaat("SC_PROP_HUMAN_TORCH_RALLY_A"), 262155, 0, 0);
				__LIB_2__::func_312(joaat("SC_PROP_HUMAN_TORCH_RALLY_B"), 262155, 0, 0);
				__LIB_2__::func_312(joaat("SC_PROP_HUMAN_TORCH_RALLY_C"), 262155, 0, 0);
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_SIT_GROUND"), 263883, 0, 0);
				iLocal_820 = 1;
			}
			break;
		case 1:
			if (!AUDIO::_0xD9130842D7226045("REKR_Sounds", 0))
			{
				return false;
			}
			if (!__LIB_0__::func_0(&uLocal_819, cLocal_33))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_34))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_622))
			{
				return false;
			}
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("RALLY_MEETING"))
			{
				return false;
			}
			if (!__LIB_3__::func_366(&Local_237))
			{
				return false;
			}
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return false;
			}
			if (!AUDIO::PREPARE_MUSIC_EVENT("REKR_START"))
			{
			}
			return true;
	}
	return false;
}

void func_17(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 1;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 1;
			*uParam2 = 3;
			break;
		case 4:
			*uParam1 = 1;
			*uParam2 = 4;
			break;
		case 5:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 10;
			*uParam2 = 1;
			break;
		case 8:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
		case 10:
			*uParam1 = 11;
			*uParam2 = 2;
			break;
		case 11:
			*uParam1 = 11;
			*uParam2 = 3;
			break;
		case 12:
			*uParam1 = 11;
			*uParam2 = 4;
			break;
	}
}

float func_19()
{
	float fVar0;
	if (Local_43.f_51.f_4 == 5)
	{
		fVar0 = 70f;
	}
	else if (Local_43.f_51.f_4 == 6)
	{
		fVar0 = 40f;
	}
	else if (Local_43.f_51.f_4 == 7)
	{
		fVar0 = 315f;
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

void func_23()
{
	vector3 vVar0;
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_43.f_51, Local_43.f_51.f_3, 0.78f, 0.63f, -0.05f) };
	iLocal_976 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), vVar0, 0f, 0f, 0f, 1.857838f, 1.826754f, 3.213f);
}

bool func_24()
{
	switch (iLocal_917)
	{
		case 0:
			iLocal_917 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_479(Local_43.f_51, Local_43.f_51.f_3, &Local_237, &uLocal_823, 0, 0, -1, 1))
			{
				return false;
			}
			__LIB_1__::func_206(Local_43.f_51, 20f, 0);
			__LIB_3__::func_400(Local_43.f_51, &Local_622, Local_43.f_51.f_3, 0, 0, -1, 0);
			vLocal_991 = { ENTITY::GET_ENTITY_COORDS(Local_622[0 /*12*/].f_8, true, false) };
			iLocal_917 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

void func_26()
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (Local_237[iVar0 /*32*/].f_1 != 0)
		{
			__LIB_1__::func_991(uLocal_823[iVar0], 0);
			__LIB_2__::func_23(&(Local_43.f_5), uLocal_823[iVar0], 0);
			if (__LIB_2__::func_1(Local_237[iVar0 /*32*/].f_11, 0, 1))
			{
				__LIB_1__::func_991(Local_237[iVar0 /*32*/].f_11, 0);
				__LIB_2__::func_20(&(Local_43.f_5), Local_237[iVar0 /*32*/].f_11, 0);
			}
			vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_43.f_51, Local_43.f_51.f_3, Local_237[iVar0 /*32*/].f_6) };
			if (iVar0 == 0)
			{
				vLocal_988 = { vVar1 };
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_823[iVar0], joaat("REL_CRIMINALS"));
			PED::SET_PED_CONFIG_FLAG(uLocal_823[iVar0], 6, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_823[iVar0], 494, true);
			if (iVar0 == 1)
			{
				PED::_0x923583741DC87BCE(uLocal_823[1], "Rally");
				PED::_0x89F5E7ADECCCB49C(uLocal_823[1], "Rally_Sad");
			}
			if (__LIB_2__::func_1(uLocal_823[iVar0], 0, 1))
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_823[iVar0], true, true);
				PED::SET_PED_CONFIG_FLAG(uLocal_823[iVar0], 265, false);
				if (PED::IS_PED_HUMAN(uLocal_823[iVar0]))
				{
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_823[iVar0], 7, 1, 1);
					PED::SET_PED_CONFIG_FLAG(uLocal_823[iVar0], 130, false);
					PED::SET_PED_CONFIG_FLAG(uLocal_823[iVar0], 315, false);
					PED::SET_PED_CONFIG_FLAG(uLocal_823[iVar0], 509, true);
				}
				if (func_96(iVar0))
				{
				}
				else if (func_97(iVar0))
				{
					__LIB_2__::func_272(uLocal_823[iVar0], joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				else if (func_99(iVar0))
				{
					__LIB_2__::func_272(uLocal_823[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
			}
		}
		if (iVar0 >= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_622[iVar0 /*12*/].f_8))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_622[iVar0 /*12*/].f_8, uLocal_823[iVar0], PED::GET_PED_BONE_INDEX(uLocal_823[iVar0], 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, false, false);
				ENTITY::_0x16908E859C3AB698(Local_622[iVar0 /*12*/].f_8, 1, 0f, 0f, 0f);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_622[iVar0 /*12*/].f_8) && iVar0 > 1)
		{
			OBJECT::DELETE_OBJECT(&(Local_622[iVar0 /*12*/].f_8));
		}
		iVar0++;
	}
	__LIB_3__::func_285(uLocal_823[6], &Local_43, 0);
	__LIB_3__::func_285(uLocal_823[1], &Local_43, 0);
}

void func_27()
{
	Local_778 = { 0f, 0f, 0f };
	Local_778.f_3 = Global_35;
	Local_778.f_8 = 4;
	Local_778.f_4 = 21030;
	Local_778.f_19 = 3;
	Local_778.f_20 = 3;
	Local_778.f_21 = 3;
	Local_778.f_22 = 3;
	Local_778.f_17 = 3;
	Local_778.f_18 = 3;
	Local_778.f_7 = 4000;
}

void func_28()
{
	vector3 vVar0;
	Local_770 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_770.f_4, 64, 0, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_770, Local_43.f_51, 0f, 0f, Local_43.f_51.f_3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_770, "pedVictim", uLocal_823[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_770, "pedLeader", uLocal_823[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_770, "pedCross", uLocal_823[2], 0);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_770);
	Local_770.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_770.f_5, 0, 0, false, true);
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_43.f_51, Local_43.f_51.f_3, 0.372431f, -1.824592f, 0.004145f) };
	__LIB_3__::func_409(&vVar0, 3f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_770.f_1, Local_43.f_51, Local_43.f_51.f_1, (vVar0.z - 0.1f), 0f, 0f, Local_43.f_51.f_3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_770.f_1, "objCross", Local_622[0 /*12*/].f_8, 0);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_770.f_1);
}

bool func_31(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
	__LIB_3__::func_163(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_3__::func_234(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_106(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
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
					func_108(uParam0, uParam0->f_193, 2f);
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
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*uParam1)[0]);
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

int func_32()
{
	vector3 vVar0;
	if (__LIB_3__::func_550(&uLocal_823, &(Local_43.f_5), &iLocal_891, &uLocal_879, 0, 11, 2) || __LIB_0__::func_27(iLocal_14, 512))
	{
		if (Local_43.f_5.f_10 != 0)
		{
			if (func_112())
			{
				__LIB_1__::func_683(&iLocal_17, 4096);
			}
			else if (__LIB_0__::func_27(iLocal_14, 512))
			{
				Local_43.f_5.f_10 = uLocal_823[1];
			}
			else
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_5.f_10, true, false) };
			}
		}
		return 1;
	}
	if (__LIB_0__::func_27(iLocal_880, 1024) && !__LIB_0__::func_27(iLocal_880, 2048))
	{
		if (func_114())
		{
			return 1;
		}
	}
	return 0;
}

int func_33()
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_880, 2048))
	{
		return 0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_978))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_978, 1, 0))
		{
			__LIB_1__::func_683(&iLocal_17, 16384);
			return 1;
		}
		iVar0 = PED::GET_MOUNT(Global_35);
		if (iVar0 != 0)
		{
			if (__LIB_1__::func_205(iVar0, iLocal_978, 1, 0))
			{
				__LIB_1__::func_683(&iLocal_17, 16384);
				return 1;
			}
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_980))
	{
		if (__LIB_0__::func_27(iLocal_880, 1024))
		{
			if (__LIB_1__::func_205(Global_35, iLocal_980, 1, 0))
			{
				__LIB_1__::func_683(&iLocal_17, 16384);
				return 1;
			}
		}
	}
	return 0;
}

void func_39(bool bParam0)
{
	if (__LIB_2__::func_227(0, 1, uLocal_823[8], 1))
	{
		__LIB_2__::func_478(uLocal_823[8], 0, "RE_KR_UNI_V1_RUN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
	}
	if (__LIB_2__::func_227(0, 1, uLocal_823[9], 1))
	{
		if (bParam0)
		{
			__LIB_2__::func_478(uLocal_823[9], 0, "RE_KR_UNI_V1_OHNO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(uLocal_823[9], 0, "RE_KR_UNI_V1_RUN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		}
	}
	if (__LIB_2__::func_227(0, 1, uLocal_823[10], 1))
	{
		__LIB_2__::func_478(uLocal_823[10], 0, "RE_KR_UNI_V1_RUN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
	}
	if (__LIB_2__::func_227(0, 1, uLocal_823[11], 1))
	{
		__LIB_2__::func_478(uLocal_823[11], 0, "RE_KR_UNI_V1_RUN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
	}
}

bool func_42()
{
	int iVar0;
	int iVar1;
	if (iLocal_821 >= 1)
	{
		func_126();
		func_127();
		func_128();
		MISC::_0xDE2C3B74D2B3705C(joaat("ARS_RALLY"), 1000);
		func_129();
		if (!Local_43.f_46)
		{
			__LIB_3__::func_972(&Local_853, &(uLocal_836[1]), 0);
			func_131();
			func_132();
		}
	}
	func_133();
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_134(&(iLocal_806[iVar0]), uLocal_823[iVar0], iVar0, uLocal_836[iVar0]);
		iVar0++;
	}
	switch (iLocal_821)
	{
		case 0:
			if (func_135())
			{
				vLocal_994 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_43.f_51, Local_43.f_51.f_3, 0.2f, 2.15f, -0.06f) };
				iLocal_883 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), Local_43.f_51, 0f, 50f, -1f, -1f, -1f, -1, -1);
				ANIMSCENE::START_ANIM_SCENE(Local_770);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_770, "pblActionAll", true);
				ANIMSCENE::START_ANIM_SCENE(Local_770.f_1);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_770.f_1, "pblActionAll", true);
				PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_823[1], "Flee_Panic");
				func_136();
				iLocal_984 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_SIT_GROUND"), func_137(), func_138(), 0, 0, 0);
				__LIB_3__::func_558(&iLocal_981, Local_43.f_51, 0f, 0f, 0f, 20f, 20f, 20f, "m_volHerbRemove");
				__LIB_3__::func_241(iLocal_981, 1);
				iLocal_821 = 1;
			}
			break;
		case 1:
			func_140(80f);
			if (func_141(&Local_43, 3f, (80f + 10f), 55f, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				__LIB_3__::func_164(&(Local_43.f_121));
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_770, "bAction", true, false);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_770, "pblActionAll", true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_770.f_1, "bAction", true, false);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_770.f_1, "pblActionAll", true);
				AUDIO::TRIGGER_MUSIC_EVENT("REKR_START");
				__LIB_1__::func_683(&iLocal_880, 4);
				__LIB_3__::func_164(&(Local_43.f_121));
				iLocal_821 = 2;
			}
			break;
		case 2:
			func_142();
			func_52(0);
			func_143();
			func_144();
			if (iLocal_849 == 0)
			{
				iVar1 = func_145(1086324736 /* Float: 6f */);
				if (iVar1 != 0)
				{
					iLocal_849 = iVar1;
				}
			}
			if (!__LIB_0__::func_27(iLocal_880, 32))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[1], -1490454286))
				{
					__LIB_1__::func_683(&iLocal_880, 32);
				}
			}
			if ((__LIB_0__::func_27(iLocal_880, 8) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_770) > 0.99f) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_770, false))
			{
				if (__LIB_0__::func_27(iLocal_880, 2048))
				{
					func_146();
				}
				__LIB_3__::func_319(Local_770);
				iLocal_821 = 4;
			}
			break;
		case 4:
			if (__LIB_2__::func_1(uLocal_823[0], 0, 1))
			{
				__LIB_1__::func_864(uLocal_823[0], 1, 0);
			}
			if (__LIB_2__::func_1(uLocal_823[2], 0, 1))
			{
				__LIB_1__::func_864(uLocal_823[2], 1, 0);
			}
			if (__LIB_2__::func_227(3f, 1, 0, 0))
			{
				__LIB_2__::func_906(&(Local_43.f_5), 20);
				__LIB_4__::func_22(&(Local_43.f_5), (25f / 2f), 1);
				__LIB_1__::func_148(&uLocal_892);
				func_53();
				iLocal_821 = 5;
			}
			break;
		case 5:
			func_151();
			func_152();
			if (__LIB_0__::func_265(&uLocal_892) > 120f)
			{
				if (__LIB_0__::func_94(Global_35, Local_43.f_51, 1) > 150f)
				{
					if (__LIB_2__::func_1(uLocal_823[1], 0, 1))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_823[1], false);
					}
					return true;
				}
			}
			if (__LIB_0__::func_27(iLocal_17, 16384))
			{
				if (!__LIB_0__::func_27(iLocal_880, 1))
				{
					if (PED::IS_PED_SHOOTING(Global_35))
					{
						func_154();
						__LIB_1__::func_683(&iLocal_880, 1);
					}
				}
			}
			if (Local_43.f_46)
			{
				__LIB_4__::func_288(&uLocal_823, &uLocal_836, 200f, 1, 0);
				func_156();
			}
			break;
		case 6:
			func_151();
			if (!__LIB_0__::func_75(&vLocal_895))
			{
				__LIB_1__::func_148(&vLocal_895);
			}
			func_158();
			func_159();
			iLocal_821 = 5;
			break;
	}
	return false;
}

void func_51()
{
	if (!__LIB_0__::func_27(iLocal_880, 256))
	{
		Local_43.f_45 = 0;
	}
	else if (!__LIB_0__::func_27(iLocal_880, 8))
	{
		if (!Local_43.f_46)
		{
			Local_43.f_45 = 0;
		}
	}
	if (__LIB_0__::func_27(iLocal_880, 256))
	{
		if (__LIB_3__::func_993(33, 0) != 16)
		{
			if (!__LIB_0__::func_27(iLocal_880, 8))
			{
				if (__LIB_3__::func_993(33, 0) != 7 && __LIB_3__::func_993(33, 0) != 16)
				{
					__LIB_3__::func_666(33, 0, 7, 0, 0);
				}
				else
				{
					__LIB_3__::func_666(33, 0, 16, 0, 0);
				}
			}
			else
			{
				__LIB_3__::func_666(33, 0, 16, 0, 0);
			}
		}
	}
}

void func_52(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (__LIB_2__::func_1(uLocal_823[iVar0], 0, 1))
		{
			if (bParam0 || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[iVar0], -1521940918))
			{
				__LIB_2__::func_919(Local_622[iVar0 /*12*/].f_8, 1, 1);
			}
		}
		iVar0++;
	}
}

void func_53()
{
	if (__LIB_2__::func_1(uLocal_823[0], 0, 1))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(uLocal_823[0]))
		{
			FIRE::STOP_ENTITY_FIRE(uLocal_823[0], 0);
		}
	}
	if (__LIB_2__::func_1(uLocal_823[2], 0, 1))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(uLocal_823[2]))
		{
			FIRE::STOP_ENTITY_FIRE(uLocal_823[2], 0);
		}
	}
}

void func_56()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_622[iVar0 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(Local_622[iVar0 /*12*/].f_8));
		}
		iVar0++;
	}
}

void func_61()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		__LIB_2__::func_426(&(uLocal_823[iVar0]));
		__LIB_2__::func_426(&(Local_237[iVar0 /*32*/].f_11));
		iVar0++;
	}
}

void func_64(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_237[iVar0 /*32*/].f_11))
		{
			PHYSICS::_0x0348469DAA17576C(Local_237[iVar0 /*32*/].f_11);
			TASK::TASK_SMART_FLEE_PED(Local_237[iVar0 /*32*/].f_11, Global_35, 500f, -1, 256, 3f, 0);
			if (bParam0)
			{
				PED::SET_PED_KEEP_TASK(Local_237[iVar0 /*32*/].f_11, true);
			}
			PED::_0x39A2FC5AF55A52B1(uLocal_823[iVar0], -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_823[iVar0]));
		}
		iVar0++;
	}
}

void func_65(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_187(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_188(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*uParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, uParam1[iVar0]))
				{
					__LIB_2__::func_32(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_416((*uParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_3__::func_468(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_66(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_622[iVar0 /*12*/].f_8))
		{
			if (iVar0 == 0 && !bParam0)
			{
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_622[iVar0 /*12*/].f_8));
			}
		}
		iVar0++;
	}
}

void func_69()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Local_237[iVar0 /*32*/].f_1 = joaat("RE_RALLY_MALES_01");
		if (iVar0 == 1)
		{
			fLocal_20[iVar0] = 0f;
		}
		else
		{
			fLocal_20[iVar0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 1f);
		}
		__LIB_3__::func_303(&(Local_237[iVar0 /*32*/].f_22));
		iVar0++;
	}
	Local_237[0 /*32*/].f_3 = -139476531;
	StringCopy(&(Local_237[0 /*32*/].f_23), "0937_A_M_M_Civ_White_AVOID_07", 64);
	Local_237[1 /*32*/].f_3 = 1094889791;
	StringCopy(&(Local_237[1 /*32*/].f_23), "RALLY_LEADER", 64);
	Local_237[2 /*32*/].f_3 = 1678889591;
	Local_237[3 /*32*/].f_3 = 465945052;
	Local_237[4 /*32*/].f_3 = 763848031;
	Local_237[5 /*32*/].f_3 = 1368239471;
	StringCopy(&(Local_237[5 /*32*/].f_23), "0912_A_M_M_Civ_Poor_White_AGGRESSIVE_12", 64);
	Local_237[6 /*32*/].f_3 = -1692712823;
	Local_237[7 /*32*/].f_3 = 1960932374;
	Local_237[8 /*32*/].f_3 = 1083771782;
	StringCopy(&(Local_237[8 /*32*/].f_23), "0971_A_M_M_RoughTravellers_White_02", 64);
	Local_237[9 /*32*/].f_3 = -456698908;
	StringCopy(&(Local_237[9 /*32*/].f_23), "0941_A_M_M_Foreman_White_AVOID_01", 64);
	Local_237[10 /*32*/].f_3 = -159189157;
	StringCopy(&(Local_237[10 /*32*/].f_23), "0951_A_M_M_Guard_White_AGGRESSIVE_06", 64);
	Local_237[11 /*32*/].f_3 = 965966943;
	StringCopy(&(Local_237[11 /*32*/].f_23), "0942_A_M_M_Foreman_White_AVOID_02", 64);
}

void func_70()
{
	Local_237[0 /*32*/].f_6 = { 0.2f, 2.15f, -0.06f };
	Local_237[0 /*32*/].f_9 = 180f;
	Local_237[0 /*32*/].f_12 = __LIB_2__::func_44(joaat("HORSE_CLASS_RIDING"), 1);
	Local_237[0 /*32*/].f_15 = { -6.85f, 4.45f, 0f };
	Local_237[0 /*32*/].f_18 = 282f;
	Local_237[0 /*32*/].f_13 = 0;
	Local_237[1 /*32*/].f_6 = { 0f, 0f, 0f };
	Local_237[1 /*32*/].f_9 = 0f;
	Local_237[1 /*32*/].f_12 = __LIB_2__::func_44(joaat("HORSE_CLASS_RIDING"), 1);
	Local_237[1 /*32*/].f_15 = { -6.2f, 1.5f, 0f };
	Local_237[1 /*32*/].f_18 = 111.1f;
	Local_237[1 /*32*/].f_13 = 0;
	Local_237[2 /*32*/].f_6 = { 2.13f, 0.01f, 0.04f };
	Local_237[2 /*32*/].f_9 = 36.618f;
	Local_237[2 /*32*/].f_12 = __LIB_2__::func_44(joaat("HORSE_CLASS_RIDING"), 1);
	Local_237[2 /*32*/].f_15 = { -6.35f, -0.3f, 0f };
	Local_237[2 /*32*/].f_18 = 114.5f;
	Local_237[2 /*32*/].f_13 = 0;
	Local_237[3 /*32*/].f_6 = { -0.82f, 4.47f, -0.08f };
	Local_237[3 /*32*/].f_9 = 216.7001f;
	Local_237[3 /*32*/].f_12 = __LIB_2__::func_44(joaat("HORSE_CLASS_RIDING"), 1);
	Local_237[3 /*32*/].f_15 = { -6.35f, -0.8f, 0f };
	Local_237[3 /*32*/].f_18 = 114.5f;
	Local_237[3 /*32*/].f_13 = 0;
	Local_237[4 /*32*/].f_6 = { 1.82f, 4.42f, -0.11f };
	Local_237[4 /*32*/].f_9 = 177.3274f;
	Local_237[4 /*32*/].f_12 = __LIB_2__::func_44(joaat("HORSE_CLASS_RIDING"), 1);
	Local_237[4 /*32*/].f_15 = { -6.85f, -0.3f, 0f };
	Local_237[4 /*32*/].f_18 = 114.5f;
	Local_237[4 /*32*/].f_13 = 0;
	Local_237[5 /*32*/].f_6 = { 2.54f, -2.89f, -0.01f };
	Local_237[5 /*32*/].f_9 = 36.618f;
	Local_237[6 /*32*/].f_6 = { -1.89f, 2.87f, -0.01f };
	Local_237[6 /*32*/].f_9 = 240.0712f;
	Local_237[7 /*32*/].f_6 = { 0.58f, 5.44f, -0.15f };
	Local_237[7 /*32*/].f_9 = 180.8911f;
	Local_237[8 /*32*/].f_6 = { 1.43f, 6.64f, -0.17f };
	Local_237[8 /*32*/].f_9 = 180f;
	Local_237[9 /*32*/].f_6 = { 2.88f, 3.05f, -0.09f };
	Local_237[9 /*32*/].f_9 = 117.3523f;
	Local_237[10 /*32*/].f_6 = { -2.46f, 4.24f, -0.03f };
	Local_237[10 /*32*/].f_9 = -135.747f;
	Local_237[11 /*32*/].f_6 = { -3.17f, -1.9f, 0.26f };
	Local_237[11 /*32*/].f_9 = -45.747f;
}

void func_71()
{
	Local_767[0 /*2*/] = "script_re@rally@rally";
	__LIB_3__::func_318(Local_767[0 /*2*/], &uLocal_34);
}

void func_72()
{
	Local_770.f_4 = "script@beat@wilderness@rally@burn";
	Local_770.f_5 = Local_770.f_4;
}

void func_73()
{
	__LIB_3__::func_284(&Local_237);
}

void func_74()
{
	int iVar0;
	Local_622[0 /*12*/].f_7 = joaat("S_CROSSBURNING01X");
	Local_622[0 /*12*/] = { 0.25f, -1.85f, -0.25f };
	Local_622[0 /*12*/].f_10 = 0;
	iVar0 = 2;
	while (iVar0 <= 11)
	{
		Local_622[iVar0 /*12*/].f_7 = joaat("S_INTERACT_TORCH_CROWD");
		Local_622[iVar0 /*12*/] = { 0f, 0f, (IntToFloat(iVar0) * 0.1f) };
		Local_622[iVar0 /*12*/].f_10 = 0;
		iVar0++;
	}
}

bool func_96(int iParam0)
{
	if (((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 5)
	{
		return true;
	}
	return false;
}

bool func_97(int iParam0)
{
	if ((iParam0 == 3 || iParam0 == 4) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

bool func_99(int iParam0)
{
	if (iParam0 >= 7)
	{
		return true;
	}
	return false;
}

void func_106(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!__LIB_0__::func_35(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (__LIB_0__::func_190())
	{
		__LIB_3__::func_180(1);
	}
	__LIB_3__::func_405(iParam2, uParam0->f_43);
	__LIB_1__::func_309(iParam2, 0, 0, 0, 0);
	if (__LIB_3__::func_181(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_187(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	__LIB_3__::func_309(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_108(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;
	bVar0 = false;
	if (uParam0->f_178 && __LIB_3__::func_248())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_106(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!__LIB_1__::func_205(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = __LIB_3__::func_249(uParam0, bVar0);
		__LIB_3__::func_336(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, uParam0->f_98[iParam1]);
		if (__LIB_3__::func_280(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_106(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
}

bool func_112()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_43.f_98[iVar0] > 10f)
		{
			if (ENTITY::_0x3EC28DA1FFAC9DDD(uLocal_823[iVar0], Global_35, 1, 1))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
				{
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_823[iVar0], iVar1, 0))
					{
						if (WEAPON::_0x5809DBCA0A37C82B(iVar1))
						{
							return true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_114()
{
	int iVar0;
	if (__LIB_0__::func_94(Global_35, Local_43.f_51, 1) < 25f)
	{
		func_266();
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (Local_43.f_98[iVar0] < 5f)
			{
				if (PED::IS_PED_RUNNING_RAGDOLL_TASK(uLocal_823[iVar0]))
				{
					return true;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_851) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_851, uLocal_823[iVar0]))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_126()
{
	if (!__LIB_0__::func_27(iLocal_880, 2048))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[0], -875951264))
		{
			FIRE::START_ENTITY_FIRE(Local_622[0 /*12*/].f_8, 0, -1, 15);
			__LIB_1__::func_683(&iLocal_880, 2048);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[2], 71463))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_622[2 /*12*/].f_8))
		{
			ENTITY::DETACH_ENTITY(Local_622[2 /*12*/].f_8, true, true);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_622[2 /*12*/].f_8, uLocal_823[0], PED::GET_PED_BONE_INDEX(uLocal_823[0], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			ENTITY::_0x16908E859C3AB698(Local_622[2 /*12*/].f_8, 1, 0f, 0f, 0f);
		}
	}
	if (__LIB_2__::func_1(uLocal_823[2], 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[2], joaat("ONFIRE")))
		{
			iLocal_863[2] = 1;
			ENTITY::SET_ENTITY_MAX_HEALTH(uLocal_823[2], 300);
			ENTITY::_SET_ENTITY_HEALTH(uLocal_823[2], 300, 0);
			FIRE::START_ENTITY_FIRE(uLocal_823[2], 0f, PED::GET_PED_BONE_INDEX(uLocal_823[2], 54187), 0);
			DECORATOR::DECOR_SET_BOOL(uLocal_823[2], "bIgnoreDamageChecking", true);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[0], joaat("ONFIRE")))
	{
		iLocal_863[0] = 1;
		ENTITY::SET_ENTITY_MAX_HEALTH(uLocal_823[0], 300);
		ENTITY::_SET_ENTITY_HEALTH(uLocal_823[0], 300, 0);
		FIRE::START_ENTITY_FIRE(uLocal_823[0], 0f, PED::GET_PED_BONE_INDEX(uLocal_823[0], 33646), 0);
		DECORATOR::DECOR_SET_BOOL(uLocal_823[0], "bIgnoreDamageChecking", true);
		__LIB_2__::func_634(&(Local_43.f_5), 0);
		__LIB_1__::func_683(&iLocal_880, 8);
		func_294(Local_237[0 /*32*/].f_11, 1077936128 /* Float: 3f */, 1084227584 /* Float: 5f */);
		func_294(Local_237[1 /*32*/].f_11, 1077936128 /* Float: 3f */, 1084227584 /* Float: 5f */);
		func_294(Local_237[2 /*32*/].f_11, 1077936128 /* Float: 3f */, 1084227584 /* Float: 5f */);
		func_294(Local_237[3 /*32*/].f_11, 1077936128 /* Float: 3f */, 1084227584 /* Float: 5f */);
		func_294(Local_237[4 /*32*/].f_11, 1077936128 /* Float: 3f */, 1084227584 /* Float: 5f */);
	}
}

void func_127()
{
	if (__LIB_0__::func_27(iLocal_880, 2097152) || Local_43.f_46)
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[1], 1940162505))
	{
		func_295();
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[1], 1466248667))
	{
		func_296();
		if (!__LIB_0__::func_75(&uLocal_901))
		{
			__LIB_1__::func_148(&uLocal_901);
			func_297();
		}
		else if (__LIB_0__::func_265(&uLocal_901) > 2f)
		{
			__LIB_0__::func_37(&uLocal_901);
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_770))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_770, false))
		{
			if (ANIMSCENE::_0x1F0E401031E20146(Local_770, "pblActionAll"))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_770) > 0.858f)
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Rally_Panic", Local_43.f_51, "REKR_Sounds", false, 0, true, 0);
					func_39(1);
					__LIB_1__::func_683(&iLocal_880, 2097152);
				}
			}
			else if (ANIMSCENE::_0x1F0E401031E20146(Local_770, "pblActionShort"))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_770) > 0.782f)
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("Rally_Panic", Local_43.f_51, "REKR_Sounds", false, 0, true, 0);
					func_39(1);
					__LIB_1__::func_683(&iLocal_880, 2097152);
				}
			}
		}
	}
}

void func_128()
{
	if (Local_43.f_46)
	{
		return;
	}
	if (PED::GET_MOUNT(Global_35) == 0)
	{
		func_299(0);
		if (__LIB_0__::func_27(iLocal_880, 1024))
		{
			__LIB_2__::func_111(&(Local_43.f_5), 0);
			__LIB_3__::func_620(&(Local_43.f_5), 0);
			__LIB_1__::func_681(&iLocal_880, 1024);
		}
	}
	else
	{
		func_299(1);
		if (!__LIB_0__::func_27(iLocal_880, 1024))
		{
			__LIB_2__::func_111(&(Local_43.f_5), 1);
			__LIB_3__::func_620(&(Local_43.f_5), 1);
			__LIB_1__::func_683(&iLocal_880, 1024);
		}
	}
}

void func_129()
{
	if (bLocal_876)
	{
		return;
	}
	bLocal_876 = __LIB_3__::func_463(joaat("DOCUMENT_NOTE_RALLY"), 1, 0);
	if (bLocal_876)
	{
	}
}

void func_131()
{
	if (!Local_43.f_46)
	{
		if (PED::GET_MOUNT(Global_35) != 0)
		{
			__LIB_1__::func_694(Global_35, Local_43.f_51, 0, 25f, 20f, 15f, 10f, 1, 1, 1, 0);
		}
	}
}

void func_132()
{
	if (!__LIB_0__::func_27(iLocal_880, 8))
	{
		if (__LIB_0__::func_94(Global_35, vLocal_994, 1) < 7f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		}
	}
}

void func_133()
{
	if (!__LIB_0__::func_27(iLocal_880, 32768))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_770))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_770, false))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_770, "action", 1))
				{
					__LIB_1__::func_683(&iLocal_880, 32768);
				}
			}
		}
	}
}

void func_134(var uParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	if (!func_303(iParam2))
	{
		if (__LIB_0__::func_27(iLocal_880, 32768) && *uParam0 < 4)
		{
			*uParam0 = 4;
		}
	}
	else if (__LIB_0__::func_27(iLocal_880, 8) && *uParam0 < 4)
	{
		*uParam0 = 4;
	}
	switch (*uParam0)
	{
		case 0:
			if (iParam2 >= 3)
			{
				if (func_304(iParam2) == joaat("SCRIPT_COMMON_RALLY_TORCH_MALE_A"))
				{
					__LIB_1__::func_473(iParam1, joaat("SC_PROP_HUMAN_TORCH_RALLY_A"), -1, 0, joaat("SCRIPT_COMMON_RALLY_TORCH_MALE_A"), -1082130432 /* Float: -1f */);
					*uParam0 = 1;
				}
				else if (func_304(iParam2) == joaat("SCRIPT_COMMON_RALLY_TORCH_MALE_B"))
				{
					__LIB_1__::func_473(iParam1, joaat("SC_PROP_HUMAN_TORCH_RALLY_B"), -1, 0, joaat("SCRIPT_COMMON_RALLY_TORCH_MALE_B"), -1082130432 /* Float: -1f */);
					*uParam0 = 1;
				}
				else if (func_304(iParam2) == joaat("SCRIPT_COMMON_RALLY_TORCH_MALE_C"))
				{
					__LIB_1__::func_473(iParam1, joaat("SC_PROP_HUMAN_TORCH_RALLY_C"), -1, 0, joaat("SCRIPT_COMMON_RALLY_TORCH_MALE_C"), -1082130432 /* Float: -1f */);
					*uParam0 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_880, 32768))
			{
				if (func_303(iParam2))
				{
					if (__LIB_0__::func_27(iLocal_880, 8))
					{
						*uParam0 = 4;
					}
					else
					{
						bVar0 = true;
					}
				}
				else
				{
					*uParam0 = 4;
				}
			}
			if (bVar0 || !__LIB_0__::func_27(iLocal_880, 32768))
			{
				func_306(iParam1, iParam2);
				if (!__LIB_0__::func_27(iLocal_880, 2048))
				{
					if (!__LIB_0__::func_27(iLocal_880, 64))
					{
						if (iParam1 == iLocal_849)
						{
							if (func_307(iParam1))
							{
								__LIB_1__::func_148(&uLocal_898);
								__LIB_1__::func_683(&iLocal_880, 64);
							}
						}
					}
					else if (iLocal_882 < 2)
					{
						if (__LIB_0__::func_265(&uLocal_898) > 0.75f && func_308(iParam1, iParam2, iLocal_849, 12f))
						{
							if (iLocal_882 == 0)
							{
								fVar1 = 0.5f;
							}
							else
							{
								fVar1 = 1f;
							}
							func_309(iParam2, fVar1);
							__LIB_1__::func_148(&uLocal_898);
							iLocal_882++;
							*uParam0 = 3;
						}
					}
					else
					{
						if (!__LIB_0__::func_27(iLocal_880, 1048576))
						{
							if (iLocal_882 >= 4)
							{
								iVar2 = func_145(1086324736 /* Float: 6f */);
								if (iVar2 != 0)
								{
									__LIB_2__::func_478(iVar2, Global_35, "RE_KR_UNI_V1_SHH_REPEAT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
									__LIB_1__::func_683(&iLocal_880, 1048576);
								}
							}
						}
						if (func_310(iParam2))
						{
							if (func_308(iParam1, iParam2, Global_35, 3.5f))
							{
								fVar1 = (0.5f + (0.25f * IntToFloat(iLocal_882)));
								func_309(iParam2, fVar1);
								__LIB_1__::func_148(&uLocal_898);
								iLocal_882++;
								*uParam0 = 3;
							}
						}
					}
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_27(iLocal_880, 32768))
			{
				if (func_303(iParam2))
				{
					if (__LIB_0__::func_27(iLocal_880, 8))
					{
						*uParam0 = 4;
					}
					else if (TASK::_0x02EBBB3989B7E695(iParam1))
					{
						*uParam0 = 1;
					}
				}
				else
				{
					*uParam0 = 4;
				}
			}
			else if (TASK::_0x02EBBB3989B7E695(iParam1))
			{
				*uParam0 = 1;
			}
			break;
		case 4:
			if (func_311(iParam1, iParam2))
			{
				*uParam0 = 5;
			}
			break;
		case 5:
			if (iParam1 == uLocal_823[1])
			{
				iLocal_863[iParam2] = 1;
				*uParam0 = 7;
			}
			if (iParam1 == uLocal_823[2] || iParam1 == uLocal_823[0])
			{
				iLocal_863[iParam2] = 1;
			}
			if (TASK::_0x0C3CB2E600C8977D(iParam1, 0))
			{
				__LIB_2__::func_919(Local_622[iParam2 /*12*/].f_8, 1, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam1, joaat("ENDSINRUN")) || ((TASK::GET_SCRIPT_TASK_STATUS(iParam1, 1435919172, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam1, 1435919172, true) != 0) && !TASK::GET_IS_TASK_ACTIVE(iParam1, 3)))
			{
				if (!iLocal_863[iParam2])
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam1, joaat("ENDSINRUN")))
					{
						PED::FORCE_PED_MOTION_STATE(iParam1, joaat("MOTIONSTATE_RUN"), false, 0, false);
						TASK::_0x673A8779D229BA5A(iParam1, Local_43.f_51, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar3);
						TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(0, iParam1, 0f, 3f, 0f, 2f, 20000, 1);
						TASK::TASK_SMART_FLEE_COORD(0, Local_43.f_51, 500f, -1, 256, 2f);
						TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						__LIB_1__::func_474(iParam1, &iVar3, 0, 0, 1, 1);
					}
					else
					{
						TASK::_0x673A8779D229BA5A(iParam1, Local_43.f_51, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar4);
						TASK::TASK_SMART_FLEE_COORD(0, Local_43.f_51, 500f, -1, 256, 2f);
						TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						__LIB_1__::func_474(iParam1, &iVar4, 0, 0, 1, 1);
					}
					iLocal_863[iParam2] = 1;
					*uParam0 = 6;
				}
			}
			break;
		case 6:
			break;
		case 7:
			if (!TASK::GET_IS_TASK_ACTIVE(iParam1, 3))
			{
				if (iParam1 == uLocal_823[1])
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam1, Local_770))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_770, "pedLeader", uLocal_823[1]);
					}
				}
				__LIB_2__::func_487(uLocal_823[1], iLocal_979);
				TASK::_0x673A8779D229BA5A(iParam1, Local_43.f_51, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar5);
				if (Local_43.f_98[1] < 10f)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
				}
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_984))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_137(), 1f, -1, 3f, 0, 40000f);
					TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_984, 0, -1, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(0, Local_43.f_51, 100f, -1, 256, 1f);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				}
				__LIB_1__::func_474(iParam1, &iVar5, 0, 0, 1, 1);
				PED::_0x923583741DC87BCE(iParam1, "Rally");
				PED::_0x89F5E7ADECCCB49C(iParam1, "Rally_Sad");
				__LIB_0__::func_325(&iParam3);
				__LIB_1__::func_683(&iLocal_880, 8);
				*uParam0 = 8;
			}
			break;
		case 8:
			func_315(iParam1);
			break;
		case 9:
			if (iLocal_891 != 16384)
			{
				if (__LIB_0__::func_27(iLocal_14, 64) || (__LIB_0__::func_27(iLocal_14, 16) && iParam2 == 1))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(uLocal_823[1]))
					{
						if (PED::_0x802092B07E3B1EEA(uLocal_823[1], Global_36, 3))
						{
							TASK::TASK_COMBAT_PED(uLocal_823[1], Global_35, 0, 0);
							*uParam0 = 11;
						}
					}
					else
					{
						TASK::TASK_COMBAT_PED(uLocal_823[1], Global_35, 0, 0);
						*uParam0 = 11;
					}
				}
				else if (__LIB_0__::func_27(iLocal_880, 8))
				{
					if (func_316(uParam0, &iParam1, &iParam3, Global_35, iParam2, vLocal_895, fLocal_20[iParam2], 20f, 1140457472 /* Float: 500f */))
					{
						if (*uParam0 != 6)
						{
							*uParam0 = 10;
						}
					}
				}
				else if (__LIB_0__::func_27(iLocal_17, 16384) && !__LIB_0__::func_27(iLocal_17, 4096))
				{
					if (func_317(&iParam1, &iParam3, iParam2, &iLocal_17, vLocal_895, fLocal_20[iParam2], 1108082688 /* Float: 35f */, -1))
					{
						*uParam0 = 10;
					}
				}
				else if (func_316(uParam0, &iParam1, &iParam3, Global_35, iParam2, vLocal_895, fLocal_20[iParam2], fLocal_878, 1140457472 /* Float: 500f */))
				{
					if (*uParam0 != 6)
					{
						*uParam0 = 10;
					}
				}
			}
			else if (func_317(&iParam1, &iParam3, iParam2, &iLocal_17, vLocal_895, fLocal_20[iParam2], 1108082688 /* Float: 35f */, -1))
			{
				if (!__LIB_0__::func_27(iLocal_17, 16384))
				{
					__LIB_1__::func_683(&iLocal_17, 16384);
				}
				*uParam0 = 10;
			}
			break;
		case 10:
			if (!__LIB_0__::func_27(iLocal_17, 4096))
			{
				*uParam0 = 11;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 518218985, true) == 1)
			{
				*uParam0 = 11;
			}
			else if (!__LIB_0__::func_27(iLocal_17, 8192))
			{
				if (func_318(iParam2) || TASK::GET_SCRIPT_TASK_STATUS(iParam1, 1435919172, true) != 1)
				{
					fVar6 = __LIB_0__::func_265(&uLocal_904);
					__LIB_1__::func_148(&uLocal_904);
					__LIB_2__::func_122(iParam1, "CHALLENGE_THREATEN", 1744022339, Global_35, 1, 0, 0, 1);
					__LIB_1__::func_683(&iLocal_17, 8192);
				}
			}
			else if (__LIB_0__::func_265(&uLocal_904) > fLocal_20[iParam2] || TASK::GET_SCRIPT_TASK_STATUS(iParam1, 1435919172, true) != 1)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam1, 0))
				{
					if (PED::_0x802092B07E3B1EEA(iParam1, Global_36, 3))
					{
						TASK::TASK_COMBAT_PED(iParam1, Global_35, 0, 16);
						*uParam0 = 11;
					}
				}
				else
				{
					TASK::TASK_COMBAT_PED(iParam1, Global_35, 0, 16);
					*uParam0 = 11;
				}
			}
			break;
		case 11:
			break;
	}
}

bool func_135()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_770, true, false))
	{
		if ((ANIMSCENE::_0x23E33CB9F4A3F547(Local_770, "pblActionShort") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_770, "pblBase")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_770, "pblActionAll"))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_770.f_1, true, false))
			{
				if ((ANIMSCENE::_0x23E33CB9F4A3F547(Local_770.f_1, "pblActionShort") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_770.f_1, "pblBase")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_770.f_1, "pblActionAll"))
				{
					return true;
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_770.f_1, "pblActionShort");
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_770.f_1, "pblBase");
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_770.f_1, "pblActionAll");
				}
			}
		}
		else
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_770, "pblActionShort");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_770, "pblBase");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_770, "pblActionAll");
		}
	}
	return false;
}

void func_136()
{
	switch (Local_43.f_51.f_4)
	{
		case 0:
			func_320(Local_237[0 /*32*/].f_11, -1381.99f, -736.48f, 92.21f, -48.39f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[0 /*32*/].f_11, -1380.576f, -734.812f, 92.065f);
			func_320(Local_237[1 /*32*/].f_11, -1378.22f, -735.42f, 91.72f, 54.01f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[1 /*32*/].f_11, -1379.966f, -734.788f, 92.34f);
			func_320(Local_237[2 /*32*/].f_11, -1377.61f, -732.31f, 91.65f, 80.56f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[2 /*32*/].f_11, -1379.577f, -731.843f, 92.082f);
			func_320(Local_237[3 /*32*/].f_11, -1366.519f, -751.9349f, 90.89799f, 281.17f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[3 /*32*/].f_11, -1364.263f, -751.653f, 92.122f);
			func_320(Local_237[4 /*32*/].f_11, -1376.868f, -752.351f, 91.54713f, -107.02f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[4 /*32*/].f_11, -1374.633f, -753.144f, 92.739f);
			break;
		case 1:
			func_320(Local_237[0 /*32*/].f_11, -1682.23f, 266.69f, 109.43f, 120.02f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[0 /*32*/].f_11, -1683.874f, 265.414f, 109.908f);
			func_320(Local_237[1 /*32*/].f_11, -1668.35f, 278.73f, 107.66f, -106.99f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[1 /*32*/].f_11, -1666.191f, 278.2132f, 107.7496f);
			func_320(Local_237[2 /*32*/].f_11, -1663.12f, 277.49f, 107.57f, 77.52f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[2 /*32*/].f_11, -1665.642f, 278.0698f, 107.5421f);
			func_320(Local_237[3 /*32*/].f_11, -1677.71f, 264.79f, 109.34f, 155.3f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[3 /*32*/].f_11, -1678.121f, 261.9924f, 109.7422f);
			func_320(Local_237[4 /*32*/].f_11, -1675.18f, 263.77f, 109.28f, 138.29f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[4 /*32*/].f_11, -1676.279f, 262.122f, 109.785f);
			break;
		case 2:
			func_320(Local_237[0 /*32*/].f_11, -1404.48f, 125.87f, 85.89f, 44.99f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[0 /*32*/].f_11, -1406.417f, 127.663f, 85.894f);
			func_320(Local_237[1 /*32*/].f_11, -1401.436f, 126.3677f, 84.78505f, 331.32f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[1 /*32*/].f_11, -1400.196f, 128.25f, 85.64f);
			func_320(Local_237[2 /*32*/].f_11, -1398.767f, 126.2779f, 84.63268f, 26.85f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[2 /*32*/].f_11, -1400.024f, 128.276f, 85.576f);
			func_320(Local_237[3 /*32*/].f_11, -1395.3f, 124.43f, 85.54f, -58.16f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[3 /*32*/].f_11, -1393.684f, 125.8043f, 85.814f);
			func_320(Local_237[4 /*32*/].f_11, -1391.55f, 120.22f, 85.32f, 28.74f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[4 /*32*/].f_11, -1392.612f, 122.045f, 85.30362f);
			break;
		case 3:
			func_320(Local_237[0 /*32*/].f_11, -1101.126f, -234.5715f, 87.811f, 80.1f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[0 /*32*/].f_11, -1103.167f, -234.1465f, 89.3417f);
			func_320(Local_237[1 /*32*/].f_11, -1102.693f, -232.2243f, 88.4153f, 83.65f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[1 /*32*/].f_11, -1104.915f, -231.9954f, 90.262f);
			func_320(Local_237[2 /*32*/].f_11, -1102.503f, -226.9651f, 88.9464f, 47.24f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[2 /*32*/].f_11, -1104.493f, -225.0828f, 91.0089f);
			func_320(Local_237[3 /*32*/].f_11, -1098.92f, -225.2864f, 88.4077f, -15.39f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[3 /*32*/].f_11, -1098.49f, -223.3808f, 89.7279f);
			func_320(Local_237[4 /*32*/].f_11, -1110.512f, -216.5567f, 89.4763f, 62.6f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[4 /*32*/].f_11, -1112.493f, -215.454f, 90.9481f);
			break;
		case 4:
			func_320(Local_237[0 /*32*/].f_11, -1483.146f, -604.6641f, 125.7026f, -127.97f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[0 /*32*/].f_11, -1481.182f, -605.8561f, 126.3943f);
			func_320(Local_237[1 /*32*/].f_11, -1469.547f, -604.3673f, 124.1832f, 342.73f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[1 /*32*/].f_11, -1469.089f, -602.1363f, 125.3072f);
			func_320(Local_237[2 /*32*/].f_11, -1474.31f, -606.01f, 125.25f, -112.68f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[2 /*32*/].f_11, -1472.815f, -607.2057f, 125.0084f);
			func_320(Local_237[3 /*32*/].f_11, -1489.642f, -594.2316f, 129.9303f, -44.43f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[3 /*32*/].f_11, -1488.121f, -592.6401f, 130.8992f);
			func_320(Local_237[4 /*32*/].f_11, -1466.425f, -600.638f, 124.324f, 112.58f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[4 /*32*/].f_11, -1468.663f, -601.682f, 125.439f);
			break;
		case 5:
			func_320(Local_237[0 /*32*/].f_11, -575.8569f, 561.1551f, 100.3565f, 64.64f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[0 /*32*/].f_11, -577.808f, 561.542f, 100.979f);
			func_320(Local_237[1 /*32*/].f_11, -577.0822f, 559.4274f, 100.1067f, 31.37f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[1 /*32*/].f_11, -577.989f, 561.421f, 100.901f);
			func_320(Local_237[2 /*32*/].f_11, -588.9f, 580.88f, 103.36f, -82.39f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[2 /*32*/].f_11, -586.729f, 581.187f, 103.496f);
			func_320(Local_237[3 /*32*/].f_11, -590.6245f, 582.7746f, 102.9375f, -60.21f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[3 /*32*/].f_11, -588.165f, 583.626f, 103.802f);
			func_320(Local_237[4 /*32*/].f_11, -587.03f, 563.68f, 101.24f, -123.62f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[4 /*32*/].f_11, -585.044f, 561.896f, 101.379f);
			break;
		case 6:
			func_320(Local_237[0 /*32*/].f_11, 2158.97f, 37.14f, 61.25f, 156.11f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[0 /*32*/].f_11, 2157.772f, 35.076f, 61.116f);
			func_320(Local_237[1 /*32*/].f_11, 2159.49f, 33.48f, 60.83f, 59.39f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[1 /*32*/].f_11, 2157.793f, 34.65f, 61.082f);
			func_320(Local_237[2 /*32*/].f_11, 2149.57f, 27.27f, 61.4f, -15.12f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[2 /*32*/].f_11, 2149.761f, 29.632f, 61.354f);
			func_320(Local_237[3 /*32*/].f_11, 2165.38f, 53.1f, 61.38f, 105.81f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[3 /*32*/].f_11, 2163.246f, 52.42f, 61.534f);
			func_320(Local_237[4 /*32*/].f_11, 2166.25f, 48.46f, 61.24f, 152.06f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[4 /*32*/].f_11, 2165.115f, 46.584f, 61.185f);
			break;
		case 7:
			func_320(Local_237[0 /*32*/].f_11, 2541.061f, -71.4445f, 49.01295f, 46.31f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[0 /*32*/].f_11, 2539.519f, -69.56245f, 49.83847f);
			func_320(Local_237[1 /*32*/].f_11, 2551.85f, -82.38f, 50.08f, 162.27f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[1 /*32*/].f_11, 2550.952f, -84.43023f, 50.2869f);
			func_320(Local_237[2 /*32*/].f_11, 2548.51f, -54.04f, 49.13f, -95.35f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[2 /*32*/].f_11, 2550.7f, -54.523f, 49.43f);
			func_320(Local_237[3 /*32*/].f_11, 2553.457f, -56.65649f, 48.53181f, 146.35f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[3 /*32*/].f_11, 2552.12f, -58.237f, 49.664f);
			func_320(Local_237[4 /*32*/].f_11, 2550.137f, -59.04815f, 48.58022f, -74.13f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[4 /*32*/].f_11, 2551.92f, -58.324f, 49.731f);
			break;
		case 8:
			func_320(Local_237[0 /*32*/].f_11, 893.0709f, -1275.311f, 58.46019f, 265.04f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[0 /*32*/].f_11, 895.153f, -1275.56f, 59.553f);
			func_320(Local_237[1 /*32*/].f_11, 913.9557f, -1286.593f, 60.39743f, 67.83f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[1 /*32*/].f_11, 911.352f, -1285.117f, 61.188f);
			func_320(Local_237[2 /*32*/].f_11, 895.1021f, -1273.281f, 58.45826f, 199.13f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[2 /*32*/].f_11, 895.342f, -1275.34f, 59.456f);
			func_320(Local_237[3 /*32*/].f_11, 913.2869f, -1283.322f, 60.21507f, 133.81f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[3 /*32*/].f_11, 911.334f, -1284.875f, 61.129f);
			func_320(Local_237[4 /*32*/].f_11, 896.7846f, -1277.52f, 59.03757f, 38.06f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[4 /*32*/].f_11, 895.441f, -1275.764f, 59.621f);
			break;
		case 9:
			func_320(Local_237[0 /*32*/].f_11, 1710.214f, -1824.337f, 50.54848f, -28.59f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[0 /*32*/].f_11, 1711.284f, -1822.711f, 51.534f);
			func_320(Local_237[1 /*32*/].f_11, 1701.614f, -1822.17f, 50.10348f, -118.49f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[1 /*32*/].f_11, 1703.381f, -1823.418f, 51.172f);
			func_320(Local_237[2 /*32*/].f_11, 1703.584f, -1825.894f, 50.07568f, -13.75f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[2 /*32*/].f_11, 1703.54f, -1823.788f, 51.099f);
			func_320(Local_237[3 /*32*/].f_11, 1688.61f, -1821.613f, 49.72606f, -93.27f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[3 /*32*/].f_11, 1691.224f, -1821.482f, 50.551f);
			func_320(Local_237[4 /*32*/].f_11, 1690.026f, -1800.536f, 51.64843f, -88.01f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[4 /*32*/].f_11, 1692.263f, -1800.573f, 52.552f);
			break;
		case 10:
			func_320(Local_237[0 /*32*/].f_11, 1456.32f, -979.14f, 55.23f, -154.57f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[0 /*32*/].f_11, 1456.857f, -980.883f, 55.294f);
			func_320(Local_237[1 /*32*/].f_11, 1438.66f, -967.88f, 57.96f, 61.63f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[1 /*32*/].f_11, 1436.676f, -967.07f, 58.134f);
			func_320(Local_237[2 /*32*/].f_11, 1435.1f, -971.47f, 57.49f, -151.29f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[2 /*32*/].f_11, 1436.464f, -973.046f, 57.543f);
			func_320(Local_237[3 /*32*/].f_11, 1435.05f, -982.65f, 55.84f, 138.12f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[3 /*32*/].f_11, 1433.712f, -984.499f, 55.692f);
			func_320(Local_237[4 /*32*/].f_11, 1431.08f, -982.27f, 55.42f, -168.21f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[4 /*32*/].f_11, 1431.472f, -984.8917f, 55.13808f);
			break;
		case 11:
			func_320(Local_237[0 /*32*/].f_11, 902.6746f, -982.0428f, 56.9952f, -88.59f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[0 /*32*/].f_11, 904.743f, -981.587f, 58.274f);
			func_320(Local_237[1 /*32*/].f_11, 896.0054f, -989.0909f, 57.0188f, 188.49f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[1 /*32*/].f_11, 896.568f, -991.729f, 57.776f);
			func_320(Local_237[2 /*32*/].f_11, 897.1996f, -982.2598f, 57.6362f, -93.75f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[2 /*32*/].f_11, 899.109f, -983.166f, 58.53f);
			func_320(Local_237[3 /*32*/].f_11, 890.7887f, -983.9013f, 57.3198f, -93.27f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[3 /*32*/].f_11, 893.058f, -984.212f, 58.421f);
			func_320(Local_237[4 /*32*/].f_11, 901.2033f, -976.7325f, 57.8851f, 238.01f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[4 /*32*/].f_11, 903.139f, -978.165f, 58.383f);
			break;
		case 12:
			func_320(Local_237[0 /*32*/].f_11, 996.0127f, -1207.901f, 62.01529f, -169.77f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[0 /*32*/].f_11, 996.568f, -1210.179f, 62.915f);
			func_320(Local_237[1 /*32*/].f_11, 991.6545f, -1212.221f, 61.8579f, -141.93f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[1 /*32*/].f_11, 992.857f, -1214.031f, 63.195f);
			func_320(Local_237[2 /*32*/].f_11, 985.6747f, -1211.046f, 61.5028f, 164.59f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[2 /*32*/].f_11, 985f, -1213.288f, 62.52f);
			func_320(Local_237[3 /*32*/].f_11, 981.9357f, -1214.75f, 60.6207f, 164.42f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[3 /*32*/].f_11, 981.237f, -1217.214f, 61.589f);
			func_320(Local_237[4 /*32*/].f_11, 974.0808f, -1217.114f, 59.0088f, 131.61f, 2, 1073741824 /* Float: 2f */);
			PHYSICS::_0x06AADE17334F7A40(Local_237[4 /*32*/].f_11, 972.334f, -1218.59f, 60.005f);
			break;
	}
}

Vector3 func_137()
{
	vector3 vVar0;
	switch (Local_43.f_51.f_4)
	{
		case 0:
			vVar0 = { -1393.804f, -747.506f, 93.785f };
			break;
		case 1:
			vVar0 = { -1677.996f, 304.9819f, 103.9419f };
			break;
		case 2:
			vVar0 = { -1383.035f, 114.5092f, 84.08521f };
			break;
		case 3:
			vVar0 = { -1121.212f, -209.5672f, 89.477f };
			break;
		case 4:
			vVar0 = { -1450.543f, -583.3909f, 125.9579f };
			break;
		case 5:
			vVar0 = { -550.5898f, 583.6129f, 101.7019f };
			break;
		case 6:
			vVar0 = { 2095.547f, 48.3048f, 67.4291f };
			break;
		case 7:
			vVar0 = { 2534.105f, -89.5381f, 49.7779f };
			break;
		case 8:
			vVar0 = { 969.638f, -1317.716f, 57.326f };
			break;
		case 9:
			vVar0 = { 1675.135f, -1802.726f, 52.0024f };
			break;
		case 10:
			vVar0 = { 1440.489f, -957.6642f, 57.49f };
			break;
		case 11:
			vVar0 = { 911.5031f, -948.7039f, 60.92854f };
			break;
		case 12:
			vVar0 = { 1009.009f, -1206.07f, 62.01646f };
			break;
	}
	return vVar0;
}

float func_138()
{
	switch (Local_43.f_51.f_4)
	{
		case 0:
			return -99f;
		case 1:
			return 188.4129f;
		case 2:
			return 99.955f;
		case 3:
			return -165.287f;
		case 4:
			return 149.183f;
		case 5:
			return 70.414f;
		case 6:
			return 243.5717f;
		case 7:
			return -8.499f;
		case 8:
			return 83.022f;
		case 9:
			return 251.3539f;
		case 10:
			return 191.1952f;
		case 11:
			return 132.5539f;
		case 12:
			return 111.1952f;
		default:
			break;
	}
	return 0f;
}

void func_140(float fParam0)
{
	if (!MAP::DOES_BLIP_EXIST(Local_43.f_181))
	{
		if (__LIB_0__::func_94(Global_35, Local_43.f_51, 1) <= fParam0)
		{
			__LIB_3__::func_684(Local_43.f_51);
		}
	}
}

bool func_141(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bVar1 = false;
	fVar2 = __LIB_3__::func_249(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && __LIB_3__::func_248())
	{
		bVar1 = true;
		fVar3 = __LIB_0__::func_514(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				__LIB_3__::func_336(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			__LIB_3__::func_336(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (__LIB_3__::func_280(&(uParam0->f_121), iParam4, fParam1))
		{
			__LIB_3__::func_164(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(__LIB_3__::func_167(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121[iVar0 /*9*/].f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_121[iVar0 /*9*/].f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						func_106(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				__LIB_3__::func_164(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(__LIB_3__::func_167(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_142()
{
	if (!__LIB_0__::func_27(iLocal_880, 4194304))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[1], joaat("DIALOGUE01")))
		{
			__LIB_2__::func_478(uLocal_823[1], uLocal_823[0], "RE_KR_UNI_V1_GATHERED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			Local_853.f_9 = "STRANGER_MALE";
			__LIB_4__::func_277(&Local_853, uLocal_823[1], &(uLocal_836[1]), 0f, 0f, 0f, 1065353216 /* Float: 1f */, 1, 5);
			__LIB_1__::func_683(&iLocal_880, 4194304);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[1], joaat("DIALOGUE02")))
	{
		__LIB_2__::func_478(uLocal_823[1], uLocal_823[0], "RE_KR_UNI_V1_IMPERATIVE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[1], -536488850))
	{
		__LIB_2__::func_478(uLocal_823[1], uLocal_823[0], "RE_KR_UNI_V1_NUMBERS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[1], -162692867))
	{
		__LIB_2__::func_478(uLocal_823[1], uLocal_823[0], "RE_KR_UNI_V1_NEW_MEMBER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[1], 743271676))
	{
		__LIB_2__::func_478(uLocal_823[1], uLocal_823[0], "RE_KR_UNI_V1_STEP_FORWARD", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[1], 377438560))
	{
		__LIB_2__::func_478(uLocal_823[1], uLocal_823[0], "RE_KR_UNI_V1_ACCEPT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[0], -929553001))
	{
		__LIB_2__::func_478(uLocal_823[0], uLocal_823[1], "RE_KR_UNI_V1_YES_SIR", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[1], 1123293769))
	{
		__LIB_2__::func_478(uLocal_823[1], uLocal_823[0], "RE_KR_UNI_V1_SHINE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[0], joaat("GENERIC_CHEER")))
	{
		__LIB_2__::func_478(uLocal_823[0], uLocal_823[1], "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[1], 1966407370))
	{
		__LIB_2__::func_478(uLocal_823[1], uLocal_823[3], "RE_KR_UNI_V1_FIRE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[1], 619731706))
	{
		__LIB_2__::func_478(uLocal_823[3], uLocal_823[3], "RE_KR_UNI_V1_FLEE", "", 70f, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[1], 916389463))
	{
		__LIB_2__::func_478(uLocal_823[1], uLocal_823[1], "RE_KR_UNI_V1_COME_BACK", "", 70f, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
	}
}

void func_143()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[0], joaat("ONFIRE")) || __LIB_0__::func_27(iLocal_880, 8))
	{
		__LIB_0__::func_172(iLocal_976);
		__LIB_3__::func_166(&Local_43);
		if (!Local_43.f_44 == 1)
		{
			Local_43.f_44 = 1;
		}
	}
}

void func_144()
{
	if (!__LIB_0__::func_27(iLocal_880, 256))
	{
		if (func_141(&Local_43, 3f, 70f, 45f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
		{
			__LIB_1__::func_683(&iLocal_880, 256);
			__LIB_2__::func_115(34, 1, 0, 0, 12, 0, 0, 1);
		}
	}
}

int func_145(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	fVar0 = iParam0;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 12)
	{
		if (((iVar2 == 5 || iVar2 == 8) || iVar2 == 10) || iVar2 == 11)
		{
			if (Local_43.f_98[iVar2] < fVar0)
			{
				fVar0 = Local_43.f_98[iVar2];
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	if (iVar1 != -1)
	{
		return uLocal_823[iVar1];
	}
	return 0;
}

void func_146()
{
	if (!__LIB_0__::func_27(iLocal_880, 16384))
	{
		iLocal_852 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_beat_rally_cross_fire_loop", Local_622[0 /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
		__LIB_3__::func_319(Local_770.f_1);
		__LIB_1__::func_683(&iLocal_880, 16384);
	}
}

void func_151()
{
	if (!__LIB_0__::func_27(iLocal_880, 16384))
	{
		if (__LIB_0__::func_27(iLocal_880, 2048))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_770.f_1))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_770.f_1, false))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_770.f_1) > 0.95f)
					{
						func_146();
					}
				}
			}
			else
			{
				func_146();
			}
		}
	}
}

void func_152()
{
	if (!__LIB_0__::func_27(iLocal_880, 262144))
	{
		if (__LIB_0__::func_94(uLocal_823[1], Local_43.f_51, 1) > (10f + 3f))
		{
			__LIB_2__::func_634(&(Local_43.f_5), 1);
			__LIB_1__::func_683(&iLocal_880, 262144);
		}
	}
}

void func_154()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (__LIB_2__::func_1(uLocal_823[iVar0], 0, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_823[iVar0], false);
		}
		iVar0++;
	}
}

void func_156()
{
	if (!__LIB_0__::func_27(iLocal_880, 8388608))
	{
		if (Local_43.f_46)
		{
			if (!__LIB_0__::func_75(&uLocal_803))
			{
				__LIB_1__::func_148(&uLocal_803);
			}
			else if (__LIB_0__::func_265(&uLocal_803) > 5f)
			{
				if ((__LIB_4__::func_278(&uLocal_823, Global_35, 1, 1) && __LIB_2__::func_227(0, 1, Global_35, 1)) && !PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					__LIB_2__::func_478(Global_35, 0, "RE_KR_UNI_V1_PLYFINAL_KILL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_880, 8388608);
				}
			}
		}
	}
}

void func_158()
{
	if (!__LIB_0__::func_27(iLocal_880, 512) && !__LIB_0__::func_27(iLocal_14, 512))
	{
		if (iLocal_891 == 16384)
		{
			__LIB_2__::func_478(uLocal_823[3], Global_35, "RE_KR_UNI_V1_DANGEROUS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			iLocal_881 = func_332(Global_35, 35f);
			if ((iLocal_881 == 0 && __LIB_0__::func_27(iLocal_880, 8)) || iLocal_881 == 1)
			{
				__LIB_2__::func_478(uLocal_823[1], Global_35, "SCARED_HELP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else if (iLocal_881 == 0)
			{
				func_333();
				fLocal_878 = 100f;
			}
			else if ((iLocal_891 == 1024 && __LIB_2__::func_1(uLocal_823[1], 0, 1)) && Local_43.f_98[1] < 20f)
			{
				__LIB_2__::func_478(uLocal_823[1], Global_35, "RE_KR_UNI_V1_STEAL_HORSE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else if (__LIB_2__::func_1(uLocal_823[1], 0, 1))
			{
				__LIB_2__::func_478(uLocal_823[1], Global_35, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_333();
			}
		}
		__LIB_1__::func_683(&iLocal_880, 512);
	}
}

void func_159()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_43.f_98[iVar0] < 2f)
		{
			fLocal_20[iVar0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 0.5f);
		}
		else if (Local_43.f_98[iVar0] < 5f)
		{
			fLocal_20[iVar0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 1f);
		}
		else
		{
			fLocal_20[iVar0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.75f, 1f);
		}
		if (__LIB_0__::func_27(iLocal_17, 16384))
		{
			fLocal_20[iVar0] = (fLocal_20[iVar0] * 2f);
		}
		iLocal_806[iVar0] = 9;
		iVar0++;
	}
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
			return "REBUB";
			return "RECA";
			return "RECG";
			return "RECP";
			return "RECHR";
			return "RECQ";
			return "RECCT";
			return "RECW";
			return "REDAA";
			return "REDAB";
			return "REDAS";
			return "REDEB";
			return "REDJ";
			return "REDLP";
			return "REDIB";
			return "REDOM";
			return "REDM";
			return "REPND";
			return "REDD";
			return "REDB";
			return "REDW";
			return "REESC";
			return "REEX";
			return "REFF";
			return "REFT";
			return "REFR";
			return "REFO";
			return "REFD";
			return "REFND";
			return "REFC";
			return "REGCR";
			return "REGPE";
			return "REGP";
			return "REHOC";
			return "REHOR";
			return "REHR";
			return "REIK";
			return "REIR";
			return "REIT";
			return "REKV";
			return "REKD";
			return "REKR";
			return "REKS";
			return "RELRU";
			return "REETE";
			return "RELK";
			return "RELP";
			return "RELD";
			return "RELDR";
			return "RELF";
			return "RELM";
			return "REMC";
			return "REMUC";
			return "RENS";
			return "REOTE";
			return "REOR";
			return "REOL";
			return "REOT";
			return "REPA";
			return "REPT";
			return "REPP";
			return "RESB";
			return "REPS";
			return "REPCA";
			return "REPCS";
			return "REPO";
			return "REPCH";
			return "REPBR";
			return "REPW";
			return "REPH";
			return "RERI";
			return "RERP";
			return "RERD";
			return "RESA";
			return "RESAF";
			return "RESWA";
			return "RESW";
			return "RESS";
			return "RESO";
			return "RESKP";
			return "RESAM";
			return "RESH";
			return "REHU";
			return "RESSH";
			return "RESR";
			return "RESTF";
			return "REKT";
			return "RETC";
			return "RETP";
			return "REBUR";
			return "RETWC";
			return "RETR";
			return "RETT";
			return "RETWW";
			return "RETA";
			return "RETRB";
			return "RETW";
			return "RETH";
			return "REVC";
			return "REWTH";
			return "REWA";
			return "REWC";
			return "REWH";
			return "REWM";
			return "REWMC";
			return "XXXX";
		}
void func_188(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 || iParam1);
}

void func_266()
{
	int iVar0;
	iVar0 = PED::GET_MOUNT(Global_35);
	if (iVar0 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_851))
		{
			iLocal_851 = 0;
		}
	}
	else if (iVar0 != iLocal_851)
	{
		iLocal_851 = iVar0;
	}
}

void func_294(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		PHYSICS::_0x0348469DAA17576C(iParam0);
		PHYSICS::_0xBDDA142759307528(iParam0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_HORSE_ACTION(0, 1, 0, 0);
		TASK::TASK_SMART_FLEE_COORD(0, Local_43.f_51, 500f, -1, false, 2f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, fParam1, fParam2);
	}
}

void func_295()
{
	if (__LIB_1__::func_985())
	{
		if (iLocal_849 != uLocal_823[5])
		{
			__LIB_2__::func_478(uLocal_823[5], 0, "RE_KR_UNI_V1_BOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (iLocal_849 != uLocal_823[8])
		{
			__LIB_2__::func_478(uLocal_823[8], 0, "RE_KR_UNI_V1_BOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (iLocal_849 != uLocal_823[9])
		{
			__LIB_2__::func_478(uLocal_823[9], 0, "RE_KR_UNI_V1_BOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	else
	{
		if (iLocal_849 != uLocal_823[10])
		{
			__LIB_2__::func_478(uLocal_823[10], 0, "RE_KR_UNI_V1_BOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (iLocal_849 != uLocal_823[11])
		{
			if (__LIB_1__::func_985())
			{
				__LIB_2__::func_478(uLocal_823[11], 0, "RE_KR_UNI_V1_BOO_01", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(uLocal_823[11], 0, "RE_KR_UNI_V1_BOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
	}
}

void func_296()
{
	if (((__LIB_2__::func_1(uLocal_823[1], 0, 1) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_770)) && ANIMSCENE::_0x8D81E7824B7753F7(Local_770, "action", 1)) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_823[1], Local_767[0 /*2*/], "ACTION_LEADER") > 0.4f)
	{
		if ((iLocal_19 % 2) == 0)
		{
			if (!func_504(uLocal_823[8]))
			{
				__LIB_2__::func_478(uLocal_823[8], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
		else if (!func_504(uLocal_823[9]))
		{
			__LIB_2__::func_478(uLocal_823[9], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (!func_504(uLocal_823[10]))
		{
			__LIB_2__::func_478(uLocal_823[10], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		if (!func_504(uLocal_823[11]))
		{
			__LIB_2__::func_478(uLocal_823[11], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	else
	{
		switch (iLocal_19)
		{
			case 0:
				if (iLocal_849 != uLocal_823[11])
				{
					__LIB_2__::func_478(uLocal_823[11], 0, "RE_KR_UNI_V1_WHOO_01", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (iLocal_849 != uLocal_823[8])
				{
					__LIB_2__::func_478(uLocal_823[8], 0, "RE_KR_UNI_V1_WHOO_01", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				break;
			case 1:
				if (iLocal_849 != uLocal_823[5] && !__LIB_0__::func_27(iLocal_880, 16777216))
				{
					__LIB_2__::func_478(uLocal_823[5], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (iLocal_849 != uLocal_823[8])
				{
					__LIB_2__::func_478(uLocal_823[8], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (iLocal_849 != uLocal_823[9])
				{
					__LIB_2__::func_478(uLocal_823[9], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				break;
			case 2:
				if (iLocal_849 != uLocal_823[10])
				{
					__LIB_2__::func_478(uLocal_823[10], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (iLocal_849 != uLocal_823[11])
				{
					__LIB_2__::func_478(uLocal_823[11], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				break;
			case 3:
				if (iLocal_849 != uLocal_823[8])
				{
					__LIB_2__::func_478(uLocal_823[8], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (iLocal_849 != uLocal_823[9])
				{
					__LIB_2__::func_478(uLocal_823[9], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				break;
			case 4:
				if (iLocal_849 != uLocal_823[10])
				{
					__LIB_2__::func_478(uLocal_823[10], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (iLocal_849 != uLocal_823[11])
				{
					__LIB_2__::func_478(uLocal_823[11], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (iLocal_849 != uLocal_823[9])
				{
					__LIB_2__::func_478(uLocal_823[9], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				break;
			case 5:
				if (iLocal_849 != uLocal_823[8])
				{
					__LIB_2__::func_478(uLocal_823[8], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (iLocal_849 != uLocal_823[5] && !__LIB_0__::func_27(iLocal_880, 16777216))
				{
					__LIB_2__::func_478(uLocal_823[5], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_880, 16777216);
				}
				break;
			case 6:
				if (iLocal_849 != uLocal_823[9])
				{
					__LIB_2__::func_478(uLocal_823[9], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (iLocal_849 != uLocal_823[10])
				{
					__LIB_2__::func_478(uLocal_823[10], 0, "RE_KR_UNI_V1_WHOO_02", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				break;
		}
	}
	iLocal_19++;
	if (iLocal_19 > 6)
	{
		iLocal_19 = 0;
	}
}

void func_297()
{
	if (iLocal_18 == 0)
	{
		__LIB_3__::func_277(joaat("SONAR_OVERHEARD_BEAT_BIG"), Local_43.f_51, 1);
		iLocal_18++;
	}
	else if (iLocal_18 < 3)
	{
		__LIB_3__::func_277(1891783641, Local_43.f_51, 1);
		iLocal_18++;
	}
}

int func_299(bool bParam0)
{
	int iVar0;
	if (bParam0)
	{
		if (!__LIB_0__::func_27(iLocal_880, 2))
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (__LIB_2__::func_1(uLocal_823[iVar0], 0, 1))
				{
					PED::SET_PED_CONFIG_FLAG(uLocal_823[iVar0], 124, true);
					PED::SET_PED_CONFIG_FLAG(uLocal_823[iVar0], 322, true);
				}
				iVar0++;
			}
			__LIB_1__::func_683(&iLocal_880, 2);
		}
	}
	else if (__LIB_0__::func_27(iLocal_880, 2))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (__LIB_2__::func_1(uLocal_823[iVar0], 0, 1))
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_823[iVar0], 124, false);
				PED::SET_PED_CONFIG_FLAG(uLocal_823[iVar0], 322, false);
			}
			iVar0++;
		}
		__LIB_1__::func_681(&iLocal_880, 2);
	}
	return 0;
}

bool func_303(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 11)
	{
		return true;
	}
	return false;
}

int func_304(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 7) || iParam0 == 8) || iParam0 == 10) || iParam0 == 11)
	{
		return joaat("SCRIPT_COMMON_RALLY_TORCH_MALE_A");
	}
	else if (iParam0 == 6 || iParam0 == 9)
	{
		return joaat("SCRIPT_COMMON_RALLY_TORCH_MALE_B");
	}
	else if (iParam0 == 3 || iParam0 == 4)
	{
		return joaat("SCRIPT_COMMON_RALLY_TORCH_MALE_C");
	}
	return -1;
}

void func_306(int iParam0, int iParam1)
{
	int iVar0;
	if ((ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[1], 1466248667) && !ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[iParam1], 888864458)) || __LIB_0__::func_58())
	{
		if (iParam1 >= 3)
		{
			if (iLocal_849 == 0)
			{
				if (((iParam0 == uLocal_823[5] || iParam0 == uLocal_823[8]) || iParam0 == uLocal_823[10]) || iParam0 == uLocal_823[11])
				{
					return;
				}
			}
			else if (iParam0 == iLocal_849 && !TASK::_0x02EBBB3989B7E695(iParam0))
			{
				return;
			}
			iVar0 = func_511(iParam1, (MISC::GET_GAME_TIMER() % 3));
			if (func_304(iParam1) == joaat("SCRIPT_COMMON_RALLY_TORCH_MALE_A"))
			{
				if (iVar0 == 0)
				{
					func_512(iParam0, joaat("REKR_PEDA_REACTA"), 1065353216 /* Float: 1f */, 0);
				}
				else if (iVar0 == 1)
				{
					func_512(iParam0, joaat("REKR_PEDA_REACTB"), 1065353216 /* Float: 1f */, 0);
				}
				else if (iVar0 == 2)
				{
					func_512(iParam0, joaat("REKR_PEDA_REACTC"), 1065353216 /* Float: 1f */, 0);
				}
			}
			else if (func_304(iParam1) == joaat("SCRIPT_COMMON_RALLY_TORCH_MALE_B"))
			{
				if (iVar0 == 0)
				{
					func_512(iParam0, joaat("REKR_PEDB_REACTA"), 1065353216 /* Float: 1f */, 0);
				}
				else if (iVar0 == 1)
				{
					func_512(iParam0, joaat("REKR_PEDB_REACTB"), 1065353216 /* Float: 1f */, 0);
				}
				else if (iVar0 == 2)
				{
					func_512(iParam0, joaat("REKR_PEDB_REACTC"), 1065353216 /* Float: 1f */, 0);
				}
			}
			else if (func_304(iParam1) == joaat("SCRIPT_COMMON_RALLY_TORCH_MALE_C"))
			{
				if (iVar0 == 0)
				{
					func_512(iParam0, joaat("REKR_PEDC_REACTA"), 1065353216 /* Float: 1f */, 0);
				}
				else if (iVar0 == 1)
				{
					func_512(iParam0, joaat("REKR_PEDC_REACTB"), 1065353216 /* Float: 1f */, 0);
				}
				else if (iVar0 == 2)
				{
					func_512(iParam0, joaat("REKR_PEDC_REACTC"), 1065353216 /* Float: 1f */, 0);
				}
			}
		}
	}
}

bool func_307(int iParam0)
{
	var uVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, 0, false);
	iLocal_997 = __LIB_3__::func_547(iParam0, Global_35, 0.87f);
	switch (iLocal_997)
	{
		case 2:
			if (func_512(iParam0, joaat("REKR_R1_TORREACT_R"), 1065353216 /* Float: 1f */, 0))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Local_778);
				if (__LIB_3__::func_624(Global_35) == 0 && __LIB_3__::func_624(PED::GET_MOUNT(Global_35)) == 0)
				{
					if (iParam0 == uLocal_823[5])
					{
						__LIB_2__::func_478(iParam0, Global_35, "RE_KR_UNI_V1_SHH_A", "", -1f, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_133(iParam0, "0912_A_M_M_Civ_Poor_White_AGGRESSIVE_12", 0);
						__LIB_2__::func_478(iParam0, Global_35, "RE_KR_UNI_V1_SHH_A", "", -1f, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
						iLocal_850 = iParam0;
					}
				}
				else
				{
					__LIB_2__::func_478(iParam0, Global_35, "RE_KR_UNI_V1_SHH_HOGTIE", "", -1f, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				return true;
			}
			break;
		case 3:
			if (func_512(iParam0, joaat("REKR_R1_TORREACT_L"), 1065353216 /* Float: 1f */, 0))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Local_778);
				if (__LIB_3__::func_624(Global_35) == 0 && __LIB_3__::func_624(PED::GET_MOUNT(Global_35)) == 0)
				{
					if (iParam0 == uLocal_823[5])
					{
						__LIB_2__::func_478(iParam0, Global_35, "RE_KR_UNI_V1_SHH_A", "", -1f, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_133(iParam0, "0912_A_M_M_Civ_Poor_White_AGGRESSIVE_12", 0);
						__LIB_2__::func_478(iParam0, Global_35, "RE_KR_UNI_V1_SHH_A", "", -1f, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
						iLocal_850 = iParam0;
					}
				}
				else
				{
					__LIB_2__::func_478(iParam0, Global_35, "RE_KR_UNI_V1_SHH_HOGTIE", "", -1f, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				return true;
			}
			break;
	}
	return false;
}

bool func_308(int iParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		if (iParam1 > 2)
		{
			if (!ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, 888864458))
			{
				if ((__LIB_2__::func_1(uLocal_823[1], 0, 1) && !ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_823[1], 888864458)) && iParam0 != iLocal_849)
				{
					if (TASK::_0x02EBBB3989B7E695(iParam0))
					{
						fVar0 = __LIB_0__::func_665(iParam2, iParam0, 1, 1);
						if (fVar0 < fParam3)
						{
							return true;
						}
					}
				}
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, false);
				return false;
			}
		}
	}
	return false;
}

void func_309(int iParam0, float fParam1)
{
	TASK::_0xE7FA07624574B79A(uLocal_823[iParam0], Global_35, 1, 1, fParam1, -1, 0, 0, 0);
	if ((iLocal_885[0] != iParam0 && iLocal_885[1] != iParam0) && iLocal_885[2] != iParam0)
	{
		iLocal_885[0] = iLocal_885[1];
		iLocal_885[1] = iLocal_885[2];
		iLocal_885[2] = iParam0;
	}
}

bool func_310(int iParam0)
{
	float fVar0;
	fVar0 = __LIB_0__::func_265(&uLocal_898);
	if ((iLocal_885[0] == iParam0 || iLocal_885[1] == iParam0) || iLocal_885[2] == iParam0)
	{
		if (fVar0 > 14f)
		{
			return true;
		}
	}
	else if (iLocal_882 <= 5)
	{
		if (fVar0 > 2.75f)
		{
			return true;
		}
	}
	else if (iLocal_882 < 8)
	{
		if (fVar0 > 5f)
		{
			return true;
		}
	}
	else if (fVar0 > 7f)
	{
		return true;
	}
	return false;
}

bool func_311(int iParam0, int iParam1)
{
	int iVar0;
	if ((iParam0 == iLocal_849 && !TASK::_0x02EBBB3989B7E695(iParam0)) || TASK::GET_SCRIPT_TASK_STATUS(uLocal_823[iParam1], 2121492476, true) == 1)
	{
		return false;
	}
	TASK::_0x673A8779D229BA5A(iParam0, Local_43.f_51, 0, 0);
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		PED::_0xAAB050DA48B57978(iParam0, "Flee_Panic", Global_35, -1, 4);
	}
	if (iParam1 == 3)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_ANIM(0, Local_767[0 /*2*/], "action_rallymale02", 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
		TASK::TASK_SMART_FLEE_COORD(0, Local_43.f_51, 500f, -1, 256, 2f);
		__LIB_1__::func_474(iParam0, &iVar0, 0.1f, 0.5f, 1, 1);
	}
	else if (iParam1 == 4)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_ANIM(0, Local_767[0 /*2*/], "action_rallymale03", 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
		TASK::TASK_SMART_FLEE_COORD(0, Local_43.f_51, 500f, -1, 256, 2f);
		__LIB_1__::func_474(iParam0, &iVar0, 0.1f, 0.5f, 1, 1);
	}
	else if (iParam1 == 5)
	{
		if (__LIB_0__::func_27(iLocal_880, 8))
		{
			if (PED::_0xEEED8FAFEC331A70(iParam0, Local_43.f_51, 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_COORD(0, Local_43.f_51, 500f, -1, false, 2f);
				__LIB_1__::func_474(iParam0, &iVar0, 0.5f, 1f, 1, 1);
			}
		}
		else
		{
			return false;
		}
	}
	else if (iParam1 == 6)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_ANIM(0, Local_767[0 /*2*/], "action_rallymale05", 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
		TASK::TASK_SMART_FLEE_COORD(0, Local_43.f_51, 500f, -1, 256, 2f);
		__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
	}
	else if (iParam1 == 7)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_ANIM(0, Local_767[0 /*2*/], "action_rallymale06", 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
		TASK::TASK_SMART_FLEE_COORD(0, Local_43.f_51, 500f, -1, 256, 2f);
		__LIB_1__::func_474(iParam0, &iVar0, 0.5f, 0.51f, 1, 1);
	}
	else if (iParam1 == 8)
	{
		if (__LIB_0__::func_27(iLocal_880, 8))
		{
			if (PED::_0xEEED8FAFEC331A70(iParam0, Local_43.f_51, 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_COORD(0, Local_43.f_51, 500f, -1, false, 2f);
				__LIB_1__::func_474(iParam0, &iVar0, 0.5f, 1f, 1, 1);
			}
		}
		else
		{
			return false;
		}
	}
	else if (iParam1 == 9)
	{
		if (__LIB_0__::func_27(iLocal_880, 8))
		{
			if (PED::_0xEEED8FAFEC331A70(iParam0, Local_43.f_51, 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_COORD(0, Local_43.f_51, 500f, -1, false, 2f);
				__LIB_1__::func_474(iParam0, &iVar0, 0.5f, 1.5f, 1, 1);
			}
		}
		else
		{
			return false;
		}
	}
	else if (iParam1 == 10)
	{
		if (__LIB_0__::func_27(iLocal_880, 8))
		{
			if (PED::_0xEEED8FAFEC331A70(iParam0, Local_43.f_51, 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_COORD(0, Local_43.f_51, 500f, -1, false, 2f);
				__LIB_1__::func_474(iParam0, &iVar0, 0.1f, 1f, 1, 1);
			}
		}
		else
		{
			return false;
		}
	}
	else if (iParam1 == 11)
	{
		if (__LIB_0__::func_27(iLocal_880, 8))
		{
			if (PED::_0xEEED8FAFEC331A70(iParam0, Local_43.f_51, 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_COORD(0, Local_43.f_51, 500f, -1, false, 2f);
				__LIB_1__::func_474(iParam0, &iVar0, 0.1f, 1f, 1, 1);
			}
		}
		else
		{
			return false;
		}
	}
	PED::SET_PED_KEEP_TASK(iParam0, true);
	return true;
}

void func_315(int iParam0)
{
	if (!Local_43.f_46)
	{
		func_515(uLocal_823[1]);
		if (PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, false, 0) == 1)
		{
			__LIB_4__::func_279(&iParam0, 0, Global_35, 1, 0, 0, 0, 1);
		}
	}
	func_517();
	if (__LIB_0__::func_27(iLocal_14, 128))
	{
		if (!PED::IS_PED_USING_ANY_SCENARIO(uLocal_823[1]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_823[1], -875674219, true) != 1)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_823[1], Global_35, -1, -1f, -1f, -1f);
			}
		}
	}
	else if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_984))
	{
		if (!PED::IS_PED_USING_ANY_SCENARIO(uLocal_823[1]))
		{
			if (__LIB_0__::func_94(uLocal_823[1], func_137(), 1) > 3.5f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_823[1], 713668775, true) != 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_823[1], func_137(), 1f, -1, 3f, 0, 40000f);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_823[1], -76381094, true) != 1)
			{
				TASK::_TASK_USE_SCENARIO_POINT(uLocal_823[1], iLocal_984, 0, -1, true, false, 0, false, -1f, false);
			}
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_823[1], 518218985, true) != 1)
	{
		TASK::TASK_SMART_FLEE_PED(uLocal_823[1], Global_35, 100f, -1, 256, 1f, 0);
	}
}

bool func_316(var uParam0, int iParam1, int* iParam2, int iParam3, int iParam4, var uParam5, var uParam6, float fParam7, float fParam8, float fParam9, float fParam10)
{
	vector3 vVar0;
	float fVar3;
	if (!__LIB_0__::func_75(&uParam5))
	{
		__LIB_1__::func_148(&uParam5);
	}
	if (__LIB_2__::func_1(*iParam1, 0, 1))
	{
		if (!FIRE::IS_ENTITY_ON_FIRE(*iParam1) && !PED::IS_PED_RAGDOLL(*iParam1))
		{
			if (__LIB_0__::func_265(&uParam5) >= fParam8)
			{
				func_518(*iParam1);
				if ((TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 518218985, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 518218985, true) != 0) && TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 780511057, true) != 1)
				{
					TASK::CLEAR_PED_TASKS(*iParam1, true, false);
					TASK::CLEAR_PED_SECONDARY_TASK(*iParam1);
					if ((__LIB_0__::func_665(*iParam1, Global_35, 1, 1) > fParam9 || !func_99(iParam4)) && iLocal_891 != 1024)
					{
						if (TASK::IS_PED_ACTIVE_IN_SCENARIO(*iParam1, 0))
						{
							if (PED::IS_PED_USING_ANY_SCENARIO(*iParam1))
							{
								PED::_0xAAB050DA48B57978(*iParam1, "Flee_Panic", Global_35, -1, 4);
							}
							if (PED::_0xEEED8FAFEC331A70(*iParam1, Global_36, 3))
							{
								__LIB_0__::func_325(iParam2);
								TASK::_0x2E1D6D87346BB7D2(*iParam1, iParam3, 0, 0);
								TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam1, iParam3, 3, 0, fParam10, -1, 0);
								*uParam0 = 6;
								return true;
							}
						}
						else
						{
							__LIB_0__::func_325(iParam2);
							TASK::_0x2E1D6D87346BB7D2(*iParam1, iParam3, 0, 0);
							TASK::TASK_SMART_FLEE_PED(*iParam1, iParam3, fParam10, -1, 0, 2f, 0);
							*uParam0 = 6;
							return true;
						}
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_622[iParam4 /*12*/].f_8) && ENTITY::IS_ENTITY_ATTACHED(Local_622[iParam4 /*12*/].f_8))
						{
							__LIB_2__::func_919(Local_622[iParam4 /*12*/].f_8, 1, 1);
						}
						if (__LIB_0__::func_27(iLocal_17, 4096))
						{
							vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam1, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f) };
							fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 12f);
							TASK::TASK_REACT(*iParam1, Global_35, vVar0, "TaskCombat_Panic", fVar3, 0, 4);
							__LIB_1__::func_148(&uLocal_904);
							__LIB_2__::func_73(*iParam1, iParam2, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
							return true;
						}
						else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(*iParam1, 0))
						{
							if (PED::_0x802092B07E3B1EEA(*iParam1, Global_36, 3))
							{
								TASK::TASK_COMBAT_PED(*iParam1, iParam3, 0, 16);
								__LIB_2__::func_73(*iParam1, iParam2, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
								return true;
							}
						}
						else
						{
							TASK::TASK_COMBAT_PED(*iParam1, iParam3, 0, 16);
							__LIB_2__::func_73(*iParam1, iParam2, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
							return true;
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_622[iParam4 /*12*/].f_8) && ENTITY::IS_ENTITY_ATTACHED(Local_622[iParam4 /*12*/].f_8))
		{
			__LIB_2__::func_919(Local_622[iParam4 /*12*/].f_8, 1, 1);
		}
	}
	return false;
}

bool func_317(int iParam0, int* iParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, float fParam7, float fParam8, int iParam9)
{
	int iVar0;
	if (!__LIB_0__::func_75(&uParam4))
	{
		__LIB_1__::func_148(&uParam4);
	}
	if (!func_520(iParam2))
	{
		if (__LIB_2__::func_1(*iParam0, 0, 1))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(*iParam0) && !PED::IS_PED_RAGDOLL(*iParam0))
			{
				if (iLocal_891 == 1024)
				{
					fParam7 = (fParam7 * 3f);
				}
				if (__LIB_0__::func_265(&uParam4) >= fParam7)
				{
					func_518(*iParam0);
					if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 518218985, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 780511057, true) != 1)
					{
						TASK::CLEAR_PED_TASKS(*iParam0, true, false);
						TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_622[iParam2 /*12*/].f_8) && ENTITY::IS_ENTITY_ATTACHED(Local_622[iParam2 /*12*/].f_8))
						{
							__LIB_2__::func_919(Local_622[iParam2 /*12*/].f_8, 1, 1);
						}
						if (__LIB_0__::func_665(*iParam0, Global_35, 1, 1) > fParam8)
						{
							TASK::_0x2E1D6D87346BB7D2(*iParam0, Global_35, 0, 0);
							TASK::TASK_SMART_FLEE_PED(*iParam0, Global_35, 300f, -1, 0, 1.5f, 0);
							__LIB_0__::func_325(iParam1);
						}
						else if (iParam9 == -1 || iLocal_884 < iParam9)
						{
							if (iParam2 == 2 || iParam2 == 1)
							{
								WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 93, true);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
								TASK::TASK_GRAPPLE(0, Global_35, 0, 1, 1.5f, 1, 0);
								TASK::TASK_COMBAT_PED(0, Global_35, 68157440, 4096);
								__LIB_1__::func_474(*iParam0, &iVar0, 0, 0, 1, 1);
								__LIB_2__::func_73(*iParam0, iParam1, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
								iLocal_884++;
							}
							else if ((iParam2 % 2) == 0)
							{
								WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 93, true);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
								TASK::TASK_COMBAT_PED(0, Global_35, 68157440, 4096);
								__LIB_1__::func_474(*iParam0, &iVar0, 0, 0, 1, 1);
								__LIB_2__::func_73(*iParam0, iParam1, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
								iLocal_884++;
							}
							else
							{
								TASK::_0x2E1D6D87346BB7D2(*iParam0, Global_35, 0, 0);
								TASK::TASK_SMART_FLEE_PED(*iParam0, Global_35, 300f, -1, 0, 1.5f, 0);
								__LIB_0__::func_325(iParam1);
							}
						}
						else
						{
							TASK::_0x2E1D6D87346BB7D2(*iParam0, Global_35, 0, 0);
							TASK::TASK_SMART_FLEE_PED(*iParam0, Global_35, 300f, -1, 0, 1.5f, 0);
							__LIB_0__::func_325(iParam1);
						}
						func_521(iParam3, iParam2);
					}
				}
			}
		}
	}
	return false;
}

bool func_318(int iParam0)
{
	if (Local_43.f_98[iParam0] < 15f)
	{
		if (__LIB_2__::func_123(uLocal_823[iParam0], Global_35, 0))
		{
			if (!PED::IS_PED_IN_COVER(Global_35, false, false))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(uLocal_823[iParam0]))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_320(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_320(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_320(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_332(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 1;
	while (iVar0 <= 11)
	{
		if (__LIB_2__::func_1(uLocal_823[iVar0], 0, 1))
		{
			if (iParam0 != uLocal_823[iVar0])
			{
				if (__LIB_0__::func_665(iParam0, uLocal_823[iVar0], 1, 1) <= fParam1)
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_333()
{
	int iVar0;
	iVar0 = func_529(Global_35, 0, 0, 0);
	if (__LIB_2__::func_1(iVar0, 0, 1))
	{
		__LIB_2__::func_122(iVar0, "SCREAM_TERROR", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
	}
}

bool func_504(int iParam0)
{
	if (iLocal_850 == iParam0)
	{
		return true;
	}
	return false;
}

int func_511(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 5:
					return -1;
				case 7:
					return 1;
				case 8:
					return -1;
				case 10:
					return 2;
				case 11:
					return 3;
				case 6:
					return 1;
				case 9:
					return 2;
				case 3:
					return 1;
				case 4:
					return 2;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 5:
					return -1;
				case 7:
					return 3;
				case 8:
					return -1;
				case 10:
					return 1;
				case 11:
					return 2;
				case 6:
					return 2;
				case 9:
					return 1;
				case 3:
					return 2;
				case 4:
					return 1;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 5:
					return -1;
				case 7:
					return 3;
				case 8:
					return -1;
				case 10:
					return 2;
				case 11:
					return 1;
				case 6:
					return 1;
				case 9:
					return 2;
				case 3:
					return 2;
				case 4:
					return 1;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_512(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return false;
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, bParam3);
	PED::_0xD65FDC686A031C83(iParam0, iParam1, iParam2);
	if (!TASK::_0x02EBBB3989B7E695(iParam0) && PED::_0x68821369A2CEADD5(iParam0, iParam1))
	{
		return true;
	}
	return false;
}

void func_515(int iParam0)
{
	if (!__LIB_0__::func_27(iLocal_880, 128))
	{
		if (__LIB_2__::func_227(0, 1, Global_35, 0) && __LIB_2__::func_227(0, 1, iParam0, 0))
		{
			if (__LIB_2__::func_215(iParam0, Global_35, 1, 10f, 0))
			{
				if (__LIB_0__::func_27(iLocal_14, 256))
				{
					return;
				}
				else
				{
					if (__LIB_2__::func_407(0))
					{
						__LIB_2__::func_478(iParam0, Global_35, "RE_KR_UNI_V1_HANG_OUT_SICK", "", -1f, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(iParam0, Global_35, "RE_KR_UNI_V1_HANG_OUT", "", -1f, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&iLocal_880, 128);
					return;
				}
			}
		}
	}
}

void func_517()
{
	if (iLocal_16 > 0)
	{
		if ((!__LIB_2__::func_1(uLocal_823[1], 0, 1) || Local_43.f_46) || __LIB_0__::func_27(iLocal_880, 1))
		{
			if (!__LIB_0__::func_27(iLocal_14, 1))
			{
				__LIB_2__::func_593(&iLocal_918, &Local_939);
				__LIB_1__::func_683(&iLocal_14, 1);
			}
			return;
		}
	}
	if (iLocal_16 > 0 && !__LIB_0__::func_27(iLocal_14, 1))
	{
		iLocal_15 = func_636(&(uLocal_823[1]), &iLocal_918, 20f, &Local_939, &(Local_43.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	switch (iLocal_16)
	{
		case 0:
			__LIB_2__::func_602(&(Local_939[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_1__::func_471(&(Local_939[0 /*17*/]), 8);
			__LIB_2__::func_411(&(Local_939[0 /*17*/]), 1, 0);
			__LIB_2__::func_602(&(Local_939[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_2__::func_394(&iLocal_918, &(Local_939[1 /*17*/]));
			__LIB_1__::func_471(&(Local_939[1 /*17*/]), 8);
			__LIB_2__::func_411(&(Local_939[1 /*17*/]), 1, 0);
			iLocal_16 = 1;
			break;
		case 1:
			if (iLocal_15 != -1)
			{
				__LIB_1__::func_683(&iLocal_14, 128);
			}
			switch (iLocal_15)
			{
				case 0:
					if (!__LIB_0__::func_27(iLocal_14, 16))
					{
						if (!__LIB_0__::func_27(iLocal_14, 8))
						{
							__LIB_2__::func_478(Global_35, uLocal_823[1], "RE_KR_UNI_V1_GRT_POS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_14, 8);
						}
						else
						{
							__LIB_2__::func_478(Global_35, uLocal_823[1], "RE_KR_UNI_V1_GRT_POS2", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_14, 16);
						}
						func_641();
						__LIB_1__::func_683(&iLocal_14, 256);
						iLocal_16 = 2;
					}
					break;
				case 1:
					if (!__LIB_0__::func_27(iLocal_14, 64))
					{
						if (!__LIB_0__::func_27(iLocal_14, 32))
						{
							__LIB_2__::func_478(Global_35, uLocal_823[1], "RE_KR_UNI_V1_GRT_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_14, 32);
						}
						else
						{
							__LIB_2__::func_478(Global_35, uLocal_823[1], "RE_KR_UNI_V1_GRT_NEG2", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_14, 64);
						}
						func_641();
						__LIB_1__::func_683(&iLocal_14, 256);
						iLocal_16 = 3;
					}
					break;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-3f, 1, Global_35, 1))
			{
				if (!__LIB_0__::func_27(iLocal_14, 16))
				{
					__LIB_2__::func_478(uLocal_823[1], Global_35, "RE_KR_UNI_V1_GRT_POS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_16 = 5;
				}
				else
				{
					__LIB_2__::func_478(uLocal_823[1], Global_35, "RE_KR_UNI_V1_GRT_NEG2_ATTACK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_14, 512);
					iLocal_16 = 6;
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-3f, 1, Global_35, 1))
			{
				if (!__LIB_0__::func_27(iLocal_14, 64))
				{
					__LIB_2__::func_478(uLocal_823[1], Global_35, "RE_KR_UNI_V1_GRT_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_16 = 5;
				}
				else
				{
					__LIB_2__::func_478(uLocal_823[1], Global_35, "RE_KR_UNI_V1_GRT_NEG2_ATTACK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_14, 512);
					iLocal_16 = 6;
				}
			}
			break;
		case 5:
			if (__LIB_2__::func_227(-3f, 1, uLocal_823[1], 1))
			{
				if (__LIB_0__::func_27(iLocal_14, 64) || __LIB_0__::func_27(iLocal_14, 16))
				{
					Local_43.f_46 = 1;
				}
				else
				{
					func_642();
					__LIB_1__::func_681(&iLocal_14, 128);
					iLocal_16 = 1;
				}
			}
			break;
		case 6:
			break;
	}
}

void func_518(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_770))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_770, false))
		{
			if (iParam0 == uLocal_823[0])
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_770, "pedVictim", uLocal_823[0]);
			}
			else if (iParam0 == uLocal_823[1])
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_770, "pedLeader", uLocal_823[1]);
			}
			else if (iParam0 == uLocal_823[2])
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_770, "pedCross", uLocal_823[2]);
			}
		}
	}
}

bool func_520(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_0__::func_27(iLocal_17, 1))
			{
				return true;
			}
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_17, 2))
			{
				return true;
			}
			break;
		case 2:
			if (__LIB_0__::func_27(iLocal_17, 4))
			{
				return true;
			}
			break;
		case 3:
			if (__LIB_0__::func_27(iLocal_17, 8))
			{
				return true;
			}
			break;
		case 4:
			if (__LIB_0__::func_27(iLocal_17, 16))
			{
				return true;
			}
			break;
		case 5:
			if (__LIB_0__::func_27(iLocal_17, 32))
			{
				return true;
			}
			break;
		case 6:
			if (__LIB_0__::func_27(iLocal_17, 64))
			{
				return true;
			}
			break;
		case 7:
			if (__LIB_0__::func_27(iLocal_17, 128))
			{
				return true;
			}
			break;
		case 8:
			if (__LIB_0__::func_27(iLocal_17, 256))
			{
				return true;
			}
			break;
		case 9:
			if (__LIB_0__::func_27(iLocal_17, 512))
			{
				return true;
			}
			break;
		case 10:
			if (__LIB_0__::func_27(iLocal_17, 1024))
			{
				return true;
			}
			break;
		case 11:
			if (__LIB_0__::func_27(iLocal_17, 2048))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_521(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			__LIB_1__::func_683(iParam0, 1);
			break;
		case 1:
			__LIB_1__::func_683(iParam0, 2);
			break;
		case 2:
			__LIB_1__::func_683(iParam0, 4);
			break;
		case 3:
			__LIB_1__::func_683(iParam0, 8);
			break;
		case 4:
			__LIB_1__::func_683(iParam0, 16);
			break;
		case 5:
			__LIB_1__::func_683(iParam0, 32);
			break;
		case 6:
			__LIB_1__::func_683(iParam0, 64);
			break;
		case 7:
			__LIB_1__::func_683(iParam0, 128);
			break;
		case 8:
			__LIB_1__::func_683(iParam0, 256);
			break;
		case 9:
			__LIB_1__::func_683(iParam0, 512);
			break;
		case 10:
			__LIB_1__::func_683(iParam0, 1024);
			break;
		case 11:
			__LIB_1__::func_683(iParam0, 2048);
			break;
	}
}

int func_529(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	iVar0 = __LIB_3__::func_885(&uLocal_823, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0, 1, 0, -1);
	if (iVar0 != -1)
	{
		uVar1 = uLocal_823[iVar0];
		if (__LIB_2__::func_1(uLocal_823[iVar0], 0, 1))
		{
			if (((uLocal_823[iVar0] != iParam1 && uLocal_823[iVar0] != iParam2) && uLocal_823[iVar0] != iParam3) && uLocal_823[iVar0] != iParam0)
			{
				return uVar1;
			}
		}
	}
	return 0;
}

int func_636(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_698(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_641()
{
	if (__LIB_2__::func_466(&(Local_939[0 /*17*/]), 1, 0))
	{
		__LIB_2__::func_411(&(Local_939[0 /*17*/]), 0, 0);
	}
	if (__LIB_2__::func_466(&(Local_939[1 /*17*/]), 1, 0))
	{
		__LIB_2__::func_411(&(Local_939[1 /*17*/]), 0, 0);
	}
}

void func_642()
{
	if (!__LIB_0__::func_27(iLocal_14, 16))
	{
		__LIB_2__::func_411(&(Local_939[0 /*17*/]), 1, 0);
	}
	if (!__LIB_0__::func_27(iLocal_14, 64))
	{
		__LIB_2__::func_411(&(Local_939[1 /*17*/]), 1, 0);
	}
	__LIB_2__::func_451(&iLocal_918, 0);
}

int func_698(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_698(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

