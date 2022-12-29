#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	float fLocal_8 = 0f;
	float fLocal_9 = 0f;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = -1;
	var uLocal_27 = 0;
	char* sLocal_28 = NULL;
	int iLocal_29 = 0;
#endregion
void __EntryFunction__()
{
	struct<141> Var0;
	int iVar186;
	fLocal_8 = 1f;
	fLocal_9 = 1f;
	sLocal_15 = "mech_skin@BUCK_BUTCHER";
	sLocal_16 = "PBL_BASE";
	sLocal_17 = "PBL_DUMP";
	sLocal_18 = "PBL_DROP_IN";
	sLocal_28 = "beat_gang_camp_reminder";
	iLocal_29 = 23;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_6 = -1;
	Var0.f_19 = 40;
	Var0.f_140 = 40;
	iVar186 = __LIB_0__::func_2();
	Var0.f_2 = iVar186;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (__LIB_4__::func_841(255))
		{
			return;
		}
		switch (Var0)
		{
			case 0:
				if (__LIB_4__::func_721(&Var0))
				{
					func_5(&Var0);
				}
				if (func_6(&Var0, Var0.f_2))
				{
					MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
					func_7(&Var0, 1);
				}
				else
				{
					func_7(&Var0, 2);
				}
				break;
			case 1:
				if (__LIB_4__::func_721(&Var0))
				{
					func_5(&Var0);
				}
				if (!func_8(&Var0))
				{
					func_7(&Var0, 2);
				}
				else if (__LIB_0__::func_2() != 0)
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_14__::func_449();
					}
				}
				else
				{
					func_10();
				}
				break;
			case 2:
				if (__LIB_4__::func_721(&Var0))
				{
					func_5(&Var0);
				}
				func_2(&Var0);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_2(&Var0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0)
{
	if (func_11())
	{
		func_12();
	}
	func_13(uParam0);
	__LIB_14__::func_451();
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PLAYER_MENU")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(joaat("PLAYER_MENU"));
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5(int iParam0)
{
	iParam0->f_1 = 0;
}

bool func_6(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	if (func_16())
	{
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PLAYER_MENU")))
	{
		bVar1 = true;
	}
	if (Global_1898068.f_8 == 3)
	{
		iVar2 = 3;
	}
	else
	{
		iVar2 = 0;
	}
	sVar3 = func_17(Global_1898068.f_8);
	if (UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", sVar3) == 0 || bVar1)
	{
		bVar0 = true;
		Global_1898068.f_4 = 0;
		__LIB_7__::func_794(0);
	}
	if (bVar0)
	{
		UIFEED::_0xDD1232B332CBB9E7(6, 1, 0);
	}
	iParam0->f_181 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "player_menu_data");
	iParam0->f_182 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iParam0->f_181, "header_text", MISC::_CREATE_VAR_STRING(2, "SP_PLAYER_MENU_HEADER"));
	iParam0->f_184 = DATABINDING::_DATABINDING_ADD_DATA_INT(iParam0->f_181, "player_menu_root_filter_index", iVar2);
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uLocal_0))
	{
		uLocal_0 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedToReplay", 0);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_183))
	{
		iParam0->f_183 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iParam0->f_183, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uLocal_0, false);
	TXD::_REQUEST_STREAMED_TXD(joaat("MINIGAMES_HUD"), false);
	TXD::_REQUEST_STREAMED_TXD(1997120069, false);
	TXD::_REQUEST_STREAMED_TXD(joaat("HUD_TOASTS"), false);
	return bVar0;
}

void func_7(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		func_19(uParam0);
	}
}

bool func_8(var uParam0)
{
	__LIB_17__::func_394();
	func_21();
	return func_22(uParam0);
}

void func_10()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PHONE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RADIAL_MENU_SLOT_NAV_NEXT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RADIAL_MENU_SLOT_NAV_PREV"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
}

bool func_11()
{
	return Global_1935689.f_3;
}

