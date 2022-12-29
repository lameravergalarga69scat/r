#region Local Var
	struct<6> Local_0 = { 0, 0, 1, 0, 0, 0 } ;
	int iLocal_6 = 0;
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
	vector3 vVar0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		__LIB_17__::func_500(&vVar0);
	}
	while (func_2(&vVar0))
	{
		switch (iLocal_6)
		{
			case 0:
				if (__LIB_0__::func_0(&vVar0))
				{
					iLocal_6 = 1;
				}
				vVar0.x = SCRIPTS::GET_ID_OF_THIS_THREAD();
				break;
			case 1:
				func_4(&vVar0);
				if (__LIB_17__::func_503(__LIB_0__::func_585()))
				{
					iLocal_6 = 2;
				}
				if (vVar0.z)
				{
					iLocal_6 = 2;
				}
				break;
			case 2:
				__LIB_17__::func_500(&vVar0);
				break;
		}
		BUILTIN::WAIT(0);
	}
	__LIB_17__::func_500(&vVar0);
}

bool func_2(var uParam0)
{
	if (uParam0->f_1)
	{
		return true;
	}
	if (__LIB_0__::func_12() != func_9())
	{
		return false;
	}
	if (__LIB_0__::func_1(Global_1935630, 2097152))
	{
		return false;
	}
	return true;
}

void func_4(int iParam0)
{
	if (Local_0 == 4)
	{
		if ((func_11(4) || PED::_0x5203038FF8BAE577(Local_0.f_1, 25, 5000)) || PED::_0x5203038FF8BAE577(Local_0.f_1, 55, 5000))
		{
			if (func_13(func_12(), 262.3945f, 2f))
			{
				func_14(5);
			}
			func_15(4);
			return;
		}
	}
	if (Local_0 >= 3 && Local_0.f_5 <= 200)
	{
		Local_0.f_5++;
		return;
	}
	Local_0.f_5 = 0;
	switch (Local_0)
	{
		case 0:
			func_16();
			func_14(1);
			break;
		case 1:
			if (func_17())
			{
				func_14(2);
			}
			break;
		case 2:
			if (func_18() && func_19())
			{
				if (func_20(func_12(), 0f, 0, 1))
				{
					func_14(3);
				}
			}
			break;
		case 3:
			if (!func_21())
			{
				return;
			}
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_0.f_2[0], true, 0))
			{
				return;
			}
			ENTITY::SET_ENTITY_VISIBLE(Local_0.f_1, true);
			func_14(4);
			break;
		case 4:
			if (!func_11(1) && func_13(1457.186f, 314.9523f, 92.7676f, 85.4782f, 1065353216 /* Float: 1f */))
			{
				func_22();
				func_15(1);
			}
			if (func_23())
			{
				func_24();
				func_14(5);
			}
			break;
		case 5:
			if (func_20(func_12(), 262.3945f, 1, 0))
			{
				func_14(6);
			}
			break;
		case 6:
			if (!func_11(2) && func_25())
			{
				func_15(2);
			}
			if (func_21())
			{
				func_14(0);
			}
			break;
	}
}

int func_9()
{
	return 69;
}

bool func_11(int iParam0)
{
	return __LIB_0__::func_1(Local_0.f_4, iParam0);
}

Vector3 func_12()
{
	return 1460.54f, 315.1411f, 92.7676f;
}

bool func_13(vector3 vParam0, float fParam3, float fParam4)
{
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_0.f_1, 1))
	{
		PED::_0xA3A9299C4F2ADB98(Local_0.f_1);
	}
	if (!__LIB_3__::func_501(Local_0.f_1, vParam0, fParam3, 2f, 20f, 1))
	{
		if (!__LIB_0__::func_163(Local_0.f_1, 2106541073))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(Local_0.f_1, vParam0, fParam4, -1, fParam3, 1056964608 /* Float: 0.5f */, 0);
		}
		return false;
	}
	return true;
}

void func_14(int iParam0)
{
	Local_0 = iParam0;
}

void func_15(int iParam0)
{
	if (!__LIB_0__::func_1(Local_0.f_4, iParam0))
	{
		__LIB_1__::func_581(&(Local_0.f_4), iParam0);
	}
}

void func_16()
{
	func_31(1);
	func_31(2);
}

bool func_17()
{
	STREAMING::REQUEST_MODEL(func_32(), false);
	PED::_0xED9582B3DA8F02B4(1);
	if (PED::_0x5C16855277819BBF() == 1 && STREAMING::HAS_MODEL_LOADED(func_32()))
	{
		return true;
	}
	return false;
}

int func_18()
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_0.f_2[iVar0]))
		{
			iVar1 = iVar0;
			Var2 = { func_33(iVar1) };
			Local_0.f_2[iVar0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var2.f_10, Var2, Var2.f_3, Var2.f_6, Var2.f_9);
		}
		iVar0++;
	}
	return 1;
}

int func_19()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_0.f_1))
	{
		Local_0.f_1 = __LIB_4__::func_559(func_32(), func_12(), func_34(), 1, 1, 1, 0);
		return 0;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_0.f_1, true);
	ENTITY::SET_ENTITY_VISIBLE(Local_0.f_1, false);
	return 1;
}

bool func_20(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	if (!__LIB_0__::func_163(Local_0.f_1, -1098463898))
	{
		TASK::TASK_START_SCENARIO_AT_POSITION(Local_0.f_1, joaat("WORLD_HUMAN_SLEEP_GROUND_ARM"), vParam0, fParam3, 0, bParam4, bParam5, 0, -1f, false);
	}
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_0.f_1, 0))
	{
		return true;
	}
	return false;
}

bool func_21()
{
	int iVar0;
	int iVar1;
	iVar0 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
	if ((iVar0 != 0 && iVar0 != 3) && iVar0 != 5)
	{
		return false;
	}
	iVar1 = CLOCK::GET_CLOCK_HOURS();
	if (!__LIB_0__::func_252(iVar1, 9, 12) && !__LIB_0__::func_252(iVar1, 21, 0))
	{
		return false;
	}
	return true;
}

void func_22()
{
	if (!__LIB_0__::func_163(Local_0.f_1, 150319005))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_0.f_1, Global_35, 0, 0, 51, 1);
	}
}

bool func_23()
{
	if (func_11(1) && !func_21())
	{
		return true;
	}
	return false;
}

void func_24()
{
	if (__LIB_0__::func_163(Local_0.f_1, 150319005))
	{
		TASK::TASK_CLEAR_LOOK_AT(Local_0.f_1);
	}
}

bool func_25()
{
	int iVar0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_32());
	if (ENTITY::DOES_ENTITY_EXIST(Local_0.f_1))
	{
		PED::DELETE_PED(&(Local_0.f_1));
	}
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_0.f_2[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(Local_0.f_2[iVar0]);
		}
		iVar0++;
	}
	PED::_0x7D4E70A67A651C71(1);
	return true;
}

void func_31(int iParam0)
{
	if (__LIB_0__::func_1(Local_0.f_4, iParam0))
	{
		__LIB_1__::func_993(&(Local_0.f_4), iParam0);
	}
}

int func_32()
{
	return joaat("U_F_M_EMRDAUGHTER_01");
}

struct<11> func_33(int iParam0)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 1443.915f, 319.475f, 88.464f };
			Var0.f_3 = { 0f, 0f, -0.207f };
			Var0.f_6 = { 20.418f, 27f, 4.659f };
			Var0.f_9 = "TS_ERD_SPAWN_TRIGGER";
			Var0.f_10 = joaat("VOLBOX");
			break;
	}
	return Var0;
}

float func_34()
{
	return 90.68f;
}

