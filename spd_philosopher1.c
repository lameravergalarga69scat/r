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
	struct<274> Local_14 = { 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122377164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_288 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_14);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		if (Local_14 > 2)
		{
			__LIB_16__::func_879(20, Local_14.f_248, &(Local_14.f_146), &(Local_14.f_137), &(Local_14.f_273), 0, 1097859072 /* Float: 15f */, 0);
			func_3(&Local_14, Local_14.f_248);
			func_4(&Local_14);
			if (__LIB_16__::func_881(20, Local_14.f_146, 1, 1) && Local_14 > 2)
			{
				func_7(&Local_14, &(Local_14.f_154), func_6(2), 0, 0, 0);
			}
			else
			{
				func_8(&Local_14);
				func_9(&Local_14);
				func_10(&Local_14, &Local_14);
				__LIB_16__::func_854(Local_14.f_146, &(Local_14.f_155), 128, 20, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_146) && __LIB_0__::func_393(Global_35, Local_14.f_148, 0, 1))
				{
					CAM::_0xFC3F638BE2B6BB02();
				}
				switch (Local_14)
				{
					case 0:
						func_13(&Local_14);
						break;
					case 1:
						if (func_14(&Local_14))
						{
							__LIB_1__::func_649(&Local_14, 2);
						}
						break;
					case 2:
						func_16(&Local_14);
						break;
					case 3:
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_148, true, 0))
						{
							if (Local_14.f_270 && !__LIB_0__::func_27(Local_14.f_155, 256))
							{
								__LIB_1__::func_649(&Local_14, 4);
							}
							else
							{
								__LIB_1__::func_649(&Local_14, 6);
							}
						}
						break;
					case 4:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_146))
						{
							__LIB_1__::func_581(&(Local_14.f_155), 256);
							__LIB_2__::func_813(&(Local_14.f_1), func_20(func_19(Local_14.f_161)), 0, -1, 0, 0);
						}
						else
						{
							__LIB_1__::func_649(&Local_14, 5);
						}
						break;
					case 5:
						if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
						{
							__LIB_0__::func_268(&(Local_14.f_131), 0f);
							Local_14.f_152 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(3, 5));
							__LIB_1__::func_649(&Local_14, 8);
						}
						break;
					case 6:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_146))
						{
							__LIB_2__::func_813(&(Local_14.f_1), func_20(func_23(Local_14.f_156)), 0, -1, 0, 0);
						}
						else
						{
							Local_14.f_156 = (1 + Local_14.f_156);
							__LIB_1__::func_649(&Local_14, 7);
						}
						break;
					case 7:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_146) && Local_14.f_156 <= Local_14.f_157)
						{
							__LIB_0__::func_268(&(Local_14.f_131), 0f);
							Local_14.f_152 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(3, 5));
							__LIB_1__::func_649(&Local_14, 8);
						}
						else if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_146) && Local_14.f_156 > Local_14.f_157)
						{
							__LIB_1__::func_649(&Local_14, 9);
						}
						break;
					case 8:
						if (__LIB_0__::func_265(&(Local_14.f_131)) > Local_14.f_152)
						{
							__LIB_1__::func_649(&Local_14, 6);
						}
						break;
					case 9:
						func_25(&Local_14);
						break;
					case 10:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(0), 0, 0, 0))
						{
							__LIB_1__::func_649(&Local_14, 21);
						}
						break;
					case 11:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(1), 0, 0, 0))
						{
							__LIB_1__::func_649(&Local_14, 21);
						}
						break;
					case 21:
						func_26(&Local_14);
						break;
					case 12:
						func_27(&Local_14);
						break;
					case 13:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(5), 1, 1, 0))
						{
							__LIB_1__::func_649(&Local_14, 21);
						}
						break;
					case 14:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(6), 1, 1, 0))
						{
							__LIB_1__::func_649(&Local_14, 21);
						}
						break;
					case 15:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(7), 1, 1, 0))
						{
							__LIB_1__::func_649(&Local_14, 21);
						}
						break;
					case 16:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(8), 1, 1, 0))
						{
							__LIB_1__::func_649(&Local_14, 21);
						}
						break;
					case 17:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(9), 1, 1, 0))
						{
							__LIB_1__::func_649(&Local_14, 21);
						}
						break;
					case 26:
						func_28(&Local_14);
						break;
					case 22:
						if ((!__LIB_0__::func_27(Local_14.f_155, 2048) && !__LIB_0__::func_27(Local_14.f_155, 8192)) && !__LIB_0__::func_27(Local_14.f_155, 4096))
						{
							__LIB_1__::func_581(&(Local_14.f_155), 2048);
						}
						func_7(&Local_14, &(Local_14.f_154), func_29(Local_14.f_158), 1, 0, 0);
						if (!__LIB_0__::func_75(&(Local_14.f_140)))
						{
							__LIB_1__::func_148(&(Local_14.f_140));
						}
						if (__LIB_0__::func_27(Local_14.f_155, 8192) || __LIB_0__::func_27(Local_14.f_155, 4096))
						{
							if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
							{
								__LIB_0__::func_37(&(Local_14.f_140));
								__LIB_1__::func_649(&Local_14, 23);
							}
						}
						else if (__LIB_1__::func_313(&(Local_14.f_140), 9f))
						{
							__LIB_1__::func_993(&(Local_14.f_155), 2048);
							__LIB_1__::func_649(&Local_14, 25);
						}
						break;
					case 23:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_146))
						{
							func_35(&Local_14);
						}
						else
						{
							__LIB_1__::func_649(&Local_14, 24);
						}
						break;
					case 24:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_146))
						{
							__LIB_1__::func_649(&Local_14, 25);
						}
						break;
					case 27:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(10), 0, 0, 1) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_154, false))
						{
							Local_14.f_272 = 0;
							__LIB_1__::func_649(&Local_14, 35);
						}
						break;
					case 28:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(11), 0, 0, 1) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_154, false))
						{
							Local_14.f_272 = 0;
							__LIB_1__::func_649(&Local_14, 35);
						}
						break;
					case 29:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(12), 0, 0, 1) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_154, false))
						{
							Local_14.f_272 = 0;
							__LIB_1__::func_649(&Local_14, 35);
						}
						break;
					case 30:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(13), 0, 0, 1) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_154, false))
						{
							Local_14.f_272 = 0;
							__LIB_1__::func_649(&Local_14, 35);
						}
						break;
					case 31:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(14), 0, 0, 1) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_154, false))
						{
							Local_14.f_272 = 0;
							__LIB_1__::func_649(&Local_14, 35);
						}
						break;
					case 32:
						if (!__LIB_0__::func_27(Local_14.f_155, 512))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2729.398f, 704.7125f, 173.0246f, 2f, 20000, 0.25f, 0, -136.81f);
							__LIB_1__::func_474(Local_14.f_146, &iVar0, 0, 0, 1, 1);
							__LIB_1__::func_581(&(Local_14.f_155), 512);
						}
						else if (!__LIB_0__::func_163(Local_14.f_146, 242628503) || __LIB_0__::func_94(Local_14.f_146, -2729.398f, 704.7125f, 173.0246f, 1) <= 0.55f)
						{
							TASK::TASK_COWER(Local_14.f_146, -1, Global_35, 0);
							__LIB_1__::func_649(&Local_14, 36);
						}
						break;
					case 25:
						if (func_7(&Local_14, &(Local_14.f_154), func_6(15), 0, 0, 1))
						{
							__LIB_1__::func_993(&(Local_14.f_155), 1024);
							__LIB_1__::func_649(&Local_14, 33);
						}
						break;
					case 33:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_146))
						{
							__LIB_2__::func_813(&(Local_14.f_1), func_20(func_23(28)), 0, -1, 0, 0);
						}
						else
						{
							__LIB_1__::func_649(&Local_14, 34);
						}
						break;
					case 34:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_146))
						{
							__LIB_1__::func_649(&Local_14, 35);
						}
						break;
					case 35:
						break;
					case 36:
						if (Local_14.f_272 && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_146))
						{
							func_39(&Local_14);
						}
						else
						{
							Local_14.f_272 = 0;
							__LIB_1__::func_649(&Local_14, 37);
						}
						break;
					case 37:
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_146))
						{
							__LIB_1__::func_649(&Local_14, 35);
						}
						break;
					case 38:
						break;
					case 39:
						break;
					case 40:
						func_40(&(Local_14.f_146), 2);
						break;
					default:
						break;
				}
			}
		}
	}
}