void func_12()
{
	__LIB_0__::func_703(1, 20);
	func_24();
}

void func_13(var uParam0)
{
	func_25();
	__LIB_16__::func_184(0);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
	NETWORK::_0x49CF17A564918E8D();
}

bool func_16()
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return Global_1058888.f_2;
}

char* func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sp";
		case 3:
			return "sp_notifications";
		case 5:
			return "sp_missions";
		case 4:
			return "sp_post_office";
		default:
			break;
	}
	return "sp";
	return "invalid";
}

void func_19(var uParam0)
{
	uParam0->f_1 = 1;
}

void func_21()
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	int iVar9;
	char* sVar10;
	int iVar11;
	int iVar12;
	iVar0 = 0;
	while (iVar0 <= (Global_1935689.f_1225.f_1207 - 1))
	{
		iVar9 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1935689.f_1225.f_5[iVar0 /*30*/].f_18);
		if (iVar9 != 1)
		{
		}
		else
		{
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1935689.f_1225.f_5[iVar0 /*30*/].f_19);
			if (!NETWORK::_0xD1FFB246F4E088AC(iVar1))
			{
			}
			else
			{
				NETWORK::_0x16EFB123C4451032(NETWORK::_0x27B1AE4D8C652F08(iVar1), &Var2);
				__LIB_0__::func_11(&Var2);
				if (!__LIB_17__::func_392(Var2))
				{
				}
				else
				{
					sVar10 = NETWORK::_0xB5C4B18B12A2AF23(&Var2, 0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar10))
					{
						iVar11 = MISC::GET_HASH_KEY(sVar10);
						iVar12 = iVar11;
					}
					else
					{
						iVar11 = 0;
						iVar12 = 0;
					}
					if (DATABINDING::_0x81D7183E7A8ECA72(Global_1935689.f_1225.f_5[iVar0 /*30*/].f_15) != iVar11)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_1225.f_5[iVar0 /*30*/].f_15, iVar11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_1225.f_5[iVar0 /*30*/].f_16, iVar12);
					}
				}
			}
		}
		iVar0++;
	}
}

var func_22(var uParam0)
{
	bool bVar0;
	var uVar1;
	func_31();
	func_32();
	if (!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PLAYER_MENU")))
	{
		__LIB_16__::func_184(0);
	}
	else
	{
		switch (func_33(&(uParam0->f_185)))
		{
			case 2:
				if (__LIB_0__::func_6(uParam0->f_185))
				{
					Global_43890 = uParam0->f_185;
					__LIB_16__::func_184(0);
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				break;
			case 3:
				if (__LIB_0__::func_6(uParam0->f_185))
				{
					if (__LIB_0__::func_700(uParam0->f_185) == 1)
					{
						uVar1 = __LIB_0__::func_631(__LIB_0__::func_909(uParam0->f_185));
						bVar0 = MISSIONDATA::MISSIONDATA_GET_RATING(MISC::GET_HASH_KEY(&uVar1)) >= 2;
					}
					else if (__LIB_0__::func_700(uParam0->f_185) == 8)
					{
						if (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_957(uParam0->f_185) /*49*/].f_12, 1) || __LIB_0__::func_1(Global_1347702[__LIB_0__::func_957(uParam0->f_185) /*49*/].f_12, 33554432))
						{
							uVar1 = __LIB_0__::func_632(__LIB_0__::func_957(uParam0->f_185));
							bVar0 = MISSIONDATA::MISSIONDATA_GET_RATING(MISC::GET_HASH_KEY(&uVar1)) >= 2;
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						bVar0 = false;
					}
				}
				else
				{
					bVar0 = false;
				}
				if (__LIB_1__::func_195())
				{
					bVar0 = false;
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uLocal_0, bVar0);
				break;
		}
	}
	if (CAM::_0x139EFB0A71DD9011())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_183, false);
	}
	CAM::_0x8910C24B7E0046EC();
	return Global_1898068;
}

