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
	struct<10> Local_41[3];
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	struct<4> Local_76 = { 0, 0, 0, 0 } ;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	vector3 vLocal_85 = { 0f, 0f, 0f };
	vector3 vLocal_88 = { 0f, 0f, 0f };
	int iScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_74 = joaat("A_C_DOGHOUND_01");
	iLocal_72 = iScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(9);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (__LIB_14__::func_208(iLocal_72))
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_1(0);
}

void func_1(int iParam0)
{
	int iVar0;
	MAP::REMOVE_BLIP(&(Local_41[iParam0 /*10*/].f_8));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_272(Local_41[iParam0 /*10*/].f_1[iVar0], 0))
		{
			__LIB_3__::func_608(Local_41[iParam0 /*10*/].f_1[iVar0]);
			__LIB_2__::func_788(&(Local_41[iParam0 /*10*/].f_1[iVar0]), 1, 0, 1);
		}
		iVar0++;
	}
	if (PED::DOES_GROUP_EXIST(Local_41[iParam0 /*10*/].f_7))
	{
		PED::REMOVE_GROUP(Local_41[iParam0 /*10*/].f_7);
	}
}

void func_2()
{
	iLocal_73 = 1;
	PED::_0xED9582B3DA8F02B4(4);
	switch (iLocal_72)
	{
		case 76:
			vLocal_85 = { -297.8979f, 783.4763f, 117.3506f };
			break;
		default:
			vLocal_85 = { __LIB_2__::func_116(iLocal_72, 1) };
			break;
	}
}

void func_4()
{
	int iVar0;
	switch (iLocal_73)
	{
		case 1:
			iLocal_75 = __LIB_14__::func_202(2, 2, -156825994, 1, 0, 0f, 0f, 0f);
			if (!STREAMING::IS_MODEL_VALID(iLocal_75))
			{
				iLocal_75 = joaat("S_M_M_AMBIENTLAWRURAL_01");
			}
			iLocal_73 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_74, false);
			STREAMING::REQUEST_MODEL(iLocal_75, false);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_74) && STREAMING::HAS_MODEL_LOADED(iLocal_75)) && PED::_0x5E420FF293EE5472())
			{
				iLocal_73 = 4;
			}
			break;
		case 4:
			if (func_15())
			{
				func_16(0);
				func_17(0);
				iLocal_73 = 5;
			}
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (Local_41[iVar0 /*10*/] == 1)
				{
					if (__LIB_0__::func_272(Local_41[iVar0 /*10*/].f_6, 0))
					{
						if (__LIB_1__::func_205(Global_35, Local_41[iVar0 /*10*/].f_9, 1, 0))
						{
							func_18(iVar0);
						}
					}
					else if (__LIB_1__::func_205(Global_35, Local_41[iVar0 /*10*/].f_9, 1, 0))
					{
						func_18(iVar0);
					}
					else
					{
						Local_41[iVar0 /*10*/] = 3;
					}
				}
				else if (Local_41[iVar0 /*10*/] == 2)
				{
					if (__LIB_0__::func_272(Local_41[iVar0 /*10*/].f_6, 0))
					{
						if (!PED::IS_PED_IN_COMBAT(Local_41[iVar0 /*10*/].f_6, 0) && !__LIB_1__::func_205(Global_35, Local_41[iVar0 /*10*/].f_9, 1, 0))
						{
							func_17(iVar0);
						}
					}
				}
				else if (Local_41[iVar0 /*10*/] == 3)
				{
					func_1(iVar0);
				}
				iVar0++;
			}
			break;
		case 6:
			break;
	}
}

bool func_15()
{
	float fVar0;
	float fVar1;
	var uVar2;
	fVar0 = 25f;
	fVar1 = 60f;
	if (!__LIB_14__::func_203(vLocal_85, &Local_76, &uVar2, 1, 1, 1127481344 /* Float: 180f */, 50f, fVar0, fVar1, 0))
	{
		return false;
	}
	vLocal_88 = { Local_76.f_3 };
	return true;
}

void func_16(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	if (!PED::DOES_GROUP_EXIST(Local_41[iParam0 /*10*/].f_7))
	{
		Local_41[iParam0 /*10*/].f_7 = PED::CREATE_GROUP(1);
	}
	vVar0 = { __LIB_3__::func_857(vLocal_88, 3f, 1f) };
	Local_41[iParam0 /*10*/].f_6 = __LIB_1__::func_545(iLocal_75, vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	PED::SET_PED_CONFIG_FLAG(Local_41[iParam0 /*10*/].f_6, 279, true);
	PED::SET_PED_AS_GROUP_LEADER(Local_41[iParam0 /*10*/].f_6, Local_41[iParam0 /*10*/].f_7, false);
	TASK::TASK_POLICE(Local_41[iParam0 /*10*/].f_6, false);
	PED::SET_PED_CONFIG_FLAG(Local_41[iParam0 /*10*/].f_6, 188, true);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		Local_41[iParam0 /*10*/].f_1[iVar3] = __LIB_1__::func_545(iLocal_74, vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		if (__LIB_0__::func_272(Local_41[iParam0 /*10*/].f_1[iVar3], 0))
		{
		}
		iVar3++;
	}
}

void func_17(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	if (!__LIB_0__::func_272(Local_41[iParam0 /*10*/].f_6, 0))
	{
		return;
	}
	Local_41[iParam0 /*10*/] = 1;
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_41[iParam0 /*10*/].f_9))
	{
		Local_41[iParam0 /*10*/].f_9 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(Local_41[iParam0 /*10*/].f_6, true, false), 0f, 0f, 0f, 35f, 35f, 10f);
		PED::_0x7C00CFC48A782DC0(Local_41[iParam0 /*10*/].f_9, Local_41[iParam0 /*10*/].f_6, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	if (!MAP::DOES_BLIP_EXIST(Local_41[iParam0 /*10*/].f_8))
	{
		Local_41[iParam0 /*10*/].f_8 = MAP::_0xA6EF0C54A3443E70(-1282792512, Local_41[iParam0 /*10*/].f_9);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_272(Local_41[iParam0 /*10*/].f_1[iVar0], 0))
		{
			vVar1 = { IntToFloat(iVar0 + 1), MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f), 0f };
			__LIB_3__::func_608(Local_41[iParam0 /*10*/].f_1[iVar0]);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_41[iParam0 /*10*/].f_1[iVar0], Local_41[iParam0 /*10*/].f_6, vVar1, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return;
	}
	Local_41[iParam0 /*10*/] = 2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_272(Local_41[iParam0 /*10*/].f_1[iVar0], 0))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_41[iParam0 /*10*/].f_1[iVar0]);
			TASK::TASK_COMBAT_PED(Local_41[iParam0 /*10*/].f_1[iVar0], Global_35, 0, 0);
			MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_41[iParam0 /*10*/].f_1[iVar0]);
			MAP::REMOVE_BLIP(&(Local_41[iParam0 /*10*/].f_8));
		}
		iVar0++;
	}
}

