#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = -1;
	var uLocal_4 = -1;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = -1;
	var uLocal_10 = -1;
	var uLocal_11 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&uLocal_0);
	}
	func_2(&uLocal_0, &uScriptParam_0);
	while (true)
	{
		if (func_3(&uLocal_0))
		{
			func_1(&uLocal_0);
		}
		BUILTIN::WAIT(0);
	}
	func_1(&uLocal_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	if (!__LIB_1__::func_44(uParam0->f_2.f_8))
	{
		func_5();
		__LIB_7__::func_886();
		__LIB_7__::func_889();
	}
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = 5;
	uParam0->f_2 = { *uParam1 };
	__LIB_6__::func_618(uParam0, 0);
}

bool func_3(var uParam0)
{
	int iVar0;
	if (func_9(uParam0))
	{
		return true;
	}
	iVar0 = __LIB_1__::func_47(uParam0->f_2.f_2);
	switch (*uParam0)
	{
		case 0:
			__LIB_11__::func_215(uParam0->f_2.f_2);
			__LIB_7__::func_890();
			if (uParam0->f_2.f_7 == 37)
			{
				if (!func_13())
				{
					return false;
				}
			}
			__LIB_6__::func_618(uParam0, 1);
			break;
		case 1:
			if (func_14(0, 0, 1))
			{
				__LIB_11__::func_215(uParam0->f_2.f_2);
				__LIB_6__::func_618(uParam0, 2);
			}
			func_15(iVar0, Global_1899848.f_15.f_10);
			break;
		case 2:
			if (__LIB_1__::func_44(uParam0->f_2.f_8))
			{
				__LIB_6__::func_618(uParam0, 3);
				return false;
			}
			else
			{
				__LIB_11__::func_215(uParam0->f_2.f_2);
				func_15(iVar0, Global_1899848.f_15.f_10);
			}
			break;
		case 3:
			if (!__LIB_1__::func_44(uParam0->f_2.f_8))
			{
				__LIB_6__::func_618(uParam0, 1);
			}
			break;
	}
	return false;
}

int func_5()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_7__::func_877(iVar0);
		func_18(&(Global_1899848.f_32[iVar0 /*21*/].f_3), 0, 1);
		func_18(&(Global_1899848.f_32[iVar0 /*21*/].f_4), 0, 0);
		iVar0++;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1899848.f_201.f_14))
	{
		POPULATION::_0x74C2B3DC0B294102(Global_1899848.f_201.f_14);
		POPULATION::_0xA1CFB35069D23C23(Global_1899848.f_201.f_14);
		VOLUME::_DELETE_VOLUME(Global_1899848.f_201.f_14);
	}
	__LIB_7__::func_878();
	func_18(&(Global_1899848.f_201.f_12), 0, 1);
	func_18(&(Global_1899848.f_15.f_10), 0, 1);
	__LIB_7__::func_876(0);
	if (Global_1899848.f_217 == 0)
	{
		__LIB_7__::func_891(1, 1);
	}
	return 1;
}

bool func_9(var uParam0)
{
	float fVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return true;
	}
	if (__LIB_1__::func_44(uParam0->f_2.f_8))
	{
		return true;
	}
	if (!__LIB_1__::func_815(uParam0->f_1))
	{
		return true;
	}
	if (!__LIB_10__::func_668(uParam0->f_2.f_2))
	{
		return true;
	}
	if (Global_1899528.f_215 == 1)
	{
		return true;
	}
	if (__LIB_0__::func_21(uParam0->f_2.f_7, 4194304))
	{
		return true;
	}
	if (Global_1935630.f_12 == 0)
	{
		fVar0 = __LIB_4__::func_865(uParam0->f_1);
		if (BUILTIN::VDIST2(Global_36, uParam0->f_2.f_3) > (fVar0 * fVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_13()
{
	int iVar0;
	iVar0 = joaat("BEECHERS_COW");
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar0) > 0)
	{
		return true;
	}
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar0);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar0))
	{
		SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(iVar0, 256);
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar0);
		return true;
	}
	return false;
}

bool func_14(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	if (Global_1899848 == 0)
	{
		return false;
	}
	if (!__LIB_7__::func_870())
	{
		return false;
	}
	vVar0 = { Global_1899848.f_201 };
	vVar3 = { Global_1899848.f_201.f_3 };
	if (iParam1 == 1)
	{
		vVar0 = { Global_1899848.f_201.f_6 };
		vVar3 = { Global_1899848.f_201.f_9 };
	}
	if (!__LIB_7__::func_892(&(Global_1899848.f_201.f_12), Global_1899848.f_6, vVar0, vVar3, 1, 1, 1))
	{
		return false;
	}
	if (iParam0 == 0)
	{
		if (((!__LIB_13__::func_682() || (iParam2 == 0 && !__LIB_7__::func_888())) || (iParam2 == 0 && !__LIB_7__::func_872())) || (iParam2 == 1 && !__LIB_7__::func_892(&(Global_1899848.f_15.f_10), Global_1899848.f_7, Global_1899848.f_15.f_11, Global_1899848.f_15.f_14, 0, 0, 1)))
		{
			return false;
		}
	}
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < Global_1899848.f_9)
	{
		__LIB_7__::func_874(&(Global_1899848.f_32[iVar6 /*21*/].f_3));
		iVar6++;
	}
	__LIB_7__::func_874(&(Global_1899848.f_201.f_12));
	__LIB_7__::func_874(&(Global_1899848.f_15));
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1899848.f_201.f_14))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_201.f_12))
		{
			Global_1899848.f_201.f_14 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_1899848.f_201, 0f, 0f, 0f, 1.5f, 1.5f, 3f);
			PED::_0x7C00CFC48A782DC0(Global_1899848.f_201.f_14, Global_1899848.f_201.f_12, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			POPULATION::_0xB56D41A694E42E86(Global_1899848.f_201.f_14, 2016, 0, 0, -1, -1, 2);
			POPULATION::_0x18262CAFEBB5FBE1(Global_1899848.f_201.f_14, 10208, 0, 0, -1, -1, 0);
		}
	}
	return true;
}

void func_15(int iParam0, var uParam1)
{
	Global_1392915.f_121[iParam0 /*20*/].f_13 = uParam1;
}

void func_18(int* iParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		__LIB_7__::func_874(iParam0);
		if (iParam2 == 1 && ENTITY::_IS_ENTITY_FROZEN(*iParam0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
		}
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
			PHYSICS::ACTIVATE_PHYSICS(*iParam0);
		}
		if (iParam1 == 1)
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

