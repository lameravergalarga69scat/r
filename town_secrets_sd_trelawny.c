#region Local Var
	struct<112> Local_0 = { 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_112 = 0;
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
		switch (iLocal_112)
		{
			case 0:
				if (func_3(&vVar0))
				{
					iLocal_112 = 1;
				}
				vVar0.x = SCRIPTS::GET_ID_OF_THIS_THREAD();
				break;
			case 1:
				func_4(&vVar0);
				if (__LIB_17__::func_503(__LIB_0__::func_16()))
				{
					iLocal_112 = 2;
				}
				if (vVar0.z)
				{
					iLocal_112 = 2;
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
	if (__LIB_0__::func_12() != __LIB_11__::func_454())
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
	int iVar1;
	if (__LIB_17__::func_501(__LIB_0__::func_16(), 4))
	{
		__LIB_1__::func_581(&(Local_0.f_111), 1);
		iVar0 = 1;
	}
	if (__LIB_17__::func_501(__LIB_0__::func_16(), 8))
	{
		__LIB_1__::func_581(&(Local_0.f_111), 8);
		iVar1 = 1;
	}
	if ((iVar0 && iVar1) && !__LIB_17__::func_503(__LIB_0__::func_16()))
	{
		__LIB_17__::func_504(__LIB_0__::func_16());
	}
	return true;
}

void func_4(int iParam0)
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(Global_35, func_14(0), 1);
	switch (Local_0)
	{
		case 0:
			if (__LIB_17__::func_503(__LIB_0__::func_16()))
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
			if (!func_17())
			{
				return;
			}
			__LIB_1__::func_649(&Local_0, 2);
			break;
		case 2:
			if (!func_18())
			{
				return;
			}
			__LIB_1__::func_649(&Local_0, 3);
			break;
		case 3:
			if (!func_19(&Local_0))
			{
				return;
			}
			__LIB_1__::func_649(&Local_0, 4);
			break;
		case 4:
			if (!__LIB_0__::func_1(Local_0.f_111, 1))
			{
				if (__LIB_1__::func_205(Global_35, Local_0.f_7[0], 1, 0))
				{
					__LIB_1__::func_581(&(Local_0.f_111), 1);
				}
			}
			else if (!__LIB_0__::func_1(Local_0.f_111, 2))
			{
				if (__LIB_1__::func_205(Global_35, Local_0.f_7[1], 1, 0) && !__LIB_0__::func_481(1))
				{
					__LIB_0__::func_19(&(Local_0.f_1), 3);
					__LIB_1__::func_148(&(Local_0.f_108));
					__LIB_1__::func_581(&(Local_0.f_111), 2);
				}
			}
			if (fVar0 > 40f)
			{
				__LIB_1__::func_649(&Local_0, 5);
			}
			if (__LIB_0__::func_1(Local_0.f_111, 1) && !__LIB_0__::func_1(Local_0.f_111, 4))
			{
				switch (Local_0.f_1)
				{
					case 0:
						if (__LIB_2__::func_813(&(Local_0.f_10), __LIB_1__::func_344(func_25(0)), 0, -1, 0, 0))
						{
							__LIB_1__::func_148(&(Local_0.f_108));
							__LIB_4__::func_253(joaat("CSTAG_SP_TRELAWNY_FAMILY"), 1017034651, 1120952528, -1, 1, 1, 0);
							__LIB_0__::func_19(&(Local_0.f_1), 1);
						}
						break;
					case 1:
						if ((__LIB_0__::func_265(&(Local_0.f_108)) > 3f && !__LIB_0__::func_481(1)) && __LIB_2__::func_813(&(Local_0.f_10), __LIB_1__::func_344(func_25(1)), 0, -1, 0, 0))
						{
							__LIB_0__::func_19(&(Local_0.f_1), 2);
						}
						break;
					case 2:
						if ((__LIB_0__::func_265(&(Local_0.f_108)) > 3f && !__LIB_0__::func_481(1)) && __LIB_2__::func_813(&(Local_0.f_10), __LIB_1__::func_344(func_25(2)), 0, -1, 0, 0))
						{
							__LIB_1__::func_581(&(Local_0.f_111), 4);
							__LIB_0__::func_37(&(Local_0.f_108));
							__LIB_17__::func_502(__LIB_0__::func_16(), 4);
							__LIB_0__::func_19(&(Local_0.f_1), -1);
						}
						break;
				}
			}
			if (__LIB_0__::func_1(Local_0.f_111, 2) && !__LIB_0__::func_1(Local_0.f_111, 8))
			{
				switch (Local_0.f_1)
				{
					case 3:
						if ((__LIB_0__::func_265(&(Local_0.f_108)) > 3f && !__LIB_0__::func_481(1)) && __LIB_2__::func_813(&(Local_0.f_10), __LIB_1__::func_344(func_25(3)), 0, -1, 0, 0))
						{
							__LIB_1__::func_148(&(Local_0.f_108));
							__LIB_0__::func_19(&(Local_0.f_1), 4);
						}
						break;
					case 4:
						if (__LIB_0__::func_265(&(Local_0.f_108)) > 3f && __LIB_2__::func_813(&(Local_0.f_10), __LIB_1__::func_344(func_25(4)), 0, -1, 0, 0))
						{
							__LIB_1__::func_581(&(Local_0.f_111), 8);
							__LIB_17__::func_502(__LIB_0__::func_16(), 8);
							__LIB_0__::func_19(&(Local_0.f_1), -1);
						}
						break;
				}
			}
			if ((!__LIB_17__::func_503(__LIB_0__::func_16()) && __LIB_17__::func_501(__LIB_0__::func_16(), 4)) && __LIB_17__::func_501(__LIB_0__::func_16(), 8))
			{
				__LIB_17__::func_504(__LIB_0__::func_16());
				__LIB_1__::func_649(&Local_0, 5);
			}
			break;
		case 5:
			func_32(&Local_0);
			if (__LIB_17__::func_503(__LIB_0__::func_16()))
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

Vector3 func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2730.417f, -1181.929f, 52.94527f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_17()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		iVar1 = iVar0;
		STREAMING::REQUEST_MODEL(func_35(iVar1), false);
		iVar0++;
	}
	PED::_0xED9582B3DA8F02B4(4);
	if (HUD::_DOES_TEXT_DATABASE_EXIST(func_36()))
	{
		HUD::_TEXT_DATABASE_REQUEST(func_36());
	}
	return true;
}

bool func_18()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= (4 - 1))
	{
		iVar2 = iVar1;
		if (!STREAMING::HAS_MODEL_LOADED(func_35(iVar2)))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_36()))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	if (PED::_0x62DE46F061CAA468() < 4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2[iVar1]))
		{
			iParam0->f_2[iVar1] = __LIB_1__::func_545(func_35(iVar1), func_37(iVar1), 0f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_7[iVar0]))
		{
			iVar2 = iVar0;
			Var3 = { func_39(iVar2) };
			iParam0->f_7[iVar0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var3.f_10, Var3, Var3.f_3, Var3.f_6, Var3.f_9);
		}
		iVar0++;
	}
	__LIB_0__::func_928(&(iParam0->f_10), iParam0->f_2[0], "TRELAWNY", 0);
	__LIB_0__::func_928(&(iParam0->f_10), iParam0->f_2[1], "TRELAWNY_WIFE", 0);
	__LIB_0__::func_928(&(iParam0->f_10), iParam0->f_2[2], "TRELAWNY_SON1", 0);
	__LIB_0__::func_928(&(iParam0->f_10), iParam0->f_2[3], "TRELAWNY_SON2", 0);
	return true;
}

