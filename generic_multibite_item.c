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
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#endregion
void __EntryFunction__()
{
	struct<2> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	__LIB_9__::func_310(&ScriptParam_0, &(Var0.f_1));
	Var0.f_1.f_2 = 3f;
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (!ScriptParam_0.f_3)
		{
			__LIB_9__::func_311(&(Var0.f_1));
		}
		switch (Var0)
		{
			case 0:
				if (__LIB_0__::func_144(Var0.f_1, 0))
				{
					__LIB_9__::func_269(&(Var0.f_1));
				}
				if (ScriptParam_0.f_3)
				{
					Var0.f_1.f_2 = 1f;
					__LIB_0__::func_19(&Var0, 2);
				}
				else
				{
					__LIB_0__::func_19(&Var0, 1);
				}
				break;
			case 1:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					Var0.f_1.f_1++;
					__LIB_9__::func_318(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
				}
				if (IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2)
				{
					__LIB_0__::func_19(&Var0, 3);
				}
				break;
			case 2:
				__LIB_9__::func_318(&(Var0.f_1), 1);
				__LIB_0__::func_19(&Var0, 3);
				break;
			case 3:
				if (ScriptParam_0.f_3)
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (Var0 <= 1)
	{
		while (IntToFloat(Var0.f_1.f_1) < Var0.f_1.f_2)
		{
			Var0.f_1.f_1 = (1 + Var0.f_1.f_1);
			__LIB_9__::func_318(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
		}
	}
}

