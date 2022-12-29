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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = -1;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	int iLocal_24 = 0;
	char* sLocal_25 = NULL;
	char* sLocal_26 = NULL;
	char* sLocal_27 = NULL;
	char* sLocal_28 = NULL;
	var uLocal_29 = 0;
	struct<33> Local_30 = { 0, 1092616192, 1106247680, 1109393408, 1084227584, 1061158912, 0, 1065353216, 0, 1065353216, 15, 30, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 1097859072;
	var uLocal_77 = 0;
#endregion
void __EntryFunction__()
{
	struct<7> Var0[34];
	int iVar239;
	bool bVar240;
	int iVar241;
	int iVar242;
	int iVar243;
	float fVar244;
	int iVar245;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_23 = "beat_gang_camp_reminder";
	iLocal_24 = 23;
	sLocal_25 = "mech_skin@BUCK_BUTCHER";
	sLocal_26 = "PBL_BASE";
	sLocal_27 = "PBL_DUMP";
	sLocal_28 = "PBL_DROP_IN";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	__LIB_10__::func_732(8);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_2(&(Var0[0 /*7*/]));
	func_3(&(Var0[15 /*7*/]));
	func_4(&(Var0[20 /*7*/]));
	func_5(&(Var0[26 /*7*/]));
	func_6(&(Var0[1 /*7*/]));
	func_7(&(Var0[2 /*7*/]));
	func_8(&(Var0[3 /*7*/]));
	func_9(&(Var0[4 /*7*/]));
	func_10(&(Var0[5 /*7*/]));
	func_11(&(Var0[6 /*7*/]));
	func_12(&(Var0[7 /*7*/]));
	func_13(&(Var0[8 /*7*/]));
	func_14(&(Var0[9 /*7*/]));
	func_15(&(Var0[10 /*7*/]));
	func_16(&(Var0[13 /*7*/]));
	func_17(&(Var0[11 /*7*/]));
	func_18(&(Var0[17 /*7*/]));
	func_19(&(Var0[12 /*7*/]));
	func_20(&(Var0[14 /*7*/]));
	func_21(&(Var0[16 /*7*/]));
	func_22(&(Var0[18 /*7*/]));
	func_23(&(Var0[21 /*7*/]));
	func_24(&(Var0[22 /*7*/]));
	func_25(&(Var0[23 /*7*/]));
	func_26(&(Var0[24 /*7*/]));
	func_27(&(Var0[25 /*7*/]));
	func_28(&(Var0[19 /*7*/]));
	func_29(&(Var0[27 /*7*/]));
	func_30(&(Var0[28 /*7*/]));
	func_31(&(Var0[29 /*7*/]));
	func_32(&(Var0[30 /*7*/]));
	func_33(&(Var0[31 /*7*/]));
	func_34(&(Var0[32 /*7*/]));
	func_35(&(Var0[33 /*7*/]));
	__LIB_10__::func_748();
	func_37();
	while (!__LIB_0__::func_382(256))
	{
		BUILTIN::WAIT(0);
	}
	while (!__LIB_0__::func_382(128))
	{
		BUILTIN::WAIT(0);
	}
	while (!__LIB_0__::func_382(256) && Global_40)
	{
		BUILTIN::WAIT(0);
	}
	iVar239 = 0;
	while (iVar239 < Var0)
	{
		if (Var0[iVar239 /*7*/].f_6 & 2 == 0)
		{
			__LIB_0__::func_8(&(Var0[iVar239 /*7*/].f_6), 1);
		}
		else
		{
			Call_Loc(Var0[iVar239 /*7*/]);
			__LIB_0__::func_7(&(Var0[iVar239 /*7*/].f_6), 1);
		}
		iVar239++;
	}
	__LIB_10__::func_614(8);
	while (Global_1572887.f_8)
	{
		BUILTIN::WAIT(0);
	}
	while (!__LIB_0__::func_382(256))
	{
		BUILTIN::WAIT(0);
	}
	__LIB_10__::func_614(1);
	bVar240 = false;
	iVar241 = 34;
	iVar242 = 0;
	iVar243 = 0;
	iVar239 = 0;
	while (!bVar240)
	{
		bVar240 = SCRIPTS::_0x9E4EF615E307FBBE();
		fVar244 = __LIB_0__::func_250();
		if (fVar244 <= 0f)
		{
			fVar244 = 24f;
		}
		iVar242 = BUILTIN::ROUND((IntToFloat(iVar241) / fVar244));
		if (iVar242 <= 0)
		{
			iVar242 = 1;
		}
		iVar243 = 0;
		Global_1430242.f_9 = 0;
		iVar243 = 0;
		while (iVar243 < iVar242)
		{
			if (Var0[iVar239 /*7*/].f_6 & 1 != 0)
			{
				Call_Loc(Var0[iVar239 /*7*/].f_1);
			}
			iVar239++;
			if (iVar239 >= iVar241)
			{
				iVar239 = 0;
			}
			iVar243++;
		}
		if (func_43(4))
		{
			__LIB_10__::func_714();
			func_45();
			iVar245 = __LIB_0__::func_12();
			if (__LIB_0__::func_20(iVar245))
			{
				__LIB_18__::func_264(iVar245, iVar245, 0);
			}
			func_49(4);
		}
		BUILTIN::WAIT(0);
	}
	func_50(&Var0);
	while (!SCRIPTS::_0x380FFA15B72408FB(10))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 4691;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "PLAYER(L)", 24);
	uParam0->f_6 = 2;
}

void func_3(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 5095;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "RPG(L)", 24);
	uParam0->f_6 = 2;
}

void func_4(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 5147;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "LAW(L)", 24);
	uParam0->f_6 = 2;
}

void func_5(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 2565;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "DEED MANAGER", 24);
	uParam0->f_6 = 2;
}

void func_6(var uParam0)
{
	*uParam0 = 5247;
	uParam0->f_1 = 5259;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "BEAT MANAGER", 24);
	uParam0->f_6 = 2;
}

void func_7(var uParam0)
{
	*uParam0 = 5317;
	uParam0->f_1 = 5354;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "BT VALIDATOR A", 24);
	uParam0->f_6 = 2;
}

void func_8(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 5375;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "TUTORIAL", 24);
	uParam0->f_6 = 2;
}

void func_9(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 5793;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "COMPANION TRUST", 24);
	uParam0->f_6 = 2;
}

void func_10(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 5894;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "LOANSHARKING", 24);
	uParam0->f_6 = 2;
}

void func_11(var uParam0)
{
	*uParam0 = 6382;
	uParam0->f_1 = 6489;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "BANK ROBBERY", 24);
	uParam0->f_6 = 2;
}

void func_12(var uParam0)
{
	*uParam0 = 7032;
	uParam0->f_1 = 7166;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "EVENT AREA", 24);
	uParam0->f_6 = 2;
}

void func_13(var uParam0)
{
	*uParam0 = 8453;
	uParam0->f_1 = 8466;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "VEHICLE ROBBERY", 24);
	uParam0->f_6 = 2;
}

void func_14(var uParam0)
{
	*uParam0 = 8492;
	uParam0->f_1 = 8511;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "TRAIN ROBBERY", 24);
	uParam0->f_6 = 2;
}

void func_15(var uParam0)
{
	*uParam0 = 8717;
	uParam0->f_1 = 8836;
	uParam0->f_2 = 9118;
	StringCopy(&(uParam0->f_3), "HOME ROBBERY", 24);
	uParam0->f_6 = 2;
}

void func_16(var uParam0)
{
	*uParam0 = 9130;
	uParam0->f_1 = 9276;
	uParam0->f_2 = 9424;
	StringCopy(&(uParam0->f_3), "COMPANIONS", 24);
	uParam0->f_6 = 2;
}

void func_17(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 9452;
	uParam0->f_2 = 9475;
	StringCopy(&(uParam0->f_3), "USE CONTEXT", 24);
	uParam0->f_6 = 2;
}

void func_18(var uParam0)
{
	*uParam0 = 9679;
	uParam0->f_1 = 9687;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "CARAVAN", 24);
	uParam0->f_6 = 2;
}

void func_19(var uParam0)
{
	*uParam0 = 9719;
	uParam0->f_1 = 9741;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "CARAVAN EVENT", 24);
	uParam0->f_6 = 2;
}

void func_20(var uParam0)
{
	*uParam0 = 9910;
	uParam0->f_1 = 9918;
	uParam0->f_2 = 9962;
	StringCopy(&(uParam0->f_3), "UNDERTAKER", 24);
	uParam0->f_6 = 2;
}

void func_21(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 9998;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "SATCHEL ITEMS", 24);
	uParam0->f_6 = 2;
}

void func_22(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 10014;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "GAME PERCENT", 24);
	uParam0->f_6 = 2;
}

void func_23(var uParam0)
{
	*uParam0 = 12766;
	uParam0->f_1 = 12814;
	uParam0->f_2 = 12830;
	StringCopy(&(uParam0->f_3), "Campfires", 24);
	uParam0->f_6 = 2;
}

void func_24(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 12954;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "Drunk Manager", 24);
	uParam0->f_6 = 2;
}

void func_25(var uParam0)
{
	*uParam0 = 13631;
	uParam0->f_1 = 13644;
	uParam0->f_2 = 13813;
	StringCopy(&(uParam0->f_3), "WS Manager", 24);
	uParam0->f_6 = 2;
}

void func_26(var uParam0)
{
	*uParam0 = 13821;
	uParam0->f_1 = 13877;
	uParam0->f_2 = 14359;
	StringCopy(&(uParam0->f_3), "Minigame Mger", 24);
	uParam0->f_6 = 2;
}

void func_27(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 14375;
	uParam0->f_2 = 15535;
	StringCopy(&(uParam0->f_3), "CompAct Deeds", 24);
	uParam0->f_6 = 2;
}

void func_28(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 15697;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "BLIP MANAGER LONG", 24);
	uParam0->f_6 = 2;
}

void func_29(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 15749;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "GUAMA LAW", 24);
	uParam0->f_6 = 2;
}

void func_30(var uParam0)
{
	*uParam0 = 15757;
	uParam0->f_1 = 15782;
	uParam0->f_2 = 16702;
	StringCopy(&(uParam0->f_3), "AMBVIG LONG", 24);
	uParam0->f_6 = 2;
}

void func_31(var uParam0)
{
	*uParam0 = 16723;
	uParam0->f_1 = 16731;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "COLLECTABLES", 24);
	uParam0->f_6 = 2;
}

void func_32(var uParam0)
{
	*uParam0 = 16927;
	uParam0->f_1 = 16990;
	uParam0->f_2 = 17026;
	StringCopy(&(uParam0->f_3), "FishingAmbient", 24);
	uParam0->f_6 = 2;
}

void func_33(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 17064;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "RichPresenceMgr", 24);
	uParam0->f_6 = 2;
}

void func_34(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 17123;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "AUTOSAVE", 24);
	uParam0->f_6 = 2;
}

void func_35(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 17317;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "CONTENT_PASSED", 24);
	uParam0->f_6 = 2;
}

void func_37()
{
	int iVar0;
	iVar0 = __LIB_0__::func_61();
	if (iVar0 != 9)
	{
	}
	else
	{
		STREAMING::_REMOVE_IMAP(809554858);
	}
}

bool func_43(int iParam0)
{
	return (Global_1898164 && iParam0) != 0;
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	var uVar8[10];
	int iVar19;
	bool bVar20;
	int iVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	int iVar28;
	iVar0 = __LIB_0__::func_2();
	if (iVar0 != -1 && iVar0 != 0)
	{
		return;
	}
	if (iVar0 == -1)
	{
		func_115();
	}
	if (iVar0 == -1)
	{
		if (__LIB_0__::func_296(4096, func_43(4), !func_43(4)))
		{
			func_116();
			func_117();
			return;
		}
		if (__LIB_5__::func_245(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			if (!__LIB_1__::func_195() || !__LIB_6__::func_220(6144))
			{
				func_121(0, 1, 0, 0);
				func_122();
			}
			else if (Global_1935630.f_18)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			return;
		}
	}
	if (iVar0 == -1)
	{
		Global_1430242.f_9 = 1;
	}
	if (iVar0 == -1)
	{
		iVar7 = Global_40.f_4283.f_1;
		if (__LIB_0__::func_20(iVar7) && func_123(iVar7))
		{
			bVar5 = true;
			bVar6 = __LIB_5__::func_246(iVar7);
		}
	}
	bVar20 = ENTITY::IS_ENTITY_DEAD(Global_35);
	if (iVar0 == -1)
	{
		iVar21 = func_125();
	}
	bVar22 = __LIB_1__::func_238();
	iVar3 = 0;
	while (iVar3 < Global_1898329)
	{
		if (!__LIB_0__::func_6(Global_1898330[iVar3]))
		{
		}
		else
		{
			iVar23 = __LIB_0__::func_291(Global_1898330[iVar3]);
			if (iVar23 == 3 || iVar23 == 4)
			{
			}
			else if (iVar23 != 1 && iVar23 != 2)
			{
				__LIB_1__::func_722(Global_1898330[iVar3]);
			}
			else
			{
				__LIB_1__::func_130(iVar3, 0);
				switch (Global_1898346[iVar3 /*6*/].f_3)
				{
					case 1:
						iVar24 = Global_1898346[iVar3 /*6*/].f_4;
						if (__LIB_0__::func_83(iVar24))
						{
							func_132(iVar24, iVar3, bVar22, iVar0, 0, bVar20);
							if (iVar0 == -1)
							{
								if (__LIB_4__::func_815(iVar24, bVar5, iVar7))
								{
									iVar4++;
									if (iVar19 < 10)
									{
										uVar8[iVar19] = Global_1898330[iVar3];
										iVar19++;
									}
								}
								Global_1430242.f_1++;
								if (__LIB_3__::func_919(iVar3, 64))
								{
									Global_1430242++;
								}
							}
						}
						break;
					case 4:
						if (iVar0 == -1)
						{
							func_135(Global_1898330[iVar3], iVar21, Global_1898346[iVar3 /*6*/].f_4, Global_1898346[iVar3 /*6*/].f_5);
							Global_1430242.f_4++;
						}
						break;
					case 2:
						iVar1 = Global_1898346[iVar3 /*6*/].f_4;
						switch (iVar1)
						{
							case 1:
								if (iVar0 == -1)
								{
									func_136(iVar3);
								}
								break;
							case 3:
								if (iVar0 == -1)
								{
									func_137(iVar3);
								}
								break;
							case 6:
								if (iVar0 == -1)
								{
									func_138(iVar3);
								}
								break;
							case 2:
								if (iVar0 == -1)
								{
									__LIB_0__::func_11(iVar3);
								}
								break;
						}
						if (iVar0 == -1)
						{
							Global_1430242.f_5++;
						}
						break;
					case 5:
						if (iVar0 == -1)
						{
							Global_1430242.f_6++;
						}
						break;
					case 6:
						iVar2 = Global_1898346[iVar3 /*6*/].f_4;
						if (iVar2 == 0)
						{
							if (iVar0 == -1)
							{
								func_140(iVar3);
							}
						}
						if (iVar0 == -1)
						{
							Global_1430242.f_7++;
						}
						break;
					case 8:
						if (iVar0 == -1)
						{
							iVar25 = Global_1898346[iVar3 /*6*/].f_4;
							if (__LIB_0__::func_5(iVar25))
							{
								if (__LIB_0__::func_1(Global_1347702[iVar25 /*49*/].f_13, 64))
								{
									Global_1430242.f_2++;
								}
								func_143(iVar25);
							}
						}
						break;
					case 10:
						break;
					case 11:
						func_144(Global_1898330[iVar3], iVar3);
						if (iVar0 == -1)
						{
							Global_1430242.f_8++;
						}
						break;
					case 12:
						break;
					default:
						break;
				}
			}
		}
		iVar3++;
	}
	if (iVar0 == -1)
	{
		iVar26 = 0;
		while (iVar26 < Global_40.f_450)
		{
			if (Global_40.f_450[iVar26] > -1 && Global_40.f_450[iVar26] < 200)
			{
				if (Global_1347702[Global_40.f_450[iVar26] /*49*/].f_12 & 1 != 0)
				{
					Global_1430242.f_3++;
					if (__LIB_4__::func_827(Global_40.f_450[iVar26], bVar5, iVar7))
					{
						iVar4++;
						if (iVar19 < 10)
						{
							uVar8[iVar19] = Global_1347702[Global_40.f_450[iVar26] /*49*/].f_15;
							iVar19++;
						}
					}
				}
			}
		else
		{
			}
			else
			{
				iVar26++;
			}
		}
		if (Global_1357549.f_1709 != iVar4)
		{
			bVar27 = true;
		}
		Global_1357549.f_1709 = iVar4;
		iVar28 = 0;
		while (iVar28 < iVar4)
		{
			__LIB_8__::func_715(uVar8[iVar28], bVar6, bVar5, iVar7);
			iVar28++;
		}
		if (!func_147(bVar6, bVar27, bVar5))
		{
			__LIB_10__::func_803();
		}
	}
}

void func_49(int iParam0)
{
	Global_1898164 = (Global_1898164 - (Global_1898164 && iParam0));
}

void func_50(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_14__::func_136(0);
		func_167(1);
	}
	__LIB_11__::func_114(iParam0);
}

void func_52()
{
	if (!Global_1935630.f_12)
	{
		func_169();
		func_170();
		if (!__LIB_1__::func_185(3))
		{
			func_171(-1336.415f, 2442.417f, 307.4014f, 0f, 0f, 0f, 165f, 165f, 100f, -1336.415f, 2442.417f, 307.4014f, 0f, 0f, 0f, 165f, 165f, 100f, 7);
		}
		else if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			func_171(2064.727f, -7778.147f, 50f, 0f, 0f, 30f, 1550f, 1900f, 890f, 2064.727f, -7778.147f, 50f, 0f, 0f, 30f, 1600f, 1900f, 890f, 8);
		}
		else
		{
			func_172();
		}
		func_173();
		if (Global_1935630.f_47)
		{
			func_174();
			Global_1935630.f_47 = 0;
		}
		func_175();
		__LIB_10__::func_616();
		func_177();
		func_178();
		func_179();
		func_180();
		func_181();
		func_182();
		func_183();
		if (__LIB_0__::func_2() == -1)
		{
			if (!func_184())
			{
				Global_1935630.f_54 = MISC::GET_GAME_TIMER();
			}
		}
		if (((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && CAM::IS_SCREEN_FADED_IN()) && !CAM::IS_GAMEPLAY_CAM_RENDERING()) && !__LIB_0__::func_13(128))
		{
			MAP::SET_MINIMAP_FOW_REVEAL_COORDINATE(Global_36, 911509858);
		}
		if (!Global_40.f_9421)
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0) && MISC::GET_GAME_TIMER() < Global_1430258 + 2000)
			{
				Global_40.f_9421 = 1;
			}
		}
	}
}

void func_53()
{
	Global_36616 = 0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	func_186();
	func_187();
	func_188();
	__LIB_0__::func_11();
}

void func_54()
{
	bool bVar0;
	bool bVar1;
	bVar1 = __LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1);
	if (__LIB_0__::func_2() == -1)
	{
		bVar0 = __LIB_4__::func_497();
		func_192(bVar0);
		func_193(bVar0);
		__LIB_0__::func_11();
		func_195(bVar0);
		func_196();
	}
	if (!Global_1934266.f_61 == 1)
	{
		func_197(bVar1);
		if (__LIB_0__::func_2() == -1)
		{
			func_198(bVar0, bVar1);
			func_199(bVar0);
		}
	}
}

void func_55()
{
	func_200();
}

void func_56()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_201();
	if (__LIB_0__::func_72() == 0)
	{
		if (__LIB_0__::func_73(128))
		{
			func_200();
			__LIB_1__::func_979(128);
		}
	}
	func_205();
	func_206();
}

void func_57()
{
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		Global_1326862.f_3 = 0;
	}
	else
	{
		Global_1326862 = 0;
		Global_1326862.f_3 = 1;
	}
}

void func_58()
{
	if (Global_1326862.f_3)
	{
		func_207();
	}
}

void func_59()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bVar0 = Global_1905944.f_5696;
	Global_1905944.f_5696 = 0;
	func_208();
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	if (!__LIB_2__::func_573(0))
	{
		return;
	}
	if (__LIB_1__::func_195() && !__LIB_0__::func_296(0, 0, 1))
	{
		return;
	}
	func_210(&iVar1, &iVar2, 0, 1);
	if (iVar1 == -1 || iVar2 == -1)
	{
		return;
	}
	iVar3 = func_211(iVar1, iVar2);
	bVar4 = true;
	if (!func_212(iVar3, &bVar4, bVar0))
	{
		if (!__LIB_0__::func_447(iVar3, 64) || !bVar4)
		{
			__LIB_1__::func_207(iVar1, iVar2);
		}
		else
		{
			iVar5 = func_215(iVar3);
			func_210(&iVar1, &iVar2, iVar5 + 1, 0);
			if (iVar1 != -1 && iVar2 != -1)
			{
				func_216(func_211(iVar1, iVar2));
			}
		}
		return;
	}
	if (__LIB_0__::func_447(iVar3, 8))
	{
		func_217(iVar3);
	}
	bVar6 = __LIB_0__::func_447(iVar3, 1024);
	iVar7 = Global_1905944.f_22[iVar3 /*9*/];
	iVar9 = func_218(iVar3);
	if (iVar9 == 0)
	{
		iVar9 = -2;
	}
	if (iVar7 != 0)
	{
		if (bVar6)
		{
			Global_1905944.f_22[iVar3 /*9*/].f_1 = func_219(iVar7, iVar3, iVar9, iVar8);
		}
		else
		{
			Global_1905944.f_22[iVar3 /*9*/].f_1 = __LIB_8__::func_966(MISC::_CREATE_VAR_STRING(0, iVar7), iVar9, 0, 0, iVar8, 1);
		}
		__LIB_10__::func_734();
		if (func_222(iVar3))
		{
			func_216(__LIB_17__::func_591(iVar3));
		}
	}
	__LIB_1__::func_207(iVar1, iVar2);
	if (bVar6 && Global_1905944.f_22[iVar3 /*9*/].f_1 == 0)
	{
		return;
	}
	__LIB_9__::func_597(&iVar1, &iVar2);
}

void func_60()
{
	if (func_225() == 0)
	{
		if (__LIB_0__::func_27(Global_1391411.f_1, 1))
		{
			__LIB_0__::func_8(&(Global_1391411.f_1), 1);
		}
		return;
	}
	if (__LIB_0__::func_270())
	{
		return;
	}
	if (__LIB_0__::func_27(Global_1391411.f_1, 1))
	{
		func_229(Global_1391411, 1);
		Global_1391411 = -1;
		__LIB_0__::func_8(&(Global_1391411.f_1), 1);
		return;
	}
	func_230(1);
}

void func_61()
{
	int iVar0;
	bool bVar1;
	if (Global_1879534)
	{
		return;
	}
	else if (__LIB_0__::func_296(0, 0, 1))
	{
		if (__LIB_6__::func_220(0))
		{
			__LIB_10__::func_825();
			func_232();
		}
		return;
	}
	else if (Global_43891)
	{
		__LIB_10__::func_825();
		func_232();
		return;
	}
	else if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	else if (__LIB_5__::func_245(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		__LIB_13__::func_910(16384);
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!__LIB_4__::func_810(iVar0))
		{
		}
		else if (!MISC::IS_BIT_SET(Global_40.f_9052, iVar0))
		{
		}
		else if (__LIB_9__::func_783(iVar0))
		{
			func_236(iVar0);
		}
		else if (__LIB_0__::func_1(Global_1392626[iVar0 /*32*/].f_9, 8))
		{
			if (Global_1392626[iVar0 /*32*/].f_10 & 2 != 0)
			{
				__LIB_12__::func_92(iVar0);
				func_239(iVar0);
			}
		}
		else if (!func_240(iVar0))
		{
			if (Global_1392626[iVar0 /*32*/].f_10 & 2 != 0)
			{
				__LIB_12__::func_92(iVar0);
				func_239(iVar0);
			}
			bVar1 = Global_1392626[iVar0 /*32*/].f_9 & 4096 == false;
			func_241(iVar0, 0, bVar1);
		}
		else
		{
			if (Global_1392626[iVar0 /*32*/].f_9 & 4096 != 0)
			{
				func_242(iVar0);
			}
			func_243(iVar0);
			func_244(iVar0);
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iVar0 /*32*/].f_21, false))
			{
				if (__LIB_10__::func_363(iVar0, Global_1392626[iVar0 /*32*/].f_5))
				{
					if (!__LIB_0__::func_702(Global_1392626[iVar0 /*32*/].f_3))
					{
						__LIB_1__::func_242(Global_1392626[iVar0 /*32*/].f_3, 0);
						__LIB_1__::func_319(Global_1392626[iVar0 /*32*/].f_3);
					}
				}
				else if (__LIB_0__::func_702(Global_1392626[iVar0 /*32*/].f_3))
				{
					if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iVar0 /*32*/].f_21, false))
					{
						__LIB_1__::func_722(Global_1392626[iVar0 /*32*/].f_3);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_63()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	if (__LIB_0__::func_296(0, 0, 1))
	{
		if (__LIB_0__::func_296(4220662, 0, 1))
		{
			bVar0 = true;
			bVar1 = true;
		}
	}
	if (__LIB_10__::func_617(1073741824 /* Float: 2f */))
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (func_252(iVar2))
		{
			if (!bVar1)
			{
				if (!__LIB_10__::func_618(iVar2))
				{
					if (func_254(iVar2))
					{
						if (func_255(iVar2))
						{
							if (!__LIB_10__::func_617(16))
							{
								if (Global_1934182[iVar2 /*18*/].f_16 == 0)
								{
									if (VOLUME::_DOES_VOLUME_EXIST(Global_1934182[iVar2 /*18*/].f_7))
									{
										POPULATION::_0xB56D41A694E42E86(Global_1934182[iVar2 /*18*/].f_7, 26592, 0, 0, -1, joaat("SHOP_PEDS_RHODES"), 0);
										POPULATION::_0x18262CAFEBB5FBE1(Global_1934182[iVar2 /*18*/].f_7, 0, 26592, 0, -1, joaat("SHOP_PEDS_RHODES"), 0);
									}
									Global_1934182[iVar2 /*18*/].f_16 = 1;
								}
								if (!func_256(iVar2) && func_257(iVar2))
								{
									func_258(iVar2, 1);
									__LIB_9__::func_393(32);
									__LIB_9__::func_416(16);
								}
							}
						}
						else if (!__LIB_10__::func_617(32))
						{
							if (VOLUME::_DOES_VOLUME_EXIST(Global_1934182[iVar2 /*18*/].f_7))
							{
								POPULATION::_0x74C2B3DC0B294102(Global_1934182[iVar2 /*18*/].f_7);
								POPULATION::_0xA1CFB35069D23C23(Global_1934182[iVar2 /*18*/].f_7);
							}
							Global_1934182[iVar2 /*18*/].f_16 = 0;
							if (func_257(iVar2))
							{
								__LIB_14__::func_356(iVar2);
								__LIB_9__::func_393(16);
								__LIB_9__::func_416(32);
							}
						}
					}
				}
			}
			if ((__LIB_0__::func_21(Global_1934182[iVar2 /*18*/], 2097152) || __LIB_10__::func_617(2)) || bVar0)
			{
				func_262(iVar2);
				if (__LIB_0__::func_702(Global_1934182[iVar2 /*18*/].f_5))
				{
					__LIB_1__::func_722(Global_1934182[iVar2 /*18*/].f_5);
				}
			}
			else if (func_263(iVar2))
			{
				if (func_264(iVar2))
				{
				}
				else if (!__LIB_0__::func_702(Global_1934182[iVar2 /*18*/].f_5) && __LIB_2__::func_767(__LIB_18__::func_909(iVar2), 0))
				{
					func_267(iVar2);
				}
			}
			else
			{
				fVar3 = BUILTIN::VDIST2(Global_1934182[iVar2 /*18*/].f_1, Global_36);
				func_268(iVar2, fVar3);
			}
		}
		iVar2++;
	}
}

void func_64()
{
	func_269();
	__LIB_5__::func_209(Global_1888801[11 /*35*/].f_3, "ea_logCampRestrict", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	__LIB_5__::func_209(Global_1888801[15 /*35*/].f_3, "ea_indReservRestrict", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	func_271();
	Global_1898092.f_2 = func_272();
	Global_1898092.f_26.f_6 = 0;
	Global_1898092.f_26.f_4 = 0;
	Global_1898092.f_26 = 0;
	Global_1898092.f_26.f_1 = -1;
	Global_1898092.f_26.f_2 = -1;
	Global_1898092.f_26.f_3 = -1;
}

void func_65()
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	vector3 vVar8;
	var uVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	iVar0 = Global_1898092.f_2;
	func_274(iVar0, __LIB_2__::func_776());
	func_275();
	switch (Global_1898092)
	{
		case 0:
			iVar5 = __LIB_0__::func_982(iVar0);
			func_277(&iVar0, &iVar5);
			func_278(iVar0, iVar5);
			if (func_279(iVar0, iVar5))
			{
				__LIB_8__::func_82(iVar0, 1073741824 /* Float: 2f */);
				__LIB_8__::func_82(iVar0, 268435456);
			}
			if ((!__LIB_7__::func_897(1) && !__LIB_7__::func_897(2)) && (func_282(iVar0) || __LIB_7__::func_908(iVar0, 1073741824 /* Float: 2f */)))
			{
				Global_1898092.f_36 = iVar5;
				if (Global_40.f_9096[iVar0 /*12*/].f_2 >= 0)
				{
					if (__LIB_16__::func_220(iVar0) && !__LIB_7__::func_907(iVar0, 8388608))
					{
						if (func_286(iVar0, iVar5))
						{
							if (Global_40.f_9096[iVar0 /*12*/].f_1 == -1)
							{
								if (iVar5 < __LIB_16__::func_269(iVar0))
								{
									Global_1898092.f_36 = iVar5 + 1;
								}
								else
								{
									Global_1898092.f_36 = __LIB_16__::func_269(iVar0);
								}
								__LIB_18__::func_915(iVar0, &(Global_1898092.f_36));
							}
							else
							{
								Global_1898092.f_36 = Global_40.f_9096[iVar0 /*12*/].f_1;
								__LIB_18__::func_915(iVar0, &(Global_1898092.f_36));
							}
							func_289(iVar0);
							__LIB_7__::func_894(4);
							__LIB_16__::func_221(1);
						}
					}
					else
					{
						func_292(iVar0, &uVar4, &uVar3, &uVar2, &uVar1);
					}
					if (__LIB_7__::func_908(iVar0, 1073741824 /* Float: 2f */) && (((__LIB_7__::func_908(iVar0, 268435456) || __LIB_7__::func_908(iVar0, 4194304)) || __LIB_7__::func_908(iVar0, -2147483648)) || !__LIB_16__::func_220(iVar0)))
					{
						if (func_286(iVar0, iVar5))
						{
							__LIB_7__::func_894(4);
							__LIB_16__::func_221(1);
						}
					}
				}
				else if (__LIB_7__::func_908(iVar0, 1073741824 /* Float: 2f */) && (((__LIB_7__::func_908(iVar0, 268435456) || __LIB_7__::func_908(iVar0, 4194304)) || __LIB_7__::func_908(iVar0, -2147483648)) || !__LIB_16__::func_220(iVar0)))
				{
					if (func_286(iVar0, iVar5))
					{
						__LIB_7__::func_894(4);
						__LIB_16__::func_221(1);
					}
				}
			}
			if (__LIB_7__::func_897(1))
			{
				__LIB_16__::func_221(5);
			}
			else if (__LIB_7__::func_897(2))
			{
				CAM::DO_SCREEN_FADE_OUT(500);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				__LIB_16__::func_221(4);
			}
			else if (!__LIB_7__::func_897(4))
			{
				uVar6 = Global_1898092.f_2;
				Global_1898092.f_2++;
				if (Global_1898092.f_2 >= 4)
				{
					Global_1898092.f_2 = 0;
				}
			}
			if (__LIB_7__::func_908(1, 2))
			{
				func_293();
			}
			break;
		case 1:
		case 2:
			if (__LIB_7__::func_908(1, 2))
			{
				func_293();
			}
			break;
		case 3:
			iVar0 = Global_1898092.f_2;
			Global_40.f_9096[iVar0 /*12*/].f_1 = -1;
			if (Global_1898092.f_36 > 0)
			{
				__LIB_18__::func_915(iVar0, &(Global_1898092.f_36));
				Global_40.f_9096[iVar0 /*12*/] = Global_1898092.f_36;
				Global_40.f_9096[iVar0 /*12*/].f_2 = -1;
				func_294(iVar0, Global_1898092.f_36);
			}
			__LIB_16__::func_221(0);
			__LIB_8__::func_83(iVar0, 1073741824 /* Float: 2f */);
			if (__LIB_7__::func_908(1, 2))
			{
				func_293();
			}
			break;
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_16__::func_221(5);
			}
			else if (!CAM::IS_SCREEN_FADING_OUT())
			{
				__LIB_16__::func_221(5);
			}
			break;
		case 5:
			if (Global_1898092.f_36 <= 0 || func_296(Global_1898092.f_35, Global_1898092.f_36, 1, 0, 0))
			{
				if (Global_1898092.f_36 > 0)
				{
					__LIB_18__::func_915(Global_1898092.f_35, &(Global_1898092.f_36));
					Global_40.f_9096[Global_1898092.f_35 /*12*/] = Global_1898092.f_36;
					Global_40.f_9096[Global_1898092.f_35 /*12*/].f_2 = -1;
					Global_40.f_9096[Global_1898092.f_35 /*12*/].f_1 = -1;
					func_294(Global_1898092.f_35, Global_1898092.f_36);
				}
				iVar7 = __LIB_7__::func_942(Global_1898092.f_35);
				if (__LIB_0__::func_20(iVar7))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_35))
					{
						if (!Global_1935630.f_12)
						{
							iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
							iVar13 = __LIB_0__::func_982(Global_1898092.f_35);
							func_298(Global_1898092.f_35, &vVar8, &uVar11, iVar12, iVar13);
							func_299(Global_35, vVar8, uVar11, 4, 1073741824 /* Float: 2f */);
						}
					}
				}
				__LIB_8__::func_83(iVar0, 1073741824 /* Float: 2f */);
				__LIB_16__::func_221(6);
			}
			break;
		case 6:
			__LIB_4__::func_845(1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			__LIB_16__::func_221(7);
			break;
		case 7:
			vVar14 = { __LIB_7__::func_943(Global_1898092.f_35, __LIB_0__::func_982(Global_1898092.f_35)) };
			__LIB_0__::func_568(vVar14, 110f, 0);
			__LIB_1__::func_206(vVar14, 110f, 0);
			__LIB_1__::func_572(vVar14, 110f, 0, 0, 1, 1, 0);
			__LIB_7__::func_896(1);
			__LIB_7__::func_896(2);
			__LIB_8__::func_83(iVar0, 1073741824 /* Float: 2f */);
			Global_1898092.f_35 = -1;
			Global_1898092.f_36 = -1;
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			__LIB_16__::func_221(0);
			break;
	}
}

void func_66()
{
	__LIB_13__::func_376(-1);
}

void func_67()
{
	if (func_307())
	{
		func_308();
		return;
	}
	func_309();
}

void func_69()
{
	int iVar0;
	float fVar1;
	var uVar2;
	if (!func_310())
	{
		return;
	}
	if (!__LIB_0__::func_6(Global_1392581.f_1))
	{
		Global_1392581.f_1 = __LIB_1__::func_293(2, 0, 2, 561818960);
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392581, false))
	{
		__LIB_1__::func_559(Global_1392581.f_1, 1, 2);
		if (__LIB_0__::func_27(Global_1392581.f_3, 16))
		{
			iVar0 = 14;
		}
		else
		{
			iVar0 = __LIB_7__::func_914(Global_36, 1);
		}
		if (__LIB_0__::func_27(Global_1392581.f_3, 16) || (__LIB_6__::func_47(iVar0) && !__LIB_10__::func_35(iVar0, 2)))
		{
			fVar1 = 200f;
			if (__LIB_0__::func_27(Global_1392581.f_3, 16) || __LIB_17__::func_508(iVar0, &uVar2, fVar1, -1))
			{
				__LIB_1__::func_319(Global_1392581.f_1);
			}
		}
	}
}

void func_70()
{
	func_317();
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_319(0, 77, __LIB_4__::func_55(0));
	func_319(1, 64, __LIB_4__::func_55(1));
	func_319(2, 96, __LIB_4__::func_55(2));
	func_319(3, 42, __LIB_4__::func_55(3));
	func_319(4, 102, __LIB_4__::func_55(4));
	func_319(5, 91, __LIB_4__::func_55(5));
	func_319(6, 89, __LIB_4__::func_55(6));
	func_319(7, 29, __LIB_4__::func_55(7));
}

void func_71()
{
	int iVar0;
	bool bVar1;
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392240, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_320(Global_1392240.f_1[iVar0 /*18*/].f_4, iVar0))
		{
			if (__LIB_0__::func_702(Global_1392240.f_1[iVar0 /*18*/].f_13))
			{
				__LIB_1__::func_722(Global_1392240.f_1[iVar0 /*18*/].f_13);
			}
			__LIB_13__::func_881(iVar0, 1);
		}
		else if (!__LIB_4__::func_264(iVar0))
		{
			switch (iVar0)
			{
				case 6:
					if (__LIB_10__::func_724(1, 1))
					{
						__LIB_13__::func_894(6, 0);
					}
					break;
				case 7:
					if (BUILTIN::VDIST(Global_36, Global_1392240.f_1[iVar0 /*18*/]) < 200f)
					{
						__LIB_13__::func_894(7, 0);
					}
					break;
			}
		}
		else
		{
			bVar1 = func_325(iVar0);
			func_326(iVar0, bVar1);
			if (bVar1)
			{
				func_327(iVar0);
				func_328(iVar0);
				func_329(iVar0);
			}
			else
			{
				func_330(iVar0);
				if (__LIB_0__::func_702(Global_1392240.f_1[iVar0 /*18*/].f_13))
				{
					__LIB_1__::func_722(Global_1392240.f_1[iVar0 /*18*/].f_13);
				}
			}
		}
		iVar0++;
	}
}

void func_72()
{
	func_331();
}

void func_73()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1359489[iVar0] = -1;
		iVar0++;
	}
	Global_1359489.f_15 = 0;
	Global_1359489.f_16 = 0;
	Global_1359489.f_18 = 0;
	Global_1359453 = 0;
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("DEF_COMP_BRAIN"));
	Global_1359489.f_38 = Global_40.f_4283.f_5;
	__LIB_0__::func_63(&(Global_1359489.f_25), 1, 1);
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_1357549.f_1675[iVar1 /*5*/] == 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/] = __LIB_5__::func_870(iVar1);
		}
		iVar1++;
	}
}

void func_74()
{
	func_334();
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return;
	}
	if (__LIB_5__::func_831(131072))
	{
		if (!__LIB_1__::func_238())
		{
			if (PED::DOES_GROUP_EXIST(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())))
			{
				COMPANION::_0x0F1CD8CA9E65D5F6(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()), 234527101);
			}
			__LIB_5__::func_833(131072);
		}
		func_338();
	}
	else if (__LIB_1__::func_238())
	{
		__LIB_1__::func_579(131072);
	}
	func_340(&(Global_1391438.f_7[0 /*99*/]), 0);
	func_340(&(Global_1391438.f_7[1 /*99*/]), 1);
	func_341();
	func_342();
	func_343();
}

void func_75()
{
	Global_1357549.f_1497.f_8 |= 1;
}

void func_76()
{
	if (!func_344())
	{
		return;
	}
	func_345();
}

void func_77()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
		{
			HUD::_UIPROMPT_DELETE(Global_1945938[iVar0 /*18*/].f_3);
		}
		Global_1945938[iVar0 /*18*/].f_3 = 0;
		Global_1945938[iVar0 /*18*/].f_4 = 0;
		Global_1945938[iVar0 /*18*/] = 1;
		Global_1945938[iVar0 /*18*/].f_16 = 0;
		Global_1945938[iVar0 /*18*/].f_1 = 0;
		Global_1945938[iVar0 /*18*/].f_6 = { 0f, 0f, 0f };
		Global_1945938[iVar0 /*18*/].f_9 = 0f;
		Global_1945938[iVar0 /*18*/].f_10 = 0;
		Global_1945938[iVar0 /*18*/].f_11 = 0;
		Global_1945938[iVar0 /*18*/].f_5 = -1;
		Global_1945938[iVar0 /*18*/].f_2 = 1;
		Global_1945938[iVar0 /*18*/].f_12 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1945938.f_865 = 0;
}

void func_79()
{
	if (__LIB_0__::func_2() == -1)
	{
		func_346();
		func_347();
		func_348();
		__LIB_15__::func_102();
	}
}

void func_80()
{
	Global_1327490.f_91 = -1;
	Global_1327490.f_89 = -1;
}

void func_81()
{
	if (__LIB_0__::func_296(8, 1, 1))
	{
		func_350();
		return;
	}
	if ((!__LIB_1__::func_220(__LIB_0__::func_61()) && !__LIB_10__::func_619(Global_1327490.f_91)) && !__LIB_10__::func_619(Global_1327490.f_89))
	{
		func_350();
		return;
	}
	if (__LIB_10__::func_619(Global_1327490.f_91))
	{
		if (Global_1327490.f_89 != Global_1327490.f_91)
		{
			if (__LIB_10__::func_619(Global_1327490.f_89))
			{
				func_350();
			}
			if (!func_353(Global_1327490.f_91))
			{
				return;
			}
		}
	}
	func_354();
	if (func_355())
	{
		if (!__LIB_10__::func_619(Global_1327490.f_89))
		{
			func_356();
		}
	}
}

void func_83()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1425351.f_19, false))
	{
	}
	if (func_357())
	{
		func_358();
	}
}

void func_84()
{
	__LIB_17__::func_569();
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1425351.f_19, false))
	{
		SCRIPTS::TERMINATE_THREAD(Global_1425351.f_19);
	}
}

void func_85()
{
	func_360();
	func_361();
}

void func_87()
{
	if (Global_1393237.f_4 <= 0)
	{
		Global_1393237.f_4 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 40000);
	}
	func_379();
	STREAMING::REQUEST_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
}

void func_88()
{
	func_380();
	func_381();
}

void func_89()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iVar0 /*30*/].f_22))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Global_1393237.f_11[iVar0 /*30*/].f_22, false);
			Global_1393237.f_11[iVar0 /*30*/].f_22 = 0;
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iVar0 /*30*/].f_23))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Global_1393237.f_11[iVar0 /*30*/].f_23, false);
			Global_1393237.f_11[iVar0 /*30*/].f_23 = 0;
		}
		iVar0++;
	}
}

void func_90()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	Global_1935436.f_10 = __LIB_6__::func_666(25);
	if (Global_1935436.f_1 != -1)
	{
		func_383();
	}
	if (Global_1935436 >= 1)
	{
		if (func_384())
		{
			__LIB_1__::func_716(1);
		}
	}
	if (Global_1935436 == Global_1935436.f_1)
	{
		Global_1935436.f_1 = -1;
	}
	if (Global_1935436.f_11)
	{
		if (__LIB_6__::func_666(25))
		{
			func_386(25);
		}
		Global_1935436.f_11 = 0;
	}
	switch (Global_1935436)
	{
		case 0:
			if (Global_1935436.f_9 >= 0.5f)
			{
				Global_1935436 = 1;
				func_387();
				PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 0);
				PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 1);
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
				{
					bVar0 = __LIB_0__::func_113();
					if (Global_1935436.f_6 < 0)
					{
						if (bVar0)
						{
							Global_1935436.f_6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
						}
						else
						{
							Global_1935436.f_6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
						}
					}
					if (bVar0)
					{
						if (Global_1935436.f_6 > 1)
						{
							Global_1935436.f_6 = 0;
						}
					}
					Global_1935436.f_7 = 0;
					Global_1935436.f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 50000));
				}
				else
				{
					Global_1935436.f_5 = (MISC::GET_GAME_TIMER() + 9999999);
				}
			}
			break;
		case 1:
			if (MISC::GET_GAME_TIMER() >= Global_1935436.f_5)
			{
				if (__LIB_0__::func_113())
				{
					iVar1 = 2;
				}
				else
				{
					iVar1 = 4;
				}
				if (Global_1935436.f_7 < iVar1)
				{
					if (func_389(&uVar2, &uVar3, 1))
					{
						__LIB_2__::func_214(Global_35, 0, "PLAYER_DRUNK_MERRY_SINGING", "", -1f, Global_1935436.f_6 + 1, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
						Global_1935436.f_6++;
						if (Global_1935436.f_6 >= iVar1)
						{
							Global_1935436.f_6 = 0;
						}
						Global_1935436.f_7++;
						Global_1935436.f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 120000));
					}
					else
					{
						Global_1935436.f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 23000));
					}
				}
			}
			if (Global_1935436.f_9 >= 0.75f)
			{
				Global_1935436 = 2;
				func_387();
			}
			else if (Global_1935436.f_9 < 0.5f && Global_1935436.f_12.f_1 == 0f)
			{
				__LIB_1__::func_716(0);
				Global_1935436 = 0;
			}
			break;
		case 2:
			if ((__LIB_0__::func_396(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)) || Global_1357549.f_1495 & 512 != 0)
			{
				__LIB_3__::func_180(1);
			}
			if (Global_1935436.f_9 < 0.75f)
			{
				Global_1935436.f_5 = (MISC::GET_GAME_TIMER() + 9999999);
				Global_1935436 = 1;
			}
			break;
	}
	if (Global_1935436 >= 1)
	{
		func_393();
	}
	if (__LIB_10__::func_697() && __LIB_17__::func_673())
	{
		func_396();
	}
}

void func_91()
{
	func_397(0);
}

void func_92()
{
	int iVar0;
	bool bVar1;
	if (__LIB_0__::func_58())
	{
		return;
	}
	if (Global_1934765.f_273)
	{
		return;
	}
	iVar0 = __LIB_0__::func_12();
	if (__LIB_0__::func_20(iVar0))
	{
		if (Global_1888801[iVar0 /*35*/].f_20 == 3)
		{
			if (__LIB_0__::func_898(__LIB_9__::func_583(iVar0)))
			{
				if (__LIB_9__::func_648(iVar0, 0))
				{
					__LIB_1__::func_408(__LIB_9__::func_583(iVar0), 0, 0);
				}
			}
		}
	}
	func_403();
	bVar1 = func_404();
	if (Global_1934765.f_272)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (func_405(0, 0))
		{
			__LIB_10__::func_735();
			Global_1934765.f_272 = 0;
			Global_1934765.f_274 = 0;
			Global_1934765 = 0;
		}
	}
	func_407();
	func_408();
	func_409();
}

void func_94()
{
	int iVar0;
	func_410();
	func_411(&Global_1899778);
	iVar0 = 0;
	while (iVar0 < Global_1899528.f_45)
	{
		Global_1899528.f_45[iVar0] = -15;
		iVar0++;
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_412(&Global_1899778);
	Global_1899528.f_214 = __LIB_2__::func_776();
	Global_1899528.f_215 = __LIB_2__::func_765(2057, 0);
	Global_1899528.f_209 = MISC::IS_MINIGAME_IN_PROGRESS();
	Global_1899528.f_218 = __LIB_1__::func_235(PLAYER::PLAYER_PED_ID());
	Global_1899528.f_221 = __LIB_0__::func_492(1);
	if (Global_1899528.f_217)
	{
		func_416();
	}
	if (Global_1899528.f_216 != Global_1899528.f_214)
	{
		if (Global_1899528.f_214)
		{
			__LIB_6__::func_561(0);
		}
		else
		{
			__LIB_6__::func_559(0);
		}
		Global_1899528.f_216 = Global_1899528.f_214;
	}
	if (__LIB_7__::func_719())
	{
		Global_1899528.f_207 = MISC::GET_FRAME_COUNT();
		PED::SET_PED_RESET_FLAG(Global_35, 219, true);
		if (!__LIB_10__::func_715(5))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DYNAMIC_SCENARIO"), false);
		}
	}
	if (MISC::GET_FRAME_COUNT() < Global_1899528.f_206 + 60 || MISC::GET_FRAME_COUNT() < Global_1899528.f_207 + 60)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_STAND_SWITCH"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_MOUNT_SWITCH"), false);
	}
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (__LIB_4__::func_497())
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		Global_1899528.f_219++;
		if (Global_1899528.f_219 >= 10)
		{
			Global_1899528.f_219 = 0;
		}
		if (!__LIB_1__::func_56(Global_1899528.f_219))
		{
			iVar0 = __LIB_1__::func_51(Global_1899528.f_219);
			if (Global_1894899.f_2 != __LIB_16__::func_248(Global_1899528.f_219) && !__LIB_5__::func_545(iVar0))
			{
				__LIB_1__::func_830(Global_1899528.f_219);
				__LIB_1__::func_819(Global_1899528.f_219);
				return;
			}
			if (!Global_1899528.f_214)
			{
				if (__LIB_1__::func_224(__LIB_1__::func_55(Global_1899528.f_219)) && __LIB_1__::func_241(iVar0))
				{
					iVar1 = __LIB_0__::func_80(iVar0);
					if (iVar1 == -1)
					{
						__LIB_1__::func_319(iVar0);
					}
				}
			}
		}
		iVar2++;
	}
}

void func_96()
{
	func_431(&Global_1899778);
}

void func_97()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_750(&(Global_1391438.f_5), 8))
	{
		if (func_433(&(Global_1391438.f_414), Global_1572864.f_8, Global_1572864.f_9))
		{
			__LIB_0__::func_63(&(Global_1391438.f_5), 8, 0);
		}
		return;
	}
	if (Global_1391438.f_491 != -589165916)
	{
		if (func_435(Global_1391438.f_491, 0))
		{
			Global_1391438.f_491 = -589165916;
		}
		return;
	}
	if (__LIB_0__::func_750(&(Global_1391438.f_5), 64))
	{
		if (func_436(&(Global_1391438.f_209)))
		{
			__LIB_0__::func_63(&(Global_1391438.f_5), 64, 0);
			func_437(&(Global_1391438.f_209));
		}
		else
		{
			return;
		}
	}
	if (__LIB_0__::func_383() || __LIB_0__::func_13(32))
	{
		return;
	}
	iVar2 = __LIB_0__::func_317();
	switch (iVar2)
	{
		case 1:
			if (__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
		case 3:
			if (__LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
	}
	if (__LIB_0__::func_296(256, 0, 1) && !bVar1)
	{
		return;
	}
	switch (Global_1391438.f_4)
	{
		case 0:
			if (__LIB_0__::func_30(Global_1391438.f_594))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(Global_1391438.f_594) && !STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(Global_1391438.f_594, Global_36))
				{
					STREAMING::_REMOVE_IMAP(Global_1391438.f_594);
					Global_1391438.f_594 = __LIB_1__::func_976();
				}
			}
			if (bVar1)
			{
				if (!__LIB_1__::func_895(5000))
				{
					iVar3 = __LIB_1__::func_316(0, __LIB_16__::func_200(__LIB_0__::func_317()));
					if (!__LIB_0__::func_702(iVar3))
					{
						__LIB_1__::func_319(iVar3);
					}
					if (!__LIB_1__::func_44(iVar3) && !__LIB_1__::func_25(iVar3, 1))
					{
						if (BUILTIN::VDIST2(Global_36, __LIB_1__::func_546(__LIB_0__::func_317())) < 62500f)
						{
							__LIB_10__::func_672(func_449(__LIB_0__::func_317()), 0);
						}
					}
				}
			}
			if (!__LIB_16__::func_373(1))
			{
				return;
			}
			if (func_452())
			{
				Global_1391438.f_2 = CLOCK::GET_CLOCK_HOURS();
				Global_1391438.f_4 = 1;
			}
			else
			{
				Global_1391438.f_4 = 3;
				__LIB_18__::func_301(1, 3);
			}
			break;
		case 1:
			if (!__LIB_2__::func_765(256, 0))
			{
				__LIB_1__::func_706(&(Global_1391438.f_414));
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (Global_1391438.f_7[iVar0 /*99*/].f_9 == -589165916)
				{
					func_437(&(Global_1391438.f_7[iVar0 /*99*/]));
					if (func_455(&(Global_1391438.f_7[iVar0 /*99*/])))
					{
						Global_1391438.f_7[iVar0 /*99*/].f_12 = iVar0;
						if (!__LIB_0__::func_702(Global_1391438.f_7[iVar0 /*99*/].f_10) && !__LIB_1__::func_44(Global_1391438.f_7[iVar0 /*99*/].f_10))
						{
							__LIB_1__::func_319(Global_1391438.f_7[iVar0 /*99*/].f_10);
						}
						__LIB_18__::func_301(1, 1);
					}
					else
					{
						__LIB_18__::func_301(1, 2);
					}
				}
				iVar0++;
			}
			Global_1391438.f_4 = 3;
			break;
		case 3:
			if (!__LIB_0__::func_75(&(Global_1391438.f_595)))
			{
				__LIB_1__::func_283(&(Global_1391438.f_595), 1);
			}
			else if (__LIB_0__::func_265(&(Global_1391438.f_595)) > 5f)
			{
				Global_1391438.f_4 = 4;
				return;
			}
			if (func_459())
			{
				if (!__LIB_0__::func_296(0, 0, 1) && __LIB_0__::func_12() == __LIB_0__::func_61())
				{
					if (func_460(__LIB_0__::func_317()))
					{
						if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_598[0], false))
						{
							if (__LIB_17__::func_756(0))
							{
								if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_POKER_LIGHT")))
								{
									SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("ACT_CAMP_POKER_LIGHT"));
									return;
								}
								else
								{
									Global_1391438.f_598[0] = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("ACT_CAMP_POKER_LIGHT"), 1024);
								}
							}
						}
						if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_598[1], false))
						{
							if (__LIB_17__::func_756(1))
							{
								if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_DOMINOES_LIGHT")))
								{
									SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("ACT_CAMP_DOMINOES_LIGHT"));
									return;
								}
								else
								{
									Global_1391438.f_598[1] = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("ACT_CAMP_DOMINOES_LIGHT"), 1024);
								}
							}
						}
					}
					if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_598[2], false))
					{
						if (__LIB_17__::func_756(2))
						{
							if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_FFF_LIGHT")))
							{
								SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("ACT_CAMP_FFF_LIGHT"));
								return;
							}
							else
							{
								Global_1391438.f_598[2] = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("ACT_CAMP_FFF_LIGHT"), 1024);
							}
						}
					}
				}
				Global_1391438.f_4 = 4;
			}
			break;
		case 4:
			if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_POKER_LIGHT")))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_poker_light");
			}
			if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_DOMINOES_LIGHT")))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_dominoes_light");
			}
			if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_FFF_LIGHT")))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_fff_light");
			}
			__LIB_0__::func_37(&(Global_1391438.f_595));
			Global_1391438.f_4 = 0;
			break;
	}
}

void func_98()
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_206[0], false))
	{
		func_437(&(Global_1391438.f_7[0 /*99*/]));
	}
	else
	{
		SCRIPTS::_0x7DE4643157AD646C(Global_1391438.f_206[0]);
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_206[1], false))
	{
		func_437(&(Global_1391438.f_7[1 /*99*/]));
	}
	else
	{
		SCRIPTS::_0x7DE4643157AD646C(Global_1391438.f_206[1]);
	}
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_POKER_LIGHT")))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_poker_light");
	}
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_DOMINOES_LIGHT")))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_dominoes_light");
	}
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_FFF_LIGHT")))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_fff_light");
	}
}

void func_99()
{
	func_463();
	func_464();
	func_465();
	func_466();
	func_467();
	func_468();
	func_469();
	func_470();
	func_471();
	func_472();
	func_473();
}

void func_101()
{
	Global_1415419.f_9720 = 0;
	func_474();
	func_475();
}

void func_102()
{
	int iVar0;
	struct<16> Var1;
	bool bVar17;
	int iVar18;
	struct<13> Var19;
	func_476();
	if (((__LIB_2__::func_776() || CAM::IS_SCREEN_FADED_OUT()) && !Global_1415419.f_6) && (!__LIB_0__::func_27(Global_1415419.f_3, 1) || __LIB_0__::func_1(Global_1935630, 2097152)))
	{
		if (Global_1415419.f_9720 > 0)
		{
			__LIB_7__::func_518(0);
			__LIB_7__::func_519();
		}
		return;
	}
	switch (Global_1415419.f_2)
	{
		case 0:
			if (Global_1415419.f_9756 != __LIB_1__::func_898())
			{
				if (__LIB_0__::func_69(__LIB_1__::func_898()))
				{
					func_474();
					Global_1415419.f_9756 = __LIB_1__::func_898();
					__LIB_5__::func_234("ambient_vignette_manager_loader", 523);
					Var1.f_14 = 1024;
					StringCopy(&(Var1.f_10), "ambient_vignette_manager_loader", 32);
					__LIB_4__::func_709(Var1, 2);
				}
				return;
			}
			if (__LIB_11__::func_158(0, 0))
			{
				iVar0 = __LIB_18__::func_300();
				if (iVar0 != -1)
				{
					bVar17 = func_485();
					if (Global_1415419.f_16 != -1)
					{
						iVar18 = 0;
						if (bVar17 || __LIB_11__::func_174(Global_1415419.f_16, &iVar18, 1, 1, 0) != -1)
						{
							Global_1415419.f_17 = iVar0;
							Global_1415419.f_9721[iVar0 /*8*/] = Global_1415419.f_16;
							Global_1415419.f_9721[iVar0 /*8*/].f_2 = 1;
							Global_1415419.f_9720++;
							__LIB_0__::func_8(&(Global_1415419.f_19[Global_1415419.f_16 /*12*/].f_11), 2);
							SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(Global_1415419.f_19[Global_1415419.f_16 /*12*/]);
							Global_1415419.f_9718 = !Global_1415419.f_9718;
							Global_1415419.f_2 = 1;
						}
						else
						{
							__LIB_0__::func_8(&(Global_1415419.f_19[Global_1415419.f_16 /*12*/].f_11), 2);
							__LIB_0__::func_8(&(Global_1415419.f_19[Global_1415419.f_16 /*12*/].f_11), 1);
							Global_1415419.f_9718 = !Global_1415419.f_9718;
						}
						return;
					}
				}
				Global_1415419.f_9719 = MISC::GET_GAME_TIMER();
			}
			Global_1415419.f_9718 = !Global_1415419.f_9718;
			break;
		case 1:
			if (__LIB_2__::func_824(Global_1415419.f_16))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(Global_1415419.f_19[Global_1415419.f_16 /*12*/]);
				if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(Global_1415419.f_19[Global_1415419.f_16 /*12*/]))
				{
					func_488(Global_1415419.f_16);
					Var19 = -1;
					Var19.f_11 = -1;
					Var19 = Global_1415419.f_16;
					Var19.f_1 = { Global_1415419.f_9 };
					Var19.f_4 = { Global_1415419.f_12 };
					Var19.f_7 = Global_1415419.f_15;
					Var19.f_11 = Global_1415419.f_17;
					Var19.f_12 = Global_1415419.f_18;
					if (!ENTITY::IS_ENTITY_DEAD(Global_1415419.f_9758))
					{
						Var19.f_8 = Global_1415419.f_9758;
						Var19.f_10 = 1;
						Global_1415419.f_9758 = 0;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Global_1415419.f_9759))
					{
						Var19.f_9 = Global_1415419.f_9759;
						Var19.f_10 = 1;
						Global_1415419.f_9759 = 0;
					}
					Global_1415419.f_9 = { 0f, 0f, 0f };
					Global_1415419.f_12 = { 0f, 0f, 0f };
					Global_1415419.f_15 = 0;
					Global_1415419.f_18 = 0;
					Global_1415419.f_9721[Global_1415419.f_17 /*8*/].f_1 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Global_1415419.f_19[Global_1415419.f_16 /*12*/], &Var19, 13, 1024);
					Global_1415419.f_9721[Global_1415419.f_17 /*8*/].f_3 = Global_1415419.f_6;
					SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Global_1415419.f_19[Global_1415419.f_16 /*12*/]);
					Global_1415419.f_16 = -1;
					Global_1415419.f_17 = -1;
					Global_1415419.f_9719 = MISC::GET_GAME_TIMER();
					Global_1415419.f_6 = 0;
					Global_1415419.f_2 = 0;
				}
			}
			else
			{
				Global_1415419.f_9721[Global_1415419.f_17 /*8*/].f_2 = 0;
				Global_1415419.f_16 = -1;
				Global_1415419.f_17 = -1;
				Global_1415419.f_9719 = MISC::GET_GAME_TIMER();
				Global_1415419.f_2 = 0;
			}
			break;
	}
}

void func_103()
{
	__LIB_7__::func_518(1);
	__LIB_7__::func_519();
	func_474();
}

void func_105()
{
	if (__LIB_0__::func_2() == -1)
	{
		func_489();
		func_490();
		func_491();
		func_492();
		func_493();
		if (Global_40.f_9045.f_5)
		{
			if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_BAND_ROOT")) >= 1)
			{
				Global_40.f_9045.f_5 = 0;
			}
		}
		if (__LIB_1__::func_187(43))
		{
			if (__LIB_1__::func_187(47))
			{
				if (!__LIB_1__::func_187(48))
				{
					func_494();
				}
			}
			else if (__LIB_1__::func_187(46))
			{
				if (!__LIB_1__::func_187(47))
				{
					func_494();
				}
			}
			else if (__LIB_1__::func_187(45))
			{
				if (!__LIB_1__::func_187(46))
				{
					func_494();
				}
			}
			else if (__LIB_1__::func_187(44))
			{
				if (!__LIB_1__::func_187(45))
				{
					func_494();
				}
			}
			else if (!__LIB_1__::func_187(44))
			{
				func_494();
			}
		}
	}
}

void func_106()
{
	int iVar0;
	STREAMING::REQUEST_PTFX_ASSET();
	Local_30.f_12 = "MGFSH_Insect_Sounds";
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_30.f_13[iVar0 /*9*/].f_8 = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
	func_495(&(Local_30.f_32));
}

void func_107()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	func_496(&(Local_30.f_32));
	func_497(&Local_30);
}

void func_108()
{
	func_498(&Local_30);
	STREAMING::REMOVE_PTFX_ASSET();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_30.f_12))
	{
		AUDIO::_0x531A78D6BF27014B(Local_30.f_12);
	}
}

void func_109()
{
	switch (Global_1898077.f_1)
	{
		case 0:
			func_499();
			break;
		case 3:
			func_499();
			break;
		case 4:
			func_499();
			break;
	}
}

void func_111()
{
	switch (Global_1879514)
	{
		case 0:
			if (!__LIB_0__::func_6(Global_1879514.f_1))
			{
				return;
			}
			if (func_510(Global_1879514.f_6, 16))
			{
				__LIB_0__::func_8(&(Global_1879514.f_6), 16);
				return;
			}
			if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
			{
				return;
			}
			if (__LIB_0__::func_13(32768))
			{
				return;
			}
			if (!__LIB_0__::func_382(64))
			{
				return;
			}
			if ((Global_1879514.f_13 && !__LIB_1__::func_195()) && __LIB_6__::func_110())
			{
				return;
			}
			if (__LIB_1__::func_895(1000))
			{
				return;
			}
			if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) || CAM::IS_SCREEN_FADING_IN())
			{
				return;
			}
			if (HUD::_0x7EC0D68233E391AC(10) == 2 || HUD::_0x7EC0D68233E391AC(10) == 4)
			{
				return;
			}
			if (__LIB_1__::func_927())
			{
				Global_1879514.f_7 = MISC::GET_GAME_TIMER();
				return;
			}
			if (__LIB_1__::func_195() && Global_1879514.f_1 != __LIB_3__::func_918(76))
			{
				__LIB_1__::func_790(__LIB_1__::func_613(Global_1879514.f_1));
				func_517(2);
				return;
			}
			if (__LIB_0__::func_30(UIFEED::_0xC17F69E1418CD11F(6)))
			{
				return;
			}
			if (Global_1879514.f_18 && (!CAM::IS_SCREEN_FADED_IN() || __LIB_0__::func_383()))
			{
				return;
			}
			if (Global_1879514.f_1 == __LIB_3__::func_918(76) && (!__LIB_1__::func_25(__LIB_3__::func_918(77), 1) || __LIB_1__::func_895(5000)))
			{
				return;
			}
			if (__LIB_0__::func_700(Global_1879514.f_1) == 8 && !__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(Global_1879514.f_1) /*49*/].f_12, 262144))
			{
				func_517(2);
			}
			else
			{
				if (func_521())
				{
					Global_1879514.f_10 = 1;
				}
				if (Global_1879514.f_18)
				{
					__LIB_0__::func_703(0, -1);
				}
				func_522();
				if (!Global_1879514.f_18 && Global_1879514.f_1 == __LIB_3__::func_918(58))
				{
					__LIB_1__::func_777(__LIB_3__::func_918(58), 600000, 1, 1f, 1, 0, 0, 1);
				}
				func_517(1);
			}
			break;
		case 1:
			if (MISC::GET_GAME_TIMER() >= Global_1879514.f_7 + 1000)
			{
				if ((UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PLAYER_MENU")) || !__LIB_0__::func_269(Global_1879514.f_17)) || MISC::GET_GAME_TIMER() >= Global_1879514.f_7 + 30000)
				{
					func_517(2);
				}
			}
			break;
		case 2:
			if (Global_1879514.f_9)
			{
				HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
			}
			if (Global_1879514.f_17 != 0 && UIFEED::_0x59FA676177DBE4C9(Global_1879514.f_17) != 6)
			{
				UIFEED::_0xDD1232B332CBB9E7(6, 1, 0);
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
			__LIB_0__::func_496();
			func_517(0);
			break;
	}
}

void func_115()
{
	var uVar0;
	MISC::_COPY_MEMORY(&Global_1430242, &uVar0, 10);
}

void func_116()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bVar5 = ENTITY::IS_ENTITY_DEAD(Global_35);
	iVar4 = 0;
	while (iVar4 < Global_1898330)
	{
		if (!__LIB_0__::func_6(Global_1898330[iVar4]))
		{
		}
		else
		{
			__LIB_1__::func_130(iVar4, 0);
			if (__LIB_0__::func_6(Global_1898330[iVar4]))
			{
				switch (__LIB_0__::func_700(Global_1898330[iVar4]))
				{
					case 1:
						if (!bVar0)
						{
							bVar1 = __LIB_1__::func_238();
							bVar0 = true;
						}
						if (!bVar2)
						{
							bVar3 = __LIB_0__::func_296(0, 1, 1);
							bVar2 = true;
						}
						iVar6 = Global_1898346[iVar4 /*6*/].f_4;
						func_132(iVar6, iVar4, bVar1, __LIB_0__::func_2(), bVar3, bVar5);
						break;
				}
			}
		}
		iVar4++;
	}
}

void func_117()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bVar0 = __LIB_0__::func_13(4112);
	bVar1 = __LIB_0__::func_1(Global_1935630, 2048);
	iVar2 = 0;
	while (iVar2 < Global_1898330)
	{
		if (__LIB_0__::func_6(Global_1898330[iVar2]))
		{
			switch (__LIB_0__::func_700(Global_1898330[iVar2]))
			{
				case 8:
					iVar3 = __LIB_0__::func_76(Global_1898330[iVar2]);
					if (__LIB_0__::func_5(iVar3))
					{
						if (__LIB_0__::func_1(Global_1347702[iVar3 /*49*/].f_13, 256) && !SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iVar3 /*49*/].f_42, false))
						{
							func_527(iVar3);
							func_143(iVar3);
							func_528(Global_1898330[iVar2], bVar0, bVar1);
						}
					}
					break;
			}
		}
		iVar2++;
	}
}

int func_121(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bVar4 = __LIB_0__::func_2() == -1;
	if (bVar4)
	{
		bVar3 = bParam1;
	}
	else
	{
		bVar3 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1);
	}
	if (!__LIB_0__::func_27(Global_1898439, 1024))
	{
		__LIB_10__::func_846();
		__LIB_1__::func_581(&Global_1898439, 1024);
		if (bParam3)
		{
			return 0;
		}
	}
	iVar2 = (Global_1898329 - 1);
	while (iVar2 >= 0)
	{
		if (__LIB_0__::func_6(Global_1898330[iVar2]) && __LIB_0__::func_702(Global_1898330[iVar2]))
		{
			if (Global_1898330[iVar2] == Global_1392581.f_1)
			{
				Jump @578; //curOff = 140
			}
			else if (!__LIB_3__::func_919(iVar2, 1024))
			{
				__LIB_1__::func_130(iVar2, 0);
				switch (Global_1898346[iVar2 /*6*/].f_3)
				{
					case 1:
						if (!Global_1835011[iVar0 /*74*/].f_71)
						{
							iVar0 = Global_1898346[iVar2 /*6*/].f_4;
							if (__LIB_0__::func_83(iVar0))
							{
								if (!bParam1)
								{
									__LIB_9__::func_983(iVar0, 0);
								}
								func_534(iVar0, -1, bVar3, 1, 1, 0, 0);
								__LIB_10__::func_621(iVar0);
								if (bVar3 && !__LIB_3__::func_740(&(Global_1835011[iVar0 /*74*/]), 32768))
								{
									__LIB_5__::func_450(&(Global_1835011[iVar0 /*74*/]), 32768);
									if ((iVar0 == 7 || iVar0 == 17) && Global_1894899.f_2 == Global_1835011[iVar0 /*74*/].f_21)
									{
										Global_1835011[iVar0 /*74*/].f_64 = __LIB_0__::func_23();
									}
								}
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 6:
						iVar5 = Global_1898346[iVar2 /*6*/].f_4;
						if (iVar5 == 0 && __LIB_0__::func_2() == -1)
						{
							iVar6 = Global_1898346[iVar2 /*6*/].f_5;
							if (Global_1392626[iVar6 /*32*/].f_3 != __LIB_0__::func_298(0))
							{
								if (bVar3)
								{
									__LIB_10__::func_835(iVar6, 0, 0);
								}
								else
								{
									__LIB_10__::func_835(iVar6, 1, 0);
								}
								if (__LIB_0__::func_702(Global_1392626[iVar6 /*32*/].f_3))
								{
									__LIB_1__::func_722(Global_1392626[iVar6 /*32*/].f_3);
								}
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 2:
						if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
						{
							MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
						}
						break;
					default:
						if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
						{
							MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
						}
						break;
				}
			}
		}
		iVar2 = (iVar2 + -1);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(Global_1898439, 8192))
		{
			if (bVar3 && !Global_43891)
			{
				__LIB_13__::func_910(16384);
			}
			else
			{
				__LIB_10__::func_825();
			}
			__LIB_1__::func_581(&Global_1898439, 8192);
		}
		iVar7 = 0;
		while (iVar7 < Global_40.f_450)
		{
			iVar1 = Global_40.f_450[iVar7];
			if (__LIB_0__::func_5(iVar1) && Global_1347702[iVar1 /*49*/] != 45)
			{
				if (__LIB_0__::func_1(Global_1347702[iVar1 /*49*/].f_13, 256))
				{
				}
				else if (Global_1347702[iVar1 /*49*/].f_15 != __LIB_0__::func_298(0))
				{
					if (__LIB_0__::func_64(0) == 1 || __LIB_0__::func_64(0) == 8)
					{
						__LIB_18__::func_261(iVar1, 1, 0, 1, 32);
					}
					else
					{
						__LIB_12__::func_81(iVar1, 0);
					}
					if (__LIB_0__::func_702(Global_1347702[iVar1 /*49*/].f_15))
					{
						__LIB_1__::func_722(Global_1347702[iVar1 /*49*/].f_15);
					}
				}
				__LIB_0__::func_8(&(Global_1347702[iVar1 /*49*/].f_13), 2);
			}
			iVar7++;
		}
	}
	__LIB_10__::func_803();
	if (bParam2)
	{
		func_545();
	}
	__LIB_10__::func_714();
	__LIB_8__::func_996();
	return 1;
}

void func_122()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < Global_1898330)
	{
		if (__LIB_0__::func_6(Global_1898330[iVar0]))
		{
			if (!__LIB_0__::func_6(Global_1898330[iVar0]))
			{
			}
			else
			{
				iVar2 = __LIB_0__::func_291(Global_1898330[iVar0]);
				if (iVar2 == 3 || iVar2 == 4)
				{
				}
				else if (iVar2 != 1 && iVar2 != 2)
				{
					__LIB_1__::func_722(Global_1898330[iVar0]);
				}
				else
				{
					switch (__LIB_0__::func_700(Global_1898330[iVar0]))
					{
						case 2:
							iVar1 = Global_1898346[iVar0 /*6*/].f_4;
							if (__LIB_1__::func_255(iVar1) && !SCRIPTS::IS_THREAD_ACTIVE(Global_1392581, false))
							{
								if (iVar1 == 2)
								{
									if (__LIB_0__::func_2() == -1)
									{
										__LIB_0__::func_11(iVar0);
										func_548(iVar0);
									}
								}
							}
							break;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_59(Global_1888801[iParam0 /*35*/].f_13))
	{
		return true;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (Global_1395601.f_5[iVar1 /*28*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if ((iVar0 > -1 && iVar0 < 17) && Global_40.f_9384[iVar0 /*2*/] & 8192 != 0)
	{
		return true;
	}
	return false;
}

int func_125()
{
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (__LIB_2__::func_776())
	{
		return 1;
	}
	if (__LIB_1__::func_185(43) && !__LIB_1__::func_185(44))
	{
		return 2;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		return 4;
	}
	if (__LIB_0__::func_100())
	{
		return 4;
	}
	if (PED::IS_PED_IN_COVER(Global_35, false, false))
	{
		return 4;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return 4;
	}
	if (PED::_IS_PED_LASSOED(Global_35) || !ENTITY::IS_ENTITY_DEAD(PED::_GET_LASSO_TARGET(Global_35)))
	{
		return 4;
	}
	if (PED::_IS_PED_HOGTIED(Global_35) || PED::_IS_PED_HOGTYING(Global_35))
	{
		return 4;
	}
	if (__LIB_0__::func_103())
	{
		return 4;
	}
	if ((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT())
	{
		return 4;
	}
	return 0;
}

void func_132(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (!Global_1835011[iParam0 /*74*/].f_71)
	{
		if (iParam3 == -1)
		{
			if (__LIB_8__::func_617(iParam0))
			{
				return;
			}
			if (bParam2)
			{
				func_534(iParam0, iParam1, 0, 1, 0, 0, bParam2);
				return;
			}
			if (iParam0 == 14 || iParam0 == 34)
			{
				if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false))
				{
					if ((Global_1898346[iParam1 /*6*/].f_1 & 4194304 == 0 && __LIB_1__::func_43(iParam0)) || (Global_1898346[iParam1 /*6*/].f_1 & 4194304 != 0 && !__LIB_1__::func_43(iParam0)))
					{
						func_534(iParam0, -1, 0, 1, 0, 0, 0);
					}
				}
			}
			if (bParam4)
			{
				return;
			}
		}
		if (Global_1898346[iParam1 /*6*/].f_1 & 2097152 != 0)
		{
			__LIB_4__::func_728(iParam1, 2097152);
			func_534(iParam0, -1, 0, 1, 0, 0, 0);
			return;
		}
	}
	else if (!bParam4 && !Global_16)
	{
		Global_1835011[iParam0 /*74*/].f_71 = 0;
		func_565(iParam0, BUILTIN::VDIST2(__LIB_1__::func_204(iParam0), Global_36), iParam1, 0, 0);
	}
	if (iParam3 == -1)
	{
		if (iParam0 == 14)
		{
			if (!__LIB_1__::func_187(62))
			{
				return;
			}
			if (Global_1898346[iParam1 /*6*/].f_1 & 1 == 0)
			{
				if (!GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
				{
					Global_1835011[iParam0 /*74*/].f_72 = GRAPHICS::CREATE_TRACKED_POINT();
					GRAPHICS::SET_TRACKED_POINT_INFO(Global_1835011[iParam0 /*74*/].f_72, __LIB_1__::func_469(iParam0), 1f);
				}
				else if (CAM::IS_SCREEN_FADED_IN() && GRAPHICS::IS_TRACKED_POINT_VISIBLE(Global_1835011[iParam0 /*74*/].f_72))
				{
					return;
				}
			}
		}
		if ((__LIB_1__::func_185(37) && !__LIB_1__::func_185(43)) && __LIB_5__::func_451(iParam0))
		{
			return;
		}
	}
	func_568(iParam0, iParam1, iParam3, bParam5);
	if (iParam3 == -1)
	{
		if (iParam0 == 2)
		{
			if (!__LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 8192))
			{
				if (!__LIB_6__::func_110())
				{
					if ((__LIB_0__::func_296(0, 1, 1) || Global_1572864.f_8 != -1) || __LIB_1__::func_187(120))
					{
						__LIB_0__::func_7(&(Global_1835011[iParam0 /*74*/].f_29), 8192);
					}
					else if ((((MAP::DOES_BLIP_EXIST(Global_1835011[2 /*74*/].f_27) && MAP::DOES_BLIP_EXIST(Global_1347702[120 /*49*/].f_37)) && !__LIB_2__::func_453()) && HUD::_0x7EC0D68233E391AC(5) != 2) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						__LIB_8__::func_966(MISC::_CREATE_VAR_STRING(2, "WNT_FIRST", Global_1835011[2 /*74*/].f_27, Global_1347702[120 /*49*/].f_37), 10000, 0, 0, 0, 1);
						__LIB_0__::func_7(&(Global_1835011[iParam0 /*74*/].f_29), 8192);
					}
				}
			}
		}
	}
	if ((__LIB_4__::func_844(iParam0, iParam3) && !Global_1835011[iParam0 /*74*/].f_70) && SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false))
	{
		if (iParam0 == 14 && __LIB_1__::func_43(iParam0))
		{
			return;
		}
		fVar0 = BUILTIN::VDIST2(__LIB_5__::func_449(iParam0), Global_36);
		if (fVar0 <= (__LIB_5__::func_539(iParam0) * __LIB_5__::func_539(iParam0)) || Global_1898346[iParam1 /*6*/].f_1 & 1048576 != 0)
		{
			if (ITEMSET::IS_ITEMSET_VALID(Global_1835011[iParam0 /*74*/].f_60))
			{
				iVar1 = ITEMSET::GET_ITEMSET_SIZE(Global_1835011[iParam0 /*74*/].f_60);
				if (iVar1 > 0)
				{
					iVar3 = 0;
					while (iVar3 < iVar1)
					{
						iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, Global_1835011[iParam0 /*74*/].f_60);
						iVar6 = iVar5;
						if (ENTITY::DOES_ENTITY_EXIST(iVar6) && ENTITY::IS_ENTITY_A_PED(iVar6))
						{
							iVar2++;
							iVar7 = iVar6;
							if (ENTITY::IS_ENTITY_DEAD(iVar7))
							{
							}
							else
							{
								if (!PED::_0x5102307CE88798EB(iVar7))
								{
									PED::REQUEST_PED_VISIBILITY_TRACKING(iVar7);
								}
								if (!PED::IS_TRACKED_PED_VISIBLE(iVar7))
								{
								}
								else
								{
									bVar4 = true;
								}
								else
								{
									iVar3++;
								}
								if (iVar2 > 0)
								{
									if (!bVar4 && Global_1898346[iParam1 /*6*/].f_1 & 1048576 == 0)
									{
										return;
									}
								}
								iVar3 = 0;
								while (iVar3 < iVar1)
								{
									iVar8 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, Global_1835011[iParam0 /*74*/].f_60);
									iVar9 = iVar8;
									if (((ENTITY::DOES_ENTITY_EXIST(iVar9) && ENTITY::IS_ENTITY_A_PED(iVar9)) && !ENTITY::IS_ENTITY_DEAD(iVar9)) && PED::_0x5102307CE88798EB(iVar9))
									{
										PED::_0x3088634CF8C819CF(iVar9);
									}
									iVar3++;
								}
								Global_1835011[iParam0 /*74*/].f_70 = 1;
								__LIB_4__::func_728(iParam1, 1048576);
								MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
								MAP::REMOVE_BLIP(&(Global_1835011[iParam0 /*74*/].f_27));
								func_565(iParam0, fVar0, iParam1, 0, 1);
								Jump @1220; //curOff = 1160
								if ((!__LIB_0__::func_474(596) && MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27)) && MAP::IS_BLIP_ON_MINIMAP(Global_1835011[iParam0 /*74*/].f_27))
								{
									__LIB_1__::func_240(596, 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_135(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	iVar0 = uParam2;
	if (!__LIB_1__::func_76(iVar0))
	{
		return;
	}
	iVar1 = uParam3;
	if (__LIB_1__::func_243(iVar1))
	{
		return;
	}
	iVar2 = __LIB_1__::func_47(iVar1);
	if (iVar2 == -1)
	{
		return;
	}
	Global_1392915.f_121[iVar2 /*20*/].f_18 = 1;
	if (iVar0 == 3)
	{
		Global_1392915[iVar2 /*12*/].f_10 = Global_1900325.f_24;
	}
	iVar3 = __LIB_16__::func_248(iVar2);
	switch (iParam1)
	{
		case 1:
			Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
			__LIB_10__::func_728(iVar1, 0);
			return;
		case 2:
			Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
			__LIB_10__::func_728(iVar1, 1);
			return;
		case 3:
			Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
			__LIB_1__::func_830(iVar2);
			__LIB_1__::func_819(iVar2);
			return;
		case 4:
			Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
			__LIB_1__::func_788(iVar2);
			return;
		default:
			break;
	}
	if (Global_1894899.f_2 != iVar3 && !__LIB_5__::func_545(iParam0))
	{
		Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
		func_583(iVar1, 1);
		return;
	}
	if (!__LIB_1__::func_224(iVar0))
	{
		if (__LIB_10__::func_728(iVar1, 1))
		{
		}
		Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
		return;
	}
	if (__LIB_0__::func_21(iVar3, 4194304))
	{
		if (__LIB_10__::func_728(iVar1, 1))
		{
		}
		Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
		return;
	}
	if (func_584(iVar1))
	{
		Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
	}
}

void func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	vector3 vVar6;
	iVar0 = __LIB_0__::func_872(Global_1898330[iParam0]);
	iVar1 = __LIB_18__::func_909(iVar0);
	if (!__LIB_0__::func_29(iVar1))
	{
		return;
	}
	vVar2 = { Global_1934182[iVar0 /*18*/].f_1 };
	if (__LIB_0__::func_86(vVar2))
	{
		return;
	}
	if (!__LIB_10__::func_783(iVar0))
	{
		return;
	}
	if (BUILTIN::VDIST2(vVar2, Global_36) > 2025f)
	{
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1934182.f_73, false))
	{
		return;
	}
	if (!__LIB_2__::func_767(iVar1, 0))
	{
		return;
	}
	iVar5 = __LIB_2__::func_963(iVar1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar5))
		{
			vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar5, true, false) };
			if (BUILTIN::VDIST2(vVar6, vVar2) > 225f)
			{
				return;
			}
		}
		else
		{
			return;
		}
	}
	else
	{
		return;
	}
	func_590(iParam0);
}

void func_137(int iParam0)
{
	int iVar0;
	char cVar1[16];
	iVar0 = __LIB_0__::func_872(Global_1898330[iParam0]);
	if (func_591(iVar0) || !__LIB_6__::func_759(iVar0))
	{
		return;
	}
	if (func_593(iVar0) && !Global_40.f_9146.f_94[iVar0])
	{
		if (__LIB_6__::func_708(iVar0) && !UILOG::_UILOG_IS_ENTRY_REGISTERED(4, __LIB_6__::func_773(iVar0)))
		{
			__LIB_14__::func_111(iVar0);
			StringCopy(&cVar1, "READNOTE_", 16);
			StringConCat(&cVar1, __LIB_6__::func_714(iVar0), 16);
			__LIB_6__::func_807(iVar0, &cVar1, &cVar1, -1082130432 /* Float: -1f */);
		}
		return;
	}
	func_599(iVar0, 1);
}

void func_138(int iParam0)
{
	int iVar0;
	float fVar1;
	iVar0 = __LIB_0__::func_872(Global_1898330[iParam0]);
	if (!func_325(iVar0) || !__LIB_16__::func_198(iVar0))
	{
		func_601(iParam0, iVar0);
		return;
	}
	fVar1 = BUILTIN::VDIST(Global_36, Global_1392240.f_1[iVar0 /*18*/]);
	if (fVar1 > 200f)
	{
		func_601(iParam0, iVar0);
		return;
	}
	if (!__LIB_10__::func_622(iVar0, 8))
	{
		if (__LIB_16__::func_199(iVar0))
		{
			return;
		}
	}
	if (__LIB_10__::func_622(iVar0, 4))
	{
		return;
	}
	func_604(iParam0);
}

void func_140(int iParam0)
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = __LIB_0__::func_872(Global_1898330[iParam0]);
	if (!__LIB_4__::func_810(iVar0))
	{
		return;
	}
	func_605(iVar0);
}

void func_143(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	if (!__LIB_0__::func_702(Global_1347702[iParam0 /*49*/].f_15))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 256 == 0)
	{
		func_608(iParam0, CAM::IS_SCREEN_FADED_OUT(), __LIB_10__::func_698(), __LIB_2__::func_954());
		vVar0 = { __LIB_1__::func_440(iParam0) };
		fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
		func_610(iParam0, __LIB_1__::func_440(iParam0), fVar3);
	}
}

void func_144(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	if (__LIB_0__::func_750(&(Global_1391438.f_5), 8))
	{
		return;
	}
	if (iParam0 == Global_1391438.f_493.f_10)
	{
		return;
	}
	if (iParam0 == __LIB_1__::func_316(0, __LIB_16__::func_200(__LIB_0__::func_317())))
	{
		return;
	}
	if (!__LIB_19__::func_378(iParam0, &iVar0))
	{
		func_612(iParam0);
		return;
	}
	uVar2 = Global_1391438.f_7[iVar0 /*99*/].f_31;
	if (__LIB_8__::func_949(&(Global_1391438.f_7[iVar0 /*99*/]), &bVar1, 1, 1, 1, 0))
	{
		__LIB_4__::func_728(iParam1, 16);
		__LIB_4__::func_728(iParam1, 32);
		__LIB_4__::func_728(iParam1, 64);
		__LIB_0__::func_63(&uVar2, 256, 0);
		if (!bVar1)
		{
			func_612(iParam0);
		}
		if (!bVar1 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_206[iVar0], false))
		{
			func_437(&(Global_1391438.f_7[iVar0 /*99*/]));
		}
		return;
	}
	sVar3 = __LIB_0__::func_628(&(Global_1391438.f_7[iVar0 /*99*/].f_42));
	sVar4 = __LIB_0__::func_628(&(Global_1391438.f_7[iVar0 /*99*/].f_58));
	sVar5 = __LIB_0__::func_628(&(Global_1391438.f_7[iVar0 /*99*/].f_50));
	if (!__LIB_3__::func_919(iParam1, 64))
	{
		if (!__LIB_3__::func_919(iParam1, 16))
		{
			if (!__LIB_0__::func_750(&uVar2, 256))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
				{
					SCRIPTS::REQUEST_SCRIPT(sVar4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
				{
					SCRIPTS::REQUEST_SCRIPT(sVar3);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					SCRIPTS::REQUEST_SCRIPT(sVar5);
				}
				__LIB_0__::func_63(&uVar2, 256, 1);
			}
			__LIB_1__::func_109(iParam1, 16);
		}
		else if (!__LIB_3__::func_919(iParam1, 32))
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED(sVar4))
			{
				__LIB_1__::func_109(iParam1, 32);
			}
		}
	}
}

bool func_147(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return false;
	}
	if (__LIB_0__::func_13(62))
	{
		return false;
	}
	iVar0 = __LIB_1__::func_953(Global_40.f_4283);
	if (!__LIB_0__::func_20(iVar0))
	{
		return false;
	}
	if (iVar0 == 58)
	{
		return false;
	}
	if (!bParam2)
	{
		return false;
	}
	if (bParam0 || Global_1357549.f_1709 <= 1)
	{
		__LIB_10__::func_803();
	}
	else
	{
		Global_1357549.f_1708 = 1;
		if (!MAP::DOES_BLIP_EXIST(Global_1357549.f_1711))
		{
			Global_1357549.f_1711 = MAP::_BLIP_ADD_FOR_COORD(164094739, Global_1888801[iVar0 /*35*/].f_15);
			MAP::SET_BLIP_SPRITE(Global_1357549.f_1711, joaat("BLIP_CAMP"), true);
			bParam1 = false;
			MAP::_BLIP_SET_MODIFIER(Global_1357549.f_1711, -1986290853);
			if (__LIB_1__::func_59(Global_1888801[iVar0 /*35*/].f_13))
			{
				__LIB_3__::func_559(Global_1888801[iVar0 /*35*/].f_13, -1186550032);
				__LIB_10__::func_615(Global_1888801[iVar0 /*35*/].f_13, 1720107185);
			}
		}
		if (MAP::DOES_BLIP_EXIST(Global_1357549.f_1711))
		{
			if (bParam1)
			{
				MAP::_BLIP_SET_MODIFIER(Global_1357549.f_1711, 580546400);
				Global_1357549.f_1712 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1357549.f_1712) >= 5000 && Global_1357549.f_1712 != 0)
			{
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, 580546400);
				Global_1357549.f_1712 = 0;
			}
			if (Global_1357549.f_1709 >= 5 && Global_1357549.f_1710 != 5)
			{
				MAP::_BLIP_SET_MODIFIER(Global_1357549.f_1711, -1320029197);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1559275666);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, 198191338);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -41513897);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -404791027);
				Global_1357549.f_1710 = 5;
			}
			else if (Global_1357549.f_1709 == 4 && Global_1357549.f_1710 != 4)
			{
				MAP::_BLIP_SET_MODIFIER(Global_1357549.f_1711, -1559275666);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1320029197);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, 198191338);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -41513897);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -404791027);
			}
			else if (Global_1357549.f_1709 == 3 && Global_1357549.f_1710 != 3)
			{
				MAP::_BLIP_SET_MODIFIER(Global_1357549.f_1711, 198191338);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1559275666);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1320029197);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -41513897);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -404791027);
			}
			else if (Global_1357549.f_1709 == 2 && Global_1357549.f_1710 != 2)
			{
				MAP::_BLIP_SET_MODIFIER(Global_1357549.f_1711, -41513897);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1559275666);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, 198191338);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1320029197);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -404791027);
			}
			else if (Global_1357549.f_1709 == 1 && Global_1357549.f_1710 != 1)
			{
				MAP::_BLIP_SET_MODIFIER(Global_1357549.f_1711, -404791027);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1559275666);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, 198191338);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -41513897);
				MAP::_BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1320029197);
			}
			Global_1357549.f_1710 = Global_1357549.f_1709;
			if (!__LIB_0__::func_474(570))
			{
				__LIB_5__::func_473(570, Global_1357549.f_1711, 0);
			}
		}
	}
	return true;
}

void func_167(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_388())
	{
		if (__LIB_0__::func_9(iVar0) != 0)
		{
			if (!__LIB_1__::func_241(iVar0))
			{
				__LIB_1__::func_559(iVar0, bParam0, 2);
			}
		}
		iVar0++;
	}
}

void func_169()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return;
	}
	func_645("player_newWeaponType", "player_newWeaponTime");
	func_645("player_newPistolWeaponType", "player_newPistolWeaponTime");
	func_645("player_newRevolverWeaponType", "player_newRevolverWeaponTime");
	func_645("player_newRifleWeaponType", "player_newRifleWeaponTime");
	func_645("player_newShotgunWeaponType", "player_newShotgunWeaponTime");
}

void func_170()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_4__::func_25(Global_36);
	if (iVar0 != -1)
	{
		iVar1 = Global_1888801[iVar0 /*35*/].f_4;
		if (VOLUME::_DOES_VOLUME_EXIST(iVar1))
		{
			PERSISTENCE::_0xEFB5F34CC0953B27(iVar1);
		}
	}
}

void func_171(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, vector3 vParam12, vector3 vParam15, int iParam18)
{
	struct<16> Var0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1897952.f_40)
	{
		return;
	}
	if ((Global_1879534 || Global_1879534.f_1) || !__LIB_0__::func_382(64))
	{
		func_172();
		return;
	}
	if (__LIB_0__::func_28() && CAM::IS_SCREEN_FADED_IN())
	{
		if (!Global_1935630.f_4)
		{
			if ((!__LIB_0__::func_296(0, 0, 1) && !__LIB_0__::func_1(Global_1935630, 2048)) && !__LIB_0__::func_383())
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(Global_1897952.f_38))
				{
					Global_1897952.f_38 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam9, vParam3, vParam15, "Intro Volume");
				}
				if (!VOLUME::_DOES_VOLUME_EXIST(Global_1897952.f_39))
				{
					Global_1897952.f_39 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam12, vParam6, "Intro Warn Volume");
				}
				if (!__LIB_2__::func_157(Global_1897952.f_39, Global_36))
				{
					if (!__LIB_2__::func_157(Global_1897952.f_38, Global_36))
					{
						Global_1897952.f_40 = 1;
						StringCopy(&(Var0.f_10), "Grizzlies_Abandon", 32);
						Var0.f_14 = 512;
						Var0.f_15 = 1;
						Var0 = iParam18;
						__LIB_4__::func_709(Var0, 0);
					}
				}
			}
			else
			{
				func_172();
			}
		}
		else
		{
			func_172();
		}
	}
	else
	{
		func_172();
	}
}

void func_172()
{
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952.f_38))
	{
		VOLUME::_DELETE_VOLUME(Global_1897952.f_38);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952.f_39))
	{
		VOLUME::_DELETE_VOLUME(Global_1897952.f_39);
	}
	Global_1897952.f_40 = 0;
}

void func_173()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && PED::_0x3BDFCF25B58B0415(Global_35))
	{
		iVar1 = PED::_0xD0B7AEB56229D317(Global_35);
		if (__LIB_0__::func_2() == -1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("A_C_BEAR_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("A_C_BEARBLACK_01"))
				{
					Global_1347477.f_202 = iVar1;
				}
			}
		}
		if (!PED::IS_PED_INJURED(iVar1) && PED::IS_PED_HUMAN(iVar1))
		{
			if (!__LIB_0__::func_474(145))
			{
				__LIB_1__::func_240(145, 0);
			}
			else if (!DECORATOR::DECOR_EXIST_ON(Global_35, "grapple_tutorial_played"))
			{
				if (!DECORATOR::DECOR_EXIST_ON(Global_35, "grapple_start_time"))
				{
					DECORATOR::DECOR_SET_INT(Global_35, "grapple_start_time", iVar0);
					iVar2 = iVar0;
				}
				else
				{
					iVar2 = DECORATOR::DECOR_GET_INT(Global_35, "grapple_start_time");
				}
				if ((iVar0 - iVar2) > 5000)
				{
					__LIB_1__::func_240(145, 1);
					DECORATOR::DECOR_SET_BOOL(Global_35, "grapple_tutorial_played", true);
				}
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "grapple_start_time"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "grapple_start_time");
		}
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "grapple_tutorial_played"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "grapple_tutorial_played");
		}
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		iVar3 = PED::_GET_LASSO_TARGET(Global_35);
		if (iVar3 != 0)
		{
			if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_HUMAN(iVar3))
			{
				__LIB_1__::func_240(142, 0);
			}
		}
		if (PED::IS_PED_IN_ANY_BOAT(Global_35))
		{
			if (!VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(Global_35, false), joaat("RCBOAT")))
			{
				__LIB_1__::func_240(113, 0);
			}
		}
		if (PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
		{
			__LIB_1__::func_240(196, 0);
		}
		else
		{
			__LIB_4__::func_861(196);
		}
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_0__::func_474(598))
			{
				if ((HUD::IS_RADAR_PREFERENCE_SWITCHED_ON() && !HUD::IS_RADAR_HIDDEN()) && !UITUTORIAL::_UITUTORIAL_GET_IS_THREAT_INDICATOR_CAPABLE_RADAR_SHOWN())
				{
					__LIB_1__::func_240(598, 0);
				}
			}
			if (!__LIB_0__::func_474(599))
			{
				if (!HUD::IS_RADAR_PREFERENCE_SWITCHED_ON())
				{
					__LIB_1__::func_240(599, 0);
				}
			}
		}
		if (!__LIB_0__::func_474(607))
		{
			if (PLAYER::_0xAAED694CE814817F(PLAYER::PLAYER_ID()))
			{
				if (!__LIB_3__::func_145() && __LIB_1__::func_185(4))
				{
					if (MISC::GET_GAME_TIMER() >= Global_36614)
					{
						Global_40.f_11955++;
						if (!__LIB_0__::func_104() && !__LIB_2__::func_514())
						{
							if (Global_40.f_11955 >= 2)
							{
								__LIB_1__::func_240(607, 0);
							}
						}
						Global_36614 = (MISC::GET_GAME_TIMER() + 60000);
					}
				}
			}
		}
		iVar4 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			if (ENTITY::IS_ENTITY_AN_OBJECT(iVar4) && __LIB_10__::func_624(ENTITY::GET_ENTITY_MODEL(iVar4)))
			{
				iVar5 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar4);
				if (WEAPON::_GET_WEAPON_DEGRADATION(iVar5) > 0.75f && !DECORATOR::DECOR_EXIST_ON(iVar5, "worn_tutorial"))
				{
					__LIB_1__::func_240(150, 1);
					DECORATOR::DECOR_SET_BOOL(iVar5, "worn_tutorial", true);
				}
				if (!__LIB_0__::func_474(481))
				{
					if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar6, true, 0, false);
						if (WEAPON::_0x705BE297EEBDB95D(iVar6) && !WEAPON::_IS_WEAPON_SNIPER(iVar6))
						{
							if ((WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(iVar5, joaat("COMPONENT_RIFLE_SCOPE02")) || WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(iVar5, joaat("COMPONENT_RIFLE_SCOPE03"))) || WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(iVar5, joaat("COMPONENT_RIFLE_SCOPE04")))
							{
								__LIB_1__::func_240(481, 0);
							}
						}
					}
				}
			}
		}
	}
}

void func_174()
{
	if (Global_40.f_7860)
	{
		return;
	}
	__LIB_2__::func_268(3, 25, 0, 0);
	Global_40.f_7860 = 1;
}

void func_175()
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			if (iVar0 != Global_1935630.f_5)
			{
				if (func_654(&(Global_1935630.f_6), INTERIOR::_GET_INTERIOR_MINIMAP_HASH(iVar0)))
				{
					Global_1935630.f_5 = iVar0;
				}
			}
			if (__LIB_3__::func_205(iVar0) || __LIB_3__::func_206(iVar0))
			{
				Global_1935630.f_11 = 0;
			}
			else
			{
				Global_1935630.f_11 = 1;
			}
		}
		else
		{
			Global_1935630.f_11 = 0;
			if (INTERIOR::IS_VALID_INTERIOR(Global_1935630.f_5))
			{
				Global_1935630.f_5 = 0;
			}
		}
	}
	if ((Global_1430242 + Global_1430242.f_2) >= 3 && __LIB_1__::func_923())
	{
		func_658(1);
	}
	else
	{
		func_658(0);
	}
}

void func_177()
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	if (Global_1935630.f_53 < 10)
	{
		Global_1935630.f_53++;
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_8__::func_999(Global_40.f_7731[iVar0 /*5*/]);
		iVar0++;
	}
	Global_1935630.f_53 = 0;
	func_660("chinLong");
	func_660("chinShort");
	func_660("chopsLong");
	func_660("chopsShort");
	func_660("stacheLong");
	func_660("stacheShort");
	func_660("hairLong");
	func_660("hairShort");
}

void func_178()
{
	if (__LIB_0__::func_58())
	{
		return;
	}
	if (Global_1572887.f_8)
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	switch (__LIB_0__::func_12())
	{
		case 3:
		case 61:
		case 82:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_RURAL"), 1500);
			break;
		case 5:
		case 38:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_URBAN"), 1500);
			break;
		case 96:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_CATFISH_JACKSON"), 1500);
			break;
	}
	switch (__LIB_1__::func_898())
	{
		case 9:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_HEARTLAND"), 1500);
			break;
		case 11:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_SCARLETT_MEADOWS"), 1500);
			break;
		case 1:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_BIG_VALLEY"), 1500);
			break;
		case 15:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_CHOLLA_SPRINGS"), 1500);
			break;
		case 3:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_CUMBERLAND_FOREST"), 1500);
			break;
		case 0:
			MISC::_0xDE2C3B74D2B3705C(-348060143, 1500);
			break;
		case 4:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_GREAT_PLAINS"), 1500);
			break;
		case 6:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_GRIZZLIES_EAST"), 1500);
			break;
		case 7:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_GRIZZLIES_WEST"), 1500);
			break;
		case 10:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_ROANOKE_RIDGE"), 1500);
			break;
		case 12:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_TALL_TREES"), 1500);
			break;
	}
}

void func_179()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (!__LIB_0__::func_555(joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 6))
	{
		if (Global_17 && !__LIB_0__::func_91())
		{
			if (__LIB_0__::func_293(24) && !Global_43891)
			{
				if (!PED::_IS_METAPED_USING_COMPONENT(Global_35, joaat("HOLSTERS_LEFT")))
				{
					__LIB_1__::func_452(17, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 2, 0, 0);
				}
				if (PED::_IS_METAPED_USING_COMPONENT(Global_35, joaat("HOLSTERS_LEFT")))
				{
					Global_17 = 0;
					WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 3, true);
				}
			}
			else
			{
				Global_17 = 0;
			}
		}
	}
	if (Global_43891)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || !PED::_0xA0BC8FAED8CFEB3C(Global_35))
	{
		return;
	}
	if (__LIB_0__::func_156(524288))
	{
		if (Global_1347698.f_1 != 0)
		{
			PED::_0xDF631E4BCE1B1FC4(Global_35, -811108073, 0, false);
			Global_1347698.f_1 = 0;
			bVar2 = true;
		}
		if (Global_1347698.f_2 != 0)
		{
			PED::_0xDF631E4BCE1B1FC4(Global_35, joaat("AMMO_RIFLES"), 0, false);
			Global_1347698.f_2 = 0;
			bVar2 = true;
		}
		if (Global_1347698 != 0)
		{
			PED::_0xDF631E4BCE1B1FC4(Global_35, joaat("AMMO_PISTOLS"), 0, false);
			Global_1347698 = 0;
			bVar2 = true;
		}
		if (bVar2)
		{
			PED::_UPDATE_PED_VARIATION(Global_35, false, true, true, true, false);
		}
		return;
	}
	iVar6 = 25;
	if (Global_1946804.f_1497.f_1[iVar6 /*3*/] != Global_1946804.f_57[iVar6 /*11*/] && !__LIB_0__::func_555(joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1))
	{
		if ((__LIB_0__::func_154(Global_1935630.f_44) && WEAPON::_IS_WEAPON_TWO_HANDED(Global_1935630.f_44)) || WEAPON::_IS_WEAPON_SHOTGUN(Global_1935630.f_44))
		{
			iVar7 = Global_1935630.f_44;
		}
		else
		{
			iVar7 = __LIB_0__::func_153(Global_35, 9, 0, 0);
			if (!__LIB_0__::func_154(iVar7))
			{
				iVar7 = __LIB_0__::func_153(Global_35, 1, 0, 0);
				if ((__LIB_0__::func_154(iVar7) && WEAPON::_IS_WEAPON_ONE_HANDED(iVar7)) && !WEAPON::_IS_WEAPON_SHOTGUN(iVar7))
				{
					iVar7 = 0;
				}
			}
		}
		iVar1 = func_668(iVar7, 5, 0);
		if (iVar1 != 0)
		{
			bVar5 = true;
			iVar0 = Global_1347698.f_1;
			if (WEAPON::_IS_WEAPON_SHOTGUN(iVar7))
			{
				bVar5 = false;
				iVar0 = Global_1347698.f_2;
			}
			if (((iVar1 != iVar0 || __LIB_0__::func_156(262144)) || (bVar5 && Global_1347698.f_1 == 0)) || (!bVar5 && Global_1347698.f_2 == 0))
			{
				Global_1935630.f_49 = 1;
				bVar2 = true;
				if (bVar5)
				{
					PED::_0xDF631E4BCE1B1FC4(Global_35, -811108073, 0, false);
					Global_1347698.f_2 = 0;
					Global_1347698.f_1 = iVar1;
				}
				else
				{
					PED::_0xDF631E4BCE1B1FC4(Global_35, joaat("AMMO_RIFLES"), 0, false);
					Global_1347698.f_1 = 0;
					Global_1347698.f_2 = iVar1;
				}
				PED::_SET_PED_COMPONENT_ENABLED(Global_35, func_669(bVar5), false, false, false);
				if (iVar1 != joaat("BASE"))
				{
					PED::_0x66B957AAC2EAAEAB(Global_35, func_669(bVar5), iVar1, 0, false, 1);
				}
			}
		}
	}
	else if (Global_1935630.f_49)
	{
		PED::_0xDF631E4BCE1B1FC4(Global_35, -811108073, 0, false);
		PED::_0xDF631E4BCE1B1FC4(Global_35, joaat("AMMO_RIFLES"), 0, false);
		bVar2 = true;
		Global_1935630.f_49 = 0;
		Global_1347698.f_1 = 0;
		Global_1347698.f_2 = 0;
	}
	iVar6 = 26;
	bVar3 = Global_40.f_7729 == 7;
	bVar4 = (Global_1946804.f_1497.f_1[iVar6 /*3*/] != Global_1946804.f_57[iVar6 /*11*/] && !bVar3);
	if ((bVar4 || bVar3) && !__LIB_0__::func_555(joaat("MP_COMPONENT_TYPE_LOADOUT_2"), 1))
	{
		if ((__LIB_0__::func_154(Global_1935630.f_44) && WEAPON::_IS_WEAPON_ONE_HANDED(Global_1935630.f_44)) && !WEAPON::_IS_WEAPON_SHOTGUN(Global_1935630.f_44))
		{
			iVar8 = Global_1935630.f_44;
		}
		else
		{
			iVar8 = __LIB_0__::func_153(Global_35, 2, 0, 0);
		}
		iVar1 = func_668(iVar8, 5, bVar3);
		if (iVar1 != 0)
		{
			if (Global_1347698 != iVar1 || __LIB_0__::func_156(262144))
			{
				Global_1347698 = iVar1;
				Global_1935630.f_48 = 1;
				bVar2 = true;
				PED::_SET_PED_COMPONENT_ENABLED(Global_35, 600894672, false, false, false);
				if (iVar1 != joaat("BASE"))
				{
					PED::_0x66B957AAC2EAAEAB(Global_35, 600894672, iVar1, 0, false, 1);
				}
			}
		}
	}
	else if (Global_1935630.f_48)
	{
		PED::_0xDF631E4BCE1B1FC4(Global_35, joaat("AMMO_PISTOLS"), 0, false);
		bVar2 = true;
		Global_1935630.f_48 = 0;
		Global_1347698 = 0;
	}
	if (bVar2)
	{
		__LIB_0__::func_194(262144);
		PED::_UPDATE_PED_VARIATION(Global_35, false, true, true, true, false);
	}
}

void func_180()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = PED::_0x1F714E7A9DADFC42(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = PED::_0x7E02E4218D916B94(iVar0, 0, 0);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) > 250f)
	{
		iVar2 = 10;
		if ((Global_1946804.f_1497.f_1[iVar2 /*3*/] == Global_1946804.f_57[iVar2 /*11*/] && !__LIB_3__::func_411(Global_35, joaat("HATS"), 0)) && !Global_36619)
		{
			if (__LIB_6__::func_107(iVar1))
			{
				__LIB_1__::func_240(69, 0);
			}
			else
			{
				__LIB_1__::func_240(70, 0);
			}
		}
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
		OBJECT::DELETE_OBJECT(&iVar0);
	}
}

void func_181()
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_14__::func_345(iVar0))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_43894[iVar0], true, 0))
			{
				iVar1 = iVar0;
			}
			else
			{
				iVar0++;
			}
			if (iVar1 != -1)
			{
				if (Global_43894.f_12 == -1)
				{
					Global_43894.f_12 = iVar1;
				}
			}
			else if (Global_43894.f_12 != -1)
			{
				Global_43894.f_12 = -1;
			}
		}
	}
}

void func_182()
{
	int iVar0;
	int iVar1;
	if (Global_40.f_11095.f_38 < 5)
	{
		iVar0 = Global_40.f_11095.f_38 + 1 * 10000;
		iVar1 = __LIB_1__::func_905(__LIB_1__::func_898());
		if (__LIB_0__::func_630(iVar1) && iVar1 != 5)
		{
			if (__LIB_10__::func_854(iVar1) >= iVar0)
			{
				__LIB_1__::func_715(3, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				Global_40.f_11095.f_38++;
			}
		}
	}
}

void func_183()
{
	if ((ENTITY::IS_ENTITY_IN_AREA(Global_35, -6726.518f, -3810.308f, -11.33721f, -6684.747f, -3794.389f, -6.22488f, false, true, 0) && CAM::IS_SCREEN_FADED_IN()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		__LIB_1__::func_864(Global_35, 0, 0);
	}
}

bool func_184()
{
	bool bVar0;
	var uVar1;
	struct<16> Var2;
	if (__LIB_0__::func_181())
	{
		return false;
	}
	if (!func_389(&bVar0, &uVar1, 0))
	{
		return !bVar0;
	}
	if (AUDIO::_0xA2CAC9DEF0195E6F(0))
	{
		return false;
	}
	if (Global_1935630.f_56)
	{
		return false;
	}
	if (!__LIB_0__::func_58())
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) > 0)
		{
			return false;
		}
	}
	if ((Global_1935630.f_54 + 90000) < MISC::GET_GAME_TIMER() || __LIB_0__::func_58())
	{
		Global_1935630.f_56 = 1;
		StringCopy(&(Var2.f_10), "singing", 32);
		Var2.f_14 = 512;
		Var2.f_15 = 0;
		__LIB_4__::func_709(Var2, 0);
	}
	return true;
}

void func_186()
{
	bool bVar0;
	if (__LIB_0__::func_2() != -1 || !__LIB_0__::func_293(15))
	{
		return;
	}
	if (__LIB_0__::func_1(Global_1347343.f_11, 1073741824 /* Float: 2f */))
	{
		return;
	}
	if (!Global_1347477.f_6)
	{
		switch (Global_1347477.f_7)
		{
			case 0:
				func_682();
				break;
			case 1:
				if (!__LIB_0__::func_644(8388608))
				{
					bVar0 = __LIB_1__::func_376(Global_35);
				}
				if ((((PED::GET_PED_CONFIG_FLAG(Global_35, 227, true) || PED::_0x84D0BF2B21862059(Global_35)) || func_685(Global_35)) || bVar0) || __LIB_12__::func_100())
				{
					if (bVar0)
					{
						__LIB_10__::func_725(14, 1);
					}
					else
					{
						if (!__LIB_0__::func_729() && !__LIB_0__::func_728())
						{
							if (Global_1347477.f_122 > __LIB_0__::func_247(0))
							{
								__LIB_9__::func_160(1f, 0, 0, 1);
							}
						}
						if (Global_1347477.f_123 > __LIB_0__::func_247(2))
						{
							__LIB_9__::func_159(1f, 0, 0, 1);
						}
						if (Global_1347477.f_124 > __LIB_0__::func_247(1))
						{
							__LIB_9__::func_158(1f, 0, 0, 1);
						}
						if (!Global_1347477.f_119)
						{
							TELEMETRY::_0x7E002A36AEFCFB55();
						}
					}
					Global_1347477.f_119 = 1;
				}
				else
				{
					Global_1347477.f_119 = 0;
				}
				break;
			case 2:
				if (func_694(18))
				{
					__LIB_6__::func_172(0, __LIB_1__::func_168(), 0);
					func_697();
				}
				break;
			case 3:
				if (func_694(19))
				{
					__LIB_6__::func_172(1, __LIB_1__::func_167(), 0);
				}
				break;
			case 4:
				if (func_694(20))
				{
					__LIB_6__::func_172(2, __LIB_1__::func_166(), 0);
				}
				break;
			case 5:
				if (!Global_16)
				{
					__LIB_1__::func_557(13, func_700());
					func_702(0);
					func_703();
					func_704();
				}
				break;
			case 6:
				if (!Global_16)
				{
					Global_40.f_11095.f_11[16] = __LIB_3__::func_131(ATTRIBUTE::GET_ATTRIBUTE_POINTS(Global_35, 16));
					func_706();
				}
				break;
		}
		Global_1347477.f_7++;
		if (Global_1347477.f_7 >= 7)
		{
			Global_1347477.f_7 = 0;
		}
	}
}

void func_187()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 200f, 0) > 0)
	{
		Global_1347477.f_135 = 1;
	}
	else if (Global_1347477.f_135)
	{
		if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Global_35)) < (50f * 0.5f))
		{
			__LIB_1__::func_696(24);
		}
		Global_1347477.f_135 = 0;
	}
	if (PED::IS_PED_JUMPING(Global_35))
	{
		if (!Global_1347477.f_132)
		{
			Global_1347477.f_131++;
			if ((Global_1347477.f_131 % 50) == 0)
			{
				__LIB_1__::func_696(1);
			}
			Global_1347477.f_132 = 1;
		}
	}
	else
	{
		Global_1347477.f_132 = 0;
	}
	fVar0 = __LIB_16__::func_359(joaat("DIST"), joaat("SPRINTING"));
	fVar1 = __LIB_16__::func_359(joaat("TIME"), joaat("SWIMMING_NOT_DROWNING"));
	fVar2 = __LIB_16__::func_359(joaat("DIST_DRIVING_TYPE"), joaat("ROWINGBOAT"));
	fVar3 = __LIB_16__::func_359(joaat("DIST_DRIVING_TYPE"), joaat("CANOE"));
	if (fVar0 > (Global_1347477.f_127 + 100f))
	{
		__LIB_1__::func_696(27);
		Global_1347477.f_127 = fVar0;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_BOAT(Global_35))
	{
		if (fVar1 > (Global_1347477.f_128 + 15000f))
		{
			__LIB_1__::func_696(28);
			Global_1347477.f_128 = fVar1;
		}
	}
	else
	{
		Global_1347477.f_128 = fVar1;
	}
	if (fVar2 + fVar3) > (Global_1347477.f_129 + 1000f)
	{
		__LIB_1__::func_696(2);
		Global_1347477.f_129 = (fVar2 + fVar3);
	}
	PED::_0x6B67320E0D57856A(Global_35, &iVar4, 2, 0);
	if (ENTITY::IS_ENTITY_A_PED(iVar4))
	{
		if (__LIB_8__::func_649(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4)))
		{
			__LIB_16__::func_209();
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && PED::_GET_SEAT_PED_IS_USING(Global_35) == -1)
	{
		if (!Global_36604)
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
			if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6, false, false) && VEHICLE::_0xB9D5BDDA88E1BB66(ENTITY::GET_ENTITY_MODEL(iVar6))) && !DECORATOR::DECOR_EXIST_ON(iVar6, "wagon_block_honor")) && (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar6) || func_711(iVar6)))
			{
				VEHICLE::_0xA19447D83294E29F(iVar6, &iVar7, &iVar8);
				if (iVar7 == 0 || iVar8 > 0)
				{
					__LIB_1__::func_715(0, joaat("HONOR_EVENT_STEAL_WAGON"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
					iVar9 = 0;
					while (iVar9 < 6)
					{
						iVar10 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar6, iVar9);
						if (!PED::IS_PED_INJURED(iVar10))
						{
							DECORATOR::DECOR_SET_BOOL(iVar10, "bHorseHasBeenStolen", true);
						}
						iVar9++;
					}
				}
			}
			DECORATOR::DECOR_SET_BOOL(iVar6, "wagon_block_honor", true);
			Global_36604 = 1;
		}
	}
	else if (Global_36604)
	{
		Global_36604 = 0;
	}
}

void func_188()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_1911859[iVar0 /*3*/].f_2)
		{
			if ((MISC::GET_GAME_TIMER() - Global_1911859[iVar0 /*3*/]) >= Global_1911859[iVar0 /*3*/].f_1)
			{
				Global_1911859[iVar0 /*3*/].f_2 = 0;
				switch (iVar0)
				{
					case 0:
						__LIB_1__::func_240(581, 1);
						PED::_SET_PED_SCENT(Global_35, 1f);
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_192(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::func_12();
	iVar1 = Global_1934266.f_57;
	iVar2 = 5;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar1++;
		if (iVar1 >= 130)
		{
			iVar1 = 0;
		}
		if (iVar1 == iVar0)
		{
		}
		else
		{
			if (!bParam0)
			{
				if (__LIB_3__::func_151(iVar1))
				{
					if (__LIB_10__::func_43(__LIB_16__::func_203(iVar1)) >= 4320 || __LIB_1__::func_931(__LIB_10__::func_29(__LIB_5__::func_235(iVar1, 1, 1))) <= 0)
					{
						__LIB_5__::func_496(iVar1, 0);
					}
				}
				if (__LIB_9__::func_27(iVar1))
				{
					if (__LIB_0__::func_730(iVar1))
					{
						if (!__LIB_9__::func_19(iVar1))
						{
							if (func_725(iVar1))
							{
								__LIB_10__::func_843(iVar1, 0, 350);
							}
						}
					}
					else if (__LIB_9__::func_19(iVar1))
					{
						__LIB_10__::func_843(iVar1, 1, 350);
					}
				}
			}
			Global_1934266.f_57 = iVar1;
		}
		iVar3++;
	}
}

void func_193(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (bParam0)
	{
		return;
	}
	iVar0 = __LIB_1__::func_898();
	if ((((((!__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1) || iVar0 == 8) && __LIB_11__::func_120()) && __LIB_14__::func_207()) && !__LIB_1__::func_923()) && !PLAYER::_0x5B7B97E99F84138B(PLAYER::PLAYER_ID())) && !__LIB_0__::func_296(0, 0, 1))
	{
		if (iVar0 != 8)
		{
			if (!Global_1934266)
			{
				if ((func_729(2, 0) && func_729(3, 0)) || (func_729(4, 0) && (iVar0 == 12 || iVar0 == 4)))
				{
					if (iVar0 == 12 || (iVar0 == 4 && !__LIB_0__::func_293(45)))
					{
						if ((!__LIB_2__::func_774(13) && !Global_1934266.f_56) && !PED::_0xDC88D06719070C39(Global_35))
						{
							__LIB_17__::func_467(4, __LIB_0__::func_12());
						}
					}
					else if (Global_1934266.f_1 + Global_1934266.f_2) < MISC::GET_GAME_TIMER()
					{
						fVar1 = 200f;
						iVar2 = 5;
						iVar3 = ITEMSET::CREATE_ITEMSET(true);
						LAW::_0x0C392DB374655176(Global_36, fVar1, iVar3);
						iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar3);
						ITEMSET::DESTROY_ITEMSET(iVar3);
						if (iVar4 > iVar2)
						{
							return;
						}
						if ((MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.75f && __LIB_14__::func_209() >= 4) && func_732())
						{
							__LIB_17__::func_467(3, __LIB_0__::func_12());
						}
						else
						{
							__LIB_17__::func_467(2, __LIB_0__::func_12());
						}
					}
				}
			}
		}
		else if (iVar0 == 8)
		{
			if (((func_729(9, 0) && !__LIB_2__::func_765(1, 0)) && !__LIB_2__::func_765(8, 0)) && __LIB_0__::func_12() != 59)
			{
				__LIB_17__::func_467(9, __LIB_0__::func_12());
			}
		}
	}
	else
	{
		Global_1934266.f_1 = MISC::GET_GAME_TIMER();
		if (iVar0 == 12 || iVar0 == 4)
		{
			Global_1934266.f_2 = 1000;
		}
		else
		{
			Global_1934266.f_2 = 15000;
		}
	}
}

void func_195(bool bParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	iVar1 = __LIB_0__::func_12();
	bVar2 = __LIB_9__::func_27(iVar1);
	if (__LIB_0__::func_20(iVar1) && (bVar2 || __LIB_9__::func_19(iVar1)))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!__LIB_0__::func_21(iVar1, 33554432))
		{
			if (!__LIB_9__::func_19(iVar1) && bVar2)
			{
				if ((!bParam0 && !PLAYER::_0x5B7B97E99F84138B(PLAYER::PLAYER_ID())) && !__LIB_2__::func_765(2049, 0))
				{
					if (func_733(iVar1))
					{
						__LIB_10__::func_843(iVar1, 1, 350);
					}
				}
			}
		}
		else if (!__LIB_9__::func_19(iVar1) || !bVar2)
		{
			if (func_725(iVar1))
			{
				__LIB_10__::func_843(iVar1, 0, 350);
			}
		}
	}
}

void func_196()
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	bool bVar3;
	if (!__LIB_0__::func_27(Global_1934266.f_154, 2))
	{
		if (__LIB_1__::func_185(13))
		{
			__LIB_1__::func_581(&(Global_1934266.f_154), 2);
			return;
		}
		if (MISC::GET_GAME_TIMER() >= Global_1934266.f_155)
		{
			if (__LIB_3__::func_751(13))
			{
				__LIB_1__::func_581(&(Global_1934266.f_154), 1);
			}
			else
			{
				__LIB_1__::func_681(&(Global_1934266.f_154), 1);
			}
			Global_1934266.f_155 = MISC::GET_GAME_TIMER() + 10000;
		}
		bVar0 = false;
		sVar1 = "pre_sean1_law";
		if (__LIB_0__::func_27(Global_1934266.f_154, 1))
		{
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sVar1)) <= 0)
			{
				iVar2 = __LIB_0__::func_64(0);
				if (!VOLUME::_DOES_VOLUME_EXIST(Global_1934266.f_153))
				{
					Global_1934266.f_153 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1409f, -958f, 68f, 0f, 0f, 29f, 1000f, 500f, 100f, "pre_sean1_law");
				}
				bVar3 = (__LIB_1__::func_205(Global_35, Global_1934266.f_153, 1, 0) || __LIB_1__::func_898() == 4);
				if (!bVar3)
				{
					__LIB_1__::func_581(&(Global_1934266.f_154), 8);
				}
				if (((bVar3 && __LIB_0__::func_27(Global_1934266.f_154, 8)) && iVar2 != 1) && iVar2 != 8)
				{
					if (!__LIB_0__::func_27(Global_1934266.f_154, 4))
					{
						SCRIPTS::REQUEST_SCRIPT(sVar1);
						__LIB_1__::func_581(&(Global_1934266.f_154), 4);
					}
					if (SCRIPTS::HAS_SCRIPT_LOADED(sVar1))
					{
						__LIB_1__::func_681(&(Global_1934266.f_154), 8);
						SCRIPTS::START_NEW_SCRIPT(sVar1, 512);
						VOLUME::_DELETE_VOLUME(Global_1934266.f_153);
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (__LIB_0__::func_27(Global_1934266.f_154, 4))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar1);
				__LIB_1__::func_681(&(Global_1934266.f_154), 4);
			}
		}
	}
	else if (MISC::GET_GAME_TIMER() >= Global_1934266.f_155)
	{
		if (!__LIB_1__::func_185(13))
		{
			__LIB_1__::func_681(&(Global_1934266.f_154), 2);
		}
		Global_1934266.f_155 = MISC::GET_GAME_TIMER() + 10000;
	}
}

void func_197(bool bParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_898() != 8)
	{
		if (!__LIB_0__::func_474(546))
		{
			if (!__LIB_9__::func_19(__LIB_0__::func_12()) && __LIB_0__::func_730(__LIB_0__::func_12()))
			{
				__LIB_1__::func_240(546, 0);
			}
		}
		else if (!__LIB_0__::func_474(547) && __LIB_0__::func_730(__LIB_0__::func_12()))
		{
			__LIB_1__::func_240(547, 0);
		}
	}
	if (!bParam0)
	{
		if (!func_737(1))
		{
			return;
		}
		if (__LIB_0__::func_2() == -1)
		{
			if (!__LIB_0__::func_293(28))
			{
				__LIB_13__::func_10(28);
			}
		}
		if (!__LIB_0__::func_474(282))
		{
			if (!__LIB_2__::func_514() && !__LIB_0__::func_104())
			{
				iVar0 = (MISC::GET_GAME_TIMER() - LAW::_0x7FC667F6DDFBCDCC(PLAYER::PLAYER_ID()));
				if (iVar0 > 2000 && iVar0 < 10000)
				{
					__LIB_1__::func_240(282, 0);
				}
			}
		}
		else if (!__LIB_0__::func_474(283))
		{
			if (__LIB_1__::func_932(__LIB_2__::func_702(), 4))
			{
				__LIB_1__::func_240(283, 0);
			}
		}
		else if (!__LIB_0__::func_474(281))
		{
			__LIB_1__::func_240(281, 0);
		}
		return;
	}
	else
	{
		if (!Global_1935630.f_13)
		{
			if (!__LIB_0__::func_474(263))
			{
				if (((Global_1935630.f_17 > 0 && !Global_1935630.f_16) && !__LIB_2__::func_514()) && !__LIB_0__::func_104())
				{
					if (__LIB_1__::func_898() == 8)
					{
						__LIB_1__::func_240(265, 0);
					}
					else
					{
						__LIB_1__::func_240(263, 0);
					}
					return;
				}
			}
			else if (!__LIB_0__::func_474(264))
			{
				if (LAW::_0x7FC667F6DDFBCDCC(PLAYER::PLAYER_ID()) > 30000)
				{
					if (__LIB_1__::func_898() == 8)
					{
						__LIB_1__::func_240(266, 0);
					}
					else
					{
						__LIB_1__::func_240(264, 0);
					}
				}
			}
		}
		if (!__LIB_0__::func_474(269))
		{
			if (Global_1935630.f_20 == 0)
			{
				if (!__LIB_2__::func_514() && !__LIB_0__::func_104())
				{
					LAW::_0x6ABC50979655BEE7(PLAYER::PLAYER_ID(), &iVar1, 1);
					if (iVar1 == joaat("CRIME_LOITERING"))
					{
						__LIB_1__::func_240(269, 0);
					}
				}
			}
		}
		if (Global_1935630.f_15 == 2118174520 || Global_1935630.f_15 == joaat("LAW_BOUNTY_HUNTERS_CSI"))
		{
			if (LAW::_0x9945A3E2528A02E8(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!__LIB_0__::func_474(273))
				{
					__LIB_1__::func_240(273, 0);
				}
			}
		}
		if (!__LIB_0__::func_474(268))
		{
			if (!__LIB_2__::func_514() && !__LIB_0__::func_104())
			{
				if (PLAYER::_0xB15CD2F9932C9AB5(PLAYER::PLAYER_ID()) > 0)
				{
					__LIB_1__::func_240(268, 0);
				}
			}
		}
		else if (__LIB_3__::func_829(268))
		{
			if (PLAYER::_0xB15CD2F9932C9AB5(PLAYER::PLAYER_ID()) <= 0)
			{
				__LIB_4__::func_861(268);
			}
		}
	}
}

void func_198(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		return;
	}
	func_742(__LIB_2__::func_702(), bParam1);
}

void func_199(bool bParam0)
{
	if (__LIB_0__::func_296(0, 1, 1) || bParam0)
	{
		func_743();
		return;
	}
	if (Global_1934266.f_76)
	{
		return;
	}
	if (!__LIB_0__::func_75(&(Global_1934266.f_70)))
	{
		if (__LIB_0__::func_6(Global_1879514.f_1))
		{
			__LIB_1__::func_283(&(Global_1934266.f_70), 0);
			if (__LIB_1__::func_652())
			{
				Global_1934266.f_76 = 1;
				return;
			}
			if (__LIB_0__::func_700(Global_1879514.f_1) == 8)
			{
				if (Global_1879514.f_1 == Global_1347702[63 /*49*/].f_15 || Global_1879514.f_1 == Global_1347702[65 /*49*/].f_15)
				{
					if (!__LIB_0__::func_474(541))
					{
						__LIB_1__::func_240(541, 0);
					}
					if (Global_1879514.f_1 == Global_1347702[63 /*49*/].f_15)
					{
						Global_1934266.f_73 = { -45f, 1227f, 172f };
					}
					if (Global_1879514.f_1 == Global_1347702[65 /*49*/].f_15)
					{
						Global_1934266.f_73 = { -2197f, 711f, 122f };
					}
				}
			}
			else if (__LIB_0__::func_700(Global_1879514.f_1) == 1)
			{
				if (((Global_1879514.f_1 == Global_1835011[13 /*74*/].f_1 || Global_1879514.f_1 == Global_1835011[12 /*74*/].f_1) || Global_1879514.f_1 == Global_1835011[53 /*74*/].f_1) || Global_1879514.f_1 == Global_1835011[56 /*74*/].f_1)
				{
					if (!__LIB_0__::func_474(541))
					{
						__LIB_1__::func_240(541, 0);
					}
					if (Global_1879514.f_1 == Global_1835011[13 /*74*/].f_1)
					{
						Global_1934266.f_73 = { -1502f, -774f, 105f };
					}
					if (Global_1879514.f_1 == Global_1835011[12 /*74*/].f_1)
					{
						Global_1934266.f_73 = { -1176f, -8f, 42f };
					}
					if (Global_1879514.f_1 == Global_1835011[53 /*74*/].f_1)
					{
						Global_1934266.f_73 = { 1168f, -620f, 80f };
					}
					if (Global_1879514.f_1 == Global_1835011[56 /*74*/].f_1)
					{
						Global_1934266.f_73 = { 566f, 1697f, 187f };
					}
				}
			}
		}
	}
	else if ((__LIB_0__::func_265(&(Global_1934266.f_70)) >= func_744() && !__LIB_0__::func_86(Global_1934266.f_73)) && __LIB_0__::func_94(Global_35, Global_1934266.f_73, 1) <= 60f)
	{
		if (__LIB_1__::func_652())
		{
			Global_1934266.f_76 = 1;
			return;
		}
		__LIB_0__::func_267(1);
		__LIB_0__::func_395(0);
		LAW::_0x07E8B8B20570271C(PLAYER::PLAYER_ID());
		LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_MURDER"), 0, 0, false);
		func_743();
		Global_1934266.f_76 = 1;
	}
}

void func_200()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		iVar2 = Global_17504.f_2084[iVar0 /*5*/].f_3;
		if (iVar2 != -1)
		{
			vVar3 = { Global_17504.f_2084[iVar0 /*5*/] };
			if (!__LIB_0__::func_86(vVar3))
			{
				if (__LIB_1__::func_85(iVar2, 1) && !__LIB_1__::func_85(iVar2, 34))
				{
					fVar6 = 30f;
					if (!VOLUME::_0x769BB7626B8CDB06(vVar3, 1f, 0, 16, 0))
					{
						Global_1310750.f_16078[iVar0] = VOLUME::_0x00BBF7CEAE8C666A(vVar3, fVar6, iVar1, 16);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_201()
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	if (!__LIB_0__::func_75(&(Global_1310750.f_16040)))
	{
		__LIB_1__::func_283(&(Global_1310750.f_16040), 0);
	}
	fVar0 = 7f;
	if (__LIB_1__::func_923())
	{
		fVar0 = (7f / 2f);
	}
	if (__LIB_1__::func_285(&(Global_1310750.f_16040), fVar0) && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = Global_1310750.f_16068;
		iVar2 = __LIB_0__::func_55(iVar1 + 1 >= 8, 0, iVar1 + 1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(Global_35);
		vVar3 = { vVar3 - Vector(3f, 3f, 3f) * Vector(0f, BUILTIN::COS(fVar6), -BUILTIN::SIN(fVar6)) };
		Global_1310750.f_16043[iVar1 /*3*/] = { vVar3 };
		Global_1310750.f_16068 = iVar2;
		__LIB_1__::func_148(&(Global_1310750.f_16040));
	}
}

void func_205()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		iVar1 = Global_17504.f_2084[iVar0 /*5*/].f_3;
		if (iVar1 != -1)
		{
			Global_17504.f_2084[iVar0 /*5*/].f_4 = (Global_17504.f_2084[iVar0 /*5*/].f_4 - 1);
			if (Global_17504.f_2084[iVar0 /*5*/].f_4 <= 0)
			{
				__LIB_10__::func_625(Global_17504.f_2084[iVar0 /*5*/], 30f);
			}
		}
		iVar0++;
	}
}

void func_206()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_35(Global_1310750.f_13321[iVar0 /*9*/]))
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1310750.f_13321[iVar0 /*9*/].f_5, false))
			{
				if (Global_1310750.f_13321[iVar0 /*9*/].f_5 == Global_1310750.f_16077)
				{
					func_754(Global_1310750.f_13321[iVar0 /*9*/]);
				}
				Global_1310750[Global_1310750.f_13321[iVar0 /*9*/] /*111*/].f_48 = 0;
				__LIB_0__::func_74(iVar0);
			}
			else
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (Global_1310750.f_16077 != 0)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1310750.f_16077, false))
		{
			func_754(Global_1310750.f_16071);
		}
	}
	Global_1310750.f_16037 = iVar1;
	if (func_756())
	{
		iVar0 = (iVar1 - 1);
		while (iVar0 >= 0)
		{
			if (__LIB_0__::func_35(Global_1310750.f_13321[iVar0 /*9*/]))
			{
				if (SCRIPTS::IS_THREAD_ACTIVE(Global_1310750.f_13321[iVar0 /*9*/].f_5, false) && Global_1310750.f_13321[iVar0 /*9*/].f_5 != Global_1310750.f_16077)
				{
					__LIB_1__::func_135(iVar0);
				}
				else
				{
					iVar0 = (iVar0 + -1);
				}
			}
		}
	}
}

void func_207()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	Global_1326862.f_4 = 0;
	if (!func_758(&iVar1, &iVar2))
	{
		return;
	}
	if (((!CAM::IS_SCREEN_FADED_IN() || PED::IS_PED_INJURED(Global_35)) || __LIB_2__::func_84()) || !__LIB_0__::func_69(__LIB_1__::func_898()))
	{
		return;
	}
	if (!__LIB_0__::func_73(256) && PED::_0x5407B7288D0478B7(Global_35, 512) > 0)
	{
		__LIB_1__::func_924();
		__LIB_1__::func_309(Global_1310750.f_16071, 0, 0, 0, 0);
		return;
	}
	bVar5 = __LIB_2__::func_776();
	if (Global_1326862 <= iVar1)
	{
		Global_1326862 = iVar1;
		func_762();
		Global_1310750.f_16111 = MISC::GET_GAME_TIMER();
	}
	iVar6 = 0;
	MISC::_GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL();
	iVar3 = Global_1326862;
	while (iVar3 <= iVar2)
	{
		iVar0 = Global_1326862.f_11[iVar3];
		if (!bVar5 || __LIB_1__::func_271(iVar0))
		{
			Global_1310750[iVar0 /*111*/].f_45 = func_764(iVar0, 1);
			if (Global_1310750[iVar0 /*111*/].f_45)
			{
				if (__LIB_3__::func_235(iVar0, 8) && !Global_1327479.f_9)
				{
					Global_1327479.f_7 = ((Global_1327479.f_4 - MISC::GET_GAME_TIMER()) / 1000);
					func_766(iVar0, 1, 0f, 0f, 0f, -1, 0, 0);
				}
				bVar4 = false;
				if (Global_1310750[iVar0 /*111*/].f_110 & 15 != 0)
				{
					func_767(iVar0);
					bVar4 = true;
				}
				if (Global_1310750[iVar0 /*111*/].f_110 & 16 != 0)
				{
					func_768(iVar0);
					bVar4 = true;
				}
				if (Global_1310750[iVar0 /*111*/].f_110 & 32 != 0 || Global_1326862.f_5)
				{
					func_769(iVar0);
					bVar4 = true;
				}
				if (bVar4)
				{
					__LIB_19__::func_561(iVar0, 1);
				}
				Global_1310750[iVar0 /*111*/].f_110 = 0;
			}
		}
		else
		{
			Global_1310750[iVar0 /*111*/].f_45 = 0;
		}
		iVar6 = (iVar6 + MISC::_GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL());
		if (iVar6 > 50)
		{
			Global_1326862 = iVar3 + 1;
			return;
		}
		iVar3++;
	}
	Global_1326862 = iVar1;
	Global_1326862.f_4 = 1;
	Global_1326862.f_5 = 0;
}

void func_208()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = Global_1905944.f_5697;
	iVar2 = iVar1 + 9;
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (iVar0 >= 630)
		{
			Global_1905944.f_5697 = 0;
			return;
		}
		Global_1905944.f_5697++;
		iVar3 = iVar0;
		if (iVar3 == -1 || iVar3 == 630)
		{
		}
		else if (Global_1905944.f_22[iVar3 /*9*/].f_3[0 /*2*/].f_1 != 3)
		{
		}
		else if (__LIB_3__::func_829(iVar3))
		{
		}
		else if (__LIB_1__::func_262(iVar3))
		{
		}
		else if (!__LIB_0__::func_447(iVar3, 16384))
		{
		}
		else
		{
			iVar4 = Global_1905944.f_22[iVar3 /*9*/].f_3[0 /*2*/];
			if (MAP::DOES_BLIP_EXIST(iVar4))
			{
				MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
				MAP::REMOVE_BLIP(&iVar4);
			}
		}
		iVar0++;
	}
}

void func_210(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (__LIB_2__::func_452() && bParam3)
	{
		__LIB_0__::func_378(Global_1905944.f_5693, iParam0, iParam1);
		return;
	}
	*iParam0 = 0;
	while (*iParam0 < 21)
	{
		*iParam1 = 0;
		while (*iParam1 < 31)
		{
			if (MISC::IS_BIT_SET(Global_1905944[*iParam0], *iParam1))
			{
				if (iVar0 == iParam2)
				{
					return;
				}
				iVar0++;
			}
			*iParam1++;
		}
		*iParam0++;
	}
	*iParam0 = -1;
	*iParam1 = -1;
}

int func_211(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam0 * 31;
	iVar0 = (iVar0 + iParam1);
	return iVar0;
}

bool func_212(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (PED::_0x5407B7288D0478B7(Global_35, 0) > 0 && !__LIB_0__::func_447(iParam0, 512))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_791(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_447(iParam0, 1) && __LIB_0__::func_296(0, 0, 1))
	{
		if (!__LIB_0__::func_447(iParam0, 262144) || !bParam2)
		{
			return false;
		}
	}
	if (__LIB_0__::func_447(iParam0, 32) && __LIB_1__::func_923())
	{
		return false;
	}
	if (__LIB_0__::func_447(iParam0, 16))
	{
		if (!func_777(iParam0))
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = Global_1905944.f_22[iParam0 /*9*/].f_3[iVar0 /*2*/].f_1;
		if (iVar1 == 3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1905944.f_22[iParam0 /*9*/].f_3[iVar0 /*2*/]))
			{
				*iParam1 = 0;
				return false;
			}
		}
		iVar0++;
	}
	if (__LIB_2__::func_800() && !__LIB_6__::func_76(Global_1914319.f_16855.f_1))
	{
		if (!__LIB_0__::func_447(iParam0, 128))
		{
			return false;
		}
	}
	if (__LIB_0__::func_447(iParam0, 98304))
	{
		bVar2 = func_780(iParam0);
		if (!bVar2)
		{
			*iParam1 = 0;
			return false;
		}
	}
	return true;
}

int func_215(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < 21)
	{
		iVar2 = 0;
		while (iVar2 < 31)
		{
			if (MISC::IS_BIT_SET(Global_1905944[iVar1], iVar2))
			{
				if (func_211(iVar1, iVar2) == iParam0)
				{
					return iVar0;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	return -1;
}

void func_216(int iParam0)
{
	Global_1905944.f_5693 = iParam0;
}

void func_217(int iParam0)
{
	char* sVar0;
	char* sVar1;
	if (iParam0 <= -1 || iParam0 >= 630)
	{
		return;
	}
	if (__LIB_0__::func_447(iParam0, 8))
	{
		sVar0 = "JOURNAL_WRITE";
		sVar1 = "HUD_FRONTEND_DEFAULT_SOUNDSET";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::PLAY_SOUND_FRONTEND(sVar0, sVar1, true, 0);
}

int func_218(int iParam0)
{
	if (__LIB_0__::func_447(iParam0, 8192))
	{
		return 10000;
	}
	else if (__LIB_0__::func_447(iParam0, 4096))
	{
		return 7000;
	}
	else if (__LIB_0__::func_447(iParam0, 2048))
	{
		return 5000;
	}
	return 0;
}

int func_219(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	sVar0 = Global_1905944.f_22[iParam1 /*9*/].f_3[0 /*2*/];
	iVar1 = Global_1905944.f_22[iParam1 /*9*/].f_3[1 /*2*/];
	iVar2 = Global_1905944.f_22[iParam1 /*9*/].f_3[0 /*2*/].f_1;
	iVar3 = Global_1905944.f_22[iParam1 /*9*/].f_3[1 /*2*/].f_1;
	if (iVar3 != 0)
	{
		switch (iVar3)
		{
			case 1:
			case 3:
				switch (iVar2)
				{
					case 1:
						return __LIB_8__::func_966(MISC::_CREATE_VAR_STRING(0, sParam0, sVar0, iVar1), iParam2, 0, 0, iParam3, 1);
					case 3:
						if (MAP::DOES_BLIP_EXIST(sVar0))
						{
							Global_1905944.f_5698 = sVar0;
							return __LIB_8__::func_966(MISC::_CREATE_VAR_STRING(0, sParam0, sVar0, iVar1), iParam2, 0, 0, iParam3, 1);
						}
						break;
					case 2:
						return __LIB_8__::func_966(MISC::_CREATE_VAR_STRING(8, sParam0, MISC::_CREATE_VAR_STRING(0, sVar0), iVar1), iParam2, 0, 0, iParam3, 1);
				}
				break;
			case 2:
				switch (iVar2)
				{
					case 1:
						return __LIB_8__::func_966(MISC::_CREATE_VAR_STRING(32, sParam0, sVar0, MISC::_CREATE_VAR_STRING(0, iVar1)), iParam2, 0, 0, iParam3, 1);
					case 3:
						if (MAP::DOES_BLIP_EXIST(sVar0))
						{
							Global_1905944.f_5698 = sVar0;
							return __LIB_8__::func_966(MISC::_CREATE_VAR_STRING(32, sParam0, sVar0, MISC::_CREATE_VAR_STRING(0, iVar1)), iParam2, 0, 0, iParam3, 1);
						}
						break;
					case 2:
						return __LIB_8__::func_966(MISC::_CREATE_VAR_STRING(40, sParam0, MISC::_CREATE_VAR_STRING(0, sVar0), MISC::_CREATE_VAR_STRING(0, iVar1)), iParam2, 0, 0, iParam3, 1);
				}
				break;
			case 4:
				__LIB_1__::func_715(sVar0, 0, iVar1 == 1, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				return __LIB_8__::func_966(MISC::_CREATE_VAR_STRING(0, sParam0), iParam2, 0, 0, iParam3, 1);
		}
	}
	else
	{
		switch (iVar2)
		{
			case 1:
				return __LIB_8__::func_966(MISC::_CREATE_VAR_STRING(0, sParam0, sVar0), iParam2, 0, 0, iParam3, 1);
			case 5:
				return __LIB_8__::func_966(MISC::_CREATE_VAR_STRING(0, sVar0), iParam2, 0, 0, iParam3, 1);
			case 2:
				return __LIB_8__::func_966(MISC::_CREATE_VAR_STRING(8, sParam0, MISC::_CREATE_VAR_STRING(0, sVar0)), iParam2, 0, 0, iParam3, 1);
			case 3:
				if (MAP::DOES_BLIP_EXIST(sVar0))
				{
					Global_1905944.f_5698 = sVar0;
					return __LIB_8__::func_966(MISC::_CREATE_VAR_STRING(0, sParam0, sVar0), iParam2, 0, 0, iParam3, 1);
				}
				break;
		}
	}
	return 0;
}

bool func_222(int iParam0)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_8 != -1;
}

int func_225()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (Global_1391411.f_2[iVar1 /*2*/].f_1 != 234527101)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_229(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_1391411.f_2[iVar0 /*2*/].f_1 != 234527101)
		{
			iVar2 = func_781(iParam0, iVar0);
			if (iVar2 == 1)
			{
				iVar1 += 5;
			}
			else if (iVar2 == 2)
			{
				iVar1 += 2;
			}
			else if (iVar2 == 3)
			{
				iVar1 -= 3;
			}
		}
		iVar0++;
	}
	func_782(iParam0, iVar1, bParam1);
	func_783();
}

void func_230(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = __LIB_4__::func_355();
	if (iVar0 == -1)
	{
		func_783();
		return;
	}
	iVar3 = 234527101;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (iVar3 == 234527101)
		{
			iVar2 = iVar1;
			iVar3 = Global_1391411.f_2[iVar1 /*2*/].f_1;
		}
		iVar1++;
	}
	if (iVar3 == 234527101)
	{
		return;
	}
	iVar4 = func_781(iVar0, iVar3);
	iVar5 = 0;
	if (iVar4 == 1)
	{
		iVar5 += 5;
	}
	else if (iVar4 == 2)
	{
		iVar5 += 2;
	}
	else if (iVar4 == 3)
	{
		iVar5 -= 3;
	}
	func_782(iVar0, iVar5, bParam0);
	Global_1391411.f_2[iVar2 /*2*/].f_1 = 234527101;
}

void func_232()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1392626)
	{
		if (__LIB_4__::func_810(iVar0))
		{
			if (MISC::IS_BIT_SET(Global_40.f_9052, iVar0) && !SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iVar0 /*32*/].f_21, false))
			{
				__LIB_0__::func_7(&(Global_1392626[iVar0 /*32*/].f_8), 1);
			}
		}
		iVar0++;
	}
}

void func_236(int iParam0)
{
	if (__LIB_0__::func_702(Global_1392626[iParam0 /*32*/].f_3))
	{
		__LIB_1__::func_722(Global_1392626[iParam0 /*32*/].f_3);
	}
	func_241(iParam0, 1, 1);
	if (MISC::IS_BIT_SET(Global_40.f_9052, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
	}
}

void func_239(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	char* sVar3;
	if (__LIB_10__::func_235(iParam0, 4))
	{
		iVar0 = Global_1392626[iParam0 /*32*/];
		if (!MAP::DOES_BLIP_EXIST(iVar0))
		{
			return;
		}
	}
	else
	{
		iVar0 = Global_1392626[iParam0 /*32*/].f_1;
		if (!MAP::DOES_BLIP_EXIST(iVar0))
		{
			return;
		}
	}
	if (Global_1392626[iParam0 /*32*/].f_9 & 4096 == 0)
	{
		return;
	}
	if (__LIB_10__::func_235(iParam0, 4))
	{
		fVar1 = BUILTIN::VDIST2(Global_36, Global_1392626[iParam0 /*32*/].f_24);
	}
	else
	{
		fVar1 = BUILTIN::VDIST2(Global_36, Global_1392626[iParam0 /*32*/].f_27);
	}
	if (Global_1392626[iParam0 /*32*/].f_9 & 8192 != 0)
	{
		if (fVar1 > 45f)
		{
			iVar2 = UIFEED::_0xC17F69E1418CD11F(1);
			if (iVar2 != Global_1392626[iParam0 /*32*/].f_23)
			{
				UIFEED::_0x2F901291EF177B02(Global_1392626[iParam0 /*32*/].f_23, 0);
			}
			__LIB_0__::func_8(&(Global_1392626[iParam0 /*32*/].f_9), 8192);
		}
	}
	else if (fVar1 <= 25f)
	{
		if (Global_1392626[iParam0 /*32*/].f_10 & 1024 != 0)
		{
			sVar3 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = __LIB_8__::func_966(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 4096 != 0)
		{
			sVar3 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = __LIB_8__::func_966(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 2048 != 0)
		{
			sVar3 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = __LIB_8__::func_966(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 16384 != 0)
		{
			sVar3 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = __LIB_8__::func_966(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 8192 != 0)
		{
			sVar3 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = __LIB_8__::func_966(sVar3, 10000, 0, 0, 0, 1);
		}
		__LIB_0__::func_7(&(Global_1392626[iParam0 /*32*/].f_9), 8192);
	}
}

bool func_240(int iParam0)
{
	if (iParam0 == __LIB_10__::func_243(Global_1572864.f_8))
	{
		return true;
	}
	if (Global_40.f_9052.f_1[iParam0] != -15)
	{
		if (!__LIB_1__::func_426(Global_40.f_9052.f_1[iParam0], 1))
		{
			return false;
		}
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iParam0 /*32*/].f_21, false))
	{
		return true;
	}
	if (__LIB_10__::func_362(iParam0))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (__LIB_0__::func_730(26))
		{
			if (Global_1392626[iParam0 /*32*/].f_10 & 2048 == 0)
			{
				__LIB_10__::func_234(iParam0, 2048);
			}
			return false;
		}
		else if (__LIB_3__::func_151(26))
		{
			if (Global_1392626[iParam0 /*32*/].f_10 & 2048 == 0)
			{
				__LIB_10__::func_234(iParam0, 2048);
			}
			return false;
		}
	}
	if (Global_1392626[iParam0 /*32*/].f_12 != -1)
	{
		if (__LIB_0__::func_730(Global_1392626[iParam0 /*32*/].f_12))
		{
			if (Global_1392626[iParam0 /*32*/].f_10 & 2048 == 0)
			{
				__LIB_10__::func_234(iParam0, 2048);
			}
			return false;
		}
	}
	if (Global_1392626[iParam0 /*32*/].f_22 != -1)
	{
		if (!__LIB_2__::func_117(Global_1392626[iParam0 /*32*/].f_22))
		{
			return false;
		}
	}
	if (__LIB_0__::func_1(Global_1392626[iParam0 /*32*/].f_8, 1))
	{
		if (!__LIB_16__::func_249() && __LIB_10__::func_363(iParam0, Global_1392626[iParam0 /*32*/].f_6))
		{
			return false;
		}
		else if (!CAM::IS_SPHERE_VISIBLE(Global_1392626[iParam0 /*32*/].f_24, Global_1392626[iParam0 /*32*/].f_5))
		{
			__LIB_0__::func_8(&(Global_1392626[iParam0 /*32*/].f_8), 1);
		}
	}
	return true;
}

void func_241(int iParam0, int iParam1, bool bParam2)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iParam0 /*32*/].f_21, false))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1392626[iParam0 /*32*/].f_21, 523);
	}
	__LIB_10__::func_835(iParam0, bParam2, iParam1);
}

void func_242(int iParam0)
{
	bool bVar0;
	if (!__LIB_4__::func_810(iParam0))
	{
		return;
	}
	bVar0 = true;
	if (__LIB_10__::func_235(iParam0, 4))
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]);
	}
	else
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1);
	}
	__LIB_4__::func_181(&(Global_1392626[iParam0 /*32*/].f_10));
	__LIB_0__::func_8(&(Global_1392626[iParam0 /*32*/].f_8), 1);
	__LIB_0__::func_8(&(Global_1392626[iParam0 /*32*/].f_9), 4096);
	if (bVar0)
	{
		if (!__LIB_10__::func_235(iParam0, 4))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/].f_1));
			if (!__LIB_10__::func_235(iParam0, 8))
			{
				__LIB_10__::func_526(iParam0, Global_1392626[iParam0 /*32*/].f_27, Global_1392626[iParam0 /*32*/].f_4);
			}
			else
			{
				__LIB_10__::func_548(iParam0);
			}
			MAP::_BLIP_REMOVE_MODIFIER(Global_1392626[iParam0 /*32*/].f_1, 724623647);
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(Global_1392626[iParam0 /*32*/], 724623647);
		}
	}
}

void func_243(int iParam0)
{
	if ((Global_1879534 || HUD::_IS_RADAR_HIDDEN_2()) || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_10__::func_235(iParam0, 4))
	{
		__LIB_0__::func_325(&(Global_1392626[iParam0 /*32*/].f_1));
		if (!MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
		{
			__LIB_10__::func_844(iParam0, &(Global_1392626[iParam0 /*32*/]), Global_1392626[iParam0 /*32*/].f_24);
		}
	}
	else if (!__LIB_10__::func_235(iParam0, 8))
	{
		__LIB_10__::func_526(iParam0, Global_1392626[iParam0 /*32*/].f_27, Global_1392626[iParam0 /*32*/].f_4);
	}
	else
	{
		__LIB_10__::func_548(iParam0);
	}
}

void func_244(int iParam0)
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	char cVar8[32];
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_30))
	{
		fVar0 = 25f;
		vVar1 = { Global_1392626[iParam0 /*32*/].f_24 };
		if (!__LIB_10__::func_235(iParam0, 4) && Global_1392626[iParam0 /*32*/].f_4 > 0f)
		{
			fVar0 = (Global_1392626[iParam0 /*32*/].f_4 + 5f);
			vVar1 = { Global_1392626[iParam0 /*32*/].f_27 };
		}
		else if (func_803(iParam0))
		{
			fVar0 = 15f;
		}
		Global_1392626[iParam0 /*32*/].f_30 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar1, 0f, 0f, 0f, fVar0, fVar0, fVar0, __LIB_10__::func_276(iParam0));
		__LIB_5__::func_209(Global_1392626[iParam0 /*32*/].f_30, __LIB_10__::func_276(iParam0), 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	}
	if ((iParam0 == 1 || iParam0 == 4) || iParam0 == 5)
	{
		if (iParam0 == 1)
		{
			fVar4 = 100f;
		}
		else if (iParam0 == 4)
		{
			fVar4 = 200f;
			__LIB_2__::func_165(1411.856f, 1166.743f, 184.1507f, 200f, 0, 0, 5);
		}
		else if (iParam0 == 5)
		{
			fVar4 = 100f;
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_31))
		{
			vVar5 = { Global_1392626[iParam0 /*32*/].f_24 };
			StringCopy(&cVar8, __LIB_10__::func_276(iParam0), 32);
			StringConCat(&cVar8, "Extra", 32);
			Global_1392626[iParam0 /*32*/].f_31 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar4, fVar4, fVar4, &cVar8);
			__LIB_5__::func_209(Global_1392626[iParam0 /*32*/].f_31, &cVar8, 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		}
	}
}

bool func_252(int iParam0)
{
	if (!__LIB_10__::func_783(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_86(Global_1934182[iParam0 /*18*/].f_1))
	{
		return false;
	}
	if (!__LIB_0__::func_6(Global_1934182[iParam0 /*18*/].f_5))
	{
		return false;
	}
	return true;
}

bool func_254(int iParam0)
{
	if (__LIB_0__::func_12() != Global_1934182[iParam0 /*18*/])
	{
		return false;
	}
	return true;
}

bool func_255(int iParam0)
{
	int iVar0;
	if (Global_1934182[iParam0 /*18*/].f_14)
	{
		return false;
	}
	switch (iParam0)
	{
		case 3:
			iVar0 = 519;
			break;
		case 0:
			iVar0 = 208;
			break;
		case 1:
			iVar0 = 76;
			break;
		case 2:
			iVar0 = 12;
			break;
	}
	if (!__LIB_2__::func_767(iVar0, 0))
	{
		return true;
	}
	if (!__LIB_10__::func_680())
	{
		return true;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1934182[iParam0 /*18*/].f_7))
	{
		return false;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		iVar2 = ENTITY::_0x886171A12F400B89(Global_1934182[iParam0 /*18*/].f_7, iVar1, 1);
		if (ITEMSET::GET_ITEMSET_SIZE(iVar1) <= 0)
		{
			ITEMSET::DESTROY_ITEMSET(iVar1);
			return false;
		}
		switch (iParam0)
		{
			case 3:
				iVar4 = 519;
				break;
			case 0:
				iVar4 = 208;
				break;
			case 1:
				iVar4 = 76;
				break;
			case 2:
				iVar4 = 12;
				break;
		}
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar1);
			if (MISC::_GET_ITEM_TYPE(iVar3) == 9)
			{
				iVar5 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5) && PED::IS_PED_HUMAN(iVar5))
				{
					if (iVar5 != __LIB_1__::func_334(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar5))
					{
						ITEMSET::DESTROY_ITEMSET(iVar1);
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return false;
}

bool func_257(int iParam0)
{
	if (iParam0 != 2)
	{
		return true;
	}
	if (CAM::IS_SPHERE_VISIBLE(-308.1361f, 780.5737f, 118.7622f, 2f))
	{
		return false;
	}
	return true;
}

void func_258(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Global_1934182[iParam0 /*18*/].f_1);
	if (!INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_10__::func_681(iParam0, 0);
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (__LIB_0__::func_724(Global_1934182[iParam0 /*18*/].f_8[iVar1]))
		{
			if (!__LIB_10__::func_699(Global_1934182[iParam0 /*18*/].f_8[iVar1]))
			{
				if (!__LIB_2__::func_769(Global_1934182[iParam0 /*18*/].f_8[iVar1]))
				{
					__LIB_1__::func_948(Global_1934182[iParam0 /*18*/].f_8[iVar1], 1, 0f, 0, 0, 0, 0, 0);
				}
			}
		}
		iVar1++;
	}
}

void func_262(int iParam0)
{
	if (!__LIB_10__::func_783(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_12() != 76)
	{
		if (Global_1934182[iParam0 /*18*/].f_4 != -1)
		{
			__LIB_7__::func_766(__LIB_16__::func_197(iParam0), 15, Global_1934182[iParam0 /*18*/].f_1, 0);
			Global_1934182[iParam0 /*18*/].f_4 = -1;
		}
	}
}

bool func_263(int iParam0)
{
	if (!__LIB_10__::func_783(iParam0))
	{
		return false;
	}
	return Global_40.f_9079[iParam0] & 1 != 0;
}

bool func_264(int iParam0)
{
	int iVar0;
	if (!__LIB_10__::func_783(iParam0))
	{
		return false;
	}
	iVar0 = Global_40.f_9079.f_10[iParam0];
	if (iVar0 == -15 || iVar0 == 0)
	{
		return false;
	}
	__LIB_1__::func_446(&iVar0, 0, 0, 0, 1, 0, 0, 0);
	return !__LIB_1__::func_426(iVar0, 1);
}

void func_267(int iParam0)
{
	if (!__LIB_10__::func_783(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_44(Global_1934182[iParam0 /*18*/].f_5))
	{
		return;
	}
	if (__LIB_0__::func_702(Global_1934182[iParam0 /*18*/].f_5))
	{
		return;
	}
	Global_40.f_9079.f_5[iParam0] = 1;
	__LIB_1__::func_319(Global_1934182[iParam0 /*18*/].f_5);
}

void func_268(int iParam0, float fParam1)
{
	if (fParam1 < 400f)
	{
		if (!func_263(iParam0))
		{
			func_825(iParam0);
		}
	}
}

void func_269()
{
	__LIB_18__::func_915(0, &(Global_40.f_9096[0 /*12*/]));
	__LIB_8__::func_82(0, 1073741824 /* Float: 2f */);
	__LIB_8__::func_82(0, 268435456);
	Global_1392194[0 /*10*/].f_9 = MISC::GET_FRAME_COUNT();
	__LIB_18__::func_915(3, &(Global_40.f_9096[3 /*12*/]));
	__LIB_8__::func_82(3, 1073741824 /* Float: 2f */);
	__LIB_8__::func_82(3, 268435456);
	Global_1392194[3 /*10*/].f_9 = MISC::GET_FRAME_COUNT() + 360;
	__LIB_18__::func_915(1, &(Global_40.f_9096[1 /*12*/]));
	__LIB_8__::func_82(1, 1073741824 /* Float: 2f */);
	__LIB_8__::func_82(1, 268435456);
	Global_1392194[1 /*10*/].f_9 = MISC::GET_FRAME_COUNT() + 720;
	__LIB_18__::func_915(2, &(Global_40.f_9096[2 /*12*/]));
	__LIB_8__::func_82(2, 1073741824 /* Float: 2f */);
	__LIB_8__::func_82(2, 268435456);
	Global_1392194[2 /*10*/].f_9 = MISC::GET_FRAME_COUNT() + 1080;
	func_826();
}

void func_271()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_828(iVar0, -1);
		iVar0++;
	}
}

int func_272()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar0 = 0;
	fVar2 = __LIB_3__::func_332(__LIB_7__::func_943(iVar0, __LIB_0__::func_982(iVar0)), 0);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == iVar0)
		{
		}
		else
		{
			fVar3 = __LIB_3__::func_332(__LIB_7__::func_943(iVar1, __LIB_0__::func_982(iVar1)), 0);
			if (fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	Global_1898092.f_4 = fVar2;
	return iVar0;
}

void func_274(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (!__LIB_7__::func_908(iParam0, 134217728))
	{
		return;
	}
	if (Global_1898092.f_26.f_2 == iParam0)
	{
		bVar1 = true;
	}
	if (__LIB_7__::func_908(iParam0, 1))
	{
		bVar0 = true;
	}
	if (__LIB_7__::func_908(iParam0, 134217728))
	{
		bVar2 = true;
	}
	bVar3 = true;
	if ((!bVar1 && !bVar0) && !bVar2)
	{
		bVar3 = false;
	}
	if (func_830(Global_36, iParam0))
	{
		__LIB_8__::func_83(iParam0, 134217728);
		if (iParam0 == 3)
		{
			__LIB_8__::func_82(iParam0, 65536);
		}
		bVar3 = false;
	}
	if (__LIB_7__::func_908(iParam0, 65536) && Global_1898092.f_26.f_2 != iParam0)
	{
		bVar3 = false;
	}
	if (__LIB_7__::func_908(iParam0, 1048576))
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		iVar4 = func_831(iParam0);
	}
	if (bVar3 && !bParam1)
	{
		if (Global_1392194[iParam0 /*10*/].f_2 == -1)
		{
			Global_1392194[iParam0 /*10*/].f_3 = iVar4;
			Global_1392194[iParam0 /*10*/].f_2 = __LIB_14__::func_135(__LIB_7__::func_942(iParam0), iVar4, __LIB_7__::func_943(iParam0, __LIB_0__::func_982(iParam0)), -1);
			__LIB_4__::func_266(__LIB_7__::func_942(iParam0), iVar4, __LIB_7__::func_943(iParam0, __LIB_0__::func_982(iParam0)), __LIB_10__::func_629(iParam0));
		}
		else if (Global_1392194[iParam0 /*10*/].f_3 != iVar4)
		{
			__LIB_7__::func_766(__LIB_7__::func_942(iParam0), Global_1392194[iParam0 /*10*/].f_3, __LIB_7__::func_943(iParam0, __LIB_0__::func_982(iParam0)), 0);
			Global_1392194[iParam0 /*10*/].f_2 = -1;
		}
	}
	else if (Global_1392194[iParam0 /*10*/].f_2 != -1)
	{
		__LIB_7__::func_766(__LIB_7__::func_942(iParam0), Global_1392194[iParam0 /*10*/].f_3, __LIB_7__::func_943(iParam0, __LIB_0__::func_982(iParam0)), 0);
		Global_1392194[iParam0 /*10*/].f_2 = -1;
	}
}

void func_275()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Global_1898092.f_3;
	Global_1898092.f_3 = func_272();
	if (iVar0 != Global_1898092.f_3)
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			iVar1 = (64 * __LIB_0__::func_55(iVar2 == 0, 1, (2 * iVar2)));
			__LIB_16__::func_222(&(Global_1898092.f_5[iVar2 /*6*/]), iVar1, 1);
			iVar2++;
		}
	}
}

void func_277(int iParam0, int iParam1)
{
	if (func_835(iParam0, iParam1))
	{
		*iParam1 = __LIB_16__::func_269(*iParam0);
		func_836(*iParam0, *iParam1);
		__LIB_8__::func_365(*iParam0, 0);
		if (__LIB_7__::func_908(*iParam0, 4194304))
		{
			__LIB_8__::func_83(*iParam0, 4194304);
		}
		if (__LIB_7__::func_908(*iParam0, 8388608))
		{
			__LIB_8__::func_83(*iParam0, 8388608);
		}
		func_838(*iParam0);
		__LIB_8__::func_82(*iParam0, -2147483648);
		__LIB_8__::func_82(*iParam0, 1073741824 /* Float: 2f */);
	}
}

void func_278(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam0 == 0)
	{
		iVar0 = iParam1;
		switch (iVar0)
		{
			case 1:
				if (__LIB_7__::func_907(iParam0, 4) && !__LIB_7__::func_907(iParam0, 131072))
				{
					__LIB_8__::func_85(iParam0, 131072);
					if (__LIB_7__::func_908(1, 2))
					{
						func_840(iParam0, 1, 0);
					}
					else
					{
						func_840(iParam0, 2, 0);
					}
				}
				break;
			case 2:
				if (__LIB_7__::func_907(iParam0, 4) && !__LIB_7__::func_907(iParam0, 131072))
				{
					__LIB_8__::func_85(iParam0, 131072);
					func_840(iParam0, 4, 0);
				}
				break;
			case 3:
				if (__LIB_7__::func_907(iParam0, 4) && !__LIB_7__::func_907(iParam0, 131072))
				{
					__LIB_8__::func_85(iParam0, 131072);
					func_840(iParam0, 14, 0);
				}
				break;
			case 4:
				break;
			case 5:
				break;
		}
	}
	else if (iParam0 == 1)
	{
		iVar1 = iParam1;
		switch (iVar1)
		{
			case 1:
				if (__LIB_7__::func_907(iParam0, 4) && !__LIB_7__::func_907(iParam0, 131072))
				{
					__LIB_8__::func_85(iParam0, 131072);
					func_840(iParam0, 5, 0);
				}
				break;
			case 2:
				if (__LIB_7__::func_907(iParam0, 4) && !__LIB_7__::func_907(iParam0, 131072))
				{
					__LIB_8__::func_85(iParam0, 131072);
					func_840(iParam0, 5, 0);
				}
				break;
			case 3:
				if (__LIB_7__::func_907(iParam0, 4) && !__LIB_7__::func_907(iParam0, 131072))
				{
					__LIB_8__::func_85(iParam0, 131072);
					if (!__LIB_7__::func_908(iParam0, 128))
					{
						func_840(iParam0, 15, 0);
					}
					else
					{
						func_840(iParam0, 2, 0);
					}
				}
				break;
			case 4:
				if (__LIB_7__::func_907(iParam0, 128) && !__LIB_7__::func_907(iParam0, 131072))
				{
					__LIB_8__::func_85(iParam0, 131072);
					func_840(iParam0, 0, 0);
				}
				break;
		}
	}
	else if (iParam0 == 3)
	{
		iVar2 = iParam1;
		switch (iVar2)
		{
			case 1:
				if ((__LIB_7__::func_907(iParam0, 4) && !__LIB_7__::func_907(iParam0, 131072)) && !__LIB_7__::func_908(iParam0, 32))
				{
					__LIB_8__::func_85(iParam0, 131072);
				}
				break;
			case 2:
				if (__LIB_7__::func_907(iParam0, 4) && !__LIB_7__::func_907(iParam0, 131072))
				{
					__LIB_8__::func_85(iParam0, 131072);
				}
				break;
		}
	}
	else if (iParam0 == 2)
	{
		iVar3 = iParam1;
		switch (iVar3)
		{
			case 1:
				if (__LIB_7__::func_907(iParam0, 4) && !__LIB_7__::func_907(iParam0, 131072))
				{
					__LIB_8__::func_85(iParam0, 131072);
					func_840(iParam0, 2, 0);
				}
				break;
			case 2:
				if (__LIB_7__::func_907(iParam0, 4) && !__LIB_7__::func_907(iParam0, 131072))
				{
					__LIB_8__::func_85(iParam0, 131072);
					func_840(iParam0, 12, 0);
				}
				break;
			case 3:
				if (__LIB_7__::func_907(iParam0, 4) && !__LIB_7__::func_907(iParam0, 131072))
				{
					__LIB_8__::func_85(iParam0, 131072);
					func_840(iParam0, 4, 0);
				}
				break;
			case 4:
				break;
		}
	}
	func_841(iParam0);
}

bool func_279(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return false;
	}
	if ((MISC::GET_FRAME_COUNT() - Global_1392194[iParam0 /*10*/].f_9) > 1800)
	{
		Global_1392194[iParam0 /*10*/].f_9 = MISC::GET_FRAME_COUNT();
		if (!func_842(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_282(int iParam0)
{
	if ((!__LIB_7__::func_907(iParam0, 524288) && !__LIB_7__::func_907(iParam0, 1048576)) && !__LIB_7__::func_907(iParam0, 2097152))
	{
		return true;
	}
	if ((__LIB_3__::func_184(Global_36, iParam0) || __LIB_0__::func_21(__LIB_7__::func_942(iParam0), 8)) || __LIB_0__::func_27(Global_1392194[iParam0 /*10*/].f_1, 1))
	{
		return false;
	}
	if (Global_40.f_9096[iParam0 /*12*/].f_11 < 0)
	{
		if (Global_40.f_9096[iParam0 /*12*/].f_8 >= 3 && __LIB_7__::func_908(iParam0, 2097152))
		{
			if (!__LIB_7__::func_908(iParam0, 4194304))
			{
				__LIB_8__::func_82(iParam0, 4194304);
				__LIB_8__::func_82(iParam0, 1073741824 /* Float: 2f */);
				__LIB_8__::func_85(iParam0, 8388608);
				func_844(iParam0);
				return false;
			}
			else if (!__LIB_7__::func_908(iParam0, 8388608))
			{
				__LIB_8__::func_82(iParam0, 8388608);
				__LIB_8__::func_82(iParam0, 1073741824 /* Float: 2f */);
				return false;
			}
		}
		else
		{
			func_838(iParam0);
			__LIB_8__::func_244(iParam0, 3);
			return true;
		}
	}
	if (func_846(iParam0))
	{
		if (Global_40.f_9096[iParam0 /*12*/].f_8 >= 3 && __LIB_7__::func_908(iParam0, 2097152))
		{
			if (!__LIB_7__::func_908(iParam0, 4194304))
			{
				__LIB_8__::func_82(iParam0, 4194304);
				__LIB_8__::func_82(iParam0, 1073741824 /* Float: 2f */);
				__LIB_8__::func_85(iParam0, 8388608);
				func_844(iParam0);
				return false;
			}
			else if (!__LIB_7__::func_908(iParam0, 8388608))
			{
				__LIB_8__::func_82(iParam0, 8388608);
				__LIB_8__::func_82(iParam0, 1073741824 /* Float: 2f */);
				return false;
			}
		}
		else
		{
			func_838(iParam0);
		}
		return false;
	}
	return false;
}

bool func_286(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_7__::func_908(iParam0, 268435456))
	{
		return true;
	}
	if (__LIB_7__::func_897(2) || __LIB_7__::func_897(1))
	{
		return true;
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		__LIB_7__::func_894(8);
		return false;
	}
	if (__LIB_2__::func_776())
	{
		__LIB_7__::func_894(8);
		return false;
	}
	if (__LIB_0__::func_27(Global_1392194[iParam0 /*10*/].f_1, 1))
	{
		__LIB_7__::func_894(8);
		return false;
	}
	if (BUILTIN::VDIST2(__LIB_7__::func_943(iParam0, iParam1), Global_36) <= 90000f)
	{
		__LIB_8__::func_85(iParam0, 2048);
		return false;
	}
	iVar0 = __LIB_7__::func_942(iParam0);
	if (iParam0 != 1 && __LIB_1__::func_205(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0))
	{
		__LIB_8__::func_85(iParam0, 2048);
		return false;
	}
	if (func_847(iParam0, iParam1))
	{
		__LIB_7__::func_894(8);
		return false;
	}
	return true;
}

void func_289(int iParam0)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_4 = 0;
}

void func_292(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	func_850(iParam0, Global_40.f_9096[iParam0 /*12*/].f_2, iParam1, iParam2, iParam3, iParam4);
}

void func_293()
{
	int iVar0;
	if (!Global_1935630.f_12)
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !__LIB_7__::func_908(1, 8192)) && !(PED::IS_PED_IN_COMBAT(Global_35, 0) || func_851()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
			if (__LIB_18__::func_253(&iVar0))
			{
				if (!DECORATOR::DECOR_EXIST_ON(Global_35, "bGPSEnabled"))
				{
					DECORATOR::DECOR_SET_BOOL(Global_35, "bGPSEnabled", true);
					if (!MAP::DOES_BLIP_EXIST(Global_1392194[1 /*10*/].f_4))
					{
						__LIB_3__::func_652(__LIB_10__::func_630(), &(Global_1392194[1 /*10*/].f_4), 1631143573, 0, __LIB_10__::func_629(1), 0);
					}
					__LIB_1__::func_240(458, (MISC::GET_FRAME_COUNT() - Global_1392194[1 /*10*/].f_8) > 2700);
				}
			}
		}
		else if (DECORATOR::DECOR_EXIST_ON(Global_35, "bGPSEnabled"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "bGPSEnabled");
			__LIB_0__::func_325(&(Global_1392194[1 /*10*/].f_4));
			Global_1392194[1 /*10*/].f_8 = MISC::GET_FRAME_COUNT();
		}
	}
}

void func_294(int iParam0, int iParam1)
{
	if (iParam1 < __LIB_8__::func_80(iParam0))
	{
		__LIB_8__::func_83(iParam0, 65536);
	}
	switch (iParam0)
	{
		case 0:
			Global_40.f_9096[0 /*12*/].f_6 = 0;
			if (iParam1 == 2)
			{
				func_840(iParam0, 10, 0);
			}
			else if (iParam1 == 3)
			{
				if (!__LIB_7__::func_907(iParam0, 128))
				{
					if (!__LIB_7__::func_907(iParam0, 8388608))
					{
						__LIB_8__::func_85(iParam0, 8388608);
					}
				}
				else if (__LIB_7__::func_907(iParam0, 8388608) && !__LIB_7__::func_908(iParam0, 4194304))
				{
					__LIB_8__::func_93(iParam0, 8388608);
				}
			}
			else if (iParam1 == 4)
			{
				__LIB_8__::func_85(iParam0, 8388608);
			}
			else if (iParam1 == 5)
			{
				__LIB_8__::func_85(iParam0, 8388608);
			}
			break;
		case 1:
			if (iParam1 == 2)
			{
				if (!__LIB_7__::func_907(iParam0, 4))
				{
					if (!__LIB_7__::func_907(iParam0, 8388608))
					{
						__LIB_8__::func_85(iParam0, 8388608);
					}
				}
				else if (__LIB_7__::func_907(iParam0, 8388608) && !__LIB_7__::func_908(iParam0, 4194304))
				{
					__LIB_8__::func_93(iParam0, 8388608);
				}
			}
			else if (iParam1 == 4)
			{
				func_840(iParam0, 30, 0);
				if (__LIB_7__::func_907(iParam0, 8388608) && !__LIB_7__::func_908(iParam0, 4194304))
				{
					__LIB_8__::func_93(iParam0, 8388608);
				}
			}
			else if (iParam1 == 5)
			{
				if (!__LIB_7__::func_907(iParam0, 8388608))
				{
					__LIB_8__::func_85(iParam0, 8388608);
				}
			}
			break;
		case 3:
			if (iParam1 == 1)
			{
			}
			else if (iParam1 == 2)
			{
			}
			break;
		case 2:
			if (iParam1 == 2)
			{
				if (!__LIB_7__::func_907(iParam0, 128))
				{
					if (!__LIB_7__::func_907(iParam0, 8388608))
					{
						__LIB_8__::func_85(iParam0, 8388608);
					}
				}
				else if (__LIB_7__::func_907(iParam0, 8388608) && !__LIB_7__::func_908(iParam0, 4194304))
				{
					__LIB_8__::func_93(iParam0, 8388608);
				}
			}
			else if (iParam1 == 4)
			{
				if (!__LIB_7__::func_907(iParam0, 256))
				{
					__LIB_8__::func_85(iParam0, 256);
				}
			}
			break;
	}
	__LIB_8__::func_93(iParam0, 131072);
}

bool func_296(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (!__LIB_0__::func_625(iParam0))
	{
		__LIB_7__::func_894(8);
		return false;
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		__LIB_7__::func_894(8);
		return false;
	}
	if (__LIB_7__::func_897(2) || __LIB_7__::func_897(1))
	{
		bParam2 = true;
	}
	if (__LIB_7__::func_908(iParam0, 268435456))
	{
		bParam2 = true;
		bParam4 = false;
	}
	iVar0 = __LIB_7__::func_942(iParam0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (!__LIB_7__::func_897(32))
	{
		__LIB_7__::func_894(32);
	}
	switch (iParam0)
	{
		case 0:
			iVar1 = 14;
			switch (iParam1)
			{
				case 1:
					bVar2 = __LIB_7__::func_907(0, 128);
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!__LIB_19__::func_525(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (__LIB_19__::func_526(iParam1, bVar2, bParam4, __LIB_10__::func_682(0), __LIB_7__::func_908(0, 4194304), iVar1))
						{
							__LIB_8__::func_83(iParam0, 1048576);
							func_860(iParam1);
							__LIB_18__::func_930(0, iParam1);
							if (!__LIB_10__::func_682(0))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_01", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					bVar2 = __LIB_7__::func_908(0, 512);
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!__LIB_19__::func_525(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (__LIB_19__::func_526(iParam1, 0, bParam4, __LIB_10__::func_682(0), __LIB_7__::func_908(0, 4194304), iVar1))
						{
							__LIB_8__::func_83(iParam0, 1048576);
							func_860(iParam1);
							__LIB_18__::func_930(0, iParam1);
							if (!__LIB_10__::func_682(0))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_02", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 3:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!__LIB_19__::func_525(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (__LIB_19__::func_526(iParam1, 0, bParam4, __LIB_10__::func_682(0), __LIB_7__::func_908(0, 4194304), iVar1))
						{
							__LIB_8__::func_83(iParam0, 1048576);
							func_860(iParam1);
							__LIB_18__::func_930(0, iParam1);
							if (!__LIB_10__::func_682(0))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_03", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 4:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!__LIB_19__::func_525(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_862(iParam0, 1);
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (__LIB_19__::func_526(iParam1, 0, bParam4, 0, 0, iVar1))
						{
							__LIB_8__::func_82(iParam0, 1048576);
							func_860(iParam1);
							__LIB_18__::func_930(0, iParam1);
							AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_04", true, true);
							MISC::_0xCC3EDC5614B03F61(0);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 5:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!__LIB_19__::func_525(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_862(iParam0, 1);
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (__LIB_19__::func_526(iParam1, 0, bParam4, 0, 0, iVar1))
						{
							__LIB_8__::func_82(iParam0, 1048576);
							func_860(iParam1);
							__LIB_1__::func_408(-1062490780, 1, 0);
							__LIB_18__::func_930(0, iParam1);
							AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_05", true, true);
							MISC::_0xCC3EDC5614B03F61(0);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
		case 1:
			iVar1 = 4;
			switch (iParam1)
			{
				case 1:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!__LIB_19__::func_527(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (__LIB_19__::func_528(iParam1, 0, __LIB_7__::func_908(1, 4194304), __LIB_7__::func_908(1, 8388608), bParam4, __LIB_10__::func_682(1), iVar1))
						{
							__LIB_8__::func_83(iParam0, 1048576);
							__LIB_18__::func_930(1, iParam1);
							if (!__LIB_10__::func_682(1))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_01", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!__LIB_19__::func_527(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (__LIB_19__::func_528(iParam1, 0, __LIB_7__::func_908(1, 4194304), __LIB_7__::func_908(1, 8388608), bParam4, __LIB_10__::func_682(1), iVar1))
						{
							__LIB_8__::func_83(iParam0, 1048576);
							__LIB_18__::func_930(1, iParam1);
							if (!__LIB_10__::func_682(1))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_02", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 3:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!__LIB_19__::func_527(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (__LIB_19__::func_528(iParam1, __LIB_7__::func_908(1, 128), __LIB_7__::func_908(1, 4194304), __LIB_7__::func_908(1, 8388608), bParam4, __LIB_10__::func_682(1), iVar1))
						{
							__LIB_8__::func_83(iParam0, 1048576);
							__LIB_18__::func_930(1, iParam1);
							if (!__LIB_10__::func_682(1))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_03", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 4:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!__LIB_19__::func_527(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (__LIB_19__::func_528(iParam1, 0, 0, 0, bParam4, 0, iVar1))
						{
							__LIB_8__::func_83(iParam0, 1048576);
							__LIB_18__::func_930(1, iParam1);
							if (!__LIB_10__::func_682(1))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_04", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 5:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!__LIB_19__::func_527(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_862(iParam0, 1);
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (__LIB_19__::func_528(iParam1, 0, 0, 0, bParam4, 0, iVar1))
						{
							__LIB_8__::func_82(iParam0, 1048576);
							__LIB_18__::func_930(1, iParam1);
							MISC::_0xCC3EDC5614B03F61(1);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
		case 3:
			iVar1 = 2;
			iVar3 = iParam1;
			switch (iVar3)
			{
				case 1:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!__LIB_19__::func_529(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (__LIB_19__::func_530(iParam1, bParam4, iVar1))
						{
							__LIB_18__::func_930(3, iParam1);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!__LIB_19__::func_529(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (__LIB_19__::func_530(iParam1, bParam4, iVar1))
						{
							__LIB_18__::func_930(3, iParam1);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
		case 2:
			iVar1 = 13;
			switch (iParam1)
			{
				case 1:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!bParam3 && !func_870(__LIB_16__::func_271(iParam1), __LIB_16__::func_272(iParam1), __LIB_16__::func_273(iParam1), bParam2, iParam1, 2f))
						{
							__LIB_7__::func_894(8);
							return false;
						}
						if (!bParam2 && __LIB_1__::func_205(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0))
						{
							__LIB_7__::func_894(8);
							return false;
						}
						if (!__LIB_19__::func_531(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						bVar2 = __LIB_16__::func_432(iParam1);
						if (__LIB_19__::func_532(iParam1, bVar2, bParam4, __LIB_7__::func_908(2, 4194304), iVar1))
						{
							if (bVar2)
							{
								__LIB_8__::func_85(2, 134217728);
							}
							__LIB_8__::func_83(iParam0, 1048576);
							__LIB_8__::func_581(iParam1);
							if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[2 /*10*/].f_7))
							{
								PATHFIND::_0xD17672447692478E(Global_1392194[2 /*10*/].f_7, 0);
								VOLUME::_DELETE_VOLUME(Global_1392194[2 /*10*/].f_7);
							}
							Global_1392194[2 /*10*/].f_7 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA Central Union - volRoadBlock");
							VOLUME::_0xBCE668AAF83608BE(Global_1392194[2 /*10*/].f_7, 2244.843f, 721.3605f, 95.94753f, 0f, 0f, 0f, 40f, 40f, 30f);
							VOLUME::_0xBCE668AAF83608BE(Global_1392194[2 /*10*/].f_7, 2122.792f, 1063.288f, 129.0717f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_0xBCE668AAF83608BE(Global_1392194[2 /*10*/].f_7, 1892.675f, 997.9972f, 125.5401f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_0xBCE668AAF83608BE(Global_1392194[2 /*10*/].f_7, 1821.172f, 936.1248f, 120.5233f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_0xBCE668AAF83608BE(Global_1392194[2 /*10*/].f_7, 1817.783f, 855.9667f, 117.5885f, 0f, 0f, 0f, 10f, 10f, 10f);
							PATHFIND::_0xC1799FAFD2FDF52B(Global_1392194[2 /*10*/].f_7, 0, 0, 0);
							__LIB_18__::func_930(2, iParam1);
							if (!__LIB_10__::func_682(2))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_01", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_Abandoned", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!bParam3 && !func_870(__LIB_16__::func_271(iParam1), __LIB_16__::func_272(iParam1), __LIB_16__::func_273(iParam1), bParam2, iParam1, 1.5f))
						{
							__LIB_7__::func_894(8);
							return false;
						}
						if (!bParam2 && __LIB_1__::func_205(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0))
						{
							__LIB_7__::func_894(8);
							return false;
						}
						if (!__LIB_19__::func_531(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						bVar2 = __LIB_16__::func_432(iParam1);
						if (__LIB_19__::func_532(iParam1, bVar2, bParam4, __LIB_7__::func_908(2, 4194304), iVar1))
						{
							if (bVar2)
							{
								__LIB_8__::func_85(2, 134217728);
							}
							__LIB_8__::func_83(iParam0, 1048576);
							__LIB_8__::func_581(iParam1);
							if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[2 /*10*/].f_7))
							{
								PATHFIND::_0xD17672447692478E(Global_1392194[2 /*10*/].f_7, 0);
								VOLUME::_DELETE_VOLUME(Global_1392194[2 /*10*/].f_7);
							}
							Global_1392194[2 /*10*/].f_7 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA Central Union - volRoadBlock");
							VOLUME::_0xBCE668AAF83608BE(Global_1392194[2 /*10*/].f_7, 2122.792f, 1063.288f, 129.0717f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_0xBCE668AAF83608BE(Global_1392194[2 /*10*/].f_7, 1892.675f, 997.9972f, 125.5401f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_0xBCE668AAF83608BE(Global_1392194[2 /*10*/].f_7, 1821.172f, 936.1248f, 120.5233f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_0xBCE668AAF83608BE(Global_1392194[2 /*10*/].f_7, 1817.783f, 855.9667f, 117.5885f, 0f, 0f, 0f, 10f, 10f, 10f);
							PATHFIND::_0xC1799FAFD2FDF52B(Global_1392194[2 /*10*/].f_7, 0, 0, 0);
							__LIB_18__::func_930(2, iParam1);
							if (!__LIB_10__::func_682(2))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_02", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_Abandoned", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 3:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!bParam3 && !func_870(__LIB_16__::func_271(iParam1), __LIB_16__::func_272(iParam1), __LIB_16__::func_273(iParam1), bParam2, iParam1, 1065353216 /* Float: 1f */))
						{
							__LIB_7__::func_894(8);
							return false;
						}
						if (!bParam2 && __LIB_1__::func_205(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0))
						{
							__LIB_7__::func_894(8);
							return false;
						}
						if (!__LIB_19__::func_531(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (__LIB_19__::func_532(iParam1, 0, bParam4, __LIB_7__::func_908(2, 4194304), iVar1))
						{
							__LIB_8__::func_83(iParam0, 1048576);
							__LIB_8__::func_581(iParam1);
							if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[2 /*10*/].f_7))
							{
								PATHFIND::_0xD17672447692478E(Global_1392194[2 /*10*/].f_7, 0);
								VOLUME::_DELETE_VOLUME(Global_1392194[2 /*10*/].f_7);
							}
							Global_1392194[2 /*10*/].f_7 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA Central Union - volRoadBlock");
							VOLUME::_0xBCE668AAF83608BE(Global_1392194[2 /*10*/].f_7, 1892.675f, 997.9972f, 125.5401f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_0xBCE668AAF83608BE(Global_1392194[2 /*10*/].f_7, 1821.172f, 936.1248f, 120.5233f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_0xBCE668AAF83608BE(Global_1392194[2 /*10*/].f_7, 1817.783f, 855.9667f, 117.5885f, 0f, 0f, 0f, 10f, 10f, 10f);
							PATHFIND::_0xC1799FAFD2FDF52B(Global_1392194[2 /*10*/].f_7, 0, 0, 0);
							__LIB_18__::func_930(2, iParam1);
							if (!__LIB_10__::func_682(2))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_03", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_Abandoned", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 4:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_870(__LIB_16__::func_271(iParam1), __LIB_16__::func_272(iParam1), __LIB_16__::func_273(iParam1), bParam2, iParam1, 1065353216 /* Float: 1f */))
						{
							__LIB_7__::func_894(8);
							return false;
						}
						if (!bParam2)
						{
							if (__LIB_1__::func_205(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0))
							{
								__LIB_7__::func_894(8);
								return false;
							}
							if (CAM::IS_SPHERE_VISIBLE(1846.298f, 887.8817f, 113.5422f, 115f) || __LIB_3__::func_332(1846.298f, 887.8817f, 113.5422f, 1) < 200f)
							{
								__LIB_7__::func_894(8);
								return false;
							}
						}
						if (!__LIB_19__::func_531(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_862(iParam0, 1);
							__LIB_16__::func_221(2);
							__LIB_7__::func_894(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (__LIB_19__::func_532(iParam1, bVar2, bParam4, 0, iVar1))
						{
							__LIB_8__::func_82(iParam0, 1048576);
							__LIB_8__::func_581(iParam1);
							if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[2 /*10*/].f_7))
							{
								PATHFIND::_0xD17672447692478E(Global_1392194[2 /*10*/].f_7, 0);
								VOLUME::_DELETE_VOLUME(Global_1392194[2 /*10*/].f_7);
							}
							__LIB_8__::func_82(iParam0, 65536);
							__LIB_10__::func_815(iVar0);
							__LIB_6__::func_765(4, 1);
							__LIB_5__::func_441("railroad_stage4");
							__LIB_18__::func_930(2, iParam1);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
	}
	__LIB_8__::func_83(iParam0, 268435456);
	__LIB_7__::func_896(32);
	return true;
}

void func_298(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam3)
			{
				case 0:
				case default:
					*uParam1 = { -1261.231f, -310.1417f, 100.7263f };
					*uParam2 = 71.3469f;
					return;
				case 1:
					*uParam1 = { -1474.719f, -79.4687f, 109.0108f };
					*uParam2 = 211.465f;
					return;
				case 2:
					*uParam1 = { -1376.806f, -60.8017f, 79.2619f };
					*uParam2 = 168.8738f;
					return;
				case 3:
					*uParam1 = { -1497.011f, -363.2157f, 134.0955f };
					*uParam2 = 331.0784f;
					return;
			}
			break;
		case 1:
			switch (iParam3)
			{
				case 0:
				case default:
					*uParam1 = { -570.3791f, 416.2931f, 87.4048f };
					*uParam2 = 300.6946f;
					return;
				case 1:
					*uParam1 = { -311.3359f, 560.101f, 98.8341f };
					*uParam2 = 113.9066f;
					return;
				case 2:
					*uParam1 = { -418.9164f, 668.0876f, 114.5171f };
					*uParam2 = 177.6395f;
					return;
				case 3:
					*uParam1 = { -308.2228f, 510.0672f, 91.1515f };
					*uParam2 = 89.967f;
					return;
			}
			break;
		case 2:
			switch (iParam4)
			{
				case 1:
				case default:
					switch (iParam3)
					{
						case 0:
						case default:
							*uParam1 = { 2248.901f, 535.688f, 74.7152f };
							*uParam2 = 22.0801f;
							return;
						case 1:
							*uParam1 = { 2223.725f, 798.5815f, 107.6169f };
							*uParam2 = 159.1932f;
							return;
						case 2:
							*uParam1 = { 2340.829f, 736.3986f, 73.1578f };
							*uParam2 = 127.9038f;
							return;
						case 3:
							*uParam1 = { 2119.933f, 649.0927f, 133.1353f };
							*uParam2 = 274.3134f;
							return;
					}
					break;
				case 2:
					switch (iParam3)
					{
						case 0:
						case default:
							*uParam1 = { 2249.599f, 667.4967f, 87.6821f };
							*uParam2 = 24.2233f;
							return;
						case 1:
							*uParam1 = { 2112.95f, 995.3058f, 110.7093f };
							*uParam2 = 204.0536f;
							return;
						case 2:
							*uParam1 = { 2328.921f, 724.4437f, 75.8784f };
							*uParam2 = 55.6839f;
							return;
						case 3:
							*uParam1 = { 2156.616f, 672.2913f, 121.7241f };
							*uParam2 = 325.4661f;
							return;
					}
					break;
				case 3:
					switch (iParam3)
					{
						case 0:
						case default:
							*uParam1 = { 2122.964f, 965.6495f, 114.3117f };
							*uParam2 = 101.8466f;
							return;
						case 1:
							*uParam1 = { 1824.587f, 886.397f, 110.226f };
							*uParam2 = 294.963f;
							return;
						case 2:
							*uParam1 = { 1896.055f, 994.3648f, 119.4357f };
							*uParam2 = 237.7192f;
							return;
						case 3:
							*uParam1 = { 1885.696f, 832.0124f, 123.1121f };
							*uParam2 = 343.0453f;
							return;
					}
					break;
			}
			break;
		case 3:
			switch (iParam3)
			{
				case 0:
				case default:
					*uParam1 = { -1647.109f, -1045.513f, 71.1557f };
					*uParam2 = 315.9918f;
					return;
				case 1:
					*uParam1 = { -1700.649f, -807.9653f, 101.8737f };
					*uParam2 = 236.2661f;
					return;
				case 2:
					*uParam1 = { -1417.209f, -817.977f, 99.2119f };
					*uParam2 = 130.1669f;
					return;
				case 3:
					*uParam1 = { -1486.81f, -905.7153f, 85.2737f };
					*uParam2 = 82.6837f;
					return;
			}
			break;
	}
}

void func_299(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_299(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_299(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_307()
{
	if (__LIB_2__::func_776())
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
		{
			return true;
		}
	}
	return false;
}

void func_308()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar0 /*13*/].f_10))
		{
			MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar0 /*13*/].f_10));
		}
		if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar0 /*13*/].f_11))
		{
			MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar0 /*13*/].f_11));
		}
		if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar0 /*13*/].f_12))
		{
			MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar0 /*13*/].f_12));
		}
		if (__LIB_1__::func_209(Global_1392388.f_10[iVar0 /*13*/].f_5))
		{
			__LIB_1__::func_222(Global_1392388.f_10[iVar0 /*13*/].f_5, 0);
		}
		iVar0++;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392388, false))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("coachrobberies_intro");
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("coachrobberies");
	}
}

void func_309()
{
	struct<4> Var0;
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bVar5 = false;
	if (Global_40.f_9146.f_3 == -1)
	{
		iVar6 = 0;
		while (iVar6 < 14)
		{
			if (!func_591(iVar6))
			{
				if (func_892(iVar6))
				{
					if (!MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar6 /*13*/].f_12))
					{
						if (func_893(iVar6))
						{
							Global_1392388.f_10[iVar6 /*13*/].f_12 = MAP::_BLIP_ADD_FOR_COORD(-936216634, Global_1392388.f_10[iVar6 /*13*/].f_2);
							MAP::SET_BLIP_SPRITE(Global_1392388.f_10[iVar6 /*13*/].f_12, joaat("BLIP_AMBIENT_COACH"), true);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1392388.f_10[iVar6 /*13*/].f_12, "PROC_BLIP_CRTIP");
						}
					}
					if (func_894(iVar6))
					{
						if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
						{
							bVar5 = true;
							SCRIPTS::REQUEST_SCRIPT("coachrobberies_intro");
							if (SCRIPTS::HAS_SCRIPT_LOADED("coachrobberies_intro"))
							{
								Var0.f_2 = Global_1392388.f_10[iVar6 /*13*/].f_12;
								Var0 = iVar6;
								Var0.f_3 = 0;
								Var0.f_1 = Global_1392388.f_10[iVar6 /*13*/];
								Global_1392388 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("coachrobberies_intro", &Var0, 5, 1024);
								SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("coachrobberies_intro");
							}
						}
					}
				}
			}
			iVar6++;
		}
	}
	else
	{
		iVar7 = Global_40.f_9146.f_3;
		if (__LIB_6__::func_759(iVar7) || __LIB_6__::func_764(iVar7))
		{
			if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar7 /*13*/].f_12))
			{
				MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar7 /*13*/].f_12));
			}
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
			{
				if (BUILTIN::VDIST(Global_36, __LIB_6__::func_758(iVar7)) < __LIB_6__::func_707(iVar7))
				{
					if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar7 /*13*/].f_10))
					{
						MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar7 /*13*/].f_10));
					}
					if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar7 /*13*/].f_11))
					{
						MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar7 /*13*/].f_11));
					}
				}
			}
			else if (__LIB_6__::func_759(iVar7))
			{
				if (!func_898(iVar7))
				{
					__LIB_1__::func_319(Global_1392388.f_10[iVar7 /*13*/].f_8);
				}
			}
			if (iVar7 != 13)
			{
				if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
				{
					if (__LIB_1__::func_426(Global_40.f_9146.f_79[iVar7], 1))
					{
						if (__LIB_6__::func_708(iVar7))
						{
							func_899(iVar7);
						}
						func_900(iVar7, 1);
						__LIB_8__::func_966("PROC_H_CROB_EXP", 10000, 0, 0, 0, 1);
						func_901();
						if (__LIB_6__::func_844(iVar7))
						{
							__LIB_6__::func_841(1024);
						}
						else if (__LIB_6__::func_842(iVar7))
						{
							__LIB_6__::func_841(2048);
						}
						return;
					}
				}
			}
		}
	}
	bVar8 = false;
	if ((((Global_40.f_9146.f_3 != -1 || __LIB_2__::func_776()) || __LIB_0__::func_627(128, 0)) || !__LIB_10__::func_716(2, -1)) || __LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		bVar8 = true;
	}
	iVar9 = 0;
	while (iVar9 < 7)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar9 /*13*/].f_12))
		{
			if (((bVar8 || (__LIB_0__::func_20(Global_1392388.f_10[iVar9 /*13*/].f_1) && __LIB_0__::func_21(Global_1392388.f_10[iVar9 /*13*/].f_1, 33554432))) || (__LIB_0__::func_29(Global_1392388.f_10[iVar9 /*13*/]) && !__LIB_2__::func_767(Global_1392388.f_10[iVar9 /*13*/], 0))) || (__LIB_1__::func_220(Global_1392388.f_10[iVar9 /*13*/].f_1) && func_905(iVar9)))
			{
				MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar9 /*13*/].f_12));
			}
		}
		iVar9++;
	}
	if (!bVar5)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("coachrobberies_intro");
	}
}

bool func_310()
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (!__LIB_1__::func_185(4) && __LIB_0__::func_28())
	{
		return false;
	}
	if (__LIB_0__::func_296(144, 0, 1) || __LIB_0__::func_1(Global_1935630, 2048))
	{
		return false;
	}
	return true;
}

void func_317()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_921(iVar0);
		iVar0++;
	}
}

void func_319(int iParam0, int iParam1, vector3 vParam2)
{
	Global_1392240.f_1[iParam0 /*18*/] = { vParam2 };
	Global_1392240.f_1[iParam0 /*18*/].f_4 = iParam1;
	Global_1392240.f_1[iParam0 /*18*/].f_13 = __LIB_1__::func_293(6, iParam0, 2, MISC::GET_HASH_KEY(func_922(iParam0)));
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_10__::func_631(iParam0) == 0)
		{
			__LIB_10__::func_246(iParam0, -15, 1, 2, 0);
		}
	}
}

bool func_320(int iParam0, int iParam1)
{
	if (__LIB_0__::func_296(0, 0, 1) && !__LIB_0__::func_756(iParam1, 1))
	{
		return false;
	}
	if (!__LIB_11__::func_168() || __LIB_0__::func_21(iParam0, 2097152))
	{
		return false;
	}
	return true;
}

bool func_325(int iParam0)
{
	if (!__LIB_11__::func_168())
	{
		return false;
	}
	if (!__LIB_4__::func_56(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_86(Global_1392240.f_1[iParam0 /*18*/]))
	{
		return false;
	}
	if (__LIB_0__::func_770(iParam0, 2))
	{
		func_934(iParam0);
		__LIB_10__::func_730(iParam0);
		return false;
	}
	if (__LIB_0__::func_21(Global_1392240.f_1[iParam0 /*18*/].f_4, 2097152))
	{
		return false;
	}
	if (!func_936(iParam0))
	{
		return false;
	}
	if (__LIB_10__::func_684())
	{
		return false;
	}
	if (!__LIB_10__::func_622(iParam0, 8))
	{
		if (__LIB_16__::func_199(iParam0))
		{
			return false;
		}
	}
	switch (iParam0)
	{
		case 2:
			if (__LIB_10__::func_632(2))
			{
				return false;
			}
			break;
		case 4:
			if (!__LIB_4__::func_54(4, 8192) && __LIB_3__::func_332(__LIB_4__::func_55(4), 1) < 20f)
			{
				__LIB_4__::func_262(4, 8192);
			}
			if (func_940() || (__LIB_0__::func_770(4, 8) && !__LIB_10__::func_717()))
			{
				return false;
			}
			break;
		case 6:
			if (!__LIB_10__::func_724(1, 1))
			{
				return false;
			}
			break;
		case 3:
			if (__LIB_0__::func_113())
			{
				if (__LIB_0__::func_770(3, 134217728) && __LIB_6__::func_668() != 565221344)
				{
					return false;
				}
			}
			else
			{
				if (__LIB_0__::func_770(3, 16))
				{
					return false;
				}
				if (__LIB_0__::func_770(3, 134217728))
				{
					return false;
				}
			}
			break;
		case 5:
			if (__LIB_0__::func_770(3, 16) && !__LIB_0__::func_113())
			{
				return false;
			}
			break;
	}
	return true;
}

void func_326(int iParam0, bool bParam1)
{
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (__LIB_0__::func_770(0, 2) || (__LIB_0__::func_181() && __LIB_0__::func_770(0, 16)))
			{
				__LIB_0__::func_400(216214729);
			}
			else
			{
				__LIB_0__::func_401(216214729);
			}
			__LIB_6__::func_661(iParam0, 262144);
			break;
		case 2:
			if (__LIB_0__::func_768(iParam0, 262144))
			{
				return;
			}
			if (__LIB_0__::func_770(2, 2))
			{
				__LIB_0__::func_400(-1532653291);
			}
			else
			{
				__LIB_0__::func_401(-1532653291);
			}
			__LIB_6__::func_661(iParam0, 262144);
			break;
		case 1:
			if (__LIB_0__::func_768(iParam0, 262144))
			{
				return;
			}
			__LIB_0__::func_401(-389510791);
			__LIB_6__::func_661(iParam0, 262144);
			break;
		case 4:
			if (__LIB_0__::func_756(iParam0, 512) || bParam1)
			{
				if ((func_940() || __LIB_10__::func_717()) || bParam1)
				{
					__LIB_0__::func_401(1401474740);
					__LIB_6__::func_661(iParam0, 262144);
				}
				else if (((!func_940() && !__LIB_1__::func_187(95)) && !__LIB_10__::func_717()) || __LIB_0__::func_770(4, 8))
				{
					__LIB_0__::func_400(1401474740);
					__LIB_6__::func_660(iParam0, 262144);
				}
			}
			else if (__LIB_0__::func_768(iParam0, 262144))
			{
				__LIB_0__::func_400(1401474740);
				__LIB_6__::func_660(iParam0, 262144);
			}
			break;
		case 6:
			if ((__LIB_10__::func_724(1, 1) && !__LIB_4__::func_54(6, 16384)) && !__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				__LIB_0__::func_401(585407854);
			}
			else
			{
				__LIB_0__::func_400(585407854);
			}
			break;
		case 5:
			if (__LIB_0__::func_768(iParam0, 262144))
			{
				return;
			}
			if (func_936(5))
			{
				__LIB_0__::func_401(-2035177903);
			}
			else
			{
				__LIB_0__::func_400(-2035177903);
			}
			__LIB_6__::func_661(iParam0, 262144);
			break;
		case 7:
			if (__LIB_0__::func_768(iParam0, 262144))
			{
				return;
			}
			if ((__LIB_4__::func_54(iParam0, 4194304) || __LIB_4__::func_54(iParam0, 8388608)) || (((__LIB_4__::func_54(iParam0, 2048) && __LIB_0__::func_770(7, 16)) && __LIB_0__::func_181()) && __LIB_4__::func_54(iParam0, 2097152)))
			{
				__LIB_0__::func_400(-622475043);
				__LIB_6__::func_661(iParam0, 262144);
			}
			else
			{
				__LIB_0__::func_401(-622475043);
				__LIB_6__::func_661(iParam0, 262144);
			}
			break;
		default:
			if (__LIB_0__::func_756(iParam0, 512))
			{
				__LIB_6__::func_661(iParam0, 262144);
			}
			break;
	}
}

void func_327(int iParam0)
{
	if (__LIB_0__::func_702(Global_1392240.f_1[iParam0 /*18*/].f_13))
	{
		return;
	}
	if (!__LIB_1__::func_241(Global_1392240.f_1[iParam0 /*18*/].f_13))
	{
		__LIB_1__::func_242(Global_1392240.f_1[iParam0 /*18*/].f_13, 0);
	}
	__LIB_1__::func_319(Global_1392240.f_1[iParam0 /*18*/].f_13);
}

void func_328(int iParam0)
{
	if (__LIB_0__::func_756(iParam0, 1024))
	{
		__LIB_10__::func_683(iParam0);
		return;
	}
	if (__LIB_10__::func_622(iParam0, 4))
	{
		return;
	}
	if (!__LIB_4__::func_54(iParam0, 8))
	{
		func_948(iParam0, 0);
		__LIB_4__::func_262(iParam0, 8);
	}
	else
	{
		func_948(iParam0, 0);
	}
}

void func_329(int iParam0)
{
	float fVar0;
	if (!__LIB_0__::func_756(iParam0, 1))
	{
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392240, false))
	{
		return;
	}
	fVar0 = BUILTIN::VDIST(Global_36, Global_1392240.f_1[iParam0 /*18*/]);
	if (fVar0 > 200f)
	{
		return;
	}
	func_949(iParam0);
}

void func_330(int iParam0)
{
	int iVar0;
	if (iParam0 == 2)
	{
		if (__LIB_10__::func_632(2))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_724(Global_1392240.f_1[iParam0 /*18*/].f_6[iVar0]))
		{
			if (!__LIB_4__::func_925(Global_1392240.f_1[iParam0 /*18*/].f_6[iVar0]))
			{
				__LIB_1__::func_948(Global_1392240.f_1[iParam0 /*18*/].f_6[iVar0], 0, 0, 0, 1, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_331()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_8__::func_180(iVar0, 0);
		switch (iVar0)
		{
			case 0:
				__LIB_19__::func_525(0, 1);
				__LIB_16__::func_313();
				break;
			case 1:
				__LIB_19__::func_527(0, 1);
				__LIB_16__::func_314();
				break;
			case 3:
				__LIB_19__::func_529(0, 1);
				break;
			case 2:
				__LIB_19__::func_531(0, 1);
				__LIB_0__::func_401(2077623691);
				func_870(__LIB_16__::func_271(1), __LIB_16__::func_272(1), __LIB_16__::func_273(1), 1, 1, 2f);
				__LIB_16__::func_315();
				__LIB_8__::func_369();
				break;
		}
		iVar0++;
	}
}

void func_334()
{
	int iVar0;
	iVar0 = Global_1359489.f_10;
	if (!__LIB_0__::func_49(iVar0))
	{
		return;
	}
	switch (Global_40.f_4942[iVar0 /*60*/].f_49)
	{
		case 4:
			if (__LIB_1__::func_110(__LIB_0__::func_23(), Global_40.f_4942[iVar0 /*60*/].f_46, 1))
			{
				if (__LIB_1__::func_307(iVar0, 1, 1))
				{
					WEAPON::_0x899A04AFCC725D04(__LIB_0__::func_271(iVar0), __LIB_16__::func_423(iVar0));
				}
				__LIB_11__::func_814(iVar0, __LIB_0__::func_61(), 0);
				Global_40.f_4942[iVar0 /*60*/].f_46 = -15;
				Global_40.f_4942[iVar0 /*60*/].f_49 = 0;
			}
			break;
	}
}

void func_338()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_961(&(Global_1359489.f_63[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_962(&(Global_1359489.f_63.f_242[iVar0 /*18*/]), iVar0);
		iVar0++;
	}
}

void func_340(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	char cVar2[64];
	int iVar10;
	bVar0 = MAP::DOES_BLIP_EXIST(Global_1391438.f_308[iParam1]);
	bVar1 = true;
	if (uParam0->f_9 == -589165916)
	{
		bVar1 = false;
	}
	if (__LIB_0__::func_272(uParam0->f_1, 0))
	{
		if (!(PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_1, uParam0->f_33) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_1, 0)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_1, -1))
		{
			bVar1 = false;
		}
	}
	if (__LIB_2__::func_776())
	{
		bVar1 = false;
	}
	if (bVar1)
	{
		if (!bVar0 && !Global_1391438.f_311[uParam0->f_12])
		{
			Global_1391438.f_308[iParam1] = MAP::_BLIP_ADD_FOR_COORD(-1337945352, uParam0->f_14);
			MAP::SET_BLIP_SPRITE(Global_1391438.f_308[iParam1], __LIB_0__::func_761(uParam0->f_8), true);
			StringCopy(&cVar2, MISC::_CREATE_VAR_STRING(2, __LIB_0__::func_759(uParam0->f_8)), 64);
			StringConCat(&cVar2, " - ", 64);
			StringConCat(&cVar2, MISC::_CREATE_VAR_STRING(2, __LIB_1__::func_464(*uParam0, 0)), 64);
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(Global_1391438.f_308[iParam1], &cVar2);
			iVar10 = __LIB_1__::func_245(uParam0->f_8);
			if (iVar10 != 0)
			{
				MAP::SET_BLIP_FLASH_TIMER(Global_1391438.f_308[iParam1], iVar10, uParam0->f_9);
			}
			if (func_967(*uParam0) != 0)
			{
				MAP::_BLIP_SET_MODIFIER(Global_1391438.f_308[iParam1], func_967(*uParam0));
			}
		}
		if (Global_1391438.f_311[iParam1])
		{
			MAP::_BLIP_SET_MODIFIER(Global_1391438.f_308[iParam1], 724623647);
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(Global_1391438.f_308[iParam1], 724623647);
		}
	}
	else if (bVar0)
	{
		MAP::REMOVE_BLIP(&(Global_1391438.f_308[iParam1]));
	}
}

void func_341()
{
	float fVar0;
	if (__LIB_4__::func_635(524288) || __LIB_1__::func_895(5000))
	{
		__LIB_0__::func_37(&(Global_1359489.f_52));
		__LIB_0__::func_698(524288);
	}
	if (__LIB_4__::func_635(32768))
	{
		if (!__LIB_0__::func_75(&(Global_1359489.f_52)))
		{
			Global_1357549.f_1485 = __LIB_0__::func_264(&(Global_1359489.f_55));
			__LIB_0__::func_37(&(Global_1359489.f_55));
			__LIB_1__::func_283(&(Global_1359489.f_52), 0);
		}
		else if (__LIB_0__::func_296(0, 0, 1) || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_33(&(Global_1359489.f_52)))
			{
				__LIB_2__::func_113(&(Global_1359489.f_52));
			}
		}
		else if (__LIB_0__::func_33(&(Global_1359489.f_52)))
		{
			__LIB_2__::func_112(&(Global_1359489.f_52));
		}
		if (__LIB_0__::func_265(&(Global_1359489.f_52)) > 60f)
		{
			if (__LIB_1__::func_198(joaat("CSTAG_PLAYER_AWAY"), 1))
			{
				__LIB_1__::func_449(joaat("CSTAG_PLAYER_AWAY"), 1, 0);
			}
		}
		fVar0 = func_975(__LIB_0__::func_317());
		if (__LIB_0__::func_265(&(Global_1359489.f_52)) > fVar0)
		{
			if (__LIB_0__::func_265(&(Global_1359489.f_52)) < 1920f)
			{
				PLAYER::_0xCB61A63AA53D7D22(PLAYER::GET_PLAYER_INDEX(), 1);
				if (!__LIB_1__::func_198(joaat("CSTAG_LOITERING"), 1))
				{
					__LIB_4__::func_253(joaat("CSTAG_LOITERING"), joaat("CSTP_NEXT_VISIT"), -469960592, 4, 1, 1, 0);
				}
			}
			else
			{
				PLAYER::_0xCB61A63AA53D7D22(PLAYER::GET_PLAYER_INDEX(), 0);
			}
		}
	}
	else if (__LIB_0__::func_75(&(Global_1359489.f_52)))
	{
		if (!__LIB_0__::func_33(&(Global_1359489.f_52)))
		{
			__LIB_2__::func_113(&(Global_1359489.f_52));
		}
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, __LIB_0__::func_559(__LIB_0__::func_61()), true, 0))
		{
			if (!__LIB_0__::func_75(&(Global_1359489.f_55)))
			{
				Global_1357549.f_1485 = 0f;
				__LIB_1__::func_148(&(Global_1359489.f_55));
			}
			if (__LIB_0__::func_265(&(Global_1359489.f_55)) > 20f)
			{
				__LIB_0__::func_37(&(Global_1359489.f_52));
				func_978();
				PLAYER::_0xCB61A63AA53D7D22(PLAYER::GET_PLAYER_INDEX(), 0);
			}
		}
	}
}

void func_342()
{
	int iVar0;
	if (((!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, __LIB_0__::func_559(__LIB_0__::func_61()), true, 0) && !__LIB_2__::func_776()) && !__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1)) && !LAW::_0xF46108C50A22B029())
	{
		if (!__LIB_0__::func_75(&(Global_1359489.f_55)))
		{
			__LIB_1__::func_283(&(Global_1359489.f_55), 0);
			Global_1359489.f_58 = Global_1899515;
			if (__LIB_0__::func_181())
			{
				__LIB_1__::func_446(&(Global_1359489.f_58), 0, 0, 0, 5, 0, 0, 0);
			}
			else
			{
				__LIB_1__::func_446(&(Global_1359489.f_58), 0, 0, 0, 2, 0, 0, 0);
			}
		}
		if (__LIB_0__::func_181())
		{
			iVar0 = 9000;
		}
		else
		{
			iVar0 = 4500;
		}
		if (__LIB_0__::func_265(&(Global_1359489.f_55)) > IntToFloat(iVar0) || (Global_1359489.f_58 != -15 && __LIB_3__::func_77(Global_1359489.f_58)))
		{
			if (!__LIB_1__::func_198(joaat("CSTAG_PLAYER_AWAY"), 1))
			{
				__LIB_4__::func_253(joaat("CSTAG_PLAYER_AWAY"), joaat("CSTP_NEXT_VISIT"), -1235532919, -1, 1, 1, 0);
			}
		}
	}
	else if (Global_1359489.f_31 == 0)
	{
		if (Global_1359489.f_32 == 1)
		{
			Global_1359489.f_32 = 0;
		}
		if (__LIB_0__::func_75(&(Global_1359489.f_55)))
		{
			Global_1357549.f_1485 = __LIB_0__::func_264(&(Global_1359489.f_55));
			__LIB_0__::func_37(&(Global_1359489.f_55));
		}
	}
	else
	{
		Global_1359489.f_31 = 4;
		if (__LIB_0__::func_75(&(Global_1359489.f_55)))
		{
			Global_1357549.f_1485 = __LIB_0__::func_264(&(Global_1359489.f_55));
			Global_1359489.f_58 = -15;
			__LIB_0__::func_37(&(Global_1359489.f_55));
		}
	}
}

void func_343()
{
	if (__LIB_5__::func_831(2))
	{
		if (!__LIB_1__::func_652())
		{
			__LIB_5__::func_833(2);
		}
	}
	else if (__LIB_1__::func_652())
	{
		__LIB_1__::func_579(2);
		func_980();
	}
}

bool func_344()
{
	if (Global_1945938.f_865 & 2 != 0)
	{
		return false;
	}
	if (Global_16)
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!__LIB_16__::func_10(255))
		{
			return false;
		}
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return false;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return false;
		}
		if (Global_1935630.f_12)
		{
			return false;
		}
	}
	return true;
}

void func_345()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	iVar0 = 0;
	while (iVar0 < Global_1945938)
	{
		fVar1 = 0f;
		vVar2 = { 0f, 0f, 0f };
		if (__LIB_0__::func_721(iVar0))
		{
			if (func_983(iVar0, &fVar1, &vVar2))
			{
				__LIB_1__::func_29(iVar0);
			}
		}
		iVar0++;
	}
}

void func_346()
{
	switch (Global_1357549)
	{
		case 0:
			if (__LIB_4__::func_635(1))
			{
				if ((!Global_1879534 && func_985()) && !STREAMING::_0xCF45DF50C7775F2A())
				{
					MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
					func_986();
					func_987();
					func_988(__LIB_0__::func_317(), 0, 0);
					func_989();
					Global_1357549.f_1 = 0;
					Global_1357549 = 1;
				}
			}
			break;
		case 1:
			if (!STREAMING::_0xCF45DF50C7775F2A())
			{
				if (Global_1357549.f_1 != __LIB_0__::func_317())
				{
					func_988(Global_1357549.f_1, 0, 0);
				}
				if (Global_1357549.f_1 == 8)
				{
					Global_1357549 = 2;
				}
				else
				{
					Global_1357549.f_1++;
				}
			}
			break;
		case 2:
			__LIB_0__::func_698(1);
			Global_1357549.f_1 = -1;
			Global_1357549 = 0;
			break;
	}
	func_990();
}

void func_347()
{
	if (!__LIB_6__::func_218(__LIB_0__::func_317()))
	{
		return;
	}
	if (__LIB_3__::func_107())
	{
		return;
	}
	if (Global_40.f_4283.f_331 == -15)
	{
		func_993(&(Global_40.f_4283.f_331));
	}
	if (__LIB_5__::func_771(Global_40.f_4283.f_331) && __LIB_3__::func_77(Global_40.f_4283.f_331))
	{
		func_995();
		func_993(&(Global_40.f_4283.f_331));
	}
}

void func_348()
{
	if (Global_40.f_4283.f_329 == -15)
	{
		func_996(&(Global_40.f_4283.f_329));
	}
	if (__LIB_5__::func_771(Global_40.f_4283.f_329) && __LIB_3__::func_77(Global_40.f_4283.f_329))
	{
		func_997();
		func_996(&(Global_40.f_4283.f_329));
	}
}

void func_350()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1327490.f_89.f_1, false))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1327490.f_89.f_1, 1);
		Global_1327490.f_89.f_1 = 0;
	}
}

bool func_353(int iParam0)
{
	Global_1327490.f_89 = iParam0;
	func_1002(iParam0, 1);
	return true;
}

int func_354()
{
	vector3 vVar0;
	int iVar6;
	int iVar7;
	vVar0.f_2 = 3;
	iVar6 = Global_1327490.f_89;
	if (__LIB_10__::func_619(iVar6))
	{
		switch (Global_1327490[iVar6 /*11*/].f_1)
		{
			case 1:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1327490[iVar6 /*11*/].f_5)))
				{
					SCRIPTS::REQUEST_SCRIPT(&(Global_1327490[iVar6 /*11*/].f_5));
					func_1002(iVar6, 2);
				}
				break;
			case 2:
				if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1327490[iVar6 /*11*/].f_5)))
				{
					vVar0.x = iVar6;
					if (func_1003(iVar6, 128))
					{
						vVar0.f_2[0] = Global_1327490[iVar6 /*11*/].f_10;
					}
					iVar7 = 1024;
					if (func_1004(iVar6, 2))
					{
						Global_1327490.f_89.f_1 = SCRIPTS::START_NEW_SCRIPT(&(Global_1327490[iVar6 /*11*/].f_5), 1024);
					}
					else
					{
						Global_1327490.f_89.f_1 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(Global_1327490[iVar6 /*11*/].f_5), &vVar0, 6, iVar7);
					}
					SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1327490[iVar6 /*11*/].f_5));
					if (iVar6 == Global_1327490.f_91)
					{
						Global_1327490.f_91 = -1;
					}
					func_1002(iVar6, 3);
				}
				break;
			case 3:
				if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1327490.f_89.f_1, false))
				{
					Global_1327490.f_89 = -1;
					func_1002(iVar6, 0);
				}
				break;
			case 0:
				break;
		}
	}
	return 1;
}

bool func_355()
{
	if (__LIB_5__::func_452() + Global_1327490.f_92) > MISC::GET_GAME_TIMER()
	{
		return false;
	}
	else
	{
		Global_1327490.f_92 = 0;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (MISC::GET_GAME_TIMER() < Global_1327490.f_96)
	{
		return false;
	}
	return true;
}

void func_356()
{
	int iVar0;
	if (!func_1006())
	{
		return;
	}
	iVar0 = func_1007();
	if (!__LIB_10__::func_619(iVar0))
	{
		return;
	}
	if (!func_353(iVar0))
	{
		return;
	}
}

bool func_357()
{
	if (!func_1008(1))
	{
		return false;
	}
	if (Global_1425351.f_18 != __LIB_0__::func_12())
	{
		__LIB_17__::func_569();
		Global_1425351.f_18 = -1;
		return false;
	}
	return true;
}

void func_358()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	bVar0 = false;
	iVar1 = func_1009();
	if (iVar1 == 0)
	{
		return;
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1425351.f_19, false))
	{
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar1);
		if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar1))
		{
			Global_1425351.f_19 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &uVar2, 10, 1024);
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar1);
	}
}

void func_360()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	if (Global_1914296.f_21 == 0)
	{
		return;
	}
	if (Global_1935689.f_1 || Global_1914319.f_17369)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_1914296[iVar1 /*5*/] != 0)
		{
			iVar2 = __LIB_0__::func_776(Global_1914296[iVar1 /*5*/]);
			if (Global_1914296[iVar1 /*5*/].f_1 > 0)
			{
				if (Global_1914296[iVar1 /*5*/].f_1 > 1)
				{
					__LIB_16__::func_256(MISC::_CREATE_VAR_STRING(2, "ITEM_GET_MULT", iVar2, Global_1914296[iVar1 /*5*/].f_1), -2, 0, 0, 0, 1);
				}
				else
				{
					__LIB_16__::func_256(MISC::_CREATE_VAR_STRING(10, "ITEM_GET", MISC::_CREATE_VAR_STRING(0, iVar2)), -2, 0, 0, 0, 1);
				}
				if (!bVar0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("ITEM_TICKER_GENERIC", "HUD_REWARD_SOUNDSET", true, 0);
					bVar0 = true;
				}
			}
			else
			{
				if (Global_1914296[iVar1 /*5*/].f_3)
				{
					StringCopy(&cVar3, "ITEM_SELL", 32);
				}
				else if (Global_1914296[iVar1 /*5*/].f_4)
				{
					StringCopy(&cVar3, "ITEM_GIVEN", 32);
				}
				else if (__LIB_0__::func_774(Global_1914296[iVar1 /*5*/], 2097152))
				{
					StringCopy(&cVar3, __LIB_0__::func_196(Global_1914296[iVar1 /*5*/].f_2, "ITEM_READ", "ITEM_LOST"), 32);
				}
				else
				{
					StringCopy(&cVar3, __LIB_0__::func_196(Global_1914296[iVar1 /*5*/].f_2, "ITEM_USED", "ITEM_LOST"), 32);
				}
				if (Global_1914296[iVar1 /*5*/].f_1 < -1)
				{
					StringConCat(&cVar3, "_MULT", 32);
					__LIB_16__::func_256(MISC::_CREATE_VAR_STRING(10, &cVar3, MISC::_CREATE_VAR_STRING(0, iVar2), MISC::ABSI(Global_1914296[iVar1 /*5*/].f_1)), -2, 0, 0, 0, 1);
				}
				else
				{
					__LIB_16__::func_256(MISC::_CREATE_VAR_STRING(10, &cVar3, MISC::_CREATE_VAR_STRING(0, iVar2)), -2, 0, 0, 0, 1);
				}
			}
			Global_1914296[iVar1 /*5*/] = 0;
			Global_1914296[iVar1 /*5*/].f_1 = 0;
			Global_1914296[iVar1 /*5*/].f_2 = 0;
			Global_1914296.f_21 = (Global_1914296.f_21 - 1);
			return;
		}
		iVar1++;
	}
}

void func_361()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575.f_4)
	{
		return;
	}
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return;
	}
	else if ((__LIB_0__::func_296(0, 0, 1) || __LIB_0__::func_383()) || __LIB_1__::func_195())
	{
		return;
	}
	iVar0 = __LIB_1__::func_194();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1014(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_5__::func_785(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_5__::func_785(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		__LIB_1__::func_103(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		__LIB_0__::func_703(0, -1);
	}
	if (iVar2 > 0)
	{
		__LIB_8__::func_966("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_385(1, 0);
	Global_1956575.f_4 = 1;
}

void func_379()
{
	func_1025(0, 4);
	func_1025(2, 3);
	func_1025(3, 2);
	func_1025(1, 2);
}

void func_380()
{
	var uVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	if (Global_1393237.f_208)
	{
		if ((Global_1935630.f_12 || __LIB_0__::func_296(0, 0, 1)) || __LIB_0__::func_73(1))
		{
			Global_1393237.f_208 = !Global_1393237.f_208;
			return;
		}
		iVar1 = func_1026(__LIB_1__::func_898(), &(Global_1393237.f_205));
		if (func_1027(iVar1) > 0)
		{
			func_1028(iVar1, &uVar0);
			if (Global_1393237.f_204 >= func_1027(iVar1))
			{
				Global_1393237.f_204 = 0;
				Global_1393237.f_205++;
			}
			Stack.Push(Global_1393237.f_204);
			Call_Loc(uVar0);
			vVar3 = { StackVal, StackVal, StackVal };
			if ((func_1029(iVar1, Global_1393237.f_204) && !__LIB_5__::func_731(vVar3)) && !__LIB_5__::func_667(vVar3))
			{
				fVar6 = __LIB_0__::func_62(Global_36, vVar3);
				if (fVar6 > 562500f && fVar6 < 2250000f)
				{
					bVar2 = false;
					iVar7 = func_1033(vVar3, &bVar2, 0);
					if (bVar2)
					{
						if (__LIB_2__::func_117(8192))
						{
							iVar8 = (2 - 1);
						}
						else
						{
							iVar8 = 2;
						}
						if (iVar7 != -1 && iVar7 < iVar8)
						{
							if (__LIB_17__::func_931(0, vVar3, -1, -1))
							{
								if ((__LIB_3__::func_254(vVar3, Global_35) && !__LIB_1__::func_989(vVar3, 0, 0, 0)) && !func_1037(vVar3))
								{
									__LIB_3__::func_532(iVar7, 128, 0);
									Global_1393237.f_11[iVar7 /*30*/].f_3 = { vVar3 };
									Global_1393237.f_11[iVar7 /*30*/].f_2 = 1;
									Global_1393237.f_11[iVar7 /*30*/].f_11 = -10;
									iVar9 = __LIB_0__::func_23();
									__LIB_4__::func_710(&iVar9, 0, 0, 20, 0, 0, 0);
									Global_1393237.f_11[iVar7 /*30*/] = iVar9;
									Global_1393237.f_11[iVar7 /*30*/].f_1 = MISC::GET_GAME_TIMER();
									__LIB_5__::func_740(vVar3);
									Global_1393237.f_11[iVar7 /*30*/].f_21 = __LIB_1__::func_994(vVar3, __LIB_5__::func_737(vVar3, -1), "DIST_CAMP", 1, 0, 1, 0, -1082130432 /* Float: -1f */);
								}
							}
						}
					}
				}
			}
		}
		Global_1393237.f_204++;
	}
	else
	{
		func_1042();
		iVar10 = Global_1393237.f_206;
		bVar11 = false;
		bVar12 = false;
		if (func_1043(iVar10))
		{
			if (!__LIB_5__::func_733(iVar10, 65536))
			{
				bVar12 = true;
			}
			bVar11 = true;
		}
		if (bVar11)
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iVar10 /*30*/].f_22))
			{
				func_1045(iVar10);
			}
		}
		else
		{
			func_1046(iVar10);
		}
		if (bVar12)
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iVar10 /*30*/].f_23))
			{
				func_1047(iVar10);
			}
		}
		else
		{
			func_1048(iVar10);
		}
		Global_1393237.f_206++;
		if (Global_1393237.f_206 > 5)
		{
			Global_1393237.f_206 = 0;
		}
	}
	Global_1393237.f_208 = !Global_1393237.f_208;
}

void func_381()
{
	if (Global_1357522.f_10[0] || Global_1357522.f_10[1])
	{
		if (!HUD::_TEXT_DATABASE_HAS_LOADED("CAMP"))
		{
			HUD::_TEXT_DATABASE_REQUEST("CAMP");
		}
		Global_1357522.f_26 = (MISC::GET_GAME_TIMER() - Global_1357522.f_25);
	}
	if (Global_1357522.f_10[0])
	{
		func_1049(0);
	}
	else
	{
		func_1050(0);
		func_1051(0);
		MAP::REMOVE_BLIP(&(Global_1357522.f_16[0]));
	}
	if (Global_1357522.f_10[1])
	{
		func_1049(1);
	}
	else
	{
		func_1050(1);
		func_1051(1);
		MAP::REMOVE_BLIP(&(Global_1357522.f_16[1]));
	}
	if (((__LIB_0__::func_296(0, 1, 1) && !__LIB_6__::func_24(1)) || Global_1357522.f_26 >= 300000) || __LIB_0__::func_27(Global_1396257[25 /*638*/].f_626, 32768))
	{
		Global_1357522.f_10[0] = 0;
		Global_1357522.f_10[1] = 0;
		if (!(__LIB_0__::func_296(0, 1, 1) && !__LIB_6__::func_24(1)))
		{
			if (Global_1357522.f_10[0])
			{
				__LIB_8__::func_966("CAMP_FIRE_FULL_OUT", 10000, 0, 0, 0, 1);
			}
			if (Global_1357522.f_10[1])
			{
				__LIB_8__::func_966("CAMP_FIRE_OUT", 10000, 0, 0, 0, 1);
			}
		}
	}
}

void func_383()
{
	if (!__LIB_6__::func_666(25))
	{
		return;
	}
	func_386(25);
}

bool func_384()
{
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_35) || __LIB_0__::func_255(Global_35, 0)) || (__LIB_1__::func_376(Global_35) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))) || (PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SLEEP_BED")) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))) || !__LIB_10__::func_697())
	{
		return true;
	}
	return false;
}

void func_386(int iParam0)
{
	if (__LIB_16__::func_374(iParam0))
	{
		func_1058(13);
		return;
	}
	__LIB_10__::func_685(iParam0);
	__LIB_10__::func_633(iParam0, 5);
}

void func_387()
{
	Global_1935436.f_4 = (MISC::GET_GAME_TIMER() + 90000);
}

bool func_389(bool bParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	iVar0 = 1;
	*bParam0 = 0;
	*uParam1 = 1;
	if (__LIB_2__::func_140(0))
	{
		iVar0 = 0;
	}
	if (!bParam2)
	{
		if (__LIB_0__::func_704())
		{
			iVar0 = 0;
		}
	}
	if ((__LIB_2__::func_776() || __LIB_2__::func_84()) || __LIB_0__::func_65(&Global_1393447, 16))
	{
		*bParam0 = 1;
		*uParam1 = 0;
		iVar0 = 0;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!bParam2)
		{
			if (!PED::IS_PED_IN_ANY_BOAT(Global_35))
			{
				Global_1935630.f_55 = MISC::GET_GAME_TIMER();
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (TASK::IS_PED_SPRINTING(iVar1) || __LIB_12__::func_202(iVar1))
			{
				iVar0 = 0;
			}
		}
		if (PED::IS_PED_FALLING(iVar1))
		{
			iVar0 = 0;
			*bParam0 = 1;
			*uParam1 = 0;
		}
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		iVar0 = 0;
		*bParam0 = 1;
		*uParam1 = 0;
	}
	if (!bParam2)
	{
		if (Global_1935630.f_55 + 30000 > MISC::GET_GAME_TIMER())
		{
			iVar0 = 0;
		}
	}
	if (__LIB_1__::func_149(1) > 0)
	{
		iVar0 = 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &uVar2, 1, 1))
	{
		iVar0 = 0;
		*uParam1 = 0;
	}
	if (!bParam2)
	{
		if (!__LIB_6__::func_688(__LIB_2__::func_954()))
		{
			iVar0 = 0;
		}
		if (__LIB_2__::func_117(128))
		{
			iVar0 = 0;
		}
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		*bParam0 = 1;
		iVar0 = 0;
		*uParam1 = 0;
	}
	if (Global_1935630.f_28 + 30000 > MISC::GET_GAME_TIMER())
	{
		*bParam0 = 1;
		iVar0 = 0;
		*uParam1 = 0;
	}
	if (PED::_0x285D36C5C72B0569(Global_35) + 30000f) > IntToFloat(MISC::GET_GAME_TIMER())
	{
		*bParam0 = 1;
		iVar0 = 0;
		*uParam1 = 0;
	}
	if (bParam2)
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
		{
			*bParam0 = 1;
			iVar0 = 0;
			*uParam1 = 1;
		}
	}
	if (!bParam2)
	{
		if (__LIB_0__::func_12() != -1)
		{
			if (__LIB_1__::func_120(__LIB_0__::func_12()))
			{
				*bParam0 = 1;
			}
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_393()
{
	float fVar0;
	fVar0 = ((Global_1935436.f_12.f_1 * 200f) - 100f);
	__LIB_1__::func_634(fVar0);
	if (!Global_1935436.f_12.f_4)
	{
		if (Global_1935436 == 2)
		{
			Global_1935436.f_12.f_4 = 1;
			if (__LIB_0__::func_113())
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR_WASTED");
			}
			else
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER_WASTED");
			}
		}
	}
	else if (Global_1935436 != 2)
	{
		Global_1935436.f_12.f_4 = 0;
		if (__LIB_0__::func_113())
		{
			AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
		}
		else
		{
			AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
		}
	}
}

void func_396()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		__LIB_1__::func_716(1);
		__LIB_16__::func_241();
	}
	__LIB_18__::func_920();
	switch (Global_1935436.f_18.f_11)
	{
		case 0:
			__LIB_16__::func_242(1);
			Global_1935436.f_18.f_4 = 0;
			break;
		case 1:
			if (!Global_1935436.f_18.f_4)
			{
				STREAMING::REQUEST_ANIM_DICT(__LIB_16__::func_243());
				Global_1935436.f_18.f_4 = 1;
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED(__LIB_16__::func_243()))
			{
				__LIB_16__::func_242(2);
			}
			break;
		case 2:
			GRAPHICS::ANIMPOSTFX_PLAY("PlayerDrunk01_PassOut");
			Global_1935436.f_18.f_7 = MISC::GET_GAME_TIMER();
			__LIB_16__::func_242(3);
			break;
		case 3:
			if (MISC::GET_GAME_TIMER() >= Global_1935436.f_18.f_7 + 3400)
			{
				if (TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35))
				{
					bVar0 = true;
				}
				if (__LIB_1__::func_235(Global_35))
				{
					bVar0 = false;
				}
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) && TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("WORLD_PLAYER_DYNAMIC_KNEEL"))
				{
					bVar0 = false;
				}
				if (bVar0 && !Global_1935436.f_18)
				{
					TASK::TASK_PLAY_ANIM(Global_35, __LIB_16__::func_243(), __LIB_16__::func_244(), 4f, -2f, 5000, 0, 0f, false, 0, false, 0, false);
					Global_1935436.f_18 = 1;
				}
				if (Global_1935436.f_18.f_4)
				{
					STREAMING::REMOVE_ANIM_DICT(__LIB_16__::func_243());
					Global_1935436.f_18.f_4 = 0;
				}
				__LIB_16__::func_242(4);
			}
			break;
		case 4:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (MISC::GET_GAME_TIMER() >= Global_1935436.f_18.f_7 + 5500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Global_1935436.f_18.f_6, true, false))
				{
					bVar4 = __LIB_3__::func_107();
					iVar1 = __LIB_0__::func_23();
					__LIB_1__::func_446(&iVar1, 0, 0, 8, 0, 0, 0, 0);
					__LIB_3__::func_98(iVar1);
					if (bVar4)
					{
						__LIB_12__::func_581(1, 0, 0);
					}
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
					ENTITY::_0x9587913B9E772D29(Global_35, 0);
					Global_1935436.f_18.f_8 = { __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Global_1935436.f_18.f_8, &uVar2, false))
					{
						Global_1935436.f_18.f_8 = { Global_1935436.f_18.f_8, Global_1935436.f_18.f_8.f_1, uVar2 };
					}
					Global_1935436.f_18.f_2 = 0;
					Global_1935436.f_18.f_5 = 0;
					__LIB_16__::func_242(5);
				}
			}
			break;
		case 5:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (Global_43891)
			{
				Global_1935436.f_18.f_12.f_3 = { 1421.257f, -7328.976f, 80.5118f };
				Global_1935436.f_18.f_12.f_6 = { 0f, 0f, 240f };
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Global_1935436.f_18.f_6, Global_1935436.f_18.f_12.f_3, Global_1935436.f_18.f_12.f_6, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1935436.f_18.f_6, "player_zero", Global_35, 0);
				__LIB_16__::func_242(6);
			}
			else if (__LIB_14__::func_203(Global_1935436.f_18.f_8, &(Global_1935436.f_18.f_12), &(Global_1935436.f_18.f_2), 1, 1, 1127481344 /* Float: 180f */, 1101004800 /* Float: 20f */, -0.01f, 40f, 0))
			{
				if (!func_1082(Global_1935436.f_18.f_8, 1103626240 /* Float: 25f */) && !__LIB_12__::func_186(Global_1935436.f_18.f_8, 1103626240 /* Float: 25f */))
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Global_1935436.f_18.f_6, Global_1935436.f_18.f_12.f_3, Global_1935436.f_18.f_12.f_6, 2);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1935436.f_18.f_6, "player_zero", Global_35, 0);
					__LIB_16__::func_242(6);
				}
				else
				{
					__LIB_16__::func_242(8);
				}
			}
			else if (Global_1935436.f_18.f_2)
			{
				if (Global_1935436.f_18.f_5 < 3)
				{
					Global_1935436.f_18.f_2 = 0;
					Global_1935436.f_18.f_5++;
					__LIB_14__::func_204(&(Global_1935436.f_18.f_12), 1, 0);
				}
				else
				{
					__LIB_16__::func_242(8);
				}
			}
			break;
		case 6:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1935436.f_18.f_6, false))
			{
				if (!__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
				{
					CAM::DO_SCREEN_FADE_IN(0);
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerWakeUpDrunk");
					__LIB_1__::func_716(1);
					ANIMSCENE::START_ANIM_SCENE(Global_1935436.f_18.f_6);
					__LIB_16__::func_242(7);
				}
				else
				{
					__LIB_1__::func_716(1);
					__LIB_16__::func_241();
					ANIMSCENE::RESET_ANIM_SCENE(Global_1935436.f_18.f_6, 0);
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1935436.f_18.f_6))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Global_1935436.f_18.f_6);
					}
					__LIB_14__::func_204(&(Global_1935436.f_18.f_12), 1, 0);
					Global_1934266.f_59 = 1;
					__LIB_5__::func_116();
					__LIB_0__::func_320(2);
				}
			}
			break;
		case 7:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (ANIMSCENE::_0xF94692EB9DC15D74(Global_1935436.f_18.f_6, 0))
			{
				__LIB_16__::func_242(8);
			}
			break;
		case 8:
			if (__LIB_3__::func_107())
			{
				iVar3 = __LIB_16__::func_426(__LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()), 15f, -1);
				iVar5 = __LIB_0__::func_271(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !ENTITY::IS_ENTITY_DEAD(iVar5))
				{
					__LIB_2__::func_122(iVar5, "POST_PASSOUT_COMMENT", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
				}
			}
			__LIB_14__::func_204(&(Global_1935436.f_18.f_12), 1, 0);
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(3000);
			}
			__LIB_1__::func_716(1);
			__LIB_16__::func_241();
			ANIMSCENE::RESET_ANIM_SCENE(Global_1935436.f_18.f_6, 0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1935436.f_18.f_6))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Global_1935436.f_18.f_6);
			}
			break;
	}
}

void func_397(bool bParam0)
{
	Global_1934765.f_20 = 0;
	Global_1934765 = 0;
	Global_1934765.f_287 = 0;
	while (!func_405(1, bParam0))
	{
	}
	__LIB_10__::func_735();
	Global_1934765 = 0;
}

void func_403()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = __LIB_4__::func_132(iVar0);
		if (iVar1 == -1)
		{
			return;
		}
		if (func_1099(iVar1))
		{
			if (func_1100(iVar1))
			{
				__LIB_0__::func_804(iVar1);
				__LIB_17__::func_433(iVar0);
			}
		}
		iVar0++;
	}
}

int func_404()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887.f_12 == -1)
		{
			if (Global_1934765.f_39[iVar0] != Global_40.f_283[iVar0])
			{
				return 1;
			}
		}
		else if (Global_1934765.f_39[iVar0] != Global_1058888.f_40567[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_405(bool bParam0, bool bParam1)
{
	int iVar0;
	char cVar1[64];
	if (!bParam0)
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			return false;
		}
		if (__LIB_17__::func_446())
		{
			return false;
		}
		if (!Global_1934765.f_274 && !__LIB_0__::func_13(32768))
		{
			if (Global_1879534.f_1 || Global_1879534)
			{
				return false;
			}
		}
	}
	switch (Global_1934765)
	{
		case 0:
			__LIB_0__::func_401(666617953);
			__LIB_0__::func_401(1733948592);
			__LIB_0__::func_401(1700234797);
			__LIB_0__::func_401(1305074360);
			__LIB_0__::func_401(-436566493);
			__LIB_0__::func_401(-1995815064);
			__LIB_0__::func_401(-483649675);
			__LIB_0__::func_401(212587871);
			__LIB_0__::func_401(joaat("TAX_SHUTTERS_CLOSED"));
			__LIB_0__::func_401(1190076410);
			__LIB_0__::func_401(350100475);
			__LIB_0__::func_401(2033090463);
			__LIB_0__::func_401(-688011628);
			__LIB_0__::func_401(-787042507);
			__LIB_0__::func_401(1688216398);
			__LIB_0__::func_401(669655585);
			__LIB_0__::func_401(-895099271);
			__LIB_0__::func_401(556610581);
			__LIB_0__::func_401(joaat("ARM_05_CHOLERA"));
			if (__LIB_0__::func_313())
			{
				__LIB_0__::func_401(-693659956);
				__LIB_0__::func_401(joaat("SPPACK_A1SUP_OBELISK"));
				__LIB_0__::func_401(-400238535);
				__LIB_0__::func_401(1416512144);
			}
			__LIB_0__::func_401(joaat("SPPACK_A4SUP_AQUADUCT"));
			__LIB_0__::func_401(-846479900);
			__LIB_0__::func_401(-866774384);
			if (!Global_1934765.f_288)
			{
				__LIB_4__::func_495(229);
			}
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1174.544f, -4.74933f, 38f, -1163.424f, -13.43965f, 42f, 6, 1);
			func_1103();
			__LIB_18__::func_263();
			__LIB_10__::func_738();
			return false;
		case 1:
			__LIB_17__::func_453();
			__LIB_10__::func_738();
			return false;
		case 2:
			func_1107();
			__LIB_10__::func_738();
			return false;
		case 3:
			break;
	}
	if (!__LIB_0__::func_898(514932331))
	{
		__LIB_0__::func_401(1892122519);
	}
	if (__LIB_0__::func_898(-1414537028))
	{
		if (!__LIB_0__::func_27(Global_1934765.f_20, 1))
		{
			__LIB_1__::func_883(5, 1);
			__LIB_1__::func_883(7, 1);
			__LIB_1__::func_883(6, 1);
			__LIB_1__::func_883(1, 1);
			__LIB_0__::func_7(&(Global_1934765.f_20), 1);
		}
	}
	else if (__LIB_0__::func_27(Global_1934765.f_20, 1))
	{
		__LIB_1__::func_883(5, 2);
		__LIB_1__::func_883(1, 2);
		__LIB_0__::func_8(&(Global_1934765.f_20), 1);
	}
	if (__LIB_0__::func_898(269047710))
	{
		__LIB_0__::func_400(382484708);
		__LIB_0__::func_401(-910880980);
	}
	else
	{
		__LIB_0__::func_400(-910880980);
		__LIB_0__::func_401(382484708);
	}
	if (__LIB_0__::func_898(-748969569))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", false);
	}
	if (__LIB_0__::func_898(618699440))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", false);
	}
	if (__LIB_0__::func_898(-1062490780))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", false);
	}
	if (__LIB_0__::func_898(-683458244))
	{
		__LIB_4__::func_524(203);
		__LIB_4__::func_495(204);
	}
	else
	{
		__LIB_4__::func_524(204);
		__LIB_4__::func_495(203);
	}
	func_1111(273461605, 79, 2, 4096);
	func_1111(-868076593, 9, 32, 4096);
	func_1111(1205826474, 36, 64, 4096);
	if (__LIB_0__::func_898(373691918))
	{
		if (WATER::_GET_WORLD_WATER_TYPE() != 1)
		{
			WATER::_SET_WORLD_WATER_TYPE(1);
		}
		if (!Global_43891)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(true);
			MAP::_0xA657EC9DBC6CC900(joaat("GUARMA"));
		}
		MAP::SET_MINIMAP_HIDE_FOW(true);
		MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(false, 0);
		Global_43891 = 1;
	}
	else
	{
		if (__LIB_0__::func_898(657241756))
		{
			if (WATER::_GET_WORLD_WATER_TYPE() != 1)
			{
				WATER::_SET_WORLD_WATER_TYPE(1);
			}
		}
		else if (WATER::_GET_WORLD_WATER_TYPE() != 0)
		{
			WATER::_SET_WORLD_WATER_TYPE(0);
		}
		if (Global_43891)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
			MAP::_0xA657EC9DBC6CC900(joaat("WORLD"));
		}
		MAP::SET_MINIMAP_HIDE_FOW(false);
		if (!__LIB_0__::func_13(128))
		{
			MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(true, 0);
		}
		Global_43891 = 0;
	}
	if (__LIB_0__::func_898(-2058120606))
	{
		if (__LIB_0__::func_2() == -1)
		{
		}
	}
	else if (__LIB_0__::func_2() == -1)
	{
	}
	if (__LIB_0__::func_898(311708813))
	{
		__LIB_0__::func_401(-1786365097);
		__LIB_4__::func_495(178);
	}
	else
	{
		__LIB_0__::func_400(-1786365097);
		__LIB_4__::func_524(178);
	}
	if (!__LIB_0__::func_898(1399676951))
	{
		__LIB_0__::func_400(1934919499);
		__LIB_0__::func_400(993595204);
		__LIB_0__::func_400(-515396642);
		__LIB_0__::func_400(1291083725);
		__LIB_0__::func_400(joaat("DES_STR_JAIL"));
		if (__LIB_0__::func_898(-1524512402))
		{
			__LIB_0__::func_401(joaat("DES_STR_JAIL"));
			__LIB_4__::func_495(193);
		}
		else
		{
			iVar0 = __LIB_0__::func_895(__LIB_3__::func_918(11));
			if (__LIB_0__::func_27(iVar0, 1))
			{
				__LIB_0__::func_401(joaat("DES_STR_JAIL"));
				__LIB_4__::func_495(193);
			}
			else
			{
				__LIB_4__::func_524(193);
				if (__LIB_0__::func_27(iVar0, 2))
				{
					__LIB_0__::func_401(1291083725);
				}
				else if (__LIB_0__::func_27(iVar0, 4))
				{
					__LIB_0__::func_401(993595204);
				}
			}
		}
	}
	if (__LIB_0__::func_898(1497516462))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(68, 16);
			__LIB_0__::func_121(557, 32);
			__LIB_0__::func_121(563, 32);
			__LIB_0__::func_121(560, 32);
			__LIB_0__::func_121(561, 32);
			__LIB_0__::func_121(562, 32);
			__LIB_0__::func_123(565, 32);
			__LIB_10__::func_823(565, 0);
			__LIB_0__::func_123(564, 32);
			__LIB_10__::func_823(564, 0);
			__LIB_0__::func_123(554, 32);
			__LIB_10__::func_823(554, 0);
			__LIB_0__::func_123(555, 32);
			__LIB_10__::func_823(555, 0);
			__LIB_0__::func_123(556, 32);
			__LIB_10__::func_823(556, 0);
		}
		__LIB_4__::func_524(199);
		__LIB_4__::func_495(198);
	}
	else if (__LIB_0__::func_898(2016141805))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(68, 16);
			__LIB_0__::func_121(557, 32);
			__LIB_0__::func_121(563, 32);
			__LIB_0__::func_123(560, 32);
			__LIB_10__::func_823(560, 0);
			__LIB_0__::func_123(561, 32);
			__LIB_10__::func_823(561, 0);
			__LIB_0__::func_123(562, 32);
			__LIB_10__::func_823(562, 0);
			__LIB_0__::func_123(554, 32);
			__LIB_10__::func_823(554, 0);
			__LIB_0__::func_123(555, 32);
			__LIB_10__::func_823(555, 0);
			__LIB_0__::func_123(556, 32);
			__LIB_10__::func_823(556, 0);
			__LIB_0__::func_123(565, 32);
			__LIB_10__::func_823(565, 0);
			__LIB_0__::func_123(564, 32);
			__LIB_10__::func_823(564, 0);
		}
		__LIB_4__::func_524(199);
		__LIB_4__::func_524(198);
	}
	else if (__LIB_0__::func_898(1010885152))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_24(68, 16);
			__LIB_10__::func_823(554, 0);
			__LIB_10__::func_823(555, 0);
			__LIB_10__::func_823(556, 0);
			__LIB_10__::func_823(557, 0);
			__LIB_10__::func_823(563, 0);
			__LIB_10__::func_823(560, 0);
			__LIB_10__::func_823(561, 0);
			__LIB_10__::func_823(562, 0);
			__LIB_10__::func_823(565, 0);
			__LIB_10__::func_823(564, 0);
		}
		__LIB_4__::func_524(199);
		__LIB_4__::func_495(198);
	}
	else if (__LIB_0__::func_898(-502324015))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(68, 16);
			__LIB_0__::func_123(554, 32);
			__LIB_0__::func_123(555, 32);
			__LIB_0__::func_123(556, 32);
			__LIB_0__::func_123(557, 32);
			__LIB_0__::func_123(563, 32);
			__LIB_10__::func_823(554, 0);
			__LIB_10__::func_823(555, 0);
			__LIB_10__::func_823(556, 0);
			__LIB_10__::func_823(557, 0);
			__LIB_10__::func_823(563, 0);
			__LIB_0__::func_121(565, 32);
			__LIB_0__::func_121(564, 32);
			__LIB_0__::func_121(560, 32);
			__LIB_0__::func_121(561, 32);
			__LIB_0__::func_121(562, 32);
		}
		__LIB_4__::func_524(198);
		__LIB_4__::func_495(199);
	}
	if (__LIB_0__::func_898(440043364))
	{
		__LIB_0__::func_400(376665102);
	}
	else
	{
		__LIB_0__::func_401(376665102);
	}
	if (__LIB_0__::func_898(-1425209566))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_121(800, 32);
		}
	}
	else if (__LIB_0__::func_2() == -1)
	{
		__LIB_0__::func_123(800, 32);
		__LIB_10__::func_823(800, 0);
	}
	__LIB_10__::func_797();
	if (__LIB_0__::func_898(0))
	{
		__LIB_0__::func_401(1149195254);
		__LIB_0__::func_401(2016081133);
		__LIB_0__::func_401(363257921);
		__LIB_0__::func_401(58066174);
		__LIB_0__::func_401(-1521525254);
		__LIB_0__::func_401(-761186147);
		__LIB_0__::func_401(-1872939092);
		__LIB_0__::func_401(-964156415);
		__LIB_17__::func_435(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", false, true);
		__LIB_3__::func_124(-434746250, 1);
		if (__LIB_0__::func_898(-699277634))
		{
			__LIB_0__::func_401(-2137633069);
			__LIB_4__::func_495(121);
			__LIB_4__::func_495(123);
			__LIB_4__::func_495(125);
			if (__LIB_0__::func_2() == -1)
			{
				__LIB_0__::func_24(93, 16);
				__LIB_8__::func_922(93);
			}
			if (!PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1) && !bParam1)
			{
				Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, 0, 15);
			}
		}
		else
		{
			__LIB_0__::func_401(1944013855);
			__LIB_4__::func_495(120);
			__LIB_4__::func_495(122);
			__LIB_4__::func_495(124);
			__LIB_0__::func_25(93, 16);
			if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
				Global_1934765.f_1 = 0;
			}
		}
	}
	else if (__LIB_0__::func_898(473295046))
	{
		__LIB_0__::func_401(-1643869063);
		__LIB_0__::func_401(-1108618313);
		__LIB_0__::func_401(-787678727);
		__LIB_17__::func_435(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		__LIB_3__::func_124(-434746250, 1);
		if (__LIB_0__::func_898(-699277634))
		{
			__LIB_5__::func_441("bra_man_burned_bra3");
		}
		else
		{
			__LIB_5__::func_441("bra_man_burned");
		}
		__LIB_0__::func_25(93, 16);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_121(621, 32);
			__LIB_0__::func_121(622, 32);
			__LIB_0__::func_121(623, 32);
			__LIB_0__::func_121(624, 32);
			__LIB_0__::func_123(909, 32);
			__LIB_10__::func_823(909, 0);
			__LIB_0__::func_123(910, 32);
			__LIB_10__::func_823(910, 0);
			__LIB_0__::func_123(911, 32);
			__LIB_10__::func_823(911, 0);
			__LIB_0__::func_123(912, 32);
			__LIB_10__::func_823(912, 0);
			__LIB_0__::func_123(913, 32);
			__LIB_10__::func_823(913, 0);
			__LIB_0__::func_123(914, 32);
			__LIB_10__::func_823(914, 0);
			__LIB_0__::func_123(617, 32);
			__LIB_10__::func_823(617, 0);
			__LIB_0__::func_123(618, 32);
			__LIB_10__::func_823(618, 0);
			__LIB_0__::func_123(619, 32);
			__LIB_10__::func_823(619, 0);
			__LIB_0__::func_123(620, 32);
			__LIB_10__::func_823(620, 0);
			__LIB_0__::func_123(915, 32);
			__LIB_10__::func_823(915, 0);
			__LIB_0__::func_123(916, 32);
			__LIB_10__::func_823(916, 0);
			__LIB_0__::func_123(917, 32);
			__LIB_10__::func_823(917, 0);
			__LIB_0__::func_123(625, 32);
			__LIB_10__::func_823(625, 0);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
			Global_1934765.f_1 = 0;
		}
	}
	else if (__LIB_0__::func_898(-1738165526))
	{
		__LIB_0__::func_401(-1643869063);
		__LIB_0__::func_401(622597018);
		__LIB_0__::func_401(1649275138);
		__LIB_17__::func_435(1);
		__LIB_5__::func_441("bra_man_endsum");
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, false);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		__LIB_3__::func_123(-434746250, 1);
		__LIB_0__::func_24(93, 16);
		if (!PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1) && !bParam1)
		{
			Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, 0, 15);
		}
	}
	if (!__LIB_0__::func_898(-270094635))
	{
		__LIB_0__::func_401(1355914142);
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			Global_1934765.f_16 = VOLUME::_CREATE_VOLUME_CYLINDER(2846.517f, -1300.918f, 45.457f, 0f, 0f, -42f, 4.584f, 3.041f, 10.079f);
			PATHFIND::_0x19C7567D2F2287D6(Global_1934765.f_16, 7);
		}
	}
	else
	{
		__LIB_0__::func_400(1355914142);
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Global_1934765.f_16);
			VOLUME::_DELETE_VOLUME(Global_1934765.f_16);
		}
	}
	if (__LIB_0__::func_898(-1666278201))
	{
		__LIB_0__::func_400(706203603);
		__LIB_0__::func_401(937192284);
	}
	else
	{
		__LIB_0__::func_400(937192284);
		__LIB_0__::func_401(706203603);
	}
	if (__LIB_0__::func_898(405586984))
	{
		__LIB_0__::func_400(-1052023588);
		__LIB_0__::func_400(-745087561);
		__LIB_5__::func_440("old_nav_wall_hole");
		__LIB_5__::func_440("old_nav_nts3_start");
		__LIB_5__::func_440("old_nav_nts3_end");
		__LIB_0__::func_401(944314155);
		__LIB_5__::func_441("old_nav_wall_fill");
	}
	else if (__LIB_0__::func_898(1509509592))
	{
		__LIB_0__::func_400(-1052023588);
		__LIB_5__::func_440("old_nav_wall_fill");
		__LIB_5__::func_440("old_nav_wall_hole");
		__LIB_5__::func_440("old_nav_nts3_end");
		__LIB_0__::func_401(944314155);
		__LIB_0__::func_401(-745087561);
		__LIB_5__::func_441("old_nav_nts3_start");
	}
	else if (__LIB_0__::func_898(-959357075))
	{
		__LIB_0__::func_400(944314155);
		__LIB_5__::func_440("old_nav_wall_fill");
		__LIB_5__::func_440("old_nav_nts3_start");
		__LIB_5__::func_440("old_nav_wall_hole");
		__LIB_0__::func_401(-1052023588);
		__LIB_0__::func_401(-745087561);
		__LIB_5__::func_441("old_nav_nts3_end");
	}
	else if (__LIB_0__::func_898(-1311865656))
	{
		__LIB_0__::func_400(944314155);
		__LIB_0__::func_400(-745087561);
		__LIB_5__::func_440("old_nav_wall_fill");
		__LIB_5__::func_440("old_nav_nts3_start");
		__LIB_5__::func_440("old_nav_nts3_end");
		__LIB_0__::func_401(-1052023588);
		__LIB_5__::func_441("old_nav_wall_hole");
	}
	if (__LIB_0__::func_898(2091701359))
	{
		__LIB_0__::func_401(joaat("VAN_02_HORSEBOAT"));
	}
	else
	{
		__LIB_0__::func_400(joaat("VAN_02_HORSEBOAT"));
	}
	if (__LIB_0__::func_898(1376646519))
	{
		__LIB_0__::func_400(-920505696);
		__LIB_0__::func_400(281772765);
		__LIB_0__::func_400(-516683274);
		__LIB_4__::func_524(135);
		__LIB_4__::func_524(136);
		__LIB_4__::func_524(137);
		__LIB_4__::func_524(138);
		__LIB_5__::func_440("nav_std_bank_start");
		__LIB_5__::func_440("nav_std_bank_shootout");
		__LIB_5__::func_440("nav_std_bank_dest");
		__LIB_4__::func_495(134);
		__LIB_0__::func_401(1017355491);
		__LIB_0__::func_401(-1004522372);
	}
	else if (__LIB_0__::func_898(931649776))
	{
		__LIB_0__::func_400(-920505696);
		__LIB_0__::func_400(-516683274);
		__LIB_4__::func_524(135);
		__LIB_4__::func_524(136);
		__LIB_4__::func_524(137);
		__LIB_4__::func_524(138);
		__LIB_5__::func_440("nav_std_bank_shootout");
		__LIB_5__::func_440("nav_std_bank_dest");
		__LIB_0__::func_401(-1004522372);
		__LIB_4__::func_495(134);
		__LIB_0__::func_401(1017355491);
		__LIB_0__::func_401(281772765);
		__LIB_5__::func_441("nav_std_bank_start");
	}
	else if (__LIB_0__::func_898(-434590080))
	{
		__LIB_0__::func_400(-920505696);
		__LIB_0__::func_400(-516683274);
		__LIB_4__::func_524(134);
		__LIB_4__::func_524(137);
		__LIB_5__::func_440("nav_std_bank_start");
		__LIB_5__::func_440("nav_std_bank_dest");
		__LIB_0__::func_401(-1004522372);
		__LIB_4__::func_495(135);
		__LIB_4__::func_495(136);
		__LIB_4__::func_495(138);
		__LIB_0__::func_401(1017355491);
		__LIB_0__::func_401(281772765);
		__LIB_5__::func_441("nav_std_bank_shootout");
	}
	else if (__LIB_0__::func_898(1743048395))
	{
		__LIB_0__::func_400(1017355491);
		__LIB_0__::func_400(281772765);
		__LIB_0__::func_400(-1004522372);
		__LIB_4__::func_524(134);
		__LIB_4__::func_524(135);
		__LIB_4__::func_495(137);
		__LIB_4__::func_495(138);
		__LIB_5__::func_440("nav_std_bank_start");
		__LIB_5__::func_440("nav_std_bank_shootout");
		__LIB_0__::func_401(-516683274);
		__LIB_0__::func_401(-920505696);
		__LIB_5__::func_441("nav_std_bank_dest");
	}
	else if (__LIB_0__::func_898(449774763))
	{
		__LIB_0__::func_400(1017355491);
		__LIB_0__::func_400(-516683274);
		__LIB_0__::func_400(281772765);
		__LIB_4__::func_524(134);
		__LIB_4__::func_524(135);
		__LIB_4__::func_524(136);
		__LIB_4__::func_524(138);
		__LIB_0__::func_401(-1004522372);
		__LIB_4__::func_495(137);
	}
	if (__LIB_0__::func_898(-764163380))
	{
		__LIB_4__::func_524(140);
		__LIB_4__::func_495(139);
	}
	else
	{
		__LIB_4__::func_524(139);
		__LIB_4__::func_495(140);
	}
	if (__LIB_0__::func_898(-349064220))
	{
		__LIB_0__::func_401(140744122);
		__LIB_0__::func_401(-1795618779);
		__LIB_5__::func_441("hso_post_caravan");
	}
	else
	{
		__LIB_0__::func_400(140744122);
		__LIB_0__::func_400(-1795618779);
		__LIB_5__::func_440("hso_post_caravan");
	}
	if (__LIB_0__::func_898(1776302352))
	{
		__LIB_0__::func_401(1691578074);
		__LIB_0__::func_401(-1936937394);
		__LIB_5__::func_441("dewclm_post_caravan");
	}
	else
	{
		__LIB_0__::func_400(1691578074);
		__LIB_0__::func_400(-1936937394);
		__LIB_5__::func_440("dewclm_post_caravan");
	}
	if (__LIB_0__::func_898(-523522517))
	{
		__LIB_0__::func_401(-1130111983);
		__LIB_0__::func_401(-1015786727);
	}
	else
	{
		__LIB_0__::func_400(-1130111983);
		__LIB_0__::func_400(-1015786727);
	}
	if (__LIB_0__::func_898(1591451572))
	{
		__LIB_0__::func_401(560821199);
	}
	else
	{
		__LIB_0__::func_400(560821199);
	}
	if (__LIB_0__::func_898(1177464213))
	{
		__LIB_0__::func_400(-313831898);
		__LIB_0__::func_400(634920011);
		__LIB_0__::func_401(1694736240);
		__LIB_0__::func_401(2035758463);
	}
	else
	{
		__LIB_0__::func_400(1694736240);
		__LIB_0__::func_400(2035758463);
		__LIB_0__::func_401(-313831898);
		__LIB_0__::func_401(634920011);
	}
	__LIB_10__::func_686();
	__LIB_10__::func_798();
	if (__LIB_0__::func_898(459290420))
	{
		__LIB_0__::func_401(474287981);
		__LIB_0__::func_401(-338553155);
		__LIB_0__::func_401(-1636879249);
		__LIB_0__::func_401(205214733);
		__LIB_0__::func_400(joaat("WEATHERVOL_CHPT1_SNOWSTORM"));
		__LIB_4__::func_495(186);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		__LIB_0__::func_804(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
		}
	}
	else if (__LIB_0__::func_898(1884271742))
	{
		__LIB_0__::func_401(867231253);
		__LIB_0__::func_401(-323126593);
		__LIB_0__::func_401(-1316886711);
		__LIB_0__::func_401(205214733);
		__LIB_0__::func_400(joaat("WEATHERVOL_CHPT1_SNOWSTORM"));
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
	}
	else if (__LIB_0__::func_898(-2038424081))
	{
		__LIB_0__::func_401(867231253);
		__LIB_0__::func_401(-1670453688);
		__LIB_0__::func_401(-323126593);
		__LIB_0__::func_401(-1316886711);
		__LIB_0__::func_401(205214733);
		__LIB_5__::func_441("col_nav_wint_end");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (__LIB_0__::func_898(753127042))
	{
		__LIB_0__::func_401(1248111234);
		__LIB_0__::func_401(-1670453688);
		__LIB_0__::func_401(-323126593);
		__LIB_0__::func_401(-1316886711);
		__LIB_0__::func_401(205214733);
		__LIB_5__::func_441("col_nav_wint2_post");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (__LIB_0__::func_898(-1187950766))
	{
		__LIB_0__::func_401(474287981);
		__LIB_0__::func_401(-1670453688);
		__LIB_0__::func_401(-1636879249);
		__LIB_0__::func_401(-338553155);
		__LIB_4__::func_495(186);
		__LIB_5__::func_441("col_nav_wint1_cabin_duringfire");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (__LIB_0__::func_898(356365161))
	{
		__LIB_0__::func_401(474287981);
		__LIB_0__::func_401(-1670453688);
		__LIB_0__::func_401(-338553155);
		__LIB_0__::func_401(-1636879249);
		__LIB_5__::func_441("col_nav_wint1_cabin_prefire");
		__LIB_4__::func_495(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (__LIB_0__::func_898(-939420910))
	{
		__LIB_0__::func_401(joaat("WIN1_INTRO_CUTSCENE"));
		__LIB_0__::func_401(474287981);
		__LIB_0__::func_401(-717025835);
		__LIB_0__::func_401(-338553155);
		__LIB_0__::func_401(-1636879249);
		__LIB_4__::func_495(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", true);
		__LIB_0__::func_804(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	if (__LIB_0__::func_898(-1170496998))
	{
		__LIB_0__::func_401(-1306375743);
		__LIB_0__::func_401(-743781837);
		__LIB_0__::func_401(2114706334);
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			Global_1934765.f_15 = VOLUME::_CREATE_VOLUME_CYLINDER(-1353.573f, 2424.476f, 306.385f, 0f, 0f, 0f, 0.4f, 0.4f, 1f);
			PATHFIND::_0x19C7567D2F2287D6(Global_1934765.f_15, 7);
		}
		__LIB_4__::func_495(149);
		__LIB_4__::func_495(150);
		__LIB_4__::func_495(151);
		__LIB_4__::func_495(152);
	}
	else
	{
		__LIB_0__::func_400(-1306375743);
		__LIB_0__::func_400(-743781837);
		__LIB_0__::func_400(2114706334);
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Global_1934765.f_15);
			VOLUME::_DELETE_VOLUME(Global_1934765.f_15);
		}
		__LIB_4__::func_524(149);
		__LIB_4__::func_524(150);
		__LIB_4__::func_524(151);
		__LIB_4__::func_524(152);
	}
	__LIB_10__::func_687();
	if (__LIB_0__::func_898(2080210939))
	{
		__LIB_0__::func_401(-1055748784);
	}
	else
	{
		__LIB_0__::func_400(-1055748784);
	}
	if (__LIB_0__::func_898(1485195808))
	{
		__LIB_4__::func_495(147);
		__LIB_4__::func_524(148);
	}
	else
	{
		__LIB_4__::func_524(147);
		__LIB_4__::func_495(148);
	}
	if (__LIB_0__::func_898(-1532284567))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", true);
		}
	}
	else if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", false);
	}
	if (__LIB_0__::func_898(2127577956))
	{
		__LIB_0__::func_401(joaat("SHA_EXT_SHUTTERS_ODRISCOLLS4"));
		__LIB_0__::func_400(joaat("SHA_EXT_SHUTTERS_NORMAL"));
	}
	else
	{
		__LIB_0__::func_401(joaat("SHA_EXT_SHUTTERS_NORMAL"));
		__LIB_0__::func_400(joaat("SHA_EXT_SHUTTERS_ODRISCOLLS4"));
	}
	if (__LIB_0__::func_898(-524145696))
	{
		__LIB_0__::func_401(809554858);
		__LIB_0__::func_401(1810083187);
		__LIB_0__::func_400(159921796);
		__LIB_0__::func_400(-1739900853);
		__LIB_0__::func_401(2113454609);
		__LIB_0__::func_401(-520163372);
		__LIB_0__::func_400(-90228526);
		__LIB_4__::func_524(17);
		__LIB_4__::func_524(2);
		__LIB_4__::func_524(4);
		__LIB_4__::func_495(1);
		__LIB_4__::func_495(5);
		__LIB_1__::func_948(931206119, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(1783003505, 1, 0, 0, 0, 0, 0, 0);
		__LIB_0__::func_401(-646014955);
		__LIB_5__::func_440("shb_nav_camp_running");
		__LIB_5__::func_440("shb_nav_camp_teardown");
		__LIB_0__::func_400(1265596420);
		__LIB_5__::func_440("shb_nav_camp_01");
		__LIB_5__::func_441("shb_nav_camp_00");
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", true);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	else
	{
		__LIB_5__::func_440("shb_nav_camp_00");
		__LIB_5__::func_440("shb_nav_camp_01");
		__LIB_0__::func_400(809554858);
		__LIB_0__::func_400(1265596420);
		__LIB_0__::func_400(1810083187);
		__LIB_1__::func_948(931206119, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(1783003505, 0, 0, 0, 1, 0, 0, 0);
		__LIB_0__::func_400(-646014955);
		if (__LIB_0__::func_898(282809459))
		{
			__LIB_4__::func_524(5);
			__LIB_4__::func_524(17);
			__LIB_4__::func_524(1);
			__LIB_4__::func_524(2);
			__LIB_4__::func_495(4);
			__LIB_0__::func_400(-520163372);
			__LIB_0__::func_401(-90228526);
			__LIB_0__::func_401(159921796);
			__LIB_0__::func_400(-1739900853);
			__LIB_0__::func_400(2113454609);
		}
		else if (__LIB_0__::func_898(1626481264))
		{
			__LIB_4__::func_524(5);
			__LIB_4__::func_524(4);
			__LIB_4__::func_524(1);
			__LIB_4__::func_524(2);
			__LIB_4__::func_495(17);
			__LIB_0__::func_400(-520163372);
			__LIB_0__::func_401(-90228526);
			__LIB_0__::func_401(159921796);
			__LIB_0__::func_401(-1739900853);
			__LIB_0__::func_400(2113454609);
		}
		else
		{
			__LIB_0__::func_400(-90228526);
			__LIB_0__::func_400(159921796);
			__LIB_0__::func_400(-1739900853);
			__LIB_0__::func_401(2113454609);
		}
		__LIB_4__::func_524(1);
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", false);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	if (__LIB_0__::func_898(-63926460))
	{
		__LIB_0__::func_400(1929440211);
		__LIB_0__::func_400(2126897368);
		__LIB_0__::func_401(-833857740);
		__LIB_0__::func_401(-825836321);
		if (__LIB_0__::func_898(1665756137))
		{
			__LIB_0__::func_401(-1718055184);
			__LIB_5__::func_440("han_nav_endless_summer");
			__LIB_5__::func_441("han_nav_endless_summer_marston4");
		}
		else
		{
			__LIB_0__::func_400(-1718055184);
			__LIB_5__::func_440("han_nav_endless_summer_marston4");
			__LIB_5__::func_441("han_nav_endless_summer");
		}
	}
	else
	{
		__LIB_0__::func_400(-833857740);
		__LIB_0__::func_400(-825836321);
		__LIB_0__::func_400(-1718055184);
		__LIB_5__::func_440("han_nav_endless_summer");
		__LIB_5__::func_440("han_nav_endless_summer_marston4");
		__LIB_0__::func_401(1929440211);
	}
	if (__LIB_0__::func_898(374115931))
	{
		__LIB_4__::func_495(164);
		__LIB_5__::func_441("bvh_nav_endless_summer");
	}
	else
	{
		__LIB_4__::func_524(164);
		__LIB_5__::func_440("bvh_nav_endless_summer");
	}
	if (__LIB_0__::func_898(1982676972))
	{
		__LIB_4__::func_495(20);
	}
	else
	{
		__LIB_4__::func_524(20);
	}
	if (__LIB_0__::func_898(-2034257789))
	{
		STREAMING::_REQUEST_IMAP(joaat("SIX_POINT_LIGHTS_ON"));
		__LIB_4__::func_524(22);
		__LIB_4__::func_524(24);
		__LIB_4__::func_495(21);
		__LIB_4__::func_495(23);
	}
	else
	{
		STREAMING::_REMOVE_IMAP(joaat("SIX_POINT_LIGHTS_ON"));
		__LIB_4__::func_524(21);
		__LIB_4__::func_524(23);
		__LIB_4__::func_495(22);
		__LIB_4__::func_495(24);
	}
	if (__LIB_0__::func_898(-1014145132))
	{
		__LIB_4__::func_495(200);
	}
	else
	{
		__LIB_4__::func_524(200);
	}
	if (__LIB_0__::func_898(-1840704908))
	{
		__LIB_4__::func_495(201);
	}
	else
	{
		__LIB_4__::func_524(201);
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_898(-1053549743))
		{
			__LIB_10__::func_739(65536, 1);
		}
		else
		{
			__LIB_10__::func_739(65536, 0);
		}
	}
	__LIB_10__::func_799();
	if (__LIB_0__::func_898(-2073072369))
	{
		__LIB_0__::func_401(1343484786);
		__LIB_0__::func_401(1989074279);
		__LIB_5__::func_441("sad3_nav_rhodes_shootout_00");
	}
	else if (__LIB_0__::func_898(-1674179981))
	{
		if (__LIB_0__::func_898(-1053549743))
		{
			__LIB_0__::func_401(1871051363);
			__LIB_0__::func_401(-2144587490);
			__LIB_0__::func_401(1033721560);
			__LIB_5__::func_441("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			__LIB_0__::func_401(1343484786);
			__LIB_0__::func_401(-1671953459);
			__LIB_0__::func_401(1871051363);
			__LIB_0__::func_401(-2144587490);
			__LIB_5__::func_441("rho_nav_grave_norm_gry3_off");
		}
	}
	else if (__LIB_0__::func_898(-1835851517))
	{
		if (__LIB_0__::func_898(-1053549743))
		{
			__LIB_0__::func_401(-2144587490);
			__LIB_0__::func_401(1033721560);
			__LIB_5__::func_441("rho_nav_grave_dug_gry3_on");
		}
		else
		{
			__LIB_0__::func_401(1343484786);
			__LIB_0__::func_401(-1671953459);
			__LIB_0__::func_401(-2144587490);
			__LIB_5__::func_441("rho_nav_grave_dug_gry3_off");
		}
	}
	else if (__LIB_0__::func_898(-1838352012))
	{
		if (__LIB_0__::func_898(-1053549743))
		{
			__LIB_0__::func_401(146746575);
			__LIB_0__::func_401(1033721560);
			__LIB_5__::func_441("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			__LIB_0__::func_401(1343484786);
			__LIB_0__::func_401(-1671953459);
			__LIB_0__::func_401(146746575);
			__LIB_5__::func_441("rho_nav_grave_norm_gry3_off");
		}
	}
	if (__LIB_0__::func_898(-644722288))
	{
		__LIB_0__::func_400(1882605165);
		__LIB_0__::func_401(869642051);
	}
	else
	{
		__LIB_0__::func_400(869642051);
		__LIB_0__::func_401(1882605165);
	}
	if (__LIB_0__::func_898(1691618738))
	{
		__LIB_0__::func_400(-184821200);
		__LIB_0__::func_401(-490818122);
		__LIB_0__::func_401(1412515639);
		__LIB_0__::func_401(-1377139506);
	}
	else
	{
		__LIB_0__::func_401(-184821200);
		__LIB_0__::func_400(-490818122);
		__LIB_0__::func_400(1412515639);
		__LIB_0__::func_400(-1377139506);
	}
	if (__LIB_0__::func_898(-741351766))
	{
		__LIB_4__::func_524(130);
		__LIB_4__::func_495(131);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12) && !bParam1)
		{
			Global_1934765.f_12 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1351.383f, -1380.619f, 84.314f, 1.5f, 3f, 1.5f, 347f, false, 7);
		}
	}
	else
	{
		__LIB_4__::func_524(131);
		__LIB_4__::func_495(130);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_12));
		}
	}
	if (__LIB_0__::func_898(-1717960576))
	{
		__LIB_4__::func_524(133);
		__LIB_4__::func_495(132);
	}
	else if (__LIB_0__::func_898(210001842))
	{
		__LIB_4__::func_524(132);
		__LIB_4__::func_495(133);
	}
	if (__LIB_0__::func_898(-1164215952))
	{
		__LIB_0__::func_400(1603294144);
		__LIB_0__::func_401(349486662);
		__LIB_4__::func_524(144);
		__LIB_4__::func_495(143);
	}
	else
	{
		__LIB_0__::func_400(349486662);
		__LIB_0__::func_401(1603294144);
		__LIB_4__::func_524(143);
		__LIB_4__::func_495(144);
	}
	if (__LIB_0__::func_898(-1236261996))
	{
		__LIB_0__::func_400(897455211);
		__LIB_0__::func_400(774477221);
		__LIB_0__::func_401(1136898294);
		__LIB_0__::func_401(1097534152);
		__LIB_4__::func_524(146);
		__LIB_4__::func_495(145);
	}
	else
	{
		__LIB_0__::func_400(1136898294);
		__LIB_0__::func_400(1097534152);
		__LIB_0__::func_401(897455211);
		__LIB_0__::func_401(774477221);
		__LIB_4__::func_524(145);
		__LIB_4__::func_495(146);
	}
	if (__LIB_0__::func_898(-1799960545))
	{
		__LIB_4__::func_524(170);
		__LIB_4__::func_495(169);
	}
	else
	{
		__LIB_4__::func_524(169);
		__LIB_4__::func_495(170);
	}
	if (__LIB_0__::func_898(-628542779))
	{
		__LIB_4__::func_495(180);
	}
	else
	{
		__LIB_4__::func_524(180);
	}
	if (__LIB_0__::func_898(1500064347))
	{
		__LIB_0__::func_401(724436573);
		__LIB_0__::func_400(-1475403379);
	}
	else
	{
		__LIB_0__::func_401(-1475403379);
		__LIB_0__::func_400(724436573);
	}
	if (__LIB_0__::func_898(-1741667789))
	{
		__LIB_4__::func_524(179);
	}
	else
	{
		__LIB_4__::func_495(179);
	}
	if (__LIB_0__::func_898(-853383233))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (!__LIB_0__::func_117(70, 32))
			{
				__LIB_0__::func_123(70, 32);
				__LIB_8__::func_783(70);
			}
		}
	}
	else if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_117(70, 32))
		{
			__LIB_0__::func_121(70, 32);
			__LIB_5__::func_458(70);
		}
	}
	if (__LIB_0__::func_898(-334729750))
	{
		__LIB_0__::func_401(1138093977);
		__LIB_5__::func_441("wat_nav_grave");
	}
	else
	{
		__LIB_0__::func_400(1138093977);
		__LIB_5__::func_440("wat_nav_grave");
	}
	if (__LIB_0__::func_898(1926308480))
	{
		__LIB_0__::func_400(1849913721);
		__LIB_0__::func_401(573576705);
	}
	else if (__LIB_0__::func_898(280705402))
	{
		__LIB_0__::func_401(1849913721);
		__LIB_0__::func_400(573576705);
	}
	else if (__LIB_0__::func_898(1766284049))
	{
		__LIB_0__::func_400(1849913721);
		__LIB_0__::func_400(573576705);
	}
	if (__LIB_0__::func_898(-150493654))
	{
		__LIB_0__::func_400(-848315456);
		__LIB_0__::func_400(105426297);
		__LIB_0__::func_400(2095421392);
		__LIB_0__::func_400(-1614141377);
		__LIB_0__::func_400(45121961);
		__LIB_0__::func_400(-7594117);
		__LIB_0__::func_400(1388161943);
		__LIB_0__::func_401(-642132908);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1f, 1f, 6f, 0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[2]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[2]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[3]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[3]));
		}
		__LIB_5__::func_440("utp2_nav_tree_fallen");
	}
	else if (__LIB_0__::func_898(-1271608261))
	{
		__LIB_0__::func_400(-642132908);
		__LIB_0__::func_400(105426297);
		__LIB_0__::func_400(-1614141377);
		__LIB_0__::func_400(45121961);
		__LIB_0__::func_400(-7594117);
		__LIB_0__::func_400(1388161943);
		__LIB_0__::func_401(2095421392);
		__LIB_0__::func_401(-848315456);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 42.664f, 1f, 13f, 1f, 15f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]) && !bParam1)
		{
			Global_1934765.f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1f, 1f, 9f, -7.41f, false, 7);
		}
		__LIB_5__::func_440("utp2_nav_tree_fallen");
	}
	else if (__LIB_0__::func_898(1846061697))
	{
		__LIB_0__::func_400(-642132908);
		__LIB_0__::func_400(2095421392);
		__LIB_0__::func_400(105426297);
		__LIB_0__::func_400(-7594117);
		__LIB_0__::func_401(45121961);
		__LIB_0__::func_401(-1614141377);
		__LIB_0__::func_401(-848315456);
		__LIB_0__::func_401(1388161943);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
		PATHFIND::_0xAFE2AE66F6251C66(-1174.544f, -4.74933f, 38f, -1163.424f, -13.43965f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 41.664f, 1f, 13f, 3f, 15f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]) && !bParam1)
		{
			Global_1934765.f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1f, 1f, 9f, -7.41f, false, 7);
		}
		__LIB_5__::func_441("utp2_nav_tree_fallen");
	}
	else if (__LIB_0__::func_898(-1145519186))
	{
		__LIB_0__::func_400(-642132908);
		__LIB_0__::func_400(-848315456);
		__LIB_0__::func_400(-1614141377);
		__LIB_0__::func_400(45121961);
		__LIB_0__::func_400(2095421392);
		__LIB_0__::func_400(-7594117);
		__LIB_0__::func_400(1388161943);
		__LIB_0__::func_401(105426297);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1f, 1f, 6f, 0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[2]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[2]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[3]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[3]));
		}
		__LIB_5__::func_440("utp2_nav_tree_fallen");
	}
	if (!__LIB_2__::func_774(51))
	{
		if (__LIB_0__::func_898(1485494263))
		{
			__LIB_0__::func_400(1672215059);
			__LIB_0__::func_400(-1177027698);
			__LIB_0__::func_400(23211744);
			__LIB_0__::func_400(604668055);
			__LIB_0__::func_400(joaat("DES_NTVS2_TREEFALL"));
			__LIB_0__::func_401(1708195603);
			__LIB_5__::func_441("nts2_fallen_tree_ridge");
		}
		else
		{
			__LIB_0__::func_400(23211744);
			__LIB_0__::func_400(604668055);
			__LIB_0__::func_400(1708195603);
			__LIB_0__::func_401(joaat("DES_NTVS2_TREEFALL"));
			__LIB_0__::func_401(1672215059);
			__LIB_0__::func_401(-1177027698);
			__LIB_5__::func_440("nts2_fallen_tree_ridge");
		}
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_898(-811637947))
		{
			if (__LIB_0__::func_117(497, 32))
			{
				__LIB_0__::func_121(497, 32);
				__LIB_5__::func_458(497);
			}
			if (__LIB_0__::func_117(498, 32))
			{
				__LIB_0__::func_121(498, 32);
				__LIB_5__::func_458(498);
			}
		}
		else
		{
			if (!__LIB_0__::func_117(497, 32))
			{
				__LIB_0__::func_123(497, 32);
				__LIB_8__::func_783(497);
			}
			if (!__LIB_0__::func_117(498, 32))
			{
				__LIB_0__::func_123(498, 32);
				__LIB_8__::func_783(498);
			}
		}
	}
	if (__LIB_0__::func_898(106479759))
	{
		__LIB_0__::func_400(-1403908542);
		__LIB_0__::func_400(1598834669);
		__LIB_0__::func_400(1299817544);
		__LIB_0__::func_400(1204787444);
		__LIB_0__::func_400(66523468);
		__LIB_0__::func_400(2040259178);
		__LIB_0__::func_400(1947806010);
		__LIB_5__::func_440("str_nav_construction_stage_0");
		__LIB_5__::func_440("str_nav_construction_stage_1");
		__LIB_5__::func_440("str_nav_construction_stage_2");
		__LIB_5__::func_440("str_nav_construction_stage_3");
		__LIB_0__::func_401(1924458218);
		__LIB_5__::func_441("utp1_bridge_cover");
	}
	else
	{
		__LIB_0__::func_400(1924458218);
		__LIB_5__::func_440("utp1_bridge_cover");
		if (__LIB_0__::func_898(198200492))
		{
			__LIB_0__::func_400(1299817544);
			__LIB_0__::func_400(1204787444);
			__LIB_0__::func_400(66523468);
			__LIB_0__::func_400(2040259178);
			__LIB_0__::func_400(1947806010);
			__LIB_5__::func_440("str_nav_construction_stage_1");
			__LIB_5__::func_440("str_nav_construction_stage_2");
			__LIB_5__::func_440("str_nav_construction_stage_3");
			__LIB_0__::func_401(-1403908542);
			__LIB_0__::func_401(1598834669);
			__LIB_5__::func_441("str_nav_construction_stage_0");
			if (__LIB_0__::func_2() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", true);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", false);
		}
		else if (__LIB_0__::func_898(-1124061431))
		{
			__LIB_0__::func_400(-1403908542);
			__LIB_0__::func_400(1598834669);
			__LIB_0__::func_400(1204787444);
			__LIB_0__::func_400(66523468);
			__LIB_0__::func_400(2040259178);
			__LIB_0__::func_400(1947806010);
			__LIB_5__::func_440("str_nav_construction_stage_0");
			__LIB_5__::func_440("str_nav_construction_stage_2");
			__LIB_5__::func_440("str_nav_construction_stage_3");
			__LIB_0__::func_401(1299817544);
			__LIB_5__::func_441("str_nav_construction_stage_1");
			if (__LIB_0__::func_2() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (__LIB_0__::func_898(52706132))
		{
			__LIB_0__::func_400(-1403908542);
			__LIB_0__::func_400(1598834669);
			__LIB_0__::func_400(1299817544);
			__LIB_0__::func_400(66523468);
			__LIB_0__::func_400(2040259178);
			__LIB_0__::func_400(1947806010);
			__LIB_5__::func_440("str_nav_construction_stage_0");
			__LIB_5__::func_440("str_nav_construction_stage_1");
			__LIB_5__::func_440("str_nav_construction_stage_3");
			__LIB_0__::func_401(1204787444);
			__LIB_5__::func_441("str_nav_construction_stage_2");
			if (__LIB_0__::func_2() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (__LIB_0__::func_898(-259123672))
		{
			__LIB_0__::func_400(-1403908542);
			__LIB_0__::func_400(1598834669);
			__LIB_0__::func_400(1299817544);
			__LIB_0__::func_400(1204787444);
			__LIB_5__::func_440("str_nav_construction_stage_0");
			__LIB_5__::func_440("str_nav_construction_stage_1");
			__LIB_5__::func_440("str_nav_construction_stage_2");
			__LIB_0__::func_401(66523468);
			__LIB_0__::func_401(2040259178);
			__LIB_0__::func_401(1947806010);
			__LIB_5__::func_441("str_nav_construction_stage_3");
			if (__LIB_0__::func_2() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
	}
	if (__LIB_0__::func_898(-356975260))
	{
		__LIB_0__::func_400(73781828);
		__LIB_0__::func_401(-391567710);
	}
	else
	{
		__LIB_0__::func_400(-391567710);
		__LIB_0__::func_401(73781828);
	}
	if (__LIB_0__::func_898(-2106214197))
	{
	}
	else if (__LIB_0__::func_898(-1029225159))
	{
	}
	if (__LIB_0__::func_898(757752139))
	{
		__LIB_4__::func_524(168);
	}
	else
	{
		__LIB_4__::func_495(168);
	}
	if (__LIB_0__::func_898(1609506757))
	{
		__LIB_0__::func_401(-205116461);
		__LIB_0__::func_401(-1490034522);
		__LIB_0__::func_400(-1473336090);
		__LIB_0__::func_400(-1013403664);
		if (!Global_1934765.f_289)
		{
			Global_1934765.f_401 = -1;
			Global_1934765.f_289 = 1;
		}
		__LIB_4__::func_524(158);
		if (!__LIB_2__::func_774(47))
		{
			__LIB_4__::func_495(159);
		}
		else
		{
			__LIB_4__::func_524(159);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_14));
		}
		if (__LIB_0__::func_898(439465264))
		{
			__LIB_4__::func_495(155);
			__LIB_4__::func_524(154);
			__LIB_4__::func_495(157);
			__LIB_4__::func_524(156);
		}
		else
		{
			__LIB_4__::func_495(156);
			__LIB_9__::func_925(156);
			__LIB_4__::func_495(154);
			__LIB_4__::func_524(155);
			__LIB_4__::func_524(157);
		}
	}
	else
	{
		__LIB_0__::func_401(-1473336090);
		__LIB_0__::func_401(-1013403664);
		__LIB_0__::func_400(-205116461);
		__LIB_0__::func_400(-1490034522);
		Global_1934765.f_289 = 0;
		__LIB_4__::func_524(154);
		__LIB_4__::func_524(155);
		__LIB_4__::func_524(157);
		__LIB_4__::func_524(156);
		__LIB_4__::func_524(159);
		__LIB_4__::func_495(158);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14) && !bParam1)
		{
			Global_1934765.f_14 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2698.198f, -1187.154f, 51.26f, 3.878f, 0.326f, 3.352f, __LIB_3__::func_745(-179f), false, 7);
		}
	}
	if (__LIB_0__::func_898(-2021582629) && __LIB_0__::func_181())
	{
		__LIB_0__::func_400(432272547);
		__LIB_0__::func_401(204868257);
		__LIB_5__::func_441("nav_sdn_fundraiser");
	}
	else
	{
		__LIB_0__::func_400(204868257);
		__LIB_0__::func_401(432272547);
		__LIB_5__::func_440("nav_sdn_fundraiser");
	}
	if (__LIB_0__::func_898(-1232809834))
	{
		__LIB_0__::func_400(206289712);
		__LIB_0__::func_401(-1225383143);
	}
	else
	{
		__LIB_0__::func_400(-1225383143);
		__LIB_0__::func_401(206289712);
	}
	if (__LIB_0__::func_898(141950038))
	{
		__LIB_0__::func_400(-473077489);
		__LIB_0__::func_401(619024057);
		__LIB_0__::func_401(-836433697);
		__LIB_3__::func_124(586229709, 1);
	}
	else
	{
		__LIB_0__::func_400(-836433697);
		__LIB_0__::func_400(619024057);
		__LIB_0__::func_401(-473077489);
		__LIB_3__::func_123(586229709, 1);
	}
	if (__LIB_0__::func_898(544152906))
	{
		__LIB_0__::func_400(1821956151);
		__LIB_0__::func_401(-704461521);
	}
	else
	{
		__LIB_0__::func_400(-704461521);
		__LIB_0__::func_401(1821956151);
	}
	if (__LIB_0__::func_898(26054262))
	{
		__LIB_4__::func_495(166);
	}
	else
	{
		__LIB_4__::func_524(166);
	}
	if (__LIB_0__::func_898(-503955743))
	{
		__LIB_4__::func_495(167);
	}
	else
	{
		__LIB_4__::func_524(167);
	}
	if (__LIB_0__::func_898(945612176))
	{
		__LIB_4__::func_495(161);
		__LIB_4__::func_495(163);
		__LIB_4__::func_524(160);
		__LIB_4__::func_524(162);
	}
	else
	{
		__LIB_4__::func_495(160);
		__LIB_4__::func_495(162);
		__LIB_4__::func_524(161);
		__LIB_4__::func_524(163);
	}
	if (__LIB_0__::func_898(-1706438978))
	{
		__LIB_4__::func_495(142);
		__LIB_4__::func_524(141);
	}
	else
	{
		__LIB_4__::func_524(141);
		__LIB_4__::func_524(142);
	}
	if (__LIB_0__::func_898(94263042))
	{
		__LIB_0__::func_401(-1499162505);
		__LIB_0__::func_401(joaat("AMB_CAMP_GRZ_FINALE2"));
		if (__LIB_0__::func_898(-2106445152))
		{
			__LIB_0__::func_400(-1832103801);
			__LIB_4__::func_524(230);
			__LIB_5__::func_440("fin2_micah_hideout");
			__LIB_5__::func_441("fin2_micah_hideout_abandon");
		}
		else
		{
			__LIB_0__::func_401(-1832103801);
			__LIB_4__::func_495(230);
			__LIB_5__::func_440("fin2_micah_hideout_abandon");
			__LIB_5__::func_441("fin2_micah_hideout");
		}
	}
	else
	{
		__LIB_0__::func_400(-1499162505);
		__LIB_0__::func_400(joaat("AMB_CAMP_GRZ_FINALE2"));
		__LIB_0__::func_400(-1832103801);
		__LIB_4__::func_524(230);
		__LIB_5__::func_440("fin2_micah_hideout");
		__LIB_5__::func_440("fin2_micah_hideout_abandon");
	}
	if (__LIB_0__::func_898(-25901845))
	{
		__LIB_0__::func_400(-468702164);
		__LIB_4__::func_524(192);
		__LIB_0__::func_401(-1436188587);
		__LIB_4__::func_495(191);
	}
	else
	{
		__LIB_0__::func_400(-1436188587);
		__LIB_4__::func_524(191);
		__LIB_0__::func_401(-468702164);
		__LIB_4__::func_495(192);
	}
	if (__LIB_0__::func_898(-75024673))
	{
		__LIB_0__::func_401(1573766063);
	}
	else
	{
		__LIB_0__::func_400(1573766063);
	}
	if (__LIB_0__::func_898(1250636944))
	{
		__LIB_0__::func_401(-892659042);
	}
	else
	{
		__LIB_0__::func_400(-892659042);
	}
	if (__LIB_0__::func_898(-1831552326))
	{
		__LIB_4__::func_495(194);
		__LIB_4__::func_524(195);
	}
	else
	{
		__LIB_4__::func_495(195);
		__LIB_4__::func_524(194);
	}
	if (__LIB_0__::func_898(-1151084372))
	{
		__LIB_4__::func_495(196);
	}
	else
	{
		__LIB_4__::func_524(196);
	}
	if (__LIB_0__::func_898(1064154891))
	{
		__LIB_4__::func_495(19);
		__LIB_4__::func_524(18);
	}
	else
	{
		__LIB_4__::func_495(18);
		__LIB_4__::func_524(19);
	}
	if (__LIB_0__::func_898(1822001510))
	{
	}
	else if (__LIB_0__::func_898(-1612662716))
	{
	}
	if (__LIB_0__::func_898(689930684))
	{
		__LIB_4__::func_495(176);
	}
	else
	{
		__LIB_4__::func_524(176);
	}
	if (__LIB_0__::func_898(-1957523409))
	{
		__LIB_4__::func_495(177);
	}
	else
	{
		__LIB_4__::func_524(177);
	}
	if (__LIB_0__::func_898(1306158345))
	{
		__LIB_0__::func_400(943998860);
		__LIB_0__::func_400(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		__LIB_0__::func_400(580700069);
		__LIB_0__::func_400(1347068672);
		__LIB_5__::func_440("HKK_Trashed_Wagons");
		__LIB_5__::func_440("HKK_Part_Fixed");
		__LIB_5__::func_440("HKK_Camp_Only");
		__LIB_10__::func_740(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (__LIB_0__::func_898(1952610440))
	{
		__LIB_0__::func_400(943998860);
		__LIB_0__::func_401(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		__LIB_0__::func_401(580700069);
		__LIB_0__::func_401(1347068672);
		__LIB_5__::func_440("HKK_Part_Fixed");
		__LIB_5__::func_440("HKK_Camp_Only");
		__LIB_5__::func_441("HKK_Trashed_Wagons");
		__LIB_10__::func_741(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (__LIB_0__::func_898(-223469678))
	{
		__LIB_0__::func_401(943998860);
		__LIB_0__::func_401(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		__LIB_0__::func_400(580700069);
		__LIB_0__::func_400(1347068672);
		__LIB_5__::func_440("HKK_Trashed_Wagons");
		__LIB_5__::func_440("HKK_Camp_Only");
		__LIB_5__::func_441("HKK_Part_Fixed");
		__LIB_10__::func_741(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (__LIB_0__::func_898(-404698347))
	{
		__LIB_0__::func_401(943998860);
		__LIB_0__::func_400(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		__LIB_0__::func_400(580700069);
		__LIB_0__::func_400(1347068672);
		__LIB_5__::func_440("HKK_Trashed_Wagons");
		__LIB_5__::func_440("HKK_Part_Fixed");
		__LIB_5__::func_441("HKK_Camp_Only");
		__LIB_10__::func_741(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (__LIB_0__::func_898(1517904467))
	{
		__LIB_0__::func_400(943998860);
		__LIB_0__::func_400(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		__LIB_0__::func_400(580700069);
		__LIB_0__::func_400(1347068672);
		__LIB_5__::func_440("HKK_Trashed_Wagons");
		__LIB_5__::func_440("HKK_Part_Fixed");
		__LIB_5__::func_440("HKK_Camp_Only");
		__LIB_10__::func_740(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	if (__LIB_0__::func_898(-1405998267))
	{
		__LIB_0__::func_401(2015532863);
	}
	else
	{
		__LIB_0__::func_400(2015532863);
	}
	if (__LIB_0__::func_898(-468693731))
	{
		__LIB_0__::func_400(-800942395);
		__LIB_0__::func_401(-741366935);
	}
	else
	{
		__LIB_0__::func_400(-741366935);
		__LIB_0__::func_401(-800942395);
	}
	if (__LIB_0__::func_898(-238080464))
	{
		__LIB_0__::func_401(-1579403437);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10) && !bParam1)
		{
			Global_1934765.f_10 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-304.439f, 783.08f, 117.11f, 1.909f, 4.17f, 3f, 9.6f, false, 7);
		}
	}
	else
	{
		__LIB_0__::func_400(-1579403437);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_10));
		}
	}
	if (__LIB_0__::func_898(1607768502))
	{
		__LIB_0__::func_401(808576710);
		__LIB_0__::func_400(-775951892);
		__LIB_0__::func_400(1547403545);
		__LIB_0__::func_400(1431947993);
		__LIB_0__::func_400(137316925);
		__LIB_0__::func_400(-660075384);
	}
	else if (__LIB_0__::func_898(-1852605133))
	{
		__LIB_0__::func_401(1547403545);
		__LIB_0__::func_400(-775951892);
		__LIB_0__::func_400(808576710);
		__LIB_0__::func_400(1431947993);
		__LIB_0__::func_400(137316925);
		__LIB_0__::func_400(-660075384);
	}
	else if (__LIB_0__::func_898(-129643890))
	{
		__LIB_0__::func_401(-660075384);
		__LIB_0__::func_400(-775951892);
		__LIB_0__::func_400(1547403545);
		__LIB_0__::func_400(808576710);
		__LIB_0__::func_400(1431947993);
		__LIB_0__::func_400(137316925);
	}
	else if (__LIB_0__::func_898(-1433686245))
	{
		__LIB_0__::func_401(137316925);
		__LIB_0__::func_400(-775951892);
		__LIB_0__::func_400(1547403545);
		__LIB_0__::func_400(808576710);
		__LIB_0__::func_400(1431947993);
		__LIB_0__::func_400(-660075384);
	}
	else
	{
		__LIB_0__::func_401(-775951892);
		__LIB_0__::func_400(1547403545);
		__LIB_0__::func_400(808576710);
		__LIB_0__::func_400(1431947993);
		__LIB_0__::func_400(137316925);
		__LIB_0__::func_400(-660075384);
	}
	if (__LIB_0__::func_898(192515737))
	{
		__LIB_0__::func_401(1104143966);
		__LIB_0__::func_400(-2142987163);
		__LIB_0__::func_400(1027093524);
		__LIB_0__::func_400(1879779330);
		__LIB_0__::func_400(-1617847332);
		__LIB_0__::func_400(317070801);
	}
	else if (__LIB_0__::func_898(426191476))
	{
		__LIB_0__::func_401(-2142987163);
		__LIB_0__::func_400(1104143966);
		__LIB_0__::func_400(1027093524);
		__LIB_0__::func_400(1879779330);
		__LIB_0__::func_400(-1617847332);
		__LIB_0__::func_400(317070801);
	}
	else if (__LIB_0__::func_898(187862543))
	{
		__LIB_0__::func_401(1027093524);
		__LIB_0__::func_400(1104143966);
		__LIB_0__::func_400(-2142987163);
		__LIB_0__::func_400(1879779330);
		__LIB_0__::func_400(-1617847332);
		__LIB_0__::func_400(317070801);
	}
	else if (__LIB_0__::func_898(417081698))
	{
		__LIB_0__::func_401(1879779330);
		__LIB_0__::func_400(1104143966);
		__LIB_0__::func_400(-2142987163);
		__LIB_0__::func_400(1027093524);
		__LIB_0__::func_400(-1617847332);
		__LIB_0__::func_400(317070801);
	}
	else if (__LIB_0__::func_898(791041526))
	{
		__LIB_0__::func_401(-1617847332);
		__LIB_0__::func_400(1104143966);
		__LIB_0__::func_400(-2142987163);
		__LIB_0__::func_400(1027093524);
		__LIB_0__::func_400(1879779330);
		__LIB_0__::func_400(317070801);
	}
	else
	{
		__LIB_0__::func_401(317070801);
		__LIB_0__::func_400(1104143966);
		__LIB_0__::func_400(-2142987163);
		__LIB_0__::func_400(1027093524);
		__LIB_0__::func_400(1879779330);
		__LIB_0__::func_400(-1617847332);
	}
	if (__LIB_0__::func_293(45))
	{
		if (__LIB_0__::func_898(-1838712533))
		{
			__LIB_0__::func_401(-771786794);
			__LIB_0__::func_400(-1267247536);
			__LIB_0__::func_400(-468635897);
			__LIB_0__::func_400(535384482);
			__LIB_0__::func_400(1088045886);
			__LIB_0__::func_400(-1678761663);
			__LIB_0__::func_400(1724413302);
			__LIB_0__::func_400(-626641013);
		}
		else if (__LIB_0__::func_898(1140218954))
		{
			__LIB_0__::func_401(-1267247536);
			__LIB_0__::func_400(-468635897);
			__LIB_0__::func_400(-771786794);
			__LIB_0__::func_400(535384482);
			__LIB_0__::func_400(1088045886);
			__LIB_0__::func_400(-1678761663);
			__LIB_0__::func_400(1724413302);
			__LIB_0__::func_400(-626641013);
		}
		else
		{
			__LIB_0__::func_401(-468635897);
			__LIB_0__::func_400(-771786794);
			__LIB_0__::func_400(-1267247536);
			__LIB_0__::func_400(535384482);
			__LIB_0__::func_400(1088045886);
			__LIB_0__::func_400(-1678761663);
			__LIB_0__::func_400(1724413302);
			__LIB_0__::func_400(-626641013);
		}
	}
	else if (__LIB_0__::func_898(-1257057567))
	{
		__LIB_0__::func_401(1088045886);
		__LIB_0__::func_400(-1678761663);
		__LIB_0__::func_400(1724413302);
		__LIB_0__::func_400(-626641013);
		__LIB_0__::func_400(535384482);
		__LIB_0__::func_400(-771786794);
		__LIB_0__::func_400(-1267247536);
		__LIB_0__::func_400(-468635897);
	}
	else if (__LIB_0__::func_898(-1419919497))
	{
		__LIB_0__::func_401(-1678761663);
		__LIB_0__::func_400(1724413302);
		__LIB_0__::func_400(-626641013);
		__LIB_0__::func_400(535384482);
		__LIB_0__::func_400(1088045886);
		__LIB_0__::func_400(-771786794);
		__LIB_0__::func_400(-1267247536);
		__LIB_0__::func_400(-468635897);
	}
	else if (__LIB_0__::func_898(-1718674470))
	{
		__LIB_0__::func_401(1724413302);
		__LIB_0__::func_400(-626641013);
		__LIB_0__::func_400(535384482);
		__LIB_0__::func_400(1088045886);
		__LIB_0__::func_400(-1678761663);
		__LIB_0__::func_400(-771786794);
		__LIB_0__::func_400(-1267247536);
		__LIB_0__::func_400(-468635897);
	}
	else if (__LIB_0__::func_898(-35658630))
	{
		__LIB_0__::func_401(-626641013);
		__LIB_0__::func_400(535384482);
		__LIB_0__::func_400(1088045886);
		__LIB_0__::func_400(-1678761663);
		__LIB_0__::func_400(1724413302);
		__LIB_0__::func_400(-771786794);
		__LIB_0__::func_400(-1267247536);
		__LIB_0__::func_400(-468635897);
	}
	else
	{
		__LIB_0__::func_401(535384482);
		__LIB_0__::func_400(1088045886);
		__LIB_0__::func_400(-1678761663);
		__LIB_0__::func_400(1724413302);
		__LIB_0__::func_400(-626641013);
		__LIB_0__::func_400(-771786794);
		__LIB_0__::func_400(-1267247536);
		__LIB_0__::func_400(-468635897);
	}
	if (__LIB_0__::func_898(-108307814))
	{
		__LIB_0__::func_400(-205505701);
		__LIB_0__::func_401(-51262018);
	}
	else
	{
		__LIB_0__::func_400(-51262018);
		__LIB_0__::func_401(-205505701);
	}
	if (__LIB_0__::func_898(-1123615607))
	{
		__LIB_0__::func_400(874022542);
		__LIB_0__::func_400(joaat("DES_DIS_ALCHEMIST"));
		__LIB_0__::func_401(552030279);
		__LIB_5__::func_441("disco_nav_alchemist_house_burnt");
	}
	else
	{
		__LIB_0__::func_400(552030279);
		__LIB_5__::func_440("disco_nav_alchemist_house_burnt");
		__LIB_0__::func_401(874022542);
		__LIB_0__::func_401(joaat("DES_DIS_ALCHEMIST"));
	}
	if (__LIB_0__::func_898(-261141318))
	{
		__LIB_0__::func_401(-531198053);
	}
	else
	{
		__LIB_0__::func_400(-531198053);
	}
	__LIB_0__::func_401(-791673850);
	__LIB_0__::func_401(-395621323);
	__LIB_0__::func_401(-1799943886);
	__LIB_0__::func_401(-1436313374);
	__LIB_0__::func_401(1473078398);
	__LIB_0__::func_400(-2116659774);
	__LIB_0__::func_401(-953275122);
	__LIB_0__::func_401(-893624314);
	__LIB_0__::func_401(1193359531);
	__LIB_0__::func_401(1145227353);
	__LIB_0__::func_401(1915867459);
	__LIB_0__::func_401(98482444);
	__LIB_0__::func_401(26932594);
	__LIB_0__::func_401(-1930879809);
	__LIB_0__::func_401(46370274);
	__LIB_0__::func_401(-1279036865);
	__LIB_0__::func_401(781058494);
	__LIB_0__::func_401(1467466015);
	__LIB_0__::func_401(-363626454);
	__LIB_0__::func_401(-1314125880);
	__LIB_0__::func_401(1763246099);
	__LIB_0__::func_401(-593457329);
	__LIB_0__::func_401(274045919);
	__LIB_0__::func_401(-1047394327);
	__LIB_0__::func_401(-1535282356);
	__LIB_0__::func_401(-1816233372);
	__LIB_0__::func_401(-551038153);
	__LIB_0__::func_401(-1022426685);
	__LIB_0__::func_401(-262759679);
	__LIB_0__::func_401(976641588);
	__LIB_0__::func_401(1601053042);
	__LIB_0__::func_400(453346329);
	__LIB_0__::func_401(-1233192626);
	__LIB_0__::func_400(-620856989);
	__LIB_0__::func_401(1262164851);
	__LIB_0__::func_401(-755250900);
	__LIB_5__::func_440("disco_nav_circus_wagon_off");
	__LIB_0__::func_401(658964321);
	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_13) && !bParam1)
	{
		Global_1934765.f_13 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2813.128f, 991.613f, 54.6f, 9.375f, 3.243f, 7.954f, 30.906f, false, 7);
	}
	__LIB_4__::func_495(202);
	__LIB_4__::func_495(231);
	if (__LIB_0__::func_898(1015669983))
	{
		__LIB_0__::func_400(317070801);
		__LIB_0__::func_401(-763477089);
	}
	else
	{
		__LIB_0__::func_400(-763477089);
		__LIB_0__::func_401(317070801);
	}
	if (__LIB_0__::func_898(1867912207))
	{
		__LIB_4__::func_524(175);
		__LIB_4__::func_495(174);
	}
	else
	{
		__LIB_4__::func_524(174);
		__LIB_4__::func_495(175);
	}
	if (__LIB_0__::func_898(-534215902))
	{
		__LIB_4__::func_524(197);
	}
	else
	{
		__LIB_4__::func_495(197);
	}
	if (__LIB_0__::func_898(-9438024))
	{
		__LIB_4__::func_524(173);
		__LIB_4__::func_495(171);
		__LIB_4__::func_495(172);
	}
	else
	{
		__LIB_4__::func_495(173);
		__LIB_4__::func_524(171);
		__LIB_4__::func_524(172);
	}
	if (__LIB_0__::func_898(-1223121209))
	{
		__LIB_0__::func_400(1886602884);
		__LIB_0__::func_400(-1640200357);
		__LIB_0__::func_401(-1280884206);
	}
	else if (__LIB_0__::func_898(630808005))
	{
		__LIB_0__::func_400(-1280884206);
		__LIB_0__::func_401(1886602884);
		__LIB_0__::func_401(-1640200357);
	}
	else
	{
		__LIB_0__::func_400(-1280884206);
		__LIB_0__::func_400(-1640200357);
		__LIB_0__::func_401(1886602884);
	}
	if (__LIB_0__::func_898(1453909576))
	{
		__LIB_0__::func_400(-2127665186);
		__LIB_0__::func_400(-451832572);
		__LIB_0__::func_400(-689352221);
		__LIB_0__::func_400(1854980771);
		__LIB_0__::func_400(325677491);
		__LIB_0__::func_400(-391187090);
		__LIB_0__::func_400(1513363974);
		__LIB_0__::func_400(-1349539327);
		__LIB_0__::func_400(1963724330);
		__LIB_0__::func_401(-1902184438);
		__LIB_0__::func_401(1236921921);
		__LIB_0__::func_401(740012805);
	}
	else if (__LIB_0__::func_898(1643531967))
	{
		__LIB_0__::func_400(-1902184438);
		__LIB_0__::func_400(-689352221);
		__LIB_0__::func_400(1236921921);
		__LIB_0__::func_400(-391187090);
		__LIB_0__::func_400(740012805);
		__LIB_0__::func_400(1963724330);
		__LIB_0__::func_401(-2127665186);
		__LIB_0__::func_401(-451832572);
		__LIB_0__::func_401(1854980771);
		__LIB_0__::func_401(325677491);
		__LIB_0__::func_401(1513363974);
		__LIB_0__::func_401(-1349539327);
	}
	else
	{
		__LIB_0__::func_400(-1902184438);
		__LIB_0__::func_400(-451832572);
		__LIB_0__::func_400(1236921921);
		__LIB_0__::func_400(325677491);
		__LIB_0__::func_400(740012805);
		__LIB_0__::func_400(-1349539327);
		__LIB_0__::func_401(-2127665186);
		__LIB_0__::func_401(-689352221);
		__LIB_0__::func_401(1854980771);
		__LIB_0__::func_401(-391187090);
		__LIB_0__::func_401(1513363974);
		__LIB_0__::func_401(1963724330);
	}
	if (__LIB_0__::func_898(1164928979))
	{
		__LIB_0__::func_400(-1366431554);
		__LIB_0__::func_401(-960136064);
	}
	else
	{
		__LIB_0__::func_400(-960136064);
		__LIB_0__::func_401(-1366431554);
	}
	if (__LIB_0__::func_898(527226204))
	{
		__LIB_0__::func_400(-2122914678);
		__LIB_0__::func_401(-518004776);
	}
	else
	{
		__LIB_0__::func_400(-518004776);
		__LIB_0__::func_401(-2122914678);
	}
	if (__LIB_0__::func_898(1944170089))
	{
		__LIB_0__::func_401(1210820782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3) && !bParam1)
		{
			Global_1934765.f_3 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(665.03f, -1252.61f, 42.82f, 0.55f, 0.55f, 1f, 0f, false, 7);
		}
	}
	else
	{
		__LIB_0__::func_400(1210820782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_3));
		}
	}
	if (__LIB_0__::func_898(1213993593))
	{
		__LIB_0__::func_401(-520400509);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4) && !bParam1)
		{
			Global_1934765.f_4 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-112.01f, -36.73f, 95.65f, 0.5f, 0.5f, 0.75f, 0f, false, 7);
		}
	}
	else
	{
		__LIB_0__::func_400(-520400509);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_4));
		}
	}
	if (__LIB_0__::func_898(1216784232))
	{
		__LIB_0__::func_401(-1813544782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11) && !bParam1)
		{
			Global_1934765.f_11 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1593.796f, -181.753f, 138.934f, 6.212f, 2.801f, 5.068f, 220.2273f, false, 7);
		}
	}
	else
	{
		__LIB_0__::func_400(-1813544782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_11));
		}
	}
	if (__LIB_0__::func_898(1410198831))
	{
		__LIB_0__::func_401(joaat("REG_HRT_HUNTING02"));
		__LIB_10__::func_741(joaat("REG_HRT_HUNTING02"));
	}
	else
	{
		__LIB_0__::func_400(joaat("REG_HRT_HUNTING02"));
		__LIB_10__::func_740(joaat("REG_HRT_HUNTING02"));
	}
	if (__LIB_0__::func_898(-538889627))
	{
		if (__LIB_1__::func_533(536870912) == 0)
		{
			__LIB_5__::func_548(536870912);
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_PRONGHORNRANCH"), -2550f, 400f, 0, 0);
		}
		__LIB_0__::func_400(1221694281);
		__LIB_0__::func_400(-1552951782);
		__LIB_0__::func_400(-1142569437);
		__LIB_0__::func_400(474113610);
		__LIB_0__::func_400(-297340751);
		__LIB_0__::func_400(1802934313);
		__LIB_0__::func_400(2108112010);
		__LIB_0__::func_400(1208537422);
		__LIB_0__::func_400(361734047);
		__LIB_0__::func_400(446554495);
		__LIB_0__::func_400(-118700196);
		__LIB_0__::func_400(-735136865);
		__LIB_0__::func_400(636278554);
		__LIB_5__::func_440("pro_empty_nav");
		__LIB_5__::func_440("pro_fence_fixed_nav");
		__LIB_5__::func_440("pro_burned_nav");
		__LIB_0__::func_401(1423681694);
		__LIB_0__::func_401(775893260);
		__LIB_0__::func_401(joaat("PRO_MANSION_INT_MILO"));
		__LIB_0__::func_401(joaat("PRO_BARN_INT_MILO"));
		__LIB_0__::func_401(1031662866);
		__LIB_0__::func_401(-1041976064);
		__LIB_0__::func_401(joaat("PRO_ES_01_WORKERHOUSE"));
		__LIB_0__::func_401(-436084091);
		__LIB_0__::func_401(-868830916);
		__LIB_0__::func_401(joaat("PRO_WRKSHP_INT_MILO"));
		__LIB_0__::func_401(-262959893);
		__LIB_0__::func_401(1049886174);
		__LIB_0__::func_401(-1042390616);
		__LIB_0__::func_401(2038589758);
		__LIB_5__::func_441("pro_fence_broken_nav");
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(22, 16);
			__LIB_8__::func_784(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (__LIB_0__::func_898(-1056767524))
	{
		if (__LIB_1__::func_533(536870912) == 0)
		{
			__LIB_5__::func_548(536870912);
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_PRONGHORNRANCH"), -2550f, 400f, 0, 0);
		}
		__LIB_0__::func_400(-436084091);
		__LIB_0__::func_400(-1552951782);
		__LIB_0__::func_400(-1142569437);
		__LIB_0__::func_400(474113610);
		__LIB_0__::func_400(-297340751);
		__LIB_0__::func_400(1802934313);
		__LIB_0__::func_400(2108112010);
		__LIB_0__::func_400(1208537422);
		__LIB_0__::func_400(361734047);
		__LIB_0__::func_400(446554495);
		__LIB_0__::func_400(-118700196);
		__LIB_0__::func_400(-735136865);
		__LIB_0__::func_400(636278554);
		__LIB_5__::func_440("pro_empty_nav");
		__LIB_5__::func_440("pro_fence_broken_nav");
		__LIB_5__::func_440("pro_burned_nav");
		__LIB_0__::func_401(1423681694);
		__LIB_0__::func_401(775893260);
		__LIB_0__::func_401(-329355129);
		__LIB_0__::func_401(2117211184);
		__LIB_0__::func_401(joaat("PRO_MANSION_INT_MILO"));
		__LIB_0__::func_401(joaat("PRO_BARN_INT_MILO"));
		__LIB_0__::func_401(1031662866);
		__LIB_0__::func_401(-1041976064);
		__LIB_0__::func_401(joaat("PRO_ES_01_WORKERHOUSE"));
		__LIB_0__::func_401(1221694281);
		__LIB_0__::func_401(-868830916);
		__LIB_0__::func_401(joaat("PRO_WRKSHP_INT_MILO"));
		__LIB_0__::func_401(-262959893);
		__LIB_0__::func_401(1049886174);
		__LIB_0__::func_401(-1042390616);
		__LIB_0__::func_401(2038589758);
		__LIB_5__::func_441("pro_fence_fixed_nav");
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(22, 16);
			__LIB_8__::func_784(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (__LIB_0__::func_898(-182889087))
	{
		if (__LIB_1__::func_533(536870912) == 0)
		{
			__LIB_5__::func_548(536870912);
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_PRONGHORNRANCH"), -2550f, 400f, 0, 0);
		}
		__LIB_0__::func_400(-436084091);
		__LIB_0__::func_400(-1552951782);
		__LIB_0__::func_400(-1142569437);
		__LIB_0__::func_400(474113610);
		__LIB_0__::func_400(-297340751);
		__LIB_0__::func_400(1802934313);
		__LIB_0__::func_400(2108112010);
		__LIB_0__::func_400(1208537422);
		__LIB_0__::func_400(361734047);
		__LIB_0__::func_400(446554495);
		__LIB_0__::func_400(-1042390616);
		__LIB_5__::func_440("pro_empty_nav");
		__LIB_5__::func_440("pro_fence_broken_nav");
		__LIB_5__::func_440("pro_fence_fixed_nav");
		__LIB_0__::func_401(1423681694);
		__LIB_0__::func_401(joaat("PRO_MANSION_INT_MILO"));
		__LIB_0__::func_401(joaat("PRO_BARN_INT_MILO"));
		__LIB_0__::func_401(1031662866);
		__LIB_0__::func_401(-1041976064);
		__LIB_0__::func_401(joaat("PRO_ES_01_WORKERHOUSE"));
		__LIB_0__::func_401(1221694281);
		__LIB_0__::func_401(-868830916);
		__LIB_0__::func_401(joaat("PRO_WRKSHP_INT_MILO"));
		__LIB_0__::func_401(-262959893);
		__LIB_0__::func_401(1049886174);
		__LIB_0__::func_401(-118700196);
		__LIB_0__::func_401(-735136865);
		__LIB_0__::func_401(636278554);
		__LIB_0__::func_401(2038589758);
		__LIB_5__::func_441("pro_burned_nav");
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(22, 16);
			__LIB_8__::func_784(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else
	{
		if (__LIB_1__::func_533(536870912))
		{
			__LIB_5__::func_547(536870912);
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_PRONGHORNRANCH"));
		}
		__LIB_0__::func_400(1423681694);
		__LIB_0__::func_400(joaat("PRO_MANSION_INT_MILO"));
		__LIB_0__::func_400(joaat("PRO_BARN_INT_MILO"));
		__LIB_0__::func_400(1031662866);
		__LIB_0__::func_400(-1041976064);
		__LIB_0__::func_400(joaat("PRO_ES_01_WORKERHOUSE"));
		__LIB_0__::func_400(1221694281);
		__LIB_0__::func_400(-436084091);
		__LIB_0__::func_400(joaat("PRO_WRKSHP_INT_MILO"));
		__LIB_0__::func_400(-262959893);
		__LIB_0__::func_400(1049886174);
		__LIB_0__::func_400(-1042390616);
		__LIB_0__::func_400(-118700196);
		__LIB_0__::func_400(-735136865);
		__LIB_0__::func_400(636278554);
		__LIB_0__::func_400(2038589758);
		__LIB_0__::func_400(775893260);
		__LIB_5__::func_440("pro_fence_broken_nav");
		__LIB_5__::func_440("pro_fence_fixed_nav");
		__LIB_5__::func_440("pro_burned_nav");
		__LIB_0__::func_401(-1552951782);
		__LIB_0__::func_401(-1142569437);
		__LIB_0__::func_401(474113610);
		__LIB_0__::func_401(-297340751);
		__LIB_0__::func_401(-868830916);
		__LIB_0__::func_401(1802934313);
		__LIB_0__::func_401(2108112010);
		__LIB_0__::func_401(1208537422);
		__LIB_0__::func_401(361734047);
		__LIB_0__::func_401(446554495);
		__LIB_5__::func_441("pro_empty_nav");
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_24(22, 16);
			__LIB_17__::func_447(22);
		}
		if (!PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2) && !bParam1)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[22 /*35*/].f_3))
			{
				Global_1934765.f_2 = PED::_0x4C39C95AE5DB1329(Global_1888801[22 /*35*/].f_4, 0, 15);
			}
		}
	}
	if (__LIB_0__::func_898(2019386373))
	{
		__LIB_0__::func_400(-217646849);
		__LIB_0__::func_400(-694809996);
		__LIB_0__::func_400(-2053475031);
		__LIB_0__::func_401(-279703229);
		__LIB_0__::func_401(-623091266);
	}
	else if (__LIB_0__::func_898(-664252410))
	{
		__LIB_0__::func_400(-279703229);
		__LIB_0__::func_400(-2053475031);
		__LIB_0__::func_401(-217646849);
		__LIB_0__::func_401(-694809996);
		__LIB_0__::func_401(-623091266);
	}
	else if (__LIB_0__::func_898(2109952320))
	{
		__LIB_0__::func_400(-279703229);
		__LIB_0__::func_400(-217646849);
		__LIB_0__::func_400(-623091266);
		__LIB_0__::func_401(-694809996);
		__LIB_0__::func_401(-2053475031);
	}
	if (__LIB_0__::func_898(2024121624))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", false);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", true);
	}
	if (__LIB_0__::func_898(-1077783786))
	{
		__LIB_0__::func_400(-961488528);
		__LIB_0__::func_401(-1569624057);
	}
	else
	{
		__LIB_0__::func_400(-1569624057);
		__LIB_0__::func_401(-961488528);
	}
	if (__LIB_0__::func_898(-299522880))
	{
		__LIB_0__::func_401(131323483);
		__LIB_0__::func_400(-134556459);
	}
	else
	{
		__LIB_0__::func_400(131323483);
		__LIB_0__::func_401(-134556459);
	}
	if (__LIB_0__::func_293(45))
	{
		__LIB_0__::func_400(joaat("WAP_RAINSFALLS_BASE"));
		__LIB_0__::func_400(661576070);
		__LIB_0__::func_400(795060201);
		__LIB_0__::func_400(1003623269);
		__LIB_0__::func_400(-395621323);
		__LIB_0__::func_400(-924329535);
		__LIB_0__::func_401(739805687);
		__LIB_0__::func_401(-243627670);
		__LIB_0__::func_401(-198004806);
		__LIB_5__::func_441("nav_wapiti_es");
	}
	else
	{
		__LIB_0__::func_400(739805687);
		__LIB_0__::func_400(-243627670);
		__LIB_0__::func_400(-198004806);
		__LIB_5__::func_440("nav_wapiti_es");
		__LIB_0__::func_401(1003623269);
		__LIB_0__::func_401(-924329535);
		__LIB_0__::func_401(-395621323);
		if (__LIB_0__::func_898(-389056691))
		{
			__LIB_0__::func_400(661576070);
			__LIB_0__::func_401(joaat("WAP_RAINSFALLS_BASE"));
			__LIB_0__::func_401(795060201);
		}
		else
		{
			__LIB_0__::func_400(795060201);
			__LIB_0__::func_401(joaat("WAP_RAINSFALLS_BASE"));
			__LIB_0__::func_401(661576070);
		}
	}
	if (__LIB_0__::func_898(-1824738758))
	{
		__LIB_0__::func_401(1489268640);
	}
	else
	{
		__LIB_0__::func_400(1489268640);
	}
	__LIB_10__::func_800();
	if (__LIB_0__::func_898(1221801385))
	{
		if (!Global_1934765.f_297)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_HOUSEBOAT"), 2300f, -330f, 0, 0);
			Global_1934765.f_297 = 1;
		}
	}
	else if (Global_1934765.f_297)
	{
		MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_HOUSEBOAT"));
		Global_1934765.f_297 = 0;
	}
	if (__LIB_0__::func_898(-306246697))
	{
		if (!Global_1934765.f_298)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_VANHORNBOAT"), 3012.5f, 507.5f, 0, 0);
			Global_1934765.f_298 = 1;
		}
	}
	else if (Global_1934765.f_298)
	{
		MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_VANHORNBOAT"));
		Global_1934765.f_298 = 0;
	}
	if (__LIB_0__::func_898(-1847672446))
	{
		if (!Global_1934765.f_299)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_STDENISBOAT"), 2700f, -1600f, 0, 0);
			Global_1934765.f_299 = 1;
		}
	}
	else if (Global_1934765.f_299)
	{
		MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_STDENISBOAT"));
		Global_1934765.f_299 = 0;
	}
	if (!__LIB_0__::func_898(-789397228))
	{
		__LIB_0__::func_401(-614421509);
		__LIB_0__::func_401(604920544);
		__LIB_0__::func_401(joaat("SER_01_GRANDKOR3"));
		if (__LIB_0__::func_898(-2022369555))
		{
			__LIB_0__::func_401(-1716205818);
			__LIB_0__::func_400(-276259505);
		}
		else
		{
			__LIB_0__::func_401(-276259505);
			__LIB_0__::func_400(-1716205818);
		}
		if (!Global_1934765.f_295 && __LIB_3__::func_222(5))
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_GRANDKORRIGANBOAT"), 3290f, -1310f, 0, 0);
			Global_1934765.f_295 = 1;
			MAP::_0xD8C7162AB2E2AF45(1944800674);
		}
	}
	else
	{
		__LIB_0__::func_400(-614421509);
		__LIB_0__::func_400(604920544);
		__LIB_0__::func_400(joaat("SER_01_GRANDKOR3"));
		__LIB_0__::func_400(-276259505);
		__LIB_0__::func_400(-1716205818);
		if (Global_1934765.f_295)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_GRANDKORRIGANBOAT"));
			Global_1934765.f_295 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(1944800674);
		}
	}
	if (__LIB_0__::func_898(1358491857))
	{
		__LIB_0__::func_401(1056170594);
		__LIB_0__::func_401(-873881483);
		__LIB_0__::func_401(146172383);
		if (__LIB_0__::func_898(723021499))
		{
			__LIB_0__::func_401(joaat("NEW_BOATS_01_GRANDKOR3"));
			__LIB_0__::func_400(1157695860);
		}
		else
		{
			__LIB_0__::func_401(1157695860);
			__LIB_0__::func_400(joaat("NEW_BOATS_01_GRANDKOR3"));
		}
		if (!Global_1934765.f_294 && __LIB_3__::func_222(5))
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_GRANDKORRIGANBOATDOCKED"), 2870f, -1400f, 0, 0);
			Global_1934765.f_294 = 1;
			MAP::_0xD8C7162AB2E2AF45(-296815465);
		}
	}
	else
	{
		__LIB_0__::func_400(1056170594);
		__LIB_0__::func_400(-873881483);
		__LIB_0__::func_400(joaat("NEW_BOATS_01_GRANDKOR3"));
		__LIB_0__::func_400(1157695860);
		__LIB_0__::func_400(146172383);
		if (Global_1934765.f_294)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_GRANDKORRIGANBOATDOCKED"));
			Global_1934765.f_294 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(-296815465);
		}
	}
	__LIB_10__::func_742();
	StringCopy(&cVar1, "nav_sdn_docks_", 64);
	if (__LIB_0__::func_898(1358491857))
	{
		StringConCat(&cVar1, "korrigan_", 64);
	}
	if (__LIB_0__::func_898(-1825294305))
	{
		StringConCat(&cVar1, "antenor_", 64);
		__LIB_0__::func_401(-445068262);
		__LIB_0__::func_401(-1688366042);
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, false);
		}
	}
	else
	{
		__LIB_0__::func_400(-445068262);
		__LIB_0__::func_400(-1688366042);
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, true);
		}
	}
	if (__LIB_0__::func_898(522677506))
	{
		__LIB_0__::func_401(1048677741);
		__LIB_0__::func_401(-2035101386);
		__LIB_0__::func_401(1284188544);
		__LIB_0__::func_401(1520435387);
		__LIB_0__::func_401(876228895);
		StringConCat(&cVar1, "trains_", 64);
	}
	else
	{
		__LIB_0__::func_400(1048677741);
		__LIB_0__::func_400(-2035101386);
		__LIB_0__::func_400(1284188544);
		__LIB_0__::func_400(1520435387);
		__LIB_0__::func_400(876228895);
	}
	if (!__LIB_0__::func_293(45))
	{
		__LIB_0__::func_400(-274080837);
		__LIB_0__::func_400(-1036688493);
		__LIB_0__::func_400(-1512794226);
		__LIB_0__::func_400(913995529);
		__LIB_0__::func_401(481139295);
		__LIB_0__::func_401(165972019);
		__LIB_0__::func_401(1679182807);
		__LIB_0__::func_401(-1986089134);
		StringConCat(&cVar1, "pre_es", 64);
	}
	else
	{
		__LIB_0__::func_400(481139295);
		__LIB_0__::func_400(165972019);
		__LIB_0__::func_400(1679182807);
		__LIB_0__::func_400(-1986089134);
		__LIB_0__::func_401(-274080837);
		__LIB_0__::func_401(-1036688493);
		__LIB_0__::func_401(-1512794226);
		__LIB_0__::func_401(913995529);
		StringConCat(&cVar1, "es", 64);
	}
	__LIB_5__::func_441(&cVar1);
	if (__LIB_0__::func_898(171499483))
	{
		__LIB_0__::func_400(-890900091);
		__LIB_0__::func_401(-1758697759);
	}
	else
	{
		__LIB_0__::func_400(-1758697759);
		__LIB_0__::func_401(-890900091);
	}
	if (__LIB_0__::func_898(235928616))
	{
		__LIB_0__::func_400(joaat("COM_MULESHED"));
		__LIB_0__::func_400(1926336063);
		__LIB_0__::func_400(-800534102);
		__LIB_5__::func_440("nav_crn1_barn");
		__LIB_0__::func_401(-886310806);
		__LIB_5__::func_441("nav_crn1_barn_burnt");
	}
	else
	{
		__LIB_0__::func_400(-886310806);
		__LIB_5__::func_440("nav_crn1_barn_burnt");
		__LIB_0__::func_401(joaat("COM_MULESHED"));
		__LIB_0__::func_401(1926336063);
		__LIB_0__::func_401(-800534102);
		__LIB_5__::func_441("nav_crn1_barn");
	}
	if (__LIB_0__::func_898(345808947))
	{
		__LIB_4__::func_524(190);
		__LIB_4__::func_495(189);
	}
	else
	{
		__LIB_4__::func_524(189);
		__LIB_4__::func_495(190);
	}
	if (__LIB_0__::func_898(1167397384))
	{
		__LIB_0__::func_400(1736386364);
	}
	else
	{
		__LIB_0__::func_401(1736386364);
	}
	if (__LIB_0__::func_898(2024769126))
	{
		__LIB_0__::func_400(516817794);
	}
	else
	{
		__LIB_0__::func_401(516817794);
	}
	if (__LIB_0__::func_898(-154581735))
	{
		__LIB_0__::func_400(-262371610);
	}
	else
	{
		__LIB_0__::func_401(-262371610);
	}
	if (__LIB_0__::func_898(-1530132748))
	{
		__LIB_0__::func_400(-389510791);
	}
	else
	{
		__LIB_0__::func_401(-389510791);
	}
	if (__LIB_0__::func_898(976539083))
	{
		__LIB_0__::func_400(71064384);
	}
	else
	{
		__LIB_0__::func_401(71064384);
	}
	__LIB_0__::func_401(579127040);
	__LIB_0__::func_401(-2011620387);
	if (__LIB_0__::func_898(409602249))
	{
		__LIB_0__::func_401(677191274);
	}
	else
	{
		__LIB_0__::func_400(677191274);
	}
	if (__LIB_0__::func_898(651395116))
	{
		__LIB_0__::func_401(joaat("DIS_SCM_00_KIERAN_GRAVE"));
	}
	else
	{
		__LIB_0__::func_400(joaat("DIS_SCM_00_KIERAN_GRAVE"));
	}
	if (__LIB_0__::func_898(1488286867))
	{
		__LIB_0__::func_401(516308968);
	}
	else
	{
		__LIB_0__::func_400(516308968);
	}
	if (__LIB_0__::func_898(665676602))
	{
		__LIB_0__::func_401(1308321372);
	}
	else
	{
		__LIB_0__::func_400(1308321372);
	}
	if (__LIB_0__::func_898(8924991))
	{
		__LIB_0__::func_401(-449454773);
	}
	else
	{
		__LIB_0__::func_400(-449454773);
	}
	if (__LIB_0__::func_898(932909855))
	{
		__LIB_0__::func_401(-1754541271);
		__LIB_0__::func_401(-1363999915);
		__LIB_0__::func_401(-1116430120);
	}
	else
	{
		__LIB_0__::func_400(-1754541271);
		__LIB_0__::func_400(-1363999915);
		__LIB_0__::func_400(-1116430120);
	}
	if (__LIB_0__::func_898(2051822093))
	{
		__LIB_0__::func_401(-163883900);
	}
	else
	{
		__LIB_0__::func_400(-163883900);
	}
	if (__LIB_0__::func_898(-1241340344))
	{
		__LIB_0__::func_401(-1010679388);
	}
	else
	{
		__LIB_0__::func_400(-1010679388);
	}
	if (__LIB_0__::func_898(-1558439474))
	{
		__LIB_0__::func_401(1033367448);
	}
	else
	{
		__LIB_0__::func_400(1033367448);
	}
	if (__LIB_0__::func_898(2077022393))
	{
		__LIB_0__::func_400(391022529);
		__LIB_0__::func_400(-1560636071);
		__LIB_0__::func_400(1870870569);
		__LIB_0__::func_400(-904833761);
		__LIB_0__::func_400(1713084298);
		__LIB_0__::func_400(928528900);
		__LIB_0__::func_401(-2118853492);
		__LIB_0__::func_401(-597126658);
	}
	else
	{
		__LIB_0__::func_400(-2118853492);
		__LIB_0__::func_400(-597126658);
		if (__LIB_0__::func_898(1583012985))
		{
			__LIB_0__::func_400(391022529);
			__LIB_0__::func_400(-1560636071);
			__LIB_0__::func_401(1713084298);
		}
		else
		{
			__LIB_0__::func_400(1713084298);
			__LIB_0__::func_401(391022529);
			__LIB_0__::func_401(-1560636071);
		}
		if (__LIB_0__::func_898(479419429))
		{
			__LIB_0__::func_400(1870870569);
			__LIB_0__::func_400(-904833761);
			__LIB_0__::func_401(928528900);
		}
		else
		{
			__LIB_0__::func_400(928528900);
			__LIB_0__::func_401(1870870569);
			__LIB_0__::func_401(-904833761);
		}
	}
	if (__LIB_0__::func_898(-1556423728))
	{
		__LIB_0__::func_401(-1023331176);
	}
	else
	{
		__LIB_0__::func_400(-1023331176);
	}
	if (__LIB_0__::func_898(-144653976))
	{
		__LIB_0__::func_401(-1809571159);
	}
	else
	{
		__LIB_0__::func_400(-1809571159);
	}
	if (__LIB_0__::func_898(-351362068))
	{
		__LIB_0__::func_401(-2071756699);
	}
	else
	{
		__LIB_0__::func_400(-2071756699);
	}
	if (__LIB_0__::func_898(-939114198))
	{
		__LIB_0__::func_401(-1625703283);
	}
	else
	{
		__LIB_0__::func_400(-1625703283);
	}
	if (__LIB_0__::func_898(-1318987693))
	{
		__LIB_0__::func_401(-1696865897);
	}
	else
	{
		__LIB_0__::func_400(-1696865897);
	}
	if (__LIB_0__::func_898(-545450213))
	{
		__LIB_0__::func_400(-1950049852);
		__LIB_0__::func_401(-724913398);
	}
	else
	{
		__LIB_0__::func_400(-724913398);
		__LIB_0__::func_401(-1950049852);
	}
	__LIB_5__::func_440("railroad_stageMP");
	if (__LIB_0__::func_898(-2101264851))
	{
		__LIB_0__::func_401(1858796535);
		__LIB_0__::func_401(945532872);
		__LIB_0__::func_401(-2043326480);
		__LIB_0__::func_401(992791293);
		__LIB_0__::func_401(-1815023148);
		__LIB_0__::func_401(731209239);
		__LIB_0__::func_401(1531008020);
		__LIB_0__::func_401(-952533419);
		__LIB_0__::func_401(582879672);
		__LIB_0__::func_401(1750312025);
		__LIB_0__::func_401(-759698431);
		__LIB_0__::func_401(59954835);
		__LIB_0__::func_401(-1461922204);
		__LIB_0__::func_401(2079207010);
		__LIB_0__::func_401(-1360840312);
		__LIB_0__::func_401(-816857367);
	}
	else
	{
		__LIB_0__::func_400(1858796535);
		__LIB_0__::func_400(945532872);
		__LIB_0__::func_400(-2043326480);
		__LIB_0__::func_400(992791293);
		__LIB_0__::func_400(-1815023148);
		__LIB_0__::func_400(731209239);
		__LIB_0__::func_400(1531008020);
		__LIB_0__::func_400(-952533419);
		__LIB_0__::func_400(582879672);
		__LIB_0__::func_400(1750312025);
		__LIB_0__::func_400(-759698431);
		__LIB_0__::func_400(59954835);
		__LIB_0__::func_400(-1461922204);
		__LIB_0__::func_400(2079207010);
		__LIB_0__::func_400(-1360840312);
		__LIB_0__::func_400(-816857367);
	}
	if (__LIB_0__::func_898(434558613))
	{
		__LIB_0__::func_401(-715865581);
		__LIB_0__::func_400(-1387511711);
		__LIB_0__::func_400(1901132483);
		__LIB_0__::func_400(-2082345587);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", true);
		__LIB_5__::func_440("rmllr_cabin_normal");
		__LIB_5__::func_441("rmllr_cabin_burnt");
	}
	else
	{
		__LIB_0__::func_401(-1387511711);
		__LIB_0__::func_401(1901132483);
		__LIB_0__::func_400(-2082345587);
		__LIB_0__::func_400(-715865581);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", false);
		__LIB_5__::func_440("rmllr_cabin_burnt");
		__LIB_5__::func_441("rmllr_cabin_normal");
	}
	if (__LIB_0__::func_898(1186594126))
	{
		__LIB_0__::func_401(joaat("CVB_MURDERTREE"));
	}
	else
	{
		__LIB_0__::func_400(joaat("CVB_MURDERTREE"));
	}
	if (__LIB_0__::func_898(469053995))
	{
		__LIB_0__::func_401(joaat("M_07_P_MURDERROCK"));
	}
	else
	{
		__LIB_0__::func_400(joaat("M_07_P_MURDERROCK"));
	}
	if (__LIB_0__::func_898(476714362))
	{
		__LIB_0__::func_401(joaat("M_09_P_CAMPFIREMURDER"));
	}
	else
	{
		__LIB_0__::func_400(joaat("M_09_P_CAMPFIREMURDER"));
	}
	if (__LIB_0__::func_898(1947931439))
	{
		__LIB_0__::func_401(1628286919);
		__LIB_0__::func_400(joaat("NEW_COM_07_NOHOTEL"));
		__LIB_0__::func_400(joaat("NEW_COM_07_WIN"));
	}
	else
	{
		__LIB_0__::func_401(joaat("NEW_COM_07_NOHOTEL"));
		__LIB_0__::func_401(joaat("NEW_COM_07_WIN"));
		__LIB_0__::func_400(1628286919);
	}
	if (__LIB_0__::func_898(-879507474))
	{
		__LIB_0__::func_400(1928252407);
		__LIB_0__::func_401(-98843293);
	}
	else
	{
		__LIB_0__::func_400(-98843293);
		__LIB_0__::func_401(1928252407);
	}
	if (__LIB_0__::func_898(1050128548))
	{
		__LIB_0__::func_401(joaat("RE_SP_SAVAGEWARNING_01"));
	}
	else
	{
		__LIB_0__::func_400(joaat("RE_SP_SAVAGEWARNING_01"));
	}
	if (__LIB_0__::func_898(868326136))
	{
		__LIB_0__::func_401(joaat("RE_SP_SAVAGEWARNING_02"));
	}
	else
	{
		__LIB_0__::func_400(joaat("RE_SP_SAVAGEWARNING_02"));
	}
	if (__LIB_0__::func_898(-515561750))
	{
		__LIB_0__::func_400(-892659042);
		__LIB_0__::func_400(30201771);
		__LIB_0__::func_401(517553365);
		__LIB_5__::func_441("mud4_saloon_fight");
	}
	else if (__LIB_0__::func_898(26245360))
	{
		__LIB_5__::func_440("mud4_saloon_fight");
		__LIB_0__::func_400(30201771);
		__LIB_0__::func_401(-2083943324);
		__LIB_0__::func_401(517553365);
		__LIB_5__::func_441("mud4_saloon_fight_start");
	}
	else
	{
		__LIB_5__::func_440("mud4_saloon_fight_start");
		__LIB_5__::func_440("mud4_saloon_fight");
		__LIB_0__::func_400(517553365);
		__LIB_0__::func_400(-2083943324);
		__LIB_0__::func_401(30201771);
	}
	if (__LIB_0__::func_898(-1060078174))
	{
		if (__LIB_0__::func_293(45))
		{
			__LIB_0__::func_400(joaat("K_11_P_MARY1_CAMP"));
			__LIB_5__::func_440("MS_MARY1_CAMP");
			__LIB_0__::func_401(joaat("K_11_P_CHELONIAN_CAMP"));
			__LIB_5__::func_441("MS_CHELONIAN_CAMP");
		}
		else
		{
			__LIB_0__::func_400(joaat("K_11_P_CHELONIAN_CAMP"));
			__LIB_5__::func_440("MS_CHELONIAN_CAMP");
			__LIB_0__::func_401(joaat("K_11_P_MARY1_CAMP"));
			__LIB_5__::func_441("MS_MARY1_CAMP");
		}
		__LIB_10__::func_743(&(Global_1934765.f_17), 928.2264f, 1345.357f, 194.5221f, 4.5f);
		__LIB_10__::func_743(&(Global_1934765.f_18), 922.5641f, 1346.623f, 194.7151f, 3f);
		__LIB_10__::func_743(&(Global_1934765.f_19), 920.8331f, 1340.152f, 194.182f, 3.5f);
	}
	else
	{
		__LIB_0__::func_400(joaat("K_11_P_MARY1_CAMP"));
		__LIB_0__::func_400(joaat("K_11_P_CHELONIAN_CAMP"));
		__LIB_10__::func_744(&(Global_1934765.f_17), 1);
		__LIB_10__::func_744(&(Global_1934765.f_18), 1);
		__LIB_10__::func_744(&(Global_1934765.f_19), 1);
	}
	if (__LIB_0__::func_898(817925178))
	{
		__LIB_0__::func_401(-1417469821);
	}
	else
	{
		__LIB_0__::func_400(-1417469821);
	}
	if (__LIB_0__::func_898(-785605431))
	{
	}
	else
	{
		__LIB_0__::func_400(146172383);
	}
	if (__LIB_0__::func_898(1557082963))
	{
		__LIB_0__::func_400(joaat("C_13_NOTRAP_01"));
		__LIB_0__::func_400(765343099);
		__LIB_0__::func_401(-909306169);
	}
	else if (__LIB_0__::func_898(-350863510))
	{
		__LIB_0__::func_400(joaat("C_13_NOTRAP_01"));
		__LIB_0__::func_400(-909306169);
		__LIB_0__::func_401(765343099);
	}
	else
	{
		__LIB_0__::func_400(765343099);
		__LIB_0__::func_400(-909306169);
		__LIB_0__::func_401(joaat("C_13_NOTRAP_01"));
	}
	if (__LIB_0__::func_898(-1952856164))
	{
		__LIB_0__::func_400(-890900091);
		__LIB_0__::func_400(-1758697759);
		__LIB_0__::func_401(591001924);
	}
	else if (__LIB_0__::func_898(249726958))
	{
		__LIB_0__::func_400(-890900091);
		__LIB_0__::func_400(591001924);
		__LIB_0__::func_401(-1758697759);
	}
	else
	{
		__LIB_0__::func_400(-1758697759);
		__LIB_0__::func_400(591001924);
		__LIB_0__::func_401(-890900091);
	}
	if (__LIB_0__::func_898(-99303535))
	{
		__LIB_0__::func_400(-2092712551);
		__LIB_0__::func_401(-1307469679);
	}
	else if (__LIB_0__::func_898(1433244935))
	{
		__LIB_0__::func_400(-1307469679);
		__LIB_0__::func_401(-2092712551);
	}
	else
	{
		__LIB_0__::func_400(-2092712551);
		__LIB_0__::func_400(-1307469679);
	}
	__LIB_10__::func_801(1512816328, joaat("GANG_SKINAFTERMATH_LOC01_01"));
	__LIB_10__::func_801(1207048789, joaat("GANG_SKINAFTERMATH_LOC02_01"));
	__LIB_10__::func_801(-1230112817, joaat("GANG_SKINAFTERMATH_LOC03_01"));
	__LIB_10__::func_801(-1278074582, joaat("GANG_SKINAFTERMATH_LOC01_02"));
	__LIB_10__::func_801(-1436021162, joaat("GANG_SKINAFTERMATH_LOC02_02"));
	__LIB_10__::func_801(407136781, joaat("GANG_SKINAFTERMATH_LOC03_02"));
	if (__LIB_0__::func_898(-978957786))
	{
		__LIB_0__::func_401(1111220101);
		__LIB_0__::func_401(1372565859);
		__LIB_0__::func_401(1644962309);
		if (!Global_1934765.f_296 && __LIB_3__::func_222(127))
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_THIEVESLANDINGBOAT"), -1350f, -2300f, 0, 0);
			Global_1934765.f_296 = 1;
		}
	}
	else
	{
		__LIB_0__::func_400(1111220101);
		__LIB_0__::func_400(1372565859);
		__LIB_0__::func_400(1644962309);
		if (Global_1934765.f_296)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_THIEVESLANDINGBOAT"));
			Global_1934765.f_296 = 0;
		}
	}
	if (__LIB_0__::func_898(559573222))
	{
		__LIB_0__::func_400(1137646647);
		__LIB_0__::func_401(-898081380);
	}
	else
	{
		__LIB_0__::func_400(-898081380);
		__LIB_0__::func_401(1137646647);
	}
	if (__LIB_0__::func_898(-1818850842))
	{
		__LIB_0__::func_400(1584946069);
	}
	else
	{
		__LIB_0__::func_401(1584946069);
	}
	if (__LIB_0__::func_898(-792853067))
	{
		__LIB_0__::func_400(-1828030290);
		__LIB_0__::func_401(827269092);
	}
	else
	{
		__LIB_0__::func_401(-1828030290);
		__LIB_0__::func_400(827269092);
	}
	if (__LIB_0__::func_898(1151197909))
	{
		__LIB_4__::func_495(165);
	}
	else
	{
		__LIB_4__::func_524(165);
	}
	if (__LIB_0__::func_898(-828139293))
	{
		__LIB_0__::func_400(1364392658);
		__LIB_0__::func_401(-794503195);
		__LIB_5__::func_441("nts3_no_bridge");
		if (!Global_1934765.f_293)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BRIDGEDESTROYED"), 512f, 1756f, 0, 0);
			Global_1934765.f_293 = 1;
		}
	}
	else
	{
		__LIB_0__::func_400(-794503195);
		__LIB_0__::func_401(1364392658);
		__LIB_5__::func_440("nts3_no_bridge");
		if (Global_1934765.f_293)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BRIDGEDESTROYED"));
			Global_1934765.f_293 = 0;
		}
	}
	if (__LIB_0__::func_898(-464836488))
	{
		__LIB_0__::func_400(-1192199739);
		__LIB_0__::func_401(-65072454);
	}
	else
	{
		__LIB_0__::func_400(-65072454);
		__LIB_0__::func_401(-1192199739);
	}
	if (__LIB_0__::func_898(-233743613))
	{
		__LIB_0__::func_401(1692451176);
	}
	else
	{
		__LIB_0__::func_400(1692451176);
	}
	if (__LIB_0__::func_898(1203043430))
	{
		__LIB_0__::func_401(-102951407);
	}
	else
	{
		__LIB_0__::func_400(-102951407);
	}
	if (__LIB_0__::func_898(299694527))
	{
		__LIB_0__::func_401(1833824812);
	}
	else
	{
		__LIB_0__::func_400(1833824812);
	}
	if (__LIB_0__::func_317() == 2)
	{
		if (__LIB_0__::func_898(-1949204933))
		{
			__LIB_0__::func_400(1734859244);
			__LIB_0__::func_401(719147410);
		}
		else
		{
			__LIB_0__::func_401(1734859244);
			__LIB_0__::func_400(719147410);
		}
	}
	if (!__LIB_2__::func_774(4))
	{
		if (__LIB_0__::func_317() == 1 && __LIB_0__::func_592() == 1)
		{
			if (__LIB_0__::func_898(442317566))
			{
				__LIB_0__::func_400(1948051928);
				__LIB_0__::func_401(1453569688);
			}
			else
			{
				__LIB_0__::func_401(1948051928);
				__LIB_0__::func_400(1453569688);
			}
		}
		else
		{
			__LIB_0__::func_400(1453569688);
			__LIB_0__::func_400(1948051928);
		}
	}
	if (__LIB_0__::func_898(-736853952))
	{
		__LIB_0__::func_401(joaat("MISSION_SEAN_1"));
		__LIB_10__::func_741(joaat("MISSION_SEAN_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20f, 0, 1);
	}
	else
	{
		__LIB_0__::func_400(joaat("MISSION_SEAN_1"));
		__LIB_10__::func_740(joaat("MISSION_SEAN_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20f, 1, 1);
	}
	if (__LIB_0__::func_898(1478132521))
	{
		__LIB_0__::func_400(1759143160);
		__LIB_0__::func_401(398639187);
		__LIB_5__::func_440("reservation_abandoned");
		__LIB_5__::func_441("nav_sean1_camp");
	}
	else
	{
		__LIB_0__::func_400(398639187);
		__LIB_0__::func_401(1759143160);
	}
	if (__LIB_0__::func_898(-360036154))
	{
		__LIB_0__::func_400(1136457806);
		__LIB_0__::func_401(1255880931);
	}
	else
	{
		__LIB_0__::func_401(1136457806);
		__LIB_0__::func_400(1255880931);
	}
	if (__LIB_0__::func_898(2024383613))
	{
		__LIB_0__::func_400(-753844687);
		__LIB_0__::func_401(joaat("NAT_NATIVE1_COH_02"));
		__LIB_5__::func_441("ntv1_cohutta");
	}
	else
	{
		__LIB_0__::func_401(-753844687);
		__LIB_0__::func_400(joaat("NAT_NATIVE1_COH_02"));
		__LIB_5__::func_440("ntv1_cohutta");
	}
	if (__LIB_0__::func_898(-622554983))
	{
		__LIB_0__::func_401(joaat("NAT_NATIVE1_ARMY_01"));
		__LIB_5__::func_441("ntv1_armycamp");
		if (!Global_1934765.f_287)
		{
			__LIB_1__::func_994(798.2925f, 1509.681f, 203.7047f, 21f, "native1_camp", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
			Global_1934765.f_287 = 1;
		}
	}
	else
	{
		__LIB_0__::func_400(joaat("NAT_NATIVE1_ARMY_01"));
		__LIB_5__::func_440("ntv1_armycamp");
		if (Global_1934765.f_287)
		{
			__LIB_1__::func_222(798.2925f, 1509.681f, 203.7047f, 0);
			Global_1934765.f_287 = 0;
		}
	}
	if (__LIB_0__::func_898(1954026328))
	{
		__LIB_0__::func_401(-1835067413);
		__LIB_0__::func_400(-1392150519);
		__LIB_4__::func_495(226);
	}
	else
	{
		__LIB_0__::func_401(-1392150519);
		__LIB_0__::func_400(-1835067413);
		__LIB_4__::func_524(226);
	}
	if (__LIB_0__::func_898(-330120947))
	{
		__LIB_0__::func_401(joaat("SDS_WELL_COVER"));
	}
	else
	{
		__LIB_0__::func_400(joaat("SDS_WELL_COVER"));
	}
	if (__LIB_0__::func_898(-1764522338))
	{
		__LIB_0__::func_400(joaat("N_1114_WATERTOWER01_FEUD1"));
		__LIB_0__::func_401(joaat("N_1114_WATERTOWER01_DEFAULT"));
	}
	else
	{
		__LIB_0__::func_401(joaat("N_1114_WATERTOWER01_FEUD1"));
		__LIB_0__::func_400(joaat("N_1114_WATERTOWER01_DEFAULT"));
	}
	if (__LIB_0__::func_898(-76237062))
	{
		__LIB_0__::func_401(-1085363933);
		__LIB_0__::func_401(-537740003);
		__LIB_5__::func_441("trn1_nav_ann_shootout_00");
	}
	else
	{
		__LIB_0__::func_400(-1085363933);
		__LIB_0__::func_400(-537740003);
		__LIB_5__::func_440("trn1_nav_ann_shootout_00");
	}
	if (__LIB_0__::func_898(-333135263))
	{
		__LIB_0__::func_401(728046625);
	}
	else
	{
		__LIB_0__::func_400(728046625);
	}
	if (__LIB_0__::func_898(885203519))
	{
		__LIB_4__::func_495(228);
	}
	else
	{
		__LIB_4__::func_524(228);
	}
	if (__LIB_0__::func_898(-1080627546))
	{
		__LIB_4__::func_495(227);
	}
	else
	{
		__LIB_4__::func_524(227);
	}
	if (__LIB_0__::func_898(1522511407))
	{
		__LIB_0__::func_401(-929277449);
		__LIB_0__::func_401(-723094901);
		__LIB_0__::func_401(-801609437);
	}
	else
	{
		__LIB_0__::func_400(-929277449);
		__LIB_0__::func_400(-723094901);
		__LIB_0__::func_400(-801609437);
	}
	if (__LIB_0__::func_898(1446719356))
	{
		__LIB_0__::func_401(joaat("P_12P_BLACKWHITE_CAMP"));
	}
	else
	{
		__LIB_0__::func_400(joaat("P_12P_BLACKWHITE_CAMP"));
	}
	if (__LIB_0__::func_898(171107021))
	{
		__LIB_0__::func_401(joaat("N_11P_BLACKWHITE_SETUPCAMP"));
	}
	else
	{
		__LIB_0__::func_400(joaat("N_11P_BLACKWHITE_SETUPCAMP"));
	}
	return true;
}

void func_407()
{
	var uVar0;
	int iVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (((((CAM::IS_SCREEN_FADED_OUT() || Global_1879534.f_1) || Global_1879534) || __LIB_1__::func_927()) || __LIB_1__::func_195()) || __LIB_0__::func_13(128))
	{
		return;
	}
	if (__LIB_10__::func_634(8))
	{
		MISC::_0xDD560ABEF5D3784C(&uVar0, &iVar1);
		if (iVar1 == 0)
		{
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			__LIB_10__::func_635(8);
			if (__LIB_10__::func_634(16))
			{
				MISC::SET_RANDOM_WEATHER_TYPE(true, true);
				__LIB_10__::func_635(16);
			}
		}
	}
	func_1148();
	func_1149();
	func_1150();
	func_1151();
	func_1152();
	func_1153();
	func_1154();
}

void func_408()
{
	if (__LIB_0__::func_13(256))
	{
		__LIB_1__::func_84(256);
		return;
	}
	if (__LIB_0__::func_13(128))
	{
		return;
	}
	func_1156(&(Global_1934765.f_402));
	func_1157(&(Global_1934765.f_402));
	func_1158(&(Global_1934765.f_402));
	func_1159();
}

void func_409()
{
	int iVar0;
	bool bVar1;
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1934765.f_275[iVar0 /*2*/].f_1 > 0 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1934765.f_275[iVar0 /*2*/], false))
		{
			Global_1934765.f_286 = (Global_1934765.f_286 + Global_1934765.f_275[iVar0 /*2*/].f_1);
			Global_1934765.f_275[iVar0 /*2*/].f_1 = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (!bVar1)
	{
		if (STREAMING::_0x8A3945405B31048F() != __LIB_5__::func_274())
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		__LIB_6__::func_85();
	}
}

void func_410()
{
	Global_1899528.f_202 = 0;
	Global_1899528.f_203 = 0;
}

void func_411(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_34)
	{
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_412(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		func_1162(uParam0, iVar0);
		iVar0++;
	}
}

void func_416()
{
	__LIB_4__::func_845(0, 8);
	Global_1899528.f_217 = 0;
}

void func_431(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_34)
	{
		if (__LIB_1__::func_59(uParam0->f_34[iVar0]))
		{
			__LIB_9__::func_945(&(uParam0->f_34[iVar0]), 0);
		}
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

bool func_433(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!__LIB_0__::func_6(iParam1))
	{
		return true;
	}
	switch (Global_1391438.f_413)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (__LIB_0__::func_702(Global_1391438.f_7[iVar0 /*99*/].f_10))
				{
					__LIB_1__::func_559(Global_1391438.f_7[iVar0 /*99*/].f_10, 0, 2);
				}
				iVar0++;
			}
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_490, false))
			{
				SCRIPTS::_0x7DE4643157AD646C(Global_1391438.f_490);
			}
			__LIB_1__::func_706(uParam0);
			__LIB_1__::func_714();
			iVar1 = __LIB_12__::func_601(__LIB_0__::func_872(iParam1), 1);
			func_1173(&uVar2, &(Global_1391438.f_314), iVar1);
			func_1174(uParam0, &(Global_1391438.f_314));
			if (!__LIB_0__::func_702(uParam0->f_5) && !__LIB_1__::func_44(uParam0->f_5))
			{
				__LIB_1__::func_319(uParam0->f_5);
			}
			if (!__LIB_1__::func_44(uParam0->f_5))
			{
				__LIB_16__::func_436(uParam0->f_5, 1, 0);
			}
			uParam0->f_7 = uParam2;
			__LIB_0__::func_63(&(uParam0->f_9), 128, 1);
			Global_1391438.f_413 = 1;
			break;
		case 1:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1391438.f_314.f_42)))
			{
				SCRIPTS::REQUEST_SCRIPT(&(Global_1391438.f_314.f_42));
			}
			Global_1391438.f_413 = 2;
			break;
		case 2:
			if (!SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1391438.f_314.f_42)))
			{
				return false;
			}
			else
			{
				Global_1391438.f_413 = 3;
			}
			break;
		case 3:
			Global_1391438.f_490 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(MISC::GET_HASH_KEY(&(Global_1391438.f_314.f_42)), uParam0, 76, Global_1391438.f_314.f_66);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1391438.f_314.f_42));
			Global_1391438.f_413 = 4;
			break;
		case 4:
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_490, false))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_435(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<20> Var5;
	switch (Global_1391438.f_492)
	{
		case 0:
			if (__LIB_1__::func_220(__LIB_0__::func_61()))
			{
				if (bParam1)
				{
					if (func_1177(0))
					{
						func_437(&(Global_1391438.f_493));
						Global_1391438.f_492 = 1;
					}
				}
				else
				{
					func_437(&(Global_1391438.f_493));
					Global_1391438.f_492 = 1;
				}
			}
			break;
		case 1:
			Var0 = Global_1359489.f_21;
			if (iParam0 == -589165916)
			{
				Global_1391438.f_492 = 6;
				return true;
			}
			Var5.f_11 = 1;
			func_1178(&Var5, iParam0);
			Var0.f_1 = 0;
			func_1173(&Var0, &(Global_1391438.f_493), iParam0);
			if (__LIB_1__::func_302(Global_1391438.f_493, 2) == 0)
			{
				__LIB_3__::func_121(Global_1391438.f_493, 2, 0, -1);
			}
			__LIB_3__::func_121(Global_1391438.f_493, -2147483648, 1, -1);
			Global_1391438.f_493.f_12 = 0;
			Global_1391438.f_493.f_78 = { Var5 };
			Global_1391438.f_493.f_78.f_15 = 1;
			Global_1391438.f_492 = 2;
			break;
		case 2:
			SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1391438.f_493.f_58)));
			Global_1391438.f_492 = 3;
		case 3:
			if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(MISC::GET_HASH_KEY(&(Global_1391438.f_493.f_58))))
			{
				Global_1391438.f_492 = 4;
			}
			break;
		case 4:
			if (!__LIB_0__::func_702(Global_1391438.f_493.f_10) && !__LIB_1__::func_44(Global_1391438.f_493.f_10))
			{
				__LIB_1__::func_319(Global_1391438.f_493.f_10);
			}
			Global_1391438.f_592 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(MISC::GET_HASH_KEY(&(Global_1391438.f_493.f_58)), &(Global_1391438.f_493), 99, 6003);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1391438.f_493.f_58));
			if (__LIB_0__::func_750(&(Global_1391438.f_5), 4096))
			{
				Global_1391438.f_492 = 5;
			}
			else
			{
				Global_1391438.f_492 = 6;
			}
			break;
		case 5:
			Global_1359489.f_672 = 1;
			Global_1391438.f_492 = 6;
			break;
		case 6:
			Global_1391438.f_492 = 0;
			return true;
	}
	return false;
}

bool func_436(var uParam0)
{
	struct<76> Var0;
	if (!__LIB_0__::func_750(&(uParam0->f_31), 512))
	{
		SCRIPTS::REQUEST_SCRIPT(&(uParam0->f_42));
		__LIB_0__::func_63(&(uParam0->f_31), 512, 1);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_42)))
	{
		if (!SCRIPTS::HAS_SCRIPT_LOADED(&(uParam0->f_42)))
		{
			return false;
		}
		else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(uParam0->f_42))) > 0)
		{
			SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(uParam0->f_42)));
			return false;
		}
		else
		{
			Var0.f_41 = 1101004800;
			func_1174(&Var0, uParam0);
			Global_1391438.f_490 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(MISC::GET_HASH_KEY(&(uParam0->f_42)), &Var0, 76, uParam0->f_66);
			Global_1391438.f_414 = { Var0 };
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_42));
		}
	}
	return true;
}

void func_437(var uParam0)
{
	struct<79> Var0;
	Var0.f_9 = -589165916;
	Var0.f_78.f_11 = 1;
	MISC::_COPY_MEMORY(uParam0, &Var0, 99);
}

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 14;
		case 3:
			return 15;
		default:
			break;
	}
	return -1;
}

bool func_452()
{
	bool bVar0;
	int iVar1;
	if (((__LIB_1__::func_198(joaat("CSTAG_FLOW_BRT3_PRE"), 1) && __LIB_0__::func_317() == 2) || __LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1)) || __LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
	{
		return false;
	}
	switch (__LIB_0__::func_317())
	{
		case 3:
			if (!__LIB_1__::func_185(28))
			{
				return false;
			}
			break;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_490, false) || SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_592, false))
	{
		Global_1391438.f_6 = 6;
		return false;
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		Global_1391438.f_6 = 7;
		return false;
	}
	if (PED::_0x50F124E6EF188B22(Global_35))
	{
		Global_1391438.f_6 = 12;
		return false;
	}
	if (__LIB_0__::func_750(&(Global_1391438.f_5), 32))
	{
		Global_1391438.f_2 = -1;
		__LIB_0__::func_63(&(Global_1391438.f_5), 32, 0);
		Global_1391438.f_6 = 2;
		return true;
	}
	if (__LIB_0__::func_296(258, 0, 1))
	{
		Global_1391438.f_6 = 9;
		return false;
	}
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_206[iVar1], false))
		{
			bVar0 = false;
		}
		iVar1++;
	}
	if (bVar0)
	{
		Global_1391438.f_6 = 11;
		return false;
	}
	Global_1391438.f_6 = 1;
	return true;
}

bool func_455(var uParam0)
{
	int iVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	int iVar19;
	__LIB_0__::func_11("Attemping to find a valid activity to launch....", 1, 1);
	iVar11 = 0;
	iVar12 = 0;
	while (iVar12 < Global_40.f_6563.f_273)
	{
		if (func_1191(&(Global_40.f_6563.f_274[iVar12 /*20*/])))
		{
			iVar0[iVar11] = iVar12;
			iVar11++;
		}
		Global_40.f_6563.f_274[iVar12 /*20*/].f_18 = func_1192(&(Global_40.f_6563.f_274[iVar12 /*20*/]));
		iVar12++;
	}
	if (iVar11 <= 0)
	{
		__LIB_0__::func_11("--------------------------------------------------------", 1, 1);
		return false;
	}
	iVar13 = iVar0[0];
	__LIB_0__::func_11("Found ", 0, 1);
	__LIB_0__::func_11(__LIB_4__::func_73(iVar11), 1, 0);
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		if (Global_40.f_6563.f_274[iVar0[iVar12] /*20*/].f_18 > Global_40.f_6563.f_274[iVar13 /*20*/].f_18)
		{
			iVar13 = iVar0[iVar12];
		}
		iVar12++;
	}
	func_1173(&uVar14, uParam0, Global_40.f_6563.f_274[iVar13 /*20*/].f_1);
	uParam0->f_78 = { Global_40.f_6563.f_274[iVar13 /*20*/] };
	uParam0->f_13 = iVar13;
	Global_40.f_6563.f_274[iVar13 /*20*/].f_19++;
	iVar19 = __LIB_0__::func_753(uParam0->f_8);
	Global_40.f_7039[__LIB_0__::func_754(iVar19, 1) /*2*/].f_1 = 1;
	__LIB_3__::func_121(Global_40.f_6563.f_274[iVar13 /*20*/].f_2, 2, 0, -1);
	__LIB_0__::func_11("Launching ", 0, 1);
	__LIB_0__::func_11("--------------------------------------------------------", 1, 1);
	Global_40.f_6563.f_274[iVar13 /*20*/].f_14 = 0;
	return true;
}

bool func_459()
{
	if (Global_1391438.f_7[0 /*99*/].f_9 != -589165916 && !(__LIB_0__::func_702(Global_1391438.f_7[0 /*99*/].f_10) || __LIB_1__::func_44(Global_1391438.f_7[0 /*99*/].f_10)))
	{
		return false;
	}
	if (Global_1391438.f_7[1 /*99*/].f_9 != -589165916 && !(__LIB_0__::func_702(Global_1391438.f_7[1 /*99*/].f_10) || __LIB_1__::func_44(Global_1391438.f_7[1 /*99*/].f_10)))
	{
		return false;
	}
	return true;
}

bool func_460(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_463()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		iVar0 = __LIB_1__::func_97(iVar1);
		if (__LIB_3__::func_222(iVar0) && !func_1205(iVar1, iVar0))
		{
		}
		iVar1++;
	}
}

void func_464()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (__LIB_1__::func_59(Global_1934051.f_33))
	{
		iVar0 = __LIB_3__::func_323(Global_1934051.f_33);
		if (iVar0 != __LIB_0__::func_61())
		{
			__LIB_1__::func_96(Global_1934051.f_33, __LIB_1__::func_98(iVar0));
			__LIB_9__::func_945(&(Global_1934051.f_33), 0);
		}
	}
	if (!__LIB_1__::func_59(Global_1934051.f_33))
	{
		iVar1 = __LIB_0__::func_61();
		if (__LIB_0__::func_20(iVar1))
		{
			vVar2 = { __LIB_1__::func_546(__LIB_0__::func_317()) };
			Global_1934051.f_33 = __LIB_14__::func_135(iVar1, 62, vVar2, -1);
			__LIB_3__::func_559(Global_1934051.f_33, -1186550032);
			__LIB_3__::func_559(Global_1934051.f_33, __LIB_1__::func_98(iVar1));
		}
	}
}

void func_465()
{
	if (Global_1572887.f_8)
	{
		return;
	}
	if (__LIB_0__::func_58())
	{
		return;
	}
	func_1208();
	func_1209();
}

void func_466()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	iVar2 = 2;
	Global_1934051.f_110 = 0;
	iVar3 = Global_1934051.f_114;
	while (iVar3 <= (9 - 1))
	{
		if (Global_1934051.f_110 >= iVar2)
		{
		}
		else
		{
			iVar0 = iVar3;
			if (iVar0 == -1)
			{
			}
			else
			{
				iVar1 = func_1210(iVar0);
				if (!__LIB_3__::func_222(iVar1))
				{
				}
				else
				{
					vVar4 = { func_1211(iVar0) };
					if (__LIB_0__::func_86(vVar4))
					{
					}
					else
					{
						if (!__LIB_1__::func_59(Global_1934051.f_23[iVar3]) && Global_1934051.f_94[iVar3])
						{
							Global_1934051.f_94[iVar3] = 0;
						}
						if (!Global_1934051.f_94[iVar3])
						{
							Global_1934051.f_23[iVar3] = __LIB_14__::func_135(__LIB_0__::func_12(), 27, vVar4, -1);
							__LIB_10__::func_615(Global_1934051.f_23[iVar3], joaat("BLIP_STYLE_SHOP"));
							__LIB_16__::func_266(Global_1934051.f_23[iVar3], joaat("BLIP_SALOON"));
							func_1213(Global_1934051.f_23[iVar3], iVar1);
							Global_1934051.f_94[iVar3] = 1;
						}
						else
						{
							if (iVar1 == __LIB_0__::func_12())
							{
							}
							else
							{
								if (!__LIB_11__::func_183(iVar1, 1, __LIB_4__::func_191(iVar0)))
								{
									__LIB_1__::func_96(Global_1934051.f_23[iVar3], 724623647);
								}
								else
								{
									__LIB_3__::func_559(Global_1934051.f_23[iVar3], 724623647);
								}
								Global_1934051.f_110++;
							}
							iVar3++;
							Global_1934051.f_114 = iVar3;
							if (Global_1934051.f_114 >= 9)
							{
								Global_1934051.f_114 = 0;
							}
						}
					}
				}
			}
		}
	}
}

void func_467()
{
	struct<6> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	iVar11 = 1;
	Global_1934051.f_110 = 0;
	iVar12 = Global_1934051.f_112;
	while (iVar12 <= (33 - 1))
	{
		if (Global_1934051.f_110 >= iVar11)
		{
		}
		else
		{
			iVar10 = iVar12;
			if (iVar10 == -1)
			{
			}
			else if (!__LIB_3__::func_222(Var0.f_2))
			{
			}
			else
			{
				if (__LIB_7__::func_731(iVar10, &Var0, 0))
				{
					if (func_1217(&Var0))
					{
						if (!MAP::DOES_BLIP_EXIST(Global_1934051.f_34[iVar10]))
						{
							Global_1934051.f_34[iVar10] = MAP::_BLIP_ADD_FOR_COORD(__LIB_10__::func_636(__LIB_8__::func_741(Var0.f_1, Var0.f_2)), Var0.f_5);
							if (MAP::DOES_BLIP_EXIST(Global_1934051.f_34[iVar10]))
							{
								MAP::SET_BLIP_SPRITE(Global_1934051.f_34[iVar10], __LIB_10__::func_637(__LIB_8__::func_741(Var0.f_1, Var0.f_2)), true);
								MAP::SET_BLIP_FLASH_TIMER(Global_1934051.f_34[iVar10], __LIB_8__::func_741(Var0.f_1, Var0.f_2), -1);
								func_1221(Global_1934051.f_34[iVar10], Var0.f_2);
							}
						}
					}
				}
				Global_1934051.f_110++;
			}
			iVar12++;
		}
	}
	Global_1934051.f_112 = iVar12;
	if (Global_1934051.f_112 > 33)
	{
		Global_1934051.f_112 = 0;
	}
}

void func_468()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 1;
	Global_1934051.f_110 = 0;
	iVar2 = Global_1934051.f_113;
	while (iVar2 <= 6)
	{
		if (Global_1934051.f_110 >= iVar1)
		{
		}
		else
		{
			iVar0 = iVar2;
			if (iVar0 == 0 && !func_1222(iVar0))
			{
			}
			else
			{
				iVar3 = __LIB_10__::func_638(iVar0);
				if (!__LIB_3__::func_222(iVar3))
				{
				}
				else
				{
					if (__LIB_19__::func_453(iVar3, -1, 1) && func_1225(iVar3, iVar0))
					{
						if (!MAP::DOES_BLIP_EXIST(Global_1934051.f_68[iVar0]))
						{
							Global_1934051.f_68[iVar0] = MAP::_BLIP_ADD_FOR_COORD(-936216634, __LIB_10__::func_639(iVar0));
							if (MAP::DOES_BLIP_EXIST(Global_1934051.f_68[iVar0]))
							{
								MAP::SET_BLIP_SPRITE(Global_1934051.f_68[iVar0], joaat("BLIP_PROC_BOUNTY_POSTER"), true);
								MAP::SET_BLIP_FLASH_TIMER(Global_1934051.f_68[iVar0], 16, -1);
								func_1221(Global_1934051.f_68[iVar0], iVar3);
							}
						}
					}
					else if (MAP::DOES_BLIP_EXIST(Global_1934051.f_68[iVar0]))
					{
						MAP::REMOVE_BLIP(&(Global_1934051.f_68[iVar0]));
					}
					Global_1934051.f_110++;
				}
			}
			iVar2++;
		}
	}
	Global_1934051.f_113 = iVar2;
	if (Global_1934051.f_113 >= 7)
	{
		Global_1934051.f_113 = 1;
	}
}

void func_469()
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	vector3 vVar5;
	iVar4 = 0;
	while (iVar4 < 11)
	{
		iVar1 = iVar4;
		iVar2 = __LIB_17__::func_376(iVar1);
		bVar3 = func_1228(iVar2, &uVar0, -1f);
		if (func_1229(iVar2))
		{
			vVar5 = { __LIB_16__::func_233(iVar2) };
			if (!MAP::DOES_BLIP_EXIST(Global_1934051.f_82[iVar4]))
			{
				Global_1934051.f_82[iVar4] = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), vVar5);
				MAP::SET_BLIP_SPRITE(Global_1934051.f_82[iVar4], joaat("BLIP_AMBIENT_WARP"), true);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1934051.f_82[iVar4], "STAGE_COACH_BLIP");
				MAP::SET_BLIP_FLASH_TIMER(Global_1934051.f_82[iVar4], 50, -1);
			}
			if (MAP::DOES_BLIP_EXIST(Global_1934051.f_82[iVar4]))
			{
				if (bVar3)
				{
					if (MAP::_BLIP_REMOVE_MODIFIER(Global_1934051.f_82[iVar4], 724623647))
					{
					}
				}
				else if (MAP::_BLIP_SET_MODIFIER(Global_1934051.f_82[iVar4], 724623647))
				{
				}
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1934051.f_82[iVar4]))
		{
			MAP::REMOVE_BLIP(&(Global_1934051.f_82[iVar4]));
		}
		iVar4++;
	}
}

void func_470()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (__LIB_0__::func_113())
	{
		if (MAP::DOES_BLIP_EXIST(Global_1394141.f_1279[4 /*8*/].f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1394141.f_1279[4 /*8*/].f_1));
		}
	}
	iVar0 = Global_1934051.f_111;
	bVar1 = false;
	if (iVar0 != -1)
	{
		iVar2 = __LIB_1__::func_447(__LIB_10__::func_640(iVar0), 1);
		if (__LIB_3__::func_222(iVar2))
		{
			if (iVar2 == 5)
			{
				if (__LIB_0__::func_293(45))
				{
					if (iVar0 == 0 || iVar0 == 2)
					{
						bVar1 = true;
					}
				}
				else if (iVar0 == 0 || iVar0 == 1)
				{
					bVar1 = true;
				}
			}
			else if (iVar2 == 38)
			{
				if (__LIB_0__::func_181() && iVar0 == 4)
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				if (!MAP::DOES_BLIP_EXIST(Global_1934051.f_76[iVar0]))
				{
					Global_1934051.f_76[iVar0] = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), __LIB_10__::func_640(iVar0));
					if (MAP::DOES_BLIP_EXIST(Global_1934051.f_76[iVar0]))
					{
						MAP::SET_BLIP_SPRITE(Global_1934051.f_76[iVar0], __LIB_10__::func_637(func_1233(iVar0)), true);
						MAP::SET_BLIP_FLASH_TIMER(Global_1934051.f_76[iVar0], func_1233(iVar0), -1);
						func_1221(Global_1934051.f_76[iVar0], iVar2);
						if (!Global_1394141.f_1279[iVar0 /*8*/].f_4)
						{
							MAP::_BLIP_SET_MODIFIER(Global_1934051.f_76[iVar0], 1191951699);
							Global_1934051.f_104[iVar0] = 1;
						}
					}
				}
				else if (Global_1394141.f_1279[iVar0 /*8*/].f_4 && !Global_1394141.f_1279[iVar0 /*8*/].f_5)
				{
					if (Global_1934051.f_104[iVar0])
					{
						MAP::_BLIP_REMOVE_MODIFIER(Global_1934051.f_76[iVar0], 1191951699);
						Global_1934051.f_104[iVar0] = 0;
					}
				}
				else if (!Global_1934051.f_104[iVar0])
				{
					MAP::_BLIP_SET_MODIFIER(Global_1934051.f_76[iVar0], 1191951699);
					Global_1934051.f_104[iVar0] = 1;
				}
			}
		}
	}
	Global_1934051.f_111++;
	if (Global_1934051.f_111 >= 5)
	{
		Global_1934051.f_111 = 0;
	}
}

void func_471()
{
	if (Global_1956614.f_5)
	{
		if (__LIB_0__::func_474(127))
		{
			Global_1956614.f_5 = 0;
			return;
		}
		if (!__LIB_2__::func_623())
		{
			return;
		}
		if (__LIB_2__::func_514())
		{
			return;
		}
		if (__LIB_2__::func_453())
		{
			return;
		}
		__LIB_1__::func_240(127, 0);
		Global_1956614.f_6 = MISC::GET_GAME_TIMER();
		Global_1956614.f_5 = 0;
	}
	if (Global_1956614.f_6 > 0 && (MISC::GET_GAME_TIMER() - Global_1956614.f_6) > 40000)
	{
		Global_1956614.f_6 = 0;
	}
	if (__LIB_18__::func_254(1) || Global_1956614.f_6 > 0)
	{
		if (!__LIB_1__::func_59(Global_1956614))
		{
			Global_1956614 = __LIB_14__::func_135(97, 38, __LIB_10__::func_641(), -1);
			Global_1956614.f_1 = 0;
		}
		if (!Global_1956614.f_1)
		{
			if (!__LIB_18__::func_254(0))
			{
				__LIB_10__::func_810(97, 38, 724623647);
				Global_1956614.f_1 = 1;
			}
		}
		else if (__LIB_18__::func_254(0))
		{
			__LIB_10__::func_811(97, 38, 724623647);
			Global_1956614.f_1 = 0;
		}
	}
	else if (__LIB_1__::func_59(Global_1956614))
	{
		__LIB_9__::func_945(&Global_1956614, 0);
	}
}

void func_472()
{
	if (Global_1415412.f_5)
	{
		if (__LIB_0__::func_474(121))
		{
			Global_1415412.f_5 = 0;
			return;
		}
		if (!__LIB_2__::func_623())
		{
			return;
		}
		if (__LIB_2__::func_514())
		{
			return;
		}
		if (__LIB_2__::func_453())
		{
			return;
		}
		__LIB_1__::func_240(121, 0);
		__LIB_1__::func_240(131, 1);
		Global_1415412.f_6 = MISC::GET_GAME_TIMER();
		Global_1415412.f_5 = 0;
	}
	if (Global_1415412.f_6 > 0 && (MISC::GET_GAME_TIMER() - Global_1415412.f_6) > 40000)
	{
		Global_1415412.f_6 = 0;
	}
	if (__LIB_10__::func_720(1) || Global_1415412.f_6 > 0)
	{
		if (!__LIB_1__::func_59(Global_1415412.f_3))
		{
			Global_1415412.f_3 = __LIB_14__::func_135(69, 24, func_1238(), -1);
			Global_1415412.f_4 = 0;
			if (Global_1415412.f_6 == 0)
			{
				__LIB_1__::func_240(122, 0);
			}
		}
		if (!Global_1415412.f_4)
		{
			if (!__LIB_10__::func_720(0))
			{
				__LIB_10__::func_810(69, 24, 724623647);
				Global_1415412.f_4 = 1;
			}
		}
		else if (__LIB_10__::func_720(0))
		{
			__LIB_10__::func_811(69, 24, 724623647);
			Global_1415412.f_4 = 0;
		}
	}
	else if (__LIB_1__::func_59(Global_1415412.f_3))
	{
		__LIB_9__::func_945(&(Global_1415412.f_3), 0);
	}
}

void func_473()
{
	if (Global_1934051.f_118)
	{
		if (__LIB_0__::func_474(Global_1934051.f_115))
		{
			Global_1934051.f_118 = 0;
			return;
		}
		if (!__LIB_2__::func_623())
		{
			return;
		}
		if (__LIB_2__::func_514())
		{
			return;
		}
		if (__LIB_2__::func_453())
		{
			return;
		}
		Global_1934051.f_117 = (Global_1934051.f_117 + MISC::GET_GAME_TIMER());
		Global_1934051.f_118 = 0;
		__LIB_1__::func_240(Global_1934051.f_115, 0);
		func_1240(Global_1934051.f_116, __LIB_9__::func_843(Global_1934051.f_116));
	}
	else if (Global_1934051.f_116 != -1 && __LIB_1__::func_59(Global_1914319.f_15936[Global_1934051.f_116 /*6*/]))
	{
		if ((MISC::GET_GAME_TIMER() - Global_1934051.f_117) > 0)
		{
			__LIB_10__::func_811(__LIB_9__::func_843(Global_1934051.f_116), __LIB_19__::func_324(__LIB_1__::func_921(Global_1934051.f_116)), 580546400);
			__LIB_10__::func_811(__LIB_9__::func_843(Global_1934051.f_116), __LIB_19__::func_324(__LIB_1__::func_921(Global_1934051.f_116)), 847579139);
			Global_1934051.f_116 = -1;
			Global_1934051.f_117 = 0;
		}
	}
}

void func_474()
{
	int iVar0;
	Global_1415419.f_9717 = 0;
	iVar0 = 0;
	while (iVar0 < 248)
	{
		Global_1415419.f_19[iVar0 /*12*/].f_8 = -1;
		Global_1415419.f_19[iVar0 /*12*/].f_9 = -1;
		__LIB_0__::func_8(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
		__LIB_0__::func_8(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 1);
		__LIB_0__::func_7(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 8);
		iVar0++;
	}
}

int func_475()
{
	struct<4> Var0;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	Var0 = Global_1415419;
	Var0.f_2 = 217083545;
	iVar12 = __LIB_1__::func_898();
	Global_1415419.f_9756 = iVar12;
	Global_1415419.f_9717 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		uVar5 = Var0.f_1;
		iVar10 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			Var0.f_2 = 1275853848;
			Var0.f_3 = iVar9;
			if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
				uVar6 = Var0.f_1;
				Var0.f_2 = -713081767;
				iVar7 = 0;
				if (DATAFILE::_DATAFILE_GET_HASH(&iVar7, &Var0))
				{
					iVar8 = func_1243(iVar7);
					if (__LIB_2__::func_824(iVar8))
					{
						Global_1415419.f_19[iVar8 /*12*/].f_10 = uVar6;
						Var0.f_2 = -1341709093;
						if (DATAFILE::_DATAFILE_GET_INT(&uVar11, &Var0))
						{
							Global_1415419.f_19[iVar8 /*12*/].f_7 = uVar11;
						}
						if (iVar12 != -1)
						{
							func_1245(iVar8, &Var0, &(Global_1415419.f_9717), __LIB_5__::func_673(iVar12));
							Var0.f_1 = uVar6;
						}
					}
				}
			}
			Var0.f_1 = uVar5;
			iVar9++;
		}
	}
	return 1;
}

void func_476()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1415419.f_9721[iVar0 /*8*/].f_2)
		{
			if (Global_1415419.f_9721[iVar0 /*8*/] != -1)
			{
				if (Global_1415419.f_16 != Global_1415419.f_9721[iVar0 /*8*/])
				{
					if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1415419.f_9721[iVar0 /*8*/].f_1, false))
					{
						Global_1415419.f_9720 = (Global_1415419.f_9720 - 1);
						Global_1415419.f_9721[iVar0 /*8*/].f_2 = 0;
						Global_1415419.f_9721[iVar0 /*8*/].f_1 = 0;
						Global_1415419.f_9721[iVar0 /*8*/] = -1;
						Global_1415419.f_9721[iVar0 /*8*/].f_3 = 0;
						Global_1415419.f_9721[iVar0 /*8*/].f_7 = 0;
						Global_1415419.f_9721[iVar0 /*8*/].f_4 = { 0f, 0f, 0f };
					}
				}
			}
		}
		iVar0++;
	}
}

int func_485()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3[15];
	int iVar19;
	int iVar20;
	int iVar21;
	fVar2 = -1f;
	if (Global_1415419.f_5 != -1)
	{
		if (Global_1415419.f_6 || func_1254(Global_1415419.f_5, 0, 1))
		{
			Global_1415419.f_16 = Global_1415419.f_5;
			Global_1415419.f_5 = -1;
			return 1;
		}
		else
		{
			Global_1415419.f_9758 = 0;
			Global_1415419.f_9759 = 0;
			Global_1415419.f_9 = { 0f, 0f, 0f };
			Global_1415419.f_12 = { 0f, 0f, 0f };
			Global_1415419.f_15 = 0;
		}
		Global_1415419.f_5 = -1;
		return 0;
	}
	if (__LIB_10__::func_642())
	{
		if (func_1256(&iVar3, __LIB_0__::func_12()))
		{
			iVar19 = 0;
			while (iVar19 < iVar3)
			{
				if (iVar3[iVar19] != -1)
				{
					if (__LIB_0__::func_27(Global_1415419.f_19[iVar3[iVar19] /*12*/].f_11, 2))
					{
						if (Global_1415419.f_19[iVar3[iVar19] /*12*/].f_3 > fVar2)
						{
							if (__LIB_0__::func_27(Global_1415419.f_19[iVar3[iVar19] /*12*/].f_11, 1))
							{
								fVar2 = Global_1415419.f_19[iVar3[iVar19] /*12*/].f_3;
								iVar1 = iVar3[iVar19];
							}
						}
					}
				}
				iVar19++;
			}
			if (fVar2 != -1f)
			{
				Global_1415419.f_16 = iVar1;
			}
			return 0;
		}
	}
	if (Global_1415419.f_9718)
	{
		iVar20 = 75;
		iVar21 = 247;
	}
	else
	{
		if (__LIB_1__::func_923())
		{
			iVar20 = 0;
		}
		else
		{
			iVar20 = 34;
		}
		iVar21 = 74;
	}
	iVar0 = iVar20;
	while (iVar0 <= iVar21)
	{
		if (__LIB_0__::func_27(Global_1415419.f_19[iVar0 /*12*/].f_11, 2))
		{
			if (Global_1415419.f_19[iVar0 /*12*/].f_3 > fVar2)
			{
				if (__LIB_0__::func_27(Global_1415419.f_19[iVar0 /*12*/].f_11, 1))
				{
					fVar2 = Global_1415419.f_19[iVar0 /*12*/].f_3;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 != -1f)
	{
		Global_1415419.f_16 = iVar1;
	}
	else
	{
		Global_1415419.f_16 = -1;
	}
	return 0;
}

void func_488(int iParam0)
{
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = __LIB_0__::func_23();
	if (iParam0 <= 74)
	{
		Global_1415419.f_7 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1415419.f_8 = MISC::GET_GAME_TIMER();
	}
	__LIB_1__::func_446(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 12, 0, 0, 0, 0, 0);
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_1++;
	Global_32074.f_2697++;
}

void func_489()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar3 = 0;
	while (iVar3 < 14)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar3, -940661134, 0);
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar3, 1995362678, 0);
		iVar2 = __LIB_1__::func_35(iVar1, 5);
		if (func_1264(iVar2))
		{
			if (!(__LIB_0__::func_28() && __LIB_1__::func_194() == 0))
			{
				if (!__LIB_0__::func_314(iVar1))
				{
					if (__LIB_0__::func_448(iVar0))
					{
						if (__LIB_1__::func_707(iVar2, 1, 0))
						{
							MAP::_MAP_DISCOVERY_SET_ENABLED(__LIB_10__::func_764(iVar0));
							MAP::_0xD8C7162AB2E2AF45(__LIB_10__::func_765(iVar0));
						}
						else
						{
							MAP::_MAP_DISCOVERY_SET_ENABLED(__LIB_10__::func_765(iVar0));
							MAP::_0xD8C7162AB2E2AF45(__LIB_10__::func_764(iVar0));
						}
					}
				}
			}
		}
		iVar3++;
	}
}

void func_490()
{
	if (!Global_40.f_9045)
	{
		if (__LIB_10__::func_643(4))
		{
			if (!__LIB_0__::func_627(40, 0) && !__LIB_1__::func_187(40))
			{
				__LIB_4__::func_471(40, 1);
			}
			Global_40.f_9045 = __LIB_10__::func_643(4);
		}
	}
	if (!Global_40.f_9045.f_1)
	{
		if (__LIB_0__::func_315(8))
		{
			if ((!__LIB_0__::func_627(42, 0) && !__LIB_1__::func_187(42)) && __LIB_0__::func_181())
			{
				__LIB_1__::func_408(-683458244, 1, 0);
				__LIB_4__::func_471(42, 1);
			}
			Global_40.f_9045.f_1 = __LIB_0__::func_315(8);
		}
	}
	if (!Global_40.f_9045.f_2)
	{
		if (__LIB_14__::func_853(4))
		{
			if (!__LIB_0__::func_627(50, 0) && !__LIB_1__::func_187(50))
			{
				__LIB_4__::func_471(50, 1);
			}
			Global_40.f_9045.f_2 = __LIB_14__::func_853(4);
		}
	}
	if (!Global_40.f_9045.f_3)
	{
		if (__LIB_11__::func_139(2))
		{
			if (!__LIB_0__::func_627(51, 0) && !__LIB_1__::func_187(51))
			{
				__LIB_4__::func_471(51, 1);
			}
			Global_40.f_9045.f_3 = __LIB_11__::func_139(2);
		}
	}
}

void func_491()
{
	int iVar0;
	if (!Global_40.f_9045.f_4)
	{
		if (__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("CAROLINA_PARAKEETS"), 0)) >= 25)
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_CAROLINAPARAKEET_01"), true);
			Global_40.f_9045.f_4 = __LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("CAROLINA_PARAKEETS"), 0)) >= 25;
		}
	}
}

void func_492()
{
	if ((UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_CHAL_LEGENDARY_PANTHER")) && !Global_40.f_9319[13 /*4*/].f_1) && !VOLUME::_DOES_VOLUME_EXIST(Global_1425228))
	{
		Global_1425228 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1686.575f, -1973.868f, 45.094f, 0f, 0f, 0f, 100f, 100f, 100f, "Tracking Zones - volLegendaryPantherRestriction");
		__LIB_5__::func_209(Global_1425228, "Legendary Panther Restriction", 0, 0, 4096, 0, -1082130432 /* Float: -1f */);
	}
	else if (Global_40.f_9319[13 /*4*/].f_1 && VOLUME::_DOES_VOLUME_EXIST(Global_1425228))
	{
		__LIB_1__::func_544(Global_1425228);
		VOLUME::_DELETE_VOLUME(Global_1425228);
	}
	if ((__LIB_1__::func_185(15) && !Global_40.f_9319[1 /*4*/].f_1) && !VOLUME::_DOES_VOLUME_EXIST(Global_1425228.f_1))
	{
		Global_1425228.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2430.609f, 515.414f, 73.861f, 0f, 0f, 0f, 140f, 140f, 140f, "Tracking Zones - volLegendaryBeaverRestriction");
		__LIB_5__::func_209(Global_1425228.f_1, "Legendary Beaver Restriction", 0, 0, 4096, 0, -1082130432 /* Float: -1f */);
	}
	else if (Global_40.f_9319[1 /*4*/].f_1 && VOLUME::_DOES_VOLUME_EXIST(Global_1425228.f_1))
	{
		__LIB_1__::func_544(Global_1425228.f_1);
		VOLUME::_DELETE_VOLUME(Global_1425228.f_1);
	}
}

void func_493()
{
	int iVar0;
	iVar0 = __LIB_18__::func_415();
	if (iVar0 > 0 && iVar0 < 24)
	{
		if (iVar0 > Global_40.f_12019.f_45.f_1)
		{
			func_1278(7);
			Global_40.f_12019.f_45.f_1 = iVar0;
		}
		else if (__LIB_0__::func_923(Global_40.f_12019.f_45))
		{
			if (__LIB_1__::func_426(Global_40.f_12019.f_45, 0))
			{
				__LIB_1__::func_240(340, 1);
				func_1278(30);
			}
		}
	}
}

void func_494()
{
	Global_1901328.f_90 = __LIB_0__::func_944();
	if (func_1282(__LIB_10__::func_747(Global_1901328.f_90)))
	{
		if (func_1284(func_1283(Global_1901328.f_90)))
		{
			if (!__LIB_0__::func_627(func_1285(Global_1901328.f_90), 0) && !__LIB_1__::func_187(func_1285(Global_1901328.f_90)))
			{
				__LIB_4__::func_471(func_1285(Global_1901328.f_90), 0);
			}
			__LIB_1__::func_240(358, 1);
			func_1286(__LIB_10__::func_747(Global_1901328.f_90));
		}
		else
		{
			func_1286(__LIB_10__::func_747(Global_1901328.f_90));
		}
	}
}

void func_495(var uParam0)
{
	uParam0->f_1 = TASK::_0xE1C105E6BBA48270();
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_10 = 0;
	*uParam0 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_2 = 0;
}

void func_496(var uParam0)
{
	int iVar0;
	func_1287();
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), 0, false))
	{
		return;
	}
	func_1288(uParam0);
	iVar0 = __LIB_0__::func_162(0);
	if (Global_1900073.f_17 == 1)
	{
		if (INVENTORY::_0x3D10D7179D7034AF(iVar0, joaat("WEAPON_FISHINGROD"), 0))
		{
			INVENTORY::_0x6A564540FAC12211(iVar0, joaat("WEAPON_FISHINGROD"));
		}
	}
	else if (!INVENTORY::_0x3D10D7179D7034AF(iVar0, joaat("WEAPON_FISHINGROD"), 0))
	{
		INVENTORY::_0x766315A564594401(iVar0, joaat("WEAPON_FISHINGROD"), -1323131777 /* GXTEntry: "The Fishing Rod cannot be equipped here." */);
	}
}

void func_497(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if (((((Global_1900073.f_17 == 0 || __LIB_2__::func_776()) || __LIB_1__::func_923()) || __LIB_1__::func_652()) || !CAM::IS_SCREEN_FADED_IN()) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		func_498(uParam0);
		return;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!__LIB_0__::func_86(uParam0->f_13[iVar0 /*9*/].f_1))
		{
			if (__LIB_0__::func_264(&(uParam0->f_13[iVar0 /*9*/].f_5)) > IntToFloat(uParam0->f_13[iVar0 /*9*/].f_4) || __LIB_0__::func_636(Global_36, uParam0->f_13[iVar0 /*9*/].f_1) > uParam0->f_3)
			{
				func_1290(&(uParam0->f_13[iVar0 /*9*/]));
			}
		}
		iVar0++;
	}
	*uParam0 = func_1291(uParam0);
	if (*uParam0 == -1)
	{
		return;
	}
	if (!AUDIO::_0xD9130842D7226045(uParam0->f_12, 1))
	{
		return;
	}
	vVar1 = { func_1292(uParam0) };
	if (__LIB_0__::func_86(vVar1))
	{
		return;
	}
	vVar1 = { func_1293(vVar1) };
	if (__LIB_0__::func_86(vVar1))
	{
		return;
	}
	vVar1.f_2 = (vVar1.z + uParam0->f_5);
	func_1294(uParam0, vVar1);
}

void func_498(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_1290(&(uParam0->f_13[iVar0 /*9*/]));
		iVar0++;
	}
	*uParam0 = 0;
}

void func_499()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_1295(Global_1897952.f_41);
	iVar1 = __LIB_0__::func_338(Global_1894899.f_2);
	iVar2 = func_1297(Global_1894899.f_3);
	if (__LIB_1__::func_912(Global_1894899.f_2) && !__LIB_0__::func_293(45))
	{
		iVar1 = 0;
	}
	if (__LIB_10__::func_745(Global_1894899.f_3) && !__LIB_0__::func_293(45))
	{
		iVar2 = -1;
	}
	iVar3 = 0;
	if (__LIB_0__::func_2() != -1)
	{
		iVar3 = 1;
	}
	if ((((iVar1 == Global_1898077.f_9 && iVar2 == Global_1898077.f_10) && iVar0 == Global_1898077.f_11) && iVar3 == Global_1898077.f_7) && !Global_1898077)
	{
		return;
	}
	Global_1898077.f_11 = iVar0;
	Global_1898077.f_10 = iVar2;
	Global_1898077.f_9 = iVar1;
	Global_1898077.f_7 = iVar3;
	Global_1898077 = 0;
	if (Global_1898077.f_1 == 4)
	{
		__LIB_0__::func_336(Global_1898077.f_7, Global_1898077.f_12);
	}
	else if (Global_1898077.f_1 == 2)
	{
		__LIB_1__::func_92(Global_1898077.f_7, Global_1898077.f_3);
	}
	else if (Global_1898077.f_1 == 1)
	{
		func_1302(Global_1898077.f_6);
	}
	else if (Global_1898077.f_1 == 5)
	{
		__LIB_1__::func_93(Global_1898077.f_7, Global_1898077.f_4);
	}
	else if (Global_1898077.f_10 != -1)
	{
		__LIB_0__::func_339(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_10);
	}
	else if (Global_1898077.f_9 != -1 && iVar1 != 0)
	{
		__LIB_0__::func_339(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	else if (Global_1898077.f_11 != -1)
	{
		__LIB_0__::func_339(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_11);
	}
}

bool func_510(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) > 0;
}

void func_517(int iParam0)
{
	Global_1879514 = iParam0;
}

bool func_521()
{
	int iVar0;
	if ((__LIB_0__::func_700(Global_1879514.f_1) != 8 && __LIB_0__::func_700(Global_1879514.f_1) != 1) && (__LIB_0__::func_700(Global_1879514.f_1) == 11 && Global_1879514.f_1 != __LIB_1__::func_293(0, 10, 11, joaat("CABR01"))))
	{
		return false;
	}
	iVar0 = __LIB_1__::func_693(Global_1879514.f_1);
	if (__LIB_0__::func_318(iVar0))
	{
		return true;
	}
	return false;
}

void func_522()
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar3;
	char cVar4[64];
	if (!Global_1879514.f_11)
	{
		iVar1 = __LIB_1__::func_753();
	}
	else
	{
		iVar1 = 3;
	}
	switch (iVar1)
	{
		case 5:
			if (Global_1879514.f_12)
			{
				iVar0 = 2037639424;
			}
			else if (Global_1879514.f_14)
			{
				iVar0 = -1124518777;
			}
			else if (Global_1879514.f_15)
			{
				iVar0 = -1124518777;
			}
			else
			{
				iVar0 = joaat("TOAST_MEDAL_GOLD");
			}
			break;
		case 4:
			if (Global_1879514.f_12)
			{
				iVar0 = 1343627222;
			}
			else if (Global_1879514.f_14)
			{
				iVar0 = -2060979717;
			}
			else if (Global_1879514.f_15)
			{
				iVar0 = -2060979717;
			}
			else
			{
				iVar0 = joaat("TOAST_MEDAL_SILVER");
			}
			break;
		case 0:
			if (Global_1879514.f_12)
			{
				iVar0 = 68997297;
			}
			else if (Global_1879514.f_14)
			{
				iVar0 = -1523540536;
			}
			else if (Global_1879514.f_15)
			{
				iVar0 = -1523540536;
			}
			else
			{
				iVar0 = 1249997984;
			}
			break;
		default:
			if (Global_1879514.f_12)
			{
				iVar0 = -1241747389;
			}
			else if (Global_1879514.f_14)
			{
				iVar0 = 562132112;
			}
			else if (Global_1879514.f_15)
			{
				iVar0 = 562132112;
			}
			else
			{
				iVar0 = joaat("TOAST_MEDAL_BRONZE");
			}
			break;
	}
	cVar2 = __LIB_1__::func_613(Global_1879514.f_1);
	iVar3 = MISC::GET_HASH_KEY(&cVar2);
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar3);
	__LIB_1__::func_790(cVar2);
	StringCopy(&cVar4, "MISSION_COMPLETE_DETAILS", 64);
	if (Global_1879514.f_1 == __LIB_3__::func_918(1))
	{
		StringCopy(&cVar4, "MISSION_COMPLETE_DETAILS_WNT1", 64);
	}
	Global_1879514.f_17 = __LIB_0__::func_425("MISSION_COMPLETE", &cVar2, joaat("HUD_TOASTS"), iVar0, joaat("PLAYER_MENU"), &cVar4, joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
	Global_1879514.f_7 = MISC::GET_GAME_TIMER();
}

void func_527(int iParam0)
{
	VOLUME::_0x748C5F51A18CB8F0(0);
	__LIB_4__::func_380(iParam0);
	__LIB_16__::func_421(iParam0);
	__LIB_11__::func_196(iParam0);
	VOLUME::_0x748C5F51A18CB8F0(1);
	if (iParam0 == 4)
	{
		__LIB_11__::func_165();
	}
	else if (iParam0 == 22)
	{
		func_1328();
	}
	else if (iParam0 == 27)
	{
		if (!__LIB_3__::func_736(26, 64))
		{
			__LIB_3__::func_727(26, 64);
			__LIB_4__::func_685(26, 0);
			__LIB_10__::func_833(26);
		}
	}
	else if (iParam0 == 28)
	{
		if (!__LIB_0__::func_898(-789397228))
		{
			__LIB_0__::func_803(-789397228);
		}
		if (!__LIB_0__::func_898(1358491857))
		{
			__LIB_0__::func_803(1358491857);
		}
	}
	else if (iParam0 == 43)
	{
		func_1333();
	}
	else if (iParam0 == 96)
	{
		if (iParam0 == __LIB_10__::func_698())
		{
		}
		else
		{
			func_1334();
		}
	}
	else if (iParam0 == 97)
	{
		func_1335(0);
	}
	else if (iParam0 == 112)
	{
		func_1336(0);
	}
}

int func_528(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = __LIB_0__::func_76(iParam0);
	if (!__LIB_0__::func_5(iVar0))
	{
		return 0;
	}
	if (!__LIB_5__::func_353(iVar0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (Global_1310720.f_6 == 0)
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 0;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		__LIB_12__::func_621(iVar0);
		__LIB_12__::func_622(iVar0);
	}
	if (__LIB_9__::func_242(iVar0))
	{
		if (__LIB_16__::func_438(iVar0))
		{
			__LIB_16__::func_365(iVar0);
			return 1;
		}
	}
	return 0;
}

void func_534(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	if (!__LIB_0__::func_79(iParam1))
	{
		iParam1 = __LIB_0__::func_80(__LIB_3__::func_918(iParam0));
		if (!__LIB_0__::func_79(iParam1))
		{
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		if ((bParam2 || bParam6) && (!__LIB_4__::func_844(iParam0, -1) || Global_1835011[iParam0 /*74*/].f_70))
		{
			MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 724623647);
		}
		else
		{
			if (__LIB_0__::func_104())
			{
				if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
				{
					if (Global_1835011[iParam0 /*74*/].f_27 == Global_1905944.f_5698)
					{
						__LIB_2__::func_347(1);
					}
				}
			}
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1835011[iParam0 /*74*/].f_27));
			if (__LIB_4__::func_844(iParam0, -1) && __LIB_8__::func_617(iParam0))
			{
				func_565(iParam0, fParam5, iParam1, bParam2, 1);
				__LIB_5__::func_450(&(Global_1835011[iParam0 /*74*/]), 2);
			}
		}
	}
	else if ((bParam2 && !__LIB_5__::func_451(iParam0)) && !Global_43891)
	{
		func_565(iParam0, fParam5, iParam1, bParam2, 1);
	}
	if (__LIB_3__::func_919(iParam1, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1835011[iParam0 /*74*/].f_12));
	}
	if ((SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false) && !__LIB_2__::func_774(iParam0)) && !__LIB_3__::func_919(iParam1, 1024))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1835011[iParam0 /*74*/].f_16, 1);
	}
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(Global_1835011[iParam0 /*74*/].f_72);
	}
	if (bParam4)
	{
		__LIB_1__::func_722(Global_1835011[iParam0 /*74*/].f_1);
	}
	else
	{
		__LIB_4__::func_728(iParam1, 3831);
	}
	Global_1835011[iParam0 /*74*/].f_73 = 0;
}

void func_545()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						iVar1 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2;
						if (__LIB_0__::func_83(iVar1))
						{
							__LIB_9__::func_983(iVar1, 0);
							func_534(iVar1, -1, 0, 1, 0, 0, 0);
							if (MAP::DOES_BLIP_EXIST(Global_1835011[iVar1 /*74*/].f_27))
							{
								MAP::REMOVE_BLIP(&(Global_1835011[iVar1 /*74*/].f_27));
							}
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

int func_548(int iParam0)
{
	vector3 vVar0;
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392581, false))
	{
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT("trainrobbery_ambient");
	if (SCRIPTS::HAS_SCRIPT_LOADED("trainrobbery_ambient"))
	{
		if (__LIB_0__::func_27(Global_1392581.f_3, 16))
		{
			vVar0.x = 14;
		}
		else
		{
			vVar0.x = __LIB_7__::func_914(Global_36, 1);
		}
		vVar0.f_1 = Global_1898330[iParam0];
		if (ENTITY::DOES_ENTITY_EXIST(Global_1392581.f_44))
		{
			vVar0.f_2 = Global_1392581.f_44;
		}
		Global_1392581 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("trainrobbery_ambient", &vVar0, 3, 2300);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("trainrobbery_ambient");
		__LIB_1__::func_722(vVar0.y);
		return 1;
	}
	return 0;
}

bool func_565(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	char cVar7[16];
	if (__LIB_0__::func_13(32768))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_2();
	if ((bParam4 && __LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 512)) && !__LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 1024))
	{
		if (__LIB_0__::func_104())
		{
			return false;
		}
	}
	if (Global_1835011[iParam0 /*74*/].f_71)
	{
		return false;
	}
	if (!__LIB_5__::func_546(iParam0))
	{
		return false;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((__LIB_1__::func_25(Global_1835011[20 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[20 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - __LIB_5__::func_452()) <= 2000)
			{
				return false;
			}
		}
		else if (iParam0 == 20)
		{
			if ((__LIB_1__::func_25(Global_1835011[19 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[19 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - __LIB_5__::func_452()) <= 2000)
			{
				return false;
			}
		}
		else if (iParam0 == 14)
		{
			if (!__LIB_1__::func_25(Global_1347702[62 /*49*/].f_15, 1))
			{
				return false;
			}
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		bVar3 = Global_1835011[iParam0 /*74*/].f_70;
		if (__LIB_4__::func_844(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || __LIB_3__::func_740(&(Global_1835011[iParam0 /*74*/]), 2))
			{
				if (__LIB_1__::func_43(iParam0))
				{
					Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, __LIB_0__::func_135(iParam0));
					bVar2 = true;
				}
				else
				{
					Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, __LIB_1__::func_204(iParam0));
				}
			}
			else if (__LIB_1__::func_43(iParam0))
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_AREA(1673015813, __LIB_0__::func_135(iParam0), __LIB_5__::func_453(iParam0), __LIB_5__::func_454(iParam0));
				bVar2 = true;
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_RADIUS(1673015813, __LIB_5__::func_455(iParam0), __LIB_5__::func_456(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!__LIB_1__::func_43(iParam0))
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, __LIB_5__::func_449(iParam0));
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, __LIB_0__::func_135(iParam0));
				bVar2 = true;
			}
		}
		else if (__LIB_5__::func_542(iParam0))
		{
			if (iParam0 == 7)
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_COORD(-1337945352, __LIB_1__::func_204(iParam0));
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, __LIB_1__::func_204(iParam0));
			}
		}
		else
		{
			Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, __LIB_1__::func_204(iParam0));
		}
		Global_1835011[iParam0 /*74*/].f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || __LIB_1__::func_43(iParam0))
			{
				__LIB_1__::func_109(iParam2, 4194304);
			}
			else
			{
				__LIB_4__::func_728(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[iParam0 /*74*/].f_27, 63, iParam0);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		return false;
	}
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[iParam0 /*74*/].f_27, Global_1835011[iParam0 /*74*/].f_26, true);
		if (iVar0 != -1)
		{
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(Global_1835011[iParam0 /*74*/].f_27, &(Global_1835011[iParam0 /*74*/].f_39));
		}
		if (!__LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 1024) && !__LIB_5__::func_542(iParam0))
		{
			MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 580546400);
			__LIB_0__::func_7(&(Global_1835011[iParam0 /*74*/].f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return true;
	}
	if (!__LIB_5__::func_542(iParam0))
	{
		MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, -1986290853);
	}
	if (bParam3 || __LIB_3__::func_740(&(Global_1835011[iParam0 /*74*/]), 2))
	{
		MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 724623647);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 724623647);
	}
	iVar4 = __LIB_1__::func_953(Global_40.f_4283);
	if (__LIB_0__::func_20(iVar4) && __LIB_1__::func_59(Global_1888801[iVar4 /*35*/].f_13))
	{
		bVar5 = true;
		bVar6 = __LIB_5__::func_246(iVar4);
	}
	if (__LIB_4__::func_815(iParam0, bVar5, iVar4))
	{
		__LIB_8__::func_715(Global_1835011[iParam0 /*74*/].f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !__LIB_0__::func_474(579))
	{
		__LIB_5__::func_473(579, Global_1835011[iParam0 /*74*/].f_27, 0);
	}
	if (iParam0 == 2)
	{
		return true;
	}
	if (((((((__LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 4096) && !__LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 8192)) && IntToFloat(__LIB_5__::func_452()) >= 10f) && !Global_1935630.f_12) && !Global_16) && !__LIB_3__::func_138(Global_35, joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))) && !PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SLEEP_BED"))) && !PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_SLEEP_BEDROLL")))
	{
		if (!__LIB_4__::func_844(iParam0, iVar0) || (fParam1 >= (__LIB_5__::func_539(iParam0) * __LIB_5__::func_539(iParam0)) && !Global_1835011[iParam0 /*74*/].f_70))
		{
			MemCopy(&cVar7, {Global_1835011[iParam0 /*74*/].f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			__LIB_8__::func_966(&cVar7, 10000, 0, 0, 0, 1);
			__LIB_0__::func_7(&(Global_1835011[iParam0 /*74*/].f_29), 8192);
		}
	}
	return true;
}

void func_568(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	struct<4> Var3;
	bool bVar7;
	bool bVar8;
	struct<2> Var9;
	bool bVar12;
	int iVar13;
	int iVar14;
	vector3 vVar16;
	if (Global_12106[Global_1835011[iParam0 /*74*/].f_1 /*7*/].f_1 == 2)
	{
		return;
	}
	bVar0 = false;
	if (Global_1898346[iParam1 /*6*/].f_1 & 1 != 0)
	{
		bVar1 = true;
	}
	fVar2 = BUILTIN::VDIST2(__LIB_1__::func_204(iParam0), Global_36);
	if (!Global_1835011[iParam0 /*74*/].f_71)
	{
		if (!bVar1)
		{
			if (func_1366(iParam0, fVar2, bVar0))
			{
				if (func_565(iParam0, fVar2, iParam1, 0, 1))
				{
					__LIB_1__::func_109(iParam1, 1);
				}
			}
			else if (!bVar0 && (iParam0 == 18 || iParam0 == 44))
			{
				if (fVar2 >= (Global_1835011[iParam0 /*74*/].f_67 * Global_1835011[iParam0 /*74*/].f_67))
				{
					__LIB_1__::func_109(iParam1, 1);
				}
			}
			else if (bVar0)
			{
				if (__LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 2048) || __LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 32768))
				{
					__LIB_1__::func_109(iParam1, 1);
				}
			}
		}
		else if (!bVar0)
		{
			if (((iParam0 == 18 && __LIB_1__::func_187(21)) || (iParam0 == 44 && __LIB_1__::func_187(83))) && !MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
			{
				func_565(iParam0, fVar2, iParam1, 0, 1);
			}
		}
	}
	else
	{
		if (Global_1898346[iParam1 /*6*/].f_1 & 1 == 0)
		{
			__LIB_1__::func_109(iParam1, 1);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1898346[iParam1 /*6*/]))
		{
			MAP::REMOVE_BLIP(&(Global_1898346[iParam1 /*6*/]));
		}
	}
	Var3 = { Global_1835011[iParam0 /*74*/].f_12 };
	if (!bVar1)
	{
		return;
	}
	if (!bVar0)
	{
		if (Global_1835011[iParam0 /*74*/].f_17 && __LIB_0__::func_28())
		{
			bVar7 = SCRIPTS::_DOES_THREAD_EXIST(Global_1835011[iParam0 /*74*/].f_16);
			if (bVar7)
			{
				if (fVar2 > (Global_1835011[iParam0 /*74*/].f_66 * Global_1835011[iParam0 /*74*/].f_66) && Global_1898346[iParam1 /*6*/].f_1 & 256 == 0)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1835011[iParam0 /*74*/].f_16, 1);
					SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Var3);
					__LIB_4__::func_728(iParam1, 212);
				}
			}
			else if (!bParam3)
			{
				if (Global_1898346[iParam1 /*6*/].f_1 & 16 != 0)
				{
					bVar8 = true;
				}
				if ((bVar8 || fVar2 < (Global_1835011[iParam0 /*74*/].f_65 * Global_1835011[iParam0 /*74*/].f_65)) || Global_1898346[iParam1 /*6*/].f_1 & 256 != 0)
				{
					if (!bVar8)
					{
						SCRIPTS::REQUEST_SCRIPT(&Var3);
						__LIB_1__::func_109(iParam1, 16);
					}
					if (SCRIPTS::HAS_SCRIPT_LOADED(&Var3))
					{
						Var9.f_1 = -1;
						Var9 = iParam0;
						Global_1835011[iParam0 /*74*/].f_16 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&Var3, &Var9, 3, 6000);
						SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Var3);
						__LIB_4__::func_728(iParam1, 16);
					}
				}
			}
		}
		return;
	}
	if (Global_1835011[iParam0 /*74*/].f_17)
	{
		if (Global_1898346[iParam1 /*6*/].f_1 & 64 != 0)
		{
			if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1835011[iParam0 /*74*/].f_16))
			{
				__LIB_4__::func_728(iParam1, 196);
			}
		}
		else if (Global_1898346[iParam1 /*6*/].f_1 & 32 != 0)
		{
			if (!SCRIPTS::HAS_SCRIPT_LOADED(&Var3))
			{
				__LIB_4__::func_728(iParam1, 32);
				return;
			}
			bVar12 = func_1367(iParam0);
			if ((fVar2 < (Global_1835011[iParam0 /*74*/].f_65 * Global_1835011[iParam0 /*74*/].f_65) || __LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 32768)) || bVar12)
			{
				iVar13 = 0;
				if (__LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 131072))
				{
					SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
					iVar13 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
					while (iVar13 != 0)
					{
						if (SCRIPTS::_GET_HASH_OF_THREAD(iVar13) == joaat("MP_INTRO"))
						{
						}
						else
						{
							iVar13 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
						}
					}
				}
				if (SCRIPTS::_DOES_THREAD_EXIST(iVar13) && SCRIPTS::IS_THREAD_ACTIVE(iVar13, false))
				{
					Global_1835011[iParam0 /*74*/].f_16 = iVar13;
				}
				else if (__LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 65536))
				{
					iVar14 = iParam0;
					Global_1835011[iParam0 /*74*/].f_16 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&Var3, &iVar14, 2, 63250);
				}
				else
				{
					vVar16.f_1 = -1;
					vVar16.x = iParam0;
					if (bVar12)
					{
						__LIB_1__::func_471(&(vVar16.f_2), 0);
					}
					Global_1835011[iParam0 /*74*/].f_16 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&Var3, &vVar16, 3, 6000);
				}
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Var3);
				__LIB_1__::func_109(iParam1, 64);
				__LIB_4__::func_728(iParam1, 32);
			}
		}
		else
		{
			SCRIPTS::REQUEST_SCRIPT(&Var3);
			__LIB_1__::func_109(iParam1, 16);
			if (SCRIPTS::HAS_SCRIPT_LOADED(&Var3))
			{
				__LIB_1__::func_109(iParam1, 32);
				__LIB_4__::func_728(iParam1, 16);
			}
		}
	}
}

int func_583(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	__LIB_10__::func_728(iParam0, 1);
	__LIB_1__::func_830(iVar0);
	if (bParam1)
	{
		__LIB_10__::func_688(&Global_1899778, iVar0);
	}
	__LIB_1__::func_819(iVar0);
	return 1;
}

bool func_584(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_8))
	{
		return false;
	}
	return PED::_0xA1FBAC56D38563E2(Global_1392915.f_121[iVar0 /*20*/].f_8);
}

void func_590(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_872(Global_1898330[iParam0]);
}

bool func_591(int iParam0)
{
	if (!__LIB_6__::func_706(iParam0))
	{
		return false;
	}
	return Global_40.f_9146.f_4[iParam0] == 3;
}

bool func_593(int iParam0)
{
	if (((((iParam0 == 4 || iParam0 == 5) || iParam0 == 6) || iParam0 == 0) || iParam0 == 1) || iParam0 == 2)
	{
		return true;
	}
	return false;
}

void func_599(int iParam0, bool bParam1)
{
	vector3 vVar0;
	if (!MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_11))
	{
		vVar0 = { __LIB_6__::func_758(iParam0) };
		if (__LIB_0__::func_86(vVar0))
		{
			return;
		}
		__LIB_1__::func_994(Global_1392388.f_10[iParam0 /*13*/].f_5, 125f, "CoachRob", 0, 0, 0, 0, -1082130432 /* Float: -1f */);
		__LIB_2__::func_165(Global_1392388.f_10[iParam0 /*13*/].f_5, 125f, 0, 0, 5);
		Global_1392388.f_10[iParam0 /*13*/].f_10 = MAP::_BLIP_ADD_FOR_RADIUS(-1559907306, vVar0, __LIB_6__::func_707(iParam0));
		Global_1392388.f_10[iParam0 /*13*/].f_11 = MAP::_BLIP_ADD_FOR_COORD(1673015813, vVar0);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1392388.f_10[iParam0 /*13*/].f_11, "PROC_BLIP_CHROB");
		MAP::SET_BLIP_SPRITE(Global_1392388.f_10[iParam0 /*13*/].f_11, joaat("BLIP_AMBIENT_COACH"), false);
		if (iParam0 == 13)
		{
			MAP::_BLIP_SET_MODIFIER(Global_1392388.f_10[iParam0 /*13*/].f_11, -1186550032);
		}
		if (bParam1)
		{
			MAP::_BLIP_SET_MODIFIER(Global_1392388.f_10[iParam0 /*13*/].f_11, 580546400);
		}
		__LIB_14__::func_109(Global_1392388.f_10[iParam0 /*13*/].f_10, bParam1);
		if (__LIB_6__::func_708(iParam0))
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(4, __LIB_6__::func_773(iParam0)))
			{
				__LIB_14__::func_111(iParam0);
			}
			__LIB_6__::func_807(iParam0, "CR_O_GOAMBUSH", "CR_O_GOAMBUSH", -1082130432 /* Float: -1f */);
		}
	}
}

void func_601(int iParam0, int iParam1)
{
	if (__LIB_16__::func_405(iParam1))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1898346[iParam0 /*6*/]))
	{
		Global_1898346[iParam0 /*6*/] = 0;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392240.f_1[iParam1 /*18*/].f_5))
	{
		__LIB_13__::func_881(iParam1, 0);
	}
}

void func_604(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_872(Global_1898330[iParam0]);
	if (!__LIB_16__::func_405(iVar0))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1392240.f_1[iVar0 /*18*/].f_5))
	{
		func_948(iVar0, 0);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1898346[iParam0 /*6*/]))
	{
		Global_1898346[iParam0 /*6*/] = Global_1392240.f_1[iVar0 /*18*/].f_5;
	}
}

void func_605(int iParam0)
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iParam0 /*32*/].f_21, false))
	{
		return;
	}
	__LIB_0__::func_7(&(Global_1392626[iParam0 /*32*/].f_9), 2);
}

void func_608(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	if (iParam0 != iParam2)
	{
		if (Global_1347702[iParam0 /*49*/].f_13 & 8192 == 0)
		{
			if (func_1383(iParam0))
			{
				func_1384(iParam0, 0, 1, 1, 1);
				if (Global_1347702[iParam0 /*49*/].f_13 & 16384 == 0)
				{
					__LIB_11__::func_175(iParam0, 1);
					__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 16384);
				}
				return;
			}
			else if (Global_1347702[iParam0 /*49*/].f_13 & 16384 != 0)
			{
				__LIB_11__::func_175(iParam0, 0);
				__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 16384);
			}
		}
	}
	func_527(iParam0);
	vVar0 = { __LIB_1__::func_440(iParam0) };
	fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
	bVar4 = MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37);
	if (iParam0 != iParam2 && Global_1347702[iParam0 /*49*/].f_13 & 8192 == 0)
	{
		if (__LIB_1__::func_25(Global_1347702[iParam0 /*49*/].f_15, 1))
		{
			func_1384(iParam0, 1, 1, 1, 1);
			return;
		}
		if (Global_1347702[iParam0 /*49*/].f_14 & 2 != 0)
		{
			__LIB_10__::func_842(iParam0, bVar4, vVar0);
			func_1387(iParam0, bVar4, fVar3);
		}
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
		{
			return;
		}
		if (__LIB_10__::func_721(iParam0))
		{
			__LIB_18__::func_305(iParam0);
		}
		else
		{
			return;
		}
		if (Global_1347702[iParam0 /*49*/].f_12 & 8388608 != 0)
		{
			iVar5 = __LIB_11__::func_128(iParam0);
			if (iVar5 != -1)
			{
				if (__LIB_0__::func_730(iVar5))
				{
					if (Global_1347702[iParam0 /*49*/].f_12 & 512 != 0)
					{
						if (Global_1347702[iParam0 /*49*/].f_14 & 32768 == 0)
						{
							__LIB_4__::func_838(iParam0, 32768);
							__LIB_10__::func_842(iParam0, bVar4, vVar0);
						}
					}
					func_1384(iParam0, 0, 0, 0, 0);
					return;
				}
				else if (__LIB_3__::func_151(iVar5))
				{
					if (Global_1347702[iParam0 /*49*/].f_12 & 512 != 0)
					{
						if (Global_1347702[iParam0 /*49*/].f_14 & 32768 == 0)
						{
							__LIB_4__::func_838(iParam0, 32768);
							__LIB_10__::func_842(iParam0, bVar4, vVar0);
						}
					}
					func_1384(iParam0, 0, 0, 0, 0);
					return;
				}
			}
		}
		if (Global_1347702[iParam0 /*49*/].f_45 != -1)
		{
			if (__LIB_0__::func_730(Global_1347702[iParam0 /*49*/].f_45))
			{
				if (Global_1347702[iParam0 /*49*/].f_14 & 2048 == 0)
				{
					__LIB_4__::func_838(iParam0, 2048);
					__LIB_10__::func_842(iParam0, bVar4, vVar0);
				}
				func_1384(iParam0, 0, 0, 0, 0);
				return;
			}
		}
		if (Global_1347702[iParam0 /*49*/].f_46 != 0)
		{
			if (Global_1347702[iParam0 /*49*/].f_12 & 268435456 == 0)
			{
				if (!__LIB_12__::func_614(iParam3, Global_1347702[iParam0 /*49*/].f_46))
				{
					func_1384(iParam0, 0, 1, 0, 0);
					return;
				}
			}
		}
		if (Global_1347702[iParam0 /*49*/].f_12 & 65536 == 0 && !__LIB_9__::func_138(iParam0))
		{
			func_1393(iParam0);
			func_1384(iParam0, 0, 0, 0, 0);
			return;
		}
		else if (Global_1347702[iParam0 /*49*/].f_13 & 16 != 0)
		{
			fVar6 = __LIB_11__::func_129(iParam0);
			if (iParam0 == 155)
			{
				fVar6 = Global_1347702[iParam0 /*49*/].f_19;
			}
			if (fVar3 > (fVar6 * fVar6) || !__LIB_11__::func_130(iParam0, bParam1))
			{
				__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 16);
				if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
				{
					__LIB_10__::func_722(iParam0, vVar0, 1, 0);
				}
				else
				{
					__LIB_5__::func_241(iParam0);
				}
			}
			else
			{
				return;
			}
		}
		if (!bParam1)
		{
			if (!__LIB_12__::func_778(iParam0, 0, 1, 1, 1))
			{
				if (Global_1347702[iParam0 /*49*/].f_14 & 2 == 0)
				{
					func_1384(iParam0, 0, 1, 0, 1);
				}
				return;
			}
		}
		if (__LIB_11__::func_130(iParam0, bParam1))
		{
			if (iParam0 == 24 && __LIB_5__::func_297(Global_1347702[24 /*49*/].f_15) == 1)
			{
				if (fVar3 >= (250f * 250f))
				{
					__LIB_7__::func_448(Global_1347702[24 /*49*/].f_15, 0);
				}
				else
				{
					fVar6 = 250f;
				}
			}
			else if (iParam0 == 134 && __LIB_0__::func_895(Global_1347702[134 /*49*/].f_15) == 1)
			{
				if (fVar3 >= (350f * 350f))
				{
					__LIB_1__::func_532(Global_1347702[134 /*49*/].f_15, 0);
				}
				else
				{
					fVar6 = 350f;
				}
			}
			else
			{
				fVar6 = __LIB_11__::func_129(iParam0);
			}
			if (fVar3 < (fVar6 * fVar6))
			{
				iVar7 = 1;
				if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 32) || __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 4096))
				{
					iVar7 = 0;
				}
				func_1384(iParam0, 0, iVar7, 0, 0);
				return;
			}
			else
			{
				if (Global_1347702[iParam0 /*49*/].f_12 & 16384 != 0)
				{
					__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 16384);
				}
				if (Global_1347702[iParam0 /*49*/].f_14 & 2 != 0)
				{
					func_1402(iParam0, !bVar4, 1);
				}
			}
		}
		else
		{
			if (Global_1347702[iParam0 /*49*/].f_12 & 16384 != 0)
			{
				__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 16384);
			}
			if (Global_1347702[iParam0 /*49*/].f_14 & 2 != 0)
			{
				func_1402(iParam0, !bVar4, 1);
			}
		}
	}
	else if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
	{
		return;
	}
	fVar8 = __LIB_11__::func_131(iParam0);
	if ((fVar3 < (fVar8 * fVar8) || Global_1347702[iParam0 /*49*/].f_12 & 32 != 0) || iParam0 == iParam2)
	{
		if (!__LIB_0__::func_702(Global_1347702[iParam0 /*49*/].f_15))
		{
			__LIB_1__::func_319(Global_1347702[iParam0 /*49*/].f_15);
			if (__LIB_4__::func_814(iParam0, &iVar10, &iVar9))
			{
				__LIB_10__::func_702(iVar10, iVar9, 1, 977356591, -1);
			}
		}
		else if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_14, 2))
		{
		}
		else if (!bVar4)
		{
			__LIB_10__::func_722(iParam0, vVar0, 1, 0);
		}
	}
	else
	{
		if (__LIB_0__::func_702(Global_1347702[iParam0 /*49*/].f_15))
		{
			if (fVar3 > (Global_1347702[iParam0 /*49*/].f_17 * Global_1347702[iParam0 /*49*/].f_17))
			{
				__LIB_1__::func_722(Global_1347702[iParam0 /*49*/].f_15);
				__LIB_18__::func_261(iParam0, 0, 1, 1, 32);
			}
		}
		if (Global_1347702[iParam0 /*49*/].f_14 & 2 != 0)
		{
			func_1402(iParam0, bVar4, 1);
			bVar4 = true;
		}
		if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0 || Global_1347702[iParam0 /*49*/].f_36 != joaat("BLIP_RC"))
		{
			if (!bVar4)
			{
				__LIB_10__::func_722(iParam0, vVar0, 1, 0);
			}
		}
		else if (bVar4)
		{
			__LIB_12__::func_81(iParam0, 0);
		}
		if (Global_1347702[iParam0 /*49*/].f_12 & 1024 != 0)
		{
			__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 1024);
		}
	}
}

void func_610(int iParam0, vector3 vParam1, float fParam4)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 == 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 2048 != 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_18 < 0f)
	{
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 1048576);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		return;
	}
	if (__LIB_12__::func_749(iParam0, fParam4))
	{
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 2048);
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 1);
		__LIB_12__::func_81(iParam0, 0);
		__LIB_10__::func_722(iParam0, vParam1, 1, 0);
	}
}

void func_612(int iParam0)
{
	if (__LIB_0__::func_702(iParam0))
	{
		__LIB_1__::func_559(iParam0, 0, 2);
	}
}

void func_645(char* sParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	if (DECORATOR::DECOR_EXIST_ON(Global_35, sParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(Global_35, sParam0);
		if (!__LIB_0__::func_154(iVar0))
		{
			DECORATOR::DECOR_REMOVE(Global_35, sParam0);
			DECORATOR::DECOR_REMOVE(Global_35, sParam1);
			return;
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			DECORATOR::DECOR_REMOVE(Global_35, sParam0);
			DECORATOR::DECOR_REMOVE(Global_35, sParam1);
			return;
		}
		iVar1 = DECORATOR::DECOR_GET_INT(Global_35, sParam1);
		if (__LIB_0__::func_923(iVar1))
		{
			if (__LIB_1__::func_426(iVar1, 0))
			{
				DECORATOR::DECOR_REMOVE(Global_35, sParam0);
				DECORATOR::DECOR_REMOVE(Global_35, sParam1);
			}
		}
	}
}

bool func_654(var uParam0, int iParam1)
{
	bool bVar0;
	vector3 vVar1[24];
	bool bVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	bool bVar15;
	int iVar16;
	var uVar17;
	var uVar18;
	if (iParam1 == 0)
	{
		return false;
	}
	StringCopy(&cVar1, "int_object_flags", 24);
	bVar0 = DATAFILE::_0x7907969497EA92F5(*uParam0);
	if (!bVar0)
	{
		*uParam0 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(&cVar1));
	}
	bVar4 = DATAFILE::_0x603AC35FD4602C76(*uParam0);
	if (!bVar4)
	{
		return false;
	}
	func_1422(uParam0);
	iVar5 = __LIB_17__::func_387(uParam0, 1);
	if (iVar5 <= 0)
	{
		return false;
	}
	iVar16 = 0;
	uVar17 = uParam0->f_1;
	iVar6 = 0;
	while (iVar6 <= (iVar5 - 1))
	{
		uParam0->f_1 = uVar17;
		uParam0->f_3 = iVar6;
		if (__LIB_17__::func_388(uParam0, 0))
		{
			if (__LIB_17__::func_389(uParam0, 2, &uVar7))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar7) && MISC::GET_HASH_KEY(&uVar7) == iParam1)
				{
					if (__LIB_17__::func_390(uParam0, 3, &bVar15))
					{
						if (bVar15)
						{
							iVar16 |= 2;
						}
					}
					if (__LIB_17__::func_390(uParam0, 4, &bVar15))
					{
						if (bVar15)
						{
							iVar16 |= 1;
						}
					}
					if (__LIB_17__::func_390(uParam0, 5, &bVar15))
					{
						if (bVar15)
						{
							iVar16 |= 4;
						}
					}
					if (__LIB_17__::func_390(uParam0, 6, &bVar15))
					{
						if (bVar15)
						{
							iVar16 |= 8;
						}
					}
					iVar6 = iVar5;
					INVENTORY::_0x9E58207B194488AC(Global_35, iVar16);
				}
			}
		}
		iVar6++;
	}
	DATAFILE::_DATAFILE_UNLOAD(*uParam0);
	MISC::_COPY_MEMORY(uParam0, &uVar18, 5);
	return true;
}

void func_658(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 512;
	}
	else
	{
		Global_1894899 = (Global_1894899 - Global_1894899 & 512);
	}
}

void func_660(char* sParam0)
{
	int iVar0;
	if (!DECORATOR::DECOR_EXIST_ON(Global_35, sParam0))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(Global_35, sParam0);
	if (__LIB_0__::func_923(iVar0))
	{
		if (__LIB_1__::func_426(iVar0, 0))
		{
			DECORATOR::DECOR_REMOVE(Global_35, sParam0);
		}
	}
}

int func_668(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	if (!__LIB_0__::func_258(iVar0))
	{
		return 0;
	}
	iVar2 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar0);
	if (!WEAPON::GET_MAX_AMMO(Global_35, &iVar1, iParam0))
	{
		return 0;
	}
	iVar3 = BUILTIN::CEIL(((((BUILTIN::TO_FLOAT(iVar2) / BUILTIN::TO_FLOAT(iVar1)) - 1f) * IntToFloat(iParam1)) * -1f));
	if (bParam2)
	{
		return func_1433(iVar3);
	}
	return func_1434(iVar3);
}

int func_669(bool bParam0)
{
	if (bParam0)
	{
		return 852806853;
	}
	return 495489215;
}

void func_682()
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	if (Global_1347477.f_180)
	{
		__LIB_1__::func_557(12, -100f);
	}
	else if (Global_1347477.f_179)
	{
		__LIB_1__::func_557(12, 100f);
	}
	else
	{
		if ((!__LIB_0__::func_293(16) || ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0)) || __LIB_7__::func_439())
		{
			__LIB_1__::func_557(12, 0f);
			return;
		}
		func_1441(&bVar0, &bVar1);
		if (bVar1)
		{
			if (!func_1442())
			{
				fVar2 = 100f;
				__LIB_1__::func_240(81, 0);
			}
		}
		else if (bVar0)
		{
			if (!func_1443())
			{
				fVar2 = -100f;
				__LIB_1__::func_240(82, 0);
			}
		}
		__LIB_1__::func_557(12, fVar2);
	}
}

bool func_685(int iParam0)
{
	if (PAD::_0xD7D22F5592AED8BA(0) > 480000 && PED::IS_PED_ON_MOUNT(iParam0))
	{
		return true;
	}
	return false;
}

bool func_694(int iParam0)
{
	if (Global_16 || Global_18)
	{
		return false;
	}
	if (!__LIB_0__::func_293(iParam0))
	{
		return false;
	}
	if (__LIB_1__::func_652())
	{
		return false;
	}
	return true;
}

void func_697()
{
	if (Global_40.f_11095.f_42 > 0)
	{
		Global_40.f_11095.f_42 = (Global_40.f_11095.f_42 - 7);
		if (Global_40.f_11095.f_42 == 0)
		{
			Global_40.f_11095.f_11[14] = 0f;
			ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 50);
		}
	}
	else if (Global_40.f_11095.f_42 < 0)
	{
		Global_40.f_11095.f_11[14] = 0f;
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 50);
		Global_40.f_11095.f_42 = 0;
	}
}

float func_700()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (!__LIB_6__::func_152() || !__LIB_0__::func_293(17))
	{
		return __LIB_0__::func_260(13);
	}
	fVar0 = (IntToFloat(Global_1347477.f_181) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar0 = (fVar0 * (Global_40.f_11095.f_52 + 1f));
	fVar1 = (200f / fVar0);
	fVar1 = (fVar1 * (30f / __LIB_0__::func_250()));
	fVar2 = (__LIB_0__::func_260(13) - fVar1);
	__LIB_7__::func_845(&fVar3, &fVar4);
	return __LIB_0__::func_251(fVar2, fVar3, fVar4);
}

void func_702(bool bParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	if (__LIB_2__::func_776() && !bParam0)
	{
		return;
	}
	iVar0 = Global_1347477.f_196;
	if (Global_1347477.f_183 == iVar0)
	{
		return;
	}
	Global_1347477.f_183 = iVar0;
	fVar1 = (((BUILTIN::TO_FLOAT(iVar0) / BUILTIN::TO_FLOAT(10)) * 7.5f) / 100f);
	Global_40.f_11095.f_45 = -fVar1;
	Global_40.f_11095.f_62 = fVar1;
	fVar2 = __LIB_0__::func_727();
	iVar3 = 1;
	iVar4 = 0;
	if (fVar2 == 0f)
	{
		iVar3 = 0;
	}
	else if (fVar2 < 0f)
	{
		iVar4 = 1;
	}
	__LIB_16__::func_294(1, iVar3, iVar4);
	__LIB_16__::func_294(2, iVar3, iVar4);
	__LIB_16__::func_294(3, iVar3, iVar4);
	__LIB_18__::func_936(iVar0);
	__LIB_1__::func_244();
	__LIB_0__::func_431();
	__LIB_0__::func_361();
}

void func_703()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_0__::func_181())
	{
		return;
	}
	iVar1 = 0;
	if (func_1475())
	{
		switch (Global_40.f_11095.f_67)
		{
			case 0:
				iVar0 = -1150250535;
				break;
			case 1:
				iVar0 = -813319677;
				break;
			case 2:
				iVar0 = 398379636;
				break;
			case 3:
				iVar0 = 703229643;
				break;
			case 4:
				iVar0 = -119829330;
				break;
			case 5:
				iVar0 = 1526616306;
				break;
			case 6:
				iVar0 = 1862039790;
				break;
			case 7:
				iVar0 = 1112121225;
				break;
			case 8:
				iVar0 = 1142989623;
				break;
			case 9:
				iVar0 = -1782069628;
				break;
			case 10:
				iVar0 = 1697015990;
				break;
		}
		if (Global_1347477.f_187 != 0)
		{
			iVar1 = Global_1347477.f_187;
		}
		else if (Global_40.f_11095.f_67 < 9)
		{
			if (__LIB_1__::func_185(43))
			{
				iVar1 = -1061007984;
			}
		}
		else if (__LIB_1__::func_185(58))
		{
			iVar1 = -354696817;
		}
		else
		{
			iVar1 = -1061007984;
		}
		if (PED::_0xA0BC8FAED8CFEB3C(Global_35))
		{
			PED::_SET_PED_BODY_COMPONENT(Global_35, iVar0);
			if (iVar1 != 0)
			{
				__LIB_16__::func_293(iVar1);
				if (!Global_43891 && Global_1347477.f_185 != iVar1)
				{
					__LIB_10__::func_884(Global_35, iVar1, 0);
				}
			}
			PED::_UPDATE_PED_VARIATION(Global_35, true, true, true, true, false);
			Global_1347477.f_184 = Global_40.f_11095.f_67;
			Global_1347477.f_190 = iVar0;
			bVar2 = Global_1347477.f_184 >= 8;
			__LIB_11__::func_137(1, bVar2, 1);
			__LIB_11__::func_137(2, bVar2, 1);
			__LIB_11__::func_137(3, bVar2, 1);
			Global_1347477.f_188 = 0;
		}
	}
}

void func_704()
{
	if (Global_40.f_11095.f_43)
	{
		if (__LIB_1__::func_652())
		{
			__LIB_1__::func_299(0);
		}
	}
}

void func_706()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = (IntToFloat(ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 16)) / 100f);
	fVar1 = 0.5f;
	fVar2 = 1.5f;
	fVar3 = (((1f - fVar0) * fVar2) + (fVar1 * fVar0));
	PED::_0xFD8E853F0BC2E942(Global_35, fVar3);
}

bool func_711(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
	{
		return DECORATOR::DECOR_EXIST_ON(iParam0, "lose_honor_steal_vehicle");
	}
	return false;
}

bool func_725(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	if (func_733(iParam0))
	{
		return false;
	}
	if (__LIB_9__::func_20(iParam0) == -15)
	{
		return true;
	}
	iVar0 = __LIB_10__::func_727(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (iVar0 > 0)
	{
		return false;
	}
	if (iParam0 == __LIB_0__::func_12())
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_5))
		{
			if (__LIB_1__::func_205(Global_35, Global_1888801[iParam0 /*35*/].f_5, 1, 0))
			{
				return false;
			}
		}
		iVar1 = ITEMSET::CREATE_ITEMSET(true);
		LAW::_0x0C392DB374655176(Global_36, 30f, iVar1);
		iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
		ITEMSET::DESTROY_ITEMSET(iVar1);
		if (iVar2 > 0)
		{
			return false;
		}
	}
	return true;
}

bool func_729(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (__LIB_1__::func_652())
	{
		return false;
	}
	if (__LIB_2__::func_84())
	{
		return false;
	}
	if (MISC::IS_STRING_NULL(__LIB_14__::func_262(iParam0)))
	{
		return false;
	}
	if (bParam1)
	{
		if (!__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1))
		{
			return false;
		}
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1415402, false))
	{
		return false;
	}
	return true;
}

bool func_732()
{
	vector3 vVar0;
	if (__LIB_1__::func_898() == 8)
	{
		return false;
	}
	PATHFIND::GET_CLOSEST_VEHICLE_NODE(Global_36, &vVar0, 1, 3f, 0f);
	if (!__LIB_0__::func_86(vVar0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true) < 50f)
		{
			return true;
		}
	}
	return false;
}

bool func_733(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	int iVar20;
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	if (!__LIB_9__::func_27(iParam0))
	{
		return false;
	}
	if (LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID()) <= 0)
	{
		return false;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 0))
	{
		if (__LIB_14__::func_209() > 3)
		{
			return true;
		}
	}
	else
	{
		iVar0 = 60;
		iVar1 = 6;
		iVar20 = 0;
		while (iVar20 < 24)
		{
			if (iVar2 < iVar1)
			{
				if (LAW::_0xB527099D1E1EED49(PLAYER::PLAYER_ID(), iVar20, &Var3))
				{
					if (__LIB_5__::func_235(iParam0, 1, 1) != Var3.f_7)
					{
					}
					else if (LAW::_0xDAEFDFDB2AEECE37(Var3, 0) < 2)
					{
					}
					else
					{
						if (Var3.f_8 < iVar0)
						{
							iVar2++;
						}
						Jump @171; //curOff = 164
						iVar20 = 24;
						Jump @178; //curOff = 171
						return true;
					}
					iVar20++;
					return false;
				}
			}
		}
	}
}

bool func_737(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iVar0 == 6 || (iVar0 == 5 && bParam0))
		{
		}
		else if (__LIB_1__::func_931(iVar0) > 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_742(int iParam0, bool bParam1)
{
	if (func_1507(iParam0))
	{
		if (!func_1508(iParam0) && !bParam1)
		{
			func_1509(iParam0, 1);
			LAW::_0xF19706B1F8FFA88F(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), LAW::_0x76CF93D4B416B288(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN")) + 8);
		}
		if (Global_1934266.f_69 != 0.75f && !bParam1)
		{
			Global_1934266.f_69 = 0.75f;
			LAW::_0xFEC85339AACA2A35(PLAYER::PLAYER_ID(), Global_1934266.f_69);
		}
	}
	else if (Global_1934266.f_69 != 1f)
	{
		Global_1934266.f_69 = 1f;
		LAW::_0xFEC85339AACA2A35(PLAYER::PLAYER_ID(), Global_1934266.f_69);
	}
}

void func_743()
{
	if (Global_1934266.f_76 || __LIB_0__::func_75(&(Global_1934266.f_70)))
	{
		Global_1934266.f_76 = 0;
		Global_1934266.f_73 = { 0f, 0f, 0f };
		Global_1934266.f_77 = 50f;
		__LIB_0__::func_37(&(Global_1934266.f_70));
	}
}

float func_744()
{
	return Global_1934266.f_77;
}

void func_754(int iParam0)
{
	int iVar0;
	func_1512();
	__LIB_1__::func_142(0);
	if (__LIB_3__::func_181(iParam0) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(false);
	}
	if (__LIB_0__::func_12() == 5)
	{
		iVar0 = 60;
	}
	if (__LIB_1__::func_85(iParam0, 33554432))
	{
		Global_1393237.f_2 = MISC::GET_GAME_TIMER();
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, false);
	if (__LIB_1__::func_85(iParam0, 16))
	{
		if (__LIB_0__::func_73(32))
		{
			__LIB_0__::func_747(30, 0, 1);
			__LIB_1__::func_979(32);
		}
		else
		{
			__LIB_0__::func_747(60, 0, 1);
		}
		__LIB_1__::func_979(16);
	}
	else if (__LIB_1__::func_85(iParam0, 1073741824 /* Float: 2f */))
	{
		if (__LIB_0__::func_73(32))
		{
		}
		else if (__LIB_0__::func_73(16))
		{
			__LIB_0__::func_747(120, 0, 1);
		}
		else
		{
			__LIB_0__::func_747(60, 0, 1);
		}
		__LIB_1__::func_979(32);
		__LIB_1__::func_979(16);
	}
	else if (__LIB_0__::func_73(16))
	{
		__LIB_0__::func_747((420 - iVar0), 0, 1);
		__LIB_1__::func_979(16);
		__LIB_1__::func_979(32);
	}
	else if (__LIB_0__::func_73(32))
	{
		__LIB_0__::func_747(30, 0, 1);
		__LIB_1__::func_979(32);
	}
	else
	{
		__LIB_0__::func_747((200 - iVar0), 0, 1);
	}
}

bool func_756()
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (((Global_1430242 + Global_1430242.f_2) > 1 && __LIB_1__::func_923()) && Global_1310750.f_16037 > 2)
	{
		return true;
	}
	return false;
}

bool func_758(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (Global_1326862.f_3)
	{
		if (__LIB_1__::func_652() || __LIB_1__::func_898() == -1)
		{
			Global_1326862.f_604 = 0;
			Global_1326862.f_605 = 0;
			return false;
		}
		iVar0 = __LIB_3__::func_343(0);
		if (__LIB_1__::func_923())
		{
			if (iVar0 != 0)
			{
				iVar1 = __LIB_10__::func_645(iVar0);
				*uParam0 = Global_1326862.f_512[(17 + iVar1)];
				*uParam1 = Global_1326862.f_558[(17 + iVar1)];
			}
			else
			{
				Global_1326862.f_604 = 0;
				Global_1326862.f_605 = 0;
				return false;
			}
		}
		else
		{
			*uParam0 = Global_1326862.f_512[__LIB_1__::func_898()];
			*uParam1 = Global_1326862.f_558[__LIB_1__::func_898()];
		}
	}
	Global_1326862.f_604 = *uParam0;
	Global_1326862.f_605 = *uParam1;
	return *uParam0 <= *uParam1;
}

void func_762()
{
	if (BUILTIN::VDIST(Global_36, Global_1326862.f_6) > 30f && Global_1326862.f_9 < MISC::GET_GAME_TIMER())
	{
		Global_1326862.f_6 = { Global_36 };
		Global_1326862.f_9 = MISC::GET_GAME_TIMER() + 15000;
		Global_1326862.f_5 = 1;
	}
}

int func_764(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	if (Global_17504.f_42[iParam0 /*8*/].f_4 > 0)
	{
		return 0;
	}
	if (bParam1)
	{
		if (!Global_1310750[iParam0 /*111*/].f_49)
		{
			return 0;
		}
		if (!Global_1310750[iParam0 /*111*/].f_50)
		{
			return 0;
		}
		if (!Global_1310750[iParam0 /*111*/].f_51)
		{
			return 0;
		}
	}
	else
	{
		if (Global_1310750[iParam0 /*111*/].f_38 != 0)
		{
			if (!__LIB_2__::func_117(Global_1310750[iParam0 /*111*/].f_38))
			{
				return 0;
			}
		}
		if (!__LIB_16__::func_411(iParam0, Global_1310750[iParam0 /*111*/]))
		{
			return 0;
		}
		__LIB_16__::func_412(iParam0, &fVar0, &fVar1, &uVar2, 1);
		if (!__LIB_1__::func_85(iParam0, 512))
		{
			if (!__LIB_3__::func_236(iParam0))
			{
				if (!__LIB_3__::func_235(iParam0, 64))
				{
					if (!func_1523(iParam0, fVar1, &(Global_1310750[iParam0 /*111*/].f_63), 0, 0, 1, fVar0, 1))
					{
						return 0;
					}
				}
			}
		}
	}
	if (__LIB_3__::func_235(iParam0, 524288))
	{
		return 0;
	}
	if (!Global_17504.f_42[iParam0 /*8*/].f_7)
	{
		return 0;
	}
	if (Global_17504.f_42[iParam0 /*8*/].f_6)
	{
		return 0;
	}
	if (!__LIB_3__::func_235(iParam0, 32768))
	{
		if (__LIB_1__::func_85(iParam0, 1))
		{
			if (func_1525(iParam0, __LIB_3__::func_168(__LIB_1__::func_898())))
			{
				return 0;
			}
		}
		else if (func_1526(iParam0, __LIB_3__::func_343(0)))
		{
			return 0;
		}
	}
	if (Global_1310750[iParam0 /*111*/].f_48)
	{
		return 0;
	}
	if (__LIB_1__::func_987(iParam0) == 7)
	{
		return 0;
	}
	if (__LIB_18__::func_306(Global_1310750[iParam0 /*111*/]))
	{
		return 0;
	}
	if (!__LIB_11__::func_186(iParam0, 1))
	{
		return 0;
	}
	if (__LIB_11__::func_187(iParam0))
	{
		return 0;
	}
	if (!func_1531(Global_1310750[iParam0 /*111*/].f_39))
	{
		return 0;
	}
	if (__LIB_3__::func_235(iParam0, 1))
	{
		if (!func_1532(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_766(int iParam0, bool bParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7)
{
	if (!__LIB_0__::func_35(iParam0) && !bParam7)
	{
		return;
	}
	if (Global_1310750.f_16071 != -1 && !bParam6)
	{
		return;
	}
	__LIB_1__::func_924();
	if (iParam5 == -1)
	{
		iParam5 = PLAYER::PLAYER_ID();
	}
	Global_1310750.f_16103 = { vParam2 };
	Global_1327479 = iParam0;
	Global_1327479.f_1 = iParam5;
	Global_1327479.f_10 = __LIB_3__::func_240(iParam0, vParam2);
	__LIB_1__::func_674(0);
	__LIB_0__::func_77(0, 0, 1);
	if (bParam1)
	{
		Global_1310750.f_16077 = 0;
		Global_1310750.f_16071 = -1;
		Global_1310750.f_16075 = 1;
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
		func_1535(8);
		__LIB_10__::func_625(Global_36, 1137180672 /* Float: 400f */);
	}
	if (bParam7)
	{
		Global_1310750.f_16076 = 1;
	}
}

void func_767(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	if (Global_1310750[iParam0 /*111*/].f_110 & 1 != 0)
	{
		iVar0 = Global_17504.f_42[iParam0 /*8*/].f_2;
		iVar1 = Global_17504.f_1;
		fVar2 = ((1f - (BUILTIN::TO_FLOAT(iVar0) / BUILTIN::TO_FLOAT(iVar1))) * 1f);
		Global_1310750[iParam0 /*111*/].f_56 = fVar2;
	}
	if (Global_1310750[iParam0 /*111*/].f_110 & 2 != 0)
	{
		iVar3 = Global_17504.f_42[iParam0 /*8*/].f_3;
		iVar4 = Global_17504.f_2;
		fVar5 = ((1f - (BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4))) * 0.5f);
		Global_1310750[iParam0 /*111*/].f_57 = fVar5;
	}
	if (Global_1310750[iParam0 /*111*/].f_110 & 4 != 0)
	{
		iVar6 = Global_17504.f_42[iParam0 /*8*/].f_1;
		iVar7 = Global_17504.f_3;
		fVar8 = ((1f - (BUILTIN::TO_FLOAT(iVar6) / BUILTIN::TO_FLOAT(iVar7))) * 1.5f);
		Global_1310750[iParam0 /*111*/].f_58 = fVar8;
	}
	if (Global_1310750[iParam0 /*111*/].f_110 & 8 != 0)
	{
		iVar9 = Global_17504.f_42[iParam0 /*8*/];
		iVar10 = Global_17504.f_4;
		fVar11 = ((1f - (BUILTIN::TO_FLOAT(iVar9) / BUILTIN::TO_FLOAT(iVar10))) * 5f);
		Global_1310750[iParam0 /*111*/].f_59 = fVar11;
	}
}

void func_768(int iParam0)
{
	int iVar0;
	if (Global_1310750.f_16070 == -1)
	{
		return;
	}
	iVar0 = MISC::ABSI((Global_1310750[iParam0 /*111*/].f_2 - Global_1310750.f_16070));
	switch (iVar0)
	{
		case 0:
			Global_1310750[iParam0 /*111*/].f_55 = 1f;
			break;
		case 1:
			Global_1310750[iParam0 /*111*/].f_55 = 0.833f;
			break;
		case 2:
			Global_1310750[iParam0 /*111*/].f_55 = 0.666f;
			break;
		case 3:
			Global_1310750[iParam0 /*111*/].f_55 = 0.5f;
			break;
		case 4:
			Global_1310750[iParam0 /*111*/].f_55 = 0.333f;
			break;
		case 5:
			Global_1310750[iParam0 /*111*/].f_55 = 0.167f;
			break;
		default:
			Global_1310750[iParam0 /*111*/].f_55 = 0f;
			break;
	}
}

void func_769(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	float fVar10;
	var uVar11;
	float fVar12;
	Global_1310750[iParam0 /*111*/].f_60 = 0f;
	if (__LIB_1__::func_85(iParam0, 512))
	{
		Global_1310750[iParam0 /*111*/].f_60 = 0.75f;
		return;
	}
	if (__LIB_0__::func_1(Global_1310750[iParam0 /*111*/], 256))
	{
		fVar12 = 240f;
		if (func_1523(iParam0, fVar12, &uVar11, 0, 0, 1, 0, 0))
		{
			Global_1310750[iParam0 /*111*/].f_60 = 999f;
		}
		return;
	}
	if (Global_1310750[iParam0 /*111*/].f_52)
	{
		Global_1310750[iParam0 /*111*/].f_60 = 0.75f;
		return;
	}
	if (__LIB_0__::func_1(Global_1310750[iParam0 /*111*/], 32))
	{
		if (PATHFIND::GET_CLOSEST_ROAD(Global_36, 0f, 1, &vVar3, &vVar6, &uVar9, &uVar9, &fVar10, true))
		{
			vVar0 = { vVar3 + vVar6 * Vector(0.5f, 0.5f, 0.5f) };
			fVar10 = BUILTIN::VDIST(vVar0, Global_36);
			if (fVar10 >= 105f && fVar10 <= 135f)
			{
				Global_1310750[iParam0 /*111*/].f_60 = 0.75f;
			}
			else if (fVar10 < 105f)
			{
				Global_1310750[iParam0 /*111*/].f_60 = 0.5f;
			}
			else if (fVar10 > 135f)
			{
				Global_1310750[iParam0 /*111*/].f_60 = 0.25f;
			}
		}
		else
		{
			Global_1310750[iParam0 /*111*/].f_60 = -999f;
		}
		return;
	}
	if (func_1523(iParam0, 240f, &uVar11, 1, 0.707f, 1, 0, 0))
	{
		Global_1310750[iParam0 /*111*/].f_60 = 0.75f;
	}
}

bool func_777(int iParam0)
{
	switch (iParam0)
	{
		case 87:
			if (__LIB_0__::func_247(0) > -99.999f)
			{
				return false;
			}
			break;
		case 86:
			if (__LIB_0__::func_247(2) > -99.999f)
			{
				return false;
			}
			break;
		case 85:
			if (__LIB_0__::func_247(1) > -99.999f)
			{
				return false;
			}
			break;
		case 585:
			if (!__LIB_16__::func_231())
			{
				return false;
			}
			break;
		case 145:
			return PED::_0x3BDFCF25B58B0415(Global_35);
		case 81:
			return __LIB_0__::func_729();
		case 82:
			return __LIB_0__::func_728();
	}
	return true;
}

int func_780(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = -1;
	iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar4 = 3;
			if (__LIB_0__::func_447(iParam0, 131072))
			{
				iVar4 = 2;
			}
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar4)
			{
				return 0;
			}
			iVar3 = (iVar2 - Global_40.f_7756[iVar0 /*3*/]);
			if (iVar3 > 1800 || !__LIB_0__::func_447(iParam0, 32768))
			{
				Global_40.f_7756[iVar0 /*3*/].f_1++;
				Global_40.f_7756[iVar0 /*3*/] = iVar2;
				return 1;
			}
			return 0;
		}
		else if (iVar1 == -1 && Global_40.f_7756[iVar0 /*3*/].f_2 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		Global_40.f_7756[iVar1 /*3*/].f_2 = iParam0;
		Global_40.f_7756[iVar1 /*3*/] = iVar2;
		Global_40.f_7756[iVar1 /*3*/].f_1++;
	}
	return 1;
}

int func_781(int iParam0, int iParam1)
{
	if (__LIB_0__::func_27(Global_1360165[iParam0 /*1157*/].f_143.f_1, iParam1))
	{
		return 2;
	}
	else if (__LIB_0__::func_27(Global_1360165[iParam0 /*1157*/].f_143.f_2, iParam1))
	{
		return 3;
	}
	return 0;
}

void func_782(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_1 + iParam1) > 100)
	{
		iParam1 = (100 - Global_40.f_4942[iParam0 /*60*/].f_1);
	}
	else if ((Global_40.f_4942[iParam0 /*60*/].f_1 - iParam1) < -100)
	{
		iParam1 = (-100 - Global_40.f_4942[iParam0 /*60*/].f_1);
	}
	if (iParam1 == 0)
	{
		return;
	}
	Global_40.f_4942[iParam0 /*60*/].f_1 = (Global_40.f_4942[iParam0 /*60*/].f_1 + iParam1);
	if (bParam2)
	{
		sVar0 = __LIB_1__::func_464(iParam0, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			__LIB_1__::func_422(MISC::_CREATE_VAR_STRING(10, "COMP_TRUST_MOD", sVar0, iParam1), 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

void func_783()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_1391411.f_2[iVar0 /*2*/].f_1 = 234527101;
		iVar0++;
	}
}

bool func_803(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 5:
		case 6:
			return true;
	}
	return false;
}

void func_825(int iParam0)
{
	if (!__LIB_10__::func_783(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_2() == -1)
	{
		Global_40.f_9079[iParam0] |= 1;
	}
}

void func_826()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_8__::func_180(iVar0, 1);
		func_1571(iVar0);
		iVar0++;
	}
}

void func_828(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	__LIB_16__::func_334(iParam0);
	switch (iParam0)
	{
		case 0:
			Global_1392194[0 /*10*/].f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1413.425f, -213.6874f, 104.8526f, 0.791084f, 0f, 0f, 49.2581f, 52.79913f, 7.251574f, "EA_BGV_LOGGING_CAMP Camp");
			Global_1392194[0 /*10*/].f_5 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1434.438f, -213.8168f, 115.2112f, 0f, 0f, 0f, 103.5534f, 149.8633f, 22.60874f, "EA_BGV_LOGGING_CAMP Discover");
			break;
		case 1:
			Global_1392194[1 /*10*/].f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-436.0166f, 500.0417f, 101.993f, 0f, 0f, 0f, 22.60923f, 21.21432f, 6.090699f, "EA_HRT_HOMESTEAD Camp");
			Global_1392194[1 /*10*/].f_5 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-436.0166f, 490.9713f, 101.993f, 0f, 0f, 0f, 60.89196f, 60.21377f, 8.765783f, "EA_HRT_HOMESTEAD Discover");
			break;
		case 2:
			func_1574(&(Global_1392194[2 /*10*/].f_6), iParam1);
			func_1575(&(Global_1392194[2 /*10*/].f_5), iParam1);
			break;
		case 3:
			Global_1392194[3 /*10*/].f_6 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1576.145f, -914.8586f, 87.21828f, 0f, 0f, 0f, 72.98922f, 82.87118f, 8.167019f, "EA_BGV_INDIAN_RESERVATION Camp");
			Global_1392194[3 /*10*/].f_5 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1585.806f, -910.0177f, 90.36066f, 0f, 0f, -51.68032f, 82.29909f, 75.9168f, 10.11638f, "EA_BGV_INDIAN_RESERVATION Discover");
			break;
	}
}

bool func_830(vector3 vParam0, int iParam3)
{
	if (!__LIB_0__::func_625(iParam3))
	{
		return false;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_6))
	{
		return VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1392194[iParam3 /*10*/].f_6, vParam0);
	}
	return false;
}

int func_831(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 53;
		case 1:
			return 54;
		case 2:
			return 55;
		case 3:
			return 56;
	}
	return 0;
}

bool func_835(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_185(59))
	{
		return false;
	}
	if (*iParam1 >= __LIB_16__::func_269(*iParam0))
	{
		return false;
	}
	return true;
}

int func_836(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return 0;
	}
	if (!__LIB_16__::func_392(iParam0, iParam1))
	{
		return 0;
	}
	Global_40.f_9096[iParam0 /*12*/] = iParam1;
	__LIB_18__::func_915(iParam0, &(Global_40.f_9096[iParam0 /*12*/]));
	return 1;
}

void func_838(int iParam0)
{
	float fVar0;
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	if (__LIB_7__::func_908(iParam0, 4194304))
	{
		return;
	}
	func_862(iParam0, 0);
	__LIB_8__::func_93(iParam0, 524288);
	__LIB_8__::func_93(iParam0, 1048576);
	__LIB_8__::func_93(iParam0, 2097152);
	fVar0 = 100f;
	PED::_0x9851DE7AEC10B4E1(__LIB_7__::func_943(iParam0, __LIB_0__::func_982(iParam0)), fVar0, 1, 0);
	__LIB_1__::func_572(__LIB_7__::func_943(iParam0, __LIB_0__::func_982(iParam0)), fVar0, 0, 0, 0, 0, 0);
	__LIB_8__::func_82(iParam0, 1073741824 /* Float: 2f */);
	Global_40.f_9096[iParam0 /*12*/].f_11 = -1;
}

void func_840(int iParam0, int iParam1, int iParam2)
{
	__LIB_16__::func_391(iParam0, iParam1, iParam2, 0, 0, 0);
}

void func_841(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (Global_40.f_9096[iParam0 /*12*/].f_2 < 0 && !__LIB_7__::func_907(iParam0, 8388608))
	{
		__LIB_8__::func_93(iParam0, 8);
		__LIB_8__::func_93(iParam0, 32);
		__LIB_8__::func_93(iParam0, 512);
		__LIB_8__::func_93(iParam0, 1024);
		__LIB_8__::func_93(iParam0, 2048);
		__LIB_8__::func_93(iParam0, 4096);
		__LIB_8__::func_93(iParam0, 16384);
		__LIB_8__::func_93(iParam0, 32768);
		__LIB_8__::func_93(iParam0, 65536);
		__LIB_8__::func_93(iParam0, 64);
		__LIB_8__::func_93(iParam0, 67108864);
		__LIB_8__::func_93(iParam0, 16777216);
		__LIB_8__::func_93(iParam0, 134217728);
		__LIB_8__::func_93(iParam0, 268435456);
		return;
	}
	if (__LIB_7__::func_907(iParam0, 8))
	{
		func_292(iParam0, &iVar3, &iVar2, &iVar1, &iVar0);
		iVar3 = (iVar3 - 8);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar2 > 12)
		{
			iVar2 = 12;
			iVar1 = 0;
			iVar0 = 0;
		}
		__LIB_16__::func_391(iParam0, iVar3, iVar2, iVar1, iVar0, 0);
		__LIB_8__::func_93(iParam0, 8);
	}
	else if (__LIB_7__::func_907(iParam0, 16))
	{
		func_292(iParam0, &iVar3, &iVar2, &iVar1, &iVar0);
		if (iVar3 > 1 || iVar3 == 1)
		{
			iVar3 = 1;
			iVar2 = 0;
			iVar1 = 0;
			iVar0 = 0;
		}
		__LIB_16__::func_391(iParam0, iVar3, iVar2, iVar1, iVar0, 0);
		__LIB_8__::func_93(iParam0, 16);
	}
	else if (__LIB_7__::func_907(iParam0, 32))
	{
		func_292(iParam0, &iVar3, &iVar2, &iVar1, &iVar0);
		iVar3 = (iVar3 - 2);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		__LIB_16__::func_391(iParam0, iVar3, iVar2, iVar1, iVar0, 0);
		__LIB_8__::func_93(iParam0, 32);
	}
	else if (__LIB_7__::func_907(iParam0, 4096) && __LIB_7__::func_907(iParam0, 4))
	{
		func_292(iParam0, &iVar3, &iVar2, &iVar1, &iVar0);
		if (iVar3 >= 1 && iVar2 > 16)
		{
			iVar3 = (iVar3 - 1);
		}
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (__LIB_0__::func_982(iParam0) == 1)
		{
			__LIB_16__::func_391(iParam0, 0, 12, 0, 0, 0);
		}
		else
		{
			__LIB_16__::func_391(iParam0, iVar3, iVar2, iVar1, iVar0, 0);
		}
		__LIB_8__::func_93(iParam0, 4096);
	}
	else if (__LIB_7__::func_907(iParam0, 512))
	{
		__LIB_16__::func_391(iParam0, 2, 0, 0, 0, 1);
		__LIB_8__::func_93(iParam0, 512);
	}
	else if (__LIB_7__::func_907(iParam0, 1024))
	{
		__LIB_16__::func_391(iParam0, 6, 0, 0, 0, 1);
		__LIB_8__::func_93(iParam0, 1024);
	}
	else if (__LIB_7__::func_907(iParam0, 2048) && __LIB_7__::func_907(iParam0, 4))
	{
		func_292(iParam0, &iVar3, &iVar2, &iVar1, &iVar0);
		if (iVar3 == 0 && iVar2 < 12)
		{
			__LIB_16__::func_391(iParam0, 0, 12, 0, 0, 0);
		}
		__LIB_8__::func_93(iParam0, 2048);
	}
	else if (__LIB_7__::func_907(iParam0, 16384))
	{
		__LIB_16__::func_391(iParam0, 2, 0, 0, 0, 0);
		__LIB_8__::func_93(iParam0, 16384);
	}
	else if (__LIB_7__::func_907(iParam0, 32768))
	{
		__LIB_16__::func_391(iParam0, 4, 0, 0, 0, 0);
		__LIB_8__::func_93(iParam0, 32768);
	}
	else if (__LIB_7__::func_907(iParam0, 65536))
	{
		__LIB_16__::func_391(iParam0, 7, 0, 0, 0, 0);
		__LIB_8__::func_93(iParam0, 65536);
	}
	else if (__LIB_7__::func_907(iParam0, 33554432))
	{
		__LIB_16__::func_391(iParam0, 0, 0, 0, 0, 0);
		__LIB_8__::func_93(iParam0, 33554432);
	}
}

bool func_842(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < func_1580(iParam0))
	{
		iVar1 = func_1581(iParam0, iParam1, iVar0);
		if (!__LIB_0__::func_30(iVar1))
		{
		}
		else if (!STREAMING::_IS_IMAP_ACTIVE(iVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_844(int iParam0)
{
	int iVar0;
	Global_40.f_9096[iParam0 /*12*/].f_8++;
	iVar0 = (5 * Global_40.f_9096[iParam0 /*12*/].f_8);
	Global_40.f_9096[iParam0 /*12*/].f_11 = Global_40.f_9096[iParam0 /*12*/].f_3;
	func_1582(iParam0, iVar0, 0, 0, 0, 1);
	__LIB_16__::func_391(iParam0, iVar0, 0, 0, 0, !__LIB_16__::func_220(iParam0));
	__LIB_8__::func_82(iParam0, 1073741824 /* Float: 2f */);
}

bool func_846(int iParam0)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0 /*12*/].f_3 > Global_40.f_9096[iParam0 /*12*/].f_11;
}

bool func_847(int iParam0, int iParam1)
{
	bool bVar0;
	if (iParam1 < 0)
	{
		return false;
	}
	bVar0 = false;
	switch (iParam0)
	{
		case 0:
			bVar0 = __LIB_8__::func_344(1749008611);
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(2111695903);
			}
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(-1947695052);
			}
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(-1559513478);
			}
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(-1321905459);
			}
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(758066107);
			}
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(-1995054197);
			}
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(-1623126047);
			}
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(1943484686);
			}
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(2056603274);
			}
			break;
		case 1:
			bVar0 = __LIB_8__::func_344(-590227673);
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(872406077);
			}
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(1471226731);
			}
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(-1149736196);
			}
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(-1926787493);
			}
			break;
		case 2:
			bVar0 = __LIB_8__::func_344(-586415580);
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(1251859782);
			}
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(994786977);
			}
			break;
		case 3:
			bVar0 = __LIB_8__::func_344(-1877706739);
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(905216692);
			}
			if (!bVar0)
			{
				bVar0 = __LIB_8__::func_344(-1299414622);
			}
			break;
	}
	return bVar0;
}

void func_850(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	iVar0 = (iParam1 - Global_40.f_9096[iParam0 /*12*/].f_3);
	*iParam2 = (iVar0 / 86400);
	iVar0 = (iVar0 - (*iParam2 * 86400));
	*iParam3 = (iVar0 / 3600);
	iVar0 = (iVar0 - *iParam3 * 3600);
	*iParam4 = (iVar0 / 60);
	iVar0 = (iVar0 - *iParam4 * 60);
	*iParam5 = iVar0;
}

bool func_851()
{
	return Global_1935630.f_23;
}

void func_860(int iParam0)
{
	int iVar0;
	iVar0 = 948;
	while (iVar0 <= 951)
	{
		func_1588(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 938;
	while (iVar0 <= 940)
	{
		func_1588(iVar0, iParam0);
		iVar0++;
	}
}

void func_862(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam0 == 1)
	{
		func_1589(&iVar1, &iVar2, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		__LIB_1__::func_902(__LIB_7__::func_942(iParam0), &iVar1, &iVar2, 0, 0);
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (__LIB_0__::func_29(iVar0))
		{
			if (bParam1)
			{
				if (!__LIB_0__::func_117(iVar0, 32))
				{
					__LIB_0__::func_123(iVar0, 32);
				}
			}
			else
			{
				__LIB_13__::func_215(iVar0);
				if (__LIB_0__::func_117(iVar0, 32))
				{
					__LIB_0__::func_121(iVar0, 32);
				}
			}
		}
		iVar0++;
	}
}

int func_870(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, int iParam10, float fParam11)
{
	return func_1592(2, vParam0, vParam3, vParam6, bParam9, iParam10, fParam11);
}

bool func_892(int iParam0)
{
	if (__LIB_0__::func_86(Global_1392388.f_10[iParam0 /*13*/].f_2) || __LIB_0__::func_86(Global_1392388.f_10[iParam0 /*13*/].f_5))
	{
		return false;
	}
	return true;
}

bool func_893(int iParam0)
{
	if (!__LIB_1__::func_305(3))
	{
		return false;
	}
	if (__LIB_2__::func_776())
	{
		return false;
	}
	if (!__LIB_6__::func_706(iParam0))
	{
		return false;
	}
	if (iParam0 == 3 || iParam0 >= 7)
	{
		return false;
	}
	if (__LIB_6__::func_759(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_627(128, 0))
	{
		return false;
	}
	if (!__LIB_10__::func_716(2, -1))
	{
		return false;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (__LIB_6__::func_844(iParam0) && __LIB_5__::func_219(21))
	{
		return false;
	}
	if (iParam0 == 4 && __LIB_0__::func_627(92, 0))
	{
		return false;
	}
	if (__LIB_0__::func_20(Global_1392388.f_10[iParam0 /*13*/].f_1) && __LIB_0__::func_21(Global_1392388.f_10[iParam0 /*13*/].f_1, 33554432))
	{
		return false;
	}
	if (__LIB_0__::func_29(Global_1392388.f_10[iParam0 /*13*/]) && !__LIB_2__::func_767(Global_1392388.f_10[iParam0 /*13*/], 0))
	{
		return false;
	}
	if (__LIB_0__::func_923(Global_40.f_9146.f_110) && !__LIB_1__::func_426(Global_40.f_9146.f_110, 1))
	{
		return false;
	}
	if (__LIB_1__::func_220(Global_1392388.f_10[iParam0 /*13*/].f_1))
	{
		if (func_905(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_894(int iParam0)
{
	float fVar0;
	if (!__LIB_1__::func_305(3))
	{
		return false;
	}
	if (!__LIB_6__::func_706(iParam0))
	{
		return false;
	}
	if (__LIB_6__::func_759(iParam0))
	{
		return false;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392388, false))
	{
		return false;
	}
	if (__LIB_0__::func_627(128, 0) && __LIB_0__::func_12() == 26)
	{
		return false;
	}
	if (!__LIB_10__::func_716(2, -1))
	{
		return false;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (__LIB_6__::func_844(iParam0) && __LIB_5__::func_219(21))
	{
		return false;
	}
	if (iParam0 == 4 && __LIB_0__::func_627(92, 0))
	{
		return false;
	}
	if (__LIB_0__::func_20(Global_1392388.f_10[iParam0 /*13*/].f_1) && __LIB_0__::func_21(Global_1392388.f_10[iParam0 /*13*/].f_1, 33554432))
	{
		return false;
	}
	if (__LIB_0__::func_29(Global_1392388.f_10[iParam0 /*13*/]) && !__LIB_2__::func_767(Global_1392388.f_10[iParam0 /*13*/], 0))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST2(Global_1392388.f_10[iParam0 /*13*/].f_2, Global_36);
	if (fVar0 >= 10000f)
	{
		return false;
	}
	if (__LIB_1__::func_44(Global_1347702[37 /*49*/].f_15))
	{
		return false;
	}
	if (__LIB_1__::func_220(Global_1392388.f_10[iParam0 /*13*/].f_1))
	{
		if (func_905(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_898(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if ((__LIB_0__::func_702(Global_1392388.f_10[iParam0 /*13*/].f_8) || __LIB_1__::func_44(Global_1392388.f_10[iParam0 /*13*/].f_8)) || __LIB_1__::func_25(Global_1392388.f_10[iParam0 /*13*/].f_8, 1))
	{
		return true;
	}
	return false;
}

void func_899(int iParam0)
{
	int iVar0;
	iVar0 = 4;
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, __LIB_6__::func_773(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, __LIB_6__::func_773(iParam0));
	}
}

void func_900(int iParam0, bool bParam1)
{
	__LIB_0__::func_769();
	func_901();
	if (!__LIB_6__::func_706(iParam0))
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_9))
	{
		__LIB_1__::func_544(Global_1392388.f_10[iParam0 /*13*/].f_9);
		VOLUME::_DELETE_VOLUME(Global_1392388.f_10[iParam0 /*13*/].f_9);
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_11))
	{
		MAP::REMOVE_BLIP(&(Global_1392388.f_10[iParam0 /*13*/].f_11));
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_10))
	{
		MAP::REMOVE_BLIP(&(Global_1392388.f_10[iParam0 /*13*/].f_10));
	}
	if (bParam1)
	{
		__LIB_2__::func_161(Global_1392388.f_10[iParam0 /*13*/].f_5, 125f, 5);
	}
	Global_40.f_9146.f_4[iParam0] = 0;
	Global_40.f_9146.f_79[iParam0] = -15;
	if (__LIB_6__::func_708(iParam0))
	{
		Global_40.f_9146.f_3 = -1;
		if (Global_1392388.f_10[iParam0 /*13*/].f_8 == __LIB_0__::func_298(0))
		{
			__LIB_1__::func_645(Global_1392388.f_10[iParam0 /*13*/].f_8);
		}
		else
		{
			__LIB_1__::func_559(Global_1392388.f_10[iParam0 /*13*/].f_8, 1, 2);
		}
	}
	__LIB_13__::func_376(-1);
}

void func_901()
{
	int iVar0[7];
	int iVar8;
	iVar0[0] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_01");
	iVar0[1] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_02");
	iVar0[2] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_03");
	iVar0[3] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_04");
	iVar0[4] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_07");
	iVar0[5] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_08");
	iVar0[6] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_09");
	iVar8 = 0;
	while (iVar8 < 7)
	{
		if (__LIB_1__::func_707(iVar0[iVar8], 1, 0))
		{
			func_1602(iVar0[iVar8], 1, 1, -142743235, 0);
		}
		iVar8++;
	}
}

bool func_905(int iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_842(iParam0))
	{
		iVar0 = 476;
	}
	else
	{
		iVar0 = 72;
	}
	iVar1 = __LIB_1__::func_334(iVar0);
	if (__LIB_0__::func_272(iVar1, 0))
	{
		if (PED::_GET_PED_BLACKBOARD_BOOL(iVar1, __LIB_10__::func_647()))
		{
			return true;
		}
	}
	return false;
}

void func_921(int iParam0)
{
	int iVar0;
	Global_1392240.f_1[iParam0 /*18*/] = { 0f, 0f, 0f };
	Global_1392240.f_1[iParam0 /*18*/].f_4 = -1;
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	__LIB_13__::func_881(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_1__::func_941(Global_1392240.f_1[iParam0 /*18*/].f_6[iVar0]);
		Global_1392240.f_1[iParam0 /*18*/].f_6[iVar0] = 0;
		iVar0++;
	}
	Global_1392240.f_1[iParam0 /*18*/].f_13 = -1;
	Global_1392240.f_1[iParam0 /*18*/].f_14 = 0;
}

char* func_922(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HOMEROB_ABERDEEN_PIG_FARM";
		case 1:
			return "HOMEROB_CARMODY_DELL";
		case 2:
			return "HOMEROB_CATFISH_JACKSONS";
		case 3:
			return "HOMEROB_CHEZ_PORTER";
		case 4:
			return "HOMEROB_LONNIES_SHACK";
		case 5:
			return "HOMEROB_LITE_VAN_HORN";
		case 6:
			return "HOMEROB_ROCKY_SEVEN";
		case 7:
			return "HOMEROB_WATSONS_CABIN";
		default:
			break;
	}
	return "HOMEROB_INVALID";
}

void func_934(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			__LIB_8__::func_783(731);
			__LIB_8__::func_783(732);
			break;
		case 1:
			__LIB_8__::func_783(737);
			__LIB_8__::func_783(869);
			__LIB_8__::func_783(740);
			break;
		case 2:
			__LIB_8__::func_783(741);
			__LIB_8__::func_783(743);
			__LIB_8__::func_783(742);
			break;
		case 3:
			__LIB_8__::func_783(794);
			__LIB_8__::func_783(795);
			__LIB_8__::func_783(796);
			__LIB_8__::func_783(797);
			__LIB_8__::func_783(798);
			break;
		case 4:
			__LIB_8__::func_783(764);
			__LIB_8__::func_783(765);
			__LIB_8__::func_783(766);
			__LIB_8__::func_783(767);
			break;
		case 5:
			break;
		case 6:
			__LIB_8__::func_783(799);
			break;
		case 7:
			__LIB_8__::func_783(744);
			break;
	}
}

bool func_936(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	iVar0 = __LIB_10__::func_631(iParam0);
	if (!__LIB_1__::func_426(iVar0, 1) && iVar0 != -15)
	{
		__LIB_9__::func_92(iVar0, &uVar1, &uVar2, &uVar3, &uVar4, &uVar5, &uVar6);
		return false;
	}
	return true;
}

bool func_940()
{
	if (__LIB_0__::func_627(95, 0) && !__LIB_1__::func_200(95))
	{
		return true;
	}
	return false;
}

void func_948(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	char* sVar5;
	if (!__LIB_16__::func_405(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392240.f_1[iParam0 /*18*/].f_5))
	{
		return;
	}
	iVar0 = 0;
	iVar1 = -634961968;
	switch (iParam0)
	{
		case 6:
			if (func_1628())
			{
				iVar0 = joaat("BLIP_RC_CHARLOTTE_BALFOUR");
				iVar1 = -1337945352;
			}
			else
			{
				iVar0 = joaat("BLIP_RC");
				iVar1 = -1337945352;
			}
			break;
		default:
			break;
	}
	vVar2 = { Global_1392240.f_1[iParam0 /*18*/] };
	switch (iParam0)
	{
		case 6:
			sVar5 = func_1629(&vVar2);
			break;
	}
	Global_1392240.f_1[iParam0 /*18*/].f_5 = MAP::_BLIP_ADD_FOR_COORD(iVar1, vVar2);
	if (iVar0 != 0)
	{
		MAP::SET_BLIP_SPRITE(Global_1392240.f_1[iParam0 /*18*/].f_5, iVar0, true);
	}
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1392240.f_1[iParam0 /*18*/].f_5, sVar5);
	if (bParam1)
	{
		MAP::_BLIP_SET_MODIFIER(Global_1392240.f_1[iParam0 /*18*/].f_5, 580546400);
	}
}

int func_949(int iParam0)
{
	char* sVar0;
	vector3 vVar1;
	sVar0 = "homeinvasion";
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		return 0;
	}
	if (__LIB_18__::func_923(iParam0))
	{
		return 0;
	}
	vVar1.x = iParam0;
	vVar1.f_1 = Global_1392240.f_1[iParam0 /*18*/].f_5;
	vVar1.f_2 = __LIB_4__::func_355();
	Global_1392240 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(sVar0, &vVar1, 3, 10000);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
	__LIB_9__::func_770(iParam0, 512);
	return 1;
}

void func_961(var uParam0)
{
	switch (*uParam0)
	{
		case 4:
			func_1638(uParam0);
			break;
	}
	if (*uParam0 != 0)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_2, false))
		{
			func_1638(uParam0);
		}
		if (uParam0->f_14 > -1)
		{
			if (!Global_1359489.f_63.f_242[uParam0->f_14 /*18*/].f_15)
			{
				func_1638(uParam0);
			}
		}
	}
}

void func_962(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 3)
	{
		return;
	}
	if (uParam0->f_15)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
		{
			func_1639(iParam1);
		}
	}
}

int func_967(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1520236173;
		case 7:
			return 942237899;
		case 5:
			return 38622334;
		case 2:
			return -1502898129;
		case 1:
			return 2124609802;
		case 20:
			return -1789914677;
		case 10:
			return 2025734076;
		case 9:
			return -2114811776;
		case 6:
			return -1569839217;
		case 17:
			return -978313765;
		case 8:
			return 838722941;
		case 18:
			return 1341067472;
		case 22:
			return -894982890;
		case 4:
			return 179150616;
	}
	return 0;
}

float func_975(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (__LIB_1__::func_198(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), 1))
			{
				return 360f;
			}
			break;
	}
	return 900f;
}

void func_978()
{
	struct<16> Var0;
	Var0.f_15 = joaat("DUTCH_GANG");
	Var0 = PLAYER::PLAYER_PED_ID();
	Var0.f_12 = 10;
	Var0.f_4 = joaat("DUTCH_GANG");
	Var0.f_8 = 0;
	MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
}

void func_980()
{
	struct<16> Var0;
	Var0.f_15 = joaat("DUTCH_GANG");
	Var0 = PLAYER::PLAYER_PED_ID();
	Var0.f_12 = 9;
	Var0.f_4 = joaat("DUTCH_GANG");
	Var0.f_8 = 0;
	MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
}

bool func_983(int iParam0, float fParam1, var uParam2)
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1945938[iParam0 /*18*/].f_16, false))
	{
		return true;
	}
	switch (Global_1945938[iParam0 /*18*/].f_5)
	{
		case 1:
			if (!VOLUME::_DOES_VOLUME_EXIST(Global_1945938[iParam0 /*18*/].f_10))
			{
				return true;
			}
			*uParam2 = { VOLUME::_GET_VOLUME_COORDS(Global_1945938[iParam0 /*18*/].f_10) };
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1945938[iParam0 /*18*/].f_11))
			{
				return true;
			}
			*uParam2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_1945938[iParam0 /*18*/].f_11, Global_1945938[iParam0 /*18*/].f_12) };
			break;
		case 5:
			*uParam2 = { 0f, 0f, 0f };
			*fParam1 = 0f;
			return false;
		case 2:
			*uParam2 = { Global_1945938[iParam0 /*18*/].f_6 };
			break;
		case 0:
		case 4:
			return false;
	}
	*fParam1 = BUILTIN::VDIST2(Global_36, *uParam2);
	if (!__LIB_0__::func_141(iParam0, 128))
	{
		if (*fParam1 > 22500f)
		{
			return true;
		}
	}
	return false;
}

bool func_985()
{
	char cVar0[32];
	if (!Global_1879534.f_1)
	{
		return true;
	}
	StringCopy(&cVar0, "MUD1_EXT", 32);
	if (func_1651(cVar0))
	{
		return true;
	}
	return false;
}

void func_986()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		iVar1 = __LIB_3__::func_323(iVar0);
		if (iVar1 != -1)
		{
			if (__LIB_5__::func_864(iVar1) != -1 && iVar1 != __LIB_0__::func_61())
			{
				if (iVar0 == Global_1934051.f_33 && __LIB_1__::func_59(iVar0))
				{
					__LIB_1__::func_96(iVar0, 7148155);
					__LIB_9__::func_945(&(Global_1934051.f_33), 0);
				}
				iVar2 = __LIB_0__::func_560(iVar1, 19);
				if (iVar2 != -1)
				{
					if (iVar0 == Global_1914319.f_15936[iVar2 /*6*/] && __LIB_1__::func_59(iVar0))
					{
						if (Global_1914319.f_15936[iVar2 /*6*/].f_5)
						{
							Global_1914319.f_15936[iVar2 /*6*/].f_5 = 0;
						}
						__LIB_9__::func_945(&(Global_1914319.f_15936[iVar2 /*6*/]), 0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_987()
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	if (PATHFIND::_0x5AC0944C156E5F44("dewclm_nav_camp_00"))
	{
		PATHFIND::_0x527B97C203BB8606("dewclm_nav_camp_00");
	}
	if (PATHFIND::_0x5AC0944C156E5F44("shb_nav_camp_00"))
	{
		PATHFIND::_0x527B97C203BB8606("shb_nav_camp_00");
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (__LIB_5__::func_869(iVar0))
		{
			iVar9 = 0;
			while (iVar9 <= 2)
			{
				if (__LIB_5__::func_992(iVar0, iVar9))
				{
					Var1 = { __LIB_6__::func_569(iVar0, iVar9) };
					if (PATHFIND::_0x5AC0944C156E5F44(&Var1))
					{
						PATHFIND::_0x527B97C203BB8606(&Var1);
					}
				}
				iVar9++;
			}
		}
		iVar0++;
	}
}

void func_988(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	__LIB_6__::func_135(iParam0);
	iVar1 = __LIB_1__::func_953(iParam0);
	vVar2 = { __LIB_2__::func_116(iVar1, 1) };
	if (__LIB_0__::func_317() == iParam0)
	{
		vVar5 = { __LIB_6__::func_70(iParam0) };
		fVar8 = __LIB_5__::func_930(iParam0);
		__LIB_19__::func_178(iParam0, bParam1);
		if (!__LIB_1__::func_209(vVar5))
		{
			__LIB_1__::func_994(vVar5, fVar8, "CaravanCamp", 0, 0, 4, 0, -1082130432 /* Float: -1f */);
		}
		__LIB_6__::func_165(iParam0);
		if (__LIB_5__::func_869(iParam0))
		{
			iVar0 = __LIB_6__::func_90(iParam0);
			if (__LIB_0__::func_592() != 2)
			{
				if (__LIB_0__::func_30(iVar0))
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(iVar0))
					{
						STREAMING::_REQUEST_IMAP(iVar0);
					}
				}
			}
			else if (__LIB_0__::func_30(iVar0))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar0))
				{
					STREAMING::_REMOVE_IMAP(iVar0);
				}
			}
			__LIB_6__::func_646(iParam0);
		}
		__LIB_5__::func_931(iParam0, 1);
		if (!bParam2)
		{
			__LIB_6__::func_424(iParam0, iVar1, 1, 1);
		}
	}
	else
	{
		__LIB_6__::func_653(iParam0, &iVar0);
		if (__LIB_1__::func_209(vVar2))
		{
			__LIB_1__::func_222(vVar2, 0);
		}
		__LIB_5__::func_931(iParam0, 0);
		if (!bParam2)
		{
			__LIB_6__::func_424(iParam0, iVar1, 0, 0);
		}
	}
}

void func_989()
{
	int iVar0;
	iVar0 = __LIB_7__::func_779();
	if (iVar0 != -1)
	{
		Global_1395601.f_5[iVar0 /*28*/].f_15 = { func_1668() };
	}
}

void func_990()
{
	if (__LIB_0__::func_474(603))
	{
		return;
	}
	if (__LIB_0__::func_396(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_6__::func_155(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
		{
			__LIB_1__::func_240(603, 0);
		}
	}
}

void func_993(int iParam0)
{
	int iVar0;
	if (*iParam0 == -15)
	{
		*iParam0 = __LIB_0__::func_23();
	}
	if (func_1671())
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 23);
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 31);
	}
	__LIB_1__::func_446(iParam0, 0, 0, iVar0, 0, 0, 0, 0);
}

void func_995()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = -1;
	iVar1 = 0;
	while (true)
	{
		iVar1++;
		if (iVar1 > 25)
		{
			return;
		}
		iVar2 = func_1672();
		if (__LIB_13__::func_553(iVar2))
		{
		}
		else if (!__LIB_6__::func_88(iVar2))
		{
		}
		else if (__LIB_0__::func_699(iVar2))
		{
		}
		else if (__LIB_5__::func_795(iVar2))
		{
		}
		else if (__LIB_0__::func_903(iVar2))
		{
		}
		else if (iVar2 == 10 && !__LIB_1__::func_187(63))
		{
		}
		else if (Global_40.f_4283.f_332[0] == iVar2 || Global_40.f_4283.f_332[1] == iVar2)
		{
		}
		else
		{
			iVar0 = iVar2;
		}
	else
	{
		}
	}
	iVar3 = func_1677(iVar0);
	iVar4 = func_1678(iVar3);
	if (iVar3 == 0)
	{
		__LIB_7__::func_423(iVar0, iVar4);
	}
	else
	{
		func_1680(iVar0, iVar3, iVar4);
	}
	Global_40.f_4283.f_332[1] = Global_40.f_4283.f_332[0];
	Global_40.f_4283.f_332[0] = iVar0;
}

void func_996(int iParam0)
{
	int iVar0;
	int iVar1;
	if (*iParam0 == -15)
	{
		*iParam0 = __LIB_0__::func_23();
	}
	if (__LIB_6__::func_192())
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(10, 21);
	}
	else
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(6, 14);
	}
	__LIB_1__::func_446(iParam0, 0, 0, iVar1, iVar0, 0, 0, 0);
}

void func_997()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<12> Var16;
	int iVar30;
	if (__LIB_6__::func_512() <= 0)
	{
		return;
	}
	Var2 = { __LIB_0__::func_523(0, 1426626782, -1591664384, -1591664384, 0, 0) };
	if (__LIB_0__::func_801(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (__LIB_0__::func_236(&Var16, iVar30, iVar0, iVar1))
			{
				if (__LIB_5__::func_796(Var16.f_4) && (!__LIB_6__::func_446(Var16.f_4) || Var16.f_11 > 1))
				{
					__LIB_6__::func_301(Var16.f_4, 2, 1, -142743235);
				}
				else
				{
					iVar30++;
				}
				__LIB_0__::func_238(iVar0);
			}
		}
	}
}

void func_1002(int iParam0, int iParam1)
{
	Global_1327490[iParam0 /*11*/].f_1 = iParam1;
}

bool func_1003(int iParam0, int iParam1)
{
	return (Global_1327490[iParam0 /*11*/] && iParam1) != 0;
}

bool func_1004(int iParam0, int iParam1)
{
	if (!__LIB_10__::func_619(iParam0))
	{
		return false;
	}
	return (Global_1327490[iParam0 /*11*/] && iParam1) != 0;
}

bool func_1006()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_1692(iVar1))
		{
			Global_1327490[iVar1 /*11*/].f_9 = (1f * IntToFloat((7 - Global_1327490[iVar1 /*11*/].f_2)));
			iVar0 = 1;
		}
		else
		{
			Global_1327490[iVar1 /*11*/].f_9 = -999.9f;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1007()
{
	float fVar0;
	int iVar1;
	int iVar2;
	fVar0 = -99999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (Global_1327490[iVar2 /*11*/].f_9 > fVar0)
		{
			fVar0 = Global_1327490[iVar2 /*11*/].f_9;
			iVar1 = iVar2;
		}
		iVar2++;
	}
	return iVar1;
}

bool func_1008(int iParam0)
{
	return __LIB_0__::func_27(Global_1425351.f_17, iParam0);
}

int func_1009()
{
	return joaat("UNDERTAKER");
}

int func_1014(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_63(iVar0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	__LIB_0__::func_794(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (__LIB_0__::func_192(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { __LIB_1__::func_615(iVar0, 0, 1) };
	iVar10 = __LIB_1__::func_119(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1699(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_1701(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

void func_1025(int iParam0, int iParam1)
{
	if (Global_40.f_9571[iParam0 /*10*/].f_8 >= iParam1)
	{
		switch (iParam0)
		{
			case 0:
				__LIB_5__::func_736(0, joaat("PLAN_ROBBERY_A"), 1);
				__LIB_5__::func_736(0, joaat("PLAN_ROBBERY_B"), 1);
				__LIB_5__::func_736(0, joaat("GANG_POLITICS_A"), 1);
				__LIB_5__::func_736(0, joaat("GANG_POLITICS_B"), 1);
				break;
			case 2:
				__LIB_5__::func_736(2, joaat("WAR_STORY"), 1);
				__LIB_5__::func_736(2, joaat("CAPTIVE_LAWMAN"), 1);
				__LIB_5__::func_736(2, joaat("CAPTIVE_OFFICIAL"), 1);
				break;
			case 1:
				__LIB_5__::func_736(1, joaat("FIND_HAT"), 1);
				__LIB_5__::func_736(1, joaat("FIND_SHOE"), 1);
				break;
			case 3:
				__LIB_5__::func_736(3, joaat("ARGUMENT_DEATH"), 1);
				__LIB_5__::func_736(3, joaat("ARGUMENT_SETTLE"), 1);
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				if (__LIB_0__::func_27(Global_40.f_10991.f_35[0], 2048))
				{
					__LIB_5__::func_736(0, joaat("PLAN_ROBBERY_A"), 1);
				}
				if (__LIB_0__::func_27(Global_40.f_10991.f_35[0], 8192))
				{
					__LIB_5__::func_736(0, joaat("PLAN_ROBBERY_B"), 1);
				}
				if (__LIB_0__::func_27(Global_40.f_10991.f_35[0], 4096))
				{
					__LIB_5__::func_736(0, joaat("GANG_POLITICS_A"), 1);
				}
				if (__LIB_0__::func_27(Global_40.f_10991.f_35[0], 16384))
				{
					__LIB_5__::func_736(0, joaat("GANG_POLITICS_B"), 1);
				}
				break;
			case 2:
				if (__LIB_0__::func_27(Global_40.f_10991.f_35[0], 256))
				{
					__LIB_5__::func_736(2, joaat("WAR_STORY"), 1);
				}
				if (__LIB_0__::func_27(Global_40.f_10991.f_35[0], 512))
				{
					__LIB_5__::func_736(2, joaat("CAPTIVE_LAWMAN"), 1);
				}
				if (__LIB_0__::func_27(Global_40.f_10991.f_35[0], 1024))
				{
					__LIB_5__::func_736(2, joaat("CAPTIVE_OFFICIAL"), 1);
				}
				break;
			case 1:
				if (__LIB_0__::func_27(Global_40.f_10991.f_35[0], 16))
				{
					__LIB_5__::func_736(1, joaat("FIND_HAT"), 1);
				}
				if (__LIB_0__::func_27(Global_40.f_10991.f_35[0], 32))
				{
					__LIB_5__::func_736(1, joaat("FIND_SHOE"), 1);
				}
				break;
			case 3:
				if (__LIB_0__::func_27(Global_40.f_10991.f_35[0], 32768))
				{
					__LIB_5__::func_736(3, joaat("ARGUMENT_DEATH"), 1);
				}
				if (__LIB_0__::func_27(Global_40.f_10991.f_35[0], 65536))
				{
					__LIB_5__::func_736(3, joaat("ARGUMENT_SETTLE"), 1);
				}
				break;
		}
	}
}

int func_1026(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (*uParam1)
			{
				case 0:
					return 0;
				case 1:
					return 11;
				case 2:
					return 2;
				default:
					break;
			}
			break;
		case 1:
			switch (*uParam1)
			{
				case 0:
					return 1;
				case 1:
					return 9;
				case 2:
					return 4;
				default:
					break;
			}
			break;
		case 2:
			switch (*uParam1)
			{
				case 0:
					return 2;
				case 1:
					return 10;
				case 2:
					return 0;
				case 3:
					return 11;
				default:
					break;
			}
			break;
		case 3:
			switch (*uParam1)
			{
				case 0:
					return 3;
				case 1:
					return 7;
				case 2:
					return 9;
				default:
					break;
			}
			break;
		case 6:
			switch (*uParam1)
			{
				case 0:
					return 6;
				case 1:
					return 3;
				case 2:
					return 10;
				case 3:
					return 9;
				default:
					break;
			}
			break;
		case 7:
			switch (*uParam1)
			{
				case 0:
					return 7;
				case 1:
					return 3;
				case 2:
					return 9;
				default:
					break;
			}
			break;
		case 9:
			switch (*uParam1)
			{
				case 0:
					return 9;
				case 1:
					return 1;
				case 2:
					return 11;
				default:
					break;
			}
			break;
		case 10:
			switch (*uParam1)
			{
				case 0:
					return 10;
				case 1:
					return 6;
				case 2:
					return 9;
				case 3:
					return 11;
				case 4:
					return 2;
				default:
					break;
			}
			break;
		case 11:
			switch (*uParam1)
			{
				case 0:
					return 11;
				case 1:
					return 0;
				case 2:
					return 2;
				case 3:
					return 9;
				default:
					break;
			}
			break;
		case 12:
			switch (*uParam1)
			{
				case 0:
					return 12;
				case 1:
					return 4;
				default:
					break;
			}
			break;
		case 16:
			switch (*uParam1)
			{
				case 0:
					return 16;
				case 1:
					return 15;
				default:
					break;
			}
			break;
	}
	*uParam1 = 0;
	return iParam0;
}

int func_1027(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		case 1:
			return 15;
		case 2:
			return 5;
		case 15:
			return 23;
		case 3:
			return 15;
		case 13:
			return 20;
		case 4:
			return 10;
		case 6:
			return 7;
		case 7:
			return 4;
		case 9:
			return 35;
		case 16:
			return 24;
		case 14:
			return 16;
		case 10:
			return 13;
		case 11:
			return 23;
		case 12:
			return 11;
		default:
			break;
	}
	return 0;
}

void func_1028(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 287385;
			break;
		case 1:
			*uParam1 = 287596;
			break;
		case 2:
			*uParam1 = 287975;
			break;
		case 15:
			*uParam1 = 288114;
			break;
		case 3:
			*uParam1 = 288685;
			break;
		case 13:
			*uParam1 = 289064;
			break;
		case 4:
			*uParam1 = 289563;
			break;
		case 6:
			*uParam1 = 289822;
			break;
		case 7:
			*uParam1 = 290009;
			break;
		case 9:
			*uParam1 = 290124;
			break;
		case 16:
			*uParam1 = 290983;
			break;
		case 14:
			*uParam1 = 291578;
			break;
		case 10:
			*uParam1 = 291981;
			break;
		case 11:
			*uParam1 = 292312;
			break;
		case 12:
			*uParam1 = 292883;
			break;
		default:
			*uParam1 = 292883;
			break;
	}
}

bool func_1029(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 7:
					iVar0 = 0;
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 7:
					iVar0 = 0;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 2:
				case 3:
					iVar0 = 0;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 1:
				case 4:
					iVar0 = 0;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 4:
				case 6:
					iVar0 = 0;
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 4:
				case 8:
				case 9:
				case 10:
				case 15:
					iVar0 = 0;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 9:
				case 12:
					iVar0 = 0;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 7:
				case 8:
					iVar0 = 0;
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 14:
					iVar0 = 0;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 8:
					iVar0 = 0;
					break;
			}
			break;
	}
	if (!__LIB_0__::func_181())
	{
		switch (iParam0)
		{
			case 4:
			case 12:
			case 13:
			case 14:
			case 15:
			case 16:
				iVar0 = 0;
				break;
		}
	}
	return iVar0;
}

int func_1033(vector3 vParam0, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -1;
	if (bParam4)
	{
		iVar2 = 3;
		iVar3 = 5;
	}
	else
	{
		iVar2 = 0;
		iVar3 = 2;
	}
	iVar1 = iVar2;
	while (iVar1 <= iVar3)
	{
		if (BUILTIN::VDIST(Global_1393237.f_11[iVar1 /*30*/].f_3, vParam0) < 10f)
		{
			*iParam3 = 0;
			return iVar1;
		}
		if ((iVar0 == -1 && !func_1723(iVar1)) && (__LIB_18__::func_255(iVar1) || (!bParam4 && __LIB_0__::func_636(Global_1393237.f_11[iVar1 /*30*/].f_3, Global_36) > 2000f)))
		{
			*iParam3 = 1;
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (!__LIB_5__::func_733(iVar0, 32768))
	{
		__LIB_10__::func_426(iVar0);
	}
	return iVar0;
}

bool func_1037(vector3 vParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_5__::func_658(iVar0))
		{
			if (__LIB_0__::func_175(vParam0, Global_1393237.f_11[iVar0 /*30*/].f_3, 500f, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1042()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_1730(iVar0))
		{
			func_1046(iVar0);
			func_1048(iVar0);
			__LIB_3__::func_533(iVar0, 0);
		}
		iVar0++;
	}
}

bool func_1043(int iParam0)
{
	if (__LIB_5__::func_733(iParam0, 2097152))
	{
		return false;
	}
	if (Global_1393237.f_11[iParam0 /*30*/].f_2 == 0)
	{
		if (__LIB_5__::func_733(iParam0, 8192))
		{
			return false;
		}
		if (__LIB_5__::func_692(iParam0) == 0)
		{
			return false;
		}
	}
	if (__LIB_5__::func_733(iParam0, 524288))
	{
		return true;
	}
	if (Global_1393237.f_11[iParam0 /*30*/].f_2 == -1)
	{
		if (!__LIB_5__::func_733(iParam0, 1))
		{
			return false;
		}
	}
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return false;
	}
	if (__LIB_18__::func_255(iParam0))
	{
		if (__LIB_5__::func_733(iParam0, 1))
		{
		}
		else
		{
			return false;
		}
	}
	if (__LIB_5__::func_733(iParam0, 131072))
	{
		return false;
	}
	if (__LIB_0__::func_636(Global_1393237.f_11[iParam0 /*30*/].f_3, Global_36) > 2000f)
	{
		return false;
	}
	if (Global_1393237.f_11[iParam0 /*30*/].f_2 == 1)
	{
		if (!__LIB_5__::func_733(iParam0, 1))
		{
			if (func_1733())
			{
				return false;
			}
		}
	}
	return true;
}

void func_1045(int iParam0)
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	float fVar6;
	STREAMING::REQUEST_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_DISTANCE_SMOKE")))
	{
		fVar4 = func_1734(iParam0);
		if (iParam0 < 3)
		{
			iVar5 = 2;
		}
		else
		{
			iVar5 = 1;
		}
		vVar1 = { __LIB_10__::func_692(iParam0) };
		fVar6 = __LIB_3__::func_715(iVar5);
		fVar6 = (fVar6 * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.9f, 1.1f));
		GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
		Global_1393237.f_11[iParam0 /*30*/].f_22 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_campfire_distance_smoke_script", vVar1, 0f, 0f, fVar4, fVar6, false, false, false, false);
		fVar0 = __LIB_3__::func_714(iVar5);
		Global_1393237.f_11[iParam0 /*30*/].f_25 = MISC::GET_GAME_TIMER();
		Global_1393237.f_11[iParam0 /*30*/].f_27 = __LIB_3__::func_965(MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vVar1, true));
		Global_1393237.f_11[iParam0 /*30*/].f_28 = __LIB_3__::func_965(__LIB_3__::func_713(iVar5));
		if (Global_1393237.f_11[iParam0 /*30*/].f_28 > 10f)
		{
			Global_1393237.f_11[iParam0 /*30*/].f_28 = 10f;
		}
		if (Global_1393237.f_11[iParam0 /*30*/].f_27 > Global_1393237.f_11[iParam0 /*30*/].f_28)
		{
			Global_1393237.f_11[iParam0 /*30*/].f_27 = Global_1393237.f_11[iParam0 /*30*/].f_28;
		}
		if (__LIB_1__::func_874(vVar1, 1) > (CAM::GET_GAMEPLAY_CAM_FOV() + 15f))
		{
			Global_1393237.f_11[iParam0 /*30*/].f_26 = 1f;
			Global_1393237.f_11[iParam0 /*30*/].f_27 = Global_1393237.f_11[iParam0 /*30*/].f_28;
		}
		else
		{
			Global_1393237.f_11[iParam0 /*30*/].f_26 = 0f;
		}
		fVar0 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::FLOOR((fVar0 - 15f)), BUILTIN::FLOOR((fVar0 + 15f))));
		fVar0 = (fVar0 / 255f);
		GRAPHICS::_0x9DDC222D85D5AF2A(Global_1393237.f_11[iParam0 /*30*/].f_22, Global_1393237.f_11[iParam0 /*30*/].f_27);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(Global_1393237.f_11[iParam0 /*30*/].f_22, fVar0, fVar0, fVar0, false);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(Global_1393237.f_11[iParam0 /*30*/].f_22, Global_1393237.f_11[iParam0 /*30*/].f_26);
	}
}

void func_1046(int iParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_22))
	{
		if (Global_1935630.f_12)
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Global_1393237.f_11[iParam0 /*30*/].f_22, false);
		}
		else
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Global_1393237.f_11[iParam0 /*30*/].f_22, false);
		}
		Global_1393237.f_11[iParam0 /*30*/].f_22 = 0;
		Global_1393237.f_11[iParam0 /*30*/].f_26 = -1f;
		Global_1393237.f_11[iParam0 /*30*/].f_25 = -1;
	}
}

void func_1047(int iParam0)
{
	vector3 vVar0;
	STREAMING::REQUEST_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_DISTANCE_SMOKE")))
	{
		if (iParam0 < 3)
		{
			GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
			Global_1393237.f_11[iParam0 /*30*/].f_23 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_campfire_distance_light", Global_1393237.f_11[iParam0 /*30*/].f_3, 0f, 0f, 0f, 1f, false, false, false, false);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Global_1393237.f_11[iParam0 /*30*/].f_23, "size", 1f, false);
		}
		else
		{
			GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
			vVar0 = { __LIB_10__::func_692(iParam0) };
			Global_1393237.f_11[iParam0 /*30*/].f_23 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_campfire_distance_light", vVar0, 0f, 0f, 0f, 1f, false, false, false, false);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Global_1393237.f_11[iParam0 /*30*/].f_23, "size", 1f, false);
		}
	}
}

void func_1048(int iParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_23))
	{
		if (Global_1935630.f_12)
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Global_1393237.f_11[iParam0 /*30*/].f_23, false);
		}
		else
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Global_1393237.f_11[iParam0 /*30*/].f_23, false);
		}
		Global_1393237.f_11[iParam0 /*30*/].f_23 = 0;
	}
}

void func_1049(int iParam0)
{
	func_1742(iParam0);
	func_1743(iParam0);
	if (!MAP::DOES_BLIP_EXIST(Global_1357522.f_16[iParam0]))
	{
		Global_1357522.f_16[iParam0] = MAP::_BLIP_ADD_FOR_COORD(-336063235, Global_1357522[iParam0 /*3*/]);
		if (iParam0 == 1)
		{
			MAP::SET_BLIP_SPRITE(Global_1357522.f_16[iParam0], joaat("BLIP_CAMPFIRE"), true);
		}
		else if (iParam0 == 0)
		{
			MAP::SET_BLIP_SPRITE(Global_1357522.f_16[iParam0], joaat("BLIP_CAMPFIRE_FULL"), true);
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1357522.f_16[iParam0], "CAMP_BLIP");
	}
	if (__LIB_0__::func_94(Global_35, Global_1357522[iParam0 /*3*/], 1) <= 225f)
	{
		func_1744(iParam0);
	}
}

void func_1050(int iParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1357522.f_22[iParam0]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Global_1357522.f_22[iParam0], false);
	}
}

void func_1051(int iParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1357522.f_19[iParam0]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Global_1357522.f_19[iParam0], false);
	}
}

void func_1058(int iParam0)
{
	int iVar0;
	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
	}
	__LIB_8__::func_966(__LIB_10__::func_653(iParam0), 10000, 0, 0, 0, 1);
}

bool func_1082(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_1898329)
	{
		if (!__LIB_0__::func_6(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch (Global_1898346[iVar0 /*6*/].f_3)
			{
				case 1:
					iVar1 = Global_1898346[iVar0 /*6*/].f_4;
					if (BUILTIN::VDIST(__LIB_1__::func_469(iVar1), vParam0) < __LIB_0__::func_514(__LIB_0__::func_626(iVar1) == 0f, fParam3, __LIB_0__::func_626(iVar1)))
					{
						return true;
					}
					break;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1099(int iParam0)
{
	int iVar0;
	if (func_1765(iParam0, &iVar0))
	{
		if (__LIB_0__::func_23() > __LIB_10__::func_654(iVar0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_1100(int iParam0)
{
	int iVar0;
	iVar0 = func_1767(iParam0);
	if (iVar0 != 0)
	{
		if (__LIB_10__::func_750(iVar0, 1120403456 /* Float: 100f */) || __LIB_8__::func_344(iVar0))
		{
			return false;
		}
	}
	return true;
}

void func_1103()
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
	if (!__LIB_0__::func_293(45))
	{
		if (Global_1934765.f_290)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BEECHERS_A"));
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BEECHERS_B"));
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BEECHERS_C"));
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BLACKWATER_ENDSUM"));
			Global_1934765.f_290 = 0;
		}
		if (Global_1934765.f_292)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BLACKWATER_ENDSUM"));
			Global_1934765.f_292 = 0;
		}
		if (!Global_1934765.f_291 && __LIB_3__::func_222(38))
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BLACKWATER_REGULAR"), -811f, -1212.5f, 0, 0);
			Global_1934765.f_291 = 1;
		}
		__LIB_0__::func_400(-37875204);
		__LIB_0__::func_400(258104717);
		__LIB_0__::func_400(-76700394);
		__LIB_0__::func_400(1614255891);
		__LIB_0__::func_400(1861460906);
		__LIB_0__::func_400(1044079550);
		__LIB_5__::func_440("nav_shack_BA");
		__LIB_0__::func_401(-1079295176);
		__LIB_0__::func_401(894787561);
		__LIB_0__::func_400(-1276109918);
		__LIB_0__::func_400(-1386423483);
		__LIB_0__::func_400(-1405375965);
		__LIB_0__::func_400(1277540472);
		__LIB_0__::func_400(-1331593143);
		__LIB_0__::func_400(1133172356);
		__LIB_0__::func_400(-559257162);
		__LIB_5__::func_440("nav_shack_BB");
		__LIB_0__::func_401(979670262);
		__LIB_0__::func_401(418666411);
		__LIB_0__::func_401(651621232);
		__LIB_0__::func_400(-574996782);
		__LIB_0__::func_400(1169511062);
		__LIB_0__::func_400(-1266106154);
		__LIB_0__::func_400(-1377975054);
		__LIB_0__::func_400(897624424);
		__LIB_0__::func_400(-2111718052);
		__LIB_5__::func_440("nav_shack_BC");
		__LIB_0__::func_401(-165202905);
		__LIB_0__::func_401(-1327148782);
		__LIB_0__::func_401(-1965378386);
		__LIB_0__::func_400(175578406);
		__LIB_0__::func_400(-686953321);
		__LIB_0__::func_400(-1737485501);
		__LIB_0__::func_400(-739754595);
		__LIB_0__::func_400(942470447);
		__LIB_0__::func_400(-1859413313);
		__LIB_0__::func_400(489834626);
		__LIB_0__::func_401(-1667265438);
		__LIB_0__::func_401(54029413);
		__LIB_0__::func_401(-1070234238);
		__LIB_0__::func_401(-931280709);
		__LIB_0__::func_401(-1170563128);
		__LIB_0__::func_401(1394163483);
		__LIB_5__::func_440("nav_std_train_station_es");
		__LIB_0__::func_400(-5339556);
		__LIB_0__::func_400(1258244391);
		__LIB_0__::func_400(1343343014);
		__LIB_0__::func_400(-2082201137);
		__LIB_0__::func_400(1641449717);
		__LIB_0__::func_400(739412171);
		__LIB_0__::func_400(-501793326);
		__LIB_0__::func_400(466168676);
		__LIB_0__::func_400(1479152994);
		__LIB_5__::func_440("nav_blackwater_endless_summer");
		__LIB_0__::func_401(1173561253);
		__LIB_0__::func_401(1470738186);
		__LIB_0__::func_401(-1632348233);
		__LIB_0__::func_400(903666582);
		__LIB_0__::func_401(1081087978);
		__LIB_5__::func_440("nav_val_es");
		__LIB_5__::func_440("nav_val_es_saloon_lockdown");
		__LIB_5__::func_440("nav_val_es_full_lockdown");
		__LIB_0__::func_400(joaat("ANN_05_HOUSE_ES"));
		__LIB_0__::func_401(joaat("ANN_05_HOUSE"));
		__LIB_0__::func_401(-693132475);
		__LIB_5__::func_440("nav_annesburg_es");
		__LIB_0__::func_400(158063004);
		__LIB_5__::func_440("nav_coots_graves");
		__LIB_0__::func_400(-1112373128);
		__LIB_0__::func_400(-891994084);
		__LIB_0__::func_400(-84516711);
		__LIB_0__::func_400(-657241692);
		__LIB_0__::func_401(1596089211);
		__LIB_0__::func_401(-2133417899);
		__LIB_0__::func_401(1274804496);
		__LIB_0__::func_401(1597665303);
		__LIB_0__::func_401(116162819);
		__LIB_5__::func_440("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", false, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", true, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", true);
		iVar0 = __LIB_0__::func_17(2087609309);
		if (!GRAPHICS::_0x113857D66A9CABE6(iVar0))
		{
			GRAPHICS::_0xBFCB17895BB99E4E(iVar0, true);
		}
		__LIB_0__::func_400(-1380983970);
		__LIB_0__::func_400(-1912028958);
		__LIB_0__::func_401(563944718);
		__LIB_5__::func_440("nav_bridge_to_old_world");
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(1883691509))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1883691509, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1647292773))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1647292773, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-824533183))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-824533183, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-619084588))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-619084588, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(672230639))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(672230639, true);
		}
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_1__::func_902(56, &iVar2, &iVar3, 0, 0))
			{
				iVar1 = 0;
				while (iVar1 < (iVar3 - iVar2) + 1)
				{
					__LIB_0__::func_121((iVar2 + iVar1), 32);
					iVar1++;
				}
			}
			if (__LIB_1__::func_902(65, &iVar2, &iVar3, 0, 0))
			{
				iVar1 = 0;
				while (iVar1 < (iVar3 - iVar2) + 1)
				{
					__LIB_0__::func_121((iVar2 + iVar1), 32);
					iVar1++;
				}
			}
			if (!__LIB_0__::func_296(0, 0, 1))
			{
				__LIB_0__::func_121(944, 32);
				__LIB_0__::func_121(940, 32);
			}
			__LIB_10__::func_751(joaat("META_OUTFIT_DEFAULT"));
			iVar4 = 0;
			while (iVar4 < 13)
			{
				__LIB_10__::func_807(iVar4, __LIB_10__::func_806(iVar4));
				iVar4++;
			}
		}
	}
	else
	{
		if (!Global_1934765.f_290)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BEECHERS_A"), -1550f, 250f, 0, 0);
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BEECHERS_B"), 1440f, -1580f, 0, 0);
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BEECHERS_C"), 1770f, 480f, 0, 0);
			Global_1934765.f_290 = 1;
		}
		if (!Global_1934765.f_292)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BLACKWATER_ENDSUM"), -811f, -1212.5f, 0, 0);
			Global_1934765.f_292 = 1;
		}
		if (Global_1934765.f_291)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BLACKWATER_REGULAR"));
			Global_1934765.f_291 = 0;
		}
		__LIB_0__::func_401(-37875204);
		__LIB_0__::func_401(258104717);
		__LIB_0__::func_401(-76700394);
		__LIB_0__::func_401(1614255891);
		__LIB_0__::func_401(1861460906);
		__LIB_0__::func_401(1044079550);
		__LIB_5__::func_441("nav_shack_BA");
		__LIB_0__::func_400(-1079295176);
		__LIB_0__::func_400(894787561);
		__LIB_0__::func_401(-1276109918);
		__LIB_0__::func_401(-1386423483);
		__LIB_0__::func_401(-1405375965);
		__LIB_0__::func_401(1277540472);
		__LIB_0__::func_401(-1331593143);
		__LIB_0__::func_401(1133172356);
		__LIB_0__::func_401(-559257162);
		__LIB_5__::func_441("nav_shack_BB");
		__LIB_0__::func_400(979670262);
		__LIB_0__::func_400(418666411);
		__LIB_0__::func_400(651621232);
		__LIB_0__::func_401(-574996782);
		__LIB_0__::func_401(1169511062);
		__LIB_0__::func_401(-1266106154);
		__LIB_0__::func_401(-1377975054);
		__LIB_0__::func_401(-2111718052);
		__LIB_0__::func_401(897624424);
		__LIB_5__::func_441("nav_shack_BC");
		__LIB_0__::func_400(-165202905);
		__LIB_0__::func_400(-1327148782);
		__LIB_0__::func_400(-1965378386);
		__LIB_0__::func_400(-1667265438);
		__LIB_0__::func_400(54029413);
		__LIB_0__::func_400(-1070234238);
		__LIB_0__::func_400(-931280709);
		__LIB_0__::func_400(-1170563128);
		__LIB_0__::func_400(1394163483);
		__LIB_0__::func_401(175578406);
		__LIB_0__::func_401(489834626);
		__LIB_0__::func_401(-686953321);
		__LIB_0__::func_401(-1737485501);
		__LIB_0__::func_401(-739754595);
		__LIB_0__::func_401(942470447);
		__LIB_0__::func_401(-1859413313);
		__LIB_5__::func_441("nav_std_train_station_es");
		__LIB_0__::func_400(1173561253);
		__LIB_0__::func_400(1470738186);
		__LIB_0__::func_400(-1632348233);
		__LIB_0__::func_401(-5339556);
		__LIB_0__::func_401(1258244391);
		__LIB_0__::func_401(1343343014);
		__LIB_0__::func_401(-2082201137);
		__LIB_0__::func_401(1641449717);
		__LIB_0__::func_401(739412171);
		__LIB_0__::func_401(-501793326);
		__LIB_0__::func_401(466168676);
		__LIB_0__::func_401(1479152994);
		__LIB_5__::func_441("nav_blackwater_endless_summer");
		__LIB_0__::func_400(1081087978);
		__LIB_0__::func_401(903666582);
		if (__LIB_0__::func_898(-1215445344))
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_full_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_441("nav_val_es_full_lockdown");
		}
		else if (__LIB_0__::func_898(-1763509974))
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_full_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_441("nav_val_es_saloon_lockdown");
		}
		else
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_full_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_441("nav_val_es");
		}
		__LIB_0__::func_400(joaat("ANN_05_HOUSE"));
		__LIB_0__::func_400(-693132475);
		__LIB_0__::func_401(joaat("ANN_05_HOUSE_ES"));
		__LIB_5__::func_441("nav_annesburg_es");
		__LIB_0__::func_401(158063004);
		__LIB_5__::func_441("nav_coots_graves");
		__LIB_0__::func_400(1596089211);
		__LIB_0__::func_400(-2133417899);
		__LIB_0__::func_400(1274804496);
		__LIB_0__::func_400(1597665303);
		__LIB_0__::func_400(116162819);
		__LIB_0__::func_401(-1112373128);
		__LIB_0__::func_401(-891994084);
		__LIB_0__::func_401(-84516711);
		__LIB_0__::func_401(-657241692);
		__LIB_5__::func_441("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", true, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", false, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", false);
		iVar5 = __LIB_0__::func_17(2087609309);
		if (GRAPHICS::_0x113857D66A9CABE6(iVar5))
		{
			GRAPHICS::_0xBFCB17895BB99E4E(iVar5, false);
		}
		__LIB_0__::func_401(-1380983970);
		__LIB_0__::func_400(563944718);
		__LIB_0__::func_401(-1912028958);
		__LIB_5__::func_441("nav_bridge_to_old_world");
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(1883691509))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1883691509, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1647292773))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1647292773, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-824533183))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-824533183, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-619084588))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-619084588, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(672230639))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(672230639, false);
		}
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_1__::func_902(56, &iVar7, &iVar8, 0, 0))
			{
				iVar6 = 0;
				while (iVar6 < (iVar8 - iVar7) + 1)
				{
					__LIB_0__::func_123((iVar7 + iVar6), 32);
					iVar6++;
				}
			}
			if (__LIB_1__::func_902(65, &iVar7, &iVar8, 0, 0))
			{
				iVar6 = 0;
				while (iVar6 < (iVar8 - iVar7) + 1)
				{
					__LIB_0__::func_123((iVar7 + iVar6), 32);
					iVar6++;
				}
			}
			__LIB_0__::func_123(944, 32);
			__LIB_0__::func_123(940, 32);
			__LIB_10__::func_751(1689938120);
			iVar9 = 0;
			while (iVar9 < 13)
			{
				__LIB_10__::func_807(iVar9, __LIB_17__::func_441(iVar9));
				iVar9++;
			}
		}
	}
}

void func_1107()
{
	vector3 vVar0;
	vector3 vVar10;
	if (__LIB_0__::func_898(-1215445344))
	{
		__LIB_0__::func_400(-661560211);
		__LIB_0__::func_401(joaat("VAL_02_LOCKDOWN_BANK"));
		__LIB_0__::func_401(-784156210);
		if (__LIB_0__::func_293(45))
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_full_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_441("nav_val_es_full_lockdown");
		}
		else
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_441("nav_val_full_lockdown");
		}
	}
	else
	{
		__LIB_0__::func_400(joaat("VAL_02_LOCKDOWN_BANK"));
		__LIB_0__::func_400(-784156210);
		__LIB_0__::func_401(-661560211);
		if (__LIB_0__::func_293(45))
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_full_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_441("nav_val_es");
		}
		else
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_440("nav_val_full_lockdown");
		}
	}
	if (__LIB_0__::func_898(-254562075))
	{
		__LIB_0__::func_400(-1049500949);
		__LIB_0__::func_401(-981203673);
		__LIB_0__::func_401(-2009766528);
	}
	else
	{
		__LIB_0__::func_400(-981203673);
		__LIB_0__::func_400(-2009766528);
		__LIB_0__::func_401(-1049500949);
	}
	if (__LIB_0__::func_898(320943355))
	{
		__LIB_0__::func_400(135886022);
		__LIB_0__::func_401(1228600352);
		__LIB_0__::func_401(406334892);
	}
	else
	{
		__LIB_0__::func_400(1228600352);
		__LIB_0__::func_400(406334892);
		__LIB_0__::func_401(135886022);
	}
	if (__LIB_0__::func_898(689024866))
	{
		__LIB_0__::func_400(-1933617196);
		__LIB_0__::func_401(joaat("VAL_02_LOCKDOWN_GUN"));
		__LIB_0__::func_401(-1905652203);
	}
	else
	{
		__LIB_0__::func_400(joaat("VAL_02_LOCKDOWN_GUN"));
		__LIB_0__::func_400(-1905652203);
		__LIB_0__::func_401(-1933617196);
	}
	if (__LIB_0__::func_898(1160698568))
	{
		__LIB_0__::func_400(-1588793465);
		__LIB_0__::func_401(joaat("VAL_02_LOCKDOWN_HOTEL"));
		__LIB_0__::func_401(1519091923);
		__LIB_1__::func_948(1879307167, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(540459374, 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		__LIB_0__::func_400(joaat("VAL_02_LOCKDOWN_HOTEL"));
		__LIB_0__::func_400(1519091923);
		__LIB_0__::func_401(-1588793465);
		__LIB_1__::func_948(1879307167, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(540459374, 0, 0, 0, 1, 0, 0, 0);
	}
	if (__LIB_0__::func_898(-1179948750))
	{
		__LIB_0__::func_400(joaat("VAL_03_DEFAULT_JAIL"));
		__LIB_0__::func_401(-1301569116);
		__LIB_0__::func_401(joaat("VAL_03_PROPS_LOCKDOWN_JAIL"));
	}
	else
	{
		__LIB_0__::func_400(-1301569116);
		__LIB_0__::func_400(joaat("VAL_03_PROPS_LOCKDOWN_JAIL"));
		__LIB_0__::func_401(joaat("VAL_03_DEFAULT_JAIL"));
	}
	if (__LIB_0__::func_898(1713221411))
	{
		__LIB_0__::func_400(924412185);
		__LIB_0__::func_401(joaat("VAL_02_LOCKDOWN_LAW"));
		__LIB_0__::func_401(-156313117);
	}
	else
	{
		__LIB_0__::func_400(joaat("VAL_02_LOCKDOWN_LAW"));
		__LIB_0__::func_400(-156313117);
		__LIB_0__::func_401(924412185);
	}
	if (__LIB_0__::func_898(300221584))
	{
		__LIB_0__::func_400(-1781246069);
		__LIB_0__::func_401(282485265);
		__LIB_0__::func_401(-1744253204);
	}
	else
	{
		__LIB_0__::func_400(282485265);
		__LIB_0__::func_400(-1744253204);
		__LIB_0__::func_401(-1781246069);
	}
	if (__LIB_0__::func_898(-220282381))
	{
		__LIB_0__::func_400(-1892595931);
		__LIB_0__::func_401(56708243);
	}
	else
	{
		__LIB_0__::func_400(56708243);
		__LIB_0__::func_401(-1892595931);
	}
	if (__LIB_0__::func_898(-1329135070))
	{
		__LIB_0__::func_400(-1158072415);
		__LIB_0__::func_401(199047531);
		__LIB_0__::func_401(192173299);
		func_583(32, 1);
	}
	else
	{
		__LIB_0__::func_400(199047531);
		__LIB_0__::func_400(192173299);
		__LIB_0__::func_401(-1158072415);
		if ((!__LIB_2__::func_765(9, 0) && !__LIB_5__::func_219(5)) && !__LIB_6__::func_92(5))
		{
			vVar0 = -1;
			vVar0.f_1 = -1;
			vVar0.f_2 = -1;
			__LIB_7__::func_731(32, &vVar0, 1);
			__LIB_1__::func_806(&vVar0, 1, 1);
		}
	}
	if (__LIB_0__::func_898(-1763509974))
	{
		__LIB_0__::func_401(-776975047);
		__LIB_0__::func_401(1385025009);
		if (!__LIB_0__::func_898(-1215445344))
		{
			if (__LIB_0__::func_293(45))
			{
				__LIB_5__::func_440("nav_val_saloon_lockdown");
				__LIB_5__::func_440("nav_val_full_lockdown");
				__LIB_5__::func_440("nav_val_es");
				__LIB_5__::func_440("nav_val_es_full_lockdown");
				__LIB_5__::func_441("nav_val_es_saloon_lockdown");
			}
			else
			{
				__LIB_5__::func_440("nav_val_saloon_lockdown");
				__LIB_5__::func_440("nav_val_es_saloon_lockdown");
				__LIB_5__::func_440("nav_val_full_lockdown");
				__LIB_5__::func_440("nav_val_es_full_lockdown");
				__LIB_5__::func_440("nav_val_es");
				__LIB_5__::func_441("nav_val_saloon_lockdown");
			}
		}
		__LIB_1__::func_948(-908482159, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(-1147728628, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(968874193, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(1154795503, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(583884620, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(261929195, 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x7F458B543006C8FE(-908482159, 28);
		OBJECT::_0x7F458B543006C8FE(-1147728628, 28);
		OBJECT::_0x7F458B543006C8FE(968874193, 28);
		OBJECT::_0x7F458B543006C8FE(1154795503, 28);
		OBJECT::_0x7F458B543006C8FE(583884620, 28);
		OBJECT::_0x7F458B543006C8FE(261929195, 28);
	}
	else
	{
		__LIB_0__::func_400(-776975047);
		__LIB_0__::func_400(1385025009);
		__LIB_1__::func_948(-908482159, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(-1147728628, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(968874193, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(1154795503, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(583884620, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(261929195, 0, 0, 0, 1, 0, 0, 0);
		OBJECT::_0x0C0A373D181BF900(-908482159);
		OBJECT::_0x0C0A373D181BF900(-1147728628);
		OBJECT::_0x0C0A373D181BF900(968874193);
		OBJECT::_0x0C0A373D181BF900(1154795503);
		OBJECT::_0x0C0A373D181BF900(583884620);
		OBJECT::_0x0C0A373D181BF900(261929195);
		if (__LIB_0__::func_293(45))
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_full_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_441("nav_val_es");
		}
		else
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_440("nav_val_full_lockdown");
		}
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_898(-1206122982))
		{
			__LIB_0__::func_123(450, 32);
			__LIB_0__::func_123(451, 32);
			__LIB_0__::func_123(452, 32);
			__LIB_0__::func_123(453, 32);
			__LIB_0__::func_123(466, 32);
			__LIB_0__::func_123(467, 32);
			__LIB_0__::func_123(471, 32);
			__LIB_0__::func_123(464, 32);
		}
		else
		{
			__LIB_0__::func_121(450, 32);
			__LIB_0__::func_121(451, 32);
			__LIB_0__::func_121(452, 32);
			__LIB_0__::func_121(453, 32);
			__LIB_0__::func_121(466, 32);
			__LIB_0__::func_121(467, 32);
			__LIB_0__::func_121(471, 32);
			__LIB_0__::func_121(464, 32);
		}
		if (__LIB_0__::func_898(-666014935))
		{
			__LIB_1__::func_948(-1069042457, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(244699522, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-590254598, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1425307025, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(-1069042457, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(244699522, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-590254598, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1425307025, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_898(1074873669))
		{
			__LIB_0__::func_123(433, 32);
		}
		else
		{
			__LIB_0__::func_121(433, 32);
		}
		if (__LIB_0__::func_898(-1579419919))
		{
			__LIB_1__::func_948(551601484, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1842720100, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-983069384, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-768760124, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1974086289, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(551601484, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1842720100, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-983069384, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-768760124, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1974086289, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_898(478884033))
		{
			__LIB_0__::func_123(83, 32);
			__LIB_0__::func_123(84, 32);
			__LIB_0__::func_123(85, 32);
			__LIB_0__::func_123(86, 32);
			__LIB_0__::func_123(87, 32);
			__LIB_0__::func_123(79, 32);
		}
		else
		{
			__LIB_0__::func_121(83, 32);
			__LIB_0__::func_121(84, 32);
			__LIB_0__::func_121(85, 32);
			__LIB_0__::func_121(86, 32);
			__LIB_0__::func_121(87, 32);
			__LIB_0__::func_121(79, 32);
		}
		if (__LIB_0__::func_898(-191424539))
		{
			__LIB_1__::func_948(-1247339802, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(2046695029, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(834296435, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1124531468, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-902483455, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-566797819, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1469250492, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(678501753, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1079073283, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-860602360, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(-1247339802, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(2046695029, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(834296435, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1124531468, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-902483455, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-566797819, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1469250492, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(678501753, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1079073283, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-860602360, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_898(-397760715))
		{
			__LIB_1__::func_948(1098854605, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1013933832, 1, 0, 0, 0, 0, 0, 0);
			func_583(19, 1);
		}
		else
		{
			__LIB_1__::func_948(1098854605, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1013933832, 0, 0, 0, 1, 0, 0, 0);
			if ((!__LIB_2__::func_765(9, 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("RCM_CALLAWAY1")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("RCM_CALLAWAY12")) <= 0)
			{
				vVar10 = -1;
				vVar10.f_1 = -1;
				vVar10.f_2 = -1;
				__LIB_7__::func_731(19, &vVar10, 1);
				__LIB_1__::func_806(&vVar10, 1, 1);
			}
		}
		if (__LIB_0__::func_898(2639906))
		{
			__LIB_1__::func_948(-1334037078, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1641377529, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-74215266, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(-1334037078, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1641377529, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-74215266, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_898(1660024373))
		{
			__LIB_0__::func_123(320, 32);
			__LIB_0__::func_123(317, 32);
			__LIB_0__::func_123(318, 32);
			__LIB_0__::func_123(319, 32);
			__LIB_0__::func_123(250, 32);
		}
		else
		{
			__LIB_0__::func_121(320, 32);
			__LIB_0__::func_121(317, 32);
			__LIB_0__::func_121(318, 32);
			__LIB_0__::func_121(319, 32);
			__LIB_0__::func_121(250, 32);
		}
		if (__LIB_0__::func_898(-1063147448))
		{
			__LIB_1__::func_948(-399528504, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(804086151, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-923901632, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-438789356, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(-399528504, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(804086151, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-923901632, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-438789356, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_898(-80522843))
		{
			__LIB_0__::func_123(354, 32);
			__LIB_0__::func_123(367, 32);
			__LIB_0__::func_123(368, 32);
			__LIB_0__::func_123(369, 32);
			__LIB_0__::func_123(370, 32);
			__LIB_0__::func_123(371, 32);
			__LIB_0__::func_123(886, 32);
		}
		else
		{
			__LIB_0__::func_121(354, 32);
			__LIB_0__::func_121(367, 32);
			__LIB_0__::func_121(368, 32);
			__LIB_0__::func_121(86, 32);
			__LIB_0__::func_121(370, 32);
			__LIB_0__::func_121(371, 32);
			__LIB_0__::func_121(886, 32);
		}
		if (__LIB_0__::func_898(-1523910291))
		{
			__LIB_1__::func_948(2094297354, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1892085175, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(2094297354, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1892085175, 0, 0, 0, 1, 0, 0, 0);
		}
	}
}

void func_1111(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_898(iParam0))
	{
		if (__LIB_0__::func_27(Global_1934765.f_20, iParam2))
		{
			iVar0 = __LIB_0__::func_559(iParam1);
			if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
			{
				POPULATION::_0xA1CFB35069D23C23(iVar0);
				POPULATION::_0x74C2B3DC0B294102(iVar0);
				__LIB_0__::func_8(&(Global_1934765.f_20), iParam2);
			}
		}
	}
	else if (!__LIB_0__::func_27(Global_1934765.f_20, iParam2))
	{
		iVar1 = __LIB_0__::func_559(iParam1);
		if (VOLUME::_DOES_VOLUME_EXIST(iVar1))
		{
			POPULATION::_0x18262CAFEBB5FBE1(iVar1, iParam3, 0, 0, -1, -1, 0);
			POPULATION::_0xB56D41A694E42E86(iVar1, iParam3, 0, 0, -1, -1, 0);
			__LIB_0__::func_7(&(Global_1934765.f_20), iParam2);
		}
	}
}

void func_1148()
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	var uVar5;
	if ((((((__LIB_1__::func_185(1) && !__LIB_1__::func_185(3)) && !__LIB_2__::func_774(3)) && !__LIB_1__::func_200(120)) && !__LIB_2__::func_774(2)) && __LIB_0__::func_28()) && !__LIB_0__::func_13(32768))
	{
		if (!__LIB_10__::func_634(4))
		{
			__LIB_8__::func_781();
			__LIB_9__::func_85(1024);
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			Global_1934765.f_68 = 0;
			__LIB_9__::func_85(4);
		}
		if (!__LIB_1__::func_185(2) && !__LIB_1__::func_187(120))
		{
			if (__LIB_4__::func_503(0, 9))
			{
				bVar0 = true;
			}
			else if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 9999999)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
			}
		}
		else if (__LIB_1__::func_185(2) && !__LIB_1__::func_187(120))
		{
			if (__LIB_4__::func_503(0, 9))
			{
				bVar0 = true;
			}
			else if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 9999999)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
			}
		}
		else if (__LIB_1__::func_185(2) || __LIB_1__::func_187(120))
		{
			if (__LIB_4__::func_503(0, 16))
			{
				bVar0 = true;
			}
			else if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 9999999)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
			}
		}
		iVar1 = 4;
		fVar2 = 2f;
		fVar2 = (fVar2 * IntToFloat(iVar1));
		if (bVar0)
		{
			if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != (2000 * iVar1))
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE((2000 * iVar1));
			}
		}
		if (Global_1897952.f_40)
		{
			if (Global_1934765.f_68 != joaat("BLIZZARD") && !__LIB_4__::func_503(6, 19))
			{
				Global_1934765.f_68 = joaat("BLIZZARD");
				MISC::_SET_WEATHER_TYPE_2(joaat("BLIZZARD"), 11, 0, 0, false);
			}
			return;
		}
		fVar3 = 15f;
		MISC::_0xDD560ABEF5D3784C(&uVar4, &uVar5);
		if (__LIB_4__::func_503(21, 4))
		{
			if (__LIB_0__::func_41(__LIB_0__::func_23()) < 22 && __LIB_0__::func_42(__LIB_0__::func_23()) >= 30)
			{
				if (Global_1934765.f_68 != joaat("SNOW"))
				{
					Global_1934765.f_68 = joaat("SNOW");
					MISC::_SET_WEATHER_TYPE(joaat("SNOW"), false, true, true, (fVar2 * IntToFloat((60 - __LIB_0__::func_42(__LIB_0__::func_23())))), false);
				}
			}
			else if (Global_1934765.f_68 != joaat("BLIZZARD"))
			{
				Global_1934765.f_68 = joaat("BLIZZARD");
				MISC::_SET_WEATHER_TYPE(joaat("BLIZZARD"), false, true, true, fVar3, false);
			}
		}
		else if (__LIB_4__::func_503(4, 6))
		{
			if (__LIB_0__::func_41(__LIB_0__::func_23()) >= 5 && __LIB_0__::func_42(__LIB_0__::func_23()) >= 30)
			{
				if (Global_1934765.f_68 != joaat("SNOWLIGHT"))
				{
					Global_1934765.f_68 = joaat("SNOWLIGHT");
					if (__LIB_0__::func_41(__LIB_0__::func_23()) < 6)
					{
						MISC::_SET_WEATHER_TYPE(joaat("SNOWLIGHT"), false, true, true, (fVar2 * IntToFloat((60 - __LIB_0__::func_42(__LIB_0__::func_23())))), false);
					}
					else
					{
						MISC::_SET_WEATHER_TYPE(joaat("SNOWLIGHT"), false, true, true, fVar3, false);
					}
				}
			}
			else if (Global_1934765.f_68 != joaat("GROUNDBLIZZARD"))
			{
				Global_1934765.f_68 = joaat("GROUNDBLIZZARD");
				if (__LIB_0__::func_41(__LIB_0__::func_23()) < 5)
				{
					MISC::_SET_WEATHER_TYPE(joaat("GROUNDBLIZZARD"), false, true, true, (fVar2 * IntToFloat((60 - __LIB_0__::func_42(__LIB_0__::func_23())))), false);
				}
				else
				{
					MISC::_SET_WEATHER_TYPE(joaat("GROUNDBLIZZARD"), false, true, true, fVar3, false);
				}
			}
		}
		else if (__LIB_4__::func_503(6, 16))
		{
			if (__LIB_0__::func_41(__LIB_0__::func_23()) >= 7)
			{
				if (Global_1934765.f_68 != joaat("SNOW"))
				{
					Global_1934765.f_68 = joaat("SNOW");
					if (__LIB_0__::func_41(__LIB_0__::func_23()) < 8)
					{
						MISC::_SET_WEATHER_TYPE(joaat("SNOW"), false, true, true, (fVar2 * IntToFloat((60 - __LIB_0__::func_42(__LIB_0__::func_23())))), false);
					}
					else
					{
						MISC::_SET_WEATHER_TYPE(joaat("SNOW"), false, true, true, fVar3, false);
					}
				}
			}
			else if (Global_1934765.f_68 != joaat("SNOWLIGHT"))
			{
				Global_1934765.f_68 = joaat("SNOWLIGHT");
				MISC::_SET_WEATHER_TYPE(joaat("SNOWLIGHT"), false, true, true, fVar3, false);
			}
		}
		else if (__LIB_4__::func_503(16, 20))
		{
			if (Global_1934765.f_68 != joaat("BLIZZARD"))
			{
				Global_1934765.f_68 = joaat("BLIZZARD");
				if (__LIB_0__::func_41(__LIB_0__::func_23()) < 17)
				{
					MISC::_SET_WEATHER_TYPE(joaat("BLIZZARD"), false, true, true, (fVar2 * IntToFloat((60 - __LIB_0__::func_42(__LIB_0__::func_23())))), false);
				}
				else
				{
					MISC::_SET_WEATHER_TYPE(joaat("BLIZZARD"), false, true, true, fVar3, false);
				}
			}
		}
		else if (__LIB_4__::func_503(20, 22))
		{
			if (__LIB_0__::func_41(__LIB_0__::func_23()) <= 21 && __LIB_0__::func_42(__LIB_0__::func_23()) <= 30)
			{
				if (Global_1934765.f_68 != joaat("SNOW"))
				{
					Global_1934765.f_68 = joaat("SNOW");
					if (__LIB_0__::func_41(__LIB_0__::func_23()) < 21)
					{
						MISC::_SET_WEATHER_TYPE(joaat("SNOW"), false, true, true, (fVar2 * IntToFloat((60 - __LIB_0__::func_42(__LIB_0__::func_23())))), false);
					}
					else
					{
						MISC::_SET_WEATHER_TYPE(joaat("SNOW"), false, true, true, fVar3, false);
					}
				}
			}
			else if (Global_1934765.f_68 != joaat("BLIZZARD"))
			{
				Global_1934765.f_68 = joaat("BLIZZARD");
				MISC::_SET_WEATHER_TYPE(joaat("BLIZZARD"), false, true, true, fVar3, false);
			}
		}
	}
	else
	{
		if (__LIB_10__::func_634(4))
		{
			Global_1934765.f_68 = 0;
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
			__LIB_10__::func_635(4);
		}
		if (__LIB_10__::func_634(1024) && !__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_8__::func_807(0, 1103626240 /* Float: 25f */);
			__LIB_10__::func_635(1024);
		}
	}
}

void func_1149()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (__LIB_1__::func_194() == 1)
	{
		iVar0 = __LIB_0__::func_12();
		if ((__LIB_0__::func_20(iVar0) && iVar0 >= 62) && iVar0 <= 76)
		{
			bVar1 = true;
		}
		if (!bVar1)
		{
			if (func_1796(5))
			{
				__LIB_6__::func_416(5, 0, 1103626240 /* Float: 25f */);
				return;
			}
		}
		else
		{
			iVar2 = __LIB_8__::func_964(__LIB_0__::func_38(joaat("COMPLETED"), joaat("MISSIONS_CHP2")));
			if (iVar2 < 8)
			{
				if (__LIB_18__::func_307(5) != joaat("WEATHER_GROUP_CH2_START"))
				{
					__LIB_6__::func_413(joaat("WEATHER_GROUP_CH2_START"), 5, 0, 1103626240 /* Float: 25f */);
				}
			}
			else if (iVar2 < 15)
			{
				if (__LIB_18__::func_307(5) != joaat("WEATHER_GROUP_CH2_MID"))
				{
					__LIB_6__::func_413(joaat("WEATHER_GROUP_CH2_MID"), 5, 0, 1103626240 /* Float: 25f */);
				}
			}
			else if (__LIB_18__::func_307(5) != joaat("WEATHER_GROUP_CH2_END"))
			{
				__LIB_6__::func_413(joaat("WEATHER_GROUP_CH2_END"), 5, 0, 1103626240 /* Float: 25f */);
			}
		}
	}
}

void func_1150()
{
	int iVar0;
	bool bVar1;
	if (__LIB_1__::func_194() == 2)
	{
		iVar0 = __LIB_0__::func_12();
		if ((__LIB_0__::func_20(iVar0) && iVar0 >= 93) && iVar0 <= 106)
		{
			bVar1 = true;
		}
		if (!bVar1)
		{
			if (func_1796(5))
			{
				__LIB_6__::func_416(5, 0, 1103626240 /* Float: 25f */);
			}
			return;
		}
		if (!func_1796(5) && bVar1)
		{
			__LIB_6__::func_413(joaat("WEATHER_GROUP_CH3_DROUGHT"), 5, 0, 1103626240 /* Float: 25f */);
		}
	}
}

void func_1151()
{
	int iVar0;
	if (__LIB_3__::func_751(34))
	{
		if (!__LIB_10__::func_634(64))
		{
			iVar0 = __LIB_0__::func_12();
			if (__LIB_0__::func_20(iVar0) && iVar0 == 5)
			{
				MISC::_0x745808BB01CEC6B9(1f);
				__LIB_9__::func_85(64);
			}
		}
	}
	else if (__LIB_10__::func_634(64))
	{
		__LIB_10__::func_635(64);
		MISC::_0x745808BB01CEC6B9(0f);
	}
}

void func_1152()
{
	if (__LIB_1__::func_185(39) && !__LIB_1__::func_185(43))
	{
		if (!__LIB_0__::func_296(0, 1, 0))
		{
			if (__LIB_1__::func_185(40) && __LIB_1__::func_185(41))
			{
				__LIB_9__::func_96(19, 0, 0, 0);
			}
			else if (__LIB_1__::func_185(40))
			{
				func_1802();
			}
			else
			{
				__LIB_18__::func_256();
			}
		}
		else if (__LIB_10__::func_634(256) || __LIB_10__::func_634(512))
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			__LIB_8__::func_807(0, 1103626240 /* Float: 25f */);
			__LIB_10__::func_635(256);
			__LIB_10__::func_635(512);
		}
	}
	else if (__LIB_10__::func_634(256) || __LIB_10__::func_634(512))
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		__LIB_8__::func_807(0, 1103626240 /* Float: 25f */);
		__LIB_10__::func_635(256);
		__LIB_10__::func_635(512);
	}
}

void func_1153()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	iVar0 = -1;
	iVar0 = (iVar0 - iVar0 & 1 | 2 | 4 | 16 | 8 | 32 | 64 | 128 | 256 | 2048 | 32768);
	if (__LIB_0__::func_296(iVar0, 0, 1))
	{
		return;
	}
	iVar1 = -1;
	fVar2 = 0f;
	fVar3 = 0f;
	iVar4 = 0;
	while (iVar4 < Global_40.f_450)
	{
		iVar5 = Global_40.f_450[iVar4];
		if (__LIB_0__::func_5(iVar5))
		{
			if (Global_1347702[iVar5 /*49*/].f_46 == 0)
			{
				Jump @253; //curOff = 121
			}
			else if (Global_1347702[iVar5 /*49*/].f_12 & 268435456 == 0)
			{
				Jump @253; //curOff = 147
			}
			else if (Global_1347702[iVar5 /*49*/].f_13 & 16384 != 0)
			{
				Jump @253; //curOff = 171
			}
			else if (Global_1347702[iVar5 /*49*/].f_14 & 2 != 0)
			{
				Jump @253; //curOff = 193
			}
			else
			{
				fVar2 = BUILTIN::VDIST2(Global_36, __LIB_1__::func_440(iVar5));
				if (fVar2 < 122500f)
				{
					if (fVar3 == 0f || fVar2 < fVar3)
					{
						fVar3 = fVar2;
						iVar1 = iVar5;
					}
				}
			}
		}
		iVar4++;
	}
	if (__LIB_0__::func_5(iVar1))
	{
		if (!func_1796(2))
		{
			__LIB_6__::func_413(Global_1347702[iVar1 /*49*/].f_46, 2, 0, 1103626240 /* Float: 25f */);
		}
		else if (__LIB_18__::func_307(2) != Global_1347702[iVar1 /*49*/].f_46)
		{
			__LIB_6__::func_413(Global_1347702[iVar1 /*49*/].f_46, 2, 0, 1103626240 /* Float: 25f */);
		}
	}
	else if (func_1796(2))
	{
		__LIB_6__::func_416(2, 0, 1103626240 /* Float: 25f */);
	}
}

void func_1154()
{
	int iVar0;
	if (!MISC::IS_BIT_SET(Global_1934765.f_301, 1) && Global_1934765.f_337 > 0)
	{
		iVar0 = __LIB_5__::func_291();
		if (iVar0 > -1 && Global_1934765.f_338 != iVar0)
		{
			__LIB_5__::func_581(0, Global_1934765.f_318[iVar0 /*3*/].f_2);
		}
	}
}

void func_1156(var uParam0)
{
	if (!__LIB_0__::func_131(uParam0))
	{
		return;
	}
	if (!func_1807(&(Global_1934765.f_402), 1))
	{
		return;
	}
	if (func_1808(uParam0))
	{
		if (__LIB_12__::func_292(uParam0, 1))
		{
			__LIB_9__::func_85(2048);
		}
		else if (__LIB_12__::func_292(uParam0, 2))
		{
			__LIB_9__::func_85(4096);
		}
		else if (__LIB_12__::func_292(uParam0, 3))
		{
			__LIB_9__::func_85(8192);
		}
		__LIB_10__::func_796(uParam0);
	}
	else if (func_1807(&(Global_1934765.f_402), 128))
	{
		if (!func_1807(uParam0, 2) || func_1807(uParam0, 32))
		{
			__LIB_10__::func_796(uParam0);
		}
	}
}

void func_1157(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_10__::func_634(2048))
	{
		return;
	}
	if (!__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
	{
		if (__LIB_12__::func_292(uParam0, 1))
		{
			func_1811(uParam0);
		}
		return;
	}
	iVar0 = -1;
	iVar0 = (iVar0 - iVar0 & 1 | 2 | 4 | 8);
	if (__LIB_0__::func_296(iVar0, 0, 1))
	{
		if (__LIB_12__::func_292(uParam0, 1))
		{
			func_1811(uParam0);
		}
		return;
	}
	if (__LIB_0__::func_131(uParam0))
	{
		return;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("VIG_PLAYLIST_PARTY_HSO")) > 0)
	{
		return;
	}
	if (__LIB_3__::func_107())
	{
		return;
	}
	iVar1 = __LIB_0__::func_23();
	iVar2 = iVar1;
	__LIB_0__::func_467(&iVar2, 20);
	__LIB_0__::func_468(&iVar2, 30);
	if (__LIB_1__::func_110(iVar1, iVar2, 1))
	{
		__LIB_1__::func_446(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	}
	if (func_1814(uParam0, 1, iVar2, __LIB_6__::func_70(1), 1200f, 100f, 30f, 2000, 30))
	{
		__LIB_4__::func_804(uParam0, 512);
		__LIB_4__::func_804(uParam0, 1024);
	}
}

void func_1158(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_10__::func_634(4096))
	{
		return;
	}
	if (__LIB_3__::func_107())
	{
		if (__LIB_12__::func_292(uParam0, 2))
		{
			func_1811(uParam0);
		}
		return;
	}
	iVar0 = __LIB_5__::func_436(26);
	if (!__LIB_0__::func_702(iVar0))
	{
		if (__LIB_12__::func_292(uParam0, 2))
		{
			func_1811(uParam0);
		}
		return;
	}
	iVar1 = -1;
	iVar1 = (iVar1 - iVar1 & 1 | 2 | 4 | 8);
	if (__LIB_0__::func_296(iVar1, 0, 1))
	{
		if (__LIB_12__::func_292(uParam0, 2))
		{
			func_1811(uParam0);
		}
		return;
	}
	if (__LIB_1__::func_44(iVar0))
	{
		if (__LIB_12__::func_292(uParam0, 2))
		{
			func_1811(uParam0);
		}
		return;
	}
	if (__LIB_8__::func_608(0))
	{
		if (__LIB_12__::func_292(uParam0, 2))
		{
			func_1811(uParam0);
		}
		return;
	}
	if (__LIB_0__::func_131(uParam0))
	{
		return;
	}
	iVar2 = __LIB_0__::func_23();
	iVar3 = iVar2;
	__LIB_0__::func_467(&iVar3, 19);
	__LIB_0__::func_468(&iVar3, 45);
	if (__LIB_1__::func_110(iVar2, iVar3, 1))
	{
		__LIB_1__::func_446(&iVar2, 0, 0, 2, 0, 0, 0, 0);
		if (__LIB_1__::func_110(iVar2, iVar3, 1))
		{
			__LIB_1__::func_446(&iVar3, 0, 0, 0, 1, 0, 0, 0);
		}
		else
		{
			iVar3 = iVar2;
		}
	}
	if (func_1814(uParam0, 2, iVar3, __LIB_1__::func_469(26), 800f, 50f, -1082130432 /* Float: -1f */, 2000, 30))
	{
		__LIB_4__::func_804(uParam0, 512);
	}
}

void func_1159()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	if (__LIB_0__::func_293(45))
	{
		bVar0 = (__LIB_0__::func_317() == 7 && __LIB_1__::func_533(512));
		bVar1 = (__LIB_0__::func_64(0) == 1 || __LIB_0__::func_64(0) == 8);
		if (__LIB_10__::func_634(32))
		{
			bVar2 = false;
			if (bVar1)
			{
				bVar2 = true;
			}
			if (!bVar0)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
				__LIB_10__::func_635(32);
			}
		}
		else if (bVar0 && !bVar1)
		{
			__LIB_9__::func_85(32);
		}
		if (__LIB_10__::func_634(32))
		{
			iVar3 = 16;
			if (__LIB_1__::func_25(__LIB_3__::func_918(65), 1) && __LIB_0__::func_702(__LIB_3__::func_918(66)))
			{
				iVar3 = 18;
			}
			if (CLOCK::GET_CLOCK_HOURS() >= iVar3)
			{
				if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 9999999)
				{
					CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
				}
			}
			else if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 10000)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(10000);
			}
		}
	}
}

void func_1162(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	if (!__LIB_1__::func_67(iParam1, &iVar0))
	{
		func_1819(uParam0, iParam1);
		return;
	}
	vVar2 = { __LIB_16__::func_247(iVar0) };
	iVar5 = __LIB_16__::func_248(iVar0);
	iVar6 = __LIB_1__::func_55(iVar0);
	if (!__LIB_1__::func_59(uParam0->f_34[iParam1]))
	{
		iVar1 = __LIB_8__::func_741(iVar6, iVar5);
		uParam0->f_34[iParam1] = __LIB_14__::func_135(iVar5, iVar1, vVar2, -1);
		if (__LIB_2__::func_776())
		{
			func_1821(uParam0, iParam1, 2);
			__LIB_3__::func_559(uParam0->f_34[iParam1], -1186550032);
		}
		func_1822(uParam0->f_34[iParam1], __LIB_0__::func_61());
	}
	else
	{
		func_1823(uParam0->f_34[iParam1], vVar2);
	}
	if (!__LIB_1__::func_58(iParam1))
	{
		return;
	}
	if (uParam0->f_68 || func_1825(iParam1))
	{
		if (!func_1826(uParam0, iParam1, 2))
		{
			func_1821(uParam0, iParam1, 2);
			__LIB_3__::func_559(uParam0->f_34[iParam1], -1186550032);
			return;
		}
	}
	else if (func_1826(uParam0, iParam1, 2))
	{
		func_1827(uParam0, iParam1, 2);
		__LIB_1__::func_96(uParam0->f_34[iParam1], -1186550032);
	}
	if (!func_1826(uParam0, iParam1, 1))
	{
		if (func_1828(iParam1))
		{
			func_1821(uParam0, iParam1, 1);
			__LIB_3__::func_559(uParam0->f_34[iParam1], 724623647);
		}
	}
	else if (!func_1828(iParam1))
	{
		__LIB_1__::func_96(uParam0->f_34[iParam1], 724623647);
		func_1827(uParam0, iParam1, 1);
	}
}

void func_1173(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	func_437(uParam1);
	uParam1->f_9 = iParam2;
	uParam1->f_10 = __LIB_1__::func_316(__LIB_0__::func_317(), iParam2);
	uParam0->f_1 = 0;
	*uParam0 = Global_1359489.f_21;
	uParam0->f_2 = 429892159;
	uParam0->f_3 = __LIB_3__::func_38(__LIB_0__::func_317());
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		uParam0->f_2 = 13127246;
		uParam0->f_3 = iParam2;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
		{
			__LIB_0__::func_412(*uParam0, 191541852, &iVar0, 0);
			uParam1->f_8 = __LIB_16__::func_337(iVar0);
			__LIB_16__::func_336(*uParam0, 950875968, &(uParam1->f_5), 0);
			__LIB_3__::func_41(*uParam0, 1156974471, &(uParam1->f_14), 0);
			__LIB_3__::func_41(*uParam0, 1749910275, &(uParam1->f_21), 0);
			func_1836(*uParam0, -240512847, &(uParam1->f_24), 0);
			if (!__LIB_3__::func_40(*uParam0, -620745170, &(uParam1->f_42), 0))
			{
				StringCopy(&(uParam1->f_42), "generic_companion_activity", 64);
			}
			if (__LIB_0__::func_412(*uParam0, 1371217890, &iVar1, 0))
			{
				uParam1->f_66 = func_1838(iVar1);
			}
			else
			{
				uParam1->f_66 = 7301;
			}
			if (__LIB_16__::func_336(*uParam0, -431208529, &bVar2, 0))
			{
				__LIB_0__::func_63(&(uParam1->f_31), 16384, bVar2);
			}
			if (!__LIB_3__::func_40(*uParam0, -547065739, &(uParam1->f_58), 0))
			{
				StringCopy(&(uParam1->f_58), "generic_activity_invite", 64);
			}
			if (__LIB_16__::func_336(*uParam0, 2090390096, &bVar3, 0))
			{
				if (bVar3)
				{
					uParam1->f_32 = 2;
				}
			}
			if (__LIB_16__::func_336(*uParam0, 708078506, &bVar4, 0))
			{
				if (bVar4)
				{
					__LIB_0__::func_63(&(uParam1->f_31), 32768, 1);
				}
			}
			if (__LIB_16__::func_336(*uParam0, 770042177, &bVar5, 0))
			{
				if (bVar5)
				{
					__LIB_0__::func_63(&(uParam1->f_31), 65536, 1);
				}
			}
			if (__LIB_16__::func_336(*uParam0, -1903557952, &uVar6, 0))
			{
				__LIB_0__::func_63(&(uParam1->f_31), 131072, 1);
			}
			uVar7 = uParam0->f_1;
			uParam0->f_3 = iParam2;
			uParam0->f_4 = joaat("INVITE");
			if (__LIB_3__::func_40(*uParam0, -2047775528, &uVar8, 0))
			{
				uParam1->f_32 = 0;
			}
			uParam0->f_3 = -1;
			uParam0->f_1 = uVar7;
			__LIB_3__::func_40(*uParam0, 35939498, &(uParam1->f_67), 0);
			if (uParam1->f_32 == -1)
			{
				uParam1->f_32 = 3;
			}
			if (__LIB_16__::func_336(*uParam0, -665861927, &bVar16, 0))
			{
				if (bVar16)
				{
					__LIB_0__::func_63(&(uParam1->f_31), 4096, 1);
				}
			}
			if (__LIB_16__::func_336(*uParam0, 886360362, &bVar17, 0))
			{
				if (bVar17)
				{
					__LIB_0__::func_63(&(uParam1->f_31), 8192, 1);
				}
			}
			uParam0->f_3 = joaat("WAIT");
			if (__LIB_3__::func_40(*uParam0, -808176988, &(uParam1->f_34), 0))
			{
				__LIB_3__::func_41(*uParam0, -320556862, &(uParam1->f_14), 0);
				func_1836(*uParam0, 1394784022, &(uParam1->f_17), 0);
			}
			iVar19 = 0;
			while (iVar19 < 3)
			{
				uParam0->f_3 = iVar19;
				if (__LIB_0__::func_412(*uParam0, 919971448, &iVar20, 0))
				{
					iVar18 = __LIB_16__::func_280(iVar20);
					if (__LIB_0__::func_31(iVar18))
					{
						uParam1->f_3 = (uParam1->f_3 || __LIB_0__::func_771(iVar18));
						if (iVar19 == 0)
						{
							*uParam1 = iVar18;
						}
						iVar21++;
					}
				}
			else
			{
				}
				else
				{
					iVar19++;
				}
			}
			if (iVar21 == 1)
			{
				uParam1->f_5 = 1;
			}
		}
	}
}

void func_1174(var uParam0, var uParam1)
{
	struct<5> Var0;
	bool bVar5;
	bool bVar6;
	var uVar7;
	Var0 = Global_1359489.f_21;
	*uParam0 = uParam1->f_8;
	uParam0->f_1 = uParam1->f_9;
	uParam0->f_5 = uParam1->f_10;
	uParam0->f_2 = *uParam1;
	uParam0->f_3 = uParam1->f_3;
	if (__LIB_0__::func_750(&(uParam1->f_31), 16384))
	{
		__LIB_0__::func_63(&(uParam0->f_9), 512, 1);
	}
	uParam0->f_26 = uParam1->f_66;
	uParam0->f_52 = { uParam1->f_67 };
	Var0.f_1 = 0;
	Var0.f_2 = 429892159;
	Var0.f_3 = __LIB_3__::func_38(__LIB_0__::func_317());
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 13127246;
		Var0.f_3 = uParam1->f_9;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			__LIB_3__::func_41(Var0, -12317914, &(uParam0->f_37), 0);
			func_1836(Var0, 482834189, &(uParam0->f_40), 0);
			__LIB_3__::func_41(Var0, 1749910275, &(uParam0->f_28), 0);
			func_1836(Var0, -240512847, &(uParam0->f_31), 0);
			__LIB_16__::func_336(Var0, -350109401, &bVar5, 0);
			if (bVar5)
			{
				__LIB_0__::func_63(&(uParam0->f_9), 1, 1);
			}
			__LIB_16__::func_336(Var0, -1153145259, &bVar6, 0);
			if (bVar6)
			{
				__LIB_0__::func_63(&(uParam0->f_9), 32, 1);
			}
			if (func_1836(Var0, -768200779, &uVar7, 0))
			{
				uParam0->f_41 = uVar7;
			}
			if (__LIB_3__::func_40(Var0, 1946033125, &(uParam0->f_18), 0))
			{
				__LIB_0__::func_63(&(uParam0->f_9), 4, 1);
			}
			if (__LIB_3__::func_40(Var0, 738913608, &(uParam0->f_68), 0))
			{
			}
			if (__LIB_3__::func_41(Var0, -1498558552, &(uParam0->f_32), 0))
			{
				func_1836(Var0, -950402515, &(uParam0->f_35), 0);
				Var0.f_3 = 1476587948;
				if (__LIB_0__::func_412(Var0, -808176988, &(uParam0->f_36), 0))
				{
				}
				else
				{
					uParam0->f_36 = joaat("WORLD_HUMAN_SMOKE");
				}
			}
		}
	}
}

bool func_1177(bool bParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_490, false))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1391438.f_490, 1);
		bVar0 = false;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_592, false))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1391438.f_592, 1);
		bVar0 = false;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (__LIB_0__::func_702(Global_1391438.f_7[iVar1 /*99*/].f_10))
		{
			__LIB_1__::func_559(Global_1391438.f_7[iVar1 /*99*/].f_10, 0, 2);
		}
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_206[iVar1], false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1391438.f_206[iVar1], 1);
			bVar0 = false;
		}
		iVar1++;
	}
	if (bVar0)
	{
		__LIB_1__::func_714();
		if (bParam0)
		{
			func_1847();
		}
	}
	return bVar0;
}

int func_1178(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	uParam0->f_1 = iParam1;
	uParam0->f_16 = __LIB_1__::func_316(__LIB_0__::func_317(), iParam1);
	Var0 = Global_1359489.f_21;
	Var0.f_2 = 429892159;
	Var0.f_3 = __LIB_3__::func_38(__LIB_0__::func_317());
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 13127246;
		Var0.f_3 = iParam1;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			if (__LIB_16__::func_336(Var0, -1688140176, &uVar6, 0))
			{
				uParam0->f_11 = uVar6;
			}
			else
			{
				uParam0->f_11 = 1;
			}
			__LIB_3__::func_41(Var0, 1156974471, &(uParam0->f_5), 0);
			__LIB_3__::func_41(Var0, -12317914, &(uParam0->f_8), 0);
			__LIB_0__::func_412(Var0, 191541852, &iVar7, 0);
			*uParam0 = __LIB_16__::func_337(iVar7);
			uVar5 = Var0.f_1;
			uParam0->f_3 = 0;
			iVar9 = 0;
			while (iVar9 < 3)
			{
				Var0.f_3 = iVar9;
				if (__LIB_0__::func_412(Var0, 919971448, &iVar10, 0))
				{
					iVar8 = __LIB_16__::func_280(iVar10);
					if (__LIB_0__::func_31(iVar8))
					{
						uParam0->f_3 = (uParam0->f_3 || __LIB_0__::func_771(iVar8));
						if (iVar9 == 0)
						{
							uParam0->f_2 = iVar8;
						}
					}
				}
			else
			{
				}
				else
				{
					iVar9++;
				}
			}
			Var0.f_1 = uVar5;
			Var0.f_2 = 429172948;
			uParam0->f_17 = 0;
			if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
				iVar11 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
				iVar9 = 0;
				while (iVar9 < iVar11)
				{
					Var0.f_3 = iVar9;
					__LIB_0__::func_414(Var0, -1857445163, &iVar12, 0);
					__LIB_0__::func_414(Var0, 1738420189, &iVar13, 0);
					if (iVar13 < iVar12)
					{
					}
					iVar14 = iVar12;
					while (iVar14 <= iVar13)
					{
						__LIB_16__::func_338(&(uParam0->f_17), iVar14, 1);
						iVar14++;
					}
					iVar9++;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_1191(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (uParam0->f_1 == -589165916)
	{
		return false;
	}
	uParam0->f_4 = 0;
	if (uParam0->f_15)
	{
		__LIB_0__::func_11("The activity is being force launched. Returning TRUE.", 1, 1);
		return true;
	}
	if (!uParam0->f_11)
	{
		__LIB_0__::func_11("The activity is not enabled in flow.", 1, 1);
		__LIB_0__::func_63(&(uParam0->f_4), 1, 1);
	}
	if (uParam0->f_12)
	{
		__LIB_0__::func_63(&(uParam0->f_4), 2, 1);
	}
	if (!__LIB_1__::func_269(uParam0->f_2, 1, 0))
	{
		__LIB_0__::func_11("Host is not available.", 1, 1);
		__LIB_0__::func_63(&(uParam0->f_4), 4, 1);
	}
	if (__LIB_1__::func_531(uParam0->f_2, 2, 0))
	{
		__LIB_0__::func_11("Host has a higher level ambient request.", 1, 1);
		__LIB_0__::func_63(&(uParam0->f_4), 4, 1);
	}
	if (__LIB_1__::func_302(uParam0->f_2, 2))
	{
		__LIB_0__::func_11("Host already requested for another activity.", 1, 1);
		__LIB_0__::func_63(&(uParam0->f_4), 4, 1);
	}
	if (__LIB_8__::func_961(uParam0->f_1))
	{
		__LIB_0__::func_11("Activity has already been performed.", 1, 1);
		__LIB_0__::func_63(&(uParam0->f_4), 32, 1);
	}
	if (!__LIB_10__::func_719(*uParam0))
	{
		__LIB_0__::func_11("Activity type is not unlocked.", 1, 1);
		__LIB_0__::func_63(&(uParam0->f_4), 64, 1);
	}
	if (!func_1854(uParam0->f_1))
	{
		__LIB_0__::func_11("Activity type is not unlocked.", 1, 1);
		__LIB_0__::func_63(&(uParam0->f_4), 64, 1);
	}
	switch (uParam0->f_1)
	{
		case joaat("HAI_DOMINOES_01"):
			if (__LIB_0__::func_627(134, 0))
			{
				__LIB_0__::func_11("Activity would be too close to Sadie 1.", 1, 1);
				__LIB_0__::func_63(&(uParam0->f_4), 128, 1);
			}
			break;
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			if (__LIB_0__::func_492(1) < 10)
			{
				__LIB_0__::func_11("Not enough money.", 1, 1);
				__LIB_0__::func_63(&(uParam0->f_4), 64, 1);
			}
			break;
	}
	if (!__LIB_0__::func_86(uParam0->f_5))
	{
		if (__LIB_1__::func_261(uParam0->f_5, 6f, 4, 1))
		{
			__LIB_0__::func_11("Activity would be inside an existing lock volume.", 1, 1);
			__LIB_0__::func_63(&(uParam0->f_4), 128, 1);
		}
	}
	if (!__LIB_6__::func_734(uParam0))
	{
		__LIB_0__::func_11("We're outside the time window..", 1, 1);
		__LIB_0__::func_63(&(uParam0->f_4), 256, 1);
	}
	if (__LIB_1__::func_250(*uParam0))
	{
		__LIB_0__::func_11("An activity of the same type is already pending.", 1, 1);
		__LIB_0__::func_63(&(uParam0->f_4), 512, 1);
	}
	if (Global_40.f_4283.f_4 != 1)
	{
		__LIB_0__::func_11("We're not in a running state for camp.", 1, 1);
		__LIB_0__::func_63(&(uParam0->f_4), 256, 1);
	}
	iVar0 = __LIB_0__::func_317();
	switch (iVar0)
	{
		case 1:
			if (__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
		case 3:
			if (__LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
	}
	if (bVar1)
	{
		if (!__LIB_0__::func_58(uParam0->f_1))
		{
			__LIB_0__::func_11("We're not allowed to run during a party night.", 1, 1);
			__LIB_0__::func_63(&(uParam0->f_4), 256, 1);
		}
	}
	iVar2 = 0;
	while (iVar2 < 27)
	{
		if (__LIB_0__::func_51(&(uParam0->f_3), __LIB_0__::func_771(iVar2)))
		{
			if (!__LIB_0__::func_903(iVar2))
			{
				__LIB_0__::func_11("A Required participant is not available.", 1, 1);
				__LIB_0__::func_63(&(uParam0->f_4), 1024, 1);
			}
		}
		iVar2++;
	}
	if (uParam0->f_4 != 0)
	{
		return false;
	}
	__LIB_0__::func_11("Activity passes basic checks. It will be added to the array to pick from.", 1, 1);
	return true;
}

int func_1192(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0->f_18;
	if (uParam0->f_13)
	{
		iVar0 += 100;
		if (!uParam0->f_14)
		{
			uParam0->f_13 = 0;
		}
		return iVar0;
	}
	iVar1 = func_1857(*uParam0);
	if (iVar1 != 176656832)
	{
		if (__LIB_1__::func_198(iVar1, 1))
		{
			iVar0 = (iVar0 - 5);
		}
	}
	if (!func_1858(*uParam0))
	{
		iVar0 += 5;
	}
	iVar0 = (iVar0 - (1 * uParam0->f_19));
	if (!func_1859(*uParam0))
	{
		iVar0 += 5;
	}
	return iVar0;
}

bool func_1205(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	if (func_1865(iParam0))
	{
		if (!__LIB_1__::func_59(Global_1934051[iParam0 /*2*/]))
		{
			vVar0 = { func_1866(iParam1) };
			if (!__LIB_0__::func_86(vVar0))
			{
				Global_1934051[iParam0 /*2*/] = __LIB_14__::func_135(iParam1, 62, vVar0, -1);
			}
			if (Global_1934051[iParam0 /*2*/] != -1)
			{
				if (!Global_1934051[iParam0 /*2*/].f_1)
				{
					func_1868(Global_1934051[iParam0 /*2*/], func_1867(iParam1));
					iVar3 = __LIB_1__::func_98(iParam1);
					if (iVar3 != 0)
					{
						__LIB_3__::func_559(Global_1934051[iParam0 /*2*/], iVar3);
						Global_1934051[iParam0 /*2*/].f_1 = 1;
					}
				}
			}
		}
	}
	return true;
}

void func_1208()
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
	iVar0 = __LIB_0__::func_12();
	iVar4 = 3;
	iVar5 = 0;
	if (__LIB_0__::func_20(iVar0))
	{
		iVar1 = -1;
		func_1869(iVar0, &iVar1, &iVar2);
		iVar3 = Global_1914319.f_2;
		while (iVar3 <= iVar2)
		{
			if (iVar5 >= iVar4)
			{
			}
			else
			{
				if (!(__LIB_3__::func_222(iVar0) || (iVar0 == 128 && iVar3 == 34)) || iVar0 != __LIB_9__::func_843(iVar3))
				{
				}
				else if (!func_1240(iVar3, iVar0))
				{
				}
				else
				{
					iVar5++;
				}
				iVar3++;
			}
		}
	}
	Global_1914319.f_2 = iVar3;
	if (Global_1914319.f_2 > iVar2)
	{
		Global_1914319.f_2 = iVar1;
	}
	iVar6 = 3;
	iVar5 = 0;
	iVar7 = __LIB_9__::func_843(Global_1914319.f_1);
	iVar8 = iVar7;
	iVar3 = Global_1914319.f_1;
	iVar9 = 0;
	iVar9 = 0;
	while (iVar9 < 150)
	{
		if ((iVar5 >= iVar6 || (iVar9 > 0 && iVar7 == iVar8)) || iVar3 > 100)
		{
		}
		else
		{
			if ((__LIB_0__::func_20(iVar7) && __LIB_3__::func_222(iVar7)) && iVar7 != __LIB_0__::func_12())
			{
				iVar3 = iVar3;
				while (iVar3 <= 100 + 1)
				{
					if (iVar5 >= iVar6)
					{
					}
					else if (__LIB_9__::func_843(iVar3) != iVar7)
					{
						iVar7 = __LIB_9__::func_843(iVar3);
					}
					else
					{
						if (!func_1240(iVar3, iVar7))
						{
						}
						else
						{
							iVar5++;
						}
						iVar3++;
					}
				}
			}
			else
			{
				iVar3 = func_1870(iVar7) + 1;
				func_1871(&iVar3);
				iVar7 = __LIB_9__::func_843(iVar3);
			}
			iVar9++;
		}
	}
	func_1871(&iVar3);
	Global_1914319.f_1 = iVar3;
	if (Global_1914319.f_1 > 100)
	{
		Global_1914319.f_1 = 0;
	}
}

void func_1209()
{
	if (__LIB_0__::func_27(Global_1430226.f_4, 1))
	{
		if (((((!__LIB_0__::func_296(0, 0, 1) && !Global_43891) && !__LIB_0__::func_91()) && !__LIB_2__::func_454()) && !__LIB_2__::func_514()) && !__LIB_0__::func_104())
		{
			if (!Global_1914319.f_19657)
			{
				__LIB_8__::func_966("TF_SHOP_POST_OFFICE", 10000, 0, 0, 0, 1);
			}
			func_1872(2, 1);
			Global_1914319.f_19657 = 1;
		}
		else
		{
			func_1872(2, 0);
		}
	}
	else
	{
		func_1872(2, 0);
		Global_1914319.f_19657 = 0;
	}
}

int func_1210(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5;
		case 2:
			return 5;
		case 3:
			return 105;
		case 5:
			return 76;
		case 6:
			return 76;
		case 8:
			return 92;
		case 0:
			return 38;
		case 4:
			return 115;
		case 7:
			return 120;
		default:
			break;
	}
	return -1;
}

Vector3 func_1211(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2796.278f, -1168.035f, 46.924f;
		case 2:
			return 2633.455f, -1226.72f, 52.3796f;
		case 3:
			return 1343.574f, -1375.64f, 79.4806f;
		case 5:
			return -308.9729f, 807.0829f, 117.9797f;
		case 6:
			return -241.294f, 770f, 118.14f;
		case 8:
			return 2946.662f, 523.323f, 46.02f;
		case 0:
			return -815.3443f, -1315.599f, 42.6788f;
		case 4:
			return -5514.454f, -2910.941f, 0.196263f;
		case 7:
			return -3701.056f, -2595.456f, -14.37373f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_1213(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (iParam1 != -1)
	{
		iVar0 = func_1873(iParam1);
		if (func_1865(iVar0))
		{
			if (Global_1934051[iVar0 /*2*/] != -1)
			{
				iVar1 = __LIB_1__::func_300(iParam1);
				if (iVar1 != 0)
				{
					__LIB_3__::func_559(iParam0, iVar1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_1217(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_20(uParam0->f_2))
	{
		return false;
	}
	if (!__LIB_1__::func_224(uParam0->f_1))
	{
		return false;
	}
	if (__LIB_0__::func_730(uParam0->f_2))
	{
		return false;
	}
	if (__LIB_0__::func_21(uParam0->f_2, 4194304))
	{
		return false;
	}
	iVar0 = __LIB_5__::func_864(uParam0->f_2);
	if (iVar0 != -1)
	{
		if (__LIB_0__::func_317() != iVar0)
		{
			return false;
		}
	}
	return true;
}

void func_1221(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (iParam1 != -1)
	{
		iVar0 = func_1873(iParam1);
		if (func_1865(iVar0))
		{
			if (Global_1934051[iVar0 /*2*/] != -1)
			{
				iVar1 = __LIB_1__::func_300(iParam1);
				if (iVar1 != 0)
				{
					MAP::_BLIP_SET_MODIFIER(iParam0, __LIB_1__::func_300(iParam1));
				}
			}
		}
	}
}

bool func_1222(int iParam0)
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BOUNTY_POSTER")) > 0)
	{
		if (__LIB_0__::func_94(Global_35, __LIB_10__::func_639(iParam0), 1) < 200f)
		{
			return true;
		}
	}
	else if (__LIB_0__::func_94(Global_35, __LIB_10__::func_639(iParam0), 1) < 130f)
	{
		return true;
	}
	return false;
}

bool func_1225(int iParam0, int iParam1)
{
	if (__LIB_1__::func_220(iParam0))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BOUNTY_POSTER")) > 0)
		{
			if (Global_1392235.f_3)
			{
				return false;
			}
		}
		else if (__LIB_0__::func_94(Global_35, __LIB_10__::func_639(iParam1), 1) < 200f)
		{
			return false;
		}
	}
	return true;
}

int func_1228(int iParam0, var uParam1, float fParam2)
{
	if (fParam2 >= 0f && fParam2 > (1.6f * 2f))
	{
		*uParam1 = 4;
		return 0;
	}
	if (Global_1430231.f_2)
	{
		*uParam1 = 4;
		return 0;
	}
	if (!__LIB_16__::func_395())
	{
		*uParam1 = 1;
		return 0;
	}
	if (__LIB_0__::func_255(Global_35, 0))
	{
		*uParam1 = 4;
		return 0;
	}
	if (UIAPPS::_IS_ANY_APP_RUNNING())
	{
		if (!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("FAST_TRAVEL_MENU")))
		{
			*uParam1 = 4;
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && iParam0 != 120)
	{
		*uParam1 = 3;
		return 0;
	}
	if (__LIB_16__::func_366(__LIB_2__::func_702()) > 15)
	{
		*uParam1 = 2;
		return 0;
	}
	if (__LIB_0__::func_730(iParam0))
	{
		*uParam1 = 4;
		return 0;
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		*uParam1 = 4;
		return 0;
	}
	if (__LIB_2__::func_765(9, 0) || __LIB_0__::func_296(0, 0, 1))
	{
		*uParam1 = 4;
		return 0;
	}
	if (__LIB_8__::func_67() >= 0.8f)
	{
		*uParam1 = 4;
		return 0;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		*uParam1 = 4;
		return 0;
	}
	if (!PED::IS_PED_ON_FOOT(Global_35))
	{
		*uParam1 = 4;
		return 0;
	}
	if (PED::_0x331550B212014B92(Global_35, 0))
	{
		*uParam1 = 4;
		return 0;
	}
	if (TASK::_0x038B1F1674F0E242(Global_35) || TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		*uParam1 = 4;
		return 0;
	}
	return 1;
}

bool func_1229(int iParam0)
{
	if (!__LIB_3__::func_222(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_113() && iParam0 == 38)
	{
		return false;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1430231.f_9) && iParam0 == __LIB_0__::func_12())
	{
		return false;
	}
	return true;
}

int func_1233(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 60;
		case 1:
		case 2:
		case 3:
		case 4:
			return 51;
		default:
			break;
	}
	return 0;
}

Vector3 func_1238()
{
	return 1411.177f, 268.14f, 88.5547f;
}

bool func_1240(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = __LIB_1__::func_921(iParam0);
	if (!func_1888(iParam0, iVar0))
	{
		if (__LIB_14__::func_127(iParam0))
		{
			__LIB_9__::func_945(&(Global_1914319.f_15936[iParam0 /*6*/]), 0);
			Global_1914319.f_15936[iParam0 /*6*/].f_5 = 0;
		}
		return false;
	}
	__LIB_0__::func_11(iVar0);
	bVar1 = false;
	if (!__LIB_14__::func_127(iParam0))
	{
		Global_1914319.f_15936[iParam0 /*6*/] = __LIB_19__::func_499(iVar0, iParam0, iParam1);
		if (Global_1914319.f_15936[iParam0 /*6*/] != -1)
		{
			if (iVar0 == 9)
			{
				Global_1914319.f_15936[iParam0 /*6*/].f_1 = __LIB_16__::func_388(iParam0, iVar0);
			}
			else if (iVar0 == __LIB_1__::func_921(iParam0))
			{
				iVar2 = __LIB_19__::func_324(iVar0);
				if (iVar2 != 0)
				{
					Global_1914319.f_15936[iParam0 /*6*/].f_1 = iVar2;
				}
			}
			__LIB_10__::func_615(Global_1914319.f_15936[iParam0 /*6*/], joaat("BLIP_STYLE_SHOP"));
			if (iVar0 == 19)
			{
				MAP::SET_BLIP_FLASH_TIMER(Global_36308[Global_1914319.f_15936[iParam0 /*6*/]], 67, -1);
				func_1822(Global_1914319.f_15936[iParam0 /*6*/], iParam1);
			}
			bVar1 = true;
		}
		__LIB_1__::func_937(iParam0, 32);
		__LIB_1__::func_937(iParam0, 16);
		__LIB_1__::func_937(iParam0, 64);
		__LIB_1__::func_937(iParam0, 128);
		__LIB_1__::func_937(iParam0, -2147483648);
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (!Global_1914319.f_15936[iParam0 /*6*/].f_5 && !(iParam0 == Global_1934051.f_116 && !Global_1934051.f_118))
		{
			if (iParam1 == __LIB_9__::func_843(iParam0) && func_1213(Global_1914319.f_15936[iParam0 /*6*/], iParam1))
			{
				Global_1914319.f_15936[iParam0 /*6*/].f_5 = 1;
			}
		}
		func_1894(iParam0, iVar0);
	}
	return true;
}

int func_1243(int iParam0)
{
	switch (iParam0)
	{
		case -1385367302:
			return -1;
		case joaat("HASH_AMB_VIG_BARBER_SHAVING"):
			return 0;
		case joaat("HASH_AMB_VIG_BODY_TOSS"):
			return 1;
		case joaat("HASH_AMB_VIG_BUTCHER_BLEED_DEER"):
			return 2;
		case joaat("HASH_AMB_VIG_BUTCHER_HANG_CARCASS"):
			return 3;
		case joaat("HASH_AMB_VIG_CHAMBERPOT_TOSS"):
			return 4;
		case joaat("HASH_AMB_VIG_COW_GRAZING"):
			return 5;
		case joaat("HASH_AMB_VIG_DROP_RABBIT_TABLE"):
			return 6;
		case joaat("HASH_AMB_VIG_GET_DIRECTIONS"):
			return 7;
		case joaat("HASH_AMB_VIG_GOAT_GRAZING"):
			return 8;
		case joaat("HASH_AMB_VIG_LIGHT_SMOKE"):
			return 9;
		case joaat("HASH_AMB_VIG_LUMBER_PASS_DOWN_BALCONY"):
			return 10;
		case joaat("HASH_AMB_VIG_LUMBER_PASS_UP_BALCONY"):
			return 11;
		case joaat("HASH_AMB_VIG_MAN_JUMP_FENCE"):
			return 12;
		case joaat("HASH_AMB_VIG_MAN_STAND_AT_WAGON"):
			return 13;
		case joaat("HASH_AMB_VIG_PUMP_CART"):
			return 14;
		case joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_1_HIGH"):
			return 16;
		case joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_1_MED"):
			return 17;
		case joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_2_HIGH"):
			return 18;
		case joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_2_MED"):
			return 19;
		case joaat("HASH_AMB_VIG_STARTING_TO_RAIN_FEMALE"):
			return 21;
		case joaat("HASH_AMB_VIG_STARTING_TO_RAIN_MALE"):
			return 22;
		case joaat("HASH_AMB_VIG_STAGE_COACH"):
			return 20;
		case joaat("HASH_AMB_VIG_VOMIT_SIT_FEMALE"):
			return 23;
		case joaat("HASH_AMB_VIG_VOMIT_SIT_MALE"):
			return 24;
		case joaat("HASH_AMB_VIG_VOMIT_WALL_FEMALE"):
			return 25;
		case joaat("HASH_AMB_VIG_VOMIT_WALL_MALE"):
			return 26;
		case joaat("HASH_AMB_VIG_WAGON_LOAD_BARREL"):
			return 27;
		case joaat("HASH_AMB_VIG_WAGON_SWEEPER"):
			return 28;
		case joaat("HASH_AMB_VIG_WAGON_UNLOAD_BARREL"):
			return 29;
		case joaat("HASH_AMB_VIG_WALK_WITH_HORSE_A"):
			return 30;
		case joaat("HASH_AMB_VIG_WHISPER_SIT"):
			return 31;
		case joaat("HASH_AMB_VIG_WHISPER_STAND"):
			return 32;
		case joaat("HASH_AMB_VIG_WHORE_GIVE_MONEY_MADAM"):
			return 33;
		case joaat("HASH_AMB_VIG_AMB_CAMP_ROBBERY"):
			return 34;
		case joaat("HASH_AMB_VIG_BOAT_PLACEMENT"):
			return 35;
		case joaat("HASH_AMB_VIG_COUGAR_GRAPPLE_PED"):
			return 36;
		case joaat("HASH_AMB_VIG_CROSS_TERRAIN_WALKER"):
			return 37;
		case joaat("HASH_AMB_VIG_DEER_CARRY_DROPOFF"):
			return 38;
		case joaat("HASH_AMB_VIG_DEER_CARRY_RIDE"):
			return 39;
		case joaat("HASH_AMB_VIG_DOG_IN_WAGON"):
			return 40;
		case joaat("HASH_AMB_VIG_DUCK_CARRY"):
			return 41;
		case joaat("HASH_AMB_VIG_FEMALE_RIDER_MALE_WALKER"):
			return 42;
		case joaat("HASH_AMB_VIG_FISHING_RIVER"):
			return 43;
		case joaat("HASH_AMB_VIG_FISHING_RIVER_DOG"):
			return 44;
		case joaat("HASH_AMB_VIG_GATOR_GRAPPLE_PED"):
			return 45;
		case joaat("HASH_AMB_VIG_GOAT_CARRY_RIDE"):
			return 46;
		case joaat("HASH_AMB_VIG_HOBO_TRAIN_HOP_NO_SACK"):
			return 47;
		case joaat("HASH_AMB_VIG_MACFARLANE_FARMER"):
			return 48;
		case joaat("HASH_AMB_VIG_MAN_RIDING_DONKEY"):
			return 49;
		case joaat("HASH_AMB_VIG_MAN_SIT_READ"):
			return 50;
		case joaat("HASH_AMB_VIG_MAN_RIDE_WITH_LANTERN"):
			return 51;
		case joaat("HASH_AMB_VIG_OUTDOORSMAN"):
			return 52;
		case joaat("HASH_AMB_VIG_RAM_CARRY_RIDE"):
			return 53;
		case joaat("HASH_AMB_VIG_RESTING_HAT"):
			return 54;
		case joaat("HASH_AMB_VIG_RIDER_GALLOP"):
			return 55;
		case joaat("HASH_AMB_VIG_RIDER_WITH_DOG"):
			return 56;
		case joaat("HASH_AMB_VIG_RIDGELINE_NATIVE"):
			return 57;
		case joaat("HASH_AMB_VIG_RIDGELINE_RIDER"):
			return 58;
		case joaat("HASH_AMB_VIG_SLOW_RIDER"):
			return 60;
		case joaat("HASH_AMB_VIG_TRAFFIC_CART"):
			return 61;
		case joaat("HASH_AMB_VIG_TRAFFIC_CONVO_TWO_RIDERS"):
			return 62;
		case joaat("HASH_AMB_VIG_TRAFFIC_CONVO_TWO_WALKERS"):
			return 63;
		case joaat("HASH_AMB_VIG_TRAVELLER_GALLOP_PAST"):
			return 64;
		case joaat("HASH_AMB_VIG_WAGON_BACK_PASSENGER"):
			return 66;
		case joaat("HASH_AMB_VIG_WAGON_HARMONICA"):
			return 65;
		case joaat("HASH_AMB_VIG_WALK_WITH_DOG"):
			return 72;
		case joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_DEER"):
			return 67;
		case joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_GOAT"):
			return 68;
		case joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_PRONGHORN"):
			return 69;
		case joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_RAM"):
			return 70;
		case joaat("HASH_AMB_VIG_WALK_PACK_HORSE"):
			return 71;
		case joaat("HASH_AMB_VIG_WALK_WITH_OX"):
			return 73;
		case joaat("HASH_AMB_VIG_WATER_HORSE"):
			return 74;
		case joaat("HASH_AMB_VIG_ALLIGATOR_BOAR_LEG"):
			return 75;
		case joaat("HASH_AMB_VIG_ALLIGATOR_BOAR_NECK"):
			return 76;
		case joaat("HASH_AMB_VIG_ALLIGATOR_EAT_DEAD_BIRD"):
			return 77;
		case joaat("HASH_AMB_VIG_ARMADILLO_RUN"):
			return 78;
		case joaat("HASH_AMB_VIG_BAT_FLEE_SWARM_LRG"):
			return 79;
		case joaat("HASH_AMB_VIG_BAT_HANG_SWARM"):
			return 80;
		case joaat("HASH_AMB_VIG_BEARBLACK_BACKDOWN"):
			return 81;
		case joaat("HASH_AMB_VIG_BEAR_INTIMIDATE_WOLF"):
			return 82;
		case joaat("HASH_AMB_VIG_BEAR_RUN_CATCH_FISH"):
			return 83;
		case joaat("HASH_AMB_VIG_BEAR_SCRATCH_BACK"):
			return 84;
		case joaat("HASH_AMB_VIG_BEAR_VS_WOLVES"):
			return 85;
		case joaat("HASH_AMB_VIG_BEAVER_SWIM_WITH_BRANCH"):
			return 86;
		case joaat("HASH_AMB_VIG_BIG_CAT_AMBUSH_DEER"):
			return 87;
		case joaat("HASH_AMB_VIG_BIG_CAT_KILL_RACCOON"):
			return 88;
		case joaat("HASH_AMB_VIG_BIRD_FENCE_SWARM_CROW"):
			return 89;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_CROW"):
			return 90;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_DUCK"):
			return 91;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_DUCK_LRG"):
			return 92;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_DUCK_LRG_W"):
			return 93;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_GOOSE"):
			return 94;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_PIGEON"):
			return 95;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_RAVEN"):
			return 96;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_RAVEN_DARK"):
			return 97;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_RAVEN_LRG"):
			return 98;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_SEAGULL"):
			return 99;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_SONGBIRD"):
			return 100;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_SPARROW"):
			return 101;
		case joaat("HASH_AMB_VIG_BIRDS_IN_TREE"):
			return 102;
		case joaat("HASH_AMB_VIG_BIRD_LAND_BLUEJAY"):
			return 103;
		case joaat("HASH_AMB_VIG_BIRD_LAND_CARDINAL"):
			return 104;
		case joaat("HASH_AMB_VIG_BIRD_LAND_DUCK"):
			return 105;
		case joaat("HASH_AMB_VIG_BIRD_LAND_EAGLE"):
			return 106;
		case joaat("HASH_AMB_VIG_BIRD_LAND_HAWK"):
			return 107;
		case joaat("HASH_AMB_VIG_BIRD_LAND_HERON"):
			return 108;
		case joaat("HASH_AMB_VIG_BIRD_LAND_LOON"):
			return 109;
		case joaat("HASH_AMB_VIG_BIRD_LAND_OWL"):
			return 110;
		case joaat("HASH_AMB_VIG_BIRD_LAND_SEAGULL"):
			return 111;
		case joaat("HASH_AMB_VIG_BIRD_LAND_SONGBIRD"):
			return 112;
		case joaat("HASH_AMB_VIG_BIRD_LAND_SPARROW"):
			return 113;
		case joaat("HASH_AMB_VIG_BIRD_LAND_SWARM_CROW"):
			return 114;
		case joaat("HASH_AMB_VIG_BIRD_LAND_SWARM_PIGEON"):
			return 115;
		case joaat("HASH_AMB_VIG_BIRD_ON_ALLIGATOR"):
			return 116;
		case joaat("HASH_AMB_VIG_BIRD_ON_BUCK"):
			return 117;
		case joaat("HASH_AMB_VIG_BIRD_ON_BUFFALO"):
			return 118;
		case joaat("HASH_AMB_VIG_BIRD_ON_COW"):
			return 119;
		case joaat("HASH_AMB_VIG_BIRD_ON_ELK"):
			return 120;
		case joaat("HASH_AMB_VIG_BIRD_ON_MOOSE"):
			return 121;
		case joaat("HASH_AMB_VIG_BIRD_SWARM"):
			return 122;
		case joaat("HASH_AMB_VIG_BIRD_WIRE_SWARM_SPARROW"):
			return 123;
		case joaat("HASH_AMB_VIG_BLUEJAY_ON_PERCH"):
			return 124;
		case joaat("HASH_AMB_VIG_BOAR_RUN"):
			return 125;
		case joaat("HASH_AMB_VIG_BUCK_AND_DOE"):
			return 126;
		case joaat("HASH_AMB_VIG_BUCKS_FIGHTING"):
			return 127;
		case joaat("HASH_AMB_VIG_BUFFALO_VS_BUFFALO"):
			return 128;
		case joaat("HASH_AMB_VIG_BUFFALO_WALLOW_SHAKE"):
			return 129;
		case joaat("HASH_AMB_VIG_CAMP_BIRD_ON_PERCH"):
			return 131;
		case joaat("HASH_AMB_VIG_CALIFORNIACONDOR_ON_PERCH"):
			return 132;
		case joaat("HASH_AMB_VIG_CARDINAL_ON_PERCH"):
			return 132;
		case joaat("HASH_AMB_VIG_CAT_CARRY_RAT"):
			return 133;
		case joaat("HASH_AMB_VIG_CAT_CATCH_BIRD"):
			return 134;
		case joaat("HASH_AMB_VIG_CAT_RUN"):
			return 135;
		case joaat("HASH_AMB_VIG_COYOTE_CATCH_SQUIRREL"):
			return 136;
		case joaat("HASH_AMB_VIG_COYOTE_EAT_SHEEP"):
			return 137;
		case joaat("HASH_AMB_VIG_COYOTE_TAKEDOWN_MISS_DEER"):
			return 138;
		case joaat("HASH_AMB_VIG_CROWS_AND_EAGLES_EAT_DEER"):
			return 139;
		case joaat("HASH_AMB_VIG_CROWS_AND_VULTURES_EAT_DEER"):
			return 140;
		case joaat("HASH_AMB_VIG_CROWS_AND_VULTURES_EAT_HUMAN"):
			return 141;
		case joaat("HASH_AMB_VIG_CROWS_EATING_DEER"):
			return 142;
		case joaat("HASH_AMB_VIG_CROWS_EATING_HUMAN"):
			return 143;
		case joaat("HASH_AMB_VIG_CROW_ON_PERCH"):
			return 144;
		case joaat("HASH_AMB_VIG_DEAD_BOAR"):
			return 145;
		case joaat("HASH_AMB_VIG_DEAD_BUCK"):
			return 146;
		case joaat("HASH_AMB_VIG_DEAD_BUFFALO"):
			return 147;
		case joaat("HASH_AMB_VIG_DEAD_COYOTE"):
			return 148;
		case joaat("HASH_AMB_VIG_DEAD_HORSE_A"):
			return 149;
		case joaat("HASH_AMB_VIG_DEAD_HORSE_B"):
			return 150;
		case joaat("HASH_AMB_VIG_DEAD_PIG"):
			return 151;
		case joaat("HASH_AMB_VIG_DEAD_POSSUM"):
			return 152;
		case joaat("HASH_AMB_VIG_DEAD_PRONGHORN"):
			return 153;
		case joaat("HASH_AMB_VIG_DEAD_RACCOON"):
			return 154;
		case joaat("HASH_AMB_VIG_DEAD_SHEEP"):
			return 155;
		case joaat("HASH_AMB_VIG_DEER_ANTLERS_STUCK"):
			return 156;
		case joaat("HASH_AMB_VIG_DEER_RUN"):
			return 157;
		case joaat("HASH_AMB_VIG_DEER_TREE_RUB"):
			return 158;
		case joaat("HASH_AMB_VIG_DISCOVERABLE_PARAKEET"):
			return 159;
		case joaat("HASH_AMB_VIG_DOG_CHASE_CAT"):
			return 160;
		case joaat("HASH_AMB_VIG_DOG_CHASE_TAIL"):
			return 161;
		case joaat("HASH_AMB_VIG_DOGS_PLAYING"):
			return 162;
		case joaat("HASH_AMB_VIG_DUCK_WATER_SWARM"):
			return 163;
		case joaat("HASH_AMB_VIG_EAGLE_CATCH_FISH"):
			return 164;
		case joaat("HASH_AMB_VIG_EAGLE_CATCH_RABBIT"):
			return 165;
		case joaat("HASH_AMB_VIG_EAGLE_CATCH_SEASNAKE"):
			return 166;
		case joaat("HASH_AMB_VIG_EAGLE_DIVE_CATCH_FISH"):
			return 167;
		case joaat("HASH_AMB_VIG_EAGLE_ON_PERCH"):
			return 168;
		case joaat("HASH_AMB_VIG_FOX_CATCH_RODENT"):
			return 169;
		case joaat("HASH_AMB_VIG_FOX_HUNT_IN_SNOW"):
			return 170;
		case joaat("HASH_AMB_VIG_FOX_RUN"):
			return 171;
		case joaat("HASH_AMB_VIG_FOX_SIT"):
			return 172;
		case joaat("HASH_AMB_VIG_GOAT_RUN"):
			return 173;
		case joaat("HASH_AMB_VIG_HAWK_CATCH_SNAKE"):
			return 174;
		case joaat("HASH_AMB_VIG_HAWK_CATCH_SQUIRREL"):
			return 175;
		case joaat("HASH_AMB_VIG_HAWK_ON_PERCH"):
			return 176;
		case joaat("HASH_AMB_VIG_HAWK_VS_SNAKE"):
			return 177;
		case joaat("HASH_AMB_VIG_HORSE_WALLOW"):
			return 178;
		case joaat("HASH_AMB_VIG_IGUANA_RUN"):
			return 179;
		case joaat("HASH_AMB_VIG_IGUANA_DESERT_RUN"):
			return 180;
		case joaat("HASH_AMB_VIG_JAVELINA_RUN"):
			return 181;
		case joaat("HASH_AMB_VIG_OWL_CATCH_RAT"):
			return 186;
		case joaat("HASH_AMB_VIG_OWL_ON_PERCH"):
			return 187;
		case joaat("HASH_AMB_VIG_PELICAN_DIVE"):
			return 188;
		case joaat("HASH_AMB_VIG_PELICAN_ON_PERCH"):
			return 189;
		case joaat("HASH_AMB_VIG_PIG_ROLL_MUD"):
			return 190;
		case joaat("HASH_AMB_VIG_PIG_RUN"):
			return 191;
		case joaat("HASH_AMB_VIG_RABBIT_CHASE_RABBIT"):
			return 192;
		case joaat("HASH_AMB_VIG_RABBIT_RUN"):
			return 193;
		case joaat("HASH_AMB_VIG_MANGY_DOG_AND_VULTURES"):
			return 182;
		case joaat("HASH_AMB_VIG_MOOSE_GRAZING"):
			return 183;
		case joaat("HASH_AMB_VIG_MOOSE_SLIPPING"):
			return 184;
		case joaat("HASH_AMB_VIG_MUSKRAT_RUN"):
			return 185;
		case joaat("HASH_AMB_VIG_RACCOON_EATING"):
			return 194;
		case joaat("HASH_AMB_VIG_RACCOON_RUN"):
			return 195;
		case joaat("HASH_AMB_VIG_RAMS_HEADBUTT"):
			return 196;
		case joaat("HASH_AMB_VIG_RAM_RUN"):
			return 197;
		case joaat("HASH_AMB_VIG_RATS_EAT_HUMAN"):
			return 198;
		case joaat("HASH_AMB_VIG_RATS_EATING_GROUP"):
			return 199;
		case joaat("HASH_AMB_VIG_RAVEN_ON_PERCH"):
			return 200;
		case joaat("HASH_AMB_VIG_REDFOOTED_BOOBY_ON_PERCH"):
			return 201;
		case joaat("HASH_AMB_VIG_RIDGELINE_BUCK"):
			return 202;
		case joaat("HASH_AMB_VIG_RIDGELINE_ELK"):
			return 203;
		case joaat("HASH_AMB_VIG_RIDGELINE_MOOSE"):
			return 204;
		case joaat("HASH_AMB_VIG_RIDGELINE_PRONGHORN"):
			return 205;
		case joaat("HASH_AMB_VIG_RIDGELINE_RAM"):
			return 206;
		case joaat("HASH_AMB_VIG_RIDGELINE_WOLF"):
			return 207;
		case joaat("HASH_AMB_VIG_ROVING_SHEEP_P1"):
			return 59;
		case joaat("HASH_AMB_VIG_SCAVENGER_ON_DEER"):
			return 208;
		case joaat("HASH_AMB_VIG_SHEEP_GRAZING"):
			return 15;
		case joaat("HASH_AMB_VIG_SHEEP_RUN"):
			return 210;
		case joaat("HASH_AMB_VIG_SKUNK_RUN"):
			return 211;
		case joaat("HASH_AMB_VIG_SNAKE_RUN"):
			return 212;
		case joaat("HASH_AMB_VIG_SEAGULL_CATCH_FISH"):
			return 209;
		case joaat("HASH_AMB_VIG_SQUIRREL_CHASE_SQUIRREL"):
			return 213;
		case joaat("HASH_AMB_VIG_SQUIRREL_RUN"):
			return 214;
		case joaat("HASH_AMB_VIG_SWIMMING_BEARBLACK"):
			return 215;
		case joaat("HASH_AMB_VIG_SWIMMING_BEAVER"):
			return 216;
		case joaat("HASH_AMB_VIG_SWIMMING_BOAR"):
			return 217;
		case joaat("HASH_AMB_VIG_SWIMMING_DEER"):
			return 218;
		case joaat("HASH_AMB_VIG_SWIMMING_DOG"):
			return 219;
		case joaat("HASH_AMB_VIG_SWIMMING_ELK"):
			return 220;
		case joaat("HASH_AMB_VIG_SWIMMING_FOX"):
			return 221;
		case joaat("HASH_AMB_VIG_SWIMMING_MOOSE"):
			return 222;
		case joaat("HASH_AMB_VIG_SWIMMING_MUSKRAT"):
			return 223;
		case joaat("HASH_AMB_VIG_SWIMMING_POSSUM"):
			return 224;
		case joaat("HASH_AMB_VIG_SWIMMING_RACCOON"):
			return 225;
		case joaat("HASH_AMB_VIG_SWIMMING_RAT"):
			return 226;
		case joaat("HASH_AMB_VIG_SWIMMING_WOLF"):
			return 227;
		case joaat("HASH_AMB_VIG_SWIM_WOLF_CHASE_MOOSE"):
			return 228;
		case joaat("HASH_AMB_VIG_TURKEY_RUN"):
			return 229;
		case joaat("HASH_AMB_VIG_VULTURES_EATING_CARCASS_A"):
			return 230;
		case joaat("HASH_AMB_VIG_VULTURES_EATING_HUMAN"):
			return 231;
		case joaat("HASH_AMB_VIG_VULTURE_ON_PERCH"):
			return 232;
		case joaat("HASH_AMB_VIG_WILD_BULL"):
			return 233;
		case joaat("HASH_AMB_VIG_WILD_GOAT"):
			return 234;
		case joaat("HASH_AMB_VIG_WILD_OX"):
			return 235;
		case joaat("HASH_AMB_VIG_WILD_SHARK"):
			return 236;
		case joaat("HASH_AMB_VIG_WOLF_AMBUSH_DEER"):
			return 237;
		case joaat("HASH_AMB_VIG_WOLF_FLEE_WOLVES"):
			return 238;
		case joaat("HASH_AMB_VIG_WOLF_HOWL_CORPSE"):
			return 239;
		case joaat("HASH_AMB_VIG_WOLF_HOWLING"):
			return 240;
		case joaat("HASH_AMB_VIG_WOLVES_HOWLING"):
			return 241;
		case joaat("HASH_AMB_VIG_WOLVES_EAT_DEER"):
			return 242;
		case joaat("HASH_AMB_VIG_WOLVES_PLAYING"):
			return 243;
		case joaat("HASH_AMB_VIG_WOLVES_PLAYING_B"):
			return 244;
		case joaat("HASH_AMB_VIG_WOLVES_PLAYING_C"):
			return 245;
		case joaat("HASH_AMB_VIG_WOLVES_RESTING"):
			return 246;
		case joaat("HASH_AMB_VIG_WOLF_TAKEDOWN_MISS_DEER"):
			return 247;
		default:
			break;
	}
	return -1;
}

void func_1245(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	var uVar8;
	uParam1->f_2 = -641542860;
	uParam1->f_3 = iParam3;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1))
	{
		uVar8 = uParam1->f_1;
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(*uParam1, uParam1->f_1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (*uParam2 >= 960)
			{
			}
			else
			{
				uParam1->f_2 = 1696282352;
				uParam1->f_3 = iVar1;
				if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1))
				{
					uParam1->f_2 = -1119853910;
					if (DATAFILE::_DATAFILE_GET_VECTOR(&vVar2, uParam1))
					{
						if (Global_1415419.f_19[iParam0 /*12*/].f_8 == -1)
						{
							Global_1415419.f_19[iParam0 /*12*/].f_8 = *uParam2;
						}
						Global_1415419.f_2996[*uParam2 /*7*/] = { vVar2 };
						Global_1415419.f_19[iParam0 /*12*/].f_9 = *uParam2;
					}
				else
				{
					}
					else
					{
						uParam1->f_2 = -1983241935;
						if (DATAFILE::_DATAFILE_GET_VECTOR(&vVar5, uParam1))
						{
							Global_1415419.f_2996[*uParam2 /*7*/].f_3 = { vVar5 };
						}
						*uParam2++;
						uParam1->f_1 = uVar8;
					}
					iVar1++;
					__LIB_0__::func_8(&(Global_1415419.f_19[iParam0 /*12*/].f_11), 8);
					__LIB_0__::func_8(&(Global_1415419.f_19[iParam0 /*12*/].f_11), 1);
					__LIB_0__::func_8(&(Global_1415419.f_19[iParam0 /*12*/].f_11), 2);
				}
			}
		}
	}
}

int func_1254(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_2__::func_960(iParam0))
	{
		return 0;
	}
	if (__LIB_0__::func_1(Global_1935630, 2097152))
	{
		return 0;
	}
	if (__LIB_10__::func_656())
	{
		if (__LIB_0__::func_27(Global_1415419.f_3, 2))
		{
			if (!__LIB_0__::func_27(Global_1415419.f_19[iParam0 /*12*/].f_11, 4))
			{
				return 0;
			}
		}
		else if (__LIB_0__::func_27(Global_1415419.f_3, 4))
		{
			if (__LIB_0__::func_27(Global_1415419.f_19[iParam0 /*12*/].f_11, 4))
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		if (Global_1415419.f_19[iParam0 /*12*/].f_8 == -1)
		{
			return 0;
		}
	}
	if (bParam1 && !__LIB_9__::func_968(iParam0))
	{
		return 0;
	}
	if (!__LIB_3__::func_77(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5))
	{
		return 0;
	}
	if (__LIB_10__::func_657(iParam0, 1))
	{
		return 0;
	}
	if (!__LIB_2__::func_117(Global_1415419.f_19[iParam0 /*12*/].f_1))
	{
		return 0;
	}
	if (!func_1531(Global_1415419.f_19[iParam0 /*12*/].f_2))
	{
		return 0;
	}
	return 1;
}

bool func_1256(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = -1;
		iVar0++;
	}
	switch (iParam1)
	{
		case 76:
			if (__LIB_8__::func_714(13, joaat("TSTAG_VAL_MUD3_ACTIVE_CHASE"), 1))
			{
				(*uParam0)[0] = 15;
				(*uParam0)[1] = 28;
				return true;
			}
			if (__LIB_8__::func_714(13, joaat("TSTAG_VAL_MUD5_ACTIVE"), 1))
			{
				(*uParam0)[0] = 15;
				(*uParam0)[1] = 7;
				return true;
			}
			if (__LIB_8__::func_714(13, joaat("TSTAG_FIRST_VISIT"), 1))
			{
				(*uParam0)[0] = 11;
				(*uParam0)[1] = 28;
				(*uParam0)[2] = 33;
				(*uParam0)[3] = 15;
				(*uParam0)[4] = 9;
				return true;
			}
			break;
		case 92:
			if (__LIB_8__::func_714(14, joaat("TSTAG_FIRST_VISIT"), 1))
			{
				(*uParam0)[0] = 182;
				(*uParam0)[1] = 13;
				return true;
			}
			break;
	}
	return false;
}

bool func_1264(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			return true;
	}
	return false;
}

void func_1278(int iParam0)
{
	Global_40.f_12019.f_45 = __LIB_0__::func_23();
	__LIB_1__::func_446(&(Global_40.f_12019.f_45), 0, 0, 0, iParam0, 0, 0, 0);
}

bool func_1282(int iParam0)
{
	return (Global_40.f_12019.f_43 && iParam0) != 0;
}

int func_1283(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("EXOTIC_STAGE_01");
		case 1:
			return joaat("EXOTIC_STAGE_02");
		case 2:
			return joaat("EXOTIC_STAGE_03");
		case 3:
			return joaat("EXOTIC_STAGE_04");
		case 4:
			return joaat("EXOTIC_STAGE_05");
		default:
			break;
	}
	return 0;
}

bool func_1284(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = __LIB_1__::func_35(iParam0, 5);
	iVar1 = __LIB_1__::func_35(iParam0, 6);
	iVar2 = __LIB_1__::func_35(iParam0, 7);
	iVar3 = __LIB_1__::func_35(iParam0, 8);
	iVar4 = __LIB_1__::func_34(iParam0, 15);
	iVar5 = __LIB_1__::func_34(iParam0, 16);
	iVar6 = __LIB_1__::func_34(iParam0, 17);
	iVar7 = __LIB_1__::func_34(iParam0, 18);
	if (iParam0 == joaat("EXOTIC_STAGE_02"))
	{
		if ((__LIB_1__::func_614(iVar0, 0, 0) >= iVar4 && __LIB_1__::func_614(iVar1, 0, 0) >= iVar5) && __LIB_1__::func_614(iVar2, 0, 0) >= iVar6)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (((__LIB_1__::func_614(iVar0, 0, 0) >= iVar4 && __LIB_1__::func_614(iVar1, 0, 0) >= iVar5) && __LIB_1__::func_614(iVar2, 0, 0) >= iVar6) && __LIB_1__::func_614(iVar3, 0, 0) >= iVar7)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

int func_1285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 44;
		case 1:
			return 45;
		case 2:
			return 46;
		case 3:
			return 47;
		case 4:
			return 48;
		default:
			break;
	}
	return -1;
}

void func_1286(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 - (Global_40.f_12019.f_43 && iParam0));
}

void func_1287()
{
	if (!__LIB_1__::func_662(4096))
	{
		__LIB_10__::func_693(4096);
		Global_1900073.f_245 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Fishing");
		Global_1900073.f_246 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1900073.f_245, "BaitCounter");
		Global_1900073.f_247 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1900073.f_246, "isVisible", 1);
		Global_1900073.f_248 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1900073.f_245, "LureName", "");
		Global_1900073.f_249 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1900073.f_245, "LureCount", "");
		Global_1900073.f_250 = DATABINDING::_DATABINDING_ADD_DATA_HASH(Global_1900073.f_245, "LureTexture", 0);
		Global_1900073.f_251 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1900073.f_245, "put_away_fishingrod_visible", 1);
	}
}

void func_1288(var uParam0)
{
	if (Global_1900073.f_18 == 1)
	{
		Global_1900073.f_17 = 0;
		func_495(uParam0);
		return;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() && !__LIB_1__::func_650()) && !__LIB_1__::func_662(1)) || ENTITY::IS_ENTITY_DEAD(Global_35)) || PED::IS_PED_ON_MOUNT(Global_35)) || PED::IS_PED_IN_COMBAT(Global_35, 0)) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_ANY_TRAIN(Global_35)) || func_1917())
	{
		Global_1900073.f_17 = 0;
		func_495(uParam0);
		return;
	}
	if (!__LIB_0__::func_86(uParam0->f_11))
	{
		uParam0->f_15 = __LIB_0__::func_636(Global_36, uParam0->f_11);
		if (uParam0->f_15 > uParam0->f_14)
		{
			func_495(uParam0);
		}
		else
		{
			return;
		}
	}
	else
	{
		uParam0->f_15 = -1f;
	}
	if (uParam0->f_10 == 0)
	{
		TASK::_0x0E184495B27BB57D();
		uParam0->f_1 = TASK::_0x74F0209674864CBD();
		TASK::_0xE9225354FB7437A7(uParam0->f_1, 1);
		TASK::_0x19BC99C678FBA139(uParam0->f_1, 77, 0);
		TASK::_0x0F4F6C4CE471259D(uParam0->f_1, uParam0->f_14);
		TASK::_0x885D19AC2B6FBFF4(uParam0->f_1, 1);
		TASK::_0x2B8AF29A78024BD3(uParam0->f_1);
		uParam0->f_10 = 1;
	}
	if (TASK::_0x1AC5A8AB50CFAA33(uParam0->f_1))
	{
		uParam0->f_9 = TASK::_0x0365000D8BF86531(&(uParam0->f_1));
	}
	else
	{
		func_495(uParam0);
		return;
	}
	switch (uParam0->f_9)
	{
		case 0:
			uParam0->f_10 = 0;
			break;
		case 3:
			uParam0->f_11 = { TASK::_0x865732725536EE39(&(uParam0->f_1)) };
			Global_1900073.f_17 = 1;
			break;
		case 4:
			func_495(uParam0);
			Global_1900073.f_17 = 0;
			break;
	}
}

void func_1290(var uParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam0, true);
	}
	if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_8))
	{
		AUDIO::_0x3210BCB36AF7621B(uParam0->f_8);
	}
	uParam0->f_1 = { 0f, 0f, 0f };
}

int func_1291(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_86(uParam0->f_13[iVar0 /*9*/].f_1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_1292(var uParam0)
{
	var uVar0[15];
	int iVar16;
	int iVar17;
	vector3 vVar18;
	iVar16 = PED::GET_PED_NEARBY_PEDS(Global_35, &uVar0, -1, -1);
	if (iVar16 > 0)
	{
		iVar17 = 0;
		while (iVar17 < iVar16)
		{
			if ((!ENTITY::IS_ENTITY_DEAD(uVar0[iVar17]) && !PED::IS_PED_A_PLAYER(uVar0[iVar17])) && __LIB_10__::func_658(uVar0[iVar17]))
			{
				vVar18 = { ENTITY::GET_ENTITY_COORDS(uVar0[iVar17], true, false) };
				if ((__LIB_0__::func_636(Global_36, vVar18) > uParam0->f_1 && __LIB_0__::func_636(Global_36, vVar18) < uParam0->f_2) && !func_1919(uParam0, vVar18))
				{
					return vVar18;
				}
			}
			iVar17++;
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_1293(vector3 vParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	vParam0.f_2 = (vParam0.z + 10f);
	vVar0 = { 0f, 0f, 0f };
	bVar5 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vParam0, 1, &fVar3);
	bVar6 = MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0, &fVar4, false);
	if ((bVar5 == 1 || bVar6 == 0) || fVar3 > fVar4)
	{
		vVar0.x = vParam0.x;
		vVar0.f_1 = vParam0.y;
		vVar0.f_2 = fVar3;
	}
	return vVar0;
}

void func_1294(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	if ((__LIB_0__::func_86(uParam0->f_13[*uParam0 /*9*/].f_1) && !__LIB_0__::func_86(vParam1)) && !GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_13[*uParam0 /*9*/]))
	{
		uParam0->f_13[*uParam0 /*9*/].f_1 = { vParam1 };
		uParam0->f_13[*uParam0 /*9*/] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("ent_amb_insect_water_flies", uParam0->f_13[*uParam0 /*9*/].f_1, 0f, 0f, 0f, 1f, false, false, false, true);
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_6, uParam0->f_7);
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_8, uParam0->f_9);
		uParam0->f_13[*uParam0 /*9*/].f_4 = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_10, uParam0->f_11 + 1);
		__LIB_1__::func_148(&(uParam0->f_13[*uParam0 /*9*/].f_5));
		GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_13[*uParam0 /*9*/], "size", fVar0, true);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_13[*uParam0 /*9*/], "density", fVar1, true);
		AUDIO::_0xDCF5BA95BBF0FABA(uParam0->f_13[*uParam0 /*9*/].f_8, "Fishing_Fly_Swarm", uParam0->f_13[*uParam0 /*9*/].f_1, uParam0->f_12, 0, 0, 1);
	}
}

int func_1295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

int func_1297(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 155;
		case 1:
			return 163;
		case 2:
			return 150;
		case 3:
			return 153;
		case 4:
			return 157;
		case 5:
			return 160;
		case 6:
			return 164;
		case 7:
			return 148;
		case 8:
			return 128;
		case 9:
			return 167;
		case 10:
			return 161;
		case 11:
			return 130;
		case 12:
			return 152;
		case 13:
			return 151;
		case 14:
			return 156;
		case 15:
			return 166;
		case 16:
			return 158;
		case 17:
			return 142;
		case 18:
			return 132;
		case 19:
			return 143;
		case 20:
			return 146;
		case 21:
			return 168;
		case 22:
			return 159;
		case 23:
			return 135;
		case 24:
			return 131;
		case 25:
			return 136;
		case 26:
			return 137;
		case 27:
			return 139;
		case 28:
			return 140;
		case 29:
			return 141;
		case 30:
			return 147;
		case 31:
			return 165;
		case 32:
			return 145;
		case 33:
			return 134;
		case 34:
			return 149;
		case 35:
			return 154;
		case 36:
			return 162;
		case 37:
			return 138;
		case 38:
			return 133;
		case 39:
			return 129;
		case 40:
			return 144;
		case 50:
			return 169;
		default:
			break;
	}
	return -1;
}

void func_1302(var uParam0)
{
	var uVar0;
	uVar0 = uParam0;
	NETWORK::NETWORK_SET_RICH_PRESENCE(1, &uVar0, 1, 1);
}

void func_1328()
{
	int iVar0;
	iVar0 = 22;
	if (Global_1347702[iVar0 /*49*/].f_36 == joaat("BLIP_RC"))
	{
		if (__LIB_8__::func_791(622))
		{
			Global_1347702[iVar0 /*49*/].f_36 = joaat("BLIP_SCM_DORKINS");
			__LIB_0__::func_7(&(Global_1347702[iVar0 /*49*/].f_13), 1);
			__LIB_12__::func_81(iVar0, 0);
		}
	}
}

void func_1333()
{
	int iVar0;
	iVar0 = 43;
	if (Global_1347702[iVar0 /*49*/].f_36 == joaat("BLIP_RC"))
	{
		if (__LIB_1__::func_707(joaat("DOCUMENT_BUSINESS_CARD_EXOTICS"), 1, 0))
		{
			Global_1347702[iVar0 /*49*/].f_36 = joaat("BLIP_RC_ALGERNON_WASP");
			__LIB_0__::func_7(&(Global_1347702[iVar0 /*49*/].f_13), 1);
			__LIB_12__::func_81(iVar0, 0);
		}
	}
}

void func_1334()
{
	int iVar0;
	int iVar1;
	iVar0 = 96;
	if (Global_1347702[iVar0 /*49*/].f_14 & 2 != 0)
	{
		return;
	}
	else if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iVar0 /*49*/].f_42, false))
	{
		return;
	}
	iVar1 = 1026;
	if (__LIB_2__::func_117(iVar1))
	{
		if (Global_1347702[iVar0 /*49*/].f_13 & 65536 != 0)
		{
			__LIB_0__::func_8(&(Global_1347702[iVar0 /*49*/].f_13), 65536);
			__LIB_12__::func_81(iVar0, 0);
		}
	}
	else if (Global_1347702[iVar0 /*49*/].f_13 & 65536 == 0)
	{
		__LIB_0__::func_7(&(Global_1347702[iVar0 /*49*/].f_13), 65536);
		__LIB_12__::func_81(iVar0, 0);
	}
}

void func_1335(bool bParam0)
{
	int iVar0;
	iVar0 = 97;
	if (__LIB_5__::func_297(Global_1347702[iVar0 /*49*/].f_15) == 0)
	{
		if (__LIB_8__::func_791(597))
		{
		}
		else if (!__LIB_1__::func_25(Global_1835011[13 /*74*/].f_1, 1))
		{
			return;
		}
		else if (!__LIB_1__::func_25(Global_1835011[6 /*74*/].f_1, 1))
		{
			return;
		}
		else if (!__LIB_1__::func_25(Global_1347702[63 /*49*/].f_15, 1))
		{
			return;
		}
		else if (__LIB_5__::func_543(1) > 2)
		{
			return;
		}
		__LIB_0__::func_8(&(Global_1347702[iVar0 /*49*/].f_12), 16);
		__LIB_7__::func_448(Global_1347702[iVar0 /*49*/].f_15, 1);
		if (bParam0)
		{
			__LIB_10__::func_722(iVar0, __LIB_1__::func_440(iVar0), 0, 0);
		}
	}
	else
	{
		if (Global_1347702[iVar0 /*49*/].f_12 & 16 != 0)
		{
			__LIB_0__::func_8(&(Global_1347702[iVar0 /*49*/].f_12), 16);
		}
		if (bParam0)
		{
			__LIB_10__::func_722(iVar0, __LIB_1__::func_440(iVar0), 0, 0);
		}
	}
}

void func_1336(bool bParam0)
{
	int iVar0;
	iVar0 = 112;
	if (__LIB_5__::func_297(Global_1347702[iVar0 /*49*/].f_15) == 0)
	{
		if (__LIB_8__::func_791(603))
		{
		}
		else if (__LIB_5__::func_543(1) > 1)
		{
			return;
		}
		__LIB_0__::func_8(&(Global_1347702[iVar0 /*49*/].f_12), 16);
		__LIB_7__::func_448(Global_1347702[iVar0 /*49*/].f_15, 1);
		if (bParam0)
		{
			__LIB_10__::func_722(iVar0, __LIB_1__::func_440(iVar0), 0, 0);
		}
	}
	else
	{
		if (Global_1347702[iVar0 /*49*/].f_12 & 16 != 0)
		{
			__LIB_0__::func_8(&(Global_1347702[iVar0 /*49*/].f_12), 16);
		}
		if (bParam0)
		{
			__LIB_10__::func_722(iVar0, __LIB_1__::func_440(iVar0), 0, 0);
		}
	}
}

bool func_1366(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return true;
	}
	if ((((iParam0 == 31 || iParam0 == 45) || iParam0 == 17) || iParam0 == 7) || iParam0 == 22)
	{
		return (__LIB_5__::func_297(__LIB_3__::func_918(iParam0)) == 0 && fParam1 >= (10f * 10f));
	}
	if (iParam0 == 18)
	{
		return (__LIB_1__::func_187(21) && fParam1 >= (10f * 10f));
	}
	if (iParam0 == 44)
	{
		return (__LIB_1__::func_187(83) && fParam1 >= (10f * 10f));
	}
	if (__LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 2048))
	{
		return false;
	}
	return (((fParam1 > (10f * 10f) || __LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 32768)) || CAM::IS_SCREEN_FADED_OUT()) || func_1954());
}

int func_1367(int iParam0)
{
	int iVar0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!GANG::_0xD6F6ACF4392187FB(Global_1225639.f_14))
	{
		return 0;
	}
	if (Global_1225639 < 0 || Global_1225639 >= 32)
	{
		return 0;
	}
	if (Global_1225639.f_15 < 0 || Global_1225639.f_15 >= 32)
	{
		return 0;
	}
	if (Global_1225639 == Global_1225639.f_15)
	{
		return 0;
	}
	iVar0 = func_1955(Global_1225639.f_15);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (iParam0 != iVar0)
	{
		return 0;
	}
	if (!func_1956(Global_1225639.f_15, 0) || !func_1956(Global_1225639.f_15, 3))
	{
		return 0;
	}
	return 1;
}

bool func_1383(int iParam0)
{
	int iVar0;
	int iVar1;
	if (Global_1347702[iParam0 /*49*/].f_13 & 8 != 0)
	{
		return true;
	}
	if (__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		if (!__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return true;
			}
		}
		if (__LIB_1__::func_25(Global_1835011[67 /*74*/].f_1, 1))
		{
			if ((!__LIB_1__::func_25(Global_1347702[8 /*49*/].f_15, 1) && !__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[67 /*74*/].f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1835011[67 /*74*/].f_22))) > 0)
				{
					return true;
				}
			}
		}
	}
	else if ((!__LIB_8__::func_779(2) && !__LIB_1__::func_25(Global_1347702[61 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1347702[59 /*49*/].f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return true;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = __LIB_1__::func_293(__LIB_3__::func_574(65536), 0, 3, __LIB_3__::func_575(65536));
		if (__LIB_0__::func_6(iVar1))
		{
			iVar0 = __LIB_0__::func_895(iVar1);
			if (!__LIB_0__::func_27(iVar0, 4))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1347702[62 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1347702[0 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1347702[94 /*49*/].f_15, 1)) && __LIB_1__::func_25(Global_1835011[25 /*74*/].f_1, 1)) && (__LIB_1__::func_25(Global_1835011[8 /*74*/].f_1, 1) || (__LIB_1__::func_25(Global_1347702[98 /*49*/].f_15, 1) && __LIB_0__::func_895(Global_1347702[98 /*49*/].f_15) == 0)))
		{
			return true;
		}
	}
	else if (iParam0 == 27)
	{
		if (!__LIB_1__::func_25(Global_1835011[34 /*74*/].f_1, 1))
		{
			return true;
		}
	}
	else if (iParam0 == 42)
	{
		if (!__LIB_1__::func_25(Global_1347702[41 /*49*/].f_15, 1))
		{
			if (!__LIB_0__::func_315(8))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!__LIB_11__::func_139(2))
		{
			return true;
		}
	}
	else if (iParam0 == 52)
	{
		if (!__LIB_1__::func_25(Global_1347702[51 /*49*/].f_15, 1))
		{
			return true;
		}
	}
	else if (iParam0 == 57)
	{
		if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (__LIB_5__::func_297(Global_1347702[iParam0 /*49*/].f_15) == 0)
		{
			if (__LIB_0__::func_342() <= 160)
			{
				return true;
			}
			else
			{
				__LIB_7__::func_448(Global_1347702[iParam0 /*49*/].f_15, 1);
			}
		}
		if (!__LIB_1__::func_187(68))
		{
			return true;
		}
	}
	else if (iParam0 == 77)
	{
		if (__LIB_0__::func_702(Global_1835011[47 /*74*/].f_1))
		{
			return true;
		}
		else if (__LIB_0__::func_702(Global_1835011[45 /*74*/].f_1))
		{
			return true;
		}
		else if (__LIB_0__::func_627(16, 0))
		{
			return true;
		}
	}
	else if (iParam0 == 87)
	{
		if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 95)
	{
		if (__LIB_0__::func_702(Global_1835011[20 /*74*/].f_1))
		{
			return true;
		}
		else if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 113)
	{
		if (MISC::GET_GAME_TIMER() + 5000 < Global_1898438)
		{
			return true;
		}
		else if (Global_1879534.f_1 || Global_1879534)
		{
			return true;
		}
		else if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[113 /*49*/].f_42, false) && __LIB_11__::func_188())
		{
			if (__LIB_1__::func_422("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 262144);
				__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_12), 64);
				func_1968(113, 1, 0, 1, 1, 1, 0);
				return true;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (__LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
		{
			return true;
		}
	}
	else if (iParam0 == 117)
	{
		if (__LIB_0__::func_702(Global_1835011[69 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 136)
	{
		if (__LIB_0__::func_702(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	return false;
}

void func_1384(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam1)
	{
		iParam2 = 1;
		iParam3 = 1;
		bParam4 = true;
	}
	if (__LIB_0__::func_702(Global_1347702[iParam0 /*49*/].f_15))
	{
		__LIB_1__::func_722(Global_1347702[iParam0 /*49*/].f_15);
	}
	__LIB_18__::func_261(iParam0, iParam2, iParam3, 1, 32);
	if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 1024))
	{
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 1024);
	}
	if (bParam4)
	{
		__LIB_11__::func_140(iParam0);
	}
	if (bParam1 == 1)
	{
		__LIB_18__::func_418(iParam0, 1);
	}
}

void func_1387(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	char* sVar1;
	if (!bParam1)
	{
		return;
	}
	else if (Global_1347702[iParam0 /*49*/].f_13 & 4096 == 0 && Global_1347702[iParam0 /*49*/].f_13 & 32 == 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[iParam0 /*49*/].f_13 & 2048 == 0)
	{
		fParam2 = BUILTIN::VDIST2(Global_36, __LIB_4__::func_816(iParam0));
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 512 != 0)
	{
		if (fParam2 > 225f)
		{
			iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
			if (iVar0 != Global_1347702[iParam0 /*49*/].f_39)
			{
				UIFEED::_0x2F901291EF177B02(Global_1347702[iParam0 /*49*/].f_39, 0);
			}
			__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 512);
		}
	}
	else if (fParam2 <= 100f)
	{
		if (__LIB_10__::func_598())
		{
			return;
		}
		if (Global_1347702[iParam0 /*49*/].f_13 & 32 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "RCM_INVALID_TOD", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = __LIB_8__::func_966(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & 1024 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_ANTAGONIZE", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = __LIB_8__::func_966(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & 4096 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_MEMORY", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = __LIB_8__::func_966(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & 2048 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_WANTED_REGION", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = __LIB_8__::func_966(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & 16384 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = __LIB_8__::func_966(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & 8192 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_COMBAT", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = __LIB_8__::func_966(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & 32768 != 0)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MISSION_PREV_WANTED_2", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = __LIB_8__::func_966(sVar1, 10000, 0, 0, 0, 1);
		}
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 512);
	}
}

void func_1393(int iParam0)
{
	__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 16);
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			__LIB_10__::func_722(iParam0, __LIB_1__::func_440(iParam0), 1, 0);
		}
		else
		{
			__LIB_5__::func_241(iParam0);
		}
	}
	else
	{
		__LIB_12__::func_81(iParam0, 0);
	}
}

void func_1402(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	bVar0 = true;
	if (!bParam1)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37);
	}
	__LIB_4__::func_181(&(Global_1347702[iParam0 /*49*/].f_14));
	__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 16384);
	__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
	if (bVar0)
	{
		if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[iParam0 /*49*/].f_13 & 2048 == 0)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
			if (iParam2 == 1)
			{
				__LIB_10__::func_722(iParam0, __LIB_4__::func_816(iParam0), 0, 0);
			}
		}
		else if (Global_1347702[iParam0 /*49*/].f_18 > -1f)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
			if (iParam2 == 1)
			{
				__LIB_10__::func_722(iParam0, __LIB_1__::func_440(iParam0), 0, 0);
			}
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 724623647);
		}
	}
}

void func_1422(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, iVar0, func_1991(iVar0));
		iVar0++;
	}
}

int func_1433(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1365886708;
		case 1:
			return 1194047085;
		case 2:
			return 1338707734;
		case 3:
			return -960512622;
		case 4:
			return 542908935;
		case 5:
			return 745343560;
		case 6:
			return -289814040;
		default:
			break;
	}
	return 0;
}

int func_1434(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("BASE");
		case 1:
			return -1377050186;
		case 2:
			return 1651434382;
		case 3:
			return 464173103;
		case 4:
			return 1098311904;
		case 5:
			return 1987040038;
		case 6:
			return -538025380;
		default:
			break;
	}
	return 0;
}

void func_1441(bool bParam0, bool bParam1)
{
	float fVar0;
	fVar0 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
	*bParam0 = 0;
	*bParam1 = 0;
	if (fVar0 >= 24f)
	{
		*bParam1 = 1;
	}
	else if (fVar0 <= 0f)
	{
		*bParam0 = 1;
	}
	if (func_2005())
	{
		*bParam0 = 0;
	}
}

bool func_1442()
{
	int iVar0;
	iVar0 = __LIB_15__::func_626();
	return (iVar0 == 0 || iVar0 == 3);
}

bool func_1443()
{
	int iVar0;
	iVar0 = __LIB_15__::func_626();
	return (iVar0 == 2 || iVar0 == 3);
}

bool func_1475()
{
	if (Global_1347477.f_184 != Global_40.f_11095.f_67)
	{
		return true;
	}
	if (Global_1347477.f_188)
	{
		return true;
	}
	if ((Global_40.f_11095.f_67 > 2 && !Global_43891) && Global_1347477.f_186 != Global_1347477.f_185)
	{
		return true;
	}
	return false;
}

bool func_1507(int iParam0)
{
	struct<5> Var0;
	if (!__LIB_0__::func_630(iParam0))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_4 = -15;
	func_2051(iParam0, &Var0);
	return func_2052(&Var0);
}

bool func_1508(int iParam0)
{
	struct<5> Var0;
	if (!__LIB_0__::func_630(iParam0))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_4 = -15;
	func_2051(iParam0, &Var0);
	return func_2053(&Var0);
}

void func_1509(int iParam0, bool bParam1)
{
	struct<5> Var0;
	if (!__LIB_0__::func_630(iParam0))
	{
		return;
	}
	Var0 = -1;
	Var0.f_4 = -15;
	func_2051(iParam0, &Var0);
	__LIB_10__::func_791(&Var0, bParam1);
	__LIB_16__::func_257(iParam0, &Var0);
}

void func_1512()
{
	Global_1310750.f_16077 = 0;
	Global_1310750.f_16071 = -1;
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(false);
	}
}

bool func_1523(int iParam0, float fParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	iVar0 = 0;
	while (iVar0 < __LIB_2__::func_786(iParam0))
	{
		vVar1 = { __LIB_3__::func_153(iParam0, iVar0) };
		if (!__LIB_0__::func_86(vVar1))
		{
			if (!bParam5 || !__LIB_3__::func_192(iParam0, iVar0))
			{
				if (bParam7)
				{
					fVar4 = __LIB_0__::func_62(Global_36, vVar1);
				}
				else
				{
					fVar4 = __LIB_0__::func_636(Global_36, vVar1);
				}
				if (fVar4 > fParam1 || (!__LIB_1__::func_374(Global_35, vVar1, iParam4) && bParam3))
				{
					if (iVar5 != 18 && iVar5 != 19)
					{
						iVar5 = 17;
					}
				}
				else if (fVar4 < fParam6)
				{
					iVar5 = 18;
				}
				else if (__LIB_1__::func_989(vVar1, 0, 0, 0))
				{
					iVar5 = 19;
				}
				else
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	*uParam2 = iVar5;
	return false;
}

bool func_1525(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 3:
			return func_2073(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[0];
		case 0:
			return func_2073(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[1];
		case 2:
			return func_2073(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[3];
		case 1:
			return func_2073(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[4];
		case 4:
			return func_2073(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[8];
		case 5:
			return func_2073(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[13];
	}
	return false;
}

bool func_1526(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_10__::func_645(iParam1);
	iVar1 = (17 + iVar0);
	return func_2074(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[iVar1];
}

bool func_1531(int iParam0)
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;
	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 & -1 == -1)
	{
		return true;
	}
	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (iParam0 & 1 == 1 && __LIB_3__::func_146(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && __LIB_1__::func_901(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && __LIB_3__::func_200(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && __LIB_3__::func_201(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && __LIB_3__::func_202(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && __LIB_3__::func_203(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && __LIB_3__::func_204(iVar3))
	{
		return true;
	}
	return false;
}

bool func_1532(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	iVar0 = __LIB_1__::func_898();
	switch (iParam0)
	{
		case 0:
			if (func_2082(0, iVar0) > 0)
			{
				if (((iVar0 == 4 || iVar0 == 7) || iVar0 == 9) || iVar0 == 10)
				{
					return false;
				}
			}
			return true;
		case 2:
			if (__LIB_3__::func_751(11) && __LIB_1__::func_898() == 1)
			{
				return false;
			}
			if (__LIB_0__::func_113() && __LIB_1__::func_898() == 4)
			{
				return false;
			}
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 3:
			if (__LIB_2__::func_633(2) || __LIB_10__::func_695(2))
			{
				return false;
			}
			return true;
		case 76:
			if (__LIB_1__::func_187(19))
			{
				return false;
			}
			else if (!__LIB_19__::func_453(115, -1, 0))
			{
				return false;
			}
			if (__LIB_1__::func_187(68) && !__LIB_1__::func_185(59))
			{
				return false;
			}
			return true;
		case 6:
			if (iVar0 == -1)
			{
				return false;
			}
			if (iVar0 == 8)
			{
				if (__LIB_5__::func_219(39))
				{
					return false;
				}
			}
			else if (!__LIB_0__::func_214(joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
			{
				return false;
			}
			return true;
		case 7:
			if (__LIB_0__::func_113())
			{
				if (!__LIB_1__::func_185(7))
				{
					return false;
				}
			}
			else if (__LIB_0__::func_181())
			{
				if (!__LIB_1__::func_185(69))
				{
					return false;
				}
			}
			return true;
		case 31:
			if (__LIB_1__::func_923() || __LIB_3__::func_183())
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 10:
			if (!__LIB_0__::func_181() && (__LIB_3__::func_993(10, 0) == 2 || __LIB_3__::func_993(10, 0) == 1))
			{
				return false;
			}
			if (__LIB_0__::func_181() && ((__LIB_3__::func_993(10, 1) == 2 || __LIB_3__::func_993(10, 0) == 1) || __LIB_3__::func_993(10, 1) == 1))
			{
				return false;
			}
			return true;
		case 11:
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				return false;
			}
			if (__LIB_2__::func_633(2) || __LIB_10__::func_695(2))
			{
				return false;
			}
			return true;
		case 12:
			if (__LIB_3__::func_657(12) < 3)
			{
				switch (__LIB_1__::func_898())
				{
					case 4:
					case 12:
						if (((!__LIB_2__::func_633(3) && !__LIB_1__::func_185(75)) && __LIB_3__::func_564(12, 1) != 2) && __LIB_0__::func_181())
						{
							return true;
						}
						else
						{
							return false;
						}
						break;
					case 1:
					case 3:
					case 9:
						if (((!__LIB_2__::func_633(0) && __LIB_3__::func_564(12, 0) != 1) && !__LIB_1__::func_187(65)) && __LIB_0__::func_113())
						{
							return true;
						}
						else
						{
							return false;
						}
						break;
					case 13:
					case 14:
					case 15:
					case 16:
						if ((!__LIB_2__::func_633(5) && __LIB_3__::func_564(12, 2) != 3) && __LIB_0__::func_181())
						{
							return true;
						}
						else
						{
							return false;
						}
						break;
				}
			}
			break;
		case 79:
			if (__LIB_3__::func_657(4) == 0 && __LIB_3__::func_657(45) == 0)
			{
				return false;
			}
			switch (__LIB_0__::func_12())
			{
				case 76:
					if ((__LIB_3__::func_564(45, 0) == 5 || __LIB_3__::func_564(45, 0) == 6) && __LIB_3__::func_564(45, 5) == 1)
					{
						if ((!__LIB_0__::func_181() && __LIB_3__::func_564(45, 3) == 1) || (__LIB_0__::func_181() && __LIB_3__::func_564(45, 3) == 2))
						{
							if (__LIB_3__::func_674(45, 0) == 3)
							{
								return false;
							}
							else if (func_2091(45, 0, 1, 6))
							{
								if (func_2092())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
				case 26:
					if (__LIB_3__::func_564(4, 1) == 1)
					{
						if ((!__LIB_0__::func_181() && __LIB_3__::func_564(4, 4) == 1) || (__LIB_0__::func_181() && __LIB_3__::func_564(4, 4) == 2))
						{
							if (__LIB_3__::func_674(4, 1) == 3)
							{
								return false;
							}
							else if (func_2091(4, 1, 1, 6))
							{
								if (func_2092())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
				case 105:
					if ((__LIB_3__::func_564(45, 2) == 5 || __LIB_3__::func_564(45, 2) == 6) && __LIB_3__::func_564(45, 6) == 1)
					{
						if ((!__LIB_0__::func_181() && __LIB_3__::func_564(45, 4) == 1) || (__LIB_0__::func_181() && __LIB_3__::func_564(45, 4) == 2))
						{
							if (__LIB_3__::func_674(45, 2) == 3)
							{
								return false;
							}
							else if (func_2091(45, 2, 1, 6))
							{
								if (func_2092())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
				case 78:
					if (__LIB_3__::func_564(4, 0) == 1)
					{
						if ((!__LIB_0__::func_181() && __LIB_3__::func_564(4, 3) == 1) || (__LIB_0__::func_181() && __LIB_3__::func_564(4, 3) == 2))
						{
							if (__LIB_3__::func_674(4, 0) == 3)
							{
								return false;
							}
							else if (func_2091(4, 0, 1, 6))
							{
								if (func_2092())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
			}
			return false;
		case 82:
			if (__LIB_2__::func_140(0))
			{
				if (__LIB_0__::func_12() == 5 && __LIB_3__::func_564(82, 0) == 1)
				{
					return false;
				}
				if (__LIB_0__::func_12() == 38 && __LIB_3__::func_564(82, 1) == 1)
				{
					return false;
				}
			}
			return true;
		case 83:
			if (__LIB_11__::func_149(75) <= 0)
			{
				return false;
			}
			if (__LIB_11__::func_179())
			{
				return false;
			}
			return true;
		case 84:
			if (__LIB_11__::func_183(76, 1, 0))
			{
				return false;
			}
			if (__LIB_8__::func_714(__LIB_1__::func_885(76), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
			{
				return false;
			}
			if (__LIB_0__::func_627(117, 0) || __LIB_0__::func_627(118, 0))
			{
				return false;
			}
			if (__LIB_3__::func_657(84) >= 2)
			{
				return false;
			}
			if (__LIB_3__::func_993(84, 0) == 2 || __LIB_3__::func_993(84, 1) == 2)
			{
				return false;
			}
			if (__LIB_3__::func_993(84, 0) == 3 || __LIB_3__::func_993(84, 1) == 3)
			{
				return false;
			}
			if (__LIB_3__::func_564(84, 2) == 1 && __LIB_0__::func_181())
			{
				return false;
			}
			if (__LIB_0__::func_113())
			{
				if (!__LIB_1__::func_185(7))
				{
					return false;
				}
			}
			if (__LIB_5__::func_219(69))
			{
				return false;
			}
			else if (__LIB_5__::func_219(9))
			{
				return false;
			}
			else if (__LIB_5__::func_219(5))
			{
				return false;
			}
			return true;
		case 15:
			if (__LIB_3__::func_564(15, 0) >= 1)
			{
				return false;
			}
			if (__LIB_3__::func_674(15, 1) >= 3)
			{
				return false;
			}
			if (__LIB_3__::func_564(15, 2) >= 1)
			{
				return false;
			}
			return true;
		case 86:
			if (__LIB_0__::func_12() != 78 && __LIB_1__::func_185(26))
			{
				return false;
			}
			return true;
		case 87:
			if (__LIB_0__::func_181())
			{
			}
			else if (__LIB_3__::func_657(87) >= 2)
			{
				return false;
			}
			return true;
		case 16:
			if (__LIB_3__::func_657(16) > 0)
			{
				return false;
			}
			if (!__LIB_1__::func_707(joaat("CONSUMABLE_WHISKEY"), 1, 0))
			{
				return false;
			}
			return true;
		case 90:
			iVar2 = __LIB_0__::func_12();
			iVar3 = __LIB_1__::func_447(__LIB_4__::func_902(904), 1);
			if (iVar2 == 92 && iVar3 == 92)
			{
				return false;
			}
			if (func_2096() == 0)
			{
				return false;
			}
			return true;
		case 89:
			iVar4 = __LIB_0__::func_12();
			if (__LIB_11__::func_183(iVar4, 1, 0))
			{
				return false;
			}
			if (func_2096() == 0)
			{
				return false;
			}
			if (__LIB_11__::func_149(101) >= 1)
			{
				return true;
			}
			return false;
		case 88:
			iVar5 = __LIB_0__::func_12();
			if (__LIB_11__::func_183(iVar5, 1, 0))
			{
				return false;
			}
			if (iVar5 == 76)
			{
				if (__LIB_5__::func_219(69))
				{
					return false;
				}
				else if (__LIB_5__::func_219(9))
				{
					return false;
				}
				else if (__LIB_5__::func_219(5))
				{
					return false;
				}
				else if (__LIB_0__::func_627(117, 0))
				{
					return false;
				}
				else if (__LIB_0__::func_627(118, 0))
				{
					return false;
				}
				if (__LIB_4__::func_930(5))
				{
					return false;
				}
			}
			iVar6 = __LIB_1__::func_447(__LIB_4__::func_902(904), 1);
			if (iVar5 == 92)
			{
				if (iVar6 == 92)
				{
					return false;
				}
				if (__LIB_4__::func_930(8))
				{
					return false;
				}
			}
			if (func_2096() == 0)
			{
				return false;
			}
			return true;
		case 17:
			if (__LIB_3__::func_751(56))
			{
				return false;
			}
			if (__LIB_1__::func_898() == 11 || __LIB_1__::func_898() == 0)
			{
				if (__LIB_0__::func_730(3) || __LIB_3__::func_151(3))
				{
					return false;
				}
			}
			else if (__LIB_0__::func_730(69) || __LIB_3__::func_151(69))
			{
				return false;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (PED::_IS_PED_CARRYING(Global_1935630.f_40))
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			return true;
		case 18:
			if (__LIB_2__::func_633(2))
			{
				return false;
			}
			return true;
		case 91:
			if (__LIB_11__::func_149(75) <= 0)
			{
				return false;
			}
			return true;
		case 92:
			switch (__LIB_1__::func_898())
			{
				case 11:
					if (__LIB_2__::func_633(2) || __LIB_10__::func_695(2))
					{
						return false;
					}
					if (__LIB_1__::func_200(30))
					{
						return false;
					}
					return true;
				case 1:
				case 3:
				case 9:
					if (__LIB_2__::func_633(0))
					{
						return false;
					}
					return true;
			}
			return true;
		case 20:
			if (__LIB_5__::func_219(13))
			{
				return false;
			}
			return true;
		case 23:
			if (__LIB_18__::func_308() == 0)
			{
				return true;
			}
			return false;
		case 94:
			iVar7 = __LIB_0__::func_12();
			switch (iVar7)
			{
				case 26:
				case 76:
					if (__LIB_2__::func_633(0))
					{
						return false;
					}
					if (!__LIB_0__::func_21(76, 2048))
					{
						return false;
					}
					if (__LIB_1__::func_988(99))
					{
						return false;
					}
					break;
				case 5:
				case 105:
					if (__LIB_1__::func_988(96))
					{
						return false;
					}
					if (__LIB_1__::func_988(77))
					{
						return false;
					}
					break;
			}
			return true;
		case 119:
			if (!__LIB_1__::func_187(152))
			{
				return false;
			}
			if (__LIB_14__::func_436())
			{
				return false;
			}
			if (__LIB_18__::func_309(iVar0))
			{
				return true;
			}
			break;
		case 27:
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			else
			{
				if (__LIB_3__::func_674(27, 0) == 3)
				{
					return false;
				}
				if (__LIB_3__::func_674(27, 1) == 3)
				{
					return false;
				}
				if (__LIB_3__::func_674(27, 2) == 3)
				{
					return false;
				}
				if (__LIB_3__::func_564(27, 0) >= 3)
				{
					return false;
				}
				if (__LIB_3__::func_564(27, 1) >= 3)
				{
					return false;
				}
				if (__LIB_3__::func_564(27, 2) >= 3)
				{
					return false;
				}
				if (ATTRIBUTE::GET_ATTRIBUTE_RANK(PED::GET_MOUNT(Global_35), 4) < 2 && ATTRIBUTE::GET_ATTRIBUTE_RANK(PED::GET_MOUNT(Global_35), 5) < 2)
				{
					return false;
				}
				if (__LIB_0__::func_819(7) < 3)
				{
					return false;
				}
				if (__LIB_1__::func_898() == 3 || __LIB_1__::func_898() == 6)
				{
					if (__LIB_1__::func_185(56) && !__LIB_1__::func_185(60))
					{
						return false;
					}
				}
				if (__LIB_1__::func_898() == 11)
				{
					if (__LIB_1__::func_185(26) && !__LIB_1__::func_185(28))
					{
						return false;
					}
				}
				return true;
			}
			break;
		case 95:
			if (__LIB_2__::func_633(2))
			{
				return false;
			}
			return true;
		case 30:
			switch (__LIB_1__::func_898())
			{
				case 0:
				case 2:
					if (__LIB_3__::func_151(5) || __LIB_0__::func_730(5))
					{
						return false;
					}
					if (__LIB_1__::func_185(44))
					{
						if (!__LIB_1__::func_185(45) && !__LIB_1__::func_187(24))
						{
							if (func_2082(30, 2) == 0 && func_2082(30, 0) == 0)
							{
								return false;
							}
						}
					}
					if (__LIB_3__::func_563(0, 39))
					{
						return false;
					}
					if (__LIB_11__::func_159(0))
					{
						return false;
					}
					if (__LIB_10__::func_696(39))
					{
						return false;
					}
					if (func_2106(0, 39, &uVar8))
					{
						return false;
					}
					return true;
			}
			return true;
		case 32:
			if (__LIB_3__::func_657(34) > 0 && __LIB_3__::func_657(33) > 0)
			{
				if (__LIB_3__::func_657(32) == 0)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			break;
		case 33:
			if (__LIB_3__::func_993(33, 0) == 16)
			{
				return false;
			}
			else if (__LIB_1__::func_898() == 1 && __LIB_0__::func_94(Global_35, -1374.053f, -741.9763f, 90.7132f, 1) < 200f)
			{
				if (__LIB_0__::func_627(49, 0))
				{
					return false;
				}
				if (__LIB_0__::func_627(101, 0))
				{
					return false;
				}
			}
			else
			{
				return true;
			}
			return true;
		case 34:
			if (__LIB_3__::func_657(33) > 0)
			{
				if (__LIB_3__::func_657(34) == 0)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			break;
		case 37:
			switch (__LIB_3__::func_168(__LIB_1__::func_898()))
			{
				case 1:
					if (__LIB_0__::func_181())
					{
						if (__LIB_3__::func_564(37, 5) == 1)
						{
							return false;
						}
					}
					if (__LIB_3__::func_993(37, 0) == 2)
					{
						return false;
					}
					break;
				case 3:
					if (__LIB_0__::func_181())
					{
						if (__LIB_3__::func_564(37, 6) == 1)
						{
							return false;
						}
					}
					if (__LIB_3__::func_993(37, 1) == 2)
					{
						return false;
					}
					break;
			}
			return true;
		case 97:
			if (__LIB_1__::func_898() == 1 && __LIB_5__::func_219(11))
			{
				return false;
			}
			if (__LIB_1__::func_898() == 9 && !__LIB_9__::func_783(0))
			{
				return false;
			}
			return true;
		case 98:
			if (__LIB_0__::func_12() == 76 && __LIB_3__::func_564(98, 1) == 1)
			{
				return false;
			}
			if (__LIB_0__::func_12() == 92)
			{
				if (__LIB_0__::func_627(82, 0) || __LIB_0__::func_627(83, 0))
				{
					return false;
				}
			}
			return true;
		case 39:
			if (__LIB_0__::func_730(26) || __LIB_3__::func_151(26))
			{
				return false;
			}
			return true;
		case 28:
			if (__LIB_1__::func_185(22) && !__LIB_1__::func_185(27))
			{
				if (__LIB_3__::func_332(-1063.709f, -520.2658f, 82.0255f, 1) < 110f || __LIB_3__::func_332(-815.6782f, -520.9415f, 45.4979f, 1) < 110f)
				{
					return false;
				}
			}
			if (__LIB_1__::func_898() == 0 || __LIB_1__::func_898() == 11)
			{
				if (Global_1888801[0 /*35*/].f_1 > 0)
				{
					if (Global_1888801[0 /*35*/].f_1 + 900000) > MISC::GET_GAME_TIMER()
					{
						return false;
					}
				}
			}
			if (__LIB_1__::func_898() == 1)
			{
				if (Global_1888801[17 /*35*/].f_1 > 0)
				{
					if (Global_1888801[17 /*35*/].f_1 + 900000) > MISC::GET_GAME_TIMER()
					{
						return false;
					}
				}
				if (!__LIB_0__::func_181())
				{
					return false;
				}
			}
			return true;
		case 40:
			if (__LIB_11__::func_189())
			{
				if (__LIB_11__::func_190(__LIB_1__::func_898(), 1, 0) != 0)
				{
					return true;
				}
			}
			break;
		case 42:
			if (__LIB_3__::func_993(42, 0) == 2 || __LIB_3__::func_993(42, 1) == 2)
			{
				return false;
			}
			if (__LIB_3__::func_657(42) >= 2)
			{
				return false;
			}
			return true;
		case 77:
			if (__LIB_1__::func_988(94))
			{
				return false;
			}
			return true;
		case 96:
			if (__LIB_1__::func_988(94))
			{
				return false;
			}
			return true;
		case 99:
			if (__LIB_11__::func_149(99) >= 2)
			{
				return false;
			}
			if (__LIB_1__::func_988(94))
			{
				return false;
			}
			return true;
		case 100:
			switch (__LIB_1__::func_898())
			{
				case 1:
					if (__LIB_3__::func_993(100, 1) != 1 && __LIB_0__::func_181())
					{
						return true;
					}
					break;
				case 0:
				case 11:
					return false;
			}
			return false;
		case 44:
			if (__LIB_1__::func_988(57))
			{
				return false;
			}
			switch (__LIB_1__::func_898())
			{
				case 1:
				case 3:
				case 9:
					if (__LIB_2__::func_633(0) || __LIB_0__::func_181())
					{
						return false;
					}
					break;
				case 11:
					if (__LIB_2__::func_633(2) || __LIB_10__::func_695(2))
					{
						return false;
					}
					else if (__LIB_3__::func_332(1624.51f, -1818.45f, 49.6045f, 1) < 225f)
					{
						if (SCRIPTS::HAS_SCRIPT_LOADED("gang_enc_lemoyne_church") || !__LIB_0__::func_563(65536, 2))
						{
							return false;
						}
					}
					break;
			}
			return true;
		case 101:
			if (__LIB_2__::func_633(2))
			{
				return false;
			}
			if (func_2110(92, 65536) || __LIB_1__::func_982(92))
			{
				return true;
			}
			return false;
		case 102:
			switch (__LIB_0__::func_12())
			{
				case 76:
					if (__LIB_3__::func_993(102, 1) == 1 && __LIB_3__::func_993(102, 2) == 1)
					{
						return false;
					}
					break;
				case 26:
					if (__LIB_3__::func_993(102, 0) == 1)
					{
						return false;
					}
					break;
			}
			return true;
		case 103:
			if (__LIB_3__::func_657(103) >= 2)
			{
				return false;
			}
			if (__LIB_0__::func_12() == 5)
			{
				if (!__LIB_10__::func_716(6, -1))
				{
					return false;
				}
				if (__LIB_0__::func_94(Global_35, 2720.815f, -1283.54f, 48.638f, 1) < __LIB_0__::func_94(Global_35, 2551.768f, -1173.668f, 52.683f, 1))
				{
					if (__LIB_0__::func_627(77, 0))
					{
						return false;
					}
				}
			}
			else if (__LIB_0__::func_12() == 92)
			{
				if (__LIB_0__::func_627(143, 0))
				{
					return false;
				}
			}
			return true;
		case 45:
			if (__LIB_1__::func_898() == 9)
			{
				if (__LIB_3__::func_993(45, 0) == 2)
				{
					return false;
				}
			}
			else if (__LIB_1__::func_898() == 11)
			{
				if (__LIB_0__::func_181())
				{
					if (__LIB_3__::func_564(45, 4) == 1)
					{
						return false;
					}
				}
				if (__LIB_3__::func_993(45, 2) == 2)
				{
					return false;
				}
			}
			return true;
		case 46:
			if (__LIB_3__::func_657(46) >= 4 || __LIB_3__::func_564(46, 0) == 1)
			{
				return false;
			}
			else if (__LIB_11__::func_167() == 1 || (__LIB_11__::func_167() == 3 && __LIB_1__::func_652()))
			{
				return true;
			}
			break;
		case 48:
			return true;
		case 49:
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			if (!__LIB_1__::func_307(2, 0, 0))
			{
				return false;
			}
			if (!__LIB_1__::func_307(3, 0, 0))
			{
				return false;
			}
			iVar9 = MISC::GET_GAME_TIMER();
			if ((iVar9 - Global_1357549.f_1484) >= 300000)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 50:
			if (__LIB_2__::func_230())
			{
				return false;
			}
			if (__LIB_1__::func_931(__LIB_1__::func_905(__LIB_1__::func_898())) > 0)
			{
				return false;
			}
			switch (Global_1393447.f_49)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 35:
				case 38:
				case 42:
					return false;
			}
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BEAT_TRAIN_HOLDUP")) > 0)
			{
				return false;
			}
			return true;
		case 106:
			if (__LIB_0__::func_12() == 76)
			{
				if (__LIB_0__::func_627(26, 0) || __LIB_0__::func_627(27, 0))
				{
					if (__LIB_0__::func_627(117, 0) || __LIB_0__::func_627(118, 0))
					{
						return false;
					}
				}
				if (__LIB_1__::func_931(1) > 0)
				{
					return false;
				}
				if (__LIB_5__::func_219(7))
				{
					return false;
				}
				if (__LIB_3__::func_993(106, 1) != 7)
				{
					return true;
				}
				if (__LIB_3__::func_993(87, 0) == 3 && __LIB_3__::func_993(106, 3) != 7)
				{
					return true;
				}
				if (__LIB_3__::func_993(84, 0) == 3 || __LIB_3__::func_993(84, 1) == 3)
				{
					if (__LIB_3__::func_993(106, 4) != 7)
					{
						if (!__LIB_0__::func_181())
						{
							return true;
						}
					}
				}
			}
			else if (__LIB_0__::func_12() == 105)
			{
				if (__LIB_1__::func_931(2) > 0)
				{
					return false;
				}
				if (__LIB_3__::func_993(87, 0) == 3 && __LIB_3__::func_993(106, 3) != 7)
				{
					return true;
				}
				else if (__LIB_3__::func_993(87, 0) != 3)
				{
				}
				else if (__LIB_3__::func_993(106, 3) == 7)
				{
				}
				if ((__LIB_1__::func_187(13) && __LIB_3__::func_993(106, 5) == 3) && __LIB_3__::func_993(106, 5) != 7)
				{
					if (__LIB_10__::func_705(106, 5))
					{
						return true;
					}
				}
			}
			else if (__LIB_0__::func_12() == 5)
			{
				if (__LIB_1__::func_931(2) > 0)
				{
					return false;
				}
				if (__LIB_1__::func_187(12))
				{
					if (__LIB_3__::func_993(106, 6) == 3)
					{
						if (__LIB_3__::func_993(106, 6) != 7)
						{
							if (__LIB_10__::func_705(106, 6))
							{
								return true;
							}
						}
					}
				}
				if (__LIB_3__::func_993(30, 3) == 3 && __LIB_3__::func_993(106, 7) != 7)
				{
					if (__LIB_10__::func_705(106, 7))
					{
						return true;
					}
				}
			}
			else if (__LIB_0__::func_12() == 38)
			{
				if (__LIB_1__::func_931(3) > 0)
				{
					return false;
				}
				if ((__LIB_1__::func_187(18) && __LIB_3__::func_993(106, 0) == 3) && __LIB_3__::func_993(106, 0) != 7)
				{
					return true;
				}
				if ((__LIB_1__::func_187(17) && __LIB_3__::func_993(106, 8) == 3) && __LIB_3__::func_993(106, 8) != 7)
				{
					return true;
				}
			}
			return false;
		case 107:
			if (((__LIB_0__::func_627(77, 0) || __LIB_0__::func_627(106, 0)) || __LIB_3__::func_751(45)) || __LIB_3__::func_751(47))
			{
				return false;
			}
			return true;
		case 51:
			if (__LIB_2__::func_633(2) || __LIB_10__::func_695(2))
			{
				return false;
			}
			return true;
		case 108:
			if (__LIB_0__::func_12() == 76)
			{
				if (func_2074(108, 2097152) > 0 && (__LIB_2__::func_633(0) || __LIB_10__::func_695(0)))
				{
					return false;
				}
				if (__LIB_11__::func_183(76, 1, 0))
				{
					return false;
				}
				if (__LIB_8__::func_714(__LIB_1__::func_885(76), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
				{
					return false;
				}
			}
			return true;
		case 57:
			if (__LIB_1__::func_988(44))
			{
				return false;
			}
			if (iVar0 == -1)
			{
				return false;
			}
			if (__LIB_11__::func_180(iVar0))
			{
				return false;
			}
			if (!__LIB_11__::func_191(24))
			{
				return false;
			}
			return true;
		case 109:
			switch (__LIB_1__::func_898())
			{
				case 1:
					if (__LIB_3__::func_564(109, 0) == 1)
					{
						return false;
					}
					break;
				case 10:
					if (__LIB_3__::func_564(109, 0) == 1 && __LIB_3__::func_564(109, 1) == 1)
					{
						return false;
					}
					break;
				case 11:
					if (__LIB_3__::func_564(109, 1) == 1)
					{
						return false;
					}
					break;
			}
			return true;
		case 58:
			if ((__LIB_0__::func_627(119, 0) || __LIB_1__::func_200(119)) && __LIB_3__::func_332(-1006.029f, 458.253f, 55.49393f, 1) < 200f)
			{
				return false;
			}
			else if (!__LIB_0__::func_181() && __LIB_3__::func_657(58) >= 1)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 110:
			if (__LIB_0__::func_627(77, 0))
			{
				return false;
			}
			if (__LIB_3__::func_751(47))
			{
				return false;
			}
			if (__LIB_0__::func_730(5))
			{
				return false;
			}
			if (__LIB_11__::func_183(5, 1, 0))
			{
				return false;
			}
			if (!__LIB_0__::func_181())
			{
				if (__LIB_1__::func_185(31))
				{
					return true;
				}
			}
			else if (__LIB_1__::func_185(73))
			{
				return true;
			}
			return false;
		case 60:
			if (iParam0 == 60)
			{
				switch (__LIB_3__::func_168(__LIB_1__::func_898()))
				{
					case 1:
						if (__LIB_3__::func_564(60, 0) < 2)
						{
							return true;
						}
						break;
					case 0:
						if (__LIB_3__::func_564(60, 1) < 3)
						{
							return true;
						}
						break;
					case 4:
						if (__LIB_3__::func_564(60, 2) < 2)
						{
							return true;
						}
						break;
				}
			}
			break;
		case 61:
			if (__LIB_3__::func_657(46) >= 2 || __LIB_3__::func_564(46, 0) == 1)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 59:
			if (!__LIB_0__::func_394(Global_35, Global_1900383[__LIB_0__::func_97(7) /*45*/], 0))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 62:
			switch (__LIB_3__::func_283())
			{
				case 1:
					if (__LIB_3__::func_564(62, 0) == 1)
					{
						return false;
					}
					break;
				case 0:
				case 2:
					if (__LIB_3__::func_564(62, 1) == 1)
					{
						return false;
					}
					break;
			}
			return true;
		case 111:
			switch (__LIB_1__::func_898())
			{
				case 9:
					if (__LIB_11__::func_183(76, 1, 0))
					{
						return false;
					}
					else if (__LIB_2__::func_774(14))
					{
						return false;
					}
					else if (__LIB_1__::func_185(71) && __LIB_0__::func_627(10, 0))
					{
						return false;
					}
					return true;
				case 4:
					if (!__LIB_1__::func_187(9))
					{
						return false;
					}
					if (__LIB_5__::func_219(72))
					{
						return false;
					}
					if (__LIB_5__::func_219(70))
					{
						return false;
					}
					if (__LIB_5__::func_219(75))
					{
						return false;
					}
					if (!__LIB_1__::func_307(4, 0, 0))
					{
						return false;
					}
					iVar10 = MISC::GET_GAME_TIMER();
					if ((iVar10 - Global_1357549.f_1484) >= 300000)
					{
						return true;
					}
					else
					{
						return false;
					}
					return true;
				default:
					return true;
			}
			break;
		case 112:
			if (__LIB_0__::func_805(14, 4096))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 67:
			if (__LIB_3__::func_657(67) >= 2)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 113:
			if (!__LIB_1__::func_901(__LIB_2__::func_954()))
			{
				switch (__LIB_0__::func_12())
				{
					case 105:
						if (__LIB_3__::func_564(113, 3) != 2 && !Global_1326862.f_611)
						{
							Global_1326862.f_611 = 1;
							return true;
						}
						else
						{
							Global_1326862.f_611 = 0;
							return false;
						}
						break;
					case 38:
						if (__LIB_1__::func_187(17) && __LIB_3__::func_564(113, 4) != 3)
						{
							if (!Global_1326862.f_612)
							{
								__LIB_3__::func_539(113, 4, __LIB_0__::func_23());
								Global_1326862.f_612 = 1;
							}
							if (Global_1326862.f_612)
							{
								if (func_2091(113, 4, 7, 0))
								{
									__LIB_3__::func_461(113, 4, 3);
									return false;
								}
								else if (!__LIB_1__::func_982(113))
								{
									if (__LIB_3__::func_993(106, 8) == 3)
									{
										if (__LIB_3__::func_993(106, 8) == 7)
										{
											Global_1326862.f_612 = 0;
											return true;
										}
										else
										{
											return false;
										}
									}
									else
									{
										Global_1326862.f_612 = 0;
										return true;
									}
								}
							}
						}
						else if (__LIB_1__::func_187(18) && __LIB_3__::func_564(113, 4) != 4)
						{
							if (!Global_1326862.f_613)
							{
								__LIB_3__::func_539(113, 4, __LIB_0__::func_23());
								Global_1326862.f_613 = 1;
							}
							if (Global_1326862.f_613)
							{
								if (func_2091(113, 4, 7, 0))
								{
									__LIB_3__::func_461(113, 4, 4);
									return false;
								}
								else if (!__LIB_1__::func_982(113))
								{
									if (__LIB_3__::func_993(106, 0) == 3)
									{
										if (__LIB_3__::func_993(106, 0) == 7)
										{
											Global_1326862.f_613 = 0;
											return true;
										}
										else
										{
											return false;
										}
									}
									else
									{
										Global_1326862.f_613 = 0;
										return true;
									}
								}
							}
						}
						else
						{
							return false;
						}
						break;
				}
			}
			else
			{
				return false;
			}
			break;
		case 114:
			if (func_2122())
			{
				return true;
			}
			return false;
		case 116:
			if (__LIB_3__::func_425(&uVar1))
			{
				return false;
			}
			if (__LIB_0__::func_12() == 76)
			{
				if (__LIB_11__::func_150(76) >= 10)
				{
					if (!Global_1326862.f_614)
					{
						__LIB_2__::func_115(116, 1, 0, 0, 0, 1, 0, 1);
						__LIB_3__::func_539(116, 1, __LIB_0__::func_23());
						Global_1326862.f_614 = 1;
					}
					else if (func_2091(116, 1, 8, 0))
					{
						return false;
					}
					else if (!__LIB_1__::func_982(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			if (__LIB_0__::func_12() == 105)
			{
				if (__LIB_11__::func_150(105) >= 10)
				{
					if (!Global_1326862.f_615)
					{
						__LIB_2__::func_115(116, 1, 0, 0, 0, 1, 0, 1);
						__LIB_3__::func_539(116, 2, __LIB_0__::func_23());
						Global_1326862.f_615 = 1;
					}
					else if (func_2091(116, 2, 8, 0))
					{
						return false;
					}
					else if (!__LIB_1__::func_982(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			if (__LIB_0__::func_12() == 78)
			{
				if (__LIB_11__::func_150(78) >= 10)
				{
					if (!Global_1326862.f_616)
					{
						__LIB_2__::func_115(116, 1, 0, 0, 0, 1, 0, 1);
						__LIB_3__::func_539(116, 3, __LIB_0__::func_23());
						Global_1326862.f_616 = 1;
					}
					else if (func_2091(116, 3, 8, 0))
					{
						return false;
					}
					else if (!__LIB_1__::func_982(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			break;
		case 117:
			if (__LIB_11__::func_149(75) <= 0)
			{
				return false;
			}
			return true;
		case 115:
			if (__LIB_3__::func_993(115, 0) == 3)
			{
				return false;
			}
			if (__LIB_0__::func_181())
			{
				if (__LIB_3__::func_564(115, 4) == 1)
				{
					return false;
				}
			}
			if (func_2074(115, 2097152) >= 2)
			{
				return false;
			}
			if (__LIB_3__::func_993(115, 0) == 2)
			{
				return false;
			}
			return true;
		case 63:
			switch (__LIB_1__::func_898())
			{
				case 1:
					if (__LIB_0__::func_181())
					{
						if (__LIB_2__::func_633(4))
						{
							return false;
						}
					}
					else
					{
						return false;
					}
					break;
			}
			return true;
		case 64:
			if (Global_1430231.f_4)
			{
				return false;
			}
			if (__LIB_1__::func_185(56) && !__LIB_0__::func_181())
			{
				return false;
			}
			if ((__LIB_1__::func_898() == 11 || __LIB_1__::func_898() == 0) || __LIB_1__::func_898() == 2)
			{
				if (__LIB_2__::func_633(2) || __LIB_10__::func_695(2))
				{
					return false;
				}
			}
			else if (__LIB_1__::func_898() == 9)
			{
				if (__LIB_2__::func_633(0) || __LIB_10__::func_695(0))
				{
					return false;
				}
			}
			iVar11 = __LIB_7__::func_914(Global_36, 0);
			if (__LIB_0__::func_34(iVar11))
			{
				if (__LIB_7__::func_831(iVar11, Global_36) <= 400f)
				{
					return false;
				}
			}
			return true;
		case 65:
			if (__LIB_1__::func_898() == 11)
			{
				if (__LIB_1__::func_185(26))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			break;
		case 66:
			if (!__LIB_1__::func_187(146))
			{
				return false;
			}
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_04"), 1, 0))
			{
				return false;
			}
			return true;
		case 105:
			if (__LIB_0__::func_12() == 38)
			{
				if (__LIB_1__::func_931(3) > 0)
				{
					return false;
				}
			}
			else if (__LIB_0__::func_12() == 5)
			{
				if (__LIB_1__::func_931(2) > 0)
				{
					return false;
				}
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			break;
		case 71:
			if (__LIB_1__::func_898() != 8)
			{
				if (func_1525(71, 2) || func_1525(71, 1))
				{
					return false;
				}
			}
			return true;
		case 118:
			if (__LIB_0__::func_12() == 38)
			{
				if (!__LIB_1__::func_187(8))
				{
					return false;
				}
			}
			return true;
		case 73:
			if (__LIB_3__::func_993(73, 0) == 2)
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

void func_1535(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (VOLUME::_0x769BB7626B8CDB06(vVar2, 1f, 0, iParam0, 16384))
			{
				VOLUME::_0xFDFECC6EE4491E11(iVar1);
				Global_1911670[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

void func_1571(int iParam0)
{
	__LIB_8__::func_93(iParam0, 8192);
	switch (iParam0)
	{
		case 0:
			func_2140(1);
			break;
		case 1:
			func_2141(1);
			break;
		case 2:
			func_2142(1);
			break;
	}
}

void func_1574(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_55(iParam1 > 0, iParam1, __LIB_0__::func_982(2));
	switch (iVar0)
	{
		case 1:
			*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2217.664f, 646.9603f, 96.97265f, 13.53989f, -0.284029f, 55.81102f, 44.74291f, 48.33699f, 8.323042f, "EA_RAILROAD_CAMP Camp");
			break;
		case 2:
			*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2191.981f, 790.8684f, 106.3609f, -0.322212f, 0f, 0f, 43.94438f, 48.80558f, 11.08309f, "EA_RAILROAD_CAMP Camp");
			break;
		case 3:
			*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1953.244f, 934.4714f, 120.0286f, 0.290825f, 0f, 0f, 49.39924f, 47.18443f, 9.047403f, "EA_RAILROAD_CAMP Camp");
			break;
	}
}

void func_1575(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_55(iParam1 > 0, iParam1, __LIB_0__::func_982(2));
	switch (iVar0)
	{
		case 1:
			*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2225.631f, 664.5594f, 93.73315f, 0f, 0f, -32.17921f, 83.15855f, 79.43558f, 20.92662f, "EA_RAILROAD_CAMP Discover");
			break;
		case 2:
			*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2192.607f, 835.281f, 117.1585f, 0f, 0f, 15.61822f, 62.10736f, 102.2747f, 27.03924f, "EA_RAILROAD_CAMP Discover");
			break;
		case 3:
			*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1952.344f, 934.0704f, 123.4338f, 0f, 0f, -74.86485f, 66.47353f, 80.84007f, 14.42759f, "EA_RAILROAD_CAMP Discover");
			break;
	}
}

int func_1580(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 2;
		case 2:
			return 1;
		case 3:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1581(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
						case default:
							return 1749008611;
						case 1:
							return 758066107;
							break;
						case 2:
							switch (iParam2)
							{
								case 0:
								case default:
									return 2111695903;
								case 1:
									return -1995054197;
									break;
								case 3:
									switch (iParam2)
									{
										case 0:
										case default:
											return -1947695052;
										case 1:
											return -1623126047;
											break;
										case 4:
											switch (iParam2)
											{
												case 0:
												case default:
													return -1559513478;
												case 1:
													return 1943484686;
													break;
												case 5:
													switch (iParam2)
													{
														case 0:
														case default:
															return -1321905459;
														case 1:
															return 2056603274;
															break;
													}
													break;
												case 1:
													switch (iParam1)
													{
														case 1:
															switch (iParam2)
															{
																case 0:
																case default:
																	return -590227673;
																case 1:
																	return 872406077;
																	break;
																case 2:
																	switch (iParam2)
																	{
																		case 0:
																		case default:
																			return -590227673;
																		case 1:
																			return 1471226731;
																			break;
																		case 3:
																			switch (iParam2)
																			{
																				case 0:
																				case default:
																					return -590227673;
																				case 1:
																					return -1149736196;
																					break;
																				case 4:
																					return -1926787493;
																				case 5:
																					return -1926787493;
																			}
																			break;
																		case 2:
																			switch (iParam1)
																			{
																				case 1:
																					return -586415580;
																				case 2:
																					return 1251859782;
																				case 3:
																					return 994786977;
																				case 4:
																					return 2077623691;
																			}
																			break;
																		case 3:
																			switch (iParam1)
																			{
																				case 1:
																					switch (iParam2)
																					{
																						case 0:
																							return -1877706739;
																						case 1:
																							return 905216692;
																						default:
																							break;
																					}
																					break;
																				case 2:
																					switch (iParam2)
																					{
																						case 0:
																							return -1877706739;
																						case 1:
																							return -1299414622;
																						default:
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	return 0;
																}
void func_1582(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	__LIB_8__::func_7(iParam0, &(Global_40.f_9096[iParam0 /*12*/].f_11), iParam1, iParam2, iParam3, iParam4, bParam5);
}

void func_1588(int iParam0, int iParam1)
{
	if (__LIB_16__::func_331(iParam0, iParam1))
	{
		if (__LIB_0__::func_117(iParam0, 32))
		{
			__LIB_0__::func_121(iParam0, 32);
		}
		__LIB_16__::func_332(iParam0);
		__LIB_13__::func_215(iParam0);
		if (__LIB_16__::func_333(iParam0) != 0)
		{
			if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(__LIB_16__::func_333(iParam0)))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(__LIB_16__::func_333(iParam0), true);
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_117(iParam0, 32))
		{
			__LIB_0__::func_123(iParam0, 32);
		}
		if (__LIB_2__::func_767(iParam0, 0))
		{
			__LIB_7__::func_899(iParam0);
		}
		__LIB_8__::func_783(iParam0);
		if (__LIB_16__::func_333(iParam0) != 0)
		{
			if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(__LIB_16__::func_333(iParam0)))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(__LIB_16__::func_333(iParam0), false);
			}
		}
	}
}

void func_1589(var uParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		*uParam0 = 64;
		*iParam1 = 66;
	}
	else
	{
		*uParam0 = 67;
		*iParam1 = 68;
	}
}

int func_1592(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, bool bParam10, int iParam11, float fParam12)
{
	int iVar0;
	char* sVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	if (!__LIB_0__::func_625(iParam0) || !iParam0 == 2)
	{
		return 0;
	}
	iVar0 = __LIB_7__::func_942(iParam0);
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iVar0 /*35*/].f_3))
	{
		return 0;
	}
	if (iParam0 == 2)
	{
		sVar1 = "ea_rrCamp";
	}
	else
	{
		return 0;
	}
	vVar2 = { VOLUME::_GET_VOLUME_COORDS(Global_1888801[iVar0 /*35*/].f_3) };
	if (!__LIB_0__::func_86(vParam7))
	{
		vVar5 = { vParam7 };
	}
	else
	{
		vVar5 = { (135f * fParam12), (135f * fParam12), 150f };
	}
	iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam1, VOLUME::_GET_VOLUME_ROTATION(Global_1888801[iVar0 /*35*/].f_3), vVar5);
	if (((!bParam10 && !__LIB_0__::func_86(vParam1)) && __LIB_0__::func_2() != 0) && (__LIB_1__::func_205(Global_35, iVar8, 1, 0) || __LIB_1__::func_205(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0)))
	{
		__LIB_0__::func_172(iVar8);
		return 0;
	}
	__LIB_0__::func_172(iVar8);
	func_828(iParam0, iParam11);
	__LIB_1__::func_222(vVar2, 0);
	if (__LIB_0__::func_86(vParam1))
	{
		VOLUME::_SET_VOLUME_SCALE(Global_1888801[iVar0 /*35*/].f_3, 1f, 1f, 1f);
		__LIB_16__::func_334(iParam0);
		__LIB_8__::func_82(iParam0, 65536);
		return 1;
	}
	else
	{
		VOLUME::_SET_VOLUME_SCALE(Global_1888801[iVar0 /*35*/].f_3, vVar5);
		__LIB_8__::func_83(iParam0, 65536);
	}
	VOLUME::_SET_VOLUME_COORDS(Global_1888801[iVar0 /*35*/].f_3, vParam1);
	VOLUME::_SET_VOLUME_ROTATION(Global_1888801[iVar0 /*35*/].f_3, vParam4);
	__LIB_1__::func_994(vParam1, 140f, sVar1, 0, 0, 0, 0, -1082130432 /* Float: -1f */);
	Global_1888801[iVar0 /*35*/].f_15 = { vParam1 };
	Global_1888801[iVar0 /*35*/].f_13 = -1;
	return 1;
}

int func_1602(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
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
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) < 0)
		{
			func_1602(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
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
	__LIB_12__::func_934(iParam0, iParam1);
	return 1;
}

bool func_1628()
{
	if (((__LIB_10__::func_661() || __LIB_10__::func_660()) || __LIB_10__::func_662()) || __LIB_10__::func_663())
	{
		return true;
	}
	return false;
}

char* func_1629(var uParam0)
{
	char* sVar0;
	if (__LIB_10__::func_659() || __LIB_10__::func_663())
	{
		sVar0 = "DISCOVERABLE_NAME_CHARLOTTE";
		*uParam0 = { func_2178() };
	}
	else if (__LIB_10__::func_660())
	{
		sVar0 = "DISCOVERABLE_NAME_CHARLOTTE";
		*uParam0 = { func_2178() };
	}
	else if (__LIB_10__::func_661() || __LIB_10__::func_662())
	{
		sVar0 = "DISCOVERABLE_NAME_CHARLOTTE";
		*uParam0 = { func_2180() };
	}
	else
	{
		sVar0 = "STRANGER_FEMALE";
		*uParam0 = { func_2181() };
	}
	return sVar0;
}

void func_1638(var uParam0)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_23))
	{
		TASK::_DELETE_SCENARIO_POINT(uParam0->f_23);
		uParam0->f_23 = 0;
	}
	*uParam0 = 0;
	Global_1359489.f_63.f_241 = (Global_1359489.f_63.f_241 - 1);
}

void func_1639(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return;
	}
	if (!Global_1359489.f_63.f_242[iParam0 /*18*/].f_15)
	{
		return;
	}
	Global_1359489.f_63.f_242[iParam0 /*18*/].f_15 = 0;
	Global_1359489.f_63.f_297 = (Global_1359489.f_63.f_297 - 1);
}

bool func_1651(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	if (!__LIB_0__::func_91())
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam0))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_2187()))
	{
		return false;
	}
	return MISC::ARE_STRINGS_EQUAL(&cParam0, func_2187());
}

Vector3 func_1668()
{
	int iVar0;
	iVar0 = __LIB_0__::func_317();
	switch (iVar0)
	{
		case 0:
			return -1356.339f, 2443.121f, 308.1876f;
		case 1:
			return -125.85f, -39.599f, 96.0908f;
		case 2:
			return 654.1f, -1245.5f, 43.5f;
		case 3:
			return 1905.239f, -1861.509f, 43.1387f;
		case 5:
			return 2222.172f, -772.852f, 42.662f;
		case 6:
			return 2342.779f, 1359.049f, 106.3936f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 7:
			return -2593.808f, 457.4836f, 146.9974f;
		case 8:
			return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

bool func_1671()
{
	return __LIB_5__::func_862(10, 0) >= 2;
}

int func_1672()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 366);
	if (iVar0 < 0 || iVar0 > 366)
	{
		return -1;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	else if (iVar0 == 1)
	{
		return 4;
	}
	else if (iVar0 <= 3)
	{
		return 21;
	}
	else if (iVar0 <= 5)
	{
		return 3;
	}
	else if (iVar0 <= 8)
	{
		return 6;
	}
	else if (iVar0 <= 15)
	{
		return 10;
	}
	else if (iVar0 <= 25)
	{
		return 3;
	}
	else if (iVar0 <= 35)
	{
		return 8;
	}
	else if (iVar0 <= 55)
	{
		return 23;
	}
	else if (iVar0 <= 75)
	{
		return 19;
	}
	else if (iVar0 <= 95)
	{
		return 20;
	}
	else if (iVar0 <= 115)
	{
		return 17;
	}
	else if (iVar0 <= 140)
	{
		return 18;
	}
	else if (iVar0 <= 170)
	{
		return 1;
	}
	else if (iVar0 <= 200)
	{
		return 2;
	}
	else if (iVar0 <= 230)
	{
		return 5;
	}
	else if (iVar0 <= 260)
	{
		return 11;
	}
	else if (iVar0 <= 295)
	{
		return 7;
	}
	else if (iVar0 <= 330)
	{
		return 9;
	}
	else if (iVar0 <= 365)
	{
		return 22;
	}
	return -1;
}

int func_1677(int iParam0)
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	switch (iParam0)
	{
		case 0:
			return 0;
		case 7:
			switch (iVar0)
			{
				case 0:
					return joaat("PROVISION_ALLIGATOR_TOOTH");
				case 1:
					return joaat("PROVISION_BEAVER_FUR_PRISTINE");
				case 2:
					return joaat("PROVISION_BUCK_FUR_PRISTINE");
				case 3:
					return joaat("PROVISION_BUFFALO_FUR");
				case 4:
					return joaat("PROVISION_MOOSE_ANTLER");
				case 5:
					return joaat("PROVISION_BOAR_TUSK");
				case 6:
					return joaat("PROVISION_PANTHER_FUR");
				case 7:
					return joaat("PROVISION_EAGLE_TALON");
				case 8:
					return joaat("PROVISION_BLACK_BEAR_FUR_POOR");
				case 9:
					return 0;
				default:
					break;
			}
			break;
		case 1:
		case 6:
		case 11:
			switch (iVar0)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return joaat("PROVISION_MUSKRAT_FUR");
				case 3:
					return joaat("PROVISION_SQUIRREL_PELT");
				case 4:
					return joaat("PROVISION_OPOSSUM_FUR");
				case 5:
					return joaat("PROVISION_COYOTE_FUR_POOR");
				case 6:
					return joaat("PROVISION_OWL_FEATHER");
				case 7:
					return joaat("PROVISION_BOAR_SKIN_POOR");
				case 8:
					return joaat("PROVISION_PIG_SKIN_POOR");
				case 9:
					return joaat("PROVISION_IGUANA_SCALE");
				default:
					break;
			}
			break;
		case 3:
		case 17:
			switch (iVar0)
			{
				case 0:
					return 0;
				case 1:
					return joaat("PROVISION_FISH_BLUEGILL");
				case 2:
					return joaat("PROVISION_GOOSE_FEATHER");
				case 3:
					return joaat("PROVISION_IGUANA_SKIN_POOR");
				case 4:
					return joaat("PROVISION_GOAT_HAIR");
				case 5:
					return joaat("PROVISION_BAT_WING");
				case 6:
					return joaat("PROVISION_BAT_WING");
				case 7:
					return joaat("PROVISION_ARMADILLO_SKIN_POOR");
				case 8:
					return joaat("PROVISION_FISH_MUSKIE_POOR");
				case 9:
					return 0;
				default:
					break;
			}
			break;
		case 4:
		case 8:
		case 21:
			switch (iVar0)
			{
				case 0:
					return joaat("PROVISION_EMPTY_BOTTLE");
				case 1:
					return joaat("CONSUMABLE_RUM_USED");
				case 2:
					return joaat("CONSUMABLE_WHISKEY_USED");
				case 3:
					return joaat("PROVISION_SKUNK_FUR_POOR");
				case 4:
					return joaat("PROVISION_SKUNK_FUR_POOR");
				case 5:
					return joaat("CONSUMABLE_GIN_USED");
				case 6:
					return joaat("PROVISION_BAT_WING");
				case 7:
					return joaat("PROVISION_BAT_WING");
				case 8:
					return joaat("PROVISION_ARMADILLO_SKIN_POOR");
				case 9:
					return joaat("PROVISION_FISH_MUSKIE_POOR");
				default:
					break;
			}
			break;
		case 2:
		case 5:
		case 9:
		case 10:
		case 20:
		case 23:
			switch (iVar0)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return joaat("PROVISION_NECKLACE");
				case 4:
					return joaat("PROVISION_GOLDTOOTH");
				case 5:
					return joaat("PROVISION_BUCKLE_SILVER");
				case 6:
					return joaat("PROVISION_BRACELET_SILVER");
				case 7:
					return joaat("PROVISION_READING_GLASSES");
				case 8:
					return joaat("PROVISION_POCKET_WATCH_SILVER");
				case 9:
					return joaat("PROVISION_POCKET_WATCH_GOLD");
				default:
					break;
			}
			break;
		case 18:
		case 19:
		case 22:
			switch (iVar0)
			{
				case 0:
					return 0;
				case 1:
					return joaat("CONSUMABLE_BEETS");
				case 2:
					return joaat("CONSUMABLE_CARROT");
				case 3:
					return joaat("CONSUMABLE_COVER_SCENT");
				case 4:
					return joaat("PROVISION_BLUEJAY_FEATHER");
				case 5:
					return joaat("PROVISION_CROW_FEATHER");
				case 6:
					return joaat("PROVISION_BAT_WING");
				case 7:
					return joaat("PROVISION_BAT_WING");
				case 8:
					return joaat("CONSUMABLE_COFFEE");
				case 9:
					return joaat("PROVISION_BOOBY_FEATHER");
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_1678(int iParam0)
{
	int iVar0;
	if (iParam0 == 0)
	{
		return MISC::GET_RANDOM_INT_IN_RANGE(40, 1100);
	}
	iVar0 = __LIB_9__::func_977(iParam0, 816454899, 0);
	if (iVar0 <= 0)
	{
		iVar0 = 15;
	}
	return iVar0;
}

void func_1680(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 <= 0)
	{
		return;
	}
	if (__LIB_6__::func_520(iParam0, iParam1, iParam2, &(Global_40.f_4283.f_440[0 /*63*/]), 0, 1))
	{
		return;
	}
	if (__LIB_6__::func_520(iParam0, iParam1, iParam2, &(Global_40.f_4283.f_440[1 /*63*/]), 0, 1))
	{
		if (Global_40.f_4283.f_440[1 /*63*/] == 0)
		{
			Global_40.f_4283.f_440[1 /*63*/] = __LIB_6__::func_15(&(Global_40.f_4283.f_440[0 /*63*/]));
		}
		return;
	}
	__LIB_6__::func_260(&(Global_40.f_4283.f_440));
	__LIB_6__::func_520(iParam0, iParam1, iParam2, &(Global_40.f_4283.f_440[1 /*63*/]), 0, 1);
}

bool func_1692(int iParam0)
{
	if (!func_2217(iParam0))
	{
		return false;
	}
	if (!Global_40.f_7100[iParam0 /*8*/].f_7)
	{
		return false;
	}
	if (Global_1327490[iParam0 /*11*/].f_2 == 7)
	{
		return false;
	}
	if (func_1004(iParam0, 1))
	{
		if (Global_40.f_7100[iParam0 /*8*/] > 0)
		{
			return false;
		}
	}
	return true;
}

int func_1699(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1699(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1699(iVar63, -915411861, 1, 0, 0));
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

bool func_1701(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
		return false;
	}
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return false;
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
				func_1701(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						__LIB_10__::func_706(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_10__::func_706(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
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
		__LIB_13__::func_10(28);
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
			if (!__LIB_1__::func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_1__::func_842(iParam0, &iVar0, iParam5))
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
			__LIB_12__::func_629(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_12__::func_630(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_12__::func_631(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_12__::func_632(iParam0);
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
			__LIB_12__::func_633(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_12__::func_788(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return false;
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
						func_1701(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_1701(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_1701(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_1701(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_1701(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_1701(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1701(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_13__::func_10(24);
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
					func_1701(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_1701(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			return false;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_1__::func_825(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			func_2289(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_13__::func_164(iParam0);
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
				func_1701(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
	return true;
}

Vector3 func_1707(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1703.017f, -1193.477f, 40.87114f;
		case 1:
			return 1843.409f, -848.2139f, 41.4866f;
		case 2:
			return 2271.136f, -880.5488f, 40.67368f;
		case 3:
			return 2388.503f, -804.0573f, 40.40003f;
		case 4:
			return 1800.8f, -650.0999f, 41.79465f;
		case 5:
			return 1894.264f, -746.6217f, 40.8667f;
		case 6:
			return 1965.484f, -534.3154f, 40.79573f;
		case 7:
			return 2073.305f, -410.2393f, 43.86857f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1708(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1911.527f, -1081.425f, 74.94867f;
		case 1:
			return -771.4603f, -956.4453f, 57.41802f;
		case 2:
			return -1106.321f, -828.0113f, 57.18276f;
		case 3:
			return -1470.439f, -481.2832f, 129.7087f;
		case 4:
			return -2759.475f, -322.2629f, 148.9228f;
		case 5:
			return -2453.729f, -256.0954f, 167.9235f;
		case 6:
			return -2218.443f, -294.5674f, 175.811f;
		case 7:
			return -1528.56f, -306.796f, 141.4257f;
		case 8:
			return -1233.586f, -88.57207f, 83.62101f;
		case 9:
			return -1234.962f, 157.5102f, 44.78442f;
		case 10:
			return -566.102f, 145.28f, 43.752f;
		case 11:
			return -1182.98f, 326.0052f, 42.7946f;
		case 12:
			return -2125.483f, -570.3181f, 135.738f;
		case 13:
			return -2723.107f, 164.9856f, 158.4616f;
		case 14:
			return -1669.88f, 296.6453f, 105.4715f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1709(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2841.189f, -30.76445f, 42.77265f;
		case 1:
			return 2607.927f, -319.3926f, 40.95263f;
		case 2:
			return 2244.111f, -285.2383f, 42.1666f;
		case 3:
			return 2394.699f, -629.6008f, 41.0268f;
		case 4:
			return 2723.243f, -470.2964f, 41.2995f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1710(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -3726.688f, -3307.577f, -7.087447f;
		case 1:
			return -3525.91f, -3297.097f, 7.13253f;
		case 2:
			return -3343.319f, -3156.112f, -9.234425f;
		case 3:
			return -3683.004f, -3016.393f, 3.888919f;
		case 4:
			return -3449.031f, -2931.879f, -1.408252f;
		case 5:
			return -4525.241f, -2838.432f, -10.14498f;
		case 6:
			return -4252.492f, -2865.505f, 0.934153f;
		case 7:
			return -4062.296f, -2816.964f, -7.092867f;
		case 8:
			return -4346.442f, -2799.033f, -11.43314f;
		case 9:
			return -4575.098f, -2651.198f, -8.556144f;
		case 10:
			return -4906.317f, -2577.193f, -8.449292f;
		case 11:
			return -4116.955f, -2574.382f, -2.066976f;
		case 12:
			return -4169.301f, -2526.887f, 1.859408f;
		case 13:
			return -3439.029f, -2503.892f, -9.182504f;
		case 14:
			return -4918.073f, -2462.517f, -5.524791f;
		case 15:
			return -3971.095f, -2443.944f, -10.08081f;
		case 16:
			return -3619.286f, -2301.549f, -14.04042f;
		case 17:
			return -4307.568f, -2200.853f, 24.48134f;
		case 18:
			return -4118.893f, -2193.756f, -3.224191f;
		case 19:
			return -3568.649f, -2078.352f, -14.02534f;
		case 20:
			return -3469.607f, -2077.447f, -2.146124f;
		case 21:
			return -4973.05f, -2786.249f, 8.494886f;
		case 22:
			return -3000.969f, -2956.322f, 24.16992f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1711(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 199.4206f, 715.551f, 184.245f;
		case 1:
			return 508.8778f, 1107.306f, 192.4121f;
		case 2:
			return 680.2847f, 1093.87f, 185.8281f;
		case 3:
			return 325.2038f, 1156.171f, 181.2034f;
		case 4:
			return -148.5011f, 1252.568f, 162.2429f;
		case 5:
			return 60.0796f, 1266.755f, 175.1073f;
		case 6:
			return 182.0886f, 1233.459f, 187.5173f;
		case 7:
			return 648.47f, 1249.952f, 209.1562f;
		case 8:
			return 300.8428f, 1289.62f, 196.7078f;
		case 9:
			return 450.7882f, 1280.928f, 189.1563f;
		case 10:
			return -58.9888f, 1382.725f, 174.3547f;
		case 11:
			return 267.0545f, 1413.089f, 175.7465f;
		case 12:
			return 24.34479f, 891.9021f, 210.1736f;
		case 13:
			return 486.4945f, 1497.265f, 172.6744f;
		case 14:
			return 729.5679f, 1632.92f, 212.8616f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1712(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -5630.912f, -3800.952f, -24.15438f;
		case 1:
			return -5543.412f, -3677.657f, -22.1373f;
		case 2:
			return -5777.599f, -3493.218f, -18.16103f;
		case 3:
			return -5717.824f, -3498.931f, -24.10648f;
		case 4:
			return -5599.67f, -3493.919f, -22.10398f;
		case 5:
			return -5778.481f, -3340.258f, -24.15586f;
		case 6:
			return -5687.046f, -3325.364f, -23.46355f;
		case 7:
			return -5399.201f, -3276.839f, -19.29131f;
		case 8:
			return -5707.167f, -3257.442f, -24.13068f;
		case 9:
			return -5832.266f, -3008.452f, 5.243379f;
		case 10:
			return -5349.621f, -2991.114f, 11.91529f;
		case 11:
			return -5924.647f, -2892.585f, -8.640306f;
		case 12:
			return -5693.065f, -2781.604f, -19.56641f;
		case 13:
			return -5355.023f, -2815.932f, 9.127287f;
		case 14:
			return -5240.183f, -2793.933f, 9.4705f;
		case 15:
			return -5627.333f, -2678.391f, -1.797516f;
		case 16:
			return -5416.085f, -2528.688f, -2.148881f;
		case 17:
			return -5167.746f, -2453.028f, 0.198034f;
		case 18:
			return -5170.577f, -2304.255f, 0.93978f;
		case 19:
			return -5213.905f, -2945.946f, 8.505274f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1713(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1562.535f, -1669.278f, 78.09457f;
		case 1:
			return -731.4658f, -1723.708f, 41.3675f;
		case 2:
			return -1816.616f, -1411.358f, 94.42287f;
		case 3:
			return -1200.177f, -1397.259f, 78.41792f;
		case 4:
			return -1671.685f, -1149.149f, 76.40435f;
		case 5:
			return -1480.855f, -1115.203f, 73.01974f;
		case 6:
			return -1231.552f, -931.261f, 68.216f;
		case 7:
			return -1152.045f, -990.132f, 62.813f;
		case 8:
			return -1004.628f, -912.9733f, 59.18977f;
		case 9:
			return -809.9987f, -1975.141f, 46.49118f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1714(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1394.754f, 1025.714f, 172.5909f;
		case 1:
			return 799.362f, 1512.22f, 203.6078f;
		case 2:
			return 108.2844f, 1587.768f, 169.9825f;
		case 3:
			return 189.572f, 1751.42f, 195.127f;
		case 4:
			return 711.4525f, 1882.17f, 238.4335f;
		case 5:
			return 1887.53f, 2044.917f, 269.9734f;
		case 6:
			return 1666.142f, 1350.294f, 145.4012f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1715(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -458.2869f, 1393.359f, 207.3898f;
		case 1:
			return -54.38935f, 1579.027f, 112.1133f;
		case 2:
			return -308.9004f, 1298.059f, 146.4144f;
		case 3:
			return -553.442f, 1207.96f, 156.434f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1716(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 482.8061f, -716.7781f, 41.10171f;
		case 1:
			return 32.51f, -679.646f, 41.845f;
		case 2:
			return 179.855f, -646.3071f, 41.15624f;
		case 3:
			return -546.0676f, -624.9115f, 41.01733f;
		case 4:
			return -495.9743f, -581.4591f, 41.30201f;
		case 5:
			return 115.5672f, -603.0594f, 41.73539f;
		case 6:
			return -265.949f, -568.16f, 40.994f;
		case 7:
			return -219.4504f, -561.9579f, 41.07809f;
		case 8:
			return 27.05715f, -557.4023f, 49.90836f;
		case 9:
			return -702.307f, -465.0844f, 40.64299f;
		case 10:
			return -452.5241f, -459.3314f, 75.7037f;
		case 11:
			return -579.6792f, -341.4986f, 81.39197f;
		case 12:
			return 495.1535f, -290.6365f, 143.3338f;
		case 13:
			return 268.35f, -63.65599f, 106.9243f;
		case 14:
			return 1055.145f, -8.996603f, 85.46394f;
		case 15:
			return 660.1984f, 12.8926f, 154.1276f;
		case 16:
			return 523.3091f, 119.2032f, 138.4316f;
		case 17:
			return -1020.356f, 161.6024f, 89.06911f;
		case 18:
			return -860.0233f, 181.8161f, 91.54334f;
		case 19:
			return -329.598f, 185.9814f, 62.61813f;
		case 20:
			return -194.4355f, 216.5328f, 94.99113f;
		case 21:
			return -643.9529f, 268.1349f, 89.91756f;
		case 22:
			return -683.825f, 405.944f, 98.183f;
		case 23:
			return 62.54831f, 478.2175f, 155.9936f;
		case 24:
			return -525.632f, 584.204f, 102.5281f;
		case 25:
			return -567.2916f, 579.0692f, 101.7165f;
		case 26:
			return 1437.195f, 585.468f, 86.624f;
		case 27:
			return 1211.364f, 652.7075f, 101.133f;
		case 28:
			return -52.5815f, 812.1794f, 191.5827f;
		case 29:
			return 267.4816f, 870.4498f, 185.8605f;
		case 30:
			return 978.8549f, 988.0117f, 148.7319f;
		case 31:
			return -364.0769f, -576.9738f, 41.04376f;
		case 32:
			return 730.8968f, -43.33945f, 156.153f;
		case 33:
			return -795.8221f, 234.6414f, 94.624f;
		case 34:
			return 819.4227f, 440.2863f, 106.9529f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1717(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2926.443f, -3234.065f, -0.628535f;
		case 1:
			return -2487.012f, -3176.937f, -1.054441f;
		case 2:
			return -3030.673f, -3060.828f, 4.964023f;
		case 3:
			return -2588.79f, -3066.609f, 10.56877f;
		case 4:
			return -2562.166f, -2923.827f, 69.21062f;
		case 5:
			return -1977.878f, -2892.343f, 14.92192f;
		case 6:
			return -2873.19f, -2858.557f, 88.85822f;
		case 7:
			return -2536.993f, -2860.911f, 70.19837f;
		case 8:
			return -2279.367f, -2843.167f, 60.66909f;
		case 9:
			return -2389.667f, -2795.147f, 65.57684f;
		case 10:
			return -1967.109f, -2708.611f, 66.92551f;
		case 11:
			return -1576.223f, -2710.079f, 65.19524f;
		case 12:
			return -2817.745f, -2635.485f, 87.2812f;
		case 13:
			return -1558.427f, -2586.706f, 64.19134f;
		case 14:
			return -1343.033f, -2589.14f, 72.45986f;
		case 15:
			return -3185.62f, -2463.492f, 72.22705f;
		case 16:
			return -2753.281f, -2441.331f, 72.86351f;
		case 17:
			return -2700.721f, -2357.772f, 45.51137f;
		case 18:
			return -2696.916f, -2264.432f, 80.94161f;
		case 19:
			return -3033.404f, -2239.378f, 71.45528f;
		case 20:
			return -2274.649f, -2222.449f, 68.20701f;
		case 21:
			return -2846.258f, -2165.252f, 71.7175f;
		case 22:
			return -2542.869f, -2895.076f, 70.0419f;
		case 23:
			return -2256.796f, -2600.979f, 68.16894f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1718(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -4984.56f, -4027.732f, -1.061956f;
		case 1:
			return -5306.635f, -3812.414f, -10.3174f;
		case 2:
			return -5116.797f, -3798.86f, 14.932f;
		case 3:
			return -4631.26f, -3811.573f, 11.00237f;
		case 4:
			return -5269.599f, -3694.408f, -12.14015f;
		case 5:
			return -4119.768f, -3651.636f, 50.14217f;
		case 6:
			return -3969.534f, -3586.866f, 55.92451f;
		case 7:
			return -5103.968f, -3581.168f, -3.618238f;
		case 8:
			return -3690.173f, -3564.359f, 48.10432f;
		case 9:
			return -4439.798f, -3502.138f, 22.0576f;
		case 10:
			return -3885.128f, -3495.778f, 61.1065f;
		case 11:
			return -4785.804f, -3399.914f, 11.98687f;
		case 12:
			return -4550.857f, -3381.47f, 32.06516f;
		case 13:
			return -4486.458f, -3153.711f, 7.975f;
		case 14:
			return -4028.281f, -3446.729f, 50.09875f;
		case 15:
			return -4591.391f, -3056.912f, 6.964922f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1719(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1920.909f, -103.2144f, 58.07399f;
		case 1:
			return 2549.317f, -25.06045f, 46.38906f;
		case 2:
			return 2104.725f, 68.68465f, 68.81693f;
		case 3:
			return 2396.398f, 109.282f, 46.16212f;
		case 4:
			return 2448.583f, 0.5031f, 43.66256f;
		case 5:
			return 2466.642f, 111.1795f, 44.34414f;
		case 6:
			return 1853.183f, 173.269f, 97.47f;
		case 7:
			return 1846.083f, 937.2869f, 120.1505f;
		case 8:
			return 2378.768f, 1074.173f, 83.96527f;
		case 9:
			return 2517.198f, 1697.483f, 86.43518f;
		case 10:
			return 3045.048f, 1705.888f, 68.83978f;
		case 11:
			return 2740.822f, 1962.598f, 160.814f;
		case 12:
			return 2787.48f, 2338.386f, 156.2681f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1720(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1470.638f, -2146.619f, 47.70845f;
		case 1:
			return 1670.983f, -1804.796f, 52.07475f;
		case 2:
			return 1626.055f, -1658.548f, 56.10492f;
		case 3:
			return 2038.507f, -1639.98f, 40.93686f;
		case 4:
			return 729.6482f, -1435.01f, 48.36016f;
		case 5:
			return 919.5746f, -1327.29f, 60.56889f;
		case 6:
			return 852.2303f, -1221.726f, 53.26948f;
		case 7:
			return 749.083f, -1102.881f, 56.0517f;
		case 8:
			return 852.2966f, -1086.833f, 57.03275f;
		case 9:
			return 703.065f, -953.9896f, 54.20256f;
		case 10:
			return 739.686f, -894.792f, 50.06968f;
		case 11:
			return 698.0555f, -801.6302f, 48.64518f;
		case 12:
			return 744.9461f, -805.8724f, 54.31242f;
		case 13:
			return 1394.134f, -584.3384f, 74.10042f;
		case 14:
			return 1679.453f, -613.0103f, 43.58567f;
		case 15:
			return 949.0311f, -532.064f, 86.19527f;
		case 16:
			return 923.0688f, -566.3171f, 89.0189f;
		case 17:
			return 1808.82f, -495.8035f, 41.36158f;
		case 18:
			return 921.17f, -440.3918f, 88.38271f;
		case 19:
			return 952.2379f, -369.3737f, 87.23822f;
		case 20:
			return 1083.14f, -294.7145f, 96.46477f;
		case 21:
			return 1610.838f, -198.5922f, 77.62068f;
		case 22:
			return 1041.584f, -399.3868f, 90.18402f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1721(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2256.2f, -1869.6f, 120.0141f;
		case 1:
			return -2043.712f, -1799.445f, 114.7959f;
		case 2:
			return -2167.581f, -1765.488f, 138.8783f;
		case 3:
			return -2220.421f, -1689.662f, 141.4693f;
		case 4:
			return -2188.504f, -1434.742f, 136.6764f;
		case 5:
			return -2331.433f, -1396.048f, 142.7258f;
		case 6:
			return -2414.786f, -1342.548f, 152.858f;
		case 7:
			return -2229.221f, -1292.981f, 133.229f;
		case 8:
			return -2002.941f, -1166.401f, 98.90932f;
		case 9:
			return -2140.052f, -1494.227f, 139.909f;
		case 10:
			return -2015.239f, -1309.898f, 114.871f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_1723(int iParam0)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return __LIB_5__::func_733(iParam0, 512);
}

bool func_1730(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		return Global_1393237.f_11[iParam0 /*30*/].f_24;
	}
	return false;
}

bool func_1733()
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;
	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	switch (iVar3)
	{
		case joaat("SANDSTORM"):
		case joaat("THUNDER"):
		case joaat("SNOW"):
		case joaat("SLEET"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("SNOWCLEARING"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
		case joaat("GROUNDBLIZZARD"):
			return true;
	}
	return false;
}

float func_1734(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0f;
	}
	return Global_1393237.f_11[iParam0 /*30*/].f_9;
}

void func_1742(int iParam0)
{
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_DISTANCE_SMOKE")))
	{
		STREAMING::REQUEST_PTFX_ASSET();
		STREAMING::REQUEST_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
	}
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1357522.f_19[iParam0]) && STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_DISTANCE_SMOKE")))
	{
		GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
		Global_1357522.f_19[iParam0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_campfire_distance_smoke_lod", Global_1357522[iParam0 /*3*/], 0f, 0f, 0f, 1f, false, false, false, false);
	}
}

void func_1743(int iParam0)
{
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1357522.f_22[iParam0]) && STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_DISTANCE_SMOKE")))
	{
		GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
		Global_1357522.f_22[iParam0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_campfire_distance_light", Global_1357522[iParam0 /*3*/], 0f, 0f, 0f, 1f, false, false, false, false);
	}
}

void func_1744(int iParam0)
{
	struct<16> Var0;
	struct<10> Var16;
	int iVar26;
	if (Global_1357522.f_13[iParam0])
	{
		StringCopy(&(Var0.f_10), "player_camp", 32);
		Var0.f_14 = 6096;
		Var16.f_6 = { Global_1357522[iParam0 /*3*/] };
		Var16.f_6.f_3 = Global_1357522.f_7[iParam0];
		if (iParam0 == 1)
		{
			iVar26 |= 128 | 2048;
		}
		else
		{
			iVar26 |= 2048;
		}
		Var16 = iVar26;
		Var0 = { Var16 };
		Var0.f_15 = 1;
		MAP::REMOVE_BLIP(&(Global_1357522.f_16[iParam0]));
		Global_1357522.f_10[iParam0] = 0;
		Global_1357522.f_13[iParam0] = 0;
		__LIB_4__::func_709(Var0, 2);
	}
}

bool func_1765(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (__LIB_4__::func_132(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
		else if (__LIB_4__::func_132(iVar0) == -1)
		{
			*uParam1 = iVar0;
			return false;
		}
	else
	{
		}
		iVar0++;
	}
	*uParam1 = -1;
	return false;
}

int func_1767(int iParam0)
{
	switch (iParam0)
	{
		case 1512816328:
			return joaat("GANG_SKINAFTERMATH_LOC01_01");
		case 1207048789:
			return joaat("GANG_SKINAFTERMATH_LOC02_01");
		case -1230112817:
			return joaat("GANG_SKINAFTERMATH_LOC03_01");
		case -1278074582:
			return joaat("GANG_SKINAFTERMATH_LOC01_02");
		case -1436021162:
			return joaat("GANG_SKINAFTERMATH_LOC02_02");
		case 407136781:
			return joaat("GANG_SKINAFTERMATH_LOC03_02");
		case -350863510:
			return 765343099;
		case 1557082963:
			return -909306169;
		case 249726958:
			return -1758697759;
		case -1952856164:
			return 591001924;
		case 1433244935:
			return -2092712551;
		case -99303535:
			return -1307469679;
		case 1186594126:
			return joaat("CVB_MURDERTREE");
		case 469053995:
			return joaat("M_07_P_MURDERROCK");
		case 476714362:
			return joaat("M_09_P_CAMPFIREMURDER");
		default:
			break;
	}
	return 0;
}

bool func_1796(int iParam0)
{
	if (Global_1934765.f_337 == 0)
	{
		return false;
	}
	return __LIB_4__::func_341(iParam0) != -1;
}

void func_1802()
{
	int iVar0;
	int iVar1;
	if (!__LIB_10__::func_634(512))
	{
		if (__LIB_10__::func_634(256))
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		__LIB_8__::func_781();
		MISC::_0x3373779BAF7CAF48("MISTY", "MISTY_guama");
		MISC::_0x3373779BAF7CAF48("SHOWER", "SHOWER_guama");
		iVar0 = 0;
		while (iVar0 < 24)
		{
			iVar1 = __LIB_4__::func_348(iVar0, 1);
			if (iVar1 == 0 || iVar1 == -1439599467)
			{
			}
			else if (iVar1 == joaat("MISTY") || iVar1 == joaat("SHOWER"))
			{
				MISC::_0xD3F943B88F55376A(iVar1);
			}
			else
			{
				MISC::_0x2916B30DC6C41179(iVar1);
			}
			iVar0++;
		}
		GRAPHICS::SET_TIMECYCLE_MODIFIER("GUAMA_freeplay2");
		__LIB_9__::func_85(512);
	}
	__LIB_9__::func_96(19, 0, 0, 0);
}

bool func_1807(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) == iParam1;
}

bool func_1808(var uParam0)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	float fVar11;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	var uVar26;
	int iVar27;
	if (!func_1807(uParam0, 2))
	{
		fVar0 = (BUILTIN::VDIST(Global_36, uParam0->f_5) - uParam0->f_9);
		fVar1 = BUILTIN::TO_FLOAT(CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE());
		bVar2 = true;
		if (*uParam0 == 1)
		{
			bVar2 = Global_36.f_2 > (uParam0->f_5.f_2 - 2f);
		}
		if (fVar0 <= 0f && bVar2)
		{
			if (func_2334(uParam0))
			{
				__LIB_4__::func_804(uParam0, 2);
				return false;
			}
			else
			{
				if (fVar1 != IntToFloat(uParam0->f_11))
				{
					CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(uParam0->f_11);
				}
				return true;
			}
		}
		else if (fVar0 > uParam0->f_8)
		{
			if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != uParam0->f_11)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(uParam0->f_11);
			}
			return false;
		}
		iVar3 = __LIB_0__::func_23();
		__LIB_9__::func_36(iVar3, uParam0->f_1, &uVar4, &iVar5, &iVar6, &uVar7, &uVar8, &uVar9);
		iVar10 = (iVar5 + iVar6 * 60);
		fVar11 = (fVar1 / 1000f);
		vVar12 = { ENTITY::GET_ENTITY_VELOCITY(Global_35, -1) };
		vVar15 = { __LIB_4__::func_345(Global_35, uParam0->f_5, 1065353216 /* Float: 1f */) };
		fVar18 = __LIB_0__::func_649(0f, __LIB_1__::func_95(vVar12, vVar15));
		iVar19 = 9999999;
		if (fVar18 > 1E-05f || fVar18 < -1E-05f)
		{
			fVar20 = (fVar0 / fVar18);
			fVar21 = (fVar20 / fVar11);
			fVar22 = (BUILTIN::TO_FLOAT(iVar10) / fVar21);
			iVar23 = 500;
			if (fVar18 > 2f)
			{
				iVar23 = 125;
			}
			iVar24 = __LIB_0__::func_41(iVar3);
			iVar25 = __LIB_0__::func_42(iVar3);
			if (iVar24 == 20)
			{
				iVar23 = 600;
			}
			else if ((iVar24 == 19 && iVar25 > 30) || (iVar24 == 21 && iVar25 < 15))
			{
				iVar23 = 425;
			}
			else if (iVar24 == 4 || (iVar24 == 5 && iVar25 < 55))
			{
				iVar23 = 400;
			}
			iVar19 = __LIB_9__::func_939(BUILTIN::ROUND((fVar1 / fVar22)), iVar23, 9999999);
		}
		MISC::_0xDD560ABEF5D3784C(&uVar26, &iVar27);
		if (iVar27 != 0)
		{
			iVar19 = 2000;
		}
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(iVar19);
	}
	else if (!func_1807(uParam0, 32))
	{
		func_2337(uParam0);
		return false;
	}
	else
	{
		return true;
	}
	return false;
}

void func_1811(var uParam0)
{
	__LIB_4__::func_804(uParam0, 128);
}

bool func_1814(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10)
{
	if (*uParam0 == 0)
	{
		*uParam0 = iParam1;
		uParam0->f_1 = iParam2;
		uParam0->f_5 = { vParam3 };
		uParam0->f_8 = fParam6;
		uParam0->f_9 = fParam7;
		uParam0->f_10 = fParam8;
		uParam0->f_11 = iParam9;
		uParam0->f_12 = iParam10;
		uParam0->f_2 = 0;
		uParam0->f_4 = 0;
		uParam0->f_3 = 1;
		return true;
	}
	return false;
}

void func_1819(var uParam0, int iParam1)
{
	if (!__LIB_1__::func_58(iParam1))
	{
		return;
	}
	if (__LIB_1__::func_59(uParam0->f_34[iParam1]))
	{
		__LIB_9__::func_945(&(uParam0->f_34[iParam1]), 1);
		uParam0->f_34[iParam1] = -1;
		(*uParam0)[iParam1] = 0;
	}
}

void func_1821(var uParam0, int iParam1, int iParam2)
{
	if (!__LIB_1__::func_58(iParam1))
	{
		return;
	}
	if (((*uParam0)[iParam1] && iParam2) != 0)
	{
		return;
	}
	(*uParam0)[iParam1] = ((*uParam0)[iParam1] || iParam2);
}

void func_1822(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_20(iParam1))
	{
		if (__LIB_1__::func_59(Global_1934051.f_33))
		{
			iVar0 = __LIB_1__::func_300(iParam1);
			if (iVar0 != 0)
			{
				__LIB_3__::func_559(iParam0, iVar0);
			}
		}
	}
}

void func_1823(int iParam0, vector3 vParam1)
{
	if (!MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
	{
		return;
	}
	MAP::SET_BLIP_COORDS(Global_36308[iParam0], vParam1);
}

int func_1825(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_1__::func_67(iParam0, &iVar0))
	{
		return 0;
	}
	iVar1 = __LIB_1__::func_55(iVar0);
	iVar2 = __LIB_16__::func_248(iVar0);
	if (__LIB_0__::func_730(iVar2))
	{
		return 1;
	}
	else if (__LIB_0__::func_21(iVar2, 4194304))
	{
		return 1;
	}
	else if (!__LIB_1__::func_224(iVar1))
	{
		return 1;
	}
	else if (__LIB_2__::func_776())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
		case 23:
			if (__LIB_8__::func_714(__LIB_1__::func_885(38), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
			{
				return 1;
			}
			break;
		case 1:
			if (__LIB_8__::func_714(__LIB_1__::func_885(105), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
			{
				return 1;
			}
			break;
		case 2:
			if (__LIB_8__::func_714(__LIB_1__::func_885(92), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
			{
				return 1;
			}
			break;
		case 19:
			if (__LIB_8__::func_714(__LIB_1__::func_885(76), joaat("TSTAG_LOCKDOWN_SALOON_SLUMS"), 1))
			{
				return 1;
			}
			break;
		case 27:
			if (__LIB_8__::func_714(__LIB_1__::func_885(5), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
			{
				return 1;
			}
			break;
		case 31:
			if (__LIB_8__::func_714(__LIB_1__::func_885(115), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
			{
				return 1;
			}
			break;
		case 32:
			if (__LIB_8__::func_714(__LIB_1__::func_885(76), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_1826(var uParam0, int iParam1, int iParam2)
{
	if (!__LIB_1__::func_58(iParam1))
	{
		return false;
	}
	return ((*uParam0)[iParam1] && iParam2) != 0;
}

void func_1827(var uParam0, int iParam1, int iParam2)
{
	if (!__LIB_1__::func_58(iParam1))
	{
		return;
	}
	(*uParam0)[iParam1] = ((*uParam0)[iParam1] - ((*uParam0)[iParam1] && iParam2));
}

bool func_1828(int iParam0)
{
	int iVar0;
	if (!__LIB_1__::func_67(iParam0, &iVar0))
	{
		return false;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1) && !__LIB_1__::func_652())
	{
		return true;
	}
	else if (__LIB_0__::func_492(1) < Global_1392915[iVar0 /*12*/].f_10)
	{
		return true;
	}
	else if (__LIB_0__::func_1(Global_1935630, 2097152))
	{
		return true;
	}
	else if (!func_2339(iParam0))
	{
		return true;
	}
	else if (func_2340(iParam0))
	{
		return true;
	}
	else if (Global_1392915.f_121[iVar0 /*20*/].f_2 == 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392915.f_121[iVar0 /*20*/].f_4, false))
		{
			if (!Global_1392915.f_121[iVar0 /*20*/].f_15)
			{
				return true;
			}
		}
	}
	else if (func_584(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1836(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_FLOAT(uParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_1838(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MICRO"):
			return 128;
		case joaat("MOUNT"):
			return 256;
		case joaat("MINI"):
			return 512;
		case joaat("DEFAULT"):
			return 1024;
		case joaat("MULTIPLAYER_MISSION"):
			return 5500;
		case joaat("PAUSE_MENU_EVENT_SCRIPT"):
			return 4700;
		case joaat("PAUSE_MENU_SCRIPT"):
			return 2000;
		case joaat("ABILITY_CARD_EVENTS"):
			return 801;
		case joaat("SAVE_MENU_EVENTS"):
			return 2024;
		case joaat("RANDOM_EVENT"):
			return 2048;
		case joaat("CAMP_ITEM"):
			return 6096;
		case joaat("MP_RANDOM_EVENT"):
			return 3080;
		case joaat("SHOP"):
			return 6005;
		case joaat("SHOP_EVENTS"):
			return 2027;
		case joaat("SATCHEL_EVENTS"):
			return 2025;
		case joaat("MAP_EVENTS"):
			return 2026;
		case joaat("HOME_ROBBERY"):
			return 10000;
		case joaat("SHOP_ROBBERY"):
			return 7302;
		case joaat("SCRIPT_XML"):
			return 4592;
		case joaat("MISSION_CREATOR"):
			return 40500;
		case joaat("INSTANCED_CONTENT"):
			return 63250;
		case joaat("MISSION"):
			return 45000;
		case joaat("CHARACTER_REROLL"):
			return 10003;
		case joaat("MISSION_INTRO"):
			return 6000;
		case joaat("MINIGAME_INTRO"):
			return 6001;
		case joaat("MINIGAME"):
			return 6500;
		case joaat("TRANSITION"):
			return 25500;
		case joaat("RCM"):
			return 7300;
		case joaat("EVENT_AREA"):
			return 5502;
		case joaat("HIDEOUT"):
			return 2049;
		case joaat("AMBUSH"):
			return 1025;
		case joaat("GANG_CAMPFIRE"):
			return 1200;
		case joaat("TRAIN_ROB"):
			return 2300;
		case joaat("MP_MISSION_DOWNLOADER"):
			return 3088;
		case joaat("NET_MAIN"):
			return 6002;
		case joaat("CAMP"):
			return 5000;
		case joaat("COMPANION"):
			return 513;
		case joaat("CAMP_VIGNETTE"):
			return 6004;
		case joaat("SHOWS"):
			return 2051;
		case joaat("UPDATE"):
			return 1300;
		case joaat("LOANSHARK"):
			return 7000;
		case joaat("COMPANION_ACTIVITY"):
			return 7301;
		case joaat("COMPANION_ACTIVITY_INVITE"):
			return 6003;
		case joaat("REPLAY_LAUNCHER"):
			return 6006;
		case joaat("PLAYER_MENU_SCRIPT"):
			return 1400;
		case joaat("POSSE_VERSUS_RACE"):
			return 1600;
		case joaat("POSSE_FEUD"):
			return 1800;
		case joaat("MP_MISSION_LOBBY"):
			return 10001;
		case joaat("NET_FETCH"):
			return 7600;
		case joaat("NET_GUN_FOR_HIRE_OFFLINE"):
			return 6010;
		case joaat("NET_GUN_FOR_HIRE_ONLINE"):
			return 3090;
		case joaat("MP_UGC_TRANSITION"):
			return 14335;
		case joaat("SOAK_TEST"):
			return 4088;
		case joaat("NETWORK_BOT"):
			return 4096;
		case joaat("DEBUG_SCRIPT"):
			return 4080;
		case joaat("DEBUG_MENU"):
			return 50000;
		case joaat("TOOL_MEGA"):
			return 70000;
		case joaat("DEBUG_STEAL_VEHICLE"):
			return 32768;
		case joaat("VIRTUALIZATION_UNIT_TEST_SUPPORT"):
			return 129;
		default:
			break;
	}
	return 0;
}

void func_1847()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_2345(&(Global_40.f_6563.f_274[iVar0 /*20*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_437(&(Global_1391438.f_7[iVar0 /*99*/]));
		iVar0++;
	}
	Global_40.f_6563.f_273 = 0;
}

bool func_1854(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HAI_BANK_ROBBERY_01"):
			if (!__LIB_0__::func_26())
			{
				return false;
			}
			break;
	}
	return true;
}

int func_1857(int iParam0)
{
	switch (iParam0)
	{
		case 654481153:
		case 1784895540:
			return 1441230304;
		case -2036347356:
		case -1700356309:
		case -1341684320:
			return 652625673;
		case -919476462:
		case 380107708:
		case 565221344:
			return 1623482561;
		default:
			break;
	}
	return 176656832;
}

bool func_1858(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_753(iParam0);
	return Global_40.f_7039[__LIB_0__::func_754(iVar0, 1) /*2*/].f_1;
}

bool func_1859(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_753(iParam0);
	return Global_40.f_7039[__LIB_0__::func_754(iVar0, 1) /*2*/];
}

bool func_1865(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 11)
	{
		return false;
	}
	return true;
}

Vector3 func_1866(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2109.1f, -604f, 41.6f;
		case 5:
			return 2636.5f, -1284.3f, 52.3f;
		case 26:
			return -1801.4f, -410.9f, 152.8f;
		case 38:
			return -837.69f, -1334.25f, -146f;
		case 69:
			return 1429.2f, 332.8f, 88.5f;
		case 76:
			return -288.7f, 730.9f, 117f;
		case 78:
			return 2928.1f, 1331.7f, 44f;
		case 92:
			return 2959.2f, 525.8f, 44.6f;
		case 105:
			return 1365f, -1264.6f, 78.3f;
		case 115:
			return -5513.1f, -2936.4f, -2.1f;
		case 120:
			return -3680.5f, -2607.9f, -14f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

char* func_1867(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "BLIP_TOWN_LAGRAS";
		case 5:
			return "BLIP_TOWN_SAINT_DENIS";
		case 26:
			return "BLIP_TOWN_STRAWBERRY";
		case 38:
			return "BLIP_TOWN_BLACKWATER";
		case 69:
			return "BLIP_TOWN_EMERALDRANCH";
		case 76:
			return "BLIP_TOWN_VALENTINE";
		case 78:
			return "BLIP_TOWN_ANNESBURG";
		case 92:
			return "BLIP_TOWN_VANHORNPOST";
		case 105:
			return "BLIP_TOWN_RHODES";
		case 115:
			return "BLIP_TOWN_TUMBLEWEED";
		case 120:
			return "BLIP_TOWN_ARMADILLO";
		default:
			break;
	}
	return "BLIP_TOWN";
}

void func_1868(int iParam0, char* sParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_36308[iParam0], sParam1);
		}
	}
}

void func_1869(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 78:
			*iParam1 = 0;
			*uParam2 = 3;
			break;
		case 38:
			*iParam1 = 6;
			*uParam2 = 17;
			break;
		case 69:
			*iParam1 = 18;
			*uParam2 = 21;
			break;
		case 3:
			*iParam1 = 22;
			*uParam2 = 22;
			break;
		case 5:
			*iParam1 = 36;
			*uParam2 = 55;
			break;
		case 105:
			*iParam1 = 25;
			*uParam2 = 33;
			break;
		case 101:
			*iParam1 = 35;
			*uParam2 = 35;
			break;
		case 23:
			*iParam1 = 23;
			*uParam2 = 24;
			break;
		case 26:
			*iParam1 = 60;
			*uParam2 = 65;
			break;
		case 76:
			*iParam1 = 68;
			*uParam2 = 80;
			break;
		case 92:
			*iParam1 = 82;
			*uParam2 = 86;
			break;
		case 28:
			*iParam1 = 87;
			*uParam2 = 89;
			break;
		case 115:
			*iParam1 = 90;
			*uParam2 = 94;
			break;
		case 120:
			*iParam1 = 95;
			*uParam2 = 96;
			break;
		case 117:
			*iParam1 = 99;
			*uParam2 = 100;
			break;
		case 71:
			*iParam1 = 56;
			*uParam2 = 56;
			break;
		case 98:
			*iParam1 = 57;
			*uParam2 = 57;
			break;
		case 9:
			*iParam1 = 58;
			*uParam2 = 58;
			break;
		case 79:
			*iParam1 = 59;
			*uParam2 = 59;
			break;
		case 13:
			*iParam1 = 4;
			*uParam2 = 4;
			break;
		case 14:
			*iParam1 = 5;
			*uParam2 = 5;
			break;
		case 90:
		case 128:
			*iParam1 = 34;
			*uParam2 = 34;
			break;
		case 113:
			*iParam1 = 67;
			*uParam2 = 67;
			break;
		case -1:
			*iParam1 = 101;
			*uParam2 = 101;
			break;
	}
}

int func_1870(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 3;
		case 38:
			return 17;
		case 69:
			return 21;
		case 13:
			return 4;
		case 23:
			return 24;
		case 14:
			return 5;
		case 105:
			return 33;
		case 101:
			return 35;
		case 5:
			return 55;
		case 76:
			return 80;
		case 28:
			return 89;
		case 115:
			return 94;
		case 120:
			return 96;
		case 26:
			return 65;
		case 3:
			return 22;
		case 90:
			return 34;
		case 92:
			return 86;
		case 113:
			return 67;
		case 123:
			return 98;
		case 117:
			return 100;
		case 98:
			return 57;
		case 9:
			return 58;
		case 79:
			return 59;
		default:
			break;
	}
	return -1;
}

void func_1871(int iParam0)
{
	if (*iParam0 == 66)
	{
		*iParam0 = 67;
	}
	if (*iParam0 == 97)
	{
		*iParam0 = 98;
	}
	if (*iParam0 == 81)
	{
		*iParam0 = 82;
	}
}

void func_1872(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar1 = __LIB_0__::func_12();
	bVar2 = false;
	if (bParam1)
	{
		if (iVar1 != -1)
		{
			iVar0 = __LIB_0__::func_560(iVar1, iParam0);
			if (iVar0 != -1)
			{
				__LIB_0__::func_325(&(Global_1914319.f_3[iParam0 /*446*/].f_14));
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_14))
			{
				iVar0 = func_2349(iParam0);
				if (iVar0 != -1)
				{
					Global_1914319.f_3[iParam0 /*446*/].f_14 = MAP::_BLIP_ADD_FOR_COORD(-936216634, __LIB_4__::func_846(iVar0));
					MAP::_BLIP_SET_MODIFIER(Global_1914319.f_3[iParam0 /*446*/].f_14, 580546400);
					MAP::_BLIP_SET_MODIFIER(Global_1914319.f_3[iParam0 /*446*/].f_14, 847579139);
					iVar3 = __LIB_18__::func_768(iParam0);
					if (iVar3 != 0)
					{
						MAP::SET_BLIP_SPRITE(Global_1914319.f_3[iParam0 /*446*/].f_14, iVar3, true);
					}
				}
				Global_1914319.f_3[iParam0 /*446*/].f_15 = __LIB_0__::func_485();
				Global_1914319.f_3[iParam0 /*446*/].f_16 = 0;
			}
			else if (Global_1914319.f_3[iParam0 /*446*/].f_16 == 0)
			{
				if ((__LIB_0__::func_485() - Global_1914319.f_3[iParam0 /*446*/].f_15) > 15000)
				{
					MAP::_BLIP_REMOVE_MODIFIER(Global_1914319.f_3[iParam0 /*446*/].f_14, 580546400);
					MAP::_BLIP_REMOVE_MODIFIER(Global_1914319.f_3[iParam0 /*446*/].f_14, 847579139);
					Global_1914319.f_3[iParam0 /*446*/].f_16 = 1;
				}
				iVar0 = func_2349(iParam0);
				if (iVar0 != -1)
				{
					MAP::SET_BLIP_COORDS(Global_1914319.f_3[iParam0 /*446*/].f_14, __LIB_4__::func_846(iVar0));
				}
			}
		}
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_14))
	{
		__LIB_0__::func_325(&(Global_1914319.f_3[iParam0 /*446*/].f_14));
		Global_1914319.f_3[iParam0 /*446*/].f_16 = 1;
	}
}

int func_1873(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 0;
		case 5:
			return 1;
		case 26:
			return 2;
		case 38:
			return 3;
		case 69:
			return 4;
		case 76:
			return 5;
		case 78:
			return 6;
		case 92:
			return 7;
		case 105:
			return 8;
		case 115:
			return 9;
		case 120:
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_1888(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_1__::func_917(iParam0) || !__LIB_1__::func_918(iParam1))
	{
		return false;
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (((((((iParam1 == 33 || iParam1 == 34) || iParam1 == 15) || iParam1 == 16) || iParam1 == 12) || iParam1 == 13) || iParam1 == 14) || iParam1 == 1)
		{
			return false;
		}
		if (iParam1 == 9 && !__LIB_16__::func_428(iParam0))
		{
			return false;
		}
		if ((__LIB_0__::func_113() && iParam0 >= 6) && iParam0 <= 17)
		{
			return false;
		}
		if (iParam0 == 18 && !__LIB_1__::func_187(94))
		{
			return false;
		}
		if (iParam1 == 19)
		{
			if (__LIB_0__::func_12() != __LIB_1__::func_953(__LIB_0__::func_317()))
			{
				return false;
			}
			switch (__LIB_0__::func_317())
			{
				case 1:
					return iParam0 == 56;
				case 2:
					return iParam0 == 57;
				case 3:
					return iParam0 == 58;
				case 6:
					return iParam0 == 59;
				default:
					break;
			}
			return false;
		}
	}
	if (iParam1 == 9)
	{
		iVar0 = __LIB_16__::func_388(iParam0, iParam1);
	}
	else
	{
		iVar0 = __LIB_19__::func_324(iParam1);
	}
	if (__LIB_10__::func_636(iVar0) == 0)
	{
		return false;
	}
	return true;
}

void func_1894(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_918(iParam1))
	{
		return;
	}
	if (iParam1 != __LIB_1__::func_921(iParam0))
	{
		return;
	}
	iVar0 = __LIB_10__::func_666(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 != -1)
	{
		if (!__LIB_1__::func_59(iVar0))
		{
			__LIB_9__::func_945(&iVar0, 0);
			Global_1914319.f_15936[iParam0 /*6*/] = -1;
			if (Global_1914319.f_15936[iParam0 /*6*/].f_5)
			{
				Global_1914319.f_15936[iParam0 /*6*/].f_5 = 0;
			}
			return;
		}
	}
	if (iParam1 == 9)
	{
		iVar1 = __LIB_16__::func_265(iVar0);
		if (__LIB_10__::func_637(__LIB_3__::func_322(iVar0)) != __LIB_14__::func_132(iParam0, iParam1))
		{
			if (iVar1 != 0)
			{
				MAP::SET_BLIP_SPRITE(iVar1, __LIB_14__::func_132(iParam0, iParam1), true);
				__LIB_1__::func_69(iVar0, __LIB_16__::func_388(iParam0, iParam1));
			}
		}
		switch (__LIB_16__::func_389(&(Global_1914319.f_17042)))
		{
			case 0:
				MAP::_BLIP_REMOVE_MODIFIER(iVar1, 1351440471);
				MAP::_BLIP_REMOVE_MODIFIER(iVar1, 2068327888);
				MAP::_BLIP_REMOVE_MODIFIER(iVar1, -586092192);
				break;
			case 1:
				MAP::_BLIP_REMOVE_MODIFIER(iVar1, 2068327888);
				MAP::_BLIP_REMOVE_MODIFIER(iVar1, -586092192);
				MAP::_BLIP_SET_MODIFIER(iVar1, 1351440471);
				break;
			case 2:
				MAP::_BLIP_REMOVE_MODIFIER(iVar1, 1351440471);
				MAP::_BLIP_REMOVE_MODIFIER(iVar1, -586092192);
				MAP::_BLIP_SET_MODIFIER(iVar1, 2068327888);
				break;
			case 3:
				MAP::_BLIP_REMOVE_MODIFIER(iVar1, 1351440471);
				MAP::_BLIP_REMOVE_MODIFIER(iVar1, 2068327888);
				MAP::_BLIP_SET_MODIFIER(iVar1, -586092192);
				break;
			default:
				MAP::_BLIP_REMOVE_MODIFIER(iVar1, 1351440471);
				MAP::_BLIP_REMOVE_MODIFIER(iVar1, 2068327888);
				MAP::_BLIP_REMOVE_MODIFIER(iVar1, -586092192);
				break;
		}
	}
	if (iParam0 == Global_1934051.f_116 && !Global_1934051.f_118)
	{
		if (!__LIB_1__::func_935(iParam0, -2147483648))
		{
			__LIB_1__::func_96(iVar0, -1186550032);
			__LIB_1__::func_937(iParam0, 32);
			if (Global_1914319.f_15936[iParam0 /*6*/].f_5)
			{
				__LIB_1__::func_96(iVar0, __LIB_1__::func_300(__LIB_9__::func_843(iParam0)));
				Global_1914319.f_15936[iParam0 /*6*/].f_5 = 0;
			}
			__LIB_3__::func_559(iVar0, 580546400);
			__LIB_3__::func_559(iVar0, 847579139);
			__LIB_1__::func_936(iParam0, -2147483648);
		}
	}
	else if (__LIB_18__::func_927(iParam0, iParam1))
	{
		if (!__LIB_1__::func_935(iParam0, 32))
		{
			__LIB_1__::func_96(iVar0, -1446646876);
			__LIB_1__::func_96(iVar0, 724623647);
			__LIB_1__::func_937(iParam0, 16);
			__LIB_1__::func_937(iParam0, 64);
			__LIB_3__::func_559(iVar0, -1186550032);
			if (iParam1 == __LIB_1__::func_921(iParam0))
			{
				if (MAP::DOES_BLIP_EXIST(Global_1914319.f_3[iParam1 /*446*/].f_14))
				{
					MAP::_BLIP_SET_MODIFIER(Global_1914319.f_3[iParam1 /*446*/].f_14, -1186550032);
				}
			}
			__LIB_1__::func_936(iParam0, 32);
		}
	}
	else if ((func_2374(iParam0) || ((Global_1914319.f_3[iParam1 /*446*/].f_3 == 2 || Global_1914319.f_3[iParam1 /*446*/].f_3 == 0) && !__LIB_16__::func_390(iParam0))) && __LIB_9__::func_843(iParam0) == __LIB_0__::func_12())
	{
		if (!__LIB_1__::func_935(iParam0, 16))
		{
			__LIB_1__::func_96(iVar0, -1446646876);
			__LIB_1__::func_96(iVar0, -1186550032);
			__LIB_1__::func_96(iVar0, 580546400);
			__LIB_1__::func_96(iVar0, 847579139);
			__LIB_1__::func_937(iParam0, 32);
			__LIB_1__::func_937(iParam0, 64);
			__LIB_1__::func_937(iParam0, -2147483648);
			__LIB_3__::func_559(iVar0, 724623647);
			__LIB_1__::func_936(iParam0, 16);
		}
	}
	else if ((__LIB_16__::func_390(iParam0) && __LIB_9__::func_843(iParam0) == __LIB_0__::func_12()) || !(__LIB_4__::func_216(iParam0) || __LIB_2__::func_117(__LIB_3__::func_737(iParam1))))
	{
		if (!__LIB_1__::func_935(iParam0, 64))
		{
			__LIB_1__::func_96(iVar0, 724623647);
			__LIB_1__::func_96(iVar0, -1186550032);
			__LIB_1__::func_96(iVar0, 580546400);
			__LIB_1__::func_96(iVar0, 847579139);
			__LIB_1__::func_937(iParam0, 32);
			__LIB_1__::func_937(iParam0, 16);
			__LIB_1__::func_937(iParam0, -2147483648);
			__LIB_3__::func_559(iVar0, -1446646876);
			__LIB_1__::func_936(iParam0, 64);
		}
	}
	else
	{
		if (__LIB_1__::func_935(iParam0, 32))
		{
			__LIB_1__::func_96(iVar0, -1186550032);
			if (iParam1 == __LIB_1__::func_921(iParam0))
			{
				if (MAP::DOES_BLIP_EXIST(Global_1914319.f_3[iParam1 /*446*/].f_14))
				{
					MAP::_BLIP_REMOVE_MODIFIER(Global_1914319.f_3[iParam1 /*446*/].f_14, -1186550032);
				}
			}
			__LIB_1__::func_937(iParam0, 32);
		}
		if (__LIB_1__::func_935(iParam0, -2147483648))
		{
			__LIB_1__::func_96(iVar0, 580546400);
			__LIB_1__::func_96(iVar0, 847579139);
			__LIB_1__::func_937(iParam0, -2147483648);
		}
		if (__LIB_1__::func_935(iParam0, 16))
		{
			__LIB_1__::func_96(iVar0, 724623647);
			__LIB_1__::func_937(iParam0, 16);
		}
		if (__LIB_1__::func_935(iParam0, 64))
		{
			__LIB_1__::func_96(iVar0, -1446646876);
			__LIB_1__::func_937(iParam0, 64);
		}
		if (__LIB_1__::func_921(iParam0) == 2)
		{
			iVar2 = __LIB_14__::func_130();
			__LIB_16__::func_266(Global_1914319.f_15936[iParam0 /*6*/], iVar2);
			if (__LIB_1__::func_931(__LIB_2__::func_702()) > 0)
			{
				__LIB_3__::func_559(Global_1914319.f_15936[iParam0 /*6*/], 37805592);
			}
			else
			{
				__LIB_1__::func_96(Global_1914319.f_15936[iParam0 /*6*/], 37805592);
			}
		}
	}
}

bool func_1917()
{
	if (__LIB_0__::func_2() != 0)
	{
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(Global_35) && PED::IS_PED_ON_VEHICLE(Global_35, false))
	{
		return true;
	}
	return false;
}

bool func_1919(var uParam0, vector3 vParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!__LIB_0__::func_86(uParam0->f_13[iVar0 /*9*/].f_1) && __LIB_0__::func_636(vParam1, uParam0->f_13[iVar0 /*9*/].f_1) < uParam0->f_4)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1954()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_13__::func_911(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1955(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return Global_1055058[iParam0 /*116*/].f_15;
}

bool func_1956(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return __LIB_11__::func_863(Global_1055058[iParam0 /*116*/].f_15.f_1, iParam1);
}

void func_1968(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char[] cVar0[8];
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_113())
	{
		__LIB_3__::func_727(iParam0, 1);
	}
	if (iParam0 == 85)
	{
		MISC::_0xCC3EDC5614B03F61(18);
	}
	else if (iParam0 == 86)
	{
		MISC::_0xCC3EDC5614B03F61(19);
	}
	else if (iParam0 == 87)
	{
		MISC::_0xCC3EDC5614B03F61(20);
	}
	else if (iParam0 == 135)
	{
		MISC::_0xCC3EDC5614B03F61(73);
	}
	else if (iParam0 == 20)
	{
		MISC::_0xCC3EDC5614B03F61(6);
	}
	else if (iParam0 == 19)
	{
		MISC::_0xCC3EDC5614B03F61(7);
	}
	else if (iParam0 == 12)
	{
		MISC::_0xCC3EDC5614B03F61(10);
	}
	else if (iParam0 == 16)
	{
		MISC::_0xCC3EDC5614B03F61(11);
	}
	else if (iParam0 == 17)
	{
		MISC::_0xCC3EDC5614B03F61(13);
	}
	else if (iParam0 == 18)
	{
		MISC::_0xCC3EDC5614B03F61(14);
	}
	else if (iParam0 == 14)
	{
		MISC::_0xCC3EDC5614B03F61(15);
	}
	if (iParam0 == 95)
	{
		if (!__LIB_0__::func_13(32768))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("SP_ACHIEVEMENTS"), joaat("ACH_FWB")))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_FWB_CLEMENS"), 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!__LIB_0__::func_113())
		{
			Global_1347702[iParam0 /*49*/].f_35 = 104;
			Global_1347702[104 /*49*/].f_48 = Global_1347702[iParam0 /*49*/].f_15;
		}
	}
	__LIB_19__::func_177(iParam0, 0, iParam3);
	if (__LIB_0__::func_5(Global_1347702[iParam0 /*49*/].f_35))
	{
		__LIB_18__::func_497(Global_1347702[iParam0 /*49*/].f_35);
		if (iParam1 == 1)
		{
			__LIB_4__::func_471(Global_1347702[iParam0 /*49*/].f_35, 0);
			if (__LIB_11__::func_197(iParam0))
			{
				Global_1347702[Global_1347702[iParam0 /*49*/].f_35 /*49*/].f_43 = Global_1347702[iParam0 /*49*/].f_43;
			}
		}
	}
	else
	{
		__LIB_18__::func_259();
	}
	if (!__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 1) && !__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 33554432))
	{
		if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 262144))
		{
			if (bParam5)
			{
				__LIB_10__::func_709(iParam0);
			}
			bParam5 = false;
			cVar0 = __LIB_1__::func_613(Global_1347702[iParam0 /*49*/].f_15);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
			{
				MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cVar0), 2);
			}
			__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 4);
	}
	if (!__LIB_0__::func_13(32768))
	{
		func_2398(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

char* func_1991(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "interiors/interior(%i)";
		case 1:
			return "interiors/interior";
		case 2:
			return ":name";
		case 3:
			return ":bCanSteal";
		case 4:
			return ":bCanBuy";
		case 5:
			return ":bCanInspect";
		case 6:
			return ":bDisableLooting";
	}
	return "";
}

bool func_2005()
{
	vector3 vVar0;
	if (FIRE::GET_CLOSEST_FIRE_POS(&vVar0, Global_36))
	{
		if (BUILTIN::VDIST(vVar0, Global_36) < 5f)
		{
			return true;
		}
	}
	return false;
}

void func_2051(int iParam0, var uParam1)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return;
	}
	if (Global_1572887.f_12 == -1)
	{
		*uParam1 = Global_40.f_358[iParam0 /*12*/].f_6;
		uParam1->f_1 = Global_40.f_358[iParam0 /*12*/].f_6.f_1;
		uParam1->f_2 = Global_40.f_358[iParam0 /*12*/].f_6.f_2;
		uParam1->f_3 = Global_40.f_358[iParam0 /*12*/].f_6.f_3;
		uParam1->f_4 = Global_40.f_358[iParam0 /*12*/].f_6.f_4;
		uParam1->f_5 = Global_40.f_358[iParam0 /*12*/].f_6.f_5;
		return;
	}
	*uParam1 = Global_1058888.f_42266[iParam0 /*12*/].f_6;
	uParam1->f_1 = Global_1058888.f_42266[iParam0 /*12*/].f_6.f_1;
	uParam1->f_2 = Global_1058888.f_42266[iParam0 /*12*/].f_6.f_2;
	uParam1->f_3 = Global_1058888.f_42266[iParam0 /*12*/].f_6.f_3;
	uParam1->f_4 = Global_1058888.f_42266[iParam0 /*12*/].f_6.f_4;
	uParam1->f_5 = Global_1058888.f_42266[iParam0 /*12*/].f_6.f_5;
}

int func_2052(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	if (uParam0->f_4 == -15)
	{
		return 0;
	}
	if (*uParam0 != Global_40.f_7729)
	{
		bVar0 = true;
	}
	if (__LIB_12__::func_558(1, &iVar3))
	{
		if (uParam0->f_1 == iVar3)
		{
			bVar4 = true;
		}
	}
	else if (uParam0->f_1 == 0)
	{
		bVar4 = true;
	}
	if (__LIB_12__::func_558(1, &iVar3))
	{
		if (uParam0->f_2 == iVar3)
		{
			bVar5 = true;
		}
	}
	else if (uParam0->f_2 == 0)
	{
		bVar5 = true;
	}
	if (__LIB_12__::func_558(1, &iVar3))
	{
		if (uParam0->f_3 == iVar3)
		{
			bVar6 = true;
		}
	}
	else if (uParam0->f_3 == 0)
	{
		bVar6 = true;
	}
	if ((!bVar4 && !bVar5) && !bVar6)
	{
		bVar1 = true;
	}
	if (__LIB_0__::func_27(uParam0->f_5, 1) != __LIB_3__::func_425(&uVar7))
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		if (bVar0)
		{
			return 1;
		}
	}
	if (bVar0 && bVar1)
	{
		return 1;
	}
	return 0;
}

bool func_2053(var uParam0)
{
	return __LIB_0__::func_27(uParam0->f_5, 2);
}

int func_2073(int iParam0, int iParam1)
{
	int iVar0;
	switch (iParam1)
	{
		case 3:
			iVar0 = func_2082(iParam0, 0);
			iVar0 = (iVar0 + func_2082(iParam0, 2));
			iVar0 = (iVar0 + func_2082(iParam0, 11));
			return iVar0;
		case 0:
			iVar0 = func_2082(iParam0, 1);
			iVar0 = (iVar0 + func_2082(iParam0, 7));
			iVar0 = (iVar0 + func_2082(iParam0, 6));
			iVar0 = (iVar0 + func_2082(iParam0, 12));
			return iVar0;
		case 2:
			iVar0 = func_2082(iParam0, 3);
			iVar0 = (iVar0 + func_2082(iParam0, 10));
			return iVar0;
		case 1:
			iVar0 = func_2082(iParam0, 4);
			iVar0 = (iVar0 + func_2082(iParam0, 9));
			return iVar0;
		case 4:
			return func_2082(iParam0, 8);
		case 5:
			iVar0 = func_2082(iParam0, 13);
			iVar0 = (iVar0 + func_2082(iParam0, 14));
			iVar0 = (iVar0 + func_2082(iParam0, 15));
			iVar0 = (iVar0 + func_2082(iParam0, 16));
			return iVar0;
		default:
			break;
	}
	return 0;
}

int func_2074(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 != 0)
	{
		iVar0 = __LIB_10__::func_645(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_2450(iParam0, iVar1);
		if (iVar2 == -1)
		{
			return 0;
		}
		return Global_17504.f_2205[iVar2 /*2*/].f_1;
	}
	return 0;
}

int func_2082(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 != -1)
	{
		iVar0 = func_2450(iParam0, iParam1);
		if (iVar0 == -1)
		{
			return 0;
		}
		return Global_17504.f_2205[iVar0 /*2*/].f_1;
	}
	return 0;
}

bool func_2091(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	iVar0 = __LIB_0__::func_23();
	iVar1 = __LIB_3__::func_562(iParam0, iParam1);
	__LIB_9__::func_36(iVar0, iVar1, &uVar2, &uVar3, &iVar4, &iVar5, &uVar6, &uVar7);
	if (iVar5 >= iParam2 && iParam2 > 0)
	{
		return true;
	}
	if (iVar4 > iParam3 && iParam3 > 0)
	{
		return true;
	}
	return false;
}

bool func_2092()
{
	int iVar0;
	int iVar1;
	var uVar2;
	switch (__LIB_0__::func_12())
	{
		case 76:
			iVar0 = 75;
			iVar1 = 6;
			break;
		case 26:
			iVar0 = 61;
			iVar1 = 3;
			break;
		case 78:
			iVar0 = 0;
			iVar1 = 6;
			break;
		case 105:
			iVar0 = 28;
			iVar1 = 3;
			break;
	}
	if (!__LIB_10__::func_716(iVar1, -1))
	{
		return false;
	}
	if (__LIB_10__::func_696(iVar0))
	{
		return false;
	}
	if (!__LIB_3__::func_339(iVar0))
	{
		return false;
	}
	if (__LIB_3__::func_563(iVar1, iVar0))
	{
		return false;
	}
	if (__LIB_11__::func_159(iVar1))
	{
		return false;
	}
	if (__LIB_10__::func_696(iVar0))
	{
		return false;
	}
	if (func_2106(iVar1, iVar0, &uVar2))
	{
		return false;
	}
	return true;
}

int func_2096()
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (!__LIB_3__::func_772(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 3, false);
	}
	if (!__LIB_3__::func_772(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	}
	if (!__LIB_3__::func_772(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 1, false);
	}
	if (!__LIB_3__::func_772(&iVar0))
	{
		iVar0 = 0;
	}
	if (!__LIB_3__::func_772(&iVar0))
	{
		iVar0 = func_2455(268435584, 0);
	}
	if (!__LIB_3__::func_772(&iVar0))
	{
		return 0;
	}
	return 1;
}

bool func_2106(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			*uParam2 = 1;
			return true;
		}
	}
	if (__LIB_1__::func_935(iParam1, 1048576))
	{
		*uParam2 = 4;
		return true;
	}
	if (__LIB_0__::func_1(Global_1935630, 2097152))
	{
		*uParam2 = 4;
		return true;
	}
	if (__LIB_3__::func_563(iParam0, iParam1))
	{
		*uParam2 = 3;
		return true;
	}
	if (__LIB_9__::func_843(iParam1) == 105 && __LIB_5__::func_219(21))
	{
		*uParam2 = 4;
		return true;
	}
	if (__LIB_10__::func_667(iParam0, &iVar0))
	{
		if (!__LIB_11__::func_164(iParam1))
		{
			if (Global_1393529.f_3 == iVar0 && __LIB_9__::func_578(Global_1393529.f_3, 0, &(Global_1393529.f_256), &(Global_1393529.f_284), 0, 0))
			{
				*uParam2 = 5;
				return true;
			}
			if (!__LIB_14__::func_134(iParam0))
			{
				*uParam2 = 6;
				return true;
			}
			if (PED::IS_PED_FLEEING(iVar0))
			{
				*uParam2 = 6;
				return true;
			}
			if (TASK::GET_IS_TASK_ACTIVE(iVar0, 0))
			{
				*uParam2 = 7;
				return true;
			}
		}
	}
	else if (__LIB_1__::func_918(iParam0))
	{
		if (__LIB_0__::func_29(Global_1914319.f_3[iParam0 /*446*/].f_21))
		{
			iVar1 = __LIB_0__::func_120(Global_1914319.f_3[iParam0 /*446*/].f_21);
			if (iVar1 != 0 && !PERSCHAR::_0x4AFC7288C77238B3(iVar1))
			{
				*uParam2 = 6;
				return true;
			}
		}
	}
	return false;
}

bool func_2110(int iParam0, int iParam1)
{
	return func_2469(iParam0, iParam1) > 0;
}

bool func_2122()
{
	var uVar0;
	if (__LIB_3__::func_425(&uVar0))
	{
		return false;
	}
	if (!__LIB_0__::func_181())
	{
		if (__LIB_3__::func_564(114, 1) != 1)
		{
			if (__LIB_0__::func_12() == 76)
			{
				if (__LIB_1__::func_185(5))
				{
					if (__LIB_3__::func_564(114, 2) != 1)
					{
						__LIB_3__::func_461(114, 2, 1);
						__LIB_3__::func_539(114, 0, __LIB_0__::func_23());
						return false;
					}
					else if (func_2091(114, 0, 1, 0) && !func_2091(114, 0, 8, 0))
					{
						return true;
					}
				}
			}
		}
		if (__LIB_3__::func_564(114, 2) != 1)
		{
			if (__LIB_0__::func_12() == 105)
			{
				if (__LIB_1__::func_185(21))
				{
					if (__LIB_3__::func_564(114, 2) != 2)
					{
						__LIB_3__::func_461(114, 2, 2);
						__LIB_3__::func_539(114, 1, __LIB_0__::func_23());
						return false;
					}
					if (func_2091(114, 1, 1, 0) && !func_2091(114, 1, 8, 0))
					{
						return true;
					}
				}
			}
		}
		if (__LIB_3__::func_564(114, 3) != 1)
		{
			if (__LIB_0__::func_12() == 5)
			{
				if (__LIB_1__::func_185(34))
				{
					if (__LIB_3__::func_564(114, 2) != 3)
					{
						__LIB_3__::func_461(114, 2, 3);
						__LIB_3__::func_539(114, 2, __LIB_0__::func_23());
						return false;
					}
					if (func_2091(114, 2, 1, 0) && !func_2091(114, 2, 8, 0))
					{
						return true;
					}
				}
			}
		}
		if (__LIB_3__::func_564(114, 4) != 1)
		{
			if (__LIB_0__::func_12() == 92)
			{
				if (__LIB_1__::func_185(55))
				{
					if (__LIB_3__::func_564(114, 2) != 4)
					{
						__LIB_3__::func_461(114, 2, 4);
						__LIB_3__::func_539(114, 3, __LIB_0__::func_23());
						return false;
					}
					if (func_2091(114, 3, 1, 0) && !func_2091(114, 3, 8, 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_2140(bool bParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_982(0);
	if (__LIB_7__::func_907(0, 128))
	{
		if (iVar0 != 1 || __LIB_7__::func_907(0, 16777216))
		{
			__LIB_8__::func_180(0, 0);
		}
	}
	else
	{
		if (iVar0 > 3)
		{
			__LIB_8__::func_180(0, 0);
		}
		if (__LIB_7__::func_908(0, 32768))
		{
			__LIB_8__::func_180(0, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 1:
					if (__LIB_7__::func_908(0, 4) && __LIB_7__::func_907(0, 16777216))
					{
						__LIB_8__::func_180(0, 0);
					}
					else if (__LIB_7__::func_908(0, 1024))
					{
						if (bParam0 || !__LIB_7__::func_907(0, 268435456))
						{
							__LIB_8__::func_181(0);
							func_2481(0, 0, "LOG_JOURN01", 0, !bParam0);
							__LIB_8__::func_85(0, 268435456);
						}
					}
					else
					{
						__LIB_8__::func_180(0, 0);
					}
					break;
				case 2:
					__LIB_8__::func_180(0, 0);
					break;
				case 3:
					if (__LIB_7__::func_908(0, 8))
					{
						__LIB_8__::func_180(0, 0);
					}
					else if (__LIB_7__::func_908(0, 256))
					{
						if (bParam0 || !__LIB_7__::func_907(0, 268435456))
						{
							__LIB_8__::func_181(0);
							func_2481(0, 0, "LOG_JOURN02", 0, !bParam0);
							__LIB_8__::func_85(0, 268435456);
						}
					}
					else
					{
						__LIB_8__::func_180(0, 0);
					}
					break;
				default:
					__LIB_8__::func_180(0, 0);
					break;
			}
		}
	}
}

void func_2141(bool bParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_982(1);
	if (__LIB_7__::func_907(1, 128))
	{
		__LIB_8__::func_180(1, 0);
	}
	else
	{
		if (iVar0 > 4)
		{
			__LIB_8__::func_180(1, 0);
		}
		if (__LIB_7__::func_908(1, 32768))
		{
			__LIB_8__::func_180(1, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 3:
					if (__LIB_7__::func_908(1, 128))
					{
						__LIB_8__::func_180(1, 0);
					}
					else if (__LIB_7__::func_908(1, 256))
					{
						if (bParam0 || !__LIB_7__::func_907(1, 268435456))
						{
							__LIB_8__::func_181(1);
							func_2481(1, 0, "HOME_JOURN01", 0, !bParam0);
							__LIB_8__::func_85(1, 268435456);
						}
					}
					else
					{
						__LIB_8__::func_180(1, 0);
					}
					break;
				default:
					__LIB_8__::func_180(1, 0);
					break;
			}
		}
	}
}

void func_2142(bool bParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_982(2);
	if (__LIB_7__::func_907(2, 128))
	{
		__LIB_8__::func_180(2, 0);
	}
	else
	{
		if (iVar0 > 3)
		{
			__LIB_8__::func_180(2, 0);
		}
		if (__LIB_7__::func_908(2, 32768) && !__LIB_1__::func_707(joaat("DOCUMENT_HOMESTEAD_DEED"), 1, 0))
		{
			__LIB_8__::func_180(2, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 1:
					if (__LIB_7__::func_908(2, 64))
					{
						__LIB_8__::func_180(2, 0);
					}
					else if (__LIB_7__::func_908(2, 256))
					{
						if (bParam0 || !__LIB_7__::func_907(2, 268435456))
						{
							__LIB_8__::func_181(2);
							func_2481(2, 0, "TRACKS_JOURN01", 0, !bParam0);
							__LIB_8__::func_85(2, 268435456);
						}
					}
					else
					{
						__LIB_8__::func_180(2, 0);
					}
					break;
				case 2:
					if (__LIB_7__::func_907(2, 262144))
					{
						__LIB_8__::func_180(2, 0);
					}
					else if (__LIB_7__::func_908(2, 4))
					{
						if (bParam0 || !__LIB_7__::func_907(2, 268435456))
						{
							__LIB_8__::func_181(2);
							func_2481(2, 0, "TRACKS_JOURN02", 0, !bParam0);
							__LIB_8__::func_85(2, 268435456);
						}
					}
					else
					{
						__LIB_8__::func_180(2, 0);
					}
					break;
				default:
					__LIB_8__::func_180(2, 0);
					break;
			}
		}
	}
}

Vector3 func_2178()
{
	return 2986.78f, 2189.64f, 167.23f;
}

Vector3 func_2180()
{
	if (!__LIB_0__::func_770(6, 4))
	{
		return 2977.75f, 2202.91f, 166.61f;
	}
	return __LIB_4__::func_55(6);
}

Vector3 func_2181()
{
	return 2960.95f, 2232.8f, 159.61f;
}

char* func_2187()
{
	if (__LIB_0__::func_91())
	{
		return HUD::_0xD8402B858F4DDD88(&Global_43802, HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_43802));
	}
	return "Inactive Cutscene";
}

bool func_2217(int iParam0)
{
	return Global_1327490[iParam0 /*11*/] != 0;
}

void func_2289(int iParam0)
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
				__LIB_10__::func_836(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
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
		__LIB_13__::func_10(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

bool func_2334(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	if (!func_1807(uParam0, 1024))
	{
		return false;
	}
	if (func_1807(uParam0, 256))
	{
		iVar0 = (CLOCK::GET_CLOCK_HOURS() * 60 + CLOCK::GET_CLOCK_MINUTES());
		if (iVar0 >= 330 && iVar0 <= 1216)
		{
			return false;
		}
	}
	if (func_1807(uParam0, 512))
	{
		iVar1 = (CLOCK::GET_CLOCK_HOURS() * 60 + CLOCK::GET_CLOCK_MINUTES());
		if (iVar1 >= 1080 && iVar1 <= 1410)
		{
			return false;
		}
	}
	if (uParam0->f_10 != -1f && __LIB_0__::func_94(Global_35, uParam0->f_5, 0) < uParam0->f_10)
	{
		return false;
	}
	__LIB_9__::func_92(uParam0->f_1, &uVar2, &iVar3, &iVar4, &iVar5, &uVar6, &uVar7);
	iVar8 = ((MISC::ABSI(iVar5) * 24 + MISC::ABSI(iVar4)) * 60 + MISC::ABSI(iVar3));
	return iVar8 >= uParam0->f_12;
}

void func_2337(var uParam0)
{
	struct<8> Var0;
	int iVar8;
	if (func_1807(uParam0, 32))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2);
		}
		if (func_1807(uParam0, 16) && !func_1807(uParam0, 32))
		{
			func_2613();
		}
		__LIB_4__::func_804(uParam0, 32);
		return;
	}
	if (!func_1807(uParam0, 4))
	{
		Var0 = { func_2614() };
		uParam0->f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, 0, false, true);
		uParam0->f_4 = MISC::GET_GAME_TIMER();
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2))
		{
			__LIB_4__::func_804(uParam0, 4);
		}
		else
		{
			func_2613();
			__LIB_4__::func_804(uParam0, 32);
		}
	}
	else if (!func_1807(uParam0, 8))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2) && (uParam0->f_4 - MISC::GET_GAME_TIMER()) < 20000)
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_2, true) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_2, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2);
			}
			uParam0->f_4 = MISC::GET_GAME_TIMER();
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_2, true, false))
			{
				__LIB_4__::func_804(uParam0, 8);
			}
		}
		else
		{
			func_2613();
			__LIB_4__::func_804(uParam0, 32);
		}
	}
	else if (!func_1807(uParam0, 16))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2) && (uParam0->f_4 - MISC::GET_GAME_TIMER()) < 20000)
		{
			if (!PED::IS_PED_FALLING(Global_35))
			{
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_2);
				AUDIO::START_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				HUD::_HIDE_HUD_COMPONENT(-1679307491);
				__LIB_4__::func_804(uParam0, 16);
			}
		}
		else
		{
			func_2613();
			__LIB_4__::func_804(uParam0, 32);
		}
	}
	else if (!func_1807(uParam0, 32))
	{
		if ((!func_1807(uParam0, 64) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_2) > 0.5f)
		{
			__LIB_3__::func_98(uParam0->f_1);
			if (__LIB_12__::func_292(uParam0, 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !PED::IS_PED_DEAD_OR_DYING(Global_35, true))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						iVar8 = PED::GET_MOUNT(Global_35);
						if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_DEAD_OR_DYING(iVar8, true))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar8, -106.6597f, -31.3957f, 94.9457f, 161.648f, false, false, true);
						}
					}
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -111.0215f, -29.6917f, 94.7889f, 90.0609f, false, false, true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
			}
			if (__LIB_12__::func_292(uParam0, 1))
			{
				MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, false, false, 0f, false);
			}
			__LIB_4__::func_804(uParam0, 64);
		}
		if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_2, false)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_2, false))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2);
			}
			func_2613();
			__LIB_4__::func_804(uParam0, 32);
		}
	}
}

bool func_2339(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (__LIB_0__::func_730(Global_1392915[iVar0 /*12*/].f_2))
	{
		return false;
	}
	if (!__LIB_0__::func_90(&(Global_1392915[iVar0 /*12*/].f_3), 256))
	{
		return true;
	}
	if (__LIB_1__::func_901(iVar1) || __LIB_3__::func_200(iVar1))
	{
		return false;
	}
	return true;
}

bool func_2340(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_67(iParam0, &iVar0))
	{
		return false;
	}
	iVar1 = __LIB_1__::func_55(iVar0);
	if (!func_2615(iVar1))
	{
		return true;
	}
	else if (!__LIB_10__::func_668(iParam0))
	{
		return true;
	}
	return false;
}

void func_2345(var uParam0)
{
	struct<20> Var0;
	Var0.f_11 = 1;
	*uParam0 = { Var0 };
}

int func_2349(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	vVar2 = { 0f, 0f, 0f };
	fVar5 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (__LIB_1__::func_921(iVar0) == iParam0)
		{
			vVar2 = { __LIB_4__::func_846(iVar0) };
			if (!__LIB_0__::func_86(vVar2))
			{
				if (BUILTIN::VDIST2(Global_36, vVar2) < fVar5)
				{
					iVar1 = iVar0;
					fVar5 = BUILTIN::VDIST2(Global_36, vVar2);
				}
			}
		}
		iVar0++;
	}
	if (fVar5 != 1E+07f)
	{
		return iVar1;
	}
	return -1;
}

bool func_2374(int iParam0)
{
	int iVar0;
	var uVar1;
	if (__LIB_2__::func_805(iParam0))
	{
		return false;
	}
	if (__LIB_11__::func_171(iParam0) && __LIB_1__::func_935(iParam0, 1024))
	{
		return true;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if (iVar0 == 22 && __LIB_0__::func_2() == -1)
	{
		if (BUILTIN::VDIST2(__LIB_4__::func_846(iParam0), Global_36) < 325f && !__LIB_10__::func_667(iVar0, &uVar1))
		{
			return true;
		}
	}
	return __LIB_1__::func_935(iParam0, 16384);
}

void func_2398(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_746(iParam0) == 4)
	{
		__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam3)
			{
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		__LIB_0__::func_267(1);
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	bVar1 = __LIB_0__::func_2() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		__LIB_1__::func_421(0, 2);
		if (!bVar1 && bParam1)
		{
			__LIB_1__::func_755();
		}
	}
	else
	{
		__LIB_1__::func_142(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		__LIB_0__::func_870(iParam0);
	}
	else
	{
		Var2 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!__LIB_0__::func_13(32768))
		{
			Var4 = { __LIB_0__::func_14(joaat("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && __LIB_0__::func_291(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (__LIB_0__::func_76(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((__LIB_0__::func_76(iParam0) != 95 && __LIB_0__::func_76(iParam0) != 82) && !__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		__LIB_1__::func_641(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_1__::func_642(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		iVar9 = __LIB_1__::func_145(iParam0, &iVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_4__::func_253(iVar9, iVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = __LIB_0__::func_308(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_300(1);
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				__LIB_0__::func_747(45, 0, 1);
				break;
			case 8:
				iVar10 = __LIB_0__::func_310(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (__LIB_0__::func_311(__LIB_0__::func_76(iParam0)))
				{
					__LIB_1__::func_715(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 2:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 6:
				__LIB_0__::func_747(__LIB_0__::func_312(__LIB_0__::func_872(iParam0)), 0, 1);
				break;
			case 5:
				__LIB_0__::func_747(120, 0, 1);
				break;
		}
	}
	__LIB_1__::func_144(iParam0, 1);
	__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
	__LIB_1__::func_470(iParam0);
	if ((!__LIB_0__::func_291(iParam0) == 0 && bParam1) && __LIB_0__::func_2() == -1)
	{
		iVar12 = __LIB_1__::func_24(iParam0);
		if (iVar12 != -1)
		{
			__LIB_0__::func_867(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = __LIB_1__::func_194();
			if (iVar12 != -1)
			{
				__LIB_0__::func_867(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (__LIB_0__::func_76(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
			case 8:
				if (__LIB_0__::func_76(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
		}
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		if (bParam3)
		{
			__LIB_1__::func_242(iParam0, 6);
		}
		else
		{
			__LIB_1__::func_242(iParam0, 5);
		}
		__LIB_1__::func_470(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						__LIB_0__::func_873();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_1701(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1701(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1701(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1701(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1701(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1701(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1701(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1701(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1701(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1701(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_1701(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_1701(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_1701(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_1701(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_1701(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_1701(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_1701(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_1701(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_1701(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_1701(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_1701(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_1701(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1701(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1701(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1701(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_2646();
						func_2647(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						__LIB_1__::func_101();
						__LIB_0__::func_874();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(__LIB_1__::func_464(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_1701(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							__LIB_1__::func_240(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							__LIB_1__::func_240(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						__LIB_1__::func_630(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_2398(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[21 /*49*/].f_3)), iVar14);
						}
						break;
					case 20:
						__LIB_0__::func_875();
						break;
					case 26:
						__LIB_0__::func_876();
						break;
					case 17:
						__LIB_1__::func_810(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!__LIB_0__::func_878(joaat("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = __LIB_0__::func_23();
							__LIB_1__::func_446(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							__LIB_1__::func_612(joaat("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						__LIB_0__::func_879();
						break;
					case 37:
						__LIB_0__::func_880();
						if (__LIB_0__::func_26())
						{
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), iVar14);
						}
						break;
					case 38:
						__LIB_0__::func_881();
						break;
					case 43:
						__LIB_0__::func_882();
						break;
					case 44:
						if (!__LIB_1__::func_25(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_2398(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[82 /*49*/].f_3)), iVar14);
						}
						if (!__LIB_1__::func_25(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_2398(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[83 /*49*/].f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						__LIB_0__::func_883();
						break;
					case 59:
						__LIB_0__::func_884();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						__LIB_0__::func_885();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						__LIB_0__::func_886();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SURV_ROOT"), true);
							__LIB_1__::func_240(451, 0);
						}
						if (!__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_05")))
						{
							if (__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_04")))
							{
								iVar16 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (__LIB_0__::func_315(4))
						{
							if (!__LIB_1__::func_707(joaat("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_1701(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1701(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_1__::func_146(89200);
						__LIB_1__::func_146(2300);
						__LIB_1__::func_146(2300);
						break;
					case 68:
						__LIB_0__::func_887();
						break;
					case 76:
						if (Global_1425247.f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[108 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[69 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[70 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[7 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[22 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[23 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[65 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[7 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[8 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[36 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[48 /*74*/].f_8)), iVar14);
						__LIB_0__::func_888();
						__LIB_1__::func_146(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_1__::func_146(-6000);
						}
						break;
					case 70:
						__LIB_1__::func_146(23400);
						__LIB_1__::func_146(1900);
						__LIB_1__::func_146(-15000);
						break;
					case 71:
						__LIB_1__::func_146(-5500);
						break;
				}
				break;
			case 8:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444 /* GXTEntry: "Penelope Braithwaite" */);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DORKINS"));
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calderón" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hernández" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548 /* GXTEntry: "Billy Midnight" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082 /* GXTEntry: "Black Belle" */);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767 /* GXTEntry: "Slim Grant" */);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465 /* GXTEntry: "Mr. Black" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187 /* GXTEntry: "Mr. White" */);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DOCTOR"));
						break;
					case 58:
						__LIB_0__::func_889();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171 /* GXTEntry: "Lilly Millet" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						__LIB_0__::func_890();
						break;
					case 66:
						__LIB_0__::func_891();
						__LIB_1__::func_599();
						break;
					case 67:
						if (!__LIB_0__::func_892(6))
						{
							__LIB_0__::func_893(6);
						}
						if (!__LIB_0__::func_892(3))
						{
							__LIB_0__::func_893(3);
						}
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_RINGMASTER"));
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833 /* GXTEntry: "Mary Linton" */);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MASON"));
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131 /* GXTEntry: "Bertram" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117 /* GXTEntry: "Magnifico" */);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WARVET"));
						break;
					case 9:
						if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(46500);
						}
						break;
				}
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						switch (__LIB_0__::func_872(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		__LIB_0__::func_894(iParam0);
		func_361();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_1__::func_777(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_1__::func_777(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_1__::func_777(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_1__::func_777(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_1__::func_777(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_1__::func_777(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_1__::func_777(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_1__::func_777(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_1__::func_777(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_1__::func_777(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_1701(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_1__::func_777(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_1__::func_777(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_1__::func_777(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_1__::func_777(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_1__::func_777(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 536870912))
				{
					__LIB_0__::func_896(11, 1);
				}
				switch (__LIB_0__::func_76(iParam0))
				{
					case 109:
						__LIB_1__::func_777(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_1__::func_777(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_1__::func_777(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_1__::func_777(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_1__::func_777(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!__LIB_0__::func_291(iParam0) == 0)
			{
				if (__LIB_0__::func_299(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						__LIB_1__::func_790(__LIB_1__::func_613(Global_1879514.f_1));
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			__LIB_0__::func_703(bParam2, iVar20);
		}
	}
	__LIB_0__::func_301(1);
	if ((bVar13 || __LIB_1__::func_195()) && (__LIB_0__::func_700(iParam0) == 1 || __LIB_0__::func_700(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

int func_2450(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	uVar0 = Global_1326862.f_512[iParam1];
	iVar1 = Global_1326862.f_558[iParam1];
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == Global_1326862.f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

int func_2455(int iParam0, int iParam1)
{
	var uVar0;
	return func_2716(&uVar0, iParam0, iParam1);
}

int func_2469(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 != 0)
	{
		iVar0 = __LIB_10__::func_645(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_2450(iParam0, iVar1);
		if (iVar2 == -1)
		{
			return 0;
		}
		return Global_17504.f_2205[iVar2 /*2*/];
	}
	return 0;
}

void func_2481(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, __LIB_7__::func_991(iParam0), iParam1, sParam2, bParam3, false, false);
	if (bParam4)
	{
		__LIB_4__::func_59(__LIB_7__::func_998(iParam0), sParam2, __LIB_7__::func_995(), __LIB_7__::func_994(iParam0), joaat("PLAYER_MENU"), 0, -1, -2, 0, 0, 0, 0, 1, 1, 0);
	}
}

void func_2613()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	AUDIO::STOP_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
	HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
}

struct<8> func_2614()
{
	char cVar0[64];
	int iVar8;
	StringCopy(&cVar0, "script@fast_travel@sky@skytl_", 64);
	iVar8 = (CLOCK::GET_CLOCK_HOURS() * 60 + CLOCK::GET_CLOCK_MINUTES());
	if (iVar8 > 1350 || iVar8 <= 90)
	{
		StringConCat(&cVar0, "0000", 64);
	}
	else if (iVar8 > 90 && iVar8 <= 270)
	{
		StringConCat(&cVar0, "0300", 64);
	}
	else if (iVar8 > 270 && iVar8 <= 450)
	{
		StringConCat(&cVar0, "0600", 64);
	}
	else if (iVar8 > 450 && iVar8 <= 630)
	{
		StringConCat(&cVar0, "0900", 64);
	}
	else if (iVar8 > 630 && iVar8 <= 810)
	{
		StringConCat(&cVar0, "1200", 64);
	}
	else if (iVar8 > 810 && iVar8 <= 990)
	{
		StringConCat(&cVar0, "1500", 64);
	}
	else if (iVar8 > 990 && iVar8 <= 1170)
	{
		StringConCat(&cVar0, "1800", 64);
	}
	else if (iVar8 > 1170 && iVar8 <= 1350)
	{
		StringConCat(&cVar0, "2100", 64);
	}
	StringConCat(&cVar0, "_", 64);
	switch (MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME())
	{
		case joaat("HIGHPRESSURE"):
		case joaat("SUNNY"):
		case default:
			StringConCat(&cVar0, "01clear", 64);
			break;
		case joaat("DRIZZLE"):
		case joaat("OVERCAST"):
		case joaat("FOG"):
		case joaat("SHOWER"):
		case joaat("OVERCASTDARK"):
		case joaat("CLOUDS"):
		case joaat("RAIN"):
		case joaat("MISTY"):
			StringConCat(&cVar0, "03clouds", 64);
			break;
		case joaat("SANDSTORM"):
		case joaat("THUNDER"):
		case joaat("SNOW"):
		case joaat("SLEET"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("HURRICANE"):
		case joaat("SNOWCLEARING"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
		case joaat("GROUNDBLIZZARD"):
			StringConCat(&cVar0, "04storm", 64);
			break;
	}
	return cVar0;
}

bool func_2615(int iParam0)
{
	if (Global_1899528.f_45[iParam0] == -15)
	{
		return true;
	}
	if (Global_1899528.f_53[iParam0] == 0)
	{
		return true;
	}
	return __LIB_11__::func_610(Global_1899528.f_45[iParam0]);
}

void func_2646()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_2832();
	func_2833();
	func_2834();
	func_2835();
	func_2836();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_2647(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1602(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		__LIB_1__::func_798(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(__LIB_1__::func_710(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	__LIB_0__::func_921(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
				{
					__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
		{
			__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946804.f_1378.f_1[iVar1 /*3*/] = { Global_1946804.f_1616.f_1[iVar1 /*3*/] };
		iVar1++;
	}
}

int func_2716(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = __LIB_0__::func_27(iParam1, 128);
	Var23.f_9 = -1591664384;
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
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!__LIB_0__::func_27(iParam1, 512) && __LIB_1__::func_280(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_IS_WEAPON_ONE_HANDED(Var4.f_4) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 32))) && (!WEAPON::_IS_WEAPON_PISTOL(Var4.f_4) || !__LIB_0__::func_27(iParam1, 16777216))) && (!WEAPON::_IS_WEAPON_REVOLVER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 33554432)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	if (__LIB_0__::func_154(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512))
	{
		iParam1 |= 512;
		return func_2716(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2832()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_2942(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			__LIB_1__::func_851();
		}
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	__LIB_1__::func_116();
	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("NBD1")) >= 2)
	{
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
	{
		return;
	}
	func_2942(1);
}

void func_2833()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_1701(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_2834()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_2945(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_2945(1);
}

void func_2835()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_2945(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	__LIB_1__::func_616(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_2945(1);
}

void func_2836()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_1701(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(1))
			{
				__LIB_0__::func_368(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_1701(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(2))
			{
				__LIB_0__::func_368(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !__LIB_0__::func_458(4))
		{
			__LIB_0__::func_368(4);
		}
		if (__LIB_0__::func_458(0))
		{
			__LIB_0__::func_459(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_1602(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1602(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
			}
		}
		if (__LIB_0__::func_458(1))
		{
			__LIB_0__::func_459(1);
		}
		if (__LIB_0__::func_458(2))
		{
			__LIB_0__::func_459(2);
		}
		if (__LIB_0__::func_458(4))
		{
			__LIB_0__::func_459(4);
		}
		if (!__LIB_0__::func_458(0))
		{
			__LIB_0__::func_368(0);
		}
	}
}

void func_2942(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_1701(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1701(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1701(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2980(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_2647(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1602(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2986(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		__LIB_1__::func_178(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (__LIB_0__::func_809(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				__LIB_0__::func_810(iVar6, iVar7);
				__LIB_0__::func_811(iVar6, iVar8);
				__LIB_0__::func_812(iVar6, iVar9);
				__LIB_0__::func_813(iVar6, 0);
				if (__LIB_1__::func_127(iVar6))
				{
					__LIB_1__::func_608(iVar6);
				}
				iVar10 = __LIB_0__::func_553(iVar8);
				__LIB_1__::func_820(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

void func_2945(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1701(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1701(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1701(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1701(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1701(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1701(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1701(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1701(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1701(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1701(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1701(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1602(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1602(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1602(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1602(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1602(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1602(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1602(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1602(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1602(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1602(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1602(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		__LIB_1__::func_178(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (__LIB_0__::func_809(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				__LIB_0__::func_810(iVar0, iVar1);
				__LIB_0__::func_811(iVar0, iVar2);
				__LIB_0__::func_812(iVar0, iVar3);
				__LIB_0__::func_813(iVar0, 0);
				if (__LIB_1__::func_127(iVar0))
				{
					__LIB_1__::func_608(iVar0);
				}
				iVar4 = __LIB_0__::func_553(iVar2);
				__LIB_1__::func_820(iVar0, iVar4);
			}
			iVar0++;
		}
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

void func_2980(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;
	func_1602(iParam0, 1, 1, -142743235, 1);
	iVar34 = __LIB_1__::func_415(iParam0, &uVar18);
	__LIB_1__::func_82(iParam0, &uVar18, &iVar34, 1);
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	__LIB_0__::func_827(iParam0, &(Global_26796.f_627.f_121.f_20));
	__LIB_1__::func_798(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_1602(uVar18[iVar36], 1, 1, -142743235, 1);
		switch (__LIB_0__::func_357(uVar18[iVar36]))
		{
			case -2061583405:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		__LIB_1__::func_798(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(__LIB_1__::func_710(uVar18[iVar36]), 1);
		iVar36++;
	}
	__LIB_0__::func_608(&(Global_1946804.f_1616));
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == __LIB_0__::func_780(iVar0[iVar36], iVar35))
			{
				__LIB_1__::func_798(__LIB_0__::func_998(iVar35), 1, 1);
				__LIB_0__::func_999(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!__LIB_0__::func_65(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946804.f_1497.f_1[iVar37 /*3*/] = { Global_1946804.f_1616.f_1[iVar37 /*3*/] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_1946804.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
	{
		if (!__LIB_0__::func_609(8))
		{
			if (__LIB_0__::func_241() == -2125499975)
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					__LIB_0__::func_828(Global_40.f_7729, 4096);
					__LIB_0__::func_806(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					__LIB_1__::func_811(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_26796.f_627.f_1.f_1.f_1[iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	Global_1946804.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946804.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946804.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946804.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946804.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946804.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946804.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946804.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946804.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946804.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946804.f_1616.f_1[iVar36 /*3*/] };
		iVar36++;
	}
}

void func_2986(struct<6> Param0)
{
	if (!func_3041(Param0.f_4, 1))
	{
	}
	if (!func_3041(Param0, 1))
	{
	}
	if (!func_3041(Param0.f_2, 1))
	{
	}
	if (!func_3041(Param0.f_5, 1))
	{
	}
	if (!func_3041(Param0.f_3, 1))
	{
	}
	if (!func_3041(Param0.f_1, 1))
	{
	}
}

bool func_3041(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_703(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { __LIB_1__::func_124() };
	Var14 = { __LIB_0__::func_429(iParam0, Var10, iVar9, 0) };
	if (__LIB_1__::func_556(Var14, iParam1))
	{
		if (__LIB_0__::func_847(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_3041(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_3041(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_3041(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_3041(iVar21, 1))
				{
				}
			}
		}
		__LIB_13__::func_293();
		return true;
	}
	return false;
}

