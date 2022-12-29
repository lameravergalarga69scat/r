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
	struct<4> Local_14 = { 0, 0, 0, 0 } ;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		__LIB_17__::func_550(&Local_14);
	}
	__LIB_11__::func_243(&Local_14, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_14))
	{
		__LIB_5__::func_233(&Local_14);
		switch (__LIB_0__::func_57(Local_14))
		{
			case 0:
				if (__LIB_0__::func_0(&Local_14))
				{
					__LIB_0__::func_19(&Local_14, 1);
				}
				break;
			case 1:
				if (func_8(&Local_14))
				{
					__LIB_0__::func_19(&Local_14, 2);
				}
				break;
			case 2:
				if (func_9(&Local_14))
				{
					__LIB_0__::func_19(&Local_14, 3);
				}
				break;
			case 3:
				__LIB_17__::func_550(&Local_14);
				break;
		}
		BUILTIN::WAIT(0);
	}
	__LIB_17__::func_550(&Local_14);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return false;
	}
	return func_21(uParam0);
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

int func_21(var uParam0)
{
	CAM::_0x1B3C2D961F5FC0E1("script@Story@FIN1@ride_to_beavers");
	STREAMING::PREFETCH_SRL("script@cme@FIN1_CME_SHOT1_srl");
	STREAMING::_0xD9F2FF4AF394D926();
	STREAMING::_0xAE00387E53B1E9FC();
	return 1;
}

bool func_23(var uParam0)
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1835011[59 /*74*/].f_3))) > 0)
	{
		STREAMING::END_SRL();
		return true;
	}
	return false;
}

