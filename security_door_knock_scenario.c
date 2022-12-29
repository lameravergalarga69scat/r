#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	int iLocal_6 = 0;
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
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 4;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	vector3 vLocal_49[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_59 = 0;
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
		__LIB_3__::func_126();
		func_6();
		BUILTIN::WAIT(0);
	}
	__LIB_5__::func_616();
}

void func_6()
{
	int iVar0;
	iLocal_0 = 0;
	return;
	if (PED::IS_PED_INJURED(Global_35))
	{
		iLocal_0 = 0;
		return;
	}
	if (__LIB_14__::func_481(1))
	{
		if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")) || PAD::IS_DISABLED_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")))
		{
			if (!__LIB_14__::func_481(3))
			{
				__LIB_18__::func_831(1);
				__LIB_18__::func_832();
				__LIB_14__::func_482(3);
			}
		}
	}
	switch (iLocal_6)
	{
		case 0:
			vLocal_49[0 /*3*/] = { __LIB_14__::func_483() };
			vLocal_49[1 /*3*/] = { __LIB_14__::func_484() };
			vLocal_49[2 /*3*/] = { __LIB_14__::func_485() };
			__LIB_14__::func_489(Global_35, &vLocal_49, &iVar0);
			iLocal_59 = __LIB_14__::func_486(iVar0);
			__LIB_14__::func_482(1);
			break;
		case 1:
			if (!__LIB_0__::func_75(&uLocal_7))
			{
				OBJECT::_0x276AAF0F1C7F2494(iLocal_59, 1);
				__LIB_1__::func_283(&uLocal_7, 0);
			}
			else if (__LIB_1__::func_285(&uLocal_7, 3f))
			{
				__LIB_1__::func_148(&uLocal_7);
				__LIB_17__::func_707(1);
				__LIB_14__::func_482(2);
			}
			break;
		case 2:
			if (!func_26())
			{
				return;
			}
			__LIB_12__::func_432(&uLocal_10, 1, 1, 0, 0);
			if (__LIB_1__::func_285(&uLocal_7, 3.5f))
			{
				__LIB_18__::func_832();
				__LIB_18__::func_831(1);
				__LIB_14__::func_482(3);
			}
			break;
		case 3:
			break;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		OBJECT::_0x276AAF0F1C7F2494(iLocal_59, 0);
		iLocal_0 = 0;
	}
}

bool func_26()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	if (!__LIB_0__::func_30(iLocal_59))
	{
		return false;
	}
	iVar0 = __LIB_3__::func_659(iLocal_59, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, func_39()) };
	if (__LIB_0__::func_86(vVar1))
	{
		return false;
	}
	vVar4 = { __LIB_14__::func_487() };
	switch (iLocal_59)
	{
		case joaat("DOOR_NEW_GUNSHOP_INT_BACK"):
			fVar7 = 115f;
			break;
		case joaat("DOOR_VAL_DOC_BACK_RM"):
			fVar7 = 10f;
			break;
		case joaat("DOOR_VAL_DOC_BACK"):
			fVar7 = 100f;
			break;
	}
	fVar7 = (fVar7 + vVar4.z);
	__LIB_14__::func_488(&uLocal_10, vVar1, vVar4.x, vVar4.y, fVar7, 35f, 20, 10, 1077936128 /* Float: 3f */, 1101004800 /* Float: 20f */, 1, 0, 0.24f, 0, 0, 1044549468 /* Float: 0.19f */);
	__LIB_17__::func_707(2);
	return true;
}

Vector3 func_39()
{
	return 0.585564f, 0.325876f, 1.6871f;
}

