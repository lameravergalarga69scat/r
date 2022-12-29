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
	int iScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	var uVar0;
	struct<4> Var3;
	var uVar7;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_15 = "mech_skin@BUCK_BUTCHER";
	sLocal_16 = "PBL_BASE";
	sLocal_17 = "PBL_DUMP";
	sLocal_18 = "PBL_DROP_IN";
	sLocal_28 = "beat_gang_camp_reminder";
	iLocal_29 = 23;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_1(&uVar7, HUD::_0x0501D52D24EA8934(1), 1);
	func_2();
	func_3(&uVar0);
	func_4();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_5(&uVar0);
	}
	__LIB_14__::func_777(1);
	func_8(&uVar0, 2185);
	while (true)
	{
		if (((PED::IS_PED_FALLING(Global_35) || PED::_IS_PED_FALLING_2(Global_35)) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true)) || __LIB_1__::func_927())
		{
			__LIB_3__::func_739(0);
		}
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(0);
		if (Global_1935689.f_4)
		{
			func_11();
			func_12();
			func_13(Global_1935689.f_10189);
			if (Global_1935689.f_15 != 0)
			{
				func_14(Global_1935689.f_15);
			}
			func_4();
			Global_1935689.f_4 = 0;
			Global_1935689.f_5 = 0;
			Global_1935689.f_15 = 0;
		}
		if (__LIB_14__::func_935())
		{
			func_16(Global_1935689.f_10195, &(Var3.f_3), &uVar0);
			func_4();
			__LIB_12__::func_158(0);
			__LIB_12__::func_159(0);
			Global_1935689.f_7 = 0;
		}
		while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iScriptParam_0))
		{
			if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iScriptParam_0, &Var3))
			{
				Global_1935689.f_7 = 0;
				switch (Var3)
				{
					case -1740156697:
						Global_1935689.f_10195 = Var3.f_1;
						switch (Var3.f_2)
						{
							case -1287062382:
								func_19(Var3.f_1, &(Var3.f_3));
								break;
							case joaat("USABLE_ITEM"):
							case 1086195311:
								ATTRIBUTE::_0xD962F8579D702DB5();
								if (!func_20())
								{
									func_16(Var3.f_1, &(Var3.f_3), &uVar0);
								}
								break;
							case -1715238242:
								ATTRIBUTE::_0xD962F8579D702DB5();
								func_21(Var3.f_1, &(Var3.f_3));
								break;
						}
						__LIB_14__::func_777(2);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -722926211:
					case 703281244:
						func_22();
						func_4();
						ATTRIBUTE::_0xD962F8579D702DB5();
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -1203660660:
						switch (Var3.f_2)
						{
							case joaat("USABLE_ITEM"):
							case -594808149:
							case 1086195311:
								if (__LIB_6__::func_126() || __LIB_7__::func_775())
								{
									if (func_25(Global_1935689.f_10190, 0, 0, 0, 1, 0, 0))
									{
										__LIB_3__::func_739(0);
									}
									__LIB_14__::func_777(4);
								}
								else if (__LIB_14__::func_851())
								{
									__LIB_14__::func_777(4);
								}
								else if (!__LIB_4__::func_807(0))
								{
									func_28();
								}
								else
								{
									__LIB_14__::func_777(4);
								}
								break;
							case joaat("DROP_ITEM"):
								func_29(Global_1935689.f_10190, 1);
								break;
							case 301804921:
								if (__LIB_4__::func_807(0))
								{
									__LIB_14__::func_777(32);
								}
								else
								{
									func_30(Global_1935689.f_10190);
								}
								break;
							case 1329361007:
								__LIB_14__::func_777(64);
								break;
						}
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case 922460030:
						__LIB_14__::func_777(16);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -2075827635:
						__LIB_14__::func_777(8);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					default:
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
				}
			}
		}
		BUILTIN::WAIT(0);
	}
	func_5(&uVar0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	__LIB_19__::func_345(iParam1);
	bVar0 = __LIB_7__::func_589(1);
	if (func_34(uParam0, iParam1, 1, 8373) != bVar0)
	{
		if (!Global_1935496.f_70.f_1)
		{
			Global_1935496.f_70.f_1 = 1;
		}
	}
	bVar0 = __LIB_7__::func_589(2);
	if (func_34(uParam0, iParam1, 2, 8500) != bVar0)
	{
		if (!Global_1935496.f_70.f_1)
		{
			Global_1935496.f_70.f_1 = 1;
		}
	}
	bVar0 = __LIB_7__::func_589(8192);
	if (func_34(uParam0, iParam1, 8192, 8513) != bVar0)
	{
		if (!Global_1935496.f_70.f_1)
		{
			Global_1935496.f_70.f_1 = 1;
		}
	}
	bVar0 = (__LIB_7__::func_589(4) || __LIB_7__::func_589(8));
	if (!__LIB_6__::func_56())
	{
		func_38(4);
		func_38(8);
		bVar0 = false;
	}
	else
	{
		bVar1 = false;
		bVar2 = false;
		if (__LIB_1__::func_18(81053684) || __LIB_16__::func_206(4))
		{
			func_38(4);
		}
		else
		{
			bVar1 = true;
		}
		if (__LIB_1__::func_18(-525676072) || __LIB_16__::func_206(8))
		{
			func_38(8);
		}
		else
		{
			bVar2 = true;
		}
		if (bVar1 || bVar2)
		{
			if (__LIB_19__::func_509(uParam0, iParam1, 0, __LIB_16__::func_368()))
			{
				if (!bVar0)
				{
					Global_1935496.f_70.f_1 = 1;
				}
				if (bVar1)
				{
					__LIB_16__::func_369(4);
				}
				if (bVar2)
				{
					__LIB_16__::func_369(8);
				}
			}
			else
			{
				func_38(4);
				func_38(8);
				if (bVar0)
				{
					Global_1935496.f_70.f_1 = 1;
				}
			}
		}
	}
	bVar0 = __LIB_7__::func_589(16);
	if (func_34(uParam0, iParam1, 16, 9853) != bVar0)
	{
		if (!Global_1935496.f_70.f_1)
		{
			Global_1935496.f_70.f_1 = 1;
		}
	}
	bVar0 = __LIB_7__::func_589(256);
	if (func_34(uParam0, iParam1, 256, 9866) != bVar0)
	{
		if (!Global_1935496.f_70.f_1)
		{
			Global_1935496.f_70.f_1 = 1;
		}
	}
	bVar0 = __LIB_7__::func_589(512);
	if (func_34(uParam0, iParam1, 512, 9878) != bVar0)
	{
		if (!Global_1935496.f_70.f_1)
		{
			Global_1935496.f_70.f_1 = 1;
		}
	}
	bVar0 = __LIB_7__::func_589(1024);
	if (func_34(uParam0, iParam1, 1024, 9890) != bVar0)
	{
		if (!Global_1935496.f_70.f_1)
		{
			Global_1935496.f_70.f_1 = 1;
		}
	}
	if (((((__LIB_4__::func_365() || __LIB_8__::func_954()) || __LIB_14__::func_450()) || __LIB_14__::func_83()) || __LIB_3__::func_63()) || bParam2)
	{
		bVar0 = __LIB_7__::func_589(16384);
		if (func_34(uParam0, iParam1, 16384, 9984) != bVar0)
		{
			if (!Global_1935496.f_70.f_1)
			{
				Global_1935496.f_70.f_1 = 1;
			}
		}
		bVar0 = __LIB_7__::func_589(64);
		if (func_34(uParam0, iParam1, 64, 9997) != bVar0)
		{
			if (!Global_1935496.f_70.f_1)
			{
				Global_1935496.f_70.f_1 = 1;
			}
		}
		bVar0 = __LIB_7__::func_589(32);
		if (func_34(uParam0, iParam1, 32, 10010) != bVar0)
		{
			if (!Global_1935496.f_70.f_1)
			{
				Global_1935496.f_70.f_1 = 1;
			}
		}
		bVar0 = __LIB_7__::func_589(128);
		if (func_34(uParam0, iParam1, 128, 10023) != bVar0)
		{
			if (!Global_1935496.f_70.f_1)
			{
				Global_1935496.f_70.f_1 = 1;
			}
		}
		bVar0 = __LIB_7__::func_589(2048);
		if (func_34(uParam0, iParam1, 2048, 10036) != bVar0)
		{
			if (!Global_1935496.f_70.f_1)
			{
				Global_1935496.f_70.f_1 = 1;
			}
		}
		bVar0 = __LIB_7__::func_589(4096);
		if (func_34(uParam0, iParam1, 4096, 10049) != bVar0)
		{
			if (!Global_1935496.f_70.f_1)
			{
				Global_1935496.f_70.f_1 = 1;
			}
		}
	}
	__LIB_5__::func_632();
}

void func_2()
{
	if (__LIB_3__::func_63() || (((__LIB_4__::func_365() || __LIB_8__::func_954()) || __LIB_14__::func_450()) || __LIB_14__::func_83()))
	{
		Global_1935496.f_70 = 1;
		func_60(0);
		if (Global_1935496.f_70.f_1)
		{
			if (!__LIB_4__::func_807(0))
			{
				if (!Global_1935689.f_4)
				{
					Global_1935689.f_4 = 1;
					Global_1935689.f_5 = 1;
				}
			}
		}
		Global_1935496.f_70.f_1 = 0;
	}
	else if (Global_1935496.f_70)
	{
		func_61();
		Global_1935496.f_70 = 0;
		Global_1935496.f_70.f_1 = 0;
	}
}

int func_3(var uParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		func_63();
	}
	Global_1911866[0 /*9*/] = 0;
	func_64(uParam0);
	func_65();
	return 1;
}

void func_4()
{
	if (func_20())
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
		INVENTORY::_0x75CFAC49301E134F(Global_1935689.f_10211, 0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_10204, __LIB_14__::func_937(Global_1935689.f_10189));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_10205, func_67(Global_1935689.f_10189));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10224, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10220, false);
		if (__LIB_4__::func_807(0) || __LIB_15__::func_42())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10206, "");
		}
		func_69(Global_1935689.f_10189);
	}
}

void func_5(var uParam0)
{
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1935689.f_7 = 0;
	Global_1935689.f_19 = 0;
	Global_1935689.f_14 = -1;
	Global_1935689.f_15 = 0;
	Global_1935689.f_1224 = 0;
	__LIB_12__::func_158(0);
	__LIB_12__::func_206(822208792);
	__LIB_13__::func_600(0);
	__LIB_14__::func_78(0);
	func_73(uParam0);
	if (!TASK::_0x038B1F1674F0E242(Global_35))
	{
		__LIB_7__::func_606(0);
	}
	__LIB_13__::func_603(1);
	__LIB_1__::func_993(&(Global_1935689.f_10186), 1);
	__LIB_1__::func_993(&(Global_1935689.f_10186), 2);
	__LIB_1__::func_993(&(Global_1935689.f_10186), 4);
	func_61();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_7()
{
	int iVar0;
	float fVar3;
	func_77(Global_1935689.f_10190, &iVar0);
	switch (iVar0)
	{
		case 0:
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_10206, 0);
			__LIB_14__::func_776(-1520731333 /* GXTEntry: "Donate For Crafting" */);
			break;
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_10206, 0);
			__LIB_14__::func_776(1698037258 /* GXTEntry: "Donate For Provisions" */);
			break;
		case 2:
			fVar3 = (BUILTIN::TO_FLOAT(func_79(Global_1935689.f_10190, 0)) / 100f);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10206, MISC::_CREATE_VAR_STRING(10, "SHOP_ITEM_VALUE", __LIB_1__::func_925(MISC::_0x2B6846401D68E563(fVar3, 2), joaat("COLOR_PURE_WHITE"))));
			__LIB_14__::func_776(-879749798 /* GXTEntry: "Donate For Funds" */);
			break;
	}
	return 1;
}

void func_8(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	uParam0->f_1 = 1;
}

void func_11()
{
	int iVar0;
	var uVar1;
	bool bVar2;
	Global_1935689.f_10194 = 0;
	if (Global_1935689.f_10188 != -1)
	{
		iVar0 = Global_1935689.f_10188;
		func_83(&(Global_1935689.f_10181[func_82(Global_1935689.f_10189) /*2*/]), iVar0);
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_10200, Global_1935689.f_10194);
	}
	uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("Satchel");
	bVar2 = Global_1935689.f_10194 <= false;
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar1, "FolderEmpty", bVar2);
}

bool func_12()
{
	if ((__LIB_15__::func_695() || __LIB_0__::func_394(Global_35, __LIB_0__::func_398(7), 1)) || (!(func_87(7) || __LIB_11__::func_554(7)) && __LIB_4__::func_807(0)))
	{
		return (func_89(0, -1591664384) && func_89(1, 724026534));
	}
	return func_89(0, -1591664384);
}

void func_13(int iParam0)
{
	struct<2> Var0;
	struct<10> Var2;
	Var0 = { Global_1935689.f_10181[Global_1935689.f_10187 /*2*/] };
	Var2.f_9 = -1591664384;
	if (!__LIB_14__::func_935() && (Global_1935689.f_10196 || !Global_1935689.f_5))
	{
		__LIB_14__::func_936(0);
	}
	Global_1935689.f_10193 = 0;
	Global_1935689.f_19.f_203 = 0;
	if (Global_1935689.f_10196)
	{
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_10199, Global_1935689.f_10193);
		Global_1935689.f_10196 = 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_10208, __LIB_14__::func_937(iParam0));
	if (!__LIB_4__::func_807(0) && !__LIB_15__::func_42())
	{
		func_91(&Var0, &Var2, iParam0);
	}
	func_92();
	if (Global_1935689.f_10189 == -283002878)
	{
		func_93();
	}
	else
	{
		func_94(&Var0, &Var2, iParam0);
		if ((Global_1935689.f_10189 == -182626652 && ((Global_1914319.f_16855 == 10 || Global_1914319.f_16855 == 19) || Global_1914319.f_16855 == 18)) || (Global_1935689.f_10189 == -693134279 && Global_1914319.f_16855 == 2))
		{
			if (__LIB_15__::func_695())
			{
				Var0 = { Global_1935689.f_10181[1 /*2*/] };
				func_94(&Var0, &Var2, iParam0);
			}
		}
		func_95();
		func_93();
		func_96();
	}
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_10199, Global_1935689.f_10193);
	__LIB_14__::func_938(0);
}

void func_14(int iParam0)
{
	var uVar0;
	uVar0 = iParam0;
	Global_1935689.f_10194 = 0;
	func_83(&(Global_1935689.f_10181[func_82(Global_1935689.f_10189) /*2*/]), iParam0);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_10200, Global_1935689.f_10194);
	__LIB_14__::func_938(Global_1935689.f_14);
	Global_1935689.f_10188 = uVar0;
}

void func_16(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1;
	func_98();
	if (__LIB_14__::func_935())
	{
		__LIB_12__::func_158(0);
		if (Global_1935689.f_7)
		{
			uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_10200, Global_1935689.f_10195);
		}
		else
		{
			uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_10199, Global_1935689.f_10195);
		}
		iVar0 = func_99(uVar1);
	}
	else
	{
		iVar0 = func_99(*uParam1);
	}
	func_100(iVar0, uParam1, uParam2);
	__LIB_7__::func_617(0, iVar0);
	func_98();
	__LIB_14__::func_938(iParam0);
}

void func_19(int iParam0, var uParam1)
{
	if (iParam0 != Global_1935689.f_10187)
	{
		func_102(iParam0, uParam1);
	}
}

bool func_20()
{
	return Global_1935689.f_19.f_203 <= 0;
}

void func_21(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	Global_1935689.f_14 = uParam0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "label");
	func_103(iVar0, uParam1);
	iVar1 = iVar0;
	func_14(iVar1);
}

void func_22()
{
	var uVar0;
	uVar0 = Global_1935689.f_10167;
	func_104(uVar0);
}