void func_1(int iParam0)
{
	__LIB_16__::func_839(&(iParam0->f_249));
	__LIB_16__::func_840(20);
	if (__LIB_0__::func_6(iParam0->f_143))
	{
		if (iParam0->f_271)
		{
			__LIB_1__::func_532(iParam0->f_143, 1);
		}
	}
	__LIB_2__::func_480(&(iParam0->f_211), 0, 1, 1, 0);
	__LIB_2__::func_593(&(iParam0->f_190), &(iParam0->f_211));
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_146))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_146, 0f);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_146));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_147))
	{
		__LIB_1__::func_544(iParam0->f_147);
		VOLUME::_DELETE_VOLUME(iParam0->f_147);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_149))
	{
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_149);
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_149);
		VOLUME::_DELETE_VOLUME(iParam0->f_149);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_148))
	{
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_148);
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_148);
		VOLUME::_DELETE_VOLUME(iParam0->f_148);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_150))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_150);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		func_1(iParam0);
	}
	else if (!__LIB_0__::func_393(Global_35, Global_1396257[20 /*638*/][iParam1 /*48*/].f_47, 0, 1))
	{
		func_1(iParam0);
	}
	else if (__LIB_16__::func_961(20, iParam1, &(iParam0->f_249), iParam0->f_146))
	{
		func_1(iParam0);
	}
}

void func_4(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_146))
	{
		if (!__LIB_0__::func_272(iParam0->f_146, 0))
		{
			func_1(iParam0);
		}
		else if ((*iParam0 > 2 && *iParam0 < 26) || ((*iParam0 > 32 && *iParam0 < 38) && *iParam0 != 37))
		{
			if (!iParam0->f_272 && __LIB_12__::func_465(iParam0->f_146, 0, &(iParam0->f_99), &(iParam0->f_127), 0, 0))
			{
				__LIB_10__::func_238(&(iParam0->f_99), &(iParam0->f_127));
				iParam0->f_272 = 1;
				iParam0->f_271 = 1;
				AUDIO::_0x36559148B78853B3(1, 0, 0);
				__LIB_1__::func_993(&(iParam0->f_155), 1024);
				__LIB_1__::func_993(&(iParam0->f_155), 2048);
				if ((*iParam0 >= 4 && *iParam0 <= 8) || (*iParam0 >= 33 && *iParam0 <= 35))
				{
					__LIB_1__::func_649(iParam0, 36);
					return;
				}
				if ((*iParam0 >= 9 && *iParam0 <= 11) || *iParam0 == 25)
				{
					__LIB_1__::func_649(iParam0, 32);
					return;
				}
				if (*iParam0 != 36)
				{
					__LIB_1__::func_649(iParam0, 26);
				}
			}
		}
	}
}

