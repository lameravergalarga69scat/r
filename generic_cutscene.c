#region Local Var
	bool bLocal_0 = false;
	struct<629> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	struct<629> Var2;
	bLocal_0 = true;
	bVar0 = false;
	bVar1 = false;
	Var2 = { ScriptParam_0 };
	func_1();
	while (bLocal_0)
	{
		if (__LIB_14__::func_687(1, 1))
		{
			bLocal_0 = false;
			bVar0 = true;
			bVar1 = true;
		}
		if (__LIB_16__::func_364(-1, 256, 0))
		{
			bLocal_0 = false;
			bVar0 = true;
			bVar1 = true;
		}
		if (__LIB_0__::func_6(__LIB_16__::func_3()))
		{
			bLocal_0 = false;
			bVar0 = true;
			bVar1 = true;
		}
		if (!bLocal_0)
		{
		}
		else
		{
			if (func_6(&Var2))
			{
				bLocal_0 = false;
			}
			BUILTIN::WAIT(0);
		}
	}
	if (bVar1)
	{
		func_7(Var2.f_611);
	}
	if (bVar0)
	{
		func_9(&Var2, func_8(Var2.f_611) == 2);
		func_10(&Var2);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

bool func_6(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			func_15(uParam0);
			break;
		case 1:
			if (!func_16(uParam0))
			{
				func_17(uParam0);
				func_18(uParam0);
			}
			func_19(uParam0);
			if (!func_20(uParam0))
			{
				func_21(uParam0);
				func_22(uParam0);
			}
			break;
		case 2:
			if (!func_16(uParam0))
			{
				func_23(uParam0);
				func_18(uParam0);
			}
			func_24(uParam0);
			if (!func_20(uParam0))
			{
				func_25(uParam0);
				func_22(uParam0);
			}
			break;
		case 3:
			if (!func_16(uParam0))
			{
				func_26(uParam0);
				func_18(uParam0);
			}
			func_27(uParam0);
			if (!func_20(uParam0))
			{
				func_28(uParam0);
				func_22(uParam0);
			}
			break;
		case 4:
			if (!func_16(uParam0))
			{
				__LIB_0__::func_11(uParam0);
				func_18(uParam0);
			}
			func_30(uParam0);
			if (!func_20(uParam0))
			{
				func_31(uParam0);
				func_22(uParam0);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_7(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1887078.f_1696[iVar0 /*2*/] == -1)
		{
		}
		else if (Global_1887078.f_1696[iVar0 /*2*/] == iParam0)
		{
			Global_1887078.f_1696[iVar0 /*2*/] = -1;
			Global_1887078.f_1696[iVar0 /*2*/].f_1 = 0;
		}
		else
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_1887078.f_1682[iVar0 /*13*/].f_8 == -1)
		{
		}
		else if (Global_1887078.f_1682[iVar0 /*13*/].f_8 == iParam0)
		{
			func_32(&(Global_1887078.f_1682[iVar0 /*13*/]), 9);
		}
		iVar0++;
	}
	if (Global_1225639.f_15 != Global_1225639)
	{
		Global_1887078.f_1720 = -1;
	}
}

int func_8(int iParam0)
{
	int iVar0;
	if (iParam0 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_1887078.f_1682[iVar0 /*13*/].f_8 != iParam0)
		{
		}
		else
		{
			return Global_1887078.f_1682[iVar0 /*13*/].f_7;
		}
		iVar0++;
	}
	return -1;
}

void func_9(var uParam0, bool bParam1)
{
	Global_1887078.f_1682[uParam0->f_612 /*13*/].f_12 = 0;
	func_33(uParam0, bParam1);
	func_34(uParam0);
	__LIB_17__::func_735();
	__LIB_14__::func_688(0);
	if (__LIB_0__::func_1(uParam0->f_5, 64))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
		ENTITY::SET_ENTITY_PROOFS(Global_1225639.f_8, 0, false);
	}
	if (Global_1048580)
	{
		func_38(0);
	}
}

void func_10(var uParam0)
{
	struct<6> Var0;
	*uParam0 = { Var0 };
}

void func_15(var uParam0)
{
	func_39(uParam0);
}