bool func_25(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	int iVar27;
	int iVar28;
	var uVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	if (__LIB_7__::func_775())
	{
		Global_1935689.f_10191 = iParam0;
		__LIB_1__::func_698(iParam0, 1, -142743235, 0, 0);
		return false;
	}
	if (__LIB_6__::func_126())
	{
		HUD::_0xBFFF81E12A745A5F();
		__LIB_5__::func_905(iParam0, 0);
		__LIB_1__::func_698(__LIB_7__::func_776(), 1, -142743235, 0, 0);
		return false;
	}
	if (!func_109(iParam0, bParam4))
	{
		return false;
	}
	if (__LIB_19__::func_346(iParam0))
	{
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return false;
	}
	iVar31 = 0;
	bVar32 = true;
	iVar33 = 1;
	bVar34 = true;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (__LIB_0__::func_192(iParam0, -2081717885))
	{
		func_112(iParam0, Var10, Var0, uVar29, bVar32, iVar33);
	}
	else if (__LIB_0__::func_192(iParam0, -1909684001))
	{
		__LIB_9__::func_181(iParam0, Var10, Var0, bVar32, iVar33);
	}
	else if (__LIB_0__::func_192(iParam0, 587975446))
	{
		__LIB_7__::func_777(iParam0, Var10);
	}
	else if (__LIB_0__::func_192(iParam0, 566155764))
	{
		if (!__LIB_0__::func_0(iParam0))
		{
			return false;
		}
	}
	if (func_116(iParam0, bParam5, bParam6))
	{
		Global_1911772 = iParam0;
		Global_1911913 = MISC::GET_GAME_TIMER();
		return true;
	}
	if (__LIB_0__::func_192(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		__LIB_4__::func_709(Var10, 1);
		iVar33 = 0;
		bVar32 = false;
	}
	else if ((__LIB_0__::func_192(iParam0, -1472964441) || __LIB_0__::func_192(iParam0, -228153877)) || __LIB_0__::func_192(iParam0, 566155764))
	{
	}
	else if (__LIB_0__::func_192(iParam0, 1919582297))
	{
		if (((__LIB_1__::func_652() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			return false;
		}
		switch (iParam0)
		{
			case joaat("CONSUMABLE_HERBIVORE_BAIT"):
			case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case joaat("CONSUMABLE_PREDATOR_BAIT"):
			case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = iParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		__LIB_4__::func_709(Var10, 0);
		bVar32 = false;
	}
	else if (__LIB_0__::func_356(iParam0) == joaat("EMOTE"))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = __LIB_7__::func_778(Global_1058888.f_49121.f_4.f_31);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		__LIB_4__::func_709(Var10, 0);
		iVar33 = 1;
	}
	else if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if (__LIB_0__::func_357(iParam0) == -999503751)
		{
			if (__LIB_0__::func_2() != -1)
			{
				return iVar33;
			}
			if (!func_122(iParam0))
			{
				__LIB_0__::func_45("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			bVar35 = __LIB_9__::func_992(7, iParam0);
			bVar36 = __LIB_9__::func_992(1, iParam0);
			if (bVar36 && !bVar35)
			{
				__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!__LIB_7__::func_830(7))
			{
				__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!bVar35)
			{
				if (__LIB_0__::func_394(Global_35, __LIB_0__::func_398(7), 0))
				{
					__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
				}
				else
				{
					__LIB_0__::func_45("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
				}
				return iVar33;
			}
			iVar30 = __LIB_0__::func_449(iParam0);
			if (iVar30 == -1)
			{
				__LIB_1__::func_452(20, iParam0, 8, 0, 0);
			}
			else
			{
				__LIB_1__::func_452(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (__LIB_0__::func_357(iParam0))
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_128(iParam0, 0);
					return iVar33;
				case -2061583405:
					__LIB_9__::func_997(iParam0);
					return true;
				case -1719060085:
					if (iParam0 == Global_1946804.f_1497.f_1[23 /*3*/])
					{
						__LIB_1__::func_775(Global_35, joaat("CLOTHING_ITEM_GLOVES_NONE"), 0, -358215195, 1, 1, 1, 0, 1, 0);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipGlovesFidget", true, 15);
						__LIB_1__::func_704(iParam0, 0);
						return true;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipGlovesFidget", true, 15);
						__LIB_1__::func_704(iParam0, 1);
					}
					break;
			}
			__LIB_1__::func_775(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 0);
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("CUSTOM_SATCHEL"):
				__LIB_3__::func_739(1);
				break;
			case joaat("KIT_WARDROBE"):
				if (__LIB_0__::func_2() != -1)
				{
				}
				else if (!func_122(iParam0))
				{
					__LIB_0__::func_45("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar35 = __LIB_9__::func_992(7, iParam0);
					bVar36 = __LIB_9__::func_992(1, iParam0);
					if (bVar36 && !bVar35)
					{
						if (MAP::DOES_BLIP_EXIST(Global_36559))
						{
							MAP::REMOVE_BLIP(&Global_36559);
						}
						Global_36559 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::_BLIP_SET_MODIFIER(Global_36559, 673950256);
						__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_36559), 10000, 0, 0, 0, 1);
					}
					else if (!__LIB_7__::func_830(7))
					{
						__LIB_0__::func_45("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar35)
					{
						if (__LIB_0__::func_394(Global_35, __LIB_0__::func_398(7), 0))
						{
							__LIB_0__::func_45("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_36559))
							{
								MAP::REMOVE_BLIP(&Global_36559);
							}
							Global_36559 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
							MAP::_BLIP_SET_MODIFIER(Global_36559, 673950256);
							__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(0, -482898802, Global_36559), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = joaat("PLAYER_WARDROBE");
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							__LIB_4__::func_709(Var10, 0);
						}
						Jump @2534; //curOff = 1629
						__LIB_9__::func_182();
						Jump @2534; //curOff = 1636
						if (!__LIB_0__::func_27(Global_1392040.f_1, 1) || __LIB_0__::func_27(Global_1392040.f_1, 512))
						{
							if (__LIB_0__::func_2() == -1)
							{
								if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("player_camp")) > 3)
								{
								}
								else
								{
									StringCopy(&(Var10.f_10), "player_camp", 32);
									Var10.f_14 = 6096;
									if (__LIB_1__::func_200(120))
									{
										iVar31 |= 8;
										Var0.f_6 = { -1407.407f, 1508.33f, 239f };
										Var0.f_6.f_3 = 260f;
									}
									else if (__LIB_2__::func_774(15))
									{
										iVar31 |= 16;
										Var0.f_6 = { 1775.903f, 1255.647f, 189.6069f };
										Var0.f_6.f_3 = 90f;
									}
									else if (!func_122(iParam0) || ((!__LIB_0__::func_48(Global_35, __LIB_0__::func_398(7), __LIB_1__::func_136(7), 1) || __LIB_5__::func_917() != 0) && !__LIB_0__::func_48(Global_35, Global_1900383.f_393, 5f, 1)))
									{
										iVar31 |= 128 | 32;
									}
									if (__LIB_0__::func_27(iVar31, 128) && Global_1357522.f_10[1])
									{
										Global_1357522.f_10[1] = 0;
									}
									else if (!__LIB_0__::func_27(iVar31, 128) && Global_1357522.f_10[0])
									{
										Global_1357522.f_10[0] = 0;
									}
									Var0 = iVar31;
									Var10 = { Var0 };
									Var10.f_15 = 1;
									__LIB_4__::func_709(Var10, 2);
								}
							}
							else if (func_122(joaat("KIT_CAMP")))
							{
								if (__LIB_9__::func_982(1))
								{
									__LIB_9__::func_985(2);
								}
								else if (__LIB_7__::func_820(1))
								{
									__LIB_0__::func_45("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										__LIB_0__::func_45("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
									}
									else
									{
										__LIB_0__::func_45("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									__LIB_12__::func_191(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								__LIB_0__::func_45("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								__LIB_12__::func_191(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else
							{
								__LIB_0__::func_45("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1392040.f_1 |= 2;
							iVar33 = 1;
						}
						Jump @2534; //curOff = 2200
						if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_KIT_BINOCULARS"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_BINOCULARS"), true, 0, false, false);
						}
						return true;
						Jump @2534; //curOff = 2241
						if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_KIT_CAMERA"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_CAMERA"), true, 0, false, false);
						}
						return true;
						Jump @2534; //curOff = 2282
						iVar27 = __LIB_7__::func_821(__LIB_0__::func_12());
						iVar28 = __LIB_7__::func_779();
						if (__LIB_0__::func_69(iVar27))
						{
							if (iVar27 == iVar28 && !__LIB_7__::func_780())
							{
								bVar34 = false;
							}
						}
						if (bVar34)
						{
							__LIB_0__::func_45("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, 1);
						}
						Jump @2534; //curOff = 2352
						func_149(iParam0, 1, 0, 562618531, 0);
						Jump @2534; //curOff = 2370
						__LIB_1__::func_240(497, 1);
						Jump @2534; //curOff = 2381
						__LIB_9__::func_183(1);
						Jump @2534; //curOff = 2389
						func_149(iParam0, 1, 0, 562618531, 0);
						func_152(joaat("PROVISION_BEAUS_GIFT_2"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @2534; //curOff = 2430
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("DOCUMENT_PLAYER_JOURNAL"), 1928812891, 1, 0, -1082130432 /* Float: -1f */);
						bVar32 = false;
						return true;
						Jump @2534; //curOff = 2465
						Var0.f_2 = joaat("DOCUMENT_NATIVE_AMERICAN_JOURNAL");
						Var10 = { Var0 };
						StringCopy(&(Var10.f_10), "native_american_journal", 32);
						Var10.f_14 = 512;
						Var10.f_15 = 1;
						__LIB_4__::func_709(Var10, 0);
						iVar33 = 0;
						bVar32 = false;
						Jump @2534; //curOff = 2525
						iVar33 = 0;
					}
				}
				if (bVar32)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar33;
				default:
					break;
		}
	}
}

void func_28()
{
	bool bVar0;
	struct<5> Var1;
	struct<4> Var6;
	int iVar10;
	if (__LIB_0__::func_356(Global_1935689.f_10190) == joaat("CONSUMABLE"))
	{
		Global_1935496.f_31 = Global_1935689.f_10190;
	}
	else
	{
		Global_1935496.f_32 = Global_1935689.f_10190;
	}
	bVar0 = true;
	if (__LIB_0__::func_357(Global_1935689.f_10190) == -854348463)
	{
		Var1 = { __LIB_1__::func_615(Global_1935689.f_10190, 0, 0) };
		Var6 = { __LIB_0__::func_429(Global_1935689.f_10190, Var1, Var1.f_4, 0) };
		__LIB_1__::func_556(Var6, 1);
		if (Global_1935689.f_10189 == -156634416)
		{
			func_157(__LIB_0__::func_708(0), 0, joaat("CI_TAG_FOLDER_KIT_WATCHES"));
		}
		else
		{
			func_157(__LIB_0__::func_708(0), 1, 0);
		}
		bVar0 = true;
	}
	else if (__LIB_0__::func_357(Global_1935689.f_10190) == 81053684 || __LIB_0__::func_357(Global_1935689.f_10190) == -525676072)
	{
		func_128(Global_1935689.f_10190, 0);
		bVar0 = false;
	}
	else if (__LIB_0__::func_192(Global_1935689.f_10190, 316290104))
	{
		if (func_158(Global_1935689.f_10190, 0) >= 0)
		{
			bVar0 = true;
		}
	}
	else if (func_159(Global_1935689.f_10190, 1, 0))
	{
		iVar10 = func_160(Global_1935689.f_10190);
		if (__LIB_0__::func_144(iVar10, 0))
		{
			if (func_162(iVar10))
			{
				bVar0 = false;
			}
		}
	}
	else if (func_25(Global_1935689.f_10190, 0, 0, 0, 1, 0, 0))
	{
		bVar0 = false;
	}
	if (__LIB_7__::func_775())
	{
		bVar0 = false;
	}
	Global_1935689.f_10191 = Global_1935689.f_10190;
	__LIB_3__::func_739(bVar0);
	Global_1911913 = MISC::GET_GAME_TIMER();
	if (!__LIB_7__::func_625())
	{
		__LIB_14__::func_936(0);
	}
}

void func_29(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return;
	}
	func_164(iParam0, iParam1, 0, -327174699, 1);
	func_157(__LIB_0__::func_708(0), 0, 0);
}

void func_30(int iParam0)
{
	func_29(iParam0, func_166(__LIB_8__::func_716(0), iParam0, 0));
}

int func_34(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if ((Global_1935496.f_29 && iParam2) != 0)
	{
		Global_1935496.f_27 = (Global_1935496.f_27 - (Global_1935496.f_27 && iParam2));
		return 0;
	}
	else
	{
		Stack.Push(uParam0);
		Stack.Push(iParam1);
		Stack.Push(0);
		Call_Loc(iParam3);
		if (__LIB_19__::func_509(StackVal, StackVal, StackVal, StackVal))
		{
			Global_1935496.f_27 = (Global_1935496.f_27 || iParam2);
			return 1;
		}
		else
		{
			Global_1935496.f_27 = (Global_1935496.f_27 - (Global_1935496.f_27 && iParam2));
			return 0;
		}
	}
	return 0;
}

void func_38(int iParam0)
{
	__LIB_1__::func_993(&(Global_1935496.f_27), iParam0);
}

void func_60(bool bParam0)
{
	int iVar0;
	if (__LIB_1__::func_510(64))
	{
		return;
	}
	if (!__LIB_4__::func_807(0) && !__LIB_15__::func_42())
	{
		iVar0 = __LIB_0__::func_162(0);
		if (func_200(iVar0, 0, 0, 0, bParam0))
		{
			func_201(iVar0);
		}
		__LIB_18__::func_911(iVar0);
		__LIB_18__::func_912();
		__LIB_1__::func_511(64);
	}
}

void func_61()
{
	int iVar0;
	iVar0 = __LIB_0__::func_162(0);
	func_200(iVar0, 1, 0, 0, 1);
	func_201(iVar0);
}

void func_63()
{
	func_204(joaat("SATCHEL_ELEMENTS"), &(Global_1935689.f_10225), 600, -1, 0, 0);
	__LIB_17__::func_429();
}

int func_64(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	func_206();
	bVar0 = __LIB_4__::func_807(0);
	bVar1 = __LIB_15__::func_42();
	bVar2 = false;
	if (((!bVar0 && !bVar1) && Global_1935689.f_10189 != -156634416) && Global_1935689.f_10189 != 1061777683)
	{
		bVar2 = true;
	}
	Global_1935689.f_10196 = 1;
	if (!Global_1935689.f_9)
	{
		Global_1935689.f_10188 = -1;
	}
	Global_1935689.f_10199 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_menu_items");
	Global_1935689.f_10200 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_list_items");
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Satchel");
	Global_1935689.f_10213 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSelectLabel", -31549930);
	Global_1935689.f_10214 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectEnabled", true);
	Global_1935689.f_10215 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectVisible", true);
	Global_1935689.f_10216 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptHoldSelectLabel", joaat("SATCHEL_PROMPT_BREAKDOWN"));
	Global_1935689.f_10217 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectEnabled", false);
	Global_1935689.f_10218 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectVisible", false);
	Global_1935689.f_10221 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "PromptDiscardAllLabel", HUD::_GET_LABEL_TEXT_BY_HASH(joaat("SATCHEL_PROMPT_DISCARD_ALL")));
	Global_1935689.f_10219 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllEnabled", bVar2);
	Global_1935689.f_10220 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllVisible", bVar2);
	Global_1935689.f_10224 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDropVisibile", bVar2);
	Global_1935689.f_10222 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSendLabel", -31549930);
	if ((__LIB_0__::func_2() == -1 && __LIB_4__::func_807(0)) && Global_1914319.f_16855 == 2)
	{
		Global_1935689.f_10223 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", true);
	}
	else
	{
		Global_1935689.f_10223 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", false);
	}
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Selected");
	Global_1935689.f_10204 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Name", 0);
	Global_1935689.f_10205 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Description", 0);
	if ((__LIB_4__::func_807(0) || __LIB_6__::func_126()) || __LIB_14__::func_851())
	{
		Global_1935689.f_10206 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "Price", "");
	}
	else
	{
		Global_1935689.f_10206 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar3, "Price", false);
	}
	if ((__LIB_0__::func_2() == -1 && __LIB_4__::func_807(0)) && Global_1914319.f_16855 == 2)
	{
		Global_1935689.f_10207 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "PriceLabel", "SHOP_SEND");
	}
	else
	{
		Global_1935689.f_10207 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "PriceLabel", "SHOP_VALUE");
	}
	Global_1935689.f_10208 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Category", 0);
	Global_1935689.f_10202 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar3, "DefaultCategoryIndex", 0);
	Global_1935689.f_10203 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar3, "CategoryIndex", __LIB_14__::func_933());
	Global_1935689.f_10201 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar3, "CategoryCount", 0);
	Global_1935689.f_10209 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "IndexDescription", "");
	Global_1935689.f_10210 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "Tip", "");
	Global_1935689.f_10211 = INVENTORY::_0x9D21B185ABC2DBC4(uVar3, "effects", 0, 0);
	Global_1935689.f_10212 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Folder", 0);
	Global_1935689.f_10198 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_category_items");
	func_208(Global_1935689.f_10198);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_10198, Global_1935689.f_10166);
	uVar4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "Collections");
	iVar5 = joaat("SATCHEL_TITLE");
	if (__LIB_6__::func_107(joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1")))
	{
		iVar5 = -1401261769;
	}
	iVar6 = func_210(uVar4, "player", iVar5, "ALL SATCHEL", -1591664384);
	if (iVar6 < 0)
	{
		return 0;
	}
	if ((__LIB_15__::func_695() || __LIB_0__::func_394(Global_35, __LIB_0__::func_398(7), 1)) || (!(func_87(7) || __LIB_11__::func_554(7)) && __LIB_4__::func_807(0)))
	{
		func_210(uVar4, "saddle", -1186165261, "ALL", 724026534);
	}
	func_102(iVar6, &uVar3);
	if (Global_1935689.f_9)
	{
		__LIB_15__::func_596(Global_1935689.f_10189);
		func_212(Global_1935689.f_10189, &uVar3, 0);
		func_157(1, 0, 0);
	}
	else
	{
		func_157(func_213(), 0, 0);
	}
	Global_1935689.f_9 = 0;
	return 1;
}

void func_65()
{
	if (Global_1572887.f_12 == -1)
	{
		return;
	}
	Global_1058888.f_2 = 1;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1315938069;
		case -1559802791:
			return -1694952718;
		case -1268291907:
			return 1510785758;
		case -96974025:
			return 392871877;
		case -1666604090:
			return 92275361;
		case 1561961676:
			return 983460938;
		case -156634416:
			return -1579183876;
		case 1061777683:
			return -419081072;
		case -283002878:
			return -1202687131;
		case -2074770370:
			return 89311517;
		case -693134279:
			return 1001811369;
		case -182626652:
			return 288697952;
	}
	return 0;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case -2074770370:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10210, HUD::_GET_LABEL_TEXT_BY_HASH(818738914));
			break;
		case -693134279:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10210, HUD::_GET_LABEL_TEXT_BY_HASH(-402412948));
			break;
		case -182626652:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10210, HUD::_GET_LABEL_TEXT_BY_HASH(-456150746));
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10210, "");
			break;
	}
	return 0;
}

