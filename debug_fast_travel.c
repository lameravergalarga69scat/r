#region Local Var
	bool bLocal_0 = false;
#endregion
void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	__LIB_0__::func_11();
	while (!bLocal_0)
	{
		__LIB_0__::func_11();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	bLocal_0 = false;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

