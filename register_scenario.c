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
	struct<20> Local_19 = { 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	vector3 vLocal_39 = { 0f, 0f, 0f };
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	bool bLocal_44 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	iLocal_0 = 1;
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	iLocal_42 = -1;
	iLocal_43 = -1;
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
		func_6();
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
				func_9(iVar0);
				break;
			case -456923784:
				__LIB_2__::func_823(iVar0);
				break;
			case -843555838:
				__LIB_2__::func_823(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	int iVar0;
	struct<2> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_19))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Local_19))
	{
		iLocal_0 = 0;
		return;
	}
	if (!__LIB_1__::func_918(iLocal_43))
	{
		iLocal_43 = __LIB_11__::func_524();
		if (iLocal_43 == -1)
		{
			iLocal_43 = __LIB_14__::func_284();
		}
	}
	if (!__LIB_1__::func_917(iLocal_42))
	{
		iLocal_42 = __LIB_0__::func_560(__LIB_0__::func_12(), iLocal_43);
	}
	switch (func_18())
	{
		case 0:
			if (func_19())
			{
				Local_19.f_4 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Local_19);
				Local_19.f_3 = func_20(Local_19.f_4);
				Local_19.f_2 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Local_19, false);
				Local_19.f_1 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(Local_19.f_2);
				if (__LIB_1__::func_918(iLocal_43))
				{
					Local_19.f_17 = __LIB_14__::func_285(iLocal_42);
				}
				else
				{
					Local_19.f_17 = 0;
				}
				func_22();
				func_23();
			}
			func_24(1);
			break;
		case 1:
			if (func_19())
			{
				func_25();
				func_23();
			}
			func_24(2);
			break;
		case 2:
			if (func_19())
			{
				func_23();
			}
			if (func_26())
			{
				func_24(3);
			}
			break;
		case 3:
			if (func_19())
			{
				func_27();
				func_23();
			}
			func_24(4);
			break;
		case 4:
			if (func_19())
			{
				func_23();
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_19, -834364808) && !Local_19.f_13)
			{
				Local_19.f_13 = 1;
				__LIB_4__::func_268(2, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				if (Local_19 == Global_35)
				{
					if (!bLocal_44)
					{
						if (__LIB_1__::func_917(iLocal_42))
						{
							__LIB_1__::func_616(__LIB_18__::func_783(iLocal_42, 1), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
							bLocal_44 = true;
						}
					}
				}
				__LIB_0__::func_15(__LIB_0__::func_14(joaat("CASH_REGISTERS_ROBBED")), 1);
				if (Global_1935630.f_13)
				{
					Var1 = { __LIB_0__::func_38(joaat("STORE_ROBBERY_WITNESSED"), 0) };
					STATS::_STAT_ID_INCREMENT_INT(&Var1, 1);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_19, 15695821) && !Local_19.f_14)
			{
				Local_19.f_14 = 1;
				if (Local_19 == Global_35)
				{
					if (!bLocal_44)
					{
						if (__LIB_1__::func_917(iLocal_42))
						{
							__LIB_1__::func_616(__LIB_18__::func_783(iLocal_42, 1), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
							bLocal_44 = true;
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_19, joaat("OBJECTEXCHANGE")) && !Local_19.f_15)
			{
				if (Local_19.f_3 == 2)
				{
					Local_19.f_15 = 1;
				}
				else if (Local_19.f_3 == 3)
				{
					Local_19.f_16++;
					iVar0 = func_34(Local_19.f_3);
					if (Local_19 == Global_35)
					{
						if (!bLocal_44)
						{
							if (__LIB_1__::func_917(iLocal_42))
							{
								__LIB_1__::func_616(__LIB_18__::func_783(iLocal_42, 1), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
								bLocal_44 = true;
							}
						}
					}
					if (Local_19.f_16 >= iVar0)
					{
						Local_19.f_15 = 1;
					}
				}
			}
			if (!PED::IS_PED_USING_ANY_SCENARIO(Local_19))
			{
				if (!bLocal_44)
				{
					if (__LIB_1__::func_917(iLocal_42))
					{
						__LIB_1__::func_616(__LIB_18__::func_783(iLocal_42, 1), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
					}
					bLocal_44 = true;
				}
				__LIB_15__::func_28(iLocal_42);
				TASK::CLEAR_PED_TASKS(Local_19, true, false);
				EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_SHOP_ROBBED"), Global_36, -1f, -1f, -1f, -1f, -1f, -1, -1);
				iLocal_0 = 0;
			}
			break;
	}
}

void func_9(int iParam0)
{
	int iVar0;
	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_36(&iVar0);
	}
}

int func_18()
{
	return Local_19.f_19;
}

bool func_19()
{
	return Local_19.f_18;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROP_PLAYER_CASH_REGISTER_LOCKBREAK"):
			return 2;
		case joaat("PROP_PLAYER_CASH_REGISTER_OPEN"):
			return 0;
		case joaat("PROP_PLAYER_CASH_REGISTER_OPEN_GUN"):
			return 1;
	}
	return -1;
}

void func_22()
{
	switch (Local_19.f_3)
	{
		case 2:
			Local_19.f_5[0] = joaat("P_CS_BILLSINGLE01BX");
			Local_19.f_5[2] = joaat("P_CS_PICK01X");
			break;
		case 0:
		case 1:
			Local_19.f_5[0] = joaat("P_CS_BILLSINGLE01BX");
			break;
	}
}

void func_23()
{
	Local_19.f_18 = 0;
}

void func_24(int iParam0)
{
	Local_19.f_19 = iParam0;
	func_43();
}

void func_25()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_19.f_5)
	{
		iVar1 = Local_19.f_5[iVar0];
		if (__LIB_0__::func_30(iVar1))
		{
			STREAMING::REQUEST_MODEL(iVar1, false);
		}
		iVar0++;
	}
}

bool func_26()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_19.f_5)
	{
		iVar1 = Local_19.f_5[iVar0];
		if (__LIB_0__::func_30(iVar1))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar1))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_27()
{
	switch (Local_19.f_3)
	{
		case 2:
			vLocal_39 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_19.f_1, 0.074814f, -0.117756f, 0.059386f) };
			Local_19.f_9[0] = OBJECT::CREATE_OBJECT(Local_19.f_5[0], vLocal_39, true, true, false, false, true);
			TASK::_0x8360C47380B6F351(Local_19.f_2, Local_19.f_9[0], "OOXO", 1);
			vLocal_39 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_19.f_1, -0.082664f, -0.117757f, 0.059386f) };
			Local_19.f_9[1] = OBJECT::CREATE_OBJECT(Local_19.f_5[0], vLocal_39, true, true, false, false, true);
			TASK::_0x8360C47380B6F351(Local_19.f_2, Local_19.f_9[1], "OXOO", 1);
			vLocal_39 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_19.f_1, 0f, 0f, 0f) };
			Local_19.f_9[2] = OBJECT::CREATE_OBJECT(Local_19.f_5[2], vLocal_39, true, true, false, false, true);
			TASK::_0x8360C47380B6F351(Local_19.f_2, Local_19.f_9[2], "Pick", 1);
			break;
		case 0:
		case 1:
			vLocal_39 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_19.f_1, 0.074814f, -0.117756f, 0.059386f) };
			Local_19.f_9[0] = OBJECT::CREATE_OBJECT(Local_19.f_5[0], vLocal_39, true, true, false, false, true);
			TASK::_0x8360C47380B6F351(Local_19.f_2, Local_19.f_9[0], "OOXO", 1);
			vLocal_39 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_19.f_1, -0.082664f, -0.117757f, 0.059386f) };
			Local_19.f_9[1] = OBJECT::CREATE_OBJECT(Local_19.f_5[0], vLocal_39, true, true, false, false, true);
			TASK::_0x8360C47380B6F351(Local_19.f_2, Local_19.f_9[1], "OXOO", 1);
			break;
	}
}

int func_34(int iParam0)
{
	int iVar0;
	iVar0 = 1;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
			iVar0 = 2;
			break;
		case 1:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_36(int iParam0)
{
	Local_19 = iParam0->f_1;
}

void func_43()
{
	Local_19.f_18 = 1;
}

