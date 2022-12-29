#region Local Var
	struct<109> Local_0 = { 0, 0, 2, 0, 0, 1, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_109 = 0;
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
		func_1(&vVar0);
	}
	while (func_2(&vVar0))
	{
		switch (iLocal_109)
		{
			case 0:
				if (func_3(&vVar0))
				{
					iLocal_109 = 1;
				}
				vVar0.x = SCRIPTS::GET_ID_OF_THIS_THREAD();
				break;
			case 1:
				func_4(&vVar0);
				if (__LIB_17__::func_503(__LIB_9__::func_762()))
				{
					iLocal_109 = 2;
				}
				if (vVar0.z)
				{
					iLocal_109 = 2;
				}
				break;
			case 2:
				func_1(&vVar0);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&vVar0);
}

void func_1(var uParam0)
{
	if (uParam0->f_1)
	{
		return;
	}
	func_7(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
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

bool func_3(var uParam0)
{
	int iVar0;
	var uVar1;
	if (__LIB_17__::func_501(__LIB_9__::func_762(), 4))
	{
		__LIB_1__::func_581(&(Local_0.f_108), 1);
		iVar0 = 1;
	}
	if ((iVar0 && uVar1) && !__LIB_17__::func_503(__LIB_9__::func_762()))
	{
		__LIB_17__::func_504(__LIB_9__::func_762());
	}
	return true;
}

void func_4(int iParam0)
{
	float fVar0;
	bool bVar1;
	fVar0 = __LIB_0__::func_94(Global_35, func_14(0), 1);
	bVar1 = false;
	if (Local_0 < 5)
	{
		if (fVar0 < 20f)
		{
			if (__LIB_1__::func_205(Global_35, Local_0.f_5[0], 1, 0))
			{
				bVar1 = true;
			}
			if ((PED::IS_PED_SHOOTING(Global_35) || __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1)) || LAW::_0xF46108C50A22B029())
			{
				__LIB_1__::func_581(&(Local_0.f_108), 5);
				Local_0 = 5;
			}
		}
	}
	switch (Local_0)
	{
		case 0:
			if (__LIB_17__::func_503(__LIB_9__::func_762()))
			{
				__LIB_1__::func_649(&Local_0, 6);
				return;
			}
			if (fVar0 < 20f && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				__LIB_1__::func_649(&Local_0, 1);
			}
			break;
		case 1:
			if (!func_19())
			{
				return;
			}
			__LIB_1__::func_649(&Local_0, 2);
			break;
		case 2:
			if (!func_20())
			{
				return;
			}
			__LIB_1__::func_649(&Local_0, 3);
			break;
		case 3:
			if (!func_21(&Local_0))
			{
				return;
			}
			__LIB_1__::func_649(&Local_0, 4);
			break;
		case 4:
			if (!__LIB_0__::func_1(Local_0.f_108, 1))
			{
				if (bVar1)
				{
					__LIB_1__::func_581(&(Local_0.f_108), 1);
				}
			}
			if (fVar0 > 40f)
			{
				__LIB_1__::func_649(&Local_0, 5);
			}
			if (__LIB_0__::func_1(Local_0.f_108, 1) && !__LIB_0__::func_1(Local_0.f_108, 4))
			{
				switch (Local_0.f_1)
				{
					case 0:
						if (__LIB_2__::func_813(&(Local_0.f_7), __LIB_1__::func_344(func_23(0)), 0, -1, 0, 0))
						{
							__LIB_1__::func_148(&(Local_0.f_105));
							__LIB_4__::func_253(joaat("CSTAG_SP_TRELAWNY_FAMILY"), 1017034651, 1120952528, -1, 1, 1, 0);
							__LIB_0__::func_19(&(Local_0.f_1), 1);
						}
						break;
					case 1:
						if ((__LIB_0__::func_265(&(Local_0.f_105)) > 3f && !__LIB_0__::func_481(1)) && __LIB_2__::func_813(&(Local_0.f_7), __LIB_1__::func_344(func_23(1)), 0, -1, 0, 0))
						{
							__LIB_0__::func_19(&(Local_0.f_1), 2);
						}
						break;
					case 2:
						if ((__LIB_0__::func_265(&(Local_0.f_105)) > 3f && !__LIB_0__::func_481(1)) && __LIB_2__::func_813(&(Local_0.f_7), __LIB_1__::func_344(func_23(2)), 0, -1, 0, 0))
						{
							__LIB_1__::func_581(&(Local_0.f_108), 4);
							__LIB_0__::func_37(&(Local_0.f_105));
							__LIB_17__::func_502(__LIB_9__::func_762(), 4);
							__LIB_0__::func_19(&(Local_0.f_1), -1);
						}
						break;
				}
			}
			if ((!__LIB_17__::func_503(__LIB_9__::func_762()) && __LIB_17__::func_501(__LIB_9__::func_762(), 4)) && !__LIB_0__::func_481(1))
			{
				__LIB_17__::func_504(__LIB_9__::func_762());
				__LIB_1__::func_649(&Local_0, 5);
			}
			break;
		case 5:
			func_33(&Local_0);
			if (__LIB_0__::func_481(1))
			{
				__LIB_0__::func_82(1, 0, 0);
			}
			if (__LIB_17__::func_503(__LIB_9__::func_762()) || __LIB_0__::func_1(Local_0.f_108, 5))
			{
				__LIB_1__::func_649(&Local_0, 6);
			}
			else
			{
				__LIB_1__::func_649(&Local_0, 0);
			}
			break;
		case 6:
			break;
	}
}

void func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (2 - 1))
	{
		iVar0 = iVar2;
		if (ENTITY::DOES_ENTITY_EXIST(Local_0.f_2[iVar0]))
		{
			PED::DELETE_PED(&(Local_0.f_2[iVar0]));
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= (1 - 1))
	{
		iVar1 = iVar2;
		if (VOLUME::_DOES_VOLUME_EXIST(Local_0.f_5[iVar1]))
		{
			VOLUME::_DELETE_VOLUME(Local_0.f_5[iVar1]);
		}
		iVar2++;
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(func_35()))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED(func_35()))
		{
			HUD::_TEXT_DATABASE_DELETE(func_35());
		}
	}
}

