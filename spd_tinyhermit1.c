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
	struct<292> Local_15 = { 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2007761031, 1433165496, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_307 = 0;
	var uLocal_308 = 6;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = -1082130432;
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
		if (!__LIB_0__::func_27(Local_15.f_173, 4194304))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_149[0]) && (PED::IS_PED_INJURED(Local_15.f_149[0]) || PED::_IS_PED_HOGTIED(Local_15.f_149[0])))
			{
				__LIB_0__::func_915(joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC"));
				__LIB_1__::func_581(&(Local_15.f_173), 4194304);
			}
		}
		if (!__LIB_0__::func_27(Local_15.f_173, 134217728))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_149[0]))
			{
				if (!PED::_0x5102307CE88798EB(Local_15.f_149[0]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(Local_15.f_149[0]);
				}
				else if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(Local_15.f_149[0]) && __LIB_1__::func_472(Local_15.f_149[0], 35f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 80f))
				{
					__LIB_16__::func_981(28, __LIB_0__::func_113());
					__LIB_1__::func_581(&(Local_15.f_173), 134217728);
				}
			}
		}
		if (!__LIB_16__::func_864(28, 4194304))
		{
			if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC"))
			{
				__LIB_16__::func_865(28, 4194304, 1);
			}
		}
		if (__LIB_16__::func_881(28, Local_15.f_149[0], 1, 1) && iLocal_14 > 2)
		{
			if (!__LIB_0__::func_393(Global_35, Local_15.f_155, 0, 1))
			{
				func_14(&Local_15, &(Local_15.f_172), func_13(27), 0, 1);
			}
			else
			{
				if (!__LIB_0__::func_27(Local_15.f_173, 536870912))
				{
					if (__LIB_16__::func_838(28, __LIB_1__::func_976(), &(Local_15.f_149[0]), &(Local_15.f_136), &(Local_15.f_291), 0, 1097859072 /* Float: 15f */, 0))
					{
						__LIB_1__::func_581(&(Local_15.f_173), 536870912);
					}
				}
				func_17(&Local_15, __LIB_1__::func_976(), &iLocal_14);
				func_18(&Local_15, &iLocal_14);
				func_19(&Local_15, &iLocal_14);
				func_20(&Local_15, &iLocal_14);
				func_21(&Local_15, &iLocal_14);
				__LIB_16__::func_854(Local_15.f_149[0], &(Local_15.f_173), 2048, 28, 0);
				switch (iLocal_14)
				{
					case 0:
						func_23(&Local_15, &iLocal_14);
						break;
					case 1:
						if (func_24(&Local_15))
						{
							func_25(&Local_15, &iLocal_14, 2);
						}
						break;
					case 2:
						func_26(&Local_15, &iLocal_14);
						break;
					case 3:
						func_27(&Local_15, &iLocal_14);
						break;
					case 5:
						func_28(&Local_15, &iLocal_14);
						break;
					case 6:
						func_29(&Local_15, &iLocal_14);
						break;
					case 7:
						func_30(&Local_15, &iLocal_14);
						break;
					case 8:
						func_31(&Local_15, &iLocal_14);
						break;
					case 9:
						func_32(&Local_15, &iLocal_14);
						break;
					case 13:
						if (Local_15.f_170 >= 6 && (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_149[0]) || PED::IS_PED_DEAD_OR_DYING(Local_15.f_149[0], true)))
						{
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_149[0]))
						{
							if (!PED::_0x5102307CE88798EB(Local_15.f_149[0]))
							{
								PED::REQUEST_PED_VISIBILITY_TRACKING(Local_15.f_149[0]);
							}
							if (__LIB_0__::func_665(Global_35, Local_15.f_149[0], 1, 1) > 80f && !PED::IS_TRACKED_PED_VISIBLE(Local_15.f_149[0]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_149[0]))
								{
									PED::DELETE_PED(&(Local_15.f_149[0]));
								}
								func_1(&Local_15);
							}
						}
						break;
					case 11:
						func_34(&Local_15, &iLocal_14);
						break;
					case 12:
						break;
					default:
						break;
				}
			}
		}
	}
}

void func_1(var uParam0)
{
	__LIB_16__::func_839(&(uParam0->f_269));
	__LIB_3__::func_59(uParam0->f_166);
	__LIB_2__::func_480(&(uParam0->f_230), 0, 1, 1, 0);
	__LIB_2__::func_593(&(uParam0->f_209), &(uParam0->f_230));
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(uParam0->f_180))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_180);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_149[0]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_149[0], 0f);
		PED::_0x39A2FC5AF55A52B1(uParam0->f_149[0], -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_149[0]));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_151[0]))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(uParam0->f_151[0]));
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_172))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_172);
	}
	__LIB_1__::func_948(1973911195, 1, 0, 0, 1, 1f, 0, 0);
	OBJECT::_0xC07B91B996C1DE89(1973911195, 1);
	__LIB_1__::func_941(1973911195);
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_154))
	{
		__LIB_1__::func_544(uParam0->f_154);
		VOLUME::_DELETE_VOLUME(uParam0->f_154);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_155))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_155);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_156))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_156);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_158))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_158);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_158);
		VOLUME::_DELETE_VOLUME(uParam0->f_158);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_157))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_157);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_157);
		VOLUME::_DELETE_VOLUME(uParam0->f_157);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_159))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_159);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_160))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_160);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_165))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_165);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_161))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_161);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_162))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_162);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_163))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_163);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_164))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_164);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_166))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_166);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[28 /*638*/][__LIB_1__::func_976() /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[28 /*638*/][__LIB_1__::func_976() /*48*/].f_47);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_292))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_292));
	}
	__LIB_16__::func_840(28);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