char* func_6(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_Enter_From_Sit";
			break;
		case 1:
			sVar0 = "pbl_Enter_From_Crouch";
			break;
		case 2:
			sVar0 = "pbl_Idle_A";
			break;
		case 3:
			sVar0 = "pbl_Idle_B";
			break;
		case 4:
			sVar0 = "pbl_Idle_C";
			break;
		case 5:
			sVar0 = "pbl_SpeechA_Im_Not_The_Devil";
			break;
		case 6:
			sVar0 = "pbl_SpeechB_I_See_You_Man";
			break;
		case 7:
			sVar0 = "pbl_SpeechC_I_Dont_Want_Presents";
			break;
		case 8:
			sVar0 = "pbl_SpeechD_My_Philosophy_Is";
			break;
		case 9:
			sVar0 = "pbl_SpeechE_Nothing_Makes_Me_Long";
			break;
		case 10:
			sVar0 = "pbl_Aggro_A";
			break;
		case 11:
			sVar0 = "pbl_Aggro_B";
			break;
		case 12:
			sVar0 = "pbl_Aggro_C";
			break;
		case 13:
			sVar0 = "pbl_Aggro_D";
			break;
		case 14:
			sVar0 = "pbl_Aggro_E";
			break;
		case 15:
			sVar0 = "pbl_Walk_Exit_to_Sitting";
			break;
	}
	return sVar0;
}

bool func_7(int iParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false))
		{
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false))
		{
			if ((!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2) && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam1, sParam2)) && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam1, sParam2);
			}
			if (bParam4)
			{
				if (!__LIB_16__::func_878(&(iParam0->f_146), 0, 0))
				{
					return false;
				}
			}
			if (!ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2) && ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "Internal_Loop", bParam3, false);
				BUILTIN::WAIT(0);
				return false;
			}
			else if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				if (((ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_Idle_A", 1) || ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_Idle_B", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_Idle_C", 1)) || (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*uParam1) > 0.99f && bParam5))
				{
					if (__LIB_16__::func_863(uParam1, iParam0->f_151))
					{
						iParam0->f_151 = sParam2;
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_8(int iParam0)
{
	if (*iParam0 >= 31 || *iParam0 <= 2)
	{
		return;
	}
	__LIB_17__::func_297(&(iParam0->f_145), iParam0->f_150, &(iParam0->f_146), &(iParam0->f_165), &(iParam0->f_134), 5000);
}

void func_9(int iParam0)
{
	if (__LIB_0__::func_27(iParam0->f_155, 64))
	{
		return;
	}
	if (*iParam0 >= 4 && *iParam0 <= 17)
	{
		if (iParam0->f_162 < 2)
		{
			if (__LIB_16__::func_802(&(iParam0->f_146), 249295937))
			{
				__LIB_1__::func_581(&(iParam0->f_155), 64);
			}
		}
	}
}

void func_10(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_148, true, 0) && __LIB_0__::func_27(iParam0->f_155, 1024)) && *iParam1 < 26)
	{
		iVar0 = 0;
		iVar1 = __LIB_2__::func_340(iParam0->f_246, 10240, 0);
		if (iParam0->f_246 == 0)
		{
			iVar1 |= 1;
		}
		iVar2 = func_65(&(iParam0->f_146), &(iParam0->f_190), 15f, &(iParam0->f_211), 0f, 2, 1, iVar0, iVar1, 0, 0, 2, -1082130432 /* Float: -1f */);
		if (__LIB_0__::func_27(iParam0->f_155, 2048))
		{
			func_66(iParam0, 1);
			func_67(iParam0, 0);
			if (iVar2 != -1)
			{
				if (iVar2 == 0)
				{
					if (__LIB_0__::func_181())
					{
						if (iParam0->f_248 == 0)
						{
							__LIB_16__::func_866(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam0->f_146, 1, "JOHN_PLAYER", 1, 1);
						}
						else if (iParam0->f_248 == 1)
						{
							__LIB_16__::func_866(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam0->f_146, 1, "JOHN_PLAYER", 6, 1);
						}
						else if (iParam0->f_248 == 2)
						{
							__LIB_16__::func_866(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam0->f_146, 1, "JOHN_PLAYER", 8, 1);
						}
						else if (iParam0->f_248 == 3)
						{
							__LIB_16__::func_866(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam0->f_146, 1, "JOHN_PLAYER", 11, 1);
						}
						else if (iParam0->f_248 == 4)
						{
							__LIB_16__::func_866(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam0->f_146, 1, "JOHN_PLAYER", 18, 1);
						}
					}
					else if (iParam0->f_248 == 0)
					{
						__LIB_16__::func_866(Global_35, "INSULT_PHILOSOPHER_CONV_PART1", -417894478, iParam0->f_146, 1, 0, 1, 1);
					}
					else if (iParam0->f_248 == 1)
					{
						__LIB_16__::func_866(Global_35, "INSULT_PHILOSOPHER_CONV_PART2", -417894478, iParam0->f_146, 1, 0, 1, 1);
					}
					else if (iParam0->f_248 == 2)
					{
						__LIB_16__::func_866(Global_35, "INSULT_PHILOSOPHER_CONV_PART3", -417894478, iParam0->f_146, 1, 0, 1, 1);
					}
					else if (iParam0->f_248 == 3)
					{
						__LIB_16__::func_866(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam0->f_146, 1, "ARTHUR", 17, 1);
					}
					else if (iParam0->f_248 == 4)
					{
						__LIB_16__::func_866(Global_35, "INSULT_MALE_CONV_PART1", -417894478, iParam0->f_146, 1, "ARTHUR", 18, 1);
					}
					__LIB_1__::func_581(&(iParam0->f_155), 8192);
				}
				else if (iVar2 == 1)
				{
					__LIB_16__::func_866(Global_35, "GREET_GENERAL", -417894478, iParam0->f_146, 1, 0, 0, 1);
					__LIB_1__::func_581(&(iParam0->f_155), 4096);
				}
				__LIB_1__::func_993(&(iParam0->f_155), 2048);
				func_67(iParam0, 1);
				if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, true, 0, false))
				{
					if (!WEAPON::_IS_WEAPON_LANTERN(iVar3))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
					}
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				}
			}
		}
		else
		{
			func_66(iParam0, 0);
			func_67(iParam0, 1);
		}
	}
	else
	{
		func_66(iParam0, 0);
		__LIB_2__::func_344(&(iParam0->f_146));
		__LIB_2__::func_451(&(iParam0->f_190), 0);
		__LIB_2__::func_480(&(iParam0->f_211), 0, 0, 1, 0);
	}
}