void func_24()
{
	Global_1935689.f_3 = 0;
}

void func_25()
{
	if (__LIB_0__::func_2() == -1)
	{
		return;
	}
	switch (Global_1935689.f_2439)
	{
		case 14:
		case 15:
		case 16:
			MAP::DISPLAY_RADAR(true);
			break;
	}
}

void func_31()
{
	int iVar0;
	int iVar1;
	struct<30> Var2;
	iVar1 = Global_1898068.f_6;
	if (Global_1935689.f_1225.f_1207 <= 0)
	{
		return;
	}
	if (Global_1935689.f_1225.f_1210 >= Global_1935689.f_1225.f_1207)
	{
		Global_1935689.f_1225.f_1210 = 0;
	}
	Var2 = { Global_1935689.f_1225.f_5[Global_1935689.f_1225.f_1210 /*30*/] };
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT(Var2.f_17);
	if (iVar0 < iVar1)
	{
		func_44(Var2);
	}
	Global_1935689.f_1225.f_1210++;
}

void func_32()
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	if (!__LIB_7__::func_729())
	{
		return;
	}
	iVar4 = joaat("PLAYER_MENU");
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &Var0))
		{
			iVar5 = Var0.f_2;
			switch (Var0)
			{
				case -1340543710:
					func_46(Var0, Var0.f_2);
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -1740156697:
					func_47(&Var0);
					switch (iVar5)
					{
						case 290710310:
							Global_1935689.f_1225 = Var0.f_3;
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_1225.f_1, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Var0.f_3, __LIB_10__::func_770(70)));
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -1203660660:
					switch (iVar5)
					{
						case 290710310:
							func_49(Var0.f_3);
							break;
						case -2111588953:
							func_50(Global_1935689.f_1225);
							break;
						case 110545328:
							func_51(Global_1935689.f_1225);
							break;
						case -1883210336:
							func_52(Var0.f_3);
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case 922460030:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -2075827635:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				default:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
			}
		}
	}
}

int func_33(var uParam0)
{
	vector3 vVar0;
	int iVar4;
	int iVar5;
	iVar4 = -899457438;
	iVar5 = 0;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.z == 2338895)
					{
						if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PLAYER_MENU")))
						{
							UIAPPS::_CLOSE_APP_BY_HASH(joaat("PLAYER_MENU"));
						}
						iVar5 = 1;
					}
					break;
				case -1740156697:
					if (iVar5 != 1)
					{
						*uParam0 = __LIB_5__::func_121(vVar0.z);
						iVar5 = 3;
					}
					break;
				case 922460030:
					iVar5 = 2;
					break;
				default:
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
		}
	}
	return iVar5;
}

void func_44(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1935689.f_1225.f_3, uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_1225.f_1, false);
	__LIB_17__::func_398(uParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0);
	__LIB_16__::func_304((Global_1935689.f_1225.f_1207 - 1));
}

void func_46(struct<4> Param0, int iParam4)
{
	switch (iParam4)
	{
		case 778915895:
			if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Param0.f_3, __LIB_10__::func_770(78)))
			{
				return;
			}
			else if (!__LIB_16__::func_370(3))
			{
				func_49(Param0.f_3);
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Param0.f_3, __LIB_10__::func_770(78), 1);
			__LIB_17__::func_398(Param0.f_3);
			break;
		case 1511356879:
			break;
		default:
			break;
	}
}

void func_47(var uParam0)
{
	int iVar0;
	__LIB_0__::func_11();
	iVar0 = uParam0->f_3;
	if (iVar0 != 0)
	{
		Global_1935689.f_1225.f_1211 = uParam0->f_3;
	}
	Global_1935689.f_1225.f_1212 = uParam0->f_2;
	Global_1935689.f_1225.f_1213 = uParam0->f_1;
}

