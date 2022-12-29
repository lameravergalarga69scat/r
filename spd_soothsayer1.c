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
	struct<321> Local_15 = { 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1372065533, 1597746576, -208228129, 480074467, 0, 0, 0, 0, 1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 4, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 493038497, 0, 0, 1, 1, 0, 0 } ;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_15);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		if (__LIB_16__::func_881(23, Local_15.f_160[0], 1, 1) && iLocal_14 > 2)
		{
			func_4(&Local_15, &(Local_15.f_177), func_3(55), 0, 0);
		}
		else
		{
			__LIB_16__::func_879(23, func_5(), &(Local_15.f_160[0]), &(Local_15.f_139), &(Local_15.f_172), 0, 1097859072 /* Float: 15f */, 0);
			func_7(&Local_15, 0);
			func_8(&Local_15, &iLocal_14);
			func_9(&Local_15, &iLocal_14);
			func_10(&Local_15, &iLocal_14);
			func_11(&Local_15);
			__LIB_16__::func_854(Local_15.f_160[0], &(Local_15.f_179), 1024, 23, 0);
			if (__LIB_0__::func_272(Local_15.f_160[0], 0))
			{
				Local_15.f_190 = func_15(&(Local_15.f_160[0]), &(Local_15.f_222), 15f, &(Local_15.f_243), 0f, 2, 0, "", __LIB_2__::func_340(Local_15.f_320, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */);
			}
			switch (iLocal_14)
			{
				case 0:
					func_16(&Local_15, &iLocal_14);
					break;
				case 1:
					if (func_17(&Local_15))
					{
						func_18(&Local_15, &iLocal_14, 2);
					}
					break;
				case 2:
					func_19(&Local_15, &iLocal_14);
					break;
				case 3:
					func_20(&Local_15, &iLocal_14);
					break;
				case 4:
					func_21(&Local_15, &iLocal_14);
					break;
				case 5:
					func_22(&Local_15, &iLocal_14);
					break;
				case 6:
					func_23(&Local_15, &iLocal_14);
					break;
				case 7:
					func_24(&Local_15, &iLocal_14);
					break;
				case 8:
					func_25(&Local_15, &iLocal_14);
					break;
				case 9:
					func_26(&Local_15, &iLocal_14);
					break;
				case 12:
					__LIB_16__::func_849(23, &(Local_15.f_160[0]), &(Local_15.f_179), 4);
					if (__LIB_11__::func_133(23) == 0)
					{
						if (Local_15.f_196 >= 10)
						{
						}
					}
					else if (__LIB_11__::func_133(23) != 1)
					{
					}
					else if (Local_15.f_196 >= 15)
					{
					}
					func_1(&Local_15);
					break;
				case 10:
					func_29(&Local_15, &iLocal_14);
					break;
				case 11:
					break;
				default:
					break;
			}
		}
	}
}

void func_1(var uParam0)
{
	__LIB_16__::func_840(23);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SoothsayerBubble");
	__LIB_2__::func_480(&(uParam0->f_243), 0, 1, 1, 0);
	__LIB_2__::func_593(&(uParam0->f_222), &(uParam0->f_243));
	__LIB_16__::func_803(&(uParam0->f_160[0]), &(uParam0->f_188), joaat("EVENT_SHOCKING_BEAT_INTERESTING"), 25f, 1);
	if (__LIB_0__::func_27(uParam0->f_179, 16))
	{
		uParam0->f_196++;
	}
	__LIB_1__::func_532(uParam0->f_151, ((BUILTIN::SHIFT_LEFT(uParam0->f_196, 24) || BUILTIN::SHIFT_LEFT(uParam0->f_195, 16)) || BUILTIN::SHIFT_LEFT(uParam0->f_194, 8)));
	__LIB_7__::func_448(uParam0->f_151, ((BUILTIN::SHIFT_LEFT(uParam0->f_191, 24) || BUILTIN::SHIFT_LEFT(uParam0->f_193, 16)) || BUILTIN::SHIFT_LEFT(uParam0->f_192, 8)));
	if (__LIB_11__::func_133(23) == 0)
	{
		if (uParam0->f_196 >= 10)
		{
			__LIB_16__::func_783(23, 1);
		}
	}
	else if (__LIB_11__::func_133(23) == 1)
	{
		if (uParam0->f_196 >= 15)
		{
			__LIB_16__::func_783(23, 12);
		}
	}
	if (__LIB_0__::func_27(uParam0->f_179, 4096))
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	if (__LIB_1__::func_565(&(uParam0->f_321)))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_321), 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_160[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_160[0], false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 130, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 315, false);
		__LIB_16__::func_804(uParam0->f_160[0]);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_160[0], 0f);
		PED::_0x39A2FC5AF55A52B1(uParam0->f_160[0], -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_160[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_162[1]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_162[1]));
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_177))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_177);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_178))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_178);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_166))
	{
		__LIB_1__::func_544(uParam0->f_166);
		VOLUME::_DELETE_VOLUME(uParam0->f_166);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_168))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_168);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_168);
		VOLUME::_DELETE_VOLUME(uParam0->f_168);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_167))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_167);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_167);
		VOLUME::_DELETE_VOLUME(uParam0->f_167);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_169))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_169);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[23 /*638*/][func_5() /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[23 /*638*/][func_5() /*48*/].f_47);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_157))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_157);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_158))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_158);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_156))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_156);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_159))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_159);
	}
	__LIB_16__::func_832(0);
	__LIB_16__::func_839(&(uParam0->f_322));
	SCRIPTS::TERMINATE_THIS_THREAD();
}