char* func_13(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "pl_a_mans_home";
			break;
		case 1:
			sVar0 = "pl_are_you_deaf";
			break;
		case 2:
			sVar0 = "pl_get_lost";
			break;
		case 3:
			sVar0 = "pl_go_away";
			break;
		case 4:
			sVar0 = "pl_go_away_now";
			break;
		case 5:
			sVar0 = "pl_very_unhappy";
			break;
		case 6:
			sVar0 = "pl_run_outside_A";
			break;
		case 7:
			sVar0 = "pl_run_outside_B";
			break;
		case 8:
			sVar0 = "pl_run_outside_C";
			break;
		case 9:
			sVar0 = "pl_run_outside_D";
			break;
		case 10:
			sVar0 = "pl_run_outside_E";
			break;
		case 11:
			sVar0 = "pl_out_of_the_house";
			break;
		case 12:
			sVar0 = "pl_back_in_the_house";
			break;
		case 13:
			sVar0 = "pl_back_in_the_house_02";
			break;
		case 14:
			sVar0 = "pl_shoot_sky_A";
			break;
		case 15:
			sVar0 = "pl_shoot_sky_B";
			break;
		case 16:
			sVar0 = "pl_shoot_sky_C";
			break;
		case 17:
			sVar0 = "pl_flinch_down_01";
			break;
		case 18:
			sVar0 = "pl_flinch_down_02";
			break;
		case 19:
			sVar0 = "pl_flinch_left_01";
			break;
		case 20:
			sVar0 = "pl_flinch_left_02";
			break;
		case 21:
			sVar0 = "pl_flinch_right_01";
			break;
		case 22:
			sVar0 = "pl_flinch_right_02";
			break;
		case 23:
			sVar0 = "pl_flinch_feet";
			break;
		case 24:
			sVar0 = "pl_turn_left";
			break;
		case 25:
			sVar0 = "pl_turn_right";
			break;
		case 26:
			sVar0 = "pl_outside_idle_base";
			break;
		case 27:
			sVar0 = "pl_inside_idle_base";
			break;
		case 28:
			sVar0 = "pl_idle_01";
			break;
		case 29:
			sVar0 = "pl_idle_02";
			break;
		case 30:
			sVar0 = "pl_idle_03";
			break;
	}
	return sVar0;
}

bool func_14(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4)
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
				if (!__LIB_16__::func_878(&(uParam0->f_149[0]), 0, 0))
				{
					return false;
				}
			}
			if (!ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2) && ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "bLoop", bParam3, false);
				return false;
			}
			else if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_outside_idle_base", 1) || ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_inside_idle_base", 1))
				{
					if (__LIB_16__::func_863(uParam1, uParam0->f_167))
					{
						uParam0->f_167 = sParam2;
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_17(var uParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1396257[28 /*638*/][__LIB_1__::func_976() /*48*/].f_47))
	{
		func_1(uParam0);
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		func_1(uParam0);
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1396257[28 /*638*/][__LIB_1__::func_976() /*48*/].f_47, true, 0))
	{
		if (!__LIB_0__::func_75(&(uParam0->f_127)))
		{
			__LIB_1__::func_283(&(uParam0->f_127), 0);
		}
		else if (__LIB_0__::func_265(&(uParam0->f_127)) > 10f)
		{
			__LIB_0__::func_37(&(uParam0->f_127));
			func_1(uParam0);
		}
	}
	else if (func_68(28, iParam1, &(uParam0->f_269), uParam0->f_149[0]))
	{
		if (__LIB_16__::func_809(&(uParam0->f_269)) || __LIB_0__::func_27(uParam0->f_269, 8))
		{
			func_1(uParam0);
		}
	}
}

void func_18(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_149[0]) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!__LIB_0__::func_272(uParam0->f_149[0], 0))
	{
		if (!__LIB_0__::func_27(uParam0->f_173, 67108864))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_172) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_172, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_172);
			}
			func_25(uParam0, iParam1, 13);
			__LIB_2__::func_451(&(uParam0->f_209), 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_149[0], 315, false);
			__LIB_2__::func_593(&(uParam0->f_209), &(uParam0->f_230));
			__LIB_1__::func_581(&(uParam0->f_173), 67108864);
		}
	}
	else if ((*iParam1 > 3 && *iParam1 <= 8) && INTERIOR::GET_INTERIOR_FROM_ENTITY(uParam0->f_149[0]) == 0)
	{
		if ((__LIB_12__::func_465(uParam0->f_149[0], 0, &(uParam0->f_98), &(uParam0->f_126), 0, 0) || __LIB_0__::func_48(Global_35, uParam0->f_149[0], 4f, 1)) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (!__LIB_0__::func_27(uParam0->f_173, 128))
			{
				__LIB_3__::func_158(&(uParam0->f_230[0 /*17*/]), 1);
				__LIB_3__::func_158(&(uParam0->f_230[1 /*17*/]), 1);
				if (!__LIB_0__::func_27(uParam0->f_173, 536870912))
				{
					__LIB_16__::func_789(28);
					__LIB_1__::func_581(&(uParam0->f_173), 536870912);
				}
				__LIB_1__::func_581(&(uParam0->f_173), 128);
				func_25(uParam0, iParam1, 11);
			}
		}
	}
}

void func_19(var uParam0, int iParam1)
{
	if (*iParam1 >= 11 || *iParam1 <= 2)
	{
		return;
	}
	TASK::TASK_LOOK_AT_ENTITY(uParam0->f_149[0], Global_35, -1, 0, 51, 0);
}

void func_20(var uParam0, int iParam1)
{
	if (__LIB_0__::func_27(uParam0->f_173, 64))
	{
		return;
	}
	if (*iParam1 >= 3 && *iParam1 <= 8)
	{
		if (!__LIB_0__::func_27(uParam0->f_173, 32768))
		{
			if (__LIB_16__::func_802(&(uParam0->f_149[0]), 1715123483))
			{
				__LIB_1__::func_581(&(uParam0->f_173), 32768);
				uParam0->f_178++;
				if (uParam0->f_178 >= 2)
				{
					__LIB_1__::func_581(&(uParam0->f_173), 64);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(uParam0->f_149[0]))
	{
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_149[0]))
		{
			__LIB_1__::func_993(&(uParam0->f_173), 32768);
		}
	}
}

void func_21(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_149[0]))
	{
		return;
	}
	iVar0 = func_76(&(uParam0->f_149[0]), &(uParam0->f_209), 25f, &(uParam0->f_230), &iVar1, 0f, 2, 0, 0, __LIB_2__::func_340(uParam0->f_268, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (__LIB_0__::func_27(uParam0->f_173, 65536))
	{
		if (((__LIB_2__::func_401(uParam0->f_149[0], 1, 1, 1, 0, 0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_149[0])) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) || __LIB_0__::func_27(uParam0->f_173, 16777216))
		{
			__LIB_2__::func_411(&(uParam0->f_230[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(uParam0->f_230[1 /*17*/]), 0, 0);
		}
		else if (!__LIB_0__::func_27(uParam0->f_173, 524288))
		{
			if (!__LIB_0__::func_27(uParam0->f_173, 1048576))
			{
				__LIB_2__::func_411(&(uParam0->f_230[0 /*17*/]), 1, 0);
			}
			__LIB_2__::func_411(&(uParam0->f_230[1 /*17*/]), 1, 0);
		}
		switch (iVar0)
		{
			case 0:
				__LIB_1__::func_581(&(uParam0->f_173), 1048576);
				__LIB_1__::func_581(&(uParam0->f_173), 16777216);
				break;
			case 1:
				uParam0->f_177 = 2;
				__LIB_1__::func_581(&(uParam0->f_173), 524288);
				break;
		}
		if (__LIB_0__::func_27(uParam0->f_173, 16777216))
		{
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_149[0]))
			{
				__LIB_1__::func_993(&(uParam0->f_173), 16777216);
			}
		}
	}
	else if (__LIB_0__::func_27(uParam0->f_173, 131072))
	{
		if (!__LIB_0__::func_27(uParam0->f_173, 262144))
		{
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_149[0]))
			{
				__LIB_1__::func_581(&(uParam0->f_173), 262144);
			}
		}
		else if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_149[0]) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !__LIB_0__::func_27(uParam0->f_173, 8388608))
		{
			__LIB_1__::func_581(&(uParam0->f_173), 65536);
		}
	}
}

