#region Local Var
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
	bool bVar0;
	int iVar1;
	int iVar2;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0)
	{
		iVar2 = iVar1;
		if (__LIB_0__::func_1(Global_1415419.f_19[iVar2 /*12*/].f_11, 8))
		{
			__LIB_7__::func_526(iVar2);
		}
		iVar1++;
		if (iVar1 > 247)
		{
			bVar0 = true;
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

