#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	bool bLocal_19 = false;
	int iLocal_20 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	iLocal_0 = 1;
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	iLocal_20 = -1;
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
	int iVar0;
	struct<2> Var1;
	if (PED::IS_PED_INJURED(Global_35))
	{
		iLocal_0 = 0;
		return;
	}
	if (!__LIB_1__::func_917(iLocal_20))
	{
		iVar0 = __LIB_11__::func_524();
		if (iVar0 == -1)
		{
			iVar0 = __LIB_14__::func_284();
		}
		iLocal_20 = __LIB_0__::func_560(__LIB_0__::func_12(), iVar0);
	}
	if (!bLocal_19)
	{
		if ((ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -834364808)) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 15695821))
		{
			bLocal_19 = true;
			if (__LIB_1__::func_917(iLocal_20))
			{
				__LIB_2__::func_590(__LIB_18__::func_783(iLocal_20, 0), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
			__LIB_14__::func_288(2, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("CASH_REGISTERS_ROBBED")), 1);
			if (Global_1935630.f_13)
			{
				Var1 = { __LIB_0__::func_38(joaat("STORE_ROBBERY_WITNESSED"), 0) };
				STATS::_STAT_ID_INCREMENT_INT(&Var1, 1);
			}
		}
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		if (!bLocal_19)
		{
			if (__LIB_1__::func_917(iLocal_20))
			{
				__LIB_2__::func_590(__LIB_18__::func_783(iLocal_20, 1), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
			bLocal_19 = true;
		}
		__LIB_15__::func_28(iLocal_20);
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		iLocal_0 = 0;
	}
}