void func_23(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_172))
	{
		uParam0->f_172 = ANIMSCENE::_CREATE_ANIM_SCENE(func_82(), 0, func_13(27), false, true);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_172))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_172);
		STREAMING::REQUEST_MODEL(uParam0->f_146, false);
		HUD::_TEXT_DATABASE_REQUEST("SPTTLAU");
		func_83(uParam0);
		__LIB_2__::func_261(uParam0->f_154, "SP_TINY_HERMIT_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		POPULATION::_0xB56D41A694E42E86(uParam0->f_158, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_158, 0, 0, 0, -1, -1, 0);
		uParam0->f_145 = __LIB_1__::func_293(28, __LIB_1__::func_976(), 9, __LIB_16__::func_790(28));
		if (!__LIB_0__::func_6(uParam0->f_145))
		{
		}
		if (__LIB_0__::func_181())
		{
			__LIB_0__::func_928(uParam0, Global_35, "JOHN", 0);
		}
		else
		{
			__LIB_0__::func_928(uParam0, Global_35, "ARTHUR", 0);
		}
		uParam0->f_168 = "TINY_HERMIT";
		__LIB_16__::func_970(&(uParam0->f_269));
		__LIB_4__::func_228(&(uParam0->f_98));
		__LIB_1__::func_403(&(uParam0->f_98), 1);
		__LIB_8__::func_731(&(uParam0->f_98), 1);
		__LIB_1__::func_399(&(uParam0->f_98), 0);
		__LIB_1__::func_397(&(uParam0->f_98), 0);
		__LIB_1__::func_402(&(uParam0->f_98), 1);
		__LIB_1__::func_404(&(uParam0->f_98), 1);
		__LIB_1__::func_405(&(uParam0->f_98), 1);
		__LIB_1__::func_407(&(uParam0->f_98), 0);
		__LIB_1__::func_406(&(uParam0->f_98), 0);
		__LIB_1__::func_393(&(uParam0->f_98), 1);
		__LIB_1__::func_398(&(uParam0->f_98), 1);
		__LIB_1__::func_401(&(uParam0->f_98), 1);
		__LIB_2__::func_830(&(uParam0->f_98), 1);
		__LIB_2__::func_828(&(uParam0->f_98), 1);
		__LIB_1__::func_413(&(uParam0->f_98), 1);
		__LIB_2__::func_829(&(uParam0->f_98), 1);
		__LIB_2__::func_956(&(uParam0->f_98), 1);
		__LIB_8__::func_732(&(uParam0->f_98), 1);
		__LIB_2__::func_595(&(uParam0->f_98), 25f);
		if (__LIB_0__::func_6(uParam0->f_145))
		{
			uParam0->f_170 = __LIB_0__::func_895(uParam0->f_145);
			uParam0->f_176 = __LIB_5__::func_297(uParam0->f_145);
			if (uParam0->f_170 < 1)
			{
				uParam0->f_170 = 1;
			}
			uParam0->f_171 = uParam0->f_170;
			func_25(uParam0, iParam1, 1);
		}
	}
}

bool func_24(var uParam0)
{
	PED::_0xED9582B3DA8F02B4(1);
	if (((STREAMING::HAS_MODEL_LOADED(uParam0->f_146) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_172, true, false)) && HUD::_TEXT_DATABASE_HAS_LOADED("SPTTLAU")) && PED::_0x5C16855277819BBF() == 1)
	{
		return true;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_146))
	{
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_172, true, false))
	{
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SPTTLAU"))
	{
	}
	if (PED::_0x5C16855277819BBF() != 1)
	{
	}
	return false;
}

void func_25(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	switch (iParam2)
	{
		case 11:
			__LIB_16__::func_789(28);
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_172, false))
			{
				iVar0 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_172, "p_door60", false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_172, "p_door60", iVar0);
				}
			}
			break;
		case 8:
			__LIB_2__::func_411(&(uParam0->f_230[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(uParam0->f_230[1 /*17*/]), 0, 0);
			__LIB_1__::func_581(&(uParam0->f_173), 8388608);
			__LIB_1__::func_993(&(uParam0->f_173), 65536);
			break;
	}
	*iParam1 = iParam2;
}

void func_26(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	Var0 = { func_113(0) };
	if (__LIB_16__::func_946(&(uParam0->f_149[0]), uParam0->f_146, Var0, Var0.f_3, 1, 0, 1))
	{
		if (__LIB_0__::func_272(uParam0->f_149[0], 0))
		{
			__LIB_16__::func_792(uParam0->f_149[0], 28);
			__LIB_1__::func_991(uParam0->f_149[0], 0);
			__LIB_1__::func_948(1973911195, 0, 0.05f, 0, 1, 0, 1, 0);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_149[0], "special_ped_group", 0f);
			if (__LIB_16__::func_864(28, 4194304))
			{
				iVar4 = __LIB_3__::func_672(13631488, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
				__LIB_2__::func_231(uParam0->f_149[0], iVar4, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			else
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(uParam0->f_149[0], joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC"), -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_149[0], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_149[0], joaat("REL_CIVMALE"));
			PED::SET_PED_KEEP_TASK(uParam0->f_149[0], true);
			func_119(uParam0, 0);
			PED::SET_PED_MAX_HEALTH(uParam0->f_149[0], 250);
			__LIB_4__::func_63(uParam0->f_149[0], 250);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_149[0], 297, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_149[0], 143, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_149[0], 317, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_149[0], 344, true);
			if (__LIB_0__::func_181())
			{
				__LIB_0__::func_862(uParam0->f_149[0], 1689938120);
			}
			uParam0->f_151[0] = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_149[0], 0);
			__LIB_0__::func_928(uParam0, uParam0->f_149[0], uParam0->f_168, 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_149[0], Var0, Var0.f_3, true, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_172, "CS_TINYHERMIT", uParam0->f_149[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_172, "w_shotgun_doubleBarrel01", uParam0->f_151[0], 0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_172))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_172, false))
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_172);
				}
			}
			__LIB_9__::func_364(uParam0->f_166, 0, 2016, 0);
			func_123(uParam0);
			func_25(uParam0, iParam1, 3);
		}
	}
}

