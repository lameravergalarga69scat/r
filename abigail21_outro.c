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
	bool bLocal_14 = false;
	bool bLocal_15 = false;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	struct<4> Local_27 = { 0, 0, 0, 0 } ;
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
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_16 = 266000;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_27);
	}
	func_2(&Local_27, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_27))
	{
		__LIB_5__::func_233(&Local_27);
		switch (__LIB_0__::func_57(Local_27))
		{
			case 0:
				if (__LIB_0__::func_0(&Local_27))
				{
					__LIB_0__::func_19(&Local_27, 1);
				}
				break;
			case 1:
				if (func_8(&Local_27))
				{
					__LIB_0__::func_19(&Local_27, 2);
				}
				break;
			case 2:
				if (func_9(&Local_27))
				{
					__LIB_0__::func_19(&Local_27, 3);
				}
				break;
			case 3:
				func_1(&Local_27);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_27);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_1__::func_752();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_31(iVar1) && __LIB_0__::func_699(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (__LIB_1__::func_22(iVar1))
				{
					__LIB_1__::func_774(iVar1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (__LIB_4__::func_802(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
		__LIB_4__::func_803(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		__LIB_4__::func_804(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		__LIB_4__::func_804(uParam0, 2);
	}
	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

int func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return 0;
	}
	return __LIB_0__::func_16(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!func_23(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_11(var uParam0)
{
	__LIB_1__::func_600(1);
	POPULATION::_0xBC90BDF4E5228EA1();
	AUDIO::STOP_AUDIO_SCENES();
	Global_1327479.f_9 = 0;
	return 1;
}

void func_19(var uParam0)
{
	__LIB_1__::func_600(0);
	POPULATION::_0xC6DCC2A3A8825C85(1);
	MAP::SET_WAYPOINT_OFF();
	AUDIO::_0x6339C1EA3979B5F7("pre_ride", "beechers_ride_scenes");
}

bool func_23(var uParam0)
{
	int iVar0;
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 297, true);
	PLAYER::_0x16752DAA7E6D3F72(PLAYER::PLAYER_ID());
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	iVar0 = PED::GET_MOUNT(Global_35);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_RESET_FLAG(iVar0, 49, true);
		PED::SET_PED_RESET_FLAG(iVar0, 53, true);
	}
	if (func_44())
	{
		return true;
	}
	return false;
}

bool func_44()
{
	switch (iLocal_17)
	{
		case 0:
			__LIB_0__::func_77(420, 420, 1);
			Global_1327479.f_9 = 1;
			__LIB_3__::func_438(420);
			__LIB_1__::func_980(420f, 1, 0);
			__LIB_1__::func_148(&uLocal_18);
			iLocal_17++;
			break;
		case 1:
			if (__LIB_0__::func_71(Global_35))
			{
				if (!__LIB_0__::func_266(Global_35, -2540.5f, 584.9f, 139.5f, 100f, 1, 1) || func_68())
				{
					AUDIO::_0xAC84686C06184B0D("ride", "beechers_ride_scenes");
					AUDIO::TRIGGER_MUSIC_EVENT("AB21_BEECHERS_RIDE_SONG_EVENT");
					UIFEED::_0x6035E8FBCA32AC5E();
					__LIB_1__::func_148(&uLocal_24);
					bLocal_14 = true;
					iLocal_17++;
				}
			}
			break;
		case 2:
			if (AUDIO::_0xE600F61F54A444A6())
			{
				iLocal_17++;
			}
			break;
		case 3:
			if (!AUDIO::_0xE600F61F54A444A6())
			{
				AUDIO::_0x9428447DED71FC7E("beechers_ride_scenes");
				return true;
			}
			else if (!bLocal_14)
			{
				AUDIO::_0x9428447DED71FC7E("beechers_ride_scenes");
				return true;
			}
			else if (AUDIO::_0xE600F61F54A444A6() && AUDIO::GET_MUSIC_PLAYTIME() >= (iLocal_16 - 7000))
			{
				AUDIO::_0x9428447DED71FC7E("beechers_ride_scenes");
				return true;
			}
			else if (__LIB_0__::func_296(0, 1, 1))
			{
				AUDIO::_0x9428447DED71FC7E("beechers_ride_scenes");
				return true;
			}
			else
			{
				if (!__LIB_0__::func_75(&uLocal_21))
				{
					if (!__LIB_0__::func_396(Global_35))
					{
						__LIB_1__::func_148(&uLocal_21);
					}
				}
				else if (__LIB_0__::func_396(Global_35))
				{
					__LIB_0__::func_37(&uLocal_21);
				}
				else if (__LIB_0__::func_264(&uLocal_21) > 30f)
				{
					__LIB_3__::func_353("AB21_BEECHERS_RIDE_SONG_EARLY_STOP", 0);
					bLocal_14 = false;
				}
				if (!__LIB_0__::func_48(Global_35, PED::_GET_LAST_MOUNT(Global_35), 8f, 1))
				{
					__LIB_3__::func_353("AB21_BEECHERS_RIDE_SONG_EARLY_STOP", 0);
					bLocal_14 = false;
				}
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0 && !PED::IS_PED_ON_MOUNT(Global_35))
				{
					__LIB_3__::func_353("AB21_BEECHERS_RIDE_SONG_EARLY_STOP", 0);
					bLocal_14 = false;
				}
				if (PED::IS_PED_SHOOTING(Global_35) || PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					__LIB_3__::func_353("AB21_BEECHERS_RIDE_SONG_EARLY_STOP", 0);
					bLocal_14 = false;
				}
			}
			if (__LIB_0__::func_264(&uLocal_18) >= 420f)
			{
			}
			else if ((bLocal_15 && __LIB_0__::func_264(&uLocal_18) >= 10f) && __LIB_0__::func_45("WNT_CAM_HELP", 10000, 0, 0, 1, 1) != 0)
			{
				bLocal_15 = false;
			}
			break;
	}
	return false;
}

bool func_68()
{
	vector3 vVar0;
	if (PATHFIND::_0xEFC535C9FAF563B3(&vVar0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(-305.7542f, 793.8676f, 117.0224f, vVar0, true) < 400f || MISC::GET_DISTANCE_BETWEEN_COORDS(-808.5521f, -1279.315f, 42.6591f, vVar0, true) < 400f)
		{
			bLocal_15 = true;
			return true;
		}
	}
	return false;
}