int func_9()
{
	return 76;
}

Vector3 func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -277.7802f, 807.9898f, 121.5997f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_19()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		iVar1 = iVar0;
		STREAMING::REQUEST_MODEL(func_39(iVar1), false);
		iVar0++;
	}
	PED::_0xED9582B3DA8F02B4(2);
	if (HUD::_DOES_TEXT_DATABASE_EXIST(func_35()))
	{
		HUD::_TEXT_DATABASE_REQUEST(func_35());
	}
	return true;
}

bool func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= (2 - 1))
	{
		iVar2 = iVar1;
		if (!STREAMING::HAS_MODEL_LOADED(func_39(iVar2)))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_35()))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	if (PED::_0x62DE46F061CAA468() < 2)
	{
		return false;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2[iVar1]))
		{
			iParam0->f_2[iVar1] = __LIB_1__::func_545(func_39(iVar1), func_40(iVar1), 0f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_5[iVar0]))
		{
			iVar2 = iVar0;
			Var3 = { func_42(iVar2) };
			iParam0->f_5[iVar0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var3.f_10, Var3, Var3.f_3, Var3.f_6, Var3.f_9);
		}
		iVar0++;
	}
	__LIB_0__::func_928(&(iParam0->f_7), iParam0->f_2[0], "VAL_Sheriff", 0);
	__LIB_0__::func_928(&(iParam0->f_7), iParam0->f_2[1], "MOIRA", 0);
	AUDIO::STOP_PED_SPEAKING(iParam0->f_2[0], true);
	AUDIO::STOP_PED_SPEAKING(iParam0->f_2[1], true);
	return true;
}

char[] func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "VVSM1_ACTION_A";
		case 1:
			return "VVSM1_ACTION_B";
		case 2:
			return "VVSM1_ACTION_C";
		default:
			break;
	}
	return "";
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		iVar1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_2[iVar1]))
		{
			PED::DELETE_PED(&(iParam0->f_2[iVar1]));
		}
		if (STREAMING::IS_MODEL_VALID(func_39(iVar1)))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_39(iVar1));
		}
		if (HUD::_TEXT_DATABASE_HAS_LOADED(func_35()))
		{
			HUD::_TEXT_DATABASE_DELETE(func_35());
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_5[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iParam0->f_5[iVar0]);
		}
		iVar0++;
	}
	if (PED::_0x5C16855277819BBF() > 0)
	{
		PED::_0x7D4E70A67A651C71(2);
	}
	return 1;
}

char* func_35()
{
	return "VVSM1AU";
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("A_M_M_VALTOWNFOLK_01");
		case 1:
			return joaat("A_F_M_VALPROSTITUTE_01");
		default:
			break;
	}
	return joaat("A_M_M_VALTOWNFOLK_01");
}

Vector3 func_40(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -278.7701f, 808.7886f, 121.5997f;
		case 1:
			return -276.9581f, 809.0951f, 121.5997f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

struct<11> func_42(int iParam0)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { -278.7203f, 812.5399f, 122.8819f };
			Var0.f_3 = { 0f, 0f, 8.599687f };
			Var0.f_6 = { 4.275794f, 2.017206f, 2.939194f };
			Var0.f_9 = "TS_VAL_WALK_WALK_TRIGGER";
			Var0.f_10 = joaat("VOLBOX");
			break;
	}
	return Var0;
}