void func_27(var uParam0, int iParam1)
{
	bool bVar0;
	bVar0 = false;
	func_124(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_149[0]))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_172) && ANIMSCENE::_0x1F0E401031E20146(uParam0->f_172, func_13(27)))
	{
		ENTITY::_0x80FDEB3A9E9AA578(uParam0->f_149[0], 0);
	}
	if (!__LIB_0__::func_27(uParam0->f_173, 268435456))
	{
		if (__LIB_0__::func_393(Global_35, uParam0->f_156, 0, 1))
		{
			return;
		}
	}
	if (__LIB_0__::func_393(Global_35, uParam0->f_155, 0, 1))
	{
		if (!__LIB_0__::func_27(uParam0->f_173, 268435456))
		{
			if (!__LIB_0__::func_393(Global_35, uParam0->f_156, 0, 1))
			{
				__LIB_1__::func_581(&(uParam0->f_173), 268435456);
			}
		}
	}
	else
	{
		return;
	}
	if (uParam0->f_176 <= 9)
	{
		func_126(uParam0, func_125(uParam0->f_176), &bVar0);
		if (bVar0)
		{
			uParam0->f_176++;
			__LIB_7__::func_448(uParam0->f_145, uParam0->f_176);
		}
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_0__::func_67(uParam0->f_181)))
	{
		uParam0->f_181 = { func_129(uParam0) };
	}
	else if (func_126(uParam0, uParam0->f_181, &bVar0))
	{
		uParam0->f_181 = { __LIB_1__::func_344("") };
	}
	if (__LIB_0__::func_393(Global_35, uParam0->f_165, 0, 1))
	{
		if (uParam0->f_180 == -1)
		{
			uParam0->f_180 = GRAPHICS::CREATE_TRACKED_POINT();
			GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_180, ENTITY::GET_ENTITY_COORDS(uParam0->f_149[0], true, false), 1f);
			__LIB_1__::func_148(&(uParam0->f_139));
		}
		else if (__LIB_0__::func_264(&(uParam0->f_139)) > 0.2f)
		{
			if (GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_180) <= 5 && __LIB_0__::func_48(Global_35, uParam0->f_149[0], 20f, 1))
			{
				__LIB_16__::func_849(28, &(uParam0->f_149[0]), &(uParam0->f_173), 4);
				AUDIO::_0x36559148B78853B3(1, 1, 0);
				func_25(uParam0, iParam1, 5);
			}
		}
	}
}

void func_28(var uParam0, int iParam1)
{
	func_124(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_149[0]))
	{
		return;
	}
	if (uParam0->f_170 > 6)
	{
		func_25(uParam0, iParam1, 9);
	}
	else if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_149[0]))
	{
		if (func_14(uParam0, &(uParam0->f_172), func_13(func_134(uParam0->f_171)), 0, 1))
		{
			uParam0->f_170++;
			if (__LIB_0__::func_6(uParam0->f_145))
			{
				__LIB_1__::func_532(uParam0->f_145, uParam0->f_170);
			}
			func_25(uParam0, iParam1, 6);
		}
		else if (!__LIB_0__::func_27(uParam0->f_173, 131072))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_172, false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_172) >= 4f)
				{
					AUDIO::_0x36559148B78853B3(1, 0, 0);
					__LIB_1__::func_581(&(uParam0->f_173), 131072);
				}
			}
		}
	}
}

void func_29(var uParam0, int iParam1)
{
	func_124(uParam0);
	if (((!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_149[0])) || !VOLUME::_DOES_VOLUME_EXIST(uParam0->f_157)) || !VOLUME::_DOES_VOLUME_EXIST(uParam0->f_158))
	{
		return;
	}
	if (!__LIB_0__::func_48(Global_35, uParam0->f_149[0], 25f, 1) || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_158, true, 0))
	{
		func_25(uParam0, iParam1, 8);
	}
	else if ((__LIB_0__::func_48(Global_35, uParam0->f_149[0], 4f, 1) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_157, true, 0)) || (uParam0->f_177 >= 2 && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)))
	{
		func_25(uParam0, iParam1, 11);
	}
	else if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_149[0]) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
	{
		if (func_14(uParam0, &(uParam0->f_172), func_13(func_136(uParam0->f_171)), 0, 1))
		{
			uParam0->f_177++;
			func_25(uParam0, iParam1, 7);
		}
	}
}

void func_30(var uParam0, int iParam1)
{
	func_124(uParam0);
	if (((!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_149[0])) || !VOLUME::_DOES_VOLUME_EXIST(uParam0->f_158)) || !VOLUME::_DOES_VOLUME_EXIST(uParam0->f_157))
	{
		return;
	}
	if (!__LIB_0__::func_48(Global_35, uParam0->f_149[0], 25f, 1) || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_158, true, 0))
	{
		func_25(uParam0, iParam1, 8);
	}
	else if ((__LIB_0__::func_48(Global_35, uParam0->f_149[0], 4f, 1) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_157, true, 0)) || (uParam0->f_177 >= 2 && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)))
	{
		func_25(uParam0, iParam1, 11);
	}
	else if (!__LIB_0__::func_27(uParam0->f_173, 524288))
	{
		if (func_14(uParam0, &(uParam0->f_172), func_13(func_137(uParam0->f_171)), 0, 1))
		{
			func_25(uParam0, iParam1, 8);
		}
	}
}

