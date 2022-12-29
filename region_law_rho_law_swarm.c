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
	var uLocal_15 = 3;
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
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	vector3 vLocal_41 = { 0f, 0f, 0f };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<4> Local_47 = { 0, 0, 0, 0 } ;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_45 = joaat("S_M_M_AMBIENTLAWRURAL_01");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (__LIB_14__::func_208(iScriptParam_0) && iLocal_44 < 7)
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	LAW::_0x7EF2A2FE38D74456(__LIB_14__::func_211(8), 0);
}

void func_2()
{
	iLocal_44 = 1;
	PED::_0xED9582B3DA8F02B4(5);
}

void func_4()
{
	switch (iLocal_44)
	{
		case 1:
			iLocal_44 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_45, false);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_45) && PED::_0x5E420FF293EE5472())
			{
				iLocal_44 = 4;
			}
			break;
		case 4:
			if (func_11())
			{
				iLocal_44 = 5;
			}
			break;
		case 5:
			iLocal_44 = 6;
			break;
		case 6:
			iLocal_44 = 7;
			break;
	}
}

bool func_11()
{
	int iVar0;
	if (!func_14())
	{
		return false;
	}
	iLocal_46++;
	iVar0 = __LIB_1__::func_545(iLocal_45, vLocal_41, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	PED::SET_PED_AS_COP(iVar0, true);
	__LIB_2__::func_788(&iVar0, 1, 0, 1);
	__LIB_14__::func_204(&Local_47, 1, 0);
	if (iLocal_46 >= 5)
	{
		return true;
	}
	return false;
}

bool func_14()
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	fVar0 = 55f;
	fVar1 = 90f;
	iVar2 = __LIB_5__::func_723(iLocal_46, Local_47.f_2);
	fVar3 = (IntToFloat(iVar2) * 25f);
	fVar4 = (fVar3 + 45f);
	if (fVar3 > 150f)
	{
		fVar3 = 150f;
	}
	if (fVar4 > 180f)
	{
		fVar4 = 180f;
	}
	if (!func_19(Global_36, &Local_47, &uVar5, 1, 1, fVar4, 50f, fVar0, fVar1, fVar3))
	{
		return false;
	}
	vLocal_41 = { Local_47.f_3 };
	return true;
}

bool func_19(vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6, float fParam7, int iParam8, float fParam9, float fParam10, float fParam11)
{
	int iVar0;
	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*iParam4 = 1;
				return false;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			__LIB_7__::func_438(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, fParam7, iParam8, fParam9, fParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				__LIB_5__::func_730(&(iParam3->f_1), iParam5);
				if (!__LIB_0__::func_86(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, __LIB_0__::func_173(iParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*iParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