bool func_16(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_2, *uParam0);
}

void func_17(var uParam0)
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	if (uParam0->f_609 <= 0)
	{
		uParam0->f_609 = 150;
	}
}

void func_18(var uParam0)
{
	MISC::SET_BIT(&(uParam0->f_2), *uParam0);
}

void func_19(var uParam0)
{
	func_39(uParam0);
}

bool func_20(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_3, *uParam0);
}

void func_21(var uParam0)
{
	Global_1887078.f_1682[uParam0->f_612 /*13*/].f_10 = 0;
}

void func_22(var uParam0)
{
	MISC::SET_BIT(&(uParam0->f_3), *uParam0);
}

void func_23(var uParam0)
{
	uParam0->f_602 = 0;
}

void func_24(var uParam0)
{
	bool bVar0;
	if (!uParam0->f_602)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uParam0->f_602 = 1;
			return;
		}
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_34(uParam0);
		func_40(uParam0);
		func_41(uParam0, 1);
		uParam0->f_602 = 0;
		return;
	}
	else
	{
		return;
	}
	bVar0 = true;
	if (!func_42(uParam0))
	{
		bVar0 = false;
		if (func_43())
		{
			Global_1887078.f_1682[uParam0->f_612 /*13*/].f_10 = 1;
			func_41(uParam0, 4);
			return;
		}
	}
	if (!func_44(uParam0))
	{
		bVar0 = false;
		if (func_43())
		{
			Global_1887078.f_1682[uParam0->f_612 /*13*/].f_10 = 1;
			func_41(uParam0, 4);
			return;
		}
	}
	if (uParam0->f_600)
	{
		if (bVar0)
		{
			bVar0 = func_45(uParam0);
		}
		if (bVar0)
		{
			if (!__LIB_0__::func_1(uParam0->f_5, 4))
			{
				__LIB_0__::func_7(&(uParam0->f_5), 4);
				CAM::DO_SCREEN_FADE_OUT(2000);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				ENTITY::SET_ENTITY_PROOFS(Global_1225639.f_8, 127, false);
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(Global_1225639.f_8, true, false, 256);
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
				__LIB_0__::func_7(&(uParam0->f_5), 64);
			}
		}
	}
	if (((bVar0 && __LIB_0__::func_1(uParam0->f_5, 4)) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
	{
		func_39(uParam0);
	}
}

void func_25(var uParam0)
{
	int iVar0;
	uParam0->f_267 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), uParam0->f_267.f_4[uParam0->f_603 /*26*/], uParam0->f_267.f_4[uParam0->f_603 /*26*/].f_3, 51.2f, true, 2);
	uParam0->f_267.f_1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), uParam0->f_267.f_4[uParam0->f_603 /*26*/].f_6, uParam0->f_267.f_4[uParam0->f_603 /*26*/].f_9, 51.2f, __LIB_0__::func_1(uParam0->f_267.f_4[uParam0->f_603 /*26*/].f_25, 1), 2);
	if (PED::IS_PED_ON_MOUNT(Global_1225639.f_8))
	{
		uParam0->f_613 = PED::GET_MOUNT(Global_1225639.f_8);
	}
	else
	{
		iVar0 = PED::_GET_LAST_MOUNT(Global_1225639.f_8);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && __LIB_0__::func_665(iVar0, Global_1225639.f_8, 1, 1) < 25f)
		{
			uParam0->f_613 = iVar0;
		}
		else
		{
			return;
		}
	}
	uParam0->f_614 = 1;
}

void func_26(var uParam0)
{
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	__LIB_14__::func_688(1);
	func_38(1);
	if (Global_1225639.f_15 == Global_1225639)
	{
		Global_1055058[Global_1225639 /*116*/].f_15.f_6 = 3;
	}
}

void func_27(var uParam0)
{
	if (func_48(uParam0))
	{
		uParam0->f_603++;
	}
	func_49(uParam0);
	func_50();
	if (uParam0->f_603 == 10 || uParam0->f_603 >= uParam0->f_604)
	{
		Global_1887078.f_1682[uParam0->f_612 /*13*/].f_10 = 1;
		func_39(uParam0);
	}
}

