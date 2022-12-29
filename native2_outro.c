#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	struct<4> Local_8 = { 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_8);
	}
	__LIB_11__::func_243(&Local_8, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_8))
	{
		__LIB_5__::func_233(&Local_8);
		switch (__LIB_0__::func_57(Local_8))
		{
			case 0:
				if (__LIB_0__::func_0(&Local_8))
				{
					__LIB_0__::func_19(&Local_8, 1);
				}
				break;
			case 1:
				if (func_8(&Local_8))
				{
					__LIB_0__::func_19(&Local_8, 2);
				}
				break;
			case 2:
				if (func_9(&Local_8))
				{
					__LIB_0__::func_19(&Local_8, 3);
				}
				break;
			case 3:
				func_1(&Local_8);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_8);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_1__::func_752();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_31(iVar1) && __LIB_0__::func_699(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (__LIB_1__::func_22(iVar1))
				{
					__LIB_1__::func_774(iVar1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (__LIB_4__::func_802(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
		__LIB_4__::func_803(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return 0;
	}
	return func_21(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!func_23(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_11(var uParam0)
{
	func_26();
	return 1;
}

int func_21(var uParam0)
{
	if (!func_44())
	{
		return 0;
	}
	return 1;
}

bool func_23(var uParam0)
{
	if (func_45())
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	}
	if (func_46())
	{
		return true;
	}
	return false;
}

void func_26()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3))
	{
		return;
	}
	func_51(iLocal_3);
	iVar1 = VEHICLE::_0x60B7D1DCC312697D(iLocal_3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_3, iVar0);
		func_51(iVar2);
		iVar0++;
	}
	VEHICLE::DELETE_MISSION_TRAIN(&iLocal_3);
}

bool func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
	{
		return true;
	}
	iVar0 = __LIB_3__::func_918(49);
	iVar1 = __LIB_0__::func_895(iVar0);
	iVar2 = iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		iLocal_3 = iVar2;
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_3, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3, true, true);
		}
		VEHICLE::_0x4182C037AA1F0091(iLocal_3, 1);
		VEHICLE::_0x160C1B5AB48AB87C(iLocal_3, 1E+17f);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3, false);
		return true;
	}
	return false;
}

bool func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3))
	{
		return false;
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	if (func_66(iLocal_3))
	{
		return true;
	}
	iVar1 = VEHICLE::_0x60B7D1DCC312697D(iLocal_3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_3, iVar0);
		if (func_66(iVar2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_46()
{
	float fVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3))
	{
		return true;
	}
	if (func_67())
	{
		__LIB_1__::func_148(&uLocal_5);
		return false;
	}
	fVar0 = func_68();
	if (fVar0 < 120f)
	{
		__LIB_1__::func_148(&uLocal_5);
		return false;
	}
	if (func_69())
	{
		__LIB_1__::func_148(&uLocal_5);
		return false;
	}
	if (__LIB_0__::func_264(&uLocal_5) < 8f)
	{
		return false;
	}
	return true;
}

void func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	VEHICLE::_0x68830738A6BFB370(iParam0, 1);
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return;
	}
	iVar1 = VEHICLE::_0x0E558D3A49D759D6(iParam0, iVar0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
		if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar3))
		{
			iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && ENTITY::IS_ENTITY_A_PED(iVar4))
			{
				iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar5, false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, true, true);
					}
					__LIB_0__::func_490(&iVar5, 0);
				}
			}
		}
		iVar2++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

bool func_66(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	vector3 vVar17;
	vector3 vVar20;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	vVar7 = { 8f, 8f, 3f };
	vVar1 = { vVar1 - vVar7 };
	vVar4 = { vVar4 + vVar7 };
	vVar10 = { 0f, vVar1.y, vVar1.z };
	vVar13 = { 0f, vVar4.y, vVar4.z };
	fVar16 = (vVar4.x - vVar1.x);
	vVar17 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar10) };
	vVar20 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar13) };
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, vVar17, vVar20, fVar16, false, true, 0);
}

bool func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if ((MISC::GET_FRAME_COUNT() % 15) != 0)
	{
		return iLocal_4;
	}
	iLocal_4 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3))
	{
		return false;
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iLocal_3))
	{
		iLocal_4 = 1;
		return true;
	}
	iVar1 = VEHICLE::_0x60B7D1DCC312697D(iLocal_3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_3, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iVar2))
			{
				iLocal_4 = 1;
			}
			else
			{
				iVar0++;
			}
			return iLocal_4;
		}
	}
}

float func_68()
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3))
	{
		return 1E+17f;
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return 1E+17f;
	}
	fVar0 = __LIB_0__::func_665(Global_35, iLocal_3, 1, 1);
	iVar2 = VEHICLE::_0x60B7D1DCC312697D(iLocal_3);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar3 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_3, iVar1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			fVar0 = __LIB_0__::func_646(fVar0, __LIB_0__::func_665(Global_35, iVar3, 1, 1));
		}
		iVar1++;
	}
	return fVar0;
}

bool func_69()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3))
	{
		return true;
	}
	iVar1 = VEHICLE::_0x60B7D1DCC312697D(iLocal_3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_3, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iVar2))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

