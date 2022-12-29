#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	struct<26> Local_5 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
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
	if (!ENTITY::DOES_ENTITY_EXIST(Local_5))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Local_5))
	{
		iLocal_0 = 0;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_5.f_18)) && !SCRIPTS::HAS_SCRIPT_LOADED(&(Local_5.f_18)))
		{
			if (__LIB_0__::func_103())
			{
				__LIB_1__::func_934(0);
			}
		}
		return;
	}
	switch (__LIB_17__::func_692())
	{
		case 0:
			if (__LIB_17__::func_693())
			{
				Local_5.f_7 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Local_5);
				StringCopy(&(Local_5.f_1), "LETTER", 32);
				Local_5.f_6 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Local_5, false);
				Local_5.f_5 = TASK::_GET_SCENARIO_POINT_ENTITY(Local_5.f_6, &(Local_5.f_1));
				Local_5.f_8.f_1 = Local_5.f_6;
				Local_5.f_8 = Local_5.f_5;
				Local_5.f_8.f_3 = 1;
				Local_5.f_8.f_5 = 1;
				Local_5.f_22 = 1024;
				__LIB_17__::func_694();
			}
			__LIB_19__::func_79(1);
			break;
		case 1:
			if (__LIB_17__::func_693())
			{
				SCRIPTS::REQUEST_SCRIPT(&(Local_5.f_18));
				__LIB_1__::func_934(1);
				__LIB_17__::func_694();
			}
			__LIB_19__::func_79(2);
			break;
		case 2:
			if (__LIB_17__::func_693())
			{
				__LIB_17__::func_694();
			}
			if (SCRIPTS::HAS_SCRIPT_LOADED(&(Local_5.f_18)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_5, 0))
			{
				Local_5.f_23 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(Local_5.f_18), &(Local_5.f_8), 10, Local_5.f_22);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Local_5.f_18));
				__LIB_19__::func_79(3);
			}
			break;
		case 3:
			if (__LIB_17__::func_693())
			{
				__LIB_17__::func_694();
			}
			if (!PED::IS_PED_USING_ANY_SCENARIO(Local_5))
			{
				iLocal_0 = 0;
			}
			break;
	}
}

