#region Local Var
	vector3 vLocal_0 = { 0f, 0f, 0f };
	float fLocal_3 = 0f;
	vector3 vLocal_4 = { 0f, 0f, 0f };
	float fLocal_7 = 0f;
	vector3 vLocal_8 = { 0f, 0f, 0f };
	vector3 vLocal_11 = { 0f, 0f, 0f };
	vector3 vLocal_14 = { 0f, 0f, 0f };
	vector3 vLocal_17 = { 0f, 0f, 0f };
	int iLocal_20 = 0;
	struct<9> Local_21 = { -1, -1, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_30 = 0;
#endregion
void __EntryFunction__()
{
	vector3 vVar0;
	var uVar3;
	vLocal_0 = { 1.47681f, -0.749695f, -0.0486145f };
	fLocal_3 = 170.7721f;
	vLocal_4 = { 0.812012f, -0.631683f, -0.0291901f };
	fLocal_7 = 290.2319f;
	vLocal_8 = { 0.7006f, 0.094f, 1.076f };
	vLocal_11 = { -49.5998f, 0f, -107.2854f };
	vLocal_14 = { 0.75708f, -0.630981f, -0.0272522f };
	vLocal_17 = { 1.47479f, -0.239473f, -0.0476227f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_2__::func_788(&iLocal_20, 1, 0, 1);
		func_2();
	}
	__LIB_1__::func_65(21, &Local_21, 1);
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("MILKING_COW_LAUNCH")) > 0)
	{
		func_2();
	}
	__LIB_11__::func_212(Local_21.f_5, 0f, 0f, Local_21.f_8, &vVar0, &uVar3);
	if (func_5(&iLocal_20, vVar0))
	{
		func_2();
	}
	func_6();
	while (!func_7())
	{
		BUILTIN::WAIT(0);
	}
	func_8(&iLocal_20, 1);
	while (true)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("MILKING_COW_LAUNCH")) > 0)
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_20, true))
			{
				func_2();
			}
		}
		if (func_9())
		{
			func_2();
		}
		BUILTIN::WAIT(0);
	}
}

void func_2()
{
	func_10();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_5(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	__LIB_1__::func_216(&iVar1, vParam1, 0f, 0f, 0f, 3f, 3f, 3f);
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return false;
	}
	iVar2 = ENTITY::_0x886171A12F400B89(iVar1, iVar0, 1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar0));
		if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_INJURED(iVar4)) && ENTITY::GET_ENTITY_MODEL(iVar4) == joaat("A_C_COW"))
		{
			*iParam0 = iVar4;
			__LIB_0__::func_172(iVar1);
			ITEMSET::_CLEAR_ITEMSET(iVar0);
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return true;
		}
		iVar3++;
	}
	__LIB_0__::func_172(iVar1);
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return false;
}

void func_6()
{
	STREAMING::REQUEST_MODEL(joaat("A_C_COW"), false);
	STREAMING::REQUEST_MODEL(joaat("P_STOOL02X"), false);
	STREAMING::REQUEST_MODEL(joaat("S_BUCKETMILK01X"), false);
	STREAMING::REQUEST_CLIP_SET("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
	STREAMING::_REQUEST_MOVE_NETWORK_DEF("script_mar5_milkcow_cow");
}

bool func_7()
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("A_C_COW")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_STOOL02X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_BUCKETMILK01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW"))
	{
		return false;
	}
	if (!STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED("script_mar5_milkcow_cow"))
	{
		return false;
	}
	return true;
}

int func_8(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	int iVar6;
	int iVar7;
	struct<9> Var8;
	struct<31> Var18;
	Var8 = -1;
	Var8.f_1 = -1;
	Var8.f_2 = -1;
	if (bParam1)
	{
		__LIB_1__::func_65(21, &Var8, 1);
	}
	else
	{
		__LIB_1__::func_65(22, &Var8, 1);
	}
	__LIB_11__::func_212(Var8.f_5, 0f, 0f, Var8.f_8, &vVar0, &uVar3);
	if (!func_5(iParam0, vVar0))
	{
		*iParam0 = __LIB_1__::func_545(joaat("A_C_COW"), vVar0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			return 0;
		}
		PED::_SET_PED_SCALE(*iParam0, 1f);
	}
	PED::SET_PED_CAN_LEG_IK(*iParam0, false);
	PED::SET_PED_LEG_IK_MODE(*iParam0, 0);
	EVENT::SET_DECISION_MAKER(*iParam0, joaat("EMPTY"));
	ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*iParam0))
	{
		Var18.f_6 = -1082130432;
		Var18.f_9 = -1082130432;
		Var18.f_30 = "Milking";
		Var18.f_1 = joaat("DEFAULT");
		Var18 = joaat("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
		TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(*iParam0, "script_mar5_milkcow_cow", &Var18, Var8.f_5, 0f, 0f, Var8.f_8, 2, 0.125f, 0, 0, 1154, 0);
	}
	vVar0 = { __LIB_11__::func_213(Var8.f_5, 0f, 0f, Var8.f_8, 0) };
	iVar7 = __LIB_11__::func_207(vVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		if (ENTITY::_0x0B7CB1300CBFE19C(iVar7, 1))
		{
			TASK::STOP_ANIM_PLAYBACK(iVar7, 0, false);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iVar7, true);
	}
	vVar0 = { __LIB_11__::func_214(Var8.f_5, 0f, 0f, Var8.f_8) };
	iVar6 = __LIB_11__::func_206(vVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar6, true);
	}
	return 1;
}

bool func_9()
{
	float fVar0;
	fVar0 = __LIB_4__::func_865(4);
	if (__LIB_0__::func_21(37, 4194304))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), Local_21.f_5) > (fVar0 * fVar0))
		{
			return true;
		}
	}
	return false;
}

void func_10()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_COW"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_STOOL02X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_BUCKETMILK01X"));
	STREAMING::REMOVE_CLIP_SET("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
	STREAMING::_REMOVE_MOVE_NETWORK_DEF("script_mar5_milkcow_cow");
}

