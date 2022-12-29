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
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#endregion
void __EntryFunction__()
{
	struct<2> Var0;
	int iVar179;
	bool bVar180;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	Var0.f_1 = ScriptParam_0.f_2;
	Var0.f_1.f_2 = 1f;
	iVar179 = __LIB_9__::func_316(Var0.f_1, -949239683);
	bVar180 = false;
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (!ScriptParam_0.f_3)
		{
			__LIB_9__::func_311(&(Var0.f_1));
		}
		switch (Var0)
		{
			case 0:
				if (__LIB_0__::func_144(Var0.f_1, 0))
				{
					bVar180 = true;
					__LIB_9__::func_269(&(Var0.f_1));
				}
				if (ScriptParam_0.f_3)
				{
					Var0.f_1.f_2 = 1f;
					__LIB_0__::func_19(&Var0, 2);
				}
				else
				{
					__LIB_0__::func_19(&Var0, 1);
				}
				break;
			case 1:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					Var0.f_1.f_1++;
					func_6(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
					func_7(Var0.f_1, 0);
					if (iVar179 != 845883585)
					{
					}
					else
					{
						if (!__LIB_7__::func_790())
						{
							func_11(__LIB_12__::func_488(__LIB_9__::func_434()), Global_35, -1, 1);
						}
						__LIB_7__::func_174(0);
						func_13();
					}
					if (Var0.f_1 != joaat("CONSUMABLE_HAIR_TONIC"))
					{
					}
					else
					{
						func_14();
					}
				}
				if (IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2)
				{
					__LIB_0__::func_19(&Var0, 3);
				}
				break;
			case 2:
				func_15(&Var0, iVar179, bVar180);
				__LIB_0__::func_19(&Var0, 3);
				break;
			case 3:
				if (ScriptParam_0.f_3)
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (Var0 <= 1)
	{
		func_15(&Var0, iVar179, bVar180);
	}
}

void func_6(var uParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	if ((__LIB_0__::func_192(*uParam0, 1573112293) || __LIB_0__::func_192(*uParam0, 672467738)) || __LIB_0__::func_192(*uParam0, -550842268))
	{
		bVar8 = true;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1935496.f_26 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		if (-943921969 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar1 = __LIB_9__::func_271(0, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
			__LIB_9__::func_272((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 1);
			__LIB_0__::func_597(0, 7000);
			bVar10 = true;
		}
		else if (-1104847406 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar2 = __LIB_9__::func_271(2, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
			__LIB_9__::func_273((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
			__LIB_0__::func_597(2, 7000);
			bVar9 = true;
		}
		else if (381158954 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar3 = __LIB_9__::func_271(1, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
			__LIB_9__::func_274((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
			__LIB_0__::func_597(1, 7000);
		}
		else if (-416929031 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar4 = __LIB_6__::func_41((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
			if (__LIB_7__::func_848(&(uParam0->f_9), &(uParam0->f_10), fVar4))
			{
				__LIB_9__::func_160(fVar4, 1, bVar8, 1);
				__LIB_0__::func_597(0, 7000);
			}
			bVar10 = true;
		}
		else if (1857353317 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar5 = __LIB_6__::func_41((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
			if (__LIB_7__::func_848(&(uParam0->f_9), &(uParam0->f_10), fVar5))
			{
				__LIB_9__::func_159(fVar5, 1, bVar8, 1);
				__LIB_0__::func_597(2, 7000);
				bVar9 = true;
			}
		}
		else if (1681823811 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar6 = __LIB_6__::func_41((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
			if (__LIB_7__::func_848(&(uParam0->f_9), &(uParam0->f_10), fVar6))
			{
				__LIB_9__::func_158(fVar6, 1, bVar8, 1);
				__LIB_0__::func_597(1, 7000);
			}
		}
		else if (-816334026 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			__LIB_7__::func_841((BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 1 == uParam0->f_1);
		}
		else if (bParam1)
		{
			if (2062242710 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(19, fVar7);
				bVar10 = true;
			}
			else if (-826379728 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(20, fVar7);
				bVar9 = true;
			}
			else if (-1191740624 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(18, fVar7);
			}
			else if (1869697234 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(0, fVar7);
				bVar10 = true;
			}
			else if (1342237631 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(2, fVar7);
				bVar9 = true;
			}
			else if (-1240225157 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(1, fVar7);
			}
		}
		iVar0++;
	}
	if (bVar10)
	{
		if (fVar4 > 0f || fVar1 > 0f)
		{
			iVar11 = 1;
		}
	}
	__LIB_9__::func_312(*uParam0, bParam1, bVar9, iVar11);
	__LIB_9__::func_270(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

void func_7(int iParam0, bool bParam1)
{
	float fVar0;
	struct<10> Var1;
	struct<16> Var11;
	switch (iParam0)
	{
		case joaat("CONSUMABLE_GINSENG_ELIXIER"):
			if (__LIB_0__::func_963(0) >= 7)
			{
				__LIB_1__::func_424(244, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 1);
			}
			__LIB_1__::func_696(19);
			break;
		case joaat("CONSUMABLE_VALERIAN_ROOT"):
			if (__LIB_0__::func_963(2) >= 7)
			{
				__LIB_1__::func_424(243, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 1);
			}
			__LIB_1__::func_696(50);
			break;
		case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
			if (__LIB_0__::func_963(1) >= 7)
			{
				__LIB_1__::func_424(245, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 1);
			}
			__LIB_1__::func_696(30);
			break;
		case joaat("CONSUMABLE_COVER_SCENT_USED"):
		case joaat("CONSUMABLE_COVER_SCENT"):
			if (iParam0 == joaat("CONSUMABLE_COVER_SCENT"))
			{
				__LIB_9__::func_317(0, 60000);
				fVar0 = 0.25f;
			}
			else if (iParam0 == joaat("CONSUMABLE_COVER_SCENT_USED"))
			{
				__LIB_9__::func_317(0, 30000);
				fVar0 = 0.5f;
			}
			__LIB_1__::func_240(580, 1);
			PED::_SET_PED_SCENT(Global_35, fVar0);
			break;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
		case joaat("CONSUMABLE_HERB_YARROW"):
		case joaat("CONSUMABLE_HERB_MILKWEED"):
		case joaat("CONSUMABLE_HERB_GINSENG"):
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			__LIB_1__::func_299(0);
			break;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			if ((bParam1 || !__LIB_9__::func_303()) || !PED::IS_PED_ON_FOOT(Global_35))
			{
				return;
			}
			if (iParam0 != joaat("CONSUMABLE_HERB_PRAIRIE_POPPY") || MISC::GET_RANDOM_INT_IN_RANGE(0, 3000) < 1000)
			{
				Var11 = { Var1 };
				StringCopy(&(Var11.f_10), "generic_puking_item", 32);
				Var11.f_14 = 512;
				__LIB_4__::func_709(Var11, 0);
			}
			break;
		case joaat("CONSUMABLE_POTENT_ANTIDOTE"):
		case joaat("CONSUMABLE_ANTIDOTE"):
			if (iParam0 == joaat("CONSUMABLE_ANTIDOTE"))
			{
				MISC::SET_BIT(&Global_1051038, 0);
			}
			else if (iParam0 == joaat("CONSUMABLE_POTENT_ANTIDOTE"))
			{
				MISC::SET_BIT(&Global_1051038, 1);
			}
			break;
	}
}

int func_11(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_41(iParam0, 0, 1, 1, 1))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = Global_40.f_7748.f_1;
	}
	__LIB_10__::func_826(iParam2);
	if (bParam3)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			__LIB_5__::func_801(1, 64, 0, 0, 0);
		}
		else
		{
			__LIB_5__::func_801(1, 64, 1, iParam1, 0);
		}
	}
	__LIB_0__::func_245(1);
	return 1;
}

void func_13()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = Global_1946804.f_1378.f_1[iVar0 /*3*/];
	if (!__LIB_7__::func_790() && __LIB_9__::func_435(iVar1))
	{
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = __LIB_9__::func_436(iVar1);
	}
	__LIB_0__::func_245(0);
	Global_1946804.f_1497.f_1[iVar0 /*3*/] = { Global_1946804.f_1378.f_1[iVar0 /*3*/] };
	__LIB_9__::func_441();
	Global_40.f_7748.f_2 = __LIB_9__::func_434();
	func_52(Global_1946804.f_2656, 0);
	__LIB_9__::func_446();
}

void func_14()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (Global_40.f_7731[iVar8 /*5*/] >= 10)
		{
		}
		else if (Global_40.f_7731[iVar8 /*5*/].f_2 == 3)
		{
		}
		else
		{
			if (Global_40.f_7731[iVar8 /*5*/].f_2 < 1)
			{
				__LIB_4__::func_660(iVar8, 1);
			}
			else if (Global_40.f_7731[iVar8 /*5*/].f_2 < 2)
			{
				__LIB_4__::func_660(iVar8, 2);
			}
			else if (Global_40.f_7731[iVar8 /*5*/].f_2 < 3)
			{
				__LIB_4__::func_660(iVar8, 3);
			}
			iVar0 = Global_40.f_7731[iVar8 /*5*/].f_3;
			bVar7 = __LIB_1__::func_426(iVar0, 1);
			func_56(iVar0, __LIB_0__::func_23(), &iVar6, &iVar5, &iVar4, &iVar3, &uVar2, &uVar1);
			if (Global_40.f_7731[iVar8 /*5*/] >= 7)
			{
				Global_40.f_7731[iVar8 /*5*/].f_4 = 2;
				func_56(iVar0, __LIB_0__::func_23(), &iVar6, &iVar5, &iVar4, &iVar3, &uVar2, &uVar1);
			}
			else
			{
				if (!bVar7)
				{
					func_57(&iVar3, &iVar4, &iVar5, &iVar6, bVar7, 2);
					iVar0 = __LIB_0__::func_23();
					__LIB_1__::func_446(&iVar0, iVar6, iVar5, iVar4, iVar3, 0, 0, 0);
					Global_40.f_7731[iVar8 /*5*/].f_3 = iVar0;
				}
				Global_40.f_7731[iVar8 /*5*/].f_4 = 2;
			}
		}
		iVar8++;
	}
	if (Global_40.f_7748.f_1 >= 9)
	{
		return;
	}
	if (__LIB_4__::func_676(8))
	{
		return;
	}
	if (!__LIB_4__::func_676(2))
	{
		__LIB_9__::func_931(2);
	}
	else if (!__LIB_4__::func_676(4))
	{
		__LIB_9__::func_931(4);
	}
	else if (!__LIB_4__::func_676(8))
	{
		__LIB_9__::func_931(8);
	}
	iVar0 = Global_40.f_7748.f_5;
	bVar7 = __LIB_1__::func_426(iVar0, 1);
	func_56(iVar0, __LIB_0__::func_23(), &iVar6, &iVar5, &iVar4, &iVar3, &uVar2, &uVar1);
	if (Global_40.f_7748.f_1 >= 9)
	{
		Global_40.f_7748.f_6 = 2;
		func_56(iVar0, __LIB_0__::func_23(), &iVar6, &iVar5, &iVar4, &iVar3, &uVar2, &uVar1);
	}
	else
	{
		if (!bVar7)
		{
			func_57(&iVar3, &iVar4, &iVar5, &iVar6, bVar7, 2);
			iVar0 = __LIB_0__::func_23();
			__LIB_1__::func_446(&iVar0, iVar6, iVar5, iVar4, iVar3, 0, 0, 0);
			Global_40.f_7748.f_5 = iVar0;
		}
		Global_40.f_7748.f_6 = 2;
	}
}

void func_15(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 845883585)
	{
		__LIB_7__::func_174(0);
		if (!__LIB_7__::func_790())
		{
			func_11(__LIB_12__::func_488(__LIB_9__::func_434()), Global_35, -1, 1);
			func_13();
		}
	}
	if (iParam0->f_1 == joaat("CONSUMABLE_HAIR_TONIC"))
	{
		func_14();
	}
	if (__LIB_0__::func_144(iParam0->f_1, 0) && !bParam2)
	{
		__LIB_9__::func_269(&(iParam0->f_1));
	}
	func_6(&(iParam0->f_1), 1);
	func_7(iParam0->f_1, 1);
}

bool func_41(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { __LIB_2__::func_3(iParam0, 1, 0) };
		iParam2 = __LIB_0__::func_161(__LIB_0__::func_709(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, 866047851) && __LIB_0__::func_545(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((__LIB_0__::func_156(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		__LIB_0__::func_968(__LIB_0__::func_158(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	__LIB_1__::func_40(iParam2);
	__LIB_1__::func_41(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		__LIB_0__::func_47(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		__LIB_0__::func_47(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	__LIB_14__::func_231(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = __LIB_0__::func_969(iParam0, iParam2, iParam1, __LIB_0__::func_2() != -1);
	if (bParam4)
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				__LIB_0__::func_550(__LIB_0__::func_158(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_52(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_4__::func_664(iParam0))
	{
		return;
	}
	if (Global_40.f_7748.f_1 == iParam0)
	{
		return;
	}
	Global_40.f_7748.f_1 = iParam0;
	if (!bParam1)
	{
		Global_40.f_7748.f_5 = __LIB_0__::func_23();
		bVar2 = (Global_40.f_7748.f_1 < 9 && __LIB_4__::func_631());
		func_136(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		__LIB_1__::func_446(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_1__::func_110(iParam0, iParam1, 1))
	{
		iVar0 = __LIB_0__::func_39(iParam1);
		iVar1 = __LIB_0__::func_710(iParam0);
		iVar2 = (__LIB_0__::func_710(iParam0) - __LIB_0__::func_710(iParam1));
		iVar3 = (__LIB_0__::func_39(iParam0) - __LIB_0__::func_39(iParam1));
		iVar4 = (__LIB_0__::func_40(iParam0) - __LIB_0__::func_40(iParam1));
		iVar5 = (__LIB_0__::func_41(iParam0) - __LIB_0__::func_41(iParam1));
		iVar6 = (__LIB_0__::func_42(iParam0) - __LIB_0__::func_42(iParam1));
		iVar7 = (__LIB_0__::func_43(iParam0) - __LIB_0__::func_43(iParam1));
	}
	else
	{
		iVar0 = __LIB_0__::func_39(iParam0);
		iVar1 = __LIB_0__::func_710(iParam1);
		iVar2 = (__LIB_0__::func_710(iParam1) - __LIB_0__::func_710(iParam0));
		iVar3 = (__LIB_0__::func_39(iParam1) - __LIB_0__::func_39(iParam0));
		iVar4 = (__LIB_0__::func_40(iParam1) - __LIB_0__::func_40(iParam0));
		iVar5 = (__LIB_0__::func_41(iParam1) - __LIB_0__::func_41(iParam0));
		iVar6 = (__LIB_0__::func_42(iParam1) - __LIB_0__::func_42(iParam0));
		iVar7 = (__LIB_0__::func_43(iParam1) - __LIB_0__::func_43(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + __LIB_0__::func_44(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(__LIB_0__::func_70(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	fVar3 = BUILTIN::TO_FLOAT(iParam5);
	iVar0 = __LIB_4__::func_674(BUILTIN::TO_FLOAT(*iParam0), fVar3);
	iVar1 = __LIB_4__::func_675(BUILTIN::TO_FLOAT(*iParam1), fVar3);
	iVar2 = __LIB_4__::func_675(BUILTIN::TO_FLOAT(*iParam2), fVar3);
	*iParam0 = (*iParam0 / iParam5);
	*iParam1 = (*iParam1 / iParam5);
	*iParam2 = (*iParam2 / iParam5);
	*iParam3 = (*iParam3 / iParam5);
	*iParam1 = (*iParam1 + iVar0);
	*iParam2 = (*iParam2 + iVar1);
	*iParam3 = (*iParam3 + iVar2);
	if (bParam4)
	{
		*iParam3 = (*iParam3 * -1);
		*iParam2 = (*iParam2 * -1);
		*iParam1 = (*iParam1 * -1);
		*iParam0 = (*iParam0 * -1);
	}
}

void func_136(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 2:
			*iParam1 = 4;
			*iParam2 = 0;
			break;
		case 3:
			*iParam1 = 8;
			*iParam2 = 0;
			break;
		case 4:
			*iParam1 = 12;
			*iParam2 = 0;
			break;
		case 5:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 6:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 7:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 8:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 9:
			*iParam1 = 52;
			*iParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_57(iParam1, iParam2, &uVar0, &uVar1, 0, __LIB_8__::func_989());
	}
}