char[] func_3(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_Arthur_Speech_A";
			break;
		case 1:
			sVar0 = "pbl_Arthur_Speech_B";
			break;
		case 2:
			sVar0 = "pbl_Arthur_Speech_C";
			break;
		case 3:
			sVar0 = "pbl_Arthur_Speech_D";
			break;
		case 4:
			sVar0 = "pbl_Arthur_Speech_E";
			break;
		case 5:
			sVar0 = "pbl_Arthur_Speech_F";
			break;
		case 6:
			sVar0 = "pbl_Arthur_Speech_G";
			break;
		case 7:
			sVar0 = "pbl_Arthur_Speech_H";
			break;
		case 8:
			sVar0 = "pbl_Arthur_Speech_I";
			break;
		case 9:
			sVar0 = "pbl_Arthur_Speech_J";
			break;
		case 10:
			sVar0 = "pbl_Marston_Speech_A";
			break;
		case 11:
			sVar0 = "pbl_Marston_Speech_B";
			break;
		case 12:
			sVar0 = "pbl_Marston_Speech_C";
			break;
		case 13:
			sVar0 = "pbl_Marston_Speech_D";
			break;
		case 14:
			sVar0 = "pbl_Marston_Speech_E";
			break;
		case 15:
			sVar0 = "pbl_Speech_A_Even_The_Gods_Die";
			break;
		case 16:
			sVar0 = "pbl_Speech_B_Come_Speak_With_Me";
			break;
		case 17:
			sVar0 = "pbl_Speech_C_Come_To_Me";
			break;
		case 18:
			sVar0 = "pbl_Speech_D_Ive_Got_The_Truth";
			break;
		case 19:
			sVar0 = "pbl_Speech_E_I_Can_See_Far";
			break;
		case 20:
			sVar0 = "pbl_Speech_F_I_Have_The_Sight";
			break;
		case 21:
			sVar0 = "pbl_Callover_A_Speak_Whole_Truth";
			break;
		case 22:
			sVar0 = "pbl_Callover_B_Come_For_I_Can_See";
			break;
		case 23:
			sVar0 = "pbl_Callover_C_Come_Near_Come_Come";
			break;
		case 24:
			sVar0 = "pbl_Callover_D_See_Things_Clearly";
			break;
		case 25:
			sVar0 = "pbl_Callover_E_Dont_Just_Stare";
			break;
		case 26:
			sVar0 = "pbl_Callover_F_You_Stare_At_Me";
			break;
		case 27:
			sVar0 = "pbl_Dismount_A_Come_Here_My_Friend";
			break;
		case 28:
			sVar0 = "pbl_Dismount_B_Come_Here";
			break;
		case 29:
			sVar0 = "pbl_Dismount_C_Come_Towards_Me_Now";
			break;
		case 30:
			sVar0 = "pbl_Dismount_D_My_Friend_You_Live";
			break;
		case 31:
			sVar0 = "pbl_Dismount_E_Youre_Still_Alive";
			break;
		case 32:
			sVar0 = "pbl_Dismount_F_I_Remember_You";
			break;
		case 42:
			sVar0 = "pbl_Farewell_A_Travel_Safe";
			break;
		case 43:
			sVar0 = "pbl_Farewell_B_Good_Luck_To_You";
			break;
		case 44:
			sVar0 = "pbl_Farewell_C_Now_Be_On_Your_Way";
			break;
		case 45:
			sVar0 = "pbl_Farewell_D_Go_And_Be_Strong";
			break;
		case 46:
			sVar0 = "pbl_Farewell_E_That_Is_All_I_Have";
			break;
		case 47:
			sVar0 = "pbl_Farewell_F_Use_That_As_You_May";
			break;
		case 48:
			sVar0 = "pbl_Farewell_G_Go_Face_Your_Future";
			break;
		case 49:
			sVar0 = "pbl_Farewell_H_No_Go_Time_Precious";
			break;
		case 41:
			sVar0 = "PL_HANDOVER";
			break;
		case 55:
			sVar0 = "pbl_Base_Idle";
			break;
		case 56:
			sVar0 = "pbl_Idle_01";
			break;
		case 57:
			sVar0 = "pbl_Idle_02";
			break;
		case 58:
			sVar0 = "pbl_Idle_03";
			break;
		case 59:
			sVar0 = "pbl_Idle_Enter";
			break;
		case 60:
			sVar0 = "pbl_Idle_Exit";
			break;
		case 33:
			sVar0 = "pbl_Do_You_Want_To_Hear_Your_Future";
			break;
		case 34:
			sVar0 = "pbl_Coin_to_Know_Your_Fate";
			break;
		case 35:
			sVar0 = "pbl_Like_to_Know_Whats_In_Store";
			break;
		case 36:
			sVar0 = "pbl_Look_Into_The_Shadows_Ahead";
			break;
		case 37:
			sVar0 = "pbl_Show_Clarity_Show_Your_Future";
			break;
		case 38:
			sVar0 = "pbl_I_Will_Tell_Your_Future";
			break;
		case 39:
			sVar0 = "pbl_Give_and_Receive_Your_Fate";
			break;
		case 40:
			sVar0 = "pbl_I_Dont_See_Too_Well";
			break;
		case 50:
			sVar0 = "pbl_Aggro_A_You_Bully_The_Weak";
			break;
		case 51:
			sVar0 = "pbl_Aggro_B_Fate_Shall_Be_Deserved";
			break;
		case 52:
			sVar0 = "pbl_Aggro_C_One_Day_Sick_And_Weak";
			break;
		case 53:
			sVar0 = "pbl_Aggro_D_Youre_Doomed_Already";
			break;
		case 54:
			sVar0 = "pbl_Aggro_E_Deserve_What_You_Get";
			break;
	}
	return sVar0;
}

bool func_4(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4)
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
				if (!__LIB_16__::func_878(&(uParam0->f_160[0]), 50f, 0))
				{
					return false;
				}
			}
			if (!ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2) && ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "Internal_Loop", bParam3, false);
				return false;
			}
			else if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_base", 1) || ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_Base", 1))
				{
					if (__LIB_16__::func_863(uParam1, uParam0->f_175))
					{
						uParam0->f_175 = sParam2;
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_5()
{
	int iVar0;
	if (__LIB_0__::func_181())
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_7(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		func_1(uParam0);
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1396257[23 /*638*/][func_5() /*48*/].f_47, true, 0))
	{
		if (!__LIB_0__::func_75(&(uParam0->f_130)))
		{
			__LIB_1__::func_283(&(uParam0->f_130), 0);
		}
		else if (__LIB_0__::func_265(&(uParam0->f_130)) > 10f)
		{
			__LIB_0__::func_37(&(uParam0->f_130));
			func_1(uParam0);
		}
	}
	else if (func_59(23, iParam1, &(uParam0->f_322), uParam0->f_160[0]))
	{
		uParam0->f_174 = 1;
		if (__LIB_16__::func_809(&(uParam0->f_322)) || __LIB_0__::func_27(uParam0->f_322, 8))
		{
			func_1(uParam0);
		}
	}
	if (uParam0->f_174)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_160[0], "script_special_ped@pdshr_soothsayer@ig@ig1_idle_and_aggro", "base_idle_soothsayer", 1))
		{
			if (__LIB_16__::func_894(&(uParam0->f_322)))
			{
				if ((VOLUME::_DOES_VOLUME_EXIST(uParam0->f_166) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_166, true, 0)) && !ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_160[0]))
				{
					func_1(uParam0);
				}
			}
		}
	}
}

void func_8(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		if (!__LIB_0__::func_272(uParam0->f_160[0], 0))
		{
			func_1(uParam0);
		}
		else if ((*iParam1 >= 3 && *iParam1 <= 9) && __LIB_12__::func_465(uParam0->f_160[0], 0, &(uParam0->f_98), &(uParam0->f_126), 0, 0))
		{
			if (!__LIB_0__::func_27(uParam0->f_179, 128))
			{
				__LIB_1__::func_581(&(uParam0->f_179), 128);
				__LIB_0__::func_854(uParam0->f_160[0], 0.2f, 0);
				func_18(uParam0, iParam1, 10);
			}
		}
	}
}