void func_28(var uParam0)
{
	func_38(0);
	if (Global_1225639.f_15 == Global_1225639)
	{
		Global_1055058[Global_1225639 /*116*/].f_15.f_6 = 6;
	}
}

void func_30(var uParam0)
{
	if (((__LIB_1__::func_927() || STREAMING::_0x99F92061EFE908BA()) || __LIB_0__::func_1(Global_1935630, 16384)) || __LIB_10__::func_689(Global_1225639))
	{
		func_39(uParam0);
		return;
	}
	if (uParam0->f_601)
	{
		func_39(uParam0);
		return;
	}
	if (CAM::IS_SCREEN_FADING_OUT())
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(2000);
	}
	func_39(uParam0);
}

void func_31(var uParam0)
{
	if (Global_1887078.f_1682[uParam0->f_612 /*13*/].f_10)
	{
		if (__LIB_0__::func_30(uParam0->f_605))
		{
			__LIB_12__::func_58(uParam0->f_605, 0, PLAYER::PLAYER_ID(), 0);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_626)))
	{
		HUD::_TEXT_DATABASE_DELETE(&(uParam0->f_626));
	}
	func_9(uParam0, 0);
}

void func_32(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return;
	}
	*uParam0 = iParam1;
}

void func_33(var uParam0, bool bParam1)
{
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_267))
	{
		CAM::DESTROY_CAM(uParam0->f_267, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_267.f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_267.f_1, false);
	}
	if (bParam1)
	{
		if (((__LIB_1__::func_927() || STREAMING::_0x99F92061EFE908BA()) || __LIB_0__::func_1(Global_1935630, 16384)) || __LIB_10__::func_689(Global_1225639))
		{
		}
		else
		{
			CAM::DO_SCREEN_FADE_IN(2000);
		}
	}
}

void func_34(var uParam0)
{
	func_56(uParam0);
	func_57(uParam0);
}

void func_38(int iParam0)
{
	Global_1048580 = iParam0;
}

void func_39(var uParam0)
{
	int iVar0;
	uParam0->f_1 = *uParam0;
	MISC::SET_BIT(&(uParam0->f_3), uParam0->f_1);
	MISC::CLEAR_BIT(&(uParam0->f_2), uParam0->f_1);
	iVar0 = *uParam0;
	iVar0++;
	*uParam0 = iVar0;
	if (*uParam0 == 6)
	{
		*uParam0 = 5;
	}
	func_58(uParam0->f_611, *uParam0);
}

void func_40(var uParam0)
{
	uParam0->f_5 = 0;
	uParam0->f_4 = 0;
}

void func_41(var uParam0, int iParam1)
{
	uParam0->f_1 = *uParam0;
	MISC::SET_BIT(&(uParam0->f_3), uParam0->f_1);
	MISC::CLEAR_BIT(&(uParam0->f_2), uParam0->f_1);
	*uParam0 = iParam1;
	if (*uParam0 == 6)
	{
		*uParam0 = 5;
	}
	func_58(uParam0->f_611, *uParam0);
}

bool func_42(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_749();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (uParam0->f_6[iVar1 /*130*/].f_10)
		{
			iVar0 = uParam0->f_6[iVar1 /*130*/];
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar0 == __LIB_0__::func_749())
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar2 = BUILTIN::ROUND(__LIB_0__::func_665(iVar0, Global_1225639.f_8, 1, 1));
	if (iVar2 >= uParam0->f_609)
	{
		Global_1887078.f_1682[uParam0->f_612 /*13*/].f_10 = 0;
		uParam0->f_601 = 1;
		func_41(uParam0, 4);
		return false;
	}
	return true;
}

bool func_43()
{
	if (Global_1225639.f_15 == Global_1225639)
	{
		return false;
	}
	if (Global_1225639.f_15 >= 32 || Global_1225639.f_15 < 0)
	{
		return false;
	}
	if (Global_1055058[Global_1225639.f_15 /*116*/].f_15.f_6 == 3)
	{
		return true;
	}
	return false;
}