void func_73(var uParam0)
{
	MAP::DISPLAY_RADAR(true);
	Global_1935689.f_1 = 0;
	__LIB_14__::func_451();
	func_215(uParam0);
	ATTRIBUTE::_0xD962F8579D702DB5();
	HUD::_SHOW_PLAYER_CORES(false);
	HUD::_SHOW_HORSE_CORES(false);
	uParam0->f_1 = 0;
}

void func_77(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6[10];
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar25;
	uParam1->f_2 = 0;
	__LIB_15__::func_87(iParam0, 761605153, &bVar0, &iVar1);
	iVar2 = __LIB_6__::func_327(iParam0, 2);
	iVar3 = (iVar1 - iVar2);
	iVar4 = __LIB_6__::func_327(iParam0, 0);
	if (bVar0)
	{
		if (iVar3 > 0)
		{
			*uParam1 = 0;
			uParam1->f_2 = 1;
		}
		else
		{
			*uParam1 = 2;
		}
		if (iVar3 >= iVar4)
		{
			uParam1->f_1 = 0;
		}
		else
		{
			uParam1->f_1 = 3;
		}
	}
	else if (__LIB_5__::func_796(iParam0))
	{
		*uParam1 = 1;
		uParam1->f_1 = 1;
	}
	else
	{
		*uParam1 = 2;
		uParam1->f_1 = 2;
	}
	if (__LIB_9__::func_808(iParam0))
	{
		if (!func_221(iParam0, &iVar5))
		{
			iVar18 = __LIB_12__::func_153(iParam0);
			iVar19 = __LIB_12__::func_154(iParam0);
			iVar20 = __LIB_12__::func_154(iParam0);
			iVar17 = PED::_0xB29C553BA582D09E(&uVar6, iVar18, iVar19, iVar20);
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
			{
				return;
			}
			iVar21 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
			if (PED::_IS_METAPED_USING_COMPONENT(iVar21, 43391475) || ENTITY::_0x8DE41E9902E85756(iVar5))
			{
				iVar17 = 0;
			}
			else
			{
				iVar17 = __LIB_8__::func_855(iVar21, &uVar6);
			}
		}
		if (iVar17 <= 0)
		{
			return;
		}
		iVar25 = 0;
		while (iVar25 < iVar17)
		{
			if (!__LIB_0__::func_144(uVar6[iVar25], 0))
			{
			}
			else if (uVar6[iVar25] == iParam0)
			{
			}
			else
			{
				func_77(uVar6[iVar25], &iVar22);
				if (iVar22 == 0)
				{
					uParam1->f_2 = 1;
					*uParam1 = 0;
					uParam1->f_1 = 3;
				}
				else
				{
					iVar25++;
				}
			}
		}
	}
}

int func_79(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	if (iParam0 == 0)
	{
		return 0;
	}
	fVar0 = 1f;
	fVar1 = 1f;
	iVar2 = Global_1914319.f_16855.f_1;
	iVar3 = Global_1914319.f_16855;
	if (__LIB_1__::func_917(iVar2) && __LIB_1__::func_918(iVar3))
	{
		if (iVar3 == 10 || iVar3 == 18)
		{
			fVar1 = __LIB_15__::func_479(iVar2, iParam0);
		}
		fVar0 = func_229(&(Global_1914319.f_3[iVar3 /*446*/].f_35), iParam0);
	}
	fVar4 = (fVar0 + fVar1);
	if (fVar0 <= 0f)
	{
		return 0;
	}
	fVar4 = (fVar4 - IntToFloat(BUILTIN::FLOOR(fVar4)));
	iVar5 = __LIB_9__::func_977(iParam0, 816454899, 0);
	iVar6 = BUILTIN::ROUND((IntToFloat(iVar5) + (IntToFloat(iVar5) * fVar4)));
	if (bParam1)
	{
		iVar6 = BUILTIN::ROUND((IntToFloat(iVar6) * 0.5f));
	}
	if (iVar6 <= 0)
	{
		return 0;
	}
	return iVar6;
}

int func_82(int iParam0)
{
	return __LIB_0__::func_55(iParam0 == -283002878, 1, 0);
}

void func_83(var uParam0, int iParam1)
{
	struct<14> Var0;
	int iVar14;
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	iVar14 = (*uParam0 - 1);
	while (iVar14 >= 0)
	{
		if (!__LIB_0__::func_236(&Var0, iVar14, func_82(Global_1935689.f_10189), *uParam0))
		{
		}
		else if (!__LIB_7__::func_632(Var0.f_4, iParam1))
		{
		}
		else if (!func_235(&Var0, 0, 1))
		{
		}
		else if (__LIB_4__::func_807(0))
		{
			if (!__LIB_0__::func_144(Var0.f_4, 0) || Var0.f_11 <= 0)
			{
			}
			else
			{
				if (Global_1935689.f_10190 == 0)
				{
					__LIB_14__::func_936(Var0.f_4);
				}
				func_236(Var0, 0);
			}
			iVar14 = (iVar14 + -1);
		}
	}
}

int func_87(int iParam0)
{
	int iVar0;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_89(int iParam0, int iParam1)
{
	if (!__LIB_17__::func_701(Global_1935689.f_10181[iParam0 /*2*/].f_1))
	{
		return false;
	}
	return __LIB_0__::func_446("ALL", &(Global_1935689.f_10181[iParam0 /*2*/].f_1), &(Global_1935689.f_10181[iParam0 /*2*/]), iParam1, 0);
}

void func_91(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (Global_1935689.f_10189 == 0)
	{
		return;
	}
	iVar1 = 0;
	if (iParam2 == 0 && *uParam0 > 16)
	{
		iVar1 = (*uParam0 - 16);
	}
	iVar0 = 0;
	while (iVar0 < Global_1935689.f_19.f_1)
	{
		Global_1935689.f_19.f_2[iVar0 /*2*/] = 0;
		Global_1935689.f_19.f_2[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	Global_1935689.f_19.f_1 = 0;
	iVar0 = 0;
	if (*uParam0 > 0)
	{
		iVar0 = (*uParam0 - 1);
		while (iVar0 >= iVar1)
		{
			if (!__LIB_0__::func_236(uParam1, iVar0, uParam0->f_1, *uParam0))
			{
			}
			else if (!func_235(uParam1, iParam2, 1))
			{
			}
			else
			{
				func_246(*uParam1);
			}
			iVar0 = (iVar0 + -1);
		}
	}
}

void func_92()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	Global_1935689.f_1224 = 0;
	if (__LIB_15__::func_55())
	{
		if (PED::_IS_PED_CARRYING(Global_35))
		{
			iVar2 = ITEMSET::CREATE_ITEMSET(false);
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar2);
			if (ITEMSET::IS_ITEMSET_VALID(iVar2))
			{
				iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
				iVar4 = 0;
				while (iVar4 < iVar3)
				{
					iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
					if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
					}
					else
					{
						iVar1 = __LIB_6__::func_140(iVar0);
						if (func_249(iVar1))
						{
							Global_1935689.f_1224 = iVar1;
						}
					}
					iVar4++;
				}
				ITEMSET::DESTROY_ITEMSET(iVar2);
			}
		}
	}
}

void func_93()
{
	if (__LIB_15__::func_815())
	{
		if (__LIB_4__::func_807(0))
		{
			if ((__LIB_11__::func_524() == 19 || __LIB_11__::func_524() == 18) || __LIB_11__::func_524() == 10)
			{
				func_252(1, 0);
			}
			else
			{
				func_253(1);
			}
		}
		else
		{
			func_253(1);
		}
	}
}

void func_94(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (iParam2 == 0)
	{
		func_254(uParam0, uParam1, iParam2);
	}
	else
	{
		iVar1 = 0;
		if (*uParam0 > 0)
		{
			iVar0 = (*uParam0 - 1);
			while (iVar0 >= 0)
			{
				if (!__LIB_0__::func_236(uParam1, iVar0, uParam0->f_1, *uParam0))
				{
				}
				else if (!func_235(uParam1, iParam2, 1))
				{
				}
				else
				{
					func_255(*uParam1, 0);
					iVar1++;
					if (iParam2 == 0 && iVar1 >= 16)
					{
					}
					else
					{
						iVar0 = (iVar0 + -1);
					}
				}
			}
		}
	}
}

void func_95()
{
	switch (Global_1935689.f_10189)
	{
		case -156634416:
			func_256();
			break;
		case 1561961676:
			if (func_257(joaat("MONEY_LOANSHARK_GWEN_DEBT"), 1, 0))
			{
				func_258(joaat("MONEY_LOANSHARK_GWEN_DEBT"), 0);
			}
			break;
	}
}

void func_96()
{
	if (!__LIB_0__::func_144(Global_1935689.f_1224, 0))
	{
		return;
	}
	if (__LIB_15__::func_695() && func_166(__LIB_8__::func_716(0), Global_1935689.f_1224, 0) != 1)
	{
		return;
	}
	func_258(Global_1935689.f_1224, 0);
}

void func_98()
{
	if (!__LIB_0__::func_144(Global_1935689.f_10190, 0))
	{
		Global_1935689.f_7 = 0;
	}
	else if ((((__LIB_0__::func_372(Global_1935689.f_10190, 1224357681) != 0 && Global_1935689.f_10189 != 0) && Global_1935689.f_10189 != -2074770370) && !__LIB_4__::func_807(0)) && !__LIB_6__::func_126())
	{
		Global_1935689.f_7 = 1;
	}
	else
	{
		Global_1935689.f_7 = 0;
	}
}

var func_99(var uParam0)
{
	var uVar0;
	uVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(uParam0, "label");
	return uVar0;
}

void func_100(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	bVar0 = true;
	if (__LIB_0__::func_144(iParam0, 0))
	{
		if (__LIB_0__::func_192(iParam0, 1147021565))
		{
			if (Global_1935689.f_10189 == -283002878)
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (!__LIB_4__::func_807(0))
			{
				iVar2 = __LIB_6__::func_846(&iParam0);
				if (__LIB_0__::func_192(iParam0, 1573112293) && !__LIB_7__::func_829(iVar2))
				{
					bVar0 = false;
					ATTRIBUTE::_0xD962F8579D702DB5();
				}
				else
				{
					ATTRIBUTE::_0x7E2C766ADB2C5F1A(iParam0, iVar1);
				}
			}
		}
		func_262(iParam0, uParam1);
		bVar3 = false;
		bVar4 = func_263(iParam0);
		if (__LIB_15__::func_695())
		{
			iVar5 = func_166(__LIB_8__::func_716(0), iParam0, 0);
		}
		else
		{
			iVar5 = func_264(iParam0, 0, 0);
			if (iParam0 == Global_1935689.f_1224)
			{
				iVar5++;
			}
		}
		iVar6 = __LIB_8__::func_959(iParam0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_10204, __LIB_0__::func_776(iParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_10205, func_267(iParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10224, bVar4);
		if (bVar4 && iVar5 > 1)
		{
			bVar3 = true;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10220, bVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10219, bVar3);
		bVar7 = true;
		if (__LIB_4__::func_807(0) || __LIB_15__::func_42())
		{
			fVar8 = (BUILTIN::TO_FLOAT(func_268(iParam0, 1)) / 100f);
			if (Global_1914319.f_16855 == 2)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10206, MISC::_CREATE_VAR_STRING(10, "SEND_ITEM_VALUE", __LIB_1__::func_925(MISC::_0x2B6846401D68E563(fVar8, 2), joaat("COLOR_PURE_WHITE"))));
			}
			else if (Global_1914319.f_16855 == 19)
			{
				if (uParam2->f_1)
				{
					Call_Loc(uParam2->f_2);
				}
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10206, MISC::_CREATE_VAR_STRING(10, "SHOP_ITEM_VALUE", __LIB_1__::func_925(MISC::_0x2B6846401D68E563(fVar8, 2), joaat("COLOR_PURE_WHITE"))));
			}
			if (!__LIB_8__::func_127(iParam0, Global_1914319.f_16855.f_1) && !__LIB_15__::func_42())
			{
				bVar7 = false;
			}
		}
		if (bVar7)
		{
			if (iVar6 > 1)
			{
				if (Global_1935689.f_19.f_203 <= 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10210, "");
				}
				else if (iVar5 >= iVar6)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10210, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CAPACITY_FULL", iVar5, iVar6));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10210, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CAPACITY", iVar5, iVar6));
				}
			}
			else if (iVar6 == 1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10210, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10210, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_INFINITE", iVar5));
			}
		}
		else if (__LIB_11__::func_524() == 2)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10210, "");
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10210, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM"));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_10204, __LIB_14__::func_937(Global_1935689.f_10189));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_10205, __LIB_14__::func_937(Global_1935689.f_10189));
	}
	if (!bVar0)
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1935689.f_10211, 0, 0);
	}
	else
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1935689.f_10211, iParam0, 0);
	}
	__LIB_14__::func_936(iParam0);
}

void func_102(int iParam0, var uParam1)
{
	Global_1935689.f_10187 = iParam0;
	if (__LIB_7__::func_775())
	{
		if (PED::_IS_PED_CARRYING(Global_35) == 0)
		{
			__LIB_15__::func_596(-1559802791);
		}
	}
	if (__LIB_6__::func_126())
	{
		__LIB_15__::func_596(-2074770370);
	}
	func_212(Global_1935689.f_10189, uParam1, 0);
}

void func_103(int iParam0, var uParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_10204, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_10205, func_270(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_10212, iParam0);
	__LIB_14__::func_936(0);
	INVENTORY::_0x75CFAC49301E134F(Global_1935689.f_10211, 0, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10210, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10224, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10220, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10219, false);
	func_271(uParam1);
}

void func_104(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	Global_1935689.f_10167 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1935689.f_10203);
	iVar0 = Global_1935689.f_10168[Global_1935689.f_10167];
	if (iVar0 != Global_1935689.f_10189)
	{
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_OPTION")))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_OPTION"), false);
		}
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION")))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
		}
		Global_1935689.f_19.f_203 = 0;
		Global_1935689.f_10187 = func_82(iVar0);
		uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_10198, iParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uVar1, "CurrentCategory", false);
		uVar2 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_10198, Global_1935689.f_10167);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uVar2, "CurrentCategory", true);
		func_212(iVar0, &uVar2, 0);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 11)
		{
			uVar4 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_10198, iVar3);
			bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uVar4, "CurrentCategory");
			bVar6 = !Global_1935689.f_10168[iVar3] != Global_1935689.f_10189;
			if (bVar5 != bVar6)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uVar4, "CurrentCategory", bVar6);
			}
			iVar3++;
		}
		Global_1935689.f_10187 = func_82(Global_1935689.f_10189);
	}
}