void func_9(var uParam0, int iParam1)
{
	if (*iParam1 >= 10 || *iParam1 <= 2)
	{
		return;
	}
	__LIB_16__::func_862(&(uParam0->f_156), uParam0->f_169, &(uParam0->f_160[0]), &(uParam0->f_197), &(uParam0->f_136), 5000);
}

void func_10(var uParam0, int iParam1)
{
	if (__LIB_0__::func_27(uParam0->f_179, 64) && uParam0->f_187 >= 3)
	{
		return;
	}
	if (*iParam1 >= 3 && *iParam1 <= 9)
	{
		if (__LIB_16__::func_867(&(uParam0->f_160[0]), &(uParam0->f_171), &(uParam0->f_142), &(uParam0->f_187), 3, 0, 7000, 0))
		{
			__LIB_1__::func_581(&(uParam0->f_179), 64);
		}
	}
}

void func_11(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_179, 4))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_167))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!__LIB_0__::func_27(uParam0->f_179, 2))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_167, true, 0))
		{
			__LIB_1__::func_581(&(uParam0->f_179), 2);
		}
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_167, true, 0))
	{
		__LIB_2__::func_451(&(uParam0->f_222), 0);
		__LIB_1__::func_993(&(uParam0->f_179), 2);
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_167, true, 0))
	{
		if (__LIB_0__::func_27(uParam0->f_179, 4))
		{
			if (__LIB_2__::func_466(&(uParam0->f_243[0 /*17*/]), 1, 0))
			{
				__LIB_2__::func_411(&(uParam0->f_243[0 /*17*/]), 0, 0);
			}
			if (!__LIB_0__::func_27(uParam0->f_179, 524288))
			{
				uParam0->f_320 = 3;
				__LIB_2__::func_451(&(uParam0->f_222), 0);
				__LIB_1__::func_581(&(uParam0->f_179), 524288);
			}
		}
		else if (__LIB_0__::func_27(uParam0->f_179, 8))
		{
			if (!__LIB_0__::func_27(uParam0->f_179, 262144))
			{
				__LIB_3__::func_968(&(uParam0->f_243[0 /*17*/]), "SPSS_UC_TALK", 200);
				__LIB_1__::func_581(&(uParam0->f_179), 262144);
			}
			if (((__LIB_16__::func_871() || PED::IS_PED_ON_MOUNT(Global_35)) || __LIB_17__::func_155(&(uParam0->f_160[0]), &(uParam0->f_157), 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */)) || __LIB_17__::func_174(&(uParam0->f_160[0]), &(uParam0->f_158), 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */))
			{
				if (__LIB_2__::func_466(&(uParam0->f_243[0 /*17*/]), 1, 0))
				{
					__LIB_2__::func_411(&(uParam0->f_243[0 /*17*/]), 0, 0);
				}
				return;
			}
			if (__LIB_0__::func_492(1) < 200)
			{
				if (__LIB_2__::func_466(&(uParam0->f_243[0 /*17*/]), 1, 0))
				{
					__LIB_2__::func_411(&(uParam0->f_243[0 /*17*/]), 0, 0);
				}
				if (!__LIB_0__::func_27(uParam0->f_179, 524288))
				{
					uParam0->f_320 = 3;
					__LIB_2__::func_451(&(uParam0->f_222), 0);
					__LIB_1__::func_581(&(uParam0->f_179), 524288);
				}
			}
			else
			{
				if (!__LIB_2__::func_466(&(uParam0->f_243[0 /*17*/]), 1, 0))
				{
					__LIB_2__::func_411(&(uParam0->f_243[0 /*17*/]), 1, 0);
				}
				if (__LIB_0__::func_27(uParam0->f_179, 524288))
				{
					uParam0->f_320 = 2;
					__LIB_2__::func_451(&(uParam0->f_222), 0);
					__LIB_1__::func_993(&(uParam0->f_179), 524288);
				}
			}
		}
	}
	else
	{
		if (__LIB_2__::func_466(&(uParam0->f_243[0 /*17*/]), 1, 0))
		{
			__LIB_2__::func_411(&(uParam0->f_243[0 /*17*/]), 0, 0);
		}
		if (!__LIB_0__::func_27(uParam0->f_179, 524288))
		{
			uParam0->f_320 = 3;
			__LIB_2__::func_451(&(uParam0->f_222), 0);
			__LIB_1__::func_581(&(uParam0->f_179), 524288);
		}
	}
	switch (uParam0->f_190)
	{
		case 0:
			if (__LIB_0__::func_492(1) >= 200 && !__LIB_0__::func_27(uParam0->f_179, 4))
			{
				__LIB_2__::func_411(&(uParam0->f_243[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(uParam0->f_243[1 /*17*/]), 0, 0);
				__LIB_2__::func_320(uParam0->f_160[0], MISC::GET_RANDOM_INT_IN_RANGE(200, 400));
				__LIB_16__::func_849(23, &(uParam0->f_160[0]), &(uParam0->f_179), 512);
				__LIB_16__::func_880();
				__LIB_1__::func_993(&(uParam0->f_179), 262144);
				__LIB_1__::func_581(&(uParam0->f_179), 4);
			}
			break;
	}
}

int func_15(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		__LIB_11__::func_839(&iParam8);
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
		if (__LIB_13__::func_384(*uParam0, iParam1, uParam3))
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
						return func_15(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
				if (__LIB_11__::func_844(uParam0, iParam1, fParam4, bVar6))
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
				if (__LIB_11__::func_844(uParam0, iParam1, fParam4, bVar6))
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

void func_16(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_177))
	{
		uParam0->f_177 = ANIMSCENE::_CREATE_ANIM_SCENE(func_100(), 64, func_3(55), false, true);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_178))
	{
		uParam0->f_178 = ANIMSCENE::_CREATE_ANIM_SCENE(func_101(), 96, func_3(33), false, true);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_177) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_178))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_177);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_178);
		STREAMING::REQUEST_MODEL(uParam0->f_152, false);
		STREAMING::REQUEST_MODEL(uParam0->f_153, false);
		STREAMING::REQUEST_MODEL(uParam0->f_154, false);
		STREAMING::REQUEST_MODEL(uParam0->f_155, false);
		HUD::_TEXT_DATABASE_REQUEST("SPSS");
		HUD::_TEXT_DATABASE_REQUEST("SPSHRAU");
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Global_1396257[23 /*638*/][func_5() /*48*/].f_47), 1784.089f, -946.648f, 40.7225f, true) < 10f)
		{
			__LIB_1__::func_581(&(uParam0->f_179), 8388608);
		}
		func_102(uParam0);
		__LIB_2__::func_261(uParam0->f_166, "SP_SOOTHSAYER_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		POPULATION::_0xB56D41A694E42E86(uParam0->f_168, 2500607, 0, 0, -1, -1, 10);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_168, 0, 0, 0, -1, -1, 0);
		iVar0 = __LIB_2__::func_954();
		if (iVar0 == joaat("MISTY") || iVar0 == joaat("FOG"))
		{
			if (!__LIB_0__::func_27(uParam0->f_179, 4096))
			{
				MISC::_SET_WEATHER_TYPE(iVar0, false, true, false, 0f, false);
				__LIB_1__::func_581(&(uParam0->f_179), 4096);
			}
		}
		uParam0->f_151 = __LIB_1__::func_293(23, func_5(), 9, __LIB_16__::func_790(23));
		if (!__LIB_0__::func_6(uParam0->f_151))
		{
		}
		iVar1 = __LIB_0__::func_895(uParam0->f_151);
		uParam0->f_196 = BUILTIN::SHIFT_RIGHT(iVar1, 24) & 255;
		uParam0->f_195 = BUILTIN::SHIFT_RIGHT(iVar1, 16) & 255;
		uParam0->f_194 = BUILTIN::SHIFT_RIGHT(iVar1, 8) & 255;
		iVar1 = __LIB_5__::func_297(uParam0->f_151);
		uParam0->f_191 = BUILTIN::SHIFT_RIGHT(iVar1, 24) & 255;
		uParam0->f_193 = BUILTIN::SHIFT_RIGHT(iVar1, 16) & 255;
		uParam0->f_192 = BUILTIN::SHIFT_RIGHT(iVar1, 8) & 255;
		if (__LIB_0__::func_181())
		{
			if (uParam0->f_196 < 10)
			{
				uParam0->f_196 = 10;
			}
		}
		if (__LIB_0__::func_181())
		{
			__LIB_0__::func_928(uParam0, Global_35, "JOHN", 0);
		}
		else
		{
			__LIB_0__::func_928(uParam0, Global_35, "ARTHUR", 0);
		}
		uParam0->f_322.f_1 = 1;
		uParam0->f_322.f_2 = 1;
		uParam0->f_322.f_4 = 1;
		uParam0->f_322.f_5 = 1;
		uParam0->f_322.f_6 = 1;
		uParam0->f_322.f_7 = 1;
		uParam0->f_322.f_8 = 0;
		uParam0->f_322.f_9 = 1;
		uParam0->f_322.f_10 = 1;
		uParam0->f_322.f_11 = 1.75f;
		uParam0->f_322.f_12 = 2.25f;
		uParam0->f_322.f_16 = 45000;
		__LIB_4__::func_228(&(uParam0->f_98));
		__LIB_1__::func_403(&(uParam0->f_98), 1);
		__LIB_1__::func_399(&(uParam0->f_98), 0);
		__LIB_1__::func_397(&(uParam0->f_98), 0);
		__LIB_1__::func_402(&(uParam0->f_98), 0);
		__LIB_1__::func_404(&(uParam0->f_98), 1);
		__LIB_1__::func_405(&(uParam0->f_98), 1);
		__LIB_1__::func_407(&(uParam0->f_98), 0);
		__LIB_1__::func_406(&(uParam0->f_98), 1);
		__LIB_1__::func_393(&(uParam0->f_98), 1);
		__LIB_10__::func_590(&(uParam0->f_98), 0);
		__LIB_2__::func_619(&(uParam0->f_98), 0);
		__LIB_1__::func_398(&(uParam0->f_98), 1);
		__LIB_1__::func_401(&(uParam0->f_98), 1);
		__LIB_2__::func_830(&(uParam0->f_98), 1);
		__LIB_2__::func_828(&(uParam0->f_98), 1);
		__LIB_1__::func_413(&(uParam0->f_98), 1);
		__LIB_2__::func_829(&(uParam0->f_98), 1);
		__LIB_2__::func_956(&(uParam0->f_98), 1);
		if (__LIB_0__::func_6(uParam0->f_151))
		{
			func_18(uParam0, iParam1, 1);
		}
	}
}

