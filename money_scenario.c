#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
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
		func_5();
		__LIB_0__::func_11();
		BUILTIN::WAIT(0);
	}
	__LIB_5__::func_616();
}

void func_5()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case -45008988:
				__LIB_2__::func_823(iVar0);
				break;
			case -456923784:
				__LIB_18__::func_835(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_11(int iParam0)
{
	int iVar0;
	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_14(&iVar0);
	}
}

void func_14(int iParam0)
{
	if (TASK::_0x6718F40313A2B5A6(uLocal_3) == 0f)
	{
		return;
	}
	if (iParam0->f_1 == joaat("CASH"))
	{
		__LIB_11__::func_367(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
	}
	else if (iParam0->f_1 == joaat("MONEY"))
	{
		__LIB_11__::func_367(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
	}
	else if (iParam0->f_1 == joaat("P_MONEYSTACK01X_PH_R_HAND"))
	{
		__LIB_11__::func_367(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
	}
}

