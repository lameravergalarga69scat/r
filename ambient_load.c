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
	struct<27> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	while (true)
	{
		switch (Local_14)
		{
			case 0:
				if (func_2(&Local_14))
				{
				}
				Local_14.f_4 = Global_40.f_9.f_1;
				Local_14.f_5 = { Global_40.f_9.f_2 };
				Local_14.f_8 = Global_40.f_9.f_5;
				PROPSET::_REQUEST_PROPSET(Local_14.f_4);
				__LIB_12__::func_994(&(Local_14.f_12), Local_14.f_5, 0f, 0, 1, 0, 1, 0, 0, 1, 1);
				func_4(&Local_14, 1);
				break;
			case 1:
				if (__LIB_10__::func_926(&(Local_14.f_12)))
				{
					Local_14.f_26 = MISC::GET_GAME_TIMER();
					func_4(&Local_14, 2);
				}
				break;
			case 2:
				if (func_2(&Local_14))
				{
				}
				if (PROPSET::_HAS_PROPSET_LOADED(Local_14.f_4) || Local_14.f_26 + 5000 < MISC::GET_GAME_TIMER())
				{
					__LIB_3__::func_337(&(Local_14.f_10), Local_14.f_5, 4.5f);
					__LIB_2__::func_659(&(Local_14.f_11), Local_14.f_5, 4.5f, 0, 0);
					Local_14.f_2 = PROPSET::_CREATE_PROPSET(Local_14.f_4, Local_14.f_5, 1, Local_14.f_8, 1200f, false, true);
					Local_14.f_26 = MISC::GET_GAME_TIMER();
					func_4(&Local_14, 3);
				}
				break;
			case 3:
				if (func_2(&Local_14))
				{
				}
				Local_14.f_3 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Local_14.f_5, Global_40.f_9.f_6, 100f, 1, false);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_14.f_3))
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, Local_14.f_3, 0, 0, false, true, 0, false, -1f, false);
					Local_14.f_26 = MISC::GET_GAME_TIMER();
					func_4(&Local_14, 4);
				}
				else if (5000 + Local_14.f_26) < MISC::GET_GAME_TIMER()
				{
					Local_14.f_26 = MISC::GET_GAME_TIMER();
					func_4(&Local_14, 4);
				}
				break;
			case 4:
				if (func_2(&Local_14))
				{
				}
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || (5000 + Local_14.f_26) < MISC::GET_GAME_TIMER())
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
					__LIB_0__::func_319(1024);
					__LIB_1__::func_952();
					AUDIO::PLAY_SOUND_FRONTEND("TITLE_SCREEN_EXIT", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
					CAM::DO_SCREEN_FADE_IN(500);
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
					HUD::_UIPROMPT_FILTER_CLEAR();
					__LIB_1__::func_971(0);
					__LIB_18__::func_775();
					func_4(&Local_14, 5);
				}
				break;
			case 5:
				if (func_2(&Local_14))
				{
				}
				func_1();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1()
{
	__LIB_0__::func_8(&Global_1935630, 131072);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(int iParam0)
{
	if (iParam0->f_1)
	{
		iParam0->f_1 = 0;
		return true;
	}
	return false;
}

void func_4(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
	iParam0->f_1 = 1;
}

