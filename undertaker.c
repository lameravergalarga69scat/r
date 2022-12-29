#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	struct<24> Local_5 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = -1;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 1097859072;
	var uLocal_60 = 1000;
	var uLocal_61 = 1067450368;
	var uLocal_62 = 5000;
	var uLocal_63 = 42;
	var uLocal_64 = 1103626240;
	var uLocal_65 = 1077936128;
	var uLocal_66 = 1106247680;
	var uLocal_67 = 1103101952;
	var uLocal_68 = 1097859072;
	var uLocal_69 = 1103626240;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_83 = 0;
	var uLocal_84 = 1;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = false;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if (func_2())
		{
			__LIB_17__::func_568(3);
		}
		switch (iLocal_3)
		{
			case 0:
				iLocal_38 = func_4(Global_1425351.f_18);
				__LIB_4__::func_228(&uLocal_42);
				if (!__LIB_0__::func_29(iLocal_38) || __LIB_0__::func_86(func_7(Global_1425351.f_18)))
				{
					__LIB_17__::func_568(3);
				}
				else
				{
					__LIB_1__::func_148(&uLocal_39);
					__LIB_17__::func_568(1);
				}
				break;
			case 1:
				if (__LIB_1__::func_285(&uLocal_39, 5f))
				{
					if (func_11())
					{
						__LIB_0__::func_37(&uLocal_39);
						__LIB_17__::func_568(2);
					}
				}
				break;
			case 2:
				if (func_13())
				{
					__LIB_17__::func_568(3);
				}
				break;
			case 3:
				func_1();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1()
{
	if (__LIB_3__::func_649(iLocal_71, iLocal_83))
	{
		__LIB_2__::func_919(iLocal_83, 1, 1);
	}
	func_16(0);
	if (__LIB_0__::func_29(iLocal_38) && __LIB_2__::func_763(iLocal_38, 0))
	{
		__LIB_2__::func_753(iLocal_38, 0, 1, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
	{
		func_19(&iLocal_83);
	}
	__LIB_17__::func_569();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2()
{
	if (__LIB_0__::func_12() != Global_1425351.f_18)
	{
		if (iLocal_3 < 2)
		{
			return true;
		}
		else if (!__LIB_4__::func_117(iLocal_71, 100f, 0))
		{
			return true;
		}
	}
	return false;
}

int func_4(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 82;
		default:
			break;
	}
	return -1;
}

Vector3 func_7(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 1300.025f, -1319.031f, 75.5864f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_11()
{
	if (__LIB_0__::func_29(iLocal_38))
	{
		if (__LIB_2__::func_767(iLocal_38, 0))
		{
			iLocal_71 = __LIB_2__::func_965(iLocal_38, 0, 0, 0, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_71))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

bool func_13()
{
	int iVar0;
	func_35();
	switch (iLocal_4)
	{
		case 0:
			iLocal_86 = func_36();
			if (func_37(iLocal_86))
			{
				if (func_38(iLocal_86, Global_1425351.f_18))
				{
					func_16(1);
					func_39(1);
				}
				else
				{
					func_40(iLocal_86);
				}
			}
			else
			{
				func_39(7);
			}
			break;
		case 1:
			if (func_37(iLocal_86))
			{
				if (func_41())
				{
					PED::SET_PED_RESET_FLAG(iLocal_71, 49, true);
					TASK::CLEAR_PED_TASKS(iLocal_71, true, false);
					func_42();
					func_39(2);
				}
				else
				{
					func_40(iLocal_86);
					func_39(0);
				}
			}
			break;
		case 2:
			ENTITY::_0xC3ABCFBC7D74AFA5(iLocal_83, 7, 1);
			PED::SET_PED_RESET_FLAG(iLocal_71, 49, true);
			if (func_43(&Local_5, 106))
			{
				TASK::CLEAR_PED_TASKS(iLocal_71, true, false);
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_83) && __LIB_0__::func_665(iLocal_71, iLocal_83, 1, 1) < 50f) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_83))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_ENTITY(0, iLocal_83, 20000, 0.5f, 1f, 2f, 0);
					TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, iLocal_83);
					__LIB_1__::func_474(iLocal_71, &iVar0, 0, 0, 1, 1);
					func_39(3);
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
					{
						func_19(&iLocal_83);
					}
					func_39(0);
				}
			}
			break;
		case 3:
			ENTITY::_0xC3ABCFBC7D74AFA5(iLocal_83, 7, 1);
			PED::SET_PED_RESET_FLAG(iLocal_71, 49, true);
			if (__LIB_3__::func_649(iLocal_71, iLocal_83))
			{
				TASK::CLEAR_PED_TASKS(iLocal_71, true, false);
				func_46();
				func_39(4);
			}
			break;
		case 4:
			PED::SET_PED_RESET_FLAG(iLocal_71, 49, true);
			if (func_43(&Local_5, 106))
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iLocal_71, iLocal_83, func_7(Global_1425351.f_18), 1f, 1);
				func_39(5);
			}
			break;
		case 5:
			PED::SET_PED_RESET_FLAG(iLocal_71, 49, true);
			if (!__LIB_3__::func_649(iLocal_71, iLocal_83))
			{
				func_19(&iLocal_83);
				func_39(0);
			}
			break;
		case 6:
			break;
		case 7:
			return true;
	}
	return false;
}