void func_31(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar0 = func_138(uParam0->f_171);
	if (func_14(uParam0, &(uParam0->f_172), func_13(iVar0), 0, 1))
	{
		func_25(uParam0, iParam1, 9);
	}
	if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_172, func_13(iVar0)))
	{
		if (uParam0->f_290 && !__LIB_0__::func_27(uParam0->f_173, 4096))
		{
			if (iVar0 == 12)
			{
				fVar1 = 0.4731f;
			}
			else
			{
				fVar1 = 0.4297f;
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_172) >= fVar1)
			{
				iVar2 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_172, "p_door60", false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_172, "p_door60", iVar2);
				}
				__LIB_1__::func_948(1973911195, 1, 0, 0, 1, 0, 1, 0);
				OBJECT::_0xC07B91B996C1DE89(1973911195, 1);
				__LIB_1__::func_581(&(uParam0->f_173), 4096);
			}
		}
		uParam0->f_290 = 1;
	}
}

void func_32(var uParam0, int iParam1)
{
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0)
	{
		func_25(uParam0, iParam1, 11);
	}
	switch (uParam0->f_265)
	{
		case 0:
			ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_172, 0);
			if (!__LIB_0__::func_27(uParam0->f_173, 8192))
			{
				uParam0->f_292 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uParam0->f_149[0]);
				__LIB_1__::func_581(&(uParam0->f_173), 8192);
			}
			PED::SET_PED_CONFIG_FLAG(uParam0->f_149[0], 226, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_149[0], 268, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_149[0], 67, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_149[0], 30, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_149[0], 111, false);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_149[0], 512, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_149[0], false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_149[0], 168, true);
			func_139(uParam0, 1);
			break;
		case 1:
			func_140(uParam0);
			break;
		case 2:
			if (func_141(uParam0))
			{
				func_139(uParam0, 1);
			}
			break;
	}
	if (uParam0->f_265 == 1 || uParam0->f_265 == 2)
	{
		func_142(uParam0);
	}
}

void func_34(var uParam0, int iParam1)
{
	bool bVar0;
	if (!__LIB_0__::func_27(uParam0->f_173, 8192))
	{
		uParam0->f_292 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uParam0->f_149[0]);
		__LIB_2__::func_480(&(uParam0->f_230), 0, 1, 1, 0);
		__LIB_1__::func_581(&(uParam0->f_173), 8192);
	}
	if (!__LIB_0__::func_27(uParam0->f_173, 256))
	{
		if (!__LIB_16__::func_876(&(uParam0->f_172)))
		{
			__LIB_1__::func_993(&(uParam0->f_173), 256);
			return;
		}
		else
		{
			func_144(uParam0);
			__LIB_1__::func_581(&(uParam0->f_173), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_149[0]))
	{
		return;
	}
	bVar0 = false;
	if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY(uParam0->f_149[0]) != 0) || __LIB_0__::func_665(Global_35, uParam0->f_149[0], 1, 1) < 7f)
	{
		bVar0 = true;
	}
	func_119(uParam0, bVar0);
	if (!__LIB_0__::func_163(uParam0->f_149[0], 780511057))
	{
		if (!__LIB_0__::func_27(uParam0->f_173, 2097152))
		{
			if (func_146(uParam0->f_149[0], "OPENS_FIRE", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, uParam0->f_168, 0))
			{
				__LIB_1__::func_581(&(uParam0->f_173), 2097152);
			}
		}
		PED::SET_PED_CONFIG_FLAG(uParam0->f_149[0], 315, false);
		PED::_0xFC3DB99C8144CD81(uParam0->f_149[0], uParam0->f_158, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_149[0], false);
		TASK::TASK_COMBAT_PED(uParam0->f_149[0], Global_35, 0, 0);
	}
	func_142(uParam0);
}

bool func_68(int iParam0, int iParam1, var uParam2, var uParam3)
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
					if (((__LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || __LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || __LIB_9__::func_990(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || __LIB_9__::func_990(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
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
				if (__LIB_16__::func_934(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || __LIB_17__::func_366(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
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

int func_76(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_213(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_16__::func_964(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
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

char* func_82()
{
	return "script@specialped@pdttl_tiny_hermit@ig@ig_1@ig_1";
}

void func_83(var uParam0)
{
	struct<11> Var0;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_154))
	{
		Var0 = { func_219(0) };
		uParam0->f_154 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_155))
	{
		Var0 = { func_219(1) };
		uParam0->f_155 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_156))
	{
		Var0 = { func_219(2) };
		uParam0->f_156 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_157))
	{
		Var0 = { func_219(3) };
		uParam0->f_157 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_158))
	{
		Var0 = { func_219(4) };
		uParam0->f_158 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_159))
	{
		Var0 = { func_219(5) };
		uParam0->f_159 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_160))
	{
		Var0 = { func_219(6) };
		uParam0->f_160 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_165))
	{
		Var0 = { func_219(7) };
		uParam0->f_165 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_161))
	{
		Var0 = { func_219(8) };
		uParam0->f_161 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_162))
	{
		Var0 = { func_219(9) };
		uParam0->f_162 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_163))
	{
		Var0 = { func_219(10) };
		uParam0->f_163 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_164))
	{
		Var0 = { func_219(11) };
		uParam0->f_164 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_166))
	{
		Var0 = { func_219(12) };
		uParam0->f_166 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
}

struct<4> func_113(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 3025.557f, 1779.699f, 83.2056f };
			Var0.f_3 = 142.8609f;
			break;
	}
	return Var0;
}

void func_119(var uParam0, bool bParam1)
{
	PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_149[0], 1);
	PED::_0x815C0074A1BC0D93(uParam0->f_149[0], 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_149[0], 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_149[0], 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_149[0], 46, false);
	PED::_0xB8DE69D9473B7593(uParam0->f_149[0], 0);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uParam0->f_149[0], false);
	if (bParam1)
	{
		PED::SET_PED_COMBAT_ABILITY(uParam0->f_149[0], 2);
		PED::SET_PED_ACCURACY(uParam0->f_149[0], 100);
		PED::_0xE1B3BE07D3AADDED(uParam0->f_149[0], 4, 1);
	}
	else
	{
		PED::SET_PED_COMBAT_ABILITY(uParam0->f_149[0], 1);
		PED::SET_PED_ACCURACY(uParam0->f_149[0], 10);
		PED::_0xE1B3BE07D3AADDED(uParam0->f_149[0], 4, 0);
	}
}