bool func_44(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	iVar0 = 0;
	bVar1 = true;
	bVar2 = true;
	if (!__LIB_0__::func_1(uParam0->f_5, 16))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (uParam0->f_532[iVar0 /*12*/] == 0)
			{
			}
			else
			{
				PROPSET::_REQUEST_PROPSET(uParam0->f_532[iVar0 /*12*/]);
				if (!PROPSET::_HAS_PROPSET_LOADED(uParam0->f_532[iVar0 /*12*/]))
				{
					bVar1 = false;
				}
				else
				{
					uParam0->f_532[iVar0 /*12*/].f_8 = PROPSET::_CREATE_PROPSET(uParam0->f_532[iVar0 /*12*/], uParam0->f_532[iVar0 /*12*/].f_1, uParam0->f_532[iVar0 /*12*/].f_7, uParam0->f_532[iVar0 /*12*/].f_4.f_2, 1f, false, false);
					if (!PROPSET::_DOES_PROPSET_EXIST(uParam0->f_532[iVar0 /*12*/].f_8))
					{
						bVar1 = false;
						Jump @194; //curOff = 176
					}
					else
					{
						uParam0->f_610++;
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar1)
	{
		if (!__LIB_0__::func_1(uParam0->f_5, 16))
		{
			__LIB_0__::func_7(&(uParam0->f_5), 16);
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_5, 16))
	{
		return false;
	}
	iVar0 = 0;
	if (!__LIB_0__::func_1(uParam0->f_5, 32))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (uParam0->f_532[iVar0 /*12*/] == 0)
			{
			}
			else if (!PROPSET::_DOES_PROPSET_EXIST(uParam0->f_532[iVar0 /*12*/].f_8))
			{
			}
			else if (PED::_0x91A5F9CBEBB9D936(uParam0->f_532[iVar0 /*12*/].f_10))
			{
			}
			else
			{
				vVar3 = { 15f, 15f, 15f };
				vVar6 = { 0f, 0f, 0f };
				iVar9 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam0->f_532[iVar0 /*12*/].f_1, vVar6, vVar3, &(uParam0->f_618));
				uParam0->f_532[iVar0 /*12*/].f_10 = PED::_0x4C39C95AE5DB1329(iVar9, 0, 7);
				if (PED::_0x91A5F9CBEBB9D936(uParam0->f_532[iVar0 /*12*/].f_10))
				{
				}
				else
				{
					bVar2 = false;
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	if (bVar2)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (uParam0->f_532[iVar0 /*12*/] == 0)
			{
			}
			else
			{
				__LIB_0__::func_568(uParam0->f_532[iVar0 /*12*/].f_1, 15f, 0);
			}
			iVar0++;
		}
		if (!__LIB_0__::func_1(uParam0->f_5, 32))
		{
			__LIB_0__::func_7(&(uParam0->f_5), 32);
		}
	}
	return __LIB_0__::func_1(uParam0->f_5, 32);
}

bool func_45(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = __LIB_0__::func_749();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_6[iVar0 /*130*/].f_10)
		{
			iVar1 = uParam0->f_6[iVar0 /*130*/];
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == __LIB_0__::func_749())
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return false;
	}
	if (Global_1225639.f_15 == Global_1225639 || !GANG::_0x0F99F6436528A089(Global_1225639.f_14))
	{
		if (Global_1887078.f_1682[uParam0->f_612 /*13*/].f_12)
		{
			__LIB_0__::func_7(&(uParam0->f_5), 8);
			__LIB_1__::func_221(uParam0->f_6[iVar0 /*130*/].f_13, 0, 0);
			__LIB_1__::func_382(uParam0->f_6[iVar0 /*130*/].f_13, 0, 0);
			MISC::_0xE98D55C5983F2509(iVar1);
			func_63();
		}
	}
	else if (GANG::_0x0F99F6436528A089(Global_1225639.f_14))
	{
		if (Global_1225639.f_15 >= 32 || Global_1225639.f_15 < 0)
		{
			return false;
		}
		if (!__LIB_0__::func_1(uParam0->f_5, 8))
		{
			if (Global_1055058[Global_1225639.f_15 /*116*/].f_15.f_6 == 3)
			{
				if (ENTITY::IS_ENTITY_DEAD(Global_1225639.f_8))
				{
					Global_1887078.f_1682[uParam0->f_612 /*13*/].f_10 = 1;
					func_41(uParam0, 4);
					return false;
				}
				__LIB_0__::func_7(&(uParam0->f_5), 8);
			}
		}
	}
	return __LIB_0__::func_1(uParam0->f_5, 8);
}