void func_16(bool bParam0)
{
	PED::SET_PED_CONFIG_FLAG(iLocal_71, 123, !bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_71, 374, !bParam0);
}

void func_19(int iParam0)
{
	DECORATOR::DECOR_REMOVE(*iParam0, __LIB_3__::func_793());
	PED::SET_PED_CONFIG_FLAG(*iParam0, 186, true);
}

void func_35()
{
	int iVar0;
	if (!bLocal_87 && func_70(iLocal_71, 0, &uLocal_42, &uLocal_70, 0, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (__LIB_3__::func_649(iLocal_71, iLocal_83))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iLocal_83, ENTITY::GET_ENTITY_COORDS(iLocal_71, true, false), 2f, 3);
		}
		TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		__LIB_1__::func_474(iLocal_71, &iVar0, 0, 0, 1, 1);
		bLocal_87 = true;
		func_39(6);
	}
}

int func_36()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!__LIB_0__::func_86(Global_1425351[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_37(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return false;
	}
	return true;
}

bool func_38(int iParam0, int iParam1)
{
	return VOLUME::_IS_POSITION_INSIDE_VOLUME(__LIB_0__::func_559(iParam1), Global_1425351[iParam0 /*3*/]);
}

void func_39(int iParam0)
{
	iLocal_4 = iParam0;
}

void func_40(int iParam0)
{
	Global_1425351[iParam0 /*3*/] = { 0f, 0f, 0f };
}

bool func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_4__::func_206(&uLocal_72, &uLocal_84, 10, Global_1425351[iLocal_86 /*3*/], 15f, 0, 0, 0, -1, 0, 0, -1082130432 /* Float: -1f */, 0, 0);
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (!PED::IS_PED_A_PLAYER(uLocal_72[iVar2]))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_72[iVar2]))
			{
				if (DECORATOR::DECOR_EXIST_ON(uLocal_72[iVar2], __LIB_3__::func_793()) && DECORATOR::DECOR_GET_BOOL(uLocal_72[iVar2], __LIB_3__::func_793()))
				{
					iVar1 = 1;
					iLocal_83 = uLocal_72[iVar2];
				}
				else
				{
					Jump @183; //curOff = 145
					__LIB_3__::func_174(uLocal_72[iVar2], 1);
					PED::SET_PED_CONFIG_FLAG(uLocal_72[iVar2], 288, false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_72[iVar2]));
					iVar2++;
				}
				return iVar1;
			}
		}
	}
}

void func_42()
{
	__LIB_3__::func_623(&Local_5);
	Local_5.f_1 = iLocal_71;
	Local_5.f_8 = { Global_1425351[iLocal_86 /*3*/] };
	Local_5.f_17 = 15f;
	Local_5.f_18 = 15f;
	Local_5.f_21 = 1f;
	__LIB_0__::func_7(&(Local_5.f_23), 128);
	func_43(&Local_5, 106);
}