void func_123(var uParam0)
{
	struct<2> Var0;
	char* sVar2;
	int iVar3;
	Var0 = { func_243(1) };
	__LIB_16__::func_872(&(uParam0->f_230[0 /*17*/]), Var0, func_244(), Var0.f_1, 0, 0, 0, 1, 0);
	Var0 = { func_243(2) };
	sVar2 = func_246(&iVar3);
	__LIB_16__::func_872(&(uParam0->f_230[1 /*17*/]), Var0, sVar2, Var0.f_1, 0, 0, 0, 1, iVar3);
	__LIB_3__::func_350(uParam0->f_149[0], &(uParam0->f_230), 25f, 2, 0, 0, 0, 0, 0);
	__LIB_2__::func_411(&(uParam0->f_230[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(uParam0->f_230[1 /*17*/]), 0, 0);
	if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_HERMIT")))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_HERMIT"));
	}
	uParam0->f_268 = 3;
}

void func_124(var uParam0)
{
	if (!__LIB_0__::func_27(uParam0->f_173, 256))
	{
		if (!__LIB_16__::func_876(&(uParam0->f_172)))
		{
			__LIB_1__::func_993(&(uParam0->f_173), 256);
			return;
		}
		else
		{
			func_144(uParam0);
			__LIB_1__::func_581(&(uParam0->f_173), 256);
			return;
		}
	}
}

Vector3 func_125(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			vVar0 = { func_248(0) };
			break;
		case 1:
			vVar0 = { func_248(1) };
			break;
		case 2:
			vVar0 = { func_248(11) };
			break;
		case 3:
			vVar0 = { func_248(3) };
			break;
		case 4:
			vVar0 = { func_248(14) };
			break;
		case 5:
			vVar0 = { func_248(29) };
			break;
		case 6:
			vVar0 = { func_248(6) };
			break;
		case 7:
			vVar0 = { func_248(7) };
			break;
		case 8:
			vVar0 = { func_248(8) };
			break;
		case 9:
			vVar0 = { func_248(25) };
			break;
	}
	return vVar0;
}

bool func_126(var uParam0, vector3 vParam1, bool bParam4)
{
	if (!__LIB_0__::func_27(uParam0->f_173, 1024))
	{
		if (__LIB_2__::func_813(uParam0, vParam1, 0, -1, 0, 0))
		{
			__LIB_1__::func_581(&(uParam0->f_173), 1024);
			*bParam4 = 1;
		}
	}
	else if (!__LIB_16__::func_276(__LIB_0__::func_57(&vParam1)))
	{
		if (!__LIB_0__::func_75(&(uParam0->f_142)))
		{
			__LIB_1__::func_148(&(uParam0->f_142));
		}
		if (__LIB_1__::func_313(&(uParam0->f_142), 7f))
		{
			__LIB_1__::func_993(&(uParam0->f_173), 1024);
			return true;
		}
	}
	return false;
}

Vector3 func_129(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	iVar3 = __LIB_9__::func_844(0, 23, uParam0->f_179);
	switch (iVar3)
	{
		case 0:
			vVar0 = { __LIB_1__::func_344("SPTTL_SPEECHC") };
			break;
		case 1:
			vVar0 = { __LIB_1__::func_344("SPTTL_SPEECHE") };
			break;
		case 2:
			vVar0 = { __LIB_1__::func_344("SPTTL_SPEECHF") };
			break;
		case 3:
			vVar0 = { __LIB_1__::func_344("SPTTL_SPEECHJ") };
			break;
		case 4:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERA") };
			break;
		case 5:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERC") };
			break;
		case 6:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERD") };
			break;
		case 7:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERF") };
			break;
		case 8:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERG") };
			break;
		case 9:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERH") };
			break;
		case 10:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERI") };
			break;
		case 11:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERJ") };
			break;
		case 12:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERK") };
			break;
		case 13:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERL") };
			break;
		case 14:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERM") };
			break;
		case 15:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERN") };
			break;
		case 16:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERO") };
			break;
		case 17:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERQ") };
			break;
		case 18:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERR") };
			break;
		case 19:
			vVar0 = { __LIB_1__::func_344("SPTTL_RETURNA") };
			break;
		case 20:
			vVar0 = { __LIB_1__::func_344("SPTTL_RETURNC") };
			break;
		case 21:
			vVar0 = { __LIB_1__::func_344("SPTTL_RETURND") };
			break;
		case 22:
			vVar0 = { __LIB_1__::func_344("SPTTL_RETURNE") };
			break;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_175, iVar3))
	{
		MISC::SET_BIT(&(uParam0->f_175), iVar3);
		uParam0->f_179 = iVar3;
		return vVar0;
	}
	if (__LIB_12__::func_389(uParam0->f_175) >= 23)
	{
		uParam0->f_175 = 0;
	}
	return __LIB_1__::func_344("");
}

int func_134(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			iVar0 = 6;
			break;
		case 2:
			iVar0 = 7;
			break;
		case 3:
			iVar0 = 8;
			break;
		case 4:
			iVar0 = 9;
			break;
		case 5:
			iVar0 = 10;
			break;
		case 6:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

int func_136(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			iVar0 = 0;
			break;
		case 2:
			iVar0 = 1;
			break;
		case 3:
			iVar0 = 2;
			break;
		case 4:
			iVar0 = 3;
			break;
		case 5:
			iVar0 = 4;
			break;
		case 6:
			iVar0 = 5;
			break;
	}
	return iVar0;
}

int func_137(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			iVar0 = 14;
			break;
		case 2:
			iVar0 = 15;
			break;
		case 3:
			iVar0 = 16;
			break;
		case 4:
			iVar0 = 15;
			break;
		case 5:
			iVar0 = 14;
			break;
		case 6:
			iVar0 = 16;
			break;
	}
	return iVar0;
}

int func_138(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			iVar0 = 12;
			break;
		case 2:
			iVar0 = 13;
			break;
		case 3:
			iVar0 = 12;
			break;
		case 4:
			iVar0 = 13;
			break;
		case 5:
			iVar0 = 12;
			break;
		case 6:
			iVar0 = 13;
			break;
	}
	return iVar0;
}

void func_139(var uParam0, int iParam1)
{
	uParam0->f_266 = uParam0->f_265;
	uParam0->f_265 = iParam1;
}