void func_13(int iParam0)
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_154))
	{
		iParam0->f_154 = ANIMSCENE::_CREATE_ANIM_SCENE(func_76(), 2, func_6(0), false, true);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_154))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_154);
		STREAMING::REQUEST_ANIM_DICT(func_77());
		STREAMING::REQUEST_MODEL(iParam0->f_144, false);
		HUD::_TEXT_DATABASE_REQUEST("SPPICAU");
		HUD::_TEXT_DATABASE_REQUEST("SPPC");
		func_78(iParam0);
		func_79(iParam0);
		__LIB_2__::func_261(iParam0->f_147, "SP_Philosopher1_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		POPULATION::_0xB56D41A694E42E86(iParam0->f_149, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iParam0->f_149, 0, 0, 0, -1, -1, 0);
		iParam0->f_143 = func_82(20, 0, 9, func_81(20));
		if (!__LIB_0__::func_6(iParam0->f_143))
		{
		}
		iParam0->f_248 = __LIB_11__::func_133(20);
		if (iParam0->f_248 == 0)
		{
			iParam0->f_159 = 0;
			iParam0->f_160 = 0;
			iParam0->f_156 = 0;
			iParam0->f_157 = 5;
			iParam0->f_161 = 0;
		}
		else if (iParam0->f_248 == 1)
		{
			iParam0->f_159 = 1;
			iParam0->f_160 = 1;
			iParam0->f_156 = 6;
			iParam0->f_157 = 11;
			iParam0->f_161 = 1;
		}
		else if (iParam0->f_248 == 2)
		{
			iParam0->f_159 = 2;
			iParam0->f_160 = 2;
			iParam0->f_156 = 12;
			iParam0->f_157 = 17;
			iParam0->f_161 = 2;
		}
		else if (iParam0->f_248 == 3)
		{
			iParam0->f_159 = 3;
			iParam0->f_160 = 3;
			iParam0->f_156 = 18;
			iParam0->f_157 = 22;
			iParam0->f_161 = 0;
		}
		else if (iParam0->f_248 == 4)
		{
			iParam0->f_159 = 4;
			iParam0->f_160 = 4;
			iParam0->f_156 = 23;
			iParam0->f_157 = 27;
			iParam0->f_161 = 1;
		}
		iVar0 = __LIB_0__::func_895(iParam0->f_143);
		if (iVar0 != 0)
		{
			iParam0->f_270 = 1;
		}
		__LIB_17__::func_188(&(iParam0->f_249));
		__LIB_4__::func_228(&(iParam0->f_99));
		__LIB_1__::func_403(&(iParam0->f_99), 1);
		__LIB_8__::func_731(&(iParam0->f_99), 1);
		__LIB_1__::func_399(&(iParam0->f_99), 0);
		__LIB_1__::func_397(&(iParam0->f_99), 0);
		__LIB_1__::func_402(&(iParam0->f_99), 1);
		__LIB_1__::func_404(&(iParam0->f_99), 1);
		__LIB_1__::func_405(&(iParam0->f_99), 1);
		__LIB_1__::func_407(&(iParam0->f_99), 0);
		__LIB_1__::func_406(&(iParam0->f_99), 0);
		__LIB_1__::func_393(&(iParam0->f_99), 1);
		__LIB_10__::func_590(&(iParam0->f_99), 0);
		__LIB_2__::func_619(&(iParam0->f_99), 0);
		__LIB_1__::func_398(&(iParam0->f_99), 1);
		__LIB_1__::func_401(&(iParam0->f_99), 1);
		__LIB_2__::func_830(&(iParam0->f_99), 1);
		__LIB_2__::func_828(&(iParam0->f_99), 1);
		__LIB_1__::func_413(&(iParam0->f_99), 1);
		__LIB_2__::func_829(&(iParam0->f_99), 1);
		__LIB_2__::func_956(&(iParam0->f_99), 1);
		__LIB_1__::func_649(iParam0, 1);
	}
}