bool func_43(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !__LIB_0__::func_1(uParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (PED::IS_PED_A_PLAYER(uParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, uParam0->f_3, false);
					if (__LIB_0__::func_1(uParam0->f_23, 2048))
					{
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				if (!__LIB_0__::func_1(uParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1);
				}
				if (!__LIB_0__::func_1(uParam0->f_23, 2))
				{
					uParam0->f_2 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && __LIB_0__::func_71(uParam0->f_1))
					{
						__LIB_3__::func_622(uParam0->f_1);
						iVar0 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5f, -1, false);
						iVar3 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_1, 0, iVar4);
					}
					else
					{
						__LIB_0__::func_7(&(uParam0->f_23), 2);
					}
				}
				if (__LIB_0__::func_86(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				__LIB_0__::func_19(uParam0, 1, iParam1);
			}
			else
			{
				__LIB_0__::func_19(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_80(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!func_81(uParam0, iParam1))
				{
					__LIB_3__::func_671();
				}
				__LIB_0__::func_19(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_81(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!__LIB_0__::func_1(uParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, __LIB_0__::func_1(uParam0->f_23, 512), 0, 0);
				}
				__LIB_0__::func_19(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_83(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_0__::func_7(&(uParam0->f_23), 256);
				}
				if (__LIB_0__::func_1(uParam0->f_23, 4096) && !PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_0__::func_7(&(uParam0->f_23), 256);
					iVar6 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (__LIB_0__::func_665(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = __LIB_3__::func_661(iVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_1, iVar5);
					}
				}
				else if (!__LIB_0__::func_1(uParam0->f_23, 256))
				{
					iVar5 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(uParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				__LIB_0__::func_19(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_85(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (__LIB_0__::func_1(uParam0->f_23, 8192))
				{
					if (__LIB_0__::func_1(uParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, 0, iVar7, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!__LIB_0__::func_1(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
						if (__LIB_0__::func_1(uParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_1(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_1(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (__LIB_0__::func_1(uParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_1(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_1(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (__LIB_0__::func_1(uParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_19, 0);
					}
					__LIB_1__::func_474(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				__LIB_0__::func_19(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (__LIB_0__::func_1(uParam0->f_23, 8192))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!__LIB_0__::func_1(uParam0->f_23, 1))
			{
				uParam0->f_19 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
			}
			if (!__LIB_0__::func_1(uParam0->f_23, 128) && __LIB_1__::func_313(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!__LIB_0__::func_1(uParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((__LIB_0__::func_86(uParam0->f_11) || !__LIB_0__::func_163(uParam0->f_1, 242628503)) || TASK::GET_SEQUENCE_PROGRESS(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (__LIB_3__::func_625(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, __LIB_0__::func_1(uParam0->f_23, 8)) && (!__LIB_0__::func_1(uParam0->f_23, 64) || MISC::ABSF(__LIB_3__::func_592(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (__LIB_0__::func_1(uParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_1, uParam0->f_8, 0);
				}
				__LIB_0__::func_37(&(uParam0->f_5));
				__LIB_0__::func_19(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_46()
{
	__LIB_3__::func_623(&Local_5);
	Local_5.f_1 = iLocal_71;
	Local_5.f_8 = { func_7(Global_1425351.f_18) };
	Local_5.f_18 = 5f;
	Local_5.f_21 = 1f;
	__LIB_0__::func_7(&(Local_5.f_23), 128);
	func_43(&Local_5, 106);
}

bool func_70(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_899(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_895(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_882(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_874(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_896(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_897(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_5__::func_678(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_5__::func_683(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_80(var uParam0, int iParam1)
{
	if (__LIB_1__::func_313(&(uParam0->f_5), 5f))
	{
		return true;
	}
	if (__LIB_0__::func_1(uParam0->f_23, 2))
	{
		return true;
	}
	if (((!__LIB_0__::func_71(uParam0->f_1) && !__LIB_0__::func_163(uParam0->f_1, 501393341)) && !PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true)) && !__LIB_0__::func_163(uParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_81(var uParam0, int iParam1)
{
	var uVar0;
	if (__LIB_1__::func_313(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (!__LIB_0__::func_1(uParam0->f_23, 16384))
	{
		return true;
	}
	if (uParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!__LIB_1__::func_750(&uVar0))
	{
		return true;
	}
	return false;
}

bool func_83(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_313(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (__LIB_0__::func_1(uParam0->f_23, 4))
	{
		return true;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar1, true, 1, false);
	if (__LIB_0__::func_1(uParam0->f_23, 512) || (iVar0 == joaat("WEAPON_UNARMED") && iVar1 == joaat("WEAPON_UNARMED")))
	{
		return true;
	}
	return false;
}

bool func_85(var uParam0, int iParam1)
{
	if (__LIB_1__::func_313(&(uParam0->f_5), 15f))
	{
		return true;
	}
	if (__LIB_0__::func_1(uParam0->f_23, 4096) && __LIB_0__::func_163(uParam0->f_1, 1245594896))
	{
		return false;
	}
	if (__LIB_0__::func_1(uParam0->f_23, 256))
	{
		return true;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