void func_140(var uParam0)
{
	if (__LIB_0__::func_393(Global_35, uParam0->f_164, 0, 1))
	{
		if (uParam0->f_267 != 4 || !func_260(uParam0, 4))
		{
			func_261(uParam0, 4);
			func_139(uParam0, 2);
		}
		else if (!__LIB_2__::func_167(uParam0->f_149[0], 1))
		{
			func_263(uParam0, 1);
		}
	}
	else if (__LIB_0__::func_393(Global_35, uParam0->f_163, 0, 1))
	{
		if (uParam0->f_267 != 3 || !func_260(uParam0, 3))
		{
			func_261(uParam0, 3);
			func_139(uParam0, 2);
		}
		else if (!__LIB_2__::func_167(uParam0->f_149[0], 1))
		{
			func_263(uParam0, 1);
		}
	}
	else if (__LIB_0__::func_393(Global_35, uParam0->f_162, 0, 1))
	{
		if (uParam0->f_267 != 2 || !func_260(uParam0, 2))
		{
			func_261(uParam0, 2);
			func_139(uParam0, 2);
		}
		else if (!__LIB_2__::func_167(uParam0->f_149[0], 1))
		{
			func_263(uParam0, 1);
		}
	}
	else if (__LIB_0__::func_393(Global_35, uParam0->f_161, 0, 1))
	{
		if (uParam0->f_267 != 1 || !func_260(uParam0, 1))
		{
			func_261(uParam0, 1);
			func_139(uParam0, 2);
		}
		else if (!__LIB_2__::func_167(uParam0->f_149[0], 1))
		{
			func_263(uParam0, 1);
		}
	}
	else if (!__LIB_0__::func_163(uParam0->f_149[0], -1073489615))
	{
		func_263(uParam0, 0);
	}
}

bool func_141(var uParam0)
{
	if (func_260(uParam0, uParam0->f_267))
	{
		return true;
	}
	else if (!__LIB_0__::func_163(uParam0->f_149[0], 242628503))
	{
		func_261(uParam0, uParam0->f_267);
	}
	return false;
}

void func_142(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_173, 2097152))
	{
		switch (uParam0->f_303)
		{
			case 0:
				__LIB_1__::func_283(&(uParam0->f_304), 0);
				if (uParam0->f_307 <= 0f)
				{
					uParam0->f_307 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 12f);
				}
				if (__LIB_1__::func_285(&(uParam0->f_304), uParam0->f_307))
				{
					uParam0->f_303 = 1;
				}
				break;
			case 1:
				if (func_265(uParam0))
				{
					uParam0->f_303 = 2;
				}
				break;
			case 2:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_302))
				{
					if (__LIB_16__::func_927(uParam0->f_149[0], uParam0->f_302, joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, 1, "TINY_HERMIT", uParam0->f_301, 1))
					{
						uParam0->f_293[uParam0->f_300] = 1;
						__LIB_1__::func_148(&(uParam0->f_304));
						uParam0->f_303 = 3;
					}
				}
				break;
			case 3:
				if (__LIB_1__::func_285(&(uParam0->f_304), 2f))
				{
					uParam0->f_303 = 4;
				}
				break;
			case 4:
				uParam0->f_302 = "";
				uParam0->f_300 = -1;
				uParam0->f_301 = 0;
				uParam0->f_307 = -1f;
				__LIB_0__::func_37(&(uParam0->f_304));
				uParam0->f_303 = 0;
				break;
		}
	}
}

void func_144(var uParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_172, "CS_TINYHERMIT", uParam0->f_149[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_172, "w_shotgun_doubleBarrel01", uParam0->f_151[0], 0);
}

bool func_146(int iParam0, char* sParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	struct<7> Var0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_3 = iParam2;
	Var0.f_6 = iParam5;
	Var0.f_1 = uParam4;
	Var0.f_4 = uParam3;
	return __LIB_1__::func_208(iParam0, &Var0);
}

int func_213(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_213(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

struct<11> func_219(int iParam0)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 3025.557f, 1779.699f, 83.2056f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "RandomEventBlock";
			break;
		case 1:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 3025.943f, 1772.33f, 83.2056f };
			Var0.f_4 = { 0f, 0f, -23f };
			Var0.f_7 = { 25f, 25f, 30f };
			Var0.f_10 = "Seen";
			break;
		case 2:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 3044.034f, 1771.698f, 85.75678f };
			Var0.f_4 = { 0f, 0f, -20f };
			Var0.f_7 = { 25f, 10f, 10f };
			Var0.f_10 = "SeenBlock";
			break;
		case 3:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 3026.856f, 1775.335f, 83.2056f };
			Var0.f_4 = { 0f, 0f, 160f };
			Var0.f_7 = { 10f, 6f, 10f };
			Var0.f_10 = "Trigger";
			break;
		case 4:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 3024.427f, 1769.17f, 85.09901f };
			Var0.f_4 = { 0f, 0f, 160f };
			Var0.f_7 = { 18f, 25f, 20f };
			Var0.f_10 = "StayAway";
			break;
		case 5:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 3023.705f, 1768.557f, 83.9391f };
			Var0.f_4 = { 0f, 0f, 160f };
			Var0.f_7 = { 10f, 16f, 8f };
			Var0.f_10 = "LookIKVolume";
			break;
		case 6:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 3027.851f, 1779.131f, 83.547f };
			Var0.f_4 = { 0f, 0f, -19.151f };
			Var0.f_7 = { 8.632f, 6.255f, 7.358f };
			Var0.f_10 = "ShackInterior";
			break;
		case 7:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 3023.276f, 1768.44f, 82.777f };
			Var0.f_7 = { 9.314f, 12.025f, 6.857f };
			Var0.f_4 = { 0f, 0f, -19.986f };
			Var0.f_10 = "ShackExit";
			break;
		case 8:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 3023.799f, 1768.604f, 82.897f };
			Var0.f_4 = { 0f, 0f, -21.129f };
			Var0.f_7 = { 24.44f, 15.408f, 11.345f };
			Var0.f_10 = "ShackAimFront";
			break;
		case 9:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 3016.639f, 1783.032f, 82.197f };
			Var0.f_4 = { 0f, 0f, -21.276f };
			Var0.f_7 = { 14.542f, 18.82f, 13.379f };
			Var0.f_10 = "ShackAimSideWindow";
			break;
		case 10:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 3030.316f, 1790.982f, 82.668f };
			Var0.f_4 = { 0f, 0f, -21.489f };
			Var0.f_7 = { 25.242f, 16.928f, 12.362f };
			Var0.f_10 = "ShackAimBack";
			break;
		case 11:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 3024.178f, 1775.486f, 82.984f };
			Var0.f_4 = { 0f, 0f, -20.785f };
			Var0.f_7 = { 2.388f, 2.673f, 6.328f };
			Var0.f_10 = "ShackAtDoor";
			break;
		case 12:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 3022.437f, 1764.7f, 82.499f };
			Var0.f_4 = { 0f, 0f, -19.998f };
			Var0.f_7 = { 47.598f, 38.92f, 12.015f };
			Var0.f_10 = "ShackAnimalRestrictions";
			break;
	}
	return Var0;
}