bool func_14(int iParam0)
{
	PED::_0xED9582B3DA8F02B4(1);
	if (((((STREAMING::HAS_MODEL_LOADED(iParam0->f_144) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_154, true, false)) && STREAMING::HAS_ANIM_DICT_LOADED(func_77())) && HUD::_TEXT_DATABASE_HAS_LOADED("SPPICAU")) && HUD::_TEXT_DATABASE_HAS_LOADED("SPPC")) && PED::_0x5C16855277819BBF() == 1)
	{
		return true;
	}
	return false;
}

void func_16(int iParam0)
{
	struct<4> Var0;
	var uVar4;
	Var0 = { func_106(0) };
	if (__LIB_16__::func_946(&(iParam0->f_146), iParam0->f_144, Var0, Var0.f_3, 1, 0, 1))
	{
		if (__LIB_0__::func_272(iParam0->f_146, 0))
		{
			__LIB_16__::func_792(iParam0->f_146, 20);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0->f_146, "special_ped_group", 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_146, true);
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam0->f_146, false);
			TASK::_0x88E32DB8C1A4AA4B(iParam0->f_146, 20f);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_146, joaat("REL_CIVMALE"));
			__LIB_2__::func_279(iParam0->f_146, 1);
			__LIB_0__::func_928(&(iParam0->f_1), iParam0->f_146, "PHILOSOPHER", 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0->f_146, Var0, Var0.f_3, true, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_154, "PHILOSOPHER", iParam0->f_146, 0);
			PED::_0xAE6004120C18DF97(iParam0->f_146, 0, 0);
			if (((iParam0->f_248 == 1 || iParam0->f_248 == 2) || iParam0->f_248 == 3) || iParam0->f_248 == 4)
			{
				PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(iParam0->f_146, &uVar4));
			}
			__LIB_1__::func_649(iParam0, 3);
		}
	}
}

int func_19(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 29;
			break;
		case 1:
			iVar0 = 30;
			break;
		case 2:
			iVar0 = 31;
			break;
		default:
			iVar0 = 29;
			break;
	}
	return iVar0;
}

Vector3 func_20(int iParam0)
{
	vector3 vVar0[24];
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "SPPIC_INTROA", 24);
			break;
		case 1:
			StringCopy(&cVar0, "SPPIC_INTROB", 24);
			break;
		case 2:
			StringCopy(&cVar0, "SPPIC_INTROC", 24);
			break;
		case 3:
			StringCopy(&cVar0, "SPPIC_INTROD", 24);
			break;
		case 4:
			StringCopy(&cVar0, "SPPIC_INTROE", 24);
			break;
		case 5:
			StringCopy(&cVar0, "SPPIC_INTROF", 24);
			break;
		case 6:
			StringCopy(&cVar0, "SPPIC_INTROG", 24);
			break;
		case 7:
			StringCopy(&cVar0, "SPPIC_INTROH", 24);
			break;
		case 8:
			StringCopy(&cVar0, "SPPIC_INTROI", 24);
			break;
		case 9:
			StringCopy(&cVar0, "SPPIC_INTROJ", 24);
			break;
		case 10:
			StringCopy(&cVar0, "SPPIC_INTROK", 24);
			break;
		case 11:
			StringCopy(&cVar0, "SPPIC_INTROL", 24);
			break;
		case 12:
			StringCopy(&cVar0, "SPPIC_INTROM", 24);
			break;
		case 13:
			StringCopy(&cVar0, "SPPIC_INTRON", 24);
			break;
		case 14:
			StringCopy(&cVar0, "SPPIC_GREETA", 24);
			break;
		case 15:
			StringCopy(&cVar0, "SPPIC_GREETB", 24);
			break;
		case 16:
			StringCopy(&cVar0, "SPPIC_GREETC", 24);
			break;
		case 17:
			StringCopy(&cVar0, "SPPIC_GREETD", 24);
			break;
		case 18:
			StringCopy(&cVar0, "SPPIC_GREETE", 24);
			break;
		case 19:
			StringCopy(&cVar0, "SPPIC_GREETF", 24);
			break;
		case 20:
			StringCopy(&cVar0, "SPPIC_GREETG", 24);
			break;
		case 21:
			StringCopy(&cVar0, "SPPIC_GREETH", 24);
			break;
		case 22:
			StringCopy(&cVar0, "SPPIC_GREETI", 24);
			break;
		case 23:
			StringCopy(&cVar0, "SPPIC_GREETJ", 24);
			break;
		case 24:
			StringCopy(&cVar0, "SPPIC_GREETK", 24);
			break;
		case 25:
			StringCopy(&cVar0, "SPPIC_GREETL", 24);
			break;
		case 26:
			StringCopy(&cVar0, "SPPIC_GREETM", 24);
			break;
		case 27:
			StringCopy(&cVar0, "SPPIC_GREETN", 24);
			break;
		case 28:
			StringCopy(&cVar0, "SPPIC_GREETO", 24);
			break;
		case 29:
			StringCopy(&cVar0, "SPPIC_SPEECHF", 24);
			break;
		case 30:
			StringCopy(&cVar0, "SPPIC_SPEECHG", 24);
			break;
		case 31:
			StringCopy(&cVar0, "SPPIC_SPEECHH", 24);
			break;
	}
	return cVar0;
}

