#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	func_1(iScriptParam_0);
	uLocal_0 = uLocal_0;
	while (__LIB_0__::func_0())
	{
		BUILTIN::WAIT(0);
		uLocal_1 = uLocal_1;
	}
	func_3(iScriptParam_0);
}

void func_1(int iParam0)
{
	iParam0 = iParam0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3(iParam0);
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
	}
}

void func_3(int iParam0)
{
	__LIB_0__::func_25(iParam0, 4);
	__LIB_0__::func_25(iParam0, 8);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_2__::func_822();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