bool func_17(var uParam0)
{
	PED::_0xED9582B3DA8F02B4(1);
	if ((((((((STREAMING::HAS_MODEL_LOADED(uParam0->f_152) && STREAMING::HAS_MODEL_LOADED(uParam0->f_153)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_154)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_155)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_177, true, false)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_178, true, false)) && HUD::_TEXT_DATABASE_HAS_LOADED("SPSHRAU")) && HUD::_TEXT_DATABASE_HAS_LOADED("SPSS")) && PED::_0x5C16855277819BBF() == 1)
	{
		return true;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_152))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_153))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_154))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_155))
	{
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_177, true, false))
	{
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_178, true, false))
	{
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SPSHRAU"))
	{
	}
	if (PED::_0x5C16855277819BBF() != 1)
	{
	}
	return false;
}

void func_18(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 4:
			uParam0->f_181 = uParam0->f_191;
			break;
		case 5:
			uParam0->f_183 = uParam0->f_193;
			uParam0->f_182 = uParam0->f_192;
			__LIB_1__::func_581(&(uParam0->f_179), 131072);
			break;
		case 6:
			uParam0->f_184 = uParam0->f_194;
			break;
		case 9:
			uParam0->f_185 = uParam0->f_195;
			break;
		case 10:
			__LIB_16__::func_789(23);
			break;
	}
	*iParam1 = iParam2;
}

