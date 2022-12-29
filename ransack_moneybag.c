#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	struct<2> Local_5 = { 0, 0 } ;
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
		__LIB_18__::func_566();
		func_6();
		BUILTIN::WAIT(0);
	}
	__LIB_5__::func_616();
}

void func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_5.f_1)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_5))
	{
		return;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Local_5, false);
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		return;
	}
	iVar1 = TASK::_GET_SCENARIO_POINT_ENTITY(iVar0, "");
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	iVar2 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		return;
	}
}