void func_49(var uParam0)
{
	int iVar0;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0))
	{
		return;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, __LIB_10__::func_770(79));
	switch (iVar0)
	{
		case 1:
			__LIB_19__::func_380(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, __LIB_10__::func_770(50)), 1);
			break;
	}
	func_44(uParam0);
}

void func_50(var uParam0)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, __LIB_10__::func_770(79));
	func_44(uParam0);
}

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, __LIB_10__::func_770(71));
	switch (iVar0)
	{
		case 2:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, __LIB_10__::func_770(50));
			uVar2 = NETWORK::_0x27B1AE4D8C652F08(iVar1);
			NETWORK::_0x16EFB123C4451032(uVar2, &uVar3);
			NETWORK::NETWORK_SHOW_PROFILE_UI(&uVar3);
			break;
	}
}

void func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, "not_script_data_int_1");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, "not_unique_id");
	if (__LIB_0__::func_30(Global_40.f_9910[iVar0 /*6*/]) && __LIB_0__::func_878(Global_40.f_9910[iVar0 /*6*/], -1))
	{
		__LIB_12__::func_507(Global_40.f_9910[iVar0 /*6*/], 0, Global_1901433.f_4504, &iVar2, &iVar3);
		iVar4 = iVar2;
		if (iVar4 != 0)
		{
			Var5 = { __LIB_1__::func_615(iVar4, 0, 0) };
			if (__LIB_1__::func_119(iVar4, &Var5, 0, 0) < iVar3)
			{
				__LIB_0__::func_565(MISC::_CREATE_VAR_STRING(2, "SHOP_MAILBOX_CANT_CARRY", iVar3), 7500, 0, 0, 0, 1);
			}
			else
			{
				__LIB_12__::func_561(Global_40.f_9910[iVar0 /*6*/], 0);
				func_72(Global_40.f_9910[iVar0 /*6*/], Global_1901433.f_4504);
				AUDIO::PLAY_SOUND_FRONTEND("MAIL", "HUD_MAIL_SOUNDSET", true, 0);
				if (!__LIB_0__::func_296(0, 0, 1))
				{
					__LIB_0__::func_703(0, 17);
				}
				func_74(iVar1);
				Global_1901433.f_4506 = 1;
			}
		}
	}
}

void func_72(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_0__::func_30(iParam0))
	{
		return;
	}
	iVar0 = __LIB_12__::func_506(iParam0, uParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		__LIB_12__::func_507(iParam0, iVar1, uParam1, &iVar2, &iVar3);
		func_108(iVar2, iVar3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		iVar1++;
	}
}

void func_74(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_110(iParam0);
}

