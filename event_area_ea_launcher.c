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
	bool bLocal_14 = false;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&iScriptParam_0, 1);
	}
	Global_1898092.f_26.f_1 = iScriptParam_0;
	Global_1898092.f_26.f_2 = __LIB_3__::func_250(Global_1898092.f_26.f_1);
	if (!__LIB_0__::func_625(Global_1898092.f_26.f_2))
	{
		func_1(&iScriptParam_0, 0);
	}
	while (__LIB_7__::func_897(1) || __LIB_7__::func_897(2))
	{
		BUILTIN::WAIT(0);
	}
	__LIB_7__::func_894(16);
	__LIB_0__::func_24(iScriptParam_0, 8);
	__LIB_1__::func_956(iScriptParam_0, 1);
	while (!func_8(iScriptParam_0))
	{
		BUILTIN::WAIT(0);
	}
	func_1(&iScriptParam_0, 0);
}

void func_1(int iParam0, bool bParam1)
{
	if (bParam1 || bLocal_14)
	{
		__LIB_1__::func_956(*iParam0, 0);
	}
	if (bLocal_14)
	{
		__LIB_0__::func_25(*iParam0, 8);
		__LIB_16__::func_371();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_8(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_250(iParam0);
	if (!__LIB_0__::func_625(iVar0))
	{
		bLocal_14 = true;
		return true;
	}
	if (__LIB_0__::func_1(Global_1392194[iVar0 /*10*/].f_1, 1))
	{
		return true;
	}
	if (!func_13(iParam0, 1, 0, (300f * 300f), 0))
	{
		bLocal_14 = true;
		return true;
	}
	return false;
}

bool func_13(int iParam0, bool bParam1, bool bParam2, float fParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = -1;
	if (bParam4)
	{
		iVar0 = __LIB_0__::func_12();
	}
	if (iVar0 == -1)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	}
	if (iVar0 == iParam0)
	{
		return true;
	}
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(__LIB_0__::func_559(iParam0), vVar1))
	{
		return true;
	}
	if (bParam1)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		vVar4 = { VOLUME::_GET_VOLUME_COORDS(__LIB_0__::func_559(iParam0)) };
		vVar1.f_2 = 0f;
		vVar4.f_2 = 0f;
		fVar13 = BUILTIN::VDIST2(vVar1, vVar4);
		if (fVar13 < fParam3)
		{
			if (!bParam2)
			{
				return true;
			}
			else
			{
				vVar7 = { __LIB_0__::func_173(__LIB_1__::func_660(CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING())) };
				vVar10 = { __LIB_0__::func_173(vVar4 - vVar1) };
				if (__LIB_2__::func_977(vVar7, vVar10) > 0f)
				{
					return true;
				}
			}
		}
	}
	return false;
}