void func_19(var uParam0, int iParam1)
{
	vector3 vVar0;
	struct<4> Var4;
	vector3 vVar8;
	vector3 vVar12;
	vVar0 = { func_130(uParam0, 0) };
	Var4 = { func_130(uParam0, 1) };
	vVar8 = { func_130(uParam0, 2) };
	if (((__LIB_16__::func_954(&(uParam0->f_160[0]), uParam0->f_152, vVar0, vVar0.f_3, 2, 0, 1) && __LIB_17__::func_106(&(uParam0->f_162[0]), uParam0->f_153, Var4)) && __LIB_17__::func_106(&(uParam0->f_162[1]), uParam0->f_154, vVar8 - Vector(10f, 0f, 0f))) && __LIB_17__::func_106(&(uParam0->f_162[2]), uParam0->f_155, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, vVar0.f_3, -0.2f, 0.4f, 0f)))
	{
		if (__LIB_0__::func_272(uParam0->f_160[0], 0))
		{
			if (__LIB_11__::func_133(23) == 1)
			{
				__LIB_0__::func_862(uParam0->f_160[0], 1689938120);
			}
			__LIB_16__::func_792(uParam0->f_160[0], 23);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_160[0], "special_ped_group", 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_160[0], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_160[0], joaat("REL_CIVFEMALE"));
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 297, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 130, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 317, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 344, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 448, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 153, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_160[0], 17, true);
			PED::_0x923583741DC87BCE(uParam0->f_160[0], "old_female");
			__LIB_0__::func_928(uParam0, uParam0->f_160[0], "SOOTHSAYER", 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_160[0], vVar0, vVar0.f_3, true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_162[0], Var4, Var4.f_3, true, false, true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_162[1], false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_162[1], false);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_162[1], true);
			vVar12 = { 0f, 0f, 0f };
			vVar12.f_2 = vVar0.f_3;
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_177, "SOOTHSAYER", uParam0->f_160[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_177, "p_walkingStick01x", uParam0->f_162[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_177, vVar0, vVar12, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "SOOTHSAYER", uParam0->f_160[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "p_walkingStick01x", uParam0->f_162[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "COINSTACK", uParam0->f_162[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_178, vVar0, vVar12, 2);
			func_135(uParam0);
			__LIB_3__::func_414(&(uParam0->f_321), vVar0, 1f, 1, 258, 0);
			func_137(uParam0);
			__LIB_16__::func_806(&(uParam0->f_160[0]), &(uParam0->f_188), joaat("EVENT_SHOCKING_BEAT_INTERESTING_NEW"), 25f, 3600f);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), uParam0->f_160[0], "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "SoothsayerBubble");
			PED::_0x7C00CFC48A782DC0(uParam0->f_170, uParam0->f_160[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			func_18(uParam0, iParam1, 3);
		}
	}
}

void func_20(var uParam0, int iParam1)
{
	func_18(uParam0, iParam1, 4);
}

void func_21(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_27(uParam0->f_179, 256))
	{
		if (!__LIB_16__::func_876(&(uParam0->f_177)))
		{
			__LIB_1__::func_993(&(uParam0->f_179), 256);
			return;
		}
		else
		{
			func_140(uParam0);
			__LIB_1__::func_581(&(uParam0->f_179), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		return;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_133)))
	{
		__LIB_1__::func_148(&(uParam0->f_133));
	}
	if (__LIB_0__::func_264(&(uParam0->f_133)) > uParam0->f_176 && uParam0->f_181 <= 5)
	{
		if (func_4(uParam0, &(uParam0->f_177), func_3(func_142(uParam0->f_181)), 0, 1))
		{
			__LIB_1__::func_148(&(uParam0->f_133));
			uParam0->f_181 = uParam0->f_191;
		}
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0]))
		{
			uParam0->f_191 = uParam0->f_181 + 1;
			if (uParam0->f_191 > 5 && !__LIB_0__::func_27(uParam0->f_179, 16))
			{
				uParam0->f_191 = 0;
			}
		}
	}
	if ((__LIB_0__::func_48(Global_35, uParam0->f_160[0], 13f, 1) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0])) && !__LIB_0__::func_27(uParam0->f_179, 16))
	{
		func_18(uParam0, iParam1, 5);
	}
}

void func_22(var uParam0, int iParam1)
{
	bool bVar0;
	vector3 vVar1;
	if (!__LIB_0__::func_27(uParam0->f_179, 256))
	{
		if (!__LIB_16__::func_876(&(uParam0->f_177)))
		{
			__LIB_1__::func_993(&(uParam0->f_179), 256);
			return;
		}
		else
		{
			func_140(uParam0);
			__LIB_1__::func_581(&(uParam0->f_179), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		return;
	}
	bVar0 = false;
	if (!__LIB_0__::func_27(uParam0->f_179, 131072))
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			bVar0 = func_4(uParam0, &(uParam0->f_177), func_3(func_143(uParam0->f_182)), 0, 1);
			if (bVar0)
			{
				uParam0->f_182 = uParam0->f_192;
			}
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0]))
			{
				uParam0->f_192 = uParam0->f_182 + 1;
				if (uParam0->f_196 == 0 || uParam0->f_196 == 10)
				{
					if (uParam0->f_192 >= 3)
					{
						uParam0->f_192 = 0;
					}
				}
				if (uParam0->f_192 > 5)
				{
					uParam0->f_192 = 0;
				}
			}
		}
		else
		{
			bVar0 = func_4(uParam0, &(uParam0->f_177), func_3(func_144(uParam0->f_183)), 0, 1);
			if (bVar0)
			{
				uParam0->f_183 = uParam0->f_193;
			}
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0]))
			{
				uParam0->f_193 = uParam0->f_183 + 1;
				if (uParam0->f_193 > 5)
				{
					uParam0->f_193 = 0;
				}
			}
		}
	}
	vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_160[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
	if (!__LIB_0__::func_48(Global_35, uParam0->f_160[0], 13f, 1) && bVar0)
	{
		func_18(uParam0, iParam1, 4);
	}
	else if (((__LIB_0__::func_48(Global_35, uParam0->f_160[0], 9f, 1) && (__LIB_0__::func_27(uParam0->f_179, 131072) || bVar0)) && vVar1.y > 0f) && !__LIB_0__::func_27(uParam0->f_179, 16))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_178, 0);
		__LIB_1__::func_993(&(uParam0->f_179), 256);
		func_18(uParam0, iParam1, 6);
	}
	__LIB_1__::func_993(&(uParam0->f_179), 131072);
}

void func_23(var uParam0, int iParam1)
{
	vector3 vVar0;
	if (!__LIB_0__::func_27(uParam0->f_179, 256))
	{
		if (!__LIB_16__::func_876(&(uParam0->f_178)))
		{
			__LIB_1__::func_993(&(uParam0->f_179), 256);
			return;
		}
		else
		{
			func_145(uParam0);
			__LIB_1__::func_581(&(uParam0->f_179), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		return;
	}
	if (!__LIB_0__::func_27(uParam0->f_179, 8))
	{
		if (!__LIB_0__::func_27(uParam0->f_179, 8192))
		{
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0]))
			{
				__LIB_1__::func_581(&(uParam0->f_179), 8192);
			}
		}
		else if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0]))
		{
			__LIB_1__::func_581(&(uParam0->f_179), 8);
		}
	}
	if (uParam0->f_184 > 7)
	{
		uParam0->f_184 = 0;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_127)) || __LIB_0__::func_264(&(uParam0->f_127)) > 5f)
	{
		if (func_4(uParam0, &(uParam0->f_178), func_3(func_146(uParam0->f_184)), 0, 1))
		{
			__LIB_1__::func_148(&(uParam0->f_127));
			uParam0->f_184 = uParam0->f_194;
		}
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0]))
	{
		uParam0->f_194 = uParam0->f_184 + 1;
		if (uParam0->f_194 > 7)
		{
			uParam0->f_194 = 0;
		}
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_160[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
	if ((!__LIB_0__::func_48(Global_35, uParam0->f_160[0], 13f, 1) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0])) || (vVar0.y < 0f && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0])))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_177, 0);
		__LIB_1__::func_993(&(uParam0->f_179), 256);
		func_18(uParam0, iParam1, 5);
	}
	if (__LIB_0__::func_27(uParam0->f_179, 4))
	{
		if (Global_1935689.f_1)
		{
			__LIB_3__::func_739(0);
		}
		if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_178, "s_base", 1))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_162[1], true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_162[1], true, false);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_162[1], false);
			ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_177, func_3(func_148(uParam0->f_196)));
			__LIB_1__::func_993(&(uParam0->f_179), 256);
			func_18(uParam0, iParam1, 7);
		}
		else
		{
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
		}
	}
}