bool func_109(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (Global_1935689.f_8)
	{
		return false;
	}
	if (((iParam0 != joaat("CUSTOM_SATCHEL") && iParam0 != joaat("KIT_CAMP")) && iParam0 != joaat("KIT_CAMP_SIMPLE")) && bParam1)
	{
		iVar0 = __LIB_9__::func_986(iParam0);
		if (__LIB_0__::func_192(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!__LIB_19__::func_509(&uVar1, HUD::_0x0501D52D24EA8934(1), 1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE"))
	{
		if (__LIB_7__::func_781())
		{
			return false;
		}
	}
	if (!func_257(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

void func_112(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, struct<2> Param17, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, bool bParam28, int iParam29)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_TS_RHD_FEUD_LETTER"):
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2"):
			if (__LIB_0__::func_113())
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR4_AR"), 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_MAYOR4_AR")))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR4B_JN"), 0);
			}
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2_JN"):
			__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR4A_JN"), 0);
			break;
		case joaat("DOCUMENT_TS_STR_MAYOR_LETTER"):
			break;
		case joaat("DOCUMENT_RCM_FMA_LETTER"):
			__LIB_1__::func_532(Global_1347702[80 /*49*/].f_15, 1);
			if (__LIB_0__::func_113() == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA5_1_AR"), 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_FMA5_1_AR")))
			{
				if (__LIB_0__::func_343(77))
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_FMA5_2_JN"), 0);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_FMA5_1_JN"), 0);
				}
			}
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			if ((__LIB_0__::func_28() && !__LIB_1__::func_154(51)) && !__LIB_7__::func_782(1048576))
			{
				__LIB_7__::func_783(2);
				__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
				func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 2, 0);
				__LIB_0__::func_433(1048576);
			}
			break;
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			if ((__LIB_0__::func_28() && !__LIB_1__::func_154(51)) && !__LIB_7__::func_782(16384))
			{
				__LIB_7__::func_783(1);
				__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
				func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 5, 0);
				__LIB_0__::func_433(16384);
			}
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			if ((__LIB_0__::func_28() && !__LIB_1__::func_154(40)) && !__LIB_7__::func_784(32))
			{
				__LIB_7__::func_785(4);
				__LIB_1__::func_450(39, 0, 0, 0, 0, -1, 0);
				func_285(39, 0, 0, 0, 0, 0, 2, 0);
				__LIB_0__::func_434(32);
			}
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			if ((__LIB_0__::func_28() && !__LIB_1__::func_154(42)) && !__LIB_7__::func_786(16))
			{
				__LIB_7__::func_787(8);
				__LIB_1__::func_450(41, 0, 0, 0, 0, -1, 0);
				func_285(41, 0, 0, 0, 0, 0, 2, 0);
				__LIB_0__::func_435(16);
			}
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			if ((__LIB_0__::func_28() && !__LIB_1__::func_154(50)) && !__LIB_7__::func_788(32))
			{
				__LIB_7__::func_789(4);
				__LIB_1__::func_450(49, 0, 0, 0, 0, -1, 0);
				func_285(49, 0, 0, 0, 0, 0, 2, 0);
				__LIB_0__::func_436(32);
				if (!__LIB_1__::func_25(Global_1347702[50 /*49*/].f_15, 1))
				{
					if (__LIB_0__::func_113() == 1)
					{
						__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV15_AR"), 0);
					}
					else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_ROCKCARV15_AR")))
					{
						__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV15_JN"), 0);
					}
				}
			}
			break;
		case joaat("DOCUMENT_CATALOGUE_WMN_LETTER_01"):
			iParam27 = joaat("TP_CATALOGUE_LETTER_01");
			Param17.f_1 = iParam27;
			StringCopy(&(Param1.f_10), "respond_parcel", 32);
			iParam29 = 0;
			bParam28 = true;
			break;
	}
}