int func_108(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (!__LIB_3__::func_917(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (__LIB_1__::func_614(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = __LIB_1__::func_756(iVar6) + 1;
			__LIB_1__::func_757(iVar5);
			if (__LIB_1__::func_154(38))
			{
				__LIB_1__::func_240(483, 0);
			}
			else
			{
				__LIB_1__::func_240(482, 0);
			}
			if (iVar7 == __LIB_0__::func_353(iVar6))
			{
				func_108(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_450(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_1__::func_450(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if ((!__LIB_0__::func_192(iParam0, 866047851) && !__LIB_0__::func_192(iParam0, -1979000645)) && !__LIB_0__::func_192(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (__LIB_0__::func_774(iParam0, 8388608) && !__LIB_0__::func_293(28))
	{
		__LIB_7__::func_501(28);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_192(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (__LIB_0__::func_357(iParam0) == -1447088266)
			{
				iVar1 = __LIB_0__::func_775(__LIB_0__::func_914(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iParam0);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
		{
			if (!__LIB_3__::func_915(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_3__::func_708(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			__LIB_1__::func_833(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, 2000026003))
		{
			__LIB_1__::func_632(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -103750053))
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (__LIB_0__::func_192(iParam0, -121341956) && !__LIB_0__::func_192(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					__LIB_1__::func_240(498, 0);
				}
			}
			if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
			{
				__LIB_1__::func_796(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -136654233))
		{
			if (__LIB_0__::func_192(iParam0, -1021472396))
			{
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1466706512) && __LIB_0__::func_192(iParam0, 1147021565))
		{
			__LIB_1__::func_240(484, 0);
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565) && __LIB_0__::func_192(iParam0, -524514947))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 554195525))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 589988438))
		{
			if (__LIB_1__::func_709())
			{
				__LIB_1__::func_797(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			func_163(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_1__::func_844(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_1__::func_845(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_846(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (__LIB_0__::func_192(iParam0, 1841149704))
		{
			__LIB_0__::func_359();
		}
		else if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_1__::func_847(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_1__::func_858(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return 0;
			}
			__LIB_1__::func_824(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_108(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_108(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_108(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_108(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_108(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_108(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_601(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1399091007))
		{
			__LIB_0__::func_917(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_108(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				__LIB_7__::func_501(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				__LIB_1__::func_240(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				__LIB_0__::func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				__LIB_0__::func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				__LIB_0__::func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				__LIB_1__::func_244();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				__LIB_1__::func_240(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				__LIB_1__::func_240(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_108(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_108(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				__LIB_1__::func_240(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				__LIB_1__::func_240(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_3__::func_427(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_7__::func_685(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_9__::func_8(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (__LIB_0__::func_708(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_108(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			__LIB_1__::func_451(iVar2, 0);
		}
	}
	Var35 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	__LIB_1__::func_602(iParam0);
	if (fParam6 > 0f)
	{
		if (__LIB_0__::func_192(iParam0, -839724752))
		{
			__LIB_1__::func_157(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_3__::func_868(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_110(int iParam0)
{
	DATABINDING::_0x6318FB3BE37E11B3(Global_1901433.f_4501, iParam0);
	func_204(iParam0);
	Global_1901433.f_4503 = (Global_1901433.f_4503 - 1);
}

void func_163(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			__LIB_1__::func_832(39, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(39, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_434(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			__LIB_1__::func_832(41, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(41, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_435(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			__LIB_1__::func_832(49, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(49, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_436(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_275(1), 0, -1, 0);
			func_276(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_275(2), 0, -1, 0);
			func_276(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_275(4), 0, -1, 0);
			func_276(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_275(8), 0, -1, 0);
			func_276(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_275(16), 0, -1, 0);
			func_276(16);
			break;
	}
}

void func_204(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1901433[iParam0 /*30*/].f_26, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1901433[iParam0 /*30*/].f_17, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1901433[iParam0 /*30*/].f_28, false);
}

char* func_275(int iParam0)
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
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			Jump @197; //curOff = 163
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			iVar1 = __LIB_1__::func_764(iVar9);
			iVar2 = __LIB_1__::func_764(iVar10);
			iVar3 = __LIB_1__::func_764(iVar11);
			iVar5 = __LIB_0__::func_439(iVar9);
			iVar6 = __LIB_0__::func_439(iVar10);
			iVar7 = __LIB_0__::func_439(iVar11);
			if (iParam0 != 2)
			{
				iVar4 = __LIB_1__::func_764(iVar12);
				iVar8 = __LIB_0__::func_439(iVar12);
			}
			if (iVar1 >= iVar5)
			{
				iVar0 = (iVar0 + iVar5);
			}
			else
			{
				iVar0 = (iVar0 + iVar1);
			}
			if (iVar2 >= iVar6)
			{
				iVar0 = (iVar0 + iVar6);
			}
			else
			{
				iVar0 = (iVar0 + iVar2);
			}
			if (iVar3 >= iVar7)
			{
				iVar0 = (iVar0 + iVar7);
			}
			else
			{
				iVar0 = (iVar0 + iVar3);
			}
			if (iParam0 != 2)
			{
				if (iVar4 >= iVar8)
				{
					iVar0 = (iVar0 + iVar8);
				}
				else
				{
					iVar0 = (iVar0 + iVar4);
				}
			}
			return iVar0;
		}
void func_276(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