void func_24(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	if (!__LIB_0__::func_27(uParam0->f_179, 256))
	{
		if (!__LIB_16__::func_876(&(uParam0->f_177)))
		{
			__LIB_1__::func_993(&(uParam0->f_179), 256);
			return;
		}
		else
		{
			func_145(uParam0);
			__LIB_1__::func_581(&(uParam0->f_179), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		return;
	}
	if (Global_1935689.f_1)
	{
		__LIB_3__::func_739(0);
	}
	if (!__LIB_0__::func_27(uParam0->f_179, 65536))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false);
		if (iVar0 != joaat("WEAPON_UNARMED") || iVar1 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			uParam0->f_189 = MISC::GET_GAME_TIMER();
		}
		__LIB_1__::func_581(&(uParam0->f_179), 65536);
	}
	if (((!__LIB_0__::func_163(Global_35, 1369124074) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_178, func_3(41))) && !__LIB_0__::func_27(uParam0->f_179, 2048)) && (__LIB_0__::func_27(uParam0->f_179, 65536) && MISC::GET_GAME_TIMER() >= uParam0->f_189 + 1500))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_168))
		{
			__LIB_16__::func_948(&(uParam0->f_168), &(uParam0->f_159), &(uParam0->f_173));
		}
		__LIB_16__::func_832(1);
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
		TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_178, "ARTHUR", func_3(41), 1.2f, 0, 0, 20000, -1082130432 /* Float: -1f */);
		__LIB_1__::func_581(&(uParam0->f_179), 2048);
	}
	else
	{
		if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_178, "ARTHUR") && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_178, func_3(41)))
		{
			PED::_0x2208438012482A1A(Global_35, false, false);
			__LIB_16__::func_832(0);
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_178, func_3(41), true);
		}
		if (!__LIB_0__::func_27(uParam0->f_179, 262144))
		{
			__LIB_2__::func_360(&(uParam0->f_243[0 /*17*/]), "INTERACT_GREET");
			__LIB_2__::func_360(&(uParam0->f_243[1 /*17*/]), "INTERACT_INSULT");
			__LIB_1__::func_581(&(uParam0->f_179), 262144);
		}
	}
	if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_178, func_3(41)) && !ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_178, "s_Base", 1))
	{
		if (!__LIB_0__::func_27(uParam0->f_179, 1048576))
		{
			if (__LIB_0__::func_181())
			{
				StringCopy(&cVar2, "SPSHR_JOHNPAY", 24);
			}
			else
			{
				StringCopy(&cVar2, "SPSHR_ARTHPAY", 24);
			}
			if (__LIB_1__::func_104(uParam0, cVar2, 0, -1, 0, 0))
			{
				__LIB_1__::func_581(&(uParam0->f_179), 1048576);
			}
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_178) > 0.27f)
		{
			if (!__LIB_0__::func_27(uParam0->f_179, 4194304))
			{
				__LIB_2__::func_522(200, 0, 0, 1, 1);
				__LIB_1__::func_581(&(uParam0->f_179), 4194304);
			}
		}
	}
	if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_178, func_3(41)) && ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_178, "s_Base", 1))
	{
		if (!__LIB_0__::func_27(uParam0->f_179, 16777216))
		{
			__LIB_14__::func_288(12, 0, 0, "", uParam0->f_160[0], 0, 1065353216 /* Float: 1f */, 0);
			__LIB_1__::func_581(&(uParam0->f_179), 16777216);
		}
		__LIB_1__::func_581(&(uParam0->f_179), 16);
		__LIB_1__::func_993(&(uParam0->f_179), 256);
		if (!__LIB_0__::func_27(uParam0->f_179, 524288))
		{
			uParam0->f_320 = 3;
			__LIB_2__::func_451(&(uParam0->f_222), 0);
			__LIB_1__::func_581(&(uParam0->f_179), 524288);
		}
		func_18(uParam0, iParam1, 8);
	}
	else if (__LIB_0__::func_27(uParam0->f_179, 2048))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		HUD::_0xC9CAEAEEC1256E54(724769646);
	}
}

void func_25(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	if (!__LIB_0__::func_27(uParam0->f_179, 256))
	{
		if (!__LIB_16__::func_876(&(uParam0->f_177)))
		{
			__LIB_1__::func_993(&(uParam0->f_179), 256);
			return;
		}
		else
		{
			func_140(uParam0);
			__LIB_1__::func_581(&(uParam0->f_179), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		return;
	}
	if (!__LIB_0__::func_27(uParam0->f_179, 2097152) && __LIB_0__::func_665(Global_35, uParam0->f_160[0], 1, 1) < 5f)
	{
		if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_177, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_177) > 0.1f) && !AUDIO::_0x54B187F111D9C6F8(uParam0->f_160[0], 1))
		{
			if (!__LIB_0__::func_75(&(uParam0->f_148)))
			{
				__LIB_1__::func_148(&(uParam0->f_148));
			}
			else if (__LIB_0__::func_264(&(uParam0->f_148)) > 0.5f)
			{
				if (__LIB_0__::func_181())
				{
					StringCopy(&cVar0, "SPSHR_JOHNTHANK", 24);
				}
				else
				{
					StringCopy(&cVar0, "SPSHR_ARTHTHANK", 24);
				}
				if (__LIB_1__::func_104(uParam0, cVar0, 0, -1, 0, 0))
				{
					__LIB_1__::func_581(&(uParam0->f_179), 2097152);
				}
			}
		}
	}
	if (func_4(uParam0, &(uParam0->f_177), func_3(func_148(uParam0->f_196)), 0, 1))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SOOTHSAYER"));
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SoothsayerBubble");
		if (__LIB_0__::func_665(Global_35, uParam0->f_160[0], 1, 1) < 5f)
		{
			if (__LIB_0__::func_27(uParam0->f_179, 2097152))
			{
				func_18(uParam0, iParam1, 9);
			}
		}
		else
		{
			func_18(uParam0, iParam1, 9);
		}
	}
}

