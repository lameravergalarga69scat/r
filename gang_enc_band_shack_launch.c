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
	var uLocal_14 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	struct<10> Var0;
	struct<16> Var10;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_14 = ScriptParam_0;
	if (__LIB_0__::func_2() == -1)
	{
	}
	else
	{
		func_2();
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_2();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (Global_1879534)
	{
		BUILTIN::WAIT(0);
	}
	Var0 = __LIB_9__::func_259(5);
	Var0.f_6 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "gang_enc_bandito_shack", 32);
	Var10.f_14 = 2048;
	Var10.f_15 = 1;
	__LIB_4__::func_709(Var10, 0);
	func_2();
}

void func_2()
{
	SCRIPTS::_0xE7282390542F570D(uLocal_14);
	if (__LIB_0__::func_2() != -1)
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