struct<2> func_243(int iParam0)
{
	struct<2> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = "SPTH_UC_TALK";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 1:
			Var0 = "INTERACT_DEFUSE";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 2:
			Var0 = "INTERACT_INSULT";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
	}
	return Var0;
}

char* func_244()
{
	return "DEFUSE_ON_PROPERTY";
}

char* func_246(int iParam0)
{
	if (__LIB_0__::func_113())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
		{
			case 0:
				*iParam0 = 2;
				return "INSULT_TINYHERMIT_CONV_PART1";
			case 1:
				*iParam0 = 2;
				return "INSULT_TINYHERMIT_CONV_PART3";
			case 2:
				*iParam0 = 6;
				return "INSULT_TERRITORY_INTRUDED_CONV_PART3";
			case 3:
				*iParam0 = 5;
				return "INSULT_TERRITORY_INTRUDED_CONV_PART1";
			case 4:
				*iParam0 = 4;
				return "INSULT_TERRITORY_INTRUDED_CONV_PART2";
			case 5:
				*iParam0 = 3;
				return "INSULT_TERRITORY_INTRUDED_CONV_PART1";
			case 6:
				*iParam0 = 1;
				return "INSULT_TERRITORY_INTRUDED_CONV_PART2";
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				*iParam0 = 15;
				return "INSULT_MALE_CONV_PART1";
			case 1:
				*iParam0 = 18;
				return "INSULT_MALE_CONV_PART1";
			case 2:
				*iParam0 = 1;
				return "INSULT_MALE_CONV_PART1";
			case 3:
				*iParam0 = 2;
				return "INSULT_MALE_CONV_PART1";
			case 4:
				*iParam0 = 19;
				return "INSULT_MALE_CONV_PART1";
		}
	}
	*iParam0 = 1;
	return "INSULT_MALE_CONV_PART1";
}

Vector3 func_248(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			vVar0 = { __LIB_1__::func_344("SPTTL_SPEECHA") };
			break;
		case 1:
			vVar0 = { __LIB_1__::func_344("SPTTL_SPEECHB") };
			break;
		case 3:
			vVar0 = { __LIB_1__::func_344("SPTTL_SPEECHD") };
			break;
		case 6:
			vVar0 = { __LIB_1__::func_344("SPTTL_SPEECHG") };
			break;
		case 7:
			vVar0 = { __LIB_1__::func_344("SPTTL_SPEECHH") };
			break;
		case 8:
			vVar0 = { __LIB_1__::func_344("SPTTL_SPEECHI") };
			break;
		case 11:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERB") };
			break;
		case 14:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERE") };
			break;
		case 25:
			vVar0 = { __LIB_1__::func_344("SPTTL_LINGERP") };
			break;
		case 29:
			vVar0 = { __LIB_1__::func_344("SPTTL_RETURNB") };
			break;
	}
	return vVar0;
}

bool func_260(var uParam0, int iParam1)
{
	vector3 vVar0;
	if (iParam1 == 0)
	{
		return false;
	}
	vVar0 = { func_368(iParam1) };
	if (__LIB_1__::func_992(uParam0->f_149[0], vVar0, 0) <= (0.5f * 0.5f))
	{
		return true;
	}
	return false;
}

int func_261(var uParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var4;
	if (iParam1 == 0)
	{
		return 0;
	}
	if ((!__LIB_0__::func_272(uParam0->f_149[0], 0) || PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID())) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	uParam0->f_267 = iParam1;
	Var0 = { func_368(iParam1) };
	if (!func_260(uParam0, iParam1))
	{
		if (!__LIB_0__::func_163(uParam0->f_149[0], -1672495956))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(uParam0->f_149[0], Var0, 2f, -1, 0.1f, 2, Var4, Var0.f_3);
		}
	}
	else if (!__LIB_0__::func_163(uParam0->f_149[0], -1073489615))
	{
		TASK::TASK_AIM_AT_ENTITY(uParam0->f_149[0], Global_35, -1, 0, 0);
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_263(var uParam0, int iParam1)
{
	if ((!__LIB_0__::func_272(uParam0->f_149[0], 0) || PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID())) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	TASK::CLEAR_PED_TASKS(uParam0->f_149[0], true, false);
	if (!__LIB_0__::func_27(uParam0->f_173, 2097152))
	{
		if (func_146(uParam0->f_149[0], "OPENS_FIRE", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, uParam0->f_168, 0))
		{
			__LIB_1__::func_581(&(uParam0->f_173), 2097152);
		}
	}
	PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_149[0], 0);
	TASK::TASK_COMBAT_PED(uParam0->f_149[0], Global_35, 0, 0);
	return 1;
}

bool func_265(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	sVar0 = "";
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	iVar2 = -1;
	if (uParam0->f_293[iVar1])
	{
		return false;
	}
	switch (iVar1)
	{
		case 0:
			sVar0 = "FIGHT_RESPONSE";
			iVar2 = 0;
			break;
		case 1:
			sVar0 = "FIGHT_RESPONSE";
			iVar2 = 1;
			break;
		case 2:
			sVar0 = "MELEE_BRING_IT_ON";
			iVar2 = 0;
			break;
		case 3:
			sVar0 = "MELEE_BRING_IT_ON";
			iVar2 = 1;
			break;
		case 4:
			sVar0 = "GENERIC_INSULT_HIGH_MALE";
			iVar2 = 0;
			break;
		case 5:
			sVar0 = "GENERIC_INSULT_HIGH_NEUTRAL";
			iVar2 = 0;
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		uParam0->f_302 = sVar0;
		uParam0->f_300 = iVar1;
		uParam0->f_301 = iVar2;
		return true;
	}
	return false;
}

struct<4> func_368(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 1:
			Var0 = { 3028.76f, 1776f, 84.13f };
			Var0.f_3 = 166.34f;
			break;
		case 2:
			Var0 = { 3024f, 1778.85f, 84.2f };
			Var0.f_3 = 77.92f;
			break;
		case 3:
			Var0 = { 3030.3f, 1780.6f, 84.19f };
			Var0.f_3 = -14.89f;
			break;
		case 4:
			Var0 = { 3026.38f, 1780.4f, 84.21f };
			Var0.f_3 = 149.54f;
			break;
	}
	return Var0;
}