void func_26(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_27(uParam0->f_179, 256))
	{
		if (!__LIB_16__::func_876(&(uParam0->f_177)))
		{
			__LIB_1__::func_993(&(uParam0->f_179), 256);
			return;
		}
		else
		{
			func_140(uParam0);
			__LIB_1__::func_581(&(uParam0->f_179), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		return;
	}
	if (((__LIB_0__::func_27(uParam0->f_179, 16384) && __LIB_0__::func_265(&(uParam0->f_133)) > 5f) || !__LIB_0__::func_48(Global_35, uParam0->f_160[0], 13f, 1)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0]))
	{
		__LIB_1__::func_993(&(uParam0->f_179), 256);
		__LIB_1__::func_148(&(uParam0->f_133));
		uParam0->f_176 = 10f;
		func_18(uParam0, iParam1, 4);
	}
	if (!__LIB_0__::func_27(uParam0->f_179, 16384))
	{
		if (func_4(uParam0, &(uParam0->f_177), func_3(func_156(uParam0->f_185)), 0, 1))
		{
			__LIB_0__::func_268(&(uParam0->f_133), 0f);
			__LIB_1__::func_581(&(uParam0->f_179), 16384);
		}
		if (!__LIB_0__::func_27(uParam0->f_179, 32768))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_177) && ANIMSCENE::_0x1F0E401031E20146(uParam0->f_177, func_3(func_156(uParam0->f_185))))
			{
				uParam0->f_195++;
				if (uParam0->f_195 > 7)
				{
					uParam0->f_195 = 0;
				}
				__LIB_1__::func_581(&(uParam0->f_179), 32768);
			}
		}
	}
}

void func_29(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_27(uParam0->f_179, 256))
	{
		if (!__LIB_16__::func_876(&(uParam0->f_177)))
		{
			__LIB_1__::func_993(&(uParam0->f_179), 256);
			return;
		}
		else
		{
			func_145(uParam0);
			__LIB_1__::func_581(&(uParam0->f_179), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_162[0]))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_162[0]))
	{
		ENTITY::DETACH_ENTITY(uParam0->f_162[0], true, true);
	}
	func_4(uParam0, &(uParam0->f_177), func_3(func_160(uParam0->f_196)), 1, 1);
	if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_177, func_3(func_160(uParam0->f_196))))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SoothsayerBubble");
		__LIB_0__::func_172(uParam0->f_170);
		if (!__LIB_0__::func_163(uParam0->f_160[0], 518218985))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 448, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 153, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_160[0], false);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_160[0], true);
			PED::_0x8B3CB08158E98481(uParam0->f_160[0], 1);
			__LIB_17__::func_856(&(uParam0->f_160[0]), &(uParam0->f_312), &(uParam0->f_222), &(uParam0->f_243), 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_160[0], 17, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 130, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 315, false);
			__LIB_16__::func_804(uParam0->f_160[0]);
			if (!__LIB_0__::func_27(uParam0->f_179, 33554432))
			{
				__LIB_14__::func_288(1, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				__LIB_1__::func_581(&(uParam0->f_179), 33554432);
			}
			TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_160[0], Global_35, 0, 0, -1f, -1, 0);
			PED::SET_PED_KEEP_TASK(uParam0->f_160[0], true);
		}
		else if (!__LIB_0__::func_75(&(uParam0->f_145)))
		{
			__LIB_0__::func_268(&(uParam0->f_145), 0f);
		}
		else if (__LIB_1__::func_871(&(uParam0->f_145)) > 15000)
		{
			PED::SET_PED_TO_RAGDOLL(uParam0->f_160[0], 100, 3000, 0, false, false, false);
			PED::SET_PED_RAGDOLL_FORCE_FALL(uParam0->f_160[0]);
			__LIB_0__::func_37(&(uParam0->f_145));
			func_18(uParam0, iParam1, 11);
		}
	}
}