bool func_48(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3[2];
	int iVar6;
	int iVar7;
	iVar0 = uParam0->f_603;
	bVar1 = false;
	if (iVar0 + 1 == uParam0->f_604)
	{
		bVar1 = true;
	}
	iVar2 = func_64(uParam0->f_603);
	if (!__LIB_0__::func_1(uParam0->f_4, iVar2))
	{
		if (CAM::IS_SCREEN_FADING_OUT())
		{
			return false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_6[iVar0 /*130*/].f_120[0 /*3*/])))
		{
			if (__LIB_2__::func_813(&(uParam0->f_6[iVar0 /*130*/].f_19), uParam0->f_6[iVar0 /*130*/].f_120[0 /*3*/], 1, 0, 0, 0))
			{
			}
		}
		CAM::SET_CAM_PARAMS(uParam0->f_267, uParam0->f_267.f_4[iVar0 /*26*/], uParam0->f_267.f_4[iVar0 /*26*/].f_3, 51.2f, 0, 1, 1, 2, 1, 0);
		CAM::SET_CAM_PARAMS(uParam0->f_267.f_1, uParam0->f_267.f_4[iVar0 /*26*/].f_6, uParam0->f_267.f_4[iVar0 /*26*/].f_9, 51.2f, 0, 1, 1, 2, 1, 0);
		CAM::SET_CAM_ACTIVE(uParam0->f_267, true);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(2000);
		}
		if (__LIB_0__::func_1(uParam0->f_267.f_4[iVar0 /*26*/].f_25, 2))
		{
			if (__LIB_12__::func_29(Global_1225639))
			{
				uVar3[0] = func_67(&(uParam0->f_267.f_4[iVar0 /*26*/].f_16[0 /*4*/]), 10000, 0, 0, 0, 1);
				uParam0->f_267.f_4[iVar0 /*26*/].f_13[0] = uVar3[0];
			}
			else
			{
				uVar3[1] = func_67(&(uParam0->f_267.f_4[iVar0 /*26*/].f_16[1 /*4*/]), 10000, 0, 0, 0, 1);
				uParam0->f_267.f_4[iVar0 /*26*/].f_13[1] = uVar3[0];
			}
		}
		else
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 2)
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_267.f_4[iVar0 /*26*/].f_16[iVar6 /*4*/])))
				{
				}
				else
				{
					uVar3[iVar6] = func_67(&(uParam0->f_267.f_4[iVar0 /*26*/].f_16[iVar6 /*4*/]), 10000, 0, 0, 0, 1);
					uParam0->f_267.f_4[iVar0 /*26*/].f_13[iVar6] = uVar3[0];
				}
				iVar6++;
			}
		}
		if (__LIB_0__::func_1(uParam0->f_267.f_4[iVar0 /*26*/].f_25, 1))
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_267.f_1, uParam0->f_267, 8000, 1, 1);
		}
		uParam0->f_267.f_3 = MISC::GET_GAME_TIMER();
		__LIB_0__::func_7(&(uParam0->f_4), iVar2);
	}
	else
	{
		iVar7 = uParam0->f_267.f_4[iVar0 /*26*/].f_12 + 2000;
		if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_267.f_1) && (MISC::GET_GAME_TIMER() - uParam0->f_267.f_3) >= iVar7)
		{
			if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
			{
				if (bVar1 || __LIB_0__::func_1(uParam0->f_267.f_4[iVar0 /*26*/].f_25, 4))
				{
					CAM::DO_SCREEN_FADE_OUT(2000);
				}
			}
			if (bVar1)
			{
				func_56(uParam0);
			}
			if (__LIB_0__::func_1(uParam0->f_267.f_4[iVar0 /*26*/].f_25, 8))
			{
				if (!func_68(uParam0))
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

void func_49(var uParam0)
{
	int iVar0;
	float fVar1;
	if (uParam0->f_614 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_613))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_613))
	{
		return;
	}
	if (__LIB_0__::func_86(uParam0->f_615))
	{
		uParam0->f_614 = 0;
		return;
	}
	if (__LIB_0__::func_665(uParam0->f_613, Global_1225639.f_8, 1, 1) > 25f)
	{
		uParam0->f_614 = 0;
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_613))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_613);
		return;
	}
	switch (uParam0->f_614)
	{
		case 1:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_613, 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_613, false);
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_1225639.f_8, true))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_613, true, false);
				TASK::CLEAR_PED_TASKS(Global_1225639.f_8, true, false);
			}
			TASK::TASK_DISMOUNT_ANIMAL(Global_1225639.f_8, 16, 0, 0, 0, 0);
			uParam0->f_614 = 2;
			break;
		case 2:
			iVar0 = TASK::GET_SCRIPT_TASK_STATUS(Global_1225639.f_8, 501393341, false);
			if (iVar0 == 1)
			{
				return;
			}
			else if (iVar0 == 7)
			{
				uParam0->f_614 = 1;
				return;
			}
			uParam0->f_614 = 3;
			break;
		case 3:
			if (TASK::_0x9FF5F9B24E870748(uParam0->f_613))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_613, true, false);
			}
			TASK::TASK_GO_STRAIGHT_TO_COORD(uParam0->f_613, uParam0->f_615, 1.5f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
			uParam0->f_614 = 4;
			break;
		case 4:
			iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_613, 2106541073, false);
			if (iVar0 != 8)
			{
				return;
			}
			uParam0->f_614 = 5;
			break;
		case 5:
			fVar1 = __LIB_0__::func_94(uParam0->f_613, uParam0->f_615, 1);
			if (fVar1 > 1f)
			{
				uParam0->f_614 = 3;
				return;
			}
			uParam0->f_614 = 0;
			break;
	}
}

