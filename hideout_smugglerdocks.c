#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	bool bLocal_40 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_30 = 1f;
	fLocal_31 = 1f;
	iLocal_39 = vScriptParam_0.x;
	iLocal_37 = vScriptParam_0.z;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	}
	func_2();
	while (__LIB_9__::func_579())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_38)
		{
			iLocal_38 = MISC::GET_GAME_TIMER() + 1000;
			iVar0 = iLocal_37;
			__LIB_1__::func_947(iLocal_39, &iLocal_37);
			switch (iLocal_37)
			{
				case 0:
					if (!Global_1879534.f_1)
					{
						bLocal_40 = !__LIB_9__::func_648(iLocal_39, 1);
						if (bLocal_40)
						{
						}
						iLocal_37 = 1;
					}
					break;
				case 1:
					iLocal_37 = 2;
					break;
				case 2:
					if (__LIB_0__::func_0(bLocal_40))
					{
						iLocal_37 = 4;
					}
					break;
				case 4:
					iLocal_37 = 6;
					break;
				case 6:
					if (func_7(iLocal_39, -1, -1, 0))
					{
						__LIB_0__::func_24(iLocal_39, 4);
						iLocal_37 = 7;
					}
					break;
				case 7:
					iLocal_37 = 8;
					break;
				case 8:
					__LIB_1__::func_886(iLocal_39);
					iLocal_37 = 9;
					break;
				case 9:
					if (iLocal_39 != 5)
					{
						__LIB_1__::func_889(&Global_1898004);
						__LIB_2__::func_747(iLocal_39, &Global_1898004, bLocal_40);
					}
					__LIB_0__::func_24(iLocal_39, 8);
					iLocal_37 = 10;
					break;
				case 10:
					if (!bLocal_40)
					{
						__LIB_0__::func_11();
						if (__LIB_1__::func_890(32))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							__LIB_0__::func_22(32);
						}
						iLocal_37 = 3;
					}
					else
					{
						iLocal_37 = 3;
					}
					break;
				case 3:
					if (!STREAMING::_0xCF45DF50C7775F2A())
					{
						if (__LIB_0__::func_0(bLocal_40))
						{
							iLocal_37 = 11;
						}
					}
					break;
				case 11:
					if (!bLocal_40)
					{
						if (!__LIB_0__::func_58(iLocal_39))
						{
							iLocal_38 = 0;
						}
					}
					__LIB_4__::func_504(&Global_1898004, iLocal_39);
					break;
				case 12:
					func_18();
					break;
			}
			if (iVar0 != iLocal_37)
			{
				iLocal_38 = 0;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_18();
}

void func_2()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_18();
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		else
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
	}
}

bool func_7(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (!__LIB_0__::func_20(iParam0))
	{
		return true;
	}
	if (__LIB_0__::func_21(iParam0, 16))
	{
		return true;
	}
	if (__LIB_0__::func_730(iParam0) && !__LIB_1__::func_928(iParam0))
	{
	}
	if (__LIB_10__::func_14(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (__LIB_0__::func_29(iParam1))
		{
			iVar0 = iParam1;
		}
		if (__LIB_0__::func_29(iParam2))
		{
			iVar1 = iParam2;
		}
		if (Global_1897950 < iVar0 || Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!__LIB_0__::func_730(iParam0) || __LIB_1__::func_928(iParam0)) || __LIB_1__::func_903(Global_1897950))
			{
				__LIB_1__::func_940(Global_1897950, 0);
			}
			Global_1897950++;
			iVar2++;
			if (Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return true;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return false;
			}
		}
	}
	return true;
}

void func_18()
{
	__LIB_0__::func_11(bLocal_40);
	__LIB_0__::func_11(bLocal_40);
	if (__LIB_0__::func_2() == -1)
	{
		if (iLocal_39 != 5)
		{
			__LIB_2__::func_755(iLocal_39);
		}
	}
	if (iLocal_39 != 5)
	{
		__LIB_2__::func_819(iLocal_39);
		__LIB_0__::func_25(iLocal_39, 4);
		__LIB_0__::func_25(iLocal_39, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
	}
	__LIB_9__::func_582(0);
	if (__LIB_0__::func_61() == iLocal_39)
	{
		__LIB_6__::func_409(0);
	}
	if (__LIB_1__::func_25(__LIB_4__::func_6(iLocal_39), 1))
	{
		__LIB_1__::func_408(__LIB_9__::func_583(iLocal_39), 1, 0);
	}
	__LIB_2__::func_822(iLocal_39);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