int func_23(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 14;
			break;
		case 3:
			iVar0 = 3;
			break;
		case 4:
			iVar0 = 6;
			break;
		case 5:
			iVar0 = 19;
			break;
		case 6:
			iVar0 = 4;
			break;
		case 7:
			iVar0 = 2;
			break;
		case 8:
			iVar0 = 16;
			break;
		case 9:
			iVar0 = 15;
			break;
		case 10:
			iVar0 = 17;
			break;
		case 11:
			iVar0 = 18;
			break;
		case 12:
			iVar0 = 10;
			break;
		case 13:
			iVar0 = 12;
			break;
		case 14:
			iVar0 = 11;
			break;
		case 15:
			iVar0 = 7;
			break;
		case 16:
			iVar0 = 8;
			break;
		case 17:
			iVar0 = 27;
			break;
		case 18:
			iVar0 = 22;
			break;
		case 19:
			iVar0 = 24;
			break;
		case 20:
			iVar0 = 23;
			break;
		case 21:
			iVar0 = 21;
			break;
		case 22:
			iVar0 = 20;
			break;
		case 23:
			iVar0 = 26;
			break;
		case 24:
			iVar0 = 5;
			break;
		case 25:
			iVar0 = 13;
			break;
		case 26:
			iVar0 = 25;
			break;
		case 27:
			iVar0 = 28;
			break;
		case 28:
			iVar0 = 9;
			break;
	}
	return iVar0;
}

void func_25(int iParam0)
{
	__LIB_16__::func_981(20, __LIB_0__::func_113());
	__LIB_1__::func_581(&(Local_14.f_155), 1024);
	__LIB_1__::func_649(iParam0, 10);
}

void func_26(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_146))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (iParam0->f_159 > iParam0->f_160)
	{
		if (iParam0->f_248 == 0)
		{
			__LIB_16__::func_783(20, 1);
		}
		else if (iParam0->f_248 == 1)
		{
			__LIB_16__::func_783(20, 2);
		}
		else if (iParam0->f_248 == 2)
		{
			__LIB_16__::func_783(20, 3);
		}
		else if (iParam0->f_248 == 3)
		{
			__LIB_16__::func_783(20, 4);
		}
		else if (iParam0->f_248 == 4)
		{
			__LIB_16__::func_783(20, 12);
		}
		__LIB_16__::func_827(20);
		__LIB_1__::func_649(iParam0, 22);
		return;
	}
	if (__LIB_0__::func_48(Global_35, iParam0->f_146, 15f, 1))
	{
		__LIB_1__::func_649(iParam0, 12);
		__LIB_0__::func_37(&(iParam0->f_131));
		return;
	}
	if (!__LIB_0__::func_75(&(iParam0->f_131)))
	{
		iParam0->f_152 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(3, 5));
		__LIB_0__::func_268(&(iParam0->f_131), 0f);
		return;
	}
	else if (__LIB_0__::func_265(&(iParam0->f_131)) < iParam0->f_152)
	{
		return;
	}
	switch (iParam0->f_158)
	{
		case 0:
			if (func_7(iParam0, &(iParam0->f_154), func_6(2), 0, 0, 0))
			{
				iParam0->f_158++;
				__LIB_0__::func_37(&(iParam0->f_131));
			}
			break;
		case 1:
			if (func_7(iParam0, &(iParam0->f_154), func_6(3), 0, 0, 0))
			{
				iParam0->f_158++;
				__LIB_0__::func_37(&(iParam0->f_131));
			}
			break;
		case 2:
			if (func_7(iParam0, &(iParam0->f_154), func_6(4), 0, 0, 0))
			{
				iParam0->f_158 = 0;
				__LIB_0__::func_37(&(iParam0->f_131));
			}
			break;
		default:
			if (func_7(iParam0, &(iParam0->f_154), func_6(4), 0, 0, 0))
			{
				iParam0->f_158 = 0;
				__LIB_0__::func_37(&(iParam0->f_131));
			}
			break;
	}
}

void func_27(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_146))
	{
		return;
	}
	if (!__LIB_0__::func_75(&(iParam0->f_131)))
	{
		iParam0->f_152 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(3, 5));
		__LIB_0__::func_268(&(iParam0->f_131), 0f);
	}
	else if (__LIB_0__::func_265(&(iParam0->f_131)) < iParam0->f_152)
	{
		return;
	}
	switch (iParam0->f_159)
	{
		case 0:
			iParam0->f_159++;
			__LIB_0__::func_37(&(iParam0->f_131));
			__LIB_1__::func_649(iParam0, 13);
			break;
		case 1:
			iParam0->f_159++;
			__LIB_0__::func_37(&(iParam0->f_131));
			__LIB_1__::func_649(iParam0, 14);
			break;
		case 2:
			iParam0->f_159++;
			__LIB_0__::func_37(&(iParam0->f_131));
			__LIB_1__::func_649(iParam0, 17);
			break;
		case 3:
			iParam0->f_159++;
			__LIB_0__::func_37(&(iParam0->f_131));
			__LIB_1__::func_649(iParam0, 15);
			break;
		case 4:
			iParam0->f_159++;
			__LIB_0__::func_37(&(iParam0->f_131));
			__LIB_1__::func_649(iParam0, 16);
			break;
		case 5:
			__LIB_0__::func_37(&(iParam0->f_131));
			__LIB_1__::func_649(iParam0, 25);
			break;
	}
}