bool func_116(int iParam0, bool bParam1, bool bParam2)
{
	if (__LIB_7__::func_822(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	switch (__LIB_0__::func_372(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1245009814, 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case 1174751405:
			if (!bParam1)
			{
				func_298(iParam0);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!__LIB_7__::func_790())
				{
					if (__LIB_4__::func_385(&Global_35))
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					else
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_NO_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					return true;
				}
				else
				{
					__LIB_0__::func_45("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 280850861, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1087288635, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -268993254, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -1401979141, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1834614641, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 136592566, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				func_301(iParam0);
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_302(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_303(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					func_304(iParam0);
				}
				else
				{
					func_305(iParam0);
				}
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				func_306(iParam0);
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				func_307(iParam0);
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				func_308(iParam0);
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				func_309(iParam0);
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("POCKET_WATCH_INSPECT_UNHOLSTER"), 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_310(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_311(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_312(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_313(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_314(iParam0);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_315(iParam0);
				return true;
			}
			break;
	}
	return false;
}

bool func_122(int iParam0)
{
	int iVar0;
	if (iParam0 == 0)
	{
		return false;
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if (__LIB_0__::func_357(iParam0) == -999503751)
		{
			iVar0 = __LIB_0__::func_449(iParam0);
			if ((iVar0 != -1 && !__LIB_1__::func_122(iVar0)) || !func_257(iParam0, 1, 0))
			{
				return false;
			}
		}
	}
	return true;
}

int func_128(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_1__::func_516())
	{
		return 0;
	}
	if (!func_324(iParam0))
	{
		return 0;
	}
	if (__LIB_5__::func_100(iParam0))
	{
		iVar0 = 0;
		if (__LIB_0__::func_357(iParam0) == 81053684)
		{
			if (bParam1)
			{
				__LIB_1__::func_683(&iVar0, 2);
			}
		}
		return __LIB_3__::func_630(iParam0, iVar0);
	}
	return 0;
}

bool func_149(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = __LIB_0__::func_937(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!func_257(iParam0, 1, bParam4))
	{
		return false;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_264(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_264(iParam0, 0, 0) - iParam1) < 0)
		{
			func_149(iParam0, func_264(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!func_362(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_363(iParam0, iParam1);
	return true;
}

int func_152(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!func_370(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (func_264(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = func_376(iVar6) + 1;
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
				func_152(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						func_285(38, __LIB_0__::func_354(iVar6), 0, 0, func_382(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						func_285(38, __LIB_0__::func_354(iVar6), 0, 0, func_382(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					func_285(38, 0, 0, 0, func_382(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					func_285(38, 0, 0, 0, func_382(), 0, -1, 0);
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
		func_386(28);
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
			if (!func_392(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!func_394(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			__LIB_3__::func_909(iParam0);
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
				func_400(iParam0);
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
				func_402(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			func_403(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			func_404(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			func_405(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			func_406(iParam0);
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
			func_408(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_410(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			func_400(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return 0;
			}
			func_411(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_257(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_152(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_257(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_152(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_257(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_152(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_257(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_152(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_257(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_152(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_257(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_152(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_152(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_386(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_414(&iVar9, 0))
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
					func_152(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_152(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_434(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_435(iParam0);
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
				func_152(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_157(bool bParam0, bool bParam1, int iParam2)
{
	Global_1935689.f_4 = bParam0;
	Global_1935689.f_15 = iParam2;
	if (bParam0)
	{
		Global_1935689.f_5 = 0;
	}
	if (bParam1 || (func_448() && iParam2 == 0))
	{
		__LIB_12__::func_158(1);
		__LIB_12__::func_159(1);
	}
}

int func_158(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = 1;
	iVar2 = 0;
	iVar1 = __LIB_12__::func_154(iParam0);
	iVar2 = __LIB_12__::func_153(iParam0);
	if (iVar2 != 0)
	{
		func_149(iParam0, 1, 1, -142743235, 0);
		iVar0 = func_449(iVar2, iVar1, iParam0, iParam1);
	}
	return iVar0;
}

bool func_159(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == joaat("PROVISION_ROTTEN_MEAT") || iParam0 == joaat("CONSUMABLE_CORNEDBEEF_CAN"))
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || __LIB_0__::func_192(iParam0, -839724752))
	{
		if (bParam2)
		{
			return __LIB_0__::func_192(iParam0, -1238310989);
		}
		else if (bParam1)
		{
			return !__LIB_0__::func_192(iParam0, -1238310989);
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	iVar0 = __LIB_0__::func_372(iParam0, 1697966752);
	iVar1 = 0;
	if (iVar0 == 0)
	{
		return 0;
	}
	Var2 = { __LIB_0__::func_373(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar0, 0) };
	if (__LIB_1__::func_48(Var2, &iVar12, &iVar13, 0))
	{
		iVar14 = 0;
		while (iVar14 < iVar13)
		{
			iVar15 = __LIB_0__::func_374(iVar14, iVar12);
			if (__LIB_0__::func_144(iVar15, 0))
			{
				iVar1 = iVar15;
			}
			else
			{
				iVar14++;
			}
		}
		__LIB_0__::func_375(iVar12);
	}
	return iVar1;
}

bool func_162(int iParam0)
{
	Global_1911914.f_1577 = iParam0;
	Global_1392040.f_2 = 1;
	__LIB_4__::func_229(268435456);
	if (__LIB_0__::func_644(8388608))
	{
		__LIB_4__::func_229(16777216);
		return true;
	}
	else if ((func_257(joaat("KIT_CAMP_SIMPLE"), 1, 0) && func_25(joaat("KIT_CAMP_SIMPLE"), 0, 0, 0, 1, 0, 0)) || (func_257(joaat("KIT_CAMP"), 1, 0) && func_25(joaat("KIT_CAMP"), 0, 0, 0, 1, 0, 0)))
	{
		Global_1392040.f_4 = MISC::GET_GAME_TIMER();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
		return true;
	}
	else
	{
		Global_1392040.f_2 = 0;
		__LIB_4__::func_226(268435456);
	}
	return false;
}

int func_164(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	if (!bParam4)
	{
		iParam1 = func_455(iParam0, iParam1, 1, 1, -142743235);
	}
	else
	{
		iVar0 = __LIB_8__::func_716(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_456(&iVar0, iParam0, &iParam1, bParam2, iParam3);
		}
	}
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_457(iParam0, iParam1, bParam2, iParam3);
}

int func_166(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_12__::func_160())
	{
		iVar0 = func_461(iParam1, 0);
	}
	else
	{
		iVar0 = func_264(iParam1, bParam2, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			iVar0 = (iVar0 + __LIB_7__::func_601(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1));
		}
	}
	if (iParam1 == Global_1935689.f_1224)
	{
		iVar0++;
	}
	return iVar0;
}

bool func_200(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	struct<14> Var18;
	int iVar32;
	if (__LIB_11__::func_394(Global_35))
	{
		bParam2 = true;
	}
	bVar0 = false;
	if (!bParam2 && !bParam1)
	{
		if (Global_1935496.f_28 == Global_1935496.f_27)
		{
			return bVar0;
		}
	}
	iVar1 = -1;
	iVar3 = 0;
	Var4.f_9 = -1591664384;
	Var18 = { __LIB_0__::func_523(0, 1084182731, -1591664384, -1591664384, 0, 0) };
	if (__LIB_0__::func_801(&Var18, &iVar1, &iVar2, bParam3))
	{
		iVar32 = Global_36637 + 150;
		if (!bParam4)
		{
			if (iVar32 >= iVar2)
			{
				iVar32 = (iVar2 - 1);
				bVar0 = true;
			}
		}
		else
		{
			Global_36637 = 0;
			iVar32 = (iVar2 - 1);
			bVar0 = true;
		}
		iVar3 = Global_36637;
		while (iVar3 <= iVar32)
		{
			if (__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
				if (!__LIB_7__::func_624(Var4.f_4))
				{
				}
				else
				{
					if (bParam1)
					{
						__LIB_16__::func_258(iParam0, Var4.f_4, 1);
					}
					else if (bParam2)
					{
						__LIB_16__::func_258(iParam0, Var4.f_4, 0);
					}
					else if (Var4.f_4 != joaat("CUSTOM_SATCHEL"))
					{
						__LIB_16__::func_258(iParam0, Var4.f_4, __LIB_15__::func_771(Var4.f_4));
					}
					Global_36637 = iVar3;
				}
				iVar3++;
				if (bVar0)
				{
					Global_36637 = 0;
					Global_1935496.f_28 = Global_1935496.f_27;
				}
				__LIB_17__::func_701(iVar1);
				return bVar0;
			}
		}
	}
}

void func_201(int iParam0)
{
	__LIB_16__::func_258(iParam0, joaat("WEAPON_KIT_BINOCULARS"), __LIB_7__::func_589(32));
	__LIB_16__::func_258(iParam0, joaat("WEAPON_KIT_CAMERA"), __LIB_7__::func_589(64));
	__LIB_16__::func_258(iParam0, joaat("KIT_HORSE_BRUSH"), __LIB_7__::func_589(1024));
	func_493(iParam0, __LIB_7__::func_589(16384));
	func_494(iParam0, __LIB_7__::func_589(128));
	func_495(iParam0, __LIB_7__::func_589(4));
	func_496(iParam0, __LIB_7__::func_589(8));
}

int func_204(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_0xD97D8D905F1562F2(iParam0);
	while ((!DATAFILE::_0x603AC35FD4602C76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (bVar1)
	{
		__LIB_2__::func_822();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_206()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	iVar0 = __LIB_11__::func_524();
	iVar1 = __LIB_0__::func_560(__LIB_0__::func_12(), iVar0);
	iVar2 = __LIB_0__::func_398(__LIB_0__::func_97(0));
	iVar3 = __LIB_0__::func_398(__LIB_0__::func_97(1));
	iVar4 = __LIB_0__::func_398(__LIB_0__::func_97(6));
	if (__LIB_4__::func_807(0))
	{
		if (iVar0 == 19)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && __LIB_15__::func_104(iVar2))
			{
				__LIB_1__::func_683(&(Global_1935689.f_10186), 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && __LIB_15__::func_104(iVar3))
			{
				__LIB_1__::func_683(&(Global_1935689.f_10186), 2);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && __LIB_15__::func_104(iVar4))
			{
				__LIB_1__::func_683(&(Global_1935689.f_10186), 4);
			}
		}
		else if (iVar0 == 10 || iVar0 == 18)
		{
			fVar5 = 30f;
			if (iVar1 == 55)
			{
				fVar5 = 40f;
			}
			else if (iVar0 == 2)
			{
				fVar5 = 75f;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && func_502(iVar2, iVar1, fVar5))
			{
				__LIB_1__::func_683(&(Global_1935689.f_10186), 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && func_502(iVar3, iVar1, fVar5))
			{
				__LIB_1__::func_683(&(Global_1935689.f_10186), 2);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && func_502(iVar4, iVar1, fVar5))
			{
				__LIB_1__::func_683(&(Global_1935689.f_10186), 4);
			}
		}
	}
}

void func_208(var uParam0)
{
	Global_1935689.f_10166 = 0;
	if (!Global_1935689.f_9)
	{
		__LIB_15__::func_596(0);
		func_503();
	}
	else if ((((Global_1935689.f_10189 != -2074770370 && Global_1935689.f_10189 != -283002878) && Global_1935689.f_10189 != 822208792) && Global_1935689.f_10189 != -182626652) && Global_1935689.f_10189 != -693134279)
	{
		__LIB_12__::func_206(Global_1935689.f_10189);
	}
	else
	{
		__LIB_15__::func_596(0);
		func_503();
	}
	func_504(uParam0, 0, "All", joaat("SATCHEL_NAV_ALL"));
	func_504(uParam0, -1666604090, "Provisions", joaat("SATCHEL_NAV_PROVISIONS"));
	func_504(uParam0, -96974025, "Remedies", joaat("SATCHEL_NAV_REMEDIES"));
	func_504(uParam0, -1268291907, "Ingredients", joaat("SATCHEL_NAV_INGREDIENTS"));
	func_504(uParam0, -1559802791, "Materials", joaat("SATCHEL_NAV_MATERIALS"));
	func_504(uParam0, -156634416, "Kit", joaat("SATCHEL_NAV_KIT"));
	func_504(uParam0, 1561961676, "Valuables", joaat("SATCHEL_NAV_VALUABLES"));
	func_504(uParam0, 1061777683, "Documents", joaat("SATCHEL_NAV_DOCUMENTS"));
	func_505(uParam0);
	func_506(uParam0);
	if (__LIB_4__::func_807(0))
	{
		if (__LIB_11__::func_524() == 2)
		{
			__LIB_15__::func_596(-693134279);
		}
		else
		{
			__LIB_15__::func_596(-182626652);
		}
	}
	else
	{
		__LIB_15__::func_596(func_507());
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_10201, Global_1935689.f_10166);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_10203, __LIB_14__::func_933());
}

int func_210(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	iVar0 = Global_1935689.f_10180;
	if (iVar0 >= 2)
	{
		return -1;
	}
	if (!__LIB_0__::func_446(sParam3, &(Global_1935689.f_10181[iVar0 /*2*/].f_1), &(Global_1935689.f_10181[iVar0 /*2*/]), iParam4, 0))
	{
		return -1;
	}
	Global_1935689.f_10180++;
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar1, "label", iParam2);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0, -1, -1287062382, uVar1);
	return iVar0;
}

void func_212(int iParam0, var uParam1, bool bParam2)
{
	__LIB_15__::func_596(iParam0);
	if (!bParam2)
	{
		func_13(iParam0);
	}
}

bool func_213()
{
	int iVar0;
	int iVar1;
	if (Global_1935689.f_18 == 0)
	{
		Global_1935689.f_10167 = 0;
	}
	else
	{
		iVar0 = Global_1935689.f_10167;
		iVar1 = (Global_1935689.f_10166 - 1);
		switch (Global_1935689.f_18)
		{
			case -2074770370:
			case -693134279:
			case -182626652:
				Global_1935689.f_10167 = iVar1;
				break;
		}
		if (Global_1935689.f_18 == -283002878)
		{
			if (__LIB_4__::func_807(0))
			{
				Global_1935689.f_10167 = (iVar1 - 1);
			}
			else
			{
				Global_1935689.f_10167 = iVar1;
			}
		}
		func_104(iVar0);
		return true;
	}
	return false;
}

void func_215(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	while (Global_1935689.f_10180 > 0)
	{
		Global_1935689.f_10180 = (Global_1935689.f_10180 - 1);
		__LIB_17__::func_701(Global_1935689.f_10181[Global_1935689.f_10180 /*2*/].f_1);
	}
}

bool func_221(int iParam0, int iParam1)
{
	return (func_512(iParam0, iParam1) || func_513(iParam0, iParam1));
}

float func_229(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	fVar1 = 1f;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		bVar2 = false;
		switch ((uParam0[iVar0 /*7*/])->f_1)
		{
			case 1:
				if (iParam1 == (uParam0[iVar0 /*7*/])->f_2)
				{
					return (uParam0[iVar0 /*7*/])->f_6;
				}
				break;
			case 2:
				if (__LIB_0__::func_356(iParam1) == (uParam0[iVar0 /*7*/])->f_3)
				{
					bVar2 = true;
				}
				break;
			case 3:
				fVar3 = BUILTIN::TO_FLOAT(func_516(iParam1, -915411861, 1, 0, 0));
				if ((uParam0[iVar0 /*7*/])->f_5 <= 0f)
				{
					fVar4 = (fVar3 + 1f);
				}
				else
				{
					fVar4 = (uParam0[iVar0 /*7*/])->f_5;
				}
				if (fVar3 <= fVar4 && fVar3 >= (uParam0[iVar0 /*7*/])->f_4)
				{
					bVar2 = true;
				}
				break;
			case 4:
				bVar2 = true;
				break;
			case 0:
				break;
		}
		if (bVar2)
		{
			fVar1 = (fVar1 * (uParam0[iVar0 /*7*/])->f_6);
		}
		iVar0++;
	}
	return fVar1;
}

bool func_235(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!__LIB_7__::func_623(uParam0->f_9))
		{
			return false;
		}
	}
	if (!__LIB_7__::func_624(uParam0->f_4))
	{
		return false;
	}
	if (!func_519(uParam0->f_4, iParam1, 0))
	{
		return false;
	}
	if (!func_249(uParam0->f_4))
	{
		return false;
	}
	if (__LIB_4__::func_807(0))
	{
		if (!__LIB_0__::func_144(uParam0->f_4, 0) || uParam0->f_11 <= 0)
		{
			return false;
		}
	}
	if (Global_1935689.f_10190 == 0 && !__LIB_7__::func_625())
	{
		__LIB_14__::func_936(uParam0->f_4);
	}
	return true;
}

void func_236(struct<11> Param0, var uParam11, var uParam12, var uParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_0__::func_144(Param0.f_4, 0))
	{
		iVar0 = __LIB_0__::func_776(Param0.f_4);
		uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_10200, Global_1935689.f_10194);
		uVar2 = uVar1;
		bVar3 = func_520(Param0.f_4);
		if (iParam14 > 0)
		{
			iVar4 = iParam14;
		}
		else
		{
			iVar4 = func_166(__LIB_8__::func_716(0), Param0.f_4, 0);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, uVar2, iVar0, iVar4, Param0.f_10, bVar3, joaat("COLOR_PURE_WHITE"));
		Global_1935689.f_10194++;
	}
}

void func_246(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_372(Param0.f_4, 1224357681);
	bVar1 = func_520(Param0.f_4);
	if (__LIB_0__::func_30(iVar0))
	{
		if (Global_1935689.f_19.f_1 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1935689.f_19.f_1)
			{
				if (iVar0 == Global_1935689.f_19.f_2[iVar2 /*2*/])
				{
					__LIB_15__::func_5(iVar2, 1);
					return;
				}
				iVar2++;
			}
			__LIB_18__::func_904(iVar0, bVar1);
		}
		else
		{
			__LIB_18__::func_904(iVar0, bVar1);
		}
	}
}

bool func_249(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY"):
			return false;
	}
	if (__LIB_4__::func_807(0) && Global_1914319.f_16855 == 2)
	{
		if (!func_531(iParam0))
		{
			return false;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
				return false;
		}
	}
	if (__LIB_0__::func_2() == 0)
	{
		if (__LIB_0__::func_192(iParam0, -805003139))
		{
			if (!UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
			{
				return false;
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("UPGRADE") && !(__LIB_0__::func_192(iParam0, -1540973036) || __LIB_0__::func_192(iParam0, 1192444843)))
	{
		return false;
	}
	return true;
}

int func_252(bool bParam0, bool bParam1)
{
	var uVar0;
	uVar0 = 1000;
	func_533(&uVar0, bParam1);
	return func_534(&uVar0, bParam0);
}

var func_253(bool bParam0)
{
	int iVar0;
	var uVar1;
	iVar0 = __LIB_8__::func_716(0);
	func_535(&iVar0, &uVar1, bParam0);
	return uVar1;
}

void func_254(var uParam0, var uParam1, int iParam2)
{
	struct<2> Var0[16];
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	if (iParam2 == 0)
	{
		if (*uParam0 > 0)
		{
			iVar36 = __LIB_0__::func_162(0);
			iVar33 = (*uParam0 - 1);
			while (iVar33 >= 0)
			{
				if (!__LIB_0__::func_236(uParam1, iVar33, uParam0->f_1, *uParam0))
				{
				}
				else if (!func_235(uParam1, iParam2, 1))
				{
				}
				else
				{
					iVar37 = uParam1->f_4;
					iVar38 = __LIB_1__::func_133(iVar37, iVar36);
					bVar35 = false;
					iVar34 = 0;
					while (iVar34 < 16)
					{
						if (iVar37 == Var0[iVar34 /*2*/])
						{
							bVar35 = true;
						}
						else
						{
							iVar34++;
						}
					}
					if (!bVar35)
					{
						iVar39 = 0;
						while (iVar39 < 16)
						{
							if (!__LIB_0__::func_144(Var0[iVar39 /*2*/], 0))
							{
								Var0[iVar39 /*2*/] = iVar37;
								Var0[iVar39 /*2*/].f_1 = iVar38;
							}
							else
							{
								if (iVar38 > Var0[iVar39 /*2*/].f_1)
								{
									__LIB_15__::func_6(&Var0, iVar39, &iVar37, &iVar38);
								}
								iVar39++;
							}
						}
					}
				}
				iVar33 = (iVar33 + -1);
			}
			func_538(&Var0);
		}
	}
}

void func_255(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	if (__LIB_0__::func_144(Param0.f_4, 0))
	{
		bVar0 = func_520(Param0.f_4);
		if (__LIB_15__::func_42())
		{
			if (!bVar0 || Param0.f_4 == joaat("PROVISION_OLD_BRASS_COMPASS"))
			{
				return;
			}
		}
		iVar1 = __LIB_0__::func_776(Param0.f_4);
		bVar2 = ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(Param0.f_4);
		vVar3 = { func_539(Param0.f_4) };
		iVar6 = __LIB_15__::func_7(Param0.f_4);
		if (iParam14 > 0)
		{
			iVar7 = iParam14;
		}
		else
		{
			iVar7 = func_166(__LIB_8__::func_716(0), Param0.f_4, 0);
		}
		__LIB_15__::func_8(joaat("INVENTORY_ITEM"), iVar1, &vVar3, bVar0, iVar7, bVar2, iVar6, joaat("COLOR_PURE_WHITE"));
		Global_1935689.f_19.f_203++;
	}
}

void func_256()
{
	if (__LIB_11__::func_524() != 2)
	{
		if (func_257(joaat("WEAPON_KIT_BINOCULARS"), 1, 0))
		{
			func_258(joaat("WEAPON_KIT_BINOCULARS"), 0);
		}
		if (func_257(joaat("WEAPON_KIT_CAMERA"), 1, 0))
		{
			func_258(joaat("WEAPON_KIT_CAMERA"), 0);
		}
		func_542();
		if (func_257(joaat("KIT_CAMP"), 1, 0))
		{
			func_258(joaat("KIT_CAMP"), 0);
		}
		else if (func_257(joaat("KIT_CAMP_SIMPLE"), 1, 0))
		{
			func_258(joaat("KIT_CAMP_SIMPLE"), 0);
		}
		func_543();
	}
}

bool func_257(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("AMMO"))
	{
		if (!func_544(iParam0, 1))
		{
			return false;
		}
	}
	return func_264(iParam0, 0, bParam2) >= iParam1;
}

void func_258(int iParam0, bool bParam1)
{
	struct<14> Var0;
	Var0.f_9 = -1591664384;
	Var0.f_4 = iParam0;
	if (!bParam1)
	{
		func_255(Var0, 1);
	}
	else
	{
		func_236(Var0, 0);
	}
}

void func_262(int iParam0, var uParam1)
{
	if (__LIB_15__::func_42())
	{
		func_547(1);
		if (__LIB_6__::func_126())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_548(), 75706034);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_548(), -31549930);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10218, true);
	}
	else if (__LIB_4__::func_807(0) || __LIB_15__::func_42())
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_10215))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10214, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"));
		}
	}
	else
	{
		func_549(iParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_548(), func_550(iParam0));
		func_551(iParam0, uParam1);
	}
}

int func_263(int iParam0)
{
	if (func_552())
	{
		return 0;
	}
	if (__LIB_0__::func_2() == 0)
	{
		return 0;
	}
	else if (!__LIB_4__::func_807(0) && !__LIB_15__::func_42())
	{
		if ((((__LIB_8__::func_959(iParam0, 0) == 1 || __LIB_0__::func_192(iParam0, 173360570)) || __LIB_0__::func_192(iParam0, 1291597743)) || __LIB_0__::func_192(iParam0, -928967997)) || __LIB_0__::func_192(iParam0, 747873593))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_264(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = __LIB_0__::func_937(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_553(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam2), iParam0, 0);
	return iVar2;
}

int func_267(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_6__::func_846(&iParam0);
	if (iVar0 != 0 && !__LIB_9__::func_503(__LIB_6__::func_846(&iParam0)))
	{
		if (!__LIB_7__::func_829(iVar0))
		{
			return -1994084079 /* GXTEntry: "The properties of this herb are not known yet." */;
		}
	}
	return __LIB_14__::func_452(iParam0);
}

int func_268(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_9__::func_808(iParam0))
	{
		if (iParam1 > 1)
		{
			iVar1 = __LIB_16__::func_65(iParam0);
			iVar2 = (iParam1 - iVar1);
			iVar3 = func_79(iParam0, 0);
			iVar4 = func_79(iParam0, 1);
			iVar0 = ((iVar4 * iVar1) + (iVar3 * iVar2));
		}
		else
		{
			iVar0 = func_79(iParam0, __LIB_16__::func_11(iParam0));
		}
	}
	else
	{
		iVar0 = (func_79(iParam0, 0) * iParam1);
	}
	return iVar0;
}

int func_270(int iParam0)
{
	struct<4> Var0;
	var uVar5;
	if (!DATAFILE::_0x7907969497EA92F5(Global_1935689.f_10225))
	{
		return 0;
	}
	Var0 = Global_1935689.f_10225;
	Var0.f_2 = 3;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_271(var uParam0)
{
	func_547(0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_548(), joaat("SATCHEL_PROMPT_OPEN"));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_562(), DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam0, "focusable"));
}

void func_285(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = joaat("COL_CC_INTRO");
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = joaat("COL_CC_INTRO_PRE");
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(39) || __LIB_1__::func_154(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_RC_DEBORAH");
				iVar13 = joaat("COL_DB_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = joaat("COL_DB_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = joaat("DINO_BONES");
			break;
		case 43:
			if (iParam3 == joaat("EXOTIC_STAGE_01"))
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_02"))
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_03"))
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_04"))
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_05"))
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = __LIB_1__::func_34(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(41) || __LIB_1__::func_154(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(49) || __LIB_1__::func_154(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_SCM_FRANCES");
				iVar13 = joaat("COL_RC_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = joaat("COL_RC_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = joaat("ROCK_CARVINGS");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = __LIB_1__::func_34(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_574(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (__LIB_0__::func_422(iParam0, iVar13, iVar14))
	{
	}
	if (__LIB_0__::func_423(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (__LIB_0__::func_424(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_578(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (__LIB_1__::func_165(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (__LIB_0__::func_938(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_298(int iParam0)
{
	int iVar0;
	iVar0 = joaat("APPLY_LOTION_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("APPLY_LOTION_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("APPLY_LOTION_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("APPLY_LOTION_BOTH_HANDS");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_301(int iParam0)
{
	int iVar0;
	iVar0 = 16939881;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_302(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = -45077177;
	switch (__LIB_3__::func_18())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_303(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 1700817728;
	switch (__LIB_3__::func_18())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_304(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_305(int iParam0)
{
	int iVar0;
	iVar0 = -680642132;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = -680642132;
			break;
		case 1:
			iVar0 = -267849149;
			break;
		case 3:
			iVar0 = 1759003815;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_306(int iParam0)
{
	int iVar0;
	iVar0 = 2105609037;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_307(int iParam0)
{
	int iVar0;
	iVar0 = 1964324114;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_308(int iParam0)
{
	int iVar0;
	iVar0 = -1530144981;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_309(int iParam0)
{
	int iVar0;
	iVar0 = -1074475556;
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_310(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_311(int iParam0)
{
	int iVar0;
	iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_312(int iParam0)
{
	int iVar0;
	iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_313(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (__LIB_0__::func_192(iParam0, 1573112293))
		{
			func_586(__LIB_6__::func_846(&iParam0), 1, 1);
		}
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_314(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_315(int iParam0)
{
	int iVar0;
	iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		__LIB_7__::func_810(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		__LIB_14__::func_457(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

bool func_324(int iParam0)
{
	if (__LIB_3__::func_104())
	{
		return false;
	}
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!func_257(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_362(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	Var0 = { __LIB_0__::func_523(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		__LIB_0__::func_524(&Var0, __LIB_1__::func_117(0));
	}
	if (!__LIB_0__::func_801(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!__LIB_0__::func_236(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (__LIB_0__::func_939(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	__LIB_17__::func_701(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

void func_363(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			func_640(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_410(iParam0, iParam1, 1, 0);
		}
	}
}

bool func_370(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && func_648(iParam0))
		{
			func_649(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

int func_376(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < __LIB_0__::func_419())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == __LIB_0__::func_352(iVar0))
		{
			if (func_257(__LIB_0__::func_420(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

int func_382()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_257(__LIB_0__::func_421(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_386(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_662(iParam0);
}

bool func_392(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
			if (iParam1 == 1248274121)
			{
				__LIB_1__::func_618(iVar0);
			}
		}
		if (!__LIB_1__::func_761(iParam0, &uVar1, 1, 0, 0))
		{
			func_649(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				__LIB_1__::func_708(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !__LIB_0__::func_181())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!__LIB_0__::func_216(iVar0))
				{
					__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					__LIB_1__::func_708(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = __LIB_0__::func_153(Global_35, 2, 0, 1);
				if ((((__LIB_0__::func_154(iVar7) && !Global_43891) && iVar7 != iVar0) && !__LIB_0__::func_293(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (__LIB_0__::func_154(iVar7) && __LIB_0__::func_293(24))
				{
					if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		__LIB_1__::func_240(480, 1);
	}
	return true;
}

bool func_394(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_258(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (__LIB_0__::func_154(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_257(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		__LIB_1__::func_424(__LIB_0__::func_941(iParam0), __LIB_0__::func_776(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
			{
				__LIB_1__::func_240(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_0__::func_708(0))
	{
		if (__LIB_0__::func_916(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return __LIB_3__::func_427(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_400(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_192(iParam0, -2017733358);
	if (func_678() < 3)
	{
		if (bVar0)
		{
			if (func_680(__LIB_0__::func_432(iParam0), iParam0))
			{
				__LIB_1__::func_424(79, __LIB_0__::func_776(__LIB_0__::func_432(iParam0)), 1);
			}
			else
			{
				__LIB_1__::func_424(78, __LIB_0__::func_776(__LIB_0__::func_432(iParam0)), 1);
			}
		}
		else
		{
			__LIB_1__::func_424(80, __LIB_0__::func_776(__LIB_0__::func_789(iParam0)), 1);
		}
	}
}

int func_402(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	iVar0 = func_683(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		__LIB_1__::func_113(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	__LIB_1__::func_430(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_403(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_285(39, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(39, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_434(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_285(41, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(41, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_435(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_285(49, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(49, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_436(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_285(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_686(1), 0, -1, 0);
			__LIB_0__::func_437(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_285(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_686(2), 0, -1, 0);
			__LIB_0__::func_437(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_285(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_686(4), 0, -1, 0);
			__LIB_0__::func_437(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_285(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_686(8), 0, -1, 0);
			__LIB_0__::func_437(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_285(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_686(16), 0, -1, 0);
			__LIB_0__::func_437(16);
			break;
	}
}

void func_404(int iParam0)
{
	if (__LIB_0__::func_942() == 1)
	{
		if (__LIB_1__::func_154(39))
		{
			__LIB_1__::func_240(342, 0);
		}
		else
		{
			__LIB_1__::func_240(343, 0);
			__LIB_0__::func_434(1);
		}
	}
	if (__LIB_0__::func_942() >= 30)
	{
		__LIB_1__::func_240(344, 0);
	}
	func_285(39, 0, 0, 0, 0, 0, -1, 0);
	__LIB_1__::func_450(39, 0, 0, __LIB_0__::func_942(), 30, 1, 0);
}

void func_405(int iParam0)
{
	if (__LIB_0__::func_438() == 1)
	{
		if (__LIB_1__::func_154(49))
		{
			__LIB_1__::func_240(409, 0);
		}
		else
		{
			__LIB_1__::func_240(410, 0);
			__LIB_0__::func_436(1);
		}
	}
	if (__LIB_0__::func_438() >= 10)
	{
		__LIB_1__::func_240(411, 0);
	}
	func_285(49, 0, 0, 0, 0, 0, -1, 0);
	__LIB_1__::func_450(49, 0, 0, __LIB_0__::func_438(), 10, 1, 0);
}

void func_406(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			func_690(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			__LIB_1__::func_408(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_690(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_690(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_690(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			func_690(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_285(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_408(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_1__::func_154(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				__LIB_1__::func_240(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				__LIB_1__::func_240(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				__LIB_1__::func_240(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				__LIB_1__::func_240(400, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 412399755))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = func_694(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_695(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_285(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				__LIB_1__::func_240(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				__LIB_1__::func_240(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				__LIB_1__::func_240(401, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 709057512))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = func_694(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_695(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_285(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				__LIB_1__::func_240(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				__LIB_1__::func_240(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				__LIB_1__::func_240(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				__LIB_1__::func_240(398, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1478961327))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = func_694(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_1__::func_696(48);
					}
					if (func_695(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_285(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_695(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_285(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				__LIB_1__::func_240(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				__LIB_1__::func_240(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				__LIB_1__::func_240(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				__LIB_1__::func_240(406, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1238404098))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = func_694(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_695(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_285(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				__LIB_1__::func_240(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				__LIB_1__::func_240(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				__LIB_1__::func_240(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				__LIB_1__::func_240(403, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1160548794))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = func_694(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_695(iParam0) < __LIB_0__::func_439(iParam0))
					{
						func_285(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_410(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_257(__LIB_1__::func_35(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_700(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_701(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_411(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_402(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_402(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_402(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_402(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_402(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_402(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_402(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COIN"):
			func_402(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_402(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_402(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_402(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_402(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_402(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!__LIB_1__::func_202())
			{
				func_402(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_402(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_402(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_402(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_402(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_402(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_402(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_402(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_402(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_402(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_402(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_402(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_402(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_414(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = __LIB_0__::func_153(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = __LIB_0__::func_153(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (__LIB_0__::func_236(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						__LIB_17__::func_701(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_434(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_62(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			__LIB_1__::func_775(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_386(24);
		if (func_414(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_435(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_714(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_714(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_714(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_714(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_714(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_714(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_714(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_714(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_714(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_714(-1, iParam0);
	}
}

bool func_448()
{
	if ((Global_1935689.f_10195 != (Global_1935689.f_19.f_203 - 1) || func_166(__LIB_8__::func_716(0), Global_1935689.f_10190, 0) > 0) || Global_1935689.f_10195 == 15)
	{
		return true;
	}
	return false;
}

int func_449(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0[15];
	int iVar16;
	int iVar17;
	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, __LIB_12__::func_154(iParam2));
	iVar16 = 0;
	while (iVar16 < 15)
	{
		if ((__LIB_0__::func_144(uVar0[iVar16], 0) && !__LIB_0__::func_192(uVar0[iVar16], 1286414894)) && !uVar0[iVar16] == iParam2)
		{
			func_152(uVar0[iVar16], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == uVar0[iVar16])
				{
					iVar17++;
				}
			}
			else
			{
				iVar17++;
			}
		}
		iVar16++;
	}
	func_157(__LIB_0__::func_708(0), 1, 0);
	return iVar17;
}

int func_455(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	iParam1 = __LIB_9__::func_348(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	iVar0 = __LIB_8__::func_716(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_456(&iVar0, iParam0, &iParam1, bParam3, iParam4);
	}
	return iParam1;
}

int func_456(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(*iParam0);
	iVar1 = __LIB_7__::func_601(iVar0, iParam1);
	if (func_729(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var2 = { __LIB_0__::func_777(iParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var2))
		{
			STATS::_0xBD861AE8A5181ED7(&Var2, *iParam2);
		}
		if (__LIB_7__::func_599(iParam1))
		{
			__LIB_7__::func_594(*iParam0, iParam1, *iParam2);
		}
		else
		{
			__LIB_7__::func_594(*iParam0, iParam1, *iParam2);
			__LIB_9__::func_348(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - __LIB_7__::func_601(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

int func_457(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_264(iParam0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!func_149(iParam0, iVar1, bParam2, iParam3, 0))
		{
			return 0;
		}
	}
	if (iVar2 > 0)
	{
		if (!__LIB_9__::func_988(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		if (!bParam2)
		{
			__LIB_0__::func_45("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

int func_461(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = func_264(iParam0, bParam1, 0);
	if (__LIB_0__::func_27(Global_1935689.f_10186, 1))
	{
		iVar0 = __LIB_0__::func_398(__LIB_0__::func_97(0));
		iVar1 = (iVar1 + __LIB_7__::func_601(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar0), iParam0));
	}
	if (__LIB_0__::func_27(Global_1935689.f_10186, 2))
	{
		iVar0 = __LIB_0__::func_398(__LIB_0__::func_97(1));
		iVar1 = (iVar1 + __LIB_7__::func_601(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar0), iParam0));
	}
	if (__LIB_0__::func_27(Global_1935689.f_10186, 4))
	{
		iVar0 = __LIB_0__::func_398(__LIB_0__::func_97(6));
		iVar1 = (iVar1 + __LIB_7__::func_601(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar0), iParam0));
	}
	return iVar1;
}

void func_493(int iParam0, bool bParam1)
{
	struct<14> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_4 = -854348463;
	func_749(iParam0, Var0, bParam1, 0);
}

void func_494(int iParam0, bool bParam1)
{
	struct<14> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_4 = -1823706425;
	func_749(iParam0, Var0, bParam1, 0);
}

void func_495(int iParam0, bool bParam1)
{
	struct<14> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_1 = 1835126290;
	Var0.f_4 = 81053684;
	func_749(iParam0, Var0, bParam1, 0);
}

void func_496(int iParam0, bool bParam1)
{
	struct<14> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_4 = -525676072;
	func_749(iParam0, Var0, bParam1, 0);
}

bool func_502(int iParam0, int iParam1, float fParam2)
{
	if (!__LIB_1__::func_917(iParam1))
	{
		return false;
	}
	if (__LIB_0__::func_94(iParam0, __LIB_4__::func_846(iParam1), 1) < fParam2)
	{
		return true;
	}
	return false;
}

void func_503()
{
	int iVar0;
	iVar0 = func_507();
	if (func_507() == 822208792)
	{
		iVar0 = 0;
	}
	if (__LIB_4__::func_807(0))
	{
		if (__LIB_11__::func_524() == 2)
		{
			iVar0 = -693134279;
		}
		else
		{
			iVar0 = -182626652;
		}
	}
	if (__LIB_15__::func_42())
	{
		iVar0 = -2074770370;
	}
	__LIB_12__::func_206(iVar0);
}

void func_504(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	uVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(uParam0, Global_1935689.f_10166);
	bVar1 = __LIB_14__::func_850(iParam1);
	iVar2 = iParam1;
	uVar3 = uVar0;
	if (bVar1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_10202, Global_1935689.f_10166);
		Global_1935689.f_10167 = Global_1935689.f_10166;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(8, uVar3, sParam2, sParam3, iVar2, bVar1);
	Global_1935689.f_10168[Global_1935689.f_10166] = iParam1;
	Global_1935689.f_10166++;
}

void func_505(var uParam0)
{
	if (__LIB_15__::func_695())
	{
		func_504(uParam0, -283002878, "Horse", joaat("SATCHEL_NAV_HORSE"));
	}
}

void func_506(var uParam0)
{
	if (__LIB_4__::func_807(0))
	{
		if (__LIB_11__::func_524() == 2)
		{
			func_504(uParam0, -693134279, "Send", joaat("SATCHEL_NAV_SEND"));
		}
		else
		{
			func_504(uParam0, -182626652, "Sell", joaat("SATCHEL_NAV_SELL"));
		}
	}
	else if (__LIB_15__::func_42())
	{
		func_504(uParam0, -2074770370, "Donations", joaat("SATCHEL_NAV_DONATE"));
	}
}

int func_507()
{
	return Global_1935689.f_18;
}

int func_512(int iParam0, int iParam1)
{
	return func_754(Global_35, iParam0, iParam1);
}

int func_513(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = __LIB_0__::func_398(7);
	}
	else
	{
		iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	}
	return func_754(iVar0, iParam0, iParam1);
}

int func_516(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	if (__LIB_0__::func_192(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar49 = (iVar49 + Var0[iVar32 /*2*/].f_1);
					Jump @229; //curOff = 201
				}
				else if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = __LIB_0__::func_372(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = __LIB_0__::func_374(iVar62, iVar61);
					if (__LIB_0__::func_144(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_516(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_516(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_519(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bVar0 = false;
	if (((iParam1 == 0 || iParam1 == -2074770370) || bParam2) || __LIB_4__::func_807(0))
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!__LIB_0__::func_144(iParam0, 0) || iParam0 == joaat("CUSTOM_SATCHEL")) || iParam0 == joaat("KIT_WARDROBE"))
		{
			return false;
		}
	}
	if (!bVar0 && __LIB_7__::func_676(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -283002878:
		case 0:
			if (!__LIB_4__::func_807(0))
			{
				if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
				{
					return true;
				}
				if ((((((((((func_519(iParam0, -1559802791, 1) || func_519(iParam0, -1268291907, 1)) || func_519(iParam0, -96974025, 1)) || func_519(iParam0, -1666604090, 1)) || func_519(iParam0, 1561961676, 1)) || func_519(iParam0, -156634416, 1)) || func_519(iParam0, 1061777683, 1)) || func_519(iParam0, -2074770370, 1)) || func_519(iParam0, -693134279, 1)) || func_519(iParam0, -182626652, 1)) || __LIB_7__::func_630(iParam0))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			break;
		case -1559802791:
			return __LIB_0__::func_192(iParam0, 1422457563);
		case -1268291907:
			return __LIB_0__::func_192(iParam0, 1360707454);
		case -96974025:
			return __LIB_0__::func_192(iParam0, 1009210113);
		case -1666604090:
			return __LIB_0__::func_192(iParam0, -193035453);
		case 1561961676:
			return __LIB_0__::func_192(iParam0, -111938901);
		case -156634416:
			return __LIB_0__::func_192(iParam0, -928967997);
		case 1061777683:
			return __LIB_0__::func_192(iParam0, 747873593);
		case -2074770370:
			if (Global_1935689.f_17 == 1 || Global_1935689.f_17 == 2)
			{
				return __LIB_7__::func_631(iParam0, iParam1);
			}
			else if (__LIB_0__::func_372(iParam0, -949239683) == -1337515701 && iParam0 != joaat("KIT_PLAYER_POCKETWATCH"))
			{
				return true;
			}
			else
			{
				return __LIB_0__::func_192(iParam0, -111938901);
			}
			break;
		case -693134279:
			return __LIB_0__::func_774(iParam0, 8388608);
		case -182626652:
			if (__LIB_8__::func_127(iParam0, Global_1914319.f_16855.f_1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_520(int iParam0)
{
	if (__LIB_14__::func_851())
	{
		return func_519(iParam0, -2074770370, 0);
	}
	else if (__LIB_6__::func_126())
	{
		if (__LIB_0__::func_192(iParam0, 96549393))
		{
			return false;
		}
		if (__LIB_0__::func_192(iParam0, -111938901) || __LIB_0__::func_372(iParam0, -949239683) == -1337515701)
		{
			return true;
		}
		if (__LIB_0__::func_192(iParam0, -121341956))
		{
			return true;
		}
		return false;
	}
	else if (__LIB_7__::func_775())
	{
		if ((((((((__LIB_0__::func_192(iParam0, 1765172170) || __LIB_0__::func_192(iParam0, -458578204)) || __LIB_0__::func_192(iParam0, -1919515848)) || __LIB_0__::func_192(iParam0, 1443104131)) || __LIB_0__::func_192(iParam0, 1490540191)) || __LIB_0__::func_192(iParam0, 1573112293)) || __LIB_0__::func_192(iParam0, 1939071949)) || __LIB_0__::func_192(iParam0, 1174751405)) || __LIB_0__::func_192(iParam0, 845883585))
		{
			return false;
		}
		if (((!__LIB_0__::func_192(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) && !__LIB_0__::func_192(iParam0, -839724752)) && !__LIB_0__::func_192(iParam0, -1457797660)) && !__LIB_0__::func_192(iParam0, 1286414894))
		{
			return false;
		}
		if (__LIB_14__::func_852(iParam0) == 0)
		{
			return false;
		}
	}
	if (__LIB_4__::func_807(0))
	{
		if (Global_1914319.f_16855 == 2)
		{
			return true;
		}
		else if (!__LIB_8__::func_127(iParam0, Global_1914319.f_16855.f_1))
		{
			return false;
		}
	}
	else if (!__LIB_15__::func_42())
	{
		if (__LIB_0__::func_192(iParam0, -1242251796))
		{
			return false;
		}
	}
	if (__LIB_0__::func_192(iParam0, 949916894) || iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		if (!__LIB_15__::func_771(iParam0))
		{
			return false;
		}
	}
	if (!__LIB_4__::func_807(0))
	{
		if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), iParam0, __LIB_4__::func_807(0)))
		{
			return false;
		}
	}
	return true;
}

int func_531(int iParam0)
{
	int iVar0;
	if (iParam0 != 0)
	{
		if (__LIB_0__::func_774(iParam0, 8388608))
		{
			iVar0 = __LIB_1__::func_35(__LIB_7__::func_635(iParam0), 10);
			if (iVar0 != 0 && func_257(iVar0, 1, 0))
			{
				Global_1901328.f_94 = 1;
				return func_770(__LIB_7__::func_635(iParam0), iParam0);
			}
			else if (iParam0 == __LIB_1__::func_35(__LIB_7__::func_636(iParam0), 5))
			{
				if (!__LIB_1__::func_187(39))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else if (iParam0 == __LIB_1__::func_35(__LIB_7__::func_637(iParam0), 5))
			{
				if (!__LIB_1__::func_187(49))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else if (__LIB_7__::func_638(iParam0))
			{
				if (!__LIB_1__::func_187(41))
				{
					return 0;
				}
				else
				{
					return func_776(__LIB_7__::func_639(iParam0), 5, 0);
				}
			}
			else if (__LIB_7__::func_640(iParam0))
			{
				if (func_257(joaat("DOCUMENT_RARE_ORCHID_ORDER_1"), 1, 0))
				{
					if (!__LIB_1__::func_187(48))
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (__LIB_7__::func_641(iParam0))
			{
				if (!__LIB_1__::func_187(38))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else if (iParam0 == joaat("DOCUMENT_RARE_ORCHID_ORDER_1"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_533(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_398(__LIB_0__::func_97(0));
	iVar1 = __LIB_0__::func_398(__LIB_0__::func_97(1));
	iVar2 = __LIB_0__::func_398(__LIB_0__::func_97(6));
	if (bParam1 || __LIB_0__::func_27(Global_1935689.f_10186, 1))
	{
		func_780(&iVar0, uParam0);
	}
	if (bParam1 || __LIB_0__::func_27(Global_1935689.f_10186, 2))
	{
		func_780(&iVar1, uParam0);
	}
	if (bParam1 || __LIB_0__::func_27(Global_1935689.f_10186, 4))
	{
		func_780(&iVar2, uParam0);
	}
}

int func_534(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = __LIB_0__::func_398(__LIB_0__::func_97(0));
	iVar1 = __LIB_0__::func_398(__LIB_0__::func_97(1));
	iVar2 = __LIB_0__::func_398(__LIB_0__::func_97(6));
	iVar3 = 0;
	while (iVar3 < 999)
	{
		if (__LIB_0__::func_144((*uParam0)[iVar3], 0))
		{
			if (__LIB_0__::func_27(Global_1935689.f_10186, 1))
			{
				iVar4 = INVENTORY::_0xE787F05DFC977BDE(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar0), (*uParam0)[iVar3], 0);
			}
			if (__LIB_0__::func_27(Global_1935689.f_10186, 2))
			{
				iVar4 = (iVar4 + INVENTORY::_0xE787F05DFC977BDE(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar1), (*uParam0)[iVar3], 0));
			}
			if (__LIB_0__::func_27(Global_1935689.f_10186, 4))
			{
				iVar4 = (iVar4 + INVENTORY::_0xE787F05DFC977BDE(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar2), (*uParam0)[iVar3], 0));
			}
			if (bParam1 && iVar4 > 0)
			{
				func_781((*uParam0)[iVar3], iVar4, 0);
			}
			iVar5++;
		}
		iVar3++;
	}
	return iVar5;
}

void func_535(int iParam0, var uParam1, bool bParam2)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<14> Var18;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_1 = 1084182731;
	iVar14 = -1;
	iVar17 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(*iParam0);
	Var18.f_9 = -1591664384;
	if (__LIB_7__::func_643(iVar17, &Var0, &iVar14, &iVar15))
	{
		iVar16 = 0;
		iVar16 = 0;
		while (iVar16 < iVar15)
		{
			if (__LIB_0__::func_236(&Var18, iVar16, iVar14, iVar15))
			{
				if (__LIB_0__::func_144(Var18.f_4, 0) && Var18.f_4 != joaat("CUSTOM_SATCHEL"))
				{
					*uParam1++;
					if (bParam2 && func_249(Var18.f_4))
					{
						func_255(Var18, 0);
					}
				}
			}
			iVar16++;
		}
		__LIB_17__::func_701(iVar14);
	}
}

void func_538(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_781((*iParam0)[iVar0 /*2*/], func_166(__LIB_8__::func_716(0), (*iParam0)[iVar0 /*2*/], 0), 0);
		iVar0++;
	}
}

Vector3 func_539(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_552(uParam0, &vVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		vVar0.f_1 = joaat("INVENTORY_ITEMS");
		vVar0.x = joaat("_PLACEHOLDER");
	}
	return vVar0;
}

void func_542()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (func_257(joaat("KIT_CAMP"), 1, 0))
	{
		if (__LIB_15__::func_83())
		{
			iVar0 = __LIB_0__::func_162(0);
			bVar1 = INVENTORY::_0x3D10D7179D7034AF(iVar0, joaat("KIT_CAMP"), __LIB_4__::func_807(0));
			func_149(joaat("KIT_CAMP"), 1, 1, -142743235, 0);
			func_152(joaat("KIT_CAMP_SIMPLE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			Global_1935496.f_125 = 0;
			Global_1935496.f_126 = 1;
			if (bVar1)
			{
				INVENTORY::_0x766315A564594401(iVar0, joaat("KIT_CAMP_SIMPLE"), 0);
			}
			else
			{
				INVENTORY::_0x6A564540FAC12211(iVar0, joaat("KIT_CAMP_SIMPLE"));
			}
		}
	}
	else if (func_257(joaat("KIT_CAMP_SIMPLE"), 1, 0))
	{
		if (!__LIB_15__::func_83())
		{
			iVar2 = __LIB_0__::func_162(0);
			bVar3 = INVENTORY::_0x3D10D7179D7034AF(iVar2, joaat("KIT_CAMP_SIMPLE"), __LIB_4__::func_807(0));
			func_149(joaat("KIT_CAMP_SIMPLE"), 1, 1, -142743235, 0);
			func_152(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			Global_1935496.f_125 = 1;
			Global_1935496.f_126 = 0;
			if (bVar3)
			{
				INVENTORY::_0x766315A564594401(iVar2, joaat("KIT_CAMP"), 0);
			}
			else
			{
				INVENTORY::_0x6A564540FAC12211(iVar2, joaat("KIT_CAMP"));
			}
		}
	}
}

void func_543()
{
	struct<14> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_1 = 1835126290;
	Var0.f_4 = 81053684;
	func_791(&Var0, 0, 1, 0);
}

bool func_544(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_937(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				__LIB_17__::func_701(iVar1);
				return true;
			}
			iVar3++;
		}
		__LIB_17__::func_701(iVar1);
	}
	return false;
}

void func_547(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10218, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10217, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10214, !bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10215, !bParam0);
}

var func_548()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_10218))
	{
		return Global_1935689.f_10216;
	}
	return Global_1935689.f_10213;
}

void func_549(int iParam0)
{
	if (__LIB_0__::func_357(iParam0) == -854348463)
	{
		if (iParam0 == joaat("PROVISION_RCM_POCKET_WATCH"))
		{
			func_792();
		}
		else
		{
			func_547(0);
		}
	}
	else if (__LIB_0__::func_372(iParam0, 1224357681) == joaat("CI_TAG_FOLDER_KIT_KEEPSAKES"))
	{
		switch (iParam0)
		{
			case joaat("PROVISION_PEARSONS_NAVAL_COMPASS"):
			case joaat("PROVISION_MOLLYS_POCKET_MIRROR"):
			case joaat("PROVISION_BEAUS_GIFT_1"):
				func_547(0);
				break;
			default:
				func_792();
				break;
		}
	}
	else if ((((((((((((__LIB_0__::func_192(iParam0, 1101678925) || __LIB_0__::func_192(iParam0, 1686880204)) || __LIB_0__::func_192(iParam0, 173360570)) || __LIB_0__::func_192(iParam0, -121341956)) || __LIB_0__::func_192(iParam0, 2000026003)) || __LIB_0__::func_192(iParam0, -1540973036)) || __LIB_0__::func_192(iParam0, 1192444843)) || __LIB_0__::func_192(iParam0, -1242251796)) || __LIB_0__::func_192(iParam0, 2084895747)) || __LIB_0__::func_372(iParam0, 1224357681) == joaat("CI_TAG_FOLDER_KIT_KEYCHAIN")) || (__LIB_9__::func_808(iParam0) && !__LIB_0__::func_192(iParam0, 316290104))) || iParam0 == joaat("CONSUMABLE_COFFEE_GNDS_REG")) || iParam0 == joaat("KIT_GUN_OIL"))
	{
		func_792();
	}
	else if ((__LIB_0__::func_357(iParam0) == 1802292908 && __LIB_0__::func_372(iParam0, -949239683) == 0) && !iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		func_792();
	}
	else if (__LIB_9__::func_808(iParam0))
	{
		if (__LIB_0__::func_192(iParam0, 316290104))
		{
			func_547(1);
		}
		else
		{
			func_547(1);
		}
	}
	else if (__LIB_0__::func_192(iParam0, 316290104) || func_159(iParam0, 1, 0))
	{
		func_547(1);
	}
	else
	{
		func_547(0);
	}
}

int func_550(int iParam0)
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_10218))
	{
		if (__LIB_0__::func_192(iParam0, 316290104))
		{
			return joaat("SATCHEL_PROMPT_BREAKDOWN");
		}
		else if (func_159(iParam0, 1, 0))
		{
			return -2086473757;
		}
	}
	else if (__LIB_0__::func_192(iParam0, 1147021565))
	{
		if (__LIB_0__::func_192(iParam0, -1242251796))
		{
			return -31549930;
		}
		switch (__LIB_0__::func_372(iParam0, -949239683))
		{
			case -273840653:
			case 238865292:
			case 999632878:
			case 1130235258:
			case 1177617310:
				return -1925143884;
			case -1915958659:
			case -809056541:
			case 89124942:
			case 1451036371:
			case 1859991422:
			case 1891031775:
				return 356040554;
			case -1919515848:
			case -262371497:
			case 845883585:
			case 1174751405:
			case 1443104131:
				return -31549930;
		}
	}
	else if (__LIB_0__::func_372(iParam0, 1224357681) == joaat("CI_TAG_FOLDER_KIT_WATCHES"))
	{
		return -1948542959;
	}
	return -31549930;
}

void func_551(int iParam0, var uParam1)
{
	bool bVar0;
	struct<10> Var1;
	struct<4> Var15;
	bVar0 = true;
	switch (__LIB_0__::func_357(iParam0))
	{
		case -1793506273:
		case 235313564:
		case 320213863:
			if (((!__LIB_0__::func_192(iParam0, 949916894) && !__LIB_0__::func_192(iParam0, 747873593)) && !__LIB_0__::func_372(iParam0, -949239683) == -1337515701) && !__LIB_0__::func_192(iParam0, 1147021565))
			{
				bVar0 = false;
			}
			break;
		case -1691255343:
			if (iParam0 == joaat("PROVISION_LIGHTNING_CONDUCTOR") || iParam0 == joaat("KIT_GUN_OIL"))
			{
				bVar0 = false;
			}
			break;
	}
	if (__LIB_0__::func_356(iParam0) == joaat("MONEY"))
	{
		bVar0 = false;
	}
	if (__LIB_0__::func_372(iParam0, -949239683) == -1337515701)
	{
		Var1.f_9 = -1591664384;
		Var15 = { __LIB_1__::func_615(iParam0, 0, 0) };
		if (__LIB_0__::func_814(Var15, -1162387149, &Var1, 0))
		{
			if (Var1.f_4 == iParam0)
			{
				bVar0 = false;
			}
		}
	}
	if (__LIB_0__::func_192(iParam0, 316290104))
	{
		bVar0 = __LIB_0__::func_708(0);
		if (!bVar0)
		{
		}
	}
	else if (func_159(iParam0, 1, 0))
	{
		if (__LIB_0__::func_2() == 0 || !func_794())
		{
			bVar0 = false;
		}
		else
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
		}
	}
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"))
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_562(), bVar0);
}

bool func_552()
{
	return Global_1935689.f_12;
}

int func_553(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { __LIB_0__::func_523(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		__LIB_0__::func_524(&Var0, __LIB_1__::func_117(0));
	}
	if (!__LIB_0__::func_801(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	__LIB_17__::func_701(iVar14);
	return uVar15;
}

var func_562()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_10218))
	{
		return Global_1935689.f_10217;
	}
	return Global_1935689.f_10214;
}

char* func_574(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_382() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", __LIB_0__::func_964(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_802(), 12);
			}
			break;
		case joaat("DINO_BONES"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (__LIB_0__::func_942() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", __LIB_0__::func_965(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", __LIB_0__::func_942(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", __LIB_0__::func_966(), 13);
			}
			break;
		case joaat("ROCK_CARVINGS"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (__LIB_0__::func_438() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", __LIB_0__::func_528(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", __LIB_0__::func_438(), 10);
			}
			break;
		case joaat("TAXIDERMY"):
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, __LIB_1__::func_34(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_578(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = __LIB_0__::func_421(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_257(iVar2, 1, 0) || __LIB_0__::func_530(__LIB_0__::func_529(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_426(__LIB_0__::func_421(iVar0))), __LIB_0__::func_426(__LIB_0__::func_421(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = __LIB_0__::func_942() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = __LIB_0__::func_965() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = __LIB_1__::func_35(iParam3, __LIB_0__::func_532(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_695(iVar2) - iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
				else
				{
					bVar1 = func_695(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_695(iVar2) + iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
			}
			else
			{
				bVar1 = func_695(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_534(iVar2)), __LIB_0__::func_534(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (__LIB_0__::func_314(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_535(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), __LIB_0__::func_535(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = __LIB_0__::func_438() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = __LIB_0__::func_528() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = __LIB_1__::func_35(iParam3, __LIB_0__::func_532(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_695(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_816(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_816(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_1__::func_72(iVar2)), __LIB_1__::func_72(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

void func_586(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_3__::func_960(iParam0);
	iVar1 = __LIB_6__::func_846(&iVar0);
	if (iVar1 != iParam0)
	{
		__LIB_4__::func_109(iVar1, 4);
	}
	if (!__LIB_3__::func_959(iParam0))
	{
		return;
	}
	if (__LIB_7__::func_829(iParam0))
	{
		return;
	}
	__LIB_4__::func_109(iParam0, 4);
	__LIB_7__::func_832(iParam0, bParam1);
	if (!__LIB_6__::func_115(iParam0))
	{
		func_839(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(1, 6);
		}
	}
}

void func_640(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_154(43))
		{
			if (__LIB_0__::func_192(iParam0, 412399755))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_01"));
				if (__LIB_0__::func_944() == 0)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = func_871(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_695(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_285(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (__LIB_1__::func_154(44))
		{
			if (__LIB_0__::func_192(iParam0, 709057512))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_02"));
				if (__LIB_0__::func_944() == 1)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = func_871(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_695(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_285(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (__LIB_0__::func_192(iParam0, -1478961327))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_03"));
				if (__LIB_0__::func_944() == 2)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = func_871(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_695(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_285(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (__LIB_0__::func_192(iParam0, -1238404098))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_04"));
				if (__LIB_0__::func_944() == 3)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = func_871(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_695(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_285(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (__LIB_0__::func_192(iParam0, 1160548794))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_05"));
				if (__LIB_0__::func_944() == 4)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = func_871(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_695(iParam0) < __LIB_0__::func_439(iParam0))
						{
							func_285(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_648(int iParam0)
{
	var uVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (__LIB_0__::func_774(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return __LIB_1__::func_761(iParam0, &uVar0, 1, 0, 0);
	}
	return func_257(iParam0, 1, 0);
}

void func_649(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (__LIB_0__::func_356(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !__LIB_0__::func_214(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_264(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				__LIB_1__::func_158(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_662(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			__LIB_1__::func_240(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			__LIB_1__::func_240(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (__LIB_0__::func_181())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_257(iVar0, 1, 0))
					{
						__LIB_3__::func_427(iVar0, 1, 752097756);
					}
					__LIB_1__::func_775(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!func_257(1013902307, 1, 0))
				{
					__LIB_3__::func_427(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!func_257(1013902307, 1, 0))
				{
					__LIB_3__::func_427(1013902307, 1, 752097756);
				}
				if (!func_257(142640135, 1, 0))
				{
					__LIB_3__::func_427(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!func_257(786809402, 1, 0))
				{
					__LIB_3__::func_427(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!func_257(786809402, 1, 0))
				{
					__LIB_3__::func_427(786809402, 1, 752097756);
				}
				if (!func_257(-518019409, 1, 0))
				{
					__LIB_3__::func_427(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_892();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

int func_678()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_257(__LIB_0__::func_547(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_680(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (iParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				iVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (iParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				iVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (iParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (iParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_257(iVar0, 1, 0) && func_257(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_683(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_257(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = Var1.f_1[iVar24];
			if (__LIB_0__::func_144(iVar25, 0) && __LIB_0__::func_192(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

char* func_686(int iParam0)
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
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_695(iVar9);
	iVar2 = func_695(iVar10);
	iVar3 = func_695(iVar11);
	iVar5 = __LIB_0__::func_439(iVar9);
	iVar6 = __LIB_0__::func_439(iVar10);
	iVar7 = __LIB_0__::func_439(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_695(iVar12);
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

bool func_690(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_816(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_816(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_816(iVar0))
		{
			*iParam2++;
		}
		if (func_816(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_816(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_816(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_816(iVar0))
		{
			*iParam2++;
		}
		if (func_816(iVar1))
		{
			*iParam2++;
		}
		if (func_816(iVar0) && func_816(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_816(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_816(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_816(iVar0))
		{
			*iParam2++;
		}
		if (func_816(iVar1))
		{
			*iParam2++;
		}
		if (func_816(iVar2))
		{
			*iParam2++;
		}
		if ((func_816(iVar0) && func_816(iVar1)) && func_816(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_816(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_816(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_816(iVar0))
		{
			*iParam2++;
		}
		if (func_816(iVar1))
		{
			*iParam2++;
		}
		if (func_816(iVar2))
		{
			*iParam2++;
		}
		if (func_816(iVar3))
		{
			*iParam2++;
		}
		if (((func_816(iVar0) && func_816(iVar1)) && func_816(iVar2)) && func_816(iVar3))
		{
			return true;
		}
	}
	return false;
}

int func_694(int iParam0, int iParam1, int iParam2)
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
	switch (iParam2)
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
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_695(iVar9);
	iVar2 = func_695(iVar10);
	iVar3 = func_695(iVar11);
	iVar5 = __LIB_0__::func_439(iVar9);
	iVar6 = __LIB_0__::func_439(iVar10);
	iVar7 = __LIB_0__::func_439(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_695(iVar12);
		iVar8 = __LIB_0__::func_439(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
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

int func_695(int iParam0)
{
	int iVar0;
	if (func_257(iParam0, 1, 0))
	{
		iVar0 = func_264(iParam0, 0, 0);
	}
	return iVar0;
}

void func_700(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		func_690(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_285(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_701(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (func_690(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_285(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_285(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

void func_714(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_929(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_929(iParam1, 1);
		func_930(iParam0);
	}
}

int func_729(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0);
	if (__LIB_1__::func_16(iParam0))
	{
		iVar1 = __LIB_0__::func_402(iParam0);
		if (__LIB_0__::func_144(iParam1, 0))
		{
			if (__LIB_7__::func_599(iParam1))
			{
				__LIB_7__::func_681(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_938(iVar0, iParam1, iParam2, bParam3, iParam4);
}

void func_749(int iParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	iVar0 = -1;
	Var3.f_9 = -1591664384;
	if (__LIB_0__::func_801(&uParam1, &iVar0, &iVar1, bParam16))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (__LIB_0__::func_236(&Var3, iVar2, iVar0, iVar1))
			{
				__LIB_16__::func_258(iParam0, Var3.f_4, bParam15);
			}
			iVar2++;
		}
	}
	__LIB_17__::func_701(iVar0);
}

int func_754(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				__LIB_2__::func_998(iVar9, &uVar6, &uVar7, &iVar5, &uVar8);
				__LIB_2__::func_999(&iVar0, iVar9, iVar5, uVar6);
			}
			else
			{
				iVar0 = __LIB_5__::func_797(iVar2);
			}
			if (iVar0 == iParam1)
			{
				*iParam2 = iVar2;
				ITEMSET::DESTROY_ITEMSET(iVar1);
				return 1;
			}
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return 0;
}

bool func_770(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_34(iParam0, 20);
	if (iVar0 == 5)
	{
		if ((((func_776(iParam0, 5, 0) && func_776(iParam0, 6, 0)) && func_776(iParam0, 7, 0)) && func_776(iParam0, 8, 0)) && func_776(iParam0, 9, 0))
		{
			return __LIB_0__::func_774(iParam1, 8388608);
		}
	}
	else if (iVar0 == 4)
	{
		if (((func_776(iParam0, 5, 0) && func_776(iParam0, 6, 0)) && func_776(iParam0, 7, 0)) && func_776(iParam0, 8, 0))
		{
			return __LIB_0__::func_774(iParam1, 8388608);
		}
	}
	else if (iVar0 == 3)
	{
		if ((func_776(iParam0, 5, 0) && func_776(iParam0, 6, 0)) && func_776(iParam0, 7, 0))
		{
			return __LIB_0__::func_774(iParam1, 8388608);
		}
	}
	else if (iVar0 == 2)
	{
		if (func_776(iParam0, 5, 0) && func_776(iParam0, 6, 0))
		{
			return __LIB_0__::func_774(iParam1, 8388608);
		}
	}
	return false;
}

int func_776(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = __LIB_1__::func_35(iParam0, iParam1);
	if ((((((((((((((((((((iVar0 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT") || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT")) || iVar0 == joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_PERCH_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"))
	{
		if (func_257(iVar0, 1, 0))
		{
			if (bParam2)
			{
				Global_1901328.f_94 = 1;
				func_149(iVar0, 1, 0, -142743235, 0);
			}
			return 1;
		}
	}
	else if ((((((((((iVar0 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT") || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT")) || iVar0 == joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_MUSKIE_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"))
	{
		if (func_958(iVar0, bParam2))
		{
			return 1;
		}
	}
	return 0;
}

void func_780(int iParam0, var uParam1)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<10> Var19;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1.f_13 = -1;
	Var1.f_1 = 1084182731;
	iVar15 = -1;
	iVar18 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(*iParam0);
	Var19.f_9 = -1591664384;
	if (__LIB_7__::func_643(iVar18, &Var1, &iVar15, &iVar16))
	{
		iVar17 = 0;
		iVar17 = 0;
		while (iVar17 < iVar16)
		{
			if (__LIB_0__::func_236(&Var19, iVar17, iVar15, iVar16))
			{
				if (__LIB_0__::func_144(Var19.f_4, 0) && Var19.f_4 != joaat("CUSTOM_SATCHEL"))
				{
					if (func_249(Var19.f_4))
					{
						iVar0 = 0;
						while (iVar0 < 999)
						{
							if ((*uParam1)[iVar0] == Var19.f_4 || !__LIB_0__::func_144((*uParam1)[iVar0], 0))
							{
							}
							else
							{
								iVar0++;
							}
						}
						if (!__LIB_0__::func_144(Global_1935689.f_223[iVar0], 0))
						{
							(*uParam1)[iVar0] = Var19.f_4;
						}
					}
				}
			}
			iVar17++;
		}
		__LIB_17__::func_701(iVar15);
	}
}

void func_781(var uParam0, int iParam1, bool bParam2)
{
	struct<14> Var0;
	Var0.f_9 = -1591664384;
	Var0.f_4 = uParam0;
	Var0.f_11 = iParam1;
	if (!bParam2)
	{
		func_255(Var0, 0);
	}
	else
	{
		func_236(Var0, 0);
	}
}

void func_791(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	iVar0 = -1;
	Var3.f_9 = -1591664384;
	if (__LIB_0__::func_801(uParam0, &iVar0, &iVar1, bParam1))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (__LIB_0__::func_236(&Var3, iVar2, iVar0, iVar1))
			{
				if (!func_235(&Var3, 0, 0))
				{
				}
				else if (bParam2)
				{
					func_258(Var3.f_4, bParam3);
				}
				else
				{
					func_246(Var3);
				}
			}
			iVar2++;
		}
	}
	__LIB_17__::func_701(iVar0);
}

void func_792()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10218, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10217, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10214, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_10215, false);
}

bool func_794()
{
	int iVar0;
	int iVar1;
	if (Global_1392040.f_2)
	{
		return false;
	}
	if (__LIB_2__::func_776())
	{
		return false;
	}
	if (__LIB_1__::func_652())
	{
		return false;
	}
	if (Global_1935496.f_10)
	{
		return false;
	}
	if (Global_1935496.f_11)
	{
		return false;
	}
	if (Global_1935496.f_12)
	{
		return false;
	}
	if (!__LIB_1__::func_185(15))
	{
		return false;
	}
	if (__LIB_2__::func_800())
	{
		return false;
	}
	if (__LIB_4__::func_233(8192))
	{
		return false;
	}
	if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		return false;
	}
	if (__LIB_1__::func_923())
	{
		return false;
	}
	if (__LIB_0__::func_644(8388608))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
		iVar1 = iVar0;
		if (((iVar1 == joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1") || iVar1 == joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2")) || iVar1 == joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3")) || iVar1 == joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4"))
		{
			return true;
		}
		return false;
	}
	if (!__LIB_18__::func_827(0, 1))
	{
		return false;
	}
	return true;
}

int func_802()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = __LIB_0__::func_421(iVar1);
		if (func_257(iVar2, 1, 0) || __LIB_0__::func_530(__LIB_0__::func_529(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_816(int iParam0)
{
	if (__LIB_0__::func_599(iParam0) && func_257(iParam0, 1, 0))
	{
		return true;
	}
	else if (__LIB_0__::func_600(iParam0) && __LIB_6__::func_518(iParam0))
	{
		return true;
	}
	return false;
}

void func_839(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_3__::func_959(iParam0))
	{
		return;
	}
	if (__LIB_6__::func_115(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = __LIB_9__::func_503(iParam0);
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_2() != -1)
		{
		}
		else
		{
			__LIB_3__::func_971(iParam0);
		}
	}
	__LIB_4__::func_109(iParam0, 1);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_9__::func_991(iParam0, __LIB_0__::func_113());
	}
	__LIB_7__::func_832(iParam0, 1);
	if (bParam2)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(1, 6);
		}
	}
}

int func_871(int iParam0, int iParam1, int iParam2)
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
	switch (iParam2)
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
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_695(iVar9);
	iVar2 = func_695(iVar10);
	iVar3 = func_695(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_695(iVar12);
	}
	iVar5 = __LIB_0__::func_439(iVar9);
	iVar6 = __LIB_0__::func_439(iVar10);
	iVar7 = __LIB_0__::func_439(iVar11);
	if (iParam2 != 2)
	{
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
	if (iParam2 != 2)
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

void func_892()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1022();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_3__::func_427(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_3__::func_427(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_929(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_386(50);
			}
			else
			{
				func_386(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_386(51);
			}
			else
			{
				func_386(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1034(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			func_386(24);
			if (bParam1)
			{
				if (!func_1034(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

void func_930(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1035(0))
			{
				iVar0++;
			}
			if (func_1035(2))
			{
				iVar0++;
			}
			if (func_1035(4))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(16))
			{
				if (iVar0 == 1)
				{
					__LIB_3__::func_704();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					__LIB_3__::func_704();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1035(1))
			{
				iVar0++;
			}
			if (func_1035(3))
			{
				iVar0++;
			}
			if (func_1035(7))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(1))
			{
				if (iVar0 == 1)
				{
					__LIB_3__::func_705();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					__LIB_3__::func_705();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1035(5))
			{
				iVar0++;
			}
			if (func_1035(6))
			{
				iVar0++;
			}
			if (func_1035(8))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(4))
			{
				if (iVar0 == 1)
				{
					__LIB_3__::func_706();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					__LIB_3__::func_706();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

int func_938(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!__LIB_7__::func_654(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { __LIB_0__::func_777(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((__LIB_7__::func_601(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((__LIB_7__::func_601(iParam0, iParam1) - iParam2) < 0)
		{
			func_938(iParam0, iParam1, func_264(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!__LIB_7__::func_653(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_1__::func_158(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

int func_958(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar14 = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar14);
		if (ITEMSET::IS_ITEMSET_VALID(iVar14))
		{
			iVar15 = ITEMSET::GET_ITEMSET_SIZE(iVar14);
			iVar16 = 0;
			while (iVar16 < iVar15)
			{
				iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar16, iVar14));
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
				}
				else if (ENTITY::_0x9A100F1CF4546629(iVar0) || ENTITY::_0xC346A546612C49A9(iVar0))
				{
					iVar21 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					iVar1 = __LIB_8__::func_855(iVar21, &uVar2);
					iVar23 = __LIB_5__::func_76(iVar0);
					if (iVar23 == iParam0)
					{
						if (bParam1)
						{
							Global_1901328.f_94 = 1;
							ENTITY::_DELETE_CARRIABLE(&iVar0);
							__LIB_1__::func_158(iVar23, -1, 0, 0, 0);
							Global_1901328.f_94 = 0;
						}
						ITEMSET::DESTROY_ITEMSET(iVar14);
						return 1;
					}
					iVar22 = 0;
					while (iVar22 < iVar1)
					{
						if (uVar2[iVar22] == iParam0)
						{
							if (bParam1)
							{
								Global_1901328.f_94 = 1;
								ENTITY::_DELETE_CARRIABLE(&iVar0);
								__LIB_1__::func_158(uVar2[iVar22], -1, 0, 0, 0);
								Global_1901328.f_94 = 0;
							}
							ITEMSET::DESTROY_ITEMSET(iVar14);
							return 1;
						}
						iVar22++;
					}
				}
				else
				{
					iVar24 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					__LIB_2__::func_998(iVar24, &iVar18, &uVar19, &iVar17, &uVar20);
					if (__LIB_2__::func_999(&iVar13, iVar24, iVar17, iVar18))
					{
						if (iVar13 == iParam0)
						{
							if (bParam1)
							{
								Global_1901328.f_94 = 1;
								ENTITY::_DELETE_CARRIABLE(&iVar0);
								__LIB_1__::func_158(iVar13, -1, 0, 0, 0);
								Global_1901328.f_94 = 0;
							}
							ITEMSET::DESTROY_ITEMSET(iVar14);
							return 1;
						}
					}
				}
				iVar16++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar14);
		}
		else
		{
			return 0;
		}
	}
	return func_1060(iParam0, bParam1);
}

void func_1022()
{
	var uVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	__LIB_0__::func_840(Global_35, &uVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	__LIB_1__::func_828(0);
	func_1108(7);
	__LIB_1__::func_853(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		__LIB_1__::func_853(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		__LIB_1__::func_853(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

bool func_1034(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_257(__LIB_1__::func_8(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_1035(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_257(__LIB_1__::func_9(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

int func_1060(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	int iVar31;
	int iVar32;
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	Var3.f_13 = -1;
	Var17.f_9 = -1591664384;
	Var3.f_1 = 1084182731;
	iVar31 = __LIB_8__::func_716(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar31) && __LIB_7__::func_643(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar31), &Var3, &iVar0, &iVar1))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (__LIB_0__::func_236(&Var17, iVar2, iVar0, iVar1))
			{
				if (iParam0 == Var17.f_4)
				{
					if (bParam1)
					{
						iVar32 = 1;
						func_456(&iVar31, iParam0, &iVar32, 1, -142743235);
					}
					__LIB_17__::func_701(iVar0);
					return 1;
				}
			}
			iVar2++;
		}
		__LIB_17__::func_701(iVar0);
	}
	return 0;
}

void func_1108(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (__LIB_0__::func_2() == -1)
	{
		func_1136(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_26796.f_20;
		Global_1946804.f_2657.f_21 = Global_26796.f_21;
		Global_1946804.f_2657.f_22 = Global_26796.f_22;
		Global_1946804.f_2657.f_23 = Global_26796.f_23;
		Global_1946804.f_2657.f_24 = Global_26796.f_24;
		Global_1946804.f_2657.f_25 = Global_26796.f_25;
		Global_1946804.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar2 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_357(iVar2) != -999503751)
		{
			__LIB_1__::func_807(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (__LIB_1__::func_701(iVar2, 0))
		{
			__LIB_1__::func_704(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1136(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { __LIB_0__::func_523(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (__LIB_0__::func_801(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804.f_2657.f_26.f_2 = 5;
					Global_1946804.f_2657.f_26.f_1 = 5;
					Global_1946804.f_2657.f_26 = 5;
					break;
			}
		}
		__LIB_17__::func_701(iVar0);
	}
}