bool func_59(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((__LIB_0__::func_64(0) == 1 || __LIB_0__::func_64(0) == 2) || __LIB_0__::func_64(0) == 8) || __LIB_0__::func_1(Global_1935630, 2048))
			{
				__LIB_1__::func_581(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (__LIB_0__::func_64(0) == 11)
			{
				__LIB_1__::func_581(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (__LIB_0__::func_64(0) == 6)
			{
				__LIB_1__::func_581(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				__LIB_1__::func_581(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(__LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && __LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = __LIB_0__::func_23();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (__LIB_0__::func_41(iVar2) > __LIB_0__::func_41(iVar1))
				{
					if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 || __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
					{
						__LIB_1__::func_581(uParam2, 32);
					}
				}
				else if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 && __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
				{
					__LIB_1__::func_581(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((__LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || __LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || __LIB_14__::func_432(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || __LIB_14__::func_432(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!__LIB_16__::func_784(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						__LIB_1__::func_581(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (__LIB_17__::func_155(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || __LIB_17__::func_301(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!__LIB_0__::func_75(&(uParam2->f_13)))
					{
						__LIB_0__::func_268(&(uParam2->f_13), 0f);
					}
					else if (__LIB_1__::func_871(&(uParam2->f_13)) >= uParam2->f_16)
					{
						__LIB_0__::func_37(&(uParam2->f_13));
						__LIB_1__::func_581(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (__LIB_0__::func_75(&(uParam2->f_13)))
					{
						__LIB_0__::func_37(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (__LIB_2__::func_7())
			{
				__LIB_1__::func_581(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (__LIB_16__::func_785())
			{
				__LIB_1__::func_581(uParam2, 2048);
			}
		}
		if (__LIB_0__::func_1(Global_1935630, 16384) || Global_1430231.f_4)
		{
			__LIB_1__::func_581(uParam2, 128);
		}
		if (__LIB_8__::func_747(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			__LIB_1__::func_581(uParam2, 256);
		}
	}
	if ((((((((((__LIB_0__::func_27(*uParam2, 2) || __LIB_0__::func_27(*uParam2, 4)) || __LIB_0__::func_27(*uParam2, 8)) || __LIB_0__::func_27(*uParam2, 16)) || __LIB_0__::func_27(*uParam2, 32)) || __LIB_0__::func_27(*uParam2, 64)) || __LIB_0__::func_27(*uParam2, 128)) || __LIB_0__::func_27(*uParam2, 256)) || __LIB_0__::func_27(*uParam2, 512)) || __LIB_0__::func_27(*uParam2, 1024)) || __LIB_0__::func_27(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

char* func_100()
{
	return "script@specialped@pdshr_soothsayer@ig@ig1_offer_services@pdshr_ig1";
}

char* func_101()
{
	return "script@specialped@pdshr_soothsayer@ig@ig1_offer_services@pdshr_ig1_offer_services";
}

void func_102(var uParam0)
{
	struct<11> Var0;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_166))
	{
		Var0 = { func_257(uParam0, 0) };
		uParam0->f_166 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_167))
	{
		Var0 = { func_257(uParam0, 1) };
		uParam0->f_167 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_168))
	{
		Var0 = { func_257(uParam0, 2) };
		uParam0->f_168 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_169))
	{
		Var0 = { func_257(uParam0, 3) };
		uParam0->f_169 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_170))
	{
		Var0 = { func_257(uParam0, 4) };
		uParam0->f_170 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
		VOLUME::_0xBE551C2CC421185D(uParam0->f_170, 1);
		VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_170, 0);
	}
}

struct<4> func_130(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			if (__LIB_0__::func_27(uParam0->f_179, 8388608))
			{
				Var0 = { 1784.089f, -946.648f, 40.7225f };
				Var0.f_3 = 254.7072f;
			}
			else
			{
				Var0 = { 2440.456f, -462.537f, 40.9104f };
				Var0.f_3 = 153.3627f;
			}
			break;
	}
	return Var0;
}

void func_135(var uParam0)
{
	uParam0->f_312 = 0;
	uParam0->f_312.f_1 = 5;
	uParam0->f_312.f_2 = joaat("TIMID");
	uParam0->f_312.f_3 = 3;
	uParam0->f_312.f_4 = 0;
	uParam0->f_312.f_5 = 1;
	uParam0->f_312.f_6 = 0;
}

void func_137(var uParam0)
{
	__LIB_13__::func_249(&(uParam0->f_243[0 /*17*/]), "INTERACT_GREET", 100, "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1);
	__LIB_2__::func_602(&(uParam0->f_243[1 /*17*/]), "INTERACT_INSULT", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_350(uParam0->f_160[0], &(uParam0->f_243), 15f, 1, 0, 0, 0, 0, 0);
	__LIB_2__::func_411(&(uParam0->f_243[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(uParam0->f_243[1 /*17*/]), 0, 0);
	uParam0->f_320 = 3;
	__LIB_1__::func_581(&(uParam0->f_179), 524288);
}

void func_140(var uParam0)
{
	vector3 vVar0;
	vector3 vVar4;
	vVar0 = { func_130(uParam0, 0) };
	vVar4 = { 0f, 0f, 0f };
	vVar4.f_2 = vVar0.f_3;
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_177, "SOOTHSAYER", uParam0->f_160[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_177, "p_walkingStick01x", uParam0->f_162[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_177, vVar0, vVar4, 2);
}

int func_142(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 15;
			break;
		case 1:
			iVar0 = 16;
			break;
		case 2:
			iVar0 = 17;
			break;
		case 3:
			iVar0 = 18;
			break;
		case 4:
			iVar0 = 19;
			break;
		case 5:
			iVar0 = 20;
			break;
	}
	return iVar0;
}

int func_143(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 27;
			break;
		case 1:
			iVar0 = 28;
			break;
		case 2:
			iVar0 = 29;
			break;
		case 3:
			iVar0 = 30;
			break;
		case 4:
			iVar0 = 31;
			break;
		case 5:
			iVar0 = 32;
			break;
	}
	return iVar0;
}

int func_144(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 21;
			break;
		case 1:
			iVar0 = 22;
			break;
		case 2:
			iVar0 = 23;
			break;
		case 3:
			iVar0 = 24;
			break;
		case 4:
			iVar0 = 25;
			break;
		case 5:
			iVar0 = 26;
			break;
	}
	return iVar0;
}

void func_145(var uParam0)
{
	vector3 vVar0;
	vector3 vVar4;
	vVar0 = { func_130(uParam0, 0) };
	vVar4 = { 0f, 0f, 0f };
	vVar4.f_2 = vVar0.f_3;
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "SOOTHSAYER", uParam0->f_160[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "p_walkingStick01x", uParam0->f_162[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "COINSTACK", uParam0->f_162[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_178, vVar0, vVar4, 2);
	ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_178, func_3(41));
}

int func_146(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 33;
			break;
		case 1:
			iVar0 = 34;
			break;
		case 2:
			iVar0 = 35;
			break;
		case 3:
			iVar0 = 36;
			break;
		case 4:
			iVar0 = 37;
			break;
		case 5:
			iVar0 = 38;
			break;
		case 6:
			iVar0 = 39;
			break;
		case 7:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_148(int iParam0)
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
			iVar0 = 2;
			break;
		case 3:
			iVar0 = 3;
			break;
		case 4:
			iVar0 = 4;
			break;
		case 5:
			iVar0 = 5;
			break;
		case 6:
			iVar0 = 6;
			break;
		case 7:
			iVar0 = 7;
			break;
		case 8:
			iVar0 = 8;
			break;
		case 9:
			iVar0 = 9;
			break;
		case 10:
			iVar0 = 10;
			break;
		case 11:
			iVar0 = 11;
			break;
		case 12:
			iVar0 = 12;
			break;
		case 13:
			iVar0 = 13;
			break;
		case 14:
			iVar0 = 14;
			break;
	}
	return iVar0;
}

int func_156(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 42;
			break;
		case 1:
			iVar0 = 43;
			break;
		case 2:
			iVar0 = 44;
			break;
		case 3:
			iVar0 = 45;
			break;
		case 4:
			iVar0 = 46;
			break;
		case 5:
			iVar0 = 47;
			break;
		case 6:
			iVar0 = 48;
			break;
		case 7:
			iVar0 = 49;
			break;
	}
	return iVar0;
}

int func_160(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 50;
			break;
		case 1:
			iVar0 = 51;
			break;
		case 2:
			iVar0 = 52;
			break;
		case 3:
			iVar0 = 53;
			break;
		case 4:
			iVar0 = 54;
			break;
		case 5:
			iVar0 = 51;
			break;
		case 6:
			iVar0 = 52;
			break;
		case 7:
			iVar0 = 53;
			break;
		case 8:
			iVar0 = 54;
			break;
		case 9:
			iVar0 = 50;
			break;
		case 10:
			iVar0 = 51;
			break;
		case 11:
			iVar0 = 52;
			break;
		case 12:
			iVar0 = 53;
			break;
		case 13:
			iVar0 = 54;
			break;
		case 14:
			iVar0 = 50;
			break;
	}
	return iVar0;
}

struct<11> func_257(var uParam0, int iParam1)
{
	struct<11> Var0;
	struct<4> Var11;
	Var11 = { func_130(uParam0, 0) };
	switch (iParam1)
	{
		case 0:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { Var11 };
			Var0.f_4 = { 0f, 0f, Var11.f_3 };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "RandomEventBlock";
			break;
		case 1:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var11, Var11.f_3, 0f, 2.2f, 0f) };
			Var0.f_4 = { 0f, 0f, Var11.f_3 };
			Var0.f_7 = { 1.5f, 3f, 10f };
			Var0.f_10 = "Trigger";
			break;
		case 2:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { Var11 };
			Var0.f_4 = { 0f, 0f, Var11.f_3 };
			Var0.f_7 = { 9.33105f, 4.768036f, 10f };
			Var0.f_10 = "StayAway";
			break;
		case 3:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var11, Var11.f_3, 0f, 5f, 0f) };
			Var0.f_4 = { 0f, 0f, Var11.f_3 };
			Var0.f_7 = { 8f, 6f, 6f };
			Var0.f_10 = "LookIKVolume";
			break;
		case 4:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { Var11 };
			Var0.f_4 = { 0f, 0f, Var11.f_3 };
			Var0.f_7 = { 1.85f, 1.85f, 3f };
			Var0.f_10 = "HorseBlockVolume";
			break;
	}
	return Var0;
}

