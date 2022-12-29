#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	bool bLocal_5 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	iLocal_0 = 1;
	iLocal_2 = vScriptParam_0.x;
	uLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
	__LIB_0__::func_11();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_5__::func_616();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && __LIB_2__::func_821())
	{
		__LIB_0__::func_11();
		__LIB_3__::func_126();
		func_6();
		BUILTIN::WAIT(0);
	}
	__LIB_5__::func_616();
}

void func_6()
{
	float fVar0;
	float fVar1;
	bool bVar2;
	if (PED::IS_PED_INJURED(Global_35))
	{
		iLocal_0 = 0;
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")) && !bLocal_5)
	{
		fVar0 = 1f;
		fVar1 = 1f;
		bVar2 = false;
		bLocal_5 = true;
		__LIB_2__::func_590(BUILTIN::FLOOR((fVar0 * BUILTIN::TO_FLOAT(__LIB_3__::func_970(joaat("SCENARIOS_MONEY_PILE"))))), bVar2, fVar1, 1, 0, 0, 1, 752097756);
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		iLocal_0 = 0;
	}
}