void func_50()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 == Global_1225639)
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else
			{
				ENTITY::_0x80FDEB3A9E9AA578(PLAYER::GET_PLAYER_PED(iVar1), 0);
			}
		}
		iVar0++;
	}
}

void func_56(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_6[iVar0 /*130*/] == __LIB_0__::func_749())
		{
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6[iVar0 /*130*/]))
		{
		}
		else
		{
			__LIB_2__::func_426(&(uParam0->f_6[iVar0 /*130*/]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6[iVar0 /*130*/].f_1);
		}
		iVar0++;
	}
}

void func_57(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (uParam0->f_532[iVar0 /*12*/] == 0)
		{
		}
		else
		{
			if (PROPSET::_DOES_PROPSET_EXIST(uParam0->f_532[iVar0 /*12*/].f_8))
			{
				PROPSET::_DELETE_PROPSET(uParam0->f_532[iVar0 /*12*/].f_8, true, true);
			}
			if (PED::_0x91A5F9CBEBB9D936(uParam0->f_532[iVar0 /*12*/].f_10))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_532[iVar0 /*12*/].f_10, false);
			}
		}
		iVar0++;
	}
}

void func_58(int iParam0, var uParam1)
{
	int iVar0;
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_1887078.f_1682[iVar0 /*13*/].f_8 != iParam0)
		{
		}
		else
		{
			Global_1887078.f_1682[iVar0 /*13*/].f_7 = uParam1;
		}
		else
		{
			iVar0++;
		}
	}
}