char* func_25(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TREFA_TOAST";
		case 1:
			return "TREFA_TOASTR";
		case 2:
			return "TREFA_PRESENTS";
		case 3:
			return "TREFA_KNOCK";
		case 4:
			return "TREFA_OFFICE";
		default:
			break;
	}
	return "";
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		iVar1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_2[iVar1]))
		{
			PED::DELETE_PED(&(iParam0->f_2[iVar1]));
		}
		if (STREAMING::IS_MODEL_VALID(func_35(iVar1)))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_35(iVar1));
		}
		if (HUD::_TEXT_DATABASE_HAS_LOADED(func_36()))
		{
			HUD::_TEXT_DATABASE_DELETE(func_36());
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_7[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iParam0->f_7[iVar0]);
		}
		iVar0++;
	}
	PED::_0x7D4E70A67A651C71(4);
	return 1;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("A_M_M_MIDDLESDTOWNFOLK_01");
		case 1:
			return joaat("A_F_M_MIDDLESDTOWNFOLK_01");
		case 2:
			return joaat("A_M_M_MIDDLESDTOWNFOLK_01");
		case 3:
			return joaat("A_M_M_MIDDLESDTOWNFOLK_01");
		default:
			break;
	}
	return joaat("A_M_M_MIDDLESDTOWNFOLK_01");
}

char* func_36()
{
	return "TREFAAU";
}

Vector3 func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2730.556f, -1179.097f, 48.23744f;
		case 1:
			return 2731.298f, -1178.588f, 48.23723f;
		case 2:
			return 2732.105f, -1178.555f, 48.23688f;
		case 3:
			return 2731.054f, -1177.76f, 48.23754f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

struct<11> func_39(int iParam0)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 1:
			Var0 = { 2730.332f, -1181.96f, 53.10075f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 1.319822f, 1.53588f, 2.388693f };
			Var0.f_9 = "TS_SD_DOOR_TRIGGER";
			Var0.f_10 = joaat("VOLBOX");
			break;
		case 0:
			Var0 = { 2731.981f, -1182.07f, 53.10075f };
			Var0.f_3 = { 0f, 0f, -3.041f };
			Var0.f_6 = { 4.275794f, 1.53588f, 2.388693f };
			Var0.f_9 = "TS_SD_WALK_WALK_TRIGGER";
			Var0.f_10 = joaat("VOLBOX");
			break;
	}
	return Var0;
}