void func_28(int iParam0)
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
	{
		case 0:
			__LIB_1__::func_649(iParam0, 27);
			break;
		case 1:
			__LIB_1__::func_649(iParam0, 28);
			break;
		case 2:
			__LIB_1__::func_649(iParam0, 29);
			break;
		case 3:
			__LIB_1__::func_649(iParam0, 30);
			break;
		case 4:
			__LIB_1__::func_649(iParam0, 31);
			break;
	}
}

char[] func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_6(2);
		case 1:
			return func_6(3);
		case 2:
			return func_6(4);
		default:
			return func_6(4);
	}
	return func_6(4);
}

void func_35(int iParam0)
{
	if (iParam0->f_248 == 0)
	{
		if (__LIB_0__::func_27(Local_14.f_155, 4096))
		{
			if (__LIB_0__::func_181())
			{
				__LIB_16__::func_866(iParam0->f_146, "GREET_PLAYER_JOHN_FIRST_TIME", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			}
			else
			{
				__LIB_16__::func_866(iParam0->f_146, "GREET_PLAYER_ARTHUR_FIRST_TIME", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			}
		}
		else if (__LIB_0__::func_27(Local_14.f_155, 8192))
		{
			__LIB_16__::func_866(iParam0->f_146, "GENERIC_MOCK", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
		}
	}
	else if (iParam0->f_248 == 1)
	{
		if (__LIB_0__::func_27(Local_14.f_155, 4096))
		{
			if (__LIB_0__::func_181())
			{
				__LIB_16__::func_866(iParam0->f_146, "GREET_PLAYER_JOHN", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			}
			else
			{
				__LIB_16__::func_866(iParam0->f_146, "GREET_PLAYER_ARTHUR", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			}
		}
		else if (__LIB_0__::func_27(Local_14.f_155, 8192))
		{
			__LIB_16__::func_866(iParam0->f_146, "HEY_IM_TALKING", 1744022339, Global_35, 1, "PHILOSOPHER", 2, 1);
		}
	}
	else if (iParam0->f_248 == 2)
	{
		if (__LIB_0__::func_27(Local_14.f_155, 4096))
		{
			if (__LIB_0__::func_181())
			{
				__LIB_16__::func_866(iParam0->f_146, "GREET_PLAYER_JOHN", 1744022339, Global_35, 1, "PHILOSOPHER", 2, 1);
			}
			else
			{
				__LIB_16__::func_866(iParam0->f_146, "GREET_PLAYER_ARTHUR", 1744022339, Global_35, 1, "PHILOSOPHER", 2, 1);
			}
		}
		else if (__LIB_0__::func_27(Local_14.f_155, 8192))
		{
			__LIB_16__::func_866(iParam0->f_146, "PLAYER_STILL_HANGING", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
		}
	}
	else if (iParam0->f_248 == 3)
	{
		if (__LIB_0__::func_27(Local_14.f_155, 4096))
		{
			if (__LIB_0__::func_181())
			{
				__LIB_16__::func_866(iParam0->f_146, "GREET_PLAYER_JOHN", 1744022339, Global_35, 1, "PHILOSOPHER", 3, 1);
			}
			else
			{
				__LIB_16__::func_866(iParam0->f_146, "GREET_PLAYER_ARTHUR", 1744022339, Global_35, 1, "PHILOSOPHER", 3, 1);
			}
		}
		else if (__LIB_0__::func_27(Local_14.f_155, 8192))
		{
			__LIB_16__::func_866(iParam0->f_146, "GENERIC_GOODBYE", 1744022339, Global_35, 1, "PHILOSOPHER", 2, 1);
		}
	}
	else if (iParam0->f_248 == 4)
	{
		if (__LIB_0__::func_27(Local_14.f_155, 4096))
		{
			__LIB_16__::func_866(iParam0->f_146, "HOWS_IT_GOING", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
		}
		else if (__LIB_0__::func_27(Local_14.f_155, 8192))
		{
			__LIB_16__::func_866(iParam0->f_146, "GENERIC_SHOCKED_DISBELIEF", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
		}
	}
}

void func_39(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_9__::func_844(0, 10, iParam0->f_274);
	iVar0 = __LIB_0__::func_309(iVar0, 0, 9);
	iParam0->f_274 = iVar0;
	switch (iParam0->f_274)
	{
		case 0:
			__LIB_16__::func_866(iParam0->f_146, "STOP_THAT", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 1:
			__LIB_16__::func_866(iParam0->f_146, "CUT_THAT_OUT", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 2:
			__LIB_16__::func_866(iParam0->f_146, "GENERIC_SHOCKED_DISBELIEF", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 3:
			__LIB_16__::func_866(iParam0->f_146, "GENERIC_SHOCKED_DISBELIEF", 1744022339, Global_35, 1, "PHILOSOPHER", 2, 1);
			break;
		case 4:
			__LIB_16__::func_866(iParam0->f_146, "VICTIMIZED_REACT", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 5:
			__LIB_16__::func_866(iParam0->f_146, "GENERIC_INSULT_MED_NEUTRAL", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 6:
			__LIB_16__::func_866(iParam0->f_146, "GENERIC_INSULT_HIGH_MALE", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 7:
			__LIB_16__::func_866(iParam0->f_146, "GENERIC_INSULT_HIGH_NEUTRAL", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 8:
			__LIB_16__::func_866(iParam0->f_146, "GENERIC_CURSE_MED", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
		case 9:
			__LIB_16__::func_866(iParam0->f_146, "GENERIC_CURSE_HIGH", 1744022339, Global_35, 1, "PHILOSOPHER", 1, 1);
			break;
	}
}

void func_40(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	if (__LIB_0__::func_163(*uParam0, 242628503))
	{
		return;
	}
	vVar1 = { func_106(iParam1) };
	TASK::CLEAR_PED_TASKS(*uParam0, true, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar1, 1f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
	TASK::TASK_COWER(0, -1, Global_35, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	PED::SET_PED_KEEP_TASK(*uParam0, true);
}

int func_65(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_4__::func_231(*uParam0, iParam1, uParam3))
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
						return func_65(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_66(int iParam0, bool bParam1)
{
	__LIB_2__::func_411(&(iParam0->f_211[0 /*17*/]), bParam1, 0);
	__LIB_2__::func_411(&(iParam0->f_211[1 /*17*/]), bParam1, 0);
}

void func_67(int iParam0, bool bParam1)
{
	if (bParam1 && !iParam0->f_247)
	{
		iParam0->f_246 = 3;
		iParam0->f_247 = bParam1;
		__LIB_2__::func_451(&(iParam0->f_190), 0);
	}
	else if (!bParam1 && iParam0->f_247)
	{
		iParam0->f_246 = 0;
		iParam0->f_247 = bParam1;
		__LIB_2__::func_451(&(iParam0->f_190), 0);
	}
}

char* func_76()
{
	return "script@specialped@pdpic_philosopher_in_cave@ig@ig1@pdpic_ig1";
}

char* func_77()
{
	return "script_special_ped@pdpic_philosopher_in_cave@ig@ig1";
}

void func_78(int iParam0)
{
	struct<11> Var0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_147))
	{
		Var0 = { func_194(0) };
		iParam0->f_147 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_148))
	{
		Var0 = { func_194(1) };
		iParam0->f_148 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_149))
	{
		Var0 = { func_194(2) };
		iParam0->f_149 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_150))
	{
		Var0 = { func_194(3) };
		iParam0->f_150 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
}

void func_79(int iParam0)
{
	struct<2> Var0;
	Var0 = { func_195(0) };
	__LIB_16__::func_872(&(iParam0->f_211[0 /*17*/]), Var0, "", Var0.f_1, 0, 0, 0, 1, 0);
	__LIB_1__::func_471(&(iParam0->f_211[0 /*17*/]), 10);
	Var0 = { func_195(1) };
	__LIB_16__::func_872(&(iParam0->f_211[1 /*17*/]), Var0, "", Var0.f_1, 0, 0, 0, 1, 0);
	__LIB_1__::func_471(&(iParam0->f_211[1 /*17*/]), 10);
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
			return 813446076;
			return joaat("SPID_BLIND_MAN_CASSIDY");
			return -161610929;
			return 419383665;
			return 1809158435;
			return 698747486;
			return 399829678;
			return -1767525506;
			return 1533318556;
			return 846763582;
			return 974338564;
			return 860809165;
			return -1682386507;
			return 420952075;
			return 1340251064;
			return -1417023286;
			return 237608522;
			return 1487910336;
			return 129290505;
			return 1231488843;
			return -499580940;
			return 1953535365;
			return -315419568;
			return -1708806962;
			return 1405526353;
			return -1903564707;
			return -1132839335;
			return 0;
		}
int func_82(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= __LIB_0__::func_388())
	{
		iVar2 = __LIB_0__::func_388();
	}
	iVar5 = __LIB_0__::func_389(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (__LIB_0__::func_9(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (__LIB_0__::func_9(iVar6) == 0)
			{
				return __LIB_1__::func_239(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (__LIB_0__::func_9(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (__LIB_0__::func_9(iVar6) == 0)
			{
				return __LIB_1__::func_239(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_498[iVar0 /*2*/] == 0)
			{
				return __LIB_1__::func_239(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

struct<4> func_106(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { -2729.008f, 707.4378f, 173.027f };
			Var0.f_3 = 359.6814f;
			break;
		case 1:
			Var0 = { -2723.125f, 721.2363f, 170.1186f };
			Var0.f_3 = 165.3186f;
			break;
		case 2:
			Var0 = { -2729.008f, 707.4378f, 173.027f };
			Var0.f_3 = 0f;
			break;
		case 3:
			Var0 = { -2718.497f, 701.6826f, 175.8392f };
			Var0.f_3 = 0f;
			break;
	}
	return Var0;
}

struct<11> func_194(int iParam0)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -2725.277f, 709.9713f, 173.0266f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 40f, 40f, 40f };
			Var0.f_10 = "RandomEventBlock";
			break;
		case 1:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -2723.835f, 716.816f, 170.667f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 6f, 10f, 3f };
			Var0.f_10 = "Trigger";
			break;
		case 2:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -2725.277f, 709.9713f, 173.0266f };
			Var0.f_4 = { 0f, 0f, 65f };
			Var0.f_7 = { 2f, 2f, 10f };
			Var0.f_10 = "StayAway";
			break;
		case 3:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -2725.277f, 709.9713f, 173.0266f };
			Var0.f_4 = { 0f, 0f, 155f };
			Var0.f_7 = { 6f, 8f, 6f };
			Var0.f_10 = "LookIKVolume";
			break;
	}
	return Var0;
}

struct<2> func_195(int iParam0)
{
	struct<2> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = "PC_UC_NEG";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 1:
			Var0 = "PC_UC_POS";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
	}
	return Var0;
}