void func_63()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1225639.f_15 == Global_1225639 && iVar0 == Global_1225639)
		{
			Global_1055058[Global_1225639.f_15 /*116*/].f_15.f_8[0] = iVar2;
		}
		else
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
			{
				if (GANG::_0x81FB74C83C2ED69F(iVar2))
				{
					if (iVar1 >= 7)
					{
					}
					else
					{
						Global_1055058[Global_1225639.f_15 /*116*/].f_15.f_8[iVar1] = iVar2;
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		default:
			return 0;
			return 1;
		case 1:
			return 4;
		case 2:
			return 16;
		case 3:
			return 64;
		case 4:
			return 256;
		case 5:
			return 1024;
		case 6:
			return 4096;
		case 7:
			return 16384;
		case 8:
			return 65536;
		case 9:
			return 262144;
	}
}

var func_67(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = uParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	switch (uParam0->f_546.f_3)
	{
		case 0:
			if (CAM::IS_SCREEN_FADING_OUT())
			{
			}
			else
			{
				if (GANG::_0x0F99F6436528A089(Global_1225639.f_14) && Global_1225639.f_15 == Global_1225639)
				{
					uParam0->f_546 = 0;
				}
				else
				{
					if (!GANG::_0x0F99F6436528A089(Global_1225639.f_14))
					{
						uParam0->f_546 = 0;
					}
					else if (Global_1225639.f_15 >= 32 || Global_1225639.f_15 < 0)
					{
						uParam0->f_546 = 0;
					}
					if (uParam0->f_546 == -1)
					{
						if (Global_1225639.f_15 >= 32 || Global_1225639.f_15 < 0)
						{
							return false;
						}
						iVar0 = 0;
						while (iVar0 < 7)
						{
							if (Global_1055058[Global_1225639.f_15 /*116*/].f_15.f_8[iVar0] != PLAYER::PLAYER_ID())
							{
							}
							else
							{
								uParam0->f_546 = iVar0;
							}
							else
							{
								iVar0++;
							}
						}
					}
				}
				if (uParam0->f_546 == -1)
				{
					uParam0->f_546 = 0;
				}
				uParam0->f_546.f_3 = 1;
				Jump @759; //curOff = 271
				if (!STREAMING::_0xCF45DF50C7775F2A())
				{
					STREAMING::_0x513F8AA5BF2F17CF(uParam0->f_546.f_4[uParam0->f_546 /*7*/], 10f, 0);
					uParam0->f_546.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
				}
				else
				{
					if (STREAMING::_0x0909F71B5C070797())
					{
						STREAMING::_0x5A8B01199C3E79C3();
						uParam0->f_546.f_3 = 2;
					}
					if ((NETWORK::GET_CLOUD_TIME_AS_INT() - uParam0->f_546.f_1) > 10)
					{
						STREAMING::_0x5A8B01199C3E79C3();
						uParam0->f_546.f_3 = 2;
					}
				}
				Jump @759; //curOff = 371
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_1225639.f_8, uParam0->f_546.f_4[uParam0->f_546 /*7*/], uParam0->f_546.f_4[uParam0->f_546 /*7*/].f_3.f_2, true, false, true);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				uParam0->f_546.f_2 = NETWORK::GET_CLOUD_TIME_AS_INT();
				uParam0->f_546.f_3 = 3;
				Jump @759; //curOff = 460
				if (!GANG::_0x0F99F6436528A089(Global_1225639.f_14))
				{
					uParam0->f_546.f_3 = 4;
				}
				else
				{
					if (Global_1055058[Global_1225639 /*116*/].f_15.f_7 != 1)
					{
						Global_1055058[Global_1225639 /*116*/].f_15.f_7 = 1;
					}
					if ((NETWORK::GET_CLOUD_TIME_AS_INT() - uParam0->f_546.f_2) > 5)
					{
						uParam0->f_546.f_3 = 4;
					}
					else
					{
						if (Global_1225639.f_15 < 32 && Global_1225639.f_15 >= 0)
						{
							if (Global_1225639.f_15 == Global_1225639)
							{
								bVar3 = true;
								iVar1 = 0;
								while (iVar1 < 32)
								{
									if (iVar1 == Global_1225639)
									{
									}
									else
									{
										iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
										if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
										{
											if (GANG::_0x81FB74C83C2ED69F(iVar2))
											{
												if (Global_1055058[iVar1 /*116*/].f_15.f_7 != 1)
												{
													bVar3 = false;
												}
												else
												{
													iVar1++;
												}
												if (bVar3)
												{
													Global_1055058[Global_1225639 /*116*/].f_15.f_7 = 2;
													uParam0->f_546.f_3 = 4;
												}
												else
												{
													if (Global_1055058[Global_1225639.f_15 /*116*/].f_15.f_7 == 2)
													{
														uParam0->f_546.f_3 = 4;
													}
													Jump @759; //curOff = 727
													if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
													{
														CAM::DO_SCREEN_FADE_IN(2000);
													}
													return true;
												}
												return false;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

