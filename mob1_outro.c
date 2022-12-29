#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<4> Local_3 = { 0, 0, 0, 0 } ;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		__LIB_17__::func_550(&Local_3);
	}
	__LIB_11__::func_243(&Local_3, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_3))
	{
		__LIB_5__::func_233(&Local_3);
		switch (__LIB_0__::func_57(Local_3))
		{
			case 0:
				if (__LIB_0__::func_0(&Local_3))
				{
					__LIB_0__::func_19(&Local_3, 1);
				}
				break;
			case 1:
				if (__LIB_11__::func_356(&Local_3))
				{
					__LIB_0__::func_19(&Local_3, 2);
				}
				break;
			case 2:
				if (func_9(&Local_3))
				{
					__LIB_0__::func_19(&Local_3, 3);
				}
				break;
			case 3:
				__LIB_17__::func_550(&Local_3);
				break;
		}
		BUILTIN::WAIT(0);
	}
	__LIB_17__::func_550(&Local_3);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_9(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

